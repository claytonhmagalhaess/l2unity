// ==== 1030b816 FL2GameData::GetMSData depth=0 from=raiz callees=
// strings: 

/* public: struct FL2MagicSkillData * __thiscall FL2GameData::GetMSData(int,int) */

FL2MagicSkillData * __thiscall FL2GameData::GetMSData(FL2GameData *this,int param_1,int param_2)

{
  FL2MagicSkillData *pFVar1;
  int iVar2;
  int iStack_18;
  int iStack_14;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0xb816  4739  ?GetMSData@FL2GameData@@QAEPAUFL2MagicSkillData@@HH@Z */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_108142b1;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FArray::FArray((FArray *)&iStack_18);
  uStack_4 = 1;
  thunk_FUN_10458920(&param_1,&iStack_18);
  iVar2 = 0;
  if (0 < iStack_14) {
    do {
      pFVar1 = *(FL2MagicSkillData **)(iStack_18 + iVar2 * 4);
      if (*(int *)(pFVar1 + 0x1c) == param_2) {
        uStack_4 = 0xffffffff;
        thunk_FUN_10463e80();
        ExceptionList = pvStack_c;
        return pFVar1;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < iStack_14);
  }
  uStack_4 = 0xffffffff;
  thunk_FUN_10463e80();
  ExceptionList = pvStack_c;
  return (FL2MagicSkillData *)0x0;
}


