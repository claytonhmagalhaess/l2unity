// ==== 104802d0 FUN_104802d0 target=1030e575 callers=Load@10301e38
// strings: 

undefined4 __thiscall FUN_104802d0(FL2GameData *param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  puStack_c = &LAB_10815afd;
  local_10 = ExceptionList;
  local_8 = 0;
  uStack_7 = 0;
  ExceptionList = &local_10;
  FL2GameData::Clear(param_1);
  iVar1 = FL2GameData::WarningNoticeLoad(param_1,param_2);
  *(int *)(param_1 + 0x34) = iVar1;
  iVar1 = FL2GameData::EulaLoad(param_1,param_2);
  *(int *)(param_1 + 0x38) = iVar1;
  iVar1 = FL2GameData::CharDataLoad(param_1,param_2);
  *(int *)(param_1 + 0x3c) = iVar1;
  iVar1 = FL2GameData::HairDataLoad(param_1,param_2);
  *(int *)(param_1 + 0x40) = iVar1;
  if (*(int *)(param_1 + 0x182c) == 0) {
    iVar1 = thunk_FUN_1032ffc0(0x14);
    local_8 = 1;
    if (iVar1 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = thunk_FUN_1047b100();
    }
    local_8 = 0;
    *(undefined4 *)(param_1 + 0x182c) = uVar2;
  }
  iVar1 = FL2GameData::HelmHairDataLoad(param_1,param_2);
  *(int *)(param_1 + 0x44) = iVar1;
  if (*(int *)(param_1 + 0x1830) == 0) {
    iVar1 = thunk_FUN_1032ffc0(0x14);
    local_8 = 2;
    if (iVar1 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = thunk_FUN_1047b100();
    }
    local_8 = 0;
    *(undefined4 *)(param_1 + 0x1830) = uVar2;
  }
  iVar1 = FL2GameData::AccessaryHairDataLoad(param_1,param_2);
  *(int *)(param_1 + 0x48) = iVar1;
  if (*(int *)(param_1 + 0x1834) == 0) {
    iVar1 = thunk_FUN_1032ffc0(0x14);
    local_8 = 3;
    if (iVar1 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = thunk_FUN_1047b150();
    }
    local_8 = 0;
    *(undefined4 *)(param_1 + 0x1834) = uVar2;
  }
  iVar1 = FL2GameData::EtcItemDataLoad(param_1,param_2);
  *(int *)(param_1 + 0x4c) = iVar1;
  iVar1 = FL2GameData::ArmorItemDataLoad(param_1,param_2);
  *(int *)(param_1 + 0x50) = iVar1;
  iVar1 = FL2GameData::WeaponItemDataLoad(param_1,param_2);
  *(int *)(param_1 + 0x54) = iVar1;
  iVar1 = FL2GameData::ItemNameDataLoad(param_1,param_2);
  *(int *)(param_1 + 0x58) = iVar1;
  if (*(int *)(param_1 + 0x1838) == 0) {
    iVar1 = thunk_FUN_1032ffc0(0x14);
    local_8 = 4;
    if (iVar1 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = thunk_FUN_1047b1a0();
    }
    local_8 = 0;
    *(undefined4 *)(param_1 + 0x1838) = uVar2;
  }
  iVar1 = FL2GameData::NpcDataLoad(param_1,param_2);
  *(int *)(param_1 + 0x5c) = iVar1;
  iVar1 = FL2GameData::NpcNameDataLoad(param_1,param_2);
  *(int *)(param_1 + 0x60) = iVar1;
  if (*(int *)(param_1 + 0x3d08) == 0) {
    iVar1 = thunk_FUN_1032ffc0(0x14);
    local_8 = 5;
    if (iVar1 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = thunk_FUN_1047b1f0();
    }
    local_8 = 0;
    *(undefined4 *)(param_1 + 0x3d08) = uVar2;
  }
  iVar1 = FL2GameData::MSItemDataLoad(param_1,param_2);
  *(int *)(param_1 + 100) = iVar1;
  iVar1 = FL2GameData::MSItemNameDataLoad(param_1,param_2);
  *(int *)(param_1 + 0x68) = iVar1;
  if (*(int *)(param_1 + 0x3d0c) == 0) {
    iVar1 = thunk_FUN_1032ffc0(0x14);
    local_8 = 6;
    if (iVar1 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = thunk_FUN_1047b240();
    }
    local_8 = 0;
    *(undefined4 *)(param_1 + 0x3d0c) = uVar2;
  }
  FL2GameData::MSCommandDataLoad(param_1,param_2);
  iVar1 = FL2GameData::ActionDataLoad(param_1,param_2);
  *(int *)(param_1 + 0x6c) = iVar1;
  if (*(int *)(param_1 + 0x3d44) == 0) {
    iVar1 = thunk_FUN_1032ffc0(0x14);
    local_8 = 7;
    if (iVar1 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = thunk_FUN_1047b290();
    }
    local_8 = 0;
    *(undefined4 *)(param_1 + 0x3d44) = uVar2;
  }
  iVar1 = FL2GameData::QuestDataLoad(param_1,param_2);
  *(int *)(param_1 + 0x70) = iVar1;
  iVar1 = FL2GameData::SystemMsgFormatLoad(param_1,param_2);
  *(int *)(param_1 + 0x74) = iVar1;
  iVar1 = FL2GameData::ServerNameLoad(param_1,param_2);
  *(int *)(param_1 + 0x78) = iVar1;
  iVar1 = FL2GameData::IDCNameLoad(param_1,param_2);
  *(int *)(param_1 + 0x7c) = iVar1;
  if (*(int *)(param_1 + 0x3d10) == 0) {
    iVar1 = thunk_FUN_1032ffc0(0x14);
    local_8 = 8;
    if (iVar1 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = thunk_FUN_1047b2e0();
    }
    local_8 = 0;
    *(undefined4 *)(param_1 + 0x3d10) = uVar2;
  }
  iVar1 = FL2GameData::CreditDataLoad(param_1,param_2);
  *(int *)(param_1 + 0x80) = iVar1;
  iVar1 = FL2GameData::SysStringLoad(param_1,param_2);
  *(int *)(param_1 + 0x84) = iVar1;
  iVar1 = FL2GameData::ClassInfoLoad(param_1,param_2);
  *(int *)(param_1 + 0x88) = iVar1;
  if (*(int *)(param_1 + 0x6a8cc) == 0) {
    iVar1 = thunk_FUN_1032ffc0(0x14);
    local_8 = 9;
    if (iVar1 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = thunk_FUN_1047b330();
    }
    local_8 = 0;
    *(undefined4 *)(param_1 + 0x6a8cc) = uVar2;
  }
  iVar1 = FL2GameData::RecipeDataLoad(param_1,param_2);
  *(int *)(param_1 + 0x8c) = iVar1;
  if (*(int *)(param_1 + 0x6a8d0) == 0) {
    iVar1 = thunk_FUN_1032ffc0(0x14);
    local_8 = 10;
    if (iVar1 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = thunk_FUN_1047b380();
    }
    local_8 = 0;
    *(undefined4 *)(param_1 + 0x6a8d0) = uVar2;
  }
  iVar1 = FL2GameData::HennaDataLoad(param_1,param_2);
  *(int *)(param_1 + 0x90) = iVar1;
  if (*(int *)(param_1 + 0x6a8d4) == 0) {
    iVar1 = thunk_FUN_1032ffc0(0x14);
    local_8 = 0xb;
    if (iVar1 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = thunk_FUN_1047b3d0();
    }
    local_8 = 0;
    *(undefined4 *)(param_1 + 0x6a8d4) = uVar2;
  }
  iVar1 = FL2GameData::SkillSndDataLoad(param_1,param_2);
  *(int *)(param_1 + 0x94) = iVar1;
  iVar1 = FL2GameData::CastleNameDataLoad(param_1,param_2);
  *(int *)(param_1 + 0x98) = iVar1;
  iVar1 = FL2GameData::SymbolInfoLoad(param_1,param_2);
  *(int *)(param_1 + 0x9c) = iVar1;
  if (*(int *)(param_1 + 0x7dce8) == 0) {
    iVar1 = thunk_FUN_1032ffc0(0x14);
    local_8 = 0xc;
    if (iVar1 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = thunk_FUN_1047b420();
    }
    local_8 = 0;
    *(undefined4 *)(param_1 + 0x7dce8) = uVar2;
  }
  iVar1 = FL2GameData::EnterEventDataLoad(param_1,param_2);
  *(int *)(param_1 + 0xa0) = iVar1;
  if (*(int *)(param_1 + 0x3d14) == 0) {
    iVar1 = thunk_FUN_1032ffc0(0x14);
    local_8 = 0xd;
    if (iVar1 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = thunk_FUN_1047b470();
    }
    local_8 = 0;
    *(undefined4 *)(param_1 + 0x3d14) = uVar2;
  }
  iVar1 = FL2GameData::CommandDataLoad(param_1,param_2);
  *(int *)(param_1 + 0xa4) = iVar1;
  FL2GameData::CommandStringLoad(param_1,param_2);
  iVar1 = FL2GameData::ObsceneDataLoad(param_1,param_2);
  *(int *)(param_1 + 0xa8) = iVar1;
  if (*(int *)(param_1 + 0x3d18) == 0) {
    iVar1 = thunk_FUN_1032ffc0(0x14);
    local_8 = 0xe;
    if (iVar1 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = thunk_FUN_1047b4c0();
    }
    local_8 = 0;
    *(undefined4 *)(param_1 + 0x3d18) = uVar2;
  }
  iVar1 = FL2GameData::MusicDataLoad(param_1,param_2);
  *(int *)(param_1 + 0xac) = iVar1;
  if (*(int *)(param_1 + 0x3d28) == 0) {
    iVar1 = thunk_FUN_1032ffc0(0x14);
    local_8 = 0xf;
    if (iVar1 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = thunk_FUN_1047b510();
    }
    local_8 = 0;
    *(undefined4 *)(param_1 + 0x3d28) = uVar2;
  }
  iVar1 = FL2GameData::NpcSkillAnimDataLoad(param_1,param_2);
  *(int *)(param_1 + 0xb0) = iVar1;
  if (*(int *)(param_1 + 0x6a8d8) == 0) {
    iVar1 = thunk_FUN_1032ffc0(0x14);
    local_8 = 0x10;
    if (iVar1 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = thunk_FUN_1047b560();
    }
    local_8 = 0;
    *(undefined4 *)(param_1 + 0x6a8d8) = uVar2;
  }
  iVar1 = FL2GameData::StaticObjectInfoLoad(param_1,param_2);
  *(int *)(param_1 + 0xb4) = iVar1;
  if (*(int *)(param_1 + 0x7f9cc) == 0) {
    iVar1 = thunk_FUN_1032ffc0(0x14);
    local_8 = 0x11;
    if (iVar1 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = thunk_FUN_1047b5b0();
    }
    local_8 = 0;
    *(undefined4 *)(param_1 + 0x7f9cc) = uVar2;
  }
  if (*(int *)(param_1 + 0x7f9c8) == 0) {
    iVar1 = thunk_FUN_1032ffc0(0x14);
    local_8 = 0x12;
    if (iVar1 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = thunk_FUN_10433d10();
    }
    local_8 = 0;
    *(undefined4 *)(param_1 + 0x7f9c8) = uVar2;
  }
  iVar1 = FL2GameData::ZoneNameListLoad(param_1,param_2);
  *(int *)(param_1 + 0xb8) = iVar1;
  iVar1 = FL2GameData::LogonDataLoad(param_1,param_2);
  *(int *)(param_1 + 0xbc) = iVar1;
  if (*(int *)(param_1 + 0x7f9d4) == 0) {
    iVar1 = thunk_FUN_1032ffc0(0x14);
    local_8 = 0x13;
    if (iVar1 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = thunk_FUN_1047b600();
    }
    local_8 = 0;
    *(undefined4 *)(param_1 + 0x7f9d4) = uVar2;
  }
  iVar1 = FL2GameData::HairAcceLocDataLoad(param_1,param_2);
  *(int *)(param_1 + 0xc0) = iVar1;
  iVar1 = FL2GameData::RaidDataLoad(param_1,param_2);
  *(int *)(param_1 + 0xc4) = iVar1;
  if (*(int *)(param_1 + 0x849e0) == 0) {
    iVar1 = thunk_FUN_1032ffc0(0x14);
    local_8 = 0x14;
    if (iVar1 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = thunk_FUN_1047b650();
    }
    local_8 = 0;
    *(undefined4 *)(param_1 + 0x849e0) = uVar2;
  }
  iVar1 = FL2GameData::HuntingZoneDataLoad(param_1,param_2);
  *(int *)(param_1 + 200) = iVar1;
  iVar1 = FL2GameData::GameTipDataLoad(param_1,param_2);
  *(int *)(param_1 + 0xcc) = iVar1;
  if (*(int *)(param_1 + 0x7f9d8) == 0) {
    iVar1 = thunk_FUN_1032ffc0(0x14);
    local_8 = 0x15;
    if (iVar1 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = thunk_FUN_1047b6a0();
    }
    local_8 = 0;
    *(undefined4 *)(param_1 + 0x7f9d8) = uVar2;
  }
  iVar1 = FL2GameData::VariationOptionDataLoad(param_1,param_2);
  *(int *)(param_1 + 0xd0) = iVar1;
  if (*(int *)(param_1 + 0x7f9dc) == 0) {
    iVar1 = thunk_FUN_1032ffc0(0xc);
    local_8 = 0x16;
    if (iVar1 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = thunk_FUN_10449120();
    }
    local_8 = 0;
    *(undefined4 *)(param_1 + 0x7f9dc) = uVar2;
  }
  iVar1 = FL2GameData::VariationEffectDataLoad(param_1,param_2);
  *(int *)(param_1 + 0xd4) = iVar1;
  FL2GameData::SoulShotDataLoad(param_1);
  if (*(int *)(param_1 + 0x7f9c4) == 0) {
    iVar1 = thunk_FUN_1032ffc0(0x14);
    _local_8 = CONCAT31(uStack_7,0x17);
    if (iVar1 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = thunk_FUN_1047b6f0();
    }
    *(undefined4 *)(param_1 + 0x7f9c4) = uVar2;
  }
  iVar1 = 0;
  while( true ) {
    if (0x2a < iVar1) {
      ExceptionList = local_10;
      return 1;
    }
    if (*(int *)(param_1 + iVar1 * 4 + 0x34) == 0) break;
    iVar1 = iVar1 + 1;
  }
  ExceptionList = local_10;
  return 0;
}


