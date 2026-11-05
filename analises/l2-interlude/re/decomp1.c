// ==== 0x104ef470 FUN_104ef470

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __fastcall FUN_104ef470(float param_1)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined1 *puVar6;
  int iVar7;
  int iVar8;
  undefined4 *unaff_FS_OFFSET;
  float10 fVar9;
  int iStack_28;
  float fStack_24;
  float fStack_1c;
  float fStack_18;
  undefined1 *puStack_14;
  undefined4 uStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &UNK_10818bd0;
  uStack_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_10;
  puStack_14 = &stack0xffffffb4;
  uStack_8 = 0;
  if ((*(float *)((int)param_1 + 0x6b8) == (float)_DAT_10854b60) ||
     ((iVar7 = *(int *)((int)param_1 + 0x52c), iVar7 != 0xb && (*(int *)((int)param_1 + 0x520) == 0)
      ))) {
LAB_104ef510:
    *unaff_FS_OFFSET = uStack_10;
    return 0;
  }
  fStack_1c = 0.0;
  fStack_24 = 0.0;
  iStack_28 = -1;
  puVar6 = &stack0xffffffb4;
  if ((*(int *)((int)param_1 + 0x534) < 2) &&
     ((iVar7 = func_0x10302fa9(*(undefined4 *)((int)param_1 + 0x4f8),
                               *(undefined4 *)((int)param_1 + 0x4fc)), iVar7 < 1 ||
      (iVar7 = *(int *)((int)param_1 + 0x52c), puVar6 = puStack_14, iVar7 == 0)))) {
    func_0x103091a1(1);
    goto LAB_104ef510;
  }
  puStack_14 = puVar6;
  if ((iVar7 != 0xb) && (iVar7 != 0xe)) {
    fStack_18 = param_1;
    func_0x1031109f(&fStack_18);
  }
  uStack_8 = CONCAT31(uStack_8._1_3_,1);
  if (*(int **)((int)param_1 + 0x104) != (int *)0x0) {
    (**(code **)(**(int **)((int)param_1 + 0x104) + 0x98))(param_1);
  }
  iVar7 = *(int *)((int)param_1 + 0x534);
  while( true ) {
    fVar4 = 0.0;
    iVar7 = iVar7 + -1;
    if (iVar7 < 0) break;
    iVar8 = func_0x10303f85(*(undefined4 *)((int)param_1 + 0x580 + iVar7 * 4));
    if (((iVar8 == 0) || (*(float *)(iVar8 + 0x18) <= 0.0)) ||
       (*(int *)((int)param_1 + 0x504) == iVar7)) {
      *(undefined4 *)((int)param_1 + 0x58c + iVar7 * 4) = 0;
    }
    else {
      fStack_18 = (float)*(int *)(iVar8 + 0x14) / *(float *)(iVar8 + 0x18);
      *(float *)((int)param_1 + 0x58c + iVar7 * 4) = fStack_18;
      if (fStack_24 == 0.0) {
        fVar9 = (float10)func_0x103142d1(*(undefined4 *)((int)param_1 + 0x580 + iVar7 * 4),
                                         (int)param_1 + 0x598);
        fStack_24 = (float)(fVar9 * (float10)*(float *)((int)param_1 + 0x58c + iVar7 * 4));
        iStack_28 = iVar7;
        fStack_1c = fStack_24;
      }
      else {
        fStack_1c = fStack_18 + fStack_1c;
      }
    }
  }
  if (fStack_1c == 0.0) {
    iVar7 = *(int *)((int)param_1 + 0x534);
    fStack_24 = *(float *)((int)param_1 + 0x588 + iVar7 * 4);
    iStack_28 = iVar7 + -1;
    for (iVar8 = 0; iVar8 < iVar7; iVar8 = iVar8 + 1) {
      fStack_1c = *(float *)((int)param_1 + 0x58c + iVar8 * 4) + fStack_1c;
    }
  }
  if (*(int *)((int)param_1 + 0x4f0) == 0) {
    iVar7 = *(int *)((int)param_1 + 0x52c);
    fVar2 = _DAT_108a53f0;
    if ((((iVar7 == 2) || (iVar7 == 10)) || (iVar7 == 5)) ||
       (((iVar7 == 8 || (fVar2 = fVar4, iVar7 == 3)) ||
        ((iVar7 == 0xc || (fVar2 = _DAT_108a91a0, fVar4 = _DAT_10884cf0, iVar7 != 0xe))))))
    goto LAB_104ef69e;
  }
  else {
    fVar2 = *(float *)(*(int *)((int)param_1 + 0x4f0) + 0x74);
    if ((_DAT_108a91a0 <= fVar2) ||
       (fVar2 = fVar4, fVar4 = _DAT_108a91a0, *(int *)((int)param_1 + 0x52c) == 3))
    goto LAB_104ef69e;
  }
  fVar2 = fVar4;
