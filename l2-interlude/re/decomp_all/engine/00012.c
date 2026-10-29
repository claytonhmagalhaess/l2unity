// ==== 103147ae UClient::PostEditChange

/* public: virtual void __thiscall UClient::PostEditChange(void) */

void __thiscall UClient::PostEditChange(UClient *this)

{
  uint *puVar1;
  float10 fVar2;
  int iStack_20;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x147ae  6763  ?PostEditChange@UClient@@UAEXXZ */
  puStack_c = &LAB_1081b4d0;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  ExceptionList = &pvStack_10;
  UObject::PostEditChange((UObject *)this);
  fVar2 = (float10)thunk_FUN_103704b0(*(undefined4 *)(this + 0x7c),0,0x3f800000);
  *(float *)(this + 0x7c) = (float)fVar2;
  fVar2 = (float10)thunk_FUN_103704b0(*(undefined4 *)(this + 0x80),0,0x40000000);
  *(float *)(this + 0x80) = (float)fVar2;
  fVar2 = (float10)thunk_FUN_103704b0(*(undefined4 *)(this + 0x84),0x3f000000,0x40200000);
  *(float *)(this + 0x84) = (float)fVar2;
  (**(code **)(**(int **)(this + 0x34) + 0x78))();
  thunk_FUN_10543df0();
  while( true ) {
    if (*(int *)(GObjObjects_exref + 4) <= iStack_20) break;
    puVar1 = (uint *)(*(int *)(*(int *)GObjObjects_exref + iStack_20 * 4) + 0x5c0);
    *puVar1 = *puVar1 | 0x80;
    thunk_FUN_103737b0();
  }
  UObject::SaveConfig((UObject *)this,0x4000,(ushort *)0x0);
  ExceptionList = pvStack_10;
  return;
}


// ==== 103147b8 UGameEngine::OnPrivateStoreBuyList

/* public: virtual void __thiscall UGameEngine::OnPrivateStoreBuyList(struct ItemInfo &) */

void __thiscall UGameEngine::OnPrivateStoreBuyList(UGameEngine *this,ItemInfo *param_1)

{
                    /* 0x147b8  6486  ?OnPrivateStoreBuyList@UGameEngine@@UAEXAAUItemInfo@@@Z */
                    /* WARNING: Could not recover jumptable at 0x1048b36b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(this + 0x68) + 0x538))();
  return;
}


// ==== 103147c7 AActor::SpawnSkillEffect

/* public: class AActor * __thiscall AActor::SpawnSkillEffect(class AActor *,class AActor *,class
   FName,int,class FVector,class FRotator,float,int,int,int,int) */

AActor * __thiscall
AActor::SpawnSkillEffect
          (AActor *this,int *param_1,float param_2,undefined4 param_4,int param_5,float param_6,
          float param_7,float param_8,int param_9,int param_10,int param_11,undefined4 param_12,
          float *param_13,int param_14,int param_15,int param_16)

{
  float fVar1;
  AActor *pAVar2;
  ushort *puVar3;
  UClass *pUVar4;
  AActor *pAVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  AEmitter *this_00;
  int *piVar9;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  float fStack_70;
  int iStack_6c;
  int iStack_68;
  ushort *puVar10;
  ulong uVar11;
  UPackageMap *pUVar12;
  float fStack_38;
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  UClass *pUStack_20;
  AActor *pAStack_1c;
  AActor *pAStack_18;
  undefined1 *puStack_14;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x147c7  8173
                       ?SpawnSkillEffect@AActor@@QAEPAV1@PAV1@0VFName@@HVFVector@@VFRotator@@MHHHH@Z
                        */
  puStack_c = &LAB_10818bc0;
  pvStack_10 = ExceptionList;
  puStack_14 = &stack0xffffffb4;
  uStack_8 = 0;
  pAStack_18 = (AActor *)0x0;
  ExceptionList = &pvStack_10;
  pAStack_1c = this;
  FRotator::FRotator((FRotator *)&iStack_34,0,0,0);
  piVar8 = *(int **)(this + 0xe4);
  pUVar12 = (UPackageMap *)0x0;
  uVar11 = 0x2000;
  puVar10 = (ushort *)0x0;
  puVar3 = FName::operator*((FName *)&param_4);
  iStack_68 = 0x104eef29;
  pUVar4 = UObject::StaticLoadClass
                     (&PrivateStaticClass,(UObject *)0x0,puVar3,puVar10,uVar11,pUVar12);
  piVar9 = param_1;
  if (pUVar4 == (UClass *)0x0) {
    ExceptionList = pvStack_10;
    return (AActor *)0x0;
  }
  pUStack_20 = pUVar4;
  if (param_13 == (float *)0x0) {
    if ((param_1 == (int *)0x0) || (param_15 != 0)) {
      fStack_38 = param_8;
      iStack_30 = param_10;
      iStack_2c = param_11;
      fStack_78 = param_6;
      fStack_74 = param_7;
      iStack_6c = param_9;
    }
    else {
      fStack_38 = (float)param_1[0x71];
      iStack_30 = param_1[0x73];
      iStack_2c = param_1[0x74];
      fStack_78 = (float)param_1[0x6f];
      fStack_74 = (float)param_1[0x70];
      iStack_6c = param_1[0x72];
    }
    param_1 = (int *)*piVar8;
    iStack_68 = iStack_30;
    fStack_70 = fStack_38;
    param_13 = &fStack_7c;
    fStack_7c = fStack_38;
    iStack_34 = iStack_6c;
    FName::FName((FName *)&fStack_7c,0);
    pAVar5 = (AActor *)(*(code *)param_1[0x30])(pUStack_20);
    pAStack_18 = pAVar5;
    goto LAB_104ef177;
  }
  iVar6 = *piVar8;
  iStack_6c = iStack_34;
  iStack_68 = iStack_30;
  fStack_78 = 0.0;
  fStack_74 = 0.0;
  fStack_70 = 0.0;
  param_13 = &fStack_7c;
  fStack_7c = 0.0;
  FName::FName((FName *)&fStack_7c,0);
  pAVar5 = (AActor *)(**(code **)(iVar6 + 0xc0))(pUVar4);
  if (pAVar5 == (AActor *)0x0) {
    ExceptionList = pvStack_10;
    return (AActor *)0x0;
  }
  pAStack_18 = pAVar5;
  iVar6 = (**(code **)(*(int *)pAVar5 + 0x7c))();
  if (iVar6 == 0) {
    ExceptionList = pvStack_10;
    return (AActor *)0x0;
  }
  iVar6 = (**(code **)(*(int *)pAVar5 + 0x7c))();
  piVar9 = param_1;
  if (param_1 == (int *)0x0) goto LAB_104ef177;
  if (((UObject *)param_1[0x41] == (UObject *)0x0) ||
     (iVar7 = UObject::IsA((UObject *)param_1[0x41],&USkeletalMesh::PrivateStaticClass), iVar7 == 0)
     ) {
    if (param_5 == 1) {
      fVar1 = (float)piVar9[0xbd] * -1.0;
    }
    else {
      if (param_5 != 3) goto LAB_104ef047;
      fVar1 = (float)piVar9[0xbd];
    }
LAB_104ef041:
    *(float *)(iVar6 + 0x484) = fVar1;
  }
  else {
    iVar7 = thunk_FUN_104b4270(piVar9[0x41]);
    if (param_5 == 1) {
      fVar1 = *(float *)(iVar7 + 0x98) * -1.0 * (float)piVar9[0x9f];
      goto LAB_104ef041;
    }
    if (param_5 == 3) {
      fVar1 = (float)piVar9[0x9f] * *(float *)(iVar7 + 0x98);
      goto LAB_104ef041;
    }
  }
LAB_104ef047:
  if ((param_6 != 0.0) && (param_7 != 0.0)) {
    *(float *)(iVar6 + 0x47c) = *(float *)(iVar6 + 0x47c) + param_6;
    *(float *)(iVar6 + 0x480) = param_7 + *(float *)(iVar6 + 0x480);
  }
  if (param_8 != 0.0) {
    *(float *)(iVar6 + 0x480) = param_8 + *(float *)(iVar6 + 0x480);
  }
LAB_104ef177:
  if (((param_15 != 0) && (piVar8 = (int *)thunk_FUN_104ec690(pAVar5), piVar8 != (int *)0x0)) &&
     (piVar9 != (int *)0x0)) {
    iVar6 = (**(code **)(*piVar9 + 0x2b0))();
    if (iVar6 == 0) {
      ExceptionList = pvStack_10;
      return (AActor *)0x0;
    }
    piVar8[0x139] = *(int *)(iVar6 + 0x30);
    param_6 = 0.0;
    param_7 = 0.0;
    param_8 = 1.0;
    (**(code **)(*piVar8 + 0x1c8))(0x11,0,0,0,0x3f800000);
    piVar8[0x17c] = *(int *)(iVar6 + 8);
    FNMagicInfo::Clear((FNMagicInfo *)(piVar8 + 0x14e),1);
    piVar8[0x150] = *(int *)(iVar6 + 8);
    piVar8[0x151] = *(int *)(iVar6 + 0xc);
    param_1 = piVar8;
    thunk_FUN_1037ae60(&param_1);
  }
  this_00 = (AEmitter *)thunk_FUN_104bc470(pAVar5);
  pAVar2 = pAStack_1c;
  if ((this_00 != (AEmitter *)0x0) &&
     (iVar6 = (**(code **)(*(int *)pAStack_1c + 0x2b0))(), iVar6 != 0)) {
    if (param_14 != 0) {
      *(undefined4 *)(this_00 + 0x3f0) = param_12;
    }
    if ((param_2 != 0.0) && (*(int *)(iVar6 + 0x38) == 0)) {
      param_2 = *(float *)(iVar6 + 0x24) + 1.0;
      AEmitter::AdjustparticleLife(this_00,param_2);
      if ((11.0 < *(float *)(pAVar2 + 0x2f0)) && (param_5 != 0)) {
        iVar6 = thunk_FUN_104b42a0(pAVar2);
        if (iVar6 == 0) {
          param_2 = *(float *)(pAVar2 + 0x2f0);
        }
        else {
          param_2 = *(float *)(iVar6 + 0x181c) * *(float *)(pAVar2 + 0x2f0);
        }
        param_2 = param_2 / 9.0;
        AEmitter::SetSizeScale(this_00,param_2);
      }
    }
  }
  if (((param_15 == 0) && (param_16 != 0)) &&
     (iVar6 = (**(code **)(*(int *)pAVar2 + 0x2b0))(), iVar6 != 0)) {
    thunk_FUN_1037ae60(&pAStack_18);
  }
  ExceptionList = pvStack_10;
  return pAVar5;
}


// ==== 103147cc AInternetInfo::operator=

/* public: class AInternetInfo & __thiscall AInternetInfo::operator=(class AInternetInfo const &) */

AInternetInfo * __thiscall AInternetInfo::operator=(AInternetInfo *this,AInternetInfo *param_1)

{
                    /* 0x147cc  2157  ??4AInternetInfo@@QAEAAV0@ABV0@@Z */
  AActor::operator=((AActor *)this,(AActor *)param_1);
  return this;
}


// ==== 103147d1 FL2GameData::StaticObjectInfoLoad

/* protected: int __thiscall FL2GameData::StaticObjectInfoLoad(int) */

int __thiscall FL2GameData::StaticObjectInfoLoad(FL2GameData *this,int param_1)

{
  FArchive *pFVar1;
  FArchive *pFVar2;
  FName *pFVar3;
  ushort *puVar4;
  FOutputDevice *this_00;
  int iVar5;
  EFindName EVar6;
  FOutputDevice aFStack_148 [184];
  undefined4 uStack_90;
  undefined1 *puStack_50;
  void *pvStack_4c;
  undefined1 *puStack_48;
  int iStack_44;
  int iStack_38;
  int iStack_34;
  FName *pFStack_2c;
  FName *pFStack_28;
  FArchive *pFStack_24;
  FL2GameData *pFStack_20;
  int iStack_1c;
  FName *pFStack_18;
  FName *pFStack_14;
  int iStack_10;
  int iStack_c;
  uchar *puStack_8;
  
                    /* 0x147d1  8532  ?StaticObjectInfoLoad@FL2GameData@@IAEHH@Z */
  puStack_48 = &LAB_108141a1;
  pvStack_4c = ExceptionList;
  puStack_50 = &stack0xfffffeac;
  iVar5 = 0;
  iStack_44 = 0;
  iStack_10 = 1;
  puStack_8 = (uchar *)0x0;
  iStack_c = 0;
  pFStack_24 = (FArchive *)0x0;
  ExceptionList = &pvStack_4c;
  pFStack_20 = this;
  GetBinFileName(this,(ushort *)aFStack_148,(ushort *)L"StaticObject");
  pFVar1 = (FArchive *)
           (**(code **)(**(int **)GFileManager_exref + 8))(aFStack_148,0,*(undefined4 *)GNull_exref)
  ;
  pFStack_24 = pFVar1;
  if (pFVar1 == (FArchive *)0x0) {
    if (param_1 == 0) {
      if (*(int *)GLog_exref != 0) {
        FOutputDevice::Logf2(this_00,*(EName *)GLog_exref,(ushort *)0x315);
      }
      goto LAB_10476793;
    }
  }
  else if (param_1 == 0) {
    param_1 = 0;
    iStack_c = (**(code **)(*(int *)pFVar1 + 0x2c))();
    GetTextInformation(this,pFVar1,&puStack_8,&iStack_c,0);
    pFVar2 = (FArchive *)(**(code **)(**(int **)GFileManager_exref + 4))(puStack_8,iStack_c);
    if (pFVar2 == (FArchive *)0x0) {
      if (*(int *)GLog_exref != 0) {
        FOutputDevice::Logf2(aFStack_148,*(EName *)GLog_exref,(ushort *)0x315);
      }
    }
    else {
      iVar5 = CheckSafePackage(this,pFVar2);
      if (iVar5 == 0) {
        FOutputDevice::Logf(aFStack_148,*(ushort **)GError_exref);
      }
      (**(code **)(*(int *)pFVar2 + 4))(&param_1,4);
      for (iStack_1c = 0; iStack_1c < param_1; iStack_1c = iStack_1c + 1) {
        pFVar3 = (FName *)thunk_FUN_1032ffc0(4);
        iStack_44._0_1_ = 1;
        pFStack_28 = pFVar3;
        if (pFVar3 == (FName *)0x0) {
          pFStack_14 = (FName *)0x0;
        }
        else {
          FName::FName(pFVar3);
          pFStack_14 = pFVar3;
        }
        iStack_44 = (uint)iStack_44._1_3_ << 8;
        pFStack_18 = (FName *)0x0;
        (**(code **)(*(int *)pFVar2 + 4))(&pFStack_18,4);
        thunk_FUN_1044f2c0(pFVar2);
        thunk_FUN_10463500(&pFStack_18,&pFStack_14);
      }
      (**(code **)(*(int *)pFVar2 + 0x58))();
    }
    (**(code **)(*(int *)pFVar1 + 0x58))();
    thunk_FUN_103254a0(puStack_8);
    if (pFVar2 != (FArchive *)0x0) {
      (*(code *)**(undefined4 **)pFVar2)(1);
    }
    goto LAB_10476793;
  }
  if (pFVar1 != (FArchive *)0x0) {
    (**(code **)(*(int *)pFVar1 + 0x58))();
  }
  GetTextFileName(this,(ushort *)aFStack_148,(ushort *)L"StaticObject");
  pFVar1 = (FArchive *)
           (**(code **)(**(int **)GFileManager_exref + 8))(aFStack_148,0,*(undefined4 *)GNull_exref)
  ;
  pFStack_24 = pFVar1;
  if (pFVar1 == (FArchive *)0x0) {
    FOutputDevice::Logf(*(FOutputDevice **)GWarn_exref,(ushort *)*(FOutputDevice **)GWarn_exref);
    iStack_10 = 0;
  }
  else {
    thunk_FUN_104a14b0();
    iStack_44._0_1_ = 2;
    iStack_c = (**(code **)(*(int *)pFVar1 + 0x2c))();
    GetTextInformation(this,pFVar1,&puStack_8,&iStack_c,param_1);
    if (puStack_8 == (uchar *)0x0) {
      FOutputDevice::Logf(*(FOutputDevice **)GWarn_exref,(ushort *)*(FOutputDevice **)GWarn_exref);
      iStack_10 = 0;
      iStack_44 = (uint)iStack_44._1_3_ << 8;
      thunk_FUN_104a1770();
    }
    else {
      param_1 = (int)(puStack_8 + 2);
      for (; iStack_38 = iVar5, iVar5 < 4; iVar5 = iVar5 + 1) {
        thunk_FUN_104a1120(u_estaticobject_begin_10ae688e + iVar5 * 0x101 + 1,
                           (&DAT_10ae6a90)[iVar5 * 0x101]);
      }
      thunk_FUN_1049f750(param_1);
      iVar5 = thunk_FUN_104a1840();
      if (iVar5 == 0) {
        thunk_FUN_10445eb0(uStack_90);
        FOutputDevice::Logf((FOutputDevice *)GWarn_exref,*(ushort **)GWarn_exref);
        iStack_10 = 0;
      }
      else {
        param_1 = thunk_FUN_1049f840();
        for (iVar5 = 0; iStack_34 = iVar5, iVar5 < param_1; iVar5 = iVar5 + 1) {
          pFVar3 = (FName *)thunk_FUN_1032ffc0(4);
          iStack_44._0_1_ = 3;
          pFStack_18 = pFVar3;
          if (pFVar3 == (FName *)0x0) {
            pFVar3 = (FName *)0x0;
          }
          else {
            FName::FName(pFVar3);
          }
          iStack_44._0_1_ = 2;
          pFStack_2c = pFVar3;
          pFStack_28 = (FName *)thunk_FUN_104a0b70(&DAT_1089600c,iVar5);
          EVar6 = 2;
          puVar4 = (ushort *)thunk_FUN_104a0c30(L"name",iVar5);
          L2FName::L2FName((L2FName *)&pFStack_14,puVar4,EVar6);
          *(FName **)pFVar3 = pFStack_14;
          thunk_FUN_10463500(&pFStack_28,&pFStack_2c);
        }
        FOutputDevice::Logf(aFStack_148,*(ushort **)GWarn_exref);
      }
      thunk_FUN_104a16a0();
      (**(code **)(*(int *)pFVar1 + 0x58))();
      thunk_FUN_103254a0(puStack_8);
      iStack_44 = (uint)iStack_44._1_3_ << 8;
      thunk_FUN_104a1770();
    }
  }
LAB_10476793:
  if (pFVar1 != (FArchive *)0x0) {
    (*(code *)**(undefined4 **)pFVar1)(1);
  }
  ExceptionList = pvStack_4c;
  return iStack_10;
}


// ==== 103147db UInput::ResetInput

/* public: virtual void __thiscall UInput::ResetInput(void) */

void __thiscall UInput::ResetInput(UInput *this)

{
  int iVar1;
  UClass *pUVar2;
  int iStack_2c;
  int iStack_24;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x147db  7627  ?ResetInput@UInput@@UAEXXZ */
  puStack_c = &LAB_1081f460;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  ExceptionList = &pvStack_10;
  if (*(int *)(this + 0xeac) == 0) {
    ExceptionList = &pvStack_10;
    appFailAssert("Viewport",".\\UnIn.cpp",0x15d3);
  }
  for (iVar1 = 0; iVar1 < 0xff; iVar1 = iVar1 + 1) {
    this[iVar1 + 0xecc] = (UInput)0x0;
  }
  pUVar2 = UObject::GetClass(*(UObject **)(*(int *)(this + 0xeac) + 0x3c));
  thunk_FUN_105a72d0(pUVar2);
  while (iStack_24 != 0) {
    if ((*(byte *)(iStack_24 + 0x48) & 4) != 0) {
      *(undefined1 *)(*(int *)(*(int *)(this + 0xeac) + 0x3c) + *(int *)(iStack_24 + 0x54)) = 0;
    }
    iStack_24 = *(int *)(iStack_24 + 0x38);
    thunk_FUN_105a60a0();
  }
  pUVar2 = UObject::GetClass(*(UObject **)(*(int *)(this + 0xeac) + 0x3c));
  thunk_FUN_105a7330(pUVar2);
  while (iStack_2c != 0) {
    if ((*(byte *)(iStack_2c + 0x48) & 4) == 0) {
      iStack_2c = *(int *)(iStack_2c + 0x38);
      thunk_FUN_105a6100();
    }
    else {
      *(undefined4 *)(*(int *)(*(int *)(this + 0xeac) + 0x3c) + *(int *)(iStack_2c + 0x54)) = 0;
      iStack_2c = *(int *)(iStack_2c + 0x38);
      thunk_FUN_105a6100();
    }
  }
  *(undefined4 *)(this + 0xec4) = 0;
  *(undefined4 *)(this + 0xec8) = 0;
  (**(code **)(**(int **)(this + 0xeac) + 0x94))(1,0);
  ExceptionList = pvStack_10;
  return;
}


// ==== 103147e0 AController::HandleSpecial

/* public: class AActor * __thiscall AController::HandleSpecial(class AActor *) */

AActor * __thiscall AController::HandleSpecial(AController *this,AActor *param_1)

{
  undefined4 uVar1;
  uint uVar2;
  AActor *pAVar3;
  int iVar4;
  float fVar5;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x147e0  5346  ?HandleSpecial@AController@@QAEPAVAActor@@PAV2@@Z */
  puStack_c = &LAB_1081c3f0;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  if ((((byte)this[0x3d0] & 0x20) != 0) && (*(int *)(this + 0x44c) == 0)) {
    ExceptionList = &pvStack_10;
    pAVar3 = AActor::eventSpecialHandling(param_1,*(APawn **)(this + 0x3bc));
    if ((pAVar3 != (AActor *)0x0) && (pAVar3 != param_1)) {
      uVar1 = *(undefined4 *)(this + 0x43c);
      uVar2 = *(uint *)(this + 0x3d0);
      *(undefined4 *)(this + 0x43c) = 0;
      *(uint *)(this + 0x3d0) = uVar2 & 0xffffff7f;
      iVar4 = APawn::actorReachable(*(APawn **)(this + 0x3bc),pAVar3,0,0);
      if (iVar4 != 0) {
        ExceptionList = pvStack_10;
        return pAVar3;
      }
      fVar5 = APawn::findPathToward
                        (*(APawn **)(this + 0x3bc),pAVar3,*(undefined4 *)(pAVar3 + 0x1bc),
                         *(undefined4 *)(pAVar3 + 0x1c0),*(undefined4 *)(pAVar3 + 0x1c4),0,0,0);
      if (0.0 < fVar5) {
        pAVar3 = SetPath(this,0);
        ExceptionList = pvStack_10;
        return pAVar3;
      }
      *(undefined4 *)(this + 0x43c) = uVar1;
      *(uint *)(this + 0x3d0) =
           *(uint *)(this + 0x3d0) ^ ((uVar2 >> 7 & 1) << 7 ^ *(uint *)(this + 0x3d0)) & 0x80;
    }
  }
  ExceptionList = pvStack_10;
  return param_1;
}


// ==== 103147e5 thunk_FUN_1039a0b0 thunk -> 1039a0b0

// ==== 103147ea thunk_FUN_1047e3d0 thunk -> 1047e3d0

// ==== 103147ef APlayerController::GetOptimizedRepList

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: virtual int * __thiscall APlayerController::GetOptimizedRepList(unsigned char *,struct
   FPropertyRetirement *,int *,class UPackageMap *,class UActorChannel *) */

int * __thiscall
APlayerController::GetOptimizedRepList
          (APlayerController *this,uchar *param_1,FPropertyRetirement *param_2,int *param_3,
          UPackageMap *param_4,UActorChannel *param_5)

{
  uint *puVar1;
  int iVar2;
  void *pvStack_10;
  undefined1 *puStack_c;
  int iStack_8;
  
                    /* 0x147ef  4869
                       ?GetOptimizedRepList@APlayerController@@UAEPAHPAEPAUFPropertyRetirement@@PAHPAVUPackageMap@@PAVUActorChannel@@@Z
                        */
  puStack_c = &LAB_10819da8;
  pvStack_10 = ExceptionList;
  iStack_8 = 0;
  ExceptionList = &pvStack_10;
  puVar1 = (uint *)AController::GetOptimizedRepList
                             ((AController *)this,param_1,param_2,param_3,param_4,param_5);
  if ((((_DAT_10c2b32c & 0x800) != 0) && (((byte)this[0x368] & 2) != 0)) &&
     (this[0xc2] == (APlayerController)0x4)) {
    if ((*(uint *)(this + 0x74) & 0x800) != 0) {
      iVar2 = thunk_FUN_10524fc0(*(undefined4 *)(this + 0x770),*(undefined4 *)(param_1 + 0x770),
                                 param_4,param_5);
      if (iVar2 != 0) {
        if ((DAT_10c1b898 & 1) == 0) {
          DAT_10c1b898 = DAT_10c1b898 | 1;
          iStack_8._0_1_ = 1;
          DAT_10c1b894 = thunk_FUN_10526620(&PrivateStaticClass,L"GameReplicationInfo",0);
          iStack_8 = (uint)iStack_8._1_3_ << 8;
        }
        *puVar1 = (uint)*(ushort *)(DAT_10c1b894 + 0x52);
        puVar1 = puVar1 + 1;
      }
    }
    iVar2 = (**(code **)(*(int *)this + 0x340))();
    if (iVar2 != *(int *)(this + 0x3bc)) {
      iVar2 = UObject::IsA(*(UObject **)(this + 0x5c0),&APawn::PrivateStaticClass);
      if (iVar2 != 0) {
        iVar2 = thunk_FUN_10524f90(this + 0x698,param_1 + 0x698,param_4,param_5);
        if (iVar2 != 0) {
          if ((DAT_10c1b898 & 2) == 0) {
            DAT_10c1b898 = DAT_10c1b898 | 2;
            iStack_8._0_1_ = 2;
            DAT_10c1b890 = thunk_FUN_10526620(&PrivateStaticClass,L"TargetViewRotation",0);
            iStack_8 = (uint)iStack_8._1_3_ << 8;
          }
          *puVar1 = (uint)*(ushort *)(DAT_10c1b890 + 0x52);
          puVar1 = puVar1 + 1;
        }
        if (*(int *)(this + 0x6a4) != *(int *)(param_1 + 0x6a4)) {
          if ((DAT_10c1b898 & 4) == 0) {
            DAT_10c1b898 = DAT_10c1b898 | 4;
            iStack_8._0_1_ = 3;
            DAT_10c1b88c = thunk_FUN_10526620(&PrivateStaticClass,L"TargetEyeHeight",0);
            iStack_8 = (uint)iStack_8._1_3_ << 8;
          }
          *puVar1 = (uint)*(ushort *)(DAT_10c1b88c + 0x52);
          puVar1 = puVar1 + 1;
        }
        iVar2 = thunk_FUN_10524f60(this + 0x6a8,param_1 + 0x6a8,param_4,param_5);
        if (iVar2 != 0) {
          if ((DAT_10c1b898 & 8) == 0) {
            DAT_10c1b898 = DAT_10c1b898 | 8;
            iStack_8 = CONCAT31(iStack_8._1_3_,4);
            DAT_10c1b888 = thunk_FUN_10526620(&PrivateStaticClass,L"TargetWeaponViewOffset",0);
          }
          *puVar1 = (uint)*(ushort *)(DAT_10c1b888 + 0x52);
          puVar1 = puVar1 + 1;
        }
      }
    }
  }
  ExceptionList = pvStack_10;
  return (int *)puVar1;
}


// ==== 103147f4 thunk_FUN_103f73e0 thunk -> 103f73e0

// ==== 103147fe USkeletalMeshInstance::MeshSkinVertsCallback

/* public: virtual void __thiscall USkeletalMeshInstance::MeshSkinVertsCallback(void *) */

void __thiscall
USkeletalMeshInstance::MeshSkinVertsCallback(USkeletalMeshInstance *this,void *param_1)

{
  undefined4 uVar1;
  
                    /* 0x147fe  6158  ?MeshSkinVertsCallback@USkeletalMeshInstance@@UAEXPAX@Z */
  uVar1 = (**(code **)(*(int *)this + 0x94))(this,param_1,0,&param_1);
  thunk_FUN_106c5070(uVar1);
  return;
}


// ==== 10314803 UTexture::ConstantTimeTick

/* public: virtual void __thiscall UTexture::ConstantTimeTick(void) */

void __thiscall UTexture::ConstantTimeTick(UTexture *this)

{
  int iVar1;
  
                    /* 0x14803  3686  ?ConstantTimeTick@UTexture@@UAEXXZ */
  if (*(int *)(this + 0x5d8) == 0) {
    *(UTexture **)(this + 0x5d8) = this;
  }
  iVar1 = *(int *)(*(int *)(this + 0x5d8) + 0x5d4);
  *(int *)(this + 0x5d8) = iVar1;
  if (iVar1 == 0) {
    *(UTexture **)(this + 0x5d8) = this;
  }
  return;
}


// ==== 10314808 UNetworkHandler::~UNetworkHandler

/* public: virtual __thiscall UNetworkHandler::~UNetworkHandler(void) */

void __thiscall UNetworkHandler::~UNetworkHandler(UNetworkHandler *this)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  int iStack_4;
  
                    /* 0x14808  1409  ??1UNetworkHandler@@UAE@XZ */
  puStack_8 = &LAB_10810c7f;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *(undefined ***)this = vftable_for_UObject_;
  *(undefined ***)(this + 0x34) = vftable_for_FExec_;
  iStack_4 = 3;
  UObject::ConditionalDestroy((UObject *)this);
  iStack_4._1_3_ = (uint3)((uint)iStack_4 >> 8);
  iStack_4._0_1_ = 2;
  thunk_FUN_10433c80();
  iStack_4._0_1_ = 1;
  thunk_FUN_104338d0();
  iStack_4 = (uint)iStack_4._1_3_ << 8;
  thunk_FUN_1042c710();
  iStack_4 = 0xffffffff;
  UL2NetHandler::~UL2NetHandler((UL2NetHandler *)this);
  ExceptionList = pvStack_c;
  return;
}


// ==== 1031480d UMeshObject::~UMeshObject

/* public: virtual __thiscall UMeshObject::~UMeshObject(void) */

void __thiscall UMeshObject::~UMeshObject(UMeshObject *this)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x1480d  1403  ??1UMeshObject@@UAE@XZ */
  puStack_8 = &LAB_107f5379;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *(undefined ***)this = vftable;
  uStack_4 = 0;
  UObject::ConditionalDestroy((UObject *)this);
  uStack_4 = 0xffffffff;
  UObject::~UObject((UObject *)this);
  ExceptionList = pvStack_c;
  return;
}


// ==== 10314812 AProjector::StaticClass

/* public: static class UClass * __cdecl AProjector::StaticClass(void) */

UClass * __cdecl AProjector::StaticClass(void)

{
                    /* 0x14812  8299  ?StaticClass@AProjector@@SAPAVUClass@@XZ */
  return &PrivateStaticClass;
}


// ==== 10314817 UNetworkHandler::SendPrivateStoreBuyBuyList

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */
/* public: virtual void __thiscall UNetworkHandler::SendPrivateStoreBuyBuyList(class L2ParamStack &)
    */

void __thiscall
UNetworkHandler::SendPrivateStoreBuyBuyList(UNetworkHandler *this,L2ParamStack *param_1)

{
  void *pvVar1;
  void *pvVar2;
  void *pvVar3;
  void *pvVar4;
  void *pvVar5;
  void *pvVar6;
  void *pvVar7;
  void *pvVar8;
  int iVar9;
  FOutputDevice *this_00;
  int iVar10;
  void *pvStack_2420;
  short sStack_2418;
  short sStack_2404;
  undefined1 auStack_2400 [9212];
  undefined4 uStack_4;
  
                    /* 0x14817  7707
                       ?SendPrivateStoreBuyBuyList@UNetworkHandler@@UAEXAAVL2ParamStack@@@Z */
  uStack_4 = 0x104090ea;
  iVar10 = 0;
  pvVar1 = L2ParamStack::Top(param_1);
  pvVar2 = L2ParamStack::Top(param_1);
  pvStack_2420 = pvVar2;
  if (0 < (int)pvVar2) {
    do {
      pvVar3 = L2ParamStack::Top(param_1);
      pvVar4 = L2ParamStack::Top(param_1);
      pvVar5 = L2ParamStack::Top(param_1);
      pvVar6 = L2ParamStack::Top(param_1);
      pvVar7 = L2ParamStack::Top(param_1);
      pvVar8 = L2ParamStack::Top(param_1);
      sStack_2418 = (short)pvVar5;
      sStack_2404 = (short)pvVar6;
      iVar9 = thunk_FUN_10402610(*(undefined4 *)(this + 0x48),auStack_2400 + iVar10,0x2400 - iVar10,
                                 "ddhhdd",pvVar3,pvVar4,(int)sStack_2418,(int)sStack_2404,pvVar7,
                                 pvVar8);
      iVar10 = iVar10 + iVar9;
      pvStack_2420 = (void *)((int)pvStack_2420 + -1);
    } while (pvStack_2420 != (void *)0x0);
  }
  (**(code **)(**(int **)(this + 0x48) + 0x68))
            (*(int **)(this + 0x48),&DAT_1087ff04,0x96,pvVar1,pvVar2,iVar10,auStack_2400);
  FOutputDevice::Logf(this_00,*(ushort **)GNetworkLog_exref);
  return;
}


// ==== 1031481c USubActionCameraShake::USubActionCameraShake

/* public: __thiscall USubActionCameraShake::USubActionCameraShake(class USubActionCameraShake const
   &) */

USubActionCameraShake * __thiscall
USubActionCameraShake::USubActionCameraShake
          (USubActionCameraShake *this,USubActionCameraShake *param_1)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x1481c  924  ??0USubActionCameraShake@@QAE@ABV0@@Z */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_107f5238;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  UMatSubAction::UMatSubAction((UMatSubAction *)this,(UMatSubAction *)param_1);
  *(undefined ***)this = vftable;
  *(undefined4 *)(this + 0x5c) = *(undefined4 *)(param_1 + 0x5c);
  *(undefined4 *)(this + 0x60) = *(undefined4 *)(param_1 + 0x60);
  *(undefined4 *)(this + 100) = *(undefined4 *)(param_1 + 100);
  *(undefined4 *)(this + 0x68) = *(undefined4 *)(param_1 + 0x68);
  *(undefined4 *)(this + 0x6c) = *(undefined4 *)(param_1 + 0x6c);
  *(undefined4 *)(this + 0x70) = *(undefined4 *)(param_1 + 0x70);
  ExceptionList = pvStack_c;
  return this;
}


// ==== 10314821 thunk_FUN_10590bb0 thunk -> 10590bb0

// ==== 10314826 FPoly::DoesLineIntersect

/* public: int __thiscall FPoly::DoesLineIntersect(class FVector,class FVector,class FVector *) */

int __thiscall FPoly::DoesLineIntersect(FPoly *this)

{
  FPoly *pFVar1;
  FPoly *pFVar2;
  int iVar3;
  float10 fVar4;
  undefined4 *in_stack_0000001c;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  float fStack_1c;
  float fStack_18;
  undefined1 *puStack_14;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x14826  3840  ?DoesLineIntersect@FPoly@@QAEHVFVector@@0PAV2@@Z */
  puStack_c = &LAB_1081d900;
  pvStack_10 = ExceptionList;
  puStack_14 = &stack0xffffffc4;
  uStack_8 = 0;
  pFVar1 = this + 0xc;
  pFVar2 = this + 0x30;
  ExceptionList = &pvStack_10;
  fVar4 = (float10)thunk_FUN_10585a20(&stack0x00000004,pFVar2,pFVar1);
  fStack_1c = (float)fVar4;
  fVar4 = (float10)thunk_FUN_10585a20(&stack0x00000010,pFVar2,pFVar1);
  fStack_18 = (float)fVar4;
  if (((0.0 <= fStack_1c) || (0.0 <= fStack_18)) && ((fStack_1c <= 0.0 || (fStack_18 <= 0.0)))) {
    thunk_FUN_10585a80(&uStack_30,&stack0x00000004,&stack0x00000010,pFVar2,pFVar1);
    if (in_stack_0000001c != (undefined4 *)0x0) {
      *in_stack_0000001c = uStack_30;
      in_stack_0000001c[1] = uStack_2c;
      in_stack_0000001c[2] = uStack_28;
    }
    iVar3 = FVector::operator==((FVector *)&uStack_30,(FVector *)&stack0x00000004);
    if ((iVar3 == 0) &&
       (iVar3 = FVector::operator==((FVector *)&uStack_30,(FVector *)&stack0x00000010), iVar3 == 0))
    {
      iVar3 = OnPoly(this,uStack_30,uStack_2c,uStack_28);
      ExceptionList = pvStack_10;
      return iVar3;
    }
  }
  ExceptionList = pvStack_10;
  return 0;
}


// ==== 1031482b thunk_FUN_10383810 thunk -> 10383810

// ==== 10314830 USubSkeletalMeshInstance::RenderCloakMesh

/* public: void __thiscall USubSkeletalMeshInstance::RenderCloakMesh(class FDynamicActor *,class
   FLevelSceneNode *,class TList<class FDynamicLight *> *,class TList<struct FProjectorRenderInfo *>
   *,class FRenderInterface *,int) */

void __thiscall
USubSkeletalMeshInstance::RenderCloakMesh
          (USubSkeletalMeshInstance *this,FDynamicActor *param_1,FLevelSceneNode *param_2,
          TList<FDynamicLight*> *param_3,TList<FProjectorRenderInfo*> *param_4,
          FRenderInterface *param_5,int param_6)

{
                    /* 0x14830  7325
                       ?RenderCloakMesh@USubSkeletalMeshInstance@@QAEXPAVFDynamicActor@@PAVFLevelSceneNode@@PAV?$TList@PAVFDynamicLight@@@@PAV?$TList@PAUFProjectorRenderInfo@@@@PAVFRenderInterface@@H@Z
                        */
  return;
}


// ==== 10314835 FLineBatcher::FLineBatcher

/* public: __thiscall FLineBatcher::FLineBatcher(class FRenderInterface *,int) */

FLineBatcher * __thiscall
FLineBatcher::FLineBatcher(FLineBatcher *this,FRenderInterface *param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  code *pcVar3;
  longlong lVar4;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x14835  369  ??0FLineBatcher@@QAE@PAVFRenderInterface@@H@Z */
  puStack_8 = &LAB_10825de4;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *(undefined ***)this = FRenderResource::vftable;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0;
  *(undefined ***)this = FVertexStream::vftable;
  uStack_4 = 1;
  *(undefined ***)this = vftable;
  FArray::FArray((FArray *)(this + 0xc));
  uStack_4 = CONCAT31(uStack_4._1_3_,3);
  *(FRenderInterface **)(this + 0x1c) = param_1;
  *(int *)(this + 0x18) = param_2;
  pcVar3 = GMakeCacheIDIndex_exref;
  iVar1 = *(int *)(GMakeCacheIDIndex_exref + 4);
  uVar2 = *(uint *)GMakeCacheIDIndex_exref;
  lVar4 = __allmul(uVar2,iVar1,0x100,0);
  *(uint *)pcVar3 = uVar2 + 1;
  *(uint *)(GMakeCacheIDIndex_exref + 4) = iVar1 + (uint)(0xfffffffe < uVar2);
  *(longlong *)(this + 4) = lVar4 + 0xe1;
  ExceptionList = pvStack_c;
  return this;
}


// ==== 1031483a thunk_FUN_10524290 thunk -> 10524290

// ==== 1031483f AMovableStaticMeshActor::operator_new

/* public: static void * __cdecl AMovableStaticMeshActor::operator new(unsigned int,enum EInternal
   *) */

void * __cdecl AMovableStaticMeshActor::operator_new(uint param_1,EInternal *param_2)

{
                    /* 0x1483f  1645  ??2AMovableStaticMeshActor@@SAPAXIPAW4EInternal@@@Z */
  return param_2;
}


// ==== 10314844 UEngine::Key

/* public: virtual int __thiscall UEngine::Key(class UViewport *,enum EInputKey,unsigned short) */

int __thiscall UEngine::Key(UEngine *this,UViewport *param_1,EInputKey param_2,ushort param_3)

{
  int iVar1;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x14844  5975  ?Key@UEngine@@UAEHPAVUViewport@@W4EInputKey@@G@Z */
  puStack_c = &LAB_1081c6c0;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  if ((*(int *)GIsRunning_exref != 0) &&
     (*(UInteractionMaster **)(*(int *)(this + 0x54) + 0xb4) != (UInteractionMaster *)0x0)) {
    ExceptionList = &pvStack_10;
    iVar1 = UInteractionMaster::MasterProcessKeyType
                      (*(UInteractionMaster **)(*(int *)(this + 0x54) + 0xb4),param_2,param_3);
    ExceptionList = pvStack_10;
    return iVar1;
  }
  return 0;
}


// ==== 10314849 UTexOscillator::PostEditChange

/* public: virtual void __thiscall UTexOscillator::PostEditChange(void) */

void __thiscall UTexOscillator::PostEditChange(UTexOscillator *this)

{
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x14849  6785  ?PostEditChange@UTexOscillator@@UAEXXZ */
  puStack_c = &LAB_10820820;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  ExceptionList = &pvStack_10;
  UModifier::PostEditChange((UModifier *)this);
  *(undefined4 *)(this + 0x5ac) = 0;
  *(undefined4 *)(this + 0x5a8) = 0;
  ExceptionList = pvStack_10;
  return;
}


// ==== 1031484e UActionWarp::~UActionWarp

/* public: virtual __thiscall UActionWarp::~UActionWarp(void) */

void __thiscall UActionWarp::~UActionWarp(UActionWarp *this)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x1484e  1308  ??1UActionWarp@@UAE@XZ */
  puStack_8 = &LAB_107ff388;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *(undefined ***)this = vftable;
  uStack_4 = 0;
  UObject::ConditionalDestroy((UObject *)this);
  uStack_4 = 0xffffffff;
  UMatAction::~UMatAction((UMatAction *)this);
  ExceptionList = pvStack_c;
  return;
}


// ==== 10314853 thunk_FUN_1072aad0 thunk -> 1072aad0

// ==== 10314858 UVertMeshEmitter::InternalConstructor

/* public: static void __cdecl UVertMeshEmitter::InternalConstructor(void *) */

void __cdecl UVertMeshEmitter::InternalConstructor(void *param_1)

{
                    /* 0x14858  5780  ?InternalConstructor@UVertMeshEmitter@@SAXPAX@Z */
  if (param_1 != (void *)0x0) {
    UVertMeshEmitter(param_1);
    return;
  }
  return;
}


// ==== 10314862 UShadowBitmapMaterial::~UShadowBitmapMaterial

/* public: virtual __thiscall UShadowBitmapMaterial::~UShadowBitmapMaterial(void) */

void __thiscall UShadowBitmapMaterial::~UShadowBitmapMaterial(UShadowBitmapMaterial *this)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x14862  1432  ??1UShadowBitmapMaterial@@UAE@XZ */
  puStack_8 = &LAB_107f3d08;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *(undefined ***)this = vftable;
  uStack_4 = 0;
  UObject::ConditionalDestroy((UObject *)this);
  uStack_4 = 0xffffffff;
  UBitmapMaterial::~UBitmapMaterial((UBitmapMaterial *)this);
  ExceptionList = pvStack_c;
  return;
}


// ==== 10314867 UInteractionMaster::eventProcess_Message

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: void __thiscall UInteractionMaster::eventProcess_Message(class FString const
   &,float,class TArray<class UInteraction *>) */

void __thiscall
UInteractionMaster::eventProcess_Message
          (UInteractionMaster *this,FString *param_1,undefined4 param_2)

{
  int iVar1;
  UFunction *pUVar2;
  undefined4 uStack_3c;
  FString *pFStack_38;
  FString aFStack_28 [8];
  void *pvStack_20;
  undefined4 uStack_1c;
  int iStack_18;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x14867  9068
                       ?eventProcess_Message@UInteractionMaster@@QAEXABVFString@@MV?$TArray@PAVUInteraction@@@@@Z
                        */
  puStack_8 = &LAB_108093f1;
  pvStack_c = ExceptionList;
  uStack_4 = 0;
  ExceptionList = &pvStack_c;
  thunk_FUN_103a6ff0();
  uStack_4 = CONCAT31(uStack_4._1_3_,1);
  pFStack_38 = (FString *)0x103e9681;
  FString::operator=(aFStack_28,param_1);
  uStack_1c = param_2;
  pFStack_38 = (FString *)0x103e9697;
  thunk_FUN_1032cfe0();
  iVar1 = *(int *)this;
  pFStack_38 = aFStack_28;
  uStack_3c = 0;
  pUVar2 = UObject::FindFunctionChecked((UObject *)this,_ENGINE_Process_Message);
  (**(code **)(iVar1 + 0x10))(pUVar2);
  iStack_18._0_1_ = 2;
  thunk_FUN_1032cf20();
  iStack_18 = (uint)iStack_18._1_3_ << 8;
  FString::~FString((FString *)&uStack_3c);
  iStack_18 = 0xffffffff;
  thunk_FUN_1032cf20();
  ExceptionList = pvStack_20;
  return;
}


// ==== 1031486c L2AbnormalZone::GetCurrentZone

/* public: class FAbnormalZone * __thiscall L2AbnormalZone::GetCurrentZone(class FVector const &) */

FAbnormalZone * __thiscall L2AbnormalZone::GetCurrentZone(L2AbnormalZone *this,FVector *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x1486c  4540
                       ?GetCurrentZone@L2AbnormalZone@@QAEPAVFAbnormalZone@@ABVFVector@@@Z */
  puStack_c = &LAB_108114f0;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  iVar3 = 0;
  ExceptionList = &pvStack_10;
  while( true ) {
    if (*(int *)(this + 0xc) <= iVar3) {
      ExceptionList = pvStack_10;
      return (FAbnormalZone *)0x0;
    }
    iVar1 = *(int *)(this + 8);
    iVar2 = thunk_FUN_10444210(param_1);
    if (iVar2 != 0) break;
    iVar3 = iVar3 + 1;
  }
  ExceptionList = pvStack_10;
  return (FAbnormalZone *)(iVar3 * 0x20 + iVar1);
}


// ==== 1031487b UNullRenderDevice::ReLoadPixelShader

/* public: virtual void __thiscall UNullRenderDevice::ReLoadPixelShader(void) */

void __thiscall UNullRenderDevice::ReLoadPixelShader(UNullRenderDevice *this)

{
                    /* 0x1487b  7234  ?ReLoadPixelShader@UNullRenderDevice@@UAEXXZ */
  return;
}


// ==== 10314880 thunk_FUN_104a0590 thunk -> 104a0590

// ==== 10314885 thunk_FUN_10369160 thunk -> 10369160

// ==== 1031488a AController::AddFlyTo

/* public: void __thiscall AController::AddFlyTo(class FVector,class FVector,int) */

void __thiscall AController::AddFlyTo(AController *this)

{
  float fVar1;
  APawn *this_00;
  float10 fVar2;
  float fVar3;
  undefined4 in_stack_00000010;
  undefined4 in_stack_00000014;
  undefined4 in_stack_00000018;
  int in_stack_0000001c;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x1488a  3275  ?AddFlyTo@AController@@QAEXVFVector@@0H@Z */
  puStack_c = &LAB_1081c4f0;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  this_00 = *(APawn **)(this + 0x3bc);
  if (this_00 != (APawn *)0x0) {
    if ((((byte)this_00[0x774] & 4) != 0) && (in_stack_0000001c == 2)) {
      *(uint *)(this_00 + 0x774) = *(uint *)(this_00 + 0x774) & 0xfffffffb;
      return;
    }
    if ((this_00 != (APawn *)0x0) &&
       (ExceptionList = &pvStack_10, fVar3 = APawn::GetCurSpeed(this_00,-1), 0.0 < fVar3)) {
      fVar2 = (float10)thunk_FUN_1048e290(&stack0x00000010,&stack0x00000004);
      fVar1 = (float)fVar2;
      fVar2 = (float10)thunk_FUN_1048e290(*(int *)(this + 0x3bc) + 0x1bc,&stack0x00000010);
      if ((fVar1 <= 0.0) || (*(float *)(*(int *)(this + 0x3bc) + 0x1550) <= 0.0)) {
        *(undefined4 *)(*(int *)(this + 0x3bc) + 0x6d0) = 0;
        *(undefined4 *)(*(int *)(this + 0x3bc) + 0x6d4) = 0;
      }
      else {
        *(float *)(*(int *)(this + 0x3bc) + 0x6d0) = fVar1 / fVar3;
        *(float *)(*(int *)(this + 0x3bc) + 0x6d4) =
             ((float)fVar2 - fVar1) / *(float *)(*(int *)(this + 0x3bc) + 0x6d0);
      }
      FlyTo(this,in_stack_00000010,in_stack_00000014,in_stack_00000018,in_stack_0000001c,0,
            0x3f800000);
      ExceptionList = pvStack_10;
      return;
    }
  }
  *(undefined4 *)(*(int *)(this + 0x3bc) + 0x6d0) = 0;
  *(undefined4 *)(*(int *)(this + 0x3bc) + 0x6d4) = 0;
  ExceptionList = pvStack_10;
  return;
}


// ==== 1031489e ABlockingVolume::ShouldTrace

/* public: virtual int __thiscall ABlockingVolume::ShouldTrace(class AActor *,unsigned long) */

int __thiscall ABlockingVolume::ShouldTrace(ABlockingVolume *this,AActor *param_1,ulong param_2)

{
  int iVar1;
  
                    /* 0x1489e  8111  ?ShouldTrace@ABlockingVolume@@UAEHPAVAActor@@K@Z */
  if ((param_2 & 0x20000) != 0) {
    return 0;
  }
  iVar1 = AVolume::ShouldTrace((AVolume *)this,param_1,param_2);
  return iVar1;
}


// ==== 103148a8 UMeshAnimation::operator_new

/* public: static void * __cdecl UMeshAnimation::operator new(unsigned int,enum EInternal *) */

void * __cdecl UMeshAnimation::operator_new(uint param_1,EInternal *param_2)

{
                    /* 0x148a8  1949  ??2UMeshAnimation@@SAPAXIPAW4EInternal@@@Z */
  return param_2;
}


// ==== 103148ad AStationaryWeapons::eventActivated

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: void __thiscall AStationaryWeapons::eventActivated(void) */

void __thiscall AStationaryWeapons::eventActivated(AStationaryWeapons *this)

{
  int iVar1;
  UFunction *pUVar2;
  
                    /* 0x148ad  8932  ?eventActivated@AStationaryWeapons@@QAEXXZ */
  iVar1 = *(int *)this;
  pUVar2 = UObject::FindFunctionChecked((UObject *)this,_ENGINE_Activated,0,0,0);
  (**(code **)(iVar1 + 0x10))(pUVar2);
  return;
}


// ==== 103148bc User::GetNpcMeshName

/* public: class FName __thiscall User::GetNpcMeshName(void) */

void __thiscall User::GetNpcMeshName(User *this)

{
  int iVar1;
  undefined4 *in_stack_00000004;
  undefined4 uStack_18;
  undefined1 *puStack_14;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x148bc  4837  ?GetNpcMeshName@User@@QAE?AVFName@@XZ */
  puStack_c = &LAB_10815c30;
  pvStack_10 = ExceptionList;
  puStack_14 = &stack0xffffffd4;
  uStack_8 = 0;
  ExceptionList = &pvStack_10;
  FName::FName((FName *)&uStack_18,0);
  iVar1 = thunk_FUN_10422f80(this + 0x14);
  if (iVar1 != 0) {
    *in_stack_00000004 = *(undefined4 *)(iVar1 + 0x24);
    ExceptionList = pvStack_10;
    return;
  }
  *in_stack_00000004 = uStack_18;
  ExceptionList = pvStack_10;
  return;
}


// ==== 103148c1 FNPawnLight::GetIntensity

/* public: float __thiscall FNPawnLight::GetIntensity(float) */

float __thiscall FNPawnLight::GetIntensity(FNPawnLight *this,float param_1)

{
  int iVar1;
  uint uVar2;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x148c1  4666  ?GetIntensity@FNPawnLight@@QAEMM@Z */
  puStack_c = &LAB_10818ac0;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  if (this[9] != (FNPawnLight)0x1) {
    if (this[9] == (FNPawnLight)0x2) {
      ExceptionList = &pvStack_10;
      iVar1 = FUN_107a6660();
      ExceptionList = pvStack_10;
      return *(float *)(GMath_exref + (iVar1 >> 2 & 0x3fffU) * 4 + 0x8c) * 0.39 + 0.6;
    }
    ExceptionList = &pvStack_10;
    uVar2 = FUN_107a6660();
    if ((uVar2 & 1) != 0) {
      ExceptionList = pvStack_10;
      return 0.0;
    }
  }
  ExceptionList = pvStack_10;
  return 1.0;
}


// ==== 103148c6 AActor::IsEncroacher

/* public: int __thiscall AActor::IsEncroacher(void)const  */

int __thiscall AActor::IsEncroacher(AActor *this)

{
  int iVar1;
  
                    /* 0x148c6  5863  ?IsEncroacher@AActor@@QBEHXZ */
  if (((byte)this[0x2f8] & 1) != 0) {
    if ((*(int *)(this + 0x38) != 0) && (iVar1 = (**(code **)(*(int *)this + 0x2e4))(), iVar1 != 0))
    {
      return 1;
    }
    if (this[0x34] == (AActor)0xe) {
      return 1;
    }
    if ((this[0x34] == (AActor)0xd) &&
       (iVar1 = UObject::IsA((UObject *)this,&AKConstraint::PrivateStaticClass), iVar1 == 0)) {
      return 1;
    }
  }
  return 0;
}


// ==== 103148cb FLightMap::GetUClamp

/* public: virtual enum ETexClampMode __thiscall FLightMap::GetUClamp(void) */

ETexClampMode __thiscall FLightMap::GetUClamp(FLightMap *this)

{
                    /* 0x148cb  5260  ?GetUClamp@FLightMap@@UAE?AW4ETexClampMode@@XZ */
  return 1;
}


// ==== 103148d0 ANCubics::NCubicSkillInit

/* public: void __thiscall ANCubics::NCubicSkillInit(class APawn *,class APawn *,int) */

void __thiscall ANCubics::NCubicSkillInit(ANCubics *this,APawn *param_1,APawn *param_2,int param_3)

{
                    /* 0x148d0  6212  ?NCubicSkillInit@ANCubics@@QAEXPAVAPawn@@0H@Z */
  if ((param_2 != (APawn *)0x0) && (param_1 != (APawn *)0x0)) {
    *(int *)(this + 0x4f0) = param_3;
    *(APawn **)(this + 0x4f4) = param_2;
    if (param_3 != 0) {
      this[0x4dd] = (ANCubics)0x2;
      *(undefined4 *)(this + 0x4f8) = 0;
    }
  }
  return;
}


// ==== 103148d5 FNPawnLight::Init

/* public: void __thiscall FNPawnLight::Init(int,class FVector,class FRotator,unsigned char,unsigned
   char,class FPlane,float,float,unsigned char) */

void __thiscall
FNPawnLight::Init(FNPawnLight *this,FNPawnLight param_1,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  FNPawnLight in_stack_00000020;
  FNPawnLight in_stack_00000024;
  undefined4 in_stack_00000028;
  undefined4 in_stack_0000002c;
  undefined4 in_stack_00000030;
  undefined4 in_stack_00000034;
  float in_stack_00000038;
  FNPawnLight in_stack_0000003c;
  
                    /* 0x148d5  5433  ?Init@FNPawnLight@@QAEXHVFVector@@VFRotator@@EEVFPlane@@MME@Z
                        */
  this[8] = param_1;
  this[9] = in_stack_00000020;
  *(undefined4 *)(this + 0x1c) = in_stack_00000028;
  *(undefined4 *)(this + 0x20) = in_stack_0000002c;
  this[10] = in_stack_00000024;
  *(undefined4 *)(this + 0x2c) = param_3;
  *(undefined4 *)(this + 0x24) = in_stack_00000030;
  *(undefined4 *)(this + 0x28) = in_stack_00000034;
  *(undefined4 *)(this + 0x30) = param_4;
  *(undefined4 *)(this + 0x34) = param_5;
  puVar2 = (undefined4 *)FRotator::Vector((FRotator *)&stack0x00000014);
  *(undefined4 *)(this + 0x38) = *puVar2;
  *(undefined4 *)(this + 0x3c) = puVar2[1];
  uVar1 = puVar2[2];
  *(float *)(this + 0x44) = (in_stack_00000038 + 1.0) * 25.0;
  *(undefined4 *)(this + 0x4c) = in_stack_00000034;
  *(undefined4 *)(this + 0x40) = uVar1;
  this[0xb] = in_stack_0000003c;
  GetIntensity(this,0.0);
  puVar2 = (undefined4 *)FPlane::operator*((FPlane *)(this + 0x1c),(float)&stack0x00000024);
  *(undefined4 *)(this + 0xc) = *puVar2;
  *(undefined4 *)(this + 0x10) = puVar2[1];
  *(undefined4 *)(this + 0x14) = puVar2[2];
  *(undefined4 *)(this + 0x18) = puVar2[3];
  return;
}


// ==== 103148da AActor::execKSetCOMOffset

/* public: void __thiscall AActor::execKSetCOMOffset(struct FFrame &,void * const) */

void __thiscall AActor::execKSetCOMOffset(AActor *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  int iVar2;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined1 *puStack_14;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x148da  9287  ?execKSetCOMOffset@AActor@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_10811210;
  pvStack_10 = ExceptionList;
  puStack_14 = &stack0xffffffcc;
  uStack_8 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  ExceptionList = &pvStack_10;
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&uStack_28);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  if ((*(int *)(this + 0x348) != 0) &&
     (iVar2 = thunk_FUN_1043fb50(*(int *)(this + 0x348)), iVar2 != 0)) {
    *(undefined4 *)(iVar2 + 0xb4) = uStack_28;
    *(undefined4 *)(iVar2 + 0xb8) = uStack_24;
    *(undefined4 *)(iVar2 + 0xbc) = uStack_20;
  }
  ExceptionList = pvStack_10;
  return;
}


// ==== 103148df AVolume::execEncompasses

/* public: void __thiscall AVolume::execEncompasses(struct FFrame &,void * const) */

void __thiscall AVolume::execEncompasses(AVolume *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  int iVar2;
  int *unaff_EDI;
  undefined4 uStack_4;
  
                    /* 0x148df  9185  ?execEncompasses@AVolume@@QAEXAAUFFrame@@QAX@Z */
  uStack_4 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&uStack_4);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  iVar2 = Encompasses(this,unaff_EDI[0x6f],unaff_EDI[0x70],unaff_EDI[0x71]);
  *unaff_EDI = iVar2;
  return;
}


// ==== 103148ee UVertexStreamPosNormTex::operator_new

/* public: static void * __cdecl UVertexStreamPosNormTex::operator new(unsigned int,class UObject
   *,class FName,unsigned long) */

void * __cdecl
UVertexStreamPosNormTex::operator_new
          (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  UObject *pUVar1;
  
                    /* 0x148ee  2108  ??2UVertexStreamPosNormTex@@SAPAXIPAVUObject@@VFName@@K@Z */
  pUVar1 = UObject::StaticAllocateObject
                     (&PrivateStaticClass,param_2,param_3,param_4,0,*(undefined4 *)GError_exref,0,0)
  ;
  return pUVar1;
}


// ==== 103148f3 thunk_FUN_1037a350 thunk -> 1037a350

// ==== 103148f8 FSkinVertexStream::GetStaticVertexPool

/* public: virtual class FVertexPool * __thiscall FSkinVertexStream::GetStaticVertexPool(void) */

FVertexPool * __thiscall FSkinVertexStream::GetStaticVertexPool(FSkinVertexStream *this)

{
                    /* 0x148f8  5166  ?GetStaticVertexPool@FSkinVertexStream@@UAEPAVFVertexPool@@XZ
                        */
  return *(FVertexPool **)(this + 0x34);
}


// ==== 10314902 UMeshInstance::GetRenderBoundingSphere

/* public: virtual class FSphere __thiscall UMeshInstance::GetRenderBoundingSphere(class AActor
   const *) */

AActor * __thiscall UMeshInstance::GetRenderBoundingSphere(UMeshInstance *this,AActor *param_1)

{
  int *piVar1;
  undefined4 in_stack_00000008;
  
                    /* 0x14902  4986
                       ?GetRenderBoundingSphere@UMeshInstance@@UAE?AVFSphere@@PBVAActor@@@Z */
  piVar1 = (int *)(**(code **)(*(int *)this + 0x94))();
  (**(code **)(*piVar1 + 0x74))(param_1,in_stack_00000008);
  return param_1;
}


// ==== 10314907 UKarmaParamsRBFull::operator=

/* public: class UKarmaParamsRBFull & __thiscall UKarmaParamsRBFull::operator=(class
   UKarmaParamsRBFull const &) */

UKarmaParamsRBFull * __thiscall
UKarmaParamsRBFull::operator=(UKarmaParamsRBFull *this,UKarmaParamsRBFull *param_1)

{
                    /* 0x14907  2526  ??4UKarmaParamsRBFull@@QAEAAV0@ABV0@@Z */
  UKarmaParams::operator=((UKarmaParams *)this,(UKarmaParams *)param_1);
  *(undefined4 *)(this + 0x9c) = *(undefined4 *)(param_1 + 0x9c);
  *(undefined4 *)(this + 0xa0) = *(undefined4 *)(param_1 + 0xa0);
  *(undefined4 *)(this + 0xa4) = *(undefined4 *)(param_1 + 0xa4);
  *(undefined4 *)(this + 0xa8) = *(undefined4 *)(param_1 + 0xa8);
  *(undefined4 *)(this + 0xac) = *(undefined4 *)(param_1 + 0xac);
  *(undefined4 *)(this + 0xb0) = *(undefined4 *)(param_1 + 0xb0);
  *(undefined4 *)(this + 0xb4) = *(undefined4 *)(param_1 + 0xb4);
  *(undefined4 *)(this + 0xb8) = *(undefined4 *)(param_1 + 0xb8);
  *(undefined4 *)(this + 0xbc) = *(undefined4 *)(param_1 + 0xbc);
  return this;
}


// ==== 1031490c FURL::operator==

/* public: int __thiscall FURL::operator==(class FURL const &)const  */

int __thiscall FURL::operator==(FURL *this,FURL *param_1)

{
  int iVar1;
  int iVar2;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x1490c  2697  ??8FURL@@QBEHABV0@@Z */
  puStack_c = &LAB_1082f540;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  ExceptionList = &pvStack_10;
  iVar1 = FString::operator!=((FString *)this,(FString *)param_1);
  if (iVar1 == 0) {
    iVar1 = FString::operator!=((FString *)(this + 0xc),(FString *)(param_1 + 0xc));
    if (iVar1 == 0) {
      iVar1 = FString::operator!=((FString *)(this + 0x1c),(FString *)(param_1 + 0x1c));
      if (((iVar1 == 0) && (*(int *)(this + 0x18) == *(int *)(param_1 + 0x18))) &&
         (*(int *)(this + 0x2c) == *(int *)(param_1 + 0x2c))) {
        iVar1 = 0;
        while( true ) {
          if (*(int *)(this + 0x2c) <= iVar1) {
            ExceptionList = pvStack_10;
            return 1;
          }
          iVar2 = FString::operator!=((FString *)(*(int *)(this + 0x28) + iVar1 * 0xc),
                                      (FString *)(*(int *)(param_1 + 0x28) + iVar1 * 0xc));
          if (iVar2 != 0) break;
          iVar1 = iVar1 + 1;
        }
      }
    }
  }
  ExceptionList = pvStack_10;
  return 0;
}


// ==== 10314911 FSkinVertexStream::FSkinVertexStream

/* public: __thiscall FSkinVertexStream::FSkinVertexStream(class FSkinVertexStream const &) */

FSkinVertexStream * __thiscall
FSkinVertexStream::FSkinVertexStream(FSkinVertexStream *this,FSkinVertexStream *param_1)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x14911  526  ??0FSkinVertexStream@@QAE@ABV0@@Z */
  puStack_8 = &LAB_108001bb;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *(undefined ***)this = FRenderResource::vftable;
  *(undefined4 *)(this + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
  *(undefined ***)this = FVertexStream::vftable;
  uStack_4 = 1;
  *(undefined ***)this = vftable;
  *(undefined4 *)(this + 0xc) = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(this + 0x10) = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)(this + 0x14) = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)(this + 0x18) = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)(this + 0x1c) = *(undefined4 *)(param_1 + 0x1c);
  thunk_FUN_1037f080(param_1 + 0x20);
  *(undefined4 *)(this + 0x2c) = *(undefined4 *)(param_1 + 0x2c);
  *(undefined4 *)(this + 0x30) = *(undefined4 *)(param_1 + 0x30);
  *(undefined4 *)(this + 0x34) = *(undefined4 *)(param_1 + 0x34);
  *(undefined4 *)(this + 0x38) = *(undefined4 *)(param_1 + 0x38);
  ExceptionList = pvStack_c;
  return this;
}


// ==== 10314916 thunk_FUN_10370850 thunk -> 10370850

// ==== 1031491b thunk_FUN_104aed20 thunk -> 104aed20

// ==== 10314920 FNAbnormalStat_DOT_WIND::Init

/* public: virtual int __thiscall FNAbnormalStat_DOT_WIND::Init(void) */

int __thiscall FNAbnormalStat_DOT_WIND::Init(FNAbnormalStat_DOT_WIND *this)

{
                    /* 0x14920  5412  ?Init@FNAbnormalStat_DOT_WIND@@UAEHXZ */
  if (*(int *)(this + 0xc) == 0) {
    return 0;
  }
  *(undefined4 *)(this + 0x20) = 0x40400000;
  *(undefined4 *)(this + 0x18) = 0x40400000;
  return 1;
}


// ==== 10314925 ANCubics::ANCubics

/* public: __thiscall ANCubics::ANCubics(void) */

ANCubics * __thiscall ANCubics::ANCubics(ANCubics *this)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x14925  162  ??0ANCubics@@QAE@XZ */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_10806026;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  AEmitter::AEmitter((AEmitter *)this);
  uStack_4 = 0;
  *(undefined ***)this = vftable;
  FRotator::FRotator((FRotator *)(this + 0x4fc));
  FNMagicInfo::FNMagicInfo((FNMagicInfo *)(this + 0x508));
  ExceptionList = pvStack_c;
  return this;
}


// ==== 1031492a UNetworkHandler::MTL

/* public: virtual void __thiscall UNetworkHandler::MTL(class AActor *,class FVector,class
   FVector,class AActor *,int) */

void __thiscall
UNetworkHandler::MTL
          (UNetworkHandler *this,int param_1,float param_3,float param_4,float param_5,float param_6
          ,FOutputDevice *param_7,float param_8,int param_9,int param_10)

{
  UClass *pUVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  int unaff_EDI;
  UNetworkHandler **ppUVar9;
  undefined4 *puVar10;
  UNetworkHandler *pUStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined1 auStack_c [8];
  undefined4 uStack_4;
  
                    /* 0x1492a  6079  ?MTL@UNetworkHandler@@UAEXPAVAActor@@VFVector@@10H@Z */
  pUStack_1c = this;
  if (param_10 == 0) {
    if (param_9 != 0) {
      for (pUVar1 = *(UClass **)(param_9 + 0x24); pUVar1 != (UClass *)0x0;
          pUVar1 = *(UClass **)(pUVar1 + 0x34)) {
        iVar8 = param_9;
        if (pUVar1 == &AVehicle::PrivateStaticClass) {
LAB_104221b3:
          param_3 = param_3 - *(float *)(iVar8 + 0x1bc);
          puVar10 = &uStack_18;
          param_4 = param_4 - *(float *)(iVar8 + 0x1c0);
          param_5 = param_5 - *(float *)(iVar8 + 0x1c4);
          param_6 = param_6 - *(float *)(iVar8 + 0x1bc);
          param_7 = (FOutputDevice *)((float)param_7 - *(float *)(iVar8 + 0x1c0));
          param_8 = param_8 - *(float *)(iVar8 + 0x1c4);
          uStack_18 = 0;
          uStack_14 = 0;
          uStack_10 = 0x3f800000;
          iVar4 = FVector::RotateAngleAxis
                            ((FVector *)&param_3,(int)auStack_c,
                             (FVector *)-(*(uint *)(iVar8 + 0x1cc) & 0xffff));
          param_3 = *(float *)(iVar4 + 4);
          param_4 = *(float *)(iVar4 + 8);
          pUStack_1c = (UNetworkHandler *)0x0;
          uStack_18 = 0;
          ppUVar9 = &pUStack_1c;
          uStack_14 = 0x3f800000;
          puVar5 = (undefined4 *)
                   FVector::RotateAngleAxis
                             ((FVector *)&param_5,(int)&uStack_10,
                              (FVector *)-(*(uint *)(iVar8 + 0x1cc) & 0xffff));
          param_4 = (float)*puVar5;
          param_5 = (float)puVar5[1];
          param_6 = (float)puVar5[2];
          uVar3 = FUN_107a6660(ppUVar9,puVar10);
          uVar6 = FUN_107a6660();
          uVar7 = FUN_107a6660();
          param_7 = (FOutputDevice *)FUN_107a6660();
          param_8 = (float)FUN_107a6660();
          uStack_4 = FUN_107a6660();
          (**(code **)(**(int **)(unaff_EDI + 0x48) + 0x68))
                    (*(int **)(unaff_EDI + 0x48),"cddddddd",0x5c,*(undefined4 *)(iVar8 + 0x60),uVar3
                     ,uVar6,uVar7,param_7,param_8,uStack_4);
          FOutputDevice::Logf(param_7,*(ushort **)GNetworkLog_exref);
          return;
        }
      }
    }
  }
  else {
    iVar8 = *(int *)(param_1 + 0x40);
    if (iVar8 != 0) {
      for (pUVar1 = *(UClass **)(iVar8 + 0x24); pUVar1 != (UClass *)0x0;
          pUVar1 = *(UClass **)(pUVar1 + 0x34)) {
        if (pUVar1 == &AVehicle::PrivateStaticClass) goto LAB_104221b3;
      }
    }
  }
  piVar2 = *(int **)(this + 0x48);
  iVar8 = *piVar2;
  uVar3 = FUN_107a6660(param_10 == 0);
  uVar3 = FUN_107a6660(uVar3);
  uVar3 = FUN_107a6660(uVar3);
  uVar3 = FUN_107a6660(uVar3);
  uVar3 = FUN_107a6660(uVar3);
  uVar3 = FUN_107a6660(uVar3);
  (**(code **)(iVar8 + 0x68))(piVar2,"cddddddd",1,uVar3);
  return;
}


// ==== 10314934 thunk_FUN_1072d140 thunk -> 1072d140

// ==== 10314948 ASceneManager::GetLocation

/* public: class FVector __thiscall ASceneManager::GetLocation(class TArray<class FVector> *,float)
    */

TArray<FVector> * __thiscall
ASceneManager::GetLocation(ASceneManager *this,TArray<FVector> *param_1,float param_2)

{
  undefined4 *puVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  float10 extraout_ST0;
  float in_stack_0000000c;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x14948  4732
                       ?GetLocation@ASceneManager@@QAE?AVFVector@@PAV?$TArray@VFVector@@@@M@Z */
  puStack_c = &LAB_108268e0;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  ExceptionList = &pvStack_10;
  GetActionPctFromScenePct(this,in_stack_0000000c);
  iVar5 = FUN_107a6660();
  puVar1 = (undefined4 *)(*(int *)param_2 + iVar5 * 0xc);
  *(undefined4 *)param_1 = *puVar1;
  *(undefined4 *)(param_1 + 4) = puVar1[1];
  *(undefined4 *)(param_1 + 8) = puVar1[2];
  if ((float10)0 != extraout_ST0 - (float10)iVar5) {
    fVar2 = (float)puVar1[4];
    fVar3 = (float)puVar1[5];
    fVar4 = (float)(extraout_ST0 - (float10)iVar5);
    *(float *)param_1 = fVar4 * ((float)puVar1[3] - *(float *)param_1) + *(float *)param_1;
    *(float *)(param_1 + 4) = *(float *)(param_1 + 4) + (fVar2 - *(float *)(param_1 + 4)) * fVar4;
    *(float *)(param_1 + 8) = *(float *)(param_1 + 8) + fVar4 * (fVar3 - *(float *)(param_1 + 8));
  }
  ExceptionList = pvStack_10;
  return param_1;
}


// ==== 10314957 thunk_FUN_1076d3b0 thunk -> 1076d3b0

// ==== 1031495c FDirectionalLightMapSceneNode::~FDirectionalLightMapSceneNode

/* public: virtual __thiscall FDirectionalLightMapSceneNode::~FDirectionalLightMapSceneNode(void) */

void __thiscall
FDirectionalLightMapSceneNode::~FDirectionalLightMapSceneNode(FDirectionalLightMapSceneNode *this)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x1495c  1184  ??1FDirectionalLightMapSceneNode@@UAE@XZ */
  puStack_8 = &LAB_10821960;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *(undefined ***)this = FLightMapSceneNode::vftable;
  uStack_4 = 0xffffffff;
  FLevelSceneNode::~FLevelSceneNode((FLevelSceneNode *)this);
  ExceptionList = pvStack_c;
  return;
}


// ==== 1031496b UGameEngine::OnAddManorBuyList

/* public: virtual int __thiscall UGameEngine::OnAddManorBuyList(struct ItemInfo &) */

int __thiscall UGameEngine::OnAddManorBuyList(UGameEngine *this,ItemInfo *param_1)

{
                    /* 0x1496b  6297  ?OnAddManorBuyList@UGameEngine@@UAEHAAUItemInfo@@@Z */
  (**(code **)(**(int **)(this + 0x68) + 0x120))(param_1);
  return 1;
}


// ==== 10314970 thunk_FUN_103a33e0 thunk -> 103a33e0

// ==== 1031497a thunk_FUN_103f5040 thunk -> 103f5040

// ==== 10314984 thunk_FUN_10399640 thunk -> 10399640

// ==== 1031498e AActor::execKGetMass

/* public: void __thiscall AActor::execKGetMass(struct FFrame &,void * const) */

void __thiscall AActor::execKGetMass(AActor *this,FFrame *param_1,void *param_2)

{
  int iVar1;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x1498e  9273  ?execKGetMass@AActor@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_108111e0;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  ExceptionList = &pvStack_10;
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  if (*(int *)(this + 0x348) != 0) {
    iVar1 = thunk_FUN_1043fb20(*(int *)(this + 0x348));
    if (iVar1 != 0) {
      *(undefined4 *)param_2 = *(undefined4 *)(iVar1 + 0x60);
      ExceptionList = pvStack_10;
      return;
    }
  }
  ExceptionList = pvStack_10;
  return;
}


// ==== 10314993 ULodMeshInstance::GetAnimSeq

/* public: struct FMeshAnimSeq * __thiscall ULodMeshInstance::GetAnimSeq(class FName) */

FMeshAnimSeq * __thiscall ULodMeshInstance::GetAnimSeq(void)

{
                    /* 0x14993  4363  ?GetAnimSeq@ULodMeshInstance@@QAEPAUFMeshAnimSeq@@VFName@@@Z
                        */
  return (FMeshAnimSeq *)0x0;
}


// ==== 10314998 AActor::IsInOctree

/* public: int __thiscall AActor::IsInOctree(void) */

int __thiscall AActor::IsInOctree(AActor *this)

{
                    /* 0x14998  5878  ?IsInOctree@AActor@@QAEHXZ */
  return (uint)(0 < *(int *)(this + 0x16c));
}


// ==== 1031499d UExtraSkeletalMeshInstance::InternalConstructor

/* public: static void __cdecl UExtraSkeletalMeshInstance::InternalConstructor(void *) */

void __cdecl UExtraSkeletalMeshInstance::InternalConstructor(void *param_1)

{
                    /* 0x1499d  5674  ?InternalConstructor@UExtraSkeletalMeshInstance@@SAXPAX@Z */
  if (param_1 != (void *)0x0) {
    UExtraSkeletalMeshInstance(param_1);
    return;
  }
  return;
}


// ==== 103149a2 FLightMap::GetVClamp

/* public: virtual enum ETexClampMode __thiscall FLightMap::GetVClamp(void) */

ETexClampMode __thiscall FLightMap::GetVClamp(FLightMap *this)

{
                    /* 0x149a2  5277  ?GetVClamp@FLightMap@@UAE?AW4ETexClampMode@@XZ */
  return 1;
}


// ==== 103149a7 USkeletalMesh::PostLoad

/* public: virtual void __thiscall USkeletalMesh::PostLoad(void) */

void __thiscall USkeletalMesh::PostLoad(USkeletalMesh *this)

{
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x149a7  6812  ?PostLoad@USkeletalMesh@@UAEXXZ */
  puStack_c = &LAB_10827760;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  ExceptionList = &pvStack_10;
  UObject::PostLoad((UObject *)this);
  if (*(int *)(this + 100) < 2) {
    ReconstructRawMesh(this);
  }
  if (*(int *)(this + 0x21c) == 0) {
    if (*(int *)GLog_exref != 0) {
      UObject::GetName((UObject *)this);
      FOutputDevice::Logf2((FOutputDevice *)GLog_exref,*(ushort **)GLog_exref);
    }
    GenerateLodModel(this,0,1.0,1.0,4,0);
    GenerateLodModel(this,1,0.7,0.5,1,0);
    GenerateLodModel(this,2,0.35,0.3,1,0);
    GenerateLodModel(this,3,0.1,0.17,1,0);
  }
  ExceptionList = pvStack_10;
  return;
}


// ==== 103149ac thunk_FUN_10394c20 thunk -> 10394c20

// ==== 103149b6 UNetworkHandler::RequestTrade

/* public: virtual int __thiscall UNetworkHandler::RequestTrade(int) */

int __thiscall UNetworkHandler::RequestTrade(UNetworkHandler *this,int param_1)

{
                    /* 0x149b6  7577  ?RequestTrade@UNetworkHandler@@UAEHH@Z */
  (**(code **)(**(int **)(this + 0x48) + 0x68))(*(int **)(this + 0x48),&DAT_1087f8f8,0x15,param_1);
  FOutputDevice::Logf(*(FOutputDevice **)GNetworkLog_exref,
                      (ushort *)*(FOutputDevice **)GNetworkLog_exref);
  return 1;
}


// ==== 103149bb thunk_FUN_10681750 thunk -> 10681750

// ==== 103149c0 UNetworkHandler::InternalConstructor

/* public: static void __cdecl UNetworkHandler::InternalConstructor(void *) */

void __cdecl UNetworkHandler::InternalConstructor(void *param_1)

{
                    /* 0x149c0  5719  ?InternalConstructor@UNetworkHandler@@SAXPAX@Z */
  if (param_1 != (void *)0x0) {
    UNetworkHandler(param_1);
    return;
  }
  return;
}


// ==== 103149c5 UTexture::Prime

/* public: virtual void __thiscall UTexture::Prime(void) */

void __thiscall UTexture::Prime(UTexture *this)

{
  code *pcVar1;
  
                    /* 0x149c5  6898  ?Prime@UTexture@@UAEXXZ */
  if ((byte)this[0x5dd] < (byte)this[0x5dc]) {
    do {
      pcVar1 = *(code **)(*(int *)this + 0xc4);
      this[0x5dd] = (UTexture)((char)this[0x5dd] + '\x01');
      (*pcVar1)();
    } while ((byte)this[0x5dd] < (byte)this[0x5dc]);
  }
  return;
}


// ==== 103149ca UTexRotator::PostLoad

/* public: virtual void __thiscall UTexRotator::PostLoad(void) */

void __thiscall UTexRotator::PostLoad(UTexRotator *this)

{
                    /* 0x149ca  6817  ?PostLoad@UTexRotator@@UAEXXZ */
  UObject::PostLoad((UObject *)this);
  if ((*(uint *)(this + 0x594) & 1) != 0) {
    *(uint *)(this + 0x594) = *(uint *)(this + 0x594) & 0xfffffffe;
    this[0x584] = (UTexRotator)0x1;
  }
  return;
}


// ==== 103149cf FNAppendixEffect_COLOSSEUM_2::~FNAppendixEffect_COLOSSEUM_2

/* public: virtual __thiscall FNAppendixEffect_COLOSSEUM_2::~FNAppendixEffect_COLOSSEUM_2(void) */

void __thiscall
FNAppendixEffect_COLOSSEUM_2::~FNAppendixEffect_COLOSSEUM_2(FNAppendixEffect_COLOSSEUM_2 *this)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x149cf  1239  ??1FNAppendixEffect_COLOSSEUM_2@@UAE@XZ */
  puStack_8 = &LAB_107f3038;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *(undefined ***)this = vftable;
  uStack_4 = 0xffffffff;
  FNAppendixEffect::~FNAppendixEffect((FNAppendixEffect *)this);
  ExceptionList = pvStack_c;
  return;
}


// ==== 103149d4 ColosseumFence::ColosseumFence

/* public: __thiscall ColosseumFence::ColosseumFence(struct ColosseumFence const &) */

ColosseumFence * __thiscall
ColosseumFence::ColosseumFence(ColosseumFence *this,ColosseumFence *param_1)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x149d4  274  ??0ColosseumFence@@QAE@ABU0@@Z */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_107ffc2b;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *(undefined4 *)this = *(undefined4 *)param_1;
  *(undefined4 *)(this + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(this + 0xc) = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(this + 0x10) = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)(this + 0x14) = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)(this + 0x18) = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)(this + 0x1c) = *(undefined4 *)(param_1 + 0x1c);
  *(undefined4 *)(this + 0x20) = *(undefined4 *)(param_1 + 0x20);
  *(undefined4 *)(this + 0x24) = *(undefined4 *)(param_1 + 0x24);
  *(undefined4 *)(this + 0x28) = *(undefined4 *)(param_1 + 0x28);
  thunk_FUN_1032bef0(param_1 + 0x2c);
  ExceptionList = pvStack_c;
  return this;
}


// ==== 103149d9 UConsole::operator_new

/* public: static void * __cdecl UConsole::operator new(unsigned int,enum EInternal *) */

void * __cdecl UConsole::operator_new(uint param_1,EInternal *param_2)

{
                    /* 0x149d9  1837  ??2UConsole@@SAPAXIPAW4EInternal@@@Z */
  return param_2;
}


// ==== 103149de AActor::IsVolumeBrush

/* public: int __thiscall AActor::IsVolumeBrush(void)const  */

int __thiscall AActor::IsVolumeBrush(AActor *this)

{
  int iVar1;
  
                    /* 0x149de  5968  ?IsVolumeBrush@AActor@@QBEHXZ */
  if (*(int *)(this + 0x278) != 0) {
    iVar1 = (**(code **)(*(int *)this + 0x2e8))();
    if (iVar1 != 0) {
      return 1;
    }
  }
  return 0;
}


// ==== 103149e3 thunk_FUN_104a0f10 thunk -> 104a0f10

// ==== 103149e8 thunk_FUN_1049f580 thunk -> 1049f580

// ==== 103149ed FNAbnormalStat_GHOST_STUN::operator=

/* public: class FNAbnormalStat_GHOST_STUN & __thiscall FNAbnormalStat_GHOST_STUN::operator=(class
   FNAbnormalStat_GHOST_STUN const &) */

FNAbnormalStat_GHOST_STUN * __thiscall
FNAbnormalStat_GHOST_STUN::operator=
          (FNAbnormalStat_GHOST_STUN *this,FNAbnormalStat_GHOST_STUN *param_1)

{
                    /* 0x149ed  2329  ??4FNAbnormalStat_GHOST_STUN@@QAEAAV0@ABV0@@Z */
  *(undefined4 *)(this + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(this + 0xc) = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(this + 0x10) = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)(this + 0x14) = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)(this + 0x18) = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)(this + 0x1c) = *(undefined4 *)(param_1 + 0x1c);
  *(undefined4 *)(this + 0x20) = *(undefined4 *)(param_1 + 0x20);
  *(undefined4 *)(this + 0x24) = *(undefined4 *)(param_1 + 0x24);
  *(undefined4 *)(this + 0x28) = *(undefined4 *)(param_1 + 0x28);
  return this;
}


// ==== 103149f2 AActor::SetBase

/* public: virtual void __thiscall AActor::SetBase(class AActor *,class FVector,int) */

void __thiscall AActor::SetBase(AActor *this,AActor *param_1)

{
  AActor *pAVar1;
  undefined1 *puVar2;
  AActor *pAVar3;
  int iVar4;
  undefined4 *puVar5;
  FMatrix *pFVar6;
  FMatrix *pFVar7;
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
  AActor *pAStack_1d8;
  AActor *pAStack_1d4;
  FMatrix aFStack_1c0 [64];
  FMatrix aFStack_180 [64];
  FMatrix aFStack_140 [64];
  FMatrix aFStack_100 [64];
  undefined4 auStack_c0 [16];
  FMatrix aFStack_80 [72];
  AActor *pAStack_38;
  float fStack_34;
  AActor *pAStack_30;
  AActor *pAStack_28;
  AActor *pAStack_24;
  float fStack_20;
  float fStack_1c;
  AActor *pAStack_18;
  undefined1 *puStack_14;
  void *pvStack_10;
  undefined1 *puStack_c;
  uint uStack_8;
  
                    /* 0x149f2  7808  ?SetBase@AActor@@UAEXPAV1@VFVector@@H@Z */
  pAVar1 = param_1;
  puStack_c = &LAB_1081a952;
  pvStack_10 = ExceptionList;
  puStack_14 = &stack0xfffffe34;
  uStack_8 = 0;
  pAVar3 = param_1;
  while( true ) {
    if (pAVar3 == (AActor *)0x0) {
      pAVar3 = *(AActor **)(this + 0x40);
      ExceptionList = &pvStack_10;
      puVar2 = &stack0xfffffe34;
      if (param_1 != pAVar3) {
        ExceptionList = &pvStack_10;
        puVar2 = &stack0xfffffe34;
        if ((pAVar3 != (AActor *)0x0) &&
           (ExceptionList = &pvStack_10, puVar2 = &stack0xfffffe34, ((byte)pAVar3[0x74] & 2) == 0))
        {
          pAStack_1d4 = (AActor *)0x105313ba;
          ExceptionList = &pvStack_10;
          param_1 = this;
          thunk_FUN_104e9650();
          pAStack_1d4 = (AActor *)0x105313c3;
          eventDetach(*(AActor **)(this + 0x40),this);
          puVar2 = puStack_14;
        }
        puStack_14 = puVar2;
        *(AActor **)(this + 0x40) = pAVar1;
        if ((pAVar1 != (AActor *)0x0) && (((byte)pAVar1[0x74] & 2) == 0)) {
          pAStack_1d4 = (AActor *)0x105313e3;
          FName::FName((FName *)&param_1,0);
          pAStack_1d4 = (AActor *)0x105313f3;
          iVar4 = FName::operator==((FName *)(this + 0xd8),(FName *)&param_1);
          if ((iVar4 != 0) && ((*(uint *)(this + 100) & 0x4000) == 0)) {
            if ((((byte)this[0x214] & 1) == 0) || (this[0xc2] == (AActor)0x4)) {
              iVar4 = *(int *)(this + 0x40);
              param_1 = (AActor *)(*(float *)(this + 0x1bc) - *(float *)(iVar4 + 0x1bc));
              fStack_34 = *(float *)(this + 0x1c0) - *(float *)(iVar4 + 0x1c0);
              pAStack_30 = (AActor *)(*(float *)(this + 0x1c4) - *(float *)(iVar4 + 0x1c4));
              *(AActor **)(this + 0x1fc) = param_1;
              *(float *)(this + 0x200) = fStack_34;
              *(AActor **)(this + 0x204) = pAStack_30;
              pAStack_38 = param_1;
              fStack_1c = fStack_34;
              pAStack_18 = pAStack_30;
              UpdateRelativeRotation(this);
            }
            if (((byte)this[0x214] & 1) != 0) {
              pAStack_1d8 = *(AActor **)(*(int *)(this + 0x40) + 0x1c8);
              pAStack_1d4 = *(AActor **)(*(int *)(this + 0x40) + 0x1cc);
              uStack_1dc = 0x105314ab;
              puVar5 = (undefined4 *)thunk_FUN_10327040();
              uStack_8 = uStack_8 & 0xffffff00;
              puVar8 = puVar5;
              pFVar6 = aFStack_140;
              for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 + -1) {
                *(undefined4 *)pFVar6 = *puVar8;
                puVar8 = puVar8 + 1;
                pFVar6 = pFVar6 + 4;
              }
              puVar8 = auStack_c0;
              for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 + -1) {
                *puVar8 = *puVar5;
                puVar5 = puVar5 + 1;
                puVar8 = puVar8 + 1;
              }
              uStack_8._0_1_ = 2;
              iVar4 = *(int *)(this + 0x40);
              param_1 = (AActor *)-*(float *)(iVar4 + 0x1bc);
              pAStack_1d4 = (AActor *)-*(float *)(iVar4 + 0x1c0);
              fStack_20 = -*(float *)(iVar4 + 0x1c4);
              uStack_1dc = 0x10531523;
              pAStack_1d8 = param_1;
              pAStack_28 = param_1;
              pAStack_24 = pAStack_1d4;
              fStack_1c = fStack_20;
              pAStack_18 = pAStack_1d4;
              pFVar6 = (FMatrix *)thunk_FUN_10326fb0();
              uStack_8._0_1_ = 3;
              puVar5 = auStack_c0;
              puVar8 = auStack_20c;
              for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 + -1) {
                *puVar8 = *puVar5;
                puVar5 = puVar5 + 1;
                puVar8 = puVar8 + 1;
              }
              pFStack_210 = aFStack_180;
              uStack_214 = 0x10531548;
              FMatrix::operator*(pFVar6);
              uStack_8._0_1_ = 5;
              uStack_214 = 0x10531557;
              thunk_FUN_103284c0();
              uStack_8._0_1_ = 6;
              uStack_214 = 0x10531567;
              FMatrix::~FMatrix(aFStack_140);
              uStack_8._0_1_ = 7;
              uStack_214 = 0x10531573;
              thunk_FUN_10328510();
              uStack_21c = *(undefined4 *)(this + 0x1bc);
              uStack_218 = *(undefined4 *)(this + 0x1c0);
              uStack_214 = *(undefined4 *)(this + 0x1c4);
              uStack_220 = 0x1053159d;
              puVar5 = (undefined4 *)thunk_FUN_10326fb0();
              uStack_8 = (uint)uStack_8._1_3_ << 8;
              puVar8 = puVar5;
              pFVar6 = aFStack_100;
              for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 + -1) {
                *(undefined4 *)pFVar6 = *puVar8;
                puVar8 = puVar8 + 1;
                pFVar6 = pFVar6 + 4;
              }
              pFVar6 = aFStack_80;
              for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 + -1) {
                *(undefined4 *)pFVar6 = *puVar5;
                puVar5 = puVar5 + 1;
                pFVar6 = pFVar6 + 4;
              }
              uStack_8._0_1_ = 9;
              uStack_21c = *(undefined4 *)(this + 0x1c8);
              uStack_218 = *(undefined4 *)(this + 0x1cc);
              uStack_214 = *(undefined4 *)(this + 0x1d0);
              uStack_220 = 0x105315ea;
              pFVar7 = (FMatrix *)thunk_FUN_105263f0();
              uStack_8._0_1_ = 10;
              pFVar6 = aFStack_80;
              puVar5 = auStack_250;
              for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 + -1) {
                *puVar5 = *(undefined4 *)pFVar6;
                pFVar6 = pFVar6 + 4;
                puVar5 = puVar5 + 1;
              }
              pFStack_254 = aFStack_1c0;
              uStack_258 = 0x1053160c;
              FMatrix::operator*(pFVar7);
              uStack_8._0_1_ = 0xc;
              uStack_258 = 0x1053161b;
              thunk_FUN_10526040();
              uStack_8._0_1_ = 0xd;
              uStack_258 = 0x1053162b;
              FMatrix::~FMatrix(aFStack_100);
              uStack_8 = CONCAT31(uStack_8._1_3_,0xe);
              uStack_258 = 0x1053163a;
              thunk_FUN_103284c0();
              pFVar6 = aFStack_180;
              puVar5 = auStack_294;
              for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 + -1) {
                *puVar5 = *(undefined4 *)pFVar6;
                pFVar6 = pFVar6 + 4;
                puVar5 = puVar5 + 1;
              }
              puVar5 = (undefined4 *)FMatrix::operator*(aFStack_1c0,aFStack_80);
              uStack_8._1_3_ = (uint3)(uStack_8 >> 8);
              pAVar3 = this + 0x218;
              for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 + -1) {
                *(undefined4 *)pAVar3 = *puVar5;
                puVar5 = puVar5 + 1;
                pAVar3 = pAVar3 + 4;
              }
              uStack_8._0_1_ = 0xe;
              FMatrix::~FMatrix(aFStack_80);
              uStack_8._0_1_ = 7;
              FMatrix::~FMatrix(aFStack_1c0);
              uStack_8 = (uint)uStack_8._1_3_ << 8;
              FMatrix::~FMatrix(aFStack_180);
            }
          }
        }
        pAVar3 = *(AActor **)(this + 0x40);
        if ((pAVar3 != (AActor *)0x0) && (((byte)pAVar3[0x74] & 2) == 0)) {
          CompactAttached(pAVar3);
          pAStack_1d4 = (AActor *)0x105316c3;
          pAStack_18 = this;
          thunk_FUN_1037ae60();
          pAStack_1d4 = (AActor *)0x105316cc;
          eventAttach(*(AActor **)(this + 0x40),this);
        }
        puVar2 = puStack_14;
        if (in_stack_00000014 != 0) {
          eventBaseChange(this);
          puVar2 = puStack_14;
        }
      }
      puStack_14 = puVar2;
      if (((*(int *)(this + 0x40) == 0) || ((*(byte *)(*(int *)(this + 0x40) + 0x74) & 2) != 0)) &&
         (*(char *)(*(int *)(this + 0xe0) + 0x5d4) != '\x03')) {
        pAStack_1d4 = (AActor *)0x10531700;
        FName::FName((FName *)&param_1,0);
        *(AActor **)(this + 0xd8) = param_1;
      }
      ExceptionList = pvStack_10;
      return;
    }
    if (pAVar3 == this) break;
    pAVar3 = *(AActor **)(pAVar3 + 0x40);
  }
  return;
}


// ==== 103149f7 AActor::IsALight

/* public: virtual int __thiscall AActor::IsALight(void) */

int __thiscall AActor::IsALight(AActor *this)

{
                    /* 0x149f7  5811  ?IsALight@AActor@@UAEHXZ */
  return 0;
}


// ==== 103149fc thunk_FUN_10729290 thunk -> 10729290

// ==== 10314a01 UGameEngine::AddQuestItem

/* public: virtual void __thiscall UGameEngine::AddQuestItem(struct ItemInfo &) */

void __thiscall UGameEngine::AddQuestItem(UGameEngine *this,ItemInfo *param_1)

{
                    /* 0x14a01  3315  ?AddQuestItem@UGameEngine@@UAEXAAUItemInfo@@@Z */
                    /* WARNING: Could not recover jumptable at 0x1048973b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(this + 0x68) + 0x310))();
  return;
}


// ==== 10314a0b UL2ConsoleWnd::operator_new

/* public: static void * __cdecl UL2ConsoleWnd::operator new(unsigned int,class UObject *,class
   FName,unsigned long) */

void * __cdecl
UL2ConsoleWnd::operator_new
          (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  UObject *pUVar1;
  
                    /* 0x14a0b  1906  ??2UL2ConsoleWnd@@SAPAXIPAVUObject@@VFName@@K@Z */
  pUVar1 = UObject::StaticAllocateObject
                     (&PrivateStaticClass,param_2,param_3,param_4,0,*(undefined4 *)GError_exref,0,0)
  ;
  return pUVar1;
}


// ==== 10314a15 thunk_FUN_1036f620 thunk -> 1036f620

// ==== 10314a1a thunk_FUN_1039a200 thunk -> 1039a200

// ==== 10314a24 UNullRenderDevice::SupportsTextureFormat

/* public: virtual int __thiscall UNullRenderDevice::SupportsTextureFormat(enum ETextureFormat) */

int __thiscall
UNullRenderDevice::SupportsTextureFormat(UNullRenderDevice *this,ETextureFormat param_1)

{
                    /* 0x14a24  8561
                       ?SupportsTextureFormat@UNullRenderDevice@@UAEHW4ETextureFormat@@@Z */
  return 1;
}


// ==== 10314a2e thunk_FUN_103932e0 thunk -> 103932e0

// ==== 10314a38 FTerrainTools::GetOuterRadius

/* public: int __thiscall FTerrainTools::GetOuterRadius(void) */

int __thiscall FTerrainTools::GetOuterRadius(FTerrainTools *this)

{
                    /* 0x14a38  4879  ?GetOuterRadius@FTerrainTools@@QAEHXZ */
  if (*(int *)(this + 4) != 0) {
    return *(int *)(*(int *)(this + 0x50) + 0x58);
  }
  return *(int *)(this + 0x7c);
}


// ==== 10314a3d thunk_FUN_1039d940 thunk -> 1039d940

// ==== 10314a42 UMeshEmitter::operator_new

/* public: static void * __cdecl UMeshEmitter::operator new(unsigned int,class UObject *,class
   FName,unsigned long) */

void * __cdecl
UMeshEmitter::operator_new
          (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  UObject *pUVar1;
  
                    /* 0x14a42  1950  ??2UMeshEmitter@@SAPAXIPAVUObject@@VFName@@K@Z */
  pUVar1 = UObject::StaticAllocateObject
                     (&PrivateStaticClass,param_2,param_3,param_4,0,*(undefined4 *)GError_exref,0,0)
  ;
  return pUVar1;
}


// ==== 10314a4c thunk_FUN_1042cd60 thunk -> 1042cd60

// ==== 10314a51 FSkySceneNode::operator=

/* public: class FSkySceneNode & __thiscall FSkySceneNode::operator=(class FSkySceneNode const &) */

FSkySceneNode * __thiscall FSkySceneNode::operator=(FSkySceneNode *this,FSkySceneNode *param_1)

{
                    /* 0x14a51  2392  ??4FSkySceneNode@@QAEAAV0@ABV0@@Z */
  FLevelSceneNode::operator=((FLevelSceneNode *)this,(FLevelSceneNode *)param_1);
  return this;
}


// ==== 10314a56 FWayPoint::FWayPoint

/* public: __thiscall FWayPoint::FWayPoint(void) */

FWayPoint * __thiscall FWayPoint::FWayPoint(FWayPoint *this)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x14a56  594  ??0FWayPoint@@QAE@XZ */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_107f17ec;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FStringNoInit::FStringNoInit((FStringNoInit *)(this + 0xc));
  ExceptionList = pvStack_c;
  return this;
}


// ==== 10314a5b HHitProxy::Click

/* public: virtual void __thiscall HHitProxy::Click(struct FHitCause const &) */

void __thiscall HHitProxy::Click(HHitProxy *this,FHitCause *param_1)

{
                    /* 0x14a5b  3655  ?Click@HHitProxy@@UAEXABUFHitCause@@@Z */
  (**(code **)**(undefined4 **)param_1)(param_1,this);
  return;
}


// ==== 10314a60 UMeshObject::StaticClass

/* public: static class UClass * __cdecl UMeshObject::StaticClass(void) */

UClass * __cdecl UMeshObject::StaticClass(void)

{
                    /* 0x14a60  8429  ?StaticClass@UMeshObject@@SAPAVUClass@@XZ */
  return &PrivateStaticClass;
}


// ==== 10314a65 thunk_FUN_1051d4a0 thunk -> 1051d4a0

// ==== 10314a6a AStationaryWeapons::PostNetReceive

/* public: virtual void __thiscall AStationaryWeapons::PostNetReceive(void) */

void __thiscall AStationaryWeapons::PostNetReceive(AStationaryWeapons *this)

{
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x14a6a  6828  ?PostNetReceive@AStationaryWeapons@@UAEXXZ */
  puStack_c = &LAB_1081aa20;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  ExceptionList = &pvStack_10;
  AActor::PostNetReceive((AActor *)this);
  if (this[0x404] != this[0x405]) {
    if (this[0x404] == (AStationaryWeapons)0x0) {
      eventDeactivated(this);
    }
    else {
      eventActivated(this);
    }
    this[0x405] = this[0x404];
  }
  ExceptionList = pvStack_10;
  return;
}


// ==== 10314a6f AController::LineOfSightTo

/* public: unsigned long __thiscall AController::LineOfSightTo(class AActor *,int) */

ulong __thiscall AController::LineOfSightTo(AController *this,AActor *param_1,int param_2)

{
  AActor *pAVar1;
  int iVar2;
  ulong uVar3;
  int iVar4;
  byte bVar5;
  float fVar6;
  undefined1 auStack_144 [4];
  AActor *pAStack_140;
  float afStack_110 [4];
  float fStack_100;
  float fStack_fc;
  float fStack_f8;
  float fStack_f4;
  float fStack_f0;
  float fStack_ec;
  float fStack_e8;
  float fStack_e4;
  float fStack_e0;
  float fStack_dc;
  float fStack_d8;
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  float fStack_c8;
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  float fStack_b8;
  float fStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  float fStack_a0;
  float fStack_9c;
  float fStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  float fStack_88;
  float fStack_84;
  float fStack_80;
  undefined1 *puStack_7c;
  void *pvStack_78;
  undefined1 *puStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  int iStack_54;
  int iStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  int iStack_30;
  int iStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  float fStack_20;
  float fStack_1c;
  undefined4 uStack_18;
  undefined8 uStack_14;
  float fStack_c;
  float fStack_8;
  
                    /* 0x14a6f  6019  ?LineOfSightTo@AController@@QAEKPAVAActor@@H@Z */
  puStack_74 = &LAB_1081c3b0;
  pvStack_78 = ExceptionList;
  puStack_7c = &stack0xfffffe68;
  uStack_70 = 0;
  if (param_1 == (AActor *)0x0) {
LAB_10567c45:
    uVar3 = 0;
  }
  else {
    ExceptionList = &pvStack_78;
    iVar2 = (**(code **)(*(int *)this + 0x340))();
    uStack_28 = *(undefined4 *)(iVar2 + 0x1bc);
    uStack_24 = *(undefined4 *)(iVar2 + 0x1c0);
    fStack_20 = *(float *)(iVar2 + 0x1c4);
    if (iVar2 == *(int *)(this + 0x3bc)) {
      fStack_20 = *(float *)(*(int *)(this + 0x3bc) + 0x159c) + fStack_20;
    }
    thunk_FUN_104419f0(0x3f800000,0);
    pAVar1 = param_1 + 0x1bc;
    if (param_1 == *(AActor **)(this + 0x460)) {
      uStack_18 = 0;
      uStack_14 = 0.0;
      (**(code **)(**(int **)(this + 0xe4) + 0xe4))(auStack_144,this,pAVar1,&uStack_28,0x286,0,0,0);
      if (pAStack_140 != (AActor *)0x0) {
        if (pAStack_140 != param_1) {
          uStack_94 = 0;
          uStack_90 = 0;
          uStack_8c = 0;
          iVar4 = *(int *)(this + 0x460);
          fStack_bc = *(float *)(iVar4 + 0x1bc) + 0.0;
          fStack_b8 = *(float *)(iVar4 + 0x1c0) + 0.0;
          fStack_b4 = *(float *)(iVar4 + 0x1c4) + *(float *)(iVar4 + 0x159c);
          fStack_c = fStack_bc;
          fStack_8 = fStack_b8;
          (**(code **)(**(int **)(this + 0xe4) + 0xe4))
                    (auStack_144,this,&fStack_bc,&uStack_28,0x286,0,0,0);
        }
        if ((pAStack_140 != (AActor *)0x0) && (pAStack_140 != param_1)) {
          fStack_e0 = *(float *)pAVar1 - *(float *)(iVar2 + 0x1bc);
          fStack_dc = *(float *)(param_1 + 0x1c0) - *(float *)(iVar2 + 0x1c0);
          fStack_d8 = *(float *)(param_1 + 0x1c4) - *(float *)(iVar2 + 0x1c4);
          uStack_14 = (double)(*(float *)(param_1 + 0x2f0) * *(float *)(param_1 + 0x2f0));
          fStack_8 = fStack_d8;
          fVar6 = FVector::SizeSquared((FVector *)&fStack_e0);
          bVar5 = (float)uStack_14 / fVar6 < 0.0001 |
                  (byte)((ushort)((ushort)NAN((float)uStack_14 / fVar6) << 10) >> 8);
LAB_10567c3a:
          if ((POPCOUNT(bVar5) & 1U) == 0) {
            _vector_constructor_iterator_(afStack_110,0xc,4,FVector_exref);
            afStack_110[0] = *(float *)pAVar1 - *(float *)(param_1 + 0x2f0);
            afStack_110[1] = *(float *)(param_1 + 0x1c0) - *(float *)(param_1 + 0x2f0) * -1.0;
            afStack_110[2] = *(float *)(param_1 + 0x1c4) - 0.0;
            afStack_110[3] = *(float *)(param_1 + 0x2f0) + *(float *)pAVar1;
            fStack_100 = *(float *)(param_1 + 0x1c0) + *(float *)(param_1 + 0x2f0);
            fStack_fc = *(float *)(param_1 + 0x1c4) + 0.0;
            fStack_f8 = *(float *)pAVar1 - *(float *)(param_1 + 0x2f0);
            fStack_f4 = *(float *)(param_1 + 0x1c0) - *(float *)(param_1 + 0x2f0);
            fStack_f0 = *(float *)(param_1 + 0x1c4) - 0.0;
            fStack_ec = *(float *)(param_1 + 0x2f0) + *(float *)pAVar1;
            fStack_e8 = *(float *)(param_1 + 0x1c0) + *(float *)(param_1 + 0x2f0) * -1.0;
            fStack_e4 = *(float *)(param_1 + 0x1c4) + 0.0;
            uStack_14 = (double)CONCAT44(fStack_e4,(undefined4)uStack_14);
            iStack_30 = 0;
            iStack_2c = 0;
            fStack_a0 = fStack_ec;
            fStack_9c = fStack_e8;
            fStack_98 = fStack_e4;
            fStack_88 = fStack_f8;
            fStack_84 = fStack_f4;
            fStack_80 = fStack_f0;
            fStack_60 = afStack_110[3];
            fStack_5c = fStack_100;
            fStack_58 = fStack_fc;
            fStack_40 = afStack_110[0];
            fStack_3c = afStack_110[1];
            fStack_38 = afStack_110[2];
            fStack_34 = FVector::SizeSquared((FVector *)afStack_110);
            iVar2 = 1;
            fStack_1c = fStack_34;
            while (iVar4 = iVar2, iStack_54 = iVar4, iVar4 < 4) {
              fVar6 = FVector::SizeSquared((FVector *)(afStack_110 + iVar4 * 3));
              if (fVar6 <= fStack_34) {
                if (fStack_1c <= fVar6) {
                  iVar2 = iVar4 + 1;
                }
                else {
                  iVar2 = iVar4 + 1;
                  iStack_30 = iVar4;
                  fStack_1c = fVar6;
                }
              }
              else {
                iVar2 = iVar4 + 1;
                fStack_34 = fVar6;
                iStack_2c = iVar4;
              }
            }
            for (iVar2 = 0; iVar2 < 3; iVar2 = iVar2 + 1) {
              if ((iVar2 != iStack_30) && (iVar2 != iStack_2c)) {
                uStack_b0 = 0;
                uStack_ac = 0;
                uStack_a8 = 0;
                iStack_50 = iVar2;
                (**(code **)(**(int **)(this + 0xe4) + 0xe4))
                          (auStack_144,this,afStack_110 + iVar2 * 3,&uStack_28,0x286,0,0,0);
                if ((pAStack_140 == (AActor *)0x0) || (pAStack_140 == param_1)) goto LAB_10567cca;
              }
            }
          }
          goto LAB_10567c45;
        }
      }
      *(undefined4 *)(this + 0x480) = *(undefined4 *)(*(int *)(this + 0xe0) + 0x4bc);
      iVar2 = (**(code **)(*(int *)this + 0x340))();
      *(undefined4 *)(this + 0x474) = *(undefined4 *)(iVar2 + 0x1bc);
      *(undefined4 *)(this + 0x478) = *(undefined4 *)(iVar2 + 0x1c0);
      *(undefined4 *)(this + 0x47c) = *(undefined4 *)(iVar2 + 0x1c4);
      iVar2 = *(int *)(this + 0x460);
      *(undefined4 *)(this + 0x468) = *(undefined4 *)(iVar2 + 0x1bc);
      *(undefined4 *)(this + 0x46c) = *(undefined4 *)(iVar2 + 0x1c0);
      *(undefined4 *)(this + 0x470) = *(undefined4 *)(iVar2 + 0x1c4);
      *(uint *)(this + 0x3d0) = *(uint *)(this + 0x3d0) | 0x200;
    }
    else {
      uStack_6c = 0;
      uStack_68 = 0;
      uStack_64 = 0;
      (**(code **)(**(int **)(this + 0xe4) + 0xe4))(auStack_144,this,pAVar1,&uStack_28,0x286,0,0,0);
      if ((pAStack_140 != (AActor *)0x0) && (pAStack_140 != param_1)) {
        fStack_c8 = *(float *)pAVar1 - *(float *)(iVar2 + 0x1bc);
        fStack_c4 = *(float *)(param_1 + 0x1c0) - *(float *)(iVar2 + 0x1c0);
        fStack_c0 = *(float *)(param_1 + 0x1c4) - *(float *)(iVar2 + 0x1c4);
        fStack_c = fStack_c0;
        fStack_8 = fStack_c4;
        fVar6 = FVector::SizeSquared((FVector *)&fStack_c8);
        if (6.4e+07 < fVar6) goto LAB_10567c45;
        if (((byte)this[0x3d0] & 1) == 0) {
LAB_10567d92:
          if (4e+06 < fVar6) goto LAB_10567c45;
        }
        else {
          iVar2 = UObject::IsA((UObject *)param_1,&APawn::PrivateStaticClass);
          if (iVar2 == 0) goto LAB_10567d92;
        }
        if ((param_2 == 0) || (((byte)this[0x3d0] & 4) == 0)) {
          uStack_4c = 0;
          uStack_48 = 0;
          uStack_44 = 0;
          fStack_d4 = *(float *)pAVar1 + 0.0;
          fStack_d0 = *(float *)(param_1 + 0x1c0) + 0.0;
          uStack_14 = (double)CONCAT44(fStack_d0,(undefined4)uStack_14);
          fStack_cc = *(float *)(param_1 + 0x1c4) + *(float *)(param_1 + 0x2f4) * 0.8;
          fStack_c = fStack_d4;
          fStack_8 = fStack_cc;
          (**(code **)(**(int **)(this + 0xe4) + 0xe4))
                    (auStack_144,this,&fStack_d4,&uStack_28,0x286,0,0,0);
          if ((pAStack_140 == (AActor *)0x0) || (pAStack_140 == param_1)) goto LAB_10567cca;
        }
        if ((param_2 == 0) || (((byte)this[0x3d0] & 4) != 0)) {
          fVar6 = (*(float *)(param_1 + 0x2f0) * *(float *)(param_1 + 0x2f0)) / fVar6;
          bVar5 = fVar6 < 0.00015 | (byte)((ushort)((ushort)NAN(fVar6) << 10) >> 8);
          goto LAB_10567c3a;
        }
        goto LAB_10567c45;
      }
    }
LAB_10567cca:
    uVar3 = 1;
  }
  ExceptionList = pvStack_78;
  return uVar3;
}


// ==== 10314a74 UGameEngine::OnChangeWaitType

/* public: virtual int __thiscall UGameEngine::OnChangeWaitType(struct User *,int,class FVector) */

int __thiscall
UGameEngine::OnChangeWaitType
          (UGameEngine *this,int param_1,undefined4 param_2,undefined4 param_4,undefined4 param_5,
          undefined4 param_6)

{
  uint *puVar1;
  int iVar2;
  APawn *pAVar3;
  ALineagePlayerController *this_00;
  FName *pFVar4;
  ushort *puVar5;
  int iVar6;
  undefined1 *puVar7;
  undefined4 uVar8;
  EFindName EVar9;
  FName aFStack_3c [4];
  float fStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  int iStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_c;
  FName *pFStack_8;
  undefined4 uStack_4;
  
                    /* 0x14a74  6327  ?OnChangeWaitType@UGameEngine@@UAEHPAUUser@@HVFVector@@@Z */
  if (param_1 == 0) {
    return 1;
  }
  iStack_28 = *(int *)(param_1 + 0x204);
  if (iStack_28 == 0) {
    return 1;
  }
  uStack_24 = param_4;
  uStack_20 = param_5;
  uStack_1c = param_6;
  uStack_2c = 0x1049bc03;
  AdjustPawnLocation(this);
  if ((FName *)(uint)*(byte *)(*(int *)(*(int *)(param_1 + 0x204) + 0x14d8) + 0x435) == pFStack_8) {
    return 1;
  }
  uStack_2c = 0x1049bc32;
  (**(code **)(**(int **)(*(int *)(param_1 + 0x204) + 0x14d8) + 800))();
  uStack_2c = 0x1049bc3d;
  APawn::NActionStop(*(APawn **)(param_1 + 0x204));
  switch(pFStack_8) {
  case (FName *)0x0:
    pAVar3 = *(APawn **)(param_1 + 0x204);
    uStack_c = *(undefined4 *)(pAVar3 + (uint)(byte)pAVar3[0x71d] * 4 + 0x8ac);
    uStack_2c = 1;
    uStack_30 = 0;
    iVar6 = *(int *)pAVar3;
    uStack_34 = 0x3dcccccd;
    fStack_38 = 3.9785464e-29;
    fStack_38 = APawn::GetSitAnimRate(pAVar3);
    pFStack_8 = aFStack_3c;
    EVar9 = 1;
    puVar5 = FName::operator*((FName *)&uStack_c);
    FName::FName(pFStack_8,puVar5,EVar9);
    (**(code **)(iVar6 + 0x328))(0);
    *(undefined1 *)(*(int *)(*(int *)(param_1 + 0x204) + 0x14d8) + 0x435) = 0;
    this_00 = (ALineagePlayerController *)
              thunk_FUN_1040b460(*(undefined4 *)(*(int *)(param_1 + 0x204) + 0x14d8));
    if (this_00 == (ALineagePlayerController *)0x0) {
      return 1;
    }
    if ((((byte)this_00[0xa08] & 1) == 0) && (((byte)this_00[0xa90] & 1) == 0)) {
      if (*(int *)GIsL2NetLogin_exref != 0) {
        (**(code **)(**(int **)(this + 0x60) + 0x130))
                  (*(undefined4 *)(*(int *)(param_1 + 0x204) + 0x1cc));
      }
      puVar1 = (uint *)(*(int *)(param_1 + 0x204) + 0x6dc);
      *puVar1 = *puVar1 & 0xfffffffd;
      iVar6 = *(int *)(param_1 + 0x204);
      iVar2 = *(int *)(param_1 + 0x204);
      *(undefined4 *)(iVar2 + 0x32c) = *(undefined4 *)(iVar6 + 0x1c8);
      *(undefined4 *)(iVar2 + 0x330) = *(undefined4 *)(iVar6 + 0x1cc);
      *(undefined4 *)(iVar2 + 0x334) = *(undefined4 *)(iVar6 + 0x1d0);
      return 1;
    }
    ALineagePlayerController::ResetKeyboardMoving(this_00,8,0,0);
    return 1;
  case (FName *)0x1:
    pAVar3 = *(APawn **)(param_1 + 0x204);
    if (*(char *)(*(int *)(pAVar3 + 0x14d8) + 0x435) != '\0') {
      if (*(char *)(*(int *)(pAVar3 + 0x14d8) + 0x435) != '\x04') {
        return 1;
      }
      uStack_1c = *(undefined4 *)(pAVar3 + (uint)(byte)pAVar3[0x71d] * 4 + 0x96c);
      uStack_2c = 1;
      uStack_30 = 0;
      iVar6 = *(int *)pAVar3;
      uStack_34 = 0x3dcccccd;
      fStack_38 = *(float *)(pAVar3 + 0x6b4);
      EVar9 = 1;
      puVar5 = FName::operator*((FName *)&uStack_1c);
      FName::FName(aFStack_3c,puVar5,EVar9);
      (**(code **)(iVar6 + 0x328))(0);
      *(undefined1 *)(*(int *)(*(int *)(param_1 + 0x204) + 0x14d8) + 0x435) = 1;
      return 1;
    }
    uStack_4 = *(undefined4 *)(pAVar3 + (uint)(byte)pAVar3[0x71d] * 4 + 0x8ec);
    uStack_2c = 1;
    uStack_30 = 0;
    iVar6 = *(int *)pAVar3;
    uStack_34 = 0x3dcccccd;
    fStack_38 = 3.9786418e-29;
    fStack_38 = APawn::GetStandAnimRate(pAVar3);
    pFVar4 = (FName *)&uStack_4;
    break;
  case (FName *)0x2:
    pAVar3 = *(APawn **)(param_1 + 0x204);
    iVar6 = *(int *)pAVar3;
    uStack_2c = 1;
    uStack_30 = 0;
    uStack_34 = 0x3dcccccd;
    fStack_38 = *(float *)(pAVar3 + 0x6b4);
    uVar8 = 1;
    puVar7 = &stack0xffffffec;
    pFVar4 = (FName *)APawn::GetDeathAnimName(pAVar3);
    puVar5 = FName::operator*(pFVar4);
    FName::FName(aFStack_3c,puVar5,(EFindName)puVar7);
    (**(code **)(iVar6 + 0x328))(0,uVar8);
    *(undefined1 *)(*(int *)(*(int *)(param_1 + 0x204) + 0x14d8) + 0x435) = 2;
    return 1;
  case (FName *)0x3:
    uStack_2c = 1;
    uStack_30 = 0;
    iVar6 = **(int **)(param_1 + 0x204);
    pFVar4 = (FName *)&stack0xffffffe8;
    uStack_34 = 0x3dcccccd;
    fStack_38 = (float)(*(int **)(param_1 + 0x204))[0x1ad];
    break;
  default:
    goto switchD_1049bc46_default;
  }
  EVar9 = 1;
  puVar5 = FName::operator*(pFVar4);
  FName::FName(aFStack_3c,puVar5,EVar9);
  (**(code **)(iVar6 + 0x328))(0);
  *(undefined1 *)(*(int *)(*(int *)(param_1 + 0x204) + 0x14d8) + 0x435) = 1;
switchD_1049bc46_default:
  return 1;
}


// ==== 10314a79 AViewportWindowController::SetCameraEffectType

/* public: void __thiscall AViewportWindowController::SetCameraEffectType(int) */

void __thiscall
AViewportWindowController::SetCameraEffectType(AViewportWindowController *this,int param_1)

{
                    /* 0x14a79  7824  ?SetCameraEffectType@AViewportWindowController@@QAEXH@Z */
  *(undefined4 *)(this + 0x3fc) = 0;
  *(int *)(this + 0x3f8) = param_1;
  return;
}


// ==== 10314a7e UL2NetHandler::RequestConfirmRefinerItem

/* public: virtual void __thiscall UL2NetHandler::RequestConfirmRefinerItem(int,int) */

void __thiscall
UL2NetHandler::RequestConfirmRefinerItem(UL2NetHandler *this,int param_1,int param_2)

{
                    /* 0x14a7e  7397  ?RequestConfirmRefinerItem@UL2NetHandler@@UAEXHH@Z */
  return;
}


// ==== 10314a8d thunk_FUN_103ea0f0 thunk -> 103ea0f0

// ==== 10314a92 thunk_FUN_1049f550 thunk -> 1049f550

// ==== 10314a97 thunk_FUN_1071b160 thunk -> 1071b160

// ==== 10314aa1 thunk_FUN_103707f0 thunk -> 103707f0

// ==== 10314ab0 thunk_FUN_103a2520 thunk -> 103a2520

// ==== 10314ab5 AActor::UpdateRenderData

/* public: virtual void __thiscall AActor::UpdateRenderData(void) */

void __thiscall AActor::UpdateRenderData(AActor *this)

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
  int iVar11;
  undefined4 *puVar12;
  float10 fVar13;
  float fVar14;
  double dVar15;
  undefined4 auStack_dc [6];
  undefined4 uStack_c4;
  float afStack_9c [3];
  undefined1 *puStack_90;
  void *pvStack_8c;
  undefined1 *puStack_88;
  int iStack_84;
  undefined1 auStack_78 [12];
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  undefined4 uStack_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  undefined4 uStack_50;
  int iStack_4c;
  int iStack_44;
  AActor *pAStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  int iStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  int iStack_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  AActor *pAStack_10;
  float fStack_c;
  AActor *pAStack_8;
  
                    /* 0x14ab5  8768  ?UpdateRenderData@AActor@@UAEXXZ */
  pvVar4 = ExceptionList;
  puStack_88 = &LAB_1081a8c8;
  pvStack_8c = ExceptionList;
  puStack_90 = &stack0xffffff4c;
  iStack_84 = 0;
  piVar1 = (int *)(DAT_10ddd7e0 + DAT_10dddb18 * 4);
  uVar3 = rdtsc();
  ExceptionList = &pvStack_8c;
  *piVar1 = *piVar1 - (int)uVar3;
  if (((byte)this[100] & 0x80) != 0) {
    ExceptionList = pvVar4;
    return;
  }
  puVar5 = &stack0xffffff4c;
  pAStack_40 = this;
  if (*(int *)(this + 0x44) == 0) {
    uStack_c4 = 0x10530947;
    appFailAssert("ActorRenderData",".\\UnActor.cpp",0x9d4);
    puVar5 = puStack_90;
  }
  puStack_90 = puVar5;
  FDynamicActor::Update(*(FDynamicActor **)(this + 0x44));
  fStack_c = 0.0;
  iVar7 = *(int *)(this + 0x2cc);
  if (((*(int *)GIsL2Seamless_exref == 0) || (*(int *)GIsEditor_exref != 0)) ||
     (((byte)this[0x98] & 2) == 0)) {
    *(undefined4 *)(this + 0x2cc) = *(undefined4 *)(this + 0xe4);
  }
  else {
    pUVar6 = ULevel::GetCurrentSWLevel
                       (*(ULevel **)(*(int *)(*(int *)(this + 0xe4) + 0x74) + 0x19c),
                        (FVector *)(this + 0x1bc));
    *(ULevel **)(this + 0x2cc) = pUVar6;
    if (pUVar6 == (ULevel *)0x0) {
      *(undefined4 *)(this + 0x2cc) = *(undefined4 *)(this + 0xe4);
    }
  }
  if (iVar7 != *(int *)(this + 0x2cc)) {
    fStack_c = 1.4013e-45;
  }
  if (((*(int *)GIsEditor_exref == 0) && (*(char *)(*(int *)(this + 0x44) + 0xe4) != '\0')) &&
     ((iVar7 = thunk_FUN_10525d30(), iVar7 != 0 &&
      ((iVar7 = thunk_FUN_10525d30(), iVar7 != 0 && (fStack_c == 0.0)))))) {
    pAVar8 = GetAmbientLightingActor(this);
    if (pAVar8[0x2b4] == (AActor)0xff) {
      dVar15 = appSin((double)(*(float *)(*(int *)(this + 0xe0) + 0x4bc) * 8.0));
      fVar13 = (float10)dVar15 * (float10)0.20000000298023224 + (float10)0.25;
    }
    else {
      pAVar8 = GetAmbientLightingActor(this);
      fVar13 = (float10)(byte)pAVar8[0x2b4] / (float10)255.0;
    }
    afStack_9c[0] = (float)fVar13;
    iVar7 = *(int *)(this + 0x44);
    fStack_5c = *(float *)(iVar7 + 0xe8) + afStack_9c[0];
    fStack_58 = *(float *)(iVar7 + 0xec) + afStack_9c[0];
    fStack_54 = afStack_9c[0] + *(float *)(iVar7 + 0xf0);
    uStack_50 = 0;
    fStack_3c = fStack_5c;
    fStack_38 = fStack_58;
    fStack_34 = fStack_54;
    pAStack_10 = (AActor *)fStack_58;
    fStack_c = fStack_5c;
    pAStack_8 = (AActor *)fStack_54;
    puVar9 = (undefined4 *)FColor::FColor((FColor *)&pAStack_8,(FPlane *)&fStack_5c);
    *(undefined4 *)(*(int *)(this + 0x44) + 0xb8) = *puVar9;
    if (((*(int *)GIsEditor_exref == 0) && (this[0x35] == (AActor)0xb)) &&
       (*(int *)(this + 0x2b8) != 0)) {
      for (iVar7 = 0; iVar7 < *(int *)(this + 0x114); iVar7 = iVar7 + 1) {
        iStack_44 = iVar7;
        pAStack_8 = this;
        thunk_FUN_104ed3d0();
      }
    }
    piVar1 = (int *)(DAT_10ddd7e0 + DAT_10dddb18 * 4);
    uVar3 = rdtsc();
    *piVar1 = *piVar1 + (int)uVar3 + -0xc;
    ExceptionList = pvStack_8c;
    return;
  }
  AVar2 = this[0x34];
  if (AVar2 == (AActor)0x5) {
    FBox::GetCenterAndExtents
              ((FBox *)(*(int *)(this + 0x44) + 0x8c),(FVector *)&fStack_1c,(FVector *)&fStack_3c);
    *(undefined1 *)(*(int *)(this + 0x44) + 0xe4) = 1;
    iVar7 = *(int *)(this + 0x44);
    *(float *)(iVar7 + 0xd8) = fStack_1c;
    *(float *)(iVar7 + 0xdc) = fStack_18;
    *(float *)(iVar7 + 0xe0) = fStack_14;
    iVar7 = *(int *)(this + 0x44);
    *(undefined4 *)(iVar7 + 0xcc) = *(undefined4 *)(iVar7 + 0xd8);
    *(undefined4 *)(iVar7 + 0xd0) = *(undefined4 *)(iVar7 + 0xdc);
    *(undefined4 *)(iVar7 + 0xd4) = *(undefined4 *)(iVar7 + 0xe0);
    fVar14 = FVector::Size((FVector *)&fStack_3c);
    pAStack_8 = (AActor *)(fVar14 * 1.2);
  }
  else {
    puVar9 = (undefined4 *)(*(int *)(this + 0x44) + 0x8c);
    puVar12 = (undefined4 *)(*(int *)(this + 0x44) + 0xcc);
    for (iVar7 = 7; iVar7 != 0; iVar7 = iVar7 + -1) {
      *puVar12 = *puVar9;
      puVar9 = puVar9 + 1;
      puVar12 = puVar12 + 1;
    }
    if (AVar2 == (AActor)0x0) goto LAB_10530c37;
  }
  puVar9 = (undefined4 *)FBox::ExpandBy((FBox *)(*(int *)(this + 0x44) + 0xcc),(float)auStack_78);
  puVar12 = (undefined4 *)(*(int *)(this + 0x44) + 0xcc);
  for (iVar7 = 7; iVar7 != 0; iVar7 = iVar7 + -1) {
    *puVar12 = *puVar9;
    puVar9 = puVar9 + 1;
    puVar12 = puVar12 + 1;
  }
LAB_10530c37:
  uStack_c4 = 0x10530c4c;
  FArray::Empty((FArray *)(this + 0x110),4,*(int *)(this + 0x114));
  if (this[0x35] == (AActor)0xa) {
    uStack_c4 = 0x10530c69;
    FBox::GetCenterAndExtents
              ((FBox *)(*(int *)(this + 0x44) + 0xcc),(FVector *)afStack_9c,(FVector *)&fStack_1c);
    fVar14 = FVector::Size((FVector *)&fStack_1c);
    pAStack_8 = (AActor *)(fVar14 * 0.05);
    uStack_c4 = 0x10530c95;
    puVar9 = (undefined4 *)FBox::ExpandBy((FBox *)(*(int *)(this + 0x44) + 0xcc),(float)auStack_78);
    puVar12 = (undefined4 *)(*(int *)(this + 0x44) + 0xcc);
    for (iVar7 = 7; iVar7 != 0; iVar7 = iVar7 + -1) {
      *puVar12 = *puVar9;
      puVar9 = puVar9 + 1;
      puVar12 = puVar12 + 1;
    }
  }
  if (((*(int *)GIsL2Seamless_exref == 0) || (*(int *)GIsEditor_exref != 0)) ||
     (((byte)this[0x98] & 2) == 0)) {
    iVar7 = *(int *)(this + 0xe4);
  }
  else {
    pUVar6 = ULevel::GetCurrentSWLevel
                       (*(ULevel **)(*(int *)(*(int *)(this + 0xe4) + 0x74) + 0x19c),
                        (FVector *)(this + 0x1bc));
    *(ULevel **)(this + 0x2cc) = pUVar6;
    if (pUVar6 == (ULevel *)0x0) {
      *(undefined4 *)(this + 0x2cc) = *(undefined4 *)(this + 0xe4);
    }
    iVar7 = *(int *)(this + 0x2cc);
  }
  puVar9 = (undefined4 *)(*(int *)(this + 0x44) + 0xcc);
  puVar12 = auStack_dc;
  for (iVar11 = 7; iVar11 != 0; iVar11 = iVar11 + -1) {
    *puVar12 = *puVar9;
    puVar9 = puVar9 + 1;
    puVar12 = puVar12 + 1;
  }
  UModel::BoxLeaves(*(UModel **)(iVar7 + 0xc0),&fStack_1c);
  iStack_84._0_1_ = 1;
  thunk_FUN_1032bcd0();
  iStack_84 = (uint)iStack_84._1_3_ << 8;
  thunk_FUN_10325f90();
  FName::FName((FName *)&pAStack_8,0);
  iVar7 = FName::operator!=((FName *)(this + 0x58),(FName *)&pAStack_8);
  if (iVar7 != 0) {
    for (iVar7 = 0; iStack_30 = iVar7, iVar7 < *(int *)(this + 0x114); iVar7 = iVar7 + 1) {
      if (((*(int *)GIsL2Seamless_exref == 0) || (*(int *)GIsEditor_exref != 0)) ||
         (((byte)this[0x98] & 2) == 0)) {
        pUVar6 = *(ULevel **)(this + 0xe4);
      }
      else {
        if (*(int *)(this + 0x2cc) == 0) {
          *(undefined4 *)(this + 0x2cc) = *(undefined4 *)(this + 0xe4);
        }
        pUVar6 = *(ULevel **)(this + 0x2cc);
      }
      pAVar10 = ULevel::GetZoneActor
                          (pUVar6,*(int *)(*(int *)(*(int *)(pUVar6 + 0xc0) + 0xcc) +
                                          *(int *)(*(int *)(this + 0x110) + iVar7 * 4) * 0x14));
      iVar11 = FName::operator!=((FName *)(pAVar10 + 0x10c),(FName *)(this + 0x58));
      if (iVar11 != 0) {
        thunk_FUN_103256b0(iVar7,1);
        iVar7 = iVar7 + -1;
      }
    }
  }
  fStack_2c = 0.0;
  fStack_28 = 0.0;
  fStack_24 = 0.0;
  iVar7 = UObject::IsA((UObject *)this,&AZoneInfo::PrivateStaticClass);
  if (iVar7 == 0) {
    *(uint *)(this + 0x13c) = *(uint *)(this + 0x13c) & 0xfffffffe;
  }
  for (iStack_20 = 0; iStack_20 < *(int *)(this + 0x114); iStack_20 = iStack_20 + 1) {
    pAVar10 = ULevel::GetZoneActor
                        (*(ULevel **)(this + 0x2cc),
                         *(int *)(*(int *)(*(int *)(*(ULevel **)(this + 0x2cc) + 0xc0) + 0xcc) +
                                 *(int *)(*(int *)(this + 0x110) + iStack_20 * 4) * 0x14));
    fVar13 = (float10)thunk_FUN_104a4940(fStack_2c);
    fStack_2c = (float)fVar13;
    fVar13 = (float10)thunk_FUN_104a4940(fStack_28);
    fStack_28 = (float)fVar13;
    fVar13 = (float10)thunk_FUN_104a4940(fStack_24);
    fStack_24 = (float)fVar13;
    iVar7 = UObject::IsA((UObject *)this,&AZoneInfo::PrivateStaticClass);
    if ((iVar7 == 0) && (((byte)pAVar10[0x13c] & 1) != 0)) {
      *(uint *)(this + 0x13c) = *(uint *)(this + 0x13c) | 1;
    }
  }
  iVar7 = *(int *)(this + 0x44);
  *(float *)(iVar7 + 0xe8) = fStack_2c;
  *(float *)(iVar7 + 0xec) = fStack_28;
  *(float *)(iVar7 + 0xf0) = fStack_24;
  pAVar8 = GetAmbientLightingActor(this);
  if (pAVar8[0x2b4] == (AActor)0xff) {
    dVar15 = appSin((double)(*(float *)(*(int *)(this + 0xe0) + 0x4bc) * 8.0));
    fVar13 = (float10)dVar15 * (float10)0.20000000298023224 + (float10)0.25;
  }
  else {
    pAVar8 = GetAmbientLightingActor(this);
    fVar13 = (float10)(byte)pAVar8[0x2b4] / (float10)255.0;
  }
  fStack_64 = (float)fVar13;
  iVar7 = *(int *)(this + 0x44);
  fStack_6c = *(float *)(iVar7 + 0xe8) + fStack_64;
  fStack_68 = *(float *)(iVar7 + 0xec) + fStack_64;
  fStack_64 = fStack_64 + *(float *)(iVar7 + 0xf0);
  uStack_60 = 0;
  fStack_1c = fStack_6c;
  fStack_18 = fStack_68;
  fStack_14 = fStack_64;
  pAStack_10 = (AActor *)fStack_68;
  fStack_c = fStack_64;
  pAStack_8 = (AActor *)fStack_6c;
  puVar9 = (undefined4 *)FColor::FColor((FColor *)&pAStack_8,(FPlane *)&fStack_6c);
  *(undefined4 *)(*(int *)(this + 0x44) + 0xb8) = *puVar9;
  if (((*(int *)GIsEditor_exref == 0) && (this[0x35] == (AActor)0xb)) &&
     (*(int *)(this + 0x2b8) != 0)) {
    for (iVar7 = 0; iVar7 < *(int *)(this + 0x114); iVar7 = iVar7 + 1) {
      iStack_4c = iVar7;
      pAStack_10 = this;
      thunk_FUN_104ed3d0();
    }
  }
  piVar1 = (int *)(DAT_10ddd7e0 + DAT_10dddb18 * 4);
  uVar3 = rdtsc();
  *piVar1 = *piVar1 + (int)uVar3 + -0xc;
  ExceptionList = pvStack_8c;
  return;
}


// ==== 10314abf AActor::GetLight

/* public: virtual class ALight * __thiscall AActor::GetLight(void) */

ALight * __thiscall AActor::GetLight(AActor *this)

{
                    /* 0x14abf  4722  ?GetLight@AActor@@UAEPAVALight@@XZ */
  return (ALight *)0x0;
}


// ==== 10314ac4 UNetworkHandler::GetPledgeCrestTexFromPledgeCrestID

/* public: virtual class UTexture * __thiscall
   UNetworkHandler::GetPledgeCrestTexFromPledgeCrestID(int) */

UTexture * __thiscall
UNetworkHandler::GetPledgeCrestTexFromPledgeCrestID(UNetworkHandler *this,int param_1)

{
  int iVar1;
  int iVar2;
  UTexture *pUVar3;
  int iVar4;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x14ac4  4915
                       ?GetPledgeCrestTexFromPledgeCrestID@UNetworkHandler@@UAEPAVUTexture@@H@Z */
  puStack_8 = &LAB_10810308;
  pvStack_c = ExceptionList;
  if (0 < param_1) {
    iVar4 = 0;
    iVar1 = *(int *)(*(int *)(this + 0x48) + 0x4f2c);
    if (0 < iVar1) {
      do {
        iVar2 = *(int *)(*(int *)(*(int *)(this + 0x48) + 0x4f28) + 8 + iVar4 * 0xc);
        if ((iVar2 != 0) && (*(int *)(iVar2 + 0x80) == param_1)) {
          pUVar3 = *(UTexture **)(iVar2 + 0xe0);
          if (pUVar3 == (UTexture *)0x0) {
            uStack_4 = 0xffffffff;
            ExceptionList = &pvStack_c;
            thunk_FUN_1042cce0();
            ExceptionList = pvStack_c;
            return (UTexture *)0x0;
          }
          uStack_4 = 0xffffffff;
          ExceptionList = &pvStack_c;
          thunk_FUN_1042cce0();
          ExceptionList = pvStack_c;
          return pUVar3;
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 < iVar1);
    }
  }
  return (UTexture *)0x0;
}


// ==== 10314ac9 thunk_FUN_103fa3e0 thunk -> 103fa3e0

// ==== 10314ace ASuperPointInfo::PostEditChange

/* public: virtual void __thiscall ASuperPointInfo::PostEditChange(void) */

void __thiscall ASuperPointInfo::PostEditChange(ASuperPointInfo *this)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  float *pfVar6;
  int iVar7;
  int iVar8;
  
                    /* 0x14ace  6757  ?PostEditChange@ASuperPointInfo@@UAEXXZ */
  iVar8 = 0;
  if (0 < *(int *)(this + 0x3dc)) {
    iVar7 = 0;
    do {
      iVar5 = *(int *)(this + 0x3d8) + iVar7;
      iVar8 = iVar8 + 1;
      fVar1 = *(float *)(iVar5 + 4);
      fVar2 = *(float *)(this + 0x1c0);
      fVar3 = *(float *)(iVar5 + 8);
      fVar4 = *(float *)(this + 0x1c4);
      pfVar6 = (float *)(*(int *)(this + 0x3cc) + iVar7);
      *pfVar6 = *(float *)(*(int *)(this + 0x3d8) + iVar7) - *(float *)(this + 0x1bc);
      pfVar6[1] = fVar1 - fVar2;
      pfVar6[2] = fVar3 - fVar4;
      iVar7 = iVar7 + 0xc;
    } while (iVar8 < *(int *)(this + 0x3dc));
  }
  return;
}


// ==== 10314ad3 FNAbnormalStat_MAGIC_SQUARE::Update

/* public: virtual int __thiscall FNAbnormalStat_MAGIC_SQUARE::Update(int,float) */

int __thiscall
FNAbnormalStat_MAGIC_SQUARE::Update(FNAbnormalStat_MAGIC_SQUARE *this,int param_1,float param_2)

{
  int iVar1;
  int iVar2;
  ushort *puVar3;
  UClass *pUVar4;
  UObject *this_00;
  undefined1 *puStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ushort *puVar5;
  ulong uVar6;
  UPackageMap *pUVar7;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x14ad3  8698  ?Update@FNAbnormalStat_MAGIC_SQUARE@@UAEHHM@Z */
  puStack_c = &LAB_108179e0;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  if ((((param_1 & *(uint *)(this + 0x10)) != 0) && (*(int *)(this + 0xc) != 0)) &&
     (*(int *)(*(int *)(this + 0xc) + 0x134) != 0)) {
    if (*(int *)(this + 4) == 0) {
      ExceptionList = &pvStack_10;
      FName::FName((FName *)&param_1,(ushort *)L"LineageEffect.m_u020_long_ta",1);
      pUVar7 = (UPackageMap *)0x0;
      uVar6 = 0x2000;
      puVar5 = (ushort *)0x0;
      puVar3 = FName::operator*((FName *)&param_1);
      uStack_4c = 0x104b3cd0;
      pUVar4 = UObject::StaticLoadClass
                         (&AActor::PrivateStaticClass,(UObject *)0x0,puVar3,puVar5,uVar6,pUVar7);
      if (pUVar4 == (UClass *)0x0) {
        if (*(int *)GLog_exref == 0) {
          ExceptionList = pvStack_10;
          return 0;
        }
        FName::operator*((FName *)&param_1);
        FOutputDevice::Logf2((FOutputDevice *)GLog_exref,*(EName *)GLog_exref,(ushort *)0x2ff);
        ExceptionList = pvStack_10;
        return 0;
      }
      iVar1 = *(int *)(this + 0xc);
      iVar2 = **(int **)(iVar1 + 0xe4);
      uStack_50 = *(undefined4 *)(iVar1 + 0x1c8);
      uStack_4c = *(undefined4 *)(iVar1 + 0x1cc);
      puStack_60 = (undefined1 *)&uStack_5c;
      uStack_5c = *(undefined4 *)(iVar1 + 0x1bc);
      uStack_58 = *(undefined4 *)(iVar1 + 0x1c0);
      uStack_54 = *(undefined4 *)(iVar1 + 0x1c4);
      FName::FName((FName *)&puStack_60,0);
      this_00 = (UObject *)(**(code **)(iVar2 + 0xc0))(pUVar4);
      *(UObject **)(this + 4) = this_00;
      if (this_00 != (UObject *)0x0) {
        UObject::SetFlags(this_00,0x4000000);
      }
    }
    ExceptionList = pvStack_10;
    return 1;
  }
  return 0;
}


// ==== 10314ad8 UBeamEmitter::UBeamEmitter

/* public: __thiscall UBeamEmitter::UBeamEmitter(void) */

UBeamEmitter * __thiscall UBeamEmitter::UBeamEmitter(UBeamEmitter *this)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x14ad8  688  ??0UBeamEmitter@@QAE@XZ */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_10809002;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  UParticleEmitter::UParticleEmitter((UParticleEmitter *)this);
  uStack_4 = 0;
  *(undefined ***)this = vftable;
  FRange::FRange((FRange *)(this + 0x4d0));
  FArray::FArray((FArray *)(this + 0x4d8),0);
  uStack_4._0_1_ = 3;
  FRangeVector::FRangeVector((FRangeVector *)(this + 0x4f8));
  FRangeVector::FRangeVector((FRangeVector *)(this + 0x514));
  FArray::FArray((FArray *)(this + 0x530),0);
  uStack_4._0_1_ = 6;
  FArray::FArray((FArray *)(this + 0x53c),0);
  uStack_4._0_1_ = 9;
  FRangeVector::FRangeVector((FRangeVector *)(this + 0x554));
  FRange::FRange((FRange *)(this + 0x56c));
  FRange::FRange((FRange *)(this + 0x574));
  FRange::FRange((FRange *)(this + 0x580));
  FRange::FRange((FRange *)(this + 0x588));
  FRange::FRange((FRange *)(this + 0x594));
  FArray::FArray((FArray *)(this + 0x5b4),0);
  uStack_4._0_1_ = 0xc;
  FArray::FArray((FArray *)(this + 0x5c0),0);
  uStack_4 = CONCAT31(uStack_4._1_3_,0xf);
  FArray::FArray((FArray *)(this + 0x5cc),0);
  ExceptionList = pvStack_c;
  return this;
}


// ==== 10314add thunk_FUN_1047aaf0 thunk -> 1047aaf0

// ==== 10314ae2 FKConvexElem::FKConvexElem

/* public: __thiscall FKConvexElem::FKConvexElem(void) */

FKConvexElem * __thiscall FKConvexElem::FKConvexElem(FKConvexElem *this)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x14ae2  335  ??0FKConvexElem@@QAE@XZ */
  puStack_8 = &LAB_107fe461;
  pvStack_c = ExceptionList;
  uStack_4 = 0;
  ExceptionList = &pvStack_c;
  FArray::FArray((FArray *)(this + 0x40));
  uStack_4 = CONCAT31(uStack_4._1_3_,2);
  FArray::FArray((FArray *)(this + 0x4c));
  ExceptionList = pvStack_c;
  return this;
}


// ==== 10314ae7 UVertexBuffer::GetDataSize

/* public: virtual int __thiscall UVertexBuffer::GetDataSize(void) */

int __thiscall UVertexBuffer::GetDataSize(UVertexBuffer *this)

{
                    /* 0x14ae7  4557  ?GetDataSize@UVertexBuffer@@UAEHXZ */
  return *(int *)(this + 0x48) * 0x2c;
}


// ==== 10314af1 USkillAction_LocateEffect::USkillAction_LocateEffect

/* public: __thiscall USkillAction_LocateEffect::USkillAction_LocateEffect(void) */

USkillAction_LocateEffect * __thiscall
USkillAction_LocateEffect::USkillAction_LocateEffect(USkillAction_LocateEffect *this)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x14af1  904  ??0USkillAction_LocateEffect@@QAE@XZ */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_107f5c31;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  UObject::UObject((UObject *)this);
  *(undefined ***)this = USkillAction::vftable;
  uStack_4 = 1;
  *(undefined ***)this = vftable;
  FName::FName((FName *)(this + 0x40));
  ExceptionList = pvStack_c;
  return this;
}


// ==== 10314afb thunk_FUN_10663970 thunk -> 10663970

// ==== 10314b00 UGameEngine::OnDeleteRadar

/* public: virtual int __thiscall UGameEngine::OnDeleteRadar(int,int,int) */

int __thiscall UGameEngine::OnDeleteRadar(UGameEngine *this,int param_1,int param_2,int param_3)

{
                    /* 0x14b00  6343  ?OnDeleteRadar@UGameEngine@@UAEHHHH@Z */
  (**(code **)(**(int **)(this + 0x68) + 0x160))(param_1,param_2,param_3);
  return 1;
}


// ==== 10314b05 thunk_FUN_10339b80 thunk -> 10339b80

// ==== 10314b0a FL2ReplayManager::UseBGM

/* public: int __thiscall FL2ReplayManager::UseBGM(void) */

int __thiscall FL2ReplayManager::UseBGM(FL2ReplayManager *this)

{
                    /* 0x14b0a  8786  ?UseBGM@FL2ReplayManager@@QAEHXZ */
  return *(int *)(this + 0x54e8);
}


// ==== 10314b0f FTempLineBatcher::~FTempLineBatcher

/* public: __thiscall FTempLineBatcher::~FTempLineBatcher(void) */

void __thiscall FTempLineBatcher::~FTempLineBatcher(FTempLineBatcher *this)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  int iStack_4;
  
                    /* 0x14b0f  1291  ??1FTempLineBatcher@@QAE@XZ */
  puStack_8 = &LAB_107fde24;
  pvStack_c = ExceptionList;
  iStack_4 = 3;
  ExceptionList = &pvStack_c;
  thunk_FUN_10391680();
  iStack_4._0_1_ = 2;
  thunk_FUN_103917b0();
  iStack_4._0_1_ = 1;
  thunk_FUN_10391680();
  iStack_4 = (uint)iStack_4._1_3_ << 8;
  thunk_FUN_1038fad0();
  iStack_4 = 0xffffffff;
  thunk_FUN_1038fad0();
  ExceptionList = pvStack_c;
  return;
}


// ==== 10314b14 thunk_FUN_10333d00 thunk -> 10333d00

// ==== 10314b19 UMesh::LeftHandMeshGetInstance

/* public: virtual class UMeshInstance * __thiscall UMesh::LeftHandMeshGetInstance(class AActor *)
    */

UMeshInstance * __thiscall UMesh::LeftHandMeshGetInstance(UMesh *this,AActor *param_1)

{
  UMeshInstance *pUVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  UMesh *pUVar5;
  uint uVar6;
  UClass *this_00;
  UObject *pUVar7;
  code *pcVar8;
  UMesh *pUVar9;
  FName aFStack_24 [4];
  undefined4 uStack_20;
  UObject *pUStack_1c;
  AActor *pAStack_18;
  UMesh *pUStack_14;
  
                    /* 0x14b19  6008
                       ?LeftHandMeshGetInstance@UMesh@@UAEPAVUMeshInstance@@PAVAActor@@@Z */
  if (param_1 == (AActor *)0x0) {
    pUVar1 = *(UMeshInstance **)(this + 0x60);
joined_r0x105e4e1f:
    pUVar9 = this + 0x60;
    if (pUVar1 != (UMeshInstance *)0x0) {
      return pUVar1;
    }
  }
  else {
    if (((byte)param_1[100] & 0x80) != 0) {
      pUVar1 = *(UMeshInstance **)(this + 0x60);
      goto joined_r0x105e4e1f;
    }
    pUStack_14 = (UMesh *)0x105e4e31;
    iVar3 = (**(code **)(*(int *)param_1 + 0x74))();
    if (iVar3 == 0) {
      return (UMeshInstance *)0x0;
    }
    pUStack_14 = (UMesh *)0x105e4e43;
    iVar3 = (**(code **)(*(int *)param_1 + 0x74))();
    pUVar9 = (UMesh *)(iVar3 + 0x420);
    if (*(int *)(iVar3 + 0x420) != 0) {
      pUStack_14 = (UMesh *)0x105e4e60;
      iVar4 = (**(code **)(**(int **)pUVar9 + 0x8c))();
      if (iVar4 == iVar3) {
        pUStack_14 = (UMesh *)0x105e4e70;
        pUVar5 = (UMesh *)(**(code **)(**(int **)pUVar9 + 0x94))();
        if (pUVar5 == this) goto LAB_105e4f0c;
      }
      pUStack_14 = (UMesh *)0x105e4e84;
      uVar6 = (**(code **)(**(int **)pUVar9 + 0xa4))();
      piVar2 = *(int **)pUVar9;
      if ((uVar6 & 1) == 0) {
        if (piVar2 == (int *)0x0) goto LAB_105e4ea3;
        pcVar8 = *(code **)(*piVar2 + 0xc);
        pUStack_14 = (UMesh *)0x1;
      }
      else {
        pcVar8 = *(code **)(*piVar2 + 0xa0);
        pUStack_14 = (UMesh *)0x2;
      }
      pAStack_18 = (AActor *)0x105e4ea3;
      (*pcVar8)();
    }
  }
LAB_105e4ea3:
  pUStack_14 = (UMesh *)0x105e4eaf;
  this_00 = (UClass *)(**(code **)(*(int *)this + 0x90))();
  if (this_00 == (UClass *)0x0) {
    this_00 = &UMeshInstance::PrivateStaticClass;
  }
  pAStack_18 = *(AActor **)GError_exref;
  pUStack_14 = (UMesh *)0x0;
  pUStack_1c = (UObject *)0x105e4ecc;
  pUStack_1c = UClass::GetDefaultObject(this_00);
  uStack_20 = 0x84004;
  FName::FName(aFStack_24,0);
  pUVar7 = UObject::GetOuter((UObject *)this);
  pUVar7 = UObject::StaticConstructObject(this_00,pUVar7);
  *(UObject **)pUVar9 = pUVar7;
  pAStack_18 = (AActor *)0x105e4eff;
  pUStack_14 = this;
  (**(code **)(*(int *)pUVar7 + 0x98))();
  pAStack_18 = param_1;
  pUStack_1c = (UObject *)0x105e4f0c;
  (**(code **)(**(int **)pUVar9 + 0x90))();
LAB_105e4f0c:
  return *(UMeshInstance **)pUVar9;
}


// ==== 10314b1e thunk_FUN_10575020 thunk -> 10575020

// ==== 10314b23 UExtraSkeletalMeshInstance::operator_new

/* public: static void * __cdecl UExtraSkeletalMeshInstance::operator new(unsigned int,enum
   EInternal *) */

void * __cdecl UExtraSkeletalMeshInstance::operator_new(uint param_1,EInternal *param_2)

{
                    /* 0x14b23  1861  ??2UExtraSkeletalMeshInstance@@SAPAXIPAW4EInternal@@@Z */
  return param_2;
}


// ==== 10314b28 AHUD::eventConnectFailure

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: void __thiscall AHUD::eventConnectFailure(class FString const &,class FString const &) */

void __thiscall AHUD::eventConnectFailure(AHUD *this,FString *param_1,FString *param_2)

{
  int iVar1;
  UFunction *pUVar2;
  undefined4 uStack_38;
  FString *pFStack_34;
  FString aFStack_24 [4];
  void *pvStack_20;
  undefined4 auStack_18 [3];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x14b28  8967  ?eventConnectFailure@AHUD@@QAEXABVFString@@0@Z */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_107f952c;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FString::FString(aFStack_24);
  uStack_4 = 0;
  FString::FString((FString *)auStack_18);
  uStack_4 = 2;
  pFStack_34 = (FString *)0x103765df;
  FString::operator=(aFStack_24,param_1);
  pFStack_34 = (FString *)0x103765ee;
  FString::operator=((FString *)auStack_18,param_2);
  iVar1 = *(int *)this;
  pFStack_34 = aFStack_24;
  uStack_38 = 0;
  pUVar2 = UObject::FindFunctionChecked((UObject *)this,_ENGINE_ConnectFailure);
  (**(code **)(iVar1 + 0x10))(pUVar2);
  auStack_18[0] = 3;
  FString::~FString((FString *)&stack0xffffffd4);
  auStack_18[0] = 0xffffffff;
  FString::~FString((FString *)&uStack_38);
  ExceptionList = pvStack_20;
  return;
}


// ==== 10314b32 thunk_FUN_10326ae0 thunk -> 10326ae0

// ==== 10314b37 thunk_FUN_105a7330 thunk -> 105a7330

// ==== 10314b3c UNetworkHandler::RequestExAskJoinMPCC

/* public: virtual void __thiscall UNetworkHandler::RequestExAskJoinMPCC(class L2ParamStack &) */

void __thiscall UNetworkHandler::RequestExAskJoinMPCC(UNetworkHandler *this,L2ParamStack *param_1)

{
  void *pvVar1;
  
                    /* 0x14b3c  7425  ?RequestExAskJoinMPCC@UNetworkHandler@@UAEXAAVL2ParamStack@@@Z
                        */
  pvVar1 = L2ParamStack::Top(param_1);
  (**(code **)(**(int **)(this + 0x48) + 0x68))
            (*(int **)(this + 0x48),&DAT_10880bc4,0xd0,0xd,pvVar1);
  FOutputDevice::Logf((FOutputDevice *)GNetworkLog_exref,*(ushort **)GNetworkLog_exref);
  return;
}


// ==== 10314b41 UTerrainBrushTexScale::UTerrainBrushTexScale

/* public: __thiscall UTerrainBrushTexScale::UTerrainBrushTexScale(class UTerrainBrushTexScale const
   &) */

UTerrainBrushTexScale * __thiscall
UTerrainBrushTexScale::UTerrainBrushTexScale
          (UTerrainBrushTexScale *this,UTerrainBrushTexScale *param_1)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x14b41  960  ??0UTerrainBrushTexScale@@QAE@ABV0@@Z */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_107f7488;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  UTerrainBrush::UTerrainBrush((UTerrainBrush *)this,(UTerrainBrush *)param_1);
  *(undefined ***)this = vftable;
  ExceptionList = pvStack_c;
  return this;
}


// ==== 10314b46 UMatSubAction::InternalConstructor

/* public: static void __cdecl UMatSubAction::InternalConstructor(void *) */

void __cdecl UMatSubAction::InternalConstructor(void *param_1)

{
                    /* 0x14b46  5708  ?InternalConstructor@UMatSubAction@@SAXPAX@Z */
  if (param_1 != (void *)0x0) {
    UMatSubAction(param_1);
    return;
  }
  return;
}


// ==== 10314b4b UViewport::Destroy

/* public: virtual void __thiscall UViewport::Destroy(void) */

void __thiscall UViewport::Destroy(UViewport *this)

{
  UObject *pUVar1;
  UViewport *pUVar2;
  int iVar3;
  code *pcVar4;
  UViewport **ppUVar5;
  UViewport *pUStack_18;
  undefined1 *puStack_14;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x14b4b  3816  ?Destroy@UViewport@@UAEXXZ */
  puStack_c = &LAB_1081aee0;
  pvStack_10 = ExceptionList;
  puStack_14 = &stack0xffffffa8;
  uStack_8 = 0;
  ExceptionList = &pvStack_10;
  pUVar1 = UObject::GetOuter((UObject *)this);
  if (*(int *)(*(int *)(pUVar1 + 0x34) + 0x58) != 0) {
    pUVar1 = UObject::GetOuter((UObject *)this);
    pUVar2 = (UViewport *)(**(code **)(**(int **)(*(int *)(pUVar1 + 0x34) + 0x58) + 0x100))();
    if (pUVar2 == this) {
      pUVar1 = UObject::GetOuter((UObject *)this);
      (**(code **)(**(int **)(*(int *)(pUVar1 + 0x34) + 0x58) + 0x70))(0);
    }
  }
  uStack_8 = CONCAT31(uStack_8._1_3_,1);
  (**(code **)(*(int *)this + 0x90))();
  uStack_8 = 3;
  if (*(int **)(this + 0x78) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x78) + 0xc))(1);
  }
  uStack_8 = 5;
  if (*(int **)(this + 0x40) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x40) + 0xc))(1);
  }
  uStack_8 = 7;
  if (*(int **)(this + 0x74) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x74) + 0xc))(1);
  }
  uStack_8 = 9;
  if (*(int *)GIsEditor_exref == 0) {
    if (*(int **)(this + 0x7c) == (int *)0x0) goto LAB_1053ad59;
    iVar3 = **(int **)(this + 0x7c);
LAB_1053ad3e:
    (**(code **)(iVar3 + 0x80))(this);
    if (*(int **)(this + 0x7c) != (int *)0x0) {
      pcVar4 = *(code **)(**(int **)(this + 0x7c) + 0xc);
      pUVar2 = (UViewport *)0x1;
      goto LAB_1053ad54;
    }
  }
  else {
    if (*(int *)(this + 0x7c) == 0) goto LAB_1053ad59;
    pUVar1 = UObject::GetOuter((UObject *)this);
    iVar3 = **(int **)(this + 0x7c);
    if (*(int **)(this + 0x7c) != *(int **)(*(int *)(pUVar1 + 0x34) + 0x5c)) goto LAB_1053ad3e;
    pcVar4 = *(code **)(iVar3 + 0x84);
    pUVar2 = this;
LAB_1053ad54:
    (*pcVar4)(pUVar2);
  }
  *(undefined4 *)(this + 0x7c) = 0;
LAB_1053ad59:
  uStack_8 = 0;
  ppUVar5 = &pUStack_18;
  pUStack_18 = this;
  UObject::GetOuter((UObject *)this);
  thunk_FUN_1053abf0(ppUVar5);
  UPlayer::Destroy((UPlayer *)this);
  ExceptionList = pvStack_10;
  return;
}


// ==== 10314b50 ACamera::StaticClass

/* public: static class UClass * __cdecl ACamera::StaticClass(void) */

UClass * __cdecl ACamera::StaticClass(void)

{
                    /* 0x14b50  8216  ?StaticClass@ACamera@@SAPAVUClass@@XZ */
  return &PrivateStaticClass;
}


// ==== 10314b5a thunk_FUN_104239a0 thunk -> 104239a0

// ==== 10314b5f APawn::GetCloakCoverMesh

/* public: virtual class UMesh * __thiscall APawn::GetCloakCoverMesh(void) */

UMesh * __thiscall APawn::GetCloakCoverMesh(APawn *this)

{
                    /* 0x14b5f  4462  ?GetCloakCoverMesh@APawn@@UAEPAVUMesh@@XZ */
  return *(UMesh **)(this + 0x3f4);
}


// ==== 10314b6e UBlackWhite::StaticClass

/* public: static class UClass * __cdecl UBlackWhite::StaticClass(void) */

UClass * __cdecl UBlackWhite::StaticClass(void)

{
                    /* 0x14b6e  8359  ?StaticClass@UBlackWhite@@SAPAVUClass@@XZ */
  return &PrivateStaticClass;
}


// ==== 10314b73 FNAbnormalStat_FLOATING_ROOT::FNAbnormalStat_FLOATING_ROOT

/* public: __thiscall FNAbnormalStat_FLOATING_ROOT::FNAbnormalStat_FLOATING_ROOT(class APawn *) */

FNAbnormalStat_FLOATING_ROOT * __thiscall
FNAbnormalStat_FLOATING_ROOT::FNAbnormalStat_FLOATING_ROOT
          (FNAbnormalStat_FLOATING_ROOT *this,APawn *param_1)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x14b73  416  ??0FNAbnormalStat_FLOATING_ROOT@@QAE@PAVAPawn@@@Z */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_107f2b78;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FNAbnormalStat::FNAbnormalStat((FNAbnormalStat *)this,param_1);
  *(undefined ***)this = vftable;
  *(undefined4 *)(this + 0x10) = 0x20000;
  ExceptionList = pvStack_c;
  return this;
}


// ==== 10314b7d NCBoneSimul::SetOutFCoords2

/* public: void __thiscall NCBoneSimul::SetOutFCoords2(class USubSkeletalMeshInstance *) */

void __thiscall NCBoneSimul::SetOutFCoords2(NCBoneSimul *this,USubSkeletalMeshInstance *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  FCoords *pFVar4;
  undefined4 *puVar5;
  FCoords aFStack_5d0 [1164];
  undefined4 auStack_144 [12];
  FCoords aFStack_114 [48];
  FRotator aFStack_e4 [12];
  FCoords aFStack_d8 [48];
  undefined4 auStack_a8 [12];
  undefined1 *puStack_78;
  void *pvStack_74;
  undefined1 *puStack_70;
  undefined4 uStack_6c;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  FRotator aFStack_3c [12];
  float fStack_30;
  float fStack_2c;
  int iStack_28;
  FCoords *pFStack_24;
  float fStack_1c;
  int iStack_18;
  int iStack_14;
  int iStack_10;
  NCBoneSimul *pNStack_c;
  NCBoneSimul *pNStack_8;
  
                    /* 0x14b7d  7939
                       ?SetOutFCoords2@NCBoneSimul@@QAEXPAVUSubSkeletalMeshInstance@@@Z */
  puStack_70 = &LAB_10818240;
  pvStack_74 = ExceptionList;
  puStack_78 = &stack0xfffffa24;
  uStack_6c = 0;
  ExceptionList = &pvStack_74;
  pNStack_8 = this;
  _vector_constructor_iterator_(aFStack_5d0,0x30,0x18,FCoords_exref);
  for (iStack_28 = 0; iStack_28 < *(int *)(this + 0x98) + -1; iStack_28 = iStack_28 + 1) {
    if (((iStack_28 != 3) && (iStack_28 != 7)) && (iStack_28 != 0xb)) {
      puVar1 = (undefined4 *)
               (*(int *)(*(int *)(this + 0x78c) + iStack_28 * 4) * 0x30 + *(int *)(param_1 + 0xc4));
      pFVar4 = aFStack_5d0 + iStack_28 * 0x30;
      for (iVar2 = 0xc; this = pNStack_8, iVar2 != 0; iVar2 = iVar2 + -1) {
        *(undefined4 *)pFVar4 = *puVar1;
        puVar1 = puVar1 + 1;
        pFVar4 = pFVar4 + 4;
      }
    }
  }
  for (iVar2 = 0; iVar2 < *(int *)(this + 0x98) + -1; iVar2 = iVar2 + 1) {
    if (((iVar2 != 3) && (iVar2 != 7)) && (iVar2 != 0xb)) {
      iStack_18 = iVar2;
      FCoords::PivotInverse((FCoords *)(this + 0x7bc));
      if (((iVar2 != 0) && (iVar2 != 4)) && (iVar2 != 8)) {
        puVar1 = (undefined4 *)FCoords::PivotInverse(aFStack_5d0 + iVar2 * 0x30);
        puVar5 = auStack_144;
        for (iVar3 = 0xc; this = pNStack_8, iVar3 != 0; iVar3 = iVar3 + -1) {
          *puVar5 = *puVar1;
          puVar1 = puVar1 + 1;
          puVar5 = puVar5 + 1;
        }
      }
      iStack_10 = iVar2 * 0x30;
      pFStack_24 = (FCoords *)(this + iStack_10 + 0xdc);
      pNStack_c = this + 0x7bc;
      FCoords::ApplyPivot(pFStack_24,(FCoords *)auStack_a8);
      iVar3 = iVar2 * 0x34;
      iStack_14 = iVar3;
      FVector::PivotTransform
                ((FVector *)(iVar3 + 0x34 + *(int *)(this + 0x778)),(FCoords *)&fStack_48);
      FVector::PivotTransform((FVector *)(*(int *)(this + 0x778) + iVar3),(FCoords *)&fStack_60);
      fStack_54 = fStack_48 - fStack_60;
      fStack_50 = fStack_44 - fStack_5c;
      fStack_4c = fStack_40 - fStack_58;
      fStack_30 = fStack_4c;
      fStack_2c = fStack_54;
      fStack_1c = fStack_50;
      FVector::Rotation((FVector *)&fStack_54);
      FCoords::FCoords(aFStack_d8,(FVector *)(*(int *)(this + 0x778) + iVar3));
      FCoords::OrthoRotation(pFStack_24);
      FCoords::operator/=(aFStack_d8,aFStack_3c);
      puVar1 = (undefined4 *)FCoords::ApplyPivot(aFStack_d8,aFStack_114);
      puVar5 = auStack_a8;
      for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar5 = *puVar1;
        puVar1 = puVar1 + 1;
        puVar5 = puVar5 + 1;
      }
      FRotator::FRotator(aFStack_e4,0,0x8000,0);
      puVar1 = (undefined4 *)FCoords::operator*((FCoords *)auStack_a8,(FRotator *)aFStack_114);
      puVar5 = auStack_a8;
      for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar5 = *puVar1;
        puVar1 = puVar1 + 1;
        puVar5 = puVar5 + 1;
      }
      puVar1 = (undefined4 *)(*(int *)(pNStack_8 + 0x778) + iStack_14);
      auStack_a8[0] = *puVar1;
      auStack_a8[1] = puVar1[1];
      auStack_a8[2] = puVar1[2];
      puVar1 = auStack_a8;
      puVar5 = (undefined4 *)
               (*(int *)(pNStack_8 + iVar2 * 4 + 0x18) * 0x30 + *(int *)(param_1 + 0xc4));
      for (iVar3 = 0xc; this = pNStack_8, iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar5 = *puVar1;
        puVar1 = puVar1 + 1;
        puVar5 = puVar5 + 1;
      }
    }
  }
  ExceptionList = pvStack_74;
  return;
}


// ==== 10314b82 UGameEngine::OnExMPCCPartyInfoUpdate

/* public: virtual void __thiscall UGameEngine::OnExMPCCPartyInfoUpdate(class L2ParamStack &) */

void __thiscall UGameEngine::OnExMPCCPartyInfoUpdate(UGameEngine *this,L2ParamStack *param_1)

{
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x14b82  6391  ?OnExMPCCPartyInfoUpdate@UGameEngine@@UAEXAAVL2ParamStack@@@Z
                        */
  puStack_c = &LAB_10816130;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  ExceptionList = &pvStack_10;
  (**(code **)(**(int **)(this + 0x68) + 0x72c))(param_1);
  ExceptionList = pvStack_10;
  return;
}


// ==== 10314b87 NCClothSimul::GetPropertyFile

/* private: int __thiscall NCClothSimul::GetPropertyFile(int) */

int __thiscall NCClothSimul::GetPropertyFile(NCClothSimul *this,int param_1)

{
                    /* 0x14b87  4929  ?GetPropertyFile@NCClothSimul@@AAEHH@Z */
  return 1;
}


// ==== 10314b8c UNetworkHandler::RequestDismissPledge

/* public: virtual int __thiscall UNetworkHandler::RequestDismissPledge(void) */

int __thiscall UNetworkHandler::RequestDismissPledge(UNetworkHandler *this)

{
                    /* 0x14b8c  7412  ?RequestDismissPledge@UNetworkHandler@@UAEHXZ */
  (**(code **)(**(int **)(this + 0x48) + 0x68))(*(int **)(this + 0x48),&DAT_1087f9dc,0x28);
  FOutputDevice::Logf(*(FOutputDevice **)GNetworkLog_exref,
                      (ushort *)*(FOutputDevice **)GNetworkLog_exref);
  return 1;
}


// ==== 10314b96 FZoneRenderInfo::~FZoneRenderInfo

/* public: __thiscall FZoneRenderInfo::~FZoneRenderInfo(void) */

void __thiscall FZoneRenderInfo::~FZoneRenderInfo(FZoneRenderInfo *this)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x14b96  1300  ??1FZoneRenderInfo@@QAE@XZ */
  puStack_8 = &LAB_107ff8c8;
  pvStack_c = ExceptionList;
  uStack_4 = 0xffffffff;
  ExceptionList = &pvStack_c;
  thunk_FUN_10326630(this);
  ExceptionList = pvStack_c;
  return;
}


// ==== 10314b9b HMatineeTimePath::HMatineeTimePath

/* public: __thiscall HMatineeTimePath::HMatineeTimePath(struct HMatineeTimePath const &) */

void __thiscall HMatineeTimePath::HMatineeTimePath(HMatineeTimePath *this,HMatineeTimePath *param_1)

{
                    /* 0x14b9b  618  ??0HMatineeTimePath@@QAE@ABU0@@Z */
  *(undefined ***)this = HHitProxy::vftable;
  *(undefined4 *)(this + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(this + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
  *(undefined ***)this = vftable;
  *(undefined4 *)(this + 0xc) = *(undefined4 *)(param_1 + 0xc);
  return;
}


// ==== 10314ba0 thunk_FUN_105a72d0 thunk -> 105a72d0

// ==== 10314baa NCBoneSimul::SetOutFCoords3

/* public: void __thiscall NCBoneSimul::SetOutFCoords3(class USubSkeletalMeshInstance *) */

void __thiscall NCBoneSimul::SetOutFCoords3(NCBoneSimul *this,USubSkeletalMeshInstance *param_1)

{
  NCBoneSimul *pNVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 auStack_15c [15];
  FCoords aFStack_120 [48];
  FCoords aFStack_f0 [48];
  undefined4 auStack_c0 [13];
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  undefined1 *puStack_80;
  void *pvStack_7c;
  undefined1 *puStack_78;
  undefined4 uStack_74;
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  FRotator aFStack_64 [12];
  float fStack_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  int iStack_3c;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  int iStack_2c;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  NCBoneSimul *pNStack_18;
  FCoords *pFStack_14;
  float fStack_10;
  float fStack_c;
  NCBoneSimul *pNStack_8;
  
                    /* 0x14baa  7940
                       ?SetOutFCoords3@NCBoneSimul@@QAEXPAVUSubSkeletalMeshInstance@@@Z */
  puStack_78 = &LAB_10818280;
  pvStack_7c = ExceptionList;
  puStack_80 = &stack0xfffffe8c;
  uStack_74 = 0;
  ExceptionList = &pvStack_7c;
  pNStack_8 = this;
  FCoords::FCoords((FCoords *)auStack_c0);
  for (iVar4 = 0; iVar4 < *(int *)(this + 0x98) + -1; iVar4 = iVar4 + 1) {
    iStack_3c = iVar4;
    FCoords::PivotInverse((FCoords *)(this + 0x7bc));
    pNStack_18 = this + iVar4 * 0x30;
    pFStack_14 = (FCoords *)(pNStack_18 + 0xdc);
    puVar2 = (undefined4 *)FCoords::ApplyPivot(pFStack_14,aFStack_120);
    puVar5 = auStack_c0;
    for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar5 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar5 = puVar5 + 1;
    }
    if ((iVar4 != 0) && (iVar4 != 5)) {
      puVar2 = (undefined4 *)
               FCoords::PivotInverse
                         ((FCoords *)
                          (*(int *)(*(int *)(pNStack_8 + 0x78c) + iVar4 * 4) * 0x30 +
                          *(int *)(param_1 + 0xc4)));
      puVar5 = auStack_15c;
      for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar5 = *puVar2;
        puVar2 = puVar2 + 1;
        puVar5 = puVar5 + 1;
      }
      puVar2 = (undefined4 *)FCoords::ApplyPivot(pFStack_14,aFStack_120);
      puVar5 = auStack_c0;
      for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar5 = *puVar2;
        puVar2 = puVar2 + 1;
        puVar5 = puVar5 + 1;
      }
    }
    pNVar1 = pNStack_8;
    iVar3 = iVar4 * 0x34;
    iStack_2c = iVar3;
    FVector::PivotTransform
              ((FVector *)(iVar3 + 0x34 + *(int *)(pNStack_8 + 0x778)),(FCoords *)&fStack_8c);
    FVector::PivotTransform((FVector *)(*(int *)(pNVar1 + 0x778) + iVar3),(FCoords *)&fStack_70);
    fStack_4c = fStack_8c - fStack_70;
    fStack_48 = fStack_88 - fStack_6c;
    fStack_44 = fStack_84 - fStack_68;
    fStack_38 = *(float *)(pNStack_18 + 0x10c);
    fStack_34 = *(float *)(pNStack_18 + 0x110);
    fStack_30 = *(float *)(pNStack_18 + 0x114);
    fStack_24 = *(float *)pFStack_14;
    fStack_20 = *(float *)(pFStack_14 + 4);
    fStack_1c = *(float *)(pFStack_14 + 8);
    fStack_58 = fStack_38 - fStack_24;
    fStack_54 = fStack_34 - fStack_20;
    fStack_50 = fStack_30 - fStack_1c;
    fStack_40 = fStack_4c;
    pNStack_18 = (NCBoneSimul *)fStack_58;
    fStack_10 = fStack_54;
    fStack_c = fStack_50;
    FVector::Rotation((FVector *)&fStack_4c);
    FVector::Rotation((FVector *)&fStack_58);
    FCoords::FCoords(aFStack_f0,(FVector *)(*(int *)(pNVar1 + 0x778) + iVar3));
    FCoords::OrthoRotation(pFStack_14);
    if (iVar4 == 0) {
      FCoords::operator/=(aFStack_f0,aFStack_64);
    }
    else if (iVar4 == 5) {
      FCoords::operator/=(aFStack_f0,aFStack_64);
    }
    else {
      FCoords::operator/=(aFStack_f0,aFStack_64);
    }
    puVar2 = (undefined4 *)FCoords::ApplyPivot(aFStack_f0,aFStack_120);
    puVar5 = auStack_c0;
    for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar5 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar5 = puVar5 + 1;
    }
    puVar2 = (undefined4 *)(*(int *)(pNStack_8 + 0x778) + iStack_2c);
    auStack_c0[0] = *puVar2;
    auStack_c0[1] = puVar2[1];
    auStack_c0[2] = puVar2[2];
    puVar2 = auStack_c0;
    puVar5 = (undefined4 *)
             (*(int *)(pNStack_8 + iVar4 * 4 + 0x18) * 0x30 + *(int *)(param_1 + 0xc4));
    for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar5 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar5 = puVar5 + 1;
    }
    this = pNStack_8;
  }
  ExceptionList = pvStack_7c;
  return;
}


// ==== 10314baf ATerrainInfo::CalcCoords

/* public: void __thiscall ATerrainInfo::CalcCoords(void) */

void __thiscall ATerrainInfo::CalcCoords(ATerrainInfo *this)

{
  FCoords *this_00;
  float fVar1;
  undefined4 *puVar2;
  float *pfVar3;
  int iVar4;
  int iVar5;
  ATerrainInfo *pAVar6;
  FCoords *pFVar7;
  ATerrainInfo *pAVar8;
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  float afStack_54 [2];
  undefined4 uStack_4c;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  undefined4 uStack_38;
  FCoords aFStack_34 [4];
  FCoords aFStack_30 [48];
  
                    /* 0x14baf  3460  ?CalcCoords@ATerrainInfo@@QAEXXZ */
  fStack_6c = 0.0;
  fStack_68 = 0.0;
  fStack_64 = *(float *)(this + 0x3cc) * 0.00390625;
  uStack_60 = 0;
  uStack_5c = *(undefined4 *)(this + 0x3c8);
  uStack_58 = 0;
  afStack_54[0] = *(float *)(this + 0x3c4);
  afStack_54[1] = 0.0;
  uStack_4c = 0;
  fStack_48 = -*(float *)(this + 0x1bc) / *(float *)(this + 0x3c4);
  fStack_44 = -*(float *)(this + 0x1c0) / *(float *)(this + 0x3c8);
  fStack_40 = (*(float *)(this + 0x1c4) * -256.0) / *(float *)(this + 0x3cc);
  puVar2 = (undefined4 *)
           FCoords::FCoords(aFStack_30,(FVector *)&fStack_48,(FVector *)afStack_54,
                            (FVector *)&uStack_60,(FVector *)&fStack_6c);
  iVar5 = *(int *)(this + 0x3c0);
  this_00 = (FCoords *)(this + 0x212c);
  pFVar7 = this_00;
  for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
    *(undefined4 *)pFVar7 = *puVar2;
    puVar2 = puVar2 + 1;
    pFVar7 = pFVar7 + 4;
  }
  if (iVar5 != 0) {
    fStack_48 = (float)(*(int *)(this + 0x210c) / 2);
    fStack_44 = (float)(*(int *)(this + 0x2110) / 2);
    fStack_40 = 32767.0;
    FCoords::operator/=(this_00,(FVector *)&fStack_48);
  }
  puVar2 = (undefined4 *)FCoords::Inverse(this_00);
  pAVar6 = this + 0x215c;
  for (iVar5 = 0xc; iVar5 != 0; iVar5 = iVar5 + -1) {
    *(undefined4 *)pAVar6 = *puVar2;
    puVar2 = puVar2 + 1;
    pAVar6 = pAVar6 + 4;
  }
  pAVar6 = this + 0x448;
  iVar5 = 0x20;
  do {
    fVar1 = *(float *)(pAVar6 + -0x74);
    if (fVar1 != 0.0) {
      *(float *)pAVar6 =
           ((float)*(int *)(this + 0x210c) * *(float *)(this + 0x3c4)) /
           (float)*(int *)((int)fVar1 + 0x580);
      *(float *)(pAVar6 + 4) =
           ((float)*(int *)(this + 0x2110) * *(float *)(this + 0x3c8)) /
           (float)*(int *)((int)fVar1 + 0x584);
      fStack_68 = *(float *)(this + 0x3cc);
      *(float *)(pAVar6 + 8) = fStack_68;
      uStack_4c = 0;
      fStack_48 = 0.0;
      fStack_44 = fStack_68 * 0.00390625;
      uStack_58 = 0;
      afStack_54[0] = *(float *)(pAVar6 + 4);
      afStack_54[1] = 0.0;
      fStack_64 = *(float *)pAVar6;
      uStack_60 = 0;
      uStack_5c = 0;
      fStack_70 = -*(float *)(this + 0x1bc) / *(float *)pAVar6;
      fStack_6c = -*(float *)(this + 0x1c0) / *(float *)(pAVar6 + 4);
      fStack_68 = (*(float *)(this + 0x1c4) * -256.0) / fStack_68;
      pfVar3 = (float *)FCoords::FCoords(aFStack_34,(FVector *)&fStack_70,(FVector *)&fStack_64,
                                         (FVector *)&uStack_58,(FVector *)&uStack_4c);
      pAVar8 = pAVar6 + 0xc;
      for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
        *(float *)pAVar8 = *pfVar3;
        pfVar3 = pfVar3 + 1;
        pAVar8 = pAVar8 + 4;
      }
      if (*(int *)(this + 0x3c0) != 0) {
        fStack_3c = (float)(*(int *)((int)*(float *)(pAVar6 + -0x74) + 0x584) / 2);
        fStack_40 = (float)(*(int *)((int)*(float *)(pAVar6 + -0x74) + 0x580) / 2);
        uStack_38 = 0x46fffe00;
        FCoords::operator/=((FCoords *)(pAVar6 + 0xc),(FVector *)&fStack_40);
      }
      pfVar3 = (float *)FCoords::Inverse((FCoords *)(pAVar6 + 0xc));
      pAVar8 = pAVar6 + 0x3c;
      for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
        *(float *)pAVar8 = *pfVar3;
        pfVar3 = pfVar3 + 1;
        pAVar8 = pAVar8 + 4;
      }
    }
    pAVar6 = pAVar6 + 0xe8;
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  pAVar6 = this + 0x215c;
  pAVar8 = this + 0x222c;
  for (iVar5 = 0xc; iVar5 != 0; iVar5 = iVar5 + -1) {
    *(undefined4 *)pAVar8 = *(undefined4 *)pAVar6;
    pAVar6 = pAVar6 + 4;
    pAVar8 = pAVar8 + 4;
  }
  return;
}


// ==== 10314bb4 thunk_FUN_103eeb70 thunk -> 103eeb70

// ==== 10314bb9 AMarkProjector::AMarkProjector

/* public: __thiscall AMarkProjector::AMarkProjector(class AMarkProjector const &) */

AMarkProjector * __thiscall
AMarkProjector::AMarkProjector(AMarkProjector *this,AMarkProjector *param_1)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x14bb9  150  ??0AMarkProjector@@QAE@ABV0@@Z */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_10804f38;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  AProjector::AProjector((AProjector *)this,(AProjector *)param_1);
  *(undefined ***)this = vftable;
  *(undefined4 *)(this + 0x54c) = *(undefined4 *)(param_1 + 0x54c);
  *(undefined4 *)(this + 0x550) = *(undefined4 *)(param_1 + 0x550);
  *(undefined4 *)(this + 0x554) = *(undefined4 *)(param_1 + 0x554);
  *(undefined4 *)(this + 0x558) = *(undefined4 *)(param_1 + 0x558);
  *(undefined4 *)(this + 0x55c) = *(undefined4 *)(param_1 + 0x55c);
  *(undefined4 *)(this + 0x560) = *(undefined4 *)(param_1 + 0x560);
  *(uint *)(this + 0x564) =
       *(uint *)(this + 0x564) ^ (*(uint *)(param_1 + 0x564) ^ *(uint *)(this + 0x564)) & 1;
  *(undefined4 *)(this + 0x568) = *(undefined4 *)(param_1 + 0x568);
  ExceptionList = pvStack_c;
  return this;
}


// ==== 10314bbe APawn::AddMonsterRaceMgr

/* public: void __thiscall APawn::AddMonsterRaceMgr(int,int,int *,class FVector,class FVector,int)
    */

void __thiscall
APawn::AddMonsterRaceMgr
          (APawn *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_5,
          undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9,
          undefined4 param_10,int param_11)

{
  FNMonsterRaceInfo *pFVar1;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x14bbe  3292  ?AddMonsterRaceMgr@APawn@@QAEXHHPAHVFVector@@1H@Z */
  puStack_c = &LAB_10823050;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  ExceptionList = &pvStack_10;
  pFVar1 = FNMonsterRaceMgr::FindMonsterRaceInfo(&GL2MonsterRaceMgr,this);
  if ((pFVar1 == (FNMonsterRaceInfo *)0x0) && (param_11 != 0)) {
    FNMonsterRaceMgr::AddMonsterRaceInfo
              (&GL2MonsterRaceMgr,this,param_1,param_2,param_3,param_5,param_6,param_7,param_8,
               param_9,param_10);
  }
  else {
    FNMonsterRaceMgr::UpdateMonsterRaceInfo
              (&GL2MonsterRaceMgr,pFVar1,param_1,param_2,param_3,param_5,param_6,param_7,param_8,
               param_9,param_10);
  }
  ExceptionList = pvStack_10;
  return;
}


// ==== 10314bc3 thunk_FUN_103f2660 thunk -> 103f2660

// ==== 10314bcd FL2ReplayManager::UseCameraInst

/* public: int __thiscall FL2ReplayManager::UseCameraInst(void) */

int __thiscall FL2ReplayManager::UseCameraInst(FL2ReplayManager *this)

{
                    /* 0x14bcd  8788  ?UseCameraInst@FL2ReplayManager@@QAEHXZ */
  return *(int *)(this + 0x54dc);
}


// ==== 10314bd2 thunk_FUN_106670d0 thunk -> 106670d0

// ==== 10314bd7 thunk_FUN_105ceef0 thunk -> 105ceef0

// ==== 10314bdc UGameEngine::OnReceiveStopPledgeWar

/* public: virtual void __thiscall UGameEngine::OnReceiveStopPledgeWar(class L2ParamStack &) */

void __thiscall UGameEngine::OnReceiveStopPledgeWar(UGameEngine *this,L2ParamStack *param_1)

{
                    /* 0x14bdc  6570  ?OnReceiveStopPledgeWar@UGameEngine@@UAEXAAVL2ParamStack@@@Z
                        */
                    /* WARNING: Could not recover jumptable at 0x1048995b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(this + 0x68) + 0x1d8))();
  return;
}


// ==== 10314bf0 UMaterial::RequiresSorting

/* public: virtual int __thiscall UMaterial::RequiresSorting(void) */

int __thiscall UMaterial::RequiresSorting(UMaterial *this)

{
                    /* 0x14bf0  7601  ?RequiresSorting@UMaterial@@UAEHXZ */
  return 0;
}


// ==== 10314bf5 USkinVertexBuffer::~USkinVertexBuffer

/* public: virtual __thiscall USkinVertexBuffer::~USkinVertexBuffer(void) */

void __thiscall USkinVertexBuffer::~USkinVertexBuffer(USkinVertexBuffer *this)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  uint uStack_4;
  
                    /* 0x14bf5  1439  ??1USkinVertexBuffer@@UAE@XZ */
  puStack_8 = &LAB_107fdca3;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *(undefined ***)this = vftable;
  uStack_4 = 1;
  UObject::ConditionalDestroy((UObject *)this);
  uStack_4 = uStack_4 & 0xffffff00;
  thunk_FUN_103913d0();
  uStack_4 = 0xffffffff;
  URenderResource::~URenderResource((URenderResource *)this);
  ExceptionList = pvStack_c;
  return;
}


// ==== 10314bfa UTerrainBrush::UTerrainBrush

/* public: __thiscall UTerrainBrush::UTerrainBrush(class UTerrainBrush const &) */

UTerrainBrush * __thiscall UTerrainBrush::UTerrainBrush(UTerrainBrush *this,UTerrainBrush *param_1)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x14bfa  940  ??0UTerrainBrush@@QAE@ABV0@@Z */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_107f7368;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *(undefined ***)this = vftable;
  FString::FString((FString *)(this + 4),(FString *)(param_1 + 4));
  uStack_4 = 0;
  FString::FString((FString *)(this + 0x10),(FString *)(param_1 + 0x10));
  *(undefined4 *)(this + 0x1c) = *(undefined4 *)(param_1 + 0x1c);
  *(undefined4 *)(this + 0x20) = *(undefined4 *)(param_1 + 0x20);
  *(undefined4 *)(this + 0x24) = *(undefined4 *)(param_1 + 0x24);
  *(undefined4 *)(this + 0x28) = *(undefined4 *)(param_1 + 0x28);
  *(undefined4 *)(this + 0x2c) = *(undefined4 *)(param_1 + 0x2c);
  *(undefined4 *)(this + 0x30) = *(undefined4 *)(param_1 + 0x30);
  *(undefined4 *)(this + 0x34) = *(undefined4 *)(param_1 + 0x34);
  *(undefined4 *)(this + 0x38) = *(undefined4 *)(param_1 + 0x38);
  *(undefined4 *)(this + 0x3c) = *(undefined4 *)(param_1 + 0x3c);
  *(undefined4 *)(this + 0x40) = *(undefined4 *)(param_1 + 0x40);
  *(undefined4 *)(this + 0x44) = *(undefined4 *)(param_1 + 0x44);
  *(undefined4 *)(this + 0x48) = *(undefined4 *)(param_1 + 0x48);
  *(undefined4 *)(this + 0x4c) = *(undefined4 *)(param_1 + 0x4c);
  *(undefined4 *)(this + 0x50) = *(undefined4 *)(param_1 + 0x50);
  *(undefined4 *)(this + 0x54) = *(undefined4 *)(param_1 + 0x54);
  *(undefined4 *)(this + 0x58) = *(undefined4 *)(param_1 + 0x58);
  *(undefined4 *)(this + 0x5c) = *(undefined4 *)(param_1 + 0x5c);
  *(undefined4 *)(this + 0x60) = *(undefined4 *)(param_1 + 0x60);
  *(undefined4 *)(this + 100) = *(undefined4 *)(param_1 + 100);
  ExceptionList = pvStack_c;
  return this;
}


// ==== 10314bff UAnimNotify_DestroyEffect::UAnimNotify_DestroyEffect

/* public: __thiscall UAnimNotify_DestroyEffect::UAnimNotify_DestroyEffect(void) */

UAnimNotify_DestroyEffect * __thiscall
UAnimNotify_DestroyEffect::UAnimNotify_DestroyEffect(UAnimNotify_DestroyEffect *this)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x14bff  662  ??0UAnimNotify_DestroyEffect@@QAE@XZ */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_107f4bb1;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  UObject::UObject((UObject *)this);
  *(undefined ***)this = UAnimNotify::vftable;
  uStack_4 = 1;
  *(undefined ***)this = vftable;
  FName::FName((FName *)(this + 0x38));
  ExceptionList = pvStack_c;
  return this;
}


// ==== 10314c04 FAccessoryType::operator=

/* public: struct FAccessoryType & __thiscall FAccessoryType::operator=(struct FAccessoryType const
   &) */

FAccessoryType * __thiscall FAccessoryType::operator=(FAccessoryType *this,FAccessoryType *param_1)

{
                    /* 0x14c04  2256  ??4FAccessoryType@@QAEAAU0@ABU0@@Z */
  *(undefined4 *)this = *(undefined4 *)param_1;
  *(undefined4 *)(this + 4) = *(undefined4 *)(param_1 + 4);
  return this;
}


// ==== 10314c09 UVertexStreamCOLOR::~UVertexStreamCOLOR

/* public: virtual __thiscall UVertexStreamCOLOR::~UVertexStreamCOLOR(void) */

void __thiscall UVertexStreamCOLOR::~UVertexStreamCOLOR(UVertexStreamCOLOR *this)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  uint uStack_4;
  
                    /* 0x14c09  1492  ??1UVertexStreamCOLOR@@UAE@XZ */
  puStack_8 = &LAB_107fda33;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *(undefined ***)this = vftable;
  uStack_4 = 1;
  UObject::ConditionalDestroy((UObject *)this);
  uStack_4 = uStack_4 & 0xffffff00;
  thunk_FUN_10390c20();
  uStack_4 = 0xffffffff;
  UVertexStreamBase::~UVertexStreamBase((UVertexStreamBase *)this);
  ExceptionList = pvStack_c;
  return;
}


// ==== 10314c0e thunk_FUN_106813e0 thunk -> 106813e0

// ==== 10314c13 FAnimMeshVertexStream::~FAnimMeshVertexStream

/* public: virtual __thiscall FAnimMeshVertexStream::~FAnimMeshVertexStream(void) */

void __thiscall FAnimMeshVertexStream::~FAnimMeshVertexStream(FAnimMeshVertexStream *this)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x14c13  1173  ??1FAnimMeshVertexStream@@UAE@XZ */
  puStack_8 = &LAB_107ffecb;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *(undefined ***)this = vftable;
  uStack_4 = 0;
  thunk_FUN_10397380();
  uStack_4 = 0xffffffff;
  FRenderResource::~FRenderResource((FRenderResource *)this);
  ExceptionList = pvStack_c;
  return;
}


// ==== 10314c18 CGeoZoneInfo::AddCell

/* public: bool __thiscall CGeoZoneInfo::AddCell(class FVector,int) */

bool __thiscall
CGeoZoneInfo::AddCell
          (CGeoZoneInfo *this,undefined4 param_2,undefined4 param_3,undefined4 param_4,
          undefined4 param_5)

{
  bool bVar1;
  undefined4 uVar2;
  
                    /* 0x14c18  3270  ?AddCell@CGeoZoneInfo@@QAE_NVFVector@@H@Z */
  uVar2 = FUN_107a6660(param_2,param_3,param_4,param_5);
  uVar2 = FUN_107a6660(uVar2);
  uVar2 = FUN_107a6660(uVar2);
  bVar1 = AddCell(this,uVar2);
  return bVar1;
}


// ==== 10314c1d FAnimMeshVertexStream::GetStride

/* public: virtual int __thiscall FAnimMeshVertexStream::GetStride(void) */

int __thiscall FAnimMeshVertexStream::GetStride(FAnimMeshVertexStream *this)

{
                    /* 0x14c1d  5187  ?GetStride@FAnimMeshVertexStream@@UAEHXZ */
  return 0x20;
}


// ==== 10314c22 APhysicsVolume::InternalConstructor

/* public: static void __cdecl APhysicsVolume::InternalConstructor(void *) */

void __cdecl APhysicsVolume::InternalConstructor(void *param_1)

{
                    /* 0x14c22  5589  ?InternalConstructor@APhysicsVolume@@SAXPAX@Z */
  if (param_1 != (void *)0x0) {
    APhysicsVolume(param_1);
    return;
  }
  return;
}


// ==== 10314c27 FNActorResourceLoader::RemoveActorResourceArray

/* public: void __thiscall FNActorResourceLoader::RemoveActorResourceArray(class FName) */

void __thiscall FNActorResourceLoader::RemoveActorResourceArray(FNActorResourceLoader *this)

{
  FNPawnResource *pFVar1;
  int iVar2;
  int iVar3;
  FName aFStack_18 [4];
  undefined1 *puStack_14;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x14c27  7294
                       ?RemoveActorResourceArray@FNActorResourceLoader@@QAEXVFName@@@Z */
  puStack_c = &LAB_10817f30;
  pvStack_10 = ExceptionList;
  puStack_14 = &stack0xffffffd0;
  uStack_8 = 0;
  ExceptionList = &pvStack_10;
  FName::FName(aFStack_18,0);
  iVar2 = FName::operator==((FName *)&stack0x00000004,aFStack_18);
  if (iVar2 == 0) {
    iVar2 = *(int *)(this + 8);
    while (iVar2 = iVar2 + -1, -1 < iVar2) {
      pFVar1 = *(FNPawnResource **)(*(int *)(this + 4) + iVar2 * 4);
      if ((pFVar1 != (FNPawnResource *)0x0) &&
         (iVar3 = FName::operator==((FName *)(pFVar1 + 4),(FName *)&stack0x00000004), iVar3 != 0)) {
        Remove(this,pFVar1);
      }
    }
  }
  ExceptionList = pvStack_10;
  return;
}


// ==== 10314c31 thunk_FUN_106636b0 thunk -> 106636b0

// ==== 10314c3b thunk_FUN_10356f40 thunk -> 10356f40

// ==== 10314c40 AFileLog::execLogf

/* public: void __thiscall AFileLog::execLogf(struct FFrame &,void * const) */

void __thiscall AFileLog::execLogf(AFileLog *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  undefined1 uVar2;
  int iVar3;
  ushort *puVar4;
  int iVar5;
  undefined *puVar6;
  undefined1 auStack_43c [1032];
  FString aFStack_34 [12];
  FString aFStack_28 [12];
  int iStack_1c;
  undefined1 *puStack_14;
  void *pvStack_10;
  undefined1 *puStack_c;
  int iStack_8;
  
                    /* 0x14c40  9305  ?execLogf@AFileLog@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_107efe42;
  pvStack_10 = ExceptionList;
  puStack_14 = &stack0xfffffbb8;
  iStack_8 = 0;
  ExceptionList = &pvStack_10;
  FString::FString(aFStack_28);
  iStack_8 = CONCAT31(iStack_8._1_3_,1);
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,aFStack_28);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  puVar6 = &DAT_10851e60;
  FString::operator+(aFStack_28,(ushort *)aFStack_34);
  iStack_8._0_1_ = 2;
  iVar5 = 0;
  while( true ) {
    iStack_1c = iVar5;
    iVar3 = FString::Len(aFStack_34);
    if (iVar3 <= iVar5) break;
    puVar4 = FString::operator*(aFStack_34);
    uVar2 = thunk_FUN_10325480(puVar4[iVar5]);
    auStack_43c[iVar5] = uVar2;
    iVar5 = iVar5 + 1;
  }
  auStack_43c[iVar5] = 0;
  (**(code **)(**(int **)(this + 0x3bc) + 4))(auStack_43c,iVar5,puVar6);
  iStack_8._0_1_ = 1;
  FString::~FString(aFStack_34);
  iStack_8 = (uint)iStack_8._1_3_ << 8;
  FString::~FString(aFStack_28);
  ExceptionList = pvStack_10;
  return;
}


// ==== 10314c45 thunk_FUN_1074f6a0 thunk -> 1074f6a0

// ==== 10314c4a FDynamicActor::Update

/* public: void __thiscall FDynamicActor::Update(void) */

void __thiscall FDynamicActor::Update(FDynamicActor *this)

{
  UObject *pUVar1;
  int *piVar2;
  undefined4 *puVar3;
  FSphere *pFVar4;
  FBox *pFVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  FMatrix *pFVar9;
  FMatrix *pFVar10;
  FDynamicActor *pFVar11;
  float fVar12;
  FMatrix *pFVar13;
  FMatrix aFStack_e4 [68];
  float fStack_a0;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  undefined1 auStack_90 [12];
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  float fStack_78;
  undefined1 *puStack_74;
  void *pvStack_70;
  undefined1 *puStack_6c;
  uint uStack_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  FMatrix *pFStack_28;
  FMatrix *pFStack_24;
  undefined4 uStack_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  float fStack_10;
  float fStack_c;
  float fStack_8;
  
                    /* 0x14c4a  8680  ?Update@FDynamicActor@@QAEXXZ */
  puStack_6c = &LAB_1082440b;
  pvStack_70 = ExceptionList;
  puStack_74 = &stack0xffffff10;
  uStack_68 = 0;
  piVar2 = *(int **)this;
  if ((*(char *)((int)piVar2 + 0x35) == '\x02') && (piVar2[0x41] != 0)) {
    ExceptionList = &pvStack_70;
    puStack_74 = &stack0xffffff10;
    piVar2 = (int *)(**(code **)(*(int *)piVar2[0x41] + 0x98))(piVar2);
    puVar3 = (undefined4 *)(**(code **)(*piVar2 + 0x128))(aFStack_e4,0x3f800000);
  }
  else {
    ExceptionList = &pvStack_70;
    puVar3 = (undefined4 *)(**(code **)(*piVar2 + 0x148))(aFStack_e4);
  }
  pFVar11 = this + 8;
  for (iVar7 = 0x10; iVar7 != 0; iVar7 = iVar7 + -1) {
    *(undefined4 *)pFVar11 = *puVar3;
    puVar3 = puVar3 + 1;
    pFVar11 = pFVar11 + 4;
  }
  uStack_68 = uStack_68 & 0xffffff00;
  FMatrix::~FMatrix(aFStack_e4);
  pFVar10 = aFStack_e4;
  puVar3 = (undefined4 *)FMatrix::Inverse((FMatrix *)(this + 8));
  pFVar11 = this + 0x48;
  for (iVar7 = 0x10; iVar7 != 0; iVar7 = iVar7 + -1) {
    *(undefined4 *)pFVar11 = *puVar3;
    puVar3 = puVar3 + 1;
    pFVar11 = pFVar11 + 4;
  }
  uStack_68 = uStack_68 & 0xffffff00;
  FMatrix::~FMatrix(aFStack_e4);
  pFVar9 = (FMatrix *)(this + 8);
  fVar12 = FMatrix::Determinant(pFVar9);
  *(float *)(this + 0x88) = fVar12;
  pUVar1 = *(UObject **)this;
  if (pUVar1[0x35] == (UObject)0xa) {
    iVar7 = thunk_FUN_104bc470(pUVar1);
    puVar3 = (undefined4 *)(iVar7 + 0x430);
    pFVar11 = this + 0x8c;
    for (iVar8 = 7; iVar8 != 0; iVar8 = iVar8 + -1) {
      *(undefined4 *)pFVar11 = *puVar3;
      puVar3 = puVar3 + 1;
      pFVar11 = pFVar11 + 4;
    }
    puVar3 = (undefined4 *)FSphere::FSphere((FSphere *)&fStack_84,(FVector *)(this + 0x8c),2);
    *(undefined4 *)(this + 0xa8) = *puVar3;
    *(undefined4 *)(this + 0xac) = puVar3[1];
    *(undefined4 *)(this + 0xb0) = puVar3[2];
    *(undefined4 *)(this + 0xb4) = puVar3[3];
  }
  else if (((pUVar1[0x35] == (UObject)0x2) && (*(int *)(pUVar1 + 0x104) != 0)) &&
          (iVar7 = UObject::IsA(pUVar1,&APawn::PrivateStaticClass), iVar7 != 0)) {
    pFVar10 = (FMatrix *)&fStack_a0;
    pFVar13 = (FMatrix *)&fStack_84;
    pFVar4 = (FSphere *)
             (**(code **)(**(int **)(*(int *)this + 0x104) + 0x74))
                       (pFVar13,*(int *)this,pFVar10,pFVar9);
    FSphere::TransformBy(pFVar4,pFVar13);
    fStack_c = fStack_a0 - fStack_94;
    fStack_8 = fStack_94 + fStack_a0;
    fStack_1c = fStack_9c - fStack_94;
    fStack_10 = fStack_9c + fStack_94;
    fStack_14 = fStack_98 - fStack_94;
    pFVar9 = (FMatrix *)0x0;
    fStack_18 = fStack_98 + fStack_94;
    while (pFStack_24 = pFVar9, (int)pFVar9 < 9) {
      iVar7 = (**(code **)(**(int **)this + 0x25c))(pFVar9);
      if (iVar7 == 0) {
LAB_10653786:
        pFVar9 = pFVar9 + 1;
      }
      else {
        pFVar13 = pFVar9;
        piVar2 = (int *)(**(code **)(**(int **)this + 0x25c))();
        pFVar4 = (FSphere *)
                 (**(code **)(*piVar2 + 0x74))(&fStack_3c,*(undefined4 *)this,&fStack_84,this + 8);
        FSphere::TransformBy(pFVar4,pFVar13);
        if (fStack_84 - fStack_78 < fStack_c) {
          fStack_c = fStack_84 - fStack_78;
        }
        if (fStack_8 < fStack_78 + fStack_84) {
          fStack_8 = fStack_78 + fStack_84;
        }
        if (fStack_80 - fStack_78 < fStack_1c) {
          fStack_1c = fStack_80 - fStack_78;
        }
        if (fStack_10 < fStack_80 + fStack_78) {
          fStack_10 = fStack_80 + fStack_78;
        }
        if (fStack_7c - fStack_78 < fStack_14) {
          fStack_14 = fStack_7c - fStack_78;
        }
        if (fStack_7c + fStack_78 <= fStack_18) goto LAB_10653786;
        pFVar9 = pFVar9 + 1;
        fStack_18 = fStack_7c + fStack_78;
      }
    }
    *(float *)(this + 0xa8) = (fStack_8 + fStack_c) * 0.5;
    *(float *)(this + 0xac) = (fStack_10 + fStack_1c) * 0.5;
    *(float *)(this + 0xb0) = (fStack_18 + fStack_14) * 0.5;
    iVar7 = thunk_FUN_104b42a0(*(undefined4 *)this);
    if (iVar7 != 0) {
      *(undefined4 *)(iVar7 + 0x17e8) = *(undefined4 *)(this + 0xb4);
    }
    fVar12 = fStack_10 - fStack_1c;
    if (fVar12 < fStack_8 - fStack_c) {
      fVar12 = fStack_8 - fStack_c;
    }
    *(float *)(this + 0xb4) = fVar12 * 0.5;
    if (*(float *)(this + 0xb4) + *(float *)(this + 0xb4) < fStack_18 - fStack_14) {
      *(float *)(this + 0xb4) = (fStack_18 - fStack_14) * 0.5;
    }
    pFVar5 = (FBox *)(**(code **)(**(int **)(*(int *)this + 0x104) + 0x70))
                               (&fStack_48,*(int *)this,(FBox *)&fStack_64,this + 8);
    FBox::TransformBy(pFVar5,pFVar10);
    fStack_c = fStack_64;
    fStack_8 = fStack_58;
    fStack_1c = fStack_60;
    fStack_10 = fStack_54;
    fStack_14 = fStack_5c;
    fStack_18 = fStack_50;
    pFVar10 = (FMatrix *)0x0;
    while (pFStack_28 = pFVar10, (int)pFVar10 < 9) {
      iVar7 = (**(code **)(**(int **)this + 0x25c))(pFVar10);
      if (iVar7 == 0) {
LAB_10653959:
        pFVar10 = pFVar10 + 1;
      }
      else {
        pFVar9 = pFVar10;
        piVar2 = (int *)(**(code **)(**(int **)this + 0x25c))();
        pFVar5 = (FBox *)(**(code **)(*piVar2 + 0x70))
                                   (auStack_90,*(undefined4 *)this,&fStack_48,this + 8);
        FBox::TransformBy(pFVar5,pFVar9);
        if (fStack_48 < fStack_c) {
          fStack_c = fStack_48;
        }
        if (fStack_8 < fStack_3c) {
          fStack_8 = fStack_3c;
        }
        if (fStack_44 < fStack_1c) {
          fStack_1c = fStack_44;
        }
        if (fStack_10 < fStack_38) {
          fStack_10 = fStack_38;
        }
        if (fStack_40 < fStack_14) {
          fStack_14 = fStack_40;
        }
        if (fStack_34 <= fStack_18) goto LAB_10653959;
        pFVar10 = pFVar10 + 1;
        fStack_18 = fStack_34;
      }
    }
    *(float *)(this + 0x8c) = fStack_c;
    *(float *)(this + 0x90) = fStack_1c;
    *(float *)(this + 0x94) = fStack_14;
    *(float *)(this + 0x98) = fStack_8;
    *(float *)(this + 0x9c) = fStack_10;
    *(float *)(this + 0xa0) = fStack_18;
  }
  else {
    pUVar1 = *(UObject **)this;
    if (pUVar1[0x35] == (UObject)0x10) {
      iVar7 = UObject::IsA(pUVar1,&ANLine::PrivateStaticClass);
      if (iVar7 != 0) {
        puVar3 = (undefined4 *)ANLine::GetBoundingBox(*(ANLine **)this);
        pFVar11 = this + 0x8c;
        for (iVar7 = 7; iVar7 != 0; iVar7 = iVar7 + -1) {
          *(undefined4 *)pFVar11 = *puVar3;
          puVar3 = puVar3 + 1;
          pFVar11 = pFVar11 + 4;
        }
      }
    }
    else {
      iVar7 = (**(code **)(*(int *)pUVar1 + 0x164))(pFVar10);
      if (iVar7 == 0) {
        puVar3 = (undefined4 *)FBox::FBox((FBox *)&fStack_64,0);
        pFVar5 = (FBox *)(this + 0x8c);
        for (iVar7 = 7; iVar7 != 0; iVar7 = iVar7 + -1) {
          *(undefined4 *)pFVar5 = *puVar3;
          puVar3 = puVar3 + 1;
          pFVar5 = pFVar5 + 4;
        }
        FBox::operator+=((FBox *)(this + 0x8c),(FVector *)(*(int *)this + 0x1bc));
      }
      else {
        piVar2 = (int *)(**(code **)(**(int **)this + 0x164))();
        pFVar10 = (FMatrix *)&fStack_48;
        pFVar5 = (FBox *)(**(code **)(*piVar2 + 0x70))
                                   (pFVar10,*(undefined4 *)this,(FBox *)&fStack_64);
        puVar3 = (undefined4 *)FBox::TransformBy(pFVar5,pFVar10);
        pFVar11 = this + 0x8c;
        for (iVar7 = 7; iVar7 != 0; iVar7 = iVar7 + -1) {
          *(undefined4 *)pFVar11 = *puVar3;
          puVar3 = puVar3 + 1;
          pFVar11 = pFVar11 + 4;
        }
        piVar2 = (int *)(**(code **)(**(int **)this + 0x164))();
        pFVar4 = (FSphere *)
                 (**(code **)(*piVar2 + 0x74))(&fStack_84,*(undefined4 *)this,&fStack_3c,this + 8);
        puVar3 = (undefined4 *)FSphere::TransformBy(pFVar4,pFVar9);
        *(undefined4 *)(this + 0xa8) = *puVar3;
        *(undefined4 *)(this + 0xac) = puVar3[1];
        *(undefined4 *)(this + 0xb0) = puVar3[2];
        *(undefined4 *)(this + 0xb4) = puVar3[3];
      }
    }
  }
  uStack_20 = 0xff000000;
  *(undefined4 *)(this + 0xb8) = 0xff000000;
  uVar6 = thunk_FUN_10652880(*(undefined4 *)this,this + 0xc4);
  *(undefined4 *)(this + 0xc0) = uVar6;
  *(undefined4 *)(this + 4) = *(undefined4 *)(*(int *)this + 0x4c);
  ExceptionList = pvStack_70;
  return;
}


// ==== 10314c54 AWeapon::AWeapon

/* public: __thiscall AWeapon::AWeapon(void) */

AWeapon * __thiscall AWeapon::AWeapon(AWeapon *this)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x14c54  264  ??0AWeapon@@QAE@XZ */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_10807ed5;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  AInventory::AInventory((AInventory *)this);
  uStack_4 = 0;
  *(undefined ***)this = vftable;
  FRotator::FRotator((FRotator *)(this + 0x474));
  FStringNoInit::FStringNoInit((FStringNoInit *)(this + 0x488));
  uStack_4._0_1_ = 1;
  FStringNoInit::FStringNoInit((FStringNoInit *)(this + 0x494));
  uStack_4 = CONCAT31(uStack_4._1_3_,2);
  FStringNoInit::FStringNoInit((FStringNoInit *)(this + 0x4a8));
  ExceptionList = pvStack_c;
  return this;
}


// ==== 10314c59 ULodMeshInstance::InternalConstructor

/* public: static void __cdecl ULodMeshInstance::InternalConstructor(void *) */

void __cdecl ULodMeshInstance::InternalConstructor(void *param_1)

{
                    /* 0x14c59  5705  ?InternalConstructor@ULodMeshInstance@@SAXPAX@Z */
  if (param_1 != (void *)0x0) {
    ULodMeshInstance(param_1);
    return;
  }
  return;
}


// ==== 10314c5e UGameEngine::OnShowPetPartyWnd

/* public: virtual void __thiscall UGameEngine::OnShowPetPartyWnd(int) */

void __thiscall UGameEngine::OnShowPetPartyWnd(UGameEngine *this,int param_1)

{
                    /* 0x14c5e  6617  ?OnShowPetPartyWnd@UGameEngine@@UAEXH@Z */
                    /* WARNING: Could not recover jumptable at 0x10489e9b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(this + 0x68) + 0x420))();
  return;
}


// ==== 10314c63 UTerrainMaterial::UTerrainMaterial

/* public: __thiscall UTerrainMaterial::UTerrainMaterial(void) */

UTerrainMaterial * __thiscall UTerrainMaterial::UTerrainMaterial(UTerrainMaterial *this)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x14c63  967  ??0UTerrainMaterial@@QAE@XZ */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_1080916f;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  UMaterial::UMaterial((UMaterial *)this);
  *(undefined ***)this = URenderedMaterial::vftable;
  uStack_4 = 1;
  *(undefined ***)this = vftable;
  FArray::FArray((FArray *)(this + 0x578),0);
  ExceptionList = pvStack_c;
  return this;
}


// ==== 10314c68 APowerups::operator_new

/* public: static void * __cdecl APowerups::operator new(unsigned int,class UObject *,class
   FName,unsigned long) */

void * __cdecl
APowerups::operator_new(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  UObject *pUVar1;
  
                    /* 0x14c68  1690  ??2APowerups@@SAPAXIPAVUObject@@VFName@@K@Z */
  pUVar1 = UObject::StaticAllocateObject
                     (&PrivateStaticClass,param_2,param_3,param_4,0,*(undefined4 *)GError_exref,0,0)
  ;
  return pUVar1;
}


// ==== 10314c6d AAmmunition::operator=

/* public: class AAmmunition & __thiscall AAmmunition::operator=(class AAmmunition const &) */

AAmmunition * __thiscall AAmmunition::operator=(AAmmunition *this,AAmmunition *param_1)

{
  uint uVar1;
  
                    /* 0x14c6d  2128  ??4AAmmunition@@QAEAAV0@ABV0@@Z */
  AInventory::operator=((AInventory *)this,(AInventory *)param_1);
  *(undefined4 *)(this + 0x408) = *(undefined4 *)(param_1 + 0x408);
  *(undefined4 *)(this + 0x40c) = *(undefined4 *)(param_1 + 0x40c);
  *(undefined4 *)(this + 0x410) = *(undefined4 *)(param_1 + 0x410);
  *(uint *)(this + 0x414) =
       *(uint *)(this + 0x414) ^ (*(uint *)(this + 0x414) ^ *(uint *)(param_1 + 0x414)) & 1;
  uVar1 = (*(uint *)(param_1 + 0x414) ^ *(uint *)(this + 0x414)) & 2 ^ *(uint *)(this + 0x414);
  *(uint *)(this + 0x414) = uVar1;
  uVar1 = (*(uint *)(param_1 + 0x414) ^ uVar1) & 4 ^ uVar1;
  *(uint *)(this + 0x414) = uVar1;
  uVar1 = (*(uint *)(param_1 + 0x414) ^ uVar1) & 8 ^ uVar1;
  *(uint *)(this + 0x414) = uVar1;
  uVar1 = (*(uint *)(param_1 + 0x414) ^ uVar1) & 0x10 ^ uVar1;
  *(uint *)(this + 0x414) = uVar1;
  *(uint *)(this + 0x414) = (*(uint *)(param_1 + 0x414) ^ uVar1) & 0x20 ^ uVar1;
  *(undefined4 *)(this + 0x418) = *(undefined4 *)(param_1 + 0x418);
  *(undefined4 *)(this + 0x41c) = *(undefined4 *)(param_1 + 0x41c);
  *(undefined4 *)(this + 0x420) = *(undefined4 *)(param_1 + 0x420);
  *(undefined4 *)(this + 0x424) = *(undefined4 *)(param_1 + 0x424);
  *(undefined4 *)(this + 0x428) = *(undefined4 *)(param_1 + 0x428);
  *(undefined4 *)(this + 0x42c) = *(undefined4 *)(param_1 + 0x42c);
  return this;
}


// ==== 10314c72 UNetworkHandler::RequestPledgeExtendedInfo

/* public: virtual int __thiscall UNetworkHandler::RequestPledgeExtendedInfo(class L2ParamStack &)
    */

int __thiscall
UNetworkHandler::RequestPledgeExtendedInfo(UNetworkHandler *this,L2ParamStack *param_1)

{
  void *pvVar1;
  
                    /* 0x14c72  7499
                       ?RequestPledgeExtendedInfo@UNetworkHandler@@UAEHAAVL2ParamStack@@@Z */
  pvVar1 = L2ParamStack::Top(param_1);
  (**(code **)(**(int **)(this + 0x48) + 0x68))(*(int **)(this + 0x48),&DAT_1087f8a0,0x67,pvVar1);
  FOutputDevice::Logf((FOutputDevice *)GNetworkLog_exref,*(ushort **)GNetworkLog_exref);
  return 1;
}


// ==== 10314c77 thunk_FUN_10525d30 thunk -> 10525d30

// ==== 10314c81 thunk_FUN_106eb050 thunk -> 106eb050

// ==== 10314c86 AController::AdjustFromWall

/* public: virtual void __thiscall AController::AdjustFromWall(class FVector,class AActor *) */

void __thiscall AController::AdjustFromWall(void)

{
                    /* 0x14c86  3335  ?AdjustFromWall@AController@@UAEXVFVector@@PAVAActor@@@Z */
  return;
}


// ==== 10314c8b APawn::GetSpAtk10AnimName

/* public: class FName __thiscall APawn::GetSpAtk10AnimName(void) */

void __thiscall APawn::GetSpAtk10AnimName(APawn *this)

{
  undefined4 *in_stack_00000004;
  
                    /* 0x14c8b  5125  ?GetSpAtk10AnimName@APawn@@QAE?AVFName@@XZ */
  *in_stack_00000004 = *(undefined4 *)(this + (uint)(byte)this[0x71d] * 4 + 0xb6c);
  return;
}


// ==== 10314c90 UTexModifier::StaticClass

/* public: static class UClass * __cdecl UTexModifier::StaticClass(void) */

UClass * __cdecl UTexModifier::StaticClass(void)

{
                    /* 0x14c90  8487  ?StaticClass@UTexModifier@@SAPAVUClass@@XZ */
  return &PrivateStaticClass;
}


// ==== 10314c95 FNAbnormalStat_DOT_BLEEDING::FNAbnormalStat_DOT_BLEEDING

/* public: __thiscall FNAbnormalStat_DOT_BLEEDING::FNAbnormalStat_DOT_BLEEDING(class
   FNAbnormalStat_DOT_BLEEDING const &) */

void __thiscall
FNAbnormalStat_DOT_BLEEDING::FNAbnormalStat_DOT_BLEEDING
          (FNAbnormalStat_DOT_BLEEDING *this,FNAbnormalStat_DOT_BLEEDING *param_1)

{
                    /* 0x14c95  397  ??0FNAbnormalStat_DOT_BLEEDING@@QAE@ABV0@@Z */
  *(undefined ***)this = FNAbnormalStat::vftable;
  *(undefined4 *)(this + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(this + 0xc) = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(this + 0x10) = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)(this + 0x14) = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)(this + 0x18) = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)(this + 0x1c) = *(undefined4 *)(param_1 + 0x1c);
  *(undefined4 *)(this + 0x20) = *(undefined4 *)(param_1 + 0x20);
  *(undefined4 *)(this + 0x24) = *(undefined4 *)(param_1 + 0x24);
  *(undefined4 *)(this + 0x28) = *(undefined4 *)(param_1 + 0x28);
  *(undefined ***)this = vftable;
  return;
}


// ==== 10314c9a UActorChannel::Init

/* public: virtual void __thiscall UActorChannel::Init(class UNetConnection *,int,int) */

void __thiscall
UActorChannel::Init(UActorChannel *this,UNetConnection *param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x14c9a  5446  ?Init@UActorChannel@@UAEXPAVUNetConnection@@HH@Z */
  puStack_c = &LAB_10830210;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  ExceptionList = &pvStack_10;
  UChannel::Init((UChannel *)this,param_1,param_2,param_3);
  uVar2 = (**(code **)(**(int **)(*(int *)(*(int *)(this + 0x34) + 0x74) + 0x48) + 0xc))();
  *(undefined4 *)(this + 0x70) = uVar2;
  *(undefined8 *)(this + 0x7c) = *(undefined8 *)(*(int *)(*(int *)(this + 0x34) + 0x74) + 0x50);
  iVar1 = *(int *)(*(int *)(this + 0x34) + 0x74);
  *(double *)(this + 0x84) = (double)((float)*(double *)(iVar1 + 0x50) - *(float *)(iVar1 + 0x68));
  *(undefined8 *)(this + 0x8c) = 0xbff0000000000000;
  *(undefined4 *)(this + 0x98) = 0;
  *(undefined4 *)(this + 0x9c) = 0;
  *(undefined4 *)(this + 0xa0) = 0;
  ExceptionList = pvStack_10;
  return;
}


// ==== 10314c9f UGameEngine::ScreenFadeOut

/* public: void __thiscall UGameEngine::ScreenFadeOut(float,class FColor,int) */

void __thiscall
UGameEngine::ScreenFadeOut
          (UGameEngine *this,undefined4 param_1,undefined4 param_3,undefined4 param_4)

{
                    /* 0x14c9f  7693  ?ScreenFadeOut@UGameEngine@@QAEXMVFColor@@H@Z */
  if ((*(int *)(this + 0x308) == 0) && (*(int *)(this + 0x310) == 0)) {
    *(undefined4 *)(this + 0x304) = param_1;
    *(undefined4 *)(this + 0x314) = param_3;
    *(undefined4 *)(this + 0x30c) = 0;
    *(undefined4 *)(this + 0x308) = 1;
    *(undefined4 *)(this + 0x318) = param_4;
  }
  return;
}


// ==== 10314cae UMeshInstance::SetStatus

/* public: virtual void __thiscall UMeshInstance::SetStatus(int) */

void __thiscall UMeshInstance::SetStatus(UMeshInstance *this,int param_1)

{
                    /* 0x14cae  8044  ?SetStatus@UMeshInstance@@UAEXH@Z */
  return;
}


// ==== 10314cb8 ULevel::GetPawnListExtent

/* public: virtual struct FCheckResult * __thiscall ULevel::GetPawnListExtent(class FMemStack
   &,int,int,int,int,int) */

FCheckResult * __thiscall
ULevel::GetPawnListExtent
          (ULevel *this,FMemStack *param_1,int param_2,int param_3,int param_4,int param_5,
          int param_6)

{
  UObject *this_00;
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  float *pfVar5;
  FMemStackFrame *this_01;
  FCheckResult *pFVar6;
  int iVar7;
  int iVar8;
  FCheckResult *pFVar9;
  undefined4 unaff_EBX;
  float unaff_EBP;
  float unaff_ESI;
  int *piVar10;
  float unaff_EDI;
  float fVar11;
  undefined1 *puVar12;
  undefined1 *puVar13;
  FCheckResult *pFStack_3dc;
  float fStack_3b0;
  undefined1 auStack_3ac [12];
  void *pvStack_3a0;
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
  UObject *pUStack_358;
  float fStack_348;
  float fStack_344;
  float fStack_33c;
  float fStack_338;
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
  FCameraSceneNode aFStack_200 [376];
  FVector aFStack_88 [8];
  FVector aFStack_80 [76];
  undefined1 uStack_34;
  undefined1 uStack_2c;
  void *pvStack_c;
  undefined1 *puStack_8;
  int iStack_4;
  
                    /* 0x14cb8  4890
                       ?GetPawnListExtent@ULevel@@UAEPAUFCheckResult@@AAVFMemStack@@HHHHH@Z */
  iStack_4 = 0xffffffff;
  puStack_8 = &LAB_1081fc61;
  pvStack_c = ExceptionList;
  fStack_348 = (float)param_2;
  fStack_344 = (float)param_3;
  fStack_33c = (float)param_4;
  iVar7 = **(int **)(*(int *)(*(int *)(this + 0x74) + 0x54) + 0x38);
  pUStack_358 = *(UObject **)(*(int *)(iVar7 + 0x3c) + 0x3bc);
  fStack_338 = (float)param_5;
  if ((iVar7 == 0) || (pUStack_358 == (UObject *)0x0)) {
    pFStack_3dc = (FCheckResult *)0x0;
  }
  else {
    ExceptionList = &pvStack_c;
    thunk_FUN_105bcd20();
    iStack_4 = 0;
    pFStack_3dc = (FCheckResult *)0x0;
    fStack_3b0 = 0.0;
    fVar11 = (float)pFStack_3dc;
    if (0 < *(int *)(this + 0x3c)) {
      do {
        this_00 = *(UObject **)(*(int *)(this + 0x38) + (int)fStack_3b0 * 4);
        if ((((this_00 != (UObject *)0x0) &&
             (iVar4 = UObject::IsA(this_00,&APawn::PrivateStaticClass), iVar4 != 0)) &&
            (((byte)this_00[0x54] & 1) != 0)) &&
           ((iVar4 = UObject::IsA(this_00,&APawn::PrivateStaticClass), iVar4 != 0 &&
            (pUStack_358 != this_00)))) {
          iVar4 = *(int *)(iVar7 + 0x3c);
          FCameraSceneNode::FCameraSceneNode
                    (aFStack_200,iVar7,(FRenderTarget *)(iVar7 + 0xdc),iVar4,
                     *(undefined4 *)(iVar4 + 0x1bc),*(undefined4 *)(iVar4 + 0x1c0),
                     *(undefined4 *)(iVar4 + 0x1c4),*(undefined4 *)(iVar4 + 0x1c8),
                     *(undefined4 *)(iVar4 + 0x1cc),*(undefined4 *)(iVar4 + 0x1d0),
                     *(undefined4 *)(iVar4 + 0x3c8));
          uStack_2c = 1;
          puVar13 = &stack0xfffffc18;
          FVector::SafeNormal(aFStack_88);
          puVar12 = auStack_288;
          FVector::SafeNormal(aFStack_80);
          fVar11 = *(float *)(this_00 + 0x2f0);
          fStack_398 = *(float *)(this_00 + 0x1c4);
          pvStack_3a0 = *(void **)(this_00 + 0x1bc);
          fStack_39c = *(float *)(this_00 + 0x1c0);
          unaff_EDI = fVar11 * unaff_EDI;
          unaff_ESI = unaff_ESI * fVar11;
          unaff_EBP = fVar11 * unaff_EBP;
          fVar11 = (float)pvStack_3a0 + unaff_EDI;
          fVar2 = fStack_39c + unaff_ESI;
          fVar3 = unaff_EBP + (fStack_398 - *(float *)(this_00 + 0x2f4));
          pFStack_3dc = (FCheckResult *)((float)pvStack_3a0 - unaff_EDI);
          fVar1 = fStack_39c - unaff_ESI;
          fStack_3b0 = (*(float *)(this_00 + 0x2f4) + fStack_398) - unaff_EBP;
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
          if (((fStack_314 <= fStack_33c) &&
              ((fStack_348 <= fStack_324 && (fStack_310 <= fStack_338)))) &&
             (fStack_344 <= fStack_320)) {
            iVar4 = *(int *)(iVar7 + 0x3c);
            fStack_330 = *(float *)(this_00 + 0x1bc) - *(float *)(iVar4 + 0x1bc);
            fStack_32c = *(float *)(this_00 + 0x1c0) - *(float *)(iVar4 + 0x1c0);
            fStack_328 = *(float *)(this_00 + 0x1c4) - *(float *)(iVar4 + 0x1c4);
            fVar11 = FVector::Size((FVector *)&fStack_330);
            if (fVar11 < (float)param_6) {
              thunk_FUN_104419f0(0x3f800000,0);
              fStack_37c = 0.0;
              uStack_378 = 0;
              uStack_374 = 0;
              iVar4 = (**(code **)(*(int *)this + 0xe4))
                                (auStack_250,this_00,auStack_394,*(int *)(iVar7 + 0x3c) + 0x1bc,0x84
                                 ,0,0,0);
              if (iVar4 == 0) {
                fStack_364 = 0.0;
                fStack_360 = 0.0;
                uStack_35c = 0;
                iVar4 = (**(code **)(*(int *)this + 0xe4))
                                  (auStack_250,this_00,auStack_3ac,*(int *)(iVar7 + 0x3c) + 0x1bc,
                                   0x84,0,0,0);
                if (iVar4 == 0) goto LAB_105c71e3;
              }
              FArray::Add((FArray *)&pvStack_3a0,1,0x30);
              pFStack_3dc = (FCheckResult *)((int)pFStack_3dc + 1);
              *(UObject **)((int)fVar1 + 4 + (int)pvStack_3a0) = this_00;
              *(float *)((int)fVar1 + 0x24 + (int)pvStack_3a0) = fVar11;
            }
          }
LAB_105c71e3:
          iStack_4._0_1_ = 1;
          FCanvasUtil::~FCanvasUtil((FCanvasUtil *)afStack_304);
          iStack_4 = (uint)iStack_4._1_3_ << 8;
          FCameraSceneNode::~FCameraSceneNode(aFStack_200);
        }
        fStack_3b0 = (float)((int)fStack_3b0 + 1);
        fVar11 = (float)pFStack_3dc;
      } while ((int)fStack_3b0 < *(int *)(this + 0x3c));
    }
    pFStack_3dc = (FCheckResult *)0x0;
    if (fVar11 != 0.0) {
      appQsort(pvStack_3a0,(int)fVar11,0x30,(_func_int_void_ptr_void_ptr *)&LAB_10310947);
      iVar7 = (int)fVar11 * 0x30;
      iVar4 = 8;
      this_01 = FMemStack::GetThreadSafeMemStack(param_1);
      pFStack_3dc = (FCheckResult *)FMemStackFrame::PushBytes(this_01,iVar7,iVar4);
      if (pFStack_3dc == (FCheckResult *)0x0) {
        pFStack_3dc = (FCheckResult *)0x0;
      }
      else {
        *(int *)(pFStack_3dc + 0x2c) = 0;
      }
      iVar7 = 0;
      if (0 < (int)fVar11) {
        iVar4 = 0;
        pFVar6 = pFStack_3dc;
        do {
          iVar7 = iVar7 + 1;
          piVar10 = (int *)(iVar4 + (int)pvStack_3a0);
          pFVar9 = pFVar6;
          for (iVar8 = 0xc; iVar8 != 0; iVar8 = iVar8 + -1) {
            *(int *)pFVar9 = *piVar10;
            piVar10 = piVar10 + 1;
            pFVar9 = pFVar9 + 4;
          }
          if (iVar7 < (int)fVar11) {
            pFVar9 = pFVar6 + 0x30;
          }
          else {
            pFVar9 = (FCheckResult *)0x0;
          }
          *(FCheckResult **)pFVar6 = pFVar9;
          iVar4 = iVar4 + 0x30;
          pFVar6 = pFVar6 + 0x30;
        } while (iVar7 < (int)fVar11);
      }
    }
    iStack_4 = 0xffffffff;
    thunk_FUN_105c4170();
  }
  ExceptionList = pvStack_c;
  return pFStack_3dc;
}


// ==== 10314cc2 thunk_FUN_103dbf20 thunk -> 103dbf20

// ==== 10314ccc CGeoZoneInfo::POSITION_Y

/* public: int __thiscall CGeoZoneInfo::POSITION_Y(int) */

int __thiscall CGeoZoneInfo::POSITION_Y(CGeoZoneInfo *this,int param_1)

{
                    /* 0x14ccc  6688  ?POSITION_Y@CGeoZoneInfo@@QAEHH@Z */
  return param_1 * 0x10 + 8 + *(int *)(this + 8);
}


// ==== 10314cd1 UPackageCheckInfo::InternalConstructor

/* public: static void __cdecl UPackageCheckInfo::InternalConstructor(void *) */

void __cdecl UPackageCheckInfo::InternalConstructor(void *param_1)

{
                    /* 0x14cd1  5723  ?InternalConstructor@UPackageCheckInfo@@SAXPAX@Z */
  if (param_1 != (void *)0x0) {
    UPackageCheckInfo(param_1);
    return;
  }
  return;
}


// ==== 10314cd6 FStaticMeshUVStream::GetSize

/* public: virtual int __thiscall FStaticMeshUVStream::GetSize(void) */

int __thiscall FStaticMeshUVStream::GetSize(FStaticMeshUVStream *this)

{
                    /* 0x14cd6  5090  ?GetSize@FStaticMeshUVStream@@UAEHXZ */
  return *(int *)(this + 0x10) * 8;
}


// ==== 10314cdb thunk_FUN_105efac0 thunk -> 105efac0

// ==== 10314ce5 FRotatorF::operator*=

/* public: class FRotatorF __thiscall FRotatorF::operator*=(float) */

void __thiscall FRotatorF::operator*=(FRotatorF *this,float param_1)

{
  undefined4 uVar1;
  float in_stack_00000008;
  
                    /* 0x14ce5  2714  ??XFRotatorF@@QAE?AV0@M@Z */
  *(float *)this = in_stack_00000008 * *(float *)this;
  *(float *)(this + 4) = *(float *)(this + 4) * in_stack_00000008;
  *(float *)(this + 8) = in_stack_00000008 * *(float *)(this + 8);
  *(undefined4 *)param_1 = *(undefined4 *)this;
  uVar1 = *(undefined4 *)(this + 8);
  *(undefined4 *)((int)param_1 + 4) = *(undefined4 *)(this + 4);
  *(undefined4 *)((int)param_1 + 8) = uVar1;
  return;
}


// ==== 10314cea AActor::SetTrailerPrePivot

/* public: virtual void __thiscall AActor::SetTrailerPrePivot(class FVector) */

void __thiscall AActor::SetTrailerPrePivot(void)

{
                    /* 0x14cea  8063  ?SetTrailerPrePivot@AActor@@UAEXVFVector@@@Z */
  return;
}


// ==== 10314cf4 thunk_FUN_10380250 thunk -> 10380250

// ==== 10314cf9 AInternetInfo::AInternetInfo

/* protected: __thiscall AInternetInfo::AInternetInfo(void) */

AInternetInfo * __thiscall AInternetInfo::AInternetInfo(AInternetInfo *this)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x14cf9  81  ??0AInternetInfo@@IAE@XZ */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_10803a70;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  AActor::AActor((AActor *)this);
  *(undefined ***)this = AInfo::vftable;
  *(undefined ***)this = vftable;
  ExceptionList = pvStack_c;
  return this;
}


// ==== 10314cfe UUnderWaterShader::MaterialVSize

/* public: virtual int __thiscall UUnderWaterShader::MaterialVSize(void) */

int __thiscall UUnderWaterShader::MaterialVSize(UUnderWaterShader *this)

{
  int iVar1;
  
                    /* 0x14cfe  6142  ?MaterialVSize@UUnderWaterShader@@UAEHXZ */
  if (*(int *)(this + 0x578) != 0) {
                    /* WARNING: Could not recover jumptable at 0x105e0584. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = (**(code **)(**(int **)(this + 0x578) + 0x7c))();
    return iVar1;
  }
  return 0;
}


// ==== 10314d03 UDemoRecDriver::operator_new

/* public: static void * __cdecl UDemoRecDriver::operator new(unsigned int,class UObject *,class
   FName,unsigned long) */

void * __cdecl
UDemoRecDriver::operator_new
          (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  UObject *pUVar1;
  
                    /* 0x14d03  1850  ??2UDemoRecDriver@@SAPAXIPAVUObject@@VFName@@K@Z */
  pUVar1 = UObject::StaticAllocateObject
                     (&PrivateStaticClass,param_2,param_3,param_4,0,*(undefined4 *)GError_exref,0,0)
  ;
  return pUVar1;
}


// ==== 10314d08 ANSkillProjectile::TargetDestroyNotify

/* public: virtual void __thiscall ANSkillProjectile::TargetDestroyNotify(class AActor *) */

void __thiscall ANSkillProjectile::TargetDestroyNotify(ANSkillProjectile *this,AActor *param_1)

{
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x14d08  8577  ?TargetDestroyNotify@ANSkillProjectile@@UAEXPAVAActor@@@Z */
  puStack_c = &LAB_10818a00;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  ExceptionList = &pvStack_10;
  ANProjectile::TargetDestroyNotify((ANProjectile *)this,param_1);
  ExceptionList = pvStack_10;
  return;
}


// ==== 10314d12 FNAbnormalStat_ROOT::operator=

/* public: class FNAbnormalStat_ROOT & __thiscall FNAbnormalStat_ROOT::operator=(class
   FNAbnormalStat_ROOT const &) */

FNAbnormalStat_ROOT * __thiscall
FNAbnormalStat_ROOT::operator=(FNAbnormalStat_ROOT *this,FNAbnormalStat_ROOT *param_1)

{
                    /* 0x14d12  2332  ??4FNAbnormalStat_ROOT@@QAEAAV0@ABV0@@Z */
  *(undefined4 *)(this + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(this + 0xc) = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(this + 0x10) = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)(this + 0x14) = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)(this + 0x18) = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)(this + 0x1c) = *(undefined4 *)(param_1 + 0x1c);
  *(undefined4 *)(this + 0x20) = *(undefined4 *)(param_1 + 0x20);
  *(undefined4 *)(this + 0x24) = *(undefined4 *)(param_1 + 0x24);
  *(undefined4 *)(this + 0x28) = *(undefined4 *)(param_1 + 0x28);
  return this;
}


// ==== 10314d1c AAutoLadder::operator_new

/* public: static void * __cdecl AAutoLadder::operator new(unsigned int,class UObject *,class
   FName,unsigned long) */

void * __cdecl
AAutoLadder::operator_new
          (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  UObject *pUVar1;
  
                    /* 0x14d1c  1520  ??2AAutoLadder@@SAPAXIPAVUObject@@VFName@@K@Z */
  pUVar1 = UObject::StaticAllocateObject
                     (&PrivateStaticClass,param_2,param_3,param_4,0,*(undefined4 *)GError_exref,0,0)
  ;
  return pUVar1;
}


// ==== 10314d21 ANMovableSunLight::ANMovableSunLight

/* public: __thiscall ANMovableSunLight::ANMovableSunLight(void) */

ANMovableSunLight * __thiscall ANMovableSunLight::ANMovableSunLight(ANMovableSunLight *this)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x14d21  168  ??0ANMovableSunLight@@QAE@XZ */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_10806320;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  AActor::AActor((AActor *)this);
  *(undefined ***)this = ALight::vftable;
  *(undefined ***)this = vftable;
  ExceptionList = pvStack_c;
  return this;
}


// ==== 10314d26 UKarmaParamsCollision::UKarmaParamsCollision

/* public: __thiscall UKarmaParamsCollision::UKarmaParamsCollision(class UKarmaParamsCollision const
   &) */

UKarmaParamsCollision * __thiscall
UKarmaParamsCollision::UKarmaParamsCollision
          (UKarmaParamsCollision *this,UKarmaParamsCollision *param_1)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x14d26  777  ??0UKarmaParamsCollision@@QAE@ABV0@@Z */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_107f5cb9;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  UObject::UObject((UObject *)this,(UObject *)param_1);
  *(undefined ***)this = vftable;
  *(undefined4 *)(this + 0x34) = *(undefined4 *)(param_1 + 0x34);
  *(undefined4 *)(this + 0x38) = *(undefined4 *)(param_1 + 0x38);
  *(undefined4 *)(this + 0x3c) = *(undefined4 *)(param_1 + 0x3c);
  *(undefined4 *)(this + 0x40) = *(undefined4 *)(param_1 + 0x40);
  *(undefined4 *)(this + 0x44) = *(undefined4 *)(param_1 + 0x44);
  *(undefined4 *)(this + 0x48) = *(undefined4 *)(param_1 + 0x48);
  *(undefined4 *)(this + 0x4c) = *(undefined4 *)(param_1 + 0x4c);
  *(undefined4 *)(this + 0x50) = *(undefined4 *)(param_1 + 0x50);
  ExceptionList = pvStack_c;
  return this;
}


// ==== 10314d2b thunk_FUN_10395f40 thunk -> 10395f40

// ==== 10314d35 FLandMark::DeleteLandMark

/* public: void __thiscall FLandMark::DeleteLandMark(int) */

void __thiscall FLandMark::DeleteLandMark(FLandMark *this,int param_1)

{
  float fVar1;
  int *piVar2;
  int iVar3;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x14d35  3752  ?DeleteLandMark@FLandMark@@QAEXH@Z */
  puStack_c = &LAB_1081da90;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  if ((DAT_10c51044 == 0) || (*(int *)(DAT_10c51044 + 0x19c) == 0)) {
    return;
  }
  if (param_1 != 0) {
    ExceptionList = &pvStack_10;
    if (*(int *)(this + 8) != 0) {
      ExceptionList = &pvStack_10;
      (**(code **)(**(int **)(DAT_10c51044 + 0x19c) + 0xac))(*(int *)(this + 8),0);
    }
    if (*(int *)(this + 0xc) == 0) {
      ExceptionList = pvStack_10;
      return;
    }
    (**(code **)(**(int **)(DAT_10c51044 + 0x19c) + 0xac))(*(int *)(this + 0xc),0);
    ExceptionList = pvStack_10;
    return;
  }
  iVar3 = *(int *)(this + 8);
  if (iVar3 == 0) {
    return;
  }
  fVar1 = 30.0 - *(float *)(iVar3 + 0xe8);
  if (fVar1 <= 0.0) {
    ExceptionList = &pvStack_10;
    *(float *)(iVar3 + 0xe8) = 0.0 - fVar1;
    iVar3 = *(int *)(this + 8);
    if (0.0 < *(float *)(iVar3 + 0xe8)) goto LAB_1058932a;
    piVar2 = *(int **)(DAT_10c51044 + 0x19c);
  }
  else {
    piVar2 = *(int **)(DAT_10c51044 + 0x19c);
    ExceptionList = &pvStack_10;
  }
  (**(code **)(*piVar2 + 0xac))(iVar3,0);
LAB_1058932a:
  *(undefined4 *)(this + 8) = 0;
  ExceptionList = pvStack_10;
  return;
}


// ==== 10314d3a AActor::moveSmooth

/* public: int __thiscall AActor::moveSmooth(class FVector) */

int __thiscall AActor::moveSmooth(AActor *this,float param_2,float param_3,float param_4)

{
  int *piVar1;
  undefined8 uVar2;
  float fVar3;
  int iVar4;
  float10 fVar5;
  float *pfVar6;
  float fStack_90;
  float fStack_8c;
  float fStack_88;
  undefined1 *puStack_80;
  void *pvStack_7c;
  undefined1 *puStack_78;
  undefined4 uStack_74;
  undefined1 auStack_70 [4];
  undefined4 uStack_6c;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  float fStack_4c;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  float fStack_10;
  float fStack_c;
  float fStack_8;
  
                    /* 0x14d3a  9425  ?moveSmooth@AActor@@QAEHVFVector@@@Z */
  puStack_78 = &LAB_108234d0;
  pvStack_7c = ExceptionList;
  puStack_80 = &stack0xffffff48;
  uStack_74 = 0;
  piVar1 = (int *)(DAT_10ddd7e0 + DAT_10dddb04 * 4);
  uVar2 = rdtsc();
  ExceptionList = &pvStack_7c;
  *piVar1 = *piVar1 - (int)uVar2;
  thunk_FUN_104419f0(0x3f800000,0);
  iVar4 = (**(code **)(**(int **)(this + 0xe4) + 0xa4))
                    (this,param_2,param_3,param_4,*(undefined4 *)(this + 0x1c8),
                     *(undefined4 *)(this + 0x1cc),*(undefined4 *)(this + 0x1d0),auStack_70,0,0,0,0)
  ;
  if (fStack_4c < 1.0) {
    uStack_28 = 0;
    uStack_24 = 0;
    fStack_20 = -1.0;
    if (0.0 < *(float *)(*(int *)(this + 0x1b8) + 0x44c)) {
      fStack_20 = 1.0;
    }
    pfVar6 = &fStack_40;
    FVector::SafeNormal((FVector *)&param_2);
    fStack_c = fStack_38 * fStack_20 + fStack_40 * 0.0 + fStack_3c * 0.0;
    fVar5 = (float10)thunk_FUN_10370480(fStack_54,pfVar6);
    if ((((float10)0.20000000298023224 <= fVar5) || (0.5 <= fStack_c)) || (fStack_c <= -0.2)) {
      fVar3 = param_4 * fStack_54 + param_3 * fStack_58 + param_2 * fStack_5c;
      fStack_14 = 1.0 - fStack_4c;
      fStack_1c = fStack_14 * (param_2 - fVar3 * fStack_5c);
      fStack_18 = (param_3 - fVar3 * fStack_58) * fStack_14;
      fStack_14 = fStack_14 * (param_4 - fVar3 * fStack_54);
      fStack_8 = param_3 * fStack_18 + fStack_1c * param_2 + fStack_14 * param_4;
      if (0.0 <= fStack_8) {
        fStack_90 = fStack_5c;
        fStack_8c = fStack_58;
        fStack_88 = fStack_54;
        pfVar6 = &fStack_34;
        fStack_10 = fStack_18;
        fStack_c = fStack_14;
        FVector::SafeNormal((FVector *)&param_2);
        (**(code **)(**(int **)(this + 0xe4) + 0xa4))
                  (this,fStack_1c,fStack_18,fStack_14,*(undefined4 *)(this + 0x1c8),
                   *(undefined4 *)(this + 0x1cc),*(undefined4 *)(this + 0x1d0),auStack_70,0,0,0,0,
                   pfVar6);
        if (fStack_4c < 1.0) {
          (**(code **)(*(int *)this + 0x1e4))(fStack_5c,fStack_58,fStack_54,uStack_6c);
          TwoWallAdjust(this,(FVector *)&fStack_34,(FVector *)&fStack_1c,(FVector *)&fStack_5c,
                        (FVector *)&fStack_90,fStack_4c);
          (**(code **)(**(int **)(this + 0xe4) + 0xa4))
                    (this,fStack_1c,fStack_18,fStack_14,*(undefined4 *)(this + 0x1c8),
                     *(undefined4 *)(this + 0x1cc),*(undefined4 *)(this + 0x1d0),auStack_70,0,0,0,0)
          ;
        }
      }
    }
    else {
      fStack_4c = 1.0 - fStack_4c;
      fStack_34 = fStack_4c * param_2;
      fStack_30 = param_3 * fStack_4c;
      fStack_2c = fStack_4c * param_4;
      fStack_10 = fStack_30;
      fStack_c = fStack_34;
      fStack_8 = fStack_2c;
      (**(code **)(*(int *)this + 0x1e8))
                (uStack_28,uStack_24,fStack_20,fStack_40,fStack_3c,fStack_38,fStack_34,fStack_30,
                 fStack_2c,auStack_70);
    }
  }
  piVar1 = (int *)(DAT_10ddd7e0 + DAT_10dddb04 * 4);
  uVar2 = rdtsc();
  *piVar1 = *piVar1 + (int)uVar2 + -0xc;
  ExceptionList = pvStack_7c;
  return iVar4;
}


// ==== 10314d3f FL2GameData::LogonDataLoad

/* protected: int __thiscall FL2GameData::LogonDataLoad(int) */

int __thiscall FL2GameData::LogonDataLoad(FL2GameData *this,int param_1)

{
  FL2GameData *pFVar1;
  FArchive *pFVar2;
  FArchive *pFVar3;
  int iVar4;
  uchar *puVar5;
  ushort *puVar6;
  int iVar7;
  int iVar8;
  FOutputDevice aFStack_154 [184];
  undefined4 uStack_9c;
  undefined1 *puStack_5c;
  void *pvStack_58;
  undefined1 *puStack_54;
  int iStack_50;
  int iStack_44;
  int iStack_40;
  int iStack_38;
  int iStack_34;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  FArchive *pFStack_24;
  int iStack_20;
  int iStack_1c;
  int iStack_18;
  FL2GameData *pFStack_14;
  uchar *puStack_10;
  float fStack_c;
  int iStack_8;
  
                    /* 0x14d3f  6059  ?LogonDataLoad@FL2GameData@@IAEHH@Z */
  puStack_54 = &LAB_10812d1b;
  pvStack_58 = ExceptionList;
  puStack_5c = &stack0xfffffea0;
  iStack_50 = 0;
  iStack_20 = 1;
  puStack_10 = (uchar *)0x0;
  iStack_18 = 0;
  pFStack_24 = (FArchive *)0x0;
  ExceptionList = &pvStack_58;
  pFStack_14 = this;
  appStrcpy((ushort *)aFStack_154,(ushort *)L"Logongrp.dat");
  pFVar2 = (FArchive *)
           (**(code **)(**(int **)GFileManager_exref + 8))(aFStack_154,0,*(undefined4 *)GNull_exref)
  ;
  pFStack_24 = pFVar2;
  if (pFVar2 == (FArchive *)0x0) {
    if (param_1 == 0) {
      if (*(int *)GLog_exref != 0) {
        FOutputDevice::Logf2(aFStack_154,*(EName *)GLog_exref,(ushort *)0x315);
      }
      goto LAB_104579da;
    }
  }
  else if (param_1 == 0) {
    iStack_18 = (**(code **)(*(int *)pFVar2 + 0x2c))();
    pFVar1 = pFStack_14;
    GetTextInformation(pFStack_14,pFVar2,&puStack_10,&iStack_18,0);
    pFVar3 = (FArchive *)(**(code **)(**(int **)GFileManager_exref + 4))(puStack_10,iStack_18);
    if (pFVar3 == (FArchive *)0x0) {
      if (*(int *)GLog_exref != 0) {
        FOutputDevice::Logf2(aFStack_154,*(EName *)GLog_exref,(ushort *)0x315);
      }
    }
    else {
      iVar4 = CheckSafePackage(pFVar1,pFVar3);
      if (iVar4 == 0) {
        FOutputDevice::Logf(aFStack_154,*(ushort **)GError_exref);
      }
      for (iVar4 = 0; iStack_34 = iVar4, iVar4 < 8; iVar4 = iVar4 + 1) {
        thunk_FUN_104473d0(pFVar3);
      }
      for (iVar4 = 0; iStack_40 = iVar4, iVar4 < 0x12; iVar4 = iVar4 + 1) {
        thunk_FUN_104473d0(pFVar3);
      }
      (**(code **)(*(int *)pFVar3 + 0x58))();
    }
    (**(code **)(*(int *)pFVar2 + 0x58))();
    thunk_FUN_103254a0(puStack_10);
    if (pFVar3 != (FArchive *)0x0) {
      (*(code *)**(undefined4 **)pFVar3)(1);
    }
    goto LAB_104579da;
  }
  if (pFVar2 != (FArchive *)0x0) {
    (**(code **)(*(int *)pFVar2 + 0x58))();
  }
  appStrcpy((ushort *)aFStack_154,(ushort *)L"Logongrp.txt");
  pFVar2 = (FArchive *)
           (**(code **)(**(int **)GFileManager_exref + 8))(aFStack_154,0,*(undefined4 *)GNull_exref)
  ;
  pFStack_24 = pFVar2;
  if (pFVar2 == (FArchive *)0x0) {
    FOutputDevice::Logf(aFStack_154,*(ushort **)GWarn_exref);
    iStack_20 = 0;
  }
  else {
    thunk_FUN_104a14b0();
    iStack_50._0_1_ = 1;
    iStack_18 = (**(code **)(*(int *)pFVar2 + 0x2c))();
    GetTextInformation(pFStack_14,pFVar2,&puStack_10,&iStack_18,param_1);
    if (puStack_10 == (uchar *)0x0) {
      FOutputDevice::Logf(aFStack_154,*(ushort **)GWarn_exref);
      iStack_20 = 0;
      iStack_50 = (uint)iStack_50._1_3_ << 8;
      thunk_FUN_104a1770();
    }
    else {
      puVar5 = puStack_10 + 2;
      for (iVar4 = 0; iStack_44 = iVar4, iVar4 < 7; iVar4 = iVar4 + 1) {
        thunk_FUN_104a1120(u_LogPawn_begin_10aea0d0 + iVar4 * 0x101,
                           u_cLogPawn_end_10aea2d0[iVar4 * 0x101]);
      }
      thunk_FUN_1049f750(puVar5);
      iVar4 = thunk_FUN_104a1840();
      if (iVar4 == 0) {
        thunk_FUN_10445eb0(uStack_9c);
        FOutputDevice::Logf((FOutputDevice *)GWarn_exref,*(ushort **)GWarn_exref);
        iStack_20 = 0;
      }
      else {
        iStack_38 = thunk_FUN_1049f840();
        iStack_1c = 0;
        while (iStack_1c < iStack_38) {
          iVar4 = -1;
          param_1 = -1;
          iStack_8 = -1;
          puVar6 = (ushort *)thunk_FUN_104a0c30(L"class",iStack_1c);
          iVar7 = appStricmp(puVar6,(ushort *)L"slot_0");
          if (iVar7 == 0) {
            param_1 = 0;
          }
          else {
            iVar7 = appStricmp(puVar6,(ushort *)L"slot_1");
            if (iVar7 == 0) {
              param_1 = 1;
            }
            else {
              iVar7 = appStricmp(puVar6,(ushort *)L"slot_2");
              if (iVar7 == 0) {
                param_1 = 2;
              }
              else {
                iVar7 = appStricmp(puVar6,(ushort *)L"slot_3");
                if (iVar7 == 0) {
                  param_1 = 3;
                }
                else {
                  iVar7 = appStricmp(puVar6,(ushort *)L"slot_4");
                  if (iVar7 == 0) {
                    param_1 = 4;
                  }
                  else {
                    iVar7 = appStricmp(puVar6,(ushort *)L"slot_5");
                    if (iVar7 == 0) {
                      param_1 = 5;
                    }
                    else {
                      iVar7 = appStricmp(puVar6,(ushort *)L"slot_6");
                      if (iVar7 == 0) {
                        param_1 = 6;
                      }
                      else {
                        iVar7 = appStricmp(puVar6,(ushort *)L"slot_center");
                        if (iVar7 == 0) {
                          param_1 = 7;
                        }
                        else {
                          iVar7 = appStricmp(puVar6,(ushort *)L"Human_Knight_M");
                          if (iVar7 == 0) {
                            iVar4 = 0;
                            iStack_8 = iVar4;
                          }
                          else {
                            iVar7 = appStricmp(puVar6,(ushort *)L"Human_Knight_F");
                            if (iVar7 == 0) {
                              iVar4 = 1;
                              iStack_8 = iVar4;
                            }
                            else {
                              iVar7 = appStricmp(puVar6,(ushort *)L"Human_Mage_M");
                              if (iVar7 == 0) {
                                iVar4 = 2;
                                iStack_8 = iVar4;
                              }
                              else {
                                iVar7 = appStricmp(puVar6,(ushort *)L"Human_Mage_F");
                                if (iVar7 == 0) {
                                  iVar4 = 3;
                                  iStack_8 = iVar4;
                                }
                                else {
                                  iVar7 = appStricmp(puVar6,(ushort *)L"Elf_Knight_M");
                                  if (iVar7 == 0) {
                                    iVar4 = 4;
                                    iStack_8 = iVar4;
                                  }
                                  else {
                                    iVar7 = appStricmp(puVar6,(ushort *)L"Elf_Knight_F");
                                    if (iVar7 == 0) {
                                      iVar4 = 5;
                                      iStack_8 = iVar4;
                                    }
                                    else {
                                      iVar7 = appStricmp(puVar6,(ushort *)L"Elf_Mage_M");
                                      if (iVar7 == 0) {
                                        iVar4 = 6;
                                        iStack_8 = iVar4;
                                      }
                                      else {
                                        iVar7 = appStricmp(puVar6,(ushort *)L"Elf_Mage_F");
                                        if (iVar7 == 0) {
                                          iVar4 = 7;
                                          iStack_8 = iVar4;
                                        }
                                        else {
                                          iVar7 = appStricmp(puVar6,(ushort *)L"DarkElf_Knight_M");
                                          if (iVar7 == 0) {
                                            iVar4 = 8;
                                            iStack_8 = iVar4;
                                          }
                                          else {
                                            iVar7 = appStricmp(puVar6,(ushort *)L"DarkElf_Knight_F")
                                            ;
                                            if (iVar7 == 0) {
                                              iVar4 = 9;
                                              iStack_8 = iVar4;
                                            }
                                            else {
                                              iVar7 = appStricmp(puVar6,(ushort *)L"DarkElf_Mage_M")
                                              ;
                                              if (iVar7 == 0) {
                                                iVar4 = 10;
                                                iStack_8 = iVar4;
                                              }
                                              else {
                                                iVar7 = appStricmp(puVar6,(ushort *)
                                                                          L"DarkElf_Mage_F");
                                                if (iVar7 == 0) {
                                                  iVar4 = 0xb;
                                                  iStack_8 = iVar4;
                                                }
                                                else {
                                                  iVar7 = appStricmp(puVar6,(ushort *)
                                                                            L"Orc_Knight_M");
                                                  if (iVar7 == 0) {
                                                    iVar4 = 0xc;
                                                    iStack_8 = iVar4;
                                                  }
                                                  else {
                                                    iVar7 = appStricmp(puVar6,(ushort *)
                                                                              L"Orc_Knight_F");
                                                    if (iVar7 == 0) {
                                                      iVar4 = 0xd;
                                                      iStack_8 = iVar4;
                                                    }
                                                    else {
                                                      iVar7 = appStricmp(puVar6,(ushort *)
                                                                                L"Orc_Mage_M");
                                                      if (iVar7 == 0) {
                                                        iVar4 = 0xe;
                                                        iStack_8 = iVar4;
                                                      }
                                                      else {
                                                        iVar7 = appStricmp(puVar6,(ushort *)
                                                                                  L"Orc_Mage_F");
                                                        if (iVar7 == 0) {
                                                          iVar4 = 0xf;
                                                          iStack_8 = iVar4;
                                                        }
                                                        else {
                                                          iVar7 = appStricmp(puVar6,(ushort *)
                                                                                                                                                                        
                                                  L"Dwarf_Knight_M");
                                                  if (iVar7 == 0) {
                                                    iVar4 = 0x10;
                                                    iStack_8 = iVar4;
                                                  }
                                                  else {
                                                    iVar7 = appStricmp(puVar6,(ushort *)
                                                                              L"Dwarf_Knight_F");
                                                    if (iVar7 == 0) {
                                                      iVar4 = 0x11;
                                                      iStack_8 = iVar4;
                                                    }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
          iVar7 = iStack_1c;
          fStack_c = (float)thunk_FUN_104a0b70(&DAT_108967d8,iStack_1c);
          fStack_30 = (float)(int)fStack_c;
          fStack_c = (float)thunk_FUN_104a0b70(&DAT_108967d4,iVar7);
          fStack_2c = (float)(int)fStack_c;
          fStack_c = (float)thunk_FUN_104a0b70(&DAT_108967d0,iVar7);
          fStack_28 = (float)(int)fStack_c;
          iVar8 = thunk_FUN_104a0b70(&DAT_108967c4,iVar7);
          fStack_c = (float)iVar8;
          pFVar2 = pFStack_24;
          if (param_1 == -1) {
            if (iVar4 != -1) {
              pFVar1 = pFStack_14 + iVar4 * 0x10 + 0x7f824;
              *(float *)pFVar1 = fStack_30;
              *(float *)(pFVar1 + 4) = fStack_2c;
              *(float *)(pFVar1 + 8) = fStack_28;
              *(float *)(pFStack_14 + (iVar4 + 0x7f83) * 0x10) = fStack_c - 16384.0;
            }
            iStack_1c = iVar7 + 1;
          }
          else {
            pFVar1 = pFStack_14 + param_1 * 0x10 + 0x7f944;
            *(float *)pFVar1 = fStack_30;
            *(float *)(pFVar1 + 4) = fStack_2c;
            *(float *)(pFVar1 + 8) = fStack_28;
            *(float *)(pFStack_14 + (param_1 + 0x7f95) * 0x10) = fStack_c - 16384.0;
            iStack_1c = iVar7 + 1;
          }
        }
        FOutputDevice::Logf((FOutputDevice *)GWarn_exref,*(ushort **)GWarn_exref);
      }
      thunk_FUN_104a16a0();
      (**(code **)(*(int *)pFVar2 + 0x58))();
      thunk_FUN_103254a0(puStack_10);
      iStack_50 = (uint)iStack_50._1_3_ << 8;
      thunk_FUN_104a1770();
    }
  }
LAB_104579da:
  if (pFVar2 != (FArchive *)0x0) {
    (*(code *)**(undefined4 **)pFVar2)(1);
  }
  ExceptionList = pvStack_58;
  return iStack_20;
}


// ==== 10314d44 AAIController::operator_new

/* public: static void * __cdecl AAIController::operator new(unsigned int,class UObject *,class
   FName,unsigned long) */

void * __cdecl
AAIController::operator_new
          (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  UObject *pUVar1;
  
                    /* 0x14d44  1498  ??2AAIController@@SAPAXIPAVUObject@@VFName@@K@Z */
  pUVar1 = UObject::StaticAllocateObject
                     (&PrivateStaticClass,param_2,param_3,param_4,0,*(undefined4 *)GError_exref,0,0)
  ;
  return pUVar1;
}


// ==== 10314d49 FStaticLightMapTexture::UnloadRawTextureData

/* public: virtual void __thiscall FStaticLightMapTexture::UnloadRawTextureData(int) */

void __thiscall
FStaticLightMapTexture::UnloadRawTextureData(FStaticLightMapTexture *this,int param_1)

{
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x14d49  8673  ?UnloadRawTextureData@FStaticLightMapTexture@@UAEXH@Z */
  puStack_c = &LAB_108255c0;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  ExceptionList = &pvStack_10;
  (**(code **)(*(int *)(this + param_1 * 0x18 + 0xc) + 4))();
  ExceptionList = pvStack_10;
  return;
}


// ==== 10314d53 AActor::eventDestroyed

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: void __thiscall AActor::eventDestroyed(void) */

void __thiscall AActor::eventDestroyed(AActor *this)

{
  int iVar1;
  UFunction *pUVar2;
  AActor *pAStack_c;
  
                    /* 0x14d53  8971  ?eventDestroyed@AActor@@QAEXXZ */
  pAStack_c = this;
  FName::FName((FName *)&pAStack_c,0x12d);
  iVar1 = UObject::IsProbing((UObject *)this);
  if (iVar1 != 0) {
    iVar1 = *(int *)this;
    pUVar2 = UObject::FindFunctionChecked((UObject *)this,_ENGINE_Destroyed,0,0,0);
    (**(code **)(iVar1 + 0x10))(pUVar2);
  }
  return;
}


// ==== 10314d58 ALiftExit::operator_new

/* public: static void * __cdecl ALiftExit::operator new(unsigned int,class UObject *,class
   FName,unsigned long) */

void * __cdecl
ALiftExit::operator_new(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  UObject *pUVar1;
  
                    /* 0x14d58  1628  ??2ALiftExit@@SAPAXIPAVUObject@@VFName@@K@Z */
  pUVar1 = UObject::StaticAllocateObject
                     (&PrivateStaticClass,param_2,param_3,param_4,0,*(undefined4 *)GError_exref,0,0)
  ;
  return pUVar1;
}


// ==== 10314d5d thunk_FUN_10666fb0 thunk -> 10666fb0

// ==== 10314d62 UKarmaParamsRBFull::InternalConstructor

/* public: static void __cdecl UKarmaParamsRBFull::InternalConstructor(void *) */

void __cdecl UKarmaParamsRBFull::InternalConstructor(void *param_1)

{
                    /* 0x14d62  5694  ?InternalConstructor@UKarmaParamsRBFull@@SAXPAX@Z */
  if (param_1 != (void *)0x0) {
    UKarmaParamsRBFull(param_1);
    return;
  }
  return;
}


// ==== 10314d67 thunk_FUN_103dd790 thunk -> 103dd790

// ==== 10314d71 thunk_FUN_1033b6e0 thunk -> 1033b6e0

// ==== 10314d76 UNetworkHandler::RequestPrivateStoreBuyManage

/* public: virtual void __thiscall UNetworkHandler::RequestPrivateStoreBuyManage(void) */

void __thiscall UNetworkHandler::RequestPrivateStoreBuyManage(UNetworkHandler *this)

{
                    /* 0x14d76  7512  ?RequestPrivateStoreBuyManage@UNetworkHandler@@UAEXXZ */
  (**(code **)(**(int **)(this + 0x48) + 0x68))(*(int **)(this + 0x48),&DAT_1087f9dc,0x90);
  FOutputDevice::Logf(*(FOutputDevice **)GNetworkLog_exref,
                      (ushort *)*(FOutputDevice **)GNetworkLog_exref);
  return;
}


// ==== 10314d7b thunk_FUN_1047e130 thunk -> 1047e130

// ==== 10314d85 AL2Dice::operator_new

/* public: static void * __cdecl AL2Dice::operator new(unsigned int,class UObject *,class
   FName,unsigned long) */

void * __cdecl
AL2Dice::operator_new(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  UObject *pUVar1;
  
                    /* 0x14d85  1606  ??2AL2Dice@@SAPAXIPAVUObject@@VFName@@K@Z */
  pUVar1 = UObject::StaticAllocateObject
                     (&PrivateStaticClass,param_2,param_3,param_4,0,*(undefined4 *)GError_exref,0,0)
  ;
  return pUVar1;
}


// ==== 10314d8a AActor::GetRightArmMesh

/* public: virtual class UMesh * __thiscall AActor::GetRightArmMesh(void) */

UMesh * __thiscall AActor::GetRightArmMesh(AActor *this)

{
                    /* 0x14d8a  5032  ?GetRightArmMesh@AActor@@UAEPAVUMesh@@XZ */
  return (UMesh *)0x0;
}


// ==== 10314d8f ALineagePlayerController::CalcBehindView

/* public: virtual void __thiscall ALineagePlayerController::CalcBehindView(class FVector *,class
   FRotator *) */

void __thiscall
ALineagePlayerController::CalcBehindView
          (ALineagePlayerController *this,FVector *param_1,FRotator *param_2)

{
  ALineagePlayerController AVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  float *pfVar6;
  float *pfVar7;
  uint uVar8;
  float unaff_EBP;
  float unaff_ESI;
  float10 extraout_ST0;
  float10 extraout_ST0_00;
  float10 fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fStack_110;
  float fStack_10c;
  float fStack_108;
  float fVar13;
  FVector *in_stack_ffffff0c;
  float fStack_e0;
  float fStack_dc;
  float fStack_d8;
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  float fStack_c8;
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  float fStack_b8;
  UObject *pUStack_b4;
  float fStack_b0;
  float fStack_ac;
  float fStack_a8;
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  float fStack_8c;
  float fStack_88;
  UObject *pUStack_84;
  float fStack_80;
  float fStack_7c;
  float fStack_78;
  undefined4 uStack_74;
  float fStack_70;
  float fStack_6c;
  float afStack_68 [5];
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 auStack_38 [14];
  
                    /* 0x14d8f  3459
                       ?CalcBehindView@ALineagePlayerController@@UAEXPAVFVector@@PAVFRotator@@@Z */
  iVar4 = *(int *)(this + 0x5c0);
  fStack_d8 = *(float *)(iVar4 + 0x1bc);
  fStack_d4 = *(float *)(iVar4 + 0x1c0);
  fStack_d0 = *(float *)(this + 0x95c) + *(float *)(iVar4 + 0x1c4);
  if (((*(float *)(this + 0x968) == 0.0) && (*(float *)(this + 0x96c) == 0.0)) &&
     (*(float *)(this + 0x970) == 0.0)) {
    iVar4 = *(int *)(this + 0x3bc);
    *(undefined4 *)(this + 0x974) = *(undefined4 *)(iVar4 + 0x1c8);
    *(undefined4 *)(this + 0x978) = *(undefined4 *)(iVar4 + 0x1cc);
    uVar3 = *(undefined4 *)(iVar4 + 0x1d0);
    *(undefined4 *)(this + 0x994) = 0xc1a00000;
    *(undefined4 *)(this + 0x97c) = uVar3;
    *(undefined4 *)(this + 0x998) = 0xc1a00000;
    *(undefined4 *)(this + 0x974) = 0xfffff574;
    *(undefined4 *)(this + 0x99c) = 0xfffff574;
  }
  if (((byte)this[0xa90] & 1) == 0) {
    in_stack_ffffff0c = (FVector *)&fStack_d8;
    iVar4 = FVector::operator==((FVector *)(this + 0x980),in_stack_ffffff0c);
    if (((iVar4 == 0) || (*(float *)(this + 0x990) != 0.0)) ||
       ((*(float *)(this + 0x98c) != 0.0 || (((byte)this[0x960] & 8) != 0)))) {
      if (*(float *)(this + 0x98c) == 0.0) {
        if (((byte)this[0x960] & 8) == 0) {
          if (((*(float *)(this + 0x968) == 0.0) && (*(float *)(this + 0x96c) == 0.0)) &&
             (*(float *)(this + 0x970) == 0.0)) {
            *(undefined4 *)param_2 = *(undefined4 *)(this + 0x1c8);
            *(undefined4 *)(param_2 + 4) = *(undefined4 *)(this + 0x1cc);
            *(undefined4 *)(param_2 + 8) = *(undefined4 *)(this + 0x1d0);
          }
          else if ((((*(int *)GL2UseAutoTrackingPawn_exref == 0) || (((byte)this[0x858] & 1) == 0))
                   || (*(float *)(this + 0x85c) == 0.0)) || (((byte)this[0x834] & 1) != 0)) {
            *(undefined4 *)param_2 = *(undefined4 *)(this + 0x974);
            *(undefined4 *)(param_2 + 4) = *(undefined4 *)(this + 0x978);
            *(undefined4 *)(param_2 + 8) = *(undefined4 *)(this + 0x97c);
          }
          else {
            fStack_cc = fStack_d8 - *(float *)(this + 0x968);
            fStack_c8 = fStack_d4 - *(float *)(this + 0x96c);
            fStack_c4 = fStack_d0 - *(float *)(this + 0x970);
            in_stack_ffffff0c = (FVector *)&uStack_48;
            pUStack_b4 = (UObject *)fStack_cc;
            fStack_b0 = fStack_c8;
            fStack_ac = fStack_c4;
            fStack_a8 = fStack_cc;
            fStack_a4 = fStack_c8;
            fStack_a0 = fStack_c4;
            puVar5 = (undefined4 *)FVector::Rotation((FVector *)&fStack_a8);
            *(undefined4 *)param_2 = *puVar5;
            *(undefined4 *)(param_2 + 4) = puVar5[1];
            *(undefined4 *)(param_2 + 8) = puVar5[2];
            uVar8 = *(uint *)(this + 0x978) & 0xffff;
            iVar4 = FVector::Rotation((FVector *)&fStack_ac);
            uVar2 = *(uint *)(iVar4 + 4) & 0xffff;
            unaff_EBP = (float)(uVar2 - uVar8 & 0xffff);
            if ((uint)unaff_EBP < 0x8000) {
              thunk_FUN_104a4970();
              iVar4 = FUN_107a6660();
              *(uint *)(param_2 + 4) = iVar4 + uVar8;
            }
            else {
              thunk_FUN_104a4970();
              unaff_EBP = (float)(uVar8 - uVar2 & 0xffff);
              iVar4 = FUN_107a6660();
              *(uint *)(param_2 + 4) = uVar8 - iVar4;
            }
          }
        }
        else {
          *(undefined4 *)param_2 = *(undefined4 *)(this + 0x974);
          *(undefined4 *)(param_2 + 4) = *(undefined4 *)(this + 0x978);
          *(undefined4 *)(param_2 + 8) = *(undefined4 *)(this + 0x97c);
        }
      }
      else {
        *(undefined4 *)(param_2 + 4) = *(undefined4 *)(this + 0x978);
        *(uint *)(this + 0x960) = *(uint *)(this + 0x960) & 0xfffffff7;
      }
    }
    else {
      in_stack_ffffff0c = (FVector *)&fStack_d8;
      iVar4 = FVector::operator==((FVector *)(this + 0x980),in_stack_ffffff0c);
      if (iVar4 != 0) {
        *(undefined4 *)param_2 = *(undefined4 *)(this + 0x974);
        *(undefined4 *)(param_2 + 4) = *(undefined4 *)(this + 0x978);
        *(undefined4 *)(param_2 + 8) = *(undefined4 *)(this + 0x97c);
        if (*(float *)(this + 0x964) == *(float *)(this + 0x994)) {
          *(undefined4 *)param_1 = *(undefined4 *)(this + 0x968);
          *(undefined4 *)(param_1 + 4) = *(undefined4 *)(this + 0x96c);
          *(undefined4 *)(param_1 + 8) = *(undefined4 *)(this + 0x970);
          return;
        }
      }
    }
  }
  else {
    *(undefined4 *)param_2 = *(undefined4 *)(this + 0x974);
    *(undefined4 *)(param_2 + 4) = *(undefined4 *)(this + 0x978);
    *(undefined4 *)(param_2 + 8) = *(undefined4 *)(this + 0x97c);
    iVar4 = *(int *)(this + 0x3bc);
    *(undefined4 *)param_1 = *(undefined4 *)(iVar4 + 0x1bc);
    *(undefined4 *)(param_1 + 4) = *(undefined4 *)(iVar4 + 0x1c0);
    *(undefined4 *)(param_1 + 8) = *(undefined4 *)(iVar4 + 0x1c4);
  }
  AVar1 = this[0x960];
  *(float *)(this + 0x980) = fStack_e0;
  *(float *)(this + 0x984) = fStack_dc;
  *(float *)(this + 0x988) = fStack_d8;
  *(undefined4 *)param_2 = *(undefined4 *)(this + 0x974);
  if (((byte)AVar1 & 4) == 0) {
    uVar3 = FUN_107a6660();
    *(undefined4 *)(param_2 + 4) = uVar3;
    uVar3 = FUN_107a6660();
    *(undefined4 *)param_2 = uVar3;
    uVar3 = FUN_107a6660();
    *(undefined4 *)(this + 0x99c) = uVar3;
    iVar4 = *(int *)(param_2 + 4);
    if (0x8000 < iVar4) {
      iVar4 = iVar4 + (-0x10000 - (iVar4 - 0x8001U & 0xffff0000));
    }
    if (iVar4 < -0x7fff) {
      iVar4 = iVar4 + 0x10000 + (-iVar4 - 0x8000U & 0xffff0000);
    }
    *(int *)(param_2 + 4) = iVar4;
    iVar4 = *(int *)param_2;
    if (0x8000 < iVar4) {
      iVar4 = iVar4 + (-0x10000 - (iVar4 - 0x8001U & 0xffff0000));
    }
    if (iVar4 < -0x7fff) {
      iVar4 = iVar4 + 0x10000 + (-iVar4 - 0x8000U & 0xffff0000);
    }
    *(int *)param_2 = iVar4;
    if (iVar4 < -15000) {
      *(undefined4 *)param_2 = 0xffffc568;
    }
    else if (0x4000 < iVar4) {
      *(undefined4 *)param_2 = 0x4000;
    }
    fVar12 = *(float *)(this + 0x994) + 250.0;
    if ((*(uint *)(this + 0x858) & 2) == 0) {
      if ((*(uint *)(this + 0x858) & 4) == 0) {
        fStack_a4 = 1.0;
        fStack_a0 = (float)extraout_ST0_00;
        fStack_9c = (float)extraout_ST0_00;
        FCoords::operator*((FCoords *)(GMath_exref + 0x18),(FRotator *)&fStack_8c);
        fStack_108 = 4.239118e-29;
        pfVar7 = (float *)FVector::TransformVectorBy((FVector *)&fStack_a8,(FCoords *)&uStack_54);
        fVar13 = unaff_ESI - 30.0;
        fStack_b8 = *pfVar7;
        pUStack_b4 = (UObject *)pfVar7[1];
        fStack_b0 = pfVar7[2];
        fStack_c4 = fVar13 * fStack_b8;
        uStack_94 = 0;
        uStack_90 = 0;
        uStack_74 = 0;
        fStack_6c = -NAN;
        afStack_68[0] = 0.0;
        fStack_c0 = (float)pUStack_b4 * fVar13;
        fStack_bc = fVar13 * fStack_b0;
        fStack_dc = unaff_EBP - fStack_c4;
        *(float *)param_1 = fStack_dc;
        fStack_d8 = fVar12 - fStack_c0;
        pfVar7 = afStack_68 + 4;
        *(float *)(param_1 + 4) = fStack_d8;
        fStack_d4 = fStack_e0 - fStack_bc;
        *(float *)(param_1 + 8) = fStack_d4;
        fStack_8c = 0.0;
        fStack_88 = 0.0;
        pUStack_84 = (UObject *)0x0;
        fStack_80 = 0.0;
        fStack_7c = 0.0;
        fStack_78 = 0.0;
        fStack_70 = 1.0;
        fStack_108 = 4.239184e-29;
        pfVar6 = (float *)FRotator::Vector(param_2);
        fStack_b0 = fVar13 * *pfVar6;
        fStack_ac = pfVar6[1] * fVar13;
        fStack_a8 = fVar13 * pfVar6[2];
        fStack_dc = 0.0;
        fStack_d8 = 0.0;
        fStack_c8 = unaff_ESI - fStack_b0;
        fStack_c4 = unaff_EBP - fStack_ac;
        fStack_c0 = fVar12 - fStack_a8;
        fStack_110 = 0.0;
        fStack_10c = 0.0;
        fStack_108 = 0.0;
        fVar12 = 1.87774e-43;
        fStack_a4 = fStack_b0;
        fStack_a0 = fStack_ac;
        fStack_9c = fStack_a8;
        (**(code **)(**(int **)(this + 0xe4) + 0xe4))(&uStack_98,this,&stack0xffffff14,&fStack_c8);
        while (pUStack_b4 != (UObject *)0x0) {
          iVar4 = UObject::IsA(pUStack_b4,&ATerrainInfo::PrivateStaticClass);
          if (iVar4 != 0) {
            fVar9 = (float10)thunk_FUN_104a4970(((float)pfVar7 - fStack_a8) * fStack_d4 +
                                                (fStack_10c - fStack_b0) * fStack_dc +
                                                (fStack_108 - fStack_ac) * fStack_d8,fStack_110);
            fStack_110 = (float)fVar9;
            fVar12 = fStack_110 - 30.0;
            pfVar6 = (float *)thunk_FUN_103301a0(&fStack_7c,fVar12,&fStack_dc);
            fVar13 = pfVar6[1];
            fVar10 = pfVar6[2];
            *(float *)param_1 = fStack_10c - *pfVar6;
            *(float *)(param_1 + 4) = fStack_108 - fVar13;
            *(float *)(param_1 + 8) = (float)pfVar7 - fVar10;
            break;
          }
          fVar9 = (float10)thunk_FUN_10373830(param_1,&fStack_b0);
          if ((float10)*(int *)(this + 0x864) <= fVar9) break;
          fStack_70 = fStack_10c - fStack_b0;
          fStack_6c = fStack_108 - fStack_ac;
          afStack_68[0] = (float)pfVar7 - fStack_a8;
          fVar12 = (afStack_68[0] * fStack_d4 + fStack_d8 * fStack_6c + fStack_dc * fStack_70) -
                   30.0;
          if (fVar12 <= fStack_110) {
            fStack_110 = fVar12;
          }
          fVar12 = fStack_110 - 30.0;
          fStack_b8 = 0.0;
          pUStack_b4 = (UObject *)0x0;
          uStack_98 = 0;
          uStack_90 = 0xffffffff;
          fStack_8c = 0.0;
          fStack_88 = fVar12 * fStack_dc;
          pUStack_84 = (UObject *)(fStack_d8 * fVar12);
          fStack_80 = fVar12 * fStack_d4;
          *(float *)param_1 = fStack_10c - fStack_88;
          pfVar6 = &fStack_7c;
          *(float *)(param_1 + 4) = fStack_108 - (float)pUStack_84;
          *(float *)(param_1 + 8) = (float)pfVar7 - fStack_80;
          fStack_b0 = 0.0;
          fStack_ac = 0.0;
          fStack_a8 = 0.0;
          fStack_a4 = 0.0;
          fStack_a0 = 0.0;
          fStack_9c = 0.0;
          uStack_94 = 0x3f800000;
          pfVar7 = (float *)FRotator::Vector(param_2);
          fStack_d4 = fVar12 * *pfVar7;
          fStack_d0 = pfVar7[1] * fVar12;
          fStack_cc = fVar12 * pfVar7[2];
          pfVar7 = (float *)0x0;
          fStack_c8 = fStack_d4;
          fStack_c4 = fStack_d0;
          fStack_c0 = fStack_cc;
          (**(code **)(**(int **)(this + 0xe4) + 0xe4))
                    (&fStack_bc,this,&fStack_110,&stack0xffffff14,0x86,0,0,0,pfVar6);
        }
        pfVar7 = &fStack_7c;
        afStack_68[3] = 0.0;
        afStack_68[4] = 0.0;
        uStack_54 = 0;
        afStack_68[1] = 0.0;
        uStack_50 = 0;
        afStack_68[2] = 0.0;
        uStack_4c = 0;
        uStack_44 = 0;
        uStack_48 = 0;
        uStack_3c = 0xffffffff;
        auStack_38[0] = 0;
        uStack_40 = 0x3f800000;
        pfVar6 = (float *)FRotator::Vector(param_2);
        fStack_d4 = fVar12 * *pfVar6;
        fVar13 = pfVar6[1] * fVar12;
        fVar12 = fVar12 * pfVar6[2];
        fStack_8c = fStack_110 - fStack_d4;
        fStack_88 = fStack_10c - fVar13;
        pUStack_84 = (UObject *)(fStack_108 - fVar12);
        uVar3 = 0;
        fVar10 = 0.0;
        fVar11 = 0.0;
        fStack_d0 = fVar13;
        fStack_cc = fVar12;
        (**(code **)(**(int **)(this + 0xe4) + 0xe4))(afStack_68,this,&fStack_8c,&fStack_110,0x86,0)
        ;
        if ((pUStack_84 != (UObject *)0x0) &&
           (iVar4 = UObject::IsA(pUStack_84,&ATerrainInfo::PrivateStaticClass), iVar4 != 0)) {
          fStack_110 = (float)pfVar7 - fStack_78;
          fVar9 = (float10)thunk_FUN_104a4970(fStack_110 * 0.0 +
                                              (fVar10 - fStack_80) * fVar13 +
                                              (fVar11 - fStack_7c) * fVar12,uVar3,&stack0xffffff00);
          pfVar6 = (float *)thunk_FUN_103301a0(&fStack_a0,(float)(fVar9 - (float10)30.0));
          fVar12 = pfVar6[1];
          fVar13 = pfVar6[2];
          *(float *)param_1 = fVar10 - *pfVar6;
          *(float *)(param_1 + 4) = fVar11 - fVar12;
          *(float *)(param_1 + 8) = (float)pfVar7 - fVar13;
        }
      }
      else {
        fStack_bc = 1.0;
        fStack_b8 = (float)extraout_ST0_00;
        pUStack_b4 = (UObject *)(float)extraout_ST0_00;
        FCoords::operator*((FCoords *)(GMath_exref + 0x18),(FRotator *)auStack_38);
        fStack_108 = 4.238944e-29;
        puVar5 = (undefined4 *)
                 FVector::TransformVectorBy((FVector *)&fStack_c0,(FCoords *)&uStack_54);
        fStack_b8 = (float)*puVar5;
        pUStack_b4 = (UObject *)puVar5[1];
        fStack_b0 = (float)puVar5[2];
        fStack_8c = 0.0;
        fStack_88 = 0.0;
        pfVar7 = afStack_68 + 4;
        pUStack_84 = (UObject *)0x0;
        fStack_80 = 0.0;
        fStack_7c = 0.0;
        fStack_78 = 0.0;
        uStack_94 = 0;
        uStack_90 = 0;
        fStack_70 = 1.0;
        uStack_74 = 0;
        fStack_6c = -NAN;
        afStack_68[0] = 0.0;
        fStack_108 = 4.2389823e-29;
        pfVar6 = (float *)FRotator::Vector(param_2);
        fStack_c8 = (float)in_stack_ffffff0c * *pfVar6;
        fStack_dc = pfVar6[1] * (float)in_stack_ffffff0c;
        fStack_d8 = (float)in_stack_ffffff0c * pfVar6[2];
        fStack_b0 = 0.1;
        fStack_ac = 0.1;
        fStack_a8 = 5.0;
        fStack_d4 = unaff_ESI - fStack_c8;
        fStack_d0 = unaff_EBP - fStack_dc;
        fStack_cc = fVar12 - fStack_d8;
        fStack_110 = 0.1;
        fStack_10c = 0.1;
        fStack_108 = 5.0;
        fStack_c4 = fStack_dc;
        fStack_c0 = fStack_d8;
        (**(code **)(**(int **)(this + 0xe4) + 0xe4))
                  (&uStack_98,this,&fStack_d4,&stack0xffffff14,0x86);
        if (pUStack_b4 != (UObject *)0x0) {
          fVar9 = (float10)thunk_FUN_104a4970(fStack_d4 * ((float)pfVar7 - fStack_a8) +
                                              (fStack_10c - fStack_b0) * fStack_dc +
                                              fStack_d8 * (fStack_108 - fStack_ac),fStack_110);
          fStack_110 = (float)fVar9;
        }
        fStack_110 = fStack_110 - 30.0;
        *(float *)param_1 = fStack_10c - fStack_110 * fStack_dc;
        *(float *)(param_1 + 4) = fStack_108 - fStack_d8 * fStack_110;
        *(float *)(param_1 + 8) = (float)pfVar7 - fStack_110 * fStack_d4;
      }
    }
    else {
      (**(code **)(*(int *)this + 0x388))();
    }
    fVar9 = (float10)0;
  }
  else {
    *(undefined4 *)(param_2 + 4) = *(undefined4 *)(this + 0x978);
    *(undefined4 *)(param_2 + 8) = *(undefined4 *)(this + 0x97c);
    uVar3 = FUN_107a6660();
    *(undefined4 *)(param_2 + 4) = uVar3;
    uVar3 = FUN_107a6660();
    *(undefined4 *)param_2 = uVar3;
    uVar3 = FUN_107a6660();
    *(undefined4 *)(this + 0x99c) = uVar3;
    *(undefined4 *)param_1 = *(undefined4 *)(this + 0x968);
    *(undefined4 *)(param_1 + 4) = *(undefined4 *)(this + 0x96c);
    *(undefined4 *)(param_1 + 8) = *(undefined4 *)(this + 0x970);
    iVar4 = *(int *)(param_2 + 4);
    if (0x8000 < iVar4) {
      iVar4 = iVar4 + (-0x10000 - (iVar4 - 0x8001U & 0xffff0000));
    }
    if (iVar4 < -0x7fff) {
      iVar4 = iVar4 + 0x10000 + (-iVar4 - 0x8000U & 0xffff0000);
    }
    *(int *)(param_2 + 4) = iVar4;
    iVar4 = *(int *)param_2;
    if (0x8000 < iVar4) {
      iVar4 = iVar4 + (-0x10000 - (iVar4 - 0x8001U & 0xffff0000));
    }
    if (iVar4 < -0x7fff) {
      iVar4 = iVar4 + 0x10000 + (-iVar4 - 0x8000U & 0xffff0000);
    }
    *(int *)param_2 = iVar4;
    fVar9 = extraout_ST0;
    if (iVar4 < -15000) {
      *(undefined4 *)param_2 = 0xffffc568;
    }
    else if (0x4000 < iVar4) {
      *(undefined4 *)param_2 = 0x4000;
    }
  }
  if ((*(uint *)(this + 0x834) & 1) != 0) {
    *(uint *)(this + 0x834) = *(uint *)(this + 0x834) & 0xfffffffe;
  }
  *(float *)(this + 0x838) = (float)fVar9;
  *(float *)(this + 0x83c) = (float)fVar9;
  if (((byte)this[0x9b4] & 3) == 0) {
    *(undefined4 *)(this + 0x968) = *(undefined4 *)param_1;
    *(undefined4 *)(this + 0x96c) = *(undefined4 *)(param_1 + 4);
    *(undefined4 *)(this + 0x970) = *(undefined4 *)(param_1 + 8);
    *(undefined4 *)(this + 0x974) = *(undefined4 *)param_2;
    *(undefined4 *)(this + 0x978) = *(undefined4 *)(param_2 + 4);
    *(undefined4 *)(this + 0x97c) = *(undefined4 *)(param_2 + 8);
  }
  *(float *)(this + 0x990) = (float)fVar9;
  *(float *)(this + 0x98c) = (float)fVar9;
  *(undefined4 *)(this + 0x964) = *(undefined4 *)(this + 0x994);
  return;
}


// ==== 10314d9e AWarpZoneInfo::InternalConstructor

/* public: static void __cdecl AWarpZoneInfo::InternalConstructor(void *) */

void __cdecl AWarpZoneInfo::InternalConstructor(void *param_1)

{
                    /* 0x14d9e  5625  ?InternalConstructor@AWarpZoneInfo@@SAXPAX@Z */
  if (param_1 != (void *)0x0) {
    AWarpZoneInfo(param_1);
    return;
  }
  return;
}


// ==== 10314da3 AAIController::eventGetDestination

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: void __thiscall AAIController::eventGetDestination(class APawn *) */

void __thiscall AAIController::eventGetDestination(AAIController *this,APawn *param_1)

{
  int iVar1;
  UFunction *pUVar2;
  
                    /* 0x14da3  8992  ?eventGetDestination@AAIController@@QAEXPAVAPawn@@@Z */
  iVar1 = *(int *)this;
  pUVar2 = UObject::FindFunctionChecked((UObject *)this,_ENGINE_GetDestination,0,&param_1,0);
  (**(code **)(iVar1 + 0x10))(pUVar2);
  return;
}


// ==== 10314db7 thunk_FUN_105c7c40 thunk -> 105c7c40

// ==== 10314dbc thunk_FUN_103b1fe0 thunk -> 103b1fe0

// ==== 10314dc1 thunk_FUN_10345340 thunk -> 10345340

// ==== 10314dc6 thunk_FUN_1032cb60 thunk -> 1032cb60

// ==== 10314dcb UNetworkHandler::RequestPledgeSetMemberPowerGrade

/* public: virtual void __thiscall UNetworkHandler::RequestPledgeSetMemberPowerGrade(unsigned short
   const *,int) */

void __thiscall
UNetworkHandler::RequestPledgeSetMemberPowerGrade(UNetworkHandler *this,ushort *param_1,int param_2)

{
                    /* 0x14dcb  7508  ?RequestPledgeSetMemberPowerGrade@UNetworkHandler@@UAEXPBGH@Z
                        */
  (**(code **)(**(int **)(this + 0x48) + 0x68))
            (*(int **)(this + 0x48),&DAT_10880a20,0xd0,0x1c,param_1,param_2);
  FOutputDevice::Logf((FOutputDevice *)GNetworkLog_exref,*(ushort **)GNetworkLog_exref);
  return;
}


// ==== 10314dd0 FNAbnormalStat_DOT_WIND::~FNAbnormalStat_DOT_WIND

/* public: virtual __thiscall FNAbnormalStat_DOT_WIND::~FNAbnormalStat_DOT_WIND(void) */

void __thiscall FNAbnormalStat_DOT_WIND::~FNAbnormalStat_DOT_WIND(FNAbnormalStat_DOT_WIND *this)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x14dd0  1223  ??1FNAbnormalStat_DOT_WIND@@UAE@XZ */
  puStack_8 = &LAB_107f24f8;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *(undefined ***)this = vftable;
  uStack_4 = 0xffffffff;
  FNAbnormalStat::~FNAbnormalStat((FNAbnormalStat *)this);
  ExceptionList = pvStack_c;
  return;
}


// ==== 10314dd5 NCBoneSimul::CheckForCollisions1

/* public: int __thiscall NCBoneSimul::CheckForCollisions1(class APawn *) */

int __thiscall NCBoneSimul::CheckForCollisions1(NCBoneSimul *this,APawn *param_1)

{
  FVector *pFVar1;
  undefined4 *puVar2;
  int iVar3;
  FVector *extraout_EDX;
  undefined4 *extraout_EDX_00;
  int iVar4;
  int iVar5;
  double dVar6;
  int iStack_1c;
  int iStack_18;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x14dd5  3538  ?CheckForCollisions1@NCBoneSimul@@QAEHPAVAPawn@@@Z */
  puStack_c = &LAB_10818150;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  iStack_18 = 0;
  ExceptionList = &pvStack_10;
  *(undefined4 *)(this + 0x790) = 0;
  iVar4 = 0;
  while ((iVar4 < *(int *)(this + 0x98) && (iStack_18 != 1))) {
    if (iVar4 != 0) {
      iStack_1c = 0;
      while ((iStack_1c < *(int *)(this + 0x798) && (iStack_18 != 1))) {
        pFVar1 = (FVector *)(*(int *)(this + 0x788) + iVar4 * 0x34);
        dVar6 = DotProduct(this,pFVar1,(FVector *)(iStack_1c * 0x84 + *(int *)(this + 0x7a0)));
        if (-1.5 <= (float)dVar6 + *(float *)(extraout_EDX + 0xc)) {
          if (((float)dVar6 + *(float *)(extraout_EDX + 0xc) < 1.5) &&
             (dVar6 = DotProduct(this,extraout_EDX,pFVar1 + 0xc), (float)dVar6 < 0.0)) {
            iStack_18 = 2;
            *(int *)(*(int *)(this + 0x790) * 0x10 + *(int *)(this + 0x794)) = iVar4;
            puVar2 = (undefined4 *)(*(int *)(this + 0x790) * 0x10 + 4 + *(int *)(this + 0x794));
            *puVar2 = *extraout_EDX_00;
            puVar2[1] = extraout_EDX_00[1];
            puVar2[2] = extraout_EDX_00[2];
            *(int *)(this + 0x790) = *(int *)(this + 0x790) + 1;
          }
          iStack_1c = iStack_1c + 1;
        }
        else {
          iStack_18 = 1;
          iStack_1c = iStack_1c + 1;
        }
      }
      if (*(int *)(this + 0x8ec) != 0) {
        iVar5 = 0;
        while ((iVar5 < *(int *)(this + 0x8ec) &&
               (iVar3 = FName::operator==((FName *)(iVar5 * 0x50 + *(int *)(this + 0x8e8)),
                                          (FName *)(this + 0x8dc)), iVar3 == 0))) {
          iVar5 = iVar5 + 1;
        }
      }
    }
    iVar4 = iVar4 + 1;
  }
  ExceptionList = pvStack_10;
  return iStack_18;
}


// ==== 10314dda thunk_FUN_10459250 thunk -> 10459250

// ==== 10314ddf thunk_FUN_103a2940 thunk -> 103a2940

// ==== 10314de4 FPlayerResponseLine::FPlayerResponseLine

/* public: __thiscall FPlayerResponseLine::FPlayerResponseLine(void) */

FPlayerResponseLine * __thiscall FPlayerResponseLine::FPlayerResponseLine(FPlayerResponseLine *this)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x14de4  489  ??0FPlayerResponseLine@@QAE@XZ */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_107fe600;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FString::FString((FString *)(this + 8));
  uStack_4 = 0;
  FArray::FArray((FArray *)(this + 0x20));
  ExceptionList = pvStack_c;
  return this;
}


// ==== 10314de9 UNetworkHandler::RequestRecipeShopListSet

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */
/* public: virtual void __thiscall UNetworkHandler::RequestRecipeShopListSet(class L2ParamStack &)
    */

void __thiscall
UNetworkHandler::RequestRecipeShopListSet(UNetworkHandler *this,L2ParamStack *param_1)

{
  void *pvVar1;
  void *pvVar2;
  void *pvVar3;
  int iVar4;
  int iVar5;
  void *pvStack_2408;
  undefined1 auStack_2400 [9212];
  undefined4 uStack_4;
  
                    /* 0x14de9  7527
                       ?RequestRecipeShopListSet@UNetworkHandler@@UAEXAAVL2ParamStack@@@Z */
  uStack_4 = 0x104087fa;
  iVar5 = 0;
  pvVar1 = L2ParamStack::Top(param_1);
  pvStack_2408 = pvVar1;
  if (0 < (int)pvVar1) {
    do {
      pvVar2 = L2ParamStack::Top(param_1);
      pvVar3 = L2ParamStack::Top(param_1);
      iVar4 = thunk_FUN_10402610(*(undefined4 *)(this + 0x48),auStack_2400 + iVar5,0x2400 - iVar5,
                                 &DAT_1087ff44,pvVar2,pvVar3);
      iVar5 = iVar5 + iVar4;
      pvStack_2408 = (void *)((int)pvStack_2408 + -1);
    } while (pvStack_2408 != (void *)0x0);
  }
  (**(code **)(**(int **)(this + 0x48) + 0x68))
            (*(int **)(this + 0x48),&DAT_1088029c,0xb2,pvVar1,iVar5,auStack_2400);
  FOutputDevice::Logf((FOutputDevice *)GNetworkLog_exref,*(ushort **)GNetworkLog_exref);
  return;
}


// ==== 10314df8 UUnderWaterMaterial::MaterialVSize

/* public: virtual int __thiscall UUnderWaterMaterial::MaterialVSize(void) */

int __thiscall UUnderWaterMaterial::MaterialVSize(UUnderWaterMaterial *this)

{
  int iVar1;
  
                    /* 0x14df8  6141  ?MaterialVSize@UUnderWaterMaterial@@UAEHXZ */
  if (*(int *)(this + 0x578) != 0) {
                    /* WARNING: Could not recover jumptable at 0x10334924. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = (**(code **)(**(int **)(this + 0x578) + 0x7c))();
    return iVar1;
  }
  return 0;
}


// ==== 10314dfd FNPawnResource::GetDist

/* public: float __thiscall FNPawnResource::GetDist(void) */

float __thiscall FNPawnResource::GetDist(FNPawnResource *this)

{
                    /* 0x14dfd  4572  ?GetDist@FNPawnResource@@QAEMXZ */
  return *(float *)(this + 0xc);
}


// ==== 10314e02 UFileChannel::operator=

/* public: class UFileChannel & __thiscall UFileChannel::operator=(class UFileChannel const &) */

UFileChannel * __thiscall UFileChannel::operator=(UFileChannel *this,UFileChannel *param_1)

{
  UFileChannel *pUVar1;
  int iVar2;
  
                    /* 0x14e02  2509  ??4UFileChannel@@QAEAAV0@ABV0@@Z */
  UChannel::operator=((UChannel *)this,(UChannel *)param_1);
  *(undefined4 *)(this + 0x70) = *(undefined4 *)(param_1 + 0x70);
  *(undefined4 *)(this + 0x74) = *(undefined4 *)(param_1 + 0x74);
  pUVar1 = this + 0x78;
  iVar2 = 0x100;
  do {
    *(undefined2 *)pUVar1 = *(undefined2 *)(pUVar1 + ((int)param_1 - (int)this));
    pUVar1 = pUVar1 + 2;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  *(undefined4 *)(this + 0x278) = *(undefined4 *)(param_1 + 0x278);
  *(undefined4 *)(this + 0x27c) = *(undefined4 *)(param_1 + 0x27c);
  return this;
}


// ==== 10314e07 thunk_FUN_107261c0 thunk -> 107261c0

// ==== 10314e0c thunk_FUN_1040b560 thunk -> 1040b560

// ==== 10314e11 ABrush::~ABrush

/* public: virtual __thiscall ABrush::~ABrush(void) */

void __thiscall ABrush::~ABrush(ABrush *this)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x14e11  1052  ??1ABrush@@UAE@XZ */
  puStack_8 = &LAB_108063b8;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *(undefined ***)this = vftable;
  uStack_4 = 0;
  UObject::ConditionalDestroy((UObject *)this);
  uStack_4 = 0xffffffff;
  AActor::~AActor((AActor *)this);
  ExceptionList = pvStack_c;
  return;
}


// ==== 10314e1b ULodMeshInstance::PoseFrame

/* public: virtual void __thiscall ULodMeshInstance::PoseFrame(int,float) */

void __thiscall ULodMeshInstance::PoseFrame(ULodMeshInstance *this,int param_1,float param_2)

{
                    /* 0x14e1b  6740  ?PoseFrame@ULodMeshInstance@@UAEXHM@Z */
  return;
}


// ==== 10314e25 UNetworkHandler::RequestOlympiadObserverEnd

/* public: virtual void __thiscall UNetworkHandler::RequestOlympiadObserverEnd(void) */

void __thiscall UNetworkHandler::RequestOlympiadObserverEnd(UNetworkHandler *this)

{
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x14e25  7484  ?RequestOlympiadObserverEnd@UNetworkHandler@@UAEXXZ */
  puStack_c = &LAB_1080e6d0;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  ExceptionList = &pvStack_10;
  (**(code **)(**(int **)(this + 0x48) + 0x68))(*(int **)(this + 0x48),&DAT_1088095c,0xd0,0x12);
  FOutputDevice::Logf(*(FOutputDevice **)GNetworkLog_exref,
                      (ushort *)*(FOutputDevice **)GNetworkLog_exref);
  ExceptionList = pvStack_10;
  return;
}


// ==== 10314e2a UVertexBuffer::UVertexBuffer

/* public: __thiscall UVertexBuffer::UVertexBuffer(class UVertexBuffer const &) */

UVertexBuffer * __thiscall UVertexBuffer::UVertexBuffer(UVertexBuffer *this,UVertexBuffer *param_1)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x14e2a  1012  ??0UVertexBuffer@@QAE@ABV0@@Z */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_107fd933;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  UVertexStreamBase::UVertexStreamBase((UVertexStreamBase *)this,(UVertexStreamBase *)param_1);
  uStack_4 = 0;
  *(undefined ***)this = vftable;
  thunk_FUN_10379f20(param_1 + 0x44);
  ExceptionList = pvStack_c;
  return this;
}


// ==== 10314e34 FURL::StaticExit

/* public: static void __cdecl FURL::StaticExit(void) */

void __cdecl FURL::StaticExit(void)

{
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x14e34  8528  ?StaticExit@FURL@@SAXXZ */
  puStack_c = &LAB_1082f470;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  ExceptionList = &pvStack_10;
  FString::operator=(&DefaultProtocol,(ushort *)&DAT_10853d94);
  FString::operator=(&DefaultProtocolDescription,(ushort *)&DAT_10853d94);
  FString::operator=(&DefaultName,(ushort *)&DAT_10853d94);
  FString::operator=(&DefaultMap,(ushort *)&DAT_10853d94);
  FString::operator=(&DefaultLocalMap,(ushort *)&DAT_10853d94);
  FString::operator=(&DefaultHost,(ushort *)&DAT_10853d94);
  FString::operator=(&DefaultPortal,(ushort *)&DAT_10853d94);
  FString::operator=(&DefaultMapExt,(ushort *)&DAT_10853d94);
  FString::operator=(&DefaultSaveExt,(ushort *)&DAT_10853d94);
  ExceptionList = pvStack_10;
  return;
}


// ==== 10314e39 thunk_FUN_1035dac0 thunk -> 1035dac0

// ==== 10314e3e ULevelObject::RenderEditorInfo

/* public: virtual void __thiscall ULevelObject::RenderEditorInfo(class FLevelSceneNode *,class
   FRenderInterface *) */

void __thiscall
ULevelObject::RenderEditorInfo
          (ULevelObject *this,FLevelSceneNode *param_1,FRenderInterface *param_2)

{
  int *piVar1;
  FLevelSceneNode *pFVar2;
  undefined1 *puVar3;
  int iVar4;
  FLevelSceneNode **ppFVar5;
  undefined4 uVar6;
  UClass *this_00;
  ushort *puVar7;
  UObject *pUVar8;
  float fVar9;
  FCanvasUtil aFStack_114 [28];
  float fStack_f8;
  float fStack_f4;
  float fStack_f0;
  float fStack_e8;
  float fStack_e4;
  float fStack_e0;
  float fStack_d8;
  float fStack_d4;
  float fStack_d0;
  float fStack_c8;
  float fStack_c4;
  float fStack_c0;
  undefined1 *puStack_6c;
  void *pvStack_68;
  undefined1 *puStack_64;
  int iStack_60;
  undefined1 auStack_5c [4];
  float fStack_58;
  float fStack_54;
  float fStack_50;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  FRenderInterface *pFStack_3c;
  float fStack_38;
  FLevelSceneNode *pFStack_34;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  undefined4 uStack_c;
  float fStack_8;
  
                    /* 0x14e3e  7334
                       ?RenderEditorInfo@ULevelObject@@UAEXPAVFLevelSceneNode@@PAVFRenderInterface@@@Z
                        */
  pFVar2 = param_1;
  puStack_64 = &LAB_10825484;
  pvStack_68 = ExceptionList;
  puStack_6c = &stack0xfffffeb4;
  iStack_60._0_1_ = 0;
  iStack_60._1_3_ = 0;
  ExceptionList = &pvStack_68;
  puVar3 = &stack0xfffffeb4;
  if (((byte)this[0x34] & 2) != 0) {
    ExceptionList = &pvStack_68;
    (**(code **)(*(int *)this + 0x70))(param_1,param_2);
    puVar3 = puStack_6c;
  }
  puStack_6c = puVar3;
  iVar4 = *(int *)(pFVar2 + 4);
  if ((*(uint *)(*(int *)(iVar4 + 0x3c) + 0x5ac) & 0x4000000) != 0) {
    FCanvasUtil::FCanvasUtil
              (aFStack_114,(FRenderTarget *)(iVar4 + 0xdc),*(FRenderInterface **)(iVar4 + 0x154));
    iStack_60._0_1_ = 1;
    param_1 = (FLevelSceneNode *)(**(code **)(**(int **)(this + 0x48) + 0x78))();
    param_2 = (FRenderInterface *)((float)(int)param_1 * *(float *)(this + 0x4c) * 0.5);
    param_1 = (FLevelSceneNode *)(**(code **)(**(int **)(this + 0x48) + 0x78))();
    fStack_8 = (float)(int)param_1 * *(float *)(this + 0x4c) * -0.5;
    iVar4 = (**(code **)(**(int **)(this + 0x48) + 0x78))();
    param_2 = (FRenderInterface *)((float)param_2 + *(float *)(this + 0x3c));
    fStack_38 = *(float *)(this + 0x40) + fStack_8;
    param_1 = (FLevelSceneNode *)
              (*(float *)(this + 0x44) + (float)iVar4 * *(float *)(this + 0x4c) * 0.5);
    pFStack_3c = param_2;
    pFStack_34 = param_1;
    fStack_8 = fStack_38;
    FSceneNode::Project((FSceneNode *)pFVar2,&fStack_1c,param_2,fStack_38,param_1);
    fStack_48 = fStack_f8 * fStack_1c + fStack_18 * fStack_e8 + fStack_14 * fStack_d8 + fStack_c8;
    fStack_44 = fStack_d4 * fStack_14 + fStack_f4 * fStack_1c + fStack_e4 * fStack_18 + fStack_c4;
    fStack_40 = fStack_14 * fStack_d0 + fStack_18 * fStack_e0 + fStack_f0 * fStack_1c + fStack_c0;
    piVar1 = *(int **)(*(int *)(pFVar2 + 4) + 0x74);
    fStack_2c = fStack_48;
    fStack_28 = fStack_44;
    fStack_24 = fStack_40;
    (**(code **)(*piVar1 + 0x80))(piVar1,piVar1[0x1e],auStack_5c,&uStack_c,&DAT_108a901c);
    if (((byte)this[0x34] & 2) == 0) {
      param_2 = (FRenderInterface *)0xffffffff;
      ppFVar5 = (FLevelSceneNode **)&param_2;
    }
    else {
      param_1 = (FLevelSceneNode *)0xff80e680;
      ppFVar5 = &param_1;
    }
    *(FLevelSceneNode **)(*(int *)(*(int *)(pFVar2 + 4) + 0x74) + 100) = *ppFVar5;
    param_1 = *(FLevelSceneNode **)(*(int *)(pFVar2 + 4) + 0x74);
    iVar4 = *(int *)param_1;
    uVar6 = FUN_107a6660();
    uVar6 = FUN_107a6660(uVar6);
    uVar6 = FUN_107a6660(uVar6);
    uVar6 = FUN_107a6660(uVar6);
    (**(code **)(iVar4 + 0x120))(uVar6);
    param_1 = (FLevelSceneNode *)**(undefined4 **)(*(int *)(pFVar2 + 4) + 0x74);
    iVar4 = *(int *)(*(int *)(pFVar2 + 4) + 0x74);
    this_00 = UObject::GetClass((UObject *)this);
    puVar7 = UObject::GetName((UObject *)this_00);
    (**(code **)(param_1 + 0x88))(iVar4,*(undefined4 *)(iVar4 + 0x78),0,puVar7);
    iStack_60._0_1_ = 0;
    FCanvasUtil::~FCanvasUtil(aFStack_114);
  }
  if ((*(byte *)(*(int *)(*(int *)(pFVar2 + 4) + 0x3c) + 0x5ac) & 0x20) != 0) {
    if ((DAT_10db20e8 & 1) == 0) {
      DAT_10db20e8 = DAT_10db20e8 | 1;
      iStack_60._0_1_ = 2;
      pUVar8 = UObject::StaticFindObject
                         (&UTexture::PrivateStaticClass,(UObject *)0xffffffff,
                          (ushort *)L"Engine.S_Actor",0);
      DAT_10db20e4 = thunk_FUN_1040b4c0(pUVar8);
      iStack_60._0_1_ = 0;
    }
    FCanvasUtil::FCanvasUtil
              (aFStack_114,(FRenderTarget *)(*(int *)(pFVar2 + 4) + 0xdc),
               *(FRenderInterface **)(*(int *)(pFVar2 + 4) + 0x154));
    iStack_60._0_1_ = 3;
    FSceneNode::Project((FSceneNode *)pFVar2,&fStack_2c,*(undefined4 *)(this + 0x3c),
                        *(undefined4 *)(this + 0x40),*(undefined4 *)(this + 0x44));
    fStack_58 = fStack_f8 * fStack_2c + fStack_28 * fStack_e8 + fStack_24 * fStack_d8 + fStack_c8;
    fStack_54 = fStack_d4 * fStack_24 + fStack_e4 * fStack_28 + fStack_f4 * fStack_2c + fStack_c4;
    fStack_50 = fStack_f0 * fStack_2c + fStack_e0 * fStack_28 + fStack_d0 * fStack_24 + fStack_c0;
    if (((byte)this[0x34] & 2) == 0) {
      fStack_8 = -NAN;
      fVar9 = fStack_8;
    }
    else {
      uStack_c = 0xff80e680;
      fVar9 = (float)uStack_c;
    }
    param_2 = (FRenderInterface *)(float)(*(int *)(DAT_10db20e4 + 0x584) / 2);
    fStack_8 = (float)(*(int *)(DAT_10db20e4 + 0x580) / 2);
    param_1 = (FLevelSceneNode *)(fStack_58 - fStack_8);
    fStack_1c = fStack_58;
    fStack_18 = fStack_54;
    fStack_14 = fStack_50;
    FCanvasUtil::DrawTile
              (aFStack_114,param_1,fStack_54 - (float)param_2,fStack_8 + fStack_58,
               (float)param_2 + fStack_54,0,0,(float)*(int *)(DAT_10db20e4 + 0x588),
               (float)*(int *)(DAT_10db20e4 + 0x58c),fStack_50,DAT_10db20e4,fVar9);
    iStack_60 = (uint)iStack_60._1_3_ << 8;
    FCanvasUtil::~FCanvasUtil(aFStack_114);
  }
  ExceptionList = pvStack_68;
  return;
}


// ==== 10314e43 FRenderInterface::SetClipPlane

/* public: virtual void __thiscall FRenderInterface::SetClipPlane(unsigned long,class
   FPlane,unsigned long) */

void __thiscall FRenderInterface::SetClipPlane(void)

{
                    /* 0x14e43  7837  ?SetClipPlane@FRenderInterface@@UAEXKVFPlane@@K@Z */
  return;
}


// ==== 10314e48 UVertexStreamUV::~UVertexStreamUV

/* public: virtual __thiscall UVertexStreamUV::~UVertexStreamUV(void) */

void __thiscall UVertexStreamUV::~UVertexStreamUV(UVertexStreamUV *this)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  uint uStack_4;
  
                    /* 0x14e48  1494  ??1UVertexStreamUV@@UAE@XZ */
  puStack_8 = &LAB_107fdb03;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *(undefined ***)this = vftable;
  uStack_4 = 1;
  UObject::ConditionalDestroy((UObject *)this);
  uStack_4 = uStack_4 & 0xffffff00;
  thunk_FUN_10390ea0();
  uStack_4 = 0xffffffff;
  UVertexStreamBase::~UVertexStreamBase((UVertexStreamBase *)this);
  ExceptionList = pvStack_c;
  return;
}


// ==== 10314e4d thunk_FUN_10423670 thunk -> 10423670

// ==== 10314e52 thunk_FUN_10769a60 thunk -> 10769a60

// ==== 10314e57 AKActor::Spawned

/* public: virtual void __thiscall AKActor::Spawned(void) */

void __thiscall AKActor::Spawned(AKActor *this)

{
  int iVar1;
  UObject *pUVar2;
  undefined4 uVar3;
  undefined4 uStack_34;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x14e57  8178  ?Spawned@AKActor@@UAEXXZ */
  puStack_c = &LAB_10811010;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  if (*(int *)(this + 0x348) == 0) {
    uStack_34 = 0x1043df9e;
    ExceptionList = &pvStack_10;
    iVar1 = UObject::IsA((UObject *)this,&AKConstraint::PrivateStaticClass);
    if (iVar1 == 0) {
      FName::FName((FName *)&uStack_34,0);
      pUVar2 = UObject::GetOuter((UObject *)this);
      uVar3 = thunk_FUN_1043dee0(&UKarmaParams::PrivateStaticClass,pUVar2);
      *(undefined4 *)(this + 0x348) = uVar3;
    }
  }
  ExceptionList = pvStack_10;
  return;
}


// ==== 10314e61 thunk_FUN_105f4550 thunk -> 105f4550

// ==== 10314e66 UMaterialSwitch::StaticClass

/* public: static class UClass * __cdecl UMaterialSwitch::StaticClass(void) */

UClass * __cdecl UMaterialSwitch::StaticClass(void)

{
                    /* 0x14e66  8424  ?StaticClass@UMaterialSwitch@@SAPAVUClass@@XZ */
  return &PrivateStaticClass;
}


// ==== 10314e6b thunk_FUN_106fe830 thunk -> 106fe830

// ==== 10314e7a thunk_FUN_10663940 thunk -> 10663940

// ==== 10314e84 thunk_FUN_10389f00 thunk -> 10389f00

// ==== 10314e89 thunk_FUN_103ac7d0 thunk -> 103ac7d0

// ==== 10314e8e AWeaponAttachment::AWeaponAttachment

/* public: __thiscall AWeaponAttachment::AWeaponAttachment(void) */

AWeaponAttachment * __thiscall AWeaponAttachment::AWeaponAttachment(AWeaponAttachment *this)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x14e8e  266  ??0AWeaponAttachment@@QAE@XZ */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_10807a50;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  AActor::AActor((AActor *)this);
  *(undefined ***)this = AInventoryAttachment::vftable;
  uStack_4 = 1;
  *(undefined ***)this = vftable;
  FName::FName((FName *)(this + 0x3c4));
  ExceptionList = pvStack_c;
  return this;
}


// ==== 10314e98 UOpacityModifier::UOpacityModifier

/* protected: __thiscall UOpacityModifier::UOpacityModifier(void) */

UOpacityModifier * __thiscall UOpacityModifier::UOpacityModifier(UOpacityModifier *this)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x14e98  852  ??0UOpacityModifier@@IAE@XZ */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_107f4200;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  UMaterial::UMaterial((UMaterial *)this);
  *(undefined ***)this = UModifier::vftable;
  *(undefined ***)this = vftable;
  ExceptionList = pvStack_c;
  return this;
}


// ==== 10314e9d AStatLog::execExecuteLocalLogBatcher

/* public: void __thiscall AStatLog::execExecuteLocalLogBatcher(struct FFrame &,void * const) */

void __thiscall AStatLog::execExecuteLocalLogBatcher(AStatLog *this,FFrame *param_1,void *param_2)

{
  undefined1 *puVar1;
  FString *this_00;
  ushort *puVar2;
  ushort *puVar3;
  FString aFStack_28 [20];
  undefined1 *puStack_14;
  void *pvStack_10;
  undefined1 *puStack_c;
  int iStack_8;
  
                    /* 0x14e9d  9188  ?execExecuteLocalLogBatcher@AStatLog@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_107fb229;
  pvStack_10 = ExceptionList;
  puStack_14 = &stack0xffffffcc;
  iStack_8 = 0;
  ExceptionList = &pvStack_10;
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  puVar1 = &stack0xffffffcc;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
    puVar1 = puStack_14;
  }
  puStack_14 = puVar1;
  this_00 = (FString *)eventGetLocalLogFileName(this);
  iStack_8._0_1_ = 1;
  puVar2 = FString::operator*(this_00);
  puVar3 = FString::operator*((FString *)(this + 0x428));
  appCreateProc(puVar3,puVar2);
  iStack_8 = (uint)iStack_8._1_3_ << 8;
  FString::~FString(aFStack_28);
  ExceptionList = pvStack_10;
  return;
}


// ==== 10314ea2 User::IsPledgeMaster

/* public: int __thiscall User::IsPledgeMaster(void) */

int __thiscall User::IsPledgeMaster(User *this)

{
                    /* 0x14ea2  5930  ?IsPledgeMaster@User@@QAEHXZ */
  return *(uint *)(this + 0x294) >> 6 & 1;
}


// ==== 10314eac UMeshObject::operator_new

/* public: static void * __cdecl UMeshObject::operator new(unsigned int,enum EInternal *) */

void * __cdecl UMeshObject::operator_new(uint param_1,EInternal *param_2)

{
                    /* 0x14eac  1955  ??2UMeshObject@@SAPAXIPAW4EInternal@@@Z */
  return param_2;
}


// ==== 10314eb1 USkillAction_LocateEffect::StaticClass

/* public: static class UClass * __cdecl USkillAction_LocateEffect::StaticClass(void) */

UClass * __cdecl USkillAction_LocateEffect::StaticClass(void)

{
                    /* 0x14eb1  8462  ?StaticClass@USkillAction_LocateEffect@@SAPAVUClass@@XZ */
  return &PrivateStaticClass;
}


// ==== 10314eb6 thunk_FUN_1043cdd0 thunk -> 1043cdd0

// ==== 10314ebb UNetworkHandler::RequestPackageSend

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */
/* public: virtual void __thiscall UNetworkHandler::RequestPackageSend(class L2ParamStack &) */

void __thiscall UNetworkHandler::RequestPackageSend(UNetworkHandler *this,L2ParamStack *param_1)

{
  void *pvVar1;
  void *pvVar2;
  void *pvVar3;
  void *pvVar4;
  int iVar5;
  FOutputDevice *this_00;
  int iVar6;
  void *pvStack_2410;
  undefined1 auStack_2400 [9212];
  undefined4 uStack_4;
  
                    /* 0x14ebb  7492  ?RequestPackageSend@UNetworkHandler@@UAEXAAVL2ParamStack@@@Z
                        */
  uStack_4 = 0x104095da;
  pvVar1 = L2ParamStack::Top(param_1);
  pvVar2 = L2ParamStack::Top(param_1);
  iVar6 = 0;
  pvStack_2410 = pvVar2;
  if (0 < (int)pvVar2) {
    do {
      pvVar3 = L2ParamStack::Top(param_1);
      pvVar4 = L2ParamStack::Top(param_1);
      iVar5 = thunk_FUN_10402610(*(undefined4 *)(this + 0x48),auStack_2400 + iVar6,0x2400 - iVar6,
                                 &DAT_1087ff44,pvVar3,pvVar4);
      iVar6 = iVar6 + iVar5;
      pvStack_2410 = (void *)((int)pvStack_2410 + -1);
    } while (pvStack_2410 != (void *)0x0);
  }
  (**(code **)(**(int **)(this + 0x48) + 0x68))
            (*(int **)(this + 0x48),&DAT_1087ff04,0x9f,pvVar1,pvVar2,iVar6,auStack_2400);
  FOutputDevice::Logf(this_00,*(ushort **)GNetworkLog_exref);
  return;
}


// ==== 10314ec0 thunk_FUN_1037fc10 thunk -> 1037fc10

// ==== 10314ec5 URibbonEmitter::StaticClass

/* public: static class UClass * __cdecl URibbonEmitter::StaticClass(void) */

UClass * __cdecl URibbonEmitter::StaticClass(void)

{
                    /* 0x14ec5  8455  ?StaticClass@URibbonEmitter@@SAPAVUClass@@XZ */
  return &PrivateStaticClass;
}


// ==== 10314eca UGameEngine::OnExEventMatchManage

/* public: virtual void __thiscall UGameEngine::OnExEventMatchManage(class L2ParamStack &) */

void __thiscall UGameEngine::OnExEventMatchManage(UGameEngine *this,L2ParamStack *param_1)

{
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x14eca  6386  ?OnExEventMatchManage@UGameEngine@@UAEXAAVL2ParamStack@@@Z */
  puStack_c = &LAB_108160e0;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  ExceptionList = &pvStack_10;
  (**(code **)(**(int **)(this + 0x68) + 0x718))(param_1);
  ExceptionList = pvStack_10;
  return;
}


// ==== 10314ecf AActor::execSetRelativeRotation

/* public: void __thiscall AActor::execSetRelativeRotation(struct FFrame &,void * const) */

void __thiscall AActor::execSetRelativeRotation(AActor *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  FMatrix *pFVar5;
  FCoords *pFVar6;
  undefined4 uVar7;
  undefined4 unaff_EBX;
  undefined4 unaff_EBP;
  FRotator *pFVar8;
  undefined4 *puVar9;
  AActor **ppAVar10;
  undefined4 *puVar11;
  undefined4 *unaff_retaddr;
  undefined4 auStack_2f8 [15];
  undefined4 uStack_2bc;
  undefined1 *puStack_2b8;
  undefined4 auStack_2b4 [12];
  undefined4 uStack_284;
  undefined4 uStack_280;
  undefined4 uStack_27c;
  undefined4 uStack_278;
  undefined1 *puStack_274;
  AActor *apAStack_270 [5];
  undefined4 uStack_25c;
  undefined4 uStack_258;
  undefined4 uStack_254;
  undefined4 uStack_250;
  undefined4 uStack_24c;
  undefined4 uStack_248;
  undefined4 uStack_218;
  undefined4 uStack_214;
  undefined4 uStack_210;
  undefined4 uStack_20c;
  FName aFStack_208 [4];
  undefined4 uStack_204;
  undefined4 uStack_200;
  undefined4 uStack_1fc;
  undefined4 uStack_1f8;
  undefined4 uStack_1f4;
  undefined4 uStack_1f0;
  undefined4 uStack_1ec;
  undefined4 uStack_1e8;
  undefined4 uStack_1e4;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  undefined4 uStack_1d8;
  FRotator aFStack_1d4 [48];
  FCoords aFStack_1a4 [4];
  FCoords aFStack_1a0 [4];
  FMatrix aFStack_19c [4];
  FRotator aFStack_198 [4];
  undefined1 auStack_194 [8];
  FCoords aFStack_18c [44];
  FCoords aFStack_160 [8];
  undefined4 uStack_158;
  FMatrix aFStack_154 [12];
  FMatrix aFStack_148 [44];
  undefined4 uStack_11c;
  FMatrix aFStack_118 [64];
  undefined1 auStack_d8 [4];
  undefined4 auStack_d4 [15];
  undefined4 uStack_98;
  FMatrix aFStack_94 [68];
  int iStack_50;
  void *pvStack_14;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x14ecf  9364  ?execSetRelativeRotation@AActor@@QAEXAAUFFrame@@QAX@Z */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_10827045;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FRotator::FRotator((FRotator *)&uStack_218);
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))();
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))();
  }
  FName::FName(aFStack_208,0);
  iVar3 = FName::operator!=((FName *)(this + 0xd8),aFStack_208);
  if (iVar3 == 0) {
    uStack_250 = unaff_EBP;
    uStack_24c = unaff_EBX;
    if (*(int *)(this + 0x40) != 0) {
      if ((((byte)this[0x214] & 1) == 0) || (((byte)this[0x2f8] & 0xc) != 0)) {
        FCoords::operator/((FCoords *)(GMath_exref + 0x18),aFStack_1d4);
        FCoords::operator/((FCoords *)(GMath_exref + 0x18),aFStack_198);
        FCoords::Transpose((FCoords *)&uStack_1dc);
        uStack_248 = 0x106a4100;
        puVar4 = (undefined4 *)FCoords::operator*(aFStack_1a0,aFStack_160);
        pFVar6 = aFStack_1a4;
        for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
          *(undefined4 *)pFVar6 = *puVar4;
          puVar4 = puVar4 + 1;
          pFVar6 = pFVar6 + 4;
        }
        uStack_248 = 0x106a4122;
        FCoords::OrthoRotation(aFStack_1a4);
        uStack_250 = unaff_EBP;
        uStack_24c = unaff_EBX;
      }
      else {
        uStack_214 = *(undefined4 *)(this + 0x248);
        uStack_210 = *(undefined4 *)(this + 0x24c);
        uStack_20c = *(undefined4 *)(this + 0x250);
        puVar4 = (undefined4 *)thunk_FUN_10326fb0();
        pvStack_c = (void *)0x0;
        puVar9 = puVar4;
        puVar11 = auStack_d4;
        for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1) {
          *puVar11 = *puVar9;
          puVar9 = puVar9 + 1;
          puVar11 = puVar11 + 1;
        }
        pFVar8 = aFStack_1d4;
        for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1) {
          *(undefined4 *)pFVar8 = *puVar4;
          puVar4 = puVar4 + 1;
          pFVar8 = pFVar8 + 4;
        }
        pvStack_c._0_1_ = 1;
        pFVar5 = (FMatrix *)thunk_FUN_105263f0();
        pvStack_c = (void *)CONCAT31(pvStack_c._1_3_,2);
        puStack_274 = auStack_194;
        pFVar8 = aFStack_1d4;
        ppAVar10 = apAStack_270;
        for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1) {
          *ppAVar10 = (AActor *)*(undefined4 *)pFVar8;
          pFVar8 = pFVar8 + 4;
          ppAVar10 = ppAVar10 + 1;
        }
        uStack_278 = 0x106a3e9b;
        puVar4 = (undefined4 *)FMatrix::operator*(pFVar5);
        iStack_50._1_3_ = (uint3)((uint)iStack_50 >> 8);
        pFVar5 = (FMatrix *)(this + 0x218);
        for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1) {
          *(undefined4 *)pFVar5 = *puVar4;
          puVar4 = puVar4 + 1;
          pFVar5 = pFVar5 + 4;
        }
        iStack_50._0_1_ = 2;
        uStack_278 = 0x106a3ec9;
        FMatrix::~FMatrix((FMatrix *)&uStack_1d8);
        iStack_50._0_1_ = 1;
        uStack_278 = 0x106a3edd;
        thunk_FUN_10526040();
        iStack_50 = (uint)iStack_50._1_3_ << 8;
        uStack_278 = 0x106a3ef2;
        FMatrix::~FMatrix(aFStack_118);
        iStack_50 = 0xffffffff;
        uStack_278 = 0x106a3f09;
        thunk_FUN_103284c0();
        iVar3 = *(int *)(this + 0x40);
        uStack_280 = *(undefined4 *)(iVar3 + 0x1bc);
        uStack_27c = *(undefined4 *)(iVar3 + 0x1c0);
        uStack_278 = *(undefined4 *)(iVar3 + 0x1c4);
        uStack_284 = 0x106a3f33;
        puVar4 = (undefined4 *)thunk_FUN_10326fb0();
        iStack_50 = 0;
        puVar9 = puVar4;
        puVar11 = &uStack_158;
        for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1) {
          *puVar11 = *puVar9;
          puVar9 = puVar9 + 1;
          puVar11 = puVar11 + 1;
        }
        puVar9 = &uStack_98;
        for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1) {
          *puVar9 = *puVar4;
          puVar4 = puVar4 + 1;
          puVar9 = puVar9 + 1;
        }
        iStack_50._0_1_ = 5;
        iVar3 = *(int *)(this + 0x40);
        uStack_280 = *(undefined4 *)(iVar3 + 0x1c8);
        uStack_27c = *(undefined4 *)(iVar3 + 0x1cc);
        uStack_278 = *(undefined4 *)(iVar3 + 0x1d0);
        uStack_284 = 0x106a3f93;
        pFVar5 = (FMatrix *)thunk_FUN_105263f0();
        iStack_50 = CONCAT31(iStack_50._1_3_,6);
        puVar4 = &uStack_98;
        puVar9 = auStack_2b4;
        for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1) {
          *puVar9 = *puVar4;
          puVar4 = puVar4 + 1;
          puVar9 = puVar9 + 1;
        }
        puStack_2b8 = auStack_d8;
        uStack_2bc = 0x106a3fbe;
        FMatrix::operator*(pFVar5);
        aFStack_94[0] = (FMatrix)0x8;
        uStack_2bc = 0x106a3fd2;
        thunk_FUN_10526040();
        aFStack_94[0] = (FMatrix)0x9;
        uStack_2bc = 0x106a3fe7;
        FMatrix::~FMatrix(aFStack_19c);
        aFStack_94[0] = (FMatrix)0xa;
        uStack_2bc = 0x106a3ff8;
        thunk_FUN_103284c0();
        puVar4 = &uStack_11c;
        puVar9 = auStack_2f8;
        for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1) {
          *puVar9 = *puVar4;
          puVar4 = puVar4 + 1;
          puVar9 = puVar9 + 1;
        }
        FMatrix::operator*((FMatrix *)(this + 0x218),&uStack_1dc);
        unaff_retaddr = (undefined4 *)CONCAT31((int3)((uint)unaff_retaddr >> 8),0xb);
        FMatrix::Coords(aFStack_148);
        pFVar6 = (FCoords *)FCoords::operator*((FCoords *)(GMath_exref + 0x18),aFStack_18c);
        puVar4 = (undefined4 *)FCoords::OrthoRotation(pFVar6);
        uVar7 = *puVar4;
        uVar2 = puVar4[1];
        uStack_218 = puVar4[2];
        pvStack_c = (void *)CONCAT31(pvStack_c._1_3_,10);
        FMatrix::~FMatrix(aFStack_154);
        pvStack_c = (void *)0xffffffff;
        FMatrix::~FMatrix(aFStack_94);
        uStack_250 = uVar7;
        uStack_24c = uVar2;
      }
    }
    uStack_1fc = 0;
    uStack_1f8 = 0;
    uStack_1f4 = 0;
    uStack_1f0 = 0;
    uStack_1ec = 0;
    uStack_1e8 = 0;
    uStack_1e0 = 0x3f800000;
    uStack_214 = 0;
    uStack_210 = 0;
    uStack_248 = uStack_218;
    uStack_20c = 0;
    uStack_25c = 0;
    uStack_204 = 0;
    uStack_200 = 0;
    uStack_1e4 = 0;
    uStack_1dc = 0xffffffff;
    uStack_1d8 = 0;
    uStack_258 = 0;
    uStack_254 = 0;
    apAStack_270[3] = (AActor *)0x106a41cc;
    apAStack_270[4] = this;
    uVar7 = (**(code **)(**(int **)(this + 0xe4) + 0xa4))();
    *unaff_retaddr = uVar7;
  }
  else {
    *(undefined4 *)(this + 0x208) = unaff_EBP;
    *(undefined4 *)(this + 0x20c) = unaff_EBX;
    *(undefined4 *)(this + 0x210) = uStack_218;
    *unaff_retaddr = 1;
  }
  ExceptionList = pvStack_14;
  return;
}


// ==== 10314ed4 thunk_FUN_1068c4a0 thunk -> 1068c4a0

// ==== 10314ed9 FL2ReplayManager::MakeUsePacketTable

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */
/* private: void __thiscall FL2ReplayManager::MakeUsePacketTable(void) */

void __thiscall FL2ReplayManager::MakeUsePacketTable(FL2ReplayManager *this)

{
  FL2ReplayManager *pFVar1;
  int iVar2;
  wchar_t *pwVar3;
  int *piVar4;
  wchar_t *pwVar5;
  undefined4 *puVar6;
  int iVar7;
  int iStack_2208;
  wchar_t awStack_2204 [17];
  undefined1 auStack_21e2 [94];
  undefined4 uStack_2184;
  wchar_t awStack_2180 [10];
  undefined1 auStack_216c [108];
  undefined4 uStack_2100;
  wchar_t awStack_20fc [10];
  undefined1 auStack_20e8 [108];
  undefined4 uStack_207c;
  wchar_t awStack_2078 [7];
  undefined1 auStack_206a [114];
  undefined4 uStack_1ff8;
  undefined4 uStack_1ff4;
  undefined4 uStack_1ff0;
  undefined1 auStack_1fec [120];
  undefined4 uStack_1f74;
  wchar_t awStack_1f70 [7];
  undefined1 auStack_1f62 [114];
  undefined4 uStack_1ef0;
  wchar_t awStack_1eec [11];
  undefined1 auStack_1ed6 [106];
  undefined4 uStack_1e6c;
  wchar_t awStack_1e68 [10];
  undefined1 auStack_1e54 [108];
  undefined4 uStack_1de8;
  wchar_t awStack_1de4 [9];
  undefined1 auStack_1dd2 [110];
  undefined4 uStack_1d64;
  undefined4 auStack_1d60 [7];
  undefined1 auStack_1d44 [100];
  undefined4 uStack_1ce0;
  wchar_t awStack_1cdc [9];
  undefined1 auStack_1cca [110];
  undefined4 uStack_1c5c;
  wchar_t awStack_1c58 [8];
  undefined1 auStack_1c48 [112];
  undefined4 uStack_1bd8;
  wchar_t awStack_1bd4 [7];
  undefined1 auStack_1bc6 [114];
  undefined4 uStack_1b54;
  wchar_t awStack_1b50 [21];
  undefined1 auStack_1b26 [86];
  undefined4 uStack_1ad0;
  undefined4 auStack_1acc [9];
  undefined1 auStack_1aa8 [92];
  undefined4 uStack_1a4c;
  wchar_t awStack_1a48 [19];
  undefined1 auStack_1a22 [90];
  undefined4 uStack_19c8;
  undefined4 auStack_19c4 [7];
  undefined1 auStack_19a8 [100];
  undefined4 uStack_1944;
  wchar_t awStack_1940 [17];
  undefined1 auStack_191e [94];
  undefined4 uStack_18c0;
  wchar_t awStack_18bc [17];
  undefined1 auStack_189a [94];
  undefined4 uStack_183c;
  wchar_t awStack_1838 [10];
  undefined1 auStack_1824 [108];
  undefined4 uStack_17b8;
  undefined4 auStack_17b4 [8];
  undefined1 auStack_1794 [96];
  undefined4 uStack_1734;
  wchar_t awStack_1730 [21];
  undefined1 auStack_1706 [86];
  undefined4 uStack_16b0;
  wchar_t awStack_16ac [17];
  undefined1 auStack_168a [94];
  undefined4 uStack_162c;
  wchar_t awStack_1628 [10];
  undefined1 auStack_1614 [108];
  undefined4 uStack_15a8;
  wchar_t awStack_15a4 [19];
  undefined1 auStack_157e [90];
  undefined4 uStack_1524;
  wchar_t awStack_1520 [13];
  undefined1 auStack_1506 [102];
  undefined4 uStack_14a0;
  undefined4 auStack_149c [9];
  undefined1 auStack_1478 [92];
  undefined4 uStack_141c;
  wchar_t awStack_1418 [23];
  undefined1 auStack_13ea [82];
  undefined4 uStack_1398;
  undefined4 auStack_1394 [7];
  undefined1 auStack_1378 [100];
  undefined4 uStack_1314;
  wchar_t awStack_1310 [15];
  undefined1 auStack_12f2 [98];
  undefined4 uStack_1290;
  wchar_t awStack_128c [13];
  undefined1 auStack_1272 [102];
  undefined4 uStack_120c;
  undefined4 auStack_1208 [9];
  undefined1 auStack_11e4 [92];
  undefined4 uStack_1188;
  wchar_t awStack_1184 [15];
  undefined1 auStack_1166 [98];
  undefined4 uStack_1104;
  undefined4 auStack_1100 [8];
  undefined1 auStack_10e0 [96];
  undefined4 uStack_1080;
  undefined4 auStack_107c [14];
  undefined1 auStack_1044 [72];
  undefined4 uStack_ffc;
  wchar_t awStack_ff8 [21];
  undefined1 auStack_fce [86];
  undefined4 uStack_f78;
  wchar_t awStack_f74 [29];
  undefined1 auStack_f3a [70];
  undefined4 uStack_ef4;
  wchar_t awStack_ef0 [21];
  undefined1 auStack_ec6 [86];
  undefined4 uStack_e70;
  wchar_t awStack_e6c [23];
  undefined1 auStack_e3e [82];
  undefined4 uStack_dec;
  undefined4 uStack_de8;
  undefined4 uStack_de4;
  undefined2 uStack_de0;
  undefined1 auStack_dde [118];
  undefined4 uStack_d68;
  undefined4 auStack_d64 [7];
  undefined1 auStack_d48 [100];
  undefined4 uStack_ce4;
  wchar_t awStack_ce0 [19];
  undefined1 auStack_cba [90];
  undefined4 uStack_c60;
  wchar_t awStack_c5c [11];
  undefined1 auStack_c46 [106];
  undefined4 uStack_bdc;
  wchar_t awStack_bd8 [19];
  undefined1 auStack_bb2 [90];
  undefined4 uStack_b58;
  wchar_t awStack_b54 [23];
  undefined1 auStack_b26 [82];
  undefined4 uStack_ad4;
  undefined4 auStack_ad0 [9];
  undefined1 auStack_aac [92];
  undefined4 uStack_a50;
  wchar_t awStack_a4c [9];
  undefined1 auStack_a3a [110];
  undefined4 uStack_9cc;
  wchar_t awStack_9c8 [11];
  undefined1 auStack_9b2 [106];
  undefined4 uStack_948;
  wchar_t awStack_944 [21];
  undefined1 auStack_91a [86];
  undefined4 uStack_8c4;
  wchar_t awStack_8c0 [11];
  undefined1 auStack_8aa [106];
  undefined4 uStack_840;
  undefined4 auStack_83c [8];
  undefined1 auStack_81c [96];
  undefined4 uStack_7bc;
  wchar_t awStack_7b8 [15];
  undefined1 auStack_79a [98];
  undefined4 uStack_738;
  undefined4 auStack_734 [7];
  undefined1 auStack_718 [100];
  undefined4 uStack_6b4;
  undefined4 uStack_6b0;
  undefined4 uStack_6ac;
  undefined2 uStack_6a8;
  undefined1 auStack_6a6 [118];
  undefined4 uStack_630;
  wchar_t awStack_62c [10];
  undefined1 auStack_618 [108];
  undefined4 uStack_5ac;
  wchar_t awStack_5a8 [15];
  undefined1 auStack_58a [98];
  undefined4 uStack_528;
  wchar_t awStack_524 [13];
  undefined1 auStack_50a [102];
  undefined4 uStack_4a4;
  wchar_t awStack_4a0 [12];
  undefined1 auStack_488 [104];
  undefined4 uStack_420;
  undefined4 auStack_41c [8];
  undefined1 auStack_3fc [96];
  undefined4 uStack_39c;
  undefined4 auStack_398 [12];
  undefined1 auStack_368 [80];
  undefined4 uStack_318;
  wchar_t awStack_314 [27];
  undefined1 auStack_2de [74];
  undefined4 uStack_294;
  wchar_t awStack_290 [17];
  undefined1 auStack_26e [94];
  undefined4 uStack_210;
  wchar_t awStack_20c [15];
  undefined1 auStack_1ee [98];
  undefined4 uStack_18c;
  undefined4 auStack_188 [12];
  undefined1 auStack_158 [80];
  undefined4 uStack_108;
  undefined4 auStack_104 [10];
  undefined1 auStack_dc [88];
  undefined4 uStack_84;
  undefined4 auStack_80 [13];
  undefined1 auStack_4c [72];
  undefined4 uStack_4;
  
                    /* 0x14ed9  6094  ?MakeUsePacketTable@FL2ReplayManager@@AAEXXZ */
  uStack_4 = 0x104a211a;
  iStack_2208 = 1;
  pwVar3 = L"MOVE_TO_LOCATION";
  pwVar5 = awStack_2204;
  for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
    *(undefined4 *)pwVar5 = *(undefined4 *)pwVar3;
    pwVar3 = pwVar3 + 2;
    pwVar5 = pwVar5 + 2;
  }
  *pwVar5 = *pwVar3;
  _memset(auStack_21e2,0,0x5e);
  builtin_wcsncpy(awStack_2180,L"CHAR_INFO",10);
  uStack_2184 = 3;
  _memset(auStack_216c,0,0x6c);
  builtin_wcsncpy(awStack_20fc,L"USER_INFO",10);
  uStack_2100 = 4;
  _memset(auStack_20e8,0,0x6c);
  builtin_wcsncpy(awStack_2078,L"ATTACK",7);
  uStack_207c = 5;
  _memset(auStack_206a,0,0x72);
  uStack_1ff8 = 6;
  uStack_1ff4 = 0x490044;
  uStack_1ff0 = 0x45;
  _memset(auStack_1fec,0,0x78);
  builtin_wcsncpy(awStack_1f70,L"REVIVE",7);
  uStack_1f74 = 7;
  _memset(auStack_1f62,0,0x72);
  builtin_wcsncpy(awStack_1eec,L"SPAWN_ITEM",0xb);
  uStack_1ef0 = 0xb;
  _memset(auStack_1ed6,0,0x6a);
  builtin_wcsncpy(awStack_1e68,L"DROP_ITEM",10);
  uStack_1e6c = 0xc;
  _memset(auStack_1e54,0,0x6c);
  builtin_wcsncpy(awStack_1de4,L"GET_ITEM",9);
  uStack_1de8 = 0xd;
  _memset(auStack_1dd2,0,0x6e);
  uStack_1d64 = 0x12;
  pwVar3 = L"DELETE_OBJECT";
  puVar6 = auStack_1d60;
  for (iVar2 = 7; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar6 = *(undefined4 *)pwVar3;
    pwVar3 = pwVar3 + 2;
    puVar6 = puVar6 + 1;
  }
  _memset(auStack_1d44,0,100);
  builtin_wcsncpy(awStack_1cdc,L"NPC_INFO",9);
  uStack_1ce0 = 0x16;
  _memset(auStack_1cca,0,0x6e);
  builtin_wcsncpy(awStack_1c58,L"SUNRISE",8);
  uStack_1c5c = 0x1c;
  _memset(auStack_1c48,0,0x70);
  builtin_wcsncpy(awStack_1bd4,L"SUNSET",7);
  uStack_1bd8 = 0x1d;
  _memset(auStack_1bc6,0,0x72);
  uStack_1b54 = 0x28;
  pwVar3 = L"TELEPORT_TO_LOCATION";
  pwVar5 = awStack_1b50;
  for (iVar2 = 10; iVar2 != 0; iVar2 = iVar2 + -1) {
    *(undefined4 *)pwVar5 = *(undefined4 *)pwVar3;
    pwVar3 = pwVar3 + 2;
    pwVar5 = pwVar5 + 2;
  }
  *pwVar5 = *pwVar3;
  _memset(auStack_1b26,0,0x56);
  uStack_1ad0 = 0x2b;
  pwVar3 = L"COMBAT_MODE_START";
  puVar6 = auStack_1acc;
  for (iVar2 = 9; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar6 = *(undefined4 *)pwVar3;
    pwVar3 = pwVar3 + 2;
    puVar6 = puVar6 + 1;
  }
  _memset(auStack_1aa8,0,0x5c);
  uStack_1a4c = 0x2c;
  pwVar3 = L"COMBAT_MODE_FINISH";
  pwVar5 = awStack_1a48;
  for (iVar2 = 9; iVar2 != 0; iVar2 = iVar2 + -1) {
    *(undefined4 *)pwVar5 = *(undefined4 *)pwVar3;
    pwVar3 = pwVar3 + 2;
    pwVar5 = pwVar5 + 2;
  }
  *pwVar5 = *pwVar3;
  _memset(auStack_1a22,0,0x5a);
  uStack_19c8 = 0x2d;
  pwVar3 = L"SOCIAL_ACTION";
  puVar6 = auStack_19c4;
  for (iVar2 = 7; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar6 = *(undefined4 *)pwVar3;
    pwVar3 = pwVar3 + 2;
    puVar6 = puVar6 + 1;
  }
  _memset(auStack_19a8,0,100);
  uStack_1944 = 0x2e;
  pwVar3 = L"CHANGE_MOVE_TYPE";
  pwVar5 = awStack_1940;
  for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
    *(undefined4 *)pwVar5 = *(undefined4 *)pwVar3;
    pwVar3 = pwVar3 + 2;
    pwVar5 = pwVar5 + 2;
  }
  *pwVar5 = *pwVar3;
  _memset(auStack_191e,0,0x5e);
  uStack_18c0 = 0x2f;
  pwVar3 = L"CHANGE_WAIT_TYPE";
  pwVar5 = awStack_18bc;
  for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
    *(undefined4 *)pwVar5 = *(undefined4 *)pwVar3;
    pwVar3 = pwVar3 + 2;
    pwVar5 = pwVar5 + 2;
  }
  *pwVar5 = *pwVar3;
  _memset(auStack_189a,0,0x5e);
  builtin_wcsncpy(awStack_1838,L"STOP_MOVE",10);
  uStack_183c = 0x47;
  _memset(auStack_1824,0,0x6c);
  uStack_17b8 = 0x48;
  pwVar3 = L"MAGIC_SKILL_USE";
  puVar6 = auStack_17b4;
  for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar6 = *(undefined4 *)pwVar3;
    pwVar3 = pwVar3 + 2;
    puVar6 = puVar6 + 1;
  }
  _memset(auStack_1794,0,0x60);
  uStack_1734 = 0x49;
  pwVar3 = L"MAGIC_SKILL_CANCELED";
  pwVar5 = awStack_1730;
  for (iVar2 = 10; iVar2 != 0; iVar2 = iVar2 + -1) {
    *(undefined4 *)pwVar5 = *(undefined4 *)pwVar3;
    pwVar3 = pwVar3 + 2;
    pwVar5 = pwVar5 + 2;
  }
  *pwVar5 = *pwVar3;
  _memset(auStack_1706,0,0x56);
  uStack_16b0 = 0x4b;
  pwVar3 = L"EQUIPMENT_UPDATE";
  pwVar5 = awStack_16ac;
  for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
    *(undefined4 *)pwVar5 = *(undefined4 *)pwVar3;
    pwVar3 = pwVar3 + 2;
    pwVar5 = pwVar5 + 2;
  }
  *pwVar5 = *pwVar3;
  _memset(auStack_168a,0,0x5e);
  builtin_wcsncpy(awStack_1628,L"DOOR_INFO",10);
  uStack_162c = 0x4c;
  _memset(auStack_1614,0,0x6c);
  uStack_15a8 = 0x4d;
  pwVar3 = L"DOOR_STATUS_UPDATE";
  pwVar5 = awStack_15a4;
  for (iVar2 = 9; iVar2 != 0; iVar2 = iVar2 + -1) {
    *(undefined4 *)pwVar5 = *(undefined4 *)pwVar3;
    pwVar3 = pwVar3 + 2;
    pwVar5 = pwVar5 + 2;
  }
  *pwVar5 = *pwVar3;
  _memset(auStack_157e,0,0x5a);
  uStack_1524 = 0x59;
  pwVar3 = L"VEHICLE_INFO";
  pwVar5 = awStack_1520;
  for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
    *(undefined4 *)pwVar5 = *(undefined4 *)pwVar3;
    pwVar3 = pwVar3 + 2;
    pwVar5 = pwVar5 + 2;
  }
  *pwVar5 = *pwVar3;
  _memset(auStack_1506,0,0x66);
  uStack_14a0 = 0x5a;
  pwVar3 = L"VEHICLE_DEPARTURE";
  puVar6 = auStack_149c;
  for (iVar2 = 9; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar6 = *(undefined4 *)pwVar3;
    pwVar3 = pwVar3 + 2;
    puVar6 = puVar6 + 1;
  }
  _memset(auStack_1478,0,0x5c);
  uStack_141c = 0x5b;
  pwVar3 = L"VEHICLE_CHECK_LOCATION";
  pwVar5 = awStack_1418;
  for (iVar2 = 0xb; iVar2 != 0; iVar2 = iVar2 + -1) {
    *(undefined4 *)pwVar5 = *(undefined4 *)pwVar3;
    pwVar3 = pwVar3 + 2;
    pwVar5 = pwVar5 + 2;
  }
  *pwVar5 = *pwVar3;
  _memset(auStack_13ea,0,0x52);
  uStack_1398 = 0x5c;
  pwVar3 = L"GETON_VEHICLE";
  puVar6 = auStack_1394;
  for (iVar2 = 7; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar6 = *(undefined4 *)pwVar3;
    pwVar3 = pwVar3 + 2;
    puVar6 = puVar6 + 1;
  }
  _memset(auStack_1378,0,100);
  uStack_1314 = 0x5d;
  pwVar3 = L"GETOFF_VEHICLE";
  pwVar5 = awStack_1310;
  for (iVar2 = 7; iVar2 != 0; iVar2 = iVar2 + -1) {
    *(undefined4 *)pwVar5 = *(undefined4 *)pwVar3;
    pwVar3 = pwVar3 + 2;
    pwVar5 = pwVar5 + 2;
  }
  *pwVar5 = *pwVar3;
  _memset(auStack_12f2,0,0x62);
  uStack_1290 = 0x60;
  pwVar3 = L"MOVE_TO_PAWN";
  pwVar5 = awStack_128c;
  for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
    *(undefined4 *)pwVar5 = *(undefined4 *)pwVar3;
    pwVar3 = pwVar3 + 2;
    pwVar5 = pwVar5 + 2;
  }
  *pwVar5 = *pwVar3;
  _memset(auStack_1272,0,0x66);
  uStack_120c = 0x61;
  pwVar3 = L"VALIDATE_LOCATION";
  puVar6 = auStack_1208;
  for (iVar2 = 9; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar6 = *(undefined4 *)pwVar3;
    pwVar3 = pwVar3 + 2;
    puVar6 = puVar6 + 1;
  }
  _memset(auStack_11e4,0,0x5c);
  uStack_1188 = 0x62;
  pwVar3 = L"START_ROTATING";
  pwVar5 = awStack_1184;
  for (iVar2 = 7; iVar2 != 0; iVar2 = iVar2 + -1) {
    *(undefined4 *)pwVar5 = *(undefined4 *)pwVar3;
    pwVar3 = pwVar3 + 2;
    pwVar5 = pwVar5 + 2;
  }
  *pwVar5 = *pwVar3;
  _memset(auStack_1166,0,0x62);
  uStack_1104 = 99;
  pwVar3 = L"FINISH_ROTATING";
  puVar6 = auStack_1100;
  for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar6 = *(undefined4 *)pwVar3;
    pwVar3 = pwVar3 + 2;
    puVar6 = puVar6 + 1;
  }
  _memset(auStack_10e0,0,0x60);
  uStack_1080 = 0x71;
  pwVar3 = L"MOVE_TO_LOCATION_IN_VEHICLE";
  puVar6 = auStack_107c;
  for (iVar2 = 0xe; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar6 = *(undefined4 *)pwVar3;
    pwVar3 = pwVar3 + 2;
    puVar6 = puVar6 + 1;
  }
  _memset(auStack_1044,0,0x48);
  uStack_ffc = 0x72;
  pwVar3 = L"STOP_MOVE_IN_VEHICLE";
  pwVar5 = awStack_ff8;
  for (iVar2 = 10; iVar2 != 0; iVar2 = iVar2 + -1) {
    *(undefined4 *)pwVar5 = *(undefined4 *)pwVar3;
    pwVar3 = pwVar3 + 2;
    pwVar5 = pwVar5 + 2;
  }
  *pwVar5 = *pwVar3;
  _memset(auStack_fce,0,0x56);
  uStack_f78 = 0x73;
  pwVar3 = L"VALIDATE_LOCATION_IN_VEHICLE";
  pwVar5 = awStack_f74;
  for (iVar2 = 0xe; iVar2 != 0; iVar2 = iVar2 + -1) {
    *(undefined4 *)pwVar5 = *(undefined4 *)pwVar3;
    pwVar3 = pwVar3 + 2;
    pwVar5 = pwVar5 + 2;
  }
  *pwVar5 = *pwVar3;
  _memset(auStack_f3a,0,0x46);
  uStack_ef4 = 0x76;
  pwVar3 = L"MAGIC_SKILL_LAUNCHED";
  pwVar5 = awStack_ef0;
  for (iVar2 = 10; iVar2 != 0; iVar2 = iVar2 + -1) {
    *(undefined4 *)pwVar5 = *(undefined4 *)pwVar3;
    pwVar3 = pwVar3 + 2;
    pwVar5 = pwVar5 + 2;
  }
  *pwVar5 = *pwVar3;
  _memset(auStack_ec6,0,0x56);
  uStack_e70 = 0x7f;
  pwVar3 = L"ABNORMAL_STATUS_UPDATE";
  pwVar5 = awStack_e6c;
  for (iVar2 = 0xb; iVar2 != 0; iVar2 = iVar2 + -1) {
    *(undefined4 *)pwVar5 = *(undefined4 *)pwVar3;
    pwVar3 = pwVar3 + 2;
    pwVar5 = pwVar5 + 2;
  }
  *pwVar5 = *pwVar3;
  _memset(auStack_e3e,0,0x52);
  uStack_dec = 0x86;
  uStack_de8 = 0x490052;
  uStack_de4 = 0x450044;
  uStack_de0 = 0;
  _memset(auStack_dde,0,0x76);
  uStack_d68 = 0x89;
  pwVar3 = L"CLIENT_ACTION";
  puVar6 = auStack_d64;
  for (iVar2 = 7; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar6 = *(undefined4 *)pwVar3;
    pwVar3 = pwVar3 + 2;
    puVar6 = puVar6 + 1;
  }
  _memset(auStack_d48,0,100);
  uStack_ce4 = 0x8c;
  pwVar3 = L"SERVER_OBJECT_INFO";
  pwVar5 = awStack_ce0;
  for (iVar2 = 9; iVar2 != 0; iVar2 = iVar2 + -1) {
    *(undefined4 *)pwVar5 = *(undefined4 *)pwVar3;
    pwVar3 = pwVar3 + 2;
    pwVar5 = pwVar5 + 2;
  }
  *pwVar5 = *pwVar3;
  _memset(auStack_cba,0,0x5a);
  builtin_wcsncpy(awStack_c5c,L"PLAY_SOUND",0xb);
  uStack_c60 = 0x98;
  _memset(auStack_c46,0,0x6a);
  uStack_bdc = 0x99;
  pwVar3 = L"STATIC_OBJECT_INFO";
  pwVar5 = awStack_bd8;
  for (iVar2 = 9; iVar2 != 0; iVar2 = iVar2 + -1) {
    *(undefined4 *)pwVar5 = *(undefined4 *)pwVar3;
    pwVar3 = pwVar3 + 2;
    pwVar5 = pwVar5 + 2;
  }
  *pwVar5 = *pwVar3;
  _memset(auStack_bb2,0,0x5a);
  uStack_b58 = 0x9f;
  pwVar3 = L"ABNORMAL_VISUAL_EFFECT";
  pwVar5 = awStack_b54;
  for (iVar2 = 0xb; iVar2 != 0; iVar2 = iVar2 + -1) {
    *(undefined4 *)pwVar5 = *(undefined4 *)pwVar3;
    pwVar3 = pwVar3 + 2;
    pwVar5 = pwVar5 + 2;
  }
  *pwVar5 = *pwVar3;
  _memset(auStack_b26,0,0x52);
  uStack_ad4 = 0xb5;
  pwVar3 = L"PET_STATUS_UPDATE";
  puVar6 = auStack_ad0;
  for (iVar2 = 9; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar6 = *(undefined4 *)pwVar3;
    pwVar3 = pwVar3 + 2;
    puVar6 = puVar6 + 1;
  }
  _memset(auStack_aac,0,0x5c);
  builtin_wcsncpy(awStack_a4c,L"PET_INFO",9);
  uStack_a50 = 0xb1;
  _memset(auStack_a3a,0,0x6e);
  builtin_wcsncpy(awStack_9c8,L"PET_DELETE",0xb);
  uStack_9cc = 0xb6;
  _memset(auStack_9b2,0,0x6a);
  uStack_948 = 0xba;
  pwVar3 = L"VEHICLE_START_PACKET";
  pwVar5 = awStack_944;
  for (iVar2 = 10; iVar2 != 0; iVar2 = iVar2 + -1) {
    *(undefined4 *)pwVar5 = *(undefined4 *)pwVar3;
    pwVar3 = pwVar3 + 2;
    pwVar5 = pwVar5 + 2;
  }
  *pwVar5 = *pwVar3;
  _memset(auStack_91a,0,0x56);
  builtin_wcsncpy(awStack_8c0,L"EARTHQUAKE",0xb);
  uStack_8c4 = 0xc4;
  _memset(auStack_8aa,0,0x6a);
  uStack_840 = 0xc5;
  pwVar3 = L"FLY_TO_LOCATION";
  puVar6 = auStack_83c;
  for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar6 = *(undefined4 *)pwVar3;
    pwVar3 = pwVar3 + 2;
    puVar6 = puVar6 + 1;
  }
  _memset(auStack_81c,0,0x60);
  uStack_7bc = 199;
  pwVar3 = L"SPECIAL_CAMERA";
  pwVar5 = awStack_7b8;
  for (iVar2 = 7; iVar2 != 0; iVar2 = iVar2 + -1) {
    *(undefined4 *)pwVar5 = *(undefined4 *)pwVar3;
    pwVar3 = pwVar3 + 2;
    pwVar5 = pwVar5 + 2;
  }
  *pwVar5 = *pwVar3;
  _memset(auStack_79a,0,0x62);
  uStack_738 = 200;
  pwVar3 = L"NORMAL_CAMERA";
  puVar6 = auStack_734;
  for (iVar2 = 7; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar6 = *(undefined4 *)pwVar3;
    pwVar3 = pwVar3 + 2;
    puVar6 = puVar6 + 1;
  }
  _memset(auStack_718,0,100);
  uStack_6b0 = 0x490044;
  uStack_6b4 = 0xd4;
  uStack_6ac = 0x450043;
  uStack_6a8 = 0;
  _memset(auStack_6a6,0,0x76);
  builtin_wcsncpy(awStack_62c,L"CHAIR_SIT",10);
  uStack_630 = 0xe1;
  _memset(auStack_618,0,0x6c);
  uStack_5ac = 0xf7;
  pwVar3 = L"AGIT_DECO_INFO";
  pwVar5 = awStack_5a8;
  for (iVar2 = 7; iVar2 != 0; iVar2 = iVar2 + -1) {
    *(undefined4 *)pwVar5 = *(undefined4 *)pwVar3;
    pwVar3 = pwVar3 + 2;
    pwVar5 = pwVar5 + 2;
  }
  *pwVar5 = *pwVar3;
  _memset(auStack_58a,0,0x62);
  uStack_528 = 0xdd;
  pwVar3 = L"MONRACE_INFO";
  pwVar5 = awStack_524;
  for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
    *(undefined4 *)pwVar5 = *(undefined4 *)pwVar3;
    pwVar3 = pwVar3 + 2;
    pwVar5 = pwVar5 + 2;
  }
  *pwVar5 = *pwVar3;
  _memset(auStack_50a,0,0x66);
  builtin_wcsncpy(awStack_4a0,L"CAMERA_MODE",0xc);
  uStack_4a4 = 0xf1;
  _memset(auStack_488,0,0x68);
  uStack_420 = 0x29;
  pwVar3 = L"TARGET_SELECTED";
  puVar6 = auStack_41c;
  for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar6 = *(undefined4 *)pwVar3;
    pwVar3 = pwVar3 + 2;
    puVar6 = puVar6 + 1;
  }
  _memset(auStack_3fc,0,0x60);
  uStack_39c = 0x108;
  pwVar3 = L"EX_COLOSSEUM_FENCE_INFO";
  puVar6 = auStack_398;
  for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar6 = *(undefined4 *)pwVar3;
    pwVar3 = pwVar3 + 2;
    puVar6 = puVar6 + 1;
  }
  _memset(auStack_368,0,0x50);
  uStack_318 = 0x10a;
  pwVar3 = L"EX_EVENT_MATCH_FIRECRACKER";
  pwVar5 = awStack_314;
  for (iVar2 = 0xd; iVar2 != 0; iVar2 = iVar2 + -1) {
    *(undefined4 *)pwVar5 = *(undefined4 *)pwVar3;
    pwVar3 = pwVar3 + 2;
    pwVar5 = pwVar5 + 2;
  }
  *pwVar5 = *pwVar3;
  _memset(auStack_2de,0,0x4a);
  uStack_294 = 0x112;
  pwVar3 = L"EX_FISHING_START";
  pwVar5 = awStack_290;
  for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
    *(undefined4 *)pwVar5 = *(undefined4 *)pwVar3;
    pwVar3 = pwVar3 + 2;
    pwVar5 = pwVar5 + 2;
  }
  *pwVar5 = *pwVar3;
  _memset(auStack_26e,0,0x5e);
  uStack_210 = 0x113;
  pwVar3 = L"EX_FISHING_END";
  pwVar5 = awStack_20c;
  for (iVar2 = 7; iVar2 != 0; iVar2 = iVar2 + -1) {
    *(undefined4 *)pwVar5 = *(undefined4 *)pwVar3;
    pwVar3 = pwVar3 + 2;
    pwVar5 = pwVar5 + 2;
  }
  *pwVar5 = *pwVar3;
  _memset(auStack_1ee,0,0x62);
  uStack_18c = 0x114;
  pwVar3 = L"EX_FISHING_START_COMBAT";
  puVar6 = auStack_188;
  for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar6 = *(undefined4 *)pwVar3;
    pwVar3 = pwVar3 + 2;
    puVar6 = puVar6 + 1;
  }
  _memset(auStack_158,0,0x50);
  uStack_108 = 0x115;
  pwVar3 = L"EX_FISHING_HP_REGEN";
  puVar6 = auStack_104;
  for (iVar2 = 10; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar6 = *(undefined4 *)pwVar3;
    pwVar3 = pwVar3 + 2;
    puVar6 = puVar6 + 1;
  }
  _memset(auStack_dc,0,0x58);
  uStack_84 = 0x141;
  pwVar3 = L"S_EX_FLY_SELF_DESTINATION";
  puVar6 = auStack_80;
  for (iVar2 = 0xd; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar6 = *(undefined4 *)pwVar3;
    pwVar3 = pwVar3 + 2;
    puVar6 = puVar6 + 1;
  }
  _memset(auStack_4c,0,0x4c);
  pFVar1 = this + 0x2400;
  iVar2 = 0x15c;
  do {
    iVar7 = iVar2;
    *(undefined4 *)pFVar1 = 0xffffffff;
    pFVar1 = pFVar1 + 0x10;
    iVar2 = iVar7 + -1;
  } while (iVar2 != 0);
  piVar4 = &iStack_2208;
  iVar7 = iVar7 + 0x41;
  do {
    *(int *)(this + (*piVar4 + 0x240) * 0x10) = *piVar4;
    FString::operator=((FString *)(this + *piVar4 * 0x10 + 0x2404),(ushort *)(piVar4 + 1));
    piVar4 = piVar4 + 0x21;
    iVar7 = iVar7 + -1;
  } while (iVar7 != 0);
  return;
}


// ==== 10314ede FNMonsterRaceInfo::SetSection

/* public: int __thiscall FNMonsterRaceInfo::SetSection(float) */

int __thiscall FNMonsterRaceInfo::SetSection(FNMonsterRaceInfo *this,float param_1)

{
  int iVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  undefined1 *puStack_14;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x14ede  8019  ?SetSection@FNMonsterRaceInfo@@QAEHM@Z */
  puStack_c = &LAB_1080e920;
  pvStack_10 = ExceptionList;
  puStack_14 = &stack0xffffffb0;
  uStack_8 = 0;
  iVar1 = *(int *)(this + 4);
  fStack_38 = *(float *)(iVar1 + 0x1bc) - *(float *)(this + 8);
  fStack_34 = *(float *)(iVar1 + 0x1c0) - *(float *)(this + 0xc);
  fStack_30 = *(float *)(iVar1 + 0x1c4) - *(float *)(this + 0x10);
  ExceptionList = &pvStack_10;
  fStack_20 = fStack_30;
  fStack_1c = fStack_34;
  fStack_18 = fStack_38;
  fVar3 = FVector::Size((FVector *)&fStack_38);
  fVar4 = (float)(*(int *)(this + 0x2c) + 1) * 100.0;
  if (fVar4 < fVar3 != (fVar4 == fVar3)) {
    iVar1 = *(int *)(this + 4);
    fStack_44 = *(float *)(iVar1 + 0x1bc) - *(float *)(this + 8);
    fStack_40 = *(float *)(iVar1 + 0x1c0) - *(float *)(this + 0xc);
    fStack_3c = *(float *)(iVar1 + 0x1c4) - *(float *)(this + 0x10);
    iVar2 = *(int *)(this + 0x2c);
    iVar1 = iVar2 + 1;
    fStack_20 = (float)iVar1;
    fStack_1c = fStack_40;
    fStack_18 = fStack_3c;
    fVar4 = FVector::Size((FVector *)&fStack_44);
    fStack_20 = fVar4 - (float)(int)fStack_20 * 100.0;
    fStack_18 = (float)*(int *)(this + 0x3c);
    fStack_1c = GetSpeedRate(this,iVar2);
    fStack_1c = fStack_1c * fStack_18;
    fStack_24 = fStack_20 / fStack_1c;
    fStack_20 = 100.0 - fStack_20;
    fStack_1c = GetSpeedRate(this,iVar1);
    fStack_1c = fStack_18 * fStack_1c;
    fStack_20 = fStack_20 / fStack_1c;
    fStack_24 = (100.0 / (fStack_20 + fStack_24)) / fStack_18;
    SetSpeedRate(this,iVar1,fStack_24);
    *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
  }
  ExceptionList = pvStack_10;
  return *(int *)(this + 0x2c);
}


// ==== 10314eed thunk_FUN_1037ac80 thunk -> 1037ac80

// ==== 10314ef2 thunk_FUN_1045a6c0 thunk -> 1045a6c0

// ==== 10314ef7 AFluidSurfaceInfo::GetClampedBitmap

/* public: int __thiscall AFluidSurfaceInfo::GetClampedBitmap(int,int) */

int __thiscall AFluidSurfaceInfo::GetClampedBitmap(AFluidSurfaceInfo *this,int param_1,int param_2)

{
  int iVar1;
  
                    /* 0x14ef7  4457  ?GetClampedBitmap@AFluidSurfaceInfo@@QAEHHH@Z */
  iVar1 = *(int *)(this + 0x3c4) * param_2 + param_1;
  return (uint)((*(uint *)(*(int *)(this + 0x430) + (iVar1 >> 5) * 4) & 1 << ((byte)iVar1 & 0x1f))
               != 0);
}


// ==== 10314efc thunk_FUN_1034a530 thunk -> 1034a530

// ==== 10314f01 USubSkeletalMeshInstance::SetGPUSkinningConstants

/* public: virtual void __thiscall USubSkeletalMeshInstance::SetGPUSkinningConstants(class
   FRenderInterface *,struct FSkelMeshSection *,class USubSkeletalMeshInstance *) */

void __thiscall
USubSkeletalMeshInstance::SetGPUSkinningConstants
          (USubSkeletalMeshInstance *this,FRenderInterface *param_1,FSkelMeshSection *param_2,
          USubSkeletalMeshInstance *param_3)

{
  int *piVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  float *pfVar5;
  int iVar6;
  int iVar7;
  float *pfVar8;
  int iVar9;
  
                    /* 0x14f01  7876
                       ?SetGPUSkinningConstants@USubSkeletalMeshInstance@@UAEXPAVFRenderInterface@@PAUFSkelMeshSection@@PAV1@@Z
                        */
  uVar3 = rdtsc();
  pfVar5 = (float *)(**(code **)(*(int *)param_1 + 0x114))();
  pcVar2 = *(code **)(*(int *)param_1 + 0x118);
  *pfVar5 = (float)*(int *)(param_2 + 0x18);
  iVar6 = (*pcVar2)();
  iVar9 = 0;
  pfVar5[1] = (float)iVar6;
  if (0 < *(int *)(param_2 + 0x18)) {
    iVar6 = *(int *)(param_3 + 0xd0);
    pfVar5 = pfVar5 + 2;
    do {
      iVar7 = *(int *)(*(int *)(param_2 + 0x14) + iVar9 * 4) * 0x30;
      pfVar8 = (float *)(iVar7 + iVar6);
      *pfVar5 = *(float *)(iVar7 + 0xc + iVar6);
      pfVar5[1] = pfVar8[4];
      pfVar5[2] = pfVar8[5];
      pfVar5[3] = *pfVar8;
      pfVar5[4] = pfVar8[6];
      pfVar5[5] = pfVar8[7];
      iVar9 = iVar9 + 1;
      pfVar5[6] = pfVar8[8];
      pfVar5[7] = pfVar8[1];
      pfVar5[8] = pfVar8[9];
      pfVar5[9] = pfVar8[10];
      pfVar5[10] = pfVar8[0xb];
      pfVar5[0xb] = pfVar8[2];
      pfVar5 = pfVar5 + 0xc;
    } while (iVar9 < *(int *)(param_2 + 0x18));
  }
  uVar4 = rdtsc();
  piVar1 = (int *)(DAT_10ddd7e0 + DAT_10ddda1c * 4);
  *piVar1 = *piVar1 + (((int)uVar4 + -0xc) - (int)uVar3);
  return;
}


// ==== 10314f06 thunk_FUN_103f8b20 thunk -> 103f8b20

// ==== 10314f10 thunk_FUN_103563d0 thunk -> 103563d0

// ==== 10314f15 thunk_FUN_10331640 thunk -> 10331640

// ==== 10314f1a thunk_FUN_103acc80 thunk -> 103acc80

// ==== 10314f1f ALookTarget::operator_new

/* public: static void * __cdecl ALookTarget::operator new(unsigned int,enum EInternal *) */

void * __cdecl ALookTarget::operator_new(uint param_1,EInternal *param_2)

{
                    /* 0x14f1f  1639  ??2ALookTarget@@SAPAXIPAW4EInternal@@@Z */
  return param_2;
}


// ==== 10314f24 UExtraMeshData::UExtraMeshData

/* public: __thiscall UExtraMeshData::UExtraMeshData(class UExtraMeshData const &) */

UExtraMeshData * __thiscall
UExtraMeshData::UExtraMeshData(UExtraMeshData *this,UExtraMeshData *param_1)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x14f24  736  ??0UExtraMeshData@@QAE@ABV0@@Z */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_107f58f9;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  UObject::UObject((UObject *)this,(UObject *)param_1);
  *(undefined ***)this = vftable;
  *(undefined4 *)(this + 0x34) = *(undefined4 *)(param_1 + 0x34);
  *(undefined4 *)(this + 0x38) = *(undefined4 *)(param_1 + 0x38);
  *(undefined4 *)(this + 0x3c) = *(undefined4 *)(param_1 + 0x3c);
  *(undefined4 *)(this + 0x40) = *(undefined4 *)(param_1 + 0x40);
  *(undefined4 *)(this + 0x44) = *(undefined4 *)(param_1 + 0x44);
  ExceptionList = pvStack_c;
  return this;
}


// ==== 10314f29 AActor::FindBase

/* public: void __thiscall AActor::FindBase(void) */

void __thiscall AActor::FindBase(AActor *this)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined1 auStack_70 [4];
  int iStack_6c;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 auStack_40 [3];
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  undefined1 *puStack_14;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x14f29  4215  ?FindBase@AActor@@QAEXXZ */
  puStack_c = &LAB_108234e0;
  pvStack_10 = ExceptionList;
  puStack_14 = &stack0xffffff84;
  uStack_8 = 0;
  ExceptionList = &pvStack_10;
  thunk_FUN_104419f0(0x3f800000,0);
  auStack_40[0] = 0;
  fStack_34 = *(float *)(this + 0x1bc) + 0.0;
  fStack_30 = *(float *)(this + 0x1c0) + 0.0;
  fStack_2c = *(float *)(this + 0x1c4) - 8.0;
  iVar1 = **(int **)(this + 0xe4);
  puVar3 = auStack_40;
  fStack_20 = fStack_2c;
  fStack_1c = fStack_30;
  fStack_18 = fStack_34;
  puVar2 = (undefined4 *)GetCylinderExtent(this);
  (**(code **)(iVar1 + 0xe4))
            (auStack_70,this,&fStack_34,this + 0x1bc,0xdf,*puVar2,puVar2[1],puVar2[2],puVar3);
  if (*(int *)(this + 0x40) != iStack_6c) {
    (**(code **)(*(int *)this + 0x16c))(iStack_6c,uStack_5c,uStack_58,uStack_54,1);
  }
  ExceptionList = pvStack_10;
  return;
}


// ==== 10314f2e FKConvexElem::operator=

/* public: class FKConvexElem & __thiscall FKConvexElem::operator=(class FKConvexElem const &) */

FKConvexElem * __thiscall FKConvexElem::operator=(FKConvexElem *this,FKConvexElem *param_1)

{
  int iVar1;
  FKConvexElem *pFVar2;
  FKConvexElem *pFVar3;
  
  pFVar2 = param_1;
  pFVar3 = this;
                    /* 0x14f2e  2287  ??4FKConvexElem@@QAEAAV0@ABV0@@Z */
  for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)pFVar3 = *(undefined4 *)pFVar2;
    pFVar2 = pFVar2 + 4;
    pFVar3 = pFVar3 + 4;
  }
  thunk_FUN_103795a0(param_1 + 0x40);
  thunk_FUN_10392c40(param_1 + 0x4c);
  return this;
}


// ==== 10314f33 APawn::L2walkMove

/* public: enum ETestMoveResult __thiscall APawn::L2walkMove(class FVector,struct FCheckResult
   &,class AActor *,float) */

ETestMoveResult __thiscall
APawn::L2walkMove(APawn *this,float param_2,float param_3,undefined4 param_4,int param_5,int param_6
                 ,float param_7)

{
  int iVar1;
  bool bVar2;
  float fVar3;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  undefined4 uStack_78;
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  float fStack_34;
  float fStack_28;
  int iStack_24;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  undefined1 *puStack_14;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x14f33  6000
                       ?L2walkMove@APawn@@QAE?AW4ETestMoveResult@@VFVector@@AAUFCheckResult@@PAVAActor@@M@Z
                        */
  puStack_c = &LAB_10822f20;
  pvStack_10 = ExceptionList;
  puStack_14 = &stack0xffffff70;
  uStack_8 = 0;
  fStack_60 = *(float *)(this + 0x1bc);
  fStack_5c = *(float *)(this + 0x1c0);
  fStack_58 = *(float *)(this + 0x1c4);
  uStack_78 = 0;
  fStack_70 = -1.0;
  if (0.0 < *(float *)(*(int *)(this + 0x1b8) + 0x44c)) {
    fStack_70 = 1.0;
  }
  fStack_18 = 0.0;
  fStack_1c = 0.0;
  fStack_34 = fStack_70 * 10.0;
  uStack_3c = 0;
  uStack_38 = 0;
  ExceptionList = &pvStack_10;
  fStack_20 = fStack_34;
  (**(code **)(**(int **)(this + 0xe4) + 0xa4))
            (this,param_2,param_3,0,*(undefined4 *)(this + 0x1c8),*(undefined4 *)(this + 0x1cc),
             *(undefined4 *)(this + 0x1d0),param_5,1,1,0,0);
  if ((param_6 == 0) || (*(int *)(param_5 + 4) != param_6)) {
    uStack_54 = *(undefined4 *)(this + 0x1bc);
    uStack_50 = *(undefined4 *)(this + 0x1c0);
    fStack_4c = *(float *)(this + 0x1c4);
    if (*(float *)(param_5 + 0x24) < 1.0) {
      fStack_40 = 1.0 - *(float *)(param_5 + 0x24);
      fStack_48 = fStack_40 * param_2;
      fStack_44 = param_3 * fStack_40;
      fStack_40 = fStack_40 * 0.0;
      fStack_6c = fStack_18 * -1.0;
      fStack_68 = fStack_1c * -1.0;
      fStack_64 = fStack_20 * -1.0;
      fStack_28 = fStack_64;
      (**(code **)(**(int **)(this + 0xe4) + 0xa4))
                (this,fStack_6c,fStack_68,fStack_64,*(undefined4 *)(this + 0x1c8),
                 *(undefined4 *)(this + 0x1cc),*(undefined4 *)(this + 0x1d0),param_5,1,1,0,0);
      (**(code **)(**(int **)(this + 0xe4) + 0xa4))
                (this,fStack_48,fStack_44,fStack_40,*(undefined4 *)(this + 0x1c8),
                 *(undefined4 *)(this + 0x1cc),*(undefined4 *)(this + 0x1d0),param_5,1,1,0,0);
      if ((param_6 != 0) && (*(int *)(param_5 + 4) == param_6)) {
        ExceptionList = pvStack_10;
        return 5;
      }
      (**(code **)(**(int **)(this + 0xe4) + 0xa4))
                (this,uStack_3c,uStack_38,fStack_34,*(undefined4 *)(this + 0x1c8),
                 *(undefined4 *)(this + 0x1cc),*(undefined4 *)(this + 0x1d0),param_5,1,1,0,0);
      if ((*(float *)(param_5 + 0x24) < 1.0) && (*(float *)(param_5 + 0x1c) < 0.7)) {
        (**(code **)(**(int **)(this + 0xe4) + 0xa8))(this,uStack_54,uStack_50,fStack_4c,1,1,0);
        ExceptionList = pvStack_10;
        return 0;
      }
    }
    fStack_6c = *(float *)(this + 0x1bc);
    fStack_68 = *(float *)(this + 0x1c0);
    fStack_64 = *(float *)(this + 0x1c4);
    fStack_4c = fStack_70 * 12.0;
    uStack_54 = 0;
    uStack_50 = 0;
    uStack_3c = 0;
    uStack_38 = 0;
    fStack_34 = fStack_4c;
    fStack_28 = fStack_4c;
    (**(code **)(**(int **)(this + 0xe4) + 0xa4))
              (this,0,0,fStack_4c,*(undefined4 *)(this + 0x1c8),*(undefined4 *)(this + 0x1cc),
               *(undefined4 *)(this + 0x1d0),param_5,1,1,0,0);
    iStack_24 = 10000;
    while ((*(float *)(param_5 + 0x24) == 1.0 &&
           (iVar1 = iStack_24 + -1, bVar2 = -1 < iStack_24, iStack_24 = iVar1, bVar2))) {
      (**(code **)(**(int **)(this + 0xe4) + 0xa4))
                (this,uStack_3c,uStack_38,fStack_34,*(undefined4 *)(this + 0x1c8),
                 *(undefined4 *)(this + 0x1cc),*(undefined4 *)(this + 0x1d0),param_5,1,1,0,0);
    }
    if (iStack_24 < 0) {
      (**(code **)(**(int **)(this + 0xe4) + 0xa8))(this,fStack_6c,fStack_68,fStack_64,1,1,0);
      ExceptionList = pvStack_10;
      return 2;
    }
    if ((param_6 == 0) || (*(int *)(param_5 + 4) != param_6)) {
      fStack_58 = *(float *)(this + 0x1c4);
      fStack_84 = *(float *)(this + 0x1bc) - fStack_60;
      fStack_80 = *(float *)(this + 0x1c0) - fStack_5c;
      fStack_7c = *(float *)(this + 0x1c4) - fStack_58;
      fVar3 = FVector::SizeSquared((FVector *)&fStack_84);
      if (fVar3 < param_7 * param_7) {
        ExceptionList = pvStack_10;
        return 0;
      }
      ExceptionList = pvStack_10;
      return 1;
    }
  }
  ExceptionList = pvStack_10;
  return 5;
}


// ==== 10314f38 FL2GameData::GetAgitWallPaper

/* public: class UMaterial * __thiscall FL2GameData::GetAgitWallPaper(int) */

UMaterial * __thiscall FL2GameData::GetAgitWallPaper(FL2GameData *this,int param_1)

{
  int iVar1;
  
                    /* 0x14f38  4339  ?GetAgitWallPaper@FL2GameData@@QAEPAVUMaterial@@H@Z */
  iVar1 = thunk_FUN_10459050(&param_1);
  if (iVar1 != 0) {
    return *(UMaterial **)(iVar1 + 4);
  }
  return (UMaterial *)0x0;
}


// ==== 10314f42 thunk_FUN_1032fee0 thunk -> 1032fee0

// ==== 10314f47 thunk_FUN_106fe270 thunk -> 106fe270

// ==== 10314f4c APawn::TickSpecial

/* public: virtual void __thiscall APawn::TickSpecial(float) */

void __thiscall APawn::TickSpecial(APawn *this,float param_1)

{
  undefined1 *puVar1;
  int iVar2;
  UObject *this_00;
  USubSkeletalMeshInstance *this_01;
  USkeletalMeshInstance *pUVar3;
  float fVar4;
  int iVar5;
  float fStack_a0;
  float fStack_9c;
  float fStack_98;
  undefined1 *puStack_70;
  void *pvStack_6c;
  undefined1 *puStack_68;
  undefined4 uStack_64;
  float fStack_58;
  undefined1 *puStack_54;
  float fStack_50;
  float fStack_4c;
  undefined1 *puStack_48;
  float fStack_44;
  int iStack_40;
  int iStack_3c;
  undefined4 uStack_38;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  int iStack_14;
  int iStack_10;
  undefined1 *puStack_c;
  float fStack_8;
  
                    /* 0x14f4c  8639  ?TickSpecial@APawn@@UAEXM@Z */
  uStack_64 = 0xffffffff;
  puStack_68 = &LAB_108203f0;
  pvStack_6c = ExceptionList;
  puStack_70 = &stack0xffffff54;
  ExceptionList = &pvStack_6c;
  puVar1 = &stack0xffffff54;
  if ((((*(uint *)(this + 0x2f8) & 0x8000) == 0) &&
      (ExceptionList = &pvStack_6c, puVar1 = &stack0xffffff54, ((byte)this[0x1734] & 1) != 0)) &&
     (ExceptionList = &pvStack_6c, puVar1 = &stack0xffffff54, *(int *)(this + 0x104) != 0)) {
    ExceptionList = &pvStack_6c;
    UpdateMovementAnimation(this,param_1);
    puVar1 = puStack_70;
  }
  puStack_70 = puVar1;
  NActionProcess(this,param_1);
  SpineRotation(this,param_1);
  UpdateWaistRotation(this,param_1);
  uStack_64 = 0;
  if (((*(int *)(this + 0x14d8) == 0) || (*(int *)GL2KeepMinFrameRate_exref != 0)) ||
     (iVar2 = IsEnableFaceRotation(this), iVar2 == 0)) goto code_r0x105d335c;
  this_00 = *(UObject **)(this + 0x63c);
  if (this_00 == (UObject *)0x0) {
    this_00 = (UObject *)(**(code **)(**(int **)(this + 0x14d8) + 0x35c))();
  }
  if ((((*(byte *)(*(int *)(this + 0x14d8) + 0x41c) & 1) == 0) && (this_00 != (UObject *)0x0)) &&
     ((iVar2 = UObject::IsA(this_00,&PrivateStaticClass), iVar2 != 0 && (this_00 != (UObject *)this)
      ))) {
    fStack_58 = *(float *)(this_00 + 0x1bc) - *(float *)(this + 0x1bc);
    puStack_54 = (undefined1 *)(*(float *)(this_00 + 0x1c0) - *(float *)(this + 0x1c0));
    fStack_50 = *(float *)(this_00 + 0x1c4) - *(float *)(this + 0x1c4);
    fStack_18 = fStack_58;
    puStack_c = puStack_54;
    fStack_8 = fStack_50;
    fVar4 = FVector::Size((FVector *)&fStack_58);
    if (2048.0 <= fVar4) goto LAB_105d332e;
    fStack_24 = *(float *)(this + 0x1bc);
    fStack_20 = *(float *)(this + 0x1c0);
    fStack_1c = *(float *)(this + 0x1c4);
    fStack_30 = *(float *)(this_00 + 0x1bc);
    fStack_2c = *(float *)(this_00 + 0x1c0);
    fStack_28 = *(float *)(this_00 + 0x1c4);
    if ((*(UObject **)(this + 0x134) != (UObject *)0x0) &&
       (iVar2 = UObject::IsA(*(UObject **)(this + 0x134),&USkeletalMeshInstance::PrivateStaticClass)
       , iVar2 != 0)) {
      this_01 = (USubSkeletalMeshInstance *)thunk_FUN_104b4240();
      puStack_c = &stack0xffffff50;
      FName::FName((FName *)&stack0xffffff50,(ushort *)L"e_bone",1);
      USkeletalMeshInstance::GetAliasesTagBoneName((USkeletalMeshInstance *)this_01,&fStack_8);
      iVar2 = USubSkeletalMeshInstance::MatchRefBone(this_01,fStack_8);
      if (-1 < iVar2) {
        USubSkeletalMeshInstance::GetBoneCoords(this_01,(ulong)&fStack_a0);
        fStack_24 = fStack_a0;
        fStack_20 = fStack_9c;
        fStack_1c = fStack_98;
      }
    }
    if ((*(int *)(this_00 + 0x134) != 0) &&
       (iVar2 = UObject::IsA(*(UObject **)(this_00 + 0x134),
                             &USkeletalMeshInstance::PrivateStaticClass), iVar2 != 0)) {
      pUVar3 = (USkeletalMeshInstance *)thunk_FUN_104b4240();
      puStack_c = &stack0xffffff50;
      FName::FName((FName *)&stack0xffffff50,(ushort *)L"e_bone",1);
      USkeletalMeshInstance::GetAliasesTagBoneName(pUVar3,&fStack_8);
      iVar2 = USubSkeletalMeshInstance::MatchRefBone((USubSkeletalMeshInstance *)pUVar3,fStack_8);
      if ((-1 < iVar2) && ((*(int *)(pUVar3 + 200) != 0 && (iVar2 < *(int *)(pUVar3 + 200))))) {
        FCoords::operator*((FCoords *)(iVar2 * 0x30 + *(int *)(pUVar3 + 0xc4)),(FCoords *)&fStack_a0
                          );
        fStack_30 = fStack_a0;
        fStack_2c = fStack_9c;
        fStack_28 = fStack_98;
      }
    }
    fStack_4c = fStack_30 - fStack_24;
    puStack_48 = (undefined1 *)(fStack_2c - fStack_20);
    fStack_44 = fStack_28 - fStack_1c;
    fStack_18 = fStack_44;
    puStack_c = puStack_48;
    fStack_8 = fStack_4c;
    FVector::Rotation((FVector *)&fStack_4c);
    for (iStack_14 = iStack_3c - *(int *)(this + 0x1cc); iStack_14 < -0x7fff;
        iStack_14 = iStack_14 + 0x10000) {
    }
    for (; 0x8000 < iStack_14; iStack_14 = iStack_14 + -0x10000) {
    }
    if (iStack_14 < -0x4000) {
      iStack_14 = -0x4000;
    }
    else if (0x4000 < iStack_14) {
      iStack_14 = 0x4000;
    }
    iStack_3c = *(int *)(this + 0x1cc) + iStack_14;
    for (iStack_10 = iStack_40 - *(int *)(this + 0x1780); iStack_10 < -0x7fff;
        iStack_10 = iStack_10 + 0x10000) {
    }
    for (; 0x8000 < iStack_10; iStack_10 = iStack_10 + -0x10000) {
    }
    if (iStack_10 < -5000) {
      iStack_10 = -5000;
    }
    else if (5000 < iStack_10) {
      iStack_10 = 5000;
    }
    iVar2 = iStack_10;
    iVar5 = iStack_3c;
    iStack_40 = iStack_10;
    if (0x7ffd < iStack_14 + 0x3ffeU) {
      uStack_38 = *(undefined4 *)(this + 0x1d0);
      iVar2 = *(int *)(this + 0x1c8);
      iVar5 = *(int *)(this + 0x1cc);
    }
  }
  else {
LAB_105d332e:
    uStack_38 = *(undefined4 *)(this + 0x1d0);
    iVar2 = *(int *)(this + 0x1c8);
    iVar5 = *(int *)(this + 0x1cc);
  }
  FaceRotation(this,iVar2,iVar5,uStack_38);
code_r0x105d335c:
  uStack_64 = 0xffffffff;
  if ((*(int *)GL2KeepMinFrameRate_exref != 0) && (*(int *)(this + 0x104) != 0)) {
    pUVar3 = (USkeletalMeshInstance *)(**(code **)(**(int **)(this + 0x104) + 0x98))(this);
    USkeletalMeshInstance::ClearBoneDirection(pUVar3);
    pUVar3 = (USkeletalMeshInstance *)
             (**(code **)(**(int **)(this + 0x104) + 0x98))(this,*(undefined4 *)(this + 0x450));
    USkeletalMeshInstance::ClearBoneDirection(pUVar3);
  }
  ExceptionList = pvStack_6c;
  return;
}


// ==== 10314f51 UCanvas::execDrawTileScaled

/* public: void __thiscall UCanvas::execDrawTileScaled(struct FFrame &,void * const) */

void __thiscall UCanvas::execDrawTileScaled(UCanvas *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  FFrame *pFVar2;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined1 *puStack_14;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x14f51  9180  ?execDrawTileScaled@UCanvas@@QAEXAAUFFrame@@QAX@Z */
  pFVar2 = param_1;
  puStack_c = &LAB_1081b5a0;
  pvStack_10 = ExceptionList;
  puStack_14 = &stack0xffffffd0;
  uStack_8 = 0;
  uStack_1c = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  ExceptionList = &pvStack_10;
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&uStack_1c);
  uStack_18 = 0;
  bVar1 = **(byte **)(pFVar2 + 0xc);
  *(byte **)(pFVar2 + 0xc) = *(byte **)(pFVar2 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(pFVar2,&uStack_18);
  param_1 = (FFrame *)0x0;
  bVar1 = **(byte **)(pFVar2 + 0xc);
  *(byte **)(pFVar2 + 0xc) = *(byte **)(pFVar2 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(pFVar2,&param_1);
  *(int *)(pFVar2 + 0xc) = *(int *)(pFVar2 + 0xc) + 1;
  if (**(char **)(pFVar2 + 0xc) == 'B') {
    *(char **)(pFVar2 + 0xc) = *(char **)(pFVar2 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(pFVar2,0);
  }
  (**(code **)(*(int *)this + 0x10c))
            (uStack_1c,*(undefined4 *)(this + 0x50),*(undefined4 *)(this + 0x54),uStack_18,param_1);
  ExceptionList = pvStack_10;
  return;
}


// ==== 10314f56 AActor::GetModifiedTextureMaterial

/* public: virtual class UModifier * __thiscall AActor::GetModifiedTextureMaterial(void) */

UModifier * __thiscall AActor::GetModifiedTextureMaterial(AActor *this)

{
  int iVar1;
  UPackage *pUVar2;
  AActor *pAStack_4;
  
                    /* 0x14f56  4782  ?GetModifiedTextureMaterial@AActor@@UAEPAVUModifier@@XZ */
  if (DAT_10c41ce8 == (UModifier *)0x0) {
    pAStack_4 = this;
    FName::FName((FName *)&pAStack_4,0);
    iVar1 = UStruct::IsChildOf((UStruct *)&UL2ColorModifier::PrivateStaticClass,
                               (UStruct *)&UL2ColorModifier::PrivateStaticClass);
    if (iVar1 == 0) {
      appFailAssert("Class->IsChildOf(T::StaticClass())",
                    "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnObjBas.h",0x4d9);
    }
    pUVar2 = UObject::GetTransientPackage();
    DAT_10c41ce8 = (UModifier *)
                   UObject::StaticConstructObject
                             (&UL2ColorModifier::PrivateStaticClass,pUVar2,pAStack_4,0,0,
                              *(undefined4 *)GError_exref,0);
    thunk_FUN_10530420(&DAT_10c41ce8);
  }
  *(uint *)(DAT_10c41ce8 + 0x580) =
       *(uint *)(DAT_10c41ce8 + 0x580) ^
       (*(uint *)(this + 0x3a0) >> 1 ^ *(uint *)(DAT_10c41ce8 + 0x580)) & 1;
  *(undefined4 *)(DAT_10c41ce8 + 0x57c) = *(undefined4 *)(this + 0x3a4);
  *(uint *)(DAT_10c41ce8 + 0x580) =
       *(uint *)(DAT_10c41ce8 + 0x580) ^
       (*(uint *)(this + 0x3a0) >> 1 ^ *(uint *)(DAT_10c41ce8 + 0x580)) & 2;
  DAT_10c41ce8[0x584] = *(UModifier *)(this + 0x3a8);
  DAT_10c41ce8[0x585] = *(UModifier *)(this + 0x3ac);
  return DAT_10c41ce8;
}


// ==== 10314f5b UGameEngine::OnColosseumFenceTest

/* public: void __thiscall UGameEngine::OnColosseumFenceTest(class FVector,int,int,enum
   ColosseumFenceState) */

void __thiscall
UGameEngine::OnColosseumFenceTest
          (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
          undefined4 param_5,undefined4 param_6,int param_7)

{
  ColosseumFence *pCVar1;
  void *pvStack_10;
  undefined1 *puStack_c;
  int iStack_8;
  
                    /* 0x14f5b  6333
                       ?OnColosseumFenceTest@UGameEngine@@QAEXVFVector@@HHW4ColosseumFenceState@@@Z
                        */
  puStack_c = &LAB_1081649b;
  pvStack_10 = ExceptionList;
  iStack_8 = 0;
  pCVar1 = DAT_10bdc604;
  ExceptionList = &pvStack_10;
  if (DAT_10bdc604 == (ColosseumFence *)0x0) {
    ExceptionList = &pvStack_10;
    pCVar1 = (ColosseumFence *)thunk_FUN_1032ffc0(0x38);
    iStack_8._0_1_ = 1;
    if (pCVar1 == (ColosseumFence *)0x0) {
      pCVar1 = (ColosseumFence *)0x0;
    }
    else {
      pCVar1 = (ColosseumFence *)ColosseumFence::ColosseumFence(pCVar1);
    }
    iStack_8 = (uint)iStack_8._1_3_ << 8;
    DAT_10bdc604 = pCVar1;
    *(undefined4 *)pCVar1 = 0x1e240;
    *(undefined4 *)(pCVar1 + 8) = param_2;
    *(undefined4 *)(pCVar1 + 0xc) = param_3;
    *(undefined4 *)(pCVar1 + 0x10) = param_4;
    *(undefined4 *)(pCVar1 + 0x14) = param_5;
    *(undefined4 *)(pCVar1 + 0x18) = param_6;
  }
  if (param_7 == 0) {
    ColosseumFence::DestroyColumn(pCVar1);
  }
  else {
    if (param_7 != 1) {
      if (param_7 == 2) {
        ColosseumFence::MakeColumn(pCVar1);
        ColosseumFence::MakeWall(DAT_10bdc604);
        pCVar1 = DAT_10bdc604;
      }
      goto LAB_1049f405;
    }
    ColosseumFence::MakeColumn(pCVar1);
  }
  ColosseumFence::DestroyWall(DAT_10bdc604);
  pCVar1 = DAT_10bdc604;
LAB_1049f405:
  *(int *)(pCVar1 + 4) = param_7;
  ExceptionList = pvStack_10;
  return;
}


// ==== 10314f60 UInput::Exec (decompilacao falhou: falhou:Exception while decompiling 10314f60: process: timeout )

// ==== 10314f65 CGeoCellInfo::CGeoCellInfo

/* public: __thiscall CGeoCellInfo::CGeoCellInfo(void) */

void __thiscall CGeoCellInfo::CGeoCellInfo(CGeoCellInfo *this)

{
                    /* 0x14f65  271  ??0CGeoCellInfo@@QAE@XZ */
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined4 *)(this + 0x14) = 0;
  *(undefined ***)this = vftable;
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x3c) = 0;
  *(undefined4 *)(this + 0x28) = 0;
  *(undefined4 *)(this + 0x24) = 0;
  *(undefined4 *)(this + 0x20) = 0;
  *(undefined4 *)(this + 0x1c) = 0;
  *(undefined4 *)(this + 0x38) = 0;
  *(undefined4 *)(this + 0x34) = 0;
  *(undefined4 *)(this + 0x30) = 0;
  *(undefined4 *)(this + 0x2c) = 0;
  *(undefined4 *)(this + 0x44) = 0;
  return;
}


// ==== 10314f6a UGameEngine::OnDeleteItem

/* public: virtual int __thiscall UGameEngine::OnDeleteItem(struct Item *) */

int __thiscall UGameEngine::OnDeleteItem(UGameEngine *this,Item *param_1)

{
  Item *pIVar1;
  int iVar2;
  int iVar3;
  
                    /* 0x14f6a  6341  ?OnDeleteItem@UGameEngine@@UAEHPAUItem@@@Z */
  if ((param_1 != (Item *)0x0) && (pIVar1 = param_1 + 0x10, pIVar1 != (Item *)0x0)) {
    iVar3 = **(int **)(*(int *)(this + 0x54) + 0x38);
    iVar2 = (**(code **)(**(int **)(iVar3 + 0x3c) + 0x35c))();
    if ((iVar2 != 0) &&
       ((iVar2 = (**(code **)(**(int **)(iVar3 + 0x3c) + 0x35c))(), iVar2 == *(int *)pIVar1 ||
        (iVar3 = (**(code **)(**(int **)(iVar3 + 0x3c) + 0x35c))(),
        iVar3 == *(int *)(param_1 + 0x14))))) {
      *(undefined4 *)(this + 100) = 0;
    }
    if ((*(int *)(this + 0x244) == *(int *)pIVar1) ||
       (*(int *)(this + 0x244) == *(int *)(param_1 + 0x14))) {
      *(undefined4 *)(this + 0x244) = 0;
    }
    if (*(int *)pIVar1 != 0) {
      (**(code **)(**(int **)(this + 0x19c) + 0xac))(*(int *)pIVar1,0);
    }
    if (*(int *)(param_1 + 0x14) != 0) {
      (**(code **)(**(int **)(this + 0x19c) + 0xac))(*(int *)(param_1 + 0x14),0);
    }
    *(int *)pIVar1 = 0;
    *(undefined4 *)(param_1 + 0x14) = 0;
  }
  return 1;
}


// ==== 10314f6f AInfo::operator_new

/* public: static void * __cdecl AInfo::operator new(unsigned int,class UObject *,class
   FName,unsigned long) */

void * __cdecl
AInfo::operator_new(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  UObject *pUVar1;
  
                    /* 0x14f6f  1568  ??2AInfo@@SAPAXIPAVUObject@@VFName@@K@Z */
  pUVar1 = UObject::StaticAllocateObject
                     (&PrivateStaticClass,param_2,param_3,param_4,0,*(undefined4 *)GError_exref,0,0)
  ;
  return pUVar1;
}


// ==== 10314f74 User::GetClassNamePointer

/* public: unsigned short * __thiscall User::GetClassNamePointer(void) */

ushort * __thiscall User::GetClassNamePointer(User *this)

{
  int iVar1;
  ushort *puVar2;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined1 *puStack_14;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x14f74  4458  ?GetClassNamePointer@User@@QAEPAGXZ */
  puStack_c = &LAB_10815bd0;
  pvStack_10 = ExceptionList;
  puStack_14 = &stack0xffffff9c;
  uStack_8 = 0;
  ExceptionList = &pvStack_10;
  FName::FName((FName *)&uStack_18,(ushort *)L"None",1);
  if (*(int *)(this + 8) == 0) {
    iVar1 = GetMeshType(this);
    switch(iVar1) {
    case 0:
      FName::FName((FName *)&uStack_1c,(ushort *)L"LineageWarrior.MFighter",1);
      uStack_18 = uStack_1c;
      puVar2 = FName::operator*((FName *)&uStack_18);
      ExceptionList = pvStack_10;
      return puVar2;
    case 1:
      FName::FName((FName *)&uStack_20,(ushort *)L"LineageWarrior.FFighter",1);
      uStack_18 = uStack_20;
      puVar2 = FName::operator*((FName *)&uStack_18);
      ExceptionList = pvStack_10;
      return puVar2;
    case 2:
      FName::FName((FName *)&uStack_24,(ushort *)L"LineageWarrior.MDarkElf",1);
      uStack_18 = uStack_24;
      puVar2 = FName::operator*((FName *)&uStack_18);
      ExceptionList = pvStack_10;
      return puVar2;
    case 3:
      FName::FName((FName *)&uStack_28,(ushort *)L"LineageWarrior.FDarkElf",1);
      uStack_18 = uStack_28;
      puVar2 = FName::operator*((FName *)&uStack_18);
      ExceptionList = pvStack_10;
      return puVar2;
    case 4:
      FName::FName((FName *)&uStack_2c,(ushort *)L"LineageWarrior.MDwarf",1);
      uStack_18 = uStack_2c;
      puVar2 = FName::operator*((FName *)&uStack_18);
      ExceptionList = pvStack_10;
      return puVar2;
    case 5:
      FName::FName((FName *)&uStack_30,(ushort *)L"LineageWarrior.FDwarf",1);
      uStack_18 = uStack_30;
      puVar2 = FName::operator*((FName *)&uStack_18);
      ExceptionList = pvStack_10;
      return puVar2;
    case 6:
      FName::FName((FName *)&uStack_34,(ushort *)L"LineageWarrior.MElf",1);
      uStack_18 = uStack_34;
      puVar2 = FName::operator*((FName *)&uStack_18);
      ExceptionList = pvStack_10;
      return puVar2;
    case 7:
      FName::FName((FName *)&uStack_38,(ushort *)L"LineageWarrior.FElf",1);
      uStack_18 = uStack_38;
      puVar2 = FName::operator*((FName *)&uStack_18);
      ExceptionList = pvStack_10;
      return puVar2;
    case 8:
      FName::FName((FName *)&uStack_3c,(ushort *)L"LineageWarrior.MMagic",1);
      uStack_18 = uStack_3c;
      puVar2 = FName::operator*((FName *)&uStack_18);
      ExceptionList = pvStack_10;
      return puVar2;
    case 9:
      FName::FName((FName *)&uStack_40,(ushort *)L"LineageWarrior.FMagic",1);
      uStack_18 = uStack_40;
      puVar2 = FName::operator*((FName *)&uStack_18);
      ExceptionList = pvStack_10;
      return puVar2;
    case 10:
      FName::FName((FName *)&uStack_44,(ushort *)L"LineageWarrior.MOrc",1);
      uStack_18 = uStack_44;
      puVar2 = FName::operator*((FName *)&uStack_18);
      ExceptionList = pvStack_10;
      return puVar2;
    case 0xb:
      FName::FName((FName *)&uStack_48,(ushort *)L"LineageWarrior.FOrc",1);
      uStack_18 = uStack_48;
      puVar2 = FName::operator*((FName *)&uStack_18);
      ExceptionList = pvStack_10;
      return puVar2;
    case 0xc:
      FName::FName((FName *)&uStack_4c,(ushort *)L"LineageWarrior.MShaman",1);
      uStack_18 = uStack_4c;
      puVar2 = FName::operator*((FName *)&uStack_18);
      ExceptionList = pvStack_10;
      return puVar2;
    case 0xd:
      FName::FName((FName *)&uStack_50,(ushort *)L"LineageWarrior.FShaman",1);
      uStack_18 = uStack_50;
    }
  }
  else {
    iVar1 = thunk_FUN_10422f80(this + 0x14);
    if (iVar1 != 0) {
      puVar2 = L2FName::operator*((L2FName *)(iVar1 + 0x20));
      ExceptionList = pvStack_10;
      return puVar2;
    }
  }
  puVar2 = FName::operator*((FName *)&uStack_18);
  ExceptionList = pvStack_10;
  return puVar2;
}


// ==== 10314f79 thunk_FUN_10383d20 thunk -> 10383d20

// ==== 10314f7e thunk_FUN_10493f70 thunk -> 10493f70

// ==== 10314f88 AAutoLadder::IsIdentifiedAs

/* public: virtual int __thiscall AAutoLadder::IsIdentifiedAs(class FName) */

int __thiscall AAutoLadder::IsIdentifiedAs(AAutoLadder *this)

{
  FName *pFVar1;
  int iVar2;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x14f88  5873  ?IsIdentifiedAs@AAutoLadder@@UAEHVFName@@@Z */
  puStack_c = &LAB_10822320;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  ExceptionList = &pvStack_10;
  pFVar1 = (FName *)UObject::GetFName((UObject *)this);
  iVar2 = FName::operator==((FName *)&stack0x00000004,pFVar1);
  if (iVar2 != 0) {
    ExceptionList = pvStack_10;
    return 1;
  }
  if (*(UObject **)(this + 0x41c) != (UObject *)0x0) {
    pFVar1 = (FName *)UObject::GetFName(*(UObject **)(this + 0x41c));
    iVar2 = FName::operator==((FName *)&stack0x00000004,pFVar1);
    if (iVar2 != 0) {
      ExceptionList = pvStack_10;
      return 1;
    }
  }
  ExceptionList = pvStack_10;
  return 0;
}


// ==== 10314f8d UScriptedTexture::PostEditChange

/* public: virtual void __thiscall UScriptedTexture::PostEditChange(void) */

void __thiscall UScriptedTexture::PostEditChange(UScriptedTexture *this)

{
                    /* 0x14f8d  6776  ?PostEditChange@UScriptedTexture@@UAEXXZ */
  UMaterial::PostEditChange((UMaterial *)this);
  *(int *)(this + 0x5a0) = *(int *)(this + 0x5a0) + 1;
  *(undefined4 *)(this + 0x580) = *(undefined4 *)(this + 0x588);
  *(undefined4 *)(this + 0x584) = *(undefined4 *)(this + 0x58c);
  return;
}


// ==== 10314f92 AActor::eventGetEffTargetLocation

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: void __thiscall AActor::eventGetEffTargetLocation(class FVector &) */

void __thiscall AActor::eventGetEffTargetLocation(AActor *this,FVector *param_1)

{
  int iVar1;
  UFunction *pUVar2;
  undefined4 unaff_EDI;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
                    /* 0x14f92  8993  ?eventGetEffTargetLocation@AActor@@QAEXAAVFVector@@@Z */
  uStack_c = *(undefined4 *)param_1;
  uStack_4 = *(undefined4 *)(param_1 + 8);
  uStack_8 = *(undefined4 *)(param_1 + 4);
  iVar1 = *(int *)this;
  pUVar2 = UObject::FindFunctionChecked((UObject *)this,_ENGINE_GetEffTargetLocation,0);
  (**(code **)(iVar1 + 0x10))(pUVar2);
  *(undefined4 **)param_1 = &uStack_c;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = unaff_EDI;
  return;
}


// ==== 10314f97 thunk_FUN_10385f50 thunk -> 10385f50

// ==== 10314f9c thunk_FUN_10331e70 thunk -> 10331e70

// ==== 10314fa1 FSkinVertexStream::GetRawStreamData

/* public: virtual void __thiscall FSkinVertexStream::GetRawStreamData(void * *,int) */

void __thiscall
FSkinVertexStream::GetRawStreamData(FSkinVertexStream *this,void **param_1,int param_2)

{
                    /* 0x14fa1  4952  ?GetRawStreamData@FSkinVertexStream@@UAEXPAPAXH@Z */
  if (*(int *)(this + 0x1c) != 0) {
    *param_1 = (void *)0x0;
    return;
  }
  *param_1 = (void *)(param_2 * 0x20 + *(int *)(this + 0x20));
  return;
}


// ==== 10314fa6 UActionWarp::UActionWarp

/* protected: __thiscall UActionWarp::UActionWarp(void) */

UActionWarp * __thiscall UActionWarp::UActionWarp(UActionWarp *this)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x14fa6  641  ??0UActionWarp@@IAE@XZ */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_10809378;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  UMatAction::UMatAction((UMatAction *)this);
  *(undefined ***)this = vftable;
  ExceptionList = pvStack_c;
  return this;
}


// ==== 10314fb0 thunk_FUN_10393a30 thunk -> 10393a30

// ==== 10314fba thunk_FUN_103f6370 thunk -> 103f6370

// ==== 10314fc4 thunk_FUN_103254a0 thunk -> 103254a0

// ==== 10314fc9 AController::execLineOfSightTo

/* public: void __thiscall AController::execLineOfSightTo(struct FFrame &,void * const) */

void __thiscall AController::execLineOfSightTo(AController *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  ulong uVar2;
  AActor *unaff_EDI;
  ulong *unaff_retaddr;
  undefined4 uStack_4;
  
                    /* 0x14fc9  9300  ?execLineOfSightTo@AController@@QAEXAAUFFrame@@QAX@Z */
  uStack_4 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&uStack_4);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  uVar2 = LineOfSightTo(this,unaff_EDI,0);
  *unaff_retaddr = uVar2;
  return;
}


// ==== 10314fce UL2ConsoleWnd::ResetSelectCharacterInfo

/* public: virtual void __thiscall UL2ConsoleWnd::ResetSelectCharacterInfo(void) */

void __thiscall UL2ConsoleWnd::ResetSelectCharacterInfo(UL2ConsoleWnd *this)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  UL2ConsoleWnd *pUVar4;
  
                    /* 0x14fce  7633  ?ResetSelectCharacterInfo@UL2ConsoleWnd@@UAEXXZ */
  piVar1 = *(int **)(*(int *)(this + 0x50) + 0x19c);
  if (piVar1 == (int *)0x0) {
    appFailAssert("Level",".\\L2ConsoleWnd.cpp",0x1e5);
  }
  pUVar4 = this + 0x39c0;
  iVar3 = 8;
  do {
    if (*(int *)pUVar4 != 0) {
      iVar2 = *(int *)(*(int *)pUVar4 + 0x14d8);
      (**(code **)(*piVar1 + 0xac))(*(int *)pUVar4,0);
      if (iVar2 != 0) {
        (**(code **)(*piVar1 + 0xac))(iVar2,0);
      }
    }
    _memset(pUVar4 + -0x204,0,0x314);
    pUVar4 = pUVar4 + 0x314;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  *(undefined4 *)(this + 0x48) = 0xffffffff;
  return;
}


// ==== 10314fd3 thunk_FUN_105484b0 thunk -> 105484b0

// ==== 10314fd8 DispatchSocketWindowMsg

/* int __cdecl DispatchSocketWindowMsg(struct HWND__ *,unsigned int,unsigned int,long) */

int __cdecl DispatchSocketWindowMsg(HWND__ *param_1,uint param_2,uint param_3,long param_4)

{
  int *piVar1;
  
                    /* 0x14fd8  3836  ?DispatchSocketWindowMsg@@YAHPAUHWND__@@IIJ@Z */
  if (param_2 < 0x508) {
    if (param_2 != 0x507) {
      if (param_2 == 1) {
        thunk_FUN_1043cdd0(param_1);
        return 0;
      }
      return 0;
    }
    if (DAT_10b1f538 != 0) {
      if ((*(int *)(DAT_10b1f538 + 0x50) == 0) || (*(int *)(DAT_10b1f538 + 0x50) == 1)) {
        if (*(int *)(DAT_10b1f538 + 0x4c) == 0) {
          return 0;
        }
        piVar1 = *(int **)(DAT_10b1f538 + 0x4c);
      }
      else {
        if (*(int *)(DAT_10b1f538 + 0x48) == 0) {
          return 0;
        }
        piVar1 = *(int **)(DAT_10b1f538 + 0x48);
      }
      if (piVar1[0xe] != 0) {
        (**(code **)(*piVar1 + 0x6c))(param_3,param_4);
        return 0;
      }
    }
  }
  else if ((param_2 == 0x508) && (DAT_10b1f538 != 0)) {
    if ((*(int *)(DAT_10b1f538 + 0x50) == 0) || (*(int *)(DAT_10b1f538 + 0x50) == 1)) {
      if (*(int *)(DAT_10b1f538 + 0x4c) == 0) {
        return 0;
      }
      piVar1 = *(int **)(DAT_10b1f538 + 0x4c);
    }
    else {
      if (*(int *)(DAT_10b1f538 + 0x48) == 0) {
        return 0;
      }
      piVar1 = *(int **)(DAT_10b1f538 + 0x48);
    }
    if (piVar1[0xe] != 0) {
      (**(code **)(*piVar1 + 0x70))(param_3,param_4);
    }
  }
  return 0;
}


// ==== 10314fdd NCCloakSimul::NCCloakSimul

/* public: __thiscall NCCloakSimul::NCCloakSimul(void) */

NCCloakSimul * __thiscall NCCloakSimul::NCCloakSimul(NCCloakSimul *this)

{
  int iVar1;
  NCCloakSimul *this_00;
  
                    /* 0x14fdd  632  ??0NCCloakSimul@@QAE@XZ */
  *(undefined ***)this = vftable;
  FCoords::FCoords((FCoords *)(this + 0xac));
  iVar1 = 0x1f;
  this_00 = this + 0xdc;
  do {
    FCoords::FCoords((FCoords *)this_00);
    this_00 = this_00 + 0x30;
    iVar1 = iVar1 + -1;
  } while (-1 < iVar1);
  FRotator::FRotator((FRotator *)(this + 0x75c));
  FCoords::FCoords((FCoords *)(this + 0x7bc));
  FCoords::FCoords((FCoords *)(this + 0x7ec));
  FCoords::FCoords((FCoords *)(this + 0x81c));
  FCoords::FCoords((FCoords *)(this + 0x84c));
  FCoords::FCoords((FCoords *)(this + 0x87c));
  FCoords::FCoords((FCoords *)(this + 0x8ac));
  *(undefined4 *)(this + 0x6e8) = 0;
  *(undefined4 *)(this + 0x6ec) = 0;
  *(undefined4 *)(this + 0x774) = 0;
  *(undefined4 *)(this + 0x778) = 0;
  *(undefined4 *)(this + 0x6f0) = 0xbe4ccccd;
  *(undefined4 *)(this + 0x77c) = 0;
  *(undefined4 *)(this + 0x780) = 0;
  *(undefined4 *)(this + 0x700) = 0x3cf5c28f;
  *(undefined4 *)(this + 0x784) = 0;
  *(undefined4 *)(this + 0x794) = 0;
  *(undefined4 *)(this + 0x704) = 0x3e4ccccd;
  *(undefined4 *)(this + 0x788) = 0;
  *(undefined4 *)(this + 0x78c) = 0;
  *(undefined4 *)(this + 0x70c) = 0x40800000;
  *(undefined4 *)(this + 0xa4) = 0;
  *(undefined4 *)(this + 0x98) = 0;
  *(undefined4 *)(this + 0x710) = 0x3f19999a;
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0x718) = 0x3f19999a;
  *(undefined4 *)(this + 0x790) = 0;
  *(undefined4 *)(this + 0x798) = 0;
  *(undefined4 *)(this + 0x79c) = 0;
  *(undefined4 *)(this + 0x714) = 0x40800000;
  *(undefined4 *)(this + 0x770) = 0;
  *(undefined4 *)(this + 0xa8) = 0;
  *(undefined4 *)(this + 0x71c) = 0x4019999a;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 0x6e0) = 0;
  *(undefined4 *)(this + 0x720) = 0x3f4ccccd;
  *(undefined4 *)(this + 0x6e4) = 0;
  *(undefined4 *)(this + 0xc) = 1;
  *(undefined4 *)(this + 0x7bc) = 0;
  *(undefined4 *)(this + 0x7c0) = 0;
  *(undefined4 *)(this + 0x10) = 1;
  *(undefined4 *)(this + 0x7c4) = 0;
  *(undefined4 *)(this + 0x768) = 1;
  *(undefined4 *)(this + 0x728) = 0;
  *(undefined4 *)(this + 0x76c) = 1;
  *(undefined4 *)(this + 0x8dc) = 1;
  *(undefined4 *)(this + 0x708) = 0x3dcccccd;
  *(undefined4 *)(this + 0x6dc) = 0x3f800000;
  return this;
}


// ==== 10314fe2 thunk_FUN_1033b960 thunk -> 1033b960

// ==== 10314fe7 UCanvas::ClippedPrint

/* public: virtual void __thiscall UCanvas::ClippedPrint(class UFont *,float,float,int,unsigned
   short const *) */

void __thiscall
UCanvas::ClippedPrint
          (UCanvas *this,UFont *param_1,float param_2,float param_3,int param_4,ushort *param_5)

{
  undefined4 uVar1;
  
                    /* 0x14fe7  3662  ?ClippedPrint@UCanvas@@UAEXPAVUFont@@MMHPBG@Z */
  uVar1 = FUN_107a6660((float)(byte)this[0x66] / 255.0,(float)(byte)this[0x65] / 255.0,
                       (float)(byte)this[100] / 255.0,(float)(byte)this[0x67] / 255.0,1,0);
  uVar1 = FUN_107a6660(uVar1);
  FUN_10555100(this,param_1,param_2,param_3,uVar1);
  return;
}


// ==== 10314ff1 thunk_FUN_106f19d0 thunk -> 106f19d0

// ==== 10314ffb UFluidSurfacePrimitive::~UFluidSurfacePrimitive

/* public: virtual __thiscall UFluidSurfacePrimitive::~UFluidSurfacePrimitive(void) */

void __thiscall UFluidSurfacePrimitive::~UFluidSurfacePrimitive(UFluidSurfacePrimitive *this)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x14ffb  1361  ??1UFluidSurfacePrimitive@@UAE@XZ */
  puStack_8 = &LAB_107f7508;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *(undefined ***)this = vftable;
  uStack_4 = 0;
  UObject::ConditionalDestroy((UObject *)this);
  uStack_4 = 0xffffffff;
  UPrimitive::~UPrimitive((UPrimitive *)this);
  ExceptionList = pvStack_c;
  return;
}


// ==== 10315000 thunk_FUN_10481870 thunk -> 10481870

// ==== 1031500f USubActionCameraShake::operator_new

/* public: static void * __cdecl USubActionCameraShake::operator new(unsigned int,enum EInternal *)
    */

void * __cdecl USubActionCameraShake::operator_new(uint param_1,EInternal *param_2)

{
                    /* 0x1500f  2041  ??2USubActionCameraShake@@SAPAXIPAW4EInternal@@@Z */
  return param_2;
}


// ==== 10315014 UNetworkHandler::ReviveReply

/* public: virtual void __thiscall UNetworkHandler::ReviveReply(class L2ParamStack &) */

void __thiscall UNetworkHandler::ReviveReply(UNetworkHandler *this,L2ParamStack *param_1)

{
  void *pvVar1;
  void *pvVar2;
  void *pvVar3;
  FOutputDevice *this_00;
  
                    /* 0x15014  7651  ?ReviveReply@UNetworkHandler@@UAEXAAVL2ParamStack@@@Z */
  pvVar1 = L2ParamStack::Top(param_1);
  pvVar2 = L2ParamStack::Top(param_1);
  pvVar3 = L2ParamStack::Top(param_1);
  (**(code **)(**(int **)(this + 0x48) + 0x68))
            (*(int **)(this + 0x48),&DAT_1087f8f8,0x7a,pvVar1,pvVar2,pvVar3);
  FOutputDevice::Logf(this_00,*(ushort **)GNetworkLog_exref);
  return;
}


// ==== 10315019 UModel::UModel

/* public: __thiscall UModel::UModel(class UModel const &) */

UModel * __thiscall UModel::UModel(UModel *this,UModel *param_1)

{
  int iVar1;
  UModel *pUVar2;
  UModel *pUVar3;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x15019  836  ??0UModel@@QAE@ABV0@@Z */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_1080d436;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  UPrimitive::UPrimitive((UPrimitive *)this,(UPrimitive *)param_1);
  uStack_4 = 0;
  *(undefined ***)this = vftable;
  *(undefined4 *)(this + 0x60) = *(undefined4 *)(param_1 + 0x60);
  thunk_FUN_103f7bb0(param_1 + 100);
  uStack_4._0_1_ = 1;
  thunk_FUN_103a1890(param_1 + 0x74);
  uStack_4._0_1_ = 2;
  thunk_FUN_103a1900(param_1 + 0x84);
  uStack_4._0_1_ = 3;
  thunk_FUN_103a1900(param_1 + 0x94);
  uStack_4._0_1_ = 4;
  thunk_FUN_103f2420(param_1 + 0xa4);
  uStack_4._0_1_ = 5;
  thunk_FUN_1037a500(param_1 + 0xb4);
  uStack_4._0_1_ = 6;
  thunk_FUN_1032bc20(param_1 + 0xc0);
  uStack_4._0_1_ = 7;
  thunk_FUN_1037af50(param_1 + 0xcc);
  uStack_4._0_1_ = 8;
  thunk_FUN_1037b030(param_1 + 0xd8);
  uStack_4._0_1_ = 9;
  thunk_FUN_103b02d0(param_1 + 0xe4);
  uStack_4._0_1_ = 10;
  thunk_FUN_103b0390(param_1 + 0xf0);
  uStack_4._0_1_ = 0xb;
  *(undefined4 *)(this + 0xfc) = *(undefined4 *)(param_1 + 0xfc);
  thunk_FUN_10392090(param_1 + 0x100);
  uStack_4._0_1_ = 0xc;
  thunk_FUN_103f65f0(param_1 + 0x10c);
  uStack_4 = CONCAT31(uStack_4._1_3_,0xd);
  thunk_FUN_1032bc20(param_1 + 0x118);
  *(undefined4 *)(this + 0x124) = *(undefined4 *)(param_1 + 0x124);
  *(undefined4 *)(this + 0x128) = *(undefined4 *)(param_1 + 0x128);
  *(undefined4 *)(this + 300) = *(undefined4 *)(param_1 + 300);
  *(undefined4 *)(this + 0x130) = *(undefined4 *)(param_1 + 0x130);
  *(undefined4 *)(this + 0x134) = *(undefined4 *)(param_1 + 0x134);
  pUVar2 = param_1 + 0x138;
  pUVar3 = this + 0x138;
  for (iVar1 = 0x180; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)pUVar3 = *(undefined4 *)pUVar2;
    pUVar2 = pUVar2 + 4;
    pUVar3 = pUVar3 + 4;
  }
  ExceptionList = pvStack_c;
  return this;
}


// ==== 1031501e User::GetPcTexName

/* public: class FName __thiscall User::GetPcTexName(int,int) */

int __thiscall User::GetPcTexName(User *this,int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  ushort *puVar6;
  ushort *puVar7;
  undefined *puVar8;
  code *pcVar9;
  code *pcVar10;
  int in_stack_0000000c;
  wchar_t *pwVar11;
  EFindName EVar12;
  wchar_t awStack_37c [280];
  undefined1 auStack_14c [252];
  int iStack_50;
  int iStack_4c;
  int iStack_48;
  User *pUStack_44;
  int iStack_40;
  int iStack_3c;
  FString aFStack_38 [12];
  int iStack_2c;
  int iStack_28;
  int iStack_24;
  int iStack_20;
  int iStack_1c;
  int iStack_18;
  undefined1 *puStack_14;
  void *pvStack_10;
  undefined1 *puStack_c;
  int iStack_8;
  
                    /* 0x1501e  4896  ?GetPcTexName@User@@QAE?AVFName@@HH@Z */
  iStack_8 = 0xffffffff;
  puStack_c = &LAB_10815cfb;
  pvStack_10 = ExceptionList;
  puStack_14 = &stack0xfffffc78;
  ExceptionList = &pvStack_10;
  pUStack_44 = this;
  iStack_2c = GetItemClassID(this,param_2);
  iStack_8 = 0;
  iStack_20 = *(int *)(this + 0x204);
  if (*(int *)(iStack_20 + 0x718) != 0) {
    iStack_20 = *(int *)(iStack_20 + 0x718);
  }
  builtin_wcsncpy(awStack_37c,L"MFighter",9);
  awStack_37c[9] = L'\0';
  awStack_37c[10] = L'\0';
  awStack_37c[0xb] = L'\0';
  awStack_37c[0xc] = L'\0';
  awStack_37c[0xd] = L'\0';
  awStack_37c[0xe] = L'\0';
  awStack_37c[0xf] = L'\0';
  awStack_37c[0x10] = L'\0';
  awStack_37c[0x11] = L'\0';
  awStack_37c[0x12] = L'\0';
  awStack_37c[0x13] = 0;
  awStack_37c[0x14] = L'F';
  awStack_37c[0x15] = L'F';
  awStack_37c[0x16] = L'i';
  awStack_37c[0x17] = L'g';
  awStack_37c[0x18] = L'h';
  awStack_37c[0x19] = L't';
  awStack_37c[0x1a] = L'e';
  awStack_37c[0x1b] = L'r';
  awStack_37c[0x1c] = 0;
  awStack_37c[0x1d] = L'\0';
  awStack_37c[0x1e] = L'\0';
  awStack_37c[0x1f] = L'\0';
  awStack_37c[0x20] = L'\0';
  awStack_37c[0x21] = L'\0';
  awStack_37c[0x22] = L'\0';
  awStack_37c[0x23] = L'\0';
  awStack_37c[0x24] = L'\0';
  awStack_37c[0x25] = L'\0';
  awStack_37c[0x26] = L'\0';
  awStack_37c[0x27] = 0;
  awStack_37c[0x28] = L'M';
  awStack_37c[0x29] = L'D';
  awStack_37c[0x2a] = L'a';
  awStack_37c[0x2b] = L'r';
  awStack_37c[0x2c] = L'k';
  awStack_37c[0x2d] = L'E';
  awStack_37c[0x2e] = L'l';
  awStack_37c[0x2f] = L'f';
  awStack_37c[0x30] = 0;
  awStack_37c[0x31] = L'\0';
  awStack_37c[0x32] = L'\0';
  awStack_37c[0x33] = L'\0';
  awStack_37c[0x34] = L'\0';
  awStack_37c[0x35] = L'\0';
  awStack_37c[0x36] = L'\0';
  awStack_37c[0x37] = L'\0';
  awStack_37c[0x38] = L'\0';
  awStack_37c[0x39] = L'\0';
  awStack_37c[0x3a] = L'\0';
  awStack_37c[0x3b] = 0;
  awStack_37c[0x3c] = L'F';
  awStack_37c[0x3d] = L'D';
  awStack_37c[0x3e] = L'a';
  awStack_37c[0x3f] = L'r';
  awStack_37c[0x40] = L'k';
  awStack_37c[0x41] = L'E';
  awStack_37c[0x42] = L'l';
  awStack_37c[0x43] = L'f';
  awStack_37c[0x44] = 0;
  awStack_37c[0x45] = L'\0';
  awStack_37c[0x46] = L'\0';
  awStack_37c[0x47] = L'\0';
  awStack_37c[0x48] = L'\0';
  awStack_37c[0x49] = L'\0';
  awStack_37c[0x4a] = L'\0';
  awStack_37c[0x4b] = L'\0';
  awStack_37c[0x4c] = L'\0';
  awStack_37c[0x4d] = L'\0';
  awStack_37c[0x4e] = L'\0';
  awStack_37c[0x4f] = 0;
  awStack_37c[0x50] = L'M';
  awStack_37c[0x51] = L'D';
  awStack_37c[0x52] = L'w';
  awStack_37c[0x53] = L'a';
  awStack_37c[0x54] = L'r';
  awStack_37c[0x55] = L'f';
  awStack_37c[0x56] = 0;
  awStack_37c[0x57] = L'\0';
  awStack_37c[0x58] = L'\0';
  awStack_37c[0x59] = L'\0';
  awStack_37c[0x5a] = L'\0';
  awStack_37c[0x5b] = L'\0';
  awStack_37c[0x5c] = L'\0';
  awStack_37c[0x5d] = L'\0';
  awStack_37c[0x5e] = L'\0';
  awStack_37c[0x5f] = L'\0';
  awStack_37c[0x60] = L'\0';
  awStack_37c[0x61] = L'\0';
  awStack_37c[0x62] = L'\0';
  awStack_37c[99] = 0;
  awStack_37c[100] = L'F';
  awStack_37c[0x65] = L'D';
  awStack_37c[0x66] = L'w';
  awStack_37c[0x67] = L'a';
  awStack_37c[0x68] = L'r';
  awStack_37c[0x69] = L'f';
  awStack_37c[0x6a] = 0;
  awStack_37c[0x6b] = L'\0';
  awStack_37c[0x6c] = L'\0';
  awStack_37c[0x6d] = L'\0';
  awStack_37c[0x6e] = L'\0';
  awStack_37c[0x6f] = L'\0';
  awStack_37c[0x70] = L'\0';
  awStack_37c[0x71] = L'\0';
  awStack_37c[0x72] = L'\0';
  awStack_37c[0x73] = L'\0';
  awStack_37c[0x74] = L'\0';
  awStack_37c[0x75] = L'\0';
  awStack_37c[0x76] = L'\0';
  awStack_37c[0x77] = 0;
  awStack_37c[0x78] = L'M';
  awStack_37c[0x79] = L'E';
  awStack_37c[0x7a] = L'l';
  awStack_37c[0x7b] = L'f';
  awStack_37c[0x7c] = 0;
  awStack_37c[0x7d] = L'\0';
  awStack_37c[0x7e] = L'\0';
  awStack_37c[0x7f] = L'\0';
  awStack_37c[0x80] = L'\0';
  awStack_37c[0x81] = L'\0';
  awStack_37c[0x82] = L'\0';
  awStack_37c[0x83] = L'\0';
  awStack_37c[0x84] = L'\0';
  awStack_37c[0x85] = L'\0';
  awStack_37c[0x86] = L'\0';
  awStack_37c[0x87] = L'\0';
  awStack_37c[0x88] = L'\0';
  awStack_37c[0x89] = L'\0';
  awStack_37c[0x8a] = L'\0';
  awStack_37c[0x8b] = 0;
  awStack_37c[0x8c] = L'F';
  awStack_37c[0x8d] = L'E';
  awStack_37c[0x8e] = L'l';
  awStack_37c[0x8f] = L'f';
  awStack_37c[0x90] = 0;
  awStack_37c[0x91] = L'\0';
  awStack_37c[0x92] = L'\0';
  awStack_37c[0x93] = L'\0';
  awStack_37c[0x94] = L'\0';
  awStack_37c[0x95] = L'\0';
  awStack_37c[0x96] = L'\0';
  awStack_37c[0x97] = L'\0';
  awStack_37c[0x98] = L'\0';
  awStack_37c[0x99] = L'\0';
  awStack_37c[0x9a] = L'\0';
  awStack_37c[0x9b] = L'\0';
  awStack_37c[0x9c] = L'\0';
  awStack_37c[0x9d] = L'\0';
  awStack_37c[0x9e] = L'\0';
  awStack_37c[0x9f] = 0;
  awStack_37c[0xa0] = L'M';
  awStack_37c[0xa1] = L'M';
  awStack_37c[0xa2] = L'a';
  awStack_37c[0xa3] = L'g';
  awStack_37c[0xa4] = L'i';
  awStack_37c[0xa5] = L'c';
  awStack_37c[0xa6] = 0;
  awStack_37c[0xa7] = L'\0';
  awStack_37c[0xa8] = L'\0';
  awStack_37c[0xa9] = L'\0';
  awStack_37c[0xaa] = L'\0';
  awStack_37c[0xab] = L'\0';
  awStack_37c[0xac] = L'\0';
  awStack_37c[0xad] = L'\0';
  awStack_37c[0xae] = L'\0';
  awStack_37c[0xaf] = L'\0';
  awStack_37c[0xb0] = L'\0';
  awStack_37c[0xb1] = L'\0';
  awStack_37c[0xb2] = L'\0';
  awStack_37c[0xb3] = 0;
  awStack_37c[0xb4] = L'F';
  awStack_37c[0xb5] = L'M';
  awStack_37c[0xb6] = L'a';
  awStack_37c[0xb7] = L'g';
  awStack_37c[0xb8] = L'i';
  awStack_37c[0xb9] = L'c';
  awStack_37c[0xba] = 0;
  awStack_37c[0xbb] = L'\0';
  awStack_37c[0xbc] = L'\0';
  awStack_37c[0xbd] = L'\0';
  awStack_37c[0xbe] = L'\0';
  awStack_37c[0xbf] = L'\0';
  awStack_37c[0xc0] = L'\0';
  awStack_37c[0xc1] = L'\0';
  awStack_37c[0xc2] = L'\0';
  awStack_37c[0xc3] = L'\0';
  awStack_37c[0xc4] = L'\0';
  awStack_37c[0xc5] = L'\0';
  awStack_37c[0xc6] = L'\0';
  awStack_37c[199] = 0;
  awStack_37c[200] = L'M';
  awStack_37c[0xc9] = L'O';
  awStack_37c[0xca] = L'r';
  awStack_37c[0xcb] = L'c';
  awStack_37c[0xcc] = 0;
  awStack_37c[0xcd] = L'\0';
  awStack_37c[0xce] = L'\0';
  awStack_37c[0xcf] = L'\0';
  awStack_37c[0xd0] = L'\0';
  awStack_37c[0xd1] = L'\0';
  awStack_37c[0xd2] = L'\0';
  awStack_37c[0xd3] = L'\0';
  awStack_37c[0xd4] = L'\0';
  awStack_37c[0xd5] = L'\0';
  awStack_37c[0xd6] = L'\0';
  awStack_37c[0xd7] = L'\0';
  awStack_37c[0xd8] = L'\0';
  awStack_37c[0xd9] = L'\0';
  awStack_37c[0xda] = L'\0';
  awStack_37c[0xdb] = 0;
  awStack_37c[0xdc] = L'F';
  awStack_37c[0xdd] = L'O';
  awStack_37c[0xde] = L'r';
  awStack_37c[0xdf] = L'c';
  awStack_37c[0xe0] = 0;
  awStack_37c[0xe1] = L'\0';
  awStack_37c[0xe2] = L'\0';
  awStack_37c[0xe3] = L'\0';
  awStack_37c[0xe4] = L'\0';
  awStack_37c[0xe5] = L'\0';
  awStack_37c[0xe6] = L'\0';
  awStack_37c[0xe7] = L'\0';
  awStack_37c[0xe8] = L'\0';
  awStack_37c[0xe9] = L'\0';
  awStack_37c[0xea] = L'\0';
  awStack_37c[0xeb] = L'\0';
  awStack_37c[0xec] = L'\0';
  awStack_37c[0xed] = L'\0';
  awStack_37c[0xee] = L'\0';
  awStack_37c[0xef] = 0;
  awStack_37c[0xf0] = L'M';
  awStack_37c[0xf1] = L'S';
  awStack_37c[0xf2] = L'h';
  awStack_37c[0xf3] = L'a';
  awStack_37c[0xf4] = L'm';
  awStack_37c[0xf5] = L'a';
  awStack_37c[0xf6] = L'n';
  awStack_37c[0xf7] = L'\0';
  awStack_37c[0xf8] = L'\0';
  awStack_37c[0xf9] = L'\0';
  awStack_37c[0xfa] = L'\0';
  awStack_37c[0xfb] = L'\0';
  awStack_37c[0xfc] = L'\0';
  awStack_37c[0xfd] = L'\0';
  awStack_37c[0xfe] = L'\0';
  awStack_37c[0xff] = L'\0';
  awStack_37c[0x100] = L'\0';
  awStack_37c[0x101] = L'\0';
  awStack_37c[0x102] = L'\0';
  awStack_37c[0x103] = L'\0';
  awStack_37c[0x104] = L'F';
  awStack_37c[0x105] = L'S';
  awStack_37c[0x106] = L'h';
  awStack_37c[0x107] = L'a';
  awStack_37c[0x108] = L'm';
  awStack_37c[0x109] = L'a';
  awStack_37c[0x10a] = L'n';
  awStack_37c[0x10b] = L'\0';
  awStack_37c[0x10c] = L'\0';
  awStack_37c[0x10d] = L'\0';
  awStack_37c[0x10e] = L'\0';
  awStack_37c[0x10f] = L'\0';
  awStack_37c[0x110] = L'\0';
  awStack_37c[0x111] = L'\0';
  awStack_37c[0x112] = L'\0';
  awStack_37c[0x113] = L'\0';
  awStack_37c[0x114] = L'\0';
  awStack_37c[0x115] = L'\0';
  awStack_37c[0x116] = L'\0';
  awStack_37c[0x117] = L'\0';
  _memset(auStack_14c,0,0xf0);
  FName::FName((FName *)&iStack_18,(ushort *)L"None",1);
  iVar1 = GetMeshType(this);
  piVar2 = (int *)thunk_FUN_10422ee0(&iStack_2c);
  if (((iStack_2c < 1) || (piVar2 == (int *)0x0)) ||
     (iVar3 = (**(code **)(*piVar2 + 4))(iVar1), iVar3 <= in_stack_0000000c)) {
    if (in_stack_0000000c != 0) goto switchD_10486883_caseD_6;
    pcVar9 = appStristr_exref;
    switch(param_2) {
    case 0:
      iStack_18 = *(int *)(&DAT_10b3e21c + iVar1 * 0x274);
      break;
    case 1:
      iStack_18 = *(int *)(&DAT_10b3e214 + iVar1 * 0x274);
      break;
    case 2:
      iStack_18 = *(int *)(&DAT_10b3e210 + iVar1 * 0x274);
      break;
    case 3:
      iStack_18 = *(int *)(&DAT_10b3e218 + iVar1 * 0x274);
      goto LAB_10486747;
    case 4:
      iStack_24 = GetHairMeshType(this,6);
      iVar3 = GetHairMeshType(this,7);
      iStack_50 = iVar3;
      iStack_48 = GetHairMeshType(this,8);
      if (iVar3 < 1) {
LAB_10486b09:
        if (0 < iStack_24) {
          piVar2 = &iStack_24;
          goto LAB_10486a51;
        }
        pcVar10 = FName_exref;
        if (iStack_24 == 0) {
          puVar8 = &DAT_10b3d994;
          goto LAB_10486a5e;
        }
      }
      else {
        iVar3 = HaveItem(this,0x11);
        if (iVar3 == 0) {
          iVar3 = HaveItem(this,0x12);
          if (iVar3 == 0) goto LAB_10486b09;
          piVar2 = &iStack_48;
        }
        else {
          piVar2 = &iStack_50;
        }
LAB_10486a51:
        puVar8 = (undefined *)thunk_FUN_104588c0(piVar2);
        pcVar10 = FName_exref;
        if (puVar8 != (undefined *)0x0) {
LAB_10486a5e:
          pcVar10 = FName_exref;
          if (*(int *)(puVar8 + ((*(int *)(iStack_20 + 0x698) + 0xf) * 0xf + *(int *)(this + 0x240))
                                * 4) != -1) {
            FString::Printf((ushort *)aFStack_38,L"%s.%s_m00%d_t0%d_m00_bh",
                            awStack_37c + *(int *)(iStack_20 + 0x698) * 0x14,
                            awStack_37c + *(int *)(iStack_20 + 0x698) * 0x14,
                            *(undefined4 *)
                             (puVar8 + ((*(int *)(iStack_20 + 0x698) + 0xf) * 0xf +
                                       *(int *)(this + 0x240)) * 4),*(undefined4 *)(this + 0x244));
            iStack_8._0_1_ = 3;
            EVar12 = 1;
            puVar6 = FString::operator*(aFStack_38);
            pcVar10 = FName_exref;
            FName::FName((FName *)&iStack_1c,puVar6,EVar12);
            iStack_18 = iStack_1c;
            iStack_8 = (uint)iStack_8._1_3_ << 8;
            FString::~FString(aFStack_38);
          }
        }
      }
LAB_10486ccd:
      pcVar9 = appStristr_exref;
      if (iVar1 == 3) {
        GetPcMeshName(this,(int)&iStack_20);
        pwVar11 = L"FDarkElf_m003_u";
        puVar6 = FName::operator*((FName *)&iStack_20);
        pcVar9 = appStristr_exref;
        puVar6 = appStristr(puVar6,(ushort *)pwVar11);
        if (puVar6 == (ushort *)0x0) {
          pwVar11 = L"FDarkElf_m006_u";
          puVar6 = FName::operator*((FName *)&iStack_20);
          puVar6 = appStristr(puVar6,(ushort *)pwVar11);
          if (puVar6 == (ushort *)0x0) {
            pwVar11 = L"FDarkElf_m009_u";
            puVar6 = FName::operator*((FName *)&iStack_20);
            puVar6 = appStristr(puVar6,(ushort *)pwVar11);
            if (puVar6 == (ushort *)0x0) break;
          }
        }
        pwVar11 = L"FDarkElf_m000_t00_m00_bh";
        puVar6 = FName::operator*((FName *)&iStack_18);
        puVar6 = appStristr(puVar6,(ushort *)pwVar11);
        if (puVar6 != (ushort *)0x0) {
          (*pcVar10)(L"FDarkElf.FDarkElf_m000_t00_m00_bh_u00",1);
          ExceptionList = pvStack_10;
          return param_1;
        }
        pwVar11 = L"FDarkElf_m000_t01_m00_bh";
        puVar6 = FName::operator*((FName *)&iStack_18);
        puVar6 = appStristr(puVar6,(ushort *)pwVar11);
        if (puVar6 != (ushort *)0x0) {
          (*pcVar10)(L"FDarkElf.FDarkElf_m000_t01_m00_bh_u00",1);
          ExceptionList = pvStack_10;
          return param_1;
        }
        pwVar11 = L"FDarkElf_m000_t02_m00_bh";
        puVar6 = FName::operator*((FName *)&iStack_18);
        puVar6 = appStristr(puVar6,(ushort *)pwVar11);
        if (puVar6 != (ushort *)0x0) {
          (*pcVar10)(L"FDarkElf.FDarkElf_m000_t02_m00_bh_u00",1);
          ExceptionList = pvStack_10;
          return param_1;
        }
        pwVar11 = L"FDarkElf_m000_t03_m00_bh";
        puVar6 = FName::operator*((FName *)&iStack_18);
        puVar6 = appStristr(puVar6,(ushort *)pwVar11);
        if (puVar6 != (ushort *)0x0) {
          (*pcVar10)(L"FDarkElf.FDarkElf_m000_t03_m00_bh_u00",1);
          ExceptionList = pvStack_10;
          return param_1;
        }
      }
      break;
    case 5:
      iStack_3c = GetHairMeshType(this,6);
      iVar3 = GetHairMeshType(this,7);
      iStack_40 = iVar3;
      iStack_4c = GetHairMeshType(this,8);
      if (iVar3 < 1) {
LAB_104869e2:
        if (0 < iStack_3c) {
          piVar2 = &iStack_3c;
          goto LAB_10486938;
        }
        if (iStack_3c == 0) {
          puVar8 = &DAT_10b3d994;
          goto LAB_10486945;
        }
      }
      else {
        iVar3 = HaveItem(this,0x11);
        if (iVar3 == 0) {
          iVar3 = HaveItem(this,0x12);
          if (iVar3 == 0) goto LAB_104869e2;
          piVar2 = &iStack_4c;
        }
        else {
          piVar2 = &iStack_40;
        }
LAB_10486938:
        puVar8 = (undefined *)thunk_FUN_104588c0(piVar2);
        if (puVar8 != (undefined *)0x0) {
LAB_10486945:
          iVar3 = *(int *)(iStack_20 + 0x698);
          if (*(int *)(puVar8 + (iVar3 * 0xf + *(int *)(this + 0x240)) * 4) != -1) {
            FString::Printf((ushort *)aFStack_38,L"%s.%s_m00%d_t0%d_m00_ah",
                            awStack_37c + iVar3 * 0x14,awStack_37c + iVar3 * 0x14,
                            *(undefined4 *)(puVar8 + (iVar3 * 0xf + *(int *)(this + 0x240)) * 4),
                            *(undefined4 *)(this + 0x244));
            iStack_8._0_1_ = 2;
            EVar12 = 1;
            puVar6 = FString::operator*(aFStack_38);
            FName::FName((FName *)&iStack_28,puVar6,EVar12);
            iStack_18 = iStack_28;
            iStack_8 = (uint)iStack_8._1_3_ << 8;
            FString::~FString(aFStack_38);
          }
        }
      }
      goto LAB_10486bc2;
    default:
      goto switchD_10486883_caseD_6;
    case 9:
      iStack_18 = *(int *)(&DAT_10b3e1b0 + (iVar1 * 0x9d + *(int *)(this + 0x248)) * 4);
    }
  }
  else {
    if (piVar2[1] == 0) {
      if ((piVar2[0x36] == 3) || (piVar2[0x36] == 7)) {
        if (param_2 == 0xb) {
          uVar5 = 1;
          pcVar9 = *(code **)(*piVar2 + 8);
          goto LAB_104866ac;
        }
        iVar3 = *piVar2;
        in_stack_0000000c = 0;
        goto LAB_1048672f;
      }
      piVar4 = (int *)(**(code **)(*piVar2 + 8))(&iStack_1c,iVar1,in_stack_0000000c);
      iStack_18 = *piVar4;
      if (((0 < *(int *)(this + 0x284)) && (0 < *(int *)(this + 0x2a0))) &&
         ((0 < piVar2[0x59] && (in_stack_0000000c == piVar2[0x59] + -1)))) {
        uVar5 = (**(code **)(**(int **)(DAT_10c51044 + 0x60) + 0x88))(*(int *)(this + 0x2a0));
        FString::Printf((ushort *)aFStack_38,L"crest.large.crest_%d_%d_l",uVar5);
        iStack_8._0_1_ = 1;
        EVar12 = 1;
        puVar6 = FString::operator*(aFStack_38);
        piVar2 = (int *)FName::FName((FName *)&iStack_1c,puVar6,EVar12);
        iStack_18 = *piVar2;
        iStack_8 = (uint)iStack_8._1_3_ << 8;
        FString::~FString(aFStack_38);
      }
    }
    else if (piVar2[1] == 1) {
      if ((piVar2[0x35] == 0xf) && (param_2 == 1)) {
LAB_10486800:
        uVar5 = 1;
        pcVar9 = *(code **)(*piVar2 + 8);
LAB_104866ac:
        piVar2 = (int *)(*pcVar9)(&iStack_1c,iVar1,uVar5);
        iStack_18 = *piVar2;
        pcVar9 = appStristr_exref;
        goto LAB_104866b9;
      }
      if (piVar2[0x35] == 0x10) {
        if (param_2 == 1) goto LAB_10486800;
        if (param_2 == 3) {
          piVar2 = (int *)(**(code **)(*piVar2 + 8))(&iStack_1c,iVar1,2);
          iStack_18 = *piVar2;
          goto LAB_10486747;
        }
        if (param_2 == 0) {
          uVar5 = 3;
          pcVar9 = *(code **)(*piVar2 + 8);
          goto LAB_104866ac;
        }
      }
      iVar3 = *piVar2;
LAB_1048672f:
      piVar2 = (int *)(**(code **)(iVar3 + 8))(&iStack_1c,iVar1,in_stack_0000000c);
      iStack_18 = *piVar2;
    }
switchD_10486883_caseD_6:
    if (param_2 == 3) {
LAB_10486747:
      GetPcMeshName(this,(int)&iStack_24);
      pwVar11 = L"MElf_m009_u";
      puVar6 = FName::operator*((FName *)&iStack_24);
      pcVar9 = appStristr_exref;
      puVar6 = appStristr(puVar6,(ushort *)pwVar11);
      if (puVar6 != (ushort *)0x0) {
        GetPcTexName(this,(int)&iStack_1c,2);
        iStack_28 = iStack_18;
        pwVar11 = L"MElf_m009_t";
        puVar6 = FName::operator*((FName *)&iStack_1c);
        puVar6 = appStristr(puVar6,(ushort *)pwVar11);
        pwVar11 = L"MElf_m009_t";
        puVar7 = FName::operator*((FName *)&iStack_28);
        puVar7 = appStristr(puVar7,(ushort *)pwVar11);
        if (((puVar6 == (ushort *)0x0) || (puVar7 == (ushort *)0x0)) ||
           (iVar1 = appMemcmp(puVar6 + 0xb,puVar7 + 0xb,4), iVar1 != 0)) {
          puVar6 = (ushort *)0x1;
          pwVar11 = L"MElf.MElf_m000_t1000_g";
          goto LAB_10486706;
        }
      }
      pwVar11 = L"FElf_m006_u";
      puVar6 = FName::operator*((FName *)&iStack_24);
      puVar6 = appStristr(puVar6,(ushort *)pwVar11);
      if (puVar6 != (ushort *)0x0) {
        GetPcTexName(this,(int)&iStack_1c,2);
        iStack_20 = iStack_18;
        pwVar11 = L"FElf_m006_t";
        puVar6 = FName::operator*((FName *)&iStack_1c);
        puVar6 = appStristr(puVar6,(ushort *)pwVar11);
        pwVar11 = L"FElf_m006_t";
        puVar7 = FName::operator*((FName *)&iStack_20);
        puVar7 = appStristr(puVar7,(ushort *)pwVar11);
        if (((puVar6 == (ushort *)0x0) || (puVar7 == (ushort *)0x0)) ||
           (iVar1 = appMemcmp(puVar6 + 0xb,puVar7 + 0xb,4), iVar1 != 0)) {
          puVar6 = (ushort *)0x1;
          pwVar11 = L"FElf.FElf_m000_t1000_g";
          goto LAB_10486706;
        }
      }
    }
    else if (param_2 == 5) {
LAB_10486bc2:
      pcVar9 = appStristr_exref;
      if (iVar1 == 3) {
        GetPcMeshName(this,(int)&iStack_20);
        pwVar11 = L"FDarkElf_m003_u";
        puVar6 = FName::operator*((FName *)&iStack_20);
        pcVar9 = appStristr_exref;
        puVar6 = appStristr(puVar6,(ushort *)pwVar11);
        if (puVar6 == (ushort *)0x0) {
          pwVar11 = L"FDarkElf_m006_u";
          puVar6 = FName::operator*((FName *)&iStack_20);
          puVar6 = appStristr(puVar6,(ushort *)pwVar11);
          if (puVar6 == (ushort *)0x0) {
            pwVar11 = L"FDarkElf_m009_u";
            puVar6 = FName::operator*((FName *)&iStack_20);
            puVar6 = appStristr(puVar6,(ushort *)pwVar11);
            if (puVar6 == (ushort *)0x0) goto LAB_104866b9;
          }
        }
        pwVar11 = L"FDarkElf_m000_t00_m00_ah";
        puVar6 = FName::operator*((FName *)&iStack_18);
        puVar7 = appStristr(puVar6,(ushort *)pwVar11);
        if (puVar7 != (ushort *)0x0) {
          pwVar11 = L"FDarkElf.FDarkElf_m000_t00_m00_ah_u00";
          goto LAB_10486706;
        }
        pwVar11 = L"FDarkElf_m000_t01_m00_ah";
        puVar6 = FName::operator*((FName *)&iStack_18);
        puVar7 = appStristr(puVar6,(ushort *)pwVar11);
        if (puVar7 != (ushort *)0x0) {
          pwVar11 = L"FDarkElf.FDarkElf_m000_t01_m00_ah_u00";
          goto LAB_10486706;
        }
        pwVar11 = L"FDarkElf_m000_t02_m00_ah";
        puVar6 = FName::operator*((FName *)&iStack_18);
        puVar7 = appStristr(puVar6,(ushort *)pwVar11);
        if (puVar7 != (ushort *)0x0) {
          pwVar11 = L"FDarkElf.FDarkElf_m000_t02_m00_ah_u00";
          goto LAB_10486706;
        }
        pwVar11 = L"FDarkElf_m000_t03_m00_ah";
        puVar6 = FName::operator*((FName *)&iStack_18);
        puVar7 = appStristr(puVar6,(ushort *)pwVar11);
        if (puVar7 != (ushort *)0x0) {
          pwVar11 = L"FDarkElf.FDarkElf_m000_t03_m00_ah_u00";
          goto LAB_10486706;
        }
      }
    }
    else {
      pcVar9 = appStristr_exref;
      pcVar10 = FName_exref;
      if (param_2 == 4) goto LAB_10486ccd;
    }
  }
LAB_104866b9:
  if (((*(int *)GLanguageType_exref == 0) && (DAT_10c51044 != (UGameEngine *)0x0)) &&
     (iVar1 = UGameEngine::IsLimitContentForYoungUsers(DAT_10c51044), iVar1 != 0)) {
    pwVar11 = L"FDarkElf_m001_t01_l";
    puVar6 = FName::operator*((FName *)&iStack_18);
    iVar1 = (*pcVar9)(puVar6,pwVar11);
    if (iVar1 == 0) {
      pwVar11 = L"FDarkElf_m001_t02_l";
      puVar6 = FName::operator*((FName *)&iStack_18);
      iVar1 = (*pcVar9)(puVar6,pwVar11);
      if (iVar1 == 0) {
        pwVar11 = L"FDarkElf_m001_t01_u";
        puVar6 = FName::operator*((FName *)&iStack_18);
        iVar1 = (*pcVar9)(puVar6,pwVar11);
        if (iVar1 == 0) {
          pwVar11 = L"FDarkElf_m001_t02_u";
          puVar6 = FName::operator*((FName *)&iStack_18);
          iVar1 = (*pcVar9)(puVar6,pwVar11);
          if (iVar1 == 0) goto LAB_10486e91;
          puVar6 = (ushort *)0x1;
          pwVar11 = L"FDarkElf.FDarkElf_m005_t12_u";
        }
        else {
          puVar6 = (ushort *)0x1;
          pwVar11 = L"FDarkElf.FDarkElf_m005_t32_u";
        }
      }
      else {
        puVar6 = (ushort *)0x1;
        pwVar11 = L"FDarkElf.FDarkElf_m005_t12_l";
      }
    }
    else {
      puVar6 = (ushort *)0x1;
      pwVar11 = L"FDarkElf.FDarkElf_m005_t32_l";
    }
LAB_10486706:
    FName::FName((FName *)param_1,(ushort *)pwVar11,(EFindName)puVar6);
    ExceptionList = pvStack_10;
    return param_1;
  }
LAB_10486e91:
  *(int *)param_1 = iStack_18;
  ExceptionList = pvStack_10;
  return param_1;
}


// ==== 1031502d thunk_FUN_104225e0 thunk -> 104225e0

// ==== 10315032 APawn::CanBeAttacked

/* public: virtual int __thiscall APawn::CanBeAttacked(void) */

int __thiscall APawn::CanBeAttacked(APawn *this)

{
  int iVar1;
  
                    /* 0x15032  3482  ?CanBeAttacked@APawn@@UAEHXZ */
  if (*(int *)GIsL2NetLogin_exref == 0) {
    return 1;
  }
  if ((*(int *)(this + 0x14d8) == 0) || ((*(byte *)(*(int *)(this + 0x14d8) + 0x41c) & 1) == 0)) {
    iVar1 = (**(code **)(**(int **)(DAT_10c51044 + 0x60) + 0x94))(*(undefined4 *)(this + 0x60));
    if (iVar1 != 0) {
      return *(int *)(iVar1 + 0x10);
    }
  }
  return 0;
}


// ==== 10315037 UMotionBlur::operator_new

/* public: static void * __cdecl UMotionBlur::operator new(unsigned int,class UObject *,class
   FName,unsigned long) */

void * __cdecl
UMotionBlur::operator_new
          (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  UObject *pUVar1;
  
                    /* 0x15037  1960  ??2UMotionBlur@@SAPAXIPAVUObject@@VFName@@K@Z */
  pUVar1 = UObject::StaticAllocateObject
                     (&PrivateStaticClass,param_2,param_3,param_4,0,*(undefined4 *)GError_exref,0,0)
  ;
  return pUVar1;
}


// ==== 1031503c UAnimNotify_Effect::operator=

/* public: class UAnimNotify_Effect & __thiscall UAnimNotify_Effect::operator=(class
   UAnimNotify_Effect const &) */

UAnimNotify_Effect * __thiscall
UAnimNotify_Effect::operator=(UAnimNotify_Effect *this,UAnimNotify_Effect *param_1)

{
                    /* 0x1503c  2469  ??4UAnimNotify_Effect@@QAEAAV0@ABV0@@Z */
  UObject::operator=((UObject *)this,(UObject *)param_1);
  *(undefined4 *)(this + 0x34) = *(undefined4 *)(param_1 + 0x34);
  *(undefined4 *)(this + 0x38) = *(undefined4 *)(param_1 + 0x38);
  *(undefined4 *)(this + 0x3c) = *(undefined4 *)(param_1 + 0x3c);
  *(undefined4 *)(this + 0x40) = *(undefined4 *)(param_1 + 0x40);
  *(undefined4 *)(this + 0x44) = *(undefined4 *)(param_1 + 0x44);
  *(undefined4 *)(this + 0x48) = *(undefined4 *)(param_1 + 0x48);
  *(undefined4 *)(this + 0x4c) = *(undefined4 *)(param_1 + 0x4c);
  *(undefined4 *)(this + 0x50) = *(undefined4 *)(param_1 + 0x50);
  *(undefined4 *)(this + 0x54) = *(undefined4 *)(param_1 + 0x54);
  *(uint *)(this + 0x58) =
       *(uint *)(this + 0x58) ^ (*(uint *)(param_1 + 0x58) ^ *(uint *)(this + 0x58)) & 1;
  *(undefined4 *)(this + 0x5c) = *(undefined4 *)(param_1 + 0x5c);
  *(undefined4 *)(this + 0x60) = *(undefined4 *)(param_1 + 0x60);
  *(undefined4 *)(this + 100) = *(undefined4 *)(param_1 + 100);
  *(undefined4 *)(this + 0x68) = *(undefined4 *)(param_1 + 0x68);
  *(undefined4 *)(this + 0x6c) = *(undefined4 *)(param_1 + 0x6c);
  *(uint *)(this + 0x70) =
       *(uint *)(this + 0x70) ^ (*(uint *)(this + 0x70) ^ *(uint *)(param_1 + 0x70)) & 1;
  *(uint *)(this + 0x70) =
       (*(uint *)(param_1 + 0x70) ^ *(uint *)(this + 0x70)) & 2 ^ *(uint *)(this + 0x70);
  *(undefined4 *)(this + 0x74) = *(undefined4 *)(param_1 + 0x74);
  *(undefined4 *)(this + 0x78) = *(undefined4 *)(param_1 + 0x78);
  return this;
}


// ==== 10315041 thunk_FUN_10339080 thunk -> 10339080

// ==== 10315046 UGameEngine::AdjustPawnLocation

/* public: void __thiscall UGameEngine::AdjustPawnLocation(class APawn *,class FVector) */

void __thiscall
UGameEngine::AdjustPawnLocation
          (UGameEngine *this,AActor *param_1,float param_3,float param_4,float param_5)

{
  AActor *pAVar1;
  int iVar2;
  int *piVar3;
  AActor *this_00;
  undefined4 *puVar4;
  float fVar5;
  undefined1 *puVar6;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  undefined1 auStack_3c [8];
  undefined1 auStack_34 [12];
  float fStack_28;
  float fStack_24;
  float fStack_20;
  float fStack_c;
  
                    /* 0x15046  3340  ?AdjustPawnLocation@UGameEngine@@QAEXPAVAPawn@@VFVector@@@Z */
  this_00 = param_1;
  if (((param_1 != (AActor *)0x0) && (*(int *)(param_1 + 0x14d8) != 0)) &&
     ((*(byte *)(*(int *)(param_1 + 0x14d8) + 0x41c) & 1) == 0)) {
    fStack_4c = *(float *)(param_1 + 0x1c4) - *(float *)(param_1 + 0x2f4);
    fStack_48 = *(float *)(param_1 + 0x1bc) - param_3;
    fStack_44 = *(float *)(param_1 + 0x1c0) - param_4;
    fStack_40 = fStack_4c - param_5;
    fVar5 = FVector::Size((FVector *)&fStack_48);
    if (((200.0 < fVar5) && (*(int *)(*(int *)(param_1 + 0x14d8) + 0x424) == 0)) &&
       (iVar2 = *(int *)(**(int **)(*(int *)(this + 0x54) + 0x38) + 0x3c),
       piVar3 = *(int **)(iVar2 + 0xe4), iVar2 != *(int *)(param_1 + 0x14d8))) {
      thunk_FUN_104419f0(0x3f800000,0);
      fStack_4c = param_5;
      fStack_48 = param_3;
      fStack_44 = param_4;
      fStack_40 = param_5;
      if (((*(int *)(param_1 + 0x778) == 1) || (*(int *)(param_1 + 0x778) == 2)) ||
         (param_1[0x34] == (AActor)0x4)) {
        fStack_28 = param_3;
        fStack_24 = param_4;
        fStack_20 = param_5;
      }
      else {
        pAVar1 = param_1 + 0x2f4;
        param_1 = (AActor *)0x0;
        fStack_4c = param_5 + *(float *)pAVar1 + 20.0;
        fStack_40 = param_5 - 30.0;
        do {
          puVar6 = auStack_3c;
          puVar4 = (undefined4 *)AActor::GetCylinderExtent(this_00);
          (**(code **)(*piVar3 + 0xe4))
                    (auStack_34,this_00,&fStack_4c,&stack0xffffffa8,0x86,*puVar4,puVar4[1],puVar4[2]
                     ,puVar6);
          if (fStack_20 != 0.0) break;
          param_1 = (AActor *)((int)param_1 + 1);
          fStack_4c = fStack_4c + 30.0;
          fStack_40 = fStack_40 - 30.0;
        } while ((int)param_1 < 0x1e);
        if (param_1 == (AActor *)0x1e) {
          fStack_28 = param_3;
          fStack_24 = param_4;
          fStack_20 = param_5;
        }
        if (fStack_c * 12.0 < 1.9) {
          fStack_20 = (2.15 - fStack_c * 12.0) + fStack_20;
        }
      }
      (**(code **)(*piVar3 + 0xa8))(this_00,fStack_28,fStack_24,fStack_20,0,0,0);
    }
  }
  return;
}


// ==== 10315050 thunk_FUN_1049fd10 thunk -> 1049fd10

// ==== 10315055 FBspSection::operator=

/* public: class FBspSection & __thiscall FBspSection::operator=(class FBspSection const &) */

FBspSection * __thiscall FBspSection::operator=(FBspSection *this,FBspSection *param_1)

{
                    /* 0x15055  2262  ??4FBspSection@@QAEAAV0@ABV0@@Z */
  *(undefined4 *)(this + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
  thunk_FUN_10391f20(param_1 + 0xc);
  *(undefined4 *)(this + 0x18) = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)(this + 0x1c) = *(undefined4 *)(param_1 + 0x1c);
  *(undefined4 *)(this + 0x20) = *(undefined4 *)(param_1 + 0x20);
  *(undefined4 *)(this + 0x24) = *(undefined4 *)(param_1 + 0x24);
  *(undefined4 *)(this + 0x28) = *(undefined4 *)(param_1 + 0x28);
  *(undefined4 *)(this + 0x2c) = *(undefined4 *)(param_1 + 0x2c);
  *(undefined4 *)(this + 0x30) = *(undefined4 *)(param_1 + 0x30);
  return this;
}


// ==== 1031505a UTerrainSector::GetGlobalVertex

/* public: int __thiscall UTerrainSector::GetGlobalVertex(int,int) */

int __thiscall UTerrainSector::GetGlobalVertex(UTerrainSector *this,int param_1,int param_2)

{
                    /* 0x1505a  4637  ?GetGlobalVertex@UTerrainSector@@QAEHHH@Z */
  return (*(int *)(this + 0x78) + param_2) * *(int *)(*(int *)(this + 0x4c) + 0x210c) +
         *(int *)(this + 0x74) + param_1;
}


// ==== 1031505f UTexture::GetMip

/* public: struct FMipmapBase * __thiscall UTexture::GetMip(int) */

FMipmapBase * __thiscall UTexture::GetMip(UTexture *this,int param_1)

{
                    /* 0x1505f  4778  ?GetMip@UTexture@@QAEPAUFMipmapBase@@H@Z */
  return (FMipmapBase *)(*(int *)(this + 0x5f0) + param_1 * 0x28);
}


// ==== 10315064 GetFVECTOR

/* int __cdecl GetFVECTOR(unsigned short const *,unsigned short const *,class FVector &) */

int __cdecl GetFVECTOR(ushort *param_1,ushort *param_2,FVector *param_3)

{
  int iVar1;
  ushort auStack_c0 [86];
  undefined1 *puStack_14;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x15064  4605  ?GetFVECTOR@@YAHPBG0AAVFVector@@@Z */
  puStack_c = &LAB_108228f0;
  pvStack_10 = ExceptionList;
  puStack_14 = &stack0xffffff34;
  uStack_8 = 0;
  ExceptionList = &pvStack_10;
  iVar1 = GetSUBSTRING(param_1,param_2,auStack_c0,0x50);
  if (iVar1 == 0) {
    ExceptionList = pvStack_10;
    return 0;
  }
  iVar1 = GetFVECTOR(auStack_c0,param_3);
  ExceptionList = pvStack_10;
  return iVar1;
}


// ==== 10315069 thunk_FUN_10730b50 thunk -> 10730b50

// ==== 1031506e UMeshEmitter::PostEditChange

/* public: virtual void __thiscall UMeshEmitter::PostEditChange(void) */

void __thiscall UMeshEmitter::PostEditChange(UMeshEmitter *this)

{
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x1506e  6772  ?PostEditChange@UMeshEmitter@@UAEXXZ */
  puStack_c = &LAB_10820e20;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  ExceptionList = &pvStack_10;
  UParticleEmitter::PostEditChange((UParticleEmitter *)this);
  (**(code **)(*(int *)this + 0x6c))();
  (**(code **)(*(int *)this + 0x68))(*(undefined4 *)(this + 0x10c));
  ExceptionList = pvStack_10;
  return;
}


// ==== 10315073 thunk_FUN_103b5a20 thunk -> 103b5a20

// ==== 10315078 ALiftExit::InternalConstructor

/* public: static void __cdecl ALiftExit::InternalConstructor(void *) */

void __cdecl ALiftExit::InternalConstructor(void *param_1)

{
                    /* 0x15078  5565  ?InternalConstructor@ALiftExit@@SAXPAX@Z */
  if (param_1 != (void *)0x0) {
    ALiftExit(param_1);
    return;
  }
  return;
}


// ==== 1031507d AAirEmitter::operator_new

/* public: static void * __cdecl AAirEmitter::operator new(unsigned int,class UObject *,class
   FName,unsigned long) */

void * __cdecl
AAirEmitter::operator_new
          (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  UObject *pUVar1;
  
                    /* 0x1507d  1506  ??2AAirEmitter@@SAPAXIPAVUObject@@VFName@@K@Z */
  pUVar1 = UObject::StaticAllocateObject
                     (&PrivateStaticClass,param_2,param_3,param_4,0,*(undefined4 *)GError_exref,0,0)
  ;
  return pUVar1;
}


// ==== 10315082 thunk_FUN_10685410 thunk -> 10685410

// ==== 10315087 thunk_FUN_105eef40 thunk -> 105eef40

// ==== 1031508c FNMover::FNMover

/* public: __thiscall FNMover::FNMover(struct FNMover const &) */

FNMover * __thiscall FNMover::FNMover(FNMover *this,FNMover *param_1)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x1508c  463  ??0FNMover@@QAE@ABU0@@Z */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_107fe386;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *(undefined4 *)this = *(undefined4 *)param_1;
  *(undefined4 *)(this + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(this + 0xc) = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(this + 0x10) = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)(this + 0x14) = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)(this + 0x18) = *(undefined4 *)(param_1 + 0x18);
  thunk_FUN_103794b0(param_1 + 0x1c);
  uStack_4 = 0;
  thunk_FUN_103794b0(param_1 + 0x28);
  *(undefined4 *)(this + 0x34) = *(undefined4 *)(param_1 + 0x34);
  *(undefined4 *)(this + 0x38) = *(undefined4 *)(param_1 + 0x38);
  *(undefined4 *)(this + 0x3c) = *(undefined4 *)(param_1 + 0x3c);
  *(undefined4 *)(this + 0x40) = *(undefined4 *)(param_1 + 0x40);
  *(undefined4 *)(this + 0x44) = *(undefined4 *)(param_1 + 0x44);
  *(undefined4 *)(this + 0x48) = *(undefined4 *)(param_1 + 0x48);
  *(undefined4 *)(this + 0x4c) = *(undefined4 *)(param_1 + 0x4c);
  *(undefined4 *)(this + 0x50) = *(undefined4 *)(param_1 + 0x50);
  *(undefined4 *)(this + 0x54) = *(undefined4 *)(param_1 + 0x54);
  *(undefined4 *)(this + 0x58) = *(undefined4 *)(param_1 + 0x58);
  *(undefined4 *)(this + 0x5c) = *(undefined4 *)(param_1 + 0x5c);
  *(undefined4 *)(this + 0x60) = *(undefined4 *)(param_1 + 0x60);
  *(undefined4 *)(this + 100) = *(undefined4 *)(param_1 + 100);
  *(undefined4 *)(this + 0x68) = *(undefined4 *)(param_1 + 0x68);
  *(undefined4 *)(this + 0x6c) = *(undefined4 *)(param_1 + 0x6c);
  *(undefined4 *)(this + 0x70) = *(undefined4 *)(param_1 + 0x70);
  *(undefined4 *)(this + 0x74) = *(undefined4 *)(param_1 + 0x74);
  ExceptionList = pvStack_c;
  return this;
}


// ==== 10315091 thunk_FUN_103b0460 thunk -> 103b0460

// ==== 1031509b FL2GameData::GetZoneName

/* public: unsigned short * __thiscall FL2GameData::GetZoneName(float,float,float) */

ushort * __thiscall
FL2GameData::GetZoneName(FL2GameData *this,float param_1,float param_2,float param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  FZoneNameInfo *pFVar5;
  ushort *puVar6;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x1509b  5330  ?GetZoneName@FL2GameData@@QAEPAGMMM@Z */
  puStack_c = &LAB_10814500;
  pvStack_10 = ExceptionList;
  puVar6 = (ushort *)0x0;
  uStack_8 = 0;
  uVar1 = *(undefined4 *)(this + 0x7f9d0);
  if (*(int *)GIsEditor_exref == 0) {
    ExceptionList = &pvStack_10;
    iVar2 = FUN_107a6660();
    iVar3 = FUN_107a6660();
    iVar4 = FUN_107a6660();
    pFVar5 = processGetZoneNameInfo(this,iVar4,iVar3,iVar2);
    if (pFVar5 != (FZoneNameInfo *)0x0) {
      puVar6 = FString::operator*((FString *)(pFVar5 + 0x18));
    }
  }
  *(undefined4 *)(this + 0x7f9d0) = uVar1;
  ExceptionList = pvStack_10;
  return puVar6;
}


// ==== 103150a0 thunk_FUN_1051f320 thunk -> 1051f320

// ==== 103150a5 FL2GameData::HairAcceLocDataLoad

/* protected: int __thiscall FL2GameData::HairAcceLocDataLoad(int) */

int __thiscall FL2GameData::HairAcceLocDataLoad(FL2GameData *this,int param_1)

{
  int iVar1;
  int iVar2;
  FArchive *pFVar3;
  FArchive *pFVar4;
  undefined4 uVar5;
  FOutputDevice *this_00;
  code *pcVar6;
  int iVar7;
  float10 fVar8;
  ushort uStack_548;
  undefined1 auStack_546 [1022];
  FOutputDevice aFStack_148 [184];
  undefined4 uStack_90;
  undefined1 *puStack_50;
  void *pvStack_4c;
  undefined1 *puStack_48;
  int iStack_44;
  int iStack_38;
  int iStack_30;
  int iStack_2c;
  int iStack_28;
  int iStack_24;
  int iStack_20;
  int iStack_1c;
  int iStack_18;
  int iStack_14;
  FArchive *pFStack_10;
  uchar *puStack_c;
  FL2GameData *pFStack_8;
  
                    /* 0x150a5  5335  ?HairAcceLocDataLoad@FL2GameData@@IAEHH@Z */
  pcVar6 = appStrcpy_exref;
  puStack_48 = &LAB_10814261;
  pvStack_4c = ExceptionList;
  puStack_50 = &stack0xfffffaac;
  iVar7 = 0;
  iStack_44 = 0;
  iStack_14 = 1;
  puStack_c = (uchar *)0x0;
  iStack_1c = 0;
  pFStack_10 = (FArchive *)0x0;
  ExceptionList = &pvStack_4c;
  pFStack_8 = this;
  appStrcpy((ushort *)aFStack_148,(ushort *)L"Hairaccessorylocgrp.dat");
  pFVar3 = (FArchive *)
           (**(code **)(**(int **)GFileManager_exref + 8))(aFStack_148,0,*(undefined4 *)GNull_exref)
  ;
  pFStack_10 = pFVar3;
  if (pFVar3 == (FArchive *)0x0) {
    if (param_1 == 0) {
      if (*(int *)GLog_exref != 0) {
        FOutputDevice::Logf2(this_00,*(EName *)GLog_exref,(ushort *)0x315);
      }
      goto LAB_1047796f;
    }
  }
  else if (param_1 == 0) {
    iStack_1c = (**(code **)(*(int *)pFVar3 + 0x2c))();
    GetTextInformation(pFStack_8,pFVar3,&puStack_c,&iStack_1c,0);
    pFVar4 = (FArchive *)(**(code **)(**(int **)GFileManager_exref + 4))(puStack_c,iStack_1c);
    if (pFVar4 == (FArchive *)0x0) {
      if (*(int *)GLog_exref != 0) {
        FOutputDevice::Logf2(aFStack_148,*(EName *)GLog_exref,(ushort *)0x315);
      }
    }
    else {
      iVar7 = CheckSafePackage(pFStack_8,pFVar4);
      if (iVar7 == 0) {
        FOutputDevice::Logf(aFStack_148,*(ushort **)GError_exref);
      }
      iStack_18 = 0;
      (**(code **)(*(int *)pFVar4 + 4))(&iStack_18,4);
      for (iStack_20 = 0; iStack_20 < iStack_18; iStack_20 = iStack_20 + 1) {
        param_1 = thunk_FUN_1032ffc0(0x16c);
        iStack_44._0_1_ = 1;
        if (param_1 == 0) {
          iVar7 = 0;
        }
        else {
          iVar7 = thunk_FUN_10457de0();
        }
        iStack_44 = (uint)iStack_44._1_3_ << 8;
        iStack_24 = iVar7;
        if (iVar7 != 0) {
          thunk_FUN_1044f360(pFVar4);
          thunk_FUN_10463660(iVar7,&iStack_24);
        }
      }
      (**(code **)(*(int *)pFVar4 + 0x58))();
    }
    (**(code **)(*(int *)pFVar3 + 0x58))();
    thunk_FUN_103254a0(puStack_c);
    if (pFVar4 != (FArchive *)0x0) {
      (*(code *)**(undefined4 **)pFVar4)(1);
    }
    goto LAB_1047796f;
  }
  if (pFVar3 != (FArchive *)0x0) {
    (**(code **)(*(int *)pFVar3 + 0x58))();
  }
  appStrcpy((ushort *)aFStack_148,(ushort *)L"Hairaccessorylocgrp.txt");
  pFVar3 = (FArchive *)
           (**(code **)(**(int **)GFileManager_exref + 8))(aFStack_148,0,*(undefined4 *)GNull_exref)
  ;
  pFStack_10 = pFVar3;
  if (pFVar3 == (FArchive *)0x0) {
    FOutputDevice::Logf(*(FOutputDevice **)GWarn_exref,(ushort *)*(FOutputDevice **)GWarn_exref);
    iStack_14 = 0;
    pFVar3 = pFStack_10;
  }
  else {
    thunk_FUN_104a14b0();
    iStack_44._0_1_ = 2;
    iStack_1c = (**(code **)(*(int *)pFVar3 + 0x2c))();
    appStrcpy((ushort *)&DAT_10a9d99a,(ushort *)L"helmet_index");
    GetTextInformation(pFStack_8,pFVar3,&puStack_c,&iStack_1c,param_1);
    if (puStack_c == (uchar *)0x0) {
      FOutputDevice::Logf(*(FOutputDevice **)GWarn_exref,(ushort *)*(FOutputDevice **)GWarn_exref);
      iStack_14 = 0;
      iStack_44 = (uint)iStack_44._1_3_ << 8;
      thunk_FUN_104a1770();
      pFVar3 = pFStack_10;
    }
    else {
      param_1 = (int)(puStack_c + 2);
      for (; iStack_28 = iVar7, iVar7 < 0x5d; iVar7 = iVar7 + 1) {
        thunk_FUN_104a1120(u_hairaccessory_begin_10aeaee0 + iVar7 * 0x101,
                           u_cmesh_name_10aeb0e0[iVar7 * 0x101]);
      }
      thunk_FUN_1049f750(param_1);
      iVar7 = thunk_FUN_104a1840();
      if (iVar7 == 0) {
        thunk_FUN_10445eb0(uStack_90);
        FOutputDevice::Logf((FOutputDevice *)GWarn_exref,*(ushort **)GWarn_exref);
        iStack_14 = 0;
      }
      else {
        iStack_24 = thunk_FUN_1049f840();
        iStack_2c = 0;
        while (iVar7 = iStack_2c, iStack_2c < iStack_24) {
          uStack_548 = 0;
          _memset(auStack_546,0,0x3fe);
          uVar5 = thunk_FUN_104a0c30(L"mesh_name",iVar7);
          (*pcVar6)(&uStack_548,uVar5);
          FName::FName((FName *)&iStack_18,&uStack_548,2);
          param_1 = thunk_FUN_10458eb0(&iStack_18);
          if (param_1 != 0) {
            FOutputDevice::Logf((FOutputDevice *)GWarn_exref,*(ushort **)GWarn_exref);
          }
          iStack_38 = thunk_FUN_1032ffc0(0x16c);
          iStack_44._0_1_ = 3;
          if (iStack_38 == 0) {
            param_1 = 0;
          }
          else {
            param_1 = thunk_FUN_10457de0();
          }
          iStack_44._0_1_ = 2;
          *(int *)param_1 = iStack_18;
          iStack_30 = 0;
          while (iVar2 = iStack_30, iVar1 = param_1, iStack_30 < 0xf) {
            appSprintf(&uStack_548,(ushort *)&DAT_1089bdc4,iStack_30);
            iVar1 = iVar1 + iVar2 * 0xc;
            fVar8 = (float10)thunk_FUN_104a0bd0(&uStack_548,iVar7);
            *(float *)(iVar1 + 4) = (float)fVar8;
            appSprintf(&uStack_548,(ushort *)&DAT_1089bdb8,iVar2);
            fVar8 = (float10)thunk_FUN_104a0bd0(&uStack_548,iVar7);
            *(float *)(iVar1 + 8) = (float)fVar8;
            appSprintf(&uStack_548,(ushort *)&DAT_1089bdac,iVar2);
            fVar8 = (float10)thunk_FUN_104a0bd0(&uStack_548,iVar7);
            *(float *)(iVar1 + 0xc) = (float)fVar8;
            appSprintf(&uStack_548,(ushort *)L"Pitch%d",iVar2);
            uVar5 = thunk_FUN_104a0b70(&uStack_548,iVar7);
            *(undefined4 *)(iVar1 + 0xb8) = uVar5;
            appSprintf(&uStack_548,(ushort *)L"Yaw%d",iVar2);
            uVar5 = thunk_FUN_104a0b70(&uStack_548,iVar7);
            *(undefined4 *)(iVar1 + 0xbc) = uVar5;
            appSprintf(&uStack_548,(ushort *)L"Roll%d",iVar2);
            uVar5 = thunk_FUN_104a0b70(&uStack_548,iVar7);
            *(undefined4 *)(param_1 + (iVar2 * 3 + 0x30) * 4) = uVar5;
            iStack_30 = iVar2 + 1;
          }
          thunk_FUN_10463660(param_1,&param_1);
          pFVar3 = pFStack_10;
          pcVar6 = appStrcpy_exref;
          iStack_2c = iVar7 + 1;
        }
      }
      thunk_FUN_104a16a0();
      (**(code **)(*(int *)pFVar3 + 0x58))();
      thunk_FUN_103254a0(puStack_c);
      if (iStack_14 != 0) {
        FOutputDevice::Logf(*(FOutputDevice **)GWarn_exref,(ushort *)*(FOutputDevice **)GWarn_exref)
        ;
      }
      iStack_44 = (uint)iStack_44._1_3_ << 8;
      thunk_FUN_104a1770();
      pFVar3 = pFStack_10;
    }
  }
LAB_1047796f:
  if (pFVar3 != (FArchive *)0x0) {
    (*(code *)**(undefined4 **)pFVar3)(1);
  }
  ExceptionList = pvStack_4c;
  return iStack_14;
}


// ==== 103150af thunk_FUN_1037aba0 thunk -> 1037aba0

// ==== 103150b9 FNAppendixEffect_COLOSSEUM_IDENTIFIER_BLUE::FNAppendixEffect_COLOSSEUM_IDENTIFIER_BLUE

/* public: __thiscall
   FNAppendixEffect_COLOSSEUM_IDENTIFIER_BLUE::FNAppendixEffect_COLOSSEUM_IDENTIFIER_BLUE(class
   FNAppendixEffect_COLOSSEUM_IDENTIFIER_BLUE const &) */

void __thiscall
FNAppendixEffect_COLOSSEUM_IDENTIFIER_BLUE::FNAppendixEffect_COLOSSEUM_IDENTIFIER_BLUE
          (FNAppendixEffect_COLOSSEUM_IDENTIFIER_BLUE *this,
          FNAppendixEffect_COLOSSEUM_IDENTIFIER_BLUE *param_1)

{
                    /* 0x150b9  445  ??0FNAppendixEffect_COLOSSEUM_IDENTIFIER_BLUE@@QAE@ABV0@@Z */
  *(undefined ***)this = FNAppendixEffect::vftable;
  *(undefined4 *)(this + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(this + 0xc) = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(this + 0x10) = *(undefined4 *)(param_1 + 0x10);
  *(undefined ***)this = vftable;
  return;
}


// ==== 103150be FStatGraph::FStatGraph

/* public: __thiscall FStatGraph::FStatGraph(void) */

FStatGraph * __thiscall FStatGraph::FStatGraph(FStatGraph *this)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x150be  535  ??0FStatGraph@@QAE@XZ */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_1082a3c7;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  thunk_FUN_106f3aa0();
  uStack_4 = 1;
  FArray::FArray((FArray *)(this + 0x1c));
  uStack_4._0_1_ = 3;
  FArray::FArray((FArray *)(this + 0x28));
  uStack_4 = CONCAT31(uStack_4._1_3_,5);
  FString::FString((FString *)(this + 0x54));
  *(undefined4 *)(this + 0x34) = 0x437a0000;
  *(undefined4 *)(this + 0x38) = 0x43160000;
  *(undefined4 *)this = 1;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 0x3c) = 0x42c80000;
  *(undefined4 *)(this + 0x44) = 100;
  *(undefined4 *)(this + 0x48) = 0;
  *(undefined4 *)(this + 0x40) = 0x43480000;
  this[0x50] = (FStatGraph)0x64;
  *(undefined4 *)(this + 0x4c) = 0x3ea8f5c3;
  ExceptionList = pvStack_c;
  return this;
}


// ==== 103150c3 thunk_FUN_103269d0 thunk -> 103269d0

// ==== 103150c8 thunk_FUN_10390a40 thunk -> 10390a40

// ==== 103150cd thunk_FUN_10694870 thunk -> 10694870

// ==== 103150d2 UTerrainBrushNoise::UTerrainBrushNoise

/* public: __thiscall UTerrainBrushNoise::UTerrainBrushNoise(void) */

UTerrainBrushNoise * __thiscall UTerrainBrushNoise::UTerrainBrushNoise(UTerrainBrushNoise *this)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x150d2  949  ??0UTerrainBrushNoise@@QAE@XZ */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_1082e528;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  UTerrainBrush::UTerrainBrush((UTerrainBrush *)this);
  uStack_4 = 0;
  *(undefined ***)this = vftable;
  FString::operator=((FString *)(this + 4),(ushort *)L"Noise");
  FString::operator=((FString *)(this + 0x10),(ushort *)L"NOISE");
  *(undefined4 *)(this + 0x1c) = 3;
  *(undefined4 *)(this + 0x2c) = 0;
  ExceptionList = pvStack_c;
  return this;
}


// ==== 103150d7 USubActionCameraShake::Update

/* public: virtual int __thiscall USubActionCameraShake::Update(float,class ASceneManager *) */

int __thiscall
USubActionCameraShake::Update(USubActionCameraShake *this,float param_1,ASceneManager *param_2)

{
  int iVar1;
  float *pfVar2;
  
                    /* 0x150d7  8715  ?Update@USubActionCameraShake@@UAEHMPAVASceneManager@@@Z */
  iVar1 = UMatSubAction::Update((UMatSubAction *)this,param_1,param_2);
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = (**(code **)(*(int *)this + 0x70))();
  if (iVar1 != 0) {
    pfVar2 = (float *)FRangeVector::GetRand((FRangeVector *)(this + 0x5c));
    *(float *)(param_2 + 0x49c) = *pfVar2 + *(float *)(param_2 + 0x49c);
    *(float *)(param_2 + 0x4a0) = pfVar2[1] + *(float *)(param_2 + 0x4a0);
    *(float *)(param_2 + 0x4a4) = pfVar2[2] + *(float *)(param_2 + 0x4a4);
  }
  return 1;
}


// ==== 103150e1 ULevelBase::DeleteL2VehicleInfo

/* public: void __thiscall ULevelBase::DeleteL2VehicleInfo(class AActor *) */

void __thiscall ULevelBase::DeleteL2VehicleInfo(ULevelBase *this,AActor *param_1)

{
                    /* 0x150e1  3751  ?DeleteL2VehicleInfo@ULevelBase@@QAEXPAVAActor@@@Z */
  if (param_1 != (AActor *)0x0) {
    thunk_FUN_104e9650(&param_1);
  }
  return;
}


// ==== 103150e6 AKCarWheelJoint::operator=

/* public: class AKCarWheelJoint & __thiscall AKCarWheelJoint::operator=(class AKCarWheelJoint const
   &) */

AKCarWheelJoint * __thiscall
AKCarWheelJoint::operator=(AKCarWheelJoint *this,AKCarWheelJoint *param_1)

{
                    /* 0x150e6  2166  ??4AKCarWheelJoint@@QAEAAV0@ABV0@@Z */
  AKConstraint::operator=((AKConstraint *)this,(AKConstraint *)param_1);
  *(undefined4 *)(this + 0x448) = *(undefined4 *)(param_1 + 0x448);
  *(undefined4 *)(this + 0x44c) = *(undefined4 *)(param_1 + 0x44c);
  *(undefined4 *)(this + 0x450) = *(undefined4 *)(param_1 + 0x450);
  *(undefined4 *)(this + 0x454) = *(undefined4 *)(param_1 + 0x454);
  *(uint *)(this + 0x458) =
       *(uint *)(this + 0x458) ^ (*(uint *)(param_1 + 0x458) ^ *(uint *)(this + 0x458)) & 1;
  *(undefined4 *)(this + 0x45c) = *(undefined4 *)(param_1 + 0x45c);
  *(undefined4 *)(this + 0x460) = *(undefined4 *)(param_1 + 0x460);
  *(undefined4 *)(this + 0x464) = *(undefined4 *)(param_1 + 0x464);
  *(undefined4 *)(this + 0x468) = *(undefined4 *)(param_1 + 0x468);
  *(undefined4 *)(this + 0x46c) = *(undefined4 *)(param_1 + 0x46c);
  *(undefined4 *)(this + 0x470) = *(undefined4 *)(param_1 + 0x470);
  *(undefined4 *)(this + 0x474) = *(undefined4 *)(param_1 + 0x474);
  *(undefined4 *)(this + 0x478) = *(undefined4 *)(param_1 + 0x478);
  *(undefined4 *)(this + 0x47c) = *(undefined4 *)(param_1 + 0x47c);
  return this;
}


// ==== 103150eb ULevelObject::ULevelObject

/* public: __thiscall ULevelObject::ULevelObject(class ULevelObject const &) */

ULevelObject * __thiscall ULevelObject::ULevelObject(ULevelObject *this,ULevelObject *param_1)

{
  uint uVar1;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x150eb  806  ??0ULevelObject@@QAE@ABV0@@Z */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_107f5ab9;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  UObject::UObject((UObject *)this,(UObject *)param_1);
  *(undefined ***)this = vftable;
  *(uint *)(this + 0x34) =
       *(uint *)(this + 0x34) ^ (*(uint *)(this + 0x34) ^ *(uint *)(param_1 + 0x34)) & 1;
  uVar1 = (*(uint *)(param_1 + 0x34) ^ *(uint *)(this + 0x34)) & 2 ^ *(uint *)(this + 0x34);
  *(uint *)(this + 0x34) = uVar1;
  uVar1 = (*(uint *)(param_1 + 0x34) ^ uVar1) & 4 ^ uVar1;
  *(uint *)(this + 0x34) = uVar1;
  uVar1 = (*(uint *)(param_1 + 0x34) ^ uVar1) & 8 ^ uVar1;
  *(uint *)(this + 0x34) = uVar1;
  uVar1 = (*(uint *)(param_1 + 0x34) ^ uVar1) & 0x10 ^ uVar1;
  *(uint *)(this + 0x34) = uVar1;
  uVar1 = (*(uint *)(param_1 + 0x34) ^ uVar1) & 0x20 ^ uVar1;
  *(uint *)(this + 0x34) = uVar1;
  uVar1 = (*(uint *)(param_1 + 0x34) ^ uVar1) & 0x40 ^ uVar1;
  *(uint *)(this + 0x34) = uVar1;
  uVar1 = (*(uint *)(param_1 + 0x34) ^ uVar1) & 0x80 ^ uVar1;
  *(uint *)(this + 0x34) = uVar1;
  *(uint *)(this + 0x34) = (*(uint *)(param_1 + 0x34) ^ uVar1) & 0x100 ^ uVar1;
  *(undefined4 *)(this + 0x38) = *(undefined4 *)(param_1 + 0x38);
  *(undefined4 *)(this + 0x3c) = *(undefined4 *)(param_1 + 0x3c);
  *(undefined4 *)(this + 0x40) = *(undefined4 *)(param_1 + 0x40);
  *(undefined4 *)(this + 0x44) = *(undefined4 *)(param_1 + 0x44);
  *(undefined4 *)(this + 0x48) = *(undefined4 *)(param_1 + 0x48);
  *(undefined4 *)(this + 0x4c) = *(undefined4 *)(param_1 + 0x4c);
  *(undefined4 *)(this + 0x50) = *(undefined4 *)(param_1 + 0x50);
  *(undefined4 *)(this + 0x54) = *(undefined4 *)(param_1 + 0x54);
  *(undefined4 *)(this + 0x58) = *(undefined4 *)(param_1 + 0x58);
  *(undefined4 *)(this + 0x5c) = *(undefined4 *)(param_1 + 0x5c);
  *(undefined4 *)(this + 0x60) = *(undefined4 *)(param_1 + 0x60);
  *(undefined4 *)(this + 100) = *(undefined4 *)(param_1 + 100);
  ExceptionList = pvStack_c;
  return this;
}


// ==== 103150f5 APlayerController::execLeaveVoiceChat

/* public: void __thiscall APlayerController::execLeaveVoiceChat(struct FFrame &,void * const) */

void __thiscall
APlayerController::execLeaveVoiceChat(APlayerController *this,FFrame *param_1,void *param_2)

{
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x150f5  9299  ?execLeaveVoiceChat@APlayerController@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_10826fc0;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  ExceptionList = &pvStack_10;
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  if (*(int *)(*(int *)(*(int *)(this + 0xe4) + 0x74) + 0x58) != 0) {
    (**(code **)(**(int **)(*(int *)(*(int *)(this + 0xe4) + 0x74) + 0x58) + 0xf0))();
  }
  ExceptionList = pvStack_10;
  return;
}


// ==== 103150fa UAnimNotify_AttackVoice::UAnimNotify_AttackVoice

/* public: __thiscall UAnimNotify_AttackVoice::UAnimNotify_AttackVoice(class UAnimNotify_AttackVoice
   const &) */

UAnimNotify_AttackVoice * __thiscall
UAnimNotify_AttackVoice::UAnimNotify_AttackVoice
          (UAnimNotify_AttackVoice *this,UAnimNotify_AttackVoice *param_1)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x150fa  655  ??0UAnimNotify_AttackVoice@@QAE@ABV0@@Z */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_107f4cb8;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  UAnimNotify::UAnimNotify((UAnimNotify *)this,(UAnimNotify *)param_1);
  *(undefined ***)this = vftable;
  *(undefined4 *)(this + 0x38) = *(undefined4 *)(param_1 + 0x38);
  *(undefined4 *)(this + 0x3c) = *(undefined4 *)(param_1 + 0x3c);
  *(undefined4 *)(this + 0x40) = *(undefined4 *)(param_1 + 0x40);
  ExceptionList = pvStack_c;
  return this;
}


// ==== 10315109 thunk_FUN_106f6660 thunk -> 106f6660

// ==== 1031510e AScout::HurtByVolume

/* public: virtual int __thiscall AScout::HurtByVolume(class AActor *) */

int __thiscall AScout::HurtByVolume(AScout *this,AActor *param_1)

{
                    /* 0x1510e  5378  ?HurtByVolume@AScout@@UAEHPAVAActor@@@Z */
  return 0;
}


// ==== 1031511d FRawColorStream::operator=

/* public: class FRawColorStream & __thiscall FRawColorStream::operator=(class FRawColorStream const
   &) */

FRawColorStream * __thiscall
FRawColorStream::operator=(FRawColorStream *this,FRawColorStream *param_1)

{
                    /* 0x1511d  2376  ??4FRawColorStream@@QAEAAV0@ABV0@@Z */
  *(undefined4 *)(this + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
  thunk_FUN_10391740(param_1 + 0xc);
  *(undefined4 *)(this + 0x18) = *(undefined4 *)(param_1 + 0x18);
  return this;
}


// ==== 10315122 UDummyAudio::UnregisterSound

/* public: virtual void __thiscall UDummyAudio::UnregisterSound(class USound *) */

void __thiscall UDummyAudio::UnregisterSound(UDummyAudio *this,USound *param_1)

{
                    /* 0x15122  8677  ?UnregisterSound@UDummyAudio@@UAEXPAVUSound@@@Z */
  return;
}


// ==== 1031512c APawn::GetTurnAnimName

/* public: class FName __thiscall APawn::GetTurnAnimName(void) */

void __thiscall APawn::GetTurnAnimName(APawn *this)

{
  undefined4 *in_stack_00000004;
  
                    /* 0x1512c  5258  ?GetTurnAnimName@APawn@@QAE?AVFName@@XZ */
  *in_stack_00000004 = *(undefined4 *)(this + (uint)(byte)this[0x71d] * 4 + 0x78c);
  return;
}


// ==== 10315131 UNetworkHandler::RequestSEKCustom

/* public: virtual void __thiscall UNetworkHandler::RequestSEKCustom(class L2ParamStack &) */

void __thiscall UNetworkHandler::RequestSEKCustom(UNetworkHandler *this,L2ParamStack *param_1)

{
  void *pvVar1;
  void *pvVar2;
  
                    /* 0x15131  7547  ?RequestSEKCustom@UNetworkHandler@@UAEXAAVL2ParamStack@@@Z */
  pvVar1 = L2ParamStack::Top(param_1);
  pvVar2 = L2ParamStack::Top(param_1);
  (**(code **)(**(int **)(this + 0x48) + 0x68))
            (*(int **)(this + 0x48),&DAT_1087fb50,0x49,pvVar1,pvVar2);
  FOutputDevice::Logf(*(FOutputDevice **)GNetworkLog_exref,
                      (ushort *)*(FOutputDevice **)GNetworkLog_exref);
  return;
}


// ==== 10315136 thunk_FUN_105d0c70 thunk -> 105d0c70

// ==== 10315140 UMeshInstance::SetMesh

/* public: virtual void __thiscall UMeshInstance::SetMesh(class UMesh *) */

void __thiscall UMeshInstance::SetMesh(UMeshInstance *this,UMesh *param_1)

{
                    /* 0x15140  7921  ?SetMesh@UMeshInstance@@UAEXPAVUMesh@@@Z */
  return;
}


// ==== 10315145 FFadeColorMaterialInfo::operator=

/* public: struct FFadeColorMaterialInfo & __thiscall FFadeColorMaterialInfo::operator=(struct
   FFadeColorMaterialInfo const &) */

FFadeColorMaterialInfo * __thiscall
FFadeColorMaterialInfo::operator=(FFadeColorMaterialInfo *this,FFadeColorMaterialInfo *param_1)

{
                    /* 0x15145  2279  ??4FFadeColorMaterialInfo@@QAEAAU0@ABU0@@Z */
  *(undefined4 *)this = *(undefined4 *)param_1;
  *(undefined4 *)(this + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(this + 0xc) = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(this + 0x10) = *(undefined4 *)(param_1 + 0x10);
  return this;
}


// ==== 1031514a UGameEngine::AddInventoryItem

/* public: virtual void __thiscall UGameEngine::AddInventoryItem(struct ItemInfo &) */

void __thiscall UGameEngine::AddInventoryItem(UGameEngine *this,ItemInfo *param_1)

{
                    /* 0x1514a  3279  ?AddInventoryItem@UGameEngine@@UAEXAAUItemInfo@@@Z */
                    /* WARNING: Could not recover jumptable at 0x1048950b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(this + 0x68) + 0xf8))();
  return;
}


// ==== 10315154 thunk_FUN_103b4280 thunk -> 103b4280

// ==== 10315159 UTexScaler::StaticClass

/* public: static class UClass * __cdecl UTexScaler::StaticClass(void) */

UClass * __cdecl UTexScaler::StaticClass(void)

{
                    /* 0x15159  8493  ?StaticClass@UTexScaler@@SAPAVUClass@@XZ */
  return &PrivateStaticClass;
}


// ==== 1031515e AAmmunition::InternalConstructor

/* public: static void __cdecl AAmmunition::InternalConstructor(void *) */

void __cdecl AAmmunition::InternalConstructor(void *param_1)

{
                    /* 0x1515e  5508  ?InternalConstructor@AAmmunition@@SAXPAX@Z */
  if (param_1 != (void *)0x0) {
    AAmmunition(param_1);
    return;
  }
  return;
}


// ==== 1031516d FStaticLightMapTexture::GetUTexture

/* public: virtual class UTexture * __thiscall FStaticLightMapTexture::GetUTexture(void) */

UTexture * __thiscall FStaticLightMapTexture::GetUTexture(FStaticLightMapTexture *this)

{
                    /* 0x1516d  5268  ?GetUTexture@FStaticLightMapTexture@@UAEPAVUTexture@@XZ */
  return (UTexture *)0x0;
}


// ==== 10315172 FPlayerResponseLine::operator=

/* public: struct FPlayerResponseLine & __thiscall FPlayerResponseLine::operator=(struct
   FPlayerResponseLine const &) */

FPlayerResponseLine * __thiscall
FPlayerResponseLine::operator=(FPlayerResponseLine *this,FPlayerResponseLine *param_1)

{
                    /* 0x15172  2370  ??4FPlayerResponseLine@@QAEAAU0@ABU0@@Z */
  *(undefined4 *)this = *(undefined4 *)param_1;
  *(undefined4 *)(this + 4) = *(undefined4 *)(param_1 + 4);
  FString::operator=((FString *)(this + 8),(FString *)(param_1 + 8));
  *(undefined4 *)(this + 0x14) = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)(this + 0x18) = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)(this + 0x1c) = *(undefined4 *)(param_1 + 0x1c);
  thunk_FUN_10393610(param_1 + 0x20);
  return this;
}


// ==== 10315177 AActor::operator=

/* public: class AActor & __thiscall AActor::operator=(class AActor const &) */

AActor * __thiscall AActor::operator=(AActor *this,AActor *param_1)

{
  uint uVar1;
  int iVar2;
  AActor *pAVar3;
  AActor *pAVar4;
  
                    /* 0x15177  2123  ??4AActor@@QAEAAV0@ABV0@@Z */
  UObject::operator=((UObject *)this,(UObject *)param_1);
  this[0x34] = param_1[0x34];
  this[0x35] = param_1[0x35];
  *(undefined4 *)(this + 0x38) = *(undefined4 *)(param_1 + 0x38);
  *(undefined4 *)(this + 0x3c) = *(undefined4 *)(param_1 + 0x3c);
  *(undefined4 *)(this + 0x40) = *(undefined4 *)(param_1 + 0x40);
  *(undefined4 *)(this + 0x44) = *(undefined4 *)(param_1 + 0x44);
  *(undefined4 *)(this + 0x48) = *(undefined4 *)(param_1 + 0x48);
  *(undefined4 *)(this + 0x4c) = *(undefined4 *)(param_1 + 0x4c);
  this[0x50] = param_1[0x50];
  *(uint *)(this + 0x54) =
       *(uint *)(this + 0x54) ^ (*(uint *)(param_1 + 0x54) ^ *(uint *)(this + 0x54)) & 1;
  *(undefined4 *)(this + 0x58) = *(undefined4 *)(param_1 + 0x58);
  *(uint *)(this + 0x5c) =
       *(uint *)(this + 0x5c) ^ (*(uint *)(this + 0x5c) ^ *(uint *)(param_1 + 0x5c)) & 1;
  uVar1 = (*(uint *)(param_1 + 0x5c) ^ *(uint *)(this + 0x5c)) & 2 ^ *(uint *)(this + 0x5c);
  *(uint *)(this + 0x5c) = uVar1;
  uVar1 = (*(uint *)(param_1 + 0x5c) ^ uVar1) & 4 ^ uVar1;
  *(uint *)(this + 0x5c) = uVar1;
  uVar1 = (*(uint *)(param_1 + 0x5c) ^ uVar1) & 8 ^ uVar1;
  *(uint *)(this + 0x5c) = uVar1;
  uVar1 = (*(uint *)(param_1 + 0x5c) ^ uVar1) & 0x10 ^ uVar1;
  *(uint *)(this + 0x5c) = uVar1;
  uVar1 = (*(uint *)(param_1 + 0x5c) ^ uVar1) & 0x20 ^ uVar1;
  *(uint *)(this + 0x5c) = uVar1;
  uVar1 = (*(uint *)(param_1 + 0x5c) ^ uVar1) & 0x40 ^ uVar1;
  *(uint *)(this + 0x5c) = uVar1;
  uVar1 = (*(uint *)(param_1 + 0x5c) ^ uVar1) & 0x80 ^ uVar1;
  *(uint *)(this + 0x5c) = uVar1;
  uVar1 = (*(uint *)(param_1 + 0x5c) ^ uVar1) & 0x100 ^ uVar1;
  *(uint *)(this + 0x5c) = uVar1;
  uVar1 = (*(uint *)(param_1 + 0x5c) ^ uVar1) & 0x200 ^ uVar1;
  *(uint *)(this + 0x5c) = uVar1;
  uVar1 = (*(uint *)(param_1 + 0x5c) ^ uVar1) & 0x400 ^ uVar1;
  *(uint *)(this + 0x5c) = uVar1;
  *(uint *)(this + 0x5c) = (*(uint *)(param_1 + 0x5c) ^ uVar1) & 0x800 ^ uVar1;
  *(undefined4 *)(this + 0x60) = *(undefined4 *)(param_1 + 0x60);
  *(uint *)(this + 100) =
       *(uint *)(this + 100) ^ (*(uint *)(this + 100) ^ *(uint *)(param_1 + 100)) & 1;
  uVar1 = (*(uint *)(param_1 + 100) ^ *(uint *)(this + 100)) & 2 ^ *(uint *)(this + 100);
  *(uint *)(this + 100) = uVar1;
  uVar1 = (*(uint *)(param_1 + 100) ^ uVar1) & 4 ^ uVar1;
  *(uint *)(this + 100) = uVar1;
  uVar1 = (*(uint *)(param_1 + 100) ^ uVar1) & 8 ^ uVar1;
  *(uint *)(this + 100) = uVar1;
  uVar1 = (*(uint *)(param_1 + 100) ^ uVar1) & 0x10 ^ uVar1;
  *(uint *)(this + 100) = uVar1;
  uVar1 = (*(uint *)(param_1 + 100) ^ uVar1) & 0x20 ^ uVar1;
  *(uint *)(this + 100) = uVar1;
  uVar1 = (*(uint *)(param_1 + 100) ^ uVar1) & 0x40 ^ uVar1;
  *(uint *)(this + 100) = uVar1;
  uVar1 = (*(uint *)(param_1 + 100) ^ uVar1) & 0x80 ^ uVar1;
  *(uint *)(this + 100) = uVar1;
  uVar1 = (*(uint *)(param_1 + 100) ^ uVar1) & 0x100 ^ uVar1;
  *(uint *)(this + 100) = uVar1;
  uVar1 = (*(uint *)(param_1 + 100) ^ uVar1) & 0x200 ^ uVar1;
  *(uint *)(this + 100) = uVar1;
  uVar1 = (*(uint *)(param_1 + 100) ^ uVar1) & 0x400 ^ uVar1;
  *(uint *)(this + 100) = uVar1;
  uVar1 = (*(uint *)(param_1 + 100) ^ uVar1) & 0x800 ^ uVar1;
  *(uint *)(this + 100) = uVar1;
  uVar1 = (*(uint *)(param_1 + 100) ^ uVar1) & 0x1000 ^ uVar1;
  *(uint *)(this + 100) = uVar1;
  uVar1 = (*(uint *)(param_1 + 100) ^ uVar1) & 0x2000 ^ uVar1;
  *(uint *)(this + 100) = uVar1;
  uVar1 = (*(uint *)(param_1 + 100) ^ uVar1) & 0x4000 ^ uVar1;
  *(uint *)(this + 100) = uVar1;
  uVar1 = (*(uint *)(param_1 + 100) ^ uVar1) & 0x8000 ^ uVar1;
  *(uint *)(this + 100) = uVar1;
  uVar1 = (*(uint *)(param_1 + 100) ^ uVar1) & 0x10000 ^ uVar1;
  *(uint *)(this + 100) = uVar1;
  uVar1 = (*(uint *)(param_1 + 100) ^ uVar1) & 0x20000 ^ uVar1;
  *(uint *)(this + 100) = uVar1;
  uVar1 = (*(uint *)(param_1 + 100) ^ uVar1) & 0x40000 ^ uVar1;
  *(uint *)(this + 100) = uVar1;
  uVar1 = (*(uint *)(param_1 + 100) ^ uVar1) & 0x80000 ^ uVar1;
  *(uint *)(this + 100) = uVar1;
  *(uint *)(this + 100) = (*(uint *)(param_1 + 100) ^ uVar1) & 0x100000 ^ uVar1;
  *(undefined4 *)(this + 0x68) = *(undefined4 *)(param_1 + 0x68);
  *(undefined4 *)(this + 0x6c) = *(undefined4 *)(param_1 + 0x6c);
  *(undefined4 *)(this + 0x70) = *(undefined4 *)(param_1 + 0x70);
  *(uint *)(this + 0x74) =
       *(uint *)(this + 0x74) ^ (*(uint *)(this + 0x74) ^ *(uint *)(param_1 + 0x74)) & 1;
  uVar1 = (*(uint *)(param_1 + 0x74) ^ *(uint *)(this + 0x74)) & 2 ^ *(uint *)(this + 0x74);
  *(uint *)(this + 0x74) = uVar1;
  uVar1 = (*(uint *)(param_1 + 0x74) ^ uVar1) & 4 ^ uVar1;
  *(uint *)(this + 0x74) = uVar1;
  uVar1 = (*(uint *)(param_1 + 0x74) ^ uVar1) & 8 ^ uVar1;
  *(uint *)(this + 0x74) = uVar1;
  uVar1 = (*(uint *)(param_1 + 0x74) ^ uVar1) & 0x10 ^ uVar1;
  *(uint *)(this + 0x74) = uVar1;
  uVar1 = (*(uint *)(param_1 + 0x74) ^ uVar1) & 0x20 ^ uVar1;
  *(uint *)(this + 0x74) = uVar1;
  uVar1 = (*(uint *)(param_1 + 0x74) ^ uVar1) & 0x40 ^ uVar1;
  *(uint *)(this + 0x74) = uVar1;
  uVar1 = (*(uint *)(param_1 + 0x74) ^ uVar1) & 0x80 ^ uVar1;
  *(uint *)(this + 0x74) = uVar1;
  uVar1 = (*(uint *)(param_1 + 0x74) ^ uVar1) & 0x100 ^ uVar1;
  *(uint *)(this + 0x74) = uVar1;
  uVar1 = (*(uint *)(param_1 + 0x74) ^ uVar1) & 0x200 ^ uVar1;
  *(uint *)(this + 0x74) = uVar1;
  uVar1 = (*(uint *)(param_1 + 0x74) ^ uVar1) & 0x400 ^ uVar1;
  *(uint *)(this + 0x74) = uVar1;
  uVar1 = (*(uint *)(param_1 + 0x74) ^ uVar1) & 0x800 ^ uVar1;
  *(uint *)(this + 0x74) = uVar1;
  uVar1 = (*(uint *)(param_1 + 0x74) ^ uVar1) & 0x1000 ^ uVar1;
  *(uint *)(this + 0x74) = uVar1;
  uVar1 = (*(uint *)(param_1 + 0x74) ^ uVar1) & 0x2000 ^ uVar1;
  *(uint *)(this + 0x74) = uVar1;
  uVar1 = (*(uint *)(param_1 + 0x74) ^ uVar1) & 0x4000 ^ uVar1;
  *(uint *)(this + 0x74) = uVar1;
  uVar1 = (*(uint *)(param_1 + 0x74) ^ uVar1) & 0x8000 ^ uVar1;
  *(uint *)(this + 0x74) = uVar1;
  uVar1 = (*(uint *)(param_1 + 0x74) ^ uVar1) & 0x10000 ^ uVar1;
  *(uint *)(this + 0x74) = uVar1;
  uVar1 = (*(uint *)(param_1 + 0x74) ^ uVar1) & 0x20000 ^ uVar1;
  *(uint *)(this + 0x74) = uVar1;
  uVar1 = (*(uint *)(param_1 + 0x74) ^ uVar1) & 0x40000 ^ uVar1;
  *(uint *)(this + 0x74) = uVar1;
  uVar1 = (*(uint *)(param_1 + 0x74) ^ uVar1) & 0x80000 ^ uVar1;
  *(uint *)(this + 0x74) = uVar1;
  uVar1 = (*(uint *)(param_1 + 0x74) ^ uVar1) & 0x100000 ^ uVar1;
  *(uint *)(this + 0x74) = uVar1;
  uVar1 = (*(uint *)(param_1 + 0x74) ^ uVar1) & 0x200000 ^ uVar1;
  *(uint *)(this + 0x74) = uVar1;
  *(uint *)(this + 0x74) = (*(uint *)(param_1 + 0x74) ^ uVar1) & 0x400000 ^ uVar1;
  *(undefined4 *)(this + 0x78) = *(undefined4 *)(param_1 + 0x78);
  *(undefined4 *)(this + 0x7c) = *(undefined4 *)(param_1 + 0x7c);
  *(undefined4 *)(this + 0x80) = *(undefined4 *)(param_1 + 0x80);
  *(undefined4 *)(this + 0x84) = *(undefined4 *)(param_1 + 0x84);
  *(uint *)(this + 0x88) =
       *(uint *)(this + 0x88) ^ (*(uint *)(this + 0x88) ^ *(uint *)(param_1 + 0x88)) & 1;
  uVar1 = (*(uint *)(param_1 + 0x88) ^ *(uint *)(this + 0x88)) & 2 ^ *(uint *)(this + 0x88);
  *(uint *)(this + 0x88) = uVar1;
  uVar1 = (*(uint *)(param_1 + 0x88) ^ uVar1) & 4 ^ uVar1;
  *(uint *)(this + 0x88) = uVar1;
  *(uint *)(this + 0x88) = (*(uint *)(param_1 + 0x88) ^ uVar1) & 8 ^ uVar1;
  *(undefined4 *)(this + 0x8c) = *(undefined4 *)(param_1 + 0x8c);
  *(undefined4 *)(this + 0x90) = *(undefined4 *)(param_1 + 0x90);
  *(undefined4 *)(this + 0x94) = *(undefined4 *)(param_1 + 0x94);
  *(uint *)(this + 0x98) =
       *(uint *)(this + 0x98) ^ (*(uint *)(this + 0x98) ^ *(uint *)(param_1 + 0x98)) & 1;
  uVar1 = (*(uint *)(param_1 + 0x98) ^ *(uint *)(this + 0x98)) & 2 ^ *(uint *)(this + 0x98);
  *(uint *)(this + 0x98) = uVar1;
  uVar1 = (*(uint *)(param_1 + 0x98) ^ uVar1) & 4 ^ uVar1;
  *(uint *)(this + 0x98) = uVar1;
  *(uint *)(this + 0x98) = (*(uint *)(param_1 + 0x98) ^ uVar1) & 8 ^ uVar1;
  this[0x9c] = param_1[0x9c];
  *(undefined4 *)(this + 0xa0) = *(undefined4 *)(param_1 + 0xa0);
  *(undefined4 *)(this + 0xa4) = *(undefined4 *)(param_1 + 0xa4);
  this[0xa8] = param_1[0xa8];
  *(undefined4 *)(this + 0xac) = *(undefined4 *)(param_1 + 0xac);
  *(undefined4 *)(this + 0xb0) = *(undefined4 *)(param_1 + 0xb0);
  *(undefined4 *)(this + 0xb4) = *(undefined4 *)(param_1 + 0xb4);
  *(undefined4 *)(this + 0xb8) = *(undefined4 *)(param_1 + 0xb8);
  *(undefined4 *)(this + 0xbc) = *(undefined4 *)(param_1 + 0xbc);
  this[0xc0] = param_1[0xc0];
  this[0xc1] = param_1[0xc1];
  this[0xc2] = param_1[0xc2];
  *(undefined4 *)(this + 0xc4) = *(undefined4 *)(param_1 + 0xc4);
  *(undefined4 *)(this + 200) = *(undefined4 *)(param_1 + 200);
  *(undefined4 *)(this + 0xcc) = *(undefined4 *)(param_1 + 0xcc);
  *(undefined4 *)(this + 0xd0) = *(undefined4 *)(param_1 + 0xd0);
  *(undefined4 *)(this + 0xd4) = *(undefined4 *)(param_1 + 0xd4);
  *(undefined4 *)(this + 0xd8) = *(undefined4 *)(param_1 + 0xd8);
  this[0xdc] = param_1[0xdc];
  *(undefined4 *)(this + 0xe0) = *(undefined4 *)(param_1 + 0xe0);
  *(undefined4 *)(this + 0xe4) = *(undefined4 *)(param_1 + 0xe4);
  *(undefined4 *)(this + 0xe8) = *(undefined4 *)(param_1 + 0xe8);
  *(undefined4 *)(this + 0xec) = *(undefined4 *)(param_1 + 0xec);
  *(undefined4 *)(this + 0xf0) = *(undefined4 *)(param_1 + 0xf0);
  *(undefined4 *)(this + 0xf4) = *(undefined4 *)(param_1 + 0xf4);
  *(undefined4 *)(this + 0xf8) = *(undefined4 *)(param_1 + 0xf8);
  *(undefined4 *)(this + 0xfc) = *(undefined4 *)(param_1 + 0xfc);
  *(undefined4 *)(this + 0x100) = *(undefined4 *)(param_1 + 0x100);
  *(undefined4 *)(this + 0x104) = *(undefined4 *)(param_1 + 0x104);
  *(undefined4 *)(this + 0x108) = *(undefined4 *)(param_1 + 0x108);
  *(undefined4 *)(this + 0x10c) = *(undefined4 *)(param_1 + 0x10c);
  thunk_FUN_1032bcd0(param_1 + 0x110);
  *(undefined4 *)(this + 0x11c) = *(undefined4 *)(param_1 + 0x11c);
  thunk_FUN_10383e20(param_1 + 0x120);
  *(undefined4 *)(this + 300) = *(undefined4 *)(param_1 + 300);
  *(undefined4 *)(this + 0x130) = *(undefined4 *)(param_1 + 0x130);
  *(undefined4 *)(this + 0x134) = *(undefined4 *)(param_1 + 0x134);
  *(undefined4 *)(this + 0x138) = *(undefined4 *)(param_1 + 0x138);
  *(uint *)(this + 0x13c) =
       *(uint *)(this + 0x13c) ^ (*(uint *)(param_1 + 0x13c) ^ *(uint *)(this + 0x13c)) & 1;
  this[0x140] = param_1[0x140];
  *(undefined4 *)(this + 0x144) = *(undefined4 *)(param_1 + 0x144);
  *(undefined4 *)(this + 0x148) = *(undefined4 *)(param_1 + 0x148);
  *(undefined4 *)(this + 0x14c) = *(undefined4 *)(param_1 + 0x14c);
  thunk_FUN_1032bfc0(param_1 + 0x150);
  thunk_FUN_1032bfc0(param_1 + 0x15c);
  thunk_FUN_1032bcd0(param_1 + 0x168);
  pAVar3 = param_1 + 0x174;
  pAVar4 = this + 0x174;
  for (iVar2 = 7; iVar2 != 0; iVar2 = iVar2 + -1) {
    *(undefined4 *)pAVar4 = *(undefined4 *)pAVar3;
    pAVar3 = pAVar3 + 4;
    pAVar4 = pAVar4 + 4;
  }
  *(undefined4 *)(this + 400) = *(undefined4 *)(param_1 + 400);
  *(undefined4 *)(this + 0x194) = *(undefined4 *)(param_1 + 0x194);
  *(undefined4 *)(this + 0x198) = *(undefined4 *)(param_1 + 0x198);
  *(undefined4 *)(this + 0x19c) = *(undefined4 *)(param_1 + 0x19c);
  *(undefined4 *)(this + 0x1a0) = *(undefined4 *)(param_1 + 0x1a0);
  *(undefined4 *)(this + 0x1a4) = *(undefined4 *)(param_1 + 0x1a4);
  *(undefined4 *)(this + 0x1a8) = *(undefined4 *)(param_1 + 0x1a8);
  *(undefined4 *)(this + 0x1ac) = *(undefined4 *)(param_1 + 0x1ac);
  *(undefined4 *)(this + 0x1b0) = *(undefined4 *)(param_1 + 0x1b0);
  *(undefined4 *)(this + 0x1b4) = *(undefined4 *)(param_1 + 0x1b4);
  *(undefined4 *)(this + 0x1b8) = *(undefined4 *)(param_1 + 0x1b8);
  *(undefined4 *)(this + 0x1bc) = *(undefined4 *)(param_1 + 0x1bc);
  *(undefined4 *)(this + 0x1c0) = *(undefined4 *)(param_1 + 0x1c0);
  *(undefined4 *)(this + 0x1c4) = *(undefined4 *)(param_1 + 0x1c4);
  *(undefined4 *)(this + 0x1c8) = *(undefined4 *)(param_1 + 0x1c8);
  *(undefined4 *)(this + 0x1cc) = *(undefined4 *)(param_1 + 0x1cc);
  *(undefined4 *)(this + 0x1d0) = *(undefined4 *)(param_1 + 0x1d0);
  *(undefined4 *)(this + 0x1d4) = *(undefined4 *)(param_1 + 0x1d4);
  *(undefined4 *)(this + 0x1d8) = *(undefined4 *)(param_1 + 0x1d8);
  *(undefined4 *)(this + 0x1dc) = *(undefined4 *)(param_1 + 0x1dc);
  *(undefined4 *)(this + 0x1e0) = *(undefined4 *)(param_1 + 0x1e0);
  *(undefined4 *)(this + 0x1e4) = *(undefined4 *)(param_1 + 0x1e4);
  *(undefined4 *)(this + 0x1e8) = *(undefined4 *)(param_1 + 0x1e8);
  *(undefined4 *)(this + 0x1ec) = *(undefined4 *)(param_1 + 0x1ec);
  thunk_FUN_1032bfc0(param_1 + 0x1f0);
  *(undefined4 *)(this + 0x1fc) = *(undefined4 *)(param_1 + 0x1fc);
  *(undefined4 *)(this + 0x200) = *(undefined4 *)(param_1 + 0x200);
  *(undefined4 *)(this + 0x204) = *(undefined4 *)(param_1 + 0x204);
  *(undefined4 *)(this + 0x208) = *(undefined4 *)(param_1 + 0x208);
  *(undefined4 *)(this + 0x20c) = *(undefined4 *)(param_1 + 0x20c);
  *(undefined4 *)(this + 0x210) = *(undefined4 *)(param_1 + 0x210);
  *(uint *)(this + 0x214) =
       *(uint *)(this + 0x214) ^ (*(uint *)(param_1 + 0x214) ^ *(uint *)(this + 0x214)) & 1;
  pAVar3 = param_1 + 0x218;
  pAVar4 = this + 0x218;
  for (iVar2 = 0x10; iVar2 != 0; iVar2 = iVar2 + -1) {
    *(undefined4 *)pAVar4 = *(undefined4 *)pAVar3;
    pAVar3 = pAVar3 + 4;
    pAVar4 = pAVar4 + 4;
  }
  thunk_FUN_10393250(param_1 + 600);
  thunk_FUN_10390350(param_1 + 0x264);
  *(undefined4 *)(this + 0x270) = *(undefined4 *)(param_1 + 0x270);
  *(undefined4 *)(this + 0x274) = *(undefined4 *)(param_1 + 0x274);
  *(undefined4 *)(this + 0x278) = *(undefined4 *)(param_1 + 0x278);
  *(undefined4 *)(this + 0x27c) = *(undefined4 *)(param_1 + 0x27c);
  *(undefined4 *)(this + 0x280) = *(undefined4 *)(param_1 + 0x280);
  *(undefined4 *)(this + 0x284) = *(undefined4 *)(param_1 + 0x284);
  *(undefined4 *)(this + 0x288) = *(undefined4 *)(param_1 + 0x288);
  *(undefined4 *)(this + 0x28c) = *(undefined4 *)(param_1 + 0x28c);
  *(undefined4 *)(this + 0x290) = *(undefined4 *)(param_1 + 0x290);
  *(undefined4 *)(this + 0x294) = *(undefined4 *)(param_1 + 0x294);
  thunk_FUN_103932e0(param_1 + 0x298);
  *(undefined4 *)(this + 0x2a4) = *(undefined4 *)(param_1 + 0x2a4);
  *(undefined4 *)(this + 0x2a8) = *(undefined4 *)(param_1 + 0x2a8);
  *(undefined4 *)(this + 0x2ac) = *(undefined4 *)(param_1 + 0x2ac);
  *(undefined4 *)(this + 0x2b0) = *(undefined4 *)(param_1 + 0x2b0);
  this[0x2b4] = param_1[0x2b4];
  this[0x2b5] = param_1[0x2b5];
  *(undefined4 *)(this + 0x2b8) = *(undefined4 *)(param_1 + 0x2b8);
  *(undefined4 *)(this + 700) = *(undefined4 *)(param_1 + 700);
  *(undefined4 *)(this + 0x2c0) = *(undefined4 *)(param_1 + 0x2c0);
  *(undefined4 *)(this + 0x2c4) = *(undefined4 *)(param_1 + 0x2c4);
  *(undefined4 *)(this + 0x2c8) = *(undefined4 *)(param_1 + 0x2c8);
  *(undefined4 *)(this + 0x2cc) = *(undefined4 *)(param_1 + 0x2cc);
  *(undefined4 *)(this + 0x2d0) = *(undefined4 *)(param_1 + 0x2d0);
  *(undefined4 *)(this + 0x2d4) = *(undefined4 *)(param_1 + 0x2d4);
  *(undefined4 *)(this + 0x2d8) = *(undefined4 *)(param_1 + 0x2d8);
  *(uint *)(this + 0x2dc) =
       *(uint *)(this + 0x2dc) ^ (*(uint *)(param_1 + 0x2dc) ^ *(uint *)(this + 0x2dc)) & 1;
  this[0x2e0] = param_1[0x2e0];
  *(uint *)(this + 0x2e4) =
       *(uint *)(this + 0x2e4) ^ (*(uint *)(this + 0x2e4) ^ *(uint *)(param_1 + 0x2e4)) & 1;
  uVar1 = (*(uint *)(param_1 + 0x2e4) ^ *(uint *)(this + 0x2e4)) & 2 ^ *(uint *)(this + 0x2e4);
  *(uint *)(this + 0x2e4) = uVar1;
  uVar1 = (*(uint *)(param_1 + 0x2e4) ^ uVar1) & 4 ^ uVar1;
  *(uint *)(this + 0x2e4) = uVar1;
  uVar1 = (*(uint *)(param_1 + 0x2e4) ^ uVar1) & 8 ^ uVar1;
  *(uint *)(this + 0x2e4) = uVar1;
  uVar1 = (*(uint *)(param_1 + 0x2e4) ^ uVar1) & 0x10 ^ uVar1;
  *(uint *)(this + 0x2e4) = uVar1;
  uVar1 = (*(uint *)(param_1 + 0x2e4) ^ uVar1) & 0x20 ^ uVar1;
  *(uint *)(this + 0x2e4) = uVar1;
  uVar1 = (*(uint *)(param_1 + 0x2e4) ^ uVar1) & 0x40 ^ uVar1;
  *(uint *)(this + 0x2e4) = uVar1;
  uVar1 = (*(uint *)(param_1 + 0x2e4) ^ uVar1) & 0x80 ^ uVar1;
  *(uint *)(this + 0x2e4) = uVar1;
  uVar1 = (*(uint *)(param_1 + 0x2e4) ^ uVar1) & 0x100 ^ uVar1;
  *(uint *)(this + 0x2e4) = uVar1;
  uVar1 = (*(uint *)(param_1 + 0x2e4) ^ uVar1) & 0x200 ^ uVar1;
  *(uint *)(this + 0x2e4) = uVar1;
  uVar1 = (*(uint *)(param_1 + 0x2e4) ^ uVar1) & 0x400 ^ uVar1;
  *(uint *)(this + 0x2e4) = uVar1;
  uVar1 = (*(uint *)(param_1 + 0x2e4) ^ uVar1) & 0x800 ^ uVar1;
  *(uint *)(this + 0x2e4) = uVar1;
  uVar1 = (*(uint *)(param_1 + 0x2e4) ^ uVar1) & 0x1000 ^ uVar1;
  *(uint *)(this + 0x2e4) = uVar1;
  uVar1 = (*(uint *)(param_1 + 0x2e4) ^ uVar1) & 0x2000 ^ uVar1;
  *(uint *)(this + 0x2e4) = uVar1;
  uVar1 = (*(uint *)(param_1 + 0x2e4) ^ uVar1) & 0x4000 ^ uVar1;
  *(uint *)(this + 0x2e4) = uVar1;
  uVar1 = (*(uint *)(param_1 + 0x2e4) ^ uVar1) & 0x8000 ^ uVar1;
  *(uint *)(this + 0x2e4) = uVar1;
  uVar1 = (*(uint *)(param_1 + 0x2e4) ^ uVar1) & 0x10000 ^ uVar1;
  *(uint *)(this + 0x2e4) = uVar1;
  uVar1 = (*(uint *)(param_1 + 0x2e4) ^ uVar1) & 0x20000 ^ uVar1;
  *(uint *)(this + 0x2e4) = uVar1;
  uVar1 = (*(uint *)(param_1 + 0x2e4) ^ uVar1) & 0x40000 ^ uVar1;
  *(uint *)(this + 0x2e4) = uVar1;
  uVar1 = (*(uint *)(param_1 + 0x2e4) ^ uVar1) & 0x80000 ^ uVar1;
  *(uint *)(this + 0x2e4) = uVar1;
  *(uint *)(this + 0x2e4) = (*(uint *)(param_1 + 0x2e4) ^ uVar1) & 0x100000 ^ uVar1;
  *(undefined4 *)(this + 0x2e8) = *(undefined4 *)(param_1 + 0x2e8);
  *(undefined4 *)(this + 0x2ec) = *(undefined4 *)(param_1 + 0x2ec);
  *(undefined4 *)(this + 0x2f0) = *(undefined4 *)(param_1 + 0x2f0);
  *(undefined4 *)(this + 0x2f4) = *(undefined4 *)(param_1 + 0x2f4);
  *(uint *)(this + 0x2f8) =
       *(uint *)(this + 0x2f8) ^ (*(uint *)(this + 0x2f8) ^ *(uint *)(param_1 + 0x2f8)) & 1;
  *(uint *)(this + 0x2f8) =
       *(uint *)(this + 0x2f8) ^ (*(uint *)(this + 0x2f8) ^ *(uint *)(param_1 + 0x2f8)) & 2;
  uVar1 = (*(uint *)(param_1 + 0x2f8) ^ *(uint *)(this + 0x2f8)) & 4 ^ *(uint *)(this + 0x2f8);
  *(uint *)(this + 0x2f8) = uVar1;
  uVar1 = (*(uint *)(param_1 + 0x2f8) ^ uVar1) & 8 ^ uVar1;
  *(uint *)(this + 0x2f8) = uVar1;
  uVar1 = (*(uint *)(param_1 + 0x2f8) ^ uVar1) & 0x10 ^ uVar1;
  *(uint *)(this + 0x2f8) = uVar1;
  uVar1 = (*(uint *)(param_1 + 0x2f8) ^ uVar1) & 0x20 ^ uVar1;
  *(uint *)(this + 0x2f8) = uVar1;
  uVar1 = (*(uint *)(param_1 + 0x2f8) ^ uVar1) & 0x40 ^ uVar1;
  *(uint *)(this + 0x2f8) = uVar1;
  uVar1 = (*(uint *)(param_1 + 0x2f8) ^ uVar1) & 0x80 ^ uVar1;
  *(uint *)(this + 0x2f8) = uVar1;
  uVar1 = (*(uint *)(param_1 + 0x2f8) ^ uVar1) & 0x100 ^ uVar1;
  *(uint *)(this + 0x2f8) = uVar1;
  uVar1 = (*(uint *)(param_1 + 0x2f8) ^ uVar1) & 0x200 ^ uVar1;
  *(uint *)(this + 0x2f8) = uVar1;
  uVar1 = (*(uint *)(param_1 + 0x2f8) ^ uVar1) & 0x400 ^ uVar1;
  *(uint *)(this + 0x2f8) = uVar1;
  uVar1 = (*(uint *)(param_1 + 0x2f8) ^ uVar1) & 0x800 ^ uVar1;
  *(uint *)(this + 0x2f8) = uVar1;
  uVar1 = (*(uint *)(param_1 + 0x2f8) ^ uVar1) & 0x1000 ^ uVar1;
  *(uint *)(this + 0x2f8) = uVar1;
  uVar1 = (*(uint *)(param_1 + 0x2f8) ^ uVar1) & 0x2000 ^ uVar1;
  *(uint *)(this + 0x2f8) = uVar1;
  uVar1 = (*(uint *)(param_1 + 0x2f8) ^ uVar1) & 0x4000 ^ uVar1;
  *(uint *)(this + 0x2f8) = uVar1;
  uVar1 = (*(uint *)(param_1 + 0x2f8) ^ uVar1) & 0x8000 ^ uVar1;
  *(uint *)(this + 0x2f8) = uVar1;
  *(uint *)(this + 0x2f8) = (*(uint *)(param_1 + 0x2f8) ^ uVar1) & 0x10000 ^ uVar1;
  *(undefined4 *)(this + 0x2fc) = *(undefined4 *)(param_1 + 0x2fc);
  *(undefined4 *)(this + 0x300) = *(undefined4 *)(param_1 + 0x300);
  *(undefined4 *)(this + 0x304) = *(undefined4 *)(param_1 + 0x304);
  *(undefined4 *)(this + 0x308) = *(undefined4 *)(param_1 + 0x308);
  *(undefined4 *)(this + 0x30c) = *(undefined4 *)(param_1 + 0x30c);
  *(undefined4 *)(this + 0x310) = *(undefined4 *)(param_1 + 0x310);
  *(undefined4 *)(this + 0x314) = *(undefined4 *)(param_1 + 0x314);
  *(undefined4 *)(this + 0x318) = *(undefined4 *)(param_1 + 0x318);
  *(undefined4 *)(this + 0x31c) = *(undefined4 *)(param_1 + 0x31c);
  *(undefined4 *)(this + 800) = *(undefined4 *)(param_1 + 800);
  *(undefined4 *)(this + 0x324) = *(undefined4 *)(param_1 + 0x324);
  *(undefined4 *)(this + 0x328) = *(undefined4 *)(param_1 + 0x328);
  *(undefined4 *)(this + 0x32c) = *(undefined4 *)(param_1 + 0x32c);
  *(undefined4 *)(this + 0x330) = *(undefined4 *)(param_1 + 0x330);
  *(undefined4 *)(this + 0x334) = *(undefined4 *)(param_1 + 0x334);
  *(undefined4 *)(this + 0x338) = *(undefined4 *)(param_1 + 0x338);
  *(undefined4 *)(this + 0x33c) = *(undefined4 *)(param_1 + 0x33c);
  *(undefined4 *)(this + 0x340) = *(undefined4 *)(param_1 + 0x340);
  *(undefined4 *)(this + 0x344) = *(undefined4 *)(param_1 + 0x344);
  *(undefined4 *)(this + 0x348) = *(undefined4 *)(param_1 + 0x348);
  *(undefined4 *)(this + 0x34c) = *(undefined4 *)(param_1 + 0x34c);
  *(undefined4 *)(this + 0x350) = *(undefined4 *)(param_1 + 0x350);
  *(undefined4 *)(this + 0x354) = *(undefined4 *)(param_1 + 0x354);
  *(undefined4 *)(this + 0x358) = *(undefined4 *)(param_1 + 0x358);
  this[0x35c] = param_1[0x35c];
  *(undefined4 *)(this + 0x360) = *(undefined4 *)(param_1 + 0x360);
  *(undefined4 *)(this + 0x364) = *(undefined4 *)(param_1 + 0x364);
  *(uint *)(this + 0x368) =
       *(uint *)(this + 0x368) ^ (*(uint *)(this + 0x368) ^ *(uint *)(param_1 + 0x368)) & 1;
  uVar1 = (*(uint *)(param_1 + 0x368) ^ *(uint *)(this + 0x368)) & 2 ^ *(uint *)(this + 0x368);
  *(uint *)(this + 0x368) = uVar1;
  uVar1 = (*(uint *)(param_1 + 0x368) ^ uVar1) & 4 ^ uVar1;
  *(uint *)(this + 0x368) = uVar1;
  uVar1 = (*(uint *)(param_1 + 0x368) ^ uVar1) & 8 ^ uVar1;
  *(uint *)(this + 0x368) = uVar1;
  uVar1 = (*(uint *)(param_1 + 0x368) ^ uVar1) & 0x10 ^ uVar1;
  *(uint *)(this + 0x368) = uVar1;
  uVar1 = (*(uint *)(param_1 + 0x368) ^ uVar1) & 0x20 ^ uVar1;
  *(uint *)(this + 0x368) = uVar1;
  uVar1 = (*(uint *)(param_1 + 0x368) ^ uVar1) & 0x40 ^ uVar1;
  *(uint *)(this + 0x368) = uVar1;
  uVar1 = (*(uint *)(param_1 + 0x368) ^ uVar1) & 0x80 ^ uVar1;
  *(uint *)(this + 0x368) = uVar1;
  uVar1 = (*(uint *)(param_1 + 0x368) ^ uVar1) & 0x100 ^ uVar1;
  *(uint *)(this + 0x368) = uVar1;
  uVar1 = (*(uint *)(param_1 + 0x368) ^ uVar1) & 0x200 ^ uVar1;
  *(uint *)(this + 0x368) = uVar1;
  uVar1 = (*(uint *)(param_1 + 0x368) ^ uVar1) & 0x400 ^ uVar1;
  *(uint *)(this + 0x368) = uVar1;
  uVar1 = (*(uint *)(param_1 + 0x368) ^ uVar1) & 0x800 ^ uVar1;
  *(uint *)(this + 0x368) = uVar1;
  uVar1 = (*(uint *)(param_1 + 0x368) ^ uVar1) & 0x1000 ^ uVar1;
  *(uint *)(this + 0x368) = uVar1;
  uVar1 = (*(uint *)(param_1 + 0x368) ^ uVar1) & 0x2000 ^ uVar1;
  *(uint *)(this + 0x368) = uVar1;
  uVar1 = (*(uint *)(param_1 + 0x368) ^ uVar1) & 0x4000 ^ uVar1;
  *(uint *)(this + 0x368) = uVar1;
  uVar1 = (*(uint *)(param_1 + 0x368) ^ uVar1) & 0x8000 ^ uVar1;
  *(uint *)(this + 0x368) = uVar1;
  uVar1 = (*(uint *)(param_1 + 0x368) ^ uVar1) & 0x10000 ^ uVar1;
  *(uint *)(this + 0x368) = uVar1;
  uVar1 = (*(uint *)(param_1 + 0x368) ^ uVar1) & 0x20000 ^ uVar1;
  *(uint *)(this + 0x368) = uVar1;
  uVar1 = (*(uint *)(param_1 + 0x368) ^ uVar1) & 0x40000 ^ uVar1;
  *(uint *)(this + 0x368) = uVar1;
  *(uint *)(this + 0x368) = (*(uint *)(param_1 + 0x368) ^ uVar1) & 0x80000 ^ uVar1;
  *(undefined4 *)(this + 0x36c) = *(undefined4 *)(param_1 + 0x36c);
  thunk_FUN_10383ed0(param_1 + 0x370);
  thunk_FUN_1032bfc0(param_1 + 0x37c);
  thunk_FUN_1032bfc0(param_1 + 0x388);
  this[0x394] = param_1[0x394];
  *(undefined4 *)(this + 0x398) = *(undefined4 *)(param_1 + 0x398);
  this[0x39c] = param_1[0x39c];
  *(undefined4 *)(this + 0x3a0) = *(undefined4 *)(param_1 + 0x3a0);
  *(undefined4 *)(this + 0x3a4) = *(undefined4 *)(param_1 + 0x3a4);
  *(undefined4 *)(this + 0x3a8) = *(undefined4 *)(param_1 + 0x3a8);
  *(undefined4 *)(this + 0x3ac) = *(undefined4 *)(param_1 + 0x3ac);
  this[0x3b0] = param_1[0x3b0];
  *(uint *)(this + 0x3b4) =
       *(uint *)(this + 0x3b4) ^ (*(uint *)(param_1 + 0x3b4) ^ *(uint *)(this + 0x3b4)) & 1;
  *(undefined4 *)(this + 0x3b8) = *(undefined4 *)(param_1 + 0x3b8);
  return this;
}


// ==== 1031517c thunk_FUN_1037bc10 thunk -> 1037bc10

// ==== 10315186 UTerrainBrushVertexEdit::operator=

/* public: class UTerrainBrushVertexEdit & __thiscall UTerrainBrushVertexEdit::operator=(class
   UTerrainBrushVertexEdit const &) */

UTerrainBrushVertexEdit * __thiscall
UTerrainBrushVertexEdit::operator=(UTerrainBrushVertexEdit *this,UTerrainBrushVertexEdit *param_1)

{
                    /* 0x15186  2615  ??4UTerrainBrushVertexEdit@@QAEAAV0@ABV0@@Z */
  UTerrainBrush::operator=((UTerrainBrush *)this,(UTerrainBrush *)param_1);
  return this;
}


// ==== 1031518b AL2NMover::ChangeTargetToLoc

/* public: virtual void __thiscall AL2NMover::ChangeTargetToLoc(class AActor *) */

void __thiscall AL2NMover::ChangeTargetToLoc(AL2NMover *this,AActor *param_1)

{
                    /* 0x1518b  3502  ?ChangeTargetToLoc@AL2NMover@@UAEXPAVAActor@@@Z */
  return;
}


// ==== 10315190 APawn::ClearL2Game

/* public: virtual void __thiscall APawn::ClearL2Game(void) */

void __thiscall APawn::ClearL2Game(APawn *this)

{
  int iVar1;
  APawn *pAVar2;
  int iVar3;
  int iStack_44;
  int iStack_40;
  int iStack_3c;
  int iStack_38;
  int *piStack_24;
  APawn *pAStack_20;
  APawn *pAStack_1c;
  int iStack_18;
  undefined1 *puStack_14;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x15190  3633  ?ClearL2Game@APawn@@UAEXXZ */
  puStack_c = &LAB_10823460;
  pvStack_10 = ExceptionList;
  puStack_14 = &stack0xffffff70;
  uStack_8 = 0;
  ExceptionList = &pvStack_10;
  pAStack_1c = this;
  AActor::ClearL2Game((AActor *)this);
  if (*(int *)(this + 0x380) != 0) {
    iStack_18 = *(int *)(this + 0x380) + -1;
    while (-1 < iStack_18) {
      piStack_24 = (int *)0x0;
      pAStack_20 = (APawn *)0x0;
      iVar3 = *(int *)(*(int *)(this + 0x37c) + iStack_18 * 4);
      if (iVar3 == 0) {
LAB_1063215f:
        uStack_8 = 0;
        iStack_18 = iStack_18 + -1;
      }
      else {
        uStack_8 = CONCAT31((int3)((uint)uStack_8 >> 8),2);
        pAVar2 = (APawn *)thunk_FUN_104b42a0(iVar3);
        uStack_8 = 4;
        pAStack_20 = pAVar2;
        piStack_24 = (int *)thunk_FUN_1052eb80(iVar3);
        uStack_8 = 6;
        if (pAVar2 == (APawn *)0x0) {
          if (piStack_24 != (int *)0x0) {
            (**(code **)(*piStack_24 + 0x330))(this);
          }
          goto LAB_1063215f;
        }
        SpelledTargetDestroyNotify(pAVar2,(AActor *)this);
        uStack_8 = 0;
        iStack_18 = iStack_18 + -1;
      }
    }
  }
  for (iStack_38 = 0; iStack_38 < *(int *)(this + 0x380); iStack_38 = iStack_38 + 1) {
  }
  FArray::Empty((FArray *)(this + 0x37c),4,0);
  NActionStop(this);
  uStack_8 = CONCAT31(uStack_8._1_3_,9);
  if ((*(int *)(this + 0x62c) == 5) || (*(int *)(this + 0x520) != 0)) {
    MagicStop(this);
  }
  uStack_8 = 0xb;
  iVar3 = *(int *)(this + 0x38c);
  if (((iVar3 != 0) && (*(int *)(this + 0x63c) != 0)) &&
     (*(int *)(*(int *)(this + 0x63c) + 0x380) != 0)) {
    while( true ) {
      iVar3 = iVar3 + -1;
      iStack_3c = iVar3;
      if (iVar3 < 0) break;
      pAVar2 = *(APawn **)(*(int *)(this + 0x388) + iVar3 * 4);
      pAStack_1c = pAVar2;
      if (pAVar2 != (APawn *)0x0) {
        thunk_FUN_104e9650(&pAStack_1c);
        thunk_FUN_104e9650(&pAStack_1c);
        (**(code **)(**(int **)(this + 0xe4) + 0xac))(pAVar2,0);
      }
    }
    for (iStack_40 = 0; iStack_40 < *(int *)(this + 0x38c); iStack_40 = iStack_40 + 1) {
    }
    FArray::Empty((FArray *)(this + 0x388),4,0);
  }
  uStack_8 = 0xd;
  iVar3 = *(int *)(this + 0x374);
  if (iVar3 != 0) {
    while (iVar3 = iVar3 + -1, -1 < iVar3) {
      iVar1 = *(int *)(*(int *)(this + 0x370) + iVar3 * 4);
      if (iVar1 != 0) {
        if (*(int *)(iVar1 + 0x4e4) != 0) {
          iStack_44 = iVar1;
          thunk_FUN_104e9650(&iStack_44);
        }
        (**(code **)(**(int **)(this + 0xe4) + 0xac))(iVar1,0);
      }
    }
    for (iVar3 = 0; iVar3 < *(int *)(this + 0x374); iVar3 = iVar3 + 1) {
    }
    FArray::Empty((FArray *)(this + 0x370),4,0);
  }
  uStack_8 = 0;
  iVar3 = *(int *)(this + 0x65c);
  while (iVar3 = iVar3 + -1, -1 < iVar3) {
    iVar1 = *(int *)(*(int *)(this + 0x658) + iVar3 * 4);
    if (iVar1 != 0) {
      thunk_FUN_10384d70(iVar3,1);
      thunk_FUN_103254a0(iVar1);
    }
  }
  FNActorResourceLoader::RemoveActorResourceArray(&GL2ActorResourceLoader,(AActor *)this);
  FNMonsterRaceMgr::RemoveMonsterRaceInfo(&GL2MonsterRaceMgr,this);
  DeleteAllAppendixEffect(this);
  DeleteAllAbnormalState(this);
  DeleteAllWeaponEffect(this);
  DeleteAllCursedWeaponEffect(this);
  DeleteAllNCubic(this);
  DeleteDecoEffect(this);
  if (*(int *)(this + 0x16c0) != 0) {
    (**(code **)(**(int **)(this + 0xe4) + 0xac))(*(int *)(this + 0x16c0),0);
  }
  if (*(int *)(this + 0x16ac) != 0) {
    (**(code **)(**(int **)(this + 0xe4) + 0xac))(*(int *)(this + 0x16ac),0);
  }
  if (DAT_10c51044 != 0) {
    if (*(int *)(DAT_10c51044 + 0x2fc) != 0) {
      pAVar2 = *(APawn **)(*(FLandMark **)(DAT_10c51044 + 0x2fc) + 4);
      if ((pAVar2 != (APawn *)0x0) && (pAVar2 == this)) {
        FLandMark::SetOwner(*(FLandMark **)(DAT_10c51044 + 0x2fc),(APawn *)0x0);
      }
    }
    if (((DAT_10c51044 != 0) && (*(APawn **)(DAT_10c51044 + 0x244) != (APawn *)0x0)) &&
       (*(APawn **)(DAT_10c51044 + 0x244) == this)) {
      *(undefined4 *)(DAT_10c51044 + 0x244) = 0;
    }
  }
  ExceptionList = pvStack_10;
  return;
}


// ==== 1031519a AActor::ClearAlphaTexModifier

/* public: virtual void __thiscall AActor::ClearAlphaTexModifier(void) */

void __thiscall AActor::ClearAlphaTexModifier(AActor *this)

{
                    /* 0x1519a  3620  ?ClearAlphaTexModifier@AActor@@UAEXXZ */
  if (*(int *)(this + 0x3ac) != 1) {
    *(uint *)(this + 0x3a0) = *(uint *)(this + 0x3a0) & 0xfffffffb;
    *(undefined4 *)(this + 0x3a8) = 1;
    this[0x3a7] = (AActor)0xff;
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x105251da. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(int *)this + 0xfc))();
  return;
}


// ==== 103151a9 AStatLog::execGetMapFileName

/* public: void __thiscall AStatLog::execGetMapFileName(struct FFrame &,void * const) */

void __thiscall AStatLog::execGetMapFileName(AStatLog *this,FFrame *param_1,void *param_2)

{
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x151a9  9219  ?execGetMapFileName@AStatLog@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_107f8d80;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  ExceptionList = &pvStack_10;
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  FString::operator=(param_2,(FString *)(*(int *)(this + 0xe4) + 0x94));
  ExceptionList = pvStack_10;
  return;
}


// ==== 103151ae thunk_FUN_105f5460 thunk -> 105f5460

// ==== 103151b3 thunk_FUN_105a4680 thunk -> 105a4680

// ==== 103151b8 UL2NEnvManager::GetBaseColorPlane_HSVBSPSunLight

/* public: virtual void __thiscall UL2NEnvManager::GetBaseColorPlane_HSVBSPSunLight(float,class
   FPlane &) */

void __thiscall
UL2NEnvManager::GetBaseColorPlane_HSVBSPSunLight(UL2NEnvManager *this,float param_1,FPlane *param_2)

{
  int *piVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  FPlane *this_00;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  double dVar8;
  FPlane *pFVar9;
  int iStack_e4;
  FPlane *pFStack_e0;
  float fStack_dc;
  float fStack_d8;
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
  FPlane aFStack_90 [4];
  FPlane aFStack_8c [28];
  FPlane aFStack_70 [12];
  undefined1 auStack_64 [36];
  undefined1 auStack_40 [60];
  
                    /* 0x151b8  4403
                       ?GetBaseColorPlane_HSVBSPSunLight@UL2NEnvManager@@UAEXMAAVFPlane@@@Z */
  uStack_b0 = 0;
  uStack_ac = 0;
  uStack_a8 = 0;
  uStack_a4 = 0;
  iVar6 = 0;
  uStack_c0 = 0;
  iVar7 = 0;
  uStack_bc = 0;
  uStack_b8 = 0;
  uStack_b4 = 0;
  uStack_d0 = 0;
  uStack_cc = 0;
  uStack_c8 = 0;
  uStack_c4 = 0;
  if (0 < *(int *)(this + 0x1bc)) {
    do {
      piVar1 = *(int **)(*(int *)(this + 0x1b8) + iVar7 * 4);
      if (piVar1[0x44] == (uint)(byte)this[0x1dd]) {
        (**(code **)(*piVar1 + 0x98))(param_1);
      }
      piVar1 = *(int **)(*(int *)(this + 0x1b8) + iVar7 * 4);
      if (piVar1[0x44] == (uint)(byte)this[0x1dc]) {
        (**(code **)(*piVar1 + 0x98))(param_1);
      }
      piVar1 = *(int **)(*(int *)(this + 0x1b8) + iVar7 * 4);
      if (piVar1[0x44] == 0) {
        (**(code **)(*piVar1 + 0x98))(param_1);
      }
      iVar7 = iVar7 + 1;
    } while (iVar7 < *(int *)(this + 0x1bc));
  }
  GetEnvColorPlane(this,(FPlane *)&uStack_d0,(FPlane *)&uStack_b0,(FPlane *)&uStack_c0,param_1,
                   param_2);
  if (*(int *)(this + 0x1b0) != 0) {
    pFStack_e0 = (FPlane *)0x0;
    iStack_e4 = 0;
    fStack_dc = 0.0;
    fStack_d8 = 0.0;
    uStack_d4 = 0;
    if (0 < *(int *)(this + 0x1b0)) {
      iVar7 = 0;
      do {
        fVar3 = *(float *)(*(int *)(this + 0x1a0) + iVar7) - *(float *)(this + 0x114);
        fVar4 = *(float *)(*(int *)(this + 0x1a0) + iVar7 + 4) - *(float *)(this + 0x118);
        dVar8 = appSqrt((double)(fVar3 * fVar3 + fVar4 * fVar4));
        if ((float)dVar8 <= *(float *)(*(int *)(this + 0x1a0) + 0x10 + iVar7)) {
          (**(code **)(**(int **)(*(int *)(this + 0x1ac) + iVar6 * 4) + 0x98))(param_1);
          iVar2 = *(int *)(this + 0x1a0);
          if (*(float *)(iVar2 + 0xc + iVar7) < fStack_dc) {
            fStack_dc = (fStack_dc - *(float *)(iVar2 + 0xc + iVar7)) /
                        (*(float *)(iVar2 + iVar7 + 0x10) - *(float *)(iVar2 + iVar7 + 0xc));
            fStack_d8 = 1.0 - fStack_dc;
            FPlane::operator*(aFStack_90,(float)auStack_40);
            pFVar9 = pFStack_e0;
            this_00 = (FPlane *)FPlane::operator*(param_2,(float)auStack_64);
            FPlane::operator+(this_00,pFVar9);
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
      } while (iVar6 < *(int *)(this + 0x1b0));
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


// ==== 103151bd thunk_FUN_10371d50 thunk -> 10371d50

// ==== 103151c7 UTexture::Serialize

/* public: virtual void __thiscall UTexture::Serialize(class FArchive &) */

void __thiscall UTexture::Serialize(UTexture *this,FArchive *param_1)

{
  int iVar1;
  int iVar2;
  int iStack_18;
  void *pvStack_10;
  undefined1 *puStack_c;
  int iStack_8;
  
                    /* 0x151c7  7758  ?Serialize@UTexture@@UAEXAAVFArchive@@@Z */
  puStack_c = &LAB_1082eec8;
  pvStack_10 = ExceptionList;
  iVar2 = 0;
  iStack_8 = 0;
  ExceptionList = &pvStack_10;
  UMaterial::Serialize((UMaterial *)this,param_1);
  iVar1 = FArchive::IsSaving(param_1);
  if (((iVar1 != 0) || (iVar1 = FArchive::IsLoading(param_1), iVar1 != 0)) &&
     (((byte)this[0x5c0] & 0x40) != 0)) {
    for (; iVar2 < *(int *)(this + 0x5f4); iVar2 = iVar2 + 1) {
      FArray::Empty((FArray *)(*(int *)(this + 0x5f0) + 0x1c + iVar2 * 0x28),1,0);
    }
  }
  iVar1 = FArchive::Ver(param_1);
  if (iVar1 < 0x54) {
    if ((*(uint *)(this + 0x5c0) & 0x100) != 0) {
      thunk_FUN_1073e5f0();
      iStack_8._0_1_ = 1;
      FUN_10742830(this);
      FUN_10742830(this);
      this[0x578] = this[0x5fc];
      *(uint *)(this + 0x5c0) = *(uint *)(this + 0x5c0) & 0xfffffeff;
      iStack_8 = (uint)iStack_8._1_3_ << 8;
      thunk_FUN_103edca0();
      goto LAB_10744c73;
    }
  }
  else if ((*(uint *)(this + 0x5c0) & 0x100) != 0) {
    appFailAssert("!OLDbHasComp",".\\UnTex.cpp",0x1a5);
  }
  FUN_10742830(this);
LAB_10744c73:
  iVar1 = FArchive::IsSaving(param_1);
  if ((iVar1 == 0) && (iVar1 = FArchive::IsLoading(param_1), iVar1 == 0)) {
    ExceptionList = pvStack_10;
    return;
  }
  if (((byte)this[0x5c0] & 0x40) != 0) {
    for (iStack_18 = 0; iStack_18 < *(int *)(this + 0x5f4); iStack_18 = iStack_18 + 1) {
      iVar1 = *(int *)(this + 0x5f0) + iStack_18 * 0x28;
      iVar2 = *(int *)(iVar1 + 8) * *(int *)(iVar1 + 4);
      FArray::Empty((FArray *)(iVar1 + 0x1c),1,iVar2);
      FArray::AddZeroed((FArray *)(iStack_18 * 0x28 + 0x1c + *(int *)(this + 0x5f0)),1,iVar2);
    }
  }
  ExceptionList = pvStack_10;
  return;
}


// ==== 103151cc thunk_FUN_105a6a20 thunk -> 105a6a20

// ==== 103151d1 UGameEngine::OnReceiveShortCutList

/* public: virtual void __thiscall UGameEngine::OnReceiveShortCutList(void) */

void __thiscall UGameEngine::OnReceiveShortCutList(UGameEngine *this)

{
                    /* 0x151d1  6561  ?OnReceiveShortCutList@UGameEngine@@UAEXXZ */
                    /* WARNING: Could not recover jumptable at 0x10489a9b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(this + 0x68) + 0x2d0))();
  return;
}


// ==== 103151d6 APawn::CheckDetour

/* public: class ANavigationPoint * __thiscall APawn::CheckDetour(class ANavigationPoint *,class
   ANavigationPoint *,int) */

ANavigationPoint * __thiscall
APawn::CheckDetour(APawn *this,ANavigationPoint *param_1,ANavigationPoint *param_2,int param_3)

{
  ANavigationPoint *pAVar1;
  int iVar2;
  UReachSpec *pUVar3;
  ulong uVar4;
  ANavigationPoint *pAVar5;
  ANavigationPoint *pAVar6;
  int iVar7;
  float fVar8;
  ANavigationPoint *pAStack_18;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x151d6  3529  ?CheckDetour@APawn@@QAEPAVANavigationPoint@@PAV2@0H@Z */
  puStack_c = &LAB_108267a0;
  pvStack_10 = ExceptionList;
  iVar7 = 0;
  uStack_8 = 0;
  if ((((param_3 == 0) || (param_2 == (ANavigationPoint *)0x0)) ||
      (param_1 == (ANavigationPoint *)0x0)) ||
     ((param_2 == param_1 || (*(int *)(this + 0x151c) == 0)))) {
    return param_1;
  }
  pAStack_18 = (ANavigationPoint *)0x0;
  ExceptionList = &pvStack_10;
  for (; pAVar1 = *(ANavigationPoint **)(this + 0x151c), iVar7 < *(int *)(pAVar1 + 0x3c0);
      iVar7 = iVar7 + 1) {
    iVar2 = *(int *)(*(int *)(pAVar1 + 0x3bc) + iVar7 * 4);
    if ((((float)*(int *)(*(ANavigationPoint **)(iVar2 + 0x3c) + 1000) < 65536.0) &&
        (pUVar3 = ANavigationPoint::GetReachSpecTo(*(ANavigationPoint **)(iVar2 + 0x3c),pAVar1),
        pUVar3 != (UReachSpec *)0x0)) &&
       ((((byte)pUVar3[0x54] & 1) == 0 &&
        (fVar8 = ANavigationPoint::eventDetourWeight
                           (*(ANavigationPoint **)(iVar2 + 0x3c),this,
                            (float)*(int *)(*(ANavigationPoint **)(iVar2 + 0x3c) + 1000)),
        0.0 < fVar8)))) {
      pAStack_18 = *(ANavigationPoint **)(iVar2 + 0x3c);
    }
  }
  pAVar1 = param_1;
  pAVar6 = param_1;
  if (pAStack_18 != (ANavigationPoint *)0x0) {
    while (pAVar5 = pAVar1, pAVar5 != (ANavigationPoint *)0x0) {
      if (pAVar5 == pAStack_18) {
        ExceptionList = pvStack_10;
        return param_1;
      }
      pAVar6 = pAVar5;
      pAVar1 = *(ANavigationPoint **)(pAVar5 + 0x3fc);
    }
    if (*(int *)(this + 0x14d8) == 0) {
      ExceptionList = pvStack_10;
      return param_1;
    }
    *(ANavigationPoint **)(*(int *)(this + 0x14d8) + 0x4e4) = param_1;
    *(float *)(*(int *)(this + 0x14d8) + 0x4e8) = (float)*(int *)(param_1 + 1000);
    uVar4 = AController::eventAllowDetourTo(*(AController **)(this + 0x14d8),pAStack_18);
    if (uVar4 != 0) {
      pAVar1 = *(ANavigationPoint **)(this + 0x151c);
      pAVar5 = param_1;
      if (pAVar6 == pAVar1) {
        for (; pAVar5 != (ANavigationPoint *)0x0; pAVar5 = *(ANavigationPoint **)(pAVar5 + 0x3fc)) {
          if (*(ANavigationPoint **)(pAVar5 + 0x3fc) == pAVar1) {
            *(ANavigationPoint **)(pAVar5 + 0x3fc) = pAStack_18;
            *(undefined4 *)(pAStack_18 + 0x3fc) = *(undefined4 *)(this + 0x151c);
            ExceptionList = pvStack_10;
            return param_1;
          }
        }
      }
      else {
        *(ANavigationPoint **)(pAVar6 + 0x3fc) = pAVar1;
        *(ANavigationPoint **)(*(int *)(this + 0x151c) + 0x3fc) = pAStack_18;
        *(undefined4 *)(pAStack_18 + 0x3fc) = 0;
      }
    }
  }
  ExceptionList = pvStack_10;
  return param_1;
}


// ==== 103151db thunk_FUN_103657f0 thunk -> 103657f0

// ==== 103151e5 UGameEngine::UpdateChatWndStatus

/* public: virtual void __thiscall UGameEngine::UpdateChatWndStatus(void) */

void __thiscall UGameEngine::UpdateChatWndStatus(UGameEngine *this)

{
                    /* 0x151e5  8733  ?UpdateChatWndStatus@UGameEngine@@UAEXXZ */
                    /* WARNING: Could not recover jumptable at 0x10489f2b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(this + 0x68) + 0x418))();
  return;
}


// ==== 103151ea FL2GameData::DeleteAgitInfo

/* public: void __thiscall FL2GameData::DeleteAgitInfo(int) */

void __thiscall FL2GameData::DeleteAgitInfo(FL2GameData *this,int param_1)

{
  int iVar1;
  
                    /* 0x151ea  3737  ?DeleteAgitInfo@FL2GameData@@QAEXH@Z */
  iVar1 = thunk_FUN_10459050(&param_1);
  if (iVar1 != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))(iVar1);
    thunk_FUN_104639e0(&stack0x00000000);
  }
  return;
}


// ==== 103151ef FNMover::SetTarget

/* public: void __thiscall FNMover::SetTarget(class FVector &) */

void __thiscall FNMover::SetTarget(FNMover *this,FVector *param_1)

{
                    /* 0x151ef  8053  ?SetTarget@FNMover@@QAEXAAVFVector@@@Z */
  *(undefined4 *)(this + 0x40) = *(undefined4 *)param_1;
  *(undefined4 *)(this + 0x44) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(this + 0x48) = *(undefined4 *)(param_1 + 8);
  return;
}


// ==== 103151f4 FL2GameData::ItemDataClear

/* protected: void __thiscall FL2GameData::ItemDataClear(void) */

void __thiscall FL2GameData::ItemDataClear(FL2GameData *this)

{
  int *piVar1;
  int iVar2;
  FArray *this_00;
  void **ppvVar3;
  int iVar4;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x151f4  5971  ?ItemDataClear@FL2GameData@@IAEXXZ */
  puStack_8 = &LAB_10815500;
  pvStack_c = ExceptionList;
  piVar1 = *(int **)(this + 0x1834);
  if (piVar1 != (int *)0x0) {
    iVar4 = 0;
    uStack_4 = 0;
    ExceptionList = &pvStack_c;
    ppvVar3 = &pvStack_c;
    if (0 < piVar1[1]) {
      do {
        iVar2 = *(int *)(*piVar1 + 8 + iVar4 * 0xc);
        if (iVar2 != 0) {
          thunk_FUN_1044b0f0();
          (**(code **)(**(int **)GMalloc_exref + 8))(iVar2);
        }
        iVar4 = iVar4 + 1;
        ppvVar3 = ExceptionList;
      } while (iVar4 < piVar1[1]);
    }
    ExceptionList = ppvVar3;
    uStack_4 = 0xffffffff;
    this_00 = *(FArray **)(this + 0x1834);
    FArray::Empty(this_00,0xc,0);
    *(undefined4 *)(this_00 + 0x10) = 8;
    thunk_FUN_104595e0();
    iVar4 = *(int *)(this + 0x1834);
    if (iVar4 != 0) {
      uStack_4 = 0xffffffff;
      thunk_FUN_10479db0();
      (**(code **)(**(int **)GMalloc_exref + 8))(iVar4);
    }
    *(undefined4 *)(this + 0x1834) = 0;
  }
  ExceptionList = pvStack_c;
  return;
}


// ==== 103151f9 FNAbnormalStat_FLOATING_ROOT::Init

/* public: virtual int __thiscall FNAbnormalStat_FLOATING_ROOT::Init(void) */

int __thiscall FNAbnormalStat_FLOATING_ROOT::Init(FNAbnormalStat_FLOATING_ROOT *this)

{
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x151f9  5414  ?Init@FNAbnormalStat_FLOATING_ROOT@@UAEHXZ */
  puStack_c = &LAB_10817860;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  if (*(APawn **)(this + 0xc) == (APawn *)0x0) {
    return 0;
  }
  ExceptionList = &pvStack_10;
  APawn::NActionStop(*(APawn **)(this + 0xc));
  ExceptionList = pvStack_10;
  return 1;
}


// ==== 103151fe thunk_FUN_106e97d0 thunk -> 106e97d0

// ==== 10315203 thunk_FUN_1044dc60 thunk -> 1044dc60

// ==== 10315208 AMatDemoActor::operator_new

/* public: static void * __cdecl AMatDemoActor::operator new(unsigned int,enum EInternal *) */

void * __cdecl AMatDemoActor::operator_new(uint param_1,EInternal *param_2)

{
                    /* 0x15208  1643  ??2AMatDemoActor@@SAPAXIPAW4EInternal@@@Z */
  return param_2;
}


// ==== 10315217 FColor::FColor

/* public: __thiscall FColor::FColor(unsigned char,unsigned char,unsigned char,unsigned char) */

void __thiscall FColor::FColor(FColor *this,uchar param_1,uchar param_2,uchar param_3,uchar param_4)

{
                    /* 0x15217  305  ??0FColor@@QAE@EEEE@Z */
  *this = (FColor)param_3;
  this[1] = (FColor)param_2;
  this[2] = (FColor)param_1;
  this[3] = (FColor)param_4;
  return;
}


// ==== 10315221 thunk_FUN_10646d50 thunk -> 10646d50

// ==== 10315230 thunk_FUN_1059bcd0 thunk -> 1059bcd0

// ==== 10315235 UMaterialSwitch::UMaterialSwitch

/* public: __thiscall UMaterialSwitch::UMaterialSwitch(class UMaterialSwitch const &) */

UMaterialSwitch * __thiscall
UMaterialSwitch::UMaterialSwitch(UMaterialSwitch *this,UMaterialSwitch *param_1)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x15235  824  ??0UMaterialSwitch@@QAE@ABV0@@Z */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_107ff29e;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  UModifier::UModifier((UModifier *)this,(UModifier *)param_1);
  uStack_4 = 0;
  *(undefined ***)this = vftable;
  *(undefined4 *)(this + 0x57c) = *(undefined4 *)(param_1 + 0x57c);
  thunk_FUN_1037bb60(param_1 + 0x580);
  ExceptionList = pvStack_c;
  return this;
}


// ==== 1031523a FLevelSceneNode::Render

/* public: virtual void __thiscall FLevelSceneNode::Render(class FRenderInterface *) */

void __thiscall FLevelSceneNode::Render(FLevelSceneNode *this,FRenderInterface *param_1)

{
  undefined1 *puVar1;
  APhysicsVolume *pAVar2;
  UViewport *this_00;
  int *piVar3;
  AHUD *this_01;
  float fVar4;
  ULevel *this_02;
  int iVar5;
  undefined1 uVar6;
  FCanvasUtil *pFVar7;
  APhysicsVolume *pAVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  AZoneInfo *pAVar12;
  ushort *puVar13;
  FLevelSceneNode *pFVar14;
  float *pfVar15;
  undefined4 *puVar16;
  float10 fVar17;
  undefined4 auStack_1f8 [14];
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  undefined4 uStack_1b8;
  float afStack_1b4 [7];
  FCanvasUtil aFStack_168 [176];
  int iStack_b8;
  float fStack_b0;
  int iStack_ac;
  int iStack_a4;
  int iStack_a0;
  ULevel *pUStack_9c;
  int iStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined1 *puStack_88;
  void *pvStack_84;
  undefined1 *puStack_80;
  int iStack_7c;
  int iStack_74;
  int iStack_6c;
  int iStack_68;
  int iStack_60;
  int iStack_5c;
  int iStack_54;
  int iStack_50;
  float fStack_4c;
  int iStack_48;
  int iStack_44;
  undefined4 uStack_40;
  float fStack_3c;
  int iStack_38;
  float fStack_34;
  undefined1 uStack_30;
  undefined1 uStack_2f;
  undefined1 uStack_2e;
  undefined1 uStack_2d;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  undefined1 uStack_20;
  undefined1 uStack_1f;
  undefined1 uStack_1e;
  AZoneInfo *pAStack_1c;
  undefined4 uStack_18;
  float fStack_14;
  float fStack_10;
  undefined4 uStack_c;
  float fStack_8;
  
                    /* 0x1523a  7309  ?Render@FLevelSceneNode@@UAEXPAVFRenderInterface@@@Z */
  puStack_80 = &LAB_10824894;
  pvStack_84 = ExceptionList;
  puStack_88 = &stack0xfffffe8c;
  iStack_7c = 0;
  ExceptionList = &pvStack_84;
  puVar1 = &stack0xfffffe8c;
  if (DAT_10db1f04 == (UProxyBitmapMaterial *)0x0) {
    pAStack_1c = (AZoneInfo *)&stack0xfffffe84;
    ExceptionList = &pvStack_84;
    FName::FName((FName *)&stack0xfffffe84,0);
    DAT_10db1f04 = (UProxyBitmapMaterial *)thunk_FUN_1053d270();
    thunk_FUN_10530420();
    if ((DAT_10db1f00 & 1) == 0) {
      DAT_10db1f00 = DAT_10db1f00 | 1;
      iStack_7c._0_1_ = 1;
      fStack_34 = -1.7014118e+38;
      FSolidColorTexture::FSolidColorTexture((FSolidColorTexture *)&DAT_10db1ee8);
      _atexit((_func_4879 *)&LAB_1084d660);
      iStack_7c = (uint)iStack_7c._1_3_ << 8;
    }
    UProxyBitmapMaterial::SetTextureInterface(DAT_10db1f04,(FBaseTexture *)&DAT_10db1ee8);
    puVar1 = puStack_88;
  }
  puStack_88 = puVar1;
  if (DAT_10db1ee4 == 0) {
    pAStack_1c = (AZoneInfo *)&stack0xfffffe84;
    FName::FName((FName *)&stack0xfffffe84,0);
    DAT_10db1ee4 = thunk_FUN_1053d3f0();
    thunk_FUN_10530420();
    *(UProxyBitmapMaterial **)(DAT_10db1ee4 + 0x578) = DAT_10db1f04;
    *(undefined1 *)(DAT_10db1ee4 + 0x57c) = 7;
    *(uint *)(DAT_10db1ee4 + 0x580) = *(uint *)(DAT_10db1ee4 + 0x580) | 1;
    *(uint *)(DAT_10db1ee4 + 0x580) = *(uint *)(DAT_10db1ee4 + 0x580) & 0xfffffffd;
  }
  (*(code *)**(undefined4 **)param_1)();
  if ((*(int *)(this + 0x1e0) != 0) &&
     ((*(int *)GIsEditor_exref != 0 || (*(int *)(*(int *)(*(int *)(this + 4) + 0x7c) + 0x6c) != 0)))
     ) {
    iVar10 = *(int *)param_1;
    UViewport::IsDepthComplexity(*(UViewport **)(this + 4));
    (**(code **)(iVar10 + 0x94))();
    afStack_1b4[6] = 4.534328e-29;
    pFVar7 = (FCanvasUtil *)
             FCanvasUtil::FCanvasUtil
                       (aFStack_168,(FRenderTarget *)(*(int *)(this + 4) + 0xdc),param_1);
    iStack_7c._0_1_ = 2;
    fStack_24 = -1.7014118e+38;
    afStack_1b4[6] = 1.0;
    afStack_1b4[5] = 0.0;
    afStack_1b4[4] = 0.0;
    afStack_1b4[3] = 0.0;
    afStack_1b4[2] = 0.0;
    afStack_1b4[1] = (float)*(int *)(*(int *)(this + 4) + 0x98);
    afStack_1b4[0] = (float)*(int *)(*(int *)(this + 4) + 0x94);
    uStack_1b8 = 0;
    uStack_1bc = 0;
    uStack_1c0 = 0x1065eb50;
    FCanvasUtil::DrawTile(pFVar7);
    iStack_7c = (uint)iStack_7c._1_3_ << 8;
    FCanvasUtil::~FCanvasUtil(aFStack_168);
  }
  iStack_48 = 0;
  if (((*(int *)(this + 0xc) == 0) && (iVar10 = *(int *)(*(int *)(this + 4) + 0x3c), iVar10 != 0))
     && (*(int *)(iVar10 + 0xe0) != 0)) {
    pAVar8 = ALevelInfo::L2GetPhysicsVolume(*(ALevelInfo **)(iVar10 + 0xe0));
    if ((pAVar8 != (APhysicsVolume *)0x0) && (((byte)pAVar8[0x498] & 1) != 0)) {
      iStack_48 = 1;
      if (*(int *)GEdShowFogInViewports_exref == 0) {
LAB_1065ebf4:
        uStack_18 = 0;
      }
      else {
        iVar9 = UViewport::IsWire(*(UViewport **)(this + 4));
        uStack_18 = 1;
        if (iVar9 != 0) goto LAB_1065ebf4;
      }
      fStack_10 = *(float *)(pAVar8 + 0x4a0);
      fStack_8 = *(float *)(pAVar8 + 0x4a4);
      fStack_28 = *(float *)(pAVar8 + 0x49c);
      if ((((byte)pAVar8[0x4a8] & 1) == 0) && (*(int *)(*(int *)(this + 0x1cc) + 0x74) != 0)) {
        iVar9 = *(int *)(*(int *)(this + 0x1cc) + 0x74);
        fStack_10 = *(float *)(iVar9 + 0xf8);
        fStack_8 = *(float *)(iVar9 + 0xfc);
        fStack_28 = *(float *)(iVar9 + 0xf4);
      }
      pAVar2 = *(APhysicsVolume **)(iVar10 + 0x820);
      if (((pAVar2 == (APhysicsVolume *)0x0) || (((byte)pAVar2[0x4c0] & 1) == 0)) ||
         (*(int *)GIsEditor_exref != 0)) {
        (**(code **)(*(int *)param_1 + 0x38))();
      }
      else {
        if (pAVar2 != pAVar8) {
          if (1.0 <= *(float *)(iVar10 + 0x82c)) {
            *(undefined4 *)(iVar10 + 0x690) = 0;
            *(undefined4 *)(iVar10 + 0x82c) = 0;
          }
          else {
            fVar4 = 1.0 - *(float *)(iVar10 + 0x82c);
            *(float *)(iVar10 + 0x82c) = fVar4;
            *(float *)(iVar10 + 0x690) = fVar4 + fVar4;
            *(undefined4 *)(iVar10 + 0x684) = *(undefined4 *)(iVar10 + 0x824);
            *(undefined4 *)(iVar10 + 0x688) = *(undefined4 *)(iVar10 + 0x68c);
            *(undefined4 *)(iVar10 + 0x680) = *(undefined4 *)(iVar10 + 0x828);
          }
          *(float *)(iVar10 + 0x68c) = fStack_8;
          *(float *)(iVar10 + 0x828) = fStack_28;
          *(float *)(iVar10 + 0x824) = fStack_10;
        }
        fStack_14 = *(float *)(iVar10 + 0x690) * 0.5;
        *(float *)(iVar10 + 0x82c) = fStack_14;
        if (1.0 < fStack_14) {
          *(float *)(iVar10 + 0x684) = fStack_10;
          *(float *)(iVar10 + 0x688) = fStack_8;
          *(float *)(iVar10 + 0x680) = fStack_28;
          *(undefined4 *)(iVar10 + 0x690) = 0x49742400;
          *(undefined4 *)(iVar10 + 0x82c) = 0x3f800000;
        }
        fVar17 = (float10)thunk_FUN_10443920();
        fStack_2c = (float)fVar17;
        fVar17 = (float10)thunk_FUN_10443920();
        fStack_14 = (float)fVar17;
        uVar6 = thunk_FUN_10443950();
        uStack_c._0_3_ = CONCAT12(uVar6,(undefined2)uStack_c);
        uVar6 = thunk_FUN_10443950();
        uStack_c._0_2_ = CONCAT11(uVar6,(undefined1)uStack_c);
        uVar6 = thunk_FUN_10443950();
        uStack_c = (float)CONCAT31(uStack_c._1_3_,uVar6);
        (**(code **)(*(int *)param_1 + 0x38))();
      }
    }
    if (*(APhysicsVolume **)(iVar10 + 0x820) != pAVar8) {
      *(APhysicsVolume **)(iVar10 + 0x820) = pAVar8;
    }
    if (iStack_48 != 0) {
      thunk_FUN_10657850();
      goto LAB_1065f9d2;
    }
  }
  iVar10 = *(int *)(*(int *)(this + 4) + 0x3c);
  if ((*(int *)(iVar10 + 0x3bc) == 0) ||
     (pUStack_9c = *(ULevel **)(*(int *)(iVar10 + 0x3bc) + 0x2cc), pUStack_9c == (ULevel *)0x0)) {
    pUStack_9c = *(ULevel **)(this + 0x1cc);
  }
  if ((DAT_10db1ee0 != 0) || ((iVar10 != 0 && ((*(byte *)(iVar10 + 0xa90) & 1) != 0)))) {
    UGameEngine::GetSWMapXY(DAT_10c51044);
    iVar10 = thunk_FUN_10598d90();
    if (iVar10 == 0) {
      pUStack_9c = *(ULevel **)(this + 0x1cc);
    }
    else {
      pUStack_9c = (ULevel *)thunk_FUN_10598d90();
    }
    DAT_10db1ee0 = 1;
  }
  this_02 = pUStack_9c;
  if (((*(int *)GIsEditor_exref == 0) ||
      (iVar10 = UViewport::IsWire(*(UViewport **)(this + 4)), iVar10 == 0)) &&
     (*(int *)(*(int *)(this + 4) + 0x160) == 0)) {
    ULevel::GetLevelInfo(this_02);
    iVar10 = UModel::PointRegion(*(UModel **)(this_02 + 0xc0));
    uVar11 = (uint)*(byte *)(iVar10 + 8);
  }
  else {
    uVar11 = 0;
  }
  pAVar12 = ULevel::GetZoneActor(this_02,uVar11);
  pAStack_1c = pAVar12;
  if (*(int *)(this + 0xc) == 0) {
    this_00 = *(UViewport **)(this + 4);
    iVar10 = UViewport::IsRealtime(this_00);
    if (iVar10 != 0) {
      iVar10 = *(int *)(this_00 + 0x3c);
      if (*(int *)(iVar10 + 0x3bc) != 0) {
        iVar10 = *(int *)(iVar10 + 0x3bc);
      }
      uStack_94 = *(undefined4 *)(iVar10 + 0x1bc);
      uStack_90 = *(undefined4 *)(iVar10 + 0x1c0);
      uStack_8c = *(undefined4 *)(iVar10 + 0x1c4);
      fStack_14 = *(float *)(pAVar12 + 0x3fc);
      fStack_2c = *(float *)(pAVar12 + 0x400);
      uStack_40 = *(undefined4 *)(pAVar12 + 0x3f8);
      if ((*(int *)(*(int *)(*(int *)(this + 0x1cc) + 0x74) + 0x18c) == 0) ||
         (*(int *)(*(int *)(*(int *)(this + 0x1cc) + 0x74) + 400) == 0)) goto LAB_1065f927;
      for (iVar10 = 0; iStack_54 = iVar10,
          iVar10 < *(int *)(*(int *)(*(int *)(*(int *)(this + 0x1cc) + 0x74) + 0x18c) + 0x3c);
          iVar10 = iVar10 + 1) {
        iVar9 = thunk_FUN_106560f0();
        if (iVar9 == 0) {
          thunk_FUN_10444470();
          iVar10 = iVar10 + -1;
        }
      }
      if (*(int *)(*(int *)(*(int *)(*(int *)(this + 0x1cc) + 0x74) + 0x18c) + 0x3c) == 0) {
        if (*(int *)GIsEditor_exref == 0) {
          if (DAT_10c51050 == 0) {
            if ((*(uint *)(pAVar12 + 0x3d8) >> 2 & 1) != 0) {
              thunk_FUN_104448f0();
              if (DAT_10db1ed4 != *(int *)(*(int *)(*(int *)(this + 0x1cc) + 0x74) + 0x18c)) {
                DAT_10db1ed4 = *(int *)(*(int *)(*(int *)(this + 0x1cc) + 0x74) + 0x18c);
                thunk_FUN_104430f0();
                thunk_FUN_10443330();
              }
            }
            if (DAT_10db1edc == 0.0) {
LAB_1065f6d2:
              uVar11 = *(uint *)(pAVar12 + 0x3d8) >> 2 & 1;
              if ((((uVar11 != 0) && (DAT_10db1ed0 == 0)) ||
                  (pfVar15 = *(float **)(*(int *)(*(int *)(this + 0x1cc) + 0x74) + 0x18c),
                  *(float *)GL2FogStart_exref != *pfVar15)) ||
                 (*(float *)GL2FogEnd_exref != pfVar15[1])) goto LAB_1065f781;
              if ((uVar11 == 0) && ((*(uint *)(pAVar12 + 0x3d8) & 8) != 0)) {
                thunk_FUN_10443100();
                thunk_FUN_104431b0();
                if (DAT_10db1ed0 == 0) goto LAB_1065f829;
                goto LAB_1065f7fd;
              }
            }
            else {
              iVar10 = 0;
              puVar13 = UL2NEnvManager::GetCloudName
                                  (*(UL2NEnvManager **)
                                    (*(int *)(*(int *)(this + 0x1cc) + 0x74) + 0x6c),0);
              UObject::StaticFindObject
                        (&UMaterial::PrivateStaticClass,(UObject *)0xffffffff,puVar13,iVar10);
              thunk_FUN_10443c90();
              if (DAT_10db1edc == 0.0) goto LAB_1065f6d2;
LAB_1065f781:
              **(undefined4 **)(*(int *)(*(int *)(this + 0x1cc) + 0x74) + 0x18c) =
                   *(undefined4 *)GL2FogStart_exref;
              *(undefined4 *)(*(int *)(*(int *)(*(int *)(this + 0x1cc) + 0x74) + 0x18c) + 4) =
                   *(undefined4 *)GL2FogEnd_exref;
              pAStack_1c = (AZoneInfo *)
                           (**(float **)(*(int *)(*(int *)(this + 0x1cc) + 0x74) + 0x18c) * 32768.0
                           * 0.0625);
              thunk_FUN_10443100();
LAB_1065f7fd:
              thunk_FUN_104433e0();
              thunk_FUN_10443020();
            }
LAB_1065f829:
            DAT_10db1ed0 = *(uint *)(pAVar12 + 0x3d8) >> 2 & 1;
            uStack_c = (float)*(int *)(DAT_10ddd7ec + DAT_10ddd91c * 4);
            if (*(int *)(DAT_10ddd7ec + DAT_10ddd91c * 4) < 0) {
              uStack_c = uStack_c + 4.2949673e+09;
            }
            uStack_c = uStack_c * (float)*(double *)GSecondsPerCycleQPF_exref;
            thunk_FUN_10443ad0();
            DAT_10db1edc = 0.0;
            thunk_FUN_10657850();
            thunk_FUN_10443540();
          }
          else if (DAT_10db1edc != 0.0) {
            DAT_10db1edc = 0.0;
            iVar10 = 0;
            puVar13 = UL2NEnvManager::GetCloudName
                                (*(UL2NEnvManager **)
                                  (*(int *)(*(int *)(this + 0x1cc) + 0x74) + 0x6c),0);
            UObject::StaticFindObject
                      (&UMaterial::PrivateStaticClass,(UObject *)0xffffffff,puVar13,iVar10);
            thunk_FUN_10443c90();
            thunk_FUN_10657850();
          }
        }
      }
      else {
        fStack_24 = *(float *)GL2FogStart_exref * 32768.0 * 0.0625;
        fStack_28 = *(float *)GL2FogEnd_exref * 32768.0 * 0.0625;
        thunk_FUN_10444a30();
        thunk_FUN_10368e10();
        iStack_7c._0_1_ = 3;
        thunk_FUN_10368e10();
        iStack_7c = CONCAT31(iStack_7c._1_3_,4);
        piVar3 = *(int **)(*(int *)(*(int *)(this + 0x1cc) + 0x74) + 0x6c);
        fStack_10 = (float)*(double *)(piVar3 + 0x4d);
        (**(code **)(*piVar3 + 0xd8))();
        (**(code **)(**(int **)(*(int *)(*(int *)(this + 0x1cc) + 0x74) + 0x6c) + 0xe0))();
        (**(code **)(**(int **)(*(int *)(*(int *)(this + 0x1cc) + 0x74) + 0x6c) + 0xdc))();
        fStack_3c = DAT_10db1edc;
        for (iStack_38 = 0;
            iStack_38 < *(int *)(*(int *)(*(int *)(*(int *)(this + 0x1cc) + 0x74) + 0x18c) + 0x3c);
            iStack_38 = iStack_38 + 1) {
          DAT_10db1edc = *(float *)(*(int *)(*(int *)(*(int *)(*(int *)(this + 0x1cc) + 0x74) +
                                                     0x18c) + 0x38) + iStack_38 * 4);
          fVar17 = (float10)thunk_FUN_10444560();
          fStack_8 = (float)fVar17;
          fVar17 = (float10)thunk_FUN_10443580();
          fStack_34 = (float)fVar17;
          fVar17 = (float10)thunk_FUN_10443650();
          fStack_b0 = (float)fVar17;
          thunk_FUN_104451d0();
          thunk_FUN_10445320();
          thunk_FUN_10445470();
          iStack_7c._0_1_ = 5;
          thunk_FUN_10445610();
          iStack_7c = CONCAT31(iStack_7c._1_3_,6);
          fStack_24 = fStack_8 * (fStack_34 - fStack_24) + fStack_24;
          fStack_28 = fStack_28 + fStack_8 * (fStack_b0 - fStack_28);
          uVar6 = thunk_FUN_10443950();
          _uStack_30 = CONCAT12(uVar6,_uStack_30);
          uVar6 = thunk_FUN_10443950();
          _uStack_30 = CONCAT11(uVar6,uStack_30);
          uVar6 = thunk_FUN_10443950();
          _uStack_30 = CONCAT31(_uStack_2f,uVar6);
          uStack_1e = thunk_FUN_10443950();
          uStack_1f = thunk_FUN_10443950();
          uStack_20 = thunk_FUN_10443950();
          for (iVar10 = 0;
              (iVar9 = iStack_6c, iStack_a0 = iVar10, iVar10 < iStack_68 && (iVar10 < iStack_74));
              iVar10 = iVar10 + 1) {
            uVar6 = thunk_FUN_10443950();
            iVar5 = iStack_6c;
            *(undefined1 *)(iVar9 + 2 + iVar10 * 4) = uVar6;
            uVar6 = thunk_FUN_10443950();
            *(undefined1 *)(iVar5 + 1 + iVar10 * 4) = uVar6;
            puVar1 = (undefined1 *)(iStack_6c + iVar10 * 4);
            uVar6 = thunk_FUN_10443950();
            *puVar1 = uVar6;
          }
          for (iVar10 = 0;
              (iVar9 = iStack_60, iStack_ac = iVar10, iVar10 < iStack_5c && (iVar10 < iStack_b8));
              iVar10 = iVar10 + 1) {
            uVar6 = thunk_FUN_10443950();
            iVar5 = iStack_60;
            *(undefined1 *)(iVar9 + 2 + iVar10 * 4) = uVar6;
            uVar6 = thunk_FUN_10443950();
            *(undefined1 *)(iVar5 + 1 + iVar10 * 4) = uVar6;
            puVar1 = (undefined1 *)(iStack_60 + iVar10 * 4);
            uVar6 = thunk_FUN_10443950();
            *puVar1 = uVar6;
          }
          iStack_7c._0_1_ = 5;
          thunk_FUN_10391680();
          iStack_7c = CONCAT31(iStack_7c._1_3_,4);
          thunk_FUN_10391680();
        }
        thunk_FUN_10443100();
        thunk_FUN_104431b0();
        if (fStack_3c == 0.0) {
          thunk_FUN_104433e0();
          thunk_FUN_10443020();
        }
        uStack_c = (float)*(int *)(DAT_10ddd7ec + DAT_10ddd91c * 4);
        if (*(int *)(DAT_10ddd7ec + DAT_10ddd91c * 4) < 0) {
          uStack_c = uStack_c + 4.2949673e+09;
        }
        uStack_c = uStack_c * (float)*(double *)GSecondsPerCycleQPF_exref;
        thunk_FUN_10443ad0();
        thunk_FUN_10657850();
        iStack_44 = 0;
        iStack_50 = 0;
        fStack_4c = 999999.0;
        iVar10 = 0;
        while (iVar9 = iVar10, iStack_a4 = iVar9,
              iVar9 < *(int *)(*(int *)(*(int *)(*(int *)(this + 0x1cc) + 0x74) + 0x18c) + 0x3c)) {
          fVar17 = (float10)thunk_FUN_10652540();
          if (fVar17 == (float10)0.0) {
LAB_1065f518:
            iVar10 = iVar9 + 1;
          }
          else {
            iStack_44 = 1;
            DAT_10db1ed8 = 1;
            fVar17 = (float10)thunk_FUN_10444540();
            fStack_3c = (float)fVar17;
            if (fStack_4c <= fStack_3c) goto LAB_1065f518;
            iVar10 = iVar9 + 1;
            iStack_50 = iVar9;
            fStack_4c = fStack_3c;
          }
        }
        if (iStack_44 == 0) {
          if (DAT_10db1ed8 != 0) {
            DAT_10db1ed8 = 0;
            goto LAB_1065f58d;
          }
        }
        else {
          *(int *)(*(int *)(*(int *)(*(int *)(this + 0x1cc) + 0x74) + 0x18c) + 0x44) = iStack_50;
LAB_1065f58d:
          thunk_FUN_10443c90();
        }
        thunk_FUN_10443540();
        iVar10 = *(int *)(*(int *)(*(int *)(this + 0x1cc) + 0x74) + 0x18c);
        for (iStack_98 = 0; iStack_98 < *(int *)(iVar10 + 0x3c); iStack_98 = iStack_98 + 1) {
        }
        FArray::Empty((FArray *)(iVar10 + 0x38),4,0);
        iStack_7c._0_1_ = 3;
        thunk_FUN_10391680();
        iStack_7c = (uint)iStack_7c._1_3_ << 8;
        thunk_FUN_10391680();
      }
LAB_1065f927:
      (**(code **)(*(int *)param_1 + 0x38))();
      goto LAB_1065f9d2;
    }
  }
  (**(code **)(*(int *)param_1 + 0x38))();
LAB_1065f9d2:
  thunk_FUN_1068c560();
  if ((*(int *)(this + 0x1e0) != 0) &&
     ((*(int *)GIsEditor_exref != 0 || (*(int *)(*(int *)(*(int *)(this + 4) + 0x7c) + 0x6c) != 0)))
     ) {
    pFVar7 = (FCanvasUtil *)
             FCanvasUtil::FCanvasUtil
                       (aFStack_168,(FRenderTarget *)(*(int *)(this + 4) + 0xdc),param_1);
    iStack_7c._0_1_ = 7;
    uStack_18 = 0xff000000;
    afStack_1b4[6] = 0.0;
    afStack_1b4[5] = 0.0;
    afStack_1b4[4] = 4.5355238e-29;
    FCanvasUtil::DrawTile(pFVar7);
    iStack_7c = (uint)iStack_7c._1_3_ << 8;
    FCanvasUtil::~FCanvasUtil(aFStack_168);
  }
  if (GTempLineBatcher != (FTempLineBatcher *)0x0) {
    (*(code *)**(undefined4 **)param_1)();
    iVar10 = *(int *)param_1;
    pFVar14 = this + 0x14;
    pfVar15 = afStack_1b4;
    for (iVar9 = 0x10; iVar9 != 0; iVar9 = iVar9 + -1) {
      *pfVar15 = (float)*(undefined4 *)pFVar14;
      pFVar14 = pFVar14 + 4;
      pfVar15 = pfVar15 + 1;
    }
    uStack_1b8 = 1;
    uStack_1bc = 0x1065fab7;
    (**(code **)(iVar10 + 0x40))();
    iVar10 = *(int *)param_1;
    pFVar14 = this + 0x94;
    puVar16 = auStack_1f8;
    for (iVar9 = 0x10; iVar9 != 0; iVar9 = iVar9 + -1) {
      *puVar16 = *(undefined4 *)pFVar14;
      pFVar14 = pFVar14 + 4;
      puVar16 = puVar16 + 1;
    }
    (**(code **)(iVar10 + 0x40))(2);
    FTempLineBatcher::Render(GTempLineBatcher,param_1,1);
    (**(code **)(*(int *)param_1 + 4))();
  }
  this_01 = *(AHUD **)(*(int *)(*(int *)(this + 4) + 0x3c) + 0x6b4);
  if (this_01 != (AHUD *)0x0) {
    AHUD::eventWorldSpaceOverlays(this_01);
  }
  if (GStatGraph != (FStatGraph *)0x0) {
    FStatGraph::Render(GStatGraph,*(UViewport **)(this + 4),param_1);
  }
  (**(code **)(*(int *)param_1 + 4))();
  ExceptionList = pvStack_84;
  return;
}


// ==== 1031523f thunk_FUN_106814b0 thunk -> 106814b0

// ==== 10315249 FRebuildTools::GetCurrent

/* public: class FRebuildOptions * __thiscall FRebuildTools::GetCurrent(void) */

FRebuildOptions * __thiscall FRebuildTools::GetCurrent(FRebuildTools *this)

{
                    /* 0x15249  4534  ?GetCurrent@FRebuildTools@@QAEPAVFRebuildOptions@@XZ */
  return *(FRebuildOptions **)(this + 4);
}


// ==== 1031524e APickup::StaticClass

/* public: static class UClass * __cdecl APickup::StaticClass(void) */

UClass * __cdecl APickup::StaticClass(void)

{
                    /* 0x1524e  8291  ?StaticClass@APickup@@SAPAVUClass@@XZ */
  return &PrivateStaticClass;
}


// ==== 10315258 UNetConnection::FlushNet

/* public: virtual void __thiscall UNetConnection::FlushNet(void) */

void __thiscall UNetConnection::FlushNet(UNetConnection *this)

{
  FArchive *this_00;
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  uchar *puVar4;
  code *pcVar5;
  float10 fVar6;
  float fVar7;
  FBitWriterMark aFStack_28 [4];
  undefined4 *puStack_24;
  int iStack_20;
  void *pvStack_1c;
  FArray *pFStack_18;
  undefined1 *puStack_14;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x15258  4260  ?FlushNet@UNetConnection@@UAEXXZ */
  puStack_c = &LAB_10830800;
  pvStack_10 = ExceptionList;
  puStack_14 = &stack0xffffffc0;
  uStack_8 = 0;
  this_00 = (FArchive *)(this + 0x254);
  ExceptionList = &pvStack_10;
  iVar1 = FArchive::IsError(this_00);
  if (iVar1 != 0) {
    appFailAssert("!Out.IsError()",".\\UnConn.cpp",0xf2);
  }
  puVar2 = (undefined4 *)FBitWriterMark::FBitWriterMark(aFStack_28);
  *(undefined4 *)(this + 0x134) = *puVar2;
  *(undefined4 *)(this + 0x138) = puVar2[1];
  *(undefined4 *)(this + 0x140) = 0;
  iVar1 = FBitWriter::GetNumBits((FBitWriter *)this_00);
  if ((iVar1 != 0) ||
     ((double)*(float *)(*(int *)(this + 0x74) + 0x60) <
      *(double *)(*(int *)(this + 0x74) + 0x50) - *(double *)(this + 0x10c))) {
    iVar1 = FBitWriter::GetNumBits((FBitWriter *)this_00);
    if (iVar1 == 0) {
      PreSend(this,0);
    }
    FBitWriter::WriteBit((FBitWriter *)this_00,'\x01');
    iVar1 = FArchive::IsError(this_00);
    if (iVar1 != 0) {
      appFailAssert("!Out.IsError()",".\\UnConn.cpp",0xff);
    }
    while (uVar3 = FBitWriter::GetNumBits((FBitWriter *)this_00), (uVar3 & 7) != 0) {
      FBitWriter::WriteBit((FBitWriter *)this_00,'\0');
    }
    iVar1 = FArchive::IsError(this_00);
    if (iVar1 != 0) {
      appFailAssert("!Out.IsError()",".\\UnConn.cpp",0x102);
    }
    if (*(int *)(this + 0x3f04) == 0) {
      if (*(int *)(this + 0x3f0c) == 0) {
        if ((*(int *)(this + 0x3f00) == 0) ||
           (fVar7 = appFrand(), pcVar5 = GetNumBytes_exref,
           (float)*(int *)(this + 0x3f00) < fVar7 * 100.0 !=
           ((float)*(int *)(this + 0x3f00) == fVar7 * 100.0))) {
          pcVar5 = GetNumBytes_exref;
          puStack_24 = (undefined4 *)(*(int *)this + 0x74);
          iVar1 = FBitWriter::GetNumBytes((FBitWriter *)this_00);
          puVar4 = FBitWriter::GetData((FBitWriter *)this_00);
          (*(code *)*puStack_24)(puVar4,iVar1);
          if ((*(int *)(this + 0x3f08) != 0) &&
             (fVar7 = appFrand(), fVar7 * 100.0 < (float)*(int *)(this + 0x3f08))) {
            puStack_24 = (undefined4 *)(*(int *)this + 0x74);
            iVar1 = FBitWriter::GetNumBytes((FBitWriter *)this_00);
            puVar4 = FBitWriter::GetData((FBitWriter *)this_00);
            (*(code *)*puStack_24)(puVar4,iVar1);
          }
        }
      }
      else if ((*(int *)(this + 0x3f00) == 0) ||
              (fVar7 = appFrand(), pcVar5 = GetNumBytes_exref,
              (float)*(int *)(this + 0x3f00) < fVar7 * 100.0)) {
        iVar1 = thunk_FUN_1032ab80(0x14,this + 0x3f10);
        if (iVar1 == 0) {
          pFStack_18 = (FArray *)0x0;
        }
        else {
          pFStack_18 = (FArray *)thunk_FUN_10764240();
        }
        pcVar5 = GetNumBytes_exref;
        iVar1 = FBitWriter::GetNumBytes((FBitWriter *)this_00);
        FArray::Add(pFStack_18,iVar1,1);
        puStack_24 = *(undefined4 **)pFStack_18;
        pvStack_1c = (void *)FBitWriter::GetNumBytes((FBitWriter *)this_00);
        puVar4 = FBitWriter::GetData((FBitWriter *)this_00);
        _memcpy(puStack_24,puVar4,(size_t)pvStack_1c);
        fVar6 = (float10)thunk_FUN_104da1f0();
        *(double *)(pFStack_18 + 0xc) =
             (double)((float10)*(int *)(this + 0x3f0c) / (float10)1000.0 + fVar6);
      }
    }
    else {
      iVar1 = thunk_FUN_1032ab80(0x14,this + 0x3f10);
      if (iVar1 == 0) {
        pFStack_18 = (FArray *)0x0;
      }
      else {
        pFStack_18 = (FArray *)thunk_FUN_10764240();
      }
      pcVar5 = GetNumBytes_exref;
      iVar1 = FBitWriter::GetNumBytes((FBitWriter *)this_00);
      FArray::Add(pFStack_18,iVar1,1);
      pvStack_1c = *(void **)pFStack_18;
      pFStack_18 = (FArray *)FBitWriter::GetNumBytes((FBitWriter *)this_00);
      puVar4 = FBitWriter::GetData((FBitWriter *)this_00);
      _memcpy(pvStack_1c,puVar4,(size_t)pFStack_18);
      iVar1 = *(int *)(this + 0x3f14);
      while (iVar1 = iVar1 + -1, iStack_20 = iVar1, -1 < iVar1) {
        fVar7 = appFrand();
        if (0.5 < fVar7) {
          if ((*(int *)(this + 0x3f00) == 0) ||
             (fVar7 = appFrand(), (float)*(int *)(this + 0x3f00) < fVar7 * 100.0)) {
            puVar2 = (undefined4 *)(*(int *)(this + 0x3f10) + iVar1 * 0x14);
            (**(code **)(*(int *)this + 0x74))(*puVar2,puVar2[1]);
          }
          thunk_FUN_1032e690(iVar1,1);
        }
      }
    }
    uVar3 = *(uint *)(this + 0xea4) & 0xff;
    *(uint *)(this + uVar3 * 4 + 0xaa0) = *(uint *)(this + 0xea4);
    *(undefined8 *)(this + uVar3 * 8 + 0x2a0) = *(undefined8 *)(*(int *)(this + 0x74) + 0x50);
    *(int *)(this + 0xea4) = *(int *)(this + 0xea4) + 1;
    *(int *)(this + 0x20c) = *(int *)(this + 0x20c) + 1;
    *(undefined8 *)(this + 0x10c) = *(undefined8 *)(*(int *)(this + 0x74) + 0x50);
    iVar1 = (*pcVar5)();
    *(int *)(this + 0x124) = *(int *)(this + 0x124) + iVar1 + *(int *)(this + 0xcc);
    iVar1 = (*pcVar5)();
    *(int *)(this + 0x21c) = *(int *)(this + 0x21c) + iVar1 + *(int *)(this + 0xcc);
    (**(code **)(*(int *)this + 0x78))();
  }
  for (iVar1 = 0; iVar1 < *(int *)(this + 0x3ea4); iVar1 = iVar1 + 1) {
    thunk_FUN_104225e0(*(int *)(this + 0x3ea0) + iVar1 * 4);
  }
  FArray::Empty((FArray *)(this + 0x3ea0),4,0x20);
  ExceptionList = pvStack_10;
  return;
}


// ==== 1031525d thunk_FUN_105a3680 thunk -> 105a3680

// ==== 10315262 thunk_FUN_106f9a20 thunk -> 106f9a20

// ==== 10315267 thunk_FUN_1042c710 thunk -> 1042c710

// ==== 10315271 ULevel::FindL2EventActors

/* public: int __thiscall ULevel::FindL2EventActors(class FName,class TArray<class AActor *> &) */

int __thiscall ULevel::FindL2EventActors(ULevel *this)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iStack_28;
  int iStack_24;
  int iStack_20;
  int iStack_1c;
  ULevel *pUStack_18;
  undefined1 *puStack_14;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x15271  4229
                       ?FindL2EventActors@ULevel@@QAEHVFName@@AAV?$TArray@PAVAActor@@@@@Z */
  puStack_c = &LAB_1081fff0;
  pvStack_10 = ExceptionList;
  puStack_14 = &stack0xffffffc0;
  uStack_8 = 0;
  ExceptionList = &pvStack_10;
  pUStack_18 = this;
  for (iVar3 = 0; iStack_24 = iVar3, iVar3 < *(int *)(this + 0x11b4); iVar3 = iVar3 + 1) {
    iVar2 = *(int *)(*(int *)(this + 0x11b0) + iVar3 * 4);
    if (iVar2 != 0) {
      for (iVar4 = 0; iStack_20 = iVar4, iVar4 < *(int *)(iVar2 + 0x3c); iVar4 = iVar4 + 1) {
        iStack_1c = *(int *)(*(int *)(iVar2 + 0x38) + iVar4 * 4);
        if (iStack_1c != 0) {
          iVar1 = FName::operator==((FName *)(iStack_1c + 0x10c),(FName *)&stack0x00000004);
          if (iVar1 != 0) {
            thunk_FUN_1037ae60(&iStack_1c);
          }
        }
        this = pUStack_18;
      }
    }
  }
  for (iVar3 = 0; iVar3 < *(int *)(this + 0x3c); iVar3 = iVar3 + 1) {
    iStack_28 = *(int *)(*(int *)(this + 0x38) + iVar3 * 4);
    if (iStack_28 != 0) {
      iVar2 = FName::operator==((FName *)(iStack_28 + 0x10c),(FName *)&stack0x00000004);
      if (iVar2 != 0) {
        thunk_FUN_1037ae60(&iStack_28);
      }
    }
    this = pUStack_18;
  }
  ExceptionList = pvStack_10;
  return 1;
}


// ==== 10315276 UShader::MaterialMappingVSize

/* public: virtual int __thiscall UShader::MaterialMappingVSize(void) */

int __thiscall UShader::MaterialMappingVSize(UShader *this)

{
  int iVar1;
  
                    /* 0x15276  6119  ?MaterialMappingVSize@UShader@@UAEHXZ */
  if (*(int *)(this + 0x578) != 0) {
                    /* WARNING: Could not recover jumptable at 0x105de737. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = (**(code **)(**(int **)(this + 0x578) + 0x84))();
    return iVar1;
  }
  if (*(int *)(this + 0x588) != 0) {
                    /* WARNING: Could not recover jumptable at 0x105de750. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = (**(code **)(**(int **)(this + 0x588) + 0x84))();
    return iVar1;
  }
  return 0;
}


// ==== 10315285 AActor::GetCloakMeshInstance

/* public: virtual class UMeshInstance * __thiscall AActor::GetCloakMeshInstance(void) */

UMeshInstance * __thiscall AActor::GetCloakMeshInstance(AActor *this)

{
                    /* 0x15285  4467  ?GetCloakMeshInstance@AActor@@UAEPAVUMeshInstance@@XZ */
  return (UMeshInstance *)0x0;
}


// ==== 1031528f UDemoRecConnection::LowLevelGetRemoteAddress

/* public: virtual class FString __thiscall UDemoRecConnection::LowLevelGetRemoteAddress(void) */

FString * __thiscall UDemoRecConnection::LowLevelGetRemoteAddress(UDemoRecConnection *this)

{
  FString *in_stack_00000004;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x1528f  6067
                       ?LowLevelGetRemoteAddress@UDemoRecConnection@@UAE?AVFString@@XZ */
  puStack_c = &LAB_10830bfa;
  pvStack_10 = ExceptionList;
  uStack_8 = 1;
  ExceptionList = &pvStack_10;
  FString::FString(in_stack_00000004,(ushort *)&DAT_10853d94);
  ExceptionList = pvStack_10;
  return in_stack_00000004;
}


// ==== 1031529e FStaticMeshColorStream::operator=

/* public: class FStaticMeshColorStream & __thiscall FStaticMeshColorStream::operator=(class
   FStaticMeshColorStream const &) */

FStaticMeshColorStream * __thiscall
FStaticMeshColorStream::operator=(FStaticMeshColorStream *this,FStaticMeshColorStream *param_1)

{
                    /* 0x1529e  2407  ??4FStaticMeshColorStream@@QAEAAV0@ABV0@@Z */
  *(undefined4 *)(this + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
  thunk_FUN_10391740(param_1 + 0xc);
  *(undefined4 *)(this + 0x18) = *(undefined4 *)(param_1 + 0x18);
  return this;
}


// ==== 103152a3 UTexEnvMap::StaticClass

/* public: static class UClass * __cdecl UTexEnvMap::StaticClass(void) */

UClass * __cdecl UTexEnvMap::StaticClass(void)

{
                    /* 0x152a3  8485  ?StaticClass@UTexEnvMap@@SAPAVUClass@@XZ */
  return &PrivateStaticClass;
}


// ==== 103152b7 ALevelInfo::StaticClass

/* public: static class UClass * __cdecl ALevelInfo::StaticClass(void) */

UClass * __cdecl ALevelInfo::StaticClass(void)

{
                    /* 0x152b7  8264  ?StaticClass@ALevelInfo@@SAPAVUClass@@XZ */
  return &PrivateStaticClass;
}


// ==== 103152bc UTexture::TM_Decompress

/* public: int __thiscall UTexture::TM_Decompress(void) */

int __thiscall UTexture::TM_Decompress(UTexture *this)

{
  FArray *this_00;
  FMipmap *this_01;
  int iVar1;
  uchar uVar2;
  uchar uVar3;
  int iVar4;
  UObject *pUVar5;
  undefined4 uVar6;
  int iVar7;
  uint *puVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  undefined1 *puVar12;
  uint uVar13;
  undefined1 uVar14;
  uint uVar15;
  uint uVar16;
  undefined1 *puStack_38;
  int iStack_34;
  int iStack_2c;
  uint *puStack_28;
  uint uStack_24;
  uint uStack_20;
  UTexture *pUStack_1c;
  uint uStack_18;
  UTexture *pUStack_14;
  uint uStack_10;
  uint uStack_c;
  
                    /* 0x152bc  8575  ?TM_Decompress@UTexture@@QAEHXZ */
  if (this[0x578] != (UTexture)0x3) {
    return 0;
  }
  this_00 = (FArray *)(this + 0x5f0);
  pUStack_14 = this;
  (*(code *)**(undefined4 **)(*(int *)(this + 0x5f0) + 0x10))();
  puStack_28 = (uint *)(**(code **)**(undefined4 **)GMalloc_exref)
                                 (*(int *)(this + 0x580) * *(int *)(this + 0x584),&DAT_10853a28);
  _memcpy(puStack_28,*(void **)(*(int *)this_00 + 0x1c),
          (*(int *)(this + 0x580) * *(int *)(this + 0x584)) / 2);
  thunk_FUN_103b33d0(0);
  uVar2 = appCeilLogTwo(*(ulong *)(this + 0x580));
  uVar3 = appCeilLogTwo(*(ulong *)(this + 0x584));
  iVar4 = FArray::Add(this_00,1,0x28);
  this_01 = (FMipmap *)(*(int *)this_00 + iVar4 * 0x28);
  if (this_01 != (FMipmap *)0x0) {
    FMipmap::FMipmap(this_01,uVar2,uVar3,*(int *)(this + 0x580) * *(int *)(this + 0x584));
  }
  if (*(int *)(this + 0x594) == 0) {
    FName::FName((FName *)&iStack_2c,0);
    pUVar5 = UObject::GetOuter((UObject *)this);
    pUVar5 = UObject::StaticAllocateObject
                       (&UPalette::PrivateStaticClass,pUVar5,iStack_2c,0,0,
                        *(undefined4 *)GError_exref,0,0);
    if (pUVar5 == (UObject *)0x0) {
      uVar6 = 0;
    }
    else {
      uVar6 = UPalette::UPalette((UPalette *)pUVar5);
    }
    *(undefined4 *)(this + 0x594) = uVar6;
    iVar4 = 0;
    do {
      iVar1 = *(int *)(this + 0x594);
      iVar7 = FArray::Add((FArray *)(iVar1 + 0x34),1,4);
      puVar12 = (undefined1 *)(*(int *)(iVar1 + 0x34) + iVar7 * 4);
      if (puVar12 != (undefined1 *)0x0) {
        uVar14 = (undefined1)iVar4;
        *puVar12 = uVar14;
        puVar12[1] = uVar14;
        puVar12[2] = uVar14;
        puVar12[3] = uVar14;
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < 0x100);
  }
  puStack_38 = *(undefined1 **)(*(int *)this_00 + 0x1c);
  iStack_2c = 0;
  if (0 < *(int *)(this + 0x584)) {
    iVar4 = *(int *)(this + 0x580);
    puVar8 = puStack_28;
    do {
      iStack_34 = 0;
      if (0 < iVar4) {
        do {
          uVar11 = *puVar8;
          uStack_20 = puVar8[1];
          puVar8 = puVar8 + 2;
          uVar15 = (uVar11 & 0x1f) * 8 | uVar11 >> 2 & 7;
          uVar13 = uVar11 >> 5;
          uVar9 = (uVar11 & 0xf800 | uVar13 & 0x700) >> 8;
          uStack_24 = (uVar11 >> 6 & 0x18 | uVar11 & 0x7e0) >> 3;
          uVar10 = (uVar11 >> 6 & 0x180000 | uVar11 & 0x7e00000) >> 0x13;
          uStack_18 = (uStack_24 + uVar15 + uVar9) / 3;
          uVar16 = (uVar13 & 0xe000 | uVar11 & 0x1f0000) >> 0xd;
          uVar13 = (uVar11 & 0xf8ffffff | uVar13) >> 0x18;
          pUStack_14 = (UTexture *)((uVar16 + uVar10 + uVar13) / 3);
          uStack_10 = ((uVar16 * 0xb + uVar15 * 0x15 >> 5 & 0xff) +
                       (uVar10 * 0xb + uStack_24 * 0x15 >> 5 & 0xff) +
                      (uVar13 * 0xb + uVar9 * 0x15 >> 5 & 0xff)) / 3;
          if (uVar11 >> 0x10 < (uVar11 & 0xffff)) {
            uStack_c = ((uVar16 * 0x15 + uVar15 * 0xb >> 5 & 0xff) +
                        (uVar10 * 0x15 + uStack_24 * 0xb >> 5 & 0xff) +
                       (uVar13 * 0x15 + uVar9 * 0xb >> 5 & 0xff)) / 3;
          }
          else {
            uStack_c = 0;
          }
          iVar4 = 4;
          uVar11 = uStack_20;
          puVar12 = puStack_38;
          do {
            *puVar12 = *(undefined1 *)
                        (*(int *)(*(int *)(pUStack_1c + 0x594) + 0x34) + 2 +
                        (&uStack_18)[uVar11 & 3] * 4);
            puVar12[1] = *(undefined1 *)
                          (*(int *)(*(int *)(pUStack_1c + 0x594) + 0x34) + 2 +
                          (&uStack_18)[uVar11 >> 2 & 3] * 4);
            puVar12[2] = *(undefined1 *)
                          (*(int *)(*(int *)(pUStack_1c + 0x594) + 0x34) + 2 +
                          (&uStack_18)[uVar11 >> 4 & 3] * 4);
            puVar12[3] = *(undefined1 *)
                          (*(int *)(*(int *)(pUStack_1c + 0x594) + 0x34) + 2 +
                          (&uStack_18)[uVar11 >> 6 & 3] * 4);
            puVar12 = puVar12 + *(int *)(pUStack_1c + 0x580);
            uVar11 = uVar11 >> 8;
            iVar4 = iVar4 + -1;
          } while (iVar4 != 0);
          iStack_34 = iStack_34 + 4;
          puStack_38 = puStack_38 + 4;
          this = pUStack_1c;
        } while (iStack_34 < *(int *)(pUStack_1c + 0x580));
      }
      iVar4 = *(int *)(this + 0x580);
      puStack_38 = puStack_38 + iVar4 * 3;
      iStack_2c = iStack_2c + 4;
    } while (iStack_2c < *(int *)(this + 0x584));
  }
  this[0x578] = (UTexture)0x0;
  (**(code **)(**(int **)GMalloc_exref + 8))(puStack_28);
  *(uint *)(this + 0x5c0) = *(uint *)(this + 0x5c0) | 0x80;
  return 1;
}


// ==== 103152c6 thunk_FUN_106ecbc0 thunk -> 106ecbc0

// ==== 103152d0 thunk_FUN_105543b0 thunk -> 105543b0

// ==== 103152da UFluidSurfacePrimitive::operator_new

/* public: static void * __cdecl UFluidSurfacePrimitive::operator new(unsigned int,enum EInternal *)
    */

void * __cdecl UFluidSurfacePrimitive::operator_new(uint param_1,EInternal *param_2)

{
                    /* 0x152da  1871  ??2UFluidSurfacePrimitive@@SAPAXIPAW4EInternal@@@Z */
  return param_2;
}


// ==== 103152e4 UModel::PrecomputeSphereFilter

/* public: void __thiscall UModel::PrecomputeSphereFilter(class FPlane const &) */

void __thiscall UModel::PrecomputeSphereFilter(UModel *this,FPlane *param_1)

{
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x152e4  6889  ?PrecomputeSphereFilter@UModel@@QAEXABVFPlane@@@Z */
  puStack_c = &LAB_1082f0e0;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  if (*(int *)(this + 0x68) != 0) {
    ExceptionList = &pvStack_10;
    FUN_10746ad0(this,0,param_1);
  }
  ExceptionList = pvStack_10;
  return;
}


// ==== 103152e9 UGameEngine::OnReceiveDismissPledge

/* public: virtual void __thiscall UGameEngine::OnReceiveDismissPledge(class L2ParamStack &) */

void __thiscall UGameEngine::OnReceiveDismissPledge(UGameEngine *this,L2ParamStack *param_1)

{
                    /* 0x152e9  6510  ?OnReceiveDismissPledge@UGameEngine@@UAEXAAVL2ParamStack@@@Z
                        */
                    /* WARNING: Could not recover jumptable at 0x1048988b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(this + 0x68) + 0x1bc))();
  return;
}


// ==== 103152ee UVertexStreamUV::GetDataSize

/* public: virtual int __thiscall UVertexStreamUV::GetDataSize(void) */

int __thiscall UVertexStreamUV::GetDataSize(UVertexStreamUV *this)

{
                    /* 0x152ee  4560  ?GetDataSize@UVertexStreamUV@@UAEHXZ */
  return *(int *)(this + 0x48) * 8;
}


// ==== 103152f3 thunk_FUN_10397a70 thunk -> 10397a70

// ==== 103152f8 USkeletalMeshInstance::SetSkelAnim

/* public: int __thiscall USkeletalMeshInstance::SetSkelAnim(class UMeshAnimation *,class
   USkeletalMesh *) */

int __thiscall
USkeletalMeshInstance::SetSkelAnim
          (USkeletalMeshInstance *this,UMeshAnimation *param_1,USkeletalMesh *param_2)

{
  FArray *this_00;
  int iVar1;
  int *piVar2;
  
                    /* 0x152f8  8026
                       ?SetSkelAnim@USkeletalMeshInstance@@QAEHPAVUMeshAnimation@@PAVUSkeletalMesh@@@Z
                        */
  if (param_1 != (UMeshAnimation *)0x0) {
    this_00 = (FArray *)(this + 0x144);
    iVar1 = 0;
    if (0 < *(int *)(this + 0x148)) {
      piVar2 = *(int **)this_00;
      do {
        if ((UMeshAnimation *)*piVar2 == param_1) {
          if (iVar1 != -1) goto LAB_106b3952;
          break;
        }
        iVar1 = iVar1 + 1;
        piVar2 = piVar2 + 6;
      } while (iVar1 < *(int *)(this + 0x148));
    }
    iVar1 = *(int *)(this + 0x148);
    FArray::AddZeroed(this_00,0x18,1);
    *(UMeshAnimation **)(iVar1 * 0x18 + *(int *)this_00) = param_1;
    *(USkeletalMesh **)(*(int *)this_00 + 4 + iVar1 * 0x18) = param_2;
LAB_106b3952:
    (**(code **)(*(int *)this + 0x15c))();
  }
  return 1;
}


// ==== 103152fd thunk_FUN_1040b4c0 thunk -> 1040b4c0

// ==== 10315307 AInternetInfo::~AInternetInfo

/* public: virtual __thiscall AInternetInfo::~AInternetInfo(void) */

void __thiscall AInternetInfo::~AInternetInfo(AInternetInfo *this)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x15307  1075  ??1AInternetInfo@@UAE@XZ */
  puStack_8 = &LAB_10803a48;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *(undefined ***)this = vftable;
  uStack_4 = 0;
  UObject::ConditionalDestroy((UObject *)this);
  uStack_4 = 0xffffffff;
  AInfo::~AInfo((AInfo *)this);
  ExceptionList = pvStack_c;
  return;
}


// ==== 1031530c thunk_FUN_1037eef0 thunk -> 1037eef0

// ==== 10315311 USkillAction_SwordTrail::operator_new

/* public: static void * __cdecl USkillAction_SwordTrail::operator new(unsigned int,enum EInternal
   *) */

void * __cdecl USkillAction_SwordTrail::operator_new(uint param_1,EInternal *param_2)

{
                    /* 0x15311  2023  ??2USkillAction_SwordTrail@@SAPAXIPAW4EInternal@@@Z */
  return param_2;
}


// ==== 10315316 UGameEngine::Exit

/* public: virtual void __thiscall UGameEngine::Exit(void) */

void __thiscall UGameEngine::Exit(UGameEngine *this)

{
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x15316  4180  ?Exit@UGameEngine@@UAEXXZ */
  puStack_c = &LAB_1081d960;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  ExceptionList = &pvStack_10;
  UEngine::Exit((UEngine *)this);
  if (*(int **)(*(int *)(this + 0x19c) + 0x70) != (int *)0x0) {
    (**(code **)(**(int **)(*(int *)(this + 0x19c) + 0x70) + 0xc))(1);
    *(undefined4 *)(*(int *)(this + 0x19c) + 0x70) = 0;
  }
  if (*(int **)(this + 0x5c) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x5c) + 0xc))(1);
    *(undefined4 *)(this + 0x5c) = 0;
  }
  ExceptionList = pvStack_10;
  return;
}


// ==== 1031531b AActor::execKSetInertiaTensor

/* public: void __thiscall AActor::execKSetInertiaTensor(struct FFrame &,void * const) */

void __thiscall AActor::execKSetInertiaTensor(AActor *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  int iVar2;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined1 *puStack_14;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x1531b  9291  ?execKSetInertiaTensor@AActor@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_10811200;
  pvStack_10 = ExceptionList;
  puStack_14 = &stack0xffffffc0;
  uStack_8 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  ExceptionList = &pvStack_10;
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&uStack_28);
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&uStack_34);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  if (*(int *)(this + 0x348) == 0) {
    ExceptionList = pvStack_10;
    return;
  }
  iVar2 = thunk_FUN_1043fb50(*(int *)(this + 0x348));
  if (iVar2 != 0) {
    *(undefined4 *)(iVar2 + 0x9c) = uStack_28;
    *(undefined4 *)(iVar2 + 0xa0) = uStack_24;
    *(undefined4 *)(iVar2 + 0xa4) = uStack_20;
    *(undefined4 *)(iVar2 + 0xa8) = uStack_34;
    *(undefined4 *)(iVar2 + 0xac) = uStack_30;
    *(undefined4 *)(iVar2 + 0xb0) = uStack_2c;
  }
  ExceptionList = pvStack_10;
  return;
}


// ==== 10315320 ATerrainInfo::PostEditChange

/* public: virtual void __thiscall ATerrainInfo::PostEditChange(void) */

void __thiscall ATerrainInfo::PostEditChange(ATerrainInfo *this)

{
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x15320  6758  ?PostEditChange@ATerrainInfo@@UAEXXZ */
  puStack_c = &LAB_1082df60;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  ExceptionList = &pvStack_10;
  AActor::PostEditChange((AActor *)this);
  ULevel::UpdateTerrainArrays(*(ULevel **)(*(int *)(this + 0xe0) + 0xe4));
  thunk_FUN_103f9970(0);
  thunk_FUN_103b4280(0);
  SetupSectors(this);
  CalcCoords(this);
  Update(this,0.0,0,0,0,0,0);
  ExceptionList = pvStack_10;
  return;
}


// ==== 1031532a thunk_FUN_1043be20 thunk -> 1043be20

// ==== 1031532f UGameEngine::OnReceiveFriendAdd

/* public: virtual void __thiscall UGameEngine::OnReceiveFriendAdd(class L2ParamStack &) */

void __thiscall UGameEngine::OnReceiveFriendAdd(UGameEngine *this,L2ParamStack *param_1)

{
                    /* 0x1532f  6514  ?OnReceiveFriendAdd@UGameEngine@@UAEXAAVL2ParamStack@@@Z */
                    /* WARNING: Could not recover jumptable at 0x104899cb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(this + 0x68) + 0x224))();
  return;
}


// ==== 10315334 UVertexStreamCOLOR::UVertexStreamCOLOR

/* public: __thiscall UVertexStreamCOLOR::UVertexStreamCOLOR(class UVertexStreamCOLOR const &) */

UVertexStreamCOLOR * __thiscall
UVertexStreamCOLOR::UVertexStreamCOLOR(UVertexStreamCOLOR *this,UVertexStreamCOLOR *param_1)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x15334  1019  ??0UVertexStreamCOLOR@@QAE@ABV0@@Z */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_107fdad3;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  UVertexStreamBase::UVertexStreamBase((UVertexStreamBase *)this,(UVertexStreamBase *)param_1);
  uStack_4 = 0;
  *(undefined ***)this = vftable;
  thunk_FUN_1037a010(param_1 + 0x44);
  ExceptionList = pvStack_c;
  return this;
}


// ==== 1031533e ADefaultPhysicsVolume::ADefaultPhysicsVolume

/* public: __thiscall ADefaultPhysicsVolume::ADefaultPhysicsVolume(class ADefaultPhysicsVolume const
   &) */

ADefaultPhysicsVolume * __thiscall
ADefaultPhysicsVolume::ADefaultPhysicsVolume
          (ADefaultPhysicsVolume *this,ADefaultPhysicsVolume *param_1)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x1533e  54  ??0ADefaultPhysicsVolume@@QAE@ABV0@@Z */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_108066c8;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  APhysicsVolume::APhysicsVolume((APhysicsVolume *)this,(APhysicsVolume *)param_1);
  *(undefined ***)this = vftable;
  ExceptionList = pvStack_c;
  return this;
}


// ==== 10315343 thunk_FUN_10598d90 thunk -> 10598d90

// ==== 1031534d thunk_FUN_103803d0 thunk -> 103803d0

// ==== 10315352 thunk_FUN_10371860 thunk -> 10371860

// ==== 10315357 thunk_FUN_1032cfe0 thunk -> 1032cfe0

// ==== 1031535c thunk_FUN_104af480 thunk -> 104af480

// ==== 10315361 thunk_FUN_10580a50 thunk -> 10580a50

// ==== 10315366 UDemoRecConnection::LowLevelSend

/* public: virtual void __thiscall UDemoRecConnection::LowLevelSend(void *,int) */

void __thiscall UDemoRecConnection::LowLevelSend(UDemoRecConnection *this,void *param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x15366  6068  ?LowLevelSend@UDemoRecConnection@@UAEXPAXH@Z */
  puStack_c = &LAB_10830c10;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  iVar1 = *(int *)(this + 0x74);
  if (*(int *)(iVar1 + 0x44) == 0) {
    ExceptionList = &pvStack_10;
    uVar2 = thunk_FUN_10330040(*(undefined4 *)(iVar1 + 0xbc),iVar1 + 0xd4,iVar1 + 0x50,&param_2);
    uVar2 = thunk_FUN_104a1e20(uVar2);
    thunk_FUN_10330040(uVar2);
    (**(code **)(**(int **)(*(int *)(this + 0x74) + 0xbc) + 4))(param_1,param_2);
  }
  ExceptionList = pvStack_10;
  return;
}


// ==== 1031536b APawn::GetDefenseItemSound

/* public: virtual class USound * __thiscall APawn::GetDefenseItemSound(float &,float &) */

USound * __thiscall APawn::GetDefenseItemSound(APawn *this,float *param_1,float *param_2)

{
  FName *this_00;
  undefined1 *puVar1;
  int iVar2;
  int iVar3;
  ushort *puVar4;
  UObject *pUVar5;
  int iVar6;
  L2FName *this_01;
  float *pfVar7;
  ushort *puVar8;
  UObject *pUVar9;
  ulong uVar10;
  UObject *pUVar11;
  UPackageMap *pUVar12;
  FName aFStack_1c [4];
  APawn *pAStack_18;
  undefined1 *puStack_14;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x1536b  4570  ?GetDefenseItemSound@APawn@@UAEPAVUSound@@AAM0@Z */
  puStack_c = &LAB_10823090;
  pvStack_10 = ExceptionList;
  puStack_14 = &stack0xffffffd0;
  uStack_8 = 0;
  if (*(int *)GIsEditor_exref != 0) {
    return (USound *)0x0;
  }
  pfVar7 = param_2;
  ExceptionList = &pvStack_10;
  pAStack_18 = this;
  puVar1 = &stack0xffffffd0;
  if ((((*(int *)(this + 0x6a4) != 0) &&
       (ExceptionList = &pvStack_10, iVar2 = thunk_FUN_10422ee0(this + 0x6a4), pfVar7 = param_2,
       puVar1 = puStack_14, iVar2 != 0)) && (*(int *)(iVar2 + 4) == 1)) &&
     (*(int *)(iVar2 + 0x5b4) != 0)) {
    iVar3 = appRand();
    iVar6 = *(int *)(iVar2 + 0x5b4);
    FName::FName(aFStack_1c,0);
    this_00 = (FName *)(iVar2 + 0x5b8 + (iVar3 % iVar6) * 4);
    iVar2 = FName::operator!=(this_00,aFStack_1c);
    pfVar7 = param_2;
    this = pAStack_18;
    puVar1 = puStack_14;
    if (iVar2 != 0) {
      iVar2 = (**(code **)(**(int **)GConfig_exref + 8))
                        (L"ItemSound",&DAT_108d94f0,param_2,L"ALAudio.int");
      if (iVar2 == 0) {
        *pfVar7 = 255.0;
      }
      iVar2 = (**(code **)(**(int **)GConfig_exref + 8))
                        (L"ItemSound",L"Radius",param_1,L"ALAudio.int");
      if (iVar2 == 0) {
        *param_1 = 50.0;
      }
      iVar2 = 0;
      puVar4 = L2FName::operator*((L2FName *)this_00);
      pUVar5 = UObject::StaticFindObject
                         (&USound::PrivateStaticClass,(UObject *)0xffffffff,puVar4,iVar2);
      if (pUVar5 != (UObject *)0x0) {
        ExceptionList = pvStack_10;
        return (USound *)pUVar5;
      }
      pUVar9 = pUVar5;
      pUVar11 = pUVar5;
      puVar4 = L2FName::operator*((L2FName *)this_00);
      pUVar5 = UObject::StaticLoadObject
                         (&USound::PrivateStaticClass,(UObject *)0x0,puVar4,(ushort *)pUVar5,
                          (ulong)pUVar9,(UPackageMap *)pUVar11);
      this = pAStack_18;
      puVar1 = puStack_14;
      if (pUVar5 != (UObject *)0x0) {
        ExceptionList = pvStack_10;
        return (USound *)pUVar5;
      }
    }
  }
  puStack_14 = puVar1;
  if (((byte)this[0x694] & 4) == 0) {
    if (*(int *)(&DAT_10b3e22c + *(int *)(this + 0x698) * 0x274) != 0) {
      iVar2 = appRand();
      iVar2 = iVar2 % *(int *)(&DAT_10b3e22c + *(int *)(this + 0x698) * 0x274);
      FName::FName((FName *)&param_2,0);
      iVar6 = FName::operator!=((FName *)(&DAT_10b3e260 +
                                         (*(int *)(this + 0x698) * 0x9d + iVar2) * 4),
                                (FName *)&param_2);
      if (iVar6 != 0) {
        iVar6 = (**(code **)(**(int **)GConfig_exref + 8))
                          (L"CharSound",&DAT_108d94f0,pfVar7,L"ALAudio.int");
        if (iVar6 == 0) {
          *pfVar7 = 255.0;
        }
        iVar6 = (**(code **)(**(int **)GConfig_exref + 8))
                          (L"CharSound",L"Radius",param_1,L"ALAudio.int");
        if (iVar6 == 0) {
          *param_1 = 50.0;
        }
        iVar6 = 0;
        puVar4 = L2FName::operator*((L2FName *)
                                    (&DAT_10b3e260 + (*(int *)(this + 0x698) * 0x9d + iVar2) * 4));
        pUVar5 = UObject::StaticFindObject
                           (&USound::PrivateStaticClass,(UObject *)0xffffffff,puVar4,iVar6);
        if (pUVar5 != (UObject *)0x0) {
          ExceptionList = pvStack_10;
          return (USound *)pUVar5;
        }
        this_01 = (L2FName *)(&DAT_10b3e260 + (*(int *)(this + 0x698) * 0x9d + iVar2) * 4);
        goto LAB_1061f29b;
      }
    }
  }
  else {
    iVar2 = thunk_FUN_10422f80(this + 0x69c);
    if ((iVar2 != 0) && (*(int *)(iVar2 + 0x74) != 0)) {
      iVar3 = appRand();
      iVar6 = *(int *)(iVar2 + 0x74);
      FName::FName((FName *)&param_2,0);
      this_01 = (L2FName *)(iVar2 + 0x78 + (iVar3 % iVar6) * 4);
      iVar6 = FName::operator!=((FName *)this_01,(FName *)&param_2);
      if (iVar6 != 0) {
        *param_1 = *(float *)(iVar2 + 0xcc);
        *pfVar7 = *(float *)(iVar2 + 0xd0);
        iVar2 = 0;
        puVar4 = L2FName::operator*(this_01);
        pUVar5 = UObject::StaticFindObject
                           (&USound::PrivateStaticClass,(UObject *)0xffffffff,puVar4,iVar2);
        if (pUVar5 != (UObject *)0x0) {
          ExceptionList = pvStack_10;
          return (USound *)pUVar5;
        }
LAB_1061f29b:
        pUVar12 = (UPackageMap *)0x0;
        uVar10 = 0;
        puVar8 = (ushort *)0x0;
        puVar4 = L2FName::operator*(this_01);
        pUVar5 = UObject::StaticLoadObject
                           (&USound::PrivateStaticClass,(UObject *)0x0,puVar4,puVar8,uVar10,pUVar12)
        ;
        ExceptionList = pvStack_10;
        return (USound *)pUVar5;
      }
    }
  }
  ExceptionList = pvStack_10;
  return (USound *)0x0;
}


// ==== 10315370 AActor::TwoWallAdjust

/* public: void __thiscall AActor::TwoWallAdjust(class FVector &,class FVector &,class FVector
   &,class FVector &,float) */

void __thiscall
AActor::TwoWallAdjust
          (AActor *this,FVector *param_1,FVector *param_2,FVector *param_3,FVector *param_4,
          float param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float *pfVar5;
  undefined4 *puVar6;
  undefined1 *puVar7;
  undefined1 auStack_44 [24];
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  float fStack_18;
  undefined1 *puStack_14;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x15370  8664  ?TwoWallAdjust@AActor@@QAEXAAVFVector@@000M@Z */
  puStack_c = &LAB_107f3490;
  pvStack_10 = ExceptionList;
  puStack_14 = &stack0xffffff98;
  uStack_8 = 0;
  if (0.0 < *(float *)(param_3 + 8) * *(float *)(param_4 + 8) +
            *(float *)(param_3 + 4) * *(float *)(param_4 + 4) +
            *(float *)param_3 * *(float *)param_4) {
    fVar3 = *(float *)(param_3 + 8) * *(float *)(param_2 + 8) +
            *(float *)(param_2 + 4) * *(float *)(param_3 + 4) +
            *(float *)param_2 * *(float *)param_3;
    fVar1 = *(float *)(param_3 + 4);
    fVar2 = *(float *)(param_3 + 8);
    fVar4 = 1.0 - param_5;
    *(float *)param_2 = fVar4 * (*(float *)param_2 - fVar3 * *(float *)param_3);
    *(float *)(param_2 + 4) = (*(float *)(param_2 + 4) - fVar3 * fVar1) * fVar4;
    *(float *)(param_2 + 8) = fVar4 * (*(float *)(param_2 + 8) - fVar3 * fVar2);
    fVar1 = *(float *)(param_1 + 8) * *(float *)(param_2 + 8) +
            *(float *)param_1 * *(float *)param_2 +
            *(float *)(param_1 + 4) * *(float *)(param_2 + 4);
    if (fVar1 < 0.0 != (fVar1 == 0.0)) {
      *(undefined4 *)param_2 = 0;
      *(undefined4 *)(param_2 + 4) = 0;
      *(undefined4 *)(param_2 + 8) = 0;
    }
  }
  else {
    fStack_2c = *(float *)(param_4 + 8) * *(float *)(param_3 + 4) -
                *(float *)(param_3 + 8) * *(float *)(param_4 + 4);
    fStack_28 = *(float *)param_4 * *(float *)(param_3 + 8) -
                *(float *)param_3 * *(float *)(param_4 + 8);
    fStack_24 = *(float *)param_3 * *(float *)(param_4 + 4) -
                *(float *)param_4 * *(float *)(param_3 + 4);
    puVar7 = auStack_44;
    ExceptionList = &pvStack_10;
    fStack_18 = fStack_24;
    pfVar5 = (float *)FVector::SafeNormal((FVector *)&fStack_2c);
    fStack_2c = *pfVar5;
    fStack_28 = pfVar5[1];
    fStack_24 = pfVar5[2];
    puVar6 = (undefined4 *)
             thunk_FUN_103301a0(auStack_44,
                                (1.0 - param_5) *
                                (fStack_24 * *(float *)(param_2 + 8) +
                                fStack_28 * *(float *)(param_2 + 4) + *(float *)param_2 * fStack_2c)
                                ,&fStack_2c,puVar7);
    *(undefined4 *)param_2 = *puVar6;
    *(undefined4 *)(param_2 + 4) = puVar6[1];
    *(undefined4 *)(param_2 + 8) = puVar6[2];
    if (*(float *)(param_1 + 8) * *(float *)(param_2 + 8) +
        *(float *)param_1 * *(float *)param_2 + *(float *)(param_1 + 4) * *(float *)(param_2 + 4) <
        0.0) {
      puVar6 = (undefined4 *)thunk_FUN_103301a0(auStack_44,0xbf800000,param_2,puVar7);
      *(undefined4 *)param_2 = *puVar6;
      *(undefined4 *)(param_2 + 4) = puVar6[1];
      *(undefined4 *)(param_2 + 8) = puVar6[2];
    }
  }
  ExceptionList = pvStack_10;
  return;
}


// ==== 1031537a AL2Pickup::operator_new

/* public: static void * __cdecl AL2Pickup::operator new(unsigned int,enum EInternal *) */

void * __cdecl AL2Pickup::operator_new(uint param_1,EInternal *param_2)

{
                    /* 0x1537a  1615  ??2AL2Pickup@@SAPAXIPAW4EInternal@@@Z */
  return param_2;
}


// ==== 1031537f FNAppendixEffect_COLOSSEUM_IDENTIFIER_BLUE::`default_constructor_closure'

/* public: void __thiscall FNAppendixEffect_COLOSSEUM_IDENTIFIER_BLUE::`default constructor
   closure'(void) */

void __thiscall
FNAppendixEffect_COLOSSEUM_IDENTIFIER_BLUE::_default_constructor_closure_
          (FNAppendixEffect_COLOSSEUM_IDENTIFIER_BLUE *this)

{
                    /* 0x1537f  3210  ??_FFNAppendixEffect_COLOSSEUM_IDENTIFIER_BLUE@@QAEXXZ */
  FNAppendixEffect_COLOSSEUM_IDENTIFIER_BLUE(this,(AActor *)0x0);
  return;
}


// ==== 1031538e thunk_FUN_105c97a0 thunk -> 105c97a0

// ==== 10315393 UNullRenderDevice::RestoreGamma

/* public: virtual void __thiscall UNullRenderDevice::RestoreGamma(void) */

void __thiscall UNullRenderDevice::RestoreGamma(UNullRenderDevice *this)

{
                    /* 0x15393  7643  ?RestoreGamma@UNullRenderDevice@@UAEXXZ */
  return;
}


// ==== 10315398 FFadeColorMaterialInfo::FFadeColorMaterialInfo

/* public: __thiscall FFadeColorMaterialInfo::FFadeColorMaterialInfo(void) */

FFadeColorMaterialInfo * __thiscall
FFadeColorMaterialInfo::FFadeColorMaterialInfo(FFadeColorMaterialInfo *this)

{
                    /* 0x15398  321  ??0FFadeColorMaterialInfo@@QAE@XZ */
  return this;
}


// ==== 1031539d FL2GameData::EnterEventDataSave

/* protected: void __thiscall FL2GameData::EnterEventDataSave(int) */

void __thiscall FL2GameData::EnterEventDataSave(FL2GameData *this,int param_1)

{
  int iVar1;
  int iVar2;
  FArchive *pFVar3;
  FOutputDevice aFStack_b8 [136];
  int iStack_30;
  int iStack_2c;
  int iStack_28;
  undefined4 uStack_24;
  FL2GameData *pFStack_20;
  undefined4 uStack_18;
  undefined1 *puStack_14;
  void *pvStack_10;
  undefined1 *puStack_c;
  int iStack_8;
  
                    /* 0x1539d  4137  ?EnterEventDataSave@FL2GameData@@IAEXH@Z */
  puStack_c = &LAB_10814028;
  pvStack_10 = ExceptionList;
  puStack_14 = &stack0xffffff3c;
  iStack_8 = 0;
  ExceptionList = &pvStack_10;
  pFStack_20 = this;
  appStrcpy((ushort *)aFStack_b8,(ushort *)L"EnterEventgrp.dat");
  uStack_18 = *(undefined4 *)(*(int *)(this + 0x7dce8) + 4);
  pFVar3 = (FArchive *)
           (**(code **)(**(int **)GFileManager_exref + 0xc))
                     (aFStack_b8,(-(uint)(param_1 != 0) & 0xfffffffe) + 2 | 4,
                      *(undefined4 *)GNull_exref);
  if (pFVar3 == (FArchive *)0x0) {
    FOutputDevice::Logf(aFStack_b8,*(ushort **)GWarn_exref);
  }
  else {
    (**(code **)(*(int *)pFVar3 + 4))(&uStack_18,4);
    iVar1 = *(int *)(this + 0x7dce8);
    uStack_24 = 0;
    iStack_8._0_1_ = 1;
    iStack_28 = 0;
    iStack_30 = iVar1;
    iStack_2c = iVar1;
    while (iVar2 = iStack_28, iStack_28 < *(int *)(iVar1 + 4)) {
      thunk_FUN_1044ede0(pFVar3);
      iStack_28 = iVar2 + 1;
    }
    iStack_8 = (uint)iStack_8._1_3_ << 8;
    thunk_FUN_10463d80();
    MakeSafePackage(pFStack_20,pFVar3);
    (**(code **)(*(int *)pFVar3 + 0x58))();
    FOutputDevice::Logf(aFStack_b8,*(ushort **)GWarn_exref);
    (*(code *)**(undefined4 **)pFVar3)(1);
  }
  ExceptionList = pvStack_10;
  return;
}


// ==== 103153a2 thunk_FUN_10667300 thunk -> 10667300

// ==== 103153b1 UParticleEmitter::UParticleEmitter

/* public: __thiscall UParticleEmitter::UParticleEmitter(void) */

UParticleEmitter * __thiscall UParticleEmitter::UParticleEmitter(UParticleEmitter *this)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x153b1  864  ??0UParticleEmitter@@QAE@XZ */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_1080893b;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  UObject::UObject((UObject *)this);
  uStack_4 = 0;
  *(undefined ***)this = vftable;
  FRangeVector::FRangeVector((FRangeVector *)(this + 0x50));
  FArray::FArray((FArray *)(this + 0x6c),0);
  uStack_4._0_1_ = 3;
  FRange::FRange((FRange *)(this + 0x7c));
  FRangeVector::FRangeVector((FRangeVector *)(this + 0x8c));
  FArray::FArray((FArray *)(this + 0xa8),0);
  uStack_4._0_1_ = 6;
  FRangeVector::FRangeVector((FRangeVector *)(this + 0xb8));
  FArray::FArray((FArray *)(this + 0x128),0);
  uStack_4._0_1_ = 9;
  FRange::FRange((FRange *)(this + 0x138));
  FStringNoInit::FStringNoInit((FStringNoInit *)(this + 0x140));
  uStack_4._0_1_ = 10;
  FRangeVector::FRangeVector((FRangeVector *)(this + 0x158));
  FRange::FRange((FRange *)(this + 0x178));
  FRangeVector::FRangeVector((FRangeVector *)(this + 0x180));
  FRange::FRange((FRange *)(this + 0x198));
  FRangeVector::FRangeVector((FRangeVector *)(this + 0x1ac));
  FRangeVector::FRangeVector((FRangeVector *)(this + 0x1c4));
  FRange::FRange((FRange *)(this + 0x1ec));
  FRangeVector::FRangeVector((FRangeVector *)(this + 0x1fc));
  FRangeVector::FRangeVector((FRangeVector *)(this + 0x214));
  FArray::FArray((FArray *)(this + 0x230),0);
  uStack_4._0_1_ = 0xd;
  FRotator::FRotator((FRotator *)(this + 0x248));
  FRangeVector::FRangeVector((FRangeVector *)(this + 0x260));
  FRangeVector::FRangeVector((FRangeVector *)(this + 0x278));
  FRangeVector::FRangeVector((FRangeVector *)(this + 0x294));
  FArray::FArray((FArray *)(this + 700),0);
  uStack_4._0_1_ = 0x10;
  FRangeVector::FRangeVector((FRangeVector *)(this + 0x2cc));
  FRange::FRange((FRange *)(this + 0x2fc));
  FArray::FArray((FArray *)(this + 0x304),0);
  uStack_4._0_1_ = 0x13;
  FRange::FRange((FRange *)(this + 0x314));
  FRange::FRange((FRange *)(this + 0x31c));
  FRange::FRange((FRange *)(this + 0x328));
  FRange::FRange((FRange *)(this + 0x330));
  FArray::FArray((FArray *)(this + 0x358),0);
  uStack_4._0_1_ = 0x16;
  FRange::FRange((FRange *)(this + 0x378));
  FRange::FRange((FRange *)(this + 0x380));
  FRange::FRange((FRange *)(this + 0x388));
  FRange::FRange((FRange *)(this + 0x394));
  FRangeVector::FRangeVector((FRangeVector *)(this + 0x3a0));
  FRange::FRange((FRange *)(this + 0x3b8));
  FRangeVector::FRangeVector((FRangeVector *)(this + 0x3cc));
  FRangeVector::FRangeVector((FRangeVector *)(this + 1000));
  FArray::FArray((FArray *)(this + 0x408),0);
  uStack_4._0_1_ = 0x19;
  FArray::FArray((FArray *)(this + 0x42c),0);
  uStack_4 = CONCAT31(uStack_4._1_3_,0x1c);
  FBox::FBox((FBox *)(this + 0x444));
  FArray::FArray((FArray *)(this + 0x4b4),0);
  ExceptionList = pvStack_c;
  return this;
}


// ==== 103153b6 AHUD::~AHUD

/* public: virtual __thiscall AHUD::~AHUD(void) */

void __thiscall AHUD::~AHUD(AHUD *this)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  int iStack_4;
  
                    /* 0x153b6  1072  ??1AHUD@@UAE@XZ */
  puStack_8 = &LAB_10807fe3;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *(undefined ***)this = vftable;
  iStack_4 = 9;
  UObject::ConditionalDestroy((UObject *)this);
  iStack_4._0_1_ = 8;
  _eh_vector_destructor_iterator_(this + 0x518,0xc,9,~FStringNoInit_exref);
  iStack_4._0_1_ = 7;
  _eh_vector_destructor_iterator_(this + 0x450,0x18,8,FConsoleMessage::~FConsoleMessage);
  iStack_4._0_1_ = 6;
  FStringNoInit::~FStringNoInit((FStringNoInit *)(this + 0x434));
  iStack_4._0_1_ = 5;
  FStringNoInit::~FStringNoInit((FStringNoInit *)(this + 0x428));
  iStack_4._0_1_ = 4;
  FStringNoInit::~FStringNoInit((FStringNoInit *)(this + 0x41c));
  iStack_4._0_1_ = 3;
  FStringNoInit::~FStringNoInit((FStringNoInit *)(this + 0x410));
  iStack_4._0_1_ = 2;
  FStringNoInit::~FStringNoInit((FStringNoInit *)(this + 0x404));
  iStack_4._0_1_ = 1;
  FStringNoInit::~FStringNoInit((FStringNoInit *)(this + 0x3e0));
  iStack_4 = (uint)iStack_4._1_3_ << 8;
  FStringNoInit::~FStringNoInit((FStringNoInit *)(this + 0x3cc));
  iStack_4 = 0xffffffff;
  AActor::~AActor((AActor *)this);
  ExceptionList = pvStack_c;
  return;
}


// ==== 103153c0 AL2Indicator::StaticClass

/* public: static class UClass * __cdecl AL2Indicator::StaticClass(void) */

UClass * __cdecl AL2Indicator::StaticClass(void)

{
                    /* 0x153c0  8257  ?StaticClass@AL2Indicator@@SAPAVUClass@@XZ */
  return &PrivateStaticClass;
}


// ==== 103153c5 FL2NpcData::FL2NpcData

/* public: __thiscall FL2NpcData::FL2NpcData(void) */

FL2NpcData * __thiscall FL2NpcData::FL2NpcData(FL2NpcData *this)

{
  FString *pFVar1;
  int iVar2;
  FL2NpcData *pFVar3;
  FArray *pFStack_20;
  FL2NpcData *pFStack_1c;
  FString aFStack_18 [12];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x153c5  345  ??0FL2NpcData@@QAE@XZ */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_107ffa29;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  pFStack_1c = this;
  FString::FString((FString *)(this + 4));
  uStack_4 = 0;
  FString::FString((FString *)(this + 0x10));
  uStack_4 = CONCAT31(uStack_4._1_3_,1);
  FName::FName((FName *)(this + 0x20));
  FName::FName((FName *)(this + 0x24));
  pFVar3 = this + 0x2c;
  iVar2 = 4;
  do {
    FName::FName((FName *)pFVar3);
    pFVar3 = pFVar3 + 4;
    iVar2 = iVar2 + -1;
  } while (-1 < iVar2);
  pFStack_20 = (FArray *)(this + 0x40);
  FArray::FArray(pFStack_20);
  uStack_4._0_1_ = 3;
  pFStack_20 = (FArray *)(this + 0x4c);
  FArray::FArray(pFStack_20);
  uStack_4 = CONCAT31(uStack_4._1_3_,5);
  pFVar3 = this + 0x68;
  iVar2 = 2;
  do {
    FName::FName((FName *)pFVar3);
    pFVar3 = pFVar3 + 4;
    iVar2 = iVar2 + -1;
  } while (-1 < iVar2);
  pFVar3 = this + 0x78;
  iVar2 = 4;
  do {
    FName::FName((FName *)pFVar3);
    pFVar3 = pFVar3 + 4;
    iVar2 = iVar2 + -1;
  } while (-1 < iVar2);
  pFVar3 = this + 0x90;
  iVar2 = 2;
  do {
    FName::FName((FName *)pFVar3);
    pFVar3 = pFVar3 + 4;
    iVar2 = iVar2 + -1;
  } while (-1 < iVar2);
  pFVar3 = this + 0xa0;
  iVar2 = 2;
  do {
    FName::FName((FName *)pFVar3);
    pFVar3 = pFVar3 + 4;
    iVar2 = iVar2 + -1;
  } while (-1 < iVar2);
  pFStack_20 = (FArray *)(this + 0xb8);
  FArray::FArray(pFStack_20);
  uStack_4._0_1_ = 7;
  FName::FName((FName *)(this + 0xc4));
  pFVar1 = (FString *)FString::FString(aFStack_18,(ushort *)L"NoNameNPC");
  uStack_4._0_1_ = 8;
  FString::operator=((FString *)(this + 4),pFVar1);
  uStack_4._0_1_ = 7;
  FString::~FString(aFStack_18);
  pFVar1 = (FString *)FString::FString(aFStack_18,(ushort *)&DAT_10853d94);
  uStack_4._0_1_ = 9;
  FString::operator=((FString *)(this + 0x10),pFVar1);
  uStack_4 = CONCAT31(uStack_4._1_3_,7);
  FString::~FString(aFStack_18);
  *(undefined4 *)(this + 0x1c) = 0;
  *(undefined4 *)this = 0;
  *(undefined4 *)(this + 0x28) = 0;
  FName::FName((FName *)&pFStack_20,0);
  *(FArray **)(this + 0x20) = pFStack_20;
  FName::FName((FName *)&pFStack_20,0);
  *(FArray **)(this + 0x24) = pFStack_20;
  FName::FName((FName *)&pFStack_20,0);
  *(undefined4 *)(this + 0x58) = 0x3f800000;
  *(FArray **)(this + 0xc4) = pFStack_20;
  pFVar3 = this + 0x2c;
  iVar2 = 5;
  do {
    FName::FName((FName *)&pFStack_20,0);
    *(FArray **)pFVar3 = pFStack_20;
    pFVar3 = pFVar3 + 4;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  *(undefined4 *)(this + 0x9c) = 0;
  *(undefined4 *)(this + 0x8c) = 0;
  *(undefined4 *)(this + 0x74) = 0;
  *(undefined4 *)(this + 100) = 0;
  pFVar3 = this + 0x68;
  iVar2 = 3;
  do {
    FName::FName((FName *)&pFStack_20,0);
    *(FArray **)pFVar3 = pFStack_20;
    pFVar3 = pFVar3 + 4;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  pFVar3 = this + 0x78;
  iVar2 = 5;
  do {
    FName::FName((FName *)&pFStack_20,0);
    *(FArray **)pFVar3 = pFStack_20;
    pFVar3 = pFVar3 + 4;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  pFVar3 = this + 0x90;
  iVar2 = 3;
  do {
    FName::FName((FName *)&pFStack_20,0);
    *(FArray **)pFVar3 = pFStack_20;
    pFVar3 = pFVar3 + 4;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  pFVar3 = this + 0xa0;
  iVar2 = 3;
  do {
    FName::FName((FName *)&pFStack_20,0);
    *(FArray **)pFVar3 = pFStack_20;
    pFVar3 = pFVar3 + 4;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  *(undefined4 *)(this + 0xd4) = 0;
  *(undefined4 *)(this + 0xd0) = 0;
  *(undefined4 *)(this + 0xcc) = 0;
  FArray::Empty((FArray *)(this + 0x40),4,0);
  FArray::Empty((FArray *)(this + 0xb8),4,0);
  *(undefined4 *)(this + 0x5c) = 0;
  *(undefined4 *)(this + 0x60) = 0;
  *(undefined4 *)(this + 0xd8) = 0;
  *(undefined4 *)(this + 0xdc) = 0;
  ExceptionList = pvStack_c;
  return this;
}


// ==== 103153ca ATerrainInfo::SoftSelect

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: void __thiscall ATerrainInfo::SoftSelect(float,float) */

void __thiscall ATerrainInfo::SoftSelect(ATerrainInfo *this,float param_1,float param_2)

{
  FArray *this_00;
  uint *puVar1;
  float fVar2;
  bool bVar3;
  ushort uVar4;
  int iVar5;
  int iVar6;
  float *pfVar7;
  undefined4 uVar8;
  float *pfVar9;
  int iVar10;
  int iVar11;
  float10 extraout_ST0;
  float10 fVar12;
  float10 extraout_ST1;
  double dVar13;
  uint uVar14;
  undefined1 auStack_c0 [48];
  undefined1 auStack_90 [12];
  undefined1 auStack_84 [12];
  FCoords aFStack_78 [16];
  float fStack_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  int iStack_50;
  undefined4 uStack_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  int iStack_34;
  float fStack_30;
  int iStack_2c;
  float fStack_28;
  uint uStack_24;
  uint uStack_20;
  int *piStack_1c;
  int *piStack_18;
  undefined1 *puStack_14;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x153ca  8149  ?SoftSelect@ATerrainInfo@@QAEXMM@Z */
  puStack_c = &LAB_1082d3c0;
  pvStack_10 = ExceptionList;
  puStack_14 = &stack0xffffff34;
  uStack_8 = 0;
  ExceptionList = &pvStack_10;
  for (iVar11 = 0; iStack_2c = iVar11, iVar11 < *(int *)(this + 0x2190); iVar11 = iVar11 + 1) {
    *(undefined4 *)(iVar11 * 0x14 + 0x10 + *(int *)(this + 0x218c)) = 0;
    if (DAT_10b323a8 == 0) {
      iVar10 = *(int *)(this + 0x218c);
      GetLayerYScaleToHeightmap(this,0);
      iVar5 = FUN_107a6660();
      GetLayerXScaleToHeightmap(this,DAT_10b323a8);
      iVar6 = FUN_107a6660();
      uVar4 = GetHeightmap(this,iVar6,iVar5);
      *(uint *)(iVar11 * 0x14 + iVar10 + 8) = (uint)uVar4;
    }
  }
  pfVar9 = &fStack_5c;
  pfVar7 = (float *)FRotator::Vector((FRotator *)(this + 0x1c8));
  fStack_44 = param_2 * *pfVar7;
  fStack_40 = pfVar7[1] * param_2;
  fStack_3c = param_2 * pfVar7[2];
  iVar11 = DAT_10b323a8;
  fStack_38 = fStack_3c;
  fStack_28 = fStack_40;
  piStack_1c = (int *)fStack_44;
  uVar8 = GetLayerToMap(this,(int)auStack_c0);
  FVector::TransformVectorBy((FVector *)&fStack_44,aFStack_78);
  FVector::Size2D((FVector *)aFStack_78);
  fStack_28 = (float)FUN_107a6660(uVar8,iVar11,pfVar9);
  fStack_38 = *(float *)(this + 0x2190);
  iStack_2c = 0;
  do {
    if ((int)fStack_38 <= iStack_2c) {
      ExceptionList = pvStack_10;
      return;
    }
    this_00 = (FArray *)(this + 0x218c);
    iVar11 = iStack_2c * 0x14;
    MakeVertex2DWithLayerPos(this,(int)&fStack_44,DAT_10b323a8,*(int *)(iVar11 + *(int *)this_00));
    iStack_34 = 0;
    uStack_20 = *(int *)(iVar11 + 4 + *(int *)this_00) - (int)fStack_28;
    uStack_20 = uStack_20 & ((int)uStack_20 < 1) - 1;
    while( true ) {
      piStack_1c = (int *)(*(int *)this_00 + iVar11);
      iVar5 = GetLayerHeight(this,DAT_10b323a8);
      iVar6 = *(int *)((int)piStack_1c + 4) + (int)fStack_28;
      iVar10 = iVar5 + -1;
      if (iVar6 <= iVar5 + -1) {
        iVar10 = iVar6;
      }
      if (iVar10 < (int)uStack_20) break;
      uStack_24 = *(int *)(iVar11 + *(int *)this_00) - (int)fStack_28;
      uStack_24 = uStack_24 & ((int)uStack_24 < 1) - 1;
      while( true ) {
        piStack_1c = (int *)(*(int *)this_00 + iVar11);
        iVar5 = GetLayerWidth(this,DAT_10b323a8);
        iVar10 = iVar5 + -1;
        if (*piStack_1c + (int)fStack_28 <= iVar5 + -1) {
          iVar10 = *piStack_1c + (int)fStack_28;
        }
        if (iVar10 < (int)uStack_24) break;
        pfVar9 = (float *)MakeVertex2DWithLayerPos(this,(int)auStack_90,DAT_10b323a8,uStack_24);
        fStack_68 = fStack_44 - *pfVar9;
        fStack_64 = fStack_40 - pfVar9[1];
        fStack_60 = fStack_3c - pfVar9[2];
        fStack_30 = fStack_64;
        piStack_1c = (int *)fStack_68;
        piStack_18 = (int *)fStack_60;
        piStack_18 = (int *)FVector::Size2D((FVector *)&fStack_68);
        if ((param_2 <= (float)piStack_18) || ((float)piStack_18 <= (float)iStack_34)) {
          uStack_24 = uStack_24 + 1;
        }
        else {
          iStack_34 = FUN_107a6660();
          uStack_24 = uStack_24 + 1;
        }
      }
      uStack_20 = uStack_20 + 1;
    }
    uStack_20 = *(int *)(iVar11 + 4 + *(int *)this_00) - (int)fStack_28;
    uStack_20 = uStack_20 & ((int)uStack_20 < 1) - 1;
    while( true ) {
      piStack_18 = (int *)(*(int *)this_00 + iVar11);
      iVar5 = GetLayerHeight(this,DAT_10b323a8);
      iVar6 = *(int *)((int)piStack_18 + 4) + (int)fStack_28;
      iVar10 = iVar5 + -1;
      if (iVar6 <= iVar5 + -1) {
        iVar10 = iVar6;
      }
      if (iVar10 < (int)uStack_20) break;
      uStack_24 = *(int *)(iVar11 + *(int *)this_00) - (int)fStack_28;
      uStack_24 = ((int)uStack_24 < 1) - 1 & uStack_24;
      while( true ) {
        iVar11 = iStack_2c * 0x14;
        piStack_18 = (int *)(*(int *)this_00 + iVar11);
        iVar5 = GetLayerWidth(this,DAT_10b323a8);
        iVar10 = iVar5 + -1;
        if (*piStack_18 + (int)fStack_28 <= iVar5 + -1) {
          iVar10 = *piStack_18 + (int)fStack_28;
        }
        if (iVar10 < (int)uStack_24) break;
        uVar14 = uStack_20;
        pfVar9 = (float *)MakeVertex2DWithLayerPos(this,(int)auStack_84,DAT_10b323a8,uStack_24);
        fStack_5c = fStack_44 - *pfVar9;
        fStack_58 = fStack_40 - pfVar9[1];
        fStack_54 = fStack_3c - pfVar9[2];
        fStack_30 = fStack_58;
        piStack_1c = (int *)fStack_54;
        piStack_18 = (int *)fStack_5c;
        piStack_18 = (int *)FVector::Size2D((FVector *)&fStack_5c);
        fStack_30 = (float)piStack_18 - param_1;
        iVar10 = FUN_107a6660(uVar14);
        fVar2 = (float)iVar10;
        if (fStack_30 <= fVar2) {
          if (extraout_ST1 <= extraout_ST0) {
            fVar12 = (float10)1;
            piStack_18 = (int *)fVar2;
          }
          else {
            piStack_18 = (int *)(*(int *)this_00 + iVar11);
            dVar13 = appCos((double)((fStack_30 / fVar2) * 3.1415927));
            fVar12 = ((float10)0.5 + (float10)dVar13 * (float10)0.5) *
                     (float10)*(float *)((int)piStack_18 + 0xc);
          }
          piStack_1c = (int *)(((float)_DAT_10b323b8 / 100.0) * (float)fVar12);
          if ((float)piStack_1c <= 0.0) goto LAB_10723f75;
          bVar3 = false;
          uStack_48 = 0;
          for (iStack_50 = 0; iStack_50 < *(int *)(this + 0x2190); iStack_50 = iStack_50 + 1) {
            puVar1 = (uint *)(*(int *)this_00 + iStack_50 * 0x14);
            if ((*puVar1 == uStack_24) && (puVar1[1] == uStack_20)) {
              bVar3 = true;
              uStack_48 = 1;
              if ((float)puVar1[3] < (float)piStack_1c) {
                puVar1[3] = (uint)piStack_1c;
              }
            }
          }
          if (bVar3) goto LAB_10723f75;
          iVar11 = FArray::Add(this_00,1,0x14);
          iVar11 = iVar11 * 0x14;
          *(uint *)(iVar11 + *(int *)this_00) = uStack_24;
          *(uint *)(iVar11 + 4 + *(int *)this_00) = uStack_20;
          *(int **)(iVar11 + 0xc + *(int *)this_00) = piStack_1c;
          piStack_18 = (int *)(*(int *)this_00 + iVar11);
          GetLayerYScaleToHeightmap(this,DAT_10b323a8);
          iVar10 = FUN_107a6660();
          GetLayerXScaleToHeightmap(this,DAT_10b323a8);
          iVar5 = FUN_107a6660();
          uVar4 = GetHeightmap(this,iVar5,iVar10);
          *(uint *)((int)piStack_18 + 8) = (uint)uVar4;
          *(undefined4 *)(iVar11 + 0x10 + *(int *)this_00) = 0;
          uStack_24 = uStack_24 + 1;
        }
        else {
LAB_10723f75:
          uStack_24 = uStack_24 + 1;
        }
      }
      uStack_20 = uStack_20 + 1;
    }
    iStack_2c = iStack_2c + 1;
  } while( true );
}


// ==== 103153cf AActor::IsNetRelevantFor

/* public: virtual int __thiscall AActor::IsNetRelevantFor(class APlayerController *,class AActor
   *,class FVector) */

int __thiscall
AActor::IsNetRelevantFor
          (AActor *this,AActor *param_1,AActor *param_2,float param_4,float param_5,float param_6)

{
  AActor *pAVar1;
  uchar uVar2;
  int iVar3;
  float fVar4;
  AActor *pAStack_30;
  float fStack_2c;
  float fStack_28;
  double dStack_1c;
  undefined1 *puStack_14;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x153cf  5906
                       ?IsNetRelevantFor@AActor@@UAEHPAVAPlayerController@@PAV1@VFVector@@@Z */
  pAVar1 = param_2;
  puStack_c = &LAB_108204d0;
  pvStack_10 = ExceptionList;
  puStack_14 = &stack0xffffffc4;
  uStack_8 = 0;
  if ((*(uint *)(this + 0x74) & 0x1000) == 0) {
    ExceptionList = &pvStack_10;
    iVar3 = IsOwnedBy(this,param_2);
    if (iVar3 != 0) {
      ExceptionList = pvStack_10;
      return 1;
    }
    iVar3 = IsOwnedBy(this,param_1);
    if (iVar3 != 0) {
      ExceptionList = pvStack_10;
      return 1;
    }
    if (this == pAVar1) {
      ExceptionList = pvStack_10;
      return 1;
    }
    if (pAVar1 == *(AActor **)(this + 0xd4)) {
      ExceptionList = pvStack_10;
      return 1;
    }
    if (((*(int *)(this + 0x3c) != 0) && (*(int *)(this + 0x40) == *(int *)(this + 0x3c))) &&
       ((*(uint *)(this + 100) & 0x800) == 0)) {
LAB_105d84f0:
      iVar3 = (**(code **)(**(int **)(this + 0x40) + 0x194))(param_1,pAVar1,param_4,param_5,param_6)
      ;
      ExceptionList = pvStack_10;
      return iVar3;
    }
    if (*(int *)(this + 0x40) != 0) {
      FName::FName((FName *)&param_2,0);
      iVar3 = FName::operator!=((FName *)(this + 0xd8),(FName *)&param_2);
      if ((iVar3 != 0) &&
         (iVar3 = thunk_FUN_104b4270(*(undefined4 *)(*(int *)(this + 0x40) + 0x104)), iVar3 != 0))
      goto LAB_105d84f0;
    }
    if ((*(byte *)(*(int *)(this + 0xec) + 0x3d8) & 2) != 0) {
      param_2 = (AActor *)(*(float *)(this + 0x1bc) - param_4);
      fStack_2c = *(float *)(this + 0x1c0) - param_5;
      fStack_28 = *(float *)(this + 0x1c4) - param_6;
      dStack_1c = (double)*(float *)(*(int *)(this + 0xec) + 0x400);
      pAStack_30 = param_2;
      fVar4 = FVector::SizeSquared((FVector *)&pAStack_30);
      if (dStack_1c * dStack_1c < (double)fVar4) {
        ExceptionList = pvStack_10;
        return 0;
      }
    }
    uVar2 = UModel::FastLineCheck
                      (*(UModel **)(*(int *)(this + 0xe4) + 0xc0),*(undefined4 *)(this + 0x1bc),
                       *(undefined4 *)(this + 0x1c0),*(undefined4 *)(this + 0x1c4),param_4,param_5,
                       param_6);
    if (uVar2 == '\0') {
      ExceptionList = pvStack_10;
      return 0;
    }
  }
  ExceptionList = pvStack_10;
  return 1;
}


// ==== 103153d9 AEmitter::ClearL2Game

/* public: virtual void __thiscall AEmitter::ClearL2Game(void) */

void __thiscall AEmitter::ClearL2Game(AEmitter *this)

{
  int *piVar1;
  int iVar2;
  AEmitter *pAVar3;
  UObject *this_00;
  UObject *pUVar4;
  UAudioSubsystem *pUVar5;
  int iVar6;
  int iVar7;
  FArray *this_01;
  UObject *pUStack_4;
  
                    /* 0x153d9  3632  ?ClearL2Game@AEmitter@@UAEXXZ */
  AActor::ClearL2Game((AActor *)this);
  if (((byte)this[0x470] & 1) != 0) {
    iVar7 = 0;
    if (0 < *(int *)(this + 0x3c0)) {
      do {
        piVar1 = *(int **)(*(int *)(this + 0x3bc) + iVar7 * 4);
        if (piVar1 != (int *)0x0) {
          (**(code **)(*piVar1 + 0xc))(1);
        }
        *(undefined4 *)(*(int *)(this + 0x3bc) + iVar7 * 4) = 0;
        iVar7 = iVar7 + 1;
      } while (iVar7 < *(int *)(this + 0x3c0));
    }
    if (*(int **)(this + 0x46c) != (int *)0x0) {
      (**(code **)(**(int **)(this + 0x46c) + 0xc))(1);
    }
    *(undefined4 *)(this + 0x46c) = 0;
  }
  pUStack_4 = *(UObject **)(this + 0x3c);
  if (pUStack_4 != (UObject *)0x0) {
    iVar7 = UObject::IsA(pUStack_4,&APawn::PrivateStaticClass);
    if (iVar7 == 0) {
      pUStack_4 = (UObject *)0x0;
    }
    else {
      iVar7 = *(int *)(pUStack_4 + 0x1660);
      if ((iVar7 != 0) && (iVar6 = 0, 0 < iVar7)) {
        do {
          iVar2 = *(int *)(*(int *)(pUStack_4 + 0x165c) + iVar6 * 4);
          if ((*(AEmitter **)(iVar2 + 4) != (AEmitter *)0x0) && (*(AEmitter **)(iVar2 + 4) == this))
          {
            *(undefined4 *)(iVar2 + 4) = 0;
          }
          if ((*(AEmitter **)(iVar2 + 8) != (AEmitter *)0x0) && (*(AEmitter **)(iVar2 + 8) == this))
          {
            *(undefined4 *)(iVar2 + 8) = 0;
          }
          iVar6 = iVar6 + 1;
        } while (iVar6 < iVar7);
      }
      iVar7 = *(int *)(pUStack_4 + 0x1698);
      if ((iVar7 != 0) && (iVar6 = 0, 0 < iVar7)) {
        do {
          iVar2 = *(int *)(*(int *)(pUStack_4 + 0x1694) + iVar6 * 4);
          pAVar3 = *(AEmitter **)(iVar2 + 4);
          if ((pAVar3 != (AEmitter *)0x0) && (pAVar3 == this)) {
            *(undefined4 *)(iVar2 + 4) = 0;
          }
          iVar6 = iVar6 + 1;
        } while (iVar6 < iVar7);
      }
      iVar7 = *(int *)(pUStack_4 + 0x16a4);
      if ((iVar7 != 0) && (iVar6 = 0, 0 < iVar7)) {
        do {
          iVar2 = *(int *)(*(int *)(pUStack_4 + 0x16a0) + iVar6 * 4);
          pAVar3 = *(AEmitter **)(iVar2 + 8);
          if ((pAVar3 != (AEmitter *)0x0) && (pAVar3 == this)) {
            *(undefined4 *)(iVar2 + 8) = 0;
          }
          iVar6 = iVar6 + 1;
        } while (iVar6 < iVar7);
      }
      if (*(AEmitter **)(pUStack_4 + 0x16ac) == this) {
        *(undefined4 *)(pUStack_4 + 0x16ac) = 0;
      }
      if ((*(int *)(pUStack_4 + 0x560) != 0) &&
         (iVar7 = *(int *)(pUStack_4 + 0x560) + -1, -1 < iVar7)) {
        do {
          pAVar3 = *(AEmitter **)(*(int *)(pUStack_4 + 0x55c) + iVar7 * 4);
          if (((pAVar3 != (AEmitter *)0x0) && (pAVar3 == this)) &&
             (iVar6 = 0, 0 < *(int *)(pUStack_4 + 0x560))) {
            do {
              if (*(AEmitter **)(*(int *)(pUStack_4 + 0x55c) + iVar6 * 4) == this) {
                thunk_FUN_10326200(iVar6,1);
                iVar6 = iVar6 + -1;
              }
              iVar6 = iVar6 + 1;
            } while (iVar6 < *(int *)(pUStack_4 + 0x560));
          }
          iVar7 = iVar7 + -1;
        } while (-1 < iVar7);
      }
    }
    pUVar4 = pUStack_4;
    this_00 = *(UObject **)(this + 0x3c);
    if (((this_00 != (UObject *)0x0) &&
        (iVar7 = UObject::IsA(this_00,&AL2Pickup::PrivateStaticClass), iVar7 != 0)) &&
       (*(AEmitter **)(this_00 + 0x3dc) == this)) {
      *(undefined4 *)(this_00 + 0x3dc) = 0;
    }
    if (pUStack_4 != (UObject *)0x0) {
      iVar7 = *(int *)(pUStack_4 + 0x16b0);
      if (iVar7 != 0) {
        if ((*(AEmitter **)(iVar7 + 8) != (AEmitter *)0x0) && (*(AEmitter **)(iVar7 + 8) == this)) {
          *(undefined4 *)(iVar7 + 8) = 0;
        }
        pAVar3 = *(AEmitter **)(*(int *)(pUStack_4 + 0x16b0) + 0xc);
        if ((pAVar3 != (AEmitter *)0x0) && (pAVar3 == this)) {
          *(undefined4 *)(*(int *)(pUStack_4 + 0x16b0) + 0xc) = 0;
        }
      }
      if ((*(int *)(pUStack_4 + 0x16b8) != 0) &&
         (iVar7 = *(int *)(pUStack_4 + 0x16b8) + -1, -1 < iVar7)) {
        this_01 = (FArray *)(pUStack_4 + 0x16b4);
        pUStack_4 = (UObject *)iVar7;
        do {
          pAVar3 = *(AEmitter **)(*(int *)this_01 + (int)pUStack_4 * 4);
          if (((pAVar3 != (AEmitter *)0x0) && (pAVar3 == this)) &&
             (iVar7 = 0, 0 < *(int *)(pUVar4 + 0x16b8))) {
            iVar6 = 1;
            do {
              if (*(AEmitter **)(*(int *)this_01 + iVar7 * 4) == this) {
                if (iVar7 < 0) {
                  appFailAssert("Index>=0",
                                "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h"
                                ,0x203);
                }
                if (*(int *)(pUVar4 + 0x16b8) < iVar7) {
                  appFailAssert("Index<=ArrayNum",
                                "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h"
                                ,0x204);
                }
                if (*(int *)(pUVar4 + 0x16b8) < iVar6) {
                  appFailAssert("Index+Count<=ArrayNum",
                                "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h"
                                ,0x205);
                }
                FArray::Remove(this_01,iVar7,1,4);
                iVar7 = iVar7 + -1;
                iVar6 = iVar6 + -1;
              }
              iVar7 = iVar7 + 1;
              iVar6 = iVar6 + 1;
            } while (iVar7 < *(int *)(pUVar4 + 0x16b8));
          }
          pUStack_4 = (UObject *)((int)pUStack_4 + -1);
        } while (-1 < (int)pUStack_4);
      }
    }
  }
  iVar7 = 0;
  pUVar5 = USound::Audio;
  if (0 < *(int *)(this + 0x410)) {
    do {
      if (((*(int *)GIsEditor_exref == 0) && (*(int *)(*(int *)(this + 0x40c) + iVar7 * 4) != 0)) &&
         (pUVar5 != (UAudioSubsystem *)0x0)) {
        (**(code **)(*(int *)pUVar5 + 0x88))
                  (this,*(undefined4 *)(*(int *)(this + 0x40c) + iVar7 * 4));
        pUVar5 = USound::Audio;
      }
      iVar7 = iVar7 + 1;
    } while (iVar7 < *(int *)(this + 0x410));
  }
  if ((DAT_10c51044 != 0) && (*(int *)(DAT_10c51044 + 0x2fc) != 0)) {
    if (*(AEmitter **)(*(int *)(DAT_10c51044 + 0x2fc) + 8) == this) {
      *(undefined4 *)(*(int *)(DAT_10c51044 + 0x2fc) + 8) = 0;
    }
    if (*(AEmitter **)(*(int *)(DAT_10c51044 + 0x2fc) + 0xc) == this) {
      *(undefined4 *)(*(int *)(DAT_10c51044 + 0x2fc) + 0xc) = 0;
    }
  }
  return;
}


// ==== 103153e3 FSceneNode::Project

/* public: class FPlane __thiscall FSceneNode::Project(class FVector) */

void __thiscall
FSceneNode::Project(FSceneNode *this,float *param_2,float param_3,float param_4,float param_5)

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
  
                    /* 0x153e3  7215  ?Project@FSceneNode@@QAE?AVFPlane@@VFVector@@@Z */
  fVar1 = *(float *)(this + 0x128);
  fVar2 = *(float *)(this + 0x118);
  fVar3 = *(float *)(this + 0x138);
  fVar4 = *(float *)(this + 0x148);
  fVar5 = *(float *)(this + 300);
  fVar6 = *(float *)(this + 0x11c);
  fVar7 = *(float *)(this + 0x13c);
  fVar8 = *(float *)(this + 0x14c);
  fVar9 = param_5 * *(float *)(this + 0x140) +
          *(float *)(this + 0x130) * param_4 + *(float *)(this + 0x120) * param_3 +
          *(float *)(this + 0x150);
  fVar10 = 1.0 / fVar9;
  *param_2 = fVar10 * (param_4 * *(float *)(this + 0x124) + param_3 * *(float *)(this + 0x114) +
                       param_5 * *(float *)(this + 0x134) + *(float *)(this + 0x144));
  param_2[1] = (fVar3 * param_5 + fVar2 * param_3 + fVar1 * param_4 + fVar4) * fVar10;
  param_2[2] = fVar10 * (fVar7 * param_5 + fVar6 * param_3 + fVar5 * param_4 + fVar8);
  param_2[3] = fVar9;
  return;
}


// ==== 103153e8 AFileLog::operator_new

/* public: static void * __cdecl AFileLog::operator new(unsigned int,enum EInternal *) */

void * __cdecl AFileLog::operator_new(uint param_1,EInternal *param_2)

{
                    /* 0x153e8  1555  ??2AFileLog@@SAPAXIPAW4EInternal@@@Z */
  return param_2;
}


// ==== 103153ed UCanvas::DrawActor

/* public: void __thiscall UCanvas::DrawActor(class AActor *,int,int,float) */

void __thiscall
UCanvas::DrawActor(UCanvas *this,AActor *param_1,int param_2,int param_3,float param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 *puVar4;
  int *piVar5;
  FActorSceneNode aFStack_230 [516];
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined1 *puStack_14;
  void *pvStack_10;
  undefined1 *puStack_c;
  int iStack_8;
  
                    /* 0x153ed  3852  ?DrawActor@UCanvas@@QAEXPAVAActor@@HHM@Z */
  puStack_c = &LAB_1081b83b;
  pvStack_10 = ExceptionList;
  puStack_14 = &stack0xfffffdc4;
  iStack_8 = 0;
  ExceptionList = &pvStack_10;
  puVar4 = &stack0xfffffdc4;
  if (*(FCanvasUtil **)(this + 0xa8) != (FCanvasUtil *)0x0) {
    ExceptionList = &pvStack_10;
    FCanvasUtil::Flush(*(FCanvasUtil **)(this + 0xa8));
    puVar4 = puStack_14;
  }
  puStack_14 = puVar4;
  if (param_1 == (AActor *)0x0) {
    ExceptionList = pvStack_10;
    return;
  }
  iVar1 = *(int *)(*(int *)(this + 0xa4) + 0x3c);
  uStack_2c = *(undefined4 *)(iVar1 + 0x1bc);
  uStack_28 = *(undefined4 *)(iVar1 + 0x1c0);
  uStack_24 = *(undefined4 *)(iVar1 + 0x1c4);
  iVar2 = *(int *)(*(int *)(this + 0xa4) + 0x3c);
  uStack_20 = *(undefined4 *)(iVar2 + 0x1c8);
  uStack_1c = *(undefined4 *)(iVar2 + 0x1cc);
  uStack_18 = *(undefined4 *)(iVar2 + 0x1d0);
  (**(code **)(**(int **)(*(int *)(this + 0xa4) + 0x3c) + 0x36c))(iVar1,&uStack_2c,&uStack_20);
  uVar3 = *(undefined4 *)(*(int *)(*(int *)(this + 0xa4) + 0x3c) + 0x5b8);
  if (param_2 != 0) {
    *(undefined4 *)(*(int *)(*(int *)(this + 0xa4) + 0x3c) + 0x5b8) = 1;
  }
  if (param_3 != 0) {
    (**(code **)(**(int **)(*(int *)(this + 0xa4) + 0x154) + 0x10))(0,0xff000000,1,0x3f800000,0,0);
  }
  piVar5 = (int *)FActorSceneNode::FActorSceneNode
                            (aFStack_230,*(int *)(this + 0xa4),*(int *)(this + 0xa4) + 0xdc,param_1,
                             iVar1,uStack_2c,uStack_28,uStack_24,uStack_20,uStack_1c,uStack_18,
                             param_4);
  iStack_8._0_1_ = 1;
  (**(code **)(*piVar5 + 8))(*(undefined4 *)(*(int *)(this + 0xa4) + 0x154));
  iStack_8 = (uint)iStack_8._1_3_ << 8;
  FActorSceneNode::~FActorSceneNode(aFStack_230);
  *(undefined4 *)(*(int *)(*(int *)(this + 0xa4) + 0x3c) + 0x5b8) = uVar3;
  ExceptionList = pvStack_10;
  return;
}


// ==== 103153f7 HTerrainToolLayer::IsA

/* public: virtual int __thiscall HTerrainToolLayer::IsA(unsigned short const *)const  */

int __thiscall HTerrainToolLayer::IsA(HTerrainToolLayer *this,ushort *param_1)

{
  int iVar1;
  
                    /* 0x153f7  5802  ?IsA@HTerrainToolLayer@@UBEHPBG@Z */
  iVar1 = appStricmp((ushort *)L"HTerrainToolLayer",param_1);
  if (iVar1 != 0) {
    iVar1 = appStricmp((ushort *)L"HHitProxy",param_1);
    if (iVar1 != 0) {
      return 0;
    }
  }
  return 1;
}


// ==== 10315406 AStaticMeshActor::AStaticMeshActor

/* public: __thiscall AStaticMeshActor::AStaticMeshActor(class AStaticMeshActor const &) */

AStaticMeshActor * __thiscall
AStaticMeshActor::AStaticMeshActor(AStaticMeshActor *this,AStaticMeshActor *param_1)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x15406  229  ??0AStaticMeshActor@@QAE@ABV0@@Z */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_10804cee;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  AActor::AActor((AActor *)this,(AActor *)param_1);
  uStack_4 = 0;
  *(undefined ***)this = vftable;
  *(uint *)(this + 0x3bc) =
       *(uint *)(this + 0x3bc) ^ (*(uint *)(param_1 + 0x3bc) ^ *(uint *)(this + 0x3bc)) & 1;
  *(undefined4 *)(this + 0x3c0) = *(undefined4 *)(param_1 + 0x3c0);
  *(undefined4 *)(this + 0x3c4) = *(undefined4 *)(param_1 + 0x3c4);
  *(undefined4 *)(this + 0x3c8) = *(undefined4 *)(param_1 + 0x3c8);
  *(undefined4 *)(this + 0x3cc) = *(undefined4 *)(param_1 + 0x3cc);
  thunk_FUN_1037c5b0(param_1 + 0x3d0);
  *(uint *)(this + 0x3dc) =
       *(uint *)(this + 0x3dc) ^ (*(uint *)(param_1 + 0x3dc) ^ *(uint *)(this + 0x3dc)) & 1;
  *(undefined4 *)(this + 0x3e0) = *(undefined4 *)(param_1 + 0x3e0);
  *(undefined4 *)(this + 0x3e4) = *(undefined4 *)(param_1 + 0x3e4);
  *(undefined4 *)(this + 1000) = *(undefined4 *)(param_1 + 1000);
  *(undefined4 *)(this + 0x3ec) = *(undefined4 *)(param_1 + 0x3ec);
  *(undefined4 *)(this + 0x3f0) = *(undefined4 *)(param_1 + 0x3f0);
  *(uint *)(this + 0x3f4) =
       *(uint *)(this + 0x3f4) ^ (*(uint *)(param_1 + 0x3f4) ^ *(uint *)(this + 0x3f4)) & 1;
  ExceptionList = pvStack_c;
  return this;
}


// ==== 1031540b ULevel::TickNetServer

/* public: virtual void __thiscall ULevel::TickNetServer(float) */

void __thiscall ULevel::TickNetServer(ULevel *this,float param_1)

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
  int iVar11;
  float10 fVar12;
  FString aFStack_70 [12];
  FString aFStack_64 [12];
  FString aFStack_58 [12];
  FString aFStack_4c [16];
  undefined1 *puStack_3c;
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  int iStack_28;
  int iStack_24;
  int iStack_20;
  int iStack_1c;
  int iStack_18;
  undefined1 *puStack_14;
  void *pvStack_10;
  undefined1 *puStack_c;
  int iStack_8;
  
                    /* 0x1540b  8635  ?TickNetServer@ULevel@@UAEXM@Z */
  puStack_c = &LAB_10820514;
  pvStack_10 = ExceptionList;
  puStack_14 = &stack0xffffff84;
  iStack_8 = 0;
  iStack_18 = 0;
  pAVar2 = (AActor *)**(undefined4 **)(this + 0x38);
  ExceptionList = &pvStack_10;
  puVar7 = &stack0xffffff84;
  if ((pAVar2 != (AActor *)0x0) &&
     (ExceptionList = &pvStack_10, puVar7 = &stack0xffffff84,
     (*(uint *)(pAVar2 + 0x74) & 0x800) != 0)) {
    iVar11 = *(int *)(*(int *)(this + 0x70) + 0x3c);
    ExceptionList = &pvStack_10;
    while( true ) {
      iVar11 = iVar11 + -1;
      iStack_28 = iVar11;
      if (iVar11 < 0) break;
      UNetConnection::SetActorDirty
                (*(UNetConnection **)(*(int *)(*(int *)(this + 0x70) + 0x38) + iVar11 * 4),pAVar2);
    }
    *(uint *)(pAVar2 + 0x74) = *(uint *)(pAVar2 + 0x74) & 0xfffff7ff;
    puVar7 = puStack_14;
  }
  puStack_14 = puVar7;
  for (iStack_20 = *(int *)(this + 0x13c); iStack_20 < *(int *)(this + 0x3c);
      iStack_20 = iStack_20 + 1) {
    pAVar2 = *(AActor **)(*(int *)(this + 0x38) + iStack_20 * 4);
    if ((pAVar2 != (AActor *)0x0) && ((*(uint *)(pAVar2 + 0x74) & 0x800) != 0)) {
      iVar11 = *(int *)(*(int *)(this + 0x70) + 0x3c);
      while( true ) {
        iVar11 = iVar11 + -1;
        iStack_2c = iVar11;
        if (iVar11 < 0) break;
        UNetConnection::SetActorDirty
                  (*(UNetConnection **)(*(int *)(*(int *)(this + 0x70) + 0x38) + iVar11 * 4),pAVar2)
        ;
      }
      *(uint *)(pAVar2 + 0x74) = *(uint *)(pAVar2 + 0x74) & 0xfffff7ff;
    }
  }
  piVar1 = (int *)(DAT_10ddd7e0 + DAT_10dddaf8 * 4);
  uVar4 = rdtsc();
  *piVar1 = *piVar1 - (int)uVar4;
  iVar11 = *(int *)(*(int *)(this + 0x70) + 0x3c);
  while( true ) {
    iVar11 = iVar11 + -1;
    iStack_30 = iVar11;
    if (iVar11 < 0) break;
    iVar8 = (**(code **)(*(int *)this + 0x80))
                      (*(undefined4 *)(*(int *)(*(int *)(this + 0x70) + 0x38) + iVar11 * 4));
    iStack_18 = iStack_18 + iVar8;
  }
  piVar1 = (int *)(DAT_10ddd7e0 + DAT_10dddaf8 * 4);
  uVar4 = rdtsc();
  *piVar1 = *piVar1 + (int)uVar4 + -0xc;
  iVar11 = FUN_107a6660();
  iVar8 = FUN_107a6660();
  if ((iVar11 != iVar8) && (*(int *)GLog_exref != 0)) {
    FString::operator*((FString *)(this + 0x94));
    pAVar9 = GetLevelInfo(this);
    FString::operator*((FString *)(pAVar9 + 0x500));
    LocalizeProgress((ushort *)L"RunningNet",(ushort *)L"Engine",(ushort *)0x0);
    FOutputDevice::Logf2((FOutputDevice *)GLog_exref,*(EName *)GLog_exref,(ushort *)0x314);
  }
  if (iStack_18 != 0) {
    iVar11 = 0;
    while( true ) {
      if (*(int *)(*(int *)(this + 0x70) + 0x3c) <= iVar11) break;
      iVar8 = *(int *)(*(int *)(*(int *)(this + 0x70) + 0x38) + iVar11 * 4);
      if ((*(int *)(iVar8 + 0x3c) != 0) && (*(int *)(iVar8 + 0x78) == 3)) {
        iStack_24 = iVar11;
        if ((*(byte *)(iVar8 + 0xdc) & 1) != 0) {
          iStack_1c = 0;
          for (iStack_34 = 0; iStack_34 < *(int *)(this + 0x3c); iStack_34 = iStack_34 + 1) {
            iStack_1c = iStack_1c + (uint)(*(int *)(*(int *)(this + 0x38) + iStack_34 * 4) != 0);
          }
          uVar3 = *(uint *)(*(int *)(this + 0x70) + 0x3c);
          dVar6 = (double)*(int *)(DAT_10ddd7e0 + DAT_10dddaf8 * 4);
          if (*(int *)(DAT_10ddd7e0 + DAT_10dddaf8 * 4) < 0) {
            dVar6 = dVar6 + 4294967296.0;
          }
          dVar5 = (double)*(int *)(DAT_10ddd7e0 + DAT_10dddacc * 4);
          if (*(int *)(DAT_10ddd7e0 + DAT_10dddacc * 4) < 0) {
            dVar5 = dVar5 + 4294967296.0;
          }
          fVar12 = (float10)(**(code **)(**(int **)(this + 0x74) + 0xa8))
                                      (uVar3,dVar5 * *(double *)GSecondsPerCycle_exref * 1000.0,
                                       iStack_1c,dVar6 * *(double *)GSecondsPerCycle_exref * 1000.0,
                                       *(uint *)(DAT_10ddd7e0 + DAT_10dddb7c * 4) / uVar3,
                                       *(uint *)(DAT_10ddd7e0 + DAT_10dddb74 * 4) / uVar3);
          iVar11 = appRound((float)fVar12);
          FString::Printf((ushort *)aFStack_58,
                          L"r=%i cli=%i act=%03.1f (%i) net=%03.1f pv/c=%i rep/c=%i rpc/c=%i",iVar11
                         );
          iStack_8._0_1_ = 1;
          puVar10 = FString::operator*(aFStack_58);
          FString::FString(aFStack_4c,puVar10);
          iStack_8._0_1_ = 2;
          puStack_3c = &stack0xffffff80;
          FName::FName((FName *)&stack0xffffff80,0);
          APlayerController::eventClientMessage(*(APlayerController **)(iVar8 + 0x3c),aFStack_4c);
          iStack_8._0_1_ = 1;
          FString::~FString(aFStack_4c);
          iStack_8 = (uint)iStack_8._1_3_ << 8;
          FString::~FString(aFStack_58);
        }
        iVar11 = iStack_24;
        if ((*(byte *)(iVar8 + 0xdc) & 2) != 0) {
          dVar6 = *(double *)GSecondsPerCycle_exref * 1000.0 *
                  (double)*(int *)(*(int *)(iVar8 + 0x74) + 0x8c);
          FString::Printf((ushort *)aFStack_70,L"snd=%02.1f recv=%02.1f",SUB84(dVar6,0),
                          (int)((ulonglong)dVar6 >> 0x20),
                          (double)*(int *)(*(int *)(iVar8 + 0x74) + 0x90) *
                          *(double *)GSecondsPerCycle_exref * 1000.0);
          iStack_8._0_1_ = 3;
          puVar10 = FString::operator*(aFStack_70);
          FString::FString(aFStack_64,puVar10);
          iStack_8._0_1_ = 4;
          FName::FName((FName *)&stack0xffffff80,0);
          APlayerController::eventClientMessage(*(APlayerController **)(iVar8 + 0x3c),aFStack_64);
          iStack_8._0_1_ = 3;
          FString::~FString(aFStack_64);
          iStack_8 = (uint)iStack_8._1_3_ << 8;
          FString::~FString(aFStack_70);
        }
      }
      iVar11 = iVar11 + 1;
    }
  }
  ExceptionList = pvStack_10;
  return;
}


// ==== 10315410 thunk_FUN_103efd00 thunk -> 103efd00

// ==== 10315415 APawn::NotifyDie

/* public: void __thiscall APawn::NotifyDie(void) */

void __thiscall APawn::NotifyDie(APawn *this)

{
  USkeletalMeshInstance *pUVar1;
  UClass *pUVar2;
  int iVar3;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  int iStack_1c;
  
                    /* 0x15415  6262  ?NotifyDie@APawn@@QAEXXZ */
  if ((((this[0x34] == (APawn)0x3) && (((byte)this[0x77c] & 2) == 0)) &&
      (((byte)this[0x694] & 4) == 0)) && (iStack_1c = *(int *)(this + 0x134), iStack_1c != 0)) {
    pUVar1 = (USkeletalMeshInstance *)thunk_FUN_104b4240();
    FName::FName((FName *)&iStack_1c,(ushort *)L"e_bone",1);
    USkeletalMeshInstance::GetAliasesTagBoneName(pUVar1);
    uStack_3c = 0x1062bb59;
    pUVar2 = UObject::StaticLoadClass
                       (&AActor::PrivateStaticClass,(UObject *)0x0,
                        (ushort *)L"LineageEffect.e_u061_lastbreath",(ushort *)0x0,0x2000,
                        (UPackageMap *)0x0);
    if (pUVar2 != (UClass *)0x0) {
      FName::FName((FName *)&stack0xfffffff4,0);
      iVar3 = FName::operator!=((FName *)&stack0xfffffff0,(FName *)&stack0xfffffff4);
      if (iVar3 != 0) {
        uStack_40 = *(undefined4 *)(this + 0x1c8);
        uStack_3c = *(undefined4 *)(this + 0x1cc);
        iVar3 = **(int **)(*(int *)(this + 0x3c) + 0xe4);
        uStack_4c = *(undefined4 *)(this + 0x1bc);
        uStack_50 = *(undefined4 *)(this + 0x1c0);
        uStack_44 = *(undefined4 *)(this + 0x1c4);
        uStack_48 = uStack_50;
        FName::FName((FName *)&uStack_50,0);
        iVar3 = (**(code **)(iVar3 + 0xc0))(pUVar2);
        if (iVar3 != 0) {
          AActor::AttachToBone((AActor *)this,iVar3,uStack_44,0);
        }
      }
    }
  }
  return;
}


// ==== 1031541f UVertexStreamPosNormTex::~UVertexStreamPosNormTex

/* public: virtual __thiscall UVertexStreamPosNormTex::~UVertexStreamPosNormTex(void) */

void __thiscall UVertexStreamPosNormTex::~UVertexStreamPosNormTex(UVertexStreamPosNormTex *this)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  uint uStack_4;
  
                    /* 0x1541f  1493  ??1UVertexStreamPosNormTex@@UAE@XZ */
  puStack_8 = &LAB_107fdbd3;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *(undefined ***)this = vftable;
  uStack_4 = 1;
  UObject::ConditionalDestroy((UObject *)this);
  uStack_4 = uStack_4 & 0xffffff00;
  thunk_FUN_10391120();
  uStack_4 = 0xffffffff;
  UVertexStreamBase::~UVertexStreamBase((UVertexStreamBase *)this);
  ExceptionList = pvStack_c;
  return;
}


// ==== 10315424 UAudioSubsystem::UAudioSubsystem

/* protected: __thiscall UAudioSubsystem::UAudioSubsystem(void) */

UAudioSubsystem * __thiscall UAudioSubsystem::UAudioSubsystem(UAudioSubsystem *this)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x15424  683  ??0UAudioSubsystem@@IAE@XZ */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_107f71b9;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  USubsystem::USubsystem((USubsystem *)this);
  *(undefined ***)this = vftable_for_UObject_;
  *(undefined ***)(this + 0x34) = vftable_for_FExec_;
  ExceptionList = pvStack_c;
  return this;
}


// ==== 10315429 APickup::operator_new

/* public: static void * __cdecl APickup::operator new(unsigned int,enum EInternal *) */

void * __cdecl APickup::operator_new(uint param_1,EInternal *param_2)

{
                    /* 0x15429  1679  ??2APickup@@SAPAXIPAW4EInternal@@@Z */
  return param_2;
}


// ==== 10315433 thunk_FUN_10384e80 thunk -> 10384e80

// ==== 1031543d UDemoRecConnection::GetDriver

/* public: class UDemoRecDriver * __thiscall UDemoRecConnection::GetDriver(void) */

UDemoRecDriver * __thiscall UDemoRecConnection::GetDriver(UDemoRecConnection *this)

{
                    /* 0x1543d  4575  ?GetDriver@UDemoRecConnection@@QAEPAVUDemoRecDriver@@XZ */
  return *(UDemoRecDriver **)(this + 0x74);
}


// ==== 10315442 FEngineStats::Init (decompilacao falhou: falhou:Exception while decompiling 10315442: process: timeout )

// ==== 10315447 thunk_FUN_10578200 thunk -> 10578200

// ==== 10315451 ANCubics::GetMovementState

/* public: int __thiscall ANCubics::GetMovementState(class APawn *) */

int __thiscall ANCubics::GetMovementState(ANCubics *this,APawn *param_1)

{
  int iVar1;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x15451  4789  ?GetMovementState@ANCubics@@QAEHPAVAPawn@@@Z */
  puStack_c = &LAB_108188a0;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  if (param_1 == (APawn *)0x0) {
    return -1;
  }
  if (this[0x4dd] != (ANCubics)0x2) {
    if (((byte)param_1[0x6ac] & 1) != 0) {
      return 5;
    }
    if ((((byte)param_1[0x714] & 1) == 0) ||
       ((*(int *)(param_1 + 0x14d8) != 0 &&
        (param_1 = *(APawn **)(*(int *)(param_1 + 0x14d8) + 0x3bc), param_1 != (APawn *)0x0)))) {
      ExceptionList = &pvStack_10;
      iVar1 = FVector::IsZero((FVector *)(param_1 + 0x1e0));
      if (iVar1 != 0) {
        ExceptionList = pvStack_10;
        return 1;
      }
      ExceptionList = pvStack_10;
      return 0;
    }
  }
  return (uint)(byte)this[0x4dd];
}


// ==== 10315460 UL2ConsoleWnd::MoveCameraByCharacter

/* public: virtual void __thiscall UL2ConsoleWnd::MoveCameraByCharacter(enum RaceType,enum
   ClassType,enum L2GenderType) */

void __thiscall
UL2ConsoleWnd::MoveCameraByCharacter
          (UL2ConsoleWnd *this,RaceType param_1,ClassType param_2,L2GenderType param_3)

{
  AActor *pAVar1;
  EFindName EVar2;
  FName aFStack_2c [4];
  undefined4 uStack_28;
  wchar_t *pwVar3;
  ushort *puVar4;
  FString aFStack_18 [12];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x15460  6188
                       ?MoveCameraByCharacter@UL2ConsoleWnd@@UAEXW4RaceType@@W4ClassType@@W4L2GenderType@@@Z
                        */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_10811399;
  pvStack_c = ExceptionList;
  if (*(int *)(this + 0x50) == 0) {
    return;
  }
  if (param_1 == 0xffffffff) {
    return;
  }
  pAVar1 = *(AActor **)(**(int **)(*(int *)(*(int *)(this + 0x50) + 0x54) + 0x38) + 0x3c);
  if (pAVar1 == (AActor *)0x0) {
    return;
  }
  ExceptionList = &pvStack_c;
  FString::FString(aFStack_18);
  uStack_4 = 0;
  switch(param_1) {
  case 0:
    pwVar3 = L"Human";
    break;
  case 1:
    pwVar3 = L"Elf";
    break;
  case 2:
    pwVar3 = L"DarkElf";
    break;
  case 3:
    pwVar3 = L"Orc";
    break;
  case 4:
    pwVar3 = L"Dwarf";
    break;
  default:
    goto switchD_1044264c_default;
  }
  uStack_28 = 0x1044267e;
  FString::operator=(aFStack_18,(ushort *)pwVar3);
switchD_1044264c_default:
  switch(param_2) {
  case 0:
  case 0x12:
  case 0x1f:
  case 0x2c:
  case 0x35:
    pwVar3 = L"_Knight";
    break;
  default:
    goto switchD_1044268e_caseD_1;
  case 10:
  case 0x19:
  case 0x26:
  case 0x31:
    pwVar3 = L"_Mage";
  }
  uStack_28 = 0x104426ab;
  FString::operator+=(aFStack_18,(ushort *)pwVar3);
switchD_1044268e_caseD_1:
  if (param_3 == 0) {
    puVar4 = (ushort *)&DAT_1089156c;
  }
  else {
    if (param_3 != 1) goto LAB_104426cf;
    puVar4 = (ushort *)&DAT_10891574;
  }
  uStack_28 = 0x104426cf;
  FString::operator+=(aFStack_18,puVar4);
LAB_104426cf:
  uStack_28 = 0x104426de;
  FString::operator+=(aFStack_18,(ushort *)L"_Warp");
  uStack_28 = 0;
  EVar2 = 1;
  puVar4 = FString::operator*(aFStack_18);
  FName::FName(aFStack_2c,puVar4,EVar2);
  AActor::eventTriggerEvent(pAVar1);
  uStack_4 = 0xffffffff;
  FString::~FString(aFStack_18);
  ExceptionList = pvStack_c;
  return;
}


// ==== 10315465 AReplicationInfo::AReplicationInfo

/* public: __thiscall AReplicationInfo::AReplicationInfo(class AReplicationInfo const &) */

AReplicationInfo * __thiscall
AReplicationInfo::AReplicationInfo(AReplicationInfo *this,AReplicationInfo *param_1)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x15465  205  ??0AReplicationInfo@@QAE@ABV0@@Z */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_108032e8;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  AInfo::AInfo((AInfo *)this,(AInfo *)param_1);
  *(undefined ***)this = vftable;
  ExceptionList = pvStack_c;
  return this;
}


// ==== 1031546f UGameEngine::AddPetInventoryItem

/* public: virtual void __thiscall UGameEngine::AddPetInventoryItem(struct ItemInfo &) */

void __thiscall UGameEngine::AddPetInventoryItem(UGameEngine *this,ItemInfo *param_1)

{
                    /* 0x1546f  3313  ?AddPetInventoryItem@UGameEngine@@UAEXAAUItemInfo@@@Z */
                    /* WARNING: Could not recover jumptable at 0x10489efb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(this + 0x68) + 0x438))();
  return;
}


// ==== 10315474 ANLine::ANLine

/* public: __thiscall ANLine::ANLine(class ANLine const &) */

ANLine * __thiscall ANLine::ANLine(ANLine *this,ANLine *param_1)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x15474  163  ??0ANLine@@QAE@ABV0@@Z */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_1080a308;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  AActor::AActor((AActor *)this,(AActor *)param_1);
  *(undefined ***)this = vftable;
  *(undefined4 *)(this + 0x3bc) = *(undefined4 *)(param_1 + 0x3bc);
  this[0x3c0] = param_1[0x3c0];
  ExceptionList = pvStack_c;
  return this;
}


// ==== 10325480 FUN_10325480

ushort FUN_10325480(ushort param_1)

{
  if (0xff < param_1) {
    param_1 = 0x7f;
  }
  return param_1;
}


// ==== 103254a0 FUN_103254a0

void FUN_103254a0(undefined4 param_1)

{
  (**(code **)(**(int **)GMalloc_exref + 8))(param_1);
  return;
}


// ==== 103254c0 FUN_103254c0

void FUN_103254c0(undefined4 param_1)

{
  (**(code **)(**(int **)GMalloc_exref + 8))(param_1);
  return;
}


// ==== 10325500 FUN_10325500

void FUN_10325500(void)

{
  return;
}


// ==== 10325510 FUN_10325510

void FUN_10325510(void)

{
  return;
}


// ==== 10325520 FUN_10325520

void FUN_10325520(void)

{
  FTextureModifyinfo *in_ECX;
  
  FTextureModifyinfo::Clear(in_ECX);
  return;
}


// ==== 10325530 FUN_10325530

void FUN_10325530(void)

{
  FName *in_ECX;
  
  FName::FName(in_ECX);
  return;
}


// ==== 10325540 FUN_10325540

UClass * FUN_10325540(void)

{
  return &AInfo::PrivateStaticClass;
}


// ==== 10325550 FUN_10325550

UClass * FUN_10325550(void)

{
  return &AFileLog::PrivateStaticClass;
}


// ==== 10325560 FUN_10325560

undefined4 FUN_10325560(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}


// ==== 10325570 FUN_10325570

int FUN_10325570(int param_1)

{
  int *in_ECX;
  
  return *in_ECX + param_1;
}


// ==== 10325580 FUN_10325580

void FUN_10325580(int param_1,int param_2)

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
  FArray::Remove(in_ECX,param_1,param_2,1);
  return;
}


// ==== 10325640 FUN_10325640

void FUN_10325640(void)

{
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107efd29;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX,0);
  ExceptionList = local_c;
  return;
}


// ==== 103256b0 FUN_103256b0

void FUN_103256b0(int param_1,int param_2)

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


// ==== 10325750 FUN_10325750

void FUN_10325750(void)

{
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107efd49;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX,0);
  ExceptionList = local_c;
  return;
}


// ==== 103257c0 FUN_103257c0

void FUN_103257c0(void)

{
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107efd69;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX,0);
  ExceptionList = local_c;
  return;
}


// ==== 10325820 FUN_10325820

void FUN_10325820(void)

{
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107efd89;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX,0);
  ExceptionList = local_c;
  return;
}


// ==== 10325890 FUN_10325890

void FUN_10325890(void)

{
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107efda9;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX,0);
  ExceptionList = local_c;
  return;
}


// ==== 10325900 FUN_10325900

void FUN_10325900(void)

{
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107efdc9;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX,0);
  ExceptionList = local_c;
  return;
}


// ==== 10325960 FUN_10325960

void FUN_10325960(void)

{
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107efde9;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX,0);
  ExceptionList = local_c;
  return;
}


// ==== 10325a30 FUN_10325a30

void FUN_10325a30(int param_1)

{
  FStringNoInit *this;
  byte bVar1;
  int iVar2;
  ushort *puVar3;
  int iVar4;
  undefined4 uVar5;
  FOutputDevice *this_00;
  undefined4 uVar6;
  FString local_30 [20];
  int local_1c;
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  puStack_c = &LAB_107efe09;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffc4;
  local_8 = 0;
  ExceptionList = &local_10;
  FString::FString(local_30);
  local_8 = CONCAT31(local_8._1_3_,1);
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,local_30);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  local_18 = 0;
  do {
    iVar2 = local_18;
    puVar3 = FString::operator*(local_30);
    iVar4 = appStrlen(puVar3);
    if (iVar4 <= iVar2) {
      FString::operator+=(local_30,(ushort *)L".txt");
      this = (FStringNoInit *)(local_1c + 0x3c0);
      FStringNoInit::operator=(this,local_30);
      if (*(int *)GLog_exref != 0) {
        FString::operator*((FString *)this);
        FOutputDevice::Logf2(this_00,*(ushort **)GLog_exref);
      }
      iVar2 = **(int **)GFileManager_exref;
      uVar5 = *(undefined4 *)GNull_exref;
      uVar6 = 0x14;
      puVar3 = FString::operator*((FString *)this);
      uVar5 = (**(code **)(iVar2 + 0xc))(puVar3,uVar6,uVar5);
      *(undefined4 *)(local_1c + 0x3bc) = uVar5;
      local_8 = local_8 & 0xffffff00;
      FString::~FString(local_30);
      ExceptionList = local_10;
      return;
    }
    puVar3 = FString::operator*(local_30);
    if (puVar3[iVar2] == 0x5c) {
LAB_10325af3:
      puVar3 = FString::operator*(local_30);
      puVar3[iVar2] = 0x5f;
    }
    else {
      puVar3 = FString::operator*(local_30);
      if (puVar3[iVar2] == 0x2e) goto LAB_10325af3;
    }
    local_18 = iVar2 + 1;
  } while( true );
}


// ==== 10325bad Catch@10325bad

void Catch_10325bad(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x1c) = *(undefined4 *)(unaff_EBP + -0x20);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x1c,&DAT_10914c48);
}


// ==== 10325bc1 Catch@10325bc1

void Catch_10325bc1(void)

{
  int iVar1;
  ushort *puVar2;
  ushort *puVar3;
  int iVar4;
  int unaff_EBP;
  
  appUnwindf((ushort *)&DAT_10851d80,L"AFileLog::execOpenLog");
  iVar1 = *(int *)(unaff_EBP + 8);
  iVar4 = *(int *)(iVar1 + 0xc) - *(int *)(*(UObject **)(iVar1 + 4) + 0x54);
  puVar2 = UObject::GetFullName(*(UObject **)(iVar1 + 4),(ushort *)0x0);
  puVar3 = UObject::GetFullName(*(UObject **)(iVar1 + 8),(ushort *)0x0);
  appUnwindf((ushort *)L"(%s @ %s : %04X)",puVar3,puVar2,iVar4);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10325c90 FUN_10325c90

void FUN_10325c90(int param_1)

{
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_107efe20;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  if (*(undefined4 **)(in_ECX + 0x3bc) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(in_ECX + 0x3bc))(1);
  }
  *(undefined4 *)(in_ECX + 0x3bc) = 0;
  ExceptionList = local_10;
  return;
}


// ==== 10325d11 Catch@10325d11

void Catch_10325d11(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 10325d25 Catch@10325d25

void Catch_10325d25(void)

{
  int iVar1;
  ushort *puVar2;
  ushort *puVar3;
  int iVar4;
  int unaff_EBP;
  
  appUnwindf((ushort *)&DAT_10851d80,L"AFileLog::execCloseLog");
  iVar1 = *(int *)(unaff_EBP + 8);
  iVar4 = *(int *)(iVar1 + 0xc) - *(int *)(*(UObject **)(iVar1 + 4) + 0x54);
  puVar2 = UObject::GetFullName(*(UObject **)(iVar1 + 4),(ushort *)0x0);
  puVar3 = UObject::GetFullName(*(UObject **)(iVar1 + 8),(ushort *)0x0);
  appUnwindf((ushort *)L"(%s @ %s : %04X)",puVar3,puVar2,iVar4);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10325db0 FUN_10325db0

void FUN_10325db0(int param_1)

{
  byte bVar1;
  undefined1 uVar2;
  int iVar3;
  ushort *puVar4;
  int in_ECX;
  int iVar5;
  undefined *puVar6;
  undefined1 local_43c [1032];
  FString local_34 [12];
  FString local_28 [12];
  int local_1c;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_107efe42;
  local_10 = ExceptionList;
  local_14 = &stack0xfffffbb8;
  local_8 = 0;
  ExceptionList = &local_10;
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
  puVar6 = &DAT_10851e60;
  FString::operator+(local_28,(ushort *)local_34);
  local_8._0_1_ = 2;
  iVar5 = 0;
  while( true ) {
    local_1c = iVar5;
    iVar3 = FString::Len(local_34);
    if (iVar3 <= iVar5) break;
    puVar4 = FString::operator*(local_34);
    uVar2 = thunk_FUN_10325480(puVar4[iVar5]);
    local_43c[iVar5] = uVar2;
    iVar5 = iVar5 + 1;
  }
  local_43c[iVar5] = 0;
  (**(code **)(**(int **)(in_ECX + 0x3bc) + 4))(local_43c,iVar5,puVar6);
  local_8._0_1_ = 1;
  FString::~FString(local_34);
  local_8 = (uint)local_8._1_3_ << 8;
  FString::~FString(local_28);
  ExceptionList = local_10;
  return;
}


// ==== 10325eca Catch@10325eca

void Catch_10325eca(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x34);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 10325ede Catch@10325ede

void Catch_10325ede(void)

{
  int iVar1;
  ushort *puVar2;
  ushort *puVar3;
  int iVar4;
  int unaff_EBP;
  
  appUnwindf((ushort *)&DAT_10851d80,L"AFileLog::execLogf");
  iVar1 = *(int *)(unaff_EBP + 8);
  iVar4 = *(int *)(iVar1 + 0xc) - *(int *)(*(UObject **)(iVar1 + 4) + 0x54);
  puVar2 = UObject::GetFullName(*(UObject **)(iVar1 + 4),(ushort *)0x0);
  puVar3 = UObject::GetFullName(*(UObject **)(iVar1 + 8),(ushort *)0x0);
  appUnwindf((ushort *)L"(%s @ %s : %04X)",puVar3,puVar2,iVar4);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10325f90 FUN_10325f90

void FUN_10325f90(void)

{
  int iVar1;
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107efe69;
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


// ==== 10326050 FUN_10326050

void FUN_10326050(void)

{
  int iVar1;
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107efe89;
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
  FArray::Remove(in_ECX,0,iVar1,1);
  local_4 = 0xffffffff;
  FArray::~FArray(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 10326110 FUN_10326110

void FUN_10326110(void)

{
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107efeb1;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX,0);
  ExceptionList = local_c;
  return;
}


// ==== 10326160 FUN_10326160

void FUN_10326160(int param_1,int param_2)

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


// ==== 10326200 FUN_10326200

void FUN_10326200(int param_1,int param_2)

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


// ==== 10326340 FUN_10326340

void FUN_10326340(int param_1,int param_2)

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


// ==== 103263e0 FUN_103263e0

void FUN_103263e0(int param_1,int param_2)

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


// ==== 10326480 FUN_10326480

void FUN_10326480(int param_1,int param_2)

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


// ==== 10326520 FUN_10326520

void FUN_10326520(void)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107efed8;
  local_c = ExceptionList;
  local_4 = 0xffffffff;
  ExceptionList = &local_c;
  thunk_FUN_10325f90();
  ExceptionList = local_c;
  return;
}


// ==== 10326570 FUN_10326570

void FUN_10326570(void)

{
  int iVar1;
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107efef9;
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


// ==== 10326630 FUN_10326630

void FUN_10326630(void)

{
  int iVar1;
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107eff19;
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


// ==== 103266f0 FUN_103266f0

void FUN_103266f0(void)

{
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107eff41;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX,0);
  ExceptionList = local_c;
  return;
}


// ==== 10326740 FUN_10326740

void FUN_10326740(void)

{
  int iVar1;
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107eff69;
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


// ==== 10326800 FUN_10326800

void FUN_10326800(void)

{
  int iVar1;
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107eff89;
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


// ==== 103268c0 FUN_103268c0

void FUN_103268c0(void)

{
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107effb1;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX,0);
  ExceptionList = local_c;
  return;
}


// ==== 10326910 FUN_10326910

void FUN_10326910(void)

{
  int iVar1;
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107effd9;
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


// ==== 103269d0 FUN_103269d0

void FUN_103269d0(void)

{
  int iVar1;
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107efff9;
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


// ==== 10326a90 FUN_10326a90

void FUN_10326a90(void)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107f0018;
  local_c = ExceptionList;
  local_4 = 0xffffffff;
  ExceptionList = &local_c;
  thunk_FUN_10326630();
  ExceptionList = local_c;
  return;
}


// ==== 10326ae0 FUN_10326ae0

void FUN_10326ae0(void)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107f0038;
  local_c = ExceptionList;
  local_4 = 0xffffffff;
  ExceptionList = &local_c;
  thunk_FUN_10326740();
  ExceptionList = local_c;
  return;
}


// ==== 10326b30 FUN_10326b30

void FUN_10326b30(void)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107f0058;
  local_c = ExceptionList;
  local_4 = 0xffffffff;
  ExceptionList = &local_c;
  thunk_FUN_10326800();
  ExceptionList = local_c;
  return;
}


// ==== 10326b80 FUN_10326b80

void FUN_10326b80(void)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107f0078;
  local_c = ExceptionList;
  local_4 = 0xffffffff;
  ExceptionList = &local_c;
  thunk_FUN_10326570();
  ExceptionList = local_c;
  return;
}


// ==== 10326bd0 FUN_10326bd0

void FUN_10326bd0(void)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107f0098;
  local_c = ExceptionList;
  local_4 = 0xffffffff;
  ExceptionList = &local_c;
  thunk_FUN_10326910();
  ExceptionList = local_c;
  return;
}


// ==== 10326c20 FUN_10326c20

void FUN_10326c20(void)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107f00b8;
  local_c = ExceptionList;
  local_4 = 0xffffffff;
  ExceptionList = &local_c;
  thunk_FUN_103269d0();
  ExceptionList = local_c;
  return;
}


// ==== 10326c70 FUN_10326c70

void FUN_10326c70(void)

{
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f00e1;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX,0);
  ExceptionList = local_c;
  return;
}


// ==== 10326cc0 FUN_10326cc0

void FUN_10326cc0(void)

{
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f0111;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX,0);
  ExceptionList = local_c;
  return;
}


// ==== 10326d10 FUN_10326d10

void FUN_10326d10(void)

{
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f0141;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX,0);
  ExceptionList = local_c;
  return;
}


// ==== 10326d60 FUN_10326d60

void FUN_10326d60(void)

{
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f0171;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX,0);
  ExceptionList = local_c;
  return;
}


// ==== 10326db0 FUN_10326db0

void FUN_10326db0(void)

{
  UObject *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_107f02b0;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)in_ECX = AActor::vftable;
  local_4 = 0xd;
  UObject::ConditionalDestroy(in_ECX);
  local_4._1_3_ = (uint3)((uint)local_4 >> 8);
  local_4._0_1_ = 0xc;
  thunk_FUN_10326630();
  local_4._0_1_ = 0xb;
  thunk_FUN_10326630();
  local_4._0_1_ = 10;
  thunk_FUN_103269d0();
  local_4._0_1_ = 9;
  thunk_FUN_10326910();
  local_4._0_1_ = 8;
  thunk_FUN_10326570();
  local_4._0_1_ = 7;
  thunk_FUN_10326800();
  local_4._0_1_ = 6;
  FMatrix::~FMatrix((FMatrix *)(in_ECX + 0x218));
  local_4._0_1_ = 5;
  thunk_FUN_10326630();
  local_4._0_1_ = 4;
  thunk_FUN_10325f90();
  local_4._0_1_ = 3;
  thunk_FUN_10326630();
  local_4._0_1_ = 2;
  thunk_FUN_10326630();
  local_4._0_1_ = 1;
  thunk_FUN_10326740();
  local_4 = (uint)local_4._1_3_ << 8;
  thunk_FUN_10325f90();
  local_4 = 0xffffffff;
  UObject::~UObject(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 10326fb0 FUN_10326fb0

void FUN_10326fb0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *in_ECX;
  
  *in_ECX = 0x3f800000;
  in_ECX[1] = 0;
  in_ECX[2] = 0;
  in_ECX[3] = 0;
  in_ECX[4] = 0;
  in_ECX[6] = 0;
  in_ECX[7] = 0;
  in_ECX[8] = 0;
  in_ECX[9] = 0;
  in_ECX[0xb] = 0;
  in_ECX[5] = 0x3f800000;
  in_ECX[10] = 0x3f800000;
  in_ECX[0xc] = param_1;
  in_ECX[0xd] = param_2;
  in_ECX[0xe] = param_3;
  in_ECX[0xf] = 0x3f800000;
  return;
}


// ==== 10327040 FUN_10327040

void FUN_10327040(int param_1,int param_2,int param_3)

{
  uint uVar1;
  FMatrix *pFVar2;
  uint uVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 auStack_1c0 [10];
  FMatrix aFStack_198 [20];
  undefined4 uStack_184;
  undefined1 *puStack_180;
  undefined4 auStack_17c [9];
  FMatrix aFStack_158 [28];
  float local_118;
  undefined4 uStack_114;
  undefined4 local_110;
  undefined4 local_10c;
  undefined4 local_108;
  undefined4 local_104;
  float local_100;
  undefined4 local_fc;
  undefined4 local_f8;
  undefined4 local_f4;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined4 local_e8;
  undefined4 local_e4;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  float local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  void *local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  float local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined1 local_4c [4];
  undefined1 uStack_48;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107f0366;
  pvStack_c = ExceptionList;
  uVar3 = 0x4000 - param_3 >> 2 & 0x3fff;
  uVar1 = -param_3 >> 2 & 0x3fff;
  local_118 = -*(float *)(GMath_exref + uVar1 * 4 + 0x8c);
  local_d0 = 0x3f800000;
  local_cc = 0;
  local_c8 = 0;
  local_c4 = 0;
  local_c0 = 0;
  local_bc = *(undefined4 *)(GMath_exref + uVar3 * 4 + 0x8c);
  local_b8 = local_118;
  local_b4 = 0;
  local_b0 = 0;
  local_ac = *(undefined4 *)(GMath_exref + uVar1 * 4 + 0x8c);
  local_a8 = *(undefined4 *)(GMath_exref + uVar3 * 4 + 0x8c);
  local_a4 = 0;
  local_a0 = 0;
  local_9c = 0;
  local_98 = 0;
  local_94 = (void *)0x3f800000;
  uVar3 = 0x4000 - param_1 >> 2 & 0x3fff;
  uVar1 = -param_1 >> 2 & 0x3fff;
  local_90 = *(undefined4 *)(GMath_exref + uVar3 * 4 + 0x8c);
  local_8c = 0;
  local_88 = *(undefined4 *)(GMath_exref + uVar1 * 4 + 0x8c);
  local_84 = 0;
  local_80 = 0;
  local_78 = 0;
  local_74 = 0;
  local_7c = 0x3f800000;
  local_70 = -*(float *)(GMath_exref + uVar1 * 4 + 0x8c);
  local_6c = 0;
  local_68 = *(undefined4 *)(GMath_exref + uVar3 * 4 + 0x8c);
  local_64 = 0;
  local_60 = 0;
  local_5c = 0;
  local_58 = 0;
  local_54 = 0x3f800000;
  uVar3 = 0x4000 - param_2 >> 2 & 0x3fff;
  uVar1 = -param_2 >> 2 & 0x3fff;
  local_110 = *(undefined4 *)(GMath_exref + uVar3 * 4 + 0x8c);
  local_10c = *(undefined4 *)(GMath_exref + uVar1 * 4 + 0x8c);
  local_108 = 0;
  local_104 = 0;
  local_100 = -*(float *)(GMath_exref + uVar1 * 4 + 0x8c);
  local_fc = *(undefined4 *)(GMath_exref + uVar3 * 4 + 0x8c);
  local_f8 = 0;
  local_f4 = 0;
  local_f0 = 0;
  local_ec = 0;
  local_e4 = 0;
  local_e0 = 0;
  local_dc = 0;
  local_d8 = 0;
  local_e8 = 0x3f800000;
  local_d4 = 0x3f800000;
  local_4 = 2;
  puStack_180 = local_4c;
  puVar5 = &local_90;
  puVar6 = auStack_17c;
  for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar6 = puVar6 + 1;
  }
  uStack_184 = 0x1032731b;
  ExceptionList = &pvStack_c;
  pFVar2 = (FMatrix *)FMatrix::operator*((FMatrix *)&local_110);
  uStack_48 = 3;
  puVar5 = &uStack_114;
  puVar6 = auStack_1c0;
  for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar6 = puVar6 + 1;
  }
  FMatrix::operator*(pFVar2);
  local_8c._0_1_ = 5;
  FMatrix::~FMatrix((FMatrix *)&local_d4);
  local_8c._0_1_ = 6;
  FMatrix::~FMatrix(aFStack_198);
  local_8c._0_1_ = 7;
  FMatrix::~FMatrix((FMatrix *)&local_118);
  local_8c = CONCAT31(local_8c._1_3_,8);
  FMatrix::~FMatrix(aFStack_158);
  ExceptionList = local_94;
  return;
}


// ==== 103274a0 FUN_103274a0

void FUN_103274a0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *in_ECX;
  
  *in_ECX = param_1;
  in_ECX[1] = 0;
  in_ECX[2] = 0;
  in_ECX[3] = 0;
  in_ECX[4] = 0;
  in_ECX[5] = param_2;
  in_ECX[6] = 0;
  in_ECX[7] = 0;
  in_ECX[8] = 0;
  in_ECX[9] = 0;
  in_ECX[10] = param_3;
  in_ECX[0xb] = 0;
  in_ECX[0xc] = 0;
  in_ECX[0xd] = 0;
  in_ECX[0xe] = 0;
  in_ECX[0xf] = 0x3f800000;
  return;
}


// ==== 10327530 FUN_10327530

undefined4 FUN_10327530(void)

{
  return 0;
}


// ==== 10327540 FUN_10327540

undefined4 FUN_10327540(void)

{
  return 0;
}


// ==== 10327550 FUN_10327550

undefined4 FUN_10327550(void)

{
  return 0;
}


// ==== 10327560 FUN_10327560

undefined4 FUN_10327560(void)

{
  return 0;
}


// ==== 10327570 FUN_10327570

undefined4 FUN_10327570(void)

{
  return 0;
}


// ==== 10327580 FUN_10327580

float10 FUN_10327580(void)

{
  return (float10)25.0;
}


// ==== 10327590 FUN_10327590

void FUN_10327590(void)

{
  return;
}


// ==== 103275a0 FUN_103275a0

void FUN_103275a0(void)

{
  return;
}


// ==== 103275b0 FUN_103275b0

void FUN_103275b0(void)

{
  return;
}


// ==== 103275c0 FUN_103275c0

void FUN_103275c0(void)

{
  return;
}


// ==== 103275d0 FUN_103275d0

void FUN_103275d0(void)

{
  return;
}


// ==== 103275e0 FUN_103275e0

undefined4 FUN_103275e0(void)

{
  return 0;
}


// ==== 103275f0 FUN_103275f0

void FUN_103275f0(int param_1)

{
  int in_ECX;
  
  *(uint *)(in_ECX + 100) =
       *(uint *)(in_ECX + 100) ^ ((uint)(param_1 == 0) << 5 ^ *(uint *)(in_ECX + 100)) & 0x20;
  return;
}


// ==== 10327610 FUN_10327610

void FUN_10327610(void)

{
  return;
}


// ==== 10327620 FUN_10327620

undefined4 FUN_10327620(void)

{
  return 0;
}


// ==== 10327630 FUN_10327630

undefined4 FUN_10327630(void)

{
  return 0;
}


// ==== 10327640 FUN_10327640

void FUN_10327640(void)

{
  return;
}


// ==== 10327650 FUN_10327650

void FUN_10327650(void)

{
  return;
}


// ==== 10327660 FUN_10327660

void FUN_10327660(void)

{
  return;
}


// ==== 10327670 FUN_10327670

undefined4 FUN_10327670(void)

{
  return 0;
}


// ==== 10327680 FUN_10327680

undefined4 FUN_10327680(void)

{
  return 0;
}


// ==== 10327690 FUN_10327690

undefined4 FUN_10327690(void)

{
  return 0;
}


// ==== 103276a0 FUN_103276a0

undefined4 FUN_103276a0(void)

{
  return 0;
}


// ==== 103276b0 FUN_103276b0

undefined4 FUN_103276b0(void)

{
  return 0;
}


// ==== 103276c0 FUN_103276c0

undefined4 FUN_103276c0(void)

{
  return 0;
}


// ==== 103276d0 FUN_103276d0

void FUN_103276d0(void)

{
  return;
}


// ==== 103276e0 FUN_103276e0

undefined4 FUN_103276e0(void)

{
  return 0;
}


// ==== 103276f0 FUN_103276f0

void FUN_103276f0(void)

{
  return;
}


// ==== 10327700 FUN_10327700

undefined4 FUN_10327700(void)

{
  return 0;
}


// ==== 10327710 FUN_10327710

undefined4 FUN_10327710(undefined4 param_1)

{
  FCoords *this;
  int in_ECX;
  FVector *pFVar1;
  FRotator local_30 [48];
  
  pFVar1 = (FVector *)(in_ECX + 0x1c8);
  this = (FCoords *)FCoords::operator/((FCoords *)(GMath_exref + 0x18),local_30);
  FCoords::operator/(this,pFVar1);
  return param_1;
}


// ==== 10327760 FUN_10327760

undefined4 FUN_10327760(undefined4 param_1)

{
  FCoords *this;
  int in_ECX;
  FRotator *pFVar1;
  FVector local_30 [48];
  
  pFVar1 = (FRotator *)(in_ECX + 0x1bc);
  this = (FCoords *)FCoords::operator*((FCoords *)(GMath_exref + 0x18),local_30);
  FCoords::operator*(this,pFVar1);
  return param_1;
}


// ==== 103277b0 FUN_103277b0

void FUN_103277b0(float *param_1)

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
  int in_ECX;
  
  fVar1 = *(float *)(GMath_exref + (*(int *)(in_ECX + 0x1d0) >> 2 & 0x3fffU) * 4 + 0x8c);
  fVar2 = *(float *)(GMath_exref + (*(int *)(in_ECX + 0x1c8) >> 2 & 0x3fffU) * 4 + 0x8c);
  fVar3 = *(float *)(GMath_exref + (*(int *)(in_ECX + 0x1cc) >> 2 & 0x3fffU) * 4 + 0x8c);
  fVar4 = *(float *)(GMath_exref + (*(int *)(in_ECX + 0x1d0) + 0x4000 >> 2 & 0x3fffU) * 4 + 0x8c);
  fVar5 = *(float *)(GMath_exref + (*(int *)(in_ECX + 0x1c8) + 0x4000 >> 2 & 0x3fffU) * 4 + 0x8c);
  fVar6 = *(float *)(GMath_exref + (*(int *)(in_ECX + 0x1cc) + 0x4000 >> 2 & 0x3fffU) * 4 + 0x8c);
  fVar7 = *(float *)(in_ECX + 0x1bc);
  fVar8 = *(float *)(in_ECX + 0x1c0);
  fVar9 = *(float *)(in_ECX + 0x1c4);
  fVar10 = *(float *)(in_ECX + 0x28c);
  fVar11 = *(float *)(in_ECX + 0x290);
  fVar12 = *(float *)(in_ECX + 0x294);
  fVar13 = *(float *)(in_ECX + 0x280) * *(float *)(in_ECX + 0x27c);
  fVar14 = *(float *)(in_ECX + 0x284) * *(float *)(in_ECX + 0x27c);
  fVar15 = *(float *)(in_ECX + 0x288) * *(float *)(in_ECX + 0x27c);
  fVar17 = fVar13 * fVar5 * fVar6;
  *param_1 = fVar17;
  param_1[1] = fVar3 * fVar13 * fVar5;
  param_1[2] = fVar2 * fVar13;
  param_1[3] = 0.0;
  param_1[4] = fVar14 * (fVar1 * fVar6 * fVar2 - fVar4 * fVar3);
  fVar18 = fVar6 * fVar4;
  param_1[5] = (fVar2 * fVar1 * fVar3 + fVar18) * fVar14;
  param_1[6] = -fVar5 * fVar14 * fVar1;
  param_1[7] = 0.0;
  param_1[8] = -fVar15 * (fVar2 * fVar18 + fVar3 * fVar1);
  param_1[9] = fVar15 * (fVar1 * fVar6 - fVar4 * fVar2 * fVar3);
  fVar16 = fVar5 * fVar4 * fVar15;
  param_1[10] = fVar16;
  param_1[0xb] = 0.0;
  param_1[0xc] = fVar15 * fVar12 * fVar1 * fVar3 +
                 fVar14 * fVar4 * fVar11 * fVar3 +
                 ((fVar15 * fVar18 * fVar12 * fVar2 + (fVar7 - fVar10 * fVar17)) -
                 fVar14 * fVar6 * fVar11 * fVar2 * fVar1);
  param_1[0xd] = fVar8 - (((fVar10 * fVar13 * fVar5 * fVar3 +
                           fVar14 * fVar18 * fVar11 + fVar1 * fVar12 * fVar6 * fVar15) -
                          fVar15 * fVar4 * fVar12 * fVar2 * fVar3) +
                         fVar14 * fVar11 * fVar2 * fVar1 * fVar3);
  param_1[0xe] = fVar9 - ((fVar12 * fVar16 + fVar13 * fVar10 * fVar2) -
                         fVar11 * fVar5 * fVar14 * fVar1);
  param_1[0xf] = 1.0;
  return;
}


// ==== 10327b70 FUN_10327b70

void FUN_10327b70(float *param_1,int param_2,int param_3,int param_4)

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
  int in_ECX;
  
  fVar1 = *(float *)(GMath_exref + (param_4 >> 2 & 0x3fffU) * 4 + 0x8c);
  fVar2 = *(float *)(GMath_exref + (param_2 >> 2 & 0x3fffU) * 4 + 0x8c);
  fVar3 = *(float *)(GMath_exref + (param_3 >> 2 & 0x3fffU) * 4 + 0x8c);
  fVar4 = *(float *)(GMath_exref + (param_4 + 0x4000 >> 2 & 0x3fffU) * 4 + 0x8c);
  fVar5 = *(float *)(GMath_exref + (param_2 + 0x4000 >> 2 & 0x3fffU) * 4 + 0x8c);
  fVar6 = *(float *)(GMath_exref + (param_3 + 0x4000 >> 2 & 0x3fffU) * 4 + 0x8c);
  fVar7 = *(float *)(in_ECX + 0x1bc);
  fVar8 = *(float *)(in_ECX + 0x1c0);
  fVar9 = *(float *)(in_ECX + 0x1c4);
  fVar10 = *(float *)(in_ECX + 0x28c);
  fVar11 = *(float *)(in_ECX + 0x290);
  fVar12 = *(float *)(in_ECX + 0x294);
  fVar13 = *(float *)(in_ECX + 0x280) * *(float *)(in_ECX + 0x27c);
  fVar14 = *(float *)(in_ECX + 0x284) * *(float *)(in_ECX + 0x27c);
  fVar15 = *(float *)(in_ECX + 0x288) * *(float *)(in_ECX + 0x27c);
  fVar17 = fVar13 * fVar5 * fVar6;
  *param_1 = fVar17;
  param_1[1] = fVar3 * fVar13 * fVar5;
  param_1[2] = fVar2 * fVar13;
  param_1[3] = 0.0;
  param_1[4] = fVar14 * (fVar1 * fVar6 * fVar2 - fVar4 * fVar3);
  fVar18 = fVar6 * fVar4;
  param_1[5] = (fVar2 * fVar1 * fVar3 + fVar18) * fVar14;
  param_1[6] = -fVar5 * fVar14 * fVar1;
  param_1[7] = 0.0;
  param_1[8] = -fVar15 * (fVar2 * fVar18 + fVar3 * fVar1);
  param_1[9] = fVar15 * (fVar1 * fVar6 - fVar4 * fVar2 * fVar3);
  fVar16 = fVar5 * fVar4 * fVar15;
  param_1[10] = fVar16;
  param_1[0xb] = 0.0;
  param_1[0xc] = fVar15 * fVar12 * fVar1 * fVar3 +
                 fVar14 * fVar4 * fVar11 * fVar3 +
                 ((fVar15 * fVar18 * fVar12 * fVar2 + (fVar7 - fVar10 * fVar17)) -
                 fVar14 * fVar6 * fVar11 * fVar2 * fVar1);
  param_1[0xd] = fVar8 - (((fVar10 * fVar13 * fVar5 * fVar3 +
                           fVar14 * fVar18 * fVar11 + fVar1 * fVar12 * fVar6 * fVar15) -
                          fVar15 * fVar4 * fVar12 * fVar2 * fVar3) +
                         fVar14 * fVar11 * fVar2 * fVar1 * fVar3);
  param_1[0xe] = fVar9 - ((fVar12 * fVar16 + fVar13 * fVar10 * fVar2) -
                         fVar11 * fVar5 * fVar14 * fVar1);
  param_1[0xf] = 1.0;
  return;
}


// ==== 10327f30 FUN_10327f30

undefined4 FUN_10327f30(void)

{
  return 0;
}


// ==== 10327f40 FUN_10327f40

uint FUN_10327f40(void)

{
  int in_ECX;
  
  return *(uint *)(in_ECX + 100) >> 7 & 1;
}


// ==== 10327f50 FUN_10327f50

void FUN_10327f50(void)

{
  return;
}


// ==== 10327f60 FUN_10327f60

undefined4 FUN_10327f60(void)

{
  return 0;
}


// ==== 10327f70 FUN_10327f70

undefined4 FUN_10327f70(void)

{
  return 0;
}


// ==== 10327f80 FUN_10327f80

float10 FUN_10327f80(void)

{
  return (float10)0;
}


// ==== 10327f90 FUN_10327f90

void FUN_10327f90(undefined4 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}


// ==== 10327fb0 FUN_10327fb0

void FUN_10327fb0(void)

{
  return;
}


// ==== 10327fc0 FUN_10327fc0

float10 FUN_10327fc0(void)

{
  return (float10)1;
}


// ==== 10327fd0 FUN_10327fd0

void FUN_10327fd0(void)

{
  return;
}


// ==== 10327fe0 FUN_10327fe0

void FUN_10327fe0(void)

{
  return;
}


// ==== 10327ff0 FUN_10327ff0

void FUN_10327ff0(void)

{
  return;
}


// ==== 10328000 FUN_10328000

undefined4 FUN_10328000(void)

{
  return 0;
}


// ==== 10328010 FUN_10328010

undefined4 FUN_10328010(void)

{
  return 0;
}


// ==== 10328020 FUN_10328020

undefined4 FUN_10328020(void)

{
  return 0;
}


// ==== 10328030 FUN_10328030

undefined4 FUN_10328030(void)

{
  return 0;
}


// ==== 10328040 FUN_10328040

undefined4 FUN_10328040(void)

{
  return 0;
}


// ==== 10328050 FUN_10328050

void FUN_10328050(void)

{
  return;
}


// ==== 10328060 FUN_10328060

void FUN_10328060(void)

{
  return;
}


// ==== 10328070 FUN_10328070

undefined4 FUN_10328070(void)

{
  return 1;
}


// ==== 10328080 FUN_10328080

FName * FUN_10328080(FName *param_1)

{
  FName::FName(param_1,0);
  return param_1;
}


// ==== 103280a0 FUN_103280a0

FName * FUN_103280a0(FName *param_1)

{
  FName::FName(param_1,0);
  return param_1;
}


// ==== 103280c0 FUN_103280c0

FName * FUN_103280c0(FName *param_1)

{
  FName::FName(param_1,0);
  return param_1;
}


// ==== 103280e0 FUN_103280e0

FName * FUN_103280e0(FName *param_1)

{
  FName::FName(param_1,0);
  return param_1;
}


// ==== 10328100 FUN_10328100

FName * FUN_10328100(FName *param_1)

{
  FName::FName(param_1,0);
  return param_1;
}


// ==== 10328120 FUN_10328120

FName * FUN_10328120(FName *param_1)

{
  FName::FName(param_1,0);
  return param_1;
}


// ==== 10328140 FUN_10328140

FName * FUN_10328140(FName *param_1)

{
  FName::FName(param_1,0);
  return param_1;
}


// ==== 10328160 FUN_10328160

FName * FUN_10328160(FName *param_1)

{
  FName::FName(param_1,0);
  return param_1;
}


// ==== 10328180 FUN_10328180

void FUN_10328180(void)

{
  return;
}


// ==== 10328190 FUN_10328190

void FUN_10328190(void)

{
  return;
}


// ==== 103281a0 FUN_103281a0

void FUN_103281a0(void)

{
  return;
}


// ==== 103281b0 FUN_103281b0

void FUN_103281b0(void)

{
  return;
}


// ==== 103281c0 FUN_103281c0

void FUN_103281c0(void)

{
  return;
}


// ==== 103281d0 FUN_103281d0

void FUN_103281d0(void)

{
  return;
}


// ==== 103281e0 FUN_103281e0

void FUN_103281e0(void)

{
  return;
}


// ==== 103281f0 FUN_103281f0

void FUN_103281f0(void)

{
  return;
}


// ==== 10328200 FUN_10328200

undefined4 FUN_10328200(void)

{
  return 0;
}


// ==== 10328210 FUN_10328210

undefined4 FUN_10328210(void)

{
  return 0;
}


// ==== 10328220 FUN_10328220

undefined4 FUN_10328220(void)

{
  return 0;
}


// ==== 10328230 FUN_10328230

undefined4 FUN_10328230(void)

{
  return 0;
}


// ==== 10328240 FUN_10328240

undefined4 FUN_10328240(void)

{
  return 0;
}


// ==== 10328250 FUN_10328250

undefined4 FUN_10328250(void)

{
  return 0;
}


// ==== 10328260 FUN_10328260

undefined4 FUN_10328260(void)

{
  return 0;
}


// ==== 10328270 FUN_10328270

void FUN_10328270(void)

{
  return;
}


// ==== 10328280 FUN_10328280

void FUN_10328280(void)

{
  return;
}


// ==== 10328290 FUN_10328290

void FUN_10328290(void)

{
  return;
}


// ==== 103282a0 FUN_103282a0

void FUN_103282a0(void)

{
  return;
}


// ==== 103282b0 FUN_103282b0

void FUN_103282b0(void)

{
  return;
}


// ==== 103282c0 FUN_103282c0

void FUN_103282c0(void)

{
  return;
}


// ==== 103282d0 FUN_103282d0

void FUN_103282d0(void)

{
  return;
}


// ==== 103282e0 FUN_103282e0

undefined4 FUN_103282e0(void)

{
  return 0;
}


// ==== 103282f0 FUN_103282f0

undefined4 FUN_103282f0(void)

{
  return 0;
}


// ==== 10328300 FUN_10328300

undefined4 FUN_10328300(void)

{
  return 0;
}


// ==== 10328310 FUN_10328310

undefined4 FUN_10328310(void)

{
  return 0;
}


// ==== 10328320 FUN_10328320

undefined4 FUN_10328320(void)

{
  return 0;
}


// ==== 10328330 FUN_10328330

undefined4 FUN_10328330(void)

{
  return 0;
}


// ==== 10328340 FUN_10328340

undefined4 FUN_10328340(void)

{
  return 0;
}


// ==== 10328350 FUN_10328350

undefined4 FUN_10328350(void)

{
  return 0;
}


// ==== 10328360 FUN_10328360

void FUN_10328360(void)

{
  return;
}


// ==== 10328370 FUN_10328370

undefined4 FUN_10328370(void)

{
  return 0;
}


// ==== 10328380 FUN_10328380

void FUN_10328380(void)

{
  return;
}


// ==== 10328390 FUN_10328390

void FUN_10328390(void)

{
  return;
}


// ==== 103283a0 FUN_103283a0

void FUN_103283a0(void)

{
  return;
}


// ==== 103283b0 FUN_103283b0

undefined4 FUN_103283b0(void)

{
  return 0;
}


// ==== 103283c0 FUN_103283c0

undefined4 FUN_103283c0(void)

{
  return 0;
}


// ==== 103283d0 FUN_103283d0

undefined4 FUN_103283d0(void)

{
  return 0;
}


// ==== 103283e0 FUN_103283e0

undefined4 FUN_103283e0(void)

{
  return 0;
}


// ==== 103283f0 FUN_103283f0

undefined4 FUN_103283f0(void)

{
  return 0;
}


// ==== 10328400 FUN_10328400

undefined4 FUN_10328400(void)

{
  return 0;
}


// ==== 10328410 FUN_10328410

undefined4 FUN_10328410(void)

{
  return 0;
}


// ==== 10328420 FUN_10328420

undefined4 FUN_10328420(void)

{
  return 0;
}


// ==== 10328430 FUN_10328430

undefined4 FUN_10328430(void)

{
  return 0;
}


// ==== 10328440 FUN_10328440

undefined4 FUN_10328440(void)

{
  return 0;
}


// ==== 10328450 FUN_10328450

undefined4 FUN_10328450(void)

{
  return 0;
}


// ==== 10328460 FUN_10328460

void FUN_10328460(undefined4 *param_1)

{
  int in_ECX;
  
  *param_1 = *(undefined4 *)(in_ECX + 0x138);
  return;
}


// ==== 10328480 FUN_10328480

FName * FUN_10328480(FName *param_1)

{
  FName::FName(param_1,0);
  return param_1;
}


// ==== 103284a0 FUN_103284a0

void FUN_103284a0(void)

{
  return;
}


// ==== 103284c0 FUN_103284c0

void FUN_103284c0(void)

{
  FMatrix *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107f0409;
  local_c = ExceptionList;
  local_4 = 0xffffffff;
  ExceptionList = &local_c;
  FMatrix::~FMatrix(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 10328510 FUN_10328510

void FUN_10328510(void)

{
  FMatrix *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107f0429;
  local_c = ExceptionList;
  local_4 = 0xffffffff;
  ExceptionList = &local_c;
  FMatrix::~FMatrix(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 10328560 FUN_10328560

void FUN_10328560(void)

{
  FMatrix *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107f0449;
  local_c = ExceptionList;
  local_4 = 0xffffffff;
  ExceptionList = &local_c;
  FMatrix::~FMatrix(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 103285b0 FUN_103285b0

UClass * FUN_103285b0(void)

{
  return &APlayerController::PrivateStaticClass;
}


// ==== 103285c0 FUN_103285c0

void FUN_103285c0(void)

{
  int iVar1;
  int in_ECX;
  
  for (iVar1 = *(int *)(in_ECX + 0x3c); iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x3c)) {
  }
  return;
}


// ==== 103285e0 FUN_103285e0

UObject * FUN_103285e0(UObject *param_1)

{
  int iVar1;
  
  if (param_1 != (UObject *)0x0) {
    iVar1 = UObject::IsA(param_1,&APlayerController::PrivateStaticClass);
    if (iVar1 != 0) {
      return param_1;
    }
  }
  return (UObject *)0x0;
}


// ==== 10328610 FUN_10328610

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10328610(int *param_1)

{
  int iVar1;
  UFunction *pUVar2;
  int *in_ECX;
  int unaff_EDI;
  undefined4 uVar3;
  undefined4 uVar4;
  int local_c;
  int local_8;
  int local_4;
  
  local_c = *param_1;
  local_4 = param_1[2];
  local_8 = param_1[1];
  iVar1 = *in_ECX;
  uVar4 = 0;
  uVar3 = _ENGINE_GetEffTargetLocation;
  pUVar2 = UObject::FindFunctionChecked();
  (**(code **)(iVar1 + 0x10))(pUVar2,uVar3,uVar4);
  *param_1 = (int)&local_c;
  param_1[1] = 0;
  param_1[2] = unaff_EDI;
  return;
}


// ==== 10328690 FUN_10328690

undefined4 FUN_10328690(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  FMatrix *pFVar3;
  int in_ECX;
  int iVar4;
  undefined4 auStack_418 [5];
  undefined4 uStack_404;
  undefined4 uStack_3dc;
  undefined1 *puStack_3d8;
  undefined4 auStack_3d4 [14];
  FMatrix aFStack_39c [4];
  undefined4 uStack_398;
  undefined1 *puStack_394;
  undefined4 auStack_390 [12];
  undefined4 uStack_360;
  float local_35c;
  float local_358;
  float local_324;
  float local_320;
  float local_31c;
  undefined1 local_318 [8];
  undefined4 local_310 [13];
  FMatrix aFStack_2dc [12];
  undefined4 local_2d0 [13];
  FMatrix aFStack_29c [8];
  undefined1 auStack_294 [4];
  undefined4 local_290 [29];
  FMatrix aFStack_21c [4];
  undefined4 auStack_218 [2];
  undefined1 local_210 [116];
  FMatrix aFStack_19c [12];
  undefined4 local_190 [15];
  undefined4 auStack_154 [14];
  FMatrix aFStack_11c [12];
  undefined4 local_110 [13];
  void *pvStack_dc;
  undefined4 uStack_d4;
  undefined4 local_90 [17];
  undefined1 local_4c;
  void *pvStack_c;
  undefined1 *local_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  local_8 = &LAB_107f0512;
  pvStack_c = ExceptionList;
  local_358 = *(float *)(in_ECX + 0x28c);
  local_35c = 3.5208223e-29;
  ExceptionList = &pvStack_c;
  puVar1 = (undefined4 *)thunk_FUN_10326fb0();
  local_4 = 1;
  local_324 = 1.0 / *(float *)(in_ECX + 0x280);
  puVar2 = local_310;
  for (iVar4 = 0x10; puVar2 = puVar2 + 1, iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar2 = *puVar1;
    puVar1 = puVar1 + 1;
  }
  local_320 = 1.0 / *(float *)(in_ECX + 0x284);
  local_31c = 1.0 / *(float *)(in_ECX + 0x288);
  local_358 = 3.5208563e-29;
  puVar2 = (undefined4 *)FVector::operator/((FVector *)&local_324,(float)local_318);
  local_35c = (float)*puVar2;
  local_358 = (float)puVar2[1];
  uStack_360 = 0x10328775;
  puVar2 = (undefined4 *)thunk_FUN_103274a0();
  local_8._0_1_ = 2;
  local_358 = *(float *)(in_ECX + 0x1cc);
  puVar1 = local_2d0;
  for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar1 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar1 = puVar1 + 1;
  }
  local_35c = *(float *)(in_ECX + 0x1c8);
  uStack_360 = 0x103287b8;
  puVar2 = (undefined4 *)thunk_FUN_10327040();
  local_8 = (undefined1 *)CONCAT31(local_8._1_3_,3);
  puVar1 = local_290;
  for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar1 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar1 = puVar1 + 1;
  }
  puVar2 = local_310;
  puVar1 = local_190;
  for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar1 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar1 = puVar1 + 1;
  }
  local_8._0_1_ = 4;
  puVar2 = local_2d0;
  puVar1 = local_110;
  for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar1 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar1 = puVar1 + 1;
  }
  local_8._0_1_ = 5;
  puVar2 = local_290;
  puVar1 = local_90;
  for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar1 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar1 = puVar1 + 1;
  }
  local_8._0_1_ = 6;
  local_35c = -*(float *)(in_ECX + 0x1bc);
  local_358 = -*(float *)(in_ECX + 0x1c0);
  uStack_360 = 0x10328885;
  pFVar3 = (FMatrix *)thunk_FUN_10326fb0();
  local_8 = (undefined1 *)CONCAT31(local_8._1_3_,7);
  puVar2 = local_90;
  puVar1 = auStack_390;
  for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar1 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar1 = puVar1 + 1;
  }
  puStack_394 = local_210;
  uStack_398 = 0x103288b0;
  pFVar3 = (FMatrix *)FMatrix::operator*(pFVar3);
  local_4c = 8;
  puStack_3d8 = auStack_294;
  puVar2 = auStack_154;
  puVar1 = auStack_3d4;
  for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar1 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar1 = puVar1 + 1;
  }
  uStack_3dc = 0x103288db;
  pFVar3 = (FMatrix *)FMatrix::operator*(pFVar3);
  local_90[0]._0_1_ = 9;
  puVar2 = auStack_218;
  puVar1 = auStack_418;
  for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar1 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar1 = puVar1 + 1;
  }
  FMatrix::operator*(pFVar3,local_90[2]);
  uStack_404 = 1;
  uStack_d4._0_1_ = 8;
  FMatrix::~FMatrix((FMatrix *)&local_31c);
  uStack_d4._0_1_ = 7;
  FMatrix::~FMatrix(aFStack_2dc);
  uStack_d4._0_1_ = 6;
  FMatrix::~FMatrix(aFStack_29c);
  uStack_d4._0_1_ = 5;
  FMatrix::~FMatrix((FMatrix *)&local_35c);
  uStack_d4._0_1_ = 4;
  FMatrix::~FMatrix(aFStack_39c);
  uStack_d4._0_1_ = 3;
  FMatrix::~FMatrix((FMatrix *)&uStack_3dc);
  uStack_d4._0_1_ = 2;
  FMatrix::~FMatrix(aFStack_21c);
  uStack_d4 = CONCAT31(uStack_d4._1_3_,1);
  FMatrix::~FMatrix(aFStack_19c);
  uStack_d4 = 0;
  FMatrix::~FMatrix(aFStack_11c);
  ExceptionList = pvStack_dc;
  return local_90[2];
}


// ==== 10328ac0 FUN_10328ac0

void FUN_10328ac0(void)

{
  AActor *in_ECX;
  FVector *in_stack_00000010;
  
  AActor::eventGetEffTargetLocation(in_ECX,in_stack_00000010);
  return;
}


// ==== 10328ad0 FUN_10328ad0

uint FUN_10328ad0(void)

{
  UObject *pUVar1;
  UObject *pUVar2;
  int iVar3;
  UObject *in_ECX;
  
  pUVar2 = *(UObject **)(in_ECX + 0x3c);
  while (pUVar1 = pUVar2, pUVar1 != (UObject *)0x0) {
    in_ECX = pUVar1;
    pUVar2 = *(UObject **)(pUVar1 + 0x3c);
  }
  iVar3 = (**(code **)(*(int *)in_ECX + 0x2ec))();
  if (iVar3 != 0) {
    iVar3 = UObject::IsA(in_ECX,&APlayerController::PrivateStaticClass);
    return -(uint)(iVar3 != 0) & (uint)in_ECX;
  }
  return 0;
}


// ==== 10328b30 FUN_10328b30

void FUN_10328b30(void)

{
  UObject *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f06dc;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UObject::UObject(in_ECX);
  local_4 = 0;
  *(undefined ***)in_ECX = AActor::vftable;
  FName::FName((FName *)(in_ECX + 0x58));
  FRotator::FRotator((FRotator *)(in_ECX + 0x8c));
  FName::FName((FName *)(in_ECX + 0xd8));
  FName::FName((FName *)(in_ECX + 0xf8));
  FName::FName((FName *)(in_ECX + 0x10c));
  FArray::FArray((FArray *)(in_ECX + 0x110),0);
  local_4._0_1_ = 3;
  FName::FName((FName *)(in_ECX + 0x11c));
  FArray::FArray((FArray *)(in_ECX + 0x120),0);
  local_4._0_1_ = 6;
  FName::FName((FName *)(in_ECX + 0x138));
  FName::FName((FName *)(in_ECX + 0x148));
  FName::FName((FName *)(in_ECX + 0x14c));
  FArray::FArray((FArray *)(in_ECX + 0x150),0);
  local_4._0_1_ = 9;
  FArray::FArray((FArray *)(in_ECX + 0x15c),0);
  local_4._0_1_ = 0xc;
  FArray::FArray((FArray *)(in_ECX + 0x168),0);
  local_4._0_1_ = 0xf;
  FBox::FBox((FBox *)(in_ECX + 0x174));
  FRotator::FRotator((FRotator *)(in_ECX + 0x1c8));
  FName::FName((FName *)(in_ECX + 0x1ec));
  FArray::FArray((FArray *)(in_ECX + 0x1f0),0);
  local_4._0_1_ = 0x12;
  FRotator::FRotator((FRotator *)(in_ECX + 0x208));
  local_4._0_1_ = 0x13;
  FArray::FArray((FArray *)(in_ECX + 600),0);
  local_4._0_1_ = 0x16;
  FArray::FArray((FArray *)(in_ECX + 0x264),0);
  local_4._0_1_ = 0x19;
  FArray::FArray((FArray *)(in_ECX + 0x298),0);
  local_4._0_1_ = 0x1c;
  FRotator::FRotator((FRotator *)(in_ECX + 0x2d0));
  FRotator::FRotator((FRotator *)(in_ECX + 0x304));
  FRotator::FRotator((FRotator *)(in_ECX + 0x310));
  FRotator::FRotator((FRotator *)(in_ECX + 800));
  FRotator::FRotator((FRotator *)(in_ECX + 0x32c));
  FName::FName((FName *)(in_ECX + 0x350));
  FArray::FArray((FArray *)(in_ECX + 0x370),0);
  local_4._0_1_ = 0x1f;
  FArray::FArray((FArray *)(in_ECX + 0x37c),0);
  local_4._0_1_ = 0x22;
  FArray::FArray((FArray *)(in_ECX + 0x388),0);
  local_4 = CONCAT31(local_4._1_3_,0x25);
  FTextureModifyinfo::Clear((FTextureModifyinfo *)(in_ECX + 0x3a0));
  *(int *)GActorCurCount_exref = *(int *)GActorCurCount_exref + 1;
  *(int *)GActorNewCount_exref = *(int *)GActorNewCount_exref + 1;
  if (*(int *)GActorPeakCount_exref < *(int *)GActorCurCount_exref) {
    *(int *)GActorPeakCount_exref = *(int *)GActorCurCount_exref;
  }
  ExceptionList = local_c;
  return;
}


// ==== 10328e50 FUN_10328e50

AActor * FUN_10328e50(byte param_1)

{
  AActor *in_ECX;
  
  if ((param_1 & 2) != 0) {
    _eh_vector_destructor_iterator_(in_ECX,0x3bc,*(int *)(in_ECX + -4),AActor::~AActor);
    if ((param_1 & 1) != 0) {
      (**(code **)(**(int **)GMalloc_exref + 8))(in_ECX + -4);
    }
    return in_ECX + -4;
  }
  AActor::~AActor(in_ECX);
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x3bc);
  }
  return in_ECX;
}


// ==== 10328ed0 FUN_10328ed0

void FUN_10328ed0(void)

{
  UObject *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107f0758;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)in_ECX = AInfo::vftable;
  local_4 = 0;
  UObject::ConditionalDestroy(in_ECX);
  local_4 = 0xffffffff;
  AActor::~AActor((AActor *)in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 10328f40 FUN_10328f40

void FUN_10328f40(void)

{
  AActor *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f0778;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  AActor::AActor(in_ECX);
  *(undefined ***)in_ECX = AInfo::vftable;
  ExceptionList = local_c;
  return;
}


// ==== 10328fa0 FUN_10328fa0

AInfo * FUN_10328fa0(byte param_1)

{
  AInfo *in_ECX;
  
  if ((param_1 & 2) != 0) {
    _eh_vector_destructor_iterator_(in_ECX,0x3bc,*(int *)(in_ECX + -4),AInfo::~AInfo);
    if ((param_1 & 1) != 0) {
      (**(code **)(**(int **)GMalloc_exref + 8))(in_ECX + -4);
    }
    return in_ECX + -4;
  }
  AInfo::~AInfo(in_ECX);
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x3bc);
  }
  return in_ECX;
}


// ==== 10329020 FUN_10329020

void FUN_10329020(void)

{
  UObject *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_107f07a7;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)in_ECX = AFileLog::vftable;
  local_4 = 1;
  UObject::ConditionalDestroy(in_ECX);
  local_4 = local_4 & 0xffffff00;
  FStringNoInit::~FStringNoInit((FStringNoInit *)(in_ECX + 0x3c0));
  local_4 = 0xffffffff;
  AInfo::~AInfo((AInfo *)in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 103290a0 FUN_103290a0

void FUN_103290a0(void)

{
  AActor *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f07df;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  AActor::AActor(in_ECX);
  *(undefined ***)in_ECX = AInfo::vftable;
  local_4 = 1;
  *(undefined ***)in_ECX = AFileLog::vftable;
  FStringNoInit::FStringNoInit((FStringNoInit *)(in_ECX + 0x3c0));
  ExceptionList = local_c;
  return;
}


// ==== 10329120 FUN_10329120

AFileLog * FUN_10329120(byte param_1)

{
  AFileLog *in_ECX;
  
  if ((param_1 & 2) != 0) {
    _eh_vector_destructor_iterator_(in_ECX,0x3cc,*(int *)(in_ECX + -4),AFileLog::~AFileLog);
    if ((param_1 & 1) != 0) {
      (**(code **)(**(int **)GMalloc_exref + 8))(in_ECX + -4);
    }
    return in_ECX + -4;
  }
  AFileLog::~AFileLog(in_ECX);
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x3cc);
  }
  return in_ECX;
}


// ==== 103291a0 FUN_103291a0

void FUN_103291a0(AFileLog *param_1)

{
  if (param_1 != (AFileLog *)0x0) {
    AFileLog::AFileLog(param_1);
    return;
  }
  return;
}


// ==== 103291c0 FUN_103291c0

UClass * FUN_103291c0(void)

{
  return &UPackageMapLevel::PrivateStaticClass;
}


// ==== 103291d0 FUN_103291d0

void FUN_103291d0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  UObject::StaticAllocateObject
            (&UPackageMapLevel::PrivateStaticClass,param_2,param_3,param_4,0,
             *(undefined4 *)GError_exref,0,0);
  return;
}


// ==== 10329210 FUN_10329210

undefined4 FUN_10329210(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}


// ==== 10329220 FUN_10329220

void FUN_10329220(void)

{
  UObject *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107f0809;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)in_ECX = UPackageMapLevel::vftable;
  local_4 = 0;
  UObject::ConditionalDestroy(in_ECX);
  local_4 = 0xffffffff;
  UPackageMap::~UPackageMap((UPackageMap *)in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 10329290 FUN_10329290

void FUN_10329290(void)

{
  UPackageMap *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f0829;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UPackageMap::UPackageMap(in_ECX);
  *(undefined ***)in_ECX = UPackageMapLevel::vftable;
  ExceptionList = local_c;
  return;
}


// ==== 103292f0 FUN_103292f0

void FUN_103292f0(undefined4 param_1)

{
  UPackageMap *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f0849;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UPackageMap::UPackageMap(in_ECX);
  *(undefined ***)in_ECX = UPackageMapLevel::vftable;
  *(undefined4 *)(in_ECX + 0x7c) = param_1;
  ExceptionList = local_c;
  return;
}


// ==== 10329360 FUN_10329360

void FUN_10329360(UPackageMap *param_1)

{
  UPackageMap *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f0869;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UPackageMap::UPackageMap(in_ECX,param_1);
  *(undefined ***)in_ECX = UPackageMapLevel::vftable;
  *(undefined4 *)(in_ECX + 0x7c) = *(undefined4 *)(param_1 + 0x7c);
  ExceptionList = local_c;
  return;
}


// ==== 103293d0 FUN_103293d0

void FUN_103293d0(UPackageMap *param_1)

{
  UPackageMap *in_ECX;
  
  UPackageMap::operator=(in_ECX,param_1);
  *(undefined4 *)(in_ECX + 0x7c) = *(undefined4 *)(param_1 + 0x7c);
  return;
}


// ==== 10329400 FUN_10329400

void FUN_10329400(byte param_1)

{
  UPackageMapLevel *in_ECX;
  
  UPackageMapLevel::~UPackageMapLevel(in_ECX);
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x80);
  }
  return;
}


// ==== 10329430 FUN_10329430

UClass * FUN_10329430(void)

{
  return &UNetDriver::PrivateStaticClass;
}


// ==== 10329440 FUN_10329440

void FUN_10329440(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  UObject::StaticAllocateObject
            (&UNetDriver::PrivateStaticClass,param_2,param_3,param_4,0,*(undefined4 *)GError_exref,0
             ,0);
  return;
}


// ==== 10329480 FUN_10329480

undefined4 FUN_10329480(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}


// ==== 10329490 FUN_10329490

undefined4 FUN_10329490(void)

{
  return 0;
}


// ==== 103294a0 FUN_103294a0

void FUN_103294a0(void)

{
  FBitWriter *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107f0889;
  local_c = ExceptionList;
  local_4 = 0xffffffff;
  ExceptionList = &local_c;
  FBitWriter::~FBitWriter(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 103294f0 FUN_103294f0

void FUN_103294f0(FBitWriter *param_1)

{
  FBitWriter *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f08a9;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FBitWriter::FBitWriter(in_ECX,param_1);
  *(undefined ***)in_ECX = FOutBunch::vftable;
  *(undefined4 *)(in_ECX + 0x4c) = *(undefined4 *)(param_1 + 0x4c);
  *(undefined4 *)(in_ECX + 0x50) = *(undefined4 *)(param_1 + 0x50);
  *(undefined8 *)(in_ECX + 0x54) = *(undefined8 *)(param_1 + 0x54);
  *(undefined4 *)(in_ECX + 0x5c) = *(undefined4 *)(param_1 + 0x5c);
  *(undefined4 *)(in_ECX + 0x60) = *(undefined4 *)(param_1 + 0x60);
  *(undefined4 *)(in_ECX + 100) = *(undefined4 *)(param_1 + 100);
  *(undefined4 *)(in_ECX + 0x68) = *(undefined4 *)(param_1 + 0x68);
  *(undefined4 *)(in_ECX + 0x6c) = *(undefined4 *)(param_1 + 0x6c);
  in_ECX[0x70] = param_1[0x70];
  in_ECX[0x71] = param_1[0x71];
  in_ECX[0x72] = param_1[0x72];
  ExceptionList = local_c;
  return;
}


// ==== 103295b0 FUN_103295b0

void FUN_103295b0(FBitWriter *param_1)

{
  FBitWriter *in_ECX;
  
  FBitWriter::operator=(in_ECX,param_1);
  *(undefined4 *)(in_ECX + 0x4c) = *(undefined4 *)(param_1 + 0x4c);
  *(undefined4 *)(in_ECX + 0x50) = *(undefined4 *)(param_1 + 0x50);
  *(undefined8 *)(in_ECX + 0x54) = *(undefined8 *)(param_1 + 0x54);
  *(undefined4 *)(in_ECX + 0x5c) = *(undefined4 *)(param_1 + 0x5c);
  *(undefined4 *)(in_ECX + 0x60) = *(undefined4 *)(param_1 + 0x60);
  *(undefined4 *)(in_ECX + 100) = *(undefined4 *)(param_1 + 100);
  *(undefined4 *)(in_ECX + 0x68) = *(undefined4 *)(param_1 + 0x68);
  *(undefined4 *)(in_ECX + 0x6c) = *(undefined4 *)(param_1 + 0x6c);
  in_ECX[0x70] = param_1[0x70];
  in_ECX[0x71] = param_1[0x71];
  in_ECX[0x72] = param_1[0x72];
  return;
}


// ==== 10329620 FUN_10329620

void FUN_10329620(undefined4 param_1)

{
  FBitReader *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f08c9;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FBitReader::FBitReader(in_ECX,(uchar *)0x0,0);
  *(undefined ***)in_ECX = FInBunch::vftable;
  *(undefined4 *)(in_ECX + 0x50) = 0;
  *(undefined4 *)(in_ECX + 0x54) = param_1;
  ExceptionList = local_c;
  return;
}


// ==== 103296a0 FUN_103296a0

void FUN_103296a0(void)

{
  FBitReader *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107f08e9;
  local_c = ExceptionList;
  local_4 = 0xffffffff;
  ExceptionList = &local_c;
  FBitReader::~FBitReader(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 103296f0 FUN_103296f0

void FUN_103296f0(FBitReader *param_1)

{
  FBitReader *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f0909;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FBitReader::FBitReader(in_ECX,param_1);
  *(undefined ***)in_ECX = FInBunch::vftable;
  *(undefined4 *)(in_ECX + 0x4c) = *(undefined4 *)(param_1 + 0x4c);
  *(undefined4 *)(in_ECX + 0x50) = *(undefined4 *)(param_1 + 0x50);
  *(undefined4 *)(in_ECX + 0x54) = *(undefined4 *)(param_1 + 0x54);
  *(undefined4 *)(in_ECX + 0x58) = *(undefined4 *)(param_1 + 0x58);
  *(undefined4 *)(in_ECX + 0x5c) = *(undefined4 *)(param_1 + 0x5c);
  *(undefined4 *)(in_ECX + 0x60) = *(undefined4 *)(param_1 + 0x60);
  in_ECX[100] = param_1[100];
  in_ECX[0x65] = param_1[0x65];
  in_ECX[0x66] = param_1[0x66];
  ExceptionList = local_c;
  return;
}


// ==== 103297a0 FUN_103297a0

void FUN_103297a0(FBitReader *param_1)

{
  FBitReader *in_ECX;
  
  FBitReader::operator=(in_ECX,param_1);
  *(undefined4 *)(in_ECX + 0x4c) = *(undefined4 *)(param_1 + 0x4c);
  *(undefined4 *)(in_ECX + 0x50) = *(undefined4 *)(param_1 + 0x50);
  *(undefined4 *)(in_ECX + 0x54) = *(undefined4 *)(param_1 + 0x54);
  *(undefined4 *)(in_ECX + 0x58) = *(undefined4 *)(param_1 + 0x58);
  *(undefined4 *)(in_ECX + 0x5c) = *(undefined4 *)(param_1 + 0x5c);
  *(undefined4 *)(in_ECX + 0x60) = *(undefined4 *)(param_1 + 0x60);
  in_ECX[100] = param_1[100];
  in_ECX[0x65] = param_1[0x65];
  in_ECX[0x66] = param_1[0x66];
  return;
}


// ==== 10329800 FUN_10329800

UClass * FUN_10329800(void)

{
  return &UDownload::PrivateStaticClass;
}


// ==== 10329810 FUN_10329810

void FUN_10329810(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  UObject::StaticAllocateObject
            (&UDownload::PrivateStaticClass,param_2,param_3,param_4,0,*(undefined4 *)GError_exref,0,
             0);
  return;
}


// ==== 10329850 FUN_10329850

undefined4 FUN_10329850(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}


// ==== 10329860 FUN_10329860

void FUN_10329860(void)

{
  UObject *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_107f0935;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)in_ECX = UDownload::vftable;
  local_4 = 1;
  UObject::ConditionalDestroy(in_ECX);
  local_4 = local_4 & 0xffffff00;
  FString::~FString((FString *)(in_ECX + 0x40));
  local_4 = 0xffffffff;
  UObject::~UObject(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 103298e0 FUN_103298e0

void FUN_103298e0(void)

{
  UObject *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f0965;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UObject::UObject(in_ECX);
  local_4 = 0;
  *(undefined ***)in_ECX = UDownload::vftable;
  FString::FString((FString *)(in_ECX + 0x40));
  ExceptionList = local_c;
  return;
}


// ==== 10329950 FUN_10329950

void FUN_10329950(void)

{
  return;
}


// ==== 10329960 FUN_10329960

void FUN_10329960(UObject *param_1)

{
  UObject *in_ECX;
  int iVar1;
  UObject *pUVar2;
  UObject *pUVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f0995;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UObject::UObject(in_ECX,param_1);
  local_4 = 0;
  *(undefined ***)in_ECX = UDownload::vftable;
  *(undefined4 *)(in_ECX + 0x34) = *(undefined4 *)(param_1 + 0x34);
  *(undefined4 *)(in_ECX + 0x38) = *(undefined4 *)(param_1 + 0x38);
  *(undefined4 *)(in_ECX + 0x3c) = *(undefined4 *)(param_1 + 0x3c);
  FString::FString((FString *)(in_ECX + 0x40),(FString *)(param_1 + 0x40));
  *(undefined4 *)(in_ECX + 0x4c) = *(undefined4 *)(param_1 + 0x4c);
  *(undefined4 *)(in_ECX + 0x50) = *(undefined4 *)(param_1 + 0x50);
  pUVar2 = param_1 + 0x54;
  pUVar3 = in_ECX + 0x54;
  for (iVar1 = 0x80; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)pUVar3 = *(undefined4 *)pUVar2;
    pUVar2 = pUVar2 + 4;
    pUVar3 = pUVar3 + 4;
  }
  pUVar2 = param_1 + 0x254;
  pUVar3 = in_ECX + 0x254;
  for (iVar1 = 0x80; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)pUVar3 = *(undefined4 *)pUVar2;
    pUVar2 = pUVar2 + 4;
    pUVar3 = pUVar3 + 4;
  }
  *(undefined4 *)(in_ECX + 0x454) = *(undefined4 *)(param_1 + 0x454);
  *(undefined4 *)(in_ECX + 0x458) = *(undefined4 *)(param_1 + 0x458);
  *(undefined4 *)(in_ECX + 0x45c) = *(undefined4 *)(param_1 + 0x45c);
  ExceptionList = local_c;
  return;
}


// ==== 10329a60 FUN_10329a60

void FUN_10329a60(UObject *param_1)

{
  UObject *pUVar1;
  UObject *in_ECX;
  int iVar2;
  
  UObject::operator=(in_ECX,param_1);
  *(undefined4 *)(in_ECX + 0x34) = *(undefined4 *)(param_1 + 0x34);
  *(undefined4 *)(in_ECX + 0x38) = *(undefined4 *)(param_1 + 0x38);
  *(undefined4 *)(in_ECX + 0x3c) = *(undefined4 *)(param_1 + 0x3c);
  FString::operator=((FString *)(in_ECX + 0x40),(FString *)(param_1 + 0x40));
  *(undefined4 *)(in_ECX + 0x4c) = *(undefined4 *)(param_1 + 0x4c);
  *(undefined4 *)(in_ECX + 0x50) = *(undefined4 *)(param_1 + 0x50);
  pUVar1 = in_ECX + 0x54;
  iVar2 = 0x100;
  do {
    *(undefined2 *)pUVar1 = *(undefined2 *)(pUVar1 + ((int)param_1 - (int)in_ECX));
    pUVar1 = pUVar1 + 2;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  pUVar1 = in_ECX + 0x254;
  iVar2 = 0x100;
  do {
    *(undefined2 *)pUVar1 = *(undefined2 *)(pUVar1 + ((int)param_1 - (int)in_ECX));
    pUVar1 = pUVar1 + 2;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  *(undefined4 *)(in_ECX + 0x454) = *(undefined4 *)(param_1 + 0x454);
  *(undefined4 *)(in_ECX + 0x458) = *(undefined4 *)(param_1 + 0x458);
  *(undefined4 *)(in_ECX + 0x45c) = *(undefined4 *)(param_1 + 0x45c);
  return;
}


// ==== 10329b40 _memcpy thunk -> 107a6260

// ==== 10329b50 FUN_10329b50

void FUN_10329b50(byte param_1)

{
  UDownload *in_ECX;
  
  UDownload::~UDownload(in_ECX);
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x460);
  }
  return;
}


// ==== 10329b80 FUN_10329b80

UClass * FUN_10329b80(void)

{
  return &UChannelDownload::PrivateStaticClass;
}


// ==== 10329b90 FUN_10329b90

void FUN_10329b90(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  UObject::StaticAllocateObject
            (&UChannelDownload::PrivateStaticClass,param_2,param_3,param_4,0,
             *(undefined4 *)GError_exref,0,0);
  return;
}


// ==== 10329bd0 FUN_10329bd0

undefined4 FUN_10329bd0(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}


// ==== 10329be0 FUN_10329be0

void FUN_10329be0(void)

{
  UObject *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107f09b8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)in_ECX = UChannelDownload::vftable;
  local_4 = 0;
  UObject::ConditionalDestroy(in_ECX);
  local_4 = 0xffffffff;
  UDownload::~UDownload((UDownload *)in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 10329c50 FUN_10329c50

void FUN_10329c50(void)

{
  UDownload *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f09d8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UDownload::UDownload(in_ECX);
  *(undefined ***)in_ECX = UChannelDownload::vftable;
  ExceptionList = local_c;
  return;
}


// ==== 10329cb0 FUN_10329cb0

void FUN_10329cb0(UDownload *param_1)

{
  UDownload *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f09f8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UDownload::UDownload(in_ECX,param_1);
  *(undefined ***)in_ECX = UChannelDownload::vftable;
  *(undefined4 *)(in_ECX + 0x460) = *(undefined4 *)(param_1 + 0x460);
  ExceptionList = local_c;
  return;
}


// ==== 10329d30 FUN_10329d30

void FUN_10329d30(UDownload *param_1)

{
  UDownload *in_ECX;
  
  UDownload::operator=(in_ECX,param_1);
  *(undefined4 *)(in_ECX + 0x460) = *(undefined4 *)(param_1 + 0x460);
  return;
}


// ==== 10329d60 FUN_10329d60

void FUN_10329d60(byte param_1)

{
  UChannelDownload *in_ECX;
  
  UChannelDownload::~UChannelDownload(in_ECX);
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x464);
  }
  return;
}


// ==== 10329d90 FUN_10329d90

UClass * FUN_10329d90(void)

{
  return &UNetConnection::PrivateStaticClass;
}


// ==== 10329da0 FUN_10329da0

void FUN_10329da0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  UObject::StaticAllocateObject
            (&UNetConnection::PrivateStaticClass,param_2,param_3,param_4,0,
             *(undefined4 *)GError_exref,0,0);
  return;
}


// ==== 10329de0 FUN_10329de0

undefined4 FUN_10329de0(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}


// ==== 10329df0 FUN_10329df0

undefined4 FUN_10329df0(void)

{
  int in_ECX;
  
  return *(undefined4 *)(in_ECX + 0x74);
}


// ==== 10329e00 FUN_10329e00

void FUN_10329e00(void)

{
  return;
}


// ==== 10329e10 FUN_10329e10

void FUN_10329e10(undefined4 param_1,undefined4 param_2)

{
  (**(code **)**(undefined4 **)GMalloc_exref)(param_1,param_2);
  return;
}


// ==== 10329e30 FUN_10329e30

UClass * FUN_10329e30(void)

{
  return &UChannel::PrivateStaticClass;
}


// ==== 10329e40 FUN_10329e40

void FUN_10329e40(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  UObject::StaticAllocateObject
            (&UChannel::PrivateStaticClass,param_2,param_3,param_4,0,*(undefined4 *)GError_exref,0,0
            );
  return;
}


// ==== 10329e80 FUN_10329e80

undefined4 FUN_10329e80(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}


// ==== 10329e90 FUN_10329e90

void FUN_10329e90(void)

{
  UObject *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107f0a19;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)in_ECX = UChannel::vftable;
  local_4 = 0;
  UObject::ConditionalDestroy(in_ECX);
  local_4 = 0xffffffff;
  UObject::~UObject(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 10329f00 FUN_10329f00

void FUN_10329f00(UObject *param_1)

{
  UObject *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f0a39;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UObject::UObject(in_ECX,param_1);
  *(undefined ***)in_ECX = UChannel::vftable;
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
  *(undefined4 *)(in_ECX + 0x6c) = *(undefined4 *)(param_1 + 0x6c);
  ExceptionList = local_c;
  return;
}


// ==== 10329fe0 FUN_10329fe0

void FUN_10329fe0(UObject *param_1)

{
  UObject *in_ECX;
  
  UObject::operator=(in_ECX,param_1);
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
  *(undefined4 *)(in_ECX + 0x6c) = *(undefined4 *)(param_1 + 0x6c);
  return;
}


// ==== 1032a070 FUN_1032a070

void FUN_1032a070(byte param_1)

{
  UChannel *in_ECX;
  
  UChannel::~UChannel(in_ECX);
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x70);
  }
  return;
}


// ==== 1032a0a0 FUN_1032a0a0

UChannel * FUN_1032a0a0(byte param_1)

{
  UChannel *in_ECX;
  
  if ((param_1 & 2) != 0) {
    _eh_vector_destructor_iterator_(in_ECX,0x70,*(int *)(in_ECX + -4),UChannel::~UChannel);
    if ((param_1 & 1) != 0) {
      (**(code **)(**(int **)GMalloc_exref + 8))(in_ECX + -4);
    }
    return in_ECX + -4;
  }
  UChannel::~UChannel(in_ECX);
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x70);
  }
  return in_ECX;
}


// ==== 1032a120 FUN_1032a120

UClass * FUN_1032a120(void)

{
  return &UControlChannel::PrivateStaticClass;
}


// ==== 1032a130 FUN_1032a130

void FUN_1032a130(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  UObject::StaticAllocateObject
            (&UControlChannel::PrivateStaticClass,param_2,param_3,param_4,0,
             *(undefined4 *)GError_exref,0,0);
  return;
}


// ==== 1032a170 FUN_1032a170

undefined4 FUN_1032a170(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}


// ==== 1032a180 FUN_1032a180

void FUN_1032a180(void)

{
  UObject *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107f0a58;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)in_ECX = UControlChannel::vftable_for_UChannel_;
  *(undefined ***)(in_ECX + 0x70) = UControlChannel::vftable_for_FOutputDevice_;
  local_4 = 0;
  UObject::ConditionalDestroy(in_ECX);
  local_4 = 0xffffffff;
  UChannel::~UChannel((UChannel *)in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 1032a1f0 FUN_1032a1f0

void FUN_1032a1f0(UControlChannel *param_1)

{
  if (param_1 != (UControlChannel *)0x0) {
    UControlChannel::UControlChannel(param_1);
    return;
  }
  return;
}


// ==== 1032a210 FUN_1032a210

void FUN_1032a210(UChannel *param_1)

{
  FOutputDevice *pFVar1;
  UChannel *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f0a78;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UChannel::UChannel(in_ECX,param_1);
  pFVar1 = (FOutputDevice *)0x0;
  local_4 = 0;
  if (param_1 != (UChannel *)0x0) {
    pFVar1 = (FOutputDevice *)(param_1 + 0x70);
  }
  FOutputDevice::FOutputDevice((FOutputDevice *)(in_ECX + 0x70),pFVar1);
  *(undefined ***)in_ECX = UControlChannel::vftable_for_UChannel_;
  *(undefined ***)(in_ECX + 0x70) = UControlChannel::vftable_for_FOutputDevice_;
  ExceptionList = local_c;
  return;
}


// ==== 1032a2a0 FUN_1032a2a0

void FUN_1032a2a0(UChannel *param_1)

{
  UChannel *in_ECX;
  
  UChannel::operator=(in_ECX,param_1);
  if (param_1 != (UChannel *)0x0) {
    FOutputDevice::operator=((FOutputDevice *)(in_ECX + 0x70),(FOutputDevice *)(param_1 + 0x70));
    return;
  }
  FOutputDevice::operator=((FOutputDevice *)(in_ECX + 0x70),(FOutputDevice *)0x0);
  return;
}


// ==== 1032a2f0 FUN_1032a2f0

void FUN_1032a2f0(byte param_1)

{
  UControlChannel *in_ECX;
  
  UControlChannel::~UControlChannel(in_ECX);
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x74);
  }
  return;
}


// ==== 1032a320 FUN_1032a320

UControlChannel * FUN_1032a320(byte param_1)

{
  UControlChannel *in_ECX;
  
  if ((param_1 & 2) != 0) {
    _eh_vector_destructor_iterator_
              (in_ECX,0x74,*(int *)(in_ECX + -4),UControlChannel::~UControlChannel);
    if ((param_1 & 1) != 0) {
      (**(code **)(**(int **)GMalloc_exref + 8))(in_ECX + -4);
    }
    return in_ECX + -4;
  }
  UControlChannel::~UControlChannel(in_ECX);
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x74);
  }
  return in_ECX;
}


// ==== 1032a3a0 FUN_1032a3a0

UClass * FUN_1032a3a0(void)

{
  return &UActorChannel::PrivateStaticClass;
}


// ==== 1032a3b0 FUN_1032a3b0

void FUN_1032a3b0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  UObject::StaticAllocateObject
            (&UActorChannel::PrivateStaticClass,param_2,param_3,param_4,0,
             *(undefined4 *)GError_exref,0,0);
  return;
}


// ==== 1032a3f0 FUN_1032a3f0

undefined4 FUN_1032a3f0(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}


// ==== 1032a400 FUN_1032a400

void FUN_1032a400(UActorChannel *param_1)

{
  if (param_1 != (UActorChannel *)0x0) {
    UActorChannel::UActorChannel(param_1);
    return;
  }
  return;
}


// ==== 1032a420 FUN_1032a420

undefined4 FUN_1032a420(void)

{
  int in_ECX;
  
  return *(undefined4 *)(in_ECX + 0x74);
}


// ==== 1032a430 FUN_1032a430

UClass * FUN_1032a430(void)

{
  return &UFileChannel::PrivateStaticClass;
}


// ==== 1032a440 FUN_1032a440

void FUN_1032a440(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  UObject::StaticAllocateObject
            (&UFileChannel::PrivateStaticClass,param_2,param_3,param_4,0,*(undefined4 *)GError_exref
             ,0,0);
  return;
}


// ==== 1032a480 FUN_1032a480

undefined4 FUN_1032a480(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}


// ==== 1032a490 FUN_1032a490

void FUN_1032a490(void)

{
  UObject *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107f0a98;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)in_ECX = UFileChannel::vftable;
  local_4 = 0;
  UObject::ConditionalDestroy(in_ECX);
  local_4 = 0xffffffff;
  UChannel::~UChannel((UChannel *)in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 1032a500 FUN_1032a500

void FUN_1032a500(UFileChannel *param_1)

{
  if (param_1 != (UFileChannel *)0x0) {
    UFileChannel::UFileChannel(param_1);
    return;
  }
  return;
}


// ==== 1032a520 FUN_1032a520

void FUN_1032a520(UChannel *param_1)

{
  UChannel *in_ECX;
  int iVar1;
  UChannel *pUVar2;
  UChannel *pUVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f0ab8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UChannel::UChannel(in_ECX,param_1);
  *(undefined ***)in_ECX = UFileChannel::vftable;
  *(undefined4 *)(in_ECX + 0x70) = *(undefined4 *)(param_1 + 0x70);
  *(undefined4 *)(in_ECX + 0x74) = *(undefined4 *)(param_1 + 0x74);
  pUVar2 = param_1 + 0x78;
  pUVar3 = in_ECX + 0x78;
  for (iVar1 = 0x80; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)pUVar3 = *(undefined4 *)pUVar2;
    pUVar2 = pUVar2 + 4;
    pUVar3 = pUVar3 + 4;
  }
  *(undefined4 *)(in_ECX + 0x278) = *(undefined4 *)(param_1 + 0x278);
  *(undefined4 *)(in_ECX + 0x27c) = *(undefined4 *)(param_1 + 0x27c);
  ExceptionList = local_c;
  return;
}


// ==== 1032a5d0 FUN_1032a5d0

void FUN_1032a5d0(UChannel *param_1)

{
  UChannel *pUVar1;
  UChannel *in_ECX;
  int iVar2;
  
  UChannel::operator=(in_ECX,param_1);
  *(undefined4 *)(in_ECX + 0x70) = *(undefined4 *)(param_1 + 0x70);
  *(undefined4 *)(in_ECX + 0x74) = *(undefined4 *)(param_1 + 0x74);
  pUVar1 = in_ECX + 0x78;
  iVar2 = 0x100;
  do {
    *(undefined2 *)pUVar1 = *(undefined2 *)(pUVar1 + ((int)param_1 - (int)in_ECX));
    pUVar1 = pUVar1 + 2;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  *(undefined4 *)(in_ECX + 0x278) = *(undefined4 *)(param_1 + 0x278);
  *(undefined4 *)(in_ECX + 0x27c) = *(undefined4 *)(param_1 + 0x27c);
  return;
}


// ==== 1032a650 FUN_1032a650

void FUN_1032a650(byte param_1)

{
  UFileChannel *in_ECX;
  
  UFileChannel::~UFileChannel(in_ECX);
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x280);
  }
  return;
}


// ==== 1032a680 FUN_1032a680

UFileChannel * FUN_1032a680(byte param_1)

{
  UFileChannel *in_ECX;
  
  if ((param_1 & 2) != 0) {
    _eh_vector_destructor_iterator_(in_ECX,0x280,*(int *)(in_ECX + -4),UFileChannel::~UFileChannel);
    if ((param_1 & 1) != 0) {
      (**(code **)(**(int **)GMalloc_exref + 8))(in_ECX + -4);
    }
    return in_ECX + -4;
  }
  UFileChannel::~UFileChannel(in_ECX);
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x280);
  }
  return in_ECX;
}


// ==== 1032a700 FUN_1032a700

UClass * FUN_1032a700(void)

{
  return &UDemoRecConnection::PrivateStaticClass;
}


// ==== 1032a710 FUN_1032a710

void FUN_1032a710(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  UObject::StaticAllocateObject
            (&UDemoRecConnection::PrivateStaticClass,param_2,param_3,param_4,0,
             *(undefined4 *)GError_exref,0,0);
  return;
}


// ==== 1032a750 FUN_1032a750

undefined4 FUN_1032a750(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}


// ==== 1032a760 FUN_1032a760

UClass * FUN_1032a760(void)

{
  return &UDemoRecDriver::PrivateStaticClass;
}


// ==== 1032a770 FUN_1032a770

void FUN_1032a770(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  UObject::StaticAllocateObject
            (&UDemoRecDriver::PrivateStaticClass,param_2,param_3,param_4,0,
             *(undefined4 *)GError_exref,0,0);
  return;
}


// ==== 1032a7b0 FUN_1032a7b0

undefined4 FUN_1032a7b0(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}


// ==== 1032a7c0 FUN_1032a7c0

void FUN_1032a7c0(UDemoRecDriver *param_1)

{
  if (param_1 != (UDemoRecDriver *)0x0) {
    UDemoRecDriver::UDemoRecDriver(param_1);
    return;
  }
  return;
}


// ==== 1032a7e0 FUN_1032a7e0

undefined4 FUN_1032a7e0(void)

{
  return 1;
}


// ==== 1032a7f0 FUN_1032a7f0

void FUN_1032a7f0(undefined4 *param_1)

{
  undefined4 *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f0ae8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *in_ECX = *param_1;
  FString::FString((FString *)(in_ECX + 1),(FString *)(param_1 + 1));
  local_4 = 0;
  FString::FString((FString *)(in_ECX + 4),(FString *)(param_1 + 4));
  in_ECX[7] = param_1[7];
  ExceptionList = local_c;
  return;
}


// ==== 1032aa10 FUN_1032aa10

void FUN_1032aa10(void)

{
  int in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107f0b18;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  FString::~FString((FString *)(in_ECX + 0x10));
  local_4 = 0xffffffff;
  FString::~FString((FString *)(in_ECX + 4));
  ExceptionList = local_c;
  return;
}


// ==== 1032aaf0 FUN_1032aaf0

UObject * FUN_1032aaf0(UObject *param_1)

{
  int iVar1;
  
  if (param_1 != (UObject *)0x0) {
    iVar1 = UObject::IsA(param_1,&UNetConnection::PrivateStaticClass);
    if (iVar1 != 0) {
      return param_1;
    }
  }
  return (UObject *)0x0;
}


// ==== 1032ab20 FUN_1032ab20

int FUN_1032ab20(undefined4 param_1,FArray *param_2)

{
  int iVar1;
  
  iVar1 = FArray::Add(param_2,1,4);
  return *(int *)param_2 + iVar1 * 4;
}


// ==== 1032ab80 FUN_1032ab80

int FUN_1032ab80(undefined4 param_1,FArray *param_2)

{
  int iVar1;
  
  iVar1 = FArray::Add(param_2,1,0x14);
  return *(int *)param_2 + iVar1 * 0x14;
}


// ==== 1032abb0 FUN_1032abb0

int FUN_1032abb0(undefined4 param_1,FArray *param_2)

{
  int iVar1;
  
  iVar1 = FArray::Add(param_2,1,0xc);
  return *(int *)param_2 + iVar1 * 0xc;
}


// ==== 1032ac10 FUN_1032ac10

UClass * FUN_1032ac10(void)

{
  return &AGameStats::PrivateStaticClass;
}


// ==== 1032ac20 FUN_1032ac20

undefined4 FUN_1032ac20(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}


// ==== 1032ac30 FUN_1032ac30

UClass * FUN_1032ac30(void)

{
  return &UViewport::PrivateStaticClass;
}


// ==== 1032ac40 FUN_1032ac40

int FUN_1032ac40(int param_1)

{
  int *in_ECX;
  
  return *in_ECX + param_1;
}


// ==== 1032ac50 FUN_1032ac50

void FUN_1032ac50(int param_1)

{
  FArray *in_ECX;
  
  FArray::Empty(in_ECX,1,param_1);
  return;
}


// ==== 1032ac90 FUN_1032ac90

int FUN_1032ac90(int param_1)

{
  int *in_ECX;
  
  return *in_ECX + param_1 * 0xc;
}


// ==== 1032ad30 FUN_1032ad30

void FUN_1032ad30(byte param_1)

{
  FString *in_ECX;
  
  FString::~FString(in_ECX);
  if ((param_1 & 1) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))();
  }
  return;
}


// ==== 1032ad60 FUN_1032ad60

int FUN_1032ad60(undefined4 param_1,FArray *param_2)

{
  int iVar1;
  
  iVar1 = FArray::Add(param_2,1,0xc);
  return *(int *)param_2 + iVar1 * 0xc;
}


// ==== 1032ad90 FUN_1032ad90

int FUN_1032ad90(undefined4 param_1,FArray *param_2)

{
  int iVar1;
  
  iVar1 = FArray::Add(param_2,1,4);
  return *(int *)param_2 + iVar1 * 4;
}


// ==== 1032adb0 FUN_1032adb0

int FUN_1032adb0(undefined4 param_1,FArray *param_2)

{
  int iVar1;
  
  iVar1 = FArray::Add(param_2,1,1);
  return *(int *)param_2 + iVar1;
}


// ==== 1032add0 FUN_1032add0

int FUN_1032add0(undefined4 param_1,FArray *param_2)

{
  int iVar1;
  
  iVar1 = FArray::Add(param_2,1,4);
  return *(int *)param_2 + iVar1 * 4;
}


// ==== 1032ae10 FUN_1032ae10

void FUN_1032ae10(UPackageMapLevel *param_1)

{
  if (param_1 != (UPackageMapLevel *)0x0) {
    UPackageMapLevel::UPackageMapLevel(param_1);
    return;
  }
  return;
}


// ==== 1032ae30 FUN_1032ae30

UPackageMapLevel * FUN_1032ae30(byte param_1)

{
  UPackageMapLevel *in_ECX;
  
  if ((param_1 & 2) != 0) {
    _eh_vector_destructor_iterator_
              (in_ECX,0x80,*(int *)(in_ECX + -4),UPackageMapLevel::~UPackageMapLevel);
    if ((param_1 & 1) != 0) {
      (**(code **)(**(int **)GMalloc_exref + 8))(in_ECX + -4);
    }
    return in_ECX + -4;
  }
  UPackageMapLevel::~UPackageMapLevel(in_ECX);
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x80);
  }
  return in_ECX;
}


// ==== 1032aeb0 FUN_1032aeb0

void FUN_1032aeb0(byte param_1)

{
  FBitWriter *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107f0b39;
  local_c = ExceptionList;
  local_4 = 0xffffffff;
  ExceptionList = &local_c;
  FBitWriter::~FBitWriter(in_ECX);
  if ((param_1 & 1) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))();
  }
  ExceptionList = local_c;
  return;
}


// ==== 1032af20 FUN_1032af20

FBitWriter * FUN_1032af20(byte param_1)

{
  FBitWriter *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f0b59;
  local_c = ExceptionList;
  if ((param_1 & 2) != 0) {
    ExceptionList = &local_c;
    _eh_vector_destructor_iterator_(in_ECX,0x74,*(int *)(in_ECX + -4),FOutBunch::~FOutBunch);
    if ((param_1 & 1) != 0) {
      (**(code **)(**(int **)GMalloc_exref + 8))(in_ECX + -4);
    }
    ExceptionList = local_c;
    return in_ECX + -4;
  }
  local_4 = 0xffffffff;
  ExceptionList = &local_c;
  FBitWriter::~FBitWriter(in_ECX);
  if ((param_1 & 1) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))();
  }
  ExceptionList = local_c;
  return in_ECX;
}


// ==== 1032aff0 FUN_1032aff0

void FUN_1032aff0(byte param_1)

{
  FBitReader *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107f0b79;
  local_c = ExceptionList;
  local_4 = 0xffffffff;
  ExceptionList = &local_c;
  FBitReader::~FBitReader(in_ECX);
  if ((param_1 & 1) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))();
  }
  ExceptionList = local_c;
  return;
}


// ==== 1032b060 FUN_1032b060

FBitReader * FUN_1032b060(byte param_1)

{
  FBitReader *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f0b99;
  local_c = ExceptionList;
  if ((param_1 & 2) != 0) {
    ExceptionList = &local_c;
    _eh_vector_destructor_iterator_(in_ECX,0x68,*(int *)(in_ECX + -4),FInBunch::~FInBunch);
    if ((param_1 & 1) != 0) {
      (**(code **)(**(int **)GMalloc_exref + 8))(in_ECX + -4);
    }
    ExceptionList = local_c;
    return in_ECX + -4;
  }
  local_4 = 0xffffffff;
  ExceptionList = &local_c;
  FBitReader::~FBitReader(in_ECX);
  if ((param_1 & 1) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))();
  }
  ExceptionList = local_c;
  return in_ECX;
}


// ==== 1032b130 FUN_1032b130

UDownload * FUN_1032b130(byte param_1)

{
  UDownload *in_ECX;
  
  if ((param_1 & 2) != 0) {
    _eh_vector_destructor_iterator_(in_ECX,0x460,*(int *)(in_ECX + -4),UDownload::~UDownload);
    if ((param_1 & 1) != 0) {
      (**(code **)(**(int **)GMalloc_exref + 8))(in_ECX + -4);
    }
    return in_ECX + -4;
  }
  UDownload::~UDownload(in_ECX);
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x460);
  }
  return in_ECX;
}


// ==== 1032b1b0 FUN_1032b1b0

void FUN_1032b1b0(UChannelDownload *param_1)

{
  if (param_1 != (UChannelDownload *)0x0) {
    UChannelDownload::UChannelDownload(param_1);
    return;
  }
  return;
}


// ==== 1032b1d0 FUN_1032b1d0

UChannelDownload * FUN_1032b1d0(byte param_1)

{
  UChannelDownload *in_ECX;
  
  if ((param_1 & 2) != 0) {
    _eh_vector_destructor_iterator_
              (in_ECX,0x464,*(int *)(in_ECX + -4),UChannelDownload::~UChannelDownload);
    if ((param_1 & 1) != 0) {
      (**(code **)(**(int **)GMalloc_exref + 8))(in_ECX + -4);
    }
    return in_ECX + -4;
  }
  UChannelDownload::~UChannelDownload(in_ECX);
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x464);
  }
  return in_ECX;
}


// ==== 1032b250 FUN_1032b250

void FUN_1032b250(int param_1,FString *param_2)

{
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_107f0bb0;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  FString::operator=(param_2,(FString *)(*(int *)(in_ECX + 0xe4) + 0x94));
  ExceptionList = local_10;
  return;
}


// ==== 1032b2d1 Catch@1032b2d1

void Catch_1032b2d1(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 1032b2e5 Catch@1032b2e5

void Catch_1032b2e5(void)

{
  int iVar1;
  ushort *puVar2;
  ushort *puVar3;
  int iVar4;
  int unaff_EBP;
  
  appUnwindf((ushort *)&DAT_10851d80,L"AGameStats::execGetMapFileName");
  iVar1 = *(int *)(unaff_EBP + 8);
  iVar4 = *(int *)(iVar1 + 0xc) - *(int *)(*(UObject **)(iVar1 + 4) + 0x54);
  puVar2 = UObject::GetFullName(*(UObject **)(iVar1 + 4),(ushort *)0x0);
  puVar3 = UObject::GetFullName(*(UObject **)(iVar1 + 8),(ushort *)0x0);
  appUnwindf((ushort *)L"(%s @ %s : %04X)",puVar3,puVar2,iVar4);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1032b370 FUN_1032b370

void FUN_1032b370(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  FArray *in_ECX;
  int iVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f0bc9;
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


// ==== 1032b420 FUN_1032b420

void FUN_1032b420(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  FArray *in_ECX;
  int iVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f0be9;
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


// ==== 1032b4d0 FUN_1032b4d0

void FUN_1032b4d0(int *param_1)

{
  int iVar1;
  FArray *in_ECX;
  int iVar2;
  int iVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f0c09;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX,param_1[1],0x20);
  iVar2 = 0;
  local_4 = 0;
  *(undefined4 *)(in_ECX + 4) = 0;
  if (0 < param_1[1]) {
    iVar3 = 0;
    do {
      iVar1 = FArray::Add(in_ECX,1,0x20);
      if (iVar1 * 0x20 + *(int *)in_ECX != 0) {
        thunk_FUN_1032a7f0(*param_1 + iVar3);
      }
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + 0x20;
    } while (iVar2 < param_1[1]);
  }
  ExceptionList = local_c;
  return;
}


// ==== 1032b590 FUN_1032b590

void FUN_1032b590(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  FArray *in_ECX;
  int iVar3;
  int iVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f0c29;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX,param_1[1],0xc);
  iVar3 = 0;
  local_4 = 0;
  *(undefined4 *)(in_ECX + 4) = 0;
  if (0 < param_1[1]) {
    iVar4 = 0;
    do {
      iVar2 = FArray::Add(in_ECX,1,0xc);
      puVar1 = (undefined4 *)(*(int *)in_ECX + iVar2 * 0xc);
      if (puVar1 != (undefined4 *)0x0) {
        iVar2 = *param_1 + iVar4;
        *puVar1 = *(undefined4 *)(*param_1 + iVar4);
        puVar1[1] = *(undefined4 *)(iVar2 + 4);
        puVar1[2] = *(undefined4 *)(iVar2 + 8);
      }
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + 0xc;
    } while (iVar3 < param_1[1]);
  }
  ExceptionList = local_c;
  return;
}


// ==== 1032b660 FUN_1032b660

void FUN_1032b660(int param_1,int param_2)

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


// ==== 1032b720 FUN_1032b720

void FUN_1032b720(int param_1,int param_2)

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


// ==== 1032b7e0 FUN_1032b7e0

void FUN_1032b7e0(void)

{
  UObject *this;
  int iVar1;
  int iVar2;
  uint uVar3;
  int *in_ECX;
  int iVar4;
  undefined4 *puVar5;
  
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
    iVar4 = 0;
    do {
      puVar5 = (undefined4 *)(*in_ECX + iVar2);
      this = (UObject *)puVar5[1];
      if (this == (UObject *)0x0) {
        uVar3 = 0;
      }
      else {
        uVar3 = UObject::GetIndex(this);
      }
      iVar2 = iVar2 + 0xc;
      uVar3 = in_ECX[4] - 1U & uVar3;
      *puVar5 = *(undefined4 *)(iVar1 + uVar3 * 4);
      *(int *)(iVar1 + uVar3 * 4) = iVar4;
      iVar4 = iVar4 + 1;
    } while (iVar4 < in_ECX[1]);
  }
  if (in_ECX[3] != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))(in_ECX[3]);
  }
  in_ECX[3] = iVar1;
  return;
}


// ==== 1032b8d0 FUN_1032b8d0

void FUN_1032b8d0(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  FArray *in_ECX;
  int iVar3;
  int iVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f0c49;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX,param_1[1],0xc);
  iVar3 = 0;
  local_4 = 0;
  *(undefined4 *)(in_ECX + 4) = 0;
  if (0 < param_1[1]) {
    iVar4 = 0;
    do {
      iVar2 = FArray::Add(in_ECX,1,0xc);
      puVar1 = (undefined4 *)(*(int *)in_ECX + iVar2 * 0xc);
      if (puVar1 != (undefined4 *)0x0) {
        iVar2 = *param_1 + iVar4;
        *puVar1 = *(undefined4 *)(*param_1 + iVar4);
        puVar1[1] = *(undefined4 *)(iVar2 + 4);
        puVar1[2] = *(undefined4 *)(iVar2 + 8);
      }
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + 0xc;
    } while (iVar3 < param_1[1]);
  }
  ExceptionList = local_c;
  return;
}


// ==== 1032ba60 FUN_1032ba60

void FUN_1032ba60(byte param_1)

{
  thunk_FUN_1032aa10();
  if ((param_1 & 1) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))();
  }
  return;
}


// ==== 1032ba90 FUN_1032ba90

void FUN_1032ba90(int param_1,int param_2)

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


// ==== 1032bb30 FUN_1032bb30

void FUN_1032bb30(FArray *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  FArray *in_ECX;
  int iVar3;
  int iVar4;
  
  if (in_ECX == param_1) {
    return;
  }
  FArray::Empty(in_ECX,0xc,*(int *)(param_1 + 4));
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 4)) {
    iVar4 = 0;
    do {
      iVar2 = FArray::Add(in_ECX,1,0xc);
      puVar1 = (undefined4 *)(*(int *)in_ECX + iVar2 * 0xc);
      if (puVar1 != (undefined4 *)0x0) {
        iVar2 = *(int *)param_1 + iVar4;
        *puVar1 = *(undefined4 *)(*(int *)param_1 + iVar4);
        puVar1[1] = *(undefined4 *)(iVar2 + 4);
        puVar1[2] = *(undefined4 *)(iVar2 + 8);
      }
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + 0xc;
    } while (iVar3 < *(int *)(param_1 + 4));
    return;
  }
  return;
}


// ==== 1032bbf0 FUN_1032bbf0

UObject * FUN_1032bbf0(UObject *param_1)

{
  int iVar1;
  
  if (param_1 != (UObject *)0x0) {
    iVar1 = UObject::IsA(param_1,&UViewport::PrivateStaticClass);
    if (iVar1 != 0) {
      return param_1;
    }
  }
  return (UObject *)0x0;
}


// ==== 1032bc20 FUN_1032bc20

void FUN_1032bc20(int *param_1)

{
  int iVar1;
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f0c69;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX,param_1[1],4);
  iVar1 = 0;
  if (0 < *(int *)(in_ECX + 4)) {
    do {
      *(undefined4 *)(*(int *)in_ECX + iVar1 * 4) = *(undefined4 *)(*param_1 + iVar1 * 4);
      iVar1 = iVar1 + 1;
    } while (iVar1 < *(int *)(in_ECX + 4));
  }
  ExceptionList = local_c;
  return;
}


// ==== 1032bcd0 FUN_1032bcd0

void FUN_1032bcd0(FArray *param_1)

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


// ==== 1032bd40 FUN_1032bd40

void FUN_1032bd40(int *param_1)

{
  FString *this;
  int iVar1;
  FArray *in_ECX;
  int iVar2;
  int iVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f0c89;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX,param_1[1],0xc);
  iVar2 = 0;
  local_4 = 0;
  *(undefined4 *)(in_ECX + 4) = 0;
  if (0 < param_1[1]) {
    iVar3 = 0;
    do {
      iVar1 = FArray::Add(in_ECX,1,0xc);
      this = (FString *)(*(int *)in_ECX + iVar1 * 0xc);
      if (this != (FString *)0x0) {
        FString::FString(this,(FString *)(*param_1 + iVar3));
      }
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + 0xc;
    } while (iVar2 < param_1[1]);
  }
  ExceptionList = local_c;
  return;
}


// ==== 1032be00 FUN_1032be00

void FUN_1032be00(undefined4 *param_1)

{
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f0ca9;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX,param_1[1],1);
  local_4 = 0;
  _memcpy(*(void **)in_ECX,(void *)*param_1,*(size_t *)(in_ECX + 4));
  ExceptionList = local_c;
  return;
}


// ==== 1032be80 FUN_1032be80

void FUN_1032be80(FArray *param_1)

{
  int iVar1;
  FArray *in_ECX;
  int iVar2;
  
  if (in_ECX != param_1) {
    FArray::Empty(in_ECX,1,*(int *)(param_1 + 4));
    iVar2 = 0;
    if (0 < *(int *)(param_1 + 4)) {
      do {
        iVar1 = FArray::Add(in_ECX,1,1);
        if ((undefined1 *)(*(int *)in_ECX + iVar1) != (undefined1 *)0x0) {
          *(undefined1 *)(*(int *)in_ECX + iVar1) = *(undefined1 *)(iVar2 + *(int *)param_1);
        }
        iVar2 = iVar2 + 1;
      } while (iVar2 < *(int *)(param_1 + 4));
    }
    return;
  }
  return;
}


// ==== 1032bef0 FUN_1032bef0

void FUN_1032bef0(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  FArray *in_ECX;
  int iVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f0cc9;
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


// ==== 1032bfc0 FUN_1032bfc0

void FUN_1032bfc0(FArray *param_1)

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


// ==== 1032c030 FUN_1032c030

void FUN_1032c030(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  FArray *in_ECX;
  int iVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f0ce9;
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


// ==== 1032c0e0 FUN_1032c0e0

void FUN_1032c0e0(int param_1,int param_2)

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


// ==== 1032c1a0 FUN_1032c1a0

void FUN_1032c1a0(int param_1)

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


// ==== 1032c2b0 FUN_1032c2b0

void FUN_1032c2b0(int param_1,int param_2)

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


// ==== 1032c350 FUN_1032c350

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032c350(void)

{
  UObject *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_107f0d00;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  _DAT_11d805e4 = UObject::GetClass(in_ECX);
  *(undefined4 *)(DAT_11d81024 + 0x50) = 1;
  ExceptionList = local_10;
  return;
}


// ==== 1032c3a7 Catch@1032c3a7

void Catch_1032c3a7(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 1032c3bb Catch@1032c3bb

void Catch_1032c3bb(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"UControlChannel::StaticConstructor");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1032c400 FUN_1032c400

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032c400(void)

{
  UObject *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_107f0d10;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  _DAT_11d805e8 = UObject::GetClass(in_ECX);
  *(undefined4 *)(DAT_11d81554 + 0x50) = 2;
  ExceptionList = local_10;
  return;
}


// ==== 1032c457 Catch@1032c457

void Catch_1032c457(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 1032c46b Catch@1032c46b

void Catch_1032c46b(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"UActorChannel::StaticConstructor");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1032c4b0 FUN_1032c4b0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032c4b0(void)

{
  UObject *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_107f0d20;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  _DAT_11d805ec = UObject::GetClass(in_ECX);
  *(undefined4 *)(DAT_11d81a84 + 0x50) = 3;
  ExceptionList = local_10;
  return;
}


// ==== 1032c507 Catch@1032c507

void Catch_1032c507(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 1032c51b Catch@1032c51b

void Catch_1032c51b(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"UFileChannel::StaticConstructor");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1032c560 FUN_1032c560

void FUN_1032c560(int param_1,FString *param_2)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_107f0d30;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffd4;
  local_8 = 0;
  local_18 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  ExceptionList = &local_10;
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&local_18);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  iVar2 = thunk_FUN_103285e0(local_18);
  if (iVar2 != 0) {
    iVar3 = thunk_FUN_1032aaf0(*(undefined4 *)(iVar2 + 0x560));
    if (iVar3 != 0) {
      ExceptionList = local_10;
      return;
    }
    iVar2 = thunk_FUN_1032bbf0(*(undefined4 *)(iVar2 + 0x560));
    if (iVar2 != 0) {
      ExceptionList = local_10;
      return;
    }
  }
  FString::operator=(param_2,(ushort *)&DAT_10853098);
  ExceptionList = local_10;
  return;
}


// ==== 1032c62e Catch@1032c62e

void Catch_1032c62e(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_10914c48);
}


// ==== 1032c642 Catch@1032c642

void Catch_1032c642(void)

{
  int iVar1;
  ushort *puVar2;
  ushort *puVar3;
  int iVar4;
  int unaff_EBP;
  
  appUnwindf((ushort *)&DAT_10851d80,L"AGameStats::GetStatsIdentifier");
  iVar1 = *(int *)(unaff_EBP + 8);
  iVar4 = *(int *)(iVar1 + 0xc) - *(int *)(*(UObject **)(iVar1 + 4) + 0x54);
  puVar2 = UObject::GetFullName(*(UObject **)(iVar1 + 4),(ushort *)0x0);
  puVar3 = UObject::GetFullName(*(UObject **)(iVar1 + 8),(ushort *)0x0);
  appUnwindf((ushort *)L"(%s @ %s : %04X)",puVar3,puVar2,iVar4);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1032c6e0 FUN_1032c6e0

void FUN_1032c6e0(void)

{
  int iVar1;
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107f0d49;
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


// ==== 1032c7a0 FUN_1032c7a0

void FUN_1032c7a0(FArray *param_1)

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


// ==== 1032c810 FUN_1032c810

void FUN_1032c810(void)

{
  int iVar1;
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107f0d69;
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


// ==== 1032c8d0 FUN_1032c8d0

void FUN_1032c8d0(FArray *param_1)

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


// ==== 1032c940 FUN_1032c940

void FUN_1032c940(void)

{
  int iVar1;
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107f0d89;
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
  FArray::~FArray(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 1032ca00 FUN_1032ca00

void FUN_1032ca00(FArray *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  FArray *in_ECX;
  int iVar3;
  int iVar4;
  
  if (in_ECX == param_1) {
    return;
  }
  FArray::Empty(in_ECX,0xc,*(int *)(param_1 + 4));
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 4)) {
    iVar4 = 0;
    do {
      iVar2 = FArray::Add(in_ECX,1,0xc);
      puVar1 = (undefined4 *)(*(int *)in_ECX + iVar2 * 0xc);
      if (puVar1 != (undefined4 *)0x0) {
        iVar2 = *(int *)param_1 + iVar4;
        *puVar1 = *(undefined4 *)(*(int *)param_1 + iVar4);
        puVar1[1] = *(undefined4 *)(iVar2 + 4);
        puVar1[2] = *(undefined4 *)(iVar2 + 8);
      }
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + 0xc;
    } while (iVar3 < *(int *)(param_1 + 4));
    return;
  }
  return;
}


// ==== 1032ca90 FUN_1032ca90

void FUN_1032ca90(TArray<unsigned_char> *param_1)

{
  TArray<unsigned_char> *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f0da8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  TArray<unsigned_char>::TArray<unsigned_char>(in_ECX,param_1);
  *(undefined8 *)(in_ECX + 0xc) = *(undefined8 *)(param_1 + 0xc);
  ExceptionList = local_c;
  return;
}


// ==== 1032cb60 FUN_1032cb60

void FUN_1032cb60(void)

{
  int iVar1;
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107f0dc9;
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
  FArray::~FArray(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 1032cc20 FUN_1032cc20

void FUN_1032cc20(int param_1,int param_2)

{
  int iVar1;
  FArray *in_ECX;
  int iVar2;
  int iVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f0df8;
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
    iVar3 = param_1 << 5;
    iVar2 = iVar2 - param_1;
    do {
      iVar1 = *(int *)in_ECX;
      local_4 = 0;
      FString::~FString((FString *)(iVar1 + iVar3 + 0x10));
      local_4 = 0xffffffff;
      FString::~FString((FString *)(iVar1 + iVar3 + 4));
      iVar3 = iVar3 + 0x20;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  FArray::Remove(in_ECX,param_1,param_2,0x20);
  ExceptionList = local_c;
  return;
}


// ==== 1032cd40 FUN_1032cd40

void FUN_1032cd40(int param_1)

{
  int iVar1;
  FArray *in_ECX;
  int iVar2;
  int iVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f0e28;
  local_c = ExceptionList;
  iVar2 = 0;
  ExceptionList = &local_c;
  if (0 < *(int *)(in_ECX + 4)) {
    iVar3 = 0;
    ExceptionList = &local_c;
    do {
      iVar1 = *(int *)in_ECX;
      local_4 = 0;
      FString::~FString((FString *)(iVar1 + iVar3 + 0x10));
      local_4 = 0xffffffff;
      FString::~FString((FString *)(iVar1 + iVar3 + 4));
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + 0x20;
    } while (iVar2 < *(int *)(in_ECX + 4));
  }
  FArray::Empty(in_ECX,0x20,param_1);
  ExceptionList = local_c;
  return;
}


// ==== 1032cde0 FUN_1032cde0

void FUN_1032cde0(void)

{
  TArray<unsigned_char> *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107f0e48;
  local_c = ExceptionList;
  local_4 = 0xffffffff;
  ExceptionList = &local_c;
  TArray<unsigned_char>::~TArray<unsigned_char>(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 1032ce30 FUN_1032ce30

void FUN_1032ce30(void)

{
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107f0e69;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  thunk_FUN_1032c0e0(0,*(undefined4 *)(in_ECX + 4));
  local_4 = 0xffffffff;
  FArray::~FArray(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 1032cea0 FUN_1032cea0

void FUN_1032cea0(FArray *param_1)

{
  FString *this;
  int iVar1;
  FArray *in_ECX;
  int iVar2;
  int iVar3;
  
  if (in_ECX == param_1) {
    return;
  }
  thunk_FUN_1032c1a0(*(int *)(param_1 + 4));
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 4)) {
    iVar3 = 0;
    do {
      iVar1 = FArray::Add(in_ECX,1,0xc);
      this = (FString *)(*(int *)in_ECX + iVar1 * 0xc);
      if (this != (FString *)0x0) {
        FString::FString(this,(FString *)(*(int *)param_1 + iVar3));
      }
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + 0xc;
    } while (iVar2 < *(int *)(param_1 + 4));
    return;
  }
  return;
}


// ==== 1032cf20 FUN_1032cf20

void FUN_1032cf20(void)

{
  int iVar1;
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107f0e89;
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


// ==== 1032cfe0 FUN_1032cfe0

void FUN_1032cfe0(FArray *param_1)

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


// ==== 1032d070 FUN_1032d070

void FUN_1032d070(void)

{
  int iVar1;
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107f0ea9;
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


// ==== 1032d130 FUN_1032d130

void FUN_1032d130(void)

{
  UObject *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_107f0ee2;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)in_ECX = UNetDriver::vftable_for_UObject_;
  *(undefined ***)(in_ECX + 0x34) = UNetDriver::vftable_for_FExec_;
  local_4 = 2;
  UObject::ConditionalDestroy(in_ECX);
  local_4._0_1_ = 1;
  thunk_FUN_1032ce30();
  local_4 = (uint)local_4._1_3_ << 8;
  thunk_FUN_1032c6e0();
  local_4 = 0xffffffff;
  USubsystem::~USubsystem((USubsystem *)in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 1032d1d0 FUN_1032d1d0

void FUN_1032d1d0(USubsystem *param_1)

{
  USubsystem *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f0f22;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  USubsystem::USubsystem(in_ECX,param_1);
  local_4 = 0;
  *(undefined ***)in_ECX = UNetDriver::vftable_for_UObject_;
  *(undefined ***)(in_ECX + 0x34) = UNetDriver::vftable_for_FExec_;
  thunk_FUN_1032b370(param_1 + 0x38);
  local_4 = CONCAT31(local_4._1_3_,1);
  *(undefined4 *)(in_ECX + 0x44) = *(undefined4 *)(param_1 + 0x44);
  *(undefined4 *)(in_ECX + 0x48) = *(undefined4 *)(param_1 + 0x48);
  *(undefined4 *)(in_ECX + 0x4c) = *(undefined4 *)(param_1 + 0x4c);
  *(undefined8 *)(in_ECX + 0x50) = *(undefined8 *)(param_1 + 0x50);
  *(undefined4 *)(in_ECX + 0x58) = *(undefined4 *)(param_1 + 0x58);
  *(undefined4 *)(in_ECX + 0x5c) = *(undefined4 *)(param_1 + 0x5c);
  *(undefined4 *)(in_ECX + 0x60) = *(undefined4 *)(param_1 + 0x60);
  *(undefined4 *)(in_ECX + 100) = *(undefined4 *)(param_1 + 100);
  *(undefined4 *)(in_ECX + 0x68) = *(undefined4 *)(param_1 + 0x68);
  *(undefined4 *)(in_ECX + 0x6c) = *(undefined4 *)(param_1 + 0x6c);
  *(undefined4 *)(in_ECX + 0x70) = *(undefined4 *)(param_1 + 0x70);
  *(undefined4 *)(in_ECX + 0x74) = *(undefined4 *)(param_1 + 0x74);
  *(undefined4 *)(in_ECX + 0x78) = *(undefined4 *)(param_1 + 0x78);
  *(undefined4 *)(in_ECX + 0x7c) = *(undefined4 *)(param_1 + 0x7c);
  *(undefined4 *)(in_ECX + 0x80) = *(undefined4 *)(param_1 + 0x80);
  *(undefined4 *)(in_ECX + 0x84) = *(undefined4 *)(param_1 + 0x84);
  *(undefined4 *)(in_ECX + 0x88) = *(undefined4 *)(param_1 + 0x88);
  *(undefined4 *)(in_ECX + 0x8c) = *(undefined4 *)(param_1 + 0x8c);
  *(undefined4 *)(in_ECX + 0x90) = *(undefined4 *)(param_1 + 0x90);
  *(undefined4 *)(in_ECX + 0x94) = *(undefined4 *)(param_1 + 0x94);
  thunk_FUN_1032bd40(param_1 + 0x98);
  ExceptionList = local_c;
  return;
}


// ==== 1032d320 FUN_1032d320

void FUN_1032d320(USubsystem *param_1)

{
  USubsystem *in_ECX;
  
  USubsystem::operator=(in_ECX,param_1);
  thunk_FUN_1032c7a0(param_1 + 0x38);
  *(undefined4 *)(in_ECX + 0x44) = *(undefined4 *)(param_1 + 0x44);
  *(undefined4 *)(in_ECX + 0x48) = *(undefined4 *)(param_1 + 0x48);
  *(undefined4 *)(in_ECX + 0x4c) = *(undefined4 *)(param_1 + 0x4c);
  *(undefined8 *)(in_ECX + 0x50) = *(undefined8 *)(param_1 + 0x50);
  *(undefined4 *)(in_ECX + 0x58) = *(undefined4 *)(param_1 + 0x58);
  *(undefined4 *)(in_ECX + 0x5c) = *(undefined4 *)(param_1 + 0x5c);
  *(undefined4 *)(in_ECX + 0x60) = *(undefined4 *)(param_1 + 0x60);
  *(undefined4 *)(in_ECX + 100) = *(undefined4 *)(param_1 + 100);
  *(undefined4 *)(in_ECX + 0x68) = *(undefined4 *)(param_1 + 0x68);
  *(undefined4 *)(in_ECX + 0x6c) = *(undefined4 *)(param_1 + 0x6c);
  *(undefined4 *)(in_ECX + 0x70) = *(undefined4 *)(param_1 + 0x70);
  *(undefined4 *)(in_ECX + 0x74) = *(undefined4 *)(param_1 + 0x74);
  *(undefined4 *)(in_ECX + 0x78) = *(undefined4 *)(param_1 + 0x78);
  *(undefined4 *)(in_ECX + 0x7c) = *(undefined4 *)(param_1 + 0x7c);
  *(undefined4 *)(in_ECX + 0x80) = *(undefined4 *)(param_1 + 0x80);
  *(undefined4 *)(in_ECX + 0x84) = *(undefined4 *)(param_1 + 0x84);
  *(undefined4 *)(in_ECX + 0x88) = *(undefined4 *)(param_1 + 0x88);
  *(undefined4 *)(in_ECX + 0x8c) = *(undefined4 *)(param_1 + 0x8c);
  *(undefined4 *)(in_ECX + 0x90) = *(undefined4 *)(param_1 + 0x90);
  *(undefined4 *)(in_ECX + 0x94) = *(undefined4 *)(param_1 + 0x94);
  thunk_FUN_1032cea0(param_1 + 0x98);
  return;
}


// ==== 1032d410 FUN_1032d410

void FUN_1032d410(byte param_1)

{
  UNetDriver *in_ECX;
  
  UNetDriver::~UNetDriver(in_ECX);
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0xa4);
  }
  return;
}


// ==== 1032d440 FUN_1032d440

UNetDriver * FUN_1032d440(byte param_1)

{
  UNetDriver *in_ECX;
  
  if ((param_1 & 2) != 0) {
    _eh_vector_destructor_iterator_(in_ECX,0xa4,*(int *)(in_ECX + -4),UNetDriver::~UNetDriver);
    if ((param_1 & 1) != 0) {
      (**(code **)(**(int **)GMalloc_exref + 8))(in_ECX + -4);
    }
    return in_ECX + -4;
  }
  UNetDriver::~UNetDriver(in_ECX);
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0xa4);
  }
  return in_ECX;
}


// ==== 1032d4c0 FUN_1032d4c0

void FUN_1032d4c0(void)

{
  UObject *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_107f0f80;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)in_ECX = UActorChannel::vftable;
  local_4 = 4;
  UObject::ConditionalDestroy(in_ECX);
  local_4._0_1_ = 3;
  thunk_FUN_1032c940();
  local_4._0_1_ = 2;
  thunk_FUN_10325f90();
  local_4._0_1_ = 1;
  TArray<unsigned_char>::~TArray<unsigned_char>((TArray<unsigned_char> *)(in_ECX + 0xb0));
  local_4 = (uint)local_4._1_3_ << 8;
  TArray<unsigned_char>::~TArray<unsigned_char>((TArray<unsigned_char> *)(in_ECX + 0xa4));
  local_4 = 0xffffffff;
  UChannel::~UChannel((UChannel *)in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 1032d580 FUN_1032d580

void FUN_1032d580(UChannel *param_1)

{
  UChannel *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f0fe0;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UChannel::UChannel(in_ECX,param_1);
  local_4 = 0;
  *(undefined ***)in_ECX = UActorChannel::vftable;
  *(undefined4 *)(in_ECX + 0x70) = *(undefined4 *)(param_1 + 0x70);
  *(undefined4 *)(in_ECX + 0x74) = *(undefined4 *)(param_1 + 0x74);
  *(undefined4 *)(in_ECX + 0x78) = *(undefined4 *)(param_1 + 0x78);
  *(undefined8 *)(in_ECX + 0x7c) = *(undefined8 *)(param_1 + 0x7c);
  *(undefined8 *)(in_ECX + 0x84) = *(undefined8 *)(param_1 + 0x84);
  *(undefined8 *)(in_ECX + 0x8c) = *(undefined8 *)(param_1 + 0x8c);
  *(undefined4 *)(in_ECX + 0x94) = *(undefined4 *)(param_1 + 0x94);
  *(undefined4 *)(in_ECX + 0x98) = *(undefined4 *)(param_1 + 0x98);
  *(undefined4 *)(in_ECX + 0x9c) = *(undefined4 *)(param_1 + 0x9c);
  *(undefined4 *)(in_ECX + 0xa0) = *(undefined4 *)(param_1 + 0xa0);
  TArray<unsigned_char>::TArray<unsigned_char>
            ((TArray<unsigned_char> *)(in_ECX + 0xa4),(TArray<unsigned_char> *)(param_1 + 0xa4));
  local_4._0_1_ = 1;
  TArray<unsigned_char>::TArray<unsigned_char>
            ((TArray<unsigned_char> *)(in_ECX + 0xb0),(TArray<unsigned_char> *)(param_1 + 0xb0));
  local_4._0_1_ = 2;
  thunk_FUN_1032bc20(param_1 + 0xbc);
  local_4 = CONCAT31(local_4._1_3_,3);
  thunk_FUN_1032b590(param_1 + 200);
  ExceptionList = local_c;
  return;
}


// ==== 1032d6d0 FUN_1032d6d0

void FUN_1032d6d0(UChannel *param_1)

{
  UChannel *in_ECX;
  
  UChannel::operator=(in_ECX,param_1);
  *(undefined4 *)(in_ECX + 0x70) = *(undefined4 *)(param_1 + 0x70);
  *(undefined4 *)(in_ECX + 0x74) = *(undefined4 *)(param_1 + 0x74);
  *(undefined4 *)(in_ECX + 0x78) = *(undefined4 *)(param_1 + 0x78);
  *(undefined8 *)(in_ECX + 0x7c) = *(undefined8 *)(param_1 + 0x7c);
  *(undefined8 *)(in_ECX + 0x84) = *(undefined8 *)(param_1 + 0x84);
  *(undefined8 *)(in_ECX + 0x8c) = *(undefined8 *)(param_1 + 0x8c);
  *(undefined4 *)(in_ECX + 0x94) = *(undefined4 *)(param_1 + 0x94);
  *(undefined4 *)(in_ECX + 0x98) = *(undefined4 *)(param_1 + 0x98);
  *(undefined4 *)(in_ECX + 0x9c) = *(undefined4 *)(param_1 + 0x9c);
  *(undefined4 *)(in_ECX + 0xa0) = *(undefined4 *)(param_1 + 0xa0);
  TArray<unsigned_char>::operator=
            ((TArray<unsigned_char> *)(in_ECX + 0xa4),(TArray<unsigned_char> *)(param_1 + 0xa4));
  TArray<unsigned_char>::operator=
            ((TArray<unsigned_char> *)(in_ECX + 0xb0),(TArray<unsigned_char> *)(param_1 + 0xb0));
  thunk_FUN_1032bcd0(param_1 + 0xbc);
  thunk_FUN_1032ca00(param_1 + 200);
  return;
}


// ==== 1032d7c0 FUN_1032d7c0

void FUN_1032d7c0(byte param_1)

{
  UActorChannel *in_ECX;
  
  UActorChannel::~UActorChannel(in_ECX);
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0xd4);
  }
  return;
}


// ==== 1032d7f0 FUN_1032d7f0

UActorChannel * FUN_1032d7f0(byte param_1)

{
  UActorChannel *in_ECX;
  
  if ((param_1 & 2) != 0) {
    _eh_vector_destructor_iterator_(in_ECX,0xd4,*(int *)(in_ECX + -4),UActorChannel::~UActorChannel)
    ;
    if ((param_1 & 1) != 0) {
      (**(code **)(**(int **)GMalloc_exref + 8))(in_ECX + -4);
    }
    return in_ECX + -4;
  }
  UActorChannel::~UActorChannel(in_ECX);
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0xd4);
  }
  return in_ECX;
}


// ==== 1032d8a0 FUN_1032d8a0

void FUN_1032d8a0(int param_1)

{
  int in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f1008;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  thunk_FUN_1032b8d0(param_1);
  local_4 = 0;
  *(undefined4 *)(in_ECX + 0xc) = 0;
  *(undefined4 *)(in_ECX + 0x10) = *(undefined4 *)(param_1 + 0x10);
  thunk_FUN_1032b7e0();
  ExceptionList = local_c;
  return;
}


// ==== 1032d920 FUN_1032d920

void FUN_1032d920(void)

{
  int in_ECX;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107f1028;
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
  thunk_FUN_1032cb60();
  ExceptionList = pvStack_c;
  return;
}


// ==== 1032d9b0 FUN_1032d9b0

void FUN_1032d9b0(void)

{
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107f1049;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  thunk_FUN_1032cc20(0,*(undefined4 *)(in_ECX + 4));
  local_4 = 0xffffffff;
  FArray::~FArray(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 1032da20 FUN_1032da20

void FUN_1032da20(FArray *param_1)

{
  int iVar1;
  FArray *in_ECX;
  int iVar2;
  int iVar3;
  
  if (in_ECX == param_1) {
    return;
  }
  thunk_FUN_1032cd40(*(int *)(param_1 + 4));
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 4)) {
    iVar3 = 0;
    do {
      iVar1 = FArray::Add(in_ECX,1,0x20);
      if (iVar1 * 0x20 + *(int *)in_ECX != 0) {
        thunk_FUN_1032a7f0(*(int *)param_1 + iVar3);
      }
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + 0x20;
    } while (iVar2 < *(int *)(param_1 + 4));
    return;
  }
  return;
}


// ==== 1032daa0 FUN_1032daa0

void FUN_1032daa0(int *param_1)

{
  TArray<unsigned_char> *this;
  int iVar1;
  FArray *in_ECX;
  int local_28;
  int local_24;
  void *local_14;
  undefined1 *puStack_10;
  uint local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_107f1071;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  FArray::FArray(in_ECX,param_1[1],0x14);
  local_c = 0;
  *(undefined4 *)(in_ECX + 4) = 0;
  local_24 = 0;
  if (0 < param_1[1]) {
    local_28 = 0;
    do {
      iVar1 = FArray::Add(in_ECX,1,0x14);
      this = (TArray<unsigned_char> *)(*(int *)in_ECX + iVar1 * 0x14);
      if (this != (TArray<unsigned_char> *)0x0) {
        iVar1 = *param_1;
        TArray<unsigned_char>::TArray<unsigned_char>
                  (this,(TArray<unsigned_char> *)(iVar1 + local_28));
        *(undefined8 *)(this + 0xc) =
             *(undefined8 *)((TArray<unsigned_char> *)(iVar1 + local_28) + 0xc);
        local_c = local_c & 0xffffff00;
      }
      local_28 = local_28 + 0x14;
      local_24 = local_24 + 1;
    } while (local_24 < param_1[1]);
  }
  ExceptionList = local_14;
  return;
}


// ==== 1032db90 FUN_1032db90

void FUN_1032db90(byte param_1)

{
  TArray<unsigned_char> *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107f1098;
  local_c = ExceptionList;
  local_4 = 0xffffffff;
  ExceptionList = &local_c;
  TArray<unsigned_char>::~TArray<unsigned_char>(in_ECX);
  if ((param_1 & 1) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))();
  }
  ExceptionList = local_c;
  return;
}


// ==== 1032dc00 FUN_1032dc00

void FUN_1032dc00(void)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107f10b8;
  local_c = ExceptionList;
  local_4 = 0xffffffff;
  ExceptionList = &local_c;
  thunk_FUN_1032cf20();
  ExceptionList = local_c;
  return;
}


// ==== 1032dc50 FUN_1032dc50

void FUN_1032dc50(undefined4 param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f10d8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  thunk_FUN_1032c030(param_1);
  ExceptionList = local_c;
  return;
}


// ==== 1032dcb0 FUN_1032dcb0

void FUN_1032dcb0(void)

{
  FString *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_107f1128;
  local_c = ExceptionList;
  local_4 = 3;
  ExceptionList = &local_c;
  FString::~FString(in_ECX + 0x34);
  local_4._0_1_ = 2;
  thunk_FUN_1032ce30();
  local_4._0_1_ = 1;
  FString::~FString(in_ECX + 0x1c);
  local_4 = (uint)local_4._1_3_ << 8;
  FString::~FString(in_ECX + 0xc);
  local_4 = 0xffffffff;
  FString::~FString(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 1032dd50 FUN_1032dd50

void FUN_1032dd50(FString *param_1)

{
  FString *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f1188;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FString::FString(in_ECX,param_1);
  local_4 = 0;
  FString::FString(in_ECX + 0xc,param_1 + 0xc);
  local_4._0_1_ = 1;
  *(undefined4 *)(in_ECX + 0x18) = *(undefined4 *)(param_1 + 0x18);
  FString::FString(in_ECX + 0x1c,param_1 + 0x1c);
  local_4._0_1_ = 2;
  thunk_FUN_1032bd40(param_1 + 0x28);
  local_4 = CONCAT31(local_4._1_3_,3);
  FString::FString(in_ECX + 0x34,param_1 + 0x34);
  *(undefined4 *)(in_ECX + 0x40) = *(undefined4 *)(param_1 + 0x40);
  ExceptionList = local_c;
  return;
}


// ==== 1032de20 FUN_1032de20

void FUN_1032de20(FString *param_1)

{
  FString *in_ECX;
  
  FString::operator=(in_ECX,param_1);
  FString::operator=(in_ECX + 0xc,param_1 + 0xc);
  *(undefined4 *)(in_ECX + 0x18) = *(undefined4 *)(param_1 + 0x18);
  FString::operator=(in_ECX + 0x1c,param_1 + 0x1c);
  thunk_FUN_1032cea0(param_1 + 0x28);
  FString::operator=(in_ECX + 0x34,param_1 + 0x34);
  *(undefined4 *)(in_ECX + 0x40) = *(undefined4 *)(param_1 + 0x40);
  return;
}


// ==== 1032de90 FUN_1032de90

void FUN_1032de90(void)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107f11b8;
  local_c = ExceptionList;
  local_4 = 0xffffffff;
  ExceptionList = &local_c;
  thunk_FUN_10326630();
  ExceptionList = local_c;
  return;
}


// ==== 1032dee0 FUN_1032dee0

void FUN_1032dee0(void)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107f11d8;
  local_c = ExceptionList;
  local_4 = 0xffffffff;
  ExceptionList = &local_c;
  thunk_FUN_1032d070();
  ExceptionList = local_c;
  return;
}


// ==== 1032df30 FUN_1032df30

void FUN_1032df30(void)

{
  UObject *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_107f120c;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)in_ECX = UPlayer::vftable_for_UObject_;
  *(undefined ***)(in_ECX + 0x34) = UPlayer::vftable_for_FOutputDevice_;
  *(undefined ***)(in_ECX + 0x38) = UPlayer::vftable_for_FExec_;
  local_4 = 1;
  UObject::ConditionalDestroy(in_ECX);
  local_4 = local_4 & 0xffffff00;
  thunk_FUN_1032cf20();
  local_4 = 0xffffffff;
  UObject::~UObject(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 1032dfd0 FUN_1032dfd0

void FUN_1032dfd0(UObject *param_1)

{
  FOutputDevice *pFVar1;
  FExec *pFVar2;
  uint uVar3;
  UObject *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f123c;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UObject::UObject(in_ECX,param_1);
  local_4 = 0;
  if (param_1 == (UObject *)0x0) {
    pFVar1 = (FOutputDevice *)0x0;
  }
  else {
    pFVar1 = (FOutputDevice *)(param_1 + 0x34);
  }
  FOutputDevice::FOutputDevice((FOutputDevice *)(in_ECX + 0x34),pFVar1);
  if (param_1 == (UObject *)0x0) {
    pFVar2 = (FExec *)0x0;
  }
  else {
    pFVar2 = (FExec *)(param_1 + 0x38);
  }
  FExec::FExec((FExec *)(in_ECX + 0x38),pFVar2);
  *(undefined ***)in_ECX = UPlayer::vftable_for_UObject_;
  *(undefined ***)(in_ECX + 0x34) = UPlayer::vftable_for_FOutputDevice_;
  *(undefined ***)(in_ECX + 0x38) = UPlayer::vftable_for_FExec_;
  *(undefined4 *)(in_ECX + 0x3c) = *(undefined4 *)(param_1 + 0x3c);
  *(undefined4 *)(in_ECX + 0x40) = *(undefined4 *)(param_1 + 0x40);
  *(uint *)(in_ECX + 0x44) =
       *(uint *)(in_ECX + 0x44) ^ (*(uint *)(in_ECX + 0x44) ^ *(uint *)(param_1 + 0x44)) & 1;
  uVar3 = (*(uint *)(param_1 + 0x44) ^ *(uint *)(in_ECX + 0x44)) & 2 ^ *(uint *)(in_ECX + 0x44);
  *(uint *)(in_ECX + 0x44) = uVar3;
  *(uint *)(in_ECX + 0x44) = (*(uint *)(param_1 + 0x44) ^ uVar3) & 4 ^ uVar3;
  *(undefined4 *)(in_ECX + 0x48) = *(undefined4 *)(param_1 + 0x48);
  *(undefined4 *)(in_ECX + 0x4c) = *(undefined4 *)(param_1 + 0x4c);
  *(undefined4 *)(in_ECX + 0x50) = *(undefined4 *)(param_1 + 0x50);
  *(undefined4 *)(in_ECX + 0x54) = *(undefined4 *)(param_1 + 0x54);
  *(undefined4 *)(in_ECX + 0x58) = *(undefined4 *)(param_1 + 0x58);
  in_ECX[0x5c] = param_1[0x5c];
  *(undefined4 *)(in_ECX + 0x60) = *(undefined4 *)(param_1 + 0x60);
  thunk_FUN_1032c030(param_1 + 100);
  *(undefined4 *)(in_ECX + 0x70) = *(undefined4 *)(param_1 + 0x70);
  ExceptionList = local_c;
  return;
}


// ==== 1032e120 FUN_1032e120

void FUN_1032e120(UObject *param_1)

{
  FOutputDevice *pFVar1;
  FExec *pFVar2;
  uint uVar3;
  UObject *in_ECX;
  
  UObject::operator=(in_ECX,param_1);
  if (param_1 == (UObject *)0x0) {
    pFVar1 = (FOutputDevice *)0x0;
  }
  else {
    pFVar1 = (FOutputDevice *)(param_1 + 0x34);
  }
  FOutputDevice::operator=((FOutputDevice *)(in_ECX + 0x34),pFVar1);
  if (param_1 == (UObject *)0x0) {
    pFVar2 = (FExec *)0x0;
  }
  else {
    pFVar2 = (FExec *)(param_1 + 0x38);
  }
  FExec::operator=((FExec *)(in_ECX + 0x38),pFVar2);
  *(undefined4 *)(in_ECX + 0x3c) = *(undefined4 *)(param_1 + 0x3c);
  *(undefined4 *)(in_ECX + 0x40) = *(undefined4 *)(param_1 + 0x40);
  *(uint *)(in_ECX + 0x44) =
       *(uint *)(in_ECX + 0x44) ^ (*(uint *)(in_ECX + 0x44) ^ *(uint *)(param_1 + 0x44)) & 1;
  uVar3 = (*(uint *)(param_1 + 0x44) ^ *(uint *)(in_ECX + 0x44)) & 2 ^ *(uint *)(in_ECX + 0x44);
  *(uint *)(in_ECX + 0x44) = uVar3;
  *(uint *)(in_ECX + 0x44) = (*(uint *)(param_1 + 0x44) ^ uVar3) & 4 ^ uVar3;
  *(undefined4 *)(in_ECX + 0x48) = *(undefined4 *)(param_1 + 0x48);
  *(undefined4 *)(in_ECX + 0x4c) = *(undefined4 *)(param_1 + 0x4c);
  *(undefined4 *)(in_ECX + 0x50) = *(undefined4 *)(param_1 + 0x50);
  *(undefined4 *)(in_ECX + 0x54) = *(undefined4 *)(param_1 + 0x54);
  *(undefined4 *)(in_ECX + 0x58) = *(undefined4 *)(param_1 + 0x58);
  in_ECX[0x5c] = param_1[0x5c];
  *(undefined4 *)(in_ECX + 0x60) = *(undefined4 *)(param_1 + 0x60);
  thunk_FUN_1032cfe0(param_1 + 100);
  *(undefined4 *)(in_ECX + 0x70) = *(undefined4 *)(param_1 + 0x70);
  return;
}


// ==== 1032e200 FUN_1032e200

UPlayer * FUN_1032e200(byte param_1)

{
  UPlayer *in_ECX;
  
  if ((param_1 & 2) != 0) {
    _eh_vector_destructor_iterator_(in_ECX,0x74,*(int *)(in_ECX + -4),UPlayer::~UPlayer);
    if ((param_1 & 1) != 0) {
      (**(code **)(**(int **)GMalloc_exref + 8))(in_ECX + -4);
    }
    return in_ECX + -4;
  }
  UPlayer::~UPlayer(in_ECX);
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x74);
  }
  return in_ECX;
}


// ==== 1032e280 FUN_1032e280

void FUN_1032e280(void)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107f1258;
  local_c = ExceptionList;
  local_4 = 0xffffffff;
  ExceptionList = &local_c;
  thunk_FUN_1032d920();
  ExceptionList = local_c;
  return;
}


// ==== 1032e2d0 FUN_1032e2d0

void FUN_1032e2d0(undefined4 param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f1278;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  thunk_FUN_1032d8a0(param_1);
  ExceptionList = local_c;
  return;
}


// ==== 1032e330 FUN_1032e330

void FUN_1032e330(void)

{
  UObject *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_107f12c4;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)in_ECX = UDemoRecDriver::vftable_for_UObject_;
  *(undefined ***)(in_ECX + 0x34) = UDemoRecDriver::vftable_for_FExec_;
  local_4 = 3;
  UObject::ConditionalDestroy(in_ECX);
  local_4._0_1_ = 2;
  FURL::~FURL((FURL *)(in_ECX + 0xd8));
  local_4._0_1_ = 1;
  FStringNoInit::~FStringNoInit((FStringNoInit *)(in_ECX + 0xb0));
  local_4 = (uint)local_4._1_3_ << 8;
  FString::~FString((FString *)(in_ECX + 0xa4));
  local_4 = 0xffffffff;
  UNetDriver::~UNetDriver((UNetDriver *)in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 1032e3e0 FUN_1032e3e0

void FUN_1032e3e0(UNetDriver *param_1)

{
  UNetDriver *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f1314;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UNetDriver::UNetDriver(in_ECX,param_1);
  local_4 = 0;
  *(undefined ***)in_ECX = UDemoRecDriver::vftable_for_UObject_;
  *(undefined ***)(in_ECX + 0x34) = UDemoRecDriver::vftable_for_FExec_;
  FString::FString((FString *)(in_ECX + 0xa4),(FString *)(param_1 + 0xa4));
  local_4._0_1_ = 1;
  FStringNoInit::FStringNoInit((FStringNoInit *)(in_ECX + 0xb0),(FStringNoInit *)(param_1 + 0xb0));
  local_4 = CONCAT31(local_4._1_3_,2);
  *(undefined4 *)(in_ECX + 0xbc) = *(undefined4 *)(param_1 + 0xbc);
  *(undefined4 *)(in_ECX + 0xc0) = *(undefined4 *)(param_1 + 0xc0);
  *(undefined4 *)(in_ECX + 0xc4) = *(undefined4 *)(param_1 + 0xc4);
  *(undefined4 *)(in_ECX + 200) = *(undefined4 *)(param_1 + 200);
  *(undefined4 *)(in_ECX + 0xcc) = *(undefined4 *)(param_1 + 0xcc);
  *(undefined4 *)(in_ECX + 0xd0) = *(undefined4 *)(param_1 + 0xd0);
  *(undefined4 *)(in_ECX + 0xd4) = *(undefined4 *)(param_1 + 0xd4);
  FURL::FURL((FURL *)(in_ECX + 0xd8),(FURL *)(param_1 + 0xd8));
  ExceptionList = local_c;
  return;
}


// ==== 1032e510 FUN_1032e510

void FUN_1032e510(UNetDriver *param_1)

{
  UNetDriver *in_ECX;
  
  UNetDriver::operator=(in_ECX,param_1);
  FString::operator=((FString *)(in_ECX + 0xa4),(FString *)(param_1 + 0xa4));
  FStringNoInit::operator=((FStringNoInit *)(in_ECX + 0xb0),(FStringNoInit *)(param_1 + 0xb0));
  *(undefined4 *)(in_ECX + 0xbc) = *(undefined4 *)(param_1 + 0xbc);
  *(undefined4 *)(in_ECX + 0xc0) = *(undefined4 *)(param_1 + 0xc0);
  *(undefined4 *)(in_ECX + 0xc4) = *(undefined4 *)(param_1 + 0xc4);
  *(undefined4 *)(in_ECX + 200) = *(undefined4 *)(param_1 + 200);
  *(undefined4 *)(in_ECX + 0xcc) = *(undefined4 *)(param_1 + 0xcc);
  *(undefined4 *)(in_ECX + 0xd0) = *(undefined4 *)(param_1 + 0xd0);
  *(undefined4 *)(in_ECX + 0xd4) = *(undefined4 *)(param_1 + 0xd4);
  FURL::operator=((FURL *)(in_ECX + 0xd8),(FURL *)(param_1 + 0xd8));
  return;
}


// ==== 1032e5e0 FUN_1032e5e0

void FUN_1032e5e0(byte param_1)

{
  UDemoRecDriver *in_ECX;
  
  UDemoRecDriver::~UDemoRecDriver(in_ECX);
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x11c);
  }
  return;
}


// ==== 1032e610 FUN_1032e610

UDemoRecDriver * FUN_1032e610(byte param_1)

{
  UDemoRecDriver *in_ECX;
  
  if ((param_1 & 2) != 0) {
    _eh_vector_destructor_iterator_
              (in_ECX,0x11c,*(int *)(in_ECX + -4),UDemoRecDriver::~UDemoRecDriver);
    if ((param_1 & 1) != 0) {
      (**(code **)(**(int **)GMalloc_exref + 8))(in_ECX + -4);
    }
    return in_ECX + -4;
  }
  UDemoRecDriver::~UDemoRecDriver(in_ECX);
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x11c);
  }
  return in_ECX;
}


// ==== 1032e690 FUN_1032e690

void FUN_1032e690(int param_1,int param_2)

{
  FArray *in_ECX;
  int iVar1;
  int iVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f1338;
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
    iVar1 = param_1 * 0x14;
    iVar2 = iVar2 - param_1;
    do {
      local_4 = 0xffffffff;
      TArray<unsigned_char>::~TArray<unsigned_char>
                ((TArray<unsigned_char> *)(*(int *)in_ECX + iVar1));
      iVar1 = iVar1 + 0x14;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  FArray::Remove(in_ECX,param_1,param_2,0x14);
  ExceptionList = local_c;
  return;
}


// ==== 1032e790 FUN_1032e790

void FUN_1032e790(int param_1)

{
  FArray *in_ECX;
  int iVar1;
  int iVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f1358;
  local_c = ExceptionList;
  iVar2 = 0;
  ExceptionList = &local_c;
  if (0 < *(int *)(in_ECX + 4)) {
    iVar1 = 0;
    ExceptionList = &local_c;
    do {
      local_4 = 0xffffffff;
      TArray<unsigned_char>::~TArray<unsigned_char>
                ((TArray<unsigned_char> *)(*(int *)in_ECX + iVar1));
      iVar2 = iVar2 + 1;
      iVar1 = iVar1 + 0x14;
    } while (iVar2 < *(int *)(in_ECX + 4));
  }
  FArray::Empty(in_ECX,0x14,param_1);
  ExceptionList = local_c;
  return;
}


// ==== 1032e810 FUN_1032e810

void FUN_1032e810(void)

{
  UObject *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107f1378;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)in_ECX = AGameStats::vftable;
  local_4 = 0;
  UObject::ConditionalDestroy(in_ECX);
  local_4 = 0xffffffff;
  AInfo::~AInfo((AInfo *)in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 1032e880 FUN_1032e880

void FUN_1032e880(void)

{
  AActor *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f13a0;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  AActor::AActor(in_ECX);
  *(undefined ***)in_ECX = AInfo::vftable;
  *(undefined ***)in_ECX = AGameStats::vftable;
  ExceptionList = local_c;
  return;
}


// ==== 1032e8f0 FUN_1032e8f0

AGameStats * FUN_1032e8f0(byte param_1)

{
  AGameStats *in_ECX;
  
  if ((param_1 & 2) != 0) {
    _eh_vector_destructor_iterator_(in_ECX,0x3c8,*(int *)(in_ECX + -4),AGameStats::~AGameStats);
    if ((param_1 & 1) != 0) {
      (**(code **)(**(int **)GMalloc_exref + 8))(in_ECX + -4);
    }
    return in_ECX + -4;
  }
  AGameStats::~AGameStats(in_ECX);
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x3c8);
  }
  return in_ECX;
}


// ==== 1032e970 FUN_1032e970

void FUN_1032e970(void)

{
  UObject *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_107f1400;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)in_ECX = ULevelBase::vftable_for_UObject_;
  *(undefined ***)(in_ECX + 0x34) = ULevelBase::vftable_for_FNetworkNotify_;
  local_4 = 5;
  UObject::ConditionalDestroy(in_ECX);
  local_4._0_1_ = 4;
  FURL::~FURL((FURL *)(in_ECX + 0x78));
  local_4._0_1_ = 3;
  thunk_FUN_10326630();
  local_4._0_1_ = 2;
  thunk_FUN_10326630();
  local_4._0_1_ = 1;
  thunk_FUN_1032d070();
  local_4 = (uint)local_4._1_3_ << 8;
  thunk_FUN_10326630();
  local_4 = 0xffffffff;
  UObject::~UObject(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 1032ea50 FUN_1032ea50

ULevelBase * FUN_1032ea50(byte param_1)

{
  ULevelBase *in_ECX;
  
  if ((param_1 & 2) != 0) {
    _eh_vector_destructor_iterator_(in_ECX,0xc0,*(int *)(in_ECX + -4),ULevelBase::~ULevelBase);
    if ((param_1 & 1) != 0) {
      (**(code **)(**(int **)GMalloc_exref + 8))(in_ECX + -4);
    }
    return in_ECX + -4;
  }
  ULevelBase::~ULevelBase(in_ECX);
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0xc0);
  }
  return in_ECX;
}


// ==== 1032ead0 FUN_1032ead0

void FUN_1032ead0(void)

{
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107f1429;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  thunk_FUN_1032e690(0,*(undefined4 *)(in_ECX + 4));
  local_4 = 0xffffffff;
  FArray::~FArray(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 1032eb40 FUN_1032eb40

FArray * FUN_1032eb40(FArray *param_1)

{
  TArray<unsigned_char> *this;
  int iVar1;
  FArray *in_ECX;
  int local_28;
  int local_24;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_107f1448;
  local_14 = ExceptionList;
  if (in_ECX != param_1) {
    ExceptionList = &local_14;
    thunk_FUN_1032e790(*(int *)(param_1 + 4));
    local_24 = 0;
    if (0 < *(int *)(param_1 + 4)) {
      local_28 = 0;
      do {
        iVar1 = FArray::Add(in_ECX,1,0x14);
        this = (TArray<unsigned_char> *)(*(int *)in_ECX + iVar1 * 0x14);
        if (this != (TArray<unsigned_char> *)0x0) {
          iVar1 = *(int *)param_1;
          TArray<unsigned_char>::TArray<unsigned_char>
                    (this,(TArray<unsigned_char> *)(iVar1 + local_28));
          *(undefined8 *)(this + 0xc) =
               *(undefined8 *)((TArray<unsigned_char> *)(iVar1 + local_28) + 0xc);
          local_c = 0xffffffff;
        }
        local_28 = local_28 + 0x14;
        local_24 = local_24 + 1;
      } while (local_24 < *(int *)(param_1 + 4));
    }
  }
  ExceptionList = local_14;
  return in_ECX;
}


// ==== 1032ec30 FUN_1032ec30

void FUN_1032ec30(AGameStats *param_1)

{
  if (param_1 != (AGameStats *)0x0) {
    AGameStats::AGameStats(param_1);
    return;
  }
  return;
}


// ==== 1032ec50 FUN_1032ec50

void FUN_1032ec50(void)

{
  UObject *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_107f1530;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)in_ECX = UNetConnection::vftable_for_UObject_;
  *(undefined ***)(in_ECX + 0x34) = UNetConnection::vftable_for_FOutputDevice_;
  *(undefined ***)(in_ECX + 0x38) = UNetConnection::vftable_for_FExec_;
  local_4 = 0xd;
  UObject::ConditionalDestroy(in_ECX);
  local_4._0_1_ = 0xc;
  thunk_FUN_1032ead0();
  local_4._0_1_ = 0xb;
  thunk_FUN_1032d9b0();
  local_4._0_1_ = 10;
  thunk_FUN_1032d920();
  local_4._0_1_ = 9;
  thunk_FUN_10326630();
  local_4._0_1_ = 8;
  thunk_FUN_1032c810();
  local_4._0_1_ = 7;
  thunk_FUN_10325f90();
  local_4._0_1_ = 6;
  thunk_FUN_10325f90();
  local_4._0_1_ = 5;
  FBitWriter::~FBitWriter((FBitWriter *)(in_ECX + 0x254));
  local_4._0_1_ = 4;
  FBitWriter::~FBitWriter((FBitWriter *)(in_ECX + 0x148));
  local_4._0_1_ = 3;
  FString::~FString((FString *)(in_ECX + 0xf8));
  local_4._0_1_ = 2;
  FString::~FString((FString *)(in_ECX + 0xec));
  local_4._0_1_ = 1;
  FStringNoInit::~FStringNoInit((FStringNoInit *)(in_ECX + 0xe0));
  local_4 = (uint)local_4._1_3_ << 8;
  FURL::~FURL((FURL *)(in_ECX + 0x7c));
  local_4 = 0xffffffff;
  UPlayer::~UPlayer((UPlayer *)in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 1032edf0 FUN_1032edf0

void FUN_1032edf0(UPlayer *param_1)

{
  UPlayer *in_ECX;
  int iVar1;
  UPlayer *pUVar2;
  UPlayer *pUVar3;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_107f1637;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  UPlayer::UPlayer(in_ECX,param_1);
  local_c = 0;
  *(undefined ***)in_ECX = UNetConnection::vftable_for_UObject_;
  *(undefined ***)(in_ECX + 0x34) = UNetConnection::vftable_for_FOutputDevice_;
  *(undefined ***)(in_ECX + 0x38) = UNetConnection::vftable_for_FExec_;
  *(undefined4 *)(in_ECX + 0x74) = *(undefined4 *)(param_1 + 0x74);
  *(undefined4 *)(in_ECX + 0x78) = *(undefined4 *)(param_1 + 0x78);
  FURL::FURL((FURL *)(in_ECX + 0x7c),(FURL *)(param_1 + 0x7c));
  local_c._0_1_ = 1;
  *(undefined4 *)(in_ECX + 0xc0) = *(undefined4 *)(param_1 + 0xc0);
  *(undefined4 *)(in_ECX + 0xc4) = *(undefined4 *)(param_1 + 0xc4);
  *(undefined4 *)(in_ECX + 200) = *(undefined4 *)(param_1 + 200);
  *(undefined4 *)(in_ECX + 0xcc) = *(undefined4 *)(param_1 + 0xcc);
  *(undefined4 *)(in_ECX + 0xd0) = *(undefined4 *)(param_1 + 0xd0);
  *(undefined4 *)(in_ECX + 0xd4) = *(undefined4 *)(param_1 + 0xd4);
  *(undefined4 *)(in_ECX + 0xd8) = *(undefined4 *)(param_1 + 0xd8);
  *(undefined4 *)(in_ECX + 0xdc) = *(undefined4 *)(param_1 + 0xdc);
  FStringNoInit::FStringNoInit((FStringNoInit *)(in_ECX + 0xe0),(FStringNoInit *)(param_1 + 0xe0));
  local_c._0_1_ = 2;
  FString::FString((FString *)(in_ECX + 0xec),(FString *)(param_1 + 0xec));
  local_c._0_1_ = 3;
  FString::FString((FString *)(in_ECX + 0xf8),(FString *)(param_1 + 0xf8));
  local_c._0_1_ = 4;
  *(undefined8 *)(in_ECX + 0x104) = *(undefined8 *)(param_1 + 0x104);
  *(undefined8 *)(in_ECX + 0x10c) = *(undefined8 *)(param_1 + 0x10c);
  *(undefined8 *)(in_ECX + 0x114) = *(undefined8 *)(param_1 + 0x114);
  *(undefined8 *)(in_ECX + 0x11c) = *(undefined8 *)(param_1 + 0x11c);
  *(undefined4 *)(in_ECX + 0x124) = *(undefined4 *)(param_1 + 0x124);
  *(undefined4 *)(in_ECX + 0x128) = *(undefined4 *)(param_1 + 0x128);
  *(undefined4 *)(in_ECX + 300) = *(undefined4 *)(param_1 + 300);
  *(undefined4 *)(in_ECX + 0x130) = *(undefined4 *)(param_1 + 0x130);
  *(undefined4 *)(in_ECX + 0x134) = *(undefined4 *)(param_1 + 0x134);
  *(undefined4 *)(in_ECX + 0x138) = *(undefined4 *)(param_1 + 0x138);
  *(undefined4 *)(in_ECX + 0x13c) = *(undefined4 *)(param_1 + 0x13c);
  *(undefined4 *)(in_ECX + 0x140) = *(undefined4 *)(param_1 + 0x140);
  *(undefined4 *)(in_ECX + 0x144) = *(undefined4 *)(param_1 + 0x144);
  FOutBunch::FOutBunch((FOutBunch *)(in_ECX + 0x148),(FOutBunch *)(param_1 + 0x148));
  local_c._0_1_ = 5;
  *(undefined8 *)(in_ECX + 0x1bc) = *(undefined8 *)(param_1 + 0x1bc);
  *(undefined4 *)(in_ECX + 0x1c4) = *(undefined4 *)(param_1 + 0x1c4);
  *(undefined4 *)(in_ECX + 0x1c8) = *(undefined4 *)(param_1 + 0x1c8);
  *(undefined4 *)(in_ECX + 0x1cc) = *(undefined4 *)(param_1 + 0x1cc);
  *(undefined4 *)(in_ECX + 0x1d0) = *(undefined4 *)(param_1 + 0x1d0);
  *(undefined4 *)(in_ECX + 0x1d4) = *(undefined4 *)(param_1 + 0x1d4);
  *(undefined4 *)(in_ECX + 0x1d8) = *(undefined4 *)(param_1 + 0x1d8);
  *(undefined4 *)(in_ECX + 0x1dc) = *(undefined4 *)(param_1 + 0x1dc);
  *(undefined4 *)(in_ECX + 0x1e0) = *(undefined4 *)(param_1 + 0x1e0);
  *(undefined4 *)(in_ECX + 0x1e4) = *(undefined4 *)(param_1 + 0x1e4);
  *(undefined4 *)(in_ECX + 0x1e8) = *(undefined4 *)(param_1 + 0x1e8);
  *(undefined4 *)(in_ECX + 0x1ec) = *(undefined4 *)(param_1 + 0x1ec);
  *(undefined4 *)(in_ECX + 0x1f0) = *(undefined4 *)(param_1 + 0x1f0);
  *(undefined4 *)(in_ECX + 500) = *(undefined4 *)(param_1 + 500);
  *(undefined4 *)(in_ECX + 0x1f8) = *(undefined4 *)(param_1 + 0x1f8);
  *(undefined4 *)(in_ECX + 0x1fc) = *(undefined4 *)(param_1 + 0x1fc);
  *(undefined4 *)(in_ECX + 0x200) = *(undefined4 *)(param_1 + 0x200);
  *(undefined4 *)(in_ECX + 0x204) = *(undefined4 *)(param_1 + 0x204);
  *(undefined4 *)(in_ECX + 0x208) = *(undefined4 *)(param_1 + 0x208);
  *(undefined4 *)(in_ECX + 0x20c) = *(undefined4 *)(param_1 + 0x20c);
  *(undefined4 *)(in_ECX + 0x210) = *(undefined4 *)(param_1 + 0x210);
  *(undefined4 *)(in_ECX + 0x214) = *(undefined4 *)(param_1 + 0x214);
  *(undefined4 *)(in_ECX + 0x218) = *(undefined4 *)(param_1 + 0x218);
  *(undefined4 *)(in_ECX + 0x21c) = *(undefined4 *)(param_1 + 0x21c);
  *(undefined4 *)(in_ECX + 0x220) = *(undefined4 *)(param_1 + 0x220);
  *(undefined4 *)(in_ECX + 0x224) = *(undefined4 *)(param_1 + 0x224);
  *(undefined4 *)(in_ECX + 0x228) = *(undefined4 *)(param_1 + 0x228);
  *(undefined4 *)(in_ECX + 0x22c) = *(undefined4 *)(param_1 + 0x22c);
  *(undefined8 *)(in_ECX + 0x230) = *(undefined8 *)(param_1 + 0x230);
  *(undefined8 *)(in_ECX + 0x238) = *(undefined8 *)(param_1 + 0x238);
  *(undefined8 *)(in_ECX + 0x240) = *(undefined8 *)(param_1 + 0x240);
  *(undefined8 *)(in_ECX + 0x248) = *(undefined8 *)(param_1 + 0x248);
  *(undefined4 *)(in_ECX + 0x250) = *(undefined4 *)(param_1 + 0x250);
  FBitWriter::FBitWriter((FBitWriter *)(in_ECX + 0x254),(FBitWriter *)(param_1 + 0x254));
  local_c._0_1_ = 6;
  pUVar2 = param_1 + 0x2a0;
  pUVar3 = in_ECX + 0x2a0;
  for (iVar1 = 0x200; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)pUVar3 = *(undefined4 *)pUVar2;
    pUVar2 = pUVar2 + 4;
    pUVar3 = pUVar3 + 4;
  }
  pUVar2 = param_1 + 0xaa0;
  pUVar3 = in_ECX + 0xaa0;
  for (iVar1 = 0x100; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)pUVar3 = *(undefined4 *)pUVar2;
    pUVar2 = pUVar2 + 4;
    pUVar3 = pUVar3 + 4;
  }
  *(undefined4 *)(in_ECX + 0xea0) = *(undefined4 *)(param_1 + 0xea0);
  *(undefined4 *)(in_ECX + 0xea4) = *(undefined4 *)(param_1 + 0xea4);
  *(undefined4 *)(in_ECX + 0xea8) = *(undefined4 *)(param_1 + 0xea8);
  pUVar2 = param_1 + 0xeac;
  pUVar3 = in_ECX + 0xeac;
  for (iVar1 = 0x3ff; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)pUVar3 = *(undefined4 *)pUVar2;
    pUVar2 = pUVar2 + 4;
    pUVar3 = pUVar3 + 4;
  }
  pUVar2 = param_1 + 0x1ea8;
  pUVar3 = in_ECX + 0x1ea8;
  for (iVar1 = 0x3ff; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)pUVar3 = *(undefined4 *)pUVar2;
    pUVar2 = pUVar2 + 4;
    pUVar3 = pUVar3 + 4;
  }
  pUVar2 = param_1 + 0x2ea4;
  pUVar3 = in_ECX + 0x2ea4;
  for (iVar1 = 0x3ff; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)pUVar3 = *(undefined4 *)pUVar2;
    pUVar2 = pUVar2 + 4;
    pUVar3 = pUVar3 + 4;
  }
  thunk_FUN_1032bc20(param_1 + 0x3ea0);
  local_c._0_1_ = 7;
  thunk_FUN_1032bc20(param_1 + 0x3eac);
  local_c._0_1_ = 8;
  thunk_FUN_1032b420(param_1 + 0x3eb8);
  local_c._0_1_ = 9;
  thunk_FUN_1032bef0(param_1 + 0x3ec4);
  local_c._0_1_ = 10;
  thunk_FUN_1032d8a0(param_1 + 0x3ed0);
  local_c._0_1_ = 0xc;
  *(undefined4 *)(in_ECX + 0x3ee4) = *(undefined4 *)(param_1 + 0x3ee4);
  thunk_FUN_1032b4d0(param_1 + 0x3ee8);
  local_c = CONCAT31(local_c._1_3_,0xd);
  *(undefined4 *)(in_ECX + 0x3ef4) = *(undefined4 *)(param_1 + 0x3ef4);
  *(undefined4 *)(in_ECX + 0x3ef8) = *(undefined4 *)(param_1 + 0x3ef8);
  *(undefined4 *)(in_ECX + 0x3efc) = *(undefined4 *)(param_1 + 0x3efc);
  *(undefined4 *)(in_ECX + 0x3f00) = *(undefined4 *)(param_1 + 0x3f00);
  *(undefined4 *)(in_ECX + 0x3f04) = *(undefined4 *)(param_1 + 0x3f04);
  *(undefined4 *)(in_ECX + 0x3f08) = *(undefined4 *)(param_1 + 0x3f08);
  *(undefined4 *)(in_ECX + 0x3f0c) = *(undefined4 *)(param_1 + 0x3f0c);
  thunk_FUN_1032daa0(param_1 + 0x3f10);
  ExceptionList = local_14;
  return;
}


// ==== 1032f450 FUN_1032f450

void FUN_1032f450(UPlayer *param_1)

{
  UPlayer *pUVar1;
  UPlayer *in_ECX;
  UPlayer *pUVar2;
  int iVar3;
  int iVar4;
  
  UPlayer::operator=(in_ECX,param_1);
  *(undefined4 *)(in_ECX + 0x74) = *(undefined4 *)(param_1 + 0x74);
  *(undefined4 *)(in_ECX + 0x78) = *(undefined4 *)(param_1 + 0x78);
  FURL::operator=((FURL *)(in_ECX + 0x7c),(FURL *)(param_1 + 0x7c));
  *(undefined4 *)(in_ECX + 0xc0) = *(undefined4 *)(param_1 + 0xc0);
  *(undefined4 *)(in_ECX + 0xc4) = *(undefined4 *)(param_1 + 0xc4);
  *(undefined4 *)(in_ECX + 200) = *(undefined4 *)(param_1 + 200);
  *(undefined4 *)(in_ECX + 0xcc) = *(undefined4 *)(param_1 + 0xcc);
  *(undefined4 *)(in_ECX + 0xd0) = *(undefined4 *)(param_1 + 0xd0);
  *(undefined4 *)(in_ECX + 0xd4) = *(undefined4 *)(param_1 + 0xd4);
  *(undefined4 *)(in_ECX + 0xd8) = *(undefined4 *)(param_1 + 0xd8);
  *(undefined4 *)(in_ECX + 0xdc) = *(undefined4 *)(param_1 + 0xdc);
  FStringNoInit::operator=((FStringNoInit *)(in_ECX + 0xe0),(FStringNoInit *)(param_1 + 0xe0));
  FString::operator=((FString *)(in_ECX + 0xec),(FString *)(param_1 + 0xec));
  FString::operator=((FString *)(in_ECX + 0xf8),(FString *)(param_1 + 0xf8));
  *(undefined8 *)(in_ECX + 0x104) = *(undefined8 *)(param_1 + 0x104);
  *(undefined8 *)(in_ECX + 0x10c) = *(undefined8 *)(param_1 + 0x10c);
  *(undefined8 *)(in_ECX + 0x114) = *(undefined8 *)(param_1 + 0x114);
  *(undefined8 *)(in_ECX + 0x11c) = *(undefined8 *)(param_1 + 0x11c);
  *(undefined4 *)(in_ECX + 0x124) = *(undefined4 *)(param_1 + 0x124);
  *(undefined4 *)(in_ECX + 0x128) = *(undefined4 *)(param_1 + 0x128);
  *(undefined4 *)(in_ECX + 300) = *(undefined4 *)(param_1 + 300);
  *(undefined4 *)(in_ECX + 0x130) = *(undefined4 *)(param_1 + 0x130);
  *(undefined4 *)(in_ECX + 0x134) = *(undefined4 *)(param_1 + 0x134);
  *(undefined4 *)(in_ECX + 0x138) = *(undefined4 *)(param_1 + 0x138);
  *(undefined4 *)(in_ECX + 0x13c) = *(undefined4 *)(param_1 + 0x13c);
  *(undefined4 *)(in_ECX + 0x140) = *(undefined4 *)(param_1 + 0x140);
  *(undefined4 *)(in_ECX + 0x144) = *(undefined4 *)(param_1 + 0x144);
  FOutBunch::operator=((FOutBunch *)(in_ECX + 0x148),(FOutBunch *)(param_1 + 0x148));
  *(undefined8 *)(in_ECX + 0x1bc) = *(undefined8 *)(param_1 + 0x1bc);
  *(undefined4 *)(in_ECX + 0x1c4) = *(undefined4 *)(param_1 + 0x1c4);
  *(undefined4 *)(in_ECX + 0x1c8) = *(undefined4 *)(param_1 + 0x1c8);
  *(undefined4 *)(in_ECX + 0x1cc) = *(undefined4 *)(param_1 + 0x1cc);
  *(undefined4 *)(in_ECX + 0x1d0) = *(undefined4 *)(param_1 + 0x1d0);
  *(undefined4 *)(in_ECX + 0x1d4) = *(undefined4 *)(param_1 + 0x1d4);
  *(undefined4 *)(in_ECX + 0x1d8) = *(undefined4 *)(param_1 + 0x1d8);
  *(undefined4 *)(in_ECX + 0x1dc) = *(undefined4 *)(param_1 + 0x1dc);
  *(undefined4 *)(in_ECX + 0x1e0) = *(undefined4 *)(param_1 + 0x1e0);
  *(undefined4 *)(in_ECX + 0x1e4) = *(undefined4 *)(param_1 + 0x1e4);
  *(undefined4 *)(in_ECX + 0x1e8) = *(undefined4 *)(param_1 + 0x1e8);
  *(undefined4 *)(in_ECX + 0x1ec) = *(undefined4 *)(param_1 + 0x1ec);
  *(undefined4 *)(in_ECX + 0x1f0) = *(undefined4 *)(param_1 + 0x1f0);
  *(undefined4 *)(in_ECX + 500) = *(undefined4 *)(param_1 + 500);
  *(undefined4 *)(in_ECX + 0x1f8) = *(undefined4 *)(param_1 + 0x1f8);
  *(undefined4 *)(in_ECX + 0x1fc) = *(undefined4 *)(param_1 + 0x1fc);
  *(undefined4 *)(in_ECX + 0x200) = *(undefined4 *)(param_1 + 0x200);
  *(undefined4 *)(in_ECX + 0x204) = *(undefined4 *)(param_1 + 0x204);
  *(undefined4 *)(in_ECX + 0x208) = *(undefined4 *)(param_1 + 0x208);
  *(undefined4 *)(in_ECX + 0x20c) = *(undefined4 *)(param_1 + 0x20c);
  *(undefined4 *)(in_ECX + 0x210) = *(undefined4 *)(param_1 + 0x210);
  *(undefined4 *)(in_ECX + 0x214) = *(undefined4 *)(param_1 + 0x214);
  *(undefined4 *)(in_ECX + 0x218) = *(undefined4 *)(param_1 + 0x218);
  *(undefined4 *)(in_ECX + 0x21c) = *(undefined4 *)(param_1 + 0x21c);
  *(undefined4 *)(in_ECX + 0x220) = *(undefined4 *)(param_1 + 0x220);
  *(undefined4 *)(in_ECX + 0x224) = *(undefined4 *)(param_1 + 0x224);
  *(undefined4 *)(in_ECX + 0x228) = *(undefined4 *)(param_1 + 0x228);
  *(undefined4 *)(in_ECX + 0x22c) = *(undefined4 *)(param_1 + 0x22c);
  *(undefined8 *)(in_ECX + 0x230) = *(undefined8 *)(param_1 + 0x230);
  *(undefined8 *)(in_ECX + 0x238) = *(undefined8 *)(param_1 + 0x238);
  *(undefined8 *)(in_ECX + 0x240) = *(undefined8 *)(param_1 + 0x240);
  *(undefined8 *)(in_ECX + 0x248) = *(undefined8 *)(param_1 + 0x248);
  *(undefined4 *)(in_ECX + 0x250) = *(undefined4 *)(param_1 + 0x250);
  FBitWriter::operator=((FBitWriter *)(in_ECX + 0x254),(FBitWriter *)(param_1 + 0x254));
  iVar3 = (int)param_1 - (int)in_ECX;
  iVar4 = 0x20;
  pUVar1 = in_ECX + 0x2a0;
  pUVar2 = param_1 + 0x2b0;
  do {
    *(undefined8 *)pUVar1 = *(undefined8 *)(pUVar1 + iVar3);
    iVar4 = iVar4 + -1;
    *(undefined8 *)(pUVar1 + 8) = *(undefined8 *)(pUVar2 + -8);
    *(undefined8 *)(pUVar1 + 0x10) = *(undefined8 *)pUVar2;
    *(undefined8 *)(pUVar1 + 0x18) = *(undefined8 *)(pUVar2 + 8);
    *(undefined8 *)(pUVar1 + 0x20) = *(undefined8 *)(pUVar2 + 0x10);
    *(undefined8 *)(pUVar1 + 0x28) = *(undefined8 *)(pUVar2 + 0x18);
    *(undefined8 *)(pUVar1 + 0x30) = *(undefined8 *)(pUVar2 + 0x20);
    *(undefined8 *)(pUVar1 + 0x38) = *(undefined8 *)(pUVar2 + 0x28);
    pUVar1 = pUVar1 + 0x40;
    pUVar2 = pUVar2 + 0x40;
  } while (iVar4 != 0);
  pUVar1 = in_ECX + 0xaa0;
  iVar4 = 0x100;
  do {
    *(undefined4 *)pUVar1 = *(undefined4 *)(pUVar1 + iVar3);
    pUVar1 = pUVar1 + 4;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  *(undefined4 *)(in_ECX + 0xea0) = *(undefined4 *)(param_1 + 0xea0);
  *(undefined4 *)(in_ECX + 0xea4) = *(undefined4 *)(param_1 + 0xea4);
  *(undefined4 *)(in_ECX + 0xea8) = *(undefined4 *)(param_1 + 0xea8);
  pUVar1 = in_ECX + 0xeac;
  iVar4 = 0x3ff;
  do {
    *(undefined4 *)pUVar1 = *(undefined4 *)(pUVar1 + iVar3);
    pUVar1 = pUVar1 + 4;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  pUVar1 = in_ECX + 0x1ea8;
  iVar4 = 0x3ff;
  do {
    *(undefined4 *)pUVar1 = *(undefined4 *)(pUVar1 + iVar3);
    pUVar1 = pUVar1 + 4;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  pUVar1 = in_ECX + 0x2ea4;
  iVar4 = 0x3ff;
  do {
    *(undefined4 *)pUVar1 = *(undefined4 *)(pUVar1 + iVar3);
    pUVar1 = pUVar1 + 4;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  thunk_FUN_1032bcd0(param_1 + 0x3ea0);
  thunk_FUN_1032bcd0(param_1 + 0x3eac);
  thunk_FUN_1032c8d0(param_1 + 0x3eb8);
  thunk_FUN_1032bfc0(param_1 + 0x3ec4);
  thunk_FUN_1032bb30(param_1 + 0x3ed0);
  *(undefined4 *)(in_ECX + 0x3ee0) = *(undefined4 *)(param_1 + 0x3ee0);
  thunk_FUN_1032b7e0();
  *(undefined4 *)(in_ECX + 0x3ee4) = *(undefined4 *)(param_1 + 0x3ee4);
  thunk_FUN_1032da20(param_1 + 0x3ee8);
  *(undefined4 *)(in_ECX + 0x3ef4) = *(undefined4 *)(param_1 + 0x3ef4);
  *(undefined4 *)(in_ECX + 0x3ef8) = *(undefined4 *)(param_1 + 0x3ef8);
  *(undefined4 *)(in_ECX + 0x3efc) = *(undefined4 *)(param_1 + 0x3efc);
  *(undefined4 *)(in_ECX + 0x3f00) = *(undefined4 *)(param_1 + 0x3f00);
  *(undefined4 *)(in_ECX + 0x3f04) = *(undefined4 *)(param_1 + 0x3f04);
  *(undefined4 *)(in_ECX + 0x3f08) = *(undefined4 *)(param_1 + 0x3f08);
  *(undefined4 *)(in_ECX + 0x3f0c) = *(undefined4 *)(param_1 + 0x3f0c);
  thunk_FUN_1032eb40(param_1 + 0x3f10);
  return;
}


// ==== 1032fa70 FUN_1032fa70

void FUN_1032fa70(byte param_1)

{
  UNetConnection *in_ECX;
  
  UNetConnection::~UNetConnection(in_ECX);
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x3f1c);
  }
  return;
}


// ==== 1032faa0 FUN_1032faa0

UNetConnection * FUN_1032faa0(byte param_1)

{
  UNetConnection *in_ECX;
  
  if ((param_1 & 2) != 0) {
    _eh_vector_destructor_iterator_
              (in_ECX,0x3f1c,*(int *)(in_ECX + -4),UNetConnection::~UNetConnection);
    if ((param_1 & 1) != 0) {
      (**(code **)(**(int **)GMalloc_exref + 8))(in_ECX + -4);
    }
    return in_ECX + -4;
  }
  UNetConnection::~UNetConnection(in_ECX);
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x3f1c);
  }
  return in_ECX;
}


// ==== 1032fb20 FUN_1032fb20

void FUN_1032fb20(void)

{
  UObject *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107f1688;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)in_ECX = UDemoRecConnection::vftable_for_UObject_;
  *(undefined ***)(in_ECX + 0x34) = UDemoRecConnection::vftable_for_FOutputDevice_;
  *(undefined ***)(in_ECX + 0x38) = UDemoRecConnection::vftable_for_FExec_;
  local_4 = 0;
  UObject::ConditionalDestroy(in_ECX);
  local_4 = 0xffffffff;
  UNetConnection::~UNetConnection((UNetConnection *)in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 1032fba0 FUN_1032fba0

void FUN_1032fba0(void)

{
  UNetConnection *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f16a8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UNetConnection::UNetConnection(in_ECX);
  *(undefined ***)in_ECX = UDemoRecConnection::vftable_for_UObject_;
  *(undefined ***)(in_ECX + 0x34) = UDemoRecConnection::vftable_for_FOutputDevice_;
  *(undefined ***)(in_ECX + 0x38) = UDemoRecConnection::vftable_for_FExec_;
  ExceptionList = local_c;
  return;
}


// ==== 1032fc10 FUN_1032fc10

void FUN_1032fc10(UNetConnection *param_1)

{
  UNetConnection *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f16c8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UNetConnection::UNetConnection(in_ECX,param_1);
  *(undefined ***)in_ECX = UDemoRecConnection::vftable_for_UObject_;
  *(undefined ***)(in_ECX + 0x34) = UDemoRecConnection::vftable_for_FOutputDevice_;
  *(undefined ***)(in_ECX + 0x38) = UDemoRecConnection::vftable_for_FExec_;
  ExceptionList = local_c;
  return;
}


// ==== 1032fc90 FUN_1032fc90

void FUN_1032fc90(UNetConnection *param_1)

{
  UNetConnection *in_ECX;
  
  UNetConnection::operator=(in_ECX,param_1);
  return;
}


// ==== 1032fcb0 FUN_1032fcb0

void FUN_1032fcb0(byte param_1)

{
  UDemoRecConnection *in_ECX;
  
  UDemoRecConnection::~UDemoRecConnection(in_ECX);
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x3f1c);
  }
  return;
}


// ==== 1032fce0 FUN_1032fce0

UDemoRecConnection * FUN_1032fce0(byte param_1)

{
  UDemoRecConnection *in_ECX;
  
  if ((param_1 & 2) != 0) {
    _eh_vector_destructor_iterator_
              (in_ECX,0x3f1c,*(int *)(in_ECX + -4),UDemoRecConnection::~UDemoRecConnection);
    if ((param_1 & 1) != 0) {
      (**(code **)(**(int **)GMalloc_exref + 8))(in_ECX + -4);
    }
    return in_ECX + -4;
  }
  UDemoRecConnection::~UDemoRecConnection(in_ECX);
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x3f1c);
  }
  return in_ECX;
}


// ==== 1032fd60 FUN_1032fd60

void FUN_1032fd60(UDemoRecConnection *param_1)

{
  if (param_1 != (UDemoRecConnection *)0x0) {
    UDemoRecConnection::UDemoRecConnection(param_1);
    return;
  }
  return;
}


// ==== 1032fd80 FUN_1032fd80

void FUN_1032fd80(undefined4 *param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = param_2 & 3;
  for (param_2 = param_2 >> 2; param_2 != 0; param_2 = param_2 - 1) {
    *param_1 = 0;
    param_1 = param_1 + 1;
  }
  for (; uVar1 != 0; uVar1 = uVar1 - 1) {
    *(undefined1 *)param_1 = 0;
    param_1 = (undefined4 *)((int)param_1 + 1);
  }
  return;
}


// ==== 1032fdb0 FUN_1032fdb0

void FUN_1032fdb0(void)

{
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f16e9;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 1032fe90 FUN_1032fe90

uint FUN_1032fe90(ushort param_1)

{
  uint uVar1;
  
  uVar1 = (uint)param_1;
  if ((ushort)(param_1 - 0x61) < 0x1a) {
    uVar1 = uVar1 - 0x20;
  }
  return uVar1;
}


// ==== 1032fee0 FUN_1032fee0

UObject * FUN_1032fee0(UObject *param_1)

{
  UClass *pUVar1;
  int iVar2;
  
  if (param_1 != (UObject *)0x0) {
    pUVar1 = UPackage::StaticClass();
    iVar2 = UObject::IsA(param_1,pUVar1);
    if (iVar2 != 0) {
      return param_1;
    }
    UObject::GetFullName(param_1,(ushort *)0x0);
  }
  pUVar1 = UPackage::StaticClass();
  UObject::GetName((UObject *)pUVar1);
  FOutputDevice::Logf(*(FOutputDevice **)GError_exref,(ushort *)*(FOutputDevice **)GError_exref);
  return param_1;
}


// ==== 1032ff50 FUN_1032ff50

void FUN_1032ff50(short *param_1)

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


// ==== 1032ffc0 FUN_1032ffc0

void FUN_1032ffc0(undefined4 param_1)

{
  (**(code **)**(undefined4 **)GMalloc_exref)(param_1,&DAT_10853a28);
  return;
}


// ==== 1032ffe0 FUN_1032ffe0

int * FUN_1032ffe0(int *param_1,undefined4 param_2)

{
  (**(code **)(*param_1 + 4))(param_2,1);
  return param_1;
}


// ==== 10330000 FUN_10330000

FArchive * FUN_10330000(FArchive *param_1,void *param_2)

{
  FArchive::ByteOrderSerialize(param_1,param_2,2);
  return param_1;
}


// ==== 10330020 FUN_10330020

FArchive * FUN_10330020(FArchive *param_1,void *param_2)

{
  FArchive::ByteOrderSerialize(param_1,param_2,4);
  return param_1;
}


// ==== 10330040 FUN_10330040

FArchive * FUN_10330040(FArchive *param_1,void *param_2)

{
  FArchive::ByteOrderSerialize(param_1,param_2,4);
  return param_1;
}


// ==== 10330060 FUN_10330060

FArchive * FUN_10330060(FArchive *param_1,void *param_2)

{
  FArchive::ByteOrderSerialize(param_1,param_2,4);
  return param_1;
}


// ==== 10330080 FUN_10330080

FArchive * FUN_10330080(FArchive *param_1,void *param_2)

{
  FArchive::ByteOrderSerialize(param_1,param_2,8);
  return param_1;
}


// ==== 10330120 FUN_10330120

bool FUN_10330120(void)

{
  int in_ECX;
  
  return *(int *)(in_ECX + 4) < *(int *)(GObjObjects_exref + 4);
}


// ==== 10330140 FUN_10330140

undefined8 FUN_10330140(uint param_1)

{
  uint uVar1;
  int iVar2;
  code *pcVar3;
  undefined8 uVar4;
  
  pcVar3 = GMakeCacheIDIndex_exref;
  uVar1 = *(uint *)GMakeCacheIDIndex_exref;
  iVar2 = *(int *)(GMakeCacheIDIndex_exref + 4);
  uVar4 = __allmul(uVar1,iVar2,0x100,0);
  *(uint *)pcVar3 = uVar1 + 1;
  *(uint *)(GMakeCacheIDIndex_exref + 4) = iVar2 + (uint)(0xfffffffe < uVar1);
  return CONCAT44((int)((ulonglong)uVar4 >> 0x20) + ((int)param_1 >> 0x1f) +
                  (uint)CARRY4((uint)uVar4,param_1),(uint)uVar4 + param_1);
}


// ==== 103301a0 FUN_103301a0

void FUN_103301a0(float *param_1,float param_2,float *param_3)

{
  *param_1 = param_2 * *param_3;
  param_1[1] = param_3[1] * param_2;
  param_1[2] = param_2 * param_3[2];
  return;
}


// ==== 103301d0 FUN_103301d0

FArchive * FUN_103301d0(FArchive *param_1,void *param_2)

{
  FArchive::ByteOrderSerialize(param_1,param_2,4);
  FArchive::ByteOrderSerialize(param_1,(void *)((int)param_2 + 4),4);
  FArchive::ByteOrderSerialize(param_1,(void *)((int)param_2 + 8),4);
  return param_1;
}


// ==== 10330220 `vector_constructor_iterator'

/* Library Function - Single Match
    void __stdcall `vector constructor iterator'(void *,unsigned int,int,void * (__thiscall*)(void
   *))
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release */

void _vector_constructor_iterator_
               (void *param_1,uint param_2,int param_3,_func_void_ptr_void_ptr *param_4)

{
  void *unaff_ESI;
  
  while (param_3 = param_3 + -1, -1 < param_3) {
    (*param_4)(unaff_ESI);
  }
  return;
}


// ==== 10330260 FUN_10330260

FArchive * FUN_10330260(FArchive *param_1,void *param_2)

{
  FArchive::ByteOrderSerialize(param_1,param_2,4);
  FArchive::ByteOrderSerialize(param_1,(void *)((int)param_2 + 4),4);
  FArchive::ByteOrderSerialize(param_1,(void *)((int)param_2 + 8),4);
  FArchive::ByteOrderSerialize(param_1,(void *)((int)param_2 + 0xc),4);
  return param_1;
}


// ==== 103302c0 FUN_103302c0

FArchive * FUN_103302c0(FArchive *param_1,void *param_2)

{
  FArchive::ByteOrderSerialize(param_1,param_2,4);
  FArchive::ByteOrderSerialize(param_1,(void *)((int)param_2 + 4),4);
  FArchive::ByteOrderSerialize(param_1,(void *)((int)param_2 + 8),4);
  FArchive::ByteOrderSerialize(param_1,(void *)((int)param_2 + 0xc),4);
  FArchive::ByteOrderSerialize(param_1,(void *)((int)param_2 + 0x10),4);
  FArchive::ByteOrderSerialize(param_1,(void *)((int)param_2 + 0x14),4);
  (**(code **)(*(int *)param_1 + 4))((int)param_2 + 0x18,1);
  return param_1;
}


// ==== 10330350 FUN_10330350

FArchive * FUN_10330350(FArchive *param_1,void *param_2)

{
  FArchive::ByteOrderSerialize(param_1,param_2,4);
  FArchive::ByteOrderSerialize(param_1,(void *)((int)param_2 + 4),4);
  FArchive::ByteOrderSerialize(param_1,(void *)((int)param_2 + 8),4);
  FArchive::ByteOrderSerialize(param_1,(void *)((int)param_2 + 0xc),4);
  FArchive::ByteOrderSerialize(param_1,(void *)((int)param_2 + 0x10),4);
  FArchive::ByteOrderSerialize(param_1,(void *)((int)param_2 + 0x14),4);
  FArchive::ByteOrderSerialize(param_1,(void *)((int)param_2 + 0x18),4);
  FArchive::ByteOrderSerialize(param_1,(void *)((int)param_2 + 0x1c),4);
  FArchive::ByteOrderSerialize(param_1,(void *)((int)param_2 + 0x20),4);
  FArchive::ByteOrderSerialize(param_1,(void *)((int)param_2 + 0x24),4);
  FArchive::ByteOrderSerialize(param_1,(void *)((int)param_2 + 0x28),4);
  FArchive::ByteOrderSerialize(param_1,(void *)((int)param_2 + 0x2c),4);
  FArchive::ByteOrderSerialize(param_1,(void *)((int)param_2 + 0x30),4);
  FArchive::ByteOrderSerialize(param_1,(void *)((int)param_2 + 0x34),4);
  FArchive::ByteOrderSerialize(param_1,(void *)((int)param_2 + 0x38),4);
  FArchive::ByteOrderSerialize(param_1,(void *)((int)param_2 + 0x3c),4);
  return param_1;
}


// ==== 10330480 FUN_10330480

void FUN_10330480(void)

{
  undefined4 *in_ECX;
  
  in_ECX[2] = 0;
  *in_ECX = 2;
  in_ECX[1] = 0;
  in_ECX[3] = 0;
  in_ECX[4] = 0;
  in_ECX[5] = 0;
  in_ECX[6] = 0;
  FRotator::FRotator((FRotator *)(in_ECX + 10));
  return;
}


// ==== 103304c0 FUN_103304c0

void FUN_103304c0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                 undefined4 param_9,undefined4 param_10,undefined4 param_11,undefined4 param_12,
                 undefined4 param_13)

{
  undefined4 *in_ECX;
  
  in_ECX[2] = param_3;
  *in_ECX = param_1;
  in_ECX[7] = param_8;
  in_ECX[10] = param_11;
  in_ECX[8] = param_9;
  in_ECX[1] = param_2;
  in_ECX[9] = param_10;
  in_ECX[0xb] = param_12;
  in_ECX[0xc] = param_13;
  in_ECX[6] = param_7;
  in_ECX[4] = param_5;
  in_ECX[3] = param_4;
  in_ECX[5] = param_6;
  return;
}


// ==== 10330540 FUN_10330540

bool FUN_10330540(int param_1)

{
  int in_ECX;
  
  return *(int *)(in_ECX + 0x18) != *(int *)(param_1 + 0x18);
}


// ==== 10330590 FUN_10330590

void FUN_10330590(void)

{
  return;
}


// ==== 103305a0 FUN_103305a0

void FUN_103305a0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *in_ECX;
  
  *in_ECX = param_1;
  in_ECX[1] = param_2;
  in_ECX[2] = param_3;
  return;
}


// ==== 103305c0 FUN_103305c0

void FUN_103305c0(int param_1,int param_2,int param_3)

{
  float *in_ECX;
  
  *in_ECX = (float)param_1;
  in_ECX[1] = (float)param_2;
  in_ECX[2] = (float)param_3;
  return;
}


// ==== 103305e0 FUN_103305e0

FRotator * FUN_103305e0(FRotator *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = FUN_107a6660();
  iVar2 = FUN_107a6660();
  iVar3 = FUN_107a6660();
  FRotator::FRotator(param_1,iVar3,iVar2,iVar1);
  return param_1;
}


// ==== 10330620 FUN_10330620

void FUN_10330620(float *param_1,float param_2)

{
  float *in_ECX;
  
  *param_1 = param_2 * *in_ECX;
  param_1[1] = in_ECX[1] * param_2;
  param_1[2] = param_2 * in_ECX[2];
  return;
}


// ==== 10330650 FUN_10330650

void FUN_10330650(float *param_1,float param_2,float param_3,float param_4)

{
  float *in_ECX;
  
  *param_1 = *in_ECX + param_2;
  param_1[1] = in_ECX[1] + param_3;
  param_1[2] = in_ECX[2] + param_4;
  return;
}


// ==== 10330680 FUN_10330680

void FUN_10330680(float *param_1,float param_2,float param_3,float param_4)

{
  float *in_ECX;
  
  *param_1 = *in_ECX - param_2;
  param_1[1] = in_ECX[1] - param_3;
  param_1[2] = in_ECX[2] - param_4;
  return;
}


// ==== 103306b0 FUN_103306b0

void FUN_103306b0(float *param_1,float param_2)

{
  float fVar1;
  float *in_ECX;
  
  *in_ECX = param_2 * *in_ECX;
  in_ECX[1] = in_ECX[1] * param_2;
  in_ECX[2] = param_2 * in_ECX[2];
  *param_1 = *in_ECX;
  fVar1 = in_ECX[2];
  param_1[1] = in_ECX[1];
  param_1[2] = fVar1;
  return;
}


// ==== 103306f0 FUN_103306f0

void FUN_103306f0(float *param_1,float param_2,float param_3,float param_4)

{
  float fVar1;
  float *in_ECX;
  
  *in_ECX = *in_ECX + param_2;
  in_ECX[1] = in_ECX[1] + param_3;
  in_ECX[2] = in_ECX[2] + param_4;
  *param_1 = *in_ECX;
  fVar1 = in_ECX[2];
  param_1[1] = in_ECX[1];
  param_1[2] = fVar1;
  return;
}


// ==== 10330730 FUN_10330730

void FUN_10330730(float *param_1,float param_2,float param_3,float param_4)

{
  float fVar1;
  float *in_ECX;
  
  *in_ECX = *in_ECX - param_2;
  in_ECX[1] = in_ECX[1] - param_3;
  in_ECX[2] = in_ECX[2] - param_4;
  *param_1 = *in_ECX;
  fVar1 = in_ECX[2];
  param_1[1] = in_ECX[1];
  param_1[2] = fVar1;
  return;
}


// ==== 10330770 FUN_10330770

undefined4 * FUN_10330770(void)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 *unaff_retaddr;
  FRotator local_3c [12];
  FRotator local_30 [48];
  
  iVar2 = FUN_107a6660();
  iVar3 = FUN_107a6660();
  iVar4 = FUN_107a6660();
  FRotator::FRotator(local_3c,iVar4,iVar3,iVar2);
  iVar2 = FCoords::operator/((FCoords *)(GMath_exref + 0x18),local_30);
  *unaff_retaddr = *(undefined4 *)(iVar2 + 0xc);
  uVar1 = *(undefined4 *)(iVar2 + 0x14);
  unaff_retaddr[1] = *(undefined4 *)(iVar2 + 0x10);
  unaff_retaddr[2] = uVar1;
  return unaff_retaddr;
}


// ==== 103307f0 FUN_103307f0

void FUN_103307f0(undefined4 *param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = *param_1;
  in_ECX[1] = param_1[1];
  in_ECX[2] = param_1[2];
  return;
}


// ==== 10330810 FUN_10330810

FString * FUN_10330810(FString *param_1)

{
  FString *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f171a;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FString::FString(param_1,in_ECX);
  ExceptionList = local_c;
  return param_1;
}


// ==== 10330880 FUN_10330880

void FUN_10330880(FString *param_1)

{
  FString *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f1739;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FString::FString(in_ECX,param_1);
  *(undefined4 *)(in_ECX + 0xc) = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(in_ECX + 0x10) = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)(in_ECX + 0x14) = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)(in_ECX + 0x18) = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)(in_ECX + 0x1c) = *(undefined4 *)(param_1 + 0x1c);
  *(undefined4 *)(in_ECX + 0x20) = *(undefined4 *)(param_1 + 0x20);
  *(undefined4 *)(in_ECX + 0x24) = *(undefined4 *)(param_1 + 0x24);
  *(undefined4 *)(in_ECX + 0x28) = *(undefined4 *)(param_1 + 0x28);
  ExceptionList = local_c;
  return;
}


// ==== 10330920 FUN_10330920

undefined4 FUN_10330920(void)

{
  int in_ECX;
  
  return *(undefined4 *)(in_ECX + 4);
}


// ==== 10330930 FUN_10330930

void FUN_10330930(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = FBezier::vftable;
  return;
}


// ==== 10330940 FUN_10330940

void FUN_10330940(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = FBezier::vftable;
  return;
}


// ==== 10330950 FUN_10330950

void FUN_10330950(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = FBezier::vftable;
  return;
}


// ==== 10330960 FUN_10330960

void FUN_10330960(void)

{
  return;
}


// ==== 103309a0 FUN_103309a0

undefined4 * FUN_103309a0(byte param_1)

{
  undefined4 *in_ECX;
  
  if ((param_1 & 2) != 0) {
    _eh_vector_destructor_iterator_(in_ECX,4,in_ECX[-1],FBezier::~FBezier);
    if ((param_1 & 1) != 0) {
      (**(code **)(**(int **)GMalloc_exref + 8))(in_ECX + -1);
    }
    return in_ECX + -1;
  }
  *in_ECX = FBezier::vftable;
  if ((param_1 & 1) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))();
  }
  return in_ECX;
}


// ==== 10330a20 FUN_10330a20

void FUN_10330a20(undefined4 *param_1)

{
  undefined4 *in_ECX;
  int iVar1;
  
  for (iVar1 = 0xbe; iVar1 != 0; iVar1 = iVar1 + -1) {
    *in_ECX = *param_1;
    param_1 = param_1 + 1;
    in_ECX = in_ECX + 1;
  }
  return;
}


// ==== 10330a40 FUN_10330a40

void FUN_10330a40(undefined4 *param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = *param_1;
  in_ECX[1] = param_1[1];
  return;
}


// ==== 10330a60 FUN_10330a60

void FUN_10330a60(void)

{
  return;
}


// ==== 10330a70 FUN_10330a70

void FUN_10330a70(undefined4 *param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = *param_1;
  in_ECX[1] = param_1[1];
  in_ECX[2] = param_1[2];
  in_ECX[3] = param_1[3];
  in_ECX[4] = param_1[4];
  return;
}


// ==== 10330aa0 FUN_10330aa0

void FUN_10330aa0(void)

{
  FName *in_ECX;
  
  FName::FName(in_ECX);
  FName::FName(in_ECX + 4);
  return;
}


// ==== 10330ac0 FUN_10330ac0

void FUN_10330ac0(undefined4 *param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = *param_1;
  in_ECX[1] = param_1[1];
  in_ECX[2] = param_1[2];
  return;
}


// ==== 10330ae0 FUN_10330ae0

void FUN_10330ae0(void)

{
  FStringNoInit *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f1765;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FStringNoInit::FStringNoInit(in_ECX);
  local_4 = 0;
  FStringNoInit::FStringNoInit(in_ECX + 0xc);
  ExceptionList = local_c;
  return;
}


// ==== 10330b50 FUN_10330b50

void FUN_10330b50(void)

{
  FStringNoInit *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107f1795;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  FStringNoInit::~FStringNoInit(in_ECX + 0xc);
  local_4 = 0xffffffff;
  FStringNoInit::~FStringNoInit(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 10330bc0 FUN_10330bc0

void FUN_10330bc0(FStringNoInit *param_1)

{
  FStringNoInit *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f17c5;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FStringNoInit::FStringNoInit(in_ECX,param_1);
  local_4 = 0;
  FStringNoInit::FStringNoInit(in_ECX + 0xc,param_1 + 0xc);
  ExceptionList = local_c;
  return;
}


// ==== 10330c40 FUN_10330c40

void FUN_10330c40(FStringNoInit *param_1)

{
  FStringNoInit *in_ECX;
  
  FStringNoInit::operator=(in_ECX,param_1);
  FStringNoInit::operator=(in_ECX + 0xc,param_1 + 0xc);
  return;
}


// ==== 10330c70 FUN_10330c70

void FUN_10330c70(void)

{
  int in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f17ec;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FStringNoInit::FStringNoInit((FStringNoInit *)(in_ECX + 0xc));
  ExceptionList = local_c;
  return;
}


// ==== 10330cc0 FUN_10330cc0

void FUN_10330cc0(void)

{
  int in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107f180c;
  local_c = ExceptionList;
  local_4 = 0xffffffff;
  ExceptionList = &local_c;
  FStringNoInit::~FStringNoInit((FStringNoInit *)(in_ECX + 0xc));
  ExceptionList = local_c;
  return;
}


// ==== 10330d10 FUN_10330d10

void FUN_10330d10(undefined4 *param_1)

{
  undefined4 *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f182c;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *in_ECX = *param_1;
  in_ECX[1] = param_1[1];
  in_ECX[2] = param_1[2];
  FStringNoInit::FStringNoInit((FStringNoInit *)(in_ECX + 3),(FStringNoInit *)(param_1 + 3));
  ExceptionList = local_c;
  return;
}


// ==== 10330d80 FUN_10330d80

void FUN_10330d80(undefined4 *param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = *param_1;
  in_ECX[1] = param_1[1];
  in_ECX[2] = param_1[2];
  FStringNoInit::operator=((FStringNoInit *)(in_ECX + 3),(FStringNoInit *)(param_1 + 3));
  return;
}


// ==== 10330dc0 FUN_10330dc0

void FUN_10330dc0(undefined4 param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = param_1;
  in_ECX[1] = 0xffffffff;
  *(undefined1 *)(in_ECX + 2) = 0;
  return;
}


// ==== 10330de0 FUN_10330de0

void FUN_10330de0(undefined4 param_1,undefined4 param_2,undefined1 param_3)

{
  undefined4 *in_ECX;
  
  *in_ECX = param_1;
  in_ECX[1] = param_2;
  *(undefined1 *)(in_ECX + 2) = param_3;
  return;
}


// ==== 10330e00 FUN_10330e00

void FUN_10330e00(undefined4 *param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = *param_1;
  in_ECX[1] = param_1[1];
  in_ECX[2] = param_1[2];
  return;
}


// ==== 10330e20 FUN_10330e20

void FUN_10330e20(undefined4 *param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = *param_1;
  in_ECX[1] = param_1[1];
  in_ECX[2] = param_1[2];
  in_ECX[3] = param_1[3];
  in_ECX[4] = param_1[4];
  in_ECX[5] = param_1[5];
  return;
}


// ==== 10330e60 FUN_10330e60

void FUN_10330e60(void)

{
  return;
}


// ==== 10330ea0 FUN_10330ea0

void FUN_10330ea0(void)

{
  int in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107f1888;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  FMatrix::~FMatrix((FMatrix *)(in_ECX + 0x48));
  local_4 = 0xffffffff;
  FMatrix::~FMatrix((FMatrix *)(in_ECX + 8));
  ExceptionList = local_c;
  return;
}


// ==== 10330f10 FUN_10330f10

void FUN_10330f10(undefined4 *param_1)

{
  undefined4 *in_ECX;
  int iVar1;
  
  for (iVar1 = 0x30; iVar1 != 0; iVar1 = iVar1 + -1) {
    *in_ECX = *param_1;
    param_1 = param_1 + 1;
    in_ECX = in_ECX + 1;
  }
  return;
}


// ==== 10330f30 FUN_10330f30

undefined4 FUN_10330f30(float *param_1)

{
  float *in_ECX;
  
  if (in_ECX[5] * (param_1[2] - in_ECX[2]) +
      in_ECX[3] * (*param_1 - *in_ECX) + in_ECX[4] * (param_1[1] - in_ECX[1]) < 0.0) {
    return 1;
  }
  return 0;
}


// ==== 10330fb0 FUN_10330fb0

undefined4 FUN_10330fb0(void)

{
  int iVar1;
  int in_ECX;
  FVector *this;
  int iVar2;
  FVector *pFVar3;
  int in_stack_00000104;
  
  if (*(int *)(in_ECX + 0x100) != in_stack_00000104) {
    return 0;
  }
  iVar2 = 0;
  if (0 < *(int *)(in_ECX + 0x100)) {
    pFVar3 = (FVector *)&stack0x00000034;
    this = (FVector *)(in_ECX + 0x30);
    do {
      iVar1 = FVector::operator!=(this,pFVar3);
      if (iVar1 != 0) {
        return 0;
      }
      iVar2 = iVar2 + 1;
      pFVar3 = pFVar3 + 0xc;
      this = this + 0xc;
    } while (iVar2 < *(int *)(in_ECX + 0x100));
  }
  return 1;
}


// ==== 10331030 FUN_10331030

undefined4 FUN_10331030(void)

{
  int iVar1;
  int in_ECX;
  FVector *this;
  int iVar2;
  FVector *pFVar3;
  int in_stack_00000104;
  
  if (*(int *)(in_ECX + 0x100) != in_stack_00000104) {
    return 1;
  }
  iVar2 = 0;
  if (0 < *(int *)(in_ECX + 0x100)) {
    pFVar3 = (FVector *)&stack0x00000034;
    this = (FVector *)(in_ECX + 0x30);
    do {
      iVar1 = FVector::operator!=(this,pFVar3);
      if (iVar1 != 0) {
        return 1;
      }
      iVar2 = iVar2 + 1;
      pFVar3 = pFVar3 + 0xc;
      this = this + 0xc;
    } while (iVar2 < *(int *)(in_ECX + 0x100));
  }
  return 0;
}


// ==== 103310b0 FUN_103310b0

void FUN_103310b0(void)

{
  int in_ECX;
  FVector *pFVar1;
  int iVar2;
  
  pFVar1 = (FVector *)(in_ECX + 0x30);
  iVar2 = 0xf;
  do {
    FVector::FVector(pFVar1);
    pFVar1 = pFVar1 + 0xc;
    iVar2 = iVar2 + -1;
  } while (-1 < iVar2);
  FName::FName((FName *)(in_ECX + 0xfc));
  pFVar1 = (FVector *)(in_ECX + 0x11c);
  iVar2 = 2;
  do {
    FVector::FVector(pFVar1);
    pFVar1 = pFVar1 + 0xc;
    iVar2 = iVar2 + -1;
  } while (-1 < iVar2);
  return;
}


// ==== 10331110 FUN_10331110

void FUN_10331110(undefined4 *param_1)

{
  undefined4 *in_ECX;
  int iVar1;
  
  for (iVar1 = 0x53; iVar1 != 0; iVar1 = iVar1 + -1) {
    *in_ECX = *param_1;
    param_1 = param_1 + 1;
    in_ECX = in_ECX + 1;
  }
  return;
}


// ==== 10331130 FUN_10331130

UClass * FUN_10331130(void)

{
  return &UPolys::PrivateStaticClass;
}


// ==== 10331140 FUN_10331140

void FUN_10331140(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  UObject::StaticAllocateObject
            (&UPolys::PrivateStaticClass,param_2,param_3,param_4,0,*(undefined4 *)GError_exref,0,0);
  return;
}


// ==== 10331180 FUN_10331180

undefined4 FUN_10331180(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}


// ==== 10331190 FUN_10331190

void FUN_10331190(FArchive *param_1,FCompactIndex *param_2)

{
  FArchive *pFVar1;
  FCompactIndex *pFVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_107f18a0;
  local_10 = ExceptionList;
  local_8 = 0;
  pFVar2 = param_2 + 4;
  ExceptionList = &local_10;
  pFVar1 = operator<<(param_1,param_2);
  operator<<(pFVar1,pFVar2);
  ExceptionList = local_10;
  return;
}


// ==== 103311e6 Catch@103311e6

void Catch_103311e6(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 103311fa Catch@103311fa

void Catch_103311fa(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"FVert<<");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10331240 FUN_10331240

UClass * FUN_10331240(void)

{
  return &UPrimitive::PrivateStaticClass;
}


// ==== 10331250 FUN_10331250

void FUN_10331250(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  UObject::StaticAllocateObject
            (&UPrimitive::PrivateStaticClass,param_2,param_3,param_4,0,*(undefined4 *)GError_exref,0
             ,0);
  return;
}


// ==== 10331290 FUN_10331290

undefined4 FUN_10331290(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}


// ==== 103312a0 FUN_103312a0

void FUN_103312a0(void)

{
  UObject *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107f18b9;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)in_ECX = UPrimitive::vftable;
  local_4 = 0;
  UObject::ConditionalDestroy(in_ECX);
  local_4 = 0xffffffff;
  UObject::~UObject(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 10331310 FUN_10331310

void FUN_10331310(void)

{
  UObject *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f18d9;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UObject::UObject(in_ECX);
  local_4 = 0;
  *(undefined ***)in_ECX = UPrimitive::vftable;
  FBox::FBox((FBox *)(in_ECX + 0x34),0);
  FSphere::FSphere((FSphere *)(in_ECX + 0x50),0);
  ExceptionList = local_c;
  return;
}


// ==== 10331390 FUN_10331390

void FUN_10331390(void)

{
  return;
}


// ==== 103313a0 FUN_103313a0

void FUN_103313a0(UObject *param_1)

{
  UObject *in_ECX;
  int iVar1;
  UObject *pUVar2;
  UObject *pUVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f18f9;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UObject::UObject(in_ECX,param_1);
  local_4 = 0;
  *(undefined ***)in_ECX = UPrimitive::vftable;
  pUVar2 = param_1 + 0x34;
  pUVar3 = in_ECX + 0x34;
  for (iVar1 = 7; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)pUVar3 = *(undefined4 *)pUVar2;
    pUVar2 = pUVar2 + 4;
    pUVar3 = pUVar3 + 4;
  }
  FSphere::FSphere((FSphere *)(in_ECX + 0x50),(FSphere *)(param_1 + 0x50));
  ExceptionList = local_c;
  return;
}


// ==== 10331430 FUN_10331430

void FUN_10331430(UObject *param_1)

{
  UObject *in_ECX;
  int iVar1;
  UObject *pUVar2;
  UObject *pUVar3;
  
  UObject::operator=(in_ECX,param_1);
  pUVar2 = param_1 + 0x34;
  pUVar3 = in_ECX + 0x34;
  for (iVar1 = 7; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)pUVar3 = *(undefined4 *)pUVar2;
    pUVar2 = pUVar2 + 4;
    pUVar3 = pUVar3 + 4;
  }
  *(undefined4 *)(in_ECX + 0x50) = *(undefined4 *)(param_1 + 0x50);
  *(undefined4 *)(in_ECX + 0x54) = *(undefined4 *)(param_1 + 0x54);
  *(undefined4 *)(in_ECX + 0x58) = *(undefined4 *)(param_1 + 0x58);
  *(undefined4 *)(in_ECX + 0x5c) = *(undefined4 *)(param_1 + 0x5c);
  return;
}


// ==== 10331490 FUN_10331490

void FUN_10331490(byte param_1)

{
  UPrimitive *in_ECX;
  
  UPrimitive::~UPrimitive(in_ECX);
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x60);
  }
  return;
}


// ==== 103314c0 FUN_103314c0

UPrimitive * FUN_103314c0(byte param_1)

{
  UPrimitive *in_ECX;
  
  if ((param_1 & 2) != 0) {
    _eh_vector_destructor_iterator_(in_ECX,0x60,*(int *)(in_ECX + -4),UPrimitive::~UPrimitive);
    if ((param_1 & 1) != 0) {
      (**(code **)(**(int **)GMalloc_exref + 8))(in_ECX + -4);
    }
    return in_ECX + -4;
  }
  UPrimitive::~UPrimitive(in_ECX);
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x60);
  }
  return in_ECX;
}


// ==== 10331540 FUN_10331540

UClass * FUN_10331540(void)

{
  return &UConvexVolume::PrivateStaticClass;
}


// ==== 10331550 FUN_10331550

void FUN_10331550(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  UObject::StaticAllocateObject
            (&UConvexVolume::PrivateStaticClass,param_2,param_3,param_4,0,
             *(undefined4 *)GError_exref,0,0);
  return;
}


// ==== 10331590 FUN_10331590

undefined4 FUN_10331590(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}


// ==== 103315a0 FUN_103315a0

void FUN_103315a0(UConvexVolume *param_1)

{
  if (param_1 != (UConvexVolume *)0x0) {
    UConvexVolume::UConvexVolume(param_1);
    return;
  }
  return;
}


// ==== 103315c0 FUN_103315c0

void FUN_103315c0(undefined4 *param_1)

{
  int in_ECX;
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)(in_ECX + 0x78);
  for (iVar1 = 7; iVar1 != 0; iVar1 = iVar1 + -1) {
    *param_1 = *puVar2;
    puVar2 = puVar2 + 1;
    param_1 = param_1 + 1;
  }
  return;
}


// ==== 103315e0 FUN_103315e0

void FUN_103315e0(void)

{
  return;
}


// ==== 103315f0 FUN_103315f0

void FUN_103315f0(void)

{
  return;
}


// ==== 10331600 FUN_10331600

void FUN_10331600(undefined1 param_1,undefined1 param_2,undefined1 param_3,undefined1 param_4)

{
  undefined1 *in_ECX;
  
  *in_ECX = param_3;
  in_ECX[1] = param_2;
  in_ECX[2] = param_1;
  in_ECX[3] = param_4;
  return;
}


// ==== 10331630 FUN_10331630

void FUN_10331630(undefined4 param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = param_1;
  return;
}


// ==== 10331640 FUN_10331640

int * FUN_10331640(int *param_1,int param_2)

{
  (**(code **)(*param_1 + 4))(param_2 + 2,1);
  (**(code **)(*param_1 + 4))(param_2 + 1,1);
  (**(code **)(*param_1 + 4))(param_2,1);
  (**(code **)(*param_1 + 4))(param_2 + 3,1);
  return param_1;
}


// ==== 103316a0 FUN_103316a0

bool FUN_103316a0(int *param_1)

{
  int *in_ECX;
  
  return *in_ECX == *param_1;
}


// ==== 103316c0 FUN_103316c0

bool FUN_103316c0(int *param_1)

{
  int *in_ECX;
  
  return *in_ECX != *param_1;
}


// ==== 103316e0 FUN_103316e0

void FUN_103316e0(undefined4 param_1)

{
  undefined4 uVar1;
  byte bVar2;
  byte bVar3;
  byte *in_ECX;
  byte bVar4;
  
  uVar1 = *(undefined4 *)in_ECX;
  *in_ECX = (byte)uVar1 + (byte)param_1 | ~(CARRY1((byte)uVar1,(byte)param_1) - 1U);
  bVar2 = (byte)((uint)uVar1 >> 8);
  bVar3 = (byte)((uint)param_1 >> 8);
  in_ECX[1] = bVar2 + bVar3 | ~(CARRY1(bVar2,bVar3) - 1U);
  bVar3 = (byte)((uint)uVar1 >> 0x10);
  bVar4 = (byte)((uint)param_1 >> 0x10);
  bVar2 = (byte)((uint)uVar1 >> 0x18);
  in_ECX[2] = bVar3 + bVar4 | ~(CARRY1(bVar3,bVar4) - 1U);
  bVar3 = (byte)((uint)param_1 >> 0x18);
  in_ECX[3] = bVar2 + bVar3 | ~(CARRY1(bVar2,bVar3) - 1U);
  return;
}


// ==== 10331760 FUN_10331760

int FUN_10331760(void)

{
  byte *in_ECX;
  
  return (int)((uint)in_ECX[1] * 3 + (uint)in_ECX[2] * 2 + (uint)*in_ECX) >> 3;
}


// ==== 10331780 FUN_10331780

float10 FUN_10331780(void)

{
  byte *in_ECX;
  
  return (float10)(((float)*in_ECX + (float)in_ECX[1] * 3.0 + (float)in_ECX[2] + (float)in_ECX[2]) /
                  1536.0);
}


// ==== 103317d0 FUN_103317d0

undefined4 FUN_103317d0(void)

{
  undefined4 *in_ECX;
  
  return *in_ECX;
}