// ==== 10460f70 FUN_10460f70 target=10ae4870 callers=ObsceneDataLoad@1030e575
// strings: 10898208=Obscene | 10895658=File was corrupted [%s]. Please Full Check!!! | 10a79a18=Failed to Load [%s] !!! | 10898208=Obscene | 10ae4c72=dstring | 10ae4870=obscene_begin | 10ae4870=obscene_begin | 10a79a80= - Failed to Parse [%s] %dline : Keyword='%s' Token='%s' !!! | 108964c0=string | 10a799f8= - [%s] loaded. | 10a79afc= - Failed to Decode [%s] !!! | 10a79a48= - Failed to Open [%s] !!! | 10a79a18=Failed to Load [%s] !!! | 

undefined4 __thiscall FUN_10460f70(FL2GameData *param_1,uchar *param_2)

{
  FArchive *pFVar1;
  FArchive *pFVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  ushort *puVar5;
  FOutputDevice *this;
  int iVar6;
  FOutputDevice local_140 [184];
  undefined4 local_88;
  undefined1 *local_48;
  void *local_44;
  undefined1 *puStack_40;
  int local_3c;
  int local_30;
  int local_28;
  int local_24;
  undefined4 *local_20;
  FArchive *local_1c;
  FL2GameData *local_18;
  int local_14;
  undefined4 local_10;
  int local_c;
  uchar *local_8;
  
  puStack_40 = &LAB_10813171;
  local_44 = ExceptionList;
  local_48 = &stack0xfffffeb4;
  iVar6 = 0;
  local_3c = 0;
  local_10 = 1;
  local_8 = (uchar *)0x0;
  local_c = 0;
  local_1c = (FArchive *)0x0;
  ExceptionList = &local_44;
  local_18 = param_1;
  FL2GameData::GetBinFileName(param_1,(ushort *)local_140,(ushort *)L"Obscene");
  pFVar1 = (FArchive *)
           (**(code **)(**(int **)GFileManager_exref + 8))(local_140,0,*(undefined4 *)GNull_exref);
  local_1c = pFVar1;
  if (pFVar1 == (FArchive *)0x0) {
    if (param_2 == (uchar *)0x0) {
      if (*(int *)GLog_exref != 0) {
        FOutputDevice::Logf2(this,*(EName *)GLog_exref,(ushort *)0x315);
      }
      goto LAB_10461123;
    }
  }
  else if (param_2 == (uchar *)0x0) {
    param_2 = (uchar *)0x0;
    local_c = (**(code **)(*(int *)pFVar1 + 0x2c))();
    FL2GameData::GetTextInformation(param_1,pFVar1,&local_8,&local_c,0);
    pFVar2 = (FArchive *)(**(code **)(**(int **)GFileManager_exref + 4))(local_8,local_c);
    if (pFVar2 == (FArchive *)0x0) {
      if (*(int *)GLog_exref != 0) {
        FOutputDevice::Logf2(local_140,*(EName *)GLog_exref,(ushort *)0x315);
      }
    }
    else {
      iVar6 = FL2GameData::CheckSafePackage(param_1,pFVar2);
      if (iVar6 == 0) {
        FOutputDevice::Logf(local_140,*(ushort **)GError_exref);
      }
      (**(code **)(*(int *)pFVar2 + 4))(&param_2,4);
      for (local_14 = 0; local_14 < (int)param_2; local_14 = local_14 + 1) {
        local_20 = (undefined4 *)thunk_FUN_1032ffc0(0x10);
        local_3c._0_1_ = 1;
        if (local_20 == (undefined4 *)0x0) {
          local_18 = (FL2GameData *)0x0;
        }
        else {
          local_18 = (FL2GameData *)thunk_FUN_104482c0();
        }
        local_3c = (uint)local_3c._1_3_ << 8;
        thunk_FUN_104470e0(pFVar2);
        thunk_FUN_10458800(&local_18);
      }
      (**(code **)(*(int *)pFVar2 + 0x58))();
    }
    (**(code **)(*(int *)pFVar1 + 0x58))();
    thunk_FUN_103254a0(local_8);
    if (pFVar2 != (FArchive *)0x0) {
      (*(code *)**(undefined4 **)pFVar2)(1);
    }
    goto LAB_10461123;
  }
  if (pFVar1 != (FArchive *)0x0) {
    (**(code **)(*(int *)pFVar1 + 0x58))();
  }
  FL2GameData::GetTextFileName(param_1,(ushort *)local_140,(ushort *)L"Obscene");
  pFVar1 = (FArchive *)
           (**(code **)(**(int **)GFileManager_exref + 8))(local_140,0,*(undefined4 *)GNull_exref);
  local_1c = pFVar1;
  if (pFVar1 == (FArchive *)0x0) {
    FOutputDevice::Logf(*(FOutputDevice **)GWarn_exref,(ushort *)*(FOutputDevice **)GWarn_exref);
    local_10 = 0;
  }
  else {
    thunk_FUN_104a14b0();
    local_3c._0_1_ = 2;
    local_c = (**(code **)(*(int *)pFVar1 + 0x2c))();
    FL2GameData::GetTextInformation(param_1,pFVar1,&local_8,&local_c,(int)param_2);
    if (local_8 == (uchar *)0x0) {
      FOutputDevice::Logf(*(FOutputDevice **)GWarn_exref,(ushort *)*(FOutputDevice **)GWarn_exref);
      local_10 = 0;
      local_3c = (uint)local_3c._1_3_ << 8;
      thunk_FUN_104a1770();
    }
    else {
      param_2 = local_8 + 2;
      for (; local_24 = iVar6, iVar6 < 4; iVar6 = iVar6 + 1) {
        thunk_FUN_104a1120(u_obscene_begin_10ae4870 + iVar6 * 0x101,(&DAT_10ae4a70)[iVar6 * 0x101]);
      }
      thunk_FUN_1049f750(param_2);
      iVar6 = thunk_FUN_104a1840();
      if (iVar6 == 0) {
        thunk_FUN_10445eb0(local_88);
        FOutputDevice::Logf((FOutputDevice *)GWarn_exref,*(ushort **)GWarn_exref);
        local_10 = 0;
      }
      else {
        param_2 = (uchar *)thunk_FUN_1049f840();
        for (iVar6 = 0; local_28 = iVar6, iVar6 < (int)param_2; iVar6 = iVar6 + 1) {
          local_30 = thunk_FUN_1032ffc0(0x10);
          local_3c._0_1_ = 3;
          if (local_30 == 0) {
            puVar3 = (undefined4 *)0x0;
          }
          else {
            puVar3 = (undefined4 *)thunk_FUN_104482c0();
          }
          local_3c._0_1_ = 2;
          local_20 = puVar3;
          uVar4 = thunk_FUN_104a0b70(&DAT_1089600c,iVar6);
          *puVar3 = uVar4;
          puVar5 = (ushort *)thunk_FUN_104a0c30(L"string",iVar6);
          FString::operator=((FString *)(puVar3 + 1),puVar5);
          thunk_FUN_10458800(&local_20);
        }
        FOutputDevice::Logf(local_140,*(ushort **)GWarn_exref);
      }
      thunk_FUN_104a16a0();
      (**(code **)(*(int *)pFVar1 + 0x58))();
      thunk_FUN_103254a0(local_8);
      local_3c = (uint)local_3c._1_3_ << 8;
      thunk_FUN_104a1770();
    }
  }
LAB_10461123:
  if (pFVar1 != (FArchive *)0x0) {
    (*(code *)**(undefined4 **)pFVar1)(1);
  }
  ExceptionList = local_44;
  return local_10;
}