LAB_104ef69e:
  iVar7 = *(int *)((int)param_1 + 0x504);
  fVar4 = *(float *)((int)param_1 + 0x510) - fVar2;
  if (iVar7 < 0) {
    *(float *)((int)param_1 + 0x524) = fStack_1c / (fVar4 - (float)_DAT_108a0530);
    *(float *)((int)param_1 + 0x518) = _DAT_108a052c;
  }
  else {
    fVar5 = (float)_DAT_108a0530;
    if (*(int *)((int)param_1 + 0x52c) == 0xd) {
      *(float *)((int)param_1 + 0x58c + iVar7 * 4) = fVar4 - (fStack_1c + fVar5);
      fVar4 = _DAT_108a052c;
    }
    else {
      *(float *)((int)param_1 + 0x58c + iVar7 * 4) =
           fVar4 - (fStack_1c + fVar5) / *(float *)((int)param_1 + 0x6b8);
      fVar4 = fVar5 / *(float *)((int)param_1 + 0x6b8);
    }
    *(float *)((int)param_1 + 0x518) = fVar4;
    pfVar1 = (float *)((int)param_1 + 0x58c + *(int *)((int)param_1 + 0x504) * 4);
    if ((0.0 <= *pfVar1) ||
       (fVar4 = (*(float *)((int)param_1 + 0x510) - fVar2) -
                fVar5 / *(float *)((int)param_1 + 0x6b8), fVar4 <= (float)_DAT_108a74a8)) {
      *(undefined4 *)((int)param_1 + 0x524) = *(undefined4 *)((int)param_1 + 0x6b8);
    }
    else {
      *(float *)((int)param_1 + 0x524) = fStack_1c / fVar4;
      *pfVar1 = 0.0;
    }
  }
  fVar5 = _DAT_108a91a0;
  fStack_18 = *(float *)((int)param_1 + 0x518);
  fVar4 = (float)_DAT_108a9188;
  iVar7 = 0;
LAB_104ef854:
  do {
    if (*(int *)((int)param_1 + 0x534) <= iVar7) {
      uStack_8 = 0;
      if (*(int *)((int)param_1 + 0x52c) != 0) {
        func_0x103141e6();
      }
      *unaff_FS_OFFSET = uStack_10;
      return 1;
    }
    if (iStack_28 == iVar7) {
      if (*(float *)((int)param_1 + 0x524) <= 0.0) {
        *(float *)((int)param_1 + 0x514) = fStack_18;
      }
      else if (*(int *)((int)param_1 + 0x52c) == 0xd) {
        *(float *)((int)param_1 + 0x514) = fStack_18 + fStack_24;
      }
      else {
        *(float *)((int)param_1 + 0x514) = fStack_18 + fStack_24 / *(float *)((int)param_1 + 0x524);
      }
    }
    if ((*(int *)((int)param_1 + 0x504) == iVar7) || (*(float *)((int)param_1 + 0x524) <= 0.0)) {
      *(float *)((int)param_1 + 0x58c + iVar7 * 4) =
           fStack_18 + *(float *)((int)param_1 + 0x58c + iVar7 * 4);
    }
    else {
      fVar3 = *(float *)((int)param_1 + 0x58c + iVar7 * 4);
      if (*(int *)((int)param_1 + 0x52c) != 0xd) {
        fVar3 = fVar3 / *(float *)((int)param_1 + 0x524);
      }
      *(float *)((int)param_1 + 0x58c + iVar7 * 4) = fVar3 + fStack_18;
      if (((fVar5 <= fVar2) && (iVar7 == 0)) && (1 < *(int *)((int)param_1 + 0x534))) {
        *(float *)((int)param_1 + 0x58c) =
             *(float *)((int)param_1 + 0x58c) -
             (*(float *)((int)param_1 + 0x58c) / (*(float *)((int)param_1 + 0x510) - fVar2)) * fVar4
        ;
        fStack_18 = *(float *)((int)param_1 + 0x58c);
        iVar7 = 1;
        goto LAB_104ef854;
      }
    }
    fStack_18 = *(float *)((int)param_1 + 0x58c + iVar7 * 4);
    iVar7 = iVar7 + 1;
  } while( true );
}


