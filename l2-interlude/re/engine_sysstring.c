// ==== 10302310 FL2GameData::SysStringLoad depth=0 from=raiz callees=
// strings: 

/* protected: int __thiscall FL2GameData::SysStringLoad(int) */

int __thiscall FL2GameData::SysStringLoad(FL2GameData *this,int param_1)

{
  FArchive *pFVar1;
  FArchive *pFVar2;
  ushort *puVar3;
  FOutputDevice *this_00;
  int iVar4;
  int iVar5;
  FOutputDevice aFStack_13c [184];
  undefined4 uStack_84;
  undefined1 *puStack_44;
  void *pvStack_40;
  undefined1 *puStack_3c;
  int iStack_38;
  int iStack_2c;
  int iStack_28;
  undefined4 auStack_24 [2];
  int iStack_1c;
  FL2GameData *pFStack_18;
  FArchive *pFStack_14;
  int iStack_10;
  int iStack_c;
  uchar *puStack_8;
  
                    /* 0x2310  8569  ?SysStringLoad@FL2GameData@@IAEHH@Z */
  puStack_3c = &LAB_10812c5b;
  pvStack_40 = ExceptionList;
  puStack_44 = &stack0xfffffeb8;
  iVar4 = 0;
  iStack_38 = 0;
  iStack_10 = 1;
  puStack_8 = (uchar *)0x0;
  iStack_c = 0;
  pFStack_14 = (FArchive *)0x0;
  ExceptionList = &pvStack_40;
  pFStack_18 = this;
  GetBinFileName(this,(ushort *)aFStack_13c,(ushort *)L"SysString");
  pFVar1 = (FArchive *)
           (**(code **)(**(int **)GFileManager_exref + 8))(aFStack_13c,0,*(undefined4 *)GNull_exref)
  ;
  pFStack_14 = pFVar1;
  if (pFVar1 == (FArchive *)0x0) {
    if (param_1 == 0) {
      if (*(int *)GLog_exref != 0) {
        FOutputDevice::Logf2(this_00,*(EName *)GLog_exref,(ushort *)0x315);
      }
      goto LAB_104555c7;
    }
  }
  else if (param_1 == 0) {
    param_1 = 0;
    iStack_c = (**(code **)(*(int *)pFVar1 + 0x2c))();
    GetTextInformation(this,pFVar1,&puStack_8,&iStack_c,0);
    pFVar2 = (FArchive *)(**(code **)(**(int **)GFileManager_exref + 4))(puStack_8,iStack_c);
    if (pFVar2 == (FArchive *)0x0) {
      if (*(int *)GLog_exref != 0) {
        FOutputDevice::Logf2(aFStack_13c,*(EName *)GLog_exref,(ushort *)0x315);
      }
    }
    else {
      iVar4 = CheckSafePackage(this,pFVar2);
      if (iVar4 == 0) {
        FOutputDevice::Logf(aFStack_13c,*(ushort **)GError_exref);
      }
      (**(code **)(*(int *)pFVar2 + 4))(&param_1,4);
      for (iVar4 = 0; iStack_1c = iVar4, iVar4 < param_1; iVar4 = iVar4 + 1) {
        auStack_24[0] = 0;
        (**(code **)(*(int *)pFVar2 + 4))(auStack_24,4);
        ::operator<<(pFVar2,(FString *)(pFStack_18 + iVar4 * 0xc + 0x6a8dc));
      }
      (**(code **)(*(int *)pFVar2 + 0x58))();
    }
    (**(code **)(*(int *)pFVar1 + 0x58))();
    thunk_FUN_103254a0(puStack_8);
    if (pFVar2 != (FArchive *)0x0) {
      (*(code *)**(undefined4 **)pFVar2)(1);
    }
    goto LAB_104555c7;
  }
  if (pFVar1 != (FArchive *)0x0) {
    (**(code **)(*(int *)pFVar1 + 0x58))();
  }
  GetTextFileName(this,(ushort *)aFStack_13c,(ushort *)L"SysString");
  pFVar1 = (FArchive *)
           (**(code **)(**(int **)GFileManager_exref + 8))(aFStack_13c,0,*(undefined4 *)GNull_exref)
  ;
  pFStack_14 = pFVar1;
  if (pFVar1 == (FArchive *)0x0) {
    FOutputDevice::Logf(*(FOutputDevice **)GWarn_exref,(ushort *)*(FOutputDevice **)GWarn_exref);
    iStack_10 = 0;
  }
  else {
    thunk_FUN_104a14b0();
    iStack_38._0_1_ = 1;
    iStack_c = (**(code **)(*(int *)pFVar1 + 0x2c))();
    GetTextInformation(this,pFVar1,&puStack_8,&iStack_c,param_1);
    if (puStack_8 == (uchar *)0x0) {
      FOutputDevice::Logf(*(FOutputDevice **)GWarn_exref,(ushort *)*(FOutputDevice **)GWarn_exref);
      iStack_10 = 0;
      iStack_38 = (uint)iStack_38._1_3_ << 8;
      thunk_FUN_104a1770();
    }
    else {
      param_1 = (int)(puStack_8 + 2);
      for (iVar5 = 0; iStack_2c = iVar5, iVar5 < 4; iVar5 = iVar5 + 1) {
        thunk_FUN_104a1120(u_string_begin_10ad5d68 + iVar5 * 0x101,
                           u_cstringID_10ad5f68[iVar5 * 0x101]);
      }
      thunk_FUN_1049f750(param_1);
      iVar5 = thunk_FUN_104a1840();
      if (iVar5 == 0) {
        thunk_FUN_10445eb0(uStack_84);
        FOutputDevice::Logf((FOutputDevice *)GWarn_exref,*(ushort **)GWarn_exref);
        iStack_10 = 0;
      }
      else {
        param_1 = thunk_FUN_1049f840();
        for (; iStack_28 = iVar4, iVar4 < param_1; iVar4 = iVar4 + 1) {
          iVar5 = thunk_FUN_104a0b70(L"stringID",iVar4);
          puVar3 = (ushort *)thunk_FUN_104a0c30(L"string",iVar4);
          if (puVar3 != (ushort *)0x0) {
            FString::operator=((FString *)(pFStack_18 + iVar5 * 0xc + 0x6a8dc),puVar3);
          }
        }
        FOutputDevice::Logf(*(FOutputDevice **)GWarn_exref,(ushort *)*(FOutputDevice **)GWarn_exref)
        ;
      }
      thunk_FUN_104a16a0();
      (**(code **)(*(int *)pFVar1 + 0x58))();
      thunk_FUN_103254a0(puStack_8);
      iStack_38 = (uint)iStack_38._1_3_ << 8;
      thunk_FUN_104a1770();
    }
  }
LAB_104555c7:
  if (pFVar1 != (FArchive *)0x0) {
    (*(code *)**(undefined4 **)pFVar1)(1);
  }
  ExceptionList = pvStack_40;
  return iStack_10;
}


