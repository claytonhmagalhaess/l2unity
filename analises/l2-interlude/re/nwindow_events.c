// ==== 100065e0 FUN_100065e0 dispatcher=100d1790 callers=DATA@10230bec
// strings: 1022fd1c=Index | 1022fd14=QuestID | 

undefined4 __thiscall FUN_100065e0(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  uint uStack_5c;
  FString local_4c [12];
  FString local_40 [12];
  undefined1 local_34 [12];
  undefined1 local_28 [20];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_101d7782;
  local_10 = ExceptionList;
  uStack_5c = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_5c;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_100038b0(param_2,param_3);
  FUN_1003f970();
  local_8._0_1_ = 1;
  iVar1 = *(int *)(param_1 + 0x348);
  if (iVar1 == 0) {
    FUN_10144c10(*(undefined4 *)(param_1 + 0x34c));
  }
  else if (iVar1 == 1) {
    FUN_1013d7f0(4,1);
    FUN_1003faa0();
    FString::FString(local_4c,"QuestID");
    local_8._0_1_ = 2;
    FUN_10040090(local_4c,*(undefined4 *)(param_1 + 0x34c));
    local_8._0_1_ = 1;
    FString::~FString(local_4c);
    puVar3 = local_28;
    uVar2 = 0x2da;
    FUN_10005c30(0x2da,puVar3);
    FUN_100d1790(uVar2,puVar3);
  }
  else if (iVar1 == 2) {
    FUN_1003f970();
    local_8._0_1_ = 3;
    FString::FString(local_40,(ushort *)L"Index");
    local_8._0_1_ = 4;
    FUN_10040090(local_40,5);
    local_8._0_1_ = 3;
    FString::~FString(local_40);
    puVar3 = local_34;
    uVar2 = 0x4a6;
    FUN_10005c30(0x4a6,puVar3);
    FUN_100d1790(uVar2,puVar3);
    local_8._0_1_ = 1;
    FUN_1003fff0();
  }
  local_8 = (uint)local_8._1_3_ << 8;
  FUN_1003fff0();
  ExceptionList = local_10;
  return 1;
}


// ==== 1002a840 FUN_1002a840 dispatcher=100d1790 callers=FUN_1002ad10@1002ad10 FUN_1002ad90@1002ad90 DATA@1023a084 DATA@1023a4e4 FUN_1002af80@1002af80 DATA@1023adc4
// strings: 

undefined4 __thiscall FUN_1002a840(int param_1,int param_2)

{
  uint uVar1;
  FString local_18 [12];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101dba19;
  local_c = ExceptionList;
  uVar1 = DAT_103554c4 ^ (uint)local_18;
  ExceptionList = &local_c;
  if ((*(int *)(param_1 + 0x4318) != 0) && ((param_2 == 6 || (param_2 == 8)))) {
    FString::FString(local_18,(ushort *)&DAT_1022f9f8);
    local_4 = 0;
    if (DAT_1035786c == 0) {
      FUN_10005270(uVar1);
    }
    FUN_100d1790(0x5dc,local_18);
    local_4 = 0xffffffff;
    FString::~FString(local_18);
  }
  ExceptionList = local_c;
  return 0;
}


// ==== 1002a8e0 FUN_1002a8e0 dispatcher=100d1790 callers=FUN_10040940@10040940 FUN_1002a990@1002a990
// strings: 

void FUN_1002a8e0(void)

{
  uint uVar1;
  FString local_18 [12];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101dba49;
  local_c = ExceptionList;
  uVar1 = DAT_103554c4 ^ (uint)local_18;
  ExceptionList = &local_c;
  ImmAssociateContext(DAT_103663b8,DAT_10361a40);
  if ((DAT_1035786c == 0) && (FUN_10005270(uVar1), DAT_1035786c == 0)) {
    ExceptionList = local_c;
    return;
  }
  FString::FString(local_18,(ushort *)&DAT_1022f9f8);
  local_4 = 0;
  if (DAT_1035786c == 0) {
    FUN_10005270(uVar1);
  }
  FUN_100d1790(0x5dc,local_18);
  local_4 = 0xffffffff;
  FString::~FString(local_18);
  ExceptionList = local_c;
  return;
}


// ==== 10043160 FUN_10043160 dispatcher=100d1790 callers=DATA@1023e418
// strings: 

undefined4 __thiscall FUN_10043160(int param_1,int param_2)

{
  FColor *this;
  undefined4 uVar1;
  FString *pFVar2;
  undefined4 *puVar3;
  uint uStack_44;
  FString local_34 [12];
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_101de9a9;
  local_10 = ExceptionList;
  uStack_44 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_44;
  ExceptionList = &local_10;
  local_8 = 0;
  if (param_2 == -0x1ffffff) {
    *(int *)(param_1 + 0x1d8) = *(int *)(param_1 + 0x1d8) + -100;
    if (*(int *)(param_1 + 0x1d8) < 1) {
      *(undefined4 *)(param_1 + 0x1dc) = *(undefined4 *)(param_1 + 0x1e8);
      *(undefined4 *)(param_1 + 0x1e0) = *(undefined4 *)(param_1 + 0x1ec);
      *(undefined4 *)(param_1 + 0x1e4) = *(undefined4 *)(param_1 + 0x1f0);
      puVar3 = &local_28;
      this = (FColor *)FColor::FColor((FColor *)&param_2,'\0','\0','\0',0xff);
      FColor::operator_class_FVector(this);
      *(undefined4 *)(param_1 + 0x1e8) = local_28;
      *(undefined4 *)(param_1 + 0x1ec) = local_24;
      *(undefined4 *)(param_1 + 0x1f0) = local_20;
      *(undefined4 *)(param_1 + 0x1d8) = 0;
      if (*(int *)(param_1 + 0x200) != 0) {
        FUN_1003f610(*(int *)(param_1 + 0x200));
        *(undefined4 *)(param_1 + 0x200) = 0;
        FString::FString(local_34,(ushort *)&DAT_1022f9f8);
        local_8._0_1_ = 1;
        pFVar2 = local_34;
        uVar1 = 0x50;
        FUN_10005c30(0x50,pFVar2,puVar3);
        FUN_100d1790(uVar1,pFVar2);
        local_8 = (uint)local_8._1_3_ << 8;
        FString::~FString(local_34);
      }
    }
    else {
      *(float *)(param_1 + 0x1dc) = *(float *)(param_1 + 500) + *(float *)(param_1 + 0x1dc);
      *(float *)(param_1 + 0x1e0) = *(float *)(param_1 + 0x1f8) + *(float *)(param_1 + 0x1e0);
      *(float *)(param_1 + 0x1e4) = *(float *)(param_1 + 0x1fc) + *(float *)(param_1 + 0x1e4);
    }
  }
  ExceptionList = local_10;
  return 1;
}


// ==== 100461d0 FUN_100461d0 dispatcher=100d1790 callers=FUN_1016f540@1016f540
// strings: 1023eedc=.\Src\NShortcutItemManager.cpp | 1023f52c=pShortcutItemInfo | 1023eedc=.\Src\NShortcutItemManager.cpp | 1023eecc=pShortcutItem | 1023eedc=.\Src\NShortcutItemManager.cpp | 1023f51c=pShortcutDelay | 1023f4e8=L2UI.MacroWnd.Macro_Icon1 | 10230f28=Default.BlackTexture | 1023eedc=.\Src\NShortcutItemManager.cpp | 1023f4d0=a_ItemInfo.m_pIconTex | 1023eedc=.\Src\NShortcutItemManager.cpp | 1023f4c8=pItem | 1023f4b0=%s%s %d %d | 1023f498=ShortcutID | 

undefined4 __thiscall FUN_100461d0(int param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  uint *puVar3;
  int iVar4;
  int iVar5;
  ushort *puVar6;
  FL2MagicSkillData *pFVar7;
  int iVar8;
  undefined4 uVar9;
  wchar_t *pwVar10;
  undefined1 *puVar11;
  uint uStack_50;
  L2ParamStack local_40 [4];
  FString local_3c [12];
  undefined1 local_30 [20];
  int local_1c;
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_101df19a;
  local_10 = ExceptionList;
  uStack_50 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_50;
  local_8 = 0;
  iVar8 = *(int *)(param_2 + 0x1cb8);
  if ((iVar8 < 0) || (0x77 < iVar8)) {
    return 0;
  }
  iVar8 = *(int *)(param_1 + 0x34 + iVar8 * 4);
  ExceptionList = &local_10;
  local_1c = param_1;
  puVar3 = &uStack_50;
  if (iVar8 == 0) {
    appFailAssert("pShortcutItemInfo",".\\Src\\NShortcutItemManager.cpp",0xe0);
    puVar3 = (uint *)local_14;
  }
  local_14 = (undefined1 *)puVar3;
  piVar2 = *(int **)(iVar8 + 0x48);
  if (piVar2 == (int *)0x0) {
    appFailAssert("pShortcutItem",".\\Src\\NShortcutItemManager.cpp",0xe3);
  }
  if (iVar8 == -0x34) {
    appFailAssert("pShortcutDelay",".\\Src\\NShortcutItemManager.cpp",0xe6);
  }
  FUN_1002f440(0);
  if (*(int *)(param_2 + 0x1c04) == 0) {
    if (*(int *)(param_2 + 0x1c20) == 4) {
      pwVar10 = L"L2UI.MacroWnd.Macro_Icon1";
    }
    else {
      pwVar10 = L"Default.BlackTexture";
    }
    iVar4 = FUN_1003f630(pwVar10,1);
    *(int *)(param_2 + 0x1c04) = iVar4;
    if (iVar4 == 0) {
      appFailAssert("a_ItemInfo.m_pIconTex",".\\Src\\NShortcutItemManager.cpp",0xf4);
    }
  }
  iVar4 = FUN_10149ee0(piVar2[0x797]);
  if (iVar4 != 0) {
    for (local_18 = 0; local_18 < 0x78; local_18 = local_18 + 1) {
      iVar4 = *(int *)(*(int *)(local_1c + 0x34 + local_18 * 4) + 0x48);
      if (iVar4 == 0) {
        appFailAssert("pItem",".\\Src\\NShortcutItemManager.cpp",0xfd);
      }
      iVar5 = FUN_10045220();
      if ((((iVar5 != 0) && (local_18 != *(int *)(param_2 + 0x1cb8))) &&
          (*(int *)(iVar4 + 0x1e5c) == piVar2[0x797])) && (*(int *)(iVar4 + 0x1f68) != 0))
      goto LAB_100463b8;
    }
    L2ParamStack::L2ParamStack(local_40,10);
    local_8._0_1_ = 1;
    L2ParamStack::PushBack(local_40,(void *)piVar2[0x797]);
    L2ParamStack::PushBack(local_40,(void *)0x0);
    FUN_10149ed0(local_40);
    local_8 = (uint)local_8._1_3_ << 8;
    L2ParamStack::~L2ParamStack(local_40);
  }
LAB_100463b8:
  (**(code **)(*piVar2 + 0x6c))(param_2);
  piVar2[0x7d9] = 1;
  piVar1 = piVar2 + 0x797;
  FUN_101ad1f0(*piVar1,piVar2[0x795],piVar2[0x7c4]);
  iVar5 = piVar2[0x79f] % 0xc + 1;
  iVar4 = piVar2[0x79f] / 0xc + 1;
  puVar6 = FString::operator*((FString *)(GL2GameData_exref + 0x736cc));
  appSprintf((ushort *)(piVar2 + 0x754),(ushort *)L"%s%s %d %d",PTR_DAT_1034c7bc,puVar6,iVar4,iVar5)
  ;
  switch(*(undefined4 *)(param_2 + 0x1c20)) {
  case 1:
    FUN_10187a60(piVar1);
    *(undefined4 *)(iVar8 + 0x40) = 0;
    *(undefined4 *)(iVar8 + 0x44) = 0;
    iVar4 = FUN_10146ca0(*piVar1);
    if (iVar4 != 0) {
      FUN_10044ea0(200);
      iVar8 = FUN_10149ee0(*piVar1);
      if ((iVar8 != 0) && (iVar8 = FUN_10045860(*piVar1), iVar8 != 0)) {
        piVar2[0x7da] = 1;
      }
      goto switchD_1004644e_default;
    }
    break;
  case 2:
    *(undefined4 *)(iVar8 + 0x40) = 0;
    *(undefined4 *)(iVar8 + 0x44) = 0;
    iVar4 = FUN_10164ab0(*piVar1,piVar2[0x798]);
    if (iVar4 == 0) {
      *(undefined4 *)(iVar8 + 0x44) = 1;
      FUN_10045970();
    }
    else {
      FUN_10044ea0(1000);
    }
    pFVar7 = FL2GameData::GetMSData
                       ((FL2GameData *)GL2GameData_exref,*(int *)(param_2 + 0x1c28),
                        *(int *)(param_2 + 0x1c34));
    if ((pFVar7 != (FL2MagicSkillData *)0x0) && (*(int *)(pFVar7 + 0x68) != 0)) {
      puVar6 = FString::operator*((FString *)(pFVar7 + 0x50));
      appStrcpy((ushort *)(piVar2 + 0x93),puVar6);
    }
    local_1c = 0;
    iVar8 = FUN_101ad480(*(undefined4 *)(param_2 + 0x1c28),2,&local_1c);
    if (((iVar8 != 0) && (local_1c != 0)) && (*(double *)(local_1c + 0x4c) != 0.0)) {
      FUN_1002ee30(local_1c);
    }
    goto switchD_1004644e_default;
  case 3:
    *(undefined4 *)(iVar8 + 0x40) = 0;
    *(undefined4 *)(iVar8 + 0x44) = 0;
    if (*piVar1 == 2) {
      FUN_10044ea0(200);
      goto switchD_1004644e_default;
    }
    if (*piVar1 == 5) {
      FUN_10044ea0(500);
      goto switchD_1004644e_default;
    }
    break;
  case 4:
  case 5:
    *(undefined4 *)(iVar8 + 0x44) = 0;
    break;
  default:
    goto switchD_1004644e_default;
  }
  *(undefined4 *)(iVar8 + 0x40) = 1;
  FUN_10045970();
switchD_1004644e_default:
  FUN_1003f970();
  local_8._0_1_ = 2;
  FString::FString(local_3c,(ushort *)L"ShortcutID");
  local_8._0_1_ = 3;
  FUN_10040090(local_3c,*(undefined4 *)(param_2 + 0x1cb8));
  local_8._0_1_ = 2;
  FString::~FString(local_3c);
  puVar11 = local_30;
  uVar9 = 0x276;
  FUN_10005c30(0x276,puVar11);
  FUN_100d1790(uVar9,puVar11);
  local_8 = (uint)local_8._1_3_ << 8;
  FUN_1003fff0();
  ExceptionList = local_10;
  return 1;
}


// ==== 10046690 FUN_10046690 dispatcher=100d1790 callers=FUN_100472e0@100472e0
// strings: 1023f5a0=IsLockShortcutWnd | 1023f594=Game | 1023eedc=.\Src\NShortcutItemManager.cpp | 1023eecc=pShortcutItem | 1023f498=ShortcutID | 

undefined4 __thiscall FUN_10046690(int param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  int *unaff_FS_OFFSET;
  FString aFStack_80 [4];
  undefined4 uStack_7c;
  undefined4 uStack_74;
  uint uStack_64;
  L2ParamStack local_54 [16];
  L2ParamStack local_44 [4];
  FString local_40 [28];
  undefined1 *local_24;
  undefined1 *local_20;
  uint local_18;
  undefined1 *local_14;
  int local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_101df1f5;
  local_10 = *unaff_FS_OFFSET;
  uStack_64 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_64;
  *unaff_FS_OFFSET = (int)&local_10;
  local_8 = 0;
  if (0x77 < param_2) {
    *unaff_FS_OFFSET = local_10;
    return 0;
  }
  local_20 = (undefined1 *)&uStack_74;
  uStack_7c = 0x100466e8;
  FString::FString((FString *)&uStack_74,(ushort *)L"IsLockShortcutWnd");
  local_8._0_1_ = 1;
  local_24 = aFStack_80;
  FString::FString(aFStack_80,(ushort *)L"Game");
  local_8 = (uint)local_8._1_3_ << 8;
  FUN_10042370();
  iVar1 = *(int *)(*(int *)(param_1 + 0x34 + param_2 * 4) + 0x48);
  if (iVar1 == 0) {
    uStack_74 = 0x10046741;
    appFailAssert("pShortcutItem",".\\Src\\NShortcutItemManager.cpp",0x193);
  }
  iVar2 = FUN_10149ee0();
  pcVar3 = PushBack_exref;
  if (iVar2 != 0) {
    for (local_18 = 0; (int)local_18 < 0x78; local_18 = local_18 + 1) {
      if ((local_18 != param_2) &&
         (*(int *)(*(int *)(*(int *)(param_1 + 0x34 + local_18 * 4) + 0x48) + 0x1e5c) ==
          *(int *)(iVar1 + 0x1e5c))) goto LAB_100467dc;
    }
    if (*(int *)(iVar1 + 0x1f68) != 0) {
      L2ParamStack::L2ParamStack(local_44,10);
      pcVar3 = PushBack_exref;
      local_8._0_1_ = 3;
      L2ParamStack::PushBack(local_44,*(void **)(iVar1 + 0x1e5c));
      L2ParamStack::PushBack(local_44,(void *)0x0);
      FUN_10149ed0();
      local_8 = (uint)local_8._1_3_ << 8;
      L2ParamStack::~L2ParamStack(local_44);
    }
  }
LAB_100467dc:
  L2ParamStack::L2ParamStack(local_54,10);
  local_8._0_1_ = 4;
  (*pcVar3)();
  FUN_10143d50();
  FUN_10045170();
  FUN_1003f970();
  local_8._0_1_ = 5;
  FString::FString(local_40,(ushort *)L"ShortcutID");
  local_8._0_1_ = 6;
  uStack_74 = 0x10046838;
  FUN_10040090();
  local_8._0_1_ = 5;
  FString::~FString(local_40);
  uStack_74 = 0x10046852;
  FUN_10005c30();
  uStack_74 = 0x10046859;
  FUN_100d1790();
  local_8._0_1_ = 4;
  FUN_1003fff0();
  local_8 = (uint)local_8._1_3_ << 8;
  L2ParamStack::~L2ParamStack(local_54);
  *unaff_FS_OFFSET = local_10;
  return 1;
}


// ==== 100468e0 FUN_100468e0 dispatcher=100d1790 callers=FUN_10143ed0@10143ed0
// strings: 1023eedc=.\Src\NShortcutItemManager.cpp | 1023eecc=pShortcutItem | 1023f498=ShortcutID | 

undefined4 __thiscall FUN_100468e0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  UPackage *pUVar3;
  int *piVar4;
  int iVar5;
  uint uStack_8c;
  FString local_40 [28];
  undefined1 *local_24;
  int local_1c;
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_101df221;
  local_10 = ExceptionList;
  uStack_8c = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_8c;
  ExceptionList = &local_10;
  iVar5 = 0;
  local_8 = 0;
  local_1c = param_1;
  do {
    if (0x77 < iVar5) {
      ExceptionList = local_10;
      return 1;
    }
    iVar1 = *(int *)(*(int *)(local_1c + 0x34 + iVar5 * 4) + 0x48);
    local_18 = iVar5;
    if (iVar1 == 0) {
      appFailAssert("pShortcutItem",".\\Src\\NShortcutItemManager.cpp",0x210);
    }
    iVar2 = FUN_10045220();
    if (((iVar2 != 0) && (*(int *)(iVar1 + 0x1e54) != 0)) && (*(int *)(iVar1 + 0x1e58) == param_2))
    {
      FUN_1000eea0();
      iVar5 = FUN_101b2b20();
      if (iVar5 == -1) {
        iVar5 = FUN_101b2b30();
        if (iVar5 != -1) {
          FUN_101b2720();
          goto LAB_100469dd;
        }
        FUN_10045170();
      }
      else {
        FUN_101b25a0();
LAB_100469dd:
        local_24 = &stack0xffffff6c;
        FName::FName((FName *)&stack0xffffff6c,0);
        pUVar3 = UObject::GetTransientPackage();
        iVar5 = FUN_1002dd90(0x1f5c,pUVar3);
        if (iVar5 == 0) {
          piVar4 = (int *)0x0;
        }
        else {
          piVar4 = (int *)FUN_1002f690();
        }
        if (piVar4[0x7a0] < 1) {
          iVar5 = FUN_1002cc80();
          if (iVar5 != 0) {
            *(int *)(iVar1 + 0x1e64) = piVar4[0x799];
          }
          (**(code **)(*piVar4 + 0xc))();
        }
        else {
          *(int *)(iVar1 + 0x1e80) = piVar4[0x7a0];
          (**(code **)(*piVar4 + 0xc))();
        }
      }
      FUN_1003f970();
      local_8._0_1_ = 1;
      FString::FString(local_40,(ushort *)L"ShortcutID");
      local_8._0_1_ = 2;
      FUN_10040090();
      local_8._0_1_ = 1;
      FString::~FString(local_40);
      FUN_10005c30();
      FUN_100d1790();
      local_8 = (uint)local_8._1_3_ << 8;
      FUN_1003fff0();
      iVar5 = local_18;
    }
    iVar5 = iVar5 + 1;
  } while( true );
}


// ==== 10046b10 FUN_10046b10 dispatcher=100d1790 callers=FUN_10143f70@10143f70
// strings: 1023eedc=.\Src\NShortcutItemManager.cpp | 1023eecc=pShortcutItem | 1023f498=ShortcutID | 

undefined4 __thiscall FUN_10046b10(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined1 *puVar5;
  uint uStack_4c;
  FString local_3c [12];
  undefined1 local_30 [20];
  int local_1c;
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_101df251;
  local_10 = ExceptionList;
  uStack_4c = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_4c;
  ExceptionList = &local_10;
  local_8 = 0;
  local_1c = param_1;
  for (iVar3 = 0; iVar3 < 0x78; iVar3 = iVar3 + 1) {
    iVar1 = *(int *)(*(int *)(local_1c + 0x34 + iVar3 * 4) + 0x48);
    local_18 = iVar3;
    if (iVar1 == 0) {
      appFailAssert("pShortcutItem",".\\Src\\NShortcutItemManager.cpp",0x256);
    }
    iVar2 = FUN_10045220();
    if (((iVar2 != 0) && (*(int *)(iVar1 + 0x1e54) != 0)) && (*(int *)(iVar1 + 0x1e58) == param_2))
    {
      uVar4 = *(undefined4 *)(iVar1 + 0x1e7c);
      iVar3 = FUN_101ae490(param_2);
      if (iVar3 == 0) {
        FUN_10045170();
      }
      else if (*(int *)(iVar3 + 0x1e80) < 1) {
        iVar2 = FUN_1002cc80();
        if (iVar2 != 0) {
          *(undefined4 *)(iVar1 + 0x1e64) = *(undefined4 *)(iVar3 + 0x1e64);
        }
      }
      else {
        *(int *)(iVar1 + 0x1e80) = *(int *)(iVar3 + 0x1e80);
      }
      FUN_1003f970();
      local_8._0_1_ = 1;
      FString::FString(local_3c,(ushort *)L"ShortcutID");
      local_8._0_1_ = 2;
      FUN_10040090(local_3c,uVar4);
      local_8._0_1_ = 1;
      FString::~FString(local_3c);
      puVar5 = local_30;
      uVar4 = 0x276;
      FUN_10005c30(0x276,puVar5);
      FUN_100d1790(uVar4,puVar5);
      local_8 = (uint)local_8._1_3_ << 8;
      FUN_1003fff0();
      iVar3 = local_18;
    }
  }
  ExceptionList = local_10;
  return 1;
}


// ==== 10046ca0 FUN_10046ca0 dispatcher=100d1790 callers=FUN_10143e30@10143e30
// strings: 1023eedc=.\Src\NShortcutItemManager.cpp | 1023eecc=pShortcutItem | 1023f6a8=L2UI.MacroWnd.Macro_Icon%d | 1023f498=ShortcutID | 

undefined4 __thiscall FUN_10046ca0(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  void *pvVar4;
  undefined1 *puVar5;
  uint uStack_50;
  L2ParamStack local_40 [4];
  FString local_3c [12];
  undefined1 local_30 [20];
  void *local_1c;
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_101df28a;
  local_10 = ExceptionList;
  uStack_50 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_50;
  ExceptionList = &local_10;
  pvVar4 = (void *)0x0;
  local_8 = 0;
  local_18 = param_1;
  while( true ) {
    if (0x77 < (int)pvVar4) {
      ExceptionList = local_10;
      return 1;
    }
    iVar1 = *(int *)(*(int *)(local_18 + 0x34 + (int)pvVar4 * 4) + 0x48);
    local_1c = pvVar4;
    if (iVar1 == 0) {
      appFailAssert("pShortcutItem",".\\Src\\NShortcutItemManager.cpp",0x2ac);
    }
    iVar2 = FUN_10045220();
    if (((iVar2 != 0) && (*(int *)(iVar1 + 0x1e54) == 4)) && (*(int *)(iVar1 + 0x1e5c) == param_2))
    break;
    pvVar4 = (void *)((int)pvVar4 + 1);
  }
  local_18 = *(undefined4 *)(iVar1 + 0x1e7c);
  if (param_3 == 2) {
    iVar2 = FUN_101ade70(param_2);
    if (iVar2 != 0) {
      iVar2 = FUN_101aee70(param_2);
      appSprintf((ushort *)(iVar1 + 0x44c),(ushort *)L"L2UI.MacroWnd.Macro_Icon%d",iVar2 + 1);
      uVar3 = FUN_1003f630((ushort *)(iVar1 + 0x44c),1);
      *(undefined4 *)(iVar1 + 0x34) = uVar3;
      uVar3 = FUN_101aef20(param_2);
      appSprintf((ushort *)(iVar1 + 0x4c),(ushort *)&DAT_1022dde0,uVar3);
    }
  }
  else if (param_3 == 0) {
    L2ParamStack::L2ParamStack(local_40,10);
    local_8._0_1_ = 1;
    L2ParamStack::PushBack(local_40,pvVar4);
    FUN_10143d50(local_40);
    FUN_10045170();
    local_8 = (uint)local_8._1_3_ << 8;
    L2ParamStack::~L2ParamStack(local_40);
  }
  FUN_1003f970();
  local_8._0_1_ = 2;
  FString::FString(local_3c,(ushort *)L"ShortcutID");
  local_8._0_1_ = 3;
  FUN_10040090(local_3c,local_18);
  local_8._0_1_ = 2;
  FString::~FString(local_3c);
  puVar5 = local_30;
  uVar3 = 0x276;
  FUN_10005c30(0x276,puVar5);
  FUN_100d1790(uVar3,puVar5);
  local_8 = (uint)local_8._1_3_ << 8;
  FUN_1003fff0();
  ExceptionList = local_10;
  return 1;
}


// ==== 10046eb0 FUN_10046eb0 dispatcher=100d1790 callers=FUN_10164610@10164610
// strings: 1023eedc=.\Src\NShortcutItemManager.cpp | 1023eecc=pShortcutItem | 1023f498=ShortcutID | 

void __fastcall FUN_10046eb0(int param_1)

{
  int iVar1;
  int iVar2;
  ushort *puVar3;
  int iVar4;
  undefined4 uVar5;
  undefined1 *puVar6;
  uint uStack_4c;
  FString local_3c [12];
  undefined1 local_30 [20];
  int local_1c;
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_101df2c1;
  local_10 = ExceptionList;
  uStack_4c = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_4c;
  ExceptionList = &local_10;
  local_8 = 0;
  iVar4 = 0;
  local_18 = param_1;
  do {
    if (0x77 < iVar4) {
      ExceptionList = local_10;
      return;
    }
    iVar1 = *(int *)(*(int *)(local_18 + 0x34 + iVar4 * 4) + 0x48);
    local_1c = iVar4;
    if (iVar1 == 0) {
      appFailAssert("pShortcutItem",".\\Src\\NShortcutItemManager.cpp",0x322);
    }
    iVar2 = FUN_10045220();
    if (iVar2 != 0) {
      switch(*(undefined4 *)(iVar1 + 0x1e54)) {
      case 1:
        puVar3 = (ushort *)FUN_101647b0(*(undefined4 *)(iVar1 + 0x1e5c));
        break;
      case 2:
        puVar3 = (ushort *)
                 FUN_10164900(*(undefined4 *)(iVar1 + 0x1e5c),*(undefined4 *)(iVar1 + 0x1e60));
        break;
      case 3:
        puVar3 = (ushort *)FUN_1014e120(*(undefined4 *)(iVar1 + 0x1e5c));
        break;
      case 4:
        puVar3 = (ushort *)FUN_101aef20(*(undefined4 *)(iVar1 + 0x1e5c));
        break;
      default:
        goto switchD_10046f38_default;
      }
      if (puVar3 != (ushort *)0x0) {
        appStrcpy((ushort *)(iVar1 + 0x4c),puVar3);
      }
      FUN_1003f970();
      local_8._0_1_ = 1;
      FString::FString(local_3c,(ushort *)L"ShortcutID");
      local_8._0_1_ = 2;
      FUN_10040090(local_3c,*(undefined4 *)(iVar1 + 0x1e7c));
      local_8._0_1_ = 1;
      FString::~FString(local_3c);
      puVar6 = local_30;
      uVar5 = 0x276;
      FUN_10005c30(0x276,puVar6);
      FUN_100d1790(uVar5,puVar6);
      local_8 = (uint)local_8._1_3_ << 8;
      FUN_1003fff0();
    }
switchD_10046f38_default:
    iVar4 = iVar4 + 1;
  } while( true );
}


// ==== 10047070 FUN_10047070 dispatcher=100d1790 callers=FUN_10172350@10172350 execSetShortcutPage@10120c20 FUN_10047190@10047190 FUN_10047220@10047220
// strings: 1023f788=ShortcutPage | 

undefined4 __thiscall FUN_10047070(int param_1,uint param_2)

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
  
  puStack_c = &LAB_101df2f1;
  local_10 = ExceptionList;
  uStack_44 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_44;
  local_8 = 0;
  if (param_2 < 10) {
    ExceptionList = &local_10;
    *(uint *)(param_1 + 0x214) = param_2;
    FUN_1003f970();
    local_8._0_1_ = 1;
    FString::FString(local_34,(ushort *)L"ShortcutPage");
    local_8._0_1_ = 2;
    FUN_10040090(local_34,*(undefined4 *)(param_1 + 0x214));
    local_8._0_1_ = 1;
    FString::~FString(local_34);
    puVar2 = local_28;
    uVar1 = 0x280;
    FUN_10005c30(0x280,puVar2);
    FUN_100d1790(uVar1,puVar2);
    local_8 = (uint)local_8._1_3_ << 8;
    FUN_1003fff0();
    ExceptionList = local_10;
    return 1;
  }
  return 0;
}


// ==== 1006fb10 FUN_1006fb10 dispatcher=100d1790 callers=DATA@10248efc
// strings: 

void FUN_1006fb10(void)

{
  HIMC pHVar1;
  undefined4 uVar2;
  FString *pFVar3;
  uint uStack_40;
  FString local_30 [20];
  DWORD local_1c;
  uint local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_101e59e2;
  local_10 = ExceptionList;
  uStack_40 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_40;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_1006ea70();
  FString::FString(local_30,(ushort *)&DAT_1022f9f8);
  local_8._0_1_ = 1;
  pFVar3 = local_30;
  uVar2 = 0x96;
  FUN_10005c30(0x96,pFVar3);
  FUN_100d1790(uVar2,pFVar3);
  local_8._0_1_ = 0;
  FString::~FString(local_30);
  if (*(int *)GLanguageType_exref == 0) {
    pHVar1 = ImmGetContext(DAT_103663b8);
    ImmGetConversionStatus(pHVar1,&local_18,&local_1c);
    local_18 = local_18 | 1;
    ImmSetConversionStatus(pHVar1,local_18,local_1c);
    ImmDestroyContext(pHVar1);
    FString::FString(local_30,(ushort *)&DAT_1022f9f8);
    local_8._0_1_ = 2;
    pFVar3 = local_30;
    uVar2 = 0x5dc;
    FUN_10005c30(0x5dc,pFVar3);
    FUN_100d1790(uVar2,pFVar3);
    local_8 = (uint)local_8._1_3_ << 8;
    FString::~FString(local_30);
  }
  ExceptionList = local_10;
  return;
}


// ==== 1006fc40 FUN_1006fc40 dispatcher=100d1790 callers=DATA@10248f04
// strings: 10248f98=GamingHideWindowState | 102483b8=OlympiadObserverState | 10248388=BroadcastObserverState | 10248f70=SpecialCameraState | 

void __fastcall FUN_1006fc40(int *param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  FString *pFVar4;
  uint uStack_48;
  FString local_38 [12];
  FString local_2c [20];
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  puStack_c = &LAB_101e5a12;
  local_10 = ExceptionList;
  uStack_48 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_48;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_1006e3d0(local_2c);
  local_8 = CONCAT31(local_8._1_3_,1);
  iVar2 = FString::operator==(local_2c,(ushort *)L"GamingHideWindowState");
  if (iVar2 == 0) {
    iVar2 = FString::operator==(local_2c,(ushort *)L"OlympiadObserverState");
    if (iVar2 == 0) {
      iVar2 = FString::operator==(local_2c,(ushort *)L"BroadcastObserverState");
      if (iVar2 == 0) {
        iVar2 = FString::operator==(local_2c,(ushort *)L"SpecialCameraState");
        if (iVar2 == 0) {
          for (iVar2 = 0; local_18 = iVar2, iVar2 < param_1[2]; iVar2 = iVar2 + 1) {
            piVar1 = (int *)(param_1[1] + iVar2 * 4);
            if (*piVar1 != 0) {
              (**(code **)(*(int *)*piVar1 + 0x13c))();
              (**(code **)(**(int **)(param_1[1] + iVar2 * 4) + 0x174))();
            }
          }
          FUN_10165630(0);
          (**(code **)(*DAT_103663bc + 0x67c))(0);
          (**(code **)(*DAT_103663bc + 0x684))(0);
          iVar2 = FUN_10005c30();
          if (iVar2 != 0) {
            FString::FString(local_38,(ushort *)&DAT_1022f9f8);
            local_8._0_1_ = 2;
            pFVar4 = local_38;
            uVar3 = 0xa0;
            FUN_10005c30(0xa0,pFVar4);
            FUN_100d1790(uVar3,pFVar4);
            local_8 = CONCAT31(local_8._1_3_,1);
            FString::~FString(local_38);
          }
          local_8 = local_8 & 0xffffff00;
          FString::~FString(local_2c);
          ExceptionList = local_10;
          return;
        }
      }
    }
  }
  (**(code **)(*param_1 + 0x10))();
  local_8 = local_8 & 0xffffff00;
  FString::~FString(local_2c);
  ExceptionList = local_10;
  return;
}


// ==== 1008caf0 FUN_1008caf0 dispatcher=100d1790 callers=FUN_1008ceb0@1008ceb0
// strings: 102500ac=..\INPUT_THAI_HTML\*.* | 102500ac=..\INPUT_THAI_HTML\*.* | 10250080=..\INPUT_THAI_HTML\%s | 10250054=%s parsing begin..... | 1024fd64=Npc HTML | 1024fd48=Petition HTML | 1024fd34=Help HTML | 1024fd14=ServerInfo HTML | 1025003c=HtmlString | 1025003c=HtmlString | 10250010=%s parsing SUCCESS!! | 

void __fastcall FUN_1008caf0(int param_1)