// ==== 0x10631597 FUN_10631597

void FUN_10631597(void)

{
  float *pfVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int unaff_EBP;
  int unaff_ESI;
  int *unaff_EDI;
  undefined4 *unaff_FS_OFFSET;
  float10 fVar5;
  
  _appUnwindf__YAXPBGZZ(&UNK_10851d80,&UNK_108da450);
  func_0x107a5ebf(0,0);
  *(undefined1 *)(unaff_EBP + -4) = 3;
  fVar5 = (float10)func_0x103088ff();
  *(float *)(unaff_EBP + 0x74) = (float)fVar5;
  fVar5 = (float10)func_0x10311d74();
  *(float *)(unaff_EBP + 0x70) = (float)fVar5;
  if (*(float *)(unaff_EBP + 0x70) == 0.0) {
    if (*(int **)(unaff_ESI + 0x104) != unaff_EDI) {
      (**(code **)(**(int **)(unaff_ESI + 0x104) + 0x98))();
    }
    fVar5 = (float10)func_0x10302d1f(*(undefined4 *)
                                      (unaff_ESI + 0x9ac + (uint)*(byte *)(unaff_ESI + 0x71d) * 4),1
                                    );
    *(float *)(unaff_EBP + 0x70) = (float)fVar5;
  }
  pfVar1 = (float *)(unaff_ESI + 0x74c);
  (**(code **)(**(int **)(unaff_ESI + 0x63c) + 0x2b4))
            (*(undefined4 *)(unaff_ESI + 0x1bc),*(undefined4 *)(unaff_ESI + 0x1c0),
             *(undefined4 *)(unaff_ESI + 0x1c4),pfVar1);
  if (*(float *)(unaff_EBP + 0x74) <= *(float *)(unaff_EBP + 0x70)) {
    *(undefined4 *)(unaff_ESI + 0x32c) = *(undefined4 *)(unaff_ESI + 0x1c8);
    *(undefined4 *)(unaff_ESI + 0x330) = *(undefined4 *)(unaff_ESI + 0x1cc);
    *(undefined4 *)(unaff_ESI + 0x334) = *(undefined4 *)(unaff_ESI + 0x1d0);
    *(float *)(unaff_EBP + 0x74) = *pfVar1 - *(float *)(unaff_ESI + 0x1bc);
    *(float *)(unaff_EBP + 0x6c) = *(float *)(unaff_ESI + 0x750) - *(float *)(unaff_ESI + 0x1c0);
    *(float *)(unaff_EBP + 0x70) = *(float *)(unaff_ESI + 0x754) - *(float *)(unaff_ESI + 0x1c4);
    *(undefined4 *)(unaff_EBP + 0xc) = *(undefined4 *)(unaff_EBP + 0x74);
    *(undefined4 *)(unaff_EBP + 0x10) = *(undefined4 *)(unaff_EBP + 0x6c);
    *(undefined4 *)(unaff_EBP + 0x14) = *(undefined4 *)(unaff_EBP + 0x70);
    iVar3 = _Rotation_FVector__QAE_AVFRotator__XZ(unaff_EBP + -0x4c);
    *(undefined4 *)(unaff_ESI + 0x330) = *(undefined4 *)(iVar3 + 4);
  }
  else {
    iVar3 = func_0x1030f7cc(*(undefined4 *)(unaff_ESI + 0x668));
    if (iVar3 == 0) {
      func_0x1030bef6();
    }
    else {
      *(undefined4 *)(iVar3 + 0x4e4) = *(undefined4 *)(unaff_ESI + 0x63c);
      *(int *)(unaff_EBP + 0x74) = iVar3;
      func_0x1031109f(unaff_EBP + 0x74);
      func_0x10305f79(iVar3,*(undefined4 *)(unaff_ESI + 0x434),0);
      *(float *)(iVar3 + 0x4e8) = *pfVar1;
      *(undefined4 *)(iVar3 + 0x4ec) = *(undefined4 *)(unaff_ESI + 0x750);
      *(undefined4 *)(iVar3 + 0x4f0) = *(undefined4 *)(unaff_ESI + 0x754);
      *(undefined1 *)(unaff_ESI + 0x394) = 5;
      iVar2 = *(int *)(unaff_ESI + 0x760);
      if (0 < iVar2) {
        *(float *)(unaff_EBP + 0x74) = *pfVar1 - *(float *)(iVar3 + 0x1bc);
        *(float *)(unaff_EBP + 0x6c) = *(float *)(unaff_ESI + 0x750) - *(float *)(iVar3 + 0x1c0);
        *(float *)(unaff_EBP + 0x70) = *(float *)(unaff_ESI + 0x754) - *(float *)(iVar3 + 0x1c4);
        *(undefined4 *)(unaff_EBP + 0x44) = *(undefined4 *)(unaff_EBP + 0x74);
        *(undefined4 *)(unaff_EBP + 0x48) = *(undefined4 *)(unaff_EBP + 0x6c);
        *(undefined4 *)(unaff_EBP + 0x4c) = *(undefined4 *)(unaff_EBP + 0x70);
        fVar5 = (float10)func_0x10313a1b(iVar2,*(undefined4 *)(unaff_EBP + 0x44),
                                         *(undefined4 *)(unaff_EBP + 0x48),
                                         *(undefined4 *)(unaff_EBP + 0x4c));
        *(float *)(unaff_ESI + 0x764) = (float)fVar5;
      }
      *(int *)(unaff_EBP + 0x6c) = iVar3;
      func_0x1031109f(unaff_EBP + 0x6c);
    }
  }
  uVar4 = func_0x10305a60(unaff_EBP + -0x24);
  iVar3 = unaff_EBP + -0x30;
  func_0x10304d04(iVar3,0,uVar4);
  iVar3 = __9FName__QBEHABV0__Z(iVar3);
  if (iVar3 != 0) {
    *(undefined1 *)(unaff_ESI + 0x394) = 6;
  }
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  *unaff_FS_OFFSET = *(undefined4 *)(unaff_EBP + -0xc);
  return;
}


