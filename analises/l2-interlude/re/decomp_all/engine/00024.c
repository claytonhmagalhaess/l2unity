// ==== 10511fea Catch@10511fea

void Catch_10511fea(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"APawn::MagicProcess");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10512160 FUN_10512160

void FUN_10512160(void)

{
  int *piVar1;
  AActor *pAVar2;
  FName *pFVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  APawn *in_ECX;
  APawn *extraout_ECX;
  APawn *extraout_ECX_00;
  APawn *extraout_ECX_01;
  APawn *extraout_ECX_02;
  APawn *extraout_ECX_03;
  FOutputDevice *extraout_ECX_04;
  FOutputDevice *extraout_ECX_05;
  APawn *this;
  AActor **ppAVar7;
  FName *pFVar8;
  AActor *local_40;
  int local_3c;
  int local_38;
  FName local_34 [4];
  undefined1 local_30 [4];
  int local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10818da0;
  local_10 = ExceptionList;
  local_14 = &stack0xffffff78;
  local_8 = 0;
  local_18 = *(undefined4 *)(in_ECX + (uint)(byte)in_ECX[0x71d] * 4 + 0xecc);
  pFVar8 = (FName *)0x0;
  ExceptionList = &local_10;
  pFVar3 = (FName *)APawn::GetCurAnimName(in_ECX,(int)&local_40);
  iVar4 = FName::operator==(pFVar3,pFVar8);
  if (iVar4 == 0) {
    local_1c = *(undefined4 *)(in_ECX + (uint)(byte)in_ECX[0x71d] * 4 + 0xeec);
    pFVar8 = (FName *)0x0;
    pFVar3 = (FName *)APawn::GetCurAnimName(in_ECX,(int)&local_40);
    iVar4 = FName::operator==(pFVar3,pFVar8);
    if (iVar4 == 0) {
      local_20 = *(undefined4 *)(in_ECX + (uint)(byte)in_ECX[0x71d] * 4 + 0xf0c);
      pFVar8 = (FName *)0x0;
      pFVar3 = (FName *)APawn::GetCurAnimName(in_ECX,(int)&local_40);
      iVar4 = FName::operator==(pFVar3,pFVar8);
      if (iVar4 == 0) {
        local_24 = *(undefined4 *)(in_ECX + (uint)(byte)in_ECX[0x71d] * 4 + 0xf2c);
        pFVar8 = (FName *)0x0;
        pFVar3 = (FName *)APawn::GetCurAnimName(in_ECX,(int)&local_40);
        iVar4 = FName::operator==(pFVar3,pFVar8);
        if (iVar4 == 0) {
          local_28 = *(undefined4 *)(in_ECX + (uint)(byte)in_ECX[0x71d] * 4 + 0xf6c);
          pFVar8 = (FName *)0x0;
          pFVar3 = (FName *)APawn::GetCurAnimName(in_ECX,(int)&local_40);
          iVar4 = FName::operator==(pFVar3,pFVar8);
          this = extraout_ECX;
          if (iVar4 == 0) goto LAB_105122a4;
        }
      }
    }
  }
  iVar4 = *(int *)in_ECX;
  ppAVar7 = &local_40;
  puVar5 = (undefined4 *)APawn::GetCurWaitAnimName(in_ECX);
  (**(code **)(iVar4 + 0x328))(0,*puVar5,*(undefined4 *)(in_ECX + 0x6b4),0,1,0,ppAVar7);
  this = extraout_ECX_00;
LAB_105122a4:
  local_8 = CONCAT31(local_8._1_3_,1);
  iVar4 = *(int *)(in_ECX + 0x1654);
  while (iVar4 = iVar4 + -1, local_2c = iVar4, -1 < iVar4) {
    this = in_ECX + 0x1650;
    puVar5 = *(undefined4 **)(*(int *)this + iVar4 * 4);
    if ((puVar5 != (undefined4 *)0x0) && (*(char *)(puVar5 + 2) == '\x02')) {
      thunk_FUN_10384f90(iVar4,1);
      (**(code **)*puVar5)(1);
      this = extraout_ECX_01;
    }
  }
  local_8 = 3;
  if ((*(int *)(in_ECX + 0x520) != 0) &&
     (this = (APawn *)0x0, *(int *)(*(int *)(in_ECX + 0x520) + 0x380) != 0)) {
    thunk_FUN_104e9650(local_30);
    this = extraout_ECX_02;
  }
  local_8 = 5;
  iVar4 = *(int *)(in_ECX + 0x554);
  if (iVar4 != 0) {
    while (iVar4 = iVar4 + -1, local_38 = iVar4, -1 < iVar4) {
      this = (APawn *)0x0;
      if (*(int *)(*(int *)(*(int *)(in_ECX + 0x550) + iVar4 * 4) + 0x380) != 0) {
        thunk_FUN_104e9650(local_34);
        this = extraout_ECX_03;
      }
    }
  }
  local_8 = 7;
  if (*(int *)(in_ECX + 0x560) != 0) {
    local_3c = *(int *)(in_ECX + 0x560) + -1;
    while (iVar4 = local_3c, -1 < local_3c) {
      piVar1 = (int *)(*(int *)(in_ECX + 0x55c) + local_3c * 4);
      if (*piVar1 == 0) {
        if (*(int *)GLog_exref != 0) {
          FOutputDevice::Logf2((FOutputDevice *)this,*(ushort **)GLog_exref);
          this = (APawn *)extraout_ECX_05;
        }
        local_3c = iVar4 + -1;
      }
      else {
        (**(code **)(**(int **)(in_ECX + 0xe4) + 0xac))(*piVar1,0);
        local_3c = iVar4 + -1;
        this = (APawn *)extraout_ECX_04;
      }
    }
  }
  local_8 = 9;
  if (*(int *)(in_ECX + 0x374) != 0) {
    if ((1 < *(int *)(in_ECX + 0x374)) && (*(int *)GLog_exref != 0)) {
      FOutputDevice::Logf2(*(FOutputDevice **)GLog_exref,(ushort *)*(FOutputDevice **)GLog_exref);
    }
    iVar4 = *(int *)(in_ECX + 0x374);
    while (iVar4 = iVar4 + -1, -1 < iVar4) {
      pAVar2 = *(AActor **)(*(int *)(in_ECX + 0x370) + iVar4 * 4);
      if (pAVar2 != (AActor *)0x0) {
        FName::FName(local_34,0);
        iVar6 = FName::operator!=((FName *)(pAVar2 + 0xd8),local_34);
        if (iVar6 != 0) {
          AActor::DetachFromBone((AActor *)in_ECX,pAVar2);
        }
        if (*(int *)(pAVar2 + 0x4e4) != 0) {
          local_40 = pAVar2;
          thunk_FUN_104e9650(&local_40);
        }
        (**(code **)(**(int **)(in_ECX + 0xe4) + 0xac))(pAVar2,0);
      }
    }
    for (iVar4 = 0; iVar4 < *(int *)(in_ECX + 0x374); iVar4 = iVar4 + 1) {
    }
    FArray::Empty((FArray *)(in_ECX + 0x370),4,0);
  }
  local_8 = 0;
  piVar1 = *(int **)(*(int *)(*(int *)(in_ECX + 0xe4) + 0x74) + 0x60);
  if ((piVar1 != (int *)0x0) &&
     (iVar4 = (**(code **)(*piVar1 + 0x94))(*(undefined4 *)(in_ECX + 0x60)), iVar4 != 0)) {
    *(undefined4 *)(iVar4 + 0x1e0) = 1;
    *(undefined4 *)(iVar4 + 0x1e4) = 0;
    *(undefined4 *)(iVar4 + 0x1e8) = 0;
  }
  APawn::SetRotationRate();
  FNMagicInfo::Clear((FNMagicInfo *)(in_ECX + 0x4f0),1);
  for (iVar4 = 0; iVar4 < *(int *)(in_ECX + 0x374); iVar4 = iVar4 + 1) {
  }
  FArray::Empty((FArray *)(in_ECX + 0x370),4,0);
  *(uint *)(in_ECX + 0x70c) = *(uint *)(in_ECX + 0x70c) & 0xfffffffe;
  *(undefined4 *)(in_ECX + 0x62c) = 0;
  *(undefined4 *)(in_ECX + 0x63c) = 0;
  APawn::NPrimeActionEnd(in_ECX);
  ExceptionList = local_10;
  return;
}


// ==== 10512573 Catch@10512573

void Catch_10512573(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x4c) = *(undefined4 *)(unaff_EBP + -100);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x4c,&DAT_10914c48);
}


// ==== 10512587 Catch@10512587

void Catch_10512587(void)

{
  appUnwindf((ushort *)&DAT_10851d80,&DAT_108ac4bc);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 105125a3 Catch@105125a3

void Catch_105125a3(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x50) = *(undefined4 *)(unaff_EBP + -0x68);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x50,&DAT_10914c48);
}


// ==== 105125b7 Catch@105125b7

void Catch_105125b7(void)

{
  appUnwindf((ushort *)&DAT_10851d80,&DAT_108ac4b8);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 105125be Catch@105125be

void Catch_105125be(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x54) = *(undefined4 *)(unaff_EBP + -0x6c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x54,&DAT_10914c48);
}


// ==== 105125cf Catch@105125cf

void Catch_105125cf(void)

{
  appUnwindf((ushort *)&DAT_10851d80,&DAT_108ac4b4);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 105125d6 Catch@105125d6

void Catch_105125d6(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x58) = *(undefined4 *)(unaff_EBP + -0x70);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x58,&DAT_10914c48);
}


// ==== 105125e7 Catch@105125e7

void Catch_105125e7(void)

{
  appUnwindf((ushort *)&DAT_10851d80,&DAT_108ac4b0);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 105125ee Catch@105125ee

void Catch_105125ee(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x5c) = *(undefined4 *)(unaff_EBP + -0x74);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x5c,&DAT_10914c48);
}


// ==== 105125ff Catch@105125ff

void Catch_105125ff(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"APawn::MagicStop::deletelights");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10512606 Catch@10512606

void Catch_10512606(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x60) = *(undefined4 *)(unaff_EBP + -0x78);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x60,&DAT_10914c48);
}


// ==== 10512617 Catch@10512617

void Catch_10512617(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"APawn::MagicStop");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10512760 FUN_10512760

void FUN_10512760(void)

{
  AActor *pAVar1;
  int *piVar2;
  FName *pFVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  FRotator *pFVar7;
  APawn *in_ECX;
  FOutputDevice *extraout_ECX;
  FOutputDevice *extraout_ECX_00;
  FOutputDevice *extraout_ECX_01;
  FOutputDevice *this;
  FOutputDevice *extraout_ECX_02;
  AActor **ppAVar8;
  FName *pFVar9;
  FRotator local_90 [68];
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  AActor *local_38;
  int local_34;
  FName local_30 [4];
  undefined1 local_2c [4];
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10818db0;
  local_10 = ExceptionList;
  local_14 = &stack0xffffff64;
  local_8 = 0;
  local_18 = *(undefined4 *)(in_ECX + (uint)(byte)in_ECX[0x71d] * 4 + 0xecc);
  pFVar9 = (FName *)0x0;
  ExceptionList = &local_10;
  pFVar3 = (FName *)APawn::GetCurAnimName(in_ECX,(int)&local_38);
  iVar4 = FName::operator==(pFVar3,pFVar9);
  if (iVar4 == 0) {
    local_1c = *(undefined4 *)(in_ECX + (uint)(byte)in_ECX[0x71d] * 4 + 0xeec);
    pFVar9 = (FName *)0x0;
    pFVar3 = (FName *)APawn::GetCurAnimName(in_ECX,(int)&local_38);
    iVar4 = FName::operator==(pFVar3,pFVar9);
    if (iVar4 == 0) {
      local_20 = *(undefined4 *)(in_ECX + (uint)(byte)in_ECX[0x71d] * 4 + 0xf0c);
      pFVar9 = (FName *)0x0;
      pFVar3 = (FName *)APawn::GetCurAnimName(in_ECX,(int)&local_38);
      iVar4 = FName::operator==(pFVar3,pFVar9);
      if (iVar4 == 0) {
        local_24 = *(undefined4 *)(in_ECX + (uint)(byte)in_ECX[0x71d] * 4 + 0xf2c);
        pFVar9 = (FName *)0x0;
        pFVar3 = (FName *)APawn::GetCurAnimName(in_ECX,(int)&local_38);
        iVar4 = FName::operator==(pFVar3,pFVar9);
        if (iVar4 == 0) {
          local_28 = *(undefined4 *)(in_ECX + (uint)(byte)in_ECX[0x71d] * 4 + 0xf6c);
          pFVar9 = (FName *)0x0;
          pFVar3 = (FName *)APawn::GetCurAnimName(in_ECX,(int)&local_38);
          iVar4 = FName::operator==(pFVar3,pFVar9);
          this = extraout_ECX;
          if (iVar4 == 0) goto LAB_105128a7;
        }
      }
    }
  }
  iVar4 = *(int *)in_ECX;
  ppAVar8 = &local_38;
  puVar5 = (undefined4 *)APawn::GetCurWaitAnimName(in_ECX);
  (**(code **)(iVar4 + 0x328))(0,*puVar5,*(undefined4 *)(in_ECX + 0x6b4),0,1,0,ppAVar8);
  this = extraout_ECX_00;
LAB_105128a7:
  local_8 = CONCAT31(local_8._1_3_,1);
  if ((*(int *)(in_ECX + 0x520) != 0) &&
     (this = (FOutputDevice *)0x0, *(int *)(*(int *)(in_ECX + 0x520) + 0x380) != 0)) {
    thunk_FUN_104e9650(local_2c);
    this = extraout_ECX_01;
  }
  local_8 = 3;
  iVar4 = *(int *)(in_ECX + 0x554);
  if (iVar4 != 0) {
    while (iVar4 = iVar4 + -1, local_34 = iVar4, -1 < iVar4) {
      this = (FOutputDevice *)0x0;
      if (*(int *)(*(int *)(*(int *)(in_ECX + 0x550) + iVar4 * 4) + 0x380) != 0) {
        thunk_FUN_104e9650(local_30);
        this = extraout_ECX_02;
      }
    }
  }
  local_8 = 5;
  if (*(int *)(in_ECX + 0x374) != 0) {
    if ((1 < *(int *)(in_ECX + 0x374)) && (*(int *)GLog_exref != 0)) {
      FOutputDevice::Logf2(this,*(ushort **)GLog_exref);
    }
    iVar4 = *(int *)(in_ECX + 0x374);
    while (iVar4 = iVar4 + -1, local_3c = iVar4, -1 < iVar4) {
      pAVar1 = *(AActor **)(*(int *)(in_ECX + 0x370) + iVar4 * 4);
      if (pAVar1 != (AActor *)0x0) {
        FName::FName(local_30,0);
        iVar6 = FName::operator!=((FName *)(pAVar1 + 0xd8),local_30);
        if (iVar6 != 0) {
          AActor::DetachFromBone((AActor *)in_ECX,pAVar1);
        }
        if (*(int *)(pAVar1 + 0x4e4) != 0) {
          local_38 = pAVar1;
          thunk_FUN_104e9650(&local_38);
        }
        (**(code **)(**(int **)(in_ECX + 0xe4) + 0xac))(pAVar1,0);
      }
    }
    for (local_40 = 0; local_40 < *(int *)(in_ECX + 0x374); local_40 = local_40 + 1) {
    }
    FArray::Empty((FArray *)(in_ECX + 0x370),4,0);
  }
  local_8 = 7;
  iVar4 = *(int *)(in_ECX + 0x560);
  if (iVar4 != 0) {
    while (iVar4 = iVar4 + -1, local_44 = iVar4, -1 < iVar4) {
      (**(code **)(**(int **)(in_ECX + 0xe4) + 0xac))
                (*(undefined4 *)(*(int *)(in_ECX + 0x55c) + iVar4 * 4),0);
    }
  }
  local_8 = 9;
  iVar4 = *(int *)(in_ECX + 0x1654);
  while (iVar4 = iVar4 + -1, local_48 = iVar4, -1 < iVar4) {
    puVar5 = *(undefined4 **)(*(int *)(in_ECX + 0x1650) + iVar4 * 4);
    if ((puVar5 != (undefined4 *)0x0) && (*(char *)(puVar5 + 2) == '\x02')) {
      thunk_FUN_10384f90(iVar4,1);
      (**(code **)*puVar5)(1);
    }
  }
  local_8 = 0xb;
  APawn::StopSpellSound(in_ECX);
  local_8 = 0;
  piVar2 = *(int **)(*(int *)(*(int *)(in_ECX + 0xe4) + 0x74) + 0x60);
  if ((piVar2 != (int *)0x0) &&
     (iVar4 = (**(code **)(*piVar2 + 0x94))(*(undefined4 *)(in_ECX + 0x60)), iVar4 != 0)) {
    *(undefined4 *)(iVar4 + 0x1e0) = 1;
    *(undefined4 *)(iVar4 + 0x1e4) = 0;
    *(undefined4 *)(iVar4 + 0x1e8) = 0;
  }
  pFVar7 = (FRotator *)FRotator::FRotator(local_90,0,0,0);
  iVar4 = FRotator::operator!=((FRotator *)(in_ECX + 0x538),pFVar7);
  if (iVar4 != 0) {
    APawn::SetRotationRate();
  }
  FNMagicInfo::Clear((FNMagicInfo *)(in_ECX + 0x4f0),1);
  for (local_4c = 0; local_4c < *(int *)(in_ECX + 0x374); local_4c = local_4c + 1) {
  }
  FArray::Empty((FArray *)(in_ECX + 0x370),4,0);
  *(uint *)(in_ECX + 0x70c) = *(uint *)(in_ECX + 0x70c) & 0xfffffffe;
  *(undefined4 *)(in_ECX + 0x62c) = 0;
  *(undefined4 *)(in_ECX + 0x63c) = 0;
  APawn::NPrimeActionEnd(in_ECX);
  ExceptionList = local_10;
  return;
}


// ==== 10512b67 Catch@10512b67

void Catch_10512b67(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x4c) = *(undefined4 *)(unaff_EBP + -0x68);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x4c,&DAT_10914c48);
}


// ==== 10512b7b Catch@10512b7b

void Catch_10512b7b(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"APawn::MagicCancel::StopSpellSound");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10512b97 Catch@10512b97

void Catch_10512b97(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x50) = *(undefined4 *)(unaff_EBP + -0x6c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x50,&DAT_10914c48);
}


// ==== 10512bab Catch@10512bab

void Catch_10512bab(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"APawn::MagicCancel::deletelights");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10512bb2 Catch@10512bb2

void Catch_10512bb2(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x54) = *(undefined4 *)(unaff_EBP + -0x70);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x54,&DAT_10914c48);
}


// ==== 10512bc3 Catch@10512bc3

void Catch_10512bc3(void)

{
  appUnwindf((ushort *)&DAT_10851d80,&DAT_108ac548);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10512bca Catch@10512bca

void Catch_10512bca(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x58) = *(undefined4 *)(unaff_EBP + -0x74);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x58,&DAT_10914c48);
}


// ==== 10512bdb Catch@10512bdb

void Catch_10512bdb(void)

{
  appUnwindf((ushort *)&DAT_10851d80,&DAT_108ac544);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10512be2 Catch@10512be2

void Catch_10512be2(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x5c) = *(undefined4 *)(unaff_EBP + -0x78);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x5c,&DAT_10914c48);
}


// ==== 10512bf3 Catch@10512bf3

void Catch_10512bf3(void)

{
  appUnwindf((ushort *)&DAT_10851d80,&DAT_108ac540);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10512bfa Catch@10512bfa

void Catch_10512bfa(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x60) = *(undefined4 *)(unaff_EBP + -0x7c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x60,&DAT_10914c48);
}


// ==== 10512c0b Catch@10512c0b

void Catch_10512c0b(void)

{
  appUnwindf((ushort *)&DAT_10851d80,&DAT_108ac53c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10512c15 Catch@10512c15

void Catch_10512c15(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -100) = *(undefined4 *)(unaff_EBP + -0x80);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -100,&DAT_10914c48);
}


// ==== 10512c29 Catch@10512c29

void Catch_10512c29(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"APawn::MagicCancel");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10512d70 FUN_10512d70

void FUN_10512d70(int param_1)

{
  FOutputDevice *pFVar1;
  int *piVar2;
  int iVar3;
  void **ppvVar4;
  FName *pFVar5;
  int iVar6;
  undefined4 *puVar7;
  APawn *in_ECX;
  int iVar8;
  undefined4 *puVar9;
  FName *pFVar10;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  iVar3 = param_1;
  puStack_c = &LAB_10818dc0;
  local_10 = ExceptionList;
  local_14 = &stack0xffffff9c;
  iVar8 = 0;
  local_8 = 0;
  iVar6 = *(int *)(in_ECX + 0x520);
  if (iVar6 == 0) {
    return;
  }
  if (param_1 != iVar6) {
    if (iVar6 == 0) {
      return;
    }
    if (param_1 == iVar6) {
      return;
    }
    ppvVar4 = &local_10;
    local_14 = &stack0xffffff9c;
    if (*(int *)(in_ECX + 0x554) == 0) {
      return;
    }
    for (; ExceptionList = ppvVar4, iVar8 < *(int *)(in_ECX + 0x554); iVar8 = iVar8 + 1) {
      if (*(int *)(*(int *)(in_ECX + 0x550) + iVar8 * 4) == iVar3) {
        thunk_FUN_104e9650(&param_1);
      }
      ppvVar4 = ExceptionList;
    }
    ExceptionList = local_10;
    return;
  }
  local_18 = *(undefined4 *)(in_ECX + (uint)(byte)in_ECX[0x71d] * 4 + 0xecc);
  pFVar10 = (FName *)0x0;
  ExceptionList = &local_10;
  pFVar5 = (FName *)APawn::GetCurAnimName(in_ECX,(int)&local_28);
  iVar6 = FName::operator==(pFVar5,pFVar10);
  if (iVar6 == 0) {
    local_1c = *(undefined4 *)(in_ECX + (uint)(byte)in_ECX[0x71d] * 4 + 0xeec);
    pFVar10 = (FName *)0x0;
    pFVar5 = (FName *)APawn::GetCurAnimName(in_ECX,(int)&local_28);
    iVar6 = FName::operator==(pFVar5,pFVar10);
    if (iVar6 == 0) {
      local_20 = *(undefined4 *)(in_ECX + (uint)(byte)in_ECX[0x71d] * 4 + 0xf0c);
      pFVar10 = (FName *)0x0;
      pFVar5 = (FName *)APawn::GetCurAnimName(in_ECX,(int)&local_28);
      iVar6 = FName::operator==(pFVar5,pFVar10);
      if (iVar6 == 0) {
        local_24 = *(undefined4 *)(in_ECX + (uint)(byte)in_ECX[0x71d] * 4 + 0xf2c);
        pFVar10 = (FName *)0x0;
        pFVar5 = (FName *)APawn::GetCurAnimName(in_ECX,(int)&local_28);
        iVar6 = FName::operator==(pFVar5,pFVar10);
        if (iVar6 == 0) {
          local_28 = *(undefined4 *)(in_ECX + (uint)(byte)in_ECX[0x71d] * 4 + 0xf6c);
          pFVar10 = (FName *)0x0;
          pFVar5 = (FName *)APawn::GetCurAnimName(in_ECX,(int)&local_24);
          iVar6 = FName::operator==(pFVar5,pFVar10);
          if (iVar6 == 0) goto LAB_10512ecf;
        }
      }
    }
  }
  iVar6 = *(int *)in_ECX;
  puVar9 = &local_28;
  puVar7 = (undefined4 *)APawn::GetCurWaitAnimName(in_ECX);
  (**(code **)(iVar6 + 0x328))(0,*puVar7,*(undefined4 *)(in_ECX + 0x6b4),0,1,0,puVar9);
LAB_10512ecf:
  local_8 = CONCAT31(local_8._1_3_,1);
  iVar6 = *(int *)(in_ECX + 0x1654);
  while (iVar6 = iVar6 + -1, -1 < iVar6) {
    puVar9 = *(undefined4 **)(*(int *)(in_ECX + 0x1650) + iVar6 * 4);
    if ((puVar9 != (undefined4 *)0x0) && (*(char *)(puVar9 + 2) == '\x02')) {
      thunk_FUN_10384f90(iVar6,1);
      (**(code **)*puVar9)(1);
    }
  }
  local_8 = 3;
  if (*(int *)(in_ECX + 0x560) != 0) {
    iVar6 = *(int *)(in_ECX + 0x560) + -1;
    while (-1 < iVar6) {
      pFVar1 = *(FOutputDevice **)(in_ECX + 0x55c) + iVar6 * 4;
      if (*(int *)pFVar1 == 0) {
        if (*(int *)GLog_exref != 0) {
          FOutputDevice::Logf2(*(FOutputDevice **)(in_ECX + 0x55c),*(ushort **)GLog_exref);
        }
        iVar6 = iVar6 + -1;
      }
      else {
        (**(code **)(**(int **)(in_ECX + 0xe4) + 0xac))(*(undefined4 *)pFVar1,0);
        iVar6 = iVar6 + -1;
      }
    }
  }
  iVar6 = 0;
  local_8 = 5;
  if (*(int *)(in_ECX + 0x554) != 0) {
    for (; iVar6 < *(int *)(in_ECX + 0x554); iVar6 = iVar6 + 1) {
      if (*(int *)(*(int *)(in_ECX + 0x550) + iVar6 * 4) == param_1) {
        thunk_FUN_104e9650(&param_1);
      }
    }
  }
  local_8 = 0;
  piVar2 = *(int **)(*(int *)(*(int *)(in_ECX + 0xe4) + 0x74) + 0x60);
  if ((piVar2 != (int *)0x0) &&
     (iVar6 = (**(code **)(*piVar2 + 0x94))(*(undefined4 *)(in_ECX + 0x60)), iVar6 != 0)) {
    *(undefined4 *)(iVar6 + 0x1e0) = 1;
    *(undefined4 *)(iVar6 + 0x1e4) = 0;
    *(undefined4 *)(iVar6 + 0x1e8) = 0;
  }
  APawn::SetRotationRate();
  FNMagicInfo::Clear((FNMagicInfo *)(in_ECX + 0x4f0),1);
  *(uint *)(in_ECX + 0x70c) = *(uint *)(in_ECX + 0x70c) & 0xfffffffe;
  *(undefined4 *)(in_ECX + 0x62c) = 0;
  *(undefined4 *)(in_ECX + 0x63c) = 0;
  APawn::NPrimeActionEnd(in_ECX);
  ExceptionList = local_10;
  return;
}


// ==== 10513071 Catch@10513071

void Catch_10513071(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x34) = *(undefined4 *)(unaff_EBP + -0x48);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x34,&DAT_10914c48);
}


// ==== 10513085 Catch@10513085

void Catch_10513085(void)

{
  appUnwindf((ushort *)&DAT_10851d80,&DAT_108ac69c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 105130a1 Catch@105130a1

void Catch_105130a1(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x38) = *(undefined4 *)(unaff_EBP + -0x4c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x38,&DAT_10914c48);
}


// ==== 105130b5 Catch@105130b5

void Catch_105130b5(void)

{
  appUnwindf((ushort *)&DAT_10851d80,&DAT_108ac698);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 105130bc Catch@105130bc

void Catch_105130bc(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x3c) = *(undefined4 *)(unaff_EBP + -0x50);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x3c,&DAT_10914c48);
}


// ==== 105130cd Catch@105130cd

void Catch_105130cd(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"APawn::MagicStop::deletelights");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1051311a Catch@1051311a

void Catch_1051311a(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x44) = *(undefined4 *)(unaff_EBP + -0x54);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x44,&DAT_10914c48);
}


// ==== 1051312e Catch@1051312e

void Catch_1051312e(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"APawn::SpelledTargetDestroyNotify");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10513230 FUN_10513230

void FUN_10513230(int param_1,undefined4 param_2,AActor *param_3)

{
  APawn *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10818dd0;
  local_10 = ExceptionList;
  local_8 = 0;
  if (((*(int *)(in_ECX + 0x62c) == 5) && (*(int *)(in_ECX + 0x4f8) == param_1)) &&
     (*(int *)(in_ECX + 0x520) != 0)) {
    if (*(int *)(in_ECX + 0x52c) == 0xc) {
      ExceptionList = &local_10;
      APawn::SkillEffectUnionDDTarget(in_ECX,param_3);
    }
    else {
      ExceptionList = &local_10;
      thunk_FUN_1037ae60(&param_3);
      thunk_FUN_1037ae60(&param_1);
      *(undefined4 *)(in_ECX + 0x530) = 1;
    }
  }
  ExceptionList = local_10;
  return;
}


// ==== 105132d5 Catch@105132d5

void Catch_105132d5(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 105132e9 Catch@105132e9

void Catch_105132e9(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"APawn::AddAssociatedActorNotify");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10513340 FUN_10513340

void FUN_10513340(void)

{
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10818de9;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 10513390 FUN_10513390

undefined4 FUN_10513390(void)

{
  float *pfVar1;
  int *piVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  int iVar6;
  int in_ECX;
  double dVar7;
  float fVar8;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_28;
  float local_24;
  int local_20;
  int local_1c;
  int *local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10818e00;
  local_10 = ExceptionList;
  local_14 = &stack0xffffff80;
  local_8 = 0;
  if (((*(int *)(in_ECX + 0x4c) != 0) &&
      (piVar2 = *(int **)(*(int *)(*(int *)(in_ECX + 0x4c) + 0x72c) + 0x134), piVar2 != (int *)0x0))
     && (ExceptionList = &local_10, iVar5 = (**(code **)(*piVar2 + 0x150))(0,in_ECX + 0x1c),
        iVar5 != 0)) {
    local_18 = (int *)0x0;
    for (local_20 = 0; local_20 < *(int *)(*(int *)(in_ECX + 0x4c) + 0x670); local_20 = local_20 + 1
        ) {
      piVar2 = *(int **)(*(int *)(*(int *)(in_ECX + 0x4c) + 0x66c) + local_20 * 4);
      if (piVar2[0x11] == 10) {
        local_18 = (int *)(**(code **)(*piVar2 + 0x68))();
        break;
      }
    }
    if (local_18 != (int *)0x0) {
      iVar5 = (**(code **)(*local_18 + 0x94))();
      local_44 = *(float *)(iVar5 + 0x84);
      local_40 = *(float *)(iVar5 + 0x88);
      local_3c = *(float *)(iVar5 + 0x8c);
      dVar7 = appSqrt((double)(*(float *)(*(int *)(in_ECX + 0x4c) + 0x2f4) *
                              *(float *)(*(int *)(in_ECX + 0x4c) + 0x2f0)));
      local_24 = (float)dVar7;
      dVar7 = appSqrt(207.0);
      local_28 = local_24 / (float)dVar7;
      *(float *)(iVar5 + 0x84) = local_28;
      *(float *)(iVar5 + 0x88) = local_28;
      *(float *)(iVar5 + 0x8c) = local_28;
      pfVar1 = (float *)(in_ECX + 0x34);
      iVar6 = (**(code **)(*local_18 + 0x150))(6,pfVar1);
      *(float *)(iVar5 + 0x84) = local_44;
      *(float *)(iVar5 + 0x88) = local_40;
      *(float *)(iVar5 + 0x8c) = local_3c;
      if (iVar6 != 0) {
        local_50 = *(float *)(in_ECX + 0x1c) - *pfVar1;
        local_4c = *(float *)(in_ECX + 0x20) - *(float *)(in_ECX + 0x38);
        local_48 = *(float *)(in_ECX + 0x24) - *(float *)(in_ECX + 0x3c);
        local_44 = local_50;
        local_40 = local_4c;
        local_3c = local_48;
        local_28 = local_50;
        local_24 = local_4c;
        local_18 = (int *)local_48;
        fVar8 = FVector::Size((FVector *)&local_50);
        fVar3 = (*(float *)(in_ECX + 0x3c) - *(float *)(in_ECX + 0x24)) * 0.3;
        *(float *)(in_ECX + 0x28) = local_50 * 0.6666667 + *pfVar1;
        *(float *)(in_ECX + 0x2c) = *(float *)(in_ECX + 0x38) + local_4c * 0.6666667;
        *(float *)(in_ECX + 0x30) = *(float *)(in_ECX + 0x3c) + local_48 * 0.6666667;
        if (*(float *)(in_ECX + 0x44) < fVar8) {
          fVar8 = fVar8 - *(float *)(in_ECX + 0x44);
          if (fVar3 < fVar8 != (fVar3 == fVar8)) {
            fVar8 = fVar3;
          }
          fVar8 = fVar8 + *(float *)(in_ECX + 0x24);
        }
        else {
          fVar8 = *(float *)(in_ECX + 0x24);
        }
        *(float *)(in_ECX + 0x30) = fVar8;
        for (local_1c = 0; local_1c < *(int *)(in_ECX + 0x48) + 1; local_1c = local_1c + 1) {
          fVar8 = (float)local_1c / (float)*(int *)(in_ECX + 0x48);
          fVar3 = 1.0 - fVar8;
          fVar4 = fVar3 * fVar3;
          fVar3 = fVar8 * 2.0 * fVar3;
          fVar8 = fVar8 * fVar8;
          iVar5 = local_1c * 0xc;
          *(float *)(iVar5 + *(int *)(in_ECX + 0x40)) =
               *pfVar1 * fVar8 +
               *(float *)(in_ECX + 0x1c) * fVar4 + *(float *)(in_ECX + 0x28) * fVar3;
          *(float *)(iVar5 + 4 + *(int *)(in_ECX + 0x40)) =
               *(float *)(in_ECX + 0x38) * fVar8 +
               *(float *)(in_ECX + 0x20) * fVar4 + *(float *)(in_ECX + 0x2c) * fVar3;
          *(float *)(iVar5 + 8 + *(int *)(in_ECX + 0x40)) =
               fVar4 * *(float *)(in_ECX + 0x24) + *(float *)(in_ECX + 0x30) * fVar3 +
               *(float *)(in_ECX + 0x3c) * fVar8;
        }
        ExceptionList = local_10;
        return 1;
      }
    }
  }
  ExceptionList = local_10;
  return 0;
}


// ==== 105136a8 Catch@105136a8

void Catch_105136a8(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x30) = *(undefined4 *)(unaff_EBP + -0x34);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x30,&DAT_10914c48);
}


// ==== 105136bc Catch@105136bc

void Catch_105136bc(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"NCSpringSimul::CalcPosition");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 105137b0 FUN_105137b0

int FUN_105137b0(int param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  undefined1 *puVar3;
  undefined4 uVar4;
  int iVar5;
  NCSpringSimul *in_ECX;
  int *piVar6;
  float fVar7;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_1c;
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10818e10;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffac;
  piVar6 = (int *)0x0;
  local_8 = 0;
  if (param_1 != 0) {
    ExceptionList = &local_10;
    *(int *)(in_ECX + 0x4c) = param_1;
    puVar3 = &stack0xffffffac;
    if (*(int *)(in_ECX + 0x40) != 0) {
      (**(code **)(**(int **)GMalloc_exref + 8))(*(int *)(in_ECX + 0x40));
      puVar3 = local_14;
    }
    local_14 = puVar3;
    iVar5 = *(int *)(in_ECX + 0x4c);
    piVar1 = *(int **)(*(int *)(iVar5 + 0x72c) + 0x134);
    local_18 = 0;
    if (piVar1 != (int *)0x0) {
      for (; local_18 < *(int *)(iVar5 + 0x670); local_18 = local_18 + 1) {
        piVar2 = *(int **)(*(int *)(iVar5 + 0x66c) + local_18 * 4);
        if (piVar2[0x11] == 10) {
          piVar6 = (int *)(**(code **)(*piVar2 + 0x68))(local_18);
          break;
        }
      }
      if (piVar6 != (int *)0x0) {
        *(int *)(in_ECX + 0x48) = param_2;
        uVar4 = (**(code **)**(undefined4 **)GMalloc_exref)((param_2 * 3 + 3) * 4,&DAT_10853d94);
        *(undefined4 *)(in_ECX + 0x40) = uVar4;
        iVar5 = (**(code **)(*piVar1 + 0x150))(0,&local_30);
        if ((iVar5 != 0) && (iVar5 = (**(code **)(*piVar6 + 0x150))(6,&local_3c), iVar5 != 0)) {
          local_48 = local_30 - local_3c;
          local_44 = local_2c - local_38;
          local_40 = local_28 - local_34;
          local_1c = local_40;
          fVar7 = FVector::Size((FVector *)&local_48);
          *(float *)(in_ECX + 0x44) = fVar7;
          iVar5 = NCSpringSimul::CalcPosition(in_ECX);
          ExceptionList = local_10;
          return iVar5;
        }
      }
    }
  }
  ExceptionList = local_10;
  return 0;
}


// ==== 10513906 Catch@10513906

void Catch_10513906(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x1c) = *(undefined4 *)(unaff_EBP + -0x20);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x1c,&DAT_10914c48);
}


// ==== 1051391a Catch@1051391a

void Catch_1051391a(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"NCSpringSimul::Init");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 105139a0 FUN_105139a0

void FUN_105139a0(void)

{
  int iVar1;
  uint uVar2;
  code *pcVar3;
  undefined4 *in_ECX;
  longlong lVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_10818e44;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *in_ECX = FRenderResource::vftable;
  in_ECX[1] = 0;
  in_ECX[2] = 0;
  *in_ECX = FVertexStream::vftable;
  local_4 = 1;
  *in_ECX = FSpringVertexStream::vftable;
  FArray::FArray((FArray *)(in_ECX + 3));
  pcVar3 = GMakeCacheIDIndex_exref;
  local_4 = CONCAT31(local_4._1_3_,3);
  iVar1 = *(int *)(GMakeCacheIDIndex_exref + 4);
  uVar2 = *(uint *)GMakeCacheIDIndex_exref;
  lVar4 = __allmul(uVar2,iVar1,0x100,0);
  *(uint *)pcVar3 = uVar2 + 1;
  *(uint *)(GMakeCacheIDIndex_exref + 4) = iVar1 + (uint)(0xfffffffe < uVar2);
  *(longlong *)(in_ECX + 1) = lVar4 + 0xe1;
  in_ECX[6] = 0;
  ExceptionList = local_c;
  return;
}


// ==== 10513a90 FUN_10513a90

void FUN_10513a90(void)

{
  int in_ECX;
  int iVar1;
  FVector *this;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10818e68;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  thunk_FUN_105139a0();
  local_4 = 0;
  this = (FVector *)(in_ECX + 0x1c);
  iVar1 = 2;
  do {
    FVector::FVector(this);
    this = this + 0xc;
    iVar1 = iVar1 + -1;
  } while (-1 < iVar1);
  *(undefined4 *)(in_ECX + 0x40) = 0;
  *(undefined4 *)(in_ECX + 0x4c) = 0;
  *(undefined4 *)(in_ECX + 0x48) = 0;
  ExceptionList = local_c;
  return;
}


// ==== 10513b10 FUN_10513b10

void FUN_10513b10(void)

{
  FRenderResource *in_ECX;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_10818ea3;
  pvStack_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &pvStack_c;
  if (*(int *)(in_ECX + 0x40) != 0) {
    ExceptionList = &pvStack_c;
    (**(code **)(**(int **)GMalloc_exref + 8))(*(int *)(in_ECX + 0x40));
  }
  local_4 = 1;
  thunk_FUN_10397a70();
  local_4 = 0xffffffff;
  FRenderResource::~FRenderResource(in_ECX);
  ExceptionList = pvStack_c;
  return;
}


// ==== 10513ba0 FUN_10513ba0

void FUN_10513ba0(void)

{
  return;
}


// ==== 10513bb0 FUN_10513bb0

void FUN_10513bb0(undefined4 param_1)

{
  int *in_ECX;
  
  (**(code **)(**(int **)GConfig_exref + 0x34))(1,param_1);
  (**(code **)(*in_ECX + 0xc0))(in_ECX + 0x11,param_1,L"HSVActorLight");
  (**(code **)(*in_ECX + 0xc0))(in_ECX + 0x14,param_1,L"HSVStaticMeshLight");
  (**(code **)(*in_ECX + 0xc0))(in_ECX + 0xe,param_1,L"HSVTerrainLight");
  (**(code **)(*in_ECX + 0xc0))(in_ECX + 0x17,param_1,L"HSVBSPLight");
  in_ECX[0xd] = in_ECX[0xd] | 1;
  return;
}


// ==== 10513c50 FUN_10513c50

void FUN_10513c50(undefined4 param_1,undefined4 param_2)

{
  int *in_ECX;
  
  (**(code **)(*in_ECX + 0xb0))(in_ECX + 0x11,param_1,param_2);
  return;
}


// ==== 10513c80 FUN_10513c80

void FUN_10513c80(undefined4 param_1,undefined4 param_2)

{
  int *in_ECX;
  
  (**(code **)(*in_ECX + 0xa8))(in_ECX + 0x11,param_1,param_2);
  return;
}


// ==== 10513cb0 FUN_10513cb0

void FUN_10513cb0(undefined4 param_1)

{
  int *in_ECX;
  
  (**(code **)(*in_ECX + 0xac))(in_ECX + 0x11,param_1);
  return;
}


// ==== 10513cd0 FUN_10513cd0

void FUN_10513cd0(undefined4 param_1,undefined4 param_2)

{
  int *in_ECX;
  
  (**(code **)(*in_ECX + 0xb0))(in_ECX + 0x14,param_1,param_2);
  return;
}


// ==== 10513d00 FUN_10513d00

void FUN_10513d00(undefined4 param_1,undefined4 param_2)

{
  int *in_ECX;
  
  (**(code **)(*in_ECX + 0xa8))(in_ECX + 0x14,param_1,param_2);
  return;
}


// ==== 10513d30 FUN_10513d30

void FUN_10513d30(undefined4 param_1)

{
  int *in_ECX;
  
  (**(code **)(*in_ECX + 0xac))(in_ECX + 0x14,param_1);
  return;
}


// ==== 10513d50 FUN_10513d50

void FUN_10513d50(undefined4 param_1,undefined4 param_2)

{
  int *in_ECX;
  
  (**(code **)(*in_ECX + 0xb0))(in_ECX + 0xe,param_1,param_2);
  return;
}


// ==== 10513d80 FUN_10513d80

void FUN_10513d80(undefined4 param_1,undefined4 param_2)

{
  int *in_ECX;
  
  (**(code **)(*in_ECX + 0xa8))(in_ECX + 0xe,param_1,param_2);
  return;
}


// ==== 10513db0 FUN_10513db0

void FUN_10513db0(undefined4 param_1)

{
  int *in_ECX;
  
  (**(code **)(*in_ECX + 0xac))(in_ECX + 0xe,param_1);
  return;
}


// ==== 10513dd0 FUN_10513dd0

void FUN_10513dd0(undefined4 param_1,undefined4 param_2)

{
  int *in_ECX;
  
  (**(code **)(*in_ECX + 0xb0))(in_ECX + 0x17,param_1,param_2);
  return;
}


// ==== 10513e00 FUN_10513e00

void FUN_10513e00(undefined4 param_1,undefined4 param_2)

{
  int *in_ECX;
  
  (**(code **)(*in_ECX + 0xa8))(in_ECX + 0x17,param_1,param_2);
  return;
}


// ==== 10513e30 FUN_10513e30

void FUN_10513e30(undefined4 param_1)

{
  int *in_ECX;
  
  (**(code **)(*in_ECX + 0xac))(in_ECX + 0x17,param_1);
  return;
}


// ==== 10513e50 FUN_10513e50

void FUN_10513e50(void)

{
  return;
}


// ==== 10513e60 FUN_10513e60

void FUN_10513e60(ushort *param_1)

{
  int iVar1;
  UL2NTimeLight *in_ECX;
  
  UL2NTimeLight::Load(in_ECX,param_1);
  iVar1 = (**(code **)(**(int **)GConfig_exref + 4))(L"EnvType",L"EnvType",in_ECX + 0x110,param_1);
  if (iVar1 == 0) {
    *(undefined4 *)(in_ECX + 0x110) = 0;
  }
  (**(code **)(*(int *)in_ECX + 0xbc))(in_ECX + 0x74,in_ECX + 0x80,param_1,L"HazeringColor");
  (**(code **)(*(int *)in_ECX + 0xbc))(in_ECX + 0x8c,in_ECX + 0x98,param_1,L"CloudColor");
  (**(code **)(*(int *)in_ECX + 0xb8))(in_ECX + 0xb0,param_1,L"SunColor");
  (**(code **)(*(int *)in_ECX + 0xb8))(in_ECX + 0xbc,param_1,L"MoonColor");
  (**(code **)(*(int *)in_ECX + 0xb8))(in_ECX + 0xd4,param_1,L"ActorAmbient");
  (**(code **)(*(int *)in_ECX + 0xb8))(in_ECX + 0xe0,param_1,L"StaticMeshAmbient");
  (**(code **)(*(int *)in_ECX + 0xb8))(in_ECX + 200,param_1,L"TerrainAmbient");
  (**(code **)(*(int *)in_ECX + 0xb8))(in_ECX + 0xec,param_1,L"BSPAmbient");
  (**(code **)(*(int *)in_ECX + 0xb8))(in_ECX + 0x68,param_1,L"SkyBoxColor");
  (**(code **)(*(int *)in_ECX + 0xc4))(in_ECX + 0xf8,param_1,L"SunScale");
  (**(code **)(*(int *)in_ECX + 0xc4))(in_ECX + 0x104,param_1,L"MoonScale");
  return;
}


// ==== 10514010 FUN_10514010

void FUN_10514010(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *in_ECX;
  
  (**(code **)(*in_ECX + 0xa4))(in_ECX + 0x32,param_1,param_2,param_3,param_4);
  return;
}


// ==== 10514050 FUN_10514050

void FUN_10514050(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *in_ECX;
  
  (**(code **)(*in_ECX + 0xa4))(in_ECX + 0x35,param_1,param_2,param_3,param_4);
  return;
}


// ==== 10514090 FUN_10514090

void FUN_10514090(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *in_ECX;
  
  (**(code **)(*in_ECX + 0xa4))(in_ECX + 0x38,param_1,param_2,param_3,param_4);
  return;
}


// ==== 105140d0 FUN_105140d0

void FUN_105140d0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *in_ECX;
  
  (**(code **)(*in_ECX + 0xa4))(in_ECX + 0x3b,param_1,param_2,param_3,param_4);
  return;
}


// ==== 10514110 FUN_10514110

void FUN_10514110(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *in_ECX;
  
  (**(code **)(*in_ECX + 0xa4))(in_ECX + 0x1a,param_1,param_2,param_3,param_4);
  return;
}


// ==== 10514150 FUN_10514150

void FUN_10514150(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *in_ECX;
  
  (**(code **)(*in_ECX + 0xa4))(in_ECX + 0x2c,param_1,param_2,param_3,param_4);
  return;
}


// ==== 10514190 FUN_10514190

void FUN_10514190(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *in_ECX;
  
  (**(code **)(*in_ECX + 0xa4))(in_ECX + 0x2f,param_1,param_2,param_3,param_4);
  return;
}


// ==== 105141d0 FUN_105141d0

void FUN_105141d0(undefined4 param_1,undefined4 param_2)

{
  int *in_ECX;
  
  (**(code **)(*in_ECX + 0xb4))(in_ECX + 0x3e,param_1,param_2);
  return;
}


// ==== 10514200 FUN_10514200

void FUN_10514200(undefined4 param_1,undefined4 param_2)

{
  int *in_ECX;
  
  (**(code **)(*in_ECX + 0xb4))(in_ECX + 0x41,param_1,param_2);
  return;
}


// ==== 10514240 FUN_10514240

void FUN_10514240(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 0x114) = param_1;
  *(undefined4 *)(in_ECX + 0x118) = param_2;
  *(undefined4 *)(in_ECX + 0x11c) = param_3;
  return;
}


// ==== 10514270 FUN_10514270

undefined4 FUN_10514270(void)

{
  int in_ECX;
  
  return *(undefined4 *)(in_ECX + 0x120);
}


// ==== 10514280 FUN_10514280

undefined4 FUN_10514280(void)

{
  int in_ECX;
  
  return *(undefined4 *)(in_ECX + 0x124);
}


// ==== 10514290 FUN_10514290

undefined4 FUN_10514290(void)

{
  int in_ECX;
  undefined4 local_8;
  
  local_8 = (undefined4)(longlong)ROUND(*(float *)(in_ECX + 0x128));
  return local_8;
}


// ==== 105142d0 FUN_105142d0

undefined4 FUN_105142d0(void)

{
  int in_ECX;
  
  if ((6.0 <= *(double *)(in_ECX + 0x134)) && (*(double *)(in_ECX + 0x134) <= 24.0)) {
    return 1;
  }
  return 0;
}


// ==== 10514310 FUN_10514310

undefined4 FUN_10514310(void)

{
  int in_ECX;
  
  if ((*(double *)(in_ECX + 0x134) < 5.999) && (0.001 < *(double *)(in_ECX + 0x134))) {
    return 0;
  }
  return 1;
}


// ==== 10514350 FUN_10514350

undefined4 FUN_10514350(void)

{
  int in_ECX;
  
  if ((6.001 <= *(double *)(in_ECX + 0x134)) && (*(double *)(in_ECX + 0x134) <= 23.999)) {
    return 0;
  }
  return 1;
}


// ==== 10514390 FUN_10514390

undefined4 FUN_10514390(void)

{
  int in_ECX;
  
  return *(undefined4 *)(in_ECX + 300);
}


// ==== 105143a0 FUN_105143a0

void FUN_105143a0(undefined4 *param_1)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 300) = *param_1;
  return;
}


// ==== 105143c0 FUN_105143c0

void FUN_105143c0(int *param_1)

{
  int in_ECX;
  
  *(int *)(in_ECX + 300) = *(int *)(in_ECX + 300) + *param_1;
  if (0xe10 < *(int *)(in_ECX + 300)) {
    *(undefined4 *)(in_ECX + 300) = 0xe10;
  }
  return;
}


// ==== 105143f0 FUN_105143f0

void FUN_105143f0(int *param_1)

{
  int in_ECX;
  
  *(int *)(in_ECX + 300) = *(int *)(in_ECX + 300) - *param_1;
  if (*(int *)(in_ECX + 300) < 6) {
    *(undefined4 *)(in_ECX + 300) = 6;
  }
  return;
}


// ==== 10514420 FUN_10514420

void FUN_10514420(float param_1,float *param_2,float *param_3,undefined4 *param_4)

{
  int in_ECX;
  
  *param_4 = 0;
  *param_3 = *(float *)(in_ECX + 0x170) * 0.017453292;
  if ((5.0 <= param_1) && (param_1 < 24.0)) {
    *param_2 = (param_1 - 6.0) * 0.17453292 - 1.5707964;
    return;
  }
  if (param_1 < 1.0) {
    *param_2 = ((param_1 + 24.0) - 6.0) * 0.17453292 - 1.5707964;
    return;
  }
  *param_2 = -3.1415927;
  return;
}


// ==== 105144e0 FUN_105144e0

void FUN_105144e0(float param_1,float *param_2,float *param_3,undefined4 *param_4)

{
  int in_ECX;
  
  *param_4 = 0;
  *param_3 = *(float *)(in_ECX + 0x170) * 0.017453292;
  if ((7.0 <= param_1) && (NAN(param_1) || 23.0 < param_1 == (param_1 == 23.0))) {
    *param_2 = -3.1415927;
    return;
  }
  *param_2 = (param_1 - 0.0) * 0.5235988 - 1.5707964;
  return;
}


// ==== 10514560 FUN_10514560

FVector * FUN_10514560(FVector *param_1,float param_2)

{
  int iVar1;
  undefined4 *puVar2;
  UL2NEnvManager *in_ECX;
  double dVar3;
  float local_68;
  float local_64;
  double local_60;
  undefined4 local_58;
  undefined1 local_4c [72];
  
  local_64 = 0.0;
  local_68 = 0.0;
  if ((param_2 < 6.0) || (24.0 <= param_2)) {
    UL2NEnvManager::GetMoonModifierInfo(in_ECX,param_2,&local_68,&local_64,(float *)&local_60);
  }
  else {
    UL2NEnvManager::GetSunModifierInfo(in_ECX,param_2,&local_68,&local_64,(float *)&local_60);
  }
  local_60 = appCos((double)local_64);
  dVar3 = appSin((double)local_68);
  *(float *)param_1 = (float)((float10)dVar3 * (float10)local_60);
  local_60 = appSin((double)local_64);
  dVar3 = appSin((double)local_68);
  *(float *)(param_1 + 4) = (float)((float10)dVar3 * (float10)local_60);
  dVar3 = appCos((double)local_68);
  *(float *)(param_1 + 8) = (float)dVar3;
  local_64 = *(float *)(in_ECX + 0x174);
  if (DAT_10c51050 != 0) {
    local_64 = local_64 * -1.0;
  }
  local_60 = 5.26354424712089e-315;
  local_58 = 0;
  iVar1 = FUN_107a6660();
  puVar2 = (undefined4 *)
           FVector::RotateAngleAxis
                     (param_1,(int)local_4c,(FVector *)((iVar1 * 0x8000) / 0xb4 & 0xffff));
  *(undefined4 *)param_1 = *puVar2;
  *(undefined4 *)(param_1 + 4) = puVar2[1];
  *(undefined4 *)(param_1 + 8) = puVar2[2];
  FVector::Normalize(param_1);
  return param_1;
}


// ==== 10514720 FUN_10514720

float10 FUN_10514720(float param_1)

{
  float fVar1;
  float fVar2;
  int in_ECX;
  
  fVar1 = *(float *)(in_ECX + 0x1c8);
  fVar2 = *(float *)(in_ECX + 0x1cc);
  if (param_1 < fVar1) {
    return (float10)*(float *)(in_ECX + 0x1d4);
  }
  if (fVar2 < param_1) {
    return (float10)*(float *)(in_ECX + 0x1d4);
  }
  if (fVar2 < fVar1) {
    fVar2 = fVar2 + 24.0;
  }
  if (param_1 < fVar1) {
    param_1 = param_1 + 24.0;
  }
  if (param_1 < *(float *)(in_ECX + 0x1d0)) {
    return (float10)((param_1 - fVar1) / (*(float *)(in_ECX + 0x1d0) - fVar1));
  }
  if (*(float *)(in_ECX + 0x1d0) == param_1) {
    return (float10)1.0;
  }
  if (*(float *)(in_ECX + 0x1d4) != 1.0) {
    return (float10)(1.0 - (param_1 - *(float *)(in_ECX + 0x1d0)) /
                           ((*(float *)(in_ECX + 0x1d4) / (1.0 - *(float *)(in_ECX + 0x1d4)) + 1.0)
                           * (fVar2 - *(float *)(in_ECX + 0x1d0))));
  }
  return (float10)1.0;
}


// ==== 105148c0 FUN_105148c0

void FUN_105148c0(FPlane *param_1,FPlane *param_2,FPlane *param_3,float param_4)

{
  FPlane *pFVar1;
  undefined4 *puVar2;
  FPlane *pFVar3;
  int in_ECX;
  undefined4 **ppuVar4;
  undefined4 *local_4c;
  undefined4 local_40 [2];
  FPlane local_38 [8];
  FPlane local_30 [4];
  FPlane local_2c [4];
  FPlane local_28 [8];
  FPlane local_20 [8];
  FPlane local_18 [8];
  undefined4 local_10 [3];
  FPlane *local_4;
  
  if (*(char *)(in_ECX + 0x1dd) == *(char *)(in_ECX + 0x1dc)) {
    if (*(char *)(in_ECX + 0x1dd) == '\0') goto LAB_105149f9;
    local_4c = local_40;
    pFVar3 = param_1;
    pFVar1 = (FPlane *)FPlane::operator-(param_2,local_30);
    FPlane::operator*(pFVar1,(float)pFVar3);
    pFVar3 = local_28;
  }
  else {
    if (param_4 < *(float *)(in_ECX + 0x1d0)) {
      local_4c = *(undefined4 **)(in_ECX + 0x1d8);
      pFVar3 = param_1;
      pFVar1 = (FPlane *)FPlane::operator-(param_3,local_30);
      FPlane::operator*(pFVar1,(float)pFVar3);
      puVar2 = (undefined4 *)FPlane::operator+(param_1,local_18);
      local_4c = (undefined4 *)*puVar2;
      local_40[0] = puVar2[3];
      ppuVar4 = &local_4c;
      pFVar3 = (FPlane *)FPlane::operator-(local_4,local_2c);
      FPlane::operator*(pFVar3,(float)ppuVar4);
      param_1 = (FPlane *)FPlane::operator+((FPlane *)&stack0xffffffac,(FPlane *)&stack0xffffffbc);
      goto LAB_105149f9;
    }
    local_4c = local_10;
    pFVar3 = param_1;
    pFVar1 = (FPlane *)FPlane::operator-(param_2,local_20);
    FPlane::operator*(pFVar1,(float)pFVar3);
    pFVar3 = local_38;
  }
  param_1 = (FPlane *)FPlane::operator+(param_1,pFVar3);
LAB_105149f9:
  *(undefined4 *)param_2 = *(undefined4 *)param_1;
  *(undefined4 *)(param_2 + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(param_2 + 8) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(param_2 + 0xc) = *(undefined4 *)(param_1 + 0xc);
  return;
}


// ==== 10514a70 FUN_10514a70

float10 FUN_10514a70(float param_1,float param_2,float param_3,float param_4)

{
  int in_ECX;
  
  if (*(char *)(in_ECX + 0x1dd) == *(char *)(in_ECX + 0x1dc)) {
    if (*(char *)(in_ECX + 0x1dd) == '\0') {
      return (float10)param_1;
    }
  }
  else if (param_4 < *(float *)(in_ECX + 0x1d0)) {
    param_1 = param_1 + *(float *)(in_ECX + 0x1d8) * (param_3 - param_1);
  }
  return (float10)(param_1 + *(float *)(in_ECX + 0x1e0) * (param_2 - param_1));
}


// ==== 10514b00 FUN_10514b00

float10 FUN_10514b00(void)

{
  return (float10)0;
}


// ==== 10514b10 FUN_10514b10

undefined4 FUN_10514b10(void)

{
  int in_ECX;
  
  return *(undefined4 *)(in_ECX + 0x198);
}


// ==== 10514b20 FUN_10514b20

undefined4 FUN_10514b20(void)

{
  int in_ECX;
  
  return *(undefined4 *)(in_ECX + 0x18c);
}


// ==== 10514b30 FUN_10514b30

void FUN_10514b30(void)

{
  float fVar1;
  int iVar2;
  int in_ECX;
  float10 extraout_ST0;
  undefined4 local_8;
  
  iVar2 = FUN_107a6660();
  *(int *)(in_ECX + 0x120) = iVar2 / 0xe10;
  iVar2 = FUN_107a6660();
  iVar2 = iVar2 / 0x3c;
  *(int *)(in_ECX + 0x124) = iVar2;
  fVar1 = (float)(extraout_ST0 - (float10)(iVar2 * 0x3c));
  *(float *)(in_ECX + 0x128) = fVar1;
  local_8 = (int)(longlong)ROUND(fVar1);
  fVar1 = (float)local_8;
  if (local_8 < 0) {
    fVar1 = fVar1 + 4.2949673e+09;
  }
  *(undefined1 *)(in_ECX + 0x1dc) = 0;
  *(undefined1 *)(in_ECX + 0x1dd) = 0;
  *(double *)(in_ECX + 0x134) =
       (double)(fVar1 * 0.00027777778 + (float)iVar2 * 0.016666668 + (float)*(int *)(in_ECX + 0x120)
               );
  return;
}


// ==== 10514cb0 FUN_10514cb0

void FUN_10514cb0(void)

{
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10818ec9;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 10514d10 FUN_10514d10

void FUN_10514d10(void)

{
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10818ee9;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 10514d60 FUN_10514d60

void FUN_10514d60(void)

{
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10818f09;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 10514e70 FUN_10514e70

void FUN_10514e70(int *param_1,float param_2,undefined1 *param_3,undefined1 *param_4,
                 undefined1 *param_5)

{
  float *pfVar1;
  float fVar2;
  int iVar3;
  uint uVar4;
  float *pfVar5;
  
  iVar3 = 0;
  if (0 < param_1[1] + -1) {
    pfVar1 = (float *)*param_1;
    pfVar5 = pfVar1;
    while ((*pfVar5 < param_2 == (*pfVar5 == param_2) || (pfVar5[2] <= param_2))) {
      iVar3 = iVar3 + 1;
      pfVar5 = pfVar5 + 2;
      if (param_1[1] + -1 <= iVar3) {
        return;
      }
    }
    fVar2 = (param_2 - pfVar1[iVar3 * 2]) / (pfVar1[iVar3 * 2 + 2] - pfVar1[iVar3 * 2]);
    param_2._0_1_ =
         (undefined1)
         (int)ROUND((float)*(byte *)(pfVar1 + iVar3 * 2 + 1) +
                    fVar2 * (float)(int)((uint)*(byte *)(pfVar1 + iVar3 * 2 + 3) -
                                        (uint)*(byte *)(pfVar1 + iVar3 * 2 + 1)));
    *param_3 = param_2._0_1_;
    uVar4 = (uint)*(byte *)(*param_1 + 5 + iVar3 * 8);
    param_2._0_1_ =
         (undefined1)
         (int)ROUND((float)(int)(*(byte *)(*param_1 + iVar3 * 8 + 0xd) - uVar4) * fVar2 +
                    (float)uVar4);
    *param_4 = param_2._0_1_;
    iVar3 = *param_1 + iVar3 * 8;
    uVar4 = (uint)*(byte *)(iVar3 + 6);
    param_2._0_1_ =
         (undefined1)(int)ROUND(fVar2 * (float)(int)(*(byte *)(iVar3 + 0xe) - uVar4) + (float)uVar4)
    ;
    *param_5 = param_2._0_1_;
  }
  return;
}


// ==== 10515010 FUN_10515010

void FUN_10515010(int *param_1,int param_2,int param_3,float param_4,undefined1 *param_5,
                 undefined1 *param_6,undefined1 *param_7)

{
  int iVar1;
  float fVar2;
  uint uVar3;
  float *pfVar4;
  
  if (param_1[1] < param_3) {
    param_3 = param_1[1];
  }
  if (param_2 < param_3 + -1) {
    iVar1 = *param_1;
    pfVar4 = (float *)(iVar1 + param_2 * 8);
    while ((*pfVar4 < param_4 == (*pfVar4 == param_4) || (pfVar4[2] <= param_4))) {
      param_2 = param_2 + 1;
      pfVar4 = pfVar4 + 2;
      if (param_3 + -1 <= param_2) {
        return;
      }
    }
    uVar3 = (uint)*(byte *)(iVar1 + 4 + param_2 * 8);
    fVar2 = (param_4 - *(float *)(iVar1 + param_2 * 8)) /
            (*(float *)(iVar1 + 8 + param_2 * 8) - *(float *)(iVar1 + param_2 * 8));
    param_3._0_1_ =
         (undefined1)
         (int)ROUND((float)uVar3 +
                    fVar2 * (float)(int)(*(byte *)(iVar1 + 0xc + param_2 * 8) - uVar3));
    *param_5 = (undefined1)param_3;
    uVar3 = (uint)*(byte *)(*param_1 + 5 + param_2 * 8);
    param_3._0_1_ =
         (undefined1)
         (int)ROUND((float)(int)(*(byte *)(*param_1 + param_2 * 8 + 0xd) - uVar3) * fVar2 +
                    (float)uVar3);
    *param_6 = (undefined1)param_3;
    iVar1 = *param_1 + param_2 * 8;
    uVar3 = (uint)*(byte *)(iVar1 + 6);
    param_3._0_1_ =
         (undefined1)(int)ROUND(fVar2 * (float)(int)(*(byte *)(iVar1 + 0xe) - uVar3) + (float)uVar3)
    ;
    *param_7 = (undefined1)param_3;
  }
  return;
}


// ==== 105151c0 FUN_105151c0

void FUN_105151c0(int *param_1,float param_2)

{
  int iVar1;
  FPlane *pFVar2;
  undefined4 *puVar3;
  int iVar4;
  float *pfVar5;
  float unaff_EDI;
  FPlane *unaff_retaddr;
  undefined1 *puVar6;
  FPlane *pFVar7;
  undefined1 local_50 [16];
  FPlane local_40 [32];
  FPlane local_20 [4];
  undefined1 local_1c [12];
  FPlane local_10 [8];
  float local_8;
  
  iVar1 = param_1[1] + -1;
  iVar4 = 0;
  if (0 < iVar1) {
    pfVar5 = (float *)*param_1;
    do {
      if ((*pfVar5 < param_2 != (*pfVar5 == param_2)) && (param_2 < pfVar5[3])) break;
      iVar4 = iVar4 + 1;
      pfVar5 = pfVar5 + 3;
    } while (iVar4 < iVar1);
  }
  if ((1 < param_1[1]) && (iVar4 != iVar1)) {
    iVar4 = iVar4 * 0xc;
    FGetHSV((uchar)local_50,*(uchar *)(*param_1 + iVar4 + 4),*(uchar *)(*param_1 + 5 + iVar4));
    FGetHSV((uchar)local_40,*(uchar *)(*param_1 + iVar4 + 0x10),*(uchar *)(*param_1 + 0x11 + iVar4))
    ;
    puVar6 = local_50;
    pFVar7 = local_20;
    pFVar2 = (FPlane *)FPlane::operator-(local_40,local_10);
    pFVar2 = (FPlane *)FPlane::operator*(pFVar2,(float)puVar6);
    puVar3 = (undefined4 *)FPlane::operator+(pFVar2,pFVar7);
    *(undefined4 *)unaff_retaddr = *puVar3;
    *(undefined4 *)(unaff_retaddr + 4) = puVar3[1];
    *(undefined4 *)(unaff_retaddr + 8) = puVar3[2];
    *(undefined4 *)(unaff_retaddr + 0xc) = puVar3[3];
    iVar1 = *param_1 + iVar4;
    local_8 = ((*(float *)(*param_1 + 0x14 + iVar4) - *(float *)(iVar1 + 8)) * unaff_EDI +
              *(float *)(iVar1 + 8)) / 255.0;
    FPlane::operator*=(unaff_retaddr,(float)local_1c);
  }
  return;
}


// ==== 10515370 FUN_10515370

void FUN_10515370(int *param_1,float param_2)

{
  int iVar1;
  FPlane *pFVar2;
  undefined4 *puVar3;
  int iVar4;
  float *pfVar5;
  undefined4 *unaff_retaddr;
  undefined1 *puVar6;
  FPlane *pFVar7;
  undefined1 local_50 [16];
  FPlane local_40 [32];
  FPlane local_20 [16];
  FPlane local_10 [16];
  
  iVar1 = param_1[1] + -1;
  iVar4 = 0;
  if (0 < iVar1) {
    pfVar5 = (float *)*param_1;
    do {
      if ((*pfVar5 < param_2 != (*pfVar5 == param_2)) && (param_2 < pfVar5[3])) break;
      iVar4 = iVar4 + 1;
      pfVar5 = pfVar5 + 3;
    } while (iVar4 < iVar1);
  }
  if ((1 < param_1[1]) && (iVar4 != iVar1)) {
    iVar4 = iVar4 * 0xc;
    FGetHSV((uchar)local_50,*(uchar *)(*param_1 + iVar4 + 4),*(uchar *)(*param_1 + 5 + iVar4));
    FGetHSV((uchar)local_40,*(uchar *)(*param_1 + iVar4 + 0x10),*(uchar *)(*param_1 + 0x11 + iVar4))
    ;
    puVar6 = local_50;
    pFVar7 = local_20;
    pFVar2 = (FPlane *)FPlane::operator-(local_40,local_10);
    pFVar2 = (FPlane *)FPlane::operator*(pFVar2,(float)puVar6);
    puVar3 = (undefined4 *)FPlane::operator+(pFVar2,pFVar7);
    *unaff_retaddr = *puVar3;
    unaff_retaddr[1] = puVar3[1];
    unaff_retaddr[2] = puVar3[2];
    unaff_retaddr[3] = puVar3[3];
  }
  return;
}


// ==== 105154d0 FUN_105154d0

float10 FUN_105154d0(int *param_1,float param_2)

{
  int iVar1;
  float *pfVar2;
  int iVar3;
  float *pfVar4;
  float10 fVar5;
  float local_4;
  
  fVar5 = (float10)0;
  local_4 = (float)fVar5;
  iVar1 = param_1[1] + -1;
  iVar3 = 0;
  if (0 < iVar1) {
    pfVar2 = (float *)*param_1;
    pfVar4 = pfVar2;
    do {
      if ((*pfVar4 < param_2 != (*pfVar4 == param_2)) && (param_2 < pfVar4[3])) {
        local_4 = (param_2 - pfVar2[iVar3 * 3]) / ((pfVar2 + iVar3 * 3)[3] - pfVar2[iVar3 * 3]);
        break;
      }
      iVar3 = iVar3 + 1;
      pfVar4 = pfVar4 + 3;
    } while (iVar3 < iVar1);
  }
  if ((1 < param_1[1]) && (iVar3 != iVar1)) {
    iVar1 = *param_1 + iVar3 * 0xc;
    fVar5 = (float10)((*(float *)(*param_1 + 0x14 + iVar3 * 0xc) - *(float *)(iVar1 + 8)) * local_4
                     + *(float *)(iVar1 + 8));
  }
  return fVar5;
}


// ==== 10515590 FUN_10515590

void FUN_10515590(undefined4 *param_1,float param_2,float *param_3)

{
  float *pfVar1;
  int iVar2;
  float *pfVar3;
  
  iVar2 = 0;
  if (0 < (int)param_1[1]) {
    pfVar1 = (float *)*param_1;
    pfVar3 = pfVar1;
    while ((*pfVar3 < param_2 == (*pfVar3 == param_2) || (pfVar3[2] <= param_2))) {
      iVar2 = iVar2 + 1;
      pfVar3 = pfVar3 + 2;
      if ((int)param_1[1] <= iVar2) {
        return;
      }
    }
    *param_3 = (pfVar1[iVar2 * 2 + 3] - pfVar1[iVar2 * 2 + 1]) *
               ((param_2 - pfVar1[iVar2 * 2]) / (pfVar1[iVar2 * 2 + 2] - pfVar1[iVar2 * 2])) +
               pfVar1[iVar2 * 2 + 1];
  }
  return;
}


// ==== 10515620 FUN_10515620

void FUN_10515620(byte *param_1,byte *param_2,float *param_3)

{
  float fVar1;
  int in_ECX;
  double dVar2;
  undefined4 local_8;
  
  *(uint *)(in_ECX + 0x120) = (uint)*param_1;
  *(uint *)(in_ECX + 0x124) = (uint)*param_2;
  fVar1 = *param_3;
  *(float *)(in_ECX + 0x128) = fVar1;
  local_8 = (int)(longlong)ROUND(fVar1);
  fVar1 = (float)local_8;
  if (local_8 < 0) {
    fVar1 = fVar1 + 4.2949673e+09;
  }
  *(double *)(in_ECX + 0x134) =
       (double)(fVar1 * 0.00027777778 +
               (float)*(int *)(in_ECX + 0x124) * 0.016666668 + (float)*(int *)(in_ECX + 0x120));
  dVar2 = appSecondsQPC();
  *(double *)(in_ECX + 0x13c) = dVar2;
  return;
}


// ==== 105156f0 FUN_105156f0

void FUN_105156f0(float param_1,float *param_2)

{
  int iVar1;
  int in_ECX;
  int *piVar2;
  float local_c;
  float local_8;
  float local_4;
  
  if (*(byte *)(in_ECX + 0x1dd) != *(byte *)(in_ECX + 0x1dc)) {
    iVar1 = 0;
    local_4 = 0.0;
    local_8 = 0.0;
    if (0 < *(int *)(in_ECX + 0x1bc)) {
      do {
        piVar2 = *(int **)(*(int *)(in_ECX + 0x1b8) + iVar1 * 4);
        if (piVar2[0x44] == (uint)*(byte *)(in_ECX + 0x1dc)) {
          (**(code **)(*piVar2 + 0xec))(*(undefined4 *)(in_ECX + 0x1c8),&local_4);
        }
        piVar2 = *(int **)(*(int *)(in_ECX + 0x1b8) + iVar1 * 4);
        if (piVar2[0x44] == (uint)*(byte *)(in_ECX + 0x1dd)) {
          (**(code **)(*piVar2 + 0xec))(*(undefined4 *)(in_ECX + 0x1cc),&local_8);
        }
        iVar1 = iVar1 + 1;
      } while (iVar1 < *(int *)(in_ECX + 0x1bc));
    }
    local_c = *(float *)(in_ECX + 0x1cc) - *(float *)(in_ECX + 0x1c8);
    if (*(float *)(in_ECX + 0x1cc) < *(float *)(in_ECX + 0x1c8)) {
      local_c = local_c + 24.0;
    }
    *param_2 = (local_8 - local_4) * ((param_1 - *(float *)(in_ECX + 0x1c8)) / local_c) + local_4;
    return;
  }
  iVar1 = 0;
  if (0 < *(int *)(in_ECX + 0x1bc)) {
    piVar2 = *(int **)(in_ECX + 0x1b8);
    do {
      if (*(uint *)(*piVar2 + 0x110) == (uint)*(byte *)(in_ECX + 0x1dd)) {
        (**(code **)(*(int *)(*(int **)(in_ECX + 0x1b8))[iVar1] + 0xec))(param_1,param_2);
        return;
      }
      iVar1 = iVar1 + 1;
      piVar2 = piVar2 + 1;
    } while (iVar1 < *(int *)(in_ECX + 0x1bc));
  }
  return;
}


// ==== 105158b0 FUN_105158b0

void FUN_105158b0(float param_1,float *param_2)

{
  int iVar1;
  int in_ECX;
  int *piVar2;
  float local_c;
  float local_8;
  float local_4;
  
  if (*(byte *)(in_ECX + 0x1dd) != *(byte *)(in_ECX + 0x1dc)) {
    iVar1 = 0;
    local_4 = 0.0;
    local_8 = 0.0;
    if (0 < *(int *)(in_ECX + 0x1bc)) {
      do {
        piVar2 = *(int **)(*(int *)(in_ECX + 0x1b8) + iVar1 * 4);
        if (piVar2[0x44] == (uint)*(byte *)(in_ECX + 0x1dc)) {
          (**(code **)(*piVar2 + 0xf0))(*(undefined4 *)(in_ECX + 0x1c8),&local_4);
        }
        piVar2 = *(int **)(*(int *)(in_ECX + 0x1b8) + iVar1 * 4);
        if (piVar2[0x44] == (uint)*(byte *)(in_ECX + 0x1dd)) {
          (**(code **)(*piVar2 + 0xf0))(*(undefined4 *)(in_ECX + 0x1cc),&local_8);
        }
        iVar1 = iVar1 + 1;
      } while (iVar1 < *(int *)(in_ECX + 0x1bc));
    }
    local_c = *(float *)(in_ECX + 0x1cc) - *(float *)(in_ECX + 0x1c8);
    if (*(float *)(in_ECX + 0x1cc) < *(float *)(in_ECX + 0x1c8)) {
      local_c = local_c + 24.0;
    }
    *param_2 = (local_8 - local_4) * ((param_1 - *(float *)(in_ECX + 0x1c8)) / local_c) + local_4;
    return;
  }
  iVar1 = 0;
  if (0 < *(int *)(in_ECX + 0x1bc)) {
    piVar2 = *(int **)(in_ECX + 0x1b8);
    do {
      if (*(uint *)(*piVar2 + 0x110) == (uint)*(byte *)(in_ECX + 0x1dd)) {
        (**(code **)(*(int *)(*(int **)(in_ECX + 0x1b8))[iVar1] + 0xf0))(param_1,param_2);
        return;
      }
      iVar1 = iVar1 + 1;
      piVar2 = piVar2 + 1;
    } while (iVar1 < *(int *)(in_ECX + 0x1bc));
  }
  return;
}


// ==== 10515a70 FUN_10515a70

void FUN_10515a70(byte *param_1,byte *param_2,byte *param_3,float param_4,byte *param_5,
                 byte *param_6,byte *param_7)

{
  float fVar1;
  float fVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte *pbVar7;
  uint uVar8;
  int in_ECX;
  
  pbVar7 = param_2;
  if (*(char *)(in_ECX + 0x1dd) != *(char *)(in_ECX + 0x1dc)) {
    uVar8 = (uint)param_1[2];
    if (param_4 < *(float *)(in_ECX + 0x1d0)) {
      bVar3 = param_3[1];
      bVar4 = param_1[1];
      fVar1 = *(float *)(in_ECX + 0x1d8);
      bVar5 = *param_1;
      bVar6 = *param_3;
      fVar2 = *(float *)(in_ECX + 0x1d8);
      uVar8 = (int)ROUND((float)(int)(param_3[2] - uVar8) * *(float *)(in_ECX + 0x1d8) +
                         (float)uVar8) & 0xff;
      param_2._0_1_ =
           (byte)(int)ROUND((float)(int)(param_2[2] - uVar8) * *(float *)(in_ECX + 0x1e0) +
                            (float)uVar8);
      *param_5 = (byte)param_2;
      uVar8 = (int)ROUND((float)(int)((uint)bVar3 - (uint)bVar4) * fVar1 + (float)bVar4) & 0xff;
      param_5._0_1_ =
           (byte)(int)ROUND((float)(int)(pbVar7[1] - uVar8) * *(float *)(in_ECX + 0x1e0) +
                            (float)uVar8);
      *param_6 = (byte)param_5;
      uVar8 = (int)ROUND((float)(int)((uint)bVar6 - (uint)bVar5) * fVar2 + (float)bVar5) & 0xff;
      param_5._0_1_ =
           (byte)(int)ROUND((float)(int)(*pbVar7 - uVar8) * *(float *)(in_ECX + 0x1e0) +
                            (float)uVar8);
      *param_7 = (byte)param_5;
      return;
    }
    param_2._0_1_ =
         (byte)(int)ROUND((float)(int)(param_2[2] - uVar8) * *(float *)(in_ECX + 0x1e0) +
                          (float)uVar8);
    *param_5 = (byte)param_2;
    param_5._0_1_ =
         (byte)(int)ROUND((float)(int)((uint)pbVar7[1] - (uint)param_1[1]) *
                          *(float *)(in_ECX + 0x1e0) + (float)param_1[1]);
    *param_6 = (byte)param_5;
    param_5._0_1_ =
         (byte)(int)ROUND((float)(int)((uint)*pbVar7 - (uint)*param_1) * *(float *)(in_ECX + 0x1e0)
                          + (float)*param_1);
    *param_7 = (byte)param_5;
    return;
  }
  if (*(char *)(in_ECX + 0x1dd) == '\0') {
    *param_5 = param_1[2];
    *param_6 = param_1[1];
    *param_7 = *param_1;
    return;
  }
  param_2._0_1_ =
       (byte)(int)ROUND((float)(int)((uint)param_2[2] - (uint)param_1[2]) *
                        *(float *)(in_ECX + 0x1e0) + (float)param_1[2]);
  *param_5 = (byte)param_2;
  param_5._0_1_ =
       (byte)(int)ROUND((float)(int)((uint)pbVar7[1] - (uint)param_1[1]) *
                        *(float *)(in_ECX + 0x1e0) + (float)param_1[1]);
  *param_6 = (byte)param_5;
  param_5._0_1_ =
       (byte)(int)ROUND((float)(int)((uint)*pbVar7 - (uint)*param_1) * *(float *)(in_ECX + 0x1e0) +
                        (float)*param_1);
  *param_7 = (byte)param_5;
  return;
}


// ==== 10515f40 FUN_10515f40

void FUN_10515f40(float param_1,byte *param_2,byte *param_3,byte *param_4)

{
  int *piVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  UL2NEnvManager *in_ECX;
  int iVar6;
  int iVar7;
  int iVar8;
  double dVar9;
  byte bStack_68;
  byte bStack_67;
  undefined2 uStack_66;
  FColor local_64;
  undefined1 local_63;
  undefined1 local_62;
  undefined1 local_61;
  FColor local_60;
  undefined1 local_5f;
  undefined1 local_5e;
  undefined1 local_5d;
  FColor local_5c;
  undefined1 local_5b;
  undefined1 local_5a;
  undefined1 local_59;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  int iStack_4c;
  float fStack_48;
  float fStack_44;
  
  iVar6 = 0;
  iVar7 = 0;
  local_5c = (FColor)0x0;
  local_5b = 0;
  local_5a = 0;
  local_59 = 0xff;
  local_60 = (FColor)0x0;
  local_5f = 0;
  local_5e = 0;
  local_5d = 0xff;
  local_64 = (FColor)0x0;
  local_63 = 0;
  local_62 = 0;
  local_61 = 0xff;
  if (0 < *(int *)(in_ECX + 0x1bc)) {
    do {
      piVar1 = *(int **)(*(int *)(in_ECX + 0x1b8) + iVar7 * 4);
      if (piVar1[0x44] == (uint)(byte)in_ECX[0x1dd]) {
        (**(code **)(*piVar1 + 200))(param_1,&local_5e,&local_5f);
      }
      piVar1 = *(int **)(*(int *)(in_ECX + 0x1b8) + iVar7 * 4);
      if (piVar1[0x44] == (uint)(byte)in_ECX[0x1dc]) {
        (**(code **)(*piVar1 + 200))(param_1,&local_62,&local_63);
      }
      piVar1 = *(int **)(*(int *)(in_ECX + 0x1b8) + iVar7 * 4);
      if (piVar1[0x44] == 0) {
        (**(code **)(*piVar1 + 200))(param_1,&local_5a,&local_5b);
      }
      iVar7 = iVar7 + 1;
    } while (iVar7 < *(int *)(in_ECX + 0x1bc));
  }
  UL2NEnvManager::GetEnvColor(in_ECX,&local_5c,&local_60,&local_64,param_1,param_2,param_3,param_4);
  if (*(int *)(in_ECX + 0x1b0) != 0) {
    fStack_58 = 0.0;
    iStack_4c = 0;
    fStack_54 = 0.0;
    bStack_68 = 0;
    fStack_50 = 0.0;
    bStack_67 = 0;
    uStack_66 = (ushort)uStack_66._1_1_ << 8;
    if (0 < *(int *)(in_ECX + 0x1b0)) {
      iVar7 = *(int *)(in_ECX + 0x1a0);
      iVar8 = 0;
      do {
        fVar2 = *(float *)(iVar8 + iVar7) - *(float *)(in_ECX + 0x114);
        fStack_48 = *(float *)(iVar8 + 4 + iVar7) - *(float *)(in_ECX + 0x118);
        fStack_44 = fStack_48 * fStack_48;
        dVar9 = appSqrt((double)(fVar2 * fVar2 + fStack_44));
        fStack_48 = (float)dVar9;
        iVar7 = *(int *)(in_ECX + 0x1a0);
        if (fStack_48 <= *(float *)(iVar8 + 0x10 + iVar7)) {
          (**(code **)(**(int **)(*(int *)(in_ECX + 0x1ac) + iVar6 * 4) + 200))
                    (param_1,&bStack_68,&bStack_67,&uStack_66);
          iVar7 = *(int *)(in_ECX + 0x1a0);
          if (*(float *)(iVar8 + 0xc + iVar7) < fStack_48) {
            fVar2 = (fStack_48 - *(float *)(iVar7 + 0xc + iVar8)) /
                    (*(float *)(iVar7 + iVar8 + 0x10) - *(float *)(iVar7 + iVar8 + 0xc));
            fVar5 = 1.0 - fVar2;
            fVar3 = (float)bStack_68 * fVar5 + (float)*param_2 * fVar2;
            fVar4 = (float)bStack_67 * fVar5 + (float)*param_3 * fVar2;
            fVar2 = (float)(byte)uStack_66 * fVar5 + (float)*param_4 * fVar2;
          }
          else {
            fVar3 = (float)bStack_68;
            fVar4 = (float)bStack_67;
            fVar2 = (float)(byte)uStack_66;
          }
          fStack_54 = fVar4 + fStack_54;
          fStack_58 = fVar3 + fStack_58;
          fStack_50 = fVar2 + fStack_50;
          iStack_4c = iStack_4c + 1;
        }
        iVar6 = iVar6 + 1;
        iVar8 = iVar8 + 0x14;
      } while (iVar6 < *(int *)(in_ECX + 0x1b0));
      if (iStack_4c != 0) {
        fVar2 = (float)iStack_4c;
        fStack_44._0_1_ = (byte)(int)ROUND(fStack_58 / fVar2);
        *param_2 = fStack_44._0_1_;
        fStack_44._0_1_ = (byte)(int)ROUND(fStack_54 / fVar2);
        *param_3 = fStack_44._0_1_;
        fStack_44._0_1_ = (byte)(int)ROUND(fStack_50 / fVar2);
        *param_4 = fStack_44._0_1_;
      }
    }
  }
  return;
}


// ==== 105163e0 FUN_105163e0

void FUN_105163e0(float param_1,byte *param_2,byte *param_3,byte *param_4)

{
  int *piVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  UL2NEnvManager *in_ECX;
  int iVar6;
  int iVar7;
  int iVar8;
  double dVar9;
  byte bStack_68;
  byte bStack_67;
  undefined2 uStack_66;
  FColor local_64;
  undefined1 local_63;
  undefined1 local_62;
  undefined1 local_61;
  FColor local_60;
  undefined1 local_5f;
  undefined1 local_5e;
  undefined1 local_5d;
  FColor local_5c;
  undefined1 local_5b;
  undefined1 local_5a;
  undefined1 local_59;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  int iStack_4c;
  float fStack_48;
  float fStack_44;
  
  iVar6 = 0;
  iVar7 = 0;
  local_5c = (FColor)0x0;
  local_5b = 0;
  local_5a = 0;
  local_59 = 0xff;
  local_60 = (FColor)0x0;
  local_5f = 0;
  local_5e = 0;
  local_5d = 0xff;
  local_64 = (FColor)0x0;
  local_63 = 0;
  local_62 = 0;
  local_61 = 0xff;
  if (0 < *(int *)(in_ECX + 0x1bc)) {
    do {
      piVar1 = *(int **)(*(int *)(in_ECX + 0x1b8) + iVar7 * 4);
      if (piVar1[0x44] == (uint)(byte)in_ECX[0x1dd]) {
        (**(code **)(*piVar1 + 0xcc))(param_1,&local_5e,&local_5f);
      }
      piVar1 = *(int **)(*(int *)(in_ECX + 0x1b8) + iVar7 * 4);
      if (piVar1[0x44] == (uint)(byte)in_ECX[0x1dc]) {
        (**(code **)(*piVar1 + 0xcc))(param_1,&local_62,&local_63);
      }
      piVar1 = *(int **)(*(int *)(in_ECX + 0x1b8) + iVar7 * 4);
      if (piVar1[0x44] == 0) {
        (**(code **)(*piVar1 + 0xcc))(param_1,&local_5a,&local_5b);
      }
      iVar7 = iVar7 + 1;
    } while (iVar7 < *(int *)(in_ECX + 0x1bc));
  }
  UL2NEnvManager::GetEnvColor(in_ECX,&local_5c,&local_60,&local_64,param_1,param_2,param_3,param_4);
  if (*(int *)(in_ECX + 0x1b0) != 0) {
    fStack_58 = 0.0;
    iStack_4c = 0;
    fStack_54 = 0.0;
    bStack_68 = 0;
    fStack_50 = 0.0;
    bStack_67 = 0;
    uStack_66 = (ushort)uStack_66._1_1_ << 8;
    if (0 < *(int *)(in_ECX + 0x1b0)) {
      iVar7 = *(int *)(in_ECX + 0x1a0);
      iVar8 = 0;
      do {
        fVar2 = *(float *)(iVar8 + iVar7) - *(float *)(in_ECX + 0x114);
        fStack_48 = *(float *)(iVar8 + 4 + iVar7) - *(float *)(in_ECX + 0x118);
        fStack_44 = fStack_48 * fStack_48;
        dVar9 = appSqrt((double)(fVar2 * fVar2 + fStack_44));
        fStack_48 = (float)dVar9;
        iVar7 = *(int *)(in_ECX + 0x1a0);
        if (fStack_48 <= *(float *)(iVar8 + 0x10 + iVar7)) {
          (**(code **)(**(int **)(*(int *)(in_ECX + 0x1ac) + iVar6 * 4) + 0xcc))
                    (param_1,&bStack_68,&bStack_67,&uStack_66);
          iVar7 = *(int *)(in_ECX + 0x1a0);
          if (*(float *)(iVar8 + 0xc + iVar7) < fStack_48) {
            fVar2 = (fStack_48 - *(float *)(iVar7 + 0xc + iVar8)) /
                    (*(float *)(iVar7 + iVar8 + 0x10) - *(float *)(iVar7 + iVar8 + 0xc));
            fVar5 = 1.0 - fVar2;
            fVar3 = (float)bStack_68 * fVar5 + (float)*param_2 * fVar2;
            fVar4 = (float)bStack_67 * fVar5 + (float)*param_3 * fVar2;
            fVar2 = (float)(byte)uStack_66 * fVar5 + (float)*param_4 * fVar2;
          }
          else {
            fVar3 = (float)bStack_68;
            fVar4 = (float)bStack_67;
            fVar2 = (float)(byte)uStack_66;
          }
          fStack_54 = fVar4 + fStack_54;
          fStack_58 = fVar3 + fStack_58;
          fStack_50 = fVar2 + fStack_50;
          iStack_4c = iStack_4c + 1;
        }
        iVar6 = iVar6 + 1;
        iVar8 = iVar8 + 0x14;
      } while (iVar6 < *(int *)(in_ECX + 0x1b0));
      if (iStack_4c != 0) {
        fVar2 = (float)iStack_4c;
        fStack_44._0_1_ = (byte)(int)ROUND(fStack_58 / fVar2);
        *param_2 = fStack_44._0_1_;
        fStack_44._0_1_ = (byte)(int)ROUND(fStack_54 / fVar2);
        *param_3 = fStack_44._0_1_;
        fStack_44._0_1_ = (byte)(int)ROUND(fStack_50 / fVar2);
        *param_4 = fStack_44._0_1_;
      }
    }
  }
  return;
}


// ==== 10516880 FUN_10516880

void FUN_10516880(float param_1,byte *param_2,byte *param_3,byte *param_4)

{
  int *piVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  UL2NEnvManager *in_ECX;
  int iVar6;
  int iVar7;
  int iVar8;
  double dVar9;
  byte bStack_68;
  byte bStack_67;
  undefined2 uStack_66;
  FColor local_64;
  undefined1 local_63;
  undefined1 local_62;
  undefined1 local_61;
  FColor local_60;
  undefined1 local_5f;
  undefined1 local_5e;
  undefined1 local_5d;
  FColor local_5c;
  undefined1 local_5b;
  undefined1 local_5a;
  undefined1 local_59;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  int iStack_4c;
  float fStack_48;
  float fStack_44;
  
  iVar6 = 0;
  iVar7 = 0;
  local_5c = (FColor)0x0;
  local_5b = 0;
  local_5a = 0;
  local_59 = 0xff;
  local_60 = (FColor)0x0;
  local_5f = 0;
  local_5e = 0;
  local_5d = 0xff;
  local_64 = (FColor)0x0;
  local_63 = 0;
  local_62 = 0;
  local_61 = 0xff;
  if (0 < *(int *)(in_ECX + 0x1bc)) {
    do {
      piVar1 = *(int **)(*(int *)(in_ECX + 0x1b8) + iVar7 * 4);
      if (piVar1[0x44] == (uint)(byte)in_ECX[0x1dd]) {
        (**(code **)(*piVar1 + 0xd0))(param_1,&local_5e,&local_5f);
      }
      piVar1 = *(int **)(*(int *)(in_ECX + 0x1b8) + iVar7 * 4);
      if (piVar1[0x44] == (uint)(byte)in_ECX[0x1dc]) {
        (**(code **)(*piVar1 + 0xd0))(param_1,&local_62,&local_63);
      }
      piVar1 = *(int **)(*(int *)(in_ECX + 0x1b8) + iVar7 * 4);
      if (piVar1[0x44] == 0) {
        (**(code **)(*piVar1 + 0xd0))(param_1,&local_5a,&local_5b);
      }
      iVar7 = iVar7 + 1;
    } while (iVar7 < *(int *)(in_ECX + 0x1bc));
  }
  UL2NEnvManager::GetEnvColor(in_ECX,&local_5c,&local_60,&local_64,param_1,param_2,param_3,param_4);
  if (*(int *)(in_ECX + 0x1b0) != 0) {
    fStack_58 = 0.0;
    iStack_4c = 0;
    fStack_54 = 0.0;
    bStack_68 = 0;
    fStack_50 = 0.0;
    bStack_67 = 0;
    uStack_66 = (ushort)uStack_66._1_1_ << 8;
    if (0 < *(int *)(in_ECX + 0x1b0)) {
      iVar7 = *(int *)(in_ECX + 0x1a0);
      iVar8 = 0;
      do {
        fVar2 = *(float *)(iVar8 + iVar7) - *(float *)(in_ECX + 0x114);
        fStack_48 = *(float *)(iVar8 + 4 + iVar7) - *(float *)(in_ECX + 0x118);
        fStack_44 = fStack_48 * fStack_48;
        dVar9 = appSqrt((double)(fVar2 * fVar2 + fStack_44));
        fStack_48 = (float)dVar9;
        iVar7 = *(int *)(in_ECX + 0x1a0);
        if (fStack_48 <= *(float *)(iVar8 + 0x10 + iVar7)) {
          (**(code **)(**(int **)(*(int *)(in_ECX + 0x1ac) + iVar6 * 4) + 0xd0))
                    (param_1,&bStack_68,&bStack_67,&uStack_66);
          iVar7 = *(int *)(in_ECX + 0x1a0);
          if (*(float *)(iVar8 + 0xc + iVar7) < fStack_48) {
            fVar2 = (fStack_48 - *(float *)(iVar7 + 0xc + iVar8)) /
                    (*(float *)(iVar7 + iVar8 + 0x10) - *(float *)(iVar7 + iVar8 + 0xc));
            fVar5 = 1.0 - fVar2;
            fVar3 = (float)bStack_68 * fVar5 + (float)*param_2 * fVar2;
            fVar4 = (float)bStack_67 * fVar5 + (float)*param_3 * fVar2;
            fVar2 = (float)(byte)uStack_66 * fVar5 + (float)*param_4 * fVar2;
          }
          else {
            fVar3 = (float)bStack_68;
            fVar4 = (float)bStack_67;
            fVar2 = (float)(byte)uStack_66;
          }
          fStack_54 = fVar4 + fStack_54;
          fStack_58 = fVar3 + fStack_58;
          fStack_50 = fVar2 + fStack_50;
          iStack_4c = iStack_4c + 1;
        }
        iVar6 = iVar6 + 1;
        iVar8 = iVar8 + 0x14;
      } while (iVar6 < *(int *)(in_ECX + 0x1b0));
      if (iStack_4c != 0) {
        fVar2 = (float)iStack_4c;
        fStack_44._0_1_ = (byte)(int)ROUND(fStack_58 / fVar2);
        *param_2 = fStack_44._0_1_;
        fStack_44._0_1_ = (byte)(int)ROUND(fStack_54 / fVar2);
        *param_3 = fStack_44._0_1_;
        fStack_44._0_1_ = (byte)(int)ROUND(fStack_50 / fVar2);
        *param_4 = fStack_44._0_1_;
      }
    }
  }
  return;
}


// ==== 10516d20 FUN_10516d20

void FUN_10516d20(float param_1,byte *param_2,byte *param_3,byte *param_4)

{
  int *piVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  UL2NEnvManager *in_ECX;
  int iVar6;
  int iVar7;
  int iVar8;
  double dVar9;
  byte bStack_68;
  byte bStack_67;
  undefined2 uStack_66;
  FColor local_64;
  undefined1 local_63;
  undefined1 local_62;
  undefined1 local_61;
  FColor local_60;
  undefined1 local_5f;
  undefined1 local_5e;
  undefined1 local_5d;
  FColor local_5c;
  undefined1 local_5b;
  undefined1 local_5a;
  undefined1 local_59;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  int iStack_4c;
  float fStack_48;
  float fStack_44;
  
  iVar6 = 0;
  iVar7 = 0;
  local_5c = (FColor)0x0;
  local_5b = 0;
  local_5a = 0;
  local_59 = 0xff;
  local_60 = (FColor)0x0;
  local_5f = 0;
  local_5e = 0;
  local_5d = 0xff;
  local_64 = (FColor)0x0;
  local_63 = 0;
  local_62 = 0;
  local_61 = 0xff;
  if (0 < *(int *)(in_ECX + 0x1bc)) {
    do {
      piVar1 = *(int **)(*(int *)(in_ECX + 0x1b8) + iVar7 * 4);
      if (piVar1[0x44] == (uint)(byte)in_ECX[0x1dd]) {
        (**(code **)(*piVar1 + 0xd4))(param_1,&local_5e,&local_5f);
      }
      piVar1 = *(int **)(*(int *)(in_ECX + 0x1b8) + iVar7 * 4);
      if (piVar1[0x44] == (uint)(byte)in_ECX[0x1dc]) {
        (**(code **)(*piVar1 + 0xd4))(param_1,&local_62,&local_63);
      }
      piVar1 = *(int **)(*(int *)(in_ECX + 0x1b8) + iVar7 * 4);
      if (piVar1[0x44] == 0) {
        (**(code **)(*piVar1 + 0xd4))(param_1,&local_5a,&local_5b);
      }
      iVar7 = iVar7 + 1;
    } while (iVar7 < *(int *)(in_ECX + 0x1bc));
  }
  UL2NEnvManager::GetEnvColor(in_ECX,&local_5c,&local_60,&local_64,param_1,param_2,param_3,param_4);
  if (*(int *)(in_ECX + 0x1b0) != 0) {
    fStack_58 = 0.0;
    iStack_4c = 0;
    fStack_54 = 0.0;
    bStack_68 = 0;
    fStack_50 = 0.0;
    bStack_67 = 0;
    uStack_66 = (ushort)uStack_66._1_1_ << 8;
    if (0 < *(int *)(in_ECX + 0x1b0)) {
      iVar7 = *(int *)(in_ECX + 0x1a0);
      iVar8 = 0;
      do {
        fVar2 = *(float *)(iVar8 + iVar7) - *(float *)(in_ECX + 0x114);
        fStack_48 = *(float *)(iVar8 + 4 + iVar7) - *(float *)(in_ECX + 0x118);
        fStack_44 = fStack_48 * fStack_48;
        dVar9 = appSqrt((double)(fVar2 * fVar2 + fStack_44));
        fStack_48 = (float)dVar9;
        iVar7 = *(int *)(in_ECX + 0x1a0);
        if (fStack_48 <= *(float *)(iVar8 + 0x10 + iVar7)) {
          (**(code **)(**(int **)(*(int *)(in_ECX + 0x1ac) + iVar6 * 4) + 0xd4))
                    (param_1,&bStack_68,&bStack_67,&uStack_66);
          iVar7 = *(int *)(in_ECX + 0x1a0);
          if (*(float *)(iVar8 + 0xc + iVar7) < fStack_48) {
            fVar2 = (fStack_48 - *(float *)(iVar7 + 0xc + iVar8)) /
                    (*(float *)(iVar7 + iVar8 + 0x10) - *(float *)(iVar7 + iVar8 + 0xc));
            fVar5 = 1.0 - fVar2;
            fVar3 = (float)bStack_68 * fVar5 + (float)*param_2 * fVar2;
            fVar4 = (float)bStack_67 * fVar5 + (float)*param_3 * fVar2;
            fVar2 = (float)(byte)uStack_66 * fVar5 + (float)*param_4 * fVar2;
          }
          else {
            fVar3 = (float)bStack_68;
            fVar4 = (float)bStack_67;
            fVar2 = (float)(byte)uStack_66;
          }
          fStack_54 = fVar4 + fStack_54;
          fStack_58 = fVar3 + fStack_58;
          fStack_50 = fVar2 + fStack_50;
          iStack_4c = iStack_4c + 1;
        }
        iVar6 = iVar6 + 1;
        iVar8 = iVar8 + 0x14;
      } while (iVar6 < *(int *)(in_ECX + 0x1b0));
      if (iStack_4c != 0) {
        fVar2 = (float)iStack_4c;
        fStack_44._0_1_ = (byte)(int)ROUND(fStack_58 / fVar2);
        *param_2 = fStack_44._0_1_;
        fStack_44._0_1_ = (byte)(int)ROUND(fStack_54 / fVar2);
        *param_3 = fStack_44._0_1_;
        fStack_44._0_1_ = (byte)(int)ROUND(fStack_50 / fVar2);
        *param_4 = fStack_44._0_1_;
      }
    }
  }
  return;
}


// ==== 105171c0 FUN_105171c0

void FUN_105171c0(float param_1,byte *param_2,byte *param_3,byte *param_4)

{
  int *piVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  UL2NEnvManager *in_ECX;
  int iVar6;
  int iVar7;
  int iVar8;
  double dVar9;
  byte bStack_68;
  byte bStack_67;
  undefined2 uStack_66;
  FColor local_64;
  undefined1 local_63;
  undefined1 local_62;
  undefined1 local_61;
  FColor local_60;
  undefined1 local_5f;
  undefined1 local_5e;
  undefined1 local_5d;
  FColor local_5c;
  undefined1 local_5b;
  undefined1 local_5a;
  undefined1 local_59;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  int iStack_4c;
  float fStack_48;
  float fStack_44;
  
  iVar6 = 0;
  iVar7 = 0;
  local_5c = (FColor)0x0;
  local_5b = 0;
  local_5a = 0;
  local_59 = 0xff;
  local_60 = (FColor)0x0;
  local_5f = 0;
  local_5e = 0;
  local_5d = 0xff;
  local_64 = (FColor)0x0;
  local_63 = 0;
  local_62 = 0;
  local_61 = 0xff;
  if (0 < *(int *)(in_ECX + 0x1bc)) {
    do {
      piVar1 = *(int **)(*(int *)(in_ECX + 0x1b8) + iVar7 * 4);
      if (piVar1[0x44] == (uint)(byte)in_ECX[0x1dd]) {
        (**(code **)(*piVar1 + 0xd8))(param_1,&local_5e,&local_5f);
      }
      piVar1 = *(int **)(*(int *)(in_ECX + 0x1b8) + iVar7 * 4);
      if (piVar1[0x44] == (uint)(byte)in_ECX[0x1dc]) {
        (**(code **)(*piVar1 + 0xd8))(param_1,&local_62,&local_63);
      }
      piVar1 = *(int **)(*(int *)(in_ECX + 0x1b8) + iVar7 * 4);
      if (piVar1[0x44] == 0) {
        (**(code **)(*piVar1 + 0xd8))(param_1,&local_5a,&local_5b);
      }
      iVar7 = iVar7 + 1;
    } while (iVar7 < *(int *)(in_ECX + 0x1bc));
  }
  UL2NEnvManager::GetEnvColor(in_ECX,&local_5c,&local_60,&local_64,param_1,param_2,param_3,param_4);
  if (*(int *)(in_ECX + 0x1b0) != 0) {
    fStack_58 = 0.0;
    iStack_4c = 0;
    fStack_54 = 0.0;
    bStack_68 = 0;
    fStack_50 = 0.0;
    bStack_67 = 0;
    uStack_66 = (ushort)uStack_66._1_1_ << 8;
    if (0 < *(int *)(in_ECX + 0x1b0)) {
      iVar7 = *(int *)(in_ECX + 0x1a0);
      iVar8 = 0;
      do {
        fVar2 = *(float *)(iVar8 + iVar7) - *(float *)(in_ECX + 0x114);
        fStack_48 = *(float *)(iVar8 + 4 + iVar7) - *(float *)(in_ECX + 0x118);
        fStack_44 = fStack_48 * fStack_48;
        dVar9 = appSqrt((double)(fVar2 * fVar2 + fStack_44));
        fStack_48 = (float)dVar9;
        iVar7 = *(int *)(in_ECX + 0x1a0);
        if (fStack_48 <= *(float *)(iVar8 + 0x10 + iVar7)) {
          (**(code **)(**(int **)(*(int *)(in_ECX + 0x1ac) + iVar6 * 4) + 0xd8))
                    (param_1,&bStack_68,&bStack_67,&uStack_66);
          iVar7 = *(int *)(in_ECX + 0x1a0);
          if (*(float *)(iVar8 + 0xc + iVar7) < fStack_48) {
            fVar2 = (fStack_48 - *(float *)(iVar7 + 0xc + iVar8)) /
                    (*(float *)(iVar7 + iVar8 + 0x10) - *(float *)(iVar7 + iVar8 + 0xc));
            fVar5 = 1.0 - fVar2;
            fVar3 = (float)bStack_68 * fVar5 + (float)*param_2 * fVar2;
            fVar4 = (float)bStack_67 * fVar5 + (float)*param_3 * fVar2;
            fVar2 = (float)(byte)uStack_66 * fVar5 + (float)*param_4 * fVar2;
          }
          else {
            fVar3 = (float)bStack_68;
            fVar4 = (float)bStack_67;
            fVar2 = (float)(byte)uStack_66;
          }
          fStack_54 = fVar4 + fStack_54;
          fStack_58 = fVar3 + fStack_58;
          fStack_50 = fVar2 + fStack_50;
          iStack_4c = iStack_4c + 1;
        }
        iVar6 = iVar6 + 1;
        iVar8 = iVar8 + 0x14;
      } while (iVar6 < *(int *)(in_ECX + 0x1b0));
      if (iStack_4c != 0) {
        fVar2 = (float)iStack_4c;
        fStack_44._0_1_ = (byte)(int)ROUND(fStack_58 / fVar2);
        *param_2 = fStack_44._0_1_;
        fStack_44._0_1_ = (byte)(int)ROUND(fStack_54 / fVar2);
        *param_3 = fStack_44._0_1_;
        fStack_44._0_1_ = (byte)(int)ROUND(fStack_50 / fVar2);
        *param_4 = fStack_44._0_1_;
      }
    }
  }
  return;
}


// ==== 10517660 FUN_10517660

void FUN_10517660(float param_1,byte *param_2,byte *param_3,byte *param_4)

{
  int *piVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  UL2NEnvManager *in_ECX;
  int iVar6;
  int iVar7;
  int iVar8;
  double dVar9;
  byte bStack_68;
  byte bStack_67;
  undefined2 uStack_66;
  FColor local_64;
  undefined1 local_63;
  undefined1 local_62;
  undefined1 local_61;
  FColor local_60;
  undefined1 local_5f;
  undefined1 local_5e;
  undefined1 local_5d;
  FColor local_5c;
  undefined1 local_5b;
  undefined1 local_5a;
  undefined1 local_59;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  int iStack_4c;
  float fStack_48;
  float fStack_44;
  
  iVar6 = 0;
  iVar7 = 0;
  local_5c = (FColor)0x0;
  local_5b = 0;
  local_5a = 0;
  local_59 = 0xff;
  local_60 = (FColor)0x0;
  local_5f = 0;
  local_5e = 0;
  local_5d = 0xff;
  local_64 = (FColor)0x0;
  local_63 = 0;
  local_62 = 0;
  local_61 = 0xff;
  if (0 < *(int *)(in_ECX + 0x1bc)) {
    do {
      piVar1 = *(int **)(*(int *)(in_ECX + 0x1b8) + iVar7 * 4);
      if (piVar1[0x44] == (uint)(byte)in_ECX[0x1dd]) {
        (**(code **)(*piVar1 + 0xe4))(param_1,&local_5e,&local_5f);
      }
      piVar1 = *(int **)(*(int *)(in_ECX + 0x1b8) + iVar7 * 4);
      if (piVar1[0x44] == (uint)(byte)in_ECX[0x1dc]) {
        (**(code **)(*piVar1 + 0xe4))(param_1,&local_62,&local_63);
      }
      piVar1 = *(int **)(*(int *)(in_ECX + 0x1b8) + iVar7 * 4);
      if (piVar1[0x44] == 0) {
        (**(code **)(*piVar1 + 0xe4))(param_1,&local_5a,&local_5b);
      }
      iVar7 = iVar7 + 1;
    } while (iVar7 < *(int *)(in_ECX + 0x1bc));
  }
  UL2NEnvManager::GetEnvColor(in_ECX,&local_5c,&local_60,&local_64,param_1,param_2,param_3,param_4);
  if (*(int *)(in_ECX + 0x1b0) != 0) {
    fStack_58 = 0.0;
    iStack_4c = 0;
    fStack_54 = 0.0;
    bStack_68 = 0;
    fStack_50 = 0.0;
    bStack_67 = 0;
    uStack_66 = (ushort)uStack_66._1_1_ << 8;
    if (0 < *(int *)(in_ECX + 0x1b0)) {
      iVar7 = *(int *)(in_ECX + 0x1a0);
      iVar8 = 0;
      do {
        fVar2 = *(float *)(iVar8 + iVar7) - *(float *)(in_ECX + 0x114);
        fStack_48 = *(float *)(iVar8 + 4 + iVar7) - *(float *)(in_ECX + 0x118);
        fStack_44 = fStack_48 * fStack_48;
        dVar9 = appSqrt((double)(fVar2 * fVar2 + fStack_44));
        fStack_48 = (float)dVar9;
        iVar7 = *(int *)(in_ECX + 0x1a0);
        if (fStack_48 <= *(float *)(iVar8 + 0x10 + iVar7)) {
          (**(code **)(**(int **)(*(int *)(in_ECX + 0x1ac) + iVar6 * 4) + 0xe4))
                    (param_1,&bStack_68,&bStack_67,&uStack_66);
          iVar7 = *(int *)(in_ECX + 0x1a0);
          if (*(float *)(iVar8 + 0xc + iVar7) < fStack_48) {
            fVar2 = (fStack_48 - *(float *)(iVar7 + 0xc + iVar8)) /
                    (*(float *)(iVar7 + iVar8 + 0x10) - *(float *)(iVar7 + iVar8 + 0xc));
            fVar5 = 1.0 - fVar2;
            fVar3 = (float)bStack_68 * fVar5 + (float)*param_2 * fVar2;
            fVar4 = (float)bStack_67 * fVar5 + (float)*param_3 * fVar2;
            fVar2 = (float)(byte)uStack_66 * fVar5 + (float)*param_4 * fVar2;
          }
          else {
            fVar3 = (float)bStack_68;
            fVar4 = (float)bStack_67;
            fVar2 = (float)(byte)uStack_66;
          }
          fStack_54 = fVar4 + fStack_54;
          fStack_58 = fVar3 + fStack_58;
          fStack_50 = fVar2 + fStack_50;
          iStack_4c = iStack_4c + 1;
        }
        iVar6 = iVar6 + 1;
        iVar8 = iVar8 + 0x14;
      } while (iVar6 < *(int *)(in_ECX + 0x1b0));
      if (iStack_4c != 0) {
        fVar2 = (float)iStack_4c;
        fStack_44._0_1_ = (byte)(int)ROUND(fStack_58 / fVar2);
        *param_2 = fStack_44._0_1_;
        fStack_44._0_1_ = (byte)(int)ROUND(fStack_54 / fVar2);
        *param_3 = fStack_44._0_1_;
        fStack_44._0_1_ = (byte)(int)ROUND(fStack_50 / fVar2);
        *param_4 = fStack_44._0_1_;
      }
    }
  }
  return;
}


// ==== 10517b00 FUN_10517b00

void FUN_10517b00(float param_1,byte *param_2,byte *param_3,byte *param_4)

{
  int *piVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  UL2NEnvManager *in_ECX;
  int iVar6;
  int iVar7;
  int iVar8;
  double dVar9;
  byte bStack_68;
  byte bStack_67;
  undefined2 uStack_66;
  FColor local_64;
  undefined1 local_63;
  undefined1 local_62;
  undefined1 local_61;
  FColor local_60;
  undefined1 local_5f;
  undefined1 local_5e;
  undefined1 local_5d;
  FColor local_5c;
  undefined1 local_5b;
  undefined1 local_5a;
  undefined1 local_59;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  int iStack_4c;
  float fStack_48;
  float fStack_44;
  
  iVar6 = 0;
  iVar7 = 0;
  local_5c = (FColor)0x0;
  local_5b = 0;
  local_5a = 0;
  local_59 = 0xff;
  local_60 = (FColor)0x0;
  local_5f = 0;
  local_5e = 0;
  local_5d = 0xff;
  local_64 = (FColor)0x0;
  local_63 = 0;
  local_62 = 0;
  local_61 = 0xff;
  if (0 < *(int *)(in_ECX + 0x1bc)) {
    do {
      piVar1 = *(int **)(*(int *)(in_ECX + 0x1b8) + iVar7 * 4);
      if (piVar1[0x44] == (uint)(byte)in_ECX[0x1dd]) {
        (**(code **)(*piVar1 + 0xe8))(param_1,&local_5e,&local_5f);
      }
      piVar1 = *(int **)(*(int *)(in_ECX + 0x1b8) + iVar7 * 4);
      if (piVar1[0x44] == (uint)(byte)in_ECX[0x1dc]) {
        (**(code **)(*piVar1 + 0xe8))(param_1,&local_62,&local_63);
      }
      piVar1 = *(int **)(*(int *)(in_ECX + 0x1b8) + iVar7 * 4);
      if (piVar1[0x44] == 0) {
        (**(code **)(*piVar1 + 0xe8))(param_1,&local_5a,&local_5b);
      }
      iVar7 = iVar7 + 1;
    } while (iVar7 < *(int *)(in_ECX + 0x1bc));
  }
  UL2NEnvManager::GetEnvColor(in_ECX,&local_5c,&local_60,&local_64,param_1,param_2,param_3,param_4);
  if (*(int *)(in_ECX + 0x1b0) != 0) {
    fStack_58 = 0.0;
    iStack_4c = 0;
    fStack_54 = 0.0;
    bStack_68 = 0;
    fStack_50 = 0.0;
    bStack_67 = 0;
    uStack_66 = (ushort)uStack_66._1_1_ << 8;
    if (0 < *(int *)(in_ECX + 0x1b0)) {
      iVar7 = *(int *)(in_ECX + 0x1a0);
      iVar8 = 0;
      do {
        fVar2 = *(float *)(iVar8 + iVar7) - *(float *)(in_ECX + 0x114);
        fStack_48 = *(float *)(iVar8 + 4 + iVar7) - *(float *)(in_ECX + 0x118);
        fStack_44 = fStack_48 * fStack_48;
        dVar9 = appSqrt((double)(fVar2 * fVar2 + fStack_44));
        fStack_48 = (float)dVar9;
        iVar7 = *(int *)(in_ECX + 0x1a0);
        if (fStack_48 <= *(float *)(iVar8 + 0x10 + iVar7)) {
          (**(code **)(**(int **)(*(int *)(in_ECX + 0x1ac) + iVar6 * 4) + 0xe8))
                    (param_1,&bStack_68,&bStack_67,&uStack_66);
          iVar7 = *(int *)(in_ECX + 0x1a0);
          if (*(float *)(iVar8 + 0xc + iVar7) < fStack_48) {
            fVar2 = (fStack_48 - *(float *)(iVar7 + 0xc + iVar8)) /
                    (*(float *)(iVar7 + iVar8 + 0x10) - *(float *)(iVar7 + iVar8 + 0xc));
            fVar5 = 1.0 - fVar2;
            fVar3 = (float)bStack_68 * fVar5 + (float)*param_2 * fVar2;
            fVar4 = (float)bStack_67 * fVar5 + (float)*param_3 * fVar2;
            fVar2 = (float)(byte)uStack_66 * fVar5 + (float)*param_4 * fVar2;
          }
          else {
            fVar3 = (float)bStack_68;
            fVar4 = (float)bStack_67;
            fVar2 = (float)(byte)uStack_66;
          }
          fStack_54 = fVar4 + fStack_54;
          fStack_58 = fVar3 + fStack_58;
          fStack_50 = fVar2 + fStack_50;
          iStack_4c = iStack_4c + 1;
        }
        iVar6 = iVar6 + 1;
        iVar8 = iVar8 + 0x14;
      } while (iVar6 < *(int *)(in_ECX + 0x1b0));
      if (iStack_4c != 0) {
        fVar2 = (float)iStack_4c;
        fStack_44._0_1_ = (byte)(int)ROUND(fStack_58 / fVar2);
        *param_2 = fStack_44._0_1_;
        fStack_44._0_1_ = (byte)(int)ROUND(fStack_54 / fVar2);
        *param_3 = fStack_44._0_1_;
        fStack_44._0_1_ = (byte)(int)ROUND(fStack_50 / fVar2);
        *param_4 = fStack_44._0_1_;
      }
    }
  }
  return;
}


// ==== 10517fa0 FUN_10517fa0

void FUN_10517fa0(float param_1,FPlane *param_2)

{
  int *piVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  FPlane *this;
  undefined4 *puVar5;
  UL2NEnvManager *in_ECX;
  int iVar6;
  int iVar7;
  double dVar8;
  FPlane *pFVar9;
  int iStack_e4;
  FPlane *pFStack_e0;
  float fStack_dc;
  float fStack_d8;
  undefined4 uStack_d4;
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
  FPlane aFStack_90 [4];
  FPlane aFStack_8c [28];
  FPlane aFStack_70 [12];
  undefined1 auStack_64 [36];
  undefined1 auStack_40 [60];
  
  local_b0 = 0;
  local_ac = 0;
  local_a8 = 0;
  local_a4 = 0;
  iVar6 = 0;
  local_c0 = 0;
  iVar7 = 0;
  local_bc = 0;
  local_b8 = 0;
  local_b4 = 0;
  local_d0 = 0;
  local_cc = 0;
  local_c8 = 0;
  local_c4 = 0;
  if (0 < *(int *)(in_ECX + 0x1bc)) {
    do {
      piVar1 = *(int **)(*(int *)(in_ECX + 0x1b8) + iVar7 * 4);
      if (piVar1[0x44] == (uint)(byte)in_ECX[0x1dd]) {
        (**(code **)(*piVar1 + 0x70))(param_1);
      }
      piVar1 = *(int **)(*(int *)(in_ECX + 0x1b8) + iVar7 * 4);
      if (piVar1[0x44] == (uint)(byte)in_ECX[0x1dc]) {
        (**(code **)(*piVar1 + 0x70))(param_1);
      }
      piVar1 = *(int **)(*(int *)(in_ECX + 0x1b8) + iVar7 * 4);
      if (piVar1[0x44] == 0) {
        (**(code **)(*piVar1 + 0x70))(param_1);
      }
      iVar7 = iVar7 + 1;
    } while (iVar7 < *(int *)(in_ECX + 0x1bc));
  }
  UL2NEnvManager::GetEnvColorPlane
            (in_ECX,(FPlane *)&local_d0,(FPlane *)&local_b0,(FPlane *)&local_c0,param_1,param_2);
  if (*(int *)(in_ECX + 0x1b0) != 0) {
    pFStack_e0 = (FPlane *)0x0;
    iStack_e4 = 0;
    fStack_dc = 0.0;
    fStack_d8 = 0.0;
    uStack_d4 = 0;
    if (0 < *(int *)(in_ECX + 0x1b0)) {
      iVar7 = 0;
      do {
        fVar3 = *(float *)(*(int *)(in_ECX + 0x1a0) + iVar7) - *(float *)(in_ECX + 0x114);
        fVar4 = *(float *)(*(int *)(in_ECX + 0x1a0) + iVar7 + 4) - *(float *)(in_ECX + 0x118);
        dVar8 = appSqrt((double)(fVar3 * fVar3 + fVar4 * fVar4));
        if ((float)dVar8 <= *(float *)(*(int *)(in_ECX + 0x1a0) + 0x10 + iVar7)) {
          (**(code **)(**(int **)(*(int *)(in_ECX + 0x1ac) + iVar6 * 4) + 0x70))(param_1);
          iVar2 = *(int *)(in_ECX + 0x1a0);
          if (*(float *)(iVar2 + 0xc + iVar7) < fStack_dc) {
            fStack_dc = (fStack_dc - *(float *)(iVar2 + 0xc + iVar7)) /
                        (*(float *)(iVar2 + iVar7 + 0x10) - *(float *)(iVar2 + iVar7 + 0xc));
            fStack_d8 = 1.0 - fStack_dc;
            FPlane::operator*(aFStack_90,(float)auStack_40);
            pFVar9 = pFStack_e0;
            this = (FPlane *)FPlane::operator*(param_2,(float)auStack_64);
            FPlane::operator+(this,pFVar9);
            pFVar9 = aFStack_8c;
          }
          else {
            pFVar9 = aFStack_70;
          }
          FPlane::operator+=((FPlane *)&fStack_dc,pFVar9);
          iStack_e4 = iStack_e4 + 1;
        }
        iVar6 = iVar6 + 1;
        iVar7 = iVar7 + 0x14;
      } while (iVar6 < *(int *)(in_ECX + 0x1b0));
      if (iStack_e4 != 0) {
        puVar5 = (undefined4 *)FPlane::operator/((FPlane *)&pFStack_e0,(float)aFStack_90);
        *(undefined4 *)param_2 = *puVar5;
        *(undefined4 *)(param_2 + 4) = puVar5[1];
        *(undefined4 *)(param_2 + 8) = puVar5[2];
        *(undefined4 *)(param_2 + 0xc) = puVar5[3];
      }
    }
  }
  return;
}


// ==== 10518300 FUN_10518300

void FUN_10518300(float param_1,FPlane *param_2)

{
  int *piVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  FPlane *this;
  undefined4 *puVar5;
  UL2NEnvManager *in_ECX;
  int iVar6;
  int iVar7;
  double dVar8;
  FPlane *pFVar9;
  int iStack_e4;
  FPlane *pFStack_e0;
  float fStack_dc;
  float fStack_d8;
  undefined4 uStack_d4;
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
  FPlane aFStack_90 [4];
  FPlane aFStack_8c [28];
  FPlane aFStack_70 [12];
  undefined1 auStack_64 [36];
  undefined1 auStack_40 [60];
  
  local_b0 = 0;
  local_ac = 0;
  local_a8 = 0;
  local_a4 = 0;
  iVar6 = 0;
  local_c0 = 0;
  iVar7 = 0;
  local_bc = 0;
  local_b8 = 0;
  local_b4 = 0;
  local_d0 = 0;
  local_cc = 0;
  local_c8 = 0;
  local_c4 = 0;
  if (0 < *(int *)(in_ECX + 0x1bc)) {
    do {
      piVar1 = *(int **)(*(int *)(in_ECX + 0x1b8) + iVar7 * 4);
      if (piVar1[0x44] == (uint)(byte)in_ECX[0x1dd]) {
        (**(code **)(*piVar1 + 0x74))(param_1);
      }
      piVar1 = *(int **)(*(int *)(in_ECX + 0x1b8) + iVar7 * 4);
      if (piVar1[0x44] == (uint)(byte)in_ECX[0x1dc]) {
        (**(code **)(*piVar1 + 0x74))(param_1);
      }
      piVar1 = *(int **)(*(int *)(in_ECX + 0x1b8) + iVar7 * 4);
      if (piVar1[0x44] == 0) {
        (**(code **)(*piVar1 + 0x74))(param_1);
      }
      iVar7 = iVar7 + 1;
    } while (iVar7 < *(int *)(in_ECX + 0x1bc));
  }
  UL2NEnvManager::GetEnvColorPlane
            (in_ECX,(FPlane *)&local_d0,(FPlane *)&local_b0,(FPlane *)&local_c0,param_1,param_2);
  if (*(int *)(in_ECX + 0x1b0) != 0) {
    pFStack_e0 = (FPlane *)0x0;
    iStack_e4 = 0;
    fStack_dc = 0.0;
    fStack_d8 = 0.0;
    uStack_d4 = 0;
    if (0 < *(int *)(in_ECX + 0x1b0)) {
      iVar7 = 0;
      do {
        fVar3 = *(float *)(*(int *)(in_ECX + 0x1a0) + iVar7) - *(float *)(in_ECX + 0x114);
        fVar4 = *(float *)(*(int *)(in_ECX + 0x1a0) + iVar7 + 4) - *(float *)(in_ECX + 0x118);
        dVar8 = appSqrt((double)(fVar3 * fVar3 + fVar4 * fVar4));
        if ((float)dVar8 <= *(float *)(*(int *)(in_ECX + 0x1a0) + 0x10 + iVar7)) {
          (**(code **)(**(int **)(*(int *)(in_ECX + 0x1ac) + iVar6 * 4) + 0x74))(param_1);
          iVar2 = *(int *)(in_ECX + 0x1a0);
          if (*(float *)(iVar2 + 0xc + iVar7) < fStack_dc) {
            fStack_dc = (fStack_dc - *(float *)(iVar2 + 0xc + iVar7)) /
                        (*(float *)(iVar2 + iVar7 + 0x10) - *(float *)(iVar2 + iVar7 + 0xc));
            fStack_d8 = 1.0 - fStack_dc;
            FPlane::operator*(aFStack_90,(float)auStack_40);
            pFVar9 = pFStack_e0;
            this = (FPlane *)FPlane::operator*(param_2,(float)auStack_64);
            FPlane::operator+(this,pFVar9);
            pFVar9 = aFStack_8c;
          }
          else {
            pFVar9 = aFStack_70;
          }
          FPlane::operator+=((FPlane *)&fStack_dc,pFVar9);
          iStack_e4 = iStack_e4 + 1;
        }
        iVar6 = iVar6 + 1;
        iVar7 = iVar7 + 0x14;
      } while (iVar6 < *(int *)(in_ECX + 0x1b0));
      if (iStack_e4 != 0) {
        puVar5 = (undefined4 *)FPlane::operator/((FPlane *)&pFStack_e0,(float)aFStack_90);
        *(undefined4 *)param_2 = *puVar5;
        *(undefined4 *)(param_2 + 4) = puVar5[1];
        *(undefined4 *)(param_2 + 8) = puVar5[2];
        *(undefined4 *)(param_2 + 0xc) = puVar5[3];
      }
    }
  }
  return;
}


// ==== 10518660 FUN_10518660

float10 FUN_10518660(float param_1)

{
  float fVar1;
  int *piVar2;
  float fVar3;
  int in_ECX;
  int iVar4;
  int iVar5;
  int iVar6;
  float10 fVar7;
  double dVar8;
  float local_54;
  float local_50;
  float local_4c;
  
  local_54 = 0.0;
  local_50 = 0.0;
  local_4c = 0.0;
  iVar4 = 0;
  iVar5 = 0;
  if (0 < *(int *)(in_ECX + 0x1bc)) {
    do {
      piVar2 = *(int **)(*(int *)(in_ECX + 0x1b8) + iVar5 * 4);
      if (piVar2[0x44] == (uint)*(byte *)(in_ECX + 0x1dd)) {
        fVar7 = (float10)(**(code **)(*piVar2 + 0x78))();
        local_50 = (float)fVar7;
      }
      piVar2 = *(int **)(*(int *)(in_ECX + 0x1b8) + iVar5 * 4);
      if (piVar2[0x44] == (uint)*(byte *)(in_ECX + 0x1dc)) {
        fVar7 = (float10)(**(code **)(*piVar2 + 0x78))();
        local_4c = (float)fVar7;
      }
      piVar2 = *(int **)(*(int *)(in_ECX + 0x1b8) + iVar5 * 4);
      if (piVar2[0x44] == 0) {
        fVar7 = (float10)(**(code **)(*piVar2 + 0x78))();
        local_54 = (float)fVar7;
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < *(int *)(in_ECX + 0x1bc));
  }
  if (*(char *)(in_ECX + 0x1dd) == *(char *)(in_ECX + 0x1dc)) {
    if (*(char *)(in_ECX + 0x1dd) == '\0') goto LAB_10518770;
  }
  else if (param_1 < *(float *)(in_ECX + 0x1d0)) {
    local_54 = local_54 + *(float *)(in_ECX + 0x1d8) * (local_4c - local_54);
  }
  local_54 = local_54 + *(float *)(in_ECX + 0x1e0) * (local_50 - local_54);
LAB_10518770:
  if (*(int *)(in_ECX + 0x1b0) != 0) {
    local_50 = 0.0;
    local_4c = 0.0;
    if (0 < *(int *)(in_ECX + 0x1b0)) {
      iVar5 = *(int *)(in_ECX + 0x1a0);
      iVar6 = 0;
      do {
        fVar3 = *(float *)(iVar6 + iVar5) - *(float *)(in_ECX + 0x114);
        fVar1 = *(float *)(iVar6 + 4 + iVar5) - *(float *)(in_ECX + 0x118);
        dVar8 = appSqrt((double)(fVar3 * fVar3 + fVar1 * fVar1));
        fVar3 = (float)dVar8;
        iVar5 = *(int *)(in_ECX + 0x1a0);
        if (fVar3 <= *(float *)(iVar6 + 0x10 + iVar5)) {
          fVar7 = (float10)(**(code **)(**(int **)(*(int *)(in_ECX + 0x1ac) + iVar4 * 4) + 0x78))();
          iVar5 = *(int *)(in_ECX + 0x1a0);
          fVar1 = (float)fVar7;
          if (*(float *)(iVar6 + 0xc + iVar5) < fVar3) {
            fVar3 = (fVar3 - *(float *)(iVar6 + 0xc + iVar5)) /
                    (*(float *)(iVar6 + iVar5 + 0x10) - *(float *)(iVar6 + iVar5 + 0xc));
            fVar1 = (1.0 - fVar3) * fVar1 + local_54 * fVar3;
          }
          local_50 = fVar1 + local_50;
          local_4c = (float)((int)local_4c + 1);
        }
        iVar4 = iVar4 + 1;
        iVar6 = iVar6 + 0x14;
      } while (iVar4 < *(int *)(in_ECX + 0x1b0));
      if (local_4c != 0.0) {
        return (float10)(local_50 / (float)(int)local_4c);
      }
    }
  }
  return (float10)local_54;
}


// ==== 10518950 FUN_10518950

void FUN_10518950(float param_1,FPlane *param_2)

{
  int *piVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  FPlane *this;
  undefined4 *puVar5;
  UL2NEnvManager *in_ECX;
  int iVar6;
  int iVar7;
  double dVar8;
  FPlane *pFVar9;
  int iStack_e4;
  FPlane *pFStack_e0;
  float fStack_dc;
  float fStack_d8;
  undefined4 uStack_d4;
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
  FPlane aFStack_90 [4];
  FPlane aFStack_8c [28];
  FPlane aFStack_70 [12];
  undefined1 auStack_64 [36];
  undefined1 auStack_40 [60];
  
  local_b0 = 0;
  local_ac = 0;
  local_a8 = 0;
  local_a4 = 0;
  iVar6 = 0;
  local_c0 = 0;
  iVar7 = 0;
  local_bc = 0;
  local_b8 = 0;
  local_b4 = 0;
  local_d0 = 0;
  local_cc = 0;
  local_c8 = 0;
  local_c4 = 0;
  if (0 < *(int *)(in_ECX + 0x1bc)) {
    do {
      piVar1 = *(int **)(*(int *)(in_ECX + 0x1b8) + iVar7 * 4);
      if (piVar1[0x44] == (uint)(byte)in_ECX[0x1dd]) {
        (**(code **)(*piVar1 + 0x7c))(param_1);
      }
      piVar1 = *(int **)(*(int *)(in_ECX + 0x1b8) + iVar7 * 4);
      if (piVar1[0x44] == (uint)(byte)in_ECX[0x1dc]) {
        (**(code **)(*piVar1 + 0x7c))(param_1);
      }
      piVar1 = *(int **)(*(int *)(in_ECX + 0x1b8) + iVar7 * 4);
      if (piVar1[0x44] == 0) {
        (**(code **)(*piVar1 + 0x7c))(param_1);
      }
      iVar7 = iVar7 + 1;
    } while (iVar7 < *(int *)(in_ECX + 0x1bc));
  }
  UL2NEnvManager::GetEnvColorPlane
            (in_ECX,(FPlane *)&local_d0,(FPlane *)&local_b0,(FPlane *)&local_c0,param_1,param_2);
  if (*(int *)(in_ECX + 0x1b0) != 0) {
    pFStack_e0 = (FPlane *)0x0;
    iStack_e4 = 0;
    fStack_dc = 0.0;
    fStack_d8 = 0.0;
    uStack_d4 = 0;
    if (0 < *(int *)(in_ECX + 0x1b0)) {
      iVar7 = 0;
      do {
        fVar3 = *(float *)(*(int *)(in_ECX + 0x1a0) + iVar7) - *(float *)(in_ECX + 0x114);
        fVar4 = *(float *)(*(int *)(in_ECX + 0x1a0) + iVar7 + 4) - *(float *)(in_ECX + 0x118);
        dVar8 = appSqrt((double)(fVar3 * fVar3 + fVar4 * fVar4));
        if ((float)dVar8 <= *(float *)(*(int *)(in_ECX + 0x1a0) + 0x10 + iVar7)) {
          (**(code **)(**(int **)(*(int *)(in_ECX + 0x1ac) + iVar6 * 4) + 0x7c))(param_1);
          iVar2 = *(int *)(in_ECX + 0x1a0);
          if (*(float *)(iVar2 + 0xc + iVar7) < fStack_dc) {
            fStack_dc = (fStack_dc - *(float *)(iVar2 + 0xc + iVar7)) /
                        (*(float *)(iVar2 + iVar7 + 0x10) - *(float *)(iVar2 + iVar7 + 0xc));
            fStack_d8 = 1.0 - fStack_dc;
            FPlane::operator*(aFStack_90,(float)auStack_40);
            pFVar9 = pFStack_e0;
            this = (FPlane *)FPlane::operator*(param_2,(float)auStack_64);
            FPlane::operator+(this,pFVar9);
            pFVar9 = aFStack_8c;
          }
          else {
            pFVar9 = aFStack_70;
          }
          FPlane::operator+=((FPlane *)&fStack_dc,pFVar9);
          iStack_e4 = iStack_e4 + 1;
        }
        iVar6 = iVar6 + 1;
        iVar7 = iVar7 + 0x14;
      } while (iVar6 < *(int *)(in_ECX + 0x1b0));
      if (iStack_e4 != 0) {
        puVar5 = (undefined4 *)FPlane::operator/((FPlane *)&pFStack_e0,(float)aFStack_90);
        *(undefined4 *)param_2 = *puVar5;
        *(undefined4 *)(param_2 + 4) = puVar5[1];
        *(undefined4 *)(param_2 + 8) = puVar5[2];
        *(undefined4 *)(param_2 + 0xc) = puVar5[3];
      }
    }
  }
  return;
}


// ==== 10518cb0 FUN_10518cb0

void FUN_10518cb0(float param_1,FPlane *param_2)

{
  int *piVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  FPlane *this;
  undefined4 *puVar5;
  UL2NEnvManager *in_ECX;
  int iVar6;
  int iVar7;
  double dVar8;
  FPlane *pFVar9;
  int iStack_e4;
  FPlane *pFStack_e0;
  float fStack_dc;
  float fStack_d8;
  undefined4 uStack_d4;
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
  FPlane aFStack_90 [4];
  FPlane aFStack_8c [28];
  FPlane aFStack_70 [12];
  undefined1 auStack_64 [36];
  undefined1 auStack_40 [60];
  
  local_b0 = 0;
  local_ac = 0;
  local_a8 = 0;
  local_a4 = 0;
  iVar6 = 0;
  local_c0 = 0;
  iVar7 = 0;
  local_bc = 0;
  local_b8 = 0;
  local_b4 = 0;
  local_d0 = 0;
  local_cc = 0;
  local_c8 = 0;
  local_c4 = 0;
  if (0 < *(int *)(in_ECX + 0x1bc)) {
    do {
      piVar1 = *(int **)(*(int *)(in_ECX + 0x1b8) + iVar7 * 4);
      if (piVar1[0x44] == (uint)(byte)in_ECX[0x1dd]) {
        (**(code **)(*piVar1 + 0x80))(param_1);
      }
      piVar1 = *(int **)(*(int *)(in_ECX + 0x1b8) + iVar7 * 4);
      if (piVar1[0x44] == (uint)(byte)in_ECX[0x1dc]) {
        (**(code **)(*piVar1 + 0x80))(param_1);
      }
      piVar1 = *(int **)(*(int *)(in_ECX + 0x1b8) + iVar7 * 4);
      if (piVar1[0x44] == 0) {
        (**(code **)(*piVar1 + 0x80))(param_1);
      }
      iVar7 = iVar7 + 1;
    } while (iVar7 < *(int *)(in_ECX + 0x1bc));
  }
  UL2NEnvManager::GetEnvColorPlane
            (in_ECX,(FPlane *)&local_d0,(FPlane *)&local_b0,(FPlane *)&local_c0,param_1,param_2);
  if (*(int *)(in_ECX + 0x1b0) != 0) {
    pFStack_e0 = (FPlane *)0x0;
    iStack_e4 = 0;
    fStack_dc = 0.0;
    fStack_d8 = 0.0;
    uStack_d4 = 0;
    if (0 < *(int *)(in_ECX + 0x1b0)) {
      iVar7 = 0;
      do {
        fVar3 = *(float *)(*(int *)(in_ECX + 0x1a0) + iVar7) - *(float *)(in_ECX + 0x114);
        fVar4 = *(float *)(*(int *)(in_ECX + 0x1a0) + iVar7 + 4) - *(float *)(in_ECX + 0x118);
        dVar8 = appSqrt((double)(fVar3 * fVar3 + fVar4 * fVar4));
        if ((float)dVar8 <= *(float *)(*(int *)(in_ECX + 0x1a0) + 0x10 + iVar7)) {
          (**(code **)(**(int **)(*(int *)(in_ECX + 0x1ac) + iVar6 * 4) + 0x80))(param_1);
          iVar2 = *(int *)(in_ECX + 0x1a0);
          if (*(float *)(iVar2 + 0xc + iVar7) < fStack_dc) {
            fStack_dc = (fStack_dc - *(float *)(iVar2 + 0xc + iVar7)) /
                        (*(float *)(iVar2 + iVar7 + 0x10) - *(float *)(iVar2 + iVar7 + 0xc));
            fStack_d8 = 1.0 - fStack_dc;
            FPlane::operator*(aFStack_90,(float)auStack_40);
            pFVar9 = pFStack_e0;
            this = (FPlane *)FPlane::operator*(param_2,(float)auStack_64);
            FPlane::operator+(this,pFVar9);
            pFVar9 = aFStack_8c;
          }
          else {
            pFVar9 = aFStack_70;
          }
          FPlane::operator+=((FPlane *)&fStack_dc,pFVar9);
          iStack_e4 = iStack_e4 + 1;
        }
        iVar6 = iVar6 + 1;
        iVar7 = iVar7 + 0x14;
      } while (iVar6 < *(int *)(in_ECX + 0x1b0));
      if (iStack_e4 != 0) {
        puVar5 = (undefined4 *)FPlane::operator/((FPlane *)&pFStack_e0,(float)aFStack_90);
        *(undefined4 *)param_2 = *puVar5;
        *(undefined4 *)(param_2 + 4) = puVar5[1];
        *(undefined4 *)(param_2 + 8) = puVar5[2];
        *(undefined4 *)(param_2 + 0xc) = puVar5[3];
      }
    }
  }
  return;
}


// ==== 10519020 FUN_10519020

float10 FUN_10519020(float param_1)

{
  float fVar1;
  int *piVar2;
  float fVar3;
  int in_ECX;
  int iVar4;
  int iVar5;
  int iVar6;
  float10 fVar7;
  double dVar8;
  float local_54;
  float local_50;
  float local_4c;
  
  local_54 = 0.0;
  local_50 = 0.0;
  local_4c = 0.0;
  iVar5 = 0;
  if (0 < *(int *)(in_ECX + 0x1bc)) {
    do {
      piVar2 = *(int **)(*(int *)(in_ECX + 0x1b8) + iVar5 * 4);
      if (piVar2[0x44] == (uint)*(byte *)(in_ECX + 0x1dd)) {
        fVar7 = (float10)(**(code **)(*piVar2 + 0x84))();
        local_50 = (float)fVar7;
      }
      piVar2 = *(int **)(*(int *)(in_ECX + 0x1b8) + iVar5 * 4);
      if (piVar2[0x44] == (uint)*(byte *)(in_ECX + 0x1dc)) {
        fVar7 = (float10)(**(code **)(*piVar2 + 0x84))();
        local_4c = (float)fVar7;
      }
      piVar2 = *(int **)(*(int *)(in_ECX + 0x1b8) + iVar5 * 4);
      if (piVar2[0x44] == 0) {
        fVar7 = (float10)(**(code **)(*piVar2 + 0x84))();
        local_54 = (float)fVar7;
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < *(int *)(in_ECX + 0x1bc));
  }
  if (*(char *)(in_ECX + 0x1dd) == *(char *)(in_ECX + 0x1dc)) {
    if (*(char *)(in_ECX + 0x1dd) == '\0') goto LAB_10519139;
  }
  else if (param_1 < *(float *)(in_ECX + 0x1d0)) {
    local_54 = local_54 + *(float *)(in_ECX + 0x1d8) * (local_4c - local_54);
  }
  local_54 = local_54 + *(float *)(in_ECX + 0x1e0) * (local_50 - local_54);
LAB_10519139:
  if (*(int *)(in_ECX + 0x1b0) != 0) {
    local_50 = 0.0;
    local_4c = 0.0;
    if (0 < *(int *)(in_ECX + 0x1b0)) {
      iVar5 = *(int *)(in_ECX + 0x1a0);
      iVar6 = 0;
      iVar4 = 0;
      do {
        fVar3 = *(float *)(iVar6 + iVar5) - *(float *)(in_ECX + 0x114);
        fVar1 = *(float *)(iVar6 + 4 + iVar5) - *(float *)(in_ECX + 0x118);
        dVar8 = appSqrt((double)(fVar3 * fVar3 + fVar1 * fVar1));
        fVar3 = (float)dVar8;
        iVar5 = *(int *)(in_ECX + 0x1a0);
        if (fVar3 <= *(float *)(iVar6 + 0x10 + iVar5)) {
          fVar7 = (float10)(**(code **)(**(int **)(*(int *)(in_ECX + 0x1ac) + iVar4 * 4) + 0x84))();
          iVar5 = *(int *)(in_ECX + 0x1a0);
          fVar1 = (float)fVar7;
          if (*(float *)(iVar6 + 0xc + iVar5) < fVar3) {
            fVar3 = (fVar3 - *(float *)(iVar6 + 0xc + iVar5)) /
                    (*(float *)(iVar6 + iVar5 + 0x10) - *(float *)(iVar6 + iVar5 + 0xc));
            fVar1 = (1.0 - fVar3) * fVar1 + local_54 * fVar3;
          }
          local_50 = fVar1 + local_50;
          local_4c = (float)((int)local_4c + 1);
        }
        iVar4 = iVar4 + 1;
        iVar6 = iVar6 + 0x14;
      } while (iVar4 < *(int *)(in_ECX + 0x1b0));
      if (local_4c != 0.0) {
        return (float10)(local_50 / (float)(int)local_4c);
      }
    }
  }
  return (float10)local_54;
}


// ==== 10519320 FUN_10519320

void FUN_10519320(float param_1,FPlane *param_2)

{
  int *piVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  FPlane *this;
  undefined4 *puVar5;
  UL2NEnvManager *in_ECX;
  int iVar6;
  int iVar7;
  double dVar8;
  FPlane *pFVar9;
  int iStack_e4;
  FPlane *pFStack_e0;
  float fStack_dc;
  float fStack_d8;
  undefined4 uStack_d4;
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
  FPlane aFStack_90 [4];
  FPlane aFStack_8c [28];
  FPlane aFStack_70 [12];
  undefined1 auStack_64 [36];
  undefined1 auStack_40 [60];
  
  local_b0 = 0;
  local_ac = 0;
  local_a8 = 0;
  local_a4 = 0;
  iVar6 = 0;
  local_c0 = 0;
  iVar7 = 0;
  local_bc = 0;
  local_b8 = 0;
  local_b4 = 0;
  local_d0 = 0;
  local_cc = 0;
  local_c8 = 0;
  local_c4 = 0;
  if (0 < *(int *)(in_ECX + 0x1bc)) {
    do {
      piVar1 = *(int **)(*(int *)(in_ECX + 0x1b8) + iVar7 * 4);
      if (piVar1[0x44] == (uint)(byte)in_ECX[0x1dd]) {
        (**(code **)(*piVar1 + 0x88))(param_1);
      }
      piVar1 = *(int **)(*(int *)(in_ECX + 0x1b8) + iVar7 * 4);
      if (piVar1[0x44] == (uint)(byte)in_ECX[0x1dc]) {
        (**(code **)(*piVar1 + 0x88))(param_1);
      }
      piVar1 = *(int **)(*(int *)(in_ECX + 0x1b8) + iVar7 * 4);
      if (piVar1[0x44] == 0) {
        (**(code **)(*piVar1 + 0x88))(param_1);
      }
      iVar7 = iVar7 + 1;
    } while (iVar7 < *(int *)(in_ECX + 0x1bc));
  }
  UL2NEnvManager::GetEnvColorPlane
            (in_ECX,(FPlane *)&local_d0,(FPlane *)&local_b0,(FPlane *)&local_c0,param_1,param_2);
  if (*(int *)(in_ECX + 0x1b0) != 0) {
    pFStack_e0 = (FPlane *)0x0;
    iStack_e4 = 0;
    fStack_dc = 0.0;
    fStack_d8 = 0.0;
    uStack_d4 = 0;
    if (0 < *(int *)(in_ECX + 0x1b0)) {
      iVar7 = 0;
      do {
        fVar3 = *(float *)(*(int *)(in_ECX + 0x1a0) + iVar7) - *(float *)(in_ECX + 0x114);
        fVar4 = *(float *)(*(int *)(in_ECX + 0x1a0) + iVar7 + 4) - *(float *)(in_ECX + 0x118);
        dVar8 = appSqrt((double)(fVar3 * fVar3 + fVar4 * fVar4));
        if ((float)dVar8 <= *(float *)(*(int *)(in_ECX + 0x1a0) + 0x10 + iVar7)) {
          (**(code **)(**(int **)(*(int *)(in_ECX + 0x1ac) + iVar6 * 4) + 0x88))(param_1);
          iVar2 = *(int *)(in_ECX + 0x1a0);
          if (*(float *)(iVar2 + 0xc + iVar7) < fStack_dc) {
            fStack_dc = (fStack_dc - *(float *)(iVar2 + 0xc + iVar7)) /
                        (*(float *)(iVar2 + iVar7 + 0x10) - *(float *)(iVar2 + iVar7 + 0xc));
            fStack_d8 = 1.0 - fStack_dc;
            FPlane::operator*(aFStack_90,(float)auStack_40);
            pFVar9 = pFStack_e0;
            this = (FPlane *)FPlane::operator*(param_2,(float)auStack_64);
            FPlane::operator+(this,pFVar9);
            pFVar9 = aFStack_8c;
          }
          else {
            pFVar9 = aFStack_70;
          }
          FPlane::operator+=((FPlane *)&fStack_dc,pFVar9);
          iStack_e4 = iStack_e4 + 1;
        }
        iVar6 = iVar6 + 1;
        iVar7 = iVar7 + 0x14;
      } while (iVar6 < *(int *)(in_ECX + 0x1b0));
      if (iStack_e4 != 0) {
        puVar5 = (undefined4 *)FPlane::operator/((FPlane *)&pFStack_e0,(float)aFStack_90);
        *(undefined4 *)param_2 = *puVar5;
        *(undefined4 *)(param_2 + 4) = puVar5[1];
        *(undefined4 *)(param_2 + 8) = puVar5[2];
        *(undefined4 *)(param_2 + 0xc) = puVar5[3];
      }
    }
  }
  return;
}


// ==== 10519690 FUN_10519690

void FUN_10519690(float param_1,FPlane *param_2)

{
  int *piVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  FPlane *this;
  undefined4 *puVar5;
  UL2NEnvManager *in_ECX;
  int iVar6;
  int iVar7;
  double dVar8;
  FPlane *pFVar9;
  int iStack_e4;
  FPlane *pFStack_e0;
  float fStack_dc;
  float fStack_d8;
  undefined4 uStack_d4;
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
  FPlane aFStack_90 [4];
  FPlane aFStack_8c [28];
  FPlane aFStack_70 [12];
  undefined1 auStack_64 [36];
  undefined1 auStack_40 [60];
  
  local_b0 = 0;
  local_ac = 0;
  local_a8 = 0;
  local_a4 = 0;
  iVar6 = 0;
  local_c0 = 0;
  iVar7 = 0;
  local_bc = 0;
  local_b8 = 0;
  local_b4 = 0;
  local_d0 = 0;
  local_cc = 0;
  local_c8 = 0;
  local_c4 = 0;
  if (0 < *(int *)(in_ECX + 0x1bc)) {
    do {
      piVar1 = *(int **)(*(int *)(in_ECX + 0x1b8) + iVar7 * 4);
      if (piVar1[0x44] == (uint)(byte)in_ECX[0x1dd]) {
        (**(code **)(*piVar1 + 0x8c))(param_1);
      }
      piVar1 = *(int **)(*(int *)(in_ECX + 0x1b8) + iVar7 * 4);
      if (piVar1[0x44] == (uint)(byte)in_ECX[0x1dc]) {
        (**(code **)(*piVar1 + 0x8c))(param_1);
      }
      piVar1 = *(int **)(*(int *)(in_ECX + 0x1b8) + iVar7 * 4);
      if (piVar1[0x44] == 0) {
        (**(code **)(*piVar1 + 0x8c))(param_1);
      }
      iVar7 = iVar7 + 1;
    } while (iVar7 < *(int *)(in_ECX + 0x1bc));
  }
  UL2NEnvManager::GetEnvColorPlane
            (in_ECX,(FPlane *)&local_d0,(FPlane *)&local_b0,(FPlane *)&local_c0,param_1,param_2);
  if (*(int *)(in_ECX + 0x1b0) != 0) {
    pFStack_e0 = (FPlane *)0x0;
    iStack_e4 = 0;
    fStack_dc = 0.0;
    fStack_d8 = 0.0;
    uStack_d4 = 0;
    if (0 < *(int *)(in_ECX + 0x1b0)) {
      iVar7 = 0;
      do {
        fVar3 = *(float *)(*(int *)(in_ECX + 0x1a0) + iVar7) - *(float *)(in_ECX + 0x114);
        fVar4 = *(float *)(*(int *)(in_ECX + 0x1a0) + iVar7 + 4) - *(float *)(in_ECX + 0x118);
        dVar8 = appSqrt((double)(fVar3 * fVar3 + fVar4 * fVar4));
        if ((float)dVar8 <= *(float *)(*(int *)(in_ECX + 0x1a0) + 0x10 + iVar7)) {
          (**(code **)(**(int **)(*(int *)(in_ECX + 0x1ac) + iVar6 * 4) + 0x8c))(param_1);
          iVar2 = *(int *)(in_ECX + 0x1a0);
          if (*(float *)(iVar2 + 0xc + iVar7) < fStack_dc) {
            fStack_dc = (fStack_dc - *(float *)(iVar2 + 0xc + iVar7)) /
                        (*(float *)(iVar2 + iVar7 + 0x10) - *(float *)(iVar2 + iVar7 + 0xc));
            fStack_d8 = 1.0 - fStack_dc;
            FPlane::operator*(aFStack_90,(float)auStack_40);
            pFVar9 = pFStack_e0;
            this = (FPlane *)FPlane::operator*(param_2,(float)auStack_64);
            FPlane::operator+(this,pFVar9);
            pFVar9 = aFStack_8c;
          }
          else {
            pFVar9 = aFStack_70;
          }
          FPlane::operator+=((FPlane *)&fStack_dc,pFVar9);
          iStack_e4 = iStack_e4 + 1;
        }
        iVar6 = iVar6 + 1;
        iVar7 = iVar7 + 0x14;
      } while (iVar6 < *(int *)(in_ECX + 0x1b0));
      if (iStack_e4 != 0) {
        puVar5 = (undefined4 *)FPlane::operator/((FPlane *)&pFStack_e0,(float)aFStack_90);
        *(undefined4 *)param_2 = *puVar5;
        *(undefined4 *)(param_2 + 4) = puVar5[1];
        *(undefined4 *)(param_2 + 8) = puVar5[2];
        *(undefined4 *)(param_2 + 0xc) = puVar5[3];
      }
    }
  }
  return;
}


// ==== 10519a00 FUN_10519a00

float10 FUN_10519a00(float param_1)

{
  float fVar1;
  int *piVar2;
  float fVar3;
  int in_ECX;
  int iVar4;
  int iVar5;
  int iVar6;
  float10 fVar7;
  double dVar8;
  float local_54;
  float local_50;
  float local_4c;
  
  local_54 = 0.0;
  local_50 = 0.0;
  local_4c = 0.0;
  iVar5 = 0;
  if (0 < *(int *)(in_ECX + 0x1bc)) {
    do {
      piVar2 = *(int **)(*(int *)(in_ECX + 0x1b8) + iVar5 * 4);
      if (piVar2[0x44] == (uint)*(byte *)(in_ECX + 0x1dd)) {
        fVar7 = (float10)(**(code **)(*piVar2 + 0x90))();
        local_50 = (float)fVar7;
      }
      piVar2 = *(int **)(*(int *)(in_ECX + 0x1b8) + iVar5 * 4);
      if (piVar2[0x44] == (uint)*(byte *)(in_ECX + 0x1dc)) {
        fVar7 = (float10)(**(code **)(*piVar2 + 0x90))();
        local_4c = (float)fVar7;
      }
      piVar2 = *(int **)(*(int *)(in_ECX + 0x1b8) + iVar5 * 4);
      if (piVar2[0x44] == 0) {
        fVar7 = (float10)(**(code **)(*piVar2 + 0x90))();
        local_54 = (float)fVar7;
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < *(int *)(in_ECX + 0x1bc));
  }
  if (*(char *)(in_ECX + 0x1dd) == *(char *)(in_ECX + 0x1dc)) {
    if (*(char *)(in_ECX + 0x1dd) == '\0') goto LAB_10519b19;
  }
  else if (param_1 < *(float *)(in_ECX + 0x1d0)) {
    local_54 = local_54 + *(float *)(in_ECX + 0x1d8) * (local_4c - local_54);
  }
  local_54 = local_54 + *(float *)(in_ECX + 0x1e0) * (local_50 - local_54);
LAB_10519b19:
  if (*(int *)(in_ECX + 0x1b0) != 0) {
    local_50 = 0.0;
    local_4c = 0.0;
    if (0 < *(int *)(in_ECX + 0x1b0)) {
      iVar5 = *(int *)(in_ECX + 0x1a0);
      iVar6 = 0;
      iVar4 = 0;
      do {
        fVar3 = *(float *)(iVar6 + iVar5) - *(float *)(in_ECX + 0x114);
        fVar1 = *(float *)(iVar6 + 4 + iVar5) - *(float *)(in_ECX + 0x118);
        dVar8 = appSqrt((double)(fVar3 * fVar3 + fVar1 * fVar1));
        fVar3 = (float)dVar8;
        iVar5 = *(int *)(in_ECX + 0x1a0);
        if (fVar3 <= *(float *)(iVar6 + 0x10 + iVar5)) {
          fVar7 = (float10)(**(code **)(**(int **)(*(int *)(in_ECX + 0x1ac) + iVar4 * 4) + 0x90))();
          iVar5 = *(int *)(in_ECX + 0x1a0);
          fVar1 = (float)fVar7;
          if (*(float *)(iVar6 + 0xc + iVar5) < fVar3) {
            fVar3 = (fVar3 - *(float *)(iVar6 + 0xc + iVar5)) /
                    (*(float *)(iVar6 + iVar5 + 0x10) - *(float *)(iVar6 + iVar5 + 0xc));
            fVar1 = (1.0 - fVar3) * fVar1 + local_54 * fVar3;
          }
          local_50 = fVar1 + local_50;
          local_4c = (float)((int)local_4c + 1);
        }
        iVar4 = iVar4 + 1;
        iVar6 = iVar6 + 0x14;
      } while (iVar4 < *(int *)(in_ECX + 0x1b0));
      if (local_4c != 0.0) {
        return (float10)(local_50 / (float)(int)local_4c);
      }
    }
  }
  return (float10)local_54;
}


// ==== 10519d00 FUN_10519d00

void FUN_10519d00(float param_1,FPlane *param_2)

{
  int *piVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  FPlane *this;
  undefined4 *puVar5;
  UL2NEnvManager *in_ECX;
  int iVar6;
  int iVar7;
  double dVar8;
  FPlane *pFVar9;
  int iStack_e4;
  FPlane *pFStack_e0;
  float fStack_dc;
  float fStack_d8;
  undefined4 uStack_d4;
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
  FPlane aFStack_90 [4];
  FPlane aFStack_8c [28];
  FPlane aFStack_70 [12];
  undefined1 auStack_64 [36];
  undefined1 auStack_40 [60];
  
  local_b0 = 0;
  local_ac = 0;
  local_a8 = 0;
  local_a4 = 0;
  iVar6 = 0;
  local_c0 = 0;
  iVar7 = 0;
  local_bc = 0;
  local_b8 = 0;
  local_b4 = 0;
  local_d0 = 0;
  local_cc = 0;
  local_c8 = 0;
  local_c4 = 0;
  if (0 < *(int *)(in_ECX + 0x1bc)) {
    do {
      piVar1 = *(int **)(*(int *)(in_ECX + 0x1b8) + iVar7 * 4);
      if (piVar1[0x44] == (uint)(byte)in_ECX[0x1dd]) {
        (**(code **)(*piVar1 + 0x94))(param_1);
      }
      piVar1 = *(int **)(*(int *)(in_ECX + 0x1b8) + iVar7 * 4);
      if (piVar1[0x44] == (uint)(byte)in_ECX[0x1dc]) {
        (**(code **)(*piVar1 + 0x94))(param_1);
      }
      piVar1 = *(int **)(*(int *)(in_ECX + 0x1b8) + iVar7 * 4);
      if (piVar1[0x44] == 0) {
        (**(code **)(*piVar1 + 0x94))(param_1);
      }
      iVar7 = iVar7 + 1;
    } while (iVar7 < *(int *)(in_ECX + 0x1bc));
  }
  UL2NEnvManager::GetEnvColorPlane
            (in_ECX,(FPlane *)&local_d0,(FPlane *)&local_b0,(FPlane *)&local_c0,param_1,param_2);
  if (*(int *)(in_ECX + 0x1b0) != 0) {
    pFStack_e0 = (FPlane *)0x0;
    iStack_e4 = 0;
    fStack_dc = 0.0;
    fStack_d8 = 0.0;
    uStack_d4 = 0;
    if (0 < *(int *)(in_ECX + 0x1b0)) {
      iVar7 = 0;
      do {
        fVar3 = *(float *)(*(int *)(in_ECX + 0x1a0) + iVar7) - *(float *)(in_ECX + 0x114);
        fVar4 = *(float *)(*(int *)(in_ECX + 0x1a0) + iVar7 + 4) - *(float *)(in_ECX + 0x118);
        dVar8 = appSqrt((double)(fVar3 * fVar3 + fVar4 * fVar4));
        if ((float)dVar8 <= *(float *)(*(int *)(in_ECX + 0x1a0) + 0x10 + iVar7)) {
          (**(code **)(**(int **)(*(int *)(in_ECX + 0x1ac) + iVar6 * 4) + 0x94))(param_1);
          iVar2 = *(int *)(in_ECX + 0x1a0);
          if (*(float *)(iVar2 + 0xc + iVar7) < fStack_dc) {
            fStack_dc = (fStack_dc - *(float *)(iVar2 + 0xc + iVar7)) /
                        (*(float *)(iVar2 + iVar7 + 0x10) - *(float *)(iVar2 + iVar7 + 0xc));
            fStack_d8 = 1.0 - fStack_dc;
            FPlane::operator*(aFStack_90,(float)auStack_40);
            pFVar9 = pFStack_e0;
            this = (FPlane *)FPlane::operator*(param_2,(float)auStack_64);
            FPlane::operator+(this,pFVar9);
            pFVar9 = aFStack_8c;
          }
          else {
            pFVar9 = aFStack_70;
          }
          FPlane::operator+=((FPlane *)&fStack_dc,pFVar9);
          iStack_e4 = iStack_e4 + 1;
        }
        iVar6 = iVar6 + 1;
        iVar7 = iVar7 + 0x14;
      } while (iVar6 < *(int *)(in_ECX + 0x1b0));
      if (iStack_e4 != 0) {
        puVar5 = (undefined4 *)FPlane::operator/((FPlane *)&pFStack_e0,(float)aFStack_90);
        *(undefined4 *)param_2 = *puVar5;
        *(undefined4 *)(param_2 + 4) = puVar5[1];
        *(undefined4 *)(param_2 + 8) = puVar5[2];
        *(undefined4 *)(param_2 + 0xc) = puVar5[3];
      }
    }
  }
  return;
}


// ==== 1051a070 FUN_1051a070

void FUN_1051a070(float param_1,FPlane *param_2)

{
  int *piVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  FPlane *this;
  undefined4 *puVar5;
  UL2NEnvManager *in_ECX;
  int iVar6;
  int iVar7;
  double dVar8;
  FPlane *pFVar9;
  int iStack_e4;
  FPlane *pFStack_e0;
  float fStack_dc;
  float fStack_d8;
  undefined4 uStack_d4;
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
  FPlane aFStack_90 [4];
  FPlane aFStack_8c [28];
  FPlane aFStack_70 [12];
  undefined1 auStack_64 [36];
  undefined1 auStack_40 [60];
  
  local_b0 = 0;
  local_ac = 0;
  local_a8 = 0;
  local_a4 = 0;
  iVar6 = 0;
  local_c0 = 0;
  iVar7 = 0;
  local_bc = 0;
  local_b8 = 0;
  local_b4 = 0;
  local_d0 = 0;
  local_cc = 0;
  local_c8 = 0;
  local_c4 = 0;
  if (0 < *(int *)(in_ECX + 0x1bc)) {
    do {
      piVar1 = *(int **)(*(int *)(in_ECX + 0x1b8) + iVar7 * 4);
      if (piVar1[0x44] == (uint)(byte)in_ECX[0x1dd]) {
        (**(code **)(*piVar1 + 0x98))(param_1);
      }
      piVar1 = *(int **)(*(int *)(in_ECX + 0x1b8) + iVar7 * 4);
      if (piVar1[0x44] == (uint)(byte)in_ECX[0x1dc]) {
        (**(code **)(*piVar1 + 0x98))(param_1);
      }
      piVar1 = *(int **)(*(int *)(in_ECX + 0x1b8) + iVar7 * 4);
      if (piVar1[0x44] == 0) {
        (**(code **)(*piVar1 + 0x98))(param_1);
      }
      iVar7 = iVar7 + 1;
    } while (iVar7 < *(int *)(in_ECX + 0x1bc));
  }
  UL2NEnvManager::GetEnvColorPlane
            (in_ECX,(FPlane *)&local_d0,(FPlane *)&local_b0,(FPlane *)&local_c0,param_1,param_2);
  if (*(int *)(in_ECX + 0x1b0) != 0) {
    pFStack_e0 = (FPlane *)0x0;
    iStack_e4 = 0;
    fStack_dc = 0.0;
    fStack_d8 = 0.0;
    uStack_d4 = 0;
    if (0 < *(int *)(in_ECX + 0x1b0)) {
      iVar7 = 0;
      do {
        fVar3 = *(float *)(*(int *)(in_ECX + 0x1a0) + iVar7) - *(float *)(in_ECX + 0x114);
        fVar4 = *(float *)(*(int *)(in_ECX + 0x1a0) + iVar7 + 4) - *(float *)(in_ECX + 0x118);
        dVar8 = appSqrt((double)(fVar3 * fVar3 + fVar4 * fVar4));
        if ((float)dVar8 <= *(float *)(*(int *)(in_ECX + 0x1a0) + 0x10 + iVar7)) {
          (**(code **)(**(int **)(*(int *)(in_ECX + 0x1ac) + iVar6 * 4) + 0x98))(param_1);
          iVar2 = *(int *)(in_ECX + 0x1a0);
          if (*(float *)(iVar2 + 0xc + iVar7) < fStack_dc) {
            fStack_dc = (fStack_dc - *(float *)(iVar2 + 0xc + iVar7)) /
                        (*(float *)(iVar2 + iVar7 + 0x10) - *(float *)(iVar2 + iVar7 + 0xc));
            fStack_d8 = 1.0 - fStack_dc;
            FPlane::operator*(aFStack_90,(float)auStack_40);
            pFVar9 = pFStack_e0;
            this = (FPlane *)FPlane::operator*(param_2,(float)auStack_64);
            FPlane::operator+(this,pFVar9);
            pFVar9 = aFStack_8c;
          }
          else {
            pFVar9 = aFStack_70;
          }
          FPlane::operator+=((FPlane *)&fStack_dc,pFVar9);
          iStack_e4 = iStack_e4 + 1;
        }
        iVar6 = iVar6 + 1;
        iVar7 = iVar7 + 0x14;
      } while (iVar6 < *(int *)(in_ECX + 0x1b0));
      if (iStack_e4 != 0) {
        puVar5 = (undefined4 *)FPlane::operator/((FPlane *)&pFStack_e0,(float)aFStack_90);
        *(undefined4 *)param_2 = *puVar5;
        *(undefined4 *)(param_2 + 4) = puVar5[1];
        *(undefined4 *)(param_2 + 8) = puVar5[2];
        *(undefined4 *)(param_2 + 0xc) = puVar5[3];
      }
    }
  }
  return;
}


// ==== 1051a3e0 FUN_1051a3e0

undefined4 FUN_1051a3e0(int param_1)

{
  int in_ECX;
  
  return *(undefined4 *)(*(int *)(in_ECX + 0x188) + param_1 * 4);
}


// ==== 1051a400 FUN_1051a400

undefined4 FUN_1051a400(int param_1)

{
  int in_ECX;
  
  return *(undefined4 *)(*(int *)(in_ECX + 0x194) + param_1 * 4);
}


// ==== 1051a420 FUN_1051a420

void FUN_1051a420(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  float fVar1;
  int iVar2;
  FOutputDevice *in_ECX;
  int *piVar3;
  FOutputDevice *this;
  FOutputDevice *this_00;
  FOutputDevice FStack00000004;
  char cStack00000008;
  float fStack0000000c;
  float fStack00000010;
  
  if (cStack00000008 == '\x01') {
    fVar1 = (float)*(double *)(in_ECX + 0x134);
    in_ECX[0x1dc] = FStack00000004;
    *(float *)(in_ECX + 0x1cc) = fVar1;
    in_ECX[0x1dd] = FStack00000004;
    *(float *)(in_ECX + 0x1c8) = fVar1;
    *(float *)(in_ECX + 0x1d0) = fVar1;
    *(undefined4 *)(in_ECX + 0x1d4) = 0x3f800000;
    *(undefined4 *)(in_ECX + 0x1d8) = 0x3f800000;
    if (param_4 != 0) {
      in_ECX[0x1e5] = FStack00000004;
      in_ECX[0x1e4] = FStack00000004;
    }
    if (*(int *)GLog_exref != 0) {
      FOutputDevice::Logf2(in_ECX,*(EName *)GLog_exref,(ushort *)0x2f8);
      return;
    }
  }
  else {
    if (0.0 <= fStack00000010) {
      fStack0000000c = fStack0000000c + (float)*(double *)(in_ECX + 0x134);
      if (fStack00000010 <= fStack0000000c) {
        if (((float)param_3 < 0.0) || (1.0 < (float)param_3)) {
          if (*(int *)GLog_exref == 0) {
            return;
          }
          FOutputDevice::Logf2
                    (*(FOutputDevice **)GLog_exref,(ushort *)*(FOutputDevice **)GLog_exref);
          return;
        }
        iVar2 = 0;
        if (*(int *)(in_ECX + 0x1bc) < 1) {
          return;
        }
        piVar3 = *(int **)(in_ECX + 0x1b8);
        while (*(int *)(*piVar3 + 0x110) != (int)(char)FStack00000004) {
          iVar2 = iVar2 + 1;
          piVar3 = piVar3 + 1;
          if (*(int *)(in_ECX + 0x1bc) <= iVar2) {
            return;
          }
        }
        *(float *)(in_ECX + 0x1c8) = (float)*(double *)(in_ECX + 0x134);
        *(float *)(in_ECX + 0x1cc) = fStack0000000c;
        *(float *)(in_ECX + 0x1d0) = fStack00000010 + (float)*(double *)(in_ECX + 0x134);
        if (param_4 != 0) {
          in_ECX[0x1e4] = in_ECX[0x1dd];
          in_ECX[0x1e5] = FStack00000004;
        }
        *(undefined4 *)(in_ECX + 0x1e8) = param_3._4_4_;
        in_ECX[0x1dc] = in_ECX[0x1dd];
        *(undefined4 *)(in_ECX + 0x1d8) = *(undefined4 *)(in_ECX + 0x1d4);
        in_ECX[0x1dd] = FStack00000004;
        if (FStack00000004 == (FOutputDevice)0x0) {
          *(float *)(in_ECX + 0x1d0) = fStack0000000c;
          param_3._0_4_ = 1.0;
        }
        *(float *)(in_ECX + 0x1d4) = (float)param_3;
        if (*(int *)GLog_exref == 0) {
          return;
        }
        FOutputDevice::Logf2
                  (*(FOutputDevice **)GLog_exref,(EName)*(FOutputDevice **)GLog_exref,
                   (ushort *)0x2f8);
        if (*(int *)GLog_exref == 0) {
          return;
        }
        FOutputDevice::Logf2
                  ((FOutputDevice *)(uint)(byte)in_ECX[0x1dc],*(EName *)GLog_exref,(ushort *)0x2f8);
        if (*(int *)GLog_exref == 0) {
          return;
        }
        FOutputDevice::Logf2
                  ((FOutputDevice *)(uint)(byte)in_ECX[0x1e5],*(EName *)GLog_exref,(ushort *)0x2f8);
        if (*(int *)GLog_exref == 0) {
          return;
        }
        FOutputDevice::Logf2
                  (*(FOutputDevice **)GLog_exref,(EName)*(FOutputDevice **)GLog_exref,
                   (ushort *)0x2f8);
        if (*(int *)GLog_exref == 0) {
          return;
        }
        FOutputDevice::Logf2(this,*(EName *)GLog_exref,(ushort *)0x2f8);
        if (*(int *)GLog_exref == 0) {
          return;
        }
        FOutputDevice::Logf2(this_00,*(EName *)GLog_exref,(ushort *)0x2f8);
        return;
      }
    }
    if (*(int *)GLog_exref != 0) {
      FOutputDevice::Logf2(in_ECX,*(ushort **)GLog_exref);
      return;
    }
  }
  return;
}


// ==== 1051a960 FUN_1051a960

void FUN_1051a960(FArray *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int unaff_EBX;
  undefined4 unaff_ESI;
  float unaff_EDI;
  int iStack_89c;
  ushort auStack_898 [4];
  undefined4 local_890 [30];
  ushort auStack_818 [1034];
  
  local_890[0] = 0;
  iVar1 = (**(code **)(**(int **)GConfig_exref + 4))(param_3,&DAT_10891990,local_890,param_2);
  if (iVar1 != 0) {
    FArray::Empty(param_1,8,unaff_EBX);
    iStack_89c = 0;
    if (0 < unaff_EBX) {
      do {
        iVar1 = iStack_89c + 1;
        appSprintf(auStack_898,(ushort *)L"Color%d",iVar1);
        iVar2 = (**(code **)(**(int **)GConfig_exref + 0x10))
                          (param_3,auStack_898,auStack_818,0x400,param_2);
        if (iVar2 != 0) {
          iVar2 = Parse(auStack_818,(ushort *)&DAT_108acc5c,(float *)&stack0xfffff758);
          if (iVar2 == 0) {
            unaff_EDI = (float)iStack_89c;
          }
          iVar2 = Parse(auStack_818,(ushort *)&DAT_108919d8,&stack0xfffff75c);
          if (iVar2 == 0) {
            unaff_ESI = CONCAT31((int3)((uint)unaff_ESI >> 8),0xff);
          }
          iVar2 = Parse(auStack_818,(ushort *)&DAT_108919e0,&stack0xfffff75d);
          if (iVar2 == 0) {
            unaff_ESI = CONCAT22((short)((uint)unaff_ESI >> 0x10),CONCAT11(0xff,(uchar)unaff_ESI));
          }
          iVar2 = Parse(auStack_818,(ushort *)&DAT_108919e8,&stack0xfffff75e);
          if (iVar2 == 0) {
            unaff_ESI = CONCAT13((char)((uint)unaff_ESI >> 0x18),CONCAT12(0xff,(short)unaff_ESI));
          }
          iVar3 = FArray::Add(param_1,1,8);
          iVar2 = *(int *)param_1;
          *(float *)(iVar2 + iVar3 * 8) = unaff_EDI;
          *(undefined4 *)(iVar2 + 4 + iVar3 * 8) = unaff_ESI;
        }
        iStack_89c = iVar1;
      } while (iVar1 < unaff_EBX);
    }
  }
  return;
}


// ==== 1051ab40 FUN_1051ab40

/* WARNING: Removing unreachable block (ram,0x1051ac79) */
/* WARNING: Removing unreachable block (ram,0x1051ac80) */
/* WARNING: Removing unreachable block (ram,0x1051acc9) */
/* WARNING: Removing unreachable block (ram,0x1051ace8) */
/* WARNING: Removing unreachable block (ram,0x1051acf0) */
/* WARNING: Removing unreachable block (ram,0x1051ad11) */
/* WARNING: Removing unreachable block (ram,0x1051ad16) */
/* WARNING: Removing unreachable block (ram,0x1051ad31) */
/* WARNING: Removing unreachable block (ram,0x1051ad36) */
/* WARNING: Removing unreachable block (ram,0x1051ad51) */
/* WARNING: Removing unreachable block (ram,0x1051ad56) */
/* WARNING: Removing unreachable block (ram,0x1051ad76) */

void FUN_1051ab40(FArray *param_1,FArray *param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int unaff_EDI;
  undefined4 local_aa0;
  int iStack_a9c;
  ushort auStack_a18 [8];
  ushort local_a08 [1282];
  
  appSprintf(local_a08,(ushort *)L"Num%s",param_4);
  iVar2 = (**(code **)(**(int **)GConfig_exref + 4))(L"EnvSetup",local_a08,&local_aa0,L"Env.INT");
  if (iVar2 == 0) {
    unaff_EDI = 1;
  }
  FArray::Empty(param_2,8,0);
  FArray::Empty(param_1,4,unaff_EDI);
  iVar2 = 0;
  uVar1 = local_aa0;
  if (0 < unaff_EDI) {
    do {
      local_aa0 = uVar1;
      uVar1 = *(undefined4 *)(param_2 + 4);
      iVar3 = FArray::Add(param_1,1,4);
      *(undefined4 *)(*(int *)param_1 + iVar3 * 4) = uVar1;
      iStack_a9c = iVar2 + 1;
      appSprintf(auStack_a18,(ushort *)L"%s%d",param_4,iStack_a9c);
      iVar2 = (**(code **)(**(int **)GConfig_exref + 4))
                        (auStack_a18,&DAT_10891990,&stack0xfffff554,param_3);
      if (iVar2 == 0) {
        iVar2 = (**(code **)(**(int **)GConfig_exref + 4))
                          (param_4,&DAT_10891990,&stack0xfffff554,param_3);
        if (iVar2 == 0) {
          return;
        }
        appSprintf(auStack_a18,(ushort *)&DAT_10851d80,param_4);
      }
      local_aa0 = 0;
      uVar1 = local_aa0;
      local_aa0 = 0;
      iVar2 = iStack_a9c;
    } while (iStack_a9c < unaff_EDI);
  }
  FArray::Shrink(param_2,8);
  return;
}


// ==== 1051ae50 FUN_1051ae50

void FUN_1051ae50(undefined4 param_1,float param_2,undefined4 param_3)

{
  float *pfVar1;
  int iVar2;
  int iVar3;
  float unaff_EBX;
  int *piStack_8a0;
  undefined4 uStack_89c;
  int local_894;
  ushort auStack_890 [64];
  ushort auStack_810 [1026];
  FArray *pFStack_c;
  undefined4 uStack_4;
  
  local_894 = 0;
  uStack_89c = param_2;
  piStack_8a0 = &local_894;
  iVar2 = (**(code **)(**(int **)GConfig_exref + 4))(param_3);
  if (iVar2 != 0) {
    FArray::Empty(pFStack_c,0xc,0x10891990);
    local_894 = 0;
    do {
      iVar2 = local_894 + 1;
      appSprintf(auStack_890,(ushort *)L"Light%d",iVar2);
      iVar3 = (**(code **)(**(int **)GConfig_exref + 0x10))
                        (uStack_4,auStack_890,auStack_810,0x400,param_2);
      if (iVar3 != 0) {
        iVar3 = Parse(auStack_810,(ushort *)&DAT_108acc5c,(float *)&piStack_8a0);
        if (iVar3 == 0) {
          piStack_8a0 = (int *)(float)local_894;
        }
        iVar3 = Parse(auStack_810,(ushort *)L"Hue=",(uchar *)&uStack_89c);
        if (iVar3 == 0) {
          uStack_89c = (float)CONCAT31(uStack_89c._1_3_,0xff);
        }
        iVar3 = Parse(auStack_810,(ushort *)L"Sat=",(uchar *)((int)&uStack_89c + 1));
        if (iVar3 == 0) {
          uStack_89c._0_2_ = CONCAT11(0xff,(uchar)uStack_89c);
        }
        iVar3 = Parse(auStack_810,(ushort *)L"Bri=",(float *)&stack0xfffff768);
        if (iVar3 == 0) {
          unaff_EBX = 255.0;
        }
        iVar3 = FArray::Add(pFStack_c,1,0xc);
        pfVar1 = (float *)(*(int *)pFStack_c + iVar3 * 0xc);
        *pfVar1 = (float)piStack_8a0;
        pfVar1[1] = uStack_89c;
        pfVar1[2] = unaff_EBX;
      }
      local_894 = iVar2;
    } while (iVar2 < 0x10891990);
  }
  return;
}


// ==== 1051b050 FUN_1051b050

void FUN_1051b050(FArray *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  float unaff_EBX;
  float unaff_ESI;
  int iVar3;
  int unaff_EDI;
  int iStack_89c;
  ushort local_898 [64];
  ushort auStack_818 [1034];
  
  if (*(int *)(param_1 + 4) != 0) {
    FArray::Empty(param_1,8,0);
  }
  local_898[0] = 0;
  local_898[1] = 0;
  iVar1 = (**(code **)(**(int **)GConfig_exref + 4))(param_3,&DAT_10891990,local_898,param_2);
  if ((iVar1 != 0) && (iStack_89c = 0, 0 < unaff_EDI)) {
    do {
      iVar3 = iStack_89c + 1;
      appSprintf(local_898,(ushort *)L"Scale%d",iVar3);
      iVar1 = (**(code **)(**(int **)GConfig_exref + 0x10))
                        (param_3,local_898,auStack_818,0x400,param_2);
      if (iVar1 != 0) {
        iVar1 = Parse(auStack_818,(ushort *)&DAT_108acc5c,(float *)&stack0xfffff75c);
        if (iVar1 == 0) {
          unaff_ESI = (float)iStack_89c;
        }
        iVar1 = Parse(auStack_818,(ushort *)&DAT_108accf8,(float *)&stack0xfffff760);
        if (iVar1 == 0) {
          unaff_EBX = 255.0;
        }
        iVar2 = FArray::Add(param_1,1,8);
        iVar1 = *(int *)param_1;
        *(float *)(iVar1 + iVar2 * 8) = unaff_ESI;
        *(float *)(iVar1 + 4 + iVar2 * 8) = unaff_EBX;
      }
      iStack_89c = iVar3;
    } while (iVar3 < unaff_EDI);
  }
  return;
}


// ==== 1051b1d0 FUN_1051b1d0

void FUN_1051b1d0(undefined4 param_1,FArray *param_2)

{
  FArray *this;
  int iVar1;
  int *in_ECX;
  int iVar2;
  
  this = param_2;
  iVar2 = 0;
  if (0 < in_ECX[0x1e]) {
    do {
      if (iVar2 < in_ECX[0x1e] + -1) {
        iVar1 = *(int *)(in_ECX[0x1d] + 4 + iVar2 * 4);
      }
      else {
        iVar1 = in_ECX[0x21];
      }
      (**(code **)(*in_ECX + 0xa0))
                (in_ECX + 0x20,*(undefined4 *)(in_ECX[0x1d] + iVar2 * 4),iVar1,param_1,
                 (int)&param_2 + 2,(int)&param_2 + 1,&param_2);
      iVar1 = FArray::Add(this,1,4);
      iVar2 = iVar2 + 1;
      *(FArray **)(*(int *)this + iVar1 * 4) = param_2;
    } while (iVar2 < in_ECX[0x1e]);
  }
  return;
}


// ==== 1051b270 FUN_1051b270

void FUN_1051b270(undefined4 param_1,FArray *param_2)

{
  FArray *this;
  int iVar1;
  int *in_ECX;
  int iVar2;
  
  this = param_2;
  iVar2 = 0;
  if (0 < in_ECX[0x24]) {
    do {
      if (iVar2 < in_ECX[0x24] + -1) {
        iVar1 = *(int *)(in_ECX[0x23] + 4 + iVar2 * 4);
      }
      else {
        iVar1 = in_ECX[0x27];
      }
      (**(code **)(*in_ECX + 0xa0))
                (in_ECX + 0x26,*(undefined4 *)(in_ECX[0x23] + iVar2 * 4),iVar1,param_1,
                 (int)&param_2 + 2,(int)&param_2 + 1,&param_2);
      iVar1 = FArray::Add(this,1,4);
      iVar2 = iVar2 + 1;
      *(FArray **)(*(int *)this + iVar1 * 4) = param_2;
    } while (iVar2 < in_ECX[0x24]);
  }
  return;
}


// ==== 1051b330 FUN_1051b330

void FUN_1051b330(float param_1)

{
  double dVar1;
  int iVar2;
  int iVar3;
  UL2NEnvManager *in_ECX;
  float10 extraout_ST0;
  float fVar4;
  int local_c;
  int local_8;
  float local_4;
  
  if (*(int *)GIsEditor_exref != 0) {
    *(float *)(DAT_10ddd810 + DAT_10dddba0 * 4) = (float)*(double *)(in_ECX + 0x134);
    return;
  }
  if (*(int *)(in_ECX + 0x144) != 0) {
    if (DAT_10c51050 == 0) {
      appSecondsQPC();
      iVar2 = FUN_107a6660();
      iVar3 = FUN_107a6660();
      local_c = (iVar2 / 0xe10 & 0xffU) + *(int *)(in_ECX + 0x120);
      local_8 = (iVar3 / 0x3c & 0xffU) + *(int *)(in_ECX + 0x124);
      local_4 = (float)(extraout_ST0 - (float10)(iVar3 / 0x3c) * (float10)60.0) +
                *(float *)(in_ECX + 0x128);
      if ((float10)60.0 <= (float10)local_4) {
        local_8 = local_8 + 1;
        local_4 = 60.0;
      }
      if (0x3b < local_8) {
        local_c = local_c + 1;
        local_8 = local_8 + -0x3c;
      }
      if (0x17 < local_c) {
        iVar2 = (int)((ulonglong)((longlong)local_c * -0x2aaaaaab) >> 0x20);
        local_c = local_c + ((iVar2 >> 2) - (iVar2 >> 0x1f)) * 0x18;
      }
      *(double *)(in_ECX + 0x134) =
           (double)(local_4 * 0.00027777778 + (float)local_8 * 0.016666668 + (float)local_c);
    }
    if ((*(double *)(in_ECX + 0x134) < 6.0) || (8.0 <= *(double *)(in_ECX + 0x134))) {
      dVar1 = *(double *)(in_ECX + 0x134);
      if ((NAN(dVar1) || 8.0 < dVar1 == (dVar1 == 8.0)) || (22.0 <= *(double *)(in_ECX + 0x134))) {
        dVar1 = *(double *)(in_ECX + 0x134);
        if ((NAN(dVar1) || 22.0 < dVar1 == (dVar1 == 22.0)) || (24.0 <= *(double *)(in_ECX + 0x134))
           ) {
          *(undefined4 *)(in_ECX + 0x130) = 3;
        }
        else {
          *(undefined4 *)(in_ECX + 0x130) = 2;
        }
      }
      else {
        *(undefined4 *)(in_ECX + 0x130) = 1;
      }
    }
    else {
      *(undefined4 *)(in_ECX + 0x130) = 0;
    }
    if ((*(float *)(in_ECX + 0x160) <= 0.0) ||
       (ABS((float)*(double *)(in_ECX + 0x134) - *(float *)(in_ECX + 0x164)) <=
        *(float *)(in_ECX + 0x160))) {
      *(undefined4 *)(in_ECX + 0x168) = 0;
    }
    else {
      *(undefined4 *)(in_ECX + 0x168) = 1;
      *(float *)(in_ECX + 0x164) = (float)*(double *)(in_ECX + 0x134);
    }
    if ((in_ECX[0x1dd] != in_ECX[0x1e5]) &&
       (fVar4 = *(float *)(in_ECX + 0x1e8), *(float *)(in_ECX + 0x1e8) = fVar4 - param_1,
       fVar4 - param_1 < 0.0)) {
      UL2NEnvManager::ChangeEnv(in_ECX,(char)in_ECX[0x1e5],'\0',0.002,0.002,1.0,0.0,0);
    }
    if ((in_ECX[0x1dc] != in_ECX[0x1dd]) &&
       (*(undefined4 *)(in_ECX + 0x168) = 1,
       *(float *)(in_ECX + 0x1cc) < (float)*(double *)(in_ECX + 0x134) !=
       (*(float *)(in_ECX + 0x1cc) == (float)*(double *)(in_ECX + 0x134)))) {
      in_ECX[0x1dc] = in_ECX[0x1dd];
      *(undefined4 *)(in_ECX + 0x1d8) = *(undefined4 *)(in_ECX + 0x1d4);
      in_ECX[0x1e4] = in_ECX[0x1e5];
    }
    fVar4 = UL2NEnvManager::CalcEnvDelta(in_ECX,(float)*(double *)(in_ECX + 0x134));
    *(float *)(in_ECX + 0x1e0) = fVar4;
    *(float *)(DAT_10ddd810 + DAT_10dddba0 * 4) = (float)*(double *)(in_ECX + 0x134);
    return;
  }
  *(float *)(DAT_10ddd810 + DAT_10dddba0 * 4) = (float)*(double *)(in_ECX + 0x134);
  return;
}


// ==== 1051b750 FUN_1051b750

void FUN_1051b750(void)

{
  int in_ECX;
  int iVar1;
  
  if (0 < *(int *)(in_ECX + 0x18c)) {
    iVar1 = 0;
    do {
      (**(code **)(**(int **)GMalloc_exref + 8))
                (*(undefined4 *)(*(int *)(in_ECX + 0x188) + iVar1 * 4));
      iVar1 = iVar1 + 1;
    } while (iVar1 < *(int *)(in_ECX + 0x18c));
  }
  FArray::Empty((FArray *)(in_ECX + 0x188),4,0);
  iVar1 = 0;
  if (0 < *(int *)(in_ECX + 0x198)) {
    do {
      (**(code **)(**(int **)GMalloc_exref + 8))
                (*(undefined4 *)(*(int *)(in_ECX + 0x194) + iVar1 * 4));
      iVar1 = iVar1 + 1;
    } while (iVar1 < *(int *)(in_ECX + 0x198));
  }
  FArray::Empty((FArray *)(in_ECX + 0x194),4,0);
  return;
}


// ==== 1051b800 FUN_1051b800

void FUN_1051b800(undefined4 param_1)

{
  uint *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  UObject *pUVar5;
  FString *pFVar6;
  wchar_t *pwVar7;
  ushort *puVar8;
  UPackage *pUVar9;
  UL2NEnvManager *in_ECX;
  int unaff_EBX;
  int iVar10;
  code *pcVar11;
  int unaff_ESI;
  EFindName EVar12;
  float *pfStack_568;
  int iStack_540;
  wchar_t *pwStack_534;
  wchar_t *pwStack_530;
  UL2NEnvManager *pUStack_52c;
  float fStack_528;
  wchar_t *pwStack_524;
  wchar_t *pwStack_520;
  UL2NEnvManager *pUStack_51c;
  float fStack_518;
  wchar_t *pwStack_514;
  wchar_t *pwStack_510;
  UL2NEnvManager *pUStack_50c;
  float fStack_508;
  wchar_t *pwStack_504;
  float fVar13;
  int iVar14;
  int iStack_4d4;
  wchar_t *pwStack_4c4;
  wchar_t *pwStack_4c0;
  ushort auStack_4a4 [14];
  ushort auStack_488 [40];
  ushort auStack_438 [2];
  ushort auStack_434 [6];
  FOutputDevice aFStack_428 [4];
  ushort auStack_424 [182];
  ushort auStack_2b8 [56];
  ushort auStack_248 [10];
  ushort auStack_234 [200];
  void *pvStack_a4;
  undefined4 uStack_9c;
  undefined4 uStack_94;
  undefined4 uStack_2c;
  float fStack_24;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_10818f38;
  pvStack_c = ExceptionList;
  pwStack_4c0 = (wchar_t *)param_1;
  pwStack_4c4 = (wchar_t *)0x1;
  ExceptionList = &pvStack_c;
  (**(code **)(**(int **)GConfig_exref + 0x34))();
  iVar10 = 0;
  if (*(int *)(in_ECX + 0x1bc) != 0) {
    iVar4 = 0;
    if (0 < *(int *)(in_ECX + 0x1bc)) {
      do {
        puVar1 = (uint *)(*(int *)(*(int *)(in_ECX + 0x1b8) + iVar4 * 4) + 0x34);
        *puVar1 = *puVar1 & 0xfffffffe;
        iVar4 = iVar4 + 1;
      } while (iVar4 < *(int *)(in_ECX + 0x1bc));
    }
    FArray::Empty((FArray *)(in_ECX + 0x1b8),4,0);
  }
  if (*(int *)(in_ECX + 0x1bc) != 0) {
    FArray::Empty((FArray *)(in_ECX + 0x1b8),4,0);
  }
  iVar4 = (**(code **)(**(int **)GConfig_exref + 4))();
  pcVar11 = GetTransientPackage_exref;
  if (iVar4 == 0) {
    unaff_ESI = 1;
  }
  in_ECX[0x1c4] = SUB41(unaff_ESI,0);
  if (0 < unaff_ESI) {
    do {
      appSprintf(auStack_488,(ushort *)L"TimeEnvFileName%d");
      iVar14 = 100;
      puVar8 = auStack_424;
      iVar4 = (**(code **)(**(int **)GConfig_exref + 0x10))();
      if (iVar4 == 0) {
        appSprintf(auStack_438,(ushort *)L"TimeEnv%d.INT");
      }
      pUVar5 = (UObject *)(*pcVar11)();
      pUVar5 = UObject::StaticFindObject(&UL2NEnvLight::PrivateStaticClass,pUVar5,puVar8,iVar14);
      if ((pUVar5 == (UObject *)0x0) ||
         (iVar4 = UObject::IsA(pUVar5,&UL2NEnvLight::PrivateStaticClass), iVar4 == 0)) {
        pwStack_4c4 = (wchar_t *)&stack0xfffffb14;
        FName::FName((FName *)&stack0xfffffb14,(ushort *)aFStack_428,1);
        (*pcVar11)();
        pUVar5 = UObject::StaticConstructObject();
        if ((pUVar5 != (UObject *)0x0) &&
           (iVar4 = UObject::IsA(pUVar5,&UL2NEnvLight::PrivateStaticClass), iVar4 != 0)) {
          UObject::AddToRoot(pUVar5);
          goto LAB_1051b9c7;
        }
        if (*(int *)GLog_exref != 0) {
          FOutputDevice::Logf2(aFStack_428,*(ushort **)GLog_exref);
        }
      }
      else {
LAB_1051b9c7:
        (**(code **)(*(int *)pUVar5 + 0x6c))();
        iVar4 = FArray::Add((FArray *)(in_ECX + 0x1b8),1,4);
        pcVar11 = GetTransientPackage_exref;
        *(UObject **)(*(int *)(in_ECX + 0x1b8) + iVar4 * 4) = pUVar5;
      }
      iVar10 = iVar10 + 1;
    } while (iVar10 < unaff_ESI);
  }
  iVar10 = (**(code **)(**(int **)GConfig_exref + 0xc))();
  if (iVar10 == 0) {
    pFVar6 = (FString *)FString::FString((FString *)&pwStack_4c4,(ushort *)L"SkybackgroundColor");
    uStack_2c = 0;
    FString::operator=((FString *)(in_ECX + 0x17c),pFVar6);
    uStack_2c = 0xffffffff;
    FString::~FString((FString *)&pwStack_4c4);
  }
  pwStack_4c4 = L"NumHazeRingColor";
  pwStack_4c0 = L"HazeRing";
  UL2NEnvManager::Clear(in_ECX);
  iStack_4d4 = 0;
  do {
    iVar10 = (**(code **)(**(int **)GConfig_exref + 4))();
    if (iVar10 == 0) {
      unaff_EBX = 1;
    }
    iVar10 = 0;
    if (0 < unaff_EBX) {
      do {
        iVar10 = iVar10 + 1;
        appSprintf(auStack_434,(ushort *)L"%s%d");
        fVar13 = fStack_24;
        iVar4 = (**(code **)(**(int **)GConfig_exref + 0x10))();
        if (iVar4 == 0) {
          pwVar7 = L"HazeRing_Final";
          if (fVar13 != 0.0) {
            pwVar7 = L"Cloud_Final";
          }
          pwStack_504 = L"쒃贈⒔ʰ";
          appSprintf(auStack_248,(ushort *)pwVar7);
        }
        appStrlen(auStack_248);
        pwStack_504 = (wchar_t *)0x1051bb9c;
        puVar8 = (ushort *)(**(code **)**(undefined4 **)GMalloc_exref)();
        appStrcpy(puVar8,auStack_234);
        if (iStack_4d4 == 0) {
          iVar4 = FArray::Add((FArray *)(in_ECX + 0x188),1,4);
          *(ushort **)(*(int *)(in_ECX + 0x188) + iVar4 * 4) = puVar8;
        }
        else if (iStack_4d4 == 1) {
          iVar4 = FArray::Add((FArray *)(in_ECX + 0x194),1,4);
          *(ushort **)(*(int *)(in_ECX + 0x194) + iVar4 * 4) = puVar8;
        }
      } while (iVar10 < unaff_EBX);
    }
    iStack_4d4 = iStack_4d4 + 1;
  } while (iStack_4d4 < 2);
  FArray::Shrink((FArray *)(in_ECX + 0x188),4);
  FArray::Shrink((FArray *)(in_ECX + 0x194),4);
  iVar10 = (**(code **)(**(int **)GConfig_exref + 8))();
  if (iVar10 == 0) {
    *(undefined4 *)(in_ECX + 0x16c) = 0x3f800000;
  }
  pwStack_504 = L"EnvSetup";
  fStack_508 = 4.1363315e-29;
  iVar10 = (**(code **)**(undefined4 **)GConfig_exref)();
  if (iVar10 == 0) {
    *(undefined4 *)(in_ECX + 0x144) = 1;
  }
  fStack_508 = fStack_24;
  pwStack_510 = L"SlopeSunAngle";
  pwStack_514 = L"EnvSetup";
  fStack_518 = 4.1363444e-29;
  pUStack_50c = in_ECX + 0x174;
  iVar10 = (**(code **)(**(int **)GConfig_exref + 8))();
  if (iVar10 == 0) {
    *(undefined4 *)(in_ECX + 0x174) = 0;
  }
  fStack_518 = fStack_24;
  pwStack_520 = L"TimeRatio";
  pwStack_524 = L"EnvSetup";
  fStack_528 = 4.1363568e-29;
  pUStack_51c = in_ECX + 300;
  iVar10 = (**(code **)(**(int **)GConfig_exref + 4))();
  if (iVar10 == 0) {
    *(undefined4 *)(in_ECX + 300) = 6;
  }
  fStack_528 = fStack_24;
  pwStack_530 = L"ShadowTick";
  pwStack_534 = L"EnvSetup";
  pUStack_52c = in_ECX + 0x160;
  iVar10 = (**(code **)(**(int **)GConfig_exref + 8))();
  if (iVar10 == 0) {
    *(undefined4 *)(in_ECX + 0x160) = 0xbf800000;
  }
  iVar10 = (**(code **)(**(int **)GConfig_exref + 8))();
  if (iVar10 == 0) {
    *(undefined4 *)(in_ECX + 0x178) = 0x40c00000;
  }
  UL2NEnvManager::SetTimeToLobbyTime(in_ECX);
  iVar10 = 0;
  if (*(int *)(in_ECX + 0x1b0) != 0) {
    iVar4 = 0;
    if (0 < *(int *)(in_ECX + 0x1b0)) {
      do {
        puVar1 = (uint *)(*(int *)(*(int *)(in_ECX + 0x1ac) + iVar4 * 4) + 0x34);
        *puVar1 = *puVar1 & 0xfffffffe;
        iVar4 = iVar4 + 1;
      } while (iVar4 < *(int *)(in_ECX + 0x1b0));
    }
    FArray::Empty((FArray *)(in_ECX + 0x1ac),4,0);
  }
  if (*(int *)(in_ECX + 0x1a4) != 0) {
    FArray::Empty((FArray *)(in_ECX + 0x1a0),0x14,0);
  }
  pwStack_514 = (wchar_t *)0x0;
  (**(code **)(**(int **)GConfig_exref + 4))();
  if (0 < (int)pwStack_524) {
    do {
      FString::FString((FString *)&pwStack_534);
      uStack_9c = 1;
      iVar10 = iVar10 + 1;
      appSprintf((ushort *)&fStack_508,(ushort *)L"SubLight%d");
      pfStack_568 = (float *)0x1051be3b;
      iVar4 = (**(code **)(**(int **)GConfig_exref + 0xc))();
      if (iVar4 == 0) {
        uStack_9c = 0xffffffff;
        FString::~FString((FString *)&pwStack_534);
      }
      else {
        iVar4 = 0;
        puVar8 = FString::operator*((FString *)&pwStack_534);
        pUVar9 = UObject::GetTransientPackage();
        pfStack_568 = (float *)0x1051be7a;
        pUVar5 = UObject::StaticFindObject
                           (&UL2NEnvLight::PrivateStaticClass,(UObject *)pUVar9,puVar8,iVar4);
        if ((pUVar5 == (UObject *)0x0) ||
           (iVar4 = UObject::IsA(pUVar5,&UL2NEnvLight::PrivateStaticClass), iVar4 == 0)) {
          pfStack_568 = (float *)GError_exref;
          EVar12 = 1;
          puVar8 = FString::operator*((FString *)&pwStack_534);
          FName::FName((FName *)&pfStack_568,puVar8,EVar12);
          pUVar9 = UObject::GetTransientPackage();
          pUVar5 = UObject::StaticConstructObject(&UL2NEnvLight::PrivateStaticClass,pUVar9);
          if ((pUVar5 != (UObject *)0x0) &&
             (iVar4 = UObject::IsA(pUVar5,&UL2NEnvLight::PrivateStaticClass), iVar4 != 0)) {
            UObject::AddToRoot(pUVar5);
            goto LAB_1051bef9;
          }
        }
        else {
LAB_1051bef9:
          if (((byte)pUVar5[0x34] & 1) == 0) {
            FString::operator*((FString *)&pwStack_534);
            appSprintf(auStack_4a4,(ushort *)L"Light\\%s.int");
            (**(code **)(*(int *)pUVar5 + 0x6c))();
          }
          uVar3 = uStack_94;
          pfStack_568 = &fStack_508;
          iVar4 = (**(code **)(**(int **)GConfig_exref + 0x10))();
          if (iVar4 != 0) {
            iVar4 = Parse(auStack_2b8,(ushort *)&DAT_10891960,(float *)&pwStack_530);
            if (iVar4 == 0) {
              pwStack_530 = (wchar_t *)0x0;
            }
            iVar4 = Parse(auStack_2b8,(ushort *)&DAT_10891958,(float *)&pUStack_52c);
            if (iVar4 == 0) {
              pUStack_52c = (UL2NEnvManager *)0x0;
            }
            iVar4 = Parse(auStack_2b8,(ushort *)&DAT_10891950,&fStack_528);
            if (iVar4 == 0) {
              fStack_528 = 0.0;
            }
          }
          iVar4 = (**(code **)(**(int **)GConfig_exref + 8))
                            (&pUStack_51c,L"MinDist",&pwStack_524,uVar3);
          if (iVar4 == 0) {
            pwStack_534 = (wchar_t *)0x0;
          }
          iVar4 = (**(code **)(**(int **)GConfig_exref + 8))
                            (&pUStack_52c,L"MaxDist",&pwStack_530,uVar3);
          if (iVar4 == 0) {
            pUStack_50c = (UL2NEnvManager *)0x0;
          }
          iVar4 = FArray::Add((FArray *)(in_ECX + 0x1ac),1,4);
          *(UObject **)(*(int *)(in_ECX + 0x1ac) + iVar4 * 4) = pUVar5;
          iVar4 = FArray::Add((FArray *)(in_ECX + 0x1a0),1,0x14);
          puVar2 = (undefined4 *)(*(int *)(in_ECX + 0x1a0) + iVar4 * 0x14);
          *puVar2 = pUStack_51c;
          puVar2[1] = fStack_518;
          puVar2[2] = pwStack_514;
          puVar2[3] = pwStack_510;
          puVar2[4] = pUStack_50c;
        }
        uStack_9c = 0xffffffff;
        FString::~FString((FString *)&pwStack_534);
      }
    } while (iVar10 < (int)pwStack_524);
  }
  iStack_540 = (int)(longlong)ROUND(*(float *)(in_ECX + 0x128));
  fVar13 = (float)iStack_540;
  if (iStack_540 < 0) {
    fVar13 = fVar13 + 4.2949673e+09;
  }
  in_ECX[0x1dc] = (UL2NEnvManager)0x0;
  in_ECX[0x1dd] = (UL2NEnvManager)0x0;
  fVar13 = fVar13 * 0.00027777778 +
           (float)*(int *)(in_ECX + 0x124) * 0.016666668 + (float)*(int *)(in_ECX + 0x120);
  in_ECX[0x1e4] = (UL2NEnvManager)0x0;
  in_ECX[0x1e5] = (UL2NEnvManager)0x0;
  *(double *)(in_ECX + 0x134) = (double)fVar13;
  *(float *)(in_ECX + 0x1cc) = fVar13;
  *(float *)(in_ECX + 0x1c8) = fVar13;
  *(undefined4 *)(in_ECX + 0x1d0) = 0;
  *(undefined4 *)(in_ECX + 0x1d4) = 0x3f800000;
  *(undefined4 *)(in_ECX + 0x1d8) = 0x3f800000;
  *(undefined4 *)(in_ECX + 0x1e0) = 0;
  ExceptionList = pvStack_a4;
  return;
}


// ==== 1051c3c0 FUN_1051c3c0

void FUN_1051c3c0(float param_1,FArray *param_2)

{
  char *pcVar1;
  int *piVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  FArray *this;
  FArray *pFVar6;
  int iVar7;
  UL2NEnvManager *in_ECX;
  int iVar8;
  int iVar9;
  ushort in_FPUControlWord;
  double dVar10;
  int iStack_50;
  undefined1 uStack_4c;
  int iStack_48;
  int iStack_44;
  int iStack_3c;
  int iStack_38;
  int local_30 [3];
  int local_24 [3];
  int local_18 [3];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10818fa5;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FArray::FArray((FArray *)local_18);
  local_4 = 1;
  FArray::FArray((FArray *)local_24);
  local_4._0_1_ = 3;
  FArray::FArray((FArray *)local_30);
  local_4 = CONCAT31(local_4._1_3_,5);
  iVar8 = 0;
  if (0 < *(int *)(in_ECX + 0x1bc)) {
    iVar9 = 0;
    do {
      piVar2 = *(int **)(*(int *)(in_ECX + 0x1b8) + iVar9 * 4);
      if (piVar2[0x44] == (uint)(byte)in_ECX[0x1dd]) {
        (**(code **)(*piVar2 + 0xdc))(param_1);
      }
      piVar2 = *(int **)(*(int *)(in_ECX + 0x1b8) + iVar9 * 4);
      if (piVar2[0x44] == (uint)(byte)in_ECX[0x1dc]) {
        (**(code **)(*piVar2 + 0xdc))(param_1);
      }
      piVar2 = *(int **)(*(int *)(in_ECX + 0x1b8) + iVar9 * 4);
      if (piVar2[0x44] == 0) {
        (**(code **)(*piVar2 + 0xdc))(param_1);
      }
      iVar9 = iVar9 + 1;
    } while (iVar9 < *(int *)(in_ECX + 0x1bc));
  }
  this = param_2;
  iVar9 = 0;
  if (0 < *(int *)(in_ECX + 0x18c)) {
    do {
      UL2NEnvManager::GetEnvColor
                (in_ECX,(FColor *)(local_30[0] + iVar9 * 4),(FColor *)(local_18[0] + iVar9 * 4),
                 (FColor *)(local_24[0] + iVar9 * 4),param_1,(uchar *)((int)&param_2 + 2),
                 (uchar *)((int)&param_2 + 1),(uchar *)&param_2);
      iVar7 = FArray::Add(this,1,4);
      iVar9 = iVar9 + 1;
      *(FArray **)(*(int *)this + iVar7 * 4) = param_2;
    } while (iVar9 < *(int *)(in_ECX + 0x18c));
  }
  if (*(int *)(in_ECX + 0x1b0) != 0) {
    iStack_50 = 0;
    FArray::FArray((FArray *)&iStack_48);
    local_4._0_1_ = 7;
    if (0 < *(int *)(in_ECX + 0x1b0)) {
      iVar9 = 0;
      do {
        fVar4 = *(float *)(*(int *)(in_ECX + 0x1a0) + iVar9) - *(float *)(in_ECX + 0x114);
        fVar5 = *(float *)(*(int *)(in_ECX + 0x1a0) + iVar9 + 4) - *(float *)(in_ECX + 0x118);
        param_2 = (FArray *)(fVar5 * fVar5);
        dVar10 = appSqrt((double)(fVar4 * fVar4 + (float)param_2));
        param_2 = (FArray *)(float)dVar10;
        if ((float)param_2 <= *(float *)(*(int *)(in_ECX + 0x1a0) + 0x10 + iVar9)) {
          FArray::FArray((FArray *)&iStack_3c);
          local_4._0_1_ = 9;
          (**(code **)(**(int **)(*(int *)(in_ECX + 0x1ac) + iVar8 * 4) + 0xdc))(param_1);
          FArray::AddZeroed((FArray *)&iStack_48,4,
                            iStack_38 - iStack_44 & (iStack_38 - iStack_44 < 1) - 1);
          pFVar6 = param_2;
          iVar7 = 0;
          if (0 < iStack_38) {
            do {
              if (*(int *)(this + 4) <= iVar7) break;
              iVar3 = *(int *)(in_ECX + 0x1a0);
              if (*(float *)(iVar3 + 0xc + iVar9) < (float)pFVar6) {
                fVar4 = ((float)pFVar6 - *(float *)(iVar3 + 0xc + iVar9)) /
                        (*(float *)(iVar3 + iVar9 + 0x10) - *(float *)(iVar3 + iVar9 + 0xc));
                fVar5 = 1.0 - fVar4;
                uStack_4c = (undefined1)
                            (int)ROUND((float)*(byte *)(iStack_48 + 2 + iVar7 * 4) +
                                       (float)*(byte *)(iStack_3c + 2 + iVar7 * 4) * fVar5 +
                                       (float)*(byte *)(*(int *)this + 2 + iVar7 * 4) * fVar4);
                *(undefined1 *)(iStack_48 + 2 + iVar7 * 4) = uStack_4c;
                uStack_4c = (undefined1)
                            (int)ROUND((float)*(byte *)(iStack_48 + 1 + iVar7 * 4) +
                                       (float)*(byte *)(iStack_3c + 1 + iVar7 * 4) * fVar5 +
                                       (float)*(byte *)(*(int *)this + 1 + iVar7 * 4) * fVar4);
                *(undefined1 *)(iStack_48 + 1 + iVar7 * 4) = uStack_4c;
                param_2 = (FArray *)(uint)in_FPUControlWord;
                uStack_4c = (undefined1)
                            (int)ROUND((float)*(byte *)(iStack_48 + iVar7 * 4) +
                                       (float)*(byte *)(iStack_3c + iVar7 * 4) * fVar5 +
                                       (float)*(byte *)(*(int *)this + iVar7 * 4) * fVar4);
                *(undefined1 *)(iStack_48 + iVar7 * 4) = uStack_4c;
              }
              else {
                pcVar1 = (char *)(iStack_48 + 2 + iVar7 * 4);
                *pcVar1 = *pcVar1 + *(char *)(iStack_3c + 2 + iVar7 * 4);
                pcVar1 = (char *)(iStack_48 + 1 + iVar7 * 4);
                *pcVar1 = *pcVar1 + *(char *)(iStack_3c + 1 + iVar7 * 4);
                pcVar1 = (char *)(iStack_48 + iVar7 * 4);
                *pcVar1 = *pcVar1 + *(char *)(iStack_3c + iVar7 * 4);
              }
              iStack_50 = iStack_50 + 1;
              iVar7 = iVar7 + 1;
            } while (iVar7 < iStack_38);
          }
          local_4._0_1_ = 7;
          thunk_FUN_10391680();
        }
        iVar8 = iVar8 + 1;
        iVar9 = iVar9 + 0x14;
      } while (iVar8 < *(int *)(in_ECX + 0x1b0));
      if ((iStack_50 != 0) && (iVar8 = 0, 0 < *(int *)(this + 4))) {
        do {
          if (iStack_44 <= iVar8) break;
          iVar9 = iVar8 * 4;
          iVar8 = iVar8 + 1;
          *(char *)(*(int *)this + -2 + iVar8 * 4) =
               (char)((longlong)(ulonglong)*(byte *)(iStack_48 + 2 + iVar9) / (longlong)iStack_50);
          *(char *)(*(int *)this + -3 + iVar8 * 4) =
               (char)((longlong)(ulonglong)*(byte *)(iStack_48 + -3 + iVar8 * 4) /
                     (longlong)iStack_50);
          *(char *)(*(int *)this + -4 + iVar8 * 4) =
               (char)((longlong)(ulonglong)*(byte *)(iStack_48 + -4 + iVar8 * 4) /
                     (longlong)iStack_50);
        } while (iVar8 < *(int *)(this + 4));
      }
    }
    local_4 = CONCAT31(local_4._1_3_,5);
    thunk_FUN_10391680();
  }
  local_4._0_1_ = 3;
  thunk_FUN_10391680();
  local_4 = CONCAT31(local_4._1_3_,1);
  thunk_FUN_10391680();
  local_4 = 0xffffffff;
  thunk_FUN_10391680();
  ExceptionList = pvStack_c;
  return;
}


// ==== 1051c9c0 FUN_1051c9c0

void FUN_1051c9c0(float param_1,FArray *param_2)

{
  char *pcVar1;
  int *piVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  FArray *this;
  FArray *pFVar6;
  int iVar7;
  UL2NEnvManager *in_ECX;
  int iVar8;
  int iVar9;
  ushort in_FPUControlWord;
  double dVar10;
  int iStack_50;
  undefined1 uStack_4c;
  int iStack_48;
  int iStack_44;
  int iStack_3c;
  int iStack_38;
  int local_30 [3];
  int local_24 [3];
  int local_18 [3];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10819025;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FArray::FArray((FArray *)local_18);
  local_4 = 1;
  FArray::FArray((FArray *)local_24);
  local_4._0_1_ = 3;
  FArray::FArray((FArray *)local_30);
  local_4 = CONCAT31(local_4._1_3_,5);
  iVar8 = 0;
  if (0 < *(int *)(in_ECX + 0x1bc)) {
    iVar9 = 0;
    do {
      piVar2 = *(int **)(*(int *)(in_ECX + 0x1b8) + iVar9 * 4);
      if (piVar2[0x44] == (uint)(byte)in_ECX[0x1dd]) {
        (**(code **)(*piVar2 + 0xe0))(param_1);
      }
      piVar2 = *(int **)(*(int *)(in_ECX + 0x1b8) + iVar9 * 4);
      if (piVar2[0x44] == (uint)(byte)in_ECX[0x1dc]) {
        (**(code **)(*piVar2 + 0xe0))(param_1);
      }
      piVar2 = *(int **)(*(int *)(in_ECX + 0x1b8) + iVar9 * 4);
      if (piVar2[0x44] == 0) {
        (**(code **)(*piVar2 + 0xe0))(param_1);
      }
      iVar9 = iVar9 + 1;
    } while (iVar9 < *(int *)(in_ECX + 0x1bc));
  }
  this = param_2;
  iVar9 = 0;
  if (0 < *(int *)(in_ECX + 0x198)) {
    do {
      UL2NEnvManager::GetEnvColor
                (in_ECX,(FColor *)(local_30[0] + iVar9 * 4),(FColor *)(local_18[0] + iVar9 * 4),
                 (FColor *)(local_24[0] + iVar9 * 4),param_1,(uchar *)((int)&param_2 + 2),
                 (uchar *)((int)&param_2 + 1),(uchar *)&param_2);
      iVar7 = FArray::Add(this,1,4);
      iVar9 = iVar9 + 1;
      *(FArray **)(*(int *)this + iVar7 * 4) = param_2;
    } while (iVar9 < *(int *)(in_ECX + 0x198));
  }
  if (*(int *)(in_ECX + 0x1b0) != 0) {
    iStack_50 = 0;
    FArray::FArray((FArray *)&iStack_48);
    local_4._0_1_ = 7;
    if (0 < *(int *)(in_ECX + 0x1b0)) {
      iVar9 = 0;
      do {
        fVar4 = *(float *)(*(int *)(in_ECX + 0x1a0) + iVar9) - *(float *)(in_ECX + 0x114);
        fVar5 = *(float *)(*(int *)(in_ECX + 0x1a0) + iVar9 + 4) - *(float *)(in_ECX + 0x118);
        param_2 = (FArray *)(fVar5 * fVar5);
        dVar10 = appSqrt((double)(fVar4 * fVar4 + (float)param_2));
        param_2 = (FArray *)(float)dVar10;
        if ((float)param_2 <= *(float *)(*(int *)(in_ECX + 0x1a0) + 0x10 + iVar9)) {
          FArray::FArray((FArray *)&iStack_3c);
          local_4._0_1_ = 9;
          (**(code **)(**(int **)(*(int *)(in_ECX + 0x1ac) + iVar8 * 4) + 0xe0))(param_1);
          FArray::AddZeroed((FArray *)&iStack_48,4,
                            iStack_38 - iStack_44 & (iStack_38 - iStack_44 < 1) - 1);
          pFVar6 = param_2;
          iVar7 = 0;
          if (0 < iStack_38) {
            do {
              if (*(int *)(this + 4) <= iVar7) break;
              iVar3 = *(int *)(in_ECX + 0x1a0);
              if (*(float *)(iVar3 + 0xc + iVar9) < (float)pFVar6) {
                fVar4 = ((float)pFVar6 - *(float *)(iVar3 + 0xc + iVar9)) /
                        (*(float *)(iVar3 + iVar9 + 0x10) - *(float *)(iVar3 + iVar9 + 0xc));
                fVar5 = 1.0 - fVar4;
                uStack_4c = (undefined1)
                            (int)ROUND((float)*(byte *)(iStack_48 + 2 + iVar7 * 4) +
                                       (float)*(byte *)(iStack_3c + 2 + iVar7 * 4) * fVar5 +
                                       (float)*(byte *)(*(int *)this + 2 + iVar7 * 4) * fVar4);
                *(undefined1 *)(iStack_48 + 2 + iVar7 * 4) = uStack_4c;
                uStack_4c = (undefined1)
                            (int)ROUND((float)*(byte *)(iStack_48 + 1 + iVar7 * 4) +
                                       (float)*(byte *)(iStack_3c + 1 + iVar7 * 4) * fVar5 +
                                       (float)*(byte *)(*(int *)this + 1 + iVar7 * 4) * fVar4);
                *(undefined1 *)(iStack_48 + 1 + iVar7 * 4) = uStack_4c;
                param_2 = (FArray *)(uint)in_FPUControlWord;
                uStack_4c = (undefined1)
                            (int)ROUND((float)*(byte *)(iStack_48 + iVar7 * 4) +
                                       (float)*(byte *)(iStack_3c + iVar7 * 4) * fVar5 +
                                       (float)*(byte *)(*(int *)this + iVar7 * 4) * fVar4);
                *(undefined1 *)(iStack_48 + iVar7 * 4) = uStack_4c;
              }
              else {
                pcVar1 = (char *)(iStack_48 + 2 + iVar7 * 4);
                *pcVar1 = *pcVar1 + *(char *)(iStack_3c + 2 + iVar7 * 4);
                pcVar1 = (char *)(iStack_48 + 1 + iVar7 * 4);
                *pcVar1 = *pcVar1 + *(char *)(iStack_3c + 1 + iVar7 * 4);
                pcVar1 = (char *)(iStack_48 + iVar7 * 4);
                *pcVar1 = *pcVar1 + *(char *)(iStack_3c + iVar7 * 4);
              }
              iStack_50 = iStack_50 + 1;
              iVar7 = iVar7 + 1;
            } while (iVar7 < iStack_38);
          }
          local_4._0_1_ = 7;
          thunk_FUN_10391680();
        }
        iVar8 = iVar8 + 1;
        iVar9 = iVar9 + 0x14;
      } while (iVar8 < *(int *)(in_ECX + 0x1b0));
      if ((iStack_50 != 0) && (iVar8 = 0, 0 < *(int *)(this + 4))) {
        do {
          if (iStack_44 <= iVar8) break;
          iVar9 = iVar8 * 4;
          iVar8 = iVar8 + 1;
          *(char *)(*(int *)this + -2 + iVar8 * 4) =
               (char)((longlong)(ulonglong)*(byte *)(iStack_48 + 2 + iVar9) / (longlong)iStack_50);
          *(char *)(*(int *)this + -3 + iVar8 * 4) =
               (char)((longlong)(ulonglong)*(byte *)(iStack_48 + -3 + iVar8 * 4) /
                     (longlong)iStack_50);
          *(char *)(*(int *)this + -4 + iVar8 * 4) =
               (char)((longlong)(ulonglong)*(byte *)(iStack_48 + -4 + iVar8 * 4) /
                     (longlong)iStack_50);
        } while (iVar8 < *(int *)(this + 4));
      }
    }
    local_4 = CONCAT31(local_4._1_3_,5);
    thunk_FUN_10391680();
  }
  local_4._0_1_ = 3;
  thunk_FUN_10391680();
  local_4 = CONCAT31(local_4._1_3_,1);
  thunk_FUN_10391680();
  local_4 = 0xffffffff;
  thunk_FUN_10391680();
  ExceptionList = pvStack_c;
  return;
}


// ==== 1051cfc0 FUN_1051cfc0

void FUN_1051cfc0(void)

{
  UL2NEnvLight *in_ECX;
  double dVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_108190da;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UL2NEnvLight::UL2NEnvLight(in_ECX);
  local_4 = 0;
  *(undefined ***)in_ECX = UL2NEnvManager::vftable;
  FString::FString((FString *)(in_ECX + 0x17c));
  local_4._0_1_ = 1;
  FArray::FArray((FArray *)(in_ECX + 0x188));
  local_4._0_1_ = 3;
  FArray::FArray((FArray *)(in_ECX + 0x194));
  local_4._0_1_ = 5;
  FArray::FArray((FArray *)(in_ECX + 0x1a0));
  local_4._0_1_ = 7;
  FArray::FArray((FArray *)(in_ECX + 0x1ac));
  local_4._0_1_ = 9;
  FArray::FArray((FArray *)(in_ECX + 0x1b8));
  local_4 = CONCAT31(local_4._1_3_,0xb);
  UObject::SetFlags((UObject *)in_ECX,0x4000000);
  *(undefined8 *)(in_ECX + 0x134) = 0;
  *(undefined4 *)(in_ECX + 0x120) = 6;
  *(undefined4 *)(in_ECX + 0x124) = 0;
  *(undefined4 *)(in_ECX + 0x128) = 0;
  *(undefined4 *)(in_ECX + 300) = 1;
  *(undefined4 *)(in_ECX + 0x174) = 0;
  *(undefined4 *)(in_ECX + 0x144) = 1;
  *(undefined4 *)(in_ECX + 0x170) = 0x43340000;
  dVar1 = appSecondsQPC();
  *(double *)(in_ECX + 0x13c) = dVar1;
  *(undefined4 *)(in_ECX + 0x178) = 0;
  ExceptionList = local_c;
  return;
}


// ==== 1051d140 FUN_1051d140

UClass * FUN_1051d140(void)

{
  return &UNullRenderDevice::PrivateStaticClass;
}


// ==== 1051d150 FUN_1051d150

void FUN_1051d150(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  UObject::StaticAllocateObject
            (&UNullRenderDevice::PrivateStaticClass,param_2,param_3,param_4,0,
             *(undefined4 *)GError_exref,0,0);
  return;
}


// ==== 1051d190 FUN_1051d190

undefined4 FUN_1051d190(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}


// ==== 1051d1a0 FUN_1051d1a0

void FUN_1051d1a0(void)

{
  return;
}


// ==== 1051d1b0 FUN_1051d1b0

void FUN_1051d1b0(void)

{
  return;
}


// ==== 1051d1c0 FUN_1051d1c0

undefined4 FUN_1051d1c0(int *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_1 + 0x80))(0x10,param_2,param_3,1);
  if (iVar1 == 0) {
    appFailAssert("Viewport->ResizeViewport( BLIT_Direct3D, NewX, NewY )",
                  "..\\Inc\\UnNullRenderDevice.h",100);
  }
  return 1;
}


// ==== 1051d210 FUN_1051d210

undefined4 FUN_1051d210(int *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_1 + 0x80))(0x10,param_2,param_3,1);
  if (iVar1 == 0) {
    appFailAssert("Viewport->ResizeViewport( BLIT_Direct3D, NewX, NewY )",
                  "..\\Inc\\UnNullRenderDevice.h",0x6a);
  }
  return 1;
}


// ==== 1051d260 FUN_1051d260

undefined4 FUN_1051d260(void)

{
  return 0;
}


// ==== 1051d270 FUN_1051d270

undefined4 FUN_1051d270(void)

{
  return 0;
}


// ==== 1051d280 FUN_1051d280

void FUN_1051d280(void)

{
  return;
}


// ==== 1051d290 FUN_1051d290

void FUN_1051d290(void)

{
  return;
}


// ==== 1051d2a0 FUN_1051d2a0

void FUN_1051d2a0(void)

{
  return;
}


// ==== 1051d2b0 FUN_1051d2b0

void FUN_1051d2b0(void)

{
  return;
}


// ==== 1051d2c0 FUN_1051d2c0

undefined4 FUN_1051d2c0(void)

{
  return 0;
}


// ==== 1051d2d0 FUN_1051d2d0

int FUN_1051d2d0(void)

{
  int in_ECX;
  
  return in_ECX + 0xcc;
}


// ==== 1051d2e0 FUN_1051d2e0

void FUN_1051d2e0(void)

{
  return;
}


// ==== 1051d2f0 FUN_1051d2f0

void FUN_1051d2f0(void)

{
  return;
}


// ==== 1051d300 FUN_1051d300

void FUN_1051d300(void)

{
  return;
}


// ==== 1051d310 FUN_1051d310

void FUN_1051d310(void)

{
  return;
}


// ==== 1051d320 FUN_1051d320

void FUN_1051d320(void)

{
  return;
}


// ==== 1051d330 FUN_1051d330

undefined4 FUN_1051d330(void)

{
  return 0;
}


// ==== 1051d340 FUN_1051d340

void FUN_1051d340(void)

{
  return;
}


// ==== 1051d350 FUN_1051d350

undefined4 FUN_1051d350(void)

{
  return 0;
}


// ==== 1051d360 FUN_1051d360

undefined4 FUN_1051d360(void)

{
  return 1;
}


// ==== 1051d370 FUN_1051d370

void FUN_1051d370(void)

{
  return;
}


// ==== 1051d380 FUN_1051d380

int FUN_1051d380(void)

{
  int in_ECX;
  
  return in_ECX + 0xe4;
}


// ==== 1051d390 FUN_1051d390

void FUN_1051d390(void)

{
  return;
}


// ==== 1051d3a0 FUN_1051d3a0

int FUN_1051d3a0(void)

{
  int in_ECX;
  
  return in_ECX + 0xcc;
}


// ==== 1051d3f0 FUN_1051d3f0

void FUN_1051d3f0(void)

{
  return;
}


// ==== 1051d400 FUN_1051d400

void FUN_1051d400(void)

{
  return;
}


// ==== 1051d410 FUN_1051d410

undefined4 FUN_1051d410(void)

{
  return 1;
}


// ==== 1051d420 FUN_1051d420

void FUN_1051d420(void)

{
  return;
}


// ==== 1051d430 FUN_1051d430

void FUN_1051d430(void)

{
  return;
}


// ==== 1051d440 FUN_1051d440

void FUN_1051d440(void)

{
  return;
}


// ==== 1051d450 FUN_1051d450

void FUN_1051d450(void)

{
  return;
}


// ==== 1051d460 FUN_1051d460

void FUN_1051d460(void)

{
  return;
}


// ==== 1051d470 FUN_1051d470

void FUN_1051d470(void)

{
  return;
}


// ==== 1051d480 FUN_1051d480

void FUN_1051d480(void)

{
  return;
}


// ==== 1051d490 FUN_1051d490

void FUN_1051d490(void)

{
  return;
}


// ==== 1051d4a0 FUN_1051d4a0

void FUN_1051d4a0(void)

{
  return;
}


// ==== 1051d4b0 FUN_1051d4b0

undefined4 FUN_1051d4b0(void)

{
  return 1;
}


// ==== 1051d4c0 FUN_1051d4c0

void FUN_1051d4c0(void)

{
  return;
}


// ==== 1051d4d0 FUN_1051d4d0

void FUN_1051d4d0(void)

{
  return;
}


// ==== 1051d4e0 FUN_1051d4e0

void FUN_1051d4e0(void)

{
  return;
}


// ==== 1051d4f0 FUN_1051d4f0

void FUN_1051d4f0(void)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_10819119;
  local_c = ExceptionList;
  local_4 = 0xffffffff;
  ExceptionList = &local_c;
  FMatrix::~FMatrix((FMatrix *)&stack0x00000008);
  ExceptionList = local_c;
  return;
}


// ==== 1051d540 FUN_1051d540

void FUN_1051d540(void)

{
  return;
}


// ==== 1051d550 FUN_1051d550

void FUN_1051d550(void)

{
  return;
}


// ==== 1051d560 FUN_1051d560

void FUN_1051d560(void)

{
  return;
}


// ==== 1051d570 FUN_1051d570

void FUN_1051d570(void)

{
  return;
}


// ==== 1051d580 FUN_1051d580

void FUN_1051d580(void)

{
  return;
}


// ==== 1051d590 FUN_1051d590

void FUN_1051d590(void)

{
  return;
}


// ==== 1051d5a0 FUN_1051d5a0

undefined4 FUN_1051d5a0(void)

{
  return 0;
}


// ==== 1051d5b0 FUN_1051d5b0

undefined4 FUN_1051d5b0(void)

{
  return 0;
}


// ==== 1051d5c0 FUN_1051d5c0

undefined4 FUN_1051d5c0(void)

{
  return 0;
}


// ==== 1051d5d0 FUN_1051d5d0

void FUN_1051d5d0(void)

{
  return;
}


// ==== 1051d5e0 FUN_1051d5e0

void FUN_1051d5e0(void)

{
  return;
}


// ==== 1051d5f0 FUN_1051d5f0

undefined4 FUN_1051d5f0(void)

{
  return 0;
}


// ==== 1051d600 FUN_1051d600

undefined4 FUN_1051d600(void)

{
  return 0;
}


// ==== 1051d610 FUN_1051d610

undefined4 FUN_1051d610(void)

{
  int in_ECX;
  
  FArray::Empty((FArray *)(in_ECX + 0xd8),1,0);
  FArray::Add((FArray *)(in_ECX + 0xd8),0x10000,1);
  return 1;
}


// ==== 1051d6a0 FUN_1051d6a0

undefined4 FUN_1051d6a0(undefined4 param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int in_ECX;
  
  iVar1 = *(int *)(*(int *)(in_ECX + 4) + 0xdc);
  iVar2 = (**(code **)(*param_2 + 0x10))();
  if (iVar1 < iVar2) {
    iVar1 = *(int *)(*(int *)(in_ECX + 4) + 0xdc);
    iVar2 = (**(code **)(*param_2 + 0x10))();
    FArray::Add((FArray *)(*(int *)(in_ECX + 4) + 0xd8),iVar2 - iVar1,1);
    if (*(int *)GLog_exref != 0) {
      FOutputDevice::Logf2(*(FOutputDevice **)(in_ECX + 4),*(ushort **)GLog_exref);
    }
  }
  (**(code **)(*param_2 + 0x20))(*(undefined4 *)(*(int *)(in_ECX + 4) + 0xd8));
  return 0;
}


// ==== 1051d750 FUN_1051d750

void FUN_1051d750(void)

{
  UObject *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_10819146;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)in_ECX = UNullRenderDevice::vftable_for_UObject_;
  *(undefined ***)(in_ECX + 0x34) = UNullRenderDevice::vftable_for_FExec_;
  local_4 = 1;
  UObject::ConditionalDestroy(in_ECX);
  local_4 = local_4 & 0xffffff00;
  TArray<unsigned_char>::~TArray<unsigned_char>((TArray<unsigned_char> *)(in_ECX + 0xd8));
  local_4 = 0xffffffff;
  URenderDevice::~URenderDevice((URenderDevice *)in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 1051d7d0 FUN_1051d7d0

void FUN_1051d7d0(void)

{
  URenderDevice *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1081917f;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  URenderDevice::URenderDevice(in_ECX);
  local_4 = 0;
  *(undefined ***)in_ECX = UNullRenderDevice::vftable_for_UObject_;
  *(undefined ***)(in_ECX + 0x34) = UNullRenderDevice::vftable_for_FExec_;
  *(undefined ***)(in_ECX + 0xcc) = FNullRenderInterface::vftable;
  *(URenderDevice **)(in_ECX + 0xd0) = in_ECX;
  FArray::FArray((FArray *)(in_ECX + 0xd8));
  *(undefined4 *)(in_ECX + 0xe4) = 1;
  *(undefined4 *)(in_ECX + 0xe8) = 0;
  *(undefined4 *)(in_ECX + 0xec) = 0;
  *(undefined4 *)(in_ECX + 0xf0) = 0;
  ExceptionList = local_c;
  return;
}


// ==== 1051d890 FUN_1051d890

void FUN_1051d890(URenderDevice *param_1)

{
  URenderDevice *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_108191b6;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  URenderDevice::URenderDevice(in_ECX,param_1);
  local_4 = 0;
  *(undefined ***)in_ECX = UNullRenderDevice::vftable_for_UObject_;
  *(undefined ***)(in_ECX + 0x34) = UNullRenderDevice::vftable_for_FExec_;
  *(undefined ***)(in_ECX + 0xcc) = FNullRenderInterface::vftable;
  *(undefined4 *)(in_ECX + 0xd0) = *(undefined4 *)(param_1 + 0xd0);
  *(undefined4 *)(in_ECX + 0xd4) = *(undefined4 *)(param_1 + 0xd4);
  TArray<unsigned_char>::TArray<unsigned_char>
            ((TArray<unsigned_char> *)(in_ECX + 0xd8),(TArray<unsigned_char> *)(param_1 + 0xd8));
  *(undefined4 *)(in_ECX + 0xe4) = *(undefined4 *)(param_1 + 0xe4);
  *(undefined4 *)(in_ECX + 0xe8) = *(undefined4 *)(param_1 + 0xe8);
  *(undefined4 *)(in_ECX + 0xec) = *(undefined4 *)(param_1 + 0xec);
  *(undefined4 *)(in_ECX + 0xf0) = *(undefined4 *)(param_1 + 0xf0);
  ExceptionList = local_c;
  return;
}


// ==== 1051d980 FUN_1051d980

void FUN_1051d980(URenderDevice *param_1)

{
  URenderDevice *in_ECX;
  
  URenderDevice::operator=(in_ECX,param_1);
  *(undefined4 *)(in_ECX + 0xd0) = *(undefined4 *)(param_1 + 0xd0);
  *(undefined4 *)(in_ECX + 0xd4) = *(undefined4 *)(param_1 + 0xd4);
  TArray<unsigned_char>::operator=
            ((TArray<unsigned_char> *)(in_ECX + 0xd8),(TArray<unsigned_char> *)(param_1 + 0xd8));
  *(undefined4 *)(in_ECX + 0xe4) = *(undefined4 *)(param_1 + 0xe4);
  *(undefined4 *)(in_ECX + 0xe8) = *(undefined4 *)(param_1 + 0xe8);
  *(undefined4 *)(in_ECX + 0xec) = *(undefined4 *)(param_1 + 0xec);
  *(undefined4 *)(in_ECX + 0xf0) = *(undefined4 *)(param_1 + 0xf0);
  return;
}


// ==== 1051da10 FUN_1051da10

void FUN_1051da10(byte param_1)

{
  UNullRenderDevice *in_ECX;
  
  UNullRenderDevice::~UNullRenderDevice(in_ECX);
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0xf4);
  }
  return;
}


// ==== 1051da40 FUN_1051da40

UNullRenderDevice * FUN_1051da40(byte param_1)

{
  UNullRenderDevice *in_ECX;
  
  if ((param_1 & 2) != 0) {
    _eh_vector_destructor_iterator_
              (in_ECX,0xf4,*(int *)(in_ECX + -4),UNullRenderDevice::~UNullRenderDevice);
    if ((param_1 & 1) != 0) {
      (**(code **)(**(int **)GMalloc_exref + 8))(in_ECX + -4);
    }
    return in_ECX + -4;
  }
  UNullRenderDevice::~UNullRenderDevice(in_ECX);
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0xf4);
  }
  return in_ECX;
}


// ==== 1051dac0 FUN_1051dac0

void FUN_1051dac0(UNullRenderDevice *param_1)

{
  if (param_1 != (UNullRenderDevice *)0x0) {
    UNullRenderDevice::UNullRenderDevice(param_1);
    return;
  }
  return;
}


// ==== 1051dae0 FUN_1051dae0

void FUN_1051dae0(undefined4 param_1)

{
  undefined4 *puVar1;
  undefined4 *in_ECX;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  *in_ECX = FNViewShake::vftable;
  FRotator::FRotator((FRotator *)(in_ECX + 0x1e));
  in_ECX[3] = 0;
  in_ECX[1] = param_1;
  in_ECX[0x14] = 0;
  in_ECX[0x15] = 0;
  local_c = 0;
  local_8 = 0;
  in_ECX[0x1b] = 0;
  in_ECX[0x16] = 0;
  local_4 = 0;
  in_ECX[0x13] = 0;
  in_ECX[0x1c] = 0;
  in_ECX[0xf] = 0;
  in_ECX[0x10] = 0;
  in_ECX[0x1d] = 0;
  in_ECX[0x11] = 0;
  *(undefined1 *)(in_ECX + 2) = 0;
  in_ECX[0x12] = 0;
  puVar1 = (undefined4 *)FRotator::FRotator((FRotator *)&local_c,0,0,0);
  in_ECX[0x1e] = *puVar1;
  in_ECX[0x1f] = puVar1[1];
  in_ECX[0x20] = puVar1[2];
  in_ECX[0x22] = 0;
  in_ECX[0xc] = 0;
  in_ECX[0xd] = 0;
  in_ECX[0xe] = 0;
  in_ECX[0x23] = 0;
  in_ECX[0x24] = 0;
  in_ECX[0x25] = 0;
  return;
}


// ==== 1051dc40 FUN_1051dc40

void FUN_1051dc40(undefined1 param_1,undefined4 param_2)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 0xc) = param_2;
  *(undefined1 *)(in_ECX + 8) = param_1;
  return;
}


// ==== 1051dc60 FUN_1051dc60

undefined4 FUN_1051dc60(float *param_1,float *param_2,float *param_3,float *param_4)

{
  char cVar1;
  float fVar2;
  int in_ECX;
  
  if (*param_1 <= 0.0) {
    if (*param_1 < *param_2) {
      return 0;
    }
  }
  else if (*param_2 < *param_1) {
    return 0;
  }
  *param_2 = *param_1;
  if (*param_4 <= 1.0) {
    *param_1 = 0.0;
    *param_2 = 0.0;
    *param_3 = 0.0;
    return 0;
  }
  if (*param_1 <= 0.0) {
    fVar2 = *param_1 * -1.0;
  }
  else {
    cVar1 = *(char *)(in_ECX + 8);
    if (cVar1 == '\0') {
      fVar2 = (1.0 / ((float)*(int *)(in_ECX + 0x2c) - *param_4) - 1.0) * *param_1;
    }
    else if (cVar1 == '\x04') {
      fVar2 = (1.0 / *param_4 - 1.0) * *param_1;
    }
    else {
      if ((cVar1 != '\x03') && (cVar1 != '\x05')) goto LAB_1051dd25;
      fVar2 = *param_1 * -1.1;
    }
  }
  *param_1 = fVar2;
LAB_1051dd25:
  *param_4 = *param_4 - 1.0;
  *param_3 = *param_3 * -1.0;
  return 1;
}


// ==== 1051dd63 Catch@1051dd63

void Catch_1051dd63(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 1051dd77 Catch@1051dd77

void Catch_1051dd77(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"FNViewShake::CheckShake");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1051de10 FUN_1051de10

void FUN_1051de10(void)

{
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_108191e9;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 1051dee0 FUN_1051dee0

undefined4 FUN_1051dee0(float param_1)

{
  FNViewShake FVar1;
  short sVar2;
  short sVar3;
  int iVar4;
  undefined4 uVar5;
  FNViewShake *in_ECX;
  float10 extraout_ST0;
  float10 fVar6;
  float fVar7;
  undefined4 *puVar8;
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
  float local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10819200;
  local_10 = ExceptionList;
  local_14 = &stack0xffffff98;
  local_8 = 0;
  local_2c = 0;
  local_28 = 0;
  local_24 = 0;
  ExceptionList = &local_10;
  FRotator::FRotator((FRotator *)&local_38,0,0,0);
  if ((param_1 == 0.0) || (*(float *)(in_ECX + 0xc) == 0.0)) {
    ExceptionList = local_10;
    return 0;
  }
  local_18 = *(float *)(in_ECX + 0xc) - param_1;
  *(float *)(in_ECX + 0xc) = local_18;
  if (local_18 < 0.0001 != (local_18 == 0.0001)) {
    ExceptionList = local_10;
    return 0;
  }
  local_44 = 0;
  local_40 = 0;
  local_3c = 0;
  iVar4 = FVector::operator==((FVector *)(in_ECX + 0x50),(FVector *)&local_44);
  if ((iVar4 != 0) && (*(float *)(in_ECX + 0x4c) == 0.0)) {
    ExceptionList = local_10;
    return 0;
  }
  local_50 = 0;
  local_4c = 0;
  local_48 = 0;
  iVar4 = FVector::operator==((FVector *)(in_ECX + 0x60),(FVector *)&local_50);
  if ((iVar4 != 0) && (*(float *)(in_ECX + 0x5c) == 0.0)) {
    ExceptionList = local_10;
    return 0;
  }
  local_5c = 0;
  local_58 = 0;
  local_54 = 0;
  iVar4 = FVector::operator==((FVector *)(in_ECX + 0x40),(FVector *)&local_5c);
  if ((iVar4 != 0) && (*(float *)(in_ECX + 0x3c) == 0.0)) {
    ExceptionList = local_10;
    return 0;
  }
  if (*(float *)(in_ECX + 0x4c) == 0.0) goto LAB_1051e14e;
  local_18 = 0.0;
  sVar2 = FUN_107a6660();
  sVar3 = FUN_107a6660();
  fVar7 = (float)(ushort)(sVar3 + sVar2);
  *(float *)(in_ECX + 0x88) = fVar7;
  if (32768.0 < fVar7) {
    *(float *)(in_ECX + 0x88) = fVar7 - 65536.0;
  }
  local_18 = *(float *)(in_ECX + 0x88);
  FVar1 = in_ECX[8];
  if ((FVar1 == (FNViewShake)0x0) || (FVar1 == (FNViewShake)0x4)) {
    fVar7 = *(float *)(in_ECX + 0x1c);
LAB_1051e0d8:
    FNViewShake::CheckShake
              (in_ECX,(float *)(in_ECX + 0x3c),&local_18,(float *)(in_ECX + 0x4c),
               (float *)(in_ECX + 0x5c),fVar7);
  }
  else {
    if (FVar1 == (FNViewShake)0x3) {
      fVar7 = *(float *)(in_ECX + 0x1c);
      goto LAB_1051e0d8;
    }
    if (FVar1 == (FNViewShake)0x5) {
      if (*(float *)(in_ECX + 0x98) < *(float *)(in_ECX + 0x3c)) {
        in_ECX[8] = (FNViewShake)0x4;
        *(float *)(in_ECX + 0x3c) = *(float *)(in_ECX + 0x98);
        uVar5 = FUN_107a6660();
        *(undefined4 *)(in_ECX + 0x2c) = uVar5;
      }
      fVar7 = *(float *)(in_ECX + 0x1c);
      goto LAB_1051e0d8;
    }
  }
  *(float *)(in_ECX + 0x88) = local_18;
  puVar8 = &local_5c;
  FVector::SafeNormal((FVector *)(in_ECX + 0x30));
  fVar6 = (float10)0;
  if (fVar6 != (float10)*(float *)(in_ECX + 0x30)) {
    local_34 = FUN_107a6660(puVar8);
    fVar6 = extraout_ST0;
  }
  if (fVar6 != (float10)*(float *)(in_ECX + 0x34)) {
    local_38 = FUN_107a6660(puVar8);
  }
LAB_1051e14e:
  *(undefined4 *)(in_ECX + 0x6c) = local_2c;
  *(undefined4 *)(in_ECX + 0x70) = local_28;
  *(undefined4 *)(in_ECX + 0x74) = local_24;
  *(undefined4 *)(in_ECX + 0x78) = local_38;
  *(undefined4 *)(in_ECX + 0x7c) = local_34;
  *(undefined4 *)(in_ECX + 0x80) = local_30;
  ExceptionList = local_10;
  return 1;
}


// ==== 1051e1a8 Catch@1051e1a8

void Catch_1051e1a8(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_10914c48);
}


// ==== 1051e1bc Catch@1051e1bc

void Catch_1051e1bc(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"FNViewShake::Update");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1051e2a0 FUN_1051e2a0

undefined4 FUN_1051e2a0(float param_1)

{
  float *pfVar1;
  undefined4 uVar2;
  int iVar3;
  int in_ECX;
  float local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10819210;
  local_10 = ExceptionList;
  local_8 = 0;
  if ((*(int *)(in_ECX + 4) != 0) && (param_1 != 0.0)) {
    local_18 = 0.0;
    iVar3 = *(int *)(in_ECX + 0x3c) * 4;
    pfVar1 = (float *)(*(int *)(in_ECX + 0x1c) + iVar3);
    ExceptionList = &local_10;
    if (*pfVar1 < *(float *)(in_ECX + 0xc)) {
      local_18 = *(float *)(in_ECX + 0xc) - *pfVar1;
      ExceptionList = &local_10;
      *(undefined4 *)(in_ECX + 0xc) = 0;
    }
    if (*(float *)(in_ECX + 0xc) == 0.0) {
      uVar2 = *(undefined4 *)(iVar3 + *(int *)(in_ECX + 0x10));
      FArray::Insert((FArray *)(*(int *)(in_ECX + 4) + 0xa30),0,1,4);
      **(undefined4 **)(*(int *)(in_ECX + 4) + 0xa30) = uVar2;
      *(int *)(in_ECX + 0x3c) = *(int *)(in_ECX + 0x3c) + 1;
      if (*(int *)(in_ECX + 0x14) + -1 < *(int *)(in_ECX + 0x3c)) {
        ExceptionList = local_10;
        return 0;
      }
    }
    *(float *)(in_ECX + 0xc) = local_18 + param_1 + *(float *)(in_ECX + 0xc);
    ExceptionList = local_10;
    return 1;
  }
  return 0;
}


// ==== 1051e391 Catch@1051e391

void Catch_1051e391(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_10914c48);
}


// ==== 1051e3a5 Catch@1051e3a5

void Catch_1051e3a5(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"FNViewShakeMgr::Update");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1051e410 FUN_1051e410

void FUN_1051e410(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4,float param_5
                 ,float param_6)

{
  FVector *this;
  float *pfVar1;
  int iVar2;
  FNViewShake *this_00;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  int in_ECX;
  float10 fVar7;
  float fVar8;
  float fVar9;
  undefined1 *puVar10;
  undefined1 local_c8 [12];
  float local_bc;
  undefined1 local_b0 [16];
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  float local_88;
  float local_84;
  float local_80;
  float local_7c;
  float local_78;
  float local_74;
  undefined1 *local_70;
  void *local_6c;
  undefined1 *puStack_68;
  int local_64;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  undefined4 local_4c;
  float local_44;
  float local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  int local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  
  puStack_68 = &LAB_1081922b;
  local_6c = ExceptionList;
  local_70 = &stack0xffffff08;
  local_64 = 0;
  if (*(int *)(in_ECX + 4) != 0) {
    this = (FVector *)(in_ECX + 0x30);
    ExceptionList = &local_6c;
    *(undefined4 *)this = param_1;
    *(undefined4 *)(in_ECX + 0x34) = param_2;
    *(undefined4 *)(in_ECX + 0x38) = param_3;
    *(float *)(in_ECX + 8) = (float)(int)param_5;
    *(float *)(in_ECX + 0x28) = (float)((int)param_6 << 0xf);
    *(int *)(in_ECX + 0x2c) = param_4;
    iVar2 = FUN_107a6660();
    for (local_20 = 0; local_20 < iVar2; local_20 = local_20 + 1) {
      param_6 = (float)param_4;
      local_2c = 0;
      local_28 = 0;
      local_24 = 0;
      fVar8 = appFrand();
      fVar8 = (fVar8 + fVar8) - 1.0;
      fVar9 = appFrand();
      local_50 = (fVar9 + fVar9) - 1.0;
      local_4c = 0;
      local_14 = 0.0;
      puVar10 = local_c8;
      local_54 = fVar8;
      local_1c = fVar8;
      local_18 = local_50;
      local_8 = local_50;
      FVector::SafeNormal((FVector *)&local_1c);
      fVar7 = (float10)FUN_107a7c00(puVar10);
      local_44 = local_1c / (float)fVar7;
      local_40 = local_18 / (float)fVar7;
      local_3c = 0;
      local_14 = 0.0;
      local_1c = local_44;
      local_18 = local_40;
      local_8 = local_40;
      this_00 = (FNViewShake *)thunk_FUN_1032ffc0(0x9c);
      local_64._0_1_ = 1;
      if (this_00 == (FNViewShake *)0x0) {
        iVar3 = 0;
      }
      else {
        iVar3 = FNViewShake::FNViewShake(this_00,*(AActor **)(in_ECX + 4));
      }
      local_64 = (uint)local_64._1_3_ << 8;
      *(undefined1 *)(iVar3 + 8) = 2;
      *(undefined4 *)(iVar3 + 0xc) = 0x40a00000;
      local_94 = 0;
      local_90 = 0;
      local_8c = 0;
      iVar4 = FVector::operator!=(this,(FVector *)&local_94);
      if (iVar4 != 0) {
        thunk_FUN_10373830(*(int *)(in_ECX + 4) + 0x1bc,this);
        fVar7 = (float10)FUN_107a7cfc();
        local_8 = (float)fVar7;
        fVar7 = (float10)FUN_107a7cfc();
        param_6 = (2.0 / ((float)fVar7 + local_8)) * param_6;
      }
      local_38 = 0x42b40000;
      local_34 = 0x42b40000;
      local_30 = 0;
      local_2c = 0x42b40000;
      local_28 = 0x42b40000;
      local_24 = 0;
      param_5 = 90.0;
      if (1.0 / *(float *)(DAT_10c51044 + 0x254) < 30.0) {
        local_a0 = 0x42b40000;
        local_9c = 0x42b40000;
        local_98 = 0;
        puVar5 = (undefined4 *)
                 thunk_FUN_103301a0(local_b0,(1.0 / *(float *)(DAT_10c51044 + 0x254)) / 30.0,
                                    &local_a0);
        local_2c = *puVar5;
        local_28 = puVar5[1];
        local_24 = puVar5[2];
        param_5 = ((1.0 / *(float *)(DAT_10c51044 + 0x254)) / 30.0) * 90.0;
      }
      *(undefined4 *)(iVar3 + 0x60) = local_2c;
      *(undefined4 *)(iVar3 + 100) = local_28;
      *(undefined4 *)(iVar3 + 0x68) = local_24;
      local_60 = local_1c * 100.0;
      local_5c = local_18 * 100.0;
      local_58 = local_14 * 100.0;
      *(float *)(iVar3 + 0x50) = local_60;
      *(float *)(iVar3 + 0x54) = local_5c;
      *(float *)(iVar3 + 0x58) = local_58;
      local_bc = local_1c;
      local_8 = local_14 * 0.1;
      local_88 = param_6 * local_1c * 0.1;
      local_84 = local_18 * 0.1 * param_6;
      local_80 = local_8 * param_6;
      *(float *)(iVar3 + 0x40) = local_88;
      *(float *)(iVar3 + 0x44) = local_84;
      *(float *)(iVar3 + 0x48) = local_80;
      *(float *)(iVar3 + 0x5c) = param_5;
      *(float *)(iVar3 + 0x4c) = (float)*(int *)(in_ECX + 0x2c) * 15.0;
      *(float *)(iVar3 + 0x3c) = param_6;
      *(undefined4 *)(iVar3 + 0x10) = *(undefined4 *)this;
      *(undefined4 *)(iVar3 + 0x14) = *(undefined4 *)(in_ECX + 0x34);
      *(undefined4 *)(iVar3 + 0x18) = *(undefined4 *)(in_ECX + 0x38);
      local_7c = local_1c * 0.1;
      local_78 = local_18 * 0.1;
      local_74 = local_14 * 0.1;
      *(float *)(iVar3 + 0x30) = local_7c;
      *(float *)(iVar3 + 0x34) = local_78;
      *(float *)(iVar3 + 0x38) = local_74;
      *(undefined4 *)(iVar3 + 0x1c) = *(undefined4 *)(iVar3 + 0x3c);
      *(undefined4 *)(iVar3 + 0x20) = *(undefined4 *)(iVar3 + 0x40);
      *(undefined4 *)(iVar3 + 0x24) = *(undefined4 *)(iVar3 + 0x44);
      *(undefined4 *)(iVar3 + 0x28) = *(undefined4 *)(iVar3 + 0x48);
      local_10 = local_80;
      local_c = local_74;
      fVar8 = FVector::GetMax((FVector *)&local_2c);
      thunk_FUN_104a4940(fVar8,param_5);
      uVar6 = FUN_107a6660();
      *(undefined4 *)(iVar3 + 0x2c) = uVar6;
      FArray::Insert((FArray *)(in_ECX + 0x10),0,1,4);
      **(int **)(in_ECX + 0x10) = iVar3;
      FArray::Insert((FArray *)(in_ECX + 0x1c),0,1,4);
      pfVar1 = *(float **)(in_ECX + 0x1c);
      fVar8 = appFrand();
      *pfVar1 = fVar8 + 1.0;
    }
  }
  ExceptionList = local_6c;
  return;
}


// ==== 1051e8ae Catch@1051e8ae

void Catch_1051e8ae(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + 0x18) = *(undefined4 *)(unaff_EBP + -0x44);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + 0x18,&DAT_10914c48);
}


// ==== 1051e8c2 Catch@1051e8c2

void Catch_1051e8c2(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"FNViewShakeMgr::Init");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1051ea20 FUN_1051ea20

void FUN_1051ea20(undefined4 param_1)

{
  undefined4 *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10819268;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *in_ECX = FNViewShakeMgr::vftable;
  FArray::FArray((FArray *)(in_ECX + 4));
  local_4 = 1;
  FArray::FArray((FArray *)(in_ECX + 7));
  local_4 = CONCAT31(local_4._1_3_,3);
  in_ECX[3] = 0;
  in_ECX[2] = 0;
  in_ECX[1] = param_1;
  in_ECX[0xf] = 0;
  FArray::Empty((FArray *)(in_ECX + 7),4,0);
  FArray::Empty((FArray *)(in_ECX + 4),4,0);
  ExceptionList = local_c;
  return;
}


// ==== 1051eaf0 FUN_1051eaf0

void FUN_1051eaf0(void)

{
  undefined4 *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_10819296;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *in_ECX = FNViewShakeMgr::vftable;
  local_4 = 1;
  FArray::Empty((FArray *)(in_ECX + 4),4,0);
  local_4 = local_4 & 0xffffff00;
  thunk_FUN_1038fce0();
  local_4 = 0xffffffff;
  thunk_FUN_10392a50();
  ExceptionList = local_c;
  return;
}


// ==== 1051eb80 FUN_1051eb80

int FUN_1051eb80(void)

{
  int in_ECX;
  
  return in_ECX + 0x55c;
}


// ==== 1051ebbf Catch@1051ebbf

void Catch_1051ebbf(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 1051ebd3 Catch@1051ebd3

void Catch_1051ebd3(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"UOrcMove::GetResultVariable");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1051ec10 FUN_1051ec10

void FUN_1051ec10(undefined4 param_1)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 0x59c) = param_1;
  return;
}


// ==== 1051ec5b Catch@1051ec5b

void Catch_1051ec5b(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 1051ec6f Catch@1051ec6f

void Catch_1051ec6f(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"UOrcMove::SetLocalCRC");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1051ecb0 FUN_1051ecb0

undefined4 FUN_1051ecb0(void)

{
  int in_ECX;
  
  return *(undefined4 *)(in_ECX + 0x59c);
}


// ==== 1051ecef Catch@1051ecef

void Catch_1051ecef(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 1051ed03 Catch@1051ed03

void Catch_1051ed03(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"UOrcMove::GetLocalCRC");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1051ed50 FUN_1051ed50

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

void FUN_1051ed50(void)

{
  UObject *this;
  void *pvVar1;
  int iVar2;
  undefined1 auStack_78040 [491520];
  FStaticTexture local_40 [24];
  int local_28;
  int local_24;
  int local_20;
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_108192f0;
  local_10 = ExceptionList;
  local_18 = 0x1051ed73;
  local_14 = &stack0xfff87fb4;
  iVar2 = 0;
  local_8 = 0;
  ExceptionList = &local_10;
  thunk_FUN_1043c5c0();
  local_8._0_1_ = 1;
  do {
    local_20 = iVar2;
    if (0xe < iVar2) {
      thunk_FUN_1043c780(auStack_78040,0x78000,local_28 + 0x59c);
      local_8 = (uint)local_8._1_3_ << 8;
      thunk_FUN_1043c5d0();
      ExceptionList = local_10;
      return;
    }
    this = UObject::StaticFindObject
                     (&UTexture::PrivateStaticClass,(UObject *)0xffffffff,
                      (ushort *)(L"LineageMonstersTex.Death_Knight_T00" + iVar2 * 100),0);
    if (this == (UObject *)0x0) {
      this = UObject::StaticLoadObject
                       (&UTexture::PrivateStaticClass,(UObject *)0x0,
                        (ushort *)(L"LineageMonstersTex.Death_Knight_T00" + iVar2 * 100),
                        (ushort *)0x0,0,(UPackageMap *)0x0);
      if (this != (UObject *)0x0) goto LAB_1051edda;
    }
    else {
LAB_1051edda:
      UObject::SetFlags(this,0x4000000);
    }
    (*(code *)**(undefined4 **)(*(int *)(this + 0x5f0) + 0x10))();
    FStaticTexture::FStaticTexture(local_40,(UTexture *)this);
    local_8._0_1_ = 2;
    pvVar1 = FStaticTexture::GetRawTextureData(local_40,0);
    for (local_24 = 0; local_24 < 0x8000; local_24 = local_24 + 1) {
      auStack_78040[iVar2 * 0x8000 + local_24] = *(undefined1 *)(local_24 + (int)pvVar1);
    }
    local_8._0_1_ = 1;
    FStaticTexture::~FStaticTexture(local_40);
    iVar2 = iVar2 + 1;
  } while( true );
}


// ==== 1051ee89 Catch@1051ee89

void Catch_1051ee89(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x28);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_10914c48);
}


// ==== 1051ee9d Catch@1051ee9d

void Catch_1051ee9d(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"UOrcMove::CalculateCRC32");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1051ef20 FUN_1051ef20

void FUN_1051ef20(int param_1)

{
  byte *pbVar1;
  undefined4 uVar2;
  UObject *pUVar3;
  void *pvVar4;
  int iVar5;
  int in_ECX;
  uint local_70;
  uint local_6c;
  uint local_68;
  uint local_64;
  uint local_60;
  uint local_5c;
  uint local_58;
  uint local_54;
  FStaticTexture local_50 [4];
  uint local_4c;
  uint local_48;
  uint local_44;
  uint local_40;
  uint local_3c;
  uint local_38;
  uint local_34;
  uint local_30;
  uint local_2c;
  uint local_28;
  int local_1c;
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_10819310;
  local_10 = ExceptionList;
  local_14 = &stack0xffffff84;
  local_8 = 0;
  local_18 = 0;
  local_54 = 0;
  local_60 = 0;
  local_5c = 0;
  local_58 = 0;
  local_40 = 0;
  local_4c = 0;
  local_48 = 0;
  local_44 = 0;
  ExceptionList = &local_10;
  for (local_1c = 0; local_1c < 0x40; local_1c = local_1c + 1) {
    *(undefined1 *)(local_1c + 0x51c + in_ECX) = *(undefined1 *)(local_1c + param_1);
  }
  thunk_FUN_1051fd30();
  uVar2 = thunk_FUN_1051f670(&local_30);
  thunk_FUN_10367fe0(uVar2);
  uVar2 = thunk_FUN_1051f6a0(&local_48);
  thunk_FUN_10367fe0(uVar2);
  if (0xe < local_3c) {
    ExceptionList = local_10;
    return;
  }
  if (0xe < local_30) {
    ExceptionList = local_10;
    return;
  }
  pUVar3 = UObject::StaticFindObject
                     (&UTexture::PrivateStaticClass,(UObject *)0xffffffff,
                      (ushort *)(L"LineageMonstersTex.Death_Knight_T00" + local_3c * 100),0);
  if ((pUVar3 != (UObject *)0x0) ||
     (pUVar3 = UObject::StaticLoadObject
                         (&UTexture::PrivateStaticClass,(UObject *)0x0,
                          (ushort *)(L"LineageMonstersTex.Death_Knight_T00" + local_3c * 100),
                          (ushort *)0x0,0,(UPackageMap *)0x0), pUVar3 != (UObject *)0x0)) {
    UObject::SetFlags(pUVar3,0x4000000);
  }
  (*(code *)**(undefined4 **)(*(int *)(pUVar3 + 0x5f0) + 0x10))();
  FStaticTexture::FStaticTexture(local_50,(UTexture *)pUVar3);
  local_8._0_1_ = 1;
  pvVar4 = FStaticTexture::GetRawTextureData(local_50,0);
  local_8 = (uint)local_8._1_3_ << 8;
  FStaticTexture::~FStaticTexture(local_50);
  if ((local_38 < 0x80) && (local_34 < 0x40)) {
    pbVar1 = (byte *)((int)pvVar4 + (local_38 * 0x40 + local_34) * 4);
    local_54 = (uint)*pbVar1;
    local_60 = (uint)pbVar1[1];
    local_5c = (uint)pbVar1[2];
    local_58 = (uint)pbVar1[3];
  }
  else {
    local_18 = 1;
  }
  pUVar3 = UObject::StaticFindObject
                     (&UTexture::PrivateStaticClass,(UObject *)0xffffffff,
                      (ushort *)(L"LineageMonstersTex.Death_Knight_T00" + local_30 * 100),0);
  if ((pUVar3 != (UObject *)0x0) ||
     (pUVar3 = UObject::StaticLoadObject
                         (&UTexture::PrivateStaticClass,(UObject *)0x0,
                          (ushort *)(L"LineageMonstersTex.Death_Knight_T00" + local_30 * 100),
                          (ushort *)0x0,0,(UPackageMap *)0x0), pUVar3 != (UObject *)0x0)) {
    UObject::SetFlags(pUVar3,0x4000000);
  }
  (*(code *)**(undefined4 **)(*(int *)(pUVar3 + 0x5f0) + 0x10))();
  FStaticTexture::FStaticTexture(local_50,(UTexture *)pUVar3);
  local_8._0_1_ = 2;
  pvVar4 = FStaticTexture::GetRawTextureData(local_50,0);
  local_8 = (uint)local_8._1_3_ << 8;
  FStaticTexture::~FStaticTexture(local_50);
  if ((local_2c < 0x80) && (local_28 < 0x40)) {
    pbVar1 = (byte *)((int)pvVar4 + (local_2c * 0x40 + local_28) * 4);
    local_40 = (uint)*pbVar1;
    local_4c = (uint)pbVar1[1];
    local_48 = (uint)pbVar1[2];
    local_44 = (uint)pbVar1[3];
    if (local_18 != 1) {
      local_64 = local_40 ^ local_54;
      local_70 = local_4c ^ local_60;
      local_6c = local_48 ^ local_5c;
      local_68 = local_44 ^ local_58;
      goto LAB_1051f191;
    }
  }
  iVar5 = thunk_FUN_1051f2b0();
  local_64 = iVar5 + 1000;
  iVar5 = thunk_FUN_1051f2b0();
  local_70 = iVar5 + 1000;
  iVar5 = thunk_FUN_1051f2b0();
  local_6c = iVar5 + 1000;
  iVar5 = thunk_FUN_1051f2b0();
  local_68 = iVar5 + 1000;
LAB_1051f191:
  thunk_FUN_1051fb50(&local_70);
  ExceptionList = local_10;
  return;
}


// ==== 1051f1ba Catch@1051f1ba

void Catch_1051f1ba(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x1c) = *(undefined4 *)(unaff_EBP + -0x20);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x1c,&DAT_10914c48);
}


// ==== 1051f1ce Catch@1051f1ce

void Catch_1051f1ce(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"UOrcMove::CalSearchOrc");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1051f2b0 FUN_1051f2b0

undefined4 FUN_1051f2b0(void)

{
  int in_ECX;
  
  return *(undefined4 *)(in_ECX + 0x2c);
}


// ==== 1051f2c0 FUN_1051f2c0

undefined4 FUN_1051f2c0(uint param_1)

{
  int iVar1;
  int in_ECX;
  
  iVar1 = 0;
  do {
    if (((&DAT_108ae4d0)[iVar1] & param_1) != 0) {
      return *(undefined4 *)(&DAT_108ae460 + (iVar1 + (*(uint *)(in_ECX + 0x2c) & 3) * 4) * 4);
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 4);
  return *(undefined4 *)(&DAT_108ae460 + (*(uint *)(in_ECX + 0x2c) & 3) * 0x10);
}


// ==== 1051f320 FUN_1051f320

void FUN_1051f320(void)

{
  uint uVar1;
  uint uVar2;
  int in_ECX;
  
  uVar1 = _rand();
  uVar2 = _rand();
  *(uint *)(in_ECX + 0x28) = (&DAT_108ae4d0)[uVar2 & 3] | uVar1 & 0xffffebd7;
  return;
}


// ==== 1051f360 FUN_1051f360

void FUN_1051f360(void)

{
  uint *puVar1;
  int in_ECX;
  int iVar2;
  int iVar3;
  
  iVar2 = 2;
  puVar1 = (uint *)(in_ECX + 0x4a8);
  iVar3 = 4;
  do {
    if (iVar2 != 0xb) {
      puVar1[-1] = puVar1[-1] ^ *(uint *)(in_ECX + 0x4c8);
    }
    if (iVar2 != 10) {
      *puVar1 = *puVar1 ^ *(uint *)(in_ECX + 0x4c8);
    }
    if (iVar2 != 9) {
      puVar1[1] = puVar1[1] ^ *(uint *)(in_ECX + 0x4c8);
    }
    if (iVar2 != 8) {
      puVar1[2] = puVar1[2] ^ *(uint *)(in_ECX + 0x4c8);
    }
    puVar1 = puVar1 + 4;
    iVar2 = iVar2 + 4;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  return;
}


// ==== 1051f420 FUN_1051f420

void FUN_1051f420(void)

{
  int in_ECX;
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10819320;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  thunk_FUN_10521b90(in_ECX + 0x4e4,(undefined4 *)(in_ECX + 0x524),0x40,1);
  puVar2 = (undefined4 *)(in_ECX + 0x524);
  puVar3 = (undefined4 *)(in_ECX + 0x4a4);
  for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  ExceptionList = local_10;
  return;
}


// ==== 1051f489 Catch@1051f489

void Catch_1051f489(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 1051f49d Catch@1051f49d

void Catch_1051f49d(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"QuestionAnswer::Decrypt");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1051f4e0 FUN_1051f4e0

void FUN_1051f4e0(void)

{
  int in_ECX;
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10819330;
  local_10 = ExceptionList;
  local_8 = 0;
  puVar2 = (undefined4 *)(in_ECX + 0x4a4);
  puVar3 = (undefined4 *)(in_ECX + 0x4e4);
  ExceptionList = &local_10;
  for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  thunk_FUN_10521990((undefined4 *)(in_ECX + 0x4e4),in_ECX + 0x524,0x40,1);
  ExceptionList = local_10;
  return;
}


// ==== 1051f54b Catch@1051f54b

void Catch_1051f54b(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 1051f55f Catch@1051f55f

void Catch_1051f55f(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"QuestionAnswer::Encrypt");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1051f5b0 FUN_1051f5b0

void FUN_1051f5b0(undefined4 *param_1)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 0x18) = *param_1;
  *(undefined4 *)(in_ECX + 0x1c) = param_1[1];
  *(undefined4 *)(in_ECX + 0x20) = param_1[2];
  *(undefined4 *)(in_ECX + 0x24) = param_1[3];
  return;
}


// ==== 1051f5e0 FUN_1051f5e0

void FUN_1051f5e0(void)

{
  int in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1081934b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined4 *)(in_ECX + 0x2c) = 0;
  thunk_FUN_105201f0();
  local_4 = 0;
  thunk_FUN_10520210(PTR_s_flslwl2rkWkddlwl_10b12ad0,PTR_s_mr_andersonwelcometotherealworld_10b12ad4
                     ,0x10,0x20);
  ExceptionList = local_c;
  return;
}


// ==== 1051f670 FUN_1051f670

void FUN_1051f670(undefined4 *param_1)

{
  undefined4 uVar1;
  int in_ECX;
  
  *param_1 = *(undefined4 *)(in_ECX + 0x4cc);
  uVar1 = *(undefined4 *)(in_ECX + 0x4a8);
  param_1[1] = *(undefined4 *)(in_ECX + 0x4a4);
  param_1[2] = uVar1;
  return;
}


// ==== 1051f6a0 FUN_1051f6a0

void FUN_1051f6a0(undefined4 *param_1)

{
  undefined4 uVar1;
  int in_ECX;
  
  *param_1 = *(undefined4 *)(in_ECX + 0x4d0);
  uVar1 = *(undefined4 *)(in_ECX + 0x4b0);
  param_1[1] = *(undefined4 *)(in_ECX + 0x4ac);
  param_1[2] = uVar1;
  return;
}


// ==== 1051f6d0 FUN_1051f6d0

void FUN_1051f6d0(undefined4 param_1,undefined4 param_2)

{
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10819360;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  _memset((void *)(in_ECX + 0x4a4),0,0x40);
  _memset((void *)(in_ECX + 0x4e4),0,0x40);
  _memset((void *)(in_ECX + 0x524),0,0x40);
  thunk_FUN_10367fe0(param_1);
  thunk_FUN_10367fe0(param_2);
  ExceptionList = local_10;
  return;
}


// ==== 1051f75e Catch@1051f75e

void Catch_1051f75e(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 1051f772 Catch@1051f772

void Catch_1051f772(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"QuestionAnswer::SetRequest");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1051f7c0 FUN_1051f7c0

void FUN_1051f7c0(void)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  undefined4 *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10819370;
  local_10 = ExceptionList;
  local_8 = 0;
  iVar1 = *(int *)(&DAT_108ae4a0 + (in_ECX[0xb] & 7) * 4);
  ExceptionList = &local_10;
  iVar4 = thunk_FUN_1051f320();
  uVar2 = *(uint *)(&DAT_108ae460 + (iVar4 + (in_ECX[0xb] & 3) * 4) * 4);
  in_ECX[0x129] = in_ECX[1];
  in_ECX[0x12a] = in_ECX[2];
  in_ECX[299] = in_ECX[4];
  in_ECX[300] = in_ECX[5];
  in_ECX[0x12d] = in_ECX[10];
  uVar5 = _rand();
  in_ECX[0x12e] = uVar5 & 0xff;
  uVar5 = _rand();
  in_ECX[0x12f] = uVar5 & 0xff;
  uVar5 = _rand();
  in_ECX[0x130] = uVar5 & 0xff;
  uVar5 = _rand();
  in_ECX[0x131] = uVar5 & 0xff;
  iVar4 = _rand();
  in_ECX[0x132] = iVar4;
  in_ECX[0x133] = *in_ECX;
  in_ECX[0x134] = in_ECX[3];
  iVar4 = _rand();
  in_ECX[0x135] = iVar4;
  iVar4 = _rand();
  in_ECX[0x136] = iVar4 % 0xf;
  iVar4 = _rand();
  in_ECX[0x137] = iVar4 % 0xf;
  iVar4 = _rand();
  in_ECX[0x138] = iVar4;
  for (uVar5 = 0; uVar5 < 4; uVar5 = uVar5 + 1) {
    if (((&DAT_108ae4c0)[uVar5] & uVar2) != 0) {
      uVar3 = in_ECX[uVar5 + 0x129];
      in_ECX[uVar5 + 0x129] = in_ECX[uVar5 + 0x12e];
      in_ECX[uVar5 + 0x12e] = uVar3;
      if ((uVar5 == 0) || (uVar5 == 1)) {
        uVar3 = in_ECX[uVar5 + 0x133];
        in_ECX[uVar5 + 0x133] = in_ECX[uVar5 + 0x136];
        in_ECX[uVar5 + 0x136] = uVar3;
      }
    }
  }
  uVar3 = in_ECX[0x12d];
  in_ECX[0x12d] = in_ECX[iVar1 + 0x129];
  in_ECX[iVar1 + 0x129] = uVar3;
  ExceptionList = local_10;
  return;
}


// ==== 1051f95c Catch@1051f95c

void Catch_1051f95c(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_10914c48);
}


// ==== 1051f970 Catch@1051f970

void Catch_1051f970(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"QuestionAnswer::Obfuscate");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1051fa00 FUN_1051fa00

void FUN_1051fa00(void)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  int in_ECX;
  uint uVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10819380;
  local_10 = ExceptionList;
  local_8 = 0;
  iVar1 = *(int *)(&DAT_108ae4a0 + (*(uint *)(in_ECX + 0x2c) & 7) * 4);
  uVar2 = *(undefined4 *)(in_ECX + 0x4b4);
  ExceptionList = &local_10;
  *(undefined4 *)(in_ECX + 0x4b4) = *(undefined4 *)(in_ECX + 0x4a4 + iVar1 * 4);
  *(undefined4 *)(in_ECX + 0x4a4 + iVar1 * 4) = uVar2;
  uVar3 = thunk_FUN_1051f2c0(*(undefined4 *)(in_ECX + 0x4b4));
  for (uVar4 = 0; uVar4 < 4; uVar4 = uVar4 + 1) {
    if (((&DAT_108ae4c0)[uVar4] & uVar3) != 0) {
      uVar2 = *(undefined4 *)(in_ECX + 0x4a4 + uVar4 * 4);
      *(undefined4 *)(in_ECX + 0x4a4 + uVar4 * 4) = *(undefined4 *)(in_ECX + 0x4b8 + uVar4 * 4);
      *(undefined4 *)(in_ECX + 0x4b8 + uVar4 * 4) = uVar2;
      if ((uVar4 == 0) || (uVar4 == 1)) {
        uVar2 = *(undefined4 *)(in_ECX + 0x4cc + uVar4 * 4);
        *(undefined4 *)(in_ECX + 0x4cc + uVar4 * 4) = *(undefined4 *)(in_ECX + 0x4d8 + uVar4 * 4);
        *(undefined4 *)(in_ECX + 0x4d8 + uVar4 * 4) = uVar2;
      }
    }
  }
  ExceptionList = local_10;
  return;
}


// ==== 1051fad0 Catch@1051fad0

void Catch_1051fad0(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_10914c48);
}


// ==== 1051fae4 Catch@1051fae4

void Catch_1051fae4(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"QuestionAnswer::Deobfuscate");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1051fb50 FUN_1051fb50

void FUN_1051fb50(undefined4 *param_1)

{
  int in_ECX;
  int local_34;
  undefined4 local_30;
  undefined4 local_2c;
  int local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10819390;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffc0;
  local_8 = 0;
  ExceptionList = &local_10;
  local_34 = _rand();
  local_34 = local_34 % 0xf;
  local_30 = *param_1;
  local_2c = param_1[1];
  local_28 = _rand();
  local_28 = local_28 % 0xf;
  local_24 = param_1[2];
  local_20 = param_1[3];
  thunk_FUN_1051f6d0(&local_34,&local_28);
  thunk_FUN_1051f7c0();
  thunk_FUN_1051f360();
  thunk_FUN_1051f4e0();
  *(int *)(in_ECX + 0x2c) = *(int *)(in_ECX + 0x2c) + 1;
  ExceptionList = local_10;
  return;
}


// ==== 1051fbf4 Catch@1051fbf4

void Catch_1051fbf4(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 1051fc08 Catch@1051fc08

void Catch_1051fc08(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"QuestionAnswer::MakeRequestQuery");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1051fc60 FUN_1051fc60

void FUN_1051fc60(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_108193a0;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  thunk_FUN_1051f6d0(param_1,param_2);
  thunk_FUN_1051f5b0(param_3);
  thunk_FUN_1051f7c0();
  thunk_FUN_1051f360();
  thunk_FUN_1051f4e0();
  *(int *)(in_ECX + 0x2c) = *(int *)(in_ECX + 0x2c) + 1;
  ExceptionList = local_10;
  return;
}


// ==== 1051fcd5 Catch@1051fcd5

void Catch_1051fcd5(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 1051fce9 Catch@1051fce9

void Catch_1051fce9(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"QuestionAnswer::MakeRequestQuery");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1051fd30 FUN_1051fd30

void FUN_1051fd30(void)

{
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_108193b0;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  thunk_FUN_1051f420();
  thunk_FUN_1051f360();
  thunk_FUN_1051fa00();
  *(int *)(in_ECX + 0x2c) = *(int *)(in_ECX + 0x2c) + 1;
  ExceptionList = local_10;
  return;
}


// ==== 1051fd87 Catch@1051fd87

void Catch_1051fd87(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 1051fd9b Catch@1051fd9b

void Catch_1051fd9b(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"QuestionAnswer::ResponseResultQuery");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1051fde0 FUN_1051fde0

void FUN_1051fde0(void)

{
  undefined1 *in_ECX;
  
  *in_ECX = 1;
  *(undefined4 *)(in_ECX + 4) = 0;
  return;
}


// ==== 1051fe00 FUN_1051fe00

undefined4 FUN_1051fe00(char *param_1,undefined4 param_2,SOCKET *param_3,short *param_4)

{
  short *psVar1;
  SOCKET s;
  int iVar2;
  ulong uVar3;
  hostent *phVar4;
  
  s = WSASocketW(2,3,1,0,0,0);
  *param_3 = s;
  if (s != 0xffffffff) {
    iVar2 = setsockopt(s,0,4,(char *)&param_2,4);
    psVar1 = param_4;
    if (iVar2 != -1) {
      param_4[0] = 0;
      param_4[1] = 0;
      param_4[2] = 0;
      param_4[3] = 0;
      param_4[4] = 0;
      param_4[5] = 0;
      param_4[6] = 0;
      param_4[7] = 0;
      uVar3 = inet_addr(param_1);
      if (uVar3 != 0xffffffff) {
        *(ulong *)(psVar1 + 2) = uVar3;
        *psVar1 = 2;
        return 0;
      }
      phVar4 = gethostbyname(param_1);
      if (phVar4 != (hostent *)0x0) {
        _memcpy(psVar1 + 2,*phVar4->h_addr_list,(int)phVar4->h_length);
        *psVar1 = phVar4->h_addrtype;
        return 0;
      }
      return 0xffffffff;
    }
  }
  return 0xffffffff;
}


// ==== 1051fed0 FUN_1051fed0

void FUN_1051fed0(undefined1 *param_1,int param_2,undefined2 param_3)

{
  undefined1 *puVar1;
  undefined2 uVar2;
  DWORD DVar3;
  size_t _Size;
  int in_ECX;
  undefined1 *_Dst;
  size_t sVar4;
  
  puVar1 = param_1;
  *param_1 = 8;
  param_1[1] = 0;
  *(undefined2 *)(param_1 + 2) = 0;
  DVar3 = GetCurrentProcessId();
  *(short *)(puVar1 + 4) = (short)DVar3;
  *(undefined2 *)(puVar1 + 6) = param_3;
  DVar3 = GetTickCount();
  *(DWORD *)(in_ECX + 4) = DVar3;
  param_1 = (undefined1 *)0xdeadbeef;
  _Dst = puVar1 + 8;
  for (sVar4 = param_2 - 8; 0 < (int)sVar4; sVar4 = sVar4 - 4) {
    _Size = 4;
    if ((int)sVar4 < 5) {
      _Size = sVar4;
    }
    _memcpy(_Dst,&param_1,_Size);
    _Dst = _Dst + 4;
  }
  uVar2 = thunk_FUN_1043d960(puVar1,param_2);
  *(undefined2 *)(puVar1 + 2) = uVar2;
  return;
}


// ==== 1051ff80 FUN_1051ff80

int FUN_1051ff80(SOCKET param_1,sockaddr *param_2,char *param_3,int param_4)

{
  int iVar1;
  
  iVar1 = sendto(param_1,param_3,param_4,0,param_2,0x10);
  return (iVar1 != -1) - 1;
}


// ==== 1051ffc0 FUN_1051ffc0

int FUN_1051ffc0(SOCKET param_1,sockaddr *param_2,char *param_3,int param_4)

{
  int iVar1;
  int local_4;
  
  local_4 = 0x10;
  iVar1 = recvfrom(param_1,param_3,param_4 + 0x14,0,param_2,&local_4);
  return (iVar1 != -1) - 1;
}


// ==== 10520010 FUN_10520010

undefined4 FUN_10520010(byte *param_1,int param_2)

{
  uint uVar1;
  DWORD DVar2;
  undefined1 *in_ECX;
  
  uVar1 = (uint)(ushort)((ushort)(*param_1 & 0xf) * 4);
  if (param_2 < (int)(uVar1 + 8)) {
    return 0xffffffff;
  }
  if (param_1[uVar1] == 0) {
    DVar2 = GetCurrentProcessId();
    if (*(short *)(param_1 + uVar1 + 4) != (short)DVar2) {
      return 0xfffffffe;
    }
    if ((param_1[uVar1] != 0xb) && (param_1[uVar1] != 0)) {
      return 0;
    }
  }
  else if (param_1[uVar1] != 0xb) {
    return 0xffffffff;
  }
  GetTickCount();
  if (param_1[uVar1] == 0) {
    *in_ECX = 1;
  }
  return 0;
}


// ==== 105200b0 FUN_105200b0

int FUN_105200b0(undefined4 param_1,SOCKET *param_2)

{
  int iVar1;
  
  iVar1 = setsockopt(*param_2,0,4,(char *)&param_1,4);
  return (iVar1 != -1) - 1;
}


// ==== 105200e0 FUN_105200e0

undefined4 FUN_105200e0(SOCKET param_1,uint param_2,undefined4 param_3)

{
  int iVar1;
  timeval local_10c;
  fd_set local_104;
  
  local_10c.tv_sec = param_2 / 1000;
  local_10c.tv_usec = param_2 % 1000;
  local_104.fd_array[0] = param_1;
  local_104.fd_count = 1;
  iVar1 = select(0,&local_104,(fd_set *)0x0,(fd_set *)0x0,&local_10c);
  if (iVar1 == -1) {
    return 0;
  }
  *(bool *)param_3 = iVar1 != 0;
  return 1;
}


// ==== 10520180 FUN_10520180

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_10520180(undefined4 param_1,undefined4 param_2,int *param_3)

{
  int iVar1;
  
  _DAT_10853a28 = (**(code **)**(undefined4 **)GMalloc_exref)();
                    /* WARNING: Read-only address (ram,0x10853a28) is written */
  if (_DAT_10853a28 == 0) {
    return -1;
  }
  iVar1 = (**(code **)**(undefined4 **)GMalloc_exref)(0x414,&DAT_10853a28);
  *param_3 = iVar1;
  return (iVar1 != 0) - 1;
}


// ==== 105201f0 FUN_105201f0

void FUN_105201f0(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = AES::vftable;
  *(undefined1 *)(in_ECX + 1) = 0;
  return;
}


// ==== 10520200 FUN_10520200

void FUN_10520200(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = AES::vftable;
  return;
}


// ==== 10520210 FUN_10520210

void FUN_10520210(char *param_1,byte *param_2,int param_3,size_t param_4)

{
  byte bVar1;
  undefined4 uVar2;
  uint uVar3;
  void *_Src;
  int iVar4;
  uint *puVar5;
  int in_ECX;
  undefined4 *puVar6;
  uint *puVar7;
  int iVar8;
  int iVar9;
  char *pcVar10;
  int iVar11;
  undefined4 *puVar12;
  int iVar13;
  int local_10;
  exception local_c [12];
  
  _Src = param_2;
  if ((byte *)param_1 == (byte *)0x0) {
    param_1 = "Empty key";
    std::exception::exception(local_c,&param_1);
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(local_c,&DAT_1095c25c);
  }
  if (((param_3 != 0x10) && (param_3 != 0x18)) && (param_3 != 0x20)) {
    param_1 = "Incorrect key length";
    std::exception::exception(local_c,&param_1);
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(local_c,&DAT_1095c25c);
  }
  if (((param_4 != 0x10) && (param_4 != 0x18)) && (param_4 != 0x20)) {
    param_1 = "Incorrect block length";
    std::exception::exception(local_c,&param_1);
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(local_c,&DAT_1095c25c);
  }
  *(size_t *)(in_ECX + 0x3cc) = param_4;
  *(int *)(in_ECX + 0x3c8) = param_3;
  _memcpy((void *)(in_ECX + 0x3d4),param_2,param_4);
  _memcpy((void *)(in_ECX + 0x3f4),_Src,*(size_t *)(in_ECX + 0x3cc));
  if (*(int *)(in_ECX + 0x3c8) == 0x10) {
    if (*(int *)(in_ECX + 0x3cc) == 0x10) {
      iVar8 = 10;
    }
    else {
      iVar8 = (uint)(*(int *)(in_ECX + 0x3cc) != 0x18) * 2 + 0xc;
    }
  }
  else {
    if (*(int *)(in_ECX + 0x3c8) != 0x18) {
      *(undefined4 *)(in_ECX + 0x3d0) = 0xe;
      goto LAB_1052033e;
    }
    iVar8 = (uint)(*(int *)(in_ECX + 0x3cc) == 0x20) * 2 + 0xc;
  }
  *(int *)(in_ECX + 0x3d0) = iVar8;
LAB_1052033e:
  iVar11 = (int)(*(int *)(in_ECX + 0x3cc) + (*(int *)(in_ECX + 0x3cc) >> 0x1f & 3U)) >> 2;
  iVar8 = 0;
  if (-1 < *(int *)(in_ECX + 0x3d0)) {
    puVar6 = (undefined4 *)(in_ECX + 8);
    do {
      iVar4 = iVar11;
      puVar12 = puVar6;
      if (0 < iVar11) {
        for (; iVar4 != 0; iVar4 = iVar4 + -1) {
          *puVar12 = 0;
          puVar12 = puVar12 + 1;
        }
      }
      iVar8 = iVar8 + 1;
      puVar6 = puVar6 + 8;
    } while (iVar8 <= *(int *)(in_ECX + 0x3d0));
  }
  iVar8 = 0;
  if (-1 < *(int *)(in_ECX + 0x3d0)) {
    puVar6 = (undefined4 *)(in_ECX + 0x1e8);
    do {
      iVar4 = iVar11;
      puVar12 = puVar6;
      if (0 < iVar11) {
        for (; iVar4 != 0; iVar4 = iVar4 + -1) {
          *puVar12 = 0;
          puVar12 = puVar12 + 1;
        }
      }
      iVar8 = iVar8 + 1;
      puVar6 = puVar6 + 8;
    } while (iVar8 <= *(int *)(in_ECX + 0x3d0));
  }
  iVar4 = (*(int *)(in_ECX + 0x3d0) + 1) * iVar11;
  iVar13 = (int)(*(int *)(in_ECX + 0x3c8) + (*(int *)(in_ECX + 0x3c8) >> 0x1f & 3U)) >> 2;
  puVar5 = (uint *)(in_ECX + 0x414);
  iVar8 = iVar13;
  if (0 < iVar13) {
    do {
      *puVar5 = (uint)(byte)*param_1 << 0x18;
      *puVar5 = *puVar5 | (uint)(byte)param_1[1] << 0x10;
      *puVar5 = *puVar5 | (uint)(byte)param_1[2] << 8;
      *puVar5 = *puVar5 | (uint)(byte)param_1[3];
      iVar8 = iVar8 + -1;
      param_1 = param_1 + 4;
      puVar5 = puVar5 + 1;
    } while (iVar8 != 0);
  }
  pcVar10 = (char *)0x0;
  param_1 = (char *)0x0;
  if (0 < iVar13) {
    puVar6 = (undefined4 *)(in_ECX + 0x414);
    do {
      param_1 = pcVar10;
      if (iVar4 <= (int)pcVar10) break;
      iVar8 = (int)pcVar10 / iVar11;
      iVar9 = (int)pcVar10 % iVar11;
      pcVar10 = pcVar10 + 1;
      *(undefined4 *)(in_ECX + 8 + (iVar9 + iVar8 * 8) * 4) = *puVar6;
      uVar2 = *puVar6;
      puVar6 = puVar6 + 1;
      *(undefined4 *)(in_ECX + 0x1e8 + (iVar9 + (*(int *)(in_ECX + 0x3d0) - iVar8) * 8) * 4) = uVar2
      ;
      param_1 = pcVar10;
    } while ((int)pcVar10 < iVar13);
  }
  if ((int)param_1 < iVar4) {
    param_2 = &DAT_108b21a0;
    pcVar10 = param_1;
    do {
      uVar3 = *(uint *)(in_ECX + 0x410 + iVar13 * 4);
      bVar1 = *param_2;
      param_2 = param_2 + 1;
      *(uint *)(in_ECX + 0x414) =
           *(uint *)(in_ECX + 0x414) ^
           CONCAT31(CONCAT21(CONCAT11((&DAT_108aefa0)[(int)uVar3 >> 0x10 & 0xff] ^ bVar1,
                                      (&DAT_108aefa0)[uVar3 >> 8 & 0xff]),
                             (&DAT_108aefa0)[uVar3 & 0xff]),
                    (&DAT_108aefa0)[(int)uVar3 >> 0x18 & 0xff]);
      if (iVar13 == 8) {
        puVar5 = (uint *)(in_ECX + 0x418);
        iVar8 = 3;
        do {
          *puVar5 = *puVar5 ^ puVar5[-1];
          puVar5 = puVar5 + 1;
          iVar8 = iVar8 + -1;
        } while (iVar8 != 0);
        uVar3 = *(uint *)(in_ECX + 0x420);
        *(uint *)(in_ECX + 0x424) =
             *(uint *)(in_ECX + 0x424) ^
             CONCAT31(CONCAT21(CONCAT11((&DAT_108aefa0)[(int)uVar3 >> 0x18 & 0xff],
                                        (&DAT_108aefa0)[(int)uVar3 >> 0x10 & 0xff]),
                               (&DAT_108aefa0)[uVar3 >> 8 & 0xff]),(&DAT_108aefa0)[uVar3 & 0xff]);
        puVar5 = (uint *)(in_ECX + 0x428);
        iVar8 = 3;
        do {
          *puVar5 = *puVar5 ^ puVar5[-1];
          puVar5 = puVar5 + 1;
          iVar8 = iVar8 + -1;
        } while (iVar8 != 0);
      }
      else if (1 < iVar13) {
        puVar5 = (uint *)(in_ECX + 0x418);
        iVar8 = iVar13 + -1;
        do {
          *puVar5 = *puVar5 ^ puVar5[-1];
          puVar5 = puVar5 + 1;
          iVar8 = iVar8 + -1;
        } while (iVar8 != 0);
      }
      local_10 = 0;
      if (0 < iVar13) {
        puVar6 = (undefined4 *)(in_ECX + 0x414);
        do {
          if (iVar4 <= (int)pcVar10) goto LAB_10520604;
          *(undefined4 *)(in_ECX + 8 + ((int)pcVar10 % iVar11 + ((int)pcVar10 / iVar11) * 8) * 4) =
               *puVar6;
          *(undefined4 *)
           (in_ECX + 0x1e8 +
           ((int)pcVar10 % iVar11 + (*(int *)(in_ECX + 0x3d0) - (int)pcVar10 / iVar11) * 8) * 4) =
               *puVar6;
          local_10 = local_10 + 1;
          pcVar10 = param_1 + 1;
          puVar6 = puVar6 + 1;
          param_1 = pcVar10;
        } while (local_10 < iVar13);
      }
    } while ((int)pcVar10 < iVar4);
  }
LAB_10520604:
  param_1 = (char *)0x1;
  if (1 < *(int *)(in_ECX + 0x3d0)) {
    puVar5 = (uint *)(in_ECX + 0x208);
    do {
      puVar7 = puVar5;
      iVar8 = iVar11;
      if (0 < iVar11) {
        do {
          uVar3 = *puVar7;
          iVar8 = iVar8 + -1;
          *puVar7 = *(uint *)(&DAT_108b11a0 + ((int)uVar3 >> 0x18 & 0xffU) * 4) ^
                    *(uint *)(&DAT_108b15a0 + ((int)uVar3 >> 0x10 & 0xffU) * 4) ^
                    *(uint *)(&DAT_108b19a0 + (uVar3 >> 8 & 0xff) * 4) ^
                    *(uint *)(&DAT_108b1da0 + (uVar3 & 0xff) * 4);
          puVar7 = puVar7 + 1;
        } while (iVar8 != 0);
      }
      param_1 = param_1 + 1;
      puVar5 = puVar5 + 8;
    } while ((int)param_1 < *(int *)(in_ECX + 0x3d0));
  }
  *(undefined1 *)(in_ECX + 4) = 1;
  return;
}


// ==== 105207c0 FUN_105207c0

void FUN_105207c0(byte *param_1,byte *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  int in_ECX;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint *local_20;
  int local_1c;
  exception local_c [12];
  
  if (*(char *)(in_ECX + 4) != '\0') {
    uVar9 = ((uint)param_1[4] << 0x18 | (uint)param_1[5] << 0x10 | (uint)param_1[6] << 8 |
            (uint)param_1[7]) ^ *(uint *)(in_ECX + 0xc);
    uVar5 = ((uint)*param_1 << 0x18 | (uint)param_1[1] << 0x10 | (uint)param_1[2] << 8 |
            (uint)param_1[3]) ^ *(uint *)(in_ECX + 8);
    uVar6 = ((uint)param_1[8] << 0x18 | (uint)param_1[9] << 0x10 | (uint)param_1[10] << 8 |
            (uint)param_1[0xb]) ^ *(uint *)(in_ECX + 0x10);
    uVar8 = ((uint)CONCAT11(param_1[0xe],param_1[0xf]) |
            (uint)param_1[0xc] << 0x18 | (uint)param_1[0xd] << 0x10) ^ *(uint *)(in_ECX + 0x14);
    iVar2 = *(int *)(in_ECX + 0x3d0);
    param_1 = (byte *)uVar9;
    if (1 < iVar2) {
      local_1c = iVar2 + -1;
      uVar4 = uVar8;
      uVar7 = uVar6;
      local_20 = (uint *)(in_ECX + 0x30);
      do {
        uVar9 = *(uint *)(&DAT_108af9a0 + (uVar4 >> 8 & 0xff) * 4) ^
                *(uint *)(&DAT_108af5a0 + ((int)uVar7 >> 0x10 & 0xffU) * 4) ^
                *(uint *)(&DAT_108af1a0 + ((int)param_1 >> 0x18 & 0xffU) * 4) ^
                *(uint *)(&DAT_108afda0 + (uVar5 & 0xff) * 4) ^ local_20[-1];
        uVar6 = *(uint *)(&DAT_108af5a0 + ((int)uVar4 >> 0x10 & 0xffU) * 4) ^
                *(uint *)(&DAT_108af1a0 + ((int)uVar7 >> 0x18 & 0xffU) * 4) ^
                *(uint *)(&DAT_108af9a0 + (uVar5 >> 8 & 0xff) * 4) ^
                *(uint *)(&DAT_108afda0 + ((uint)param_1 & 0xff) * 4) ^ *local_20;
        uVar8 = *(uint *)(&DAT_108af1a0 + ((int)uVar4 >> 0x18 & 0xffU) * 4) ^
                *(uint *)(&DAT_108af9a0 + ((uint)param_1 >> 8 & 0xff) * 4) ^
                *(uint *)(&DAT_108af5a0 + ((int)uVar5 >> 0x10 & 0xffU) * 4) ^
                *(uint *)(&DAT_108afda0 + (uVar7 & 0xff) * 4) ^ local_20[1];
        uVar5 = *(uint *)(&DAT_108af9a0 + (uVar7 >> 8 & 0xff) * 4) ^
                *(uint *)(&DAT_108af5a0 + ((int)param_1 >> 0x10 & 0xffU) * 4) ^
                *(uint *)(&DAT_108af1a0 + ((int)uVar5 >> 0x18 & 0xffU) * 4) ^
                *(uint *)(&DAT_108afda0 + (uVar4 & 0xff) * 4) ^ local_20[-2];
        local_1c = local_1c + -1;
        uVar4 = uVar8;
        uVar7 = uVar6;
        param_1 = (byte *)uVar9;
        local_20 = local_20 + 8;
      } while (local_1c != 0);
    }
    puVar1 = (undefined4 *)(iVar2 * 0x20 + 8 + in_ECX);
    uVar3 = *puVar1;
    *param_2 = (byte)((uint)uVar3 >> 0x18) ^ (&DAT_108aefa0)[(int)uVar5 >> 0x18 & 0xff];
    param_2[1] = (byte)((uint)uVar3 >> 0x10) ^ (&DAT_108aefa0)[(int)param_1 >> 0x10 & 0xff];
    param_2[2] = (byte)((uint)uVar3 >> 8) ^ (&DAT_108aefa0)[uVar6 >> 8 & 0xff];
    local_20._0_1_ = (byte)uVar3;
    param_2[3] = (&DAT_108aefa0)[uVar8 & 0xff] ^ (byte)local_20;
    uVar3 = puVar1[1];
    param_2[4] = (byte)((uint)uVar3 >> 0x18) ^ (&DAT_108aefa0)[(int)param_1 >> 0x18 & 0xff];
    param_2[5] = (byte)((uint)uVar3 >> 0x10) ^ (&DAT_108aefa0)[(int)uVar6 >> 0x10 & 0xff];
    param_2[6] = (byte)((uint)uVar3 >> 8) ^ (&DAT_108aefa0)[uVar8 >> 8 & 0xff];
    param_2[7] = (&DAT_108aefa0)[uVar5 & 0xff] ^ (byte)uVar3;
    uVar3 = puVar1[2];
    param_2[8] = (byte)((uint)uVar3 >> 0x18) ^ (&DAT_108aefa0)[(int)uVar6 >> 0x18 & 0xff];
    param_2[9] = (byte)((uint)uVar3 >> 0x10) ^ (&DAT_108aefa0)[(int)uVar8 >> 0x10 & 0xff];
    param_2[10] = (byte)((uint)uVar3 >> 8) ^ (&DAT_108aefa0)[uVar5 >> 8 & 0xff];
    param_2[0xb] = (&DAT_108aefa0)[(uint)param_1 & 0xff] ^ (byte)uVar3;
    uVar3 = puVar1[3];
    param_2[0xc] = (byte)((uint)uVar3 >> 0x18) ^ (&DAT_108aefa0)[(int)uVar8 >> 0x18 & 0xff];
    param_2[0xd] = (byte)((uint)uVar3 >> 0x10) ^ (&DAT_108aefa0)[(int)uVar5 >> 0x10 & 0xff];
    param_2[0xe] = (byte)((uint)uVar3 >> 8) ^ (&DAT_108aefa0)[(uint)param_1 >> 8 & 0xff];
    param_2[0xf] = (&DAT_108aefa0)[uVar6 & 0xff] ^ (byte)uVar3;
    return;
  }
  std::exception::exception(local_c,&PTR_s_Object_not_Initialized_10b13350);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(local_c,&DAT_1095c25c);
}


// ==== 10520ca0 FUN_10520ca0

void FUN_10520ca0(byte *param_1,byte *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  int in_ECX;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint *local_20;
  int local_1c;
  exception local_c [12];
  
  if (*(char *)(in_ECX + 4) != '\0') {
    uVar9 = ((uint)param_1[4] << 0x18 | (uint)param_1[5] << 0x10 | (uint)param_1[6] << 8 |
            (uint)param_1[7]) ^ *(uint *)(in_ECX + 0x1ec);
    uVar5 = ((uint)*param_1 << 0x18 | (uint)param_1[1] << 0x10 | (uint)param_1[2] << 8 |
            (uint)param_1[3]) ^ *(uint *)(in_ECX + 0x1e8);
    uVar6 = ((uint)param_1[8] << 0x18 | (uint)param_1[9] << 0x10 | (uint)param_1[10] << 8 |
            (uint)param_1[0xb]) ^ *(uint *)(in_ECX + 0x1f0);
    uVar8 = ((uint)CONCAT11(param_1[0xe],param_1[0xf]) |
            (uint)param_1[0xc] << 0x18 | (uint)param_1[0xd] << 0x10) ^ *(uint *)(in_ECX + 500);
    iVar2 = *(int *)(in_ECX + 0x3d0);
    param_1 = (byte *)uVar9;
    if (1 < iVar2) {
      local_1c = iVar2 + -1;
      uVar7 = uVar6;
      local_20 = (uint *)(in_ECX + 0x210);
      do {
        param_1 = (byte *)(*(uint *)(&DAT_108b09a0 + (uVar8 >> 8 & 0xff) * 4) ^
                           *(uint *)(&DAT_108b01a0 + ((int)uVar9 >> 0x18 & 0xffU) * 4) ^
                           *(uint *)(&DAT_108b05a0 + ((int)uVar5 >> 0x10 & 0xffU) * 4) ^
                           *(uint *)(&DAT_108b0da0 + (uVar7 & 0xff) * 4) ^ local_20[-1]);
        uVar6 = *(uint *)(&DAT_108b01a0 + ((int)uVar7 >> 0x18 & 0xffU) * 4) ^
                *(uint *)(&DAT_108b05a0 + ((int)uVar9 >> 0x10 & 0xffU) * 4) ^
                *(uint *)(&DAT_108b09a0 + (uVar5 >> 8 & 0xff) * 4) ^
                *(uint *)(&DAT_108b0da0 + (uVar8 & 0xff) * 4) ^ *local_20;
        uVar4 = (int)uVar8 >> 0x10;
        uVar8 = *(uint *)(&DAT_108b01a0 + ((int)uVar8 >> 0x18 & 0xffU) * 4) ^
                *(uint *)(&DAT_108b05a0 + ((int)uVar7 >> 0x10 & 0xffU) * 4) ^
                *(uint *)(&DAT_108b09a0 + (uVar9 >> 8 & 0xff) * 4) ^
                *(uint *)(&DAT_108b0da0 + (uVar5 & 0xff) * 4) ^ local_20[1];
        uVar5 = *(uint *)(&DAT_108b05a0 + (uVar4 & 0xff) * 4) ^
                *(uint *)(&DAT_108b09a0 + (uVar7 >> 8 & 0xff) * 4) ^
                *(uint *)(&DAT_108b01a0 + ((int)uVar5 >> 0x18 & 0xffU) * 4) ^
                *(uint *)(&DAT_108b0da0 + (uVar9 & 0xff) * 4) ^ local_20[-2];
        local_1c = local_1c + -1;
        uVar7 = uVar6;
        uVar9 = (uint)param_1;
        local_20 = local_20 + 8;
      } while (local_1c != 0);
    }
    puVar1 = (undefined4 *)(iVar2 * 0x20 + 0x1e8 + in_ECX);
    uVar3 = *puVar1;
    *param_2 = (byte)((uint)uVar3 >> 0x18) ^ (&DAT_108af0a0)[(int)uVar5 >> 0x18 & 0xff];
    param_2[1] = (byte)((uint)uVar3 >> 0x10) ^ (&DAT_108af0a0)[(int)uVar8 >> 0x10 & 0xff];
    param_2[2] = (byte)((uint)uVar3 >> 8) ^ (&DAT_108af0a0)[uVar6 >> 8 & 0xff];
    param_2[3] = (&DAT_108af0a0)[(uint)param_1 & 0xff] ^ (byte)uVar3;
    uVar3 = puVar1[1];
    param_2[4] = (byte)((uint)uVar3 >> 0x18) ^ (&DAT_108af0a0)[(int)param_1 >> 0x18 & 0xff];
    param_2[5] = (byte)((uint)uVar3 >> 0x10) ^ (&DAT_108af0a0)[(int)uVar5 >> 0x10 & 0xff];
    param_2[6] = (byte)((uint)uVar3 >> 8) ^ (&DAT_108af0a0)[uVar8 >> 8 & 0xff];
    param_2[7] = (&DAT_108af0a0)[uVar6 & 0xff] ^ (byte)uVar3;
    uVar3 = puVar1[2];
    param_2[8] = (byte)((uint)uVar3 >> 0x18) ^ (&DAT_108af0a0)[(int)uVar6 >> 0x18 & 0xff];
    param_2[9] = (byte)((uint)uVar3 >> 0x10) ^ (&DAT_108af0a0)[(int)param_1 >> 0x10 & 0xff];
    param_2[10] = (byte)((uint)uVar3 >> 8) ^ (&DAT_108af0a0)[uVar5 >> 8 & 0xff];
    param_2[0xb] = (&DAT_108af0a0)[uVar8 & 0xff] ^ (byte)uVar3;
    uVar3 = puVar1[3];
    param_2[0xc] = (byte)((uint)uVar3 >> 0x18) ^ (&DAT_108af0a0)[(int)uVar8 >> 0x18 & 0xff];
    param_2[0xd] = (byte)((uint)uVar3 >> 0x10) ^ (&DAT_108af0a0)[(int)uVar6 >> 0x10 & 0xff];
    param_2[0xe] = (byte)((uint)uVar3 >> 8) ^ (&DAT_108af0a0)[(uint)param_1 >> 8 & 0xff];
    param_2[0xf] = (&DAT_108af0a0)[uVar5 & 0xff] ^ (byte)uVar3;
    return;
  }
  std::exception::exception(local_c,&PTR_s_Object_not_Initialized_10b13350);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(local_c,&DAT_1095c25c);
}


// ==== 105211b0 FUN_105211b0

void FUN_105211b0(uint *param_1,byte *param_2)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  uint *puVar4;
  int in_ECX;
  int iVar5;
  byte *pbVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint *local_30;
  uint *local_2c;
  int local_24;
  exception local_c [12];
  
  if (*(char *)(in_ECX + 4) == '\0') {
    std::exception::exception(local_c,&PTR_s_Object_not_Initialized_10b13350);
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(local_c,&DAT_1095c25c);
  }
  iVar3 = *(int *)(in_ECX + 0x3cc);
  if (iVar3 != 0x10) {
    iVar9 = (int)(iVar3 + (iVar3 >> 0x1f & 3U)) >> 2;
    iVar3 = 0;
    if (iVar9 != 4) {
      iVar3 = (iVar9 != 6) + 1;
    }
    iVar7 = (&DAT_108b21c8)[iVar3 * 8];
    iVar8 = (&DAT_108b21d0)[iVar3 * 8];
    iVar3 = (&DAT_108b21d8)[iVar3 * 8];
    puVar4 = (uint *)(in_ECX + 0x454);
    if (0 < iVar9) {
      local_30 = (uint *)(in_ECX + 8);
      local_2c = (uint *)iVar9;
      do {
        *puVar4 = (uint)*(byte *)param_1 << 0x18;
        *puVar4 = *puVar4 | (uint)*(byte *)((int)param_1 + 1) << 0x10;
        *puVar4 = *puVar4 | (uint)*(byte *)((int)param_1 + 2) << 8;
        *puVar4 = *puVar4 | (uint)*(byte *)((int)param_1 + 3);
        uVar1 = *local_30;
        local_30 = local_30 + 1;
        *puVar4 = *puVar4 ^ uVar1;
        puVar4 = puVar4 + 1;
        local_2c = (uint *)((int)local_2c + -1);
        param_1 = (uint *)((int)param_1 + 4);
      } while (local_2c != (uint *)0x0);
    }
    local_24 = 1;
    if (1 < *(int *)(in_ECX + 0x3d0)) {
      param_1 = (uint *)(in_ECX + 0x28);
      do {
        if (0 < iVar9) {
          local_2c = param_1;
          iVar5 = iVar7;
          puVar4 = (uint *)(in_ECX + 0x434);
          local_30 = (uint *)iVar9;
          do {
            local_30 = (uint *)((int)local_30 + -1);
            *puVar4 = *(uint *)(&DAT_108af9a0 +
                               (uint)*(byte *)(in_ECX + 0x455 +
                                              (((iVar8 - iVar7) + iVar5) % iVar9) * 4) * 4) ^
                      *(uint *)(&DAT_108afda0 +
                               (*(uint *)(in_ECX + 0x454 + ((iVar5 + (iVar3 - iVar7)) % iVar9) * 4)
                               & 0xff) * 4) ^
                      *(uint *)(&DAT_108af5a0 +
                               (uint)*(byte *)(in_ECX + 0x456 + (iVar5 % iVar9) * 4) * 4) ^
                      *(uint *)(&DAT_108af1a0 + (uint)*(byte *)((int)puVar4 + 0x23) * 4) ^ *local_2c
            ;
            iVar5 = iVar5 + 1;
            puVar4 = puVar4 + 1;
            local_2c = local_2c + 1;
          } while (local_30 != (uint *)0x0);
        }
        _memcpy((void *)(in_ECX + 0x454),(void *)(in_ECX + 0x434),iVar9 * 4);
        param_1 = param_1 + 8;
        local_24 = local_24 + 1;
      } while (local_24 < *(int *)(in_ECX + 0x3d0));
    }
    param_1 = (uint *)0x0;
    if (0 < iVar9) {
      iVar7 = iVar7 - iVar8;
      iVar3 = iVar3 - iVar8;
      pbVar6 = param_2;
      param_2 = (byte *)(in_ECX + 0x454);
      do {
        uVar2 = *(undefined4 *)(in_ECX + 8 + ((int)param_1 + *(int *)(in_ECX + 0x3d0) * 8) * 4);
        *pbVar6 = (byte)((uint)uVar2 >> 0x18) ^ (&DAT_108aefa0)[*(byte *)((int)param_2 + 3)];
        param_2 = (byte *)((int)param_2 + 4);
        pbVar6[1] = (byte)((uint)uVar2 >> 0x10) ^
                    (&DAT_108aefa0)[*(byte *)(in_ECX + 0x456 + ((iVar7 + iVar8) % iVar9) * 4)];
        pbVar6[2] = (byte)((uint)uVar2 >> 8) ^
                    (&DAT_108aefa0)[*(byte *)(in_ECX + 0x455 + (iVar8 % iVar9) * 4)];
        iVar5 = iVar3 + iVar8;
        iVar8 = iVar8 + 1;
        param_1 = (uint *)((int)param_1 + 1);
        pbVar6[3] = (&DAT_108aefa0)[*(uint *)(in_ECX + 0x454 + (iVar5 % iVar9) * 4) & 0xff] ^
                    (byte)uVar2;
        pbVar6 = pbVar6 + 4;
      } while ((int)param_1 < iVar9);
    }
    return;
  }
  thunk_FUN_105207c0(param_1,param_2);
  return;
}


// ==== 10521560 FUN_10521560

void FUN_10521560(uint *param_1,byte *param_2)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  uint *puVar4;
  int in_ECX;
  int iVar5;
  byte *pbVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint *local_30;
  uint *local_2c;
  int local_24;
  exception local_c [12];
  
  if (*(char *)(in_ECX + 4) == '\0') {
    std::exception::exception(local_c,&PTR_s_Object_not_Initialized_10b13350);
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(local_c,&DAT_1095c25c);
  }
  iVar3 = *(int *)(in_ECX + 0x3cc);
  if (iVar3 != 0x10) {
    iVar9 = (int)(iVar3 + (iVar3 >> 0x1f & 3U)) >> 2;
    iVar3 = 0;
    if (iVar9 != 4) {
      iVar3 = (iVar9 != 6) + 1;
    }
    iVar7 = (&DAT_108b21cc)[iVar3 * 8];
    iVar8 = (&DAT_108b21d4)[iVar3 * 8];
    iVar3 = (&DAT_108b21dc)[iVar3 * 8];
    puVar4 = (uint *)(in_ECX + 0x454);
    if (0 < iVar9) {
      local_30 = (uint *)(in_ECX + 0x1e8);
      local_2c = (uint *)iVar9;
      do {
        *puVar4 = (uint)*(byte *)param_1 << 0x18;
        *puVar4 = *puVar4 | (uint)*(byte *)((int)param_1 + 1) << 0x10;
        *puVar4 = *puVar4 | (uint)*(byte *)((int)param_1 + 2) << 8;
        *puVar4 = *puVar4 | (uint)*(byte *)((int)param_1 + 3);
        uVar1 = *local_30;
        local_30 = local_30 + 1;
        *puVar4 = *puVar4 ^ uVar1;
        puVar4 = puVar4 + 1;
        local_2c = (uint *)((int)local_2c + -1);
        param_1 = (uint *)((int)param_1 + 4);
      } while (local_2c != (uint *)0x0);
    }
    local_24 = 1;
    if (1 < *(int *)(in_ECX + 0x3d0)) {
      param_1 = (uint *)(in_ECX + 0x208);
      do {
        if (0 < iVar9) {
          local_2c = param_1;
          iVar5 = iVar7;
          puVar4 = (uint *)(in_ECX + 0x434);
          local_30 = (uint *)iVar9;
          do {
            local_30 = (uint *)((int)local_30 + -1);
            *puVar4 = *(uint *)(&DAT_108b09a0 +
                               (uint)*(byte *)(in_ECX + 0x455 +
                                              (((iVar8 - iVar7) + iVar5) % iVar9) * 4) * 4) ^
                      *(uint *)(&DAT_108b0da0 +
                               (*(uint *)(in_ECX + 0x454 + ((iVar5 + (iVar3 - iVar7)) % iVar9) * 4)
                               & 0xff) * 4) ^
                      *(uint *)(&DAT_108b05a0 +
                               (uint)*(byte *)(in_ECX + 0x456 + (iVar5 % iVar9) * 4) * 4) ^
                      *(uint *)(&DAT_108b01a0 + (uint)*(byte *)((int)puVar4 + 0x23) * 4) ^ *local_2c
            ;
            iVar5 = iVar5 + 1;
            puVar4 = puVar4 + 1;
            local_2c = local_2c + 1;
          } while (local_30 != (uint *)0x0);
        }
        _memcpy((void *)(in_ECX + 0x454),(void *)(in_ECX + 0x434),iVar9 * 4);
        param_1 = param_1 + 8;
        local_24 = local_24 + 1;
      } while (local_24 < *(int *)(in_ECX + 0x3d0));
    }
    param_1 = (uint *)0x0;
    if (0 < iVar9) {
      iVar7 = iVar7 - iVar8;
      iVar3 = iVar3 - iVar8;
      pbVar6 = param_2;
      param_2 = (byte *)(in_ECX + 0x454);
      do {
        uVar2 = *(undefined4 *)(in_ECX + 0x1e8 + ((int)param_1 + *(int *)(in_ECX + 0x3d0) * 8) * 4);
        *pbVar6 = (byte)((uint)uVar2 >> 0x18) ^ (&DAT_108af0a0)[*(byte *)((int)param_2 + 3)];
        param_2 = (byte *)((int)param_2 + 4);
        pbVar6[1] = (byte)((uint)uVar2 >> 0x10) ^
                    (&DAT_108af0a0)[*(byte *)(in_ECX + 0x456 + ((iVar7 + iVar8) % iVar9) * 4)];
        pbVar6[2] = (byte)((uint)uVar2 >> 8) ^
                    (&DAT_108af0a0)[*(byte *)(in_ECX + 0x455 + (iVar8 % iVar9) * 4)];
        iVar5 = iVar3 + iVar8;
        iVar8 = iVar8 + 1;
        param_1 = (uint *)((int)param_1 + 1);
        pbVar6[3] = (&DAT_108af0a0)[*(uint *)(in_ECX + 0x454 + (iVar5 % iVar9) * 4) & 0xff] ^
                    (byte)uVar2;
        pbVar6 = pbVar6 + 4;
      } while ((int)param_1 < iVar9);
    }
    return;
  }
  thunk_FUN_10520ca0(param_1,param_2);
  return;
}


// ==== 10521910 FUN_10521910

void FUN_10521910(byte *param_1,byte *param_2)

{
  int in_ECX;
  int iVar1;
  exception local_c [12];
  
  if (*(char *)(in_ECX + 4) != '\0') {
    iVar1 = 0;
    if (0 < *(int *)(in_ECX + 0x3cc)) {
      do {
        *param_1 = *param_1 ^ *param_2;
        iVar1 = iVar1 + 1;
        param_2 = param_2 + 1;
        param_1 = param_1 + 1;
      } while (iVar1 < *(int *)(in_ECX + 0x3cc));
    }
    return;
  }
  std::exception::exception(local_c,&PTR_s_Object_not_Initialized_10b13350);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(local_c,&DAT_1095c25c);
}


// ==== 10521990 FUN_10521990

void FUN_10521990(int param_1,void *param_2,uint param_3,int param_4)

{
  void *_Dst;
  uint uVar1;
  uint uVar2;
  int in_ECX;
  exception local_c [12];
  
  uVar1 = param_3;
  if (*(char *)(in_ECX + 4) == '\0') {
    std::exception::exception(local_c,&PTR_s_Object_not_Initialized_10b13350);
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(local_c,&DAT_1095c25c);
  }
  if ((param_3 != 0) &&
     (uVar2 = param_3 / *(uint *)(in_ECX + 0x3cc), param_3 % *(uint *)(in_ECX + 0x3cc) == 0)) {
    param_3 = 0;
    if (param_4 == 1) {
      if (uVar2 != 0) {
        _Dst = (void *)(in_ECX + 0x3f4);
        do {
          thunk_FUN_10521910(_Dst,param_1);
          thunk_FUN_105211b0(_Dst,param_2);
          _memcpy(_Dst,param_2,*(size_t *)(in_ECX + 0x3cc));
          param_1 = param_1 + *(int *)(in_ECX + 0x3cc);
          param_2 = (void *)((int)param_2 + *(int *)(in_ECX + 0x3cc));
          param_3 = param_3 + 1;
        } while (param_3 < uVar1 / *(uint *)(in_ECX + 0x3cc));
      }
    }
    else if (param_4 == 2) {
      if (uVar2 != 0) {
        do {
          thunk_FUN_105211b0(in_ECX + 0x3f4,param_2);
          thunk_FUN_10521910(param_2,param_1);
          _memcpy((void *)(in_ECX + 0x3f4),param_2,*(size_t *)(in_ECX + 0x3cc));
          param_1 = param_1 + *(int *)(in_ECX + 0x3cc);
          param_2 = (void *)((int)param_2 + *(int *)(in_ECX + 0x3cc));
          param_3 = param_3 + 1;
        } while (param_3 < uVar1 / *(uint *)(in_ECX + 0x3cc));
        return;
      }
    }
    else if (uVar2 != 0) {
      do {
        thunk_FUN_105211b0(param_1,param_2);
        param_1 = param_1 + *(int *)(in_ECX + 0x3cc);
        param_2 = (void *)((int)param_2 + *(int *)(in_ECX + 0x3cc));
        param_3 = param_3 + 1;
      } while (param_3 < uVar1 / *(uint *)(in_ECX + 0x3cc));
      return;
    }
    return;
  }
  std::exception::exception(local_c,&PTR_s_Data_not_multiple_of_Block_Size_10b13354);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(local_c,&DAT_1095c25c);
}


// ==== 10521b90 FUN_10521b90

void FUN_10521b90(void *param_1,int param_2,uint param_3,int param_4)

{
  uint uVar1;
  uint uVar2;
  int in_ECX;
  exception local_c [12];
  
  uVar1 = param_3;
  if (*(char *)(in_ECX + 4) == '\0') {
    std::exception::exception(local_c,&PTR_s_Object_not_Initialized_10b13350);
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(local_c,&DAT_1095c25c);
  }
  if ((param_3 != 0) &&
     (uVar2 = param_3 / *(uint *)(in_ECX + 0x3cc), param_3 % *(uint *)(in_ECX + 0x3cc) == 0)) {
    param_3 = 0;
    if (param_4 == 1) {
      if (uVar2 != 0) {
        do {
          thunk_FUN_10521560(param_1,param_2);
          thunk_FUN_10521910(param_2,in_ECX + 0x3f4);
          _memcpy((void *)(in_ECX + 0x3f4),param_1,*(size_t *)(in_ECX + 0x3cc));
          param_1 = (void *)((int)param_1 + *(int *)(in_ECX + 0x3cc));
          param_2 = param_2 + *(int *)(in_ECX + 0x3cc);
          param_3 = param_3 + 1;
        } while (param_3 < uVar1 / *(uint *)(in_ECX + 0x3cc));
      }
    }
    else if (param_4 == 2) {
      if (uVar2 != 0) {
        do {
          thunk_FUN_105211b0(in_ECX + 0x3f4,param_2);
          thunk_FUN_10521910(param_2,param_1);
          _memcpy((void *)(in_ECX + 0x3f4),param_1,*(size_t *)(in_ECX + 0x3cc));
          param_1 = (void *)((int)param_1 + *(int *)(in_ECX + 0x3cc));
          param_2 = param_2 + *(int *)(in_ECX + 0x3cc);
          param_3 = param_3 + 1;
        } while (param_3 < uVar1 / *(uint *)(in_ECX + 0x3cc));
        return;
      }
    }
    else if (uVar2 != 0) {
      do {
        thunk_FUN_10521560(param_1,param_2);
        param_1 = (void *)((int)param_1 + *(int *)(in_ECX + 0x3cc));
        param_2 = param_2 + *(int *)(in_ECX + 0x3cc);
        param_3 = param_3 + 1;
      } while (param_3 < uVar1 / *(uint *)(in_ECX + 0x3cc));
      return;
    }
    return;
  }
  std::exception::exception(local_c,&PTR_s_Data_not_multiple_of_Block_Size_10b13354);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(local_c,&DAT_1095c25c);
}


// ==== 10521da0 FUN_10521da0

int FUN_10521da0(int param_1,int param_2,int param_3,int *param_4)

{
  int in_ECX;
  
  *param_4 = (param_3 * 0x400 + param_2) * 0x400 + param_1;
  return in_ECX + 4 +
         ((uint)(&FCollisionHash::HashX)[param_1] ^ (uint)(&FCollisionHash::HashY)[param_2] ^
         (uint)(&FCollisionHash::HashZ)[param_3]) * 4;
}


// ==== 10521e00 FUN_10521e00

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10521e00(void)

{
  _DAT_10c11dac = 0;
  _DAT_10c11da4 = 0;
  _DAT_10c11da0 = 0;
  return;
}


// ==== 10521e4d Catch@10521e4d

void Catch_10521e4d(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 10521e61 Catch@10521e61

void Catch_10521e61(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"FCollisionHash::Tick");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10521ea0 FUN_10521ea0

undefined4 FUN_10521ea0(void)

{
  return 0;
}


// ==== 10521eb0 FUN_10521eb0

float10 FUN_10521eb0(int param_1,float param_2,float param_3,int param_4)

{
  float fVar1;
  
  if (param_2 == 0.0) {
    return (float10)256000.0;
  }
  if (param_2 <= 0.0) {
    fVar1 = (float)param_1 - 0.5;
  }
  else {
    fVar1 = (float)param_1 + 0.5;
  }
  return (float10)(((fVar1 * (float)param_4 - 360448.0) - param_3) / param_2);
}


// ==== 10521f53 Catch@10521f53

void Catch_10521f53(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 10521f67 Catch@10521f67

void Catch_10521f67(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"FCollisionHash::DistanceToHashPlane");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10521fc0 FUN_10521fc0

void FUN_10521fc0(void)

{
  return;
}


// ==== 10522002 Catch@10522002

void Catch_10522002(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 10522016 Catch@10522016

void Catch_10522016(void)

{
  ushort *puVar1;
  int unaff_EBP;
  
  appUnwindf((ushort *)&DAT_10851d80,L"FCollisionHash::CheckActorNotReferenced");
  puVar1 = UObject::GetFullName(*(UObject **)(unaff_EBP + 8),(ushort *)0x0);
  appUnwindf((ushort *)L"(%s)",puVar1);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10522070 FUN_10522070

void FUN_10522070(void)

{
  return;
}


// ==== 105220b0 Catch@105220b0

void Catch_105220b0(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 105220c4 Catch@105220c4

void Catch_105220c4(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"FCollisionHash::CheckActorNotReferenced");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10522100 FUN_10522100

void FUN_10522100(void)

{
  return;
}


// ==== 10522142 Catch@10522142

void Catch_10522142(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 10522156 Catch@10522156

void Catch_10522156(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"FCollisionHash::CheckActorLocations");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10522190 FUN_10522190

void FUN_10522190(void)

{
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10819419;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 10522250 FUN_10522250

void FUN_10522250(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = *param_1;
  uVar2 = param_1[1];
  uVar3 = param_1[2];
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  *param_2 = uVar1;
  param_2[1] = uVar2;
  param_2[2] = uVar3;
  return;
}


// ==== 10522290 FUN_10522290

void FUN_10522290(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = *param_1;
  uVar2 = param_1[1];
  uVar3 = param_1[2];
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  *param_2 = uVar1;
  param_2[1] = uVar2;
  param_2[2] = uVar3;
  return;
}


// ==== 10522300 FUN_10522300

void FUN_10522300(int param_1,FMemStack *param_2,int param_3,int param_4)

{
  FMemStackFrame *this;
  
  param_1 = param_1 * param_3;
  this = FMemStack::GetThreadSafeMemStack(param_2);
  FMemStackFrame::PushBytes(this,param_1,param_4);
  return;
}


// ==== 10522350 FUN_10522350

void FUN_10522350(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = FCollisionHashBase::vftable;
  return;
}


// ==== 10522360 FUN_10522360

void FUN_10522360(byte param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = FCollisionHashBase::vftable;
  if ((param_1 & 1) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))();
  }
  return;
}


// ==== 10522390 FUN_10522390

void FUN_10522390(int param_1)

{
  undefined4 *in_ECX;
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  *in_ECX = FCollisionHashBase::vftable;
  *in_ECX = FCollisionOctree::vftable;
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
  in_ECX[0x12] = *(undefined4 *)(param_1 + 0x48);
  in_ECX[0x13] = *(undefined4 *)(param_1 + 0x4c);
  in_ECX[0x14] = *(undefined4 *)(param_1 + 0x50);
  in_ECX[0x15] = *(undefined4 *)(param_1 + 0x54);
  in_ECX[0x16] = *(undefined4 *)(param_1 + 0x58);
  in_ECX[0x17] = *(undefined4 *)(param_1 + 0x5c);
  in_ECX[0x18] = *(undefined4 *)(param_1 + 0x60);
  in_ECX[0x19] = *(undefined4 *)(param_1 + 100);
  in_ECX[0x1a] = *(undefined4 *)(param_1 + 0x68);
  puVar2 = (undefined4 *)(param_1 + 0x6c);
  puVar3 = in_ECX + 0x1b;
  for (iVar1 = 7; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  in_ECX[0x22] = *(undefined4 *)(param_1 + 0x88);
  in_ECX[0x23] = *(undefined4 *)(param_1 + 0x8c);
  in_ECX[0x24] = *(undefined4 *)(param_1 + 0x90);
  in_ECX[0x25] = *(undefined4 *)(param_1 + 0x94);
  in_ECX[0x26] = *(undefined4 *)(param_1 + 0x98);
  in_ECX[0x27] = *(undefined4 *)(param_1 + 0x9c);
  in_ECX[0x28] = *(undefined4 *)(param_1 + 0xa0);
  in_ECX[0x29] = *(undefined4 *)(param_1 + 0xa4);
  in_ECX[0x2a] = *(undefined4 *)(param_1 + 0xa8);
  in_ECX[0x2b] = *(undefined4 *)(param_1 + 0xac);
  in_ECX[0x2c] = *(undefined4 *)(param_1 + 0xb0);
  in_ECX[0x2d] = *(undefined4 *)(param_1 + 0xb4);
  in_ECX[0x2e] = *(undefined4 *)(param_1 + 0xb8);
  in_ECX[0x2f] = *(undefined4 *)(param_1 + 0xbc);
  in_ECX[0x30] = *(undefined4 *)(param_1 + 0xc0);
  in_ECX[0x31] = *(undefined4 *)(param_1 + 0xc4);
  in_ECX[0x32] = *(undefined4 *)(param_1 + 200);
  in_ECX[0x33] = *(undefined4 *)(param_1 + 0xcc);
  in_ECX[0x34] = *(undefined4 *)(param_1 + 0xd0);
  in_ECX[0x35] = *(undefined4 *)(param_1 + 0xd4);
  in_ECX[0x36] = *(undefined4 *)(param_1 + 0xd8);
  in_ECX[0x37] = *(undefined4 *)(param_1 + 0xdc);
  in_ECX[0x38] = *(undefined4 *)(param_1 + 0xe0);
  in_ECX[0x39] = *(undefined4 *)(param_1 + 0xe4);
  in_ECX[0x3a] = *(undefined4 *)(param_1 + 0xe8);
  in_ECX[0x3b] = *(undefined4 *)(param_1 + 0xec);
  in_ECX[0x3c] = *(undefined4 *)(param_1 + 0xf0);
  in_ECX[0x3d] = *(undefined4 *)(param_1 + 0xf4);
  in_ECX[0x3e] = *(undefined4 *)(param_1 + 0xf8);
  in_ECX[0x3f] = *(undefined4 *)(param_1 + 0xfc);
  in_ECX[0x40] = *(undefined4 *)(param_1 + 0x100);
  in_ECX[0x41] = *(undefined4 *)(param_1 + 0x104);
  in_ECX[0x42] = *(undefined4 *)(param_1 + 0x108);
  in_ECX[0x43] = *(undefined4 *)(param_1 + 0x10c);
  in_ECX[0x44] = *(undefined4 *)(param_1 + 0x110);
  return;
}


// ==== 105226e0 FUN_105226e0

void FUN_105226e0(int param_1)

{
  int in_ECX;
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
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
  *(undefined4 *)(in_ECX + 0x48) = *(undefined4 *)(param_1 + 0x48);
  *(undefined4 *)(in_ECX + 0x4c) = *(undefined4 *)(param_1 + 0x4c);
  *(undefined4 *)(in_ECX + 0x50) = *(undefined4 *)(param_1 + 0x50);
  *(undefined4 *)(in_ECX + 0x54) = *(undefined4 *)(param_1 + 0x54);
  *(undefined4 *)(in_ECX + 0x58) = *(undefined4 *)(param_1 + 0x58);
  *(undefined4 *)(in_ECX + 0x5c) = *(undefined4 *)(param_1 + 0x5c);
  *(undefined4 *)(in_ECX + 0x60) = *(undefined4 *)(param_1 + 0x60);
  *(undefined4 *)(in_ECX + 100) = *(undefined4 *)(param_1 + 100);
  *(undefined4 *)(in_ECX + 0x68) = *(undefined4 *)(param_1 + 0x68);
  puVar2 = (undefined4 *)(param_1 + 0x6c);
  puVar3 = (undefined4 *)(in_ECX + 0x6c);
  for (iVar1 = 7; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  *(undefined4 *)(in_ECX + 0x88) = *(undefined4 *)(param_1 + 0x88);
  *(undefined4 *)(in_ECX + 0x8c) = *(undefined4 *)(param_1 + 0x8c);
  *(undefined4 *)(in_ECX + 0x90) = *(undefined4 *)(param_1 + 0x90);
  *(undefined4 *)(in_ECX + 0x94) = *(undefined4 *)(param_1 + 0x94);
  *(undefined4 *)(in_ECX + 0x98) = *(undefined4 *)(param_1 + 0x98);
  *(undefined4 *)(in_ECX + 0x9c) = *(undefined4 *)(param_1 + 0x9c);
  *(undefined4 *)(in_ECX + 0xa0) = *(undefined4 *)(param_1 + 0xa0);
  *(undefined4 *)(in_ECX + 0xa4) = *(undefined4 *)(param_1 + 0xa4);
  *(undefined4 *)(in_ECX + 0xa8) = *(undefined4 *)(param_1 + 0xa8);
  *(undefined4 *)(in_ECX + 0xac) = *(undefined4 *)(param_1 + 0xac);
  *(undefined4 *)(in_ECX + 0xb0) = *(undefined4 *)(param_1 + 0xb0);
  *(undefined4 *)(in_ECX + 0xb4) = *(undefined4 *)(param_1 + 0xb4);
  *(undefined4 *)(in_ECX + 0xb8) = *(undefined4 *)(param_1 + 0xb8);
  *(undefined4 *)(in_ECX + 0xbc) = *(undefined4 *)(param_1 + 0xbc);
  *(undefined4 *)(in_ECX + 0xc0) = *(undefined4 *)(param_1 + 0xc0);
  *(undefined4 *)(in_ECX + 0xc4) = *(undefined4 *)(param_1 + 0xc4);
  *(undefined4 *)(in_ECX + 200) = *(undefined4 *)(param_1 + 200);
  *(undefined4 *)(in_ECX + 0xcc) = *(undefined4 *)(param_1 + 0xcc);
  *(undefined4 *)(in_ECX + 0xd0) = *(undefined4 *)(param_1 + 0xd0);
  *(undefined4 *)(in_ECX + 0xd4) = *(undefined4 *)(param_1 + 0xd4);
  *(undefined4 *)(in_ECX + 0xd8) = *(undefined4 *)(param_1 + 0xd8);
  *(undefined4 *)(in_ECX + 0xdc) = *(undefined4 *)(param_1 + 0xdc);
  *(undefined4 *)(in_ECX + 0xe0) = *(undefined4 *)(param_1 + 0xe0);
  *(undefined4 *)(in_ECX + 0xe4) = *(undefined4 *)(param_1 + 0xe4);
  *(undefined4 *)(in_ECX + 0xe8) = *(undefined4 *)(param_1 + 0xe8);
  *(undefined4 *)(in_ECX + 0xec) = *(undefined4 *)(param_1 + 0xec);
  *(undefined4 *)(in_ECX + 0xf0) = *(undefined4 *)(param_1 + 0xf0);
  *(undefined4 *)(in_ECX + 0xf4) = *(undefined4 *)(param_1 + 0xf4);
  *(undefined4 *)(in_ECX + 0xf8) = *(undefined4 *)(param_1 + 0xf8);
  *(undefined4 *)(in_ECX + 0xfc) = *(undefined4 *)(param_1 + 0xfc);
  *(undefined4 *)(in_ECX + 0x100) = *(undefined4 *)(param_1 + 0x100);
  *(undefined4 *)(in_ECX + 0x104) = *(undefined4 *)(param_1 + 0x104);
  *(undefined4 *)(in_ECX + 0x108) = *(undefined4 *)(param_1 + 0x108);
  *(undefined4 *)(in_ECX + 0x10c) = *(undefined4 *)(param_1 + 0x10c);
  *(undefined4 *)(in_ECX + 0x110) = *(undefined4 *)(param_1 + 0x110);
  return;
}


// ==== 105229d0 FUN_105229d0

void FUN_105229d0(byte param_1)

{
  FCollisionOctree *in_ECX;
  
  FCollisionOctree::~FCollisionOctree(in_ECX);
  if ((param_1 & 1) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))();
  }
  return;
}


// ==== 10522a00 FUN_10522a00

FCollisionOctree * FUN_10522a00(byte param_1)

{
  FCollisionOctree *in_ECX;
  
  if ((param_1 & 2) != 0) {
    _eh_vector_destructor_iterator_
              (in_ECX,0x114,*(int *)(in_ECX + -4),FCollisionOctree::~FCollisionOctree);
    if ((param_1 & 1) != 0) {
      (**(code **)(**(int **)GMalloc_exref + 8))(in_ECX + -4);
    }
    return in_ECX + -4;
  }
  FCollisionOctree::~FCollisionOctree(in_ECX);
  if ((param_1 & 1) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))();
  }
  return in_ECX;
}


// ==== 10522a80 FUN_10522a80

void FUN_10522a80(float param_1,float param_2,float param_3,int *param_4,int *param_5,int *param_6)

{
  int iVar1;
  
  iVar1 = appRound((param_1 + 360448.0) * 0.00390625);
  if (iVar1 < 0) {
    iVar1 = 0;
  }
  else if (0x3ffe < iVar1) {
    iVar1 = 0x3fff;
  }
  *param_4 = iVar1;
  iVar1 = appRound((param_2 + 360448.0) * 0.00390625);
  if (iVar1 < 0) {
    iVar1 = 0;
  }
  else if (0x3ffe < iVar1) {
    iVar1 = 0x3fff;
  }
  *param_5 = iVar1;
  iVar1 = appRound((param_3 + 360448.0) * 0.00390625);
  if (iVar1 < 0) {
    *param_6 = 0;
    return;
  }
  if (iVar1 < 0x3fff) {
    *param_6 = iVar1;
    return;
  }
  *param_6 = 0x3fff;
  return;
}


// ==== 10522b90 FUN_10522b90

void FUN_10522b90(int *param_1)

{
  int *piVar1;
  undefined1 local_38 [36];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10819450;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffbc;
  local_8 = 0;
  ExceptionList = &local_10;
  piVar1 = (int *)(**(code **)(*param_1 + 0x164))();
  (**(code **)(*piVar1 + 0x78))(local_38,param_1);
  FCollisionHash::GetHashIndices();
  FCollisionHash::GetHashIndices();
  ExceptionList = local_10;
  return;
}


// ==== 10522c43 Catch@10522c43

void Catch_10522c43(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 10522c57 Catch@10522c57

void Catch_10522c57(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"FCollisionHash::GetActorExtent");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10522cb0 FUN_10522cb0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10522cb0(UObject *param_1)

{
  FVector *this;
  FCollisionLink *pFVar1;
  undefined1 *puVar2;
  int iVar3;
  FCollisionLink *pFVar4;
  FCollisionHash *in_ECX;
  FOutputDevice *this_00;
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
  undefined4 local_8;
  
  puStack_c = &LAB_10819460;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffac;
  local_8 = 0;
  ExceptionList = &local_10;
  puVar2 = &stack0xffffffac;
  if (((byte)param_1[0x2f8] & 1) == 0) {
    ExceptionList = &local_10;
    appFailAssert("Actor->bCollideActors",".\\UnActCol.cpp",0x3fe);
    puVar2 = local_14;
  }
  local_14 = puVar2;
  if (((byte)param_1[100] & 0x80) == 0) {
    this = (FVector *)(param_1 + 0x33c);
    iVar3 = FVector::operator!=((FVector *)(param_1 + 0x1bc),this);
    if (iVar3 != 0) {
      iVar3 = FVector::operator==(this,this);
      if (iVar3 == 0) {
        appFailAssert("Actor->ColLocation == Actor->ColLocation",".\\UnActCol.cpp",0x403);
      }
      if (*(int *)GIsEditor_exref != 0) {
        if (*(int *)GLog_exref == 0) {
          UObject::GetFullName(param_1,(ushort *)0x0);
          FOutputDevice::Logf((FOutputDevice *)GError_exref,*(ushort **)GError_exref);
        }
        else {
          UObject::GetFullName(param_1,(ushort *)0x0);
          FOutputDevice::Logf2(this_00,*(ushort **)GLog_exref);
        }
      }
    }
    FCollisionHash::GetActorExtent
              (in_ECX,(AActor *)param_1,&local_24,&local_28,&local_2c,&local_30,&local_34,&local_38)
    ;
    for (; iVar3 = local_2c, local_20 = local_24, local_24 <= local_28; local_24 = local_24 + 1) {
      while (local_1c = iVar3, iVar3 <= local_30) {
        for (local_18 = local_34; local_18 <= local_38; local_18 = local_18 + 1) {
          pFVar4 = (FCollisionLink *)
                   FCollisionHash::GetHashLink(in_ECX,local_24,local_1c,local_18,&local_24);
          iVar3 = 0;
          while (*(FCollisionLink **)pFVar4 != (FCollisionLink *)0x0) {
            if ((*(int *)GIsEditor_exref == 0) || (iVar3 = iVar3 + 1, iVar3 < 0x2711)) {
              pFVar1 = *(FCollisionLink **)pFVar4;
              if (*(UObject **)pFVar1 == param_1) {
                *(int *)pFVar4 = *(int *)(pFVar1 + 4);
                *(int *)(pFVar1 + 4) = *(int *)(in_ECX + 0x10004);
                *(FCollisionLink **)(in_ECX + 0x10004) = pFVar1;
                _DAT_10c11da8 = _DAT_10c11da8 + -1;
              }
              else {
                pFVar4 = pFVar1 + 4;
              }
            }
            else {
              appMsgf(0,(ushort *)L"[FCollisionHash::RemoveActor] IterateCount Over 10000!");
            }
          }
          local_24 = local_20;
        }
        iVar3 = local_1c + 1;
      }
    }
    (**(code **)(*(int *)in_ECX + 0x24))();
  }
  ExceptionList = local_10;
  return;
}


// ==== 10522ea7 Catch@10522ea7

void Catch_10522ea7(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x40) = *(undefined4 *)(unaff_EBP + -0x44);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x40,&DAT_10914c48);
}


// ==== 10522ebb Catch@10522ebb

void Catch_10522ebb(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"FCollisionHash::RemoveActor");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10522f70 FUN_10522f70

int * FUN_10522f70(undefined4 param_1,float param_2,float param_3,float param_4,float param_5,
                  float param_6,float param_7,undefined4 param_8,undefined4 param_9,int param_10)

{
  FCollisionLink **ppFVar1;
  int iVar2;
  int *piVar3;
  FCollisionHash *in_ECX;
  FCollisionLink *pFVar4;
  int *piVar5;
  int *piVar6;
  int local_90 [12];
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  FCollisionHash *local_40;
  int local_3c;
  int local_38;
  int local_34;
  float local_30;
  float local_2c;
  float local_28;
  int local_24;
  int local_20;
  int local_1c;
  int *local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10819470;
  local_10 = ExceptionList;
  local_14 = &stack0xffffff64;
  local_8 = 0;
  local_18 = (int *)0x0;
  local_54 = param_2 - param_5;
  local_50 = param_3 - param_6;
  local_4c = param_4 - param_7;
  ExceptionList = &local_10;
  local_40 = in_ECX;
  local_30 = local_4c;
  local_2c = local_50;
  local_28 = local_54;
  FCollisionHash::GetHashIndices();
  local_60 = param_5 + param_2;
  local_5c = param_3 + param_6;
  local_58 = param_4 + param_7;
  local_30 = local_60;
  local_2c = local_5c;
  local_28 = local_58;
  FCollisionHash::GetHashIndices();
  FCollisionHash::CollisionTag = FCollisionHash::CollisionTag + 1;
  iVar2 = local_34;
  do {
    local_20 = local_38;
    local_24 = iVar2;
    if ((int)local_30 < iVar2) {
      ExceptionList = local_10;
      return local_18;
    }
    for (; local_1c = local_3c, local_20 <= (int)local_2c; local_20 = local_20 + 1) {
      for (; local_1c <= (int)local_28; local_1c = local_1c + 1) {
        ppFVar1 = FCollisionHash::GetHashLink(in_ECX,iVar2,local_20,local_1c,&local_34);
        for (pFVar4 = *ppFVar1; pFVar4 != (FCollisionLink *)0x0;
            pFVar4 = *(FCollisionLink **)(pFVar4 + 4)) {
          piVar3 = *(int **)pFVar4;
          if (((((*(byte *)(piVar3 + 0xbe) & 0x40) != 0) &&
               (piVar3[0x6c] != FCollisionHash::CollisionTag)) && (*(int *)(pFVar4 + 8) == local_34)
              ) && (iVar2 = (**(code **)(*piVar3 + 0x160))(0,param_8), iVar2 != 0)) {
            *(int *)(*(int *)pFVar4 + 0x1b0) = FCollisionHash::CollisionTag;
            thunk_FUN_104419f0(0x3f800000,0);
            piVar3 = (int *)(**(code **)(**(int **)pFVar4 + 0x164))();
            iVar2 = (**(code **)(*piVar3 + 0x68))
                              (local_90,*(int *)pFVar4,param_2,param_3,param_4,param_5,param_6,
                               param_7,0);
            if (iVar2 == 0) {
              if (local_90[1] != *(int *)pFVar4) {
                appFailAssert("TestHit.Actor==Link->Actor",".\\UnActCol.cpp",0x467);
              }
              piVar3 = (int *)thunk_FUN_10522300(0x30,GMem_exref,1,8);
              if (piVar3 == (int *)0x0) {
                piVar3 = (int *)0x0;
              }
              else {
                piVar3[0xb] = 0;
              }
              piVar5 = local_90;
              piVar6 = piVar3;
              for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
                *piVar6 = *piVar5;
                piVar5 = piVar5 + 1;
                piVar6 = piVar6 + 1;
              }
              *piVar3 = (int)local_18;
              local_18 = piVar3;
              if (param_10 != 0) {
                ExceptionList = local_10;
                return piVar3;
              }
            }
          }
        }
        iVar2 = local_24;
        in_ECX = local_40;
      }
    }
    iVar2 = iVar2 + 1;
  } while( true );
}


// ==== 10523202 Catch@10523202

void Catch_10523202(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x40) = *(undefined4 *)(unaff_EBP + -0x44);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x40,&DAT_10914c48);
}


// ==== 10523216 Catch@10523216

void Catch_10523216(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"FCollisionHash::ActorPointCheck");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 105232f0 FUN_105232f0

int FUN_105232f0(undefined4 param_1,float param_2,float param_3,float param_4,float param_5)

{
  FCollisionLink **ppFVar1;
  int *piVar2;
  FCollisionHash *in_ECX;
  int iVar3;
  FCollisionLink *pFVar4;
  int *piVar5;
  int iVar6;
  float fVar7;
  undefined4 ****ppppuVar8;
  FBox local_ac [28];
  float local_90;
  float local_84;
  undefined1 *local_74;
  void *local_70;
  undefined1 *puStack_6c;
  undefined4 local_68;
  float local_64;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  int *local_4c;
  float local_48;
  int local_44;
  float local_40;
  int local_3c;
  int local_38;
  FCollisionHash *local_34;
  float local_2c;
  int local_28;
  float local_24;
  undefined4 ***local_20;
  float local_1c;
  float local_18;
  float local_14;
  undefined4 ***local_10;
  float local_c;
  float local_8;
  
  puStack_6c = &LAB_10819480;
  local_70 = ExceptionList;
  local_74 = &stack0xffffff48;
  piVar5 = (int *)0x0;
  local_68 = 0;
  local_4c = (int *)0x0;
  local_90 = param_5;
  local_58 = param_2 - param_5;
  local_54 = param_3 - param_5;
  local_50 = param_4 - param_5;
  ExceptionList = &local_70;
  local_34 = in_ECX;
  local_10 = (undefined4 ***)local_50;
  local_c = local_58;
  local_8 = local_54;
  FCollisionHash::GetHashIndices();
  local_84 = param_5;
  ppppuVar8 = (undefined4 ****)(param_2 + param_5);
  local_1c = param_3 + param_5;
  local_18 = param_5 + param_4;
  local_20 = ppppuVar8;
  local_10 = ppppuVar8;
  local_c = local_18;
  local_8 = local_1c;
  FCollisionHash::GetHashIndices();
  FCollisionHash::CollisionTag = FCollisionHash::CollisionTag + 1;
  local_2c = param_5 * param_5;
  fVar7 = local_14;
  do {
    local_28 = local_38;
    local_24 = fVar7;
    if ((int)local_10 < (int)fVar7) {
      ExceptionList = local_70;
      return (int)piVar5;
    }
    for (; iVar3 = local_3c, local_28 <= (int)local_8; local_28 = local_28 + 1) {
      for (; iVar3 <= (int)local_c; iVar3 = iVar3 + 1) {
        local_44 = iVar3;
        ppFVar1 = FCollisionHash::GetHashLink(in_ECX,(int)fVar7,local_28,iVar3,(int *)&param_5);
        pFVar4 = *ppFVar1;
        while (pFVar4 != (FCollisionLink *)0x0) {
          iVar6 = (int)piVar5;
          if ((*(int *)(*(int *)pFVar4 + 0x1b0) == FCollisionHash::CollisionTag) ||
             (*(float *)(pFVar4 + 8) != param_5)) {
LAB_105234fa:
            pFVar4 = *(FCollisionLink **)(pFVar4 + 4);
            piVar5 = (int *)iVar6;
          }
          else {
            *(int *)(*(int *)pFVar4 + 0x1b0) = FCollisionHash::CollisionTag;
            piVar2 = (int *)(**(code **)(**(int **)pFVar4 + 0x164))(ppppuVar8);
            (**(code **)(*piVar2 + 0x78))(local_ac,*(int *)pFVar4);
            ppppuVar8 = &local_20;
            FBox::GetCenter(local_ac);
            local_64 = (float)local_20 - param_2;
            local_60 = local_1c - param_3;
            local_5c = local_18 - param_4;
            local_48 = local_5c;
            local_40 = local_60;
            local_14 = local_64;
            fVar7 = FVector::SizeSquared((FVector *)&local_64);
            if (local_2c <= fVar7) goto LAB_105234fa;
            local_4c = (int *)thunk_FUN_10522300(0x30,GMem_exref,1,8);
            if (local_4c == (int *)0x0) {
              iRam00000004 = *(int *)pFVar4;
              iVar6 = 0;
              local_4c = (int *)0x0;
              iRam00000000 = (int)piVar5;
              goto LAB_105234fa;
            }
            local_4c[0xb] = 0;
            local_4c[1] = *(int *)pFVar4;
            *local_4c = (int)piVar5;
            pFVar4 = *(FCollisionLink **)(pFVar4 + 4);
            piVar5 = local_4c;
          }
        }
        fVar7 = local_24;
        in_ECX = local_34;
      }
    }
    fVar7 = (float)((int)fVar7 + 1);
  } while( true );
}


// ==== 1052353f Catch@1052353f

void Catch_1052353f(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + 0x34) = *(undefined4 *)(unaff_EBP + -0x14);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + 0x34,&DAT_10914c48);
}


// ==== 10523553 Catch@10523553

void Catch_10523553(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"FCollisionHash::ActorVisRadiusCheck");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10523610 FUN_10523610

undefined4 FUN_10523610(undefined4 param_1,AActor *param_2)

{
  undefined1 *puVar1;
  FCollisionLink **ppFVar2;
  int iVar3;
  undefined4 *puVar4;
  FCollisionHash *in_ECX;
  int iVar5;
  FCollisionLink *pFVar6;
  FCheckResult *pFVar7;
  undefined4 *puVar8;
  undefined4 in_stack_00000024;
  FCheckResult local_7c [4];
  int local_78;
  undefined4 local_5c;
  undefined4 local_44;
  FCollisionHash *local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  undefined4 *local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10819490;
  local_10 = ExceptionList;
  local_14 = &stack0xffffff78;
  local_8 = 0;
  ExceptionList = &local_10;
  local_40 = in_ECX;
  puVar1 = &stack0xffffff78;
  if (param_2 == (AActor *)0x0) {
    ExceptionList = &local_10;
    appFailAssert("Actor!=NULL",".\\UnActCol.cpp",0x4b8);
    puVar1 = local_14;
  }
  local_14 = puVar1;
  thunk_FUN_10522250(&stack0x0000000c,param_2 + 0x1bc);
  thunk_FUN_10522290(&stack0x00000018,param_2 + 0x1c8);
  FCollisionHash::GetActorExtent
            (in_ECX,param_2,&local_28,&local_2c,&local_30,&local_34,&local_38,&local_3c);
  puVar8 = &local_44;
  FCollisionHash::CollisionTag = FCollisionHash::CollisionTag + 1;
  local_18 = puVar8;
  for (iVar3 = local_28; iVar5 = local_30, local_24 = iVar3, iVar3 <= local_2c; iVar3 = iVar3 + 1) {
    while (local_20 = iVar5, iVar5 <= local_34) {
      for (local_1c = local_38; local_1c <= local_3c; local_1c = local_1c + 1) {
        ppFVar2 = FCollisionHash::GetHashLink(local_40,iVar3,local_20,local_1c,&local_28);
        for (pFVar6 = *ppFVar2; pFVar6 != (FCollisionLink *)0x0;
            pFVar6 = *(FCollisionLink **)(pFVar6 + 4)) {
          if ((((*(int *)(*(AActor **)pFVar6 + 0x1b0) != FCollisionHash::CollisionTag) &&
               (*(int *)(pFVar6 + 8) == local_28)) &&
              (iVar3 = AActor::IsJoinedTo(*(AActor **)pFVar6,param_2), iVar3 == 0)) &&
             ((iVar3 = (**(code **)(**(int **)pFVar6 + 0x160))(param_2,in_stack_00000024),
              iVar3 != 0 &&
              ((iVar3 = AActor::IsEncroacher(param_2), iVar3 == 0 ||
               ((*(byte *)(*(int *)pFVar6 + 0x74) & 2) == 0)))))) {
            *(int *)(*(int *)pFVar6 + 0x1b0) = FCollisionHash::CollisionTag;
            thunk_FUN_104419f0(0x3f800000,0);
            iVar3 = AActor::IsOverlapping(param_2,*(AActor **)pFVar6,local_7c);
            if (iVar3 != 0) {
              local_78 = *(int *)pFVar6;
              local_5c = 0;
              puVar4 = (undefined4 *)thunk_FUN_10522300(0x30,GMem_exref,1,8);
              if (puVar4 == (undefined4 *)0x0) {
                puVar4 = (undefined4 *)0x0;
              }
              else {
                puVar4[0xb] = 0;
              }
              *puVar8 = puVar4;
              pFVar7 = local_7c;
              for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
                *puVar4 = *(undefined4 *)pFVar7;
                pFVar7 = pFVar7 + 4;
                puVar4 = puVar4 + 1;
              }
              puVar8 = (undefined4 *)*local_18;
              local_18 = puVar8;
            }
          }
        }
        iVar3 = local_24;
      }
      iVar5 = local_20 + 1;
    }
  }
  thunk_FUN_10522250(&stack0x0000000c,param_2 + 0x1bc);
  thunk_FUN_10522290(&stack0x00000018,param_2 + 0x1c8);
  *puVar8 = 0;
  ExceptionList = local_10;
  return local_44;
}


// ==== 10523830 Catch@10523830

void Catch_10523830(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x44) = *(undefined4 *)(unaff_EBP + -0x48);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x44,&DAT_10914c48);
}


// ==== 10523844 Catch@10523844

void Catch_10523844(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"FCollisionHash::ActorEncroachmentCheck");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10523900 FUN_10523900

undefined4 *
FUN_10523900(undefined4 param_1,float param_2,float param_3,float **param_4,float param_5,
            float param_6,float *param_7,float param_8,float param_9,float param_10,uint param_11,
            undefined4 param_12,AActor *param_13)

{
  AActor *pAVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  float *pfVar5;
  FCollisionLink **ppFVar6;
  int *piVar7;
  undefined4 *puVar8;
  FBox *pFVar9;
  FCollisionHash *in_ECX;
  FCollisionLink *pFVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  uint uVar13;
  bool bVar14;
  float fVar15;
  float fVar16;
  float **ppfVar17;
  float *pfVar18;
  float *pfVar19;
  float *pfVar20;
  float fVar21;
  float fVar22;
  float *pfVar23;
  FVector *pFVar24;
  float *pfVar25;
  FVector *pFVar26;
  float *pfVar27;
  FVector local_f0 [28];
  undefined4 local_d4 [5];
  FBox local_c0 [28];
  float local_a4;
  float local_a0;
  float local_9c;
  float local_98;
  float local_94;
  float local_90;
  float *local_84;
  float local_80;
  float local_7c;
  int local_78 [2];
  float local_70;
  float *local_6c;
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  undefined1 *local_58;
  void *local_54;
  undefined1 *puStack_50;
  undefined4 local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  FCollisionHash *local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float *local_10;
  float local_c;
  undefined4 *local_8;
  
  pfVar27 = &local_48;
  puStack_50 = &LAB_108194a0;
  local_54 = ExceptionList;
  local_58 = &stack0xffffff04;
  local_4c = 0;
  local_8 = (undefined4 *)0x0;
  FCollisionHash::CollisionTag = FCollisionHash::CollisionTag + 1;
  ExceptionList = &local_54;
  local_30 = in_ECX;
  iVar4 = FVector::IsZero((FVector *)&param_8);
  if (iVar4 == 0) {
    pFVar26 = (FVector *)&param_5;
    pFVar24 = local_f0;
    pFVar9 = (FBox *)FBox::FBox(local_c0,0);
    pFVar9 = (FBox *)FBox::operator+(pFVar9,pFVar24);
    FBox::operator+(pFVar9,pFVar26);
    pfVar20 = (float *)(local_a4 - param_8);
    fVar21 = local_a0 - param_9;
    fVar22 = local_9c - param_10;
    pfVar25 = &local_5c;
    pfVar23 = &local_24;
    local_84 = pfVar20;
    local_80 = fVar21;
    local_7c = fVar22;
    local_1c = fVar21;
    local_18 = fVar22;
    local_10 = pfVar20;
    FCollisionHash::GetHashIndices();
    local_6c = (float *)(local_98 + param_8);
    fVar15 = local_94 + param_9;
    fVar16 = local_90 + param_10;
    pfVar19 = &local_18;
    pfVar18 = &local_1c;
    ppfVar17 = &local_10;
    local_68 = fVar15;
    local_64 = fVar16;
    local_1c = fVar15;
    local_18 = fVar16;
    local_10 = local_6c;
    FCollisionHash::GetHashIndices();
    pfVar5 = pfVar27;
    for (local_38 = local_24; (int)local_38 <= (int)local_10; local_38 = (float)((int)local_38 + 1))
    {
      for (local_28 = local_5c; (int)local_28 <= (int)local_1c;
          local_28 = (float)((int)local_28 + 1)) {
        for (local_2c = local_48; (int)local_2c <= (int)local_18;
            local_2c = (float)((int)local_2c + 1)) {
          ppFVar6 = FCollisionHash::GetHashLink
                              (local_30,(int)local_38,(int)local_28,(int)local_2c,(int *)&local_24);
          uVar13 = param_11;
          for (pFVar10 = *ppFVar6; pFVar10 != (FCollisionLink *)0x0;
              pFVar10 = *(FCollisionLink **)(pFVar10 + 4)) {
            if ((*(int *)(*(int *)pFVar10 + 0x1b0) != FCollisionHash::CollisionTag) &&
               (*(float *)(pFVar10 + 8) == local_24)) {
              thunk_FUN_104419f0(0,0);
              *(int *)(*(int *)pFVar10 + 0x1b0) = FCollisionHash::CollisionTag;
              pAVar1 = *(AActor **)pFVar10;
              if ((((byte)pAVar1[0x2f8] & 0x40) != 0) &&
                 (((pAVar1 != param_13 && (iVar4 = AActor::IsOwnedBy(param_13,pAVar1), iVar4 == 0))
                  && (iVar4 = (**(code **)(*(int *)pAVar1 + 0x160))(param_13,uVar13), iVar4 != 0))))
              {
                piVar7 = (int *)(**(code **)(**(int **)pFVar10 + 0x164))();
                iVar4 = (**(code **)(*piVar7 + 0x6c))
                                  (local_d4,*(int *)pFVar10,param_2,param_3,param_4,param_5,param_6,
                                   param_7,param_8,param_9,param_10,param_12,uVar13);
                local_60 = (float)(uint)(iVar4 == 0);
                if (local_60 != 0.0) {
                  puVar8 = (undefined4 *)thunk_FUN_10522300(0x30,param_1,1,8);
                  if (puVar8 == (undefined4 *)0x0) {
                    puVar8 = (undefined4 *)0x0;
                  }
                  else {
                    puVar11 = local_d4;
                    puVar12 = puVar8;
                    for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
                      *puVar12 = *puVar11;
                      puVar11 = puVar11 + 1;
                      puVar12 = puVar12 + 1;
                    }
                  }
                  *puVar8 = local_8;
                  uVar13 = param_11;
                  local_8 = puVar8;
                  if ((param_11 & 0x200) != 0) {
                    ExceptionList = local_54;
                    return puVar8;
                  }
                }
              }
            }
          }
        }
      }
    }
    if ((local_8 != (undefined4 *)0x0) && (puVar8 = local_8, (param_11 & 0x400) != 0)) {
LAB_10523bc1:
      local_8 = (undefined4 *)
                thunk_FUN_105ff170(puVar8,param_11,fVar15,fVar16,ppfVar17,pfVar18,pfVar19,pfVar20,
                                   fVar21,fVar22,pfVar23,pfVar25,pfVar5);
    }
  }
  else {
    local_44 = param_2 - param_5;
    local_40 = param_3 - param_6;
    local_3c = (float)param_4 - (float)param_7;
    local_34 = local_44;
    local_14 = local_40;
    local_c = local_3c;
    pfVar5 = (float *)FVector::SafeNormal((FVector *)&local_44);
    local_44 = *pfVar5;
    local_40 = pfVar5[1];
    local_3c = pfVar5[2];
    pfVar5 = &local_14;
    pfVar25 = &local_20;
    fVar21 = param_5;
    fVar22 = param_6;
    pfVar23 = param_7;
    FCollisionHash::GetHashIndices();
    pfVar20 = &local_18;
    pfVar19 = &local_24;
    pfVar18 = &local_5c;
    fVar15 = param_2;
    fVar16 = param_3;
    ppfVar17 = param_4;
    FCollisionHash::GetHashIndices();
    bVar14 = true;
    while (bVar14) {
      ppFVar6 = FCollisionHash::GetHashLink
                          (in_ECX,(int)local_20,(int)local_14,(int)local_c,local_78);
      for (pFVar10 = *ppFVar6; pFVar10 != (FCollisionLink *)0x0;
          pFVar10 = *(FCollisionLink **)(pFVar10 + 4)) {
        if ((*(int *)(*(int *)pFVar10 + 0x1b0) != FCollisionHash::CollisionTag) &&
           (*(int *)(pFVar10 + 8) == local_78[0])) {
          thunk_FUN_104419f0(0,0);
          *(int *)(*(int *)pFVar10 + 0x1b0) = FCollisionHash::CollisionTag;
          pAVar1 = *(AActor **)pFVar10;
          if ((((byte)pAVar1[0x2f8] & 0x20) != 0) &&
             (((pAVar1 != param_13 && (iVar4 = AActor::IsOwnedBy(param_13,pAVar1), iVar4 == 0)) &&
              (iVar4 = (**(code **)(*(int *)pAVar1 + 0x160))(param_13,param_11), iVar4 != 0)))) {
            piVar7 = (int *)(**(code **)(**(int **)pFVar10 + 0x164))();
            iVar4 = (**(code **)(*piVar7 + 0x6c))
                              (local_d4,*(int *)pFVar10,param_2,param_3,param_4,param_5,param_6,
                               param_7,param_8,param_9,param_10,param_12,param_11);
            local_10 = (float *)(uint)(iVar4 == 0);
            if (local_10 != (float *)0x0) {
              puVar8 = (undefined4 *)thunk_FUN_10522300(0x30,param_1,1,8);
              if (puVar8 == (undefined4 *)0x0) {
                puVar8 = (undefined4 *)0x0;
              }
              else {
                puVar11 = local_d4;
                puVar12 = puVar8;
                for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
                  *puVar12 = *puVar11;
                  puVar11 = puVar11 + 1;
                  puVar12 = puVar12 + 1;
                }
              }
              *puVar8 = local_8;
              local_8 = puVar8;
              if ((param_11 & 0x200) != 0) break;
            }
          }
        }
      }
      puVar8 = local_8;
      if (local_8 != (undefined4 *)0x0) {
        if ((param_11 & 0x200) != 0) {
          ExceptionList = local_54;
          return local_8;
        }
        if ((((param_11 & 0x400) != 0) &&
            (FCollisionHash::GetHashIndices
                       (local_30,local_8[2],local_8[3],local_8[4],&local_70,&local_60,pfVar27),
            local_70 == local_20)) && ((local_60 == local_14 && (local_48 == local_c))))
        goto LAB_10523bc1;
      }
      fVar3 = local_c;
      fVar2 = local_14;
      in_ECX = local_30;
      if (((local_20 == local_5c) && (local_14 == local_24)) && (local_c == local_18)) {
        bVar14 = false;
      }
      else {
        local_1c = FCollisionHash::DistanceToHashPlane
                             (local_30,(int)local_20,local_44,param_5,0x100);
        local_10 = (float *)FCollisionHash::DistanceToHashPlane
                                      (in_ECX,(int)fVar2,local_40,param_6,0x100);
        local_34 = FCollisionHash::DistanceToHashPlane
                             (in_ECX,(int)fVar3,local_3c,(float)param_7,0x100);
        if (((float)local_10 < local_1c) || (local_34 < local_1c)) {
          if (((NAN((float)local_10) || NAN(local_1c)) ||
               (float)local_10 < local_1c == ((float)local_10 == local_1c)) ||
             (local_34 < (float)local_10)) {
            local_c = (float)((int)fVar3 + -1);
            if (0.0 <= local_3c) {
              local_c = (float)((int)fVar3 + 1);
            }
            bVar14 = (uint)local_c < 0x4000;
            in_ECX = local_30;
          }
          else {
            local_14 = (float)((int)fVar2 - 1);
            if (0.0 <= local_40) {
              local_14 = (float)((int)fVar2 + 1);
            }
            bVar14 = (uint)local_14 < 0x4000;
            in_ECX = local_30;
          }
        }
        else if (0.0 <= local_44) {
          local_20 = (float)((int)local_20 + 1);
          bVar14 = (uint)local_20 < 0x4000;
          in_ECX = local_30;
        }
        else {
          local_20 = (float)((int)local_20 - 1);
          bVar14 = (uint)local_20 < 0x4000;
        }
      }
    }
  }
  ExceptionList = local_54;
  return local_8;
}


// ==== 10523fe3 Catch@10523fe3

void Catch_10523fe3(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x2c) = *(undefined4 *)(unaff_EBP + -0x40);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x2c,&DAT_10914c48);
}


// ==== 10523ff7 Catch@10523ff7

void Catch_10523ff7(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"FCollisionHash::ActorLineCheck");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 105241e0 FUN_105241e0

void FUN_105241e0(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  FArray *in_ECX;
  int iVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_108194b9;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX,param_1[1],4);
  local_4 = 0;
  iVar3 = 0;
  *(undefined4 *)(in_ECX + 4) = 0;
  if (0 < param_1[1]) {
    do {
      iVar2 = FArray::Add(in_ECX,1,4);
      puVar1 = (undefined4 *)(*(int *)in_ECX + iVar2 * 4);
      if (puVar1 != (undefined4 *)0x0) {
        *puVar1 = *(undefined4 *)(*param_1 + iVar3 * 4);
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < param_1[1]);
  }
  ExceptionList = local_c;
  return;
}


// ==== 10524290 FUN_10524290

void FUN_10524290(undefined4 *param_1)

{
  int iVar1;
  FArray *in_ECX;
  
  iVar1 = FArray::Add(in_ECX,1,4);
  *(undefined4 *)(*(int *)in_ECX + iVar1 * 4) = *param_1;
  return;
}


// ==== 10524380 FUN_10524380

void FUN_10524380(int param_1)

{
  int in_ECX;
  
  thunk_FUN_1032bfc0(param_1);
  *(undefined4 *)(in_ECX + 0xc) = *(undefined4 *)(param_1 + 0xc);
  return;
}


// ==== 105243b0 FUN_105243b0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105243b0(AActor *param_1)

{
  FCollisionHash *pFVar1;
  int iVar2;
  FCollisionLink *pFVar3;
  undefined1 *puVar4;
  FCollisionLink **ppFVar5;
  int iVar6;
  FCollisionHash *in_ECX;
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
  undefined4 local_8;
  
  puStack_c = &LAB_108194d0;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffb0;
  local_8 = 0;
  ExceptionList = &local_10;
  puVar4 = &stack0xffffffb0;
  if (((byte)param_1[0x2f8] & 1) == 0) {
    ExceptionList = &local_10;
    appFailAssert("Actor->bCollideActors",".\\UnActCol.cpp",0x3cc);
    puVar4 = local_14;
  }
  local_14 = puVar4;
  if ((((byte)param_1[100] & 0x80) == 0) && ((*(uint *)(param_1 + 0x2e4) & 0x4000) == 0)) {
    (**(code **)(*(int *)in_ECX + 0x24))(param_1);
    _DAT_10c11da0 = _DAT_10c11da0 + 1;
    FCollisionHash::GetActorExtent
              (in_ECX,param_1,&local_24,&local_28,&local_2c,&local_30,&local_34,&local_38);
    for (iVar6 = local_24; local_1c = local_2c, local_20 = iVar6, iVar6 <= local_28;
        iVar6 = iVar6 + 1) {
      for (; local_1c <= local_30; local_1c = local_1c + 1) {
        for (local_18 = local_34; local_18 <= local_38; local_18 = local_18 + 1) {
          ppFVar5 = FCollisionHash::GetHashLink(in_ECX,iVar6,local_1c,local_18,&local_24);
          pFVar1 = in_ECX + 0x10004;
          if (*(int *)pFVar1 == 0) {
            iVar6 = thunk_FUN_10329e10(0x3000,L"FCollisionLink");
            *(int *)pFVar1 = iVar6;
            _DAT_10c11db0 = _DAT_10c11db0 + 0x3000;
            thunk_FUN_10524290(pFVar1);
            for (iVar6 = 0; iVar6 < 0x3ff; iVar6 = iVar6 + 1) {
              iVar2 = *(int *)pFVar1 + iVar6 * 0xc;
              *(int *)(iVar2 + 4) = iVar2 + 0xc;
            }
            *(undefined4 *)(*(int *)pFVar1 + 0x2ff8) = 0;
          }
          pFVar3 = *(FCollisionLink **)pFVar1;
          *(int *)pFVar1 = *(int *)(pFVar3 + 4);
          *(AActor **)pFVar3 = param_1;
          *(FCollisionLink **)(pFVar3 + 4) = *ppFVar5;
          *(int *)(pFVar3 + 8) = local_24;
          *ppFVar5 = pFVar3;
          _DAT_10c11da8 = _DAT_10c11da8 + 1;
          _DAT_10c11da4 = _DAT_10c11da4 + 1;
          iVar6 = local_20;
        }
      }
    }
    *(undefined4 *)(param_1 + 0x33c) = *(undefined4 *)(param_1 + 0x1bc);
    *(undefined4 *)(param_1 + 0x340) = *(undefined4 *)(param_1 + 0x1c0);
    *(undefined4 *)(param_1 + 0x344) = *(undefined4 *)(param_1 + 0x1c4);
  }
  ExceptionList = local_10;
  return;
}


// ==== 1052456d Catch@1052456d

void Catch_1052456d(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x3c) = *(undefined4 *)(unaff_EBP + -0x40);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x3c,&DAT_10914c48);
}


// ==== 10524581 Catch@10524581

void Catch_10524581(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"FCollisionHash::AddActor");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10524620 FUN_10524620

void FUN_10524620(void)

{
  int iVar1;
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_108194e9;
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


// ==== 105246e0 FUN_105246e0

void FUN_105246e0(FArray *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  FArray *in_ECX;
  int iVar3;
  
  if (in_ECX != param_1) {
    FArray::Empty(in_ECX,4,*(int *)(param_1 + 4));
    iVar3 = 0;
    if (0 < *(int *)(param_1 + 4)) {
      do {
        iVar2 = FArray::Add(in_ECX,1,4);
        puVar1 = (undefined4 *)(*(int *)in_ECX + iVar2 * 4);
        if (puVar1 != (undefined4 *)0x0) {
          *puVar1 = *(undefined4 *)(*(int *)param_1 + iVar3 * 4);
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < *(int *)(param_1 + 4));
    }
    return;
  }
  return;
}


// ==== 10524750 FUN_10524750

void FUN_10524750(int param_1)

{
  int in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10819508;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  thunk_FUN_1032bef0(param_1);
  *(undefined4 *)(in_ECX + 0xc) = *(undefined4 *)(param_1 + 0xc);
  ExceptionList = local_c;
  return;
}


// ==== 105247c0 FUN_105247c0

void FUN_105247c0(int param_1)

{
  undefined4 *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_10819536;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *in_ECX = FCollisionHashBase::vftable;
  local_4 = 0;
  *in_ECX = FCollisionHash::vftable;
  _memcpy(in_ECX + 1,(void *)(param_1 + 4),0x10000);
  in_ECX[0x4001] = *(undefined4 *)(param_1 + 0x10004);
  thunk_FUN_105241e0(param_1 + 0x10008);
  in_ECX[0x4005] = *(undefined4 *)(param_1 + 0x10014);
  in_ECX[0x4006] = *(undefined4 *)(param_1 + 0x10018);
  in_ECX[0x4007] = *(undefined4 *)(param_1 + 0x1001c);
  in_ECX[0x4008] = *(undefined4 *)(param_1 + 0x10020);
  in_ECX[0x4009] = *(undefined4 *)(param_1 + 0x10024);
  in_ECX[0x400a] = *(undefined4 *)(param_1 + 0x10028);
  in_ECX[0x400b] = *(undefined4 *)(param_1 + 0x1002c);
  in_ECX[0x400c] = *(undefined4 *)(param_1 + 0x10030);
  ExceptionList = local_c;
  return;
}


// ==== 105248f0 FUN_105248f0

void FUN_105248f0(int param_1)

{
  undefined4 *puVar1;
  undefined4 *in_ECX;
  int iVar2;
  
  iVar2 = 0x4000;
  puVar1 = in_ECX;
  do {
    puVar1 = puVar1 + 1;
    *puVar1 = *(undefined4 *)((param_1 - (int)in_ECX) + (int)puVar1);
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  in_ECX[0x4001] = *(undefined4 *)(param_1 + 0x10004);
  thunk_FUN_105246e0(param_1 + 0x10008);
  in_ECX[0x4005] = *(undefined4 *)(param_1 + 0x10014);
  in_ECX[0x4006] = *(undefined4 *)(param_1 + 0x10018);
  in_ECX[0x4007] = *(undefined4 *)(param_1 + 0x1001c);
  in_ECX[0x4008] = *(undefined4 *)(param_1 + 0x10020);
  in_ECX[0x4009] = *(undefined4 *)(param_1 + 0x10024);
  in_ECX[0x400a] = *(undefined4 *)(param_1 + 0x10028);
  in_ECX[0x400b] = *(undefined4 *)(param_1 + 0x1002c);
  in_ECX[0x400c] = *(undefined4 *)(param_1 + 0x10030);
  return;
}


// ==== 105249d0 FUN_105249d0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * FUN_105249d0(void)

{
  int *piVar1;
  uint uVar2;
  undefined4 *in_ECX;
  int iVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1081956f;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *in_ECX = FCollisionHashBase::vftable;
  iVar3 = 0;
  local_8 = 0;
  *in_ECX = FCollisionHash::vftable;
  in_ECX[0x4001] = 0;
  FArray::FArray((FArray *)(in_ECX + 0x4002));
  local_8 = CONCAT31((int3)((uint)local_8 >> 8),3);
  if (FCollisionHash::Inited == 0) {
    FCollisionHash::Inited = 1;
    for (piVar1 = (int *)0x0; (int)piVar1 < 0x4000; piVar1 = (int *)((int)piVar1 + 1)) {
      (&FCollisionHash::HashZ)[(int)piVar1] = piVar1;
      (&FCollisionHash::HashY)[(int)piVar1] = piVar1;
      (&FCollisionHash::HashX)[(int)piVar1] = piVar1;
    }
    for (; iVar3 < 0x4000; iVar3 = iVar3 + 1) {
      uVar2 = appRand();
      uVar2 = uVar2 & 0x80003fff;
      if ((int)uVar2 < 0) {
        uVar2 = (uVar2 - 1 | 0xffffc000) + 1;
      }
      piVar1 = (&FCollisionHash::HashX)[iVar3];
      (&FCollisionHash::HashX)[iVar3] = (&FCollisionHash::HashX)[uVar2];
      (&FCollisionHash::HashX)[uVar2] = piVar1;
      uVar2 = appRand();
      uVar2 = uVar2 & 0x80003fff;
      if ((int)uVar2 < 0) {
        uVar2 = (uVar2 - 1 | 0xffffc000) + 1;
      }
      piVar1 = (&FCollisionHash::HashY)[iVar3];
      (&FCollisionHash::HashY)[iVar3] = (&FCollisionHash::HashY)[uVar2];
      (&FCollisionHash::HashY)[uVar2] = piVar1;
      uVar2 = appRand();
      uVar2 = uVar2 & 0x80003fff;
      if ((int)uVar2 < 0) {
        uVar2 = (uVar2 - 1 | 0xffffc000) + 1;
      }
      piVar1 = (&FCollisionHash::HashZ)[iVar3];
      (&FCollisionHash::HashZ)[iVar3] = (&FCollisionHash::HashZ)[uVar2];
      (&FCollisionHash::HashZ)[uVar2] = piVar1;
    }
  }
  for (iVar3 = 0; iVar3 < 0x4000; iVar3 = iVar3 + 1) {
    in_ECX[iVar3 + 1] = 0;
  }
  in_ECX[0x4005] = 0;
  in_ECX[0x4006] = 0;
  in_ECX[0x4007] = 0;
  in_ECX[0x4008] = 0;
  in_ECX[0x4009] = 0;
  in_ECX[0x400a] = 0;
  in_ECX[0x400b] = 0;
  in_ECX[0x400c] = 0;
  _DAT_10c11db0 = 0x40034;
  ExceptionList = local_10;
  return in_ECX;
}


// ==== 10524b70 Catch@10524b70

void Catch_10524b70(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x20) = *(undefined4 *)(unaff_EBP + -0x2c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x20,&DAT_10914c48);
}


// ==== 10524b84 Catch@10524b84

void Catch_10524b84(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"FCollisionHash::FCollisionHash");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10524c20 FUN_10524c20

void FUN_10524c20(void)

{
  undefined4 *in_ECX;
  int iVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_108195a6;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *in_ECX = FCollisionHash::vftable;
  local_8 = 2;
  for (iVar1 = 0; iVar1 < (int)in_ECX[0x4003]; iVar1 = iVar1 + 1) {
    (**(code **)(**(int **)GMalloc_exref + 8))(*(undefined4 *)(in_ECX[0x4002] + iVar1 * 4));
  }
  local_8 = 0;
  thunk_FUN_10524620();
  *in_ECX = FCollisionHashBase::vftable;
  ExceptionList = local_10;
  return;
}


// ==== 10524cb1 Catch@10524cb1

void Catch_10524cb1(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x20);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_10914c48);
}


// ==== 10524cc5 Catch@10524cc5

void Catch_10524cc5(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"FCollisionHash::~FCollisionHash");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10524d20 FUN_10524d20

void FUN_10524d20(byte param_1)

{
  FCollisionHash *in_ECX;
  
  FCollisionHash::~FCollisionHash(in_ECX);
  if ((param_1 & 1) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))();
  }
  return;
}


// ==== 10524d50 FUN_10524d50

FCollisionHash * FUN_10524d50(byte param_1)

{
  FCollisionHash *in_ECX;
  
  if ((param_1 & 2) != 0) {
    _eh_vector_destructor_iterator_
              (in_ECX,0x10034,*(int *)(in_ECX + -4),FCollisionHash::~FCollisionHash);
    if ((param_1 & 1) != 0) {
      (**(code **)(**(int **)GMalloc_exref + 8))(in_ECX + -4);
    }
    return in_ECX + -4;
  }
  FCollisionHash::~FCollisionHash(in_ECX);
  if ((param_1 & 1) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))();
  }
  return in_ECX;
}


// ==== 10524dd0 FUN_10524dd0

undefined4 FUN_10524dd0(void)

{
  FCollisionHash *this;
  undefined4 uVar1;
  FCollisionOctree *this_00;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_108195c0;
  local_10 = ExceptionList;
  local_8 = 0;
  if (*(int *)GIsEditor_exref == 0) {
    ExceptionList = &local_10;
    this_00 = (FCollisionOctree *)thunk_FUN_103ff710(0x114,L"FCollisionOctree");
    if (this_00 != (FCollisionOctree *)0x0) {
      uVar1 = FCollisionOctree::FCollisionOctree(this_00);
      ExceptionList = local_10;
      return uVar1;
    }
  }
  else {
    ExceptionList = &local_10;
    this = (FCollisionHash *)thunk_FUN_103ff710(0x10034,L"FCollisionHash");
    if (this != (FCollisionHash *)0x0) {
      uVar1 = FCollisionHash::FCollisionHash(this);
      ExceptionList = local_10;
      return uVar1;
    }
  }
  ExceptionList = local_10;
  return 0;
}


// ==== 10524e71 Catch@10524e71

void Catch_10524e71(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 10524e85 Catch@10524e85

void Catch_10524e85(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"GNewCollisionHash");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10524f60 FUN_10524f60

undefined4 FUN_10524f60(int *param_1,int *param_2)

{
  if (((*param_1 == *param_2) && (param_1[1] == param_2[1])) && (param_1[2] == param_2[2])) {
    return 0;
  }
  return 1;
}


// ==== 10524f90 FUN_10524f90

undefined4 FUN_10524f90(int *param_1,int *param_2)

{
  if (((*param_1 == *param_2) && (param_1[1] == param_2[1])) && (param_1[2] == param_2[2])) {
    return 0;
  }
  return 1;
}


// ==== 10524fc0 FUN_10524fc0

bool FUN_10524fc0(int param_1,undefined4 param_2,int *param_3)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_3 + 0x68))(param_1);
  if (iVar1 != 0) {
    return false;
  }
  param_3[0x27] = 1;
  return param_1 != 0;
}


// ==== 10525090 FUN_10525090

int FUN_10525090(void)

{
  int iVar1;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_108195e2;
  local_c = ExceptionList;
  local_4 = 1;
  ExceptionList = &local_c;
  iVar1 = FString::operator!=((FString *)&stack0x00000004,(FString *)&stack0x00000010);
  local_4 = local_4 & 0xffffff00;
  FString::~FString((FString *)&stack0x00000004);
  local_4 = 0xffffffff;
  FString::~FString((FString *)&stack0x00000010);
  ExceptionList = local_c;
  return iVar1;
}


// ==== 10525110 FUN_10525110

undefined4
FUN_10525110(undefined4 param_1,uint param_2,char param_3,undefined4 param_4,uint param_5,
            char param_6)

{
  int iVar1;
  
  iVar1 = FName::operator!=((FName *)&param_1,(FName *)&param_4);
  if (((iVar1 == 0) && (param_3 == param_6)) && (((param_5 ^ param_2) & 1) == 0)) {
    return 0;
  }
  return 1;
}


// ==== 10525160 FUN_10525160

void FUN_10525160(int param_1)

{
  int in_ECX;
  
  if ((param_1 != 0) && ((*(byte *)(param_1 + 0x48) & 0x20) != 0)) {
    *(uint *)(in_ECX + 0x74) = *(uint *)(in_ECX + 0x74) | 0x800;
  }
  return;
}


// ==== 10525180 FUN_10525180

undefined4 FUN_10525180(void)

{
  int in_ECX;
  
  if (((*(uint *)(in_ECX + 0x3a0) & 1) != 0) && ((*(uint *)(in_ECX + 0x3a0) & 4) != 0)) {
    return 1;
  }
  return 0;
}


// ==== 105251a0 FUN_105251a0

void FUN_105251a0(void)

{
  int in_ECX;
  
  FTextureModifyinfo::Clear((FTextureModifyinfo *)(in_ECX + 0x3a0));
  return;
}


// ==== 105251b0 FUN_105251b0

void FUN_105251b0(void)

{
  int *in_ECX;
  
  if (in_ECX[0xeb] != 1) {
    in_ECX[0xe8] = in_ECX[0xe8] & 0xfffffffb;
    in_ECX[0xea] = 1;
    *(undefined1 *)((int)in_ECX + 0x3a7) = 0xff;
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x105251da. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*in_ECX + 0xfc))();
  return;
}


// ==== 105251f0 FUN_105251f0

void FUN_105251f0(undefined1 param_1)

{
  int in_ECX;
  
  *(uint *)(in_ECX + 0x3a0) = *(uint *)(in_ECX + 0x3a0) | 5;
  *(undefined4 *)(in_ECX + 0x3a8) = 2;
  *(undefined1 *)(in_ECX + 0x3a7) = param_1;
  return;
}


// ==== 10525220 FUN_10525220

void FUN_10525220(undefined1 param_1,undefined1 param_2,undefined1 param_3,char param_4)

{
  int in_ECX;
  
  *(uint *)(in_ECX + 0x3a0) = *(uint *)(in_ECX + 0x3a0) | 1;
  *(undefined1 *)(in_ECX + 0x3a6) = param_1;
  *(undefined1 *)(in_ECX + 0x3a4) = param_3;
  *(undefined1 *)(in_ECX + 0x3a5) = param_2;
  if (param_4 != '\x01') {
    if (param_4 == '\x02') {
      *(undefined4 *)(in_ECX + 0x3ac) = 4;
      return;
    }
    if (param_4 == '\x04') {
      *(undefined4 *)(in_ECX + 0x3ac) = 5;
      return;
    }
  }
  *(undefined4 *)(in_ECX + 0x3ac) = 3;
  return;
}


// ==== 105252a0 FUN_105252a0

void FUN_105252a0(undefined1 param_1,undefined1 param_2,undefined1 param_3)

{
  int in_ECX;
  
  *(uint *)(in_ECX + 0x3a0) = *(uint *)(in_ECX + 0x3a0) | 1;
  *(undefined1 *)(in_ECX + 0x3a6) = param_1;
  *(undefined1 *)(in_ECX + 0x3a5) = param_2;
  *(undefined1 *)(in_ECX + 0x3a4) = param_3;
  *(undefined4 *)(in_ECX + 0x3ac) = 9;
  return;
}


// ==== 105252e0 FUN_105252e0

void FUN_105252e0(undefined1 param_1,undefined1 param_2,undefined1 param_3)

{
  int in_ECX;
  
  *(uint *)(in_ECX + 0x3a0) = *(uint *)(in_ECX + 0x3a0) | 1;
  *(undefined1 *)(in_ECX + 0x3a6) = param_1;
  *(undefined1 *)(in_ECX + 0x3a5) = param_2;
  *(undefined1 *)(in_ECX + 0x3a4) = param_3;
  *(undefined4 *)(in_ECX + 0x3ac) = 10;
  return;
}


// ==== 10525320 FUN_10525320

void FUN_10525320(undefined4 param_1)

{
  int in_ECX;
  
  *(uint *)(in_ECX + 0x3a0) = *(uint *)(in_ECX + 0x3a0) | 1;
  *(undefined4 *)(in_ECX + 0x3a4) = param_1;
  *(undefined4 *)(in_ECX + 0x3ac) = 10;
  return;
}


// ==== 1052537c Catch@1052537c

void Catch_1052537c(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 10525390 Catch@10525390

void Catch_10525390(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"AActor::SetAddTexModifier");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 105253d0 FUN_105253d0

void FUN_105253d0(undefined1 param_1,undefined1 param_2,undefined1 param_3)

{
  int in_ECX;
  
  *(uint *)(in_ECX + 0x3a0) = *(uint *)(in_ECX + 0x3a0) | 1;
  *(undefined1 *)(in_ECX + 0x3a6) = param_1;
  *(undefined1 *)(in_ECX + 0x3a5) = param_2;
  *(undefined1 *)(in_ECX + 0x3a4) = param_3;
  *(undefined4 *)(in_ECX + 0x3ac) = 2;
  return;
}


// ==== 10525410 FUN_10525410

void FUN_10525410(undefined1 param_1,undefined1 param_2,undefined1 param_3)

{
  int in_ECX;
  
  *(uint *)(in_ECX + 0x3a0) = *(uint *)(in_ECX + 0x3a0) | 1;
  *(undefined1 *)(in_ECX + 0x3a6) = param_1;
  *(undefined1 *)(in_ECX + 0x3a5) = param_2;
  *(undefined1 *)(in_ECX + 0x3a4) = param_3;
  *(undefined4 *)(in_ECX + 0x3ac) = 0xd;
  return;
}


// ==== 10525450 FUN_10525450

undefined4 FUN_10525450(void)

{
  int in_ECX;
  
  if ((((*(char *)(in_ECX + 0x9c) != '\x02') && (*(char *)(in_ECX + 0x9c) != '\x04')) &&
      (*(char *)(in_ECX + 0xa8) != '\x02')) && (*(char *)(in_ECX + 0xa8) != '\x03')) {
    return 0;
  }
  return 1;
}


// ==== 10525480 FUN_10525480

void FUN_10525480(uint param_1,int param_2)

{
  ULevelBase *this;
  int iVar1;
  float fVar2;
  AActor *in_ECX;
  bool bVar3;
  
  if (param_2 != 0) {
    *(uint *)(in_ECX + 0xb4) = param_1;
LAB_105254b3:
    in_ECX[0xa8] = (AActor)0x0;
    *(undefined4 *)(in_ECX + 0xb0) = 0;
    *(undefined4 *)(in_ECX + 0xac) = 0x3fe66666;
    goto switchD_105254f2_default;
  }
  if (in_ECX[0x9c] != (AActor)0x1) {
    *(uint *)(in_ECX + 0xb4) = param_1;
    goto LAB_105254b3;
  }
  if (2 < param_1) goto switchD_105254f2_default;
  switch(*(undefined4 *)(in_ECX + 0xb4)) {
  case 0:
    if ((int)param_1 < 1) goto switchD_105254f2_default;
    break;
  case 1:
    bVar3 = SBORROW4(param_1,1);
    iVar1 = param_1 - 1;
    if ((int)param_1 < 2) goto LAB_10525550;
    break;
  case 2:
    bVar3 = SBORROW4(param_1,2);
    iVar1 = param_1 - 2;
LAB_10525550:
    if (bVar3 == iVar1 < 0) goto switchD_105254f2_default;
    if (in_ECX[0xa8] == (AActor)0x2) {
      fVar2 = *(float *)(in_ECX + 0xa0) - *(float *)(in_ECX + 0xa4);
    }
    else {
      (**(code **)(*(int *)in_ECX + 0x100))(0);
      fVar2 = 0.0;
    }
    in_ECX[0xa8] = (AActor)0x3;
    goto LAB_1052557f;
  case 0xffffffff:
    in_ECX[0xa8] = (AActor)0x1;
    *(undefined4 *)(in_ECX + 0xac) = 0x3fe66666;
    goto LAB_10525585;
  default:
    goto switchD_105254f2_default;
  }
  if (in_ECX[0xa8] == (AActor)0x3) {
    in_ECX[0xa8] = (AActor)0x2;
    fVar2 = *(float *)(in_ECX + 0xa0) - *(float *)(in_ECX + 0xa4);
  }
  else {
    (**(code **)(*(int *)in_ECX + 0x100))(0);
    fVar2 = 0.0;
    in_ECX[0xa8] = (AActor)0x2;
  }
LAB_1052557f:
  *(float *)(in_ECX + 0xa4) = fVar2;
LAB_10525585:
  *(uint *)(in_ECX + 0xb4) = param_1;
switchD_105254f2_default:
  if ((((in_ECX[0xa8] == (AActor)0x3) || (in_ECX[0xa8] == (AActor)0x2)) &&
      (in_ECX[0x35] == (AActor)0x8)) &&
     ((((byte)in_ECX[100] & 0x10) != 0 &&
      (this = *(ULevelBase **)(*(int *)(*(int *)(in_ECX + 0xe4) + 0x74) + 0x19c),
      this != (ULevelBase *)0x0)))) {
    ULevelBase::AddL2AvtActors(this,in_ECX);
  }
  return;
}


// ==== 10525630 FUN_10525630

undefined4 FUN_10525630(void)

{
  int in_ECX;
  
  if ((*(uint *)(in_ECX + 0x98) & 8) != 0) {
    *(uint *)(in_ECX + 0x98) = *(uint *)(in_ECX + 0x98) & 0xfffffff7;
  }
  return 1;
}


// ==== 10525681 Catch@10525681

void Catch_10525681(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 10525695 Catch@10525695

void Catch_10525695(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"AActor::PostLoadProcess");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 105256e0 FUN_105256e0

void FUN_105256e0(void)

{
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10819620;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  (**(code **)(**(int **)(in_ECX + 0x104) + 0x98))();
  (**(code **)(**(int **)(in_ECX + 0x134) + 0xac))
            (0,*(undefined4 *)(in_ECX + 0x350),((float)*(byte *)(in_ECX + 0x358) - 124.0) / 31.0,
             4.0 / (float)*(byte *)(in_ECX + 0x35a),(*(int *)(in_ECX + 0x354) << 0x1f) >> 0x1f);
  (**(code **)(**(int **)(in_ECX + 0x134) + 0x108))
            (0,((float)*(byte *)(in_ECX + 0x359) - 127.0) / 127.0,0);
  ExceptionList = local_10;
  return;
}


// ==== 105257d2 Catch@105257d2

void Catch_105257d2(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_10914c48);
}


// ==== 105257e6 Catch@105257e6

void Catch_105257e6(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"AActor::PlayReplicatedAnim");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10525850 FUN_10525850

uint FUN_10525850(void)

{
  uint uVar1;
  int in_ECX;
  
  if ((*(char *)(in_ECX + 0x35) == '\x02') && (*(int *)(in_ECX + 0x104) != 0)) {
    (**(code **)(**(int **)(in_ECX + 0x104) + 0x98))();
                    /* WARNING: Could not recover jumptable at 0x10525883. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(**(int **)(in_ECX + 0x134) + 0xe0))();
    return uVar1;
  }
  return (uint)(*(char *)(in_ECX + 0x35) == '\n');
}


// ==== 105258b0 FUN_105258b0

void FUN_105258b0(void)

{
  int *piVar1;
  int in_ECX;
  undefined4 unaff_retaddr;
  
  if (*(int *)(in_ECX + 0x104) != 0) {
    piVar1 = (int *)(**(code **)(**(int **)(in_ECX + 0x104) + 0x98))();
    (**(code **)(*piVar1 + 0xa8))(unaff_retaddr);
  }
  return;
}


// ==== 105258f0 FUN_105258f0

undefined4 * FUN_105258f0(undefined4 *param_1)

{
  int in_ECX;
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 in_stack_00000048;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_10819653;
  local_c = ExceptionList;
  puVar2 = (undefined4 *)&stack0x00000008;
  puVar3 = param_1;
  ExceptionList = &local_c;
  for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  switch(in_stack_00000048) {
  case 0xd:
    param_1[0xe] = (float)param_1[0xe] - *(float *)(in_ECX + 0x1c4);
    break;
  case 0xe:
  case 0xf:
    param_1[0xd] = (float)param_1[0xd] - *(float *)(in_ECX + 0x1c0);
    break;
  case 0x10:
  case 0x11:
    param_1[0xc] = (float)param_1[0xc] - *(float *)(in_ECX + 0x1bc);
  }
  local_4 = 0;
  FMatrix::~FMatrix((FMatrix *)&stack0x00000008);
  ExceptionList = local_c;
  return param_1;
}


// ==== 105259e0 FUN_105259e0

float10 FUN_105259e0(float param_1)

{
  int in_ECX;
  
  return (float10)(((float)*(byte *)(in_ECX + 0x7c) * param_1) / 255.0);
}


// ==== 10525a10 FUN_10525a10

float10 FUN_10525a10(float param_1)

{
  int in_ECX;
  
  if ((*(byte *)(in_ECX + 0x3d4) & 1) != 0) {
    return (float10)((float)*(byte *)(in_ECX + 0x3d0) / 255.0);
  }
  return (float10)(((float)*(byte *)(in_ECX + 0x3d0) * param_1) / 255.0);
}


// ==== 10525a80 FUN_10525a80

void FUN_10525a80(void)

{
  UObject *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10819670;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  if (((*(int *)GIsEditor_exref == 0) && (ExceptionList = &local_10, DAT_10c51044 != 0)) &&
     (ExceptionList = &local_10, *(int *)(DAT_10c51044 + 0x58) != 0)) {
    ExceptionList = &local_10;
    (**(code **)(**(int **)(DAT_10c51044 + 0x58) + 0x8c))(0);
  }
  UObject::Destroy(in_ECX);
  ExceptionList = local_10;
  return;
}


// ==== 10525af3 Catch@10525af3

void Catch_10525af3(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 10525b07 Catch@10525b07

void Catch_10525b07(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"UAmbientSoundObject::Destroy");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10525b50 FUN_10525b50

void FUN_10525b50(UFunction *param_1,void *param_2,void *param_3)

{
  UObject *in_ECX;
  
  if ((*(byte *)(*(int *)(in_ECX + 0xe0) + 0x554) & 2) != 0) {
                    /* WARNING: Could not recover jumptable at 0x10525b5f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UObject::ProcessEvent(in_ECX,param_1,param_2,param_3);
    return;
  }
  return;
}


// ==== 10525b70 FUN_10525b70

void FUN_10525b70(void)

{
  int iVar1;
  undefined4 *puVar2;
  int in_ECX;
  FRotator local_c8 [48];
  FRotator local_98 [48];
  undefined1 *local_68;
  void *local_64;
  undefined1 *puStack_60;
  undefined4 local_5c;
  FCoords local_58 [52];
  FRotator local_24 [12];
  FName local_18 [8];
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  puStack_60 = &LAB_10819680;
  local_64 = ExceptionList;
  local_68 = &stack0xffffff2c;
  local_5c = 0;
  if ((*(int *)(in_ECX + 0x40) != 0) && ((*(byte *)(*(int *)(in_ECX + 0x40) + 0x74) & 2) == 0)) {
    ExceptionList = &local_64;
    FName::FName(local_18,0);
    iVar1 = FName::operator!=((FName *)(in_ECX + 0xd8),local_18);
    if (iVar1 == 0) {
      FRotator::FRotator((FRotator *)&local_10);
      if ((*(byte *)(in_ECX + 0x74) & 1) == 0) {
        puVar2 = (undefined4 *)(*(int *)(in_ECX + 0x40) + 0x1c8);
      }
      else {
        puVar2 = (undefined4 *)FRotator::FRotator(local_24,0,0,0);
      }
      local_10 = *puVar2;
      local_c = puVar2[1];
      local_8 = puVar2[2];
      FCoords::operator*((FCoords *)(GMath_exref + 0x18),(FRotator *)local_58);
      FCoords::operator/((FCoords *)(GMath_exref + 0x18),local_98);
      FCoords::OrthoRotation(local_58);
      FCoords::operator/((FCoords *)local_98,local_c8);
      puVar2 = (undefined4 *)FCoords::OrthoRotation((FCoords *)local_c8);
      *(undefined4 *)(in_ECX + 0x208) = *puVar2;
      *(undefined4 *)(in_ECX + 0x20c) = puVar2[1];
      *(undefined4 *)(in_ECX + 0x210) = puVar2[2];
    }
  }
  ExceptionList = local_64;
  return;
}


// ==== 10525c9c Catch@10525c9c

void Catch_10525c9c(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + 0x44) = *(undefined4 *)(unaff_EBP + 0x30);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + 0x44,&DAT_10914c48);
}


// ==== 10525cb0 Catch@10525cb0

void Catch_10525cb0(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"AActor::UpdateRelativeRotation");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10525d30 FUN_10525d30

undefined4 FUN_10525d30(float *param_1,float *param_2)

{
  if ((((*param_2 < *param_1 != (*param_2 == *param_1)) && (*param_1 <= param_2[3])) &&
      (param_2[1] < param_1[1] != (param_2[1] == param_1[1]))) &&
     (((param_1[1] <= param_2[4] && (param_2[2] < param_1[2] != (param_2[2] == param_1[2]))) &&
      (param_1[2] <= param_2[5])))) {
    return 1;
  }
  return 0;
}


// ==== 10525dc0 FUN_10525dc0

int FUN_10525dc0(void)

{
  FDynamicActor *this;
  undefined4 uVar1;
  AActor *in_ECX;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_1081969b;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  if (*(int *)(in_ECX + 0x44) == 0) {
    ExceptionList = &pvStack_c;
    this = (FDynamicActor *)(**(code **)**(undefined4 **)GMalloc_exref)(0xf8,&DAT_10853a28);
    uStack_4 = 0;
    if (this == (FDynamicActor *)0x0) {
      uVar1 = 0;
    }
    else {
      uVar1 = FDynamicActor::FDynamicActor(this,in_ECX);
    }
    *(undefined4 *)(in_ECX + 0x44) = uVar1;
  }
  uStack_4 = 0xffffffff;
  if (*(int *)(*(int *)(in_ECX + 0x44) + 4) != *(int *)(in_ECX + 0x4c)) {
    (**(code **)(*(int *)in_ECX + 0x158))();
    ExceptionList = pvStack_c;
    return *(int *)(in_ECX + 0x44);
  }
  ExceptionList = pvStack_c;
  return *(int *)(in_ECX + 0x44);
}


// ==== 10525e80 FUN_10525e80

FDynamicLight * FUN_10525e80(void)

{
  FDynamicLight *pFVar1;
  undefined4 uVar2;
  ALight *in_ECX;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_108196bb;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  if (*(int *)(in_ECX + 0x48) == 0) {
    ExceptionList = &pvStack_c;
    pFVar1 = (FDynamicLight *)(**(code **)**(undefined4 **)GMalloc_exref)(0x78,&DAT_10853a28);
    uStack_4 = 0;
    if (pFVar1 == (FDynamicLight *)0x0) {
      uVar2 = 0;
    }
    else {
      uVar2 = FDynamicLight::FDynamicLight(pFVar1,in_ECX);
    }
    *(undefined4 *)(in_ECX + 0x48) = uVar2;
  }
  uStack_4 = 0xffffffff;
  pFVar1 = *(FDynamicLight **)(in_ECX + 0x48);
  if (*(int *)(pFVar1 + 4) != *(int *)(in_ECX + 0x4c)) {
    FDynamicLight::Update(pFVar1);
    ExceptionList = pvStack_c;
    return *(FDynamicLight **)(in_ECX + 0x48);
  }
  ExceptionList = pvStack_c;
  return pFVar1;
}


// ==== 10525f40 FUN_10525f40

FDynamicLight * FUN_10525f40(void)

{
  FDynamicLight *pFVar1;
  undefined4 uVar2;
  AEmitterLight *in_ECX;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_108196db;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  if (*(int *)(in_ECX + 0x48) == 0) {
    ExceptionList = &pvStack_c;
    pFVar1 = (FDynamicLight *)(**(code **)**(undefined4 **)GMalloc_exref)(0x78,&DAT_10853a28);
    uStack_4 = 0;
    if (pFVar1 == (FDynamicLight *)0x0) {
      uVar2 = 0;
    }
    else {
      uVar2 = FDynamicLight::FDynamicLight(pFVar1,in_ECX);
    }
    *(undefined4 *)(in_ECX + 0x48) = uVar2;
  }
  uStack_4 = 0xffffffff;
  pFVar1 = *(FDynamicLight **)(in_ECX + 0x48);
  if (*(int *)(pFVar1 + 4) != *(int *)(in_ECX + 0x4c)) {
    FDynamicLight::Update(pFVar1);
    ExceptionList = pvStack_c;
    return *(FDynamicLight **)(in_ECX + 0x48);
  }
  ExceptionList = pvStack_c;
  return pFVar1;
}


// ==== 10526040 FUN_10526040

void FUN_10526040(void)

{
  FMatrix *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_108196f9;
  local_c = ExceptionList;
  local_4 = 0xffffffff;
  ExceptionList = &local_c;
  FMatrix::~FMatrix(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 10526090 FUN_10526090

undefined4 FUN_10526090(int param_1)

{
  int in_ECX;
  
  while( true ) {
    if (in_ECX == 0) {
      return 0;
    }
    if ((in_ECX == param_1) ||
       (((param_1 != 0 && (*(int *)(in_ECX + 0x1b4) == *(int *)(param_1 + 0x1b4))) &&
        (*(int *)(in_ECX + 0x1b4) != 0)))) break;
    in_ECX = *(int *)(in_ECX + 0x40);
  }
  return 1;
}


// ==== 10526110 Catch@10526110

void Catch_10526110(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 10526124 Catch@10526124

void Catch_10526124(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"AActor::IsJoinedTo");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10526170 FUN_10526170

void FUN_10526170(void)

{
  int *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10819720;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  (**(code **)(*in_ECX + 0x58))();
  ExceptionList = local_10;
  return;
}


// ==== 105261b7 Catch@105261b7

void Catch_105261b7(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 105261cb Catch@105261cb

void Catch_105261cb(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"AActor::PostScriptDestroyed");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10526210 FUN_10526210

void FUN_10526210(void)

{
  return;
}


// ==== 10526220 FUN_10526220

void FUN_10526220(void)

{
  code *pcVar1;
  undefined1 *puVar2;
  undefined4 *puVar3;
  int in_ECX;
  FRotator local_34 [12];
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10819730;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffc0;
  local_8 = 0;
  ExceptionList = &local_10;
  puVar2 = &stack0xffffffc0;
  if (*(int *)(in_ECX + 0x278) == 0) {
    ExceptionList = &local_10;
    appFailAssert("Brush",".\\UnActor.cpp",0xc34);
    puVar2 = local_14;
  }
  local_14 = puVar2;
  pcVar1 = GMath_exref;
  *(undefined4 *)(in_ECX + 0x3d0) = *(undefined4 *)(GMath_exref + 0x48);
  *(undefined4 *)(in_ECX + 0x3d4) = *(undefined4 *)(pcVar1 + 0x4c);
  *(undefined4 *)(in_ECX + 0x3d8) = *(undefined4 *)(pcVar1 + 0x50);
  *(undefined4 *)(in_ECX + 0x3dc) = *(undefined4 *)(pcVar1 + 0x54);
  *(undefined4 *)(in_ECX + 0x3e0) = *(undefined4 *)(pcVar1 + 0x58);
  pcVar1 = GMath_exref;
  *(undefined4 *)(in_ECX + 0x3e4) = *(undefined4 *)(GMath_exref + 0x48);
  *(undefined4 *)(in_ECX + 1000) = *(undefined4 *)(pcVar1 + 0x4c);
  *(undefined4 *)(in_ECX + 0x3ec) = *(undefined4 *)(pcVar1 + 0x50);
  *(undefined4 *)(in_ECX + 0x3f0) = *(undefined4 *)(pcVar1 + 0x54);
  *(undefined4 *)(in_ECX + 0x3f4) = *(undefined4 *)(pcVar1 + 0x58);
  local_28 = 0;
  local_24 = 0;
  local_20 = 0;
  *(undefined4 *)(in_ECX + 0x1bc) = 0;
  *(undefined4 *)(in_ECX + 0x1c0) = 0;
  *(undefined4 *)(in_ECX + 0x1c4) = 0;
  puVar3 = (undefined4 *)FRotator::FRotator(local_34,0,0,0);
  *(undefined4 *)(in_ECX + 0x1c8) = *puVar3;
  *(undefined4 *)(in_ECX + 0x1cc) = puVar3[1];
  *(undefined4 *)(in_ECX + 0x1d0) = puVar3[2];
  *(undefined4 *)(in_ECX + 0x28c) = 0;
  *(undefined4 *)(in_ECX + 0x290) = 0;
  *(undefined4 *)(in_ECX + 0x294) = 0;
  ExceptionList = local_10;
  return;
}


// ==== 10526362 Catch@10526362

void Catch_10526362(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 10526376 Catch@10526376

void Catch_10526376(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"ABrush::InitPosRotScale");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 105263f0 FUN_105263f0

void FUN_105263f0(int param_1,int param_2,int param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float *in_ECX;
  
  fVar1 = *(float *)(GMath_exref + (param_3 >> 2 & 0x3fffU) * 4 + 0x8c);
  fVar2 = *(float *)(GMath_exref + (param_1 >> 2 & 0x3fffU) * 4 + 0x8c);
  fVar3 = *(float *)(GMath_exref + (param_2 >> 2 & 0x3fffU) * 4 + 0x8c);
  fVar4 = *(float *)(GMath_exref + (param_3 + 0x4000 >> 2 & 0x3fffU) * 4 + 0x8c);
  fVar5 = *(float *)(GMath_exref + (param_1 + 0x4000 >> 2 & 0x3fffU) * 4 + 0x8c);
  fVar6 = *(float *)(GMath_exref + (param_2 + 0x4000 >> 2 & 0x3fffU) * 4 + 0x8c);
  *in_ECX = fVar5 * fVar6;
  in_ECX[1] = fVar3 * fVar5;
  in_ECX[2] = fVar2;
  in_ECX[3] = 0.0;
  in_ECX[4] = fVar1 * fVar2 * fVar6 - fVar4 * fVar3;
  in_ECX[5] = fVar3 * fVar1 * fVar2 + fVar6 * fVar4;
  in_ECX[6] = -fVar1 * fVar5;
  in_ECX[7] = 0.0;
  in_ECX[8] = -(fVar6 * fVar4 * fVar2 + fVar3 * fVar1);
  in_ECX[9] = fVar6 * fVar1 - fVar3 * fVar4 * fVar2;
  in_ECX[10] = fVar5 * fVar4;
  in_ECX[0xb] = 0.0;
  in_ECX[0xc] = 0.0;
  in_ECX[0xd] = 0.0;
  in_ECX[0xe] = 0.0;
  in_ECX[0xf] = 1.0;
  return;
}


// ==== 10526620 FUN_10526620

void FUN_10526620(UObject *param_1,ushort *param_2,int param_3)

{
  UClass *pUVar1;
  
  pUVar1 = UProperty::StaticClass();
  UObject::StaticFindObjectChecked(pUVar1,param_1,param_2,param_3);
  return;
}


// ==== 105266d0 FUN_105266d0

void FUN_105266d0(void)

{
  int in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_10819787;
  local_c = ExceptionList;
  local_4 = 2;
  ExceptionList = &local_c;
  if (*(int *)(in_ECX + 4) != 0) {
    ExceptionList = &local_c;
    appFailAssert("ReferenceCount==0",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\engine\\inc\\UnProjector.h",0x29);
  }
  local_4._0_1_ = 1;
  FMatrix::~FMatrix((FMatrix *)(in_ECX + 0x11c));
  local_4 = (uint)local_4._1_3_ << 8;
  FMatrix::~FMatrix((FMatrix *)(in_ECX + 100));
  local_4 = 0xffffffff;
  FMatrix::~FMatrix((FMatrix *)(in_ECX + 0x24));
  ExceptionList = local_c;
  return;
}


// ==== 10526770 FUN_10526770

void FUN_10526770(byte param_1)

{
  thunk_FUN_105266d0();
  if ((param_1 & 1) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))();
  }
  return;
}


// ==== 105267d0 FUN_105267d0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint * FUN_105267d0(int param_1,undefined4 param_2,uint *param_3,undefined4 param_4,
                   undefined4 param_5)

{
  uint uVar1;
  int iVar2;
  int in_ECX;
  bool bVar3;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_10819a74;
  local_10 = ExceptionList;
  bVar3 = false;
  local_8 = 0;
  if ((_DAT_10c1c97c & 0x800) == 0) {
    return param_3;
  }
  uVar1 = *(uint *)(in_ECX + 0x74);
  if (((uVar1 & 0x8000) != 0) && ((*(byte *)(in_ECX + 0x368) & 1) == 0)) {
    return param_3;
  }
  if (*(char *)(in_ECX + 0xc2) != '\x04') {
    return param_3;
  }
  ExceptionList = &local_10;
  if ((uVar1 & 0x4000) != 0) {
    if (*(char *)(in_ECX + 0xc1) == '\x03') {
      ExceptionList = &local_10;
      if (((*(byte *)(in_ECX + 0x368) & 1) != 0) &&
         (((*(char *)(in_ECX + 0x35) == '\x02' ||
           (ExceptionList = &local_10, *(char *)(in_ECX + 0x35) == '\b')) &&
          (ExceptionList = &local_10,
          iVar2 = thunk_FUN_10524f90(in_ECX + 0x1c8,param_1 + 0x1c8,param_4,param_5), iVar2 != 0))))
      {
        if ((DAT_10c1b814 & 0x20000) == 0) {
          DAT_10c1b814 = DAT_10c1b814 | 0x20000;
          local_8._0_1_ = 0x12;
          DAT_10c1b7cc = thunk_FUN_10526620(&AActor::PrivateStaticClass,L"Rotation",0);
          local_8 = (uint)local_8._1_3_ << 8;
        }
        *param_3 = (uint)*(ushort *)(DAT_10c1b7cc + 0x52);
        param_3 = param_3 + 1;
      }
    }
    else {
      ExceptionList = &local_10;
      if ((((uVar1 & 0x200000) == 0) && (ExceptionList = &local_10, *(int *)(in_ECX + 0x40) == 0))
         && (ExceptionList = &local_10, *(int *)(param_1 + 0x40) != 0)) {
        ExceptionList = &local_10;
        if ((DAT_10c1b814 & 1) == 0) {
          DAT_10c1b814 = DAT_10c1b814 | 1;
          local_8._0_1_ = 1;
          local_8._1_3_ = 0;
          ExceptionList = &local_10;
          DAT_10c1b810 = thunk_FUN_10526620(&AActor::PrivateStaticClass,L"Location",0);
          local_8 = (uint)local_8._1_3_ << 8;
        }
        *param_3 = (uint)*(ushort *)(DAT_10c1b810 + 0x52);
        param_3 = param_3 + 1;
        bVar3 = true;
      }
      iVar2 = thunk_FUN_10524fc0(*(undefined4 *)(in_ECX + 0x40),*(undefined4 *)(param_1 + 0x40),
                                 param_4,param_5);
      if (iVar2 != 0) {
        if ((DAT_10c1b814 & 2) == 0) {
          DAT_10c1b814 = DAT_10c1b814 | 2;
          local_8._0_1_ = 2;
          DAT_10c1b80c = thunk_FUN_10526620(&AActor::PrivateStaticClass,L"Base",0);
          local_8 = (uint)local_8._1_3_ << 8;
        }
        *param_3 = (uint)*(ushort *)(DAT_10c1b80c + 0x52);
        param_3 = param_3 + 1;
      }
      if (((*(uint *)(param_1 + 100) ^ *(uint *)(in_ECX + 100)) & 0x4000) != 0) {
        if ((DAT_10c1b814 & 4) == 0) {
          DAT_10c1b814 = DAT_10c1b814 | 4;
          local_8._0_1_ = 3;
          DAT_10c1b808 = thunk_FUN_10526620(&AActor::PrivateStaticClass,L"bOnlyDrawIfAttached",0);
          local_8 = (uint)local_8._1_3_ << 8;
        }
        *param_3 = (uint)*(ushort *)(DAT_10c1b808 + 0x52);
        param_3 = param_3 + 1;
      }
      if ((*(int *)(in_ECX + 0x40) == 0) || ((*(byte *)(*(int *)(in_ECX + 0x40) + 0x74) & 2) != 0))
      {
        if ((*(uint *)(in_ECX + 0x74) & 0x200000) == 0) {
          if (*(byte *)(in_ECX + 0xc1) < 2) {
LAB_10526b57:
            if ((((*(byte *)(in_ECX + 0x368) & 1) == 0) && (!bVar3)) &&
               (iVar2 = thunk_FUN_10524f60(in_ECX + 0x1bc,param_1 + 0x1bc,param_4,param_5),
               iVar2 != 0)) {
              if ((DAT_10c1b814 & 0x80) == 0) {
                DAT_10c1b814 = DAT_10c1b814 | 0x80;
                local_8._0_1_ = 8;
                DAT_10c1b7f4 = thunk_FUN_10526620(&AActor::PrivateStaticClass,L"Location",0);
                local_8 = (uint)local_8._1_3_ << 8;
              }
              *param_3 = (uint)*(ushort *)(DAT_10c1b7f4 + 0x52);
              param_3 = param_3 + 1;
            }
          }
          else if ((*(byte *)(in_ECX + 0x368) & 1) == 0) {
            if ((*(uint *)(in_ECX + 0x74) & 0x10000) == 0) goto LAB_10526c57;
            goto LAB_10526b57;
          }
          if (((*(char *)(in_ECX + 0x35) == '\x02') || (*(char *)(in_ECX + 0x35) == '\b')) &&
             ((((*(byte *)(in_ECX + 0x368) & 1) == 0 || ((*(uint *)(in_ECX + 0x74) & 0x100000) == 0)
               ) && (iVar2 = thunk_FUN_10524f90(in_ECX + 0x1c8,param_1 + 0x1c8,param_4,param_5),
                    iVar2 != 0)))) {
            if ((DAT_10c1b814 & 0x100) == 0) {
              DAT_10c1b814 = DAT_10c1b814 | 0x100;
              local_8._0_1_ = 9;
              DAT_10c1b7f0 = thunk_FUN_10526620(&AActor::PrivateStaticClass,L"Rotation",0);
              local_8 = (uint)local_8._1_3_ << 8;
            }
            *param_3 = (uint)*(ushort *)(DAT_10c1b7f0 + 0x52);
            param_3 = param_3 + 1;
          }
        }
      }
      else {
        iVar2 = thunk_FUN_10524f60(in_ECX + 0x1fc,param_1 + 0x1fc,param_4,param_5);
        if (iVar2 != 0) {
          if ((DAT_10c1b814 & 8) == 0) {
            DAT_10c1b814 = DAT_10c1b814 | 8;
            local_8._0_1_ = 4;
            DAT_10c1b804 = thunk_FUN_10526620(&AActor::PrivateStaticClass,L"RelativeLocation",0);
            local_8 = (uint)local_8._1_3_ << 8;
          }
          *param_3 = (uint)*(ushort *)(DAT_10c1b804 + 0x52);
          param_3 = param_3 + 1;
        }
        iVar2 = thunk_FUN_10524f90(in_ECX + 0x208,param_1 + 0x208,param_4,param_5);
        if (iVar2 != 0) {
          if ((DAT_10c1b814 & 0x10) == 0) {
            DAT_10c1b814 = DAT_10c1b814 | 0x10;
            local_8._0_1_ = 5;
            DAT_10c1b800 = thunk_FUN_10526620(&AActor::PrivateStaticClass,L"RelativeRotation",0);
            local_8 = (uint)local_8._1_3_ << 8;
          }
          *param_3 = (uint)*(ushort *)(DAT_10c1b800 + 0x52);
          param_3 = param_3 + 1;
        }
        if (*(int *)(in_ECX + 0xd8) != *(int *)(param_1 + 0xd8)) {
          if ((DAT_10c1b814 & 0x20) == 0) {
            DAT_10c1b814 = DAT_10c1b814 | 0x20;
            local_8._0_1_ = 6;
            DAT_10c1b7fc = thunk_FUN_10526620(&AActor::PrivateStaticClass,L"AttachmentBone",0);
            local_8 = (uint)local_8._1_3_ << 8;
          }
          *param_3 = (uint)*(ushort *)(DAT_10c1b7fc + 0x52);
          param_3 = param_3 + 1;
        }
        if ((((*(uint *)(in_ECX + 0x74) & 0x200000) == 0) && (*(int *)(param_1 + 0x40) == 0)) &&
           (iVar2 = thunk_FUN_10524f60(in_ECX + 0x1bc,param_1 + 0x1bc,param_4,param_5), iVar2 != 0))
        {
          if ((DAT_10c1b814 & 0x40) == 0) {
            DAT_10c1b814 = DAT_10c1b814 | 0x40;
            local_8._0_1_ = 7;
            DAT_10c1b7f8 = thunk_FUN_10526620(&AActor::PrivateStaticClass,L"Location",0);
            local_8 = (uint)local_8._1_3_ << 8;
          }
          *param_3 = (uint)*(ushort *)(DAT_10c1b7f8 + 0x52);
          param_3 = param_3 + 1;
        }
      }
LAB_10526c57:
      if (*(char *)(in_ECX + 0x34) == '\x05') {
        if (((*(uint *)(in_ECX + 0x2f8) ^ *(uint *)(param_1 + 0x2f8)) & 0x2000) != 0) {
          if ((DAT_10c1b814 & 0x200) == 0) {
            DAT_10c1b814 = DAT_10c1b814 | 0x200;
            local_8._0_1_ = 10;
            DAT_10c1b7ec = thunk_FUN_10526620(&AActor::PrivateStaticClass,L"bFixedRotationDir",0);
            local_8 = (uint)local_8._1_3_ << 8;
          }
          *param_3 = (uint)*(ushort *)(DAT_10c1b7ec + 0x52);
          param_3 = param_3 + 1;
        }
        if (((*(uint *)(in_ECX + 0x2f8) ^ *(uint *)(param_1 + 0x2f8)) & 0x4000) != 0) {
          if ((DAT_10c1b814 & 0x400) == 0) {
            DAT_10c1b814 = DAT_10c1b814 | 0x400;
            local_8._0_1_ = 0xb;
            DAT_10c1b7e8 = thunk_FUN_10526620(&AActor::PrivateStaticClass,L"bRotateToDesired",0);
            local_8 = (uint)local_8._1_3_ << 8;
          }
          *param_3 = (uint)*(ushort *)(DAT_10c1b7e8 + 0x52);
          param_3 = param_3 + 1;
        }
        iVar2 = thunk_FUN_10524f90(in_ECX + 0x304,param_1 + 0x304,param_4,param_5);
        if (iVar2 != 0) {
          if ((DAT_10c1b814 & 0x800) == 0) {
            DAT_10c1b814 = DAT_10c1b814 | 0x800;
            local_8._0_1_ = 0xc;
            DAT_10c1b7e4 = thunk_FUN_10526620(&AActor::PrivateStaticClass,L"RotationRate",0);
            local_8 = (uint)local_8._1_3_ << 8;
          }
          *param_3 = (uint)*(ushort *)(DAT_10c1b7e4 + 0x52);
          param_3 = param_3 + 1;
        }
        iVar2 = thunk_FUN_10524f90(in_ECX + 0x32c,param_1 + 0x32c,param_4,param_5);
        if (iVar2 != 0) {
          if ((DAT_10c1b814 & 0x1000) == 0) {
            DAT_10c1b814 = DAT_10c1b814 | 0x1000;
            local_8._0_1_ = 0xd;
            DAT_10c1b7e0 = thunk_FUN_10526620(&AActor::PrivateStaticClass,L"DesiredRotation",0);
            local_8 = (uint)local_8._1_3_ << 8;
          }
          *param_3 = (uint)*(ushort *)(DAT_10c1b7e0 + 0x52);
          param_3 = param_3 + 1;
        }
      }
      if (*(char *)(in_ECX + 0xc1) == '\x02') {
        if (((*(uint *)(in_ECX + 0x74) & 0x200000) == 0) &&
           ((((*(byte *)(in_ECX + 0x368) & 1) != 0 || ((*(uint *)(in_ECX + 0x74) & 0x10000) != 0))
            && (iVar2 = thunk_FUN_10524f60(in_ECX + 0x1d4,param_1 + 0x1d4,param_4,param_5),
               iVar2 != 0)))) {
          if ((DAT_10c1b814 & 0x2000) == 0) {
            DAT_10c1b814 = DAT_10c1b814 | 0x2000;
            local_8._0_1_ = 0xe;
            DAT_10c1b7dc = thunk_FUN_10526620(&AActor::PrivateStaticClass,L"Velocity",0);
            local_8 = (uint)local_8._1_3_ << 8;
          }
          *param_3 = (uint)*(ushort *)(DAT_10c1b7dc + 0x52);
          param_3 = param_3 + 1;
        }
        if (((*(byte *)(in_ECX + 0x368) & 1) != 0) &&
           (*(char *)(in_ECX + 0x34) != *(char *)(param_1 + 0x34))) {
          if ((DAT_10c1b814 & 0x4000) == 0) {
            DAT_10c1b814 = DAT_10c1b814 | 0x4000;
            local_8._0_1_ = 0xf;
            DAT_10c1b7d8 = thunk_FUN_10526620(&AActor::PrivateStaticClass,L"Physics",0);
            local_8 = (uint)local_8._1_3_ << 8;
          }
          *param_3 = (uint)*(ushort *)(DAT_10c1b7d8 + 0x52);
          param_3 = param_3 + 1;
        }
      }
      else {
        if (*(char *)(in_ECX + 0x34) != *(char *)(param_1 + 0x34)) {
          if ((DAT_10c1b814 & 0x8000) == 0) {
            DAT_10c1b814 = DAT_10c1b814 | 0x8000;
            local_8._0_1_ = 0x10;
            DAT_10c1b7d4 = thunk_FUN_10526620(&AActor::PrivateStaticClass,L"Physics",0);
            local_8 = (uint)local_8._1_3_ << 8;
          }
          *param_3 = (uint)*(ushort *)(DAT_10c1b7d4 + 0x52);
          param_3 = param_3 + 1;
        }
        if ((*(char *)(in_ECX + 0x34) == '\x02') &&
           (iVar2 = thunk_FUN_10524f60(in_ECX + 0x1d4,param_1 + 0x1d4,param_4,param_5), iVar2 != 0))
        {
          if ((DAT_10c1b814 & 0x10000) == 0) {
            DAT_10c1b814 = DAT_10c1b814 | 0x10000;
            local_8._0_1_ = 0x11;
            DAT_10c1b7d0 = thunk_FUN_10526620(&AActor::PrivateStaticClass,L"Velocity",0);
            local_8 = (uint)local_8._1_3_ << 8;
          }
          *param_3 = (uint)*(ushort *)(DAT_10c1b7d0 + 0x52);
          param_3 = param_3 + 1;
        }
      }
    }
  }
  if ((*(uint *)(in_ECX + 0x74) & 0x800) == 0) goto LAB_10527951;
  if (*(int *)(in_ECX + 0x27c) != *(int *)(param_1 + 0x27c)) {
    if ((DAT_10c1b814 & 0x40000) == 0) {
      DAT_10c1b814 = DAT_10c1b814 | 0x40000;
      local_8._0_1_ = 0x13;
      DAT_10c1b7c8 = thunk_FUN_10526620(&AActor::PrivateStaticClass,L"DrawScale",0);
      local_8 = (uint)local_8._1_3_ << 8;
    }
    *param_3 = (uint)*(ushort *)(DAT_10c1b7c8 + 0x52);
    param_3 = param_3 + 1;
  }
  if (*(char *)(in_ECX + 0x35) != *(char *)(param_1 + 0x35)) {
    if ((DAT_10c1b814 & 0x80000) == 0) {
      DAT_10c1b814 = DAT_10c1b814 | 0x80000;
      local_8._0_1_ = 0x14;
      DAT_10c1b7c4 = thunk_FUN_10526620(&AActor::PrivateStaticClass,L"DrawType",0);
      local_8 = (uint)local_8._1_3_ << 8;
    }
    *param_3 = (uint)*(ushort *)(DAT_10c1b7c4 + 0x52);
    param_3 = param_3 + 1;
  }
  if (((*(uint *)(in_ECX + 0x2f8) ^ *(uint *)(param_1 + 0x2f8)) & 1) != 0) {
    if ((DAT_10c1b814 & 0x100000) == 0) {
      DAT_10c1b814 = DAT_10c1b814 | 0x100000;
      local_8._0_1_ = 0x15;
      DAT_10c1b7c0 = thunk_FUN_10526620(&AActor::PrivateStaticClass,L"bCollideActors",0);
      local_8 = (uint)local_8._1_3_ << 8;
    }
    *param_3 = (uint)*(ushort *)(DAT_10c1b7c0 + 0x52);
    param_3 = param_3 + 1;
  }
  if (((*(uint *)(in_ECX + 0x2f8) ^ *(uint *)(param_1 + 0x2f8)) & 2) != 0) {
    if ((DAT_10c1b814 & 0x200000) == 0) {
      DAT_10c1b814 = DAT_10c1b814 | 0x200000;
      local_8._0_1_ = 0x16;
      DAT_10c1b7bc = thunk_FUN_10526620(&AActor::PrivateStaticClass,L"bCollideWorld",0);
      local_8 = (uint)local_8._1_3_ << 8;
    }
    *param_3 = (uint)*(ushort *)(DAT_10c1b7bc + 0x52);
    param_3 = param_3 + 1;
  }
  if (((*(uint *)(param_1 + 100) ^ *(uint *)(in_ECX + 100)) & 0x800) != 0) {
    if ((DAT_10c1b814 & 0x400000) == 0) {
      DAT_10c1b814 = DAT_10c1b814 | 0x400000;
      local_8._0_1_ = 0x17;
      DAT_10c1b7b8 = thunk_FUN_10526620(&AActor::PrivateStaticClass,L"bOnlyOwnerSee",0);
      local_8 = (uint)local_8._1_3_ << 8;
    }
    *param_3 = (uint)*(ushort *)(DAT_10c1b7b8 + 0x52);
    param_3 = param_3 + 1;
  }
  iVar2 = thunk_FUN_10524fc0(*(undefined4 *)(in_ECX + 0x270),*(undefined4 *)(param_1 + 0x270),
                             param_4,param_5);
  if (iVar2 != 0) {
    if ((DAT_10c1b814 & 0x800000) == 0) {
      DAT_10c1b814 = DAT_10c1b814 | 0x800000;
      local_8._0_1_ = 0x18;
      DAT_10c1b7b4 = thunk_FUN_10526620(&AActor::PrivateStaticClass,L"Texture",0);
      local_8 = (uint)local_8._1_3_ << 8;
    }
    *param_3 = (uint)*(ushort *)(DAT_10c1b7b4 + 0x52);
    param_3 = param_3 + 1;
  }
  iVar2 = thunk_FUN_10524fc0(*(undefined4 *)(in_ECX + 0x2b0),*(undefined4 *)(param_1 + 0x2b0),
                             param_4,param_5);
  if (iVar2 != 0) {
    if ((DAT_10c1b814 & 0x1000000) == 0) {
      DAT_10c1b814 = DAT_10c1b814 | 0x1000000;
      local_8._0_1_ = 0x19;
      DAT_10c1b7b0 = thunk_FUN_10526620(&AActor::PrivateStaticClass,L"RepSkin",0);
      local_8 = (uint)local_8._1_3_ << 8;
    }
    *param_3 = (uint)*(ushort *)(DAT_10c1b7b0 + 0x52);
    param_3 = param_3 + 1;
  }
  if (*(char *)(in_ECX + 0x2e0) != *(char *)(param_1 + 0x2e0)) {
    if ((DAT_10c1b814 & 0x2000000) == 0) {
      DAT_10c1b814 = DAT_10c1b814 | 0x2000000;
      local_8._0_1_ = 0x1a;
      DAT_10c1b7ac = thunk_FUN_10526620(&AActor::PrivateStaticClass,L"Style",0);
      local_8 = (uint)local_8._1_3_ << 8;
    }
    *param_3 = (uint)*(ushort *)(DAT_10c1b7ac + 0x52);
    param_3 = param_3 + 1;
  }
  if (((*(char *)(in_ECX + 0x35) == '\x02') || (*(char *)(in_ECX + 0x35) == '\b')) &&
     (iVar2 = thunk_FUN_10524f60(in_ECX + 0x28c,param_1 + 0x28c,param_4,param_5), iVar2 != 0)) {
    if ((DAT_10c1b814 & 0x4000000) == 0) {
      DAT_10c1b814 = DAT_10c1b814 | 0x4000000;
      local_8._0_1_ = 0x1b;
      DAT_10c1b7a8 = thunk_FUN_10526620(&AActor::PrivateStaticClass,L"PrePivot",0);
      local_8 = (uint)local_8._1_3_ << 8;
    }
    *param_3 = (uint)*(ushort *)(DAT_10c1b7a8 + 0x52);
    param_3 = param_3 + 1;
  }
  if ((*(uint *)(in_ECX + 0x2f8) & 3) != 0) {
    if (((*(uint *)(param_1 + 0x2f8) ^ *(uint *)(in_ECX + 0x2f8)) & 0x10) != 0) {
      if ((DAT_10c1b814 & 0x8000000) == 0) {
        DAT_10c1b814 = DAT_10c1b814 | 0x8000000;
        local_8._0_1_ = 0x1c;
        DAT_10c1b7a4 = thunk_FUN_10526620(&AActor::PrivateStaticClass,L"bProjTarget",0);
        local_8 = (uint)local_8._1_3_ << 8;
      }
      *param_3 = (uint)*(ushort *)(DAT_10c1b7a4 + 0x52);
      param_3 = param_3 + 1;
    }
    if (((*(uint *)(in_ECX + 0x2f8) ^ *(uint *)(param_1 + 0x2f8)) & 4) != 0) {
      if ((DAT_10c1b814 & 0x10000000) == 0) {
        DAT_10c1b814 = DAT_10c1b814 | 0x10000000;
        local_8._0_1_ = 0x1d;
        DAT_10c1b7a0 = thunk_FUN_10526620(&AActor::PrivateStaticClass,L"bBlockActors",0);
        local_8 = (uint)local_8._1_3_ << 8;
      }
      *param_3 = (uint)*(ushort *)(DAT_10c1b7a0 + 0x52);
      param_3 = param_3 + 1;
    }
    if (((*(uint *)(in_ECX + 0x2f8) ^ *(uint *)(param_1 + 0x2f8)) & 8) != 0) {
      if ((DAT_10c1b814 & 0x20000000) == 0) {
        DAT_10c1b814 = DAT_10c1b814 | 0x20000000;
        local_8._0_1_ = 0x1e;
        DAT_10c1b79c = thunk_FUN_10526620(&AActor::PrivateStaticClass,L"bBlockPlayers",0);
        local_8 = (uint)local_8._1_3_ << 8;
      }
      *param_3 = (uint)*(ushort *)(DAT_10c1b79c + 0x52);
      param_3 = param_3 + 1;
    }
    if (*(int *)(in_ECX + 0x2f0) != *(int *)(param_1 + 0x2f0)) {
      if ((DAT_10c1b814 & 0x40000000) == 0) {
        DAT_10c1b814 = DAT_10c1b814 | 0x40000000;
        local_8._0_1_ = 0x1f;
        DAT_10c1b798 = thunk_FUN_10526620(&AActor::PrivateStaticClass,L"CollisionRadius",0);
        local_8 = (uint)local_8._1_3_ << 8;
      }
      *param_3 = (uint)*(ushort *)(DAT_10c1b798 + 0x52);
      param_3 = param_3 + 1;
    }
    if (*(int *)(in_ECX + 0x2f4) != *(int *)(param_1 + 0x2f4)) {
      if ((DAT_10c1b814 & 0x80000000) == 0) {
        DAT_10c1b814 = DAT_10c1b814 | 0x80000000;
        local_8._0_1_ = 0x20;
        DAT_10c1b794 = thunk_FUN_10526620(&AActor::PrivateStaticClass,L"CollisionHeight",0);
        local_8 = (uint)local_8._1_3_ << 8;
      }
      *param_3 = (uint)*(ushort *)(DAT_10c1b794 + 0x52);
      param_3 = param_3 + 1;
    }
  }
  if ((*(uint *)(in_ECX + 0x74) & 0x8000) == 0) {
    if ((*(byte *)(in_ECX + 0x368) & 2) == 0) {
      if ((*(char *)(in_ECX + 0x34) == '\n') &&
         (iVar2 = thunk_FUN_10524fc0(*(undefined4 *)(in_ECX + 0x3c),*(undefined4 *)(param_1 + 0x3c),
                                     param_4,param_5), iVar2 != 0)) {
        iVar2 = DAT_10c1b784;
        if ((DAT_10c1b790 & 4) == 0) {
          DAT_10c1b790 = DAT_10c1b790 | 4;
          local_8._0_1_ = 0x23;
          iVar2 = thunk_FUN_10526620(&AActor::PrivateStaticClass,L"Owner",0);
          local_8 = (uint)local_8._1_3_ << 8;
          DAT_10c1b784 = iVar2;
        }
        goto LAB_10527661;
      }
    }
    else {
      iVar2 = thunk_FUN_10524fc0(*(undefined4 *)(in_ECX + 0x3c),*(undefined4 *)(param_1 + 0x3c),
                                 param_4,param_5);
      if (iVar2 != 0) {
        if ((DAT_10c1b790 & 1) == 0) {
          DAT_10c1b790 = DAT_10c1b790 | 1;
          local_8._0_1_ = 0x21;
          DAT_10c1b78c = thunk_FUN_10526620(&AActor::PrivateStaticClass,L"Owner",0);
          local_8 = (uint)local_8._1_3_ << 8;
        }
        *param_3 = (uint)*(ushort *)(DAT_10c1b78c + 0x52);
        param_3 = param_3 + 1;
      }
      iVar2 = thunk_FUN_10524fc0(*(undefined4 *)(in_ECX + 300),*(undefined4 *)(param_1 + 300),
                                 param_4,param_5);
      if (iVar2 != 0) {
        iVar2 = DAT_10c1b788;
        if ((DAT_10c1b790 & 2) == 0) {
          DAT_10c1b790 = DAT_10c1b790 | 2;
          local_8._0_1_ = 0x22;
          iVar2 = thunk_FUN_10526620(&AActor::PrivateStaticClass,L"Inventory",0);
          local_8 = (uint)local_8._1_3_ << 8;
          DAT_10c1b788 = iVar2;
        }
LAB_10527661:
        *param_3 = (uint)*(ushort *)(iVar2 + 0x52);
        param_3 = param_3 + 1;
      }
    }
    if (((*(uint *)(in_ECX + 0x74) & 0x2000) != 0) &&
       (iVar2 = thunk_FUN_10524fc0(*(undefined4 *)(in_ECX + 0xd4),*(undefined4 *)(param_1 + 0xd4),
                                   param_4,param_5), iVar2 != 0)) {
      if ((DAT_10c1b790 & 8) == 0) {
        DAT_10c1b790 = DAT_10c1b790 | 8;
        local_8._0_1_ = 0x24;
        DAT_10c1b780 = thunk_FUN_10526620(&AActor::PrivateStaticClass,L"Instigator",0);
        local_8 = (uint)local_8._1_3_ << 8;
      }
      *param_3 = (uint)*(ushort *)(DAT_10c1b780 + 0x52);
      param_3 = param_3 + 1;
    }
  }
  if (*(char *)(in_ECX + 0x35) == '\x02') {
    if (*(char *)(in_ECX + 0x2b4) != *(char *)(param_1 + 0x2b4)) {
      if ((DAT_10c1b790 & 0x10) == 0) {
        DAT_10c1b790 = DAT_10c1b790 | 0x10;
        local_8._0_1_ = 0x25;
        DAT_10c1b77c = thunk_FUN_10526620(&AActor::PrivateStaticClass,L"AmbientGlow",0);
        local_8 = (uint)local_8._1_3_ << 8;
      }
      *param_3 = (uint)*(ushort *)(DAT_10c1b77c + 0x52);
      param_3 = param_3 + 1;
    }
    if (*(int *)(in_ECX + 0x2c0) != *(int *)(param_1 + 0x2c0)) {
      if ((DAT_10c1b790 & 0x20) == 0) {
        DAT_10c1b790 = DAT_10c1b790 | 0x20;
        local_8._0_1_ = 0x26;
        DAT_10c1b778 = thunk_FUN_10526620(&AActor::PrivateStaticClass,L"ScaleGlow",0);
        local_8 = (uint)local_8._1_3_ << 8;
      }
      *param_3 = (uint)*(ushort *)(DAT_10c1b778 + 0x52);
      param_3 = param_3 + 1;
    }
    if (((*(uint *)(param_1 + 0x2e4) ^ *(uint *)(in_ECX + 0x2e4)) & 1) != 0) {
      if ((DAT_10c1b790 & 0x40) == 0) {
        DAT_10c1b790 = DAT_10c1b790 | 0x40;
        local_8._0_1_ = 0x27;
        DAT_10c1b774 = thunk_FUN_10526620(&AActor::PrivateStaticClass,L"bUnlit",0);
        local_8 = (uint)local_8._1_3_ << 8;
      }
      *param_3 = (uint)*(ushort *)(DAT_10c1b774 + 0x52);
      param_3 = param_3 + 1;
    }
    if (((*(byte *)(in_ECX + 0x368) & 0x40) == 0) &&
       (iVar2 = thunk_FUN_10524fc0(*(undefined4 *)(in_ECX + 0x104),*(undefined4 *)(param_1 + 0x104),
                                   param_4,param_5), iVar2 != 0)) {
      if ((DAT_10c1b790 & 0x80) == 0) {
        DAT_10c1b790 = DAT_10c1b790 | 0x80;
        local_8._0_1_ = 0x28;
        DAT_10c1b770 = thunk_FUN_10526620(&AActor::PrivateStaticClass,L"Mesh",0);
        local_8 = (uint)local_8._1_3_ << 8;
      }
      *param_3 = (uint)*(ushort *)(DAT_10c1b770 + 0x52);
      param_3 = param_3 + 1;
    }
    if (((*(uint *)(in_ECX + 0x74) & 0x80000) == 0) ||
       (iVar2 = thunk_FUN_10525110(*(undefined4 *)(in_ECX + 0x350),*(undefined4 *)(in_ECX + 0x354),
                                   *(undefined4 *)(in_ECX + 0x358),*(undefined4 *)(param_1 + 0x350),
                                   *(undefined4 *)(param_1 + 0x354),*(undefined4 *)(param_1 + 0x358)
                                   ,param_4,param_5), iVar2 == 0)) goto LAB_10527951;
    iVar2 = DAT_10c1b76c;
    if ((DAT_10c1b790 & 0x100) == 0) {
      DAT_10c1b790 = DAT_10c1b790 | 0x100;
      local_8._0_1_ = 0x29;
      iVar2 = thunk_FUN_10526620(&AActor::PrivateStaticClass,L"SimAnim",0);
      local_8 = (uint)local_8._1_3_ << 8;
      DAT_10c1b76c = iVar2;
    }
  }
  else {
    if ((*(char *)(in_ECX + 0x35) != '\b') ||
       (iVar2 = thunk_FUN_10524fc0(*(undefined4 *)(in_ECX + 0x38),*(undefined4 *)(param_1 + 0x38),
                                   param_4,param_5), iVar2 == 0)) goto LAB_10527951;
    iVar2 = DAT_10c1b768;
    if ((DAT_10c1b790 & 0x200) == 0) {
      DAT_10c1b790 = DAT_10c1b790 | 0x200;
      local_8._0_1_ = 0x2a;
      iVar2 = thunk_FUN_10526620(&AActor::PrivateStaticClass,L"StaticMesh",0);
      local_8 = (uint)local_8._1_3_ << 8;
      DAT_10c1b768 = iVar2;
    }
  }
  *param_3 = (uint)*(ushort *)(iVar2 + 0x52);
  param_3 = param_3 + 1;
LAB_10527951:
  if (((*(uint *)(param_1 + 100) ^ *(uint *)(in_ECX + 100)) & 0x20) != 0) {
    if ((DAT_10c1b790 & 0x400) == 0) {
      DAT_10c1b790 = DAT_10c1b790 | 0x400;
      local_8._0_1_ = 0x2b;
      DAT_10c1b764 = thunk_FUN_10526620(&AActor::PrivateStaticClass,L"bHidden",0);
      local_8 = (uint)local_8._1_3_ << 8;
    }
    *param_3 = (uint)*(ushort *)(DAT_10c1b764 + 0x52);
    param_3 = param_3 + 1;
  }
  if (*(char *)(in_ECX + 0xc2) != *(char *)(param_1 + 0xc2)) {
    if ((DAT_10c1b790 & 0x800) == 0) {
      DAT_10c1b790 = DAT_10c1b790 | 0x800;
      local_8._0_1_ = 0x2c;
      DAT_10c1b760 = thunk_FUN_10526620(&AActor::PrivateStaticClass,L"Role",0);
      local_8 = (uint)local_8._1_3_ << 8;
    }
    *param_3 = (uint)*(ushort *)(DAT_10c1b760 + 0x52);
    param_3 = param_3 + 1;
  }
  if (*(char *)(in_ECX + 0xc1) != *(char *)(param_1 + 0xc1)) {
    if ((DAT_10c1b790 & 0x1000) == 0) {
      DAT_10c1b790 = DAT_10c1b790 | 0x1000;
      local_8._0_1_ = 0x2d;
      DAT_10c1b75c = thunk_FUN_10526620(&AActor::PrivateStaticClass,L"RemoteRole",0);
      local_8 = (uint)local_8._1_3_ << 8;
    }
    *param_3 = (uint)*(ushort *)(DAT_10c1b75c + 0x52);
    param_3 = param_3 + 1;
  }
  if (((*(uint *)(param_1 + 0x368) ^ *(uint *)(in_ECX + 0x368)) & 2) != 0) {
    if ((DAT_10c1b790 & 0x2000) == 0) {
      DAT_10c1b790 = DAT_10c1b790 | 0x2000;
      local_8._0_1_ = 0x2e;
      DAT_10c1b758 = thunk_FUN_10526620(&AActor::PrivateStaticClass,L"bNetOwner",0);
      local_8 = (uint)local_8._1_3_ << 8;
    }
    *param_3 = (uint)*(ushort *)(DAT_10c1b758 + 0x52);
    param_3 = param_3 + 1;
  }
  if (((*(uint *)(param_1 + 0x74) ^ *(uint *)(in_ECX + 0x74)) & 0x20000) == 0) {
    ExceptionList = local_10;
    return param_3;
  }
  if ((DAT_10c1b790 & 0x4000) == 0) {
    DAT_10c1b790 = DAT_10c1b790 | 0x4000;
    local_8 = CONCAT31(local_8._1_3_,0x2f);
    DAT_10c1b754 = thunk_FUN_10526620(&AActor::PrivateStaticClass,L"bTearOff",0);
  }
  *param_3 = (uint)*(ushort *)(DAT_10c1b754 + 0x52);
  ExceptionList = local_10;
  return param_3 + 1;
}


// ==== 10527b2c Catch@10527b2c

void Catch_10527b2c(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_10914c48);
}


// ==== 10527b40 Catch@10527b40

void Catch_10527b40(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"AActor::GetOptimizedRepList");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10528040 FUN_10528040

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint * FUN_10528040(uchar *param_1,FPropertyRetirement *param_2,uint *param_3,UPackageMap *param_4,
                   UActorChannel *param_5)

{
  FVector *this;
  uint uVar1;
  int iVar2;
  uint *puVar3;
  AActor *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_10819ca2;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  *(uint *)(in_ECX + 0x74) = *(uint *)(in_ECX + 0x74) & 0xffdfffff;
  if (((byte)in_ECX[0x368] & 2) == 0) {
    if ((*(uint *)(in_ECX + 0x14ec) & 0x20000) != 0) {
      if (*(int *)(in_ECX + 0x40) == 0) {
        uVar1 = (uint)(*(int *)(param_1 + 0x40) == 0);
      }
      else {
        uVar1 = *(uint *)(*(int *)(in_ECX + 0x40) + 0x74) >> 1 & 1;
      }
      if (uVar1 != 0) {
        this = (FVector *)(in_ECX + 0x1bc);
        iVar2 = FVector::operator!=(this,(FVector *)(param_1 + 0x1bc));
        if (iVar2 != 0) {
          *(uint *)(in_ECX + 0x74) = *(uint *)(in_ECX + 0x74) | 0x200000;
          *(undefined4 *)(in_ECX + 0x183c) = *(undefined4 *)this;
          *(undefined4 *)(in_ECX + 0x1840) = *(undefined4 *)(in_ECX + 0x1c0);
          *(undefined4 *)(in_ECX + 0x1844) = *(undefined4 *)(in_ECX + 0x1c4);
          *(undefined4 *)(in_ECX + 0x1848) = *(undefined4 *)(in_ECX + 0x1c8);
          *(undefined4 *)(in_ECX + 0x184c) = *(undefined4 *)(in_ECX + 0x1cc);
          *(undefined4 *)(in_ECX + 0x1850) = *(undefined4 *)(in_ECX + 0x1d0);
          *(undefined4 *)(in_ECX + 0x1854) = *(undefined4 *)(in_ECX + 0x1d4);
          *(undefined4 *)(in_ECX + 0x1858) = *(undefined4 *)(in_ECX + 0x1d8);
          *(undefined4 *)(in_ECX + 0x185c) = *(undefined4 *)(in_ECX + 0x1dc);
          if ((DAT_10c1b874 & 1) == 0) {
            DAT_10c1b874 = DAT_10c1b874 | 1;
            local_8._0_1_ = 1;
            DAT_10c1b870 = thunk_FUN_10526620(&APawn::PrivateStaticClass,L"PawnPosition",0);
            local_8 = (uint)local_8._1_3_ << 8;
          }
          *param_3 = (uint)*(ushort *)(DAT_10c1b870 + 0x52);
          param_3 = param_3 + 1;
          *(undefined4 *)(param_1 + 0x1bc) = *(undefined4 *)this;
          *(undefined4 *)(param_1 + 0x1c0) = *(undefined4 *)(in_ECX + 0x1c0);
          *(undefined4 *)(param_1 + 0x1c4) = *(undefined4 *)(in_ECX + 0x1c4);
          *(undefined4 *)(param_1 + 0x1c8) = *(undefined4 *)(in_ECX + 0x1c8);
          *(undefined4 *)(param_1 + 0x1cc) = *(undefined4 *)(in_ECX + 0x1cc);
          *(undefined4 *)(param_1 + 0x1d0) = *(undefined4 *)(in_ECX + 0x1d0);
          *(undefined4 *)(param_1 + 0x1d4) = *(undefined4 *)(in_ECX + 0x1d4);
          *(undefined4 *)(param_1 + 0x1d8) = *(undefined4 *)(in_ECX + 0x1d8);
          *(undefined4 *)(param_1 + 0x1dc) = *(undefined4 *)(in_ECX + 0x1dc);
        }
      }
    }
    if (((*(uint *)(in_ECX + 0x74) & 0x20000) == 0) &&
       (*(float *)(*(int *)(in_ECX + 0xe0) + 0x4bc) - (float)*(double *)(param_5 + 0x8c) < 0.09)) {
      iVar2 = thunk_FUN_10524fc0(*(undefined4 *)(in_ECX + 0x16d4),*(undefined4 *)(param_1 + 0x16d4),
                                 param_4,param_5);
      if (iVar2 != 0) {
        if ((DAT_10c1b874 & 2) == 0) {
          DAT_10c1b874 = DAT_10c1b874 | 2;
          local_8 = CONCAT31(local_8._1_3_,2);
          DAT_10c1b86c = thunk_FUN_10526620(&APawn::PrivateStaticClass,L"PlayerReplicationInfo",0);
        }
        *param_3 = (uint)*(ushort *)(DAT_10c1b86c + 0x52);
        param_3 = param_3 + 1;
      }
      ExceptionList = local_10;
      return param_3;
    }
  }
  *(double *)(param_5 + 0x8c) = (double)*(float *)(*(int *)(in_ECX + 0xe0) + 0x4bc);
  if (((((*(uint *)(in_ECX + 0x74) & 0x20000) != 0) && ((_DAT_10dafc8c & 0x800) != 0)) &&
      (in_ECX[0xc2] == (AActor)0x4)) &&
     (((*(uint *)(in_ECX + 0x74) & 0x800) != 0 &&
      (iVar2 = thunk_FUN_10524f60(in_ECX + 0x1728,param_1 + 0x1728,param_4,param_5), iVar2 != 0))))
  {
    if ((DAT_10c1b874 & 4) == 0) {
      DAT_10c1b874 = DAT_10c1b874 | 4;
      local_8._0_1_ = 3;
      DAT_10c1b868 = thunk_FUN_10526620(&APawn::PrivateStaticClass,L"TearOffMomentum",0);
      local_8 = (uint)local_8._1_3_ << 8;
    }
    *param_3 = (uint)*(ushort *)(DAT_10c1b868 + 0x52);
    param_3 = param_3 + 1;
  }
  puVar3 = (uint *)AActor::GetOptimizedRepList
                             (in_ECX,param_1,param_2,(int *)param_3,param_4,param_5);
  if ((_DAT_10dafc8c & 0x800) == 0) {
    ExceptionList = local_10;
    return puVar3;
  }
  if (in_ECX[0xc2] != (AActor)0x4) {
    ExceptionList = local_10;
    return puVar3;
  }
  if ((*(uint *)(in_ECX + 0x74) & 0x800) == 0) {
    ExceptionList = local_10;
    return puVar3;
  }
  iVar2 = thunk_FUN_10524fc0(*(undefined4 *)(in_ECX + 0x16d4),*(undefined4 *)(param_1 + 0x16d4),
                             param_4,param_5);
  if (iVar2 != 0) {
    if ((DAT_10c1b874 & 8) == 0) {
      DAT_10c1b874 = DAT_10c1b874 | 8;
      local_8._0_1_ = 4;
      DAT_10c1b864 = thunk_FUN_10526620(&APawn::PrivateStaticClass,L"PlayerReplicationInfo",0);
      local_8 = (uint)local_8._1_3_ << 8;
    }
    *puVar3 = (uint)*(ushort *)(DAT_10c1b864 + 0x52);
    puVar3 = puVar3 + 1;
  }
  if (*(int *)(in_ECX + 0x15c4) != *(int *)(param_1 + 0x15c4)) {
    if ((DAT_10c1b874 & 0x10) == 0) {
      DAT_10c1b874 = DAT_10c1b874 | 0x10;
      local_8._0_1_ = 5;
      DAT_10c1b860 = thunk_FUN_10526620(&APawn::PrivateStaticClass,L"Health",0);
      local_8 = (uint)local_8._1_3_ << 8;
    }
    *puVar3 = (uint)*(ushort *)(DAT_10c1b860 + 0x52);
    puVar3 = puVar3 + 1;
  }
  if ((((((byte)in_ECX[0x368] & 2) != 0) || (*(int *)(param_1 + 0x14d8) != 0)) &&
      ((*(int *)(in_ECX + 0x14d8) == 0 ||
       (iVar2 = (**(code **)(*(int *)param_4 + 0x68))(*(int *)(in_ECX + 0x14d8)), iVar2 != 0)))) &&
     (iVar2 = thunk_FUN_10524fc0(*(undefined4 *)(in_ECX + 0x14d8),*(undefined4 *)(param_1 + 0x14d8),
                                 param_4,param_5), iVar2 != 0)) {
    if ((DAT_10c1b874 & 0x20) == 0) {
      DAT_10c1b874 = DAT_10c1b874 | 0x20;
      local_8._0_1_ = 6;
      DAT_10c1b85c = thunk_FUN_10526620(&APawn::PrivateStaticClass,L"Controller",0);
      local_8 = (uint)local_8._1_3_ << 8;
    }
    *puVar3 = (uint)*(ushort *)(DAT_10c1b85c + 0x52);
    puVar3 = puVar3 + 1;
  }
  if (((byte)in_ECX[0x368] & 2) == 0) {
    if (((*(uint *)(param_1 + 0x14e8) ^ *(uint *)(in_ECX + 0x14e8)) & 0x8000000) == 0)
    goto LAB_1052878c;
    iVar2 = DAT_10c1b83c;
    if ((DAT_10c1b874 & 0x2000) == 0) {
      DAT_10c1b874 = DAT_10c1b874 | 0x2000;
      local_8._0_1_ = 0xe;
      iVar2 = thunk_FUN_10526620(&APawn::PrivateStaticClass,L"bSteadyFiring",0);
      local_8 = (uint)local_8._1_3_ << 8;
      DAT_10c1b83c = iVar2;
    }
  }
  else {
    iVar2 = thunk_FUN_10524fc0(*(undefined4 *)(in_ECX + 0x1598),*(undefined4 *)(param_1 + 0x1598),
                               param_4,param_5);
    if (iVar2 != 0) {
      if ((DAT_10c1b874 & 0x40) == 0) {
        DAT_10c1b874 = DAT_10c1b874 | 0x40;
        local_8._0_1_ = 7;
        DAT_10c1b858 = thunk_FUN_10526620(&APawn::PrivateStaticClass,L"SelectedItem",0);
        local_8 = (uint)local_8._1_3_ << 8;
      }
      *puVar3 = (uint)*(ushort *)(DAT_10c1b858 + 0x52);
      puVar3 = puVar3 + 1;
    }
    if (*(int *)(in_ECX + 0x1550) != *(int *)(param_1 + 0x1550)) {
      if ((DAT_10c1b874 & 0x80) == 0) {
        DAT_10c1b874 = DAT_10c1b874 | 0x80;
        local_8._0_1_ = 8;
        DAT_10c1b854 = thunk_FUN_10526620(&APawn::PrivateStaticClass,L"GroundSpeed",0);
        local_8 = (uint)local_8._1_3_ << 8;
      }
      *puVar3 = (uint)*(ushort *)(DAT_10c1b854 + 0x52);
      puVar3 = puVar3 + 1;
    }
    if (*(int *)(in_ECX + 0x1554) != *(int *)(param_1 + 0x1554)) {
      if ((DAT_10c1b874 & 0x100) == 0) {
        DAT_10c1b874 = DAT_10c1b874 | 0x100;
        local_8._0_1_ = 9;
        DAT_10c1b850 = thunk_FUN_10526620(&APawn::PrivateStaticClass,L"WaterSpeed",0);
        local_8 = (uint)local_8._1_3_ << 8;
      }
      *puVar3 = (uint)*(ushort *)(DAT_10c1b850 + 0x52);
      puVar3 = puVar3 + 1;
    }
    if (*(int *)(in_ECX + 0x1558) != *(int *)(param_1 + 0x1558)) {
      if ((DAT_10c1b874 & 0x200) == 0) {
        DAT_10c1b874 = DAT_10c1b874 | 0x200;
        local_8._0_1_ = 10;
        DAT_10c1b84c = thunk_FUN_10526620(&APawn::PrivateStaticClass,L"AirSpeed",0);
        local_8 = (uint)local_8._1_3_ << 8;
      }
      *puVar3 = (uint)*(ushort *)(DAT_10c1b84c + 0x52);
      puVar3 = puVar3 + 1;
    }
    if (*(int *)(in_ECX + 0x1560) != *(int *)(param_1 + 0x1560)) {
      if ((DAT_10c1b874 & 0x400) == 0) {
        DAT_10c1b874 = DAT_10c1b874 | 0x400;
        local_8._0_1_ = 0xb;
        DAT_10c1b848 = thunk_FUN_10526620(&APawn::PrivateStaticClass,L"AccelRate",0);
        local_8 = (uint)local_8._1_3_ << 8;
      }
      *puVar3 = (uint)*(ushort *)(DAT_10c1b848 + 0x52);
      puVar3 = puVar3 + 1;
    }
    if (*(int *)(in_ECX + 0x1564) != *(int *)(param_1 + 0x1564)) {
      if ((DAT_10c1b874 & 0x800) == 0) {
        DAT_10c1b874 = DAT_10c1b874 | 0x800;
        local_8._0_1_ = 0xc;
        DAT_10c1b844 = thunk_FUN_10526620(&APawn::PrivateStaticClass,L"JumpZ",0);
        local_8 = (uint)local_8._1_3_ << 8;
      }
      *puVar3 = (uint)*(ushort *)(DAT_10c1b844 + 0x52);
      puVar3 = puVar3 + 1;
    }
    if (*(int *)(in_ECX + 0x1568) == *(int *)(param_1 + 0x1568)) goto LAB_1052878c;
    iVar2 = DAT_10c1b840;
    if ((DAT_10c1b874 & 0x1000) == 0) {
      DAT_10c1b874 = DAT_10c1b874 | 0x1000;
      local_8._0_1_ = 0xd;
      iVar2 = thunk_FUN_10526620(&APawn::PrivateStaticClass,L"AirControl",0);
      local_8 = (uint)local_8._1_3_ << 8;
      DAT_10c1b840 = iVar2;
    }
  }
  *puVar3 = (uint)*(ushort *)(iVar2 + 0x52);
  puVar3 = puVar3 + 1;
LAB_1052878c:
  iVar2 = thunk_FUN_10524fc0(*(undefined4 *)(in_ECX + 0x1724),*(undefined4 *)(param_1 + 0x1724),
                             param_4,param_5);
  if (iVar2 != 0) {
    if ((DAT_10c1b874 & 0x4000) == 0) {
      DAT_10c1b874 = DAT_10c1b874 | 0x4000;
      local_8._0_1_ = 0xf;
      DAT_10c1b838 = thunk_FUN_10526620(&APawn::PrivateStaticClass,L"HitDamageType",0);
      local_8 = (uint)local_8._1_3_ << 8;
    }
    *puVar3 = (uint)*(ushort *)(DAT_10c1b838 + 0x52);
    puVar3 = puVar3 + 1;
  }
  iVar2 = thunk_FUN_10524f60(in_ECX + 0x1718,param_1 + 0x1718,param_4,param_5);
  if (iVar2 != 0) {
    if ((DAT_10c1b874 & 0x8000) == 0) {
      DAT_10c1b874 = DAT_10c1b874 | 0x8000;
      local_8._0_1_ = 0x10;
      DAT_10c1b834 = thunk_FUN_10526620(&APawn::PrivateStaticClass,L"TakeHitLocation",0);
      local_8 = (uint)local_8._1_3_ << 8;
    }
    *puVar3 = (uint)*(ushort *)(DAT_10c1b834 + 0x52);
    puVar3 = puVar3 + 1;
  }
  if (*(int *)(in_ECX + 0x1714) != *(int *)(param_1 + 0x1714)) {
    if ((DAT_10c1b874 & 0x10000) == 0) {
      DAT_10c1b874 = DAT_10c1b874 | 0x10000;
      local_8._0_1_ = 0x11;
      DAT_10c1b830 = thunk_FUN_10526620(&APawn::PrivateStaticClass,L"AnimAction",0);
      local_8 = (uint)local_8._1_3_ << 8;
    }
    *puVar3 = (uint)*(ushort *)(DAT_10c1b830 + 0x52);
    puVar3 = puVar3 + 1;
  }
  if (((*(uint *)(in_ECX + 0x14e8) ^ *(uint *)(param_1 + 0x14e8)) & 0x400000) != 0) {
    if ((DAT_10c1b874 & 0x20000) == 0) {
      DAT_10c1b874 = DAT_10c1b874 | 0x20000;
      local_8._0_1_ = 0x12;
      DAT_10c1b82c = thunk_FUN_10526620(&APawn::PrivateStaticClass,L"bSimulateGravity",0);
      local_8 = (uint)local_8._1_3_ << 8;
    }
    *puVar3 = (uint)*(ushort *)(DAT_10c1b82c + 0x52);
    puVar3 = puVar3 + 1;
  }
  if (((*(uint *)(in_ECX + 0x14e8) ^ *(uint *)(param_1 + 0x14e8)) & 0x20) != 0) {
    if ((DAT_10c1b874 & 0x40000) == 0) {
      DAT_10c1b874 = DAT_10c1b874 | 0x40000;
      local_8._0_1_ = 0x13;
      DAT_10c1b828 = thunk_FUN_10526620(&APawn::PrivateStaticClass,L"bIsCrouched",0);
      local_8 = (uint)local_8._1_3_ << 8;
    }
    *puVar3 = (uint)*(ushort *)(DAT_10c1b828 + 0x52);
    puVar3 = puVar3 + 1;
  }
  if (((*(uint *)(in_ECX + 0x14e8) ^ *(uint *)(param_1 + 0x14e8)) & 4) != 0) {
    if ((DAT_10c1b874 & 0x80000) == 0) {
      DAT_10c1b874 = DAT_10c1b874 | 0x80000;
      local_8._0_1_ = 0x14;
      DAT_10c1b824 = thunk_FUN_10526620(&APawn::PrivateStaticClass,L"bIsWalking",0);
      local_8 = (uint)local_8._1_3_ << 8;
    }
    *puVar3 = (uint)*(ushort *)(DAT_10c1b824 + 0x52);
    puVar3 = puVar3 + 1;
  }
  if (((*(uint *)(param_1 + 0x14ec) ^ *(uint *)(in_ECX + 0x14ec)) & 0x800000) != 0) {
    if ((DAT_10c1b874 & 0x100000) == 0) {
      DAT_10c1b874 = DAT_10c1b874 | 0x100000;
      local_8._0_1_ = 0x15;
      DAT_10c1b820 = thunk_FUN_10526620(&APawn::PrivateStaticClass,L"bIsTyping",0);
      local_8 = (uint)local_8._1_3_ << 8;
    }
    *puVar3 = (uint)*(ushort *)(DAT_10c1b820 + 0x52);
    puVar3 = puVar3 + 1;
  }
  if (*(int *)(in_ECX + 0x15d8) != *(int *)(param_1 + 0x15d8)) {
    if ((DAT_10c1b874 & 0x200000) == 0) {
      DAT_10c1b874 = DAT_10c1b874 | 0x200000;
      local_8._0_1_ = 0x16;
      DAT_10c1b81c = thunk_FUN_10526620(&APawn::PrivateStaticClass,L"HeadScale",0);
      local_8 = (uint)local_8._1_3_ << 8;
    }
    *puVar3 = (uint)*(ushort *)(DAT_10c1b81c + 0x52);
    puVar3 = puVar3 + 1;
  }
  if (((*(uint *)(in_ECX + 0x74) & 0x20000) == 0) &&
     (iVar2 = thunk_FUN_10524f60(in_ECX + 0x1728,param_1 + 0x1728,param_4,param_5), iVar2 != 0)) {
    if ((DAT_10c1b874 & 0x400000) == 0) {
      DAT_10c1b874 = DAT_10c1b874 | 0x400000;
      local_8 = CONCAT31(local_8._1_3_,0x17);
      DAT_10c1b818 = thunk_FUN_10526620(&APawn::PrivateStaticClass,L"TearOffMomentum",0);
    }
    *puVar3 = (uint)*(ushort *)(DAT_10c1b818 + 0x52);
    puVar3 = puVar3 + 1;
  }
  ExceptionList = local_10;
  return puVar3;
}


// ==== 10528af2 Catch@10528af2

void Catch_10528af2(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 10528b06 Catch@10528b06

void Catch_10528b06(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"APawn::GetOptimizedRepList");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10528de0 FUN_10528de0

undefined4 FUN_10528de0(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  UObject *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10819d10;
  local_10 = ExceptionList;
  local_8 = 0;
  if (((byte)*GL2ThreadFilter_exref & 4) != 0) {
    ExceptionList = &local_10;
    iVar2 = UObject::IsLoaded(in_ECX);
    if (iVar2 == 0) {
      ExceptionList = local_10;
      return 0;
    }
    if ((*(int *)(in_ECX + 0x104) != 0) &&
       (iVar2 = (**(code **)(**(int **)(in_ECX + 0x104) + 100))(), iVar2 == 0)) {
      ExceptionList = local_10;
      return 0;
    }
    for (iVar2 = 0; iVar2 < *(int *)(in_ECX + 0x29c); iVar2 = iVar2 + 1) {
      piVar1 = (int *)(*(int *)(in_ECX + 0x298) + iVar2 * 4);
      if ((*piVar1 != 0) && (iVar3 = (**(code **)(*(int *)*piVar1 + 100))(), iVar3 == 0)) {
        ExceptionList = local_10;
        return 0;
      }
    }
  }
  ExceptionList = local_10;
  return 1;
}


// ==== 10528e92 Catch@10528e92

void Catch_10528e92(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_10914c48);
}


// ==== 10528ea6 Catch@10528ea6

void Catch_10528ea6(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"AActor::IsLoaded");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10528f00 FUN_10528f00

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint * FUN_10528f00(uchar *param_1,FPropertyRetirement *param_2,int *param_3,UPackageMap *param_4,
                   UActorChannel *param_5)

{
  uint *puVar1;
  int iVar2;
  AActor *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_10819d4a;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  puVar1 = (uint *)AActor::GetOptimizedRepList(in_ECX,param_1,param_2,param_3,param_4,param_5);
  if ((((_DAT_10c2a8cc & 0x800) != 0) && ((*(uint *)(in_ECX + 0x74) & 0x800) != 0)) &&
     (in_ECX[0xc2] == (AActor)0x4)) {
    iVar2 = thunk_FUN_10524fc0(*(undefined4 *)(in_ECX + 0x4f4),*(undefined4 *)(param_1 + 0x4f4),
                               param_4,param_5);
    if (iVar2 != 0) {
      if ((DAT_10c1b884 & 1) == 0) {
        DAT_10c1b884 = DAT_10c1b884 | 1;
        local_8._0_1_ = 1;
        DAT_10c1b880 = thunk_FUN_10526620(&AController::PrivateStaticClass,L"PlayerReplicationInfo",
                                          0);
        local_8 = (uint)local_8._1_3_ << 8;
      }
      *puVar1 = (uint)*(ushort *)(DAT_10c1b880 + 0x52);
      puVar1 = puVar1 + 1;
    }
    iVar2 = thunk_FUN_10524fc0(*(undefined4 *)(in_ECX + 0x3bc),*(undefined4 *)(param_1 + 0x3bc),
                               param_4,param_5);
    if (iVar2 != 0) {
      if ((DAT_10c1b884 & 2) == 0) {
        DAT_10c1b884 = DAT_10c1b884 | 2;
        local_8._0_1_ = 2;
        DAT_10c1b87c = thunk_FUN_10526620(&AController::PrivateStaticClass,L"Pawn",0);
        local_8 = (uint)local_8._1_3_ << 8;
      }
      *puVar1 = (uint)*(ushort *)(DAT_10c1b87c + 0x52);
      puVar1 = puVar1 + 1;
    }
    if (((byte)in_ECX[0x368] & 2) != 0) {
      iVar2 = thunk_FUN_10524fc0(*(undefined4 *)(in_ECX + 0x4f8),*(undefined4 *)(param_1 + 0x4f8),
                                 param_4,param_5);
      if (iVar2 != 0) {
        if ((DAT_10c1b884 & 4) == 0) {
          DAT_10c1b884 = DAT_10c1b884 | 4;
          local_8 = CONCAT31(local_8._1_3_,3);
          DAT_10c1b878 = thunk_FUN_10526620(&AController::PrivateStaticClass,L"PawnClass",0);
        }
        *puVar1 = (uint)*(ushort *)(DAT_10c1b878 + 0x52);
        puVar1 = puVar1 + 1;
      }
    }
  }
  ExceptionList = local_10;
  return puVar1;
}


// ==== 105290c0 Catch@105290c0

void Catch_105290c0(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 105290d4 Catch@105290d4

void Catch_105290d4(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"AController::GetOptimizedRepList");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10529170 FUN_10529170

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint * FUN_10529170(uchar *param_1,FPropertyRetirement *param_2,int *param_3,UPackageMap *param_4,
                   UActorChannel *param_5)

{
  uint *puVar1;
  int iVar2;
  AController *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_10819da8;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  puVar1 = (uint *)AController::GetOptimizedRepList(in_ECX,param_1,param_2,param_3,param_4,param_5);
  if ((((_DAT_10c2b32c & 0x800) != 0) && (((byte)in_ECX[0x368] & 2) != 0)) &&
     (in_ECX[0xc2] == (AController)0x4)) {
    if ((*(uint *)(in_ECX + 0x74) & 0x800) != 0) {
      iVar2 = thunk_FUN_10524fc0(*(undefined4 *)(in_ECX + 0x770),*(undefined4 *)(param_1 + 0x770),
                                 param_4,param_5);
      if (iVar2 != 0) {
        if ((DAT_10c1b898 & 1) == 0) {
          DAT_10c1b898 = DAT_10c1b898 | 1;
          local_8._0_1_ = 1;
          DAT_10c1b894 = thunk_FUN_10526620(&APlayerController::PrivateStaticClass,
                                            L"GameReplicationInfo",0);
          local_8 = (uint)local_8._1_3_ << 8;
        }
        *puVar1 = (uint)*(ushort *)(DAT_10c1b894 + 0x52);
        puVar1 = puVar1 + 1;
      }
    }
    iVar2 = (**(code **)(*(int *)in_ECX + 0x340))();
    if (iVar2 != *(int *)(in_ECX + 0x3bc)) {
      iVar2 = UObject::IsA(*(UObject **)(in_ECX + 0x5c0),&APawn::PrivateStaticClass);
      if (iVar2 != 0) {
        iVar2 = thunk_FUN_10524f90(in_ECX + 0x698,param_1 + 0x698,param_4,param_5);
        if (iVar2 != 0) {
          if ((DAT_10c1b898 & 2) == 0) {
            DAT_10c1b898 = DAT_10c1b898 | 2;
            local_8._0_1_ = 2;
            DAT_10c1b890 = thunk_FUN_10526620(&APlayerController::PrivateStaticClass,
                                              L"TargetViewRotation",0);
            local_8 = (uint)local_8._1_3_ << 8;
          }
          *puVar1 = (uint)*(ushort *)(DAT_10c1b890 + 0x52);
          puVar1 = puVar1 + 1;
        }
        if (*(int *)(in_ECX + 0x6a4) != *(int *)(param_1 + 0x6a4)) {
          if ((DAT_10c1b898 & 4) == 0) {
            DAT_10c1b898 = DAT_10c1b898 | 4;
            local_8._0_1_ = 3;
            DAT_10c1b88c = thunk_FUN_10526620(&APlayerController::PrivateStaticClass,
                                              L"TargetEyeHeight",0);
            local_8 = (uint)local_8._1_3_ << 8;
          }
          *puVar1 = (uint)*(ushort *)(DAT_10c1b88c + 0x52);
          puVar1 = puVar1 + 1;
        }
        iVar2 = thunk_FUN_10524f60(in_ECX + 0x6a8,param_1 + 0x6a8,param_4,param_5);
        if (iVar2 != 0) {
          if ((DAT_10c1b898 & 8) == 0) {
            DAT_10c1b898 = DAT_10c1b898 | 8;
            local_8 = CONCAT31(local_8._1_3_,4);
            DAT_10c1b888 = thunk_FUN_10526620(&APlayerController::PrivateStaticClass,
                                              L"TargetWeaponViewOffset",0);
          }
          *puVar1 = (uint)*(ushort *)(DAT_10c1b888 + 0x52);
          puVar1 = puVar1 + 1;
        }
      }
    }
  }
  ExceptionList = local_10;
  return puVar1;
}


// ==== 105293b4 Catch@105293b4

void Catch_105293b4(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 105293c8 Catch@105293c8

void Catch_105293c8(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"APlayerController::GetOptimizedRepList");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10529490 FUN_10529490

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint * FUN_10529490(uchar *param_1,FPropertyRetirement *param_2,int *param_3,UPackageMap *param_4,
                   UActorChannel *param_5)

{
  uint *puVar1;
  int iVar2;
  AActor *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_10819e42;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  puVar1 = (uint *)AActor::GetOptimizedRepList(in_ECX,param_1,param_2,param_3,param_4,param_5);
  if ((_DAT_10dad0bc & 0x800) != 0) {
    if (in_ECX[0xc2] == (AActor)0x4) {
      iVar2 = thunk_FUN_10524f60(in_ECX + 0x5d8,param_1 + 0x5d8,param_4,param_5);
      if (iVar2 != 0) {
        if ((DAT_10c1b8bc & 1) == 0) {
          DAT_10c1b8bc = DAT_10c1b8bc | 1;
          local_8._0_1_ = 1;
          DAT_10c1b8b8 = thunk_FUN_10526620(&AMover::PrivateStaticClass,L"SimOldPos",0);
          local_8 = (uint)local_8._1_3_ << 8;
        }
        *puVar1 = (uint)*(ushort *)(DAT_10c1b8b8 + 0x52);
        puVar1 = puVar1 + 1;
      }
      if (*(int *)(in_ECX + 0x5e4) != *(int *)(param_1 + 0x5e4)) {
        if ((DAT_10c1b8bc & 2) == 0) {
          DAT_10c1b8bc = DAT_10c1b8bc | 2;
          local_8._0_1_ = 2;
          DAT_10c1b8b4 = thunk_FUN_10526620(&AMover::PrivateStaticClass,L"SimOldRotPitch",0);
          local_8 = (uint)local_8._1_3_ << 8;
        }
        *puVar1 = (uint)*(ushort *)(DAT_10c1b8b4 + 0x52);
        puVar1 = puVar1 + 1;
      }
      if (*(int *)(in_ECX + 0x5e8) != *(int *)(param_1 + 0x5e8)) {
        if ((DAT_10c1b8bc & 4) == 0) {
          DAT_10c1b8bc = DAT_10c1b8bc | 4;
          local_8._0_1_ = 3;
          DAT_10c1b8b0 = thunk_FUN_10526620(&AMover::PrivateStaticClass,L"SimOldRotYaw",0);
          local_8 = (uint)local_8._1_3_ << 8;
        }
        *puVar1 = (uint)*(ushort *)(DAT_10c1b8b0 + 0x52);
        puVar1 = puVar1 + 1;
      }
      if (*(int *)(in_ECX + 0x5ec) != *(int *)(param_1 + 0x5ec)) {
        if ((DAT_10c1b8bc & 8) == 0) {
          DAT_10c1b8bc = DAT_10c1b8bc | 8;
          local_8._0_1_ = 4;
          DAT_10c1b8ac = thunk_FUN_10526620(&AMover::PrivateStaticClass,L"SimOldRotRoll",0);
          local_8 = (uint)local_8._1_3_ << 8;
        }
        *puVar1 = (uint)*(ushort *)(DAT_10c1b8ac + 0x52);
        puVar1 = puVar1 + 1;
      }
      iVar2 = thunk_FUN_10524f60(in_ECX + 0x5f0,param_1 + 0x5f0,param_4,param_5);
      if (iVar2 != 0) {
        if ((DAT_10c1b8bc & 0x10) == 0) {
          DAT_10c1b8bc = DAT_10c1b8bc | 0x10;
          local_8._0_1_ = 5;
          DAT_10c1b8a8 = thunk_FUN_10526620(&AMover::PrivateStaticClass,L"SimInterpolate",0);
          local_8 = (uint)local_8._1_3_ << 8;
        }
        *puVar1 = (uint)*(ushort *)(DAT_10c1b8a8 + 0x52);
        puVar1 = puVar1 + 1;
      }
      iVar2 = thunk_FUN_10524f60(in_ECX + 0x5fc,param_1 + 0x5fc,param_4,param_5);
      if (iVar2 != 0) {
        if ((DAT_10c1b8bc & 0x20) == 0) {
          DAT_10c1b8bc = DAT_10c1b8bc | 0x20;
          local_8._0_1_ = 6;
          DAT_10c1b8a4 = thunk_FUN_10526620(&AMover::PrivateStaticClass,L"RealPosition",0);
          local_8 = (uint)local_8._1_3_ << 8;
        }
        *puVar1 = (uint)*(ushort *)(DAT_10c1b8a4 + 0x52);
        puVar1 = puVar1 + 1;
      }
      iVar2 = thunk_FUN_10524f90(in_ECX + 0x608,param_1 + 0x608,param_4,param_5);
      if (iVar2 != 0) {
        if ((DAT_10c1b8bc & 0x40) == 0) {
          DAT_10c1b8bc = DAT_10c1b8bc | 0x40;
          local_8._0_1_ = 7;
          DAT_10c1b8a0 = thunk_FUN_10526620(&AMover::PrivateStaticClass,L"RealRotation",0);
          local_8 = (uint)local_8._1_3_ << 8;
        }
        *puVar1 = (uint)*(ushort *)(DAT_10c1b8a0 + 0x52);
        puVar1 = puVar1 + 1;
      }
    }
    iVar2 = thunk_FUN_10524f60(in_ECX + 0x1d4,param_1 + 0x1d4,param_4,param_5);
    if (iVar2 != 0) {
      if ((DAT_10c1b8bc & 0x80) == 0) {
        DAT_10c1b8bc = DAT_10c1b8bc | 0x80;
        local_8 = CONCAT31(local_8._1_3_,8);
        DAT_10c1b89c = thunk_FUN_10526620(&AActor::PrivateStaticClass,L"Velocity",0);
      }
      *puVar1 = (uint)*(ushort *)(DAT_10c1b89c + 0x52);
      puVar1 = puVar1 + 1;
    }
  }
  ExceptionList = local_10;
  return puVar1;
}


// ==== 10529807 Catch@10529807

void Catch_10529807(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 1052981b Catch@1052981b

void Catch_1052981b(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"AMover::GetOptimizedRepList");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10529930 FUN_10529930

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint * FUN_10529930(uchar *param_1,FPropertyRetirement *param_2,int *param_3,UPackageMap *param_4,
                   UActorChannel *param_5)

{
  uint *puVar1;
  int iVar2;
  AActor *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_10819ed2;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  puVar1 = (uint *)AActor::GetOptimizedRepList(in_ECX,param_1,param_2,param_3,param_4,param_5);
  if (((_DAT_10c2ec3c & 0x800) != 0) && (in_ECX[0xc2] == (AActor)0x4)) {
    if (((*(uint *)(in_ECX + 0x74) & 0x8000) != 0) && (((byte)in_ECX[0x368] & 1) == 0)) {
      iVar2 = thunk_FUN_10524f60(in_ECX + 0x1bc,param_1 + 0x1bc,param_4,param_5);
      if (iVar2 != 0) {
        if ((DAT_10c1b8dc & 1) == 0) {
          DAT_10c1b8dc = DAT_10c1b8dc | 1;
          local_8._0_1_ = 1;
          DAT_10c1b8d8 = thunk_FUN_10526620(&AActor::PrivateStaticClass,L"Location",0);
          local_8 = (uint)local_8._1_3_ << 8;
        }
        *puVar1 = (uint)*(ushort *)(DAT_10c1b8d8 + 0x52);
        puVar1 = puVar1 + 1;
      }
      iVar2 = thunk_FUN_10524f90(in_ECX + 0x1c8,param_1 + 0x1c8,param_4,param_5);
      if (iVar2 != 0) {
        if ((DAT_10c1b8dc & 2) == 0) {
          DAT_10c1b8dc = DAT_10c1b8dc | 2;
          local_8._0_1_ = 2;
          DAT_10c1b8d4 = thunk_FUN_10526620(&AActor::PrivateStaticClass,L"Rotation",0);
          local_8 = (uint)local_8._1_3_ << 8;
        }
        *puVar1 = (uint)*(ushort *)(DAT_10c1b8d4 + 0x52);
        puVar1 = puVar1 + 1;
      }
      iVar2 = thunk_FUN_10524fc0(*(undefined4 *)(in_ECX + 0x40),*(undefined4 *)(param_1 + 0x40),
                                 param_4,param_5);
      if (iVar2 != 0) {
        if ((DAT_10c1b8dc & 4) == 0) {
          DAT_10c1b8dc = DAT_10c1b8dc | 4;
          local_8._0_1_ = 3;
          DAT_10c1b8d0 = thunk_FUN_10526620(&AActor::PrivateStaticClass,L"Base",0);
          local_8 = (uint)local_8._1_3_ << 8;
        }
        *puVar1 = (uint)*(ushort *)(DAT_10c1b8d0 + 0x52);
        puVar1 = puVar1 + 1;
      }
      if ((*(int *)(in_ECX + 0x40) != 0) && ((*(byte *)(*(int *)(in_ECX + 0x40) + 0x74) & 2) == 0))
      {
        iVar2 = thunk_FUN_10524f60(in_ECX + 0x1fc,param_1 + 0x1fc,param_4,param_5);
        if (iVar2 != 0) {
          if ((DAT_10c1b8dc & 8) == 0) {
            DAT_10c1b8dc = DAT_10c1b8dc | 8;
            local_8._0_1_ = 4;
            DAT_10c1b8cc = thunk_FUN_10526620(&AActor::PrivateStaticClass,L"RelativeLocation",0);
            local_8 = (uint)local_8._1_3_ << 8;
          }
          *puVar1 = (uint)*(ushort *)(DAT_10c1b8cc + 0x52);
          puVar1 = puVar1 + 1;
        }
        iVar2 = thunk_FUN_10524f90(in_ECX + 0x208,param_1 + 0x208,param_4,param_5);
        if (iVar2 != 0) {
          if ((DAT_10c1b8dc & 0x10) == 0) {
            DAT_10c1b8dc = DAT_10c1b8dc | 0x10;
            local_8._0_1_ = 5;
            DAT_10c1b8c8 = thunk_FUN_10526620(&AActor::PrivateStaticClass,L"RelativeRotation",0);
            local_8 = (uint)local_8._1_3_ << 8;
          }
          *puVar1 = (uint)*(ushort *)(DAT_10c1b8c8 + 0x52);
          puVar1 = puVar1 + 1;
        }
        if (*(int *)(in_ECX + 0xd8) != *(int *)(param_1 + 0xd8)) {
          if ((DAT_10c1b8dc & 0x20) == 0) {
            DAT_10c1b8dc = DAT_10c1b8dc | 0x20;
            local_8._0_1_ = 6;
            DAT_10c1b8c4 = thunk_FUN_10526620(&AActor::PrivateStaticClass,L"AttachmentBone",0);
            local_8 = (uint)local_8._1_3_ << 8;
          }
          *puVar1 = (uint)*(ushort *)(DAT_10c1b8c4 + 0x52);
          puVar1 = puVar1 + 1;
        }
      }
    }
    if ((in_ECX[0xc2] == (AActor)0x4) && ((*(uint *)(in_ECX + 0x74) & 0x800) != 0)) {
      iVar2 = thunk_FUN_10524f60(in_ECX + 0x444,param_1 + 0x444,param_4,param_5);
      if (iVar2 != 0) {
        if ((DAT_10c1b8dc & 0x40) == 0) {
          DAT_10c1b8dc = DAT_10c1b8dc | 0x40;
          local_8 = CONCAT31(local_8._1_3_,7);
          DAT_10c1b8c0 = thunk_FUN_10526620(&APhysicsVolume::PrivateStaticClass,L"Gravity",0);
        }
        *puVar1 = (uint)*(ushort *)(DAT_10c1b8c0 + 0x52);
        puVar1 = puVar1 + 1;
      }
    }
  }
  ExceptionList = local_10;
  return puVar1;
}


// ==== 10529cab Catch@10529cab

void Catch_10529cab(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 10529cbf Catch@10529cbf

void Catch_10529cbf(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"APhysicsVolume::GetOptimizedRepList");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10529dd0 FUN_10529dd0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint * FUN_10529dd0(uchar *param_1,FPropertyRetirement *param_2,int *param_3,UPackageMap *param_4,
                   UActorChannel *param_5)

{
  uint *puVar1;
  int iVar2;
  AActor *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_10819f54;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  puVar1 = (uint *)AActor::GetOptimizedRepList(in_ECX,param_1,param_2,param_3,param_4,param_5);
  if ((_DAT_10c1e8dc & 0x800) != 0) {
    if ((in_ECX[0xc2] == (AActor)0x4) && ((*(uint *)(in_ECX + 0x74) & 0x800) != 0)) {
      iVar2 = thunk_FUN_10524fc0(*(undefined4 *)(in_ECX + 0x530),*(undefined4 *)(param_1 + 0x530),
                                 param_4,param_5);
      if (iVar2 != 0) {
        if ((DAT_10c1b8f8 & 1) == 0) {
          DAT_10c1b8f8 = DAT_10c1b8f8 | 1;
          local_8._0_1_ = 1;
          DAT_10c1b8f4 = thunk_FUN_10526620(&ALevelInfo::PrivateStaticClass,L"Pauser",0);
          local_8 = (uint)local_8._1_3_ << 8;
        }
        *puVar1 = (uint)*(ushort *)(DAT_10c1b8f4 + 0x52);
        puVar1 = puVar1 + 1;
      }
      if (*(int *)(in_ECX + 0x4b8) != *(int *)(param_1 + 0x4b8)) {
        if ((DAT_10c1b8f8 & 2) == 0) {
          DAT_10c1b8f8 = DAT_10c1b8f8 | 2;
          local_8._0_1_ = 2;
          DAT_10c1b8f0 = thunk_FUN_10526620(&ALevelInfo::PrivateStaticClass,L"TimeDilation",0);
          local_8 = (uint)local_8._1_3_ << 8;
        }
        *puVar1 = (uint)*(ushort *)(DAT_10c1b8f0 + 0x52);
        puVar1 = puVar1 + 1;
      }
      if (*(int *)(in_ECX + 0x618) != *(int *)(param_1 + 0x618)) {
        if ((DAT_10c1b8f8 & 4) == 0) {
          DAT_10c1b8f8 = DAT_10c1b8f8 | 4;
          local_8._0_1_ = 3;
          DAT_10c1b8ec = thunk_FUN_10526620(&ALevelInfo::PrivateStaticClass,L"DefaultGravity",0);
          local_8 = (uint)local_8._1_3_ << 8;
        }
        *puVar1 = (uint)*(ushort *)(DAT_10c1b8ec + 0x52);
        puVar1 = puVar1 + 1;
      }
    }
    if ((in_ECX[0xc2] == (AActor)0x4) && (((byte)in_ECX[0x368] & 1) != 0)) {
      if (*(int *)(in_ECX + 0x4ec) != *(int *)(param_1 + 0x4ec)) {
        if ((DAT_10c1b8f8 & 8) == 0) {
          DAT_10c1b8f8 = DAT_10c1b8f8 | 8;
          local_8._0_1_ = 4;
          DAT_10c1b8e8 = thunk_FUN_10526620(&ALevelInfo::PrivateStaticClass,L"KarmaTimeScale",0);
          local_8 = (uint)local_8._1_3_ << 8;
        }
        *puVar1 = (uint)*(ushort *)(DAT_10c1b8e8 + 0x52);
        puVar1 = puVar1 + 1;
      }
      if (*(int *)(in_ECX + 0x4f0) != *(int *)(param_1 + 0x4f0)) {
        if ((DAT_10c1b8f8 & 0x10) == 0) {
          DAT_10c1b8f8 = DAT_10c1b8f8 | 0x10;
          local_8._0_1_ = 5;
          DAT_10c1b8e4 = thunk_FUN_10526620(&ALevelInfo::PrivateStaticClass,L"RagdollTimeScale",0);
          local_8 = (uint)local_8._1_3_ << 8;
        }
        *puVar1 = (uint)*(ushort *)(DAT_10c1b8e4 + 0x52);
        puVar1 = puVar1 + 1;
      }
      if (*(int *)(in_ECX + 0x4f8) != *(int *)(param_1 + 0x4f8)) {
        if ((DAT_10c1b8f8 & 0x20) == 0) {
          DAT_10c1b8f8 = DAT_10c1b8f8 | 0x20;
          local_8 = CONCAT31(local_8._1_3_,6);
          DAT_10c1b8e0 = thunk_FUN_10526620(&ALevelInfo::PrivateStaticClass,L"KarmaGravScale",0);
        }
        *puVar1 = (uint)*(ushort *)(DAT_10c1b8e0 + 0x52);
        puVar1 = puVar1 + 1;
      }
    }
  }
  ExceptionList = local_10;
  return puVar1;
}


// ==== 1052a084 Catch@1052a084

void Catch_1052a084(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_10914c48);
}


// ==== 1052a098 Catch@1052a098

void Catch_1052a098(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"ALevelInfo::GetOptimizedRepList");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1052a170 FUN_1052a170

int * FUN_1052a170(uchar *param_1,FPropertyRetirement *param_2,int *param_3,UPackageMap *param_4,
                  UActorChannel *param_5)

{
  int *piVar1;
  AActor *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10819f80;
  local_10 = ExceptionList;
  local_8 = 0;
  if ((*(uint *)(in_ECX + 0x74) & 0x8000) == 0) {
    ExceptionList = &local_10;
    piVar1 = AActor::GetOptimizedRepList(in_ECX,param_1,param_2,param_3,param_4,param_5);
    ExceptionList = local_10;
    return piVar1;
  }
  return param_3;
}


// ==== 1052a1e3 Catch@1052a1e3

void Catch_1052a1e3(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 1052a1f7 Catch@1052a1f7

void Catch_1052a1f7(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"AReplicationInfo::GetOptimizedRepList");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1052a240 FUN_1052a240

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint * FUN_1052a240(uchar *param_1,FPropertyRetirement *param_2,int *param_3,UPackageMap *param_4,
                   UActorChannel *param_5)

{
  uint *puVar1;
  int iVar2;
  AReplicationInfo *in_ECX;
  FString aFStack_4c [4];
  undefined4 uStack_48;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_1081a0e6;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  puVar1 = (uint *)AReplicationInfo::GetOptimizedRepList
                             (in_ECX,param_1,param_2,param_3,param_4,param_5);
  if ((((_DAT_10c27f4c & 0x800) != 0) && (in_ECX[0xc2] == (AReplicationInfo)0x4)) &&
     ((*(uint *)(in_ECX + 0x74) & 0x800) != 0)) {
    if (*(int *)(in_ECX + 0x3bc) != *(int *)(param_1 + 0x3bc)) {
      if ((DAT_10c1b94c & 1) == 0) {
        DAT_10c1b94c = DAT_10c1b94c | 1;
        local_8._0_1_ = 1;
        DAT_10c1b948 = thunk_FUN_10526620();
        local_8 = (uint)local_8._1_3_ << 8;
      }
      *puVar1 = (uint)*(ushort *)(DAT_10c1b948 + 0x52);
      puVar1 = puVar1 + 1;
    }
    if (*(int *)(in_ECX + 0x3c0) != *(int *)(param_1 + 0x3c0)) {
      if ((DAT_10c1b94c & 2) == 0) {
        DAT_10c1b94c = DAT_10c1b94c | 2;
        local_8._0_1_ = 2;
        DAT_10c1b944 = thunk_FUN_10526620();
        local_8 = (uint)local_8._1_3_ << 8;
      }
      *puVar1 = (uint)*(ushort *)(DAT_10c1b944 + 0x52);
      puVar1 = puVar1 + 1;
    }
    if (((*(uint *)(in_ECX + 0x424) ^ *(uint *)(param_1 + 0x424)) & 0x400) != 0) {
      if ((DAT_10c1b94c & 4) == 0) {
        DAT_10c1b94c = DAT_10c1b94c | 4;
        local_8._0_1_ = 3;
        DAT_10c1b940 = thunk_FUN_10526620();
        local_8 = (uint)local_8._1_3_ << 8;
      }
      *puVar1 = (uint)*(ushort *)(DAT_10c1b940 + 0x52);
      puVar1 = puVar1 + 1;
    }
    if ((((byte)in_ECX[0x368] & 2) == 0) && (*(int *)(in_ECX + 0x3c8) != *(int *)(param_1 + 0x3c8)))
    {
      if ((DAT_10c1b94c & 8) == 0) {
        DAT_10c1b94c = DAT_10c1b94c | 8;
        local_8._0_1_ = 4;
        DAT_10c1b93c = thunk_FUN_10526620();
        local_8 = (uint)local_8._1_3_ << 8;
      }
      *puVar1 = (uint)*(ushort *)(DAT_10c1b93c + 0x52);
      puVar1 = puVar1 + 1;
    }
    iVar2 = thunk_FUN_10524fc0();
    if (iVar2 != 0) {
      if ((DAT_10c1b94c & 0x10) == 0) {
        DAT_10c1b94c = DAT_10c1b94c | 0x10;
        local_8._0_1_ = 5;
        DAT_10c1b938 = thunk_FUN_10526620();
        local_8 = (uint)local_8._1_3_ << 8;
      }
      *puVar1 = (uint)*(ushort *)(DAT_10c1b938 + 0x52);
      puVar1 = puVar1 + 1;
    }
    iVar2 = thunk_FUN_10524fc0();
    if (iVar2 != 0) {
      if ((DAT_10c1b94c & 0x20) == 0) {
        DAT_10c1b94c = DAT_10c1b94c | 0x20;
        local_8._0_1_ = 6;
        DAT_10c1b934 = thunk_FUN_10526620();
        local_8 = (uint)local_8._1_3_ << 8;
      }
      *puVar1 = (uint)*(ushort *)(DAT_10c1b934 + 0x52);
      puVar1 = puVar1 + 1;
    }
    uStack_48 = 0x1052a4f3;
    FString::FString((FString *)&stack0xffffffc0,(FString *)(param_1 + 0x3d8));
    local_8._0_1_ = 7;
    FString::FString(aFStack_4c,(FString *)(in_ECX + 0x3d8));
    local_8 = (uint)local_8._1_3_ << 8;
    iVar2 = thunk_FUN_10525090();
    if (iVar2 != 0) {
      if ((DAT_10c1b94c & 0x40) == 0) {
        DAT_10c1b94c = DAT_10c1b94c | 0x40;
        local_8._0_1_ = 9;
        DAT_10c1b930 = thunk_FUN_10526620();
        local_8 = (uint)local_8._1_3_ << 8;
      }
      *puVar1 = (uint)*(ushort *)(DAT_10c1b930 + 0x52);
      puVar1 = puVar1 + 1;
    }
    iVar2 = thunk_FUN_10524fc0();
    if (iVar2 != 0) {
      if ((DAT_10c1b94c & 0x80) == 0) {
        DAT_10c1b94c = DAT_10c1b94c | 0x80;
        local_8._0_1_ = 10;
        DAT_10c1b92c = thunk_FUN_10526620();
        local_8 = (uint)local_8._1_3_ << 8;
      }
      *puVar1 = (uint)*(ushort *)(DAT_10c1b92c + 0x52);
      puVar1 = puVar1 + 1;
    }
    if (*(int *)(in_ECX + 0x41c) != *(int *)(param_1 + 0x41c)) {
      if ((DAT_10c1b94c & 0x100) == 0) {
        DAT_10c1b94c = DAT_10c1b94c | 0x100;
        local_8._0_1_ = 0xb;
        DAT_10c1b928 = thunk_FUN_10526620();
        local_8 = (uint)local_8._1_3_ << 8;
      }
      *puVar1 = (uint)*(ushort *)(DAT_10c1b928 + 0x52);
      puVar1 = puVar1 + 1;
    }
    iVar2 = thunk_FUN_10524fc0();
    if (iVar2 != 0) {
      if ((DAT_10c1b94c & 0x200) == 0) {
        DAT_10c1b94c = DAT_10c1b94c | 0x200;
        local_8._0_1_ = 0xc;
        DAT_10c1b924 = thunk_FUN_10526620();
        local_8 = (uint)local_8._1_3_ << 8;
      }
      *puVar1 = (uint)*(ushort *)(DAT_10c1b924 + 0x52);
      puVar1 = puVar1 + 1;
    }
    if (((*(uint *)(in_ECX + 0x424) ^ *(uint *)(param_1 + 0x424)) & 1) != 0) {
      if ((DAT_10c1b94c & 0x400) == 0) {
        DAT_10c1b94c = DAT_10c1b94c | 0x400;
        local_8._0_1_ = 0xd;
        DAT_10c1b920 = thunk_FUN_10526620();
        local_8 = (uint)local_8._1_3_ << 8;
      }
      *puVar1 = (uint)*(ushort *)(DAT_10c1b920 + 0x52);
      puVar1 = puVar1 + 1;
    }
    if (((*(uint *)(in_ECX + 0x424) ^ *(uint *)(param_1 + 0x424)) & 2) != 0) {
      if ((DAT_10c1b94c & 0x800) == 0) {
        DAT_10c1b94c = DAT_10c1b94c | 0x800;
        local_8._0_1_ = 0xe;
        DAT_10c1b91c = thunk_FUN_10526620();
        local_8 = (uint)local_8._1_3_ << 8;
      }
      *puVar1 = (uint)*(ushort *)(DAT_10c1b91c + 0x52);
      puVar1 = puVar1 + 1;
    }
    if (((*(uint *)(in_ECX + 0x424) ^ *(uint *)(param_1 + 0x424)) & 4) != 0) {
      if ((DAT_10c1b94c & 0x1000) == 0) {
        DAT_10c1b94c = DAT_10c1b94c | 0x1000;
        local_8._0_1_ = 0xf;
        DAT_10c1b918 = thunk_FUN_10526620();
        local_8 = (uint)local_8._1_3_ << 8;
      }
      *puVar1 = (uint)*(ushort *)(DAT_10c1b918 + 0x52);
      puVar1 = puVar1 + 1;
    }
    if (((*(uint *)(in_ECX + 0x424) ^ *(uint *)(param_1 + 0x424)) & 8) != 0) {
      if ((DAT_10c1b94c & 0x2000) == 0) {
        DAT_10c1b94c = DAT_10c1b94c | 0x2000;
        local_8._0_1_ = 0x10;
        DAT_10c1b914 = thunk_FUN_10526620();
        local_8 = (uint)local_8._1_3_ << 8;
      }
      *puVar1 = (uint)*(ushort *)(DAT_10c1b914 + 0x52);
      puVar1 = puVar1 + 1;
    }
    if (((*(uint *)(in_ECX + 0x424) ^ *(uint *)(param_1 + 0x424)) & 0x10) != 0) {
      if ((DAT_10c1b94c & 0x4000) == 0) {
        DAT_10c1b94c = DAT_10c1b94c | 0x4000;
        local_8._0_1_ = 0x11;
        DAT_10c1b910 = thunk_FUN_10526620();
        local_8 = (uint)local_8._1_3_ << 8;
      }
      *puVar1 = (uint)*(ushort *)(DAT_10c1b910 + 0x52);
      puVar1 = puVar1 + 1;
    }
    if (((*(uint *)(in_ECX + 0x424) ^ *(uint *)(param_1 + 0x424)) & 0x20) != 0) {
      if ((DAT_10c1b94c & 0x8000) == 0) {
        DAT_10c1b94c = DAT_10c1b94c | 0x8000;
        local_8._0_1_ = 0x12;
        DAT_10c1b90c = thunk_FUN_10526620();
        local_8 = (uint)local_8._1_3_ << 8;
      }
      *puVar1 = (uint)*(ushort *)(DAT_10c1b90c + 0x52);
      puVar1 = puVar1 + 1;
    }
    if (((*(uint *)(in_ECX + 0x424) ^ *(uint *)(param_1 + 0x424)) & 0x40) != 0) {
      if ((DAT_10c1b94c & 0x10000) == 0) {
        DAT_10c1b94c = DAT_10c1b94c | 0x10000;
        local_8._0_1_ = 0x13;
        DAT_10c1b908 = thunk_FUN_10526620();
        local_8 = (uint)local_8._1_3_ << 8;
      }
      *puVar1 = (uint)*(ushort *)(DAT_10c1b908 + 0x52);
      puVar1 = puVar1 + 1;
    }
    uStack_48 = 0x1052a90e;
    FString::FString((FString *)&stack0xffffffc0,(FString *)(param_1 + 0x3e4));
    local_8._0_1_ = 0x14;
    FString::FString(aFStack_4c,(FString *)(in_ECX + 0x3e4));
    local_8 = (uint)local_8._1_3_ << 8;
    iVar2 = thunk_FUN_10525090();
    if (iVar2 != 0) {
      if ((DAT_10c1b94c & 0x20000) == 0) {
        DAT_10c1b94c = DAT_10c1b94c | 0x20000;
        local_8._0_1_ = 0x16;
        DAT_10c1b904 = thunk_FUN_10526620();
        local_8 = (uint)local_8._1_3_ << 8;
      }
      *puVar1 = (uint)*(ushort *)(DAT_10c1b904 + 0x52);
      puVar1 = puVar1 + 1;
    }
    if (((byte)in_ECX[0x368] & 1) != 0) {
      if ((char)((byte)*(undefined4 *)(in_ECX + 0x424) ^ (byte)*(undefined4 *)(param_1 + 0x424)) <
          '\0') {
        if ((DAT_10c1b94c & 0x40000) == 0) {
          DAT_10c1b94c = DAT_10c1b94c | 0x40000;
          local_8._0_1_ = 0x17;
          DAT_10c1b900 = thunk_FUN_10526620();
          local_8 = (uint)local_8._1_3_ << 8;
        }
        *puVar1 = (uint)*(ushort *)(DAT_10c1b900 + 0x52);
        puVar1 = puVar1 + 1;
      }
      if (*(int *)(in_ECX + 0x428) != *(int *)(param_1 + 0x428)) {
        if ((DAT_10c1b94c & 0x80000) == 0) {
          DAT_10c1b94c = DAT_10c1b94c | 0x80000;
          local_8 = CONCAT31(local_8._1_3_,0x18);
          DAT_10c1b8fc = thunk_FUN_10526620();
        }
        *puVar1 = (uint)*(ushort *)(DAT_10c1b8fc + 0x52);
        puVar1 = puVar1 + 1;
      }
    }
  }
  ExceptionList = local_10;
  return puVar1;
}


// ==== 1052aa4b Catch@1052aa4b

void Catch_1052aa4b(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 1052aa5f Catch@1052aa5f

void Catch_1052aa5f(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"APlayerReplicationInfo::GetOptimizedRepList");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1052ac90 FUN_1052ac90

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint * FUN_1052ac90(uchar *param_1,FPropertyRetirement *param_2,uint *param_3,UPackageMap *param_4,
                   UActorChannel *param_5)

{
  int iVar1;
  AReplicationInfo *in_ECX;
  uint uVar2;
  FString aFStack_54 [4];
  undefined4 uStack_50;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_1081a386;
  local_10 = ExceptionList;
  local_8._0_1_ = 0;
  local_8._1_3_ = 0;
  ExceptionList = &local_10;
  param_3 = (uint *)AReplicationInfo::GetOptimizedRepList
                              (in_ECX,param_1,param_2,(int *)param_3,param_4,param_5);
  if ((((_DAT_10c289ac & 0x800) != 0) && (in_ECX[0xc2] == (AReplicationInfo)0x4)) &&
     ((*(uint *)(in_ECX + 0x74) & 0x800) != 0)) {
    if (*(int *)(in_ECX + 0x3e0) != *(int *)(param_1 + 0x3e0)) {
      if ((DAT_10c1b9b4 & 1) == 0) {
        DAT_10c1b9b4 = DAT_10c1b9b4 | 1;
        local_8._0_1_ = 1;
        DAT_10c1b9b0 = thunk_FUN_10526620();
        local_8._0_1_ = 0;
      }
      *param_3 = (uint)*(ushort *)(DAT_10c1b9b0 + 0x52);
      param_3 = param_3 + 1;
    }
    if (((*(uint *)(in_ECX + 0x3d4) ^ *(uint *)(param_1 + 0x3d4)) & 2) != 0) {
      if ((DAT_10c1b9b4 & 2) == 0) {
        DAT_10c1b9b4 = DAT_10c1b9b4 | 2;
        local_8._0_1_ = 2;
        DAT_10c1b9ac = thunk_FUN_10526620();
        local_8._0_1_ = 0;
      }
      *param_3 = (uint)*(ushort *)(DAT_10c1b9ac + 0x52);
      param_3 = param_3 + 1;
    }
    if (((*(uint *)(in_ECX + 0x3d4) ^ *(uint *)(param_1 + 0x3d4)) & 4) != 0) {
      if ((DAT_10c1b9b4 & 4) == 0) {
        DAT_10c1b9b4 = DAT_10c1b9b4 | 4;
        local_8._0_1_ = 3;
        DAT_10c1b9a8 = thunk_FUN_10526620();
        local_8._0_1_ = 0;
      }
      *param_3 = (uint)*(ushort *)(DAT_10c1b9a8 + 0x52);
      param_3 = param_3 + 1;
    }
    iVar1 = thunk_FUN_10524fc0();
    if (iVar1 != 0) {
      if ((DAT_10c1b9b4 & 8) == 0) {
        DAT_10c1b9b4 = DAT_10c1b9b4 | 8;
        local_8._0_1_ = 4;
        DAT_10c1b9a4 = thunk_FUN_10526620();
        local_8._0_1_ = 0;
      }
      *param_3 = (uint)*(ushort *)(DAT_10c1b9a4 + 0x52);
      param_3 = param_3 + 1;
    }
    iVar1 = thunk_FUN_10524f60();
    if (iVar1 != 0) {
      if ((DAT_10c1b9b4 & 0x10) == 0) {
        DAT_10c1b9b4 = DAT_10c1b9b4 | 0x10;
        local_8._0_1_ = 5;
        DAT_10c1b9a0 = thunk_FUN_10526620();
        local_8._0_1_ = 0;
      }
      *param_3 = (uint)*(ushort *)(DAT_10c1b9a0 + 0x52);
      param_3 = param_3 + 1;
    }
    if (*(int *)(in_ECX + 0x480) != *(int *)(param_1 + 0x480)) {
      if ((DAT_10c1b9b4 & 0x20) == 0) {
        DAT_10c1b9b4 = DAT_10c1b9b4 | 0x20;
        local_8._0_1_ = 6;
        DAT_10c1b99c = thunk_FUN_10526620();
        local_8._0_1_ = 0;
      }
      *param_3 = (uint)*(ushort *)(DAT_10c1b99c + 0x52);
      param_3 = param_3 + 1;
    }
    if ((DAT_10c1b9b4 & 0x40) == 0) {
      DAT_10c1b9b4 = DAT_10c1b9b4 | 0x40;
      local_8._0_1_ = 7;
      DAT_10c1b998 = thunk_FUN_10526620();
      local_8._0_1_ = 0;
    }
    iVar1 = DAT_10c1b998;
    for (uVar2 = 0; uVar2 < 2; uVar2 = uVar2 + 1) {
      if (in_ECX[uVar2 + 0x47c] != *(AReplicationInfo *)(param_1 + uVar2 + 0x47c)) {
        *param_3 = *(ushort *)(iVar1 + 0x52) + uVar2;
        param_3 = param_3 + 1;
      }
    }
    if ((DAT_10c1b9b4 & 0x80) == 0) {
      DAT_10c1b9b4 = DAT_10c1b9b4 | 0x80;
      local_8._0_1_ = 8;
      DAT_10c1b994 = thunk_FUN_10526620();
      local_8._0_1_ = 0;
    }
    for (uVar2 = 0; uVar2 < 2; uVar2 = uVar2 + 1) {
      iVar1 = thunk_FUN_10524fc0();
      if (iVar1 != 0) {
        *param_3 = *(ushort *)(DAT_10c1b994 + 0x52) + uVar2;
        param_3 = param_3 + 1;
      }
    }
    if (((byte)in_ECX[0x368] & 1) != 0) {
      uStack_50 = 0x1052b031;
      FString::FString((FString *)&stack0xffffffb8,(FString *)(param_1 + 0x3bc));
      local_8._0_1_ = 9;
      FString::FString(aFStack_54,(FString *)(in_ECX + 0x3bc));
      local_8 = (uint)local_8._1_3_ << 8;
      iVar1 = thunk_FUN_10525090();
      if (iVar1 != 0) {
        if ((DAT_10c1b9b4 & 0x100) == 0) {
          DAT_10c1b9b4 = DAT_10c1b9b4 | 0x100;
          local_8._0_1_ = 0xb;
          DAT_10c1b990 = thunk_FUN_10526620();
          local_8 = (uint)local_8._1_3_ << 8;
        }
        *param_3 = (uint)*(ushort *)(DAT_10c1b990 + 0x52);
        param_3 = param_3 + 1;
      }
      uStack_50 = 0x1052b0c0;
      FString::FString((FString *)&stack0xffffffb8,(FString *)(param_1 + 0x3c8));
      local_8._0_1_ = 0xc;
      FString::FString(aFStack_54,(FString *)(in_ECX + 0x3c8));
      local_8 = (uint)local_8._1_3_ << 8;
      iVar1 = thunk_FUN_10525090();
      if (iVar1 != 0) {
        if ((DAT_10c1b9b4 & 0x200) == 0) {
          DAT_10c1b9b4 = DAT_10c1b9b4 | 0x200;
          local_8._0_1_ = 0xe;
          DAT_10c1b98c = thunk_FUN_10526620();
          local_8 = (uint)local_8._1_3_ << 8;
        }
        *param_3 = (uint)*(ushort *)(DAT_10c1b98c + 0x52);
        param_3 = param_3 + 1;
      }
      if (((*(uint *)(param_1 + 0x3d4) ^ *(uint *)(in_ECX + 0x3d4)) & 1) != 0) {
        if ((DAT_10c1b9b4 & 0x400) == 0) {
          DAT_10c1b9b4 = DAT_10c1b9b4 | 0x400;
          local_8._0_1_ = 0xf;
          DAT_10c1b988 = thunk_FUN_10526620();
          local_8 = (uint)local_8._1_3_ << 8;
        }
        *param_3 = (uint)*(ushort *)(DAT_10c1b988 + 0x52);
        param_3 = param_3 + 1;
      }
      if (*(int *)(in_ECX + 0x3d8) != *(int *)(param_1 + 0x3d8)) {
        if ((DAT_10c1b9b4 & 0x800) == 0) {
          DAT_10c1b9b4 = DAT_10c1b9b4 | 0x800;
          local_8._0_1_ = 0x10;
          DAT_10c1b984 = thunk_FUN_10526620();
          local_8 = (uint)local_8._1_3_ << 8;
        }
        *param_3 = (uint)*(ushort *)(DAT_10c1b984 + 0x52);
        param_3 = param_3 + 1;
      }
      if (*(int *)(in_ECX + 0x3dc) != *(int *)(param_1 + 0x3dc)) {
        if ((DAT_10c1b9b4 & 0x1000) == 0) {
          DAT_10c1b9b4 = DAT_10c1b9b4 | 0x1000;
          local_8._0_1_ = 0x11;
          DAT_10c1b980 = thunk_FUN_10526620();
          local_8 = (uint)local_8._1_3_ << 8;
        }
        *param_3 = (uint)*(ushort *)(DAT_10c1b980 + 0x52);
        param_3 = param_3 + 1;
      }
      uStack_50 = 0x1052b24f;
      FString::FString((FString *)&stack0xffffffb8,(FString *)(param_1 + 0x3fc));
      local_8._0_1_ = 0x12;
      FString::FString(aFStack_54,(FString *)(in_ECX + 0x3fc));
      local_8 = (uint)local_8._1_3_ << 8;
      iVar1 = thunk_FUN_10525090();
      if (iVar1 != 0) {
        if ((DAT_10c1b9b4 & 0x2000) == 0) {
          DAT_10c1b9b4 = DAT_10c1b9b4 | 0x2000;
          local_8._0_1_ = 0x14;
          DAT_10c1b97c = thunk_FUN_10526620();
          local_8 = (uint)local_8._1_3_ << 8;
        }
        *param_3 = (uint)*(ushort *)(DAT_10c1b97c + 0x52);
        param_3 = param_3 + 1;
      }
      uStack_50 = 0x1052b2de;
      FString::FString((FString *)&stack0xffffffb8,(FString *)(param_1 + 0x408));
      local_8._0_1_ = 0x15;
      FString::FString(aFStack_54,(FString *)(in_ECX + 0x408));
      local_8 = (uint)local_8._1_3_ << 8;
      iVar1 = thunk_FUN_10525090();
      if (iVar1 != 0) {
        if ((DAT_10c1b9b4 & 0x4000) == 0) {
          DAT_10c1b9b4 = DAT_10c1b9b4 | 0x4000;
          local_8._0_1_ = 0x17;
          DAT_10c1b978 = thunk_FUN_10526620();
          local_8 = (uint)local_8._1_3_ << 8;
        }
        *param_3 = (uint)*(ushort *)(DAT_10c1b978 + 0x52);
        param_3 = param_3 + 1;
      }
      uStack_50 = 0x1052b36d;
      FString::FString((FString *)&stack0xffffffb8,(FString *)(param_1 + 0x414));
      local_8._0_1_ = 0x18;
      FString::FString(aFStack_54,(FString *)(in_ECX + 0x414));
      local_8 = (uint)local_8._1_3_ << 8;
      iVar1 = thunk_FUN_10525090();
      if (iVar1 != 0) {
        if ((DAT_10c1b9b4 & 0x8000) == 0) {
          DAT_10c1b9b4 = DAT_10c1b9b4 | 0x8000;
          local_8._0_1_ = 0x1a;
          DAT_10c1b974 = thunk_FUN_10526620();
          local_8 = (uint)local_8._1_3_ << 8;
        }
        *param_3 = (uint)*(ushort *)(DAT_10c1b974 + 0x52);
        param_3 = param_3 + 1;
      }
      uStack_50 = 0x1052b3fc;
      FString::FString((FString *)&stack0xffffffb8,(FString *)(param_1 + 0x420));
      local_8._0_1_ = 0x1b;
      FString::FString(aFStack_54,(FString *)(in_ECX + 0x420));
      local_8 = (uint)local_8._1_3_ << 8;
      iVar1 = thunk_FUN_10525090();
      if (iVar1 != 0) {
        if ((DAT_10c1b9b4 & 0x10000) == 0) {
          DAT_10c1b9b4 = DAT_10c1b9b4 | 0x10000;
          local_8._0_1_ = 0x1d;
          DAT_10c1b970 = thunk_FUN_10526620();
          local_8 = (uint)local_8._1_3_ << 8;
        }
        *param_3 = (uint)*(ushort *)(DAT_10c1b970 + 0x52);
        param_3 = param_3 + 1;
      }
      if (*(int *)(in_ECX + 0x42c) != *(int *)(param_1 + 0x42c)) {
        if ((DAT_10c1b9b4 & 0x20000) == 0) {
          DAT_10c1b9b4 = DAT_10c1b9b4 | 0x20000;
          local_8._0_1_ = 0x1e;
          DAT_10c1b96c = thunk_FUN_10526620();
          local_8 = (uint)local_8._1_3_ << 8;
        }
        *param_3 = (uint)*(ushort *)(DAT_10c1b96c + 0x52);
        param_3 = param_3 + 1;
      }
      uStack_50 = 0x1052b4e0;
      FString::FString((FString *)&stack0xffffffb8,(FString *)(param_1 + 0x430));
      local_8._0_1_ = 0x1f;
      FString::FString(aFStack_54,(FString *)(in_ECX + 0x430));
      local_8 = (uint)local_8._1_3_ << 8;
      iVar1 = thunk_FUN_10525090();
      if (iVar1 != 0) {
        if ((DAT_10c1b9b4 & 0x40000) == 0) {
          DAT_10c1b9b4 = DAT_10c1b9b4 | 0x40000;
          local_8._0_1_ = 0x21;
          DAT_10c1b968 = thunk_FUN_10526620();
          local_8 = (uint)local_8._1_3_ << 8;
        }
        *param_3 = (uint)*(ushort *)(DAT_10c1b968 + 0x52);
        param_3 = param_3 + 1;
      }
      uStack_50 = 0x1052b56f;
      FString::FString((FString *)&stack0xffffffb8,(FString *)(param_1 + 0x43c));
      local_8._0_1_ = 0x22;
      FString::FString(aFStack_54,(FString *)(in_ECX + 0x43c));
      local_8 = (uint)local_8._1_3_ << 8;
      iVar1 = thunk_FUN_10525090();
      if (iVar1 != 0) {
        if ((DAT_10c1b9b4 & 0x80000) == 0) {
          DAT_10c1b9b4 = DAT_10c1b9b4 | 0x80000;
          local_8._0_1_ = 0x24;
          DAT_10c1b964 = thunk_FUN_10526620();
          local_8 = (uint)local_8._1_3_ << 8;
        }
        *param_3 = (uint)*(ushort *)(DAT_10c1b964 + 0x52);
        param_3 = param_3 + 1;
      }
      uStack_50 = 0x1052b5fe;
      FString::FString((FString *)&stack0xffffffb8,(FString *)(param_1 + 0x448));
      local_8._0_1_ = 0x25;
      FString::FString(aFStack_54,(FString *)(in_ECX + 0x448));
      local_8 = (uint)local_8._1_3_ << 8;
      iVar1 = thunk_FUN_10525090();
      if (iVar1 != 0) {
        if ((DAT_10c1b9b4 & 0x100000) == 0) {
          DAT_10c1b9b4 = DAT_10c1b9b4 | 0x100000;
          local_8._0_1_ = 0x27;
          DAT_10c1b960 = thunk_FUN_10526620();
          local_8 = (uint)local_8._1_3_ << 8;
        }
        *param_3 = (uint)*(ushort *)(DAT_10c1b960 + 0x52);
        param_3 = param_3 + 1;
      }
      uStack_50 = 0x1052b68d;
      FString::FString((FString *)&stack0xffffffb8,(FString *)(param_1 + 0x454));
      local_8._0_1_ = 0x28;
      FString::FString(aFStack_54,(FString *)(in_ECX + 0x454));
      local_8 = (uint)local_8._1_3_ << 8;
      iVar1 = thunk_FUN_10525090();
      if (iVar1 != 0) {
        if ((DAT_10c1b9b4 & 0x200000) == 0) {
          DAT_10c1b9b4 = DAT_10c1b9b4 | 0x200000;
          local_8._0_1_ = 0x2a;
          DAT_10c1b95c = thunk_FUN_10526620();
          local_8 = (uint)local_8._1_3_ << 8;
        }
        *param_3 = (uint)*(ushort *)(DAT_10c1b95c + 0x52);
        param_3 = param_3 + 1;
      }
      if (*(int *)(in_ECX + 1000) != *(int *)(param_1 + 1000)) {
        if ((DAT_10c1b9b4 & 0x400000) == 0) {
          DAT_10c1b9b4 = DAT_10c1b9b4 | 0x400000;
          local_8._0_1_ = 0x2b;
          DAT_10c1b958 = thunk_FUN_10526620();
          local_8 = (uint)local_8._1_3_ << 8;
        }
        *param_3 = (uint)*(ushort *)(DAT_10c1b958 + 0x52);
        param_3 = param_3 + 1;
      }
      if (*(int *)(in_ECX + 0x3ec) != *(int *)(param_1 + 0x3ec)) {
        if ((DAT_10c1b9b4 & 0x800000) == 0) {
          DAT_10c1b9b4 = DAT_10c1b9b4 | 0x800000;
          local_8._0_1_ = 0x2c;
          DAT_10c1b954 = thunk_FUN_10526620();
          local_8 = (uint)local_8._1_3_ << 8;
        }
        *param_3 = (uint)*(ushort *)(DAT_10c1b954 + 0x52);
        param_3 = param_3 + 1;
      }
      if (*(int *)(in_ECX + 0x3f0) != *(int *)(param_1 + 0x3f0)) {
        if ((DAT_10c1b9b4 & 0x1000000) == 0) {
          DAT_10c1b9b4 = DAT_10c1b9b4 | 0x1000000;
          local_8 = CONCAT31(local_8._1_3_,0x2d);
          DAT_10c1b950 = thunk_FUN_10526620();
        }
        *param_3 = (uint)*(ushort *)(DAT_10c1b950 + 0x52);
        param_3 = param_3 + 1;
      }
    }
  }
  ExceptionList = local_10;
  return param_3;
}


// ==== 1052b812 Catch@1052b812

void Catch_1052b812(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x20) = *(undefined4 *)(unaff_EBP + -0x24);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x20,&DAT_10914c48);
}


// ==== 1052b826 Catch@1052b826

void Catch_1052b826(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"AGameReplicationInfo::GetOptimizedRepList");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1052bb30 FUN_1052bb30

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint * FUN_1052bb30(uchar *param_1,FPropertyRetirement *param_2,int *param_3,UPackageMap *param_4,
                   UActorChannel *param_5)

{
  uint *puVar1;
  int iVar2;
  AReplicationInfo *in_ECX;
  FString aFStack_48 [4];
  undefined4 uStack_44;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_1081a494;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  puVar1 = (uint *)AReplicationInfo::GetOptimizedRepList
                             (in_ECX,param_1,param_2,param_3,param_4,param_5);
  if (((_DAT_10c3108c & 0x800) != 0) && (in_ECX[0xc2] == (AReplicationInfo)0x4)) {
    if ((*(uint *)(in_ECX + 0x74) & 0x800) != 0) {
      if (*(int *)(in_ECX + 0x3cc) != *(int *)(param_1 + 0x3cc)) {
        if ((DAT_10c1b9d4 & 1) == 0) {
          DAT_10c1b9d4 = DAT_10c1b9d4 | 1;
          local_8._0_1_ = 1;
          DAT_10c1b9d0 = thunk_FUN_10526620();
          local_8 = (uint)local_8._1_3_ << 8;
        }
        *puVar1 = (uint)*(ushort *)(DAT_10c1b9d0 + 0x52);
        puVar1 = puVar1 + 1;
      }
      iVar2 = thunk_FUN_10524fc0();
      if (iVar2 != 0) {
        if ((DAT_10c1b9d4 & 2) == 0) {
          DAT_10c1b9d4 = DAT_10c1b9d4 | 2;
          local_8._0_1_ = 2;
          DAT_10c1b9cc = thunk_FUN_10526620();
          local_8 = (uint)local_8._1_3_ << 8;
        }
        *puVar1 = (uint)*(ushort *)(DAT_10c1b9cc + 0x52);
        puVar1 = puVar1 + 1;
      }
    }
    if (((byte)in_ECX[0x368] & 1) != 0) {
      uStack_44 = 0x1052bc83;
      FString::FString((FString *)&stack0xffffffc4,(FString *)(param_1 + 0x3bc));
      local_8._0_1_ = 3;
      FString::FString(aFStack_48,(FString *)(in_ECX + 0x3bc));
      local_8 = (uint)local_8._1_3_ << 8;
      iVar2 = thunk_FUN_10525090();
      if (iVar2 != 0) {
        if ((DAT_10c1b9d4 & 4) == 0) {
          DAT_10c1b9d4 = DAT_10c1b9d4 | 4;
          local_8._0_1_ = 5;
          DAT_10c1b9c8 = thunk_FUN_10526620();
          local_8 = (uint)local_8._1_3_ << 8;
        }
        *puVar1 = (uint)*(ushort *)(DAT_10c1b9c8 + 0x52);
        puVar1 = puVar1 + 1;
      }
      if (*(int *)(in_ECX + 0x3d0) != *(int *)(param_1 + 0x3d0)) {
        if ((DAT_10c1b9d4 & 8) == 0) {
          DAT_10c1b9d4 = DAT_10c1b9d4 | 8;
          local_8._0_1_ = 6;
          DAT_10c1b9c4 = thunk_FUN_10526620();
          local_8 = (uint)local_8._1_3_ << 8;
        }
        *puVar1 = (uint)*(ushort *)(DAT_10c1b9c4 + 0x52);
        puVar1 = puVar1 + 1;
      }
      iVar2 = thunk_FUN_10524fc0();
      if (iVar2 != 0) {
        if ((DAT_10c1b9d4 & 0x10) == 0) {
          DAT_10c1b9d4 = DAT_10c1b9d4 | 0x10;
          local_8._0_1_ = 7;
          DAT_10c1b9c0 = thunk_FUN_10526620();
          local_8 = (uint)local_8._1_3_ << 8;
        }
        *puVar1 = (uint)*(ushort *)(DAT_10c1b9c0 + 0x52);
        puVar1 = puVar1 + 1;
      }
      if (*(int *)(in_ECX + 0x3d4) != *(int *)(param_1 + 0x3d4)) {
        if ((DAT_10c1b9d4 & 0x20) == 0) {
          DAT_10c1b9d4 = DAT_10c1b9d4 | 0x20;
          local_8._0_1_ = 8;
          DAT_10c1b9bc = thunk_FUN_10526620();
          local_8 = (uint)local_8._1_3_ << 8;
        }
        *puVar1 = (uint)*(ushort *)(DAT_10c1b9bc + 0x52);
        puVar1 = puVar1 + 1;
      }
      if (*(int *)(in_ECX + 0x3d8) != *(int *)(param_1 + 0x3d8)) {
        if ((DAT_10c1b9d4 & 0x40) == 0) {
          DAT_10c1b9d4 = DAT_10c1b9d4 | 0x40;
          local_8 = CONCAT31(local_8._1_3_,9);
          DAT_10c1b9b8 = thunk_FUN_10526620();
        }
        *puVar1 = (uint)*(ushort *)(DAT_10c1b9b8 + 0x52);
        puVar1 = puVar1 + 1;
      }
    }
  }
  ExceptionList = local_10;
  return puVar1;
}


// ==== 1052be6e Catch@1052be6e

void Catch_1052be6e(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 1052be82 Catch@1052be82

void Catch_1052be82(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"ATeamInfo::GetOptimizedRepList");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1052bf80 FUN_1052bf80

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint * FUN_1052bf80(uchar *param_1,FPropertyRetirement *param_2,uint *param_3,UPackageMap *param_4,
                   UActorChannel *param_5)

{
  uint *puVar1;
  AActor *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1081a4ce;
  local_10 = ExceptionList;
  local_8 = 0;
  if ((_DAT_10c2993c & 0x800) != 0) {
    if (((byte)in_ECX[0x3cc] & 2) == 0) {
      ExceptionList = &local_10;
      puVar1 = (uint *)AActor::GetOptimizedRepList
                                 (in_ECX,param_1,param_2,(int *)param_3,param_4,param_5);
      ExceptionList = local_10;
      return puVar1;
    }
    if (((*(uint *)(param_1 + 100) ^ *(uint *)(in_ECX + 100)) & 0x20) != 0) {
      if ((DAT_10c1b9dc & 1) == 0) {
        DAT_10c1b9dc = DAT_10c1b9dc | 1;
        local_8 = 1;
        ExceptionList = &local_10;
        DAT_10c1b9d8 = thunk_FUN_10526620(&AActor::PrivateStaticClass,L"bHidden",0);
      }
      *param_3 = (uint)*(ushort *)(DAT_10c1b9d8 + 0x52);
      ExceptionList = local_10;
      return param_3 + 1;
    }
  }
  return param_3;
}


// ==== 1052c06c Catch@1052c06c

void Catch_1052c06c(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 1052c080 Catch@1052c080

void Catch_1052c080(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"APickup::GetOptimizedRepList");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1052c0f0 FUN_1052c0f0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint * FUN_1052c0f0(uchar *param_1,FPropertyRetirement *param_2,uint *param_3,UPackageMap *param_4,
                   UActorChannel *param_5)

{
  int iVar1;
  AActor *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_1081a4fc;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  param_3 = (uint *)AActor::GetOptimizedRepList
                              (in_ECX,param_1,param_2,(int *)param_3,param_4,param_5);
  if (((((_DAT_10c2410c & 0x800) != 0) && (((byte)in_ECX[0x368] & 2) != 0)) &&
      (in_ECX[0xc2] == (AActor)0x4)) && ((*(uint *)(in_ECX + 0x74) & 0x800) != 0)) {
    iVar1 = thunk_FUN_10524fc0(*(undefined4 *)(in_ECX + 0x3ec),*(undefined4 *)(param_1 + 0x3ec),
                               param_4,param_5);
    if (iVar1 != 0) {
      if ((DAT_10c1b9e8 & 1) == 0) {
        DAT_10c1b9e8 = DAT_10c1b9e8 | 1;
        local_8._0_1_ = 1;
        DAT_10c1b9e4 = thunk_FUN_10526620(&AInventory::PrivateStaticClass,L"ThirdPersonActor",0);
        local_8 = (uint)local_8._1_3_ << 8;
      }
      *param_3 = (uint)*(ushort *)(DAT_10c1b9e4 + 0x52);
      param_3 = param_3 + 1;
    }
    if (*(int *)(in_ECX + 0x3c8) != *(int *)(param_1 + 0x3c8)) {
      if ((DAT_10c1b9e8 & 2) == 0) {
        DAT_10c1b9e8 = DAT_10c1b9e8 | 2;
        local_8 = CONCAT31(local_8._1_3_,2);
        DAT_10c1b9e0 = thunk_FUN_10526620(&AInventory::PrivateStaticClass,L"Charge",0);
      }
      *param_3 = (uint)*(ushort *)(DAT_10c1b9e0 + 0x52);
      param_3 = param_3 + 1;
    }
  }
  ExceptionList = local_10;
  return param_3;
}


// ==== 1052c23c Catch@1052c23c

void Catch_1052c23c(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 1052c250 Catch@1052c250

void Catch_1052c250(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"AInventory::GetOptimizedRepList");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1052c2d0 FUN_1052c2d0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint * FUN_1052c2d0(uchar *param_1,FPropertyRetirement *param_2,uint *param_3,UPackageMap *param_4,
                   UActorChannel *param_5)

{
  int iVar1;
  AInventory *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_1081a53a;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  param_3 = (uint *)AInventory::GetOptimizedRepList
                              (in_ECX,param_1,param_2,(int *)param_3,param_4,param_5);
  if (((((_DAT_10c1de5c & 0x800) != 0) && (((byte)in_ECX[0x368] & 2) != 0)) &&
      (in_ECX[0xc2] == (AInventory)0x4)) && ((*(uint *)(in_ECX + 0x74) & 0x800) != 0)) {
    iVar1 = thunk_FUN_10524fc0(*(undefined4 *)(in_ECX + 0x410),*(undefined4 *)(param_1 + 0x410),
                               param_4,param_5);
    if (iVar1 != 0) {
      if ((DAT_10c1b9f8 & 1) == 0) {
        DAT_10c1b9f8 = DAT_10c1b9f8 | 1;
        local_8._0_1_ = 1;
        DAT_10c1b9f4 = thunk_FUN_10526620(&AWeapon::PrivateStaticClass,L"AmmoType",0);
        local_8 = (uint)local_8._1_3_ << 8;
      }
      *param_3 = (uint)*(ushort *)(DAT_10c1b9f4 + 0x52);
      param_3 = param_3 + 1;
    }
    iVar1 = thunk_FUN_10524fc0(*(undefined4 *)(in_ECX + 0x454),*(undefined4 *)(param_1 + 0x454),
                               param_4,param_5);
    if (iVar1 != 0) {
      if ((DAT_10c1b9f8 & 2) == 0) {
        DAT_10c1b9f8 = DAT_10c1b9f8 | 2;
        local_8._0_1_ = 2;
        DAT_10c1b9f0 = thunk_FUN_10526620(&AWeapon::PrivateStaticClass,L"Affector",0);
        local_8 = (uint)local_8._1_3_ << 8;
      }
      *param_3 = (uint)*(ushort *)(DAT_10c1b9f0 + 0x52);
      param_3 = param_3 + 1;
    }
    if (in_ECX[0x414] != *(AInventory *)(param_1 + 0x414)) {
      if ((DAT_10c1b9f8 & 4) == 0) {
        DAT_10c1b9f8 = DAT_10c1b9f8 | 4;
        local_8 = CONCAT31(local_8._1_3_,3);
        DAT_10c1b9ec = thunk_FUN_10526620(&AWeapon::PrivateStaticClass,L"ReloadCount",0);
      }
      *param_3 = (uint)*(ushort *)(DAT_10c1b9ec + 0x52);
      param_3 = param_3 + 1;
    }
  }
  ExceptionList = local_10;
  return param_3;
}


// ==== 1052c481 Catch@1052c481

void Catch_1052c481(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 1052c495 Catch@1052c495

void Catch_1052c495(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"AWeapon::GetOptimizedRepList");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1052c530 FUN_1052c530

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint * FUN_1052c530(uchar *param_1,FPropertyRetirement *param_2,int *param_3,UPackageMap *param_4,
                   UActorChannel *param_5)

{
  uint *puVar1;
  int iVar2;
  AActor *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_1081a58a;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  puVar1 = (uint *)AActor::GetOptimizedRepList(in_ECX,param_1,param_2,param_3,param_4,param_5);
  if (((_DAT_10c33a0c & 0x800) != 0) && (in_ECX[0xc2] == (AActor)0x4)) {
    if ((((byte)*(undefined4 *)(in_ECX + 0x3bc) ^ (byte)*(undefined4 *)(param_1 + 0x3bc)) & 1) != 0)
    {
      if ((DAT_10c1ba08 & 1) == 0) {
        DAT_10c1ba08 = DAT_10c1ba08 | 1;
        local_8._0_1_ = 1;
        DAT_10c1ba04 = thunk_FUN_10526620(&ACarriedObject::PrivateStaticClass,L"bHome",0);
        local_8 = (uint)local_8._1_3_ << 8;
      }
      *puVar1 = (uint)*(ushort *)(DAT_10c1ba04 + 0x52);
      puVar1 = puVar1 + 1;
    }
    if ((((byte)*(undefined4 *)(in_ECX + 0x3bc) ^ (byte)*(undefined4 *)(param_1 + 0x3bc)) & 2) != 0)
    {
      if ((DAT_10c1ba08 & 2) == 0) {
        DAT_10c1ba08 = DAT_10c1ba08 | 2;
        local_8._0_1_ = 2;
        DAT_10c1ba00 = thunk_FUN_10526620(&ACarriedObject::PrivateStaticClass,L"bHeld",0);
        local_8 = (uint)local_8._1_3_ << 8;
      }
      *puVar1 = (uint)*(ushort *)(DAT_10c1ba00 + 0x52);
      puVar1 = puVar1 + 1;
    }
    iVar2 = thunk_FUN_10524fc0(*(undefined4 *)(in_ECX + 0x3c0),*(undefined4 *)(param_1 + 0x3c0),
                               param_4,param_5);
    if (iVar2 != 0) {
      if ((DAT_10c1ba08 & 4) == 0) {
        DAT_10c1ba08 = DAT_10c1ba08 | 4;
        local_8 = CONCAT31(local_8._1_3_,3);
        DAT_10c1b9fc = thunk_FUN_10526620(&ACarriedObject::PrivateStaticClass,L"HolderPRI",0);
      }
      *puVar1 = (uint)*(ushort *)(DAT_10c1b9fc + 0x52);
      puVar1 = puVar1 + 1;
    }
  }
  ExceptionList = local_10;
  return puVar1;
}


// ==== 1052c6bb Catch@1052c6bb

void Catch_1052c6bb(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 1052c6cf Catch@1052c6cf

void Catch_1052c6cf(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"ACarriedObject::GetOptimizedRepList");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1052c760 FUN_1052c760

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint * FUN_1052c760(uchar *param_1,FPropertyRetirement *param_2,int *param_3,UPackageMap *param_4,
                   UActorChannel *param_5)

{
  uint *puVar1;
  AActor *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_1081a5da;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  puVar1 = (uint *)AActor::GetOptimizedRepList(in_ECX,param_1,param_2,param_3,param_4,param_5);
  if (((((_DAT_10c31aec & 0x800) != 0) && (((byte)in_ECX[0x368] & 2) == 0)) &&
      (in_ECX[0xc2] == (AActor)0x4)) && ((*(uint *)(in_ECX + 0x74) & 0x800) != 0)) {
    if (in_ECX[0x3bc] != *(AActor *)(param_1 + 0x3bc)) {
      if ((DAT_10c1ba18 & 1) == 0) {
        DAT_10c1ba18 = DAT_10c1ba18 | 1;
        local_8._0_1_ = 1;
        DAT_10c1ba14 = thunk_FUN_10526620(&AWeaponAttachment::PrivateStaticClass,L"FlashCount",0);
        local_8 = (uint)local_8._1_3_ << 8;
      }
      *puVar1 = (uint)*(ushort *)(DAT_10c1ba14 + 0x52);
      puVar1 = puVar1 + 1;
    }
    if (*(int *)(in_ECX + 0x3c4) != *(int *)(param_1 + 0x3c4)) {
      if ((DAT_10c1ba18 & 2) == 0) {
        DAT_10c1ba18 = DAT_10c1ba18 | 2;
        local_8._0_1_ = 2;
        DAT_10c1ba10 = thunk_FUN_10526620(&AWeaponAttachment::PrivateStaticClass,L"FiringMode",0);
        local_8 = (uint)local_8._1_3_ << 8;
      }
      *puVar1 = (uint)*(ushort *)(DAT_10c1ba10 + 0x52);
      puVar1 = puVar1 + 1;
    }
    if (((*(uint *)(param_1 + 0x3c0) ^ *(uint *)(in_ECX + 0x3c0)) & 1) != 0) {
      if ((DAT_10c1ba18 & 4) == 0) {
        DAT_10c1ba18 = DAT_10c1ba18 | 4;
        local_8 = CONCAT31(local_8._1_3_,3);
        DAT_10c1ba0c = thunk_FUN_10526620(&AWeaponAttachment::PrivateStaticClass,L"bAutoFire",0);
      }
      *puVar1 = (uint)*(ushort *)(DAT_10c1ba0c + 0x52);
      puVar1 = puVar1 + 1;
    }
  }
  ExceptionList = local_10;
  return puVar1;
}


// ==== 1052c8e9 Catch@1052c8e9

void Catch_1052c8e9(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 1052c8fd Catch@1052c8fd

void Catch_1052c8fd(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"AWeaponAttachment::GetOptimizedRepList");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1052c990 FUN_1052c990

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint * FUN_1052c990(uchar *param_1,FPropertyRetirement *param_2,int *param_3,UPackageMap *param_4,
                   UActorChannel *param_5)

{
  uint *puVar1;
  AInventory *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1081a60e;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  puVar1 = (uint *)AInventory::GetOptimizedRepList(in_ECX,param_1,param_2,param_3,param_4,param_5);
  if (((((_DAT_10c2a39c & 0x800) != 0) && (((byte)in_ECX[0x368] & 2) != 0)) &&
      (in_ECX[0xc2] == (AInventory)0x4)) &&
     (((*(uint *)(in_ECX + 0x74) & 0x800) != 0 &&
      (*(int *)(in_ECX + 0x40c) != *(int *)(param_1 + 0x40c))))) {
    if ((DAT_10c1ba20 & 1) == 0) {
      DAT_10c1ba20 = DAT_10c1ba20 | 1;
      local_8 = CONCAT31(local_8._1_3_,1);
      DAT_10c1ba1c = thunk_FUN_10526620(&AAmmunition::PrivateStaticClass,L"AmmoAmount",0);
    }
    *puVar1 = (uint)*(ushort *)(DAT_10c1ba1c + 0x52);
    puVar1 = puVar1 + 1;
  }
  ExceptionList = local_10;
  return puVar1;
}


// ==== 1052ca66 Catch@1052ca66

void Catch_1052ca66(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 1052ca7a Catch@1052ca7a

void Catch_1052ca7a(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"AAmmunition::GetOptimizedRepList");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1052cae0 FUN_1052cae0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint * FUN_1052cae0(uchar *param_1,FPropertyRetirement *param_2,int *param_3,UPackageMap *param_4,
                   UActorChannel *param_5)

{
  uint *puVar1;
  AInventory *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_1081a64a;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  puVar1 = (uint *)AInventory::GetOptimizedRepList(in_ECX,param_1,param_2,param_3,param_4,param_5);
  if (((((_DAT_10c29e6c & 0x800) != 0) && (((byte)in_ECX[0x368] & 2) != 0)) &&
      (in_ECX[0xc2] == (AInventory)0x4)) && ((*(uint *)(in_ECX + 0x74) & 0x800) != 0)) {
    if (((*(uint *)(in_ECX + 0x40c) ^ *(uint *)(param_1 + 0x40c)) & 4) != 0) {
      if ((DAT_10c1ba30 & 1) == 0) {
        DAT_10c1ba30 = DAT_10c1ba30 | 1;
        local_8._0_1_ = 1;
        DAT_10c1ba2c = thunk_FUN_10526620(&APowerups::PrivateStaticClass,L"bActivatable",0);
        local_8 = (uint)local_8._1_3_ << 8;
      }
      *puVar1 = (uint)*(ushort *)(DAT_10c1ba2c + 0x52);
      puVar1 = puVar1 + 1;
    }
    if (((*(uint *)(in_ECX + 0x40c) ^ *(uint *)(param_1 + 0x40c)) & 8) != 0) {
      if ((DAT_10c1ba30 & 2) == 0) {
        DAT_10c1ba30 = DAT_10c1ba30 | 2;
        local_8._0_1_ = 2;
        DAT_10c1ba28 = thunk_FUN_10526620(&APowerups::PrivateStaticClass,L"bActive",0);
        local_8 = (uint)local_8._1_3_ << 8;
      }
      *puVar1 = (uint)*(ushort *)(DAT_10c1ba28 + 0x52);
      puVar1 = puVar1 + 1;
    }
    if (*(int *)(in_ECX + 0x408) != *(int *)(param_1 + 0x408)) {
      if ((DAT_10c1ba30 & 4) == 0) {
        DAT_10c1ba30 = DAT_10c1ba30 | 4;
        local_8 = CONCAT31(local_8._1_3_,3);
        DAT_10c1ba24 = thunk_FUN_10526620(&APowerups::PrivateStaticClass,L"NumCopies",0);
      }
      *puVar1 = (uint)*(ushort *)(DAT_10c1ba24 + 0x52);
      puVar1 = puVar1 + 1;
    }
  }
  ExceptionList = local_10;
  return puVar1;
}


// ==== 1052cc6e Catch@1052cc6e

void Catch_1052cc6e(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 1052cc82 Catch@1052cc82

void Catch_1052cc82(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"APowerup::GetOptimizedRepList");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1052cd10 FUN_1052cd10

void FUN_1052cd10(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,float param_6,uint param_7)

{
  int iVar1;
  int in_ECX;
  undefined2 in_FPUControlWord;
  float10 fVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1081a670;
  local_10 = ExceptionList;
  local_8 = 0;
  if (((*(uint *)(in_ECX + 0x74) & 0x80000) != 0) && (param_1 == 0)) {
    if (param_6 == 0.0) {
      fVar2 = (float10)124.0;
      ExceptionList = &local_10;
    }
    else {
      ExceptionList = &local_10;
      fVar2 = (float10)thunk_FUN_103704b0(param_3,0xc0800000,0x40800000);
      fVar2 = (fVar2 + (float10)4.0) * (float10)31.0;
    }
    iVar1 = FName::operator!=((FName *)(in_ECX + 0x350),(FName *)&param_2);
    if (((iVar1 != 0) ||
        (param_6 = (float)(uint)*(byte *)(in_ECX + 0x358), (float)fVar2 != (float)(int)param_6)) ||
       ((*(int *)(in_ECX + 0x354) << 0x1f) >> 0x1f != param_7)) {
      *(uint *)(in_ECX + 0x74) = *(uint *)(in_ECX + 0x74) | 0x800;
    }
    *(undefined4 *)(in_ECX + 0x350) = param_2;
    *(uint *)(in_ECX + 0x354) =
         *(uint *)(in_ECX + 0x354) ^ (*(uint *)(in_ECX + 0x354) ^ param_7) & 1;
    param_7 = CONCAT22(in_FPUControlWord,(undefined2)param_7);
    param_1._0_1_ = (undefined1)(int)ROUND((float)fVar2);
    *(undefined1 *)(in_ECX + 0x358) = (undefined1)param_1;
    fVar2 = (float10)thunk_FUN_103704b0(param_4,0xbf800000,0x3f800000);
    param_7 = CONCAT22(in_FPUControlWord,(undefined2)param_7);
    param_1._0_1_ = (undefined1)(int)ROUND((fVar2 + (float10)1.0) * (float10)127.0);
    *(undefined1 *)(in_ECX + 0x359) = (undefined1)param_1;
    fVar2 = (float10)thunk_FUN_103704b0(param_5,0,0x427c0000);
    param_1._0_1_ = (undefined1)(int)ROUND(fVar2 * (float10)4.0);
    *(undefined1 *)(in_ECX + 0x35a) = (undefined1)param_1;
    ExceptionList = local_10;
    return;
  }
  return;
}


// ==== 1052cedb Catch@1052cedb

void Catch_1052cedb(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 1052ceef Catch@1052ceef

void Catch_1052ceef(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"AActor::ReplicateAnim");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1052cf90 AActor::eventAnimEnd thunk -> 1030996c

// ==== 1052cfa0 FUN_1052cfa0

undefined4 FUN_1052cfa0(int param_1)

{
  int in_ECX;
  
  if (param_1 < *(int *)(in_ECX + 0x29c)) {
    return *(undefined4 *)(*(int *)(in_ECX + 0x298) + param_1 * 4);
  }
  return 0;
}


// ==== 1052cfd0 FUN_1052cfd0

undefined4 * FUN_1052cfd0(undefined4 *param_1)

{
  undefined4 *puVar1;
  int in_ECX;
  int iVar2;
  undefined4 *puVar3;
  FMatrix local_4c [64];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1081a6ab;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  puVar1 = (undefined4 *)
           thunk_FUN_10326fb0(*(float *)(in_ECX + 0x28c) + *(float *)(in_ECX + 0x1bc),
                              *(float *)(in_ECX + 0x290) + *(float *)(in_ECX + 0x1c0),
                              *(float *)(in_ECX + 0x294) + *(float *)(in_ECX + 0x1c4));
  puVar3 = param_1;
  for (iVar2 = 0x10; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = *puVar1;
    puVar1 = puVar1 + 1;
    puVar3 = puVar3 + 1;
  }
  local_4 = 0;
  FMatrix::~FMatrix(local_4c);
  ExceptionList = local_c;
  return param_1;
}


// ==== 1052d0e0 FUN_1052d0e0

float10 FUN_1052d0e0(undefined4 param_1,float param_2)

{
  float fVar1;
  int in_ECX;
  
  if ((*(uint *)(in_ECX + 0x74) & 0x1000) == 0) {
    return (float10)(*(float *)(in_ECX + 0xd0) * param_2);
  }
  fVar1 = *(float *)(in_ECX + 0xcc) * 0.1;
  if (fVar1 < 1.0 == (fVar1 == 1.0)) {
    fVar1 = 1.0;
  }
  return (float10)(*(float *)(in_ECX + 0xd0) * param_2 * fVar1);
}


// ==== 1052d160 FUN_1052d160

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1052d160(void)

{
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1081a6d0;
  local_10 = ExceptionList;
  local_8 = 0;
  DAT_10c1ba5c = *(undefined4 *)(in_ECX + 0x1bc);
  DAT_10c1ba60 = *(undefined4 *)(in_ECX + 0x1c0);
  DAT_10c1ba64 = *(undefined4 *)(in_ECX + 0x1c4);
  DAT_10c1c4cc = *(undefined4 *)(in_ECX + 0x1c8);
  DAT_10c1c4d0 = *(undefined4 *)(in_ECX + 0x1cc);
  DAT_10c1c4d4 = *(undefined4 *)(in_ECX + 0x1d0);
  DAT_10c1bf94 = *(undefined4 *)(in_ECX + 0x1fc);
  DAT_10c1bf98 = *(undefined4 *)(in_ECX + 0x200);
  DAT_10c1bf9c = *(undefined4 *)(in_ECX + 0x204);
  DAT_10c1ca04 = *(undefined4 *)(in_ECX + 0x208);
  DAT_10c1ca08 = *(undefined4 *)(in_ECX + 0x20c);
  DAT_10c1ca0c = *(undefined4 *)(in_ECX + 0x210);
  DAT_10c1ba58 = *(undefined4 *)(in_ECX + 0x40);
  DAT_10c1ba54 = *(uint *)(in_ECX + 0x2f8) & 1;
  _DAT_10c1ba50 = *(undefined4 *)(in_ECX + 0x2f0);
  _DAT_10c1ba4c = *(undefined4 *)(in_ECX + 0x2f4);
  DAT_10c1cf3c = *(undefined4 *)(in_ECX + 0x350);
  DAT_10c1cf40 = *(undefined4 *)(in_ECX + 0x354);
  DAT_10c1cf44 = *(undefined4 *)(in_ECX + 0x358);
  _DAT_10c1ba48 = *(undefined4 *)(in_ECX + 0x27c);
  DAT_10c1d9ac = *(undefined4 *)(in_ECX + 0x280);
  DAT_10c1d9b0 = *(undefined4 *)(in_ECX + 0x284);
  DAT_10c1d9b4 = *(undefined4 *)(in_ECX + 0x288);
  DAT_10c1ba44 = *(undefined1 *)(in_ECX + 0x35);
  DAT_10c1ba3c = *(undefined4 *)(in_ECX + 0x2b0);
  if ((*(byte *)(in_ECX + 0x2f8) & 1) != 0) {
    ExceptionList = &local_10;
    (**(code **)(**(int **)(*(int *)(in_ECX + 0xe4) + 0x120) + 0xc))();
  }
  ExceptionList = local_10;
  return;
}


// ==== 1052d2ea Catch@1052d2ea

void Catch_1052d2ea(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 1052d2fe Catch@1052d2fe

void Catch_1052d2fe(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"AActor::PreNetReceive");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1052d390 FUN_1052d390

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1052d390(void)

{
  AActor *in_ECX;
  int iVar1;
  AActor *pAVar2;
  undefined4 *puVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1081a6e0;
  local_10 = ExceptionList;
  local_8 = 0;
  pAVar2 = in_ECX + 0x183c;
  puVar3 = &DAT_10c1e414;
  ExceptionList = &local_10;
  for (iVar1 = 9; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *(undefined4 *)pAVar2;
    pAVar2 = pAVar2 + 4;
    puVar3 = puVar3 + 1;
  }
  _DAT_10c1dee4 = *(undefined4 *)(in_ECX + 0x1714);
  _DAT_10c1ba40 = *(undefined4 *)(in_ECX + 0x15d8);
  AActor::PreNetReceive(in_ECX);
  ExceptionList = local_10;
  return;
}


// ==== 1052d405 Catch@1052d405

void Catch_1052d405(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 1052d419 Catch@1052d419

void Catch_1052d419(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"AActor::PreNetReceive");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1052d460 FUN_1052d460

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1052d460(void)

{
  AActor *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1081a6f0;
  local_10 = ExceptionList;
  local_8 = 0;
  _DAT_10c1d474 = *(undefined4 *)(in_ECX + 0x5f0);
  _DAT_10c1d478 = *(undefined4 *)(in_ECX + 0x5f4);
  _DAT_10c1d47c = *(undefined4 *)(in_ECX + 0x5f8);
  ExceptionList = &local_10;
  AActor::PreNetReceive(in_ECX);
  ExceptionList = local_10;
  return;
}


// ==== 1052d4c7 Catch@1052d4c7

void Catch_1052d4c7(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 1052d4db Catch@1052d4db

void Catch_1052d4db(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"AMover::PreNetReceive");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1052d520 FUN_1052d520

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1052d520(void)

{
  AActor *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1081a700;
  local_10 = ExceptionList;
  local_8 = 0;
  _DAT_10c1ba38 = *(undefined4 *)(in_ECX + 0x618);
  ExceptionList = &local_10;
  AActor::PreNetReceive(in_ECX);
  ExceptionList = local_10;
  return;
}


// ==== 1052d573 Catch@1052d573

void Catch_1052d573(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 1052d587 Catch@1052d587

void Catch_1052d587(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"ALevelInfo::PreNetReceive");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1052d5d0 FUN_1052d5d0

void FUN_1052d5d0(void)

{
  int in_ECX;
  
  (**(code **)(**(int **)(in_ECX + 0xe4) + 0xa8))();
  return;
}


// ==== 1052d620 FUN_1052d620

void FUN_1052d620(byte param_1)

{
  FDynamicActor *in_ECX;
  
  FDynamicActor::~FDynamicActor(in_ECX);
  if ((param_1 & 1) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))();
  }
  return;
}


// ==== 1052d650 FUN_1052d650

void FUN_1052d650(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1081a710;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  if ((((*(byte *)(in_ECX + 0x2f8) & 1) != 0) &&
      (iVar1 = *(int *)(in_ECX + 0xe4), ExceptionList = &local_10, iVar1 != 0)) &&
     (ExceptionList = &local_10, *(int *)(iVar1 + 0x120) != 0)) {
    ExceptionList = &local_10;
    (**(code **)(**(int **)(iVar1 + 0x120) + 0xc))();
  }
  *(undefined4 *)(in_ECX + 0x2f0) = param_1;
  *(undefined4 *)(in_ECX + 0x2f4) = param_2;
  if ((((*(byte *)(in_ECX + 0x2f8) & 1) != 0) && (iVar1 = *(int *)(in_ECX + 0xe4), iVar1 != 0)) &&
     (*(int *)(iVar1 + 0x120) != 0)) {
    (**(code **)(**(int **)(iVar1 + 0x120) + 8))();
  }
  *(uint *)(in_ECX + 0x74) = *(uint *)(in_ECX + 0x74) | 0x800;
  ExceptionList = local_10;
  return;
}


// ==== 1052d707 Catch@1052d707

void Catch_1052d707(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 1052d71b Catch@1052d71b

void Catch_1052d71b(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"AActor::SetCollisionSize");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1052d780 FUN_1052d780

void FUN_1052d780(undefined4 param_1)

{
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1081a720;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  if (((*(byte *)(in_ECX + 0x2f8) & 1) != 0) &&
     (ExceptionList = &local_10, *(int *)(*(int *)(in_ECX + 0xe4) + 0x120) != 0)) {
    ExceptionList = &local_10;
    (**(code **)(**(int **)(*(int *)(in_ECX + 0xe4) + 0x120) + 0xc))();
  }
  *(undefined4 *)(in_ECX + 0x27c) = param_1;
  if (((*(byte *)(in_ECX + 0x2f8) & 1) != 0) && (*(int *)(*(int *)(in_ECX + 0xe4) + 0x120) != 0)) {
    (**(code **)(**(int **)(*(int *)(in_ECX + 0xe4) + 0x120) + 8))();
  }
  *(uint *)(in_ECX + 0x74) = *(uint *)(in_ECX + 0x74) | 0x800;
  ExceptionList = local_10;
  return;
}


// ==== 1052d822 Catch@1052d822

void Catch_1052d822(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 1052d836 Catch@1052d836

void Catch_1052d836(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"AActor::SetDrawScale");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1052d890 FUN_1052d890

void FUN_1052d890(undefined4 param_1)

{
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1081a730;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  if (((*(byte *)(in_ECX + 0x2f8) & 1) != 0) &&
     (ExceptionList = &local_10, *(int *)(*(int *)(in_ECX + 0xe4) + 0x120) != 0)) {
    ExceptionList = &local_10;
    (**(code **)(**(int **)(*(int *)(in_ECX + 0xe4) + 0x120) + 0xc))();
  }
  *(undefined4 *)(in_ECX + 0x38) = param_1;
  if (((*(byte *)(in_ECX + 0x2f8) & 1) != 0) && (*(int *)(*(int *)(in_ECX + 0xe4) + 0x120) != 0)) {
    (**(code **)(**(int **)(*(int *)(in_ECX + 0xe4) + 0x120) + 8))();
  }
  *(uint *)(in_ECX + 0x74) = *(uint *)(in_ECX + 0x74) | 0x800;
  ExceptionList = local_10;
  return;
}


// ==== 1052d92d Catch@1052d92d

void Catch_1052d92d(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 1052d941 Catch@1052d941

void Catch_1052d941(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"AActor::SetStaticMesh");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1052d9a0 FUN_1052d9a0

void FUN_1052d9a0(undefined1 param_1)

{
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1081a740;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  if (((*(byte *)(in_ECX + 0x2f8) & 1) != 0) &&
     (ExceptionList = &local_10, *(int *)(*(int *)(in_ECX + 0xe4) + 0x120) != 0)) {
    ExceptionList = &local_10;
    (**(code **)(**(int **)(*(int *)(in_ECX + 0xe4) + 0x120) + 0xc))();
  }
  *(undefined1 *)(in_ECX + 0x35) = param_1;
  if (((*(byte *)(in_ECX + 0x2f8) & 1) != 0) && (*(int *)(*(int *)(in_ECX + 0xe4) + 0x120) != 0)) {
    (**(code **)(**(int **)(*(int *)(in_ECX + 0xe4) + 0x120) + 8))();
  }
  *(uint *)(in_ECX + 0x74) = *(uint *)(in_ECX + 0x74) | 0x800;
  ExceptionList = local_10;
  return;
}


// ==== 1052da3d Catch@1052da3d

void Catch_1052da3d(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 1052da51 Catch@1052da51

void Catch_1052da51(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"AActor::SetDrawScale");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1052dab0 FUN_1052dab0

void FUN_1052dab0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1081a750;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  if (((*(byte *)(in_ECX + 0x2f8) & 1) != 0) &&
     (ExceptionList = &local_10, *(int *)(*(int *)(in_ECX + 0xe4) + 0x120) != 0)) {
    ExceptionList = &local_10;
    (**(code **)(**(int **)(*(int *)(in_ECX + 0xe4) + 0x120) + 0xc))();
  }
  *(undefined4 *)(in_ECX + 0x280) = param_1;
  *(undefined4 *)(in_ECX + 0x284) = param_2;
  *(undefined4 *)(in_ECX + 0x288) = param_3;
  if (((*(byte *)(in_ECX + 0x2f8) & 1) != 0) && (*(int *)(*(int *)(in_ECX + 0xe4) + 0x120) != 0)) {
    (**(code **)(**(int **)(*(int *)(in_ECX + 0xe4) + 0x120) + 8))();
  }
  *(uint *)(in_ECX + 0x74) = *(uint *)(in_ECX + 0x74) | 0x800;
  ExceptionList = local_10;
  return;
}


// ==== 1052db62 Catch@1052db62

void Catch_1052db62(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 1052db76 Catch@1052db76

void Catch_1052db76(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"AActor::SetDrawScale3D");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1052dbd0 FUN_1052dbd0

bool FUN_1052dbd0(AActor *param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  AActor *in_ECX;
  AActor *pAVar6;
  AActor *pAVar7;
  undefined1 auStack_48 [4];
  undefined1 auStack_44 [60];
  undefined4 uStack_8;
  int *piStack_4;
  
  if ((((((*(int *)(in_ECX + 0x278) == 0) ||
         (iVar1 = (**(code **)(*(int *)in_ECX + 0x2e0))(), iVar1 == 0)) ||
        (*(int *)(param_1 + 0x278) == 0)) ||
       (iVar1 = (**(code **)(*(int *)param_1 + 0x2e0))(), iVar1 == 0)) &&
      (((param_1 != *(AActor **)(in_ECX + 0xe0) && (in_ECX != param_1)) &&
       ((iVar1 = AActor::IsEncroacher(in_ECX), iVar1 == 0 ||
        (iVar1 = AActor::IsEncroacher(param_1), iVar1 == 0)))))) &&
     ((((iVar1 = AActor::IsJoinedTo(in_ECX,param_1), iVar1 == 0 &&
        (iVar1 = AActor::IsJoinedTo(param_1,in_ECX), iVar1 == 0)) &&
       ((((byte)in_ECX[0x74] & 0x10) == 0 ||
        (iVar1 = UObject::IsA((UObject *)param_1,&APawn::PrivateStaticClass), iVar1 != 0)))) &&
      ((((((byte)param_1[0x74] & 0x10) == 0 ||
         (iVar1 = UObject::IsA((UObject *)in_ECX,&APawn::PrivateStaticClass), iVar1 != 0)) &&
        (((byte)in_ECX[0x2f8] & 0x40) != 0)) && (((byte)param_1[0x2f8] & 0x40) != 0)))))) {
    iVar1 = UObject::IsA((UObject *)in_ECX,&AProjector::PrivateStaticClass);
    pAVar6 = param_1;
    pAVar7 = in_ECX;
    if (((((iVar1 != 0) ||
          (iVar1 = UObject::IsA((UObject *)param_1,&AProjector::PrivateStaticClass), pAVar6 = in_ECX
          , pAVar7 = param_1, iVar1 != 0)) ||
         ((iVar1 = AActor::IsVolumeBrush(in_ECX), pAVar6 = param_1, pAVar7 = in_ECX, iVar1 != 0 ||
          ((iVar1 = UObject::IsA((UObject *)in_ECX,&AFluidSurfaceInfo::PrivateStaticClass),
           iVar1 != 0 ||
           (iVar1 = AActor::IsVolumeBrush(param_1), pAVar6 = in_ECX, pAVar7 = param_1, iVar1 != 0)))
          ))) || (iVar1 = UObject::IsA((UObject *)param_1,&AFluidSurfaceInfo::PrivateStaticClass),
                 iVar1 != 0)) ||
       ((iVar1 = AActor::IsEncroacher(in_ECX), pAVar6 = param_1, pAVar7 = in_ECX, iVar1 != 0 ||
        (iVar1 = AActor::IsEncroacher(param_1), pAVar6 = in_ECX, pAVar7 = param_1, iVar1 != 0)))) {
      piStack_4 = (int *)0x0;
      piVar2 = (int *)(**(code **)(*(int *)pAVar6 + 0x164))();
      (**(code **)(*(int *)pAVar6 + 0x164))();
      piVar3 = (int *)(**(code **)(*(int *)pAVar7 + 0x164))();
      iVar1 = *piVar3;
      puVar4 = (undefined4 *)(**(code **)(*piVar2 + 0x84))(auStack_48,pAVar6);
      puVar5 = (undefined4 *)(**(code **)(*piStack_4 + 0x88))(auStack_44,pAVar6);
      iVar1 = (**(code **)(iVar1 + 0x68))
                        (uStack_8,pAVar7,*puVar5,puVar5[1],puVar5[2],*puVar4,puVar4[1],puVar4[2],0);
      return iVar1 == 0;
    }
    if (((*(float *)(in_ECX + 0x1c4) - *(float *)(param_1 + 0x1c4)) *
         (*(float *)(in_ECX + 0x1c4) - *(float *)(param_1 + 0x1c4)) <
         (*(float *)(param_1 + 0x2f4) + *(float *)(in_ECX + 0x2f4)) *
         (*(float *)(param_1 + 0x2f4) + *(float *)(in_ECX + 0x2f4))) &&
       ((*(float *)(in_ECX + 0x1c0) - *(float *)(param_1 + 0x1c0)) *
        (*(float *)(in_ECX + 0x1c0) - *(float *)(param_1 + 0x1c0)) +
        (*(float *)(in_ECX + 0x1bc) - *(float *)(param_1 + 0x1bc)) *
        (*(float *)(in_ECX + 0x1bc) - *(float *)(param_1 + 0x1bc)) <
        (*(float *)(param_1 + 0x2f0) + *(float *)(in_ECX + 0x2f0)) *
        (*(float *)(param_1 + 0x2f0) + *(float *)(in_ECX + 0x2f0)))) {
      return true;
    }
  }
  return false;
}


// ==== 1052dfb0 FUN_1052dfb0

int FUN_1052dfb0(void)

{
  int iVar1;
  int in_ECX;
  
  iVar1 = *(int *)(in_ECX + 0x104);
  if (((iVar1 == 0) && (iVar1 = *(int *)(in_ECX + 0x38), iVar1 == 0)) &&
     (iVar1 = *(int *)(in_ECX + 0x2b8), iVar1 == 0)) {
    iVar1 = *(int *)(*(int *)(in_ECX + 0xe4) + 0x74);
    if (iVar1 != 0) {
      return *(int *)(iVar1 + 0x50);
    }
    iVar1 = 0;
  }
  return iVar1;
}


// ==== 1052dff0 FUN_1052dff0

int FUN_1052dff0(void)

{
  int iVar1;
  int in_ECX;
  
  iVar1 = *(int *)(in_ECX + 0x278);
  if (iVar1 == 0) {
    iVar1 = *(int *)(*(int *)(in_ECX + 0xe4) + 0x74);
    if (iVar1 != 0) {
      return *(int *)(iVar1 + 0x50);
    }
    iVar1 = 0;
  }
  return iVar1;
}


// ==== 1052e020 FUN_1052e020

void FUN_1052e020(AActor *param_1)

{
  AActor *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1081a760;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  if (*(AActor **)(in_ECX + 0x3c) != (AActor *)0x0) {
    ExceptionList = &local_10;
    AActor::eventLostChild(*(AActor **)(in_ECX + 0x3c),in_ECX);
    (**(code **)(**(int **)(in_ECX + 0x3c) + 0xbc))();
  }
  *(AActor **)(in_ECX + 0x3c) = param_1;
  if (param_1 != (AActor *)0x0) {
    AActor::eventGainedChild(param_1,in_ECX);
    (**(code **)(**(int **)(in_ECX + 0x3c) + 0xc0))();
  }
  *(uint *)(in_ECX + 0x74) = *(uint *)(in_ECX + 0x74) | 0x800;
  ExceptionList = local_10;
  return;
}


// ==== 1052e0a4 Catch@1052e0a4

void Catch_1052e0a4(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 1052e0b8 Catch@1052e0b8

void Catch_1052e0b8(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"AActor::SetOwner");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1052e110 FUN_1052e110

uint FUN_1052e110(AActor *param_1)

{
  int iVar1;
  uint uVar2;
  AActor *in_ECX;
  
  if (((byte)param_1[0x74] & 2) != 0) {
    return *(uint *)(in_ECX + 0x2f8) >> 1 & 1;
  }
  iVar1 = AActor::IsEncroacher(in_ECX);
  if ((iVar1 != 0) && (((byte)param_1[0x74] & 0x40) != 0)) {
    return 0;
  }
  iVar1 = AActor::IsEncroacher(param_1);
  if ((iVar1 != 0) && (((byte)in_ECX[0x74] & 0x40) != 0)) {
    return 0;
  }
  if (((*(int *)(param_1 + 0x278) == 0) ||
      (iVar1 = (**(code **)(*(int *)param_1 + 0x2e0))(), iVar1 == 0)) &&
     (iVar1 = AActor::IsEncroacher(param_1), iVar1 == 0)) {
    iVar1 = AActor::IsBrush(in_ECX);
    if ((iVar1 == 0) && (iVar1 = AActor::IsEncroacher(in_ECX), iVar1 == 0)) {
      iVar1 = (**(code **)(*(int *)in_ECX + 0x6c))();
      if ((iVar1 == 0) && (iVar1 = (**(code **)(*(int *)in_ECX + 0x2f4))(), iVar1 == 0)) {
        uVar2 = *(uint *)(param_1 + 0x2f8) >> 2;
      }
      else {
        uVar2 = *(uint *)(param_1 + 0x2f8) >> 3;
      }
      if ((uVar2 & 1) == 0) {
        return 0;
      }
      iVar1 = (**(code **)(*(int *)param_1 + 0x6c))();
      if ((iVar1 != 0) || (iVar1 = (**(code **)(*(int *)param_1 + 0x2f4))(), iVar1 != 0)) {
        uVar2 = *(uint *)(in_ECX + 0x2f8) >> 3;
        goto LAB_1052e1fe;
      }
      uVar2 = *(uint *)(in_ECX + 0x2f8);
    }
    else {
      if (((byte)param_1[0x2f8] & 2) == 0) {
        return 0;
      }
      iVar1 = (**(code **)(*(int *)param_1 + 0x6c))();
      uVar2 = *(uint *)(in_ECX + 0x2f8);
      if (iVar1 != 0) {
        uVar2 = uVar2 >> 3;
        goto LAB_1052e1fe;
      }
    }
  }
  else {
    if (((byte)in_ECX[0x2f8] & 2) == 0) {
      return 0;
    }
    iVar1 = (**(code **)(*(int *)in_ECX + 0x6c))();
    uVar2 = *(uint *)(param_1 + 0x2f8);
    if (iVar1 != 0) {
      uVar2 = uVar2 >> 3;
      goto LAB_1052e1fe;
    }
  }
  uVar2 = uVar2 >> 2;
LAB_1052e1fe:
  if ((uVar2 & 1) == 0) {
    return 0;
  }
  return 1;
}


// ==== 1052e2c0 FUN_1052e2c0

FCoords * FUN_1052e2c0(FCoords *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int in_ECX;
  FCoords *pFVar3;
  undefined1 local_58 [48];
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1081a770;
  local_10 = ExceptionList;
  local_14 = &stack0xffffff9c;
  local_8 = 0;
  local_28 = 0;
  local_24 = 0;
  local_20 = 0;
  ExceptionList = &local_10;
  FCoords::FCoords(param_1,(FVector *)&local_28);
  if ((*(UObject **)(in_ECX + 0x104) != (UObject *)0x0) &&
     (iVar1 = UObject::IsA(*(UObject **)(in_ECX + 0x104),&USkeletalMesh::PrivateStaticClass),
     iVar1 != 0)) {
    (**(code **)(**(int **)(in_ECX + 0x104) + 0x98))();
    puVar2 = (undefined4 *)
             USubSkeletalMeshInstance::GetBoneCoords
                       (*(USubSkeletalMeshInstance **)(in_ECX + 0x134),(ulong)local_58);
    pFVar3 = param_1;
    for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
      *(undefined4 *)pFVar3 = *puVar2;
      puVar2 = puVar2 + 1;
      pFVar3 = pFVar3 + 4;
    }
  }
  ExceptionList = local_10;
  return param_1;
}


// ==== 1052e36f Catch@1052e36f

void Catch_1052e36f(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 1052e383 Catch@1052e383

void Catch_1052e383(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"AActor::GetBoneCoordsWithBoneIndex");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1052e3e0 FUN_1052e3e0

undefined4 FUN_1052e3e0(void)

{
  code *pcVar1;
  int iVar2;
  USubSkeletalMeshInstance *pUVar3;
  UObject *in_ECX;
  FOutputDevice *this;
  undefined4 unaff_retaddr;
  UObject *pUStack_4;
  
  if (*(UObject **)(in_ECX + 0x104) != (UObject *)0x0) {
    iVar2 = UObject::IsA(*(UObject **)(in_ECX + 0x104),&USkeletalMesh::PrivateStaticClass);
    if (iVar2 != 0) {
      pUVar3 = (USubSkeletalMeshInstance *)(**(code **)(**(int **)(in_ECX + 0x104) + 0x98))();
      iVar2 = USubSkeletalMeshInstance::MatchRefBone(pUVar3);
      if ((-1 < iVar2) && (pUStack_4 != (UObject *)0x0)) {
        iVar2 = UObject::IsValid(pUStack_4);
        if (iVar2 != 0) {
          pcVar1 = *(code **)(*(int *)pUStack_4 + 0x16c);
          *(undefined4 *)(pUStack_4 + 0xd8) = unaff_retaddr;
          (*pcVar1)();
          pUStack_4[0xdc] = (UObject)0x0;
          return 1;
        }
      }
      if (*(int *)GLog_exref != 0) {
        UObject::GetName(in_ECX);
        FName::operator*((FName *)&stack0x00000000);
        FOutputDevice::Logf2(this,*(ushort **)GLog_exref);
      }
    }
  }
  return 0;
}


// ==== 1052e520 FUN_1052e520

undefined4 FUN_1052e520(int *param_1)

{
  int iVar1;
  int in_ECX;
  int unaff_ESI;
  
  if (*(UObject **)(in_ECX + 0x104) != (UObject *)0x0) {
    iVar1 = UObject::IsA(*(UObject **)(in_ECX + 0x104),&USkeletalMesh::PrivateStaticClass);
    if (iVar1 != 0) {
      (**(code **)(*param_1 + 0x16c))(0,0,0,0x3f800000,1);
      FName::FName((FName *)&stack0xfffffff0,0);
      param_1[0x36] = unaff_ESI;
      return 1;
    }
  }
  return 0;
}


// ==== 1052e5d0 FUN_1052e5d0

undefined4 FUN_1052e5d0(undefined4 param_1)

{
  int iVar1;
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1081a780;
  local_10 = ExceptionList;
  local_8 = 0;
  if ((*(UObject **)(in_ECX + 0x104) != (UObject *)0x0) &&
     (ExceptionList = &local_10,
     iVar1 = UObject::IsA(*(UObject **)(in_ECX + 0x104),&USkeletalMesh::PrivateStaticClass),
     iVar1 != 0)) {
    (**(code **)(**(int **)(in_ECX + 0x104) + 0x98))();
    iVar1 = USubSkeletalMeshInstance::MatchRefBone
                      (*(USubSkeletalMeshInstance **)(in_ECX + 0x134),param_1);
    if (-1 < iVar1) {
      ExceptionList = local_10;
      return 1;
    }
  }
  ExceptionList = local_10;
  return 0;
}


// ==== 1052e66b Catch@1052e66b

void Catch_1052e66b(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 1052e67f Catch@1052e67f

void Catch_1052e67f(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"AActor::HasBoneName");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1052e6d0 FUN_1052e6d0

undefined4 FUN_1052e6d0(UObject *param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  UObject *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1081a790;
  local_10 = ExceptionList;
  local_8 = 0;
  if (((((byte)in_ECX[0x2e4] & 2) == 0) && ((param_2 & 0x100) != 0)) ||
     ((param_1 != (UObject *)0x0 && (((byte)param_1[0x74] & 0x10) != 0)))) {
    return 0;
  }
  ExceptionList = &local_10;
  if (((((byte)in_ECX[0x74] & 0x10) != 0) && (ExceptionList = &local_10, param_1 != (UObject *)0x0))
     && (ExceptionList = &local_10, iVar1 = UObject::IsA(param_1,&APawn::PrivateStaticClass),
        iVar1 == 0)) {
    ExceptionList = local_10;
    return 0;
  }
  if (((((byte)in_ECX[0x74] & 2) == 0) || (-1 < (char)param_2)) &&
     ((iVar1 = UObject::IsA(in_ECX,&APhysicsVolume::PrivateStaticClass), iVar1 == 0 ||
      ((param_2 & 0x40000) == 0)))) {
    if ((param_2 & 8) == 0) {
      ExceptionList = local_10;
      return 0;
    }
    if ((param_2 & 0x20) == 0) {
      if ((param_2 & 0x40) == 0) {
        ExceptionList = local_10;
        return 1;
      }
      if (param_1 == (UObject *)0x0) {
        ExceptionList = local_10;
        return 0;
      }
      uVar2 = AActor::IsBlockedBy((AActor *)param_1,(AActor *)in_ECX);
    }
    else {
      uVar2 = *(uint *)(in_ECX + 0x2f8);
      if ((uVar2 & 0x10) != 0) {
        ExceptionList = local_10;
        return 1;
      }
      if ((uVar2 & 4) == 0) {
        ExceptionList = local_10;
        return 0;
      }
      uVar2 = uVar2 & 8;
    }
    if (uVar2 == 0) {
      ExceptionList = local_10;
      return 0;
    }
  }
  ExceptionList = local_10;
  return 1;
}


// ==== 1052e7bb Catch@1052e7bb

void Catch_1052e7bb(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 1052e7cf Catch@1052e7cf

void Catch_1052e7cf(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"AVolume::ShouldTrace");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1052e840 FUN_1052e840

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint * FUN_1052e840(uchar *param_1,FPropertyRetirement *param_2,int *param_3,UPackageMap *param_4,
                   UActorChannel *param_5)

{
  uint *puVar1;
  APickup *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_1081a7bc;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  puVar1 = (uint *)APickup::GetOptimizedRepList(in_ECX,param_1,param_2,param_3,param_4,param_5);
  if (((_DAT_10c3254c & 0x800) != 0) && (in_ECX[0xc2] == (APickup)0x4)) {
    if (in_ECX[0x404] != *(APickup *)(param_1 + 0x404)) {
      if ((DAT_10c41ce4 & 1) == 0) {
        DAT_10c41ce4 = DAT_10c41ce4 | 1;
        local_8._0_1_ = 1;
        DAT_10c41ce0 = thunk_FUN_10526620(&AStationaryWeapons::PrivateStaticClass,L"bActive",0);
        local_8 = (uint)local_8._1_3_ << 8;
      }
      *puVar1 = (uint)*(ushort *)(DAT_10c41ce0 + 0x52);
      puVar1 = puVar1 + 1;
    }
    if (*(int *)(in_ECX + 0x3f4) != *(int *)(param_1 + 0x3f4)) {
      if ((DAT_10c41ce4 & 2) == 0) {
        DAT_10c41ce4 = DAT_10c41ce4 | 2;
        local_8 = CONCAT31(local_8._1_3_,2);
        DAT_10c41cdc = thunk_FUN_10526620(&AStationaryWeapons::PrivateStaticClass,L"TeamIndex",0);
      }
      *puVar1 = (uint)*(ushort *)(DAT_10c41cdc + 0x52);
      puVar1 = puVar1 + 1;
    }
  }
  ExceptionList = local_10;
  return puVar1;
}


// ==== 1052e962 Catch@1052e962

void Catch_1052e962(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 1052e976 Catch@1052e976

void Catch_1052e976(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"AStationaryWeapons::GetOptimizedRepList");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1052e9f0 FUN_1052e9f0

void FUN_1052e9f0(void)

{
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1081a7d0;
  local_10 = ExceptionList;
  local_8 = 0;
  if (*(int *)(in_ECX + 0x3dc) != 0) {
    ExceptionList = &local_10;
    (**(code **)(**(int **)(in_ECX + 0xe4) + 0xac))(*(int *)(in_ECX + 0x3dc),0);
  }
  ExceptionList = local_10;
  return;
}


// ==== 1052ea4d Catch@1052ea4d

void Catch_1052ea4d(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 1052ea61 Catch@1052ea61

void Catch_1052ea61(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"AL2Pickup::PostScriptDestroyed");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1052eab0 FUN_1052eab0

undefined4 FUN_1052eab0(int *param_1,int *param_2)

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


// ==== 1052eb00 FUN_1052eb00

void FUN_1052eb00(UStruct *param_1,UPackage *param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = UStruct::IsChildOf(param_1,(UStruct *)&UL2ColorModifier::PrivateStaticClass);
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


// ==== 1052eb80 FUN_1052eb80

UObject * FUN_1052eb80(UObject *param_1)

{
  int iVar1;
  
  if (param_1 != (UObject *)0x0) {
    iVar1 = UObject::IsA(param_1,&ANProjectile::PrivateStaticClass);
    if (iVar1 != 0) {
      return param_1;
    }
  }
  return (UObject *)0x0;
}


// ==== 1052ebb0 FUN_1052ebb0

void FUN_1052ebb0(void)

{
  int *piVar1;
  int in_ECX;
  
  piVar1 = (int *)(in_ECX + 4);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    thunk_FUN_105266d0();
    (**(code **)(**(int **)GMalloc_exref + 8))();
  }
  return;
}


// ==== 1052ebe0 FUN_1052ebe0

void FUN_1052ebe0(undefined4 *param_1)

{
  int iVar1;
  FArray *in_ECX;
  
  iVar1 = FArray::Add(in_ECX,1,4);
  *(undefined4 *)(*(int *)in_ECX + iVar1 * 4) = *param_1;
  return;
}


// ==== 1052ec10 FUN_1052ec10

void FUN_1052ec10(int param_1,int param_2,undefined4 param_3)

{
  AActor AVar1;
  int *piVar2;
  ULevelBase *this;
  float fVar3;
  int iVar4;
  APawn *pAVar5;
  AActor *in_ECX;
  AActor AVar6;
  
  if (((in_ECX[0x9c] == (AActor)0x9) && (param_1 != 9)) && (param_1 != 0)) {
    return;
  }
  iVar4 = FNActorResourceLoader::CheckLoadingResource(&GL2ActorResourceLoader,in_ECX,1);
  if (iVar4 != 0) {
    return;
  }
  AVar6 = SUB41(param_1,0);
  if (param_1 == 9) {
    in_ECX[0x9c] = (AActor)0x9;
    if (param_2 == 0) {
      (**(code **)(*(int *)in_ECX + 0x100))(param_3);
    }
    else {
      (**(code **)(*(int *)in_ECX + 0x104))();
    }
  }
  else {
    if (param_1 == 7) {
      if (in_ECX[0x9c] == (AActor)0x7) {
        return;
      }
      if (in_ECX[0x9c] != (AActor)0x8) {
        *(undefined4 *)(in_ECX + 0xa4) = 0;
        in_ECX[0x9c] = (AActor)0x7;
        return;
      }
      in_ECX[0x9c] = (AActor)0x7;
      *(float *)(in_ECX + 0xa4) = *(float *)(in_ECX + 0xa0) - *(float *)(in_ECX + 0xa4);
      return;
    }
    if (param_1 == 8) {
      if (in_ECX[0x9c] == (AActor)0x8) {
        return;
      }
      if (in_ECX[0x9c] == (AActor)0x7) {
        fVar3 = *(float *)(in_ECX + 0xa0) - *(float *)(in_ECX + 0xa4);
      }
      else {
        fVar3 = 0.0;
      }
      *(uint *)(in_ECX + 100) = *(uint *)(in_ECX + 100) & 0xffffffdf;
      *(float *)(in_ECX + 0xa4) = fVar3;
      in_ECX[0x9c] = (AActor)0x8;
      return;
    }
  }
  AVar1 = in_ECX[0x9c];
  if (AVar1 == (AActor)0x7) {
    return;
  }
  if (AVar1 == (AActor)0x8) {
    return;
  }
  if (param_1 == 0) {
    if (AVar1 == (AActor)0x0) {
      return;
    }
    in_ECX[0x9c] = (AActor)0x0;
    if (param_2 == 0) {
      return;
    }
    (**(code **)(*(int *)in_ECX + 0x104))();
    pAVar5 = (APawn *)thunk_FUN_104b42a0();
    if (pAVar5 == (APawn *)0x0) {
      return;
    }
    iVar4 = APawn::CheckAbnormalState(pAVar5,0x100000);
    if (iVar4 == 0) {
      return;
    }
    (**(code **)(*(int *)in_ECX + 0x100))(0x60);
    piVar2 = *(int **)(pAVar5 + 0x718);
    if (piVar2 == (int *)0x0) {
      return;
    }
    if ((*(byte *)(piVar2 + 0x1c5) & 1) == 0) {
      return;
    }
    (**(code **)(*piVar2 + 0x100))(0x60);
    return;
  }
  if (param_1 == 6) {
    if (AVar1 == (AActor)0x6) {
      return;
    }
    in_ECX[0x9c] = (AActor)0x6;
    return;
  }
  switch(AVar1) {
  case (AActor)0x0:
    in_ECX[0x9c] = AVar6;
    if ((((param_1 == 2) || (param_1 == 4)) || (param_1 == 5)) || (param_1 == 0xb)) {
      *(undefined4 *)(in_ECX + 0xa4) = 0;
    }
    else if (param_2 != 0) {
      (**(code **)(*(int *)in_ECX + 0x104))();
      pAVar5 = (APawn *)thunk_FUN_104b42a0();
      if ((pAVar5 != (APawn *)0x0) &&
         (iVar4 = APawn::CheckAbnormalState(pAVar5,0x100000), iVar4 != 0)) {
        (**(code **)(*(int *)in_ECX + 0x100))(0x60);
        piVar2 = *(int **)(pAVar5 + 0x718);
        if ((piVar2 != (int *)0x0) && ((*(byte *)(piVar2 + 0x1c5) & 1) != 0)) {
          (**(code **)(*piVar2 + 0x100))(0x60);
          *(undefined4 *)(in_ECX + 0xa0) = 0x3f800000;
          goto switchD_1052edd5_caseD_6;
        }
      }
    }
    *(undefined4 *)(in_ECX + 0xa0) = 0x3f800000;
    goto switchD_1052edd5_caseD_6;
  case (AActor)0x1:
    if ((param_1 == 1) || (param_1 == 2)) goto switchD_1052edd5_caseD_6;
    fVar3 = 0.0;
    in_ECX[0x9c] = AVar6;
    break;
  case (AActor)0x2:
    if ((param_1 == 1) || (param_1 == 2)) goto switchD_1052edd5_caseD_6;
    in_ECX[0x9c] = AVar6;
    if (param_1 == 3) {
      (**(code **)(*(int *)in_ECX + 0xfc))();
      fVar3 = 0.0;
    }
    else {
LAB_1052ef19:
      fVar3 = *(float *)(in_ECX + 0xa0) - *(float *)(in_ECX + 0xa4);
    }
    break;
  case (AActor)0x3:
    if ((param_1 == 3) || (param_1 == 4)) goto switchD_1052edd5_caseD_6;
    if (param_1 == 2) {
      (**(code **)(*(int *)in_ECX + 0x100))(0);
    }
    fVar3 = 0.0;
    in_ECX[0x9c] = AVar6;
    break;
  case (AActor)0x4:
    if ((param_1 == 3) || (param_1 == 4)) goto switchD_1052edd5_caseD_6;
    in_ECX[0x9c] = AVar6;
    if (param_1 != 1) goto LAB_1052ef19;
    (**(code **)(*(int *)in_ECX + 0xfc))();
    fVar3 = 0.0;
    break;
  case (AActor)0x5:
    if (param_1 != 0xb) goto switchD_1052edd5_caseD_6;
    fVar3 = 0.0;
    in_ECX[0x9c] = (AActor)0xb;
    break;
  default:
    goto switchD_1052edd5_caseD_6;
  }
  *(float *)(in_ECX + 0xa4) = fVar3;
switchD_1052edd5_caseD_6:
  if (((in_ECX[0x9c] == (AActor)0x2) || (in_ECX[0x9c] == (AActor)0x4)) &&
     ((in_ECX[0x35] == (AActor)0x8 &&
      ((((byte)in_ECX[100] & 0x10) != 0 &&
       (this = *(ULevelBase **)(*(int *)(*(int *)(in_ECX + 0xe4) + 0x74) + 0x19c),
       this != (ULevelBase *)0x0)))))) {
    ULevelBase::AddL2AvtActors(this,in_ECX);
  }
  return;
}


// ==== 1052f070 FUN_1052f070

void FUN_1052f070(void)

{
  int iVar1;
  UClass *this;
  AActor *pAVar2;
  UObject *in_ECX;
  float fVar3;
  float fVar4;
  undefined4 *puStack_7c;
  float local_78;
  float local_74;
  float local_70;
  undefined8 local_6c;
  undefined4 local_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
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
  
  if (in_ECX[0xc2] != (UObject)0x2) {
    uStack_5c = 1;
    uStack_60 = 1;
    local_64 = 0;
    local_70 = (float)DAT_10c1ba5c;
    local_6c = (double)CONCAT44(DAT_10c1ba64,DAT_10c1ba60);
    local_78 = 4.160257e-29;
    (**(code **)(**(int **)(in_ECX + 0xe4) + 0xa8))();
    return;
  }
  uStack_5c = *(undefined4 *)(in_ECX + 0xe0);
  local_28 = 0;
  local_24 = 0;
  local_20 = 0;
  uStack_60 = 0;
  local_1c = 0;
  local_18 = 0;
  local_14 = 0;
  local_30 = 0;
  local_c = 0x3f800000;
  local_2c = 0;
  local_10 = 0;
  local_8 = 0xffffffff;
  local_4 = 0;
  local_64 = *(undefined4 *)(in_ECX + 0x2f4);
  local_6c = (double)CONCAT44(*(undefined4 *)(in_ECX + 0x2f0),*(undefined4 *)(in_ECX + 0x2f0));
  local_78 = (float)DAT_10c1ba5c;
  local_74 = (float)DAT_10c1ba60;
  local_70 = DAT_10c1ba64;
  puStack_7c = &local_30;
  iVar1 = (**(code **)(**(int **)(in_ECX + 0xe4) + 0xe0))();
  if (iVar1 == 0) {
    iVar1 = FVector::IsZero((FVector *)(in_ECX + 0x1d4));
    if (iVar1 == 0) {
      DAT_10c1ba64 = DAT_10c1ba64 + 2.0;
      *(uint *)(in_ECX + 0x14e8) = *(uint *)(in_ECX + 0x14e8) & 0xbfffffff;
    }
    else {
      *(uint *)(in_ECX + 0x14e8) = *(uint *)(in_ECX + 0x14e8) | 0x40000000;
    }
  }
  else {
    local_6c = (double)*(float *)(in_ECX + 0x2f0);
    this = UObject::GetClass(in_ECX);
    pAVar2 = UClass::GetDefaultActor(this);
    if (*(float *)(pAVar2 + 0x2f0) == (float)local_6c) {
      local_70 = *(float *)(in_ECX + 0x2f0) - 1.0;
      AActor::SetCollisionSize((AActor *)in_ECX,local_70,*(float *)(in_ECX + 0x2f4) - 1.0);
    }
    *(uint *)(in_ECX + 0x14e8) = *(uint *)(in_ECX + 0x14e8) | 0x40000000;
  }
  local_6c = *(double *)(in_ECX + 0x1bc);
  local_64 = *(undefined4 *)(in_ECX + 0x1c4);
  fVar4 = 1.4013e-45;
  fVar3 = 1.4013e-45;
  (**(code **)(**(int **)(in_ECX + 0xe4) + 0xa8))();
  if ((*(uint *)(in_ECX + 0x14e8) & 0x40000000) == 0) {
    puStack_7c = (undefined4 *)(0.0 - *(float *)(in_ECX + 0x1bc));
    local_78 = fVar3 - *(float *)(in_ECX + 0x1c0);
    local_74 = fVar4 - *(float *)(in_ECX + 0x1c4);
    fVar3 = FVector::Size((FVector *)&puStack_7c);
    if (4.0 < fVar3) {
      FVector::Normalize((FVector *)&puStack_7c);
      AActor::moveSmooth();
      return;
    }
  }
  return;
}


// ==== 1052f400 FUN_1052f400

void FUN_1052f400(int param_1)

{
  int iVar1;
  APlayerController *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1081a7e0;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  if (param_1 == 0) {
    ExceptionList = &local_10;
    appFailAssert("InPlayer!=NULL",".\\UnActor.cpp",0x6f2);
  }
  if (*(int *)(param_1 + 0x3c) != 0) {
    *(undefined4 *)(*(int *)(param_1 + 0x3c) + 0x560) = 0;
  }
  *(int *)(in_ECX + 0x560) = param_1;
  *(APlayerController **)(param_1 + 0x3c) = in_ECX;
  iVar1 = thunk_FUN_1032bbf0(param_1);
  if (iVar1 != 0) {
    APlayerController::eventInitInputSystem(in_ECX);
  }
  if ((*(char *)(*(int *)(in_ECX + 0xe0) + 0x5d4) == '\x03') &&
     (*(int *)(*(int *)(*(int *)(in_ECX + 0xe4) + 0x74) + 0x58) != 0)) {
    (**(code **)(**(int **)(*(int *)(*(int *)(in_ECX + 0xe4) + 0x74) + 0x58) + 0xec))();
  }
  if (*(int *)GLog_exref != 0) {
    UObject::GetFullName((UObject *)in_ECX,(ushort *)0x0);
    FOutputDevice::Logf2((FOutputDevice *)GLog_exref,*(EName *)GLog_exref,(ushort *)0x2f8);
  }
  ExceptionList = local_10;
  return;
}


// ==== 1052f4ef Catch@1052f4ef

void Catch_1052f4ef(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 1052f503 Catch@1052f503

void Catch_1052f503(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"APlayerController::SetPlayer");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1052f570 FUN_1052f570

void FUN_1052f570(void)

{
  int *piVar1;
  UObject *this;
  UClass *pUVar2;
  UObject *in_ECX;
  int iVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1081a7f0;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  UObject::PostLoad(in_ECX);
  pUVar2 = UObject::GetClass(in_ECX);
  if (((byte)pUVar2[0x4a4] & 0x20) != 0) {
    UObject::LoadLocalized(in_ECX);
  }
  if (*(UObject **)(in_ECX + 0x278) != (UObject *)0x0) {
    UObject::SetFlags(*(UObject **)(in_ECX + 0x278),1);
  }
  if ((*(int *)(in_ECX + 0x278) != 0) &&
     (this = *(UObject **)(*(int *)(in_ECX + 0x278) + 0x60), this != (UObject *)0x0)) {
    UObject::SetFlags(this,1);
  }
  for (iVar3 = 0; iVar3 < *(int *)(in_ECX + 500); iVar3 = iVar3 + 1) {
    piVar1 = (int *)(*(int *)(in_ECX + 0x1f0) + iVar3 * 4);
    if ((*piVar1 == 0) || (*(UObject **)(*piVar1 + 0x40) != in_ECX)) {
      thunk_FUN_10326200(iVar3,1);
      iVar3 = iVar3 + -1;
    }
  }
  *(undefined4 *)(in_ECX + 0x2d0) = *(undefined4 *)(in_ECX + 0x1c8);
  *(undefined4 *)(in_ECX + 0x2d4) = *(undefined4 *)(in_ECX + 0x1cc);
  *(undefined4 *)(in_ECX + 0x2d8) = *(undefined4 *)(in_ECX + 0x1d0);
  *(uint *)(in_ECX + 0x5c) = *(uint *)(in_ECX + 0x5c) | 0x40;
  ExceptionList = local_10;
  return;
}


// ==== 1052f65d Catch@1052f65d

void Catch_1052f65d(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_10914c48);
}


// ==== 1052f671 Catch@1052f671

void Catch_1052f671(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"AActor::PostLoad");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1052f6e0 FUN_1052f6e0

undefined4 FUN_1052f6e0(AActor *param_1)

{
  AActor *pAVar1;
  undefined1 *puVar2;
  undefined4 uVar3;
  AActor *in_ECX;
  undefined4 local_1c;
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  pAVar1 = param_1;
  puStack_c = &LAB_1081a800;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffd0;
  local_8 = 0;
  ExceptionList = &local_10;
  puVar2 = &stack0xffffffd0;
  if (in_ECX == (AActor *)0x0) {
    ExceptionList = &local_10;
    appFailAssert("Actor",".\\UnActor.cpp",0x939);
    puVar2 = local_14;
  }
  local_14 = puVar2;
  if (pAVar1 == (AActor *)0x0) {
    appFailAssert("Other",".\\UnActor.cpp",0x93a);
  }
  if (in_ECX == pAVar1) {
    appFailAssert("Actor!=Other",".\\UnActor.cpp",0x93b);
  }
  local_18 = 0;
  while( true ) {
    if (*(int *)(in_ECX + 0x160) <= local_18) {
      thunk_FUN_1037ae60(&param_1);
      AActor::eventTouch(in_ECX,pAVar1);
      local_1c = 0;
      uVar3 = thunk_FUN_1052eab0(&param_1,&local_1c);
      ExceptionList = local_10;
      return uVar3;
    }
    if (*(AActor **)(*(int *)(in_ECX + 0x15c) + local_18 * 4) == pAVar1) break;
    local_18 = local_18 + 1;
  }
  ExceptionList = local_10;
  return 1;
}


// ==== 1052f7ce Catch@1052f7ce

void Catch_1052f7ce(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x1c) = *(undefined4 *)(unaff_EBP + -0x20);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x1c,&DAT_10914c48);
}


// ==== 1052f7e2 Catch@1052f7e2

void Catch_1052f7e2(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"TouchTo");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1052f850 FUN_1052f850

void FUN_1052f850(undefined4 param_1)

{
  int iVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1081a810;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  iVar1 = FUN_1052f6e0(param_1);
  if (iVar1 != 0) {
    FUN_1052f6e0();
  }
  ExceptionList = local_10;
  return;
}


// ==== 1052f8af Catch@1052f8af

void Catch_1052f8af(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 1052f8c3 Catch@1052f8c3

void Catch_1052f8c3(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"AActor::BeginTouch");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1052f910 FUN_1052f910

void FUN_1052f910(int param_1)

{
  int iVar1;
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1081a820;
  local_10 = ExceptionList;
  local_8 = 0;
  if (param_1 != 0) {
    for (iVar1 = 0; iVar1 < *(int *)(in_ECX + 0x154); iVar1 = iVar1 + 1) {
      if (param_1 == *(int *)(*(int *)(in_ECX + 0x150) + iVar1 * 4)) {
        return;
      }
    }
    ExceptionList = &local_10;
    thunk_FUN_1037ae60(&param_1);
  }
  ExceptionList = local_10;
  return;
}


// ==== 1052f985 Catch@1052f985

void Catch_1052f985(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_10914c48);
}


// ==== 1052f999 Catch@1052f999

void Catch_1052f999(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"GainedChild");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1052f9e0 FUN_1052f9e0

undefined4 FUN_1052f9e0(UObject *param_1,int param_2)

{
  int iVar1;
  UObject *in_ECX;
  FOutputDevice *this;
  
  if (*(UObject **)(in_ECX + 0x104) != (UObject *)0x0) {
    iVar1 = UObject::IsA(*(UObject **)(in_ECX + 0x104),&USkeletalMesh::PrivateStaticClass);
    if (iVar1 != 0) {
      if ((-1 < param_2) && (param_1 != (UObject *)0x0)) {
        iVar1 = UObject::IsValid(param_1);
        if (iVar1 != 0) {
          iVar1 = thunk_FUN_104b4270(*(undefined4 *)(in_ECX + 0x104));
          *(undefined4 *)(param_1 + 0xd8) =
               *(undefined4 *)(param_2 * 0x40 + *(int *)(iVar1 + 0x208));
          (**(code **)(*(int *)param_1 + 0x16c))();
          param_1[0xdc] = (UObject)0x0;
          return 1;
        }
      }
      if (*(int *)GLog_exref != 0) {
        UObject::GetName(in_ECX);
        FOutputDevice::Logf2(this,*(ushort **)GLog_exref);
      }
    }
  }
  return 0;
}


// ==== 1052fb10 FUN_1052fb10

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1052fb10(void)

{
  int iVar1;
  int iVar2;
  UFunction *pUVar3;
  APawn *this;
  int *piVar4;
  AActor *in_ECX;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1081a830;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (((*(int *)GIsEditor_exref == 0) && (ExceptionList = &local_10, DAT_10c51044 != 0)) &&
     (ExceptionList = &local_10, *(int *)(DAT_10c51044 + 0x58) != 0)) {
    ExceptionList = &local_10;
    (**(code **)(**(int **)(DAT_10c51044 + 0x58) + 0x88))();
  }
  if (*(int *)(in_ECX + 0x380) != 0) {
    iVar2 = *(int *)(in_ECX + 0x380) + -1;
    while (-1 < iVar2) {
      if (*(int *)(in_ECX + 0x380) == 0) {
        local_8 = 0xffffffff;
        break;
      }
      iVar1 = iVar2 * 4;
      if (*(int *)(iVar1 + *(int *)(in_ECX + 0x37c)) == 0) {
LAB_1052fc29:
        local_8 = 0xffffffff;
        iVar2 = iVar2 + -1;
      }
      else {
        local_8 = 1;
        this = (APawn *)thunk_FUN_104b42a0(*(undefined4 *)(*(int *)(in_ECX + 0x37c) + iVar1));
        local_8 = 3;
        piVar4 = (int *)thunk_FUN_1052eb80(*(undefined4 *)(*(int *)(in_ECX + 0x37c) + iVar1));
        local_8 = 5;
        if (this != (APawn *)0x0) {
          APawn::SpelledTargetDestroyNotify(this,in_ECX);
          goto LAB_1052fc29;
        }
        if (piVar4 == (int *)0x0) {
          local_8 = 0xffffffff;
          iVar2 = iVar2 + -1;
        }
        else {
          (**(code **)(*piVar4 + 0x330))();
          local_8 = 0xffffffff;
          iVar2 = iVar2 + -1;
        }
      }
    }
  }
  FArray::Empty((FArray *)(in_ECX + 0x37c),4,0);
  iVar2 = *(int *)in_ECX;
  uVar8 = 0;
  uVar7 = 0;
  uVar6 = 0;
  uVar5 = _ENGINE_ClearL2Game;
  pUVar3 = UObject::FindFunctionChecked();
  (**(code **)(iVar2 + 0x10))(pUVar3,uVar5,uVar6,uVar7,uVar8);
  ExceptionList = local_10;
  return;
}


// ==== 1052fc79 Catch@1052fc79

void Catch_1052fc79(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x20) = *(undefined4 *)(unaff_EBP + -0x34);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x20,&DAT_10914c48);
}


// ==== 1052fc8d Catch@1052fc8d

void Catch_1052fc8d(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"check3");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1052fca9 Catch@1052fca9

void Catch_1052fca9(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x24) = *(undefined4 *)(unaff_EBP + -0x38);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x24,&DAT_10914c48);
}


// ==== 1052fcbd Catch@1052fcbd

void Catch_1052fcbd(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"check2");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1052fcc4 Catch@1052fcc4

void Catch_1052fcc4(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x28) = *(undefined4 *)(unaff_EBP + -0x3c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x28,&DAT_10914c48);
}


// ==== 1052fcd5 Catch@1052fcd5

void Catch_1052fcd5(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"check1");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1052fcdc Catch@1052fcdc

void Catch_1052fcdc(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x2c) = *(undefined4 *)(unaff_EBP + -0x40);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x2c,&DAT_10914c48);
}


// ==== 1052fced Catch@1052fced

void Catch_1052fced(void)

{
  int *piVar1;
  ushort *puVar2;
  int unaff_EBP;
  
  appUnwindf((ushort *)&DAT_10851d80,L"APawn::Destroy::SpelledNEffectActor");
  piVar1 = (int *)(*(int *)(*(int *)(unaff_EBP + -0x30) + 0x37c) + *(int *)(unaff_EBP + -0x14) * 4);
  if (*piVar1 == 0) {
    appUnwindf((ushort *)L"(Actor %s)",L"None");
  }
  else {
    puVar2 = UObject::GetName((UObject *)*piVar1);
    appUnwindf((ushort *)L"(Actor %s)",puVar2);
  }
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1052fdd0 FUN_1052fdd0

void FUN_1052fdd0(void)

{
  AActor *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1081a840;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  AActor::PostLoad(in_ECX);
  ExceptionList = local_10;
  return;
}


// ==== 1052fe15 Catch@1052fe15

void Catch_1052fe15(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 1052fe29 Catch@1052fe29

void Catch_1052fe29(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"ABrush::PostLoad");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1052fe70 FUN_1052fe70

uint FUN_1052fe70(UObject *param_1,uint param_2)

{
  ALevelInfo *pAVar1;
  int iVar2;
  uint uVar3;
  AActor *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1081a850;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  if ((((*(ULevel **)(in_ECX + 0xe4) != (ULevel *)0x0) &&
       (ExceptionList = &local_10, pAVar1 = ULevel::GetLevelInfo(*(ULevel **)(in_ECX + 0xe4)),
       in_ECX != (AActor *)pAVar1)) && (((byte)in_ECX[0x2e4] & 2) == 0)) && ((param_2 & 0x100) != 0)
     ) {
    ExceptionList = local_10;
    return 0;
  }
  if ((param_1 != (UObject *)0x0) && (((byte)param_1[0x74] & 0x10) != 0)) {
    ExceptionList = local_10;
    return 0;
  }
  if (((((byte)in_ECX[0x74] & 0x10) != 0) && (param_1 != (UObject *)0x0)) &&
     (iVar2 = UObject::IsA(param_1,&APawn::PrivateStaticClass), iVar2 == 0)) {
    ExceptionList = local_10;
    return 0;
  }
  if ((param_2 & 0x8000) == 0) {
    if ((param_2 & 0x2000) != 0) {
      if ((*(int *)(in_ECX + 0x38) != 0) && (in_ECX[0x35] == (AActor)0x8)) {
        ExceptionList = local_10;
        return 1;
      }
      if ((*(int *)(in_ECX + 0x104) != 0) && (in_ECX[0x35] == (AActor)0x2)) {
        ExceptionList = local_10;
        return 1;
      }
    }
    if ((param_2 & 0x100) == 0) {
      if (((byte)in_ECX[0x74] & 2) != 0) {
        ExceptionList = local_10;
        return param_2 & 0x80;
      }
      if ((param_2 & 0x10) != 0) {
        if ((param_2 & 0x20) == 0) {
          if ((param_2 & 0x40) == 0) {
            ExceptionList = local_10;
            return 1;
          }
          if ((param_1 != (UObject *)0x0) &&
             (iVar2 = AActor::IsBlockedBy((AActor *)param_1,in_ECX), iVar2 != 0)) {
            ExceptionList = local_10;
            return 1;
          }
        }
        else {
          uVar3 = *(uint *)(in_ECX + 0x2f8);
          if (((uVar3 & 0x10) != 0) || (((uVar3 & 4) != 0 && ((uVar3 & 8) != 0)))) {
            ExceptionList = local_10;
            return 1;
          }
        }
      }
      ExceptionList = local_10;
      return 0;
    }
    uVar3 = *(uint *)(in_ECX + 0x2e4) >> 1;
  }
  else {
    uVar3 = *(uint *)(in_ECX + 0x74) >> 2;
  }
  ExceptionList = local_10;
  return uVar3 & 1;
}


// ==== 1052ffef Catch@1052ffef

void Catch_1052ffef(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 10530003 Catch@10530003

void Catch_10530003(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"AActor::ShouldTrace");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10530090 FUN_10530090

void FUN_10530090(void)

{
  int in_ECX;
  int iVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1081a860;
  local_10 = ExceptionList;
  local_8 = 0;
  iVar1 = *(int *)(in_ECX + 500);
  ExceptionList = &local_10;
  while (iVar1 = iVar1 + -1, 0 < iVar1) {
    if (*(int *)(*(int *)(in_ECX + 0x1f0) + iVar1 * 4) == 0) {
      thunk_FUN_10326200(iVar1,1);
    }
  }
  ExceptionList = local_10;
  return;
}


// ==== 105300fd Catch@105300fd

void Catch_105300fd(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_10914c48);
}


// ==== 10530111 Catch@10530111

void Catch_10530111(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"AActor::CompactAttached");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10530160 FUN_10530160

int FUN_10530160(AActor *param_1,uint param_2)

{
  int iVar1;
  AVolume *in_ECX;
  
  if ((param_2 & 0x20000) != 0) {
    return 0;
  }
  iVar1 = AVolume::ShouldTrace(in_ECX,param_1,param_2);
  return iVar1;
}


// ==== 10530180 FUN_10530180

FArchive * FUN_10530180(FArchive *param_1,FArray *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1081a870;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffc8;
  local_8 = 0;
  ExceptionList = &local_10;
  FArray::CountBytes(param_2,param_1,4);
  iVar1 = FArchive::IsLoading(param_1);
  if (iVar1 == 0) {
    operator<<(param_1,(FCompactIndex *)(param_2 + 4));
    for (iVar1 = 0; iVar1 < *(int *)(param_2 + 4); iVar1 = iVar1 + 1) {
      operator<<(param_1,*(FStaticProjectorInfo **)(*(int *)param_2 + iVar1 * 4));
    }
  }
  else {
    operator<<(param_1,(FCompactIndex *)&local_18);
    for (iVar1 = 0; iVar1 < *(int *)(param_2 + 4); iVar1 = iVar1 + 1) {
    }
    FArray::Empty(param_2,4,local_18);
    for (iVar1 = 0; iVar1 < local_18; iVar1 = iVar1 + 1) {
      puVar2 = (undefined4 *)thunk_FUN_103707d0(4,param_2);
      operator<<(param_1,(FStaticProjectorInfo *)*puVar2);
    }
  }
  ExceptionList = local_10;
  return param_1;
}


// ==== 10530252 Catch@10530252

void Catch_10530252(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x24) = *(undefined4 *)(unaff_EBP + -0x28);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x24,&DAT_10914c48);
}


// ==== 10530266 Catch@10530266

void Catch_10530266(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"TArray<<");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 105302d0 FUN_105302d0

FArchive * FUN_105302d0(FArchive *param_1,FArray *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1081a880;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffc8;
  local_8 = 0;
  ExceptionList = &local_10;
  FArray::CountBytes(param_2,param_1,4);
  iVar1 = FArchive::IsLoading(param_1);
  if (iVar1 == 0) {
    operator<<(param_1,(FCompactIndex *)(param_2 + 4));
    for (iVar1 = 0; iVar1 < *(int *)(param_2 + 4); iVar1 = iVar1 + 1) {
      operator<<(param_1,*(FProjectorRenderInfo **)(*(int *)param_2 + iVar1 * 4));
    }
  }
  else {
    operator<<(param_1,(FCompactIndex *)&local_18);
    for (iVar1 = 0; iVar1 < *(int *)(param_2 + 4); iVar1 = iVar1 + 1) {
    }
    FArray::Empty(param_2,4,local_18);
    for (iVar1 = 0; iVar1 < local_18; iVar1 = iVar1 + 1) {
      puVar2 = (undefined4 *)thunk_FUN_10370dd0(4,param_2);
      operator<<(param_1,(FProjectorRenderInfo *)*puVar2);
    }
  }
  ExceptionList = local_10;
  return param_1;
}


// ==== 105303a2 Catch@105303a2

void Catch_105303a2(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x24) = *(undefined4 *)(unaff_EBP + -0x28);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x24,&DAT_10914c48);
}


// ==== 105303b6 Catch@105303b6

void Catch_105303b6(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"TArray<<");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10530420 FUN_10530420

void FUN_10530420(void)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1081a890;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  thunk_FUN_1052ebe0(&stack0x00000004);
  ExceptionList = local_10;
  return;
}


// ==== 1053046e Catch@1053046e

void Catch_1053046e(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 10530482 Catch@10530482

void Catch_10530482(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"UGlobalTempObjects::AddGlobalObject");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 105304c0 FUN_105304c0

int FUN_105304c0(void)

{
  int iVar1;
  UPackage *pUVar2;
  int in_ECX;
  int local_4;
  
  if (DAT_10c41ce8 == 0) {
    local_4 = in_ECX;
    FName::FName((FName *)&local_4,0);
    iVar1 = UStruct::IsChildOf((UStruct *)&UL2ColorModifier::PrivateStaticClass,
                               (UStruct *)&UL2ColorModifier::PrivateStaticClass);
    if (iVar1 == 0) {
      appFailAssert("Class->IsChildOf(T::StaticClass())",
                    "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnObjBas.h",0x4d9);
    }
    pUVar2 = UObject::GetTransientPackage();
    DAT_10c41ce8 = (int)UObject::StaticConstructObject
                                  (&UL2ColorModifier::PrivateStaticClass,pUVar2,local_4,0,0,
                                   *(undefined4 *)GError_exref,0);
    thunk_FUN_10530420(&DAT_10c41ce8);
  }
  *(uint *)(DAT_10c41ce8 + 0x580) =
       *(uint *)(DAT_10c41ce8 + 0x580) ^
       (*(uint *)(in_ECX + 0x3a0) >> 1 ^ *(uint *)(DAT_10c41ce8 + 0x580)) & 1;
  *(undefined4 *)(DAT_10c41ce8 + 0x57c) = *(undefined4 *)(in_ECX + 0x3a4);
  *(uint *)(DAT_10c41ce8 + 0x580) =
       *(uint *)(DAT_10c41ce8 + 0x580) ^
       (*(uint *)(in_ECX + 0x3a0) >> 1 ^ *(uint *)(DAT_10c41ce8 + 0x580)) & 2;
  *(undefined1 *)(DAT_10c41ce8 + 0x584) = *(undefined1 *)(in_ECX + 0x3a8);
  *(undefined1 *)(DAT_10c41ce8 + 0x585) = *(undefined1 *)(in_ECX + 0x3ac);
  return DAT_10c41ce8;
}


// ==== 10530600 FUN_10530600

void FUN_10530600(AActor *param_1,int param_2)

{
  AActor *this;
  undefined1 *puVar1;
  int iVar2;
  AActor *in_ECX;
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  this = param_1;
  puStack_c = &LAB_1081a8a0;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffd4;
  local_8 = 0;
  ExceptionList = &local_10;
  puVar1 = &stack0xffffffd4;
  if (param_1 == in_ECX) {
    ExceptionList = &local_10;
    appFailAssert("Other!=this",".\\UnActor.cpp",0x96c);
    puVar1 = local_14;
  }
  local_14 = puVar1;
  local_18 = 0;
  if (param_2 == 0) {
    iVar2 = thunk_FUN_1052eab0(&param_1,&local_18);
    if (iVar2 != 0) {
      AActor::eventUnTouch(in_ECX,this);
    }
  }
  thunk_FUN_104e9650(&param_1);
  iVar2 = thunk_FUN_1052eab0(&param_1,&local_18);
  if (iVar2 != 0) {
    AActor::eventUnTouch(this,in_ECX);
    thunk_FUN_104e9650(&param_2);
  }
  ExceptionList = local_10;
  return;
}


// ==== 105306d0 Catch@105306d0

void Catch_105306d0(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_10914c48);
}


// ==== 105306e4 Catch@105306e4

void Catch_105306e4(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"AActor::EndTouch");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10530750 FUN_10530750

void FUN_10530750(FArchive *param_1)

{
  int iVar1;
  undefined4 uVar2;
  UObject *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1081a8b0;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  UObject::Serialize(in_ECX,param_1);
  iVar1 = FArchive::IsLoading(param_1);
  if (iVar1 == 0) {
    iVar1 = FArchive::IsSaving(param_1);
    if (iVar1 == 0) {
      uVar2 = thunk_FUN_105302d0(param_1,in_ECX + 600,in_ECX + 0x264);
      thunk_FUN_10530180(uVar2);
    }
  }
  ExceptionList = local_10;
  return;
}


// ==== 105307d6 Catch@105307d6

void Catch_105307d6(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 105307ea Catch@105307ea

void Catch_105307ea(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"AActor::Serialize");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10530840 FUN_10530840

void FUN_10530840(void)

{
  int in_ECX;
  int iVar1;
  undefined1 local_4 [4];
  
  *(int *)(in_ECX + 0x4c) = *(int *)(in_ECX + 0x4c) + 1;
  if (((*(int *)GIsEditor_exref == 0) && (*(int *)(in_ECX + 0x2b8) != 0)) &&
     (iVar1 = 0, 0 < *(int *)(in_ECX + 0x114))) {
    do {
      thunk_FUN_104e9650(local_4);
      iVar1 = iVar1 + 1;
    } while (iVar1 < *(int *)(in_ECX + 0x114));
  }
  return;
}


// ==== 105308e0 FUN_105308e0

void FUN_105308e0(void)

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
  AActor *in_ECX;
  int iVar11;
  undefined4 *puVar12;
  float10 fVar13;
  double dVar14;
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
  float local_10;
  float local_c;
  float local_8;
  
  pvVar4 = ExceptionList;
  puStack_88 = &LAB_1081a8c8;
  local_8c = ExceptionList;
  local_90 = &stack0xffffff4c;
  local_84 = 0;
  piVar1 = (int *)(DAT_10ddd7e0 + DAT_10dddb18 * 4);
  uVar3 = rdtsc();
  ExceptionList = &local_8c;
  *piVar1 = *piVar1 - (int)uVar3;
  if (((byte)in_ECX[100] & 0x80) != 0) {
    ExceptionList = pvVar4;
    return;
  }
  puVar5 = &stack0xffffff4c;
  if (*(int *)(in_ECX + 0x44) == 0) {
    uStack_c4 = 0x10530947;
    appFailAssert("ActorRenderData",".\\UnActor.cpp",0x9d4);
    puVar5 = local_90;
  }
  local_90 = puVar5;
  FDynamicActor::Update(*(FDynamicActor **)(in_ECX + 0x44));
  local_c = 0.0;
  iVar7 = *(int *)(in_ECX + 0x2cc);
  if (((*(int *)GIsL2Seamless_exref == 0) || (*(int *)GIsEditor_exref != 0)) ||
     (((byte)in_ECX[0x98] & 2) == 0)) {
    *(undefined4 *)(in_ECX + 0x2cc) = *(undefined4 *)(in_ECX + 0xe4);
  }
  else {
    pUVar6 = ULevel::GetCurrentSWLevel
                       (*(ULevel **)(*(int *)(*(int *)(in_ECX + 0xe4) + 0x74) + 0x19c),
                        (FVector *)(in_ECX + 0x1bc));
    *(ULevel **)(in_ECX + 0x2cc) = pUVar6;
    if (pUVar6 == (ULevel *)0x0) {
      *(undefined4 *)(in_ECX + 0x2cc) = *(undefined4 *)(in_ECX + 0xe4);
    }
  }
  if (iVar7 != *(int *)(in_ECX + 0x2cc)) {
    local_c = 1.4013e-45;
  }
  if (((*(int *)GIsEditor_exref == 0) && (*(char *)(*(int *)(in_ECX + 0x44) + 0xe4) != '\0')) &&
     ((iVar7 = thunk_FUN_10525d30(), iVar7 != 0 &&
      ((iVar7 = thunk_FUN_10525d30(), iVar7 != 0 && (local_c == 0.0)))))) {
    pAVar8 = AActor::GetAmbientLightingActor(in_ECX);
    if (pAVar8[0x2b4] == (AActor)0xff) {
      dVar14 = appSin((double)(*(float *)(*(int *)(in_ECX + 0xe0) + 0x4bc) * 8.0));
      fVar13 = (float10)dVar14 * (float10)0.20000000298023224 + (float10)0.25;
    }
    else {
      pAVar8 = AActor::GetAmbientLightingActor(in_ECX);
      fVar13 = (float10)(byte)pAVar8[0x2b4] / (float10)255.0;
    }
    local_9c[0] = (float)fVar13;
    iVar7 = *(int *)(in_ECX + 0x44);
    local_5c = *(float *)(iVar7 + 0xe8) + local_9c[0];
    local_58 = *(float *)(iVar7 + 0xec) + local_9c[0];
    local_54 = local_9c[0] + *(float *)(iVar7 + 0xf0);
    local_50 = 0;
    local_3c = local_5c;
    local_38 = local_58;
    local_34 = local_54;
    local_10 = local_58;
    local_c = local_5c;
    local_8 = local_54;
    puVar9 = (undefined4 *)FColor::FColor((FColor *)&local_8,(FPlane *)&local_5c);
    *(undefined4 *)(*(int *)(in_ECX + 0x44) + 0xb8) = *puVar9;
    if (((*(int *)GIsEditor_exref == 0) && (in_ECX[0x35] == (AActor)0xb)) &&
       (*(int *)(in_ECX + 0x2b8) != 0)) {
      for (iVar7 = 0; iVar7 < *(int *)(in_ECX + 0x114); iVar7 = iVar7 + 1) {
        local_44 = iVar7;
        thunk_FUN_104ed3d0();
      }
    }
    piVar1 = (int *)(DAT_10ddd7e0 + DAT_10dddb18 * 4);
    uVar3 = rdtsc();
    *piVar1 = *piVar1 + (int)uVar3 + -0xc;
    ExceptionList = local_8c;
    return;
  }
  AVar2 = in_ECX[0x34];
  if (AVar2 == (AActor)0x5) {
    FBox::GetCenterAndExtents
              ((FBox *)(*(int *)(in_ECX + 0x44) + 0x8c),(FVector *)&local_1c,(FVector *)&local_3c);
    *(undefined1 *)(*(int *)(in_ECX + 0x44) + 0xe4) = 1;
    iVar7 = *(int *)(in_ECX + 0x44);
    *(float *)(iVar7 + 0xd8) = local_1c;
    *(float *)(iVar7 + 0xdc) = local_18;
    *(float *)(iVar7 + 0xe0) = local_14;
    iVar7 = *(int *)(in_ECX + 0x44);
    *(undefined4 *)(iVar7 + 0xcc) = *(undefined4 *)(iVar7 + 0xd8);
    *(undefined4 *)(iVar7 + 0xd0) = *(undefined4 *)(iVar7 + 0xdc);
    *(undefined4 *)(iVar7 + 0xd4) = *(undefined4 *)(iVar7 + 0xe0);
    local_8 = FVector::Size((FVector *)&local_3c);
    local_8 = local_8 * 1.2;
  }
  else {
    puVar9 = (undefined4 *)(*(int *)(in_ECX + 0x44) + 0x8c);
    puVar12 = (undefined4 *)(*(int *)(in_ECX + 0x44) + 0xcc);
    for (iVar7 = 7; iVar7 != 0; iVar7 = iVar7 + -1) {
      *puVar12 = *puVar9;
      puVar9 = puVar9 + 1;
      puVar12 = puVar12 + 1;
    }
    if (AVar2 == (AActor)0x0) goto LAB_10530c37;
  }
  puVar9 = (undefined4 *)FBox::ExpandBy((FBox *)(*(int *)(in_ECX + 0x44) + 0xcc),(float)local_78);
  puVar12 = (undefined4 *)(*(int *)(in_ECX + 0x44) + 0xcc);
  for (iVar7 = 7; iVar7 != 0; iVar7 = iVar7 + -1) {
    *puVar12 = *puVar9;
    puVar9 = puVar9 + 1;
    puVar12 = puVar12 + 1;
  }
LAB_10530c37:
  uStack_c4 = 0x10530c4c;
  FArray::Empty((FArray *)(in_ECX + 0x110),4,*(int *)(in_ECX + 0x114));
  if (in_ECX[0x35] == (AActor)0xa) {
    uStack_c4 = 0x10530c69;
    FBox::GetCenterAndExtents
              ((FBox *)(*(int *)(in_ECX + 0x44) + 0xcc),(FVector *)local_9c,(FVector *)&local_1c);
    local_8 = FVector::Size((FVector *)&local_1c);
    local_8 = local_8 * 0.05;
    uStack_c4 = 0x10530c95;
    puVar9 = (undefined4 *)FBox::ExpandBy((FBox *)(*(int *)(in_ECX + 0x44) + 0xcc),(float)local_78);
    puVar12 = (undefined4 *)(*(int *)(in_ECX + 0x44) + 0xcc);
    for (iVar7 = 7; iVar7 != 0; iVar7 = iVar7 + -1) {
      *puVar12 = *puVar9;
      puVar9 = puVar9 + 1;
      puVar12 = puVar12 + 1;
    }
  }
  if (((*(int *)GIsL2Seamless_exref == 0) || (*(int *)GIsEditor_exref != 0)) ||
     (((byte)in_ECX[0x98] & 2) == 0)) {
    iVar7 = *(int *)(in_ECX + 0xe4);
  }
  else {
    pUVar6 = ULevel::GetCurrentSWLevel
                       (*(ULevel **)(*(int *)(*(int *)(in_ECX + 0xe4) + 0x74) + 0x19c),
                        (FVector *)(in_ECX + 0x1bc));
    *(ULevel **)(in_ECX + 0x2cc) = pUVar6;
    if (pUVar6 == (ULevel *)0x0) {
      *(undefined4 *)(in_ECX + 0x2cc) = *(undefined4 *)(in_ECX + 0xe4);
    }
    iVar7 = *(int *)(in_ECX + 0x2cc);
  }
  puVar9 = (undefined4 *)(*(int *)(in_ECX + 0x44) + 0xcc);
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
  iVar7 = FName::operator!=((FName *)(in_ECX + 0x58),(FName *)&local_8);
  if (iVar7 != 0) {
    for (iVar7 = 0; local_30 = iVar7, iVar7 < *(int *)(in_ECX + 0x114); iVar7 = iVar7 + 1) {
      if (((*(int *)GIsL2Seamless_exref == 0) || (*(int *)GIsEditor_exref != 0)) ||
         (((byte)in_ECX[0x98] & 2) == 0)) {
        pUVar6 = *(ULevel **)(in_ECX + 0xe4);
      }
      else {
        if (*(int *)(in_ECX + 0x2cc) == 0) {
          *(undefined4 *)(in_ECX + 0x2cc) = *(undefined4 *)(in_ECX + 0xe4);
        }
        pUVar6 = *(ULevel **)(in_ECX + 0x2cc);
      }
      pAVar10 = ULevel::GetZoneActor
                          (pUVar6,*(int *)(*(int *)(*(int *)(pUVar6 + 0xc0) + 0xcc) +
                                          *(int *)(*(int *)(in_ECX + 0x110) + iVar7 * 4) * 0x14));
      iVar11 = FName::operator!=((FName *)(pAVar10 + 0x10c),(FName *)(in_ECX + 0x58));
      if (iVar11 != 0) {
        thunk_FUN_103256b0(iVar7,1);
        iVar7 = iVar7 + -1;
      }
    }
  }
  local_2c = 0.0;
  local_28 = 0.0;
  local_24 = 0.0;
  iVar7 = UObject::IsA((UObject *)in_ECX,&AZoneInfo::PrivateStaticClass);
  if (iVar7 == 0) {
    *(uint *)(in_ECX + 0x13c) = *(uint *)(in_ECX + 0x13c) & 0xfffffffe;
  }
  for (local_20 = 0; local_20 < *(int *)(in_ECX + 0x114); local_20 = local_20 + 1) {
    pAVar10 = ULevel::GetZoneActor
                        (*(ULevel **)(in_ECX + 0x2cc),
                         *(int *)(*(int *)(*(int *)(*(ULevel **)(in_ECX + 0x2cc) + 0xc0) + 0xcc) +
                                 *(int *)(*(int *)(in_ECX + 0x110) + local_20 * 4) * 0x14));
    fVar13 = (float10)thunk_FUN_104a4940(local_2c);
    local_2c = (float)fVar13;
    fVar13 = (float10)thunk_FUN_104a4940(local_28);
    local_28 = (float)fVar13;
    fVar13 = (float10)thunk_FUN_104a4940(local_24);
    local_24 = (float)fVar13;
    iVar7 = UObject::IsA((UObject *)in_ECX,&AZoneInfo::PrivateStaticClass);
    if ((iVar7 == 0) && (((byte)pAVar10[0x13c] & 1) != 0)) {
      *(uint *)(in_ECX + 0x13c) = *(uint *)(in_ECX + 0x13c) | 1;
    }
  }
  iVar7 = *(int *)(in_ECX + 0x44);
  *(float *)(iVar7 + 0xe8) = local_2c;
  *(float *)(iVar7 + 0xec) = local_28;
  *(float *)(iVar7 + 0xf0) = local_24;
  pAVar8 = AActor::GetAmbientLightingActor(in_ECX);
  if (pAVar8[0x2b4] == (AActor)0xff) {
    dVar14 = appSin((double)(*(float *)(*(int *)(in_ECX + 0xe0) + 0x4bc) * 8.0));
    fVar13 = (float10)dVar14 * (float10)0.20000000298023224 + (float10)0.25;
  }
  else {
    pAVar8 = AActor::GetAmbientLightingActor(in_ECX);
    fVar13 = (float10)(byte)pAVar8[0x2b4] / (float10)255.0;
  }
  local_64 = (float)fVar13;
  iVar7 = *(int *)(in_ECX + 0x44);
  local_6c = *(float *)(iVar7 + 0xe8) + local_64;
  local_68 = *(float *)(iVar7 + 0xec) + local_64;
  local_64 = local_64 + *(float *)(iVar7 + 0xf0);
  local_60 = 0;
  local_1c = local_6c;
  local_18 = local_68;
  local_14 = local_64;
  local_10 = local_68;
  local_c = local_64;
  local_8 = local_6c;
  puVar9 = (undefined4 *)FColor::FColor((FColor *)&local_8,(FPlane *)&local_6c);
  *(undefined4 *)(*(int *)(in_ECX + 0x44) + 0xb8) = *puVar9;
  if (((*(int *)GIsEditor_exref == 0) && (in_ECX[0x35] == (AActor)0xb)) &&
     (*(int *)(in_ECX + 0x2b8) != 0)) {
    for (iVar7 = 0; iVar7 < *(int *)(in_ECX + 0x114); iVar7 = iVar7 + 1) {
      local_4c = iVar7;
      thunk_FUN_104ed3d0();
    }
  }
  piVar1 = (int *)(DAT_10ddd7e0 + DAT_10dddb18 * 4);
  uVar3 = rdtsc();
  *piVar1 = *piVar1 + (int)uVar3 + -0xc;
  ExceptionList = local_8c;
  return;
}


// ==== 1053105e Catch@1053105e

void Catch_1053105e(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + 0x38) = *(undefined4 *)(unaff_EBP + 4);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + 0x38,&DAT_10914c48);
}


// ==== 10531072 Catch@10531072

void Catch_10531072(void)

{
  ushort *puVar1;
  int unaff_EBP;
  
  appUnwindf((ushort *)&DAT_10851d80,L"AActor::UpdateRenderData");
  puVar1 = UObject::GetFullName(*(UObject **)(unaff_EBP + 0x40),(ushort *)0x0);
  appUnwindf((ushort *)&DAT_10851d80,puVar1);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 105312a0 FUN_105312a0

void FUN_105312a0(int param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1081a8e0;
  local_10 = ExceptionList;
  local_8 = 0;
  if (param_1 != 0) {
    ExceptionList = &local_10;
    thunk_FUN_104e9650(&param_1);
  }
  ExceptionList = local_10;
  return;
}


// ==== 105312f7 Catch@105312f7

void Catch_105312f7(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 1053130b Catch@1053130b

void Catch_1053130b(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"LostChild");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10531350 FUN_10531350

void FUN_10531350(AActor *param_1)

{
  AActor *pAVar1;
  undefined1 *puVar2;
  AActor *pAVar3;
  int iVar4;
  undefined4 *puVar5;
  FMatrix *pFVar6;
  FMatrix *pFVar7;
  AActor *in_ECX;
  undefined4 *puVar8;
  int in_stack_00000014;
  undefined4 auStack_294 [15];
  undefined4 uStack_258;
  FMatrix *pFStack_254;
  undefined4 auStack_250 [12];
  undefined4 uStack_220;
  undefined4 uStack_21c;
  undefined4 uStack_218;
  undefined4 uStack_214;
  FMatrix *pFStack_210;
  undefined4 auStack_20c [12];
  undefined4 uStack_1dc;
  AActor *local_1d8;
  AActor *local_1d4;
  FMatrix local_1c0 [64];
  FMatrix local_180 [64];
  FMatrix local_140 [64];
  FMatrix local_100 [64];
  undefined4 local_c0 [16];
  FMatrix local_80 [72];
  AActor *local_38;
  float local_34;
  AActor *local_30;
  AActor *local_28;
  AActor *local_24;
  float local_20;
  float local_1c;
  AActor *local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  pAVar1 = param_1;
  puStack_c = &LAB_1081a952;
  local_10 = ExceptionList;
  local_14 = &stack0xfffffe34;
  local_8 = 0;
  pAVar3 = param_1;
  while( true ) {
    if (pAVar3 == (AActor *)0x0) {
      pAVar3 = *(AActor **)(in_ECX + 0x40);
      ExceptionList = &local_10;
      puVar2 = &stack0xfffffe34;
      if (param_1 != pAVar3) {
        ExceptionList = &local_10;
        puVar2 = &stack0xfffffe34;
        if ((pAVar3 != (AActor *)0x0) &&
           (ExceptionList = &local_10, puVar2 = &stack0xfffffe34, ((byte)pAVar3[0x74] & 2) == 0)) {
          local_1d4 = (AActor *)0x105313ba;
          ExceptionList = &local_10;
          param_1 = in_ECX;
          thunk_FUN_104e9650();
          local_1d4 = (AActor *)0x105313c3;
          AActor::eventDetach(*(AActor **)(in_ECX + 0x40),in_ECX);
          puVar2 = local_14;
        }
        local_14 = puVar2;
        *(AActor **)(in_ECX + 0x40) = pAVar1;
        if ((pAVar1 != (AActor *)0x0) && (((byte)pAVar1[0x74] & 2) == 0)) {
          local_1d4 = (AActor *)0x105313e3;
          FName::FName((FName *)&param_1,0);
          local_1d4 = (AActor *)0x105313f3;
          iVar4 = FName::operator==((FName *)(in_ECX + 0xd8),(FName *)&param_1);
          if ((iVar4 != 0) && ((*(uint *)(in_ECX + 100) & 0x4000) == 0)) {
            if ((((byte)in_ECX[0x214] & 1) == 0) || (in_ECX[0xc2] == (AActor)0x4)) {
              iVar4 = *(int *)(in_ECX + 0x40);
              param_1 = (AActor *)(*(float *)(in_ECX + 0x1bc) - *(float *)(iVar4 + 0x1bc));
              local_34 = *(float *)(in_ECX + 0x1c0) - *(float *)(iVar4 + 0x1c0);
              local_30 = (AActor *)(*(float *)(in_ECX + 0x1c4) - *(float *)(iVar4 + 0x1c4));
              *(AActor **)(in_ECX + 0x1fc) = param_1;
              *(float *)(in_ECX + 0x200) = local_34;
              *(AActor **)(in_ECX + 0x204) = local_30;
              local_38 = param_1;
              local_1c = local_34;
              local_18 = local_30;
              AActor::UpdateRelativeRotation(in_ECX);
            }
            if (((byte)in_ECX[0x214] & 1) != 0) {
              local_1d8 = *(AActor **)(*(int *)(in_ECX + 0x40) + 0x1c8);
              local_1d4 = *(AActor **)(*(int *)(in_ECX + 0x40) + 0x1cc);
              uStack_1dc = 0x105314ab;
              puVar5 = (undefined4 *)thunk_FUN_10327040();
              local_8 = local_8 & 0xffffff00;
              puVar8 = puVar5;
              pFVar6 = local_140;
              for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 + -1) {
                *(undefined4 *)pFVar6 = *puVar8;
                puVar8 = puVar8 + 1;
                pFVar6 = pFVar6 + 4;
              }
              puVar8 = local_c0;
              for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 + -1) {
                *puVar8 = *puVar5;
                puVar5 = puVar5 + 1;
                puVar8 = puVar8 + 1;
              }
              local_8._0_1_ = 2;
              iVar4 = *(int *)(in_ECX + 0x40);
              param_1 = (AActor *)-*(float *)(iVar4 + 0x1bc);
              local_1d4 = (AActor *)-*(float *)(iVar4 + 0x1c0);
              local_20 = -*(float *)(iVar4 + 0x1c4);
              uStack_1dc = 0x10531523;
              local_1d8 = param_1;
              local_28 = param_1;
              local_24 = local_1d4;
              local_1c = local_20;
              local_18 = local_1d4;
              pFVar6 = (FMatrix *)thunk_FUN_10326fb0();
              local_8._0_1_ = 3;
              puVar5 = local_c0;
              puVar8 = auStack_20c;
              for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 + -1) {
                *puVar8 = *puVar5;
                puVar5 = puVar5 + 1;
                puVar8 = puVar8 + 1;
              }
              pFStack_210 = local_180;
              uStack_214 = 0x10531548;
              FMatrix::operator*(pFVar6);
              local_8._0_1_ = 5;
              uStack_214 = 0x10531557;
              thunk_FUN_103284c0();
              local_8._0_1_ = 6;
              uStack_214 = 0x10531567;
              FMatrix::~FMatrix(local_140);
              local_8._0_1_ = 7;
              uStack_214 = 0x10531573;
              thunk_FUN_10328510();
              uStack_21c = *(undefined4 *)(in_ECX + 0x1bc);
              uStack_218 = *(undefined4 *)(in_ECX + 0x1c0);
              uStack_214 = *(undefined4 *)(in_ECX + 0x1c4);
              uStack_220 = 0x1053159d;
              puVar5 = (undefined4 *)thunk_FUN_10326fb0();
              local_8 = (uint)local_8._1_3_ << 8;
              puVar8 = puVar5;
              pFVar6 = local_100;
              for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 + -1) {
                *(undefined4 *)pFVar6 = *puVar8;
                puVar8 = puVar8 + 1;
                pFVar6 = pFVar6 + 4;
              }
              pFVar6 = local_80;
              for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 + -1) {
                *(undefined4 *)pFVar6 = *puVar5;
                puVar5 = puVar5 + 1;
                pFVar6 = pFVar6 + 4;
              }
              local_8._0_1_ = 9;
              uStack_21c = *(undefined4 *)(in_ECX + 0x1c8);
              uStack_218 = *(undefined4 *)(in_ECX + 0x1cc);
              uStack_214 = *(undefined4 *)(in_ECX + 0x1d0);
              uStack_220 = 0x105315ea;
              pFVar7 = (FMatrix *)thunk_FUN_105263f0();
              local_8._0_1_ = 10;
              pFVar6 = local_80;
              puVar5 = auStack_250;
              for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 + -1) {
                *puVar5 = *(undefined4 *)pFVar6;
                pFVar6 = pFVar6 + 4;
                puVar5 = puVar5 + 1;
              }
              pFStack_254 = local_1c0;
              uStack_258 = 0x1053160c;
              FMatrix::operator*(pFVar7);
              local_8._0_1_ = 0xc;
              uStack_258 = 0x1053161b;
              thunk_FUN_10526040();
              local_8._0_1_ = 0xd;
              uStack_258 = 0x1053162b;
              FMatrix::~FMatrix(local_100);
              local_8 = CONCAT31(local_8._1_3_,0xe);
              uStack_258 = 0x1053163a;
              thunk_FUN_103284c0();
              pFVar6 = local_180;
              puVar5 = auStack_294;
              for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 + -1) {
                *puVar5 = *(undefined4 *)pFVar6;
                pFVar6 = pFVar6 + 4;
                puVar5 = puVar5 + 1;
              }
              puVar5 = (undefined4 *)FMatrix::operator*(local_1c0,local_80);
              local_8._1_3_ = (uint3)(local_8 >> 8);
              pAVar3 = in_ECX + 0x218;
              for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 + -1) {
                *(undefined4 *)pAVar3 = *puVar5;
                puVar5 = puVar5 + 1;
                pAVar3 = pAVar3 + 4;
              }
              local_8._0_1_ = 0xe;
              FMatrix::~FMatrix(local_80);
              local_8._0_1_ = 7;
              FMatrix::~FMatrix(local_1c0);
              local_8 = (uint)local_8._1_3_ << 8;
              FMatrix::~FMatrix(local_180);
            }
          }
        }
        pAVar3 = *(AActor **)(in_ECX + 0x40);
        if ((pAVar3 != (AActor *)0x0) && (((byte)pAVar3[0x74] & 2) == 0)) {
          AActor::CompactAttached(pAVar3);
          local_1d4 = (AActor *)0x105316c3;
          local_18 = in_ECX;
          thunk_FUN_1037ae60();
          local_1d4 = (AActor *)0x105316cc;
          AActor::eventAttach(*(AActor **)(in_ECX + 0x40),in_ECX);
        }
        puVar2 = local_14;
        if (in_stack_00000014 != 0) {
          AActor::eventBaseChange(in_ECX);
          puVar2 = local_14;
        }
      }
      local_14 = puVar2;
      if (((*(int *)(in_ECX + 0x40) == 0) || ((*(byte *)(*(int *)(in_ECX + 0x40) + 0x74) & 2) != 0))
         && (*(char *)(*(int *)(in_ECX + 0xe0) + 0x5d4) != '\x03')) {
        local_1d4 = (AActor *)0x10531700;
        FName::FName((FName *)&param_1,0);
        *(AActor **)(in_ECX + 0xd8) = param_1;
      }
      ExceptionList = local_10;
      return;
    }
    if (pAVar3 == in_ECX) break;
    pAVar3 = *(AActor **)(pAVar3 + 0x40);
  }
  return;
}


// ==== 10531723 Catch@10531723

void Catch_10531723(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x28) = *(undefined4 *)(unaff_EBP + -0x38);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x28,&DAT_10914c48);
}


// ==== 10531737 Catch@10531737

void Catch_10531737(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"AActor::SetBase");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10531860 FUN_10531860

void FUN_10531860(UObject *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined1 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  int in_ECX;
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
  
  puStack_c = &LAB_1081a980;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffb4;
  local_8 = 0;
  ExceptionList = &local_10;
  puVar1 = &stack0xffffffb4;
  if (((*(int *)(in_ECX + 0x14d8) != 0) &&
      (ExceptionList = &local_10, puVar1 = &stack0xffffffb4,
      0 < *(int *)(*(int *)(*(int *)(*(int *)(in_ECX + 0xe4) + 0x74) + 0x54) + 0x3c))) &&
     (ExceptionList = &local_10, puVar1 = &stack0xffffffb4,
     *(int *)(in_ECX + 0x14d8) ==
     *(int *)(**(int **)(*(int *)(*(int *)(*(int *)(in_ECX + 0xe4) + 0x74) + 0x54) + 0x38) + 0x3c)))
  {
    ExceptionList = &local_10;
    puVar1 = &stack0xffffffb4;
    if ((*(UObject **)(in_ECX + 0x40) != (UObject *)0x0) &&
       (ExceptionList = &local_10,
       iVar2 = UObject::IsA(*(UObject **)(in_ECX + 0x40),&AVehicle::PrivateStaticClass),
       puVar1 = local_14, iVar2 != 0)) {
      (**(code **)(**(int **)(*(int *)(*(int *)(in_ECX + 0xe4) + 0x74) + 0x60) + 0x124))
                (*(undefined4 *)(*(int *)(in_ECX + 0x40) + 0x60),*(undefined4 *)(in_ECX + 0x1bc),
                 *(undefined4 *)(in_ECX + 0x1c0),*(undefined4 *)(in_ECX + 0x1c4));
      puVar1 = local_14;
    }
    local_14 = puVar1;
    puVar1 = local_14;
    if ((param_1 != (UObject *)0x0) &&
       (iVar2 = UObject::IsA(param_1,&AVehicle::PrivateStaticClass), puVar1 = local_14, iVar2 != 0))
    {
      local_28 = *(float *)(in_ECX + 0x1bc) - *(float *)(param_1 + 0x1bc);
      local_24 = *(float *)(in_ECX + 0x1c0) - *(float *)(param_1 + 0x1c0);
      local_20 = *(float *)(in_ECX + 0x1c4) - *(float *)(param_1 + 0x1c4);
      local_34 = 0;
      local_30 = 0;
      local_2c = 0x3f800000;
      puVar4 = &local_34;
      puVar3 = (undefined4 *)
               FVector::RotateAngleAxis
                         ((FVector *)&local_28,(int)local_40,
                          (FVector *)-(*(uint *)(param_1 + 0x1cc) & 0xffff));
      local_28 = (float)*puVar3;
      local_24 = (float)puVar3[1];
      local_20 = (float)puVar3[2];
      (**(code **)(**(int **)(*(int *)(*(int *)(in_ECX + 0xe4) + 0x74) + 0x60) + 0x120))
                (*(undefined4 *)(param_1 + 0x60),*puVar3,puVar3[1],puVar3[2],puVar4);
      puVar1 = local_14;
    }
  }
  local_14 = puVar1;
  *(undefined4 *)(in_ECX + 0x15a4) = param_2;
  *(undefined4 *)(in_ECX + 0x15a8) = param_3;
  *(undefined4 *)(in_ECX + 0x15ac) = param_4;
  AActor::SetBase();
  ExceptionList = local_10;
  return;
}


// ==== 10531a3b Catch@10531a3b

void Catch_10531a3b(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 10531a4f Catch@10531a4f

void Catch_10531a4f(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"APawn::SetBase");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10531af0 FUN_10531af0

void FUN_10531af0(AActor *param_1)

{
  AActor *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1081a990;
  local_10 = ExceptionList;
  local_8 = 0;
  if (param_1 != (AActor *)0x0) {
    ExceptionList = &local_10;
    if (param_1 == *(AActor **)(in_ECX + 0x3dc)) {
      ExceptionList = &local_10;
      *(undefined4 *)(in_ECX + 0x3dc) = 0;
    }
    AActor::LostChild(in_ECX,param_1);
  }
  ExceptionList = local_10;
  return;
}


// ==== 10531b51 Catch@10531b51

void Catch_10531b51(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 10531b65 Catch@10531b65

void Catch_10531b65(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"LostChild");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10531bb0 FUN_10531bb0

void FUN_10531bb0(byte param_1)

{
  FStaticProjectorInfo *in_ECX;
  
  FStaticProjectorInfo::~FStaticProjectorInfo(in_ECX);
  if ((param_1 & 1) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))();
  }
  return;
}


// ==== 10531be0 FUN_10531be0

void FUN_10531be0(void)

{
  undefined4 uVar1;
  UObject *in_ECX;
  int iVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1081a9a0;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  UObject::PostEditChange(in_ECX);
  for (iVar2 = 0; iVar2 < *(int *)(in_ECX + 500); iVar2 = iVar2 + 1) {
    if (*(int *)(*(int *)(in_ECX + 0x1f0) + iVar2 * 4) == 0) {
      thunk_FUN_10326200(iVar2,1);
      iVar2 = iVar2 + -1;
    }
  }
  if (*(int *)GIsEditor_exref != 0) {
    *(uint *)(in_ECX + 0x5c) = *(uint *)(in_ECX + 0x5c) | 0x20;
  }
  AActor::ClearRenderData((AActor *)in_ECX);
  if ((*(int *)(in_ECX + 0xbc) != -1) && (*(int *)(in_ECX + 0xbc) != *(int *)(in_ECX + 0xb8) % 1000)
     ) {
    FUN_107a6660();
    FUN_107a6660();
    appPow(10.0,6.0);
    uVar1 = FUN_107a6660();
    *(undefined4 *)(in_ECX + 0xb8) = uVar1;
    appPow(10.0,4.0);
    iVar2 = FUN_107a6660();
    *(int *)(in_ECX + 0xb8) = iVar2;
    *(int *)(in_ECX + 0xb8) = *(int *)(in_ECX + 0xbc) + iVar2;
  }
  ExceptionList = local_10;
  return;
}


// ==== 10531d39 Catch@10531d39

void Catch_10531d39(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x20) = *(undefined4 *)(unaff_EBP + -0x24);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x20,&DAT_10914c48);
}


// ==== 10531d4d Catch@10531d4d

void Catch_10531d4d(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"AActor::PostEditChange");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10531dd0 FUN_10531dd0

void FUN_10531dd0(uint param_1,int param_2,int param_3)

{
  int *piVar1;
  undefined1 *puVar2;
  uint uVar3;
  undefined4 *puVar4;
  int iVar5;
  AActor *in_ECX;
  uint uVar6;
  FMemMark local_34 [20];
  undefined4 *local_20;
  uint local_1c;
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1081a9b0;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffc0;
  local_8 = 0;
  uVar6 = *(uint *)(in_ECX + 0x2f8) & 1;
  ExceptionList = &local_10;
  local_1c = uVar6;
  puVar2 = &stack0xffffffc0;
  if ((uVar6 != 0) &&
     (ExceptionList = &local_10, puVar2 = &stack0xffffffc0,
     *(int *)(*(int *)(in_ECX + 0xe4) + 0x120) != 0)) {
    ExceptionList = &local_10;
    (**(code **)(**(int **)(*(int *)(in_ECX + 0xe4) + 0x120) + 0xc))();
    puVar2 = local_14;
  }
  local_14 = puVar2;
  if ((((byte)in_ECX[0x2f8] & 1) != 0) && (param_1 == 0)) {
    local_18 = 0;
    iVar5 = local_18;
    while (uVar6 = local_1c, iVar5 < *(int *)(in_ECX + 0x160)) {
      piVar1 = (int *)(*(int *)(in_ECX + 0x15c) + iVar5 * 4);
      if (*piVar1 == 0) {
        local_18 = iVar5 + 1;
        iVar5 = local_18;
      }
      else {
        AActor::EndTouch((AActor *)*piVar1,in_ECX,0);
      }
    }
  }
  *(uint *)(in_ECX + 0x2f8) = *(uint *)(in_ECX + 0x2f8) ^ (*(uint *)(in_ECX + 0x2f8) ^ param_1) & 1;
  uVar3 = (param_2 * 4 ^ *(uint *)(in_ECX + 0x2f8)) & 4 ^ *(uint *)(in_ECX + 0x2f8);
  *(uint *)(in_ECX + 0x2f8) = uVar3;
  uVar3 = (param_3 * 8 ^ uVar3) & 8 ^ uVar3;
  *(uint *)(in_ECX + 0x2f8) = uVar3;
  if (((uVar3 & 1) != 0) && (*(int *)(*(int *)(in_ECX + 0xe4) + 0x120) != 0)) {
    (**(code **)(**(int **)(*(int *)(in_ECX + 0xe4) + 0x120) + 8))();
  }
  if ((param_1 != 0) && (uVar6 == 0)) {
    FMemMark::FMemMark(local_34,(FMemStack *)GMem_exref);
    if (*(int *)(*(int *)(in_ECX + 0xe4) + 0x120) == 0) {
      puVar4 = (undefined4 *)0x0;
    }
    else {
      puVar4 = (undefined4 *)
               (**(code **)(**(int **)(*(int *)(in_ECX + 0xe4) + 0x120) + 0x1c))(GMem_exref);
    }
    for (; local_20 = puVar4, puVar4 != (undefined4 *)0x0; puVar4 = (undefined4 *)*puVar4) {
      if (((((AActor *)puVar4[1] != in_ECX) &&
           (iVar5 = AActor::IsJoinedTo((AActor *)puVar4[1],in_ECX), iVar5 == 0)) &&
          ((AActor *)puVar4[1] != *(AActor **)(in_ECX + 0xe0))) &&
         (iVar5 = AActor::IsBlockedBy(in_ECX,(AActor *)puVar4[1]), iVar5 == 0)) {
        AActor::BeginTouch(in_ECX,(AActor *)puVar4[1]);
      }
    }
    FMemMark::Pop(local_34);
  }
  *(uint *)(in_ECX + 0x74) = *(uint *)(in_ECX + 0x74) | 0x800;
  ExceptionList = local_10;
  return;
}


// ==== 10531fc4 Catch@10531fc4

void Catch_10531fc4(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x20) = *(undefined4 *)(unaff_EBP + -0x24);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x20,&DAT_10914c48);
}


// ==== 10531fd8 Catch@10531fd8

void Catch_10531fd8(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"AActor::SetCollision");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10532080 FUN_10532080

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10532080(void)

{
  FVector *this;
  float fVar1;
  float fVar2;
  AActor AVar3;
  AActor *pAVar4;
  uint uVar5;
  int iVar6;
  undefined4 *puVar7;
  AActor *in_ECX;
  FRotator *pFVar8;
  FCoords local_15c [140];
  undefined4 local_d0;
  FRotator local_cc [44];
  undefined4 local_a0;
  FRotator local_9c [48];
  undefined1 *local_6c;
  void *local_68;
  undefined1 *puStack_64;
  undefined4 local_60;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  float local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  
  puStack_64 = &LAB_1081a9c0;
  local_68 = ExceptionList;
  local_6c = &stack0xfffffe98;
  local_60 = 0;
  ExceptionList = &local_68;
  thunk_FUN_10522250((FVector *)(in_ECX + 0x1bc),&DAT_10c1ba5c);
  thunk_FUN_10522290(in_ECX + 0x1c8,&DAT_10c1c4cc);
  this = (FVector *)(in_ECX + 0x1fc);
  thunk_FUN_10522250(this,&DAT_10c1bf94);
  thunk_FUN_10522290(in_ECX + 0x208,&DAT_10c1ca04);
  pAVar4 = *(AActor **)(in_ECX + 0x40);
  *(AActor **)(in_ECX + 0x40) = DAT_10c1ba58;
  uVar5 = *(uint *)(in_ECX + 0x2f8);
  DAT_10c1ba58 = pAVar4;
  *(uint *)(in_ECX + 0x2f8) = (uVar5 ^ DAT_10c1ba54) & 1 ^ uVar5;
  fVar1 = *(float *)(in_ECX + 0x2f0);
  DAT_10c1ba54 = uVar5 & 1;
  *(float *)(in_ECX + 0x2f0) = _DAT_10c1ba50;
  fVar2 = *(float *)(in_ECX + 0x2f4);
  _DAT_10c1ba50 = fVar1;
  *(float *)(in_ECX + 0x2f4) = _DAT_10c1ba4c;
  local_8 = *(float *)(in_ECX + 0x27c);
  _DAT_10c1ba4c = fVar2;
  *(float *)(in_ECX + 0x27c) = _DAT_10c1ba48;
  _DAT_10c1ba48 = local_8;
  thunk_FUN_10522250(in_ECX + 0x280,&DAT_10c1d9ac);
  AVar3 = in_ECX[0x35];
  in_ECX[0x35] = DAT_10c1ba44;
  iVar6 = *(int *)(in_ECX + 0x2b0);
  DAT_10c1ba44 = AVar3;
  *(int *)(in_ECX + 0x2b0) = DAT_10c1ba3c;
  DAT_10c1ba3c = iVar6;
  if (((byte)in_ECX[0x2f8] & 1) != 0) {
    (**(code **)(**(int **)(*(int *)(in_ECX + 0xe4) + 0x120) + 8))();
  }
  if ((*(int *)(in_ECX + 0x104) != 0) &&
     (iVar6 = thunk_FUN_10525110(*(undefined4 *)(in_ECX + 0x350),*(undefined4 *)(in_ECX + 0x354),
                                 *(undefined4 *)(in_ECX + 0x358),DAT_10c1cf3c,DAT_10c1cf40,
                                 DAT_10c1cf44,0,0), iVar6 != 0)) {
    AActor::PlayReplicatedAnim(in_ECX);
  }
  if ((_DAT_10c1ba50 != *(float *)(in_ECX + 0x2f0)) || (_DAT_10c1ba4c != *(float *)(in_ECX + 0x2f4))
     ) {
    AActor::SetCollisionSize(in_ECX,_DAT_10c1ba50,_DAT_10c1ba4c);
  }
  uVar5 = *(uint *)(in_ECX + 0x2f8);
  if ((uVar5 & 1) != DAT_10c1ba54) {
    AActor::SetCollision(in_ECX,DAT_10c1ba54,uVar5 >> 2 & 1,uVar5 >> 3 & 1);
  }
  iVar6 = FVector::operator!=((FVector *)(in_ECX + 0x1bc),(FVector *)&DAT_10c1ba5c);
  if (iVar6 != 0) {
    (**(code **)(*(int *)in_ECX + 0xa8))();
  }
  iVar6 = FRotator::operator!=((FRotator *)(in_ECX + 0x1c8),(FRotator *)&DAT_10c1c4cc);
  if (iVar6 != 0) {
    local_a0 = 0;
    local_50 = 0;
    local_4c = 0;
    local_48 = 0;
    (**(code **)(**(int **)(in_ECX + 0xe4) + 0xa4))();
  }
  if (_DAT_10c1ba48 != *(float *)(in_ECX + 0x27c)) {
    AActor::SetDrawScale(in_ECX,_DAT_10c1ba48);
  }
  iVar6 = FVector::operator!=((FVector *)(in_ECX + 0x280),(FVector *)&DAT_10c1d9ac);
  if (iVar6 != 0) {
    AActor::SetDrawScale3D();
  }
  if (in_ECX[0x35] != DAT_10c1ba44) {
    AActor::SetDrawType(in_ECX,(uint)(byte)DAT_10c1ba44);
  }
  local_8 = (float)(uint)(*(AActor **)(in_ECX + 0x40) != DAT_10c1ba58);
  if (local_8 != 0.0) {
    if (DAT_10c1ba58 != (AActor *)0x0) {
      AActor::eventBump(in_ECX,DAT_10c1ba58);
      AActor::eventBump(DAT_10c1ba58,in_ECX);
    }
    local_10 = (float)FVector::operator!=((FVector *)&DAT_10c1bf94,this);
    local_c = (float)FRotator::operator!=((FRotator *)&DAT_10c1ca04,(FRotator *)(in_ECX + 0x208));
    local_28 = 0;
    local_24 = 0;
    local_20 = 0x3f800000;
    (**(code **)(*(int *)in_ECX + 0x16c))(DAT_10c1ba58,0,0,0x3f800000,1);
    if (local_10 == 0.0) {
      DAT_10c1bf94 = *(float *)this;
      DAT_10c1bf98 = *(float *)(in_ECX + 0x200);
      DAT_10c1bf9c = *(float *)(in_ECX + 0x204);
    }
    if (local_c == 0.0) {
      DAT_10c1ca04 = *(undefined4 *)(in_ECX + 0x208);
      DAT_10c1ca08 = *(undefined4 *)(in_ECX + 0x20c);
      DAT_10c1ca0c = *(undefined4 *)(in_ECX + 0x210);
    }
  }
  iVar6 = *(int *)(in_ECX + 0x40);
  if ((iVar6 == 0) || ((*(byte *)(iVar6 + 0x74) & 2) != 0)) goto LAB_105326d5;
  if (((*(uint *)(in_ECX + 0x74) & 0x400000) != 0) &&
     ((*(UObject **)(iVar6 + 0x104) != (UObject *)0x0 &&
      (iVar6 = UObject::IsA(*(UObject **)(iVar6 + 0x104),&USkeletalMesh::PrivateStaticClass),
      iVar6 != 0)))) {
    local_44 = 0;
    local_40 = 0;
    local_3c = 0;
    DAT_10c1bf94 = 0.0;
    DAT_10c1bf98 = 0.0;
    DAT_10c1bf9c = 0.0;
  }
  FName::FName((FName *)&local_c,0);
  iVar6 = FName::operator!=((FName *)(in_ECX + 0xd8),(FName *)&local_c);
  if (iVar6 != 0) {
    *(float *)this = DAT_10c1bf94;
    *(float *)(in_ECX + 0x200) = DAT_10c1bf98;
    *(float *)(in_ECX + 0x204) = DAT_10c1bf9c;
    *(undefined4 *)(in_ECX + 0x208) = DAT_10c1ca04;
    *(undefined4 *)(in_ECX + 0x20c) = DAT_10c1ca08;
    *(undefined4 *)(in_ECX + 0x210) = DAT_10c1ca0c;
    goto LAB_105326d5;
  }
  if ((local_8 == 0.0) && (iVar6 = FVector::operator!=(this,(FVector *)&DAT_10c1bf94), iVar6 == 0))
  {
LAB_105325ef:
    iVar6 = FRotator::operator!=((FRotator *)(in_ECX + 0x208),(FRotator *)&DAT_10c1ca04);
    if (iVar6 == 0) goto LAB_105326d5;
  }
  else {
    iVar6 = *(int *)(in_ECX + 0x40);
    local_1c = *(float *)(iVar6 + 0x1bc) + DAT_10c1bf94;
    local_18 = *(float *)(iVar6 + 0x1c0) + DAT_10c1bf98;
    local_38 = *(float *)(iVar6 + 0x1c4) + DAT_10c1bf9c;
    local_14 = local_38;
    local_10 = local_18;
    local_c = local_1c;
    (**(code **)(**(int **)(in_ECX + 0xe4) + 0xa8))();
    *(float *)this = DAT_10c1bf94;
    *(float *)(in_ECX + 0x200) = DAT_10c1bf98;
    *(float *)(in_ECX + 0x204) = DAT_10c1bf9c;
    if (local_8 == 0.0) goto LAB_105325ef;
  }
  local_d0 = 0;
  FCoords::operator/((FCoords *)(GMath_exref + 0x18),local_cc);
  FCoords::operator/((FCoords *)(GMath_exref + 0x18),local_9c);
  FCoords::Transpose((FCoords *)local_cc);
  puVar7 = (undefined4 *)FCoords::operator*((FCoords *)local_9c,local_15c);
  pFVar8 = local_9c;
  for (iVar6 = 0xc; iVar6 != 0; iVar6 = iVar6 + -1) {
    *(undefined4 *)pFVar8 = *puVar7;
    puVar7 = puVar7 + 1;
    pFVar8 = pFVar8 + 4;
  }
  FCoords::OrthoRotation((FCoords *)local_9c);
  local_34 = 0;
  local_30 = 0;
  local_2c = 0;
  (**(code **)(**(int **)(in_ECX + 0xe4) + 0xa4))();
LAB_105326d5:
  *(uint *)(in_ECX + 0x2f8) = *(uint *)(in_ECX + 0x2f8) & 0xfffeffff;
  if (DAT_10c1ba3c != *(int *)(in_ECX + 0x2b0)) {
    if (*(int *)(in_ECX + 0x29c) == 0) {
      if (DAT_10c1ba3c != 0) {
        thunk_FUN_10493f70(&DAT_10c1ba3c);
      }
    }
    else {
      **(int **)(in_ECX + 0x298) = DAT_10c1ba3c;
    }
    *(int *)(in_ECX + 0x2b0) = DAT_10c1ba3c;
  }
  if ((*(uint *)(in_ECX + 0x2f8) & 0x400) != 0) {
    AActor::eventPostNetReceive(in_ECX);
  }
  ExceptionList = local_68;
  return;
}


// ==== 1053274d Catch@1053274d

void Catch_1053274d(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + 8) = *(undefined4 *)(unaff_EBP + 4);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + 8,&DAT_10914c48);
}


// ==== 10532761 Catch@10532761

void Catch_10532761(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"AActor::PostNetReceive");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10532940 FUN_10532940

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10532940(void)

{
  int iVar1;
  UFunction *pUVar2;
  AActor *in_ECX;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  undefined4 local_4;
  
  iVar1 = FVector::operator!=((FVector *)&DAT_10c1e414,(FVector *)(in_ECX + 0x183c));
  if (iVar1 == 0) {
    iVar1 = FRotator::operator!=((FRotator *)&DAT_10c1e420,(FRotator *)(in_ECX + 0x1848));
    if (iVar1 == 0) {
      iVar1 = FVector::operator!=((FVector *)&DAT_10c1e42c,(FVector *)(in_ECX + 0x1854));
      if (iVar1 == 0) goto LAB_105329e9;
    }
  }
  *(undefined4 *)(in_ECX + 0x1bc) = *(undefined4 *)(in_ECX + 0x183c);
  *(undefined4 *)(in_ECX + 0x1c0) = *(undefined4 *)(in_ECX + 0x1840);
  *(undefined4 *)(in_ECX + 0x1c4) = *(undefined4 *)(in_ECX + 0x1844);
  *(undefined4 *)(in_ECX + 0x1c8) = *(undefined4 *)(in_ECX + 0x1848);
  *(undefined4 *)(in_ECX + 0x1cc) = *(undefined4 *)(in_ECX + 0x184c);
  *(undefined4 *)(in_ECX + 0x1d0) = *(undefined4 *)(in_ECX + 0x1850);
  *(undefined4 *)(in_ECX + 0x1d4) = *(undefined4 *)(in_ECX + 0x1854);
  *(undefined4 *)(in_ECX + 0x1d8) = *(undefined4 *)(in_ECX + 0x1858);
  *(undefined4 *)(in_ECX + 0x1dc) = *(undefined4 *)(in_ECX + 0x185c);
LAB_105329e9:
  AActor::PostNetReceive(in_ECX);
  iVar1 = FName::operator!=((FName *)&DAT_10c1dee4,(FName *)(in_ECX + 0x1714));
  if (iVar1 != 0) {
    FName::FName((FName *)&local_4,0);
    iVar1 = FName::operator!=((FName *)(in_ECX + 0x1714),(FName *)&local_4);
    if (iVar1 != 0) {
      APawn::eventSetAnimAction();
    }
  }
  if (*(float *)(in_ECX + 0x15d8) != _DAT_10c1ba40) {
    local_4 = *(undefined4 *)(in_ECX + 0x15d8);
    iVar1 = *(int *)in_ECX;
    uVar6 = 0;
    puVar5 = &local_4;
    uVar4 = 0;
    uVar3 = _ENGINE_SetHeadScale;
    pUVar2 = UObject::FindFunctionChecked();
    (**(code **)(iVar1 + 0x10))(pUVar2,uVar3,uVar4,puVar5,uVar6);
  }
  return;
}


// ==== 10532ac0 FUN_10532ac0

void FUN_10532ac0(void)

{
  undefined2 uVar1;
  int iVar2;
  AActor *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1081a9d0;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  AActor::PostNetReceive(in_ECX);
  iVar2 = FVector::operator!=((FVector *)&DAT_10c1d474,(FVector *)(in_ECX + 0x5f0));
  if (iVar2 != 0) {
    *(undefined4 *)(in_ECX + 0x580) = *(undefined4 *)(in_ECX + 0x5d8);
    *(undefined4 *)(in_ECX + 0x584) = *(undefined4 *)(in_ECX + 0x5dc);
    *(undefined4 *)(in_ECX + 0x588) = *(undefined4 *)(in_ECX + 0x5e0);
    *(undefined4 *)(in_ECX + 0x5b4) = *(undefined4 *)(in_ECX + 0x5e8);
    *(undefined4 *)(in_ECX + 0x5b0) = *(undefined4 *)(in_ECX + 0x5e4);
    *(undefined4 *)(in_ECX + 0x5b8) = *(undefined4 *)(in_ECX + 0x5ec);
    *(float *)(in_ECX + 0x5c8) = *(float *)(in_ECX + 0x5f0) * 0.01;
    *(float *)(in_ECX + 0x5cc) = *(float *)(in_ECX + 0x5f4) * 0.01;
    uVar1 = FUN_107a6660();
    in_ECX[1099] = SUB21(uVar1,0);
    in_ECX[0x44c] = SUB21((ushort)uVar1 >> 8,0);
    (**(code **)(*(int *)in_ECX + 0x1c8))(8,0,0,0,0x3f800000);
    *(uint *)(in_ECX + 0x2f8) = *(uint *)(in_ECX + 0x2f8) | 0x8000;
  }
  ExceptionList = local_10;
  return;
}


// ==== 10532be0 Catch@10532be0

void Catch_10532be0(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 10532bf4 Catch@10532bf4

void Catch_10532bf4(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"AMover::PostNetReceive");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10532c70 FUN_10532c70

void FUN_10532c70(void)

{
  FString *this;
  int iVar1;
  AActor *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1081a9e0;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  AActor::PostNetReceive(in_ECX);
  if (*(char *)(*(int *)(in_ECX + 0xe0) + 0x5d4) == '\x03') {
    if ((*(int *)(*(int *)(in_ECX + 0xe4) + 0x70) != 0) &&
       (*(AActor **)
         (*(int *)(**(int **)(*(int *)(*(int *)(*(int *)(in_ECX + 0xe4) + 0x74) + 0x54) + 0x38) +
                  0x3c) + 0x4f4) == in_ECX)) {
      iVar1 = FUN_107a6660();
      *(int *)(in_ECX + 0x3c8) = *(int *)(in_ECX + 0x3c8) + iVar1;
    }
    if (*(int *)(in_ECX + 0x3c8) < 0) {
      *(undefined4 *)(in_ECX + 0x3c8) = 0;
    }
    this = (FString *)(in_ECX + 0x408);
    iVar1 = FString::operator!=(this,(FString *)(in_ECX + 0x3d8));
    if (iVar1 != 0) {
      FStringNoInit::operator=((FStringNoInit *)(in_ECX + 0x3fc),(FStringNoInit *)this);
      FStringNoInit::operator=((FStringNoInit *)this,(FStringNoInit *)(in_ECX + 0x3d8));
      APlayerReplicationInfo::eventClientNameChange((APlayerReplicationInfo *)in_ECX);
    }
    iVar1 = FString::operator!=((FString *)(in_ECX + 0x3e4),(FString *)(in_ECX + 0x3f0));
    if (iVar1 != 0) {
      FStringNoInit::operator=((FStringNoInit *)(in_ECX + 0x3f0),(FStringNoInit *)(in_ECX + 0x3e4));
      APlayerReplicationInfo::eventUpdateCharacter((APlayerReplicationInfo *)in_ECX);
    }
  }
  ExceptionList = local_10;
  return;
}


// ==== 10532d83 Catch@10532d83

void Catch_10532d83(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 10532d97 Catch@10532d97

void Catch_10532d97(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"APlayerReplicationInfo::PostNetReceive");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10532e10 FUN_10532e10

void FUN_10532e10(void)

{
  APawn *this;
  int iVar1;
  AActor *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1081a9f0;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  AActor::PostNetReceive(in_ECX);
  this = *(APawn **)(in_ECX + 0xd4);
  if (((this != (APawn *)0x0) && (this == *(APawn **)(in_ECX + 0x40))) &&
     (((byte)this[100] & 0x80) == 0)) {
    iVar1 = APawn::IsLocallyControlled(this);
    if (iVar1 == 0) {
      if (*(AActor *)(*(int *)(in_ECX + 0xd4) + 0x14f0) != in_ECX[0x3bc]) {
        *(AActor *)(*(int *)(in_ECX + 0xd4) + 0x14f0) = in_ECX[0x3bc];
        AWeaponAttachment::eventThirdPersonEffects((AWeaponAttachment *)in_ECX);
      }
      iVar1 = *(int *)(in_ECX + 0xd4);
      if ((*(uint *)(iVar1 + 0x14ec) >> 0xd & 1) != (*(uint *)(in_ECX + 0x3c0) & 1)) {
        *(uint *)(iVar1 + 0x14ec) =
             *(uint *)(iVar1 + 0x14ec) & 0xffffdfff | (*(uint *)(in_ECX + 0x3c0) & 1) << 0xd;
        AWeaponAttachment::eventThirdPersonEffects((AWeaponAttachment *)in_ECX);
      }
    }
  }
  ExceptionList = local_10;
  return;
}


// ==== 10532ed3 Catch@10532ed3

void Catch_10532ed3(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 10532ee7 Catch@10532ee7

void Catch_10532ee7(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"AWeaponAttachment::PostNetReceive");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10532f50 FUN_10532f50

void FUN_10532f50(void)

{
  int *piVar1;
  AActor *in_ECX;
  int iVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1081aa00;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  AActor::PostEditChange(in_ECX);
  if (*(int *)GIsEditor_exref != 0) {
    (**(code **)(**(int **)(*(int *)(in_ECX + 0xe4) + 0x74) + 0x74))(0);
    iVar2 = 0;
    while( true ) {
      if (*(int *)(*(int *)(in_ECX + 0xe4) + 0x3c) <= iVar2) break;
      piVar1 = (int *)(*(int *)(*(int *)(in_ECX + 0xe4) + 0x38) + iVar2 * 4);
      if (*piVar1 != 0) {
        AActor::ClearRenderData((AActor *)*piVar1);
      }
      iVar2 = iVar2 + 1;
    }
  }
  ExceptionList = local_10;
  return;
}


// ==== 10532fda Catch@10532fda

void Catch_10532fda(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_10914c48);
}


// ==== 10532fee Catch@10532fee

void Catch_10532fee(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"AZoneInfo::PostEditChange");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10533040 FUN_10533040

void FUN_10533040(void)

{
  ULevel *this;
  UObject *in_ECX;
  FOutputDevice *this_00;
  int iVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1081aa10;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  while (iVar1 = *(int *)(in_ECX + 0x25c), 0 < iVar1) {
    thunk_FUN_1052ebb0();
    thunk_FUN_10326340(iVar1 + -1,1);
  }
  for (iVar1 = 0; iVar1 < *(int *)(in_ECX + 0x268); iVar1 = iVar1 + 1) {
    thunk_FUN_1052ebb0();
    if (*(int *)(*(int *)(in_ECX + 0x264) + iVar1 * 4) != 0) {
      thunk_FUN_10531bb0(1);
    }
  }
  for (iVar1 = 0; iVar1 < *(int *)(in_ECX + 0x268); iVar1 = iVar1 + 1) {
  }
  FArray::Empty((FArray *)(in_ECX + 0x264),4,0);
  if (*(int *)(in_ECX + 0x48) != 0) {
    thunk_FUN_103254a0(*(int *)(in_ECX + 0x48));
    *(undefined4 *)(in_ECX + 0x48) = 0;
  }
  if (*(int *)(in_ECX + 0x44) != 0) {
    thunk_FUN_1052d620(1);
    *(undefined4 *)(in_ECX + 0x44) = 0;
  }
  if (0 < *(int *)(in_ECX + 0x16c)) {
    iVar1 = *(int *)(in_ECX + 0xe4);
    if ((iVar1 == 0) || (*(int *)(iVar1 + 0x120) == 0)) {
      if (*(int *)GLog_exref != 0) {
        UObject::GetName(in_ECX);
        FOutputDevice::Logf2(this_00,*(ushort **)GLog_exref);
      }
    }
    else {
      (**(code **)(**(int **)(iVar1 + 0x120) + 0xc))();
    }
  }
  *(int *)GActorCurCount_exref = *(int *)GActorCurCount_exref + -1;
  if ((((*(int *)(in_ECX + 0xe4) != 0) &&
       (iVar1 = *(int *)(*(int *)(in_ECX + 0xe4) + 0x74), iVar1 != 0)) &&
      (this = *(ULevel **)(iVar1 + 0x19c), this != (ULevel *)0x0)) && (*(int *)(this + 0x11e0) != 0)
     ) {
    iVar1 = ULevel::DeleteL2EventActors(this,(AActor *)in_ECX);
    if (iVar1 != 0) {
      ULevel::DeleteAllL2EventActors(this);
    }
  }
  UObject::Destroy(in_ECX);
  ExceptionList = local_10;
  return;
}


// ==== 105331d3 Catch@105331d3

void Catch_105331d3(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x1c) = *(undefined4 *)(unaff_EBP + -0x20);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x1c,&DAT_10914c48);
}


// ==== 105331e7 Catch@105331e7

void Catch_105331e7(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"AActor::Destroy");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10533280 FUN_10533280

void FUN_10533280(void)

{
  AActor *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1081aa20;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  AActor::PostNetReceive(in_ECX);
  if (in_ECX[0x404] != in_ECX[0x405]) {
    if (in_ECX[0x404] == (AActor)0x0) {
      AStationaryWeapons::eventDeactivated((AStationaryWeapons *)in_ECX);
    }
    else {
      AStationaryWeapons::eventActivated((AStationaryWeapons *)in_ECX);
    }
    in_ECX[0x405] = in_ECX[0x404];
  }
  ExceptionList = local_10;
  return;
}


// ==== 105332f3 Catch@105332f3

void Catch_105332f3(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 10533307 Catch@10533307

void Catch_10533307(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"AStationaryWeapons::PostNetReceive");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10533350 FUN_10533350

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10533350(void)

{
  APhysicsVolume *pAVar1;
  ALevelInfo *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1081aa30;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  if (_DAT_10c1ba38 != *(float *)(in_ECX + 0x618)) {
    ExceptionList = &local_10;
    pAVar1 = ALevelInfo::GetDefaultPhysicsVolume(in_ECX);
    *(undefined4 *)(pAVar1 + 0x44c) = *(undefined4 *)(in_ECX + 0x618);
  }
  AActor::PostNetReceive((AActor *)in_ECX);
  ExceptionList = local_10;
  return;
}


// ==== 105333c1 Catch@105333c1

void Catch_105333c1(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 105333d5 Catch@105333d5

void Catch_105333d5(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"ALevelInfo::PostNetReceive");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10533420 FUN_10533420

void FUN_10533420(void)

{
  AActor *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1081aa40;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  AActor::Destroy(in_ECX);
  ExceptionList = local_10;
  return;
}


// ==== 10533465 Catch@10533465

void Catch_10533465(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 10533479 Catch@10533479

void Catch_10533479(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"AAmbientSound::Destroy");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 105334c0 FUN_105334c0

void FUN_105334c0(void)

{
  UObject *in_ECX;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1081aa50;
  pvStack_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &pvStack_10;
  if (USound::Audio != (UAudioSubsystem *)0x0) {
    ExceptionList = &pvStack_10;
    (**(code **)(*(int *)USound::Audio + 0x7c))();
  }
  UObject::Destroy(in_ECX);
  FUN_10533561();
  return;
}


// ==== 10533517 Catch@10533517

void Catch_10533517(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x14);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_10914c48);
}


// ==== 10533538 Catch@10533538

void Catch_10533538(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"USound::Destroy");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10533561 FUN_10533561

void FUN_10533561(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


// ==== 105335b0 FUN_105335b0

void FUN_105335b0(void)

{
  UObject *in_ECX;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1081aa60;
  pvStack_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &pvStack_10;
  UObject::PostLoad(in_ECX);
  FUN_10533631();
  return;
}


// ==== 105335e7 Catch@105335e7

void Catch_105335e7(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x14);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_10914c48);
}


// ==== 10533608 Catch@10533608

void Catch_10533608(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"USound::PostLoad");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10533631 FUN_10533631

void FUN_10533631(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


// ==== 10533670 FUN_10533670

void FUN_10533670(void)

{
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1081aa70;
  pvStack_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &pvStack_10;
  FUN_105336e8();
  return;
}


// ==== 1053369e Catch@1053369e

void Catch_1053369e(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x14);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_10914c48);
}


// ==== 105336bf Catch@105336bf

void Catch_105336bf(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"USound::PS2Convert");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 105336e8 FUN_105336e8

void FUN_105336e8(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


// ==== 10533730 FUN_10533730

void FUN_10533730(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined4 *in_ECX;
  undefined1 local_40;
  uint local_3c;
  int local_38;
  uint local_28;
  int local_24;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1081aa80;
  pvStack_10 = ExceptionList;
  local_8 = 0;
  uVar1 = in_ECX[10];
  local_38 = 0;
  iVar2 = in_ECX[8];
  ExceptionList = &pvStack_10;
  local_24 = (int)*(short *)in_ECX[8];
  for (local_3c = 0; local_3c < uVar1 >> 2; local_3c = local_3c + 1) {
    iVar3 = (int)*(short *)(iVar2 + 2 + local_3c * 4);
    local_38 = local_38 + local_24 + 0x20000 + *(short *)(iVar2 + local_3c * 4) * 2 + iVar3;
    local_28 = local_38 + 0x200U & 0xfffffc00;
    if (0x3fc00 < (int)local_28) {
      local_28 = 0x3fc00;
    }
    local_40 = (undefined1)((int)local_28 >> 10);
    *(undefined1 *)(iVar2 + local_3c) = local_40;
    local_38 = local_38 - local_28;
    local_24 = iVar3;
  }
  in_ECX[0xe] = uVar1 >> 2;
  *(undefined2 *)in_ECX[3] = 8;
  *(uint *)*in_ECX = *(uint *)*in_ECX >> 1;
  in_ECX[0xf] = 1;
  FUN_105338a9();
  return;
}


// ==== 1053385f Catch@1053385f

void Catch_1053385f(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x48) = *(undefined4 *)(unaff_EBP + -0x44);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x48,&DAT_10914c48);
}


// ==== 10533880 Catch@10533880

void Catch_10533880(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"FWaveModInfo::HalveReduce16to8");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 105338a9 FUN_105338a9

void FUN_105338a9(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


// ==== 10533930 FUN_10533930

void FUN_10533930(void)

{
  int iVar1;
  int in_ECX;
  uint uVar2;
  undefined1 local_30;
  uint local_2c;
  int local_28;
  uint local_20;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1081aa90;
  pvStack_10 = ExceptionList;
  local_8 = 0;
  uVar2 = *(uint *)(in_ECX + 0x28) >> 1;
  local_28 = 0;
  iVar1 = *(int *)(in_ECX + 0x20);
  ExceptionList = &pvStack_10;
  for (local_2c = 0; local_2c < uVar2; local_2c = local_2c + 1) {
    local_28 = local_28 + 0x8000 + (int)*(short *)(iVar1 + local_2c * 2);
    local_20 = local_28 + 0x7fU & 0xffffff00;
    if (0xff00 < (int)local_20) {
      local_20 = 0xff00;
    }
    local_30 = (undefined1)(local_20 >> 8);
    *(undefined1 *)(iVar1 + local_2c) = local_30;
    local_28 = local_28 - local_20;
  }
  *(uint *)(in_ECX + 0x38) = uVar2;
  **(undefined2 **)(in_ECX + 0xc) = 8;
  *(undefined4 *)(in_ECX + 0x3c) = 1;
  FUN_10533a50();
  return;
}


// ==== 10533a06 Catch@10533a06

void Catch_10533a06(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x34) = *(undefined4 *)(unaff_EBP + -0x30);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x34,&DAT_10914c48);
}


// ==== 10533a27 Catch@10533a27

void Catch_10533a27(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"FWaveModInfo::Reduce16to8");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10533a50 FUN_10533a50

void FUN_10533a50(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


// ==== 10533ac0 FUN_10533ac0

void FUN_10533ac0(void)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  byte *pbVar4;
  int iVar5;
  undefined4 *in_ECX;
  uint local_64;
  int local_60;
  uint local_54;
  uint local_50;
  uint local_3c;
  int local_38;
  uint local_24;
  int local_20;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1081aaa0;
  pvStack_10 = ExceptionList;
  local_8 = 0;
  if (*(short *)in_ECX[3] == 0x10) {
    uVar2 = in_ECX[10];
    local_38 = 0;
    iVar3 = in_ECX[8];
    ExceptionList = &pvStack_10;
    local_20 = (int)*(short *)in_ECX[8];
    for (local_3c = 0; local_3c < uVar2 >> 2; local_3c = local_3c + 1) {
      iVar5 = (int)*(short *)(iVar3 + 2 + local_3c * 4);
      local_38 = local_38 + local_20 + 0x20000 + *(short *)(iVar3 + local_3c * 4) * 2 + iVar5;
      local_24 = local_38 + 2U & 0x3fffc;
      if (0x3fffc < local_24) {
        local_24 = 0x3fffc;
      }
      *(short *)(iVar3 + local_3c * 2) = (short)((int)local_24 >> 2) + -0x8000;
      local_38 = local_38 - local_24;
      local_20 = iVar5;
    }
    in_ECX[0xe] = (uVar2 >> 2) << 1;
    *(uint *)*in_ECX = *(uint *)*in_ECX >> 1;
  }
  else {
    ExceptionList = &pvStack_10;
    if (*(short *)in_ECX[3] == 8) {
      local_60 = 0;
      uVar2 = in_ECX[10];
      pbVar4 = (byte *)in_ECX[8];
      ExceptionList = &pvStack_10;
      local_50 = (uint)*pbVar4;
      for (local_64 = 0; local_64 < uVar2 >> 1; local_64 = local_64 + 1) {
        bVar1 = pbVar4[local_64 * 2 + 1];
        local_60 = local_60 + local_50 + (uint)pbVar4[local_64 * 2] * 2 + (uint)bVar1;
        local_54 = local_60 + 2U & 0x3fc;
        if (0x3fc < local_54) {
          local_54 = 0x3fc;
        }
        pbVar4[local_64] = (byte)((int)local_54 >> 2);
        local_60 = local_60 - local_54;
        local_50 = (uint)bVar1;
      }
      in_ECX[0xe] = uVar2 >> 1;
      *(uint *)*in_ECX = *(uint *)*in_ECX >> 1;
    }
  }
  FUN_10533d1a();
  return;
}


// ==== 10533cd0 Catch@10533cd0

void Catch_10533cd0(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x6c) = *(undefined4 *)(unaff_EBP + -0x68);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x6c,&DAT_10914c48);
}


// ==== 10533cf1 Catch@10533cf1

void Catch_10533cf1(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"FWaveModInfo::HalveData");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10533d1a FUN_10533d1a

void FUN_10533d1a(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


// ==== 10533dd0 FUN_10533dd0

void FUN_10533dd0(void)

{
  UObject *in_ECX;
  
  UObject::PostEditChange(in_ECX);
  *(undefined4 *)(in_ECX + 0xa4) = 1;
  return;
}


// ==== 10533e00 FUN_10533e00

int FUN_10533e00(int param_1)

{
  if (param_1 < 0) {
    param_1 = -param_1;
  }
  return param_1;
}


// ==== 10533e10 FUN_10533e10

void FUN_10533e10(TArray<unsigned_char> *param_1)

{
  int iVar1;
  uchar *puVar2;
  ulong uVar3;
  FWaveModInfo *in_ECX;
  undefined1 local_44 [28];
  undefined4 local_28;
  uchar *local_20;
  int *local_1c;
  int *local_18;
  undefined1 *local_14;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1081aab0;
  pvStack_10 = ExceptionList;
  local_14 = &stack0xffffffa0;
  local_8 = 0;
  ExceptionList = &pvStack_10;
  local_20 = TArray<unsigned_char>::operator()(param_1,0);
  iVar1 = *(int *)(param_1 + 4);
  puVar2 = TArray<unsigned_char>::operator()(param_1,0);
  *(uchar **)(in_ECX + 0x2c) = puVar2 + iVar1;
  if (*(int *)(local_20 + 8) != 0x45564157) {
    FUN_10534099();
    return;
  }
  *(uchar **)(in_ECX + 0x1c) = local_20 + 4;
  for (local_18 = (int *)TArray<unsigned_char>::operator()(param_1,0xc);
      (local_18 + 2 < *(int **)(in_ECX + 0x2c) && (*local_18 != 0x20746d66));
      local_18 = (int *)((int)local_18 + uVar3 + 8)) {
    uVar3 = FWaveModInfo::Pad16Bit(in_ECX,local_18[1]);
  }
  if (*local_18 != 0x20746d66) {
    FUN_10534099();
    return;
  }
  local_1c = local_18 + 2;
  *(int *)(in_ECX + 0xc) = (int)local_18 + 0x16;
  *(int **)in_ECX = local_18 + 3;
  *(int **)(in_ECX + 4) = local_18 + 4;
  *(int **)(in_ECX + 8) = local_18 + 5;
  *(int *)(in_ECX + 0x10) = (int)local_18 + 10;
  for (local_18 = (int *)TArray<unsigned_char>::operator()(param_1,0xc);
      (local_18 + 2 < *(int **)(in_ECX + 0x2c) && (*local_18 != 0x61746164));
      local_18 = (int *)((int)local_18 + uVar3 + 8)) {
    uVar3 = FWaveModInfo::Pad16Bit(in_ECX,local_18[1]);
  }
  if (*local_18 != 0x61746164) {
    FUN_10534099();
    return;
  }
  *(int **)(in_ECX + 0x20) = local_18 + 2;
  *(int **)(in_ECX + 0x18) = local_18 + 1;
  *(int *)(in_ECX + 0x28) = local_18[1];
  *(uint *)(in_ECX + 0x14) = (uint)*(ushort *)((int)local_1c + 0xe);
  *(int *)(in_ECX + 0x24) = *(int *)(in_ECX + 0x20) + *(int *)(in_ECX + 0x28);
  *(undefined4 *)(in_ECX + 0x38) = *(undefined4 *)(in_ECX + 0x28);
  for (local_18 = (int *)TArray<unsigned_char>::operator()(param_1,0xc);
      (local_18 + 2 < *(int **)(in_ECX + 0x2c) && (*local_18 != 0x6c706d73));
      local_18 = (int *)((int)local_18 + uVar3 + 8)) {
    uVar3 = FWaveModInfo::Pad16Bit(in_ECX,local_18[1]);
  }
  if (((int)(local_18 + 1) < *(int *)(in_ECX + 0x2c)) && (*local_18 == 0x6c706d73)) {
    _memcpy(local_44,local_18 + 2,0x24);
    *(undefined4 *)(in_ECX + 0x30) = local_28;
    *(int **)(in_ECX + 0x34) = local_18 + 0xb;
  }
  FUN_10534099();
  return;
}


// ==== 10534048 Catch@10534048

void Catch_10534048(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x48) = *(undefined4 *)(unaff_EBP + -0x44);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x48,&DAT_10914c48);
}


// ==== 10534069 Catch@10534069

void Catch_10534069(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"FWaveModInfo::ReadWaveInfo");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10534099 FUN_10534099

void FUN_10534099(void)

{
  int unaff_EBP;
  
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


// ==== 10534160 FUN_10534160

void FUN_10534160(TArray<unsigned_char> *param_1)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  uint uVar4;
  FWaveModInfo *in_ECX;
  int iVar5;
  int local_2c;
  int local_28;
  int local_20;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1081aac0;
  pvStack_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &pvStack_10;
  if (*(uint *)(in_ECX + 0x38) < *(uint *)(in_ECX + 0x28)) {
    ExceptionList = &pvStack_10;
    uVar2 = FWaveModInfo::Pad16Bit(in_ECX,*(ulong *)(in_ECX + 0x28));
    uVar3 = FWaveModInfo::Pad16Bit(in_ECX,*(ulong *)(in_ECX + 0x38));
    iVar5 = uVar2 - uVar3;
    **(undefined4 **)(in_ECX + 0x18) = *(undefined4 *)(in_ECX + 0x38);
    **(int **)(in_ECX + 0x1c) = **(int **)(in_ECX + 0x1c) - iVar5;
    **(short **)(in_ECX + 8) =
         **(short **)(in_ECX + 0x10) * (short)((int)(uint)**(ushort **)(in_ECX + 0xc) >> 3);
    **(int **)(in_ECX + 4) = (uint)**(ushort **)(in_ECX + 8) * **(int **)in_ECX;
    if (*(int *)(in_ECX + 0x30) != 0) {
      local_20 = *(int *)(in_ECX + 0x34);
      uVar4 = ((uint)**(ushort **)(in_ECX + 0xc) * *(int *)(in_ECX + 0x28)) /
              *(uint *)(in_ECX + 0x38);
      for (local_28 = 0; local_28 < *(int *)(in_ECX + 0x30); local_28 = local_28 + 1) {
        *(uint *)(local_20 + 8) = (uint)(*(int *)(local_20 + 8) * *(int *)(in_ECX + 0x14)) / uVar4;
        *(uint *)(local_20 + 0xc) =
             (uint)(*(int *)(local_20 + 0xc) * *(int *)(in_ECX + 0x14)) / uVar4;
        local_20 = local_20 + 0x18;
      }
    }
    iVar1 = *(int *)(in_ECX + 0x24);
    for (local_2c = 0; local_2c < *(int *)(in_ECX + 0x2c) - *(int *)(in_ECX + 0x24);
        local_2c = local_2c + 1) {
      *(undefined1 *)((iVar1 - iVar5) + local_2c) =
           *(undefined1 *)(*(int *)(in_ECX + 0x24) + local_2c);
    }
    TArray<unsigned_char>::Remove(param_1,*(int *)(param_1 + 4) - iVar5,iVar5);
  }
  FUN_1053435e();
  return;
}


// ==== 1053430d Catch@1053430d

void Catch_1053430d(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x30) = *(undefined4 *)(unaff_EBP + -0x2c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x30,&DAT_10914c48);
}


// ==== 1053432e Catch@1053432e

void Catch_1053432e(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"FWaveModInfo::UpdateWaveData");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1053435e FUN_1053435e

void FUN_1053435e(void)

{
  int unaff_EBP;
  
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


// ==== 10534400 FUN_10534400

void FUN_10534400(void)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  int iVar6;
  undefined4 *in_ECX;
  int local_40;
  int local_38;
  int local_2c;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1081aad0;
  pvStack_10 = ExceptionList;
  local_8 = 0;
  iVar1 = in_ECX[8];
  iVar2 = *(int *)in_ECX[6];
  uVar3 = *(uint *)*in_ECX;
  uVar4 = *(uint *)*in_ECX;
  local_2c = 0;
  ExceptionList = &pvStack_10;
  for (local_38 = 0; local_38 < iVar2; local_38 = local_38 + 1) {
    iVar6 = thunk_FUN_10533e00(*(byte *)(iVar1 + local_38) - 0x80);
    if (iVar6 < 0x12) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
      if ((0 < local_2c) && (local_38 - local_2c < (int)(uVar4 / 0x2b11 << 5))) {
        bVar5 = false;
      }
    }
    if (local_2c == 0) {
      if (!bVar5) {
        local_2c = local_38;
      }
    }
    else if ((bVar5) || (local_38 == iVar2 + -1)) {
      if ((int)((uVar3 / 0x2b11) * 0x35c) <= local_38 - local_2c) {
        for (local_40 = local_2c; local_40 < local_38; local_40 = local_40 + 1) {
          *(undefined1 *)(iVar1 + local_40) = 0x80;
        }
      }
      local_2c = 0;
    }
  }
  FUN_105345b6();
  return;
}


// ==== 1053456c Catch@1053456c

void Catch_1053456c(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x44) = *(undefined4 *)(unaff_EBP + -0x40);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x44,&DAT_10914c48);
}


// ==== 1053458d Catch@1053458d

void Catch_1053458d(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"FWaveModInfo::NoiseGateFilter");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 105345b6 FUN_105345b6

void FUN_105345b6(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


// ==== 10534650 FUN_10534650

float10 FUN_10534650(void)

{
  FName *pFVar1;
  int iVar2;
  TLazyArray<unsigned_char> *in_ECX;
  TArray<unsigned_char> *local_5c;
  FName local_54 [8];
  int *local_4c [3];
  ushort *local_40;
  ushort *local_3c;
  uint *local_34;
  float local_8;
  
  local_8 = 0.0;
  pFVar1 = (FName *)FName::FName(local_54,(ushort *)&DAT_108b68c4,1);
  iVar2 = FName::operator!=((FName *)(*(int *)(in_ECX + 0x18) + 0x50),pFVar1);
  if (iVar2 == 0) {
    TLazyArray<unsigned_char>::Load(in_ECX);
    _memcpy(&local_8,(void *)(*(int *)(in_ECX + 0xc) + 4),4);
  }
  else {
    TLazyArray<unsigned_char>::Load(in_ECX);
    FWaveModInfo::FWaveModInfo((FWaveModInfo *)local_4c);
    if (in_ECX == (TLazyArray<unsigned_char> *)0x0) {
      local_5c = (TArray<unsigned_char> *)0x0;
    }
    else {
      local_5c = (TArray<unsigned_char> *)(in_ECX + 0xc);
    }
    iVar2 = FWaveModInfo::ReadWaveInfo((FWaveModInfo *)local_4c,local_5c);
    if ((iVar2 != 0) && (iVar2 = (uint)*local_3c * (uint)*local_40 * *local_4c[0], iVar2 != 0)) {
      local_8 = (float)(((float10)*local_34 * (float10)8.0) / (float10)iVar2);
    }
  }
  return (float10)local_8;
}


// ==== 10534760 FUN_10534760

void FUN_10534760(FArchive *param_1)

{
  int iVar1;
  UObject *in_ECX;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1081aae0;
  pvStack_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &pvStack_10;
  UObject::Serialize(in_ECX,param_1);
  (**(code **)(*(int *)param_1 + 0x1c))(in_ECX + 0x50);
  iVar1 = FArchive::IsLoading(param_1);
  if (iVar1 == 0) {
    iVar1 = FArchive::IsSaving(param_1);
    if (iVar1 == 0) {
      (**(code **)(*(int *)param_1 + 0x14))
                (*(undefined4 *)(in_ECX + 0x60),*(undefined4 *)(in_ECX + 0x60));
      goto LAB_105347f7;
    }
  }
  thunk_FUN_1037a940(param_1,in_ECX + 0x34);
LAB_105347f7:
  iVar1 = FArchive::IsLoading(param_1);
  if (iVar1 != 0) {
    *(undefined4 *)(in_ECX + 0x6c) = 0;
  }
  FUN_1053485a();
  return;
}


// ==== 10534810 Catch@10534810

void Catch_10534810(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x14);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_10914c48);
}


// ==== 10534831 Catch@10534831

void Catch_10534831(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"USound::Serialize");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1053485a FUN_1053485a

void FUN_1053485a(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


// ==== 105348c0 FUN_105348c0

void FUN_105348c0(void)

{
  TLazyArray<unsigned_char> *in_ECX;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1081aaf0;
  pvStack_10 = ExceptionList;
  local_8 = 1;
  ExceptionList = &pvStack_10;
  TLazyArray<unsigned_char>::Load(in_ECX);
  FUN_10534968();
  return;
}


// ==== 10534918 Catch@10534918

void Catch_10534918(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x9c) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x9c,&DAT_10914c48);
}


// ==== 1053493f Catch@1053493f

void Catch_1053493f(void)

{
  appUnwindf((ushort *)&DAT_10851d80,&DAT_108b6994);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10534968 FUN_10534968

void FUN_10534968(void)

{
  FName *pFVar1;
  int iVar2;
  int unaff_EBP;
  float fVar3;
  
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (*(int *)(unaff_EBP + -0x14) != 0) {
    pFVar1 = (FName *)FName::FName((FName *)(unaff_EBP + -0xa0),(ushort *)&DAT_108b68c4,1);
    iVar2 = FName::operator!=((FName *)(*(int *)(*(int *)(unaff_EBP + -0xdc) + 0x18) + 0x50),pFVar1)
    ;
    if (iVar2 != 0) {
      *(undefined1 *)(unaff_EBP + -4) = 3;
      *(undefined1 *)(unaff_EBP + -4) = 4;
      fVar3 = FSoundData::GetPeriod(*(FSoundData **)(unaff_EBP + -0xdc));
      *(float *)(*(int *)(*(int *)(unaff_EBP + -0xdc) + 0x18) + 100) = fVar3;
      FUN_10534a1b();
      return;
    }
  }
  if (*(int *)(unaff_EBP + -0x14) != 0) {
    pFVar1 = (FName *)FName::FName((FName *)(unaff_EBP + -200),(ushort *)&DAT_108b68c4,1);
    iVar2 = FName::operator==((FName *)(*(int *)(*(int *)(unaff_EBP + -0xdc) + 0x18) + 0x50),pFVar1)
    ;
    if (iVar2 != 0) {
      *(undefined1 *)(unaff_EBP + -4) = 0x15;
      fVar3 = FSoundData::GetPeriod(*(FSoundData **)(unaff_EBP + -0xdc));
      *(float *)(*(int *)(*(int *)(unaff_EBP + -0xdc) + 0x18) + 100) = fVar3;
      *(undefined4 *)(unaff_EBP + -0xd8) = *(undefined4 *)(*(int *)(unaff_EBP + -0xdc) + 0x10);
      *(undefined4 *)(*(int *)(*(int *)(unaff_EBP + -0xdc) + 0x18) + 0x60) =
           *(undefined4 *)(unaff_EBP + -0xd8);
      if ((USound::Audio != (UAudioSubsystem *)0x0) && (*(int *)GIsEditor_exref == 0)) {
        (**(code **)(*(int *)USound::Audio + 0x78))
                  (*(undefined4 *)(*(int *)(unaff_EBP + -0xdc) + 0x18));
      }
      FUN_10535004();
      return;
    }
  }
  FUN_10535061();
  return;
}


// ==== 105349cb Catch@105349cb

void Catch_105349cb(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0xa4) = *(undefined4 *)(unaff_EBP + -0x28);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0xa4,&DAT_10914c48);
}


// ==== 105349f2 Catch@105349f2

void Catch_105349f2(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"callingGetPerioid");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10534a1b FUN_10534a1b

void FUN_10534a1b(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -4) = 3;
  FUN_10534a79();
  return;
}


// ==== 10534a29 Catch@10534a29

void Catch_10534a29(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0xa8) = *(undefined4 *)(unaff_EBP + -0x2c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0xa8,&DAT_10914c48);
}


// ==== 10534a50 Catch@10534a50

void Catch_10534a50(void)

{
  appUnwindf((ushort *)&DAT_10851d80,&DAT_108b6964);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10534a79 FUN_10534a79

void FUN_10534a79(void)

{
  int iVar1;
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *(undefined4 *)(unaff_EBP + -0x1c) = 0;
  *(undefined4 *)(unaff_EBP + -0x20) = 0;
  *(undefined1 *)(unaff_EBP + -4) = 7;
  if (USound::Audio != (UAudioSubsystem *)0x0) {
    iVar1 = (**(code **)(*(int *)USound::Audio + 0xf4))();
    if ((iVar1 != 0) && (*(int *)GIsEditor_exref == 0)) {
      *(undefined4 *)(unaff_EBP + -0x1c) = 1;
      *(undefined4 *)(unaff_EBP + -0x20) = 1;
    }
  }
  FUN_10534b21();
  return;
}


// ==== 10534ad1 Catch@10534ad1

void Catch_10534ad1(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0xac) = *(undefined4 *)(unaff_EBP + -0x30);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0xac,&DAT_10914c48);
}


// ==== 10534af8 Catch@10534af8

void Catch_10534af8(void)

{
  appUnwindf((ushort *)&DAT_10851d80,&DAT_108b6960);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10534b21 FUN_10534b21

void FUN_10534b21(void)

{
  int iVar1;
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *(undefined4 *)(unaff_EBP + -0x24) = 0x5622;
  if ((*(int *)(unaff_EBP + -0x1c) == 0) && (*(int *)(unaff_EBP + -0x20) == 0)) {
    *(undefined1 *)(unaff_EBP + -4) = 0x13;
    *(undefined4 *)(unaff_EBP + -0xd4) = *(undefined4 *)(*(int *)(unaff_EBP + -0xdc) + 0x10);
    *(undefined4 *)(*(int *)(*(int *)(unaff_EBP + -0xdc) + 0x18) + 0x60) =
         *(undefined4 *)(unaff_EBP + -0xd4);
    if ((USound::Audio != (UAudioSubsystem *)0x0) && (*(int *)GIsEditor_exref == 0)) {
      (**(code **)(*(int *)USound::Audio + 0x78))
                (*(undefined4 *)(*(int *)(unaff_EBP + -0xdc) + 0x18));
    }
    FUN_10534efc();
    return;
  }
  *(undefined1 *)(unaff_EBP + -4) = 9;
  FWaveModInfo::FWaveModInfo((FWaveModInfo *)(unaff_EBP + -0x70));
  if (*(int *)(unaff_EBP + -0xdc) == 0) {
    *(undefined4 *)(unaff_EBP + -0xe0) = 0;
  }
  else {
    *(int *)(unaff_EBP + -0xe0) = *(int *)(unaff_EBP + -0xdc) + 0xc;
  }
  iVar1 = FWaveModInfo::ReadWaveInfo
                    ((FWaveModInfo *)(unaff_EBP + -0x70),
                     *(TArray<unsigned_char> **)(unaff_EBP + -0xe0));
  if ((iVar1 != 0) && (4 < *(uint *)(unaff_EBP + -0x48))) {
    if ((*(int *)(unaff_EBP + -0x1c) == 0) || (**(short **)(unaff_EBP + -100) != 0x10)) {
      *(undefined4 *)(unaff_EBP + -0xe4) = 0;
    }
    else {
      *(undefined4 *)(unaff_EBP + -0xe4) = 1;
    }
    *(undefined4 *)(unaff_EBP + -0x74) = *(undefined4 *)(unaff_EBP + -0xe4);
    if ((*(int *)(unaff_EBP + -0x20) == 0) ||
       (**(uint **)(unaff_EBP + -0x70) < *(uint *)(unaff_EBP + -0x24))) {
      *(undefined4 *)(unaff_EBP + -0xe8) = 0;
    }
    else {
      *(undefined4 *)(unaff_EBP + -0xe8) = 1;
    }
    *(undefined4 *)(unaff_EBP + -0x78) = *(undefined4 *)(unaff_EBP + -0xe8);
    if ((*(int *)(unaff_EBP + -0x74) != 0) && (*(int *)(unaff_EBP + -0x78) != 0)) {
      *(undefined1 *)(unaff_EBP + -4) = 10;
      FWaveModInfo::HalveReduce16to8((FWaveModInfo *)(unaff_EBP + -0x70));
      FUN_10534c5c();
      return;
    }
    if ((*(int *)(unaff_EBP + -0x74) != 0) && (*(int *)(unaff_EBP + -0x78) == 0)) {
      *(undefined1 *)(unaff_EBP + -4) = 0xc;
      FWaveModInfo::Reduce16to8((FWaveModInfo *)(unaff_EBP + -0x70));
      FUN_10534cd8();
      return;
    }
    if (*(int *)(unaff_EBP + -0x78) != 0) {
      *(undefined1 *)(unaff_EBP + -4) = 0xe;
      FWaveModInfo::HalveData((FWaveModInfo *)(unaff_EBP + -0x70));
      FUN_10534d4e();
      return;
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x10;
    if (*(int *)(unaff_EBP + -0xdc) == 0) {
      *(undefined4 *)(unaff_EBP + -0xec) = 0;
    }
    else {
      *(int *)(unaff_EBP + -0xec) = *(int *)(unaff_EBP + -0xdc) + 0xc;
    }
    FWaveModInfo::UpdateWaveData
              ((FWaveModInfo *)(unaff_EBP + -0x70),*(TArray<unsigned_char> **)(unaff_EBP + -0xec));
    FUN_10534de7();
    return;
  }
  FUN_10534e48();
  return;
}


// ==== 10534c0c Catch@10534c0c

void Catch_10534c0c(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0xb0) = *(undefined4 *)(unaff_EBP + -0x7c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0xb0,&DAT_10914c48);
}


// ==== 10534c33 Catch@10534c33

void Catch_10534c33(void)

{
  appUnwindf((ushort *)&DAT_10851d80,&DAT_108b695c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10534c5c FUN_10534c5c

void FUN_10534c5c(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -4) = 9;
  FUN_10534d59();
  return;
}


// ==== 10534c88 Catch@10534c88

void Catch_10534c88(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0xb4) = *(undefined4 *)(unaff_EBP + -0x80);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0xb4,&DAT_10914c48);
}


// ==== 10534caf Catch@10534caf

void Catch_10534caf(void)

{
  appUnwindf((ushort *)&DAT_10851d80,&DAT_108b6958);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10534cd8 FUN_10534cd8

void FUN_10534cd8(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -4) = 9;
  FUN_10534d59();
  return;
}


// ==== 10534cfb Catch@10534cfb

void Catch_10534cfb(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0xb8) = *(undefined4 *)(unaff_EBP + -0x84);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0xb8,&DAT_10914c48);
}


// ==== 10534d25 Catch@10534d25

void Catch_10534d25(void)

{
  appUnwindf((ushort *)&DAT_10851d80,&DAT_108b6954);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10534d4e FUN_10534d4e

void FUN_10534d4e(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -4) = 9;
  FUN_10534d59();
  return;
}


// ==== 10534d59 FUN_10534d59

void FUN_10534d59(void)

{
  int unaff_EBP;
  
  *(undefined1 *)(unaff_EBP + -4) = 0x10;
  if (*(int *)(unaff_EBP + -0xdc) == 0) {
    *(undefined4 *)(unaff_EBP + -0xec) = 0;
  }
  else {
    *(int *)(unaff_EBP + -0xec) = *(int *)(unaff_EBP + -0xdc) + 0xc;
  }
  FWaveModInfo::UpdateWaveData
            ((FWaveModInfo *)(unaff_EBP + -0x70),*(TArray<unsigned_char> **)(unaff_EBP + -0xec));
  FUN_10534de7();
  return;
}


// ==== 10534d94 Catch@10534d94

void Catch_10534d94(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0xbc) = *(undefined4 *)(unaff_EBP + -0x88);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0xbc,&DAT_10914c48);
}


// ==== 10534dbe Catch@10534dbe

void Catch_10534dbe(void)

{
  appUnwindf((ushort *)&DAT_10851d80,&DAT_108b6950);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10534de7 FUN_10534de7

void FUN_10534de7(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -4) = 9;
  FUN_10534e48();
  return;
}


// ==== 10534df5 Catch@10534df5

void Catch_10534df5(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0xc0) = *(undefined4 *)(unaff_EBP + -0x8c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0xc0,&DAT_10914c48);
}


// ==== 10534e1f Catch@10534e1f

void Catch_10534e1f(void)

{
  appUnwindf((ushort *)&DAT_10851d80,&DAT_108b694c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10534e48 FUN_10534e48

void FUN_10534e48(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *(undefined1 *)(unaff_EBP + -4) = 0x13;
  *(undefined4 *)(unaff_EBP + -0xd4) = *(undefined4 *)(*(int *)(unaff_EBP + -0xdc) + 0x10);
  *(undefined4 *)(*(int *)(*(int *)(unaff_EBP + -0xdc) + 0x18) + 0x60) =
       *(undefined4 *)(unaff_EBP + -0xd4);
  if ((USound::Audio != (UAudioSubsystem *)0x0) && (*(int *)GIsEditor_exref == 0)) {
    (**(code **)(*(int *)USound::Audio + 0x78))(*(undefined4 *)(*(int *)(unaff_EBP + -0xdc) + 0x18))
    ;
  }
  FUN_10534efc();
  return;
}


// ==== 10534ea9 Catch@10534ea9

void Catch_10534ea9(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0xc4) = *(undefined4 *)(unaff_EBP + -0x90);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0xc4,&DAT_10914c48);
}


// ==== 10534ed3 Catch@10534ed3

void Catch_10534ed3(void)

{
  appUnwindf((ushort *)&DAT_10851d80,&DAT_108b6948);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10534efc FUN_10534efc

void FUN_10534efc(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -4) = 0;
  FUN_10535061();
  return;
}


// ==== 10534fb1 Catch@10534fb1

void Catch_10534fb1(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0xcc) = *(undefined4 *)(unaff_EBP + -0x94);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0xcc,&DAT_10914c48);
}


// ==== 10534fdb Catch@10534fdb

void Catch_10534fdb(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"RegisterSound");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10535004 FUN_10535004

void FUN_10535004(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -4) = 0;
  FUN_10535061();
  return;
}


// ==== 1053500e Catch@1053500e

void Catch_1053500e(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0xd0) = *(undefined4 *)(unaff_EBP + -0x98);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0xd0,&DAT_10914c48);
}


// ==== 10535038 Catch@10535038

void Catch_10535038(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"FSoundData::Load");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10535061 FUN_10535061

void FUN_10535061(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


// ==== 10535270 FUN_10535270

void FUN_10535270(void)

{
  UParticleEmitter *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1081ab00;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  UParticleEmitter::PostEditChange(in_ECX);
  (**(code **)(*(int *)in_ECX + 0x6c))();
  (**(code **)(*(int *)in_ECX + 0x68))(*(undefined4 *)(in_ECX + 0x10c));
  ExceptionList = local_10;
  return;
}


// ==== 105352d0 Catch@105352d0

void Catch_105352d0(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 105352e4 Catch@105352e4

void Catch_105352e4(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"UBeamEmitter::PostEditChange");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10535330 FUN_10535330

void FUN_10535330(void)

{
  FName *in_ECX;
  
  FName::FName(in_ECX);
  FRangeVector::FRangeVector((FRangeVector *)(in_ECX + 4));
  return;
}


// ==== 105353b0 FUN_105353b0

void FUN_105353b0(void)

{
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1081ab19;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 10535430 FUN_10535430

void FUN_10535430(int param_1)

{
  int iVar1;
  UParticleEmitter *in_ECX;
  int iVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1081ab30;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  UParticleEmitter::Initialize(in_ECX,param_1);
  if (*(int *)(in_ECX + 0x4f0) == 0) {
    *(undefined4 *)(in_ECX + 0x5a0) = 1;
  }
  else {
    *(int *)(in_ECX + 0x5a0) = *(int *)(in_ECX + 0x4f0);
  }
  iVar1 = *(int *)(in_ECX + 0x52c);
  *(int *)(in_ECX + 0x5a4) = iVar1 * *(int *)(in_ECX + 0x5a0) * 2;
  iVar2 = (iVar1 + -1) * *(int *)(in_ECX + 0x5a0);
  *(int *)(in_ECX + 0x5a8) = iVar2 * 6;
  *(int *)(in_ECX + 0x5ac) = iVar2 * 2;
  FArray::Add((FArray *)(in_ECX + 0x5b4),iVar1 * param_1,0x10);
  FArray::Add((FArray *)(in_ECX + 0x5c0),*(int *)(in_ECX + 0x510) * param_1,0xc);
  (**(code **)(*(int *)in_ECX + 0x94))();
  ExceptionList = local_10;
  return;
}


// ==== 10535501 Catch@10535501

void Catch_10535501(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 10535515 Catch@10535515

void Catch_10535515(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"UBeamEmitter::Initialize");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10535580 FUN_10535580

void FUN_10535580(float param_1)

{
  UParticleEmitter *in_ECX;
  int iVar1;
  undefined1 local_40 [24];
  undefined1 local_28 [16];
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1081ab40;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffb4;
  local_8 = 0;
  ExceptionList = &local_10;
  UParticleEmitter::Scale(in_ECX,param_1);
  iVar1 = 0;
  while( true ) {
    local_18 = iVar1;
    if (*(int *)(in_ECX + 0x4dc) <= iVar1) break;
    FRangeVector::operator*=
              ((FRangeVector *)(*(int *)(in_ECX + 0x4d8) + 4 + iVar1 * 0x20),(float)local_40);
    iVar1 = iVar1 + 1;
  }
  FRange::operator*=((FRange *)(in_ECX + 0x4d0),(float)local_28);
  FRangeVector::operator*=((FRangeVector *)(in_ECX + 0x4f8),(float)local_40);
  FRangeVector::operator*=((FRangeVector *)(in_ECX + 0x514),(float)local_40);
  ExceptionList = local_10;
  return;
}


// ==== 10535642 Catch@10535642

void Catch_10535642(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_10914c48);
}


// ==== 10535656 Catch@10535656

void Catch_10535656(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"UBeamEmitter::Scale");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10535750 FUN_10535750

void FUN_10535750(float *param_1,float *param_2,float *param_3,float param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  fVar1 = param_3[1];
  fVar2 = param_2[1];
  fVar3 = param_3[2];
  fVar4 = param_2[2];
  fVar5 = param_2[1];
  fVar6 = param_2[2];
  *param_1 = *param_2 + param_4 * (*param_3 - *param_2);
  param_1[1] = (fVar1 - fVar2) * param_4 + fVar5;
  param_1[2] = fVar6 + param_4 * (fVar3 - fVar4);
  return;
}


// ==== 10535800 FUN_10535800

float10 FUN_10535800(float param_1,float param_2,float param_3)

{
  if (param_2 < param_1 != (param_2 == param_1)) {
    param_2 = param_1;
  }
  if (param_3 < param_2 == (param_3 == param_2)) {
    return (float10)param_3;
  }
  return (float10)param_2;
}


// ==== 10535860 FUN_10535860

void FUN_10535860(void)

{
  int iVar1;
  UParticleEmitter *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1081ab50;
  local_10 = ExceptionList;
  local_8 = 0;
  for (iVar1 = 0; iVar1 < *(int *)(in_ECX + 0x5b8); iVar1 = iVar1 + 1) {
  }
  ExceptionList = &local_10;
  FArray::Empty((FArray *)(in_ECX + 0x5b4),0x10,0);
  for (iVar1 = 0; iVar1 < *(int *)(in_ECX + 0x5c4); iVar1 = iVar1 + 1) {
  }
  FArray::Empty((FArray *)(in_ECX + 0x5c0),0xc,0);
  UParticleEmitter::CleanUp(in_ECX);
  ExceptionList = local_10;
  return;
}


// ==== 105358e7 Catch@105358e7

void Catch_105358e7(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x1c) = *(undefined4 *)(unaff_EBP + -0x20);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x1c,&DAT_10914c48);
}


// ==== 105358fb Catch@105358fb

void Catch_105358fb(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"UBeamEmitter::CleanUp");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10535950 FUN_10535950

void FUN_10535950(void)

{
  int iVar1;
  int iVar2;
  ushort *puVar3;
  int iVar4;
  int in_ECX;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  FName *pFVar8;
  undefined4 uVar9;
  int local_f8;
  undefined4 local_f4;
  int local_f0;
  undefined4 local_ec;
  FName local_e8 [4];
  FRangeVector local_e4 [28];
  ushort local_c8 [100];
  
  if (*(int *)(in_ECX + 0x420) != 0) {
    FArray::Empty((FArray *)(in_ECX + 0x5cc),4,0);
    FArray::Add((FArray *)(in_ECX + 0x5cc),*(int *)(in_ECX + 0x4dc),4);
    iVar1 = *(int *)(*(int *)(in_ECX + 0x420) + 0xe4);
    FName::FName((FName *)&local_f4);
    local_f8 = 0;
    if (0 < *(int *)(in_ECX + 0x4dc)) {
      do {
        iVar6 = 0;
        *(undefined4 *)(*(int *)(in_ECX + 0x5cc) + local_f8 * 4) = 0;
        if (0 < *(int *)(iVar1 + 0x3c)) {
          local_f0 = local_f8 << 5;
          do {
            iVar2 = local_f0;
            FName::FName(local_e8);
            FRangeVector::FRangeVector(local_e4);
            iVar4 = *(int *)(iVar1 + 0x38);
            puVar7 = (undefined4 *)(*(int *)(in_ECX + 0x4d8) + iVar2);
            pFVar8 = local_e8;
            for (iVar5 = 8; iVar5 != 0; iVar5 = iVar5 + -1) {
              *(undefined4 *)pFVar8 = *puVar7;
              puVar7 = puVar7 + 1;
              pFVar8 = pFVar8 + 4;
            }
            if (*(int *)(iVar4 + iVar6 * 4) != 0) {
              iVar4 = *(int *)(iVar4 + iVar6 * 4);
              uVar9 = *(undefined4 *)(iVar4 + 0x60);
              puVar3 = FName::operator*((FName *)(iVar4 + 0x10c));
              appSprintf(local_c8,(ushort *)L"%s%i",puVar3,uVar9);
              FName::FName((FName *)&local_ec,local_c8,1);
              local_f4 = local_ec;
              iVar4 = FName::operator==((FName *)&local_f4,
                                        (FName *)(*(int *)(in_ECX + 0x4d8) + local_f0));
              if (iVar4 != 0) {
                *(undefined4 *)(*(int *)(in_ECX + 0x5cc) + local_f8 * 4) =
                     *(undefined4 *)(*(int *)(iVar1 + 0x38) + iVar6 * 4);
                break;
              }
            }
            iVar6 = iVar6 + 1;
          } while (iVar6 < *(int *)(iVar1 + 0x3c));
        }
        local_f8 = local_f8 + 1;
      } while (local_f8 < *(int *)(in_ECX + 0x4dc));
    }
  }
  return;
}


// ==== 10535b40 FUN_10535b40

undefined4 FUN_10535b40(float param_1,float param_2,float param_3,int param_4,FVector *param_5)

{
  AActor *pAVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  float *pfVar5;
  float *pfVar6;
  float *pfVar7;
  UParticleEmitter *in_ECX;
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
  iVar4 = UParticleEmitter::SpawnParticle(in_ECX,(int)param_1,param_2,(int)param_3,param_4,param_5);
  if (iVar4 == 0) {
    ExceptionList = local_70;
    return 0;
  }
  pfVar9 = (float *)((int)param_1 * 0xe0 + *(int *)(in_ECX + 0x42c));
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
  if ((byte)((char)in_ECX[0x4e4] - 2U) < 4) {
    if (*(float *)(in_ECX + 0x5b0) != 0.0) {
      fVar11 = appFrand();
      local_f4 = 0;
      for (param_5 = (FVector *)0x0;
          (iVar4 = iVar10, iVar3 = local_60, local_f4 < *(int *)(in_ECX + 0x4dc) &&
          ((fVar11 * *(float *)(in_ECX + 0x5b0) <= (float)param_5 ||
           (iVar4 = local_f4, iVar3 = local_f4,
           *(float *)(*(int *)(in_ECX + 0x4d8) + 0x1c + local_f4 * 0x20) + (float)param_5 <
           fVar11 * *(float *)(in_ECX + 0x5b0)))));
          param_5 = (FVector *)
                    ((float)param_5 + *(float *)(*(int *)(in_ECX + 0x4d8) + 0x1c + iVar4))) {
        iVar4 = local_f4 * 0x20;
        local_f4 = local_f4 + 1;
      }
      local_60 = iVar3;
      if (iVar4 != -1) goto LAB_10535c66;
    }
    if (*(int *)(in_ECX + 0x4dc) != 0) {
      iVar4 = 0;
      local_60 = 0;
    }
  }
LAB_10535c66:
  if (((in_ECX[0x4e4] == (UParticleEmitter)0x4) && (in_ECX[0x108] == (UParticleEmitter)0x1)) &&
     (*(int *)GLog_exref != 0)) {
    FOutputDevice::Logf2(*(FOutputDevice **)GLog_exref,(ushort *)*(FOutputDevice **)GLog_exref);
  }
  switch(in_ECX[0x4e4]) {
  case (UParticleEmitter)0x0:
    pfVar6 = (float *)thunk_FUN_103301a0(&local_e0,pfVar9[0x2c]);
    local_20 = *pfVar6;
    local_1c = pfVar6[1];
    local_18 = pfVar6[2];
    break;
  case (UParticleEmitter)0x1:
    FVector::Normalize((FVector *)(pfVar9 + 6));
    fVar11 = FRange::GetRand((FRange *)(in_ECX + 0x4d0));
    pfVar6 = (float *)thunk_FUN_103301a0(&local_144,fVar11);
    local_20 = *pfVar6;
    local_1c = pfVar6[1];
    local_18 = pfVar6[2];
    break;
  case (UParticleEmitter)0x2:
    if (iVar4 != -1) {
      FRangeVector::GetRand((FRangeVector *)(*(int *)(in_ECX + 0x4d8) + 4 + iVar4 * 0x20));
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
    if (((iVar4 != -1) && (iVar4 < *(int *)(in_ECX + 0x5d0))) &&
       (piVar2 = (int *)(*(int *)(in_ECX + 0x5cc) + iVar4 * 4), *piVar2 != 0)) {
      pAVar1 = *(AActor **)(in_ECX + 0x420);
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
      if (((byte)in_ECX[0x4f4] & 1) != 0) {
        AActor::eventTrigger((AActor *)*piVar2,pAVar1,(APawn *)0x0);
      }
    }
    local_40 = 0;
    break;
  case (UParticleEmitter)0x4:
    if (iVar4 != -1) {
      FRangeVector::GetRand((FRangeVector *)(*(int *)(in_ECX + 0x4d8) + 4 + iVar4 * 0x20));
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
      iVar4 = (**(code **)(**(int **)(*(int *)(in_ECX + 0x420) + 0xe4) + 0xe4))
                        (local_190,*(int *)(in_ECX + 0x420),&local_30,pfVar9,0xdf,0,0,0);
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
      FRangeVector::GetRand((FRangeVector *)(*(int *)(in_ECX + 0x4d8) + 4 + iVar4 * 0x20));
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
  if (((byte)in_ECX[0x550] & 4) != 0) {
    local_40 = 0;
  }
  local_8 = *(float **)(in_ECX + 0x52c);
  fVar11 = 1.0 / (float)((int)local_8 + -1);
  iVar4 = *(int *)(in_ECX + 0x510);
  local_64 = 1.0 / (float)(iVar4 + -1);
  local_f8 = 1.0 / (float)iVar4;
  local_12c = 1.0 / (float)(int)local_8;
  pfVar6 = (float *)(*(int *)(in_ECX + 0x5c0) + iVar4 * (int)param_1 * 0xc);
  *pfVar6 = *pfVar9;
  pfVar6[1] = pfVar9[1];
  pfVar6[2] = pfVar9[2];
  local_54 = 0.0;
  local_50 = 0.0;
  local_4c = 0.0;
  for (local_48 = 1; pfVar7 = pfVar6 + 3, local_48 < *(int *)(in_ECX + 0x510);
      local_48 = local_48 + 1) {
    local_24 = pfVar7;
    if (((byte)in_ECX[0x550] & 2) == 0) {
      pfVar5 = (float *)FRangeVector::GetRand((FRangeVector *)(in_ECX + 0x4f8));
      local_54 = *pfVar5;
      local_50 = pfVar5[1];
      local_4c = pfVar5[2];
    }
    else {
      fVar12 = appFractional((float)local_48 * local_f8 * (*(float *)(in_ECX + 0x548) + 1.0));
      for (local_124 = 0; local_124 < *(int *)(in_ECX + 0x534); local_124 = local_124 + 1) {
        iVar4 = *(int *)(in_ECX + 0x530) + local_124 * 0x10;
        if (fVar12 <= *(float *)(iVar4 + 0xc)) {
          puVar8 = (undefined4 *)(local_124 * 0x10 + *(int *)(in_ECX + 0x530));
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
            param_3 = 0.0;
          }
          else {
            local_a4 = *(undefined4 *)(iVar4 + -0x10);
            local_a0 = *(undefined4 *)(iVar4 + -0xc);
            local_9c = *(undefined4 *)(iVar4 + -8);
            param_3 = *(float *)(iVar4 + -4);
          }
          if ((float)local_8 == 0.0) {
            fVar12 = 1.0;
          }
          else {
            fVar12 = (fVar12 - param_3) / ((float)local_8 - param_3);
          }
          local_8 = (float *)FRangeVector::GetRand((FRangeVector *)(in_ECX + 0x514));
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
  local_24 = (float *)(*(int *)(in_ECX + 0x5c0) + *(int *)(in_ECX + 0x510) * (int)param_1 * 0xc);
  puVar8 = (undefined4 *)(*(int *)(in_ECX + 0x52c) * (int)param_1 * 0x10 + *(int *)(in_ECX + 0x5b4))
  ;
  *puVar8 = *local_24;
  puVar8[1] = local_24[1];
  puVar8[2] = local_24[2];
  puVar8[3] = 0;
  local_5c = (float *)(puVar8 + 4);
  local_14 = 0.0;
  local_10 = 0.0;
  local_c = 0.0;
  local_44 = 1;
  param_5 = (FVector *)fVar11;
  do {
    pfVar9 = local_5c;
    if (*(int *)(in_ECX + 0x52c) <= local_44) {
      if (local_40 != 0) {
        local_5c[-4] = local_30;
        local_5c[-3] = local_2c;
        local_5c[-2] = local_28;
      }
      ExceptionList = local_70;
      return 1;
    }
    if (((byte)in_ECX[0x550] & 1) == 0) {
      pfVar6 = (float *)FRangeVector::GetRand((FRangeVector *)(in_ECX + 0x514));
      local_14 = *pfVar6;
      local_10 = pfVar6[1];
      local_c = pfVar6[2];
    }
    else {
      fVar12 = appFractional((float)local_44 * local_12c * (*(float *)(in_ECX + 0x54c) + 1.0));
      for (local_fc = 0; local_fc < *(int *)(in_ECX + 0x540); local_fc = local_fc + 1) {
        iVar4 = local_fc * 0x10 + *(int *)(in_ECX + 0x53c);
        if (fVar12 <= *(float *)(iVar4 + 0xc)) {
          puVar8 = (undefined4 *)(local_fc * 0x10 + *(int *)(in_ECX + 0x53c));
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
            param_1 = 0.0;
          }
          else {
            local_8c = *(undefined4 *)(iVar4 + -0x10);
            local_88 = *(undefined4 *)(iVar4 + -0xc);
            local_84 = *(undefined4 *)(iVar4 + -8);
            param_1 = *(float *)(iVar4 + -4);
          }
          if ((float)puVar8[3] == 0.0) {
            fVar12 = 1.0;
          }
          else {
            fVar12 = (fVar12 - param_1) / ((float)puVar8[3] - param_1);
          }
          pfVar6 = (float *)FRangeVector::GetRand((FRangeVector *)(in_ECX + 0x514));
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
    fVar12 = (float)(*(int *)(in_ECX + 0x510) + -1) * (float)param_5;
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
    if (((((byte)in_ECX[0x57c] & 1) != 0) && (*(float *)(in_ECX + 0x588) < fVar12)) &&
       (fVar12 < *(float *)(in_ECX + 0x58c))) {
      fVar12 = FRange::GetRand((FRange *)(in_ECX + 0x580));
      local_38 = (double)fVar12;
      fVar12 = appFrand();
      if ((fVar12 < (float)local_38 != (fVar12 == (float)local_38)) &&
         (-1 < *(int *)(in_ECX + 0x590))) {
        piVar2 = *(int **)(*(int *)(*(int *)(in_ECX + 0x420) + 0x3bc) + *(int *)(in_ECX + 0x590) * 4
                          );
        if ((*(byte *)(piVar2 + 0x109) & 1) != 0) {
          piVar2[0x108] = *(int *)(in_ECX + 0x420);
          FRange::GetRand((FRange *)(in_ECX + 0x594));
          iVar4 = FUN_107a6660();
          for (local_58 = 0; local_58 < iVar4; local_58 = local_58 + 1) {
            (**(code **)(*piVar2 + 0x80))(piVar2[0x10e],param_2,0,3);
            if (((byte)in_ECX[0x59c] & 1) != 0) {
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
    param_5 = (FVector *)((float)param_5 + fVar11);
    if (local_64 < (float)param_5 == (local_64 == (float)param_5)) {
      local_44 = local_44 + 1;
    }
    else {
      param_5 = (FVector *)((float)param_5 - local_64);
      local_24 = local_24 + 3;
      local_44 = local_44 + 1;
    }
  } while( true );
}


// ==== 1053681e Catch@1053681e

void Catch_1053681e(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x8c) = *(undefined4 *)(unaff_EBP + -0xe4);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x8c,&DAT_10914c48);
}


// ==== 1053683b Catch@1053683b

void Catch_1053683b(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"UBeamEmitter::SpawnParticle");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10536bc0 FUN_10536bc0

int FUN_10536bc0(float param_1)

{
  float *pfVar1;
  int iVar2;
  float fVar3;
  undefined1 *puVar4;
  undefined4 uVar5;
  FVector *pFVar6;
  undefined4 *puVar7;
  FMatrix *pFVar8;
  UParticleEmitter *in_ECX;
  int iVar9;
  undefined4 *puVar10;
  FBox *pFVar11;
  undefined4 auStack_348 [15];
  undefined4 uStack_30c;
  FMatrix *pFStack_308;
  undefined4 auStack_304 [12];
  undefined4 uStack_2d4;
  float fStack_2d0;
  float fStack_2cc;
  undefined4 local_274 [32];
  FMatrix local_1f4 [128];
  FMatrix local_174 [64];
  undefined4 local_134 [16];
  FMatrix local_f4 [64];
  FMatrix local_b4 [64];
  undefined1 *local_74;
  void *local_70;
  undefined1 *puStack_6c;
  int local_68;
  FMatrix local_64 [32];
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  FBox *local_20;
  int local_18;
  int local_14;
  int local_10;
  float local_c;
  float local_8;
  
  puStack_6c = &LAB_1081abbe;
  local_70 = ExceptionList;
  local_74 = &stack0xfffffd40;
  iVar9 = 0;
  local_68 = 0;
  fVar3 = 0.0;
  ExceptionList = &local_70;
  for (local_18 = 0; *(float *)(in_ECX + 0x5b0) = fVar3, local_18 < *(int *)(in_ECX + 0x4dc);
      local_18 = local_18 + 1) {
    fVar3 = *(float *)(*(int *)(in_ECX + 0x4d8) + 0x1c + local_18 * 0x20) +
            *(float *)(in_ECX + 0x5b0);
  }
  puVar4 = &stack0xfffffd40;
  if (*(int *)(in_ECX + 0x5d0) != *(int *)(in_ECX + 0x4dc)) {
    (**(code **)(*(int *)in_ECX + 0x94))();
    puVar4 = local_74;
  }
  local_74 = puVar4;
  if (*(int *)(in_ECX + 0x420) == 0) {
    local_14 = 0;
  }
  else {
    if (-1 < *(int *)(in_ECX + 0x590)) {
      fStack_2d0 = 4.169591e-29;
      fStack_2cc = (float)*(int *)(in_ECX + 0x590);
      uVar5 = thunk_FUN_10370460();
      *(undefined4 *)(in_ECX + 0x590) = uVar5;
    }
    local_14 = UParticleEmitter::UpdateParticles(in_ECX,param_1);
    *(float *)(in_ECX + 0x5d8) = *(float *)(in_ECX + 0x5d8) + param_1;
    FBox::Init((FBox *)(in_ECX + 0x444));
    while (local_10 = iVar9, iVar9 < *(int *)(in_ECX + 0x43c)) {
      if ((*(byte *)(*(int *)(in_ECX + 0x42c) + 0xbc + iVar9 * 0xe0) & 1) == 0) {
LAB_10536db5:
        iVar9 = iVar9 + 1;
      }
      else {
        pFVar11 = (FBox *)(in_ECX + 0x444);
        pFVar6 = (FVector *)(*(int *)(in_ECX + 0x52c) * iVar9 * 0x10 + *(int *)(in_ECX + 0x5b4));
        if (in_ECX[0x108] != (UParticleEmitter)0x1) {
          FBox::operator+=(pFVar11,pFVar6);
          FBox::operator+=(pFVar11,(FVector *)
                                   ((iVar9 + 1) * *(int *)(in_ECX + 0x52c) * 0x10 + -0x10 +
                                   *(int *)(in_ECX + 0x5b4)));
          goto LAB_10536db5;
        }
        iVar2 = *(int *)(in_ECX + 0x420);
        local_44 = *(float *)(iVar2 + 0x1bc) + *(float *)pFVar6;
        local_40 = *(float *)(iVar2 + 0x1c0) + *(float *)(pFVar6 + 4);
        local_3c = *(float *)(iVar2 + 0x1c4) + *(float *)(pFVar6 + 8);
        local_c = local_40;
        local_8 = local_3c;
        FBox::operator+=(pFVar11,(FVector *)&local_44);
        pfVar1 = (float *)((iVar9 + 1) * *(int *)(in_ECX + 0x52c) * 0x10 + -0x10 +
                          *(int *)(in_ECX + 0x5b4));
        iVar2 = *(int *)(in_ECX + 0x420);
        local_38 = *(float *)(iVar2 + 0x1bc) + *pfVar1;
        local_34 = *(float *)(iVar2 + 0x1c0) + pfVar1[1];
        local_30 = *(float *)(iVar2 + 0x1c4) + pfVar1[2];
        local_c = local_30;
        local_8 = local_34;
        FBox::operator+=(pFVar11,(FVector *)&local_38);
        iVar9 = iVar9 + 1;
      }
    }
    FRange::Size((FRange *)(in_ECX + 0x524));
    FRange::Size((FRange *)(in_ECX + 0x51c));
    fStack_2cc = 4.1697084e-29;
    fStack_2cc = FRange::Size((FRange *)(in_ECX + 0x514));
    fStack_2d0 = 4.1697112e-29;
    thunk_FUN_10535800();
    FRange::Size((FRange *)(in_ECX + 0x508));
    FRange::Size((FRange *)(in_ECX + 0x500));
    fStack_2cc = 4.169728e-29;
    fStack_2cc = FRange::Size((FRange *)(in_ECX + 0x4f8));
    fStack_2d0 = 4.1697307e-29;
    thunk_FUN_10535800();
    pFVar11 = (FBox *)(in_ECX + 0x444);
    local_20 = pFVar11;
    FRange::GetMax((FRange *)(in_ECX + 0x2cc));
    fStack_2cc = 4.169749e-29;
    puVar7 = (undefined4 *)FBox::ExpandBy(pFVar11,(float)local_64);
    for (iVar9 = 7; iVar9 != 0; iVar9 = iVar9 + -1) {
      *(undefined4 *)pFVar11 = *puVar7;
      puVar7 = puVar7 + 1;
      pFVar11 = pFVar11 + 4;
    }
    if (in_ECX[0x108] == (UParticleEmitter)0x1) {
      fStack_2d0 = *(float *)(*(int *)(in_ECX + 0x420) + 0x1bc);
      fStack_2cc = *(float *)(*(int *)(in_ECX + 0x420) + 0x1c0);
      uStack_2d4 = 0x10536eb1;
      puVar7 = (undefined4 *)thunk_FUN_10326fb0();
      local_68._0_1_ = 1;
      pFVar8 = local_f4;
      for (iVar9 = 0x10; iVar9 != 0; iVar9 = iVar9 + -1) {
        *(undefined4 *)pFVar8 = *puVar7;
        puVar7 = puVar7 + 1;
        pFVar8 = pFVar8 + 4;
      }
      fStack_2d0 = *(float *)(*(int *)(in_ECX + 0x420) + 0x1c8);
      fStack_2cc = *(float *)(*(int *)(in_ECX + 0x420) + 0x1cc);
      uStack_2d4 = 0x10536eef;
      puVar7 = (undefined4 *)thunk_FUN_105263f0();
      local_68 = CONCAT31(local_68._1_3_,2);
      pFVar8 = local_b4;
      for (iVar9 = 0x10; iVar9 != 0; iVar9 = iVar9 + -1) {
        *(undefined4 *)pFVar8 = *puVar7;
        puVar7 = puVar7 + 1;
        pFVar8 = pFVar8 + 4;
      }
      pFVar8 = local_f4;
      puVar7 = local_274;
      for (iVar9 = 0x10; iVar9 != 0; iVar9 = iVar9 + -1) {
        *puVar7 = *(undefined4 *)pFVar8;
        pFVar8 = pFVar8 + 4;
        puVar7 = puVar7 + 1;
      }
      local_68._0_1_ = 3;
      pFVar8 = local_b4;
      puVar7 = local_134;
      for (iVar9 = 0x10; iVar9 != 0; iVar9 = iVar9 + -1) {
        *puVar7 = *(undefined4 *)pFVar8;
        pFVar8 = pFVar8 + 4;
        puVar7 = puVar7 + 1;
      }
      local_68._0_1_ = 4;
      iVar9 = *(int *)(in_ECX + 0x420);
      fStack_2d0 = -*(float *)(iVar9 + 0x1bc);
      fStack_2cc = -*(float *)(iVar9 + 0x1c0);
      local_24 = -*(float *)(iVar9 + 0x1c4);
      uStack_2d4 = 0x10536f80;
      local_2c = fStack_2d0;
      local_28 = fStack_2cc;
      local_c = local_24;
      local_8 = fStack_2cc;
      pFVar8 = (FMatrix *)thunk_FUN_10326fb0();
      local_68._0_1_ = 5;
      puVar7 = local_134;
      puVar10 = auStack_304;
      for (iVar9 = 0x10; iVar9 != 0; iVar9 = iVar9 + -1) {
        *puVar10 = *puVar7;
        puVar7 = puVar7 + 1;
        puVar10 = puVar10 + 1;
      }
      pFStack_308 = local_174;
      uStack_30c = 0x10536fa5;
      pFVar8 = (FMatrix *)FMatrix::operator*(pFVar8);
      local_68._0_1_ = 6;
      puVar7 = local_274;
      puVar10 = auStack_348;
      for (iVar9 = 0x10; iVar9 != 0; iVar9 = iVar9 + -1) {
        *puVar10 = *puVar7;
        puVar7 = puVar7 + 1;
        puVar10 = puVar10 + 1;
      }
      uVar5 = FMatrix::operator*(pFVar8,local_1f4);
      pFVar11 = local_20;
      local_68._0_1_ = 7;
      puVar7 = (undefined4 *)FBox::TransformBy(local_20,local_64);
      for (iVar9 = 7; iVar9 != 0; iVar9 = iVar9 + -1) {
        *(undefined4 *)pFVar11 = *puVar7;
        puVar7 = puVar7 + 1;
        pFVar11 = pFVar11 + 4;
      }
      local_68._0_1_ = 6;
      FMatrix::~FMatrix(local_1f4);
      local_68._0_1_ = 5;
      FMatrix::~FMatrix(local_174);
      local_68._0_1_ = 4;
      thunk_FUN_103284c0(uVar5);
      local_68._0_1_ = 3;
      FMatrix::~FMatrix(local_b4);
      local_68._0_1_ = 2;
      FMatrix::~FMatrix(local_f4);
      local_68._0_1_ = 1;
      thunk_FUN_10526040();
      local_68 = (uint)local_68._1_3_ << 8;
      thunk_FUN_103284c0();
    }
  }
  ExceptionList = local_70;
  return local_14;
}


// ==== 1053706f Catch@1053706f

void Catch_1053706f(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + 0x48) = *(undefined4 *)(unaff_EBP + 0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + 0x48,&DAT_10914c48);
}


// ==== 10537083 Catch@10537083

void Catch_10537083(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"UBeamEmitter::UpdateParticles");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 105371e0 FUN_105371e0

void FUN_105371e0(void)

{
  int iVar1;
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_1081abe9;
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
  FArray::Remove(in_ECX,0,iVar1,0x18);
  local_4 = 0xffffffff;
  FArray::~FArray(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 105372a0 FUN_105372a0

void FUN_105372a0(void)

{
  FRenderResource *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_1081ac1b;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  thunk_FUN_105371e0();
  local_4 = 0xffffffff;
  FRenderResource::~FRenderResource(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 10537300 FUN_10537300

void FUN_10537300(void)

{
  int iVar1;
  uint uVar2;
  code *pcVar3;
  undefined4 *in_ECX;
  longlong lVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_1081ac54;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *in_ECX = FRenderResource::vftable;
  in_ECX[1] = 0;
  in_ECX[2] = 0;
  *in_ECX = FVertexStream::vftable;
  local_4 = 1;
  *in_ECX = FParticleVertexStream<FBeamVertex>::vftable;
  FArray::FArray((FArray *)(in_ECX + 3));
  pcVar3 = GMakeCacheIDIndex_exref;
  local_4 = CONCAT31(local_4._1_3_,3);
  iVar1 = *(int *)(GMakeCacheIDIndex_exref + 4);
  uVar2 = *(uint *)GMakeCacheIDIndex_exref;
  lVar4 = __allmul(uVar2,iVar1,0x100,0);
  *(uint *)pcVar3 = uVar2 + 1;
  *(uint *)(GMakeCacheIDIndex_exref + 4) = iVar1 + (uint)(0xfffffffe < uVar2);
  *(longlong *)(in_ECX + 1) = lVar4 + 0xe1;
  ExceptionList = local_c;
  return;
}


// ==== 10537420 FUN_10537420

undefined4 FUN_10537420(void)

{
  return 1;
}


// ==== 10537430 FUN_10537430

int FUN_10537430(void)

{
  int in_ECX;
  
  return *(int *)(in_ECX + 0x10) * 0x18;
}


// ==== 10537440 FUN_10537440

undefined4 FUN_10537440(void)

{
  return 0x18;
}


// ==== 10537450 FUN_10537450

undefined4 FUN_10537450(undefined4 *param_1)

{
  *param_1 = 1;
  param_1[1] = 0;
  param_1[2] = 4;
  param_1[3] = 2;
  param_1[4] = 2;
  param_1[5] = 4;
  return 3;
}


// ==== 10537490 FUN_10537490

void FUN_10537490(void *param_1)

{
  int in_ECX;
  
  _memcpy(param_1,*(void **)(in_ECX + 0xc),*(int *)(in_ECX + 0x10) * 0x18);
  return;
}


// ==== 105374c0 FUN_105374c0

void FUN_105374c0(int *param_1,int param_2)

{
  int in_ECX;
  
  *param_1 = *(int *)(in_ECX + 0xc) + param_2 * 0x18;
  return;
}


// ==== 105374e0 FUN_105374e0

void FUN_105374e0(byte param_1)

{
  FRenderResource *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_1081ac8b;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  thunk_FUN_105371e0();
  local_4 = 0xffffffff;
  FRenderResource::~FRenderResource(in_ECX);
  if ((param_1 & 1) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))();
  }
  ExceptionList = local_c;
  return;
}


// ==== 10537560 FUN_10537560

int FUN_10537560(FDynamicActor *param_1,FLevelSceneNode *param_2,TList<FDynamicLight*> *param_3,
                FRenderInterface *param_4)

{
  uint *puVar1;
  float fVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  FLevelSceneNode *pFVar6;
  FVector *pFVar7;
  FCoords *this;
  float *pfVar8;
  float *pfVar9;
  undefined4 *puVar10;
  FMatrix *pFVar11;
  undefined4 uVar12;
  UParticleEmitter *in_ECX;
  int iVar13;
  int iVar14;
  float *pfVar15;
  undefined4 *puVar16;
  code *pcVar17;
  FRenderInterface *pFVar18;
  float10 fVar19;
  int iStack_320;
  int iStack_31c;
  undefined4 uStack_318;
  int iStack_314;
  FRawIndexBuffer *pFStack_310;
  undefined4 uStack_30c;
  undefined1 *puStack_308;
  undefined4 uStack_304;
  undefined4 auStack_300 [15];
  undefined4 uStack_2c4;
  FMatrix *pFStack_2c0;
  undefined4 auStack_2bc [10];
  undefined4 uStack_294;
  undefined1 *puStack_290;
  FMatrix local_1e4 [64];
  undefined4 local_1a4 [16];
  FMatrix local_164 [16];
  FRotator local_154 [48];
  undefined1 local_124 [12];
  float local_118;
  undefined1 local_10c [24];
  FRawIndexBuffer local_f4 [12];
  TArray<unsigned_short> local_e8 [16];
  undefined1 local_d8 [12];
  float *local_cc [5];
  int local_b8;
  float local_b4;
  float local_b0;
  float local_ac;
  float local_a8;
  float local_a4;
  float local_a0;
  float local_98;
  float local_94;
  float local_90;
  float *local_8c;
  float local_88;
  float local_84;
  float local_80;
  undefined1 *local_7c;
  void *local_78;
  undefined1 *puStack_74;
  uint local_70;
  float local_6c;
  float local_68;
  float local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  int local_54;
  float local_50;
  float local_4c;
  float local_48;
  float *local_44;
  float local_40;
  float local_3c;
  float local_38;
  int local_34;
  int local_30;
  float local_2c;
  float local_28;
  float local_24;
  int local_20;
  ushort *local_1c;
  int local_18;
  float local_14;
  int local_10;
  float local_c;
  float local_8;
  
  pFVar6 = param_2;
  puStack_74 = &LAB_1081ace1;
  local_78 = ExceptionList;
  local_7c = &stack0xfffffd90;
  local_70 = 0;
  ExceptionList = &local_78;
  UParticleEmitter::RenderParticles(in_ECX,param_1,param_2,param_3,param_4);
  if (*(int *)(in_ECX + 0x348) == 0) {
    local_18 = 0;
  }
  else {
    local_40 = *(float *)(pFVar6 + 0x194);
    local_3c = *(float *)(pFVar6 + 0x198);
    local_38 = *(float *)(pFVar6 + 0x19c);
    if (in_ECX[0x108] == (UParticleEmitter)0x1) {
      pFVar7 = (FVector *)(*(int *)(in_ECX + 0x420) + 0x1c8);
      this = (FCoords *)FCoords::operator/((FCoords *)(GMath_exref + 0x18),local_154);
      FCoords::operator/(this,pFVar7);
      pfVar8 = (float *)FVector::TransformPointBy((FVector *)&local_40,(FCoords *)&local_b4);
      local_40 = *pfVar8;
      local_3c = pfVar8[1];
      local_38 = pfVar8[2];
    }
    thunk_FUN_10537300();
    local_70._0_1_ = 1;
    FRawIndexBuffer::FRawIndexBuffer(local_f4);
    local_70 = CONCAT31(local_70._1_3_,2);
    FArray::Add((FArray *)local_cc,*(int *)(in_ECX + 0x5a4) * *(int *)(in_ECX + 0x10c),0x18);
    TArray<unsigned_short>::Add(local_e8,*(int *)(in_ECX + 0x5a8) * *(int *)(in_ECX + 0x10c));
    local_44 = local_cc[0];
    local_1c = TArray<unsigned_short>::operator()(local_e8,0);
    local_18 = 0;
    pfVar8 = local_cc[0];
    for (local_34 = 0; pFVar18 = param_4, local_34 < *(int *)(in_ECX + 0x43c);
        local_34 = local_34 + 1) {
      local_b8 = local_34 * 0xe0 + *(int *)(in_ECX + 0x42c);
      if ((*(byte *)(local_b8 + 0xbc) & 1) != 0) {
        param_1 = *(FDynamicActor **)(local_b8 + 0xa8);
        param_3 = (TList<FDynamicLight*> *)0x1;
        local_8 = FRange::GetRand((FRange *)(in_ECX + 0x574));
        if (local_8 != 0.0) {
          param_3 = (TList<FDynamicLight*> *)FUN_107a6660();
          local_8 = *(float *)(in_ECX + 0x5d8);
          fVar19 = (float10)FUN_107a7fda();
          local_8 = (float)fVar19;
          *(float *)(in_ECX + 0x5d8) = local_8;
        }
        pfVar9 = (float *)FColor::RenderColor((FColor *)&param_1);
        param_1 = (FDynamicActor *)*pfVar9;
        for (local_10 = 0; local_10 < *(int *)(in_ECX + 0x5a0); local_10 = local_10 + 1) {
          pfVar15 = (float *)(*(int *)(in_ECX + 0x52c) * local_34 * 0x10 + *(int *)(in_ECX + 0x5b4))
          ;
          puStack_290 = (undefined1 *)0x10537799;
          local_8c = pfVar15;
          pfVar9 = (float *)thunk_FUN_103301a0();
          local_50 = *pfVar9 - pfVar15[4];
          local_4c = pfVar9[1] - pfVar15[5];
          local_48 = pfVar9[2] - pfVar15[6];
          local_14 = local_4c;
          local_c = local_48;
          local_8 = local_50;
          for (local_30 = 0; local_30 < *(int *)(in_ECX + 0x52c); local_30 = local_30 + 1) {
            if (((param_3 != (TList<FDynamicLight*> *)0x0) &&
                (local_c = (float)local_30, *(float *)(in_ECX + 0x56c) < local_c)) &&
               (local_c < *(float *)(in_ECX + 0x570))) {
              FRangeVector::GetRand((FRangeVector *)(in_ECX + 0x554));
              puStack_290 = local_10c;
              uStack_294 = 0x10537833;
              pfVar9 = (float *)thunk_FUN_103301a0();
              *pfVar15 = *pfVar9 + *pfVar15;
              pfVar15[1] = pfVar9[1] + pfVar15[1];
              pfVar15[2] = pfVar9[2] + pfVar15[2];
            }
            local_b4 = *pfVar15 - local_50;
            local_b0 = pfVar15[1] - local_4c;
            local_ac = pfVar15[2] - local_48;
            local_118 = local_50 - local_40;
            local_6c = (local_48 - local_38) * local_b0 - (local_4c - local_3c) * local_ac;
            local_68 = local_118 * local_ac - (local_48 - local_38) * local_b4;
            local_64 = local_b4 * (local_4c - local_3c) - local_118 * local_b0;
            local_a8 = local_b4;
            local_a4 = local_b0;
            local_a0 = local_ac;
            local_2c = local_6c;
            local_28 = local_68;
            local_24 = local_64;
            local_14 = local_68;
            local_c = local_6c;
            local_8 = local_64;
            FVector::Normalize((FVector *)&local_2c);
            if (local_10 != 0) {
              FVector::Normalize((FVector *)&local_b4);
              puStack_290 = (undefined1 *)0x10537954;
              pfVar9 = (float *)FVector::RotateAngleAxis
                                          ((FVector *)&local_2c,(int)local_124,
                                           (FVector *)
                                           ((int)(0x8000 / (longlong)*(int *)(in_ECX + 0x5a0)) *
                                           local_10));
              local_2c = *pfVar9;
              local_28 = pfVar9[1];
              local_24 = pfVar9[2];
            }
            fVar2 = *(float *)(local_b8 + 0x6c);
            local_2c = fVar2 * local_2c;
            local_28 = local_28 * fVar2;
            local_24 = fVar2 * local_24;
            local_88 = *pfVar15 + local_2c;
            local_84 = local_28 + pfVar15[1];
            local_80 = pfVar15[2] + local_24;
            *pfVar8 = local_88;
            pfVar8[1] = local_84;
            pfVar8[2] = local_80;
            pfVar8[3] = (float)param_1;
            pfVar8[4] = *(float *)(in_ECX + 0x4e8) * pfVar15[3];
            pfVar8[5] = 0.0;
            local_98 = *pfVar15 - local_2c;
            local_94 = pfVar15[1] - local_28;
            local_90 = pfVar15[2] - local_24;
            pfVar8[6] = local_98;
            pfVar8[7] = local_94;
            pfVar8[8] = local_90;
            pfVar8[9] = (float)param_1;
            pfVar8[10] = *(float *)(in_ECX + 0x4e8) * pfVar15[3];
            pfVar8[0xb] = *(float *)(in_ECX + 0x4ec);
            pfVar8 = pfVar8 + 0xc;
            local_50 = *pfVar15;
            local_4c = pfVar15[1];
            local_48 = pfVar15[2];
            pfVar15 = pfVar15 + 4;
            local_8c = pfVar15;
            local_44 = pfVar8;
            local_14 = local_94;
            local_c = local_98;
            local_8 = local_90;
          }
          for (local_20 = 0; local_20 < *(int *)(in_ECX + 0x52c) + -1; local_20 = local_20 + 1) {
            sVar5 = (short)local_10;
            sVar4 = (short)local_20;
            sVar3 = (short)local_18;
            *local_1c = (short)*(undefined4 *)(in_ECX + 0x5a4) * sVar3 +
                        (sVar5 * (short)*(int *)(in_ECX + 0x52c) + sVar4) * 2;
            local_1c[1] = (short)*(undefined4 *)(in_ECX + 0x5a4) * sVar3 + 1 +
                          ((short)*(undefined4 *)(in_ECX + 0x52c) * sVar5 + sVar4) * 2;
            local_1c[2] = (short)*(undefined4 *)(in_ECX + 0x5a4) * sVar3 + 2 +
                          ((short)*(undefined4 *)(in_ECX + 0x52c) * sVar5 + sVar4) * 2;
            local_1c[3] = (short)*(undefined4 *)(in_ECX + 0x5a4) * sVar3 + 1 +
                          ((short)*(undefined4 *)(in_ECX + 0x52c) * sVar5 + sVar4) * 2;
            local_1c[4] = (short)*(undefined4 *)(in_ECX + 0x5a4) * sVar3 + 3 +
                          ((short)*(undefined4 *)(in_ECX + 0x52c) * sVar5 + sVar4) * 2;
            local_1c[5] = (short)*(undefined4 *)(in_ECX + 0x5a4) * sVar3 + 2 +
                          ((short)*(undefined4 *)(in_ECX + 0x52c) * sVar5 + sVar4) * 2;
            local_1c = local_1c + 6;
          }
        }
        local_18 = local_18 + 1;
      }
    }
    if (in_ECX[0x108] == (UParticleEmitter)0x1) {
      puVar10 = (undefined4 *)thunk_FUN_10326fb0();
      local_70 = local_70 & 0xffffff00;
      puVar16 = puVar10;
      pFVar11 = local_1e4;
      for (iVar13 = 0x10; iVar13 != 0; iVar13 = iVar13 + -1) {
        *(undefined4 *)pFVar11 = *puVar16;
        puVar16 = puVar16 + 1;
        pFVar11 = pFVar11 + 4;
      }
      puVar16 = local_1a4;
      for (iVar13 = 0x10; iVar13 != 0; iVar13 = iVar13 + -1) {
        *puVar16 = *puVar10;
        puVar10 = puVar10 + 1;
        puVar16 = puVar16 + 1;
      }
      local_70._0_1_ = 4;
      pFVar11 = (FMatrix *)thunk_FUN_105263f0();
      local_70._0_1_ = 5;
      puVar10 = local_1a4;
      puVar16 = auStack_2bc;
      for (iVar13 = 0x10; iVar13 != 0; iVar13 = iVar13 + -1) {
        *puVar16 = *puVar10;
        puVar10 = puVar10 + 1;
        puVar16 = puVar16 + 1;
      }
      pFStack_2c0 = local_164;
      uStack_2c4 = 0x10537c18;
      FMatrix::operator*(pFVar11);
      local_70._0_1_ = 7;
      uStack_2c4 = 0x10537c27;
      thunk_FUN_10526040();
      local_70._0_1_ = 8;
      uStack_2c4 = 0x10537c37;
      FMatrix::~FMatrix(local_1e4);
      local_70 = CONCAT31(local_70._1_3_,9);
      uStack_2c4 = 0x10537c46;
      thunk_FUN_103284c0();
      iVar13 = *(int *)param_4;
      pFVar11 = local_164;
      puVar10 = auStack_300;
      for (iVar14 = 0x10; iVar14 != 0; iVar14 = iVar14 + -1) {
        *puVar10 = *(undefined4 *)pFVar11;
        pFVar11 = pFVar11 + 4;
        puVar10 = puVar10 + 1;
      }
      uStack_304 = 0;
      puStack_308 = (undefined1 *)0x10537c66;
      (**(code **)(iVar13 + 0x40))();
      local_70 = CONCAT31(local_70._1_3_,2);
      puStack_308 = (undefined1 *)0x10537c76;
      FMatrix::~FMatrix(local_164);
      pFVar18 = param_4;
    }
    else {
      iVar13 = *(int *)param_4;
      pcVar17 = Identity_exref;
      puVar10 = auStack_2bc;
      for (iVar14 = 0x10; iVar14 != 0; iVar14 = iVar14 + -1) {
        *puVar10 = *(undefined4 *)pcVar17;
        pcVar17 = pcVar17 + 4;
        puVar10 = puVar10 + 1;
      }
      pFStack_2c0 = (FMatrix *)0x0;
      uStack_2c4 = 0x10537c9e;
      (**(code **)(iVar13 + 0x40))();
    }
    if (*(int *)GL2Shader_exref == 0) {
      puStack_308 = local_d8;
      uStack_30c = 0;
      pFStack_310 = (FRawIndexBuffer *)0x10537cca;
      uStack_30c = (**(code **)(*(int *)pFVar18 + 0xa8))();
    }
    else {
      puStack_308 = local_d8;
      uStack_30c = 0x10537cb7;
      uStack_30c = (**(code **)(*(int *)pFVar18 + 0x68))();
    }
    pFStack_310 = local_f4;
    iStack_314 = 0x10537cde;
    param_4 = (FRenderInterface *)(**(code **)(*(int *)pFVar18 + 0xb0))();
    if (0 < local_18) {
      *(uint *)(*(int *)(*(int *)(in_ECX + 0x420) + 0x46c) + 0x578) = (uint)(byte)in_ECX[0x344];
      if (*(int *)(*(int *)(*(int *)(param_2 + 4) + 0x3c) + 0x5b8) == 7) {
        *(undefined4 *)(*(int *)(*(int *)(in_ECX + 0x420) + 0x46c) + 0x588) = 0;
      }
      else {
        *(undefined4 *)(*(int *)(*(int *)(in_ECX + 0x420) + 0x46c) + 0x588) =
             *(undefined4 *)(in_ECX + 0x348);
      }
      if ((((byte)in_ECX[0x354] & 1) == 0) || (((byte)in_ECX[0x36c] & 1) != 0)) {
        uVar12 = 0;
      }
      else {
        uVar12 = 1;
      }
      *(undefined4 *)(*(int *)(*(int *)(in_ECX + 0x420) + 0x46c) + 0x57c) = uVar12;
      *(undefined4 *)(*(int *)(*(int *)(in_ECX + 0x420) + 0x46c) + 0x580) = 1;
      *(undefined4 *)(*(int *)(*(int *)(in_ECX + 0x420) + 0x46c) + 0x584) = 0;
      *(uint *)(*(int *)(*(int *)(in_ECX + 0x420) + 0x46c) + 0x598) = *(uint *)(in_ECX + 0x1f8) & 1;
      *(undefined4 *)(*(int *)(*(int *)(in_ECX + 0x420) + 0x46c) + 0x59c) =
           *(undefined4 *)(in_ECX + 500);
      puVar1 = (uint *)(*(int *)(*(int *)(in_ECX + 0x420) + 0x46c) + 0x5ac);
      *puVar1 = *puVar1 ^ (*(uint *)(in_ECX + 0x1f8) >> 1 ^
                          *(uint *)(*(int *)(*(int *)(in_ECX + 0x420) + 0x46c) + 0x5ac)) & 1;
      *(uint *)(*(int *)(*(int *)(in_ECX + 0x420) + 0x46c) + 0x5a0) =
           *(uint *)(in_ECX + 0x1f8) >> 2 & 1;
      *(uint *)(*(int *)(*(int *)(in_ECX + 0x420) + 0x46c) + 0x5a4) =
           *(uint *)(in_ECX + 0x1f8) >> 3 & 1;
      iStack_314 = 0x10537e24;
      iVar13 = UViewport::IsWire(*(UViewport **)(param_2 + 4));
      *(int *)(*(int *)(*(int *)(in_ECX + 0x420) + 0x46c) + 0x5a8) = iVar13;
      local_60 = 0;
      local_5c = 0;
      local_58 = 0;
      iVar13 = *(int *)pFVar18;
      param_2 = (FLevelSceneNode *)&iStack_320;
      FSphere::FSphere((FSphere *)&iStack_320,0,0,0,0);
      (**(code **)(iVar13 + 0x24))(0,1,0,0,0);
      if (*(int *)GL2Shader_exref == 0) {
        (**(code **)(*(int *)pFVar18 + 0x44))
                  (*(undefined4 *)(*(int *)(in_ECX + 0x420) + 0x46c),0,0,0);
      }
      else {
        (**(code **)(*(int *)pFVar18 + 0x54))(0x1000010);
        (**(code **)(*(int *)pFVar18 + 0x4c))(*(undefined4 *)(*(int *)(in_ECX + 0x420) + 0x46c));
      }
      for (iVar13 = 0; iVar14 = *(int *)(in_ECX + 0x5a0), local_54 = iVar13, iVar13 < iVar14;
          iVar13 = iVar13 + 1) {
        iStack_314 = *(int *)(in_ECX + 0x5a4) * local_18 + -1;
        uStack_318 = 0;
        iStack_31c = (*(int *)(in_ECX + 0x5ac) * local_18) / iVar14;
        iStack_320 = ((*(int *)(in_ECX + 0x5a8) * local_18) / iVar14) * iVar13 + (int)param_4;
        (**(code **)(*(int *)pFVar18 + 0xb4))(0);
      }
    }
    local_70._0_1_ = 1;
    iStack_314 = 0x10537f32;
    FRawIndexBuffer::~FRawIndexBuffer(local_f4);
    local_70 = (uint)local_70._1_3_ << 8;
    iStack_314 = 0x10537f3e;
    thunk_FUN_105372a0();
  }
  ExceptionList = local_78;
  return local_18;
}


// ==== 10537f46 Catch@10537f46

void Catch_10537f46(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x30) = *(undefined4 *)(unaff_EBP + -0x54);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x30,&DAT_10914c48);
}


// ==== 10537f5a Catch@10537f5a

void Catch_10537f5a(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"UBeamEmitter::RenderParticles");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10538200 FUN_10538200

void FUN_10538200(void)

{
  UClass *pUVar1;
  UBoolProperty *pUVar2;
  UStrProperty *this;
  UIntProperty *this_00;
  UObject *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1081ad00;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  FName::FName((FName *)&stack0xffffffcc,(ushort *)L"HighDetailActors",1);
  pUVar1 = UObject::GetClass(in_ECX);
  pUVar2 = UBoolProperty::operator_new(0x7c,pUVar1);
  if (pUVar2 != (UBoolProperty *)0x0) {
    UBoolProperty::UBoolProperty(pUVar2,0,0x50,(ushort *)L"Client",0x4000);
    *(undefined ***)pUVar2 = UBoolProperty::vftable;
  }
  FName::FName((FName *)&stack0xffffffcc,(ushort *)L"SuperHighDetailActors",1);
  pUVar1 = UObject::GetClass(in_ECX);
  pUVar2 = UBoolProperty::operator_new(0x7c,pUVar1);
  if (pUVar2 != (UBoolProperty *)0x0) {
    UBoolProperty::UBoolProperty(pUVar2,0,0x54,(ushort *)L"Client",0x4000);
    *(undefined ***)pUVar2 = UBoolProperty::vftable;
  }
  FName::FName((FName *)&stack0xffffffcc,(ushort *)L"Description",1);
  pUVar1 = UObject::GetClass(in_ECX);
  this = UStrProperty::operator_new(0x78,pUVar1);
  if (this != (UStrProperty *)0x0) {
    UStrProperty::UStrProperty(this,0,0x40,(ushort *)L"Client",0x4000);
    *(undefined ***)this = UStrProperty::vftable;
  }
  FName::FName((FName *)&stack0xffffffcc,(ushort *)L"DescFlags",1);
  pUVar1 = UObject::GetClass(in_ECX);
  this_00 = UIntProperty::operator_new(0x78,pUVar1);
  if (this_00 != (UIntProperty *)0x0) {
    UIntProperty::UIntProperty(this_00,0,0x4c,(ushort *)L"Client",0x4000);
    *(undefined ***)this_00 = UIntProperty::vftable;
  }
  FName::FName((FName *)&stack0xffffffcc,(ushort *)L"DetailTextures",1);
  pUVar1 = UObject::GetClass(in_ECX);
  pUVar2 = UBoolProperty::operator_new(0x7c,pUVar1);
  if (pUVar2 != (UBoolProperty *)0x0) {
    UBoolProperty::UBoolProperty(pUVar2,0,0x58,(ushort *)L"Client",0x4000);
    *(undefined ***)pUVar2 = UBoolProperty::vftable;
  }
  FName::FName((FName *)&stack0xffffffcc,(ushort *)L"UseCompressedLightmaps",1);
  pUVar1 = UObject::GetClass(in_ECX);
  pUVar2 = UBoolProperty::operator_new(0x7c,pUVar1);
  if (pUVar2 != (UBoolProperty *)0x0) {
    UBoolProperty::UBoolProperty(pUVar2,0,0x68,(ushort *)L"Client",0x4000);
    *(undefined ***)pUVar2 = UBoolProperty::vftable;
  }
  FName::FName((FName *)&stack0xffffffcc,(ushort *)L"UseStencil",1);
  pUVar1 = UObject::GetClass(in_ECX);
  pUVar2 = UBoolProperty::operator_new(0x7c,pUVar1);
  if (pUVar2 != (UBoolProperty *)0x0) {
    UBoolProperty::UBoolProperty(pUVar2,0,0x6c,(ushort *)L"Client",0x4000);
    *(undefined ***)pUVar2 = UBoolProperty::vftable;
  }
  FName::FName((FName *)&stack0xffffffcc,(ushort *)L"Use16bit",1);
  pUVar1 = UObject::GetClass(in_ECX);
  pUVar2 = UBoolProperty::operator_new(0x7c,pUVar1);
  if (pUVar2 != (UBoolProperty *)0x0) {
    UBoolProperty::UBoolProperty(pUVar2,0,0x70,(ushort *)L"Client",0x4000);
    *(undefined ***)pUVar2 = UBoolProperty::vftable;
  }
  FName::FName((FName *)&stack0xffffffcc,(ushort *)L"Use16bitTextures",1);
  pUVar1 = UObject::GetClass(in_ECX);
  pUVar2 = UBoolProperty::operator_new(0x7c,pUVar1);
  if (pUVar2 != (UBoolProperty *)0x0) {
    UBoolProperty::UBoolProperty(pUVar2,0,0x74,(ushort *)L"Client",0x4000);
    *(undefined ***)pUVar2 = UBoolProperty::vftable;
  }
  in_ECX[0x38] = (UObject)0x0;
  ExceptionList = local_10;
  return;
}


// ==== 105384cb Catch@105384cb

void Catch_105384cb(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 105384df Catch@105384df

void Catch_105384df(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"URenderDevice::StaticConstructor");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 105385c0 FUN_105385c0

undefined4 FUN_105385c0(void)

{
  return 0;
}


// ==== 105385fb Catch@105385fb

void Catch_105385fb(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 1053860f Catch@1053860f

void Catch_1053860f(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"UViewport::GetServer");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10538650 FUN_10538650

void FUN_10538650(ushort *param_1)

{
  FOutputDevice *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1081ad2c;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FString::FString((FString *)(in_ECX + 4),param_1);
  local_4 = 0;
  FOutputDevice::FOutputDevice(in_ECX);
  *(undefined ***)in_ECX = FStringOutputDevice::vftable;
  ExceptionList = local_c;
  return;
}


// ==== 105386d0 FUN_105386d0

void FUN_105386d0(ushort *param_1)

{
  int in_ECX;
  
  FString::operator+=((FString *)(in_ECX + 4),param_1);
  return;
}


// ==== 105386f0 FUN_105386f0

void FUN_105386f0(void)

{
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1081ad40;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  if (*(int *)(in_ECX + 0x3c) == 0) {
    ExceptionList = &local_10;
    appFailAssert("Actor",".\\UnCamera.cpp",0x14b);
  }
  if (*(int *)(in_ECX + 0x7c) == 0) {
    appFailAssert("RenDev",".\\UnCamera.cpp",0x14c);
  }
  if (*(int *)(in_ECX + 0x184) != 0) {
    appFailAssert("HitSizes.Num()==0",".\\UnCamera.cpp",0x14d);
  }
  (**(code **)(**(int **)(in_ECX + 0x7c) + 0x9c))(*(undefined4 *)(in_ECX + 0x154));
  *(undefined4 *)(in_ECX + 0x164) = 1;
  ExceptionList = local_10;
  return;
}


// ==== 105387a7 Catch@105387a7

void Catch_105387a7(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 105387bb Catch@105387bb

void Catch_105387bb(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"UViewport::Unlock");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10538820 FUN_10538820

void FUN_10538820(void)

{
  int in_ECX;
  
  if (*(int *)(in_ECX + 0x164) == 0) {
    appFailAssert("PendingFrame",".\\UnCamera.cpp",0x15c);
  }
  *(undefined4 *)(in_ECX + 0x164) = 0;
  (**(code **)(**(int **)(in_ECX + 0x7c) + 0xa0))();
  *(undefined8 *)(in_ECX + 0x88) = *(undefined8 *)(in_ECX + 0x144);
  *(undefined4 *)(in_ECX + 0x90) = 0;
  return;
}


// ==== 10538890 FUN_10538890

void FUN_10538890(void)

{
  int in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_1081ad78;
  local_c = ExceptionList;
  local_4 = 0xffffffff;
  if (in_ECX != 0) {
    ExceptionList = &local_c;
    FString::~FString((FString *)(in_ECX + 4));
    ExceptionList = local_c;
    return;
  }
  ExceptionList = &local_c;
  FString::~FString((FString *)0x0);
  ExceptionList = local_c;
  return;
}


// ==== 10538900 FUN_10538900

void FUN_10538900(ushort *param_1,int param_2)

{
  int in_ECX;
  FString local_28 [20];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_1081ad99;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffcc;
  local_8 = 0;
  if (*(int *)(in_ECX + 0x2c) != 0) {
    ExceptionList = &local_10;
    FString::FString(local_28,param_1);
    local_8._0_1_ = 1;
    UInteractionMaster::MasterProcessMessage
              (*(UInteractionMaster **)(in_ECX + 0x2c),local_28,(float)param_2);
    local_8 = (uint)local_8._1_3_ << 8;
    FString::~FString(local_28);
  }
  ExceptionList = local_10;
  return;
}


// ==== 1053897d Catch@1053897d

void Catch_1053897d(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 10538991 Catch@10538991

void Catch_10538991(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"UViewport::Serialize");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 105389e0 FUN_105389e0

void FUN_105389e0(float param_1)

{
  int *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1081adb0;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  if (in_ECX[0x1e] == 0) {
    ExceptionList = &local_10;
    appFailAssert("Input",".\\UnCamera.cpp",0x32a);
  }
  if ((*(int *)GIsEditor_exref == 0) && (in_ECX[0x2c] == 0)) {
    ExceptionList = local_10;
    return;
  }
  if (param_1 != -1.0) {
    (**(code **)(*in_ECX + 0x94))(0,param_1);
  }
  (**(code **)(*(int *)in_ECX[0x1e] + 0x7c))(param_1,*(undefined4 *)GLog_exref);
  ExceptionList = local_10;
  return;
}


// ==== 10538aaa Catch@10538aaa

void Catch_10538aaa(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 10538abe Catch@10538abe

void Catch_10538abe(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"UViewport::ReadInput");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10538b20 FUN_10538b20

void FUN_10538b20(undefined4 param_1,int *param_2,int param_3,int param_4,int *param_5,
                 undefined4 *param_6)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  int *piVar6;
  int *local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1081adc0;
  local_10 = ExceptionList;
  local_8 = 0;
  local_18 = (int *)0x0;
  piVar5 = (int *)0x0;
  ExceptionList = &local_10;
  while (piVar6 = param_2, 0 < param_3) {
    piVar1 = piVar6 + 1;
    iVar2 = *piVar1;
    param_3 = param_3 - *piVar1;
    *piVar1 = (int)piVar5;
    piVar5 = piVar6;
    param_2 = (int *)((int)piVar6 + iVar2);
    if ((param_4 == 0) || (iVar3 = (**(code **)(*piVar6 + 4))(param_4), iVar3 != 0)) {
      local_18 = piVar6;
    }
  }
  if ((param_3 == 0) && (local_18 != (int *)0x0)) {
    if (param_5 == (int *)0x0) {
      if (param_6 == (undefined4 *)0x0) {
        (**(code **)(*local_18 + 8))(param_1);
      }
      else {
        uVar4 = (**(code **)(*local_18 + 0xc))();
        *param_6 = uVar4;
      }
    }
    else {
      *param_5 = local_18[2];
    }
  }
  ExceptionList = local_10;
  return;
}


// ==== 10538bd2 Catch@10538bd2

void Catch_10538bd2(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x1c) = *(undefined4 *)(unaff_EBP + -0x20);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x1c,&DAT_10914c48);
}


// ==== 10538be6 Catch@10538be6

void Catch_10538be6(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"UViewport::ExecuteHits");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10538c40 FUN_10538c40

undefined4 FUN_10538c40(void)

{
  int in_ECX;
  
  return *(undefined4 *)(*(int *)(in_ECX + 0x10) + 0x94);
}


// ==== 10538c50 FUN_10538c50

undefined4 FUN_10538c50(void)

{
  int in_ECX;
  
  return *(undefined4 *)(*(int *)(in_ECX + 0x10) + 0x98);
}


// ==== 10538c60 FUN_10538c60

char FUN_10538c60(void)

{
  int in_ECX;
  
  return (-(*(int *)(*(int *)(in_ECX + 0x10) + 0xa4) != 2) & 3U) + 2;
}


// ==== 10538ca0 FUN_10538ca0

void FUN_10538ca0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                 undefined4 param_9)

{
  UClass *pUVar1;
  
  pUVar1 = UTextBuffer::StaticClass();
  UFactory::StaticImportObject
            (param_1,pUVar1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9);
  return;
}


// ==== 10538cf0 FUN_10538cf0

void FUN_10538cf0(byte param_1)

{
  UIntProperty *in_ECX;
  
  UIntProperty::~UIntProperty(in_ECX);
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x78);
  }
  return;
}


// ==== 10538d20 FUN_10538d20

void FUN_10538d20(byte param_1)

{
  UBoolProperty *in_ECX;
  
  UBoolProperty::~UBoolProperty(in_ECX);
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x7c);
  }
  return;
}


// ==== 10538d50 FUN_10538d50

void FUN_10538d50(byte param_1)

{
  UStrProperty *in_ECX;
  
  UStrProperty::~UStrProperty(in_ECX);
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x78);
  }
  return;
}


// ==== 10538d80 FUN_10538d80

undefined8 FUN_10538d80(uint param_1,UObject *param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  
  if (param_2 == (UObject *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = UObject::GetCacheIndex(param_2);
  }
  uVar2 = __allmul(uVar1,0,0x100,0);
  return CONCAT44((int)((ulonglong)uVar2 >> 0x20) + ((int)param_1 >> 0x1f) +
                  (uint)CARRY4((uint)uVar2,param_1),(uint)uVar2 + param_1);
}


// ==== 10538dd0 FUN_10538dd0

void FUN_10538dd0(int *param_1,undefined4 param_2)

{
  (**(code **)(*param_1 + 0x18))(param_2);
  return;
}


// ==== 10538df0 FUN_10538df0

void FUN_10538df0(int *param_1,undefined4 param_2)

{
  (**(code **)(*param_1 + 0x18))(param_2);
  return;
}


// ==== 10538e10 FUN_10538e10

void FUN_10538e10(int *param_1,undefined4 param_2)

{
  (**(code **)(*param_1 + 0x18))(param_2);
  return;
}


// ==== 10538e30 FUN_10538e30

void FUN_10538e30(int *param_1,undefined4 param_2)

{
  (**(code **)(*param_1 + 0x18))(param_2);
  return;
}


// ==== 10538e50 FUN_10538e50

void FUN_10538e50(FArchive *param_1)

{
  int *piVar1;
  undefined4 uVar2;
  UPlayer *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1081add0;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  UPlayer::Serialize(in_ECX,param_1);
  piVar1 = (int *)thunk_FUN_10538df0(param_1,in_ECX + 0x40);
  uVar2 = (**(code **)(*piVar1 + 0x18))(in_ECX + 0x80,in_ECX + 0x74,in_ECX + 0x7c,in_ECX + 0x78);
  uVar2 = thunk_FUN_10538e30(uVar2);
  uVar2 = thunk_FUN_10538dd0(uVar2);
  thunk_FUN_10538e10(uVar2);
  ExceptionList = local_10;
  return;
}


// ==== 10538ee1 Catch@10538ee1

void Catch_10538ee1(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 10538ef5 Catch@10538ef5

void Catch_10538ef5(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"UViewport::Serialize");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10538f50 FUN_10538f50

int FUN_10538f50(int param_1)

{
  int iVar1;
  void *pvVar2;
  UObject *pUVar3;
  UObject *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  pvVar2 = ExceptionList;
  puStack_c = &LAB_1081ade0;
  local_10 = ExceptionList;
  local_8 = 0;
  iVar1 = *(int *)(in_ECX + 0xb4);
  ExceptionList = &local_10;
  *(int *)(in_ECX + 0xb4) = param_1;
  if (*(int *)GIsRunning_exref != 0) {
    if (param_1 == 0) {
      if (iVar1 == 0) {
        ExceptionList = pvVar2;
        return 0;
      }
      pUVar3 = UObject::GetOuter(in_ECX);
    }
    else {
      if (iVar1 != 0) {
        ExceptionList = pvVar2;
        return iVar1;
      }
      pUVar3 = UObject::GetOuter(in_ECX);
    }
    (**(code **)(**(int **)(pUVar3 + 0x34) + 0x8c))();
  }
  ExceptionList = local_10;
  return iVar1;
}


// ==== 10538ff3 Catch@10538ff3

void Catch_10538ff3(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 10539007 Catch@10539007

void Catch_10539007(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"UViewport::SetDrag");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10539060 FUN_10539060

undefined4 FUN_10539060(void)

{
  int iVar1;
  int iVar2;
  int in_ECX;
  
  iVar1 = *(int *)(in_ECX + 0x3c);
  iVar2 = *(int *)(iVar1 + 0x5b8);
  if ((((((iVar2 != 0xe) || (*(int *)(in_ECX + 0x1a4) == 0)) || (*(int *)GIsEditor_exref != 0)) &&
       (iVar1 != 0)) &&
      (((((*(int *)(*(int *)(*(int *)(iVar1 + 0xe4) + 0xc0) + 0x68) == 0 || (iVar2 == 0xd)) ||
         ((iVar2 == 0xe || ((iVar2 == 0xf || (iVar2 == 0x10)))))) || (iVar2 == 0x11)) ||
       (iVar2 == 1)))) &&
     (((((iVar2 != 0x14 && (iVar2 != 0x16)) && (iVar2 != 0x15)) &&
       ((iVar2 != 0x1b && (iVar2 != 0x20)))) &&
      ((iVar2 != 0x17 && ((iVar2 != 0x1f && (iVar2 != 0x12)))))))) {
    return 1;
  }
  return 0;
}


// ==== 1053912f Catch@1053912f

void Catch_1053912f(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 10539143 Catch@10539143

void Catch_10539143(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"UViewport::IsWire");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 105391a0 FUN_105391a0

bool FUN_105391a0(int param_1)

{
  int iVar1;
  int iVar2;
  UViewport *in_ECX;
  double dVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1081ae00;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  if (*(int *)(in_ECX + 0x7c) == 0) {
    ExceptionList = &local_10;
    appFailAssert("RenDev",".\\UnCamera.cpp",0x123);
  }
  dVar3 = appSecondsQPC();
  *(double *)(in_ECX + 0x144) = dVar3;
  *(uint *)(in_ECX + 0x16c) = (uint)(param_1 != 0);
  *(int *)(in_ECX + 0xa8) = *(int *)(in_ECX + 0xa8) + 1;
  iVar1 = (**(code **)(**(int **)(in_ECX + 0x7c) + 0x98))();
  *(int *)(in_ECX + 0x154) = iVar1;
  iVar2 = UViewport::IsDepthComplexity(in_ECX);
  in_ECX[0x15c] = SUB41(1 << (-(iVar2 != 0) & 4U),0);
  ExceptionList = local_10;
  return iVar1 != 0;
}


// ==== 10539264 Catch@10539264

void Catch_10539264(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 10539278 Catch@10539278

void Catch_10539278(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"UViewport::Lock");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 105392e0 FUN_105392e0

void FUN_105392e0(code **param_1,FOutputDevice *param_2)

{
  undefined4 uVar1;
  UPackage *pUVar2;
  UObject *this;
  int iVar3;
  int in_ECX;
  FOutputDevice *this_00;
  code *pcStack_248;
  undefined4 uStack_244;
  ushort *puStack_240;
  ushort local_220 [262];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1081ae10;
  local_10 = ExceptionList;
  local_14 = &stack0xfffffdd4;
  local_8 = 0;
  uVar1 = *(undefined4 *)(*(int *)(in_ECX + 0x3c) + 0xe4);
  puStack_240 = (ushort *)param_1;
  uStack_244 = 0;
  param_1 = &pcStack_248;
  pcStack_248 = GWarn_exref;
  ExceptionList = &local_10;
  FName::FName((FName *)&pcStack_248,0);
  pUVar2 = UObject::GetTransientPackage();
  this = (UObject *)thunk_FUN_10538ca0(uVar1,pUVar2);
  if (this == (UObject *)0x0) {
    puStack_240 = (ushort *)0x105393e0;
    LocalizeError("FileNotFound",(ushort *)L"Core",(ushort *)0x0);
    puStack_240 = (ushort *)0x105393f3;
    FOutputDevice::Logf(param_2,(EName)param_2,(ushort *)0x300);
  }
  else {
    UObject::AddToRoot(this);
    if (*(int *)GLog_exref != 0) {
      FOutputDevice::Logf2(this_00,*(ushort **)GLog_exref);
    }
    param_1 = (code **)FString::operator*((FString *)(this + 0x40));
    while( true ) {
      iVar3 = ParseLine((ushort **)&param_1,local_220,0x100,0);
      if (iVar3 == 0) break;
      (*(code *)**(undefined4 **)(in_ECX + 0x38))();
    }
    UObject::RemoveFromRoot(this);
    if (this != (UObject *)0x0) {
      (**(code **)(*(int *)this + 0xc))();
    }
  }
  ExceptionList = local_10;
  return;
}


// ==== 10539410 Catch@10539410

void Catch_10539410(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 10539424 Catch@10539424

void Catch_10539424(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"UViewport::ExecMacro");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 105394a0 FUN_105394a0

undefined4 FUN_105394a0(void)

{
  undefined4 uVar1;
  int *in_ECX;
  
  if (in_ECX[1] < 1) {
    appFailAssert("ArrayNum>0",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x18e);
  }
  uVar1 = *(undefined4 *)(*in_ECX + -4 + in_ECX[1] * 4);
  thunk_FUN_103256b0(in_ECX[1] + -1,1);
  return uVar1;
}


// ==== 105394f0 FUN_105394f0

void FUN_105394f0(undefined4 *param_1)

{
  int iVar1;
  FArray *in_ECX;
  
  iVar1 = FArray::Add(in_ECX,1,4);
  *(undefined4 *)(*(int *)in_ECX + iVar1 * 4) = *param_1;
  return;
}


// ==== 10539520 FUN_10539520

UObject * FUN_10539520(UObject *param_1)

{
  int iVar1;
  
  if (param_1 != (UObject *)0x0) {
    iVar1 = UObject::IsA(param_1,&UCanvas::PrivateStaticClass);
    if (iVar1 != 0) {
      return param_1;
    }
    UObject::GetFullName(param_1,(ushort *)0x0);
  }
  UObject::GetName((UObject *)&UCanvas::PrivateStaticClass);
  FOutputDevice::Logf(*(FOutputDevice **)GError_exref,(ushort *)*(FOutputDevice **)GError_exref);
  return param_1;
}


// ==== 105395a0 FUN_105395a0

UObject * FUN_105395a0(UObject *param_1)

{
  int iVar1;
  
  if (param_1 != (UObject *)0x0) {
    iVar1 = UObject::IsA(param_1,&UGameEngine::PrivateStaticClass);
    if (iVar1 != 0) {
      return param_1;
    }
  }
  return (UObject *)0x0;
}


// ==== 105395d0 FUN_105395d0

void FUN_105395d0(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = FRenderResource::vftable;
  in_ECX[1] = 0;
  in_ECX[2] = 0;
  *in_ECX = FBaseTexture::vftable;
  *in_ECX = FRenderTarget::vftable;
  in_ECX[3] = 1;
  return;
}


// ==== 10539650 FUN_10539650

void FUN_10539650(UObject *param_1)

{
  ulong uVar1;
  undefined4 *in_ECX;
  longlong lVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1081ae48;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  thunk_FUN_105395d0();
  local_4 = 0;
  *in_ECX = FViewportRenderTarget::vftable;
  in_ECX[4] = param_1;
  if (param_1 == (UObject *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = UObject::GetCacheIndex(param_1);
  }
  lVar2 = __allmul(uVar1,0,0x100,0);
  *(longlong *)(in_ECX + 1) = lVar2 + 0xe0;
  ExceptionList = local_c;
  return;
}


// ==== 105396f0 FUN_105396f0

undefined4 FUN_105396f0(FOutputDevice *param_1,FOutputDevice *param_2)

{
  uint *puVar1;
  FOutputDevice *pFVar2;
  int iVar3;
  int *piVar4;
  undefined1 *puVar5;
  int iVar6;
  wchar_t *pwVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  UClass *pUVar11;
  FString *this;
  ushort *puVar12;
  UObject *pUVar13;
  UPlayer *in_ECX;
  FOutputDevice *this_00;
  FOutputDevice *this_01;
  FOutputDevice *this_02;
  FOutputDevice *this_03;
  FOutputDevice *this_04;
  undefined4 unaff_EBX;
  float fVar14;
  double dStack_90c;
  undefined4 uStack_908;
  ushort local_108 [64];
  L2ParamStack local_88 [24];
  L2ParamStack local_70 [16];
  L2ParamStack local_60 [16];
  FString local_50 [16];
  int local_40;
  int local_38;
  int local_34;
  FOutputDevice local_24 [4];
  FString local_20 [12];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  puStack_c = &LAB_1081ae98;
  local_10 = ExceptionList;
  dStack_90c = (double)CONCAT44(uStack_908,unaff_EBX);
  local_14 = &stack0xfffff6ec;
  local_8 = 0;
  ExceptionList = &local_10;
  puVar5 = &stack0xfffff6ec;
  if (*(int *)(in_ECX + 4) == 0) {
    ExceptionList = &local_10;
    appFailAssert("Actor",".\\UnCamera.cpp",0x171);
    puVar5 = local_14;
  }
  local_14 = puVar5;
  pFVar2 = param_2;
  if (((*(int *)(in_ECX + 0x40) == 0) ||
      (iVar6 = (*(code *)**(undefined4 **)(*(int *)(in_ECX + 0x40) + 0x34))(param_1,param_2),
      iVar6 == 0)) &&
     ((*(int *)(in_ECX + 0x44) == 0 ||
      (iVar6 = (*(code *)**(undefined4 **)(*(int *)(in_ECX + 0x44) + 0x34))(param_1,pFVar2),
      iVar6 == 0)))) {
    iVar6 = ParseCommand((ushort **)&param_1,(ushort *)L"TRUEFONT");
    if (iVar6 == 0) {
      iVar6 = ParseCommand((ushort **)&param_1,(ushort *)L"ISFULLSCREEN");
      if (iVar6 == 0) {
        iVar6 = ParseCommand((ushort **)&param_1,(ushort *)L"GETPING");
        if (iVar6 == 0) {
          iVar6 = ParseCommand((ushort **)&param_1,(ushort *)L"INJECT");
          if (iVar6 == 0) {
            iVar6 = ParseCommand((ushort **)&param_1,(ushort *)L"NETSPEED");
            if (iVar6 == 0) {
              iVar6 = ParseCommand((ushort **)&param_1,(ushort *)L"LANSPEED");
              if (iVar6 == 0) {
                iVar6 = ParseCommand((ushort **)&param_1,(ushort *)L"SHOWALL");
                if (iVar6 != 0) {
                  for (iVar6 = 0; iVar6 < *(int *)(*(int *)(*(int *)(in_ECX + 4) + 0xe4) + 0x3c);
                      iVar6 = iVar6 + 1) {
                    iVar8 = *(int *)(*(int *)(*(int *)(in_ECX + 4) + 0xe4) + 0x38);
                    if (*(int *)(iVar8 + iVar6 * 4) != 0) {
                      puVar1 = (uint *)(*(int *)(iVar8 + iVar6 * 4) + 100);
                      *puVar1 = *puVar1 & 0xffffffdf;
                    }
                  }
                  ExceptionList = local_10;
                  return 1;
                }
                iVar6 = ParseCommand((ushort **)&param_1,(ushort *)L"REPORT");
                if (iVar6 != 0) {
                  thunk_FUN_10538650(&DAT_10853d94);
                  local_8._0_1_ = 1;
                  FOutputDevice::Log(local_24,(ushort *)L"Report:\r\n");
                  appFromAnsi("17:00:35",(ushort *)0x0);
                  appFromAnsi("Aug 21 2007",(ushort *)0x0);
                  FOutputDevice::Logf(this_02,(ushort *)local_24);
                  pUVar11 = UObject::GetClass(*(UObject **)(in_ECX + 4));
                  UObject::GetName((UObject *)pUVar11);
                  FOutputDevice::Logf(local_24,(ushort *)local_24);
                  this = (FString *)
                         FURL::String((FURL *)(*(int *)(*(int *)(in_ECX + 4) + 0xe4) + 0x78),
                                      (int)local_50);
                  local_8._0_1_ = 2;
                  FString::operator*(this);
                  FOutputDevice::Logf(this_03,(ushort *)local_24);
                  local_8 = CONCAT31(local_8._1_3_,1);
                  FString::~FString(local_50);
                  FUN_107a6660();
                  FUN_107a6660();
                  FUN_107a6660();
                  FOutputDevice::Logf(this_04,(ushort *)local_24);
                  pUVar13 = *(UObject **)(*(int *)(*(int *)(in_ECX + 4) + 0xe0) + 0x614);
                  if (pUVar13 == (UObject *)0x0) {
                    dStack_90c = (double)CONCAT44(uStack_908,L"   Network client\r\n");
                    FOutputDevice::Logf((FOutputDevice *)0x0,(ushort *)local_24);
                  }
                  else {
                    pUVar11 = UObject::GetClass(pUVar13);
                    puVar12 = UObject::GetName((UObject *)pUVar11);
                    dStack_90c = (double)CONCAT44(uStack_908,puVar12);
                    FOutputDevice::Logf(local_24,(ushort *)local_24);
                    pFVar2 = *(FOutputDevice **)(*(int *)(*(int *)(in_ECX + 4) + 0xe0) + 0x614);
                    dStack_90c = (double)*(float *)(pFVar2 + 0x3c0);
                    FOutputDevice::Logf(pFVar2,(ushort *)local_24);
                  }
                  puVar12 = FString::operator*(local_20);
                  dStack_90c = (double)CONCAT44(0x10539b52,SUB84(dStack_90c,0));
                  appClipboardCopy(puVar12);
                  local_8 = local_8 & 0xffffff00;
                  thunk_FUN_10538890();
                  ExceptionList = local_10;
                  return 1;
                }
                iVar6 = ParseCommand((ushort **)&param_1,(ushort *)L"SHOT");
                if (iVar6 == 0) {
                  iVar6 = ParseCommand((ushort **)&param_1,(ushort *)L"SHOWACTORS");
                  if (iVar6 != 0) {
                    if (*(char *)(*(int *)(*(int *)(in_ECX + 4) + 0xe0) + 0x5d4) == '\0') {
                      puVar1 = (uint *)(*(int *)(in_ECX + 4) + 0x5ac);
                      *puVar1 = *puVar1 | 8;
                      ExceptionList = local_10;
                      return 1;
                    }
                    ExceptionList = local_10;
                    return 0;
                  }
                  iVar6 = ParseCommand((ushort **)&param_1,(ushort *)L"HIDEACTORS");
                  if (iVar6 != 0) {
                    if (*(char *)(*(int *)(*(int *)(in_ECX + 4) + 0xe0) + 0x5d4) == '\0') {
                      puVar1 = (uint *)(*(int *)(in_ECX + 4) + 0x5ac);
                      *puVar1 = *puVar1 & 0xfffffff7;
                      ExceptionList = local_10;
                      return 1;
                    }
                    ExceptionList = local_10;
                    return 0;
                  }
                  iVar6 = ParseCommand((ushort **)&param_1,(ushort *)L"RMODE");
                  if (iVar6 != 0) {
                    if (*(char *)(*(int *)(*(int *)(in_ECX + 4) + 0xe0) + 0x5d4) != '\0') {
                      ExceptionList = local_10;
                      return 0;
                    }
                    iVar6 = appStricmp((ushort *)L"WIRE",(ushort *)param_1);
                    if (iVar6 == 0) {
                      *(uint *)GL2WireSkeletalMesh_exref =
                           (uint)(*(int *)GL2WireSkeletalMesh_exref == 0);
                      ExceptionList = local_10;
                      return 1;
                    }
                    iVar6 = appAtoi((ushort *)param_1);
                    if (iVar6 < 1) {
                      ExceptionList = local_10;
                      return 1;
                    }
                    *(int *)(*(int *)(in_ECX + 4) + 0x5b8) = iVar6;
                    ExceptionList = local_10;
                    return 1;
                  }
                  iVar6 = ParseCommand((ushort **)&param_1,(ushort *)L"l2shader");
                  if (iVar6 != 0) {
                    *(uint *)GL2Shader_exref = (uint)(*(int *)GL2Shader_exref == 0);
                    (**(code **)(**(int **)(*(int *)(in_ECX + 4) + 0xe4) + 0x118))();
                    for (iVar6 = 0; iVar6 < *(int *)(*(int *)(*(int *)(in_ECX + 4) + 0xe4) + 0x11b4)
                        ; iVar6 = iVar6 + 1) {
                      local_34 = iVar6;
                      (**(code **)(**(int **)(*(int *)(*(int *)(*(int *)(in_ECX + 4) + 0xe4) +
                                                      0x11b0) + iVar6 * 4) + 0x118))();
                    }
                    ExceptionList = local_10;
                    return 1;
                  }
                  iVar6 = ParseCommand((ushort **)&param_1,(ushort *)L"REND");
                  if (iVar6 != 0) {
                    if (*(char *)(*(int *)(*(int *)(in_ECX + 4) + 0xe0) + 0x5d4) != '\0') {
                      ExceptionList = local_10;
                      return 0;
                    }
                    iVar6 = ParseCommand((ushort **)&param_1,(ushort *)L"BLEND");
                    if ((iVar6 != 0) ||
                       (iVar6 = ParseCommand((ushort **)&param_1,(ushort *)L"NORMALS"), iVar6 != 0))
                    {
                      *(uint *)(in_ECX + 0xe8) = (uint)(*(int *)(in_ECX + 0xe8) == 0);
                      ExceptionList = local_10;
                      return 1;
                    }
                    iVar6 = ParseCommand((ushort **)&param_1,(ushort *)L"BONE");
                    if (iVar6 != 0) {
                      *(uint *)(in_ECX + 0xe0) = (uint)(*(int *)(in_ECX + 0xe0) == 0);
                      ExceptionList = local_10;
                      return 1;
                    }
                    iVar6 = ParseCommand((ushort **)&param_1,(ushort *)L"SKIN");
                    if (iVar6 != 0) {
                      *(uint *)(in_ECX + 0xe4) = (uint)(*(int *)(in_ECX + 0xe4) == 0);
                      ExceptionList = local_10;
                      return 1;
                    }
                    iVar6 = ParseCommand((ushort **)&param_1,(ushort *)L"BOUND");
                    if (iVar6 != 0) {
                      *(uint *)(in_ECX + 0xdc) = (uint)(*(int *)(in_ECX + 0xdc) == 0);
                      ExceptionList = local_10;
                      return 1;
                    }
                    iVar6 = ParseCommand((ushort **)&param_1,(ushort *)L"DEFAULT");
                    if ((iVar6 == 0) &&
                       (iVar6 = ParseCommand((ushort **)&param_1,(ushort *)L"RESET"), iVar6 == 0)) {
                      ExceptionList = local_10;
                      return 0;
                    }
                    *(undefined4 *)(in_ECX + 0xdc) = 0;
                    *(undefined4 *)(in_ECX + 0xe8) = 0;
                    *(undefined4 *)(in_ECX + 0xe0) = 0;
                    ExceptionList = local_10;
                    return 1;
                  }
                  iVar6 = ParseCommand((ushort **)&param_1,(ushort *)L"SHOW");
                  if (iVar6 == 0) {
                    iVar6 = ParseCommand((ushort **)&param_1,(ushort *)L"CINEMATICS");
                    if (iVar6 != 0) {
                      iVar6 = appStrlen((ushort *)param_1);
                      if (iVar6 != 0) {
                        iVar6 = appAtoi((ushort *)param_1);
                        *(int *)(in_ECX + 0xf0) = iVar6;
                        ExceptionList = local_10;
                        return 1;
                      }
                      *(uint *)(in_ECX + 0xf0) = (uint)(*(int *)(in_ECX + 0xf0) == 0);
                      ExceptionList = local_10;
                      return 1;
                    }
                    iVar6 = ParseCommand((ushort **)&param_1,(ushort *)L"CINEMATICSRATIO");
                    if (iVar6 != 0) {
                      fVar14 = appAtof((ushort *)param_1);
                      *(float *)(in_ECX + 0xf4) = fVar14;
                      ExceptionList = local_10;
                      return 1;
                    }
                    iVar6 = ParseCommand((ushort **)&param_1,(ushort *)L"FIXEDVISIBILITY");
                    if (iVar6 != 0) {
                      iVar6 = *(int *)(in_ECX + 4);
                      if (*(char *)(*(int *)(iVar6 + 0xe0) + 0x5d4) != '\0') {
                        ExceptionList = local_10;
                        return 0;
                      }
                      *(uint *)(iVar6 + 0x564) =
                           *(uint *)(iVar6 + 0x564) ^
                           (~*(uint *)(iVar6 + 0x564) ^ *(uint *)(iVar6 + 0x564)) & 0x800000;
                      iVar6 = *(int *)(in_ECX + 4);
                      if ((*(uint *)(iVar6 + 0x564) & 0x800000) == 0) {
                        ExceptionList = local_10;
                        return 1;
                      }
                      *(undefined4 *)(iVar6 + 0x600) = *(undefined4 *)(iVar6 + 0x1bc);
                      *(undefined4 *)(iVar6 + 0x604) = *(undefined4 *)(iVar6 + 0x1c0);
                      *(undefined4 *)(iVar6 + 0x608) = *(undefined4 *)(iVar6 + 0x1c4);
                      iVar8 = *(int *)(in_ECX + 4);
                      *(undefined4 *)(iVar8 + 0x60c) = *(undefined4 *)(iVar8 + 0x1c8);
                      *(undefined4 *)(iVar8 + 0x610) = *(undefined4 *)(iVar8 + 0x1cc);
                      *(undefined4 *)(iVar8 + 0x614) = *(undefined4 *)(iVar8 + 0x1d0);
                      piVar4 = *(int **)(in_ECX + 4);
                      (**(code **)(*piVar4 + 0x36c))(iVar6,piVar4 + 0x180,piVar4 + 0x183);
                      ExceptionList = local_10;
                      return 1;
                    }
                    iVar6 = ParseCommand((ushort **)&param_1,(ushort *)L"TOGGLEREFRAST");
                    if (iVar6 != 0) {
                      *(uint *)(in_ECX + 0xa0) = (uint)(*(int *)(in_ECX + 0xa0) == 0);
                      iVar6 = **(int **)(in_ECX + 0x44);
                      uVar10 = (**(code **)(*(int *)(in_ECX + -0x38) + 0x7c))(0,1);
                      (**(code **)(iVar6 + 0x74))
                                (in_ECX + -0x38,*(undefined4 *)(in_ECX + 0x5c),
                                 *(undefined4 *)(in_ECX + 0x60),uVar10);
                      ExceptionList = local_10;
                      return 1;
                    }
                    iVar6 = ParseCommand((ushort **)&param_1,(ushort *)L"EXEC");
                    if (iVar6 != 0) {
                      iVar6 = ParseToken((ushort **)&param_1,(ushort *)&uStack_908,0x400,0);
                      if (iVar6 == 0) {
                        ExceptionList = local_10;
                        return 1;
                      }
                      UViewport::ExecMacro
                                ((UViewport *)(in_ECX + -0x38),(ushort *)&uStack_908,pFVar2);
                      ExceptionList = local_10;
                      return 1;
                    }
                    if ((*(int **)(in_ECX + 8) != (int *)0x0) &&
                       (iVar6 = (**(code **)(**(int **)(in_ECX + 8) + 0x4c))
                                          (param_1,pFVar2,
                                           *(undefined4 *)(*(int *)(in_ECX + 4) + 0x3bc)),
                       iVar6 != 0)) {
                      ExceptionList = local_10;
                      return 1;
                    }
                    iVar6 = UPlayer::Exec(in_ECX,(ushort *)param_1,pFVar2);
                    if (iVar6 != 0) {
                      ExceptionList = local_10;
                      return 1;
                    }
                    ExceptionList = local_10;
                    return 0;
                  }
                  if (*(char *)(*(int *)(*(int *)(in_ECX + 4) + 0xe0) + 0x5d4) != '\0') {
                    ExceptionList = local_10;
                    return 0;
                  }
                  iVar6 = ParseCommand((ushort **)&param_1,(ushort *)L"ACTORS");
                  if (iVar6 == 0) {
                    iVar6 = ParseCommand((ushort **)&param_1,(ushort *)L"ACTORINFO");
                    if (iVar6 == 0) {
                      iVar6 = ParseCommand((ushort **)&param_1,(ushort *)L"STATICMESHES");
                      if (iVar6 == 0) {
                        iVar6 = ParseCommand((ushort **)&param_1,(ushort *)L"TERRAIN");
                        if (iVar6 == 0) {
                          iVar6 = ParseCommand((ushort **)&param_1,(ushort *)&DAT_108b75d0);
                          if (iVar6 == 0) {
                            iVar6 = ParseCommand((ushort **)&param_1,(ushort *)&DAT_108b75c4);
                            if (iVar6 == 0) {
                              iVar6 = ParseCommand((ushort **)&param_1,(ushort *)L"CORONAS");
                              if (iVar6 == 0) {
                                iVar6 = ParseCommand((ushort **)&param_1,(ushort *)L"PARTICLES");
                                if (iVar6 == 0) {
                                  iVar6 = ParseCommand((ushort **)&param_1,(ushort *)&DAT_108b758c);
                                  if (iVar6 == 0) {
                                    iVar6 = ParseCommand((ushort **)&param_1,(ushort *)L"RADII");
                                    if (iVar6 == 0) {
                                      iVar6 = ParseCommand((ushort **)&param_1,(ushort *)L"FLUID");
                                      if (iVar6 == 0) {
                                        iVar6 = ParseCommand((ushort **)&param_1,
                                                             (ushort *)L"PROJECTORS");
                                        if (iVar6 == 0) {
                                          iVar6 = ParseCommand((ushort **)&param_1,
                                                               (ushort *)L"FALLBACKMATERIALS");
                                          if (iVar6 == 0) {
                                            iVar6 = ParseCommand((ushort **)&param_1,
                                                                 (ushort *)L"COLLISION");
                                            if (iVar6 == 0) {
                                              iVar6 = ParseCommand((ushort **)&param_1,
                                                                   (ushort *)L"TERRITORY");
                                              if (iVar6 == 0) {
                                                iVar6 = ParseCommand((ushort **)&param_1,
                                                                     (ushort *)L"VOLUME");
                                                if (iVar6 == 0) {
                                                  iVar6 = ParseCommand((ushort **)&param_1,
                                                                       (ushort *)L"NAME");
                                                  if (iVar6 == 0) {
                                                    iVar6 = ParseCommand((ushort **)&param_1,
                                                                         (ushort *)L"DROP");
                                                    if (iVar6 == 0) {
                                                      iVar6 = ParseCommand((ushort **)&param_1,
                                                                           (ushort *)L"WINDOWNAME");
                                                      if (iVar6 == 0) {
                                                        iVar6 = ParseCommand((ushort **)&param_1,
                                                                             (ushort *)L"WINDOWBOX")
                                                        ;
                                                        if (iVar6 == 0) {
                                                          iVar6 = ParseCommand((ushort **)&param_1,
                                                                               (ushort *)
                                                                               L"MUSICVOLUME");
                                                          if (iVar6 != 0) {
                                                            *(uint *)(*(int *)(in_ECX + 4) + 0x5ac)
                                                                 = *(uint *)(*(int *)(in_ECX + 4) +
                                                                            0x5ac) ^ 0x2000;
                                                          }
                                                        }
                                                        else {
                                                          *(int *)GL2ShowWindowBox_exref =
                                                               (*(int *)GL2ShowWindowBox_exref + 1)
                                                               % 3;
                                                        }
                                                      }
                                                      else {
                                                        *(int *)GL2ShowWindowName_exref =
                                                             (*(int *)GL2ShowWindowName_exref + 1) %
                                                             3;
                                                      }
                                                    }
                                                    else {
                                                      *(uint *)GL2HideDropMesh_exref =
                                                           (uint)(*(int *)GL2HideDropMesh_exref == 0
                                                                 );
                                                    }
                                                  }
                                                  else {
                                                    *(uint *)(*(int *)(in_ECX + 4) + 0x5ac) =
                                                         *(uint *)(*(int *)(in_ECX + 4) + 0x5ac) ^
                                                         0x1000;
                                                  }
                                                }
                                                else {
                                                  *(uint *)(*(int *)(in_ECX + 4) + 0x5ac) =
                                                       *(uint *)(*(int *)(in_ECX + 4) + 0x5ac) ^
                                                       0x800000;
                                                }
                                              }
                                              else {
                                                *(uint *)(*(int *)(in_ECX + 4) + 0x5ac) =
                                                     *(uint *)(*(int *)(in_ECX + 4) + 0x5ac) ^
                                                     0x80000000;
                                              }
                                            }
                                            else {
                                              *(uint *)(*(int *)(in_ECX + 4) + 0x5ac) =
                                                   *(uint *)(*(int *)(in_ECX + 4) + 0x5ac) ^
                                                   0x80000000;
                                            }
                                          }
                                          else {
                                            *(uint *)(*(int *)(in_ECX + 4) + 0x5ac) =
                                                 *(uint *)(*(int *)(in_ECX + 4) + 0x5ac) ^
                                                 0x40000000;
                                          }
                                        }
                                        else {
                                          *(uint *)(*(int *)(in_ECX + 4) + 0x5ac) =
                                               *(uint *)(*(int *)(in_ECX + 4) + 0x5ac) ^ 0x20000000;
                                        }
                                      }
                                      else {
                                        *(uint *)(*(int *)(in_ECX + 4) + 0x5ac) =
                                             *(uint *)(*(int *)(in_ECX + 4) + 0x5ac) ^ 0x10000000;
                                      }
                                    }
                                    else {
                                      *(uint *)(*(int *)(in_ECX + 4) + 0x5ac) =
                                           *(uint *)(*(int *)(in_ECX + 4) + 0x5ac) ^ 2;
                                    }
                                  }
                                  else {
                                    *(uint *)(*(int *)(in_ECX + 4) + 0x5ac) =
                                         *(uint *)(*(int *)(in_ECX + 4) + 0x5ac) ^ 0x2000000;
                                  }
                                }
                                else {
                                  *(uint *)(*(int *)(in_ECX + 4) + 0x5ac) =
                                       *(uint *)(*(int *)(in_ECX + 4) + 0x5ac) ^ 0x1000000;
                                }
                              }
                              else {
                                *(uint *)(*(int *)(in_ECX + 4) + 0x5ac) =
                                     *(uint *)(*(int *)(in_ECX + 4) + 0x5ac) ^ 0x400000;
                              }
                            }
                            else {
                              *(uint *)(*(int *)(in_ECX + 4) + 0x5ac) =
                                   *(uint *)(*(int *)(in_ECX + 4) + 0x5ac) ^ 4;
                            }
                          }
                          else {
                            *(uint *)(*(int *)(in_ECX + 4) + 0x5ac) =
                                 *(uint *)(*(int *)(in_ECX + 4) + 0x5ac) ^ 0x80000;
                          }
                        }
                        else {
                          *(uint *)(*(int *)(in_ECX + 4) + 0x5ac) =
                               *(uint *)(*(int *)(in_ECX + 4) + 0x5ac) ^ 0x40000;
                        }
                      }
                      else {
                        *(uint *)(*(int *)(in_ECX + 4) + 0x5ac) =
                             *(uint *)(*(int *)(in_ECX + 4) + 0x5ac) ^ 0x8000;
                      }
                    }
                    else {
                      *(uint *)(*(int *)(in_ECX + 4) + 0x5ac) =
                           *(uint *)(*(int *)(in_ECX + 4) + 0x5ac) ^ 0x4000000;
                    }
                  }
                  else {
                    *(uint *)(*(int *)(in_ECX + 4) + 0x5ac) =
                         *(uint *)(*(int *)(in_ECX + 4) + 0x5ac) ^ 8;
                  }
                  if (*(int *)GIsEditor_exref != 0) {
                    ExceptionList = local_10;
                    return 1;
                  }
                  for (iVar6 = 0; iVar6 < *(int *)(*(int *)(*(int *)(in_ECX + 4) + 0xe4) + 0x3c);
                      iVar6 = iVar6 + 1) {
                    iVar8 = *(int *)(*(int *)(*(int *)(*(int *)(in_ECX + 4) + 0xe4) + 0x38) +
                                    iVar6 * 4);
                    if ((iVar8 != 0) && ((*(byte *)(iVar8 + 100) & 0x10) != 0)) {
                      *(undefined1 *)(iVar8 + 0x50) = 0;
                    }
                  }
                  for (iVar6 = 0; iVar6 < *(int *)(*(int *)(*(int *)(in_ECX + 4) + 0xe4) + 0x11b4);
                      iVar6 = iVar6 + 1) {
                    iVar8 = *(int *)(*(int *)(*(int *)(*(int *)(in_ECX + 4) + 0xe4) + 0x11b0) +
                                    iVar6 * 4);
                    for (iVar9 = 0; iVar9 < *(int *)(iVar8 + 0x3c); iVar9 = iVar9 + 1) {
                      iVar3 = *(int *)(*(int *)(iVar8 + 0x38) + iVar9 * 4);
                      if ((iVar3 != 0) && ((*(byte *)(iVar3 + 100) & 0x10) != 0)) {
                        *(undefined1 *)(iVar3 + 0x50) = 0;
                      }
                    }
                  }
                  ExceptionList = local_10;
                  return 1;
                }
                if (*(int *)GIsEditor_exref != 0) {
                  ExceptionList = local_10;
                  return 1;
                }
                FMemMark::FMemMark((FMemMark *)local_50,(FMemStack *)GMem_exref);
                iVar6 = ((int)(*(int *)(in_ECX + 0x5c) + (*(int *)(in_ECX + 0x5c) >> 0x1f & 3U)) >>
                        2) * 4;
                local_38 = iVar6;
                param_2 = (FOutputDevice *)
                          thunk_FUN_10522300(4,GMem_exref,*(int *)(in_ECX + 0x60) * iVar6,8);
                (**(code **)(**(int **)(in_ECX + 0x44) + 0xa4))(in_ECX + -0x38,param_2);
                for (iVar8 = 0; local_40 = iVar8, iVar8 < 0x10000; iVar8 = iVar8 + 1) {
                  if (*(int *)GL2ScreenShotQuality_exref == 0) {
                    pwVar7 = L"Shot%05i.bmp";
                  }
                  else {
                    pwVar7 = L"Shot%05i.jpg";
                  }
                  appSprintf(local_108,(ushort *)pwVar7,iVar8);
                  iVar9 = (**(code **)(**(int **)GFileManager_exref + 0x10))(local_108);
                  if (iVar9 < 0) break;
                }
                if ((*(int *)GIsL2Console_exref != 0) && (*(int *)GIsL2NetLogin_exref != 0)) {
                  pUVar13 = UObject::GetOuter((UObject *)(in_ECX + -0x38));
                  iVar8 = thunk_FUN_105395a0(*(undefined4 *)(pUVar13 + 0x34));
                  if (iVar8 != 0) {
                    L2ParamStack::L2ParamStack(local_60,10);
                    local_8._0_1_ = 3;
                    L2ParamStack::L2ParamStack(local_70,10);
                    local_8._0_1_ = 4;
                    L2ParamStack::L2ParamStack((L2ParamStack *)local_24,10);
                    local_8._0_1_ = 5;
                    L2ParamStack::PushBack(local_60,(void *)0x0);
                    L2ParamStack::PushBack(local_60,local_108);
                    (**(code **)(*(int *)GL2Console + 0x350))(local_60);
                    L2ParamStack::PushBack(local_70,(void *)0x1);
                    L2ParamStack::PushBack(local_70,*(void **)(in_ECX + 0x5c));
                    (**(code **)(*(int *)GL2Console + 0x350))(local_70);
                    L2ParamStack::PushBack((L2ParamStack *)local_24,(void *)0x1);
                    L2ParamStack::PushBack((L2ParamStack *)local_24,*(void **)(in_ECX + 0x60));
                    (**(code **)(*(int *)GL2Console + 0x350))(local_24);
                    L2ParamStack::L2ParamStack(local_88,10);
                    local_8._0_1_ = 6;
                    L2ParamStack::PushBack(local_88,(void *)0x4b4);
                    (**(code **)(*(int *)GL2Console + 0x354))(local_88,0,0,0);
                    local_8._0_1_ = 5;
                    L2ParamStack::~L2ParamStack(local_88);
                    local_8._0_1_ = 4;
                    L2ParamStack::~L2ParamStack((L2ParamStack *)local_24);
                    local_8._0_1_ = 3;
                    L2ParamStack::~L2ParamStack(local_70);
                    local_8 = (uint)local_8._1_3_ << 8;
                    L2ParamStack::~L2ParamStack(local_60);
                    iVar6 = local_38;
                  }
                }
                iVar8 = *(int *)GL2ScreenShotQuality_exref;
                if (iVar8 != 0) {
                  iVar9 = 0;
                  if (iVar8 == 1) {
                    iVar9 = 0x14;
                  }
                  else if (iVar8 == 2) {
                    iVar9 = 0x23;
                  }
                  else if (iVar8 == 3) {
                    iVar9 = 0x32;
                  }
                  appCreateJpeg(local_108,iVar6,*(int *)(in_ECX + 0x60),(ulong *)param_2,
                                *(FFileManager **)GFileManager_exref,iVar9);
                  FMemMark::Pop((FMemMark *)local_50);
                  ExceptionList = local_10;
                  return 1;
                }
                appCreateBitmap(local_108,iVar6,*(int *)(in_ECX + 0x60),(ulong *)param_2,
                                *(FFileManager **)GFileManager_exref,1);
                FMemMark::Pop((FMemMark *)local_50);
                ExceptionList = local_10;
                return 1;
              }
              iVar8 = appAtoi((ushort *)param_1);
              iVar6 = *(int *)(*(int *)(*(int *)(in_ECX + 4) + 0xe4) + 0x70);
              *(int *)(DAT_10db0314 + 0x54) = iVar8;
              UObject::SaveConfig((UObject *)DAT_10db0314,0x4000,(ushort *)0x0);
              if (iVar8 < 500) {
                ExceptionList = local_10;
                return 1;
              }
              if (iVar6 == 0) {
                ExceptionList = local_10;
                return 1;
              }
              if (*(int *)(iVar6 + 0x44) == 0) {
                ExceptionList = local_10;
                return 1;
              }
              iVar9 = FURL::HasOption((FURL *)(*(int *)(iVar6 + 0x44) + 0x7c),
                                      (ushort *)&DAT_108b7954);
              if (iVar9 == 0) {
                ExceptionList = local_10;
                return 1;
              }
            }
            else {
              iVar8 = appAtoi((ushort *)param_1);
              iVar6 = *(int *)(*(int *)(*(int *)(in_ECX + 4) + 0xe4) + 0x70);
              *(int *)(DAT_10db0314 + 0x54) = iVar8;
              UObject::SaveConfig((UObject *)DAT_10db0314,0x4000,(ushort *)0x0);
              if (iVar8 < 500) {
                ExceptionList = local_10;
                return 1;
              }
              if (iVar6 == 0) {
                ExceptionList = local_10;
                return 1;
              }
              if (*(int *)(iVar6 + 0x44) == 0) {
                ExceptionList = local_10;
                return 1;
              }
              iVar9 = FURL::HasOption((FURL *)(*(int *)(iVar6 + 0x44) + 0x7c),
                                      (ushort *)&DAT_108b7954);
              if (iVar9 != 0) {
                ExceptionList = local_10;
                return 1;
              }
            }
            uVar10 = thunk_FUN_10370460(iVar8,500,*(undefined4 *)(iVar6 + 0x70));
            *(undefined4 *)(*(int *)(iVar6 + 0x44) + 0x50) = uVar10;
            pFVar2 = *(FOutputDevice **)(*(int *)(iVar6 + 0x44) + 0x50);
            *(FOutputDevice **)(in_ECX + 0x18) = pFVar2;
            FOutputDevice::Logf(pFVar2,(ushort *)(*(int *)(iVar6 + 0x44) + 0x34));
          }
          else {
            iVar6 = *(int *)(*(int *)(*(int *)(in_ECX + 4) + 0xe4) + 0x70);
            if ((iVar6 != 0) && (*(int *)(iVar6 + 0x44) != 0)) {
              FOutputDevice::Logf(this_01,(ushort *)pFVar2);
              FOutputDevice::Logf(param_1,(ushort *)(*(int *)(iVar6 + 0x44) + 0x34));
            }
          }
        }
        else {
          FOutputDevice::Logf(this_00,(ushort *)pFVar2);
        }
      }
      else {
        iVar6 = (**(code **)(*(int *)(in_ECX + -0x38) + 0x7c))();
        pwVar7 = L"true";
        if (iVar6 == 0) {
          pwVar7 = L"false";
        }
        FOutputDevice::Log(pFVar2,(ushort *)pwVar7);
      }
    }
    else {
      *(uint *)GIsTrueFontUse_exref = (uint)(*(int *)GIsTrueFontUse_exref == 0);
    }
  }
  ExceptionList = local_10;
  return 1;
}


// ==== 1053a624 Catch@1053a624

void Catch_1053a624(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x24) = *(undefined4 *)(unaff_EBP + -0x70);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x24,&DAT_10914c48);
}


// ==== 1053a638 Catch@1053a638

void Catch_1053a638(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"UViewport::Exec");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1053aa30 FUN_1053aa30

void FUN_1053aa30(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  uVar1 = param_2;
  puStack_c = &LAB_1081aec0;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  *(undefined4 *)(param_1 + 4) = param_2;
  thunk_FUN_104225e0(&param_2);
  (**(code **)(**(int **)(in_ECX + 0x154) + 0x14))(param_1,uVar1);
  ExceptionList = local_10;
  return;
}


// ==== 1053aa9b Catch@1053aa9b

void Catch_1053aa9b(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 1053aaaf Catch@1053aaaf

void Catch_1053aaaf(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"UViewport::PushHit");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1053ab00 FUN_1053ab00

void FUN_1053ab00(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1081aed0;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  if (*(int *)(in_ECX + 0x184) == 0) {
    ExceptionList = &local_10;
    appFailAssert("HitSizes.Num()",".\\UnCamera.cpp",0x35a);
  }
  iVar1 = **(int **)(in_ECX + 0x154);
  uVar2 = thunk_FUN_105394a0(param_1);
  (**(code **)(iVar1 + 0x18))(uVar2);
  ExceptionList = local_10;
  return;
}


// ==== 1053ab88 Catch@1053ab88

void Catch_1053ab88(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 1053ab9c Catch@1053ab9c

void Catch_1053ab9c(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"UViewport::PopHit");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1053abf0 FUN_1053abf0

int FUN_1053abf0(int *param_1)

{
  int iVar1;
  int *in_ECX;
  int iVar2;
  
  iVar1 = in_ECX[1];
  iVar2 = 0;
  if (0 < iVar1) {
    do {
      if (*(int *)(*in_ECX + iVar2 * 4) == *param_1) {
        thunk_FUN_103881a0(iVar2,1);
        iVar2 = iVar2 + -1;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < in_ECX[1]);
  }
  return iVar1 - in_ECX[1];
}


// ==== 1053ac40 FUN_1053ac40

void FUN_1053ac40(void)

{
  UObject *pUVar1;
  int iVar2;
  UObject *in_ECX;
  code *pcVar3;
  undefined1 *puVar4;
  undefined1 local_18 [4];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1081aee0;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffa8;
  local_8 = 0;
  ExceptionList = &local_10;
  pUVar1 = UObject::GetOuter(in_ECX);
  if (*(int *)(*(int *)(pUVar1 + 0x34) + 0x58) != 0) {
    pUVar1 = UObject::GetOuter(in_ECX);
    pUVar1 = (UObject *)(**(code **)(**(int **)(*(int *)(pUVar1 + 0x34) + 0x58) + 0x100))();
    if (pUVar1 == in_ECX) {
      pUVar1 = UObject::GetOuter(in_ECX);
      (**(code **)(**(int **)(*(int *)(pUVar1 + 0x34) + 0x58) + 0x70))(0);
    }
  }
  local_8 = CONCAT31(local_8._1_3_,1);
  (**(code **)(*(int *)in_ECX + 0x90))();
  local_8 = 3;
  if (*(int **)(in_ECX + 0x78) != (int *)0x0) {
    (**(code **)(**(int **)(in_ECX + 0x78) + 0xc))(1);
  }
  local_8 = 5;
  if (*(int **)(in_ECX + 0x40) != (int *)0x0) {
    (**(code **)(**(int **)(in_ECX + 0x40) + 0xc))(1);
  }
  local_8 = 7;
  if (*(int **)(in_ECX + 0x74) != (int *)0x0) {
    (**(code **)(**(int **)(in_ECX + 0x74) + 0xc))(1);
  }
  local_8 = 9;
  if (*(int *)GIsEditor_exref == 0) {
    if (*(int **)(in_ECX + 0x7c) == (int *)0x0) goto LAB_1053ad59;
    iVar2 = **(int **)(in_ECX + 0x7c);
LAB_1053ad3e:
    (**(code **)(iVar2 + 0x80))();
    if (*(int **)(in_ECX + 0x7c) != (int *)0x0) {
      pcVar3 = *(code **)(**(int **)(in_ECX + 0x7c) + 0xc);
      goto LAB_1053ad54;
    }
  }
  else {
    if (*(int *)(in_ECX + 0x7c) == 0) goto LAB_1053ad59;
    pUVar1 = UObject::GetOuter(in_ECX);
    iVar2 = **(int **)(in_ECX + 0x7c);
    if (*(int **)(in_ECX + 0x7c) != *(int **)(*(int *)(pUVar1 + 0x34) + 0x5c)) goto LAB_1053ad3e;
    pcVar3 = *(code **)(iVar2 + 0x84);
LAB_1053ad54:
    (*pcVar3)();
  }
  *(undefined4 *)(in_ECX + 0x7c) = 0;
LAB_1053ad59:
  local_8 = 0;
  puVar4 = local_18;
  UObject::GetOuter(in_ECX);
  thunk_FUN_1053abf0(puVar4);
  UPlayer::Destroy((UPlayer *)in_ECX);
  ExceptionList = local_10;
  return;
}


// ==== 1053ad94 Catch@1053ad94

void Catch_1053ad94(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x34);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_10914c48);
}


// ==== 1053ada8 Catch@1053ada8

void Catch_1053ada8(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"DeleteRenDev");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1053adc4 Catch@1053adc4

void Catch_1053adc4(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x1c) = *(undefined4 *)(unaff_EBP + -0x38);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x1c,&DAT_10914c48);
}


// ==== 1053add8 Catch@1053add8

void Catch_1053add8(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"DeleteCanvas");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1053addf Catch@1053addf

void Catch_1053addf(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x20) = *(undefined4 *)(unaff_EBP + -0x3c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x20,&DAT_10914c48);
}


// ==== 1053adf0 Catch@1053adf0

void Catch_1053adf0(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"DeleteConsole");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1053adf7 Catch@1053adf7

void Catch_1053adf7(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x24) = *(undefined4 *)(unaff_EBP + -0x40);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x24,&DAT_10914c48);
}


// ==== 1053ae08 Catch@1053ae08

void Catch_1053ae08(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"ExitInput");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1053ae0f Catch@1053ae0f

void Catch_1053ae0f(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x28) = *(undefined4 *)(unaff_EBP + -0x44);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x28,&DAT_10914c48);
}


// ==== 1053ae20 Catch@1053ae20

void Catch_1053ae20(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"CloseWindow");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1053ae27 Catch@1053ae27

void Catch_1053ae27(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x2c) = *(undefined4 *)(unaff_EBP + -0x48);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x2c,&DAT_10914c48);
}


// ==== 1053ae38 Catch@1053ae38

void Catch_1053ae38(void)

{
  ushort *puVar1;
  int unaff_EBP;
  
  appUnwindf((ushort *)&DAT_10851d80,L"UViewport::Destroy");
  puVar1 = UObject::GetFullName(*(UObject **)(unaff_EBP + -0x30),(ushort *)0x0);
  appUnwindf((ushort *)L"(%s)",puVar1);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1053af00 FUN_1053af00

void FUN_1053af00(void)

{
  int iVar1;
  UClass *pUVar2;
  UObject *pUVar3;
  int *piVar4;
  UPackage *pUVar5;
  UPlayer *in_ECX;
  double dVar6;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  FArray *local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1081af35;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffac;
  ExceptionList = &local_10;
  UPlayer::UPlayer(in_ECX);
  local_8 = 0;
  *(undefined ***)in_ECX = UViewport::vftable_for_UObject_;
  *(undefined ***)(in_ECX + 0x34) = UViewport::vftable_for_FOutputDevice_;
  *(undefined ***)(in_ECX + 0x38) = UViewport::vftable_for_FExec_;
  FName::FName((FName *)(in_ECX + 0x84));
  thunk_FUN_10539650();
  local_8._0_1_ = 1;
  FStringNoInit::FStringNoInit((FStringNoInit *)(in_ECX + 0x134));
  local_8._0_1_ = 2;
  local_18 = (FArray *)(in_ECX + 0x180);
  FArray::FArray(local_18);
  local_8 = CONCAT31(local_8._1_3_,5);
  UObject::GetOuter((UObject *)in_ECX);
  thunk_FUN_105394f0();
  pUVar2 = UObject::StaticLoadClass
                     (&UCanvas::PrivateStaticClass,(UObject *)0x0,
                      (ushort *)L"ini:Engine.Engine.Canvas",(ushort *)0x0,1,(UPackageMap *)0x0);
  local_18 = (FArray *)&stack0xffffff98;
  FName::FName((FName *)&stack0xffffff98,0);
  UObject::GetTransientPackage();
  pUVar3 = UObject::StaticConstructObject(pUVar2);
  piVar4 = (int *)thunk_FUN_10539520(pUVar3);
  *(int **)(in_ECX + 0x74) = piVar4;
  (**(code **)(*piVar4 + 0x68))();
  pUVar2 = UObject::StaticLoadClass
                     (&UInput::PrivateStaticClass,(UObject *)0x0,
                      (ushort *)L"ini:Engine.Engine.Input",(ushort *)0x0,1,(UPackageMap *)0x0);
  local_18 = (FArray *)&stack0xffffff94;
  FName::FName((FName *)&stack0xffffff94,0);
  pUVar5 = UObject::GetTransientPackage();
  pUVar3 = UObject::StaticConstructObject(pUVar2,pUVar5);
  *(UObject **)(in_ECX + 0x78) = pUVar3;
  if (*(int *)GIsBenchmarking_exref == 0) {
    dVar6 = appSecondsQPC();
  }
  else {
    dVar6 = 0.0;
  }
  *(double *)(in_ECX + 0x144) = dVar6;
  *(double *)(in_ECX + 0x88) = dVar6;
  *(undefined4 *)(in_ECX + 0xd8) = 0;
  local_30 = 0;
  local_2c = 0;
  local_28 = 0;
  *(undefined4 *)(in_ECX + 0xcc) = 0;
  *(undefined4 *)(in_ECX + 0xd0) = 0;
  *(undefined4 *)(in_ECX + 0xd4) = 0;
  local_3c = 0;
  local_38 = 0;
  local_34 = 0;
  *(undefined4 *)(in_ECX + 0xf0) = 0;
  *(undefined4 *)(in_ECX + 0xf4) = 0;
  *(undefined4 *)(in_ECX + 0xf8) = 0;
  local_48 = 0;
  local_44 = 0;
  local_40 = 0;
  *(undefined4 *)(in_ECX + 0xfc) = 0;
  *(undefined4 *)(in_ECX + 0x100) = 0;
  *(undefined4 *)(in_ECX + 0x104) = 0;
  *(undefined4 *)(in_ECX + 0x108) = 0;
  *(undefined4 *)(in_ECX + 0x110) = 0;
  *(undefined4 *)(in_ECX + 0x10c) = 0;
  *(undefined4 *)(in_ECX + 0xa4) = 4;
  *(undefined4 *)(in_ECX + 0xa0) = 0x3f800000;
  *(undefined4 *)(in_ECX + 0x9c) = 0x3f800000;
  *(undefined4 *)(in_ECX + 0x128) = 0;
  *(undefined4 *)(in_ECX + 300) = 0x3fd47ae1;
  *(undefined4 *)(in_ECX + 0x90) = 0;
  pUVar3 = UObject::GetOuter((UObject *)in_ECX);
  iVar1 = *(int *)(pUVar3 + 0xb4);
  *(int *)(in_ECX + 0x60) = iVar1;
  if (iVar1 != 0) {
    *(undefined4 *)(in_ECX + 0x40) = *(undefined4 *)(iVar1 + 0x3c);
    FString::FString((FString *)&local_48,(ushort *)L"ini:Engine.Engine.DefaultPlayerMenu");
    local_8._0_1_ = 6;
    UInteractionMaster::eventAddInteraction
              (*(UInteractionMaster **)(in_ECX + 0x60),(FString *)&local_48,in_ECX);
    local_8 = CONCAT31(local_8._1_3_,5);
    FString::~FString((FString *)&local_48);
  }
  *(undefined4 *)(in_ECX + 0x1a4) = 0;
  *(undefined4 *)(in_ECX + 0x1a8) = 0;
  ExceptionList = local_10;
  return;
}


// ==== 1053b190 Catch@1053b190

void Catch_1053b190(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x20);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_10914c48);
}


// ==== 1053b1a4 Catch@1053b1a4

void Catch_1053b1a4(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"UViewport::UViewport");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1053b280 FUN_1053b280

FString * FUN_1053b280(FString *param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1081af7a;
  local_10 = ExceptionList;
  local_8 = 1;
  ExceptionList = &local_10;
  FString::FString(param_1,(ushort *)&DAT_10853d94);
  ExceptionList = local_10;
  return param_1;
}


// ==== 1053b2d8 Catch@1053b2d8

void Catch_1053b2d8(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_10914c48);
}


// ==== 1053b2ec Catch@1053b2ec

void Catch_1053b2ec(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"USubActionCameraEffect:GetStatString");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1053b330 FUN_1053b330

void FUN_1053b330(void)

{
  UObject *in_ECX;
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1081af90;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  UObject::Destroy(in_ECX);
  for (uVar1 = 0; uVar1 < 2; uVar1 = uVar1 + 1) {
    if (*(int *)(in_ECX + uVar1 * 4 + 0x40) != 0) {
      if (*(undefined4 **)(in_ECX + uVar1 * 4 + 0x40) != (undefined4 *)0x0) {
        (**(code **)**(undefined4 **)(in_ECX + uVar1 * 4 + 0x40))(1);
      }
      *(undefined4 *)(in_ECX + uVar1 * 4 + 0x40) = 0;
    }
  }
  ExceptionList = local_10;
  return;
}


// ==== 1053b39f Catch@1053b39f

void Catch_1053b39f(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_10914c48);
}


// ==== 1053b3b3 Catch@1053b3b3

void Catch_1053b3b3(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"UMotionBlur::Destroy");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1053b400 UMotionBlur::Destroy thunk -> 1030f083

// ==== 1053b410 FUN_1053b410

void FUN_1053b410(undefined4 param_1)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 0x50) = param_1;
  return;
}


// ==== 1053b420 FUN_1053b420

void FUN_1053b420(undefined4 param_1)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 0x58) = param_1;
  return;
}


// ==== 1053b430 FUN_1053b430

void FUN_1053b430(void)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 100) = 0;
  *(undefined4 *)(in_ECX + 0x54) = 0;
  *(undefined4 *)(in_ECX + 0x50) = 0;
  return;
}


// ==== 1053b450 FUN_1053b450

void FUN_1053b450(undefined4 param_1,int *param_2)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1081afa0;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  (**(code **)(*param_2 + 0xd4))(0);
  (**(code **)(*param_2 + 4))();
  ExceptionList = local_10;
  return;
}


// ==== 1053b4ac Catch@1053b4ac

void Catch_1053b4ac(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 1053b4c0 Catch@1053b4c0

void Catch_1053b4c0(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"UBlackWhite::PostRender");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1053b500 FUN_1053b500

void FUN_1053b500(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *in_ECX;
  
  *in_ECX = param_1;
  in_ECX[1] = param_2;
  in_ECX[2] = param_3;
  in_ECX[3] = param_4;
  return;
}


// ==== 1053b530 FUN_1053b530

void FUN_1053b530(undefined4 param_1,int *param_2)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1081afb0;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  (**(code **)(*param_2 + 0xd4))(0);
  (**(code **)(*param_2 + 4))();
  ExceptionList = local_10;
  return;
}


// ==== 1053b58c Catch@1053b58c

void Catch_1053b58c(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 1053b5a0 Catch@1053b5a0

void Catch_1053b5a0(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"UFadeBlackWhite::PostRender");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1053b5e0 FUN_1053b5e0

void FUN_1053b5e0(void)

{
  UObject *in_ECX;
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1081afc0;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  UObject::Destroy(in_ECX);
  for (uVar1 = 0; uVar1 < 7; uVar1 = uVar1 + 1) {
    if (*(int *)(in_ECX + uVar1 * 4 + 0x3c) != 0) {
      if (*(undefined4 **)(in_ECX + uVar1 * 4 + 0x3c) != (undefined4 *)0x0) {
        (**(code **)**(undefined4 **)(in_ECX + uVar1 * 4 + 0x3c))(1);
      }
      *(undefined4 *)(in_ECX + uVar1 * 4 + 0x3c) = 0;
    }
  }
  ExceptionList = local_10;
  return;
}


// ==== 1053b64f Catch@1053b64f

void Catch_1053b64f(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_10914c48);
}


// ==== 1053b663 Catch@1053b663

void Catch_1053b663(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"HDREffect::Destroy()");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1053b6b0 FUN_1053b6b0

void FUN_1053b6b0(void)

{
  int iVar1;
  int in_ECX;
  undefined4 *puStack_68;
  wchar_t *pwStack_64;
  undefined4 **ppuStack_60;
  wchar_t *pwStack_5c;
  undefined4 *puStack_58;
  wchar_t *pwStack_54;
  undefined4 **ppuStack_50;
  wchar_t *pwStack_4c;
  undefined4 *puStack_48;
  wchar_t *pwStack_44;
  undefined4 **ppuStack_40;
  wchar_t *pwStack_3c;
  undefined4 *puStack_38;
  wchar_t *pwStack_34;
  undefined1 *puStack_30;
  wchar_t *pwStack_2c;
  undefined4 *puStack_28;
  wchar_t *pwStack_24;
  ushort local_8 [4];
  
  appSprintf(local_8,(ushort *)&DAT_108b7e4c);
  iVar1 = (**(code **)**(undefined4 **)GConfig_exref)();
  if (iVar1 == 0) {
    *(undefined4 *)GL2HDREffect_exref = 0;
  }
  pwStack_24 = L"env.int";
  pwStack_2c = L"Gray";
  puStack_30 = &stack0xffffffe8;
  pwStack_34 = (wchar_t *)0x1053b725;
  puStack_28 = (undefined4 *)(in_ECX + 0x60);
  iVar1 = (**(code **)(**(int **)GConfig_exref + 8))();
  if (iVar1 == 0) {
    *(undefined4 *)(in_ECX + 0x60) = 0x3f19999a;
  }
  pwStack_34 = L"env.int";
  pwStack_3c = L"FinalCoef";
  ppuStack_40 = &puStack_28;
  pwStack_44 = (wchar_t *)0x1053b752;
  puStack_38 = (undefined4 *)(in_ECX + 100);
  iVar1 = (**(code **)(**(int **)GConfig_exref + 8))();
  if (iVar1 == 0) {
    *(undefined4 *)(in_ECX + 100) = 0x40600000;
  }
  pwStack_44 = L"env.int";
  pwStack_4c = L"ExpBase";
  ppuStack_50 = &puStack_38;
  pwStack_54 = (wchar_t *)0x1053b77f;
  puStack_48 = (undefined4 *)(in_ECX + 0x68);
  iVar1 = (**(code **)(**(int **)GConfig_exref + 8))();
  if (iVar1 == 0) {
    *(undefined4 *)(in_ECX + 0x68) = 0x3f7ae148;
  }
  pwStack_54 = L"env.int";
  pwStack_5c = L"ExpCoef";
  ppuStack_60 = &puStack_48;
  pwStack_64 = (wchar_t *)0x1053b7ac;
  puStack_58 = (undefined4 *)(in_ECX + 0x6c);
  iVar1 = (**(code **)(**(int **)GConfig_exref + 8))();
  if (iVar1 == 0) {
    *(undefined4 *)(in_ECX + 0x6c) = 0x41f00000;
  }
  pwStack_64 = L"env.int";
  puStack_68 = (undefined4 *)(in_ECX + 0x70);
  iVar1 = (**(code **)(**(int **)GConfig_exref + 8))(&puStack_58,L"ClampMin");
  if (iVar1 == 0) {
    *(undefined4 *)(in_ECX + 0x70) = 0x3e800000;
  }
  iVar1 = (**(code **)(**(int **)GConfig_exref + 8))
                    (&puStack_68,L"ClampMax",(undefined4 *)(in_ECX + 0x74),L"env.int");
  if (iVar1 == 0) {
    *(undefined4 *)(in_ECX + 0x74) = 0x3f400000;
  }
  return;
}


// ==== 1053b880 FUN_1053b880

void FUN_1053b880(void)

{
  UObject *in_ECX;
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1081afd0;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  UObject::Destroy(in_ECX);
  for (uVar1 = 0; uVar1 < 5; uVar1 = uVar1 + 1) {
    if (*(int *)(in_ECX + uVar1 * 4 + 0x3c) != 0) {
      if (*(undefined4 **)(in_ECX + uVar1 * 4 + 0x3c) != (undefined4 *)0x0) {
        (**(code **)**(undefined4 **)(in_ECX + uVar1 * 4 + 0x3c))(1);
      }
      *(undefined4 *)(in_ECX + uVar1 * 4 + 0x3c) = 0;
    }
  }
  ExceptionList = local_10;
  return;
}


// ==== 1053b8ef Catch@1053b8ef

void Catch_1053b8ef(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_10914c48);
}


// ==== 1053b903 Catch@1053b903

void Catch_1053b903(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"UGlowEffect::Destroy");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1053b950 FUN_1053b950

void FUN_1053b950(void)

{
  int iVar1;
  int in_ECX;
  undefined4 *puStack_b8;
  wchar_t *pwStack_b4;
  undefined4 **ppuStack_b0;
  wchar_t *pwStack_ac;
  undefined4 *puStack_a8;
  wchar_t *pwStack_a4;
  undefined4 **ppuStack_a0;
  wchar_t *pwStack_9c;
  undefined4 *puStack_98;
  wchar_t *pwStack_94;
  undefined4 **ppuStack_90;
  wchar_t *pwStack_8c;
  undefined4 *puStack_88;
  wchar_t *pwStack_84;
  undefined4 **ppuStack_80;
  wchar_t *pwStack_7c;
  undefined4 *puStack_78;
  wchar_t *pwStack_74;
  undefined4 **ppuStack_70;
  wchar_t *pwStack_6c;
  undefined4 *puStack_68;
  wchar_t *pwStack_64;
  undefined4 **ppuStack_60;
  wchar_t *pwStack_5c;
  undefined4 *puStack_58;
  wchar_t *pwStack_54;
  undefined4 **ppuStack_50;
  wchar_t *pwStack_4c;
  undefined4 *puStack_48;
  wchar_t *pwStack_44;
  undefined4 **ppuStack_40;
  wchar_t *pwStack_3c;
  undefined4 *puStack_38;
  wchar_t *pwStack_34;
  undefined1 *puStack_30;
  wchar_t *pwStack_2c;
  undefined4 *puStack_28;
  wchar_t *pwStack_24;
  ushort local_8 [4];
  
  appSprintf(local_8,(ushort *)&DAT_108b7e4c);
  iVar1 = (**(code **)**(undefined4 **)GConfig_exref)();
  if (iVar1 == 0) {
    *(undefined4 *)GL2GlowEffect_exref = 0;
  }
  pwStack_24 = L"env.int";
  pwStack_2c = L"GlowType";
  puStack_30 = &stack0xffffffe8;
  pwStack_34 = L"삅ٵ߇\x01";
  puStack_28 = (undefined4 *)(in_ECX + 0x68);
  iVar1 = (**(code **)(**(int **)GConfig_exref + 4))();
  if (iVar1 == 0) {
    *(undefined4 *)(in_ECX + 0x68) = 1;
  }
  pwStack_34 = L"env.int";
  pwStack_3c = L"BlurNum";
  ppuStack_40 = &puStack_28;
  pwStack_44 = L"삅ٵ߇\x02";
  puStack_38 = (undefined4 *)(in_ECX + 100);
  iVar1 = (**(code **)(**(int **)GConfig_exref + 4))();
  if (iVar1 == 0) {
    *(undefined4 *)(in_ECX + 100) = 2;
  }
  pwStack_44 = L"env.int";
  pwStack_4c = L"Luminance";
  ppuStack_50 = &puStack_38;
  pwStack_54 = (wchar_t *)0x1053ba1b;
  puStack_48 = (undefined4 *)(in_ECX + 0x50);
  iVar1 = (**(code **)(**(int **)GConfig_exref + 8))();
  if (iVar1 == 0) {
    *(undefined4 *)(in_ECX + 0x50) = 0x3da3d70a;
  }
  pwStack_54 = L"env.int";
  pwStack_5c = L"MiddleGray";
  ppuStack_60 = &puStack_48;
  pwStack_64 = (wchar_t *)0x1053ba48;
  puStack_58 = (undefined4 *)(in_ECX + 0x54);
  iVar1 = (**(code **)(**(int **)GConfig_exref + 8))();
  if (iVar1 == 0) {
    *(undefined4 *)(in_ECX + 0x54) = 0x3e3851ec;
  }
  pwStack_64 = L"env.int";
  pwStack_6c = L"WhiteCutoff";
  ppuStack_70 = &puStack_58;
  pwStack_74 = (wchar_t *)0x1053ba75;
  puStack_68 = (undefined4 *)(in_ECX + 0x58);
  iVar1 = (**(code **)(**(int **)GConfig_exref + 8))();
  if (iVar1 == 0) {
    *(undefined4 *)(in_ECX + 0x58) = 0x3f4ccccd;
  }
  pwStack_74 = L"env.int";
  pwStack_7c = L"BloomScale";
  ppuStack_80 = &puStack_68;
  pwStack_84 = (wchar_t *)0x1053baa2;
  puStack_78 = (undefined4 *)(in_ECX + 0x60);
  iVar1 = (**(code **)(**(int **)GConfig_exref + 8))();
  if (iVar1 == 0) {
    *(undefined4 *)(in_ECX + 0x60) = 0x3fc00000;
  }
  pwStack_84 = L"env.int";
  pwStack_8c = L"RGBCutoff";
  ppuStack_90 = &puStack_78;
  pwStack_94 = (wchar_t *)0x1053bacf;
  puStack_88 = (undefined4 *)(in_ECX + 0x6c);
  iVar1 = (**(code **)(**(int **)GConfig_exref + 8))();
  if (iVar1 == 0) {
    *(undefined4 *)(in_ECX + 0x6c) = 0x3f4ccccd;
  }
  pwStack_94 = L"env.int";
  pwStack_9c = L"Threshold";
  ppuStack_a0 = &puStack_88;
  pwStack_a4 = (wchar_t *)0x1053bafc;
  puStack_98 = (undefined4 *)(in_ECX + 0x5c);
  iVar1 = (**(code **)(**(int **)GConfig_exref + 8))();
  if (iVar1 == 0) {
    *(undefined4 *)(in_ECX + 0x5c) = 0x3eb33333;
  }
  pwStack_a4 = L"env.int";
  pwStack_ac = L"FinalBlendBlurType";
  ppuStack_b0 = &puStack_98;
  pwStack_b4 = L"삅ٵ߇\x01";
  puStack_a8 = (undefined4 *)(in_ECX + 0x70);
  iVar1 = (**(code **)(**(int **)GConfig_exref + 4))();
  if (iVar1 == 0) {
    *(undefined4 *)(in_ECX + 0x70) = 1;
  }
  pwStack_b4 = L"env.int";
  puStack_b8 = (undefined4 *)(in_ECX + 0x74);
  iVar1 = (**(code **)(**(int **)GConfig_exref + 4))(&puStack_a8,L"FinalBlendOpacity");
  if (iVar1 == 0) {
    *(undefined4 *)(in_ECX + 0x74) = 0x55;
  }
  iVar1 = (**(code **)(**(int **)GConfig_exref + 4))
                    (&puStack_b8,L"AspectBlendOpacity",(undefined4 *)(in_ECX + 0x78),L"env.int");
  if (iVar1 == 0) {
    *(undefined4 *)(in_ECX + 0x78) = 0xc0;
  }
  return;
}


// ==== 1053bc20 FUN_1053bc20

undefined4 FUN_1053bc20(float param_1,ASceneManager *param_2)

{
  UCameraEffect *pUVar1;
  int iVar2;
  APlayerController *this;
  UMatSubAction *in_ECX;
  float10 fVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1081afe0;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  iVar2 = UMatSubAction::Update(in_ECX,param_1,param_2);
  if (iVar2 == 0) {
    ExceptionList = local_10;
    return 0;
  }
  iVar2 = (**(code **)(*(int *)in_ECX + 0x70))();
  if (iVar2 != 0) {
    this = (APlayerController *)thunk_FUN_103285e0(*(undefined4 *)(param_2 + 0x3f4));
    if ((this != (APlayerController *)0x0) && (iVar2 = *(int *)(in_ECX + 0x5c), iVar2 != 0)) {
      if (*(float *)(in_ECX + 0x58) <= 0.0) {
        fVar3 = (float10)*(float *)(in_ECX + 100);
      }
      else {
        fVar3 = (float10)thunk_FUN_10443920(in_ECX + 0x60,in_ECX + 100,
                                            (param_1 - *(float *)(in_ECX + 0x50)) /
                                            *(float *)(in_ECX + 0x58));
      }
      *(float *)(iVar2 + 0x34) = (float)fVar3;
      pUVar1 = *(UCameraEffect **)(in_ECX + 0x5c);
      if ((0.0 < *(float *)(pUVar1 + 0x34)) &&
         ((in_ECX[0x40] != (UMatSubAction)0x2 || (((byte)in_ECX[0x68] & 1) == 0)))) {
        APlayerController::eventAddCameraEffect(this,pUVar1,1);
        ExceptionList = local_10;
        return 1;
      }
      APlayerController::eventRemoveCameraEffect(this,pUVar1);
    }
  }
  ExceptionList = local_10;
  return 1;
}


// ==== 1053bd3a Catch@1053bd3a

void Catch_1053bd3a(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 1053bd4e Catch@1053bd4e

void Catch_1053bd4e(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"USubActionCameraEffect::Update");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1053bdc0 FUN_1053bdc0

void FUN_1053bdc0(UViewport *param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int in_ECX;
  uint uVar5;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1081aff0;
  local_10 = ExceptionList;
  uVar5 = 0;
  local_8 = 0;
  ExceptionList = &local_10;
  do {
    if (1 < uVar5) {
      (**(code **)*param_2)();
      (**(code **)(*param_2 + 8))(*(undefined4 *)(in_ECX + 0x40));
      (**(code **)(*param_2 + 0xc))
                (0,0,*(undefined4 *)(param_1 + 0x94),*(undefined4 *)(param_1 + 0x98));
      iVar2 = *param_2;
      iVar4 = UViewport::IsDepthComplexity(param_1);
      (**(code **)(iVar2 + 0x10))(1,0xff000000,1,0x3f800000,1,~(-(uint)(iVar4 != 0) & 0xf));
      ExceptionList = local_10;
      return;
    }
    if (*(int *)(in_ECX + 0x40 + uVar5 * 4) == 0) {
      iVar2 = thunk_FUN_103ff710(0x20,L"BlurRenderTarget");
      if (iVar2 == 0) {
        *(undefined4 *)(in_ECX + 0x40 + uVar5 * 4) = 0;
      }
      else {
        uVar3 = thunk_FUN_10682720(*(undefined4 *)(param_1 + 0x94),*(undefined4 *)(param_1 + 0x98),5
                                  );
        *(undefined4 *)(in_ECX + 0x40 + uVar5 * 4) = uVar3;
      }
LAB_1053be74:
      (**(code **)*param_2)();
      (**(code **)(*param_2 + 8))(*(undefined4 *)(in_ECX + 0x40 + uVar5 * 4));
      (**(code **)(*param_2 + 0x10))(1,0xff000000,1,0x3f800000,1,0);
      (**(code **)(*param_2 + 4))();
    }
    else {
      iVar2 = *(int *)(in_ECX + 0x40 + uVar5 * 4);
      if ((*(int *)(iVar2 + 0x14) != *(int *)(param_1 + 0x94)) ||
         (*(int *)(iVar2 + 0x18) != *(int *)(param_1 + 0x98))) {
        *(int *)(*(int *)(in_ECX + 0x40 + uVar5 * 4) + 0x14) = *(int *)(param_1 + 0x94);
        *(undefined4 *)(*(int *)(in_ECX + 0x40 + uVar5 * 4) + 0x18) =
             *(undefined4 *)(param_1 + 0x98);
        piVar1 = (int *)(*(int *)(in_ECX + 0x40 + uVar5 * 4) + 0x10);
        *piVar1 = *piVar1 + 1;
        goto LAB_1053be74;
      }
    }
    uVar5 = uVar5 + 1;
  } while( true );
}


// ==== 1053bf51 Catch@1053bf51

void Catch_1053bf51(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_10914c48);
}


// ==== 1053bf65 Catch@1053bf65

void Catch_1053bf65(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"UMotionBlur::PreRender");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1053c000 FUN_1053c000

void FUN_1053c000(void)

{
  int iVar1;
  ushort *puVar2;
  UMotionBlur *in_ECX;
  ushort *puVar3;
  UMotionBlur *pUVar4;
  FString local_18 [4];
  uint uStack_14;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1081b011;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  UMotionBlur::UMotionBlur(in_ECX);
  local_4 = 0;
  *(undefined4 *)(in_ECX + 100) = 0;
  *(undefined ***)in_ECX = UUnderWaterEffect::vftable;
  *(undefined4 *)(in_ECX + 0x50) = 0;
  *(undefined4 *)(in_ECX + 0x54) = 0;
  *(undefined4 *)(in_ECX + 0x58) = 0;
  FString::FString(local_18);
  local_4 = CONCAT31(local_4._1_3_,1);
  iVar1 = (**(code **)(**(int **)GConfig_exref + 0xc))
                    (L"WaterVolume",L"WaterVolumeCellophaneColor",local_18,L"Env.int");
  if (iVar1 == 0) {
    *(undefined4 *)(in_ECX + 0x4c) = 0x80ffffff;
  }
  else {
    puVar3 = (ushort *)&DAT_108919d8;
    pUVar4 = in_ECX + 0x4e;
    puVar2 = FString::operator*((FString *)&stack0xffffffd8);
    iVar1 = Parse(puVar2,puVar3,(uchar *)pUVar4);
    if (iVar1 == 0) {
      in_ECX[0x4e] = (UMotionBlur)0xff;
    }
    puVar3 = (ushort *)&DAT_108919e0;
    pUVar4 = in_ECX + 0x4d;
    puVar2 = FString::operator*((FString *)&stack0xffffffd8);
    iVar1 = Parse(puVar2,puVar3,(uchar *)pUVar4);
    if (iVar1 == 0) {
      in_ECX[0x4d] = (UMotionBlur)0xff;
    }
    puVar3 = (ushort *)&DAT_108919e8;
    pUVar4 = in_ECX + 0x4c;
    puVar2 = FString::operator*((FString *)&stack0xffffffd8);
    iVar1 = Parse(puVar2,puVar3,(uchar *)pUVar4);
    if (iVar1 == 0) {
      in_ECX[0x4c] = (UMotionBlur)0xff;
    }
    puVar3 = (ushort *)&DAT_108b80a4;
    pUVar4 = in_ECX + 0x4f;
    puVar2 = FString::operator*((FString *)&stack0xffffffd8);
    iVar1 = Parse(puVar2,puVar3,(uchar *)pUVar4);
    if (iVar1 == 0) {
      in_ECX[0x4f] = (UMotionBlur)0xff;
    }
  }
  UObject::SetFlags((UObject *)in_ECX,0x4000000);
  uStack_14 = uStack_14 & 0xffffff00;
  FString::~FString((FString *)&stack0xffffffd8);
  ExceptionList = in_ECX;
  return;
}


// ==== 1053c1b0 FUN_1053c1b0

void FUN_1053c1b0(UViewport *param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1081b030;
  local_10 = ExceptionList;
  local_8 = 0;
  if (*(int *)GL2UnderWaterEffect_exref == 0) {
    return;
  }
  if (*(int *)(in_ECX + 0x40) == 0) {
    ExceptionList = &local_10;
    iVar2 = thunk_FUN_103ff710(0x20,L"BlurRenderTarget");
    if (iVar2 == 0) {
      *(undefined4 *)(in_ECX + 0x40) = 0;
    }
    else {
      uVar3 = thunk_FUN_10682720(*(undefined4 *)(param_1 + 0x94),*(undefined4 *)(param_1 + 0x98),5);
      *(undefined4 *)(in_ECX + 0x40) = uVar3;
    }
  }
  else {
    if ((*(int *)(*(int *)(in_ECX + 0x40) + 0x14) == *(int *)(param_1 + 0x94)) &&
       (ExceptionList = &local_10,
       *(int *)(*(int *)(in_ECX + 0x40) + 0x18) == *(int *)(param_1 + 0x98))) goto LAB_1053c2be;
    ExceptionList = &local_10;
    *(int *)(*(int *)(in_ECX + 0x40) + 0x14) = *(int *)(param_1 + 0x94);
    *(undefined4 *)(*(int *)(in_ECX + 0x40) + 0x18) = *(undefined4 *)(param_1 + 0x98);
    piVar1 = (int *)(*(int *)(in_ECX + 0x40) + 0x10);
    *piVar1 = *piVar1 + 1;
  }
  (**(code **)*param_2)();
  (**(code **)(*param_2 + 8))(*(undefined4 *)(in_ECX + 0x40));
  (**(code **)(*param_2 + 0x10))(1,0xff000000,1,0x3f800000,1,0);
  (**(code **)(*param_2 + 4))();
LAB_1053c2be:
  (**(code **)*param_2)();
  (**(code **)(*param_2 + 8))(*(undefined4 *)(in_ECX + 0x40));
  (**(code **)(*param_2 + 0xc))(0,0,*(undefined4 *)(param_1 + 0x94),*(undefined4 *)(param_1 + 0x98))
  ;
  iVar2 = *param_2;
  iVar4 = UViewport::IsDepthComplexity(param_1);
  (**(code **)(iVar2 + 0x10))(1,0xff000000,1,0x3f800000,1,~(-(uint)(iVar4 != 0) & 0xf));
  ExceptionList = local_10;
  return;
}


// ==== 1053c343 Catch@1053c343

void Catch_1053c343(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 1053c357 Catch@1053c357

void Catch_1053c357(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"UUnderWaterEffect::PreRender");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1053c3f0 FUN_1053c3f0

void FUN_1053c3f0(UViewport *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1081b040;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  (**(code **)*param_2)();
  (**(code **)(*param_2 + 0xc))(0,0,*(undefined4 *)(param_1 + 0x94),*(undefined4 *)(param_1 + 0x98))
  ;
  iVar1 = *param_2;
  iVar2 = UViewport::IsDepthComplexity(param_1);
  (**(code **)(iVar1 + 0x10))(1,0xff000000,1,0x3f800000,1,~(-(uint)(iVar2 != 0) & 0xf));
  (**(code **)(*param_2 + 0xd4))(4);
  ExceptionList = local_10;
  return;
}


// ==== 1053c49e Catch@1053c49e

void Catch_1053c49e(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 1053c4b2 Catch@1053c4b2

void Catch_1053c4b2(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"UBlackWhite::PreRender");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1053c510 FUN_1053c510

void FUN_1053c510(UViewport *param_1,int *param_2)

{
  int iVar1;
  int in_ECX;
  undefined4 extraout_ECX;
  float10 fVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1081b050;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  if (*(float *)(in_ECX + 0x48) == 0.0) {
    if (0.0 <= *(float *)(in_ECX + 0x40)) {
      ExceptionList = &local_10;
      *(undefined4 *)(in_ECX + 0x40) = 0x3f800000;
      *(undefined4 *)(in_ECX + 0x44) = 0;
    }
    else {
      ExceptionList = &local_10;
      *(undefined4 *)(in_ECX + 0x40) = 0xbf800000;
      *(undefined4 *)(in_ECX + 0x44) = 0x3f800000;
    }
    *(undefined4 *)(in_ECX + 0x48) =
         *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x3c) + 0xe0) + 0x4bc);
  }
  if (((*(float *)(in_ECX + 0x40) < 0.0) && (*(float *)(in_ECX + 0x44) == 0.0)) ||
     ((0.0 < *(float *)(in_ECX + 0x40) && (*(float *)(in_ECX + 0x44) == 1.0)))) {
    *(float *)(in_ECX + 0x40) = *(float *)(in_ECX + 0x40) * -1.0;
  }
  (**(code **)*param_2)();
  (**(code **)(*param_2 + 0xc))(0,0,*(undefined4 *)(param_1 + 0x94),*(undefined4 *)(param_1 + 0x98))
  ;
  iVar1 = UViewport::IsDepthComplexity(param_1);
  (**(code **)(*param_2 + 0x10))(1,0xff000000,1,0x3f800000,1,~(-(uint)(iVar1 != 0) & 0xf));
  (**(code **)(*param_2 + 0xd4))(5);
  fVar2 = (float10)thunk_FUN_103704b0(((*(float *)(*(int *)(*(int *)(param_1 + 0x3c) + 0xe0) + 0x4bc
                                                  ) - *(float *)(in_ECX + 0x48)) /
                                      *(float *)(in_ECX + 0x3c)) * *(float *)(in_ECX + 0x40) +
                                      *(float *)(in_ECX + 0x44),0,0x3f800000);
  *(float *)(in_ECX + 0x44) = (float)fVar2;
  *(undefined4 *)(in_ECX + 0x48) =
       *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x3c) + 0xe0) + 0x4bc);
  thunk_FUN_1053b500(*(undefined4 *)(in_ECX + 0x44),*(undefined4 *)(in_ECX + 0x44),
                     *(undefined4 *)(in_ECX + 0x44),*(undefined4 *)(in_ECX + 0x44));
  (**(code **)(*param_2 + 0xe8))(1,extraout_ECX,1);
  ExceptionList = local_10;
  return;
}


// ==== 1053c6cc Catch@1053c6cc

void Catch_1053c6cc(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_10914c48);
}


// ==== 1053c6e0 Catch@1053c6e0

void Catch_1053c6e0(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"UFadeBlackWhite::PreRender");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1053c780 FUN_1053c780

void FUN_1053c780(void)

{
  UObject *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1081b071;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  UObject::UObject(in_ECX);
  *(undefined ***)in_ECX = UCameraEffect::vftable;
  *(undefined ***)in_ECX = UHDREffect::vftable;
  local_8 = 2;
  appMemset(in_ECX + 0x3c,0,0x1c);
  UHDREffect::UpdateParams((UHDREffect *)in_ECX);
  UObject::SetFlags(in_ECX,0x4000000);
  ExceptionList = local_10;
  return;
}


// ==== 1053c809 Catch@1053c809

void Catch_1053c809(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 1053c81d Catch@1053c81d

void Catch_1053c81d(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"HDREffect");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1053c870 FUN_1053c870

void FUN_1053c870(UViewport *param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int local_94 [28];
  undefined1 *local_24;
  void *local_20;
  undefined1 *puStack_1c;
  undefined4 local_18;
  int local_10;
  undefined4 local_c;
  int local_8;
  
  puStack_1c = &LAB_1081b090;
  local_20 = ExceptionList;
  local_24 = &stack0xffffff5c;
  local_18 = 0;
  local_c = 0;
  ExceptionList = &local_20;
  iVar2 = (**(code **)(**(int **)(param_1 + 0x7c) + 0xd4))(0x11);
  if (((iVar2 != 0) && (*(int *)GL2HDREffect_exref != 0)) && (0 < *(int *)GL2PostProcessType_exref))
  {
    local_94[0] = *(int *)(param_1 + 0x94);
    local_94[1] = *(undefined4 *)(param_1 + 0x98);
    local_94[2] = 0x10;
    local_94[3] = 1;
    local_94[4] = 0x40;
    local_94[5] = 0x40;
    local_94[6] = 0x11;
    local_94[7] = 0;
    local_94[8] = 0x10;
    local_94[9] = 0x10;
    local_94[10] = 0x11;
    local_94[0xb] = 0;
    local_94[0xc] = 4;
    local_94[0xd] = 4;
    local_94[0xe] = 0x11;
    local_94[0xf] = 0;
    local_94[0x10] = 1;
    local_94[0x11] = 1;
    local_94[0x12] = 0x11;
    local_94[0x13] = 0;
    local_94[0x14] = 1;
    local_94[0x15] = 1;
    local_94[0x16] = 0x11;
    local_94[0x17] = 0;
    local_94[0x18] = 1;
    local_94[0x19] = 1;
    local_94[0x1a] = 0x11;
    local_94[0x1b] = 0;
    local_10 = 0;
    while (iVar2 = local_10, local_10 < 7) {
      local_c = 0;
      if (*(int *)(local_8 + 0x3c + local_10 * 4) == 0) {
        iVar3 = thunk_FUN_103ff710(0x20,L"HDRRenderTarget");
        if (iVar2 == 0) {
          if (iVar3 == 0) {
            *(undefined4 *)(local_8 + 0x3c) = 0;
          }
          else {
            iVar4 = (**(code **)(**(int **)(param_1 + 0x7c) + 0xd4))(0x100);
            iVar3 = local_94[2];
            if (iVar4 == 0) {
              iVar3 = 5;
            }
            uVar5 = thunk_FUN_10682720(local_94[0],local_94[1],iVar3);
            *(undefined4 *)(local_8 + 0x3c) = uVar5;
          }
        }
        else {
          if (iVar3 == 0) {
            uVar5 = 0;
          }
          else {
            uVar5 = thunk_FUN_10682720(local_94[iVar2 * 4],local_94[iVar2 * 4 + 1],
                                       local_94[iVar2 * 4 + 2]);
          }
          *(undefined4 *)(local_8 + 0x3c + iVar2 * 4) = uVar5;
        }
        local_c = 1;
        if (*(int *)(local_8 + 0x3c + iVar2 * 4) != 0) {
          (**(code **)*param_2)();
          (**(code **)(*param_2 + 8))(*(undefined4 *)(local_8 + 0x3c + iVar2 * 4));
          (**(code **)(*param_2 + 0x10))(1,0xff000000,1,0x3f800000,1,0);
          (**(code **)(*param_2 + 4))();
          *(undefined4 *)(local_8 + 0x58) =
               *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x3c) + 0xe0) + 0x4bc);
        }
LAB_1053ca76:
        local_10 = iVar2 + 1;
      }
      else {
        if (local_94[local_10 * 4 + 3] == 0) goto LAB_1053ca76;
        iVar3 = *(int *)(local_8 + 0x3c + local_10 * 4);
        if ((*(int *)(iVar3 + 0x14) == *(int *)(param_1 + 0x94)) &&
           (*(int *)(iVar3 + 0x18) == *(int *)(param_1 + 0x98))) goto LAB_1053ca76;
        *(int *)(*(int *)(local_8 + 0x3c + local_10 * 4) + 0x14) = *(int *)(param_1 + 0x94);
        *(undefined4 *)(*(int *)(local_8 + 0x3c + local_10 * 4) + 0x18) =
             *(undefined4 *)(param_1 + 0x98);
        piVar1 = (int *)(*(int *)(local_8 + 0x3c + local_10 * 4) + 0x10);
        *piVar1 = *piVar1 + 1;
        local_10 = local_10 + 1;
      }
    }
    (**(code **)*param_2)();
    (**(code **)(*param_2 + 8))(*(undefined4 *)(local_8 + 0x3c));
    (**(code **)(*param_2 + 0xc))
              (0,0,*(undefined4 *)(param_1 + 0x94),*(undefined4 *)(param_1 + 0x98));
    iVar2 = *param_2;
    iVar3 = UViewport::IsDepthComplexity(param_1);
    (**(code **)(iVar2 + 0x10))(1,0xff000000,1,0x3f800000,1,~(-(uint)(iVar3 != 0) & 0xf));
  }
  ExceptionList = local_20;
  return;
}


// ==== 1053cb48 Catch@1053cb48

void Catch_1053cb48(void)

{
  undefined4 *unaff_EBP;
  
  *unaff_EBP = unaff_EBP[-0x21];
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP,&DAT_10914c48);
}


// ==== 1053cb5f Catch@1053cb5f

void Catch_1053cb5f(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"UHDREffect::PreRender");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1053cc40 FUN_1053cc40

void FUN_1053cc40(void)

{
  UObject *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1081b0b1;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  UObject::UObject(in_ECX);
  *(undefined ***)in_ECX = UCameraEffect::vftable;
  *(undefined ***)in_ECX = UGlowEffect::vftable;
  local_8 = 2;
  UGlowEffect::UpdateGlowEffectParms((UGlowEffect *)in_ECX);
  UObject::SetFlags(in_ECX,0x4000000);
  ExceptionList = local_10;
  return;
}


// ==== 1053ccb8 Catch@1053ccb8

void Catch_1053ccb8(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 1053cccc Catch@1053cccc

void Catch_1053cccc(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"UGlowEffect");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1053cd20 FUN_1053cd20

void FUN_1053cd20(UViewport *param_1,int *param_2)

{
  int *piVar1;
  void **ppvVar2;
  int iVar3;
  int iVar4;
  int in_ECX;
  uint uVar5;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1081b0d0;
  local_10 = ExceptionList;
  uVar5 = 0;
  local_8 = 0;
  if ((*(int *)GL2GlowEffect_exref == 0) ||
     (ppvVar2 = &local_10, *(int *)GL2PostProcessType_exref < 1)) {
    return;
  }
  do {
    while( true ) {
      ExceptionList = ppvVar2;
      if (4 < uVar5) {
        (**(code **)*param_2)();
        (**(code **)(*param_2 + 0xc))
                  (0,0,*(undefined4 *)(param_1 + 0x94),*(undefined4 *)(param_1 + 0x98));
        iVar3 = *param_2;
        iVar4 = UViewport::IsDepthComplexity(param_1);
        (**(code **)(iVar3 + 0x10))(1,0xff000000,1,0x3f800000,1,~(-(uint)(iVar4 != 0) & 0xf));
        ExceptionList = local_10;
        return;
      }
      if (*(int *)(in_ECX + 0x3c + uVar5 * 4) != 0) break;
      if ((uVar5 == 3) || (uVar5 == 4)) {
        iVar3 = thunk_FUN_103ff710(0x20,L"GlowRenderTarget");
        if (iVar3 == 0) goto LAB_1053ce09;
        iVar3 = thunk_FUN_10682720(*(int *)(param_1 + 0x94) / 2,*(int *)(param_1 + 0x98) / 2,5);
      }
      else {
        iVar3 = thunk_FUN_103ff710(0x20,L"GlowRenderTarget");
        if (iVar3 == 0) {
LAB_1053ce09:
          iVar3 = 0;
        }
        else {
          iVar3 = thunk_FUN_10682720((int)(*(int *)(param_1 + 0x94) +
                                          (*(int *)(param_1 + 0x94) >> 0x1f & 3U)) >> 2,
                                     (int)(*(int *)(param_1 + 0x98) +
                                          (*(int *)(param_1 + 0x98) >> 0x1f & 3U)) >> 2,5);
        }
      }
      *(int *)(in_ECX + 0x3c + uVar5 * 4) = iVar3;
      if (iVar3 != 0) {
        *(int *)(iVar3 + 0x10) = *(int *)(iVar3 + 0x10) + 1;
      }
      (**(code **)*param_2)();
      (**(code **)(*param_2 + 8))(*(undefined4 *)(in_ECX + 0x3c + uVar5 * 4));
      (**(code **)(*param_2 + 0x10))(1,0xff000000,1,0x3f800000,1,0);
      (**(code **)(*param_2 + 4))();
LAB_1053ce6c:
      uVar5 = uVar5 + 1;
      ppvVar2 = ExceptionList;
    }
    if ((uVar5 == 3) || (uVar5 == 4)) {
      if ((*(int *)(*(int *)(in_ECX + 0x3c + uVar5 * 4) + 0x14) == *(int *)(param_1 + 0x94) / 2) &&
         (*(int *)(*(int *)(in_ECX + 0x3c + uVar5 * 4) + 0x18) == *(int *)(param_1 + 0x98) / 2))
      goto LAB_1053ce6c;
      *(int *)(*(int *)(in_ECX + 0x3c + uVar5 * 4) + 0x14) = *(int *)(param_1 + 0x94) / 2;
      *(int *)(*(int *)(in_ECX + 0x3c + uVar5 * 4) + 0x18) = *(int *)(param_1 + 0x98) / 2;
      piVar1 = (int *)(*(int *)(in_ECX + 0x3c + uVar5 * 4) + 0x10);
      *piVar1 = *piVar1 + 1;
      uVar5 = uVar5 + 1;
      ppvVar2 = ExceptionList;
    }
    else {
      iVar3 = (int)(*(int *)(param_1 + 0x94) + (*(int *)(param_1 + 0x94) >> 0x1f & 3U)) >> 2;
      if ((*(int *)(*(int *)(in_ECX + 0x3c + uVar5 * 4) + 0x14) == iVar3) &&
         (*(int *)(*(int *)(in_ECX + 0x3c + uVar5 * 4) + 0x18) ==
          (int)((*(int *)(param_1 + 0x98) >> 0x1f & 3U) + *(int *)(param_1 + 0x98)) >> 2))
      goto LAB_1053ce6c;
      *(int *)(*(int *)(in_ECX + 0x3c + uVar5 * 4) + 0x14) = iVar3;
      *(int *)(*(int *)(in_ECX + 0x3c + uVar5 * 4) + 0x18) =
           (int)(*(int *)(param_1 + 0x98) + (*(int *)(param_1 + 0x98) >> 0x1f & 3U)) >> 2;
      piVar1 = (int *)(*(int *)(in_ECX + 0x3c + uVar5 * 4) + 0x10);
      *piVar1 = *piVar1 + 1;
      uVar5 = uVar5 + 1;
      ppvVar2 = ExceptionList;
    }
  } while( true );
}


// ==== 1053cfce Catch@1053cfce

void Catch_1053cfce(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x1c) = *(undefined4 *)(unaff_EBP + -0x20);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x1c,&DAT_10914c48);
}


// ==== 1053cfe2 Catch@1053cfe2

void Catch_1053cfe2(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"UGlowEffect::PreRender");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1053d0c0 FUN_1053d0c0

void FUN_1053d0c0(int param_1,FRenderInterface *param_2)

{
  int *piVar1;
  int iVar2;
  FCanvasUtil *pFVar3;
  int iVar4;
  int in_ECX;
  FCanvasUtil local_c8 [180];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  iVar2 = param_1;
  puStack_c = &LAB_1081b0eb;
  local_10 = ExceptionList;
  local_14 = &stack0xffffff2c;
  local_8 = 0;
  if (*(int *)(in_ECX + 0x40) != 0) {
    ExceptionList = &local_10;
    pFVar3 = (FCanvasUtil *)
             FCanvasUtil::FCanvasUtil(local_c8,(FRenderTarget *)(param_1 + 0xdc),param_2);
    local_8._0_1_ = 1;
    param_1._0_1_ =
         (undefined1)(int)ROUND((float)*(byte *)(in_ECX + 0x3f) * *(float *)(in_ECX + 0x34));
    param_1 = CONCAT13((undefined1)param_1,*(undefined3 *)(in_ECX + 0x3c));
    piVar1 = *(int **)(in_ECX + 0x40);
    iVar4 = (**(code **)(*piVar1 + 0x7c))(0,piVar1,param_1);
    iVar4 = (**(code **)(*piVar1 + 0x78))((float)iVar4);
    FCanvasUtil::DrawTile
              (pFVar3,0,0,(float)*(int *)(iVar2 + 0x94),(float)*(int *)(iVar2 + 0x98),0,0,
               (float)iVar4);
    local_8 = (uint)local_8._1_3_ << 8;
    FCanvasUtil::~FCanvasUtil(local_c8);
  }
  ExceptionList = local_10;
  return;
}


// ==== 1053d1e9 Catch@1053d1e9

void Catch_1053d1e9(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 1053d1fd Catch@1053d1fd

void Catch_1053d1fd(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"UCameraOverlay::PostRender");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1053d270 FUN_1053d270

void FUN_1053d270(UStruct *param_1,UPackage *param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = UStruct::IsChildOf(param_1,(UStruct *)&UProxyBitmapMaterial::PrivateStaticClass);
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


// ==== 1053d2f0 FUN_1053d2f0

void FUN_1053d2f0(UStruct *param_1,UPackage *param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = UStruct::IsChildOf(param_1,(UStruct *)&UVertexColor::PrivateStaticClass);
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


// ==== 1053d370 FUN_1053d370

void FUN_1053d370(UStruct *param_1,UPackage *param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = UStruct::IsChildOf(param_1,(UStruct *)&UShader::PrivateStaticClass);
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


// ==== 1053d3f0 FUN_1053d3f0

void FUN_1053d3f0(UStruct *param_1,UPackage *param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = UStruct::IsChildOf(param_1,(UStruct *)&UFinalBlend::PrivateStaticClass);
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


// ==== 1053d470 FUN_1053d470

void FUN_1053d470(UStruct *param_1,UPackage *param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = UStruct::IsChildOf(param_1,(UStruct *)&UUnderWaterShader::PrivateStaticClass);
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


// ==== 1053d4f0 FUN_1053d4f0

void FUN_1053d4f0(UStruct *param_1,UPackage *param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = UStruct::IsChildOf(param_1,(UStruct *)&UCombiner::PrivateStaticClass);
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


// ==== 1053d570 FUN_1053d570

void FUN_1053d570(int param_1,FRenderInterface *param_2)

{
  undefined1 *puVar1;
  FCanvasUtil *pFVar2;
  int in_ECX;
  undefined4 uStack_e0;
  FCanvasUtil local_cc [180];
  undefined1 *local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_1081b116;
  local_10 = ExceptionList;
  local_14 = &stack0xffffff28;
  local_8 = 0;
  ExceptionList = &local_10;
  puVar1 = &stack0xffffff28;
  if (DAT_10c44258 == (UProxyBitmapMaterial *)0x0) {
    local_18 = (undefined1 *)&uStack_e0;
    ExceptionList = &local_10;
    FName::FName((FName *)&uStack_e0,0);
    DAT_10c44258 = (UProxyBitmapMaterial *)thunk_FUN_1053d270();
    uStack_e0 = 0x1053d5db;
    thunk_FUN_10530420();
    uStack_e0 = 0x1053d5ea;
    UProxyBitmapMaterial::SetTextureInterface(DAT_10c44258,*(FBaseTexture **)(in_ECX + 0x40));
    puVar1 = local_14;
  }
  local_14 = puVar1;
  if (DAT_10c44254 == 0) {
    local_18 = (undefined1 *)&uStack_e0;
    FName::FName((FName *)&uStack_e0,0);
    DAT_10c44254 = thunk_FUN_1053d2f0();
    uStack_e0 = 0x1053d627;
    thunk_FUN_10530420();
  }
  if (DAT_10c44250 == 0) {
    local_18 = (undefined1 *)&uStack_e0;
    FName::FName((FName *)&uStack_e0,0);
    DAT_10c44250 = thunk_FUN_1053d370();
    uStack_e0 = 0x1053d664;
    thunk_FUN_10530420();
    *(UProxyBitmapMaterial **)(DAT_10c44250 + 0x578) = DAT_10c44258;
    *(int *)(DAT_10c44250 + 0x57c) = DAT_10c44254;
  }
  uStack_e0 = 0x1053d697;
  (**(code **)(*(int *)param_2 + 8))();
  uStack_e0 = *(undefined4 *)(param_1 + 0x98);
  (**(code **)(*(int *)param_2 + 0xc))();
  *(undefined4 *)(in_ECX + 0x34) = 0x40133333;
  thunk_FUN_103704b0();
  pFVar2 = (FCanvasUtil *)
           FCanvasUtil::FCanvasUtil(local_cc,(FRenderTarget *)(param_1 + 0xdc),param_2);
  local_8._0_1_ = 1;
  local_18 = (undefined1 *)(float)*(int *)(param_1 + 0x94);
  FCanvasUtil::DrawTile(pFVar2);
  local_8 = (uint)local_8._1_3_ << 8;
  FCanvasUtil::~FCanvasUtil(local_cc);
  (**(code **)(*(int *)param_2 + 4))();
  if (DAT_10c4424c == (UProxyBitmapMaterial *)0x0) {
    FName::FName((FName *)&stack0xfffffee0,0);
    DAT_10c4424c = (UProxyBitmapMaterial *)
                   thunk_FUN_1053d270(&UProxyBitmapMaterial::PrivateStaticClass,0xffffffff);
    thunk_FUN_10530420();
    UProxyBitmapMaterial::SetTextureInterface(DAT_10c4424c,*(FBaseTexture **)(in_ECX + 0x44));
  }
  pFVar2 = (FCanvasUtil *)
           FCanvasUtil::FCanvasUtil(local_cc,(FRenderTarget *)(param_1 + 0xdc),param_2);
  local_8._0_1_ = 2;
  local_18 = (undefined1 *)(float)*(int *)(param_1 + 0x94);
  FCanvasUtil::DrawTile
            (pFVar2,0,0,local_18,(float)*(int *)(param_1 + 0x98),0,0,local_18,
             (float)*(int *)(param_1 + 0x98),0x3f800000);
  local_8 = (uint)local_8._1_3_ << 8;
  FCanvasUtil::~FCanvasUtil(local_cc);
  *(undefined4 *)(in_ECX + 0x48) =
       *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x3c) + 0xe0) + 0x4bc);
  ExceptionList = local_10;
  return;
}


// ==== 1053d8d5 Catch@1053d8d5

void Catch_1053d8d5(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_10914c48);
}


// ==== 1053d8e9 Catch@1053d8e9

void Catch_1053d8e9(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"UMotionBlur::PostRender");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1053d9f0 FUN_1053d9f0

void FUN_1053d9f0(int param_1,FRenderInterface *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 uVar3;
  FCanvasUtil *pFVar4;
  int iVar5;
  int in_ECX;
  FCanvasUtil local_e8 [168];
  FSolidColorTexture local_40 [12];
  undefined4 local_34;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  FCanvasUtil *local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  puStack_c = &LAB_1081b14e;
  local_10 = ExceptionList;
  local_14 = &stack0xffffff0c;
  local_8 = 0;
  local_24 = 0xffffff;
  ExceptionList = &local_10;
  FSolidColorTexture::FSolidColorTexture(local_40);
  local_8 = CONCAT31(local_8._1_3_,1);
  if (DAT_10c44268 == (UProxyBitmapMaterial *)0x0) {
    local_18 = (FCanvasUtil *)&stack0xffffff00;
    FName::FName((FName *)&stack0xffffff00,0);
    DAT_10c44268 = (UProxyBitmapMaterial *)thunk_FUN_1053d270();
    thunk_FUN_10530420();
    UProxyBitmapMaterial::SetTextureInterface(DAT_10c44268,(FBaseTexture *)local_40);
  }
  if (DAT_10c44264 == (int *)0x0) {
    local_18 = (FCanvasUtil *)&stack0xffffff00;
    FName::FName((FName *)&stack0xffffff00,0);
    DAT_10c44264 = (int *)thunk_FUN_1053d3f0();
    thunk_FUN_10530420();
  }
  local_18 = (FCanvasUtil *)0xffffffff;
  local_34 = 0xffffffff;
  DAT_10c44264[0x15e] = (int)DAT_10c44268;
  *(undefined1 *)(DAT_10c44264 + 0x15f) = 2;
  DAT_10c44264[0x160] = DAT_10c44264[0x160] & 0xfffffffe;
  DAT_10c44264[0x160] = DAT_10c44264[0x160] & 0xfffffffd;
  DAT_10c44264[0x160] = DAT_10c44264[0x160] | 4;
  iVar5 = *(int *)(in_ECX + 0x50);
  if ((iVar5 == 0) || ((*(byte *)(iVar5 + 0x4a8) & 2) == 0)) {
    local_20 = *(undefined4 *)(in_ECX + 0x4c);
  }
  else {
    local_20 = *(undefined4 *)(iVar5 + 0x4ac);
  }
  uVar2 = local_20;
  if ((((iVar5 != 0) && (uVar2 = local_20, *(int *)(in_ECX + 0x58) != 0)) &&
      (iVar1 = *(int *)(in_ECX + 0x54), uVar2 = local_20, iVar1 != 0)) &&
     (uVar2 = local_20, (*(byte *)(iVar1 + 0x4c0) & 1) != 0)) {
    if (iVar1 != iVar5) {
      if (1.0 <= *(float *)(in_ECX + 100)) {
        *(undefined4 *)(in_ECX + 100) = 0;
      }
      else {
        *(float *)(in_ECX + 100) = 1.0 - *(float *)(in_ECX + 100);
        *(undefined4 *)(in_ECX + 0x5c) = *(undefined4 *)(in_ECX + 0x60);
      }
      *(undefined4 *)(in_ECX + 0x60) = local_20;
    }
    local_18 = (FCanvasUtil *)(*(float *)(*(int *)(in_ECX + 0x58) + 0x690) * 0.5);
    *(FCanvasUtil **)(in_ECX + 100) = local_18;
    if (1.0 < (float)local_18) {
      *(undefined4 *)(in_ECX + 0x5c) = local_20;
      *(undefined4 *)(in_ECX + 100) = 0x3f800000;
    }
    uVar3 = thunk_FUN_10443950();
    local_1c._0_3_ = CONCAT12(uVar3,(undefined2)local_1c);
    uVar3 = thunk_FUN_10443950();
    local_1c._0_2_ = CONCAT11(uVar3,(undefined1)local_1c);
    uVar3 = thunk_FUN_10443950();
    local_1c = CONCAT31(local_1c._1_3_,uVar3);
    uVar3 = thunk_FUN_10443950();
    local_1c = CONCAT13(uVar3,(undefined3)local_1c);
    uVar2 = local_1c;
  }
  local_1c = uVar2;
  if (*(int *)GL2Shader_exref != 0) {
    (**(code **)(*(int *)param_2 + 0x54))();
  }
  local_18 = (FCanvasUtil *)
             FCanvasUtil::FCanvasUtil(local_e8,(FRenderTarget *)(param_1 + 0xdc),param_2);
  local_8._0_1_ = 2;
  (**(code **)(*DAT_10c44264 + 0x7c))();
  (**(code **)(*DAT_10c44264 + 0x78))();
  FCanvasUtil::DrawTile(local_18);
  local_8 = CONCAT31(local_8._1_3_,1);
  FCanvasUtil::~FCanvasUtil(local_e8);
  if (*(int *)GL2UnderWaterEffect_exref != 0) {
    (**(code **)(*(int *)param_2 + 4))();
    if (DAT_10c44260 == (UProxyBitmapMaterial *)0x0) {
      FName::FName((FName *)&stack0xfffffed4,0);
      DAT_10c44260 = (UProxyBitmapMaterial *)
                     thunk_FUN_1053d270(&UProxyBitmapMaterial::PrivateStaticClass,0xffffffff);
      thunk_FUN_10530420();
    }
    UProxyBitmapMaterial::SetTextureInterface(DAT_10c44260,*(FBaseTexture **)(in_ECX + 0x40));
    if (DAT_10c4425c == (UUnderWaterShader *)0x0) {
      FName::FName((FName *)&stack0xfffffed4,0);
      DAT_10c4425c = (UUnderWaterShader *)
                     thunk_FUN_1053d470(&UUnderWaterShader::PrivateStaticClass,0xffffffff);
      thunk_FUN_10530420();
    }
    UUnderWaterShader::SetDiffuseMaterial(DAT_10c4425c,(UMaterial *)DAT_10c44260);
    pFVar4 = (FCanvasUtil *)
             FCanvasUtil::FCanvasUtil(local_e8,(FRenderTarget *)(param_1 + 0xdc),param_2);
    local_8._0_1_ = 3;
    iVar5 = (**(code **)(*(int *)DAT_10c4425c + 0x7c))(0);
    iVar5 = (**(code **)(*(int *)DAT_10c4425c + 0x78))((float)iVar5);
    FCanvasUtil::DrawTile
              (pFVar4,0,0,(float)*(int *)(param_1 + 0x94),(float)*(int *)(param_1 + 0x98),0,0,
               (float)iVar5);
    local_8 = CONCAT31(local_8._1_3_,1);
    FCanvasUtil::~FCanvasUtil(local_e8);
  }
  if (*(int *)(in_ECX + 0x54) != *(int *)(in_ECX + 0x50)) {
    *(int *)(in_ECX + 0x54) = *(int *)(in_ECX + 0x50);
  }
  local_8 = local_8 & 0xffffff00;
  FSolidColorTexture::~FSolidColorTexture(local_40);
  ExceptionList = local_10;
  return;
}


// ==== 1053de57 Catch@1053de57

void Catch_1053de57(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x24) = *(undefined4 *)(unaff_EBP + -0x28);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x24,&DAT_10914c48);
}


// ==== 1053de6b Catch@1053de6b

void Catch_1053de6b(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"UUnderWaterEffect::PostRender");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1053dfb0 FUN_1053dfb0

undefined4
FUN_1053dfb0(FRenderInterface *param_1,FBaseTexture *param_2,FRenderTarget *param_3,int param_4)

{
  float fVar1;
  FCanvasUtil *pFVar2;
  int iVar3;
  FCanvasUtil local_1cc [172];
  float local_120 [65];
  int local_1c;
  float local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_1081b17b;
  local_10 = ExceptionList;
  local_14 = &stack0xfffffe28;
  local_8 = 0;
  ExceptionList = &local_10;
  (*(code *)**(undefined4 **)param_1)();
  (**(code **)(*(int *)param_1 + 8))();
  (**(code **)(*(int *)param_1 + 0xc))();
  (**(code **)(*(int *)param_1 + 0x10))();
  local_120[0] = 1.5;
  local_120[1] = -1.5;
  local_120[2] = 0.0;
  local_120[3] = 0.0;
  local_120[4] = 1.5;
  local_120[5] = -0.5;
  local_120[6] = 0.0;
  local_120[7] = 0.0;
  local_120[8] = 1.5;
  local_120[9] = 0.5;
  local_120[0x10] = 0.5;
  local_120[0x14] = 0.5;
  local_120[0x18] = 0.5;
  local_120[0x19] = 0.5;
  local_120[0x1c] = 0.5;
  local_120[0x29] = 0.5;
  local_120[0x39] = 0.5;
  local_120[10] = 0.0;
  local_120[0xb] = 0.0;
  local_120[0xe] = 0.0;
  local_120[0xf] = 0.0;
  local_120[0x12] = 0.0;
  local_120[0x13] = 0.0;
  local_120[0x16] = 0.0;
  local_120[0x17] = 0.0;
  local_120[0x1a] = 0.0;
  local_120[0x1b] = 0.0;
  local_120[0x1e] = 0.0;
  local_120[0x1f] = 0.0;
  local_120[0x22] = 0.0;
  local_120[0x23] = 0.0;
  local_120[0x26] = 0.0;
  local_120[0x27] = 0.0;
  local_120[0x2a] = 0.0;
  local_120[0x2b] = 0.0;
  local_120[0x2e] = 0.0;
  local_120[0x2f] = 0.0;
  local_120[0x32] = 0.0;
  local_120[0x33] = 0.0;
  local_120[0x36] = 0.0;
  local_120[0x37] = 0.0;
  local_120[0x3a] = 0.0;
  local_120[0x3b] = 0.0;
  local_120[0x3e] = 0.0;
  local_120[0x3f] = 0.0;
  local_120[0xc] = 1.5;
  local_120[0xd] = 1.5;
  local_120[0x1d] = 1.5;
  local_120[0x2d] = 1.5;
  local_120[0x3d] = 1.5;
  local_120[0x11] = -1.5;
  local_120[0x21] = -1.5;
  local_120[0x30] = -1.5;
  local_120[0x31] = -1.5;
  local_120[0x34] = -1.5;
  local_120[0x38] = -1.5;
  local_120[0x3c] = -1.5;
  local_120[0x15] = -0.5;
  local_120[0x20] = -0.5;
  local_120[0x24] = -0.5;
  local_120[0x25] = -0.5;
  local_120[0x28] = -0.5;
  local_120[0x2c] = -0.5;
  local_120[0x35] = -0.5;
  for (local_1c = 0; (float)local_1c < 16.0; local_1c = local_1c + 1) {
    fVar1 = (float)(param_4 * 4);
    local_18 = fVar1;
    local_120[local_1c * 4] = local_120[local_1c * 4] / fVar1;
    local_120[local_1c * 4 + 1] = local_120[local_1c * 4 + 1] / fVar1;
  }
  (**(code **)(*(int *)param_1 + 0xd4))();
  iVar3 = *(int *)param_1;
  FUN_107a6660();
  (**(code **)(iVar3 + 0xe4))();
  if (DAT_10c4426c == (UProxyBitmapMaterial *)0x0) {
    FName::FName((FName *)&stack0xfffffde0,0);
    DAT_10c4426c = (UProxyBitmapMaterial *)
                   thunk_FUN_1053d270(&UProxyBitmapMaterial::PrivateStaticClass,0xffffffff);
    thunk_FUN_10530420();
  }
  UProxyBitmapMaterial::SetTextureInterface(DAT_10c4426c,param_2);
  pFVar2 = (FCanvasUtil *)FCanvasUtil::FCanvasUtil(local_1cc,param_3,param_1);
  local_8._0_1_ = 1;
  iVar3 = (**(code **)(*(int *)DAT_10c4426c + 0x7c))(0);
  iVar3 = (**(code **)(*(int *)DAT_10c4426c + 0x78))((float)iVar3);
  FCanvasUtil::DrawTile(pFVar2,0,0,(float)param_4,(float)param_4,0,0,(float)iVar3);
  local_8 = (uint)local_8._1_3_ << 8;
  FCanvasUtil::~FCanvasUtil(local_1cc);
  (**(code **)(*(int *)param_1 + 4))();
  ExceptionList = local_10;
  return 1;
}


// ==== 1053e325 Catch@1053e325

void Catch_1053e325(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x1c) = *(undefined4 *)(unaff_EBP + -0x120);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x1c,&DAT_10914c48);
}


// ==== 1053e33c Catch@1053e33c

void Catch_1053e33c(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"UHDREffect::DownFilter4Render");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1053e450 FUN_1053e450

undefined4
FUN_1053e450(int param_1,FRenderInterface *param_2,FBaseTexture *param_3,FRenderTarget *param_4)

{
  FCanvasUtil *pFVar1;
  int iVar2;
  undefined4 uStack_20c;
  FCanvasUtil local_1cc [172];
  float local_120 [65];
  undefined4 local_1c;
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_1081b19b;
  local_10 = ExceptionList;
  local_14 = &stack0xfffffe28;
  local_8 = 0;
  local_1c = 0x41800000;
  local_120[0] = 1.5;
  local_120[1] = -1.5;
  local_120[2] = 0.0;
  local_120[3] = 0.0;
  local_120[4] = 1.5;
  local_120[5] = -0.5;
  local_120[6] = 0.0;
  local_120[7] = 0.0;
  local_120[8] = 1.5;
  local_120[9] = 0.5;
  local_120[0x10] = 0.5;
  local_120[0x14] = 0.5;
  local_120[0x18] = 0.5;
  local_120[0x19] = 0.5;
  local_120[0x1c] = 0.5;
  local_120[0x29] = 0.5;
  local_120[0x39] = 0.5;
  local_120[10] = 0.0;
  local_120[0xb] = 0.0;
  local_120[0xe] = 0.0;
  local_120[0xf] = 0.0;
  local_120[0x12] = 0.0;
  local_120[0x13] = 0.0;
  local_120[0x16] = 0.0;
  local_120[0x17] = 0.0;
  local_120[0x1a] = 0.0;
  local_120[0x1b] = 0.0;
  local_120[0x1e] = 0.0;
  local_120[0x1f] = 0.0;
  local_120[0x22] = 0.0;
  local_120[0x23] = 0.0;
  local_120[0x26] = 0.0;
  local_120[0x27] = 0.0;
  local_120[0x2a] = 0.0;
  local_120[0x2b] = 0.0;
  local_120[0x2e] = 0.0;
  local_120[0x2f] = 0.0;
  local_120[0x32] = 0.0;
  local_120[0x33] = 0.0;
  local_120[0x36] = 0.0;
  local_120[0x37] = 0.0;
  local_120[0x3a] = 0.0;
  local_120[0x3b] = 0.0;
  local_120[0x3e] = 0.0;
  local_120[0x3f] = 0.0;
  local_120[0xc] = 1.5;
  local_120[0xd] = 1.5;
  local_120[0x1d] = 1.5;
  local_120[0x2d] = 1.5;
  local_120[0x3d] = 1.5;
  local_120[0x11] = -1.5;
  local_120[0x21] = -1.5;
  local_120[0x30] = -1.5;
  local_120[0x31] = -1.5;
  local_120[0x34] = -1.5;
  local_120[0x38] = -1.5;
  local_120[0x3c] = -1.5;
  local_120[0x15] = -0.5;
  local_120[0x20] = -0.5;
  local_120[0x24] = -0.5;
  local_120[0x25] = -0.5;
  local_120[0x28] = -0.5;
  local_120[0x2c] = -0.5;
  local_120[0x35] = -0.5;
  for (local_18 = 0; (float)local_18 < 16.0; local_18 = local_18 + 1) {
    local_120[local_18 * 4] = local_120[local_18 * 4] / (float)*(int *)(param_1 + 0x94);
    local_120[local_18 * 4 + 1] = local_120[local_18 * 4 + 1] / (float)*(int *)(param_1 + 0x98);
  }
  ExceptionList = &local_10;
  (*(code *)**(undefined4 **)param_2)();
  (**(code **)(*(int *)param_2 + 8))();
  (**(code **)(*(int *)param_2 + 0xc))();
  (**(code **)(*(int *)param_2 + 0x10))();
  if (DAT_10c44270 == (UProxyBitmapMaterial *)0x0) {
    FName::FName((FName *)&uStack_20c,0);
    DAT_10c44270 = (UProxyBitmapMaterial *)
                   thunk_FUN_1053d270(&UProxyBitmapMaterial::PrivateStaticClass,0xffffffff);
    uStack_20c = 0x1053e6c8;
    thunk_FUN_10530420();
    uStack_20c = 0x1053e6d7;
    UProxyBitmapMaterial::SetTextureInterface(DAT_10c44270,param_3);
  }
  uStack_20c = 0x1053e6e5;
  (**(code **)(*(int *)param_2 + 0xd4))();
  iVar2 = *(int *)param_2;
  uStack_20c = 0x1053e6ef;
  uStack_20c = FUN_107a6660();
  (**(code **)(iVar2 + 0xe4))(7,L"TexelCoordsDownFilter",local_120);
  pFVar1 = (FCanvasUtil *)FCanvasUtil::FCanvasUtil(local_1cc,param_4,param_2);
  local_8._0_1_ = 1;
  iVar2 = (**(code **)(*(int *)DAT_10c44270 + 0x7c))(0,DAT_10c44270,0xffffffff);
  iVar2 = (**(code **)(*(int *)DAT_10c44270 + 0x78))((float)iVar2);
  FCanvasUtil::DrawTile
            (pFVar1,0,0,(float)*(int *)(param_1 + 0x94) * 0.25,
             (float)*(int *)(param_1 + 0x98) * 0.25,0,0,(float)iVar2);
  local_8 = (uint)local_8._1_3_ << 8;
  FCanvasUtil::~FCanvasUtil(local_1cc);
  (**(code **)(*(int *)param_2 + 4))();
  ExceptionList = local_10;
  return 1;
}


// ==== 1053e7db Catch@1053e7db

void Catch_1053e7db(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x1c) = *(undefined4 *)(unaff_EBP + -0x120);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x1c,&DAT_10914c48);
}


// ==== 1053e7f2 Catch@1053e7f2

void Catch_1053e7f2(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"UGlowEffect::DownFilterRender");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1053e900 FUN_1053e900

undefined4
FUN_1053e900(undefined4 param_1,FRenderInterface *param_2,FBaseTexture *param_3,
            FRenderTarget *param_4)

{
  FCanvasUtil *pFVar1;
  int iVar2;
  undefined4 uStack_f4;
  FCanvasUtil local_cc [176];
  int local_1c;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_1081b1bb;
  local_10 = ExceptionList;
  local_14 = &stack0xffffff28;
  local_8 = 0;
  ExceptionList = &local_10;
  (*(code *)**(undefined4 **)param_2)();
  (**(code **)(*(int *)param_2 + 8))();
  iVar2 = *(int *)param_2;
  (**(code **)(*(int *)param_4 + 0x2c))();
  (**(code **)(*(int *)param_4 + 0x28))();
  (**(code **)(iVar2 + 0xc))();
  if (DAT_10c44278 == (UProxyBitmapMaterial *)0x0) {
    FName::FName((FName *)&uStack_f4,0);
    DAT_10c44278 = (UProxyBitmapMaterial *)
                   thunk_FUN_1053d270(&UProxyBitmapMaterial::PrivateStaticClass,0xffffffff);
    uStack_f4 = 0x1053e9a5;
    thunk_FUN_10530420();
    uStack_f4 = 0x1053e9b4;
    UProxyBitmapMaterial::SetTextureInterface(DAT_10c44278,param_3);
  }
  if (DAT_10c44274 == (int *)0x0) {
    FName::FName((FName *)&uStack_f4,0);
    DAT_10c44274 = (int *)thunk_FUN_1053d3f0(&UFinalBlend::PrivateStaticClass,0xffffffff);
    uStack_f4 = 0x1053e9f1;
    thunk_FUN_10530420();
  }
  DAT_10c44274[0x15e] = (int)DAT_10c44278;
  *(undefined1 *)(DAT_10c44274 + 0x15f) = 0;
  DAT_10c44274[0x160] = DAT_10c44274[0x160] & 0xfffffffe;
  DAT_10c44274[0x160] = DAT_10c44274[0x160] & 0xfffffffd;
  DAT_10c44274[0x160] = DAT_10c44274[0x160] & 0xfffffffb;
  uStack_f4 = 0x1053ea41;
  (**(code **)(*(int *)param_2 + 0xd4))();
  *(undefined4 *)(local_1c + 0x50) = 0x3f333333;
  uStack_f4 = 0;
  (**(code **)(*(int *)param_2 + 0xe4))(0,L"Luminance",(undefined4 *)(local_1c + 0x50));
  pFVar1 = (FCanvasUtil *)FCanvasUtil::FCanvasUtil(local_cc,param_4,param_2);
  local_8._0_1_ = 1;
  iVar2 = (**(code **)(*DAT_10c44274 + 0x7c))(0x3f800000,DAT_10c44274,0xffffffff);
  iVar2 = (**(code **)(*DAT_10c44274 + 0x78))((float)iVar2);
  iVar2 = (**(code **)(*(int *)param_4 + 0x2c))(0,0,(float)iVar2);
  iVar2 = (**(code **)(*(int *)param_4 + 0x28))((float)iVar2);
  FCanvasUtil::DrawTile(pFVar1,0,0,(float)iVar2);
  local_8 = (uint)local_8._1_3_ << 8;
  FCanvasUtil::~FCanvasUtil(local_cc);
  (**(code **)(*(int *)param_2 + 4))();
  ExceptionList = local_10;
  return 1;
}


// ==== 1053eb35 Catch@1053eb35

void Catch_1053eb35(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 1053eb49 Catch@1053eb49

void Catch_1053eb49(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"UGlowEffect::PowRender");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1053ec00 FUN_1053ec00

undefined4
FUN_1053ec00(undefined4 param_1,FRenderInterface *param_2,FBaseTexture *param_3,
            FRenderTarget *param_4)

{
  FCanvasUtil *pFVar1;
  int iVar2;
  int in_ECX;
  undefined4 uStack_f0;
  FCanvasUtil local_c8 [180];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_1081b1db;
  local_10 = ExceptionList;
  local_14 = &stack0xffffff2c;
  local_8 = 0;
  ExceptionList = &local_10;
  (*(code *)**(undefined4 **)param_2)();
  (**(code **)(*(int *)param_2 + 8))();
  iVar2 = *(int *)param_2;
  (**(code **)(*(int *)param_4 + 0x2c))();
  (**(code **)(*(int *)param_4 + 0x28))();
  (**(code **)(iVar2 + 0xc))();
  if (DAT_10c44280 == (UProxyBitmapMaterial *)0x0) {
    FName::FName((FName *)&uStack_f0,0);
    DAT_10c44280 = (UProxyBitmapMaterial *)
                   thunk_FUN_1053d270(&UProxyBitmapMaterial::PrivateStaticClass,0xffffffff);
    uStack_f0 = 0x1053ecaa;
    thunk_FUN_10530420();
    uStack_f0 = 0x1053ecb9;
    UProxyBitmapMaterial::SetTextureInterface(DAT_10c44280,param_3);
  }
  if (DAT_10c4427c == (int *)0x0) {
    FName::FName((FName *)&uStack_f0,0);
    DAT_10c4427c = (int *)thunk_FUN_1053d3f0(&UFinalBlend::PrivateStaticClass,0xffffffff);
    uStack_f0 = 0x1053ecf6;
    thunk_FUN_10530420();
  }
  DAT_10c4427c[0x15e] = (int)DAT_10c44280;
  *(undefined1 *)(DAT_10c4427c + 0x15f) = 0;
  DAT_10c4427c[0x160] = DAT_10c4427c[0x160] & 0xfffffffe;
  DAT_10c4427c[0x160] = DAT_10c4427c[0x160] & 0xfffffffd;
  DAT_10c4427c[0x160] = DAT_10c4427c[0x160] & 0xfffffffb;
  uStack_f0 = 0x1053ed46;
  (**(code **)(*(int *)param_2 + 0xd4))();
  uStack_f0 = 0;
  (**(code **)(*(int *)param_2 + 0xe4))(0,L"Luminance",in_ECX + 0x50);
  (**(code **)(*(int *)param_2 + 0xe4))(0,L"fMiddleGray",in_ECX + 0x54,0);
  (**(code **)(*(int *)param_2 + 0xe4))(0,L"fWhiteCutoff",in_ECX + 0x58,0);
  (**(code **)(*(int *)param_2 + 0xe4))(0,L"Threshold",in_ECX + 0x5c,0);
  pFVar1 = (FCanvasUtil *)FCanvasUtil::FCanvasUtil(local_c8,param_4,param_2);
  local_8._0_1_ = 1;
  iVar2 = (**(code **)(*DAT_10c4427c + 0x7c))(0x3f800000,DAT_10c4427c,0xffffffff);
  iVar2 = (**(code **)(*DAT_10c4427c + 0x78))((float)iVar2);
  iVar2 = (**(code **)(*(int *)param_4 + 0x2c))(0,0,(float)iVar2);
  iVar2 = (**(code **)(*(int *)param_4 + 0x28))((float)iVar2);
  FCanvasUtil::DrawTile(pFVar1,0,0,(float)iVar2);
  local_8 = (uint)local_8._1_3_ << 8;
  FCanvasUtil::~FCanvasUtil(local_c8);
  (**(code **)(*(int *)param_2 + 4))();
  ExceptionList = local_10;
  return 1;
}


// ==== 1053ee7a Catch@1053ee7a

void Catch_1053ee7a(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 1053ee8e Catch@1053ee8e

void Catch_1053ee8e(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"UGlowEffect::BrightPassFilter1Render");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1053ef60 FUN_1053ef60

undefined4
FUN_1053ef60(undefined4 param_1,FRenderInterface *param_2,FBaseTexture *param_3,
            FRenderTarget *param_4)

{
  FCanvasUtil *pFVar1;
  int iVar2;
  int iStack_f4;
  FCanvasUtil local_cc [176];
  int local_1c;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_1081b1fb;
  local_10 = ExceptionList;
  local_14 = &stack0xffffff28;
  local_8 = 0;
  ExceptionList = &local_10;
  (*(code *)**(undefined4 **)param_2)();
  (**(code **)(*(int *)param_2 + 8))();
  iVar2 = *(int *)param_2;
  (**(code **)(*(int *)param_4 + 0x2c))();
  (**(code **)(*(int *)param_4 + 0x28))();
  (**(code **)(iVar2 + 0xc))();
  if (DAT_10c44290 == (UProxyBitmapMaterial *)0x0) {
    FName::FName((FName *)&iStack_f4,0);
    DAT_10c44290 = (UProxyBitmapMaterial *)
                   thunk_FUN_1053d270(&UProxyBitmapMaterial::PrivateStaticClass,0xffffffff);
    iStack_f4 = 0x1053f005;
    thunk_FUN_10530420();
    iStack_f4 = 0x1053f014;
    UProxyBitmapMaterial::SetTextureInterface(DAT_10c44290,param_3);
  }
  if (DAT_10c4428c == (UProxyBitmapMaterial *)0x0) {
    FName::FName((FName *)&iStack_f4,0);
    DAT_10c4428c = (UProxyBitmapMaterial *)
                   thunk_FUN_1053d270(&UProxyBitmapMaterial::PrivateStaticClass,0xffffffff);
    iStack_f4 = 0x1053f051;
    thunk_FUN_10530420();
    iStack_f4 = 0x1053f063;
    UProxyBitmapMaterial::SetTextureInterface
              (DAT_10c4428c,(FBaseTexture *)FPlayerSceneNode::OcclusionTex);
  }
  if (DAT_10c44288 == 0) {
    FName::FName((FName *)&iStack_f4,0);
    DAT_10c44288 = thunk_FUN_1053d4f0(&UCombiner::PrivateStaticClass,0xffffffff);
    iStack_f4 = 0x1053f0a0;
    thunk_FUN_10530420();
    *(UProxyBitmapMaterial **)(DAT_10c44288 + 0x57c) = DAT_10c44290;
    *(UProxyBitmapMaterial **)(DAT_10c44288 + 0x580) = DAT_10c4428c;
  }
  iStack_f4 = DAT_10c44288;
  *(undefined1 *)(DAT_10c44288 + 0x579) = 5;
  *(undefined1 *)(DAT_10c44288 + 0x578) = 3;
  if (DAT_10c44284 == (int *)0x0) {
    FName::FName((FName *)&iStack_f4,0);
    DAT_10c44284 = (int *)thunk_FUN_1053d3f0(&UFinalBlend::PrivateStaticClass,0xffffffff);
    iStack_f4 = 0x1053f119;
    thunk_FUN_10530420();
  }
  DAT_10c44284[0x15e] = (int)DAT_10c44290;
  *(undefined1 *)(DAT_10c44284 + 0x15f) = 0;
  DAT_10c44284[0x160] = DAT_10c44284[0x160] & 0xfffffffe;
  DAT_10c44284[0x160] = DAT_10c44284[0x160] & 0xfffffffd;
  DAT_10c44284[0x160] = DAT_10c44284[0x160] & 0xfffffffb;
  iStack_f4 = 0x1053f169;
  (**(code **)(*(int *)param_2 + 0xd4))();
  iStack_f4 = 0;
  (**(code **)(*(int *)param_2 + 0xe4))(0,L"RGBCutoff",local_1c + 0x6c);
  pFVar1 = (FCanvasUtil *)FCanvasUtil::FCanvasUtil(local_cc,param_4,param_2);
  local_8._0_1_ = 1;
  iVar2 = (**(code **)(*DAT_10c44284 + 0x7c))(0x3f800000,DAT_10c44284,0xffffffff);
  iVar2 = (**(code **)(*DAT_10c44284 + 0x78))((float)iVar2);
  iVar2 = (**(code **)(*(int *)param_4 + 0x2c))(0,0,(float)iVar2);
  iVar2 = (**(code **)(*(int *)param_4 + 0x28))((float)iVar2);
  FCanvasUtil::DrawTile(pFVar1,0,0,(float)iVar2);
  local_8 = (uint)local_8._1_3_ << 8;
  FCanvasUtil::~FCanvasUtil(local_cc);
  (**(code **)(*(int *)param_2 + 4))();
  ExceptionList = local_10;
  return 1;
}


// ==== 1053f255 Catch@1053f255

void Catch_1053f255(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 1053f269 Catch@1053f269

void Catch_1053f269(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"UGlowEffect::BrightPassFilter2Render");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1053f350 FUN_1053f350

undefined4
FUN_1053f350(UViewport *param_1,FRenderInterface *param_2,FRenderTarget *param_3,
            FRenderTarget *param_4)

{
  UGlowEffect *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1081b210;
  local_10 = ExceptionList;
  local_8 = 0;
  if (*(int *)(in_ECX + 0x68) == 1) {
    ExceptionList = &local_10;
    UGlowEffect::BrightPassFilter1Render(in_ECX,param_1,param_2,param_3,param_4);
  }
  else if (*(int *)(in_ECX + 0x68) == 2) {
    ExceptionList = &local_10;
    UGlowEffect::BrightPassFilter2Render(in_ECX,param_1,param_2,param_3,param_4);
  }
  ExceptionList = local_10;
  return 1;
}


// ==== 1053f3c9 Catch@1053f3c9

void Catch_1053f3c9(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 1053f3dd Catch@1053f3dd

void Catch_1053f3dd(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"UGlowEffect::BrightPassFilterRender");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1053f430 FUN_1053f430

undefined4
FUN_1053f430(undefined4 param_1,FRenderInterface *param_2,FBaseTexture *param_3,
            FRenderTarget *param_4)

{
  int iVar1;
  FCanvasUtil *pFVar2;
  int iVar3;
  undefined4 uStack_3c8;
  undefined4 uStack_364;
  undefined4 uStack_300;
  undefined4 uStack_29c;
  FCanvasUtil local_274 [172];
  float local_1c8 [105];
  double local_24;
  int local_1c;
  float local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_1081b24c;
  local_10 = ExceptionList;
  local_14 = &stack0xfffffd80;
  local_8 = 0;
  local_18 = 13.0;
  local_1c8[0x34] = -6.0;
  local_1c8[0x35] = 0.0;
  local_1c8[0x36] = 0.0;
  local_1c8[0x37] = 0.0;
  local_1c8[0x38] = -5.0;
  local_1c8[0x39] = 0.0;
  local_1c8[0x3a] = 0.0;
  local_1c8[0x3b] = 0.0;
  local_1c8[0x3c] = -4.0;
  local_1c8[0x3d] = 0.0;
  local_1c8[0x3e] = 0.0;
  local_1c8[0x3f] = 0.0;
  local_1c8[0x40] = -3.0;
  local_1c8[0x41] = 0.0;
  local_1c8[0x42] = 0.0;
  local_1c8[0x43] = 0.0;
  local_1c8[0x44] = -2.0;
  local_1c8[0x45] = 0.0;
  local_1c8[0x46] = 0.0;
  local_1c8[0x47] = 0.0;
  local_1c8[0x48] = -1.0;
  local_1c8[0x49] = 0.0;
  local_1c8[0x4a] = 0.0;
  local_1c8[0x4b] = 0.0;
  local_1c8[0x4c] = 0.0;
  local_1c8[0x4d] = 0.0;
  local_1c8[0x4e] = 0.0;
  local_1c8[0x4f] = 0.0;
  local_1c8[0x50] = 1.0;
  local_1c8[0x51] = 0.0;
  local_1c8[0x52] = 0.0;
  local_1c8[0x53] = 0.0;
  local_1c8[0x54] = 2.0;
  local_1c8[0x55] = 0.0;
  local_1c8[0x56] = 0.0;
  local_1c8[0x57] = 0.0;
  local_1c8[0x58] = 3.0;
  local_1c8[0x59] = 0.0;
  local_1c8[0x5a] = 0.0;
  local_1c8[0x5b] = 0.0;
  local_1c8[0x5c] = 4.0;
  local_1c8[0x5d] = 0.0;
  local_1c8[0x5e] = 0.0;
  local_1c8[0x5f] = 0.0;
  local_1c8[0x60] = 5.0;
  local_1c8[0x61] = 0.0;
  local_1c8[0x62] = 0.0;
  local_1c8[99] = 0.0;
  local_1c8[100] = 6.0;
  local_1c8[0x65] = 0.0;
  local_1c8[0x66] = 0.0;
  local_1c8[0x67] = 0.0;
  local_1c8[0] = 0.0;
  local_1c8[2] = 0.0;
  local_1c8[3] = 0.0;
  local_1c8[4] = 0.0;
  local_1c8[6] = 0.0;
  local_1c8[7] = 0.0;
  local_1c8[8] = 0.0;
  local_1c8[10] = 0.0;
  local_1c8[0xb] = 0.0;
  local_1c8[0xc] = 0.0;
  local_1c8[0xe] = 0.0;
  local_1c8[0xf] = 0.0;
  local_1c8[0x10] = 0.0;
  local_1c8[0x12] = 0.0;
  local_1c8[0x13] = 0.0;
  local_1c8[0x14] = 0.0;
  local_1c8[0x16] = 0.0;
  local_1c8[0x17] = 0.0;
  local_1c8[0x18] = 0.0;
  local_1c8[0x19] = 0.0;
  local_1c8[0x1a] = 0.0;
  local_1c8[0x1b] = 0.0;
  local_1c8[0x1c] = 0.0;
  local_1c8[1] = -6.0;
  local_1c8[5] = -5.0;
  local_1c8[9] = -4.0;
  local_1c8[0xd] = -3.0;
  local_1c8[0x11] = -2.0;
  local_1c8[0x15] = -1.0;
  local_1c8[0x1d] = 1.0;
  local_1c8[0x1e] = 0.0;
  local_1c8[0x1f] = 0.0;
  local_1c8[0x20] = 0.0;
  local_1c8[0x21] = 2.0;
  local_1c8[0x22] = 0.0;
  local_1c8[0x23] = 0.0;
  local_1c8[0x24] = 0.0;
  local_1c8[0x25] = 3.0;
  local_1c8[0x26] = 0.0;
  local_1c8[0x27] = 0.0;
  local_1c8[0x28] = 0.0;
  local_1c8[0x29] = 4.0;
  local_1c8[0x2a] = 0.0;
  local_1c8[0x2b] = 0.0;
  local_1c8[0x2c] = 0.0;
  local_1c8[0x2d] = 5.0;
  local_1c8[0x2e] = 0.0;
  local_1c8[0x2f] = 0.0;
  local_1c8[0x30] = 0.0;
  local_1c8[0x31] = 6.0;
  local_1c8[0x32] = 0.0;
  local_1c8[0x33] = 0.0;
  ExceptionList = &local_10;
  for (local_1c = 0; iVar3 = local_1c, (float)local_1c < local_18; local_1c = local_1c + 1) {
    local_24 = (double)local_1c8[local_1c * 4 + 0x34];
    iVar1 = (**(code **)(*(int *)param_3 + 0x28))();
    local_1c8[iVar3 * 4 + 0x34] = (float)local_24 / (float)iVar1;
    local_24 = (double)local_1c8[iVar3 * 4 + 0x35];
    iVar1 = (**(code **)(*(int *)param_3 + 0x2c))();
    local_1c8[iVar3 * 4 + 0x35] = (float)local_24 / (float)iVar1;
    local_24 = (double)local_1c8[iVar3 * 4];
    iVar1 = (**(code **)(*(int *)param_4 + 0x28))();
    local_1c8[iVar3 * 4] = (float)local_24 / (float)iVar1;
    local_24 = (double)local_1c8[iVar3 * 4 + 1];
    iVar1 = (**(code **)(*(int *)param_4 + 0x2c))();
    local_1c8[iVar3 * 4 + 1] = (float)local_24 / (float)iVar1;
  }
  (*(code *)**(undefined4 **)param_2)();
  (**(code **)(*(int *)param_2 + 8))();
  iVar3 = *(int *)param_2;
  (**(code **)(*(int *)param_4 + 0x2c))();
  (**(code **)(*(int *)param_4 + 0x28))();
  (**(code **)(iVar3 + 0xc))();
  if (DAT_10c442a0 == (UProxyBitmapMaterial *)0x0) {
    FName::FName((FName *)&uStack_29c,0);
    DAT_10c442a0 = (UProxyBitmapMaterial *)thunk_FUN_1053d270();
    uStack_29c = 0x1053f836;
    thunk_FUN_10530420();
  }
  uStack_29c = 0x1053f842;
  UProxyBitmapMaterial::SetTextureInterface(DAT_10c442a0,param_3);
  DAT_10c442a0[0x579] = (UProxyBitmapMaterial)0x1;
  DAT_10c442a0[0x57a] = (UProxyBitmapMaterial)0x1;
  uStack_29c = 0x1053f869;
  (**(code **)(*(int *)param_2 + 0xd4))();
  uStack_29c = 0;
  (**(code **)(*(int *)param_2 + 0xe4))();
  local_18 = (float)FUN_107a6660();
  (**(code **)(*(int *)param_2 + 0xe4))();
  pFVar2 = (FCanvasUtil *)FCanvasUtil::FCanvasUtil(local_274,param_4,param_2);
  local_8._0_1_ = 1;
  (**(code **)(*(int *)DAT_10c442a0 + 0x7c))();
  (**(code **)(*(int *)DAT_10c442a0 + 0x78))();
  (**(code **)(*(int *)param_4 + 0x2c))();
  (**(code **)(*(int *)param_4 + 0x28))();
  FCanvasUtil::DrawTile(pFVar2);
  local_8 = (uint)local_8._1_3_ << 8;
  FCanvasUtil::~FCanvasUtil(local_274);
  (**(code **)(*(int *)param_2 + 4))();
  (*(code *)**(undefined4 **)param_2)();
  (**(code **)(*(int *)param_2 + 8))();
  iVar3 = *(int *)param_2;
  (**(code **)(*(int *)param_3 + 0x2c))();
  (**(code **)(*(int *)param_3 + 0x28))();
  (**(code **)(iVar3 + 0xc))();
  if (DAT_10c4429c == (UProxyBitmapMaterial *)0x0) {
    FName::FName((FName *)&uStack_300,0);
    DAT_10c4429c = (UProxyBitmapMaterial *)thunk_FUN_1053d270();
    uStack_300 = 0x1053f9db;
    thunk_FUN_10530420();
  }
  uStack_300 = 0x1053f9e7;
  UProxyBitmapMaterial::SetTextureInterface(DAT_10c4429c,(FBaseTexture *)param_4);
  DAT_10c4429c[0x579] = (UProxyBitmapMaterial)0x1;
  DAT_10c4429c[0x57a] = (UProxyBitmapMaterial)0x1;
  uStack_300 = 0x1053fa0f;
  (**(code **)(*(int *)param_2 + 0xd4))();
  uStack_300 = 0;
  (**(code **)(*(int *)param_2 + 0xe4))();
  (**(code **)(*(int *)param_2 + 0xe4))();
  pFVar2 = (FCanvasUtil *)FCanvasUtil::FCanvasUtil(local_274,(FRenderTarget *)param_3,param_2);
  local_8._0_1_ = 2;
  (**(code **)(*(int *)DAT_10c4429c + 0x7c))();
  (**(code **)(*(int *)DAT_10c4429c + 0x78))();
  (**(code **)(*(int *)param_3 + 0x2c))();
  (**(code **)(*(int *)param_3 + 0x28))();
  FCanvasUtil::DrawTile(pFVar2);
  local_8 = (uint)local_8._1_3_ << 8;
  FCanvasUtil::~FCanvasUtil(local_274);
  (**(code **)(*(int *)param_2 + 4))();
  (*(code *)**(undefined4 **)param_2)();
  (**(code **)(*(int *)param_2 + 8))();
  iVar3 = *(int *)param_2;
  (**(code **)(*(int *)param_4 + 0x2c))();
  (**(code **)(*(int *)param_4 + 0x28))();
  (**(code **)(iVar3 + 0xc))();
  if (DAT_10c44298 == (UProxyBitmapMaterial *)0x0) {
    FName::FName((FName *)&uStack_364,0);
    DAT_10c44298 = (UProxyBitmapMaterial *)thunk_FUN_1053d270();
    uStack_364 = 0x1053fb79;
    thunk_FUN_10530420();
  }
  uStack_364 = 0x1053fb85;
  UProxyBitmapMaterial::SetTextureInterface(DAT_10c44298,param_3);
  DAT_10c44298[0x579] = (UProxyBitmapMaterial)0x1;
  DAT_10c44298[0x57a] = (UProxyBitmapMaterial)0x1;
  uStack_364 = 0x1053fbad;
  (**(code **)(*(int *)param_2 + 0xd4))();
  uStack_364 = 0;
  (**(code **)(*(int *)param_2 + 0xe4))();
  (**(code **)(*(int *)param_2 + 0xe4))();
  pFVar2 = (FCanvasUtil *)FCanvasUtil::FCanvasUtil(local_274,(FRenderTarget *)param_3,param_2);
  local_8._0_1_ = 3;
  (**(code **)(*(int *)DAT_10c44298 + 0x7c))();
  (**(code **)(*(int *)DAT_10c44298 + 0x78))();
  (**(code **)(*(int *)param_4 + 0x2c))();
  (**(code **)(*(int *)param_4 + 0x28))();
  FCanvasUtil::DrawTile(pFVar2);
  local_8 = (uint)local_8._1_3_ << 8;
  FCanvasUtil::~FCanvasUtil(local_274);
  (**(code **)(*(int *)param_2 + 4))();
  (*(code *)**(undefined4 **)param_2)();
  (**(code **)(*(int *)param_2 + 8))();
  iVar3 = *(int *)param_2;
  (**(code **)(*(int *)param_3 + 0x2c))();
  (**(code **)(*(int *)param_3 + 0x28))();
  (**(code **)(iVar3 + 0xc))();
  if (DAT_10c44294 == (UProxyBitmapMaterial *)0x0) {
    FName::FName((FName *)&uStack_3c8,0);
    DAT_10c44294 = (UProxyBitmapMaterial *)
                   thunk_FUN_1053d270(&UProxyBitmapMaterial::PrivateStaticClass,0xffffffff);
    uStack_3c8 = 0x1053fd17;
    thunk_FUN_10530420();
  }
  uStack_3c8 = 0x1053fd23;
  UProxyBitmapMaterial::SetTextureInterface(DAT_10c44294,(FBaseTexture *)param_4);
  DAT_10c44294[0x579] = (UProxyBitmapMaterial)0x1;
  DAT_10c44294[0x57a] = (UProxyBitmapMaterial)0x1;
  uStack_3c8 = 0x1053fd4b;
  (**(code **)(*(int *)param_2 + 0xd4))();
  uStack_3c8 = 0;
  (**(code **)(*(int *)param_2 + 0xe4))(0,L"BloomScale",&stack0x00000014);
  (**(code **)(*(int *)param_2 + 0xe4))(7,L"TexelKernel",local_1c8,local_18);
  pFVar2 = (FCanvasUtil *)FCanvasUtil::FCanvasUtil(local_274,(FRenderTarget *)param_3,param_2);
  local_8._0_1_ = 4;
  local_18 = -NAN;
  iVar3 = (**(code **)(*(int *)DAT_10c44294 + 0x7c))(0,DAT_10c44294,0xffffffff);
  iVar3 = (**(code **)(*(int *)DAT_10c44294 + 0x78))((float)iVar3);
  iVar3 = (**(code **)(*(int *)param_3 + 0x2c))(0,0,(float)iVar3);
  iVar3 = (**(code **)(*(int *)param_3 + 0x28))((float)iVar3);
  FCanvasUtil::DrawTile(pFVar2,0,0,(float)iVar3);
  local_8 = (uint)local_8._1_3_ << 8;
  FCanvasUtil::~FCanvasUtil(local_274);
  (**(code **)(*(int *)param_2 + 4))();
  ExceptionList = local_10;
  return 1;
}


// ==== 1053fe54 Catch@1053fe54

void Catch_1053fe54(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x24) = *(undefined4 *)(unaff_EBP + -0x1c8);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x24,&DAT_10914c48);
}


// ==== 1053fe6b Catch@1053fe6b

void Catch_1053fe6b(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"UGlowEffect::BloomRender");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10540120 FUN_10540120

undefined4
FUN_10540120(undefined4 param_1,FRenderInterface *param_2,FBaseTexture *param_3,
            FRenderTarget *param_4)

{
  FCanvasUtil *pFVar1;
  int iVar2;
  undefined4 uStack_114;
  FCanvasUtil local_d4 [176];
  int local_24;
  float local_20 [2];
  float local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_1081b27b;
  local_10 = ExceptionList;
  local_14 = &stack0xffffff20;
  local_8 = 0;
  ExceptionList = &local_10;
  (*(code *)**(undefined4 **)param_2)();
  (**(code **)(*(int *)param_2 + 8))();
  iVar2 = *(int *)param_2;
  (**(code **)(*(int *)param_4 + 0x2c))();
  (**(code **)(*(int *)param_4 + 0x28))();
  (**(code **)(iVar2 + 0xc))();
  (**(code **)(*(int *)param_2 + 0x10))();
  if (DAT_10c442a4 == (UProxyBitmapMaterial *)0x0) {
    FName::FName((FName *)&uStack_114,0);
    DAT_10c442a4 = (UProxyBitmapMaterial *)
                   thunk_FUN_1053d270(&UProxyBitmapMaterial::PrivateStaticClass,0xffffffff);
    uStack_114 = 0x105401f1;
    thunk_FUN_10530420();
    uStack_114 = 0x10540200;
    UProxyBitmapMaterial::SetTextureInterface(DAT_10c442a4,param_3);
  }
  DAT_10c442a4[0x579] = (UProxyBitmapMaterial)0x1;
  DAT_10c442a4[0x57a] = (UProxyBitmapMaterial)0x1;
  local_20[0] = (float)*(int *)(local_24 + 0x74) * 0.00390625;
  local_18 = (float)*(int *)(local_24 + 0x78) * 0.00390625;
  uStack_114 = 0x10540241;
  (**(code **)(*(int *)param_2 + 0xd4))();
  uStack_114 = 0;
  (**(code **)(*(int *)param_2 + 0xe4))(0,L"DefOpacity",local_20);
  (**(code **)(*(int *)param_2 + 0xe4))(0,L"AspectOpacity",&local_18,0);
  pFVar1 = (FCanvasUtil *)FCanvasUtil::FCanvasUtil(local_d4,param_4,param_2);
  local_8._0_1_ = 1;
  iVar2 = (**(code **)(*(int *)DAT_10c442a4 + 0x7c))(0,DAT_10c442a4,0xffffffff);
  iVar2 = (**(code **)(*(int *)DAT_10c442a4 + 0x78))((float)iVar2);
  iVar2 = (**(code **)(*(int *)param_4 + 0x2c))(0,0,(float)iVar2);
  iVar2 = (**(code **)(*(int *)param_4 + 0x28))((float)iVar2);
  FCanvasUtil::DrawTile(pFVar1,0,0,(float)iVar2);
  local_8 = (uint)local_8._1_3_ << 8;
  FCanvasUtil::~FCanvasUtil(local_d4);
  (**(code **)(*(int *)param_2 + 4))();
  ExceptionList = local_10;
  return 1;
}


// ==== 10540343 Catch@10540343

void Catch_10540343(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x24);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_10914c48);
}


// ==== 10540357 Catch@10540357

void Catch_10540357(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"UGlowEffect::AspectRender");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10540410 FUN_10540410

undefined4
FUN_10540410(undefined4 param_1,FRenderInterface *param_2,FBaseTexture *param_3,
            FRenderTarget *param_4)

{
  FCanvasUtil *pFVar1;
  int iVar2;
  undefined4 uStack_108;
  FCanvasUtil local_c8 [180];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_1081b29b;
  local_10 = ExceptionList;
  local_14 = &stack0xffffff2c;
  local_8 = 0;
  ExceptionList = &local_10;
  (*(code *)**(undefined4 **)param_2)();
  (**(code **)(*(int *)param_2 + 8))();
  iVar2 = *(int *)param_2;
  (**(code **)(*(int *)param_4 + 0x2c))();
  (**(code **)(*(int *)param_4 + 0x28))();
  (**(code **)(iVar2 + 0xc))();
  (**(code **)(*(int *)param_2 + 0x10))();
  if (DAT_10c442a8 == (UProxyBitmapMaterial *)0x0) {
    FName::FName((FName *)&uStack_108,0);
    DAT_10c442a8 = (UProxyBitmapMaterial *)
                   thunk_FUN_1053d270(&UProxyBitmapMaterial::PrivateStaticClass,0xffffffff);
    uStack_108 = 0x105404dd;
    thunk_FUN_10530420();
    uStack_108 = 0x105404ec;
    UProxyBitmapMaterial::SetTextureInterface(DAT_10c442a8,param_3);
  }
  DAT_10c442a8[0x579] = (UProxyBitmapMaterial)0x1;
  DAT_10c442a8[0x57a] = (UProxyBitmapMaterial)0x1;
  uStack_108 = 0x10540514;
  (**(code **)(*(int *)param_2 + 0xd8))();
  uStack_108 = 0xe;
  (**(code **)(*(int *)param_2 + 0xd4))();
  pFVar1 = (FCanvasUtil *)FCanvasUtil::FCanvasUtil(local_c8,param_4,param_2);
  local_8._0_1_ = 1;
  iVar2 = (**(code **)(*(int *)DAT_10c442a8 + 0x7c))(0,DAT_10c442a8,0xffffffff);
  iVar2 = (**(code **)(*(int *)DAT_10c442a8 + 0x78))((float)iVar2);
  iVar2 = (**(code **)(*(int *)param_4 + 0x2c))(0,0,(float)iVar2);
  iVar2 = (**(code **)(*(int *)param_4 + 0x28))((float)iVar2);
  FCanvasUtil::DrawTile(pFVar1,0,0,(float)iVar2);
  local_8 = (uint)local_8._1_3_ << 8;
  FCanvasUtil::~FCanvasUtil(local_c8);
  (**(code **)(*(int *)param_2 + 4))();
  ExceptionList = local_10;
  return 1;
}


// ==== 105405f2 Catch@105405f2

void Catch_105405f2(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 10540606 Catch@10540606

void Catch_10540606(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"UGlowEffect::Blur1Render");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 105406b0 FUN_105406b0

undefined4
FUN_105406b0(undefined4 param_1,FRenderInterface *param_2,FBaseTexture *param_3,
            FRenderTarget *param_4)

{
  FCanvasUtil *pFVar1;
  int iVar2;
  undefined4 uStack_108;
  FCanvasUtil local_c8 [180];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_1081b2bb;
  local_10 = ExceptionList;
  local_14 = &stack0xffffff2c;
  local_8 = 0;
  ExceptionList = &local_10;
  (*(code *)**(undefined4 **)param_2)();
  (**(code **)(*(int *)param_2 + 8))();
  iVar2 = *(int *)param_2;
  (**(code **)(*(int *)param_4 + 0x2c))();
  (**(code **)(*(int *)param_4 + 0x28))();
  (**(code **)(iVar2 + 0xc))();
  (**(code **)(*(int *)param_2 + 0x10))();
  if (DAT_10c442ac == (UProxyBitmapMaterial *)0x0) {
    FName::FName((FName *)&uStack_108,0);
    DAT_10c442ac = (UProxyBitmapMaterial *)
                   thunk_FUN_1053d270(&UProxyBitmapMaterial::PrivateStaticClass,0xffffffff);
    uStack_108 = 0x1054077d;
    thunk_FUN_10530420();
    uStack_108 = 0x1054078c;
    UProxyBitmapMaterial::SetTextureInterface(DAT_10c442ac,param_3);
  }
  DAT_10c442ac[0x579] = (UProxyBitmapMaterial)0x1;
  DAT_10c442ac[0x57a] = (UProxyBitmapMaterial)0x1;
  uStack_108 = 0x105407b4;
  (**(code **)(*(int *)param_2 + 0xd8))();
  uStack_108 = 0xe;
  (**(code **)(*(int *)param_2 + 0xd4))();
  pFVar1 = (FCanvasUtil *)FCanvasUtil::FCanvasUtil(local_c8,param_4,param_2);
  local_8._0_1_ = 1;
  iVar2 = (**(code **)(*(int *)DAT_10c442ac + 0x7c))(0,DAT_10c442ac,0xffffffff);
  iVar2 = (**(code **)(*(int *)DAT_10c442ac + 0x78))((float)iVar2);
  iVar2 = (**(code **)(*(int *)param_4 + 0x2c))(0,0,(float)iVar2);
  iVar2 = (**(code **)(*(int *)param_4 + 0x28))((float)iVar2);
  FCanvasUtil::DrawTile(pFVar1,0,0,(float)iVar2);
  local_8 = (uint)local_8._1_3_ << 8;
  FCanvasUtil::~FCanvasUtil(local_c8);
  (**(code **)(*(int *)param_2 + 4))();
  ExceptionList = local_10;
  return 1;
}


// ==== 10540892 Catch@10540892

void Catch_10540892(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 105408a6 Catch@105408a6

void Catch_105408a6(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"UGlowEffect::Blur2Render");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10540950 FUN_10540950

undefined4 FUN_10540950(int param_1,FRenderInterface *param_2,FBaseTexture *param_3,int *param_4)

{
  FCanvasUtil *pFVar1;
  int iVar2;
  FCanvasUtil local_c8 [180];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_1081b2db;
  local_10 = ExceptionList;
  local_14 = &stack0xffffff2c;
  local_8 = 0;
  ExceptionList = &local_10;
  (*(code *)**(undefined4 **)param_2)();
  (**(code **)(*(int *)param_2 + 8))();
  iVar2 = *(int *)param_2;
  (**(code **)(*param_4 + 0x2c))();
  (**(code **)(*param_4 + 0x28))();
  (**(code **)(iVar2 + 0xc))();
  (**(code **)(*(int *)param_2 + 0x10))();
  if (DAT_10c442b0 == (UProxyBitmapMaterial *)0x0) {
    FName::FName((FName *)&stack0xfffffef8,0);
    DAT_10c442b0 = (UProxyBitmapMaterial *)
                   thunk_FUN_1053d270(&UProxyBitmapMaterial::PrivateStaticClass,0xffffffff);
    thunk_FUN_10530420();
    UProxyBitmapMaterial::SetTextureInterface(DAT_10c442b0,param_3);
  }
  pFVar1 = (FCanvasUtil *)
           FCanvasUtil::FCanvasUtil(local_c8,(FRenderTarget *)(param_1 + 0xdc),param_2);
  local_8._0_1_ = 1;
  iVar2 = (**(code **)(*(int *)DAT_10c442b0 + 0x7c))(0);
  iVar2 = (**(code **)(*(int *)DAT_10c442b0 + 0x78))((float)iVar2);
  FCanvasUtil::DrawTile
            (pFVar1,0,0,(float)*(int *)(param_1 + 0x94),(float)*(int *)(param_1 + 0x98),0,0,
             (float)iVar2);
  local_8 = (uint)local_8._1_3_ << 8;
  FCanvasUtil::~FCanvasUtil(local_c8);
  (**(code **)(*(int *)param_2 + 4))();
  ExceptionList = local_10;
  return 1;
}


// ==== 10540af0 Catch@10540af0

void Catch_10540af0(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 10540b04 Catch@10540b04

void Catch_10540b04(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"UBloomEffect::UGlowEffect");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10540ba0 FUN_10540ba0

undefined4
FUN_10540ba0(UViewport *param_1,FRenderInterface *param_2,FBaseTexture *param_3,
            FBaseTexture *param_4,int *param_5)

{
  FCanvasUtil *pFVar1;
  int iVar2;
  UClass *pUStack_11c;
  undefined4 uStack_114;
  FCanvasUtil local_d4 [180];
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_1081b2fb;
  local_10 = ExceptionList;
  local_14 = &stack0xffffff20;
  local_8 = 0;
  ExceptionList = &local_10;
  (*(code *)**(undefined4 **)param_2)();
  (**(code **)(*(int *)param_2 + 8))();
  iVar2 = *(int *)param_2;
  (**(code **)(*param_5 + 0x2c))();
  (**(code **)(*param_5 + 0x28))();
  (**(code **)(iVar2 + 0xc))();
  iVar2 = *(int *)param_2;
  UViewport::IsDepthComplexity(param_1);
  (**(code **)(iVar2 + 0x10))();
  if (DAT_10c442bc == (UProxyBitmapMaterial *)0x0) {
    pUStack_11c = (UClass *)0x10540c5a;
    FName::FName((FName *)&uStack_114,0);
    pUStack_11c = &UProxyBitmapMaterial::PrivateStaticClass;
    DAT_10c442bc = (UProxyBitmapMaterial *)thunk_FUN_1053d270();
    uStack_114 = 0x10540c7e;
    thunk_FUN_10530420();
    uStack_114 = 0x10540c8d;
    UProxyBitmapMaterial::SetTextureInterface(DAT_10c442bc,param_3);
  }
  if (DAT_10c442b8 == (UProxyBitmapMaterial *)0x0) {
    pUStack_11c = (UClass *)0x10540ca6;
    FName::FName((FName *)&uStack_114,0);
    pUStack_11c = &UProxyBitmapMaterial::PrivateStaticClass;
    DAT_10c442b8 = (UProxyBitmapMaterial *)thunk_FUN_1053d270();
    uStack_114 = 0x10540cca;
    thunk_FUN_10530420();
    uStack_114 = 0x10540cd9;
    UProxyBitmapMaterial::SetTextureInterface(DAT_10c442b8,param_4);
  }
  if (DAT_10c442b4 == (int *)0x0) {
    pUStack_11c = (UClass *)0x10540cf2;
    FName::FName((FName *)&uStack_114,0);
    pUStack_11c = &UCombiner::PrivateStaticClass;
    DAT_10c442b4 = (int *)thunk_FUN_1053d4f0();
    uStack_114 = 0x10540d16;
    thunk_FUN_10530420();
    DAT_10c442b4[0x15f] = (int)DAT_10c442bc;
    DAT_10c442b4[0x160] = (int)DAT_10c442b8;
  }
  *(undefined1 *)((int)DAT_10c442b4 + 0x579) = 5;
  *(undefined1 *)(DAT_10c442b4 + 0x15e) = 3;
  local_20 = 0;
  local_1c = 0;
  local_18 = 0;
  iVar2 = *(int *)param_2;
  FSphere::FSphere((FSphere *)&pUStack_11c,0,0,0,0);
  (**(code **)(iVar2 + 0x24))(0,0,0,0,0);
  pFVar1 = (FCanvasUtil *)
           FCanvasUtil::FCanvasUtil(local_d4,(FRenderTarget *)(param_1 + 0xdc),param_2);
  local_8._0_1_ = 1;
  iVar2 = (**(code **)(*DAT_10c442b4 + 0x7c))(0,DAT_10c442b4,0xffffffff);
  iVar2 = (**(code **)(*DAT_10c442b4 + 0x78))((float)iVar2);
  FCanvasUtil::DrawTile
            (pFVar1,0,0,(float)*(int *)(param_1 + 0x94),(float)*(int *)(param_1 + 0x98),0,0,
             (float)iVar2);
  local_8 = (uint)local_8._1_3_ << 8;
  FCanvasUtil::~FCanvasUtil(local_d4);
  (**(code **)(*(int *)param_2 + 4))();
  ExceptionList = local_10;
  return 1;
}


// ==== 10540e58 Catch@10540e58

void Catch_10540e58(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x20) = *(undefined4 *)(unaff_EBP + -0x24);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x20,&DAT_10914c48);
}


// ==== 10540e6c Catch@10540e6c

void Catch_10540e6c(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"UGlowEffect::CombineRender");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10540f50 FUN_10540f50

void FUN_10540f50(UViewport *param_1,FRenderInterface *param_2)

{
  int iVar1;
  FCanvasUtil *pFVar2;
  UHDREffect *in_ECX;
  UProxyBitmapMaterial *extraout_ECX;
  UProxyBitmapMaterial *pUVar3;
  int iVar4;
  UClass *pUStack_2c0;
  UProxyBitmapMaterial *pUStack_2b8;
  UClass *pUStack_234;
  int iStack_22c;
  FCanvasUtil local_148 [172];
  float local_9c [20];
  undefined1 *local_4c;
  void *local_48;
  undefined1 *puStack_44;
  int local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  int local_24;
  int local_20;
  float local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined1 *local_8;
  
  puStack_44 = &LAB_1081b331;
  local_48 = ExceptionList;
  local_4c = &stack0xfffffeac;
  local_40 = 0;
  ExceptionList = &local_48;
  iVar1 = (**(code **)(**(int **)(param_1 + 0x7c) + 0xd4))();
  if (((iVar1 != 0) && (*(int *)GL2HDREffect_exref != 0)) && (0 < *(int *)GL2PostProcessType_exref))
  {
    (**(code **)(*(int *)param_2 + 4))();
    local_9c[0] = -1.0;
    local_9c[1] = 0.0;
    local_9c[2] = 0.0;
    local_9c[3] = 0.0;
    local_9c[4] = 0.0;
    local_9c[6] = 0.0;
    local_9c[7] = 0.0;
    local_9c[8] = 0.0;
    local_9c[9] = 0.0;
    local_9c[10] = 0.0;
    local_9c[0xb] = 0.0;
    local_9c[0xc] = 0.0;
    local_9c[5] = -1.0;
    local_9c[0xd] = 1.0;
    local_9c[0x10] = 1.0;
    local_9c[0xe] = 0.0;
    local_9c[0xf] = 0.0;
    local_9c[0x11] = 0.0;
    local_9c[0x12] = 0.0;
    local_9c[0x13] = 0.0;
    for (local_24 = 0; local_24 < 5; local_24 = local_24 + 1) {
      local_9c[local_24 * 4] = local_9c[local_24 * 4] / (float)*(int *)(param_1 + 0x94);
      local_9c[local_24 * 4 + 1] = local_9c[local_24 * 4 + 1] / (float)*(int *)(param_1 + 0x98);
    }
    (*(code *)**(undefined4 **)param_2)();
    (**(code **)(*(int *)param_2 + 8))();
    (**(code **)(*(int *)param_2 + 0xc))();
    (**(code **)(*(int *)param_2 + 0x10))();
    (**(code **)(*(int *)param_2 + 0xd4))();
    (**(code **)(*(int *)param_2 + 0xe4))();
    if (DAT_10c442e4 == (UProxyBitmapMaterial *)0x0) {
      FName::FName((FName *)&stack0xfffffe60,0);
      DAT_10c442e4 = (UProxyBitmapMaterial *)thunk_FUN_1053d270();
      thunk_FUN_10530420();
      UProxyBitmapMaterial::SetTextureInterface(DAT_10c442e4,*(FBaseTexture **)(in_ECX + 0x3c));
      DAT_10c442e4[0x579] = (UProxyBitmapMaterial)0x1;
      DAT_10c442e4[0x57a] = (UProxyBitmapMaterial)0x1;
    }
    pFVar2 = (FCanvasUtil *)
             FCanvasUtil::FCanvasUtil(local_148,*(FRenderTarget **)(in_ECX + 0x40),param_2);
    local_40._0_1_ = 1;
    local_14 = 0xffffffff;
    (**(code **)(*(int *)DAT_10c442e4 + 0x7c))();
    (**(code **)(*(int *)DAT_10c442e4 + 0x78))();
    FCanvasUtil::DrawTile(pFVar2);
    local_40 = (uint)local_40._1_3_ << 8;
    FCanvasUtil::~FCanvasUtil(local_148);
    (**(code **)(*(int *)param_2 + 4))();
    for (iVar1 = 1; local_20 = iVar1, iVar1 < 4; iVar1 = iVar1 + 1) {
      UHDREffect::DownFilter4Render
                (in_ECX,param_2,*(FRenderTarget **)(in_ECX + iVar1 * 4 + 0x3c),
                 *(FRenderTarget **)(in_ECX + iVar1 * 4 + 0x40),
                 *(int *)(*(FRenderTarget **)(in_ECX + iVar1 * 4 + 0x40) + 0x14));
    }
    iVar4 = (*(int *)(in_ECX + 0x5c) == 5) + 5;
    (*(code *)**(undefined4 **)param_2)();
    (**(code **)(*(int *)param_2 + 8))();
    (**(code **)(*(int *)param_2 + 0xc))();
    local_c = 0xff000000;
    iVar1 = *(int *)param_2;
    UViewport::IsDepthComplexity(param_1);
    (**(code **)(iVar1 + 0x10))();
    (**(code **)(*(int *)param_2 + 0xd4))();
    local_8 = *(undefined1 **)(*(int *)(*(int *)(param_1 + 0x3c) + 0xe0) + 0x4bc);
    local_18 = (float)local_8 - *(float *)(in_ECX + 0x58);
    *(undefined1 **)(in_ECX + 0x58) = local_8;
    (**(code **)(*(int *)param_2 + 0xe4))();
    (**(code **)(*(int *)param_2 + 0xe4))();
    (**(code **)(*(int *)param_2 + 0xe4))();
    if (DAT_10c442e0 == (UProxyBitmapMaterial *)0x0) {
      local_8 = (undefined1 *)&iStack_22c;
      pUStack_234 = (UClass *)0x105412f5;
      FName::FName((FName *)&iStack_22c,0);
      pUStack_234 = &UProxyBitmapMaterial::PrivateStaticClass;
      DAT_10c442e0 = (UProxyBitmapMaterial *)thunk_FUN_1053d270();
      iStack_22c = 0x10541319;
      thunk_FUN_10530420();
    }
    iStack_22c = 0x1054132c;
    UProxyBitmapMaterial::SetTextureInterface
              (DAT_10c442e0,*(FBaseTexture **)(in_ECX + *(int *)(in_ECX + 0x5c) * 4 + 0x3c));
    if (DAT_10c442dc == (UProxyBitmapMaterial *)0x0) {
      local_8 = (undefined1 *)&iStack_22c;
      pUStack_234 = (UClass *)0x10541345;
      FName::FName((FName *)&iStack_22c,0);
      pUStack_234 = &UProxyBitmapMaterial::PrivateStaticClass;
      DAT_10c442dc = (UProxyBitmapMaterial *)thunk_FUN_1053d270();
      iStack_22c = 0x10541369;
      thunk_FUN_10530420();
      iStack_22c = 0x10541378;
      UProxyBitmapMaterial::SetTextureInterface(DAT_10c442dc,*(FBaseTexture **)(in_ECX + 0x4c));
    }
    if (DAT_10c442d8 == 0) {
      local_8 = (undefined1 *)&iStack_22c;
      pUStack_234 = (UClass *)0x10541391;
      FName::FName((FName *)&iStack_22c,0);
      pUStack_234 = &UCombiner::PrivateStaticClass;
      DAT_10c442d8 = thunk_FUN_1053d4f0();
      iStack_22c = 0x105413b5;
      thunk_FUN_10530420();
      *(UProxyBitmapMaterial **)(DAT_10c442d8 + 0x57c) = DAT_10c442e0;
      *(UProxyBitmapMaterial **)(DAT_10c442d8 + 0x580) = DAT_10c442dc;
    }
    iVar1 = DAT_10c442d8;
    *(undefined1 *)(DAT_10c442d8 + 0x579) = 5;
    *(undefined1 *)(DAT_10c442d8 + 0x578) = 3;
    if (DAT_10c442d4 == (int *)0x0) {
      local_8 = (undefined1 *)&iStack_22c;
      iStack_22c = iVar1;
      pUStack_234 = (UClass *)0x1054140a;
      FName::FName((FName *)&iStack_22c,0);
      pUStack_234 = &UFinalBlend::PrivateStaticClass;
      DAT_10c442d4 = (int *)thunk_FUN_1053d3f0();
      iStack_22c = 0x1054142e;
      thunk_FUN_10530420();
    }
    DAT_10c442d4[0x15e] = DAT_10c442d8;
    *(undefined1 *)(DAT_10c442d4 + 0x15f) = 0;
    DAT_10c442d4[0x160] = DAT_10c442d4[0x160] & 0xfffffffe;
    DAT_10c442d4[0x160] = DAT_10c442d4[0x160] & 0xfffffffd;
    DAT_10c442d4[0x160] = DAT_10c442d4[0x160] & 0xfffffffb;
    local_30 = 0;
    local_2c = 0;
    local_28 = 0;
    iVar1 = *(int *)param_2;
    local_8 = (undefined1 *)&pUStack_234;
    FSphere::FSphere((FSphere *)&pUStack_234);
    (**(code **)(iVar1 + 0x24))();
    pFVar2 = (FCanvasUtil *)
             FCanvasUtil::FCanvasUtil
                       (local_148,*(FRenderTarget **)(in_ECX + iVar4 * 4 + 0x3c),param_2);
    local_40._0_1_ = 2;
    local_10 = 0xffffffff;
    local_8 = (undefined1 *)(**(code **)(*DAT_10c442d4 + 0x7c))();
    local_8 = (undefined1 *)(**(code **)(*DAT_10c442d4 + 0x78))();
    FCanvasUtil::DrawTile(pFVar2);
    local_40 = (uint)local_40._1_3_ << 8;
    FCanvasUtil::~FCanvasUtil(local_148);
    (**(code **)(*(int *)param_2 + 4))();
    *(int *)(in_ECX + 0x5c) = iVar4;
    (*(code *)**(undefined4 **)param_2)();
    (**(code **)(*(int *)param_2 + 0xd4))();
    (**(code **)(*(int *)param_2 + 0xc))();
    local_8 = (undefined1 *)0xff000000;
    UViewport::IsDepthComplexity(param_1);
    (**(code **)(*(int *)param_2 + 0x10))();
    if (DAT_10c442d0 == (UProxyBitmapMaterial *)0x0) {
      pUStack_2c0 = (UClass *)0x105415e5;
      FName::FName((FName *)&pUStack_2b8,0);
      pUStack_2c0 = &UProxyBitmapMaterial::PrivateStaticClass;
      DAT_10c442d0 = (UProxyBitmapMaterial *)thunk_FUN_1053d270();
      pUStack_2b8 = (UProxyBitmapMaterial *)0x10541609;
      thunk_FUN_10530420();
      pUStack_2b8 = (UProxyBitmapMaterial *)0x10541618;
      UProxyBitmapMaterial::SetTextureInterface(DAT_10c442d0,*(FBaseTexture **)(in_ECX + 0x3c));
    }
    if (DAT_10c442cc == (UProxyBitmapMaterial *)0x0) {
      pUStack_2c0 = (UClass *)0x10541631;
      FName::FName((FName *)&pUStack_2b8,0);
      pUStack_2c0 = &UProxyBitmapMaterial::PrivateStaticClass;
      DAT_10c442cc = (UProxyBitmapMaterial *)thunk_FUN_1053d270();
      pUStack_2b8 = (UProxyBitmapMaterial *)0x10541655;
      thunk_FUN_10530420();
    }
    pUStack_2b8 = (UProxyBitmapMaterial *)0x10541668;
    UProxyBitmapMaterial::SetTextureInterface
              (DAT_10c442cc,*(FBaseTexture **)(in_ECX + *(int *)(in_ECX + 0x5c) * 4 + 0x3c));
    if (DAT_10c442c8 == (UProxyBitmapMaterial *)0x0) {
      pUStack_2c0 = (UClass *)0x10541681;
      FName::FName((FName *)&pUStack_2b8,0);
      pUStack_2c0 = &UProxyBitmapMaterial::PrivateStaticClass;
      DAT_10c442c8 = (UProxyBitmapMaterial *)thunk_FUN_1053d270();
      pUStack_2b8 = (UProxyBitmapMaterial *)0x105416a5;
      thunk_FUN_10530420();
    }
    pUStack_2b8 = (UProxyBitmapMaterial *)0x105416b4;
    UProxyBitmapMaterial::SetTextureInterface(DAT_10c442c8,*(FBaseTexture **)(in_ECX + 0x4c));
    pUVar3 = extraout_ECX;
    if (DAT_10c442c4 == (int *)0x0) {
      pUStack_2c0 = (UClass *)0x105416cd;
      FName::FName((FName *)&pUStack_2b8,0);
      pUStack_2c0 = &UCombiner::PrivateStaticClass;
      DAT_10c442c4 = (int *)thunk_FUN_1053d4f0();
      pUStack_2b8 = (UProxyBitmapMaterial *)0x105416f1;
      thunk_FUN_10530420();
      DAT_10c442c4[0x15f] = (int)DAT_10c442d0;
      pUVar3 = DAT_10c442c8;
      DAT_10c442c4[0x160] = (int)DAT_10c442c8;
      DAT_10c442c4[0x161] = (int)DAT_10c442cc;
    }
    if (DAT_10c442c0 == 0) {
      pUStack_2c0 = (UClass *)0x1054173e;
      pUStack_2b8 = pUVar3;
      FName::FName((FName *)&pUStack_2b8,0);
      pUStack_2c0 = &UFinalBlend::PrivateStaticClass;
      DAT_10c442c0 = thunk_FUN_1053d3f0();
      pUStack_2b8 = (UProxyBitmapMaterial *)0x10541762;
      thunk_FUN_10530420();
      *(uint *)(DAT_10c442c0 + 0x580) = *(uint *)(DAT_10c442c0 + 0x580) & 0xfffffffe;
      *(int **)(DAT_10c442c0 + 0x578) = DAT_10c442c4;
    }
    *(undefined1 *)((int)DAT_10c442c4 + 0x579) = 5;
    *(undefined1 *)(DAT_10c442c4 + 0x15e) = 3;
    local_3c = 0;
    local_38 = 0;
    local_34 = 0;
    iVar1 = *(int *)param_2;
    FSphere::FSphere((FSphere *)&pUStack_2c0,0,0,0,0);
    (**(code **)(iVar1 + 0x24))(0,0,0,0,0);
    (**(code **)(*(int *)param_2 + 0xe4))(0,L"GrayLum",in_ECX + 0x60,0);
    (**(code **)(*(int *)param_2 + 0xe4))(0,L"Coef",in_ECX + 100,0);
    (**(code **)(*(int *)param_2 + 0xe4))(0,L"ClampMin",in_ECX + 0x70,0);
    (**(code **)(*(int *)param_2 + 0xe4))(0,L"ClampMax",in_ECX + 0x74,0);
    pFVar2 = (FCanvasUtil *)
             FCanvasUtil::FCanvasUtil(local_148,(FRenderTarget *)(param_1 + 0xdc),param_2);
    local_40._0_1_ = 3;
    iVar1 = (**(code **)(*DAT_10c442c4 + 0x7c))(0,DAT_10c442c0,0xffffffff);
    iVar1 = (**(code **)(*DAT_10c442c4 + 0x78))((float)iVar1);
    FCanvasUtil::DrawTile
              (pFVar2,0,0,(float)*(int *)(param_1 + 0x94),(float)*(int *)(param_1 + 0x98),0,0,
               (float)iVar1);
    local_40 = (uint)local_40._1_3_ << 8;
    FCanvasUtil::~FCanvasUtil(local_148);
    (**(code **)(*(int *)param_2 + 4))();
  }
  ExceptionList = local_48;
  return;
}


// ==== 10541902 Catch@10541902

void Catch_10541902(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + 0x20) = *(undefined4 *)(unaff_EBP + -100);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + 0x20,&DAT_10914c48);
}


// ==== 10541916 Catch@10541916

void Catch_10541916(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"UHDREffect::PostRender");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10541bb0 FUN_10541bb0

undefined4
FUN_10541bb0(UViewport *param_1,FRenderInterface *param_2,FRenderTarget *param_3,
            FRenderTarget *param_4)

{
  UGlowEffect *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1081b350;
  local_10 = ExceptionList;
  local_8 = 0;
  if (*(int *)(in_ECX + 0x70) == 1) {
    ExceptionList = &local_10;
    UGlowEffect::Blur1Render(in_ECX,param_1,param_2,param_3,param_4);
  }
  else if (*(int *)(in_ECX + 0x70) == 2) {
    ExceptionList = &local_10;
    UGlowEffect::Blur2Render(in_ECX,param_1,param_2,param_3,param_4);
  }
  ExceptionList = local_10;
  return 1;
}


// ==== 10541c29 Catch@10541c29

void Catch_10541c29(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 10541c3d Catch@10541c3d

void Catch_10541c3d(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"UGlowEffect::BlurRender");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10541c90 FUN_10541c90

void FUN_10541c90(UViewport *param_1,FRenderInterface *param_2)

{
  int iVar1;
  FCanvasUtil *pFVar2;
  UGlowEffect *in_ECX;
  UClass *pUStack_10c;
  undefined4 uStack_104;
  FCanvasUtil local_d8 [176];
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_1081b381;
  local_10 = ExceptionList;
  local_14 = &stack0xffffff1c;
  local_8 = 0;
  if ((*(int *)GL2GlowEffect_exref != 0) && (0 < *(int *)GL2PostProcessType_exref)) {
    ExceptionList = &local_10;
    iVar1 = (**(code **)(*(int *)param_2 + 0xd0))();
    if (iVar1 != 0) {
      iVar1 = (**(code **)(*(int *)param_2 + 0xd0))();
      if (iVar1 != 0) {
        UGlowEffect::BrightPassFilterRender
                  (in_ECX,param_1,param_2,*(FRenderTarget **)(in_ECX + 0x40),
                   *(FRenderTarget **)(in_ECX + 0x44));
        uStack_104 = 0x10541d3a;
        UGlowEffect::BloomRender
                  (in_ECX,param_1,param_2,*(FRenderTarget **)(in_ECX + 0x44),
                   *(FRenderTarget **)(in_ECX + 0x40),*(float *)(in_ECX + 0x60));
        UGlowEffect::BlurRender
                  (in_ECX,param_1,param_2,*(FRenderTarget **)(in_ECX + 0x48),
                   *(FRenderTarget **)(in_ECX + 0x4c));
        UGlowEffect::DownFilter4Render
                  (in_ECX,param_1,param_2,(FRenderTarget *)FPlayerSceneNode::GlowAspectTex,
                   *(FRenderTarget **)(in_ECX + 0x44));
        uStack_104 = 0x10541d76;
        UGlowEffect::BloomRender
                  (in_ECX,param_1,param_2,*(FRenderTarget **)(in_ECX + 0x44),
                   *(FRenderTarget **)(in_ECX + 0x3c),1.0);
        (**(code **)(*(int *)param_2 + 4))();
        (**(code **)(*(int *)param_2 + 0xc))();
        if (DAT_10c44300 == (UProxyBitmapMaterial *)0x0) {
          pUStack_10c = (UClass *)0x10541db3;
          FName::FName((FName *)&uStack_104,0);
          pUStack_10c = &UProxyBitmapMaterial::PrivateStaticClass;
          DAT_10c44300 = (UProxyBitmapMaterial *)thunk_FUN_1053d270();
          uStack_104 = 0x10541dd7;
          thunk_FUN_10530420();
          uStack_104 = 0x10541de6;
          UProxyBitmapMaterial::SetTextureInterface(DAT_10c44300,*(FBaseTexture **)(in_ECX + 0x40));
        }
        if (DAT_10c442fc == (int *)0x0) {
          pUStack_10c = (UClass *)0x10541dff;
          FName::FName((FName *)&uStack_104,0);
          pUStack_10c = &UFinalBlend::PrivateStaticClass;
          DAT_10c442fc = (int *)thunk_FUN_1053d3f0();
          uStack_104 = 0x10541e23;
          thunk_FUN_10530420();
        }
        DAT_10c442fc[0x15e] = (int)DAT_10c44300;
        *(undefined1 *)(DAT_10c442fc + 0x15f) = 8;
        DAT_10c442fc[0x160] = DAT_10c442fc[0x160] & 0xfffffffe;
        DAT_10c442fc[0x160] = DAT_10c442fc[0x160] & 0xfffffffd;
        DAT_10c442fc[0x160] = DAT_10c442fc[0x160] & 0xfffffffb;
        local_28 = 0;
        local_24 = 0;
        local_20 = 0;
        iVar1 = *(int *)param_2;
        FSphere::FSphere((FSphere *)&pUStack_10c);
        (**(code **)(iVar1 + 0x24))();
        if (*(int *)GL2Shader_exref != 0) {
          (**(code **)(*(int *)param_2 + 0x54))();
        }
        pFVar2 = (FCanvasUtil *)
                 FCanvasUtil::FCanvasUtil(local_d8,(FRenderTarget *)(param_1 + 0xdc),param_2);
        local_8._0_1_ = 1;
        (**(code **)(*DAT_10c442fc + 0x7c))();
        (**(code **)(*DAT_10c442fc + 0x78))();
        FCanvasUtil::DrawTile(pFVar2);
        local_8 = (uint)local_8._1_3_ << 8;
        FCanvasUtil::~FCanvasUtil(local_d8);
        if (DAT_10c442f8 == (UProxyBitmapMaterial *)0x0) {
          FName::FName((FName *)&stack0xfffffe9c,0);
          DAT_10c442f8 = (UProxyBitmapMaterial *)thunk_FUN_1053d270();
          thunk_FUN_10530420();
        }
        UProxyBitmapMaterial::SetTextureInterface(DAT_10c442f8,*(FBaseTexture **)(in_ECX + 0x3c));
        if (DAT_10c442f4 == 0) {
          FName::FName((FName *)&stack0xfffffe9c,0);
          DAT_10c442f4 = thunk_FUN_1053d3f0();
          thunk_FUN_10530420();
        }
        *(UProxyBitmapMaterial **)(DAT_10c442f4 + 0x578) = DAT_10c442f8;
        *(undefined1 *)(DAT_10c442f4 + 0x57c) = 8;
        *(uint *)(DAT_10c442f4 + 0x580) = *(uint *)(DAT_10c442f4 + 0x580) & 0xfffffffd;
        *(uint *)(DAT_10c442f4 + 0x580) = *(uint *)(DAT_10c442f4 + 0x580) & 0xfffffffb;
        if (*(int *)GL2Shader_exref != 0) {
          (**(code **)(*(int *)param_2 + 0x54))();
        }
        local_18 = (FCanvasUtil *)
                   FCanvasUtil::FCanvasUtil(local_d8,(FRenderTarget *)(param_1 + 0xdc),param_2);
        local_8._0_1_ = 2;
        (**(code **)(*(int *)DAT_10c442f8 + 0x7c))();
        (**(code **)(*(int *)DAT_10c442f8 + 0x78))();
        FCanvasUtil::DrawTile(local_18);
        local_8 = (uint)local_8._1_3_ << 8;
        FCanvasUtil::~FCanvasUtil(local_d8);
        if (DAT_10c442f0 == (UProxyBitmapMaterial *)0x0) {
          FName::FName((FName *)&stack0xfffffe70,0);
          DAT_10c442f0 = (UProxyBitmapMaterial *)
                         thunk_FUN_1053d270(&UProxyBitmapMaterial::PrivateStaticClass,0xffffffff);
          thunk_FUN_10530420();
        }
        if (DAT_10c442ec == 0) {
          FName::FName((FName *)&stack0xfffffe70,0);
          DAT_10c442ec = thunk_FUN_1053d2f0(&UVertexColor::PrivateStaticClass,0xffffffff);
          thunk_FUN_10530420();
        }
        UProxyBitmapMaterial::SetTextureInterface(DAT_10c442f0,*(FBaseTexture **)(in_ECX + 0x4c));
        if (DAT_10c442e8 == 0) {
          FName::FName((FName *)&stack0xfffffe70,0);
          DAT_10c442e8 = thunk_FUN_1053d370(&UShader::PrivateStaticClass,0xffffffff);
          thunk_FUN_10530420();
          *(UProxyBitmapMaterial **)(DAT_10c442e8 + 0x578) = DAT_10c442f0;
          *(int *)(DAT_10c442e8 + 0x57c) = DAT_10c442ec;
        }
        *(int *)(DAT_10c442f4 + 0x578) = DAT_10c442e8;
        *(undefined1 *)(DAT_10c442f4 + 0x57c) = 2;
        *(uint *)(DAT_10c442f4 + 0x580) = *(uint *)(DAT_10c442f4 + 0x580) & 0xfffffffd;
        *(uint *)(DAT_10c442f4 + 0x580) = *(uint *)(DAT_10c442f4 + 0x580) & 0xfffffffb;
        if (*(int *)GL2Shader_exref != 0) {
          (**(code **)(*(int *)param_2 + 0x54))();
          (**(code **)(*(int *)param_2 + 0x74))();
        }
        pFVar2 = (FCanvasUtil *)
                 FCanvasUtil::FCanvasUtil(local_d8,(FRenderTarget *)(param_1 + 0xdc),param_2);
        local_8._0_1_ = 3;
        local_18 = (FCanvasUtil *)CONCAT13(in_ECX[0x74],0xffffff);
        iVar1 = (**(code **)(*(int *)DAT_10c442f0 + 0x7c))(0x3f800000);
        iVar1 = (**(code **)(*(int *)DAT_10c442f0 + 0x78))((float)iVar1);
        FCanvasUtil::DrawTile
                  (pFVar2,0,0,(float)*(int *)(param_1 + 0x94),(float)*(int *)(param_1 + 0x98),0,0,
                   (float)iVar1);
        local_8 = (uint)local_8._1_3_ << 8;
        FCanvasUtil::~FCanvasUtil(local_d8);
        ExceptionList = local_10;
        return;
      }
    }
  }
  ExceptionList = local_10;
  return;
}


// ==== 10542304 Catch@10542304

void Catch_10542304(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x28);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_10914c48);
}


// ==== 10542318 Catch@10542318

void Catch_10542318(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"UGlowEffect::PostRender");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 105424e0 FUN_105424e0

void FUN_105424e0(void)

{
  UObject *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1081b3a0;
  local_10 = ExceptionList;
  local_8 = 0;
  UTexture::__Client = (UClient *)0x0;
  ExceptionList = &local_10;
  UObject::Destroy(in_ECX);
  ExceptionList = local_10;
  return;
}


// ==== 10542530 Catch@10542530

void Catch_10542530(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 10542544 Catch@10542544

void Catch_10542544(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"UClient::Destroy");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10542590 FUN_10542590

void FUN_10542590(undefined4 param_1)

{
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1081b3b0;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  *(undefined4 *)(in_ECX + 0x34) = param_1;
  (**(code **)(**(int **)GConfig_exref + 8))(L"Video",L"Gamma",in_ECX + 0x84,L"Option.ini");
  ExceptionList = local_10;
  return;
}


// ==== 105425ff Catch@105425ff

void Catch_105425ff(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 10542613 Catch@10542613

void Catch_10542613(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"UClient::Init");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10542660 FUN_10542660

int FUN_10542660(int param_1)

{
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1081b3c0;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  if (7 < param_1) {
    ExceptionList = &local_10;
    appFailAssert("LODSet < LODSET_MAX",".\\UnCamMgr.cpp",0xe4);
  }
  if (*(int *)(in_ECX + 0xb0) == 0) {
    appFailAssert("PTextureDetail",".\\UnCamMgr.cpp",0xe5);
  }
  ExceptionList = local_10;
  return *(int *)(in_ECX + 0x88 + param_1 * 4) - *(int *)(*(int *)(in_ECX + 0xb0) + 0x44) / 2;
}


// ==== 105426f7 Catch@105426f7

void Catch_105426f7(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 1054270b Catch@1054270b

void Catch_1054270b(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"UClient::GetTextureLODBias");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10542760 FUN_10542760

void FUN_10542760(void)

{
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1081b3d9;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 105427d0 FUN_105427d0

void FUN_105427d0(int *param_1,undefined4 param_2)

{
  (**(code **)(*param_1 + 0x18))(param_2);
  return;
}


// ==== 105427f0 FUN_105427f0

void FUN_105427f0(void)

{
  UClass *pUVar1;
  UEnum *this;
  FName *pFVar2;
  UIntProperty *pUVar3;
  UFloatProperty *pUVar4;
  UBoolProperty *pUVar5;
  UByteProperty *pUVar6;
  UObject *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1081b3f0;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  FName::FName((FName *)&stack0xffffffcc,(ushort *)L"ETextureDetail",1);
  pUVar1 = UObject::GetClass(in_ECX);
  this = UEnum::operator_new(0x4c,pUVar1);
  if (this == (UEnum *)0x0) {
    this = (UEnum *)0x0;
  }
  else {
    UEnum::UEnum(this,(UEnum *)0x0);
    *(undefined ***)this = UEnum::vftable;
  }
  *(UEnum **)(in_ECX + 0xb0) = this;
  pFVar2 = (FName *)thunk_FUN_10370640();
  if (pFVar2 != (FName *)0x0) {
    FName::FName(pFVar2,(ushort *)L"UltraHigh",1);
  }
  pFVar2 = (FName *)thunk_FUN_10370640();
  if (pFVar2 != (FName *)0x0) {
    FName::FName(pFVar2,(ushort *)L"VeryHigh",1);
  }
  pFVar2 = (FName *)thunk_FUN_10370640();
  if (pFVar2 != (FName *)0x0) {
    FName::FName(pFVar2,(ushort *)L"High",1);
  }
  pFVar2 = (FName *)thunk_FUN_10370640();
  if (pFVar2 != (FName *)0x0) {
    FName::FName(pFVar2,(ushort *)L"Higher",1);
  }
  pFVar2 = (FName *)thunk_FUN_10370640();
  if (pFVar2 != (FName *)0x0) {
    FName::FName(pFVar2,(ushort *)L"Normal",1);
  }
  pFVar2 = (FName *)thunk_FUN_10370640();
  if (pFVar2 != (FName *)0x0) {
    FName::FName(pFVar2,(ushort *)L"Lower",1);
  }
  pFVar2 = (FName *)thunk_FUN_10370640();
  if (pFVar2 != (FName *)0x0) {
    FName::FName(pFVar2,(ushort *)&DAT_108b9120,1);
  }
  pFVar2 = (FName *)thunk_FUN_10370640();
  if (pFVar2 != (FName *)0x0) {
    FName::FName(pFVar2,(ushort *)L"VeryLow",1);
  }
  pFVar2 = (FName *)thunk_FUN_10370640();
  if (pFVar2 != (FName *)0x0) {
    FName::FName(pFVar2,(ushort *)L"UltraLow",1);
  }
  FName::FName((FName *)&stack0xffffffcc,(ushort *)L"WindowedViewportX",1);
  pUVar1 = UObject::GetClass(in_ECX);
  pUVar3 = UIntProperty::operator_new(0x78,pUVar1);
  if (pUVar3 != (UIntProperty *)0x0) {
    UIntProperty::UIntProperty(pUVar3,0,0x6c,(ushort *)L"Client",0x4000);
    *(undefined ***)pUVar3 = UIntProperty::vftable;
  }
  FName::FName((FName *)&stack0xffffffcc,(ushort *)L"WindowedViewportY",1);
  pUVar1 = UObject::GetClass(in_ECX);
  pUVar3 = UIntProperty::operator_new(0x78,pUVar1);
  if (pUVar3 != (UIntProperty *)0x0) {
    UIntProperty::UIntProperty(pUVar3,0,0x70,(ushort *)L"Client",0x4000);
    *(undefined ***)pUVar3 = UIntProperty::vftable;
  }
  FName::FName((FName *)&stack0xffffffcc,(ushort *)L"FullscreenViewportX",1);
  pUVar1 = UObject::GetClass(in_ECX);
  pUVar3 = UIntProperty::operator_new(0x78,pUVar1);
  if (pUVar3 != (UIntProperty *)0x0) {
    UIntProperty::UIntProperty(pUVar3,0,0x74,(ushort *)L"Client",0x4000);
    *(undefined ***)pUVar3 = UIntProperty::vftable;
  }
  FName::FName((FName *)&stack0xffffffcc,(ushort *)L"FullscreenViewportY",1);
  pUVar1 = UObject::GetClass(in_ECX);
  pUVar3 = UIntProperty::operator_new(0x78,pUVar1);
  if (pUVar3 != (UIntProperty *)0x0) {
    UIntProperty::UIntProperty(pUVar3,0,0x78,(ushort *)L"Client",0x4000);
    *(undefined ***)pUVar3 = UIntProperty::vftable;
  }
  FName::FName((FName *)&stack0xffffffcc,(ushort *)L"Brightness",1);
  pUVar1 = UObject::GetClass(in_ECX);
  pUVar4 = UFloatProperty::operator_new(0x78,pUVar1);
  if (pUVar4 != (UFloatProperty *)0x0) {
    UFloatProperty::UFloatProperty(pUVar4,0,0x7c,(ushort *)L"Display",0x4000);
    *(undefined ***)pUVar4 = UFloatProperty::vftable;
  }
  FName::FName((FName *)&stack0xffffffcc,(ushort *)L"Contrast",1);
  pUVar1 = UObject::GetClass(in_ECX);
  pUVar4 = UFloatProperty::operator_new(0x78,pUVar1);
  if (pUVar4 != (UFloatProperty *)0x0) {
    UFloatProperty::UFloatProperty(pUVar4,0,0x80,(ushort *)L"Display",0x4000);
    *(undefined ***)pUVar4 = UFloatProperty::vftable;
  }
  FName::FName((FName *)&stack0xffffffcc,(ushort *)L"Gamma",1);
  pUVar1 = UObject::GetClass(in_ECX);
  pUVar4 = UFloatProperty::operator_new(0x78,pUVar1);
  if (pUVar4 != (UFloatProperty *)0x0) {
    UFloatProperty::UFloatProperty(pUVar4,0,0x84,(ushort *)L"Display",0x4000);
    *(undefined ***)pUVar4 = UFloatProperty::vftable;
  }
  FName::FName((FName *)&stack0xffffffcc,(ushort *)L"CaptureMouse",1);
  pUVar1 = UObject::GetClass(in_ECX);
  pUVar5 = UBoolProperty::operator_new(0x7c,pUVar1);
  if (pUVar5 != (UBoolProperty *)0x0) {
    UBoolProperty::UBoolProperty(pUVar5,0,0x44,(ushort *)L"Display",0x4000);
    *(undefined ***)pUVar5 = UBoolProperty::vftable;
  }
  FName::FName((FName *)&stack0xffffffcc,(ushort *)L"TextureDetailWorld",1);
  pUVar1 = UObject::GetClass(in_ECX);
  pUVar6 = UByteProperty::operator_new(0x7c,pUVar1);
  if (pUVar6 != (UByteProperty *)0x0) {
    UByteProperty::UByteProperty
              (pUVar6,0,0x8c,(ushort *)L"Display",0x4000,*(UEnum **)(in_ECX + 0xb0));
    *(undefined ***)pUVar6 = UByteProperty::vftable;
  }
  FName::FName((FName *)&stack0xffffffcc,(ushort *)L"TextureDetailPlayerSkin",1);
  pUVar1 = UObject::GetClass(in_ECX);
  pUVar6 = UByteProperty::operator_new(0x7c,pUVar1);
  if (pUVar6 != (UByteProperty *)0x0) {
    UByteProperty::UByteProperty
              (pUVar6,0,0x90,(ushort *)L"Display",0x4000,*(UEnum **)(in_ECX + 0xb0));
    *(undefined ***)pUVar6 = UByteProperty::vftable;
  }
  FName::FName((FName *)&stack0xffffffcc,(ushort *)L"TextureDetailWeaponSkin",1);
  pUVar1 = UObject::GetClass(in_ECX);
  pUVar6 = UByteProperty::operator_new(0x7c,pUVar1);
  if (pUVar6 != (UByteProperty *)0x0) {
    UByteProperty::UByteProperty
              (pUVar6,0,0x94,(ushort *)L"Display",0x4000,*(UEnum **)(in_ECX + 0xb0));
    *(undefined ***)pUVar6 = UByteProperty::vftable;
  }
  FName::FName((FName *)&stack0xffffffcc,(ushort *)L"TextureDetailTerrain",1);
  pUVar1 = UObject::GetClass(in_ECX);
  pUVar6 = UByteProperty::operator_new(0x7c,pUVar1);
  if (pUVar6 != (UByteProperty *)0x0) {
    UByteProperty::UByteProperty
              (pUVar6,0,0x98,(ushort *)L"Display",0x4000,*(UEnum **)(in_ECX + 0xb0));
    *(undefined ***)pUVar6 = UByteProperty::vftable;
  }
  FName::FName((FName *)&stack0xffffffcc,(ushort *)L"TextureDetailInterface",1);
  pUVar1 = UObject::GetClass(in_ECX);
  pUVar6 = UByteProperty::operator_new(0x7c,pUVar1);
  if (pUVar6 != (UByteProperty *)0x0) {
    UByteProperty::UByteProperty
              (pUVar6,0,0x9c,(ushort *)L"Display",0x4000,*(UEnum **)(in_ECX + 0xb0));
    *(undefined ***)pUVar6 = UByteProperty::vftable;
  }
  FName::FName((FName *)&stack0xffffffcc,(ushort *)L"TextureDetailRenderMap",1);
  pUVar1 = UObject::GetClass(in_ECX);
  pUVar6 = UByteProperty::operator_new(0x7c,pUVar1);
  if (pUVar6 != (UByteProperty *)0x0) {
    UByteProperty::UByteProperty
              (pUVar6,0,0xa0,(ushort *)L"Display",0x4000,*(UEnum **)(in_ECX + 0xb0));
    *(undefined ***)pUVar6 = UByteProperty::vftable;
  }
  FName::FName((FName *)&stack0xffffffcc,(ushort *)L"TextureDetailLightmap",1);
  pUVar1 = UObject::GetClass(in_ECX);
  pUVar6 = UByteProperty::operator_new(0x7c,pUVar1);
  if (pUVar6 != (UByteProperty *)0x0) {
    UByteProperty::UByteProperty
              (pUVar6,0,0xa4,(ushort *)L"Display",0x4000,*(UEnum **)(in_ECX + 0xb0));
    *(undefined ***)pUVar6 = UByteProperty::vftable;
  }
  FName::FName((FName *)&stack0xffffffcc,(ushort *)L"ScreenFlashes",1);
  pUVar1 = UObject::GetClass(in_ECX);
  pUVar5 = UBoolProperty::operator_new(0x7c,pUVar1);
  if (pUVar5 != (UBoolProperty *)0x0) {
    UBoolProperty::UBoolProperty(pUVar5,0,0x48,(ushort *)L"Display",0x4000);
    *(undefined ***)pUVar5 = UBoolProperty::vftable;
  }
  FName::FName((FName *)&stack0xffffffcc,(ushort *)L"NoLighting",1);
  pUVar1 = UObject::GetClass(in_ECX);
  pUVar5 = UBoolProperty::operator_new(0x7c,pUVar1);
  if (pUVar5 != (UBoolProperty *)0x0) {
    UBoolProperty::UBoolProperty(pUVar5,0,0x4c,(ushort *)L"Display",0x4000);
    *(undefined ***)pUVar5 = UBoolProperty::vftable;
  }
  FName::FName((FName *)&stack0xffffffcc,(ushort *)L"MinDesiredFrameRate",1);
  pUVar1 = UObject::GetClass(in_ECX);
  pUVar4 = UFloatProperty::operator_new(0x78,pUVar1);
  if (pUVar4 != (UFloatProperty *)0x0) {
    UFloatProperty::UFloatProperty(pUVar4,0,0xa8,(ushort *)L"Display",0x4000);
    *(undefined ***)pUVar4 = UFloatProperty::vftable;
  }
  FName::FName((FName *)&stack0xffffffcc,(ushort *)L"Decals",1);
  pUVar1 = UObject::GetClass(in_ECX);
  pUVar5 = UBoolProperty::operator_new(0x7c,pUVar1);
  if (pUVar5 != (UBoolProperty *)0x0) {
    UBoolProperty::UBoolProperty(pUVar5,0,0x50,(ushort *)L"Display",0x4000);
    *(undefined ***)pUVar5 = UBoolProperty::vftable;
  }
  FName::FName((FName *)&stack0xffffffcc,(ushort *)L"NoDynamicLights",1);
  pUVar1 = UObject::GetClass(in_ECX);
  pUVar5 = UBoolProperty::operator_new(0x7c,pUVar1);
  if (pUVar5 != (UBoolProperty *)0x0) {
    UBoolProperty::UBoolProperty(pUVar5,0,0x54,(ushort *)L"Display",0x4000);
    *(undefined ***)pUVar5 = UBoolProperty::vftable;
  }
  FName::FName((FName *)&stack0xffffffcc,(ushort *)L"NoFractalAnim",1);
  pUVar1 = UObject::GetClass(in_ECX);
  pUVar5 = UBoolProperty::operator_new(0x7c,pUVar1);
  if (pUVar5 != (UBoolProperty *)0x0) {
    UBoolProperty::UBoolProperty(pUVar5,0,0x58,(ushort *)L"Display",0x4000);
    *(undefined ***)pUVar5 = UBoolProperty::vftable;
  }
  FName::FName((FName *)&stack0xffffffcc,(ushort *)L"Coronas",1);
  pUVar1 = UObject::GetClass(in_ECX);
  pUVar5 = UBoolProperty::operator_new(0x7c,pUVar1);
  if (pUVar5 != (UBoolProperty *)0x0) {
    UBoolProperty::UBoolProperty(pUVar5,0,0x5c,(ushort *)L"Display",0x4000);
    *(undefined ***)pUVar5 = UBoolProperty::vftable;
  }
  FName::FName((FName *)&stack0xffffffcc,(ushort *)L"DecoLayers",1);
  pUVar1 = UObject::GetClass(in_ECX);
  pUVar5 = UBoolProperty::operator_new(0x7c,pUVar1);
  if (pUVar5 != (UBoolProperty *)0x0) {
    UBoolProperty::UBoolProperty(pUVar5,0,0x60,(ushort *)L"Display",0x4000);
    *(undefined ***)pUVar5 = UBoolProperty::vftable;
  }
  FName::FName((FName *)&stack0xffffffcc,(ushort *)L"Projectors",1);
  pUVar1 = UObject::GetClass(in_ECX);
  pUVar5 = UBoolProperty::operator_new(0x7c,pUVar1);
  if (pUVar5 != (UBoolProperty *)0x0) {
    UBoolProperty::UBoolProperty(pUVar5,0,100,(ushort *)L"Display",0x4000);
    *(undefined ***)pUVar5 = UBoolProperty::vftable;
  }
  FName::FName((FName *)&stack0xffffffcc,(ushort *)L"ReportDynamicUploads",1);
  pUVar1 = UObject::GetClass(in_ECX);
  pUVar5 = UBoolProperty::operator_new(0x7c,pUVar1);
  if (pUVar5 != (UBoolProperty *)0x0) {
    UBoolProperty::UBoolProperty(pUVar5,0,0x68,(ushort *)L"Display",0x4000);
    *(undefined ***)pUVar5 = UBoolProperty::vftable;
  }
  ExceptionList = local_10;
  return;
}


// ==== 105430f0 Catch@105430f0

void Catch_105430f0(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 10543104 Catch@10543104

void Catch_10543104(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"UClient::StaticConstructor");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10543370 FUN_10543370

void FUN_10543370(byte param_1)

{
  UEnum *in_ECX;
  
  UEnum::~UEnum(in_ECX);
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x4c);
  }
  return;
}


// ==== 105433a0 FUN_105433a0

void FUN_105433a0(byte param_1)

{
  UByteProperty *in_ECX;
  
  UByteProperty::~UByteProperty(in_ECX);
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x7c);
  }
  return;
}


// ==== 105433d0 FUN_105433d0

void FUN_105433d0(byte param_1)

{
  UFloatProperty *in_ECX;
  
  UFloatProperty::~UFloatProperty(in_ECX);
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x78);
  }
  return;
}


// ==== 10543400 FUN_10543400

void FUN_10543400(void)

{
  int iVar1;
  int in_ECX;
  int iVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1081b400;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  for (iVar2 = 0; iVar2 < *(int *)(in_ECX + 0x3c); iVar2 = iVar2 + 1) {
    if (*(int *)(*(int *)(*(int *)(in_ECX + 0x38) + iVar2 * 4) + 0x7c) != 0) {
      iVar1 = *(int *)(*(int *)(in_ECX + 0x38) + iVar2 * 4);
      (**(code **)(**(int **)(iVar1 + 0x7c) + 0x84))(iVar1);
    }
  }
  ExceptionList = local_10;
  return;
}


// ==== 10543472 Catch@10543472

void Catch_10543472(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_10914c48);
}


// ==== 10543486 Catch@10543486

void Catch_10543486(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"UClient::Flush");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 105434d0 FUN_105434d0

void FUN_105434d0(void)

{
  int iVar1;
  int in_ECX;
  int iVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1081b410;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  for (iVar2 = 0; iVar2 < *(int *)(in_ECX + 0x3c); iVar2 = iVar2 + 1) {
    if (*(int *)(*(int *)(*(int *)(in_ECX + 0x38) + iVar2 * 4) + 0x7c) != 0) {
      iVar1 = *(int *)(*(int *)(in_ECX + 0x38) + iVar2 * 4);
      (**(code **)(**(int **)(iVar1 + 0x7c) + 0x90))(iVar1);
    }
  }
  ExceptionList = local_10;
  return;
}


// ==== 10543540 Catch@10543540

void Catch_10543540(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_10914c48);
}


// ==== 10543554 Catch@10543554

void Catch_10543554(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"UClient::UpdateGamma");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 105435a0 FUN_105435a0

void FUN_105435a0(void)

{
  int *piVar1;
  int in_ECX;
  int iVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1081b420;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  for (iVar2 = 0; iVar2 < *(int *)(in_ECX + 0x3c); iVar2 = iVar2 + 1) {
    piVar1 = *(int **)(*(int *)(*(int *)(in_ECX + 0x38) + iVar2 * 4) + 0x7c);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 0x94))();
    }
  }
  ExceptionList = local_10;
  return;
}


// ==== 10543608 Catch@10543608

void Catch_10543608(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_10914c48);
}


// ==== 1054361c Catch@1054361c

void Catch_1054361c(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"UClient::RestoreGamma");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10543660 FUN_10543660

undefined4 FUN_10543660(ushort *param_1)

{
  int *piVar1;
  int iVar2;
  FString *pFVar3;
  ushort *puVar4;
  UObject *in_ECX;
  undefined1 uVar5;
  float10 fVar6;
  float fVar7;
  undefined8 uVar8;
  FString local_38 [12];
  FString local_2c [16];
  undefined1 *local_1c;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_1081b466;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffbc;
  local_8 = 0;
  ExceptionList = &local_10;
  iVar2 = ParseCommand(&param_1,(ushort *)L"BRIGHTNESS");
  if (iVar2 == 0) {
    iVar2 = ParseCommand(&param_1,(ushort *)L"CONTRAST");
    if (iVar2 == 0) {
      iVar2 = ParseCommand(&param_1,(ushort *)L"GAMMA");
      if (iVar2 == 0) {
        ExceptionList = local_10;
        return 0;
      }
      if (*param_1 == 0x2b) {
        fVar7 = *(float *)(in_ECX + 0x84);
        if (NAN(fVar7) || 2.4 < fVar7 == (fVar7 == 2.4)) {
          *(float *)(in_ECX + 0x84) = *(float *)(in_ECX + 0x84) + 0.1;
        }
        else {
          *(undefined4 *)(in_ECX + 0x84) = 0x3f000000;
        }
      }
      else {
        if (*param_1 == 0) {
          fVar6 = (float10)1.7;
        }
        else {
          uVar8 = 0x402000003f000000;
          fVar7 = appAtof(param_1);
          fVar6 = (float10)thunk_FUN_103704b0(fVar7,uVar8);
        }
        *(float *)(in_ECX + 0x84) = (float)fVar6;
      }
      (**(code **)(**(int **)(in_ECX + 0x34) + 0x78))();
      UObject::SaveConfig(in_ECX,0x4000,(ushort *)0x0);
      if (*(int *)(in_ECX + 0x3c) == 0) {
        ExceptionList = local_10;
        return 1;
      }
      if (*(int *)(**(int **)(in_ECX + 0x38) + 0x3c) == 0) {
        ExceptionList = local_10;
        return 1;
      }
      pFVar3 = (FString *)
               FString::Printf((ushort *)local_38,L"Gamma %1.1f",(double)*(float *)(in_ECX + 0x84));
      uVar5 = 5;
      local_8._0_1_ = 5;
      puVar4 = FString::operator*(pFVar3);
      FString::FString(local_2c,puVar4);
      local_8._0_1_ = 6;
    }
    else {
      if (*param_1 == 0x2b) {
        if (*(float *)(in_ECX + 0x80) < 0.9) {
          *(float *)(in_ECX + 0x80) = *(float *)(in_ECX + 0x80) + 0.1;
        }
        else {
          *(undefined4 *)(in_ECX + 0x80) = 0;
        }
      }
      else {
        if (*param_1 == 0) {
          fVar6 = (float10)0.5;
        }
        else {
          uVar8 = 0x4000000000000000;
          fVar7 = appAtof(param_1);
          fVar6 = (float10)thunk_FUN_103704b0(fVar7,uVar8);
        }
        *(float *)(in_ECX + 0x80) = (float)fVar6;
      }
      (**(code **)(**(int **)(in_ECX + 0x34) + 0x78))();
      UObject::SaveConfig(in_ECX,0x4000,(ushort *)0x0);
      if (*(int *)(in_ECX + 0x3c) == 0) {
        ExceptionList = local_10;
        return 1;
      }
      if (*(int *)(**(int **)(in_ECX + 0x38) + 0x3c) == 0) {
        ExceptionList = local_10;
        return 1;
      }
      FUN_107a6660();
      pFVar3 = (FString *)FString::Printf((ushort *)local_38,L"Contrast %i");
      uVar5 = 3;
      local_8._0_1_ = 3;
      puVar4 = FString::operator*(pFVar3);
      FString::FString(local_2c,puVar4);
      local_8._0_1_ = 4;
    }
  }
  else {
    if (*param_1 == 0x2b) {
      if (*(float *)(in_ECX + 0x7c) < 0.9) {
        *(float *)(in_ECX + 0x7c) = *(float *)(in_ECX + 0x7c) + 0.1;
      }
      else {
        *(undefined4 *)(in_ECX + 0x7c) = 0;
      }
    }
    else {
      if (*param_1 == 0) {
        fVar6 = (float10)0.5;
      }
      else {
        uVar8 = 0x3f80000000000000;
        fVar7 = appAtof(param_1);
        fVar6 = (float10)thunk_FUN_103704b0(fVar7,uVar8);
      }
      *(float *)(in_ECX + 0x7c) = (float)fVar6;
    }
    (**(code **)(**(int **)(in_ECX + 0x34) + 0x78))();
    UObject::SaveConfig(in_ECX,0x4000,(ushort *)0x0);
    if (*(int *)(in_ECX + 0x3c) == 0) {
      ExceptionList = local_10;
      return 1;
    }
    if (*(int *)(**(int **)(in_ECX + 0x38) + 0x3c) == 0) {
      ExceptionList = local_10;
      return 1;
    }
    FUN_107a6660();
    pFVar3 = (FString *)FString::Printf((ushort *)local_38,L"Brightness %i");
    uVar5 = 1;
    local_8._0_1_ = 1;
    puVar4 = FString::operator*(pFVar3);
    FString::FString(local_2c,puVar4);
    local_8._0_1_ = 2;
  }
  local_1c = &stack0xffffffb8;
  piVar1 = *(int **)(in_ECX + 0x38);
  FName::FName((FName *)&stack0xffffffb8,0);
  APlayerController::eventClientMessage(*(APlayerController **)(*piVar1 + 0x3c),local_2c);
  local_8._0_1_ = uVar5;
  FString::~FString(local_2c);
  local_8 = (uint)local_8._1_3_ << 8;
  FString::~FString(local_38);
  ExceptionList = local_10;
  return 1;
}


// ==== 105439d7 Catch@105439d7

void Catch_105439d7(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 105439eb Catch@105439eb

void Catch_105439eb(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"UClient::Exec");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10543b00 FUN_10543b00

FArchive * FUN_10543b00(FArchive *param_1,FArray *param_2)

{
  int iVar1;
  undefined4 uVar2;
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1081b480;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffc8;
  local_8 = 0;
  ExceptionList = &local_10;
  FArray::CountBytes(param_2,param_1,4);
  iVar1 = FArchive::IsLoading(param_1);
  if (iVar1 == 0) {
    operator<<(param_1,(FCompactIndex *)(param_2 + 4));
    for (iVar1 = 0; iVar1 < *(int *)(param_2 + 4); iVar1 = iVar1 + 1) {
      thunk_FUN_105427d0(param_1,*(int *)param_2 + iVar1 * 4);
    }
  }
  else {
    operator<<(param_1,(FCompactIndex *)&local_18);
    for (iVar1 = 0; iVar1 < *(int *)(param_2 + 4); iVar1 = iVar1 + 1) {
    }
    FArray::Empty(param_2,4,local_18);
    for (iVar1 = 0; iVar1 < local_18; iVar1 = iVar1 + 1) {
      uVar2 = thunk_FUN_10371800(4,param_2);
      thunk_FUN_105427d0(param_1,uVar2);
    }
  }
  ExceptionList = local_10;
  return param_1;
}


// ==== 10543bd0 Catch@10543bd0

void Catch_10543bd0(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x24) = *(undefined4 *)(unaff_EBP + -0x28);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x24,&DAT_10914c48);
}


// ==== 10543be4 Catch@10543be4

void Catch_10543be4(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"TArray<<");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10543c70 FUN_10543c70

void FUN_10543c70(void)

{
  UObject *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1081b4ad;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  UObject::UObject(in_ECX);
  local_8 = 0;
  *(undefined ***)in_ECX = UClient::vftable;
  FArray::FArray((FArray *)(in_ECX + 0x38));
  UTexture::__Client = (UClient *)in_ECX;
  ExceptionList = local_10;
  return;
}


// ==== 10543cdd Catch@10543cdd

void Catch_10543cdd(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x20);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 10543cf1 Catch@10543cf1

void Catch_10543cf1(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"UClient::UClient");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10543d40 FUN_10543d40

void FUN_10543d40(FArchive *param_1)

{
  UObject *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1081b4c0;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  UObject::Serialize(in_ECX,param_1);
  thunk_FUN_10543b00(param_1,in_ECX + 0x38);
  ExceptionList = local_10;
  return;
}


// ==== 10543d9b Catch@10543d9b

void Catch_10543d9b(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 10543daf Catch@10543daf

void Catch_10543daf(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"UClient::Serialize");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10543df0 FUN_10543df0

void FUN_10543df0(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = &UTexture::PrivateStaticClass;
  in_ECX[1] = 0xffffffff;
  thunk_FUN_103737b0();
  return;
}


// ==== 10543e10 FUN_10543e10

void FUN_10543e10(void)

{
  uint *puVar1;
  UObject *in_ECX;
  float10 fVar2;
  int local_20;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1081b4d0;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  UObject::PostEditChange(in_ECX);
  fVar2 = (float10)thunk_FUN_103704b0(*(undefined4 *)(in_ECX + 0x7c),0,0x3f800000);
  *(float *)(in_ECX + 0x7c) = (float)fVar2;
  fVar2 = (float10)thunk_FUN_103704b0(*(undefined4 *)(in_ECX + 0x80),0,0x40000000);
  *(float *)(in_ECX + 0x80) = (float)fVar2;
  fVar2 = (float10)thunk_FUN_103704b0(*(undefined4 *)(in_ECX + 0x84),0x3f000000,0x40200000);
  *(float *)(in_ECX + 0x84) = (float)fVar2;
  (**(code **)(**(int **)(in_ECX + 0x34) + 0x78))();
  thunk_FUN_10543df0();
  while( true ) {
    if (*(int *)(GObjObjects_exref + 4) <= local_20) break;
    puVar1 = (uint *)(*(int *)(*(int *)GObjObjects_exref + local_20 * 4) + 0x5c0);
    *puVar1 = *puVar1 | 0x80;
    thunk_FUN_103737b0();
  }
  UObject::SaveConfig(in_ECX,0x4000,(ushort *)0x0);
  ExceptionList = local_10;
  return;
}


// ==== 10543f10 Catch@10543f10

void Catch_10543f10(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 10543f24 Catch@10543f24

void Catch_10543f24(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"UClient::PostEditChange");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10543f90 FUN_10543f90

void FUN_10543f90(void)

{
  UFactory *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1081b4e9;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  UFactory::UFactory(in_ECX);
  *(undefined ***)in_ECX = UL2TextureFactory::vftable;
  ExceptionList = local_10;
  return;
}


// ==== 10543fe7 Catch@10543fe7

void Catch_10543fe7(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 10543ffb Catch@10543ffb

void Catch_10543ffb(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"UL2TextureFactory::UL2TextureFactory");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


