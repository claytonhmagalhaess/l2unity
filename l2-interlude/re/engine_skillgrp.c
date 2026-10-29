// ==== 1046e1d0 FUN_1046e1d0 target=1089a498 callers=MSItemDataLoad@103087f1
// strings: 1089a498=Skillgrp.dat | 10895658=File was corrupted [%s]. Please Full Check!!! | 10a79a18=Failed to Load [%s] !!! | 1089a478=Skillgrp.txt | 10abd1a8=cskill_id | 10abd3aa=dskill_level | 10abcfa8=skill_begin | 10abcfa8=skill_begin | 10a79a80= - Failed to Parse [%s] %dline : Keyword='%s' Token='%s' !!! | 1089a460=skill_id | 1089a444=skill_level | 10899010=icon | 1089a424=operate_type | 1089a40c=is_magic | 108994c8=mp_consume | 1089a3f0=hp_consume | 1089a3d4=cast_range | 1089a3bc=hit_time | 10899674=animation | 1089a3a0=cast_style | 1089a370=skill_visual_effect | 1089a360=debuff | 1089a348=enchanted | 1089a318=enchant_skill_level | 1089a2fc=rumble_self | 1089a2d8=rumble_target | 1089a280=  - Skill Dup!!! ID:[%d] Level:[%d] | 10a799f8= - [%s] loaded. | 10a79afc= - Failed to Decode [%s] !!! | 10a79a48= - Failed to Open [%s] !!! | 10a79a18=Failed to Load [%s] !!! | 

undefined4 FUN_1046e1d0(uchar *param_1)