{
  ushort *puVar1;
  BOOL BVar2;
  int iVar3;
  wchar_t *pwVar4;
  WCHAR *pWVar5;
  undefined1 local_4d0 [12];
  HANDLE local_4c4;
  FString aFStack_4c0 [12];
  FString aFStack_4b4 [12];
  FString aFStack_4a8 [12];
  FString aFStack_49c [12];
  undefined1 local_490 [592];
  WCHAR local_240 [24];
  ushort local_210 [256];
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101eb84b;
  local_c = ExceptionList;
  local_10 = DAT_103554c4 ^ (uint)local_4d0;
  ExceptionList = &local_c;
  FUN_1003f970(DAT_103554c4 ^ (uint)&stack0xfffffb20);
  local_4 = 0;
  *(undefined4 *)(param_1 + 0x1d4) = 0;
  pwVar4 = L"..\\INPUT_THAI_HTML\\*.*";
  pWVar5 = local_240;
  for (iVar3 = 0xb; iVar3 != 0; iVar3 = iVar3 + -1) {
    *(undefined4 *)pWVar5 = *(undefined4 *)pwVar4;
    pwVar4 = pwVar4 + 2;
    pWVar5 = pWVar5 + 2;
  }
  *pWVar5 = *pwVar4;
  local_4c4 = FindFirstFileW(local_240,(LPWIN32_FIND_DATAW)local_490);
  if (local_4c4 != (HANDLE)0xffffffff) {
    do {
      appSprintf(local_210,(ushort *)L"..\\INPUT_THAI_HTML\\%s",local_490 + 0x2c);
      if (*(int *)GLog_exref != 0) {
        FOutputDevice::Logf2((FOutputDevice *)(local_490 + 0x2c),*(ushort **)GLog_exref);
        (**(code **)(**(int **)GLog_exref + 4))();
      }
      iVar3 = FUN_1008c9a0(local_210);
      if (iVar3 != 0) {
        FUN_1000b3d0(L"Npc HTML");
        FUN_1000b3d0(L"Petition HTML");
        FUN_1000b3d0(L"Help HTML");
        FUN_1000b3d0(L"ServerInfo HTML");
        switch(*(undefined4 *)(*(int *)(param_1 + 0x1cc) + 0x324)) {
        case 0:
          if (*(uint *)(param_1 + 500) < 8) {
            iVar3 = param_1 + 0x1e0;
          }
          else {
            iVar3 = *(int *)(param_1 + 0x1e0);
          }
          FUN_10088e40(iVar3);
          break;
        case 1:
          if (*(uint *)(param_1 + 500) < 8) {
            puVar1 = (ushort *)(param_1 + 0x1e0);
          }
          else {
            puVar1 = *(ushort **)(param_1 + 0x1e0);
          }
          FString::FString(aFStack_4a8,puVar1);
          local_4._0_1_ = 1;
          FString::FString(aFStack_49c,(ushort *)L"HtmlString");
          local_4._0_1_ = 2;
          FUN_10040230(aFStack_49c,aFStack_4a8);
          local_4._0_1_ = 1;
          FString::~FString(aFStack_49c);
          local_4 = (uint)local_4._1_3_ << 8;
          FString::~FString(aFStack_4a8);
          if (DAT_1035786c == 0) {
            FUN_10005270();
          }
          FUN_100d1790(0x4c5,local_4d0);
        case 2:
          if (*(uint *)(param_1 + 500) < 8) {
            puVar1 = (ushort *)(param_1 + 0x1e0);
          }
          else {
            puVar1 = *(ushort **)(param_1 + 0x1e0);
          }
          FString::FString(aFStack_4b4,puVar1);
          local_4._0_1_ = 3;
          FString::FString(aFStack_4c0,(ushort *)L"HtmlString");
          local_4._0_1_ = 4;
          FUN_10040230(aFStack_4c0,aFStack_4b4);
          local_4._0_1_ = 3;
          FString::~FString(aFStack_4c0);
          local_4 = (uint)local_4._1_3_ << 8;
          FString::~FString(aFStack_4b4);
          if (DAT_1035786c == 0) {
            FUN_10005270();
          }
          FUN_100d1790(0x4c4,local_4d0);
          break;
        case 3:
          if (*(uint *)(param_1 + 500) < 8) {
            iVar3 = param_1 + 0x1e0;
          }
          else {
            iVar3 = *(int *)(param_1 + 0x1e0);
          }
          FUN_10088440(iVar3);
        }
        FUN_1008c510();
        FUN_1008bac0(local_490 + 0x2c);
        FUN_1008b9e0();
        *(int *)(param_1 + 0x1d4) = *(int *)(param_1 + 0x1d4) + 1;
      }
      if (*(int *)GLog_exref != 0) {
        FOutputDevice::Logf2((FOutputDevice *)(local_490 + 0x2c),*(ushort **)GLog_exref);
        (**(code **)(**(int **)GLog_exref + 4))();
      }
      BVar2 = FindNextFileW(local_4c4,(LPWIN32_FIND_DATAW)local_490);
    } while (BVar2 != 0);
  }
  local_4 = 0xffffffff;
  FUN_1003fff0();
  ExceptionList = local_c;
  __security_check_cookie(local_10 ^ (uint)local_4d0);
  return;
}


// ==== 100c1ad0 FUN_100c1ad0 dispatcher=100d1790 callers=FUN_100a9d20@100a9d20 FUN_100c2bd0@100c2bd0
// strings: 10258168=online | 10258150=berightback | 10258144=idle | 10258138=away | 1025812c=lunch | 10258120=busy | 10258108=onthephone | 102580f8=offline | 102580e4=invisible | 102580d8=none | 102580c8=status | 

void __fastcall FUN_100c1ad0(int param_1)

{
  FString *this;
  int iVar1;
  undefined4 uStack_70;
  FString *pFStack_6c;
  wchar_t *pwVar2;
  FString local_4c [24];
  FString local_34 [12];
  undefined1 local_28 [12];
  undefined4 local_1c;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_101f527d;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_4 = 0;
  this = (FString *)(param_1 + 0x74);
  pFStack_6c = (FString *)0x100c1b10;
  FString::operator=(this,(FString *)&stack0x00000004);
  FString::FString((FString *)&uStack_70,(ushort *)&DAT_10257fd4);
  local_4 = local_4 & 0xffffff00;
  FUN_100adfc0();
  local_4._0_1_ = 2;
  local_1c = *(undefined4 *)(param_1 + 0x4c);
  FString::FString((FString *)&uStack_70,(FString *)&stack0x00000004);
  local_4._0_1_ = 2;
  FUN_100a8540();
  pFStack_6c = (FString *)0x100c1b73;
  FUN_100c0b00();
  FUN_100a8a80(local_28);
  local_4._0_1_ = 2;
  FUN_100bdaa0();
  FString::FString(local_4c);
  local_4 = CONCAT31(local_4._1_3_,6);
  pFStack_6c = (FString *)0x100c1bb6;
  iVar1 = FString::operator==(this,(ushort *)&DAT_10251d70);
  if (iVar1 == 0) {
    pFStack_6c = (FString *)0x100c1bdb;
    iVar1 = FString::operator==(this,(ushort *)&DAT_10251d3c);
    if (iVar1 == 0) {
      pFStack_6c = (FString *)0x100c1c00;
      iVar1 = FString::operator==(this,(ushort *)&DAT_10251d34);
      if (iVar1 == 0) {
        pFStack_6c = (FString *)0x100c1c25;
        iVar1 = FString::operator==(this,(ushort *)&DAT_10251d2c);
        if (iVar1 == 0) {
          pFStack_6c = (FString *)0x100c1c4a;
          iVar1 = FString::operator==(this,(ushort *)&DAT_10251d24);
          if (iVar1 == 0) {
            pFStack_6c = (FString *)0x100c1c6f;
            iVar1 = FString::operator==(this,(ushort *)&DAT_10251d1c);
            if (iVar1 == 0) {
              pFStack_6c = (FString *)0x100c1c91;
              iVar1 = FString::operator==(this,(ushort *)&DAT_10251d14);
              if (iVar1 == 0) {
                pFStack_6c = (FString *)0x100c1cb3;
                iVar1 = FString::operator==(this,(ushort *)&DAT_10251d0c);
                if (iVar1 == 0) {
                  pFStack_6c = (FString *)0x100c1cd5;
                  iVar1 = FString::operator==(this,(ushort *)&DAT_10252c20);
                  if (iVar1 == 0) {
                    pwVar2 = L"none";
                  }
                  else {
                    pwVar2 = L"invisible";
                  }
                  pFStack_6c = (FString *)0x100c1cef;
                  FString::operator==(local_4c,(ushort *)pwVar2);
                }
                else {
                  pFStack_6c = (FString *)0x100c1cc6;
                  FString::operator=(local_4c,(ushort *)L"offline");
                }
              }
              else {
                pFStack_6c = (FString *)0x100c1ca4;
                FString::operator=(local_4c,(ushort *)L"onthephone");
              }
            }
            else {
              pFStack_6c = (FString *)0x100c1c82;
              FString::operator=(local_4c,(ushort *)L"busy");
            }
          }
          else {
            pFStack_6c = (FString *)0x100c1c5d;
            FString::operator=(local_4c,(ushort *)L"lunch");
          }
        }
        else {
          pFStack_6c = (FString *)0x100c1c38;
          FString::operator=(local_4c,(ushort *)L"away");
        }
      }
      else {
        pFStack_6c = (FString *)0x100c1c13;
        FString::operator=(local_4c,(ushort *)L"idle");
      }
    }
    else {
      pFStack_6c = (FString *)0x100c1bee;
      FString::operator=(local_4c,(ushort *)L"berightback");
    }
  }
  else {
    pFStack_6c = (FString *)0x100c1bc9;
    FString::operator=(local_4c,(ushort *)L"online");
  }
  FUN_1003f970();
  local_4._0_1_ = 7;
  pFStack_6c = (FString *)0x100c1d0c;
  FString::FString(local_34,(ushort *)L"status");
  local_4._0_1_ = 8;
  pFStack_6c = local_34;
  uStack_70 = 0x100c1d24;
  FUN_10040230();
  local_4 = CONCAT31(local_4._1_3_,7);
  FString::~FString(local_34);
  if (DAT_1035786c == 0) {
    FUN_10005270();
  }
  pFStack_6c = (FString *)0x23b;
  uStack_70 = 0x100c1d56;
  FUN_100d1790();
  local_4._0_1_ = 6;
  FUN_1003fff0();
  local_4._0_1_ = 2;
  FString::~FString(local_4c);
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_100a9100();
  local_4 = 0xffffffff;
  FString::~FString((FString *)&stack0x00000004);
  ExceptionList = local_c;
  return;
}


// ==== 10108680 execRequestTest dispatcher=100d1790 callers=DATA@10328d5c EXTERNAL@Entry Point DATA@10350a98
// strings: 10270760=INT64 | 10270760=INT64 | 

/* public: void __thiscall UUIScript::execRequestTest(struct FFrame &,void * const) */

void __thiscall UUIScript::execRequestTest(UUIScript *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  uint uStack_64;
  FString local_48 [12];
  FString local_3c [12];
  undefined1 local_30 [12];
  undefined4 local_24;
  undefined4 local_20;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
                    /* 0x108680  1690  ?execRequestTest@UUIScript@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_10201dab;
  local_10 = ExceptionList;
  uStack_64 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_64;
  ExceptionList = &local_10;
  local_8 = 0;
  FString::FString(local_3c);
  local_8 = CONCAT31(local_8._1_3_,1);
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,local_3c);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  FUN_1003fa00(local_3c);
  local_8._0_1_ = 2;
  FString::FString(local_48,(ushort *)L"INT64");
  local_8._0_1_ = 3;
  FUN_100407b0(local_48,&local_24);
  local_8._0_1_ = 2;
  FString::~FString(local_48);
  FUN_10063120(local_24,local_20);
  FUN_1003f970();
  local_8._0_1_ = 4;
  FUN_100631b0(0xbe991a83,0x1c,&local_24);
  FString::FString(local_48,(ushort *)L"INT64");
  local_8._0_1_ = 5;
  FUN_10040320(local_48,&local_24);
  local_8._0_1_ = 4;
  FString::~FString(local_48);
  puVar3 = local_30;
  uVar2 = 10;
  FUN_10005c30(10,puVar3);
  FUN_100d1790(uVar2,puVar3);
  local_8._0_1_ = 2;
  FUN_1003fff0();
  local_8._0_1_ = 1;
  FUN_1003fff0();
  local_8 = (uint)local_8._1_3_ << 8;
  FString::~FString(local_3c);
  ExceptionList = local_10;
  return;
}


// ==== 10108d00 execRequestChangePetName dispatcher=100d1790 callers=DATA@10328b98 EXTERNAL@Entry Point DATA@10350a38
// strings: 102708e0=ErrMsgNo | 102708e0=ErrMsgNo | 

/* public: void __thiscall UUIScript::execRequestChangePetName(struct FFrame &,void * const) */

void __thiscall UUIScript::execRequestChangePetName(UUIScript *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  char cVar2;
  ushort *puVar3;
  LPSTR pCVar4;
  int iVar5;
  undefined4 uVar6;
  undefined1 *puVar7;
  uint uStack_9b4;
  FString local_9a0 [12];
  undefined1 local_994 [12];
  FString local_988 [16];
  undefined1 *local_978;
  void *local_974;
  undefined1 *puStack_970;
  int local_96c;
  CHAR local_968 [800];
  WCHAR local_648 [800];
  uint local_8;
  
                    /* 0x108d00  1577  ?execRequestChangePetName@UUIScript@@QAEXAAUFFrame@@QAX@Z */
  puStack_970 = &LAB_10201ec3;
  local_974 = ExceptionList;
  uStack_9b4 = DAT_103554c4 ^ (uint)local_968;
  local_978 = (undefined1 *)&uStack_9b4;
  ExceptionList = &local_974;
  local_96c = 0;
  local_8 = uStack_9b4;
  FString::FString(local_9a0);
  local_96c = CONCAT31(local_96c._1_3_,1);
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,local_9a0);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  puVar3 = FString::operator*(local_9a0);
  appStrcpy((ushort *)local_648,puVar3);
  WideCharToMultiByte(0,0,local_648,-1,local_968,800,(LPCSTR)0x0,(LPBOOL)0x0);
  pCVar4 = local_968;
  do {
    cVar2 = *pCVar4;
    pCVar4 = pCVar4 + 1;
  } while (cVar2 != '\0');
  FUN_1003f970();
  local_96c._0_1_ = 2;
  iVar5 = FUN_10145750(local_648);
  if (iVar5 == 0) {
    iVar5 = FUN_1016e320(local_648);
    if (iVar5 == 0) goto LAB_10108e55;
    if ((int)pCVar4 - (int)(local_968 + 1) < 0x11) {
      FUN_10144ce0(local_648);
      goto LAB_10108e99;
    }
    FString::FString(local_988,(ushort *)L"ErrMsgNo");
    local_96c._0_1_ = 4;
    uVar6 = 0x50;
  }
  else {
LAB_10108e55:
    FString::FString(local_988,(ushort *)L"ErrMsgNo");
    local_96c._0_1_ = 3;
    uVar6 = 0x24f;
  }
  FUN_10040090(local_988,uVar6);
  local_96c._0_1_ = 2;
  FString::~FString(local_988);
  puVar7 = local_994;
  uVar6 = 0x406;
  FUN_10005c30(0x406,puVar7);
  FUN_100d1790(uVar6,puVar7);
LAB_10108e99:
  local_96c._0_1_ = 1;
  FUN_1003fff0();
  local_96c = (uint)local_96c._1_3_ << 8;
  FString::~FString(local_9a0);
  local_96c = 0xffffffff;
  ExceptionList = local_974;
  __security_check_cookie(local_8 ^ (uint)local_968);
  return;
}


// ==== 10109220 execExecuteEvent dispatcher=100d1790 callers=DATA@103284e8 EXTERNAL@Entry Point DATA@1034ff68
// strings: 

/* public: void __thiscall UUIEventManager::execExecuteEvent(struct FFrame &,void * const) */

void __thiscall
UUIEventManager::execExecuteEvent(UUIEventManager *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  undefined4 uVar2;
  FString *pFVar3;
  uint uStack_3c;
  FString local_2c [20];
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
                    /* 0x109220  1149  ?execExecuteEvent@UUIEventManager@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_10201f59;
  local_10 = ExceptionList;
  uStack_3c = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_3c;
  ExceptionList = &local_10;
  local_8 = 0;
  local_18 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&local_18);
  FString::FString(local_2c,(ushort *)&DAT_1022f9f8);
  local_8 = CONCAT31(local_8._1_3_,1);
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,local_2c);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  pFVar3 = local_2c;
  uVar2 = local_18;
  FUN_10005c30(local_18,pFVar3);
  FUN_100d1790(uVar2,pFVar3);
  local_8 = local_8 & 0xffffff00;
  FString::~FString(local_2c);
  ExceptionList = local_10;
  return;
}


// ==== 101095f0 execSetChatMessage dispatcher=100d1790 callers=DATA@10328dd0 EXTERNAL@Entry Point DATA@10350728
// strings: 10270a80=String | 

/* public: void __thiscall UUIScript::execSetChatMessage(struct FFrame &,void * const) */

void __thiscall UUIScript::execSetChatMessage(UUIScript *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
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
  
                    /* 0x1095f0  1719  ?execSetChatMessage@UUIScript@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_1020201a;
  local_10 = ExceptionList;
  uStack_50 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_50;
  ExceptionList = &local_10;
  local_8 = 0;
  FString::FString(local_34);
  local_8 = CONCAT31(local_8._1_3_,1);
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,local_34);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  FUN_1003f970();
  local_8._0_1_ = 2;
  FString::FString(local_40,(ushort *)L"String");
  local_8._0_1_ = 3;
  FUN_10040230(local_40,local_34);
  local_8._0_1_ = 2;
  FString::~FString(local_40);
  puVar3 = local_28;
  uVar2 = 0x230;
  FUN_10005c30(0x230,puVar3);
  FUN_100d1790(uVar2,puVar3);
  local_8._0_1_ = 1;
  FUN_1003fff0();
  local_8 = (uint)local_8._1_3_ << 8;
  FString::~FString(local_34);
  ExceptionList = local_10;
  return;
}


// ==== 1011a860 execRequestActionList dispatcher=100d1790 callers=DATA@10328b64 EXTERNAL@Entry Point DATA@103504ac
// strings: 102418a0=Type | 10274024=ActionID | 10246348=Name | 10246314=IconName | 10246284=Description | 102566f8=%s%s | 10274014=Command | 

/* public: void __thiscall UActionAPI::execRequestActionList(struct FFrame &,void * const) */

void __thiscall UActionAPI::execRequestActionList(UActionAPI *this,FFrame *param_1,void *param_2)

{
  int iVar1;
  uint *puVar2;
  int iVar3;
  ushort *puVar4;
  int iVar5;
  undefined4 uVar6;
  FString *pFVar7;
  undefined1 *puVar8;
  uint uStack_978;
  FString local_968 [12];
  FString local_95c [12];
  FString local_950 [12];
  FString local_944 [12];
  FString local_938 [12];
  FString local_92c [12];
  FString local_920 [16];
  FString local_910 [12];
  FString local_904 [16];
  FString local_8f4 [12];
  int local_8e8;
  undefined1 local_8e4 [12];
  undefined1 *local_8d8;
  void *local_8d4;
  undefined1 *puStack_8d0;
  uint local_8cc;
  undefined1 local_8c8 [4];
  int local_8c4;
  int local_814;
  ushort local_808 [1024];
  uint local_8;
  
                    /* 0x11a860  1564  ?execRequestActionList@UActionAPI@@QAEXAAUFFrame@@QAX@Z */
  puStack_8d0 = &LAB_10204d04;
  local_8d4 = ExceptionList;
  uStack_978 = DAT_103554c4 ^ (uint)local_8c8;
  local_8d8 = (undefined1 *)&uStack_978;
  ExceptionList = &local_8d4;
  iVar5 = 0;
  local_8cc = 0;
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  puVar2 = &uStack_978;
  local_8 = uStack_978;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
    puVar2 = (uint *)local_8d8;
  }
  local_8d8 = (undefined1 *)puVar2;
  FUN_1003f970();
  local_8cc._0_1_ = 1;
  FString::FString(local_8f4,(ushort *)&DAT_1022f9f8);
  local_8cc._0_1_ = 2;
  pFVar7 = local_8f4;
  uVar6 = 0x514;
  FUN_10005c30(0x514,pFVar7);
  FUN_100d1790(uVar6,pFVar7);
  local_8cc = CONCAT31(local_8cc._1_3_,1);
  FString::~FString(local_8f4);
  do {
    local_8e8 = iVar5;
    if (*(int *)(GL2GameData_exref + 0x3d30) <= iVar5) {
      local_8cc = local_8cc & 0xffffff00;
      FUN_1003fff0();
      local_8cc = 0xffffffff;
      ExceptionList = local_8d4;
      __security_check_cookie(local_8 ^ (uint)local_8c8);
      return;
    }
    iVar1 = iVar5 * 4;
    iVar3 = *(int *)(GL2GameData_exref + 0x3d2c);
    if (**(int **)(iVar1 + iVar3) != 0) {
      if (*(int *)(*(int *)(iVar3 + iVar1) + 0xc) == 1) {
        if (*(int *)(*(int *)(iVar3 + iVar1) + 4) == 0x25) {
          iVar3 = FUN_1014f080();
          if (iVar3 == 0) goto LAB_1011ac61;
        }
        FUN_101458e0(local_8c8);
        if (**(int **)(*(int *)(*(int *)(GL2GameData_exref + 0x3d2c) + iVar1) + 0x10) == -1) {
          iVar3 = FUN_1014dd00();
          if (iVar3 != 0) {
            iVar3 = FUN_1014dd00();
            if (*(int *)(iVar3 + 0x204) != 0) {
              iVar3 = FUN_1014dd00();
              if ((*(int *)(*(int *)(iVar3 + 0x204) + 0x718) != 0) ||
                 ((local_814 != 0 && (-1 < local_8c4)))) goto LAB_1011a9e8;
            }
          }
          goto LAB_1011ac61;
        }
      }
LAB_1011a9e8:
      iVar1 = *(int *)(iVar1 + *(int *)(GL2GameData_exref + 0x3d2c));
      FUN_1003faa0();
      FString::FString(local_8f4,(ushort *)L"Type");
      local_8cc._0_1_ = 3;
      FUN_10040090(local_8f4,*(undefined4 *)(iVar1 + 0xc));
      local_8cc._0_1_ = 1;
      FString::~FString(local_8f4);
      FString::FString(local_950,(ushort *)L"ActionID");
      local_8cc._0_1_ = 4;
      FUN_10040090(local_950,*(undefined4 *)(iVar1 + 4));
      local_8cc._0_1_ = 1;
      FString::~FString(local_950);
      puVar4 = FString::operator*((FString *)(iVar1 + 0x1c));
      FString::FString(local_904,puVar4);
      local_8cc._0_1_ = 5;
      FString::FString(local_968,(ushort *)L"Name");
      local_8cc._0_1_ = 6;
      FUN_10040230(local_968,local_904);
      local_8cc._0_1_ = 5;
      FString::~FString(local_968);
      local_8cc._0_1_ = 1;
      FString::~FString(local_904);
      puVar4 = FString::operator*((FString *)(iVar1 + 0x28));
      FString::FString(local_92c,puVar4);
      local_8cc._0_1_ = 7;
      FString::FString(local_944,(ushort *)L"IconName");
      local_8cc._0_1_ = 8;
      FUN_10040230(local_944,local_92c);
      local_8cc._0_1_ = 7;
      FString::~FString(local_944);
      local_8cc._0_1_ = 1;
      FString::~FString(local_92c);
      puVar4 = FString::operator*((FString *)(iVar1 + 0x34));
      FString::FString(local_910,puVar4);
      local_8cc._0_1_ = 9;
      FString::FString(local_95c,(ushort *)L"Description");
      local_8cc._0_1_ = 10;
      FUN_10040230(local_95c,local_910);
      local_8cc._0_1_ = 9;
      FString::~FString(local_95c);
      local_8cc = CONCAT31(local_8cc._1_3_,1);
      FString::~FString(local_910);
      iVar1 = *(int *)(iVar1 + 4);
      if ((iVar1 != 0x14) &&
         (((((iVar1 != 0x1b && (iVar1 != 0x20)) && (iVar1 != 0x24)) &&
           ((iVar1 != 0x27 && ((iVar1 < 0x29 || (0x31 < iVar1)))))) && (iVar1 < 1000)))) {
        if (iVar1 < 0) {
          appMemset(local_808,0,0x400);
        }
        else {
          puVar4 = FL2GameData::GetCmdStringByActionID((FL2GameData *)GL2GameData_exref,iVar1);
          appSprintf(local_808,(ushort *)L"%s%s",PTR_DAT_10350c70,puVar4);
        }
        FString::FString(local_938,local_808);
        local_8cc._0_1_ = 0xb;
        FString::FString(local_920,(ushort *)L"Command");
        local_8cc._0_1_ = 0xc;
        FUN_10040230(local_920,local_938);
        local_8cc._0_1_ = 0xb;
        FString::~FString(local_920);
        local_8cc = CONCAT31(local_8cc._1_3_,1);
        FString::~FString(local_938);
      }
      puVar8 = local_8e4;
      uVar6 = 0x51e;
      FUN_10005c30(0x51e,puVar8);
      FUN_100d1790(uVar6,puVar8);
    }
LAB_1011ac61:
    iVar5 = iVar5 + 1;
  } while( true );
}


// ==== 1011ace0 execRequestPetActionList dispatcher=100d1790 callers=DATA@10328cc4 EXTERNAL@Entry Point DATA@103504a8
// strings: 102418a0=Type | 10274024=ActionID | 10246348=Name | 10246314=IconName | 10246284=Description | 102566f8=%s%s | 10274014=Command | 10274084=Error! | 10274014=Command | 

/* public: void __thiscall UActionAPI::execRequestPetActionList(struct FFrame &,void * const) */

void __thiscall UActionAPI::execRequestPetActionList(UActionAPI *this,FFrame *param_1,void *param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  uint *puVar4;
  ushort *puVar5;
  code *pcVar6;
  FString *pFVar7;
  bool bVar8;
  undefined4 uVar9;
  undefined1 *puVar10;
  uint uStack_998;
  FString local_988 [12];
  FString local_97c [12];
  FString local_970 [12];
  FString local_964 [12];
  FString local_958 [12];
  FString local_94c [12];
  FString local_940 [12];
  FString local_934 [12];
  FString local_928 [16];
  FString local_918 [12];
  FString local_90c [12];
  FString local_900 [12];
  int local_8f4;
  uint local_8ec;
  int local_8e8;
  undefined1 local_8e4 [12];
  undefined1 *local_8d8;
  void *local_8d4;
  undefined1 *puStack_8d0;
  int local_8cc;
  int local_8c8;
  int local_8c4;
  int local_818;
  ushort local_808 [1024];
  uint local_8;
  
                    /* 0x11ace0  1652  ?execRequestPetActionList@UActionAPI@@QAEXAAUFFrame@@QAX@Z */
  puStack_8d0 = &LAB_10204dbf;
  local_8d4 = ExceptionList;
  uStack_998 = DAT_103554c4 ^ (uint)&local_8c8;
  local_8d8 = (undefined1 *)&uStack_998;
  ExceptionList = &local_8d4;
  local_8cc = 0;
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  puVar4 = &uStack_998;
  local_8 = uStack_998;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
    puVar4 = (uint *)local_8d8;
  }
  local_8d8 = (undefined1 *)puVar4;
  FUN_1003f970();
  local_8cc._0_1_ = 1;
  FString::FString(local_900,(ushort *)&DAT_1022f9f8);
  local_8cc._0_1_ = 2;
  pFVar7 = local_900;
  uVar9 = 0x528;
  FUN_10005c30(0x528,pFVar7);
  FUN_100d1790(uVar9,pFVar7);
  local_8cc._0_1_ = 1;
  FString::~FString(local_900);
  FUN_101458e0(&local_8c8);
  if ((local_8c4 == -1) || (local_8c8 != 2)) {
    local_8cc = (uint)local_8cc._1_3_ << 8;
    FUN_1003fff0();
  }
  else {
    local_8e8 = 0;
    pcVar6 = GL2GameData_exref;
    while (iVar3 = local_8e8, local_8e8 < *(int *)(pcVar6 + 0x3d30)) {
      if (*(int *)(*(int *)(*(int *)(pcVar6 + 0x3d2c) + local_8e8 * 4) + 0xc) == 4) {
        piVar1 = (int *)(*(int *)(pcVar6 + 0x3d2c) + local_8e8 * 4);
        bVar8 = **(int **)(*piVar1 + 0x10) == -2;
        local_8ec = (uint)bVar8;
        for (local_8f4 = 0; iVar2 = *piVar1, local_8f4 < *(int *)(iVar2 + 0x14);
            local_8f4 = local_8f4 + 1) {
          if (*(int *)(*(int *)(iVar2 + 0x10) + local_8f4 * 4) == local_818 + -1000000) {
            bVar8 = true;
            local_8ec = 1;
          }
        }
        pcVar6 = GL2GameData_exref;
        if (bVar8) {
          FUN_1003faa0();
          FString::FString(local_900,(ushort *)L"Type");
          local_8cc._0_1_ = 3;
          FUN_10040090(local_900,*(undefined4 *)(iVar2 + 0xc));
          local_8cc._0_1_ = 1;
          FString::~FString(local_900);
          FString::FString(local_970,(ushort *)L"ActionID");
          local_8cc._0_1_ = 4;
          FUN_10040090(local_970,*(undefined4 *)(iVar2 + 4));
          local_8cc._0_1_ = 1;
          FString::~FString(local_970);
          puVar5 = FString::operator*((FString *)(iVar2 + 0x1c));
          FString::FString(local_90c,puVar5);
          local_8cc._0_1_ = 5;
          FString::FString(local_988,(ushort *)L"Name");
          local_8cc._0_1_ = 6;
          FUN_10040230(local_988,local_90c);
          local_8cc._0_1_ = 5;
          FString::~FString(local_988);
          local_8cc._0_1_ = 1;
          FString::~FString(local_90c);
          puVar5 = FString::operator*((FString *)(iVar2 + 0x28));
          FString::FString(local_934,puVar5);
          local_8cc._0_1_ = 7;
          FString::FString(local_97c,(ushort *)L"IconName");
          local_8cc._0_1_ = 8;
          FUN_10040230(local_97c,local_934);
          local_8cc._0_1_ = 7;
          FString::~FString(local_97c);
          local_8cc._0_1_ = 1;
          FString::~FString(local_934);
          puVar5 = FString::operator*((FString *)(iVar2 + 0x34));
          FString::FString(local_94c,puVar5);
          local_8cc._0_1_ = 9;
          FString::FString(local_964,(ushort *)L"Description");
          local_8cc._0_1_ = 10;
          FUN_10040230(local_964,local_94c);
          local_8cc._0_1_ = 9;
          FString::~FString(local_964);
          local_8cc._0_1_ = 1;
          FString::~FString(local_94c);
          iVar2 = *(int *)(iVar2 + 4);
          if ((((iVar2 == 0x14) || (iVar2 == 0x1b)) || (iVar2 == 0x20)) ||
             ((((iVar2 == 0x24 || (iVar2 == 0x27)) || ((0x28 < iVar2 && (iVar2 < 0x32)))) ||
              (999 < iVar2)))) {
            FString::FString(local_958,(ushort *)L"Error!");
            local_8cc._0_1_ = 0xb;
            FString::FString(local_940,(ushort *)L"Command");
            local_8cc._0_1_ = 0xc;
            FUN_10040230(local_940,local_958);
            local_8cc._0_1_ = 0xb;
            FString::~FString(local_940);
            pFVar7 = local_958;
          }
          else {
            if (iVar2 < 0) {
              appMemset(local_808,0,0x400);
            }
            else {
              puVar5 = FL2GameData::GetCmdStringByActionID((FL2GameData *)GL2GameData_exref,iVar2);
              appSprintf(local_808,(ushort *)L"%s%s",PTR_DAT_10350c70,puVar5);
            }
            FString::FString(local_928,local_808);
            local_8cc._0_1_ = 0xd;
            FString::FString(local_918,(ushort *)L"Command");
            local_8cc._0_1_ = 0xe;
            FUN_10040230(local_918,local_928);
            local_8cc._0_1_ = 0xd;
            FString::~FString(local_918);
            pFVar7 = local_928;
          }
          local_8cc._0_1_ = 1;
          FString::~FString(pFVar7);
          puVar10 = local_8e4;
          uVar9 = 0x532;
          FUN_10005c30(0x532,puVar10);
          FUN_100d1790(uVar9,puVar10);
          pcVar6 = GL2GameData_exref;
        }
      }
      local_8e8 = iVar3 + 1;
    }
    local_8cc = (uint)local_8cc._1_3_ << 8;
    FUN_1003fff0();
    local_8cc = -1;
  }
  ExceptionList = local_8d4;
  __security_check_cookie(local_8 ^ (uint)&local_8c8);
  return;
}


// ==== 1011b190 execRequestSummonedActionList dispatcher=100d1790 callers=DATA@10328d50 EXTERNAL@Entry Point DATA@103504a4
// strings: 102418a0=Type | 10274024=ActionID | 10246348=Name | 10246314=IconName | 10246284=Description | 102566f8=%s%s | 10274014=Command | 10274084=Error! | 10274014=Command | 

/* public: void __thiscall UActionAPI::execRequestSummonedActionList(struct FFrame &,void * const)
    */

void __thiscall
UActionAPI::execRequestSummonedActionList(UActionAPI *this,FFrame *param_1,void *param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  uint *puVar4;
  ushort *puVar5;
  FString *pFVar6;
  code *pcVar7;
  bool bVar8;
  undefined4 uVar9;
  undefined1 *puVar10;
  uint uStack_998;
  FString local_988 [12];
  FString local_97c [12];
  FString local_970 [12];
  FString local_964 [12];
  FString local_958 [12];
  FString local_94c [12];
  FString local_940 [12];
  FString local_934 [12];
  FString local_928 [16];
  FString local_918 [12];
  FString local_90c [12];
  FString local_900 [12];
  int local_8f4;
  uint local_8ec;
  int local_8e8;
  undefined1 local_8e4 [12];
  undefined1 *local_8d8;
  void *local_8d4;
  undefined1 *puStack_8d0;
  int local_8cc;
  int local_8c8;
  int local_8c4;
  int local_818;
  ushort local_808 [1024];
  uint local_8;
  
                    /* 0x11b190  1687
                       ?execRequestSummonedActionList@UActionAPI@@QAEXAAUFFrame@@QAX@Z */
  puStack_8d0 = &LAB_10204e7f;
  local_8d4 = ExceptionList;
  uStack_998 = DAT_103554c4 ^ (uint)&local_8c8;
  local_8d8 = (undefined1 *)&uStack_998;
  ExceptionList = &local_8d4;
  local_8cc = 0;
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  puVar4 = &uStack_998;
  local_8 = uStack_998;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
    puVar4 = (uint *)local_8d8;
  }
  local_8d8 = (undefined1 *)puVar4;
  FUN_1003f970();
  local_8cc._0_1_ = 1;
  FString::FString(local_900,(ushort *)&DAT_1022f9f8);
  local_8cc._0_1_ = 2;
  pFVar6 = local_900;
  uVar9 = 0x53c;
  FUN_10005c30(0x53c,pFVar6);
  FUN_100d1790(uVar9,pFVar6);
  local_8cc._0_1_ = 1;
  FString::~FString(local_900);
  FUN_101458e0(&local_8c8);
  if ((local_8c4 == -1) || (local_8c8 != 1)) {
    local_8cc = (uint)local_8cc._1_3_ << 8;
    FUN_1003fff0();
  }
  else {
    local_8e8 = 0;
    pcVar7 = GL2GameData_exref;
    while (iVar3 = local_8e8, local_8e8 < *(int *)(pcVar7 + 0x3d30)) {
      piVar1 = *(int **)(*(int *)(pcVar7 + 0x3d2c) + local_8e8 * 4);
      if ((*piVar1 != 0) && (piVar1[3] == 5)) {
        piVar1 = (int *)(*(int *)(pcVar7 + 0x3d2c) + local_8e8 * 4);
        bVar8 = **(int **)(*piVar1 + 0x10) == -2;
        local_8ec = (uint)bVar8;
        for (local_8f4 = 0; iVar2 = *piVar1, local_8f4 < *(int *)(iVar2 + 0x14);
            local_8f4 = local_8f4 + 1) {
          if (*(int *)(*(int *)(iVar2 + 0x10) + local_8f4 * 4) == local_818 + -1000000) {
            local_8ec = 1;
            bVar8 = true;
          }
        }
        pcVar7 = GL2GameData_exref;
        if (bVar8) {
          FUN_1003faa0();
          FString::FString(local_900,(ushort *)L"Type");
          local_8cc._0_1_ = 3;
          FUN_10040090(local_900,*(undefined4 *)(iVar2 + 0xc));
          local_8cc._0_1_ = 1;
          FString::~FString(local_900);
          FString::FString(local_970,(ushort *)L"ActionID");
          local_8cc._0_1_ = 4;
          FUN_10040090(local_970,*(undefined4 *)(iVar2 + 4));
          local_8cc._0_1_ = 1;
          FString::~FString(local_970);
          puVar5 = FString::operator*((FString *)(iVar2 + 0x1c));
          FString::FString(local_90c,puVar5);
          local_8cc._0_1_ = 5;
          FString::FString(local_988,(ushort *)L"Name");
          local_8cc._0_1_ = 6;
          FUN_10040230(local_988,local_90c);
          local_8cc._0_1_ = 5;
          FString::~FString(local_988);
          local_8cc._0_1_ = 1;
          FString::~FString(local_90c);
          puVar5 = FString::operator*((FString *)(iVar2 + 0x28));
          FString::FString(local_934,puVar5);
          local_8cc._0_1_ = 7;
          FString::FString(local_97c,(ushort *)L"IconName");
          local_8cc._0_1_ = 8;
          FUN_10040230(local_97c,local_934);
          local_8cc._0_1_ = 7;
          FString::~FString(local_97c);
          local_8cc._0_1_ = 1;
          FString::~FString(local_934);
          puVar5 = FString::operator*((FString *)(iVar2 + 0x34));
          FString::FString(local_94c,puVar5);
          local_8cc._0_1_ = 9;
          FString::FString(local_964,(ushort *)L"Description");
          local_8cc._0_1_ = 10;
          FUN_10040230(local_964,local_94c);
          local_8cc._0_1_ = 9;
          FString::~FString(local_964);
          local_8cc._0_1_ = 1;
          FString::~FString(local_94c);
          iVar2 = *(int *)(iVar2 + 4);
          if ((((iVar2 == 0x14) || (iVar2 == 0x1b)) || (iVar2 == 0x20)) ||
             ((((iVar2 == 0x24 || (iVar2 == 0x27)) || ((0x28 < iVar2 && (iVar2 < 0x32)))) ||
              (999 < iVar2)))) {
            FString::FString(local_958,(ushort *)L"Error!");
            local_8cc._0_1_ = 0xb;
            FString::FString(local_940,(ushort *)L"Command");
            local_8cc._0_1_ = 0xc;
            FUN_10040230(local_940,local_958);
            local_8cc._0_1_ = 0xb;
            FString::~FString(local_940);
            pFVar6 = local_958;
          }
          else {
            if (iVar2 < 0) {
              appMemset(local_808,0,0x400);
            }
            else {
              puVar5 = FL2GameData::GetCmdStringByActionID((FL2GameData *)GL2GameData_exref,iVar2);
              appSprintf(local_808,(ushort *)L"%s%s",PTR_DAT_10350c70,puVar5);
            }
            FString::FString(local_928,local_808);
            local_8cc._0_1_ = 0xd;
            FString::FString(local_918,(ushort *)L"Command");
            local_8cc._0_1_ = 0xe;
            FUN_10040230(local_918,local_928);
            local_8cc._0_1_ = 0xd;
            FString::~FString(local_918);
            pFVar6 = local_928;
          }
          local_8cc._0_1_ = 1;
          FString::~FString(pFVar6);
          puVar10 = local_8e4;
          uVar9 = 0x546;
          FUN_10005c30(0x546,puVar10);
          FUN_100d1790(uVar9,puVar10);
          pcVar7 = GL2GameData_exref;
        }
      }
      local_8e8 = iVar3 + 1;
    }
    local_8cc = (uint)local_8cc._1_3_ << 8;
    FUN_1003fff0();
    local_8cc = -1;
  }
  ExceptionList = local_8d4;
  __security_check_cookie(local_8 ^ (uint)&local_8c8);
  return;
}


