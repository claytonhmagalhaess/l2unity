// ==== 1014cff0 FUN_1014cff0

void FUN_1014cff0(ushort *param_1)

{
  ushort uVar1;
  int iVar2;
  ushort *puVar3;
  ushort *puVar4;
  FString *pFVar5;
  FString *this;
  int iVar6;
  undefined4 local_9c;
  int local_98 [2];
  FString local_90 [4];
  FString local_8c [8];
  FString *local_84;
  FString *apFStack_80 [2];
  FString aFStack_78 [4];
  FString local_74 [8];
  FString aFStack_6c [8];
  undefined1 auStack_64 [8];
  FString aFStack_5c [4];
  FString aFStack_58 [8];
  FString aFStack_50 [8];
  ushort local_48 [8];
  ushort local_38 [2];
  FString aFStack_34 [4];
  undefined1 auStack_30 [32];
  uint local_10;
  void *local_c;
  undefined1 *local_8;
  int local_4;
  
  local_4 = 0xffffffff;
  local_8 = &LAB_1020bb2e;
  local_c = ExceptionList;
  local_10 = DAT_103554c4 ^ (uint)&stack0xffffff58;
  ExceptionList = &local_c;
  local_9c = 0;
  FString::FString(local_8c);
  local_4 = 0;
  FString::FString((FString *)&stack0xffffff58);
  local_4._0_1_ = 1;
  if (param_1 != (ushort *)0x0) {
    FUN_10145800(param_1);
    iVar6 = 0;
    iVar2 = appStrlen(param_1);
    if (0 < iVar2) {
      do {
        uVar1 = param_1[iVar6];
        if ((ushort)(uVar1 - 0x41) < 0x1a) {
          uVar1 = uVar1 + 0x20;
        }
        FUN_100133a0(local_38,&DAT_10235064,uVar1);
        FString::operator+=((FString *)&stack0xffffff58,local_38);
        iVar6 = iVar6 + 1;
        iVar2 = appStrlen(param_1);
      } while (iVar6 < iVar2);
    }
    local_98[0] = 0;
    if (0 < *(int *)(GL2GameData_exref + 0x3d20)) {
      do {
        iVar6 = local_98[0];
        iVar2 = *(int *)(*(int *)(GL2GameData_exref + 0x3d1c) + local_98[0] * 4);
        if (iVar2 != 0) {
          this = (FString *)(iVar2 + 4);
          puVar3 = FString::operator*(this);
          if (puVar3 != (ushort *)0x0) {
            puVar3 = FString::operator*(this);
            puVar4 = FString::operator*((FString *)&stack0xffffff58);
            puVar3 = appStrstr(puVar4,puVar3);
            if (puVar3 != (ushort *)0x0) {
              local_9c = 1;
              do {
                FString::operator=(local_74,param_1);
                FString::operator*(local_90);
                puVar3 = FString::operator*(this);
                appStrlen(puVar3);
                FString::Len(local_74);
                apFStack_80[0] = (FString *)FString::Right(local_74,(int)aFStack_50);
                apFStack_80[0] = (FString *)FString::Left(aFStack_78,(int)auStack_30);
                FString::operator*(local_84);
                FString::operator*((FString *)(GL2GameData_exref + 0x6cb8c));
                FString::operator*(apFStack_80[0]);
                appSprintf(param_1,(ushort *)L"%s%s%s");
                FString::~FString(aFStack_34);
                FString::~FString(aFStack_58);
                FString::Left((FString *)local_98,(int)auStack_64);
                FString::Len((FString *)&local_9c);
                FString::Right((FString *)&local_9c,(int)local_74);
                FString::operator*((FString *)(GL2GameData_exref + 0x6cb8c));
                pFVar5 = (FString *)FString::operator+(aFStack_6c,local_48);
                pFVar5 = (FString *)FString::operator+(pFVar5,aFStack_58);
                local_4._0_1_ = 7;
                FString::operator=((FString *)&stack0xffffff58,pFVar5);
                local_4._0_1_ = 6;
                FString::~FString(aFStack_5c);
                local_4._0_1_ = 5;
                FString::~FString(aFStack_50);
                FString::operator*((FString *)&stack0xffffff58);
                local_4._0_1_ = 4;
                FString::~FString((FString *)apFStack_80);
                local_4._0_1_ = 1;
                FString::~FString(local_74);
                puVar3 = FString::operator*(this);
                puVar4 = FString::operator*((FString *)&stack0xffffff58);
                puVar3 = appStrstr(puVar4,puVar3);
                iVar6 = local_98[0];
              } while (puVar3 != (ushort *)0x0);
            }
          }
        }
        local_98[0] = iVar6 + 1;
      } while (local_98[0] < *(int *)(GL2GameData_exref + 0x3d20));
    }
  }
  local_4 = (uint)local_4._1_3_ << 8;
  FString::~FString((FString *)&stack0xffffff58);
  local_4 = 0xffffffff;
  FString::~FString(local_8c);
  ExceptionList = local_c;
  __security_check_cookie(local_10 ^ (uint)&stack0xffffff58);
  return;
}


// ==== 1014d380 FUN_1014d380

void FUN_1014d380(void)

{
  int iVar1;
  ushort *puVar2;
  undefined4 uVar3;
  int in_ECX;
  int iVar4;
  wchar_t *pwVar5;
  wchar_t *pwVar6;
  uint uStack_74;
  undefined4 local_64;
  undefined4 local_60;
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
  FString local_34 [20];
  int local_20;
  int local_1c;
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  puStack_c = &LAB_1020bb72;
  local_10 = ExceptionList;
  uStack_74 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_74;
  local_8 = 0;
  if (*(int *)(in_ECX + 0x50ac) != 0) {
    ExceptionList = &local_10;
    local_18 = in_ECX;
    for (iVar4 = 0; local_1c = iVar4, iVar4 < *(int *)(in_ECX + 0x514c); iVar4 = iVar4 + 1) {
      if ((*(int *)(*(int *)(in_ECX + 0x5148) + iVar4 * 4) != 0) &&
         (iVar1 = FUN_10057920(), in_ECX = local_18, iVar1 != 0)) {
        FUN_10057590(local_34);
        local_8 = CONCAT31(local_8._1_3_,1);
        iVar1 = FString::operator==(local_34,(ushort *)&DAT_1022f9f8);
        if (iVar1 != 0) {
          iVar1 = FUN_100578a0();
          puVar2 = appItoa(iVar1);
          FString::operator=(local_34,puVar2);
        }
        local_40 = 0;
        local_44 = 0;
        local_3c = 0;
        local_38 = 0;
        FUN_10058770(&local_44);
        iVar1 = **(int **)GConfig_exref;
        pwVar6 = L"WindowsInfo.ini";
        pwVar5 = L"posX";
        uVar3 = local_44;
        puVar2 = FString::operator*(local_34);
        (**(code **)(iVar1 + 0x28))(puVar2,pwVar5,uVar3,pwVar6);
        iVar1 = **(int **)GConfig_exref;
        pwVar6 = L"WindowsInfo.ini";
        pwVar5 = L"posY";
        uVar3 = local_40;
        puVar2 = FString::operator*(local_34);
        (**(code **)(iVar1 + 0x28))(puVar2,pwVar5,uVar3,pwVar6);
        local_8 = local_8 & 0xffffff00;
        FString::~FString(local_34);
        in_ECX = local_18;
      }
    }
    for (iVar4 = 0; local_20 = iVar4, iVar4 < *(int *)(in_ECX + 0x5158); iVar4 = iVar4 + 1) {
      if ((*(int *)(*(int *)(in_ECX + 0x5154) + iVar4 * 4) != 0) &&
         (iVar1 = FUN_100579a0(), in_ECX = local_18, iVar1 != 0)) {
        FUN_10057590(local_34);
        local_8 = CONCAT31(local_8._1_3_,2);
        iVar1 = FString::operator==(local_34,(ushort *)&DAT_1022f9f8);
        if (iVar1 != 0) {
          iVar1 = FUN_100578a0();
          puVar2 = appItoa(iVar1);
          FString::operator=(local_34,puVar2);
        }
        local_50 = 0;
        local_54 = 0;
        local_4c = 0;
        local_48 = 0;
        FUN_10058770(&local_54);
        iVar1 = **(int **)GConfig_exref;
        uVar3 = FUN_101c19e0(L"WindowsInfo.ini");
        pwVar5 = L"width";
        puVar2 = FString::operator*(local_34);
        (**(code **)(iVar1 + 0x28))(puVar2,pwVar5,uVar3);
        iVar1 = **(int **)GConfig_exref;
        uVar3 = FUN_101c19e0(L"WindowsInfo.ini");
        pwVar5 = L"height";
        puVar2 = FString::operator*(local_34);
        (**(code **)(iVar1 + 0x28))(puVar2,pwVar5,uVar3);
        local_8 = local_8 & 0xffffff00;
        FString::~FString(local_34);
        in_ECX = local_18;
      }
    }
    local_60 = 0;
    local_64 = 0;
    local_5c = 0;
    local_58 = 0;
    iVar1 = FUN_100578a0();
    FUN_10058770(&local_64);
    iVar4 = **(int **)GConfig_exref;
    uVar3 = FUN_101c19e0(L"WindowsInfo.ini");
    pwVar5 = L"Height";
    puVar2 = appItoa(iVar1);
    (**(code **)(iVar4 + 0x28))(puVar2,pwVar5,uVar3);
    (**(code **)(**(int **)GConfig_exref + 0x34))(0,L"WindowsInfo.ini");
    ExceptionList = local_10;
    return;
  }
  return;
}


// ==== 1014d66e Catch@1014d66e

void Catch_1014d66e(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x20) = *(undefined4 *)(unaff_EBP + -0x24);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x20,&DAT_102a47f0);
}


// ==== 1014d682 Catch@1014d682

void Catch_1014d682(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NConsoleWnd::SaveWndInfo");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1014d6a0 FUN_1014d6a0

void FUN_1014d6a0(void)

{
  int *piVar1;
  void **ppvVar2;
  int iVar3;
  ushort *puVar4;
  uint uVar5;
  undefined4 uVar6;
  int in_ECX;
  int iVar7;
  int *piVar8;
  wchar_t *pwVar9;
  wchar_t *pwVar10;
  uint uStack_7c;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  FString local_3c [20];
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  puStack_c = &LAB_1020bba2;
  local_10 = ExceptionList;
  uStack_7c = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_7c;
  iVar7 = 0;
  local_8 = 0;
  ppvVar2 = &local_10;
  local_20 = in_ECX;
  if (*(int *)(in_ECX + 0x50ac) == 0) {
    return;
  }
  for (; ExceptionList = ppvVar2, local_24 = iVar7, iVar7 < *(int *)(in_ECX + 0x514c);
      iVar7 = iVar7 + 1) {
    piVar1 = *(int **)(*(int *)(in_ECX + 0x5148) + iVar7 * 4);
    if (piVar1 != (int *)0x0) {
      iVar3 = FUN_10057920();
      if (iVar3 != 0) {
        FUN_10057590(local_3c);
        local_8 = CONCAT31(local_8._1_3_,1);
        iVar3 = FString::operator==(local_3c,(ushort *)&DAT_1022f9f8);
        if (iVar3 != 0) {
          iVar3 = FUN_100578a0();
          puVar4 = appItoa(iVar3);
          FString::operator=(local_3c,puVar4);
        }
        local_68 = 0;
        local_6c = 0;
        local_64 = 0;
        local_60 = 0;
        FUN_10058770(&local_6c);
        iVar3 = **(int **)GConfig_exref;
        pwVar10 = L"WindowsInfo.ini";
        piVar8 = &local_18;
        pwVar9 = L"posX";
        puVar4 = FString::operator*(local_3c);
        iVar3 = (**(code **)(iVar3 + 4))(puVar4,pwVar9,piVar8,pwVar10);
        if (iVar3 != 0) {
          iVar3 = **(int **)GConfig_exref;
          pwVar10 = L"WindowsInfo.ini";
          piVar8 = &local_1c;
          pwVar9 = L"posY";
          puVar4 = FString::operator*(local_3c);
          iVar3 = (**(code **)(iVar3 + 4))(puVar4,pwVar9,piVar8,pwVar10);
          if (iVar3 != 0) {
            (**(code **)(*piVar1 + 0xc0))(local_18,local_1c,0,0,0,0,3);
            iVar3 = FUN_1005c100();
            if (iVar3 != 0) {
              (**(code **)(*piVar1 + 200))();
            }
          }
        }
        local_8 = local_8 & 0xffffff00;
        FString::~FString(local_3c);
        in_ECX = local_20;
      }
    }
    ppvVar2 = ExceptionList;
  }
  for (iVar7 = 0; iVar7 < *(int *)(in_ECX + 0x5158); iVar7 = iVar7 + 1) {
    piVar1 = *(int **)(*(int *)(in_ECX + 0x5154) + iVar7 * 4);
    if (piVar1 != (int *)0x0) {
      local_28 = iVar7;
      iVar3 = FUN_100579a0();
      if (iVar3 != 0) {
        FUN_10057590(local_3c);
        local_8 = CONCAT31(local_8._1_3_,2);
        iVar3 = FString::operator==(local_3c,(ushort *)&DAT_1022f9f8);
        if (iVar3 != 0) {
          iVar3 = FUN_100578a0();
          puVar4 = appItoa(iVar3);
          FString::operator=(local_3c,puVar4);
        }
        local_58 = 0;
        local_5c = 0;
        local_54 = 0;
        local_50 = 0;
        FUN_10058770(&local_5c);
        iVar3 = **(int **)GConfig_exref;
        pwVar10 = L"WindowsInfo.ini";
        piVar8 = &local_1c;
        pwVar9 = L"width";
        puVar4 = FString::operator*(local_3c);
        iVar3 = (**(code **)(iVar3 + 4))(puVar4,pwVar9,piVar8,pwVar10);
        if (iVar3 != 0) {
          iVar3 = **(int **)GConfig_exref;
          pwVar10 = L"WindowsInfo.ini";
          piVar8 = &local_18;
          pwVar9 = L"height";
          puVar4 = FString::operator*(local_3c);
          iVar3 = (**(code **)(iVar3 + 4))(puVar4,pwVar9,piVar8,pwVar10);
          if (iVar3 != 0) {
            uVar5 = (**(code **)(*piVar1 + 0x84))();
            if ((uVar5 & 0x8000000) == 0) {
              (**(code **)(*piVar1 + 0x128))((float)local_1c,(float)local_18);
            }
            else {
              local_48 = 0;
              local_4c = 0;
              local_44 = 0;
              local_40 = 0;
              FUN_10058770(&local_4c);
              iVar3 = FUN_10057f00();
              if (iVar3 == 2) {
                iVar3 = *piVar1;
                uVar6 = FUN_101c19e0();
                (**(code **)(iVar3 + 0x68))(0x501,0x1f1f1f1f,uVar6);
              }
              else if (iVar3 == 3) {
                iVar3 = *piVar1;
                uVar6 = FUN_101c19e0();
                (**(code **)(iVar3 + 0x68))(0x501,0x1f1f1f1f,uVar6);
              }
            }
          }
        }
        iVar3 = **(int **)GConfig_exref;
        uVar6 = FUN_101c19e0(L"WindowsInfo.ini");
        pwVar9 = L"width";
        puVar4 = FString::operator*(local_3c);
        (**(code **)(iVar3 + 0x28))(puVar4,pwVar9,uVar6);
        iVar3 = **(int **)GConfig_exref;
        uVar6 = FUN_101c19e0(L"WindowsInfo.ini");
        pwVar9 = L"height";
        puVar4 = FString::operator*(local_3c);
        (**(code **)(iVar3 + 0x28))(puVar4,pwVar9,uVar6);
        local_8 = local_8 & 0xffffff00;
        FString::~FString(local_3c);
        in_ECX = local_20;
      }
    }
  }
  ExceptionList = local_10;
  return;
}


// ==== 1014da59 Catch@1014da59

void Catch_1014da59(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x28) = *(undefined4 *)(unaff_EBP + -0x2c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x28,&DAT_102a47f0);
}


// ==== 1014da6d Catch@1014da6d

void Catch_1014da6d(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NConsoleWnd::ReArrangeSavedWnd");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1014da90 FUN_1014da90

void FUN_1014da90(void)

{
  UObject *this;
  uint *puVar1;
  int iVar2;
  int in_ECX;
  int *piVar3;
  uint uStack_3c;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1020bbc0;
  local_10 = ExceptionList;
  uStack_3c = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_3c;
  local_8 = 0;
  if ((*(int *)(in_ECX + 0x50ac) != 0) &&
     ((*(int *)GSEKScreenX_exref != 0 || (*(int *)GSEKScreenY_exref != 0)))) {
    ExceptionList = &local_10;
    puVar1 = &uStack_3c;
    if (*(int *)GIsOnlyXMLUI_exref == 0) {
      for (piVar3 = *(int **)(*(int *)(in_ECX + 0x50ac) + 0x48); puVar1 = (uint *)local_14,
          piVar3 != (int *)0x0; piVar3 = (int *)piVar3[2]) {
        this = *(UObject **)(*piVar3 + 4);
        iVar2 = UObject::IsA(this,(UClass *)&DAT_1039dac0);
        if (iVar2 == 0) {
          iVar2 = FUN_1005e820();
          if (iVar2 != 0) {
            (**(code **)(*(int *)this + 0x158))();
          }
        }
      }
    }
    local_14 = (undefined1 *)puVar1;
    local_28 = 0;
    local_2c = 0;
    local_24 = 0;
    local_20 = 0;
    FUN_1005d0a0(&local_2c);
    (**(code **)(**(int **)(in_ECX + 0x50ac) + 0x128))
              ((float)*(int *)GSEKScreenX_exref,(float)*(int *)GSEKScreenY_exref);
    ExceptionList = local_10;
    return;
  }
  return;
}


// ==== 1014dbb0 Catch@1014dbb0

void Catch_1014dbb0(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1014dbc4 Catch@1014dbc4

void Catch_1014dbc4(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NConsoleWnd::RearrangePosition");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1014dbf0 FUN_1014dbf0

void FUN_1014dbf0(void)

{
  int iVar1;
  int in_ECX;
  int *piVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1020bbe0;
  local_10 = ExceptionList;
  local_8 = 0;
  if (*(int *)(in_ECX + 0x50ac) == 0) {
    return;
  }
  ExceptionList = &local_10;
  (**(code **)(**(int **)(in_ECX + 0x50ac) + 0x128))
            ((float)*(int *)GSEKScreenX_exref,(float)*(int *)GSEKScreenY_exref);
  for (piVar2 = *(int **)(*(int *)(in_ECX + 0x50ac) + 0x48); piVar2 != (int *)0x0;
      piVar2 = (int *)piVar2[2]) {
    iVar1 = UObject::IsA(*(UObject **)(*piVar2 + 4),(UClass *)&DAT_1039dac0);
    if (iVar1 == 0) {
      (**(code **)(**(int **)(*piVar2 + 4) + 200))();
    }
  }
  ExceptionList = local_10;
  return;
}


// ==== 1014dcc6 Catch@1014dcc6

void Catch_1014dcc6(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1014dcda Catch@1014dcda

void Catch_1014dcda(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NConsoleWnd::DefaultPosition");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1014dd00 FUN_1014dd00

undefined4 FUN_1014dd00(void)

{
  int iVar1;
  undefined4 uVar2;
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1020bc00;
  local_10 = ExceptionList;
  local_8 = 0;
  iVar1 = *(int *)(*(int *)(**(int **)(*(int *)(*(int *)(in_ECX + 0x50) + 0x54) + 0x38) + 0x3c) +
                  0x3bc);
  if (iVar1 != 0) {
    ExceptionList = &local_10;
    uVar2 = FUN_10145910(*(undefined4 *)(iVar1 + 0x60));
    ExceptionList = local_10;
    return uVar2;
  }
  return 0;
}


// ==== 1014dd79 Catch@1014dd79

void Catch_1014dd79(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1014dd8d Catch@1014dd8d

void Catch_1014dd8d(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NConsoleWnd::GetPlayerInfo");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1014ddb0 FUN_1014ddb0

undefined4 FUN_1014ddb0(void)

{
  int in_ECX;
  
  return *(undefined4 *)
          (*(int *)(**(int **)(*(int *)(*(int *)(in_ECX + 0x50) + 0x54) + 0x38) + 0x3c) + 0x3bc);
}


// ==== 1014ddd0 FUN_1014ddd0

undefined4 FUN_1014ddd0(void)

{
  int iVar1;
  int iVar2;
  int in_ECX;
  undefined4 uVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1020bc20;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  iVar2 = *(int *)(*(int *)(**(int **)(*(int *)(*(int *)(in_ECX + 0x50) + 0x54) + 0x38) + 0x3c) +
                  0x3bc);
  uVar3 = 0;
  if (((*(int *)(in_ECX + 0x50) != 0) && (iVar2 != 0)) && (*(int *)(iVar2 + 0x14d8) != 0)) {
    iVar1 = (**(code **)(**(int **)(iVar2 + 0x14d8) + 0x35c))();
    if (iVar1 != 0) {
      iVar2 = (**(code **)(**(int **)(iVar2 + 0x14d8) + 0x35c))();
      uVar3 = FUN_10145910(*(undefined4 *)(iVar2 + 0x60));
    }
  }
  ExceptionList = local_10;
  return uVar3;
}


// ==== 1014de75 Catch@1014de75

void Catch_1014de75(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 1014de89 Catch@1014de89

void Catch_1014de89(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NConsoleWnd::GetSelectedActor");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1014deb0 FUN_1014deb0

void FUN_1014deb0(void)

{
  int iVar1;
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1020bc40;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  iVar1 = *(int *)(*(int *)(**(int **)(*(int *)(*(int *)(in_ECX + 0x50) + 0x54) + 0x38) + 0x3c) +
                  0x3bc);
  if (((*(int *)(in_ECX + 0x50) != 0) && (iVar1 != 0)) && (*(int *)(iVar1 + 0x14d8) != 0)) {
    (**(code **)(**(int **)(iVar1 + 0x14d8) + 0x364))();
  }
  ExceptionList = local_10;
  return;
}


// ==== 1014df30 Catch@1014df30

void Catch_1014df30(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 1014df44 Catch@1014df44

void Catch_1014df44(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NConsoleWnd::GetSelectedCreatureID");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1014df70 FUN_1014df70

undefined4 FUN_1014df70(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1020bc60;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  iVar1 = *(int *)(*(int *)(**(int **)(*(int *)(*(int *)(in_ECX + 0x50) + 0x54) + 0x38) + 0x3c) +
                  0x3bc);
  if (((*(int *)(in_ECX + 0x50) != 0) && (iVar1 != 0)) && (*(int *)(iVar1 + 0x14d8) != 0)) {
    iVar2 = (**(code **)(**(int **)(iVar1 + 0x14d8) + 0x35c))();
    if (iVar2 != 0) {
      uVar3 = (**(code **)(**(int **)(iVar1 + 0x14d8) + 0x35c))();
      ExceptionList = local_10;
      return uVar3;
    }
  }
  ExceptionList = local_10;
  return 0;
}


// ==== 1014e011 Catch@1014e011

void Catch_1014e011(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1014e025 Catch@1014e025

void Catch_1014e025(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NConsoleWnd::GetSelectedActorPointer");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1014e050 FUN_1014e050

ushort * FUN_1014e050(int param_1)

{
  int *piVar1;
  ushort *puVar2;
  int iVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1020bc80;
  local_10 = ExceptionList;
  local_8 = 0;
  iVar3 = 0;
  while( true ) {
    if (*(int *)(GL2GameData_exref + 0x3d30) <= iVar3) {
      return (ushort *)0x0;
    }
    piVar1 = *(int **)(*(int *)(GL2GameData_exref + 0x3d2c) + iVar3 * 4);
    if ((*piVar1 != 0) && (piVar1[1] == param_1)) break;
    iVar3 = iVar3 + 1;
  }
  ExceptionList = &local_10;
  puVar2 = FString::operator*((FString *)(piVar1 + 10));
  ExceptionList = local_10;
  return puVar2;
}


// ==== 1014e0ea Catch@1014e0ea

void Catch_1014e0ea(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 1014e0fe Catch@1014e0fe

void Catch_1014e0fe(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NConsoleWnd::GetActionIcon");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1014e120 FUN_1014e120

ushort * FUN_1014e120(int param_1)

{
  int *piVar1;
  ushort *puVar2;
  int iVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1020bca0;
  local_10 = ExceptionList;
  local_8 = 0;
  iVar3 = 0;
  while( true ) {
    if (*(int *)(GL2GameData_exref + 0x3d30) <= iVar3) {
      return (ushort *)0x0;
    }
    piVar1 = *(int **)(*(int *)(GL2GameData_exref + 0x3d2c) + iVar3 * 4);
    if ((*piVar1 != 0) && (piVar1[1] == param_1)) break;
    iVar3 = iVar3 + 1;
  }
  ExceptionList = &local_10;
  puVar2 = FString::operator*((FString *)(piVar1 + 7));
  ExceptionList = local_10;
  return puVar2;
}


// ==== 1014e1ba Catch@1014e1ba

void Catch_1014e1ba(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 1014e1ce Catch@1014e1ce

void Catch_1014e1ce(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NConsoleWnd::GetActionName");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1014e1f0 FUN_1014e1f0

void FUN_1014e1f0(undefined4 param_1,int param_2,int param_3,undefined4 param_4)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  switch(param_1) {
  case 1:
  case 2:
    if (param_2 != 0x4000) goto switchD_1014e204_caseD_3;
  case 5:
  case 8:
    uVar1 = *(undefined8 *)(&DAT_1027df78 + param_3 * 8);
    break;
  case 3:
  case 4:
  case 7:
switchD_1014e204_caseD_3:
    uVar1 = *(undefined8 *)(&DAT_1027df48 + param_3 * 8);
    break;
  case 6:
    uVar1 = *(undefined8 *)(&DAT_1027dfa8 + param_3 * 8);
  }
  FUN_10146910(param_4);
  FUN_101c19e0(uVar1);
  return;
}


// ==== 1014e290 FUN_1014e290

void FUN_1014e290(undefined4 param_1,int param_2,int param_3,undefined4 param_4)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  switch(param_1) {
  case 1:
  case 2:
    if (param_2 != 0x4000) goto switchD_1014e2a4_caseD_3;
  case 5:
  case 8:
    uVar1 = *(undefined8 *)(&DAT_10351050 + param_3 * 8);
    break;
  case 3:
  case 4:
  case 7:
switchD_1014e2a4_caseD_3:
    uVar1 = *(undefined8 *)(&DAT_10351020 + param_3 * 8);
    break;
  case 6:
    uVar1 = *(undefined8 *)(&DAT_10351080 + param_3 * 8);
  }
  FUN_10146910(param_4);
  FUN_101c19e0(uVar1);
  return;
}


// ==== 1014e330 FUN_1014e330

void FUN_1014e330(int param_1,undefined4 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(&DAT_1027dfd8 + param_1 * 8);
  FUN_101469a0(param_2);
  FUN_101c19e0(uVar1);
  return;
}


// ==== 1014e370 FUN_1014e370

ushort * FUN_1014e370(undefined4 param_1)

{
  undefined4 uVar1;
  ushort *puVar2;
  
  uVar1 = FUN_10147480(param_1);
  switch(uVar1) {
  case 0:
  case 9:
    puVar2 = FString::operator*((FString *)(GL2GameData_exref + 0x6d1d4));
    return puVar2;
  case 1:
  case 10:
    puVar2 = FString::operator*((FString *)(GL2GameData_exref + 0x6d1e0));
    return puVar2;
  case 2:
  case 0xb:
    puVar2 = FString::operator*((FString *)(GL2GameData_exref + 0x6d1ec));
    return puVar2;
  case 3:
  case 0xc:
    puVar2 = FString::operator*((FString *)(GL2GameData_exref + 0x6d1f8));
    return puVar2;
  case 4:
  case 0xd:
    puVar2 = FString::operator*((FString *)(GL2GameData_exref + 0x6d204));
    return puVar2;
  case 5:
  case 0xe:
    puVar2 = FString::operator*((FString *)(GL2GameData_exref + 0x6d210));
    return puVar2;
  case 6:
  case 0xf:
    puVar2 = FString::operator*((FString *)(GL2GameData_exref + 0x6d21c));
    return puVar2;
  case 7:
    puVar2 = FString::operator*((FString *)(GL2GameData_exref + 0x6b110));
    return puVar2;
  case 8:
    puVar2 = FString::operator*((FString *)(GL2GameData_exref + 0x6b11c));
    return puVar2;
  default:
    return (ushort *)0x0;
  }
}


// ==== 1014e4a0 FUN_1014e4a0

undefined4 FUN_1014e4a0(void)

{
  int iVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1020bcc0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  iVar1 = FUN_1014dd00();
  if (iVar1 == 0) {
    ExceptionList = local_10;
    return 0xffffffff;
  }
  uVar2 = FUN_10146260(*(undefined4 *)(iVar1 + 0x2c0));
  ExceptionList = local_10;
  return uVar2;
}


// ==== 1014e512 Catch@1014e512

void Catch_1014e512(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1014e526 Catch@1014e526

void Catch_1014e526(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NConsoleWnd::GetClassStep");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1014e550 FUN_1014e550

undefined4 FUN_1014e550(uint param_1,int param_2)

{
  int iVar1;
  
  if (((param_1 & 6) != 0) && (iVar1 = FUN_1014dd00(), iVar1 != 0)) {
    if (*(int *)(iVar1 + 0x9c) == param_2) {
      return 8;
    }
    if (*(int *)(iVar1 + 0xa0) == param_2) {
      return 9;
    }
  }
  if (((param_1 & 0x30) != 0) && (iVar1 = FUN_1014dd00(), iVar1 != 0)) {
    if (*(int *)(iVar1 + 0xa8) == param_2) {
      return 0xd;
    }
    if (*(int *)(iVar1 + 0xac) == param_2) {
      return 0xe;
    }
  }
  if ((int)param_1 < 0x1001) {
    if (param_1 == 0x1000) {
      return 0xc;
    }
    if ((int)param_1 < 0x101) {
      if (param_1 == 0x100) {
        return 7;
      }
      switch(param_1) {
      case 1:
        return 3;
      case 8:
        return 4;
      case 0x40:
        return 1;
      case 0x80:
        return 5;
      }
    }
    else {
      if (param_1 == 0x200) {
        return 10;
      }
      if (param_1 == 0x400) {
        return 6;
      }
      if (param_1 == 0x800) {
        return 0xb;
      }
    }
  }
  else if ((int)param_1 < 0x10001) {
    if (param_1 == 0x10000) {
      return 0;
    }
    if (param_1 == 0x2000) {
      return 0x13;
    }
    if (param_1 == 0x4000) {
      return 0x10;
    }
    if (param_1 == 0x8000) {
      return 0xf;
    }
  }
  else {
    if (param_1 == 0x20000) {
      return 0x11;
    }
    if (param_1 == 0x40000) {
      return 2;
    }
    if (param_1 == 0x80000) {
      return 0x12;
    }
  }
  return 0xffffffff;
}


// ==== 1014e7a0 FUN_1014e7a0

undefined4 FUN_1014e7a0(void)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1020bce0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_1014ab80();
  ExceptionList = local_10;
  return 1;
}


// ==== 1014e7ee Catch@1014e7ee

void Catch_1014e7ee(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1014e802 Catch@1014e802

void Catch_1014e802(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NConsoleWnd::DestroyForXMLConvert");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1014e820 FUN_1014e820

undefined4 FUN_1014e820(void)

{
  int iVar1;
  int *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1020bd00;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  iVar1 = (**(code **)(*in_ECX + 0x7b4))();
  if (iVar1 == 0) {
    ExceptionList = local_10;
    return 1;
  }
  iVar1 = FUN_1014dd00();
  if (iVar1 == 0) {
    ExceptionList = local_10;
    return 0;
  }
  ExceptionList = local_10;
  return *(undefined4 *)(iVar1 + 0x250);
}


// ==== 1014e8b0 Catch@1014e8b0

void Catch_1014e8b0(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1014e8c4 Catch@1014e8c4

void Catch_1014e8c4(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NConsoleWnd::GetBuilderAuthority");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1014e8f0 FUN_1014e8f0

void FUN_1014e8f0(void)

{
  int iVar1;
  ushort *puVar2;
  FString *this;
  int in_ECX;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uStack_3c;
  FString local_2c [20];
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_1020bd29;
  local_10 = ExceptionList;
  uStack_3c = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_3c;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_101392c0(L"SYS: Client Builder Command History.",0xffdcdcdc,0,0);
  local_18 = 0;
  while (local_18 < *(int *)(in_ECX + 0x5174)) {
    iVar1 = local_18 + 1;
    puVar2 = FString::operator*((FString *)(*(int *)(in_ECX + 0x5170) + local_18 * 0xc));
    this = (FString *)FString::Printf((ushort *)local_2c,L"SYS: %d : %s",iVar1,puVar2);
    local_8._0_1_ = 1;
    uVar5 = 0;
    uVar4 = 0;
    uVar3 = 0xffdcdcdc;
    puVar2 = FString::operator*(this);
    FUN_101392c0(puVar2,uVar3,uVar4,uVar5);
    local_8 = (uint)local_8._1_3_ << 8;
    FString::~FString(local_2c);
    local_18 = iVar1;
  }
  FUN_101392c0(L"SYS: ///re commandNo",0xffdcdcdc,0,0);
  ExceptionList = local_10;
  return;
}


// ==== 1014e9f0 Catch@1014e9f0

void Catch_1014e9f0(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 1014ea04 Catch@1014ea04

void Catch_1014ea04(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NConsoleWnd::PrintReCommandList");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1014ea30 FUN_1014ea30

undefined4
FUN_1014ea30(undefined4 param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5,
            undefined4 param_6,undefined4 param_7)

{
  undefined4 uVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  undefined4 uVar6;
  ULevel *pUVar7;
  int iVar8;
  int *piVar9;
  FMemMark local_c [12];
  
  FMemMark::FMemMark(local_c,(FMemStack *)GMem_exref);
  iVar5 = **(int **)(*(int *)(*(int *)(DAT_103663bc + 0x50) + 0x54) + 0x38);
  uVar6 = 0;
  pUVar7 = (ULevel *)0x0;
  if (iVar5 != 0) {
    pUVar7 = AActor::GetLevel(*(AActor **)(iVar5 + 0x3c));
  }
  if ((*(int *)(*(int *)(**(int **)(*(int *)(*(int *)(DAT_103663bc + 0x50) + 0x54) + 0x38) + 0x3c) +
               0x3bc) != 0) && (pUVar7 != (ULevel *)0x0)) {
    iVar5 = *(int *)pUVar7;
    uVar1 = FUN_101c19e0();
    piVar2 = (int *)(**(code **)(iVar5 + 0xe8))(GMem_exref,param_4,param_5,param_6,param_7,uVar1);
    if ((piVar2 != (int *)0x0) &&
       (uVar6 = FUN_10145910(*(undefined4 *)(piVar2[1] + 0x60)), 0 < param_2)) {
      iVar5 = 0;
      piVar3 = piVar2;
      do {
        piVar3 = (int *)*piVar3;
        iVar5 = iVar5 + 1;
      } while (piVar3 != (int *)0x0);
      piVar3 = piVar2 + iVar5 * 0xc + -0xc;
      iVar8 = 0;
      piVar9 = (int *)0x0;
      if (0 < iVar5) {
        do {
          piVar4 = piVar2;
          if (*(int *)(piVar2[1] + 0x60) == param_2) {
            if (param_3 == 1) {
              piVar4 = (int *)0x0;
              if (*piVar2 != 0) {
                uVar6 = *(undefined4 *)(*(int *)(*piVar2 + 4) + 0x60);
                goto LAB_1014eb6f;
              }
            }
            else if ((*(int *)(piVar2[1] + 0x60) == param_2) && (param_3 == 0)) {
              if (piVar9 == (int *)0x0) {
                if (piVar3 == (int *)0x0) goto LAB_1014eb4a;
                uVar6 = *(undefined4 *)(piVar3[1] + 0x60);
              }
              else {
                uVar6 = *(undefined4 *)(piVar9[1] + 0x60);
              }
LAB_1014eb6f:
              uVar6 = FUN_10145910(uVar6);
              break;
            }
          }
LAB_1014eb4a:
          piVar2 = piVar4;
          if (piVar4 != (int *)0x0) {
            piVar2 = (int *)*piVar4;
          }
          iVar8 = iVar8 + 1;
          piVar9 = piVar4;
        } while (iVar8 < iVar5);
      }
    }
  }
  FMemMark::Pop(local_c);
  return uVar6;
}


// ==== 1014eb90 FUN_1014eb90

wchar_t * FUN_1014eb90(undefined4 param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_10147480(param_1);
  switch(uVar1) {
  case 0:
    return L"L2UI_CH3.PartyWnd.party_styleicon1";
  case 1:
    return L"L2UI_CH3.PartyWnd.party_styleicon2";
  case 2:
    return L"L2UI_CH3.PartyWnd.party_styleicon3";
  case 3:
    return L"L2UI_CH3.PartyWnd.party_styleicon4";
  case 4:
    return L"L2UI_CH3.PartyWnd.party_styleicon5";
  case 5:
    return L"L2UI_CH3.PartyWnd.party_styleicon6";
  case 6:
    return L"L2UI_CH3.PartyWnd.party_styleicon7";
  case 7:
    return L"L2UI_CH3.PartyWnd.party_styleicon1_1";
  case 8:
    return L"L2UI_CH3.PartyWnd.party_styleicon1_2";
  case 9:
    return L"L2UI_CH3.PartyWnd.party_styleicon1_3";
  case 10:
    return L"L2UI_CH3.PartyWnd.party_styleicon2_3";
  case 0xb:
    return L"L2UI_CH3.PartyWnd.party_styleicon3_3";
  case 0xc:
    return L"L2UI_CH3.PartyWnd.party_styleicon4_3";
  case 0xd:
    return L"L2UI_CH3.PartyWnd.party_styleicon5_3";
  case 0xe:
    return L"L2UI_CH3.PartyWnd.party_styleicon6_3";
  case 0xf:
    return L"L2UI_CH3.PartyWnd.party_styleicon7_3";
  default:
    return (wchar_t *)0x0;
  }
}


// ==== 1014ec80 FUN_1014ec80

void FUN_1014ec80(int param_1,int param_2)

{
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1020bd50;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if (param_2 != 0) {
    *(undefined4 *)(*(int *)(*(int *)(in_ECX + 0x50ac) + 0x200) + 0x2f0) = 1;
  }
  if (param_1 != 0) {
    FUN_1000ed70(param_1);
    (**(code **)(**(int **)(*(int *)(in_ECX + 0x50ac) + 0x200) + 0x1f8))();
  }
  ExceptionList = local_10;
  return;
}


// ==== 1014ed1a Catch@1014ed1a

void Catch_1014ed1a(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1014ed2e Catch@1014ed2e

void Catch_1014ed2e(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NConsoleWnd::ShowWarningMessage");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1014ed50 FUN_1014ed50

void FUN_1014ed50(void)

{
  FUN_10147e60();
  return;
}


// ==== 1014ed70 FUN_1014ed70

void FUN_1014ed70(void)

{
  FString local_24 [24];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1020bd92;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FString::FString(local_24);
  local_4 = 1;
  FUN_100a4e00();
  FUN_100a5130();
  FUN_100a4f10();
  FUN_100a5020();
  FUN_100a4d50(local_24);
  local_4 = CONCAT31((int3)((uint)local_4 >> 8),1);
  FUN_100b6600();
  local_4 = 0xffffffff;
  FString::~FString(local_24);
  ExceptionList = local_c;
  return;
}


// ==== 1014ee40 FUN_1014ee40

void FUN_1014ee40(int param_1)

{
  FString local_24 [24];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1020bde2;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FString::FString(local_24);
  local_4 = 1;
  FUN_100a4e00();
  FUN_100a5130();
  FUN_100a4f10();
  FUN_100a5020();
  if (param_1 == 1) {
    FUN_100a4d50(local_24);
    local_4 = CONCAT31((int3)((uint)local_4 >> 8),1);
    FUN_100b6600();
  }
  else if (param_1 == 2) {
    FUN_100a4d50(local_24);
    local_4 = CONCAT31((int3)((uint)local_4 >> 8),1);
    FUN_100b6700();
  }
  else if (param_1 == 3) {
    FUN_100a4d50(local_24);
    local_4 = CONCAT31((int3)((uint)local_4 >> 8),1);
    FUN_100b6680();
  }
  local_4 = 0xffffffff;
  FString::~FString(local_24);
  ExceptionList = local_c;
  return;
}


// ==== 1014ef80 FUN_1014ef80

void FUN_1014ef80(void)

{
  FString local_24 [24];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1020be22;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FString::FString(local_24);
  local_4 = 1;
  FUN_100a4f10();
  FUN_100a5130();
  FUN_100a4e00();
  FUN_100a4d50(local_24);
  local_4 = CONCAT31((int3)((uint)local_4 >> 8),1);
  FUN_100b6700();
  local_4 = 0xffffffff;
  FString::~FString(local_24);
  ExceptionList = local_c;
  return;
}


// ==== 1014f040 FUN_1014f040

void FUN_1014f040(undefined4 param_1,int param_2,int param_3)

{
  FUN_1014cff0(param_3);
  if ((param_2 != 0) && (param_3 != 0)) {
    FUN_100ba5b0(param_1,param_2,param_3);
  }
  return;
}


// ==== 1014f080 FUN_1014f080

undefined4 FUN_1014f080(void)

{
  int iVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1020be40;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  iVar1 = FUN_1014dd00();
  if ((iVar1 != 0) &&
     ((((iVar1 = *(int *)(iVar1 + 0x2c0), iVar1 == 0x35 || (iVar1 == 0x36)) || (iVar1 == 0x38)) ||
      (((iVar1 == 0x37 || (iVar1 == 0x39)) || ((iVar1 == 0x75 || (iVar1 == 0x76)))))))) {
    ExceptionList = local_10;
    return 1;
  }
  ExceptionList = local_10;
  return 0;
}


// ==== 1014f10f Catch@1014f10f

void Catch_1014f10f(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1014f123 Catch@1014f123

void Catch_1014f123(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NConsoleWnd::AmIItemCreator");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1014f140 FUN_1014f140

undefined4 FUN_1014f140(undefined4 param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1020be7a;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 1;
  FUN_1014ad10(param_1);
  ExceptionList = local_10;
  return param_1;
}


// ==== 1014f1a2 Catch@1014f1a2

void Catch_1014f1a2(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 1014f1b6 Catch@1014f1b6

void Catch_1014f1b6(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NConsoleWnd::GetUIState");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1014f1e0 FUN_1014f1e0

undefined4 FUN_1014f1e0(void)

{
  if (*(int *)(DAT_103663bc + 0x5110) != 0) {
    return *(undefined4 *)(*(int *)(DAT_103663bc + 0x5110) + 0x50);
  }
  return 0;
}


// ==== 1014f24f Catch@1014f24f

void Catch_1014f24f(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1014f263 Catch@1014f263

void Catch_1014f263(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NConsoleWnd::IsShowTargetInRadar");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1014f280 FUN_1014f280

void FUN_1014f280(undefined4 param_1)

{
  if (*(int *)(DAT_103663bc + 0x5110) != 0) {
    *(undefined4 *)(*(int *)(DAT_103663bc + 0x5110) + 0x50) = param_1;
  }
  return;
}


// ==== 1014f2e7 Catch@1014f2e7

void Catch_1014f2e7(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1014f2fb Catch@1014f2fb

void Catch_1014f2fb(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NConsoleWnd::SetShowTargetInRadar");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1014f320 FUN_1014f320

undefined4 FUN_1014f320(void)

{
  if (*(int *)(DAT_103663bc + 0x5110) != 0) {
    return *(undefined4 *)(*(int *)(DAT_103663bc + 0x5110) + 0x54);
  }
  return 0;
}


// ==== 1014f38f Catch@1014f38f

void Catch_1014f38f(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1014f3a3 Catch@1014f3a3

void Catch_1014f3a3(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NConsoleWnd::IsShowArrow");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1014f3c0 FUN_1014f3c0

void FUN_1014f3c0(undefined4 param_1)

{
  if (*(int *)(DAT_103663bc + 0x5110) != 0) {
    *(undefined4 *)(*(int *)(DAT_103663bc + 0x5110) + 0x54) = param_1;
  }
  return;
}


// ==== 1014f427 Catch@1014f427

void Catch_1014f427(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1014f43b Catch@1014f43b

void Catch_1014f43b(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NConsoleWnd::SetShowArrow");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1014f460 FUN_1014f460

FString * FUN_1014f460(FString *param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1020bf3a;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 1;
  if (*(int *)(DAT_103663bc + 0x5110) == 0) {
    FString::FString(param_1,(ushort *)&DAT_1022f9f8);
  }
  else {
    FUN_1014ae00(param_1);
  }
  ExceptionList = local_10;
  return param_1;
}


// ==== 1014f4df Catch@1014f4df

void Catch_1014f4df(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 1014f4f3 Catch@1014f4f3

void Catch_1014f4f3(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NConsoleWnd::GetTargetName");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1014f510 FUN_1014f510

void FUN_1014f510(void)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1020bf69;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 1;
  if (*(int *)(DAT_103663bc + 0x5110) != 0) {
    FString::operator=((FString *)(*(int *)(DAT_103663bc + 0x5110) + 0x58),
                       (FString *)&stack0x00000004);
  }
  local_8 = 0xffffffff;
  FString::~FString((FString *)&stack0x00000004);
  ExceptionList = local_10;
  return;
}


// ==== 1014f58b Catch@1014f58b

void Catch_1014f58b(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1014f59f Catch@1014f59f

void Catch_1014f59f(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NConsoleWnd::SetTargetName");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1014f5c0 FUN_1014f5c0

void FUN_1014f5c0(undefined4 *param_1)

{
  int iVar1;
  
  if (*(int *)(DAT_103663bc + 0x5110) == 0) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  else {
    iVar1 = *(int *)(DAT_103663bc + 0x5110);
    *param_1 = *(undefined4 *)(iVar1 + 100);
    param_1[1] = *(undefined4 *)(iVar1 + 0x68);
    param_1[2] = *(undefined4 *)(iVar1 + 0x6c);
  }
  return;
}


// ==== 1014f63f Catch@1014f63f

void Catch_1014f63f(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1014f653 Catch@1014f653

void Catch_1014f653(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NConsoleWnd::GetTargetPos");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1014f670 FUN_1014f670

void FUN_1014f670(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1020bfb0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if (*(int *)(DAT_103663bc + 0x5110) != 0) {
    iVar1 = *(int *)(DAT_103663bc + 0x5110);
    *(undefined4 *)(iVar1 + 100) = param_1;
    *(undefined4 *)(iVar1 + 0x68) = param_2;
    *(undefined4 *)(iVar1 + 0x6c) = param_3;
  }
  FUN_101acf30(param_1,param_2,param_3);
  ExceptionList = local_10;
  return;
}


// ==== 1014f70b Catch@1014f70b

void Catch_1014f70b(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1014f71f Catch@1014f71f

void Catch_1014f71f(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NConsoleWnd::SetTargetPos");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1014f740 FUN_1014f740

void FUN_1014f740(FString *param_1,undefined4 *param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  FString::operator=((FString *)(*(int *)(DAT_103663bc + 0x5110) + 0x58),param_1);
  iVar1 = *(int *)(DAT_103663bc + 0x5110);
  uVar2 = param_2[1];
  uVar3 = param_2[2];
  *(undefined4 *)(iVar1 + 100) = *param_2;
  *(undefined4 *)(iVar1 + 0x68) = uVar2;
  *(undefined4 *)(iVar1 + 0x6c) = uVar3;
  *(undefined4 *)(*(int *)(DAT_103663bc + 0x5110) + 0x70) = param_3;
  FUN_101acf30(*param_2,param_2[1],param_2[2]);
  return;
}


// ==== 1014f7c0 FUN_1014f7c0

undefined4 FUN_1014f7c0(void)

{
  if (*(int *)(DAT_103663bc + 0x5110) != 0) {
    return *(undefined4 *)(*(int *)(DAT_103663bc + 0x5110) + 0x70);
  }
  return 0;
}


// ==== 1014f82f Catch@1014f82f

void Catch_1014f82f(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1014f843 Catch@1014f843

void Catch_1014f843(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NConsoleWnd::GetQuestID");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1014f860 FUN_1014f860

void FUN_1014f860(undefined4 param_1)

{
  if (*(int *)(DAT_103663bc + 0x5110) != 0) {
    *(undefined4 *)(*(int *)(DAT_103663bc + 0x5110) + 0x70) = param_1;
  }
  return;
}


// ==== 1014f8c7 Catch@1014f8c7

void Catch_1014f8c7(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1014f8db Catch@1014f8db

void Catch_1014f8db(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NConsoleWnd::SetQuestID");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1014f900 FUN_1014f900

void FUN_1014f900(void)

{
  int in_ECX;
  
                    /* WARNING: Could not recover jumptable at 0x1014f910. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(int *)**(undefined4 **)(*(int *)(*(int *)(in_ECX + 0x50) + 0x54) + 0x38) + 0x7c))()
  ;
  return;
}


// ==== 1014f920 FUN_1014f920

undefined4 FUN_1014f920(int *param_1,int *param_2)

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


// ==== 1014f960 FUN_1014f960

int FUN_1014f960(void)

{
  if (DAT_1039ea64 == 0) {
    FUN_1014ac40();
  }
  return DAT_1039ea64;
}


// ==== 1014f980 FUN_1014f980

void FUN_1014f980(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  FArray *in_ECX;
  
  iVar2 = FArray::Add(in_ECX,1,0x14);
  puVar1 = (undefined4 *)(*(int *)in_ECX + iVar2 * 0x14);
  *puVar1 = *param_1;
  puVar1[1] = param_1[1];
  puVar1[2] = param_1[2];
  puVar1[3] = param_1[3];
  puVar1[4] = param_1[4];
  return;
}


// ==== 1014f9c0 FUN_1014f9c0

void FUN_1014f9c0(void)

{
  int iVar1;
  int iVar2;
  int *in_ECX;
  uint uVar3;
  int iVar4;
  
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
  iVar2 = 0;
  if (0 < in_ECX[1]) {
    iVar4 = 0;
    do {
      uVar3 = *(uint *)(*in_ECX + 4 + iVar4) & in_ECX[4] - 1U;
      *(undefined4 *)(*in_ECX + iVar4) = *(undefined4 *)(iVar1 + uVar3 * 4);
      *(int *)(iVar1 + uVar3 * 4) = iVar2;
      iVar2 = iVar2 + 1;
      iVar4 = iVar4 + 0x1cec;
    } while (iVar2 < in_ECX[1]);
  }
  if (in_ECX[3] != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))(in_ECX[3]);
  }
  in_ECX[3] = iVar1;
  return;
}


// ==== 1014fa70 FUN_1014fa70

UObject * FUN_1014fa70(UObject *param_1)

{
  int iVar1;
  
  if (param_1 != (UObject *)0x0) {
    iVar1 = UObject::IsA(param_1,&UUIDataManager::PrivateStaticClass);
    if (iVar1 != 0) {
      return param_1;
    }
  }
  return (UObject *)0x0;
}


// ==== 1014faa0 FUN_1014faa0

int FUN_1014faa0(undefined4 param_1,FArray *param_2)

{
  int iVar1;
  
  iVar1 = FArray::Add(param_2,1,0x1cec);
  return iVar1 * 0x1cec + *(int *)param_2;
}


// ==== 1014fac0 FUN_1014fac0

void FUN_1014fac0(int param_1,int param_2)

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
  FArray::Remove(in_ECX,param_1,param_2,0x14);
  return;
}


// ==== 1014fb40 FUN_1014fb40

void FUN_1014fb40(undefined4 param_1)

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
  
  puStack_c = &LAB_1020c021;
  local_10 = ExceptionList;
  uStack_44 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_44;
  ExceptionList = &local_10;
  local_8 = 0;
  *(undefined4 *)(in_ECX + 0x513c) = param_1;
  FUN_1003f970();
  local_8._0_1_ = 1;
  FString::FString(local_34,(ushort *)L"ServerAgeLimit");
  local_8._0_1_ = 2;
  FUN_10040090(local_34,*(undefined4 *)(in_ECX + 0x513c));
  local_8._0_1_ = 1;
  FString::~FString(local_34);
  puVar2 = local_28;
  uVar1 = 0xaa;
  FUN_10005c30(0xaa,puVar2);
  FUN_100d1790(uVar1,puVar2);
  local_8 = (uint)local_8._1_3_ << 8;
  FUN_1003fff0();
  ExceptionList = local_10;
  return;
}


// ==== 1014fbf7 Catch@1014fbf7

void Catch_1014fbf7(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1014fc0b Catch@1014fc0b

void Catch_1014fc0b(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NConsoleWnd::SetServerAgeLimit");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1014fc30 FUN_1014fc30

void FUN_1014fc30(void)

{
  ushort *puVar1;
  int iVar2;
  undefined4 uVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1020c049;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 1;
  puVar1 = FString::operator*((FString *)(GL2GameData_exref + 0x6be84));
  iVar2 = FString::operator==((FString *)&stack0x00000004,puVar1);
  if (iVar2 == 0) {
    puVar1 = FString::operator*((FString *)(GL2GameData_exref + 0x6be78));
    iVar2 = FString::operator==((FString *)&stack0x00000004,puVar1);
    if (iVar2 == 0) {
      uVar3 = 2;
    }
    else {
      uVar3 = 1;
    }
  }
  else {
    uVar3 = 0;
  }
  FUN_1014fb40(uVar3);
  local_8 = 0xffffffff;
  FString::~FString((FString *)&stack0x00000004);
  ExceptionList = local_10;
  return;
}


// ==== 1014fcdd Catch@1014fcdd

void Catch_1014fcdd(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1014fcf1 Catch@1014fcf1

void Catch_1014fcf1(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NConsoleWnd::SetServerAgeLimit");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1014fd10 FUN_1014fd10

void FUN_1014fd10(int param_1)

{
  User *this;
  int iVar1;
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_1020c07b;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_1014b3f0();
  this = (User *)FUN_10004ed0(0x314);
  local_8._0_1_ = 1;
  if (this == (User *)0x0) {
    iVar1 = 0;
  }
  else {
    iVar1 = User::User(this);
  }
  local_8 = (uint)local_8._1_3_ << 8;
  *(int *)(in_ECX + 0x5144) = iVar1;
  if (iVar1 == 0) {
    appFailAssert("m_pLobbySelectedCharacterInfo",".\\Src\\NConsoleWindow.cpp",0x14d);
  }
  appStrcpy((ushort *)(*(int *)(in_ECX + 0x5144) + 0x1c),(ushort *)(param_1 + 0x1c));
  *(undefined4 *)(*(int *)(in_ECX + 0x5144) + 0x54) = *(undefined4 *)(param_1 + 0x54);
  *(undefined4 *)(*(int *)(in_ECX + 0x5144) + 0x50) = *(undefined4 *)(param_1 + 0x50);
  *(undefined4 *)(*(int *)(in_ECX + 0x5144) + 0x58) = *(undefined4 *)(param_1 + 0x58);
  iVar1 = *(int *)(in_ECX + 0x5144);
  *(undefined4 *)(iVar1 + 0x5c) = *(undefined4 *)(param_1 + 0x5c);
  *(undefined4 *)(iVar1 + 0x60) = *(undefined4 *)(param_1 + 0x60);
  *(undefined4 *)(*(int *)(in_ECX + 0x5144) + 0x7c) = *(undefined4 *)(param_1 + 0x7c);
  *(undefined4 *)(*(int *)(in_ECX + 0x5144) + 0x80) = *(undefined4 *)(param_1 + 0x80);
  *(undefined4 *)(*(int *)(in_ECX + 0x5144) + 0x84) = *(undefined4 *)(param_1 + 0x84);
  *(undefined4 *)(*(int *)(in_ECX + 0x5144) + 0x88) = *(undefined4 *)(param_1 + 0x88);
  *(undefined4 *)(*(int *)(in_ECX + 0x5144) + 0x2c0) = *(undefined4 *)(param_1 + 0x2c0);
  ExceptionList = local_10;
  return;
}


// ==== 1014fe52 Catch@1014fe52

void Catch_1014fe52(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1014fe66 Catch@1014fe66

void Catch_1014fe66(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NConsoleWnd::SaveLobbySelectedCharacterInfo");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1014fe90 FUN_1014fe90

void FUN_1014fe90(void)

{
  undefined4 uVar1;
  FString *pFVar2;
  uint uStack_38;
  FString local_28 [20];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_1020c0a9;
  local_10 = ExceptionList;
  uStack_38 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_38;
  ExceptionList = &local_10;
  local_8 = 0;
  FString::FString(local_28,(ushort *)&DAT_1022f9f8);
  local_8._0_1_ = 1;
  pFVar2 = local_28;
  uVar1 = 0x3d4;
  FUN_10005c30(0x3d4,pFVar2);
  FUN_100d1790(uVar1,pFVar2);
  local_8 = (uint)local_8._1_3_ << 8;
  FString::~FString(local_28);
  ExceptionList = local_10;
  return;
}


// ==== 1014ff11 Catch@1014ff11

void Catch_1014ff11(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1014ff25 Catch@1014ff25

void Catch_1014ff25(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NConsoleWnd::SetSelectedCreatureID");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1014ff50 FUN_1014ff50

undefined4 FUN_1014ff50(void)

{
  int iVar1;
  UClass *pUVar2;
  UPackage *pUVar3;
  UObject *pUVar4;
  undefined4 uVar5;
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1020c0d0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_10005c30();
  FUN_100d20c0();
  iVar1 = FUN_100d2440();
  if (((iVar1 != 0) && (iVar1 = FUN_100d0010(), iVar1 != 0)) && (iVar1 = FUN_100d1d60(), iVar1 != 0)
     ) {
    pUVar2 = UObject::StaticLoadClass
                       (&UUIDataManager::PrivateStaticClass,(UObject *)0x0,
                        (ushort *)L"NWindow.UIDataManager",(ushort *)0x0,0,(UPackageMap *)0x0);
    if (pUVar2 == (UClass *)0x0) {
      *(undefined4 *)(in_ECX + 0x5114) = 0;
    }
    else {
      FName::FName((FName *)&stack0xffffffbc,0);
      pUVar3 = UObject::GetTransientPackage();
      pUVar4 = UObject::StaticConstructObject(pUVar2,pUVar3);
      uVar5 = FUN_1014fa70(pUVar4);
      *(undefined4 *)(in_ECX + 0x5114) = uVar5;
    }
    if (*(int **)(in_ECX + 0x5114) != (int *)0x0) {
      (**(code **)(**(int **)(in_ECX + 0x5114) + 0x68))();
      UObject::AddToRoot(*(UObject **)(in_ECX + 0x5114));
    }
    ExceptionList = local_10;
    return 1;
  }
  FUN_10005c30();
  FUN_100d01f0();
  ExceptionList = local_10;
  return 0;
}


// ==== 10150082 Catch@10150082

void Catch_10150082(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10150096 Catch@10150096

void Catch_10150096(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NConsoleWnd::InitializeXMLUI");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101500c0 FUN_101500c0

undefined4 FUN_101500c0(void)

{
  int iVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1020c0f0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_10005c30();
  FUN_100d00e0(1);
  FUN_100d20c0();
  iVar1 = FUN_100d2440();
  if (iVar1 == 0) {
    uVar2 = FUN_10005c30(L"NConsoleWnd:Failed to load XML");
    FUN_100d01f0(uVar2);
    ExceptionList = local_10;
    return 0;
  }
  ExceptionList = local_10;
  return 1;
}


// ==== 10150152 Catch@10150152

void Catch_10150152(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10150166 Catch@10150166

void Catch_10150166(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NConsoleWnd::XMLConvert");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10150190 FUN_10150190

undefined4 FUN_10150190(void)

{
  int iVar1;
  undefined4 uStack_48;
  undefined4 uStack_44;
  FString *pFStack_40;
  uint uStack_3c;
  FString local_2c [16];
  undefined1 *local_1c;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_1020c12b;
  local_10 = ExceptionList;
  uStack_3c = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_3c;
  ExceptionList = &local_10;
  local_8 = 0;
  pFStack_40 = (FString *)0x10281d84;
  uStack_44 = 0x101501ce;
  uStack_44 = FUN_10005c30();
  uStack_48 = 0x101501d4;
  FUN_100d06e0();
  pFStack_40 = (FString *)0x101501de;
  FUN_1014d380();
  pFStack_40 = (FString *)0x101501e3;
  FUN_10005c30();
  pFStack_40 = (FString *)0x101501ea;
  iVar1 = FUN_100d27e0();
  if (iVar1 == 0) {
    pFStack_40 = (FString *)0x10281d50;
    uStack_44 = 0x101501f8;
    uStack_44 = FUN_10005c30();
    uStack_48 = 0x101501fe;
    FUN_100d01f0();
    ExceptionList = local_10;
    return 0;
  }
  pFStack_40 = local_2c;
  uStack_44 = 0x1015022a;
  FUN_1014ad10();
  local_8._0_1_ = 1;
  local_1c = (undefined1 *)&uStack_48;
  FString::FString((FString *)&uStack_48,(ushort *)L"None");
  local_8._0_1_ = 1;
  FUN_10070110();
  local_1c = (undefined1 *)&uStack_48;
  FString::FString((FString *)&uStack_48,local_2c);
  local_8._0_1_ = 1;
  FUN_10070110();
  pFStack_40 = (FString *)0x10281d1c;
  uStack_44 = 0x10150291;
  uStack_44 = FUN_10005c30();
  uStack_48 = 0x10150297;
  FUN_100d06e0();
  pFStack_40 = (FString *)0x101502a1;
  FUN_1014d6a0();
  local_8 = (uint)local_8._1_3_ << 8;
  pFStack_40 = (FString *)0x101502ae;
  FString::~FString(local_2c);
  ExceptionList = local_10;
  return 1;
}


// ==== 101502c2 Catch@101502c2

void Catch_101502c2(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 101502d6 Catch@101502d6

void Catch_101502d6(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NConsoleWnd::ReloadXMLUI");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10150300 FUN_10150300

void FUN_10150300(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1020c150;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  iVar1 = FUN_10005c30();
  if (iVar1 != 0) {
    FUN_10005c30(param_1,param_2);
    FUN_100d1580(param_1,param_2);
  }
  ExceptionList = local_10;
  return;
}


// ==== 1015036a Catch@1015036a

void Catch_1015036a(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1015037e Catch@1015037e

void Catch_1015037e(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NConsoleWnd::RegisterUIEvent");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101503a0 FUN_101503a0

void FUN_101503a0(undefined4 param_1)

{
  undefined4 uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1020c170;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  uVar1 = 0;
  FUN_10005c30(param_1,0);
  FUN_100d0cb0(param_1,uVar1);
  ExceptionList = local_10;
  return;
}


// ==== 101503f8 Catch@101503f8

void Catch_101503f8(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1015040c Catch@1015040c

void Catch_1015040c(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NConsoleWnd::FindXMLControl");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10150430 FUN_10150430

void FUN_10150430(int param_1)

{
  int iVar1;
  int iVar2;
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1020c190;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_10070060(param_1);
  for (iVar2 = 0; iVar2 < *(int *)(in_ECX + 0x50cc); iVar2 = iVar2 + 1) {
    iVar1 = *(int *)(in_ECX + 0x50c8) + iVar2 * 0x14;
    if (*(int *)(iVar1 + 0x10) == param_1) {
      *(undefined4 *)(iVar1 + 8) = 1;
    }
  }
  if (param_1 == *(int *)(in_ECX + 0x5140)) {
    *(undefined4 *)(in_ECX + 0x5140) = 0;
  }
  iVar2 = 0;
  do {
    if (*(int *)(in_ECX + 0x514c) <= iVar2) {
LAB_101504ce:
      iVar2 = 0;
      while( true ) {
        if (*(int *)(in_ECX + 0x5158) <= iVar2) {
          ExceptionList = local_10;
          return;
        }
        if (*(int *)(*(int *)(in_ECX + 0x5154) + iVar2 * 4) == param_1) break;
        iVar2 = iVar2 + 1;
      }
      FUN_1013d680(iVar2,1);
      ExceptionList = local_10;
      return;
    }
    if (*(int *)(*(int *)(in_ECX + 0x5148) + iVar2 * 4) == param_1) {
      FUN_1013d680(iVar2,1);
      goto LAB_101504ce;
    }
    iVar2 = iVar2 + 1;
  } while( true );
}


// ==== 10150512 Catch@10150512

void Catch_10150512(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x20) = *(undefined4 *)(unaff_EBP + -0x24);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x20,&DAT_102a47f0);
}


// ==== 10150526 Catch@10150526

void Catch_10150526(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NConsoleWnd::OnDestroyWnd");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10150550 FUN_10150550

undefined4 FUN_10150550(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  uint uStack_40;
  undefined1 local_30 [28];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1020c1b0;
  local_10 = ExceptionList;
  uStack_40 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_40;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_1014b130(param_1,param_2,param_3);
  FUN_1014f980(local_30);
  ExceptionList = local_10;
  return param_1;
}


// ==== 101505bd Catch@101505bd

void Catch_101505bd(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 101505d1 Catch@101505d1

void Catch_101505d1(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NConsoleWnd::NSetTimer");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101505f0 FUN_101505f0

void FUN_101505f0(short *param_1)

{
  uint *puVar1;
  ushort *puVar2;
  ushort *puVar3;
  ushort *puVar4;
  ushort *puVar5;
  int *in_ECX;
  uint uStack_430;
  ushort local_418 [256];
  ushort local_218 [256];
  uint local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1020c1d0;
  local_10 = ExceptionList;
  uStack_430 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_430;
  ExceptionList = &local_10;
  local_8 = 0;
  local_18 = uStack_430;
  puVar1 = &uStack_430;
  if ((param_1 != (short *)0x0) && (puVar1 = &uStack_430, *param_1 != 0)) {
    puVar2 = FString::operator*((FString *)(GL2GameData_exref + 0x2e190));
    puVar3 = FString::operator*((FString *)(GL2GameData_exref + 0x2e134));
    puVar4 = FString::operator*((FString *)(GL2GameData_exref + 0x2e0d8));
    puVar5 = FString::operator*((FString *)(GL2GameData_exref + 0x2e07c));
    appSprintf(local_218,(ushort *)L"%s %s %s %s",puVar5,puVar4,puVar3,puVar2);
    appSprintf(local_418,local_218,param_1);
    (**(code **)(*in_ECX + 0x658))(local_418);
    puVar1 = (uint *)local_14;
  }
  local_14 = (undefined1 *)puVar1;
  FUN_1014cd40();
  local_8 = 0xffffffff;
  ExceptionList = local_10;
  __security_check_cookie(local_18 ^ (uint)&stack0xfffffffc);
  return;
}


// ==== 101506f2 Catch@101506f2

void Catch_101506f2(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x418) = *(undefined4 *)(unaff_EBP + -0x41c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x418,&DAT_102a47f0);
}


// ==== 1015070f Catch@1015070f

void Catch_1015070f(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NConsoleWnd::BlockedAccountWithMsg");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10150730 FUN_10150730

undefined4 FUN_10150730(uint param_1)

{
  int iVar1;
  ushort *puVar2;
  int *in_ECX;
  FString *pFVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1020c200;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_1014cd40();
  if ((param_1 & 1) == 0) {
    if ((param_1 & 2) == 0) {
      if ((param_1 & 4) != 0) {
        pFVar3 = (FString *)(GL2GameData_exref + 0x53b28);
        goto LAB_1015077c;
      }
      if ((param_1 & 8) == 0) {
        if ((param_1 & 0x10) != 0) {
          pFVar3 = (FString *)(GL2GameData_exref + 0x53a70);
          goto LAB_1015077c;
        }
        if ((param_1 & 0x20) == 0) {
          if ((param_1 & 0x40) != 0) {
            pFVar3 = (FString *)(GL2GameData_exref + 0x539b8);
            goto LAB_1015077c;
          }
          if ((char)param_1 < '\0') {
            pFVar3 = (FString *)(GL2GameData_exref + 0x53dac);
          }
          else {
            if ((param_1 & 0x400) != 0) {
              pFVar3 = (FString *)(GL2GameData_exref + 0x5395c);
              goto LAB_1015077c;
            }
            if ((param_1 & 0x800) == 0) {
              if ((param_1 & 0x1000) != 0) {
                pFVar3 = (FString *)(GL2GameData_exref + 0x52314);
                goto LAB_1015077c;
              }
              if ((param_1 & 0x2000) == 0) {
                if ((param_1 & 0x100) != 0) {
                  pFVar3 = (FString *)(GL2GameData_exref + 0x53cf4);
                  goto LAB_1015077c;
                }
                if ((param_1 & 0x200) == 0) {
                  ExceptionList = local_10;
                  return 0;
                }
                pFVar3 = (FString *)(GL2GameData_exref + 0x53d50);
              }
              else {
                pFVar3 = (FString *)(GL2GameData_exref + 0x52314);
              }
            }
            else {
              pFVar3 = (FString *)(GL2GameData_exref + 0x53900);
            }
          }
        }
        else {
          pFVar3 = (FString *)(GL2GameData_exref + 0x53a14);
        }
      }
      else {
        pFVar3 = (FString *)(GL2GameData_exref + 0x53acc);
      }
    }
    else {
      pFVar3 = (FString *)(GL2GameData_exref + 0x53b84);
    }
    iVar1 = *in_ECX;
    puVar2 = FString::operator*(pFVar3);
    (**(code **)(iVar1 + 0x658))(puVar2);
  }
  else {
    pFVar3 = (FString *)(GL2GameData_exref + 0x53be0);
LAB_1015077c:
    iVar1 = *in_ECX;
    puVar2 = FString::operator*(pFVar3);
    (**(code **)(iVar1 + 0x658))(puVar2);
  }
  ExceptionList = local_10;
  return 1;
}


// ==== 101508e5 Catch@101508e5

void Catch_101508e5(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 101508f9 Catch@101508f9

void Catch_101508f9(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NConsoleWnd::BlockedAccountMerge");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10150920 FUN_10150920

void FUN_10150920(uint param_1)

{
  int iVar1;
  ushort *puVar2;
  int *in_ECX;
  FString *pFVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1020c220;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_1014cd40();
  local_8 = 0;
  if ((param_1 & 0x4000000) == 0) {
    if ((param_1 & 0x20) == 0) {
      if ((param_1 & 0x100000) != 0) {
        pFVar3 = (FString *)(GL2GameData_exref + 0x4c9f4);
        goto LAB_10150b58;
      }
      if ((param_1 & 0x200000) == 0) {
        if ((param_1 & 0x80000) != 0) {
          pFVar3 = (FString *)(GL2GameData_exref + 0x4c998);
          goto LAB_10150b58;
        }
        if ((param_1 & 0x10) == 0) {
          if ((param_1 & 0x400000) != 0) {
            pFVar3 = (FString *)(GL2GameData_exref + 0x4cb08);
            goto LAB_10150b58;
          }
          if ((param_1 & 0x40000) == 0) {
            if ((param_1 & 1) != 0) {
              pFVar3 = (FString *)(GL2GameData_exref + 0x2dabc);
              goto LAB_10150b58;
            }
            if ((param_1 & 2) == 0) {
              if ((param_1 & 4) != 0) {
                pFVar3 = (FString *)(GL2GameData_exref + 0x2db74);
                goto LAB_10150b58;
              }
              if ((param_1 & 8) == 0) {
                if ((param_1 & 0x40) != 0) {
                  pFVar3 = (FString *)(GL2GameData_exref + 0x2dce4);
                  goto LAB_10150b58;
                }
                if ((char)param_1 < '\0') {
                  pFVar3 = (FString *)(GL2GameData_exref + 0x2dd40);
                }
                else {
                  if ((param_1 & 0x100) != 0) {
                    pFVar3 = (FString *)(GL2GameData_exref + 0x2dd9c);
                    goto LAB_10150b58;
                  }
                  if ((param_1 & 0x200) == 0) {
                    if ((param_1 & 0x400) != 0) {
                      pFVar3 = (FString *)(GL2GameData_exref + 0x2de54);
                      goto LAB_10150b58;
                    }
                    if ((param_1 & 0x800) == 0) {
                      if ((param_1 & 0x1000) != 0) {
                        pFVar3 = (FString *)(GL2GameData_exref + 0x2df0c);
                        goto LAB_10150b58;
                      }
                      if ((param_1 & 0x2000) == 0) {
                        if ((param_1 & 0x4000) != 0) {
                          pFVar3 = (FString *)(GL2GameData_exref + 0x2dfc4);
                          goto LAB_10150b58;
                        }
                        if ((param_1 & 0x8000) == 0) {
                          if ((param_1 & 0x1830000) != 0) {
                            pFVar3 = (FString *)(GL2GameData_exref + 0x2ddf8);
                            goto LAB_10150b58;
                          }
                          if ((param_1 & 0x8000000) == 0) {
                            ExceptionList = local_10;
                            return;
                          }
                          pFVar3 = (FString *)(GL2GameData_exref + 0x53acc);
                        }
                        else {
                          pFVar3 = (FString *)(GL2GameData_exref + 0x2e020);
                        }
                      }
                      else {
                        pFVar3 = (FString *)(GL2GameData_exref + 0x2df68);
                      }
                    }
                    else {
                      pFVar3 = (FString *)(GL2GameData_exref + 0x2deb0);
                    }
                  }
                  else {
                    pFVar3 = (FString *)(GL2GameData_exref + 0x2ddf8);
                  }
                }
              }
              else {
                pFVar3 = (FString *)(GL2GameData_exref + 0x2dbd0);
              }
            }
            else {
              pFVar3 = (FString *)(GL2GameData_exref + 0x2db18);
            }
          }
          else {
            pFVar3 = (FString *)(GL2GameData_exref + 0x4c65c);
          }
        }
        else {
          pFVar3 = (FString *)(GL2GameData_exref + 0x4c93c);
        }
      }
      else {
        pFVar3 = (FString *)(GL2GameData_exref + 0x4ca50);
      }
    }
    else {
      pFVar3 = (FString *)(GL2GameData_exref + 0x4caac);
    }
    iVar1 = *in_ECX;
    puVar2 = FString::operator*(pFVar3);
    (**(code **)(iVar1 + 0x658))(puVar2);
  }
  else {
    pFVar3 = (FString *)(GL2GameData_exref + 0x51ec4);
LAB_10150b58:
    iVar1 = *in_ECX;
    puVar2 = FString::operator*(pFVar3);
    (**(code **)(iVar1 + 0x658))(puVar2);
  }
  ExceptionList = local_10;
  return;
}


// ==== 10150bae Catch@10150bae

void Catch_10150bae(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10150bc2 Catch@10150bc2

void Catch_10150bc2(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NConsoleWnd::BlockedAccount");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10150be0 FUN_10150be0

void FUN_10150be0(int param_1)

{
  ushort *puVar1;
  ushort *puVar2;
  ushort *puVar3;
  int *in_ECX;
  FString *pFVar4;
  void *local_214;
  undefined1 *puStack_210;
  undefined4 local_20c;
  ushort local_208 [256];
  uint local_8;
  
  puStack_210 = &LAB_1020c240;
  local_214 = ExceptionList;
  local_8 = DAT_103554c4 ^ (uint)local_208;
  ExceptionList = &local_214;
  local_20c = 0;
  switch(param_1) {
  case 1:
    pFVar4 = (FString *)(GL2GameData_exref + 0x2e1ec);
    break;
  case 2:
  case 3:
    puVar3 = FString::operator*((FString *)(GL2GameData_exref + 0x2e2a4));
    puVar1 = FString::operator*((FString *)(GL2GameData_exref + 0x2e248));
    appSprintf(local_208,(ushort *)L"%s %s",puVar1,puVar3);
    goto switchD_10150c3e_caseD_17;
  case 4:
  case 6:
  case 8:
  case 9:
  case 10:
  case 0xb:
  case 0xd:
  case 0xe:
    puVar3 = FString::operator*((FString *)(GL2GameData_exref + 0x2e750));
    puVar1 = FString::operator*((FString *)(GL2GameData_exref + 0x2e6f4));
    pFVar4 = (FString *)(GL2GameData_exref + 0x2e698);
    goto LAB_10150d65;
  case 5:
    puVar3 = FString::operator*((FString *)(GL2GameData_exref + 0x2e414));
    puVar1 = FString::operator*((FString *)(GL2GameData_exref + 0x2e3b8));
    appSprintf(local_208,(ushort *)L"%s %s",puVar1,puVar3);
    goto switchD_10150c3e_caseD_17;
  case 7:
    pFVar4 = (FString *)(GL2GameData_exref + 0x2e470);
    break;
  case 0xc:
    pFVar4 = (FString *)(GL2GameData_exref + 0x2e4cc);
    goto LAB_10150ecd;
  case 0xf:
    pFVar4 = (FString *)(GL2GameData_exref + 0x491e4);
    goto LAB_10150d0e;
  case 0x10:
    pFVar4 = (FString *)(GL2GameData_exref + 0x2e528);
    goto LAB_10150d0e;
  case 0x11:
    pFVar4 = (FString *)(GL2GameData_exref + 0x2cf3c);
    break;
  case 0x12:
    puVar3 = FString::operator*((FString *)(GL2GameData_exref + 0x2e63c));
    puVar1 = FString::operator*((FString *)(GL2GameData_exref + 0x2e5e0));
    pFVar4 = (FString *)(GL2GameData_exref + 0x2e584);
LAB_10150d65:
    puVar2 = FString::operator*(pFVar4);
    appSprintf(local_208,(ushort *)L"%s %s %s",puVar2,puVar1,puVar3);
    goto switchD_10150c3e_caseD_17;
  case 0x13:
    pFVar4 = (FString *)(GL2GameData_exref + 0x2cff4);
    goto LAB_10150d0e;
  case 0x14:
    pFVar4 = (FString *)(GL2GameData_exref + 0x2d050);
    break;
  case 0x15:
    pFVar4 = (FString *)(GL2GameData_exref + 0x2e698);
    break;
  case 0x16:
    pFVar4 = (FString *)(GL2GameData_exref + 0x32018);
    goto LAB_10150ecd;
  default:
    goto switchD_10150c3e_caseD_17;
  case 0x1e:
    pFVar4 = (FString *)(GL2GameData_exref + 0x3509c);
    goto LAB_10150d0e;
  case 0x1f:
    pFVar4 = (FString *)(GL2GameData_exref + 0x3ffa0);
    break;
  case 0x20:
    pFVar4 = (FString *)(GL2GameData_exref + 0x3ff44);
    goto LAB_10150ecd;
  case 0x21:
    pFVar4 = (FString *)(GL2GameData_exref + 0x4227c);
    goto LAB_10150d0e;
  case 0x23:
    pFVar4 = (FString *)(GL2GameData_exref + 0x43a90);
    break;
  case 0x24:
    pFVar4 = (FString *)(GL2GameData_exref + 0x4f2ec);
    goto LAB_10150ecd;
  case 0x25:
    pFVar4 = (FString *)(GL2GameData_exref + 0x52200);
    goto LAB_10150d0e;
  case 0x26:
    pFVar4 = (FString *)(GL2GameData_exref + 0x5225c);
    break;
  case 0x27:
    pFVar4 = (FString *)(GL2GameData_exref + 0x522b8);
    goto LAB_10150ecd;
  case 0x28:
    pFVar4 = (FString *)(GL2GameData_exref + 0x523cc);
LAB_10150d0e:
    puVar3 = FString::operator*(pFVar4);
    goto LAB_10150edd;
  case 0x29:
    pFVar4 = (FString *)(GL2GameData_exref + 0x53060);
    break;
  case 0x2a:
    pFVar4 = (FString *)(GL2GameData_exref + 0x546a8);
LAB_10150ecd:
    puVar3 = FString::operator*(pFVar4);
    goto LAB_10150edd;
  }
  puVar3 = FString::operator*(pFVar4);
LAB_10150edd:
  appSprintf(local_208,(ushort *)&DAT_1022dde0,puVar3);
switchD_10150c3e_caseD_17:
  if (param_1 != 0x1f) {
    FUN_1014cd40();
  }
  (**(code **)(*in_ECX + 0x658))(local_208);
  (**(code **)(*in_ECX + 0x80c))(0);
  (**(code **)(*in_ECX + 0x810))();
  (**(code **)(*in_ECX + 0x810))();
  local_20c = 0xffffffff;
  ExceptionList = local_214;
  __security_check_cookie(local_8 ^ (uint)local_208);
  return;
}


// ==== 10150f56 Catch@10150f56

void Catch_10150f56(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10150f6a Catch@10150f6a

void Catch_10150f6a(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NConsoleWnd::RefuseLogOn");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10151020 FUN_10151020

void FUN_10151020(void)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1020c270;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_1014d380();
  appRequestExit(0);
  ExceptionList = local_10;
  return;
}


// ==== 1015107b Catch@1015107b

void Catch_1015107b(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1015108f Catch@1015108f

void Catch_1015108f(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NConsoleWnd::AcceptLogOut");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101510b0 FUN_101510b0

void FUN_101510b0(void)

{
  int iVar1;
  int in_ECX;
  uint uStack_3c;
  L2ParamStack local_2c [24];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_1020c299;
  local_10 = ExceptionList;
  uStack_3c = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_3c;
  ExceptionList = &local_10;
  local_8 = 0;
  *(undefined4 *)(*(int *)(in_ECX + 0x50) + 0x37c) = 0;
  iVar1 = FString::operator==((FString *)(*(int *)(*(int *)(in_ECX + 0x50) + 0x19c) + 0x94),
                              (ushort *)L"Lobby");
  if (iVar1 == 0) {
    L2ParamStack::L2ParamStack(local_2c,10);
    local_8._0_1_ = 1;
    L2ParamStack::PushBack(local_2c,(void *)0x1e);
    (**(code **)(**(int **)(in_ECX + 0x50) + 0x470))(local_2c);
    (**(code **)(**(int **)(*(int *)(in_ECX + 0x50) + 0x60) + 0xdc))();
    local_8 = (uint)local_8._1_3_ << 8;
    L2ParamStack::~L2ParamStack(local_2c);
  }
  else {
    FUN_1014cd40();
  }
  ExceptionList = local_10;
  return;
}


// ==== 10151176 Catch@10151176

void Catch_10151176(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1015118a Catch@1015118a

void Catch_1015118a(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NConsoleWnd::ContinueServerClose");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101511b0 FUN_101511b0

void FUN_101511b0(void)

{
  uint *puVar1;
  undefined4 uStack_48;
  undefined4 uStack_44;
  uint uStack_3c;
  FString local_2c [16];
  undefined1 *local_1c;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_1020c2d2;
  local_10 = ExceptionList;
  uStack_3c = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_3c;
  ExceptionList = &local_10;
  local_8 = 0;
  puVar1 = &uStack_3c;
  if (*(int *)(DAT_103663bc + 0x5064) != 0) {
    FUN_100457c0();
    puVar1 = (uint *)local_14;
  }
  local_14 = (undefined1 *)puVar1;
  if (*(int *)(DAT_103663bc + 0x5110) != 0) {
    FUN_101afe80();
  }
  uStack_44 = 0x1015121e;
  FString::FString(local_2c,(ushort *)&DAT_1022f9f8);
  local_8._0_1_ = 1;
  uStack_44 = 0x28;
  uStack_48 = 0x1015122d;
  FUN_10005c30();
  uStack_48 = 0x10151234;
  FUN_100d1790();
  local_8._0_1_ = 0;
  FString::~FString(local_2c);
  local_1c = (undefined1 *)&uStack_48;
  FString::FString((FString *)&uStack_48,(ushort *)L"LoadingState");
  local_8 = (uint)local_8._1_3_ << 8;
  FUN_10070110();
  ExceptionList = local_10;
  return;
}


// ==== 10151284 Catch@10151284

void Catch_10151284(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10151298 Catch@10151298

void Catch_10151298(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NConsoleWnd::RestartBegin");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101512c0 FUN_101512c0

void FUN_101512c0(L2ParamStack *param_1)

{
  void *pvVar1;
  void *pvVar2;
  void *pvVar3;
  undefined4 uVar4;
  undefined1 *puVar5;
  uint uStack_60;
  L2ParamStack local_50 [16];
  FString local_40 [12];
  undefined1 local_34 [24];
  void *local_1c;
  void *local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_1020c32e;
  local_10 = ExceptionList;
  uStack_60 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_60;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_1003f970();
  local_8._0_1_ = 1;
  pvVar1 = L2ParamStack::Top(param_1);
  pvVar2 = L2ParamStack::Top(param_1);
  local_18 = L2ParamStack::Top(param_1);
  local_1c = L2ParamStack::Top(param_1);
  pvVar3 = L2ParamStack::Top(param_1);
  if ((((pvVar1 != (void *)0x0) || (pvVar2 != (void *)0x0)) || (local_18 != (void *)0x0)) ||
     ((local_1c != (void *)0x0 || (pvVar3 != (void *)0x0)))) {
    FString::FString(local_40,(ushort *)L"Village");
    local_8._0_1_ = 2;
    FUN_10040090(local_40,pvVar1 != (void *)0x0);
    local_8._0_1_ = 1;
    FString::~FString(local_40);
    FString::FString(local_40,(ushort *)L"Agit");
    local_8._0_1_ = 3;
    FUN_10040090(local_40,pvVar2 != (void *)0x0);
    local_8._0_1_ = 1;
    FString::~FString(local_40);
    FString::FString(local_40,(ushort *)L"Castle");
    local_8._0_1_ = 4;
    FUN_10040090(local_40,local_18 != (void *)0x0);
    local_8._0_1_ = 1;
    FString::~FString(local_40);
    FString::FString(local_40,(ushort *)L"BattleCamp");
    local_8._0_1_ = 5;
    FUN_10040090(local_40,local_1c != (void *)0x0);
    local_8._0_1_ = 1;
    FString::~FString(local_40);
    FString::FString(local_40,(ushort *)L"Original");
    local_8._0_1_ = 6;
    FUN_10040090(local_40,pvVar3 != (void *)0x0);
    local_8._0_1_ = 1;
    FString::~FString(local_40);
  }
  puVar5 = local_34;
  uVar4 = 0x32;
  FUN_10005c30(0x32,puVar5);
  FUN_100d1790(uVar4,puVar5);
  L2ParamStack::L2ParamStack(local_50,10);
  local_8._0_1_ = 7;
  L2ParamStack::PushBack(param_1,(void *)0x0);
  FUN_101440b0(local_50);
  FUN_1000cb20(0);
  local_8._0_1_ = 1;
  L2ParamStack::~L2ParamStack(local_50);
  local_8 = (uint)local_8._1_3_ << 8;
  FUN_1003fff0();
  ExceptionList = local_10;
  return;
}


// ==== 101514ce Catch@101514ce

void Catch_101514ce(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x20) = *(undefined4 *)(unaff_EBP + -0x24);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x20,&DAT_102a47f0);
}


// ==== 101514e2 Catch@101514e2

void Catch_101514e2(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NConsoleWnd::ReceiveRestartPoint");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10151500 FUN_10151500

void FUN_10151500(void)

{
  uint uVar1;
  FString local_18 [12];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1020c359;
  local_c = ExceptionList;
  uVar1 = DAT_103554c4 ^ (uint)local_18;
  ExceptionList = &local_c;
  FString::FString(local_18,(ushort *)&DAT_1022f9f8);
  local_4 = 0;
  if (DAT_1035786c == 0) {
    FUN_10005270(uVar1);
  }
  FUN_100d1790(0x5a0,local_18);
  local_4 = 0xffffffff;
  FString::~FString(local_18);
  ExceptionList = local_c;
  return;
}


// ==== 10151580 FUN_10151580

void FUN_10151580(void)

{
  uint uVar1;
  FString local_18 [12];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1020c389;
  local_c = ExceptionList;
  uVar1 = DAT_103554c4 ^ (uint)local_18;
  ExceptionList = &local_c;
  FString::FString(local_18,(ushort *)&DAT_1022f9f8);
  local_4 = 0;
  if (DAT_1035786c == 0) {
    FUN_10005270(uVar1);
  }
  FUN_100d1790(0x596,local_18);
  local_4 = 0xffffffff;
  FString::~FString(local_18);
  ExceptionList = local_c;
  return;
}


// ==== 10151600 FUN_10151600

void FUN_10151600(ushort *param_1,ushort *param_2,ushort *param_3)

{
  undefined1 uVar1;
  FString *this;
  int iVar2;
  FString aFStack_78 [4];
  undefined4 uStack_74;
  FString aFStack_6c [4];
  undefined4 uStack_68;
  FString *pFStack_64;
  uint uStack_5c;
  FString local_4c [12];
  FString local_40 [28];
  undefined1 *local_24;
  undefined1 *local_20;
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_1020c409;
  local_10 = ExceptionList;
  uStack_5c = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_5c;
  ExceptionList = &local_10;
  local_8 = 0;
  local_18 = 1;
  local_20 = aFStack_6c;
  uStack_74 = 0x10151653;
  FString::FString(aFStack_6c,(ushort *)L"ShowZoneTitle");
  local_8._0_1_ = 1;
  local_24 = aFStack_78;
  FString::FString(aFStack_78,(ushort *)L"Game");
  local_8 = (uint)local_8._1_3_ << 8;
  FUN_10042370();
  if (local_18 != 0) {
    pFStack_64 = (FString *)0x1015169b;
    this = (FString *)FUN_1014ad10();
    local_8._0_1_ = 3;
    pFStack_64 = (FString *)0x101516ac;
    iVar2 = FString::operator==(this,(ushort *)L"GAMINGSTATE");
    local_8._0_1_ = 0;
    FString::~FString(local_4c);
    if (iVar2 != 0) {
      FUN_1003f970();
      local_8._0_1_ = 4;
      uVar1 = (undefined1)local_8;
      local_8._0_1_ = 4;
      if (param_1 != (ushort *)0x0) {
        pFStack_64 = (FString *)0x101516e1;
        FString::FString(local_4c,param_1);
        local_8._0_1_ = 5;
        pFStack_64 = (FString *)0x101516f3;
        FString::FString(local_40,"ZoneName");
        local_8._0_1_ = 6;
        pFStack_64 = local_40;
        uStack_68 = 0x10151707;
        FUN_10040230();
        local_8._0_1_ = 5;
        FString::~FString(local_40);
        local_8._0_1_ = 4;
        FString::~FString(local_4c);
        uVar1 = (undefined1)local_8;
      }
      local_8._0_1_ = uVar1;
      if (param_2 != (ushort *)0x0) {
        pFStack_64 = (FString *)0x10151731;
        FString::FString(local_40,param_2);
        local_8._0_1_ = 7;
        pFStack_64 = (FString *)0x10151743;
        FString::FString(local_4c,"SubZoneName1");
        local_8._0_1_ = 8;
        pFStack_64 = local_4c;
        uStack_68 = 0x10151757;
        FUN_10040230();
        local_8._0_1_ = 7;
        FString::~FString(local_4c);
        local_8._0_1_ = 4;
        FString::~FString(local_40);
      }
      if (param_3 != (ushort *)0x0) {
        pFStack_64 = (FString *)0x10151781;
        FString::FString(local_40,param_3);
        local_8._0_1_ = 9;
        pFStack_64 = (FString *)0x10151793;
        FString::FString(local_4c,"SubZoneName2");
        local_8._0_1_ = 10;
        pFStack_64 = local_4c;
        uStack_68 = 0x101517a7;
        FUN_10040230();
        local_8._0_1_ = 9;
        FString::~FString(local_4c);
        local_8._0_1_ = 4;
        FString::~FString(local_40);
      }
      pFStack_64 = (FString *)0x974;
      uStack_68 = 0x101517ce;
      FUN_10005c30();
      uStack_68 = 0x101517d5;
      FUN_100d1790();
      local_8 = (uint)local_8._1_3_ << 8;
      FUN_1003fff0();
    }
  }
  ExceptionList = local_10;
  return;
}


// ==== 101517fc Catch@101517fc

void Catch_101517fc(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x24);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 10151810 Catch@10151810

void Catch_10151810(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NConsoleWnd::ShowZoneTitle");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10151830 FUN_10151830

void FUN_10151830(int param_1)

{
  undefined4 uVar1;
  FString *pFVar2;
  uint uStack_38;
  FString local_28 [20];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_1020c442;
  local_10 = ExceptionList;
  uStack_38 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_38;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_101b29e0();
  FString::FString(local_28,(ushort *)&DAT_1022f9f8);
  local_8._0_1_ = 1;
  pFVar2 = local_28;
  uVar1 = 0xa0a;
  FUN_10005c30(0xa0a,pFVar2);
  FUN_100d1790(uVar1,pFVar2);
  local_8._0_1_ = 0;
  FString::~FString(local_28);
  if (param_1 != 0) {
    FString::FString(local_28,(ushort *)&DAT_1022f9f8);
    local_8._0_1_ = 2;
    pFVar2 = local_28;
    uVar1 = 0xa14;
    FUN_10005c30(0xa14,pFVar2);
    FUN_100d1790(uVar1,pFVar2);
    local_8 = (uint)local_8._1_3_ << 8;
    FString::~FString(local_28);
  }
  ExceptionList = local_10;
  return;
}


// ==== 101518f6 Catch@101518f6

void Catch_101518f6(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1015190a Catch@1015190a

void Catch_1015190a(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NConsoleWnd::ReceiveItemList");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10151930 FUN_10151930

void FUN_10151930(void)

{
  undefined4 uVar1;
  FString *pFVar2;
  uint uStack_38;
  FString local_28 [20];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_1020c469;
  local_10 = ExceptionList;
  uStack_38 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_38;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_101b29e0();
  FString::FString(local_28,(ushort *)&DAT_1022f9f8);
  local_8._0_1_ = 1;
  pFVar2 = local_28;
  uVar1 = 0xa0a;
  FUN_10005c30(0xa0a,pFVar2);
  FUN_100d1790(uVar1,pFVar2);
  local_8 = (uint)local_8._1_3_ << 8;
  FString::~FString(local_28);
  ExceptionList = local_10;
  return;
}


// ==== 101519bf Catch@101519bf

void Catch_101519bf(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 101519d3 Catch@101519d3

void Catch_101519d3(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NConsoleWnd::ReceiveUpdateItemList");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101519f0 FUN_101519f0

void FUN_101519f0(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  uint uStack_38;
  undefined1 local_28 [20];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  puStack_c = &LAB_1020c498;
  local_10 = ExceptionList;
  uStack_38 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_38;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_1003f970();
  local_8 = CONCAT31(local_8._1_3_,1);
  iVar1 = FUN_10065fe0(param_1,local_28);
  if (iVar1 != 0) {
    FUN_101b3060(param_1);
    puVar3 = local_28;
    uVar2 = 0xa28;
    FUN_10005c30(0xa28,puVar3);
    FUN_100d1790(uVar2,puVar3);
  }
  local_8 = local_8 & 0xffffff00;
  FUN_1003fff0();
  ExceptionList = local_10;
  return;
}


// ==== 10151a90 Catch@10151a90

void Catch_10151a90(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10151aa4 Catch@10151aa4

void Catch_10151aa4(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NConsoleWnd::AddInventoryItem");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10151ad0 FUN_10151ad0

void FUN_10151ad0(int param_1,undefined4 param_2)

{
  uint *puVar1;
  int iVar2;
  FString *this;
  undefined1 uVar3;
  undefined4 uVar4;
  undefined1 *puVar5;
  uint uStack_50;
  FString local_40 [12];
  FString local_34 [12];
  undefined1 local_28 [20];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_1020c4fe;
  local_10 = ExceptionList;
  uStack_50 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_50;
  ExceptionList = &local_10;
  local_8 = 0;
  puVar1 = &uStack_50;
  if (((param_1 != 1) && (puVar1 = &uStack_50, param_1 != 2)) && (puVar1 = &uStack_50, param_1 != 3)
     ) {
    appFailAssert("iWorkType == IUT_ADD || iWorkType == IUT_UPDATE || iWorkType == IUT_DELETE",
                  ".\\Src\\NConsoleWindow.cpp",0xb4c);
    puVar1 = (uint *)local_14;
  }
  local_14 = (undefined1 *)puVar1;
  FUN_1003f970();
  local_8._0_1_ = 1;
  if (param_1 == 1) {
    FString::FString(local_40,(ushort *)&DAT_102822b4);
    local_8._0_1_ = 2;
    FString::FString(local_34,(ushort *)L"type");
    local_8._0_1_ = 3;
    FUN_10040230(local_34,local_40);
    local_8._0_1_ = 2;
    FString::~FString(local_34);
    this = local_40;
  }
  else {
    if (param_1 == 2) {
      FString::FString(local_34,(ushort *)L"update");
      uVar3 = 4;
      local_8._0_1_ = 4;
      FString::FString(local_40,(ushort *)L"type");
      local_8._0_1_ = 5;
    }
    else {
      if (param_1 != 3) goto LAB_10151c11;
      FString::FString(local_34,(ushort *)L"delete");
      uVar3 = 6;
      local_8._0_1_ = 6;
      FString::FString(local_40,(ushort *)L"type");
      local_8._0_1_ = 7;
    }
    FUN_10040230(local_40,local_34);
    local_8._0_1_ = uVar3;
    FString::~FString(local_40);
    this = local_34;
  }
  local_8._0_1_ = 1;
  FString::~FString(this);
LAB_10151c11:
  iVar2 = FUN_10065fe0(param_2,local_28);
  if (iVar2 != 0) {
    FUN_101b3670(param_1,param_2);
    puVar5 = local_28;
    uVar4 = 0xa32;
    FUN_10005c30(0xa32,puVar5);
    FUN_100d1790(uVar4,puVar5);
  }
  local_8 = (uint)local_8._1_3_ << 8;
  FUN_1003fff0();
  ExceptionList = local_10;
  return;
}


// ==== 10151c74 Catch@10151c74

void Catch_10151c74(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10151c88 Catch@10151c88

void Catch_10151c88(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NConsoleWnd::UpdateInventoryItem");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10151cb0 FUN_10151cb0

void FUN_10151cb0(void)

{
  uint uVar1;
  FString local_18 [12];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1020c529;
  local_c = ExceptionList;
  uVar1 = DAT_103554c4 ^ (uint)local_18;
  ExceptionList = &local_c;
  FString::FString(local_18,(ushort *)&DAT_1022f9f8);
  local_4 = 0;
  if (DAT_1035786c == 0) {
    FUN_10005270(uVar1);
  }
  FUN_100d1790(0xa3c,local_18);
  local_4 = 0xffffffff;
  FString::~FString(local_18);
  ExceptionList = local_c;
  return;
}


// ==== 10151d30 FUN_10151d30

void FUN_10151d30(undefined4 param_1)

{
  int iVar1;
  UPackage *pUVar2;
  UObject *pUVar3;
  int *piVar4;
  int iVar5;
  undefined1 local_60 [12];
  FString local_54 [12];
  undefined2 local_48 [2];
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined2 local_2c;
  undefined2 local_2a;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1020c561;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_1003f970(DAT_103554c4 ^ (uint)&stack0xffffff90);
  local_4 = 0;
  FString::FString(local_54,(ushort *)L"ClassID");
  local_4._0_1_ = 1;
  FUN_10040090(local_54,param_1);
  local_4 = (uint)local_4._1_3_ << 8;
  FString::~FString(local_54);
  if (DAT_1035786c == 0) {
    FUN_10005270();
  }
  FUN_100d1790(0xb2c,local_60);
  iVar5 = 0;
  iVar1 = FUN_101b2220();
  if (0 < iVar1) {
    do {
      local_48[0] = 0xffff;
      local_44 = 0;
      local_40 = 0;
      local_3c = 0;
      local_38 = 0;
      local_34 = 0;
      local_30 = 0;
      local_28 = 0;
      local_2c = 0;
      local_2a = 0;
      local_24 = 0;
      local_20 = 0;
      local_1c = 0xffffffff;
      local_18 = 0;
      local_14 = 0;
      local_10 = 0xffffffff;
      iVar1 = FUN_101b25a0(iVar5,local_48);
      if (iVar1 != 0) {
        FName::FName((FName *)&param_1,0);
        pUVar2 = UObject::GetTransientPackage();
        pUVar3 = UObject::StaticAllocateObject
                           (&DAT_10363f50,pUVar2,param_1,0,0,*(undefined4 *)GError_exref,0,0);
        if (pUVar3 == (UObject *)0x0) {
          piVar4 = (int *)0x0;
        }
        else {
          piVar4 = (int *)FUN_1002f690(local_48);
        }
        iVar1 = piVar4[0x794];
        if (((iVar1 == 0) || (iVar1 == 1)) || (iVar1 == 2)) {
          FUN_1003faa0();
          iVar1 = FUN_10065fe0(local_48,local_60);
          if (iVar1 != 0) {
            if (DAT_1035786c == 0) {
              FUN_10005270();
            }
            FUN_100d1790(0xb40,local_60);
          }
        }
        else {
          (**(code **)(*piVar4 + 0xc))(1);
        }
      }
      iVar5 = iVar5 + 1;
      iVar1 = FUN_101b2220();
    } while (iVar5 < iVar1);
  }
  iVar5 = 0;
  iVar1 = FUN_101b2320();
  if (0 < iVar1) {
    do {
      local_48[0] = 0xffff;
      local_1c = 0xffffffff;
      local_10 = 0xffffffff;
      local_44 = 0;
      local_40 = 0;
      local_3c = 0;
      local_38 = 0;
      local_34 = 0;
      local_30 = 0;
      local_28 = 0;
      local_2c = 0;
      local_2a = 0;
      local_24 = 0;
      local_20 = 0;
      local_18 = 0;
      local_14 = 0;
      iVar1 = FUN_101b2720(iVar5,local_48);
      if (iVar1 != 0) {
        FName::FName((FName *)&param_1,0);
        pUVar2 = UObject::GetTransientPackage();
        pUVar3 = UObject::StaticAllocateObject
                           (&DAT_10363f50,pUVar2,param_1,0,0,*(undefined4 *)GError_exref,0,0);
        if (pUVar3 == (UObject *)0x0) {
          piVar4 = (int *)0x0;
        }
        else {
          piVar4 = (int *)FUN_1002f690(local_48);
        }
        iVar1 = piVar4[0x794];
        if (((iVar1 == 0) || (iVar1 == 1)) || (iVar1 == 2)) {
          FUN_1003faa0();
          iVar1 = FUN_10065fe0(local_48,local_60);
          if (iVar1 != 0) {
            if (DAT_1035786c == 0) {
              FUN_10005270();
            }
            FUN_100d1790(0xb40,local_60);
          }
        }
        else {
          (**(code **)(*piVar4 + 0xc))(1);
        }
      }
      iVar5 = iVar5 + 1;
      iVar1 = FUN_101b2320();
    } while (iVar5 < iVar1);
  }
  local_4 = 0xffffffff;
  FUN_1003fff0();
  ExceptionList = local_c;
  return;
}


// ==== 10152070 FUN_10152070

void FUN_10152070(undefined4 param_1)

{
  undefined1 local_24 [12];
  FString local_18 [12];
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1020c591;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_1003f970(DAT_103554c4 ^ (uint)local_24);
  local_4 = 0;
  FString::FString(local_18,(ushort *)L"Result");
  local_4._0_1_ = 1;
  FUN_10040090(local_18,param_1);
  local_4 = (uint)local_4._1_3_ << 8;
  FString::~FString(local_18);
  if (DAT_1035786c == 0) {
    FUN_10005270();
  }
  FUN_100d1790(0xb4a,local_24);
  local_4 = 0xffffffff;
  FUN_1003fff0();
  ExceptionList = local_c;
  return;
}


// ==== 10152120 FUN_10152120

void FUN_10152120(L2ParamStack *param_1)

{
  uint uVar1;
  void *pvVar2;
  int iVar3;
  int *in_ECX;
  L2ParamStack aLStack_24 [4];
  FString aFStack_20 [12];
  void *pvStack_14;
  void *pvStack_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_1020c5ca;
  local_c = ExceptionList;
  uVar1 = DAT_103554c4 ^ (uint)&stack0xffffffd0;
  ExceptionList = &local_c;
  pvVar2 = L2ParamStack::Top(param_1);
  iVar3 = FUN_10145910(pvVar2,uVar1);
  if (iVar3 != 0) {
    FUN_1003f970();
    puStack_8 = (undefined1 *)0x0;
    FString::FString(aFStack_20,(ushort *)L"targetID");
    puStack_8._0_1_ = 1;
    FUN_10040090(aFStack_20,pvVar2);
    puStack_8 = (undefined1 *)((uint)puStack_8._1_3_ << 8);
    FString::~FString(aFStack_20);
    if (DAT_1035786c == 0) {
      FUN_10005270();
    }
    FUN_100d1790(2000,&stack0xffffffd4);
    puStack_8 = (undefined1 *)0xffffffff;
    FUN_1003fff0();
    ExceptionList = pvStack_10;
    return;
  }
  L2ParamStack::L2ParamStack((L2ParamStack *)aFStack_20,10);
  puStack_8 = (undefined1 *)0x2;
  L2ParamStack::PushBack((L2ParamStack *)aFStack_20,(void *)0x0);
  (**(code **)(*in_ECX + 0x7d4))(aFStack_20);
  local_c = (void *)0xffffffff;
  L2ParamStack::~L2ParamStack(aLStack_24);
  ExceptionList = pvStack_14;
  return;
}


// ==== 10152250 FUN_10152250

void FUN_10152250(undefined4 param_1)

{
  undefined4 uVar1;
  FString *pFVar2;
  undefined1 *puVar3;
  uint uStack_44;
  FString local_34 [12];
  undefined1 local_28 [20];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_1020c60a;
  local_10 = ExceptionList;
  uStack_44 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_44;
  ExceptionList = &local_10;
  local_8 = 0;
  FString::FString(local_34,(ushort *)&DAT_1022f9f8);
  local_8._0_1_ = 1;
  pFVar2 = local_34;
  uVar1 = 0xa1e;
  FUN_10005c30(0xa1e,pFVar2);
  FUN_100d1790(uVar1,pFVar2);
  local_8._0_1_ = 0;
  FString::~FString(local_34);
  FUN_1003f970();
  local_8._0_1_ = 2;
  FString::FString(local_34,(ushort *)L"targetID");
  local_8._0_1_ = 3;
  FUN_10040090(local_34,param_1);
  local_8._0_1_ = 2;
  FString::~FString(local_34);
  puVar3 = local_28;
  uVar1 = 0x79e;
  FUN_10005c30(0x79e,puVar3);
  FUN_100d1790(uVar1,puVar3);
  local_8 = (uint)local_8._1_3_ << 8;
  FUN_1003fff0();
  ExceptionList = local_10;
  return;
}


// ==== 10152329 Catch@10152329

void Catch_10152329(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1015233d Catch@1015233d

void Catch_1015233d(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NConsoleWnd::ReceiveTradeStart");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10152360 FUN_10152360

void FUN_10152360(void)

{
  int iVar1;
  undefined1 local_30 [12];
  FString local_24 [12];
  FString local_18 [12];
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1020c64a;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_1003f970(DAT_103554c4 ^ (uint)local_30);
  local_4 = 0;
  iVar1 = FUN_10065fe0(&stack0x00000004,local_30);
  if (iVar1 != 0) {
    FString::FString(local_18,(ushort *)L"inventoryList");
    local_4._0_1_ = 1;
    FString::FString(local_24,(ushort *)L"destination");
    local_4._0_1_ = 2;
    FUN_10040230(local_24,local_18);
    local_4._0_1_ = 1;
    FString::~FString(local_24);
    local_4 = (uint)local_4._1_3_ << 8;
    FString::~FString(local_18);
    if (DAT_1035786c == 0) {
      FUN_10005270();
    }
    FUN_100d1790(0x7a8,local_30);
  }
  local_4 = 0xffffffff;
  FUN_1003fff0();
  ExceptionList = local_c;
  return;
}


// ==== 10152450 FUN_10152450

void FUN_10152450(void)

{
  int iVar1;
  undefined1 local_30 [12];
  FString local_24 [12];
  FString local_18 [12];
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1020c68a;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_1003f970(DAT_103554c4 ^ (uint)local_30);
  local_4 = 0;
  iVar1 = FUN_10065fe0(&stack0x00000004,local_30);
  if (iVar1 != 0) {
    FString::FString(local_18,(ushort *)L"myList");
    local_4._0_1_ = 1;
    FString::FString(local_24,(ushort *)L"destination");
    local_4._0_1_ = 2;
    FUN_10040230(local_24,local_18);
    local_4._0_1_ = 1;
    FString::~FString(local_24);
    local_4 = (uint)local_4._1_3_ << 8;
    FString::~FString(local_18);
    if (DAT_1035786c == 0) {
      FUN_10005270();
    }
    FUN_100d1790(0x7a8,local_30);
  }
  local_4 = 0xffffffff;
  FUN_1003fff0();
  ExceptionList = local_c;
  return;
}


// ==== 10152540 FUN_10152540

void FUN_10152540(void)

{
  int iVar1;
  undefined1 local_30 [12];
  FString local_24 [12];
  FString local_18 [12];
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1020c6ca;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_1003f970(DAT_103554c4 ^ (uint)local_30);
  local_4 = 0;
  iVar1 = FUN_10065fe0(&stack0x00000004,local_30);
  if (iVar1 != 0) {
    FString::FString(local_18,(ushort *)L"otherList");
    local_4._0_1_ = 1;
    FString::FString(local_24,(ushort *)L"destination");
    local_4._0_1_ = 2;
    FUN_10040230(local_24,local_18);
    local_4._0_1_ = 1;
    FString::~FString(local_24);
    local_4 = (uint)local_4._1_3_ << 8;
    FString::~FString(local_18);
    if (DAT_1035786c == 0) {
      FUN_10005270();
    }
    FUN_100d1790(0x7a8,local_30);
  }
  local_4 = 0xffffffff;
  FUN_1003fff0();
  ExceptionList = local_c;
  return;
}


// ==== 10152630 FUN_10152630

void FUN_10152630(int param_1,undefined4 param_2)

{
  int iVar1;
  FString *this;
  undefined1 uVar2;
  undefined1 local_30 [12];
  FString local_24 [12];
  FString local_18 [12];
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1020c72e;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_1003f970(DAT_103554c4 ^ (uint)&stack0xffffffcc);
  local_4 = 0;
  iVar1 = FUN_10065fe0(param_2,local_30);
  if (iVar1 == 0) goto LAB_1015279f;
  if (param_1 == 1) {
    FString::FString(local_18,(ushort *)&DAT_102822b4);
    local_4._0_1_ = 1;
    FString::FString(local_24,(ushort *)L"type");
    local_4._0_1_ = 2;
    FUN_10040230(local_24,local_18);
    local_4._0_1_ = 1;
    FString::~FString(local_24);
    this = local_18;
LAB_10152776:
    local_4 = (uint)local_4._1_3_ << 8;
    FString::~FString(this);
  }
  else {
    uVar2 = 3;
    if (param_1 == 3) {
      FString::FString(local_24,(ushort *)L"update");
      local_4._0_1_ = 3;
      FString::FString(local_18,(ushort *)L"type");
      local_4._0_1_ = 4;
LAB_10152756:
      FUN_10040230(local_18,local_24);
      local_4._0_1_ = uVar2;
      FString::~FString(local_18);
      this = local_24;
      goto LAB_10152776;
    }
    if (param_1 == 2) {
      FString::FString(local_24,(ushort *)L"delete");
      uVar2 = 5;
      local_4._0_1_ = 5;
      FString::FString(local_18,(ushort *)L"type");
      local_4._0_1_ = 6;
      goto LAB_10152756;
    }
  }
  if (DAT_1035786c == 0) {
    FUN_10005270();
  }
  FUN_100d1790(0x7c6,local_30);
LAB_1015279f:
  local_4 = 0xffffffff;
  FUN_1003fff0();
  ExceptionList = local_c;
  return;
}


// ==== 101527d0 FUN_101527d0

void FUN_101527d0(void)

{
  int iVar1;
  int in_ECX;
  undefined4 uVar2;
  FString *pFVar3;
  uint uStack_38;
  FString local_28 [20];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_1020c759;
  local_10 = ExceptionList;
  uStack_38 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_38;
  ExceptionList = &local_10;
  local_8 = 0;
  FString::FString(local_28,(ushort *)&DAT_1022f9f8);
  local_8._0_1_ = 1;
  pFVar3 = local_28;
  uVar2 = 0x7b2;
  FUN_10005c30(0x7b2,pFVar3);
  FUN_100d1790(uVar2,pFVar3);
  local_8 = (uint)local_8._1_3_ << 8;
  FString::~FString(local_28);
  iVar1 = (**(code **)(**(int **)(*(int *)(in_ECX + 0x50ac) + 0x22c) + 0xfc))(0);
  if (iVar1 != 0) {
    (**(code **)(**(int **)(*(int *)(in_ECX + 0x50ac) + 0x22c) + 0x13c))();
  }
  ExceptionList = local_10;
  return;
}


// ==== 10152885 Catch@10152885

void Catch_10152885(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10152899 Catch@10152899

void Catch_10152899(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NConsoleWnd::ReceiveTradeDoneMsg");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101528c0 FUN_101528c0

void FUN_101528c0(void)

{
  undefined4 uVar1;
  FString *pFVar2;
  uint uStack_38;
  FString local_28 [20];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_1020c789;
  local_10 = ExceptionList;
  uStack_38 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_38;
  ExceptionList = &local_10;
  local_8 = 0;
  FString::FString(local_28,(ushort *)&DAT_1022f9f8);
  local_8._0_1_ = 1;
  pFVar2 = local_28;
  uVar1 = 0x7bc;
  FUN_10005c30(0x7bc,pFVar2);
  FUN_100d1790(uVar1,pFVar2);
  local_8 = (uint)local_8._1_3_ << 8;
  FString::~FString(local_28);
  ExceptionList = local_10;
  return;
}


// ==== 1015293f Catch@1015293f

void Catch_1015293f(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10152953 Catch@10152953

void Catch_10152953(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NConsoleWnd::TradePressOtherOk");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10152970 FUN_10152970

void FUN_10152970(undefined4 param_1,undefined4 param_2)

{
  int in_ECX;
  undefined4 uVar1;
  undefined1 *puVar2;
  uint uStack_50;
  FString local_40 [12];
  FString local_34 [12];
  undefined1 local_28 [20];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_1020c7dc;
  local_10 = ExceptionList;
  uStack_50 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_50;
  ExceptionList = &local_10;
  local_8 = 0;
  (**(code **)(**(int **)(*(int *)(in_ECX + 0x50ac) + 0x20c) + 0x13c))();
  FUN_1003f970();
  local_8._0_1_ = 1;
  FString::FString(local_40,(ushort *)&DAT_1026cfa0);
  local_8._0_1_ = 2;
  FString::FString(local_34,(ushort *)L"type");
  local_8._0_1_ = 3;
  FUN_10040230(local_34,local_40);
  local_8._0_1_ = 2;
  FString::~FString(local_34);
  local_8._0_1_ = 1;
  FString::~FString(local_40);
  FString::FString(local_40,(ushort *)L"merchant");
  local_8._0_1_ = 4;
  FUN_10040090(local_40,param_2);
  local_8._0_1_ = 1;
  FString::~FString(local_40);
  FString::FString(local_40,(ushort *)L"adena");
  local_8._0_1_ = 5;
  FUN_10040090(local_40,param_1);
  local_8._0_1_ = 1;
  FString::~FString(local_40);
  puVar2 = local_28;
  uVar1 = 0xa78;
  FUN_10005c30(0xa78,puVar2);
  FUN_100d1790(uVar1,puVar2);
  local_8 = (uint)local_8._1_3_ << 8;
  FUN_1003fff0();
  ExceptionList = local_10;
  return;
}


// ==== 10152aaa Catch@10152aaa

void Catch_10152aaa(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10152abe Catch@10152abe

void Catch_10152abe(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NConsoleWnd::ReceiveManorBuyPacket");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10152ae0 FUN_10152ae0

void FUN_10152ae0(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  uint uStack_38;
  undefined1 local_28 [20];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  puStack_c = &LAB_1020c808;
  local_10 = ExceptionList;
  uStack_38 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_38;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_1003f970();
  local_8 = CONCAT31(local_8._1_3_,1);
  iVar1 = FUN_10065fe0(param_1,local_28);
  if (iVar1 != 0) {
    puVar3 = local_28;
    uVar2 = 0xa82;
    FUN_10005c30(0xa82,puVar3);
    FUN_100d1790(uVar2,puVar3);
  }
  local_8 = local_8 & 0xffffff00;
  FUN_1003fff0();
  ExceptionList = local_10;
  return;
}


// ==== 10152b6e Catch@10152b6e

void Catch_10152b6e(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10152b82 Catch@10152b82

void Catch_10152b82(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NConsoleWnd::AddManorBuyItem");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10152ba0 FUN_10152ba0

void FUN_10152ba0(undefined4 param_1,undefined4 param_2)

{
  int in_ECX;
  undefined4 uVar1;
  FString *pFVar2;
  undefined1 *puVar3;
  uint uStack_50;
  FString local_40 [12];
  FString local_34 [12];
  undefined1 local_28 [20];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_1020c865;
  local_10 = ExceptionList;
  uStack_50 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_50;
  ExceptionList = &local_10;
  local_8 = 0;
  (**(code **)(**(int **)(*(int *)(in_ECX + 0x50ac) + 0x20c) + 0x13c))();
  FString::FString(local_34,(ushort *)&DAT_1022f9f8);
  local_8._0_1_ = 1;
  pFVar2 = local_34;
  uVar1 = 0xa1e;
  FUN_10005c30(0xa1e,pFVar2);
  FUN_100d1790(uVar1,pFVar2);
  local_8._0_1_ = 0;
  FString::~FString(local_34);
  FUN_1003f970();
  local_8._0_1_ = 2;
  FString::FString(local_40,(ushort *)L"sell");
  local_8._0_1_ = 3;
  FString::FString(local_34,(ushort *)L"type");
  local_8._0_1_ = 4;
  FUN_10040230(local_34,local_40);
  local_8._0_1_ = 3;
  FString::~FString(local_34);
  local_8._0_1_ = 2;
  FString::~FString(local_40);
  FString::FString(local_40,(ushort *)L"merchant");
  local_8._0_1_ = 5;
  FUN_10040090(local_40,param_2);
  local_8._0_1_ = 2;
  FString::~FString(local_40);
  FString::FString(local_40,(ushort *)L"adena");
  local_8._0_1_ = 6;
  FUN_10040090(local_40,param_1);
  local_8._0_1_ = 2;
  FString::~FString(local_40);
  puVar3 = local_28;
  uVar1 = 0xa78;
  FUN_10005c30(0xa78,puVar3);
  FUN_100d1790(uVar1,puVar3);
  local_8 = (uint)local_8._1_3_ << 8;
  FUN_1003fff0();
  ExceptionList = local_10;
  return;
}


// ==== 10152d0e Catch@10152d0e

void Catch_10152d0e(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10152d22 Catch@10152d22

void Catch_10152d22(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NConsoleWnd::ReceiveManorSellPacket");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10152d40 FUN_10152d40

void FUN_10152d40(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  uint uStack_38;
  undefined1 local_28 [20];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  puStack_c = &LAB_1020c888;
  local_10 = ExceptionList;
  uStack_38 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_38;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_1003f970();
  local_8 = CONCAT31(local_8._1_3_,1);
  iVar1 = FUN_10065fe0(param_1,local_28);
  if (iVar1 != 0) {
    puVar3 = local_28;
    uVar2 = 0xa82;
    FUN_10005c30(0xa82,puVar3);
    FUN_100d1790(uVar2,puVar3);
  }
  local_8 = local_8 & 0xffffff00;
  FUN_1003fff0();
  ExceptionList = local_10;
  return;
}


// ==== 10152dce Catch@10152dce

void Catch_10152dce(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10152de2 Catch@10152de2

void Catch_10152de2(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NConsoleWnd::AddManorSellItem");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10152e00 FUN_10152e00

void FUN_10152e00(undefined4 param_1,undefined4 param_2)

{
  int in_ECX;
  undefined1 auStack_30 [12];
  FString aFStack_24 [12];
  FString aFStack_18 [12];
  void *local_c;
  undefined1 *puStack_8;
  int iStack_4;
  
  iStack_4 = 0xffffffff;
  puStack_8 = &LAB_1020c8dc;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  (**(code **)(**(int **)(*(int *)(in_ECX + 0x50ac) + 0x20c) + 0x13c))
            (DAT_103554c4 ^ (uint)&stack0xffffffcc);
  FUN_1003f970();
  iStack_4 = 0;
  FString::FString(aFStack_18,(ushort *)&DAT_1026cfa0);
  iStack_4._0_1_ = 1;
  FString::FString(aFStack_24,(ushort *)L"type");
  iStack_4._0_1_ = 2;
  FUN_10040230(aFStack_24,aFStack_18);
  iStack_4._0_1_ = 1;
  FString::~FString(aFStack_24);
  iStack_4._0_1_ = 0;
  FString::~FString(aFStack_18);
  FString::FString(aFStack_18,(ushort *)L"merchant");
  iStack_4._0_1_ = 3;
  FUN_10040090(aFStack_18,param_2);
  iStack_4._0_1_ = 0;
  FString::~FString(aFStack_18);
  FString::FString(aFStack_18,(ushort *)L"adena");
  iStack_4._0_1_ = 4;
  FUN_10040090(aFStack_18,param_1);
  iStack_4 = (uint)iStack_4._1_3_ << 8;
  FString::~FString(aFStack_18);
  if (DAT_1035786c == 0) {
    FUN_10005270();
  }
  FUN_100d1790(0x820,auStack_30);
  iStack_4 = 0xffffffff;
  FUN_1003fff0();
  ExceptionList = local_c;
  return;
}


// ==== 10152f60 FUN_10152f60

void FUN_10152f60(undefined4 param_1)

{
  int iVar1;
  undefined1 local_18 [12];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1020c908;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_1003f970(DAT_103554c4 ^ (uint)local_18);
  local_4 = 0;
  iVar1 = FUN_10065fe0(param_1,local_18);
  if (iVar1 != 0) {
    if (DAT_1035786c == 0) {
      FUN_10005270();
    }
    FUN_100d1790(0x82a,local_18);
  }
  local_4 = 0xffffffff;
  FUN_1003fff0();
  ExceptionList = local_c;
  return;
}


// ==== 10152ff0 FUN_10152ff0

void FUN_10152ff0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int in_ECX;
  undefined4 uVar1;
  undefined1 *puVar2;
  uint uStack_50;
  FString local_40 [12];
  FString local_34 [12];
  undefined1 local_28 [20];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_1020c965;
  local_10 = ExceptionList;
  uStack_50 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_50;
  ExceptionList = &local_10;
  local_8 = 0;
  (**(code **)(**(int **)(*(int *)(in_ECX + 0x50ac) + 0x20c) + 0x13c))();
  FUN_1003f970();
  local_8._0_1_ = 1;
  FString::FString(local_40,(ushort *)L"preview");
  local_8._0_1_ = 2;
  FString::FString(local_34,(ushort *)L"type");
  local_8._0_1_ = 3;
  FUN_10040230(local_34,local_40);
  local_8._0_1_ = 2;
  FString::~FString(local_34);
  local_8._0_1_ = 1;
  FString::~FString(local_40);
  FString::FString(local_40,(ushort *)L"merchant");
  local_8._0_1_ = 4;
  FUN_10040090(local_40,param_3);
  local_8._0_1_ = 1;
  FString::~FString(local_40);
  FString::FString(local_40,(ushort *)L"adena");
  local_8._0_1_ = 5;
  FUN_10040090(local_40,param_2);
  local_8._0_1_ = 1;
  FString::~FString(local_40);
  FString::FString(local_40,(ushort *)&DAT_1026ce24);
  local_8._0_1_ = 6;
  FUN_10040090(local_40,param_1);
  local_8._0_1_ = 1;
  FString::~FString(local_40);
  puVar2 = local_28;
  uVar1 = 0x820;
  FUN_10005c30(0x820,puVar2);
  FUN_100d1790(uVar1,puVar2);
  local_8 = (uint)local_8._1_3_ << 8;
  FUN_1003fff0();
  ExceptionList = local_10;
  return;
}


// ==== 10153158 Catch@10153158

void Catch_10153158(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1015316c Catch@1015316c

void Catch_1015316c(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NConsoleWnd::ReceivePreviewPacket");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10153190 FUN_10153190

void FUN_10153190(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  uint uStack_38;
  undefined1 local_28 [20];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  puStack_c = &LAB_1020c988;
  local_10 = ExceptionList;
  uStack_38 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_38;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_1003f970();
  local_8 = CONCAT31(local_8._1_3_,1);
  iVar1 = FUN_10065fe0(param_1,local_28);
  if (iVar1 != 0) {
    puVar3 = local_28;
    uVar2 = 0x82a;
    FUN_10005c30(0x82a,puVar3);
    FUN_100d1790(uVar2,puVar3);
  }
  local_8 = local_8 & 0xffffff00;
  FUN_1003fff0();
  ExceptionList = local_10;
  return;
}


// ==== 1015321e Catch@1015321e

void Catch_1015321e(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10153232 Catch@10153232

void Catch_10153232(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NConsoleWnd::AddPreviewItem");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10153250 FUN_10153250

void FUN_10153250(undefined4 param_1,undefined4 param_2)

{
  int in_ECX;
  undefined1 auStack_30 [12];
  FString aFStack_24 [12];
  FString aFStack_18 [12];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_1020c9e5;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  (**(code **)(**(int **)(*(int *)(in_ECX + 0x50ac) + 0x20c) + 0x13c))
            (DAT_103554c4 ^ (uint)&stack0xffffffcc);
  FString::FString(aFStack_24,(ushort *)&DAT_1022f9f8);
  uStack_4 = 0;
  if (DAT_1035786c == 0) {
    FUN_10005270();
  }
  FUN_100d1790(0xa1e,aFStack_24);
  uStack_4 = 0xffffffff;
  FString::~FString(aFStack_24);
  FUN_1003f970();
  uStack_4 = 1;
  FString::FString(aFStack_18,(ushort *)L"sell");
  uStack_4._0_1_ = 2;
  FString::FString(aFStack_24,(ushort *)L"type");
  uStack_4._0_1_ = 3;
  FUN_10040230(aFStack_24,aFStack_18);
  uStack_4._0_1_ = 2;
  FString::~FString(aFStack_24);
  uStack_4._0_1_ = 1;
  FString::~FString(aFStack_18);
  FString::FString(aFStack_18,(ushort *)L"merchant");
  uStack_4._0_1_ = 4;
  FUN_10040090(aFStack_18,param_2);
  uStack_4._0_1_ = 1;
  FString::~FString(aFStack_18);
  FString::FString(aFStack_18,(ushort *)L"adena");
  uStack_4._0_1_ = 5;
  FUN_10040090(aFStack_18,param_1);
  uStack_4 = CONCAT31(uStack_4._1_3_,1);
  FString::~FString(aFStack_18);
  if (DAT_1035786c == 0) {
    FUN_10005270();
  }
  FUN_100d1790(0x820,auStack_30);
  uStack_4 = 0xffffffff;
  FUN_1003fff0();
  ExceptionList = local_c;
  return;
}


// ==== 10153400 FUN_10153400

void FUN_10153400(undefined4 param_1)

{
  int iVar1;
  undefined1 local_18 [12];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1020ca08;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_1003f970(DAT_103554c4 ^ (uint)local_18);
  local_4 = 0;
  iVar1 = FUN_10065fe0(param_1,local_18);
  if (iVar1 != 0) {
    if (DAT_1035786c == 0) {
      FUN_10005270();
    }
    FUN_100d1790(0x82a,local_18);
  }
  local_4 = 0xffffffff;
  FUN_1003fff0();
  ExceptionList = local_c;
  return;
}


// ==== 10153490 FUN_10153490

void FUN_10153490(L2ParamStack *param_1)

{
  void *pvVar1;
  void *pvVar2;
  void *pvVar3;
  void *pvVar4;
  void *pvVar5;
  void *pvVar6;
  void *pvVar7;
  undefined4 uVar8;
  undefined1 *puVar9;
  uint uStack_60;
  FString local_34 [12];
  undefined1 local_28 [20];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_1020ca77;
  local_10 = ExceptionList;
  uStack_60 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_60;
  ExceptionList = &local_10;
  local_8 = 0;
  pvVar1 = L2ParamStack::Top(param_1);
  pvVar2 = L2ParamStack::Top(param_1);
  pvVar3 = L2ParamStack::Top(param_1);
  pvVar4 = L2ParamStack::Top(param_1);
  pvVar5 = L2ParamStack::Top(param_1);
  pvVar6 = L2ParamStack::Top(param_1);
  pvVar7 = L2ParamStack::Top(param_1);
  FUN_1003f970();
  local_8._0_1_ = 1;
  FString::FString(local_34,(ushort *)L"inventory");
  local_8._0_1_ = 2;
  FUN_10040090(local_34,pvVar1);
  local_8._0_1_ = 1;
  FString::~FString(local_34);
  FString::FString(local_34,(ushort *)L"warehousePrivate");
  local_8._0_1_ = 3;
  FUN_10040090(local_34,pvVar2);
  local_8._0_1_ = 1;
  FString::~FString(local_34);
  FString::FString(local_34,(ushort *)L"warehouseClan");
  local_8._0_1_ = 4;
  FUN_10040090(local_34,pvVar3);
  local_8._0_1_ = 1;
  FString::~FString(local_34);
  FString::FString(local_34,(ushort *)L"privateShopSell");
  local_8._0_1_ = 5;
  FUN_10040090(local_34,pvVar4);
  local_8._0_1_ = 1;
  FString::~FString(local_34);
  FString::FString(local_34,(ushort *)L"privateShopBuy");
  local_8._0_1_ = 6;
  FUN_10040090(local_34,pvVar5);
  local_8._0_1_ = 1;
  FString::~FString(local_34);
  FString::FString(local_34,(ushort *)L"dwarvenRecipe");
  local_8._0_1_ = 7;
  FUN_10040090(local_34,pvVar6);
  local_8._0_1_ = 1;
  FString::~FString(local_34);
  FString::FString(local_34,(ushort *)L"recipe");
  local_8._0_1_ = 8;
  FUN_10040090(local_34,pvVar7);
  local_8._0_1_ = 1;
  FString::~FString(local_34);
  puVar9 = local_28;
  uVar8 = 0x816;
  FUN_10005c30(0x816,puVar9);
  FUN_100d1790(uVar8,puVar9);
  local_8 = (uint)local_8._1_3_ << 8;
  FUN_1003fff0();
  ExceptionList = local_10;
  return;
}


// ==== 10153686 Catch@10153686

void Catch_10153686(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1015369a Catch@1015369a

void Catch_1015369a(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NConsoleWnd::OnExStorageMaxCountPacket");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101536c0 FUN_101536c0

void FUN_101536c0(short param_1,undefined4 param_2)

{
  int in_ECX;
  undefined1 auStack_30 [12];
  FString aFStack_24 [12];
  FString aFStack_18 [12];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_1020cad5;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  (**(code **)(**(int **)(*(int *)(in_ECX + 0x50ac) + 0x20c) + 0x13c))
            (DAT_103554c4 ^ (uint)&stack0xffffffcc);
  FString::FString(aFStack_24,(ushort *)&DAT_1022f9f8);
  uStack_4 = 0;
  if (DAT_1035786c == 0) {
    FUN_10005270();
  }
  FUN_100d1790(0xa1e,aFStack_24);
  uStack_4 = 0xffffffff;
  FString::~FString(aFStack_24);
  FUN_1003f970();
  uStack_4 = 1;
  FString::FString(aFStack_24,(ushort *)L"category");
  uStack_4._0_1_ = 2;
  FUN_10040090(aFStack_24,(int)param_1);
  uStack_4._0_1_ = 1;
  FString::~FString(aFStack_24);
  FString::FString(aFStack_18,(ushort *)L"deposit");
  uStack_4._0_1_ = 3;
  FString::FString(aFStack_24,(ushort *)L"type");
  uStack_4._0_1_ = 4;
  FUN_10040230(aFStack_24,aFStack_18);
  uStack_4._0_1_ = 3;
  FString::~FString(aFStack_24);
  uStack_4._0_1_ = 1;
  FString::~FString(aFStack_18);
  FString::FString(aFStack_18,(ushort *)L"adena");
  uStack_4._0_1_ = 5;
  FUN_10040090(aFStack_18,param_2);
  uStack_4 = CONCAT31(uStack_4._1_3_,1);
  FString::~FString(aFStack_18);
  if (DAT_1035786c == 0) {
    FUN_10005270();
  }
  FUN_100d1790(0x834,auStack_30);
  uStack_4 = 0xffffffff;
  FUN_1003fff0();
  ExceptionList = local_c;
  return;
}


// ==== 10153870 FUN_10153870

void FUN_10153870(undefined4 param_1)

{
  int iVar1;
  undefined1 local_18 [12];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1020caf8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_1003f970(DAT_103554c4 ^ (uint)local_18);
  local_4 = 0;
  iVar1 = FUN_10065fe0(param_1,local_18);
  if (iVar1 != 0) {
    if (DAT_1035786c == 0) {
      FUN_10005270();
    }
    FUN_100d1790(0x83e,local_18);
  }
  local_4 = 0xffffffff;
  FUN_1003fff0();
  ExceptionList = local_c;
  return;
}


// ==== 10153900 FUN_10153900

void FUN_10153900(short param_1,undefined4 param_2)

{
  int in_ECX;
  undefined1 auStack_30 [12];
  FString aFStack_24 [12];
  FString aFStack_18 [12];
  void *local_c;
  undefined1 *puStack_8;
  int iStack_4;
  
  iStack_4 = 0xffffffff;
  puStack_8 = &LAB_1020cb4c;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  (**(code **)(**(int **)(*(int *)(in_ECX + 0x50ac) + 0x20c) + 0x13c))
            (DAT_103554c4 ^ (uint)&stack0xffffffcc);
  FUN_1003f970();
  iStack_4 = 0;
  FString::FString(aFStack_24,(ushort *)L"category");
  iStack_4._0_1_ = 1;
  FUN_10040090(aFStack_24,(int)param_1);
  iStack_4._0_1_ = 0;
  FString::~FString(aFStack_24);
  FString::FString(aFStack_18,(ushort *)L"withdraw");
  iStack_4._0_1_ = 2;
  FString::FString(aFStack_24,(ushort *)L"type");
  iStack_4._0_1_ = 3;
  FUN_10040230(aFStack_24,aFStack_18);
  iStack_4._0_1_ = 2;
  FString::~FString(aFStack_24);
  iStack_4._0_1_ = 0;
  FString::~FString(aFStack_18);
  FString::FString(aFStack_18,(ushort *)L"adena");
  iStack_4._0_1_ = 4;
  FUN_10040090(aFStack_18,param_2);
  iStack_4 = (uint)iStack_4._1_3_ << 8;
  FString::~FString(aFStack_18);
  if (DAT_1035786c == 0) {
    FUN_10005270();
  }
  FUN_100d1790(0x834,auStack_30);
  iStack_4 = 0xffffffff;
  FUN_1003fff0();
  ExceptionList = local_c;
  return;
}


// ==== 10153a60 FUN_10153a60

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

void FUN_10153a60(int param_1)

{
  int iVar1;
  undefined1 local_1d00 [7408];
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1020cb7b;
  local_c = ExceptionList;
  local_10 = DAT_103554c4 ^ (uint)local_1d00;
  ExceptionList = &local_c;
  FUN_1002be90(DAT_103554c4 ^ (uint)&stack0xffffe2f8);
  iVar1 = FUN_10187a60((int *)(param_1 + 8));
  if ((-1 < *(int *)(param_1 + 8)) && (iVar1 != 0)) {
    FUN_1003f970();
    local_4 = 0;
    iVar1 = FUN_10065fe0(param_1,local_1d00);
    if (iVar1 != 0) {
      if (DAT_1035786c == 0) {
        FUN_10005270();
      }
      FUN_100d1790(0x83e,local_1d00);
    }
    local_4 = 0xffffffff;
    FUN_1003fff0();
  }
  ExceptionList = local_c;
  __security_check_cookie(local_10 ^ (uint)local_1d00);
  return;
}


// ==== 10153b50 FUN_10153b50

void FUN_10153b50(L2ParamStack *param_1)

{
  void *pvVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  uint uStack_44;
  FString local_34 [12];
  undefined1 local_28 [20];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_1020cbc1;
  local_10 = ExceptionList;
  uStack_44 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_44;
  ExceptionList = &local_10;
  local_8 = 0;
  pvVar1 = L2ParamStack::Top(param_1);
  FUN_1003f970();
  local_8._0_1_ = 1;
  FString::FString(local_34,"QuestID");
  local_8._0_1_ = 2;
  FUN_10040090(local_34,pvVar1);
  local_8._0_1_ = 1;
  FString::~FString(local_34);
  puVar3 = local_28;
  uVar2 = 0x5f0;
  FUN_10005c30(0x5f0,puVar3);
  FUN_100d1790(uVar2,puVar3);
  local_8 = (uint)local_8._1_3_ << 8;
  FUN_1003fff0();
  ExceptionList = local_10;
  return;
}


// ==== 10153c01 Catch@10153c01

void Catch_10153c01(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10153c15 Catch@10153c15

void Catch_10153c15(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NConsoleWnd::ShowQuestMark");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10153c40 FUN_10153c40

void FUN_10153c40(L2ParamStack *param_1)

{
  void *pvVar1;
  void *pvVar2;
  ushort *puVar3;
  FString *pFVar4;
  int in_ECX;
  undefined4 uVar5;
  undefined1 *puVar6;
  uint uStack_12c;
  FString local_11c [12];
  FString local_110 [12];
  FString local_104 [12];
  FString local_f8 [12];
  FString local_ec [12];
  FString local_e0 [12];
  FString local_d4 [12];
  FString local_c8 [12];
  FString local_bc [16];
  FString local_ac [12];
  FString local_a0 [12];
  FString local_94 [12];
  undefined1 *local_88;
  void *local_84;
  undefined1 *puStack_80;
  int local_7c;
  FString local_78 [12];
  FString local_6c [12];
  void *local_60;
  void *local_5c;
  void *local_58;
  void *local_50;
  void *local_4c;
  undefined1 local_48 [12];
  FString local_3c [12];
  void *local_30;
  undefined1 local_2c [12];
  int local_20;
  void *local_1c;
  int local_18;
  int local_14;
  FString local_10 [12];
  
  puStack_80 = &LAB_1020cca4;
  local_84 = ExceptionList;
  uStack_12c = DAT_103554c4 ^ (uint)local_78;
  local_88 = (undefined1 *)&uStack_12c;
  ExceptionList = &local_84;
  local_7c = 0;
  if (*(int *)(in_ECX + 0x50ac) != 0) {
    pvVar1 = L2ParamStack::Top(param_1);
    pvVar2 = L2ParamStack::Top(param_1);
    L2ParamStack::Top(param_1);
    local_4c = L2ParamStack::Top(param_1);
    puVar3 = (ushort *)FUN_10146110(pvVar2);
    FString::FString(local_bc,puVar3);
    local_7c._0_1_ = 1;
    FUN_1003f970();
    local_7c._0_1_ = 2;
    FString::FString(local_10,(ushort *)L"ManorID");
    local_7c._0_1_ = 3;
    FUN_10040090(local_10,pvVar2);
    local_7c._0_1_ = 2;
    FString::~FString(local_10);
    FString::FString(local_10,(ushort *)L"ManorName");
    local_7c._0_1_ = 4;
    FUN_10040230(local_10,local_bc);
    local_7c._0_1_ = 2;
    FString::~FString(local_10);
    FString::FString(local_10,(ushort *)L"MerchantOrChamberlain");
    local_7c._0_1_ = 5;
    FUN_10040090(local_10,(int)(char)pvVar1);
    local_7c = CONCAT31(local_7c._1_3_,2);
    FString::~FString(local_10);
    puVar6 = local_48;
    uVar5 = 0xa5a;
    FUN_10005c30(0xa5a,puVar6);
    FUN_100d1790(uVar5,puVar6);
    for (local_20 = 0; local_20 < (int)local_4c; local_20 = local_20 + 1) {
      local_30 = L2ParamStack::Top(param_1);
      local_50 = L2ParamStack::Top(param_1);
      local_58 = L2ParamStack::Top(param_1);
      local_60 = L2ParamStack::Top(param_1);
      local_5c = L2ParamStack::Top(param_1);
      pvVar1 = L2ParamStack::Top(param_1);
      FString::FString(local_10,(ushort *)&DAT_1022f9f8);
      local_7c._0_1_ = 6;
      FString::FString(local_3c,(ushort *)&DAT_1022f9f8);
      local_7c._0_1_ = 7;
      for (local_14 = 0; local_14 < (char)pvVar1; local_14 = local_14 + 1) {
        local_1c = L2ParamStack::Top(param_1);
        if (local_14 != 0) {
          pFVar4 = (FString *)FString::operator+(local_10,(ushort *)local_f8);
          local_7c._0_1_ = 8;
          FString::operator=(local_10,pFVar4);
          local_7c._0_1_ = 7;
          FString::~FString(local_f8);
        }
        FL2GameData::GetItemName((FL2GameData *)GL2GameData_exref,(int)local_1c);
        pFVar4 = (FString *)FString::operator+(local_10,(ushort *)local_110);
        local_7c._0_1_ = 9;
        FString::operator=(local_10,pFVar4);
        local_7c._0_1_ = 7;
        FString::~FString(local_110);
      }
      pvVar1 = L2ParamStack::Top(param_1);
      for (local_18 = 0; local_18 < (char)pvVar1; local_18 = local_18 + 1) {
        local_1c = L2ParamStack::Top(param_1);
        if (local_18 != 0) {
          pFVar4 = (FString *)FString::operator+(local_3c,(ushort *)local_104);
          local_7c._0_1_ = 10;
          FString::operator=(local_3c,pFVar4);
          local_7c._0_1_ = 7;
          FString::~FString(local_104);
        }
        FL2GameData::GetItemName((FL2GameData *)GL2GameData_exref,(int)local_1c);
        pFVar4 = (FString *)FString::operator+(local_3c,(ushort *)local_11c);
        local_7c._0_1_ = 0xb;
        FString::operator=(local_3c,pFVar4);
        local_7c._0_1_ = 7;
        FString::~FString(local_11c);
      }
      puVar3 = FL2GameData::GetItemName((FL2GameData *)GL2GameData_exref,(int)local_30);
      FString::FString(local_ac,puVar3);
      local_7c._0_1_ = 0xc;
      FUN_1003f970();
      local_7c._0_1_ = 0xd;
      FString::FString(local_ec,(ushort *)L"SeedID");
      local_7c._0_1_ = 0xe;
      FUN_10040090(local_ec,local_30);
      local_7c._0_1_ = 0xd;
      FString::~FString(local_ec);
      FString::FString(local_a0,(ushort *)L"SeedName");
      local_7c._0_1_ = 0xf;
      FUN_10040230(local_a0,local_ac);
      local_7c._0_1_ = 0xd;
      FString::~FString(local_a0);
      FString::FString(local_e0,(ushort *)L"SeedRemainCnt");
      local_7c._0_1_ = 0x10;
      FUN_10040090(local_e0,local_50);
      local_7c._0_1_ = 0xd;
      FString::~FString(local_e0);
      FString::FString(local_6c,(ushort *)L"SeedTotalCnt");
      local_7c._0_1_ = 0x11;
      FUN_10040090(local_6c,local_58);
      local_7c._0_1_ = 0xd;
      FString::~FString(local_6c);
      FString::FString(local_d4,(ushort *)L"SeedPrice");
      local_7c._0_1_ = 0x12;
      FUN_10040090(local_d4,local_60);
      local_7c._0_1_ = 0xd;
      FString::~FString(local_d4);
      FString::FString(local_c8,(ushort *)L"SeedLevel");
      local_7c._0_1_ = 0x13;
      FUN_10040090(local_c8,local_5c);
      local_7c._0_1_ = 0xd;
      FString::~FString(local_c8);
      FString::FString(local_78,(ushort *)L"RewardType1");
      local_7c._0_1_ = 0x14;
      FUN_10040230(local_78,local_10);
      local_7c._0_1_ = 0xd;
      FString::~FString(local_78);
      FString::FString(local_94,(ushort *)L"RewardType2");
      local_7c._0_1_ = 0x15;
      FUN_10040230(local_94,local_3c);
      local_7c._0_1_ = 0xd;
      FString::~FString(local_94);
      puVar6 = local_2c;
      uVar5 = 0xa5b;
      FUN_10005c30(0xa5b,puVar6);
      FUN_100d1790(uVar5,puVar6);
      local_7c._0_1_ = 0xc;
      FUN_1003fff0();
      local_7c._0_1_ = 7;
      FString::~FString(local_ac);
      local_7c._0_1_ = 6;
      FString::~FString(local_3c);
      local_7c = CONCAT31(local_7c._1_3_,2);
      FString::~FString(local_10);
    }
    local_7c._0_1_ = 1;
    FUN_1003fff0();
    local_7c = (uint)local_7c._1_3_ << 8;
    FString::~FString(local_bc);
  }
  ExceptionList = local_84;
  return;
}


// ==== 10154136 Catch@10154136

void Catch_10154136(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + 0x24) = *(undefined4 *)(unaff_EBP + -0x38);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + 0x24,&DAT_102a47f0);
}


// ==== 1015414a Catch@1015414a

void Catch_1015414a(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NConsoleWnd::OnShowSeedInfo");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10154170 FUN_10154170

void FUN_10154170(L2ParamStack *param_1)

{
  L2ParamStack *this;
  void *pvVar1;
  void *pvVar2;
  ushort *puVar3;
  FString *pFVar4;
  int in_ECX;
  undefined4 uVar5;
  undefined1 *puVar6;
  uint uStack_13c;
  FString local_12c [12];
  FString local_120 [12];
  FString local_114 [12];
  FString local_108 [12];
  FString local_fc [16];
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
  void *local_64;
  void *local_60;
  void *local_5c;
  void *local_54;
  void *local_50;
  undefined1 local_4c [12];
  FString local_40 [12];
  void *local_34;
  int local_30;
  undefined1 local_2c [12];
  void *local_20;
  int local_1c;
  int local_18;
  FString local_14 [15];
  char local_5;
  
  this = param_1;
  puStack_78 = &LAB_1020cda3;
  local_7c = ExceptionList;
  uStack_13c = DAT_103554c4 ^ (uint)local_70;
  local_80 = (undefined1 *)&uStack_13c;
  ExceptionList = &local_7c;
  local_74 = 0;
  if (*(int *)(in_ECX + 0x50ac) != 0) {
    pvVar1 = L2ParamStack::Top(param_1);
    pvVar2 = L2ParamStack::Top(param_1);
    L2ParamStack::Top(param_1);
    local_50 = L2ParamStack::Top(param_1);
    puVar3 = (ushort *)FUN_10146110(pvVar2);
    FString::FString(local_d4,puVar3);
    local_74._0_1_ = 1;
    FUN_1003f970();
    local_74._0_1_ = 2;
    FString::FString(local_14,(ushort *)L"ManorID");
    local_74._0_1_ = 3;
    FUN_10040090(local_14,pvVar2);
    local_74._0_1_ = 2;
    FString::~FString(local_14);
    FString::FString(local_14,(ushort *)L"ManorName");
    local_74._0_1_ = 4;
    FUN_10040230(local_14,local_d4);
    local_74._0_1_ = 2;
    FString::~FString(local_14);
    FString::FString(local_14,(ushort *)L"MerchantOrChamberlain");
    local_74._0_1_ = 5;
    FUN_10040090(local_14,(int)(char)pvVar1);
    local_74 = CONCAT31(local_74._1_3_,2);
    FString::~FString(local_14);
    puVar6 = local_4c;
    uVar5 = 0xa5c;
    FUN_10005c30(0xa5c,puVar6);
    FUN_100d1790(uVar5,puVar6);
    for (local_30 = 0; local_30 < (int)local_50; local_30 = local_30 + 1) {
      local_34 = L2ParamStack::Top(this);
      local_54 = L2ParamStack::Top(this);
      local_5c = L2ParamStack::Top(this);
      local_64 = L2ParamStack::Top(this);
      pvVar1 = L2ParamStack::Top(this);
      local_5 = (char)pvVar1;
      local_60 = L2ParamStack::Top(this);
      pvVar1 = L2ParamStack::Top(this);
      FString::FString(local_14,(ushort *)&DAT_1022f9f8);
      local_74._0_1_ = 6;
      FString::FString(local_40,(ushort *)&DAT_1022f9f8);
      local_74._0_1_ = 7;
      for (local_18 = 0; local_18 < (char)pvVar1; local_18 = local_18 + 1) {
        local_20 = L2ParamStack::Top(this);
        if (local_18 != 0) {
          pFVar4 = (FString *)FString::operator+(local_14,(ushort *)local_108);
          local_74._0_1_ = 8;
          FString::operator=(local_14,pFVar4);
          local_74._0_1_ = 7;
          FString::~FString(local_108);
        }
        FL2GameData::GetItemName((FL2GameData *)GL2GameData_exref,(int)local_20);
        pFVar4 = (FString *)FString::operator+(local_14,(ushort *)local_120);
        local_74._0_1_ = 9;
        FString::operator=(local_14,pFVar4);
        local_74._0_1_ = 7;
        FString::~FString(local_120);
      }
      pvVar1 = L2ParamStack::Top(this);
      for (local_1c = 0; local_1c < (char)pvVar1; local_1c = local_1c + 1) {
        local_20 = L2ParamStack::Top(this);
        if (local_1c != 0) {
          pFVar4 = (FString *)FString::operator+(local_40,(ushort *)local_114);
          local_74._0_1_ = 10;
          FString::operator=(local_40,pFVar4);
          local_74._0_1_ = 7;
          FString::~FString(local_114);
        }
        FL2GameData::GetItemName((FL2GameData *)GL2GameData_exref,(int)local_20);
        pFVar4 = (FString *)FString::operator+(local_40,(ushort *)local_12c);
        local_74._0_1_ = 0xb;
        FString::operator=(local_40,pFVar4);
        local_74._0_1_ = 7;
        FString::~FString(local_12c);
      }
      puVar3 = FL2GameData::GetItemName((FL2GameData *)GL2GameData_exref,(int)local_34);
      FString::FString(local_bc,puVar3);
      local_74._0_1_ = 0xc;
      param_1 = (L2ParamStack *)(int)local_5;
      if ((int)param_1 < 0) {
        param_1 = (L2ParamStack *)0x0;
      }
      FUN_1003f970();
      local_74._0_1_ = 0xd;
      FString::FString(local_98,(ushort *)L"CropID");
      local_74._0_1_ = 0xe;
      FUN_10040090(local_98,local_34);
      local_74._0_1_ = 0xd;
      FString::~FString(local_98);
      FString::FString(local_fc,(ushort *)L"CropName");
      local_74._0_1_ = 0xf;
      FUN_10040230(local_fc,local_bc);
      local_74._0_1_ = 0xd;
      FString::~FString(local_fc);
      FString::FString(local_b0,(ushort *)L"CropRemainCnt");
      local_74._0_1_ = 0x10;
      FUN_10040090(local_b0,local_54);
      local_74._0_1_ = 0xd;
      FString::~FString(local_b0);
      FString::FString(local_70,(ushort *)L"CropTotalCnt");
      local_74._0_1_ = 0x11;
      FUN_10040090(local_70,local_5c);
      local_74._0_1_ = 0xd;
      FString::~FString(local_70);
      FString::FString(local_c8,(ushort *)L"CropPrice");
      local_74._0_1_ = 0x12;
      FUN_10040090(local_c8,local_64);
      local_74._0_1_ = 0xd;
      FString::~FString(local_c8);
      FString::FString(local_ec,(ushort *)L"ProcureType");
      local_74._0_1_ = 0x13;
      FUN_10040090(local_ec,param_1);
      local_74._0_1_ = 0xd;
      FString::~FString(local_ec);
      FString::FString(local_e0,(ushort *)L"CropLevel");
      local_74._0_1_ = 0x14;
      FUN_10040090(local_e0,local_60);
      local_74._0_1_ = 0xd;
      FString::~FString(local_e0);
      FString::FString(local_8c,(ushort *)L"RewardType1");
      local_74._0_1_ = 0x15;
      FUN_10040230(local_8c,local_14);
      local_74._0_1_ = 0xd;
      FString::~FString(local_8c);
      FString::FString(local_a4,(ushort *)L"RewardType2");
      local_74._0_1_ = 0x16;
      FUN_10040230(local_a4,local_40);
      local_74._0_1_ = 0xd;
      FString::~FString(local_a4);
      puVar6 = local_2c;
      uVar5 = 0xa5d;
      FUN_10005c30(0xa5d,puVar6);
      FUN_100d1790(uVar5,puVar6);
      local_74._0_1_ = 0xc;
      FUN_1003fff0();
      local_74._0_1_ = 7;
      FString::~FString(local_bc);
      local_74._0_1_ = 6;
      FString::~FString(local_40);
      local_74 = CONCAT31(local_74._1_3_,2);
      FString::~FString(local_14);
    }
    local_74._0_1_ = 1;
    FUN_1003fff0();
    local_74 = (uint)local_74._1_3_ << 8;
    FString::~FString(local_d4);
  }
  ExceptionList = local_7c;
  return;
}


// ==== 101546c0 Catch@101546c0

void Catch_101546c0(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + 0x18) = *(undefined4 *)(unaff_EBP + -0x80);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + 0x18,&DAT_102a47f0);
}


// ==== 101546d4 Catch@101546d4

void Catch_101546d4(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NConsoleWnd::OnShowCropInfo");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10154700 FUN_10154700

void FUN_10154700(L2ParamStack *param_1)

{
  void *pvVar1;
  FString *pFVar2;
  ushort *puVar3;
  int in_ECX;
  undefined4 uVar4;
  undefined1 *puVar5;
  uint uStack_110;
  FString local_100 [12];
  FString local_f4 [12];
  FString local_e8 [12];
  FString local_dc [12];
  FString local_d0 [12];
  FString local_c4 [12];
  FString local_b8 [12];
  FString local_ac [12];
  FString local_a0 [16];
  FString local_90 [12];
  undefined1 *local_84;
  void *local_80;
  undefined1 *puStack_7c;
  uint local_78;
  FString local_74 [12];
  FString local_68 [12];
  undefined1 local_5c [12];
  void *local_50;
  void *local_4c;
  void *local_48;
  void *local_44;
  FString local_3c [12];
  void *local_30;
  FString local_2c [12];
  undefined1 local_20 [12];
  void *local_14;
  int local_10;
  int local_c;
  int local_8;
  
  puStack_7c = &LAB_1020ce6a;
  local_80 = ExceptionList;
  uStack_110 = DAT_103554c4 ^ (uint)local_74;
  local_84 = (undefined1 *)&uStack_110;
  ExceptionList = &local_80;
  local_78 = 0;
  if (*(int *)(in_ECX + 0x50ac) != 0) {
    pvVar1 = L2ParamStack::Top(param_1);
    local_50 = L2ParamStack::Top(param_1);
    FUN_1003f970();
    local_78._0_1_ = 1;
    FString::FString(local_2c,(ushort *)L"MerchantOrChamberlain");
    local_78._0_1_ = 2;
    FUN_10040090(local_2c,(int)(char)pvVar1);
    local_78 = CONCAT31(local_78._1_3_,1);
    FString::~FString(local_2c);
    puVar5 = local_5c;
    uVar4 = 0xa5e;
    FUN_10005c30(0xa5e,puVar5);
    FUN_100d1790(uVar4,puVar5);
    for (local_10 = 0; local_10 < (int)local_50; local_10 = local_10 + 1) {
      local_30 = L2ParamStack::Top(param_1);
      local_48 = L2ParamStack::Top(param_1);
      local_44 = L2ParamStack::Top(param_1);
      local_4c = L2ParamStack::Top(param_1);
      pvVar1 = L2ParamStack::Top(param_1);
      FString::FString(local_3c,(ushort *)&DAT_1022f9f8);
      local_78._0_1_ = 3;
      FString::FString(local_2c,(ushort *)&DAT_1022f9f8);
      local_78._0_1_ = 4;
      for (local_8 = 0; local_8 < (char)pvVar1; local_8 = local_8 + 1) {
        local_14 = L2ParamStack::Top(param_1);
        if (local_8 != 0) {
          pFVar2 = (FString *)FString::operator+(local_3c,(ushort *)local_dc);
          local_78._0_1_ = 5;
          FString::operator=(local_3c,pFVar2);
          local_78._0_1_ = 4;
          FString::~FString(local_dc);
        }
        FL2GameData::GetItemName((FL2GameData *)GL2GameData_exref,(int)local_14);
        pFVar2 = (FString *)FString::operator+(local_3c,(ushort *)local_f4);
        local_78._0_1_ = 6;
        FString::operator=(local_3c,pFVar2);
        local_78._0_1_ = 4;
        FString::~FString(local_f4);
      }
      pvVar1 = L2ParamStack::Top(param_1);
      for (local_c = 0; local_c < (char)pvVar1; local_c = local_c + 1) {
        local_14 = L2ParamStack::Top(param_1);
        if (local_c != 0) {
          pFVar2 = (FString *)FString::operator+(local_3c,(ushort *)local_e8);
          local_78._0_1_ = 7;
          FString::operator=(local_2c,pFVar2);
          local_78._0_1_ = 4;
          FString::~FString(local_e8);
        }
        FL2GameData::GetItemName((FL2GameData *)GL2GameData_exref,(int)local_14);
        pFVar2 = (FString *)FString::operator+(local_2c,(ushort *)local_100);
        local_78._0_1_ = 8;
        FString::operator=(local_2c,pFVar2);
        local_78._0_1_ = 4;
        FString::~FString(local_100);
      }
      puVar3 = FL2GameData::GetItemName((FL2GameData *)GL2GameData_exref,(int)local_30);
      FString::FString(local_a0,puVar3);
      local_78._0_1_ = 9;
      FUN_1003f970();
      local_78._0_1_ = 10;
      FString::FString(local_c4,(ushort *)L"CropID");
      local_78._0_1_ = 0xb;
      FUN_10040090(local_c4,local_30);
      local_78._0_1_ = 10;
      FString::~FString(local_c4);
      FString::FString(local_68,(ushort *)L"CropName");
      local_78._0_1_ = 0xc;
      FUN_10040230(local_68,local_a0);
      local_78._0_1_ = 10;
      FString::~FString(local_68);
      FString::FString(local_b8,(ushort *)L"CropLevel");
      local_78._0_1_ = 0xd;
      FUN_10040090(local_b8,local_48);
      local_78._0_1_ = 10;
      FString::~FString(local_b8);
      FString::FString(local_ac,(ushort *)L"SeedPrice");
      local_78._0_1_ = 0xe;
      FUN_10040090(local_ac,local_44);
      local_78._0_1_ = 10;
      FString::~FString(local_ac);
      FString::FString(local_d0,(ushort *)L"CropPrice");
      local_78._0_1_ = 0xf;
      FUN_10040090(local_d0,local_4c);
      local_78._0_1_ = 10;
      FString::~FString(local_d0);
      FString::FString(local_74,(ushort *)L"RewardType1");
      local_78._0_1_ = 0x10;
      FUN_10040230(local_74,local_3c);
      local_78._0_1_ = 10;
      FString::~FString(local_74);
      FString::FString(local_90,(ushort *)L"RewardType2");
      local_78._0_1_ = 0x11;
      FUN_10040230(local_90,local_2c);
      local_78._0_1_ = 10;
      FString::~FString(local_90);
      puVar5 = local_20;
      uVar4 = 0xa5f;
      FUN_10005c30(0xa5f,puVar5);
      FUN_100d1790(uVar4,puVar5);
      local_78._0_1_ = 9;
      FUN_1003fff0();
      local_78._0_1_ = 4;
      FString::~FString(local_a0);
      local_78._0_1_ = 3;
      FString::~FString(local_2c);
      local_78 = CONCAT31(local_78._1_3_,1);
      FString::~FString(local_3c);
    }
    local_78 = local_78 & 0xffffff00;
    FUN_1003fff0();
  }
  ExceptionList = local_80;
  return;
}


// ==== 10154b26 Catch@10154b26

void Catch_10154b26(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + 0x34) = *(undefined4 *)(unaff_EBP + -0x20);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + 0x34,&DAT_102a47f0);
}


// ==== 10154b3a Catch@10154b3a

void Catch_10154b3a(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NConsoleWnd::OnShowManorDefaultInfo");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10154b60 FUN_10154b60

void FUN_10154b60(L2ParamStack *param_1)

{
  void *pvVar1;
  ushort *puVar2;
  FString *pFVar3;
  void *in_ECX;
  undefined4 uVar4;
  undefined1 *puVar5;
  uint local_168;
  FString local_158 [12];
  FString local_14c [12];
  FString local_140 [12];
  FString local_134 [12];
  FString local_128 [12];
  FString local_11c [12];
  FString local_110 [12];
  FString local_104 [16];
  FString local_f4 [12];
  FString local_e8 [12];
  FString local_dc [12];
  FString local_d0 [12];
  FString local_c4 [12];
  FString local_b8 [12];
  FString local_ac [12];
  FString local_a0 [12];
  FString local_94 [12];
  undefined1 *local_88;
  void *local_84;
  undefined1 *puStack_80;
  int local_7c;
  undefined1 local_78 [12];
  FString local_6c [12];
  void *local_60;
  void *local_5c;
  void *local_58;
  void *local_54;
  void *local_50;
  void *local_4c;
  void *local_48;
  void *local_40;
  FString local_3c [12];
  int local_30;
  FString local_2c [12];
  int local_20;
  int local_1c;
  void *local_18;
  undefined1 local_14 [12];
  void *local_8;
  
  puVar5 = local_78;
  puStack_80 = &LAB_1020cf90;
  local_84 = ExceptionList;
  local_168 = DAT_103554c4 ^ (uint)puVar5;
  local_88 = (undefined1 *)&local_168;
  ExceptionList = &local_84;
  local_7c = 0;
  if (*(int *)((int)in_ECX + 0x50ac) != 0) {
    local_18 = in_ECX;
    pvVar1 = L2ParamStack::Top(param_1);
    local_4c = L2ParamStack::Top(param_1);
    FUN_1003f970();
    local_7c._0_1_ = 1;
    FString::FString(local_2c,(ushort *)L"ManorID");
    local_7c._0_1_ = 2;
    FUN_10040090(local_2c,pvVar1);
    local_7c._0_1_ = 1;
    FString::~FString(local_2c);
    puVar2 = (ushort *)FUN_10146110(pvVar1);
    FString::FString(local_3c,puVar2);
    local_7c._0_1_ = 3;
    FString::FString(local_2c,(ushort *)L"ManorName");
    local_7c._0_1_ = 4;
    FUN_10040230(local_2c,local_3c);
    local_7c._0_1_ = 3;
    FString::~FString(local_2c);
    local_7c = CONCAT31(local_7c._1_3_,1);
    FString::~FString(local_3c);
    uVar4 = 0xa60;
    FUN_10005c30(0xa60,puVar5);
    FUN_100d1790(uVar4,puVar5);
    for (local_30 = 0; local_30 < (int)local_4c; local_30 = local_30 + 1) {
      local_18 = L2ParamStack::Top(param_1);
      local_58 = L2ParamStack::Top(param_1);
      pvVar1 = L2ParamStack::Top(param_1);
      FString::FString(local_2c,(ushort *)&DAT_1022f9f8);
      local_7c._0_1_ = 5;
      FString::FString(local_3c,(ushort *)&DAT_1022f9f8);
      local_7c._0_1_ = 6;
      for (local_20 = 0; local_20 < (char)pvVar1; local_20 = local_20 + 1) {
        local_8 = L2ParamStack::Top(param_1);
        if (local_20 != 0) {
          pFVar3 = (FString *)FString::operator+(local_2c,(ushort *)local_134);
          local_7c._0_1_ = 7;
          FString::operator=(local_2c,pFVar3);
          local_7c._0_1_ = 6;
          FString::~FString(local_134);
        }
        FL2GameData::GetItemName((FL2GameData *)GL2GameData_exref,(int)local_8);
        pFVar3 = (FString *)FString::operator+(local_2c,(ushort *)local_14c);
        local_7c._0_1_ = 8;
        FString::operator=(local_2c,pFVar3);
        local_7c._0_1_ = 6;
        FString::~FString(local_14c);
      }
      pvVar1 = L2ParamStack::Top(param_1);
      for (local_1c = 0; local_1c < (char)pvVar1; local_1c = local_1c + 1) {
        local_8 = L2ParamStack::Top(param_1);
        if (local_1c != 0) {
          pFVar3 = (FString *)FString::operator+(local_3c,(ushort *)local_140);
          local_7c._0_1_ = 9;
          FString::operator=(local_3c,pFVar3);
          local_7c._0_1_ = 6;
          FString::~FString(local_140);
        }
        FL2GameData::GetItemName((FL2GameData *)GL2GameData_exref,(int)local_8);
        pFVar3 = (FString *)FString::operator+(local_3c,(ushort *)local_158);
        local_7c._0_1_ = 10;
        FString::operator=(local_3c,pFVar3);
        local_7c._0_1_ = 6;
        FString::~FString(local_158);
      }
      local_50 = L2ParamStack::Top(param_1);
      local_60 = L2ParamStack::Top(param_1);
      local_40 = L2ParamStack::Top(param_1);
      local_48 = L2ParamStack::Top(param_1);
      pvVar1 = L2ParamStack::Top(param_1);
      local_8 = L2ParamStack::Top(param_1);
      local_54 = L2ParamStack::Top(param_1);
      local_5c = L2ParamStack::Top(param_1);
      puVar2 = FL2GameData::GetItemName((FL2GameData *)GL2GameData_exref,(int)local_18);
      FString::FString(local_6c,puVar2);
      local_7c._0_1_ = 0xb;
      FUN_1003f970();
      local_7c._0_1_ = 0xc;
      FString::FString(local_110,(ushort *)L"SeedID");
      local_7c._0_1_ = 0xd;
      FUN_10040090(local_110,local_18);
      local_7c._0_1_ = 0xc;
      FString::~FString(local_110);
      FString::FString(local_ac,(ushort *)L"SeedName");
      local_7c._0_1_ = 0xe;
      FUN_10040230(local_ac,local_6c);
      local_7c._0_1_ = 0xc;
      FString::~FString(local_ac);
      FString::FString(local_104,(ushort *)L"TodaySeedTotalCnt");
      local_7c._0_1_ = 0xf;
      FUN_10040090(local_104,pvVar1);
      local_7c._0_1_ = 0xc;
      FString::~FString(local_104);
      FString::FString(local_c4,(ushort *)L"TodaySeedPrice");
      local_7c._0_1_ = 0x10;
      FUN_10040090(local_c4,local_8);
      local_7c._0_1_ = 0xc;
      FString::~FString(local_c4);
      FString::FString(local_128,(ushort *)L"TodayNextSeedTotalCnt");
      local_7c._0_1_ = 0x11;
      FUN_10040090(local_128,local_54);
      local_7c._0_1_ = 0xc;
      FString::~FString(local_128);
      FString::FString(local_dc,(ushort *)L"NextSeedPrice");
      local_7c._0_1_ = 0x12;
      FUN_10040090(local_dc,local_5c);
      local_7c._0_1_ = 0xc;
      FString::~FString(local_dc);
      FString::FString(local_11c,(ushort *)L"MinCropPrice");
      local_7c._0_1_ = 0x13;
      FUN_10040090(local_11c,local_40);
      local_7c._0_1_ = 0xc;
      FString::~FString(local_11c);
      FString::FString(local_f4,(ushort *)L"MaxCropPrice");
      local_7c._0_1_ = 0x14;
      FUN_10040090(local_f4,local_48);
      local_7c._0_1_ = 0xc;
      FString::~FString(local_f4);
      FString::FString(local_94,(ushort *)L"SeedLevel");
      local_7c._0_1_ = 0x15;
      FUN_10040090(local_94,local_58);
      local_7c._0_1_ = 0xc;
      FString::~FString(local_94);
      FString::FString(local_a0,(ushort *)L"RewardType1");
      local_7c._0_1_ = 0x16;
      FUN_10040230(local_a0,local_2c);
      local_7c._0_1_ = 0xc;
      FString::~FString(local_a0);
      FString::FString(local_b8,(ushort *)L"RewardType2");
      local_7c._0_1_ = 0x17;
      FUN_10040230(local_b8,local_3c);
      local_7c._0_1_ = 0xc;
      FString::~FString(local_b8);
      FString::FString(local_d0,(ushort *)L"MaxSeedTotalCnt");
      local_7c._0_1_ = 0x18;
      FUN_10040090(local_d0,local_50);
      local_7c._0_1_ = 0xc;
      FString::~FString(local_d0);
      FString::FString(local_e8,(ushort *)L"DefaultSeedPrice");
      local_7c._0_1_ = 0x19;
      FUN_10040090(local_e8,local_60);
      local_7c._0_1_ = 0xc;
      FString::~FString(local_e8);
      puVar5 = local_14;
      uVar4 = 0xa61;
      FUN_10005c30(0xa61,puVar5);
      FUN_100d1790(uVar4,puVar5);
      local_7c._0_1_ = 0xb;
      FUN_1003fff0();
      local_7c._0_1_ = 6;
      FString::~FString(local_6c);
      local_7c._0_1_ = 5;
      FString::~FString(local_3c);
      local_7c = CONCAT31(local_7c._1_3_,1);
      FString::~FString(local_2c);
    }
    FString::FString(local_6c,(ushort *)&DAT_1022f9f8);
    local_7c._0_1_ = 0x1a;
    pFVar3 = local_6c;
    uVar4 = 0xa62;
    FUN_10005c30(0xa62,pFVar3);
    FUN_100d1790(uVar4,pFVar3);
    local_7c._0_1_ = 1;
    FString::~FString(local_6c);
    local_7c = (uint)local_7c._1_3_ << 8;
    FUN_1003fff0();
  }
  ExceptionList = local_84;
  return;
}


// ==== 1015517e Catch@1015517e

void Catch_1015517e(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + 0x34) = *(undefined4 *)(unaff_EBP + -0x80);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + 0x34,&DAT_102a47f0);
}


// ==== 10155192 Catch@10155192

void Catch_10155192(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NConsoleWnd::OnShowSeedSetting");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101551b0 FUN_101551b0

void FUN_101551b0(L2ParamStack *param_1)

{
  void *pvVar1;
  ushort *puVar2;
  FString *pFVar3;
  void *in_ECX;
  undefined4 uVar4;
  undefined1 *puVar5;
  uint local_188;
  FString local_178 [12];
  FString local_16c [12];
  FString local_160 [12];
  FString local_154 [12];
  FString local_148 [12];
  FString local_13c [12];
  FString local_130 [12];
  FString local_124 [16];
  FString local_114 [12];
  FString local_108 [12];
  FString local_fc [12];
  FString local_f0 [12];
  FString local_e4 [12];
  FString local_d8 [12];
  FString local_cc [12];
  FString local_c0 [12];
  FString local_b4 [12];
  FString local_a8 [12];
  FString local_9c [12];
  undefined1 local_90 [12];
  undefined1 *local_84;
  void *local_80;
  undefined1 *puStack_7c;
  int local_78;
  void *local_74;
  void *local_70;
  void *local_6c;
  void *local_68;
  void *local_64;
  void *local_60;
  void *local_5c;
  void *local_58;
  FString local_50 [12];
  void *local_44;
  void *local_40;
  FString local_3c [12];
  int local_30;
  FString local_2c [12];
  int local_20;
  int local_1c;
  void *local_18;
  void *local_14;
  undefined1 local_10 [12];
  
  puStack_7c = &LAB_1020d0cb;
  local_80 = ExceptionList;
  local_188 = DAT_103554c4 ^ (uint)&local_74;
  local_84 = (undefined1 *)&local_188;
  ExceptionList = &local_80;
  local_78 = 0;
  if (*(int *)((int)in_ECX + 0x50ac) != 0) {
    local_18 = in_ECX;
    pvVar1 = L2ParamStack::Top(param_1);
    local_5c = L2ParamStack::Top(param_1);
    FUN_1003f970();
    local_78._0_1_ = 1;
    FString::FString(local_2c,(ushort *)L"ManorID");
    local_78._0_1_ = 2;
    FUN_10040090(local_2c,pvVar1);
    local_78._0_1_ = 1;
    FString::~FString(local_2c);
    puVar2 = (ushort *)FUN_10146110(pvVar1);
    FString::FString(local_3c,puVar2);
    local_78._0_1_ = 3;
    FString::FString(local_2c,(ushort *)L"ManorName");
    local_78._0_1_ = 4;
    FUN_10040230(local_2c,local_3c);
    local_78._0_1_ = 3;
    FString::~FString(local_2c);
    local_78 = CONCAT31(local_78._1_3_,1);
    FString::~FString(local_3c);
    puVar5 = local_90;
    uVar4 = 0xa69;
    FUN_10005c30(0xa69,puVar5);
    FUN_100d1790(uVar4,puVar5);
    for (local_30 = 0; local_30 < (int)local_5c; local_30 = local_30 + 1) {
      local_18 = L2ParamStack::Top(param_1);
      local_68 = L2ParamStack::Top(param_1);
      pvVar1 = L2ParamStack::Top(param_1);
      FString::FString(local_2c,(ushort *)&DAT_1022f9f8);
      local_78._0_1_ = 5;
      FString::FString(local_3c,(ushort *)&DAT_1022f9f8);
      local_78._0_1_ = 6;
      for (local_20 = 0; local_20 < (char)pvVar1; local_20 = local_20 + 1) {
        local_14 = L2ParamStack::Top(param_1);
        if (local_20 != 0) {
          pFVar3 = (FString *)FString::operator+(local_2c,(ushort *)local_154);
          local_78._0_1_ = 7;
          FString::operator=(local_2c,pFVar3);
          local_78._0_1_ = 6;
          FString::~FString(local_154);
        }
        FL2GameData::GetItemName((FL2GameData *)GL2GameData_exref,(int)local_14);
        pFVar3 = (FString *)FString::operator+(local_2c,(ushort *)local_16c);
        local_78._0_1_ = 8;
        FString::operator=(local_2c,pFVar3);
        local_78._0_1_ = 6;
        FString::~FString(local_16c);
      }
      pvVar1 = L2ParamStack::Top(param_1);
      for (local_1c = 0; local_1c < (char)pvVar1; local_1c = local_1c + 1) {
        local_14 = L2ParamStack::Top(param_1);
        if (local_1c != 0) {
          pFVar3 = (FString *)FString::operator+(local_3c,(ushort *)local_160);
          local_78._0_1_ = 9;
          FString::operator=(local_3c,pFVar3);
          local_78._0_1_ = 6;
          FString::~FString(local_160);
        }
        FL2GameData::GetItemName((FL2GameData *)GL2GameData_exref,(int)local_14);
        pFVar3 = (FString *)FString::operator+(local_3c,(ushort *)local_178);
        local_78._0_1_ = 10;
        FString::operator=(local_3c,pFVar3);
        local_78._0_1_ = 6;
        FString::~FString(local_178);
      }
      local_60 = L2ParamStack::Top(param_1);
      local_44 = L2ParamStack::Top(param_1);
      local_70 = L2ParamStack::Top(param_1);
      local_58 = L2ParamStack::Top(param_1);
      pvVar1 = L2ParamStack::Top(param_1);
      local_14 = L2ParamStack::Top(param_1);
      local_64 = L2ParamStack::Top(param_1);
      local_6c = L2ParamStack::Top(param_1);
      local_74 = L2ParamStack::Top(param_1);
      local_40 = L2ParamStack::Top(param_1);
      puVar2 = FL2GameData::GetItemName((FL2GameData *)GL2GameData_exref,(int)local_18);
      FString::FString(local_50,puVar2);
      local_78._0_1_ = 0xb;
      FUN_1003f970();
      local_78._0_1_ = 0xc;
      FString::FString(local_114,(ushort *)L"CropID");
      local_78._0_1_ = 0xd;
      FUN_10040090(local_114,local_18);
      local_78._0_1_ = 0xc;
      FString::~FString(local_114);
      FString::FString(local_b4,(ushort *)L"CropName");
      local_78._0_1_ = 0xe;
      FUN_10040230(local_b4,local_50);
      local_78._0_1_ = 0xc;
      FString::~FString(local_b4);
      FString::FString(local_130,(ushort *)L"TodayCropTotalCnt");
      local_78._0_1_ = 0xf;
      FUN_10040090(local_130,pvVar1);
      local_78._0_1_ = 0xc;
      FString::~FString(local_130);
      FString::FString(local_cc,(ushort *)L"TodayCropPrice");
      local_78._0_1_ = 0x10;
      FUN_10040090(local_cc,local_14);
      local_78._0_1_ = 0xc;
      FString::~FString(local_cc);
      FString::FString(local_124,(ushort *)L"TodayProcureType");
      local_78._0_1_ = 0x11;
      FUN_10040090(local_124,local_64);
      local_78._0_1_ = 0xc;
      FString::~FString(local_124);
      FString::FString(local_e4,(ushort *)L"NextCropTotalCnt");
      local_78._0_1_ = 0x12;
      FUN_10040090(local_e4,local_6c);
      local_78._0_1_ = 0xc;
      FString::~FString(local_e4);
      FString::FString(local_148,(ushort *)L"NextCropPrice");
      local_78._0_1_ = 0x13;
      FUN_10040090(local_148,local_74);
      local_78._0_1_ = 0xc;
      FString::~FString(local_148);
      FString::FString(local_fc,(ushort *)L"NextProcureType");
      local_78._0_1_ = 0x14;
      FUN_10040090(local_fc,local_40);
      local_78._0_1_ = 0xc;
      FString::~FString(local_fc);
      FString::FString(local_13c,(ushort *)L"MinCropPrice");
      local_78._0_1_ = 0x15;
      FUN_10040090(local_13c,local_70);
      local_78._0_1_ = 0xc;
      FString::~FString(local_13c);
      FString::FString(local_9c,(ushort *)L"MaxCropPrice");
      local_78._0_1_ = 0x16;
      FUN_10040090(local_9c,local_58);
      local_78._0_1_ = 0xc;
      FString::~FString(local_9c);
      FString::FString(local_a8,(ushort *)L"CropLevel");
      local_78._0_1_ = 0x17;
      FUN_10040090(local_a8,local_68);
      local_78._0_1_ = 0xc;
      FString::~FString(local_a8);
      FString::FString(local_c0,(ushort *)L"RewardType1");
      local_78._0_1_ = 0x18;
      FUN_10040230(local_c0,local_2c);
      local_78._0_1_ = 0xc;
      FString::~FString(local_c0);
      FString::FString(local_d8,(ushort *)L"RewardType2");
      local_78._0_1_ = 0x19;
      FUN_10040230(local_d8,local_3c);
      local_78._0_1_ = 0xc;
      FString::~FString(local_d8);
      FString::FString(local_f0,(ushort *)L"MaxCropTotalCnt");
      local_78._0_1_ = 0x1a;
      FUN_10040090(local_f0,local_60);
      local_78._0_1_ = 0xc;
      FString::~FString(local_f0);
      FString::FString(local_108,(ushort *)L"DefaultCropPrice");
      local_78._0_1_ = 0x1b;
      FUN_10040090(local_108,local_44);
      local_78._0_1_ = 0xc;
      FString::~FString(local_108);
      puVar5 = local_10;
      uVar4 = 0xa6a;
      FUN_10005c30(0xa6a,puVar5);
      FUN_100d1790(uVar4,puVar5);
      local_78._0_1_ = 0xb;
      FUN_1003fff0();
      local_78._0_1_ = 6;
      FString::~FString(local_50);
      local_78._0_1_ = 5;
      FString::~FString(local_3c);
      local_78 = CONCAT31(local_78._1_3_,1);
      FString::~FString(local_2c);
    }
    FString::FString(local_50,(ushort *)&DAT_1022f9f8);
    local_78._0_1_ = 0x1c;
    pFVar3 = local_50;
    uVar4 = 0xa6b;
    FUN_10005c30(0xa6b,pFVar3);
    FUN_100d1790(uVar4,pFVar3);
    local_78._0_1_ = 1;
    FString::~FString(local_50);
    local_78 = (uint)local_78._1_3_ << 8;
    FUN_1003fff0();
  }
  ExceptionList = local_80;
  return;
}


// ==== 10155853 Catch@10155853

void Catch_10155853(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + 0x20) = *(undefined4 *)(unaff_EBP + -0xa4);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + 0x20,&DAT_102a47f0);
}


// ==== 1015586a Catch@1015586a

void Catch_1015586a(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NConsoleWnd::OnShowCropSetting");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10155890 FUN_10155890

void FUN_10155890(L2ParamStack *param_1)

{
  void *pvVar1;
  FString *pFVar2;
  ushort *puVar3;
  int in_ECX;
  undefined4 uVar4;
  undefined1 *puVar5;
  uint uStack_154;
  FString local_144 [12];
  FString local_138 [12];
  FString local_12c [12];
  FString local_120 [12];
  FString local_114 [12];
  FString local_108 [16];
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
  void *local_58;
  void *local_54;
  void *local_50;
  void *local_4c;
  void *local_48;
  void *local_40;
  FString local_3c [12];
  FString local_30 [12];
  void *local_24;
  int local_20;
  int local_1c;
  undefined1 local_18 [12];
  int local_c;
  void *local_8;
  
  puStack_78 = &LAB_1020d1ca;
  local_7c = ExceptionList;
  uStack_154 = DAT_103554c4 ^ (uint)local_70;
  local_80 = (undefined1 *)&uStack_154;
  ExceptionList = &local_7c;
  local_74 = 0;
  if (*(int *)(in_ECX + 0x50ac) != 0) {
    FString::FString(local_30,(ushort *)&DAT_1022f9f8);
    local_74._0_1_ = 1;
    pFVar2 = local_30;
    uVar4 = 0xa50;
    FUN_10005c30(0xa50,pFVar2);
    FUN_100d1790(uVar4,pFVar2);
    local_74 = (uint)local_74._1_3_ << 8;
    FString::~FString(local_30);
    L2ParamStack::Top(param_1);
    local_50 = L2ParamStack::Top(param_1);
    for (local_20 = 0; local_20 < (int)local_50; local_20 = local_20 + 1) {
      local_48 = L2ParamStack::Top(param_1);
      local_24 = L2ParamStack::Top(param_1);
      local_4c = L2ParamStack::Top(param_1);
      pvVar1 = L2ParamStack::Top(param_1);
      FString::FString(local_3c,(ushort *)&DAT_1022f9f8);
      local_74._0_1_ = 2;
      FString::FString(local_30,(ushort *)&DAT_1022f9f8);
      local_74._0_1_ = 3;
      for (local_1c = 0; local_1c < (char)pvVar1; local_1c = local_1c + 1) {
        local_8 = L2ParamStack::Top(param_1);
        if (local_1c != 0) {
          pFVar2 = (FString *)FString::operator+(local_3c,(ushort *)local_120);
          local_74._0_1_ = 4;
          FString::operator=(local_3c,pFVar2);
          local_74._0_1_ = 3;
          FString::~FString(local_120);
        }
        FL2GameData::GetItemName((FL2GameData *)GL2GameData_exref,(int)local_8);
        pFVar2 = (FString *)FString::operator+(local_3c,(ushort *)local_138);
        local_74._0_1_ = 5;
        FString::operator=(local_3c,pFVar2);
        local_74._0_1_ = 3;
        FString::~FString(local_138);
      }
      pvVar1 = L2ParamStack::Top(param_1);
      for (local_c = 0; local_c < (char)pvVar1; local_c = local_c + 1) {
        local_8 = L2ParamStack::Top(param_1);
        if (local_c != 0) {
          pFVar2 = (FString *)FString::operator+(local_3c,(ushort *)local_12c);
          local_74._0_1_ = 6;
          FString::operator=(local_30,pFVar2);
          local_74._0_1_ = 3;
          FString::~FString(local_12c);
        }
        FL2GameData::GetItemName((FL2GameData *)GL2GameData_exref,(int)local_8);
        pFVar2 = (FString *)FString::operator+(local_30,(ushort *)local_144);
        local_74._0_1_ = 7;
        FString::operator=(local_30,pFVar2);
        local_74._0_1_ = 3;
        FString::~FString(local_144);
      }
      local_8 = L2ParamStack::Top(param_1);
      local_40 = L2ParamStack::Top(param_1);
      local_58 = L2ParamStack::Top(param_1);
      pvVar1 = L2ParamStack::Top(param_1);
      local_54 = L2ParamStack::Top(param_1);
      FUN_1003f970();
      local_74._0_1_ = 8;
      FString::FString(local_64,(ushort *)L"ManorID");
      local_74._0_1_ = 9;
      FUN_10040090(local_64,local_8);
      local_74._0_1_ = 8;
      FString::~FString(local_64);
      FString::FString(local_98,(ushort *)L"CropID");
      local_74._0_1_ = 10;
      FUN_10040090(local_98,local_24);
      local_74._0_1_ = 8;
      FString::~FString(local_98);
      FString::FString(local_f8,(ushort *)L"CropServerID");
      local_74._0_1_ = 0xb;
      FUN_10040090(local_f8,local_48);
      local_74._0_1_ = 8;
      FString::~FString(local_f8);
      puVar3 = FL2GameData::GetItemName((FL2GameData *)GL2GameData_exref,(int)local_24);
      FString::FString(local_114,puVar3);
      local_74._0_1_ = 0xc;
      FString::FString(local_b0,(ushort *)L"CropName");
      local_74._0_1_ = 0xd;
      FUN_10040230(local_b0,local_114);
      local_74._0_1_ = 0xc;
      FString::~FString(local_b0);
      local_74._0_1_ = 8;
      FString::~FString(local_114);
      puVar3 = (ushort *)FUN_10146110(local_8);
      FString::FString(local_108,puVar3);
      local_74._0_1_ = 0xe;
      FString::FString(local_c8,(ushort *)L"ManorName");
      local_74._0_1_ = 0xf;
      FUN_10040230(local_c8,local_108);
      local_74._0_1_ = 0xe;
      FString::~FString(local_c8);
      local_74._0_1_ = 8;
      FString::~FString(local_108);
      FString::FString(local_e0,(ushort *)L"CropRemainCnt");
      local_74._0_1_ = 0x10;
      FUN_10040090(local_e0,local_40);
      local_74._0_1_ = 8;
      FString::~FString(local_e0);
      FString::FString(local_70,(ushort *)L"CropPrice");
      local_74._0_1_ = 0x11;
      FUN_10040090(local_70,local_58);
      local_74._0_1_ = 8;
      FString::~FString(local_70);
      FString::FString(local_8c,(ushort *)L"ProcureType");
      local_74._0_1_ = 0x12;
      FUN_10040090(local_8c,(int)(char)pvVar1);
      local_74._0_1_ = 8;
      FString::~FString(local_8c);
      FString::FString(local_a4,(ushort *)L"MyCropCnt");
      local_74._0_1_ = 0x13;
      FUN_10040090(local_a4,local_54);
      local_74._0_1_ = 8;
      FString::~FString(local_a4);
      FString::FString(local_bc,(ushort *)L"CropLevel");
      local_74._0_1_ = 0x14;
      FUN_10040090(local_bc,local_4c);
      local_74._0_1_ = 8;
      FString::~FString(local_bc);
      FString::FString(local_d4,(ushort *)L"RewardType1");
      local_74._0_1_ = 0x15;
      FUN_10040230(local_d4,local_3c);
      local_74._0_1_ = 8;
      FString::~FString(local_d4);
      FString::FString(local_ec,(ushort *)L"RewardType2");
      local_74._0_1_ = 0x16;
      FUN_10040230(local_ec,local_30);
      local_74._0_1_ = 8;
      FString::~FString(local_ec);
      puVar5 = local_18;
      uVar4 = 0xa55;
      FUN_10005c30(0xa55,puVar5);
      FUN_100d1790(uVar4,puVar5);
      local_74._0_1_ = 3;
      FUN_1003fff0();
      local_74._0_1_ = 2;
      FString::~FString(local_30);
      local_74 = (uint)local_74._1_3_ << 8;
      FString::~FString(local_3c);
    }
  }
  ExceptionList = local_7c;
  return;
}


// ==== 10155dd6 Catch@10155dd6

void Catch_10155dd6(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + 0x2c) = *(undefined4 *)(unaff_EBP + -0x8c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + 0x2c,&DAT_102a47f0);
}


// ==== 10155ded Catch@10155ded

void Catch_10155ded(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NConsoleWnd::OnShowSellCropList");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10155e10 FUN_10155e10

void FUN_10155e10(L2ParamStack *param_1)

{
  void *pvVar1;
  void *pvVar2;
  int in_ECX;
  undefined4 uVar3;
  FString *pFVar4;
  uint uStack_94;
  FString local_84 [12];
  FString local_78 [12];
  FString local_6c [12];
  FString local_60 [12];
  FString local_54 [12];
  FString local_48 [12];
  FString local_3c [20];
  ushort *local_28;
  void *local_24;
  void *local_20;
  void *local_1c;
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_1020d237;
  local_10 = ExceptionList;
  uStack_94 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_94;
  ExceptionList = &local_10;
  local_8 = 0;
  if (*(int *)(in_ECX + 0x50ac) != 0) {
    FString::FString(local_3c,(ushort *)&DAT_1022f9f8);
    local_8._0_1_ = 1;
    pFVar4 = local_3c;
    uVar3 = 0xa57;
    FUN_10005c30(0xa57,pFVar4);
    FUN_100d1790(uVar3,pFVar4);
    local_8 = (uint)local_8._1_3_ << 8;
    FString::~FString(local_3c);
    L2ParamStack::Top(param_1);
    pvVar1 = L2ParamStack::Top(param_1);
    for (local_18 = 0; local_18 < (int)pvVar1; local_18 = local_18 + 1) {
      pvVar2 = L2ParamStack::Top(param_1);
      local_1c = L2ParamStack::Top(param_1);
      local_20 = L2ParamStack::Top(param_1);
      local_24 = L2ParamStack::Top(param_1);
      local_28 = (ushort *)FUN_10146110(pvVar2);
      FUN_1003f970();
      local_8._0_1_ = 2;
      FString::FString(local_48,(ushort *)L"ManorID");
      local_8._0_1_ = 3;
      FUN_10040090(local_48,pvVar2);
      local_8._0_1_ = 2;
      FString::~FString(local_48);
      FString::FString(local_54,(ushort *)L"CropRemainCnt");
      local_8._0_1_ = 4;
      FUN_10040090(local_54,local_1c);
      local_8._0_1_ = 2;
      FString::~FString(local_54);
      FString::FString(local_60,(ushort *)L"CropPrice");
      local_8._0_1_ = 5;
      FUN_10040090(local_60,local_20);
      local_8._0_1_ = 2;
      FString::~FString(local_60);
      FString::FString(local_6c,(ushort *)L"ProcureType");
      local_8._0_1_ = 6;
      FUN_10040090(local_6c,local_24);
      local_8._0_1_ = 2;
      FString::~FString(local_6c);
      FString::FString(local_84,local_28);
      local_8._0_1_ = 7;
      FString::FString(local_78,(ushort *)L"ManorName");
      local_8._0_1_ = 8;
      FUN_10040230(local_78,local_84);
      local_8._0_1_ = 7;
      FString::~FString(local_78);
      local_8._0_1_ = 2;
      FString::~FString(local_84);
      pFVar4 = local_3c;
      uVar3 = 0xa58;
      FUN_10005c30(0xa58,pFVar4);
      FUN_100d1790(uVar3,pFVar4);
      local_8 = (uint)local_8._1_3_ << 8;
      FUN_1003fff0();
    }
  }
  ExceptionList = local_10;
  return;
}


// ==== 1015602d Catch@1015602d

void Catch_1015602d(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x28) = *(undefined4 *)(unaff_EBP + -0x2c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x28,&DAT_102a47f0);
}


// ==== 10156041 Catch@10156041

void Catch_10156041(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NConsoleWnd::OnShowProcureCropDetail");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10156060 FUN_10156060

void FUN_10156060(L2ParamStack *param_1)

{
  void *pvVar1;
  ushort *puVar2;
  undefined4 uVar3;
  int in_ECX;
  int iVar4;
  undefined1 *puVar5;
  uint uStack_b8;
  FString local_a8 [12];
  FString local_9c [12];
  FString local_90 [12];
  undefined1 *local_84;
  void *local_80;
  undefined1 *puStack_7c;
  uint local_78;
  FString local_74 [12];
  FString local_68 [12];
  FString local_5c [12];
  FString local_50 [16];
  FString local_40 [12];
  FString local_34 [12];
  FString local_28 [12];
  int local_1c;
  undefined1 local_14 [12];
  void *local_8;
  
  puStack_7c = &LAB_1020d2cb;
  local_80 = ExceptionList;
  uStack_b8 = DAT_103554c4 ^ (uint)local_74;
  local_84 = (undefined1 *)&uStack_b8;
  ExceptionList = &local_80;
  local_78 = 0;
  if (*(int *)(in_ECX + 0x50ac) != 0) {
    FUN_1003f970();
    local_78._0_1_ = 1;
    pvVar1 = L2ParamStack::Top(param_1);
    FString::FString(local_28,(ushort *)&DAT_10274940);
    local_78._0_1_ = 2;
    FUN_10040090(local_28,pvVar1);
    local_78 = CONCAT31(local_78._1_3_,1);
    FString::~FString(local_28);
    for (iVar4 = 0; local_1c = iVar4, iVar4 < (int)pvVar1; iVar4 = iVar4 + 1) {
      puVar2 = L2ParamStack::Top(param_1);
      FString::FString(local_28,puVar2);
      local_78._0_1_ = 3;
      uVar3 = FString::Printf((ushort *)local_74,L"Name_%d",iVar4);
      local_78._0_1_ = 4;
      FUN_10040230(uVar3,local_28);
      local_78._0_1_ = 3;
      FString::~FString(local_74);
      local_78._0_1_ = 1;
      FString::~FString(local_28);
      local_8 = L2ParamStack::Top(param_1);
      uVar3 = FString::Printf((ushort *)local_9c,L"ClassId_%d",iVar4);
      local_78._0_1_ = 5;
      FUN_10040090(uVar3,local_8);
      local_78._0_1_ = 1;
      FString::~FString(local_9c);
      puVar2 = L2ParamStack::Top(param_1);
      FString::FString(local_40,puVar2);
      local_78._0_1_ = 6;
      uVar3 = FString::Printf((ushort *)local_50,L"PledgeName_%d",iVar4);
      local_78._0_1_ = 7;
      FUN_10040230(uVar3,local_40);
      local_78._0_1_ = 6;
      FString::~FString(local_50);
      local_78._0_1_ = 1;
      FString::~FString(local_40);
      local_8 = L2ParamStack::Top(param_1);
      uVar3 = FString::Printf((ushort *)local_5c,L"PledgeCrestId_%d",iVar4);
      local_78._0_1_ = 8;
      FUN_10040090(uVar3,local_8);
      local_78._0_1_ = 1;
      FString::~FString(local_5c);
      puVar2 = L2ParamStack::Top(param_1);
      FString::FString(local_34,puVar2);
      local_78._0_1_ = 9;
      uVar3 = FString::Printf((ushort *)local_68,L"AllianceName_%d",iVar4);
      local_78._0_1_ = 10;
      FUN_10040230(uVar3,local_34);
      local_78._0_1_ = 9;
      FString::~FString(local_68);
      local_78._0_1_ = 1;
      FString::~FString(local_34);
      local_8 = L2ParamStack::Top(param_1);
      uVar3 = FString::Printf((ushort *)local_90,L"AllianceCrestId_%d",iVar4);
      local_78._0_1_ = 0xb;
      FUN_10040090(uVar3,local_8);
      local_78._0_1_ = 1;
      FString::~FString(local_90);
      local_8 = L2ParamStack::Top(param_1);
      uVar3 = FString::Printf((ushort *)local_a8,L"WinCount_%d",iVar4);
      local_78._0_1_ = 0xc;
      FUN_10040090(uVar3,local_8);
      local_78 = CONCAT31(local_78._1_3_,1);
      FString::~FString(local_a8);
    }
    puVar5 = local_14;
    uVar3 = 0x370;
    FUN_10005c30(0x370,puVar5);
    FUN_100d1790(uVar3,puVar5);
    local_78 = local_78 & 0xffffff00;
    FUN_1003fff0();
  }
  ExceptionList = local_80;
  return;
}


// ==== 10156313 Catch@10156313

void Catch_10156313(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + 0x5c) = *(undefined4 *)(unaff_EBP + 0x30);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + 0x5c,&DAT_102a47f0);
}


// ==== 10156327 Catch@10156327

void Catch_10156327(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NConsoleWnd::OnHeroList");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10156350 FUN_10156350

void FUN_10156350(L2ParamStack *param_1)

{
  void *pvVar1;
  ushort *puVar2;
  void *pvVar3;
  FString *this;
  int iVar4;
  undefined4 uVar5;
  undefined1 *puVar6;
  uint uStack_68;
  FString local_58 [12];
  FString local_4c [12];
  undefined1 local_40 [20];
  int local_2c;
  void *local_28;
  void *local_24;
  void *local_20;
  void *local_1c;
  void *local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_1020d364;
  local_10 = ExceptionList;
  uStack_68 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_68;
  ExceptionList = &local_10;
  local_8 = 0;
  L2ParamStack::Top(param_1);
  FUN_1003f970();
  local_8._0_1_ = 1;
  FString::FString(local_4c);
  local_8._0_1_ = 2;
  L2ParamStack::Restart(param_1);
  pvVar1 = L2ParamStack::Top(param_1);
  local_18 = L2ParamStack::Top(param_1);
  puVar2 = L2ParamStack::Top(param_1);
  FString::operator=(local_4c,puVar2);
  local_1c = L2ParamStack::Top(param_1);
  local_20 = L2ParamStack::Top(param_1);
  local_24 = L2ParamStack::Top(param_1);
  local_28 = L2ParamStack::Top(param_1);
  pvVar3 = L2ParamStack::Top(param_1);
  FString::FString(local_58,(ushort *)L"PlayerNum");
  local_8._0_1_ = 3;
  FUN_10040090(local_58,(int)(char)pvVar1);
  local_8._0_1_ = 2;
  FString::~FString(local_58);
  FString::FString(local_58,(ushort *)&DAT_1025ae84);
  local_8._0_1_ = 4;
  FUN_10040090(local_58,local_18);
  local_8._0_1_ = 2;
  FString::~FString(local_58);
  FString::FString(local_58,(ushort *)L"Name");
  local_8._0_1_ = 5;
  FUN_10040230(local_58,local_4c);
  local_8._0_1_ = 2;
  FString::~FString(local_58);
  FString::FString(local_58,(ushort *)L"ClassID");
  local_8._0_1_ = 6;
  FUN_10040090(local_58,local_1c);
  local_8._0_1_ = 2;
  FString::~FString(local_58);
  FString::FString(local_58,(ushort *)L"CurHP");
  local_8._0_1_ = 7;
  FUN_10040090(local_58,local_20);
  local_8._0_1_ = 2;
  FString::~FString(local_58);
  FString::FString(local_58,(ushort *)L"MaxHP");
  local_8._0_1_ = 8;
  FUN_10040090(local_58,local_24);
  local_8._0_1_ = 2;
  FString::~FString(local_58);
  FString::FString(local_58,(ushort *)L"CurCP");
  local_8._0_1_ = 9;
  FUN_10040090(local_58,local_28);
  local_8._0_1_ = 2;
  FString::~FString(local_58);
  FString::FString(local_58,(ushort *)L"MaxCP");
  local_8._0_1_ = 10;
  FUN_10040090(local_58,pvVar3);
  local_8._0_1_ = 2;
  FString::~FString(local_58);
  if (*(int *)(local_2c + 0x50ac) != 0) {
    this = (FString *)FUN_1014ad10(local_58);
    local_8._0_1_ = 0xb;
    iVar4 = FString::operator==(this,(ushort *)L"OlympiadObserverState");
    local_8._0_1_ = 2;
    FString::~FString(local_58);
    FString::FString(local_58,(ushort *)L"IsPlayer");
    if (iVar4 == 0) {
      local_8._0_1_ = 0xd;
    }
    else {
      local_8._0_1_ = 0xc;
    }
    FUN_10040090(local_58,iVar4 != 0);
    local_8._0_1_ = 2;
    FString::~FString(local_58);
    puVar6 = local_40;
    uVar5 = 0x398;
    FUN_10005c30(0x398,puVar6);
    FUN_100d1790(uVar5,puVar6);
  }
  local_8._0_1_ = 1;
  FString::~FString(local_4c);
  local_8 = (uint)local_8._1_3_ << 8;
  FUN_1003fff0();
  ExceptionList = local_10;
  return;
}


// ==== 1015661f Catch@1015661f

void Catch_1015661f(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x2c) = *(undefined4 *)(unaff_EBP + -0x30);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x2c,&DAT_102a47f0);
}


// ==== 10156633 Catch@10156633

void Catch_10156633(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NConsoleWnd::OnOlympiadUserInfo");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10156650 FUN_10156650

void FUN_10156650(undefined1 param_1)

{
  FString *this;
  int *piVar1;
  FString *pFVar2;
  int iVar3;
  int *in_ECX;
  undefined4 uVar4;
  undefined1 *puVar5;
  uint uStack_b0;
  FString local_a0 [12];
  FString local_94 [12];
  undefined1 *local_88;
  void *local_84;
  undefined1 *puStack_80;
  int local_7c;
  FString local_78 [12];
  FString local_6c [12];
  FString local_60 [16];
  FString local_50 [12];
  FString local_44 [12];
  FString local_38 [12];
  FString local_2c [12];
  FString local_20 [12];
  undefined1 local_14 [16];
  
  pFVar2 = local_78;
  puStack_80 = &LAB_1020d3e2;
  local_84 = ExceptionList;
  uStack_b0 = DAT_103554c4 ^ (uint)pFVar2;
  local_88 = (undefined1 *)&uStack_b0;
  ExceptionList = &local_84;
  local_7c = 0;
  FUN_1003f970();
  local_7c._0_1_ = 1;
  switch(param_1) {
  case 0:
    this = (FString *)(**(code **)(*in_ECX + 0x784))(local_94);
    local_7c._0_1_ = 2;
    iVar3 = FString::operator==(this,(ushort *)L"OlympiadObserverState");
    local_7c._0_1_ = 1;
    FString::~FString(local_94);
    if (iVar3 == 0) {
      FString::FString(local_44,(ushort *)L"OlympiadTargetWnd");
      local_7c._0_1_ = 4;
      uVar4 = 0;
      pFVar2 = local_44;
      FUN_10005c30(pFVar2,0);
      piVar1 = (int *)FUN_100d0cb0(pFVar2,uVar4);
      local_7c._0_1_ = 1;
      FString::~FString(local_44);
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 0x13c))();
      }
      break;
    }
    FString::FString(pFVar2,(ushort *)L"GamingState");
    local_7c._0_1_ = 3;
    (**(code **)(*in_ECX + 0x780))(pFVar2);
    goto LAB_101568ad;
  case 1:
    FString::FString(local_20,&DAT_1024faec);
    local_7c._0_1_ = 5;
    FString::FString(local_6c,(ushort *)L"PlayerNum");
    local_7c._0_1_ = 6;
    FUN_10040230(local_6c,local_20);
    local_7c._0_1_ = 5;
    FString::~FString(local_6c);
    local_7c._0_1_ = 1;
    FString::~FString(local_20);
    puVar5 = local_14;
    uVar4 = 900;
    FUN_10005c30(900,puVar5);
    FUN_100d1790(uVar4,puVar5);
    break;
  case 2:
    FString::FString(local_38,&DAT_102468e4);
    local_7c._0_1_ = 7;
    FString::FString(local_2c,(ushort *)L"PlayerNum");
    local_7c._0_1_ = 8;
    FUN_10040230(local_2c,local_38);
    local_7c._0_1_ = 7;
    FString::~FString(local_2c);
    local_7c._0_1_ = 1;
    FString::~FString(local_38);
    puVar5 = local_14;
    uVar4 = 900;
    FUN_10005c30(900,puVar5);
    FUN_100d1790(uVar4,puVar5);
    break;
  case 3:
    pFVar2 = (FString *)(**(code **)(*in_ECX + 0x784))(local_a0);
    local_7c._0_1_ = 9;
    iVar3 = FString::operator==(pFVar2,(ushort *)L"OlympiadObserverState");
    local_7c._0_1_ = 1;
    FString::~FString(local_a0);
    if (iVar3 == 0) {
      FString::FString(local_60,(ushort *)L"OlympiadObserverState");
      local_7c._0_1_ = 0xb;
      (**(code **)(*in_ECX + 0x780))(local_60);
      pFVar2 = local_60;
    }
    else {
      FString::FString(local_50,(ushort *)&DAT_1022f9f8);
      local_7c._0_1_ = 10;
      pFVar2 = local_50;
      uVar4 = 0x38e;
      FUN_10005c30(0x38e,pFVar2);
      FUN_100d1790(uVar4,pFVar2);
      pFVar2 = local_50;
    }
LAB_101568ad:
    local_7c._0_1_ = 1;
    FString::~FString(pFVar2);
  }
  local_7c = (uint)local_7c._1_3_ << 8;
  FUN_1003fff0();
  ExceptionList = local_84;
  return;
}


// ==== 101568dd Catch@101568dd

void Catch_101568dd(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + 0x70) = *(undefined4 *)(unaff_EBP + 0x24);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + 0x70,&DAT_102a47f0);
}


// ==== 101568f1 Catch@101568f1

void Catch_101568f1(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NConsoleWnd::OnOlympiadMode");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10156920 FUN_10156920

void FUN_10156920(void)

{
  int *unaff_FS_OFFSET;
  undefined4 uVar1;
  FString *pFVar2;
  uint uStack_38;
  FString local_28 [20];
  undefined1 *local_14;
  int local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_1020d409;
  local_10 = *unaff_FS_OFFSET;
  uStack_38 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_38;
  *unaff_FS_OFFSET = (int)&local_10;
  local_8 = 0;
  FString::FString(local_28,(ushort *)&DAT_1022f9f8);
  local_8._0_1_ = 1;
  pFVar2 = local_28;
  uVar1 = 0x38e;
  FUN_10005c30(0x38e,pFVar2);
  FUN_100d1790(uVar1,pFVar2);
  local_8 = (uint)local_8._1_3_ << 8;
  FString::~FString(local_28);
  *unaff_FS_OFFSET = local_10;
  return;
}


// ==== 1015699f Catch@1015699f

void Catch_1015699f(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 101569b3 Catch@101569b3

void Catch_101569b3(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NConsoleWnd::OnOlympiadMatchEnd");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101569d0 FUN_101569d0

void FUN_101569d0(L2ParamStack *param_1)

{
  ushort *puVar1;
  void *pvVar2;
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
  
  puStack_c = &LAB_1020d465;
  local_10 = ExceptionList;
  uStack_50 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_50;
  ExceptionList = &local_10;
  local_8 = 0;
  L2ParamStack::Restart(param_1);
  FUN_1003f970();
  local_8._0_1_ = 1;
  puVar1 = L2ParamStack::Top(param_1);
  FString::FString(local_40,puVar1);
  local_8._0_1_ = 2;
  FString::FString(local_34,(ushort *)L"OwnerName");
  local_8._0_1_ = 3;
  FUN_10040230(local_34,local_40);
  local_8._0_1_ = 2;
  FString::~FString(local_34);
  local_8._0_1_ = 1;
  FString::~FString(local_40);
  FString::FString(local_40,(ushort *)L"RoutingType");
  local_8._0_1_ = 4;
  pvVar2 = L2ParamStack::Top(param_1);
  FUN_10040090(local_40,pvVar2);
  local_8._0_1_ = 1;
  FString::~FString(local_40);
  FString::FString(local_40,(ushort *)L"PartyNum");
  local_8._0_1_ = 5;
  pvVar2 = L2ParamStack::Top(param_1);
  FUN_10040090(local_40,pvVar2);
  local_8._0_1_ = 1;
  FString::~FString(local_40);
  FString::FString(local_40,(ushort *)L"PartyMemberNum");
  local_8._0_1_ = 6;
  pvVar2 = L2ParamStack::Top(param_1);
  FUN_10040090(local_40,pvVar2);
  local_8._0_1_ = 1;
  FString::~FString(local_40);
  puVar4 = local_28;
  uVar3 = 0x564;
  FUN_10005c30(0x564,puVar4);
  FUN_100d1790(uVar3,puVar4);
  local_8 = (uint)local_8._1_3_ << 8;
  FUN_1003fff0();
  ExceptionList = local_10;
  return;
}


// ==== 10156b36 Catch@10156b36

void Catch_10156b36(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10156b4a Catch@10156b4a

void Catch_10156b4a(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NConsoleWnd::OnExMultiPartyCommandChannelInfo");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10156b70 FUN_10156b70

void FUN_10156b70(L2ParamStack *param_1)

{
  ushort *puVar1;
  void *pvVar2;
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
  
  puStack_c = &LAB_1020d4ac;
  local_10 = ExceptionList;
  uStack_50 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_50;
  ExceptionList = &local_10;
  local_8 = 0;
  L2ParamStack::Restart(param_1);
  FUN_1003f970();
  local_8._0_1_ = 1;
  puVar1 = L2ParamStack::Top(param_1);
  FString::FString(local_40,puVar1);
  local_8._0_1_ = 2;
  FString::FString(local_34,(ushort *)L"MasterName");
  local_8._0_1_ = 3;
  FUN_10040230(local_34,local_40);
  local_8._0_1_ = 2;
  FString::~FString(local_34);
  local_8._0_1_ = 1;
  FString::~FString(local_40);
  FString::FString(local_40,(ushort *)L"MasterID");
  local_8._0_1_ = 4;
  pvVar2 = L2ParamStack::Top(param_1);
  FUN_10040090(local_40,pvVar2);
  local_8._0_1_ = 1;
  FString::~FString(local_40);
  FString::FString(local_40,(ushort *)L"PartyNum");
  local_8._0_1_ = 5;
  pvVar2 = L2ParamStack::Top(param_1);
  FUN_10040090(local_40,pvVar2);
  local_8._0_1_ = 1;
  FString::~FString(local_40);
  puVar4 = local_28;
  uVar3 = 0x56e;
  FUN_10005c30(0x56e,puVar4);
  FUN_100d1790(uVar3,puVar4);
  local_8 = (uint)local_8._1_3_ << 8;
  FUN_1003fff0();
  ExceptionList = local_10;
  return;
}


// ==== 10156ca7 Catch@10156ca7

void Catch_10156ca7(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10156cbb Catch@10156cbb

void Catch_10156cbb(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NConsoleWnd::OnExMultiPartyCommandChannelInfoAddMember");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10156ce0 FUN_10156ce0

void FUN_10156ce0(L2ParamStack *param_1)

{
  void *pvVar1;
  ushort *puVar2;
  undefined4 uVar3;
  void *pvVar4;
  int iVar5;
  undefined1 *puVar6;
  uint uStack_70;
  FString local_60 [12];
  FString local_54 [12];
  FString local_48 [12];
  FString local_3c [12];
  undefined1 local_30 [20];
  int local_1c;
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  puStack_c = &LAB_1020d505;
  local_10 = ExceptionList;
  uStack_70 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_70;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_1003f970();
  local_8._0_1_ = 1;
  pvVar1 = L2ParamStack::Top(param_1);
  FString::FString(local_3c,(ushort *)L"MemberCount");
  local_8._0_1_ = 2;
  FUN_10040090(local_3c,pvVar1);
  local_8 = CONCAT31(local_8._1_3_,1);
  FString::~FString(local_3c);
  for (iVar5 = 0; local_1c = iVar5, iVar5 < (int)pvVar1; iVar5 = iVar5 + 1) {
    puVar2 = L2ParamStack::Top(param_1);
    FString::FString(local_3c,puVar2);
    local_8._0_1_ = 3;
    uVar3 = FString::Printf((ushort *)local_48,L"Name_%d",iVar5);
    local_8._0_1_ = 4;
    FUN_10040230(uVar3,local_3c);
    local_8._0_1_ = 3;
    FString::~FString(local_48);
    local_8._0_1_ = 1;
    FString::~FString(local_3c);
    local_18 = FString::Printf((ushort *)local_54,L"ServerID_%d",iVar5);
    local_8._0_1_ = 5;
    pvVar4 = L2ParamStack::Top(param_1);
    FUN_10040090(local_18,pvVar4);
    local_8._0_1_ = 1;
    FString::~FString(local_54);
    local_18 = FString::Printf((ushort *)local_60,L"ClassID_%d",iVar5);
    local_8._0_1_ = 6;
    pvVar4 = L2ParamStack::Top(param_1);
    FUN_10040090(local_18,pvVar4);
    local_8 = CONCAT31(local_8._1_3_,1);
    FString::~FString(local_60);
  }
  puVar6 = local_30;
  uVar3 = 0x58c;
  FUN_10005c30(0x58c,puVar6);
  FUN_100d1790(uVar3,puVar6);
  local_8 = local_8 & 0xffffff00;
  FUN_1003fff0();
  ExceptionList = local_10;
  return;
}


// ==== 10156e6e Catch@10156e6e

void Catch_10156e6e(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x1c) = *(undefined4 *)(unaff_EBP + -0x20);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x1c,&DAT_102a47f0);
}


// ==== 10156e82 Catch@10156e82

void Catch_10156e82(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NConsoleWnd::OnExMultiPartyCommandChannelInfoAddPartyMember")
  ;
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10156ea0 FUN_10156ea0

void FUN_10156ea0(L2ParamStack *param_1)

{
  ushort *puVar1;
  void *pvVar2;
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
  
  puStack_c = &LAB_1020d555;
  local_10 = ExceptionList;
  uStack_50 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_50;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_1003f970();
  local_8._0_1_ = 1;
  puVar1 = L2ParamStack::Top(param_1);
  FString::FString(local_40,puVar1);
  local_8._0_1_ = 2;
  FString::FString(local_34,(ushort *)L"MasterName");
  local_8._0_1_ = 3;
  FUN_10040230(local_34,local_40);
  local_8._0_1_ = 2;
  FString::~FString(local_34);
  local_8._0_1_ = 1;
  FString::~FString(local_40);
  FString::FString(local_40,(ushort *)L"MasterID");
  local_8._0_1_ = 4;
  pvVar2 = L2ParamStack::Top(param_1);
  FUN_10040090(local_40,pvVar2);
  local_8._0_1_ = 1;
  FString::~FString(local_40);
  FString::FString(local_40,(ushort *)L"MemberCount");
  local_8._0_1_ = 5;
  pvVar2 = L2ParamStack::Top(param_1);
  FUN_10040090(local_40,pvVar2);
  local_8._0_1_ = 1;
  FString::~FString(local_40);
  FString::FString(local_40,(ushort *)L"Type");
  local_8._0_1_ = 6;
  pvVar2 = L2ParamStack::Top(param_1);
  FUN_10040090(local_40,pvVar2);
  local_8._0_1_ = 1;
  FString::~FString(local_40);
  puVar4 = local_28;
  uVar3 = 0x573;
  FUN_10005c30(0x573,puVar4);
  FUN_100d1790(uVar3,puVar4);
  local_8 = (uint)local_8._1_3_ << 8;
  FUN_1003fff0();
  ExceptionList = local_10;
  return;
}


// ==== 10156ffe Catch@10156ffe

void Catch_10156ffe(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10157012 Catch@10157012

void Catch_10157012(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NConsoleWnd::OnExMPCCPartyInfoUpdate");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10157030 FUN_10157030

void FUN_10157030(void)

{
  undefined4 uVar1;
  FString *pFVar2;
  uint uStack_38;
  FString local_28 [20];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_1020d579;
  local_10 = ExceptionList;
  uStack_38 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_38;
  ExceptionList = &local_10;
  local_8 = 0;
  FString::FString(local_28,(ushort *)&DAT_1022f9f8);
  local_8._0_1_ = 1;
  pFVar2 = local_28;
  uVar1 = 0x212;
  FUN_10005c30(0x212,pFVar2);
  FUN_100d1790(uVar1,pFVar2);
  local_8 = (uint)local_8._1_3_ << 8;
  FString::~FString(local_28);
  ExceptionList = local_10;
  return;
}


// ==== 101570af Catch@101570af

void Catch_101570af(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 101570c3 Catch@101570c3

void Catch_101570c3(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NConsoleWnd::OnShowPCCafeCouponShowUI");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101570e0 FUN_101570e0

void FUN_101570e0(void)

{
  undefined4 uVar1;
  FString *pFVar2;
  uint uStack_38;
  FString local_28 [20];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_1020d5a9;
  local_10 = ExceptionList;
  uStack_38 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_38;
  ExceptionList = &local_10;
  local_8 = 0;
  FString::FString(local_28,(ushort *)&DAT_1022f9f8);
  local_8._0_1_ = 1;
  pFVar2 = local_28;
  uVar1 = 0x550;
  FUN_10005c30(0x550,pFVar2);
  FUN_100d1790(uVar1,pFVar2);
  local_8 = (uint)local_8._1_3_ << 8;
  FString::~FString(local_28);
  ExceptionList = local_10;
  return;
}


// ==== 10157161 Catch@10157161

void Catch_10157161(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10157175 Catch@10157175

void Catch_10157175(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NConsoleWnd::OnExOpenMPCC");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101571a0 FUN_101571a0

void FUN_101571a0(void)

{
  undefined4 uVar1;
  FString *pFVar2;
  uint uStack_38;
  FString local_28 [20];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_1020d5d9;
  local_10 = ExceptionList;
  uStack_38 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_38;
  ExceptionList = &local_10;
  local_8 = 0;
  FString::FString(local_28,(ushort *)&DAT_1022f9f8);
  local_8._0_1_ = 1;
  pFVar2 = local_28;
  uVar1 = 0x55a;
  FUN_10005c30(0x55a,pFVar2);
  FUN_100d1790(uVar1,pFVar2);
  local_8 = (uint)local_8._1_3_ << 8;
  FString::~FString(local_28);
  ExceptionList = local_10;
  return;
}


// ==== 10157221 Catch@10157221

void Catch_10157221(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10157235 Catch@10157235

void Catch_10157235(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NConsoleWnd::OnExCloseMPCC");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10157260 FUN_10157260

void FUN_10157260(L2ParamStack *param_1)

{
  void *pvVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  uint uStack_44;
  FString local_34 [12];
  undefined1 local_28 [20];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  puStack_c = &LAB_1020d611;
  local_10 = ExceptionList;
  uStack_44 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_44;
  ExceptionList = &local_10;
  local_8 = 0;
  pvVar1 = L2ParamStack::Top(param_1);
  FUN_1003f970();
  local_8._0_1_ = 1;
  FString::FString(local_34,(ushort *)L"Type");
  local_8._0_1_ = 2;
  FUN_10040090(local_34,pvVar1);
  local_8 = CONCAT31(local_8._1_3_,1);
  FString::~FString(local_34);
  if ((-1 < (int)pvVar1) && ((int)pvVar1 < 4)) {
    puVar3 = local_28;
    uVar2 = 0x7da;
    FUN_10005c30(0x7da,puVar3);
    FUN_100d1790(uVar2,puVar3);
  }
  local_8 = local_8 & 0xffffff00;
  FUN_1003fff0();
  ExceptionList = local_10;
  return;
}


// ==== 1015731a Catch@1015731a

void Catch_1015731a(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1015732e Catch@1015732e

void Catch_1015732e(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NConsoleWnd::ShowTrainListWnd");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10157350 FUN_10157350

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

void FUN_10157350(void *param_1,undefined4 param_2,int param_3,undefined4 param_4,undefined4 param_5
                 )

{
  int iVar1;
  code *this;
  int iVar2;
  int iVar3;
  ushort *puVar4;
  uint uStack_1d1c;
  ushort local_1cfc [256];
  ushort local_1afc [256];
  ushort local_18fc [768];
  ushort local_12fc [2318];
  undefined4 local_e0;
  undefined4 local_dc;
  int local_d4;
  undefined4 local_d0;
  undefined4 local_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_4c;
  uint local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1020d630;
  local_10 = ExceptionList;
  uStack_1d1c = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_1d1c;
  ExceptionList = &local_10;
  local_8 = 0;
  local_18 = uStack_1d1c;
  FUN_1002be90();
  this = GL2GameData_exref;
  iVar3 = FUN_10187a60(&param_3);
  iVar2 = param_3;
  if ((-1 < param_3) && (iVar3 != 0)) {
    iVar1 = *(int *)(iVar3 + 4);
    puVar4 = FL2GameData::GetItemName((FL2GameData *)this,param_3);
    appStrcpy(local_1cfc,puVar4);
    puVar4 = L2FName::operator*((L2FName *)(iVar3 + 0x54));
    appStrcpy(local_1afc,puVar4);
    puVar4 = L2FName::operator*((L2FName *)(iVar3 + 0x3c));
    appStrcpy(local_18fc,puVar4);
    puVar4 = FL2GameData::GetItemDescription((FL2GameData *)GL2GameData_exref,iVar2);
    appStrcpy(local_12fc,puVar4);
    local_e0 = param_2;
    local_d4 = iVar2;
    local_d0 = param_4;
    local_c4 = param_5;
    if (iVar1 == 0) {
      local_c0 = *(undefined4 *)(iVar3 + 0xc4);
      local_bc = *(undefined4 *)(iVar3 + 200);
      local_b8 = *(undefined4 *)(iVar3 + 0x130);
      local_b4 = *(undefined4 *)(iVar3 + 0x128);
      local_b0 = *(undefined4 *)(iVar3 + 300);
      local_a4 = *(undefined4 *)(iVar3 + 0x144);
      local_a0 = *(undefined4 *)(iVar3 + 0x148);
      local_9c = *(undefined4 *)(iVar3 + 0xc0);
      local_98 = *(undefined4 *)(iVar3 + 0x134);
      local_94 = *(undefined4 *)(iVar3 + 0x124);
      local_90 = *(undefined4 *)(iVar3 + 0x138);
      local_8c = *(undefined4 *)(iVar3 + 0x13c);
      local_88 = *(undefined4 *)(iVar3 + 0x14c);
      local_84 = *(undefined4 *)(iVar3 + 0x150);
      local_7c = *(undefined4 *)(iVar3 + 0x140);
    }
    else if (iVar1 == 1) {
      local_c0 = *(undefined4 *)(iVar3 + 0xc4);
      local_bc = *(undefined4 *)(iVar3 + 200);
      local_9c = *(undefined4 *)(iVar3 + 0xc0);
      local_98 = *(undefined4 *)(iVar3 + 0x5e8);
      local_80 = *(undefined4 *)(iVar3 + 0x5e4);
      local_7c = *(undefined4 *)(iVar3 + 0x5ec);
      local_ac = *(undefined4 *)(iVar3 + 0x5f0);
      local_a8 = *(undefined4 *)(iVar3 + 0x5f4);
    }
    else if (iVar1 == 2) {
      local_c0 = *(undefined4 *)(iVar3 + 0xc4);
      local_bc = *(undefined4 *)(iVar3 + 200);
      local_9c = *(undefined4 *)(iVar3 + 0xc0);
      local_98 = *(undefined4 *)(iVar3 + 0x104);
      local_4c = *(undefined4 *)(iVar3 + 0xfc);
      local_dc = *(undefined4 *)(iVar3 + 0x100);
    }
  }
  _memcpy(param_1,local_1cfc,0x1ce4);
  ExceptionList = local_10;
  __security_check_cookie(local_18 ^ (uint)&stack0xfffffffc);
  return;
}


// ==== 1015760c Catch@1015760c

void Catch_1015760c(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x1d00) = *(undefined4 *)(unaff_EBP + -0x1d08);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x1d00,&DAT_102a47f0);
}


// ==== 10157629 Catch@10157629

void Catch_10157629(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NConsoleWnd::GetNCItemInfo");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10157650 FUN_10157650

void FUN_10157650(void)

{
  undefined4 uVar1;
  undefined1 *puVar2;
  uint uStack_38;
  undefined1 local_28 [20];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_1020d668;
  local_10 = ExceptionList;
  uStack_38 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_38;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_1003f970();
  local_8._0_1_ = 1;
  puVar2 = local_28;
  uVar1 = 0x802;
  FUN_10005c30(0x802,puVar2);
  FUN_100d1790(uVar1,puVar2);
  puVar2 = local_28;
  uVar1 = 0x7e4;
  FUN_10005c30(0x7e4,puVar2);
  FUN_100d1790(uVar1,puVar2);
  local_8 = (uint)local_8._1_3_ << 8;
  FUN_1003fff0();
  ExceptionList = local_10;
  return;
}


// ==== 101576dd Catch@101576dd

void Catch_101576dd(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 101576f1 Catch@101576f1

void Catch_101576f1(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NConsoleWnd::HideTrainWnd");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10157710 FUN_10157710

void FUN_10157710(void)

{
  uint uVar1;
  FString local_18 [12];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1020d699;
  local_c = ExceptionList;
  uVar1 = DAT_103554c4 ^ (uint)local_18;
  ExceptionList = &local_c;
  FString::FString(local_18,(ushort *)&DAT_1022f9f8);
  local_4 = 0;
  if (DAT_1035786c == 0) {
    FUN_10005270(uVar1);
  }
  FUN_100d1790(0x500,local_18);
  local_4 = 0xffffffff;
  FString::~FString(local_18);
  ExceptionList = local_c;
  return;
}


// ==== 10157790 FUN_10157790

void FUN_10157790(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined1 *puVar2;
  uint uStack_44;
  FString local_34 [12];
  undefined1 local_28 [20];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_1020d6da;
  local_10 = ExceptionList;
  uStack_44 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_44;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_1003f970();
  local_8._0_1_ = 1;
  FString::FString(local_34,(ushort *)L"Type");
  local_8._0_1_ = 2;
  FUN_10040090(local_34,param_1);
  local_8._0_1_ = 1;
  FString::~FString(local_34);
  FString::FString(local_34,(ushort *)L"CurrentMP");
  local_8._0_1_ = 3;
  FUN_10040090(local_34,param_2);
  local_8._0_1_ = 1;
  FString::~FString(local_34);
  puVar2 = local_28;
  uVar1 = 0x334;
  FUN_10005c30(0x334,puVar2);
  FUN_100d1790(uVar1,puVar2);
  local_8 = (uint)local_8._1_3_ << 8;
  FUN_1003fff0();
  ExceptionList = local_10;
  return;
}


// ==== 10157867 Catch@10157867

void Catch_10157867(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1015787b Catch@1015787b

void Catch_1015787b(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NConsoleWnd::ReceiveRecipeBookItemList");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101578a0 FUN_101578a0

void FUN_101578a0(undefined4 param_1)

{
  undefined4 uVar1;
  undefined1 *puVar2;
  uint uStack_44;
  FString local_34 [12];
  undefined1 local_28 [20];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_1020d711;
  local_10 = ExceptionList;
  uStack_44 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_44;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_1003f970();
  local_8._0_1_ = 1;
  FString::FString(local_34,(ushort *)L"RecipeID");
  local_8._0_1_ = 2;
  FUN_10040090(local_34,param_1);
  local_8._0_1_ = 1;
  FString::~FString(local_34);
  puVar2 = local_28;
  uVar1 = 0x33e;
  FUN_10005c30(0x33e,puVar2);
  FUN_100d1790(uVar1,puVar2);
  local_8 = (uint)local_8._1_3_ << 8;
  FUN_1003fff0();
  ExceptionList = local_10;
  return;
}


// ==== 10157949 Catch@10157949

void Catch_10157949(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1015795d Catch@1015795d

void Catch_1015795d(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NConsoleWnd::AddRecipeBookItem");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10157980 FUN_10157980

void FUN_10157980(L2ParamStack *param_1)

{
  void *pvVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  uint uStack_44;
  FString local_34 [12];
  undefined1 local_28 [20];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_1020d765;
  local_10 = ExceptionList;
  uStack_44 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_44;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_1003f970();
  local_8._0_1_ = 1;
  FString::FString(local_34,(ushort *)L"RecipeID");
  local_8._0_1_ = 2;
  pvVar1 = L2ParamStack::Top(param_1);
  FUN_10040090(local_34,pvVar1);
  local_8._0_1_ = 1;
  FString::~FString(local_34);
  FString::FString(local_34,(ushort *)L"CurrentMP");
  local_8._0_1_ = 3;
  pvVar1 = L2ParamStack::Top(param_1);
  FUN_10040090(local_34,pvVar1);
  local_8._0_1_ = 1;
  FString::~FString(local_34);
  FString::FString(local_34,(ushort *)L"MaxMP");
  local_8._0_1_ = 4;
  pvVar1 = L2ParamStack::Top(param_1);
  FUN_10040090(local_34,pvVar1);
  local_8._0_1_ = 1;
  FString::~FString(local_34);
  FString::FString(local_34,(ushort *)L"MakingResult");
  local_8._0_1_ = 5;
  pvVar1 = L2ParamStack::Top(param_1);
  FUN_10040090(local_34,pvVar1);
  local_8._0_1_ = 1;
  FString::~FString(local_34);
  FString::FString(local_34,(ushort *)L"Type");
  local_8._0_1_ = 6;
  pvVar1 = L2ParamStack::Top(param_1);
  FUN_10040090(local_34,pvVar1);
  local_8._0_1_ = 1;
  FString::~FString(local_34);
  puVar3 = local_28;
  uVar2 = 0x348;
  FUN_10005c30(0x348,puVar3);
  FUN_100d1790(uVar2,puVar3);
  local_8 = (uint)local_8._1_3_ << 8;
  FUN_1003fff0();
  ExceptionList = local_10;
  return;
}


// ==== 10157aef Catch@10157aef

void Catch_10157aef(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10157b03 Catch@10157b03

void Catch_10157b03(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NConsoleWnd::ReceiveRecipeItemMakeInfo");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10157b20 FUN_10157b20

void FUN_10157b20(undefined4 param_1)

{
  undefined4 uVar1;
  undefined1 *puVar2;
  uint uStack_44;
  FString local_34 [12];
  undefined1 local_28 [20];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_1020d791;
  local_10 = ExceptionList;
  uStack_44 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_44;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_1003f970();
  local_8._0_1_ = 1;
  FString::FString(local_34,(ushort *)L"Type");
  local_8._0_1_ = 2;
  FUN_10040090(local_34,param_1);
  local_8._0_1_ = 1;
  FString::~FString(local_34);
  puVar2 = local_28;
  uVar1 = 0x352;
  FUN_10005c30(0x352,puVar2);
  FUN_100d1790(uVar1,puVar2);
  local_8 = (uint)local_8._1_3_ << 8;
  FUN_1003fff0();
  ExceptionList = local_10;
  return;
}


// ==== 10157bc9 Catch@10157bc9

void Catch_10157bc9(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10157bdd Catch@10157bdd

void Catch_10157bdd(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NConsoleWnd::ReceiveRecipeShopManageList");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10157c00 FUN_10157c00

void FUN_10157c00(undefined4 param_1)

{
  undefined4 uVar1;
  undefined1 *puVar2;
  uint uStack_44;
  FString local_34 [12];
  undefined1 local_28 [20];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_1020d7c1;
  local_10 = ExceptionList;
  uStack_44 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_44;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_1003f970();
  local_8._0_1_ = 1;
  FString::FString(local_34,(ushort *)L"RecipeID");
  local_8._0_1_ = 2;
  FUN_10040090(local_34,param_1);
  local_8._0_1_ = 1;
  FString::~FString(local_34);
  puVar2 = local_28;
  uVar1 = 0x35c;
  FUN_10005c30(0x35c,puVar2);
  FUN_100d1790(uVar1,puVar2);
  local_8 = (uint)local_8._1_3_ << 8;
  FUN_1003fff0();
  ExceptionList = local_10;
  return;
}


// ==== 10157ca9 Catch@10157ca9

void Catch_10157ca9(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10157cbd Catch@10157cbd

void Catch_10157cbd(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NConsoleWnd::AddRecipeShopManageItem");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10157ce0 FUN_10157ce0

void FUN_10157ce0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined1 *puVar2;
  uint uStack_44;
  FString local_34 [12];
  undefined1 local_28 [20];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_1020d803;
  local_10 = ExceptionList;
  uStack_44 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_44;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_1003f970();
  local_8._0_1_ = 1;
  FString::FString(local_34,(ushort *)L"RecipeID");
  local_8._0_1_ = 2;
  FUN_10040090(local_34,param_1);
  local_8._0_1_ = 1;
  FString::~FString(local_34);
  FString::FString(local_34,(ushort *)L"CanbeMade");
  local_8._0_1_ = 3;
  FUN_10040090(local_34,param_2);
  local_8._0_1_ = 1;
  FString::~FString(local_34);
  FString::FString(local_34,(ushort *)L"MakingFee");
  local_8._0_1_ = 4;
  FUN_10040090(local_34,param_3);
  local_8._0_1_ = 1;
  FString::~FString(local_34);
  puVar2 = local_28;
  uVar1 = 0x366;
  FUN_10005c30(0x366,puVar2);
  FUN_100d1790(uVar1,puVar2);
  local_8 = (uint)local_8._1_3_ << 8;
  FUN_1003fff0();
  ExceptionList = local_10;
  return;
}


// ==== 10157de5 Catch@10157de5

void Catch_10157de5(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10157df9 Catch@10157df9

void Catch_10157df9(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NConsoleWnd::AddRecipeShopRegisterdItem");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10157e20 FUN_10157e20

void FUN_10157e20(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined1 *puVar2;
  uint uStack_44;
  FString local_34 [12];
  undefined1 local_28 [20];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_1020d84c;
  local_10 = ExceptionList;
  uStack_44 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_44;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_1003f970();
  local_8._0_1_ = 1;
  FString::FString(local_34,(ushort *)L"ServerID");
  local_8._0_1_ = 2;
  FUN_10040090(local_34,param_1);
  local_8._0_1_ = 1;
  FString::~FString(local_34);
  FString::FString(local_34,(ushort *)L"CurrentMP");
  local_8._0_1_ = 3;
  FUN_10040090(local_34,param_2);
  local_8._0_1_ = 1;
  FString::~FString(local_34);
  FString::FString(local_34,(ushort *)L"MaxMP");
  local_8._0_1_ = 4;
  FUN_10040090(local_34,param_3);
  local_8._0_1_ = 1;
  FString::~FString(local_34);
  FString::FString(local_34,(ushort *)L"Adena");
  local_8._0_1_ = 5;
  FUN_10040090(local_34,param_4);
  local_8._0_1_ = 1;
  FString::~FString(local_34);
  puVar2 = local_28;
  uVar1 = 0x30c;
  FUN_10005c30(0x30c,puVar2);
  FUN_100d1790(uVar1,puVar2);
  local_8 = (uint)local_8._1_3_ << 8;
  FUN_1003fff0();
  ExceptionList = local_10;
  return;
}


// ==== 10157f53 Catch@10157f53

void Catch_10157f53(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10157f67 Catch@10157f67

void Catch_10157f67(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NConsoleWnd::ReceiveRecipeShopSellList");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10157f90 FUN_10157f90

void FUN_10157f90(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined1 *puVar2;
  uint uStack_44;
  FString local_34 [12];
  undefined1 local_28 [20];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_1020d893;
  local_10 = ExceptionList;
  uStack_44 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_44;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_1003f970();
  local_8._0_1_ = 1;
  FString::FString(local_34,(ushort *)L"RecipeID");
  local_8._0_1_ = 2;
  FUN_10040090(local_34,param_1);
  local_8._0_1_ = 1;
  FString::~FString(local_34);
  FString::FString(local_34,(ushort *)L"CanbeMade");
  local_8._0_1_ = 3;
  FUN_10040090(local_34,param_2);
  local_8._0_1_ = 1;
  FString::~FString(local_34);
  FString::FString(local_34,(ushort *)L"MakingFee");
  local_8._0_1_ = 4;
  FUN_10040090(local_34,param_3);
  local_8._0_1_ = 1;
  FString::~FString(local_34);
  puVar2 = local_28;
  uVar1 = 0x316;
  FUN_10005c30(0x316,puVar2);
  FUN_100d1790(uVar1,puVar2);
  local_8 = (uint)local_8._1_3_ << 8;
  FUN_1003fff0();
  ExceptionList = local_10;
  return;
}


// ==== 10158095 Catch@10158095

void Catch_10158095(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 101580a9 Catch@101580a9

void Catch_101580a9(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NConsoleWnd::AddRecipeShopSellItem");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101580d0 FUN_101580d0

void FUN_101580d0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  undefined4 uVar1;
  undefined1 *puVar2;
  uint uStack_44;
  FString local_34 [12];
  undefined1 local_28 [20];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_1020d8ee;
  local_10 = ExceptionList;
  uStack_44 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_44;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_1003f970();
  local_8._0_1_ = 1;
  FString::FString(local_34,(ushort *)L"MerchantID");
  local_8._0_1_ = 2;
  FUN_10040090(local_34,param_1);
  local_8._0_1_ = 1;
  FString::~FString(local_34);
  FString::FString(local_34,(ushort *)L"RecipeID");
  local_8._0_1_ = 3;
  FUN_10040090(local_34,param_2);
  local_8._0_1_ = 1;
  FString::~FString(local_34);
  FString::FString(local_34,(ushort *)L"CurrentMP");
  local_8._0_1_ = 4;
  FUN_10040090(local_34,param_3);
  local_8._0_1_ = 1;
  FString::~FString(local_34);
  FString::FString(local_34,(ushort *)L"MaxMP");
  local_8._0_1_ = 5;
  FUN_10040090(local_34,param_4);
  local_8._0_1_ = 1;
  FString::~FString(local_34);
  FString::FString(local_34,(ushort *)L"MakingResult");
  local_8._0_1_ = 6;
  FUN_10040090(local_34,param_5);
  local_8._0_1_ = 1;
  FString::~FString(local_34);
  FString::FString(local_34,(ushort *)L"Adena");
  local_8._0_1_ = 7;
  FUN_10040090(local_34,param_6);
  local_8._0_1_ = 1;
  FString::~FString(local_34);
  puVar2 = local_28;
  uVar1 = 800;
  FUN_10005c30(800,puVar2);
  FUN_100d1790(uVar1,puVar2);
  local_8 = (uint)local_8._1_3_ << 8;
  FUN_1003fff0();
  ExceptionList = local_10;
  return;
}


// ==== 1015825f Catch@1015825f

void Catch_1015825f(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10158273 Catch@10158273

void Catch_10158273(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NConsoleWnd::ReceiveRecipeShopItemInfo");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10158290 FUN_10158290

void FUN_10158290(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined1 *puVar2;
  uint uStack_44;
  FString local_34 [12];
  undefined1 local_28 [20];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_1020d92a;
  local_10 = ExceptionList;
  uStack_44 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_44;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_1003f970();
  local_8._0_1_ = 1;
  FString::FString(local_34,(ushort *)L"ServerID");
  local_8._0_1_ = 2;
  FUN_10040090(local_34,param_1);
  local_8._0_1_ = 1;
  FString::~FString(local_34);
  FString::FString(local_34,(ushort *)L"CurrentMP");
  local_8._0_1_ = 3;
  FUN_10040090(local_34,param_2);
  local_8._0_1_ = 1;
  FString::~FString(local_34);
  puVar2 = local_28;
  uVar1 = 0xd2;
  FUN_10005c30(0xd2,puVar2);
  FUN_100d1790(uVar1,puVar2);
  local_8 = (uint)local_8._1_3_ << 8;
  FUN_1003fff0();
  ExceptionList = local_10;
  return;
}


// ==== 10158367 Catch@10158367

void Catch_10158367(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1015837b Catch@1015837b

void Catch_1015837b(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NConsoleWnd::OnUpdateMPbarEachWindow");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101583a0 FUN_101583a0

void FUN_101583a0(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined1 *puVar2;
  uint uStack_44;
  FString local_34 [12];
  undefined1 local_28 [20];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_1020d96a;
  local_10 = ExceptionList;
  uStack_44 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_44;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_1003f970();
  local_8._0_1_ = 1;
  FString::FString(local_34,(ushort *)L"ServerID");
  local_8._0_1_ = 2;
  FUN_10040090(local_34,param_1);
  local_8._0_1_ = 1;
  FString::~FString(local_34);
  FString::FString(local_34,(ushort *)L"CurrentHP");
  local_8._0_1_ = 3;
  FUN_10040090(local_34,param_2);
  local_8._0_1_ = 1;
  FString::~FString(local_34);
  puVar2 = local_28;
  uVar1 = 0xbe;
  FUN_10005c30(0xbe,puVar2);
  FUN_100d1790(uVar1,puVar2);
  local_8 = (uint)local_8._1_3_ << 8;
  FUN_1003fff0();
  ExceptionList = local_10;
  return;
}


// ==== 10158477 Catch@10158477

void Catch_10158477(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1015848b Catch@1015848b

void Catch_1015848b(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NConsoleWnd::OnUpdateHPbarEachWindow");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101584b0 FUN_101584b0

void FUN_101584b0(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined1 *puVar2;
  uint uStack_44;
  FString local_34 [12];
  undefined1 local_28 [20];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_1020d9aa;
  local_10 = ExceptionList;
  uStack_44 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_44;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_1003f970();
  local_8._0_1_ = 1;
  FString::FString(local_34,(ushort *)L"ServerID");
  local_8._0_1_ = 2;
  FUN_10040090(local_34,param_1);
  local_8._0_1_ = 1;
  FString::~FString(local_34);
  FString::FString(local_34,(ushort *)L"MaxMP");
  local_8._0_1_ = 3;
  FUN_10040090(local_34,param_2);
  local_8._0_1_ = 1;
  FString::~FString(local_34);
  puVar2 = local_28;
  uVar1 = 0xdc;
  FUN_10005c30(0xdc,puVar2);
  FUN_100d1790(uVar1,puVar2);
  local_8 = (uint)local_8._1_3_ << 8;
  FUN_1003fff0();
  ExceptionList = local_10;
  return;
}


// ==== 10158587 Catch@10158587

void Catch_10158587(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1015859b Catch@1015859b

void Catch_1015859b(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NConsoleWnd::OnUpdateMaxMPbarEachWindow");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101585c0 FUN_101585c0

void FUN_101585c0(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined1 *puVar2;
  uint uStack_44;
  FString local_34 [12];
  undefined1 local_28 [20];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_1020d9ea;
  local_10 = ExceptionList;
  uStack_44 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_44;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_1003f970();
  local_8._0_1_ = 1;
  FString::FString(local_34,(ushort *)L"ServerID");
  local_8._0_1_ = 2;
  FUN_10040090(local_34,param_1);
  local_8._0_1_ = 1;
  FString::~FString(local_34);
  FString::FString(local_34,(ushort *)L"MaxHP");
  local_8._0_1_ = 3;
  FUN_10040090(local_34,param_2);
  local_8._0_1_ = 1;
  FString::~FString(local_34);
  puVar2 = local_28;
  uVar1 = 200;
  FUN_10005c30(200,puVar2);
  FUN_100d1790(uVar1,puVar2);
  local_8 = (uint)local_8._1_3_ << 8;
  FUN_1003fff0();
  ExceptionList = local_10;
  return;
}


// ==== 10158697 Catch@10158697

void Catch_10158697(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 101586ab Catch@101586ab

void Catch_101586ab(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NConsoleWnd::OnUpdateMaxHPbarEachWindow");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101586d0 FUN_101586d0

void FUN_101586d0(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined1 *puVar2;
  uint uStack_44;
  FString local_34 [12];
  undefined1 local_28 [20];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_1020da2a;
  local_10 = ExceptionList;
  uStack_44 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_44;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_1003f970();
  local_8._0_1_ = 1;
  FString::FString(local_34,(ushort *)L"ServerID");
  local_8._0_1_ = 2;
  FUN_10040090(local_34,param_1);
  local_8._0_1_ = 1;
  FString::~FString(local_34);
  FString::FString(local_34,(ushort *)L"CurrentCP");
  local_8._0_1_ = 3;
  FUN_10040090(local_34,param_2);
  local_8._0_1_ = 1;
  FString::~FString(local_34);
  puVar2 = local_28;
  uVar1 = 0xe6;
  FUN_10005c30(0xe6,puVar2);
  FUN_100d1790(uVar1,puVar2);
  local_8 = (uint)local_8._1_3_ << 8;
  FUN_1003fff0();
  ExceptionList = local_10;
  return;
}


// ==== 101587a7 Catch@101587a7

void Catch_101587a7(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 101587bb Catch@101587bb

void Catch_101587bb(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NConsoleWnd::OnUpdateCPbarEachWindow");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101587e0 FUN_101587e0

void FUN_101587e0(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined1 *puVar2;
  uint uStack_44;
  FString local_34 [12];
  undefined1 local_28 [20];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_1020da6a;
  local_10 = ExceptionList;
  uStack_44 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_44;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_1003f970();
  local_8._0_1_ = 1;
  FString::FString(local_34,(ushort *)L"ServerID");
  local_8._0_1_ = 2;
  FUN_10040090(local_34,param_1);
  local_8._0_1_ = 1;
  FString::~FString(local_34);
  FString::FString(local_34,(ushort *)L"MaxCP");
  local_8._0_1_ = 3;
  FUN_10040090(local_34,param_2);
  local_8._0_1_ = 1;
  FString::~FString(local_34);
  puVar2 = local_28;
  uVar1 = 0xf0;
  FUN_10005c30(0xf0,puVar2);
  FUN_100d1790(uVar1,puVar2);
  local_8 = (uint)local_8._1_3_ << 8;
  FUN_1003fff0();
  ExceptionList = local_10;
  return;
}


// ==== 101588b7 Catch@101588b7

void Catch_101588b7(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 101588cb Catch@101588cb

void Catch_101588cb(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NConsoleWnd::OnUpdateMaxCPbarEachWindow");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101588f0 FUN_101588f0

void FUN_101588f0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  FString *pFVar3;
  uint uStack_38;
  FString local_28 [20];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_1020da99;
  local_10 = ExceptionList;
  uStack_38 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_38;
  ExceptionList = &local_10;
  local_8 = 0;
  iVar1 = FUN_1014deb0();
  if ((0 < param_1) && (iVar1 == param_1)) {
    FString::FString(local_28,(ushort *)&DAT_1022f9f8);
    local_8._0_1_ = 1;
    pFVar3 = local_28;
    uVar2 = 0x3d4;
    FUN_10005c30(0x3d4,pFVar3);
    FUN_100d1790(uVar2,pFVar3);
    local_8 = (uint)local_8._1_3_ << 8;
    FString::~FString(local_28);
  }
  ExceptionList = local_10;
  return;
}


// ==== 10158987 Catch@10158987

void Catch_10158987(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1015899b Catch@1015899b

void Catch_1015899b(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NConsoleWnd::OnTargetStatusUpdate");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101589c0 FUN_101589c0

void FUN_101589c0(undefined4 param_1)

{
  undefined4 uVar1;
  undefined1 *puVar2;
  uint uStack_44;
  FString local_34 [12];
  undefined1 local_28 [20];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_1020dad1;
  local_10 = ExceptionList;
  uStack_44 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_44;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_1003f970();
  local_8._0_1_ = 1;
  FString::FString(local_34,"Adena");
  local_8._0_1_ = 2;
  FUN_10040090(local_34,param_1);
  local_8._0_1_ = 1;
  FString::~FString(local_34);
  puVar2 = local_28;
  uVar1 = 0x668;
  FUN_10005c30(0x668,puVar2);
  FUN_100d1790(uVar1,puVar2);
  local_8 = (uint)local_8._1_3_ << 8;
  FUN_1003fff0();
  ExceptionList = local_10;
  return;
}


// ==== 10158a69 Catch@10158a69

void Catch_10158a69(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10158a7d Catch@10158a7d

void Catch_10158a7d(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NConsoleWnd::ReceiveHennaEquipList");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10158aa0 FUN_10158aa0

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

void FUN_10158aa0(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  FL2ItemDataBase *pFVar1;
  ushort *puVar2;
  undefined4 uVar3;
  undefined1 *puVar4;
  uint uStack_1470;
  FString local_1458 [12];
  undefined1 local_144c [12];
  FString local_1440 [12];
  undefined1 *local_1434;
  void *local_1430;
  undefined1 *puStack_142c;
  int local_1428;
  ushort local_1424 [256];
  ushort local_1224 [256];
  ushort local_1024 [2050];
  undefined4 local_20;
  int local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  uint local_8;
  
  puStack_142c = &LAB_1020db52;
  local_1430 = ExceptionList;
  uStack_1470 = DAT_103554c4 ^ (uint)local_1424;
  local_1434 = (undefined1 *)&uStack_1470;
  ExceptionList = &local_1430;
  local_1428 = 0;
  local_8 = uStack_1470;
  pFVar1 = FL2GameData::GetItemData((FL2GameData *)GL2GameData_exref,param_2);
  if (pFVar1 != (FL2ItemDataBase *)0x0) {
    FUN_1014b030();
    puVar2 = L2FName::operator*((L2FName *)(pFVar1 + 0x50));
    appStrcpy(local_1424,puVar2);
    puVar2 = L2FName::operator*((L2FName *)(pFVar1 + 0x54));
    appStrcpy(local_1024,puVar2);
    puVar2 = L2FName::operator*((L2FName *)(pFVar1 + 0x3c));
    appStrcpy(local_1224,puVar2);
    local_20 = param_1;
    local_1c = param_2;
    local_18 = param_3;
    local_14 = param_4;
    local_10 = param_5;
    FUN_1003f970();
    local_1428._0_1_ = 1;
    FString::FString(local_1440,local_1424);
    local_1428._0_1_ = 2;
    FString::FString(local_1458,"Name");
    local_1428._0_1_ = 3;
    FUN_10040230(local_1458,local_1440);
    local_1428._0_1_ = 2;
    FString::~FString(local_1458);
    local_1428._0_1_ = 1;
    FString::~FString(local_1440);
    FString::FString(local_1458,local_1024);
    local_1428._0_1_ = 4;
    FString::FString(local_1440,"Description");
    local_1428._0_1_ = 5;
    FUN_10040230(local_1440,local_1458);
    local_1428._0_1_ = 4;
    FString::~FString(local_1440);
    local_1428._0_1_ = 1;
    FString::~FString(local_1458);
    FString::FString(local_1458,local_1224);
    local_1428._0_1_ = 6;
    FString::FString(local_1440,"IconName");
    local_1428._0_1_ = 7;
    FUN_10040230(local_1440,local_1458);
    local_1428._0_1_ = 6;
    FString::~FString(local_1440);
    local_1428._0_1_ = 1;
    FString::~FString(local_1458);
    FString::FString(local_1440,"HennaID");
    local_1428._0_1_ = 8;
    FUN_10040090(local_1440,local_20);
    local_1428._0_1_ = 1;
    FString::~FString(local_1440);
    FString::FString(local_1440,"ClassID");
    local_1428._0_1_ = 9;
    FUN_10040090(local_1440,local_1c);
    local_1428._0_1_ = 1;
    FString::~FString(local_1440);
    FString::FString(local_1440,"NumberOfItem");
    local_1428._0_1_ = 10;
    FUN_10040090(local_1440,local_18);
    local_1428._0_1_ = 1;
    FString::~FString(local_1440);
    FString::FString(local_1440,"Fee");
    local_1428._0_1_ = 0xb;
    FUN_10040090(local_1440,local_14);
    local_1428._0_1_ = 1;
    FString::~FString(local_1440);
    puVar4 = local_144c;
    uVar3 = 0x672;
    FUN_10005c30(0x672,puVar4);
    FUN_100d1790(uVar3,puVar4);
    local_1428 = (uint)local_1428._1_3_ << 8;
    FUN_1003fff0();
  }
  local_1428 = 0xffffffff;
  ExceptionList = local_1430;
  __security_check_cookie(local_8 ^ (uint)local_1424);
  return;
}


// ==== 10158d91 Catch@10158d91

void Catch_10158d91(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x38) = *(undefined4 *)(unaff_EBP + -0x3c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x38,&DAT_102a47f0);
}


// ==== 10158da5 Catch@10158da5

void Catch_10158da5(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NConsoleWnd::AddHennaEquipInfo");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10158dd0 FUN_10158dd0

void FUN_10158dd0(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
                 undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9,
                 undefined4 param_10,undefined4 param_11,undefined4 param_12,undefined4 param_13,
                 undefined4 param_14,undefined4 param_15,undefined4 param_16,undefined4 param_17,
                 undefined4 param_18)

{
  FL2ItemDataBase *pFVar1;
  FL2HennaData *pFVar2;
  ushort *puVar3;
  undefined4 uVar4;
  undefined1 *puVar5;
  uint uStack_50;
  FString local_40 [12];
  FString local_34 [12];
  undefined1 local_28 [20];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_1020dc7b;
  local_10 = ExceptionList;
  uStack_50 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_50;
  ExceptionList = &local_10;
  local_8 = 0;
  pFVar1 = FL2GameData::GetItemData((FL2GameData *)GL2GameData_exref,param_2);
  pFVar2 = FL2GameData::GetHennaData((FL2GameData *)GL2GameData_exref,param_1);
  FUN_1003f970();
  local_8._0_1_ = 1;
  FString::FString(local_34,"Adena");
  local_8._0_1_ = 2;
  FUN_10040090(local_34,param_18);
  local_8._0_1_ = 1;
  FString::~FString(local_34);
  puVar3 = L2FName::operator*((L2FName *)(pFVar1 + 0x3c));
  FString::FString(local_40,puVar3);
  local_8._0_1_ = 3;
  FString::FString(local_34,"DyeIconName");
  local_8._0_1_ = 4;
  FUN_10040230(local_34,local_40);
  local_8._0_1_ = 3;
  FString::~FString(local_34);
  local_8._0_1_ = 1;
  FString::~FString(local_40);
  puVar3 = L2FName::operator*((L2FName *)(pFVar1 + 0x50));
  FString::FString(local_34,puVar3);
  local_8._0_1_ = 5;
  FString::FString(local_40,"DyeName");
  local_8._0_1_ = 6;
  FUN_10040230(local_40,local_34);
  local_8._0_1_ = 5;
  FString::~FString(local_40);
  local_8._0_1_ = 1;
  FString::~FString(local_34);
  FString::FString(local_40,"HennaID");
  local_8._0_1_ = 7;
  FUN_10040090(local_40,param_1);
  local_8._0_1_ = 1;
  FString::~FString(local_40);
  FString::FString(local_40,"ClassID");
  local_8._0_1_ = 8;
  FUN_10040090(local_40,param_2);
  local_8._0_1_ = 1;
  FString::~FString(local_40);
  FString::FString(local_40,"NumOfItem");
  local_8._0_1_ = 9;
  FUN_10040090(local_40,param_3);
  local_8._0_1_ = 1;
  FString::~FString(local_40);
  FString::FString(local_40,"Fee");
  local_8._0_1_ = 10;
  FUN_10040090(local_40,param_4);
  local_8._0_1_ = 1;
  FString::~FString(local_40);
  puVar3 = FString::operator*((FString *)(pFVar2 + 0x14));
  FString::FString(local_34,puVar3);
  local_8._0_1_ = 0xb;
  FString::FString(local_40,"TattooIconName");
  local_8._0_1_ = 0xc;
  FUN_10040230(local_40,local_34);
  local_8._0_1_ = 0xb;
  FString::~FString(local_40);
  local_8._0_1_ = 1;
  FString::~FString(local_34);
  puVar3 = FString::operator*((FString *)(pFVar2 + 8));
  FString::FString(local_34,puVar3);
  local_8._0_1_ = 0xd;
  FString::FString(local_40,"TattooName");
  local_8._0_1_ = 0xe;
  FUN_10040230(local_40,local_34);
  local_8._0_1_ = 0xd;
  FString::~FString(local_40);
  local_8._0_1_ = 1;
  FString::~FString(local_34);
  puVar3 = FString::operator*((FString *)(pFVar2 + 0x2c));
  FString::FString(local_34,puVar3);
  local_8._0_1_ = 0xf;
  FString::FString(local_40,"TattooAddName");
  local_8._0_1_ = 0x10;
  FUN_10040230(local_40,local_34);
  local_8._0_1_ = 0xf;
  FString::~FString(local_40);
  local_8._0_1_ = 1;
  FString::~FString(local_34);
  FString::FString(local_40,"INTnow");
  local_8._0_1_ = 0x11;
  FUN_10040090(local_40,param_6);
  local_8._0_1_ = 1;
  FString::~FString(local_40);
  FString::FString(local_40,"INTchange");
  local_8._0_1_ = 0x12;
  FUN_10040090(local_40,param_7);
  local_8._0_1_ = 1;
  FString::~FString(local_40);
  FString::FString(local_40,"STRnow");
  local_8._0_1_ = 0x13;
  FUN_10040090(local_40,param_8);
  local_8._0_1_ = 1;
  FString::~FString(local_40);
  FString::FString(local_40,"STRchange");
  local_8._0_1_ = 0x14;
  FUN_10040090(local_40,param_9);
  local_8._0_1_ = 1;
  FString::~FString(local_40);
  FString::FString(local_40,"CONnow");
  local_8._0_1_ = 0x15;
  FUN_10040090(local_40,param_10);
  local_8._0_1_ = 1;
  FString::~FString(local_40);
  FString::FString(local_40,"CONchange");
  local_8._0_1_ = 0x16;
  FUN_10040090(local_40,param_11);
  local_8._0_1_ = 1;
  FString::~FString(local_40);
  FString::FString(local_40,"MENnow");
  local_8._0_1_ = 0x17;
  FUN_10040090(local_40,param_12);
  local_8._0_1_ = 1;
  FString::~FString(local_40);
  FString::FString(local_40,"MENchange");
  local_8._0_1_ = 0x18;
  FUN_10040090(local_40,param_13);
  local_8._0_1_ = 1;
  FString::~FString(local_40);
  FString::FString(local_40,"DEXnow");
  local_8._0_1_ = 0x19;
  FUN_10040090(local_40,param_14);
  local_8._0_1_ = 1;
  FString::~FString(local_40);
  FString::FString(local_40,"DEXchange");
  local_8._0_1_ = 0x1a;
  FUN_10040090(local_40,param_15);
  local_8._0_1_ = 1;
  FString::~FString(local_40);
  FString::FString(local_40,"WITnow");
  local_8._0_1_ = 0x1b;
  FUN_10040090(local_40,param_16);
  local_8._0_1_ = 1;
  FString::~FString(local_40);
  FString::FString(local_40,"WITchange");
  local_8._0_1_ = 0x1c;
  FUN_10040090(local_40,param_17);
  local_8._0_1_ = 1;
  FString::~FString(local_40);
  puVar5 = local_28;
  uVar4 = 0x67c;
  FUN_10005c30(0x67c,puVar5);
  FUN_100d1790(uVar4,puVar5);
  local_8 = (uint)local_8._1_3_ << 8;
  FUN_1003fff0();
  ExceptionList = local_10;
  return;
}


// ==== 10159317 Catch@10159317

void Catch_10159317(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1015932b Catch@1015932b

void Catch_1015932b(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NConsoleWnd::ReceiveHennaItemInfo");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10159350 FUN_10159350

void FUN_10159350(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  uint uStack_38;
  undefined1 local_28 [20];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_1020dca8;
  local_10 = ExceptionList;
  uStack_38 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_38;
  ExceptionList = &local_10;
  local_8 = 0;
  iVar1 = FUN_101ad170();
  if (iVar1 != 0) {
    FUN_101b1d30();
  }
  FUN_1003f970();
  local_8._0_1_ = 1;
  FUN_100642b0(&stack0x00000004,local_28);
  puVar3 = local_28;
  uVar2 = 0x104;
  FUN_10005c30(0x104,puVar3);
  FUN_100d1790(uVar2,puVar3);
  local_8 = (uint)local_8._1_3_ << 8;
  FUN_1003fff0();
  ExceptionList = local_10;
  return;
}


// ==== 101593f5 Catch@101593f5

void Catch_101593f5(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10159409 Catch@10159409

void Catch_10159409(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NConsoleWnd::ReceiveHennaInfo");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10159430 FUN_10159430

void FUN_10159430(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  uint uStack_44;
  FString local_34 [12];
  undefined1 local_28 [20];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_1020dcea;
  local_10 = ExceptionList;
  uStack_44 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_44;
  ExceptionList = &local_10;
  local_8 = 0;
  iVar1 = FUN_101ad170();
  if (iVar1 != 0) {
    FUN_101b1e00(param_1,param_2);
  }
  FUN_1003f970();
  local_8._0_1_ = 1;
  FString::FString(local_34,(ushort *)&DAT_1025ae84);
  local_8._0_1_ = 2;
  FUN_10040090(local_34,param_1);
  local_8._0_1_ = 1;
  FString::~FString(local_34);
  FString::FString(local_34,(ushort *)L"bActive");
  local_8._0_1_ = 3;
  FUN_10040090(local_34,param_2);
  local_8._0_1_ = 1;
  FString::~FString(local_34);
  puVar3 = local_28;
  uVar2 = 0xa46;
  FUN_10005c30(0xa46,puVar3);
  FUN_100d1790(uVar2,puVar3);
  local_8 = (uint)local_8._1_3_ << 8;
  FUN_1003fff0();
  ExceptionList = local_10;
  return;
}


// ==== 1015952a Catch@1015952a

void Catch_1015952a(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1015953e Catch@1015953e

void Catch_1015953e(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NConsoleWnd::AddHennaInfo");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10159560 FUN_10159560

void FUN_10159560(undefined4 param_1)

{
  undefined4 uVar1;
  undefined1 *puVar2;
  uint uStack_44;
  FString local_34 [12];
  undefined1 local_28 [20];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_1020dd21;
  local_10 = ExceptionList;
  uStack_44 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_44;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_1003f970();
  local_8._0_1_ = 1;
  FString::FString(local_34,"Adena");
  local_8._0_1_ = 2;
  FUN_10040090(local_34,param_1);
  local_8._0_1_ = 1;
  FString::~FString(local_34);
  puVar2 = local_28;
  uVar1 = 0x686;
  FUN_10005c30(0x686,puVar2);
  FUN_100d1790(uVar1,puVar2);
  local_8 = (uint)local_8._1_3_ << 8;
  FUN_1003fff0();
  ExceptionList = local_10;
  return;
}


// ==== 10159609 Catch@10159609

void Catch_10159609(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1015961d Catch@1015961d

void Catch_1015961d(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NConsoleWnd::ReceiveHennaUnequipList");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10159640 FUN_10159640

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

void FUN_10159640(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  FL2HennaData *pFVar1;
  ushort *puVar2;
  undefined4 uVar3;
  undefined1 *puVar4;
  uint uStack_1470;
  FString local_1458 [12];
  undefined1 local_144c [12];
  FString local_1440 [12];
  undefined1 *local_1434;
  void *local_1430;
  undefined1 *puStack_142c;
  int local_1428;
  ushort local_1424 [256];
  ushort local_1224 [256];
  ushort local_1024 [2050];
  int local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  uint local_8;
  
  puStack_142c = &LAB_1020dda2;
  local_1430 = ExceptionList;
  uStack_1470 = DAT_103554c4 ^ (uint)local_1424;
  local_1434 = (undefined1 *)&uStack_1470;
  ExceptionList = &local_1430;
  local_1428 = 0;
  local_8 = uStack_1470;
  pFVar1 = FL2GameData::GetHennaData((FL2GameData *)GL2GameData_exref,param_1);
  if (pFVar1 != (FL2HennaData *)0x0) {
    FUN_1014b030();
    puVar2 = FString::operator*((FString *)(pFVar1 + 8));
    appStrcpy(local_1424,puVar2);
    puVar2 = FString::operator*((FString *)(pFVar1 + 0x2c));
    appStrcpy(local_1024,puVar2);
    puVar2 = FString::operator*((FString *)(pFVar1 + 0x14));
    appStrcpy(local_1224,puVar2);
    local_20 = param_1;
    local_1c = param_2;
    local_18 = param_3;
    local_14 = param_4;
    local_10 = param_5;
    FUN_1003f970();
    local_1428._0_1_ = 1;
    FString::FString(local_1440,local_1424);
    local_1428._0_1_ = 2;
    FString::FString(local_1458,"Name");
    local_1428._0_1_ = 3;
    FUN_10040230(local_1458,local_1440);
    local_1428._0_1_ = 2;
    FString::~FString(local_1458);
    local_1428._0_1_ = 1;
    FString::~FString(local_1440);
    FString::FString(local_1458,local_1024);
    local_1428._0_1_ = 4;
    FString::FString(local_1440,"Description");
    local_1428._0_1_ = 5;
    FUN_10040230(local_1440,local_1458);
    local_1428._0_1_ = 4;
    FString::~FString(local_1440);
    local_1428._0_1_ = 1;
    FString::~FString(local_1458);
    FString::FString(local_1458,local_1224);
    local_1428._0_1_ = 6;
    FString::FString(local_1440,"IconName");
    local_1428._0_1_ = 7;
    FUN_10040230(local_1440,local_1458);
    local_1428._0_1_ = 6;
    FString::~FString(local_1440);
    local_1428._0_1_ = 1;
    FString::~FString(local_1458);
    FString::FString(local_1440,"HennaID");
    local_1428._0_1_ = 8;
    FUN_10040090(local_1440,local_20);
    local_1428._0_1_ = 1;
    FString::~FString(local_1440);
    FString::FString(local_1440,"ClassID");
    local_1428._0_1_ = 9;
    FUN_10040090(local_1440,local_1c);
    local_1428._0_1_ = 1;
    FString::~FString(local_1440);
    FString::FString(local_1440,"NumberOfItem");
    local_1428._0_1_ = 10;
    FUN_10040090(local_1440,local_18);
    local_1428._0_1_ = 1;
    FString::~FString(local_1440);
    FString::FString(local_1440,"Fee");
    local_1428._0_1_ = 0xb;
    FUN_10040090(local_1440,local_14);
    local_1428._0_1_ = 1;
    FString::~FString(local_1440);
    puVar4 = local_144c;
    uVar3 = 0x690;
    FUN_10005c30(0x690,puVar4);
    FUN_100d1790(uVar3,puVar4);
    local_1428 = (uint)local_1428._1_3_ << 8;
    FUN_1003fff0();
  }
  local_1428 = 0xffffffff;
  ExceptionList = local_1430;
  __security_check_cookie(local_8 ^ (uint)local_1424);
  return;
}


// ==== 10159931 Catch@10159931

void Catch_10159931(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x38) = *(undefined4 *)(unaff_EBP + -0x3c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x38,&DAT_102a47f0);
}


// ==== 10159945 Catch@10159945

void Catch_10159945(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NConsoleWnd::AddHennaUnequipInfo");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10159970 FUN_10159970

void FUN_10159970(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined1 *puVar2;
  uint uStack_44;
  FString local_34 [12];
  undefined1 local_28 [20];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_1020ddea;
  local_10 = ExceptionList;
  uStack_44 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_44;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_1003f970();
  local_8._0_1_ = 1;
  FString::FString(local_34,(ushort *)&DAT_1025ae84);
  local_8._0_1_ = 2;
  FUN_10040090(local_34,param_1);
  local_8._0_1_ = 1;
  FString::~FString(local_34);
  FString::FString(local_34,(ushort *)L"bActive");
  local_8._0_1_ = 3;
  FUN_10040090(local_34,param_2);
  local_8._0_1_ = 1;
  FString::~FString(local_34);
  puVar2 = local_28;
  uVar1 = 0x963;
  FUN_10005c30(0x963,puVar2);
  FUN_100d1790(uVar1,puVar2);
  local_8 = (uint)local_8._1_3_ << 8;
  FUN_1003fff0();
  ExceptionList = local_10;
  return;
}


// ==== 10159a47 Catch@10159a47

void Catch_10159a47(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10159a5b Catch@10159a5b

void Catch_10159a5b(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NConsoleWnd::GMAddHennaInfo");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10159a80 FUN_10159a80

void FUN_10159a80(void)

{
  undefined4 uVar1;
  undefined1 *puVar2;
  uint uStack_38;
  undefined1 local_28 [20];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_1020de18;
  local_10 = ExceptionList;
  uStack_38 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_38;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_1003f970();
  local_8._0_1_ = 1;
  FUN_100642b0(&stack0x00000004,local_28);
  puVar2 = local_28;
  uVar1 = 0x964;
  FUN_10005c30(0x964,puVar2);
  FUN_100d1790(uVar1,puVar2);
  local_8 = (uint)local_8._1_3_ << 8;
  FUN_1003fff0();
  ExceptionList = local_10;
  return;
}


// ==== 10159b0a Catch@10159b0a

void Catch_10159b0a(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10159b1e Catch@10159b1e

void Catch_10159b1e(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NConsoleWnd::GMReceiveHennaInfo");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10159b40 FUN_10159b40

void FUN_10159b40(char param_1,char param_2)

{
  code *pcVar1;
  int *in_ECX;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 auStackY_838 [250];
  undefined4 uStackY_450;
  undefined4 uStackY_44c;
  undefined1 auStack_42c [12];
  undefined4 local_420 [255];
  uint uStack_24;
  void *local_1c;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 uStack_c;
  
  uStack_c = 0xffffffff;
  puStack_10 = &LAB_1020de4c;
  local_14 = ExceptionList;
  local_1c = (void *)(DAT_103554c4 ^ (uint)auStack_42c);
  ExceptionList = &local_14;
  puVar3 = (undefined4 *)&stack0x0000000c;
  puVar4 = local_420;
  for (iVar2 = 0xff; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  if (in_ECX[0x1438] == 0) {
LAB_10159bd6:
    puVar3 = local_420;
    puVar4 = auStackY_838;
    for (iVar2 = 0xff; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar4 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar4 = puVar4 + 1;
    }
    FUN_101aeba0();
    in_ECX[0x1436] = in_ECX[0x1436] + 1;
    if ((int)param_1 <= in_ECX[0x1436]) {
      pcVar1 = *(code **)(*in_ECX + 0x2e4);
      in_ECX[0x1438] = 1;
      (*pcVar1)();
      uStackY_44c = 0x10159c45;
      FString::FString((FString *)&stack0xfffffbcc,(ushort *)&DAT_1022f9f8);
      local_14 = (void *)0x0;
      if (DAT_1035786c == 0) {
        FUN_10005270();
      }
      uStackY_44c = 0x4d8;
      uStackY_450 = 0x10159c73;
      FUN_100d1790();
      local_14 = (void *)0xffffffff;
      FString::~FString((FString *)&stack0xfffffbcc);
      goto LAB_10159c9d;
    }
  }
  else {
    in_ECX[0x1436] = 0;
    FUN_101aed30();
    if ((param_1 != '\0') || (param_2 != '\0')) {
      in_ECX[0x1438] = 0;
      goto LAB_10159bd6;
    }
  }
  (**(code **)(*in_ECX + 0x2e4))();
LAB_10159c9d:
  ExceptionList = local_1c;
  __security_check_cookie(uStack_24 ^ (uint)&stack0xfffffbcc);
  return;
}


// ==== 10159cd0 FUN_10159cd0

void FUN_10159cd0(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
                 undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9,
                 undefined4 param_10,undefined4 param_11,undefined4 param_12,undefined4 param_13,
                 undefined4 param_14,undefined4 param_15,undefined4 param_16,undefined4 param_17,
                 undefined4 param_18)

{
  FL2ItemDataBase *pFVar1;
  FL2HennaData *pFVar2;
  ushort *puVar3;
  undefined4 uVar4;
  undefined1 *puVar5;
  uint uStack_50;
  FString local_40 [12];
  FString local_34 [12];
  undefined1 local_28 [20];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_1020df7b;
  local_10 = ExceptionList;
  uStack_50 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_50;
  ExceptionList = &local_10;
  local_8 = 0;
  pFVar1 = FL2GameData::GetItemData((FL2GameData *)GL2GameData_exref,param_2);
  pFVar2 = FL2GameData::GetHennaData((FL2GameData *)GL2GameData_exref,param_1);
  FUN_1003f970();
  local_8._0_1_ = 1;
  FString::FString(local_34,"Adena");
  local_8._0_1_ = 2;
  FUN_10040090(local_34,param_18);
  local_8._0_1_ = 1;
  FString::~FString(local_34);
  puVar3 = L2FName::operator*((L2FName *)(pFVar1 + 0x3c));
  FString::FString(local_40,puVar3);
  local_8._0_1_ = 3;
  FString::FString(local_34,"DyeIconName");
  local_8._0_1_ = 4;
  FUN_10040230(local_34,local_40);
  local_8._0_1_ = 3;
  FString::~FString(local_34);
  local_8._0_1_ = 1;
  FString::~FString(local_40);
  puVar3 = L2FName::operator*((L2FName *)(pFVar1 + 0x50));
  FString::FString(local_34,puVar3);
  local_8._0_1_ = 5;
  FString::FString(local_40,"DyeName");
  local_8._0_1_ = 6;
  FUN_10040230(local_40,local_34);
  local_8._0_1_ = 5;
  FString::~FString(local_40);
  local_8._0_1_ = 1;
  FString::~FString(local_34);
  FString::FString(local_40,"HennaID");
  local_8._0_1_ = 7;
  FUN_10040090(local_40,param_1);
  local_8._0_1_ = 1;
  FString::~FString(local_40);
  FString::FString(local_40,"ClassID");
  local_8._0_1_ = 8;
  FUN_10040090(local_40,param_2);
  local_8._0_1_ = 1;
  FString::~FString(local_40);
  FString::FString(local_40,"NumOfItem");
  local_8._0_1_ = 9;
  FUN_10040090(local_40,param_3);
  local_8._0_1_ = 1;
  FString::~FString(local_40);
  FString::FString(local_40,"Fee");
  local_8._0_1_ = 10;
  FUN_10040090(local_40,param_4);
  local_8._0_1_ = 1;
  FString::~FString(local_40);
  puVar3 = FString::operator*((FString *)(pFVar2 + 0x14));
  FString::FString(local_34,puVar3);
  local_8._0_1_ = 0xb;
  FString::FString(local_40,"TattooIconName");
  local_8._0_1_ = 0xc;
  FUN_10040230(local_40,local_34);
  local_8._0_1_ = 0xb;
  FString::~FString(local_40);
  local_8._0_1_ = 1;
  FString::~FString(local_34);
  puVar3 = FString::operator*((FString *)(pFVar2 + 8));
  FString::FString(local_34,puVar3);
  local_8._0_1_ = 0xd;
  FString::FString(local_40,"TattooName");
  local_8._0_1_ = 0xe;
  FUN_10040230(local_40,local_34);
  local_8._0_1_ = 0xd;
  FString::~FString(local_40);
  local_8._0_1_ = 1;
  FString::~FString(local_34);
  puVar3 = FString::operator*((FString *)(pFVar2 + 0x2c));
  FString::FString(local_34,puVar3);
  local_8._0_1_ = 0xf;
  FString::FString(local_40,"TattooAddName");
  local_8._0_1_ = 0x10;
  FUN_10040230(local_40,local_34);
  local_8._0_1_ = 0xf;
  FString::~FString(local_40);
  local_8._0_1_ = 1;
  FString::~FString(local_34);
  FString::FString(local_40,"INTnow");
  local_8._0_1_ = 0x11;
  FUN_10040090(local_40,param_6);
  local_8._0_1_ = 1;
  FString::~FString(local_40);
  FString::FString(local_40,"INTchange");
  local_8._0_1_ = 0x12;
  FUN_10040090(local_40,param_7);
  local_8._0_1_ = 1;
  FString::~FString(local_40);
  FString::FString(local_40,"STRnow");
  local_8._0_1_ = 0x13;
  FUN_10040090(local_40,param_8);
  local_8._0_1_ = 1;
  FString::~FString(local_40);
  FString::FString(local_40,"STRchange");
  local_8._0_1_ = 0x14;
  FUN_10040090(local_40,param_9);
  local_8._0_1_ = 1;
  FString::~FString(local_40);
  FString::FString(local_40,"CONnow");
  local_8._0_1_ = 0x15;
  FUN_10040090(local_40,param_10);
  local_8._0_1_ = 1;
  FString::~FString(local_40);
  FString::FString(local_40,"CONchange");
  local_8._0_1_ = 0x16;
  FUN_10040090(local_40,param_11);
  local_8._0_1_ = 1;
  FString::~FString(local_40);
  FString::FString(local_40,"MENnow");
  local_8._0_1_ = 0x17;
  FUN_10040090(local_40,param_12);
  local_8._0_1_ = 1;
  FString::~FString(local_40);
  FString::FString(local_40,"MENchange");
  local_8._0_1_ = 0x18;
  FUN_10040090(local_40,param_13);
  local_8._0_1_ = 1;
  FString::~FString(local_40);
  FString::FString(local_40,"DEXnow");
  local_8._0_1_ = 0x19;
  FUN_10040090(local_40,param_14);
  local_8._0_1_ = 1;
  FString::~FString(local_40);
  FString::FString(local_40,"DEXchange");
  local_8._0_1_ = 0x1a;
  FUN_10040090(local_40,param_15);
  local_8._0_1_ = 1;
  FString::~FString(local_40);
  FString::FString(local_40,"WITnow");
  local_8._0_1_ = 0x1b;
  FUN_10040090(local_40,param_16);
  local_8._0_1_ = 1;
  FString::~FString(local_40);
  FString::FString(local_40,"WITchange");
  local_8._0_1_ = 0x1c;
  FUN_10040090(local_40,param_17);
  local_8._0_1_ = 1;
  FString::~FString(local_40);
  puVar5 = local_28;
  uVar4 = 0x69a;
  FUN_10005c30(0x69a,puVar5);
  FUN_100d1790(uVar4,puVar5);
  local_8 = (uint)local_8._1_3_ << 8;
  FUN_1003fff0();
  ExceptionList = local_10;
  return;
}


// ==== 1015a217 Catch@1015a217

void Catch_1015a217(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1015a22b Catch@1015a22b

void Catch_1015a22b(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NConsoleWnd::ReceiveHennaUnequipItemInfo");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1015a250 FUN_1015a250

void FUN_1015a250(void)

{
  uint uVar1;
  FString local_18 [12];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1020dfa9;
  local_c = ExceptionList;
  uVar1 = DAT_103554c4 ^ (uint)local_18;
  ExceptionList = &local_c;
  FString::FString(local_18,(ushort *)&DAT_1022f9f8);
  local_4 = 0;
  if (DAT_1035786c == 0) {
    FUN_10005270(uVar1);
  }
  FUN_100d1790(0xa47,local_18);
  local_4 = 0xffffffff;
  FString::~FString(local_18);
  ExceptionList = local_c;
  return;
}


// ==== 1015a2d0 FUN_1015a2d0

void FUN_1015a2d0(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1020dfd0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  iVar1 = FUN_10141370(param_1);
  if ((((iVar1 != 0) &&
       (((iVar2 = *(int *)(iVar1 + 0x1e50), iVar2 == 0 || (iVar2 == 1)) || (iVar2 == 2)))) &&
      (iVar2 = FUN_10187a60(iVar1 + 0x1e5c), iVar2 != 0)) &&
     ((*(int *)(iVar2 + 4) == 0 || (*(int *)(iVar2 + 4) == 1)))) {
    FUN_10142ea0(*(undefined4 *)(iVar1 + 0x1e58));
  }
  ExceptionList = local_10;
  return;
}


// ==== 1015a378 Catch@1015a378

void Catch_1015a378(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1015a38c Catch@1015a38c

void Catch_1015a38c(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NConsoleWnd::Equip");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1015a3b0 FUN_1015a3b0

void FUN_1015a3b0(undefined4 param_1)

{
  int in_ECX;
  FString aFStack_54 [4];
  undefined4 uStack_50;
  FString aFStack_48 [4];
  undefined4 uStack_44;
  undefined4 uStack_40;
  int *piStack_3c;
  uint uStack_38;
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_1020e002;
  local_10 = ExceptionList;
  uStack_38 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_38;
  ExceptionList = &local_10;
  local_8 = 0;
  local_18 = 0;
  piStack_3c = &local_18;
  uStack_50 = 0x1015a3fc;
  FString::FString(aFStack_48,(ushort *)L"IsLockShortcutWnd");
  local_8._0_1_ = 1;
  FString::FString(aFStack_54,(ushort *)L"Game");
  local_8 = (uint)local_8._1_3_ << 8;
  FUN_10042370();
  if (local_18 == 0) {
    piStack_3c = (int *)param_1;
    uStack_40 = 0x1015a444;
    (**(code **)(**(int **)(*(int *)(in_ECX + 0x50) + 0x60) + 0x280))();
    uStack_40 = 3;
    uStack_44 = 0x1015a44d;
    FUN_1014ed50();
  }
  ExceptionList = local_10;
  return;
}


// ==== 1015a468 Catch@1015a468

void Catch_1015a468(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x24);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 1015a47c Catch@1015a47c

void Catch_1015a47c(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NConsoleWnd::RequestShortCutReg");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1015a4a0 FUN_1015a4a0

void FUN_1015a4a0(void)

{
  undefined4 uVar1;
  FString *pFVar2;
  uint uStack_38;
  FString local_28 [20];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_1020e029;
  local_10 = ExceptionList;
  uStack_38 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_38;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_100457c0();
  FString::FString(local_28,(ushort *)&DAT_1022f9f8);
  local_8._0_1_ = 1;
  pFVar2 = local_28;
  uVar1 = 0x28a;
  FUN_10005c30(0x28a,pFVar2);
  FUN_100d1790(uVar1,pFVar2);
  local_8 = (uint)local_8._1_3_ << 8;
  FString::~FString(local_28);
  ExceptionList = local_10;
  return;
}


// ==== 1015a52a Catch@1015a52a

void Catch_1015a52a(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1015a53e Catch@1015a53e

void Catch_1015a53e(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NConsoleWnd::ReceiveShortCutList");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1015a560 FUN_1015a560

void FUN_1015a560(void)

{
  undefined1 local_24 [12];
  FString local_18 [12];
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1020e061;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_1003f970(DAT_103554c4 ^ (uint)local_24);
  local_4 = 0;
  FString::FString(local_18,(ushort *)&DAT_10274940);
  local_4._0_1_ = 1;
  FUN_10040090(local_18,0);
  local_4 = (uint)local_4._1_3_ << 8;
  FString::~FString(local_18);
  if (DAT_1035786c == 0) {
    FUN_10005270();
  }
  FUN_100d1790(0x3b6,local_24);
  local_4 = 0xffffffff;
  FUN_1003fff0();
  ExceptionList = local_c;
  return;
}


// ==== 1015a610 FUN_1015a610

void FUN_1015a610(void)

{
  undefined1 local_24 [12];
  FString local_18 [12];
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1020e091;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_1003f970(DAT_103554c4 ^ (uint)local_24);
  local_4 = 0;
  FString::FString(local_18,(ushort *)&DAT_10274940);
  local_4._0_1_ = 1;
  FUN_10040090(local_18,0);
  local_4 = (uint)local_4._1_3_ << 8;
  FString::~FString(local_18);
  if (DAT_1035786c == 0) {
    FUN_10005270();
  }
  FUN_100d1790(0x3ca,local_24);
  local_4 = 0xffffffff;
  FUN_1003fff0();
  ExceptionList = local_c;
  return;
}


// ==== 1015a6c0 FUN_1015a6c0

void FUN_1015a6c0(void)

{
  undefined1 local_24 [12];
  FString local_18 [12];
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1020e0c1;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_1003f970(DAT_103554c4 ^ (uint)local_24);
  local_4 = 0;
  FString::FString(local_18,(ushort *)&DAT_10274940);
  local_4._0_1_ = 1;
  FUN_10040090(local_18,0);
  local_4 = (uint)local_4._1_3_ << 8;
  FString::~FString(local_18);
  if (DAT_1035786c == 0) {
    FUN_10005270();
  }
  FUN_100d1790(0x3c0,local_24);
  local_4 = 0xffffffff;
  FUN_1003fff0();
  ExceptionList = local_c;
  return;
}


// ==== 1015a770 FUN_1015a770

void FUN_1015a770(void)

{
  int *piVar1;
  uchar uVar2;
  int iVar3;
  int iVar4;
  int in_ECX;
  undefined4 uVar5;
  
  iVar3 = FUN_1014ddd0();
  if ((((iVar3 != 0) && (iVar4 = *(int *)(iVar3 + 0x204), iVar4 != 0)) &&
      (*(int *)(iVar4 + 0x14d8) != 0)) &&
     (iVar4 = (**(code **)(**(int **)(iVar4 + 0x14d8) + 0x35c))(), iVar4 != 0)) {
    iVar4 = (**(code **)(**(int **)(*(int *)(iVar3 + 0x204) + 0x14d8) + 0x35c))();
    iVar4 = FUN_10145910(*(undefined4 *)(iVar4 + 0x60));
    if (iVar4 == 0) {
      iVar4 = **(int **)(*(int *)(in_ECX + 0x50) + 0x60);
      iVar3 = (**(code **)(**(int **)(*(int *)(iVar3 + 0x204) + 0x14d8) + 0x35c))();
      iVar3 = (**(code **)(iVar4 + 0x9c))(*(undefined4 *)(iVar3 + 0x60));
      if (iVar3 == 0) {
        return;
      }
      uVar5 = *(undefined4 *)(iVar3 + 8);
      piVar1 = *(int **)(*(int *)(*(int *)(in_ECX + 0x50) + 0x54) + 0x38);
      iVar3 = **(int **)(*(int *)(in_ECX + 0x50) + 0x60);
      uVar2 = UInput::KeyDown(*(UInput **)(*piVar1 + 0x78),0x10);
      iVar4 = *(int *)(*(int *)(*piVar1 + 0x3c) + 0x3bc);
    }
    else {
      uVar5 = *(undefined4 *)(iVar4 + 0x18);
      piVar1 = *(int **)(*(int *)(*(int *)(in_ECX + 0x50) + 0x54) + 0x38);
      iVar3 = **(int **)(*(int *)(in_ECX + 0x50) + 0x60);
      uVar2 = UInput::KeyDown(*(UInput **)(*piVar1 + 0x78),0x10);
      iVar4 = *(int *)(*(int *)(*piVar1 + 0x3c) + 0x3bc);
    }
    (**(code **)(iVar3 + 0x100))
              (uVar5,*(undefined4 *)(iVar4 + 0x1bc),*(undefined4 *)(iVar4 + 0x1c0),
               *(undefined4 *)(iVar4 + 0x1c4),uVar2);
  }
  return;
}


// ==== 1015a8b0 FUN_1015a8b0

void FUN_1015a8b0(int param_1)

{
  int iVar1;
  
  if (param_1 == 4) {
    iVar1 = FUN_1014ddd0();
    if ((iVar1 != 0) && (*(int *)(iVar1 + 0x204) != 0)) {
      FUN_1014c7c0(200,*(undefined4 *)(*(int *)(iVar1 + 0x204) + 0x60));
      return;
    }
    FUN_1014c7c0(200,0xffffffff);
  }
  else {
    if (param_1 == 5) {
      FUN_1014c720(200,0xffffffff);
      return;
    }
    if (param_1 == 6) {
      FUN_1015a770();
      return;
    }
  }
  return;
}


// ==== 1015a920 FUN_1015a920

void FUN_1015a920(undefined4 param_1)

{
  undefined4 uVar1;
  undefined1 *puVar2;
  uint uStack_44;
  FString local_34 [12];
  undefined1 local_28 [20];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_1020e0f1;
  local_10 = ExceptionList;
  uStack_44 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_44;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_1003f970();
  local_8._0_1_ = 1;
  FString::FString(local_34,(ushort *)L"LevelDiff");
  local_8._0_1_ = 2;
  FUN_10040090(local_34,param_1);
  local_8._0_1_ = 1;
  FString::~FString(local_34);
  puVar2 = local_28;
  uVar1 = 300;
  FUN_10005c30(300,puVar2);
  FUN_100d1790(uVar1,puVar2);
  local_8 = (uint)local_8._1_3_ << 8;
  FUN_1003fff0();
  ExceptionList = local_10;
  return;
}


// ==== 1015a9c9 Catch@1015a9c9

void Catch_1015a9c9(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1015a9dd Catch@1015a9dd

void Catch_1015a9dd(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NConsoleWnd::ReceiveTargetLevelDiff");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1015aa00 FUN_1015aa00

void FUN_1015aa00(L2ParamStack *param_1)

{
  void *pvVar1;
  ushort *puVar2;
  void *pvVar3;
  undefined4 uVar4;
  undefined1 *puVar5;
  uint uStack_94;
  FString local_84 [12];
  FString local_78 [12];
  FString local_6c [12];
  FString local_60 [12];
  undefined1 local_54 [20];
  void *local_40;
  void *local_3c;
  void *local_38;
  void *local_34;
  void *local_30;
  void *local_2c;
  void *local_28;
  void *local_24;
  void *local_20;
  void *local_1c;
  void *local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_1020e1c3;
  local_10 = ExceptionList;
  uStack_94 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_94;
  ExceptionList = &local_10;
  local_8 = 0;
  pvVar1 = L2ParamStack::Top(param_1);
  local_18 = L2ParamStack::Top(param_1);
  puVar2 = L2ParamStack::Top(param_1);
  FString::FString(local_84,puVar2);
  local_8._0_1_ = 1;
  puVar2 = L2ParamStack::Top(param_1);
  FString::FString(local_78,puVar2);
  local_8._0_1_ = 2;
  local_1c = L2ParamStack::Top(param_1);
  local_20 = L2ParamStack::Top(param_1);
  local_24 = L2ParamStack::Top(param_1);
  local_28 = L2ParamStack::Top(param_1);
  local_2c = L2ParamStack::Top(param_1);
  local_30 = L2ParamStack::Top(param_1);
  local_34 = L2ParamStack::Top(param_1);
  local_38 = L2ParamStack::Top(param_1);
  local_3c = L2ParamStack::Top(param_1);
  puVar2 = L2ParamStack::Top(param_1);
  FString::FString(local_6c,puVar2);
  local_8._0_1_ = 3;
  local_40 = L2ParamStack::Top(param_1);
  pvVar3 = L2ParamStack::Top(param_1);
  FUN_1003f970();
  local_8._0_1_ = 4;
  FString::FString(local_60,(ushort *)L"ClanID");
  local_8._0_1_ = 5;
  FUN_10040090(local_60,pvVar1);
  local_8._0_1_ = 4;
  FString::~FString(local_60);
  FString::FString(local_60,(ushort *)L"ClanType");
  local_8._0_1_ = 6;
  FUN_10040090(local_60,local_18);
  local_8._0_1_ = 4;
  FString::~FString(local_60);
  FString::FString(local_60,(ushort *)L"ClanName");
  local_8._0_1_ = 7;
  FUN_10040230(local_60,local_84);
  local_8._0_1_ = 4;
  FString::~FString(local_60);
  FString::FString(local_60,(ushort *)L"ClanMasterName");
  local_8._0_1_ = 8;
  FUN_10040230(local_60,local_78);
  local_8._0_1_ = 4;
  FString::~FString(local_60);
  FString::FString(local_60,(ushort *)L"CrestID");
  local_8._0_1_ = 9;
  FUN_10040090(local_60,local_1c);
  local_8._0_1_ = 4;
  FString::~FString(local_60);
  FString::FString(local_60,(ushort *)L"SkillLevel");
  local_8._0_1_ = 10;
  FUN_10040090(local_60,local_20);
  local_8._0_1_ = 4;
  FString::~FString(local_60);
  FString::FString(local_60,(ushort *)L"CastleID");
  local_8._0_1_ = 0xb;
  FUN_10040090(local_60,local_24);
  local_8._0_1_ = 4;
  FString::~FString(local_60);
  FString::FString(local_60,(ushort *)L"AgitID");
  local_8._0_1_ = 0xc;
  FUN_10040090(local_60,local_28);
  local_8._0_1_ = 4;
  FString::~FString(local_60);
  FString::FString(local_60,(ushort *)L"ClanRank");
  local_8._0_1_ = 0xd;
  FUN_10040090(local_60,local_2c);
  local_8._0_1_ = 4;
  FString::~FString(local_60);
  FString::FString(local_60,(ushort *)L"ClanNameValue");
  local_8._0_1_ = 0xe;
  FUN_10040090(local_60,local_30);
  local_8._0_1_ = 4;
  FString::~FString(local_60);
  FString::FString(local_60,(ushort *)L"Status");
  local_8._0_1_ = 0xf;
  FUN_10040090(local_60,local_34);
  local_8._0_1_ = 4;
  FString::~FString(local_60);
  FString::FString(local_60,(ushort *)L"Guilty");
  local_8._0_1_ = 0x10;
  FUN_10040090(local_60,local_38);
  local_8._0_1_ = 4;
  FString::~FString(local_60);
  FString::FString(local_60,(ushort *)L"AllianceID");
  local_8._0_1_ = 0x11;
  FUN_10040090(local_60,local_3c);
  local_8._0_1_ = 4;
  FString::~FString(local_60);
  FString::FString(local_60,(ushort *)L"AllianceName");
  local_8._0_1_ = 0x12;
  FUN_10040230(local_60,local_6c);
  local_8._0_1_ = 4;
  FString::~FString(local_60);
  FString::FString(local_60,(ushort *)L"AllianceCrestID");
  local_8._0_1_ = 0x13;
  FUN_10040090(local_60,local_40);
  local_8._0_1_ = 4;
  FString::~FString(local_60);
  FString::FString(local_60,(ushort *)L"InWar");
  local_8._0_1_ = 0x14;
  FUN_10040090(local_60,pvVar3);
  local_8._0_1_ = 4;
  FString::~FString(local_60);
  puVar5 = local_54;
  uVar4 = 0x140;
  FUN_10005c30(0x140,puVar5);
  FUN_100d1790(uVar4,puVar5);
  local_8._0_1_ = 3;
  FUN_1003fff0();
  local_8._0_1_ = 2;
  FString::~FString(local_6c);
  local_8._0_1_ = 1;
  FString::~FString(local_78);
  local_8 = (uint)local_8._1_3_ << 8;
  FString::~FString(local_84);
  ExceptionList = local_10;
  return;
}


// ==== 1015ae18 Catch@1015ae18

void Catch_1015ae18(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x40) = *(undefined4 *)(unaff_EBP + -0x44);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x40,&DAT_102a47f0);
}


// ==== 1015ae2c Catch@1015ae2c

void Catch_1015ae2c(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NConsoleWnd::ReceivePledgeInfo");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1015ae50 FUN_1015ae50

void FUN_1015ae50(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined1 *puVar2;
  uint uStack_50;
  FString local_40 [12];
  FString local_34 [12];
  undefined1 local_28 [20];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_1020e27f;
  local_10 = ExceptionList;
  uStack_50 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_50;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_1003f970();
  local_8._0_1_ = 1;
  FString::FString(local_34,(ushort *)L"ClanID");
  local_8._0_1_ = 2;
  FUN_10040090(local_34,*param_1);
  local_8._0_1_ = 1;
  FString::~FString(local_34);
  FString::FString(local_34,(ushort *)L"CrestID");
  local_8._0_1_ = 3;
  FUN_10040090(local_34,param_1[0x20]);
  local_8._0_1_ = 1;
  FString::~FString(local_34);
  FString::FString(local_34,(ushort *)L"SkillLevel");
  local_8._0_1_ = 4;
  FUN_10040090(local_34,param_1[0x19]);
  local_8._0_1_ = 1;
  FString::~FString(local_34);
  FString::FString(local_34,(ushort *)L"CastleID");
  local_8._0_1_ = 5;
  FUN_10040090(local_34,param_1[0x34]);
  local_8._0_1_ = 1;
  FString::~FString(local_34);
  FString::FString(local_34,(ushort *)L"AgitID");
  local_8._0_1_ = 6;
  FUN_10040090(local_34,param_1[0x35]);
  local_8._0_1_ = 1;
  FString::~FString(local_34);
  FString::FString(local_34,(ushort *)L"ClanRank");
  local_8._0_1_ = 7;
  FUN_10040090(local_34,param_1[0x1c]);
  local_8._0_1_ = 1;
  FString::~FString(local_34);
  FString::FString(local_34,(ushort *)L"ClanNameValue");
  local_8._0_1_ = 8;
  FUN_10040090(local_34,param_1[0x1d]);
  local_8._0_1_ = 1;
  FString::~FString(local_34);
  FString::FString(local_34,(ushort *)L"Status");
  local_8._0_1_ = 9;
  FUN_10040090(local_34,param_1[0x1e]);
  local_8._0_1_ = 1;
  FString::~FString(local_34);
  FString::FString(local_34,(ushort *)L"Guilty");
  local_8._0_1_ = 10;
  FUN_10040090(local_34,param_1[0x1f]);
  local_8._0_1_ = 1;
  FString::~FString(local_34);
  FString::FString(local_34,(ushort *)L"AllianceID");
  local_8._0_1_ = 0xb;
  FUN_10040090(local_34,param_1[0x26]);
  local_8._0_1_ = 1;
  FString::~FString(local_34);
  FString::FString(local_40,(ushort *)(param_1 + 0x27));
  local_8._0_1_ = 0xc;
  FString::FString(local_34,(ushort *)L"AllianceName");
  local_8._0_1_ = 0xd;
  FUN_10040230(local_34,local_40);
  local_8._0_1_ = 0xc;
  FString::~FString(local_34);
  local_8._0_1_ = 1;
  FString::~FString(local_40);
  FString::FString(local_40,(ushort *)L"AllianceCrestID");
  local_8._0_1_ = 0xe;
  FUN_10040090(local_40,param_1[0x33]);
  local_8._0_1_ = 1;
  FString::~FString(local_40);
  FString::FString(local_40,(ushort *)L"InWar");
  local_8._0_1_ = 0xf;
  FUN_10040090(local_40,param_1[0x36]);
  local_8._0_1_ = 1;
  FString::~FString(local_40);
  FString::FString(local_40,(ushort *)L"LargeCrestID");
  local_8._0_1_ = 0x10;
  FUN_10040090(local_40,param_1[0x37]);
  local_8._0_1_ = 1;
  FString::~FString(local_40);
  puVar2 = local_28;
  uVar1 = 0x14a;
  FUN_10005c30(0x14a,puVar2);
  FUN_100d1790(uVar1,puVar2);
  local_8 = (uint)local_8._1_3_ << 8;
  FUN_1003fff0();
  ExceptionList = local_10;
  return;
}


// ==== 1015b187 Catch@1015b187

void Catch_1015b187(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1015b19b Catch@1015b19b

void Catch_1015b19b(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NConsoleWnd::ReceivePledgeInfoUpdate");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1015b1c0 FUN_1015b1c0

void FUN_1015b1c0(L2ParamStack *param_1)

{
  void *pvVar1;
  undefined4 uVar2;
  int iVar3;
  undefined1 *puVar4;
  uint uStack_5c;
  FString local_4c [12];
  FString local_40 [12];
  undefined1 local_34 [20];
  int local_20;
  void *local_1c;
  void *local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  puStack_c = &LAB_1020e2c3;
  local_10 = ExceptionList;
  uStack_5c = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_5c;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_1003f970();
  local_8._0_1_ = 1;
  pvVar1 = L2ParamStack::Top(param_1);
  FString::FString(local_40,(ushort *)L"Count");
  local_8._0_1_ = 2;
  FUN_10040090(local_40,pvVar1);
  local_8 = CONCAT31(local_8._1_3_,1);
  FString::~FString(local_40);
  for (iVar3 = 0; local_20 = iVar3, iVar3 < (int)pvVar1; iVar3 = iVar3 + 1) {
    local_18 = L2ParamStack::Top(param_1);
    local_1c = L2ParamStack::Top(param_1);
    uVar2 = FString::Printf((ushort *)local_40,L"SkillID%d",iVar3);
    local_8._0_1_ = 3;
    FUN_10040090(uVar2,local_18);
    local_8._0_1_ = 1;
    FString::~FString(local_40);
    uVar2 = FString::Printf((ushort *)local_4c,L"SkillLevel%d",iVar3);
    local_8._0_1_ = 4;
    FUN_10040090(uVar2,local_1c);
    local_8 = CONCAT31(local_8._1_3_,1);
    FString::~FString(local_4c);
  }
  puVar4 = local_34;
  uVar2 = 0x1ea;
  FUN_10005c30(0x1ea,puVar4);
  FUN_100d1790(uVar2,puVar4);
  local_8 = local_8 & 0xffffff00;
  FUN_1003fff0();
  ExceptionList = local_10;
  return;
}


// ==== 1015b2f7 Catch@1015b2f7

void Catch_1015b2f7(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x20) = *(undefined4 *)(unaff_EBP + -0x24);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x20,&DAT_102a47f0);
}


// ==== 1015b30b Catch@1015b30b

void Catch_1015b30b(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NConsoleWnd::ReceivePledgeSkillList");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1015b330 FUN_1015b330

void FUN_1015b330(L2ParamStack *param_1)

{
  void *pvVar1;
  void *pvVar2;
  undefined4 uVar3;
  undefined1 *puVar4;
  uint uStack_44;
  FString local_34 [12];
  undefined1 local_28 [20];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_1020e2fa;
  local_10 = ExceptionList;
  uStack_44 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_44;
  ExceptionList = &local_10;
  local_8 = 0;
  pvVar1 = L2ParamStack::Top(param_1);
  pvVar2 = L2ParamStack::Top(param_1);
  FUN_1003f970();
  local_8._0_1_ = 1;
  FString::FString(local_34,(ushort *)L"SkillID");
  local_8._0_1_ = 2;
  FUN_10040090(local_34,pvVar1);
  local_8._0_1_ = 1;
  FString::~FString(local_34);
  FString::FString(local_34,(ushort *)L"SkillLevel");
  local_8._0_1_ = 3;
  FUN_10040090(local_34,pvVar2);
  local_8._0_1_ = 1;
  FString::~FString(local_34);
  puVar4 = local_28;
  uVar3 = 500;
  FUN_10005c30(500,puVar4);
  FUN_100d1790(uVar3,puVar4);
  local_8 = (uint)local_8._1_3_ << 8;
  FUN_1003fff0();
  ExceptionList = local_10;
  return;
}


// ==== 1015b417 Catch@1015b417

void Catch_1015b417(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1015b42b Catch@1015b42b

void Catch_1015b42b(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NConsoleWnd::ReceivePledgeSkillAdd");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1015b450 FUN_1015b450

void FUN_1015b450(void)

{
  undefined4 uVar1;
  FString *pFVar2;
  uint uStack_38;
  FString local_28 [20];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_1020e329;
  local_10 = ExceptionList;
  uStack_38 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_38;
  ExceptionList = &local_10;
  local_8 = 0;
  FString::FString(local_28,(ushort *)&DAT_1022f9f8);
  local_8._0_1_ = 1;
  pFVar2 = local_28;
  uVar1 = 0x186;
  FUN_10005c30(0x186,pFVar2);
  FUN_100d1790(uVar1,pFVar2);
  local_8 = (uint)local_8._1_3_ << 8;
  FString::~FString(local_28);
  ExceptionList = local_10;
  return;
}


// ==== 1015b4d1 Catch@1015b4d1

void Catch_1015b4d1(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1015b4e5 Catch@1015b4e5

void Catch_1015b4e5(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NConsoleWnd::ReceiveSetAcademyMaster");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1015b510 FUN_1015b510

void FUN_1015b510(L2ParamStack *param_1)

{
  void *pvVar1;
  undefined4 uVar2;
  int iVar3;
  undefined1 *puVar4;
  uint uStack_5c;
  FString local_4c [12];
  FString local_40 [12];
  undefined1 local_34 [20];
  int local_20;
  void *local_1c;
  void *local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  puStack_c = &LAB_1020e373;
  local_10 = ExceptionList;
  uStack_5c = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_5c;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_1003f970();
  local_8._0_1_ = 1;
  pvVar1 = L2ParamStack::Top(param_1);
  FString::FString(local_40,(ushort *)L"Count");
  local_8._0_1_ = 2;
  FUN_10040090(local_40,pvVar1);
  local_8 = CONCAT31(local_8._1_3_,1);
  FString::~FString(local_40);
  for (iVar3 = 0; local_20 = iVar3, iVar3 < (int)pvVar1; iVar3 = iVar3 + 1) {
    local_18 = L2ParamStack::Top(param_1);
    local_1c = L2ParamStack::Top(param_1);
    uVar2 = FString::Printf((ushort *)local_40,L"GradeID%d",iVar3);
    local_8._0_1_ = 3;
    FUN_10040090(uVar2,local_18);
    local_8._0_1_ = 1;
    FString::~FString(local_40);
    uVar2 = FString::Printf((ushort *)local_4c,L"GradeMemberCount%d",iVar3);
    local_8._0_1_ = 4;
    FUN_10040090(uVar2,local_1c);
    local_8 = CONCAT31(local_8._1_3_,1);
    FString::~FString(local_4c);
  }
  puVar4 = local_34;
  uVar2 = 0x15e;
  FUN_10005c30(0x15e,puVar4);
  FUN_100d1790(uVar2,puVar4);
  local_8 = local_8 & 0xffffff00;
  FUN_1003fff0();
  ExceptionList = local_10;
  return;
}


// ==== 1015b647 Catch@1015b647

void Catch_1015b647(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x20) = *(undefined4 *)(unaff_EBP + -0x24);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x20,&DAT_102a47f0);
}


// ==== 1015b65b Catch@1015b65b

void Catch_1015b65b(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NConsoleWnd::ReceivePledgePowerGradeList");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1015b680 FUN_1015b680

void FUN_1015b680(void)

{
  undefined4 uVar1;
  FString *pFVar2;
  uint uStack_38;
  FString local_28 [20];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_1020e399;
  local_10 = ExceptionList;
  uStack_38 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_38;
  ExceptionList = &local_10;
  local_8 = 0;
  FString::FString(local_28,(ushort *)&DAT_1022f9f8);
  local_8._0_1_ = 1;
  pFVar2 = local_28;
  uVar1 = 0x1a4;
  FUN_10005c30(0x1a4,pFVar2);
  FUN_100d1790(uVar1,pFVar2);
  local_8 = (uint)local_8._1_3_ << 8;
  FString::~FString(local_28);
  ExceptionList = local_10;
  return;
}


// ==== 1015b6ff Catch@1015b6ff

void Catch_1015b6ff(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1015b713 Catch@1015b713

void Catch_1015b713(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NConsoleWnd::ReceivePledgeMemberList");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1015b730 FUN_1015b730

void FUN_1015b730(L2ParamStack *param_1)

{
  ushort *puVar1;
  void *pvVar2;
  void *pvVar3;
  undefined4 uVar4;
  undefined1 *puVar5;
  uint uStack_60;
  FString local_50 [12];
  FString local_44 [12];
  undefined1 local_38 [20];
  void *local_24;
  void *local_20;
  void *local_1c;
  void *local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_1020e410;
  local_10 = ExceptionList;
  uStack_60 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_60;
  ExceptionList = &local_10;
  local_8 = 0;
  puVar1 = L2ParamStack::Top(param_1);
  FString::FString(local_50,puVar1);
  local_8._0_1_ = 1;
  pvVar2 = L2ParamStack::Top(param_1);
  local_18 = L2ParamStack::Top(param_1);
  local_1c = L2ParamStack::Top(param_1);
  local_20 = L2ParamStack::Top(param_1);
  local_24 = L2ParamStack::Top(param_1);
  pvVar3 = L2ParamStack::Top(param_1);
  FUN_1003f970();
  local_8._0_1_ = 2;
  FString::FString(local_44,(ushort *)L"Name");
  local_8._0_1_ = 3;
  FUN_10040230(local_44,local_50);
  local_8._0_1_ = 2;
  FString::~FString(local_44);
  FString::FString(local_44,(ushort *)L"Level");
  local_8._0_1_ = 4;
  FUN_10040090(local_44,pvVar2);
  local_8._0_1_ = 2;
  FString::~FString(local_44);
  FString::FString(local_44,(ushort *)L"Class");
  local_8._0_1_ = 5;
  FUN_10040090(local_44,local_18);
  local_8._0_1_ = 2;
  FString::~FString(local_44);
  FString::FString(local_44,(ushort *)L"Gender");
  local_8._0_1_ = 6;
  FUN_10040090(local_44,local_1c);
  local_8._0_1_ = 2;
  FString::~FString(local_44);
  FString::FString(local_44,(ushort *)L"Race");
  local_8._0_1_ = 7;
  FUN_10040090(local_44,local_20);
  local_8._0_1_ = 2;
  FString::~FString(local_44);
  FString::FString(local_44,(ushort *)&DAT_1025ae84);
  local_8._0_1_ = 8;
  FUN_10040090(local_44,local_24);
  local_8._0_1_ = 2;
  FString::~FString(local_44);
  FString::FString(local_44,(ushort *)L"ClanType");
  local_8._0_1_ = 9;
  FUN_10040090(local_44,pvVar3);
  local_8._0_1_ = 2;
  FString::~FString(local_44);
  puVar5 = local_38;
  uVar4 = 400;
  FUN_10005c30(400,puVar5);
  FUN_100d1790(uVar4,puVar5);
  local_8._0_1_ = 1;
  FUN_1003fff0();
  local_8 = (uint)local_8._1_3_ << 8;
  FString::~FString(local_50);
  ExceptionList = local_10;
  return;
}


// ==== 1015b93b Catch@1015b93b

void Catch_1015b93b(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x24) = *(undefined4 *)(unaff_EBP + -0x28);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x24,&DAT_102a47f0);
}


// ==== 1015b94f Catch@1015b94f

void Catch_1015b94f(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NConsoleWnd::AddPledgeMember");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1015b970 FUN_1015b970

void FUN_1015b970(L2ParamStack *param_1)

{
  void *pvVar1;
  ushort *puVar2;
  void *pvVar3;
  undefined4 uVar4;
  undefined1 *puVar5;
  uint uStack_64;
  FString local_54 [12];
  FString local_48 [12];
  undefined1 local_3c [20];
  void *local_28;
  void *local_24;
  void *local_20;
  void *local_1c;
  void *local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_1020e489;
  local_10 = ExceptionList;
  uStack_64 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_64;
  ExceptionList = &local_10;
  local_8 = 0;
  pvVar1 = L2ParamStack::Top(param_1);
  puVar2 = L2ParamStack::Top(param_1);
  FString::FString(local_54,puVar2);
  local_8._0_1_ = 1;
  local_18 = L2ParamStack::Top(param_1);
  local_1c = L2ParamStack::Top(param_1);
  local_20 = L2ParamStack::Top(param_1);
  local_24 = L2ParamStack::Top(param_1);
  local_28 = L2ParamStack::Top(param_1);
  pvVar3 = L2ParamStack::Top(param_1);
  FUN_1003f970();
  local_8._0_1_ = 2;
  FString::FString(local_48,(ushort *)L"ClanType");
  local_8._0_1_ = 3;
  FUN_10040090(local_48,pvVar1);
  local_8._0_1_ = 2;
  FString::~FString(local_48);
  FString::FString(local_48,(ushort *)L"Name");
  local_8._0_1_ = 4;
  FUN_10040230(local_48,local_54);
  local_8._0_1_ = 2;
  FString::~FString(local_48);
  FString::FString(local_48,(ushort *)L"Level");
  local_8._0_1_ = 5;
  FUN_10040090(local_48,local_18);
  local_8._0_1_ = 2;
  FString::~FString(local_48);
  FString::FString(local_48,(ushort *)L"Class");
  local_8._0_1_ = 6;
  FUN_10040090(local_48,local_1c);
  local_8._0_1_ = 2;
  FString::~FString(local_48);
  FString::FString(local_48,(ushort *)L"Gender");
  local_8._0_1_ = 7;
  FUN_10040090(local_48,local_20);
  local_8._0_1_ = 2;
  FString::~FString(local_48);
  FString::FString(local_48,(ushort *)L"Race");
  local_8._0_1_ = 8;
  FUN_10040090(local_48,local_24);
  local_8._0_1_ = 2;
  FString::~FString(local_48);
  FString::FString(local_48,(ushort *)&DAT_1025ae84);
  local_8._0_1_ = 9;
  FUN_10040090(local_48,local_28);
  local_8._0_1_ = 2;
  FString::~FString(local_48);
  FString::FString(local_48,(ushort *)L"HaveMaster");
  local_8._0_1_ = 10;
  FUN_10040090(local_48,pvVar3);
  local_8._0_1_ = 2;
  FString::~FString(local_48);
  puVar5 = local_3c;
  uVar4 = 0x19a;
  FUN_10005c30(0x19a,puVar5);
  FUN_100d1790(uVar4,puVar5);
  local_8._0_1_ = 1;
  FUN_1003fff0();
  local_8 = (uint)local_8._1_3_ << 8;
  FString::~FString(local_54);
  ExceptionList = local_10;
  return;
}


// ==== 1015bbb0 Catch@1015bbb0

void Catch_1015bbb0(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x28) = *(undefined4 *)(unaff_EBP + -0x2c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x28,&DAT_102a47f0);
}


// ==== 1015bbc4 Catch@1015bbc4

void Catch_1015bbc4(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NConsoleWnd::AddPledgeMemberMultiple");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1015bbf0 FUN_1015bbf0

void FUN_1015bbf0(L2ParamStack *param_1)

{
  ushort *puVar1;
  void *pvVar2;
  void *pvVar3;
  undefined4 uVar4;
  undefined1 *puVar5;
  uint uStack_64;
  FString local_54 [12];
  FString local_48 [12];
  undefined1 local_3c [20];
  void *local_28;
  void *local_24;
  void *local_20;
  void *local_1c;
  void *local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_1020e509;
  local_10 = ExceptionList;
  uStack_64 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_64;
  ExceptionList = &local_10;
  local_8 = 0;
  puVar1 = L2ParamStack::Top(param_1);
  FString::FString(local_54,puVar1);
  local_8._0_1_ = 1;
  pvVar2 = L2ParamStack::Top(param_1);
  local_18 = L2ParamStack::Top(param_1);
  local_1c = L2ParamStack::Top(param_1);
  local_20 = L2ParamStack::Top(param_1);
  local_24 = L2ParamStack::Top(param_1);
  local_28 = L2ParamStack::Top(param_1);
  pvVar3 = L2ParamStack::Top(param_1);
  FUN_1003f970();
  local_8._0_1_ = 2;
  FString::FString(local_48,(ushort *)L"Name");
  local_8._0_1_ = 3;
  FUN_10040230(local_48,local_54);
  local_8._0_1_ = 2;
  FString::~FString(local_48);
  FString::FString(local_48,(ushort *)L"Level");
  local_8._0_1_ = 4;
  FUN_10040090(local_48,pvVar2);
  local_8._0_1_ = 2;
  FString::~FString(local_48);
  FString::FString(local_48,(ushort *)L"Class");
  local_8._0_1_ = 5;
  FUN_10040090(local_48,local_18);
  local_8._0_1_ = 2;
  FString::~FString(local_48);
  FString::FString(local_48,(ushort *)L"Gender");
  local_8._0_1_ = 6;
  FUN_10040090(local_48,local_1c);
  local_8._0_1_ = 2;
  FString::~FString(local_48);
  FString::FString(local_48,(ushort *)L"Race");
  local_8._0_1_ = 7;
  FUN_10040090(local_48,local_20);
  local_8._0_1_ = 2;
  FString::~FString(local_48);
  FString::FString(local_48,(ushort *)&DAT_1025ae84);
  local_8._0_1_ = 8;
  FUN_10040090(local_48,local_24);
  local_8._0_1_ = 2;
  FString::~FString(local_48);
  FString::FString(local_48,(ushort *)L"PledgeType");
  local_8._0_1_ = 9;
  FUN_10040090(local_48,local_28);
  local_8._0_1_ = 2;
  FString::~FString(local_48);
  FString::FString(local_48,(ushort *)L"HaveMaster");
  local_8._0_1_ = 10;
  FUN_10040090(local_48,pvVar3);
  local_8._0_1_ = 2;
  FString::~FString(local_48);
  puVar5 = local_3c;
  uVar4 = 0x1b8;
  FUN_10005c30(0x1b8,puVar5);
  FUN_100d1790(uVar4,puVar5);
  local_8._0_1_ = 1;
  FUN_1003fff0();
  local_8 = (uint)local_8._1_3_ << 8;
  FString::~FString(local_54);
  ExceptionList = local_10;
  return;
}


// ==== 1015be30 Catch@1015be30

void Catch_1015be30(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x28) = *(undefined4 *)(unaff_EBP + -0x2c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x28,&DAT_102a47f0);
}


// ==== 1015be44 Catch@1015be44

void Catch_1015be44(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NConsoleWnd::UpdatePledgeMember");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1015be70 FUN_1015be70

void FUN_1015be70(ushort *param_1)

{
  undefined4 uVar1;
  undefined1 *puVar2;
  uint uStack_50;
  FString local_40 [12];
  FString local_34 [12];
  undefined1 local_28 [20];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_1020e54a;
  local_10 = ExceptionList;
  uStack_50 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_50;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_1003f970();
  local_8._0_1_ = 1;
  FString::FString(local_40,param_1);
  local_8._0_1_ = 2;
  FString::FString(local_34,(ushort *)L"Name");
  local_8._0_1_ = 3;
  FUN_10040230(local_34,local_40);
  local_8._0_1_ = 2;
  FString::~FString(local_34);
  local_8._0_1_ = 1;
  FString::~FString(local_40);
  puVar2 = local_28;
  uVar1 = 0x1c2;
  FUN_10005c30(0x1c2,puVar2);
  FUN_100d1790(uVar1,puVar2);
  local_8 = (uint)local_8._1_3_ << 8;
  FUN_1003fff0();
  ExceptionList = local_10;
  return;
}


// ==== 1015bf37 Catch@1015bf37

void Catch_1015bf37(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1015bf4b Catch@1015bf4b

void Catch_1015bf4b(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NConsoleWnd::DeletePledgeMember");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1015bf70 FUN_1015bf70

void FUN_1015bf70(void)

{
  undefined4 uVar1;
  FString *pFVar2;
  uint uStack_38;
  FString local_28 [20];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_1020e579;
  local_10 = ExceptionList;
  uStack_38 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_38;
  ExceptionList = &local_10;
  local_8 = 0;
  FString::FString(local_28,(ushort *)&DAT_1022f9f8);
  local_8._0_1_ = 1;
  pFVar2 = local_28;
  uVar1 = 0x1a4;
  FUN_10005c30(0x1a4,pFVar2);
  FUN_100d1790(uVar1,pFVar2);
  local_8 = (uint)local_8._1_3_ << 8;
  FString::~FString(local_28);
  ExceptionList = local_10;
  return;
}


// ==== 1015bfef Catch@1015bfef

void Catch_1015bfef(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1015c003 Catch@1015c003

void Catch_1015c003(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NConsoleWnd::DeleteAllPledgeMember");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1015c020 FUN_1015c020

void FUN_1015c020(L2ParamStack *param_1)

{
  void *pvVar1;
  User *this;
  undefined4 uVar2;
  undefined1 *puVar3;
  uint uStack_44;
  FString local_34 [12];
  undefined1 local_28 [20];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_1020e5f0;
  local_10 = ExceptionList;
  uStack_44 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_44;
  ExceptionList = &local_10;
  local_8 = 0;
  pvVar1 = L2ParamStack::Top(param_1);
  this = (User *)FUN_1014dd00();
  if (this != (User *)0x0) {
    User::SetPledgePower(this,(uint)pvVar1);
    FUN_1003f970();
    local_8._0_1_ = 1;
    FString::FString(local_34,(ushort *)L"ClanMaster");
    local_8._0_1_ = 2;
    FUN_10040090(local_34,*(undefined4 *)(this + 0x298));
    local_8._0_1_ = 1;
    FString::~FString(local_34);
    FString::FString(local_34,(ushort *)L"Join");
    local_8._0_1_ = 3;
    FUN_10040090(local_34,this[0x2d8]);
    local_8._0_1_ = 1;
    FString::~FString(local_34);
    FString::FString(local_34,(ushort *)L"NickName");
    local_8._0_1_ = 4;
    FUN_10040090(local_34,this[0x2d9]);
    local_8._0_1_ = 1;
    FString::~FString(local_34);
    FString::FString(local_34,(ushort *)L"ClanCrest");
    local_8._0_1_ = 5;
    FUN_10040090(local_34,this[0x2da]);
    local_8._0_1_ = 1;
    FString::~FString(local_34);
    FString::FString(local_34,(ushort *)&DAT_1028437c);
    local_8._0_1_ = 6;
    FUN_10040090(local_34,this[0x2db]);
    local_8._0_1_ = 1;
    FString::~FString(local_34);
    FString::FString(local_34,(ushort *)L"Grade");
    local_8._0_1_ = 7;
    FUN_10040090(local_34,this[0x2dc]);
    local_8._0_1_ = 1;
    FString::~FString(local_34);
    FString::FString(local_34,(ushort *)L"ManageMaster");
    local_8._0_1_ = 8;
    FUN_10040090(local_34,this[0x2dd]);
    local_8._0_1_ = 1;
    FString::~FString(local_34);
    FString::FString(local_34,(ushort *)L"OustMember");
    local_8._0_1_ = 9;
    FUN_10040090(local_34,this[0x2de]);
    local_8._0_1_ = 1;
    FString::~FString(local_34);
    puVar3 = local_28;
    uVar2 = 0x154;
    FUN_10005c30(0x154,puVar3);
    FUN_100d1790(uVar2,puVar3);
    local_8 = (uint)local_8._1_3_ << 8;
    FUN_1003fff0();
  }
  ExceptionList = local_10;
  return;
}


// ==== 1015c251 Catch@1015c251

void Catch_1015c251(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1015c265 Catch@1015c265

void Catch_1015c265(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NConsoleWnd::ReceivePledgeMyAuth");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1015c290 FUN_1015c290

void FUN_1015c290(L2ParamStack *param_1)

{
  int iVar1;
  void *pvVar2;
  ushort *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  code *pcVar6;
  undefined1 *puVar7;
  uint uStack_54;
  FString local_44 [12];
  FString local_38 [12];
  undefined1 local_2c [20];
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_1020e63c;
  local_10 = ExceptionList;
  uStack_54 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_54;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_1003f970();
  pcVar6 = Top_exref;
  local_8._0_1_ = 1;
  pvVar2 = L2ParamStack::Top(param_1);
  FString::FString(local_38,(ushort *)L"Grade");
  local_8._0_1_ = 2;
  FUN_10040090(local_38,pvVar2);
  local_8._0_1_ = 1;
  FString::~FString(local_38);
  puVar3 = L2ParamStack::Top(param_1);
  FString::FString(local_44,puVar3);
  local_8._0_1_ = 3;
  FString::FString(local_38,(ushort *)L"Name");
  local_8._0_1_ = 4;
  FUN_10040230(local_38,local_44);
  local_8 = CONCAT31(local_8._1_3_,3);
  FString::~FString(local_38);
  local_18 = 0;
  while (iVar1 = local_18, local_18 < 0x20) {
    uVar4 = (*pcVar6)();
    uVar5 = FString::Printf((ushort *)local_38,L"PowerValue%d",iVar1);
    local_8._0_1_ = 5;
    FUN_10040090(uVar5,uVar4);
    local_8 = CONCAT31(local_8._1_3_,3);
    FString::~FString(local_38);
    pcVar6 = Top_exref;
    local_18 = iVar1 + 1;
  }
  puVar7 = local_2c;
  uVar4 = 0x17c;
  FUN_10005c30(0x17c,puVar7);
  FUN_100d1790(uVar4,puVar7);
  local_8._0_1_ = 1;
  FString::~FString(local_44);
  local_8 = (uint)local_8._1_3_ << 8;
  FUN_1003fff0();
  ExceptionList = local_10;
  return;
}


// ==== 1015c3e0 Catch@1015c3e0

void Catch_1015c3e0(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 1015c3f4 Catch@1015c3f4

void Catch_1015c3f4(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NConsoleWnd::ReceivePledgePower");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1015c420 FUN_1015c420

void FUN_1015c420(L2ParamStack *param_1)

{
  void *pvVar1;
  ushort *puVar2;
  undefined4 uVar3;
  undefined1 *puVar4;
  uint uStack_78;
  FString local_68 [12];
  FString local_5c [12];
  FString local_50 [12];
  FString local_44 [12];
  FString local_38 [12];
  undefined1 local_2c [20];
  void *local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_1020e6c2;
  local_10 = ExceptionList;
  uStack_78 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_78;
  ExceptionList = &local_10;
  local_8 = 0;
  FString::FString(local_5c);
  local_8._0_1_ = 1;
  FString::FString(local_50);
  local_8._0_1_ = 2;
  FString::FString(local_44);
  local_8._0_1_ = 3;
  FString::FString(local_38);
  local_8._0_1_ = 4;
  pvVar1 = L2ParamStack::Top(param_1);
  puVar2 = L2ParamStack::Top(param_1);
  FString::operator=(local_5c,puVar2);
  puVar2 = L2ParamStack::Top(param_1);
  FString::operator=(local_50,puVar2);
  local_18 = L2ParamStack::Top(param_1);
  puVar2 = L2ParamStack::Top(param_1);
  FString::operator=(local_44,puVar2);
  puVar2 = L2ParamStack::Top(param_1);
  FString::operator=(local_38,puVar2);
  FUN_1003f970();
  local_8._0_1_ = 5;
  FString::FString(local_68,(ushort *)L"ClanType");
  local_8._0_1_ = 6;
  FUN_10040090(local_68,pvVar1);
  local_8._0_1_ = 5;
  FString::~FString(local_68);
  FString::FString(local_68,(ushort *)L"Name");
  local_8._0_1_ = 7;
  FUN_10040230(local_68,local_5c);
  local_8._0_1_ = 5;
  FString::~FString(local_68);
  FString::FString(local_68,(ushort *)L"NickName");
  local_8._0_1_ = 8;
  FUN_10040230(local_68,local_50);
  local_8._0_1_ = 5;
  FString::~FString(local_68);
  FString::FString(local_68,(ushort *)L"GradeID");
  local_8._0_1_ = 9;
  FUN_10040090(local_68,local_18);
  local_8._0_1_ = 5;
  FString::~FString(local_68);
  FString::FString(local_68,(ushort *)L"OrderName");
  local_8._0_1_ = 10;
  FUN_10040230(local_68,local_44);
  local_8._0_1_ = 5;
  FString::~FString(local_68);
  FString::FString(local_68,(ushort *)L"MasterName");
  local_8._0_1_ = 0xb;
  FUN_10040230(local_68,local_38);
  local_8._0_1_ = 5;
  FString::~FString(local_68);
  puVar4 = local_2c;
  uVar3 = 0x1ae;
  FUN_10005c30(0x1ae,puVar4);
  FUN_100d1790(uVar3,puVar4);
  local_8._0_1_ = 4;
  FUN_1003fff0();
  local_8._0_1_ = 3;
  FString::~FString(local_38);
  local_8._0_1_ = 2;
  FString::~FString(local_44);
  local_8._0_1_ = 1;
  FString::~FString(local_50);
  local_8 = (uint)local_8._1_3_ << 8;
  FString::~FString(local_5c);
  ExceptionList = local_10;
  return;
}


// ==== 1015c666 Catch@1015c666

void Catch_1015c666(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 1015c67a Catch@1015c67a

void Catch_1015c67a(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NConsoleWnd::ReceivePledgeMemberInfo");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1015c6a0 FUN_1015c6a0

void FUN_1015c6a0(L2ParamStack *param_1)

{
  uint uVar1;
  void *pvVar2;
  ushort *puVar3;
  void *pvVar4;
  void *pvVar5;
  undefined4 uVar6;
  undefined1 local_30 [12];
  FString local_24 [12];
  FString local_18 [12];
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1020e726;
  local_c = ExceptionList;
  uVar1 = DAT_103554c4 ^ (uint)&stack0xffffffbc;
  ExceptionList = &local_c;
  pvVar2 = L2ParamStack::Top(param_1);
  if (pvVar2 == (void *)0xffffffff) {
    pvVar2 = L2ParamStack::Top(param_1);
    FUN_1003f970(uVar1);
    local_4 = 0;
    FString::FString(local_24,(ushort *)L"Condition");
    local_4._0_1_ = 1;
    FUN_10040090(local_24,pvVar2);
    local_4 = (uint)local_4._1_3_ << 8;
    FString::~FString(local_24);
    if (DAT_1035786c == 0) {
      FUN_10005270();
    }
    uVar6 = 0x1d6;
  }
  else {
    pvVar2 = L2ParamStack::Top(param_1);
    puVar3 = L2ParamStack::Top(param_1);
    pvVar4 = L2ParamStack::Top(param_1);
    pvVar5 = L2ParamStack::Top(param_1);
    FUN_1003f970();
    local_4 = 2;
    FString::FString(local_24,(ushort *)L"Page");
    local_4._0_1_ = 3;
    FUN_10040090(local_24,pvVar2);
    local_4._0_1_ = 2;
    FString::~FString(local_24);
    FString::FString(local_18,puVar3);
    local_4._0_1_ = 4;
    FString::FString(local_24,(ushort *)L"ClanName");
    local_4._0_1_ = 5;
    FUN_10040230(local_24,local_18);
    local_4._0_1_ = 4;
    FString::~FString(local_24);
    local_4._0_1_ = 2;
    FString::~FString(local_18);
    FString::FString(local_18,(ushort *)L"Type");
    local_4._0_1_ = 6;
    FUN_10040090(local_18,pvVar4);
    local_4._0_1_ = 2;
    FString::~FString(local_18);
    FString::FString(local_18,(ushort *)L"Period");
    local_4._0_1_ = 7;
    FUN_10040090(local_18,pvVar5);
    local_4 = CONCAT31(local_4._1_3_,2);
    FString::~FString(local_18);
    if (DAT_1035786c == 0) {
      FUN_10005270();
    }
    uVar6 = 0x1cc;
  }
  FUN_100d1790(uVar6,local_30);
  local_4 = 0xffffffff;
  FUN_1003fff0();
  ExceptionList = local_c;
  return;
}


// ==== 1015c8b0 FUN_1015c8b0

void FUN_1015c8b0(L2ParamStack *param_1)

{
  void *pvVar1;
  ushort *puVar2;
  undefined4 uVar3;
  undefined1 *puVar4;
  uint uStack_60;
  FString local_50 [12];
  FString local_44 [12];
  FString local_38 [12];
  undefined1 local_2c [20];
  void *local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_1020e78e;
  local_10 = ExceptionList;
  uStack_60 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_60;
  ExceptionList = &local_10;
  local_8 = 0;
  pvVar1 = L2ParamStack::Top(param_1);
  local_18 = L2ParamStack::Top(param_1);
  puVar2 = L2ParamStack::Top(param_1);
  FString::FString(local_50,puVar2);
  local_8._0_1_ = 1;
  puVar2 = L2ParamStack::Top(param_1);
  FString::FString(local_44,puVar2);
  local_8._0_1_ = 2;
  FUN_1003f970();
  local_8._0_1_ = 3;
  FString::FString(local_38,(ushort *)L"ClanID");
  local_8._0_1_ = 4;
  FUN_10040090(local_38,pvVar1);
  local_8._0_1_ = 3;
  FString::~FString(local_38);
  FString::FString(local_38,(ushort *)L"ClanType");
  local_8._0_1_ = 5;
  FUN_10040090(local_38,local_18);
  local_8._0_1_ = 3;
  FString::~FString(local_38);
  FString::FString(local_38,(ushort *)L"ClanName");
  local_8._0_1_ = 6;
  FUN_10040230(local_38,local_50);
  local_8._0_1_ = 3;
  FString::~FString(local_38);
  FString::FString(local_38,(ushort *)L"MasterName");
  local_8._0_1_ = 7;
  FUN_10040230(local_38,local_44);
  local_8._0_1_ = 3;
  FString::~FString(local_38);
  puVar4 = local_2c;
  uVar3 = 0x1e0;
  FUN_10005c30(0x1e0,puVar4);
  FUN_100d1790(uVar3,puVar4);
  local_8._0_1_ = 2;
  FUN_1003fff0();
  local_8._0_1_ = 1;
  FString::~FString(local_44);
  local_8 = (uint)local_8._1_3_ << 8;
  FString::~FString(local_50);
  ExceptionList = local_10;
  return;
}


// ==== 1015ca38 Catch@1015ca38

void Catch_1015ca38(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 1015ca4c Catch@1015ca4c

void Catch_1015ca4c(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NConsoleWnd::ReceiveSubPledgeCreated");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1015ca70 FUN_1015ca70

void FUN_1015ca70(L2ParamStack *param_1)

{
  uint uVar1;
  ushort *puVar2;
  void *pvVar3;
  undefined1 local_30 [12];
  FString local_24 [12];
  FString local_18 [12];
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1020e7d3;
  local_c = ExceptionList;
  uVar1 = DAT_103554c4 ^ (uint)&stack0xffffffc4;
  ExceptionList = &local_c;
  puVar2 = L2ParamStack::Top(param_1);
  pvVar3 = L2ParamStack::Top(param_1);
  FUN_1003f970(uVar1);
  local_4 = 0;
  FString::FString(local_18,puVar2);
  local_4._0_1_ = 1;
  FString::FString(local_24,(ushort *)L"userName");
  local_4._0_1_ = 2;
  FUN_10040230(local_24,local_18);
  local_4._0_1_ = 1;
  FString::~FString(local_24);
  local_4._0_1_ = 0;
  FString::~FString(local_18);
  FString::FString(local_18,(ushort *)L"type");
  local_4._0_1_ = 3;
  FUN_10040090(local_18,pvVar3);
  local_4 = (uint)local_4._1_3_ << 8;
  FString::~FString(local_18);
  if (DAT_1035786c == 0) {
    FUN_10005270();
  }
  FUN_100d1790(0xa8c,local_30);
  local_4 = 0xffffffff;
  FUN_1003fff0();
  ExceptionList = local_c;
  return;
}


// ==== 1015cb90 FUN_1015cb90

void FUN_1015cb90(L2ParamStack *param_1)

{
  void *pvVar1;
  undefined1 local_24 [12];
  FString local_18 [12];
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1020e801;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_1003f970(DAT_103554c4 ^ (uint)local_24);
  local_4 = 0;
  FString::FString(local_18,(ushort *)L"type");
  local_4._0_1_ = 1;
  pvVar1 = L2ParamStack::Top(param_1);
  FUN_10040090(local_18,pvVar1);
  local_4 = (uint)local_4._1_3_ << 8;
  FString::~FString(local_18);
  if (DAT_1035786c == 0) {
    FUN_10005270();
  }
  FUN_100d1790(0xa96,local_24);
  local_4 = 0xffffffff;
  FUN_1003fff0();
  ExceptionList = local_c;
  return;
}


// ==== 1015cc50 FUN_1015cc50

void FUN_1015cc50(L2ParamStack *param_1)

{
  void *pvVar1;
  undefined1 local_24 [12];
  FString local_18 [12];
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1020e831;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_1003f970(DAT_103554c4 ^ (uint)local_24);
  local_4 = 0;
  FString::FString(local_18,(ushort *)L"type");
  local_4._0_1_ = 1;
  pvVar1 = L2ParamStack::Top(param_1);
  FUN_10040090(local_18,pvVar1);
  local_4 = (uint)local_4._1_3_ << 8;
  FString::~FString(local_18);
  if (DAT_1035786c == 0) {
    FUN_10005270();
  }
  FUN_100d1790(0xaa0,local_24);
  local_4 = 0xffffffff;
  FUN_1003fff0();
  ExceptionList = local_c;
  return;
}


// ==== 1015cd10 FUN_1015cd10

void FUN_1015cd10(L2ParamStack *param_1)

{
  void *pvVar1;
  undefined1 local_24 [12];
  FString local_18 [12];
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1020e861;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_1003f970(DAT_103554c4 ^ (uint)local_24);
  local_4 = 0;
  FString::FString(local_18,(ushort *)L"type");
  local_4._0_1_ = 1;
  pvVar1 = L2ParamStack::Top(param_1);
  FUN_10040090(local_18,pvVar1);
  local_4 = (uint)local_4._1_3_ << 8;
  FString::~FString(local_18);
  if (DAT_1035786c == 0) {
    FUN_10005270();
  }
  FUN_100d1790(0xaaa,local_24);
  local_4 = 0xffffffff;
  FUN_1003fff0();
  ExceptionList = local_c;
  return;
}


// ==== 1015cdd0 FUN_1015cdd0

void FUN_1015cdd0(L2ParamStack *param_1)

{
  ushort *puVar1;
  void *pvVar2;
  undefined1 local_30 [12];
  FString local_24 [12];
  FString local_18 [12];
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1020e8eb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_1003f970(DAT_103554c4 ^ (uint)&stack0xffffffc4);
  local_4 = 0;
  puVar1 = L2ParamStack::Top(param_1);
  FString::FString(local_18,puVar1);
  local_4._0_1_ = 1;
  FString::FString(local_24,(ushort *)L"userName");
  local_4._0_1_ = 2;
  FUN_10040230(local_24,local_18);
  local_4._0_1_ = 1;
  FString::~FString(local_24);
  local_4._0_1_ = 0;
  FString::~FString(local_18);
  FString::FString(local_18,(ushort *)&DAT_1025ae84);
  local_4._0_1_ = 3;
  pvVar2 = L2ParamStack::Top(param_1);
  FUN_10040090(local_18,pvVar2);
  local_4._0_1_ = 0;
  FString::~FString(local_18);
  FString::FString(local_18,(ushort *)L"class");
  local_4._0_1_ = 4;
  pvVar2 = L2ParamStack::Top(param_1);
  FUN_10040090(local_18,pvVar2);
  local_4._0_1_ = 0;
  FString::~FString(local_18);
  FString::FString(local_18,(ushort *)L"level");
  local_4._0_1_ = 5;
  pvVar2 = L2ParamStack::Top(param_1);
  FUN_10040090(local_18,pvVar2);
  local_4._0_1_ = 0;
  FString::~FString(local_18);
  FString::FString(local_18,(ushort *)L"currentHP");
  local_4._0_1_ = 6;
  pvVar2 = L2ParamStack::Top(param_1);
  FUN_10040090(local_18,pvVar2);
  local_4._0_1_ = 0;
  FString::~FString(local_18);
  FString::FString(local_18,(ushort *)L"maxHP");
  local_4._0_1_ = 7;
  pvVar2 = L2ParamStack::Top(param_1);
  FUN_10040090(local_18,pvVar2);
  local_4._0_1_ = 0;
  FString::~FString(local_18);
  FString::FString(local_18,(ushort *)L"currentMP");
  local_4._0_1_ = 8;
  pvVar2 = L2ParamStack::Top(param_1);
  FUN_10040090(local_18,pvVar2);
  local_4._0_1_ = 0;
  FString::~FString(local_18);
  FString::FString(local_18,(ushort *)L"maxMP");
  local_4._0_1_ = 9;
  pvVar2 = L2ParamStack::Top(param_1);
  FUN_10040090(local_18,pvVar2);
  local_4._0_1_ = 0;
  FString::~FString(local_18);
  FString::FString(local_18,(ushort *)L"currentCP");
  local_4._0_1_ = 10;
  pvVar2 = L2ParamStack::Top(param_1);
  FUN_10040090(local_18,pvVar2);
  local_4._0_1_ = 0;
  FString::~FString(local_18);
  FString::FString(local_18,(ushort *)L"maxCP");
  local_4._0_1_ = 0xb;
  pvVar2 = L2ParamStack::Top(param_1);
  FUN_10040090(local_18,pvVar2);
  local_4 = (uint)local_4._1_3_ << 8;
  FString::~FString(local_18);
  if (DAT_1035786c == 0) {
    FUN_10005270();
  }
  FUN_100d1790(0xab4,local_30);
  local_4 = 0xffffffff;
  FUN_1003fff0();
  ExceptionList = local_c;
  return;
}


// ==== 1015d090 FUN_1015d090

void FUN_1015d090(L2ParamStack *param_1)

{
  uint uVar1;
  ushort *puVar2;
  void *pvVar3;
  void *pvVar4;
  undefined1 local_30 [12];
  FString local_24 [12];
  FString local_18 [12];
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1020e93c;
  local_c = ExceptionList;
  uVar1 = DAT_103554c4 ^ (uint)&stack0xffffffc0;
  ExceptionList = &local_c;
  puVar2 = L2ParamStack::Top(param_1);
  pvVar3 = L2ParamStack::Top(param_1);
  pvVar4 = L2ParamStack::Top(param_1);
  FUN_1003f970(uVar1);
  local_4 = 0;
  FString::FString(local_18,puVar2);
  local_4._0_1_ = 1;
  FString::FString(local_24,(ushort *)L"userName");
  local_4._0_1_ = 2;
  FUN_10040230(local_24,local_18);
  local_4._0_1_ = 1;
  FString::~FString(local_24);
  local_4._0_1_ = 0;
  FString::~FString(local_18);
  FString::FString(local_18,(ushort *)&DAT_1025ece0);
  local_4._0_1_ = 3;
  FUN_10040090(local_18,pvVar3);
  local_4._0_1_ = 0;
  FString::~FString(local_18);
  FString::FString(local_18,(ushort *)L"bEnemy");
  local_4._0_1_ = 4;
  FUN_10040090(local_18,pvVar4);
  local_4 = (uint)local_4._1_3_ << 8;
  FString::~FString(local_18);
  if (DAT_1035786c == 0) {
    FUN_10005270();
  }
  FUN_100d1790(0xabe,local_30);
  local_4 = 0xffffffff;
  FUN_1003fff0();
  ExceptionList = local_c;
  return;
}


// ==== 1015d1f0 FUN_1015d1f0

void FUN_1015d1f0(L2ParamStack *param_1)

{
  uint uVar1;
  void *pvVar2;
  ushort *puVar3;
  undefined1 local_30 [12];
  FString local_24 [12];
  FString local_18 [12];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1020e98c;
  local_c = ExceptionList;
  uVar1 = DAT_103554c4 ^ (uint)&stack0xffffffc4;
  ExceptionList = &local_c;
  pvVar2 = L2ParamStack::Top(param_1);
  if (pvVar2 == (void *)0x0) {
    FString::FString(local_24,(ushort *)&DAT_1022f9f8);
    local_4 = 0;
    if (DAT_1035786c == 0) {
      FUN_10005270(uVar1);
    }
    FUN_100d1790(0x85c,local_24);
    local_4 = 0xffffffff;
    FString::~FString(local_24);
  }
  pvVar2 = L2ParamStack::Top(param_1);
  puVar3 = L2ParamStack::Top(param_1);
  FUN_1003f970();
  local_4 = 1;
  FString::FString(local_24,(ushort *)&DAT_1025ece0);
  local_4._0_1_ = 2;
  FUN_10040090(local_24,pvVar2);
  local_4._0_1_ = 1;
  FString::~FString(local_24);
  FString::FString(local_18,puVar3);
  local_4._0_1_ = 3;
  FString::FString(local_24,(ushort *)L"name");
  local_4._0_1_ = 4;
  FUN_10040230(local_24,local_18);
  local_4._0_1_ = 3;
  FString::~FString(local_24);
  local_4 = CONCAT31(local_4._1_3_,1);
  FString::~FString(local_18);
  if (DAT_1035786c == 0) {
    FUN_10005270();
  }
  FUN_100d1790(0x866,local_30);
  local_4 = 0xffffffff;
  FUN_1003fff0();
  ExceptionList = local_c;
  return;
}


// ==== 1015d370 FUN_1015d370

void FUN_1015d370(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  int iVar2;
  undefined1 local_30 [12];
  undefined1 local_24 [12];
  FString local_18 [12];
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1020e9d2;
  local_c = ExceptionList;
  uVar1 = DAT_103554c4 ^ (uint)local_30;
  ExceptionList = &local_c;
  if (param_1 == 0) {
    FUN_1003f970(uVar1);
    local_4 = 0;
    FString::FString(local_18,(ushort *)L"adena");
    local_4._0_1_ = 1;
    FUN_10040090(local_18,param_3);
    local_4._0_1_ = 0;
    FString::~FString(local_18);
    FString::FString(local_18,(ushort *)L"destinationID");
    local_4._0_1_ = 2;
    FUN_10040090(local_18,param_2);
    local_4 = (uint)local_4._1_3_ << 8;
    FString::~FString(local_18);
    if (DAT_1035786c == 0) {
      FUN_10005270();
    }
    FUN_100d1790(0x870,local_30);
    local_4 = 0xffffffff;
    FUN_1003fff0();
  }
  FUN_1003f970(uVar1);
  local_4 = 3;
  iVar2 = FUN_10065fe0(param_4,local_24);
  if (iVar2 != 0) {
    if (DAT_1035786c == 0) {
      FUN_10005270();
    }
    FUN_100d1790(0x87a,local_24);
  }
  local_4 = 0xffffffff;
  FUN_1003fff0();
  ExceptionList = local_c;
  return;
}


// ==== 1015d4c0 FUN_1015d4c0

void FUN_1015d4c0(L2ParamStack *param_1)

{
  void *pvVar1;
  ushort *puVar2;
  void *pvVar3;
  FString local_644 [12];
  FString local_638 [12];
  undefined1 local_62c [12];
  void *local_620;
  void *local_61c;
  void *local_618;
  void *local_614;
  ushort local_610 [256];
  ushort local_410 [256];
  ushort local_210 [256];
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1020ea8b;
  local_c = ExceptionList;
  local_10 = DAT_103554c4 ^ (uint)local_644;
  ExceptionList = &local_c;
  L2ParamStack::Restart(param_1);
  pvVar1 = L2ParamStack::Top(param_1);
  local_614 = L2ParamStack::Top(param_1);
  local_618 = L2ParamStack::Top(param_1);
  puVar2 = L2ParamStack::Top(param_1);
  appStrcpy(local_410,puVar2);
  puVar2 = L2ParamStack::Top(param_1);
  appStrcpy(local_610,puVar2);
  local_620 = L2ParamStack::Top(param_1);
  puVar2 = L2ParamStack::Top(param_1);
  appStrcpy(local_210,puVar2);
  local_61c = L2ParamStack::Top(param_1);
  pvVar3 = L2ParamStack::Top(param_1);
  FUN_1003f970();
  local_4 = 0;
  FString::FString(local_638,(ushort *)L"CastleID");
  local_4._0_1_ = 1;
  FUN_10040090(local_638,pvVar1);
  local_4._0_1_ = 0;
  FString::~FString(local_638);
  FString::FString(local_638,(ushort *)L"IsOwner");
  local_4._0_1_ = 2;
  FUN_10040090(local_638,local_614);
  local_4._0_1_ = 0;
  FString::~FString(local_638);
  FString::FString(local_644,local_610);
  local_4._0_1_ = 3;
  FString::FString(local_638,(ushort *)L"OwnerName");
  local_4._0_1_ = 4;
  FUN_10040230(local_638,local_644);
  local_4._0_1_ = 3;
  FString::~FString(local_638);
  local_4._0_1_ = 0;
  FString::~FString(local_644);
  FString::FString(local_644,(ushort *)L"ClanID");
  local_4._0_1_ = 5;
  FUN_10040090(local_644,local_618);
  local_4._0_1_ = 0;
  FString::~FString(local_644);
  FString::FString(local_638,local_410);
  local_4._0_1_ = 6;
  FString::FString(local_644,(ushort *)L"ClanName");
  local_4._0_1_ = 7;
  FUN_10040230(local_644,local_638);
  local_4._0_1_ = 6;
  FString::~FString(local_644);
  local_4._0_1_ = 0;
  FString::~FString(local_638);
  FString::FString(local_644,(ushort *)L"AllianceID");
  local_4._0_1_ = 8;
  FUN_10040090(local_644,local_620);
  local_4._0_1_ = 0;
  FString::~FString(local_644);
  FString::FString(local_638,local_210);
  local_4._0_1_ = 9;
  FString::FString(local_644,(ushort *)L"AllianceName");
  local_4._0_1_ = 10;
  FUN_10040230(local_644,local_638);
  local_4._0_1_ = 9;
  FString::~FString(local_644);
  local_4._0_1_ = 0;
  FString::~FString(local_638);
  FString::FString(local_644,(ushort *)L"NowTime");
  local_4._0_1_ = 0xb;
  FUN_10040090(local_644,local_61c);
  local_4._0_1_ = 0;
  FString::~FString(local_644);
  FString::FString(local_644,(ushort *)L"SiegeTime");
  local_4._0_1_ = 0xc;
  FUN_10040090(local_644,pvVar3);
  local_4 = (uint)local_4._1_3_ << 8;
  FString::~FString(local_644);
  if (DAT_1035786c == 0) {
    FUN_10005270();
  }
  FUN_100d1790(0x5aa,local_62c);
  local_4 = 0xffffffff;
  FUN_1003fff0();
  ExceptionList = local_c;
  __security_check_cookie(local_10 ^ (uint)local_644);
  return;
}


// ==== 1015d880 FUN_1015d880

void FUN_1015d880(L2ParamStack *param_1)

{
  void *pvVar1;
  ushort *puVar2;
  FString local_840 [12];
  FString local_834 [12];
  undefined1 local_828 [12];
  void *local_81c;
  void *local_818;
  void *local_814;
  ushort local_810 [256];
  ushort local_610 [256];
  ushort local_410 [256];
  ushort local_210 [256];
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1020eb67;
  local_c = ExceptionList;
  local_10 = DAT_103554c4 ^ (uint)local_840;
  ExceptionList = &local_c;
  L2ParamStack::Restart(param_1);
  pvVar1 = L2ParamStack::Top(param_1);
  puVar2 = L2ParamStack::Top(param_1);
  appStrcpy(local_810,puVar2);
  puVar2 = L2ParamStack::Top(param_1);
  appStrcpy(local_410,puVar2);
  local_818 = L2ParamStack::Top(param_1);
  local_814 = L2ParamStack::Top(param_1);
  local_81c = L2ParamStack::Top(param_1);
  puVar2 = L2ParamStack::Top(param_1);
  appStrcpy(local_610,puVar2);
  puVar2 = L2ParamStack::Top(param_1);
  appStrcpy(local_210,puVar2);
  FUN_1003f970();
  local_4 = 0;
  FString::FString(local_834,(ushort *)L"Type");
  local_4._0_1_ = 1;
  FUN_10040090(local_834,0);
  local_4._0_1_ = 0;
  FString::~FString(local_834);
  FString::FString(local_834,(ushort *)L"ClanID");
  local_4._0_1_ = 2;
  FUN_10040090(local_834,pvVar1);
  local_4._0_1_ = 0;
  FString::~FString(local_834);
  FString::FString(local_840,local_810);
  local_4._0_1_ = 3;
  FString::FString(local_834,(ushort *)L"ClanName");
  local_4._0_1_ = 4;
  FUN_10040230(local_834,local_840);
  local_4._0_1_ = 3;
  FString::~FString(local_834);
  local_4._0_1_ = 0;
  FString::~FString(local_840);
  FString::FString(local_834,local_410);
  local_4._0_1_ = 5;
  FString::FString(local_840,(ushort *)L"ClanMasterName");
  local_4._0_1_ = 6;
  FUN_10040230(local_840,local_834);
  local_4._0_1_ = 5;
  FString::~FString(local_840);
  local_4._0_1_ = 0;
  FString::~FString(local_834);
  FString::FString(local_840,(ushort *)L"ClanCrestID");
  local_4._0_1_ = 7;
  FUN_10040090(local_840,local_818);
  local_4._0_1_ = 0;
  FString::~FString(local_840);
  FString::FString(local_840,(ushort *)L"AllianceID");
  local_4._0_1_ = 8;
  FUN_10040090(local_840,local_81c);
  local_4._0_1_ = 0;
  FString::~FString(local_840);
  FString::FString(local_834,local_610);
  local_4._0_1_ = 9;
  FString::FString(local_840,(ushort *)L"AllianceName");
  local_4._0_1_ = 10;
  FUN_10040230(local_840,local_834);
  local_4._0_1_ = 9;
  FString::~FString(local_840);
  local_4._0_1_ = 0;
  FString::~FString(local_834);
  FString::FString(local_834,local_210);
  local_4._0_1_ = 0xb;
  FString::FString(local_840,(ushort *)L"AllianceMasterName");
  local_4._0_1_ = 0xc;
  FUN_10040230(local_840,local_834);
  local_4._0_1_ = 0xb;
  FString::~FString(local_840);
  local_4._0_1_ = 0;
  FString::~FString(local_834);
  FString::FString(local_840,(ushort *)L"ProposeTime");
  local_4._0_1_ = 0xd;
  FUN_10040090(local_840,local_814);
  local_4 = (uint)local_4._1_3_ << 8;
  FString::~FString(local_840);
  if (DAT_1035786c == 0) {
    FUN_10005270();
  }
  FUN_100d1790(0x5be,local_828);
  local_4 = 0xffffffff;
  FUN_1003fff0();
  ExceptionList = local_c;
  __security_check_cookie(local_10 ^ (uint)local_840);
  return;
}


// ==== 1015dc70 FUN_1015dc70

void FUN_1015dc70(L2ParamStack *param_1)

{
  void *pvVar1;
  ushort *puVar2;
  FString local_844 [12];
  FString local_838 [12];
  undefined1 local_82c [12];
  void *local_820;
  void *local_81c;
  void *local_818;
  void *local_814;
  ushort local_810 [256];
  ushort local_610 [256];
  ushort local_410 [256];
  ushort local_210 [256];
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1020ec53;
  local_c = ExceptionList;
  local_10 = DAT_103554c4 ^ (uint)local_844;
  ExceptionList = &local_c;
  L2ParamStack::Restart(param_1);
  pvVar1 = L2ParamStack::Top(param_1);
  puVar2 = L2ParamStack::Top(param_1);
  appStrcpy(local_810,puVar2);
  puVar2 = L2ParamStack::Top(param_1);
  appStrcpy(local_410,puVar2);
  local_81c = L2ParamStack::Top(param_1);
  local_814 = L2ParamStack::Top(param_1);
  local_818 = L2ParamStack::Top(param_1);
  local_820 = L2ParamStack::Top(param_1);
  puVar2 = L2ParamStack::Top(param_1);
  appStrcpy(local_610,puVar2);
  puVar2 = L2ParamStack::Top(param_1);
  appStrcpy(local_210,puVar2);
  FUN_1003f970();
  local_4 = 0;
  FString::FString(local_838,(ushort *)L"Type");
  local_4._0_1_ = 1;
  FUN_10040090(local_838,1);
  local_4._0_1_ = 0;
  FString::~FString(local_838);
  FString::FString(local_838,(ushort *)L"ClanID");
  local_4._0_1_ = 2;
  FUN_10040090(local_838,pvVar1);
  local_4._0_1_ = 0;
  FString::~FString(local_838);
  FString::FString(local_844,local_810);
  local_4._0_1_ = 3;
  FString::FString(local_838,(ushort *)L"ClanName");
  local_4._0_1_ = 4;
  FUN_10040230(local_838,local_844);
  local_4._0_1_ = 3;
  FString::~FString(local_838);
  local_4._0_1_ = 0;
  FString::~FString(local_844);
  FString::FString(local_838,local_410);
  local_4._0_1_ = 5;
  FString::FString(local_844,(ushort *)L"ClanMasterName");
  local_4._0_1_ = 6;
  FUN_10040230(local_844,local_838);
  local_4._0_1_ = 5;
  FString::~FString(local_844);
  local_4._0_1_ = 0;
  FString::~FString(local_838);
  FString::FString(local_844,(ushort *)L"ClanCrestID");
  local_4._0_1_ = 7;
  FUN_10040090(local_844,local_81c);
  local_4._0_1_ = 0;
  FString::~FString(local_844);
  FString::FString(local_844,(ushort *)L"AllianceID");
  local_4._0_1_ = 8;
  FUN_10040090(local_844,local_820);
  local_4._0_1_ = 0;
  FString::~FString(local_844);
  FString::FString(local_838,local_610);
  local_4._0_1_ = 9;
  FString::FString(local_844,(ushort *)L"AllianceName");
  local_4._0_1_ = 10;
  FUN_10040230(local_844,local_838);
  local_4._0_1_ = 9;
  FString::~FString(local_844);
  local_4._0_1_ = 0;
  FString::~FString(local_838);
  FString::FString(local_838,local_210);
  local_4._0_1_ = 0xb;
  FString::FString(local_844,(ushort *)L"AllianceMasterName");
  local_4._0_1_ = 0xc;
  FUN_10040230(local_844,local_838);
  local_4._0_1_ = 0xb;
  FString::~FString(local_844);
  local_4._0_1_ = 0;
  FString::~FString(local_838);
  FString::FString(local_844,(ushort *)L"ProposeTime");
  local_4._0_1_ = 0xd;
  FUN_10040090(local_844,local_814);
  local_4._0_1_ = 0;
  FString::~FString(local_844);
  FString::FString(local_844,(ushort *)L"Status");
  local_4._0_1_ = 0xe;
  FUN_10040090(local_844,local_818);
  local_4 = (uint)local_4._1_3_ << 8;
  FString::~FString(local_844);
  if (DAT_1035786c == 0) {
    FUN_10005270();
  }
  FUN_100d1790(0x5be,local_82c);
  local_4 = 0xffffffff;
  FUN_1003fff0();
  ExceptionList = local_c;
  __security_check_cookie(local_10 ^ (uint)local_844);
  return;
}


// ==== 1015e0a0 FUN_1015e0a0

void FUN_1015e0a0(undefined4 param_1)

{
  undefined1 local_24 [12];
  FString local_18 [12];
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1020eca1;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_1003f970(DAT_103554c4 ^ (uint)local_24);
  local_4 = 0;
  FString::FString(local_18,(ushort *)L"TimeID");
  local_4._0_1_ = 1;
  FUN_10040090(local_18,param_1);
  local_4 = (uint)local_4._1_3_ << 8;
  FString::~FString(local_18);
  if (DAT_1035786c == 0) {
    FUN_10005270();
  }
  FUN_100d1790(0x5d2,local_24);
  local_4 = 0xffffffff;
  FUN_1003fff0();
  ExceptionList = local_c;
  return;
}


// ==== 1015e150 FUN_1015e150

void FUN_1015e150(void)

{
  undefined1 local_24 [12];
  FString local_18 [12];
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1020ecd1;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_1003f970(DAT_103554c4 ^ (uint)local_24);
  local_4 = 0;
  FString::FString(local_18,(ushort *)L"Type");
  local_4._0_1_ = 1;
  FUN_10040090(local_18,0);
  local_4 = (uint)local_4._1_3_ << 8;
  FString::~FString(local_18);
  if (DAT_1035786c == 0) {
    FUN_10005270();
  }
  FUN_100d1790(0x5c8,local_24);
  local_4 = 0xffffffff;
  FUN_1003fff0();
  ExceptionList = local_c;
  return;
}


// ==== 1015e200 FUN_1015e200

void FUN_1015e200(void)

{
  undefined1 local_24 [12];
  FString local_18 [12];
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1020ed01;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_1003f970(DAT_103554c4 ^ (uint)local_24);
  local_4 = 0;
  FString::FString(local_18,(ushort *)L"Type");
  local_4._0_1_ = 1;
  FUN_10040090(local_18,1);
  local_4 = (uint)local_4._1_3_ << 8;
  FString::~FString(local_18);
  if (DAT_1035786c == 0) {
    FUN_10005270();
  }
  FUN_100d1790(0x5c8,local_24);
  local_4 = 0xffffffff;
  FUN_1003fff0();
  ExceptionList = local_c;
  return;
}


// ==== 1015e2b0 FUN_1015e2b0

void FUN_1015e2b0(void)

{
  undefined1 local_24 [12];
  FString local_18 [12];
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1020ed31;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_1003f970(DAT_103554c4 ^ (uint)local_24);
  local_4 = 0;
  FString::FString(local_18,(ushort *)L"Type");
  local_4._0_1_ = 1;
  FUN_10040090(local_18,0);
  local_4 = (uint)local_4._1_3_ << 8;
  FString::~FString(local_18);
  if (DAT_1035786c == 0) {
    FUN_10005270();
  }
  FUN_100d1790(0x5b4,local_24);
  local_4 = 0xffffffff;
  FUN_1003fff0();
  ExceptionList = local_c;
  return;
}


// ==== 1015e360 FUN_1015e360

void FUN_1015e360(void)

{
  undefined1 local_24 [12];
  FString local_18 [12];
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1020ed61;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_1003f970(DAT_103554c4 ^ (uint)local_24);
  local_4 = 0;
  FString::FString(local_18,(ushort *)L"Type");
  local_4._0_1_ = 1;
  FUN_10040090(local_18,1);
  local_4 = (uint)local_4._1_3_ << 8;
  FString::~FString(local_18);
  if (DAT_1035786c == 0) {
    FUN_10005270();
  }
  FUN_100d1790(0x5b4,local_24);
  local_4 = 0xffffffff;
  FUN_1003fff0();
  ExceptionList = local_c;
  return;
}


// ==== 1015e410 FUN_1015e410

void FUN_1015e410(L2ParamStack *param_1)

{
  uint uVar1;
  void *pvVar2;
  void *pvVar3;
  void *pvVar4;
  undefined4 uVar5;
  int iVar6;
  undefined1 local_3c [12];
  FString local_30 [12];
  FString local_24 [12];
  FString local_18 [12];
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1020edb5;
  local_c = ExceptionList;
  uVar1 = DAT_103554c4 ^ (uint)&stack0xffffffac;
  ExceptionList = &local_c;
  L2ParamStack::Restart(param_1);
  FUN_1003f970(uVar1);
  local_4 = 0;
  pvVar2 = L2ParamStack::Top(param_1);
  pvVar3 = L2ParamStack::Top(param_1);
  pvVar4 = L2ParamStack::Top(param_1);
  FString::FString(local_30,(ushort *)&DAT_10274940);
  local_4._0_1_ = 1;
  FUN_10040090(local_30,pvVar4);
  local_4._0_1_ = 0;
  FString::~FString(local_30);
  FString::FString(local_30,(ushort *)&DAT_1025ae84);
  local_4._0_1_ = 2;
  FUN_10040090(local_30,pvVar3);
  local_4 = (uint)local_4._1_3_ << 8;
  FString::~FString(local_30);
  iVar6 = 0;
  if (0 < (int)pvVar4) {
    do {
      uVar5 = FString::Printf((ushort *)local_30,L"SkillID_%d",iVar6);
      local_4._0_1_ = 3;
      pvVar3 = L2ParamStack::Top(param_1);
      FUN_10040090(uVar5,pvVar3);
      local_4._0_1_ = 0;
      FString::~FString(local_30);
      uVar5 = FString::Printf((ushort *)local_24,L"Level_%d",iVar6);
      local_4._0_1_ = 4;
      pvVar3 = L2ParamStack::Top(param_1);
      FUN_10040090(uVar5,pvVar3);
      local_4._0_1_ = 0;
      FString::~FString(local_24);
      uVar5 = FString::Printf((ushort *)local_18,L"Sec_%d",iVar6);
      local_4._0_1_ = 5;
      pvVar3 = L2ParamStack::Top(param_1);
      FUN_10040090(uVar5,pvVar3);
      local_4 = (uint)local_4._1_3_ << 8;
      FString::~FString(local_18);
      iVar6 = iVar6 + 1;
    } while (iVar6 < (int)pvVar4);
  }
  if (pvVar2 == (void *)0x0) {
    if (DAT_1035786c == 0) {
      FUN_10005270();
    }
    uVar5 = 0x49c;
  }
  else if (pvVar2 == (void *)0x1) {
    if (DAT_1035786c == 0) {
      FUN_10005270();
    }
    uVar5 = 0x41a;
  }
  else {
    if (pvVar2 != (void *)0x2) goto LAB_1015e60c;
    if (DAT_1035786c == 0) {
      FUN_10005270();
    }
    uVar5 = 0x456;
  }
  FUN_100d1790(uVar5,local_3c);
LAB_1015e60c:
  local_4 = 0xffffffff;
  FUN_1003fff0();
  ExceptionList = local_c;
  return;
}


// ==== 1015e640 FUN_1015e640

void FUN_1015e640(L2ParamStack *param_1)

{
  void *pvVar1;
  ushort *puVar2;
  void *pvVar3;
  undefined4 uVar4;
  FString *pFVar5;
  undefined1 *puVar6;
  uint uStack_ac;
  undefined1 local_98 [48];
  undefined1 *local_68;
  void *local_64;
  undefined1 *puStack_60;
  int local_5c;
  void *local_58 [2];
  void *local_50;
  void *local_4c;
  void *local_48;
  void *local_44;
  void *local_40;
  void *local_3c;
  void *local_38;
  void *local_34;
  void *local_30;
  void *local_2c;
  FString local_28 [12];
  undefined1 local_1c [12];
  FString local_10 [12];
  
  puStack_60 = &LAB_1020ee70;
  local_64 = ExceptionList;
  uStack_ac = DAT_103554c4 ^ (uint)local_58;
  local_68 = (undefined1 *)&uStack_ac;
  ExceptionList = &local_64;
  local_5c = 0;
  local_50 = L2ParamStack::Top(param_1);
  local_30 = L2ParamStack::Top(param_1);
  local_48 = L2ParamStack::Top(param_1);
  puVar2 = L2ParamStack::Top(param_1);
  local_34 = L2ParamStack::Top(param_1);
  local_38 = L2ParamStack::Top(param_1);
  pvVar3 = L2ParamStack::Top(param_1);
  local_44 = pvVar3;
  local_40 = L2ParamStack::Top(param_1);
  local_58[0] = L2ParamStack::Top(param_1);
  local_4c = L2ParamStack::Top(param_1);
  local_3c = L2ParamStack::Top(param_1);
  local_2c = L2ParamStack::Top(param_1);
  L2ParamStack::Top(param_1);
  L2ParamStack::Top(param_1);
  FUN_101b6870();
  local_5c._0_1_ = 1;
  FString::FString(local_28,puVar2);
  local_5c._0_1_ = 2;
  FUN_101b61a0(local_28);
  local_5c = CONCAT31(local_5c._1_3_,1);
  FString::~FString(local_28);
  FUN_101b6230(local_30);
  FUN_101b62c0(pvVar3);
  pvVar1 = local_40;
  FUN_101b6350(local_40);
  FUN_101b63e0(pvVar3);
  FUN_101b6470(pvVar1);
  FUN_101b6500(local_34);
  FUN_101b6590(local_38);
  FUN_101b6620(local_2c);
  FUN_101b66b0(local_3c);
  if (*(int *)(DAT_103663bc + 0x5110) != 0) {
    FUN_101afd90(local_98);
  }
  FString::FString(local_28,(ushort *)&DAT_1022f9f8);
  local_5c._0_1_ = 3;
  pFVar5 = local_28;
  uVar4 = 0x226;
  FUN_10005c30(0x226,pFVar5);
  FUN_100d1790(uVar4,pFVar5);
  local_5c._0_1_ = 1;
  FString::~FString(local_28);
  FUN_1003f970();
  local_5c._0_1_ = 4;
  FString::FString(local_28,(ushort *)L"MasterID");
  local_5c._0_1_ = 5;
  FUN_10040090(local_28,local_50);
  local_5c._0_1_ = 4;
  FString::~FString(local_28);
  FString::FString(local_28,(ushort *)L"RoutingType");
  local_5c._0_1_ = 6;
  FUN_10040090(local_28,local_48);
  local_5c._0_1_ = 4;
  FString::~FString(local_28);
  FString::FString(local_10,puVar2);
  local_5c._0_1_ = 7;
  FString::FString(local_28,(ushort *)L"Name");
  local_5c._0_1_ = 8;
  FUN_10040230(local_28,local_10);
  local_5c._0_1_ = 7;
  FString::~FString(local_28);
  local_5c._0_1_ = 4;
  FString::~FString(local_10);
  FString::FString(local_10,(ushort *)&DAT_1025ae84);
  local_5c._0_1_ = 9;
  FUN_10040090(local_10,local_30);
  local_5c._0_1_ = 4;
  FString::~FString(local_10);
  FString::FString(local_10,(ushort *)L"CurCP");
  local_5c._0_1_ = 10;
  FUN_10040090(local_10,local_34);
  local_5c._0_1_ = 4;
  FString::~FString(local_10);
  FString::FString(local_10,(ushort *)L"MaxCP");
  local_5c._0_1_ = 0xb;
  FUN_10040090(local_10,local_38);
  local_5c._0_1_ = 4;
  FString::~FString(local_10);
  FString::FString(local_10,(ushort *)L"CurHP");
  local_5c._0_1_ = 0xc;
  FUN_10040090(local_10,local_44);
  local_5c._0_1_ = 4;
  FString::~FString(local_10);
  FString::FString(local_10,(ushort *)L"MaxHP");
  local_5c._0_1_ = 0xd;
  FUN_10040090(local_10,local_40);
  local_5c._0_1_ = 4;
  FString::~FString(local_10);
  FString::FString(local_10,(ushort *)L"CurMP");
  local_5c._0_1_ = 0xe;
  FUN_10040090(local_10,local_58[0]);
  local_5c._0_1_ = 4;
  FString::~FString(local_10);
  FString::FString(local_10,(ushort *)L"MaxMP");
  local_5c._0_1_ = 0xf;
  FUN_10040090(local_10,local_4c);
  local_5c._0_1_ = 4;
  FString::~FString(local_10);
  FString::FString(local_10,(ushort *)L"ClassID");
  local_5c._0_1_ = 0x10;
  FUN_10040090(local_10,local_2c);
  local_5c._0_1_ = 4;
  FString::~FString(local_10);
  FString::FString(local_10,(ushort *)L"Level");
  local_5c._0_1_ = 0x11;
  FUN_10040090(local_10,local_3c);
  local_5c._0_1_ = 4;
  FString::~FString(local_10);
  puVar6 = local_1c;
  uVar4 = 0x474;
  FUN_10005c30(0x474,puVar6);
  FUN_100d1790(uVar4,puVar6);
  FUN_1003faa0();
  FString::FString(local_10,(ushort *)L"PartyMemberCount");
  local_5c._0_1_ = 0x12;
  uVar4 = FUN_101ace30();
  FUN_10040090(local_10,uVar4);
  local_5c._0_1_ = 4;
  FString::~FString(local_10);
  puVar6 = local_1c;
  uVar4 = 0x208;
  FUN_10005c30(0x208,puVar6);
  FUN_100d1790(uVar4,puVar6);
  local_5c._0_1_ = 1;
  FUN_1003fff0();
  local_5c = (uint)local_5c._1_3_ << 8;
  FUN_10144920();
  ExceptionList = local_64;
  return;
}


// ==== 1015eabf Catch@1015eabf

void Catch_1015eabf(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + 4) = *(undefined4 *)(unaff_EBP + -0x44);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + 4,&DAT_102a47f0);
}


// ==== 1015ead3 Catch@1015ead3

void Catch_1015ead3(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NConsoleWnd::PartyAddMemberPacket");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1015eaf0 FUN_1015eaf0

void FUN_1015eaf0(L2ParamStack *param_1)

{
  void *pvVar1;
  ushort *puVar2;
  void *pvVar3;
  void *pvVar4;
  undefined4 uVar5;
  undefined1 *puVar6;
  uint uStack_a0;
  undefined1 local_90 [48];
  FString local_60 [12];
  FString local_54 [12];
  undefined1 local_48 [20];
  void *local_34;
  void *local_30;
  void *local_2c;
  void *local_28;
  void *local_24;
  void *local_20;
  void *local_1c;
  void *local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_1020ef0f;
  local_10 = ExceptionList;
  uStack_a0 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_a0;
  ExceptionList = &local_10;
  local_8 = 0;
  local_18 = L2ParamStack::Top(param_1);
  puVar2 = L2ParamStack::Top(param_1);
  local_24 = L2ParamStack::Top(param_1);
  local_28 = L2ParamStack::Top(param_1);
  pvVar3 = L2ParamStack::Top(param_1);
  local_2c = pvVar3;
  local_1c = L2ParamStack::Top(param_1);
  local_30 = L2ParamStack::Top(param_1);
  local_34 = L2ParamStack::Top(param_1);
  local_20 = L2ParamStack::Top(param_1);
  pvVar4 = L2ParamStack::Top(param_1);
  FUN_101b6870();
  local_8._0_1_ = 1;
  FString::FString(local_54,puVar2);
  local_8._0_1_ = 2;
  FUN_101b61a0(local_54);
  local_8 = CONCAT31(local_8._1_3_,1);
  FString::~FString(local_54);
  FUN_101b6230(local_18);
  FUN_101b62c0(pvVar3);
  pvVar1 = local_1c;
  FUN_101b6350(local_1c);
  FUN_101b63e0(pvVar3);
  FUN_101b6470(pvVar1);
  FUN_101b6500(pvVar3);
  FUN_101b6590(pvVar1);
  FUN_101b6620(pvVar4);
  FUN_101b66b0(local_20);
  if (*(int *)(DAT_103663bc + 0x5110) != 0) {
    FUN_101ad7f0(local_90);
  }
  FUN_1003f970();
  local_8._0_1_ = 3;
  FString::FString(local_60,puVar2);
  local_8._0_1_ = 4;
  FString::FString(local_54,(ushort *)L"Name");
  local_8._0_1_ = 5;
  FUN_10040230(local_54,local_60);
  local_8._0_1_ = 4;
  FString::~FString(local_54);
  local_8._0_1_ = 3;
  FString::~FString(local_60);
  FString::FString(local_60,(ushort *)&DAT_1025ae84);
  local_8._0_1_ = 6;
  FUN_10040090(local_60,local_18);
  local_8._0_1_ = 3;
  FString::~FString(local_60);
  FString::FString(local_60,(ushort *)L"CurCP");
  local_8._0_1_ = 7;
  FUN_10040090(local_60,local_24);
  local_8._0_1_ = 3;
  FString::~FString(local_60);
  FString::FString(local_60,(ushort *)L"MaxCP");
  local_8._0_1_ = 8;
  FUN_10040090(local_60,local_28);
  local_8._0_1_ = 3;
  FString::~FString(local_60);
  FString::FString(local_60,(ushort *)L"CurHP");
  local_8._0_1_ = 9;
  FUN_10040090(local_60,local_2c);
  local_8._0_1_ = 3;
  FString::~FString(local_60);
  FString::FString(local_60,(ushort *)L"MaxHP");
  local_8._0_1_ = 10;
  FUN_10040090(local_60,local_1c);
  local_8._0_1_ = 3;
  FString::~FString(local_60);
  FString::FString(local_60,(ushort *)L"CurMP");
  local_8._0_1_ = 0xb;
  FUN_10040090(local_60,local_30);
  local_8._0_1_ = 3;
  FString::~FString(local_60);
  FString::FString(local_60,(ushort *)L"MaxMP");
  local_8._0_1_ = 0xc;
  FUN_10040090(local_60,local_34);
  local_8._0_1_ = 3;
  FString::~FString(local_60);
  FString::FString(local_60,(ushort *)L"ClassID");
  local_8._0_1_ = 0xd;
  FUN_10040090(local_60,pvVar4);
  local_8._0_1_ = 3;
  FString::~FString(local_60);
  FString::FString(local_60,(ushort *)L"Level");
  local_8._0_1_ = 0xe;
  FUN_10040090(local_60,local_20);
  local_8._0_1_ = 3;
  FString::~FString(local_60);
  puVar6 = local_48;
  uVar5 = 0x47e;
  FUN_10005c30(0x47e,puVar6);
  FUN_100d1790(uVar5,puVar6);
  local_8._0_1_ = 1;
  FUN_1003fff0();
  local_8 = (uint)local_8._1_3_ << 8;
  FUN_10144920();
  ExceptionList = local_10;
  return;
}


// ==== 1015ee85 Catch@1015ee85

void Catch_1015ee85(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x34) = *(undefined4 *)(unaff_EBP + -0x38);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x34,&DAT_102a47f0);
}


// ==== 1015ee99 Catch@1015ee99

void Catch_1015ee99(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NConsoleWnd::PartyUpdateMemberPacket");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1015eec0 FUN_1015eec0

void FUN_1015eec0(L2ParamStack *param_1)

{
  void *pvVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  uint uStack_44;
  FString local_34 [12];
  undefined1 local_28 [20];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_1020ef4a;
  local_10 = ExceptionList;
  uStack_44 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_44;
  ExceptionList = &local_10;
  local_8 = 0;
  pvVar1 = L2ParamStack::Top(param_1);
  L2ParamStack::Top(param_1);
  if (*(int *)(DAT_103663bc + 0x5110) != 0) {
    FUN_101ae780(pvVar1);
  }
  FUN_1003f970();
  local_8._0_1_ = 1;
  FString::FString(local_34,(ushort *)&DAT_1025ae84);
  local_8._0_1_ = 2;
  FUN_10040090(local_34,pvVar1);
  local_8._0_1_ = 1;
  FString::~FString(local_34);
  puVar3 = local_28;
  uVar2 = 0x488;
  FUN_10005c30(0x488,puVar3);
  FUN_100d1790(uVar2,puVar3);
  FUN_1003faa0();
  FString::FString(local_34,(ushort *)L"PartyMemberCount");
  local_8._0_1_ = 3;
  uVar2 = FUN_101ace30();
  FUN_10040090(local_34,uVar2);
  local_8._0_1_ = 1;
  FString::~FString(local_34);
  puVar3 = local_28;
  uVar2 = 0x208;
  FUN_10005c30(0x208,puVar3);
  FUN_100d1790(uVar2,puVar3);
  local_8 = (uint)local_8._1_3_ << 8;
  FUN_1003fff0();
  ExceptionList = local_10;
  return;
}


// ==== 1015efed Catch@1015efed

void Catch_1015efed(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1015f001 Catch@1015f001

void Catch_1015f001(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NConsoleWnd::PartyDeleteMemberPacket");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1015f020 FUN_1015f020

void FUN_1015f020(void)

{
  uint *puVar1;
  undefined4 uVar2;
  FString *pFVar3;
  undefined1 *puVar4;
  uint uStack_44;
  FString local_34 [12];
  undefined1 local_28 [20];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_1020ef93;
  local_10 = ExceptionList;
  uStack_44 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_44;
  ExceptionList = &local_10;
  local_8 = 0;
  puVar1 = &uStack_44;
  if (*(int *)(DAT_103663bc + 0x5110) != 0) {
    FUN_101ae830();
    puVar1 = (uint *)local_14;
  }
  local_14 = (undefined1 *)puVar1;
  FString::FString(local_34,(ushort *)&DAT_1022f9f8);
  local_8._0_1_ = 1;
  pFVar3 = local_34;
  uVar2 = 0x226;
  FUN_10005c30(0x226,pFVar3);
  FUN_100d1790(uVar2,pFVar3);
  local_8._0_1_ = 0;
  FString::~FString(local_34);
  FString::FString(local_34,(ushort *)&DAT_1022f9f8);
  local_8._0_1_ = 2;
  pFVar3 = local_34;
  uVar2 = 0x492;
  FUN_10005c30(0x492,pFVar3);
  FUN_100d1790(uVar2,pFVar3);
  local_8._0_1_ = 0;
  FString::~FString(local_34);
  FUN_1003f970();
  local_8._0_1_ = 3;
  FUN_1003faa0();
  FString::FString(local_34,(ushort *)L"PartyMemberCount");
  local_8._0_1_ = 4;
  uVar2 = FUN_101ace30();
  FUN_10040090(local_34,uVar2);
  local_8._0_1_ = 3;
  FString::~FString(local_34);
  puVar4 = local_28;
  uVar2 = 0x208;
  FUN_10005c30(0x208,puVar4);
  FUN_100d1790(uVar2,puVar4);
  local_8 = (uint)local_8._1_3_ << 8;
  FUN_1003fff0();
  ExceptionList = local_10;
  return;
}


// ==== 1015f15a Catch@1015f15a

void Catch_1015f15a(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1015f16e Catch@1015f16e

void Catch_1015f16e(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NConsoleWnd::PartyDeleteAllPacket");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1015f190 FUN_1015f190

void FUN_1015f190(ushort *param_1)

{
  undefined4 uVar1;
  undefined1 *puVar2;
  uint uStack_50;
  FString local_40 [12];
  FString local_34 [12];
  undefined1 local_28 [20];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_1020efca;
  local_10 = ExceptionList;
  uStack_50 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_50;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_1003f970();
  local_8._0_1_ = 1;
  FString::FString(local_40,param_1);
  local_8._0_1_ = 2;
  FString::FString(local_34,"HtmlString");
  local_8._0_1_ = 3;
  FUN_10040230(local_34,local_40);
  local_8._0_1_ = 2;
  FString::~FString(local_34);
  local_8._0_1_ = 1;
  FString::~FString(local_40);
  puVar2 = local_28;
  uVar1 = 0x97e;
  FUN_10005c30(0x97e,puVar2);
  FUN_100d1790(uVar1,puVar2);
  local_8 = (uint)local_8._1_3_ << 8;
  FUN_1003fff0();
  ExceptionList = local_10;
  return;
}


// ==== 1015f257 Catch@1015f257

void Catch_1015f257(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1015f26b Catch@1015f26b

void Catch_1015f26b(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NConsoleWnd::ReceiveTutorialShowHtml");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1015f290 FUN_1015f290

void FUN_1015f290(char param_1,L2ParamStack *param_2)

{
  ushort *puVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  uint uStack_bc;
  FString local_ac [12];
  FString local_a0 [12];
  FString local_94 [16];
  undefined1 *local_84;
  void *local_80;
  undefined1 *puStack_7c;
  int local_78;
  FString local_74 [12];
  FString local_68 [12];
  FString local_5c [12];
  FString local_50 [12];
  FString local_44 [12];
  FString local_38 [16];
  undefined1 local_28 [12];
  FString local_1c [12];
  FString local_10 [12];
  
  puStack_7c = &LAB_1020f0f4;
  local_80 = ExceptionList;
  uStack_bc = DAT_103554c4 ^ (uint)local_74;
  local_84 = (undefined1 *)&uStack_bc;
  ExceptionList = &local_80;
  local_78 = 0;
  FUN_1003f970();
  local_78._0_1_ = 1;
  FString::FString(local_10,(ushort *)&DAT_102560c0);
  local_78._0_1_ = 2;
  FUN_10040090(local_10,param_1 != '\0');
  local_78._0_1_ = 1;
  FString::~FString(local_10);
  if (param_1 != '\0') {
    L2ParamStack::Restart(param_2);
    puVar1 = L2ParamStack::Top(param_2);
    FString::FString(local_ac,puVar1);
    local_78._0_1_ = 3;
    puVar1 = L2ParamStack::Top(param_2);
    FString::FString(local_94,puVar1);
    local_78._0_1_ = 4;
    puVar1 = L2ParamStack::Top(param_2);
    FString::FString(local_74,puVar1);
    local_78._0_1_ = 5;
    puVar1 = L2ParamStack::Top(param_2);
    FString::FString(local_5c,puVar1);
    local_78._0_1_ = 6;
    puVar1 = L2ParamStack::Top(param_2);
    FString::FString(local_44,puVar1);
    local_78._0_1_ = 7;
    puVar1 = L2ParamStack::Top(param_2);
    FString::FString(local_a0,puVar1);
    local_78._0_1_ = 8;
    puVar1 = L2ParamStack::Top(param_2);
    FString::FString(local_68,puVar1);
    local_78._0_1_ = 9;
    puVar1 = L2ParamStack::Top(param_2);
    FString::FString(local_38,puVar1);
    local_78._0_1_ = 10;
    puVar1 = L2ParamStack::Top(param_2);
    FString::FString(local_50,puVar1);
    local_78._0_1_ = 0xb;
    puVar1 = FString::operator*(local_ac);
    FString::FString(local_1c,puVar1);
    local_78._0_1_ = 0xc;
    FString::FString(local_10,(ushort *)L"Command1");
    local_78._0_1_ = 0xd;
    FUN_10040230(local_10,local_1c);
    local_78._0_1_ = 0xc;
    FString::~FString(local_10);
    local_78._0_1_ = 0xb;
    FString::~FString(local_1c);
    puVar1 = FString::operator*(local_94);
    FString::FString(local_10,puVar1);
    local_78._0_1_ = 0xe;
    FString::FString(local_1c,(ushort *)L"Command2");
    local_78._0_1_ = 0xf;
    FUN_10040230(local_1c,local_10);
    local_78._0_1_ = 0xe;
    FString::~FString(local_1c);
    local_78._0_1_ = 0xb;
    FString::~FString(local_10);
    puVar1 = FString::operator*(local_74);
    FString::FString(local_10,puVar1);
    local_78._0_1_ = 0x10;
    FString::FString(local_1c,(ushort *)L"Command3");
    local_78._0_1_ = 0x11;
    FUN_10040230(local_1c,local_10);
    local_78._0_1_ = 0x10;
    FString::~FString(local_1c);
    local_78._0_1_ = 0xb;
    FString::~FString(local_10);
    puVar1 = FString::operator*(local_5c);
    FString::FString(local_10,puVar1);
    local_78._0_1_ = 0x12;
    FString::FString(local_1c,(ushort *)L"Command4");
    local_78._0_1_ = 0x13;
    FUN_10040230(local_1c,local_10);
    local_78._0_1_ = 0x12;
    FString::~FString(local_1c);
    local_78._0_1_ = 0xb;
    FString::~FString(local_10);
    puVar1 = FString::operator*(local_44);
    FString::FString(local_10,puVar1);
    local_78._0_1_ = 0x14;
    FString::FString(local_1c,(ushort *)L"Command5");
    local_78._0_1_ = 0x15;
    FUN_10040230(local_1c,local_10);
    local_78._0_1_ = 0x14;
    FString::~FString(local_1c);
    local_78._0_1_ = 0xb;
    FString::~FString(local_10);
    puVar1 = FString::operator*(local_a0);
    FString::FString(local_10,puVar1);
    local_78._0_1_ = 0x16;
    FString::FString(local_1c,(ushort *)L"Command6");
    local_78._0_1_ = 0x17;
    FUN_10040230(local_1c,local_10);
    local_78._0_1_ = 0x16;
    FString::~FString(local_1c);
    local_78._0_1_ = 0xb;
    FString::~FString(local_10);
    puVar1 = FString::operator*(local_68);
    FString::FString(local_10,puVar1);
    local_78._0_1_ = 0x18;
    FString::FString(local_1c,(ushort *)L"Command7");
    local_78._0_1_ = 0x19;
    FUN_10040230(local_1c,local_10);
    local_78._0_1_ = 0x18;
    FString::~FString(local_1c);
    local_78._0_1_ = 0xb;
    FString::~FString(local_10);
    puVar1 = FString::operator*(local_38);
    FString::FString(local_10,puVar1);
    local_78._0_1_ = 0x1a;
    FString::FString(local_1c,(ushort *)L"Command8");
    local_78._0_1_ = 0x1b;
    FUN_10040230(local_1c,local_10);
    local_78._0_1_ = 0x1a;
    FString::~FString(local_1c);
    local_78._0_1_ = 0xb;
    FString::~FString(local_10);
    puVar1 = FString::operator*(local_50);
    FString::FString(local_10,puVar1);
    local_78._0_1_ = 0x1c;
    FString::FString(local_1c,(ushort *)L"Address");
    local_78._0_1_ = 0x1d;
    FUN_10040230(local_1c,local_10);
    local_78._0_1_ = 0x1c;
    FString::~FString(local_1c);
    local_78._0_1_ = 0xb;
    FString::~FString(local_10);
    local_78._0_1_ = 10;
    FString::~FString(local_50);
    local_78._0_1_ = 9;
    FString::~FString(local_38);
    local_78._0_1_ = 8;
    FString::~FString(local_68);
    local_78._0_1_ = 7;
    FString::~FString(local_a0);
    local_78._0_1_ = 6;
    FString::~FString(local_44);
    local_78._0_1_ = 5;
    FString::~FString(local_5c);
    local_78._0_1_ = 4;
    FString::~FString(local_74);
    local_78._0_1_ = 3;
    FString::~FString(local_94);
    local_78._0_1_ = 1;
    FString::~FString(local_ac);
  }
  puVar3 = local_28;
  uVar2 = 0x4b0;
  FUN_10005c30(0x4b0,puVar3);
  FUN_100d1790(uVar2,puVar3);
  local_78 = (uint)local_78._1_3_ << 8;
  FUN_1003fff0();
  ExceptionList = local_80;
  return;
}


// ==== 1015f75b Catch@1015f75b

void Catch_1015f75b(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + 0x48) = *(undefined4 *)(unaff_EBP + -0x14);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + 0x48,&DAT_102a47f0);
}


// ==== 1015f76f Catch@1015f76f

void Catch_1015f76f(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NConsoleWnd::ShowBoardPacket");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1015f790 FUN_1015f790

void FUN_1015f790(undefined4 param_1)

{
  undefined4 uVar1;
  undefined1 *puVar2;
  uint uStack_44;
  FString local_34 [12];
  undefined1 local_28 [20];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_1020f121;
  local_10 = ExceptionList;
  uStack_44 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_44;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_1003f970();
  local_8._0_1_ = 1;
  FString::FString(local_34,"QuestionID");
  local_8._0_1_ = 2;
  FUN_10040090(local_34,param_1);
  local_8._0_1_ = 1;
  FString::~FString(local_34);
  puVar2 = local_28;
  uVar1 = 0x5e6;
  FUN_10005c30(0x5e6,puVar2);
  FUN_100d1790(uVar1,puVar2);
  local_8 = (uint)local_8._1_3_ << 8;
  FUN_1003fff0();
  ExceptionList = local_10;
  return;
}


// ==== 1015f839 Catch@1015f839

void Catch_1015f839(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1015f84d Catch@1015f84d

void Catch_1015f84d(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NConsoleWnd::ReceiveTutorialShowQuestionMark");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1015f870 FUN_1015f870

void FUN_1015f870(void)

{
  undefined1 local_18 [12];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1020f148;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_1003f970(DAT_103554c4 ^ (uint)local_18);
  local_4 = 0;
  if (DAT_1035786c == 0) {
    FUN_10005270();
  }
  FUN_100d1790(0x988,local_18);
  local_4 = 0xffffffff;
  FUN_1003fff0();
  ExceptionList = local_c;
  return;
}


// ==== 1015f8f0 FUN_1015f8f0

void FUN_1015f8f0(int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  FString local_18 [12];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1020f182;
  local_c = ExceptionList;
  uVar1 = DAT_103554c4 ^ (uint)local_18;
  ExceptionList = &local_c;
  FString::FString(local_18,(ushort *)&DAT_1022f9f8);
  if (param_1 == 1) {
    local_4 = 0;
    if (DAT_1035786c == 0) {
      FUN_10005270(uVar1);
    }
    uVar2 = 0x442;
  }
  else {
    local_4 = 1;
    if (DAT_1035786c == 0) {
      FUN_10005270(uVar1);
    }
    uVar2 = 0x3f2;
  }
  FUN_100d1790(uVar2,local_18);
  local_4 = 0xffffffff;
  FString::~FString(local_18);
  ExceptionList = local_c;
  return;
}


// ==== 1015f9a0 FUN_1015f9a0

void FUN_1015f9a0(int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  FString local_18 [12];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1020f1b2;
  local_c = ExceptionList;
  uVar1 = DAT_103554c4 ^ (uint)local_18;
  ExceptionList = &local_c;
  FString::FString(local_18,(ushort *)&DAT_1022f9f8);
  if (param_1 == 1) {
    local_4 = 0;
    if (DAT_1035786c == 0) {
      FUN_10005270(uVar1);
    }
    uVar2 = 0x44c;
  }
  else {
    local_4 = 1;
    if (DAT_1035786c == 0) {
      FUN_10005270(uVar1);
    }
    uVar2 = 0x410;
  }
  FUN_100d1790(uVar2,local_18);
  local_4 = 0xffffffff;
  FString::~FString(local_18);
  ExceptionList = local_c;
  return;
}


// ==== 1015fa50 FUN_1015fa50

void FUN_1015fa50(undefined4 param_1,undefined4 param_2)

{
  undefined1 local_24 [12];
  FString local_18 [12];
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1020f1ea;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_1003f970(DAT_103554c4 ^ (uint)local_24);
  local_4 = 0;
  FString::FString(local_18,(ushort *)L"RemainTime");
  local_4._0_1_ = 1;
  FUN_10040090(local_18,param_1);
  local_4._0_1_ = 0;
  FString::~FString(local_18);
  FString::FString(local_18,(ushort *)L"MaxTime");
  local_4._0_1_ = 2;
  FUN_10040090(local_18,param_2);
  local_4 = (uint)local_4._1_3_ << 8;
  FString::~FString(local_18);
  if (DAT_1035786c == 0) {
    FUN_10005270();
  }
  FUN_100d1790(0x460,local_24);
  local_4 = 0xffffffff;
  FUN_1003fff0();
  ExceptionList = local_c;
  return;
}


// ==== 1015fb40 FUN_1015fb40

void FUN_1015fb40(void)

{
  uint uVar1;
  FString local_18 [12];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1020f219;
  local_c = ExceptionList;
  uVar1 = DAT_103554c4 ^ (uint)&stack0xffffffe4;
  ExceptionList = &local_c;
  FString::FString(local_18,(ushort *)&DAT_1022f9f8);
  local_4 = 0;
  if (DAT_1035786c == 0) {
    FUN_10005270(uVar1);
  }
  FUN_100d1790(0x46a,local_18);
  local_4 = 0xffffffff;
  FString::~FString(local_18);
  FUN_1014ed50(6);
  ExceptionList = local_c;
  return;
}


// ==== 1015fbd0 FUN_1015fbd0

void FUN_1015fbd0(void)

{
  uint uVar1;
  FString local_18 [12];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1020f249;
  local_c = ExceptionList;
  uVar1 = DAT_103554c4 ^ (uint)&stack0xffffffe4;
  ExceptionList = &local_c;
  FString::FString(local_18,(ushort *)&DAT_1022f9f8);
  local_4 = 0;
  if (DAT_1035786c == 0) {
    FUN_10005270(uVar1);
  }
  FUN_100d1790(0x46a,local_18);
  local_4 = 0xffffffff;
  FString::~FString(local_18);
  FUN_1014ed50(6);
  ExceptionList = local_c;
  return;
}


// ==== 1015fc60 FUN_1015fc60

void FUN_1015fc60(int param_1)

{
  undefined1 local_24 [12];
  FString local_18 [12];
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1020f281;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_1003f970(DAT_103554c4 ^ (uint)local_24);
  local_4 = 0;
  FString::FString(local_18,(ushort *)L"Show");
  local_4._0_1_ = 1;
  FUN_10040090(local_18,param_1 != 0);
  local_4 = (uint)local_4._1_3_ << 8;
  FString::~FString(local_18);
  if (DAT_1035786c == 0) {
    FUN_10005270();
  }
  FUN_100d1790(0x3fc,local_24);
  local_4 = 0xffffffff;
  FUN_1003fff0();
  ExceptionList = local_c;
  return;
}


// ==== 1015fd20 FUN_1015fd20

void FUN_1015fd20(void)

{
  uint uVar1;
  FString local_18 [12];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1020f2a9;
  local_c = ExceptionList;
  uVar1 = DAT_103554c4 ^ (uint)local_18;
  ExceptionList = &local_c;
  FString::FString(local_18,(ushort *)&DAT_1022f9f8);
  local_4 = 0;
  if (DAT_1035786c == 0) {
    FUN_10005270(uVar1);
  }
  FUN_100d1790(0xfa,local_18);
  local_4 = 0xffffffff;
  FString::~FString(local_18);
  ExceptionList = local_c;
  return;
}


// ==== 1015fdb0 FUN_1015fdb0

void FUN_1015fdb0(void)

{
  FString local_18 [12];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1020f2d9;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_101af060(DAT_103554c4 ^ (uint)local_18);
  FString::FString(local_18,(ushort *)&DAT_1022f9f8);
  local_4 = 0;
  if (DAT_1035786c == 0) {
    FUN_10005270();
  }
  FUN_100d1790(0x424,local_18);
  local_4 = 0xffffffff;
  FString::~FString(local_18);
  ExceptionList = local_c;
  return;
}


// ==== 1015fe40 FUN_1015fe40

void FUN_1015fe40(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  uint uStack_38;
  undefined1 local_28 [20];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  puStack_c = &LAB_1020f308;
  local_10 = ExceptionList;
  uStack_38 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_38;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_1003f970();
  local_8 = CONCAT31(local_8._1_3_,1);
  FUN_101aff30(param_1);
  iVar1 = FUN_10065fe0(param_1,local_28);
  if (iVar1 != 0) {
    puVar3 = local_28;
    uVar2 = 0x42e;
    FUN_10005c30(0x42e,puVar3);
    FUN_100d1790(uVar2,puVar3);
  }
  local_8 = local_8 & 0xffffff00;
  FUN_1003fff0();
  ExceptionList = local_10;
  return;
}


// ==== 1015fedf Catch@1015fedf

void Catch_1015fedf(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1015fef3 Catch@1015fef3

void Catch_1015fef3(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NConsoleWnd::AddPetInventoryItem");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1015ff10 FUN_1015ff10

void FUN_1015ff10(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  uint uStack_44;
  FString local_34 [12];
  undefined1 local_28 [20];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_1020f341;
  local_10 = ExceptionList;
  uStack_44 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_44;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_1003f970();
  local_8._0_1_ = 1;
  FUN_101b0050(param_1,param_2);
  iVar1 = FUN_10065fe0(param_2,local_28);
  if (iVar1 != 0) {
    FString::FString(local_34,(ushort *)L"WorkType");
    local_8._0_1_ = 2;
    FUN_10040090(local_34,param_1);
    local_8._0_1_ = 1;
    FString::~FString(local_34);
    puVar3 = local_28;
    uVar2 = 0x438;
    FUN_10005c30(0x438,puVar3);
    FUN_100d1790(uVar2,puVar3);
  }
  local_8 = (uint)local_8._1_3_ << 8;
  FUN_1003fff0();
  ExceptionList = local_10;
  return;
}


// ==== 1015ffdf Catch@1015ffdf

void Catch_1015ffdf(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1015fff3 Catch@1015fff3

void Catch_1015fff3(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NConsoleWnd::UpdatePetInventoryItem");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10160010 FUN_10160010

void FUN_10160010(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined1 *puVar2;
  uint uStack_68;
  FString local_58 [12];
  FString local_4c [12];
  FString local_40 [12];
  FString local_34 [12];
  undefined1 local_28 [20];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_1020f413;
  local_10 = ExceptionList;
  uStack_68 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_68;
  ExceptionList = &local_10;
  local_8 = 0;
  FString::FString(local_58,(ushort *)(param_1 + 1));
  local_8._0_1_ = 1;
  FString::FString(local_4c,(ushort *)(param_1 + 0xd));
  local_8._0_1_ = 2;
  FString::FString(local_40,(ushort *)(param_1 + 0x27));
  local_8._0_1_ = 3;
  FUN_1003f970();
  local_8._0_1_ = 4;
  FString::FString(local_34,(ushort *)L"ClanID");
  local_8._0_1_ = 5;
  FUN_10040090(local_34,*param_1);
  local_8._0_1_ = 4;
  FString::~FString(local_34);
  FString::FString(local_34,(ushort *)L"ClanType");
  local_8._0_1_ = 6;
  FUN_10040090(local_34,0);
  local_8._0_1_ = 4;
  FString::~FString(local_34);
  FString::FString(local_34,(ushort *)L"ClanName");
  local_8._0_1_ = 7;
  FUN_10040230(local_34,local_58);
  local_8._0_1_ = 4;
  FString::~FString(local_34);
  FString::FString(local_34,(ushort *)L"ClanMasterName");
  local_8._0_1_ = 8;
  FUN_10040230(local_34,local_4c);
  local_8._0_1_ = 4;
  FString::~FString(local_34);
  FString::FString(local_34,(ushort *)L"CrestID");
  local_8._0_1_ = 9;
  FUN_10040090(local_34,param_1[0x20]);
  local_8._0_1_ = 4;
  FString::~FString(local_34);
  FString::FString(local_34,(ushort *)L"SkillLevel");
  local_8._0_1_ = 10;
  FUN_10040090(local_34,param_1[0x19]);
  local_8._0_1_ = 4;
  FString::~FString(local_34);
  FString::FString(local_34,(ushort *)L"CastleID");
  local_8._0_1_ = 0xb;
  FUN_10040090(local_34,param_1[0x34]);
  local_8._0_1_ = 4;
  FString::~FString(local_34);
  FString::FString(local_34,(ushort *)L"AgitID");
  local_8._0_1_ = 0xc;
  FUN_10040090(local_34,param_1[0x35]);
  local_8._0_1_ = 4;
  FString::~FString(local_34);
  FString::FString(local_34,(ushort *)L"ClanRank");
  local_8._0_1_ = 0xd;
  FUN_10040090(local_34,param_1[0x1c]);
  local_8._0_1_ = 4;
  FString::~FString(local_34);
  FString::FString(local_34,(ushort *)L"ClanNameValue");
  local_8._0_1_ = 0xe;
  FUN_10040090(local_34,param_1[0x1d]);
  local_8._0_1_ = 4;
  FString::~FString(local_34);
  FString::FString(local_34,(ushort *)L"Status");
  local_8._0_1_ = 0xf;
  FUN_10040090(local_34,param_1[0x1e]);
  local_8._0_1_ = 4;
  FString::~FString(local_34);
  FString::FString(local_34,(ushort *)L"Guilty");
  local_8._0_1_ = 0x10;
  FUN_10040090(local_34,param_1[0x1f]);
  local_8._0_1_ = 4;
  FString::~FString(local_34);
  FString::FString(local_34,(ushort *)L"AllianceID");
  local_8._0_1_ = 0x11;
  FUN_10040090(local_34,param_1[0x26]);
  local_8._0_1_ = 4;
  FString::~FString(local_34);
  FString::FString(local_34,(ushort *)L"AllianceName");
  local_8._0_1_ = 0x12;
  FUN_10040230(local_34,local_40);
  local_8._0_1_ = 4;
  FString::~FString(local_34);
  FString::FString(local_34,(ushort *)L"AllianceCrestID");
  local_8._0_1_ = 0x13;
  FUN_10040090(local_34,param_1[0x33]);
  local_8._0_1_ = 4;
  FString::~FString(local_34);
  FString::FString(local_34,(ushort *)L"InWar");
  local_8._0_1_ = 0x14;
  FUN_10040090(local_34,param_1[0x36]);
  local_8._0_1_ = 4;
  FString::~FString(local_34);
  puVar2 = local_28;
  uVar1 = 0x94c;
  FUN_10005c30(0x94c,puVar2);
  FUN_100d1790(uVar1,puVar2);
  local_8._0_1_ = 3;
  FUN_1003fff0();
  local_8._0_1_ = 2;
  FString::~FString(local_40);
  local_8._0_1_ = 1;
  FString::~FString(local_4c);
  local_8 = (uint)local_8._1_3_ << 8;
  FString::~FString(local_58);
  ExceptionList = local_10;
  return;
}


// ==== 101603da Catch@101603da

void Catch_101603da(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 101603ee Catch@101603ee

void Catch_101603ee(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NConsoleWnd::GMViewReceivePledgeInfo");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10160410 FUN_10160410

void FUN_10160410(void)

{
  undefined4 uVar1;
  FString *pFVar2;
  uint uStack_38;
  FString local_28 [20];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_1020f439;
  local_10 = ExceptionList;
  uStack_38 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_38;
  ExceptionList = &local_10;
  local_8 = 0;
  FString::FString(local_28,(ushort *)&DAT_1022f9f8);
  local_8._0_1_ = 1;
  pFVar2 = local_28;
  uVar1 = 0x956;
  FUN_10005c30(0x956,pFVar2);
  FUN_100d1790(uVar1,pFVar2);
  local_8 = (uint)local_8._1_3_ << 8;
  FString::~FString(local_28);
  ExceptionList = local_10;
  return;
}


// ==== 1016048f Catch@1016048f

void Catch_1016048f(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 101604a3 Catch@101604a3

void Catch_101604a3(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NConsoleWnd::GMViewReceivePledgeMemberList");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101604c0 FUN_101604c0

void FUN_101604c0(L2ParamStack *param_1)

{
  ushort *puVar1;
  void *pvVar2;
  void *pvVar3;
  undefined4 uVar4;
  undefined1 *puVar5;
  uint uStack_5c;
  FString local_4c [12];
  FString local_40 [12];
  undefined1 local_34 [20];
  void *local_20;
  void *local_1c;
  void *local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_1020f4b0;
  local_10 = ExceptionList;
  uStack_5c = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_5c;
  ExceptionList = &local_10;
  local_8 = 0;
  FString::FString(local_40);
  local_8._0_1_ = 1;
  L2ParamStack::Restart(param_1);
  puVar1 = L2ParamStack::Top(param_1);
  FString::operator=(local_40,puVar1);
  pvVar2 = L2ParamStack::Top(param_1);
  local_18 = L2ParamStack::Top(param_1);
  local_1c = L2ParamStack::Top(param_1);
  local_20 = L2ParamStack::Top(param_1);
  pvVar3 = L2ParamStack::Top(param_1);
  FUN_1003f970();
  local_8._0_1_ = 2;
  FString::FString(local_4c,(ushort *)L"Name");
  local_8._0_1_ = 3;
  FUN_10040230(local_4c,local_40);
  local_8._0_1_ = 2;
  FString::~FString(local_4c);
  FString::FString(local_4c,(ushort *)L"Level");
  local_8._0_1_ = 4;
  FUN_10040090(local_4c,pvVar2);
  local_8._0_1_ = 2;
  FString::~FString(local_4c);
  FString::FString(local_4c,(ushort *)L"Class");
  local_8._0_1_ = 5;
  FUN_10040090(local_4c,local_18);
  local_8._0_1_ = 2;
  FString::~FString(local_4c);
  FString::FString(local_4c,(ushort *)L"Gender");
  local_8._0_1_ = 6;
  FUN_10040090(local_4c,local_1c);
  local_8._0_1_ = 2;
  FString::~FString(local_4c);
  FString::FString(local_4c,(ushort *)L"Race");
  local_8._0_1_ = 7;
  FUN_10040090(local_4c,local_20);
  local_8._0_1_ = 2;
  FString::~FString(local_4c);
  FString::FString(local_4c,(ushort *)&DAT_1025ae84);
  local_8._0_1_ = 8;
  FUN_10040090(local_4c,pvVar3);
  local_8._0_1_ = 2;
  FString::~FString(local_4c);
  FString::FString(local_4c,(ushort *)L"ClanType");
  local_8._0_1_ = 9;
  FUN_10040090(local_4c,0);
  local_8._0_1_ = 2;
  FString::~FString(local_4c);
  puVar5 = local_34;
  uVar4 = 0x960;
  FUN_10005c30(0x960,puVar5);
  FUN_100d1790(uVar4,puVar5);
  local_8._0_1_ = 1;
  FUN_1003fff0();
  local_8 = (uint)local_8._1_3_ << 8;
  FString::~FString(local_40);
  ExceptionList = local_10;
  return;
}


// ==== 101606d3 Catch@101606d3

void Catch_101606d3(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x20) = *(undefined4 *)(unaff_EBP + -0x24);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x20,&DAT_102a47f0);
}


// ==== 101606e7 Catch@101606e7

void Catch_101606e7(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NConsoleWnd::GMViewAddPledgeMember");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10160710 FUN_10160710

void FUN_10160710(void)

{
  undefined4 uVar1;
  FString *pFVar2;
  uint uStack_38;
  FString local_28 [20];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_1020f4d9;
  local_10 = ExceptionList;
  uStack_38 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_38;
  ExceptionList = &local_10;
  local_8 = 0;
  FString::FString(local_28,(ushort *)&DAT_1022f9f8);
  local_8._0_1_ = 1;
  pFVar2 = local_28;
  uVar1 = 0x8fc;
  FUN_10005c30(0x8fc,pFVar2);
  FUN_100d1790(uVar1,pFVar2);
  local_8 = (uint)local_8._1_3_ << 8;
  FString::~FString(local_28);
  ExceptionList = local_10;
  return;
}


// ==== 1016078f Catch@1016078f

void Catch_1016078f(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 101607a3 Catch@101607a3

void Catch_101607a3(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NConsoleWnd::GMViewShowSkillWnd");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101607c0 FUN_101607c0

void FUN_101607c0(void)

{
  undefined4 uVar1;
  FString *pFVar2;
  uint uStack_38;
  FString local_28 [20];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_1020f509;
  local_10 = ExceptionList;
  uStack_38 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_38;
  ExceptionList = &local_10;
  local_8 = 0;
  FString::FString(local_28,(ushort *)&DAT_1022f9f8);
  local_8._0_1_ = 1;
  pFVar2 = local_28;
  uVar1 = 0x910;
  FUN_10005c30(0x910,pFVar2);
  FUN_100d1790(uVar1,pFVar2);
  local_8 = (uint)local_8._1_3_ << 8;
  FString::~FString(local_28);
  ExceptionList = local_10;
  return;
}


// ==== 1016083f Catch@1016083f

void Catch_1016083f(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10160853 Catch@10160853

void Catch_10160853(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NConsoleWnd::GMViewReceiveQuestList");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10160870 FUN_10160870

void FUN_10160870(void)

{
  undefined4 uVar1;
  FString *pFVar2;
  uint uStack_38;
  FString local_28 [20];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_1020f539;
  local_10 = ExceptionList;
  uStack_38 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_38;
  ExceptionList = &local_10;
  local_8 = 0;
  FString::FString(local_28,(ushort *)&DAT_1022f9f8);
  local_8._0_1_ = 1;
  pFVar2 = local_28;
  uVar1 = 0x924;
  FUN_10005c30(0x924,pFVar2);
  FUN_100d1790(uVar1,pFVar2);
  local_8 = (uint)local_8._1_3_ << 8;
  FString::~FString(local_28);
  ExceptionList = local_10;
  return;
}


// ==== 101608ef Catch@101608ef

void Catch_101608ef(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10160903 Catch@10160903

void Catch_10160903(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NConsoleWnd::GMViewReceiveQuestListEnd");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10160920 FUN_10160920

void FUN_10160920(int param_1)

{
  undefined4 uVar1;
  undefined1 *puVar2;
  uint uStack_44;
  FString local_34 [12];
  undefined1 local_28 [20];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_1020f57a;
  local_10 = ExceptionList;
  uStack_44 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_44;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_1003f970();
  local_8._0_1_ = 1;
  FString::FString(local_34,(ushort *)L"ClassID");
  local_8._0_1_ = 2;
  FUN_10040090(local_34,*(undefined4 *)(param_1 + 8));
  local_8._0_1_ = 1;
  FString::~FString(local_34);
  FString::FString(local_34,(ushort *)L"ItemCount");
  local_8._0_1_ = 3;
  FUN_10040090(local_34,*(undefined4 *)(param_1 + 0xc));
  local_8._0_1_ = 1;
  FString::~FString(local_34);
  puVar2 = local_28;
  uVar1 = 0x92e;
  FUN_10005c30(0x92e,puVar2);
  FUN_100d1790(uVar1,puVar2);
  local_8 = (uint)local_8._1_3_ << 8;
  FUN_1003fff0();
  ExceptionList = local_10;
  return;
}


// ==== 101609fa Catch@101609fa

void Catch_101609fa(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10160a0e Catch@10160a0e

void Catch_10160a0e(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NConsoleWnd::GMViewAddQuestItem");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10160a30 FUN_10160a30

void FUN_10160a30(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined1 *puVar2;
  uint uStack_44;
  FString local_34 [12];
  undefined1 local_28 [20];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_1020f5b1;
  local_10 = ExceptionList;
  uStack_44 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_44;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_1003f970();
  local_8._0_1_ = 1;
  FString::FString(local_34,(ushort *)L"InvenLimit");
  local_8._0_1_ = 2;
  FUN_10040090(local_34,param_2);
  local_8._0_1_ = 1;
  FString::~FString(local_34);
  puVar2 = local_28;
  uVar1 = 0x962;
  FUN_10005c30(0x962,puVar2);
  FUN_100d1790(uVar1,puVar2);
  local_8 = (uint)local_8._1_3_ << 8;
  FUN_1003fff0();
  ExceptionList = local_10;
  return;
}


// ==== 10160ad9 Catch@10160ad9

void Catch_10160ad9(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10160aed Catch@10160aed

void Catch_10160aed(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NConsoleWnd::GMViewReceiveItemList");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10160b10 FUN_10160b10

void FUN_10160b10(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  uint uStack_38;
  undefined1 local_28 [20];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  puStack_c = &LAB_1020f5d8;
  local_10 = ExceptionList;
  uStack_38 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_38;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_1003f970();
  local_8 = CONCAT31(local_8._1_3_,1);
  iVar1 = FUN_10065fe0(param_1,local_28);
  if (iVar1 != 0) {
    puVar3 = local_28;
    uVar2 = 0x961;
    FUN_10005c30(0x961,puVar3);
    FUN_100d1790(uVar2,puVar3);
  }
  local_8 = local_8 & 0xffffff00;
  FUN_1003fff0();
  ExceptionList = local_10;
  return;
}


// ==== 10160b9e Catch@10160b9e

void Catch_10160b9e(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10160bb2 Catch@10160bb2

void Catch_10160bb2(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NConsoleWnd::GMViewAddInventoryItem");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10160bd0 FUN_10160bd0

void FUN_10160bd0(undefined4 param_1)

{
  undefined4 uVar1;
  undefined1 *puVar2;
  uint uStack_50;
  FString local_40 [12];
  FString local_34 [12];
  undefined1 local_28 [20];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_1020f62c;
  local_10 = ExceptionList;
  uStack_50 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_50;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_1003f970();
  local_8._0_1_ = 1;
  FString::FString(local_34,(ushort *)L"category");
  local_8._0_1_ = 2;
  FUN_10040090(local_34,0);
  local_8._0_1_ = 1;
  FString::~FString(local_34);
  FString::FString(local_40,(ushort *)L"withdraw");
  local_8._0_1_ = 3;
  FString::FString(local_34,(ushort *)L"type");
  local_8._0_1_ = 4;
  FUN_10040230(local_34,local_40);
  local_8._0_1_ = 3;
  FString::~FString(local_34);
  local_8._0_1_ = 1;
  FString::~FString(local_40);
  FString::FString(local_40,(ushort *)L"adena");
  local_8._0_1_ = 5;
  FUN_10040090(local_40,param_1);
  local_8._0_1_ = 1;
  FString::~FString(local_40);
  puVar2 = local_28;
  uVar1 = 0x938;
  FUN_10005c30(0x938,puVar2);
  FUN_100d1790(uVar1,puVar2);
  local_8 = (uint)local_8._1_3_ << 8;
  FUN_1003fff0();
  ExceptionList = local_10;
  return;
}


// ==== 10160cf2 Catch@10160cf2

void Catch_10160cf2(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10160d06 Catch@10160d06

void Catch_10160d06(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NConsoleWnd::GMViewReceiveWithdrawPacket");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10160d30 FUN_10160d30

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

void FUN_10160d30(short *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  ushort *puVar4;
  undefined4 uVar5;
  undefined1 *puVar6;
  uint uStack_1d24;
  undefined1 local_1d10 [12];
  int local_1d04;
  undefined1 *local_1cfc;
  void *local_1cf8;
  undefined1 *puStack_1cf4;
  uint local_1cf0;
  ushort local_1cec [256];
  ushort local_1aec [256];
  ushort local_18ec [768];
  ushort local_12ec [2318];
  int local_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  int local_c4;
  undefined4 local_c0;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  short local_40;
  undefined4 local_3c;
  int local_38;
  undefined4 local_34;
  uint local_8;
  
  puStack_1cf4 = &LAB_1020f658;
  local_1cf8 = ExceptionList;
  uStack_1d24 = DAT_103554c4 ^ (uint)local_1cec;
  local_1cfc = (undefined1 *)&uStack_1d24;
  ExceptionList = &local_1cf8;
  local_1cf0 = 0;
  local_8 = uStack_1d24;
  FUN_1002be90();
  piVar1 = (int *)(param_1 + 4);
  iVar2 = FUN_10187a60(piVar1);
  if ((-1 < *piVar1) && (iVar2 != 0)) {
    FUN_1003f970();
    local_1cf0 = CONCAT31(local_1cf0._1_3_,1);
    iVar3 = FUN_10065fe0(param_1,local_1d10);
    if (iVar3 != 0) {
      puVar6 = local_1d10;
      uVar5 = 0x942;
      FUN_10005c30(0x942,puVar6);
      FUN_100d1790(uVar5,puVar6);
    }
    local_1d04 = *(int *)(iVar2 + 4);
    puVar4 = FL2GameData::GetItemName((FL2GameData *)GL2GameData_exref,*piVar1);
    appStrcpy(local_1cec,puVar4);
    puVar4 = FL2GameData::GetItemAdditionalName((FL2GameData *)GL2GameData_exref,*piVar1);
    appStrcpy(local_1aec,puVar4);
    puVar4 = L2FName::operator*((L2FName *)(iVar2 + 0x3c));
    appStrcpy(local_18ec,puVar4);
    puVar4 = FL2GameData::GetItemDescription((FL2GameData *)GL2GameData_exref,*piVar1);
    appStrcpy(local_12ec,puVar4);
    local_d0 = (int)*param_1;
    local_c8 = *(undefined4 *)(param_1 + 2);
    local_c4 = *piVar1;
    local_c0 = *(undefined4 *)(param_1 + 6);
    local_b4 = *(undefined4 *)(param_1 + 0xc);
    local_64 = *(undefined4 *)(param_1 + 0x10);
    local_40 = param_1[0xe];
    local_68 = *(undefined4 *)(param_1 + 0x12);
    local_38 = (int)param_1[0xf];
    local_34 = *(undefined4 *)(param_1 + 0x16);
    if (local_1d04 == 0) {
      local_b0 = *(undefined4 *)(iVar2 + 0xc4);
      local_ac = *(undefined4 *)(iVar2 + 200);
      local_a8 = *(undefined4 *)(iVar2 + 0x130);
      local_a4 = *(undefined4 *)(iVar2 + 0x128);
      local_a0 = *(undefined4 *)(iVar2 + 300);
      local_94 = *(undefined4 *)(iVar2 + 0x144);
      local_90 = *(undefined4 *)(iVar2 + 0x148);
      local_8c = *(undefined4 *)(iVar2 + 0xc0);
      local_88 = *(undefined4 *)(iVar2 + 0x134);
      local_84 = *(undefined4 *)(iVar2 + 0x124);
      local_80 = *(undefined4 *)(iVar2 + 0x138);
      local_7c = *(undefined4 *)(iVar2 + 0x13c);
      local_78 = *(undefined4 *)(iVar2 + 0x14c);
      local_74 = *(undefined4 *)(iVar2 + 0x150);
      local_6c = *(undefined4 *)(iVar2 + 0x140);
    }
    else if (local_1d04 == 1) {
      local_b0 = *(undefined4 *)(iVar2 + 0xc4);
      local_ac = *(undefined4 *)(iVar2 + 200);
      local_8c = *(undefined4 *)(iVar2 + 0xc0);
      local_88 = *(undefined4 *)(iVar2 + 0x5e8);
      local_70 = *(undefined4 *)(iVar2 + 0x5e4);
      local_6c = *(undefined4 *)(iVar2 + 0x5ec);
      local_9c = *(undefined4 *)(iVar2 + 0x5f0);
      local_98 = *(undefined4 *)(iVar2 + 0x5f4);
    }
    else if (local_1d04 == 2) {
      local_b0 = *(undefined4 *)(iVar2 + 0xc4);
      local_ac = *(undefined4 *)(iVar2 + 200);
      local_8c = *(undefined4 *)(iVar2 + 0xc0);
      local_88 = *(undefined4 *)(iVar2 + 0x104);
      local_3c = *(undefined4 *)(iVar2 + 0xfc);
      local_cc = *(undefined4 *)(iVar2 + 0x100);
    }
    local_1cf0 = local_1cf0 & 0xffffff00;
    FUN_1003fff0();
    local_1cf0 = 0xffffffff;
  }
  ExceptionList = local_1cf8;
  __security_check_cookie(local_8 ^ (uint)local_1cec);
  return;
}


// ==== 10161069 Catch@10161069

void Catch_10161069(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x28);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1016107d Catch@1016107d

void Catch_1016107d(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NConsoleWnd::GMViewAddWithdrawItem");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101610a0 FUN_101610a0

void FUN_101610a0(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  uint *puVar1;
  int *in_ECX;
  undefined4 uVar2;
  float *pfVar3;
  undefined1 *puVar4;
  uint uStack_44;
  float local_34;
  float local_30;
  float local_2c;
  undefined1 local_28 [20];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_1020f6b5;
  local_10 = ExceptionList;
  uStack_44 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_44;
  ExceptionList = &local_10;
  local_8 = 0;
  if (param_1 == 0) {
    local_14 = (undefined1 *)&uStack_44;
    (**(code **)(*in_ECX + 0x684))(1);
    local_34 = (float)param_3;
    local_30 = (float)param_4;
    local_2c = (float)param_5;
    (**(code **)(*in_ECX + 0x6a4))(local_34,local_30,local_2c);
    puVar1 = (uint *)local_14;
  }
  else {
    puVar1 = &uStack_44;
    if (param_1 == 2) {
      (**(code **)(*in_ECX + 0x684))(0);
      puVar1 = (uint *)local_14;
    }
  }
  local_14 = (undefined1 *)puVar1;
  FUN_1003f970();
  local_8._0_1_ = 1;
  FString::FString((FString *)&local_34,(ushort *)&DAT_1024d1bc);
  local_8._0_1_ = 2;
  FUN_10040090(&local_34,param_3);
  local_8._0_1_ = 1;
  FString::~FString((FString *)&local_34);
  FString::FString((FString *)&local_34,(ushort *)&DAT_1024d1b8);
  local_8._0_1_ = 3;
  FUN_10040090(&local_34,param_4);
  local_8._0_1_ = 1;
  FString::~FString((FString *)&local_34);
  FString::FString((FString *)&local_34,(ushort *)&DAT_10284e14);
  local_8._0_1_ = 4;
  FUN_10040090(&local_34,param_5);
  local_8._0_1_ = 1;
  FString::~FString((FString *)&local_34);
  if ((param_2 == 0) || (param_2 == 2)) {
    if (param_1 == 0) {
      uVar2 = 0x6c2;
    }
    else {
      if (param_1 != 1) {
        if (param_1 == 2) {
          FString::FString((FString *)&local_34,(ushort *)&DAT_1022f9f8);
          local_8._0_1_ = 5;
          pfVar3 = &local_34;
          uVar2 = 0x6d6;
          FUN_10005c30(0x6d6,pfVar3);
          FUN_100d1790(uVar2,pfVar3);
          local_8._0_1_ = 1;
          FString::~FString((FString *)&local_34);
        }
        goto LAB_1016123f;
      }
      uVar2 = 0x6cc;
    }
    puVar4 = local_28;
    FUN_10005c30(uVar2,puVar4);
    FUN_100d1790(uVar2,puVar4);
  }
LAB_1016123f:
  if ((param_2 == 1) || (param_2 == 2)) {
    if (param_1 == 0) {
      uVar2 = 0x6fe;
    }
    else {
      if (param_1 != 1) {
        if (param_1 == 2) {
          FString::FString((FString *)&local_34,(ushort *)&DAT_1022f9f8);
          local_8._0_1_ = 6;
          pfVar3 = &local_34;
          uVar2 = 0x712;
          FUN_10005c30(0x712,pfVar3);
          FUN_100d1790(uVar2,pfVar3);
          local_8._0_1_ = 1;
          FString::~FString((FString *)&local_34);
        }
        goto LAB_101612ac;
      }
      uVar2 = 0x708;
    }
    puVar4 = local_28;
    FUN_10005c30(uVar2,puVar4);
    FUN_100d1790(uVar2,puVar4);
  }
LAB_101612ac:
  local_8 = (uint)local_8._1_3_ << 8;
  FUN_1003fff0();
  ExceptionList = local_10;
  return;
}


// ==== 101612d4 Catch@101612d4

void Catch_101612d4(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 101612e8 Catch@101612e8

void Catch_101612e8(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NConsoleWnd::ReceiveShowRadar");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10161310 FUN_10161310

void FUN_10161310(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined1 *puVar2;
  uint uStack_44;
  FString local_34 [12];
  undefined1 local_28 [20];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_1020f6f3;
  local_10 = ExceptionList;
  uStack_44 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_44;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_1003f970();
  local_8._0_1_ = 1;
  FString::FString(local_34,(ushort *)&DAT_1024d1bc);
  local_8._0_1_ = 2;
  FUN_10040090(local_34,param_1);
  local_8._0_1_ = 1;
  FString::~FString(local_34);
  FString::FString(local_34,(ushort *)&DAT_1024d1b8);
  local_8._0_1_ = 3;
  FUN_10040090(local_34,param_2);
  local_8._0_1_ = 1;
  FString::~FString(local_34);
  FString::FString(local_34,(ushort *)&DAT_10284e14);
  local_8._0_1_ = 4;
  FUN_10040090(local_34,param_3);
  local_8._0_1_ = 1;
  FString::~FString(local_34);
  puVar2 = local_28;
  uVar1 = 0x708;
  FUN_10005c30(0x708,puVar2);
  FUN_100d1790(uVar1,puVar2);
  local_8 = (uint)local_8._1_3_ << 8;
  FUN_1003fff0();
  ExceptionList = local_10;
  return;
}


// ==== 10161415 Catch@10161415

void Catch_10161415(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10161429 Catch@10161429

void Catch_10161429(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NConsoleWnd::ReceiveDeleteRadar");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10161450 FUN_10161450

void FUN_10161450(void)

{
  undefined4 uVar1;
  FString *pFVar2;
  uint uStack_38;
  FString local_28 [20];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_1020f719;
  local_10 = ExceptionList;
  uStack_38 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_38;
  ExceptionList = &local_10;
  local_8 = 0;
  FString::FString(local_28,(ushort *)&DAT_1022f9f8);
  local_8._0_1_ = 1;
  pFVar2 = local_28;
  uVar1 = 0x730;
  FUN_10005c30(0x730,pFVar2);
  FUN_100d1790(uVar1,pFVar2);
  local_8 = (uint)local_8._1_3_ << 8;
  FString::~FString(local_28);
  ExceptionList = local_10;
  return;
}


// ==== 101614cf Catch@101614cf

void Catch_101614cf(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 101614e3 Catch@101614e3

void Catch_101614e3(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NConsoleWnd::ChangeMap");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10161500 FUN_10161500

void FUN_10161500(int *param_1)

{
  int iVar1;
  int iVar2;
  FString *pFVar3;
  ushort *puVar4;
  undefined4 uVar5;
  undefined1 *puVar6;
  uint uStack_78;
  FString local_68 [12];
  FString local_5c [12];
  FString local_50 [12];
  FString local_44 [12];
  FString local_38 [12];
  undefined1 local_2c [20];
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  puStack_c = &LAB_1020f77e;
  local_10 = ExceptionList;
  uStack_78 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_78;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_1003f970();
  local_8._0_1_ = 1;
  FString::FString(local_38,(ushort *)&DAT_10284ef0);
  local_8._0_1_ = 2;
  FUN_10040090(local_38,param_1[1]);
  local_8 = CONCAT31(local_8._1_3_,1);
  FString::~FString(local_38);
  local_18 = 0;
  while (iVar2 = local_18, local_18 < param_1[1]) {
    iVar1 = *(int *)(*param_1 + local_18 * 4);
    pFVar3 = (FString *)FString::Printf((ushort *)local_5c,L"ID%d",local_18);
    local_8._0_1_ = 3;
    puVar4 = FString::operator*(pFVar3);
    FString::FString(local_38,puVar4);
    local_8._0_1_ = 4;
    FUN_10040090(local_38,iVar1);
    local_8._0_1_ = 3;
    FString::~FString(local_38);
    local_8._0_1_ = 1;
    FString::~FString(local_5c);
    puVar4 = FL2GameData::GetItemName((FL2GameData *)GL2GameData_exref,iVar1);
    FString::FString(local_50,puVar4);
    local_8._0_1_ = 5;
    pFVar3 = (FString *)FString::Printf((ushort *)local_68,L"NAME%d",iVar2);
    local_8._0_1_ = 6;
    puVar4 = FString::operator*(pFVar3);
    FString::FString(local_44,puVar4);
    local_8._0_1_ = 7;
    FUN_10040230(local_44,local_50);
    local_8._0_1_ = 6;
    FString::~FString(local_44);
    local_8._0_1_ = 5;
    FString::~FString(local_68);
    local_8 = CONCAT31(local_8._1_3_,1);
    FString::~FString(local_50);
    local_18 = iVar2 + 1;
  }
  puVar6 = local_2c;
  uVar5 = 0x73a;
  FUN_10005c30(0x73a,puVar6);
  FUN_100d1790(uVar5,puVar6);
  local_8 = local_8 & 0xffffff00;
  FUN_1003fff0();
  ExceptionList = local_10;
  return;
}


// ==== 1016169a Catch@1016169a

void Catch_1016169a(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 101616ae Catch@101616ae

void Catch_101616ae(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NConsoleWnd::ReceiveCursedWeaponList");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101616d0 FUN_101616d0

void FUN_101616d0(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  FString *pFVar3;
  ushort *puVar4;
  undefined4 uVar5;
  undefined1 *puVar6;
  uint uStack_d8;
  FString local_c8 [12];
  FString local_bc [12];
  FString local_b0 [12];
  FString local_a4 [12];
  FString local_98 [12];
  FString local_8c [12];
  undefined1 *local_80;
  void *local_7c;
  undefined1 *puStack_78;
  uint local_74;
  FString local_70 [12];
  FString local_64 [12];
  FString local_58 [12];
  FString local_4c [16];
  FString local_3c [12];
  FString local_30 [12];
  FString local_24 [12];
  int local_18;
  undefined1 local_10 [12];
  
  puStack_78 = &LAB_1020f826;
  local_7c = ExceptionList;
  uStack_d8 = DAT_103554c4 ^ (uint)local_70;
  local_80 = (undefined1 *)&uStack_d8;
  ExceptionList = &local_7c;
  local_74 = 0;
  FUN_1003f970();
  local_74._0_1_ = 1;
  FString::FString(local_24,(ushort *)&DAT_10284ef0);
  local_74._0_1_ = 2;
  FUN_10040090(local_24,param_1[1]);
  local_74 = CONCAT31(local_74._1_3_,1);
  FString::~FString(local_24);
  local_18 = 0;
  while (iVar2 = local_18, local_18 < param_1[1]) {
    iVar1 = *(int *)(*param_1 + local_18 * 4);
    pFVar3 = (FString *)FString::Printf((ushort *)local_8c,L"ID%d",local_18);
    local_74._0_1_ = 3;
    puVar4 = FString::operator*(pFVar3);
    FString::FString(local_24,puVar4);
    local_74._0_1_ = 4;
    FUN_10040090(local_24,iVar1);
    local_74._0_1_ = 3;
    FString::~FString(local_24);
    local_74._0_1_ = 1;
    FString::~FString(local_8c);
    puVar4 = FL2GameData::GetItemName((FL2GameData *)GL2GameData_exref,iVar1);
    FString::FString(local_4c,puVar4);
    local_74._0_1_ = 5;
    pFVar3 = (FString *)FString::Printf((ushort *)local_a4,L"NAME%d",iVar2);
    local_74._0_1_ = 6;
    puVar4 = FString::operator*(pFVar3);
    FString::FString(local_70,puVar4);
    local_74._0_1_ = 7;
    FUN_10040230(local_70,local_4c);
    local_74._0_1_ = 6;
    FString::~FString(local_70);
    local_74._0_1_ = 5;
    FString::~FString(local_a4);
    local_74._0_1_ = 1;
    FString::~FString(local_4c);
    pFVar3 = (FString *)FString::Printf((ushort *)local_bc,L"ISOWNED%d",iVar2);
    local_74._0_1_ = 8;
    puVar4 = FString::operator*(pFVar3);
    FString::FString(local_64,puVar4);
    local_74._0_1_ = 9;
    FUN_10040090(local_64,*(undefined4 *)(*param_2 + iVar2 * 4));
    local_74._0_1_ = 8;
    FString::~FString(local_64);
    local_74._0_1_ = 1;
    FString::~FString(local_bc);
    pFVar3 = (FString *)FString::Printf((ushort *)local_98,&DAT_10284f5c,iVar2);
    local_74._0_1_ = 10;
    puVar4 = FString::operator*(pFVar3);
    FString::FString(local_30,puVar4);
    local_74._0_1_ = 0xb;
    uVar5 = FUN_101c19e0();
    FUN_10040090(local_30,uVar5);
    local_74._0_1_ = 10;
    FString::~FString(local_30);
    local_74._0_1_ = 1;
    FString::~FString(local_98);
    pFVar3 = (FString *)FString::Printf((ushort *)local_b0,&DAT_10284f54,iVar2);
    local_74._0_1_ = 0xc;
    puVar4 = FString::operator*(pFVar3);
    FString::FString(local_58,puVar4);
    local_74._0_1_ = 0xd;
    uVar5 = FUN_101c19e0();
    FUN_10040090(local_58,uVar5);
    local_74._0_1_ = 0xc;
    FString::~FString(local_58);
    local_74._0_1_ = 1;
    FString::~FString(local_b0);
    pFVar3 = (FString *)FString::Printf((ushort *)local_c8,&DAT_10284f4c,iVar2);
    local_74._0_1_ = 0xe;
    puVar4 = FString::operator*(pFVar3);
    FString::FString(local_3c,puVar4);
    local_74._0_1_ = 0xf;
    uVar5 = FUN_101c19e0();
    FUN_10040090(local_3c,uVar5);
    local_74._0_1_ = 0xe;
    FString::~FString(local_3c);
    local_74 = CONCAT31(local_74._1_3_,1);
    FString::~FString(local_c8);
    local_18 = iVar2 + 1;
  }
  puVar6 = local_10;
  uVar5 = 0x744;
  FUN_10005c30(0x744,puVar6);
  FUN_100d1790(uVar5,puVar6);
  local_74 = local_74 & 0xffffff00;
  FUN_1003fff0();
  ExceptionList = local_7c;
  return;
}


// ==== 101619ef Catch@101619ef

void Catch_101619ef(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + 0x5c) = *(undefined4 *)(unaff_EBP + 0x30);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + 0x5c,&DAT_102a47f0);
}


// ==== 10161a03 Catch@10161a03

void Catch_10161a03(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NConsoleWnd::ReceiveCursedWeaponLocation");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10161a20 FUN_10161a20

void FUN_10161a20(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined1 *puVar2;
  uint uStack_44;
  FString local_34 [12];
  undefined1 local_28 [20];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_1020f86a;
  local_10 = ExceptionList;
  uStack_44 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_44;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_1003f970();
  local_8._0_1_ = 1;
  FString::FString(local_34,(ushort *)L"NewWidth");
  local_8._0_1_ = 2;
  FUN_10040090(local_34,param_1);
  local_8._0_1_ = 1;
  FString::~FString(local_34);
  FString::FString(local_34,(ushort *)L"NewHeight");
  local_8._0_1_ = 3;
  FUN_10040090(local_34,param_2);
  local_8._0_1_ = 1;
  FString::~FString(local_34);
  puVar2 = local_28;
  uVar1 = 0xb54;
  FUN_10005c30(0xb54,puVar2);
  FUN_100d1790(uVar1,puVar2);
  local_8 = (uint)local_8._1_3_ << 8;
  FUN_1003fff0();
  ExceptionList = local_10;
  return;
}


// ==== 10161af7 Catch@10161af7

void Catch_10161af7(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10161b0b Catch@10161b0b

void Catch_10161b0b(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NConsoleWnd::NotifyResolutionChanged");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10161b30 FUN_10161b30

void FUN_10161b30(void)

{
  undefined4 uVar1;
  FString *pFVar2;
  uint uStack_38;
  FString local_28 [20];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_1020f899;
  local_10 = ExceptionList;
  uStack_38 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_38;
  ExceptionList = &local_10;
  local_8 = 0;
  FString::FString(local_28,(ushort *)&DAT_1022f9f8);
  local_8._0_1_ = 1;
  pFVar2 = local_28;
  uVar1 = 3000;
  FUN_10005c30(3000,pFVar2);
  FUN_100d1790(uVar1,pFVar2);
  local_8 = (uint)local_8._1_3_ << 8;
  FString::~FString(local_28);
  ExceptionList = local_10;
  return;
}


// ==== 10161baf Catch@10161baf

void Catch_10161baf(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10161bc3 Catch@10161bc3

void Catch_10161bc3(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NConsoleWnd::ReceiveShowPlaySceneInterface");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10161be0 FUN_10161be0

void FUN_10161be0(void)

{
  undefined4 uVar1;
  FString *pFVar2;
  uint uStack_38;
  FString local_28 [20];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_1020f8c9;
  local_10 = ExceptionList;
  uStack_38 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_38;
  ExceptionList = &local_10;
  local_8 = 0;
  FString::FString(local_28,(ushort *)&DAT_1022f9f8);
  local_8._0_1_ = 1;
  pFVar2 = local_28;
  uVar1 = 0xac8;
  FUN_10005c30(0xac8,pFVar2);
  FUN_100d1790(uVar1,pFVar2);
  local_8 = (uint)local_8._1_3_ << 8;
  FString::~FString(local_28);
  ExceptionList = local_10;
  return;
}


// ==== 10161c5f Catch@10161c5f

void Catch_10161c5f(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10161c73 Catch@10161c73

void Catch_10161c73(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NConsoleWnd::ReceiveShowRefineryInterface");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10161c90 FUN_10161c90

void FUN_10161c90(void)

{
  undefined4 uVar1;
  FString *pFVar2;
  uint uStack_38;
  FString local_28 [20];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_1020f8f9;
  local_10 = ExceptionList;
  uStack_38 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_38;
  ExceptionList = &local_10;
  local_8 = 0;
  FString::FString(local_28,(ushort *)&DAT_1022f9f8);
  local_8._0_1_ = 1;
  pFVar2 = local_28;
  uVar1 = 0xafa;
  FUN_10005c30(0xafa,pFVar2);
  FUN_100d1790(uVar1,pFVar2);
  local_8 = (uint)local_8._1_3_ << 8;
  FString::~FString(local_28);
  ExceptionList = local_10;
  return;
}


// ==== 10161d0f Catch@10161d0f

void Catch_10161d0f(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10161d23 Catch@10161d23

void Catch_10161d23(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NConsoleWnd::ReceiveShowRefineryCancelInterface");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10161d40 FUN_10161d40

void FUN_10161d40(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined1 *puVar2;
  uint uStack_44;
  FString local_34 [12];
  undefined1 local_28 [20];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_1020f943;
  local_10 = ExceptionList;
  uStack_44 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_44;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_1003f970();
  local_8._0_1_ = 1;
  FString::FString(local_34,(ushort *)L"TargetItemServerID");
  local_8._0_1_ = 2;
  FUN_10040090(local_34,param_1);
  local_8._0_1_ = 1;
  FString::~FString(local_34);
  FString::FString(local_34,(ushort *)L"TargetItemClassID");
  local_8._0_1_ = 3;
  FUN_10040090(local_34,param_2);
  local_8._0_1_ = 1;
  FString::~FString(local_34);
  FString::FString(local_34,(ushort *)L"Result");
  local_8._0_1_ = 4;
  FUN_10040090(local_34,param_3);
  local_8._0_1_ = 1;
  FString::~FString(local_34);
  puVar2 = local_28;
  uVar1 = 0xad2;
  FUN_10005c30(0xad2,puVar2);
  FUN_100d1790(uVar1,puVar2);
  local_8 = (uint)local_8._1_3_ << 8;
  FUN_1003fff0();
  ExceptionList = local_10;
  return;
}


// ==== 10161e45 Catch@10161e45

void Catch_10161e45(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10161e59 Catch@10161e59

void Catch_10161e59(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NConsoleWnd::ReceiveConfirmTargetItemResult");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10161e80 FUN_10161e80

void FUN_10161e80(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  undefined4 uVar1;
  undefined1 *puVar2;
  uint uStack_44;
  FString local_34 [12];
  undefined1 local_28 [20];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_1020f995;
  local_10 = ExceptionList;
  uStack_44 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_44;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_1003f970();
  local_8._0_1_ = 1;
  FString::FString(local_34,(ushort *)L"RefinerItemServerID");
  local_8._0_1_ = 2;
  FUN_10040090(local_34,param_1);
  local_8._0_1_ = 1;
  FString::~FString(local_34);
  FString::FString(local_34,(ushort *)L"RefinerItemClassID");
  local_8._0_1_ = 3;
  FUN_10040090(local_34,param_2);
  local_8._0_1_ = 1;
  FString::~FString(local_34);
  FString::FString(local_34,(ushort *)L"GemStoneClassID");
  local_8._0_1_ = 4;
  FUN_10040090(local_34,param_3);
  local_8._0_1_ = 1;
  FString::~FString(local_34);
  FString::FString(local_34,(ushort *)L"GemStoneCount");
  local_8._0_1_ = 5;
  FUN_10040090(local_34,param_4);
  local_8._0_1_ = 1;
  FString::~FString(local_34);
  FString::FString(local_34,(ushort *)L"Result");
  local_8._0_1_ = 6;
  FUN_10040090(local_34,param_5);
  local_8._0_1_ = 1;
  FString::~FString(local_34);
  puVar2 = local_28;
  uVar1 = 0xadc;
  FUN_10005c30(0xadc,puVar2);
  FUN_100d1790(uVar1,puVar2);
  local_8 = (uint)local_8._1_3_ << 8;
  FUN_1003fff0();
  ExceptionList = local_10;
  return;
}


// ==== 10161fe1 Catch@10161fe1

void Catch_10161fe1(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10161ff5 Catch@10161ff5

void Catch_10161ff5(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NConsoleWnd::ReceiveConfirmRefinerItemResult");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10162020 FUN_10162020

void FUN_10162020(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  undefined4 uVar1;
  undefined1 *puVar2;
  uint uStack_44;
  FString local_34 [12];
  undefined1 local_28 [20];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_1020f9e5;
  local_10 = ExceptionList;
  uStack_44 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_44;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_1003f970();
  local_8._0_1_ = 1;
  FString::FString(local_34,(ushort *)L"GemStoneServerID");
  local_8._0_1_ = 2;
  FUN_10040090(local_34,param_1);
  local_8._0_1_ = 1;
  FString::~FString(local_34);
  FString::FString(local_34,(ushort *)L"GemStoneClassID");
  local_8._0_1_ = 3;
  FUN_10040090(local_34,param_2);
  local_8._0_1_ = 1;
  FString::~FString(local_34);
  FString::FString(local_34,(ushort *)L"GemStoneCount");
  local_8._0_1_ = 4;
  FUN_10040090(local_34,param_3);
  local_8._0_1_ = 1;
  FString::~FString(local_34);
  FString::FString(local_34,(ushort *)L"NecessaryGemStoneCount");
  local_8._0_1_ = 5;
  FUN_10040090(local_34,param_4);
  local_8._0_1_ = 1;
  FString::~FString(local_34);
  FString::FString(local_34,(ushort *)L"Result");
  local_8._0_1_ = 6;
  FUN_10040090(local_34,param_5);
  local_8._0_1_ = 1;
  FString::~FString(local_34);
  puVar2 = local_28;
  uVar1 = 0xae6;
  FUN_10005c30(0xae6,puVar2);
  FUN_100d1790(uVar1,puVar2);
  local_8 = (uint)local_8._1_3_ << 8;
  FUN_1003fff0();
  ExceptionList = local_10;
  return;
}


// ==== 10162181 Catch@10162181

void Catch_10162181(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10162195 Catch@10162195

void Catch_10162195(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NConsoleWnd::ReceiveConfirmGemStoneResult");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101621c0 FUN_101621c0

void FUN_101621c0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined1 *puVar2;
  uint uStack_44;
  FString local_34 [12];
  undefined1 local_28 [20];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_1020fa23;
  local_10 = ExceptionList;
  uStack_44 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_44;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_1003f970();
  local_8._0_1_ = 1;
  FString::FString(local_34,(ushort *)L"Option1");
  local_8._0_1_ = 2;
  FUN_10040090(local_34,param_1);
  local_8._0_1_ = 1;
  FString::~FString(local_34);
  FString::FString(local_34,(ushort *)L"Option2");
  local_8._0_1_ = 3;
  FUN_10040090(local_34,param_2);
  local_8._0_1_ = 1;
  FString::~FString(local_34);
  FString::FString(local_34,(ushort *)L"Result");
  local_8._0_1_ = 4;
  FUN_10040090(local_34,param_3);
  local_8._0_1_ = 1;
  FString::~FString(local_34);
  puVar2 = local_28;
  uVar1 = 0xaf0;
  FUN_10005c30(0xaf0,puVar2);
  FUN_100d1790(uVar1,puVar2);
  local_8 = (uint)local_8._1_3_ << 8;
  FUN_1003fff0();
  ExceptionList = local_10;
  return;
}


// ==== 101622c5 Catch@101622c5

void Catch_101622c5(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 101622d9 Catch@101622d9

void Catch_101622d9(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NConsoleWnd::ReceiveRefineResult");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10162300 FUN_10162300

void FUN_10162300(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  undefined4 uVar1;
  undefined1 *puVar2;
  uint uStack_44;
  FString local_34 [12];
  undefined1 local_28 [20];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_1020fa7e;
  local_10 = ExceptionList;
  uStack_44 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_44;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_1003f970();
  local_8._0_1_ = 1;
  FString::FString(local_34,(ushort *)L"CancelItemServerID");
  local_8._0_1_ = 2;
  FUN_10040090(local_34,param_1);
  local_8._0_1_ = 1;
  FString::~FString(local_34);
  FString::FString(local_34,(ushort *)L"CancelItemClassID");
  local_8._0_1_ = 3;
  FUN_10040090(local_34,param_2);
  local_8._0_1_ = 1;
  FString::~FString(local_34);
  FString::FString(local_34,(ushort *)L"Option1");
  local_8._0_1_ = 4;
  FUN_10040090(local_34,param_3);
  local_8._0_1_ = 1;
  FString::~FString(local_34);
  FString::FString(local_34,(ushort *)L"Option2");
  local_8._0_1_ = 5;
  FUN_10040090(local_34,param_4);
  local_8._0_1_ = 1;
  FString::~FString(local_34);
  FString::FString(local_34,(ushort *)L"Adena");
  local_8._0_1_ = 6;
  FUN_100403f0(local_34,param_5,param_6);
  local_8._0_1_ = 1;
  FString::~FString(local_34);
  FString::FString(local_34,(ushort *)L"Result");
  local_8._0_1_ = 7;
  FUN_10040090(local_34,param_7);
  local_8._0_1_ = 1;
  FString::~FString(local_34);
  puVar2 = local_28;
  uVar1 = 0xb04;
  FUN_10005c30(0xb04,puVar2);
  FUN_100d1790(uVar1,puVar2);
  local_8 = (uint)local_8._1_3_ << 8;
  FUN_1003fff0();
  ExceptionList = local_10;
  return;
}


// ==== 10162493 Catch@10162493

void Catch_10162493(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 101624a7 Catch@101624a7

void Catch_101624a7(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NConsoleWnd::ReceiveConfirmCancelItemResult");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101624d0 FUN_101624d0

void FUN_101624d0(undefined4 param_1)

{
  undefined4 uVar1;
  undefined1 *puVar2;
  uint uStack_44;
  FString local_34 [12];
  undefined1 local_28 [20];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_1020fab1;
  local_10 = ExceptionList;
  uStack_44 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_44;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_1003f970();
  local_8._0_1_ = 1;
  FString::FString(local_34,(ushort *)L"Result");
  local_8._0_1_ = 2;
  FUN_10040090(local_34,param_1);
  local_8._0_1_ = 1;
  FString::~FString(local_34);
  puVar2 = local_28;
  uVar1 = 0xb0e;
  FUN_10005c30(0xb0e,puVar2);
  FUN_100d1790(uVar1,puVar2);
  local_8 = (uint)local_8._1_3_ << 8;
  FUN_1003fff0();
  ExceptionList = local_10;
  return;
}


// ==== 10162579 Catch@10162579

void Catch_10162579(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1016258d Catch@1016258d

void Catch_1016258d(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NConsoleWnd::ReceiveRefineCancelResult");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101625b0 FUN_101625b0

void FUN_101625b0(int param_1)

{
  undefined1 local_18 [12];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1020fad8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (param_1 == 0x1129) {
    FUN_1003f970(DAT_103554c4 ^ (uint)local_18);
    local_4 = 0;
    if (DAT_1035786c == 0) {
      FUN_10005270();
    }
    FUN_100d1790(0x6a4,local_18);
    local_4 = 0xffffffff;
    FUN_1003fff0();
  }
  ExceptionList = local_c;
  return;
}


// ==== 10162640 FUN_10162640

void FUN_10162640(L2ParamStack *param_1)

{
  void *pvVar1;
  void *pvVar2;
  undefined4 uVar3;
  undefined1 *puVar4;
  uint uStack_54;
  FString local_44 [12];
  FString local_38 [12];
  undefined1 local_2c [20];
  void *local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_1020fb35;
  local_10 = ExceptionList;
  uStack_54 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_54;
  ExceptionList = &local_10;
  local_8 = 0;
  pvVar1 = L2ParamStack::Top(param_1);
  local_18 = L2ParamStack::Top(param_1);
  pvVar2 = L2ParamStack::Top(param_1);
  FUN_1003f970();
  local_8._0_1_ = 1;
  FString::FString(local_44,(ushort *)L"sellList");
  local_8._0_1_ = 2;
  FString::FString(local_38,(ushort *)L"type");
  local_8._0_1_ = 3;
  FUN_10040230(local_38,local_44);
  local_8._0_1_ = 2;
  FString::~FString(local_38);
  local_8._0_1_ = 1;
  FString::~FString(local_44);
  FString::FString(local_44,(ushort *)L"userID");
  local_8._0_1_ = 4;
  FUN_10040090(local_44,pvVar1);
  local_8._0_1_ = 1;
  FString::~FString(local_44);
  FString::FString(local_44,(ushort *)L"bulk");
  local_8._0_1_ = 5;
  FUN_10040090(local_44,local_18);
  local_8._0_1_ = 1;
  FString::~FString(local_44);
  FString::FString(local_44,(ushort *)L"adena");
  local_8._0_1_ = 6;
  FUN_10040090(local_44,pvVar2);
  local_8._0_1_ = 1;
  FString::~FString(local_44);
  puVar4 = local_2c;
  uVar3 = 0x848;
  FUN_10005c30(0x848,puVar4);
  FUN_100d1790(uVar3,puVar4);
  local_8 = (uint)local_8._1_3_ << 8;
  FUN_1003fff0();
  ExceptionList = local_10;
  return;
}


// ==== 101627ac Catch@101627ac

void Catch_101627ac(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 101627c0 Catch@101627c0

void Catch_101627c0(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NConsoleWnd::StartPrivateStoreManageList");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101627e0 FUN_101627e0

void FUN_101627e0(L2ParamStack *param_1)

{
  void *pvVar1;
  void *pvVar2;
  undefined4 uVar3;
  undefined1 *puVar4;
  uint uStack_54;
  FString local_44 [12];
  FString local_38 [12];
  undefined1 local_2c [20];
  void *local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_1020fb85;
  local_10 = ExceptionList;
  uStack_54 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_54;
  ExceptionList = &local_10;
  local_8 = 0;
  pvVar1 = L2ParamStack::Top(param_1);
  local_18 = L2ParamStack::Top(param_1);
  pvVar2 = L2ParamStack::Top(param_1);
  FUN_1003f970();
  local_8._0_1_ = 1;
  FString::FString(local_44,(ushort *)&DAT_1026cfa0);
  local_8._0_1_ = 2;
  FString::FString(local_38,(ushort *)L"type");
  local_8._0_1_ = 3;
  FUN_10040230(local_38,local_44);
  local_8._0_1_ = 2;
  FString::~FString(local_38);
  local_8._0_1_ = 1;
  FString::~FString(local_44);
  FString::FString(local_44,(ushort *)L"userID");
  local_8._0_1_ = 4;
  FUN_10040090(local_44,pvVar1);
  local_8._0_1_ = 1;
  FString::~FString(local_44);
  FString::FString(local_44,(ushort *)L"bulk");
  local_8._0_1_ = 5;
  FUN_10040090(local_44,local_18);
  local_8._0_1_ = 1;
  FString::~FString(local_44);
  FString::FString(local_44,(ushort *)L"adena");
  local_8._0_1_ = 6;
  FUN_10040090(local_44,pvVar2);
  local_8._0_1_ = 1;
  FString::~FString(local_44);
  puVar4 = local_2c;
  uVar3 = 0x848;
  FUN_10005c30(0x848,puVar4);
  FUN_100d1790(uVar3,puVar4);
  local_8 = (uint)local_8._1_3_ << 8;
  FUN_1003fff0();
  ExceptionList = local_10;
  return;
}


// ==== 1016294c Catch@1016294c

void Catch_1016294c(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 10162960 Catch@10162960

void Catch_10162960(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NConsoleWnd::StartPrivateStoreList");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10162980 FUN_10162980

void FUN_10162980(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined1 local_30 [12];
  FString local_24 [12];
  FString local_18 [12];
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1020fbf8;
  local_c = ExceptionList;
  uVar1 = DAT_103554c4 ^ (uint)&stack0xffffffc4;
  ExceptionList = &local_c;
  if (*(int *)(param_1 + 8) != -1) {
    FUN_1003f970(uVar1);
    local_4 = 0;
    FString::FString(local_18,(ushort *)L"sellList");
    local_4._0_1_ = 1;
    FString::FString(local_24,(ushort *)L"type");
    local_4._0_1_ = 2;
    FUN_10040230(local_24,local_18);
    local_4._0_1_ = 1;
    FString::~FString(local_24);
    local_4._0_1_ = 0;
    FString::~FString(local_18);
    FString::FString(local_24,(ushort *)L"topList");
    local_4._0_1_ = 3;
    FString::FString(local_18,(ushort *)L"target");
    local_4._0_1_ = 4;
    FUN_10040230(local_18,local_24);
    local_4._0_1_ = 3;
    FString::~FString(local_18);
    local_4 = (uint)local_4._1_3_ << 8;
    FString::~FString(local_24);
    iVar2 = FUN_10065fe0(param_1,local_30);
    if (iVar2 != 0) {
      if (DAT_1035786c == 0) {
        FUN_10005270();
      }
      FUN_100d1790(0x852,local_30);
    }
    local_4 = 0xffffffff;
    FUN_1003fff0();
  }
  iVar3 = FUN_10187a60((int *)(param_2 + 8));
  iVar2 = *(int *)(param_2 + 8);
  if (((-1 < iVar2) && (iVar3 != 0)) && (iVar2 != -1)) {
    FUN_1003f970(uVar1);
    local_4 = 5;
    FString::FString(local_24,(ushort *)L"sellList");
    local_4._0_1_ = 6;
    FString::FString(local_18,(ushort *)L"type");
    local_4._0_1_ = 7;
    FUN_10040230(local_18,local_24);
    local_4._0_1_ = 6;
    FString::~FString(local_18);
    local_4._0_1_ = 5;
    FString::~FString(local_24);
    FString::FString(local_24,(ushort *)L"bottomList");
    local_4._0_1_ = 8;
    FString::FString(local_18,(ushort *)L"target");
    local_4._0_1_ = 9;
    FUN_10040230(local_18,local_24);
    local_4._0_1_ = 8;
    FString::~FString(local_18);
    local_4 = CONCAT31(local_4._1_3_,5);
    FString::~FString(local_24);
    iVar2 = FUN_10065fe0(param_2,local_30);
    if (iVar2 != 0) {
      if (DAT_1035786c == 0) {
        FUN_10005270();
      }
      FUN_100d1790(0x852,local_30);
    }
    local_4 = 0xffffffff;
    FUN_1003fff0();
  }
  ExceptionList = local_c;
  return;
}


// ==== 10162c10 FUN_10162c10

undefined4 FUN_10162c10(void)

{
  int iVar1;
  
  iVar1 = FUN_10187a60(&stack0x00000004);
  if ((iVar1 != 0) && (*(int *)(iVar1 + 4) == 2)) {
    return *(undefined4 *)(iVar1 + 0xfc);
  }
  return 0;
}


// ==== 10162c40 FUN_10162c40

void FUN_10162c40(int param_1)

{
  int iVar1;
  undefined1 local_30 [12];
  FString local_24 [12];
  FString local_18 [12];
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1020fc4c;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (*(int *)(param_1 + 8) != -1) {
    FUN_1003f970(DAT_103554c4 ^ (uint)&stack0xffffffcc);
    local_4 = 0;
    FString::FString(local_18,(ushort *)&DAT_1026cfa0);
    local_4._0_1_ = 1;
    FString::FString(local_24,(ushort *)L"type");
    local_4._0_1_ = 2;
    FUN_10040230(local_24,local_18);
    local_4._0_1_ = 1;
    FString::~FString(local_24);
    local_4._0_1_ = 0;
    FString::~FString(local_18);
    FString::FString(local_24,(ushort *)L"topList");
    local_4._0_1_ = 3;
    FString::FString(local_18,(ushort *)L"target");
    local_4._0_1_ = 4;
    FUN_10040230(local_18,local_24);
    local_4._0_1_ = 3;
    FString::~FString(local_18);
    local_4 = (uint)local_4._1_3_ << 8;
    FString::~FString(local_24);
    iVar1 = FUN_10065fe0(param_1,local_30);
    if (iVar1 != 0) {
      if (DAT_1035786c == 0) {
        FUN_10005270();
      }
      FUN_100d1790(0x852,local_30);
    }
    local_4 = 0xffffffff;
    FUN_1003fff0();
  }
  ExceptionList = local_c;
  return;
}


// ==== 10162d90 FUN_10162d90

void FUN_10162d90(L2ParamStack *param_1)

{
  void *pvVar1;
  void *pvVar2;
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
  
  puStack_c = &LAB_1020fc9c;
  local_10 = ExceptionList;
  uStack_50 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_50;
  ExceptionList = &local_10;
  local_8 = 0;
  pvVar1 = L2ParamStack::Top(param_1);
  pvVar2 = L2ParamStack::Top(param_1);
  FUN_1003f970();
  local_8._0_1_ = 1;
  FString::FString(local_40,(ushort *)L"buyList");
  local_8._0_1_ = 2;
  FString::FString(local_34,(ushort *)L"type");
  local_8._0_1_ = 3;
  FUN_10040230(local_34,local_40);
  local_8._0_1_ = 2;
  FString::~FString(local_34);
  local_8._0_1_ = 1;
  FString::~FString(local_40);
  FString::FString(local_40,(ushort *)L"userID");
  local_8._0_1_ = 4;
  FUN_10040090(local_40,pvVar1);
  local_8._0_1_ = 1;
  FString::~FString(local_40);
  FString::FString(local_40,(ushort *)L"adena");
  local_8._0_1_ = 5;
  FUN_10040090(local_40,pvVar2);
  local_8._0_1_ = 1;
  FString::~FString(local_40);
  puVar4 = local_28;
  uVar3 = 0x848;
  FUN_10005c30(0x848,puVar4);
  FUN_100d1790(uVar3,puVar4);
  local_8 = (uint)local_8._1_3_ << 8;
  FUN_1003fff0();
  ExceptionList = local_10;
  return;
}


// ==== 10162ec5 Catch@10162ec5

void Catch_10162ec5(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10162ed9 Catch@10162ed9

void Catch_10162ed9(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NConsoleWnd::StartPrivateStoreBuyManageList");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10162f00 FUN_10162f00

void FUN_10162f00(L2ParamStack *param_1)

{
  void *pvVar1;
  void *pvVar2;
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
  
  puStack_c = &LAB_1020fcec;
  local_10 = ExceptionList;
  uStack_50 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_50;
  ExceptionList = &local_10;
  local_8 = 0;
  pvVar1 = L2ParamStack::Top(param_1);
  pvVar2 = L2ParamStack::Top(param_1);
  FUN_1003f970();
  local_8._0_1_ = 1;
  FString::FString(local_40,(ushort *)L"sell");
  local_8._0_1_ = 2;
  FString::FString(local_34,(ushort *)L"type");
  local_8._0_1_ = 3;
  FUN_10040230(local_34,local_40);
  local_8._0_1_ = 2;
  FString::~FString(local_34);
  local_8._0_1_ = 1;
  FString::~FString(local_40);
  FString::FString(local_40,(ushort *)L"userID");
  local_8._0_1_ = 4;
  FUN_10040090(local_40,pvVar1);
  local_8._0_1_ = 1;
  FString::~FString(local_40);
  FString::FString(local_40,(ushort *)L"adena");
  local_8._0_1_ = 5;
  FUN_10040090(local_40,pvVar2);
  local_8._0_1_ = 1;
  FString::~FString(local_40);
  puVar4 = local_28;
  uVar3 = 0x848;
  FUN_10005c30(0x848,puVar4);
  FUN_100d1790(uVar3,puVar4);
  local_8 = (uint)local_8._1_3_ << 8;
  FUN_1003fff0();
  ExceptionList = local_10;
  return;
}


// ==== 10163035 Catch@10163035

void Catch_10163035(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10163049 Catch@10163049

void Catch_10163049(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NConsoleWnd::StartPrivateStoreBuyList");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10163070 FUN_10163070

void FUN_10163070(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined1 local_30 [12];
  FString local_24 [12];
  FString local_18 [12];
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1020fd68;
  local_c = ExceptionList;
  uVar1 = DAT_103554c4 ^ (uint)&stack0xffffffc4;
  ExceptionList = &local_c;
  if (*(int *)(param_1 + 8) != -1) {
    FUN_1003f970(uVar1);
    local_4 = 0;
    FString::FString(local_18,(ushort *)L"buyList");
    local_4._0_1_ = 1;
    FString::FString(local_24,(ushort *)L"type");
    local_4._0_1_ = 2;
    FUN_10040230(local_24,local_18);
    local_4._0_1_ = 1;
    FString::~FString(local_24);
    local_4._0_1_ = 0;
    FString::~FString(local_18);
    FString::FString(local_24,(ushort *)L"topList");
    local_4._0_1_ = 3;
    FString::FString(local_18,(ushort *)L"target");
    local_4._0_1_ = 4;
    FUN_10040230(local_18,local_24);
    local_4._0_1_ = 3;
    FString::~FString(local_18);
    local_4 = (uint)local_4._1_3_ << 8;
    FString::~FString(local_24);
    iVar2 = FUN_10065fe0(param_1,local_30);
    if (iVar2 != 0) {
      if (DAT_1035786c == 0) {
        FUN_10005270();
      }
      FUN_100d1790(0x852,local_30);
    }
    local_4 = 0xffffffff;
    FUN_1003fff0();
  }
  iVar3 = FUN_10187a60((int *)(param_2 + 8));
  iVar2 = *(int *)(param_2 + 8);
  if (((-1 < iVar2) && (iVar3 != 0)) && (iVar2 != -1)) {
    FUN_1003f970(uVar1);
    local_4 = 5;
    FString::FString(local_24,(ushort *)L"buyList");
    local_4._0_1_ = 6;
    FString::FString(local_18,(ushort *)L"type");
    local_4._0_1_ = 7;
    FUN_10040230(local_18,local_24);
    local_4._0_1_ = 6;
    FString::~FString(local_18);
    local_4._0_1_ = 5;
    FString::~FString(local_24);
    FString::FString(local_24,(ushort *)L"bottomList");
    local_4._0_1_ = 8;
    FString::FString(local_18,(ushort *)L"target");
    local_4._0_1_ = 9;
    FUN_10040230(local_18,local_24);
    local_4._0_1_ = 8;
    FString::~FString(local_18);
    local_4 = CONCAT31(local_4._1_3_,5);
    FString::~FString(local_24);
    iVar2 = FUN_10065fe0(param_2,local_30);
    if (iVar2 != 0) {
      if (DAT_1035786c == 0) {
        FUN_10005270();
      }
      FUN_100d1790(0x852,local_30);
    }
    local_4 = 0xffffffff;
    FUN_1003fff0();
  }
  ExceptionList = local_c;
  return;
}


// ==== 10163300 FUN_10163300

void FUN_10163300(int param_1)

{
  int iVar1;
  undefined1 local_30 [12];
  FString local_24 [12];
  FString local_18 [12];
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1020fdbc;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (*(int *)(param_1 + 8) != -1) {
    FUN_1003f970(DAT_103554c4 ^ (uint)&stack0xffffffcc);
    local_4 = 0;
    FString::FString(local_18,(ushort *)L"sell");
    local_4._0_1_ = 1;
    FString::FString(local_24,(ushort *)L"type");
    local_4._0_1_ = 2;
    FUN_10040230(local_24,local_18);
    local_4._0_1_ = 1;
    FString::~FString(local_24);
    local_4._0_1_ = 0;
    FString::~FString(local_18);
    FString::FString(local_24,(ushort *)L"topList");
    local_4._0_1_ = 3;
    FString::FString(local_18,(ushort *)L"target");
    local_4._0_1_ = 4;
    FUN_10040230(local_18,local_24);
    local_4._0_1_ = 3;
    FString::~FString(local_18);
    local_4 = (uint)local_4._1_3_ << 8;
    FString::~FString(local_24);
    iVar1 = FUN_10065fe0(param_1,local_30);
    if (iVar1 != 0) {
      if (DAT_1035786c == 0) {
        FUN_10005270();
      }
      FUN_100d1790(0x852,local_30);
    }
    local_4 = 0xffffffff;
    FUN_1003fff0();
  }
  ExceptionList = local_c;
  return;
}


// ==== 10163450 FUN_10163450

void FUN_10163450(undefined4 param_1)

{
  undefined1 local_24 [12];
  FString local_18 [12];
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1020fdf1;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_1003f970(DAT_103554c4 ^ (uint)local_24);
  local_4 = 0;
  FString::FString(local_18,(ushort *)L"shopID");
  local_4._0_1_ = 1;
  FUN_10040090(local_18,param_1);
  local_4 = (uint)local_4._1_3_ << 8;
  FString::~FString(local_18);
  if (DAT_1035786c == 0) {
    FUN_10005270();
  }
  FUN_100d1790(0x9e2,local_24);
  local_4 = 0xffffffff;
  FUN_1003fff0();
  ExceptionList = local_c;
  return;
}


// ==== 10163500 FUN_10163500

void FUN_10163500(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                 undefined4 param_9,undefined4 param_10,undefined4 param_11,undefined4 param_12)

{
  undefined1 local_24 [12];
  FString local_18 [12];
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1020fe84;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_1003f970(DAT_103554c4 ^ (uint)&stack0xffffffd8);
  local_4 = 0;
  FString::FString(local_18,(ushort *)L"index");
  local_4._0_1_ = 1;
  FUN_10040090(local_18,param_1);
  local_4._0_1_ = 0;
  FString::~FString(local_18);
  FString::FString(local_18,(ushort *)L"type");
  local_4._0_1_ = 2;
  FUN_10040090(local_18,param_2);
  local_4._0_1_ = 0;
  FString::~FString(local_18);
  FString::FString(local_18,(ushort *)&DAT_1025ae84);
  local_4._0_1_ = 3;
  FUN_10040090(local_18,param_3);
  local_4._0_1_ = 0;
  FString::~FString(local_18);
  FString::FString(local_18,(ushort *)L"refineryOp1");
  local_4._0_1_ = 4;
  FUN_10040090(local_18,param_4);
  local_4._0_1_ = 0;
  FString::~FString(local_18);
  FString::FString(local_18,(ushort *)L"refineryOp2");
  local_4._0_1_ = 5;
  FUN_10040090(local_18,param_5);
  local_4._0_1_ = 0;
  FString::~FString(local_18);
  FString::FString(local_18,(ushort *)L"classID");
  local_4._0_1_ = 6;
  FUN_10040090(local_18,param_6);
  local_4._0_1_ = 0;
  FString::~FString(local_18);
  FString::FString(local_18,(ushort *)L"slotBitType");
  local_4._0_1_ = 7;
  FUN_10040090(local_18,param_7);
  local_4._0_1_ = 0;
  FString::~FString(local_18);
  FString::FString(local_18,(ushort *)L"itemType");
  local_4._0_1_ = 8;
  FUN_10040090(local_18,param_8);
  local_4._0_1_ = 0;
  FString::~FString(local_18);
  FString::FString(local_18,(ushort *)L"itemCount");
  local_4._0_1_ = 9;
  FUN_10040090(local_18,param_9);
  local_4._0_1_ = 0;
  FString::~FString(local_18);
  FString::FString(local_18,(ushort *)L"enchant");
  local_4._0_1_ = 10;
  FUN_10040090(local_18,param_10);
  local_4._0_1_ = 0;
  FString::~FString(local_18);
  FString::FString(local_18,(ushort *)L"OutputRefineryOp1");
  local_4._0_1_ = 0xb;
  FUN_10040090(local_18,param_11);
  local_4._0_1_ = 0;
  FString::~FString(local_18);
  FString::FString(local_18,(ushort *)L"OutputRefineryOp2");
  local_4._0_1_ = 0xc;
  FUN_10040090(local_18,param_12);
  local_4 = (uint)local_4._1_3_ << 8;
  FString::~FString(local_18);
  if (DAT_1035786c == 0) {
    FUN_10005270();
  }
  FUN_100d1790(0x9ec,local_24);
  local_4 = 0xffffffff;
  FUN_1003fff0();
  ExceptionList = local_c;
  return;
}


// ==== 10163800 FUN_10163800

void FUN_10163800(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  undefined1 local_24 [12];
  FString local_18 [12];
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1020fef0;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_1003f970(DAT_103554c4 ^ (uint)&stack0xffffffd8);
  local_4 = 0;
  FString::FString(local_18,(ushort *)&DAT_1025ae84);
  local_4._0_1_ = 1;
  FUN_10040090(local_18,param_1);
  local_4._0_1_ = 0;
  FString::~FString(local_18);
  FString::FString(local_18,(ushort *)L"refineryOp1");
  local_4._0_1_ = 2;
  FUN_10040090(local_18,param_2);
  local_4._0_1_ = 0;
  FString::~FString(local_18);
  FString::FString(local_18,(ushort *)L"refineryOp2");
  local_4._0_1_ = 3;
  FUN_10040090(local_18,param_3);
  local_4._0_1_ = 0;
  FString::~FString(local_18);
  FString::FString(local_18,(ushort *)L"ClassID");
  local_4._0_1_ = 4;
  FUN_10040090(local_18,param_4);
  local_4._0_1_ = 0;
  FString::~FString(local_18);
  FString::FString(local_18,(ushort *)L"count");
  local_4._0_1_ = 5;
  FUN_10040090(local_18,param_5);
  local_4._0_1_ = 0;
  FString::~FString(local_18);
  FString::FString(local_18,(ushort *)L"enchant");
  local_4._0_1_ = 6;
  FUN_10040090(local_18,param_6);
  local_4._0_1_ = 0;
  FString::~FString(local_18);
  FString::FString(local_18,(ushort *)L"inputRefineryOp1");
  local_4._0_1_ = 7;
  FUN_10040090(local_18,param_7);
  local_4._0_1_ = 0;
  FString::~FString(local_18);
  FString::FString(local_18,(ushort *)L"inputRefineryOp2");
  local_4._0_1_ = 8;
  FUN_10040090(local_18,param_8);
  local_4 = (uint)local_4._1_3_ << 8;
  FString::~FString(local_18);
  if (DAT_1035786c == 0) {
    FUN_10005270();
  }
  FUN_100d1790(0x9f6,local_24);
  local_4 = 0xffffffff;
  FUN_1003fff0();
  ExceptionList = local_c;
  return;
}


// ==== 10163a30 FUN_10163a30

void FUN_10163a30(void)

{
  uint uVar1;
  FString local_18 [12];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1020ff19;
  local_c = ExceptionList;
  uVar1 = DAT_103554c4 ^ (uint)local_18;
  ExceptionList = &local_c;
  FString::FString(local_18,(ushort *)&DAT_1022f9f8);
  local_4 = 0;
  if (DAT_1035786c == 0) {
    FUN_10005270(uVar1);
  }
  FUN_100d1790(0xa00,local_18);
  local_4 = 0xffffffff;
  FString::~FString(local_18);
  ExceptionList = local_c;
  return;
}


// ==== 10163ab0 FUN_10163ab0

void FUN_10163ab0(void)

{
  uint uVar1;
  FString local_18 [12];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1020ff49;
  local_c = ExceptionList;
  uVar1 = DAT_103554c4 ^ (uint)local_18;
  ExceptionList = &local_c;
  FString::FString(local_18,(ushort *)&DAT_1022f9f8);
  local_4 = 0;
  if (DAT_1035786c == 0) {
    FUN_10005270(uVar1);
  }
  FUN_100d1790(0x226,local_18);
  local_4 = 0xffffffff;
  FString::~FString(local_18);
  ExceptionList = local_c;
  return;
}


// ==== 10163b30 FUN_10163b30

void FUN_10163b30(L2ParamStack *param_1)

{
  void *pvVar1;
  ushort *puVar2;
  undefined4 uVar3;
  undefined1 *puVar4;
  uint uStack_60;
  FString local_50 [12];
  FString local_44 [12];
  undefined1 local_38 [20];
  ushort *local_24;
  void *local_20;
  void *local_1c;
  ushort *local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_1020ffc9;
  local_10 = ExceptionList;
  uStack_60 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_60;
  ExceptionList = &local_10;
  local_8 = 0;
  pvVar1 = L2ParamStack::Top(param_1);
  local_18 = L2ParamStack::Top(param_1);
  local_1c = L2ParamStack::Top(param_1);
  local_20 = L2ParamStack::Top(param_1);
  local_24 = L2ParamStack::Top(param_1);
  puVar2 = L2ParamStack::Top(param_1);
  if (puVar2 != (ushort *)0x0) {
    FUN_1003f970();
    local_8._0_1_ = 1;
    FString::FString(local_44,(ushort *)L"SnoopID");
    local_8._0_1_ = 2;
    FUN_10040090(local_44,pvVar1);
    local_8._0_1_ = 1;
    FString::~FString(local_44);
    FString::FString(local_50,local_18);
    local_8._0_1_ = 3;
    FString::FString(local_44,(ushort *)L"SnoopName");
    local_8._0_1_ = 4;
    FUN_10040230(local_44,local_50);
    local_8._0_1_ = 3;
    FString::~FString(local_44);
    local_8._0_1_ = 1;
    FString::~FString(local_50);
    FString::FString(local_50,(ushort *)L"CreatureID");
    local_8._0_1_ = 5;
    FUN_10040090(local_50,local_1c);
    local_8._0_1_ = 1;
    FString::~FString(local_50);
    FString::FString(local_50,(ushort *)L"Type");
    local_8._0_1_ = 6;
    FUN_10040090(local_50,local_20);
    local_8._0_1_ = 1;
    FString::~FString(local_50);
    FString::FString(local_44,local_24);
    local_8._0_1_ = 7;
    FString::FString(local_50,(ushort *)L"CharacterName");
    local_8._0_1_ = 8;
    FUN_10040230(local_50,local_44);
    local_8._0_1_ = 7;
    FString::~FString(local_50);
    local_8._0_1_ = 1;
    FString::~FString(local_44);
    FString::FString(local_44,puVar2);
    local_8._0_1_ = 9;
    FString::FString(local_50,(ushort *)L"ChatMessage");
    local_8._0_1_ = 10;
    FUN_10040230(local_50,local_44);
    local_8._0_1_ = 9;
    FString::~FString(local_50);
    local_8._0_1_ = 1;
    FString::~FString(local_44);
    puVar4 = local_38;
    uVar3 = 0x96a;
    FUN_10005c30(0x96a,puVar4);
    FUN_100d1790(uVar3,puVar4);
    local_8 = (uint)local_8._1_3_ << 8;
    FUN_1003fff0();
  }
  ExceptionList = local_10;
  return;
}


// ==== 10163d50 Catch@10163d50

void Catch_10163d50(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x24) = *(undefined4 *)(unaff_EBP + -0x28);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x24,&DAT_102a47f0);
}


// ==== 10163d64 Catch@10163d64

void Catch_10163d64(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NConsoleWnd::GMSnoop");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10163d90 FUN_10163d90

undefined4 FUN_10163d90(L2ParamStack *param_1)

{
  void *pvVar1;
  void *pvVar2;
  ushort *puVar3;
  void *pvVar4;
  undefined4 uVar5;
  
  pvVar1 = L2ParamStack::Top(param_1);
  pvVar2 = L2ParamStack::Top(param_1);
  puVar3 = L2ParamStack::Top(param_1);
  pvVar4 = L2ParamStack::Top(param_1);
  FUN_1014cff0(pvVar4);
  if (pvVar4 == (void *)0x0) {
    return 0;
  }
  if (pvVar2 != (void *)0x1) {
    if (pvVar2 == (void *)0x3) {
      uVar5 = 0xff00ff00;
      goto LAB_10163eeb;
    }
    if (pvVar2 == (void *)0x4) {
      uVar5 = 0xff7d77ff;
      goto LAB_10163eeb;
    }
    if (pvVar2 == (void *)0x2) {
      FUN_1013df30(pvVar1,puVar3,pvVar4,0xffff00ff,2);
      FUN_101394d0(puVar3);
      return 1;
    }
    if (pvVar2 == (void *)0x8) {
      uVar5 = 0xffeaa5f5;
      goto LAB_10163eeb;
    }
    if (pvVar2 == (void *)0x9) {
      uVar5 = 0xff77ff99;
      goto LAB_10163eeb;
    }
    if (pvVar2 == (void *)0x6) {
      uVar5 = 0xff80ffff;
      goto LAB_10163eeb;
    }
    if (pvVar2 == (void *)0x7) {
      uVar5 = 0xff80ffff;
      goto LAB_10163eeb;
    }
    if (pvVar2 == (void *)0xa) {
      uVar5 = 0xff80ffff;
      puVar3 = FString::operator*((FString *)(GL2GameData_exref + 0x6b83c));
      goto LAB_10163eeb;
    }
    if (pvVar2 != (void *)0xb) {
      if (pvVar2 != (void *)0xe) {
        if (pvVar2 == (void *)0xf) {
          uVar5 = 0xffff9695;
          goto LAB_10163eeb;
        }
        if (pvVar2 == (void *)0x10) {
          uVar5 = 0xfffff8b2;
          goto LAB_10163eeb;
        }
        if (pvVar2 == (void *)0x12) {
          uVar5 = 0xff00ffff;
          puVar3 = (ushort *)0x0;
          goto LAB_10163eeb;
        }
        if (pvVar2 == (void *)0x11) {
          uVar5 = 0xff408cff;
          goto LAB_10163eeb;
        }
        pvVar2 = (void *)0x0;
      }
      uVar5 = 0xffdcdcdc;
      goto LAB_10163eeb;
    }
  }
  pvVar2 = (void *)0x1;
  uVar5 = 0xffff7200;
LAB_10163eeb:
  FUN_1013df30(pvVar1,puVar3,pvVar4,uVar5,pvVar2);
  return 1;
}


// ==== 10163f10 FUN_10163f10

void FUN_10163f10(undefined4 param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1020fff0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_1014f960(param_1);
  FUN_101b7af0(param_1);
  ExceptionList = local_10;
  return;
}


// ==== 10163f6d Catch@10163f6d

void Catch_10163f6d(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10163f81 Catch@10163f81

void Catch_10163f81(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NConsoleWnd::AddSystemMessageParam");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10163fa0 FUN_10163fa0

void FUN_10163fa0(undefined4 param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10210010;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_1014f960(param_1);
  FUN_101b75d0(param_1);
  ExceptionList = local_10;
  return;
}


// ==== 10163ffd Catch@10163ffd

void Catch_10163ffd(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10164011 Catch@10164011

void Catch_10164011(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NConsoleWnd::AddSystemMessageParam");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10164030 FUN_10164030

void FUN_10164030(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10210030;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_1014f960(param_1,param_2,param_3);
  FUN_101b88a0(param_1,param_2,param_3);
  ExceptionList = local_10;
  return;
}


// ==== 10164095 Catch@10164095

void Catch_10164095(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 101640a9 Catch@101640a9

void Catch_101640a9(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NConsoleWnd::GetSystemMsgWithParamNumber");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101640d0 FUN_101640d0

void FUN_101640d0(undefined4 param_1,byte param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10210050;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  uVar1 = (uint)param_2;
  FUN_1014f960(param_1,uVar1,param_3,param_4);
  FUN_101b7cd0(param_1,uVar1,param_3,param_4);
  ExceptionList = local_10;
  return;
}


// ==== 1016413a Catch@1016413a

void Catch_1016413a(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1016414e Catch@1016414e

void Catch_1016414e(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NConsoleWnd::EndSystemMessageParam");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10164170 FUN_10164170

void FUN_10164170(void)

{
  undefined4 uVar1;
  undefined1 *puVar2;
  uint uStack_44;
  FString local_34 [12];
  undefined1 local_28 [20];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_10210081;
  local_10 = ExceptionList;
  uStack_44 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_44;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_1003f970();
  local_8._0_1_ = 1;
  FString::FString(local_34,"IdxMail");
  local_8._0_1_ = 2;
  FUN_10040090(local_34,0);
  local_8._0_1_ = 1;
  FString::~FString(local_34);
  puVar2 = local_28;
  uVar1 = 0x5fa;
  FUN_10005c30(0x5fa,puVar2);
  FUN_100d1790(uVar1,puVar2);
  local_8 = (uint)local_8._1_3_ << 8;
  FUN_1003fff0();
  ExceptionList = local_10;
  return;
}


// ==== 10164215 Catch@10164215

void Catch_10164215(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10164229 Catch@10164229

void Catch_10164229(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NConsoleWnd::OnExMailArrivedPacket");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10164250 FUN_10164250

void FUN_10164250(void)

{
  undefined4 uVar1;
  undefined1 *puVar2;
  uint uStack_44;
  FString local_34 [12];
  undefined1 local_28 [20];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_102100ba;
  local_10 = ExceptionList;
  uStack_44 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_44;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_1003f970();
  local_8._0_1_ = 1;
  if ((*(int *)GL2CanUseJoystick_exref == 0) || (*(int *)GL2UsingJoystick_exref == 0)) {
    FString::FString(local_34,"OnOff");
    local_8._0_1_ = 3;
    uVar1 = 0;
  }
  else {
    FString::FString(local_34,"OnOff");
    local_8._0_1_ = 2;
    uVar1 = 1;
  }
  FUN_10040090(local_34,uVar1);
  local_8._0_1_ = 1;
  FString::~FString(local_34);
  puVar2 = local_28;
  uVar1 = 0x294;
  FUN_10005c30(0x294,puVar2);
  FUN_100d1790(uVar1,puVar2);
  local_8 = (uint)local_8._1_3_ << 8;
  FUN_1003fff0();
  ExceptionList = local_10;
  return;
}


// ==== 10164326 Catch@10164326

void Catch_10164326(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1016433a Catch@1016433a

void Catch_1016433a(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NConsoleWnd::UpdateJoypadStatus");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10164360 FUN_10164360

void FUN_10164360(void)

{
  FString *this;
  int iVar1;
  uint uStack_38;
  FString local_28 [20];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_102100e9;
  local_10 = ExceptionList;
  uStack_38 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_38;
  ExceptionList = &local_10;
  local_8 = 0;
  this = (FString *)FUN_1014ad10(local_28);
  local_8._0_1_ = 1;
  iVar1 = FString::operator!=(this,(ushort *)L"GamingState");
  local_8 = (uint)local_8._1_3_ << 8;
  FString::~FString(local_28);
  if ((iVar1 == 0) && (*(int *)GIsOnlyXMLUI_exref == 0)) {
    FUN_1014ddd0();
    FUN_1014deb0();
    iVar1 = FUN_1014df70();
    if (iVar1 != 0) {
      FUN_10145920(*(undefined4 *)(iVar1 + 0x60));
    }
  }
  ExceptionList = local_10;
  return;
}


// ==== 1016441f Catch@1016441f

void Catch_1016441f(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10164433 Catch@10164433

void Catch_10164433(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NConsoleWnd::IsSelectedTarget");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10164450 FUN_10164450

void FUN_10164450(void)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  int *in_ECX;
  code *pcVar4;
  uint uStack_38;
  FString local_28 [20];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_10210119;
  local_10 = ExceptionList;
  uStack_38 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_38;
  ExceptionList = &local_10;
  local_8 = 0;
  FString::FString(local_28,(ushort *)L"OptionWnd");
  local_8._0_1_ = 1;
  uVar1 = (**(code **)(*in_ECX + 0x778))(local_28);
  piVar2 = (int *)FUN_10010290(uVar1);
  local_8 = (uint)local_8._1_3_ << 8;
  FString::~FString(local_28);
  if (piVar2 != (int *)0x0) {
    iVar3 = (**(code **)(*piVar2 + 0xfc))(0);
    if (iVar3 == 0) {
      FUN_1014ed50(5);
      (**(code **)(*piVar2 + 0x138))();
      pcVar4 = *(code **)(*piVar2 + 0x78);
    }
    else {
      FUN_1014ed50(6);
      pcVar4 = *(code **)(*piVar2 + 0x13c);
    }
    (*pcVar4)();
    ExceptionList = local_10;
    return;
  }
  ExceptionList = local_10;
  return;
}


// ==== 10164532 Catch@10164532

void Catch_10164532(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10164546 Catch@10164546

void Catch_10164546(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NConsoleWnd::ShowOptionWnd");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10164570 FUN_10164570

void FUN_10164570(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10210140;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_1014f960(param_1,param_2,param_3,param_4,param_5);
  FUN_101b6e70(param_1,param_2,param_3,param_4,param_5);
  ExceptionList = local_10;
  return;
}


// ==== 101645dd Catch@101645dd

void Catch_101645dd(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 101645f1 Catch@101645f1

void Catch_101645f1(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NConsoleWnd::MakeFullSystemMsg");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10164610 FUN_10164610

void FUN_10164610(void)

{
  undefined4 uVar1;
  FString *pFVar2;
  uint uStack_38;
  FString local_28 [20];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_10210169;
  local_10 = ExceptionList;
  uStack_38 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_38;
  ExceptionList = &local_10;
  local_8 = 0;
  FString::FString(local_28,(ushort *)&DAT_1022f9f8);
  local_8._0_1_ = 1;
  pFVar2 = local_28;
  uVar1 = 0x76c;
  FUN_10005c30(0x76c,pFVar2);
  FUN_100d1790(uVar1,pFVar2);
  local_8 = (uint)local_8._1_3_ << 8;
  FString::~FString(local_28);
  FUN_100736b0(0x511,0,0);
  FUN_10046eb0();
  FUN_101b8a30();
  ExceptionList = local_10;
  return;
}


// ==== 101646bb Catch@101646bb

void Catch_101646bb(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 101646cf Catch@101646cf

void Catch_101646cf(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NConsoleWnd::ResetConsoleLanguage");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101646f0 FUN_101646f0

ushort * FUN_101646f0(int param_1)

{
  int iVar1;
  ushort *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10210190;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  iVar1 = FUN_10187a60(&param_1);
  if ((-1 < param_1) && (iVar1 != 0)) {
    puVar2 = L2FName::operator*((L2FName *)(iVar1 + 0x3c));
    ExceptionList = local_10;
    return puVar2;
  }
  ExceptionList = local_10;
  return (ushort *)0x0;
}


// ==== 10164774 Catch@10164774

void Catch_10164774(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10164788 Catch@10164788

void Catch_10164788(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NConsoleWnd::GetIconName");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101647b0 FUN_101647b0

ushort * FUN_101647b0(int param_1)

{
  int iVar1;
  ushort *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_102101b0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  iVar1 = FUN_10187a60(&param_1);
  if ((-1 < param_1) && (iVar1 != 0)) {
    puVar2 = L2FName::operator*((L2FName *)(iVar1 + 0x50));
    ExceptionList = local_10;
    return puVar2;
  }
  ExceptionList = local_10;
  return (ushort *)0x0;
}


// ==== 10164834 Catch@10164834

void Catch_10164834(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10164848 Catch@10164848

void Catch_10164848(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NConsoleWnd::GetItemName");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10164870 FUN_10164870

void FUN_10164870(undefined4 param_1,undefined4 param_2)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_102101d0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_1002f160(param_1,param_2);
  FUN_101b5510(param_1,param_2);
  ExceptionList = local_10;
  return;
}


// ==== 101648ca Catch@101648ca

void Catch_101648ca(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 101648de Catch@101648de

void Catch_101648de(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NConsoleWnd::GetMSIcon");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10164900 FUN_10164900

void FUN_10164900(undefined4 param_1,undefined4 param_2)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_102101f0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_1002f160(param_1,param_2);
  FUN_101b55c0(param_1,param_2);
  ExceptionList = local_10;
  return;
}


// ==== 1016495a Catch@1016495a

void Catch_1016495a(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1016496e Catch@1016496e

void Catch_1016496e(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NConsoleWnd::GetMSName");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10164990 FUN_10164990

void FUN_10164990(undefined4 param_1,undefined4 param_2)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10210210;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_1002f160(param_1,param_2);
  FUN_101b5670(param_1,param_2);
  ExceptionList = local_10;
  return;
}


// ==== 101649ea Catch@101649ea

void Catch_101649ea(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 101649fe Catch@101649fe

void Catch_101649fe(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NConsoleWnd::GetMSItemDescription");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10164a20 FUN_10164a20

void FUN_10164a20(undefined4 param_1,undefined4 param_2)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10210230;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_1002f160(param_1,param_2);
  FUN_101b5720(param_1,param_2);
  ExceptionList = local_10;
  return;
}


// ==== 10164a7a Catch@10164a7a

void Catch_10164a7a(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10164a8e Catch@10164a8e

void Catch_10164a8e(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NConsoleWnd::IsDeBuff");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10164ab0 FUN_10164ab0

void FUN_10164ab0(undefined4 param_1,undefined4 param_2)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10210250;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_1002f160(param_1,param_2);
  FUN_101b57d0(param_1,param_2);
  ExceptionList = local_10;
  return;
}


// ==== 10164b0a Catch@10164b0a

void Catch_10164b0a(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10164b1e Catch@10164b1e

void Catch_10164b1e(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NConsoleWnd::IsToggleSkill");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10164b40 FUN_10164b40

void FUN_10164b40(undefined4 param_1,undefined4 param_2)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10210270;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_1002f160(param_1,param_2);
  FUN_101b5880(param_1,param_2);
  ExceptionList = local_10;
  return;
}


// ==== 10164b9a Catch@10164b9a

void Catch_10164b9a(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10164bae Catch@10164bae

void Catch_10164bae(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NConsoleWnd::GetMSOperateType");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10164bd0 FUN_10164bd0

void FUN_10164bd0(undefined4 param_1,undefined4 param_2)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10210290;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_1002f160(param_1,param_2);
  FUN_101b5960(param_1,param_2);
  ExceptionList = local_10;
  return;
}


// ==== 10164c2a Catch@10164c2a

void Catch_10164c2a(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10164c3e Catch@10164c3e

void Catch_10164c3e(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NConsoleWnd::GetMSHpConsume");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10164c60 FUN_10164c60

void FUN_10164c60(undefined4 param_1,undefined4 param_2)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_102102b0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_1002f160(param_1,param_2);
  FUN_101b5a10(param_1,param_2);
  ExceptionList = local_10;
  return;
}


// ==== 10164cba Catch@10164cba

void Catch_10164cba(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10164cce Catch@10164cce

void Catch_10164cce(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NConsoleWnd::GetMSMpConsume");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10164cf0 FUN_10164cf0

void FUN_10164cf0(undefined4 param_1,undefined4 param_2)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_102102d0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_1002f160(param_1,param_2);
  FUN_101b5ac0(param_1,param_2);
  ExceptionList = local_10;
  return;
}


// ==== 10164d4a Catch@10164d4a

void Catch_10164d4a(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10164d5e Catch@10164d5e

void Catch_10164d5e(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NConsoleWnd::GetMSCastRange");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10164d80 FUN_10164d80

undefined4 FUN_10164d80(void)

{
  int iVar1;
  
  iVar1 = FUN_10187a60(&stack0x00000004);
  if ((iVar1 != 0) && (*(int *)(iVar1 + 0x5e4) == 3)) {
    return 1;
  }
  return 0;
}


// ==== 10164db0 FUN_10164db0

void FUN_10164db0(undefined4 param_1,undefined4 param_2)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_102102f0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_1014f960(param_1,param_2);
  FUN_101b83d0(param_1,param_2);
  ExceptionList = local_10;
  return;
}


// ==== 10164e11 Catch@10164e11

void Catch_10164e11(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10164e25 Catch@10164e25

void Catch_10164e25(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NConsoleWnd::SetSystemMessageParam");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10164e50 FUN_10164e50

bool FUN_10164e50(void)

{
  int iVar1;
  
  iVar1 = FUN_10187a60(&stack0x00000004);
  if (iVar1 != 0) {
    return *(int *)(iVar1 + 0xdc) != 0;
  }
  return false;
}


// ==== 10164e80 FUN_10164e80

void FUN_10164e80(void)

{
  undefined4 uVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  User *this;
  User *this_00;
  int iVar5;
  int iVar6;
  short *psVar7;
  ushort *puVar8;
  int *in_ECX;
  undefined4 unaff_EBX;
  undefined4 local_254;
  User *local_250;
  int *local_24c;
  int iStack_248;
  undefined4 uStack_240;
  float fStack_23c;
  FString local_238 [12];
  undefined1 auStack_22c [20];
  float fStack_218;
  ushort auStack_210 [256];
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_1021031c;
  local_c = ExceptionList;
  local_10 = DAT_103554c4 ^ (uint)&local_254;
  uVar2 = DAT_103554c4 ^ (uint)&stack0xfffffd9c;
  ExceptionList = &local_c;
  iVar4 = **(int **)(*(int *)(in_ECX[0x14] + 0x54) + 0x38);
  if ((((*(float *)(iVar4 + 0x48) < 0.0) ||
       (iVar5 = **(int **)(*(int *)(in_ECX[0x14] + 0x54) + 0x38),
       (float)*(int *)(iVar5 + 0x94) < *(float *)(iVar5 + 0x48))) ||
      (*(float *)(iVar4 + 0x4c) < 0.0)) ||
     (iVar4 = **(int **)(*(int *)(in_ECX[0x14] + 0x54) + 0x38),
     (float)*(int *)(iVar4 + 0x98) < *(float *)(iVar4 + 0x4c))) goto LAB_1016528e;
  FUN_1014b800(local_238);
  piVar3 = (int *)FUN_10145930(0);
  local_24c = piVar3;
  local_250 = (User *)FUN_1014ddd0(uVar2);
  local_254 = 0;
  if (*(int *)(in_ECX[0x142a] + 0xb4) == 0) {
    iVar4 = FUN_1014ddb0();
    if ((iVar4 == 0) || (*(int *)(iVar4 + 0x62c) != 6)) {
      if ((piVar3 == (int *)0x0) || ((*(byte *)(piVar3 + 0x53b) & 0x40) != 0)) {
        iVar4 = FUN_10145a20();
        if (iVar4 == 0) {
LAB_10165258:
          iVar4 = (**(code **)(*in_ECX + 0x590))();
          if (iVar4 != 0) goto LAB_10165268;
        }
        else {
          iVar5 = FUN_101458d0(*(undefined4 *)(iVar4 + 0x60));
          if ((iVar5 != 0) && (*(int *)(iVar4 + 0x104) != 0)) {
            (**(code **)(**(int **)(iVar4 + 0x104) + 0x70))(auStack_22c,iVar4);
            uStack_240 = *(undefined4 *)(iVar4 + 0x1c0);
            uVar1 = *(undefined4 *)(iVar4 + 0x1bc);
            fStack_23c = fStack_218 * 0.5 + *(float *)(iVar4 + 0x1c4);
            psVar7 = (short *)FUN_101647b0(*(undefined4 *)(iVar5 + 4));
            if ((psVar7 != (short *)0x0) && (*psVar7 != 0)) {
              if (*(int *)(iVar5 + 8) == 0) {
                appSprintf(auStack_210,(ushort *)&DAT_1022dde0,psVar7);
              }
              else {
                FUN_10062590(local_238,*(int *)(iVar5 + 0xc),*(int *)(iVar5 + 0xc) >> 0x1f);
                uStack_4 = 0;
                puVar8 = FString::operator*(local_238);
                appSprintf(auStack_210,(ushort *)L"%s(%s)",psVar7,puVar8);
                uStack_4 = 0xffffffff;
                FString::~FString(local_238);
              }
              piVar3 = (int *)FUN_1014b6a0();
              (**(code **)(*piVar3 + 200))
                        (uVar1,uStack_240,fStack_23c,0xffdcdcdc,auStack_210,0,2,0,0,0);
            }
          }
          local_254 = 3;
        }
      }
      else {
        this = (User *)FUN_10145910(piVar3[0x18]);
        if (this != (User *)0x0) {
          if (*(int *)GL2UseColorCursor_exref == 0) goto LAB_1016528e;
          this_00 = (User *)FUN_1014dd00();
          iVar4 = 0;
          if (((this_00 != (User *)0x0) && (0 < *(int *)(this_00 + 0x304))) ||
             (0 < *(int *)(this + 0x304))) goto LAB_10165268;
          if (this != local_250) goto LAB_10165258;
          local_250 = (User *)0x0;
          if (this_00 != (User *)0x0) {
            iVar4 = User::GetPledgeID(this_00);
            local_250 = (User *)User::GetSurrenderWarID(this_00);
          }
          iVar5 = User::GetPledgeID(this);
          iStack_248 = User::GetSurrenderWarID(this);
          iVar6 = (**(code **)(**(int **)(in_ECX[0x14] + 0x60) + 0xcc))(iVar4,iVar5);
          if (iVar6 == 0) {
            iVar4 = (**(code **)(*in_ECX + 0x590))();
            piVar3 = local_24c;
            if ((iVar4 != 0) || (iVar4 = (**(code **)(*local_24c + 0xc4))(), iVar4 != 0))
            goto LAB_10165268;
            iVar4 = (**(code **)(*piVar3 + 200))();
            if (iVar4 == 0) {
              iVar4 = User::GetPrivateStoreState(this);
              if (((iVar4 == 1) || (iVar4 = User::GetPrivateStoreState(this), iVar4 == 3)) ||
                 ((iVar4 = User::GetPrivateStoreState(this), iVar4 == 5 ||
                  (iVar4 = User::GetPrivateStoreState(this), iVar4 == 8)))) {
                local_254 = 2;
              }
            }
            else {
              local_254 = 2;
            }
          }
          else {
            iVar4 = (**(code **)(**(int **)(in_ECX[0x14] + 0x60) + 0xd0))(iVar4,unaff_EBX);
            if ((iVar4 == 0) &&
               (iVar4 = (**(code **)(**(int **)(in_ECX[0x14] + 0x60) + 0xd0))(iVar5,iStack_248),
               iVar4 == 0)) {
LAB_10165268:
              local_254 = 1;
            }
          }
        }
      }
    }
    else {
      local_254 = 7;
    }
  }
  if (*(int *)GL2UseColorCursor_exref != 0) {
    FUN_101455d0(local_254,0,0);
  }
LAB_1016528e:
  ExceptionList = local_c;
  __security_check_cookie(local_10 ^ (uint)&local_254);
  return;
}


// ==== 101652c0 FUN_101652c0

undefined4 FUN_101652c0(FString *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int in_ECX;
  undefined4 uStack_3c;
  uint uStack_30;
  ushort *local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  puStack_c = &LAB_10210359;
  local_10 = ExceptionList;
  uStack_30 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_30;
  ExceptionList = &local_10;
  local_8 = 0;
  iVar1 = FUN_1014e820();
  if ((iVar1 == 0) || (iVar2 = FString::operator_int(param_1), iVar2 == 0)) {
    ExceptionList = local_10;
    return 0;
  }
  if ((iVar1 == 9) && (iVar1 = FString::operator!=(param_1,(ushort *)L"stat fps"), iVar1 != 0)) {
    ExceptionList = local_10;
    return 0;
  }
  local_18 = FString::operator*(param_1);
  uStack_3c = 0x1016535c;
  iVar1 = ParseCommand(&local_18,(ushort *)L"ReloadUI");
  if (iVar1 == 0) {
    uStack_3c = 0x10165391;
    iVar1 = ParseCommand(&local_18,(ushort *)L"UIDebug");
    if (iVar1 == 0) {
      uStack_3c = 0x101653bb;
      iVar1 = ParseCommand(&local_18,(ushort *)L"SetState");
      if (iVar1 == 0) {
        uStack_3c = 0x101653fd;
        iVar1 = ParseCommand(&local_18,(ushort *)&DAT_10285db4);
        if (iVar1 == 0) {
          FString::operator*(param_1);
          uVar3 = FUN_1014cf30();
          ExceptionList = local_10;
          return uVar3;
        }
        uStack_3c = 0x10165413;
        iVar1 = appStrcmp(local_18,(ushort *)&DAT_1022f9f8);
        if (iVar1 == 0) {
          FUN_1014e8f0();
        }
        else {
          iVar1 = appAtoi(local_18);
          if (iVar1 - 1U < 8) {
            FUN_10165590();
          }
        }
      }
      else {
        FString::FString((FString *)&uStack_3c,local_18);
        local_8 = local_8 & 0xffffff00;
        FUN_10070110();
      }
    }
    else {
      (**(code **)(**(int **)(*(int *)(in_ECX + 0x50ac) + 0x21c) + 0x138))();
    }
  }
  else {
    *(undefined4 *)(in_ECX + 0x517c) = 1;
  }
  ExceptionList = local_10;
  return 1;
}


// ==== 10165470 Catch@10165470

void Catch_10165470(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 10165484 Catch@10165484

void Catch_10165484(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NConsoleWnd::ExecuteClientBuilderCommand");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101654b0 FUN_101654b0

void FUN_101654b0(FString *param_1)

{
  FString *pFVar1;
  int iVar2;
  FString *this;
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  pFVar1 = param_1;
  puStack_c = &LAB_10210380;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  param_1 = (FString *)FString::operator*(param_1);
  iVar2 = ParseCommand((ushort **)&param_1,(ushort *)&DAT_10285db4);
  if (iVar2 == 0) {
    if (7 < *(int *)(in_ECX + 0x5174)) {
      FUN_10052130(0,1);
    }
    this = (FString *)FUN_10083a80(0xc,in_ECX + 0x5170);
    if (this != (FString *)0x0) {
      FString::FString(this,pFVar1);
    }
  }
  ExceptionList = local_10;
  return;
}


// ==== 10165558 Catch@10165558

void Catch_10165558(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1016556c Catch@1016556c

void Catch_1016556c(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NConsoleWnd::AddToReCommandList");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10165590 FUN_10165590

void FUN_10165590(int param_1)

{
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_102103a0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if (param_1 <= *(int *)(in_ECX + 0x5174)) {
    FUN_101652c0(*(int *)(in_ECX + 0x5170) + -0xc + param_1 * 0xc);
  }
  ExceptionList = local_10;
  return;
}


// ==== 101655fd Catch@101655fd

void Catch_101655fd(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10165611 Catch@10165611

void Catch_10165611(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NConsoleWnd::ExecuteReCommand");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10165630 FUN_10165630

void FUN_10165630(int param_1)

{
  undefined4 uVar1;
  FString *pFVar2;
  uint uStack_38;
  FString local_28 [20];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_102103d2;
  local_10 = ExceptionList;
  uStack_38 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_38;
  ExceptionList = &local_10;
  local_8 = 0;
  FString::FString(local_28,(ushort *)&DAT_1022f9f8);
  if (param_1 == 0) {
    local_8._0_1_ = 2;
    uVar1 = 0x726;
  }
  else {
    local_8._0_1_ = 1;
    uVar1 = 0x71c;
  }
  pFVar2 = local_28;
  FUN_10005c30(uVar1,pFVar2);
  FUN_100d1790(uVar1,pFVar2);
  local_8 = (uint)local_8._1_3_ << 8;
  FString::~FString(local_28);
  ExceptionList = local_10;
  return;
}


// ==== 101656c2 Catch@101656c2

void Catch_101656c2(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 101656d6 Catch@101656d6

void Catch_101656d6(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NConsoleWnd::SetQuestOn");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10165700 FUN_10165700

void FUN_10165700(char param_1)

{
  undefined4 uVar1;
  FString *pFVar2;
  uint uStack_38;
  FString local_28 [20];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_10210402;
  local_10 = ExceptionList;
  uStack_38 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_38;
  ExceptionList = &local_10;
  local_8 = 0;
  FString::FString(local_28,(ushort *)&DAT_1022f9f8);
  if (param_1 == '\0') {
    local_8._0_1_ = 2;
    uVar1 = 600;
  }
  else {
    local_8._0_1_ = 1;
    uVar1 = 0x24e;
  }
  pFVar2 = local_28;
  FUN_10005c30(uVar1,pFVar2);
  FUN_100d1790(uVar1,pFVar2);
  local_8 = (uint)local_8._1_3_ << 8;
  FString::~FString(local_28);
  ExceptionList = local_10;
  return;
}


// ==== 10165792 Catch@10165792

void Catch_10165792(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 101657a6 Catch@101657a6

void Catch_101657a6(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NConsoleWnd::SetJoyPadEx1On");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101657d0 FUN_101657d0

void FUN_101657d0(char param_1)

{
  undefined4 uVar1;
  FString *pFVar2;
  uint uStack_38;
  FString local_28 [20];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_10210432;
  local_10 = ExceptionList;
  uStack_38 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_38;
  ExceptionList = &local_10;
  local_8 = 0;
  FString::FString(local_28,(ushort *)&DAT_1022f9f8);
  if (param_1 == '\0') {
    local_8._0_1_ = 2;
    uVar1 = 0x26c;
  }
  else {
    local_8._0_1_ = 1;
    uVar1 = 0x262;
  }
  pFVar2 = local_28;
  FUN_10005c30(uVar1,pFVar2);
  FUN_100d1790(uVar1,pFVar2);
  local_8 = (uint)local_8._1_3_ << 8;
  FString::~FString(local_28);
  ExceptionList = local_10;
  return;
}


// ==== 10165862 Catch@10165862

void Catch_10165862(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10165876 Catch@10165876

void Catch_10165876(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NConsoleWnd::SetJoyPadEx2On");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101658a0 FUN_101658a0

void FUN_101658a0(L2ParamStack *param_1)

{
  ushort *puVar1;
  void *pvVar2;
  void *pvVar3;
  undefined4 uVar4;
  undefined1 *puVar5;
  uint uStack_50;
  FString local_40 [12];
  FString local_34 [12];
  undefined1 local_28 [20];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_1021047c;
  local_10 = ExceptionList;
  uStack_50 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_50;
  ExceptionList = &local_10;
  local_8 = 0;
  puVar1 = L2ParamStack::Top(param_1);
  pvVar2 = L2ParamStack::Top(param_1);
  pvVar3 = L2ParamStack::Top(param_1);
  FUN_1003f970();
  local_8._0_1_ = 1;
  FString::FString(local_40,puVar1);
  local_8._0_1_ = 2;
  FString::FString(local_34,"TownMapName");
  local_8._0_1_ = 3;
  FUN_10040230(local_34,local_40);
  local_8._0_1_ = 2;
  FString::~FString(local_34);
  local_8._0_1_ = 1;
  FString::~FString(local_40);
  FString::FString(local_40,"UserPosX");
  local_8._0_1_ = 4;
  FUN_10040090(local_40,pvVar2);
  local_8._0_1_ = 1;
  FString::~FString(local_40);
  FString::FString(local_40,"UserPosY");
  local_8._0_1_ = 5;
  FUN_10040090(local_40,pvVar3);
  local_8._0_1_ = 1;
  FString::~FString(local_40);
  puVar5 = local_28;
  uVar4 = 0x6ea;
  FUN_10005c30(0x6ea,puVar5);
  FUN_100d1790(uVar4,puVar5);
  local_8 = (uint)local_8._1_3_ << 8;
  FUN_1003fff0();
  ExceptionList = local_10;
  return;
}


// ==== 101659db Catch@101659db

void Catch_101659db(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 101659ef Catch@101659ef

void Catch_101659ef(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NConsoleWnd::ReceiveShowTownMapPacket");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10165a10 FUN_10165a10

void FUN_10165a10(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  uint uStack_38;
  undefined1 local_28 [20];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  puStack_c = &LAB_102104a8;
  local_10 = ExceptionList;
  uStack_38 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_38;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_1003f970();
  local_8 = CONCAT31(local_8._1_3_,1);
  puVar3 = local_28;
  uVar2 = 0x992;
  FUN_10005c30(0x992,puVar3);
  iVar1 = FUN_100d1790(uVar2,puVar3);
  if (iVar1 != 0) {
    FUN_10147810(*(undefined4 *)GIsL2Mark_exref);
  }
  local_8 = local_8 & 0xffffff00;
  FUN_1003fff0();
  ExceptionList = local_10;
  return;
}


// ==== 10165a9e Catch@10165a9e

void Catch_10165a9e(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10165ab2 Catch@10165ab2

void Catch_10165ab2(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NConsoleWnd::ReceiveObserverModeOnPacket");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10165ad0 FUN_10165ad0

void FUN_10165ad0(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  uint uStack_38;
  undefined1 local_28 [20];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  puStack_c = &LAB_102104d8;
  local_10 = ExceptionList;
  uStack_38 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_38;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_1003f970();
  local_8 = CONCAT31(local_8._1_3_,1);
  puVar3 = local_28;
  uVar2 = 0x99c;
  FUN_10005c30(0x99c,puVar3);
  iVar1 = FUN_100d1790(uVar2,puVar3);
  if (iVar1 != 0) {
    FUN_101478b0();
  }
  local_8 = local_8 & 0xffffff00;
  FUN_1003fff0();
  ExceptionList = local_10;
  return;
}


// ==== 10165b55 Catch@10165b55

void Catch_10165b55(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10165b69 Catch@10165b69

void Catch_10165b69(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NConsoleWnd::ReceiveObserverModeOffPacket");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10165b90 FUN_10165b90

void FUN_10165b90(L2ParamStack *param_1)

{
  int iVar1;
  void *pvVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  code *pcVar5;
  undefined1 *puVar6;
  uint uStack_48;
  FString local_38 [12];
  undefined1 local_2c [20];
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  puStack_c = &LAB_10210523;
  local_10 = ExceptionList;
  uStack_48 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_48;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_1003f970();
  pcVar5 = Top_exref;
  local_8._0_1_ = 1;
  pvVar2 = L2ParamStack::Top(param_1);
  FString::FString(local_38,(ushort *)L"GradeID");
  local_8._0_1_ = 2;
  FUN_10040090(local_38,pvVar2);
  local_8._0_1_ = 1;
  FString::~FString(local_38);
  pvVar2 = L2ParamStack::Top(param_1);
  FString::FString(local_38,(ushort *)L"Command");
  local_8._0_1_ = 3;
  FUN_10040090(local_38,pvVar2);
  local_8 = CONCAT31(local_8._1_3_,1);
  FString::~FString(local_38);
  local_18 = 0;
  while (iVar1 = local_18, local_18 < 0x20) {
    uVar3 = (*pcVar5)();
    uVar4 = FString::Printf((ushort *)local_38,L"PowerValue%d",iVar1);
    local_8._0_1_ = 4;
    FUN_10040090(uVar4,uVar3);
    local_8 = CONCAT31(local_8._1_3_,1);
    FString::~FString(local_38);
    pcVar5 = Top_exref;
    local_18 = iVar1 + 1;
  }
  puVar6 = local_2c;
  uVar3 = 0x172;
  FUN_10005c30(0x172,puVar6);
  FUN_100d1790(uVar3,puVar6);
  local_8 = local_8 & 0xffffff00;
  FUN_1003fff0();
  ExceptionList = local_10;
  return;
}


// ==== 10165cc3 Catch@10165cc3

void Catch_10165cc3(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 10165cd7 Catch@10165cd7

void Catch_10165cd7(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NConsoleWnd::SetPledgePower");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10165d00 FUN_10165d00

void FUN_10165d00(void)

{
  FString *this;
  int iVar1;
  undefined1 local_30 [12];
  FString local_24 [12];
  FString local_18 [12];
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1021056c;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_1003f970(DAT_103554c4 ^ (uint)&stack0xffffffcc);
  local_4 = 0;
  iVar1 = 0;
  if ((*(int *)(DAT_103663bc + 0x5110) == 0) ||
     (iVar1 = *(int *)(*(int *)(DAT_103663bc + 0x5110) + 0x74), iVar1 == 0)) {
    FString::FString(local_24,(ushort *)&DAT_10233714);
    local_4._0_1_ = 3;
    FString::FString(local_18,(ushort *)L"Show");
    local_4._0_1_ = 4;
    FUN_10040230(local_18,local_24);
    local_4._0_1_ = 3;
    FString::~FString(local_18);
    this = local_24;
  }
  else {
    FString::FString(local_18,&DAT_102468e4);
    local_4._0_1_ = 1;
    FString::FString(local_24,(ushort *)L"Show");
    local_4._0_1_ = 2;
    FUN_10040230(local_24,local_18);
    local_4._0_1_ = 1;
    FString::~FString(local_24);
    this = local_18;
  }
  local_4 = (uint)local_4._1_3_ << 8;
  FString::~FString(this);
  if (DAT_1035786c == 0) {
    FUN_10005270();
  }
  FUN_100d1790(1000,local_30);
  if (*(int *)(DAT_103663bc + 0x5110) != 0) {
    *(uint *)(*(int *)(DAT_103663bc + 0x5110) + 0x74) = (uint)(iVar1 == 0);
  }
  local_4 = 0xffffffff;
  FUN_1003fff0();
  ExceptionList = local_c;
  return;
}


// ==== 10165e70 FUN_10165e70

void FUN_10165e70(L2ParamStack *param_1)

{
  void *pvVar1;
  void *pvVar2;
  int iVar3;
  undefined4 uVar4;
  undefined1 *puVar5;
  uint uStack_64;
  FString local_54 [12];
  FString local_48 [12];
  FString local_3c [12];
  undefined1 local_30 [20];
  int local_1c;
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  puStack_c = &LAB_102105c5;
  local_10 = ExceptionList;
  uStack_64 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_64;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_1003f970();
  local_8._0_1_ = 1;
  L2ParamStack::Top(param_1);
  FString::FString(local_3c,(ushort *)L"Winner");
  local_8._0_1_ = 2;
  pvVar1 = L2ParamStack::Top(param_1);
  FUN_10040090(local_3c,pvVar1);
  local_8._0_1_ = 1;
  FString::~FString(local_3c);
  pvVar1 = L2ParamStack::Top(param_1);
  FString::FString(local_3c,(ushort *)L"RoomNum");
  local_8._0_1_ = 3;
  FUN_10040090(local_3c,pvVar1);
  local_8 = CONCAT31(local_8._1_3_,1);
  FString::~FString(local_3c);
  for (iVar3 = 0; local_1c = iVar3, iVar3 < (int)pvVar1; iVar3 = iVar3 + 1) {
    local_18 = FString::Printf((ushort *)local_3c,L"SealNum_%d",iVar3);
    local_8._0_1_ = 4;
    pvVar2 = L2ParamStack::Top(param_1);
    FUN_10040090(local_18,pvVar2);
    local_8._0_1_ = 1;
    FString::~FString(local_3c);
    local_18 = FString::Printf((ushort *)local_48,L"Winner_%d",iVar3);
    local_8._0_1_ = 5;
    pvVar2 = L2ParamStack::Top(param_1);
    FUN_10040090(local_18,pvVar2);
    local_8._0_1_ = 1;
    FString::~FString(local_48);
    local_18 = FString::Printf((ushort *)local_54,L"Msg_%d",iVar3);
    local_8._0_1_ = 6;
    pvVar2 = L2ParamStack::Top(param_1);
    FUN_10040090(local_18,pvVar2);
    local_8 = CONCAT31(local_8._1_3_,1);
    FString::~FString(local_54);
  }
  puVar5 = local_30;
  uVar4 = 0x302;
  FUN_10005c30(0x302,puVar5);
  FUN_100d1790(uVar4,puVar5);
  local_8 = local_8 & 0xffffff00;
  FUN_1003fff0();
  ExceptionList = local_10;
  return;
}


// ==== 1016601a Catch@1016601a

void Catch_1016601a(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x1c) = *(undefined4 *)(unaff_EBP + -0x20);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x1c,&DAT_102a47f0);
}


// ==== 1016602e Catch@1016602e

void Catch_1016602e(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NConsoleWnd::SetSSQPreStatus");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10166050 FUN_10166050

void FUN_10166050(L2ParamStack *param_1)

{
  void *pvVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  uint uStack_44;
  FString local_34 [12];
  undefined1 local_28 [20];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_10210678;
  local_10 = ExceptionList;
  uStack_44 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_44;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_1003f970();
  local_8._0_1_ = 1;
  FString::FString(local_34,(ushort *)L"SSQStatus");
  local_8._0_1_ = 2;
  pvVar1 = L2ParamStack::Top(param_1);
  FUN_10040090(local_34,pvVar1);
  local_8._0_1_ = 1;
  FString::~FString(local_34);
  FString::FString(local_34,(ushort *)L"Period");
  local_8._0_1_ = 3;
  pvVar1 = L2ParamStack::Top(param_1);
  FUN_10040090(local_34,pvVar1);
  local_8._0_1_ = 1;
  FString::~FString(local_34);
  FString::FString(local_34,(ushort *)L"MsgNum1");
  local_8._0_1_ = 4;
  pvVar1 = L2ParamStack::Top(param_1);
  FUN_10040090(local_34,pvVar1);
  local_8._0_1_ = 1;
  FString::~FString(local_34);
  FString::FString(local_34,(ushort *)L"MsgNum2");
  local_8._0_1_ = 5;
  pvVar1 = L2ParamStack::Top(param_1);
  FUN_10040090(local_34,pvVar1);
  local_8._0_1_ = 1;
  FString::~FString(local_34);
  FString::FString(local_34,(ushort *)L"SSQTeam");
  local_8._0_1_ = 6;
  pvVar1 = L2ParamStack::Top(param_1);
  FUN_10040090(local_34,pvVar1);
  local_8._0_1_ = 1;
  FString::~FString(local_34);
  FString::FString(local_34,(ushort *)L"SelectedSeal");
  local_8._0_1_ = 7;
  pvVar1 = L2ParamStack::Top(param_1);
  FUN_10040090(local_34,pvVar1);
  local_8._0_1_ = 1;
  FString::~FString(local_34);
  FString::FString(local_34,(ushort *)L"Contribution");
  local_8._0_1_ = 8;
  pvVar1 = L2ParamStack::Top(param_1);
  FUN_10040090(local_34,pvVar1);
  local_8._0_1_ = 1;
  FString::~FString(local_34);
  FString::FString(local_34,(ushort *)L"SealStoneAdena");
  local_8._0_1_ = 9;
  pvVar1 = L2ParamStack::Top(param_1);
  FUN_10040090(local_34,pvVar1);
  local_8._0_1_ = 1;
  FString::~FString(local_34);
  FString::FString(local_34,(ushort *)L"Team1HuntingMark");
  local_8._0_1_ = 10;
  pvVar1 = L2ParamStack::Top(param_1);
  FUN_10040090(local_34,pvVar1);
  local_8._0_1_ = 1;
  FString::~FString(local_34);
  FString::FString(local_34,(ushort *)L"Team1MainEventMark");
  local_8._0_1_ = 0xb;
  pvVar1 = L2ParamStack::Top(param_1);
  FUN_10040090(local_34,pvVar1);
  local_8._0_1_ = 1;
  FString::~FString(local_34);
  FString::FString(local_34,(ushort *)L"Team2HuntingMark");
  local_8._0_1_ = 0xc;
  pvVar1 = L2ParamStack::Top(param_1);
  FUN_10040090(local_34,pvVar1);
  local_8._0_1_ = 1;
  FString::~FString(local_34);
  FString::FString(local_34,(ushort *)L"Team2MainEventMark");
  local_8._0_1_ = 0xd;
  pvVar1 = L2ParamStack::Top(param_1);
  FUN_10040090(local_34,pvVar1);
  local_8._0_1_ = 1;
  FString::~FString(local_34);
  FString::FString(local_34,(ushort *)L"Team1Per");
  local_8._0_1_ = 0xe;
  pvVar1 = L2ParamStack::Top(param_1);
  FUN_10040090(local_34,pvVar1);
  local_8._0_1_ = 1;
  FString::~FString(local_34);
  FString::FString(local_34,(ushort *)L"Team2Per");
  local_8._0_1_ = 0xf;
  pvVar1 = L2ParamStack::Top(param_1);
  FUN_10040090(local_34,pvVar1);
  local_8._0_1_ = 1;
  FString::~FString(local_34);
  FString::FString(local_34,(ushort *)L"Team1TotalMark");
  local_8._0_1_ = 0x10;
  pvVar1 = L2ParamStack::Top(param_1);
  FUN_10040090(local_34,pvVar1);
  local_8._0_1_ = 1;
  FString::~FString(local_34);
  FString::FString(local_34,(ushort *)L"Team2TotalMark");
  local_8._0_1_ = 0x11;
  pvVar1 = L2ParamStack::Top(param_1);
  FUN_10040090(local_34,pvVar1);
  local_8._0_1_ = 1;
  FString::~FString(local_34);
  puVar3 = local_28;
  uVar2 = 0x2e4;
  FUN_10005c30(0x2e4,puVar3);
  FUN_100d1790(uVar2,puVar3);
  local_8 = (uint)local_8._1_3_ << 8;
  FUN_1003fff0();
  ExceptionList = local_10;
  return;
}


// ==== 101663c4 Catch@101663c4

void Catch_101663c4(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 101663d8 Catch@101663d8

void Catch_101663d8(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NConsoleWnd::SetSSQStatus");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10166400 FUN_10166400

void FUN_10166400(L2ParamStack *param_1)

{
  void *pvVar1;
  undefined4 uVar2;
  void *pvVar3;
  ushort *puVar4;
  int iVar5;
  undefined1 *puVar6;
  uint uStack_e0;
  FString local_d0 [12];
  FString local_c4 [12];
  FString local_b8 [12];
  FString local_ac [12];
  FString local_a0 [12];
  FString local_94 [12];
  undefined1 *local_88;
  void *local_84;
  undefined1 *puStack_80;
  uint local_7c;
  FString local_78 [12];
  FString local_6c [12];
  FString local_60 [12];
  FString local_54 [16];
  FString local_44 [16];
  int local_34;
  void *local_30;
  FString local_2c [12];
  int local_20;
  undefined1 local_1c [12];
  int local_10;
  int local_c;
  void *local_8;
  
  puStack_80 = &LAB_10210726;
  local_84 = ExceptionList;
  uStack_e0 = DAT_103554c4 ^ (uint)local_78;
  local_88 = (undefined1 *)&uStack_e0;
  ExceptionList = &local_84;
  local_7c = 0;
  FUN_1003f970();
  local_7c._0_1_ = 1;
  FString::FString(local_2c,(ushort *)L"SSQStatus");
  local_7c._0_1_ = 2;
  pvVar1 = L2ParamStack::Top(param_1);
  FUN_10040090(local_2c,pvVar1);
  local_7c._0_1_ = 1;
  FString::~FString(local_2c);
  pvVar1 = L2ParamStack::Top(param_1);
  local_30 = pvVar1;
  FString::FString(local_2c,(ushort *)L"EventNum");
  local_7c._0_1_ = 3;
  FUN_10040090(local_2c,pvVar1);
  local_7c = CONCAT31(local_7c._1_3_,1);
  FString::~FString(local_2c);
  for (iVar5 = 0; local_34 = iVar5, iVar5 < (int)local_30; iVar5 = iVar5 + 1) {
    uVar2 = FString::Printf((ushort *)local_c4,L"EventType_%d",iVar5);
    local_7c._0_1_ = 4;
    pvVar1 = L2ParamStack::Top(param_1);
    FUN_10040090(uVar2,pvVar1);
    local_7c._0_1_ = 1;
    FString::~FString(local_c4);
    pvVar1 = L2ParamStack::Top(param_1);
    uVar2 = FString::Printf((ushort *)local_6c,L"RoomNum_%d",iVar5);
    local_7c._0_1_ = 5;
    FUN_10040090(uVar2,pvVar1);
    local_7c = CONCAT31(local_7c._1_3_,1);
    FString::~FString(local_6c);
    for (local_c = 0; local_c < (int)pvVar1; local_c = local_c + 1) {
      local_8 = (void *)FString::Printf((ushort *)local_ac,L"EventNo_%d_%d",iVar5,local_c);
      local_7c._0_1_ = 6;
      pvVar3 = L2ParamStack::Top(param_1);
      FUN_10040090(local_8,pvVar3);
      local_7c._0_1_ = 1;
      FString::~FString(local_ac);
      local_8 = (void *)FString::Printf((ushort *)local_94,L"WinPoint_%d_%d",iVar5,local_c);
      local_7c._0_1_ = 7;
      pvVar3 = L2ParamStack::Top(param_1);
      FUN_10040090(local_8,pvVar3);
      local_7c._0_1_ = 1;
      FString::~FString(local_94);
      local_8 = (void *)FString::Printf((ushort *)local_54,L"Team2Score_%d_%d",iVar5,local_c);
      local_7c._0_1_ = 8;
      pvVar3 = L2ParamStack::Top(param_1);
      FUN_10040090(local_8,pvVar3);
      local_7c._0_1_ = 1;
      FString::~FString(local_54);
      local_8 = L2ParamStack::Top(param_1);
      uVar2 = FString::Printf((ushort *)local_60,L"Team2Num_%d_%d",iVar5,local_c);
      local_7c._0_1_ = 9;
      FUN_10040090(uVar2,local_8);
      local_7c = CONCAT31(local_7c._1_3_,1);
      FString::~FString(local_60);
      for (local_20 = 0; local_20 < (int)local_8; local_20 = local_20 + 1) {
        puVar4 = L2ParamStack::Top(param_1);
        FString::FString(local_2c,puVar4);
        local_7c._0_1_ = 10;
        uVar2 = FString::Printf((ushort *)local_78,L"Team2MemberName_%d_%d_%d",iVar5,local_c,
                                local_20);
        local_7c._0_1_ = 0xb;
        FUN_10040230(uVar2,local_2c);
        local_7c._0_1_ = 10;
        FString::~FString(local_78);
        local_7c = CONCAT31(local_7c._1_3_,1);
        FString::~FString(local_2c);
      }
      local_8 = (void *)FString::Printf((ushort *)local_a0,L"Team1Score_%d_%d",iVar5,local_c);
      local_7c._0_1_ = 0xc;
      pvVar3 = L2ParamStack::Top(param_1);
      FUN_10040090(local_8,pvVar3);
      local_7c._0_1_ = 1;
      FString::~FString(local_a0);
      local_8 = L2ParamStack::Top(param_1);
      uVar2 = FString::Printf((ushort *)local_b8,L"Team1Num_%d_%d",iVar5,local_c);
      local_7c._0_1_ = 0xd;
      FUN_10040090(uVar2,local_8);
      local_7c = CONCAT31(local_7c._1_3_,1);
      FString::~FString(local_b8);
      for (local_10 = 0; local_10 < (int)local_8; local_10 = local_10 + 1) {
        puVar4 = L2ParamStack::Top(param_1);
        FString::FString(local_44,puVar4);
        local_7c._0_1_ = 0xe;
        uVar2 = FString::Printf((ushort *)local_d0,L"Team1MemberName_%d_%d_%d",iVar5,local_c,
                                local_10);
        local_7c._0_1_ = 0xf;
        FUN_10040230(uVar2,local_44);
        local_7c._0_1_ = 0xe;
        FString::~FString(local_d0);
        local_7c = CONCAT31(local_7c._1_3_,1);
        FString::~FString(local_44);
      }
    }
  }
  puVar6 = local_1c;
  uVar2 = 0x2ee;
  FUN_10005c30(0x2ee,puVar6);
  FUN_100d1790(uVar2,puVar6);
  local_7c = local_7c & 0xffffff00;
  FUN_1003fff0();
  ExceptionList = local_84;
  return;
}


// ==== 101667cf Catch@101667cf

void Catch_101667cf(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + 0x40) = *(undefined4 *)(unaff_EBP + 0x30);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + 0x40,&DAT_102a47f0);
}


// ==== 101667e3 Catch@101667e3

void Catch_101667e3(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NConsoleWnd::SetSSQMainEvent");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10166800 FUN_10166800

void FUN_10166800(L2ParamStack *param_1)

{
  void *pvVar1;
  void *pvVar2;
  int iVar3;
  undefined4 uVar4;
  undefined1 *puVar5;
  uint uStack_70;
  FString local_60 [12];
  FString local_54 [12];
  FString local_48 [12];
  FString local_3c [12];
  undefined1 local_30 [20];
  int local_1c;
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  puStack_c = &LAB_102107a0;
  local_10 = ExceptionList;
  uStack_70 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_70;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_1003f970();
  local_8._0_1_ = 1;
  FString::FString(local_3c,(ushort *)L"SSQStatus");
  local_8._0_1_ = 2;
  pvVar1 = L2ParamStack::Top(param_1);
  FUN_10040090(local_3c,pvVar1);
  local_8._0_1_ = 1;
  FString::~FString(local_3c);
  FString::FString(local_3c,(ushort *)L"NeedPoint1");
  local_8._0_1_ = 3;
  pvVar1 = L2ParamStack::Top(param_1);
  FUN_10040090(local_3c,pvVar1);
  local_8._0_1_ = 1;
  FString::~FString(local_3c);
  FString::FString(local_3c,(ushort *)L"NeedPoint2");
  local_8._0_1_ = 4;
  pvVar1 = L2ParamStack::Top(param_1);
  FUN_10040090(local_3c,pvVar1);
  local_8._0_1_ = 1;
  FString::~FString(local_3c);
  pvVar1 = L2ParamStack::Top(param_1);
  FString::FString(local_3c,(ushort *)L"SealNum");
  local_8._0_1_ = 5;
  FUN_10040090(local_3c,pvVar1);
  local_8 = CONCAT31(local_8._1_3_,1);
  FString::~FString(local_3c);
  for (iVar3 = 0; local_1c = iVar3, iVar3 < (int)pvVar1; iVar3 = iVar3 + 1) {
    local_18 = FString::Printf((ushort *)local_3c,L"SealID_%d",iVar3);
    local_8._0_1_ = 6;
    pvVar2 = L2ParamStack::Top(param_1);
    FUN_10040090(local_18,pvVar2);
    local_8._0_1_ = 1;
    FString::~FString(local_3c);
    local_18 = FString::Printf((ushort *)local_48,L"OwnerTeamID_%d",iVar3);
    local_8._0_1_ = 7;
    pvVar2 = L2ParamStack::Top(param_1);
    FUN_10040090(local_18,pvVar2);
    local_8._0_1_ = 1;
    FString::~FString(local_48);
    local_18 = FString::Printf((ushort *)local_54,L"Team2Mark_%d",iVar3);
    local_8._0_1_ = 8;
    pvVar2 = L2ParamStack::Top(param_1);
    FUN_10040090(local_18,pvVar2);
    local_8._0_1_ = 1;
    FString::~FString(local_54);
    local_18 = FString::Printf((ushort *)local_60,L"Team1Mark_%d",iVar3);
    local_8._0_1_ = 9;
    pvVar2 = L2ParamStack::Top(param_1);
    FUN_10040090(local_18,pvVar2);
    local_8 = CONCAT31(local_8._1_3_,1);
    FString::~FString(local_60);
  }
  puVar5 = local_30;
  uVar4 = 0x2f8;
  FUN_10005c30(0x2f8,puVar5);
  FUN_100d1790(uVar4,puVar5);
  local_8 = local_8 & 0xffffff00;
  FUN_1003fff0();
  ExceptionList = local_10;
  return;
}


// ==== 10166a3e Catch@10166a3e

void Catch_10166a3e(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x1c) = *(undefined4 *)(unaff_EBP + -0x20);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x1c,&DAT_102a47f0);
}


// ==== 10166a52 Catch@10166a52

void Catch_10166a52(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NConsoleWnd::SetSSQSealStatus");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10166a70 FUN_10166a70

void FUN_10166a70(void)

{
  undefined4 uVar1;
  FString *pFVar2;
  uint uStack_38;
  FString local_28 [20];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_102107c9;
  local_10 = ExceptionList;
  uStack_38 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_38;
  ExceptionList = &local_10;
  local_8 = 0;
  FString::FString(local_28,(ushort *)L"Enable=1");
  local_8._0_1_ = 1;
  pFVar2 = local_28;
  uVar1 = 0x794;
  FUN_10005c30(0x794,pFVar2);
  FUN_100d1790(uVar1,pFVar2);
  local_8 = (uint)local_8._1_3_ << 8;
  FString::~FString(local_28);
  ExceptionList = local_10;
  return;
}


// ==== 10166aef Catch@10166aef

void Catch_10166aef(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10166b03 Catch@10166b03

void Catch_10166b03(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NConsoleWnd::SetPetitionFeedBackEnable");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10166b20 FUN_10166b20

void FUN_10166b20(undefined4 param_1,undefined4 param_2,undefined4 param_3,double param_4)

{
  undefined4 uVar1;
  undefined1 *puVar2;
  uint uStack_44;
  FString local_34 [12];
  undefined1 local_28 [20];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_1021081c;
  local_10 = ExceptionList;
  uStack_44 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_44;
  ExceptionList = &local_10;
  local_8 = 0;
  if (*(int *)GIsUseXMLUI_exref != 0) {
    FUN_1003f970();
    local_8._0_1_ = 1;
    FString::FString(local_34,(ushort *)L"Type");
    local_8._0_1_ = 2;
    FUN_10040090(local_34,param_1);
    local_8._0_1_ = 1;
    FString::~FString(local_34);
    FString::FString(local_34,(ushort *)L"Duration");
    local_8._0_1_ = 3;
    FUN_10040090(local_34,param_2);
    local_8._0_1_ = 1;
    FString::~FString(local_34);
    FString::FString(local_34,(ushort *)L"Ticks");
    local_8._0_1_ = 4;
    FUN_10040090(local_34,param_3);
    local_8._0_1_ = 1;
    FString::~FString(local_34);
    FString::FString(local_34,(ushort *)L"Amount");
    local_8._0_1_ = 5;
    FUN_10040160(local_34,(float)param_4);
    local_8._0_1_ = 1;
    FString::~FString(local_34);
    puVar2 = local_28;
    uVar1 = 0x46;
    FUN_10005c30(0x46,puVar2);
    FUN_100d1790(uVar1,puVar2);
    local_8 = (uint)local_8._1_3_ << 8;
    FUN_1003fff0();
  }
  ExceptionList = local_10;
  return;
}


// ==== 10166c69 Catch@10166c69

void Catch_10166c69(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10166c7d Catch@10166c7d

void Catch_10166c7d(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NConsoleWnd::RegenStatus");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10166ca0 FUN_10166ca0

void FUN_10166ca0(undefined4 param_1,char param_2)

{
  undefined3 uVar1;
  int iVar2;
  int *in_ECX;
  FString *this;
  undefined4 uStack_68;
  undefined4 uStack_64;
  uint uStack_5c;
  FString local_4c [12];
  FString local_40 [12];
  FString local_34 [12];
  FString local_28 [20];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10210888;
  local_10 = ExceptionList;
  uStack_5c = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_5c;
  ExceptionList = &local_10;
  local_8._1_3_ = 0;
  uVar1 = local_8._1_3_;
  local_8._0_1_ = 2;
  local_8._1_3_ = 0;
  if (param_2 == '\0') {
    uStack_64 = 0x10166df2;
    local_8._1_3_ = uVar1;
    FString::FString(local_4c,(ushort *)L"GamingState");
    local_8._0_1_ = 3;
    uStack_64 = 0x10166e06;
    (**(code **)(*in_ECX + 0x780))();
    this = local_4c;
  }
  else {
    local_14 = (undefined1 *)&uStack_5c;
    if (param_2 != '\x01') goto LAB_10166e12;
    uStack_64 = 0x10166cfd;
    local_14 = (undefined1 *)&uStack_5c;
    FString::FString(local_28,(ushort *)L"EventMatchObserverState");
    local_8._0_1_ = 4;
    uStack_64 = 0x10166d11;
    (**(code **)(*in_ECX + 0x780))();
    local_8._0_1_ = 2;
    FString::~FString(local_28);
    iVar2 = FUN_101ad070();
    if (iVar2 != 0) {
      uStack_64 = 0x10166d3e;
      FUN_101b07f0();
      FString::FString((FString *)&uStack_68,(FString *)&stack0x00000010);
      local_8._0_1_ = 2;
      FUN_101b1230(0);
      FString::FString((FString *)&uStack_68,(FString *)&stack0x0000001c);
      local_8._0_1_ = 2;
      FUN_101b1230(1);
    }
    uStack_64 = 0x10166d90;
    FString::FString(local_34,(ushort *)&DAT_1022f9f8);
    local_8._0_1_ = 7;
    uStack_64 = 0x8ac;
    uStack_68 = 0x10166da2;
    FUN_10005c30();
    uStack_68 = 0x10166da9;
    FUN_100d1790();
    local_8._0_1_ = 2;
    FString::~FString(local_34);
    uStack_64 = 0x10166dc3;
    FString::FString(local_40,(ushort *)&DAT_1022f9f8);
    local_8._0_1_ = 8;
    uStack_64 = 0x8b6;
    uStack_68 = 0x10166dd5;
    FUN_10005c30();
    uStack_68 = 0x10166ddc;
    FUN_100d1790();
    this = local_40;
  }
  local_8 = CONCAT31(local_8._1_3_,2);
  FString::~FString(this);
LAB_10166e12:
  local_8 = 0;
  FString::~FString((FString *)&stack0x00000010);
  local_8 = 0xffffffff;
  FString::~FString((FString *)&stack0x0000001c);
  ExceptionList = local_10;
  return;
}


// ==== 10166e46 Catch@10166e46

void Catch_10166e46(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10166e5a Catch@10166e5a

void Catch_10166e5a(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NConsoleWnd::OnEventMatchObserver");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10166e80 FUN_10166e80

void FUN_10166e80(char param_1)

{
  undefined4 uVar1;
  undefined1 *puVar2;
  uint uStack_44;
  FString local_34 [12];
  undefined1 local_28 [20];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_102108d3;
  local_10 = ExceptionList;
  uStack_44 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_44;
  ExceptionList = &local_10;
  local_8._0_1_ = 1;
  local_8._1_3_ = 0;
  FUN_1003f970();
  local_8._0_1_ = 2;
  FString::FString(local_34,(ushort *)L"Type");
  local_8._0_1_ = 3;
  FUN_10040090(local_34,(int)param_1);
  local_8._0_1_ = 2;
  FString::~FString(local_34);
  FString::FString(local_34,(ushort *)L"Message");
  local_8._0_1_ = 4;
  FUN_10040230(local_34,&stack0x00000008);
  local_8._0_1_ = 2;
  FString::~FString(local_34);
  puVar2 = local_28;
  uVar1 = 0x8de;
  FUN_10005c30(0x8de,puVar2);
  FUN_100d1790(uVar1,puVar2);
  local_8 = CONCAT31(local_8._1_3_,1);
  FUN_1003fff0();
  local_8 = 0xffffffff;
  FString::~FString((FString *)&stack0x00000008);
  ExceptionList = local_10;
  return;
}


// ==== 10166f65 Catch@10166f65

void Catch_10166f65(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10166f79 Catch@10166f79

void Catch_10166f79(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NConsoleWnd::OnEventMatchMessage");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10166fa0 FUN_10166fa0

void FUN_10166fa0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  FString *pFVar3;
  uint uStack_38;
  FString local_28 [20];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_102108f9;
  local_10 = ExceptionList;
  uStack_38 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_38;
  ExceptionList = &local_10;
  local_8 = 0;
  iVar1 = FUN_101ad070();
  if (iVar1 != 0) {
    FUN_101b10e0(0,param_2);
    FUN_101b10e0(1,param_3);
  }
  FString::FString(local_28,(ushort *)&DAT_1022f9f8);
  local_8._0_1_ = 1;
  pFVar3 = local_28;
  uVar2 = 0x8c0;
  FUN_10005c30(0x8c0,pFVar3);
  FUN_100d1790(uVar2,pFVar3);
  local_8 = (uint)local_8._1_3_ << 8;
  FString::~FString(local_28);
  ExceptionList = local_10;
  return;
}


// ==== 10167051 Catch@10167051

void Catch_10167051(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10167065 Catch@10167065

void Catch_10167065(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NConsoleWnd::OnEventMatchScore");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10167090 FUN_10167090

void FUN_10167090(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  uint uStack_44;
  FString local_34 [12];
  undefined1 local_28 [20];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_10210931;
  local_10 = ExceptionList;
  uStack_44 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_44;
  ExceptionList = &local_10;
  local_8 = 0;
  iVar1 = FUN_101ad070();
  if (iVar1 != 0) {
    FUN_1003f970();
    local_8._0_1_ = 1;
    FString::FString(local_34,(ushort *)L"TeamID");
    local_8._0_1_ = 2;
    uVar2 = FUN_101b0880();
    FUN_10040090(local_34,uVar2);
    local_8._0_1_ = 1;
    FString::~FString(local_34);
    puVar3 = local_28;
    uVar2 = 0x8ca;
    FUN_10005c30(0x8ca,puVar3);
    FUN_100d1790(uVar2,puVar3);
    FUN_101b0c50();
    local_8 = (uint)local_8._1_3_ << 8;
    FUN_1003fff0();
  }
  ExceptionList = local_10;
  return;
}


// ==== 10167158 Catch@10167158

void Catch_10167158(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1016716c Catch@1016716c

void Catch_1016716c(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NConsoleWnd::OnEventMatchTeamInfoEnd");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10167190 FUN_10167190

void FUN_10167190(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  uint uStack_44;
  FString local_34 [12];
  undefined1 local_28 [20];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_10210961;
  local_10 = ExceptionList;
  uStack_44 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_44;
  ExceptionList = &local_10;
  local_8 = 0;
  iVar1 = FUN_101ad070();
  if (iVar1 != 0) {
    FUN_101b07f0(param_1);
  }
  FUN_1003f970();
  local_8._0_1_ = 1;
  FString::FString(local_34,(ushort *)L"MatchID");
  local_8._0_1_ = 2;
  FUN_10040090(local_34,param_1);
  local_8._0_1_ = 1;
  FString::~FString(local_34);
  puVar3 = local_28;
  uVar2 = 0x88e;
  FUN_10005c30(0x88e,puVar3);
  FUN_100d1790(uVar2,puVar3);
  local_8 = (uint)local_8._1_3_ << 8;
  FUN_1003fff0();
  ExceptionList = local_10;
  return;
}


// ==== 10167258 Catch@10167258

void Catch_10167258(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1016726c Catch@1016726c

void Catch_1016726c(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NConsoleWnd::OnEventMatchCreate");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10167290 FUN_10167290

void FUN_10167290(undefined4 param_1)

{
  int iVar1;
  undefined4 in_stack_00000014;
  undefined4 in_stack_00000018;
  undefined4 in_stack_0000001c;
  undefined4 in_stack_00000020;
  undefined4 in_stack_00000024;
  undefined4 in_stack_00000028;
  undefined4 in_stack_0000002c;
  FString *in_stack_00000030;
  FString aFStack_80 [12];
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined1 *puStack_58;
  FString *pFStack_54;
  uint uStack_4c;
  FString local_3c [32];
  undefined4 local_1c;
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_102109ac;
  local_10 = ExceptionList;
  uStack_4c = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_4c;
  ExceptionList = &local_10;
  local_8._0_1_ = 1;
  local_8._1_3_ = 0;
  local_1c = 0xffffffff;
  local_18 = -1;
  iVar1 = FUN_101ad070();
  if (iVar1 != 0) {
    pFStack_54 = (FString *)&local_1c;
    puStack_58 = in_stack_00000030;
    uStack_5c = in_stack_0000002c;
    uStack_60 = in_stack_00000028;
    uStack_64 = in_stack_00000024;
    uStack_68 = in_stack_00000020;
    uStack_6c = in_stack_0000001c;
    uStack_70 = in_stack_00000018;
    uStack_74 = in_stack_00000014;
    in_stack_00000030 = aFStack_80;
    FString::FString(aFStack_80,(FString *)&stack0x00000008);
    local_8._0_1_ = 1;
    FUN_101b1570(param_1);
  }
  if (local_18 != -1) {
    FUN_1003f970();
    local_8._0_1_ = 3;
    pFStack_54 = (FString *)0x10167355;
    FString::FString(local_3c,(ushort *)L"TeamID");
    local_8._0_1_ = 4;
    pFStack_54 = local_3c;
    puStack_58 = (undefined1 *)0x10167369;
    FUN_10040090();
    local_8._0_1_ = 3;
    FString::~FString(local_3c);
    pFStack_54 = (FString *)0x10167384;
    FString::FString(local_3c,(ushort *)L"UserID");
    local_8._0_1_ = 5;
    pFStack_54 = local_3c;
    puStack_58 = (undefined1 *)0x10167398;
    FUN_10040090();
    local_8._0_1_ = 3;
    FString::~FString(local_3c);
    pFStack_54 = (FString *)0x8d4;
    puStack_58 = (undefined1 *)0x101673b3;
    FUN_10005c30();
    puStack_58 = (undefined1 *)0x101673ba;
    FUN_100d1790();
    local_8 = CONCAT31(local_8._1_3_,1);
    FUN_1003fff0();
  }
  local_8 = 0xffffffff;
  FString::~FString((FString *)&stack0x00000008);
  ExceptionList = local_10;
  return;
}


// ==== 101673e5 Catch@101673e5

void Catch_101673e5(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x1c) = *(undefined4 *)(unaff_EBP + -0x20);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x1c,&DAT_102a47f0);
}


// ==== 101673f9 Catch@101673f9

void Catch_101673f9(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NConsoleWnd::OnEventMatchUserInfo");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10167420 FUN_10167420

void FUN_10167420(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 *puVar4;
  uint uStack_44;
  FString local_34 [12];
  undefined1 local_28 [20];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_102109ea;
  local_10 = ExceptionList;
  uStack_44 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_44;
  ExceptionList = &local_10;
  local_8 = 0;
  iVar1 = FUN_101ad070();
  if (iVar1 != 0) {
    iVar1 = FUN_101b0900();
    iVar2 = FUN_101b0980();
    if ((iVar1 != -1) && (iVar2 != -1)) {
      FUN_1003f970();
      local_8._0_1_ = 1;
      FString::FString(local_34,(ushort *)L"TeamID");
      local_8._0_1_ = 2;
      FUN_10040090(local_34,iVar1);
      local_8._0_1_ = 1;
      FString::~FString(local_34);
      FString::FString(local_34,(ushort *)L"UserID");
      local_8._0_1_ = 3;
      FUN_10040090(local_34,iVar2);
      local_8._0_1_ = 1;
      FString::~FString(local_34);
      puVar4 = local_28;
      uVar3 = 0x8d4;
      FUN_10005c30(0x8d4,puVar4);
      FUN_100d1790(uVar3,puVar4);
      local_8 = (uint)local_8._1_3_ << 8;
      FUN_1003fff0();
    }
    FUN_101b0cd0();
  }
  ExceptionList = local_10;
  return;
}


// ==== 10167535 Catch@10167535

void Catch_10167535(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10167549 Catch@10167549

void Catch_10167549(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NConsoleWnd::OnEventMatchSpellInfoEnd");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10167570 FUN_10167570

void FUN_10167570(void)

{
  undefined4 uVar1;
  FString *pFVar2;
  uint uStack_38;
  FString local_28 [20];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_10210a19;
  local_10 = ExceptionList;
  uStack_38 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_38;
  ExceptionList = &local_10;
  local_8 = 0;
  FString::FString(local_28,(ushort *)&DAT_1022f9f8);
  local_8._0_1_ = 1;
  pFVar2 = local_28;
  uVar1 = 0x884;
  FUN_10005c30(0x884,pFVar2);
  FUN_100d1790(uVar1,pFVar2);
  local_8 = (uint)local_8._1_3_ << 8;
  FString::~FString(local_28);
  ExceptionList = local_10;
  return;
}


// ==== 101675ef Catch@101675ef

void Catch_101675ef(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10167603 Catch@10167603

void Catch_10167603(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NConsoleWnd::OnEventMatchGMTest");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10167620 FUN_10167620

void FUN_10167620(int param_1,int param_2,undefined4 param_3)

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
  
  puStack_c = &LAB_10210a63;
  local_10 = ExceptionList;
  uStack_44 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_44;
  ExceptionList = &local_10;
  local_8 = 0;
  if (*(int *)(in_ECX + 0x50ac) != 0) {
    FUN_1003f970();
    local_8._0_1_ = 1;
    FString::FString(local_34,"AttackerID");
    local_8._0_1_ = 2;
    FUN_10040090(local_34,*(undefined4 *)(param_1 + 0x18));
    local_8._0_1_ = 1;
    FString::~FString(local_34);
    FString::FString(local_34,"DefenderID");
    local_8._0_1_ = 3;
    FUN_10040090(local_34,*(undefined4 *)(param_2 + 0x18));
    local_8._0_1_ = 1;
    FString::~FString(local_34);
    FString::FString(local_34,"SkillID");
    local_8._0_1_ = 4;
    FUN_10040090(local_34,param_3);
    local_8._0_1_ = 1;
    FString::~FString(local_34);
    puVar2 = local_28;
    uVar1 = 0x122;
    FUN_10005c30(0x122,puVar2);
    FUN_100d1790(uVar1,puVar2);
    local_8 = (uint)local_8._1_3_ << 8;
    FUN_1003fff0();
  }
  ExceptionList = local_10;
  return;
}


// ==== 10167738 Catch@10167738

void Catch_10167738(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1016774c Catch@1016774c

void Catch_1016774c(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NConsoleWnd::OnReceiveMagicSkillUse");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10167770 FUN_10167770

void FUN_10167770(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)

{
  undefined4 uVar1;
  int in_ECX;
  undefined1 *puVar2;
  uint uStack_50;
  FString local_40 [12];
  FString local_34 [12];
  undefined1 local_28 [20];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_10210ad9;
  local_10 = ExceptionList;
  uStack_50 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_50;
  ExceptionList = &local_10;
  local_8 = 0;
  if (*(int *)(in_ECX + 0x50ac) != 0) {
    FUN_1003f970();
    local_8._0_1_ = 1;
    FString::FString(local_34,"AttackerID");
    local_8._0_1_ = 2;
    FUN_10040090(local_34,*(undefined4 *)(param_1 + 0x18));
    local_8._0_1_ = 1;
    FString::~FString(local_34);
    FString::FString(local_34,"AttackerName");
    local_8._0_1_ = 3;
    uVar1 = FString::FString(local_40,(ushort *)(param_1 + 0x1c));
    local_8._0_1_ = 4;
    FUN_10040230(local_34,uVar1);
    local_8._0_1_ = 3;
    FString::~FString(local_40);
    local_8._0_1_ = 1;
    FString::~FString(local_34);
    FString::FString(local_34,"DefenderID");
    local_8._0_1_ = 5;
    FUN_10040090(local_34,*(undefined4 *)(param_2 + 0x18));
    local_8._0_1_ = 1;
    FString::~FString(local_34);
    FString::FString(local_34,"DefenderName");
    local_8._0_1_ = 6;
    uVar1 = FString::FString(local_40,(ushort *)(param_2 + 0x1c));
    local_8._0_1_ = 7;
    FUN_10040230(local_34,uVar1);
    local_8._0_1_ = 6;
    FString::~FString(local_40);
    local_8._0_1_ = 1;
    FString::~FString(local_34);
    FString::FString(local_34,"Miss");
    local_8._0_1_ = 8;
    FUN_10040090(local_34,param_3);
    local_8._0_1_ = 1;
    FString::~FString(local_34);
    FString::FString(local_34,"ShieldDefense");
    local_8._0_1_ = 9;
    FUN_10040090(local_34,param_4);
    local_8._0_1_ = 1;
    FString::~FString(local_34);
    FString::FString(local_34,"Critical");
    local_8._0_1_ = 10;
    FUN_10040090(local_34,param_5);
    local_8._0_1_ = 1;
    FString::~FString(local_34);
    puVar2 = local_28;
    uVar1 = 0x118;
    FUN_10005c30(0x118,puVar2);
    FUN_100d1790(uVar1,puVar2);
    local_8 = (uint)local_8._1_3_ << 8;
    FUN_1003fff0();
  }
  ExceptionList = local_10;
  return;
}


// ==== 10167976 Catch@10167976

void Catch_10167976(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1016798a Catch@1016798a

void Catch_1016798a(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NConsoleWnd::OnAttack");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101679b0 FUN_101679b0

void FUN_101679b0(void)

{
  undefined4 uVar1;
  FString *pFVar2;
  uint uStack_38;
  FString local_28 [20];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_10210b09;
  local_10 = ExceptionList;
  uStack_38 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_38;
  ExceptionList = &local_10;
  local_8 = 0;
  FString::FString(local_28,(ushort *)&DAT_1022f9f8);
  local_8._0_1_ = 1;
  pFVar2 = local_28;
  uVar1 = 0xb4;
  FUN_10005c30(0xb4,pFVar2);
  FUN_100d1790(uVar1,pFVar2);
  local_8 = (uint)local_8._1_3_ << 8;
  FString::~FString(local_28);
  ExceptionList = local_10;
  return;
}


// ==== 10167a31 Catch@10167a31

void Catch_10167a31(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10167a45 Catch@10167a45

void Catch_10167a45(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NConsoleWnd::OnUserInfoUpdate");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10167a70 FUN_10167a70

void FUN_10167a70(void)

{
  undefined4 uVar1;
  FString *pFVar2;
  uint uStack_38;
  FString local_28 [20];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_10210b39;
  local_10 = ExceptionList;
  uStack_38 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_38;
  ExceptionList = &local_10;
  local_8 = 0;
  FString::FString(local_28,(ushort *)&DAT_1022f9f8);
  local_8._0_1_ = 1;
  pFVar2 = local_28;
  uVar1 = 0xfa;
  FUN_10005c30(0xfa,pFVar2);
  FUN_100d1790(uVar1,pFVar2);
  local_8 = (uint)local_8._1_3_ << 8;
  FString::~FString(local_28);
  ExceptionList = local_10;
  return;
}


// ==== 10167af1 Catch@10167af1

void Catch_10167af1(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10167b05 Catch@10167b05

void Catch_10167b05(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NConsoleWnd::OnPetInfoUpdate");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10167b30 FUN_10167b30

void FUN_10167b30(void)

{
  void *pvVar1;
  void *pvVar2;
  uint *puVar3;
  ushort *puVar4;
  int iVar5;
  int *piVar6;
  void *pvVar7;
  int *in_ECX;
  code *pcVar8;
  ushort *puStack_90;
  uint uStack_84;
  int local_60;
  ushort local_5c [18];
  ushort local_38 [6];
  L2ParamStack local_2c [20];
  uint local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  puStack_c = &LAB_10210b84;
  local_10 = ExceptionList;
  uStack_84 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_84;
  ExceptionList = &local_10;
  local_8 = 0;
  local_18 = uStack_84;
  puVar3 = &uStack_84;
  if (((in_ECX[0x1440] == 0) || (puVar3 = &uStack_84, DAT_1039ea6c == in_ECX[0x143f])) ||
     (DAT_1039ea68 = DAT_1039ea68 + -1, puVar3 = &uStack_84, 0 < DAT_1039ea68)) goto LAB_10167de1;
  DAT_1039ea68 = 0;
  DAT_1039ea6c = in_ECX[0x143f];
  puVar3 = &uStack_84;
  switch(DAT_1039ea6c) {
  case 1:
    local_14 = (undefined1 *)&uStack_84;
    (**(code **)(*in_ECX + 0x7fc))();
    puVar3 = (uint *)local_14;
    break;
  case 2:
    local_14 = (undefined1 *)&uStack_84;
    L2ParamStack::L2ParamStack(local_2c,10);
    local_8._0_1_ = 1;
    FUN_101420d0();
    local_8 = (uint)local_8._1_3_ << 8;
    L2ParamStack::~L2ParamStack(local_2c);
    puVar3 = (uint *)local_14;
    break;
  case 3:
    local_14 = (undefined1 *)&uStack_84;
    FUN_1014cd40();
    puVar4 = (ushort *)FUN_10148450();
    puStack_90 = (ushort *)0x10167c15;
    appStrcpy(local_38,puVar4);
    puVar4 = (ushort *)FUN_101484e0();
    puStack_90 = (ushort *)0x10167c26;
    appStrcpy(local_5c,puVar4);
    FUN_10148570();
    puStack_90 = local_38;
    FUN_10141a90();
    puVar3 = (uint *)local_14;
    break;
  case 4:
    pcVar8 = *(code **)(*in_ECX + 0x7bc);
    goto LAB_10167dd6;
  case 5:
    puVar3 = &uStack_84;
    if (0 < in_ECX[0x143e]) {
      local_14 = (undefined1 *)&uStack_84;
      for (local_60 = 0; iVar5 = FUN_10034fa0(), puVar3 = (uint *)local_14, local_60 < iVar5;
          local_60 = local_60 + 1) {
        puStack_90 = (ushort *)0x10167c9e;
        FUN_10034fb0();
        piVar6 = (int *)FUN_10035c90();
        if ((piVar6 != (int *)0x0) &&
           (pvVar1 = (void *)piVar6[0x201], (void *)in_ECX[0x143e] == pvVar1)) {
          FString::FString((FString *)&puStack_90,(ushort *)(*piVar6 + 0x6174));
          local_8 = local_8 & 0xffffff00;
          FUN_1014fc30();
          L2ParamStack::L2ParamStack(local_2c,10);
          local_8._0_1_ = 3;
          pvVar2 = (void *)piVar6[0x202];
          pvVar7 = (void *)appAtoi((ushort *)(piVar6 + 1));
          L2ParamStack::PushBack(local_2c,pvVar1);
          L2ParamStack::PushBack(local_2c,pvVar2);
          L2ParamStack::PushBack(local_2c,pvVar7);
          FUN_10142250();
          local_8 = (uint)local_8._1_3_ << 8;
          L2ParamStack::~L2ParamStack(local_2c);
        }
      }
    }
    break;
  case 6:
    local_14 = (undefined1 *)&uStack_84;
    if (*(int *)(in_ECX[0x142b] + 0x1f8) != 0) {
      local_14 = (undefined1 *)&uStack_84;
      FUN_1017dd00();
    }
    (**(code **)(*in_ECX + 0x7fc))();
    DAT_1039ea68 = 0x1e;
    puVar3 = (uint *)local_14;
    break;
  case 7:
    L2ParamStack::L2ParamStack(local_2c,10);
    local_8._0_1_ = 4;
    L2ParamStack::PushBack(local_2c,L"gmon");
    (**(code **)(*DAT_103663bc + 0x360))();
    puStack_90 = (ushort *)0x10167dbf;
    (**(code **)(*in_ECX + 0x7fc))();
    local_8 = (uint)local_8._1_3_ << 8;
    L2ParamStack::~L2ParamStack(local_2c);
    puVar3 = (uint *)local_14;
    break;
  case 8:
    pcVar8 = *(code **)(*in_ECX + 0x808);
LAB_10167dd6:
    local_14 = (undefined1 *)&uStack_84;
    (*pcVar8)();
    puVar3 = (uint *)local_14;
  }
  local_14 = (undefined1 *)puVar3;
  local_8 = 0xffffffff;
  puVar3 = (uint *)local_14;
LAB_10167de1:
  local_14 = (undefined1 *)puVar3;
  ExceptionList = local_10;
  __security_check_cookie(local_18 ^ (uint)&stack0xfffffffc);
  return;
}


// ==== 10167dfd Catch@10167dfd

void Catch_10167dfd(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x6c) = *(undefined4 *)(unaff_EBP + -0x70);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x6c,&DAT_102a47f0);
}


// ==== 10167e11 Catch@10167e11

void Catch_10167e11(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NConsoleWnd::TickGMChangeServer");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10167e50 FUN_10167e50

void FUN_10167e50(int param_1)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  FString local_18 [12];
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10210bb9;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_103554c4 ^ (uint)local_18;
  *unaff_FS_OFFSET = (int)&local_c;
  if (param_1 == 0) {
    FString::FString(local_18,(ushort *)&DAT_1022f9f8);
    local_4 = 0;
    if (DAT_1035786c == 0) {
      FUN_10005270(uVar1);
    }
    FUN_100d1790(0x9a6,local_18);
    local_4 = 0xffffffff;
    FString::~FString(local_18);
  }
  *unaff_FS_OFFSET = local_c;
  return;
}


// ==== 10167ee0 FUN_10167ee0

void FUN_10167ee0(int param_1)

{
  int *in_ECX;
  FString local_18 [12];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10210be9;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (param_1 == -1) {
    (**(code **)(*in_ECX + 0x754))(0,DAT_103554c4 ^ (uint)local_18);
  }
  else if (param_1 == 0) {
    FString::FString(local_18,(ushort *)&DAT_1022f9f8);
    local_4 = 0;
    if (DAT_1035786c == 0) {
      FUN_10005270();
    }
    FUN_100d1790(0x9b0,local_18);
    local_4 = 0xffffffff;
    FString::~FString(local_18);
    ExceptionList = local_c;
    return;
  }
  ExceptionList = local_c;
  return;
}


// ==== 10167f90 FUN_10167f90

void FUN_10167f90(L2ParamStack *param_1)

{
  void *pvVar1;
  void *pvVar2;
  ushort *puVar3;
  undefined4 uVar4;
  int iVar5;
  undefined1 *puVar6;
  uint uStack_b8;
  FString local_a8 [12];
  FString local_9c [12];
  FString local_90 [12];
  undefined1 *local_84;
  void *local_80;
  undefined1 *puStack_7c;
  uint local_78;
  FString local_74 [12];
  FString local_68 [12];
  FString local_5c [12];
  FString local_50 [12];
  FString local_44 [12];
  FString local_38 [16];
  int local_28;
  FString local_20 [12];
  undefined1 local_14 [12];
  undefined4 local_8;
  
  puStack_7c = &LAB_10210c84;
  local_80 = ExceptionList;
  uStack_b8 = DAT_103554c4 ^ (uint)local_74;
  local_84 = (undefined1 *)&uStack_b8;
  ExceptionList = &local_80;
  local_78 = 0;
  FUN_1003f970();
  local_78._0_1_ = 1;
  FString::FString(local_20,(ushort *)L"PageNum");
  local_78._0_1_ = 2;
  pvVar1 = L2ParamStack::Top(param_1);
  FUN_10040090(local_20,pvVar1);
  local_78._0_1_ = 1;
  FString::~FString(local_20);
  pvVar1 = L2ParamStack::Top(param_1);
  FString::FString(local_20,(ushort *)L"RoomCount");
  local_78._0_1_ = 3;
  FUN_10040090(local_20,pvVar1);
  local_78 = CONCAT31(local_78._1_3_,1);
  FString::~FString(local_20);
  for (iVar5 = 0; local_28 = iVar5, iVar5 < (int)pvVar1; iVar5 = iVar5 + 1) {
    local_8 = FString::Printf((ushort *)local_44,L"RoomNum_%d",iVar5);
    local_78._0_1_ = 4;
    pvVar2 = L2ParamStack::Top(param_1);
    FUN_10040090(local_8,pvVar2);
    local_78._0_1_ = 1;
    FString::~FString(local_44);
    puVar3 = L2ParamStack::Top(param_1);
    FString::FString(local_20,puVar3);
    local_78._0_1_ = 5;
    uVar4 = FString::Printf((ushort *)local_5c,L"Leader_%d",iVar5);
    local_78._0_1_ = 6;
    FUN_10040230(uVar4,local_20);
    local_78._0_1_ = 5;
    FString::~FString(local_5c);
    local_78._0_1_ = 1;
    FString::~FString(local_20);
    local_8 = FString::Printf((ushort *)local_9c,L"ZoneID_%d",iVar5);
    local_78._0_1_ = 7;
    pvVar2 = L2ParamStack::Top(param_1);
    FUN_10040090(local_8,pvVar2);
    local_78._0_1_ = 1;
    FString::~FString(local_9c);
    local_8 = FString::Printf((ushort *)local_74,L"MinLevel_%d",iVar5);
    local_78._0_1_ = 8;
    pvVar2 = L2ParamStack::Top(param_1);
    FUN_10040090(local_8,pvVar2);
    local_78._0_1_ = 1;
    FString::~FString(local_74);
    local_8 = FString::Printf((ushort *)local_50,L"MaxLevel_%d",iVar5);
    local_78._0_1_ = 9;
    pvVar2 = L2ParamStack::Top(param_1);
    FUN_10040090(local_8,pvVar2);
    local_78._0_1_ = 1;
    FString::~FString(local_50);
    local_8 = FString::Printf((ushort *)local_68,L"CurMember_%d",iVar5);
    local_78._0_1_ = 10;
    pvVar2 = L2ParamStack::Top(param_1);
    FUN_10040090(local_8,pvVar2);
    local_78._0_1_ = 1;
    FString::~FString(local_68);
    local_8 = FString::Printf((ushort *)local_90,L"MaxMember_%d",iVar5);
    local_78._0_1_ = 0xb;
    pvVar2 = L2ParamStack::Top(param_1);
    FUN_10040090(local_8,pvVar2);
    local_78._0_1_ = 1;
    FString::~FString(local_90);
    puVar3 = L2ParamStack::Top(param_1);
    FString::FString(local_38,puVar3);
    local_78._0_1_ = 0xc;
    uVar4 = FString::Printf((ushort *)local_a8,L"RoomName_%d",iVar5);
    local_78._0_1_ = 0xd;
    FUN_10040230(uVar4,local_38);
    local_78._0_1_ = 0xc;
    FString::~FString(local_a8);
    local_78 = CONCAT31(local_78._1_3_,1);
    FString::~FString(local_38);
  }
  puVar6 = local_14;
  uVar4 = 0x622;
  FUN_10005c30(0x622,puVar6);
  FUN_100d1790(uVar4,puVar6);
  local_78 = local_78 & 0xffffff00;
  FUN_1003fff0();
  ExceptionList = local_80;
  return;
}


// ==== 10168286 Catch@10168286

void Catch_10168286(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + 0x50) = *(undefined4 *)(unaff_EBP + 0x48);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + 0x50,&DAT_102a47f0);
}


// ==== 1016829a Catch@1016829a

void Catch_1016829a(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NConsoleWnd::OnListPartyWating");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101682c0 FUN_101682c0

void FUN_101682c0(void)

{
  undefined4 uVar1;
  FString *pFVar2;
  uint uStack_38;
  FString local_28 [20];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_10210ca9;
  local_10 = ExceptionList;
  uStack_38 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_38;
  ExceptionList = &local_10;
  local_8 = 0;
  FString::FString(local_28,(ushort *)&DAT_1022f9f8);
  local_8._0_1_ = 1;
  pFVar2 = local_28;
  uVar1 = 0x604;
  FUN_10005c30(0x604,pFVar2);
  FUN_100d1790(uVar1,pFVar2);
  local_8 = (uint)local_8._1_3_ << 8;
  FString::~FString(local_28);
  ExceptionList = local_10;
  return;
}


// ==== 1016833f Catch@1016833f

void Catch_1016833f(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10168353 Catch@10168353

void Catch_10168353(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NConsoleWnd::OnStartPartyMatch");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10168370 FUN_10168370

void FUN_10168370(L2ParamStack *param_1)

{
  void *pvVar1;
  ushort *puVar2;
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
  
  puStack_c = &LAB_10210d20;
  local_10 = ExceptionList;
  uStack_50 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_50;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_1003f970();
  local_8._0_1_ = 1;
  FString::FString(local_34,(ushort *)L"RoomNum");
  local_8._0_1_ = 2;
  pvVar1 = L2ParamStack::Top(param_1);
  FUN_10040090(local_34,pvVar1);
  local_8._0_1_ = 1;
  FString::~FString(local_34);
  FString::FString(local_34,(ushort *)L"MaxMember");
  local_8._0_1_ = 3;
  pvVar1 = L2ParamStack::Top(param_1);
  FUN_10040090(local_34,pvVar1);
  local_8._0_1_ = 1;
  FString::~FString(local_34);
  FString::FString(local_34,(ushort *)L"MinLevel");
  local_8._0_1_ = 4;
  pvVar1 = L2ParamStack::Top(param_1);
  FUN_10040090(local_34,pvVar1);
  local_8._0_1_ = 1;
  FString::~FString(local_34);
  FString::FString(local_34,(ushort *)L"MaxLevel");
  local_8._0_1_ = 5;
  pvVar1 = L2ParamStack::Top(param_1);
  FUN_10040090(local_34,pvVar1);
  local_8._0_1_ = 1;
  FString::~FString(local_34);
  FString::FString(local_34,(ushort *)L"LootingMethodID");
  local_8._0_1_ = 6;
  pvVar1 = L2ParamStack::Top(param_1);
  FUN_10040090(local_34,pvVar1);
  local_8._0_1_ = 1;
  FString::~FString(local_34);
  FString::FString(local_34,(ushort *)L"ZoneID");
  local_8._0_1_ = 7;
  pvVar1 = L2ParamStack::Top(param_1);
  FUN_10040090(local_34,pvVar1);
  local_8._0_1_ = 1;
  FString::~FString(local_34);
  puVar2 = L2ParamStack::Top(param_1);
  FString::FString(local_40,puVar2);
  local_8._0_1_ = 8;
  FString::FString(local_34,(ushort *)L"RoomName");
  local_8._0_1_ = 9;
  FUN_10040230(local_34,local_40);
  local_8._0_1_ = 8;
  FString::~FString(local_34);
  local_8._0_1_ = 1;
  FString::~FString(local_40);
  puVar4 = local_28;
  uVar3 = 0x60e;
  FUN_10005c30(0x60e,puVar4);
  FUN_100d1790(uVar3,puVar4);
  local_8 = (uint)local_8._1_3_ << 8;
  FUN_1003fff0();
  ExceptionList = local_10;
  return;
}


// ==== 1016855b Catch@1016855b

void Catch_1016855b(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1016856f Catch@1016856f

void Catch_1016856f(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NConsoleWnd::OnPartyRoomInfo");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10168590 FUN_10168590

void FUN_10168590(L2ParamStack *param_1)

{
  void *pvVar1;
  void *pvVar2;
  ushort *puVar3;
  undefined4 uVar4;
  int iVar5;
  undefined1 *puVar6;
  uint uStack_94;
  FString local_84 [12];
  FString local_78 [12];
  FString local_6c [12];
  FString local_60 [12];
  FString local_54 [12];
  FString local_48 [12];
  FString local_3c [12];
  undefined1 local_30 [20];
  int local_1c;
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  puStack_c = &LAB_10210d99;
  local_10 = ExceptionList;
  uStack_94 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_94;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_1003f970();
  local_8._0_1_ = 1;
  FString::FString(local_3c,(ushort *)L"MyMembershipType");
  local_8._0_1_ = 2;
  pvVar1 = L2ParamStack::Top(param_1);
  FUN_10040090(local_3c,pvVar1);
  local_8._0_1_ = 1;
  FString::~FString(local_3c);
  pvVar1 = L2ParamStack::Top(param_1);
  FString::FString(local_3c,(ushort *)L"MemberCount");
  local_8._0_1_ = 3;
  FUN_10040090(local_3c,pvVar1);
  local_8 = CONCAT31(local_8._1_3_,1);
  FString::~FString(local_3c);
  for (iVar5 = 0; local_1c = iVar5, iVar5 < (int)pvVar1; iVar5 = iVar5 + 1) {
    local_18 = FString::Printf((ushort *)local_48,L"MemberID_%d",iVar5);
    local_8._0_1_ = 4;
    pvVar2 = L2ParamStack::Top(param_1);
    FUN_10040090(local_18,pvVar2);
    local_8._0_1_ = 1;
    FString::~FString(local_48);
    puVar3 = L2ParamStack::Top(param_1);
    FString::FString(local_3c,puVar3);
    local_8._0_1_ = 5;
    uVar4 = FString::Printf((ushort *)local_54,L"MemberName_%d",iVar5);
    local_8._0_1_ = 6;
    FUN_10040230(uVar4,local_3c);
    local_8._0_1_ = 5;
    FString::~FString(local_54);
    local_8._0_1_ = 1;
    FString::~FString(local_3c);
    local_18 = FString::Printf((ushort *)local_60,L"ClassID_%d",iVar5);
    local_8._0_1_ = 7;
    pvVar2 = L2ParamStack::Top(param_1);
    FUN_10040090(local_18,pvVar2);
    local_8._0_1_ = 1;
    FString::~FString(local_60);
    local_18 = FString::Printf((ushort *)local_6c,L"Level_%d",iVar5);
    local_8._0_1_ = 8;
    pvVar2 = L2ParamStack::Top(param_1);
    FUN_10040090(local_18,pvVar2);
    local_8._0_1_ = 1;
    FString::~FString(local_6c);
    local_18 = FString::Printf((ushort *)local_78,L"ZoneID_%d",iVar5);
    local_8._0_1_ = 9;
    pvVar2 = L2ParamStack::Top(param_1);
    FUN_10040090(local_18,pvVar2);
    local_8._0_1_ = 1;
    FString::~FString(local_78);
    local_18 = FString::Printf((ushort *)local_84,L"MembershipType_%d",iVar5);
    local_8._0_1_ = 10;
    pvVar2 = L2ParamStack::Top(param_1);
    FUN_10040090(local_18,pvVar2);
    local_8 = CONCAT31(local_8._1_3_,1);
    FString::~FString(local_84);
  }
  puVar6 = local_30;
  uVar4 = 0x62c;
  FUN_10005c30(0x62c,puVar6);
  FUN_100d1790(uVar4,puVar6);
  local_8 = local_8 & 0xffffff00;
  FUN_1003fff0();
  ExceptionList = local_10;
  return;
}


// ==== 101687f6 Catch@101687f6

void Catch_101687f6(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x1c) = *(undefined4 *)(unaff_EBP + -0x20);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x1c,&DAT_102a47f0);
}


// ==== 1016880a Catch@1016880a

void Catch_1016880a(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NConsoleWnd::OnExPartyRoomMember");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10168830 FUN_10168830

void FUN_10168830(void)

{
  undefined4 uVar1;
  FString *pFVar2;
  uint uStack_38;
  FString local_28 [20];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_10210dc9;
  local_10 = ExceptionList;
  uStack_38 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_38;
  ExceptionList = &local_10;
  local_8 = 0;
  FString::FString(local_28,(ushort *)&DAT_1022f9f8);
  local_8._0_1_ = 1;
  pFVar2 = local_28;
  uVar1 = 0x618;
  FUN_10005c30(0x618,pFVar2);
  FUN_100d1790(uVar1,pFVar2);
  local_8 = (uint)local_8._1_3_ << 8;
  FString::~FString(local_28);
  ExceptionList = local_10;
  return;
}


// ==== 101688b1 Catch@101688b1

void Catch_101688b1(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 101688c5 Catch@101688c5

void Catch_101688c5(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NConsoleWnd::OnExClosePartyRoom");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101688f0 FUN_101688f0

void FUN_101688f0(L2ParamStack *param_1)

{
  void *pvVar1;
  ushort *puVar2;
  undefined1 local_30 [12];
  FString local_24 [12];
  FString local_18 [12];
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10210e40;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_1003f970(DAT_103554c4 ^ (uint)&stack0xffffffc4);
  local_4 = 0;
  FString::FString(local_24,(ushort *)L"UpdateType");
  local_4._0_1_ = 1;
  pvVar1 = L2ParamStack::Top(param_1);
  FUN_10040090(local_24,pvVar1);
  local_4._0_1_ = 0;
  FString::~FString(local_24);
  FString::FString(local_24,(ushort *)L"MemberID");
  local_4._0_1_ = 2;
  pvVar1 = L2ParamStack::Top(param_1);
  FUN_10040090(local_24,pvVar1);
  local_4._0_1_ = 0;
  FString::~FString(local_24);
  puVar2 = L2ParamStack::Top(param_1);
  FString::FString(local_18,puVar2);
  local_4._0_1_ = 3;
  FString::FString(local_24,(ushort *)L"MemberName");
  local_4._0_1_ = 4;
  FUN_10040230(local_24,local_18);
  local_4._0_1_ = 3;
  FString::~FString(local_24);
  local_4._0_1_ = 0;
  FString::~FString(local_18);
  FString::FString(local_18,(ushort *)L"ClassID");
  local_4._0_1_ = 5;
  pvVar1 = L2ParamStack::Top(param_1);
  FUN_10040090(local_18,pvVar1);
  local_4._0_1_ = 0;
  FString::~FString(local_18);
  FString::FString(local_18,(ushort *)L"Level");
  local_4._0_1_ = 6;
  pvVar1 = L2ParamStack::Top(param_1);
  FUN_10040090(local_18,pvVar1);
  local_4._0_1_ = 0;
  FString::~FString(local_18);
  FString::FString(local_18,(ushort *)L"ZoneID");
  local_4._0_1_ = 7;
  pvVar1 = L2ParamStack::Top(param_1);
  FUN_10040090(local_18,pvVar1);
  local_4._0_1_ = 0;
  FString::~FString(local_18);
  FString::FString(local_18,(ushort *)L"MembershipType");
  local_4._0_1_ = 8;
  pvVar1 = L2ParamStack::Top(param_1);
  FUN_10040090(local_18,pvVar1);
  local_4 = (uint)local_4._1_3_ << 8;
  FString::~FString(local_18);
  if (DAT_1035786c == 0) {
    FUN_10005270();
  }
  FUN_100d1790(0x636,local_30);
  local_4 = 0xffffffff;
  FUN_1003fff0();
  ExceptionList = local_c;
  return;
}


// ==== 10168b10 FUN_10168b10

void FUN_10168b10(L2ParamStack *param_1)

{
  void *pvVar1;
  void *pvVar2;
  ushort *puVar3;
  int iVar4;
  undefined4 uVar5;
  undefined1 *puVar6;
  uint uStack_64;
  FString local_54 [12];
  FString local_48 [12];
  FString local_3c [12];
  undefined1 local_30 [20];
  void *local_1c;
  char local_17;
  char local_16;
  char local_15;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_10210eb9;
  local_10 = ExceptionList;
  uStack_64 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_64;
  ExceptionList = &local_10;
  local_8 = 0;
  local_1c = L2ParamStack::Top(param_1);
  pvVar1 = L2ParamStack::Top(param_1);
  pvVar2 = L2ParamStack::Top(param_1);
  local_15 = (char)pvVar2;
  puVar3 = L2ParamStack::Top(param_1);
  FString::FString(local_54,puVar3);
  local_8._0_1_ = 1;
  pvVar2 = L2ParamStack::Top(param_1);
  local_16 = (char)pvVar2;
  puVar3 = L2ParamStack::Top(param_1);
  FString::FString(local_48,puVar3);
  local_8._0_1_ = 2;
  pvVar2 = L2ParamStack::Top(param_1);
  local_17 = (char)pvVar2;
  FUN_1003f970();
  local_8._0_1_ = 3;
  FString::FString(local_3c,(ushort *)L"MatchID");
  pvVar2 = local_1c;
  local_8._0_1_ = 4;
  FUN_10040090(local_3c,local_1c);
  local_8._0_1_ = 3;
  FString::~FString(local_3c);
  FString::FString(local_3c,(ushort *)L"MatchStat");
  local_8._0_1_ = 5;
  FUN_10040090(local_3c,(int)(char)pvVar1);
  local_8._0_1_ = 3;
  FString::~FString(local_3c);
  FString::FString(local_3c,(ushort *)L"FenceStat");
  local_8._0_1_ = 6;
  FUN_10040090(local_3c,(int)local_15);
  local_8._0_1_ = 3;
  FString::~FString(local_3c);
  FString::FString(local_3c,(ushort *)L"Team1Name");
  local_8._0_1_ = 7;
  FUN_10040230(local_3c,local_54);
  local_8._0_1_ = 3;
  FString::~FString(local_3c);
  FString::FString(local_3c,(ushort *)L"Team2Name");
  local_8._0_1_ = 8;
  FUN_10040230(local_3c,local_48);
  local_8._0_1_ = 3;
  FString::~FString(local_3c);
  FString::FString(local_3c,(ushort *)L"Team1Stat");
  local_8._0_1_ = 9;
  FUN_10040090(local_3c,(int)local_16);
  local_8._0_1_ = 3;
  FString::~FString(local_3c);
  FString::FString(local_3c,(ushort *)L"Team2Stat");
  local_8._0_1_ = 10;
  FUN_10040090(local_3c,(int)local_17);
  local_8 = CONCAT31(local_8._1_3_,3);
  FString::~FString(local_3c);
  puVar6 = local_30;
  uVar5 = 0x8a2;
  FUN_10005c30(0x8a2,puVar6);
  FUN_100d1790(uVar5,puVar6);
  iVar4 = FUN_101ad070();
  if (iVar4 != 0) {
    FUN_101b07f0(pvVar2);
  }
  local_8._0_1_ = 2;
  FUN_1003fff0();
  local_8._0_1_ = 1;
  FString::~FString(local_48);
  local_8 = (uint)local_8._1_3_ << 8;
  FString::~FString(local_54);
  ExceptionList = local_10;
  return;
}


// ==== 10168d58 Catch@10168d58

void Catch_10168d58(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x1c) = *(undefined4 *)(unaff_EBP + -0x20);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x1c,&DAT_102a47f0);
}


// ==== 10168d6c Catch@10168d6c

void Catch_10168d6c(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NConsoleWnd::OnExEventMatchManage");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10168d90 FUN_10168d90

void FUN_10168d90(int param_1)

{
  int iVar1;
  int iVar2;
  int in_ECX;
  int iVar3;
  bool bVar4;
  undefined4 *puVar5;
  uint uStack_cc;
  short local_bc [4];
  undefined1 local_b4 [52];
  undefined1 *local_80;
  void *local_7c;
  undefined1 *puStack_78;
  int local_74;
  undefined1 local_70 [8];
  int local_68;
  undefined4 local_5c;
  int local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c [2];
  undefined4 local_44;
  int local_40;
  int local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c [2];
  int local_14;
  int local_10;
  undefined1 local_6;
  undefined1 local_5;
  
  puStack_78 = &LAB_10210ef0;
  local_7c = ExceptionList;
  uStack_cc = DAT_103554c4 ^ (uint)local_70;
  local_80 = (undefined1 *)&uStack_cc;
  ExceptionList = &local_7c;
  local_74 = 0;
  if (*(int *)(in_ECX + 0x50ac) != 0) {
    FUN_1000eea0();
    for (iVar3 = 0; local_3c = iVar3, iVar1 = FUN_101b2320(), iVar3 < iVar1; iVar3 = iVar3 + 1) {
      iVar1 = FUN_101b2720(iVar3,local_bc);
      if ((iVar1 != 0) && (local_bc[0] == 0)) {
        iVar3 = FUN_10187a60(local_b4);
        if (iVar3 == 0) {
          appFailAssert("pData",".\\Src\\NConsoleWindow.cpp",0x4c43);
        }
        iVar1 = -1;
        if (iVar3 != 0) {
          iVar1 = *(int *)(iVar3 + 0x134);
        }
        FUN_10038f80();
        local_74._0_1_ = 1;
        FUN_10038f80();
        local_74 = CONCAT31(local_74._1_3_,2);
        for (iVar3 = 0; local_58 = iVar3, iVar3 < 0x78; iVar3 = iVar3 + 1) {
          iVar2 = FUN_10141370(iVar3);
          if ((iVar2 != 0) && (*(int *)(iVar2 + 0x1f68) != 0)) {
            FUN_100d9a30(iVar2 + 0x1e5c);
            FUN_100d9a30(iVar2 + 0x1e58);
          }
        }
        if (param_1 == 0) {
          iVar3 = 0;
          do {
            local_40 = iVar3;
            if (local_10 <= iVar3) goto switchD_10168edd_default;
            local_6 = 0;
            iVar2 = *(int *)(local_14 + iVar3 * 4);
            if (iVar2 < 0x72c) {
              if (iVar2 == 0x72b) {
LAB_101690c0:
                bVar4 = iVar1 == 0;
              }
              else {
                switch(iVar2) {
                case 0x5b7:
                  bVar4 = iVar1 == 1;
                  break;
                case 0x5b8:
                  bVar4 = iVar1 == 2;
                  break;
                case 0x5b9:
                  bVar4 = iVar1 == 3;
                  break;
                case 0x5ba:
                  bVar4 = iVar1 == 4;
                  break;
                case 0x5bb:
                  bVar4 = iVar1 == 5;
                  break;
                default:
                  goto switchD_10169099_default;
                }
              }
              if (bVar4) {
                local_6 = 1;
                FUN_10142ea0(*(undefined4 *)(local_68 + iVar3 * 4));
              }
            }
            else if (iVar2 == 0x169d) goto LAB_101690c0;
switchD_10169099_default:
            iVar3 = iVar3 + 1;
          } while( true );
        }
        local_5 = 0;
        param_1 = -1;
        switch(iVar1) {
        case 0:
          local_24 = 0x9cd;
          iVar3 = FUN_1014f920(&local_24,&param_1);
          if (iVar3 == 0) {
            local_54 = 0xf6b;
            iVar3 = FUN_1014f920(&local_54,&param_1);
            if (iVar3 == 0) {
              local_2c = 0x169e;
              puVar5 = &local_2c;
              goto LAB_10169016;
            }
          }
          break;
        case 1:
          local_4c[0] = 0x9ce;
          iVar3 = FUN_1014f920(local_4c,&param_1);
          if (iVar3 == 0) {
            local_34 = 0xf6c;
            puVar5 = &local_34;
LAB_10169016:
            iVar3 = FUN_1014f920(puVar5,&param_1);
            if (iVar3 == 0) goto switchD_10168edd_default;
          }
          break;
        case 2:
          local_50 = 0x9cf;
          iVar3 = FUN_1014f920(&local_50,&param_1);
          if (iVar3 == 0) {
            local_1c[0] = 0xf6d;
            puVar5 = local_1c;
            goto LAB_10169016;
          }
          break;
        case 3:
          local_5c = 0x9d0;
          iVar3 = FUN_1014f920(&local_5c,&param_1);
          if (iVar3 == 0) {
            local_44 = 0xf6e;
            puVar5 = &local_44;
            goto LAB_10169016;
          }
          break;
        case 4:
          local_20 = 0x9d1;
          iVar3 = FUN_1014f920(&local_20,&param_1);
          if (iVar3 == 0) {
            local_28 = 0xf6f;
            puVar5 = &local_28;
            goto LAB_10169016;
          }
          break;
        case 5:
          local_30 = 0x9d2;
          iVar3 = FUN_1014f920(&local_30,&param_1);
          if (iVar3 == 0) {
            local_38 = 0xf70;
            puVar5 = &local_38;
            goto LAB_10169016;
          }
          break;
        default:
          goto switchD_10168edd_default;
        }
        local_5 = 1;
        if (-1 < param_1) {
          FUN_10142ea0(*(undefined4 *)(local_68 + param_1 * 4));
        }
switchD_10168edd_default:
        local_74._0_1_ = 1;
        FUN_10039be0();
        local_74 = (uint)local_74._1_3_ << 8;
        FUN_10039be0();
        ExceptionList = local_7c;
        return;
      }
    }
  }
  ExceptionList = local_7c;
  return;
}


// ==== 101690dc Catch@101690dc

void Catch_101690dc(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + 0x28) = *(undefined4 *)(unaff_EBP + 4);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + 0x28,&DAT_102a47f0);
}


// ==== 101690f0 Catch@101690f0

void Catch_101690f0(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NConsoleWnd::EquipAutoSpirit");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10169140 FUN_10169140

void FUN_10169140(L2ParamStack *param_1)

{
  void *pvVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  uint uStack_44;
  FString local_34 [12];
  undefined1 local_28 [20];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_10210f45;
  local_10 = ExceptionList;
  uStack_44 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_44;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_1003f970();
  local_8._0_1_ = 1;
  FString::FString(local_34,(ushort *)L"TotalPoint");
  local_8._0_1_ = 2;
  pvVar1 = L2ParamStack::Top(param_1);
  FUN_10040090(local_34,pvVar1);
  local_8._0_1_ = 1;
  FString::~FString(local_34);
  FString::FString(local_34,(ushort *)L"AddPoint");
  local_8._0_1_ = 3;
  pvVar1 = L2ParamStack::Top(param_1);
  FUN_10040090(local_34,pvVar1);
  local_8._0_1_ = 1;
  FString::~FString(local_34);
  FString::FString(local_34,(ushort *)L"PeriodType");
  local_8._0_1_ = 4;
  pvVar1 = L2ParamStack::Top(param_1);
  FUN_10040090(local_34,(int)(char)pvVar1);
  local_8._0_1_ = 1;
  FString::~FString(local_34);
  FString::FString(local_34,(ushort *)L"RemainTime");
  local_8._0_1_ = 5;
  pvVar1 = L2ParamStack::Top(param_1);
  FUN_10040090(local_34,pvVar1);
  local_8._0_1_ = 1;
  FString::~FString(local_34);
  FString::FString(local_34,(ushort *)L"PointType");
  local_8._0_1_ = 6;
  pvVar1 = L2ParamStack::Top(param_1);
  FUN_10040090(local_34,(int)(char)pvVar1);
  local_8._0_1_ = 1;
  FString::~FString(local_34);
  puVar3 = local_28;
  uVar2 = 0x776;
  FUN_10005c30(0x776,puVar3);
  FUN_100d1790(uVar2,puVar3);
  local_8 = (uint)local_8._1_3_ << 8;
  FUN_1003fff0();
  ExceptionList = local_10;
  return;
}


// ==== 101692b5 Catch@101692b5

void Catch_101692b5(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 101692c9 Catch@101692c9

void Catch_101692c9(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NConsoleWnd::OnExPCCafePointInfo");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101692f0 FUN_101692f0

void FUN_101692f0(L2ParamStack *param_1)

{
  void *pvVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 *puVar4;
  uint uStack_44;
  FString local_34 [12];
  undefined1 local_28 [20];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_10210f71;
  local_10 = ExceptionList;
  uStack_44 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_44;
  ExceptionList = &local_10;
  local_8 = 0;
  pvVar1 = L2ParamStack::Top(param_1);
  iVar2 = FUN_10005c30();
  if (iVar2 != 0) {
    FUN_1003f970();
    local_8._0_1_ = 1;
    FString::FString(local_34,(ushort *)L"ZoneCode");
    local_8._0_1_ = 2;
    FUN_10040090(local_34,pvVar1);
    local_8._0_1_ = 1;
    FString::~FString(local_34);
    puVar4 = local_28;
    uVar3 = 0x6e;
    FUN_10005c30(0x6e,puVar4);
    FUN_100d1790(uVar3,puVar4);
    local_8 = (uint)local_8._1_3_ << 8;
    FUN_1003fff0();
  }
  ExceptionList = local_10;
  return;
}


// ==== 101693a7 Catch@101693a7

void Catch_101693a7(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 101693bb Catch@101693bb

void Catch_101693bb(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NConsoleWnd::OnExSetCompassZoneCode");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101693e0 FUN_101693e0

void FUN_101693e0(L2ParamStack *param_1)

{
  void *pvVar1;
  void *pvVar2;
  undefined4 uVar3;
  int iVar4;
  undefined1 *puVar5;
  uint uStack_6c;
  FString local_5c [12];
  FString local_50 [12];
  FString local_44 [12];
  undefined1 local_38 [20];
  int local_24;
  void *local_20;
  void *local_1c;
  void *local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  puStack_c = &LAB_10210fce;
  local_10 = ExceptionList;
  uStack_6c = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_6c;
  ExceptionList = &local_10;
  local_8 = 0;
  pvVar1 = L2ParamStack::Top(param_1);
  local_18 = L2ParamStack::Top(param_1);
  pvVar2 = L2ParamStack::Top(param_1);
  FUN_1003f970();
  local_8._0_1_ = 1;
  FString::FString(local_44,(ushort *)L"RaidRank");
  local_8._0_1_ = 2;
  FUN_10040090(local_44,pvVar1);
  local_8._0_1_ = 1;
  FString::~FString(local_44);
  FString::FString(local_44,(ushort *)L"SeasonPoint");
  local_8._0_1_ = 3;
  FUN_10040090(local_44,local_18);
  local_8._0_1_ = 1;
  FString::~FString(local_44);
  FString::FString(local_44,(ushort *)L"Count");
  local_8._0_1_ = 4;
  FUN_10040090(local_44,pvVar2);
  local_8 = CONCAT31(local_8._1_3_,1);
  FString::~FString(local_44);
  for (iVar4 = 0; local_24 = iVar4, iVar4 < (int)pvVar2; iVar4 = iVar4 + 1) {
    local_18 = L2ParamStack::Top(param_1);
    local_1c = L2ParamStack::Top(param_1);
    local_20 = L2ParamStack::Top(param_1);
    uVar3 = FString::Printf((ushort *)local_44,L"MonsterID%d",iVar4);
    local_8._0_1_ = 5;
    FUN_10040090(uVar3,local_18);
    local_8._0_1_ = 1;
    FString::~FString(local_44);
    uVar3 = FString::Printf((ushort *)local_50,L"CurrentPoint%d",iVar4);
    local_8._0_1_ = 6;
    FUN_10040090(uVar3,local_1c);
    local_8._0_1_ = 1;
    FString::~FString(local_50);
    uVar3 = FString::Printf((ushort *)local_5c,L"TotalPoint%d",iVar4);
    local_8._0_1_ = 7;
    FUN_10040090(uVar3,local_20);
    local_8 = CONCAT31(local_8._1_3_,1);
    FString::~FString(local_5c);
  }
  puVar5 = local_38;
  uVar3 = 0x78;
  FUN_10005c30(0x78,puVar5);
  FUN_100d1790(uVar3,puVar5);
  local_8 = local_8 & 0xffffff00;
  FUN_1003fff0();
  ExceptionList = local_10;
  return;
}


// ==== 101695bc Catch@101695bc

void Catch_101695bc(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x24) = *(undefined4 *)(unaff_EBP + -0x28);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x24,&DAT_102a47f0);
}


// ==== 101695d0 Catch@101695d0

void Catch_101695d0(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NConsoleWnd::OnExGetBossRecord");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101695f0 FUN_101695f0

void FUN_101695f0(void)

{
  int iVar1;
  undefined4 uVar2;
  FString *pFVar3;
  uint uStack_38;
  FString local_28 [20];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_10210ff9;
  local_10 = ExceptionList;
  uStack_38 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_38;
  ExceptionList = &local_10;
  local_8 = 0;
  iVar1 = FUN_10005c30();
  if (iVar1 != 0) {
    FString::FString(local_28,(ushort *)&DAT_1022f9f8);
    local_8._0_1_ = 1;
    pFVar3 = local_28;
    uVar2 = 0x82;
    FUN_10005c30(0x82,pFVar3);
    FUN_100d1790(uVar2,pFVar3);
    local_8 = (uint)local_8._1_3_ << 8;
    FString::~FString(local_28);
  }
  ExceptionList = local_10;
  return;
}


// ==== 1016967a Catch@1016967a

void Catch_1016967a(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1016968e Catch@1016968e

void Catch_1016968e(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NConsoleWnd::OnExShowAdventurerGuideBook");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101696b0 FUN_101696b0

void FUN_101696b0(L2ParamStack *param_1)

{
  void *pvVar1;
  ushort *puVar2;
  int iVar3;
  undefined4 uVar4;
  undefined1 *puVar5;
  uint uStack_74;
  FString local_64 [12];
  FString local_58 [12];
  undefined1 local_4c [20];
  void *local_38;
  void *local_34;
  void *local_30;
  void *local_2c;
  void *local_28;
  void *local_24;
  void *local_20;
  void *local_1c;
  void *local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_10211094;
  local_10 = ExceptionList;
  uStack_74 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_74;
  ExceptionList = &local_10;
  local_8 = 0;
  pvVar1 = L2ParamStack::Top(param_1);
  local_18 = L2ParamStack::Top(param_1);
  local_1c = L2ParamStack::Top(param_1);
  local_20 = L2ParamStack::Top(param_1);
  local_24 = L2ParamStack::Top(param_1);
  local_28 = L2ParamStack::Top(param_1);
  local_2c = L2ParamStack::Top(param_1);
  local_30 = L2ParamStack::Top(param_1);
  local_34 = L2ParamStack::Top(param_1);
  local_38 = L2ParamStack::Top(param_1);
  puVar2 = L2ParamStack::Top(param_1);
  FString::FString(local_64,puVar2);
  local_8._0_1_ = 1;
  FUN_1003f970();
  local_8._0_1_ = 2;
  FString::FString(local_58,(ushort *)L"MsgType");
  local_8._0_1_ = 3;
  FUN_10040090(local_58,pvVar1);
  local_8._0_1_ = 2;
  FString::~FString(local_58);
  FString::FString(local_58,(ushort *)L"MsgNo");
  local_8._0_1_ = 4;
  FUN_10040090(local_58,local_18);
  local_8._0_1_ = 2;
  FString::~FString(local_58);
  FString::FString(local_58,(ushort *)L"WindowType");
  local_8._0_1_ = 5;
  FUN_10040090(local_58,local_1c);
  local_8._0_1_ = 2;
  FString::~FString(local_58);
  FString::FString(local_58,(ushort *)L"FontSize");
  local_8._0_1_ = 6;
  FUN_10040090(local_58,local_20);
  local_8._0_1_ = 2;
  FString::~FString(local_58);
  FString::FString(local_58,(ushort *)L"FontType");
  local_8._0_1_ = 7;
  FUN_10040090(local_58,local_24);
  local_8._0_1_ = 2;
  FString::~FString(local_58);
  FString::FString(local_58,(ushort *)L"MsgColor");
  local_8._0_1_ = 8;
  FUN_10040090(local_58,local_28);
  local_8._0_1_ = 2;
  FString::~FString(local_58);
  FString::FString(local_58,(ushort *)L"ShadowType");
  local_8._0_1_ = 9;
  FUN_10040090(local_58,local_2c);
  local_8._0_1_ = 2;
  FString::~FString(local_58);
  FString::FString(local_58,(ushort *)L"BackgroundType");
  local_8._0_1_ = 10;
  FUN_10040090(local_58,local_30);
  local_8._0_1_ = 2;
  FString::~FString(local_58);
  FString::FString(local_58,(ushort *)L"LifeTime");
  local_8._0_1_ = 0xb;
  FUN_10040090(local_58,local_34);
  local_8._0_1_ = 2;
  FString::~FString(local_58);
  FString::FString(local_58,(ushort *)L"AnimationType");
  local_8._0_1_ = 0xc;
  FUN_10040090(local_58,local_38);
  local_8._0_1_ = 2;
  FString::~FString(local_58);
  FString::FString(local_58,(ushort *)&DAT_1027c6f8);
  local_8._0_1_ = 0xd;
  FUN_10040230(local_58,local_64);
  local_8 = CONCAT31(local_8._1_3_,2);
  FString::~FString(local_58);
  iVar3 = FUN_10005c30();
  if (iVar3 != 0) {
    puVar5 = local_4c;
    uVar4 = 0x8c;
    FUN_10005c30(0x8c,puVar5);
    FUN_100d1790(uVar4,puVar5);
  }
  local_8._0_1_ = 1;
  FUN_1003fff0();
  local_8 = (uint)local_8._1_3_ << 8;
  FString::~FString(local_64);
  ExceptionList = local_10;
  return;
}


// ==== 1016999c Catch@1016999c

void Catch_1016999c(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x38) = *(undefined4 *)(unaff_EBP + -0x3c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x38,&DAT_102a47f0);
}


// ==== 101699b0 Catch@101699b0

void Catch_101699b0(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NConsoleWnd::OnExShowScreenMessage");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101699d0 FUN_101699d0

void FUN_101699d0(L2ParamStack *param_1)

{
  void *pvVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  uint uStack_44;
  FString local_34 [12];
  undefined1 local_28 [20];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_102110c1;
  local_10 = ExceptionList;
  uStack_44 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_44;
  ExceptionList = &local_10;
  local_8 = 0;
  L2ParamStack::Restart(param_1);
  FUN_1003f970();
  local_8._0_1_ = 1;
  FString::FString(local_34,(ushort *)L"RoutingType");
  local_8._0_1_ = 2;
  pvVar1 = L2ParamStack::Top(param_1);
  FUN_10040090(local_34,pvVar1);
  local_8._0_1_ = 1;
  FString::~FString(local_34);
  puVar3 = local_28;
  uVar2 = 0x578;
  FUN_10005c30(0x578,puVar3);
  FUN_100d1790(uVar2,puVar3);
  local_8 = (uint)local_8._1_3_ << 8;
  FUN_1003fff0();
  ExceptionList = local_10;
  return;
}


// ==== 10169a89 Catch@10169a89

void Catch_10169a89(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10169a9d Catch@10169a9d

void Catch_10169a9d(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NConsoleWnd::OnExSetMpccRouting");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10169ac0 FUN_10169ac0

void FUN_10169ac0(L2ParamStack *param_1)

{
  void *pvVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  uint uStack_44;
  FString local_34 [12];
  undefined1 local_28 [20];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_102110fa;
  local_10 = ExceptionList;
  uStack_44 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_44;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_1003f970();
  local_8._0_1_ = 1;
  FString::FString(local_34,(ushort *)L"AllCount");
  local_8._0_1_ = 2;
  pvVar1 = L2ParamStack::Top(param_1);
  FUN_10040090(local_34,pvVar1);
  local_8._0_1_ = 1;
  FString::~FString(local_34);
  FString::FString(local_34,(ushort *)L"Count");
  local_8._0_1_ = 3;
  pvVar1 = L2ParamStack::Top(param_1);
  FUN_10040090(local_34,pvVar1);
  local_8._0_1_ = 1;
  FString::~FString(local_34);
  puVar3 = local_28;
  uVar2 = 0x64a;
  FUN_10005c30(0x64a,puVar3);
  FUN_100d1790(uVar2,puVar3);
  local_8 = (uint)local_8._1_3_ << 8;
  FUN_1003fff0();
  ExceptionList = local_10;
  return;
}


// ==== 10169ba2 Catch@10169ba2

void Catch_10169ba2(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10169bb6 Catch@10169bb6

void Catch_10169bb6(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NConsoleWnd::OnExListPartyMatchingWaitingRoomStart");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10169be0 FUN_10169be0

void FUN_10169be0(L2ParamStack *param_1)

{
  ushort *puVar1;
  void *pvVar2;
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
  
  puStack_c = &LAB_1021114c;
  local_10 = ExceptionList;
  uStack_50 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_50;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_1003f970();
  local_8._0_1_ = 1;
  puVar1 = L2ParamStack::Top(param_1);
  FString::FString(local_40,puVar1);
  local_8._0_1_ = 2;
  FString::FString(local_34,(ushort *)L"Name");
  local_8._0_1_ = 3;
  FUN_10040230(local_34,local_40);
  local_8._0_1_ = 2;
  FString::~FString(local_34);
  local_8._0_1_ = 1;
  FString::~FString(local_40);
  FString::FString(local_40,(ushort *)L"ClassID");
  local_8._0_1_ = 4;
  pvVar2 = L2ParamStack::Top(param_1);
  FUN_10040090(local_40,pvVar2);
  local_8._0_1_ = 1;
  FString::~FString(local_40);
  FString::FString(local_40,(ushort *)L"Level");
  local_8._0_1_ = 5;
  pvVar2 = L2ParamStack::Top(param_1);
  FUN_10040090(local_40,pvVar2);
  local_8._0_1_ = 1;
  FString::~FString(local_40);
  puVar4 = local_28;
  uVar3 = 0x654;
  FUN_10005c30(0x654,puVar4);
  FUN_100d1790(uVar3,puVar4);
  local_8 = (uint)local_8._1_3_ << 8;
  FUN_1003fff0();
  ExceptionList = local_10;
  return;
}


// ==== 10169d0f Catch@10169d0f

void Catch_10169d0f(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10169d23 Catch@10169d23

void Catch_10169d23(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NConsoleWnd::OnExListPartyMatchingWaitingRoom");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10169d40 FUN_10169d40

void FUN_10169d40(void)

{
  int iVar1;
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_10211179;
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


// ==== 10169de0 FUN_10169de0

void FUN_10169de0(void)

{
  int iVar1;
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_102111a9;
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


// ==== 10169e80 FUN_10169e80

undefined4 * FUN_10169e80(undefined4 *param_1,void *param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  int in_ECX;
  
  puVar1 = (undefined4 *)FUN_1014faa0(0x1cec);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    puVar1[1] = *param_1;
    _memcpy(puVar1 + 2,param_2,0x1ce4);
  }
  uVar2 = *(int *)(in_ECX + 0x10) - 1U & puVar1[1];
  *puVar1 = *(undefined4 *)(*(int *)(in_ECX + 0xc) + uVar2 * 4);
  *(int *)(*(int *)(in_ECX + 0xc) + uVar2 * 4) = *(int *)(in_ECX + 4) + -1;
  if (*(int *)(in_ECX + 0x10) * 2 + 8 < *(int *)(in_ECX + 4)) {
    *(int *)(in_ECX + 0x10) = *(int *)(in_ECX + 0x10) * 2;
    FUN_1014f9c0();
  }
  return puVar1 + 2;
}


// ==== 10169f00 FUN_10169f00

void FUN_10169f00(void)

{
  int iVar1;
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_102111d9;
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
  FArray::Remove(in_ECX,0,iVar1,0x14);
  local_4 = 0xffffffff;
  FArray::~FArray(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 10169fa0 FUN_10169fa0

void FUN_10169fa0(void)

{
  int iVar1;
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_10211209;
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
  FArray::Remove(in_ECX,0,iVar1,0x1cec);
  local_4 = 0xffffffff;
  FArray::~FArray(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 1016a040 FUN_1016a040

undefined4 FUN_1016a040(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  UL2ConsoleWnd *in_ECX;
  code *extraout_ECX;
  code *extraout_ECX_00;
  undefined4 uStack_6c;
  code *pcStack_38;
  undefined4 uStack_34;
  uint uStack_30;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  puStack_c = &LAB_1021128d;
  local_10 = ExceptionList;
  uStack_30 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_8 = 0;
  if (*(int *)(in_ECX + 0x5130) != 0) {
    return 1;
  }
  DAT_103663b8 = param_1;
  uStack_34 = 0x1016a0a6;
  DAT_103663bc = (int *)in_ECX;
  ExceptionList = &local_10;
  DAT_103663c0 = FUN_1014b6a0();
  pcStack_38 = GL2UseKeyCrypt_exref;
  if (*(int *)GL2UseKeyCrypt_exref != 0) {
    uStack_34 = 4;
    pcStack_38 = (code *)0x1016a0bc;
    iVar1 = FUN_10004ed0();
    local_8._0_1_ = 1;
    if (iVar1 == 0) {
      uVar2 = 0;
      pcStack_38 = extraout_ECX;
    }
    else {
      uStack_34 = 0x1016a0d1;
      uVar2 = FUN_10135d60();
      pcStack_38 = extraout_ECX_00;
    }
    local_8 = (uint)local_8._1_3_ << 8;
    *(undefined4 *)(in_ECX + 0x5120) = uVar2;
  }
  uStack_34 = 0;
  FName::FName((FName *)&pcStack_38,0);
  UObject::GetTransientPackage();
  iVar1 = FUN_1014ad70();
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uStack_34 = 0x1016a10d;
    uVar2 = FUN_10072480();
  }
  *(undefined4 *)(in_ECX + 0x50a8) = uVar2;
  uStack_34 = 0x1016a11e;
  FUN_10070d60();
  uStack_34 = 0;
  FName::FName((FName *)&pcStack_38,0);
  UObject::GetTransientPackage();
  iVar1 = FUN_1014b0d0();
  if (iVar1 == 0) {
    piVar3 = (int *)0x0;
  }
  else {
    uStack_34 = 0x1016a147;
    piVar3 = (int *)FUN_1013ee60();
  }
  *(int **)(in_ECX + 0x50ac) = piVar3;
  uStack_34 = 3;
  pcStack_38 = (code *)0x0;
  (**(code **)(*piVar3 + 0xc0))();
  (**(code **)(**(int **)(in_ECX + 0x50a8) + 0x68))();
  FUN_1005c1e0();
  FUN_1005aa50();
  if (*(int *)GL2ThaiHtmlMode_exref != 0) {
    uStack_6c = 0x1016a1c4;
    FString::FString((FString *)&stack0xffffff9c,(ushort *)L"ThaiHtmlWordWrapState");
    local_8 = local_8 & 0xffffff00;
    FUN_10070110();
    FName::FName((FName *)&stack0xffffffa0,0);
    UObject::GetTransientPackage();
    uStack_6c = 0x1016a1f7;
    iVar1 = FUN_1014b100();
    if (iVar1 == 0) {
      piVar3 = (int *)0x0;
    }
    else {
      piVar3 = (int *)FUN_1008bee0();
    }
    *(int **)(in_ECX + 0x50b0) = piVar3;
    uStack_6c = 300;
    (**(code **)(*piVar3 + 0xc0))(*(int *)GSEKScreenX_exref / 2,*(int *)GSEKScreenY_exref / 2);
    (**(code **)(**(int **)(in_ECX + 0x50a8) + 0x68))(*(undefined4 *)(in_ECX + 0x50b0),2,0);
    FUN_1005c1e0();
  }
  iVar1 = FUN_10004ed0();
  local_8._0_1_ = 3;
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = FUN_10049960();
  }
  local_8._0_1_ = 0;
  *(int *)(in_ECX + 0x505c) = iVar1;
  if (iVar1 == 0) {
    appFailAssert("m_pShortcutManager",".\\Src\\NConsoleWindow.cpp",0x1ad);
  }
  iVar1 = FUN_10004ed0();
  local_8._0_1_ = 4;
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = FUN_10041c60();
  }
  local_8 = (uint)local_8._1_3_ << 8;
  *(int *)(in_ECX + 0x5060) = iVar1;
  if (iVar1 == 0) {
    appFailAssert("m_pOptionManager",".\\Src\\NConsoleWindow.cpp",0x1b0);
  }
  FName::FName((FName *)&stack0xffffffa0,0);
  UObject::GetTransientPackage();
  uStack_6c = 0x1016a30e;
  iVar1 = FUN_1014ada0();
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = FUN_10046090();
  }
  *(int *)(in_ECX + 0x5064) = iVar1;
  if (iVar1 == 0) {
    appFailAssert("m_pShortcutItemManager",".\\Src\\NConsoleWindow.cpp",0x1b3);
  }
  iVar1 = FUN_10004ed0();
  local_8._0_1_ = 5;
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = FUN_1000c990();
  }
  local_8 = (uint)local_8._1_3_ << 8;
  *(int *)(in_ECX + 0x5068) = iVar1;
  if (iVar1 == 0) {
    appFailAssert("m_pConstantManager",".\\Src\\NConsoleWindow.cpp",0x1b6);
  }
  FName::FName((FName *)&stack0xffffffa0,0);
  UObject::GetTransientPackage();
  uStack_6c = 0x1016a39e;
  iVar1 = FUN_1014add0();
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = FUN_101b02f0();
  }
  *(int *)(in_ECX + 0x5110) = iVar1;
  if (iVar1 == 0) {
    appFailAssert("m_pDataManager",".\\Src\\NConsoleWindow.cpp",0x1b9);
  }
  UObject::AddToRoot(*(UObject **)(in_ECX + 0x5110));
  iVar1 = FUN_10004ed0();
  local_8._0_1_ = 6;
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_101b2f00();
  }
  local_8._0_1_ = 0;
  *(undefined4 *)(in_ECX + 0x5118) = uVar2;
  iVar1 = FUN_10004ed0();
  local_8._0_1_ = 7;
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_101b9590();
  }
  local_8 = (uint)local_8._1_3_ << 8;
  *(undefined4 *)(in_ECX + 0x511c) = uVar2;
  iVar1 = FUN_1014ff50();
  if ((iVar1 == 0) && (*(int *)GLog_exref != 0)) {
    FOutputDevice::Logf2(*(FOutputDevice **)GLog_exref,(ushort *)*(FOutputDevice **)GLog_exref);
  }
  if (*(int *)GIsOnlyL2Console_exref == 0) {
    FUN_1014d6a0();
    iVar1 = (**(code **)(*(int *)**(undefined4 **)(*(int *)(*(int *)(in_ECX + 0x50) + 0x54) + 0x38)
                        + 0xbc))();
    if (iVar1 != 0) {
      iVar1 = FUN_1014f900();
      if (iVar1 == 0) {
        (**(code **)(*(int *)in_ECX + 0x64c))();
      }
    }
  }
  (**(code **)(*(int *)in_ECX + 0x5c4))();
  UL2ConsoleWnd::SetState(in_ECX,2);
  FString::FString((FString *)&uStack_6c,(ushort *)L"LoginState");
  local_8 = local_8 & 0xffffff00;
  FUN_10070110();
  if (*(int *)GIsOnlyL2Console_exref != 0) {
    FString::FString((FString *)&uStack_6c,(ushort *)L"DebugState");
    local_8 = local_8 & 0xffffff00;
    FUN_10070110();
  }
  if (*(int *)GIsL2NetLogin_exref != 0) {
    if (*(int *)GL2UseGameGuard_exref == 0) goto LAB_1016a539;
    FUN_10147b50();
  }
  if (*(int *)GL2UseGameGuard_exref != 0) {
    DAT_1039e52c = (int *)in_ECX;
  }
LAB_1016a539:
  (**(code **)(*(int *)in_ECX + 0x2cc))();
  *(undefined4 *)(in_ECX + 0x5130) = 1;
  ExceptionList = local_10;
  return 1;
}


// ==== 1016a564 Catch@1016a564

void Catch_1016a564(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1016a578 Catch@1016a578

void Catch_1016a578(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NConsoleWnd::Initialize");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1016a5a0 FUN_1016a5a0

undefined4 FUN_1016a5a0(int param_1)

{
  undefined4 uVar1;
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_102112b0;
  local_10 = ExceptionList;
  local_8 = 0;
  if (param_1 != 0) {
    ExceptionList = &local_10;
    *(int *)(in_ECX + 0x50) = param_1;
    uVar1 = (**(code **)(*(int *)**(undefined4 **)(*(int *)(param_1 + 0x54) + 0x38) + 0x98))();
    FUN_1016a040(uVar1);
    ExceptionList = local_10;
    return 1;
  }
  return 0;
}


// ==== 1016a627 Catch@1016a627

void Catch_1016a627(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1016a63b Catch@1016a63b

void Catch_1016a63b(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NConsoleWnd::Init");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1016a660 FUN_1016a660

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1016a660(float param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  UUIScript *this;
  ushort *puVar4;
  UL2ConsoleWnd *in_ECX;
  FOutputDevice *this_00;
  int iVar5;
  uint uStack_464;
  int local_450;
  int local_44c;
  int local_444;
  int local_440;
  int local_43c;
  int local_434;
  undefined4 local_430;
  UL2ConsoleWnd *local_42c;
  int local_428;
  int local_420;
  int local_41c;
  undefined1 *local_418;
  void *local_414;
  undefined1 *puStack_410;
  int local_40c;
  ushort local_408 [512];
  uint local_8;
  
  puStack_410 = &LAB_102112e0;
  local_414 = ExceptionList;
  uStack_464 = DAT_103554c4 ^ (uint)local_408;
  local_418 = (undefined1 *)&uStack_464;
  ExceptionList = &local_414;
  iVar5 = 0;
  local_40c = 0;
  local_42c = in_ECX;
  local_8 = uStack_464;
  UL2ConsoleWnd::Tick(in_ECX,param_1);
  *(float *)(in_ECX + 0x50f4) = param_1;
  if (*(int *)(in_ECX + 0x512c) != 0) {
    FUN_1001aca0();
  }
  FUN_10038f80();
  local_40c._0_1_ = 1;
  FUN_1014aba0();
  local_40c = CONCAT31(local_40c._1_3_,2);
  while (local_41c = iVar5, iVar5 < *(int *)(in_ECX + 0x50cc)) {
    puVar1 = (undefined4 *)(*(int *)(in_ECX + 0x50c8) + iVar5 * 0x14);
    if (puVar1[2] == 0) {
      iVar3 = FUN_1014b160(param_1);
      if ((iVar3 != 0) && (puVar1[4] != 0)) {
        local_430 = *puVar1;
        local_444 = puVar1[4];
        FUN_100d9a30(&local_430);
        FUN_100d9a30(&local_444);
      }
      iVar5 = iVar5 + 1;
    }
    else {
      FUN_1014fac0(iVar5,1);
    }
  }
  for (iVar5 = 0; local_428 = iVar5, iVar5 < local_44c; iVar5 = iVar5 + 1) {
    iVar3 = *(int *)(local_450 + iVar5 * 4);
    piVar2 = *(int **)(local_440 + iVar5 * 4);
    this = (UUIScript *)(**(code **)(*piVar2 + 0xc4))();
    if (this != (UUIScript *)0x0) {
      UUIScript::eventOnTimer(this,iVar3);
    }
    (**(code **)(*piVar2 + 0x68))(0x113,iVar3,0);
    in_ECX = local_42c;
  }
  FArray::Empty((FArray *)&local_450,4,0);
  for (local_420 = 0; local_420 < local_43c; local_420 = local_420 + 1) {
  }
  FArray::Empty((FArray *)&local_440,4,0);
  if (*(int *)(in_ECX + 0x5064) != 0) {
    FUN_10045d10(param_1);
  }
  iVar5 = *(int *)(in_ECX + 0x50ac);
  if ((iVar5 != 0) && (*(int *)(iVar5 + 500) != 0)) {
    iVar5 = (**(code **)(**(int **)(iVar5 + 500) + 0xfc))(0);
    if (iVar5 != 0) {
      FUN_10174b60(param_1);
    }
  }
  if (*(int *)(in_ECX + 0x5184) != 0) {
    FUN_101ab9f0(param_1);
  }
  iVar5 = 0;
  while( true ) {
    local_434 = iVar5;
    iVar3 = FUN_101acf70();
    if (iVar3 <= iVar5) break;
    iVar3 = FUN_101adb70(iVar5);
    if ((iVar3 != 0) && (*(int *)(iVar3 + 0x998) != 0)) {
      FUN_101b4df0(param_1);
    }
    iVar5 = iVar5 + 1;
  }
  FUN_10164360();
  if ((((*(int *)GL2TextCapture_exref == 1) || (*(int *)GL2TextCapture_exref == 3)) &&
      (iVar5 = *(int *)(in_ECX + 0x50ac), iVar5 != 0)) && (*(int *)(iVar5 + 0x208) != 0)) {
    (**(code **)(**(int **)(iVar5 + 0x208) + 0x204))();
  }
  if (((*(int *)GL2UseGameGuard_exref != 0) && (DAT_1039e528 != 0)) &&
     (_DAT_1039ea70 = _DAT_1039ea70 + param_1, 10.0 < _DAT_1039ea70)) {
    _DAT_1039ea70 = 0.0;
    iVar5 = FUN_101b9a00();
    if (iVar5 != 0x755) {
      if (*(int *)GLog_exref != 0) {
        FOutputDevice::Logf2(this_00,*(ushort **)GLog_exref);
      }
      puVar4 = FString::operator*((FString *)(GL2GameData_exref + 0x3565c));
      appSprintf(local_408,(ushort *)L"%s\n(ErrorCode=%d)",puVar4,iVar5);
      (**(code **)(*(int *)in_ECX + 0x80))(local_408,1);
    }
  }
  if (*(int *)(in_ECX + 0x5100) != 0) {
    (**(code **)(*(int *)in_ECX + 0x804))();
  }
  if (*(int *)GL2FFEffectUse_exref != 0) {
    (**(code **)(*(int *)**(undefined4 **)(*(int *)(*(int *)(in_ECX + 0x50) + 0x54) + 0x38) + 0xb4))
              (param_1);
  }
  FUN_10005c30(param_1);
  FUN_100d18a0(param_1);
  if (*(int *)(in_ECX + 0x517c) != 0) {
    FUN_10150190();
    *(int *)(in_ECX + 0x517c) = 0;
  }
  if (*(int *)(in_ECX + 0x5180) != 0) {
    FUN_1014cd40();
    *(int *)(in_ECX + 0x5180) = 0;
  }
  local_40c._0_1_ = 1;
  FUN_10169d40();
  local_40c = (uint)local_40c._1_3_ << 8;
  FUN_10039be0();
  local_40c = 0xffffffff;
  ExceptionList = local_414;
  __security_check_cookie(local_8 ^ (uint)local_408);
  return;
}


// ==== 1016aa43 Catch@1016aa43

void Catch_1016aa43(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x1c) = *(undefined4 *)(unaff_EBP + -0x4c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x1c,&DAT_102a47f0);
}


// ==== 1016aa57 Catch@1016aa57

void Catch_1016aa57(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NConsoleWnd::Tick");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1016aa80 FUN_1016aa80

undefined4 FUN_1016aa80(undefined4 param_1)

{
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10211310;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if (*(int *)(in_ECX + 0x50ac) != 0) {
    FUN_10164e80();
  }
  if (((*(int *)(in_ECX + 0x50a8) != 0) && (*(int *)(in_ECX + 0x5130) != 0)) &&
     (*(int *)(in_ECX + 0x50e8) == 0)) {
    FUN_10070b80(param_1);
    param_1 = FUN_100736b0(0xf,0,0);
    FUN_10070c10();
  }
  ExceptionList = local_10;
  return param_1;
}


// ==== 1016ab20 Catch@1016ab20

void Catch_1016ab20(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1016ab34 Catch@1016ab34

void Catch_1016ab34(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NConsoleWnd::ConsolePostRender");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1016ab60 FUN_1016ab60

void FUN_1016ab60(void)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  puStack_c = &LAB_10211338;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  bVar1 = false;
  local_8 = 0;
  piVar2 = (int *)(**(code **)(**(int **)(*(int *)(in_ECX + 0x50) + 0x60) + 0x4e0))();
  iVar3 = 0;
  do {
    if (piVar2[1] <= iVar3) {
LAB_1016abde:
      local_8 = local_8 & 0xffffff00;
      FUN_100d10a0();
      if (!bVar1) {
        iVar3 = *(int *)(DAT_103663bc + 0x5110);
        *(undefined4 *)(iVar3 + 100) = 0;
        *(undefined4 *)(iVar3 + 0x68) = 0;
        *(undefined4 *)(iVar3 + 0x6c) = 0;
      }
      ExceptionList = local_10;
      return;
    }
    if (*(int *)(*piVar2 + 4 + iVar3 * 0xc) == *(int *)(*(int *)(DAT_103663bc + 0x5110) + 0x70)) {
      bVar1 = true;
      goto LAB_1016abde;
    }
    iVar3 = iVar3 + 1;
  } while( true );
}


// ==== 1016ac38 Catch@1016ac38

void Catch_1016ac38(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1016ac4c Catch@1016ac4c

void Catch_1016ac4c(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NConsoleWnd::DeleteOldQuestTargetPos");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1016ac70 FUN_1016ac70

void FUN_1016ac70(undefined4 param_1,uint param_2)

{
  int *piVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  FString *this;
  int iVar6;
  undefined4 uVar7;
  undefined1 *puVar8;
  uint uStack_a8;
  FString local_98 [16];
  FString local_88 [12];
  undefined1 *local_7c;
  void *local_78;
  undefined1 *puStack_74;
  int local_70;
  FString local_6c [12];
  FString local_60 [12];
  int local_54;
  int local_50 [2];
  int local_48;
  int local_44;
  uint local_3c;
  int local_38;
  uint local_34;
  int local_30;
  int local_2c;
  int local_28;
  undefined1 local_20 [12];
  uint local_14;
  float local_10;
  float local_c;
  float local_8;
  
  puStack_74 = &LAB_1021139c;
  local_78 = ExceptionList;
  uStack_a8 = DAT_103554c4 ^ (uint)local_6c;
  local_7c = (undefined1 *)&uStack_a8;
  ExceptionList = &local_78;
  local_70 = 0;
  FUN_1003f970();
  local_70._0_1_ = 1;
  FUN_10038f80();
  local_70._0_1_ = 2;
  FUN_1014abf0();
  local_70._0_1_ = 3;
  FUN_100d0a70(&param_1,&local_48);
  local_54 = 0;
  while( true ) {
    if (local_44 <= local_54) {
      local_70._0_1_ = 2;
      FUN_10169de0();
      local_70._0_1_ = 1;
      FUN_10039be0();
      local_70 = (uint)local_70._1_3_ << 8;
      FUN_1003fff0();
      ExceptionList = local_78;
      return;
    }
    piVar1 = *(int **)(local_48 + local_54 * 4);
    if ((piVar1 != (int *)0x0) && (*piVar1 != 0)) break;
    local_54 = local_54 + 1;
  }
  local_8 = 2.0;
  local_34 = 0x1f;
  local_10 = 1.0;
  while( true ) {
    if ((local_34 & 1) != 0) {
      local_10 = local_10 * local_8;
    }
    local_34 = local_34 >> 1;
    if (local_34 == 0) break;
    local_8 = local_8 * local_8;
  }
  local_8 = local_10;
  uVar4 = FUN_101c19e0();
  uVar3 = param_2;
  if ((param_2 & uVar4) == 0) {
    uVar4 = 0;
    for (iVar6 = 0; param_2 = uVar4, local_38 = iVar6, iVar6 < (int)uVar3; iVar6 = iVar6 + 1) {
      FUN_10071050(0x40000000,iVar6);
      uVar5 = FUN_101c19e0();
      uVar4 = uVar4 | uVar5;
    }
  }
  uVar3 = param_2;
  for (uVar4 = 0; uVar2 = param_1, local_3c = uVar4, (int)uVar4 < 0x1e; uVar4 = uVar4 + 1) {
    local_8 = 2.0;
    local_14 = uVar4;
    if ((int)uVar4 < 0) {
      local_14 = -uVar4;
    }
    local_c = 1.0;
    while( true ) {
      if ((local_14 & 1) != 0) {
        local_c = local_c * local_8;
      }
      local_14 = local_14 >> 1;
      if (local_14 == 0) break;
      local_8 = local_8 * local_8;
    }
    local_8 = local_c;
    if ((int)uVar4 < 0) {
      local_8 = 1.0 / local_c;
    }
    uVar5 = FUN_101c19e0();
    if ((uVar3 & uVar5) != 0) {
      local_50[0] = uVar4 + 1;
      FUN_100d9a30(local_50);
    }
  }
  local_30 = 0;
  while (iVar6 = local_30, local_30 < local_28) {
    FUN_1003faa0();
    FString::FString(local_60,(ushort *)L"QuestID");
    local_70._0_1_ = 4;
    FUN_10040090(local_60,uVar2);
    local_70._0_1_ = 3;
    FString::~FString(local_60);
    FString::FString(local_6c,(ushort *)L"Level");
    local_70._0_1_ = 5;
    FUN_10040090(local_6c,*(undefined4 *)(local_2c + iVar6 * 4));
    local_70._0_1_ = 3;
    FString::~FString(local_6c);
    if (iVar6 == local_28 + -1) {
      FString::FString(local_88,(ushort *)L"Completed");
      local_70._0_1_ = 6;
      FUN_10040090(local_88,0);
      this = local_88;
    }
    else {
      FString::FString(local_98,(ushort *)L"Completed");
      local_70._0_1_ = 7;
      FUN_10040090(local_98,1);
      this = local_98;
    }
    local_70._0_1_ = 3;
    FString::~FString(this);
    puVar8 = local_20;
    uVar7 = 0x2c6;
    FUN_10005c30(0x2c6,puVar8);
    FUN_100d1790(uVar7,puVar8);
    local_30 = iVar6 + 1;
  }
  local_70._0_1_ = 2;
  FUN_10169de0();
  local_70._0_1_ = 1;
  FUN_10039be0();
  local_70 = (uint)local_70._1_3_ << 8;
  FUN_1003fff0();
  ExceptionList = local_78;
  return;
}


// ==== 1016af60 Catch@1016af60

void Catch_1016af60(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + 0x20) = *(undefined4 *)(unaff_EBP + -0x20);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + 0x20,&DAT_102a47f0);
}


// ==== 1016af74 Catch@1016af74

void Catch_1016af74(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NConsoleWnd::AddQuestID");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1016afa0 FUN_1016afa0

ushort * FUN_1016afa0(void)

{
  int *piVar1;
  ushort *puVar2;
  uint uStack_3c;
  int local_2c;
  int local_28;
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_102113c8;
  local_10 = ExceptionList;
  uStack_3c = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_3c;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_1014abf0();
  local_8._0_1_ = 1;
  FUN_100d0a70(&stack0x00000004,&local_2c);
  local_18 = 0;
  while( true ) {
    if (local_28 <= local_18) {
      local_8 = (uint)local_8._1_3_ << 8;
      FUN_10169de0();
      ExceptionList = local_10;
      return (ushort *)0x0;
    }
    piVar1 = *(int **)(local_2c + local_18 * 4);
    if ((piVar1 != (int *)0x0) && (*piVar1 != 0)) break;
    local_18 = local_18 + 1;
  }
  puVar2 = FString::operator*((FString *)(piVar1 + 3));
  local_8 = (uint)local_8._1_3_ << 8;
  FUN_10169de0();
  ExceptionList = local_10;
  return puVar2;
}


// ==== 1016b064 Catch@1016b064

void Catch_1016b064(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 1016b078 Catch@1016b078

void Catch_1016b078(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NConsoleWnd::GetQuestName");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1016b0a0 FUN_1016b0a0

void FUN_1016b0a0(void)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  ushort *puVar4;
  int *piVar5;
  FString local_1c0 [12];
  int *local_1b4;
  int *local_1b0;
  int *local_1ac;
  int local_1a8;
  undefined4 local_1a4;
  FString local_1a0 [12];
  FString local_194 [12];
  FString local_188 [12];
  FString local_17c [12];
  FString local_170 [12];
  FString local_164 [12];
  FString local_158 [12];
  FString local_14c [12];
  FString local_140 [12];
  FString local_134 [12];
  FString local_128 [12];
  FString local_11c [12];
  ushort local_110 [128];
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_102114a2;
  local_c = ExceptionList;
  local_10 = DAT_103554c4 ^ (uint)local_1c0;
  uVar3 = DAT_103554c4 ^ (uint)&stack0xfffffe30;
  ExceptionList = &local_c;
  FString::FString(local_1c0,(ushort *)&DAT_1022f9f8);
  local_4 = 0;
  if (DAT_1035786c == 0) {
    FUN_10005270(uVar3);
  }
  FUN_100d1790(0xb18,local_1c0);
  local_4 = 0xffffffff;
  FString::~FString(local_1c0);
  piVar5 = *(int **)(GL2GameData_exref + 0x3d44);
  local_1a8 = 0;
  local_1a4 = 0;
  local_4 = 1;
  local_1b4 = piVar5;
  local_1b0 = piVar5;
  local_1ac = piVar5;
  if (0 < piVar5[1]) {
    do {
      piVar1 = *(int **)(*piVar5 + 8 + local_1a8 * 0xc);
      if (((piVar1 != (int *)0x0) && (*piVar1 != 0)) && (piVar1[2] == 1)) {
        FUN_1003f970();
        local_4._0_1_ = 2;
        FString::FString(local_164,(ushort *)L"QuestID");
        local_4._0_1_ = 3;
        FUN_10040090(local_164,piVar1[1]);
        local_4._0_1_ = 2;
        FString::~FString(local_164);
        puVar4 = FString::operator*((FString *)(piVar1 + 3));
        FString::FString(local_14c,puVar4);
        local_4._0_1_ = 4;
        FString::FString(local_128,(ushort *)L"QuestName");
        local_4._0_1_ = 5;
        FUN_10040230(local_128,local_14c);
        local_4._0_1_ = 4;
        FString::~FString(local_128);
        local_4._0_1_ = 2;
        FString::~FString(local_14c);
        puVar4 = FString::operator*((FString *)(piVar1 + 0x22));
        FString::FString(local_11c,puVar4);
        local_4._0_1_ = 6;
        FString::FString(local_17c,(ushort *)L"QuestRequirement");
        local_4._0_1_ = 7;
        FUN_10040230(local_17c,local_11c);
        local_4._0_1_ = 6;
        FString::~FString(local_17c);
        local_4 = CONCAT31(local_4._1_3_,2);
        FString::~FString(local_11c);
        iVar2 = piVar1[0x17];
        if (iVar2 < 1) {
          puVar4 = FString::operator*((FString *)(GL2GameData_exref + 0x6d174));
          appSprintf(local_110,(ushort *)&DAT_1022dde0,puVar4);
        }
        else if (piVar1[0x18] < 1) {
          puVar4 = FString::operator*((FString *)(GL2GameData_exref + 0x6d120));
          appSprintf(local_110,(ushort *)L"%d %s",iVar2,puVar4);
        }
        else {
          appSprintf(local_110,(ushort *)L"%d~%d",iVar2,piVar1[0x18]);
        }
        FString::FString(local_134,local_110);
        local_4._0_1_ = 8;
        FString::FString(local_1a0,(ushort *)L"QuestLevel");
        local_4._0_1_ = 9;
        FUN_10040230(local_1a0,local_134);
        local_4._0_1_ = 8;
        FString::~FString(local_1a0);
        local_4._0_1_ = 2;
        FString::~FString(local_134);
        FString::FString(local_194,(ushort *)L"QuestType");
        local_4._0_1_ = 10;
        FUN_10040090(local_194,piVar1[0x19]);
        local_4._0_1_ = 2;
        FString::~FString(local_194);
        puVar4 = FL2GameData::GetNpcName((FL2GameData *)GL2GameData_exref,piVar1[0x1e]);
        FString::FString(local_170,puVar4);
        local_4._0_1_ = 0xb;
        FString::FString(local_188,(ushort *)L"QuestNpcName");
        local_4._0_1_ = 0xc;
        FUN_10040230(local_188,local_170);
        local_4._0_1_ = 0xb;
        FString::~FString(local_188);
        local_4._0_1_ = 2;
        FString::~FString(local_170);
        puVar4 = FString::operator*((FString *)(piVar1 + 0x25));
        FString::FString(local_140,puVar4);
        local_4._0_1_ = 0xd;
        FString::FString(local_158,(ushort *)L"QuestDecription");
        local_4._0_1_ = 0xe;
        FUN_10040230(local_158,local_140);
        local_4._0_1_ = 0xd;
        FString::~FString(local_158);
        local_4 = CONCAT31(local_4._1_3_,2);
        FString::~FString(local_140);
        if (DAT_1035786c == 0) {
          FUN_10005270();
        }
        FUN_100d1790(0xb22,local_1c0);
        local_4 = CONCAT31(local_4._1_3_,1);
        FUN_1003fff0();
        piVar5 = local_1b4;
      }
      local_1a8 = local_1a8 + 1;
    } while (local_1a8 < piVar5[1]);
  }
  local_4 = 0xffffffff;
  ExceptionList = local_c;
  __security_check_cookie(local_10 ^ (uint)local_1c0);
  return;
}


// ==== 1016b560 FUN_1016b560

void FUN_1016b560(L2ParamStack *param_1)

{
  int iVar1;
  void *pvVar2;
  void *pvVar3;
  ushort *puVar4;
  undefined4 uVar5;
  int in_ECX;
  undefined1 *puVar6;
  uint uStack_b4;
  FString local_a4 [12];
  FString local_98 [12];
  FString local_8c [12];
  undefined1 *local_80;
  void *local_7c;
  undefined1 *puStack_78;
  uint local_74;
  FString local_70 [12];
  FString local_64 [12];
  FString local_58 [16];
  FString local_48 [12];
  FString local_3c [12];
  void *local_30;
  int local_2c;
  void *local_28;
  FString local_20 [12];
  undefined1 local_14 [12];
  uint local_8;
  
  puStack_78 = &LAB_1021153b;
  local_7c = ExceptionList;
  uStack_b4 = DAT_103554c4 ^ (uint)local_70;
  local_80 = (undefined1 *)&uStack_b4;
  ExceptionList = &local_7c;
  local_74 = 0;
  if (*(int *)(in_ECX + 0x50ac) != 0) {
    L2ParamStack::Restart(param_1);
    FUN_1003f970();
    local_74._0_1_ = 1;
    pvVar2 = L2ParamStack::Top(param_1);
    pvVar3 = L2ParamStack::Top(param_1);
    local_28 = pvVar3;
    FString::FString(local_20,(ushort *)L"PlayerID");
    local_74._0_1_ = 2;
    FUN_10040090(local_20,pvVar2);
    local_74._0_1_ = 1;
    FString::~FString(local_20);
    FString::FString(local_20,(ushort *)&DAT_10274940);
    local_74._0_1_ = 3;
    FUN_10040090(local_20,pvVar3);
    local_74 = CONCAT31(local_74._1_3_,1);
    FString::~FString(local_20);
    local_2c = 0;
    while (iVar1 = local_2c, local_2c < (int)local_28) {
      pvVar2 = L2ParamStack::Top(param_1);
      pvVar3 = L2ParamStack::Top(param_1);
      local_8 = (uint)pvVar3 & 0xffff;
      local_30 = L2ParamStack::Top(param_1);
      local_8 = (uint)(short)local_8;
      puVar4 = (ushort *)FUN_10164900(pvVar2,local_8);
      FString::FString(local_3c,puVar4);
      local_74._0_1_ = 4;
      puVar4 = (ushort *)FUN_10164870(pvVar2,local_8);
      FString::FString(local_48,puVar4);
      local_74._0_1_ = 5;
      puVar4 = (ushort *)FUN_10164990(pvVar2,local_8);
      FString::FString(local_20,puVar4);
      local_74._0_1_ = 6;
      uVar5 = FString::Printf((ushort *)local_70,L"SkillID_%d",iVar1);
      local_74._0_1_ = 7;
      FUN_10040090(uVar5,pvVar2);
      local_74._0_1_ = 6;
      FString::~FString(local_70);
      uVar5 = FString::Printf((ushort *)local_58,L"SkillLevel_%d",iVar1);
      local_74._0_1_ = 8;
      FUN_10040090(uVar5,local_8);
      local_74._0_1_ = 6;
      FString::~FString(local_58);
      uVar5 = FString::Printf((ushort *)local_98,L"RemainTime_%d",iVar1);
      local_74._0_1_ = 9;
      FUN_10040090(uVar5,local_30);
      local_74._0_1_ = 6;
      FString::~FString(local_98);
      uVar5 = FString::Printf((ushort *)local_64,L"Name_%d",iVar1);
      local_74._0_1_ = 10;
      FUN_10040230(uVar5,local_3c);
      local_74._0_1_ = 6;
      FString::~FString(local_64);
      uVar5 = FString::Printf((ushort *)local_8c,L"IconName_%d",iVar1);
      local_74._0_1_ = 0xb;
      FUN_10040230(uVar5,local_48);
      local_74._0_1_ = 6;
      FString::~FString(local_8c);
      uVar5 = FString::Printf((ushort *)local_a4,L"Description_%d",iVar1);
      local_74._0_1_ = 0xc;
      FUN_10040230(uVar5,local_20);
      local_74._0_1_ = 6;
      FString::~FString(local_a4);
      local_74._0_1_ = 5;
      FString::~FString(local_20);
      local_74._0_1_ = 4;
      FString::~FString(local_48);
      local_74 = CONCAT31(local_74._1_3_,1);
      FString::~FString(local_3c);
      local_2c = iVar1 + 1;
    }
    puVar6 = local_14;
    uVar5 = 0x3ac;
    FUN_10005c30(0x3ac,puVar6);
    FUN_100d1790(uVar5,puVar6);
    local_74 = local_74 & 0xffffff00;
    FUN_1003fff0();
  }
  ExceptionList = local_7c;
  return;
}


// ==== 1016b83e Catch@1016b83e

void Catch_1016b83e(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + 0x4c) = *(undefined4 *)(unaff_EBP + 0x24);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + 0x4c,&DAT_102a47f0);
}


// ==== 1016b852 Catch@1016b852

void Catch_1016b852(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NConsoleWnd::OnOlympiadSpelledInfo");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1016b870 FUN_1016b870

void FUN_1016b870(L2ParamStack *param_1)

{
  void *pvVar1;
  int iVar2;
  ushort *puVar3;
  undefined4 uVar4;
  FL2MagicSkillData *pFVar5;
  code *pcVar6;
  undefined1 *puVar7;
  uint uStack_52c;
  void *local_514;
  undefined1 local_510 [12];
  FString local_504 [12];
  FString local_4f8 [12];
  undefined1 *local_4ec;
  void *local_4e8;
  undefined1 *puStack_4e4;
  int local_4e0;
  ushort local_4dc [256];
  ushort local_2dc [256];
  undefined1 local_dc [12];
  ushort local_d0 [74];
  void *local_3c;
  void *local_38;
  void *local_30;
  undefined4 local_2c;
  undefined4 local_28;
  void *local_24;
  int local_20;
  uint local_18;
  void *local_14;
  void *local_10;
  uint local_8;
  
  puStack_4e4 = &LAB_10211609;
  local_4e8 = ExceptionList;
  uStack_52c = DAT_103554c4 ^ (uint)local_4dc;
  local_4ec = (undefined1 *)&uStack_52c;
  ExceptionList = &local_4e8;
  local_4e0 = 0;
  local_514 = (void *)0xffffffff;
  local_8 = uStack_52c;
  FUN_1014ae60();
  local_4e0 = CONCAT31(local_4e0._1_3_,1);
  pvVar1 = L2ParamStack::Top(param_1);
  local_18 = (uint)(pvVar1 != (void *)0x0);
  local_3c = L2ParamStack::Top(param_1);
  local_38 = L2ParamStack::Top(param_1);
  local_30 = L2ParamStack::Top(param_1);
  if ((local_18 != 0) || (local_10 = L2ParamStack::Top(param_1), local_18 != 0)) {
    local_24 = L2ParamStack::Top(param_1);
    local_20 = (int)local_24 >> 0x1f;
    if ((local_18 != 0) && (local_14 = L2ParamStack::Top(param_1), local_18 != 0)) {
      local_514 = L2ParamStack::Top(param_1);
    }
  }
  iVar2 = FUN_10164870(local_3c,local_38);
  pcVar6 = appStrcpy_exref;
  if (iVar2 != 0) {
    puVar3 = (ushort *)FUN_10164870(local_3c,local_38);
    pcVar6 = appStrcpy_exref;
    appStrcpy(local_2dc,puVar3);
  }
  iVar2 = FUN_10164900(local_3c,local_38);
  if (iVar2 != 0) {
    uVar4 = FUN_10164900(local_3c,local_38);
    (*pcVar6)(local_4dc,uVar4);
  }
  iVar2 = FUN_10164990(local_3c,local_38);
  if (iVar2 != 0) {
    puVar7 = local_dc;
    uVar4 = FUN_10164990(local_3c,local_38);
    FUN_10146040(uVar4,puVar7);
  }
  iVar2 = FUN_10164b40(local_3c,local_38);
  if (iVar2 != 0) {
    uVar4 = FUN_10164b40(local_3c,local_38);
    (*pcVar6)(local_d0,uVar4);
  }
  iVar2 = FUN_10164c60(local_3c,local_38);
  if (iVar2 != 0) {
    local_2c = FUN_10164c60(local_3c,local_38);
  }
  iVar2 = FUN_10164cf0(local_3c,local_38);
  if (iVar2 != 0) {
    local_28 = FUN_10164cf0(local_3c,local_38);
  }
  if (local_18 == 0) {
    local_514 = local_10;
  }
  FUN_1003f970();
  local_4e0._0_1_ = 2;
  FString::FString(local_504,"Type");
  local_4e0._0_1_ = 3;
  FUN_10040090(local_504,local_514);
  local_4e0._0_1_ = 2;
  FString::~FString(local_504);
  FString::FString(local_504,"iID");
  local_4e0._0_1_ = 4;
  FUN_10040090(local_504,local_3c);
  local_4e0._0_1_ = 2;
  FString::~FString(local_504);
  FString::FString(local_504,"iLevel");
  local_4e0._0_1_ = 5;
  FUN_10040090(local_504,local_38);
  local_4e0._0_1_ = 2;
  FString::~FString(local_504);
  FString::FString(local_504,"iSPConsume");
  local_4e0._0_1_ = 6;
  FUN_10040090(local_504,local_30);
  local_4e0._0_1_ = 2;
  FString::~FString(local_504);
  FString::FString(local_504,"iEXPConsume");
  local_4e0._0_1_ = 7;
  FUN_100403f0(local_504,local_24,local_20);
  local_4e0._0_1_ = 2;
  FString::~FString(local_504);
  FString::FString(local_4f8,local_2dc);
  local_4e0._0_1_ = 8;
  FString::FString(local_504,"strIconName");
  local_4e0._0_1_ = 9;
  FUN_10040230(local_504,local_4f8);
  local_4e0._0_1_ = 8;
  FString::~FString(local_504);
  local_4e0._0_1_ = 2;
  FString::~FString(local_4f8);
  FString::FString(local_504,local_4dc);
  local_4e0._0_1_ = 10;
  FString::FString(local_4f8,"strName");
  local_4e0._0_1_ = 0xb;
  FUN_10040230(local_4f8,local_504);
  local_4e0._0_1_ = 10;
  FString::~FString(local_4f8);
  local_4e0._0_1_ = 2;
  FString::~FString(local_504);
  FString::FString(local_4f8,"strDescription");
  local_4e0._0_1_ = 0xc;
  FUN_10040230(local_4f8,local_dc);
  local_4e0._0_1_ = 2;
  FString::~FString(local_4f8);
  FString::FString(local_504,local_d0);
  local_4e0._0_1_ = 0xd;
  FString::FString(local_4f8,"strOperateType");
  local_4e0._0_1_ = 0xe;
  FUN_10040230(local_4f8,local_504);
  local_4e0._0_1_ = 0xd;
  FString::~FString(local_4f8);
  local_4e0._0_1_ = 2;
  FString::~FString(local_504);
  FString::FString(local_4f8,"iMPConsume");
  local_4e0._0_1_ = 0xf;
  FUN_10040090(local_4f8,local_2c);
  local_4e0._0_1_ = 2;
  FString::~FString(local_4f8);
  FString::FString(local_4f8,"iCastRange");
  local_4e0._0_1_ = 0x10;
  FUN_10040090(local_4f8,local_28);
  local_4e0._0_1_ = 2;
  FString::~FString(local_4f8);
  FString::FString(local_4f8,"iPercent");
  local_4e0._0_1_ = 0x11;
  FUN_10040090(local_4f8,local_14);
  local_4e0._0_1_ = 2;
  FString::~FString(local_4f8);
  if ((local_18 != 0) &&
     (pFVar5 = FL2GameData::GetMSData((FL2GameData *)GL2GameData_exref,(int)local_3c,(int)local_38),
     pFVar5 != (FL2MagicSkillData *)0x0)) {
    FString::FString(local_4f8,"strEnchantName");
    local_4e0._0_1_ = 0x12;
    FUN_10040230(local_4f8,pFVar5 + 0x50);
    local_4e0._0_1_ = 2;
    FString::~FString(local_4f8);
    FString::FString(local_4f8,"strEnchantDesc");
    local_4e0._0_1_ = 0x13;
    FUN_10040230(local_4f8,pFVar5 + 0x5c);
    local_4e0._0_1_ = 2;
    FString::~FString(local_4f8);
  }
  puVar7 = local_510;
  uVar4 = 0x7f8;
  FUN_10005c30(0x7f8,puVar7);
  FUN_100d1790(uVar4,puVar7);
  local_4e0._0_1_ = 1;
  FUN_1003fff0();
  local_4e0 = (uint)local_4e0._1_3_ << 8;
  FUN_1014af30();
  local_4e0 = 0xffffffff;
  ExceptionList = local_4e8;
  __security_check_cookie(local_8 ^ (uint)local_4dc);
  return;
}


// ==== 1016be69 Catch@1016be69

void Catch_1016be69(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x3c) = *(undefined4 *)(unaff_EBP + -0x40);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x3c,&DAT_102a47f0);
}


// ==== 1016be7d Catch@1016be7d

void Catch_1016be7d(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NConsoleWnd::ShowTrainInfoWnd");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1016bea0 FUN_1016bea0

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

void FUN_1016bea0(L2ParamStack *param_1)

{
  void *pvVar1;
  void *pvVar2;
  int iVar3;
  ushort *puVar4;
  undefined4 uVar5;
  FL2MagicSkillData *pFVar6;
  code *pcVar7;
  undefined1 *puVar8;
  uint uStack_1504;
  void *local_14ec;
  FString local_14e8 [12];
  undefined1 local_14dc [12];
  FString local_14d0 [12];
  undefined1 *local_14c4;
  void *local_14c0;
  undefined1 *puStack_14bc;
  int local_14b8;
  ushort local_14b4 [256];
  ushort local_12b4 [256];
  ushort local_10b4 [2048];
  ushort local_b4 [66];
  void *local_30;
  void *local_2c;
  void *local_24;
  void *local_20;
  int local_1c;
  void *local_18;
  void *local_14;
  uint local_10;
  uint local_8;
  
  puStack_14bc = &LAB_102116d8;
  local_14c0 = ExceptionList;
  uStack_1504 = DAT_103554c4 ^ (uint)local_14b4;
  local_14c4 = (undefined1 *)&uStack_1504;
  ExceptionList = &local_14c0;
  local_14b8 = 0;
  local_14ec = (void *)0x0;
  local_8 = uStack_1504;
  FUN_1014afc0();
  pvVar2 = L2ParamStack::Top(param_1);
  local_10 = (uint)(pvVar2 != (void *)0x0);
  local_30 = L2ParamStack::Top(param_1);
  local_2c = L2ParamStack::Top(param_1);
  if (local_10 == 0) {
    local_14ec = L2ParamStack::Top(param_1);
  }
  local_24 = L2ParamStack::Top(param_1);
  if ((local_10 != 0) || (local_14 = L2ParamStack::Top(param_1), local_10 != 0)) {
    local_20 = L2ParamStack::Top(param_1);
    local_1c = (int)local_20 >> 0x1f;
  }
  local_18 = L2ParamStack::Top(param_1);
  iVar3 = FUN_10164900(local_30,local_2c);
  pcVar7 = appStrcpy_exref;
  if (iVar3 != 0) {
    puVar4 = (ushort *)FUN_10164900(local_30,local_2c);
    pcVar7 = appStrcpy_exref;
    appStrcpy(local_14b4,puVar4);
  }
  iVar3 = FUN_10164990(local_30,local_2c);
  if (iVar3 != 0) {
    uVar5 = FUN_10164990(local_30,local_2c);
    (*pcVar7)(local_10b4,uVar5);
  }
  iVar3 = FUN_10164b40(local_30,local_2c);
  if (iVar3 != 0) {
    uVar5 = FUN_10164b40(local_30,local_2c);
    (*pcVar7)(local_b4,uVar5);
  }
  iVar3 = FUN_10164870(local_30,local_2c);
  if (iVar3 != 0) {
    uVar5 = FUN_10164870(local_30,local_2c);
    (*pcVar7)(local_12b4,uVar5);
  }
  FUN_1003f970();
  pvVar2 = local_30;
  local_14b8._0_1_ = 1;
  FString::FString(local_14d0,(ushort *)&DAT_10287890);
  local_14b8._0_1_ = 2;
  FUN_10040090(local_14d0,local_30);
  local_14b8._0_1_ = 1;
  FString::~FString(local_14d0);
  pvVar1 = local_2c;
  FString::FString(local_14d0,(ushort *)L"iLevel");
  local_14b8._0_1_ = 3;
  FUN_10040090(local_14d0,local_2c);
  local_14b8._0_1_ = 1;
  FString::~FString(local_14d0);
  if (local_10 == 0) {
LAB_1016c139:
    FString::FString(local_14d0,(ushort *)L"iMaxLevel");
    local_14b8._0_1_ = 5;
    FUN_10040090(local_14d0,local_14ec);
    local_14b8._0_1_ = 1;
    FString::~FString(local_14d0);
  }
  else {
    pFVar6 = FL2GameData::GetMSData((FL2GameData *)GL2GameData_exref,(int)pvVar2,(int)pvVar1);
    if (pFVar6 != (FL2MagicSkillData *)0x0) {
      FString::FString(local_14d0,(ushort *)L"strEnchantName");
      local_14b8._0_1_ = 4;
      FUN_10040230(local_14d0,pFVar6 + 0x50);
      local_14b8._0_1_ = 1;
      FString::~FString(local_14d0);
    }
    if (local_10 == 0) goto LAB_1016c139;
  }
  FString::FString(local_14d0,(ushort *)L"iSPConsume");
  local_14b8._0_1_ = 6;
  FUN_10040090(local_14d0,local_24);
  local_14b8._0_1_ = 1;
  FString::~FString(local_14d0);
  if (local_10 == 0) {
    FString::FString(local_14d0,(ushort *)L"bItemConsume");
    local_14b8._0_1_ = 7;
    FUN_10040090(local_14d0,local_14);
    local_14b8._0_1_ = 1;
    FString::~FString(local_14d0);
    if (local_10 == 0) goto LAB_1016c213;
  }
  FString::FString(local_14d0,(ushort *)L"iEXPConsume");
  local_14b8._0_1_ = 8;
  FUN_100403f0(local_14d0,local_20,local_1c);
  local_14b8._0_1_ = 1;
  FString::~FString(local_14d0);
LAB_1016c213:
  FString::FString(local_14d0,(ushort *)L"iType");
  local_14b8._0_1_ = 9;
  FUN_10040090(local_14d0,local_18);
  local_14b8._0_1_ = 1;
  FString::~FString(local_14d0);
  FString::FString(local_14e8,local_14b4);
  local_14b8._0_1_ = 10;
  FString::FString(local_14d0,(ushort *)L"strName");
  local_14b8._0_1_ = 0xb;
  FUN_10040230(local_14d0,local_14e8);
  local_14b8._0_1_ = 10;
  FString::~FString(local_14d0);
  local_14b8._0_1_ = 1;
  FString::~FString(local_14e8);
  FString::FString(local_14d0,local_10b4);
  local_14b8._0_1_ = 0xc;
  FString::FString(local_14e8,(ushort *)L"strDescription");
  local_14b8._0_1_ = 0xd;
  FUN_10040230(local_14e8,local_14d0);
  local_14b8._0_1_ = 0xc;
  FString::~FString(local_14e8);
  local_14b8._0_1_ = 1;
  FString::~FString(local_14d0);
  FString::FString(local_14d0,local_b4);
  local_14b8._0_1_ = 0xe;
  FString::FString(local_14e8,(ushort *)L"strOperateType");
  local_14b8._0_1_ = 0xf;
  FUN_10040230(local_14e8,local_14d0);
  local_14b8._0_1_ = 0xe;
  FString::~FString(local_14e8);
  local_14b8._0_1_ = 1;
  FString::~FString(local_14d0);
  FString::FString(local_14d0,local_12b4);
  local_14b8._0_1_ = 0x10;
  FString::FString(local_14e8,(ushort *)L"strIconName");
  local_14b8._0_1_ = 0x11;
  FUN_10040230(local_14e8,local_14d0);
  local_14b8._0_1_ = 0x10;
  FString::~FString(local_14e8);
  local_14b8._0_1_ = 1;
  FString::~FString(local_14d0);
  puVar8 = local_14dc;
  uVar5 = 0x7ee;
  FUN_10005c30(0x7ee,puVar8);
  FUN_100d1790(uVar5,puVar8);
  local_14b8 = (uint)local_14b8._1_3_ << 8;
  FUN_1003fff0();
  local_14b8 = 0xffffffff;
  ExceptionList = local_14c0;
  __security_check_cookie(local_8 ^ (uint)local_14b4);
  return;
}


// ==== 1016c3cc Catch@1016c3cc

void Catch_1016c3cc(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x3c) = *(undefined4 *)(unaff_EBP + -0x40);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x3c,&DAT_102a47f0);
}


// ==== 1016c3e0 Catch@1016c3e0

void Catch_1016c3e0(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NConsoleWnd::AddAcquireSkillInfo");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1016c400 FUN_1016c400

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

void FUN_1016c400(L2ParamStack *param_1)

{
  void *pvVar1;
  void *pvVar2;
  void *pvVar3;
  undefined4 uVar4;
  undefined1 *puVar5;
  uint uStack_1d44;
  FString local_1d28 [12];
  void *local_1d1c;
  undefined1 local_1d18 [16];
  FString local_1d08 [12];
  undefined1 *local_1cfc;
  void *local_1cf8;
  undefined1 *puStack_1cf4;
  int local_1cf0;
  ushort local_1cec [512];
  ushort local_18ec [3094];
  undefined4 local_c0;
  uint local_8;
  
  puStack_1cf4 = &LAB_10211735;
  local_1cf8 = ExceptionList;
  uStack_1d44 = DAT_103554c4 ^ (uint)local_1cec;
  local_1cfc = (undefined1 *)&uStack_1d44;
  ExceptionList = &local_1cf8;
  local_1cf0 = 0;
  local_8 = uStack_1d44;
  pvVar1 = L2ParamStack::Top(param_1);
  local_1d1c = L2ParamStack::Top(param_1);
  pvVar2 = L2ParamStack::Top(param_1);
  pvVar3 = L2ParamStack::Top(param_1);
  FUN_10157350(local_1cec,pvVar1,local_1d1c,pvVar2,pvVar3);
  FUN_1003f970();
  local_1cf0._0_1_ = 1;
  FString::FString(local_1d08,local_18ec);
  local_1cf0._0_1_ = 2;
  FString::FString(local_1d28,"strIconName");
  local_1cf0._0_1_ = 3;
  FUN_10040230(local_1d28,local_1d08);
  local_1cf0._0_1_ = 2;
  FString::~FString(local_1d28);
  local_1cf0._0_1_ = 1;
  FString::~FString(local_1d08);
  FString::FString(local_1d28,local_1cec);
  local_1cf0._0_1_ = 4;
  FString::FString(local_1d08,"strName");
  local_1cf0._0_1_ = 5;
  FUN_10040230(local_1d08,local_1d28);
  local_1cf0._0_1_ = 4;
  FString::~FString(local_1d08);
  local_1cf0._0_1_ = 1;
  FString::~FString(local_1d28);
  FString::FString(local_1d08,"iNumOfItem");
  local_1cf0._0_1_ = 6;
  FUN_10040090(local_1d08,local_c0);
  local_1cf0._0_1_ = 1;
  FString::~FString(local_1d08);
  puVar5 = local_1d18;
  uVar4 = 0x80c;
  FUN_10005c30(0x80c,puVar5);
  FUN_100d1790(uVar4,puVar5);
  local_1cf0 = (uint)local_1cf0._1_3_ << 8;
  FUN_1003fff0();
  local_1cf0 = 0xffffffff;
  ExceptionList = local_1cf8;
  __security_check_cookie(local_8 ^ (uint)local_1cec);
  return;
}


// ==== 1016c5ac Catch@1016c5ac

void Catch_1016c5ac(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x20) = *(undefined4 *)(unaff_EBP + -0x48);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x20,&DAT_102a47f0);
}


// ==== 1016c5c0 Catch@1016c5c0

void Catch_1016c5c0(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NConsoleWnd::AddAcquireSkillExtendedInfo");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1016c5e0 FUN_1016c5e0

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

void FUN_1016c5e0(L2ParamStack *param_1)

{
  void *pvVar1;
  int iVar2;
  ushort *puVar3;
  undefined4 uVar4;
  FL2MagicSkillData *pFVar5;
  ushort *puVar6;
  int in_ECX;
  code *pcVar7;
  undefined1 *puVar8;
  uint uStack_2538;
  undefined1 local_2520 [12];
  FString local_2514 [12];
  FString local_2508 [12];
  undefined1 *local_24fc;
  void *local_24f8;
  undefined1 *puStack_24f4;
  int local_24f0;
  ushort local_24ec [256];
  ushort local_22ec [256];
  ushort local_20ec [768];
  ushort local_1aec [2318];
  void *local_8d0;
  void *local_8c4;
  void *local_8b8;
  uint local_820;
  ushort local_808 [1024];
  uint local_8;
  
  puStack_24f4 = &LAB_102117e6;
  local_24f8 = ExceptionList;
  uStack_2538 = DAT_103554c4 ^ (uint)local_24ec;
  local_24fc = (undefined1 *)&uStack_2538;
  ExceptionList = &local_24f8;
  local_24f0 = 0;
  local_8 = uStack_2538;
  FUN_1002be90();
  local_8d0 = L2ParamStack::Top(param_1);
  local_8b8 = L2ParamStack::Top(param_1);
  local_8c4 = L2ParamStack::Top(param_1);
  pvVar1 = L2ParamStack::Top(param_1);
  local_820 = (uint)(pvVar1 != (void *)0x0);
  if (0 < (int)local_8b8) {
    iVar2 = FUN_10164870(local_8c4,local_8b8);
    pcVar7 = appStrcpy_exref;
    if (iVar2 != 0) {
      puVar3 = (ushort *)FUN_10164870(local_8c4,local_8b8);
      pcVar7 = appStrcpy_exref;
      appStrcpy(local_20ec,puVar3);
    }
    iVar2 = FUN_10164900(local_8c4,local_8b8);
    if (iVar2 != 0) {
      uVar4 = FUN_10164900(local_8c4,local_8b8);
      (*pcVar7)(local_24ec,uVar4);
    }
    iVar2 = FUN_10164990(local_8c4,local_8b8);
    if (iVar2 != 0) {
      uVar4 = FUN_10164990(local_8c4,local_8b8);
      (*pcVar7)(local_1aec,uVar4);
    }
    pFVar5 = FL2GameData::GetMSData((FL2GameData *)GL2GameData_exref,(int)local_8c4,(int)local_8b8);
    if ((pFVar5 != (FL2MagicSkillData *)0x0) && (*(int *)(pFVar5 + 0x68) != 0)) {
      puVar3 = FString::operator*((FString *)(pFVar5 + 0x50));
      (*pcVar7)(local_22ec,puVar3);
    }
    FUN_1003f970();
    local_24f0._0_1_ = 1;
    FString::FString(local_2508,(ushort *)L"Type");
    local_24f0._0_1_ = 2;
    FUN_10040090(local_2508,local_8d0);
    local_24f0._0_1_ = 1;
    FString::~FString(local_2508);
    FString::FString(local_2508,(ushort *)L"ClassID");
    local_24f0._0_1_ = 3;
    FUN_10040090(local_2508,local_8c4);
    local_24f0._0_1_ = 1;
    FString::~FString(local_2508);
    FString::FString(local_2508,(ushort *)L"Level");
    local_24f0._0_1_ = 4;
    FUN_10040090(local_2508,local_8b8);
    local_24f0._0_1_ = 1;
    FString::~FString(local_2508);
    FString::FString(local_2514,local_24ec);
    local_24f0._0_1_ = 5;
    FString::FString(local_2508,(ushort *)L"Name");
    local_24f0._0_1_ = 6;
    FUN_10040230(local_2508,local_2514);
    local_24f0._0_1_ = 5;
    FString::~FString(local_2508);
    local_24f0._0_1_ = 1;
    FString::~FString(local_2514);
    FString::FString(local_2508,local_20ec);
    local_24f0._0_1_ = 7;
    FString::FString(local_2514,(ushort *)L"IconName");
    local_24f0._0_1_ = 8;
    FUN_10040230(local_2514,local_2508);
    local_24f0._0_1_ = 7;
    FString::~FString(local_2514);
    local_24f0._0_1_ = 1;
    FString::~FString(local_2508);
    FString::FString(local_2508,local_1aec);
    local_24f0._0_1_ = 9;
    FString::FString(local_2514,(ushort *)L"Description");
    local_24f0._0_1_ = 10;
    FUN_10040230(local_2514,local_2508);
    local_24f0._0_1_ = 9;
    FString::~FString(local_2514);
    local_24f0._0_1_ = 1;
    FString::~FString(local_2508);
    FString::FString(local_2508,local_22ec);
    local_24f0._0_1_ = 0xb;
    FString::FString(local_2514,(ushort *)L"EnchantName");
    local_24f0._0_1_ = 0xc;
    FUN_10040230(local_2514,local_2508);
    local_24f0._0_1_ = 0xb;
    FString::~FString(local_2514);
    local_24f0._0_1_ = 1;
    FString::~FString(local_2508);
    FString::FString(local_2514,(ushort *)L"Lock");
    local_24f0._0_1_ = 0xd;
    FUN_10040090(local_2514,local_820);
    local_24f0._0_1_ = 1;
    FString::~FString(local_2514);
    if (local_8d0 == (void *)0x0) {
      puVar3 = local_24ec;
      puVar6 = FString::operator*((FString *)(GL2GameData_exref + 0x736a8));
      appSprintf(local_808,(ushort *)L"%s%s %s",PTR_DAT_10350f88,puVar6,puVar3);
      FString::FString(local_2508,local_808);
      local_24f0._0_1_ = 0xe;
      FString::FString(local_2514,(ushort *)L"Command");
      local_24f0._0_1_ = 0xf;
      FUN_10040230(local_2514,local_2508);
      local_24f0._0_1_ = 0xe;
      FString::~FString(local_2514);
      local_24f0._0_1_ = 1;
      FString::~FString(local_2508);
    }
    puVar8 = local_2520;
    uVar4 = 0x50a;
    FUN_10005c30(0x50a,puVar8);
    FUN_100d1790(uVar4,puVar8);
    if (*(int *)(in_ECX + 0x5064) != 0) {
      FUN_10045650(local_24ec);
    }
    local_24f0 = (uint)local_24f0._1_3_ << 8;
    FUN_1003fff0();
    local_24f0 = 0xffffffff;
  }
  ExceptionList = local_24f8;
  __security_check_cookie(local_8 ^ (uint)local_24ec);
  return;
}


// ==== 1016ca64 Catch@1016ca64

void Catch_1016ca64(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x38) = *(undefined4 *)(unaff_EBP + -0x3c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x38,&DAT_102a47f0);
}


// ==== 1016ca78 Catch@1016ca78

void Catch_1016ca78(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NConsoleWnd::SkillListPacket");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1016caa0 FUN_1016caa0

void FUN_1016caa0(L2ParamStack *param_1)

{
  uint uVar1;
  FString *this;
  int iVar2;
  void *pvVar3;
  UPackage *pUVar4;
  UObject *pUVar5;
  int iVar6;
  ushort *puVar7;
  undefined4 uVar8;
  int iVar9;
  undefined1 local_8c [12];
  void *local_80;
  undefined4 local_7c;
  FString local_78 [12];
  FString local_6c [12];
  FString local_60 [12];
  FString local_54 [12];
  FString local_48 [12];
  FString local_3c [12];
  FString local_30 [12];
  FString local_24 [12];
  FString local_18 [12];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1021187e;
  local_c = ExceptionList;
  uVar1 = DAT_103554c4 ^ (uint)&stack0xffffff60;
  ExceptionList = &local_c;
  this = (FString *)FUN_1014ad10(local_6c);
  iVar9 = 0;
  local_4 = 0;
  iVar2 = FString::operator==(this,(ushort *)L"OlympiadObserverState");
  local_4 = 0xffffffff;
  FString::~FString(local_6c);
  if (iVar2 == 0) {
    if (*(int *)(DAT_103663bc + 0x5110) != 0) {
      FUN_101aead0(uVar1);
    }
    L2ParamStack::Restart(param_1);
    FUN_1003f970();
    local_4 = 1;
    pvVar3 = L2ParamStack::Top(param_1);
    local_80 = pvVar3;
    FString::FString(local_78,(ushort *)&DAT_10274940);
    local_4._0_1_ = 2;
    FUN_10040090(local_78,pvVar3);
    local_4 = CONCAT31(local_4._1_3_,1);
    FString::~FString(local_78);
    if (0 < (int)pvVar3) {
      do {
        FName::FName((FName *)&local_7c,0);
        pUVar4 = UObject::GetTransientPackage();
        pUVar5 = UObject::StaticAllocateObject
                           (&DAT_1036a220,pUVar4,local_7c,0,0,*(undefined4 *)GError_exref,0,0);
        if (pUVar5 == (UObject *)0x0) {
          iVar2 = 0;
        }
        else {
          iVar2 = FUN_1004d7a0();
        }
        pvVar3 = L2ParamStack::Top(param_1);
        *(void **)(iVar2 + 0x1e5c) = pvVar3;
        pvVar3 = L2ParamStack::Top(param_1);
        *(void **)(iVar2 + 0x1e60) = pvVar3;
        pvVar3 = L2ParamStack::Top(param_1);
        *(void **)(iVar2 + 0x1f64) = pvVar3;
        iVar6 = FUN_10164870(*(undefined4 *)(iVar2 + 0x1e5c),*(undefined4 *)(iVar2 + 0x1e60));
        if (iVar6 != 0) {
          puVar7 = (ushort *)
                   FUN_10164870(*(undefined4 *)(iVar2 + 0x1e5c),*(undefined4 *)(iVar2 + 0x1e60));
          appStrcpy((ushort *)(iVar2 + 0x44c),puVar7);
        }
        iVar6 = FUN_10164900(*(undefined4 *)(iVar2 + 0x1e5c),*(undefined4 *)(iVar2 + 0x1e60));
        if (iVar6 != 0) {
          puVar7 = (ushort *)
                   FUN_10164900(*(undefined4 *)(iVar2 + 0x1e5c),*(undefined4 *)(iVar2 + 0x1e60));
          appStrcpy((ushort *)(iVar2 + 0x4c),puVar7);
        }
        iVar6 = FUN_10164990(*(undefined4 *)(iVar2 + 0x1e5c),*(undefined4 *)(iVar2 + 0x1e60));
        if (iVar6 != 0) {
          puVar7 = (ushort *)
                   FUN_10164990(*(undefined4 *)(iVar2 + 0x1e5c),*(undefined4 *)(iVar2 + 0x1e60));
          appStrcpy((ushort *)(iVar2 + 0xa4c),puVar7);
        }
        uVar8 = FString::Printf((ushort *)local_24,L"SkillID_%d",iVar9);
        local_4._0_1_ = 3;
        FUN_10040090(uVar8,*(undefined4 *)(iVar2 + 0x1e5c));
        local_4._0_1_ = 1;
        FString::~FString(local_24);
        uVar8 = FString::Printf((ushort *)local_3c,L"SkillLevel_%d",iVar9);
        local_4._0_1_ = 4;
        FUN_10040090(uVar8,*(undefined4 *)(iVar2 + 0x1e60));
        local_4._0_1_ = 1;
        FString::~FString(local_3c);
        uVar8 = FString::Printf((ushort *)local_54,L"RemainTime_%d",iVar9);
        local_4._0_1_ = 5;
        FUN_10040090(uVar8,*(undefined4 *)(iVar2 + 0x1f64));
        local_4._0_1_ = 1;
        FString::~FString(local_54);
        FString::FString(local_78,(ushort *)(iVar2 + 0x4c));
        local_4._0_1_ = 6;
        uVar8 = FString::Printf((ushort *)local_48,L"Name_%d",iVar9);
        local_4._0_1_ = 7;
        FUN_10040230(uVar8,local_78);
        local_4._0_1_ = 6;
        FString::~FString(local_48);
        local_4._0_1_ = 1;
        FString::~FString(local_78);
        FString::FString(local_60,(ushort *)(iVar2 + 0x44c));
        local_4._0_1_ = 8;
        uVar8 = FString::Printf((ushort *)local_30,L"IconName_%d",iVar9);
        local_4._0_1_ = 9;
        FUN_10040230(uVar8,local_60);
        local_4._0_1_ = 8;
        FString::~FString(local_30);
        local_4._0_1_ = 1;
        FString::~FString(local_60);
        FString::FString(local_6c,(ushort *)(iVar2 + 0xa4c));
        local_4._0_1_ = 10;
        uVar8 = FString::Printf((ushort *)local_18,L"Description_%d",iVar9);
        local_4._0_1_ = 0xb;
        FUN_10040230(uVar8,local_6c);
        local_4._0_1_ = 10;
        FString::~FString(local_18);
        local_4 = CONCAT31(local_4._1_3_,1);
        FString::~FString(local_6c);
        if (*(int *)(DAT_103663bc + 0x5110) != 0) {
          FUN_101aea40(iVar2);
        }
        iVar9 = iVar9 + 1;
      } while (iVar9 < (int)local_80);
    }
    if (DAT_1035786c == 0) {
      FUN_10005270();
    }
    FUN_100d1790(0x3b6,local_8c);
    local_4 = 0xffffffff;
    FUN_1003fff0();
  }
  ExceptionList = local_c;
  return;
}


// ==== 1016cf50 FUN_1016cf50

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

void FUN_1016cf50(L2ParamStack *param_1)

{
  uint uVar1;
  void *pvVar2;
  int iVar3;
  ushort *puVar4;
  undefined4 uVar5;
  int iVar6;
  void *local_1398 [2];
  undefined1 local_1390 [12];
  L2ParamStack *local_1384;
  void *local_1380;
  FString local_137c [12];
  FString local_1370 [12];
  FString local_1364 [12];
  FString local_1358 [12];
  FString local_134c [12];
  FString local_1340 [12];
  FString local_1334 [12];
  FString local_1328 [12];
  FString local_131c [12];
  ushort local_1310 [128];
  ushort local_1210 [256];
  ushort local_1010 [2048];
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10211923;
  local_c = ExceptionList;
  local_10 = DAT_103554c4 ^ (uint)local_1398;
  uVar1 = DAT_103554c4 ^ (uint)&stack0xffffec58;
  ExceptionList = &local_c;
  local_1384 = param_1;
  L2ParamStack::Restart(param_1);
  FUN_1003f970(uVar1);
  local_4 = 0;
  pvVar2 = L2ParamStack::Top(param_1);
  local_1380 = pvVar2;
  FString::FString(local_137c,(ushort *)&DAT_10274940);
  local_4._0_1_ = 1;
  FUN_10040090(local_137c,pvVar2);
  local_4 = (uint)local_4._1_3_ << 8;
  FString::~FString(local_137c);
  iVar6 = 0;
  if (0 < (int)pvVar2) {
    do {
      pvVar2 = L2ParamStack::Top(param_1);
      local_1398[0] = L2ParamStack::Top(local_1384);
      iVar3 = FUN_10164870(pvVar2,local_1398[0]);
      if (iVar3 != 0) {
        puVar4 = (ushort *)FUN_10164870(pvVar2,local_1398[0]);
        appStrcpy(local_1310,puVar4);
      }
      iVar3 = FUN_10164900(pvVar2,local_1398[0]);
      if (iVar3 != 0) {
        puVar4 = (ushort *)FUN_10164900(pvVar2,local_1398[0]);
        appStrcpy(local_1210,puVar4);
      }
      iVar3 = FUN_10164990(pvVar2,local_1398[0]);
      if (iVar3 != 0) {
        puVar4 = (ushort *)FUN_10164990(pvVar2,local_1398[0]);
        appStrcpy(local_1010,puVar4);
      }
      uVar5 = FString::Printf((ushort *)local_1358,L"SkillID_%d",iVar6);
      local_4._0_1_ = 2;
      FUN_10040090(uVar5,pvVar2);
      local_4._0_1_ = 0;
      FString::~FString(local_1358);
      uVar5 = FString::Printf((ushort *)local_1328,L"SkillLevel_%d",iVar6);
      local_4._0_1_ = 3;
      FUN_10040090(uVar5,local_1398[0]);
      local_4._0_1_ = 0;
      FString::~FString(local_1328);
      uVar5 = FString::Printf((ushort *)local_1334,L"RemainTime_%d",iVar6);
      local_4._0_1_ = 4;
      FUN_10040090(uVar5,0xffffffff);
      local_4._0_1_ = 0;
      FString::~FString(local_1334);
      FString::FString(local_137c,local_1210);
      local_4._0_1_ = 5;
      uVar5 = FString::Printf((ushort *)local_131c,L"Name_%d",iVar6);
      local_4._0_1_ = 6;
      FUN_10040230(uVar5,local_137c);
      local_4._0_1_ = 5;
      FString::~FString(local_131c);
      local_4._0_1_ = 0;
      FString::~FString(local_137c);
      FString::FString(local_1370,local_1310);
      local_4._0_1_ = 7;
      uVar5 = FString::Printf((ushort *)local_134c,L"IconName_%d",iVar6);
      local_4._0_1_ = 8;
      FUN_10040230(uVar5,local_1370);
      local_4._0_1_ = 7;
      FString::~FString(local_134c);
      local_4._0_1_ = 0;
      FString::~FString(local_1370);
      FString::FString(local_1364,local_1010);
      local_4._0_1_ = 9;
      uVar5 = FString::Printf((ushort *)local_1340,L"Description_%d",iVar6);
      local_4._0_1_ = 10;
      FUN_10040230(uVar5,local_1364);
      local_4._0_1_ = 9;
      FString::~FString(local_1340);
      local_4 = (uint)local_4._1_3_ << 8;
      FString::~FString(local_1364);
      iVar6 = iVar6 + 1;
      param_1 = local_1384;
    } while (iVar6 < (int)local_1380);
  }
  if (DAT_1035786c == 0) {
    FUN_10005270();
  }
  FUN_100d1790(0x3c0,local_1390);
  local_4 = 0xffffffff;
  FUN_1003fff0();
  ExceptionList = local_c;
  __security_check_cookie(local_10 ^ (uint)local_1398);
  return;
}


// ==== 1016d310 FUN_1016d310

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

void FUN_1016d310(L2ParamStack *param_1)

{
  uint uVar1;
  void *pvVar2;
  int iVar3;
  ushort *puVar4;
  undefined4 uVar5;
  int iVar6;
  void *local_139c [2];
  L2ParamStack *local_1394;
  undefined1 local_1390 [12];
  void *local_1384;
  void *local_1380;
  FString local_137c [12];
  FString local_1370 [12];
  FString local_1364 [12];
  FString local_1358 [12];
  FString local_134c [12];
  FString local_1340 [12];
  FString local_1334 [12];
  FString local_1328 [12];
  FString local_131c [12];
  ushort local_1310 [128];
  ushort local_1210 [256];
  ushort local_1010 [2048];
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_102119e3;
  local_c = ExceptionList;
  local_10 = DAT_103554c4 ^ (uint)local_139c;
  uVar1 = DAT_103554c4 ^ (uint)&stack0xffffec54;
  ExceptionList = &local_c;
  local_1394 = param_1;
  L2ParamStack::Restart(param_1);
  FUN_1003f970(uVar1);
  local_4 = 0;
  pvVar2 = L2ParamStack::Top(param_1);
  local_1380 = pvVar2;
  FString::FString(local_137c,(ushort *)&DAT_10274940);
  local_4._0_1_ = 1;
  FUN_10040090(local_137c,pvVar2);
  local_4 = (uint)local_4._1_3_ << 8;
  FString::~FString(local_137c);
  iVar6 = 0;
  if (0 < (int)pvVar2) {
    do {
      pvVar2 = L2ParamStack::Top(param_1);
      local_139c[0] = L2ParamStack::Top(local_1394);
      local_1384 = L2ParamStack::Top(local_1394);
      iVar3 = FUN_10164870(pvVar2,local_139c[0]);
      if (iVar3 != 0) {
        puVar4 = (ushort *)FUN_10164870(pvVar2,local_139c[0]);
        appStrcpy(local_1310,puVar4);
      }
      iVar3 = FUN_10164900(pvVar2,local_139c[0]);
      if (iVar3 != 0) {
        puVar4 = (ushort *)FUN_10164900(pvVar2,local_139c[0]);
        appStrcpy(local_1210,puVar4);
      }
      iVar3 = FUN_10164990(pvVar2,local_139c[0]);
      if (iVar3 != 0) {
        puVar4 = (ushort *)FUN_10164990(pvVar2,local_139c[0]);
        appStrcpy(local_1010,puVar4);
      }
      uVar5 = FString::Printf((ushort *)local_131c,L"SkillID_%d",iVar6);
      local_4._0_1_ = 2;
      FUN_10040090(uVar5,pvVar2);
      local_4._0_1_ = 0;
      FString::~FString(local_131c);
      uVar5 = FString::Printf((ushort *)local_1328,L"SkillLevel_%d",iVar6);
      local_4._0_1_ = 3;
      FUN_10040090(uVar5,local_139c[0]);
      local_4._0_1_ = 0;
      FString::~FString(local_1328);
      uVar5 = FString::Printf((ushort *)local_1334,L"RemainTime_%d",iVar6);
      local_4._0_1_ = 4;
      FUN_10040090(uVar5,local_1384);
      local_4._0_1_ = 0;
      FString::~FString(local_1334);
      FString::FString(local_137c,local_1210);
      local_4._0_1_ = 5;
      uVar5 = FString::Printf((ushort *)local_1358,L"Name_%d",iVar6);
      local_4._0_1_ = 6;
      FUN_10040230(uVar5,local_137c);
      local_4._0_1_ = 5;
      FString::~FString(local_1358);
      local_4._0_1_ = 0;
      FString::~FString(local_137c);
      FString::FString(local_1364,local_1310);
      local_4._0_1_ = 7;
      uVar5 = FString::Printf((ushort *)local_134c,L"IconName_%d",iVar6);
      local_4._0_1_ = 8;
      FUN_10040230(uVar5,local_1364);
      local_4._0_1_ = 7;
      FString::~FString(local_134c);
      local_4._0_1_ = 0;
      FString::~FString(local_1364);
      FString::FString(local_1370,local_1010);
      local_4._0_1_ = 9;
      uVar5 = FString::Printf((ushort *)local_1340,L"Description_%d",iVar6);
      local_4._0_1_ = 10;
      FUN_10040230(uVar5,local_1370);
      local_4._0_1_ = 9;
      FString::~FString(local_1340);
      local_4 = (uint)local_4._1_3_ << 8;
      FString::~FString(local_1370);
      iVar6 = iVar6 + 1;
      param_1 = local_1394;
    } while (iVar6 < (int)local_1380);
  }
  if (DAT_1035786c == 0) {
    FUN_10005270();
  }
  FUN_100d1790(0x3ca,local_1390);
  local_4 = 0xffffffff;
  FUN_1003fff0();
  ExceptionList = local_c;
  __security_check_cookie(local_10 ^ (uint)local_139c);
  return;
}


// ==== 1016d6f0 FUN_1016d6f0

void FUN_1016d6f0(L2ParamStack *param_1)

{
  int iVar1;
  void *pvVar2;
  void *pvVar3;
  undefined4 uVar4;
  int in_ECX;
  int *piVar5;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10211a20;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  pvVar2 = L2ParamStack::Top(param_1);
  pvVar3 = L2ParamStack::Top(param_1);
  FUN_1014ed50(5);
  if (pvVar3 == (void *)0x0) {
    (**(code **)(**(int **)(*(int *)(in_ECX + 0x50ac) + 0x20c) + 0x164))(0x1bc);
    FUN_10088e40(pvVar2);
    (**(code **)(**(int **)(*(int *)(in_ECX + 0x50ac) + 0x20c) + 0x138))();
    piVar5 = *(int **)(*(int *)(in_ECX + 0x50ac) + 0x20c);
  }
  else {
    if ((int)pvVar3 < 1) {
      ExceptionList = local_10;
      return;
    }
    iVar1 = **(int **)(*(int *)(in_ECX + 0x50ac) + 0x210);
    uVar4 = FUN_101647b0(pvVar3);
    (**(code **)(iVar1 + 0x168))(uVar4);
    FUN_10088e40(pvVar2);
    (**(code **)(**(int **)(*(int *)(in_ECX + 0x50ac) + 0x210) + 0x138))();
    piVar5 = *(int **)(*(int *)(in_ECX + 0x50ac) + 0x210);
  }
  (**(code **)(*piVar5 + 0x78))();
  ExceptionList = local_10;
  return;
}


// ==== 1016d826 Catch@1016d826

void Catch_1016d826(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1016d83a Catch@1016d83a

void Catch_1016d83a(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NConsoleWnd::ReceiveHtmlMessage");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1016d860 FUN_1016d860

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

void FUN_1016d860(L2ParamStack *param_1)

{
  void *pvVar1;
  int iVar2;
  ushort *puVar3;
  undefined4 uVar4;
  FL2MagicSkillData *pFVar5;
  ushort *puVar6;
  code *pcVar7;
  undefined1 *puVar8;
  uint uStack_2538;
  undefined1 local_2520 [12];
  FString local_2514 [12];
  FString local_2508 [12];
  undefined1 *local_24fc;
  void *local_24f8;
  undefined1 *puStack_24f4;
  int local_24f0;
  ushort local_24ec [256];
  ushort local_22ec [256];
  ushort local_20ec [768];
  ushort local_1aec [2318];
  void *local_8d0;
  void *local_8c4;
  void *local_8b8;
  uint local_820;
  ushort local_808 [1024];
  uint local_8;
  
  puStack_24f4 = &LAB_10211ac6;
  local_24f8 = ExceptionList;
  uStack_2538 = DAT_103554c4 ^ (uint)local_24ec;
  local_24fc = (undefined1 *)&uStack_2538;
  ExceptionList = &local_24f8;
  local_24f0 = 0;
  local_8 = uStack_2538;
  FUN_1002be90();
  local_8d0 = L2ParamStack::Top(param_1);
  local_8b8 = L2ParamStack::Top(param_1);
  local_8c4 = L2ParamStack::Top(param_1);
  pvVar1 = L2ParamStack::Top(param_1);
  local_820 = (uint)(pvVar1 != (void *)0x0);
  if (0 < (int)local_8b8) {
    iVar2 = FUN_10164870(local_8c4,local_8b8);
    pcVar7 = appStrcpy_exref;
    if (iVar2 != 0) {
      puVar3 = (ushort *)FUN_10164870(local_8c4,local_8b8);
      pcVar7 = appStrcpy_exref;
      appStrcpy(local_20ec,puVar3);
    }
    iVar2 = FUN_10164900(local_8c4,local_8b8);
    if (iVar2 != 0) {
      uVar4 = FUN_10164900(local_8c4,local_8b8);
      (*pcVar7)(local_24ec,uVar4);
    }
    iVar2 = FUN_10164990(local_8c4,local_8b8);
    if (iVar2 != 0) {
      uVar4 = FUN_10164990(local_8c4,local_8b8);
      (*pcVar7)(local_1aec,uVar4);
    }
    pFVar5 = FL2GameData::GetMSData((FL2GameData *)GL2GameData_exref,(int)local_8c4,(int)local_8b8);
    if ((pFVar5 != (FL2MagicSkillData *)0x0) && (*(int *)(pFVar5 + 0x68) != 0)) {
      puVar3 = FString::operator*((FString *)(pFVar5 + 0x50));
      (*pcVar7)(local_22ec,puVar3);
    }
    FUN_1003f970();
    local_24f0._0_1_ = 1;
    FString::FString(local_2508,(ushort *)L"Type");
    local_24f0._0_1_ = 2;
    FUN_10040090(local_2508,local_8d0);
    local_24f0._0_1_ = 1;
    FString::~FString(local_2508);
    FString::FString(local_2508,(ushort *)L"ClassID");
    local_24f0._0_1_ = 3;
    FUN_10040090(local_2508,local_8c4);
    local_24f0._0_1_ = 1;
    FString::~FString(local_2508);
    FString::FString(local_2508,(ushort *)L"Level");
    local_24f0._0_1_ = 4;
    FUN_10040090(local_2508,local_8b8);
    local_24f0._0_1_ = 1;
    FString::~FString(local_2508);
    FString::FString(local_2514,local_24ec);
    local_24f0._0_1_ = 5;
    FString::FString(local_2508,(ushort *)L"Name");
    local_24f0._0_1_ = 6;
    FUN_10040230(local_2508,local_2514);
    local_24f0._0_1_ = 5;
    FString::~FString(local_2508);
    local_24f0._0_1_ = 1;
    FString::~FString(local_2514);
    FString::FString(local_2508,local_20ec);
    local_24f0._0_1_ = 7;
    FString::FString(local_2514,(ushort *)L"IconName");
    local_24f0._0_1_ = 8;
    FUN_10040230(local_2514,local_2508);
    local_24f0._0_1_ = 7;
    FString::~FString(local_2514);
    local_24f0._0_1_ = 1;
    FString::~FString(local_2508);
    FString::FString(local_2508,local_1aec);
    local_24f0._0_1_ = 9;
    FString::FString(local_2514,(ushort *)L"Description");
    local_24f0._0_1_ = 10;
    FUN_10040230(local_2514,local_2508);
    local_24f0._0_1_ = 9;
    FString::~FString(local_2514);
    local_24f0._0_1_ = 1;
    FString::~FString(local_2508);
    FString::FString(local_2508,local_22ec);
    local_24f0._0_1_ = 0xb;
    FString::FString(local_2514,(ushort *)L"EnchantName");
    local_24f0._0_1_ = 0xc;
    FUN_10040230(local_2514,local_2508);
    local_24f0._0_1_ = 0xb;
    FString::~FString(local_2514);
    local_24f0._0_1_ = 1;
    FString::~FString(local_2508);
    FString::FString(local_2514,(ushort *)L"Lock");
    local_24f0._0_1_ = 0xd;
    FUN_10040090(local_2514,local_820);
    local_24f0._0_1_ = 1;
    FString::~FString(local_2514);
    if (local_8d0 == (void *)0x0) {
      puVar3 = local_24ec;
      puVar6 = FString::operator*((FString *)(GL2GameData_exref + 0x736a8));
      appSprintf(local_808,(ushort *)L"%s%s %s",PTR_DAT_10350f88,puVar6,puVar3);
      FString::FString(local_2508,local_808);
      local_24f0._0_1_ = 0xe;
      FString::FString(local_2514,(ushort *)L"Command");
      local_24f0._0_1_ = 0xf;
      FUN_10040230(local_2514,local_2508);
      local_24f0._0_1_ = 0xe;
      FString::~FString(local_2514);
      local_24f0._0_1_ = 1;
      FString::~FString(local_2508);
    }
    puVar8 = local_2520;
    uVar4 = 0x906;
    FUN_10005c30(0x906,puVar8);
    FUN_100d1790(uVar4,puVar8);
    local_24f0 = (uint)local_24f0._1_3_ << 8;
    FUN_1003fff0();
    local_24f0 = 0xffffffff;
  }
  ExceptionList = local_24f8;
  __security_check_cookie(local_8 ^ (uint)local_24ec);
  return;
}


// ==== 1016dcd1 Catch@1016dcd1

void Catch_1016dcd1(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x38) = *(undefined4 *)(unaff_EBP + -0x3c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x38,&DAT_102a47f0);
}


// ==== 1016dce5 Catch@1016dce5

void Catch_1016dce5(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NConsoleWnd::GMViewSkillListPacket");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1016dd10 FUN_1016dd10

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

void FUN_1016dd10(L2ParamStack *param_1)

{
  int iVar1;
  ushort *puVar2;
  undefined4 uVar3;
  code *pcVar4;
  uint uStack_1d14;
  undefined1 local_1cfc [1024];
  ushort local_18fc [768];
  undefined1 local_12fc [4648];
  void *local_d4;
  void *local_c8;
  uint local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10211af0;
  local_10 = ExceptionList;
  uStack_1d14 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_1d14;
  ExceptionList = &local_10;
  local_8 = 0;
  local_18 = uStack_1d14;
  FUN_1002be90();
  local_c8 = L2ParamStack::Top(param_1);
  local_d4 = L2ParamStack::Top(param_1);
  if (0 < (int)local_c8) {
    iVar1 = FUN_10164870(local_d4,local_c8);
    pcVar4 = appStrcpy_exref;
    if (iVar1 != 0) {
      puVar2 = (ushort *)FUN_10164870(local_d4,local_c8);
      pcVar4 = appStrcpy_exref;
      appStrcpy(local_18fc,puVar2);
    }
    iVar1 = FUN_10164900(local_d4,local_c8);
    if (iVar1 != 0) {
      uVar3 = FUN_10164900(local_d4,local_c8);
      (*pcVar4)(local_1cfc,uVar3);
    }
    iVar1 = FUN_10164990(local_d4,local_c8);
    if (iVar1 != 0) {
      uVar3 = FUN_10164990(local_d4,local_c8);
      (*pcVar4)(local_12fc,uVar3);
    }
    local_8 = 0xffffffff;
  }
  ExceptionList = local_10;
  __security_check_cookie(local_18 ^ (uint)&stack0xfffffffc);
  return;
}


// ==== 1016de5d Catch@1016de5d

void Catch_1016de5d(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x1cfc) = *(undefined4 *)(unaff_EBP + -0x1d00);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x1cfc,&DAT_102a47f0);
}


// ==== 1016de7a Catch@1016de7a

void Catch_1016de7a(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NConsoleWnd::GMViewMagicListPacket");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1016dea0 FUN_1016dea0

void FUN_1016dea0(undefined4 param_1,uint param_2)

{
  int *piVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  FString *this;
  int iVar6;
  undefined4 uVar7;
  undefined1 *puVar8;
  uint uStack_a8;
  FString local_98 [16];
  FString local_88 [12];
  undefined1 *local_7c;
  void *local_78;
  undefined1 *puStack_74;
  int local_70;
  FString local_6c [12];
  FString local_60 [12];
  int local_54;
  int local_50 [2];
  int local_48;
  int local_44;
  uint local_3c;
  int local_38;
  uint local_34;
  int local_30;
  undefined1 local_2c [12];
  int local_20;
  int local_1c;
  uint local_14;
  float local_10;
  float local_c;
  float local_8;
  
  puStack_74 = &LAB_10211b5c;
  local_78 = ExceptionList;
  uStack_a8 = DAT_103554c4 ^ (uint)local_6c;
  local_7c = (undefined1 *)&uStack_a8;
  ExceptionList = &local_78;
  local_70 = 0;
  FUN_10038f80();
  local_70._0_1_ = 1;
  FUN_1014abf0();
  local_70._0_1_ = 2;
  FUN_100d0a70(&param_1,&local_48);
  local_54 = 0;
  while( true ) {
    if (local_44 <= local_54) {
      local_70._0_1_ = 1;
      FUN_10169de0();
      local_70 = (uint)local_70._1_3_ << 8;
      FUN_10039be0();
      ExceptionList = local_78;
      return;
    }
    piVar1 = *(int **)(local_48 + local_54 * 4);
    if ((piVar1 != (int *)0x0) && (*piVar1 != 0)) break;
    local_54 = local_54 + 1;
  }
  local_8 = 2.0;
  local_34 = 0x1f;
  local_10 = 1.0;
  while( true ) {
    if ((local_34 & 1) != 0) {
      local_10 = local_10 * local_8;
    }
    local_34 = local_34 >> 1;
    if (local_34 == 0) break;
    local_8 = local_8 * local_8;
  }
  local_8 = local_10;
  uVar4 = FUN_101c19e0();
  uVar3 = param_2;
  if ((param_2 & uVar4) == 0) {
    uVar4 = 0;
    for (iVar6 = 0; param_2 = uVar4, local_38 = iVar6, iVar6 < (int)uVar3; iVar6 = iVar6 + 1) {
      FUN_10071050(0x40000000,iVar6);
      uVar5 = FUN_101c19e0();
      uVar4 = uVar4 | uVar5;
    }
  }
  uVar3 = param_2;
  for (uVar4 = 0; uVar2 = param_1, local_3c = uVar4, (int)uVar4 < 0x1e; uVar4 = uVar4 + 1) {
    local_8 = 2.0;
    local_14 = uVar4;
    if ((int)uVar4 < 0) {
      local_14 = -uVar4;
    }
    local_c = 1.0;
    while( true ) {
      if ((local_14 & 1) != 0) {
        local_c = local_c * local_8;
      }
      local_14 = local_14 >> 1;
      if (local_14 == 0) break;
      local_8 = local_8 * local_8;
    }
    local_8 = local_c;
    if ((int)uVar4 < 0) {
      local_8 = 1.0 / local_c;
    }
    uVar5 = FUN_101c19e0();
    if ((uVar3 & uVar5) != 0) {
      local_50[0] = uVar4 + 1;
      FUN_100d9a30(local_50);
    }
  }
  local_30 = 0;
  while (iVar6 = local_30, local_30 < local_1c) {
    FUN_1003f970();
    local_70._0_1_ = 3;
    FString::FString(local_60,(ushort *)L"QuestID");
    local_70._0_1_ = 4;
    FUN_10040090(local_60,uVar2);
    local_70._0_1_ = 3;
    FString::~FString(local_60);
    FString::FString(local_6c,(ushort *)L"Level");
    local_70._0_1_ = 5;
    FUN_10040090(local_6c,*(undefined4 *)(local_20 + iVar6 * 4));
    local_70._0_1_ = 3;
    FString::~FString(local_6c);
    if (iVar6 == local_1c + -1) {
      FString::FString(local_88,(ushort *)L"Completed");
      local_70._0_1_ = 6;
      FUN_10040090(local_88,0);
      this = local_88;
    }
    else {
      FString::FString(local_98,(ushort *)L"Completed");
      local_70._0_1_ = 7;
      FUN_10040090(local_98,1);
      this = local_98;
    }
    local_70._0_1_ = 3;
    FString::~FString(this);
    puVar8 = local_2c;
    uVar7 = 0x91a;
    FUN_10005c30(0x91a,puVar8);
    FUN_100d1790(uVar7,puVar8);
    local_70._0_1_ = 2;
    FUN_1003fff0();
    local_30 = iVar6 + 1;
  }
  local_70._0_1_ = 1;
  FUN_10169de0();
  local_70 = (uint)local_70._1_3_ << 8;
  FUN_10039be0();
  ExceptionList = local_78;
  return;
}


// ==== 1016e174 Catch@1016e174

void Catch_1016e174(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + 0x20) = *(undefined4 *)(unaff_EBP + -0x20);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + 0x20,&DAT_102a47f0);
}


// ==== 1016e188 Catch@1016e188

void Catch_1016e188(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NConsoleWnd::GMViewAddQuestID");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1016e1b0 FUN_1016e1b0

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

void FUN_1016e1b0(int param_1)

{
  FString *this;
  FString *this_00;
  ushort *puVar1;
  ushort *puVar2;
  ushort *puVar3;
  ushort *puVar4;
  int iVar5;
  int in_ECX;
  int *piVar6;
  ushort local_2004 [4096];
  uint local_4;
  
  local_4 = DAT_103554c4 ^ (uint)local_2004;
  this = (FString *)(param_1 + 0x24);
  puVar1 = FString::operator*((FString *)(param_1 + 0x54));
  puVar2 = FString::operator*((FString *)(param_1 + 0x48));
  puVar3 = FString::operator*((FString *)(param_1 + 0x3c));
  puVar4 = FString::operator*(this);
  FUN_10164570(local_2004,puVar4,puVar3,puVar2,puVar1);
  this_00 = (FString *)(param_1 + 0x30);
  FString::operator=(this_00,local_2004);
  if (*(int *)(param_1 + 0xc) == 0) {
LAB_1016e28f:
    iVar5 = FString::operator_int(this_00);
    if (iVar5 == 0) {
LAB_1016e2ab:
      iVar5 = FString::operator_int(this);
      if (iVar5 == 0) goto LAB_1016e302;
      puVar1 = FString::operator[](this,0);
      if (*puVar1 == 0) goto LAB_1016e302;
    }
    else {
      puVar1 = FString::operator[](this_00,0);
      if (*puVar1 == 0) goto LAB_1016e2ab;
    }
    FUN_1000fc80(param_1);
    (**(code **)(**(int **)(*(int *)(in_ECX + 0x50ac) + 0x22c) + 0x138))();
    piVar6 = *(int **)(*(int *)(in_ECX + 0x50ac) + 0x22c);
  }
  else {
    iVar5 = FString::operator_int(this_00);
    if (iVar5 == 0) {
LAB_1016e23d:
      iVar5 = FString::operator_int(this);
      if (iVar5 != 0) {
        puVar1 = FString::operator[](this,0);
        if (*puVar1 != 0) goto LAB_1016e259;
      }
      goto LAB_1016e28f;
    }
    puVar1 = FString::operator[](this_00,0);
    if (*puVar1 == 0) goto LAB_1016e23d;
LAB_1016e259:
    FUN_1000fc80(param_1);
    (**(code **)(**(int **)(*(int *)(in_ECX + 0x50ac) + 0x228) + 0x138))();
    piVar6 = *(int **)(*(int *)(in_ECX + 0x50ac) + 0x228);
  }
  (**(code **)(*piVar6 + 0x78))();
LAB_1016e302:
  __security_check_cookie(local_4 ^ (uint)local_2004);
  return;
}


// ==== 1016e320 FUN_1016e320

undefined4 FUN_1016e320(wchar_t *param_1)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  wchar_t *_Str2;
  undefined4 uVar4;
  int iVar5;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10211b88;
  local_c = ExceptionList;
  uVar2 = DAT_103554c4 ^ (uint)&stack0xffffffd4;
  ExceptionList = &local_c;
  iVar5 = 0;
  if (((param_1 == (wchar_t *)0x0) || (*param_1 == L'\0')) ||
     (iVar3 = FUN_1014cff0(param_1), iVar3 != 0)) {
LAB_1016e3f2:
    uVar4 = 0;
  }
  else {
    piVar1 = *(int **)(GL2GameData_exref + 0x1838);
    local_4 = 0;
    if (0 < piVar1[1]) {
      do {
        _Str2 = (wchar_t *)
                FL2GameData::GetNpcName
                          ((FL2GameData *)GL2GameData_exref,*(int *)(*piVar1 + 4 + iVar5 * 0xc));
        if ((_Str2 != (wchar_t *)0x0) && (iVar3 = __wcsicmp(param_1,_Str2), iVar3 == 0)) {
          local_4 = 0xffffffff;
          FUN_100d10a0(uVar2);
          goto LAB_1016e3f2;
        }
        iVar5 = iVar5 + 1;
      } while (iVar5 < piVar1[1]);
    }
    uVar4 = 1;
  }
  ExceptionList = local_c;
  return uVar4;
}


// ==== 1016e410 FUN_1016e410

void FUN_1016e410(void)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  undefined1 *puVar5;
  uint uStack_94;
  undefined2 local_84 [4];
  undefined4 local_7c;
  int *local_48;
  int *local_44;
  int local_40;
  undefined4 local_3c;
  FString local_38 [12];
  undefined1 local_2c [20];
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_10211bc9;
  local_10 = ExceptionList;
  uStack_94 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_94;
  ExceptionList = &local_10;
  piVar3 = *(int **)(GL2GameData_exref + 0x1834);
  local_3c = 0;
  local_8._0_1_ = 1;
  local_8._1_3_ = 0;
  local_40 = 0;
  local_48 = piVar3;
  local_44 = piVar3;
  while (iVar2 = local_40, local_40 < piVar3[1]) {
    iVar1 = *(int *)(*piVar3 + 8 + local_40 * 0xc);
    if (iVar1 != 0) {
      FUN_1000eea0();
      local_7c = *(undefined4 *)(iVar1 + 0xc);
      local_84[0] = *(undefined2 *)(iVar1 + 4);
      local_18 = 6;
      if (*(int *)(iVar1 + 4) == 0) {
        uVar4 = 5;
      }
      else {
        uVar4 = 6;
        if (*(int *)(iVar1 + 4) == 1) {
          uVar4 = local_18;
          switch(*(undefined4 *)(iVar1 + 0xd4)) {
          case 6:
            uVar4 = 4;
            break;
          case 9:
            uVar4 = 2;
            break;
          case 10:
          case 0xf:
          case 0x10:
            uVar4 = 0;
            break;
          case 0xb:
            uVar4 = 1;
            break;
          case 0xc:
            uVar4 = 3;
          }
        }
      }
      local_18 = uVar4;
      uVar4 = local_18;
      FUN_1003f970();
      local_8._0_1_ = 2;
      FUN_10065fe0(local_84,local_2c);
      FString::FString(local_38,(ushort *)L"TabNum");
      local_8._0_1_ = 3;
      FUN_10040090(local_38,uVar4);
      local_8._0_1_ = 2;
      FString::~FString(local_38);
      puVar5 = local_2c;
      uVar4 = 0xb5e;
      FUN_10005c30(0xb5e,puVar5);
      FUN_100d1790(uVar4,puVar5);
      local_8._0_1_ = 1;
      FUN_1003fff0();
      piVar3 = local_44;
    }
    local_40 = iVar2 + 1;
  }
  local_8 = (uint)local_8._1_3_ << 8;
  FUN_100d10a0();
  ExceptionList = local_10;
  return;
}


// ==== 1016e585 Catch@1016e585

void Catch_1016e585(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 1016e599 Catch@1016e599

void Catch_1016e599(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NConsoleWnd::RequestLoadItemForPawnViewer");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1016e5e0 FUN_1016e5e0

void FUN_1016e5e0(int param_1,undefined4 param_2)

{
  L2ParamStack local_54 [16];
  int local_44;
  int local_40;
  void *local_3c;
  int local_38;
  int local_34;
  ushort local_30 [4];
  ushort local_28 [4];
  ushort local_20 [4];
  ushort local_18 [4];
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10211bf9;
  local_c = ExceptionList;
  local_10 = DAT_103554c4 ^ (uint)local_54;
  ExceptionList = &local_c;
  appConvertIntToTime(param_1,(int *)&local_3c,&local_38,&local_34,&local_40,&local_44);
  L2ParamStack::L2ParamStack(local_54,0xb);
  local_4 = 0;
  L2ParamStack::PushBack(local_54,(void *)0x2c9);
  L2ParamStack::PushBack(local_54,(void *)0x5);
  L2ParamStack::PushBack(local_54,(void *)0x1);
  L2ParamStack::PushBack(local_54,local_3c);
  appSprintf(local_30,(ushort *)&DAT_10287ac4,local_38);
  L2ParamStack::PushBack(local_54,(void *)0x0);
  L2ParamStack::PushBack(local_54,local_30);
  appSprintf(local_18,(ushort *)&DAT_10287ac4,local_34);
  L2ParamStack::PushBack(local_54,(void *)0x0);
  L2ParamStack::PushBack(local_54,local_18);
  appSprintf(local_20,(ushort *)&DAT_10287ac4,local_40);
  L2ParamStack::PushBack(local_54,(void *)0x0);
  L2ParamStack::PushBack(local_54,local_20);
  appSprintf(local_28,(ushort *)&DAT_10287ac4,local_44);
  L2ParamStack::PushBack(local_54,(void *)0x0);
  L2ParamStack::PushBack(local_54,local_28);
  FUN_10164db0(local_54,param_2);
  local_4 = 0xffffffff;
  L2ParamStack::~L2ParamStack(local_54);
  ExceptionList = local_c;
  __security_check_cookie(local_10 ^ (uint)local_54);
  return;
}


// ==== 1016e770 FUN_1016e770

void FUN_1016e770(int param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10211c30;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if (param_1 != 0) {
    FUN_100717b0(&param_1);
  }
  ExceptionList = local_10;
  return;
}


// ==== 1016e7d2 Catch@1016e7d2

void Catch_1016e7d2(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1016e7e6 Catch@1016e7e6

void Catch_1016e7e6(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NConsoleWnd::AddSavePositionWnd");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1016e810 FUN_1016e810

void FUN_1016e810(int param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10211c50;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if (param_1 != 0) {
    FUN_100717b0(&param_1);
  }
  ExceptionList = local_10;
  return;
}


// ==== 1016e872 Catch@1016e872

void Catch_1016e872(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1016e886 Catch@1016e886

void Catch_1016e886(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NConsoleWnd::AddSaveSizeWnd");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1016e8b0 FUN_1016e8b0

void FUN_1016e8b0(void)

{
  undefined4 local_c0 [3];
  undefined4 local_b4;
  undefined4 local_b0;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10211c7b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_1000ef40(DAT_103554c4 ^ (uint)local_c0);
  local_4 = 0;
  local_c0[0] = 0x1c;
  local_b4 = 1;
  local_b0 = 0;
  FUN_1000dd30(0x7d);
  FUN_1016e1b0(local_c0);
  local_4 = 0xffffffff;
  FUN_1000e440();
  ExceptionList = local_c;
  return;
}


// ==== 1016e950 FUN_1016e950

void FUN_1016e950(void)

{
  uint uVar1;
  int in_ECX;
  FString local_cc [12];
  undefined4 auStack_c0 [3];
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10211cc3;
  local_c = ExceptionList;
  uVar1 = DAT_103554c4 ^ (uint)&stack0xffffff30;
  ExceptionList = &local_c;
  FString::FString(local_cc,(ushort *)&DAT_1022f9f8);
  local_4 = 0;
  if (DAT_1035786c == 0) {
    FUN_10005270(uVar1);
  }
  FUN_100d1790(0x136,local_cc);
  local_4 = 0xffffffff;
  FString::~FString(local_cc);
  (**(code **)(**(int **)(*(int *)(in_ECX + 0x50ac) + 0x208) + 0x13c))();
  FString::FString(local_cc,(ushort *)&DAT_1022f9f8);
  local_4 = 1;
  if (DAT_1035786c == 0) {
    FUN_10005270();
  }
  FUN_100d1790(0x99c,local_cc);
  local_4 = 0xffffffff;
  FString::~FString(local_cc);
  FUN_1000ef40();
  local_4 = 2;
  auStack_c0[0] = 0x1c;
  uStack_b4 = 1;
  uStack_b0 = 0;
  FUN_1000dd30(0x539);
  FUN_1016e1b0(auStack_c0);
  local_4 = 0xffffffff;
  FUN_1000e440();
  ExceptionList = local_c;
  return;
}


// ==== 1016eab0 FUN_1016eab0

void FUN_1016eab0(undefined4 param_1)

{
  undefined4 local_c0 [3];
  undefined4 local_b4;
  undefined4 local_b0;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10211cfb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_1000ef40(DAT_103554c4 ^ (uint)local_c0);
  local_4 = 0;
  local_b0 = 0;
  local_c0[0] = 0x50;
  local_b4 = 1;
  FUN_1000de50(param_1);
  FUN_1016e1b0(local_c0);
  local_4 = 0xffffffff;
  FUN_1000e440();
  ExceptionList = local_c;
  return;
}


// ==== 1016eb50 FUN_1016eb50

void FUN_1016eb50(undefined4 param_1)

{
  undefined4 local_c0 [3];
  undefined4 local_b4;
  undefined4 local_b0;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10211d2b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_1000ef40(DAT_103554c4 ^ (uint)local_c0);
  local_4 = 0;
  local_b0 = 0;
  local_c0[0] = 0x1f;
  local_b4 = 1;
  FUN_1000dd30(param_1);
  FUN_1016e1b0(local_c0);
  local_4 = 0xffffffff;
  FUN_1000e440();
  ExceptionList = local_c;
  return;
}


// ==== 1016ebf0 FUN_1016ebf0

void FUN_1016ebf0(L2ParamStack *param_1)

{
  void *pvVar1;
  uint uStack_e4;
  undefined4 local_d4 [3];
  undefined4 local_c8;
  undefined4 local_c4;
  undefined4 local_b8;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_10211d5b;
  local_10 = ExceptionList;
  uStack_e4 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_e4;
  ExceptionList = &local_10;
  local_8 = 0;
  pvVar1 = L2ParamStack::Top(param_1);
  if (pvVar1 != (void *)0x0) {
    FUN_1000ef40();
    local_8._0_1_ = 1;
    local_d4[0] = 0x59;
    local_c8 = 0;
    local_c4 = 0;
    FUN_1000dd30(0x6bf);
    FUN_1000dcb0(pvVar1,0,0);
    local_b8 = 1;
    FUN_1016e1b0(local_d4);
    local_8 = (uint)local_8._1_3_ << 8;
    FUN_1000e440();
  }
  ExceptionList = local_10;
  return;
}


// ==== 1016ecb8 Catch@1016ecb8

void Catch_1016ecb8(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1016eccc Catch@1016eccc

void Catch_1016eccc(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NConsoleWnd::OnExAskJoinPartyRoom");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1016ecf0 FUN_1016ecf0

void FUN_1016ecf0(void)

{
  uint uVar1;
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10211d91;
  local_c = ExceptionList;
  uVar1 = DAT_103554c4 ^ (uint)&stack0xffffffec;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX);
  local_4 = 1;
  *(undefined4 *)(in_ECX + 0xc) = 0;
  *(undefined4 *)(in_ECX + 0x10) = 8;
  FUN_1014f9c0(uVar1);
  ExceptionList = local_c;
  return;
}


// ==== 1016ed60 FUN_1016ed60

int FUN_1016ed60(uint *param_1,void *param_2)

{
  int iVar1;
  int *in_ECX;
  int *piVar2;
  
  iVar1 = *(int *)(in_ECX[3] + (in_ECX[4] - 1U & *param_1) * 4);
  if (iVar1 != -1) {
    do {
      piVar2 = (int *)(iVar1 * 0x1cec + *in_ECX);
      if (piVar2[1] == *param_1) {
        _memcpy((void *)(*in_ECX + 8 + iVar1 * 0x1cec),param_2,0x1ce4);
        return iVar1 * 0x1cec + 8 + *in_ECX;
      }
      iVar1 = *piVar2;
    } while (iVar1 != -1);
  }
  iVar1 = FUN_10169e80(param_1,param_2);
  return iVar1;
}


// ==== 1016ede0 FUN_1016ede0

void FUN_1016ede0(void)

{
  int in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_10211db8;
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
  FUN_10169fa0();
  ExceptionList = local_c;
  return;
}


// ==== 1016ee60 FUN_1016ee60

void FUN_1016ee60(int param_1)

{
  L2ConsoleState LVar1;
  UL2ConsoleWnd *in_ECX;
  uint uStack_198;
  undefined4 local_188 [2];
  undefined4 local_180;
  undefined4 local_178;
  undefined4 local_d4 [2];
  undefined4 local_cc;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_10211df6;
  local_10 = ExceptionList;
  uStack_198 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_198;
  ExceptionList = &local_10;
  local_8 = 0;
  LVar1 = UL2ConsoleWnd::GetState(in_ECX);
  if (LVar1 == 5) {
    FUN_1013ca20();
    if (*(int *)(*(int *)(in_ECX + 0x50ac) + 0x218) != 0) {
      (**(code **)(**(int **)(*(int *)(in_ECX + 0x50ac) + 0x218) + 0x13c))();
    }
    FUN_1000ef40();
    local_8._0_1_ = 1;
    local_d4[0] = 0x1d;
    local_c8 = 1;
    local_c4 = 0;
    local_cc = 0;
    if (((param_1 == 0) || (param_1 == 1)) || (param_1 == 2)) {
      FUN_1000dd30(0x7f);
    }
    FUN_1016e1b0(local_d4);
  }
  else {
    FUN_1013ca20();
    if (*(int *)(*(int *)(in_ECX + 0x50ac) + 0x218) != 0) {
      (**(code **)(**(int **)(*(int *)(in_ECX + 0x50ac) + 0x218) + 0x13c))();
    }
    FUN_1000ef40();
    local_8._0_1_ = 2;
    local_188[0] = 0x1d;
    local_178 = 0;
    local_180 = 0;
    if (((param_1 == 0) || (param_1 == 1)) || (param_1 == 2)) {
      FUN_1000dd30(0x7f);
    }
    FUN_1000fc80(local_188);
    (**(code **)(**(int **)(*(int *)(in_ECX + 0x50ac) + 0x228) + 0x138))();
    (**(code **)(**(int **)(*(int *)(in_ECX + 0x50ac) + 0x228) + 0x78))();
  }
  local_8 = (uint)local_8._1_3_ << 8;
  FUN_1000e440();
  ExceptionList = local_10;
  return;
}


// ==== 1016f009 Catch@1016f009

void Catch_1016f009(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1016f01d Catch@1016f01d

void Catch_1016f01d(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NConsoleWnd::ServerClose");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1016f040 FUN_1016f040

void FUN_1016f040(void)

{
  ushort *puVar1;
  undefined4 local_c0 [3];
  undefined4 local_b4;
  undefined4 local_b0;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_10211e34;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_4 = 0;
  FUN_1000ef40(DAT_103554c4 ^ (uint)&stack0xffffff3c);
  local_4._0_1_ = 1;
  local_c0[0] = 0x1f;
  local_b4 = 1;
  local_b0 = 0;
  puVar1 = FString::operator*((FString *)&stack0x00000004);
  FUN_1000de50(puVar1);
  FUN_1016e1b0(local_c0);
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_1000e440();
  local_4 = 0xffffffff;
  FString::~FString((FString *)&stack0x00000004);
  ExceptionList = local_c;
  return;
}


// ==== 1016f110 FUN_1016f110

void FUN_1016f110(void)

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
  
  puStack_c = &LAB_10211e72;
  local_10 = ExceptionList;
  uStack_38 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_38;
  ExceptionList = &local_10;
  local_8 = 0;
  if ((*(int *)GIsOnlyL2Console_exref == 0) && (*(int *)GL2ThaiHtmlMode_exref == 0)) {
    FUN_1016ab60();
    FString::FString(local_28,(ushort *)&DAT_1022f9f8);
    local_8._0_1_ = 1;
    pFVar2 = local_28;
    uVar1 = 700;
    FUN_10005c30(700,pFVar2);
    FUN_100d1790(uVar1,pFVar2);
    local_8._0_1_ = 0;
    FString::~FString(local_28);
    (**(code **)(**(int **)(*(int *)(in_ECX + 0x50) + 0x60) + 0x4e4))();
    FString::FString(local_28,(ushort *)&DAT_1022f9f8);
    local_8._0_1_ = 2;
    pFVar2 = local_28;
    uVar1 = 0x2d0;
    FUN_10005c30(0x2d0,pFVar2);
    FUN_100d1790(uVar1,pFVar2);
    local_8 = (uint)local_8._1_3_ << 8;
    FString::~FString(local_28);
  }
  ExceptionList = local_10;
  return;
}


// ==== 1016f1f3 Catch@1016f1f3

void Catch_1016f1f3(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1016f207 Catch@1016f207

void Catch_1016f207(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NConsoleWnd::EndQuestList");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1016f230 FUN_1016f230

void FUN_1016f230(L2ParamStack *param_1)

{
  void *pvVar1;
  ushort *puVar2;
  ushort *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uStack_8f8;
  undefined4 local_8e8;
  undefined4 local_8e4;
  undefined4 local_8dc;
  undefined4 local_8d8;
  FString local_888 [12];
  undefined4 local_87c;
  undefined4 local_878;
  void *local_874;
  FString local_830 [16];
  void *local_820;
  int local_81c;
  undefined1 *local_818;
  void *local_814;
  undefined1 *puStack_810;
  uint local_80c;
  undefined1 local_808 [2048];
  uint local_8;
  
  puStack_810 = &LAB_10211ea4;
  local_814 = ExceptionList;
  uStack_8f8 = DAT_103554c4 ^ (uint)local_808;
  local_818 = (undefined1 *)&uStack_8f8;
  ExceptionList = &local_814;
  local_80c = 0;
  local_8 = uStack_8f8;
  pvVar1 = L2ParamStack::Top(param_1);
  local_820 = L2ParamStack::Top(param_1);
  puVar2 = L2ParamStack::Top(param_1);
  if (pvVar1 == (void *)0x0) {
    if ((*(int *)(local_81c + 0x50ac) != 0) && (*(int *)(*(int *)(local_81c + 0x50ac) + 0x1f8) != 0)
       ) {
      FString::FString(local_830);
      local_80c._0_1_ = 1;
      if (puVar2 != (ushort *)0x0) {
        FString::operator=(local_830,puVar2);
      }
      FUN_1017f1c0(local_820,local_830);
      local_80c = (uint)local_80c._1_3_ << 8;
      FString::~FString(local_830);
    }
  }
  else {
    FUN_1000ef40();
    pvVar1 = local_820;
    local_80c = CONCAT31(local_80c._1_3_,2);
    local_8e8 = 0x5b;
    local_8dc = 1;
    local_8d8 = 1;
    local_8e4 = 0;
    local_87c = 1;
    local_878 = 0;
    local_874 = local_820;
    if (puVar2 != (ushort *)0x0) {
      FString::operator=(local_888,puVar2);
    }
    if (pvVar1 == (void *)0x0) {
      uVar5 = 0;
      uVar4 = 0;
      puVar3 = FString::operator*((FString *)(GL2GameData_exref + 0x53c3c));
      FUN_10164570(local_808,puVar3,puVar2,uVar4,uVar5);
      FUN_1000de50(local_808);
    }
    else {
      FUN_1000dd30(0x84d);
    }
    FUN_1016e1b0(&local_8e8);
    local_80c = local_80c & 0xffffff00;
    FUN_1000e440();
  }
  local_80c = 0xffffffff;
  ExceptionList = local_814;
  __security_check_cookie(local_8 ^ (uint)local_808);
  return;
}


// ==== 1016f3e1 Catch@1016f3e1

void Catch_1016f3e1(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x1c) = *(undefined4 *)(unaff_EBP + -0x2c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x1c,&DAT_102a47f0);
}


// ==== 1016f3f5 Catch@1016f3f5

void Catch_1016f3f5(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NConsoleWnd::OnExNeedToChangeName");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1016f420 FUN_1016f420

void FUN_1016f420(L2ParamStack *param_1)

{
  void *pvVar1;
  void *pvVar2;
  uint uStack_e8;
  undefined4 local_d8 [3];
  undefined4 local_cc;
  undefined4 local_c8;
  undefined4 local_bc;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_10211edb;
  local_10 = ExceptionList;
  uStack_e8 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_e8;
  ExceptionList = &local_10;
  local_8 = 0;
  pvVar1 = L2ParamStack::Top(param_1);
  pvVar2 = L2ParamStack::Top(param_1);
  if (pvVar1 != (void *)0x0) {
    FUN_1000ef40();
    local_8._0_1_ = 1;
    local_d8[0] = 0x52;
    local_cc = 0;
    local_c8 = 0;
    FUN_1000dd30(0x5f9);
    FUN_1000dcb0(pvVar1,0,0);
    FUN_1000df10(pvVar2,0xffffffff,0xffffffff);
    local_bc = 1;
    FUN_1016e1b0(local_d8);
    local_8 = (uint)local_8._1_3_ << 8;
    FUN_1000e440();
  }
  ExceptionList = local_10;
  return;
}


// ==== 1016f506 Catch@1016f506

void Catch_1016f506(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1016f51a Catch@1016f51a

void Catch_1016f51a(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NConsoleWnd::OnExAskJoinMPCC");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1016f540 FUN_1016f540

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

void FUN_1016f540(L2ParamStack *param_1)

{
  void *pvVar1;
  UPackage *pUVar2;
  int *piVar3;
  FL2RecipeData *pFVar4;
  ushort *puVar5;
  int iVar6;
  int in_ECX;
  void *pvVar7;
  void *local_1d50;
  void *local_1d10;
  void *local_1d0c;
  void *local_1cf8;
  undefined1 *puStack_1cf4;
  undefined4 local_1cf0;
  ushort local_1cec [256];
  ushort local_1aec [256];
  ushort local_18ec [3086];
  int local_d0;
  void *local_cc;
  void *local_c8;
  void *local_c4;
  int local_c0;
  void *local_b8;
  int local_88;
  undefined4 local_74;
  int local_64;
  int local_54;
  void *local_4c;
  void *local_48;
  int local_3c;
  void *local_34;
  void *local_30;
  int local_28;
  uint local_20;
  void *local_10;
  uint local_8;
  
  puStack_1cf4 = &LAB_10211f00;
  local_1cf8 = ExceptionList;
  local_8 = DAT_103554c4 ^ (uint)local_1cec;
  ExceptionList = &local_1cf8;
  local_1cf0 = 0;
  FUN_1002be90();
  pvVar7 = (void *)0xffffffff;
  local_1d0c = (void *)0x0;
  local_1d10 = (void *)0x0;
  local_cc = L2ParamStack::Top(param_1);
  local_34 = L2ParamStack::Top(param_1);
  switch(local_cc) {
  case (void *)0x1:
    local_c8 = L2ParamStack::Top(param_1);
    pvVar7 = L2ParamStack::Top(param_1);
    pvVar1 = L2ParamStack::Top(param_1);
    local_1d0c = L2ParamStack::Top(param_1);
    local_1d10 = L2ParamStack::Top(param_1);
    local_4c = L2ParamStack::Top(param_1);
    local_48 = L2ParamStack::Top(param_1);
    if (pvVar7 == (void *)0x1) {
      FUN_1000eea0();
      iVar6 = FUN_101b2b20();
      if (iVar6 == -1) {
        iVar6 = FUN_101b2b30();
        if (iVar6 == -1) goto LAB_1016fb39;
        FUN_101b2720();
      }
      else {
        FUN_101b25a0();
      }
      FName::FName((FName *)&stack0xffffe290,0);
      pUVar2 = UObject::GetTransientPackage();
      iVar6 = FUN_1002dd90(0x1f5c,pUVar2);
      if (iVar6 == 0) {
        piVar3 = (int *)0x0;
      }
      else {
        piVar3 = (int *)FUN_1002f690();
      }
      local_c4 = local_1d50;
      puVar5 = (ushort *)(piVar3 + 0x13);
      if ((puVar5 != (ushort *)0x0) && (*puVar5 != 0)) {
        appStrcpy(local_1cec,puVar5);
      }
      puVar5 = (ushort *)(piVar3 + 0x93);
      if ((puVar5 != (ushort *)0x0) && (*puVar5 != 0)) {
        appStrcpy(local_1aec,puVar5);
      }
      puVar5 = (ushort *)(piVar3 + 0x113);
      if ((puVar5 != (ushort *)0x0) && (*puVar5 != 0)) {
        appStrcpy(local_18ec,puVar5);
      }
      local_64 = piVar3[0x7a0];
      local_3c = piVar3[0x7a2];
      local_c0 = piVar3[0x799];
      local_88 = piVar3[0x7a8];
      local_28 = piVar3[0x7b8];
      local_54 = piVar3[0x7bd];
      local_d0 = piVar3[0x794];
      local_10 = pvVar1;
      (**(code **)(*piVar3 + 0xc))();
    }
    else if (pvVar7 == (void *)0x2) {
      iVar6 = FUN_101ae490();
      if (iVar6 == 0) goto LAB_1016fb39;
      local_c4 = *(void **)(iVar6 + 0x1e5c);
      puVar5 = (ushort *)(iVar6 + 0x4c);
      if ((puVar5 != (ushort *)0x0) && (*puVar5 != 0)) {
        appStrcpy(local_1cec,puVar5);
      }
      puVar5 = (ushort *)(iVar6 + 0x24c);
      if ((puVar5 != (ushort *)0x0) && (*puVar5 != 0)) {
        appStrcpy(local_1aec,puVar5);
      }
      puVar5 = (ushort *)(iVar6 + 0x44c);
      if ((puVar5 != (ushort *)0x0) && (*puVar5 != 0)) {
        appStrcpy(local_18ec,puVar5);
      }
      local_64 = *(int *)(iVar6 + 0x1e80);
      local_3c = *(int *)(iVar6 + 0x1e88);
      local_c0 = *(int *)(iVar6 + 0x1e64);
      local_88 = *(int *)(iVar6 + 0x1ea0);
      local_28 = *(int *)(iVar6 + 0x1ee0);
      local_54 = *(int *)(iVar6 + 0x1ef4);
      local_d0 = *(int *)(iVar6 + 0x1e50);
    }
    break;
  case (void *)0x2:
    local_c4 = L2ParamStack::Top(param_1);
    local_b8 = L2ParamStack::Top(param_1);
    pvVar7 = L2ParamStack::Top(param_1);
    local_20 = (uint)(pvVar7 != (void *)0x0);
    pvVar7 = L2ParamStack::Top(param_1);
    iVar6 = FUN_10164870();
    if (iVar6 != 0) {
      puVar5 = (ushort *)FUN_10164870();
      appStrcpy(local_18ec,puVar5);
    }
    iVar6 = FUN_10164900();
    if (iVar6 != 0) {
      puVar5 = (ushort *)FUN_10164900();
      appStrcpy(local_1cec,puVar5);
    }
    local_74 = FUN_10164c60();
    break;
  case (void *)0x3:
    local_c4 = L2ParamStack::Top(param_1);
    pvVar7 = L2ParamStack::Top(param_1);
    iVar6 = FUN_1014e050();
    if (iVar6 != 0) {
      puVar5 = (ushort *)FUN_1014e050();
      appStrcpy(local_18ec,puVar5);
    }
    iVar6 = FUN_1014e120();
    if (iVar6 != 0) {
      puVar5 = (ushort *)FUN_1014e120();
      appStrcpy(local_1cec,puVar5);
    }
    break;
  case (void *)0x4:
    local_c4 = L2ParamStack::Top(param_1);
    pvVar7 = L2ParamStack::Top(param_1);
    iVar6 = FUN_101aee70();
    if (-1 < iVar6) {
      appSprintf(local_18ec,(ushort *)L"%s%d");
    }
    puVar5 = (ushort *)FUN_101aef20();
    if (puVar5 != (ushort *)0x0) {
      appStrcpy(local_1cec,puVar5);
    }
    break;
  case (void *)0x5:
    local_c8 = L2ParamStack::Top(param_1);
    pvVar7 = L2ParamStack::Top(param_1);
    pFVar4 = FL2GameData::GetRecipeDataByIndex((FL2GameData *)GL2GameData_exref,(int)local_c8);
    if (pFVar4 != (FL2RecipeData *)0x0) {
      puVar5 = (ushort *)FUN_101647b0();
      appStrcpy(local_1cec,puVar5);
      puVar5 = (ushort *)FUN_101646f0();
      appStrcpy(local_18ec,puVar5);
    }
  }
  local_30 = pvVar7;
  FUN_1016ed60();
  if (*(int *)(in_ECX + 0x5064) != 0) {
    FUN_100461d0();
  }
  if ((((local_10 != (void *)0xffffffff) && (local_1d0c != (void *)0x0)) &&
      (local_1d10 != (void *)0x0)) && (iVar6 = FUN_101ad480(local_c4), iVar6 != 0)) {
    FUN_101ad3e0(local_c4,1);
  }
  local_1cf0 = 0xffffffff;
LAB_1016fb39:
  ExceptionList = local_1cf8;
  __security_check_cookie(local_8 ^ (uint)local_1cec);
  return;
}


// ==== 1016fb60 Catch@1016fb60

void Catch_1016fb60(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x28) = *(undefined4 *)(unaff_EBP + -0x30);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x28,&DAT_102a47f0);
}


// ==== 1016fb74 Catch@1016fb74

void Catch_1016fb74(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NConsoleWnd::AddShortCutItem");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1016fbb0 FUN_1016fbb0

void FUN_1016fbb0(L2ParamStack *param_1)

{
  void *pvVar1;
  void *pvVar2;
  ushort *puVar3;
  User *this;
  ushort *puVar4;
  uint uStack_104;
  undefined4 local_f4 [3];
  undefined4 local_e8;
  undefined4 local_e4;
  undefined4 local_d8;
  undefined1 *local_40;
  void *local_3c;
  undefined1 *puStack_38;
  uint local_34;
  L2ParamStack local_30 [20];
  FString local_1c [16];
  void *local_c;
  
  puStack_38 = &LAB_10211f4d;
  local_3c = ExceptionList;
  uStack_104 = DAT_103554c4 ^ (uint)local_30;
  local_40 = (undefined1 *)&uStack_104;
  ExceptionList = &local_3c;
  local_34 = 0;
  local_c = L2ParamStack::Top(param_1);
  pvVar1 = L2ParamStack::Top(param_1);
  pvVar2 = L2ParamStack::Top(param_1);
  FString::FString(local_1c);
  local_34._0_1_ = 1;
  if (pvVar2 != (void *)0x0) {
    puVar3 = L2ParamStack::Top(param_1);
    FString::operator=(local_1c,puVar3);
  }
  this = (User *)FUN_10145910(local_c);
  if (this == (User *)0x0) {
    L2ParamStack::L2ParamStack(local_30,10);
    local_34._0_1_ = 3;
    L2ParamStack::PushBack(local_30,(void *)0x0);
    FUN_101441f0(local_30);
    local_34 = CONCAT31(local_34._1_3_,1);
    L2ParamStack::~L2ParamStack(local_30);
  }
  else {
    FUN_1000ef40();
    local_34 = CONCAT31(local_34._1_3_,2);
    local_f4[0] = 0xe;
    local_e8 = 0;
    local_e4 = 0;
    if (pvVar2 == (void *)0x0) {
      FUN_1000dd30(0x43);
      puVar3 = (ushort *)0x0;
    }
    else if (pvVar2 == (void *)0xffffffff) {
      FUN_1000dd30(0x6e8);
      puVar3 = (ushort *)0x0;
    }
    else if ((pvVar2 == (void *)0x64) || (pvVar2 == (void *)0xc8)) {
      FUN_1000dd30(0x72d);
      puVar3 = FString::operator*(local_1c);
    }
    else {
      FUN_1000dd30(0x6e9);
      puVar3 = FString::operator*(local_1c);
    }
    puVar4 = User::GetName(this);
    FUN_1000dcb0(puVar4,pvVar1,puVar3);
    local_d8 = 1;
    FUN_1016e1b0(local_f4);
    local_34 = CONCAT31(local_34._1_3_,1);
    FUN_1000e440();
  }
  local_34 = local_34 & 0xffffff00;
  FString::~FString(local_1c);
  ExceptionList = local_3c;
  return;
}


// ==== 1016fd7c Catch@1016fd7c

void Catch_1016fd7c(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + 0x20) = *(undefined4 *)(unaff_EBP + 0x10);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + 0x20,&DAT_102a47f0);
}


// ==== 1016fd90 Catch@1016fd90

void Catch_1016fd90(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NConsoleWnd::ReceiveAskJoinPledge");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1016fdb0 FUN_1016fdb0

void FUN_1016fdb0(L2ParamStack *param_1)

{
  uint uVar1;
  void *pvVar2;
  void *pvVar3;
  L2ParamStack local_d0 [16];
  undefined4 local_c0 [3];
  undefined4 local_b4;
  undefined4 local_b0;
  undefined4 local_a4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10211f87;
  local_c = ExceptionList;
  uVar1 = DAT_103554c4 ^ (uint)&stack0xffffff20;
  ExceptionList = &local_c;
  pvVar2 = L2ParamStack::Top(param_1);
  pvVar3 = L2ParamStack::Top(param_1);
  if ((pvVar2 == (void *)0x0) || (pvVar3 == (void *)0x0)) {
    L2ParamStack::L2ParamStack(local_d0,10);
    local_4 = 1;
    L2ParamStack::PushBack(local_d0,pvVar3);
    L2ParamStack::PushBack(local_d0,(void *)0x0);
    FUN_10144230(local_d0);
    local_4 = 0xffffffff;
    L2ParamStack::~L2ParamStack(local_d0);
  }
  else {
    FUN_1000ef40(uVar1);
    local_4 = 0;
    local_c0[0] = 0x13;
    local_b4 = 0;
    local_b0 = 0;
    local_a4 = 1;
    FUN_1000dd30(0xcf);
    FUN_1000dcb0(pvVar2,pvVar3,0);
    FUN_1000de70(pvVar3);
    FUN_1016e1b0(local_c0);
    local_4 = 0xffffffff;
    FUN_1000e440();
  }
  ExceptionList = local_c;
  return;
}


// ==== 1016fee0 FUN_1016fee0

void FUN_1016fee0(L2ParamStack *param_1)

{
  uint uVar1;
  void *pvVar2;
  void *pvVar3;
  L2ParamStack local_d0 [16];
  undefined4 local_c0 [3];
  undefined4 local_b4;
  undefined4 local_b0;
  undefined4 local_a4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10211fc7;
  local_c = ExceptionList;
  uVar1 = DAT_103554c4 ^ (uint)&stack0xffffff20;
  ExceptionList = &local_c;
  pvVar2 = L2ParamStack::Top(param_1);
  pvVar3 = L2ParamStack::Top(param_1);
  if ((pvVar2 == (void *)0x0) || (pvVar3 == (void *)0x0)) {
    L2ParamStack::L2ParamStack(local_d0,10);
    local_4 = 1;
    L2ParamStack::PushBack(local_d0,pvVar3);
    L2ParamStack::PushBack(local_d0,(void *)0x0);
    FUN_10144250(local_d0);
    local_4 = 0xffffffff;
    L2ParamStack::~L2ParamStack(local_d0);
  }
  else {
    FUN_1000ef40(uVar1);
    local_4 = 0;
    local_c0[0] = 0x15;
    local_b4 = 0;
    local_b0 = 0;
    local_a4 = 1;
    FUN_1000dd30(0xff);
    FUN_1000dcb0(pvVar2,0,0);
    FUN_1000de70(pvVar3);
    FUN_1016e1b0(local_c0);
    local_4 = 0xffffffff;
    FUN_1000e440();
  }
  ExceptionList = local_c;
  return;
}


// ==== 10170010 FUN_10170010

void FUN_10170010(L2ParamStack *param_1)

{
  uint uVar1;
  void *pvVar2;
  void *pvVar3;
  int iVar4;
  undefined4 unaff_EBX;
  void *local_d4 [4];
  undefined4 auStack_c4 [3];
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_a8;
  void *pvStack_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_10212007;
  local_c = ExceptionList;
  uVar1 = DAT_103554c4 ^ (uint)&stack0xffffff1c;
  ExceptionList = &local_c;
  pvVar2 = L2ParamStack::Top(param_1);
  local_d4[0] = L2ParamStack::Top(param_1);
  L2ParamStack::Top(param_1);
  pvVar3 = L2ParamStack::Top(param_1);
  iVar4 = FUN_10145910(pvVar2,uVar1);
  if (iVar4 == 0) {
    L2ParamStack::L2ParamStack((L2ParamStack *)local_d4,10);
    puStack_8 = (undefined1 *)0x1;
    L2ParamStack::PushBack((L2ParamStack *)local_d4,(void *)0x0);
    FUN_10144470(local_d4);
    puStack_8 = (undefined1 *)0xffffffff;
    L2ParamStack::~L2ParamStack((L2ParamStack *)local_d4);
  }
  else {
    FUN_1000ef40();
    puStack_8 = (undefined1 *)0x0;
    auStack_c4[0] = 0x33;
    uStack_b8 = 0;
    uStack_b4 = 0;
    uStack_a8 = 1;
    FUN_1000dd30(0x20f);
    FUN_1000dcb0(unaff_EBX,pvVar3,0);
    FUN_1016e1b0(auStack_c4);
    puStack_8 = (undefined1 *)0xffffffff;
    FUN_1000e440();
  }
  ExceptionList = pvStack_10;
  return;
}


// ==== 10170140 FUN_10170140

void FUN_10170140(int param_1,void *param_2)

{
  int *in_ECX;
  L2ParamStack local_d0 [16];
  undefined4 local_c0 [3];
  undefined4 local_b4;
  undefined4 local_b0;
  undefined4 local_a4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10212047;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if ((param_1 == 0) || (param_2 == (void *)0x0)) {
    L2ParamStack::L2ParamStack(local_d0,10);
    local_4 = 1;
    L2ParamStack::PushBack(local_d0,param_2);
    L2ParamStack::PushBack(local_d0,(void *)0xffffffff);
    (**(code **)(*in_ECX + 0x460))(local_d0);
    local_4 = 0xffffffff;
    L2ParamStack::~L2ParamStack(local_d0);
  }
  else {
    FUN_1000ef40(DAT_103554c4 ^ (uint)&stack0xffffff24);
    local_4 = 0;
    local_c0[0] = 0x34;
    local_b4 = 0;
    local_b0 = 0;
    local_a4 = 1;
    FUN_1000dd30(0x299);
    FUN_1000dcb0(param_1,param_2,0);
    FUN_1000de70(param_2);
    FUN_1016e1b0(local_c0);
    local_4 = 0xffffffff;
    FUN_1000e440();
  }
  ExceptionList = local_c;
  return;
}


// ==== 10170270 FUN_10170270

void FUN_10170270(int param_1,void *param_2)

{
  int *in_ECX;
  L2ParamStack local_d0 [16];
  undefined4 local_c0 [3];
  undefined4 local_b4;
  undefined4 local_b0;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10212087;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if ((param_1 == 0) || (param_2 == (void *)0x0)) {
    L2ParamStack::L2ParamStack(local_d0,10);
    local_4 = 1;
    L2ParamStack::PushBack(local_d0,param_2);
    L2ParamStack::PushBack(local_d0,(void *)0xffffffff);
    (**(code **)(*in_ECX + 0x468))(local_d0);
    local_4 = 0xffffffff;
    L2ParamStack::~L2ParamStack(local_d0);
  }
  else {
    FUN_1000ef40(DAT_103554c4 ^ (uint)&stack0xffffff24);
    local_4 = 0;
    local_c0[0] = 0x35;
    local_b4 = 0;
    local_b0 = 0;
    FUN_1000dd30(0x29a);
    FUN_1000dcb0(param_1,param_2,0);
    FUN_1000de70(param_2);
    FUN_1016e1b0(local_c0);
    local_4 = 0xffffffff;
    FUN_1000e440();
  }
  ExceptionList = local_c;
  return;
}


// ==== 101703a0 FUN_101703a0

void FUN_101703a0(L2ParamStack *param_1)

{
  uint uVar1;
  void *pvVar2;
  undefined4 local_c0 [3];
  undefined4 local_b4;
  undefined4 local_b0;
  undefined4 local_a4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_102120bb;
  local_c = ExceptionList;
  uVar1 = DAT_103554c4 ^ (uint)&stack0xffffff38;
  ExceptionList = &local_c;
  pvVar2 = L2ParamStack::Top(param_1);
  FUN_1000ef40(uVar1);
  local_4 = 0;
  local_c0[0] = 0x3b;
  local_b4 = 0;
  local_b0 = 0;
  local_a4 = 1;
  FUN_1000dd30(0x204);
  FUN_1000dcb0(pvVar2,0,0);
  FUN_1016e1b0(local_c0);
  local_4 = 0xffffffff;
  FUN_1000e440();
  ExceptionList = local_c;
  return;
}


// ==== 10170470 FUN_10170470

void FUN_10170470(L2ParamStack *param_1)

{
  uint uVar1;
  void *pvVar2;
  void *pvVar3;
  ushort *puVar4;
  FString *pFVar5;
  L2ParamStack local_1d4 [16];
  undefined4 local_1c4 [3];
  undefined4 local_1b8;
  undefined4 local_1b4;
  undefined4 local_1a8;
  ushort local_110 [128];
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_102120f7;
  local_c = ExceptionList;
  local_10 = DAT_103554c4 ^ (uint)local_1d4;
  uVar1 = DAT_103554c4 ^ (uint)&stack0xfffffe1c;
  ExceptionList = &local_c;
  pvVar2 = L2ParamStack::Top(param_1);
  pvVar3 = L2ParamStack::Top(param_1);
  switch(pvVar3) {
  case (void *)0x0:
    pFVar5 = (FString *)(GL2GameData_exref + 0x30e7c);
    break;
  case (void *)0x1:
    pFVar5 = (FString *)(GL2GameData_exref + 0x30ed8);
    goto LAB_10170540;
  case (void *)0x2:
    puVar4 = FString::operator*((FString *)(GL2GameData_exref + 0x39c70));
    goto LAB_10170554;
  case (void *)0x3:
    pFVar5 = (FString *)(GL2GameData_exref + 0x39ccc);
    break;
  case (void *)0x4:
    pFVar5 = (FString *)(GL2GameData_exref + 0x39d28);
LAB_10170540:
    puVar4 = FString::operator*(pFVar5);
    goto LAB_10170554;
  default:
    goto switchD_101704cd_default;
  }
  puVar4 = FString::operator*(pFVar5);
LAB_10170554:
  appSprintf(local_110,(ushort *)&DAT_1022dde0,puVar4,uVar1);
switchD_101704cd_default:
  if (pvVar2 == (void *)0x0) {
    L2ParamStack::L2ParamStack(local_1d4,10);
    local_4 = 1;
    L2ParamStack::PushBack(local_1d4,(void *)0x0);
    FUN_10144870(local_1d4);
    local_4 = 0xffffffff;
    L2ParamStack::~L2ParamStack(local_1d4);
  }
  else {
    FUN_1000ef40();
    local_4 = 0;
    local_1c4[0] = 10;
    local_1b8 = 0;
    local_1b4 = 0;
    FUN_1000de50(local_110);
    FUN_1000dcb0(pvVar2,0,0);
    local_1a8 = 1;
    FUN_1016e1b0(local_1c4);
    local_4 = 0xffffffff;
    FUN_1000e440();
  }
  ExceptionList = local_c;
  __security_check_cookie(local_10 ^ (uint)local_1d4);
  return;
}


// ==== 10170650 FUN_10170650

void FUN_10170650(uint param_1)

{
  ushort *puVar1;
  int iVar2;
  undefined4 local_c0 [2];
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1021213b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  iVar2 = param_1 * 0x5c;
  if ((*(int *)(GL2GameData_exref + iVar2 + 0x240e8) != 0) && (param_1 < 3000)) {
    if (*(int *)(GL2GameData_exref + iVar2 + 0x240f8) == 4) {
      FUN_1000ef40(DAT_103554c4 ^ (uint)&stack0xffffff34);
      local_4 = 0;
      local_c0[0] = 0x1f;
      local_b4 = 1;
      local_b0 = 0;
      local_b8 = 0;
      FUN_1000dd30(param_1);
      FUN_1016e1b0(local_c0);
      local_4 = 0xffffffff;
      FUN_1000e440();
    }
    else {
      FUN_1013e510(param_1,*(undefined4 *)(GL2GameData_exref + iVar2 + 0x240fc));
      puVar1 = FString::operator*((FString *)(GL2GameData_exref + iVar2 + 0x24100));
      FUN_10147e60(puVar1);
      puVar1 = FString::operator*((FString *)(GL2GameData_exref + iVar2 + 0x2410c));
      FUN_101481d0(puVar1);
    }
  }
  ExceptionList = local_c;
  return;
}


// ==== 10170780 FUN_10170780

undefined4 FUN_10170780(undefined4 param_1,uint param_2)

{
  int iVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10212160;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  iVar1 = FUN_10162c10(param_1);
  if (iVar1 == 2) {
    if ((-1 < (int)param_2 >> 0x1f) && (((int)param_2 < 0 || (1000000 < param_2)))) {
      uVar2 = 0x53a;
LAB_101707e0:
      FUN_1016eb50(uVar2);
      ExceptionList = local_10;
      return 0;
    }
  }
  else if (iVar1 == 3) {
    if ((-1 < (int)param_2 >> 0x1f) && (((int)param_2 < 0 || (2000000000 < param_2)))) {
      uVar2 = 0x559;
      goto LAB_101707e0;
    }
  }
  ExceptionList = local_10;
  return 1;
}


// ==== 1017082f Catch@1017082f

void Catch_1017082f(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10170843 Catch@10170843

void Catch_10170843(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NConsoleWnd::CheckItemLimit");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10170860 FUN_10170860

void FUN_10170860(void *param_1,void *param_2,void *param_3)

{
  uchar uVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  ushort *puVar5;
  User *this;
  int iVar6;
  int *in_ECX;
  FString *pFVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  L2ParamStack local_f4 [16];
  FString local_e4 [12];
  FString local_d8 [12];
  FString aFStack_cc [12];
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_b4;
  undefined4 local_b0;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10212203;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  switch(param_1) {
  case (void *)0x2:
    iVar6 = FUN_1014ddd0();
    iVar3 = FUN_1014df70();
    iVar4 = FUN_1014dd00();
    if (iVar4 != 0) {
      if (iVar6 == 0) {
        if (iVar3 != 0) {
          iVar6 = *(int *)(iVar4 + 0x204);
          FUN_1014ca10(*(undefined4 *)(iVar3 + 0x60),*(undefined4 *)(iVar6 + 0x1bc),
                       *(undefined4 *)(iVar6 + 0x1c0),*(undefined4 *)(iVar6 + 0x1c4),param_2,param_3
                      );
        }
      }
      else {
        iVar3 = *(int *)(iVar4 + 0x204);
        FUN_1014ca10(*(undefined4 *)(iVar6 + 0x18),*(undefined4 *)(iVar3 + 0x1bc),
                     *(undefined4 *)(iVar3 + 0x1c0),*(undefined4 *)(iVar3 + 0x1c4),param_2,param_3);
      }
    }
    break;
  case (void *)0x3:
    iVar6 = FUN_1014ddd0();
    if ((iVar6 != 0) && (*(int *)(iVar6 + 0x204) != 0)) {
      FUN_101430e0(*(undefined4 *)(*(int *)(iVar6 + 0x204) + 0x60));
    }
    break;
  case (void *)0x4:
    iVar6 = FUN_1014ddd0();
    if ((iVar6 == 0) || (*(int *)(iVar6 + 0x204) == 0)) {
      FUN_1014c7c0(200,0xffffffff);
    }
    else {
      FUN_1014c7c0(200,*(undefined4 *)(*(int *)(iVar6 + 0x204) + 0x60));
    }
    break;
  case (void *)0x5:
    FUN_1014c720(200,0xffffffff);
    break;
  case (void *)0x6:
    FUN_1015a770();
    break;
  case (void *)0x7:
    iVar6 = FUN_1014ddd0();
    if ((iVar6 == 0) || (*(int *)(iVar6 + 8) != 0)) {
      uVar10 = 0;
      uVar9 = 0;
      uVar8 = 0xffb09b79;
      puVar5 = FString::operator*((FString *)(GL2GameData_exref + 0x28368));
      FUN_101392c0(puVar5,uVar8,uVar9,uVar10);
      ExceptionList = local_c;
      return;
    }
    L2ParamStack::L2ParamStack(local_f4,10);
    local_4 = 0;
    L2ParamStack::PushBack(local_f4,(void *)(iVar6 + 0x1c));
    L2ParamStack::PushBack(local_f4,*(void **)GL2PartyLooting_exref);
    FUN_10144860(local_f4);
    goto LAB_10170f12;
  case (void *)0x8:
    L2ParamStack::L2ParamStack(local_f4,10);
    local_4 = 2;
    FUN_10144880(local_f4);
    goto LAB_10170f12;
  case (void *)0x9:
    this = (User *)FUN_1014ddd0();
    if ((this == (User *)0x0) || (*(int *)(this + 8) != 0)) {
      pFVar7 = (FString *)(GL2GameData_exref + 0x28420);
LAB_10170adc:
      uVar10 = 0;
      uVar9 = 0;
      uVar8 = 0xffb09b79;
      puVar5 = FString::operator*(pFVar7);
      FUN_101392c0(puVar5,uVar8,uVar9,uVar10);
      ExceptionList = local_c;
      return;
    }
    L2ParamStack::L2ParamStack(local_f4,10);
    local_4 = 3;
    puVar5 = User::GetName(this);
    L2ParamStack::PushBack(local_f4,puVar5);
    FUN_10144890(local_f4);
    goto LAB_10170f12;
  case (void *)0xa:
    FUN_10145240();
    break;
  case (void *)0xb:
    L2ParamStack::L2ParamStack(local_f4,10);
    local_4 = 4;
    L2ParamStack::PushBack(local_f4,(void *)0x1);
    L2ParamStack::PushBack(local_f4,(void *)0xffffffff);
    L2ParamStack::PushBack(local_f4,(void *)0x1);
    FUN_10149af0(local_f4);
    FString::FString(aFStack_cc,(ushort *)&DAT_1022f9f8);
    local_4._0_1_ = 5;
    pFVar7 = aFStack_cc;
    uVar8 = 0x65e;
    FUN_10005c30(0x65e,pFVar7);
    FUN_100d1790(uVar8,pFVar7);
    local_4 = CONCAT31(local_4._1_3_,4);
    FString::~FString(aFStack_cc);
    goto LAB_10170f12;
  case (void *)0xc:
  case (void *)0xd:
  case (void *)0xe:
  case (void *)0x18:
  case (void *)0x19:
  case (void *)0x1a:
  case (void *)0x1d:
  case (void *)0x1e:
  case (void *)0x1f:
  case (void *)0x21:
  case (void *)0x22:
  case (void *)0x23:
    if (((0 < (int)param_1) && ((int)param_1 < *(int *)(GL2GameData_exref + 0x3d30))) &&
       (iVar6 = *(int *)(*(int *)(*(int *)(GL2GameData_exref + 0x3d2c) + (int)param_1 * 4) + 8),
       0 < iVar6)) {
      FUN_10144110(iVar6);
    }
    break;
  default:
    iVar6 = (**(code **)(*in_ECX + 0x590))();
    if (iVar6 != 0) {
      param_2 = (void *)(**(code **)(*in_ECX + 0x590))();
    }
    uVar1 = UInput::KeyDown(*(UInput **)(**(int **)(*(int *)(in_ECX[0x14] + 0x54) + 0x38) + 0x78),
                            0x10);
    if (uVar1 != '\0') {
      bVar2 = UInput::KeyDown(*(UInput **)(**(int **)(*(int *)(in_ECX[0x14] + 0x54) + 0x38) + 0x78),
                              0x10);
      param_3 = (void *)(uint)bVar2;
    }
    L2ParamStack::L2ParamStack(local_f4,10);
    local_4 = 10;
    L2ParamStack::PushBack(local_f4,param_1);
    L2ParamStack::PushBack(local_f4,param_2);
    L2ParamStack::PushBack(local_f4,param_3);
    FUN_101440c0(local_f4);
    goto LAB_10170f12;
  case (void *)0x12:
    FUN_10144c60(200,0xffffffff);
    break;
  case (void *)0x1c:
    FUN_10145290();
    break;
  case (void *)0x28:
    iVar6 = FUN_1014ddd0();
    if (iVar6 == 0) {
      FUN_10170650(0xf2,0xffb09b79);
    }
    else if (*(int *)(iVar6 + 8) == 0) {
      iVar3 = in_ECX[0x14];
      if ((iVar3 != 0) && (*(int *)(iVar3 + 0x60) != 0)) {
        (**(code **)(**(int **)(iVar3 + 0x60) + 0x468))
                  (*(undefined4 *)(*(int *)(iVar6 + 0x204) + 0x60));
      }
    }
    else {
      FUN_10170650(0x90,0xffb09b79);
    }
    break;
  case (void *)0x32:
    iVar6 = FUN_1014ddd0();
    if ((iVar6 == 0) || (*(int *)(iVar6 + 8) != 0)) {
      pFVar7 = (FString *)(GL2GameData_exref + 0x4380c);
      goto LAB_10170adc;
    }
    L2ParamStack::L2ParamStack(local_f4,10);
    local_4 = 1;
    L2ParamStack::PushBack(local_f4,(void *)(iVar6 + 0x1c));
    FUN_10149690(local_f4);
    goto LAB_10170f12;
  case (void *)0x37:
    if (*(FL2ReplayManager **)(in_ECX[0x14] + 0x198) != (FL2ReplayManager *)0x0) {
      FL2ReplayManager::OnSaveStartStop(*(FL2ReplayManager **)(in_ECX[0x14] + 0x198));
    }
    break;
  case (void *)0x38:
    iVar6 = FUN_1014ddd0();
    if ((iVar6 == 0) || (*(int *)(iVar6 + 8) != 0)) {
      FUN_10170650(0x32,0xffb09b79);
      ExceptionList = local_c;
      return;
    }
    L2ParamStack::L2ParamStack(local_f4,10);
    local_4 = 6;
    L2ParamStack::PushBack(local_f4,(void *)(iVar6 + 0x1c));
    FUN_10143a10(local_f4);
LAB_10170f12:
    local_4 = 0xffffffff;
    L2ParamStack::~L2ParamStack(local_f4);
    break;
  case (void *)0x39:
    FUN_1000ef40();
    local_4 = 7;
    local_c0 = 0x58;
    local_b4 = 1;
    local_b0 = 1;
    local_bc = 0;
    FUN_1000dd30(0x6ba);
    FUN_1016e1b0(&local_c0);
    local_4 = 0xffffffff;
    FUN_1000e440();
    break;
  case (void *)0x3a:
  case (void *)0x3c:
    iVar6 = FUN_1014ddd0();
    if (((iVar6 != 0) && (*(int *)(iVar6 + 8) == 0)) && (*(int *)(iVar6 + 0xc) == 0)) {
      if (param_1 == (void *)0x3a) {
        FString::FString(local_d8,(ushort *)(iVar6 + 0x1c));
        local_4 = 8;
        FUN_101445d0(local_d8,0);
        local_4 = 0xffffffff;
        FString::~FString(local_d8);
      }
      else {
        FString::FString(local_e4,(ushort *)(iVar6 + 0x1c));
        local_4 = 9;
        FUN_101445d0(local_e4,1);
        local_4 = 0xffffffff;
        FString::~FString(local_e4);
      }
    }
    break;
  case (void *)0x3b:
    FUN_10144710(DAT_103554c4 ^ (uint)&stack0xfffffefc);
  }
  ExceptionList = local_c;
  return;
}


// ==== 10170fe0 FUN_10170fe0

void FUN_10170fe0(void)

{
  undefined1 local_10 [4];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_10212238;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_4 = 0xffffffff;
  FUN_1016ede0(DAT_103554c4 ^ (uint)local_10);
  ExceptionList = local_c;
  return;
}


// ==== 10171030 FUN_10171030

void FUN_10171030(void)

{
  UL2ConsoleWnd *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_102122e9;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  UL2ConsoleWnd::UL2ConsoleWnd(in_ECX);
  local_8 = 0;
  *(undefined ***)in_ECX = NConsoleWnd::vftable;
  *(undefined ***)(in_ECX + 0x34) = NConsoleWnd::vftable;
  FUN_10070930();
  local_8._0_1_ = 1;
  *(undefined4 *)(in_ECX + 0x50a8) = 0;
  *(undefined4 *)(in_ECX + 0x50ac) = 0;
  FUN_1016ecf0();
  local_8._0_1_ = 3;
  FArray::FArray((FArray *)(in_ECX + 0x50c8));
  local_8._0_1_ = 5;
  *(undefined4 *)(in_ECX + 0x50d4) = 0;
  *(undefined4 *)(in_ECX + 0x50e0) = 1;
  *(undefined4 *)(in_ECX + 0x50e8) = 0;
  *(undefined4 *)(in_ECX + 0x50ec) = 0;
  *(undefined4 *)(in_ECX + 0x50f4) = 0;
  *(undefined4 *)(in_ECX + 0x5118) = 0;
  *(undefined4 *)(in_ECX + 0x511c) = 0;
  *(undefined4 *)(in_ECX + 0x5120) = 0;
  *(undefined4 *)(in_ECX + 0x5130) = 0;
  FArray::FArray((FArray *)(in_ECX + 0x5148));
  local_8._0_1_ = 7;
  FArray::FArray((FArray *)(in_ECX + 0x5154));
  local_8 = CONCAT31(local_8._1_3_,9);
  FArray::FArray((FArray *)(in_ECX + 0x5170));
  *(undefined4 *)(in_ECX + 0x5184) = 0;
  *(undefined4 *)(in_ECX + 0x5110) = 0;
  *(undefined4 *)(in_ECX + 0x50d8) = 0;
  *(undefined4 *)(in_ECX + 0x50e4) = 0;
  *(undefined4 *)(in_ECX + 0x50dc) = 0;
  *(undefined4 *)(in_ECX + 0x513c) = 2;
  *(undefined4 *)(in_ECX + 0x512c) = 0;
  *(undefined4 *)(in_ECX + 0x5138) = 0;
  *(undefined4 *)(in_ECX + 0x5134) = 0;
  *(undefined4 *)(in_ECX + 0x5160) = 0;
  *(undefined4 *)(in_ECX + 0x5164) = 0;
  *(undefined4 *)(in_ECX + 0x5168) = 0;
  *(undefined4 *)(in_ECX + 0x516c) = 0;
  *(undefined4 *)(in_ECX + 0x517c) = 0;
  *(undefined4 *)(in_ECX + 0x5180) = 0;
  *(undefined4 *)(in_ECX + 0x5140) = 0;
  ExceptionList = local_10;
  return;
}


// ==== 101711b2 Catch@101711b2

void Catch_101711b2(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x20);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 101711c6 Catch@101711c6

void Catch_101711c6(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NConsoleWnd::NConsoleWnd");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101711f0 FUN_101711f0

undefined4 FUN_101711f0(void)

{
  return 0;
}


// ==== 10171200 FUN_10171200

void FUN_10171200(void)

{
  int in_ECX;
  int local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_1021232e;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_10 = in_ECX + 0xc;
  local_4 = 0xffffffff;
  FUN_1007fba0(DAT_103554c4 ^ (uint)&local_10);
  ExceptionList = local_c;
  return;
}


// ==== 10171260 FUN_10171260

void FUN_10171260(L2ParamStack *param_1)

{
  void *pvVar1;
  
  pvVar1 = L2ParamStack::Top(param_1);
  if (pvVar1 == (void *)0x0) {
    FUN_10170650(0x133,0xffb09b79);
  }
  return;
}


// ==== 10171290 FUN_10171290

void FUN_10171290(int param_1,void *param_2,void *param_3)

{
  uchar uVar1;
  byte bVar2;
  APawn *this;
  int iVar3;
  undefined4 uVar4;
  FL2MagicSkillData *pFVar5;
  int *in_ECX;
  uint uStack_1b0;
  undefined4 local_1a0 [3];
  undefined4 local_194;
  undefined4 local_190;
  L2ParamStack local_e8 [20];
  void *local_d4;
  void *local_d0;
  undefined1 *local_cc;
  void *local_c8;
  undefined1 *puStack_c4;
  int local_c0;
  undefined4 local_bc [3];
  undefined4 local_b0;
  undefined4 local_ac;
  ushort local_88 [64];
  uint local_8;
  
  puStack_c4 = &LAB_1021236c;
  local_c8 = ExceptionList;
  uStack_1b0 = DAT_103554c4 ^ (uint)local_bc;
  local_cc = (undefined1 *)&uStack_1b0;
  ExceptionList = &local_c8;
  local_d0 = param_2;
  local_d4 = param_3;
  local_c0 = 0;
  local_8 = uStack_1b0;
  this = (APawn *)FUN_1014ddb0();
  if ((this != (APawn *)0x0) && (*(int *)(this + 0x62c) == 6)) {
    *(undefined4 *)(this + 0x62c) = 0;
    goto LAB_10171310;
  }
  iVar3 = (**(code **)(*in_ECX + 0x590))();
  if (iVar3 != 0) {
    local_d0 = (void *)(**(code **)(*in_ECX + 0x590))();
  }
  uVar1 = UInput::KeyDown(*(UInput **)(**(int **)(*(int *)(in_ECX[0x14] + 0x54) + 0x38) + 0x78),0x10
                         );
  if (uVar1 != '\0') {
    bVar2 = UInput::KeyDown(*(UInput **)(**(int **)(*(int *)(in_ECX[0x14] + 0x54) + 0x38) + 0x78),
                            0x10);
    local_d4 = (void *)(uint)bVar2;
  }
  iVar3 = *(int *)(param_1 + 0x1e54);
  if (iVar3 == 1) {
    if (*(int *)(param_1 + 0x1ee0) != 0) {
      iVar3 = FUN_1014f080();
      if (iVar3 != 0) {
        uVar4 = FUN_1002c9c0();
        appSprintf(local_88,(ushort *)&DAT_1022dde0,uVar4);
        FUN_1000ef40();
        local_c0._0_1_ = 1;
        local_1a0[0] = 0x21;
        local_194 = 1;
        local_190 = 0;
        FUN_1000dd30(0x31e);
        FUN_1000dcb0(local_88,0,0);
        FUN_1000df10(*(undefined4 *)(param_1 + 0x1e58),0xffffffff,0xffffffff);
        FUN_1016e1b0(local_1a0);
        local_c0 = (uint)local_c0._1_3_ << 8;
        FUN_1000e440();
        local_c0 = 0xffffffff;
        goto LAB_10171310;
      }
    }
    iVar3 = FUN_1002cca0();
    if (0 < iVar3) {
      FUN_1000ef40();
      local_c0._0_1_ = 2;
      local_bc[0] = 0x45;
      local_b0 = 1;
      local_ac = 0;
      uVar4 = FUN_1002cca0();
      FUN_1000dd30(uVar4);
      FUN_1000df10(*(undefined4 *)(param_1 + 0x1e58),0xffffffff,0xffffffff);
      FUN_1016e1b0(local_bc);
      local_c0 = (uint)local_c0._1_3_ << 8;
      FUN_1000e440();
      local_c0 = 0xffffffff;
      goto LAB_10171310;
    }
    if (*(int *)(param_1 + 0x1f5c) == 1) {
      FUN_10142ea0(*(undefined4 *)(param_1 + 0x1e58));
      local_c0 = 0xffffffff;
      goto LAB_10171310;
    }
    if (*(int *)(param_1 + 0x1f5c) == 2) {
      FUN_10144cb0(*(undefined4 *)(param_1 + 0x1e58));
      local_c0 = 0xffffffff;
      goto LAB_10171310;
    }
  }
  else if (iVar3 == 2) {
    pFVar5 = FL2GameData::GetMSData
                       ((FL2GameData *)GL2GameData_exref,*(int *)(param_1 + 0x1e5c),
                        *(int *)(param_1 + 0x1e60));
    if (*(int *)(pFVar5 + 0x30) != 0xc) {
      L2ParamStack::L2ParamStack(local_e8,10);
      local_c0._0_1_ = 3;
      L2ParamStack::PushBack(local_e8,*(void **)(param_1 + 0x1e5c));
      L2ParamStack::PushBack(local_e8,local_d0);
      L2ParamStack::PushBack(local_e8,local_d4);
      FUN_10143b50(local_e8);
      local_c0 = (uint)local_c0._1_3_ << 8;
      L2ParamStack::~L2ParamStack(local_e8);
      local_c0 = 0xffffffff;
      goto LAB_10171310;
    }
    if (*(int *)(this + 0x62c) != 5) {
      (**(code **)(**(int **)(this + 0x14d8) + 800))();
      APawn::NActionStop(this);
      *(undefined4 *)(this + 0x62c) = 6;
      *(undefined4 *)(this + 0x648) = *(undefined4 *)(param_1 + 0x1e5c);
      local_c0 = 0xffffffff;
      goto LAB_10171310;
    }
  }
  else {
    if (iVar3 == 3) {
      FUN_10170860(*(undefined4 *)(param_1 + 0x1e5c),local_d0,local_d4);
      local_c0 = 0xffffffff;
      goto LAB_10171310;
    }
    if (iVar3 == 4) {
      FUN_10147df0(*(undefined4 *)(param_1 + 0x1e5c));
      local_c0 = 0xffffffff;
      goto LAB_10171310;
    }
    if (iVar3 == 5) {
      FUN_10143bb0(*(undefined4 *)(param_1 + 0x1e58));
    }
  }
  local_c0 = 0xffffffff;
LAB_10171310:
  ExceptionList = local_c8;
  __security_check_cookie(local_8 ^ (uint)local_bc);
  return;
}


// ==== 10171644 Catch@10171644

void Catch_10171644(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x1c) = *(undefined4 *)(unaff_EBP + -0x30);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x1c,&DAT_102a47f0);
}


// ==== 10171658 Catch@10171658

void Catch_10171658(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NConsoleWnd::UseShortcut");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10171680 FUN_10171680

void FUN_10171680(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_102123a0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  iVar1 = FUN_10141370(param_1);
  if (iVar1 != 0) {
    FUN_10171290(iVar1,param_2,param_3);
  }
  ExceptionList = local_10;
  return;
}


// ==== 101716ec Catch@101716ec

void Catch_101716ec(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10171700 Catch@10171700

void Catch_10171700(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NConsoleWnd::UseShortcut");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10171720 FUN_10171720

void FUN_10171720(L2ParamStack *param_1)

{
  int *piVar1;
  size_t _Size;
  short *_Memory;
  int iVar2;
  void *_Memory_00;
  int in_ECX;
  undefined4 uVar3;
  short *psVar4;
  size_t sStack_a4;
  int iStack_a0;
  undefined1 auStack_8c [4];
  void *local_88;
  ushort auStack_5c [6];
  ushort auStack_50 [32];
  uint uStack_10;
  uint local_4;
  
  local_4 = DAT_103554c4 ^ (uint)auStack_8c;
  iStack_a0 = 0x1017174b;
  L2ParamStack::Top(param_1);
  iStack_a0 = 0x10171751;
  local_88 = L2ParamStack::Top(param_1);
  iStack_a0 = *(int *)GNull_exref;
  sStack_a4 = 0;
  piVar1 = (int *)(**(code **)(**(int **)GFileManager_exref + 8))();
  if (piVar1 != (int *)0x0) {
    _Size = (**(code **)(*piVar1 + 0x2c))();
    _Memory = _malloc(_Size);
    (**(code **)(*piVar1 + 4))();
    if (((_Memory == (short *)0x0) || (*_Memory == 0x4d42)) &&
       ((_Memory == (short *)0xfffffff2 ||
        (((*(int *)(_Memory + 9) == 0x40 && (*(int *)(_Memory + 0xb) == 0x40)) &&
         ((ushort)_Memory[0xe] < 9)))))) {
      (**(code **)(*piVar1 + 0x54))();
      (**(code **)*piVar1)();
      iVar2 = (**(code **)(**(int **)GFileManager_exref + 0x28))();
      if (iVar2 != 0) {
        appSprintf(auStack_50,(ushort *)L"..\\crest\\bmp_crest.bmp");
        appSprintf((ushort *)&stack0xffffff70,(ushort *)L"..\\crest\\dxt1_crest.dds");
        piVar1 = (int *)(**(code **)(**(int **)GFileManager_exref + 0xc))();
        if (piVar1 != (int *)0x0) {
          psVar4 = _Memory;
          (**(code **)(*piVar1 + 4))();
          (**(code **)(*piVar1 + 0x54))();
          (**(code **)*piVar1)();
          sStack_a4 = 0;
          UCanvas::MakeBMPToDXT1
                    (DAT_103663c0,auStack_5c,(ushort *)&stack0xffffff64,(int *)&sStack_a4,1,
                     iStack_a0,1);
          _Memory_00 = _malloc(sStack_a4);
          uVar3 = 0;
          piVar1 = (int *)(**(code **)(**(int **)GFileManager_exref + 8))(&stack0xffffff64);
          (**(code **)(*piVar1 + 4))(_Memory_00,psVar4);
          (**(code **)(*piVar1 + 0x54))();
          (**(code **)*piVar1)(1);
          (**(code **)(**(int **)(*(int *)(in_ECX + 0x50) + 0x60) + 0x1c8))(uVar3,_Memory_00);
          _free(_Memory_00);
          (**(code **)(**(int **)GFileManager_exref + 0x14))(&stack0xffffff44,0,0);
        }
      }
      _free(_Memory);
      goto LAB_10171936;
    }
  }
  FUN_10170650();
LAB_10171936:
  __security_check_cookie(uStack_10 ^ (uint)&stack0xffffff68);
  return;
}


// ==== 10171960 FUN_10171960

void FUN_10171960(L2ParamStack *param_1)

{
  int *piVar1;
  size_t _Size;
  short *_Memory;
  undefined4 *_Memory_00;
  undefined4 *puVar2;
  void *_Memory_01;
  int iVar3;
  int iVar4;
  int unaff_EDI;
  undefined4 uVar5;
  size_t sStack_a8;
  undefined4 uStack_a4;
  ushort auStack_90 [4];
  void *local_88;
  ushort auStack_5c [6];
  ushort auStack_50 [32];
  uint uStack_10;
  uint local_4;
  
  local_4 = DAT_103554c4 ^ (uint)auStack_90;
  uStack_a4 = 0x1017198f;
  L2ParamStack::Top(param_1);
  uStack_a4 = 0x10171995;
  local_88 = L2ParamStack::Top(param_1);
  uStack_a4 = *(undefined4 *)GNull_exref;
  sStack_a8 = 0;
  piVar1 = (int *)(**(code **)(**(int **)GFileManager_exref + 8))();
  if (piVar1 != (int *)0x0) {
    _Size = (**(code **)(*piVar1 + 0x2c))();
    _Memory = _malloc(_Size);
    (**(code **)(*piVar1 + 4))();
    if (((_Memory == (short *)0x0) || ((*_Memory == 0x4d42 && (*(uint *)(_Memory + 1) < 0xc01)))) &&
       ((_Memory + 7 == (short *)0x0 ||
        (((*(int *)(_Memory + 9) == 0x10 && (*(int *)(_Memory + 0xb) == 0xc)) &&
         ((ushort)_Memory[0xe] < 9)))))) {
      _Memory_00 = _malloc(0x536);
      appMemset(_Memory_00,0xff,0x536);
      _Memory[1] = 0x536;
      _Memory[2] = 0;
      _Memory[0x11] = 0x100;
      _Memory[0x12] = 0;
      _Memory[9] = 0x10;
      _Memory[10] = 0;
      _Memory[0xb] = 0x10;
      _Memory[0xc] = 0;
      *_Memory_00 = *(undefined4 *)_Memory;
      _Memory_00[1] = *(undefined4 *)(_Memory + 2);
      _Memory_00[2] = *(undefined4 *)(_Memory + 4);
      *(short *)(_Memory_00 + 3) = _Memory[6];
      _memcpy((void *)((int)_Memory_00 + 0xe),_Memory + 7,0x28);
      _memcpy((void *)((int)_Memory_00 + 0x36),_Memory + 0x1b,0x400);
      puVar2 = (undefined4 *)((int)_Memory_00 + 0x436);
      iVar3 = (int)_Memory - (int)_Memory_00;
      iVar4 = 0xc;
      do {
        *puVar2 = *(undefined4 *)(iVar3 + (int)puVar2);
        puVar2[1] = *(undefined4 *)(iVar3 + 4 + (int)puVar2);
        puVar2[2] = *(undefined4 *)(iVar3 + 8 + (int)puVar2);
        puVar2[3] = *(undefined4 *)(iVar3 + 0xc + (int)puVar2);
        puVar2 = puVar2 + 4;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
      (**(code **)(*piVar1 + 0x54))();
      (**(code **)*piVar1)();
      iVar3 = (**(code **)(**(int **)GFileManager_exref + 0x28))();
      if (iVar3 != 0) {
        appSprintf(auStack_50,(ushort *)L"..\\crest\\bmp_crest.bmp");
        appSprintf(auStack_90,(ushort *)L"..\\crest\\dxt1_crest.dds");
        piVar1 = (int *)(**(code **)(**(int **)GFileManager_exref + 0xc))();
        if (piVar1 != (int *)0x0) {
          puVar2 = _Memory_00;
          (**(code **)(*piVar1 + 4))();
          (**(code **)(*piVar1 + 0x54))();
          (**(code **)*piVar1)();
          sStack_a8 = 0;
          UCanvas::MakeBMPToDXT1
                    (DAT_103663c0,auStack_5c,(ushort *)&stack0xffffff64,(int *)&sStack_a8,1,
                     unaff_EDI,0);
          _Memory_01 = _malloc(sStack_a8);
          iVar3 = *(int *)GNull_exref;
          uVar5 = 0;
          piVar1 = (int *)(**(code **)(**(int **)GFileManager_exref + 8))(&stack0xffffff64,0);
          (**(code **)(*piVar1 + 4))(_Memory_01,puVar2);
          (**(code **)(*piVar1 + 0x54))();
          (**(code **)*piVar1)(1);
          (**(code **)(**(int **)(*(int *)(iVar3 + 0x50) + 0x60) + 0x1c4))(uVar5,_Memory_01);
          _free(_Memory_01);
          (**(code **)(**(int **)GFileManager_exref + 0x14))(&stack0xffffff44,0,0);
        }
      }
      _free(_Memory);
      _free(_Memory_00);
      goto LAB_10171c39;
    }
  }
  FUN_10170650();
LAB_10171c39:
  __security_check_cookie(uStack_10 ^ (uint)&stack0xffffff64);
  return;
}


// ==== 10171c60 FUN_10171c60

void FUN_10171c60(L2ParamStack *param_1)

{
  int *piVar1;
  size_t _Size;
  short *_Memory;
  undefined4 *_Memory_00;
  undefined4 *puVar2;
  void *_Memory_01;
  int iVar3;
  int unaff_EDI;
  undefined4 uVar4;
  size_t sStack_a8;
  undefined4 uStack_a4;
  ushort auStack_90 [4];
  void *local_88;
  ushort auStack_5c [6];
  ushort auStack_50 [32];
  uint uStack_10;
  uint local_4;
  
  local_4 = DAT_103554c4 ^ (uint)auStack_90;
  uStack_a4 = 0x10171c8f;
  L2ParamStack::Top(param_1);
  uStack_a4 = 0x10171c95;
  local_88 = L2ParamStack::Top(param_1);
  uStack_a4 = *(undefined4 *)GNull_exref;
  sStack_a8 = 0;
  piVar1 = (int *)(**(code **)(**(int **)GFileManager_exref + 8))();
  if (piVar1 != (int *)0x0) {
    _Size = (**(code **)(*piVar1 + 0x2c))();
    _Memory = _malloc(_Size);
    (**(code **)(*piVar1 + 4))();
    if (((_Memory == (short *)0x0) || ((*_Memory == 0x4d42 && (*(uint *)(_Memory + 1) < 0xc01)))) &&
       ((_Memory + 7 == (short *)0x0 ||
        (((*(int *)(_Memory + 9) == 8 && (*(int *)(_Memory + 0xb) == 0xc)) &&
         ((ushort)_Memory[0xe] < 9)))))) {
      _Memory_00 = _malloc(0x4b6);
      appMemset(_Memory_00,0xff,0x4b6);
      _Memory[1] = 0x4b6;
      _Memory[2] = 0;
      _Memory[9] = 8;
      _Memory[10] = 0;
      _Memory[0xb] = 0x10;
      _Memory[0xc] = 0;
      _Memory[0x11] = 0x80;
      _Memory[0x12] = 0;
      *_Memory_00 = *(undefined4 *)_Memory;
      _Memory_00[1] = *(undefined4 *)(_Memory + 2);
      _Memory_00[2] = *(undefined4 *)(_Memory + 4);
      *(short *)(_Memory_00 + 3) = _Memory[6];
      _memcpy((void *)((int)_Memory_00 + 0xe),_Memory + 7,0x28);
      _memcpy((void *)((int)_Memory_00 + 0x36),_Memory + 0x1b,0x400);
      puVar2 = (undefined4 *)((int)_Memory_00 + 0x436);
      iVar3 = 0xc;
      do {
        *puVar2 = *(undefined4 *)(((int)_Memory - (int)_Memory_00) + (int)puVar2);
        puVar2[1] = *(undefined4 *)(((int)_Memory - (int)_Memory_00) + 4 + (int)puVar2);
        puVar2 = puVar2 + 2;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
      (**(code **)(*piVar1 + 0x54))();
      (**(code **)*piVar1)();
      iVar3 = (**(code **)(**(int **)GFileManager_exref + 0x28))();
      if (iVar3 != 0) {
        appSprintf(auStack_50,(ushort *)L"..\\crest\\bmp_crest.bmp");
        appSprintf(auStack_90,(ushort *)L"..\\crest\\dxt1_crest.dds");
        piVar1 = (int *)(**(code **)(**(int **)GFileManager_exref + 0xc))();
        if (piVar1 != (int *)0x0) {
          puVar2 = _Memory_00;
          (**(code **)(*piVar1 + 4))();
          (**(code **)(*piVar1 + 0x54))();
          (**(code **)*piVar1)();
          sStack_a8 = 0;
          UCanvas::MakeBMPToDXT1
                    (DAT_103663c0,auStack_5c,(ushort *)&stack0xffffff64,(int *)&sStack_a8,0,
                     unaff_EDI,0);
          _Memory_01 = _malloc(sStack_a8);
          iVar3 = *(int *)GNull_exref;
          uVar4 = 0;
          piVar1 = (int *)(**(code **)(**(int **)GFileManager_exref + 8))(&stack0xffffff64,0);
          (**(code **)(*piVar1 + 4))(_Memory_01,puVar2);
          (**(code **)(*piVar1 + 0x54))();
          (**(code **)*piVar1)(1);
          (**(code **)(**(int **)(*(int *)(iVar3 + 0x50) + 0x60) + 0x230))(uVar4,_Memory_01);
          _free(_Memory_01);
          (**(code **)(**(int **)GFileManager_exref + 0x14))(&stack0xffffff44,0,0);
        }
      }
      _free(_Memory);
      _free(_Memory_00);
      goto LAB_10171f2b;
    }
  }
  FUN_10170650();
LAB_10171f2b:
  __security_check_cookie(uStack_10 ^ (uint)&stack0xffffff64);
  return;
}


// ==== 10171f50 FUN_10171f50

void FUN_10171f50(L2ParamStack *param_1)

{
  void *pvVar1;
  
  pvVar1 = L2ParamStack::Top(param_1);
  if (pvVar1 == (void *)0x0) {
    FUN_10170650(0x134,0xffb09b79);
  }
  return;
}


// ==== 10171f80 FUN_10171f80

void FUN_10171f80(L2ParamStack *param_1)

{
  void *pvVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_102123c0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  pvVar1 = L2ParamStack::Top(param_1);
  if (pvVar1 == (void *)0x0) {
    uVar2 = 0xbe;
  }
  else {
    uVar2 = 0xbd;
  }
  FUN_10170650(uVar2,0xffb09b79);
  ExceptionList = local_10;
  return;
}


// ==== 10171ff4 Catch@10171ff4

void Catch_10171ff4(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10172008 Catch@10172008

void Catch_10172008(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NConsoleWnd::ReceiveCreatePledge");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10172030 FUN_10172030

void FUN_10172030(L2ParamStack *param_1)

{
  void *pvVar1;
  
  pvVar1 = L2ParamStack::Top(param_1);
  if (pvVar1 != (void *)0x0) {
    FUN_10170650(0x135,0xffb09b79);
    return;
  }
  FUN_10170650(0x136,0xffb09b79);
  return;
}


// ==== 10172070 FUN_10172070

void FUN_10172070(L2ParamStack *param_1)

{
  void *pvVar1;
  
  pvVar1 = L2ParamStack::Top(param_1);
  if (pvVar1 != (void *)0x0) {
    FUN_10170650(0xc1,0xffb09b79);
    return;
  }
  FUN_10170650(0xc2,0xffb09b79);
  return;
}


// ==== 101720b0 FUN_101720b0

void FUN_101720b0(L2ParamStack *param_1)

{
  void *pvVar1;
  
  pvVar1 = L2ParamStack::Top(param_1);
  if (pvVar1 != (void *)0x0) {
    FUN_10170650(0xc5,0xffb09b79);
    return;
  }
  FUN_10170650(0x460,0xffb09b79);
  return;
}


// ==== 101720f0 FUN_101720f0

void FUN_101720f0(void)

{
  FUN_10170650(199,0xffb09b79);
  return;
}


// ==== 10172110 FUN_10172110

void FUN_10172110(L2ParamStack *param_1)

{
  void *pvVar1;
  
  pvVar1 = L2ParamStack::Top(param_1);
  if (pvVar1 != (void *)0x0) {
    FUN_10170650(0xc1,0xffff0000);
    return;
  }
  FUN_10170650(0xc2,0xffb09b79);
  return;
}


// ==== 10172150 FUN_10172150

void FUN_10172150(L2ParamStack *param_1)

{
  void *pvVar1;
  
  pvVar1 = L2ParamStack::Top(param_1);
  if (0 < (int)pvVar1) {
    FUN_10170650(0x137,0xffb09b79);
    return;
  }
  if (pvVar1 == (void *)0x0) {
    FUN_10170650(0x138,0xffb09b79);
  }
  return;
}


// ==== 10172190 FUN_10172190

void FUN_10172190(L2ParamStack *param_1)

{
  void *pvVar1;
  
  pvVar1 = L2ParamStack::Top(param_1);
  if (0 < (int)pvVar1) {
    FUN_10170650(0x139,0xffb09b79);
    return;
  }
  if (pvVar1 == (void *)0x0) {
    FUN_10170650(0xe4,0xffb09b79);
  }
  return;
}


// ==== 101721d0 FUN_101721d0

void FUN_101721d0(L2ParamStack *param_1)

{
  void *pvVar1;
  
  pvVar1 = L2ParamStack::Top(param_1);
  if (pvVar1 == (void *)0x0) {
    FUN_10170650(0x13a,0xffb09b79);
  }
  return;
}


// ==== 10172200 FUN_10172200

void FUN_10172200(L2ParamStack *param_1)

{
  void *pvVar1;
  
  pvVar1 = L2ParamStack::Top(param_1);
  if (pvVar1 == (void *)0x0) {
    FUN_10170650(0x13b,0xffb09b79);
  }
  return;
}


// ==== 10172230 FUN_10172230

void FUN_10172230(L2ParamStack *param_1)

{
  void *pvVar1;
  
  pvVar1 = L2ParamStack::Top(param_1);
  if (pvVar1 != (void *)0x0) {
    FUN_10170650(0x205,0xffb09b79);
    return;
  }
  FUN_10170650(0x206,0xffb09b79);
  return;
}


// ==== 10172270 FUN_10172270

void FUN_10172270(L2ParamStack *param_1)

{
  void *pvVar1;
  
  pvVar1 = L2ParamStack::Top(param_1);
  if (pvVar1 != (void *)0x0) {
    FUN_10170650(0x20d,0xffb09b79);
    return;
  }
  FUN_10170650(0x20e,0xffb09b79);
  return;
}


// ==== 101722b0 FUN_101722b0

void FUN_101722b0(L2ParamStack *param_1)

{
  void *pvVar1;
  
  pvVar1 = L2ParamStack::Top(param_1);
  if (pvVar1 == (void *)0x0) {
    FUN_10170650(0x131,0xffb09b79);
  }
  return;
}


// ==== 101722e0 FUN_101722e0

void FUN_101722e0(L2ParamStack *param_1)

{
  void *pvVar1;
  
  pvVar1 = L2ParamStack::Top(param_1);
  if (pvVar1 == (void *)0x0) {
    FUN_10170650(0x13d,0xffb09b79);
  }
  return;
}


// ==== 10172310 FUN_10172310

void FUN_10172310(void)

{
  FUN_10170650(0xca,0xffb09b79);
  return;
}


// ==== 10172330 FUN_10172330

void FUN_10172330(void)

{
  FUN_10170650(0xcb,0xffb09b79);
  return;
}


// ==== 10172350 FUN_10172350

undefined4 FUN_10172350(void)

{
  float fVar1;
  bool bVar2;
  int iVar3;
  FString *pFVar4;
  L2ConsoleState LVar5;
  int *piVar6;
  code *pcVar7;
  UClass *pUVar8;
  int iVar9;
  UL2ConsoleWnd *in_ECX;
  uint uStack_94;
  FString local_84 [12];
  L2ParamStack local_78 [4];
  FString local_74 [12];
  FString local_68 [24];
  FString local_50 [20];
  int local_3c [2];
  float local_34;
  undefined1 *local_30;
  undefined1 *local_2c;
  int local_28 [2];
  float local_20;
  ushort *local_1c;
  char local_15;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1021254d;
  local_10 = ExceptionList;
  uStack_94 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_94;
  ExceptionList = &local_10;
  bVar2 = false;
  local_28[1] = 0;
  local_8._0_1_ = 1;
  local_8._1_3_ = 0;
  iVar3 = FString::operator_int((FString *)&stack0x00000004);
  if (iVar3 == 0) {
LAB_101723c3:
    local_15 = '\0';
  }
  else {
    pFVar4 = (FString *)FUN_1014ad10();
    local_8 = CONCAT31(local_8._1_3_,2);
    bVar2 = true;
    local_28[1] = 1;
    iVar3 = FString::operator!=((FString *)&stack0x00000004,pFVar4);
    local_15 = '\x01';
    if (iVar3 == 0) goto LAB_101723c3;
  }
  local_8 = 1;
  if (bVar2) {
    local_28[1] = 0;
    FString::~FString(local_74);
  }
  if (local_15 != '\0') goto LAB_10172816;
  local_1c = FString::operator*((FString *)&stack0x00000010);
  iVar3 = ParseCommand(&local_1c,(ushort *)L"UseShortcutItem");
  if (iVar3 != 0) {
    FUN_101add10();
    local_28[0] = -1;
    Parse(local_1c,(ushort *)L"Num=",local_28);
    FUN_10045740();
    FUN_10171680();
    goto LAB_10172816;
  }
  iVar3 = ParseCommand(&local_1c,(ushort *)L"TargetCancel");
  if (iVar3 != 0) {
    iVar3 = *(int *)(**(int **)(*(int *)(*(int *)(in_ECX + 0x50) + 0x54) + 0x38) + 0x3c);
    iVar9 = *(int *)(iVar3 + 0x3bc);
    if (*(int *)(iVar9 + 0x62c) == 6) {
      *(undefined4 *)(iVar9 + 0x62c) = 0;
    }
    else if ((*(byte *)(iVar3 + 0xa90) & 1) == 0) {
      L2ParamStack::L2ParamStack(local_78,10);
      local_8._0_1_ = 3;
      L2ParamStack::PushBack(local_78,(void *)0x0);
      FUN_101440b0();
      FUN_101add10();
      local_8 = CONCAT31(local_8._1_3_,1);
      L2ParamStack::~L2ParamStack(local_78);
    }
    goto LAB_10172816;
  }
  iVar3 = ParseCommand(&local_1c,(ushort *)L"FocusChatWindow");
  if (iVar3 != 0) {
    if ((*(int *)GIsEnterChatting_exref == 0) ||
       (((DAT_1036c674 != 0 &&
         (iVar3 = (**(code **)(**(int **)(DAT_1036c674 + 4) + 0x88))(), iVar3 != 0)) &&
        (iVar3 = (**(code **)(**(int **)(DAT_1036c674 + 4) + 0xfc))(), iVar3 != 0))))
    goto LAB_10172816;
    FString::FString(local_50,(ushort *)&DAT_1022f9f8);
    local_8._0_1_ = 4;
    goto LAB_10172cee;
  }
  iVar3 = ParseCommand(&local_1c,(ushort *)L"TabShowInventoryWindow");
  if (iVar3 == 0) {
    iVar3 = ParseCommand(&local_1c,(ushort *)L"ShowInventoryWindow");
    if (iVar3 == 0) {
      iVar3 = ParseCommand(&local_1c,(ushort *)L"ShowMainWindow");
      if (iVar3 != 0) {
        FString::FString(local_50);
        local_8._0_1_ = 5;
        Parse(local_1c,(ushort *)L"Tab=",local_50);
        pFVar4 = (FString *)FString::Caps(local_50);
        local_8._0_1_ = 6;
        FString::operator=(local_50,pFVar4);
        local_8._0_1_ = 5;
        FString::~FString(local_74);
        iVar3 = FString::operator==(local_50,(ushort *)L"STATUS");
        if (iVar3 == 0) {
          iVar3 = FString::operator==(local_50,(ushort *)L"SKILL");
          if (iVar3 == 0) {
            iVar3 = FString::operator==(local_50,(ushort *)L"ACTION");
            if (iVar3 == 0) {
              iVar3 = FString::operator==(local_50,(ushort *)L"QUEST");
              if (iVar3 == 0) {
                iVar3 = FString::operator==(local_50,(ushort *)L"PLEDGE");
                if (iVar3 == 0) {
                  FUN_1013d7f0();
                  local_8 = CONCAT31(local_8._1_3_,1);
                  FString::~FString(local_50);
                }
                else {
                  FUN_1013d7f0();
                  local_8 = CONCAT31(local_8._1_3_,1);
                  FString::~FString(local_50);
                }
              }
              else {
                FUN_1013d7f0();
                local_8 = CONCAT31(local_8._1_3_,1);
                FString::~FString(local_50);
              }
            }
            else {
              FUN_1013d7f0();
              local_8 = CONCAT31(local_8._1_3_,1);
              FString::~FString(local_50);
            }
          }
          else {
            FUN_1013d7f0();
            local_8 = CONCAT31(local_8._1_3_,1);
            FString::~FString(local_50);
          }
        }
        else {
          FUN_1013d7f0();
          local_8 = CONCAT31(local_8._1_3_,1);
          FString::~FString(local_50);
        }
        goto LAB_10172816;
      }
      iVar3 = ParseCommand(&local_1c,(ushort *)L"ShowSystemMenuWindow");
      if (iVar3 != 0) {
        FUN_1013d9e0();
        goto LAB_10172816;
      }
      iVar3 = ParseCommand(&local_1c,(ushort *)L"ShowTestWindow");
      if (iVar3 == 0) {
        iVar3 = ParseCommand(&local_1c,(ushort *)L"ShowBoardWindow");
        if (iVar3 != 0) {
          FUN_1013dc20();
          goto LAB_10172816;
        }
        iVar3 = ParseCommand(&local_1c,(ushort *)L"HideAllWindow");
        if (iVar3 != 0) {
          iVar3 = FUN_1005ab70();
          if (iVar3 == 0) {
            FUN_1005aa50();
          }
          else {
            FUN_1005aae0();
          }
          goto LAB_10172816;
        }
        iVar3 = ParseCommand(&local_1c,(ushort *)L"SetGamingState");
        if (iVar3 != 0) {
          FString::FString(local_50,(ushort *)L"GamingState");
          local_8._0_1_ = 8;
          (**(code **)(*(int *)in_ECX + 0x780))();
          local_8 = CONCAT31(local_8._1_3_,1);
          FString::~FString(local_50);
          goto LAB_10172816;
        }
        iVar3 = ParseCommand(&local_1c,(ushort *)L"ShowGMWindow");
        if (iVar3 != 0) {
          iVar3 = FUN_1014dd00();
          if ((((iVar3 != 0) && (0 < *(int *)(iVar3 + 0x250))) && (*(int *)(iVar3 + 0x250) < 7)) ||
             (*(int *)GIsOnlyL2Console_exref != 0)) {
            FUN_1013de80();
          }
          goto LAB_10172816;
        }
        iVar3 = ParseCommand(&local_1c,(ushort *)L"ShowGMPetitionWindow");
        if (iVar3 != 0) {
          iVar3 = FUN_1014dd00();
          if (((iVar3 == 0) || (iVar3 = FUN_1014dd00(), *(int *)(iVar3 + 0x250) < 1)) ||
             (iVar3 = FUN_1014dd00(), 6 < *(int *)(iVar3 + 0x250))) goto LAB_10172816;
          (**(code **)(**(int **)(*(int *)(in_ECX + 0x50ac) + 0x214) + 0x138))();
          iVar3 = **(int **)(*(int *)(in_ECX + 0x50ac) + 0x214);
          goto LAB_1017280a;
        }
        iVar3 = ParseCommand(&local_1c,(ushort *)L"RequestOpenMinimap");
        if (iVar3 != 0) {
          L2ParamStack::L2ParamStack(local_78,10);
          local_8._0_1_ = 9;
          FUN_10143b30();
          local_8 = CONCAT31(local_8._1_3_,1);
          L2ParamStack::~L2ParamStack(local_78);
          goto LAB_10172816;
        }
        iVar3 = ParseCommand(&local_1c,(ushort *)L"ShowPartyBuff");
        if (iVar3 != 0) {
          FUN_10165d00();
          goto LAB_10172816;
        }
        iVar3 = ParseCommand(&local_1c,(ushort *)L"ApplyMinFrame");
        if (iVar3 != 0) {
          local_30 = &stack0xffffff5c;
          FString::FString((FString *)&stack0xffffff5c,(ushort *)L"ISKEEPMINFRAMERATE");
          local_8._0_1_ = 10;
          local_2c = &stack0xffffff50;
          FString::FString((FString *)&stack0xffffff50,(ushort *)L"Video");
          local_8._0_1_ = 1;
          FUN_10042370();
          if (local_34 == 0.0) {
            FUN_10170650();
            local_30 = &stack0xffffff5c;
            FString::FString((FString *)&stack0xffffff5c,(ushort *)L"ISKEEPMINFRAMERATE");
            local_8._0_1_ = 0xe;
            local_2c = &stack0xffffff50;
            FString::FString((FString *)&stack0xffffff50,(ushort *)L"Video");
          }
          else {
            FUN_10170650();
            local_30 = &stack0xffffff5c;
            FString::FString((FString *)&stack0xffffff5c,(ushort *)L"ISKEEPMINFRAMERATE");
            local_8._0_1_ = 0xc;
            local_2c = &stack0xffffff50;
            FString::FString((FString *)&stack0xffffff50,(ushort *)L"Video");
          }
          local_8._0_1_ = 1;
          FUN_10041d80();
          FString::FString(local_50,(ushort *)&DAT_1022f9f8);
          local_8._0_1_ = 0x10;
LAB_10172cee:
          FUN_10005c30();
          FUN_100d1790();
          local_8 = CONCAT31(local_8._1_3_,1);
          FString::~FString(local_50);
          goto LAB_10172816;
        }
        iVar3 = ParseCommand(&local_1c,(ushort *)L"ShowMessengerWindow");
        if (iVar3 != 0) {
          if (DAT_10350f6c != 0) {
            FUN_1013c9e0();
          }
          goto LAB_10172816;
        }
        iVar3 = ParseCommand(&local_1c,(ushort *)L"ShowMacroListWindow");
        if (iVar3 != 0) {
          FUN_1013ddd0();
          goto LAB_10172816;
        }
        iVar3 = ParseCommand(&local_1c,(ushort *)L"SetShortcutPage");
        if (iVar3 != 0) {
          local_2c = (undefined1 *)0xffffffff;
          Parse(local_1c,(ushort *)L"Num=",(int *)&local_2c);
          FUN_10047070();
          goto LAB_10172816;
        }
        iVar3 = ParseCommand(&local_1c,(ushort *)L"EventMatchToggleTargetName");
        if (iVar3 == 0) {
          iVar3 = ParseCommand(&local_1c,(ushort *)L"EulaWndOKButton");
          if (iVar3 == 0) {
            iVar3 = ParseCommand(&local_1c,(ushort *)L"ChinaWarnMsgOKButton");
            if (iVar3 == 0) {
              iVar3 = ParseCommand(&local_1c,(ushort *)L"ServerSelectOKButton");
              if (iVar3 != 0) {
                iVar3 = (**(code **)(**(int **)(*(int *)(*(int *)(in_ECX + 0x50ac) + 0x1d0) + 0x1cc)
                                    + 0xfc))();
                if (iVar3 != 0) {
                  (**(code **)(**(int **)(*(int *)(*(int *)(in_ECX + 0x50ac) + 0x1d0) + 0x1cc) + 500
                              ))();
                }
                goto LAB_10172816;
              }
              iVar3 = ParseCommand(&local_1c,(ushort *)L"ShowShortcutWnd");
              if (iVar3 == 0) {
                iVar3 = ParseCommand(&local_1c,(ushort *)L"ShowOptionWindow");
                if (iVar3 == 0) {
                  iVar3 = ParseCommand(&local_1c,(ushort *)L"ShowWindow");
                  if (iVar3 == 0) {
                    iVar3 = ParseCommand(&local_1c,(ushort *)L"Perspective");
                    if (iVar3 == 0) {
                      iVar3 = ParseCommand(&local_1c,(ushort *)L"CameraSpeed");
                      if (iVar3 == 0) {
                        iVar3 = ParseCommand(&local_1c,(ushort *)L"CAMERAVIEWHEIGHTADJUST");
                        if (iVar3 == 0) {
                          local_3c[1] = 0xffffffff;
                          local_3c[0] = -1;
                          FString::FString(local_84,local_1c);
                          local_8._0_1_ = 0x20;
                          FString::FString(local_74," ");
                          local_8._0_1_ = 0x21;
                          FString::InStr((FString *)&stack0x00000010,local_74,0);
                          pFVar4 = (FString *)
                                   FString::Left((FString *)&stack0x00000010,(int)local_68);
                          local_8._0_1_ = 0x22;
                          FString::operator=(local_84,pFVar4);
                          local_8._0_1_ = 0x21;
                          FString::~FString(local_68);
                          local_8._0_1_ = 0x20;
                          FString::~FString(local_74);
                          Parse(local_1c,(ushort *)L"nParam1=",local_3c + 1);
                          Parse(local_1c,(ushort *)L"nParam2=",local_3c);
                          FUN_1003f970();
                          local_8._0_1_ = 0x23;
                          FString::FString(local_68,local_1c);
                          local_8._0_1_ = 0x24;
                          FString::FString(local_74,(ushort *)L"Command");
                          local_8._0_1_ = 0x25;
                          FUN_10040230();
                          local_8._0_1_ = 0x24;
                          FString::~FString(local_74);
                          local_8._0_1_ = 0x23;
                          FString::~FString(local_68);
                          FString::FString(local_74,(ushort *)L"Param1");
                          local_8._0_1_ = 0x26;
                          FUN_10040090();
                          local_8._0_1_ = 0x23;
                          FString::~FString(local_74);
                          FString::FString(local_74,(ushort *)L"Param2");
                          local_8._0_1_ = 0x27;
                          FUN_10040090();
                          local_8._0_1_ = 0x23;
                          FString::~FString(local_74);
                          FUN_10005c30();
                          FUN_100d1790();
                          local_8._0_1_ = 0x20;
                          FUN_1003fff0();
                          local_8 = CONCAT31(local_8._1_3_,1);
                          FString::~FString(local_84);
                        }
                        else {
                          iVar3 = **(int **)(*(int *)(*(int *)(DAT_103663bc + 0x50) + 0x54) + 0x38);
                          if (*(int *)(iVar3 + 0x3c) != 0) {
                            pUVar8 = ALineagePlayerController::StaticClass();
                            iVar9 = UObject::IsA(*(UObject **)(iVar3 + 0x3c),pUVar8);
                            if (iVar9 != 0) {
                              iVar3 = *(int *)(iVar3 + 0x3c);
                              local_34 = 2.0;
                              Parse(local_1c,(ushort *)L"SPEED=",&local_34);
                              *(float *)(iVar3 + 0x95c) = *(float *)(iVar3 + 0x95c) + local_34;
                            }
                          }
                        }
                      }
                      else {
                        iVar3 = **(int **)(*(int *)(*(int *)(DAT_103663bc + 0x50) + 0x54) + 0x38);
                        if (*(int *)(iVar3 + 0x3c) != 0) {
                          pUVar8 = ALineagePlayerController::StaticClass();
                          iVar9 = UObject::IsA(*(UObject **)(iVar3 + 0x3c),pUVar8);
                          if (iVar9 != 0) {
                            iVar3 = *(int *)(iVar3 + 0x3c);
                            local_30 = (undefined1 *)0x0;
                            Parse(local_1c,(ushort *)L"SPEED=",(float *)&local_30);
                            *(float *)(iVar3 + 0xa98) = *(float *)(iVar3 + 0xa98) + (float)local_30;
                          }
                        }
                      }
                    }
                    else {
                      iVar3 = **(int **)(*(int *)(*(int *)(DAT_103663bc + 0x50) + 0x54) + 0x38);
                      if (*(int *)(iVar3 + 0x3c) != 0) {
                        pUVar8 = APlayerController::StaticClass();
                        iVar9 = UObject::IsA(*(UObject **)(iVar3 + 0x3c),pUVar8);
                        if (iVar9 != 0) {
                          iVar3 = *(int *)(iVar3 + 0x3c);
                          local_20 = 1.0;
                          Parse(local_1c,(ushort *)L"SPEED=",&local_20);
                          fVar1 = *(float *)(iVar3 + 0x3c8) + local_20;
                          *(float *)(iVar3 + 0x3c8) = fVar1;
                          if (fVar1 == 0.0) {
                            *(undefined4 *)(iVar3 + 0x3c8) = 0x40a00000;
                          }
                          fVar1 = local_20 + *(float *)(iVar3 + 0x5f4);
                          *(float *)(iVar3 + 0x5f4) = fVar1;
                          if (fVar1 == 0.0) {
                            *(undefined4 *)(iVar3 + 0x5f4) = 0x40a00000;
                          }
                          local_34 = local_20 + *(float *)(iVar3 + 0x5f8);
                          *(float *)(iVar3 + 0x5f8) = local_34;
                          if (local_34 == 0.0) {
                            *(undefined4 *)(iVar3 + 0x5f8) = 0x40a00000;
                          }
                        }
                      }
                    }
                  }
                  else {
                    FUN_1003f970();
                    local_8._0_1_ = 0x12;
                    FString::FString(local_68,(ushort *)L"MsgType");
                    local_8._0_1_ = 0x13;
                    FUN_10040090();
                    local_8._0_1_ = 0x12;
                    FString::~FString(local_68);
                    FString::FString(local_68,(ushort *)L"MsgNo");
                    local_8._0_1_ = 0x14;
                    FUN_10040090();
                    local_8._0_1_ = 0x12;
                    FString::~FString(local_68);
                    FString::FString(local_68,(ushort *)L"WindowType");
                    local_8._0_1_ = 0x15;
                    FUN_10040090();
                    local_8._0_1_ = 0x12;
                    FString::~FString(local_68);
                    FString::FString(local_68,(ushort *)L"FontSize");
                    local_8._0_1_ = 0x16;
                    FUN_10040090();
                    local_8._0_1_ = 0x12;
                    FString::~FString(local_68);
                    FString::FString(local_68,(ushort *)L"FontType");
                    local_8._0_1_ = 0x17;
                    FUN_10040090();
                    local_8._0_1_ = 0x12;
                    FString::~FString(local_68);
                    FString::FString(local_68,(ushort *)L"MsgColor");
                    local_8._0_1_ = 0x18;
                    FUN_10040090();
                    local_8._0_1_ = 0x12;
                    FString::~FString(local_68);
                    FString::FString(local_68,(ushort *)L"ShadowType");
                    local_8._0_1_ = 0x19;
                    FUN_10040090();
                    local_8._0_1_ = 0x12;
                    FString::~FString(local_68);
                    FString::FString(local_68,(ushort *)L"BackgroundType");
                    local_8._0_1_ = 0x1a;
                    FUN_10040090();
                    local_8._0_1_ = 0x12;
                    FString::~FString(local_68);
                    FString::FString(local_68,(ushort *)L"LifeTime");
                    local_8._0_1_ = 0x1b;
                    FUN_10040090();
                    local_8._0_1_ = 0x12;
                    FString::~FString(local_68);
                    FString::FString(local_68,(ushort *)L"AnimationType");
                    local_8._0_1_ = 0x1c;
                    FUN_10040090();
                    local_8._0_1_ = 0x12;
                    FString::~FString(local_68);
                    FString::FString(local_74,(ushort *)L"hahaha");
                    local_8._0_1_ = 0x1d;
                    FString::FString(local_68,(ushort *)&DAT_1027c6f8);
                    local_8._0_1_ = 0x1e;
                    FUN_10040230();
                    local_8._0_1_ = 0x1d;
                    FString::~FString(local_68);
                    local_8 = CONCAT31(local_8._1_3_,0x12);
                    FString::~FString(local_74);
                    iVar3 = FUN_10005c30();
                    if (iVar3 != 0) {
                      FUN_10005c30();
                      FUN_100d1790();
                    }
                    FString::FString(local_74,local_1c);
                    local_8._0_1_ = 0x1f;
                    (**(code **)(*(int *)in_ECX + 0x778))();
                    piVar6 = (int *)FUN_10010290();
                    local_8._0_1_ = 0x12;
                    FString::~FString(local_74);
                    if (piVar6 != (int *)0x0) {
                      iVar3 = (**(code **)(*piVar6 + 0xfc))();
                      if (iVar3 != 0) {
                        (**(code **)(*piVar6 + 0x13c))();
                        local_8 = CONCAT31(local_8._1_3_,1);
                        FUN_1003fff0();
                        goto LAB_10172816;
                      }
                      (**(code **)(*piVar6 + 0x138))();
                      (**(code **)(*piVar6 + 0x78))();
                    }
                    local_8 = CONCAT31(local_8._1_3_,1);
                    FUN_1003fff0();
                  }
                }
                else {
                  FUN_1013dcd0();
                }
                goto LAB_10172816;
              }
              FString::FString(local_50,(ushort *)&DAT_1022f9f8);
              local_8._0_1_ = 0x11;
              goto LAB_10172cee;
            }
            iVar3 = (**(code **)(**(int **)(*(int *)(in_ECX + 0x50ac) + 0x1ec) + 0xfc))();
            if (iVar3 == 0) goto LAB_10172816;
            FUN_1014ed50();
            pcVar7 = *(code **)(**(int **)(*(int *)(in_ECX + 0x50ac) + 0x1ec) + 500);
          }
          else {
            iVar3 = (**(code **)(**(int **)(*(int *)(in_ECX + 0x50ac) + 0x1e8) + 0xfc))();
            if (iVar3 == 0) goto LAB_10172816;
            FUN_1014ed50();
            pcVar7 = *(code **)(**(int **)(*(int *)(in_ECX + 0x50ac) + 0x1e8) + 500);
          }
        }
        else {
          piVar6 = (int *)FUN_1014b6a0();
          pcVar7 = *(code **)(*piVar6 + 0x140);
        }
      }
      else {
        FString::FString(local_50,(ushort *)L"QuestTreeWnd");
        local_8._0_1_ = 7;
        FUN_10005c30();
        piVar6 = (int *)FUN_100d0cb0();
        local_8 = CONCAT31(local_8._1_3_,1);
        FString::~FString(local_50);
        if (piVar6 == (int *)0x0) goto LAB_10172816;
        iVar3 = (**(code **)(*piVar6 + 0xfc))();
        if (iVar3 != 0) {
          pcVar7 = *(code **)(*piVar6 + 0x13c);
          goto LAB_1017280d;
        }
        (**(code **)(*piVar6 + 0x138))();
        iVar3 = *piVar6;
LAB_1017280a:
        pcVar7 = *(code **)(iVar3 + 0x78);
      }
LAB_1017280d:
      (*pcVar7)();
      goto LAB_10172816;
    }
  }
  else {
    LVar5 = UL2ConsoleWnd::GetState(in_ECX);
    if (LVar5 != 5) goto LAB_10172816;
    if (((DAT_1036c674 != 0) && (*(int *)(DAT_1036c674 + 4) != 0)) &&
       ((iVar3 = FUN_10057a20(), iVar3 != 0 || (iVar3 = FUN_10057aa0(), iVar3 != 0)))) {
      local_8 = 0xffffffff;
      FUN_10048880();
      ExceptionList = local_10;
      return 0;
    }
  }
  FUN_1013dac0();
LAB_10172816:
  local_8 = 0xffffffff;
  FUN_10048880();
  ExceptionList = local_10;
  return 1;
}


// ==== 10173361 Catch@10173361

void Catch_10173361(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x3c) = *(undefined4 *)(unaff_EBP + -0x40);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x3c,&DAT_102a47f0);
}


// ==== 10173375 Catch@10173375

void Catch_10173375(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NConsoleWnd::ExecuteShortcutCommand");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101733a0 FUN_101733a0

void FUN_101733a0(void)

{
  uint uVar1;
  UObject *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_102125d5;
  local_c = ExceptionList;
  uVar1 = DAT_103554c4 ^ (uint)&stack0xffffffe8;
  ExceptionList = &local_c;
  *(undefined ***)in_ECX = NConsoleWnd::vftable;
  *(undefined ***)(in_ECX + 0x34) = NConsoleWnd::vftable;
  local_4 = 6;
  UObject::ConditionalDestroy(in_ECX);
  local_4._0_1_ = 5;
  FUN_10052740(uVar1);
  local_4._0_1_ = 4;
  FUN_10002520();
  local_4._0_1_ = 3;
  FUN_10002520();
  local_4._0_1_ = 2;
  FUN_10169f00();
  local_4._0_1_ = 1;
  FUN_1016ede0();
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_10070a00();
  local_4 = 0xffffffff;
  UL2ConsoleWnd::~UL2ConsoleWnd((UL2ConsoleWnd *)in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 10173480 FUN_10173480

void FUN_10173480(byte param_1)

{
  void *in_ECX;
  
  FUN_101733a0();
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x5188);
  }
  return;
}


// ==== 101734b0 FUN_101734b0

void FUN_101734b0(byte param_1)

{
  FUN_10171200();
  if ((param_1 & 1) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))();
  }
  return;
}


// ==== 101734e0 FUN_101734e0

undefined4 FUN_101734e0(int param_1)

{
  SHORT SVar1;
  FString *pFVar2;
  int iVar3;
  int *in_ECX;
  uint uVar4;
  int *piVar5;
  int iVar6;
  int iStack_a0;
  int iStack_9c;
  undefined4 uStack_94;
  undefined4 uStack_90;
  uint uStack_88;
  undefined1 local_78 [12];
  FString local_6c [12];
  undefined1 auStack_60 [12];
  FString local_54 [12];
  FString local_48 [12];
  FString local_3c [16];
  undefined1 *local_2c;
  undefined4 local_24;
  uint local_20;
  int local_1c;
  char local_15;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_10212671;
  local_10 = ExceptionList;
  uStack_88 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_88;
  iVar6 = 0;
  local_20 = 0;
  local_8 = 0;
  if (param_1 == 0x12) {
    return 0;
  }
  if (param_1 == 0x10) {
    return 0;
  }
  if (param_1 == 0x11) {
    return 0;
  }
  local_24 = 0;
  local_1c = 0;
  uStack_90 = 0x10173541;
  ExceptionList = &local_10;
  SVar1 = GetAsyncKeyState(0x12);
  if (SVar1 < 0) {
    iVar6 = 0x12;
    local_24 = 0x12;
  }
  else {
    uStack_90 = 0x10173563;
    pFVar2 = (FString *)(**(code **)(*in_ECX + 0x784))();
    local_8 = CONCAT31(local_8._1_3_,1);
    uVar4 = 1;
    local_20 = 1;
    uStack_90 = 0x1017357c;
    iVar3 = FString::operator==(pFVar2,(ushort *)L"GAMINGSTATE");
    if (iVar3 == 0) {
      uStack_90 = 0x10173590;
      pFVar2 = (FString *)(**(code **)(*in_ECX + 0x784))();
      local_8 = 2;
      uVar4 = 3;
      local_20 = 3;
      uStack_90 = 0x101735ac;
      iVar3 = FString::operator==(pFVar2,(ushort *)L"OLYMPIADOBSERVERSTATE");
      local_15 = '\0';
      if (iVar3 != 0) goto LAB_101735b4;
    }
    else {
LAB_101735b4:
      local_15 = '\x01';
    }
    local_8 = 1;
    if ((uVar4 & 2) != 0) {
      uVar4 = uVar4 & 0xfffffffd;
      local_20 = uVar4;
      FString::~FString(local_48);
    }
    local_8 = 0;
    if ((uVar4 & 1) != 0) {
      local_20 = uVar4 & 0xfffffffe;
      FString::~FString(local_54);
    }
    if (local_15 == '\0') {
      uStack_90 = 0x101736c7;
      pFVar2 = (FString *)(**(code **)(*in_ECX + 0x784))();
      local_8._0_1_ = 4;
      uStack_90 = 0x101736d8;
      iVar3 = FString::operator==(pFVar2,(ushort *)L"LOGINSTATE");
      local_8 = (uint)local_8._1_3_ << 8;
      FString::~FString(local_54);
      if (iVar3 != 0) {
        piVar5 = (int *)0x0;
        if (DAT_1036c674 != 0) {
          uStack_90 = 0x101736ff;
          piVar5 = (int *)FUN_10010290();
        }
        uStack_90 = 0x1017370d;
        iVar3 = FUN_100624e0();
        if (iVar3 != 0) {
          if ((piVar5 != (int *)0x0) && (iVar3 = (**(code **)(*piVar5 + 0x88))(), iVar3 != 0)) {
            uStack_90 = 0x10173736;
            iVar3 = (**(code **)(*piVar5 + 0xfc))();
            if (iVar3 != 0) {
              ExceptionList = local_10;
              return 0;
            }
          }
          (**(code **)(**(int **)(*(int *)(in_ECX[0x142b] + 0x1dc) + 0x1e0) + 0x78))();
        }
      }
    }
    else {
      piVar5 = (int *)0x0;
      if (DAT_1036c674 != 0) {
        uStack_90 = 0x1017360c;
        piVar5 = (int *)FUN_10010290();
      }
      uStack_90 = 0x1017361a;
      iVar3 = FUN_100624e0();
      if (iVar3 != 0) {
        if (piVar5 != (int *)0x0) {
          uStack_90 = 0x10173637;
          iVar3 = (**(code **)(*piVar5 + 0xfc))();
          if (iVar3 != 0) {
            iVar3 = (**(code **)(*piVar5 + 0x88))();
            if (iVar3 != 0) {
              ExceptionList = local_10;
              return 0;
            }
            uVar4 = (**(code **)(*piVar5 + 0x84))();
            if ((uVar4 & 0x20000000) != 0) {
              ExceptionList = local_10;
              return 0;
            }
          }
        }
        if (*(int *)GIsEnterChatting_exref == 0) {
          uStack_90 = 0x1017367b;
          FString::FString(local_48,(ushort *)&DAT_1022f9f8);
          local_8._0_1_ = 3;
          uStack_90 = 0x23a;
          uStack_94 = 0x1017368d;
          FUN_10005c30();
          uStack_94 = 0x10173694;
          FUN_100d1790();
          pFVar2 = local_48;
          goto LAB_1017369b;
        }
      }
    }
  }
  uStack_90 = 0x10173762;
  SVar1 = GetAsyncKeyState(0x10);
  if (SVar1 < 0) {
    if (iVar6 == 0) {
      iVar6 = 0x10;
      local_24 = 0x10;
    }
    else {
      local_1c = 0x10;
    }
  }
  uStack_90 = 0x10173784;
  SVar1 = GetAsyncKeyState(0x11);
  if (SVar1 < 0) {
    if (iVar6 == 0) {
      iVar6 = 0x11;
      local_24 = 0x11;
    }
    else if (local_1c == 0) {
      local_1c = 0x11;
    }
  }
  iVar3 = FUN_1014e820();
  if ((((iVar3 != 0) && (param_1 == 9)) && (iVar6 == 0x10)) && (local_1c == 0x11)) {
    (**(code **)(**(int **)(in_ECX[0x142b] + 0x1cc) + 0x138))();
    (**(code **)(**(int **)(in_ECX[0x142b] + 0x1cc) + 0x78))();
  }
  uStack_90 = 0x101737f7;
  FUN_1014ad10();
  local_8._0_1_ = 5;
  local_2c = (undefined1 *)&uStack_94;
  iStack_9c = 0x1017380d;
  FString::FString((FString *)&uStack_94,local_3c);
  iStack_a0 = param_1;
  local_8._0_1_ = 5;
  iStack_9c = iVar6;
  FUN_10049120(local_78);
  local_8._0_1_ = 7;
  uStack_90 = 0x1017383d;
  iVar3 = FString::operator!=(local_6c,(ushort *)&DAT_1022f9f8);
  if (iVar3 != 0) {
    local_2c = (undefined1 *)&iStack_a0;
    FUN_100488e0(local_78);
    local_8._0_1_ = 7;
    iVar3 = FUN_10172350();
    if (iVar3 != 0) goto LAB_10173864;
  }
  local_2c = (undefined1 *)&uStack_94;
  iStack_9c = 0x101738a9;
  FString::FString((FString *)&uStack_94,(ushort *)&DAT_1022f9f8);
  iStack_a0 = param_1;
  local_8._0_1_ = 7;
  iStack_9c = iVar6;
  FUN_10049120(auStack_60);
  local_8._0_1_ = 10;
  uStack_90 = 0x101738d5;
  FUN_10048b60();
  local_8._0_1_ = 7;
  FUN_10048880();
  uStack_90 = 0x101738ee;
  iVar6 = FString::operator!=(local_6c,(ushort *)&DAT_1022f9f8);
  if (iVar6 != 0) {
    FUN_100488e0(local_78);
    local_8._0_1_ = 7;
    iVar6 = FUN_10172350();
    if (iVar6 != 0) {
LAB_10173864:
      local_8._0_1_ = 5;
      FUN_10048880();
      local_8 = (uint)local_8._1_3_ << 8;
      FString::~FString(local_3c);
      ExceptionList = local_10;
      return 1;
    }
  }
  local_8._0_1_ = 5;
  FUN_10048880();
  pFVar2 = local_3c;
LAB_1017369b:
  local_8 = (uint)local_8._1_3_ << 8;
  FString::~FString(pFVar2);
  ExceptionList = local_10;
  return 0;
}


// ==== 10173896 FUN_10173896

undefined4 FUN_10173896(void)

{
  int iVar1;
  undefined1 unaff_BL;
  int unaff_EBP;
  undefined4 uStack_18;
  FString aFStack_c [4];
  undefined4 uStack_8;
  
  *(FString **)(unaff_EBP + -0x28) = aFStack_c;
  FString::FString(aFStack_c,(ushort *)&DAT_1022f9f8);
  *(undefined1 *)(unaff_EBP + -4) = 9;
  uStack_18 = *(undefined4 *)(unaff_EBP + 8);
  *(undefined1 *)(unaff_EBP + -4) = unaff_BL;
  FUN_10049120(unaff_EBP + -0x5c);
  *(undefined1 *)(unaff_EBP + -4) = 10;
  uStack_8 = 0x101738d5;
  FUN_10048b60();
  *(undefined1 *)(unaff_EBP + -4) = unaff_BL;
  FUN_10048880();
  uStack_8 = 0x101738ee;
  iVar1 = FString::operator!=((FString *)(unaff_EBP + -0x68),(ushort *)&DAT_1022f9f8);
  if (iVar1 != 0) {
    *(undefined4 **)(unaff_EBP + 8) = &uStack_18;
    FUN_100488e0(unaff_EBP + -0x74);
    *(undefined1 *)(unaff_EBP + -4) = 0xb;
    *(undefined1 *)(unaff_EBP + -4) = unaff_BL;
    iVar1 = FUN_10172350();
    if (iVar1 != 0) {
      *(undefined1 *)(unaff_EBP + -4) = 5;
      FUN_10048880();
      *(undefined1 *)(unaff_EBP + -4) = 0;
      FString::~FString((FString *)(unaff_EBP + -0x38));
      ExceptionList = *(void **)(unaff_EBP + -0xc);
      return 1;
    }
  }
  *(undefined1 *)(unaff_EBP + -4) = 5;
  FUN_10048880();
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FString::~FString((FString *)(unaff_EBP + -0x38));
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return 0;
}


// ==== 10173931 Catch@10173931

void Catch_10173931(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x24) = *(undefined4 *)(unaff_EBP + -0x2c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x24,&DAT_102a47f0);
}


// ==== 10173945 Catch@10173945

void Catch_10173945(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NConsoleWnd::HandleKeyboardInput");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10173970 FUN_10173970

undefined4 FUN_10173970(uint param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  short sVar3;
  undefined4 uVar4;
  uint uStack_44;
  L2ParamStack local_34 [28];
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_10212699;
  local_10 = ExceptionList;
  uStack_44 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_44;
  ExceptionList = &local_10;
  uVar4 = 0;
  local_8 = 0;
  local_18 = 0;
  L2ParamStack::L2ParamStack(local_34,10);
  local_8._0_1_ = 1;
  if (((param_1 == 0x104) || (param_1 == 0x105)) && (param_2 == 0x79)) {
    sVar3 = (short)((uint)param_3 >> 0x10);
    if ((sVar3 == 0x44) || (sVar3 == 0x4044)) {
      param_1 = 0x100;
    }
    else {
      if (sVar3 != -0x3fbc) goto LAB_101739fb;
      param_1 = 0x101;
    }
LAB_10173a04:
    if (param_1 != 0x100) {
      if ((param_1 == 0x101) && (param_2 == 0xc0)) {
        uVar4 = 1;
        local_18 = 1;
      }
      goto LAB_10173a89;
    }
    iVar1 = FUN_101adc50();
    iVar2 = FUN_101734e0(param_2,param_3);
    if (iVar2 != 0) goto LAB_10173a67;
    if (iVar1 == 0) goto LAB_10173a89;
  }
  else {
LAB_101739fb:
    if (param_1 < 0x105) {
      if (param_1 != 0x104) goto LAB_10173a04;
      iVar1 = FUN_101734e0(param_2,param_3);
      if (iVar1 == 0) goto LAB_10173a89;
LAB_10173a67:
      uVar4 = 1;
      local_18 = 1;
      goto LAB_10173a89;
    }
    if (param_1 != 0x201) goto LAB_10173a89;
  }
  FUN_101add10();
LAB_10173a89:
  local_8 = (uint)local_8._1_3_ << 8;
  L2ParamStack::~L2ParamStack(local_34);
  ExceptionList = local_10;
  return uVar4;
}


// ==== 10173aac Catch@10173aac

void Catch_10173aac(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x1c) = *(undefined4 *)(unaff_EBP + -0x20);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x1c,&DAT_102a47f0);
}


// ==== 10173ac0 Catch@10173ac0

void Catch_10173ac0(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NConsoleWnd::HookShortCutKey");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10173ae0 FUN_10173ae0

void FUN_10173ae0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_102126c0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_101add10();
  uVar3 = 0;
  uVar2 = 0;
  iVar1 = FUN_10045740(0,0);
  FUN_10171680(param_1 + iVar1 * 0xc,uVar2,uVar3);
  ExceptionList = local_10;
  return;
}


// ==== 10173b5f Catch@10173b5f

void Catch_10173b5f(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10173b73 Catch@10173b73

void Catch_10173b73(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NConsoleWnd::UseJoyPadShortcut");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10173b90 FUN_10173b90

void FUN_10173b90(void)

{
  int iVar1;
  undefined4 uVar2;
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_102126e0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if (*(int *)(in_ECX + 0x5130) != 0) {
    for (iVar1 = 0; iVar1 < *(int *)(in_ECX + 0x50cc); iVar1 = iVar1 + 1) {
    }
    FArray::Empty((FArray *)(in_ECX + 0x50c8),0x14,0);
    DAT_103663b8 = 0;
    if (*(UUIDataManager **)(in_ECX + 0x5114) != (UUIDataManager *)0x0) {
      UUIDataManager::UIDataManagerDestroy(*(UUIDataManager **)(in_ECX + 0x5114));
    }
    if (*(int *)(in_ECX + 0x50ac) != 0) {
      iVar1 = **(int **)(in_ECX + 0x50a8);
      uVar2 = FUN_10058020();
      (**(code **)(iVar1 + 0x6c))(uVar2);
      if (*(int **)(in_ECX + 0x50ac) != (int *)0x0) {
        (**(code **)(**(int **)(in_ECX + 0x50ac) + 0xc))(1);
      }
      *(undefined4 *)(in_ECX + 0x50ac) = 0;
    }
    if (*(int *)(in_ECX + 0x50a8) != 0) {
      FUN_10070df0();
      FUN_10070e40();
      if (*(int **)(in_ECX + 0x50a8) != (int *)0x0) {
        (**(code **)(**(int **)(in_ECX + 0x50a8) + 0xc))(1);
      }
      *(undefined4 *)(in_ECX + 0x50a8) = 0;
    }
    FUN_1014ab80();
    FUN_1014ab60();
    if (*(int *)(in_ECX + 0x505c) != 0) {
      FUN_1014b490(1);
      *(undefined4 *)(in_ECX + 0x505c) = 0;
    }
    if (*(int *)(in_ECX + 0x5060) != 0) {
      FUN_1014b4c0(1);
      *(undefined4 *)(in_ECX + 0x5060) = 0;
    }
    if (*(int **)(in_ECX + 0x5064) != (int *)0x0) {
      (**(code **)(**(int **)(in_ECX + 0x5064) + 0xc))(1);
      *(undefined4 *)(in_ECX + 0x5064) = 0;
    }
    if (*(int *)(in_ECX + 0x5068) != 0) {
      FUN_1014b4f0(1);
      *(undefined4 *)(in_ECX + 0x5068) = 0;
    }
    if (*(UObject **)(in_ECX + 0x5110) != (UObject *)0x0) {
      UObject::RemoveFromRoot(*(UObject **)(in_ECX + 0x5110));
      if (*(int **)(in_ECX + 0x5110) != (int *)0x0) {
        (**(code **)(**(int **)(in_ECX + 0x5110) + 0xc))(1);
      }
      *(undefined4 *)(in_ECX + 0x5110) = 0;
    }
    if (*(int *)(in_ECX + 0x5118) != 0) {
      FUN_1014b520(1);
      *(undefined4 *)(in_ECX + 0x5118) = 0;
    }
    if (*(int *)(in_ECX + 0x511c) != 0) {
      FUN_101734b0(1);
      *(undefined4 *)(in_ECX + 0x511c) = 0;
    }
    FUN_10030b60();
    if ((*(int *)GL2UseKeyCrypt_exref != 0) && (*(int *)(in_ECX + 0x5120) != 0)) {
      FUN_10135df0();
      if (*(int *)(in_ECX + 0x5120) != 0) {
        FUN_1014b550(1);
      }
    }
    *(undefined4 *)(in_ECX + 0x5130) = 0;
  }
  ExceptionList = local_10;
  return;
}


// ==== 10173d7e Catch@10173d7e

void Catch_10173d7e(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 10173d92 Catch@10173d92

void Catch_10173d92(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NConsoleWnd::Finalize");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10173db0 FUN_10173db0

int FUN_10173db0(undefined4 param_1,int param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  L2ConsoleState LVar2;
  int *piVar3;
  UL2ConsoleWnd *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10212700;
  local_10 = ExceptionList;
  local_8 = 0;
  if (*(int *)(in_ECX + 0x5130) == 0) {
    return 0;
  }
  if (*(int *)(in_ECX + 0x50e8) != 0) {
    return 0;
  }
  ExceptionList = &local_10;
  iVar1 = (**(code **)(**(int **)(in_ECX + 0x50a8) + 0x90))();
  if ((iVar1 == 0) && ((param_2 == 0x100 || (param_2 == 0x101)))) {
    if (param_3 == 0x21) {
      ExceptionList = local_10;
      return 0;
    }
    if (param_3 == 0x22) {
      ExceptionList = local_10;
      return 0;
    }
    if (param_3 == 0x2d) {
      ExceptionList = local_10;
      return 0;
    }
    if (param_3 == 0x2c) {
      ExceptionList = local_10;
      return 0;
    }
    if ((((DAT_1036c674 == 0) || (*(int *)(DAT_1036c674 + 4) == 0)) ||
        (iVar1 = (**(code **)(**(int **)(DAT_1036c674 + 4) + 0x88))(), iVar1 == 0)) &&
       (param_3 == 0x10)) {
      ExceptionList = local_10;
      return 0;
    }
  }
  iVar1 = (**(code **)(**(int **)(in_ECX + 0x50a8) + 0x90))();
  if (((iVar1 == 0) && ((param_2 == 0x100 || (param_2 == 0x101)))) &&
     ((((param_3 == 0x25 ||
        (((param_3 == 0x27 || (param_3 == 0x26)) ||
         ((param_3 == 0x28 || (((param_3 == 200 || (param_3 == 0xc9)) || (param_3 == 0xca)))))))) ||
       ((((param_3 == 0xcb || (param_3 == 0xcc)) || (param_3 == 0xcd)) ||
        ((((param_3 == 0xce || (param_3 == 0xcf)) ||
          ((param_3 == 0xd0 || (((param_3 == 0xd1 || (param_3 == 0xd2)) || (param_3 == 0xd3)))))) ||
         ((param_3 == 0xd4 || (param_3 == 0xd5)))))))) || ((param_3 == 0xd6 || (param_3 == 0xd7)))))
     ) {
    if (DAT_1036c674 == 0) {
      ExceptionList = local_10;
      return 0;
    }
    iVar1 = (**(code **)(**(int **)(DAT_1036c674 + 4) + 0x88))();
    if (iVar1 == 0) {
      ExceptionList = local_10;
      return 0;
    }
    iVar1 = (**(code **)(**(int **)(DAT_1036c674 + 4) + 0xfc))(0);
    if (iVar1 == 0) {
      ExceptionList = local_10;
      return 0;
    }
  }
  if (((*(int *)GIsOnlyL2Console_exref != 0) ||
      ((*(int *)GL2ReplayMode_exref == 0 &&
       (iVar1 = (**(code **)(**(int **)(in_ECX + 0x50a8) + 0x90))(), iVar1 == 0)))) &&
     (iVar1 = FUN_10173970(param_2,param_3,param_4), iVar1 != 0)) {
    ExceptionList = local_10;
    return 1;
  }
  switch(param_2) {
  case 2:
  case 0x10:
  case 0x12:
    FUN_10173b90();
  case 0xf:
    ExceptionList = local_10;
    return 0;
  }
  iVar1 = FUN_100736b0(param_2,param_3,param_4);
  LVar2 = UL2ConsoleWnd::GetState(in_ECX);
  if (LVar2 == 2) {
    if (iVar1 != 0) {
      ExceptionList = local_10;
      return iVar1;
    }
  }
  else {
    if (LVar2 != 4) {
      ExceptionList = local_10;
      return iVar1;
    }
    if (iVar1 != 0) {
      ExceptionList = local_10;
      return iVar1;
    }
    if (param_2 == 0x201) {
      if (*(int *)(in_ECX + 0x50) == 0) {
        ExceptionList = local_10;
        return 1;
      }
      iVar1 = *(int *)(*(int *)(in_ECX + 0x50) + 0x244);
      if (iVar1 == 0) {
        ExceptionList = local_10;
        return 1;
      }
      piVar3 = (int *)FUN_1014acb0(iVar1);
      if (piVar3 == (int *)0x0) {
        ExceptionList = local_10;
        return 1;
      }
      (**(code **)(**(int **)(*(int *)(in_ECX + 0x50ac) + 0x1f0) + 0x174))();
      (**(code **)(**(int **)(*(int *)(*(int *)(in_ECX + 0x50ac) + 0x1f8) + 0x1d0) + 0x13c))();
      if ((*(byte *)(piVar3 + 0x5f8) & 1) == 0) {
        ExceptionList = local_10;
        return 1;
      }
      iVar1 = -1;
      if ((*(int *)(*(int *)(in_ECX + 0x50ac) + 0x1f8) != 0) &&
         (*(int *)(*(int *)(*(int *)(in_ECX + 0x50ac) + 0x1f8) + 0x1cc) != 0)) {
        iVar1 = FUN_1017d9e0();
        (**(code **)(**(int **)(*(int *)(*(int *)(in_ECX + 0x50ac) + 0x1f8) + 0x1cc) + 500))
                  (piVar3[0x5f9]);
      }
      if (iVar1 == piVar3[0x5f9]) {
        (**(code **)(*piVar3 + 0x328))(0,piVar3[0x406],piVar3[0x1ad],0x3e99999a,0,1);
        ExceptionList = local_10;
        return 1;
      }
      (**(code **)(*(int *)in_ECX + 0x5e8))(piVar3[0x5f9]);
      ExceptionList = local_10;
      return 1;
    }
    if (param_2 == 0x100) {
      if (param_3 != 0xd) {
        ExceptionList = local_10;
        return 0;
      }
      if (*(int *)(*(int *)(in_ECX + 0x50ac) + 0x1f8) == 0) {
        ExceptionList = local_10;
        return 1;
      }
      FUN_1017dd00();
      ExceptionList = local_10;
      return 1;
    }
  }
  if (param_2 == 0x204) {
    ExceptionList = local_10;
    return 1;
  }
  ExceptionList = local_10;
  return iVar1;
}


// ==== 101741a6 Catch@101741a6

void Catch_101741a6(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x1c) = *(undefined4 *)(unaff_EBP + -0x20);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x1c,&DAT_102a47f0);
}


// ==== 101741ba Catch@101741ba

void Catch_101741ba(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NConsoleWnd::DispatchWndMsgX");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10174200 FUN_10174200

undefined4 FUN_10174200(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  int in_ECX;
  int iVar3;
  uint uVar4;
  uint uStack_40;
  tagPOINT local_30 [2];
  undefined4 local_20;
  uint local_1c;
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10212720;
  local_10 = ExceptionList;
  uStack_40 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_40;
  local_8 = 0;
  local_18 = 0;
  local_20 = 0;
  local_1c = 0;
  switch(param_1) {
  case 1:
    iVar3 = (param_2 != 1) + 0x201;
    break;
  case 2:
    iVar3 = (param_2 != 1) + 0x204;
    break;
  default:
    goto switchD_10174254_caseD_3;
  case 0xe7:
    ExceptionList = &local_10;
    local_14 = (undefined1 *)&uStack_40;
    uVar1 = FUN_101c19e0();
    *(undefined4 *)(in_ECX + 0x50d4) = uVar1;
    ExceptionList = local_10;
    return 0;
  case 0xec:
  case 0xed:
    if (param_2 != 1) {
      if (param_2 != 3) {
        return 0;
      }
      if (*(int *)(in_ECX + 0x50ec) == 0) {
        return 0;
      }
      *(undefined4 *)(in_ECX + 0x50ec) = 0;
      return 1;
    }
    iVar3 = 0x20a;
    local_18 = 0x20a;
    local_20 = *(undefined4 *)(in_ECX + 0x50d4);
    ExceptionList = &local_10;
    GetCursorPos(local_30);
    uVar4 = local_30[0].y << 0x10 | local_30[0].x;
    local_1c = uVar4;
    iVar2 = FUN_10173db0(DAT_103663b8,0x20a,local_20,uVar4);
    if (iVar2 != 0) {
      *(undefined4 *)(in_ECX + 0x50ec) = 1;
      ExceptionList = local_10;
      return 1;
    }
    goto LAB_10174287;
  }
  ExceptionList = &local_10;
  local_18 = iVar3;
  local_14 = (undefined1 *)&uStack_40;
  GetCursorPos(local_30);
  uVar4 = local_30[0].y << 0x10 | local_30[0].x;
  local_1c = uVar4;
  if (iVar3 != 0) {
LAB_10174287:
    uVar1 = FUN_10173db0(DAT_103663b8,iVar3,local_20,uVar4);
    ExceptionList = local_10;
    return uVar1;
  }
switchD_10174254_caseD_3:
  ExceptionList = local_10;
  return 0;
}


// ==== 1017434e Catch@1017434e

void Catch_1017434e(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x20) = *(undefined4 *)(unaff_EBP + -0x24);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x20,&DAT_102a47f0);
}


// ==== 10174362 Catch@10174362

void Catch_10174362(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NConsoleWnd::MasterConsoleEventProcess");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10174490 FUN_10174490

void FUN_10174490(void)

{
  UObject *in_ECX;
  
  FUN_10173b90();
                    /* WARNING: Could not recover jumptable at 0x1017449b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  UObject::Destroy(in_ECX);
  return;
}


// ==== 101744b0 FUN_101744b0

void FUN_101744b0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10212740;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_10173db0(param_1,param_2,param_3,param_4);
  ExceptionList = local_10;
  return;
}


// ==== 1017450b Catch@1017450b

void Catch_1017450b(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1017451f Catch@1017451f

void Catch_1017451f(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NConsoleWnd::DispatchWndMsg");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10174540 FUN_10174540

undefined4 FUN_10174540(void)

{
  int in_ECX;
  
  if (*(int *)(in_ECX + 0x2dc) != 0) {
    *(undefined4 *)(in_ECX + 0x2dc) = 0;
  }
  FUN_10061e90();
  return 1;
}


// ==== 10174560 FUN_10174560

void FUN_10174560(undefined4 param_1)

{
  int in_ECX;
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)GSEKScreenX_exref;
  iVar2 = *(int *)GSEKScreenY_exref;
  switch(param_1) {
  case 1:
    (**(code **)(**(int **)(in_ECX + 0x2dc) + 0xc0))(0x1e,0x1e,400,0x226,0,0,3);
    return;
  case 2:
    iVar2 = 0x1e;
    goto LAB_101745c3;
  case 3:
    iVar2 = 0x1e;
    iVar1 = iVar1 + -0x1ae;
    goto LAB_1017470f;
  case 4:
    (**(code **)(**(int **)(in_ECX + 0x2dc) + 0xc0))(0x1e,iVar2 / 2 + -0x113,400,0x226,0,0,3);
    return;
  case 5:
    iVar2 = iVar2 / 2 + -0x113;
LAB_101745c3:
    (**(code **)(**(int **)(in_ECX + 0x2dc) + 0xc0))(iVar1 / 2 + -200,iVar2,400,0x226,0,0,3);
    return;
  case 6:
    (**(code **)(**(int **)(in_ECX + 0x2dc) + 0xc0))
              (iVar1 + -0x1ae,iVar2 / 2 + -0x113,400,0x226,0,0,3);
    return;
  case 7:
    iVar2 = iVar2 + -0x244;
    break;
  case 8:
    (**(code **)(**(int **)(in_ECX + 0x2dc) + 0xc0))
              (iVar1 / 2 + -200,iVar2 + -0x244,400,0x226,0,0,3);
    return;
  case 9:
    iVar2 = iVar2 + -0x244;
    iVar1 = iVar1 + -0x1ae;
    goto LAB_1017470f;
  default:
    iVar2 = 0x1e;
  }
  iVar1 = 0x1e;
LAB_1017470f:
  (**(code **)(**(int **)(in_ECX + 0x2dc) + 0xc0))(iVar1,iVar2,400,0x226,0,0,3);
  return;
}


// ==== 10174750 FUN_10174750

void FUN_10174750(void)

{
  int *in_ECX;
  
  (**(code **)(*in_ECX + 0x7c))();
  in_ECX[0xb8] = 0;
  in_ECX[0xb9] = 0;
  in_ECX[0x339] = 0;
  FUN_100214e0(2);
  return;
}


// ==== 10174780 FUN_10174780

undefined4 FUN_10174780(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int in_ECX;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 uVar8;
  
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
  iVar7 = *(int *)(in_ECX + 0x2d8);
  if (iVar7 != 0) {
    uVar8 = 0xff;
    uVar6 = 0x300;
    uVar5 = 0x400;
    uVar4 = 0;
    uVar3 = 0;
    uVar1 = FUN_101c19e0(0,0,0x400,0x300,iVar7,0xff);
    uVar2 = FUN_101c19e0(uVar1);
    FUN_10021970(0,0,uVar2,uVar1,uVar3,uVar4,uVar5,uVar6,iVar7,uVar8);
  }
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  FUN_100212e0();
  return 1;
}


// ==== 10174840 FUN_10174840

undefined4 FUN_10174840(int param_1,undefined4 param_2)

{
  int in_ECX;
  int iStack_24;
  int local_20;
  undefined4 uStack_1c;
  uint uStack_18;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10212769;
  local_c = ExceptionList;
  uStack_18 = DAT_103554c4 ^ (uint)&stack0xffffffec;
  ExceptionList = &local_c;
  if (param_1 == 0x1b) {
    FString::FString((FString *)&iStack_24,(ushort *)L"LoginState");
    local_4 = 0xffffffff;
    FUN_10070110();
    if ((((*(int *)(in_ECX + 0xce8) != 0) && (DAT_103663bc != (int *)0x0)) &&
        (DAT_103663bc[0x14] != 0)) && (*(int *)(DAT_103663bc[0x14] + 0x58) != 0)) {
      uStack_1c = 0;
      local_20 = 0x40000000;
      iStack_24 = *(int *)(in_ECX + 0xce8);
      (**(code **)(**(int **)(DAT_103663bc[0x14] + 0x58) + 0xd4))();
      (**(code **)(*DAT_103663bc + 0x600))();
      (**(code **)(**(int **)(DAT_103663bc[0x14] + 0x58) + 0x94))(*(undefined4 *)(in_ECX + 0xce0));
    }
    uStack_1c = 0x1017491a;
    FUN_10174750();
  }
  uStack_1c = param_2;
  local_20 = param_1;
  iStack_24 = 0x10174927;
  FUN_1005f3a0();
  ExceptionList = local_c;
  return 1;
}


// ==== 10174940 FUN_10174940

void FUN_10174940(void)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  FString *pFVar4;
  int in_ECX;
  int iStack_4c;
  undefined1 *local_34;
  FString local_30 [8];
  FString local_28 [4];
  FString local_24 [8];
  FString local_1c [4];
  FString local_18 [8];
  void *local_10;
  void *local_c;
  undefined1 *local_8;
  uint local_4;
  
  local_4 = 0xffffffff;
  local_8 = &LAB_102127b4;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(int *)(in_ECX + 0x2e4) = *(int *)(in_ECX + 0x2e4) + 1;
  *(undefined4 *)(in_ECX + 0x2e0) = 0;
  FString::FString(local_30);
  local_4 = 0;
  if (*(int *)(in_ECX + 0x2e4) < *(int *)(in_ECX + 0xcec)) {
    piVar1 = (int *)FUN_1000b7e0();
    *(undefined4 *)(in_ECX + 0xce4) = *(undefined4 *)(*piVar1 + 0x1c);
    iVar2 = FString::Len((FString *)(*piVar1 + 0x10));
    if (0 < iVar2) {
      FString::operator*((FString *)(*piVar1 + 0x10));
      iStack_4c = 0x101749df;
      uVar3 = FUN_1003f630();
      *(undefined4 *)(in_ECX + 0x2d8) = uVar3;
    }
    pFVar4 = (FString *)FString::FString(local_18,(ushort *)L"..\\L2Text\\");
    local_4 = CONCAT31(local_4._1_3_,1);
    iStack_4c = 0x10174a0c;
    pFVar4 = (FString *)FString::operator+(pFVar4,local_24);
    local_8._0_1_ = 2;
    iStack_4c = 0x10174a1c;
    FString::operator=((FString *)&local_34,pFVar4);
    local_8._0_1_ = 1;
    FString::~FString(local_28);
    local_8 = (undefined1 *)((uint)local_8._1_3_ << 8);
    FString::~FString(local_1c);
    FString::operator*((FString *)&local_34);
    iStack_4c = 0x10174a50;
    FUN_10088300();
    iStack_4c = 0x10174a5d;
    FUN_10174560();
  }
  else {
    local_34 = (undefined1 *)&iStack_4c;
    FString::FString((FString *)&iStack_4c,(ushort *)L"LoginState");
    local_4 = local_4 & 0xffffff00;
    FUN_10070110();
    if ((((*(int *)(in_ECX + 0xce8) != 0) && (DAT_103663bc != (int *)0x0)) &&
        (DAT_103663bc[0x14] != 0)) && (*(int *)(DAT_103663bc[0x14] + 0x58) != 0)) {
      iStack_4c = *(int *)(in_ECX + 0xce8);
      (**(code **)(**(int **)(DAT_103663bc[0x14] + 0x58) + 0xd4))();
      (**(code **)(*DAT_103663bc + 0x600))();
      (**(code **)(**(int **)(DAT_103663bc[0x14] + 0x58) + 0x94))(*(undefined4 *)(in_ECX + 0xce0));
    }
    FUN_10174750();
  }
  local_8 = (undefined1 *)0xffffffff;
  FString::~FString((FString *)&local_34);
  ExceptionList = local_10;
  return;
}


// ==== 10174b30 FUN_10174b30

undefined4 FUN_10174b30(void)

{
  int iVar1;
  int *in_ECX;
  
  iVar1 = (**(code **)(*in_ECX + 0xfc))(0);
  if (iVar1 != 0) {
    FUN_10174940();
  }
  return 1;
}


// ==== 10174b60 FUN_10174b60

void FUN_10174b60(float param_1)

{
  int iVar1;
  int *in_ECX;
  FString aFStack_34 [12];
  undefined4 uStack_28;
  undefined4 uStack_24;
  int iStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  uint uStack_14;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_102127d9;
  local_c = ExceptionList;
  uStack_14 = DAT_103554c4 ^ (uint)&stack0xfffffff0;
  ExceptionList = &local_c;
  in_ECX[0xb8] = (int)(param_1 + (float)in_ECX[0xb8]);
  if (((DAT_103663bc != 0) && (*(int *)(DAT_103663bc + 0x50) != 0)) &&
     (*(int *)(*(int *)(DAT_103663bc + 0x50) + 0x58) != 0)) {
    uStack_18 = 0x10174bc6;
    iVar1 = (**(code **)(**(int **)(*(int *)(DAT_103663bc + 0x50) + 0x58) + 0xb8))();
    if (iVar1 == 0) {
      uStack_18 = 0;
      uStack_1c = 0x10174bdc;
      iVar1 = (**(code **)(*in_ECX + 0xfc))();
      if (iVar1 != 0) {
        if (in_ECX[0x33a] != 0) {
          uStack_18 = 0;
          uStack_1c = 0;
          uStack_24 = 0x10174c0d;
          iStack_20 = in_ECX[0x33a];
          (**(code **)(**(int **)(*(int *)(DAT_103663bc + 0x50) + 0x58) + 0xd4))();
        }
        uStack_18 = 0x10174c13;
        iVar1 = appRand();
        uStack_18 = 0;
        uStack_1c = 0x3f800000;
        iStack_20 = 0;
        uStack_24 = 0;
        uStack_28 = 0x3fc00000;
        FString::FString(aFStack_34,(ushort *)((iVar1 % 5) * 0x1fe + 0x2e8 + (int)in_ECX));
        uStack_4 = 0xffffffff;
        iVar1 = (**(code **)(**(int **)(*(int *)(DAT_103663bc + 0x50) + 0x58) + 0xd0))();
        in_ECX[0x33a] = iVar1;
      }
    }
  }
  if ((float)in_ECX[0x339] < (float)in_ECX[0xb8]) {
    uStack_18 = 0x10174c95;
    FUN_10174940();
  }
  ExceptionList = local_c;
  return;
}


// ==== 10174cb0 FUN_10174cb0

void FUN_10174cb0(void)

{
  int *piVar1;
  int iVar2;
  ushort *puVar3;
  FString *pFVar4;
  int in_ECX;
  undefined4 uVar5;
  undefined4 local_34;
  FString local_30 [8];
  FString local_28 [4];
  FString local_24 [8];
  FString local_1c [4];
  FString local_18 [8];
  void *pvStack_10;
  void *local_c;
  undefined1 *local_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  local_8 = &LAB_1021281b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_100214c0(2,L"L2UI.CreditWnd.CreditFont",L"CreditFont.gly",
               DAT_103554c4 ^ (uint)&stack0xffffffc4);
  local_34 = 0;
  piVar1 = (int *)FUN_1000b7e0(&local_34);
  if (piVar1 != (int *)0x0) {
    FString::FString(local_30);
    local_4 = 0;
    FUN_10174560(*(undefined4 *)(*piVar1 + 0x20));
    *(undefined4 *)(in_ECX + 0xce4) = *(undefined4 *)(*piVar1 + 0x1c);
    iVar2 = FString::Len((FString *)(*piVar1 + 0x10));
    if (0 < iVar2) {
      uVar5 = 1;
      puVar3 = FString::operator*((FString *)(*piVar1 + 0x10));
      uVar5 = FUN_1003f630(puVar3,uVar5);
      *(undefined4 *)(in_ECX + 0x2d8) = uVar5;
    }
    pFVar4 = (FString *)FString::FString(local_18,(ushort *)L"..\\L2Text\\");
    local_4 = CONCAT31(local_4._1_3_,1);
    pFVar4 = (FString *)FString::operator+(pFVar4,local_24);
    local_8._0_1_ = 2;
    FString::operator=((FString *)&local_34,pFVar4);
    local_8._0_1_ = 1;
    FString::~FString(local_28);
    local_8 = (undefined1 *)((uint)local_8._1_3_ << 8);
    FString::~FString(local_1c);
    puVar3 = FString::operator*((FString *)&local_34);
    FUN_10088300(puVar3);
    if (((DAT_103663bc != 0) && (*(int *)(DAT_103663bc + 0x50) != 0)) &&
       (*(int *)(*(int *)(DAT_103663bc + 0x50) + 0x58) != 0)) {
      (**(code **)(**(int **)(*(int *)(DAT_103663bc + 0x50) + 0x58) + 0xd8))(0,0);
    }
    local_8 = (undefined1 *)0xffffffff;
    FString::~FString((FString *)&local_34);
  }
  ExceptionList = pvStack_10;
  return;
}


// ==== 10174e30 FUN_10174e30

void FUN_10174e30(void)

{
  uint *puVar1;
  undefined4 uVar2;
  int *piVar3;
  int in_ECX;
  float10 fVar4;
  uint uStack_38;
  FString local_28 [20];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_10212849;
  local_10 = ExceptionList;
  uStack_38 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_38;
  ExceptionList = &local_10;
  local_8 = 0;
  puVar1 = &uStack_38;
  if (((DAT_103663bc != (int *)0x0) && (puVar1 = &uStack_38, DAT_103663bc[0x14] != 0)) &&
     (puVar1 = &uStack_38, *(int *)(DAT_103663bc[0x14] + 0x58) != 0)) {
    FString::FString(local_28,(ushort *)L"OptionWnd");
    local_8._0_1_ = 1;
    uVar2 = (**(code **)(*DAT_103663bc + 0x778))(local_28);
    piVar3 = (int *)FUN_10010290(uVar2);
    local_8 = (uint)local_8._1_3_ << 8;
    FString::~FString(local_28);
    if (piVar3 != (int *)0x0) {
      (**(code **)(*piVar3 + 0x13c))();
    }
    puVar1 = (uint *)local_14;
    if (*(int *)(DAT_103663bc[0x14] + 0x58) != 0) {
      fVar4 = (float10)(**(code **)(**(int **)(DAT_103663bc[0x14] + 0x58) + 0xa8))();
      *(float *)(in_ECX + 0xce0) = (float)fVar4;
      (**(code **)(**(int **)(DAT_103663bc[0x14] + 0x58) + 0x94))(0);
      puVar1 = (uint *)local_14;
    }
  }
  local_14 = (undefined1 *)puVar1;
  FUN_1005fe50();
  ExceptionList = local_10;
  return;
}


// ==== 10174f36 Catch@10174f36

void Catch_10174f36(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10174f4a Catch@10174f4a

void Catch_10174f4a(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCCreditWnd::ShowWindow");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10174f70 FUN_10174f70

undefined4 FUN_10174f70(void)

{
  undefined8 uVar1;
  uint uVar2;
  UPackage *pUVar3;
  UObject *pUVar4;
  int *piVar5;
  undefined4 uVar6;
  int iVar7;
  int in_ECX;
  int iVar8;
  wchar_t *pwVar9;
  void *unaff_EBP;
  ushort *puVar10;
  undefined4 local_20 [5];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_10212878;
  local_c = ExceptionList;
  uVar2 = DAT_103554c4 ^ (uint)&stack0xffffffd0;
  ExceptionList = &local_c;
  FName::FName((FName *)local_20,0);
  pUVar3 = UObject::GetTransientPackage();
  pUVar4 = UObject::StaticAllocateObject
                     (&DAT_1036eff0,pUVar3,local_20[0],0,0,*(undefined4 *)GError_exref,0,0,uVar2);
  if (pUVar4 == (UObject *)0x0) {
    piVar5 = (int *)0x0;
  }
  else {
    piVar5 = (int *)FUN_10089b60(2);
  }
  *(int **)(in_ECX + 0x2dc) = piVar5;
  (**(code **)(*piVar5 + 0xc0))(0x1e,0x1e,400,0x226,0,0,3);
  uVar6 = FUN_10060d40(*(undefined4 *)(in_ECX + 0x2dc),2);
  FUN_1005c1e0(uVar6);
  (**(code **)(**(int **)(in_ECX + 0x2dc) + 0x138))();
  FUN_10043c10(0);
  uVar1 = rdtsc();
  appRandInit((int)uVar1);
  pwVar9 = u_CreditSound1_10351118;
  puVar10 = (ushort *)(in_ECX + 0x2e8);
  do {
    iVar7 = (**(code **)(**(int **)GConfig_exref + 0x10))
                      (L"Credit",pwVar9,puVar10,0x100,L"ALAudio.int");
    if (iVar7 == 0) {
      appStrcpy(puVar10,(ushort *)L"intro");
    }
    pwVar9 = pwVar9 + 0xff;
    puVar10 = puVar10 + 0xff;
  } while ((int)pwVar9 < 0x10351b0e);
  iVar8 = 0;
  *(undefined4 *)(in_ECX + 0xcec) = 0;
  iVar7 = *(int *)(GL2GameData_exref + 0x3d10);
  if (0 < *(int *)(iVar7 + 4)) {
    do {
      *(int *)(in_ECX + 0xcec) = *(int *)(in_ECX + 0xcec) + 1;
      iVar8 = iVar8 + 1;
    } while (iVar8 < *(int *)(iVar7 + 4));
    ExceptionList = unaff_EBP;
    return 1;
  }
  ExceptionList = unaff_EBP;
  return 1;
}


// ==== 10175130 FUN_10175130

void FUN_10175130(void)

{
  undefined4 *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_102128a8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_100031f0(DAT_103554c4 ^ (uint)&stack0xffffffec);
  in_ECX[0xb8] = 0;
  *in_ECX = NCCreditWnd::vftable;
  in_ECX[0x338] = 0;
  in_ECX[0xb6] = 0;
  in_ECX[0xb7] = 0;
  in_ECX[0xb9] = 0;
  in_ECX[0x33a] = 0;
  in_ECX[0x339] = 0;
  ExceptionList = local_c;
  return;
}


// ==== 101751b0 FUN_101751b0

void FUN_101751b0(void)

{
  uint uVar1;
  UObject *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_102128d8;
  local_c = ExceptionList;
  uVar1 = DAT_103554c4 ^ (uint)&stack0xffffffec;
  ExceptionList = &local_c;
  *(undefined ***)in_ECX = NCCreditWnd::vftable;
  local_4 = 0;
  UObject::ConditionalDestroy(in_ECX);
  local_4 = 0xffffffff;
  FUN_10002a70(uVar1);
  ExceptionList = local_c;
  return;
}


// ==== 10175210 FUN_10175210

void FUN_10175210(byte param_1)

{
  void *in_ECX;
  
  FUN_101751b0();
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0xcf0);
  }
  return;
}


// ==== 10175250 FUN_10175250

bool FUN_10175250(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int *in_ECX;
  
  iVar1 = FUN_100570d0(param_1,param_2,param_3);
  if (iVar1 != 0) {
    return true;
  }
  if ((param_1 == 0x501) && (param_2 == -0x552233ff)) {
    iVar1 = (**(code **)(*in_ECX + 500))(param_3);
    return iVar1 != 0;
  }
  return false;
}


// ==== 101752b0 FUN_101752b0

void FUN_101752b0(void)

{
  int *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10212900;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_1005ff00();
  (**(code **)(*in_ECX + 0x1f8))();
  ExceptionList = local_10;
  return;
}


// ==== 1017530e Catch@1017530e

void Catch_1017530e(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10175322 Catch@10175322

void Catch_10175322(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCDebugConsole::HideWindow");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10175340 FUN_10175340

undefined4 FUN_10175340(undefined4 param_1)

{
  ushort *puVar1;
  FString *pFVar2;
  int iVar3;
  int *in_ECX;
  undefined4 uVar4;
  uint uStack_68;
  FString local_58 [12];
  FString local_4c [12];
  FString local_40 [12];
  FString local_34 [12];
  FString local_28 [20];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_10212956;
  local_10 = ExceptionList;
  uStack_68 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_68;
  ExceptionList = &local_10;
  local_8 = 0;
  puVar1 = (ushort *)(**(code **)(*(int *)in_ECX[0x73] + 0x1f8))();
  switch(param_1) {
  case 1:
    FUN_1013c310(puVar1 + 2,0);
  case 7:
    (**(code **)(*in_ECX + 0x13c))();
    break;
  default:
    break;
  case 6:
    if ((puVar1 == (ushort *)0x0) || (iVar3 = appStrcmp(puVar1,(ushort *)&DAT_1024ffd0), iVar3 == 0)
       ) {
      (**(code **)(*in_ECX + 0x1f8))();
      ExceptionList = local_10;
      return 1;
    }
    FString::FString(local_28,puVar1);
    local_8._0_1_ = 1;
    pFVar2 = (FString *)FString::Left(local_28,(int)local_34);
    local_8._0_1_ = 2;
    iVar3 = FString::operator!=(pFVar2,(ushort *)&DAT_1024a284);
    local_8._0_1_ = 1;
    FString::~FString(local_34);
    if (iVar3 != 0) {
      FString::Len(local_28);
      FString::Right(local_28,(int)local_58);
      local_8._0_1_ = 3;
      pFVar2 = (FString *)FString::FString(local_4c,(ushort *)&DAT_1024a284);
      local_8._0_1_ = 4;
      pFVar2 = (FString *)FString::operator+(pFVar2,local_40);
      local_8._0_1_ = 5;
      FString::operator=(local_28,pFVar2);
      local_8._0_1_ = 4;
      FString::~FString(local_40);
      local_8._0_1_ = 3;
      FString::~FString(local_4c);
      local_8._0_1_ = 1;
      FString::~FString(local_58);
      (**(code **)(*(int *)in_ECX[0x73] + 0x174))();
      uVar4 = 1;
      puVar1 = FString::operator*(local_28);
      FUN_10016ea0(puVar1,uVar4);
    }
    goto LAB_1017551c;
  case 8:
    (**(code **)(*(int *)in_ECX[0x73] + 0x1fc))(local_28);
    local_8._0_1_ = 6;
    iVar3 = FString::Len(local_28);
    if (iVar3 == 0) {
      FUN_10017570(0);
    }
    else if (iVar3 != 1) goto LAB_1017551c;
    FUN_10017570(0);
LAB_1017551c:
    local_8 = (uint)local_8._1_3_ << 8;
    FString::~FString(local_28);
  }
  ExceptionList = local_10;
  return 1;
}


// ==== 10175542 Catch@10175542

void Catch_10175542(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10175556 Catch@10175556

void Catch_10175556(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCDebugConsole::OnConsoleEditBox");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101755a0 FUN_101755a0

void FUN_101755a0(void)

{
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10212980;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  (**(code **)(**(int **)(in_ECX + 0x1cc) + 0x174))();
  FUN_10016ea0(&DAT_1024a284,1);
  FUN_10013270(0);
  ExceptionList = local_10;
  return;
}


// ==== 1017561c Catch@1017561c

void Catch_1017561c(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10175630 Catch@10175630

void Catch_10175630(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCDebugConsole::ClearCommand");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