// ==== 0x104f2840 FUN_104f2840

undefined4 __thiscall
FUN_104f2840(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6,int param_7)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 unaff_retaddr;
  
  func_0x103091a1(1);
  _Empty_FArray__QAEXHH_Z(4,0);
  *(undefined4 *)(param_1 + 0x4f8) = unaff_retaddr;
  *(undefined4 *)(param_1 + 0x4fc) = param_2;
  *(int *)(param_1 + 0x4f4) = param_7;
  if (param_7 == 0) {
    uVar1 = func_0x1030b816(unaff_retaddr,param_2);
    *(undefined4 *)(param_1 + 0x4f4) = uVar1;
  }
  if (*(int *)(param_1 + 0x4f4) != 0) {
    __0FName__QAE_PBGW4EFindName___Z(&UNK_108a07b8,1);
    iVar2 = __9FName__QBEHABV0__Z(&stack0x00000000);
    if (iVar2 != 0) {
      iVar3 = _GetIndex_FName__QBEHXZ();
      iVar2 = 0;
      if (iVar3 != 0) {
        uVar1 = _GetIndex_FName__QBEHXZ();
        iVar2 = _GetEntry_FName__SAPAUFNameEntry__H_Z(uVar1);
        iVar2 = iVar2 + 0xc;
      }
      iVar2 = _StaticFindObject_UObject__SAPAV1_PAVUClass__PAV1_PBGH_Z
                        (&_PrivateStaticClass_USkillVisualEffect__0VUClass__A,0xffffffff,iVar2,0);
      if ((iVar2 == 0) ||
         (iVar3 = _IsA_UObject__QBEHPAVUClass___Z
                            (&_PrivateStaticClass_USkillVisualEffect__0VUClass__A), iVar3 == 0)) {
        iVar2 = 0;
      }
      *(int *)(param_1 + 0x4f0) = iVar2;
      if (iVar2 == 0) {
        iVar3 = _GetIndex_FName__QBEHXZ();
        iVar2 = 0;
        if (iVar3 != 0) {
          uVar1 = _GetIndex_FName__QBEHXZ();
          iVar2 = _GetEntry_FName__SAPAUFNameEntry__H_Z(uVar1);
          iVar2 = iVar2 + 0xc;
        }
        iVar2 = _StaticLoadObject_UObject__SAPAV1_PAVUClass__PAV1_PBG2KPAVUPackageMap___Z
                          (&_PrivateStaticClass_USkillVisualEffect__0VUClass__A,0,iVar2,0,0,0);
        if ((iVar2 == 0) ||
           (iVar3 = _IsA_UObject__QBEHPAVUClass___Z
                              (&_PrivateStaticClass_USkillVisualEffect__0VUClass__A), iVar3 == 0)) {
          iVar2 = 0;
        }
        *(int *)(param_1 + 0x4f0) = iVar2;
      }
    }
    uVar1 = *(undefined4 *)(*(int *)(param_1 + 0x4f4) + 0x30);
    *(undefined4 *)(param_1 + 0x510) = param_3;
    *(undefined4 *)(param_1 + 0x524) = param_6;
    *(undefined4 *)(param_1 + 0x52c) = uVar1;
    *(undefined4 *)(param_1 + 0x51c) = 0;
    *(undefined4 *)(param_1 + 0x538) = *(undefined4 *)(param_1 + 0x304);
    *(undefined4 *)(param_1 + 0x520) = param_5;
    *(undefined4 *)(param_1 + 0x53c) = *(undefined4 *)(param_1 + 0x308);
    *(undefined4 *)(param_1 + 0x528) = 0;
    *(undefined4 *)(param_1 + 0x540) = *(undefined4 *)(param_1 + 0x30c);
    puVar4 = (undefined4 *)__0FRotator__QAE_HHH_Z(0,0x50000,0);
    *(undefined4 *)(param_1 + 0x544) = *puVar4;
    *(undefined4 *)(param_1 + 0x548) = puVar4[1];
    *(undefined4 *)(param_1 + 0x54c) = puVar4[2];
    if (((*(byte *)(param_1 + 0x694) & 4) != 0) &&
       (((iVar2 = *(int *)(param_1 + 0x69c), iVar2 == 0x2fb3 || (iVar2 == 0x3057)) ||
        (iVar2 == 0x3054)))) {
      *(undefined4 *)(param_1 + 0x538) = *(undefined4 *)(param_1 + 0x304);
      *(undefined4 *)(param_1 + 0x53c) = *(undefined4 *)(param_1 + 0x308);
      *(undefined4 *)(param_1 + 0x540) = *(undefined4 *)(param_1 + 0x30c);
      puVar4 = (undefined4 *)__0FRotator__QAE_HHH_Z(0,0x3a2e,0);
      *(undefined4 *)(param_1 + 0x544) = *puVar4;
      *(undefined4 *)(param_1 + 0x548) = puVar4[1];
      *(undefined4 *)(param_1 + 0x54c) = puVar4[2];
    }
    return 1;
  }
  return 0;
}