// ==== 1011d670 execRequestMacroList dispatcher=100d1790 callers=DATA@10328c8c EXTERNAL@Entry Point DATA@10350448
// strings: 10274934=ID_%d | 1027491c=IconName_%d | 10274900=MacroName_%d | 102748e0=Description_%d | 102748c0=TextureName_%d | 

/* public: void __thiscall UMacroAPI::execRequestMacroList(struct FFrame &,void * const) */

void __thiscall UMacroAPI::execRequestMacroList(UMacroAPI *this,FFrame *param_1,void *param_2)

{
  int iVar1;
  uint *puVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  ushort *puVar6;
  undefined1 *puVar7;
  uint uStack_ac;
  FString local_9c [12];
  FString local_90 [12];
  undefined1 *local_84;
  void *local_80;
  undefined1 *puStack_7c;
  int local_78;
  FString local_74 [12];
  FString local_68 [12];
  FString local_5c [12];
  FString local_50 [16];
  FString local_40 [12];
  FString local_34 [12];
  FString local_28 [12];
  int local_1c;
  int local_18;
  undefined1 local_10 [12];
  
                    /* 0x11d670  1638  ?execRequestMacroList@UMacroAPI@@QAEXAAUFFrame@@QAX@Z */
  puStack_7c = &LAB_10205342;
  local_80 = ExceptionList;
  uStack_ac = DAT_103554c4 ^ (uint)local_74;
  local_84 = (undefined1 *)&uStack_ac;
  ExceptionList = &local_80;
  local_78 = 0;
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  puVar2 = &uStack_ac;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
    puVar2 = (uint *)local_84;
  }
  local_84 = (undefined1 *)puVar2;
  FUN_1003f970();
  local_78._0_1_ = 1;
  iVar3 = FUN_101acf70();
  local_18 = iVar3;
  FString::FString(local_28,(ushort *)&DAT_10274940);
  local_78._0_1_ = 2;
  FUN_10040090(local_28,iVar3);
  local_78._0_1_ = 1;
  FString::~FString(local_28);
  local_1c = 0;
  while (iVar1 = local_1c, local_1c < iVar3) {
    iVar3 = FUN_101adb70(local_1c);
    if (iVar3 != 0) {
      uVar4 = FString::Printf((ushort *)local_5c,L"ID_%d",iVar1);
      local_78._0_1_ = 3;
      uVar5 = FUN_101b3e00();
      FUN_10040090(uVar4,uVar5);
      local_78._0_1_ = 1;
      FString::~FString(local_5c);
      iVar3 = FUN_101b3f10();
      if (iVar3 != 0) {
        puVar6 = (ushort *)FUN_101b3f10();
        FString::FString(local_28,puVar6);
        local_78._0_1_ = 4;
        uVar4 = FString::Printf((ushort *)local_90,L"IconName_%d",iVar1);
        local_78._0_1_ = 5;
        FUN_10040230(uVar4,local_28);
        local_78._0_1_ = 4;
        FString::~FString(local_90);
        local_78._0_1_ = 1;
        FString::~FString(local_28);
      }
      iVar3 = FUN_101b3e80();
      if (iVar3 != 0) {
        puVar6 = (ushort *)FUN_101b3e80();
        FString::FString(local_34,puVar6);
        local_78._0_1_ = 6;
        uVar4 = FString::Printf((ushort *)local_68,L"MacroName_%d",iVar1);
        local_78._0_1_ = 7;
        FUN_10040230(uVar4,local_34);
        local_78._0_1_ = 6;
        FString::~FString(local_68);
        local_78._0_1_ = 1;
        FString::~FString(local_34);
      }
      iVar3 = FUN_101b4030();
      if (iVar3 != 0) {
        puVar6 = (ushort *)FUN_101b4030();
        FString::FString(local_40,puVar6);
        local_78._0_1_ = 8;
        uVar4 = FString::Printf((ushort *)local_74,L"Description_%d",iVar1);
        local_78._0_1_ = 9;
        FUN_10040230(uVar4,local_40);
        local_78._0_1_ = 8;
        FString::~FString(local_74);
        local_78._0_1_ = 1;
        FString::~FString(local_40);
      }
      iVar3 = FUN_101b3fa0();
      if (iVar3 != 0) {
        puVar6 = (ushort *)FUN_101b3fa0();
        FString::FString(local_50,puVar6);
        local_78._0_1_ = 10;
        uVar4 = FString::Printf((ushort *)local_9c,L"TextureName_%d",iVar1);
        local_78._0_1_ = 0xb;
        FUN_10040230(uVar4,local_50);
        local_78._0_1_ = 10;
        FString::~FString(local_9c);
        local_78._0_1_ = 1;
        FString::~FString(local_50);
      }
    }
    iVar3 = local_18;
    local_1c = iVar1 + 1;
  }
  puVar7 = local_10;
  uVar4 = 0x4e2;
  FUN_10005c30(0x4e2,puVar7);
  FUN_100d1790(uVar4,puVar7);
  local_78 = (uint)local_78._1_3_ << 8;
  FUN_1003fff0();
  ExceptionList = local_80;
  return;
}


// ==== 1011d970 execRequestDeleteMacro dispatcher=100d1790 callers=DATA@10328c14 EXTERNAL@Entry Point DATA@10350440
// strings: 1027498c=MacroID | 

/* public: void __thiscall UMacroAPI::execRequestDeleteMacro(struct FFrame &,void * const) */