{
  FArchive *pFVar1;
  FArchive *pFVar2;
  int iVar3;
  uchar *puVar4;
  undefined4 uVar5;
  ushort *puVar6;
  int iVar7;
  int iVar8;
  float10 fVar9;
  EFindName EVar10;
  FOutputDevice local_160 [184];
  undefined4 local_a8;
  undefined1 *local_68;
  void *local_64;
  undefined1 *puStack_60;
  int local_5c;
  int local_50;
  int local_4c;
  int local_48;
  undefined4 local_40;
  undefined4 local_3c;
  int local_38;
  int local_34;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  uchar *local_1c;
  undefined4 local_18;
  FArchive *local_14;
  int local_10;
  FL2GameData *local_c;
  uchar *local_8;
  
  puStack_60 = &LAB_10813c89;
  local_64 = ExceptionList;
  local_68 = &stack0xfffffe94;
  local_5c = 0;
  local_18 = 1;
  local_8 = (uchar *)0x0;
  local_10 = 0;
  local_14 = (FArchive *)0x0;
  ExceptionList = &local_64;
  appStrcpy((ushort *)local_160,(ushort *)L"Skillgrp.dat");
  pFVar1 = (FArchive *)
           (**(code **)(**(int **)GFileManager_exref + 8))(local_160,0,*(undefined4 *)GNull_exref);
  puVar4 = param_1;
  local_14 = pFVar1;
  if (pFVar1 == (FArchive *)0x0) {
    if (param_1 == (uchar *)0x0) {
      if (*(int *)GLog_exref != 0) {
        FOutputDevice::Logf2(local_160,*(EName *)GLog_exref,(ushort *)0x315);
      }
      goto LAB_1046e86f;
    }
  }
  else if (param_1 == (uchar *)0x0) {
    local_1c = param_1;
    local_10 = (**(code **)(*(int *)pFVar1 + 0x2c))();
    FL2GameData::GetTextInformation(local_c,pFVar1,&local_8,&local_10,0);
    pFVar2 = (FArchive *)(**(code **)(**(int **)GFileManager_exref + 4))(local_8,local_10);
    if (pFVar2 == (FArchive *)0x0) {
      if (*(int *)GLog_exref != 0) {
        FOutputDevice::Logf2(local_160,*(EName *)GLog_exref,(ushort *)0x315);
      }
    }
    else {
      iVar3 = FL2GameData::CheckSafePackage(local_c,pFVar2);
      if (iVar3 == 0) {
        FOutputDevice::Logf(local_160,*(ushort **)GError_exref);
      }
      (**(code **)(*(int *)pFVar2 + 4))(&local_1c,4);
      for (local_24 = 0; local_24 < (int)local_1c; local_24 = local_24 + 1) {
        param_1 = (uchar *)thunk_FUN_1032ffc0(0x78);
        local_5c._0_1_ = 1;
        if (param_1 == (uchar *)0x0) {
          iVar3 = 0;
        }
        else {
          iVar3 = thunk_FUN_1044b1f0();
        }
        local_5c = (uint)local_5c._1_3_ << 8;
        local_28 = iVar3;
        thunk_FUN_1044e890(pFVar2,0);
        thunk_FUN_10459a70(iVar3 + 0x18,&local_28);
      }
      (**(code **)(*(int *)pFVar2 + 0x58))();
    }
    (**(code **)(*(int *)pFVar1 + 0x58))();
    thunk_FUN_103254a0(local_8);
    if (pFVar2 != (FArchive *)0x0) {
      (*(code *)**(undefined4 **)pFVar2)(1);
    }
    goto LAB_1046e86f;
  }
  if (pFVar1 != (FArchive *)0x0) {
    (**(code **)(*(int *)pFVar1 + 0x58))();
  }
  appStrcpy((ushort *)local_160,(ushort *)L"Skillgrp.txt");
  pFVar1 = (FArchive *)
           (**(code **)(**(int **)GFileManager_exref + 8))(local_160,0,*(undefined4 *)GNull_exref);
  iVar3 = 0;
  local_14 = pFVar1;
  if (pFVar1 == (FArchive *)0x0) {
    FOutputDevice::Logf(local_160,*(ushort **)GWarn_exref);
    local_18 = 0;
    pFVar1 = local_14;
  }
  else {
    thunk_FUN_104a14b0();
    local_5c._0_1_ = 2;
    local_10 = (**(code **)(*(int *)pFVar1 + 0x2c))();
    FL2GameData::GetTextInformation(local_c,pFVar1,&local_8,&local_10,(int)puVar4);
    if (local_8 == (uchar *)0x0) {
      FOutputDevice::Logf(local_160,*(ushort **)GWarn_exref);
      local_18 = 0;
      local_5c = (uint)local_5c._1_3_ << 8;
      thunk_FUN_104a1770();
      pFVar1 = local_14;
    }
    else {
      param_1 = local_8 + 2;
      for (; local_2c = iVar3, iVar3 < 0x13; iVar3 = iVar3 + 1) {
        thunk_FUN_104a1120(u_skill_begin_10abcfa8 + iVar3 * 0x101,
                           u_cskill_id_10abd1a8[iVar3 * 0x101]);
      }
      thunk_FUN_1049f750(param_1);
      iVar3 = thunk_FUN_104a1840();
      if (iVar3 == 0) {
        thunk_FUN_10445eb0(local_a8);
        FOutputDevice::Logf((FOutputDevice *)GWarn_exref,*(ushort **)GWarn_exref);
        local_18 = 0;
      }
      else {
        local_28 = thunk_FUN_1049f840();
        local_34 = 0;
        while (iVar3 = local_34, local_34 < local_28) {
          local_50 = thunk_FUN_1032ffc0(0x78);
          local_5c._0_1_ = 3;
          if (local_50 == 0) {
            puVar4 = (uchar *)0x0;
          }
          else {
            puVar4 = (uchar *)thunk_FUN_1044b1f0();
          }
          local_5c._0_1_ = 2;
          param_1 = puVar4;
          uVar5 = thunk_FUN_104a0b70(L"skill_id",iVar3);
          *(undefined4 *)(puVar4 + 0x18) = uVar5;
          uVar5 = thunk_FUN_104a0b70(L"skill_level",iVar3);
          *(undefined4 *)(puVar4 + 0x1c) = uVar5;
          EVar10 = 2;
          puVar6 = (ushort *)thunk_FUN_104a0c30(L"icon",iVar3);
          L2FName::L2FName((L2FName *)&local_1c,puVar6,EVar10);
          *(uchar **)(puVar4 + 0x48) = local_1c;
          uVar5 = thunk_FUN_104a0b70(L"operate_type",iVar3);
          *(undefined4 *)(puVar4 + 0x20) = uVar5;
          uVar5 = thunk_FUN_104a0b70(L"is_magic",iVar3);
          *(undefined4 *)(puVar4 + 0x3c) = uVar5;
          uVar5 = thunk_FUN_104a0b70(L"mp_consume",iVar3);
          *(undefined4 *)(puVar4 + 0x24) = uVar5;
          uVar5 = thunk_FUN_104a0b70(L"hp_consume",iVar3);
          *(undefined4 *)(puVar4 + 0x28) = uVar5;
          uVar5 = thunk_FUN_104a0b70(L"cast_range",iVar3);
          *(undefined4 *)(puVar4 + 0x2c) = uVar5;
          fVar9 = (float10)thunk_FUN_104a0bd0(L"hit_time",iVar3);
          *(float *)(puVar4 + 0x34) = (float)fVar9;
          EVar10 = 2;
          puVar6 = (ushort *)thunk_FUN_104a0c30(L"animation",iVar3);
          L2FName::L2FName((L2FName *)&local_40,puVar6,EVar10);
          *(undefined4 *)(puVar4 + 0x40) = local_40;
          uVar5 = thunk_FUN_104a0b70(L"cast_style",iVar3);
          *(undefined4 *)(puVar4 + 0x30) = uVar5;
          EVar10 = 2;
          puVar6 = (ushort *)thunk_FUN_104a0c30(L"skill_visual_effect",iVar3);
          L2FName::L2FName((L2FName *)&local_3c,puVar6,EVar10);
          *(undefined4 *)(puVar4 + 0x44) = local_3c;
          uVar5 = thunk_FUN_104a0b70(L"debuff",iVar3);
          *(undefined4 *)(puVar4 + 0x4c) = uVar5;
          uVar5 = thunk_FUN_104a0b70(L"enchanted",iVar3);
          *(undefined4 *)(puVar4 + 0x68) = uVar5;
          uVar5 = thunk_FUN_104a0b70(L"enchant_skill_level",iVar3);
          *(undefined4 *)(puVar4 + 0x6c) = uVar5;
          iVar7 = thunk_FUN_104a0b70(L"rumble_self",iVar3);
          iVar8 = thunk_FUN_104a0b70(L"rumble_target",iVar3);
          if (iVar7 == 1) {
            puVar4[0x70] = '\t';
            puVar4[0x71] = '\0';
            puVar4[0x72] = '\0';
            puVar4[0x73] = '\0';
          }
          else if (iVar7 == 2) {
            puVar4[0x70] = '\b';
            puVar4[0x71] = '\0';
            puVar4[0x72] = '\0';
            puVar4[0x73] = '\0';
          }
          else if (iVar7 == 3) {
            puVar4[0x70] = '\r';
            puVar4[0x71] = '\0';
            puVar4[0x72] = '\0';
            puVar4[0x73] = '\0';
          }
          else if (iVar7 == 4) {
            puVar4[0x70] = '\x0e';
            puVar4[0x71] = '\0';
            puVar4[0x72] = '\0';
            puVar4[0x73] = '\0';
          }
          else {
            puVar4[0x70] = 0xff;
            puVar4[0x71] = 0xff;
            puVar4[0x72] = 0xff;
            puVar4[0x73] = 0xff;
          }
          if (iVar8 == 1) {
            puVar4[0x74] = '\v';
            puVar4[0x75] = '\0';
            puVar4[0x76] = '\0';
            puVar4[0x77] = '\0';
          }
          else if (iVar8 == 2) {
            puVar4[0x74] = '\n';
            puVar4[0x75] = '\0';
            puVar4[0x76] = '\0';
            puVar4[0x77] = '\0';
          }
          else if (iVar8 == 3) {
            puVar4[0x70] = '\r';
            puVar4[0x71] = '\0';
            puVar4[0x72] = '\0';
            puVar4[0x73] = '\0';
          }
          else if (iVar8 == 4) {
            puVar4[0x70] = '\x0e';
            puVar4[0x71] = '\0';
            puVar4[0x72] = '\0';
            puVar4[0x73] = '\0';
          }
          else {
            puVar4[0x74] = 0xff;
            puVar4[0x75] = 0xff;
            puVar4[0x76] = 0xff;
            puVar4[0x77] = 0xff;
          }
          thunk_FUN_104496a0();
          local_5c = CONCAT31(local_5c._1_3_,4);
          thunk_FUN_10458920(puVar4 + 0x18,&local_4c);
          local_20 = 0;
          for (iVar7 = 0; local_38 = iVar7, iVar7 < local_48; iVar7 = iVar7 + 1) {
            if (*(int *)(*(int *)(local_4c + iVar7 * 4) + 0x1c) == *(int *)(puVar4 + 0x1c)) {
              FOutputDevice::Logf(*(FOutputDevice **)(param_1 + 0x18),*(ushort **)GWarn_exref);
              local_20 = local_20 + 1;
            }
          }
          if (local_20 == 0) {
            thunk_FUN_10459a70(param_1 + 0x18,&param_1);
          }
          local_5c._0_1_ = 2;
          thunk_FUN_10463e80();
          pFVar1 = local_14;
          local_34 = iVar3 + 1;
        }
        FOutputDevice::Logf((FOutputDevice *)GWarn_exref,*(ushort **)GWarn_exref);
      }
      thunk_FUN_104a16a0();
      (**(code **)(*(int *)pFVar1 + 0x58))();
      thunk_FUN_103254a0(local_8);
      local_5c = (uint)local_5c._1_3_ << 8;
      thunk_FUN_104a1770();
      pFVar1 = local_14;
    }
  }
LAB_1046e86f:
  if (pFVar1 != (FArchive *)0x0) {
    (*(code *)**(undefined4 **)pFVar1)(1);
  }
  ExceptionList = local_64;
  return local_18;
}


