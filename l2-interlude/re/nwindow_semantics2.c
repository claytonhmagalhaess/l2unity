// ==== 101b5360 FUN_101b5360 depth=0 from=raiz callees=ENGINE.DLL::FL2GameData::GetMSData@EXTERNAL:00000089
// strings: 

void __thiscall FUN_101b5360(int param_1,int param_2,int param_3)

{
  int iVar1;
  FL2MagicSkillData *pFVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10219a00;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  iVar1 = *(int *)(param_1 + 4);
  if (((iVar1 == 0) || (*(int *)(iVar1 + 0x18) != param_2)) || (*(int *)(iVar1 + 0x1c) != param_3))
  {
    pFVar2 = FL2GameData::GetMSData((FL2GameData *)GL2GameData_exref,param_2,param_3);
    if (pFVar2 != (FL2MagicSkillData *)0x0) {
      *(FL2MagicSkillData **)(param_1 + 4) = pFVar2;
      ExceptionList = local_10;
      return;
    }
  }
  ExceptionList = local_10;
  return;
}


// ==== 1002db10 FUN_1002db10 depth=0 from=raiz callees=FUN_101b5470@101b5470
// strings: 

void FUN_1002db10(void)

{
  void *pvVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 auStack_10 [4];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_101dc0bb;
  local_c = ExceptionList;
  pvVar1 = (void *)(DAT_103554c4 ^ (uint)auStack_10);
  ExceptionList = &local_c;
  uVar3 = 8;
  iVar2 = (**(code **)**(undefined4 **)GMalloc_exref)(8,&DAT_1022f8a0);
  local_c = (void *)0x0;
  if (iVar2 != 0) {
    FUN_101b5470(uVar3,iVar2);
  }
  ExceptionList = pvVar1;
  return;
}


// ==== 101b5470 FUN_101b5470 depth=1 from=FUN_1002db10 callees=
// strings: 

void __fastcall FUN_101b5470(undefined4 *param_1)

{
  *param_1 = TSingleton<NMagicSkillDataManager>::vftable;
  DAT_10363f48 = param_1;
  *param_1 = NMagicSkillDataManager::vftable;
  param_1[1] = 0;
  return;
}