void __thiscall UMacroAPI::execRequestDeleteMacro(UMacroAPI *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  uint uStack_58;
  L2ParamStack local_48 [16];
  FString local_38 [12];
  undefined1 local_2c [20];
  void *local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
                    /* 0x11d970  1608  ?execRequestDeleteMacro@UMacroAPI@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_1020537a;
  local_10 = ExceptionList;
  uStack_58 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_58;
  ExceptionList = &local_10;
  local_8 = 0;
  local_18 = (void *)0x0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&local_18);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  L2ParamStack::L2ParamStack(local_48,10);
  local_8._0_1_ = 1;
  L2ParamStack::PushBack(local_48,local_18);
  FUN_10143b40(local_48);
  FUN_1003f970();
  local_8._0_1_ = 2;
  FString::FString(local_38,(ushort *)L"MacroID");
  local_8._0_1_ = 3;
  FUN_10040090(local_38,local_18);
  local_8._0_1_ = 2;
  FString::~FString(local_38);
  puVar3 = local_2c;
  uVar2 = 0x4f6;
  FUN_10005c30(0x4f6,puVar3);
  FUN_100d1790(uVar2,puVar3);
  local_8._0_1_ = 1;
  FUN_1003fff0();
  local_8 = (uint)local_8._1_3_ << 8;
  L2ParamStack::~L2ParamStack(local_48);
  ExceptionList = local_10;
  return;
}


// ==== 1011f2e0 execRequestPetInventoryItemList dispatcher=100d1790 callers=DATA@10328cc8 EXTERNAL@Entry Point DATA@103503fc
// strings: 

/* public: void __thiscall UPetAPI::execRequestPetInventoryItemList(struct FFrame &,void * const) */

void __thiscall
UPetAPI::execRequestPetInventoryItemList(UPetAPI *this,FFrame *param_1,void *param_2)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  FString *pFVar5;
  undefined1 *puVar6;
  uint uStack_48;
  FString local_38 [12];
  undefined1 local_2c [20];
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
                    /* 0x11f2e0  1653
                       ?execRequestPetInventoryItemList@UPetAPI@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_10205731;
  local_10 = ExceptionList;
  uStack_48 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_48;
  ExceptionList = &local_10;
  iVar3 = 0;
  local_8 = 0;
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  puVar1 = &uStack_48;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
    puVar1 = (uint *)local_14;
  }
  local_14 = (undefined1 *)puVar1;
  FUN_1003f970();
  local_8._0_1_ = 1;
  FString::FString(local_38,(ushort *)&DAT_1022f9f8);
  local_8._0_1_ = 2;
  pFVar5 = local_38;
  uVar4 = 0x424;
  FUN_10005c30(0x424,pFVar5);
  FUN_100d1790(uVar4,pFVar5);
  local_8 = CONCAT31(local_8._1_3_,1);
  FString::~FString(local_38);
  while( true ) {
    local_18 = iVar3;
    iVar2 = FUN_101ad530();
    if (iVar2 <= iVar3) break;
    iVar2 = FUN_101ae540(iVar3);
    if (iVar2 != 0) {
      FUN_1003faa0();
      FUN_10066c70(iVar2,local_2c);
      puVar6 = local_2c;
      uVar4 = 0x42e;
      FUN_10005c30(0x42e,puVar6);
      FUN_100d1790(uVar4,puVar6);
    }
    iVar3 = iVar3 + 1;
  }
  local_8 = local_8 & 0xffffff00;
  FUN_1003fff0();
  ExceptionList = local_10;
  return;
}


// ==== 1011fa60 execRequestQuestList dispatcher=100d1790 callers=DATA@10328ce8 EXTERNAL@Entry Point DATA@103503e0
// strings: 

/* public: void __thiscall UQuestAPI::execRequestQuestList(struct FFrame &,void * const) */

void __thiscall UQuestAPI::execRequestQuestList(UQuestAPI *this,FFrame *param_1,void *param_2)

{
  uint *puVar1;
  undefined4 uVar2;
  FString *pFVar3;
  uint uStack_38;
  FString local_28 [20];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
                    /* 0x11fa60  1661  ?execRequestQuestList@UQuestAPI@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_10205832;
  local_10 = ExceptionList;
  uStack_38 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_38;
  ExceptionList = &local_10;
  local_8 = 0;
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  puVar1 = &uStack_38;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
    puVar1 = (uint *)local_14;
  }
  local_14 = (undefined1 *)puVar1;
  FString::FString(local_28,(ushort *)&DAT_1022f9f8);
  local_8._0_1_ = 1;
  pFVar3 = local_28;
  uVar2 = 700;
  FUN_10005c30(700,pFVar3);
  FUN_100d1790(uVar2,pFVar3);
  local_8._0_1_ = 0;
  FString::~FString(local_28);
  (**(code **)(**(int **)(*(int *)(DAT_103663bc + 0x50) + 0x60) + 0x4e4))();
  FString::FString(local_28,(ushort *)&DAT_1022f9f8);
  local_8._0_1_ = 2;
  pFVar3 = local_28;
  uVar2 = 0x2d0;
  FUN_10005c30(0x2d0,pFVar3);
  FUN_100d1790(uVar2,pFVar3);
  local_8 = (uint)local_8._1_3_ << 8;
  FString::~FString(local_28);
  ExceptionList = local_10;
  return;
}


// ==== 10138600 FUN_10138600 dispatcher=100d1790 callers=FUN_10014a40@10014a40
// strings: 1027c6e8=ColorR | 1027c6d8=ColorG | 1027c6c8=ColorB | 1027c6b8=ColorA | 

void __fastcall FUN_10138600(int *param_1)

{
  int *piVar1;
  int iVar2;
  ushort *puVar3;
  int iVar4;
  undefined4 uVar5;
  undefined1 *puVar6;
  uint uStack_5c;
  FString local_4c [12];
  FString local_40 [12];
  undefined1 local_34 [20];
  int local_20;
  int local_1c;
  FColor local_18;
  undefined1 local_17;
  undefined1 local_16;
  undefined1 local_15;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_10208f3e;
  local_10 = ExceptionList;
  uStack_5c = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_5c;
  ExceptionList = &local_10;
  iVar4 = 0;
  local_8 = 0;
  local_1c = 1;
  *param_1 = *param_1 - param_1[5];
  if (*param_1 < 0) {
    *param_1 = 0;
  }
  iVar2 = FUN_10136cc0(*param_1);
  if (iVar2 != 0) {
    local_1c = 0;
  }
  for (; local_20 = iVar4, iVar4 < param_1[0xb]; iVar4 = iVar4 + 1) {
    iVar2 = iVar4 * 8;
    piVar1 = (int *)(param_1[10] + 4 + iVar2);
    *piVar1 = *piVar1 - param_1[5];
    piVar1 = (int *)(param_1[10] + 4 + iVar2);
    if (*piVar1 < 0) {
      *piVar1 = 0;
    }
    iVar2 = FUN_10136cc0(*(undefined4 *)(param_1[10] + iVar2 + 4));
    if (iVar2 != 0) {
      local_1c = 0;
    }
  }
  if ((param_1[1] != 0) && (local_1c != 0)) {
    param_1[1] = 0;
    FColor::FColor(&local_18,0xffb09b79);
    FUN_1003f970();
    local_8._0_1_ = 1;
    puVar3 = FString::operator*((FString *)(GL2GameData_exref + 0x39bb8));
    FString::FString(local_4c,puVar3);
    local_8._0_1_ = 2;
    FString::FString(local_40,(ushort *)&DAT_1027c6f8);
    local_8._0_1_ = 3;
    FUN_10040230(local_40,local_4c);
    local_8._0_1_ = 2;
    FString::~FString(local_40);
    local_8._0_1_ = 1;
    FString::~FString(local_4c);
    FString::FString(local_4c,(ushort *)L"ColorR");
    local_8._0_1_ = 4;
    FUN_10040090(local_4c,local_16);
    local_8._0_1_ = 1;
    FString::~FString(local_4c);
    FString::FString(local_4c,(ushort *)L"ColorG");
    local_8._0_1_ = 5;
    FUN_10040090(local_4c,local_17);
    local_8._0_1_ = 1;
    FString::~FString(local_4c);
    FString::FString(local_4c,(ushort *)L"ColorB");
    local_8._0_1_ = 6;
    FUN_10040090(local_4c,local_18);
    local_8._0_1_ = 1;
    FString::~FString(local_4c);
    FString::FString(local_4c,(ushort *)L"ColorA");
    local_8._0_1_ = 7;
    FUN_10040090(local_4c,local_15);
    local_8._0_1_ = 1;
    FString::~FString(local_4c);
    puVar6 = local_34;
    uVar5 = 0x640;
    FUN_10005c30(0x640,puVar6);
    FUN_100d1790(uVar5,puVar6);
    local_8 = (uint)local_8._1_3_ << 8;
    FUN_1003fff0();
  }
  ExceptionList = local_10;
  return;
}


// ==== 10138a40 FUN_10138a40 dispatcher=100d1790 callers=FUN_10019880@10019880
// strings: 1027c6e8=ColorR | 1027c6d8=ColorG | 1027c6c8=ColorB | 1027c6b8=ColorA | 1027c6e8=ColorR | 1027c6d8=ColorG | 1027c6c8=ColorB | 1027c6b8=ColorA | 1027c6e8=ColorR | 1027c6d8=ColorG | 1027c6c8=ColorB | 1027c6b8=ColorA | 1027c6e8=ColorR | 1027c6d8=ColorG | 1027c6c8=ColorB | 1027c6b8=ColorA | 

void __thiscall FUN_10138a40(int *param_1,uint param_2,ushort *param_3)

{
  int iVar1;
  ushort *puVar2;
  ushort *puVar3;
  int iVar4;
  undefined4 uVar5;
  undefined1 *puVar6;
  uint uStack_54;
  FString local_44 [12];
  FString local_38 [12];
  undefined1 local_2c [4];
  undefined4 local_28;
  int local_24;
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_10209083;
  local_10 = ExceptionList;
  uStack_54 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_54;
  ExceptionList = &local_10;
  local_8 = 0;
  if (param_3 != (ushort *)0x0) {
    iVar1 = FUN_10136d50(param_2,*param_1);
    *param_1 = *param_1 + iVar1;
    if ((param_1[1] == 0) && (iVar1 = FUN_10136c30(*param_1), iVar1 != 0)) {
      FColor::FColor((FColor *)&param_2,0xffb09b79);
      FUN_1003f970();
      local_8._0_1_ = 1;
      puVar2 = FString::operator*((FString *)(GL2GameData_exref + 0x39b5c));
      FString::FString(local_44,puVar2);
      local_8._0_1_ = 2;
      FString::FString(local_38,(ushort *)&DAT_1027c6f8);
      local_8._0_1_ = 3;
      FUN_10040230(local_38,local_44);
      local_8._0_1_ = 2;
      FString::~FString(local_38);
      local_8._0_1_ = 1;
      FString::~FString(local_44);
      FString::FString(local_44,(ushort *)L"ColorR");
      local_8._0_1_ = 4;
      FUN_10040090(local_44,param_2 >> 0x10 & 0xff);
      local_8._0_1_ = 1;
      FString::~FString(local_44);
      FString::FString(local_44,(ushort *)L"ColorG");
      local_8._0_1_ = 5;
      FUN_10040090(local_44,param_2 >> 8 & 0xff);
      local_8._0_1_ = 1;
      FString::~FString(local_44);
      FString::FString(local_44,(ushort *)L"ColorB");
      local_8._0_1_ = 6;
      FUN_10040090(local_44,param_2 & 0xff);
      local_8._0_1_ = 1;
      FString::~FString(local_44);
      FString::FString(local_44,(ushort *)L"ColorA");
      local_8._0_1_ = 7;
      FUN_10040090(local_44,param_2 >> 0x18);
      local_8._0_1_ = 1;
      FString::~FString(local_44);
      puVar6 = local_2c;
      uVar5 = 0x640;
      FUN_10005c30(0x640,puVar6);
      FUN_100d1790(uVar5,puVar6);
      FUN_1003faa0();
      puVar2 = FString::operator*((FString *)(GL2GameData_exref + 0x3c454));
      FString::FString(local_38,puVar2);
      local_8._0_1_ = 8;
      FString::FString(local_44,(ushort *)&DAT_1027c6f8);
      local_8._0_1_ = 9;
      FUN_10040230(local_44,local_38);
      local_8._0_1_ = 8;
      FString::~FString(local_44);
      local_8._0_1_ = 1;
      FString::~FString(local_38);
      FString::FString(local_44,(ushort *)L"ColorR");
      local_8._0_1_ = 10;
      FUN_10040090(local_44,param_2 >> 0x10 & 0xff);
      local_8._0_1_ = 1;
      FString::~FString(local_44);
      FString::FString(local_44,(ushort *)L"ColorG");
      local_8._0_1_ = 0xb;
      FUN_10040090(local_44,param_2 >> 8 & 0xff);
      local_8._0_1_ = 1;
      FString::~FString(local_44);
      FString::FString(local_44,(ushort *)L"ColorB");
      local_8._0_1_ = 0xc;
      FUN_10040090(local_44,param_2 & 0xff);
      local_8._0_1_ = 1;
      FString::~FString(local_44);
      FString::FString(local_44,(ushort *)L"ColorA");
      local_8._0_1_ = 0xd;
      FUN_10040090(local_44,param_2 >> 0x18);
      local_8._0_1_ = 1;
      FString::~FString(local_44);
      puVar6 = local_2c;
      uVar5 = 0x640;
      FUN_10005c30(0x640,puVar6);
      FUN_100d1790(uVar5,puVar6);
      param_1[1] = 1;
      local_8 = (uint)local_8._1_3_ << 8;
      FUN_1003fff0();
    }
    local_18 = 0;
    while( true ) {
      if (param_1[0xb] <= local_18) {
        FUN_10136e80();
        param_2 = FUN_10004ed0(0x14);
        local_8._0_1_ = 0x1b;
        if (param_2 == 0) {
          local_28 = 0;
        }
        else {
          local_28 = FUN_1004f780(param_3);
        }
        local_8 = (uint)local_8._1_3_ << 8;
        local_24 = param_1[8];
        FUN_101384d0(&local_28);
        ExceptionList = local_10;
        return;
      }
      iVar1 = local_18 * 8;
      puVar2 = param_3;
      puVar3 = (ushort *)FUN_1004f5c0(0);
      iVar4 = appStrcmp(puVar3,puVar2);
      if (iVar4 == 0) break;
      local_18 = local_18 + 1;
    }
    param_3 = (ushort *)(iVar1 + param_1[10]);
    iVar4 = FUN_10136df0(*(undefined4 *)((int)param_3 + 4));
    *(int *)((int)param_3 + 4U) = *(int *)((int)param_3 + 4U) + iVar4;
    if ((param_1[1] == 0) &&
       (iVar1 = FUN_10136c30(*(undefined4 *)(param_1[10] + iVar1 + 4)), iVar1 != 0)) {
      param_1[1] = 1;
      FColor::FColor((FColor *)&param_3,0xffb09b79);
      FUN_1003f970();
      local_8._0_1_ = 0xe;
      puVar2 = FString::operator*((FString *)(GL2GameData_exref + 0x39b5c));
      FString::FString(local_38,puVar2);
      local_8._0_1_ = 0xf;
      FString::FString(local_44,(ushort *)&DAT_1027c6f8);
      local_8._0_1_ = 0x10;
      FUN_10040230(local_44,local_38);
      local_8._0_1_ = 0xf;
      FString::~FString(local_44);
      local_8._0_1_ = 0xe;
      FString::~FString(local_38);
      FString::FString(local_44,(ushort *)L"ColorR");
      local_8._0_1_ = 0x11;
      FUN_10040090(local_44,(uint)param_3 >> 0x10 & 0xff);
      local_8._0_1_ = 0xe;
      FString::~FString(local_44);
      FString::FString(local_44,(ushort *)L"ColorG");
      local_8._0_1_ = 0x12;
      FUN_10040090(local_44,(uint)param_3 >> 8 & 0xff);
      local_8._0_1_ = 0xe;
      FString::~FString(local_44);
      FString::FString(local_44,(ushort *)L"ColorB");
      local_8._0_1_ = 0x13;
      FUN_10040090(local_44,(uint)param_3 & 0xff);
      local_8._0_1_ = 0xe;
      FString::~FString(local_44);
      FString::FString(local_44,(ushort *)L"ColorA");
      local_8._0_1_ = 0x14;
      FUN_10040090(local_44,(uint)param_3 >> 0x18);
      local_8._0_1_ = 0xe;
      FString::~FString(local_44);
      puVar6 = local_2c;
      uVar5 = 0x640;
      FUN_10005c30(0x640,puVar6);
      FUN_100d1790(uVar5,puVar6);
      FUN_1003faa0();
      puVar2 = FString::operator*((FString *)(GL2GameData_exref + 0x3c454));
      FString::FString(local_38,puVar2);
      local_8._0_1_ = 0x15;
      FString::FString(local_44,(ushort *)&DAT_1027c6f8);
      local_8._0_1_ = 0x16;
      FUN_10040230(local_44,local_38);
      local_8._0_1_ = 0x15;
      FString::~FString(local_44);
      local_8._0_1_ = 0xe;
      FString::~FString(local_38);
      FString::FString(local_44,(ushort *)L"ColorR");
      local_8._0_1_ = 0x17;
      FUN_10040090(local_44,(uint)param_3 >> 0x10 & 0xff);
      local_8._0_1_ = 0xe;
      FString::~FString(local_44);
      FString::FString(local_44,(ushort *)L"ColorG");
      local_8._0_1_ = 0x18;
      FUN_10040090(local_44,(uint)param_3 >> 8 & 0xff);
      local_8._0_1_ = 0xe;
      FString::~FString(local_44);
      FString::FString(local_44,(ushort *)L"ColorB");
      local_8._0_1_ = 0x19;
      FUN_10040090(local_44,(uint)param_3 & 0xff);
      local_8._0_1_ = 0xe;
      FString::~FString(local_44);
      FString::FString(local_44,(ushort *)L"ColorA");
      local_8._0_1_ = 0x1a;
      FUN_10040090(local_44,(uint)param_3 >> 0x18);
      local_8._0_1_ = 0xe;
      FString::~FString(local_44);
      puVar6 = local_2c;
      uVar5 = 0x640;
      FUN_10005c30(0x640,puVar6);
      FUN_100d1790(uVar5,puVar6);
      local_8 = (uint)local_8._1_3_ << 8;
      FUN_1003fff0();
    }
  }
  ExceptionList = local_10;
  return;
}


// ==== 101392c0 FUN_101392c0 dispatcher=100d1790 callers=FUN_1013e640@1013e640 FUN_1013e510@1013e510 FUN_10141990@10141990 FUN_1014e8f0@1014e8f0 FUN_1014e8f0@1014e8f0 FUN_1014e8f0@1014e8f0 FUN_10170860@10170860 FUN_10170860@10170860 FUN_1013a320@1013a320 FUN_1013df30@1013df30
// strings: 102418a0=Type | 1027c6e8=ColorR | 1027c6d8=ColorG | 1027c6c8=ColorB | 1027c828=SysType | 

void FUN_101392c0(ushort *param_1,ulong param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  uint uStack_54;
  FString local_44 [12];
  FString local_38 [12];
  undefined1 local_2c [20];
  int *local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_10209127;
  local_10 = ExceptionList;
  uStack_54 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_54;
  ExceptionList = &local_10;
  local_8 = 0;
  FColor::FColor((FColor *)&param_2,param_2);
  FUN_1003f970();
  local_8._0_1_ = 1;
  FString::FString(local_38,(ushort *)L"Type");
  iVar1 = param_3;
  local_8._0_1_ = 2;
  FUN_10040090(local_38,param_3);
  local_8._0_1_ = 1;
  FString::~FString(local_38);
  FString::FString(local_44,param_1);
  local_8._0_1_ = 3;
  FString::FString(local_38,(ushort *)&DAT_1027c6f8);
  local_8._0_1_ = 4;
  FUN_10040230(local_38,local_44);
  local_8._0_1_ = 3;
  FString::~FString(local_38);
  local_8._0_1_ = 1;
  FString::~FString(local_44);
  FString::FString(local_44,(ushort *)L"ColorR");
  local_8._0_1_ = 5;
  FUN_10040090(local_44,param_2 >> 0x10 & 0xff);
  local_8._0_1_ = 1;
  FString::~FString(local_44);
  FString::FString(local_44,(ushort *)L"ColorG");
  local_8._0_1_ = 6;
  FUN_10040090(local_44,param_2 >> 8 & 0xff);
  local_8._0_1_ = 1;
  FString::~FString(local_44);
  FString::FString(local_44,(ushort *)L"ColorB");
  local_8._0_1_ = 7;
  FUN_10040090(local_44,param_2 & 0xff);
  local_8._0_1_ = 1;
  FString::~FString(local_44);
  if (iVar1 == 5) {
    FString::FString(local_44,(ushort *)L"SysType");
    local_8._0_1_ = 8;
    FUN_10040090(local_44,param_4);
    local_8._0_1_ = 1;
    FString::~FString(local_44);
  }
  puVar3 = local_2c;
  uVar2 = 0x21c;
  FUN_10005c30(0x21c,puVar3);
  FUN_100d1790(uVar2,puVar3);
  if (*(int *)GL2TextCapture_exref == 2) {
    (**(code **)(*local_18 + 0x1fc))(param_1);
  }
  local_8 = (uint)local_8._1_3_ << 8;
  FUN_1003fff0();
  ExceptionList = local_10;
  return;
}


// ==== 10139700 FUN_10139700 dispatcher=100d1790 callers=FUN_1013bf90@1013bf90
// strings: 1027c8a8="%s  | 10270a80=String | 1027c8a8="%s  | 10270a80=String | 

void __thiscall FUN_10139700(int param_1,int param_2)

{
  FString *this;
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
  
  puStack_c = &LAB_102091c4;
  local_10 = ExceptionList;
  uStack_50 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_50;
  ExceptionList = &local_10;
  local_8 = 0;
  if (param_2 == 0) {
    if (*(int *)(param_1 + 0x210) < 1) goto LAB_1013985b;
    uVar1 = FUN_1004f5c0(0);
    FString::Printf((ushort *)local_34,L"\"%s ",uVar1);
    local_8._0_1_ = 4;
    FUN_1003f970();
    local_8._0_1_ = 5;
    FString::FString(local_40,(ushort *)L"String");
    local_8._0_1_ = 6;
    FUN_10040230(local_40,local_34);
    local_8._0_1_ = 5;
    FString::~FString(local_40);
    puVar2 = local_28;
    uVar1 = 0x230;
    FUN_10005c30(0x230,puVar2);
    FUN_100d1790(uVar1,puVar2);
    local_8._0_1_ = 4;
    FUN_1003fff0();
    this = local_34;
  }
  else {
    local_14 = (undefined1 *)&uStack_50;
    FString::Printf((ushort *)local_40,L"\"%s ",param_2);
    local_8._0_1_ = 1;
    FUN_1003f970();
    local_8._0_1_ = 2;
    FString::FString(local_34,(ushort *)L"String");
    local_8._0_1_ = 3;
    FUN_10040230(local_34,local_40);
    local_8._0_1_ = 2;
    FString::~FString(local_34);
    puVar2 = local_28;
    uVar1 = 0x230;
    FUN_10005c30(0x230,puVar2);
    FUN_100d1790(uVar1,puVar2);
    local_8._0_1_ = 1;
    FUN_1003fff0();
    this = local_40;
  }
  local_8 = (uint)local_8._1_3_ << 8;
  FString::~FString(this);
LAB_1013985b:
  *(undefined4 *)(param_1 + 0x21c) = 1;
  ExceptionList = local_10;
  return;
}


// ==== 101398c0 FUN_101398c0 dispatcher=100d1790 callers=FUN_1013bf90@1013bf90
// strings: 1027c8f0=%s%s  | 10270a80=String | 10270a80=String | 1027c8f0=%s%s  | 10270a80=String | 

void __thiscall FUN_101398c0(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  void *pvVar3;
  int iVar4;
  undefined4 uVar5;
  FString *pFVar6;
  uint uStack_50;
  FString local_40 [12];
  FString local_34 [12];
  FString local_28 [20];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  pvVar3 = ExceptionList;
  puStack_c = &LAB_10209249;
  local_10 = ExceptionList;
  uStack_50 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_50;
  ExceptionList = &local_10;
  local_8 = 0;
  if (*(int *)(param_1 + 0x21c) != 0) {
    if (param_2 == 0) {
      iVar4 = *(int *)(param_1 + 0x210);
      iVar2 = *(int *)(param_1 + 0x218);
      if (iVar2 == iVar4 + -1) {
        *(int *)(param_1 + 0x218) = iVar2 + 1;
        local_14 = (undefined1 *)&uStack_50;
        FString::FString(local_28);
        local_8._0_1_ = 5;
        pFVar6 = (FString *)FString::Printf((ushort *)local_40,&DAT_1022dde0,PTR_DAT_10350e28);
        local_8._0_1_ = 6;
        FString::operator=(local_28,pFVar6);
        local_8._0_1_ = 5;
        FString::~FString(local_40);
        FUN_1003f970();
        local_8._0_1_ = 7;
        FString::FString(local_40,(ushort *)L"String");
        local_8._0_1_ = 8;
        FUN_10040230(local_40,local_28);
        local_8._0_1_ = 7;
        FString::~FString(local_40);
        pFVar6 = local_34;
        uVar5 = 0x230;
        FUN_10005c30(0x230,pFVar6);
        FUN_100d1790(uVar5,pFVar6);
        local_8._0_1_ = 5;
        FUN_1003fff0();
        local_8 = (uint)local_8._1_3_ << 8;
        FString::~FString(local_28);
      }
      else if (iVar2 <= iVar4 + -1) {
        *(int *)(param_1 + 0x218) = iVar2 + 1;
        if (iVar4 + -1 < iVar2 + 1) {
          *(int *)(param_1 + 0x218) = iVar4 + -1;
        }
        if (iVar4 < 1) {
          ExceptionList = pvVar3;
          return;
        }
        iVar4 = FUN_1004f5c0(0);
        if (iVar4 == 0) {
          ExceptionList = local_10;
          return;
        }
        FString::FString(local_28);
        local_8._0_1_ = 9;
        uVar5 = FUN_1004f5c0(0);
        pFVar6 = (FString *)FString::Printf((ushort *)local_40,L"%s%s ",PTR_DAT_10350e28,uVar5);
        local_8._0_1_ = 10;
        FString::operator=(local_28,pFVar6);
        local_8._0_1_ = 9;
        FString::~FString(local_40);
        FUN_1003f970();
        local_8._0_1_ = 0xb;
        FString::FString(local_40,(ushort *)L"String");
        local_8._0_1_ = 0xc;
        FUN_10040230(local_40,local_28);
        local_8._0_1_ = 0xb;
        FString::~FString(local_40);
        pFVar6 = local_34;
        uVar5 = 0x230;
        FUN_10005c30(0x230,pFVar6);
        FUN_100d1790(uVar5,pFVar6);
        local_8._0_1_ = 9;
        FUN_1003fff0();
        local_8 = (uint)local_8._1_3_ << 8;
        FString::~FString(local_28);
        ExceptionList = local_10;
        return;
      }
      ExceptionList = local_10;
      return;
    }
    piVar1 = (int *)(param_1 + 0x218);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 < 0) {
      *(undefined4 *)(param_1 + 0x218) = 0;
    }
    if ((0 < *(int *)(param_1 + 0x210)) &&
       (local_14 = (undefined1 *)&uStack_50, iVar4 = FUN_1004f5c0(0), iVar4 != 0)) {
      FString::FString(local_34);
      local_8._0_1_ = 1;
      uVar5 = FUN_1004f5c0(0);
      pFVar6 = (FString *)FString::Printf((ushort *)local_40,L"%s%s ",PTR_DAT_10350e28,uVar5);
      local_8._0_1_ = 2;
      FString::operator=(local_34,pFVar6);
      local_8._0_1_ = 1;
      FString::~FString(local_40);
      FUN_1003f970();
      local_8._0_1_ = 3;
      FString::FString(local_40,(ushort *)L"String");
      local_8._0_1_ = 4;
      FUN_10040230(local_40,local_34);
      local_8._0_1_ = 3;
      FString::~FString(local_40);
      pFVar6 = local_28;
      uVar5 = 0x230;
      FUN_10005c30(0x230,pFVar6);
      FUN_100d1790(uVar5,pFVar6);
      local_8._0_1_ = 1;
      FUN_1003fff0();
      local_8 = (uint)local_8._1_3_ << 8;
      FString::~FString(local_34);
      ExceptionList = local_10;
      return;
    }
  }
  ExceptionList = local_10;
  return;
}


// ==== 1013a320 FUN_1013a320 dispatcher=100d1790 callers=FUN_1013c310@1013c310 FUN_10148bd0@10148bd0
// strings: 1027c984=Message | 

void __thiscall FUN_1013a320(int param_1,undefined1 *param_2)

{
  FL2ReplayManager *pFVar1;
  APawn *this;
  int iVar2;
  FL2MagicSkillData *pFVar3;
  FL2MagicSkillCommandData *pFVar4;
  User *this_00;
  short *psVar5;
  undefined4 uVar6;
  ushort *puVar7;
  int iVar8;
  undefined4 uVar9;
  undefined1 *puVar10;
  undefined4 uVar11;
  FString *pFVar12;
  uint local_da0;
  undefined4 local_d90 [2];
  undefined4 local_d88;
  undefined4 local_d84;
  undefined4 local_d80;
  undefined4 local_cdc [2];
  undefined4 local_cd4;
  undefined4 local_cd0;
  undefined4 local_ccc;
  undefined4 local_c28;
  undefined4 local_c24;
  undefined4 local_c1c;
  undefined4 local_c18;
  undefined4 local_b74;
  undefined4 local_b70;
  undefined4 local_b68;
  undefined4 local_b64;
  undefined4 local_ac0;
  undefined4 local_abc;
  undefined4 local_ab8;
  undefined4 local_ab4;
  undefined4 local_ab0;
  undefined4 local_a0c;
  undefined4 local_a08;
  undefined4 local_a04;
  undefined4 local_a00;
  undefined4 local_9fc;
  FString local_958 [12];
  FString local_94c [12];
  FString local_940 [16];
  FString local_930 [12];
  FString local_924 [12];
  FString local_918 [19];
  char local_905;
  APawn *local_904;
  int local_900;
  ushort local_8fc [1024];
  ushort local_fc [100];
  ushort local_34 [4];
  L2ParamStack local_2c [4];
  undefined1 local_28 [16];
  uint local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  puStack_c = &LAB_10209425;
  local_10 = ExceptionList;
  local_da0 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&local_da0;
  ExceptionList = &local_10;
  local_8 = 0;
  local_18 = local_da0;
  local_904 = (APawn *)FUN_1014ddb0();
  if ((local_904 != (APawn *)0x0) && (*(int *)(local_904 + 0x62c) == 6)) {
    *(undefined4 *)(local_904 + 0x62c) = 0;
    goto LAB_1013a37f;
  }
  appMemset(local_fc,0,200);
  FUN_1014dd00();
  switch(param_2) {
  case (undefined1 *)0x1:
    puVar7 = FParser::GetRemainStr((FParser *)(param_1 + 0x25c));
    FUN_1003f970();
    local_8._0_1_ = 1;
    if (puVar7 != (ushort *)0x0) {
      FString::FString(local_94c,puVar7);
      local_8._0_1_ = 2;
      FString::FString(local_958,(ushort *)L"Message");
      local_8._0_1_ = 3;
      FUN_10040230(local_958,local_94c);
      local_8._0_1_ = 2;
      FString::~FString(local_958);
      local_8._0_1_ = 1;
      FString::~FString(local_94c);
    }
    puVar10 = local_28;
    uVar6 = 0x781;
    FUN_10005c30(0x781,puVar10);
    FUN_100d1790(uVar6,puVar10);
    local_8 = (uint)local_8._1_3_ << 8;
    FUN_1003fff0();
    local_8 = -1;
    break;
  case (undefined1 *)0x2:
    FUN_10144db0();
    local_8 = -1;
    break;
  case (undefined1 *)0x3:
    FUN_10144dc0();
    local_8 = -1;
    break;
  case (undefined1 *)0x4:
    FUN_10144120(0);
    local_8 = -1;
    break;
  case (undefined1 *)0x5:
    FUN_10144120(1);
    local_8 = -1;
    break;
  case (undefined1 *)0x6:
    FUN_10144130(0);
    local_8 = -1;
    break;
  case (undefined1 *)0x7:
    FUN_10144130(1);
    local_8 = -1;
    break;
  case (undefined1 *)0x8:
    iVar2 = FUN_1014ddd0();
    iVar8 = FUN_1014dd00();
    if ((iVar8 != 0) && (iVar2 != 0)) {
      uVar6 = 0;
LAB_1013a530:
      iVar8 = *(int *)(iVar8 + 0x204);
      FUN_1014ca10(*(undefined4 *)(iVar2 + 0x18),*(undefined4 *)(iVar8 + 0x1bc),
                   *(undefined4 *)(iVar8 + 0x1c0),*(undefined4 *)(iVar8 + 0x1c4),0,uVar6);
      local_8 = -1;
      break;
    }
    goto switchD_1013a3ca_caseD_28;
  case (undefined1 *)0x9:
    iVar8 = FUN_1014ddd0();
    iVar2 = FUN_1014dd00();
    if ((iVar2 != 0) && (iVar8 != 0)) {
      iVar2 = *(int *)(iVar2 + 0x204);
      FUN_101440d0(*(undefined4 *)(iVar8 + 0x18),*(undefined4 *)(iVar2 + 0x1bc),
                   *(undefined4 *)(iVar2 + 0x1c0),*(undefined4 *)(iVar2 + 0x1c4));
      local_8 = -1;
      break;
    }
    goto switchD_1013a3ca_caseD_28;
  case (undefined1 *)0xa:
    iVar2 = FUN_1014ddd0();
    iVar8 = FUN_1014dd00();
    if ((iVar8 != 0) && (iVar2 != 0)) {
      uVar6 = 1;
      goto LAB_1013a530;
    }
    goto switchD_1013a3ca_caseD_28;
  case (undefined1 *)0xb:
    iVar8 = FUN_1014ddd0();
    if ((iVar8 != 0) && (*(int *)(iVar8 + 0x204) != 0)) {
      FUN_101430e0(*(undefined4 *)(*(int *)(iVar8 + 0x204) + 0x60));
      local_8 = -1;
      break;
    }
    goto switchD_1013a3ca_caseD_28;
  case (undefined1 *)0xc:
    local_900 = param_1 + 0x25c;
    puVar7 = (ushort *)FUN_10135980();
    if (puVar7 == (ushort *)0x0) {
LAB_1013a655:
      uVar11 = 0;
      uVar9 = 5;
      uVar6 = 0xffb09b79;
      puVar7 = FString::operator*((FString *)(GL2GameData_exref + 0x4044c));
      FUN_101392c0(puVar7,uVar6,uVar9,uVar11);
      local_8 = -1;
      break;
    }
    while (puVar7 != (ushort *)0x0) {
      FUN_10135a20(puVar7);
      appStrcat(local_fc,puVar7);
      puVar7 = (ushort *)FUN_10135980();
      if (puVar7 == (ushort *)0x0) break;
      appStrcat(local_fc,&DAT_1023d5d0);
    }
    if (((local_fc[0] != 0) && (iVar8 = FUN_10145900(local_fc), iVar8 != 0)) &&
       (*(int *)(iVar8 + 0x204) != 0)) {
      FUN_1014c6a0(*(undefined4 *)(iVar8 + 0x18));
      local_8 = -1;
      break;
    }
    goto switchD_1013a3ca_caseD_28;
  case (undefined1 *)0xd:
    iVar8 = FUN_1014ddd0();
    if ((iVar8 == 0) || (*(int *)(iVar8 + 0x204) == 0)) {
      uVar6 = 0xffffffff;
    }
    else {
      uVar6 = *(undefined4 *)(*(int *)(iVar8 + 0x204) + 0x60);
    }
    FUN_1014c7c0(200,uVar6);
    local_8 = -1;
    break;
  case (undefined1 *)0xe:
    FUN_1014c720(200,0xffffffff);
    local_8 = -1;
    break;
  case (undefined1 *)0xf:
    FUN_1015a770();
    local_8 = -1;
    break;
  case (undefined1 *)0x10:
    psVar5 = (short *)FUN_10135980();
    if ((psVar5 == (short *)0x0) || (*psVar5 == 0)) {
      iVar8 = FUN_1014ddd0();
      if ((iVar8 == 0) || (*(int *)(iVar8 + 8) != 0)) {
        FUN_10170650(0xb9,0xffb09b79);
        local_8 = -1;
        break;
      }
      L2ParamStack::L2ParamStack(local_2c,10);
      local_8 = CONCAT31(local_8._1_3_,7);
      L2ParamStack::PushBack(local_2c,(void *)(iVar8 + 0x1c));
      L2ParamStack::PushBack(local_2c,*(void **)GL2PartyLooting_exref);
      FUN_10144860(local_2c);
    }
    else {
      L2ParamStack::L2ParamStack(local_2c,10);
      local_8 = CONCAT31(local_8._1_3_,6);
      L2ParamStack::PushBack(local_2c,psVar5);
      L2ParamStack::PushBack(local_2c,*(void **)GL2PartyLooting_exref);
      FUN_10144860(local_2c);
    }
    goto LAB_1013bd7b;
  case (undefined1 *)0x11:
    L2ParamStack::L2ParamStack(local_2c,10);
    local_8 = CONCAT31(local_8._1_3_,8);
    FUN_10144880(local_2c);
    goto LAB_1013bd7b;
  case (undefined1 *)0x12:
    puVar7 = (ushort *)FUN_10135980();
    while (puVar7 != (ushort *)0x0) {
      FUN_10135a20(puVar7);
      appStrcat(local_fc,puVar7);
      puVar7 = (ushort *)FUN_10135980();
      if (puVar7 == (ushort *)0x0) break;
      appStrcat(local_fc,&DAT_1023d5d0);
    }
    if (local_fc[0] == 0) {
      iVar8 = FUN_1014ddd0();
      if ((iVar8 != 0) && (*(int *)(iVar8 + 8) == 0)) {
        appStrcpy(local_fc,(ushort *)(iVar8 + 0x1c));
      }
      if (local_fc[0] == 0) {
        FUN_10170650(0xbb,0xffb09b79);
        local_8 = -1;
        break;
      }
    }
    L2ParamStack::L2ParamStack(local_2c,10);
    local_8 = CONCAT31(local_8._1_3_,9);
    L2ParamStack::PushBack(local_2c,local_fc);
    FUN_10144890(local_2c);
    goto LAB_1013bd7b;
  case (undefined1 *)0x13:
    FUN_10145240();
    local_8 = -1;
    break;
  case (undefined1 *)0x14:
    L2ParamStack::L2ParamStack(local_2c,10);
    local_8._0_1_ = 10;
    L2ParamStack::PushBack(local_2c,(void *)0x1);
    L2ParamStack::PushBack(local_2c,(void *)0xffffffff);
    L2ParamStack::PushBack(local_2c,(void *)0x1);
    FUN_10149af0(local_2c);
    FString::FString(local_940,(ushort *)&DAT_1022f9f8);
    local_8._0_1_ = 0xb;
    pFVar12 = local_940;
    uVar6 = 0x65e;
    FUN_10005c30(0x65e,pFVar12);
    FUN_100d1790(uVar6,pFVar12);
    local_8 = CONCAT31(local_8._1_3_,10);
    FString::~FString(local_940);
    goto LAB_1013bd7b;
  case (undefined1 *)0x15:
    FUN_10144110(2);
    local_8 = -1;
    break;
  case (undefined1 *)0x16:
    FUN_10144110(3);
    local_8 = -1;
    break;
  case (undefined1 *)0x17:
    FUN_10144110(4);
    local_8 = -1;
    break;
  case (undefined1 *)0x18:
    local_900 = param_1 + 0x25c;
    puVar7 = (ushort *)FUN_10135980();
    if (puVar7 == (ushort *)0x0) goto LAB_1013a655;
    while (puVar7 != (ushort *)0x0) {
      FUN_10135a20(puVar7);
      appStrcat(local_fc,puVar7);
      puVar7 = (ushort *)FUN_10135980();
      if (puVar7 == (ushort *)0x0) break;
      appStrcat(local_fc,&DAT_1023d5d0);
    }
    pFVar4 = FL2GameData::GetMSCommandData((FL2GameData *)GL2GameData_exref,local_fc);
    if (pFVar4 != (FL2MagicSkillCommandData *)0x0) {
      pFVar3 = FL2GameData::GetMSData((FL2GameData *)GL2GameData_exref,*(int *)pFVar4,1);
      this = local_904;
      if (*(int *)(pFVar3 + 0x30) != 0xc) {
        L2ParamStack::L2ParamStack(local_2c,10);
        local_8 = CONCAT31(local_8._1_3_,0xc);
        L2ParamStack::PushBack(local_2c,*(void **)pFVar4);
        L2ParamStack::PushBack(local_2c,(void *)0x0);
        L2ParamStack::PushBack(local_2c,(void *)0x0);
        FUN_10143b50(local_2c);
        goto LAB_1013bd7b;
      }
      if (*(int *)(local_904 + 0x62c) != 5) {
        (**(code **)(**(int **)(local_904 + 0x14d8) + 800))();
        APawn::NActionStop(this);
        *(undefined4 *)(this + 0x62c) = 6;
        *(undefined4 *)(this + 0x648) = *(undefined4 *)pFVar4;
        local_8 = -1;
        break;
      }
    }
    goto switchD_1013a3ca_caseD_28;
  case (undefined1 *)0x19:
    local_900 = param_1 + 0x25c;
    puVar7 = (ushort *)FUN_10135980();
    if (puVar7 == (ushort *)0x0) goto LAB_1013a655;
    while (puVar7 != (ushort *)0x0) {
      FUN_10135a20(puVar7);
      appStrcat(local_fc,puVar7);
      puVar7 = (ushort *)FUN_10135980();
      if (puVar7 == (ushort *)0x0) break;
      appStrcat(local_fc,&DAT_1023d5d0);
    }
    pFVar4 = FL2GameData::GetMSCommandData((FL2GameData *)GL2GameData_exref,local_fc);
    if (pFVar4 != (FL2MagicSkillCommandData *)0x0) {
      L2ParamStack::L2ParamStack(local_2c,10);
      local_8 = CONCAT31(local_8._1_3_,0xd);
      L2ParamStack::PushBack(local_2c,*(void **)pFVar4);
      L2ParamStack::PushBack(local_2c,(void *)0x1);
      L2ParamStack::PushBack(local_2c,(void *)0x0);
      FUN_10143b50(local_2c);
      goto LAB_1013bd7b;
    }
    goto switchD_1013a3ca_caseD_28;
  case (undefined1 *)0x1a:
    local_900 = param_1 + 0x25c;
    puVar7 = (ushort *)FUN_10135980();
    if (puVar7 == (ushort *)0x0) goto LAB_1013a655;
    while (puVar7 != (ushort *)0x0) {
      FUN_10135a20(puVar7);
      appStrcat(local_fc,puVar7);
      puVar7 = (ushort *)FUN_10135980();
      if (puVar7 == (ushort *)0x0) break;
      appStrcat(local_fc,&DAT_1023d5d0);
    }
    pFVar4 = FL2GameData::GetMSCommandData((FL2GameData *)GL2GameData_exref,local_fc);
    if (pFVar4 != (FL2MagicSkillCommandData *)0x0) {
      L2ParamStack::L2ParamStack(local_2c,10);
      local_8 = CONCAT31(local_8._1_3_,0xe);
      L2ParamStack::PushBack(local_2c,*(void **)pFVar4);
      L2ParamStack::PushBack(local_2c,(void *)0x0);
      L2ParamStack::PushBack(local_2c,(void *)0x1);
      FUN_10143b50(local_2c);
      goto LAB_1013bd7b;
    }
    goto switchD_1013a3ca_caseD_28;
  case (undefined1 *)0x1b:
    iVar8 = FUN_10135980();
    FUN_10135a20(iVar8);
    if ((iVar8 != 0) &&
       (local_904 = (APawn *)thunk_FUN_101c1b01(iVar8), local_904 + -1 < (APawn *)0xa)) {
      iVar8 = FUN_10135980();
      FUN_10135a20(iVar8);
      if ((iVar8 != 0) && (iVar8 = thunk_FUN_101c1b01(iVar8), iVar8 - 1U < 0xc)) {
        uVar6 = 0;
LAB_1013aed5:
        uVar9 = 0;
LAB_1013aed6:
        FUN_10171680(iVar8 + -0xd + (int)local_904 * 0xc,uVar9,uVar6);
        local_8 = -1;
        break;
      }
    }
    goto switchD_1013a3ca_caseD_28;
  case (undefined1 *)0x1c:
    iVar8 = FUN_10135980();
    FUN_10135a20(iVar8);
    if ((iVar8 != 0) &&
       (local_904 = (APawn *)thunk_FUN_101c1b01(iVar8), local_904 + -1 < (APawn *)0xa)) {
      iVar8 = FUN_10135980();
      FUN_10135a20(iVar8);
      if ((iVar8 != 0) && (iVar8 = thunk_FUN_101c1b01(iVar8), iVar8 - 1U < 0xc)) {
        uVar6 = 0;
        uVar9 = 1;
        goto LAB_1013aed6;
      }
    }
    goto switchD_1013a3ca_caseD_28;
  case (undefined1 *)0x1d:
    iVar8 = FUN_10135980();
    FUN_10135a20(iVar8);
    if ((iVar8 != 0) &&
       (local_904 = (APawn *)thunk_FUN_101c1b01(iVar8), local_904 + -1 < (APawn *)0xa)) {
      iVar8 = FUN_10135980();
      FUN_10135a20(iVar8);
      if ((iVar8 != 0) && (iVar8 = thunk_FUN_101c1b01(iVar8), iVar8 - 1U < 0xc)) {
        uVar6 = 1;
        goto LAB_1013aed5;
      }
    }
    goto switchD_1013a3ca_caseD_28;
  case (undefined1 *)0x1e:
    iVar8 = FUN_1014ddd0();
    if ((iVar8 == 0) || (*(int *)(iVar8 + 8) != 0)) {
      FUN_10170650(0x1ff,0xffb09b79);
      local_8 = -1;
      break;
    }
    L2ParamStack::L2ParamStack(local_2c,10);
    local_8 = CONCAT31(local_8._1_3_,0xf);
    L2ParamStack::PushBack(local_2c,*(void **)(*(int *)(iVar8 + 0x204) + 0x60));
    FUN_10170650(0x1fe,0xffb09b79);
    FUN_10144460(local_2c);
    goto LAB_1013bd7b;
  case (undefined1 *)0x1f:
    FUN_1000ef40();
    local_8._0_1_ = 0x10;
    local_d90[0] = 0x31;
    local_d84 = 1;
    local_d80 = 0;
    local_d88 = *(undefined4 *)(param_1 + 0xb8);
    FUN_1000dd30(0x200);
    FUN_1016e1b0(local_d90);
    local_8 = (uint)local_8._1_3_ << 8;
    FUN_1000e440();
    local_8 = -1;
    break;
  case (undefined1 *)0x20:
    FUN_1000ef40();
    local_8._0_1_ = 0x11;
    local_ac0 = 0x32;
    local_ab4 = 1;
    local_ab0 = 1;
    local_abc = 0;
    local_ab8 = *(undefined4 *)(param_1 + 0xb8);
    FUN_1000dd30(0x201);
    FUN_1016e1b0(&local_ac0);
    local_8 = (uint)local_8._1_3_ << 8;
    FUN_1000e440();
    local_8 = -1;
    break;
  case (undefined1 *)0x21:
    FUN_1000ef40();
    local_8._0_1_ = 0x12;
    local_cdc[0] = 0x30;
    local_cd0 = 1;
    local_ccc = 0;
    local_cd4 = *(undefined4 *)(param_1 + 0xb8);
    FUN_1000dd30(0x202);
    FUN_1016e1b0(local_cdc);
    local_8 = (uint)local_8._1_3_ << 8;
    FUN_1000e440();
    local_8 = -1;
    break;
  case (undefined1 *)0x22:
    FUN_1000ef40();
    local_8._0_1_ = 0x13;
    local_a0c = 0x2f;
    local_a00 = 1;
    local_9fc = 1;
    local_a08 = 0;
    local_a04 = *(undefined4 *)(param_1 + 0xb8);
    FUN_1000dd30(0x203);
    FUN_1016e1b0(&local_a0c);
    local_8 = (uint)local_8._1_3_ << 8;
    FUN_1000e440();
    local_8 = -1;
    break;
  case (undefined1 *)0x23:
    FUN_10144490();
    local_8 = -1;
    break;
  case (undefined1 *)0x24:
    local_900 = param_1 + 0x25c;
    puVar7 = (ushort *)FUN_10135980();
    if (puVar7 == (ushort *)0x0) goto LAB_1013a655;
    while (puVar7 != (ushort *)0x0) {
      FUN_10135a20(puVar7);
      appStrcat(local_fc,puVar7);
      puVar7 = (ushort *)FUN_10135980();
      if (puVar7 == (ushort *)0x0) break;
      appStrcat(local_fc,&DAT_1023d5d0);
    }
    L2ParamStack::L2ParamStack(local_2c,10);
    local_8 = CONCAT31(local_8._1_3_,0x14);
    L2ParamStack::PushBack(local_2c,local_fc);
    FUN_101447b0(local_2c);
    goto LAB_1013bd7b;
  case (undefined1 *)0x25:
    FUN_101447e0();
    local_8 = -1;
    break;
  case (undefined1 *)0x26:
    local_900 = param_1 + 0x25c;
    puVar7 = (ushort *)FUN_10135980();
    if (puVar7 == (ushort *)0x0) goto LAB_1013a655;
    while (puVar7 != (ushort *)0x0) {
      FUN_10135a20(puVar7);
      appStrcat(local_fc,puVar7);
      puVar7 = (ushort *)FUN_10135980();
      if (puVar7 == (ushort *)0x0) break;
      appStrcat(local_fc,&DAT_1023d5d0);
    }
    L2ParamStack::L2ParamStack(local_2c,10);
    local_8 = CONCAT31(local_8._1_3_,0x15);
    L2ParamStack::PushBack(local_2c,local_fc);
    FUN_101447c0(local_2c);
    goto LAB_1013bd7b;
  case (undefined1 *)0x27:
    FUN_10145290();
    local_8 = -1;
    break;
  case (undefined1 *)0x28:
  case (undefined1 *)0x29:
  case (undefined1 *)0x2a:
  case (undefined1 *)0x44:
  case (undefined1 *)0x61:
    goto switchD_1013a3ca_caseD_28;
  case (undefined1 *)0x2b:
    L2ParamStack::L2ParamStack(local_2c,10);
    local_8 = CONCAT31(local_8._1_3_,0x18);
    L2ParamStack::PushBack(local_2c,(void *)0x2);
    FUN_101447f0(local_2c);
    goto LAB_1013bd7b;
  case (undefined1 *)0x2c:
    puVar7 = (ushort *)FUN_10135980();
    while (puVar7 != (ushort *)0x0) {
      FUN_10135a20(puVar7);
      appStrcat(local_fc,puVar7);
      puVar7 = (ushort *)FUN_10135980();
      if (puVar7 == (ushort *)0x0) break;
      appStrcat(local_fc,&DAT_1023d5d0);
    }
    if (local_fc[0] == 0) {
      this_00 = (User *)FUN_1014ddd0();
      if ((this_00 == (User *)0x0) || (*(int *)(this_00 + 8) != 0)) goto LAB_1013a655;
      L2ParamStack::L2ParamStack(local_2c,10);
      local_8 = CONCAT31(local_8._1_3_,0x1a);
      L2ParamStack::PushBack(local_2c,(void *)0x0);
      puVar7 = User::GetName(this_00);
      L2ParamStack::PushBack(local_2c,puVar7);
      FUN_101447f0(local_2c);
    }
    else {
      L2ParamStack::L2ParamStack(local_2c,10);
      local_8 = CONCAT31(local_8._1_3_,0x19);
      L2ParamStack::PushBack(local_2c,(void *)0x0);
      L2ParamStack::PushBack(local_2c,local_fc);
      FUN_101447f0(local_2c);
    }
    goto LAB_1013bd7b;
  case (undefined1 *)0x2d:
    local_900 = param_1 + 0x25c;
    puVar7 = (ushort *)FUN_10135980();
    if (puVar7 == (ushort *)0x0) goto LAB_1013a655;
    while (puVar7 != (ushort *)0x0) {
      FUN_10135a20(puVar7);
      appStrcat(local_fc,puVar7);
      puVar7 = (ushort *)FUN_10135980();
      if (puVar7 == (ushort *)0x0) break;
      appStrcat(local_fc,&DAT_1023d5d0);
    }
    L2ParamStack::L2ParamStack(local_2c,10);
    local_8 = CONCAT31(local_8._1_3_,0x1b);
    L2ParamStack::PushBack(local_2c,(void *)0x1);
    L2ParamStack::PushBack(local_2c,local_fc);
    FUN_101447f0(local_2c);
    goto LAB_1013bd7b;
  case (undefined1 *)0x2e:
    FUN_10144110(5);
    local_8 = -1;
    break;
  case (undefined1 *)0x2f:
    FUN_10144110(6);
    local_8 = -1;
    break;
  case (undefined1 *)0x30:
    FUN_10144110(7);
    local_8 = -1;
    break;
  case (undefined1 *)0x31:
    FUN_10144110(8);
    local_8 = -1;
    break;
  case (undefined1 *)0x32:
    FUN_10144110(9);
    local_8 = -1;
    break;
  case (undefined1 *)0x33:
    FUN_10144110(10);
    local_8 = -1;
    break;
  default:
    if (param_2 < IMAGE_DOS_HEADER_10000000.e_magic + 1) {
      L2ParamStack::L2ParamStack(local_2c,10);
      local_8 = CONCAT31(local_8._1_3_,0x28);
      L2ParamStack::PushBack(local_2c,param_2);
      FUN_101453e0(local_2c);
      goto LAB_1013bd7b;
    }
    goto switchD_1013a3ca_caseD_28;
  case (undefined1 *)0x35:
    FUN_101453f0();
    local_8 = -1;
    break;
  case (undefined1 *)0x36:
    FUN_10144110(0xb);
    local_8 = -1;
    break;
  case (undefined1 *)0x37:
    FUN_10144110(0xc);
    local_8 = -1;
    break;
  case (undefined1 *)0x38:
    FUN_10144110(0xd);
    local_8 = -1;
    break;
  case (undefined1 *)0x39:
    FUN_10170860(0,0,0);
    local_8 = -1;
    break;
  case (undefined1 *)0x3a:
    FUN_10170860(1,0,0);
    local_8 = -1;
    break;
  case (undefined1 *)0x3b:
    L2ParamStack::L2ParamStack(local_2c,10);
    local_8 = CONCAT31(local_8._1_3_,0x16);
    L2ParamStack::PushBack(local_2c,(void *)0x25);
    L2ParamStack::PushBack(local_2c,(void *)0x0);
    L2ParamStack::PushBack(local_2c,(void *)0x0);
    FUN_101440c0(local_2c);
    goto LAB_1013bd7b;
  case (undefined1 *)0x3c:
    FUN_10170860(0x26,0,0);
    local_8 = -1;
    break;
  case (undefined1 *)0x3f:
    FUN_10170860(0xf,0,0);
    local_8 = -1;
    break;
  case (undefined1 *)0x40:
    FUN_10170860(0x10,0,0);
    local_8 = -1;
    break;
  case (undefined1 *)0x41:
    FUN_10170860(0x11,0,0);
    local_8 = -1;
    break;
  case (undefined1 *)0x42:
    FUN_10144c60(200,0xffffffff);
    local_8 = -1;
    break;
  case (undefined1 *)0x43:
    FUN_10170860(0x13,0,0);
    local_8 = -1;
    break;
  case (undefined1 *)0x45:
    FUN_10170860(0x15,0,0);
    local_8 = -1;
    break;
  case (undefined1 *)0x46:
    FUN_10170860(0x16,0,0);
    local_8 = -1;
    break;
  case (undefined1 *)0x47:
    FUN_10170860(0x17,0,0);
    local_8 = -1;
    break;
  case (undefined1 *)0x4b:
    FUN_10170860(0x28,0,0);
    local_8 = -1;
    break;
  case (undefined1 *)0x4e:
    L2ParamStack::L2ParamStack(local_2c,10);
    local_8 = CONCAT31(local_8._1_3_,0x1c);
    L2ParamStack::PushBack(local_2c,(void *)0x3);
    FUN_101447f0(local_2c);
    goto LAB_1013bd7b;
  case (undefined1 *)0x4f:
    L2ParamStack::L2ParamStack(local_2c,10);
    local_8 = CONCAT31(local_8._1_3_,0x1d);
    L2ParamStack::PushBack(local_2c,(void *)0x4);
    FUN_101447f0(local_2c);
    goto LAB_1013bd7b;
  case (undefined1 *)0x50:
    iVar8 = FUN_10135980();
    FUN_10135a20(iVar8);
    if ((iVar8 != 0) &&
       (local_904 = (APawn *)thunk_FUN_101c1b01(iVar8), local_904 + -1 < (APawn *)0xa)) {
      iVar8 = FUN_10135980();
      FUN_10135a20(iVar8);
      if ((iVar8 != 0) && (iVar8 = thunk_FUN_101c1b01(iVar8), iVar8 - 1U < 0xc)) {
        FUN_1015a2d0(iVar8 + -0xd + (int)local_904 * 0xc);
        local_8 = -1;
        break;
      }
    }
    goto switchD_1013a3ca_caseD_28;
  case (undefined1 *)0x54:
    uVar6 = FUN_10135980();
    (**(code **)(**(int **)(*(int *)(DAT_103663bc + 0x50) + 0x60) + 0x98))(uVar6);
    local_8 = -1;
    break;
  case (undefined1 *)0x55:
    psVar5 = (short *)FUN_10135980();
    if ((psVar5 == (short *)0x0) || (*psVar5 == 0)) {
      iVar8 = FUN_1014ddd0();
      if ((iVar8 == 0) || (*(int *)(iVar8 + 8) != 0)) {
        FUN_10170650(0x578,0xffb09b79);
        local_8 = -1;
        break;
      }
      L2ParamStack::L2ParamStack(local_2c,10);
      local_8 = CONCAT31(local_8._1_3_,5);
      L2ParamStack::PushBack(local_2c,(void *)(iVar8 + 0x1c));
      FUN_10149690(local_2c);
    }
    else {
      L2ParamStack::L2ParamStack(local_2c,10);
      local_8 = CONCAT31(local_8._1_3_,4);
      L2ParamStack::PushBack(local_2c,psVar5);
      FUN_10149690(local_2c);
    }
    goto LAB_1013bd7b;
  case (undefined1 *)0x56:
    FUN_1000ef40();
    local_8._0_1_ = 0x1e;
    local_c28 = 0x12;
    local_c1c = 1;
    local_c18 = 1;
    local_c24 = 0;
    FUN_1000dd30(0x5fb);
    FUN_1016e1b0(&local_c28);
    local_8 = (uint)local_8._1_3_ << 8;
    FUN_1000e440();
    local_8 = -1;
    break;
  case (undefined1 *)0x57:
    FUN_1000ef40();
    local_8._0_1_ = 0x1f;
    local_b74 = 0x14;
    local_b68 = 1;
    local_b64 = 1;
    local_b70 = 0;
    FUN_1000dd30(0x5fc);
    FUN_1016e1b0(&local_b74);
    local_8 = (uint)local_8._1_3_ << 8;
    FUN_1000e440();
    local_8 = -1;
    break;
  case (undefined1 *)0x5b:
    FUN_101441a0();
    local_8 = -1;
    break;
  case (undefined1 *)0x5e:
    psVar5 = (short *)FUN_10135980();
    if ((psVar5 == (short *)0x0) || (*psVar5 == 0)) {
      iVar8 = FUN_1014ddd0();
      if ((iVar8 == 0) || (*(int *)(iVar8 + 8) != 0)) {
LAB_1013b913:
        FUN_10170650(0x5fa,0xffb09b79);
        local_8 = -1;
        break;
      }
      L2ParamStack::L2ParamStack(local_2c,10);
      local_8 = CONCAT31(local_8._1_3_,0x21);
      L2ParamStack::PushBack(local_2c,(void *)(iVar8 + 0x1c));
      FUN_10143a10(local_2c);
    }
    else {
      L2ParamStack::L2ParamStack(local_2c,10);
      local_8 = CONCAT31(local_8._1_3_,0x20);
      L2ParamStack::PushBack(local_2c,psVar5);
      FUN_10143a10(local_2c);
    }
    goto LAB_1013bd7b;
  case (undefined1 *)0x5f:
    psVar5 = (short *)FUN_10135980();
    if ((psVar5 == (short *)0x0) || (*psVar5 == 0)) {
      iVar8 = FUN_1014ddd0();
      if ((iVar8 == 0) || (*(int *)(iVar8 + 8) != 0)) goto LAB_1013b913;
      L2ParamStack::L2ParamStack(local_2c,10);
      local_8 = CONCAT31(local_8._1_3_,0x23);
      L2ParamStack::PushBack(local_2c,(void *)(iVar8 + 0x1c));
      FUN_10143a30(local_2c);
    }
    else {
      L2ParamStack::L2ParamStack(local_2c,10);
      local_8 = CONCAT31(local_8._1_3_,0x22);
      L2ParamStack::PushBack(local_2c,psVar5);
      FUN_10143a30(local_2c);
    }
    goto LAB_1013bd7b;
  case (undefined1 *)0x62:
    puVar7 = FParser::GetRemainStr((FParser *)(param_1 + 0x25c));
    if (puVar7 == (ushort *)0x0) {
      local_8fc[0] = 0;
    }
    else {
      appStrncpy(local_8fc,puVar7,0x3ff);
    }
    iVar8 = appStrlen(local_8fc);
    if (iVar8 != 0) {
      iVar8 = FUN_1014cff0(local_8fc);
      if (iVar8 != 0) {
        FUN_10170650(0xcc,0xffb09b79);
        local_8 = -1;
        break;
      }
      FString::FString(local_918,puVar7);
      local_8._0_1_ = 0x24;
      iVar8 = FUN_10064bd0(local_918);
      local_905 = 0x10 < iVar8;
      local_8 = (uint)local_8._1_3_ << 8;
      FString::~FString(local_918);
      if (local_905 != '\0') {
        FUN_10170650(0x50,0xffb09b79);
        local_8 = -1;
        break;
      }
    }
    iVar8 = FUN_1014dd00();
    L2ParamStack::L2ParamStack(local_2c,10);
    local_8 = CONCAT31(local_8._1_3_,0x25);
    L2ParamStack::PushBack(local_2c,(void *)(iVar8 + 0x1c));
    L2ParamStack::PushBack(local_2c,puVar7);
    FUN_10144280(local_2c);
    goto LAB_1013bd7b;
  case (undefined1 *)0x65:
    L2ParamStack::L2ParamStack(local_2c,10);
    local_8 = CONCAT31(local_8._1_3_,0x17);
    L2ParamStack::PushBack(local_2c,(void *)0x33);
    L2ParamStack::PushBack(local_2c,(void *)0x0);
    L2ParamStack::PushBack(local_2c,(void *)0x0);
    FUN_101440c0(local_2c);
LAB_1013bd7b:
    local_8 = local_8 & 0xffffff00;
    L2ParamStack::~L2ParamStack(local_2c);
switchD_1013a3ca_caseD_28:
    local_8 = -1;
    break;
  case (undefined1 *)0x67:
    pFVar1 = *(FL2ReplayManager **)(*(int *)(DAT_103663bc + 0x50) + 0x198);
    if (pFVar1 != (FL2ReplayManager *)0x0) {
      FL2ReplayManager::OnSaveStart(pFVar1);
      local_8 = -1;
      break;
    }
    goto switchD_1013a3ca_caseD_28;
  case (undefined1 *)0x68:
    pFVar1 = *(FL2ReplayManager **)(*(int *)(DAT_103663bc + 0x50) + 0x198);
    if (pFVar1 != (FL2ReplayManager *)0x0) {
      FL2ReplayManager::OnSaveStop(pFVar1);
      local_8 = -1;
      break;
    }
    goto switchD_1013a3ca_caseD_28;
  case (undefined1 *)0x69:
    FUN_10170860(0x37,0,0);
    local_8 = -1;
    break;
  case (undefined1 *)0x6a:
    FUN_10170860(0x36,0,0);
    local_8 = -1;
    break;
  case (undefined1 *)0x6b:
    FUN_10170860(0x35,0,0);
    local_8 = -1;
    break;
  case (undefined1 *)0x6c:
    FUN_10170860(0x34,0,0);
    local_8 = -1;
    break;
  case (undefined1 *)0x6f:
  case (undefined1 *)0x71:
    puVar7 = FParser::GetRemainStr((FParser *)(param_1 + 0x25c));
    if (puVar7 == (ushort *)0x0) {
      iVar8 = FUN_1014ddd0();
      if (((iVar8 == 0) || (*(int *)(iVar8 + 8) != 0)) || (*(int *)(iVar8 + 0xc) != 0))
      goto switchD_1013a3ca_caseD_28;
      puVar7 = (ushort *)(iVar8 + 0x1c);
    }
    appStrncpy(local_34,puVar7,0xc);
    if (param_2 == (undefined1 *)0x6f) {
      FString::FString(local_924,local_34);
      local_8._0_1_ = 0x26;
      FUN_101445d0(local_924,0);
      local_8 = (uint)local_8._1_3_ << 8;
      FString::~FString(local_924);
      local_8 = -1;
    }
    else {
      FString::FString(local_930,local_34);
      local_8._0_1_ = 0x27;
      FUN_101445d0(local_930,1);
      local_8 = (uint)local_8._1_3_ << 8;
      FString::~FString(local_930);
      local_8 = -1;
    }
    break;
  case (undefined1 *)0x70:
    FUN_10144710();
    local_8 = -1;
  }
LAB_1013a37f:
  ExceptionList = local_10;
  __security_check_cookie(local_18 ^ (uint)&stack0xfffffffc);
  return;
}


// ==== 1013dac0 FUN_1013dac0 dispatcher=100d1790 callers=FUN_10172350@10172350
// strings: 

void FUN_1013dac0(void)

{
  uint uVar1;
  FString local_18 [12];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_102098a9;
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


// ==== 1013db40 FUN_1013db40 dispatcher=100d1790 callers=FUN_10144e70@10144e70
// strings: 1027d278=SSQStatus | 

void FUN_1013db40(undefined4 param_1)

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
  
  puStack_c = &LAB_102098e1;
  local_10 = ExceptionList;
  uStack_44 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_44;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_1003f970();
  local_8._0_1_ = 1;
  FString::FString(local_34,(ushort *)L"SSQStatus");
  local_8._0_1_ = 2;
  FUN_10040090(local_34,param_1);
  local_8._0_1_ = 1;
  FString::~FString(local_34);
  puVar2 = local_28;
  uVar1 = 0x6f4;
  FUN_10005c30(0x6f4,puVar2);
  FUN_100d1790(uVar1,puVar2);
  local_8 = (uint)local_8._1_3_ << 8;
  FUN_1003fff0();
  ExceptionList = local_10;
  return;
}


// ==== 1013dc20 FUN_1013dc20 dispatcher=100d1790 callers=FUN_10172350@10172350
// strings: 1027d28c=Init | 

void FUN_1013dc20(void)

{
  undefined1 local_24 [12];
  FString local_18 [12];
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10209911;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_1003f970(DAT_103554c4 ^ (uint)local_24);
  local_4 = 0;
  FString::FString(local_18,(ushort *)L"Init");
  local_4._0_1_ = 1;
  FUN_10040090(local_18,1);
  local_4 = (uint)local_4._1_3_ << 8;
  FString::~FString(local_18);
  if (DAT_1035786c == 0) {
    FUN_10005270();
  }
  FUN_100d1790(0x4a6,local_24);
  local_4 = 0xffffffff;
  FUN_1003fff0();
  ExceptionList = local_c;
  return;
}


// ==== 1013ddd0 FUN_1013ddd0 dispatcher=100d1790 callers=FUN_10172350@10172350
// strings: 

void FUN_1013ddd0(void)

{
  undefined4 uVar1;
  FString *pFVar2;
  uint uStack_38;
  FString local_28 [20];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_10209969;
  local_10 = ExceptionList;
  uStack_38 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_38;
  ExceptionList = &local_10;
  local_8 = 0;
  FString::FString(local_28,(ushort *)&DAT_1022f9f8);
  local_8._0_1_ = 1;
  pFVar2 = local_28;
  uVar1 = 0x4ce;
  FUN_10005c30(0x4ce,pFVar2);
  FUN_100d1790(uVar1,pFVar2);
  local_8 = (uint)local_8._1_3_ << 8;
  FString::~FString(local_28);
  ExceptionList = local_10;
  return;
}


// ==== 1013de80 FUN_1013de80 dispatcher=100d1790 callers=FUN_10172350@10172350
// strings: 

void FUN_1013de80(void)

{
  undefined4 uVar1;
  FString *pFVar2;
  uint uStack_38;
  FString local_28 [20];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_10209999;
  local_10 = ExceptionList;
  uStack_38 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_38;
  ExceptionList = &local_10;
  local_8 = 0;
  FString::FString(local_28,(ushort *)&DAT_1022f9f8);
  local_8._0_1_ = 1;
  pFVar2 = local_28;
  uVar1 = 0x8e8;
  FUN_10005c30(0x8e8,pFVar2);
  FUN_100d1790(uVar1,pFVar2);
  local_8 = (uint)local_8._1_3_ << 8;
  FString::~FString(local_28);
  ExceptionList = local_10;
  return;
}


// ==== 1013df30 FUN_1013df30 dispatcher=100d1790 callers=FUN_10141760@10141760 FUN_10141760@10141760 FUN_10163d90@10163d90 FUN_10163d90@10163d90
// strings: 1027d364=%s: %s | 1027c6e8=ColorR | 1027c6d8=ColorG | 1027c6c8=ColorB | 1027c6b8=ColorA | 1027c984=Message | 1027c6e8=ColorR | 1027c6d8=ColorG | 1027c6c8=ColorB | 1027c6b8=ColorA | 

void __thiscall
FUN_1013df30(int param_1,int param_2,undefined4 param_3,wchar_t *param_4,ulong param_5,int param_6)

{
  wchar_t wVar1;
  int iVar2;
  User *this;
  int iVar3;
  wchar_t *_Dest;
  wchar_t *pwVar4;
  int iVar5;
  int iVar6;
  uint uStack_868;
  FString local_84c [16];
  int local_83c;
  wchar_t *local_838;
  FString local_828 [12];
  int local_81c;
  undefined1 *local_818;
  void *local_814;
  undefined1 *puStack_810;
  uint local_80c;
  ushort local_808 [1024];
  uint local_8;
  
  puStack_810 = &LAB_10209a59;
  local_814 = ExceptionList;
  uStack_868 = DAT_103554c4 ^ (uint)local_808;
  local_818 = (undefined1 *)&uStack_868;
  ExceptionList = &local_814;
  local_80c = 0;
  local_83c = param_1;
  local_8 = uStack_868;
  if (param_6 == 0x12) {
    local_818 = (undefined1 *)&uStack_868;
    appSprintf(local_808,(ushort *)&DAT_1022dde0);
LAB_1013e153:
    FUN_101392c0();
  }
  else {
    appSprintf(local_808,(ushort *)L"%s: %s");
    if ((param_6 == 6) || (param_6 == 7)) {
      FUN_101a72a0();
      iVar3 = (**(code **)(**(int **)(param_1 + 0x214) + 0xfc))();
      if (iVar3 == 0) {
        if (param_6 == 6) {
          param_5 = 0xffdcdcdc;
        }
        FString::FString(local_828,(ushort *)&DAT_1022f9f8);
        local_80c._0_1_ = 1;
        FUN_10005c30();
        FUN_100d1790();
        local_80c._0_1_ = 0;
        FString::~FString(local_828);
        FColor::FColor((FColor *)&local_81c,param_5);
        FUN_1003f970();
        local_80c._0_1_ = 2;
        FString::FString(local_84c,local_808);
        local_80c._0_1_ = 3;
        FString::FString(local_828,(ushort *)L"Message");
        local_80c._0_1_ = 4;
        FUN_10040230();
        local_80c._0_1_ = 3;
        FString::~FString(local_828);
        local_80c._0_1_ = 2;
        FString::~FString(local_84c);
        FString::FString(local_828,(ushort *)L"ColorR");
        local_80c._0_1_ = 5;
        FUN_10040090();
        local_80c._0_1_ = 2;
        FString::~FString(local_828);
        FString::FString(local_828,(ushort *)L"ColorG");
        local_80c._0_1_ = 6;
        FUN_10040090();
        local_80c._0_1_ = 2;
        FString::~FString(local_828);
        FString::FString(local_828,(ushort *)L"ColorB");
        local_80c._0_1_ = 7;
        FUN_10040090();
        local_80c._0_1_ = 2;
        FString::~FString(local_828);
        FString::FString(local_828,(ushort *)L"ColorA");
        local_80c._0_1_ = 8;
        FUN_10040090();
        local_80c._0_1_ = 2;
        FString::~FString(local_828);
        FUN_10005c30();
        FUN_100d1790();
        local_80c = (uint)local_80c._1_3_ << 8;
        FUN_1003fff0();
      }
      goto LAB_1013e2f5;
    }
    if (param_6 != 0xe) goto LAB_1013e153;
    FColor::FColor((FColor *)&local_81c,param_5);
    FUN_1003f970();
    local_80c._0_1_ = 9;
    FString::FString(local_828,local_808);
    local_80c._0_1_ = 10;
    FString::FString(local_84c,(ushort *)&DAT_1027c6f8);
    local_80c._0_1_ = 0xb;
    FUN_10040230();
    local_80c._0_1_ = 10;
    FString::~FString(local_84c);
    local_80c._0_1_ = 9;
    FString::~FString(local_828);
    FString::FString(local_828,(ushort *)L"ColorR");
    local_80c._0_1_ = 0xc;
    FUN_10040090();
    local_80c._0_1_ = 9;
    FString::~FString(local_828);
    FString::FString(local_828,(ushort *)L"ColorG");
    local_80c._0_1_ = 0xd;
    FUN_10040090();
    local_80c._0_1_ = 9;
    FString::~FString(local_828);
    FString::FString(local_828,(ushort *)L"ColorB");
    local_80c._0_1_ = 0xe;
    FUN_10040090();
    local_80c._0_1_ = 9;
    FString::~FString(local_828);
    FString::FString(local_828,(ushort *)L"ColorA");
    local_80c._0_1_ = 0xf;
    FUN_10040090();
    local_80c._0_1_ = 9;
    FString::~FString(local_828);
    FUN_10005c30();
    FUN_100d1790();
    local_80c = (uint)local_80c._1_3_ << 8;
    FUN_1003fff0();
  }
  this = (User *)FUN_10145910();
  if ((this == (User *)0x0) || (iVar3 = User::GetPrivateStoreState(this), iVar3 == 0)) {
    _Dest = (wchar_t *)FUN_10004ed0();
    pwVar4 = param_4;
    do {
      wVar1 = *pwVar4;
      pwVar4 = pwVar4 + 1;
    } while (wVar1 != L'\0');
    local_838 = _Dest;
    if ((uint)((int)pwVar4 - (int)(param_4 + 1) >> 1) < 0x13) {
      appStrcpy((ushort *)_Dest,(ushort *)param_4);
    }
    else {
      _wcsncpy(_Dest,param_4,0x13);
      builtin_wcsncpy(_Dest + 0x12,L"...",4);
    }
    local_81c = 0;
    for (iVar3 = 0; iVar6 = 0, iVar2 = local_81c, iVar3 < *(int *)(local_83c + 0x248);
        iVar3 = iVar3 + 1) {
      iVar6 = *(int *)(*(int *)(local_83c + 0x244) + iVar3 * 4);
      iVar5 = FUN_101372a0();
      _Dest = local_838;
      iVar2 = iVar6;
      if (iVar5 == param_2) break;
    }
    local_81c = iVar2;
    if (iVar6 == 0) {
      local_838 = (wchar_t *)FUN_10004ed0();
      local_80c._0_1_ = 0x10;
      if (local_838 == (wchar_t *)0x0) {
        local_81c = 0;
      }
      else {
        local_81c = FUN_10136f90();
      }
      local_80c = (uint)local_80c._1_3_ << 8;
      FUN_100d9a30();
    }
    FUN_101370e0();
    FUN_10137170();
    local_838 = (wchar_t *)&stack0xfffff788;
    FString::FString((FString *)&stack0xfffff788,(ushort *)_Dest);
    local_80c = local_80c & 0xffffff00;
    FUN_10137200();
    if ((this != (User *)0x0) && (*(int *)(this + 0x204) != 0)) {
      iVar3 = FString::operator_int((FString *)(*(int *)(this + 0x204) + 0x178c));
      if (iVar3 == 0) {
        *(int *)(*(int *)(this + 0x204) + 0x4c) = *(int *)(*(int *)(this + 0x204) + 0x4c) + 1;
      }
      FStringNoInit::operator=((FStringNoInit *)(*(int *)(this + 0x204) + 0x178c),(ushort *)_Dest);
    }
    FUN_10024ca0();
    local_80c = 0xffffffff;
  }
LAB_1013e2f5:
  ExceptionList = local_814;
  __security_check_cookie(local_8 ^ (uint)local_808);
  return;
}


// ==== 1013e510 FUN_1013e510 dispatcher=100d1790 callers=FUN_10170650@10170650 FUN_10144500@10144500 FUN_10144500@10144500 FUN_10144540@10144540 FUN_10144540@10144540 FUN_101448e0@101448e0 FUN_101448e0@101448e0 FUN_101448a0@101448a0 FUN_101448a0@101448a0 FUN_101444c0@101444c0 FUN_101444c0@101444c0
// strings: 1022fd1c=Index | 

void FUN_1013e510(int param_1,undefined4 param_2)

{
  ushort *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 *puVar4;
  uint uStack_44;
  FString local_34 [12];
  undefined1 local_28 [20];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_10209aa1;
  local_10 = ExceptionList;
  uStack_44 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_44;
  ExceptionList = &local_10;
  local_8 = 0;
  puVar1 = FString::operator*((FString *)(GL2GameData_exref + param_1 * 0x5c + 0x240ec));
  if (puVar1 != (ushort *)0x0) {
    uVar3 = 0;
    uVar2 = 5;
    puVar1 = FString::operator*((FString *)(GL2GameData_exref + param_1 * 0x5c + 0x240ec));
    FUN_101392c0(puVar1,param_2,uVar2,uVar3);
    FUN_1003f970();
    local_8._0_1_ = 1;
    FString::FString(local_34,(ushort *)L"Index");
    local_8._0_1_ = 2;
    FUN_10040090(local_34,param_1);
    local_8._0_1_ = 1;
    FString::~FString(local_34);
    puVar4 = local_28;
    uVar2 = 0x244;
    FUN_10005c30(0x244,puVar4);
    FUN_100d1790(uVar2,puVar4);
    local_8 = (uint)local_8._1_3_ << 8;
    FUN_1003fff0();
  }
  ExceptionList = local_10;
  return;
}


// ==== 1013e640 FUN_1013e640 dispatcher=100d1790 callers=FUN_101455b0@101455b0 execRequestDropItem@10107fb0 FUN_101b7cd0@101b7cd0 FUN_101b7cd0@101b7cd0 FUN_100103b0@100103b0 FUN_100103b0@100103b0
// strings: 1027c984=Message | 1027c6e8=ColorR | 1027c6d8=ColorG | 1027c6c8=ColorB | 1027c6b8=ColorA | 

void FUN_1013e640(ushort *param_1,uint param_2,undefined4 param_3)

{
  undefined4 uVar1;
  FString *pFVar2;
  undefined1 *puVar3;
  uint uStack_8c;
  FString local_7c [12];
  FString local_70 [12];
  FString local_64 [12];
  FString local_58 [12];
  FString local_4c [12];
  FString local_40 [12];
  FString local_34 [12];
  undefined1 local_28 [20];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_10209b07;
  local_10 = ExceptionList;
  uStack_8c = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_8c;
  ExceptionList = &local_10;
  local_8 = 0;
  if (param_2 == 6) {
    FString::FString(local_34,(ushort *)&DAT_1022f9f8);
    local_8._0_1_ = 1;
    pFVar2 = local_34;
    uVar1 = 0x780;
    FUN_10005c30(0x780,pFVar2);
    FUN_100d1790(uVar1,pFVar2);
    local_8._0_1_ = 0;
    FString::~FString(local_34);
    FColor::FColor((FColor *)&param_2,0xff80ffff);
    FUN_1003f970();
    local_8._0_1_ = 2;
    FString::FString(local_4c,param_1);
    local_8._0_1_ = 3;
    FString::FString(local_40,(ushort *)L"Message");
    local_8._0_1_ = 4;
    FUN_10040230(local_40,local_4c);
    local_8._0_1_ = 3;
    FString::~FString(local_40);
    local_8._0_1_ = 2;
    FString::~FString(local_4c);
    FString::FString(local_58,(ushort *)L"ColorR");
    local_8._0_1_ = 5;
    FUN_10040090(local_58,param_2 >> 0x10 & 0xff);
    local_8._0_1_ = 2;
    FString::~FString(local_58);
    FString::FString(local_64,(ushort *)L"ColorG");
    local_8._0_1_ = 6;
    FUN_10040090(local_64,param_2 >> 8 & 0xff);
    local_8._0_1_ = 2;
    FString::~FString(local_64);
    FString::FString(local_70,(ushort *)L"ColorB");
    local_8._0_1_ = 7;
    FUN_10040090(local_70,param_2 & 0xff);
    local_8._0_1_ = 2;
    FString::~FString(local_70);
    FString::FString(local_7c,(ushort *)L"ColorA");
    local_8._0_1_ = 8;
    FUN_10040090(local_7c,param_2 >> 0x18);
    local_8._0_1_ = 2;
    FString::~FString(local_7c);
    puVar3 = local_28;
    uVar1 = 0x78a;
    FUN_10005c30(0x78a,puVar3);
    FUN_100d1790(uVar1,puVar3);
    local_8 = (uint)local_8._1_3_ << 8;
    FUN_1003fff0();
  }
  else if ((param_1 != (ushort *)0x0) && (*param_1 != 0)) {
    local_14 = (undefined1 *)&uStack_8c;
    FUN_101392c0(param_1,param_3,5,param_2);
  }
  ExceptionList = local_10;
  return;
}


// ==== 1014fb40 FUN_1014fb40 dispatcher=100d1790 callers=FUN_1014fc30@1014fc30
// strings: 10281b2c=ServerAgeLimit | 

void __thiscall FUN_1014fb40(int param_1,undefined4 param_2)

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
  
  puStack_c = &LAB_1020c021;
  local_10 = ExceptionList;
  uStack_44 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_44;
  ExceptionList = &local_10;
  local_8 = 0;
  *(undefined4 *)(param_1 + 0x513c) = param_2;
  FUN_1003f970();
  local_8._0_1_ = 1;
  FString::FString(local_34,(ushort *)L"ServerAgeLimit");
  local_8._0_1_ = 2;
  FUN_10040090(local_34,*(undefined4 *)(param_1 + 0x513c));
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


// ==== 1014fe90 FUN_1014fe90 dispatcher=100d1790 callers=DATA@10287e14
// strings: 

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


// ==== 101511b0 FUN_101511b0 dispatcher=100d1790 callers=DATA@102880e8
// strings: 1024850c=LoadingState | 

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


// ==== 101512c0 FUN_101512c0 dispatcher=100d1790 callers=DATA@10288124
// strings: 102820e4=Village | 102820d8=Agit | 102820c8=Castle | 102820b0=BattleCamp | 1028209c=Original | 

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


// ==== 10151500 FUN_10151500 dispatcher=100d1790 callers=DATA@10288128
// strings: 

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


// ==== 10151580 FUN_10151580 dispatcher=100d1790 callers=DATA@1028812c
// strings: 

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


// ==== 10151600 FUN_10151600 dispatcher=100d1790 callers=DATA@10288418
// strings: 10282170=ShowZoneTitle | 1023f594=Game | 10282158=GAMINGSTATE | 1028214c=ZoneName | 1028213c=SubZoneName1 | 1028212c=SubZoneName2 | 

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


// ==== 10151830 FUN_10151830 dispatcher=100d1790 callers=DATA@10287e70
// strings: 

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


// ==== 10151930 FUN_10151930 dispatcher=100d1790 callers=DATA@10287e74
// strings: 

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


// ==== 101519f0 FUN_101519f0 dispatcher=100d1790 callers=DATA@10287e9c
// strings: 

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


// ==== 10151ad0 FUN_10151ad0 dispatcher=100d1790 callers=DATA@10287ea0
// strings: 1027e664=.\Src\NConsoleWindow.cpp | 102822c0=iWorkType == IUT_ADD || iWorkType == IUT_UPDATE || iWorkType == IUT_DELETE | 102692ac=type | 102822a4=update | 102692ac=type | 10282294=delete | 102692ac=type | 

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


// ==== 10151cb0 FUN_10151cb0 dispatcher=100d1790 callers=DATA@10287ea4
// strings: 

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


// ==== 10151d30 FUN_10151d30 dispatcher=100d1790 callers=DATA@10288108
// strings: 102461cc=ClassID | 

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


// ==== 10152070 FUN_10152070 dispatcher=100d1790 callers=DATA@1028810c
// strings: 1028230c=Result | 

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


// ==== 10152120 FUN_10152120 dispatcher=100d1790 callers=DATA@102880e4
// strings: 1026cdcc=targetID | 

void __thiscall FUN_10152120(int *param_1,L2ParamStack *param_2)

{
  uint uVar1;
  void *pvVar2;
  int iVar3;
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
  pvVar2 = L2ParamStack::Top(param_2);
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
  (**(code **)(*param_1 + 0x7d4))(aFStack_20);
  local_c = (void *)0xffffffff;
  L2ParamStack::~L2ParamStack(aLStack_24);
  ExceptionList = pvStack_14;
  return;
}


// ==== 10152250 FUN_10152250 dispatcher=100d1790 callers=DATA@10287e78
// strings: 1026cdcc=targetID | 

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


// ==== 10152360 FUN_10152360 dispatcher=100d1790 callers=DATA@10287e7c
// strings: 10282374=inventoryList | 1028235c=destination | 

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


// ==== 10152450 FUN_10152450 dispatcher=100d1790 callers=DATA@10287e80
// strings: 10282390=myList | 1028235c=destination | 

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


// ==== 10152540 FUN_10152540 dispatcher=100d1790 callers=DATA@10287e84
// strings: 102823a0=otherList | 1028235c=destination | 

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


// ==== 10152630 FUN_10152630 dispatcher=100d1790 callers=DATA@10287e8c
// strings: 102692ac=type | 102822a4=update | 102692ac=type | 10282294=delete | 102692ac=type | 

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


// ==== 101527d0 FUN_101527d0 dispatcher=100d1790 callers=DATA@10287e90
// strings: 

void __fastcall FUN_101527d0(int param_1)

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
  iVar1 = (**(code **)(**(int **)(*(int *)(param_1 + 0x50ac) + 0x22c) + 0xfc))(0);
  if (iVar1 != 0) {
    (**(code **)(**(int **)(*(int *)(param_1 + 0x50ac) + 0x22c) + 0x13c))();
  }
  ExceptionList = local_10;
  return;
}


// ==== 101528c0 FUN_101528c0 dispatcher=100d1790 callers=DATA@10287e88
// strings: 

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


// ==== 10152970 FUN_10152970 dispatcher=100d1790 callers=DATA@10287ec0
// strings: 102692ac=type | 1026c430=merchant | 10282488=adena | 

void __thiscall FUN_10152970(int param_1,undefined4 param_2,undefined4 param_3)

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
  
  puStack_c = &LAB_1020c7dc;
  local_10 = ExceptionList;
  uStack_50 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_50;
  ExceptionList = &local_10;
  local_8 = 0;
  (**(code **)(**(int **)(*(int *)(param_1 + 0x50ac) + 0x20c) + 0x13c))();
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
  FUN_10040090(local_40,param_3);
  local_8._0_1_ = 1;
  FString::~FString(local_40);
  FString::FString(local_40,(ushort *)L"adena");
  local_8._0_1_ = 5;
  FUN_10040090(local_40,param_2);
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


// ==== 10152ae0 FUN_10152ae0 dispatcher=100d1790 callers=DATA@10287ec4
// strings: 

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


// ==== 10152ba0 FUN_10152ba0 dispatcher=100d1790 callers=DATA@10287ec8
// strings: 1026cf30=sell | 102692ac=type | 1026c430=merchant | 10282488=adena | 

void __thiscall FUN_10152ba0(int param_1,undefined4 param_2,undefined4 param_3)

{
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
  (**(code **)(**(int **)(*(int *)(param_1 + 0x50ac) + 0x20c) + 0x13c))();
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
  FUN_10040090(local_40,param_3);
  local_8._0_1_ = 2;
  FString::~FString(local_40);
  FString::FString(local_40,(ushort *)L"adena");
  local_8._0_1_ = 6;
  FUN_10040090(local_40,param_2);
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


// ==== 10152d40 FUN_10152d40 dispatcher=100d1790 callers=DATA@10287ecc
// strings: 

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


// ==== 10152e00 FUN_10152e00 dispatcher=100d1790 callers=DATA@10287eb0
// strings: 102692ac=type | 1026c430=merchant | 10282488=adena | 

void __thiscall FUN_10152e00(int param_1,undefined4 param_2,undefined4 param_3)

{
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
  (**(code **)(**(int **)(*(int *)(param_1 + 0x50ac) + 0x20c) + 0x13c))
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
  FUN_10040090(aFStack_18,param_3);
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
  FUN_100d1790(0x820,auStack_30);
  iStack_4 = 0xffffffff;
  FUN_1003fff0();
  ExceptionList = local_c;
  return;
}


// ==== 10152f60 FUN_10152f60 dispatcher=100d1790 callers=DATA@10287eb4
// strings: 

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


// ==== 10152ff0 FUN_10152ff0 dispatcher=100d1790 callers=DATA@10287ea8
// strings: 1028259c=preview | 102692ac=type | 1026c430=merchant | 10282488=adena | 

void __thiscall FUN_10152ff0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

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
  
  puStack_c = &LAB_1020c965;
  local_10 = ExceptionList;
  uStack_50 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_50;
  ExceptionList = &local_10;
  local_8 = 0;
  (**(code **)(**(int **)(*(int *)(param_1 + 0x50ac) + 0x20c) + 0x13c))();
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
  FUN_10040090(local_40,param_4);
  local_8._0_1_ = 1;
  FString::~FString(local_40);
  FString::FString(local_40,(ushort *)L"adena");
  local_8._0_1_ = 5;
  FUN_10040090(local_40,param_3);
  local_8._0_1_ = 1;
  FString::~FString(local_40);
  FString::FString(local_40,(ushort *)&DAT_1026ce24);
  local_8._0_1_ = 6;
  FUN_10040090(local_40,param_2);
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


// ==== 10153190 FUN_10153190 dispatcher=100d1790 callers=DATA@10287eac
// strings: 

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


// ==== 10153250 FUN_10153250 dispatcher=100d1790 callers=DATA@10287eb8
// strings: 1026cf30=sell | 102692ac=type | 1026c430=merchant | 10282488=adena | 

void __thiscall FUN_10153250(int param_1,undefined4 param_2,undefined4 param_3)

{
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
  (**(code **)(**(int **)(*(int *)(param_1 + 0x50ac) + 0x20c) + 0x13c))
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
  FUN_10040090(aFStack_18,param_3);
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
  FUN_100d1790(0x820,auStack_30);
  uStack_4 = 0xffffffff;
  FUN_1003fff0();
  ExceptionList = local_c;
  return;
}


// ==== 10153400 FUN_10153400 dispatcher=100d1790 callers=DATA@10287ebc
// strings: 

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


// ==== 10153490 FUN_10153490 dispatcher=100d1790 callers=DATA@10287f08
// strings: 102826d4=inventory | 102826b0=warehousePrivate | 10282694=warehouseClan | 10282674=privateShopSell | 10282654=privateShopBuy | 10282638=dwarvenRecipe | 102468d4=recipe | 

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


// ==== 101536c0 FUN_101536c0 dispatcher=100d1790 callers=DATA@10287ed0
// strings: 102826f8=category | 102826e8=deposit | 102692ac=type | 10282488=adena | 

void __thiscall FUN_101536c0(int param_1,short param_2,undefined4 param_3)

{
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
  (**(code **)(**(int **)(*(int *)(param_1 + 0x50ac) + 0x20c) + 0x13c))
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
  FUN_10040090(aFStack_24,(int)param_2);
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
  FUN_10040090(aFStack_18,param_3);
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


// ==== 10153870 FUN_10153870 dispatcher=100d1790 callers=DATA@10287ed4
// strings: 

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


// ==== 10153900 FUN_10153900 dispatcher=100d1790 callers=DATA@10287ed8
// strings: 102826f8=category | 1028270c=withdraw | 102692ac=type | 10282488=adena | 

void __thiscall FUN_10153900(int param_1,short param_2,undefined4 param_3)

{
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
  (**(code **)(**(int **)(*(int *)(param_1 + 0x50ac) + 0x20c) + 0x13c))
            (DAT_103554c4 ^ (uint)&stack0xffffffcc);
  FUN_1003f970();
  iStack_4 = 0;
  FString::FString(aFStack_24,(ushort *)L"category");
  iStack_4._0_1_ = 1;
  FUN_10040090(aFStack_24,(int)param_2);
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
  FUN_10040090(aFStack_18,param_3);
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


// ==== 10153a60 FUN_10153a60 dispatcher=100d1790 callers=DATA@10287edc
// strings: 

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


// ==== 10153b50 FUN_10153b50 dispatcher=100d1790 callers=DATA@10288160
// strings: 1022fd14=QuestID | 

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


// ==== 10153c40 FUN_10153c40 dispatcher=100d1790 callers=DATA@10288168
// strings: 1026fea0=ManorID | 10282870=ManorName | 10282844=MerchantOrChamberlain | 10282834=SeedID | 10282820=SeedName | 10282804=SeedRemainCnt | 102827e8=SeedTotalCnt | 102827d4=SeedPrice | 102827c0=SeedLevel | 102827a8=RewardType1 | 10282790=RewardType2 | 

void __thiscall FUN_10153c40(int param_1,L2ParamStack *param_2)

{
  void *pvVar1;
  void *pvVar2;
  ushort *puVar3;
  FString *pFVar4;
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
  if (*(int *)(param_1 + 0x50ac) != 0) {
    pvVar1 = L2ParamStack::Top(param_2);
    pvVar2 = L2ParamStack::Top(param_2);
    L2ParamStack::Top(param_2);
    local_4c = L2ParamStack::Top(param_2);
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
      local_30 = L2ParamStack::Top(param_2);
      local_50 = L2ParamStack::Top(param_2);
      local_58 = L2ParamStack::Top(param_2);
      local_60 = L2ParamStack::Top(param_2);
      local_5c = L2ParamStack::Top(param_2);
      pvVar1 = L2ParamStack::Top(param_2);
      FString::FString(local_10,(ushort *)&DAT_1022f9f8);
      local_7c._0_1_ = 6;
      FString::FString(local_3c,(ushort *)&DAT_1022f9f8);
      local_7c._0_1_ = 7;
      for (local_14 = 0; local_14 < (char)pvVar1; local_14 = local_14 + 1) {
        local_1c = L2ParamStack::Top(param_2);
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
      pvVar1 = L2ParamStack::Top(param_2);
      for (local_18 = 0; local_18 < (char)pvVar1; local_18 = local_18 + 1) {
        local_1c = L2ParamStack::Top(param_2);
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


// ==== 10154170 FUN_10154170 dispatcher=100d1790 callers=DATA@1028816c
// strings: 1026fea0=ManorID | 10282870=ManorName | 10282844=MerchantOrChamberlain | 10282948=CropID | 10282934=CropName | 10282918=CropRemainCnt | 102828fc=CropTotalCnt | 102828e8=CropPrice | 102828d0=ProcureType | 102828bc=CropLevel | 102827a8=RewardType1 | 10282790=RewardType2 | 

void __thiscall FUN_10154170(int param_1,L2ParamStack *param_2)

{
  L2ParamStack *this;
  void *pvVar1;
  void *pvVar2;
  ushort *puVar3;
  FString *pFVar4;
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
  
  this = param_2;
  puStack_78 = &LAB_1020cda3;
  local_7c = ExceptionList;
  uStack_13c = DAT_103554c4 ^ (uint)local_70;
  local_80 = (undefined1 *)&uStack_13c;
  ExceptionList = &local_7c;
  local_74 = 0;
  if (*(int *)(param_1 + 0x50ac) != 0) {
    pvVar1 = L2ParamStack::Top(param_2);
    pvVar2 = L2ParamStack::Top(param_2);
    L2ParamStack::Top(param_2);
    local_50 = L2ParamStack::Top(param_2);
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
      param_2 = (L2ParamStack *)(int)local_5;
      if ((int)param_2 < 0) {
        param_2 = (L2ParamStack *)0x0;
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
      FUN_10040090(local_ec,param_2);
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


// ==== 10154700 FUN_10154700 dispatcher=100d1790 callers=DATA@10288170
// strings: 10282844=MerchantOrChamberlain | 10282948=CropID | 10282934=CropName | 102828bc=CropLevel | 102827d4=SeedPrice | 102828e8=CropPrice | 102827a8=RewardType1 | 10282790=RewardType2 | 

void __thiscall FUN_10154700(int param_1,L2ParamStack *param_2)

{
  void *pvVar1;
  FString *pFVar2;
  ushort *puVar3;
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
  if (*(int *)(param_1 + 0x50ac) != 0) {
    pvVar1 = L2ParamStack::Top(param_2);
    local_50 = L2ParamStack::Top(param_2);
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
      local_30 = L2ParamStack::Top(param_2);
      local_48 = L2ParamStack::Top(param_2);
      local_44 = L2ParamStack::Top(param_2);
      local_4c = L2ParamStack::Top(param_2);
      pvVar1 = L2ParamStack::Top(param_2);
      FString::FString(local_3c,(ushort *)&DAT_1022f9f8);
      local_78._0_1_ = 3;
      FString::FString(local_2c,(ushort *)&DAT_1022f9f8);
      local_78._0_1_ = 4;
      for (local_8 = 0; local_8 < (char)pvVar1; local_8 = local_8 + 1) {
        local_14 = L2ParamStack::Top(param_2);
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
      pvVar1 = L2ParamStack::Top(param_2);
      for (local_c = 0; local_c < (char)pvVar1; local_c = local_c + 1) {
        local_14 = L2ParamStack::Top(param_2);
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


// ==== 10154b60 FUN_10154b60 dispatcher=100d1790 callers=DATA@10288174
// strings: 1026fea0=ManorID | 10282870=ManorName | 10282834=SeedID | 10282820=SeedName | 10282ac4=TodaySeedTotalCnt | 10282aa4=TodaySeedPrice | 10282a78=TodayNextSeedTotalCnt | 10282a5c=NextSeedPrice | 10282a40=MinCropPrice | 10282a24=MaxCropPrice | 102827c0=SeedLevel | 102827a8=RewardType1 | 10282790=RewardType2 | 10282a04=MaxSeedTotalCnt | 102829e0=DefaultSeedPrice | 

void __thiscall FUN_10154b60(void *param_1,L2ParamStack *param_2)

{
  void *pvVar1;
  ushort *puVar2;
  FString *pFVar3;
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
  if (*(int *)((int)param_1 + 0x50ac) != 0) {
    local_18 = param_1;
    pvVar1 = L2ParamStack::Top(param_2);
    local_4c = L2ParamStack::Top(param_2);
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
      local_18 = L2ParamStack::Top(param_2);
      local_58 = L2ParamStack::Top(param_2);
      pvVar1 = L2ParamStack::Top(param_2);
      FString::FString(local_2c,(ushort *)&DAT_1022f9f8);
      local_7c._0_1_ = 5;
      FString::FString(local_3c,(ushort *)&DAT_1022f9f8);
      local_7c._0_1_ = 6;
      for (local_20 = 0; local_20 < (char)pvVar1; local_20 = local_20 + 1) {
        local_8 = L2ParamStack::Top(param_2);
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
      pvVar1 = L2ParamStack::Top(param_2);
      for (local_1c = 0; local_1c < (char)pvVar1; local_1c = local_1c + 1) {
        local_8 = L2ParamStack::Top(param_2);
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
      local_50 = L2ParamStack::Top(param_2);
      local_60 = L2ParamStack::Top(param_2);
      local_40 = L2ParamStack::Top(param_2);
      local_48 = L2ParamStack::Top(param_2);
      pvVar1 = L2ParamStack::Top(param_2);
      local_8 = L2ParamStack::Top(param_2);
      local_54 = L2ParamStack::Top(param_2);
      local_5c = L2ParamStack::Top(param_2);
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


// ==== 101551b0 FUN_101551b0 dispatcher=100d1790 callers=DATA@10288178
// strings: 1026fea0=ManorID | 10282870=ManorName | 10282948=CropID | 10282934=CropName | 10282c10=TodayCropTotalCnt | 10282bf0=TodayCropPrice | 10282bcc=TodayProcureType | 10282ba8=NextCropTotalCnt | 10282b8c=NextCropPrice | 10282b6c=NextProcureType | 10282a40=MinCropPrice | 10282a24=MaxCropPrice | 102828bc=CropLevel | 102827a8=RewardType1 | 10282790=RewardType2 | 10282b4c=MaxCropTotalCnt | 10282b28=DefaultCropPrice | 

void __thiscall FUN_101551b0(void *param_1,L2ParamStack *param_2)

{
  void *pvVar1;
  ushort *puVar2;
  FString *pFVar3;
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
  if (*(int *)((int)param_1 + 0x50ac) != 0) {
    local_18 = param_1;
    pvVar1 = L2ParamStack::Top(param_2);
    local_5c = L2ParamStack::Top(param_2);
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
      local_18 = L2ParamStack::Top(param_2);
      local_68 = L2ParamStack::Top(param_2);
      pvVar1 = L2ParamStack::Top(param_2);
      FString::FString(local_2c,(ushort *)&DAT_1022f9f8);
      local_78._0_1_ = 5;
      FString::FString(local_3c,(ushort *)&DAT_1022f9f8);
      local_78._0_1_ = 6;
      for (local_20 = 0; local_20 < (char)pvVar1; local_20 = local_20 + 1) {
        local_14 = L2ParamStack::Top(param_2);
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
      pvVar1 = L2ParamStack::Top(param_2);
      for (local_1c = 0; local_1c < (char)pvVar1; local_1c = local_1c + 1) {
        local_14 = L2ParamStack::Top(param_2);
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
      local_60 = L2ParamStack::Top(param_2);
      local_44 = L2ParamStack::Top(param_2);
      local_70 = L2ParamStack::Top(param_2);
      local_58 = L2ParamStack::Top(param_2);
      pvVar1 = L2ParamStack::Top(param_2);
      local_14 = L2ParamStack::Top(param_2);
      local_64 = L2ParamStack::Top(param_2);
      local_6c = L2ParamStack::Top(param_2);
      local_74 = L2ParamStack::Top(param_2);
      local_40 = L2ParamStack::Top(param_2);
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


// ==== 10155890 FUN_10155890 dispatcher=100d1790 callers=DATA@1028817c
// strings: 1026fea0=ManorID | 10282948=CropID | 10282c8c=CropServerID | 10282934=CropName | 10282870=ManorName | 10282918=CropRemainCnt | 102828e8=CropPrice | 102828d0=ProcureType | 10282c78=MyCropCnt | 102828bc=CropLevel | 102827a8=RewardType1 | 10282790=RewardType2 | 

void __thiscall FUN_10155890(int param_1,L2ParamStack *param_2)

{
  void *pvVar1;
  FString *pFVar2;
  ushort *puVar3;
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
  if (*(int *)(param_1 + 0x50ac) != 0) {
    FString::FString(local_30,(ushort *)&DAT_1022f9f8);
    local_74._0_1_ = 1;
    pFVar2 = local_30;
    uVar4 = 0xa50;
    FUN_10005c30(0xa50,pFVar2);
    FUN_100d1790(uVar4,pFVar2);
    local_74 = (uint)local_74._1_3_ << 8;
    FString::~FString(local_30);
    L2ParamStack::Top(param_2);
    local_50 = L2ParamStack::Top(param_2);
    for (local_20 = 0; local_20 < (int)local_50; local_20 = local_20 + 1) {
      local_48 = L2ParamStack::Top(param_2);
      local_24 = L2ParamStack::Top(param_2);
      local_4c = L2ParamStack::Top(param_2);
      pvVar1 = L2ParamStack::Top(param_2);
      FString::FString(local_3c,(ushort *)&DAT_1022f9f8);
      local_74._0_1_ = 2;
      FString::FString(local_30,(ushort *)&DAT_1022f9f8);
      local_74._0_1_ = 3;
      for (local_1c = 0; local_1c < (char)pvVar1; local_1c = local_1c + 1) {
        local_8 = L2ParamStack::Top(param_2);
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
      pvVar1 = L2ParamStack::Top(param_2);
      for (local_c = 0; local_c < (char)pvVar1; local_c = local_c + 1) {
        local_8 = L2ParamStack::Top(param_2);
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
      local_8 = L2ParamStack::Top(param_2);
      local_40 = L2ParamStack::Top(param_2);
      local_58 = L2ParamStack::Top(param_2);
      pvVar1 = L2ParamStack::Top(param_2);
      local_54 = L2ParamStack::Top(param_2);
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


// ==== 10155e10 FUN_10155e10 dispatcher=100d1790 callers=DATA@10288180
// strings: 1026fea0=ManorID | 10282918=CropRemainCnt | 102828e8=CropPrice | 102828d0=ProcureType | 10282870=ManorName | 

void __thiscall FUN_10155e10(int param_1,L2ParamStack *param_2)

{
  void *pvVar1;
  void *pvVar2;
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
  if (*(int *)(param_1 + 0x50ac) != 0) {
    FString::FString(local_3c,(ushort *)&DAT_1022f9f8);
    local_8._0_1_ = 1;
    pFVar4 = local_3c;
    uVar3 = 0xa57;
    FUN_10005c30(0xa57,pFVar4);
    FUN_100d1790(uVar3,pFVar4);
    local_8 = (uint)local_8._1_3_ << 8;
    FString::~FString(local_3c);
    L2ParamStack::Top(param_2);
    pvVar1 = L2ParamStack::Top(param_2);
    for (local_18 = 0; local_18 < (int)pvVar1; local_18 = local_18 + 1) {
      pvVar2 = L2ParamStack::Top(param_2);
      local_1c = L2ParamStack::Top(param_2);
      local_20 = L2ParamStack::Top(param_2);
      local_24 = L2ParamStack::Top(param_2);
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


// ==== 10156060 FUN_10156060 dispatcher=100d1790 callers=DATA@10288184
// strings: 10282ddc=Name_%d | 10282dc4=ClassId_%d | 10282da8=PledgeName_%d | 10282d84=PledgeCrestId_%d | 10282d64=AllianceName_%d | 10282d3c=AllianceCrestId_%d | 10282d24=WinCount_%d | 

void __thiscall FUN_10156060(int param_1,L2ParamStack *param_2)

{
  void *pvVar1;
  ushort *puVar2;
  undefined4 uVar3;
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
  if (*(int *)(param_1 + 0x50ac) != 0) {
    FUN_1003f970();
    local_78._0_1_ = 1;
    pvVar1 = L2ParamStack::Top(param_2);
    FString::FString(local_28,(ushort *)&DAT_10274940);
    local_78._0_1_ = 2;
    FUN_10040090(local_28,pvVar1);
    local_78 = CONCAT31(local_78._1_3_,1);
    FString::~FString(local_28);
    for (iVar4 = 0; local_1c = iVar4, iVar4 < (int)pvVar1; iVar4 = iVar4 + 1) {
      puVar2 = L2ParamStack::Top(param_2);
      FString::FString(local_28,puVar2);
      local_78._0_1_ = 3;
      uVar3 = FString::Printf((ushort *)local_74,L"Name_%d",iVar4);
      local_78._0_1_ = 4;
      FUN_10040230(uVar3,local_28);
      local_78._0_1_ = 3;
      FString::~FString(local_74);
      local_78._0_1_ = 1;
      FString::~FString(local_28);
      local_8 = L2ParamStack::Top(param_2);
      uVar3 = FString::Printf((ushort *)local_9c,L"ClassId_%d",iVar4);
      local_78._0_1_ = 5;
      FUN_10040090(uVar3,local_8);
      local_78._0_1_ = 1;
      FString::~FString(local_9c);
      puVar2 = L2ParamStack::Top(param_2);
      FString::FString(local_40,puVar2);
      local_78._0_1_ = 6;
      uVar3 = FString::Printf((ushort *)local_50,L"PledgeName_%d",iVar4);
      local_78._0_1_ = 7;
      FUN_10040230(uVar3,local_40);
      local_78._0_1_ = 6;
      FString::~FString(local_50);
      local_78._0_1_ = 1;
      FString::~FString(local_40);
      local_8 = L2ParamStack::Top(param_2);
      uVar3 = FString::Printf((ushort *)local_5c,L"PledgeCrestId_%d",iVar4);
      local_78._0_1_ = 8;
      FUN_10040090(uVar3,local_8);
      local_78._0_1_ = 1;
      FString::~FString(local_5c);
      puVar2 = L2ParamStack::Top(param_2);
      FString::FString(local_34,puVar2);
      local_78._0_1_ = 9;
      uVar3 = FString::Printf((ushort *)local_68,L"AllianceName_%d",iVar4);
      local_78._0_1_ = 10;
      FUN_10040230(uVar3,local_34);
      local_78._0_1_ = 9;
      FString::~FString(local_68);
      local_78._0_1_ = 1;
      FString::~FString(local_34);
      local_8 = L2ParamStack::Top(param_2);
      uVar3 = FString::Printf((ushort *)local_90,L"AllianceCrestId_%d",iVar4);
      local_78._0_1_ = 0xb;
      FUN_10040090(uVar3,local_8);
      local_78._0_1_ = 1;
      FString::~FString(local_90);
      local_8 = L2ParamStack::Top(param_2);
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


// ==== 10156350 FUN_10156350 dispatcher=100d1790 callers=DATA@10288188
// strings: 10282e74=PlayerNum | 10246348=Name | 102461cc=ClassID | 10282e68=CurHP | 10282e5c=MaxHP | 10282e50=CurCP | 10282e44=MaxCP | 102483b8=OlympiadObserverState | 10282e30=IsPlayer | 

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


// ==== 10156650 FUN_10156650 dispatcher=100d1790 callers=DATA@10288190
// strings: 102483b8=OlympiadObserverState | 102485a4=GamingState | 10282ec0=OlympiadTargetWnd | 10282e74=PlayerNum | 10282e74=PlayerNum | 102483b8=OlympiadObserverState | 102483b8=OlympiadObserverState | 

void __thiscall FUN_10156650(int *param_1,undefined1 param_2)

{
  FString *this;
  int *piVar1;
  FString *pFVar2;
  int iVar3;
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
  switch(param_2) {
  case 0:
    this = (FString *)(**(code **)(*param_1 + 0x784))(local_94);
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
    (**(code **)(*param_1 + 0x780))(pFVar2);
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
    pFVar2 = (FString *)(**(code **)(*param_1 + 0x784))(local_a0);
    local_7c._0_1_ = 9;
    iVar3 = FString::operator==(pFVar2,(ushort *)L"OlympiadObserverState");
    local_7c._0_1_ = 1;
    FString::~FString(local_a0);
    if (iVar3 == 0) {
      FString::FString(local_60,(ushort *)L"OlympiadObserverState");
      local_7c._0_1_ = 0xb;
      (**(code **)(*param_1 + 0x780))(local_60);
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


// ==== 10156920 FUN_10156920 dispatcher=100d1790 callers=DATA@10288194
// strings: 

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


// ==== 101569d0 FUN_101569d0 dispatcher=100d1790 callers=DATA@102884c4
// strings: 10282fd0=OwnerName | 10282fb8=RoutingType | 10282fa4=PartyNum | 10282f84=PartyMemberNum | 

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


// ==== 10156b70 FUN_10156b70 dispatcher=100d1790 callers=DATA@102884c8
// strings: 1028306c=MasterName | 10283058=MasterID | 10282fa4=PartyNum | 

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


// ==== 10156ce0 FUN_10156ce0 dispatcher=100d1790 callers=DATA@102884cc
// strings: 10283118=MemberCount | 10282ddc=Name_%d | 10275648=ServerID_%d | 10283100=ClassID_%d | 

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


// ==== 10156ea0 FUN_10156ea0 dispatcher=100d1790 callers=DATA@102884d0
// strings: 1028306c=MasterName | 10283058=MasterID | 10283118=MemberCount | 102418a0=Type | 

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


// ==== 10157030 FUN_10157030 dispatcher=100d1790 callers=DATA@102884d8
// strings: 

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


// ==== 101570e0 FUN_101570e0 dispatcher=100d1790 callers=DATA@1028819c
// strings: 

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


// ==== 101571a0 FUN_101571a0 dispatcher=100d1790 callers=DATA@102881a0
// strings: 

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


// ==== 10157260 FUN_10157260 dispatcher=100d1790 callers=DATA@10288114
// strings: 102418a0=Type | 

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


// ==== 10157650 FUN_10157650 dispatcher=100d1790 callers=DATA@10288130
// strings: 

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


// ==== 10157710 FUN_10157710 dispatcher=100d1790 callers=DATA@102880d8
// strings: 

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


// ==== 10157790 FUN_10157790 dispatcher=100d1790 callers=DATA@10287fd8
// strings: 102418a0=Type | 10283330=CurrentMP | 

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


// ==== 101578a0 FUN_101578a0 dispatcher=100d1790 callers=DATA@10287fdc
// strings: 10283384=RecipeID | 

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


// ==== 10157980 FUN_10157980 dispatcher=100d1790 callers=DATA@10287fe0
// strings: 10283384=RecipeID | 10283330=CurrentMP | 10283404=MaxMP | 102833e8=MakingResult | 102418a0=Type | 

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


// ==== 10157b20 FUN_10157b20 dispatcher=100d1790 callers=DATA@10287fe4
// strings: 102418a0=Type | 

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


// ==== 10157c00 FUN_10157c00 dispatcher=100d1790 callers=DATA@10287fe8
// strings: 10283384=RecipeID | 

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


// ==== 10157ce0 FUN_10157ce0 dispatcher=100d1790 callers=DATA@10287fec
// strings: 10283384=RecipeID | 1028351c=CanbeMade | 10283508=MakingFee | 

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


// ==== 10157e20 FUN_10157e20 dispatcher=100d1790 callers=DATA@10287ff0
// strings: 102461dc=ServerID | 10283330=CurrentMP | 10283404=MaxMP | 10283580=Adena | 

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


// ==== 10157f90 FUN_10157f90 dispatcher=100d1790 callers=DATA@10287ff4
// strings: 10283384=RecipeID | 1028351c=CanbeMade | 10283508=MakingFee | 

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


// ==== 101580d0 FUN_101580d0 dispatcher=100d1790 callers=DATA@10287ff8
// strings: 10283628=MerchantID | 10283384=RecipeID | 10283330=CurrentMP | 10283404=MaxMP | 102833e8=MakingResult | 10283580=Adena | 

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


// ==== 10158290 FUN_10158290 dispatcher=100d1790 callers=DATA@10287ffc
// strings: 102461dc=ServerID | 10283330=CurrentMP | 

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


// ==== 101583a0 FUN_101583a0 dispatcher=100d1790 callers=DATA@10288000
// strings: 102461dc=ServerID | 102836dc=CurrentHP | 

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


// ==== 101584b0 FUN_101584b0 dispatcher=100d1790 callers=DATA@10288008
// strings: 102461dc=ServerID | 10283404=MaxMP | 

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


// ==== 101585c0 FUN_101585c0 dispatcher=100d1790 callers=DATA@1028800c
// strings: 102461dc=ServerID | 10282e5c=MaxHP | 

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


// ==== 101586d0 FUN_101586d0 dispatcher=100d1790 callers=DATA@10288004
// strings: 102461dc=ServerID | 102837dc=CurrentCP | 

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


// ==== 101587e0 FUN_101587e0 dispatcher=100d1790 callers=DATA@10288010
// strings: 102461dc=ServerID | 10282e44=MaxCP | 

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


// ==== 101588f0 FUN_101588f0 dispatcher=100d1790 callers=DATA@10288014
// strings: 

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


// ==== 101589c0 FUN_101589c0 dispatcher=100d1790 callers=DATA@1028801c
// strings: 102838d0=Adena | 

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


// ==== 10158aa0 FUN_10158aa0 dispatcher=100d1790 callers=DATA@10288020
// strings: 10283948=Description | 1028393c=IconName | 10283934=HennaID | 1028392c=ClassID | 1028391c=NumberOfItem | 

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


// ==== 10158dd0 FUN_10158dd0 dispatcher=100d1790 callers=DATA@10288024
// strings: 102838d0=Adena | 10283a5c=DyeIconName | 10283a54=DyeName | 10283934=HennaID | 1028392c=ClassID | 10283a48=NumOfItem | 10283a38=TattooIconName | 10283a2c=TattooName | 10283a1c=TattooAddName | 10283a14=INTnow | 10283a08=INTchange | 10283a00=STRnow | 102839f4=STRchange | 102839ec=CONnow | 102839e0=CONchange | 102839d8=MENnow | 102839cc=MENchange | 102839c4=DEXnow | 102839b8=DEXchange | 102839b0=WITnow | 102839a4=WITchange | 

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


// ==== 10159350 FUN_10159350 dispatcher=100d1790 callers=DATA@10288028
// strings: 

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


// ==== 10159430 FUN_10159430 dispatcher=100d1790 callers=DATA@1028802c
// strings: 10283ad8=bActive | 

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


// ==== 10159560 FUN_10159560 dispatcher=100d1790 callers=DATA@10288030
// strings: 102838d0=Adena | 

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


// ==== 10159640 FUN_10159640 dispatcher=100d1790 callers=DATA@10288034
// strings: 10283948=Description | 1028393c=IconName | 10283934=HennaID | 1028392c=ClassID | 1028391c=NumberOfItem | 

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


// ==== 10159970 FUN_10159970 dispatcher=100d1790 callers=DATA@10288044
// strings: 10283ad8=bActive | 

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


// ==== 10159a80 FUN_10159a80 dispatcher=100d1790 callers=DATA@10288048
// strings: 

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


// ==== 10159b40 FUN_10159b40 dispatcher=100d1790 callers=DATA@10288018
// strings: 

void __thiscall FUN_10159b40(int *param_1,char param_2,char param_3)

{
  code *pcVar1;
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
  if (param_1[0x1438] == 0) {
LAB_10159bd6:
    puVar3 = local_420;
    puVar4 = auStackY_838;
    for (iVar2 = 0xff; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar4 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar4 = puVar4 + 1;
    }
    FUN_101aeba0();
    param_1[0x1436] = param_1[0x1436] + 1;
    if ((int)param_2 <= param_1[0x1436]) {
      pcVar1 = *(code **)(*param_1 + 0x2e4);
      param_1[0x1438] = 1;
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
    param_1[0x1436] = 0;
    FUN_101aed30();
    if ((param_2 != '\0') || (param_3 != '\0')) {
      param_1[0x1438] = 0;
      goto LAB_10159bd6;
    }
  }
  (**(code **)(*param_1 + 0x2e4))();
LAB_10159c9d:
  ExceptionList = local_1c;
  __security_check_cookie(uStack_24 ^ (uint)&stack0xfffffbcc);
  return;
}


// ==== 10159cd0 FUN_10159cd0 dispatcher=100d1790 callers=DATA@10288038
// strings: 102838d0=Adena | 10283a5c=DyeIconName | 10283a54=DyeName | 10283934=HennaID | 1028392c=ClassID | 10283a48=NumOfItem | 10283a38=TattooIconName | 10283a2c=TattooName | 10283a1c=TattooAddName | 10283a14=INTnow | 10283a08=INTchange | 10283a00=STRnow | 102839f4=STRchange | 102839ec=CONnow | 102839e0=CONchange | 102839d8=MENnow | 102839cc=MENchange | 102839c4=DEXnow | 102839b8=DEXchange | 102839b0=WITnow | 102839a4=WITchange | 

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


// ==== 1015a250 FUN_1015a250 dispatcher=100d1790 callers=DATA@10288050
// strings: 

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


// ==== 1015a4a0 FUN_1015a4a0 dispatcher=100d1790 callers=DATA@10288074
// strings: 

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


// ==== 1015a560 FUN_1015a560 dispatcher=100d1790 callers=DATA@10288090
// strings: 

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


// ==== 1015a610 FUN_1015a610 dispatcher=100d1790 callers=DATA@10288098
// strings: 

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


// ==== 1015a6c0 FUN_1015a6c0 dispatcher=100d1790 callers=DATA@102880a0
// strings: 

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


// ==== 1015a920 FUN_1015a920 dispatcher=100d1790 callers=DATA@10287e6c
// strings: 10283d48=LevelDiff | 

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


// ==== 1015aa00 FUN_1015aa00 dispatcher=100d1790 callers=DATA@10287f10
// strings: 10283ee0=ClanID | 10283ecc=ClanType | 10283eb8=ClanName | 10283e98=ClanMasterName | 10283e88=CrestID | 10283e70=SkillLevel | 10283e5c=CastleID | 10283e4c=AgitID | 10283e38=ClanRank | 10283e1c=ClanNameValue | 10283e0c=Status | 10283dfc=Guilty | 10283de4=AllianceID | 10283dc8=AllianceName | 10283da8=AllianceCrestID | 10283d9c=InWar | 

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


// ==== 1015ae50 FUN_1015ae50 dispatcher=100d1790 callers=DATA@10287f24
// strings: 10283ee0=ClanID | 10283e88=CrestID | 10283e70=SkillLevel | 10283e5c=CastleID | 10283e4c=AgitID | 10283e38=ClanRank | 10283e1c=ClanNameValue | 10283e0c=Status | 10283dfc=Guilty | 10283de4=AllianceID | 10283dc8=AllianceName | 10283da8=AllianceCrestID | 10283d9c=InWar | 10283f3c=LargeCrestID | 

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


// ==== 1015b1c0 FUN_1015b1c0 dispatcher=100d1790 callers=DATA@10287f14
// strings: 102460d4=Count | 10283fbc=SkillID%d | 10283fa0=SkillLevel%d | 

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


// ==== 1015b330 FUN_1015b330 dispatcher=100d1790 callers=DATA@10287f18
// strings: 10284018=SkillID | 10283e70=SkillLevel | 

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


// ==== 1015b450 FUN_1015b450 dispatcher=100d1790 callers=DATA@10287f1c
// strings: 

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


// ==== 1015b510 FUN_1015b510 dispatcher=100d1790 callers=DATA@10287f20
// strings: 102460d4=Count | 102840f4=GradeID%d | 102840cc=GradeMemberCount%d | 

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


// ==== 1015b680 FUN_1015b680 dispatcher=100d1790 callers=DATA@10287f28
// strings: 

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


// ==== 1015b730 FUN_1015b730 dispatcher=100d1790 callers=DATA@10287f2c
// strings: 10246348=Name | 102461c0=Level | 10246ed0=Class | 1028419c=Gender | 10284190=Race | 10283ecc=ClanType | 

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


// ==== 1015b970 FUN_1015b970 dispatcher=100d1790 callers=DATA@10287f30
// strings: 10283ecc=ClanType | 10246348=Name | 102461c0=Level | 10246ed0=Class | 1028419c=Gender | 10284190=Race | 102841fc=HaveMaster | 

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


// ==== 1015bbf0 FUN_1015bbf0 dispatcher=100d1790 callers=DATA@10287f34
// strings: 10246348=Name | 102461c0=Level | 10246ed0=Class | 1028419c=Gender | 10284190=Race | 10284258=PledgeType | 102841fc=HaveMaster | 

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


// ==== 1015be70 FUN_1015be70 dispatcher=100d1790 callers=DATA@10287f38
// strings: 10246348=Name | 

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


// ==== 1015bf70 FUN_1015bf70 dispatcher=100d1790 callers=DATA@10287f3c
// strings: 

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


// ==== 1015c020 FUN_1015c020 dispatcher=100d1790 callers=DATA@10287f50
// strings: 102843b8=ClanMaster | 102843ac=Join | 10284398=NickName | 10284384=ClanCrest | 10284370=Grade | 10284354=ManageMaster | 1028433c=OustMember | 

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


// ==== 1015c290 FUN_1015c290 dispatcher=100d1790 callers=DATA@10287f40
// strings: 10284370=Grade | 10246348=Name | 10284410=PowerValue%d | 

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


// ==== 1015c420 FUN_1015c420 dispatcher=100d1790 callers=DATA@10287f44
// strings: 10283ecc=ClanType | 10246348=Name | 10284398=NickName | 10284490=GradeID | 1028447c=OrderName | 1028306c=MasterName | 

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


// ==== 1015c6a0 FUN_1015c6a0 dispatcher=100d1790 callers=DATA@10287f48
// strings: 102844bc=Condition | 102844b0=Page | 10283eb8=ClanName | 102418a0=Type | 102844a0=Period | 

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


// ==== 1015c8b0 FUN_1015c8b0 dispatcher=100d1790 callers=DATA@10287f4c
// strings: 10283ee0=ClanID | 10283ecc=ClanType | 10283eb8=ClanName | 1028306c=MasterName | 

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


// ==== 1015ca70 FUN_1015ca70 dispatcher=100d1790 callers=DATA@1028831c
// strings: 1028451c=userName | 102692ac=type | 

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


// ==== 1015cb90 FUN_1015cb90 dispatcher=100d1790 callers=DATA@10288320
// strings: 102692ac=type | 

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


// ==== 1015cc50 FUN_1015cc50 dispatcher=100d1790 callers=DATA@10288324
// strings: 102692ac=type | 

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


// ==== 1015cd10 FUN_1015cd10 dispatcher=100d1790 callers=DATA@10288328
// strings: 102692ac=type | 

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


// ==== 1015cdd0 FUN_1015cdd0 dispatcher=100d1790 callers=DATA@1028832c
// strings: 1028451c=userName | 1028459c=class | 10284590=level | 1028457c=currentHP | 10284570=maxHP | 1028455c=currentMP | 10284550=maxMP | 1028453c=currentCP | 10284530=maxCP | 

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


// ==== 1015d090 FUN_1015d090 dispatcher=100d1790 callers=DATA@10288330
// strings: 1028451c=userName | 102845a8=bEnemy | 

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


// ==== 1015d1f0 FUN_1015d1f0 dispatcher=100d1790 callers=DATA@1028825c
// strings: 10246ca8=name | 

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


// ==== 1015d370 FUN_1015d370 dispatcher=100d1790 callers=DATA@10288260
// strings: 10282488=adena | 102845b8=destinationID | 

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


// ==== 1015d4c0 FUN_1015d4c0 dispatcher=100d1790 callers=DATA@10288234
// strings: 10283e5c=CastleID | 102845f8=IsOwner | 10282fd0=OwnerName | 10283ee0=ClanID | 10283eb8=ClanName | 10283de4=AllianceID | 10283dc8=AllianceName | 102845e8=NowTime | 102845d4=SiegeTime | 

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


// ==== 1015d880 FUN_1015d880 dispatcher=100d1790 callers=DATA@10288238
// strings: 102418a0=Type | 10283ee0=ClanID | 10283eb8=ClanName | 10283e98=ClanMasterName | 10284648=ClanCrestID | 10283de4=AllianceID | 10283dc8=AllianceName | 10284620=AllianceMasterName | 10284608=ProposeTime | 

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


// ==== 1015dc70 FUN_1015dc70 dispatcher=100d1790 callers=DATA@1028823c
// strings: 102418a0=Type | 10283ee0=ClanID | 10283eb8=ClanName | 10283e98=ClanMasterName | 10284648=ClanCrestID | 10283de4=AllianceID | 10283dc8=AllianceName | 10284620=AllianceMasterName | 10284608=ProposeTime | 10283e0c=Status | 

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


// ==== 1015e0a0 FUN_1015e0a0 dispatcher=100d1790 callers=DATA@10288240
// strings: 10284660=TimeID | 

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


// ==== 1015e150 FUN_1015e150 dispatcher=100d1790 callers=DATA@10288244
// strings: 102418a0=Type | 

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


// ==== 1015e200 FUN_1015e200 dispatcher=100d1790 callers=DATA@10288248
// strings: 102418a0=Type | 

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


// ==== 1015e2b0 FUN_1015e2b0 dispatcher=100d1790 callers=DATA@1028824c
// strings: 102418a0=Type | 

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


// ==== 1015e360 FUN_1015e360 dispatcher=100d1790 callers=DATA@10288250
// strings: 102418a0=Type | 

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


// ==== 1015e410 FUN_1015e410 dispatcher=100d1790 callers=DATA@10287fa8
// strings: 10284694=SkillID_%d | 10284680=Level_%d | 10284670=Sec_%d | 

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


// ==== 1015e640 FUN_1015e640 dispatcher=100d1790 callers=DATA@102880c4
// strings: 10283058=MasterID | 10282fb8=RoutingType | 10246348=Name | 10282e50=CurCP | 10282e44=MaxCP | 10282e68=CurHP | 10282e5c=MaxHP | 10284718=CurMP | 10283404=MaxMP | 102461cc=ClassID | 102461c0=Level | 102846f4=PartyMemberCount | 

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


// ==== 1015eaf0 FUN_1015eaf0 dispatcher=100d1790 callers=DATA@102880c8
// strings: 10246348=Name | 10282e50=CurCP | 10282e44=MaxCP | 10282e68=CurHP | 10282e5c=MaxHP | 10284718=CurMP | 10283404=MaxMP | 102461cc=ClassID | 102461c0=Level | 

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


// ==== 1015eec0 FUN_1015eec0 dispatcher=100d1790 callers=DATA@102880cc
// strings: 102846f4=PartyMemberCount | 

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


// ==== 1015f020 FUN_1015f020 dispatcher=100d1790 callers=DATA@102880d0
// strings: 102846f4=PartyMemberCount | 

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


// ==== 1015f190 FUN_1015f190 dispatcher=100d1790 callers=DATA@10287eec
// strings: 1028485c=HtmlString | 

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


// ==== 1015f290 FUN_1015f290 dispatcher=100d1790 callers=DATA@102880fc
// strings: 10284940=Command1 | 1028492c=Command2 | 10284918=Command3 | 10284904=Command4 | 102848f0=Command5 | 102848dc=Command6 | 102848c8=Command7 | 102848b4=Command8 | 102848a4=Address | 

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


// ==== 1015f790 FUN_1015f790 dispatcher=100d1790 callers=DATA@10287ef0
// strings: 102849b4=QuestionID | 

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


// ==== 1015f870 FUN_1015f870 dispatcher=100d1790 callers=DATA@10287ef8
// strings: 

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


// ==== 1015f8f0 FUN_1015f8f0 dispatcher=100d1790 callers=DATA@102881c0
// strings: 

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


// ==== 1015f9a0 FUN_1015f9a0 dispatcher=100d1790 callers=DATA@102881c4
// strings: 

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


// ==== 1015fa50 FUN_1015fa50 dispatcher=100d1790 callers=DATA@102882ec
// strings: 102418ac=RemainTime | 102849c0=MaxTime | 

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


// ==== 1015fb40 FUN_1015fb40 dispatcher=100d1790 callers=DATA@102881c8
// strings: 

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


// ==== 1015fbd0 FUN_1015fbd0 dispatcher=100d1790 callers=DATA@102881cc
// strings: 

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


// ==== 1015fc60 FUN_1015fc60 dispatcher=100d1790 callers=DATA@102881d0
// strings: 102849d0=Show | 

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


// ==== 1015fd20 FUN_1015fd20 dispatcher=100d1790 callers=DATA@102881d4
// strings: 

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


// ==== 1015fdb0 FUN_1015fdb0 dispatcher=100d1790 callers=DATA@102881d8
// strings: 

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


// ==== 1015fe40 FUN_1015fe40 dispatcher=100d1790 callers=DATA@102881dc
// strings: 

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


// ==== 1015ff10 FUN_1015ff10 dispatcher=100d1790 callers=DATA@102881e0
// strings: 10284a70=WorkType | 

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


// ==== 10160010 FUN_10160010 dispatcher=100d1790 callers=DATA@10288268
// strings: 10283ee0=ClanID | 10283ecc=ClanType | 10283eb8=ClanName | 10283e98=ClanMasterName | 10283e88=CrestID | 10283e70=SkillLevel | 10283e5c=CastleID | 10283e4c=AgitID | 10283e38=ClanRank | 10283e1c=ClanNameValue | 10283e0c=Status | 10283dfc=Guilty | 10283de4=AllianceID | 10283dc8=AllianceName | 10283da8=AllianceCrestID | 10283d9c=InWar | 

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


// ==== 10160410 FUN_10160410 dispatcher=100d1790 callers=DATA@1028826c
// strings: 

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


// ==== 101604c0 FUN_101604c0 dispatcher=100d1790 callers=DATA@10288270
// strings: 10246348=Name | 102461c0=Level | 10246ed0=Class | 1028419c=Gender | 10284190=Race | 10283ecc=ClanType | 

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


// ==== 10160710 FUN_10160710 dispatcher=100d1790 callers=DATA@10288274
// strings: 

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


// ==== 101607c0 FUN_101607c0 dispatcher=100d1790 callers=DATA@10288284
// strings: 

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


// ==== 10160870 FUN_10160870 dispatcher=100d1790 callers=DATA@10288288
// strings: 

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


// ==== 10160920 FUN_10160920 dispatcher=100d1790 callers=DATA@10288290
// strings: 102461cc=ClassID | 1026f64c=ItemCount | 

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


// ==== 10160a30 FUN_10160a30 dispatcher=100d1790 callers=DATA@10288294
// strings: 10284cd8=InvenLimit | 

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


// ==== 10160b10 FUN_10160b10 dispatcher=100d1790 callers=DATA@10288298
// strings: 

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


// ==== 10160bd0 FUN_10160bd0 dispatcher=100d1790 callers=DATA@1028829c
// strings: 102826f8=category | 1028270c=withdraw | 102692ac=type | 10282488=adena | 

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


// ==== 10160d30 FUN_10160d30 dispatcher=100d1790 callers=DATA@102882a0
// strings: 

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


// ==== 101610a0 FUN_101610a0 dispatcher=100d1790 callers=DATA@10287f00
// strings: 

void __thiscall
FUN_101610a0(int *param_1,int param_2,int param_3,int param_4,int param_5,int param_6)

{
  uint *puVar1;
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
  if (param_2 == 0) {
    local_14 = (undefined1 *)&uStack_44;
    (**(code **)(*param_1 + 0x684))(1);
    local_34 = (float)param_4;
    local_30 = (float)param_5;
    local_2c = (float)param_6;
    (**(code **)(*param_1 + 0x6a4))(local_34,local_30,local_2c);
    puVar1 = (uint *)local_14;
  }
  else {
    puVar1 = &uStack_44;
    if (param_2 == 2) {
      (**(code **)(*param_1 + 0x684))(0);
      puVar1 = (uint *)local_14;
    }
  }
  local_14 = (undefined1 *)puVar1;
  FUN_1003f970();
  local_8._0_1_ = 1;
  FString::FString((FString *)&local_34,(ushort *)&DAT_1024d1bc);
  local_8._0_1_ = 2;
  FUN_10040090(&local_34,param_4);
  local_8._0_1_ = 1;
  FString::~FString((FString *)&local_34);
  FString::FString((FString *)&local_34,(ushort *)&DAT_1024d1b8);
  local_8._0_1_ = 3;
  FUN_10040090(&local_34,param_5);
  local_8._0_1_ = 1;
  FString::~FString((FString *)&local_34);
  FString::FString((FString *)&local_34,(ushort *)&DAT_10284e14);
  local_8._0_1_ = 4;
  FUN_10040090(&local_34,param_6);
  local_8._0_1_ = 1;
  FString::~FString((FString *)&local_34);
  if ((param_3 == 0) || (param_3 == 2)) {
    if (param_2 == 0) {
      uVar2 = 0x6c2;
    }
    else {
      if (param_2 != 1) {
        if (param_2 == 2) {
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
  if ((param_3 == 1) || (param_3 == 2)) {
    if (param_2 == 0) {
      uVar2 = 0x6fe;
    }
    else {
      if (param_2 != 1) {
        if (param_2 == 2) {
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


// ==== 10161310 FUN_10161310 dispatcher=100d1790 callers=DATA@10287f04
// strings: 

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


// ==== 10161450 FUN_10161450 dispatcher=100d1790 callers=DATA@102882a8
// strings: 

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


// ==== 10161500 FUN_10161500 dispatcher=100d1790 callers=DATA@102882ac
// strings: 10284ee4=ID%d | 10284ed4=NAME%d | 

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


// ==== 101616d0 FUN_101616d0 dispatcher=100d1790 callers=DATA@102882b0
// strings: 10284ee4=ID%d | 10284ed4=NAME%d | 10284f64=ISOWNED%d | 

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


// ==== 10161a20 FUN_10161a20 dispatcher=100d1790 callers=DATA@102882b4
// strings: 10284fd8=NewWidth | 10284fc4=NewHeight | 

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


// ==== 10161b30 FUN_10161b30 dispatcher=100d1790 callers=DATA@10288134
// strings: 

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


// ==== 10161be0 FUN_10161be0 dispatcher=100d1790 callers=DATA@10288138
// strings: 

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


// ==== 10161c90 FUN_10161c90 dispatcher=100d1790 callers=DATA@1028813c
// strings: 

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


// ==== 10161d40 FUN_10161d40 dispatcher=100d1790 callers=DATA@10288140
// strings: 1028517c=TargetItemServerID | 10285158=TargetItemClassID | 1028230c=Result | 

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


// ==== 10161e80 FUN_10161e80 dispatcher=100d1790 callers=DATA@10288144
// strings: 10285268=RefinerItemServerID | 10285240=RefinerItemClassID | 10285220=GemStoneClassID | 10285204=GemStoneCount | 1028230c=Result | 

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


// ==== 10162020 FUN_10162020 dispatcher=100d1790 callers=DATA@10288148
// strings: 10285314=GemStoneServerID | 10285220=GemStoneClassID | 10285204=GemStoneCount | 102852e4=NecessaryGemStoneCount | 1028230c=Result | 

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


// ==== 101621c0 FUN_101621c0 dispatcher=100d1790 callers=DATA@1028814c
// strings: 1028538c=Option1 | 1028537c=Option2 | 1028230c=Result | 

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


// ==== 10162300 FUN_10162300 dispatcher=100d1790 callers=DATA@10288150
// strings: 1028541c=CancelItemServerID | 102853f8=CancelItemClassID | 1028538c=Option1 | 1028537c=Option2 | 10283580=Adena | 1028230c=Result | 

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


// ==== 101624d0 FUN_101624d0 dispatcher=100d1790 callers=DATA@10288154
// strings: 1028230c=Result | 

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


// ==== 101625b0 FUN_101625b0 dispatcher=100d1790 callers=DATA@102882b8
// strings: 

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


// ==== 10162640 FUN_10162640 dispatcher=100d1790 callers=DATA@102882bc
// strings: 1026cf1c=sellList | 102692ac=type | 102854ec=userID | 1026cf10=bulk | 10282488=adena | 

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


// ==== 101627e0 FUN_101627e0 dispatcher=100d1790 callers=DATA@102882c0
// strings: 102692ac=type | 102854ec=userID | 1026cf10=bulk | 10282488=adena | 

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


// ==== 10162980 FUN_10162980 dispatcher=100d1790 callers=DATA@102882c4
// strings: 1026cf1c=sellList | 102692ac=type | 10285560=topList | 10267b7c=target | 1026cf1c=sellList | 102692ac=type | 10285548=bottomList | 10267b7c=target | 

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


// ==== 10162c40 FUN_10162c40 dispatcher=100d1790 callers=DATA@102882c8
// strings: 102692ac=type | 10285560=topList | 10267b7c=target | 

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


// ==== 10162d90 FUN_10162d90 dispatcher=100d1790 callers=DATA@102882d0
// strings: 1026cf68=buyList | 102692ac=type | 102854ec=userID | 10282488=adena | 

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


// ==== 10162f00 FUN_10162f00 dispatcher=100d1790 callers=DATA@102882d4
// strings: 1026cf30=sell | 102692ac=type | 102854ec=userID | 10282488=adena | 

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


// ==== 10163070 FUN_10163070 dispatcher=100d1790 callers=DATA@102882d8
// strings: 1026cf68=buyList | 102692ac=type | 10285560=topList | 10267b7c=target | 1026cf68=buyList | 102692ac=type | 10285548=bottomList | 10267b7c=target | 

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


// ==== 10163300 FUN_10163300 dispatcher=100d1790 callers=DATA@102882dc
// strings: 1026cf30=sell | 102692ac=type | 10285560=topList | 10267b7c=target | 

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


// ==== 10163450 FUN_10163450 dispatcher=100d1790 callers=DATA@102881a8
// strings: 10285614=shopID | 

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


// ==== 10163500 FUN_10163500 dispatcher=100d1790 callers=DATA@102881ac
// strings: 10285690=index | 102692ac=type | 10246b54=refineryOp1 | 10246b3c=refineryOp2 | 10246cb4=classID | 10246bf0=slotBitType | 10246c2c=itemType | 1028567c=itemCount | 1028566c=enchant | 10285648=OutputRefineryOp1 | 10285624=OutputRefineryOp2 | 

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


// ==== 10163800 FUN_10163800 dispatcher=100d1790 callers=DATA@102881b0
// strings: 10246b54=refineryOp1 | 10246b3c=refineryOp2 | 102461cc=ClassID | 102856e4=count | 1028566c=enchant | 102856c0=inputRefineryOp1 | 1028569c=inputRefineryOp2 | 

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


// ==== 10163a30 FUN_10163a30 dispatcher=100d1790 callers=DATA@102881b4
// strings: 

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


// ==== 10163ab0 FUN_10163ab0 dispatcher=100d1790 callers=DATA@102881bc
// strings: 

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


// ==== 10163b30 FUN_10163b30 dispatcher=100d1790 callers=DATA@102883cc
// strings: 1028577c=SnoopID | 10285768=SnoopName | 10285750=CreatureID | 102418a0=Type | 10285734=CharacterName | 1028571c=ChatMessage | 

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


// ==== 10164170 FUN_10164170 dispatcher=100d1790 callers=DATA@10288198
// strings: 10285908=IdxMail | 

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


// ==== 10164250 FUN_10164250 dispatcher=100d1790 callers=DATA@10288070
// strings: 10285950=OnOff | 10285950=OnOff | 

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


// ==== 10164610 FUN_10164610 dispatcher=100d1790 callers=FUN_10040940@10040940
// strings: 

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


// ==== 10165630 FUN_10165630 dispatcher=100d1790 callers=execSetQuestTargetInfo@1011f760 FUN_1006fc40@1006fc40 FUN_100103b0@100103b0
// strings: 

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


// ==== 10165700 FUN_10165700 dispatcher=100d1790 callers=DATA@102883d0
// strings: 

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


// ==== 101657d0 FUN_101657d0 dispatcher=100d1790 callers=DATA@102883d4
// strings: 

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


// ==== 101658a0 FUN_101658a0 dispatcher=100d1790 callers=DATA@102883dc
// strings: 10285f7c=TownMapName | 10285f70=UserPosX | 10285f64=UserPosY | 

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


// ==== 10165a10 FUN_10165a10 dispatcher=100d1790 callers=DATA@102883e0
// strings: 

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


// ==== 10165ad0 FUN_10165ad0 dispatcher=100d1790 callers=DATA@102883e4
// strings: 

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


// ==== 10165b90 FUN_10165b90 dispatcher=100d1790 callers=DATA@102883e8
// strings: 10284490=GradeID | 10274014=Command | 10284410=PowerValue%d | 

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


// ==== 10165d00 FUN_10165d00 dispatcher=100d1790 callers=FUN_10172350@10172350
// strings: 102849d0=Show | 102849d0=Show | 

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


// ==== 10165e70 FUN_10165e70 dispatcher=100d1790 callers=DATA@102882f4
// strings: 102860f4=Winner | 102860e4=RoomNum | 102860cc=SealNum_%d | 102860b8=Winner_%d | 102860a8=Msg_%d | 

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


// ==== 10166050 FUN_10166050 dispatcher=100d1790 callers=DATA@102882f0
// strings: 1027d278=SSQStatus | 102844a0=Period | 102862b0=MsgNum1 | 102862a0=MsgNum2 | 10286290=SSQTeam | 10286274=SelectedSeal | 10286258=Contribution | 10286238=SealStoneAdena | 10286214=Team1HuntingMark | 102861ec=Team1MainEventMark | 102861c8=Team2HuntingMark | 102861a0=Team2MainEventMark | 1028618c=Team1Per | 10286178=Team2Per | 10286158=Team1TotalMark | 10286138=Team2TotalMark | 

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


// ==== 10166400 FUN_10166400 dispatcher=100d1790 callers=DATA@102882fc
// strings: 1027d278=SSQStatus | 1028645c=EventNum | 10286440=EventType_%d | 10286428=RoomNum_%d | 1028640c=EventNo_%d_%d | 102863ec=WinPoint_%d_%d | 102863c8=Team2Score_%d_%d | 102863a8=Team2Num_%d_%d | 10286374=Team2MemberName_%d_%d_%d | 10286350=Team1Score_%d_%d | 10286330=Team1Num_%d_%d | 102862fc=Team1MemberName_%d_%d_%d | 

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


// ==== 10166800 FUN_10166800 dispatcher=100d1790 callers=DATA@10288300
// strings: 1027d278=SSQStatus | 10286540=NeedPoint1 | 10286528=NeedPoint2 | 10286518=SealNum | 10286504=SealID_%d | 102864e4=OwnerTeamID_%d | 102864c8=Team2Mark_%d | 102864ac=Team1Mark_%d | 

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


// ==== 10166a70 FUN_10166a70 dispatcher=100d1790 callers=DATA@10288414
// strings: 102865a8=Enable=1 | 

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


// ==== 10166b20 FUN_10166b20 dispatcher=100d1790 callers=DATA@10288450
// strings: 102418a0=Type | 1028660c=Duration | 10286600=Ticks | 102865f0=Amount | 

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


// ==== 10166ca0 FUN_10166ca0 dispatcher=100d1790 callers=DATA@10288454
// strings: 10248c80=EventMatchObserverState | 102485a4=GamingState | 

void __thiscall FUN_10166ca0(int *param_1,undefined4 param_2,char param_3)

{
  undefined3 uVar1;
  int iVar2;
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
  if (param_3 == '\0') {
    uStack_64 = 0x10166df2;
    local_8._1_3_ = uVar1;
    FString::FString(local_4c,(ushort *)L"GamingState");
    local_8._0_1_ = 3;
    uStack_64 = 0x10166e06;
    (**(code **)(*param_1 + 0x780))();
    this = local_4c;
  }
  else {
    local_14 = (undefined1 *)&uStack_5c;
    if (param_3 != '\x01') goto LAB_10166e12;
    uStack_64 = 0x10166cfd;
    local_14 = (undefined1 *)&uStack_5c;
    FString::FString(local_28,(ushort *)L"EventMatchObserverState");
    local_8._0_1_ = 4;
    uStack_64 = 0x10166d11;
    (**(code **)(*param_1 + 0x780))();
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


// ==== 10166e80 FUN_10166e80 dispatcher=100d1790 callers=DATA@10288458
// strings: 102418a0=Type | 1027c984=Message | 

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


// ==== 10166fa0 FUN_10166fa0 dispatcher=100d1790 callers=DATA@1028845c
// strings: 

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


// ==== 10167090 FUN_10167090 dispatcher=100d1790 callers=DATA@10288468
// strings: 1028673c=TeamID | 

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


// ==== 10167190 FUN_10167190 dispatcher=100d1790 callers=DATA@1028846c
// strings: 10286790=MatchID | 

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


// ==== 10167290 FUN_10167290 dispatcher=100d1790 callers=DATA@10288470
// strings: 1028673c=TeamID | 102867e4=UserID | 

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


// ==== 10167420 FUN_10167420 dispatcher=100d1790 callers=DATA@1028847c
// strings: 1028673c=TeamID | 102867e4=UserID | 

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


// ==== 10167570 FUN_10167570 dispatcher=100d1790 callers=DATA@10288484
// strings: 

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


// ==== 10167620 FUN_10167620 dispatcher=100d1790 callers=DATA@10288488
// strings: 102868e4=AttackerID | 102868d8=DefenderID | 102868d0=SkillID | 

void __thiscall FUN_10167620(int param_1,int param_2,int param_3,undefined4 param_4)

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
  
  puStack_c = &LAB_10210a63;
  local_10 = ExceptionList;
  uStack_44 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_44;
  ExceptionList = &local_10;
  local_8 = 0;
  if (*(int *)(param_1 + 0x50ac) != 0) {
    FUN_1003f970();
    local_8._0_1_ = 1;
    FString::FString(local_34,"AttackerID");
    local_8._0_1_ = 2;
    FUN_10040090(local_34,*(undefined4 *)(param_2 + 0x18));
    local_8._0_1_ = 1;
    FString::~FString(local_34);
    FString::FString(local_34,"DefenderID");
    local_8._0_1_ = 3;
    FUN_10040090(local_34,*(undefined4 *)(param_3 + 0x18));
    local_8._0_1_ = 1;
    FString::~FString(local_34);
    FString::FString(local_34,"SkillID");
    local_8._0_1_ = 4;
    FUN_10040090(local_34,param_4);
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


// ==== 10167770 FUN_10167770 dispatcher=100d1790 callers=DATA@1028848c
// strings: 102868e4=AttackerID | 10286950=AttackerName | 102868d8=DefenderID | 10286940=DefenderName | 10286928=ShieldDefense | 1028691c=Critical | 

void __thiscall
FUN_10167770(int param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5,
            undefined4 param_6)

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
  
  puStack_c = &LAB_10210ad9;
  local_10 = ExceptionList;
  uStack_50 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_50;
  ExceptionList = &local_10;
  local_8 = 0;
  if (*(int *)(param_1 + 0x50ac) != 0) {
    FUN_1003f970();
    local_8._0_1_ = 1;
    FString::FString(local_34,"AttackerID");
    local_8._0_1_ = 2;
    FUN_10040090(local_34,*(undefined4 *)(param_2 + 0x18));
    local_8._0_1_ = 1;
    FString::~FString(local_34);
    FString::FString(local_34,"AttackerName");
    local_8._0_1_ = 3;
    uVar1 = FString::FString(local_40,(ushort *)(param_2 + 0x1c));
    local_8._0_1_ = 4;
    FUN_10040230(local_34,uVar1);
    local_8._0_1_ = 3;
    FString::~FString(local_40);
    local_8._0_1_ = 1;
    FString::~FString(local_34);
    FString::FString(local_34,"DefenderID");
    local_8._0_1_ = 5;
    FUN_10040090(local_34,*(undefined4 *)(param_3 + 0x18));
    local_8._0_1_ = 1;
    FString::~FString(local_34);
    FString::FString(local_34,"DefenderName");
    local_8._0_1_ = 6;
    uVar1 = FString::FString(local_40,(ushort *)(param_3 + 0x1c));
    local_8._0_1_ = 7;
    FUN_10040230(local_34,uVar1);
    local_8._0_1_ = 6;
    FString::~FString(local_40);
    local_8._0_1_ = 1;
    FString::~FString(local_34);
    FString::FString(local_34,"Miss");
    local_8._0_1_ = 8;
    FUN_10040090(local_34,param_4);
    local_8._0_1_ = 1;
    FString::~FString(local_34);
    FString::FString(local_34,"ShieldDefense");
    local_8._0_1_ = 9;
    FUN_10040090(local_34,param_5);
    local_8._0_1_ = 1;
    FString::~FString(local_34);
    FString::FString(local_34,"Critical");
    local_8._0_1_ = 10;
    FUN_10040090(local_34,param_6);
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


// ==== 101679b0 FUN_101679b0 dispatcher=100d1790 callers=DATA@10288494
// strings: 

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


// ==== 10167a70 FUN_10167a70 dispatcher=100d1790 callers=DATA@10288498
// strings: 

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


// ==== 10167e50 FUN_10167e50 dispatcher=100d1790 callers=DATA@102884f4
// strings: 

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


// ==== 10167ee0 FUN_10167ee0 dispatcher=100d1790 callers=DATA@102884f8
// strings: 

void __thiscall FUN_10167ee0(int *param_1,int param_2)

{
  FString local_18 [12];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10210be9;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (param_2 == -1) {
    (**(code **)(*param_1 + 0x754))(0,DAT_103554c4 ^ (uint)local_18);
  }
  else if (param_2 == 0) {
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


// ==== 10167f90 FUN_10167f90 dispatcher=100d1790 callers=DATA@1028849c
// strings: 10286b20=PageNum | 10286b0c=RoomCount | 10286428=RoomNum_%d | 10286af8=Leader_%d | 10286ae4=ZoneID_%d | 10286acc=MinLevel_%d | 10286ab4=MaxLevel_%d | 10286a98=CurMember_%d | 10286a7c=MaxMember_%d | 10286a64=RoomName_%d | 

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


// ==== 101682c0 FUN_101682c0 dispatcher=100d1790 callers=DATA@102884a0
// strings: 

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


// ==== 10168370 FUN_10168370 dispatcher=100d1790 callers=DATA@102884a4
// strings: 102860e4=RoomNum | 10286c18=MaxMember | 10286c04=MinLevel | 10286bf0=MaxLevel | 10286bd0=LootingMethodID | 10286bc0=ZoneID | 10286bac=RoomName | 

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


// ==== 10168590 FUN_10168590 dispatcher=100d1790 callers=DATA@102884a8
// strings: 10286ccc=MyMembershipType | 10283118=MemberCount | 10286cb4=MemberID_%d | 10286c98=MemberName_%d | 10283100=ClassID_%d | 10284680=Level_%d | 10286ae4=ZoneID_%d | 10286c74=MembershipType_%d | 

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


// ==== 10168830 FUN_10168830 dispatcher=100d1790 callers=DATA@102884ac
// strings: 

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


// ==== 101688f0 FUN_101688f0 dispatcher=100d1790 callers=DATA@102884b0
// strings: 10286d7c=UpdateType | 10286d68=MemberID | 10286d50=MemberName | 102461cc=ClassID | 102461c0=Level | 10286bc0=ZoneID | 10286d30=MembershipType | 

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


// ==== 10168b10 FUN_10168b10 dispatcher=100d1790 callers=DATA@102884bc
// strings: 10286790=MatchID | 10286e40=MatchStat | 10286e2c=FenceStat | 10286e18=Team1Name | 10286e04=Team2Name | 10286df0=Team1Stat | 10286ddc=Team2Stat | 

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


// ==== 10169140 FUN_10169140 dispatcher=100d1790 callers=DATA@1028852c
// strings: 10286f1c=TotalPoint | 10286f08=AddPoint | 10286ef0=PeriodType | 102418ac=RemainTime | 10286edc=PointType | 

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


// ==== 101692f0 FUN_101692f0 dispatcher=100d1790 callers=DATA@10288530
// strings: 10286f80=ZoneCode | 

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


// ==== 101693e0 FUN_101693e0 dispatcher=100d1790 callers=DATA@10288534
// strings: 10287040=RaidRank | 10287028=SeasonPoint | 102460d4=Count | 10287010=MonsterID%d | 10286ff0=CurrentPoint%d | 10286fd4=TotalPoint%d | 

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


// ==== 101695f0 FUN_101695f0 dispatcher=100d1790 callers=DATA@10288538
// strings: 

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


// ==== 101696b0 FUN_101696b0 dispatcher=100d1790 callers=DATA@1028853c
// strings: 102871c0=MsgType | 102871b4=MsgNo | 1028719c=WindowType | 10287188=FontSize | 10287174=FontType | 10287160=MsgColor | 10287148=ShadowType | 10287128=BackgroundType | 10287114=LifeTime | 102870f8=AnimationType | 

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


// ==== 101699d0 FUN_101699d0 dispatcher=100d1790 callers=DATA@1028854c
// strings: 10282fb8=RoutingType | 

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


// ==== 10169ac0 FUN_10169ac0 dispatcher=100d1790 callers=DATA@10288544
// strings: 10287278=AllCount | 102460d4=Count | 

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


// ==== 10169be0 FUN_10169be0 dispatcher=100d1790 callers=DATA@10288548
// strings: 10246348=Name | 102461cc=ClassID | 102461c0=Level | 

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


// ==== 1016ac70 FUN_1016ac70 dispatcher=100d1790 callers=DATA@102880b0
// strings: 102874d0=QuestID | 102461c0=Level | 102874bc=Completed | 

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

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
  local_8 = _DAT_10249830;
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
      FUN_10071050(_DAT_10249830,iVar6);
      uVar5 = FUN_101c19e0();
      uVar4 = uVar4 | uVar5;
    }
  }
  uVar3 = param_2;
  for (uVar4 = 0; uVar2 = param_1, local_3c = uVar4, (int)uVar4 < 0x1e; uVar4 = uVar4 + 1) {
    local_8 = _DAT_10249830;
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


// ==== 1016b0a0 FUN_1016b0a0 dispatcher=100d1790 callers=DATA@1028815c
// strings: 102874d0=QuestID | 102875b8=QuestName | 10287594=QuestRequirement | 10287588=%d~%d | 1028757c=%d %s | 10287564=QuestLevel | 10287550=QuestType | 10287534=QuestNpcName | 10287514=QuestDecription | 

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


// ==== 1016b560 FUN_1016b560 dispatcher=100d1790 callers=DATA@1028818c
// strings: 10287650=PlayerID | 10284694=SkillID_%d | 10287634=SkillLevel_%d | 10287618=RemainTime_%d | 10282ddc=Name_%d | 1027491c=IconName_%d | 102748e0=Description_%d | 

void __thiscall FUN_1016b560(int param_1,L2ParamStack *param_2)

{
  int iVar1;
  void *pvVar2;
  void *pvVar3;
  ushort *puVar4;
  undefined4 uVar5;
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
  if (*(int *)(param_1 + 0x50ac) != 0) {
    L2ParamStack::Restart(param_2);
    FUN_1003f970();
    local_74._0_1_ = 1;
    pvVar2 = L2ParamStack::Top(param_2);
    pvVar3 = L2ParamStack::Top(param_2);
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
      pvVar2 = L2ParamStack::Top(param_2);
      pvVar3 = L2ParamStack::Top(param_2);
      local_8 = (uint)pvVar3 & 0xffff;
      local_30 = L2ParamStack::Top(param_2);
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


// ==== 1016b870 FUN_1016b870 dispatcher=100d1790 callers=DATA@10288118
// strings: 10287730=iLevel | 10287724=iSPConsume | 10287718=iEXPConsume | 1028770c=strIconName | 10287704=strName | 102876f4=strDescription | 102876e4=strOperateType | 102876d8=iMPConsume | 102876cc=iCastRange | 102876c0=iPercent | 102876b0=strEnchantName | 102876a0=strEnchantDesc | 

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


// ==== 1016bea0 FUN_1016bea0 dispatcher=100d1790 callers=DATA@1028811c
// strings: 10287880=iLevel | 10287860=strEnchantName | 1028784c=iMaxLevel | 10287834=iSPConsume | 10287818=bItemConsume | 10287800=iEXPConsume | 102877f4=iType | 102877e4=strName | 102877c4=strDescription | 102877a4=strOperateType | 1028778c=strIconName | 

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


// ==== 1016c400 FUN_1016c400 dispatcher=100d1790 callers=DATA@10288120
// strings: 1028770c=strIconName | 10287704=strName | 102878ec=iNumOfItem | 

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


// ==== 1016c5e0 FUN_1016c5e0 dispatcher=100d1790 callers=DATA@102880dc
// strings: 102418a0=Type | 102461cc=ClassID | 102461c0=Level | 10246348=Name | 10246314=IconName | 10246284=Description | 10287934=EnchantName | 10245e1c=Lock | 10276720=%s%s %s | 10274014=Command | 

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

void __thiscall FUN_1016c5e0(int param_1,L2ParamStack *param_2)

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
  
  puStack_24f4 = &LAB_102117e6;
  local_24f8 = ExceptionList;
  uStack_2538 = DAT_103554c4 ^ (uint)local_24ec;
  local_24fc = (undefined1 *)&uStack_2538;
  ExceptionList = &local_24f8;
  local_24f0 = 0;
  local_8 = uStack_2538;
  FUN_1002be90();
  local_8d0 = L2ParamStack::Top(param_2);
  local_8b8 = L2ParamStack::Top(param_2);
  local_8c4 = L2ParamStack::Top(param_2);
  pvVar1 = L2ParamStack::Top(param_2);
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
    if (*(int *)(param_1 + 0x5064) != 0) {
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


// ==== 1016caa0 FUN_1016caa0 dispatcher=100d1790 callers=DATA@10288094
// strings: 102483b8=OlympiadObserverState | 10284694=SkillID_%d | 10287634=SkillLevel_%d | 10287618=RemainTime_%d | 10282ddc=Name_%d | 1027491c=IconName_%d | 102748e0=Description_%d | 

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


// ==== 1016cf50 FUN_1016cf50 dispatcher=100d1790 callers=DATA@102880a4
// strings: 10284694=SkillID_%d | 10287634=SkillLevel_%d | 10287618=RemainTime_%d | 10282ddc=Name_%d | 1027491c=IconName_%d | 102748e0=Description_%d | 

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


// ==== 1016d310 FUN_1016d310 dispatcher=100d1790 callers=DATA@1028809c
// strings: 10284694=SkillID_%d | 10287634=SkillLevel_%d | 10287618=RemainTime_%d | 10282ddc=Name_%d | 1027491c=IconName_%d | 102748e0=Description_%d | 

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


// ==== 1016d860 FUN_1016d860 dispatcher=100d1790 callers=DATA@10288278
// strings: 102418a0=Type | 102461cc=ClassID | 102461c0=Level | 10246348=Name | 10246314=IconName | 10246284=Description | 10287934=EnchantName | 10245e1c=Lock | 10276720=%s%s %s | 10274014=Command | 

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


// ==== 1016dea0 FUN_1016dea0 dispatcher=100d1790 callers=DATA@1028828c
// strings: 102874d0=QuestID | 102461c0=Level | 102874bc=Completed | 

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

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
  local_8 = _DAT_10249830;
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
      FUN_10071050(_DAT_10249830,iVar6);
      uVar5 = FUN_101c19e0();
      uVar4 = uVar4 | uVar5;
    }
  }
  uVar3 = param_2;
  for (uVar4 = 0; uVar2 = param_1, local_3c = uVar4, (int)uVar4 < 0x1e; uVar4 = uVar4 + 1) {
    local_8 = _DAT_10249830;
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


// ==== 1016e410 FUN_1016e410 dispatcher=100d1790 callers=execRequestLoadAllItem@10104dc0
// strings: 10287ab4=TabNum | 

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


// ==== 1016e950 FUN_1016e950 dispatcher=100d1790 callers=DATA@102884ec
// strings: 

void __fastcall FUN_1016e950(int param_1)

{
  uint uVar1;
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
  (**(code **)(**(int **)(*(int *)(param_1 + 0x50ac) + 0x208) + 0x13c))();
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


// ==== 1016f110 FUN_1016f110 dispatcher=100d1790 callers=DATA@102880ac
// strings: 

void __fastcall FUN_1016f110(int param_1)

{
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
    (**(code **)(**(int **)(*(int *)(param_1 + 0x50) + 0x60) + 0x4e4))();
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


// ==== 10170860 FUN_10170860 dispatcher=100d1790 callers=execDoAction@100f6920 FUN_10171290@10171290 execRequestOpenPartyMatch@1011e1e0 FUN_1013a320@1013a320 FUN_1013a320@1013a320 FUN_1013a320@1013a320 FUN_1013a320@1013a320 FUN_1013a320@1013a320 FUN_1013a320@1013a320 FUN_1013a320@1013a320 FUN_1013a320@1013a320 FUN_1013a320@1013a320 FUN_1013a320@1013a320 FUN_1013a320@1013a320 FUN_1013a320@1013a320 FUN_1013a320@1013a320 FUN_1013a320@1013a320 FUN_1013a320@1013a320
// strings: 

void __thiscall FUN_10170860(int *param_1,void *param_2,void *param_3,void *param_4)

{
  uchar uVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  ushort *puVar5;
  User *this;
  int iVar6;
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
  switch(param_2) {
  case (void *)0x2:
    iVar6 = FUN_1014ddd0();
    iVar3 = FUN_1014df70();
    iVar4 = FUN_1014dd00();
    if (iVar4 != 0) {
      if (iVar6 == 0) {
        if (iVar3 != 0) {
          iVar6 = *(int *)(iVar4 + 0x204);
          FUN_1014ca10(*(undefined4 *)(iVar3 + 0x60),*(undefined4 *)(iVar6 + 0x1bc),
                       *(undefined4 *)(iVar6 + 0x1c0),*(undefined4 *)(iVar6 + 0x1c4),param_3,param_4
                      );
        }
      }
      else {
        iVar3 = *(int *)(iVar4 + 0x204);
        FUN_1014ca10(*(undefined4 *)(iVar6 + 0x18),*(undefined4 *)(iVar3 + 0x1bc),
                     *(undefined4 *)(iVar3 + 0x1c0),*(undefined4 *)(iVar3 + 0x1c4),param_3,param_4);
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
    if (((0 < (int)param_2) && ((int)param_2 < *(int *)(GL2GameData_exref + 0x3d30))) &&
       (iVar6 = *(int *)(*(int *)(*(int *)(GL2GameData_exref + 0x3d2c) + (int)param_2 * 4) + 8),
       0 < iVar6)) {
      FUN_10144110(iVar6);
    }
    break;
  default:
    iVar6 = (**(code **)(*param_1 + 0x590))();
    if (iVar6 != 0) {
      param_3 = (void *)(**(code **)(*param_1 + 0x590))();
    }
    uVar1 = UInput::KeyDown(*(UInput **)(**(int **)(*(int *)(param_1[0x14] + 0x54) + 0x38) + 0x78),
                            0x10);
    if (uVar1 != '\0') {
      bVar2 = UInput::KeyDown(*(UInput **)(**(int **)(*(int *)(param_1[0x14] + 0x54) + 0x38) + 0x78)
                              ,0x10);
      param_4 = (void *)(uint)bVar2;
    }
    L2ParamStack::L2ParamStack(local_f4,10);
    local_4 = 10;
    L2ParamStack::PushBack(local_f4,param_2);
    L2ParamStack::PushBack(local_f4,param_3);
    L2ParamStack::PushBack(local_f4,param_4);
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
      iVar3 = param_1[0x14];
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
    if (*(FL2ReplayManager **)(param_1[0x14] + 0x198) != (FL2ReplayManager *)0x0) {
      FL2ReplayManager::OnSaveStartStop(*(FL2ReplayManager **)(param_1[0x14] + 0x198));
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
      if (param_2 == (void *)0x3a) {
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


// ==== 10172350 FUN_10172350 dispatcher=100d1790 callers=FUN_101382a0@101382a0 FUN_101734e0@101734e0 FUN_10173896@10173896
// strings: 10288bdc=UseShortcutItem | 10288bd0=Num= | 10288bb4=TargetCancel | 10288b94=FocusChatWindow | 10288b64=TabShowInventoryWindow | 10288b3c=ShowInventoryWindow | 10288b1c=ShowMainWindow | 10288b10=Tab= | 10288b00=STATUS | 10288af4=SKILL | 1024d308=ACTION | 10288ae8=QUEST | 10288ad8=PLEDGE | 10288aac=ShowSystemMenuWindow | 10288a8c=ShowTestWindow | 10288a70=QuestTreeWnd | 10288a50=ShowBoardWindow | 10288a34=HideAllWindow | 10288a14=SetGamingState | 102485a4=GamingState | 102889f8=ShowGMWindow | 102889cc=ShowGMPetitionWindow | 102889a4=RequestOpenMinimap | 10288988=ShowPartyBuff | 1028896c=ApplyMinFrame | 1023da98=ISKEEPMINFRAMERATE | 10270020=Video | 1023da98=ISKEEPMINFRAMERATE | 10270020=Video | 1023da98=ISKEEPMINFRAMERATE | 10270020=Video | 10288944=ShowMessengerWindow | 1028891c=ShowMacroListWindow | 102888fc=SetShortcutPage | 10288bd0=Num= | 102888c4=EventMatchToggleTargetName | 102888a4=EulaWndOKButton | 10288878=ChinaWarnMsgOKButton | 1028884c=ServerSelectOKButton | 1028882c=ShowShortcutWnd | 10288808=ShowOptionWindow | 102887f0=ShowWindow | 102871c0=MsgType | 102871b4=MsgNo | 1028719c=WindowType | 10287188=FontSize | 10287174=FontType | 10287160=MsgColor | 10287148=ShadowType | 10287128=BackgroundType | 10287114=LifeTime | 102870f8=AnimationType | 102887e0=hahaha | 102887c8=Perspective | 102887b8=SPEED= | 102887a0=CameraSpeed | 102887b8=SPEED= | 10288770=CAMERAVIEWHEIGHTADJUST | 102887b8=SPEED= | 1028875c=nParam1= | 10288748=nParam2= | 10274014=Command | 10288738=Param1 | 10288728=Param2 | 

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __fastcall FUN_10172350(UL2ConsoleWnd *param_1)

{
  float fVar1;
  bool bVar2;
  undefined4 uVar3;
  int iVar4;
  FString *pFVar5;
  L2ConsoleState LVar6;
  int *piVar7;
  code *pcVar8;
  UClass *pUVar9;
  int iVar10;
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
  iVar4 = FString::operator_int((FString *)&stack0x00000004);
  if (iVar4 == 0) {
LAB_101723c3:
    local_15 = '\0';
  }
  else {
    pFVar5 = (FString *)FUN_1014ad10();
    local_8 = CONCAT31(local_8._1_3_,2);
    bVar2 = true;
    local_28[1] = 1;
    iVar4 = FString::operator!=((FString *)&stack0x00000004,pFVar5);
    local_15 = '\x01';
    if (iVar4 == 0) goto LAB_101723c3;
  }
  local_8 = 1;
  if (bVar2) {
    local_28[1] = 0;
    FString::~FString(local_74);
  }
  if (local_15 != '\0') goto LAB_10172816;
  local_1c = FString::operator*((FString *)&stack0x00000010);
  iVar4 = ParseCommand(&local_1c,(ushort *)L"UseShortcutItem");
  if (iVar4 != 0) {
    FUN_101add10();
    local_28[0] = -1;
    Parse(local_1c,(ushort *)L"Num=",local_28);
    FUN_10045740();
    FUN_10171680();
    goto LAB_10172816;
  }
  iVar4 = ParseCommand(&local_1c,(ushort *)L"TargetCancel");
  if (iVar4 != 0) {
    iVar4 = *(int *)(**(int **)(*(int *)(*(int *)(param_1 + 0x50) + 0x54) + 0x38) + 0x3c);
    iVar10 = *(int *)(iVar4 + 0x3bc);
    if (*(int *)(iVar10 + 0x62c) == 6) {
      *(undefined4 *)(iVar10 + 0x62c) = 0;
    }
    else if ((*(byte *)(iVar4 + 0xa90) & 1) == 0) {
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
  iVar4 = ParseCommand(&local_1c,(ushort *)L"FocusChatWindow");
  if (iVar4 != 0) {
    if ((*(int *)GIsEnterChatting_exref == 0) ||
       (((DAT_1036c674 != 0 &&
         (iVar4 = (**(code **)(**(int **)(DAT_1036c674 + 4) + 0x88))(), iVar4 != 0)) &&
        (iVar4 = (**(code **)(**(int **)(DAT_1036c674 + 4) + 0xfc))(), iVar4 != 0))))
    goto LAB_10172816;
    FString::FString(local_50,(ushort *)&DAT_1022f9f8);
    local_8._0_1_ = 4;
    goto LAB_10172cee;
  }
  iVar4 = ParseCommand(&local_1c,(ushort *)L"TabShowInventoryWindow");
  if (iVar4 == 0) {
    iVar4 = ParseCommand(&local_1c,(ushort *)L"ShowInventoryWindow");
    if (iVar4 == 0) {
      iVar4 = ParseCommand(&local_1c,(ushort *)L"ShowMainWindow");
      if (iVar4 != 0) {
        FString::FString(local_50);
        local_8._0_1_ = 5;
        Parse(local_1c,(ushort *)L"Tab=",local_50);
        pFVar5 = (FString *)FString::Caps(local_50);
        local_8._0_1_ = 6;
        FString::operator=(local_50,pFVar5);
        local_8._0_1_ = 5;
        FString::~FString(local_74);
        iVar4 = FString::operator==(local_50,(ushort *)L"STATUS");
        if (iVar4 == 0) {
          iVar4 = FString::operator==(local_50,(ushort *)L"SKILL");
          if (iVar4 == 0) {
            iVar4 = FString::operator==(local_50,(ushort *)L"ACTION");
            if (iVar4 == 0) {
              iVar4 = FString::operator==(local_50,(ushort *)L"QUEST");
              if (iVar4 == 0) {
                iVar4 = FString::operator==(local_50,(ushort *)L"PLEDGE");
                if (iVar4 == 0) {
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
      iVar4 = ParseCommand(&local_1c,(ushort *)L"ShowSystemMenuWindow");
      if (iVar4 != 0) {
        FUN_1013d9e0();
        goto LAB_10172816;
      }
      iVar4 = ParseCommand(&local_1c,(ushort *)L"ShowTestWindow");
      if (iVar4 == 0) {
        iVar4 = ParseCommand(&local_1c,(ushort *)L"ShowBoardWindow");
        if (iVar4 != 0) {
          FUN_1013dc20();
          goto LAB_10172816;
        }
        iVar4 = ParseCommand(&local_1c,(ushort *)L"HideAllWindow");
        if (iVar4 != 0) {
          iVar4 = FUN_1005ab70();
          if (iVar4 == 0) {
            FUN_1005aa50();
          }
          else {
            FUN_1005aae0();
          }
          goto LAB_10172816;
        }
        iVar4 = ParseCommand(&local_1c,(ushort *)L"SetGamingState");
        if (iVar4 != 0) {
          FString::FString(local_50,(ushort *)L"GamingState");
          local_8._0_1_ = 8;
          (**(code **)(*(int *)param_1 + 0x780))();
          local_8 = CONCAT31(local_8._1_3_,1);
          FString::~FString(local_50);
          goto LAB_10172816;
        }
        iVar4 = ParseCommand(&local_1c,(ushort *)L"ShowGMWindow");
        if (iVar4 != 0) {
          iVar4 = FUN_1014dd00();
          if ((((iVar4 != 0) && (0 < *(int *)(iVar4 + 0x250))) && (*(int *)(iVar4 + 0x250) < 7)) ||
             (*(int *)GIsOnlyL2Console_exref != 0)) {
            FUN_1013de80();
          }
          goto LAB_10172816;
        }
        iVar4 = ParseCommand(&local_1c,(ushort *)L"ShowGMPetitionWindow");
        if (iVar4 != 0) {
          iVar4 = FUN_1014dd00();
          if (((iVar4 == 0) || (iVar4 = FUN_1014dd00(), *(int *)(iVar4 + 0x250) < 1)) ||
             (iVar4 = FUN_1014dd00(), 6 < *(int *)(iVar4 + 0x250))) goto LAB_10172816;
          (**(code **)(**(int **)(*(int *)(param_1 + 0x50ac) + 0x214) + 0x138))();
          iVar4 = **(int **)(*(int *)(param_1 + 0x50ac) + 0x214);
          goto LAB_1017280a;
        }
        iVar4 = ParseCommand(&local_1c,(ushort *)L"RequestOpenMinimap");
        if (iVar4 != 0) {
          L2ParamStack::L2ParamStack(local_78,10);
          local_8._0_1_ = 9;
          FUN_10143b30();
          local_8 = CONCAT31(local_8._1_3_,1);
          L2ParamStack::~L2ParamStack(local_78);
          goto LAB_10172816;
        }
        iVar4 = ParseCommand(&local_1c,(ushort *)L"ShowPartyBuff");
        if (iVar4 != 0) {
          FUN_10165d00();
          goto LAB_10172816;
        }
        iVar4 = ParseCommand(&local_1c,(ushort *)L"ApplyMinFrame");
        if (iVar4 != 0) {
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
        iVar4 = ParseCommand(&local_1c,(ushort *)L"ShowMessengerWindow");
        if (iVar4 != 0) {
          if (DAT_10350f6c != 0) {
            FUN_1013c9e0();
          }
          goto LAB_10172816;
        }
        iVar4 = ParseCommand(&local_1c,(ushort *)L"ShowMacroListWindow");
        if (iVar4 != 0) {
          FUN_1013ddd0();
          goto LAB_10172816;
        }
        iVar4 = ParseCommand(&local_1c,(ushort *)L"SetShortcutPage");
        if (iVar4 != 0) {
          local_2c = (undefined1 *)0xffffffff;
          Parse(local_1c,(ushort *)L"Num=",(int *)&local_2c);
          FUN_10047070();
          goto LAB_10172816;
        }
        iVar4 = ParseCommand(&local_1c,(ushort *)L"EventMatchToggleTargetName");
        if (iVar4 == 0) {
          iVar4 = ParseCommand(&local_1c,(ushort *)L"EulaWndOKButton");
          if (iVar4 == 0) {
            iVar4 = ParseCommand(&local_1c,(ushort *)L"ChinaWarnMsgOKButton");
            if (iVar4 == 0) {
              iVar4 = ParseCommand(&local_1c,(ushort *)L"ServerSelectOKButton");
              if (iVar4 != 0) {
                iVar4 = (**(code **)(**(int **)(*(int *)(*(int *)(param_1 + 0x50ac) + 0x1d0) + 0x1cc
                                               ) + 0xfc))();
                if (iVar4 != 0) {
                  (**(code **)(**(int **)(*(int *)(*(int *)(param_1 + 0x50ac) + 0x1d0) + 0x1cc) +
                              500))();
                }
                goto LAB_10172816;
              }
              iVar4 = ParseCommand(&local_1c,(ushort *)L"ShowShortcutWnd");
              if (iVar4 == 0) {
                iVar4 = ParseCommand(&local_1c,(ushort *)L"ShowOptionWindow");
                if (iVar4 == 0) {
                  iVar4 = ParseCommand(&local_1c,(ushort *)L"ShowWindow");
                  if (iVar4 == 0) {
                    iVar4 = ParseCommand(&local_1c,(ushort *)L"Perspective");
                    if (iVar4 == 0) {
                      iVar4 = ParseCommand(&local_1c,(ushort *)L"CameraSpeed");
                      if (iVar4 == 0) {
                        iVar4 = ParseCommand(&local_1c,(ushort *)L"CAMERAVIEWHEIGHTADJUST");
                        if (iVar4 == 0) {
                          local_3c[1] = 0xffffffff;
                          local_3c[0] = -1;
                          FString::FString(local_84,local_1c);
                          local_8._0_1_ = 0x20;
                          FString::FString(local_74," ");
                          local_8._0_1_ = 0x21;
                          FString::InStr((FString *)&stack0x00000010,local_74,0);
                          pFVar5 = (FString *)
                                   FString::Left((FString *)&stack0x00000010,(int)local_68);
                          local_8._0_1_ = 0x22;
                          FString::operator=(local_84,pFVar5);
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
                          iVar4 = **(int **)(*(int *)(*(int *)(DAT_103663bc + 0x50) + 0x54) + 0x38);
                          if (*(int *)(iVar4 + 0x3c) != 0) {
                            pUVar9 = ALineagePlayerController::StaticClass();
                            iVar10 = UObject::IsA(*(UObject **)(iVar4 + 0x3c),pUVar9);
                            if (iVar10 != 0) {
                              iVar4 = *(int *)(iVar4 + 0x3c);
                              local_34 = _DAT_10249830;
                              Parse(local_1c,(ushort *)L"SPEED=",&local_34);
                              *(float *)(iVar4 + 0x95c) = *(float *)(iVar4 + 0x95c) + local_34;
                            }
                          }
                        }
                      }
                      else {
                        iVar4 = **(int **)(*(int *)(*(int *)(DAT_103663bc + 0x50) + 0x54) + 0x38);
                        if (*(int *)(iVar4 + 0x3c) != 0) {
                          pUVar9 = ALineagePlayerController::StaticClass();
                          iVar10 = UObject::IsA(*(UObject **)(iVar4 + 0x3c),pUVar9);
                          if (iVar10 != 0) {
                            iVar4 = *(int *)(iVar4 + 0x3c);
                            local_30 = (undefined1 *)0x0;
                            Parse(local_1c,(ushort *)L"SPEED=",(float *)&local_30);
                            *(float *)(iVar4 + 0xa98) = *(float *)(iVar4 + 0xa98) + (float)local_30;
                          }
                        }
                      }
                    }
                    else {
                      iVar4 = **(int **)(*(int *)(*(int *)(DAT_103663bc + 0x50) + 0x54) + 0x38);
                      if (*(int *)(iVar4 + 0x3c) != 0) {
                        pUVar9 = APlayerController::StaticClass();
                        iVar10 = UObject::IsA(*(UObject **)(iVar4 + 0x3c),pUVar9);
                        if (iVar10 != 0) {
                          iVar4 = *(int *)(iVar4 + 0x3c);
                          local_20 = 1.0;
                          Parse(local_1c,(ushort *)L"SPEED=",&local_20);
                          fVar1 = *(float *)(iVar4 + 0x3c8) + local_20;
                          *(float *)(iVar4 + 0x3c8) = fVar1;
                          uVar3 = _DAT_1026d390;
                          if (fVar1 == 0.0) {
                            *(undefined4 *)(iVar4 + 0x3c8) = _DAT_1026d390;
                          }
                          fVar1 = local_20 + *(float *)(iVar4 + 0x5f4);
                          *(float *)(iVar4 + 0x5f4) = fVar1;
                          if (fVar1 == 0.0) {
                            *(undefined4 *)(iVar4 + 0x5f4) = uVar3;
                          }
                          local_34 = local_20 + *(float *)(iVar4 + 0x5f8);
                          *(float *)(iVar4 + 0x5f8) = local_34;
                          if (local_34 == 0.0) {
                            *(undefined4 *)(iVar4 + 0x5f8) = uVar3;
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
                    iVar4 = FUN_10005c30();
                    if (iVar4 != 0) {
                      FUN_10005c30();
                      FUN_100d1790();
                    }
                    FString::FString(local_74,local_1c);
                    local_8._0_1_ = 0x1f;
                    (**(code **)(*(int *)param_1 + 0x778))();
                    piVar7 = (int *)FUN_10010290();
                    local_8._0_1_ = 0x12;
                    FString::~FString(local_74);
                    if (piVar7 != (int *)0x0) {
                      iVar4 = (**(code **)(*piVar7 + 0xfc))();
                      if (iVar4 != 0) {
                        (**(code **)(*piVar7 + 0x13c))();
                        local_8 = CONCAT31(local_8._1_3_,1);
                        FUN_1003fff0();
                        goto LAB_10172816;
                      }
                      (**(code **)(*piVar7 + 0x138))();
                      (**(code **)(*piVar7 + 0x78))();
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
            iVar4 = (**(code **)(**(int **)(*(int *)(param_1 + 0x50ac) + 0x1ec) + 0xfc))();
            if (iVar4 == 0) goto LAB_10172816;
            FUN_1014ed50();
            pcVar8 = *(code **)(**(int **)(*(int *)(param_1 + 0x50ac) + 0x1ec) + 500);
          }
          else {
            iVar4 = (**(code **)(**(int **)(*(int *)(param_1 + 0x50ac) + 0x1e8) + 0xfc))();
            if (iVar4 == 0) goto LAB_10172816;
            FUN_1014ed50();
            pcVar8 = *(code **)(**(int **)(*(int *)(param_1 + 0x50ac) + 0x1e8) + 500);
          }
        }
        else {
          piVar7 = (int *)FUN_1014b6a0();
          pcVar8 = *(code **)(*piVar7 + 0x140);
        }
      }
      else {
        FString::FString(local_50,(ushort *)L"QuestTreeWnd");
        local_8._0_1_ = 7;
        FUN_10005c30();
        piVar7 = (int *)FUN_100d0cb0();
        local_8 = CONCAT31(local_8._1_3_,1);
        FString::~FString(local_50);
        if (piVar7 == (int *)0x0) goto LAB_10172816;
        iVar4 = (**(code **)(*piVar7 + 0xfc))();
        if (iVar4 != 0) {
          pcVar8 = *(code **)(*piVar7 + 0x13c);
          goto LAB_1017280d;
        }
        (**(code **)(*piVar7 + 0x138))();
        iVar4 = *piVar7;
LAB_1017280a:
        pcVar8 = *(code **)(iVar4 + 0x78);
      }
LAB_1017280d:
      (*pcVar8)();
      goto LAB_10172816;
    }
  }
  else {
    LVar6 = UL2ConsoleWnd::GetState(param_1);
    if (LVar6 != 5) goto LAB_10172816;
    if (((DAT_1036c674 != 0) && (*(int *)(DAT_1036c674 + 4) != 0)) &&
       ((iVar4 = FUN_10057a20(), iVar4 != 0 || (iVar4 = FUN_10057aa0(), iVar4 != 0)))) {
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


// ==== 101734e0 FUN_101734e0 dispatcher=100d1790 callers=FUN_10173970@10173970 FUN_10173970@10173970
// strings: 10282158=GAMINGSTATE | 10288c5c=OLYMPIADOBSERVERSTATE | 10288c44=LOGINSTATE | 

undefined4 __thiscall FUN_101734e0(int *param_1,int param_2)

{
  SHORT SVar1;
  FString *pFVar2;
  int iVar3;
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
  if (param_2 == 0x12) {
    return 0;
  }
  if (param_2 == 0x10) {
    return 0;
  }
  if (param_2 == 0x11) {
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
    pFVar2 = (FString *)(**(code **)(*param_1 + 0x784))();
    local_8 = CONCAT31(local_8._1_3_,1);
    uVar4 = 1;
    local_20 = 1;
    uStack_90 = 0x1017357c;
    iVar3 = FString::operator==(pFVar2,(ushort *)L"GAMINGSTATE");
    if (iVar3 == 0) {
      uStack_90 = 0x10173590;
      pFVar2 = (FString *)(**(code **)(*param_1 + 0x784))();
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
      pFVar2 = (FString *)(**(code **)(*param_1 + 0x784))();
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
          (**(code **)(**(int **)(*(int *)(param_1[0x142b] + 0x1dc) + 0x1e0) + 0x78))();
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
  if ((((iVar3 != 0) && (param_2 == 9)) && (iVar6 == 0x10)) && (local_1c == 0x11)) {
    (**(code **)(**(int **)(param_1[0x142b] + 0x1cc) + 0x138))();
    (**(code **)(**(int **)(param_1[0x142b] + 0x1cc) + 0x78))();
  }
  uStack_90 = 0x101737f7;
  FUN_1014ad10();
  local_8._0_1_ = 5;
  local_2c = (undefined1 *)&uStack_94;
  iStack_9c = 0x1017380d;
  FString::FString((FString *)&uStack_94,local_3c);
  iStack_a0 = param_2;
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
  iStack_a0 = param_2;
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


// ==== 10181970 FUN_10181970 dispatcher=100d1790 callers=DATA@1028c948
// strings: 1028c514=..\L2text\help_OTP.html | 1027d230=FilePath | 

undefined4 FUN_10181970(void)

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
  
  puStack_c = &LAB_10213eea;
  local_10 = ExceptionList;
  uStack_50 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_50;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_1003f970();
  local_8._0_1_ = 1;
  FString::FString(local_40,(ushort *)L"..\\L2text\\help_OTP.html");
  local_8._0_1_ = 2;
  FString::FString(local_34,(ushort *)L"FilePath");
  local_8._0_1_ = 3;
  FUN_10040230(local_34,local_40);
  local_8._0_1_ = 2;
  FString::~FString(local_34);
  local_8._0_1_ = 1;
  FString::~FString(local_40);
  puVar2 = local_28;
  uVar1 = 0x4ba;
  FUN_10005c30(0x4ba,puVar2);
  FUN_100d1790(uVar1,puVar2);
  local_8 = (uint)local_8._1_3_ << 8;
  FUN_1003fff0();
  ExceptionList = local_10;
  return 1;
}


// ==== 10187b50 FUN_10187b50 dispatcher=100d1790 callers=DATA@1028eb8c
// strings: 

void FUN_10187b50(void)

{
  undefined4 uVar1;
  FString *pFVar2;
  uint uStack_38;
  FString local_28 [20];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_10214889;
  local_10 = ExceptionList;
  uStack_38 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_38;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_1005fe50();
  FString::FString(local_28,(ushort *)&DAT_1022f9f8);
  local_8._0_1_ = 1;
  pFVar2 = local_28;
  uVar1 = 0x758;
  FUN_10005c30(0x758,pFVar2);
  FUN_100d1790(uVar1,pFVar2);
  local_8 = (uint)local_8._1_3_ << 8;
  FString::~FString(local_28);
  ExceptionList = local_10;
  return;
}


// ==== 101880f0 FUN_101880f0 dispatcher=100d1790 callers=FUN_1018a680@1018a680 FUN_1018a480@1018a480
// strings: 

void __fastcall FUN_101880f0(int param_1)

{
  undefined4 uVar1;
  FString *pFVar2;
  uint uStack_38;
  FString local_28 [20];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_10214972;
  local_10 = ExceptionList;
  uStack_38 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_38;
  ExceptionList = &local_10;
  local_8 = 0;
  if (*(int *)(param_1 + 0x250) == 0) {
    local_14 = (undefined1 *)&uStack_38;
    FString::FString(local_28,(ushort *)&DAT_1022f9f8);
    local_8._0_1_ = 1;
    uVar1 = 0x758;
  }
  else {
    FString::FString(local_28,(ushort *)&DAT_1022f9f8);
    local_8._0_1_ = 2;
    uVar1 = 0x74e;
  }
  pFVar2 = local_28;
  FUN_10005c30(uVar1,pFVar2);
  FUN_100d1790(uVar1,pFVar2);
  local_8 = (uint)local_8._1_3_ << 8;
  FString::~FString(local_28);
  ExceptionList = local_10;
  return;
}


// ==== 101895c0 FUN_101895c0 dispatcher=100d1790 callers=DATA@1028ebe0
// strings: 1028e5b8=GameHour | 1028e5a0=GameMinute | 

undefined4 __thiscall FUN_101895c0(int param_1,int param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  FString *pFVar7;
  ushort *puVar8;
  int iVar9;
  uint uStack_88;
  int local_78;
  int local_74;
  undefined4 local_70;
  undefined4 local_6c;
  int *local_68;
  int *local_64;
  int local_60;
  undefined4 local_5c;
  FString local_58 [12];
  FString local_4c [20];
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int *local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_10214d04;
  local_10 = ExceptionList;
  uStack_88 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_88;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_10002f40(*(undefined4 *)(param_1 + 0x80),*(undefined4 *)(param_1 + 0x84));
  uVar3 = FUN_101c19e0();
  uVar4 = FUN_101c19e0(uVar3);
  FUN_10021df0(*(undefined4 *)(param_1 + 0x80),*(undefined4 *)(param_1 + 0x84),uVar4,uVar3);
  piVar1 = (int *)(param_1 + 0x250);
  iVar5 = FUN_10187a60(piVar1);
  if (iVar5 == 0) {
    FUN_10187910(param_2);
  }
  else {
    FUN_10189130(param_2,iVar5);
  }
  if (((*piVar1 == 0) && (FUN_10187d60(param_2), *piVar1 == 0)) &&
     (*(char *)(param_1 + 0x22a) != '\0')) {
    FUN_10187130(param_2);
  }
  (**(code **)(**(int **)(*(int *)(DAT_103663bc + 0x50) + 0x60) + 0xd4))(&local_28);
  iVar5 = 0;
  local_30 = 0;
  local_24 = 0;
  local_68 = local_28;
  local_64 = local_28;
  local_5c = 0;
  local_8._0_1_ = 1;
  for (local_60 = 0; local_60 < local_64[1]; local_60 = local_60 + 1) {
    puVar2 = *(undefined4 **)(*local_64 + 8 + local_60 * 0xc);
    if (((puVar2[1] != -1) || (puVar2[2] != -1)) &&
       ((*(int *)(DAT_103663bc + 0x5110) != 0 && (local_2c = FUN_101ae990(*puVar2), local_2c != 0)))
       ) {
      FUN_10188400(puVar2[1],puVar2[2],&local_18,&local_20,*(undefined4 *)(param_1 + 0x250));
      local_18 = local_18 - *(int *)(param_1 + 0x25c);
      iVar9 = local_20 - *(int *)(param_1 + 0x260);
      local_20 = iVar9;
      if (((iVar5 < 9) && (0xb < local_18)) &&
         ((iVar6 = FUN_101c19e0(), local_18 <= iVar6 + -0xc &&
          ((0xb < iVar9 && (iVar6 = FUN_101c19e0(), iVar9 < iVar6 + -0xc)))))) {
        local_74 = 0;
        local_78 = 0;
        local_70 = 0;
        local_6c = 0;
        FUN_10058770(&local_78);
        (**(code **)(**(int **)(param_1 + 0x274 + iVar5 * 4) + 0x148))
                  ((*(int *)(param_1 + 0x80) - local_78) + local_18,
                   (*(int *)(param_1 + 0x84) - local_74) + iVar9,0);
        (**(code **)(**(int **)(param_1 + 0x274 + iVar5 * 4) + 0x138))();
        pFVar7 = (FString *)FUN_101b5c90(local_58);
        local_8._0_1_ = 2;
        puVar8 = FString::operator*(pFVar7);
        FString::FString(local_4c,puVar8);
        local_8._0_1_ = 3;
        FUN_10004190(local_4c,1,0);
        local_8._0_1_ = 2;
        FString::~FString(local_4c);
        local_8._0_1_ = 1;
        FString::~FString(local_58);
        iVar5 = iVar5 + 1;
        local_30 = iVar5;
      }
    }
    local_24 = local_24 + 1;
  }
  local_8 = (uint)local_8._1_3_ << 8;
  FUN_100d10a0();
  for (; local_34 = iVar5, iVar5 < 8; iVar5 = iVar5 + 1) {
    (**(code **)(**(int **)(param_1 + 0x274 + iVar5 * 4) + 0x13c))();
  }
  if (*(char *)(param_1 + 0x22b) != '\0') {
    FUN_10189240(param_2);
  }
  FUN_10189340(param_2);
  if (*(int *)(param_1 + 0x244) != 0) {
    FUN_10189490(param_2);
  }
  local_1c = FUN_101c19e0();
  iVar5 = FUN_101c19e0();
  if (0x3b < iVar5) {
    iVar5 = iVar5 + -0x3c;
    local_1c = local_1c + 1;
  }
  local_38 = iVar5;
  if (*(int *)(param_1 + 0x294) != iVar5) {
    FUN_1003f970();
    local_8._0_1_ = 4;
    FString::FString(local_58,(ushort *)L"GameHour");
    local_8._0_1_ = 5;
    FUN_10040090(local_58,local_1c);
    local_8._0_1_ = 4;
    FString::~FString(local_58);
    FString::FString(local_58,(ushort *)L"GameMinute");
    local_8._0_1_ = 6;
    FUN_10040090(local_58,iVar5);
    local_8._0_1_ = 4;
    FString::~FString(local_58);
    pFVar7 = local_4c;
    uVar3 = 0x762;
    FUN_10005c30(0x762,pFVar7);
    FUN_100d1790(uVar3,pFVar7);
    *(int *)(param_1 + 0x294) = iVar5;
    local_8 = (uint)local_8._1_3_ << 8;
    FUN_1003fff0();
  }
  FUN_100212e0();
  *(undefined4 *)(param_2 + 0x38) = 0;
  *(undefined4 *)(param_2 + 0x3c) = 0;
  ExceptionList = local_10;
  return 1;
}


// ==== 1018a9f0 FUN_1018a9f0 dispatcher=100d1790 callers=DATA@1028ec48
// strings: 

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_1018a9f0(int *param_1,float param_2)

{
  int *piVar1;
  uint *puVar2;
  uint3 uVar3;
  int iVar4;
  int iVar5;
  float10 fVar6;
  float10 extraout_ST0;
  undefined4 uVar7;
  FString *pFVar8;
  uint uStack_5c;
  FString local_3c [20];
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_10214e21;
  local_10 = ExceptionList;
  uStack_5c = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_5c;
  iVar4 = 0;
  if (0x1f < (int)param_2 - 0xb01000U) {
    return 0;
  }
  local_8._1_3_ = 0;
  uVar3 = local_8._1_3_;
  local_8._0_1_ = 1;
  local_8._1_3_ = 0;
  for (local_1c = 0; local_1c < (int)((int)param_2 - 0xb01000U); local_1c = local_1c + 1) {
    iVar4 = iVar4 + 1;
  }
  ExceptionList = &local_10;
  puVar2 = &uStack_5c;
  if (param_1[0x83] <= iVar4) goto LAB_1018ac7e;
  piVar1 = (int *)(param_1[0x82] + 4 + iVar4 * 0xc);
  iVar4 = FUN_10187a60(piVar1);
  puVar2 = (uint *)local_14;
  uVar3 = local_8._1_3_;
  if (iVar4 == 0) goto LAB_1018ac7e;
  param_1[0x94] = *piVar1;
  param_1[0x99] = param_1[0x97];
  param_1[0x9a] = param_1[0x98];
  for (iVar5 = 0; local_20 = iVar5, iVar5 < param_1[0x7a]; iVar5 = iVar5 + 1) {
    (**(code **)(**(int **)(param_1[0x79] + iVar5 * 4) + 0x13c))();
  }
  FString::FString(local_3c,(ushort *)&DAT_1022f9f8);
  local_8._0_1_ = 2;
  pFVar8 = local_3c;
  uVar7 = 0x74e;
  FUN_10005c30(0x74e,pFVar8);
  FUN_100d1790(uVar7,pFVar8);
  local_8._0_1_ = 1;
  FString::~FString(local_3c);
  FUN_1014b730(local_3c);
  param_2 = (float)FUN_101c19e0();
  FUN_1014b730(local_3c);
  local_18 = FUN_101c19e0();
  iVar5 = FUN_10187e90(param_1[0x94]);
  local_24 = iVar5;
  local_28 = FUN_10187f50(param_1[0x94]);
  if ((iVar5 < 1) || (local_28 < 1)) {
    local_8 = (uint)local_8._1_3_ << 8;
    FUN_100d10a0();
    ExceptionList = local_10;
    return 0;
  }
  FUN_10187c10(&param_2,&local_18,param_1[0x94]);
  if (((((int)param_2 < 0) || (*(int *)(iVar4 + 0x34) < (int)param_2)) || (local_18 < 0)) ||
     (*(int *)(iVar4 + 0x38) < local_18)) {
    param_1[0x97] = 0;
LAB_1018ac6f:
    param_1[0x98] = 0;
  }
  else {
    fVar6 = (float10)_DAT_1022f270;
    if ((float10)(float)param_1[0x22] * fVar6 <= (float10)(int)param_2) {
      param_2 = (float)local_24;
      iVar4 = FUN_101c19e0();
      param_1[0x97] = iVar4;
      fVar6 = extraout_ST0;
    }
    else {
      param_1[0x97] = 0;
    }
    param_2 = (float)local_18;
    if ((float10)local_18 < fVar6 * (float10)(float)param_1[0x23]) goto LAB_1018ac6f;
    param_2 = (float)local_28;
    if ((float10)local_18 <= (float10)local_28 - fVar6 * (float10)(float)param_1[0x23]) {
      iVar4 = FUN_101c19e0();
      param_1[0x98] = iVar4;
    }
    else {
      iVar4 = FUN_101c19e0();
      param_1[0x98] = iVar4;
    }
  }
  (**(code **)(*param_1 + 0x78))();
  puVar2 = (uint *)local_14;
  uVar3 = local_8._1_3_;
LAB_1018ac7e:
  local_8._1_3_ = uVar3;
  local_14 = (undefined1 *)puVar2;
  local_8 = (uint)local_8._1_3_ << 8;
  FUN_100d10a0();
  ExceptionList = local_10;
  return 1;
}


// ==== 101ab8c0 FUN_101ab8c0 dispatcher=100d1790 callers=FUN_10149150@10149150
// strings: 

void __thiscall FUN_101ab8c0(int param_1,int param_2)

{
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
  *(undefined4 *)(param_1 + 0x1ec) = 0;
  *(undefined4 *)(param_1 + 0x1f0) = 0;
  *(undefined4 *)(param_1 + 500) = 0;
  *(undefined4 *)(param_1 + 0x1f8) = 0;
  *(undefined4 *)(param_1 + 0x1fc) = 0;
  *(undefined4 *)(param_1 + 0x20c) = 0;
  *(undefined4 *)(param_1 + 0x22c) = 0;
  *(undefined4 *)(param_1 + 0x21c) = 0;
  FString::operator=((FString *)(param_1 + 0x210),(ushort *)&DAT_1022f9f8);
  *(undefined4 *)(param_1 + 0x234) = 0;
  *(undefined4 *)(param_1 + 0x238) = 0;
  *(undefined1 *)(param_1 + 0x23c) = 0;
  *(undefined1 *)(param_1 + 0x23d) = 0;
  *(undefined4 *)(param_1 + 0x230) = 0;
  *(undefined1 *)(param_1 + 0x23e) = 0;
  FString::FString(local_28,(ushort *)&DAT_1022f9f8);
  if (param_2 == 0) {
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


// ==== 101ab9f0 FUN_101ab9f0 dispatcher=100d1790 callers=FUN_1016a660@1016a660
// strings: 

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_101ab9f0(int param_1,float param_2)

{
  float fVar1;
  uint *puVar2;
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
  fVar3 = (float10)param_2;
  puVar2 = &uStack_38;
  if (*(int *)(param_1 + 0x204) != 0) {
    fVar1 = (float)(fVar3 + (float10)*(float *)(param_1 + 0x208));
    *(float *)(param_1 + 0x208) = fVar1;
    if (_DAT_102967f0 < fVar1) {
      if (_DAT_102967ec < fVar1) {
        if (_DAT_102967e8 < fVar1) {
          if (fVar1 < (float)_DAT_10293570 == (fVar1 == (float)_DAT_10293570)) {
            *(undefined4 *)(param_1 + 0x204) = 0;
            *(undefined4 *)(param_1 + 0x200) = 0;
            *(undefined4 *)(param_1 + 0x208) = 0;
            puVar2 = &uStack_38;
          }
          else {
            uVar4 = FUN_101c19e0();
            *(undefined4 *)(param_1 + 0x200) = uVar4;
            fVar3 = extraout_ST0_00;
            puVar2 = (uint *)local_14;
          }
        }
        else {
          local_14 = (undefined1 *)&uStack_38;
          uVar4 = FUN_101c19e0();
          *(undefined4 *)(param_1 + 0x200) = uVar4;
          fVar3 = extraout_ST0;
          puVar2 = (uint *)local_14;
        }
      }
      else {
        *(undefined4 *)(param_1 + 0x200) = 0;
        puVar2 = &uStack_38;
      }
    }
    else {
      *(undefined4 *)(param_1 + 0x200) = 0xff;
      puVar2 = &uStack_38;
    }
  }
  local_14 = (undefined1 *)puVar2;
  if (*(int *)(param_1 + 0x234) != 0) {
    *(float *)(param_1 + 0x238) = (float)((float10)*(float *)(param_1 + 0x238) + fVar3);
  }
  if ((0.0 < *(float *)(param_1 + 0x22c)) &&
     (fVar1 = (float)((float10)*(float *)(param_1 + 0x22c) - fVar3),
     *(float *)(param_1 + 0x22c) = fVar1, fVar1 < 0.0)) {
    *(undefined4 *)(param_1 + 0x22c) = 0;
  }
  if (0.0 < *(float *)(param_1 + 0x20c)) {
    fVar1 = (float)((float10)*(float *)(param_1 + 0x20c) - fVar3);
    *(float *)(param_1 + 0x20c) = fVar1;
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


// ==== 101b1b50 FUN_101b1b50 dispatcher=100d1790 callers=FUN_10144dd0@10144dd0
// strings: 

void __thiscall FUN_101b1b50(int param_1,undefined4 *param_2)

{
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
  puVar2 = (undefined4 *)(param_1 + 0x34);
  for (iVar1 = 0xc5; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = *param_2;
    param_2 = param_2 + 1;
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


// ==== 101b45f0 FUN_101b45f0 dispatcher=100d1790 callers=FUN_101b4df0@101b4df0 FUN_101b4df0@101b4df0
// strings: 10274014=Command | 

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_101b45f0(int param_1,int param_2)

{
  byte bVar1;
  void *pvVar2;
  APawn *pAVar3;
  int iVar4;
  int iVar5;
  int iVar6;
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
  if (*(int *)(param_1 + 0x9a8) <= param_2) {
    return 0xffffffff;
  }
  iVar5 = param_2 * 0x70 + param_1;
  iVar6 = *(int *)(iVar5 + 0x3c);
  local_2c = param_1;
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
  local_24 = param_1 + 0x580;
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
    if (((iVar5 == 0x20000000) && (param_2 + 1 < *(int *)(local_2c + 0x9a8))) &&
       ((*(int *)(local_28 + 0xac) == 3 &&
        (iVar5 = FUN_101358a0(local_28 + 0xd8), iVar5 == 0x20000000)))) {
      iVar5 = appStrlen((ushort *)(iVar6 + 0x68));
      *(float *)(iVar6 + 0x58) = (float)iVar5 / (float)_DAT_10232588;
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


// ==== 101b7cd0 FUN_101b7cd0 dispatcher=100d1790 callers=FUN_101b88a0@101b88a0 FUN_101640d0@101640d0
// strings: 1022fd1c=Index | 1029a3ec=Param%d | 

void __thiscall
FUN_101b7cd0(int param_1,L2ParamStack *param_2,int param_3,ushort *param_4,int param_5)

{
  int *piVar1;
  ushort uVar2;
  ushort uVar3;
  L2ParamStack *this;
  void *pvVar4;
  int iVar5;
  void *pvVar6;
  ushort *puVar7;
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
  local_a3c = param_2;
  local_a38 = param_4;
  iVar9 = 0;
  local_a00 = 0;
  local_a14 = param_1;
  local_8 = uStack_c38;
  pvVar4 = L2ParamStack::Top(param_2);
  local_808 = 0;
  local_a20 = pvVar4;
  _memset(local_806,0,0x7fe);
  local_a10 = 0;
  local_a1c = -1;
  local_a24 = *(int *)(param_1 + 8);
  if ((param_5 != 0) && (pvVar4 == (void *)0x0)) {
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
    if (param_5 == 0) {
      if (param_3 != 0) goto LAB_101b81cf;
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
        param_1 = local_a14;
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
        param_1 = local_a14;
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
      if (param_3 != 0) {
LAB_101b81cf:
        if (local_a38 != (ushort *)0x0) {
          appStrcpy(local_a38,&local_808);
        }
      }
      local_a00._0_1_ = 1;
      FUN_101b6de0();
      param_1 = local_a14;
    }
  }
  for (iVar9 = 0; local_a40 = iVar9, iVar9 < local_a24; iVar9 = iVar9 + 1) {
    FUN_101b7430();
  }
  for (local_a28 = 0; local_a28 < *(int *)(param_1 + 8); local_a28 = local_a28 + 1) {
  }
  FArray::Empty((FArray *)(param_1 + 4),8,0);
  local_a00 = (uint)local_a00._1_3_ << 8;
  FUN_1003fff0();
  local_a00 = 0xffffffff;
LAB_101b7d89:
  ExceptionList = local_a08;
  __security_check_cookie(local_8 ^ (uint)local_9fc);
  return;
}


// ==== 101b8ab0 FUN_101b8ab0 dispatcher=100d1790 callers=FUN_1004b310@1004b310 FUN_100519c0@100519c0 FUN_1004a630@1004a630 FUN_10005430@10005430 FUN_1002eb00@1002eb00 FUN_100326c0@100326c0 FUN_1005da50@1005da50 FUN_100afdf0@100afdf0 FUN_1017a570@1017a570 FUN_1018b5d0@1018b5d0
// strings: 1029a5a8=SourceType | 1029a59c=Text | 1029a584=TooltipType | 10246284=Description | 1029a584=TooltipType | 1029a59c=Text | 

undefined4 __thiscall FUN_101b8ab0(int *param_1,FString *param_2,int param_3,int param_4)

{
  int iVar1;
  ushort *puVar2;
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
  if (param_1[6] != iVar1) {
    FUN_10054cc0();
  }
  iVar1 = FUN_100541c0();
  if (iVar1 != 0) {
    ExceptionList = local_10;
    return 1;
  }
  if (param_3 != 0) {
    puVar2 = FString::operator*(param_2);
    if (puVar2 != (ushort *)0x0) {
      iVar1 = FString::Len(param_2);
      if (0 < iVar1) {
        FUN_1003f970();
        local_8._0_1_ = 1;
        FString::FString(local_34,(ushort *)L"SourceType");
        local_8._0_1_ = 2;
        FUN_10040090(local_34,0);
        local_8._0_1_ = 1;
        FString::~FString(local_34);
        if (param_4 == 0) {
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
        puVar2 = FString::operator*(param_2);
        FString::FString(local_34,puVar2);
        local_8._0_1_ = 7;
        FString::FString(local_40,(ushort *)L"Text");
        local_8._0_1_ = 8;
        FUN_10040230(local_40,local_34);
        local_8._0_1_ = 7;
        FString::~FString(local_40);
        local_8._0_1_ = 1;
        FString::~FString(local_34);
        *param_1 = 0;
        puVar4 = local_28;
        uVar3 = 0xb68;
        FUN_10005c30(0xb68,puVar4);
        FUN_100d1790(uVar3,puVar4);
        if (*param_1 != 0) {
          FUN_10054f20(param_1 + 1);
          FUN_100542c0(param_1[6]);
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


// ==== 101b8d20 FUN_101b8d20 dispatcher=100d1790 callers=FUN_10005430@10005430 FUN_1005da50@1005da50
// strings: 1029a5a8=SourceType | 1029a59c=Text | 1029a584=TooltipType | 

undefined4 __thiscall FUN_101b8d20(int *param_1,int param_2,int param_3)

{
  int iVar1;
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
  if (param_1[6] != iVar1) {
    FUN_10054cc0();
  }
  iVar1 = FUN_100541c0();
  if (iVar1 != 0) {
    ExceptionList = local_10;
    return 1;
  }
  if ((param_3 != 0) && (0 < param_2)) {
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
    FUN_10040090(local_40,param_2);
    local_8._0_1_ = 1;
    FString::~FString(local_40);
    *param_1 = 0;
    puVar3 = local_28;
    uVar2 = 0xb68;
    FUN_10005c30(0xb68,puVar3);
    FUN_100d1790(uVar2,puVar3);
    if (*param_1 != 0) {
      FUN_10054f20(param_1 + 1);
      FUN_100542c0(param_1[6]);
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


// ==== 101b8f10 FUN_101b8f10 dispatcher=100d1790 callers=FUN_1004b310@1004b310 FUN_1002fb30@1002fb30 FUN_10047f70@10047f70 FUN_1004e9d0@1004e9d0 FUN_10176510@10176510 FUN_10176510@10176510 FUN_10185620@10185620
// strings: 1029a5a8=SourceType | 1029a584=TooltipType | 

undefined4 __thiscall FUN_101b8f10(int *param_1,int param_2,undefined4 param_3,int param_4)

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
  
  puStack_c = &LAB_1021a3ea;
  local_10 = ExceptionList;
  uStack_44 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_44;
  ExceptionList = &local_10;
  local_8 = 0;
  iVar1 = FUN_10054240();
  if (param_1[6] != iVar1) {
    FUN_10054cc0();
  }
  if ((param_4 != 0) && (iVar1 = FUN_10054240(), param_1[6] != iVar1)) {
    FUN_10054cc0();
  }
  iVar1 = FUN_100541c0();
  if (iVar1 != 0) {
    ExceptionList = local_10;
    return 1;
  }
  if ((param_4 != 0) && (iVar1 = FUN_100541c0(), iVar1 != 0)) {
    ExceptionList = local_10;
    return 1;
  }
  if (param_2 != 0) {
    FUN_1003f970();
    local_8._0_1_ = 1;
    FString::FString(local_34,(ushort *)L"SourceType");
    local_8._0_1_ = 2;
    FUN_10040090(local_34,1);
    local_8._0_1_ = 1;
    FString::~FString(local_34);
    FString::FString(local_34,(ushort *)L"TooltipType");
    local_8._0_1_ = 3;
    FUN_10040230(local_34,param_3);
    local_8._0_1_ = 1;
    FString::~FString(local_34);
    FUN_100634e0(param_2,local_28);
    *param_1 = 0;
    puVar3 = local_28;
    uVar2 = 0xb68;
    FUN_10005c30(0xb68,puVar3);
    FUN_100d1790(uVar2,puVar3);
    if (*param_1 != 0) {
      if (param_4 == 0) {
        FUN_10054f20(param_1 + 1);
        iVar1 = param_1[6];
      }
      else {
        FUN_10054f20(param_1 + 1);
        iVar1 = param_1[6];
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


// ==== 101b90f0 FUN_101b90f0 dispatcher=100d1790 callers=FUN_10035b50@10035b50
// strings: 1029a5a8=SourceType | 1029a584=TooltipType | 1029a774=szReserved | 1029a75c=nReserved1 | 1029a744=nReserved2 | 1029a72c=nReserved3 | 1029a718=MaxColumn | 1029a704=szData_%d | 1029a6e8=szReserved_%d | 1029a6cc=nReserved1_%d | 1029a6b0=nReserved2_%d | 1029a694=nReserved3_%d | 

undefined4 __thiscall FUN_101b90f0(int *param_1,int *param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
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
  local_1c = param_1;
  iVar1 = FUN_10054240();
  if (param_1[6] != iVar1) {
    FUN_10054cc0();
  }
  iVar1 = FUN_100541c0();
  if (iVar1 != 0) {
    ExceptionList = local_10;
    return 1;
  }
  if (param_2 != (int *)0x0) {
    FUN_1003f970();
    local_8._0_1_ = 1;
    FString::FString(local_3c,(ushort *)L"SourceType");
    local_8._0_1_ = 2;
    FUN_10040090(local_3c,2);
    local_8._0_1_ = 1;
    FString::~FString(local_3c);
    FString::FString(local_3c,(ushort *)L"TooltipType");
    local_8._0_1_ = 3;
    FUN_10040230(local_3c,param_3);
    local_8._0_1_ = 1;
    FString::~FString(local_3c);
    FString::FString(local_48,(ushort *)(param_2 + 1));
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
    FUN_10040090(local_48,param_2[0x201]);
    local_8._0_1_ = 1;
    FString::~FString(local_48);
    FString::FString(local_48,(ushort *)L"nReserved2");
    local_8._0_1_ = 7;
    FUN_10040090(local_48,param_2[0x202]);
    local_8._0_1_ = 1;
    FString::~FString(local_48);
    FString::FString(local_48,(ushort *)L"nReserved3");
    local_8._0_1_ = 8;
    FUN_10040090(local_48,param_2[0x203]);
    local_8._0_1_ = 1;
    FString::~FString(local_48);
    FString::FString(local_48,(ushort *)L"MaxColumn");
    local_8._0_1_ = 9;
    FUN_10040090(local_48,param_2[0x213]);
    local_8 = CONCAT31(local_8._1_3_,1);
    FString::~FString(local_48);
    for (iVar1 = 0; local_18 = iVar1, iVar1 < param_2[0x213]; iVar1 = iVar1 + 1) {
      iVar3 = iVar1 * 0x1a64;
      FString::FString(local_48,(ushort *)(*param_2 + iVar3));
      local_8._0_1_ = 10;
      uVar2 = FString::Printf((ushort *)local_54,L"szData_%d",iVar1);
      local_8._0_1_ = 0xb;
      FUN_10040230(uVar2,local_48);
      local_8._0_1_ = 10;
      FString::~FString(local_54);
      local_8._0_1_ = 1;
      FString::~FString(local_48);
      FString::FString(local_3c,(ushort *)(*param_2 + 0x1248 + iVar3));
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
      FUN_10040090(uVar2,*(undefined4 *)(*param_2 + 0x1a48 + iVar3));
      local_8._0_1_ = 1;
      FString::~FString(local_6c);
      uVar2 = FString::Printf((ushort *)local_78,L"nReserved2_%d",iVar1);
      local_8._0_1_ = 0xf;
      FUN_10040090(uVar2,*(undefined4 *)(*param_2 + 0x1a4c + iVar3));
      local_8._0_1_ = 1;
      FString::~FString(local_78);
      uVar2 = FString::Printf((ushort *)local_84,L"nReserved3_%d",iVar1);
      local_8._0_1_ = 0x10;
      FUN_10040090(uVar2,*(undefined4 *)(*param_2 + 0x1a50 + iVar3));
      local_8 = CONCAT31(local_8._1_3_,1);
      FString::~FString(local_84);
      param_1 = local_1c;
    }
    *param_1 = 0;
    puVar4 = local_30;
    uVar2 = 0xb68;
    FUN_10005c30(0xb68,puVar4);
    FUN_100d1790(uVar2,puVar4);
    if (*param_1 != 0) {
      FUN_10054f20(param_1 + 1);
      FUN_100542c0(param_1[6]);
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