// ==== 1046f200 FUN_1046f200 target=1089a498 callers=MSItemDataSave@1031283c
// strings: 1089a498=Skillgrp.dat | 1089a584=SkillName | 10895738= - Can not Create [%s] !!! | 10895738= - Can not Create [%s] !!! | 10a799d8= - [%s] saved. | 10a799d8= - [%s] saved. | 

void __thiscall FUN_1046f200(FL2GameData *param_1,int param_2)

{
  int iVar1;
  FArchive *pFVar2;
  FArchive *pFVar3;
  uint uVar4;
  ushort local_138 [64];
  ushort local_b8 [70];
  FL2GameData *local_2c;
  int *local_28;
  int *local_24;
  int local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_10813ce8;
  local_10 = ExceptionList;
  local_14 = &stack0xfffffebc;
  local_8 = 0;
  ExceptionList = &local_10;
  local_2c = param_1;
  appStrcpy(local_b8,(ushort *)L"Skillgrp.dat");
  FL2GameData::GetBinFileName(param_1,local_138,(ushort *)L"SkillName");
  uVar4 = (-(uint)(param_2 != 0) & 0xfffffffe) + 2 | 4;
  local_18 = *(undefined4 *)(*(int *)(param_1 + 0x3d08) + 4);
  pFVar2 = (FArchive *)
           (**(code **)(**(int **)GFileManager_exref + 0xc))
                     (local_b8,uVar4,*(undefined4 *)GNull_exref);
  pFVar3 = (FArchive *)
           (**(code **)(**(int **)GFileManager_exref + 0xc))
                     (local_138,uVar4,*(undefined4 *)GNull_exref);
  if (pFVar2 == (FArchive *)0x0) {
    FOutputDevice::Logf((FOutputDevice *)GWarn_exref,*(ushort **)GWarn_exref);
  }
  else {
    (**(code **)(*(int *)pFVar2 + 4))(&local_18,4);
  }
  if (pFVar3 == (FArchive *)0x0) {
    FOutputDevice::Logf((FOutputDevice *)GWarn_exref,*(ushort **)GWarn_exref);
  }
  else {
    (**(code **)(*(int *)pFVar3 + 4))(&local_18,4);
  }
  local_28 = *(int **)(param_1 + 0x3d08);
  local_1c = 0;
  local_8._0_1_ = 1;
  local_24 = local_28;
  for (local_20 = 0; local_20 < local_24[1]; local_20 = local_20 + 1) {
    iVar1 = *(int *)(*local_24 + 8 + local_20 * 0xc);
    if (pFVar2 != (FArchive *)0x0) {
      thunk_FUN_1044e890(pFVar2,0);
    }
    if (pFVar3 != (FArchive *)0x0) {
      (**(code **)(*(int *)pFVar3 + 4))(iVar1 + 0x18,4);
      (**(code **)(*(int *)pFVar3 + 4))(iVar1 + 0x1c,4);
      thunk_FUN_1044e890(pFVar3,1);
    }
    param_1 = local_2c;
  }
  local_8 = (uint)local_8._1_3_ << 8;
  thunk_FUN_10463bc0();
  if (pFVar2 != (FArchive *)0x0) {
    FL2GameData::MakeSafePackage(param_1,pFVar2);
    (**(code **)(*(int *)pFVar2 + 0x58))();
    FOutputDevice::Logf((FOutputDevice *)GWarn_exref,*(ushort **)GWarn_exref);
  }
  if (pFVar3 != (FArchive *)0x0) {
    FL2GameData::MakeSafePackage(param_1,pFVar3);
    (**(code **)(*(int *)pFVar3 + 0x58))();
    FOutputDevice::Logf((FOutputDevice *)GWarn_exref,*(ushort **)GWarn_exref);
  }
  if (pFVar2 != (FArchive *)0x0) {
    (*(code *)**(undefined4 **)pFVar2)(1);
  }
  if (pFVar3 != (FArchive *)0x0) {
    (*(code *)**(undefined4 **)pFVar3)(1);
  }
  ExceptionList = local_10;
  return;
}