// ==== 0x10511ab0 FUN_10511ab0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_10511ab0(int *param_1,float param_2)

{
  float *pfVar1;
  int iVar2;
  undefined1 *puVar3;
  int *piVar4;
  int iVar5;
  int **ppiVar6;
  undefined4 *unaff_FS_OFFSET;
  int *piStack_44;
  int *piStack_40;
  float fStack_3c;
  int *piStack_38;
  float fStack_34;
  int *piStack_30;
  int iStack_24;
  int *piStack_20;
  int *piStack_1c;
  float fStack_18;
  undefined1 *puStack_14;
  undefined4 uStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &UNK_10818d90;
  uStack_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_10;
  puStack_14 = &stack0xffffffb0;
  uStack_8 = 0;
  if ((float)param_1[0x147] == 0.0) {
    puStack_14 = &stack0xffffffb0;
    piVar4 = (int *)__0FRotator__QAE_HHH_Z(0,0,0);
    param_1[0x19f] = *piVar4;
    param_1[0x1a0] = piVar4[1];
    param_1[0x1a1] = piVar4[2];
    param_1[0x167] = 0;
    param_1[0x168] = 0;
    if (param_1[0x13c] == 0) {
      func_0x10311cca();
    }
    else {
      func_0x10306c35(param_1,param_1[0x148]);
    }
    param_1[0x14a] = 3;
    func_0x10309ecb(param_1[0x151],param_1[0x152],param_1[0x153]);
    if (*(int *)_GL2FFEffectUse__3HA_exref != 0) {
      iVar5 = func_0x1030b816(param_1[0x13e],param_1[0x13f]);
      if (((param_1[0x536] != 0) && ((*(byte *)(param_1[0x536] + 0x438) & 1) != 0)) &&
         (-1 < *(int *)(iVar5 + 0x70))) {
        iVar5 = param_1[0x14b];
        if (((iVar5 == 2) || (iVar5 == 10)) || ((iVar5 == 5 || (iVar5 == 8)))) {
          piStack_1c = (int *)((float)param_1[0x145] - (float)_DAT_108ac430);
          (**(code **)(*(int *)**(undefined4 **)(*(int *)(_DAT_10c51044 + 0x54) + 0x38) + 0xb0))
                    (0xc,piStack_1c);
        }
        else {
          (**(code **)(*(int *)**(undefined4 **)(*(int *)(_DAT_10c51044 + 0x54) + 0x38) + 0xb0))
                    (0xc,param_1[0x145]);
        }
      }
    }
  }
  else {
    puVar3 = &stack0xffffffb0;
    if (param_1[0x169] != 0) {
      if (param_1[0x13c] == 0) {
        func_0x103113bf();
      }
      else {
        puStack_14 = &stack0xffffffb0;
        func_0x1030ad3f(param_1,param_1[0x148]);
      }
      param_1[0x169] = 0;
      puVar3 = puStack_14;
    }
    puStack_14 = puVar3;
    if (param_1[0x168] != 0) {
      param_1[0x143] = param_1[0x143] + 1;
      if (param_1[0x13c] == 0) {
        func_0x10313610();
      }
      else {
        func_0x10311130(param_1);
      }
      param_1[0x168] = 0;
    }
    if (param_1[0x167] != 0) {
      func_0x1030f457();
      param_1[0x167] = 0;
    }
  }
  if ((param_1[0x14b] == 0xc) || (param_1[0x14b] == 0xe)) {
    if ((param_1[0x14d] + -1 <= param_1[0x140]) ||
       ((param_1[0x15e] == 0 || (iVar5 = _IsZero_FVector__QBEHXZ(), iVar5 != 0))))
    goto LAB_10511e06;
    param_1[0xcb] = param_1[0x72];
    param_1[0xcc] = param_1[0x73];
    param_1[0xcd] = param_1[0x74];
    pfVar1 = (float *)param_1[0x15d];
    piStack_44 = (int *)(*pfVar1 - (float)param_1[0x6f]);
    piStack_40 = (int *)(pfVar1[1] - (float)param_1[0x70]);
    fStack_3c = pfVar1[2] - (float)param_1[0x71];
    ppiVar6 = &piStack_38;
    piStack_20 = piStack_44;
    piStack_1c = piStack_40;
    fStack_18 = fStack_3c;
  }
  else {
    piVar4 = (int *)param_1[0x148];
    if ((((piVar4 == (int *)0x0) || (param_1 == piVar4)) || (param_1[0x14d] <= param_1[0x140])) ||
       ((param_1[0x13e] == 0x1397 && (param_1[0x140] != 0)))) goto LAB_10511e06;
    param_1[0xcb] = param_1[0x72];
    param_1[0xcc] = param_1[0x73];
    param_1[0xcd] = param_1[0x74];
    piStack_38 = (int *)((float)piVar4[0x6f] - (float)param_1[0x6f]);
    fStack_34 = (float)piVar4[0x70] - (float)param_1[0x70];
    piStack_30 = (int *)((float)piVar4[0x71] - (float)param_1[0x71]);
    ppiVar6 = &piStack_44;
    piStack_20 = piStack_30;
    piStack_1c = piStack_38;
    fStack_18 = fStack_34;
  }
  iVar5 = _Rotation_FVector__QAE_AVFRotator__XZ(ppiVar6);
  param_1[0xcc] = *(int *)(iVar5 + 4);
LAB_10511e06:
  piStack_1c = (int *)param_1[0x149];
  if (param_1[0x14b] == 0xd) {
    piStack_1c = (int *)0x3f800000;
  }
  iVar5 = 0;
  do {
    if (((float)param_1[0x147] != 0.0) &&
       ((float)param_1[0x147] <= (float)param_1[param_1[0x140] + 0x163])) goto LAB_10511fac;
    param_1[0x140] = param_1[0x140] + 1;
    iVar2 = param_1[0x140];
    if (param_1[0x14d] <= iVar2) {
      __0FName__QAE_W4EName___Z(0);
      iVar5 = __8FName__QBEHABV0__Z(&piStack_20);
      if (iVar5 != 0) {
        param_1[0x167] = 2;
        func_0x1030f457();
        param_1[0x167] = 0;
      }
      param_1[0x5d8] = param_1[*(byte *)((int)param_1 + 0x71d) + 0x1eb];
      param_1[0x5d9] = param_1[*(byte *)((int)param_1 + 0x71d) + 0x1eb];
      *(undefined1 *)(param_1 + 0xe5) = 0;
      param_1[0x18b] = 0;
      param_1[399] = 0;
      func_0x10309ecb(param_1[0x14e],param_1[0x14f],param_1[0x150]);
      func_0x10311f1d();
      if ((param_1[0x148] != 0) && (*(int *)(param_1[0x148] + 0x380) != 0)) {
        piStack_20 = param_1;
        func_0x1030f952(&piStack_20);
      }
      func_0x103091a1(1);
      for (iStack_24 = 0; iStack_24 < param_1[0xdd]; iStack_24 = iStack_24 + 1) {
      }
      _Empty_FArray__QAEXHH_Z(4,0);
      goto LAB_10511fac;
    }
  } while ((float)param_1[iVar2 + 0x163] <= 0.0);
  if ((float)param_1[0x147] == 0.0) {
    iVar5 = param_1[0x146];
  }
  fStack_18 = (float)iVar5;
  (**(code **)(*param_1 + 0x328))
            (0,param_1[iVar2 + 0x160],piStack_1c,iVar5,iVar2 == param_1[0x141],1);
LAB_10511fac:
  param_1[0x147] = (int)(param_2 + (float)param_1[0x147]);
  *unaff_FS_OFFSET = uStack_10;
  return;
}


