// ==== 10714840 FUN_10714840

void __thiscall
FUN_10714840(void *this,undefined4 param_1,undefined4 param_2,uchar *param_3,uint param_4)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_107438e0;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  AMasterServerUplink::eventRefresh(*(AMasterServerUplink **)(*(int *)((int)this + 0x2c) + 0x68));
  thunk_FUN_10714670(this,param_1,param_2,param_3,param_4);
  ExceptionList = local_10;
  return;
}


// ==== 107148a6 Catch@107148a6

void Catch_107148a6(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10756c40);
}


// ==== 107148ba Catch@107148ba

void Catch_107148ba(void)

{
  appUnwindf((ushort *)&DAT_10749e48,L"FServerLANInterface::OnReceivedData");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 10714900 FUN_10714900

void __thiscall FUN_10714900(void *this,int param_1)

{
  FTcpLink *pFVar1;
  undefined *puVar2;
  void *pvStack_c;
  undefined1 *puStack_8;
  void *pvStack_4;
  
  pvStack_4 = (void *)0xffffffff;
  puStack_8 = &LAB_107438fb;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  if (*(int **)((int)this + 0x3bc) == (int *)0x0) {
    puVar2 = &DAT_10749b4c;
    pvStack_4 = (void *)(**(code **)**(undefined4 **)GMalloc_exref)(0xc4);
    pvStack_c = (void *)0x0;
    if (pvStack_4 == (void *)0x0) {
      pvStack_c = (void *)0xffffffff;
      *(undefined4 *)((int)this + 0x3bc) = 0;
    }
    else {
      pFVar1 = thunk_FUN_10712df0(pvStack_4,this);
      pvStack_c = (void *)0xffffffff;
      *(FTcpLink **)((int)this + 0x3bc) = pFVar1;
    }
  }
  else {
    puVar2 = (undefined *)0x0;
    (**(code **)(**(int **)((int)this + 0x3bc) + 0x3c))();
  }
  if ((*(byte *)((int)this + 0x48c) & 2) != 0) {
    thunk_FUN_10712840(*(int **)((int)this + 0x3bc));
    ExceptionList = puVar2;
    return;
  }
  FOutputDevice::Logf((FOutputDevice *)GWarn_exref,*(ushort **)GWarn_exref,
                      L"MasterServerUplink: DoUplink is False, not connecting to Epic master server"
                     );
  ExceptionList = puVar2;
  return;
}


// ==== 10714a40 FUN_10714a40

void __thiscall FUN_10714a40(void *this,int param_1)

{
  byte bVar1;
  FTcpLink *pFVar2;
  ushort *puVar3;
  undefined4 uVar4;
  undefined4 *unaff_retaddr;
  FString local_18 [4];
  void *pvStack_14;
  void *pvStack_c;
  undefined1 *puStack_8;
  void *local_4;
  
  local_4 = (void *)0xffffffff;
  puStack_8 = &LAB_10743924;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FString::FString(local_18);
  local_4 = (void *)0x0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,local_18);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  if (*(int *)((int)this + 0x3bc) == 0) {
    local_4 = (void *)(**(code **)**(undefined4 **)GMalloc_exref)(0xc4,&DAT_10749b4c);
    pvStack_c._0_1_ = 1;
    if (local_4 == (void *)0x0) {
      pFVar2 = (FTcpLink *)0x0;
    }
    else {
      pFVar2 = thunk_FUN_10712df0(local_4,this);
    }
    pvStack_c = (void *)((uint)pvStack_c._1_3_ << 8);
    *(FTcpLink **)((int)this + 0x3bc) = pFVar2;
  }
  puVar3 = FString::operator*((FString *)&stack0xffffffe0);
  uVar4 = thunk_FUN_107128a0(*(void **)((int)this + 0x3bc),puVar3);
  *unaff_retaddr = uVar4;
  pvStack_c = (void *)0xffffffff;
  FString::~FString((FString *)&stack0xffffffe0);
  ExceptionList = pvStack_14;
  return;
}


// ==== 10714b80 FUN_10714b80

void __fastcall FUN_10714b80(void *param_1)

{
  ushort *puVar1;
  int iVar2;
  int iVar3;
  
  thunk_FUN_107136b0((int)param_1);
  thunk_FUN_10714450((int)param_1);
  if (*(int *)((int)param_1 + 0x7c) != 0) {
    iVar3 = 0;
    if (0 < *(int *)((int)param_1 + 0x7c)) {
      iVar2 = 0;
      do {
        puVar1 = FString::operator*((FString *)(*(int *)((int)param_1 + 0x78) + iVar2));
        thunk_FUN_107128a0(param_1,puVar1);
        iVar3 = iVar3 + 1;
        iVar2 = iVar2 + 0xc;
      } while (iVar3 < *(int *)((int)param_1 + 0x7c));
    }
    iVar3 = 0;
    if (0 < *(int *)((int)param_1 + 0x7c)) {
      iVar2 = 0;
      do {
        FString::~FString((FString *)(*(int *)((int)param_1 + 0x78) + iVar2));
        iVar3 = iVar3 + 1;
        iVar2 = iVar2 + 0xc;
      } while (iVar3 < *(int *)((int)param_1 + 0x7c));
    }
    *(undefined4 *)((int)param_1 + 0x7c) = 0;
    *(undefined4 *)((int)param_1 + 0x80) = 0;
    FArray::Realloc((FArray *)((int)param_1 + 0x78),0xc);
  }
  return;
}


// ==== 10714c30 FUN_10714c30

void __fastcall FUN_10714c30(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  FString *pFVar3;
  ushort *puVar4;
  FArchive *pFVar5;
  ushort *puVar6;
  FOutputDevice *this;
  FOutputDevice *this_00;
  FOutputDevice *this_01;
  int *piVar7;
  FOutputDevice *this_02;
  code *pcVar8;
  int *piVar9;
  FArray *pFVar10;
  undefined4 *puVar11;
  int iVar12;
  FString local_120 [12];
  FString local_114 [12];
  FString local_108 [12];
  FString local_fc [28];
  FString local_e0 [16];
  FString local_d0 [12];
  FString local_c4 [12];
  FString local_b8 [12];
  FString local_ac [12];
  FString local_a0 [12];
  FString local_94 [12];
  undefined1 *local_88;
  void *pvStack_84;
  undefined1 *puStack_80;
  undefined4 local_7c;
  FString local_78 [12];
  int local_6c;
  int local_68;
  int local_60;
  int local_5c;
  int local_54;
  int local_50;
  FOutputDevice *local_48 [2];
  undefined4 local_40;
  int local_3c;
  int local_34;
  undefined4 local_28 [2];
  FString local_20 [12];
  UGameEngine *local_14;
  int local_10;
  undefined4 local_c;
  char local_8;
  undefined1 local_7;
  byte local_6;
  byte local_5;
  
  puStack_80 = &LAB_107439d9;
  pvStack_84 = ExceptionList;
  local_88 = &stack0xfffffed4;
  local_7c = 0;
  pcVar8 = operator<<_exref;
  ExceptionList = &pvStack_84;
switchD_10714c7f_default:
  do {
    iVar1 = (**(code **)(*param_1 + 0x1c))();
    if (iVar1 == 0) {
      ExceptionList = pvStack_84;
      return;
    }
    switch(param_1[0x19]) {
    case 0:
      local_7c._0_1_ = 1;
      FString::FString(local_a0);
      local_7c._0_1_ = 2;
      (*pcVar8)(param_1[0x14],local_a0);
      FString::FString(local_94);
      local_7c._0_1_ = 3;
      FString::FString(local_78);
      local_7c._0_1_ = 4;
      FString::FString(local_c4);
      local_7c._0_1_ = 5;
      pFVar3 = (FString *)GetCDKeyHash();
      local_7c._0_1_ = 6;
      FString::operator=(local_94,pFVar3);
      local_7c._0_1_ = 5;
      FString::~FString(local_fc);
      FString::operator*(local_a0);
      pFVar3 = (FString *)GetCDKeyResponse((ushort *)local_114);
      local_7c._0_1_ = 7;
      FString::operator=(local_78,pFVar3);
      local_7c._0_1_ = 5;
      FString::~FString(local_114);
      FString::operator=(local_c4,(ushort *)L"SERVER");
      local_40 = 0x83e;
      puVar11 = &local_40;
      uVar2 = (*pcVar8)(param_1[0x13],local_94,local_78,local_c4);
      uVar2 = (*pcVar8)(uVar2);
      pFVar5 = (FArchive *)(*pcVar8)(uVar2);
      thunk_FUN_10702770(pFVar5,puVar11);
      if (*(int *)(param_1[0x1a] + 0x47c) == 0) {
        local_28[0] = 0xffffffff;
      }
      else {
        local_28[0] = *(undefined4 *)(param_1[0x1a] + 0x484);
      }
      thunk_FUN_10702770((FArchive *)param_1[0x13],local_28);
      local_7 = *GRunningOS_exref;
      thunk_FUN_10702730((int *)param_1[0x13],&local_7);
      puVar4 = UObject::GetLanguage();
      FString::FString(local_e0,puVar4);
      local_7c._0_1_ = 8;
      (*pcVar8)(param_1[0x13],local_e0);
      (**(code **)(*(int *)param_1[0x13] + 0x54))();
      param_1[0x19] = 1;
      local_7c._0_1_ = 5;
      FString::~FString(local_e0);
      local_7c._0_1_ = 4;
      FString::~FString(local_c4);
      local_7c._0_1_ = 3;
      FString::~FString(local_78);
      local_7c._0_1_ = 2;
      FString::~FString(local_94);
      local_7c = CONCAT31(local_7c._1_3_,1);
      FString::~FString(local_a0);
      local_7c = 0;
      break;
    case 1:
      local_7c._0_1_ = 10;
      FString::FString(local_20);
      local_7c._0_1_ = 0xb;
      (*pcVar8)(param_1[0x14],local_20);
      iVar1 = FString::operator==(local_20,(ushort *)L"APPROVED");
      if (iVar1 == 0) {
        iVar1 = FString::operator==(local_20,(ushort *)L"UPGRADE");
        if (iVar1 == 0) {
          iVar1 = FString::operator==(local_20,(ushort *)L"MSLIST");
          if (iVar1 == 0) {
            iVar1 = FString::operator==(local_20,(ushort *)L"DENIED");
            if (iVar1 == 0) {
              *(int *)(param_1[0x1a] + 0x3c8) = *(int *)(param_1[0x1a] + 0x3c8) + 1;
              UObject::SaveConfig((UObject *)param_1[0x1a],0x4000,(ushort *)0x0);
              param_1[0x24] = 1;
              param_1[0x23] = 1;
            }
            else {
              FOutputDevice::Logf(*(FOutputDevice **)GWarn_exref,
                                  (ushort *)*(FOutputDevice **)GWarn_exref,
                                  L"MasterServerUplink: Master server rejected authentication request."
                                 );
              FOutputDevice::Logf(this,*(ushort **)GWarn_exref,L"Check your CD key.");
              pFVar3 = (FString *)GetCDKeyHash();
              local_7c._0_1_ = 0xe;
              iVar1 = FString::operator==(pFVar3,(ushort *)L"d41d8cd98f00b204e9800998ecf8427e");
              local_7c._0_1_ = 0xb;
              FString::~FString(local_108);
              if (iVar1 == 0) {
                pFVar3 = (FString *)GetCDKeyHash();
                local_7c._0_1_ = 0xf;
                puVar4 = FString::operator*(pFVar3);
                FOutputDevice::Logf(this_01,*(ushort **)GWarn_exref,L"Sent CD key hash: \"%s\"",
                                    puVar4);
                local_7c._0_1_ = 0xb;
                FString::~FString(local_120);
              }
              else {
                FOutputDevice::Logf(this_00,*(ushort **)GWarn_exref,
                                    L"Your CD key appears to be blank.  Double-check it\'s installed in the registry correctly."
                                   );
              }
              param_1[0x24] = 0;
              param_1[0x23] = 1;
            }
          }
          else {
            thunk_FUN_10706770(&local_6c);
            local_7c._0_1_ = 0xc;
            thunk_FUN_1070e660(&local_54);
            local_7c = CONCAT31(local_7c._1_3_,0xd);
            pFVar10 = (FArray *)&local_54;
            pFVar5 = thunk_FUN_10708a30((FArchive *)param_1[0x14],(FArray *)&local_6c);
            thunk_FUN_1070ed10(pFVar5,pFVar10);
            iVar1 = 0;
            while (local_34 = iVar1, iVar1 < 5) {
              if (iVar1 < local_68) {
                FStringNoInit::operator=
                          ((FStringNoInit *)(iVar1 * 0xc + 0x3e0 + param_1[0x1a]),
                           (FString *)(iVar1 * 0xc + local_6c));
              }
              else {
                FStringNoInit::operator=
                          ((FStringNoInit *)(param_1[0x1a] + 0x3e0 + iVar1 * 0xc),
                           (ushort *)&DAT_1074c080);
              }
              if (iVar1 < local_50) {
                *(undefined4 *)(param_1[0x1a] + 0x3cc + iVar1 * 4) =
                     *(undefined4 *)(local_54 + iVar1 * 4);
                iVar1 = iVar1 + 1;
              }
              else {
                *(undefined4 *)(param_1[0x1a] + 0x3cc + iVar1 * 4) = 0;
                iVar1 = iVar1 + 1;
              }
            }
            *(undefined4 *)(param_1[0x1a] + 0x3c8) = 0;
            UObject::SaveConfig((UObject *)param_1[0x1a],0x4000,(ushort *)0x0);
            param_1[0x24] = 1;
            param_1[0x23] = 1;
            local_7c._0_1_ = 0xc;
            thunk_FUN_1070ec50((FArray *)&local_54);
            local_7c._0_1_ = 0xb;
            thunk_FUN_107089c0((FArray *)&local_6c);
          }
        }
        else {
          thunk_FUN_10702770((FArchive *)param_1[0x14],local_48);
          FOutputDevice::Logf(local_48[0],*(ushort **)GWarn_exref,
                              L"MasterServerUplink: Rejected.  Must upgrade to version %d.",
                              local_48[0]);
          param_1[0x24] = 0;
          param_1[0x23] = 1;
        }
      }
      else {
        thunk_FUN_10713490((int)param_1);
        param_1[0x19] = 2;
      }
      local_7c = CONCAT31(local_7c._1_3_,10);
      FString::~FString(local_20);
      local_7c = 0;
      break;
    case 2:
      local_7c = CONCAT31(local_7c._1_3_,0x11);
      thunk_FUN_10702730((int *)param_1[0x14],&local_8);
      if (local_8 == '\0') {
        puVar11 = &local_c;
        pFVar5 = (FArchive *)thunk_FUN_10702730((int *)param_1[0x14],&local_5);
        thunk_FUN_10702770(pFVar5,puVar11);
        FOutputDevice::Logf((FOutputDevice *)GWarn_exref,*(ushort **)GWarn_exref,
                            L"Master server requests heartbeat %d with code %d",(uint)local_5,
                            local_c);
        if (local_5 == 0) {
          piVar7 = (int *)param_1[0x15];
LAB_10715233:
          (**(code **)(*piVar7 + 0x18))(param_1[0x28],param_1[0x29],local_c);
        }
        else {
          if (local_5 == 1) {
            (**(code **)(*(int *)param_1[0x17] + 0x18))(param_1[0x28],param_1[0x29],local_c);
            local_7c = 0;
            break;
          }
          if ((local_5 == 2) && (piVar7 = (int *)param_1[0x18], piVar7 != (int *)0x0))
          goto LAB_10715233;
        }
        local_7c = 0;
        break;
      }
      thunk_FUN_10702770((FArchive *)param_1[0x14],param_1 + 0x25);
      piVar7 = param_1 + 0x2c;
      piVar9 = param_1 + 0x2b;
      pFVar5 = thunk_FUN_10702750((FArchive *)param_1[0x14],param_1 + 0x2a);
      pFVar5 = thunk_FUN_10702750(pFVar5,piVar9);
      thunk_FUN_10702750(pFVar5,piVar7);
      param_1[0x19] = 3;
      thunk_FUN_10714b80(param_1);
      local_7c = 0;
      break;
    case 3:
      local_7c._0_1_ = 0x13;
      thunk_FUN_10702730((int *)param_1[0x14],&local_6);
      switch((uint)local_6) {
      case 0:
        FString::FString(local_d0);
        local_7c._0_1_ = 0x14;
        FString::FString(local_b8);
        local_7c._0_1_ = 0x15;
        (*pcVar8)(param_1[0x14],local_d0);
        (*pcVar8)(param_1[0x14],local_b8);
        puVar4 = FString::operator*(local_b8);
        puVar6 = FString::operator*(local_d0);
        thunk_FUN_107138d0(param_1,puVar6,puVar4);
        local_7c._0_1_ = 0x14;
        FString::~FString(local_b8);
        local_7c = CONCAT31(local_7c._1_3_,0x13);
        FString::~FString(local_d0);
        local_7c = 0;
        goto switchD_10714c7f_default;
      case 1:
        FString::FString(local_ac);
        local_7c._0_1_ = 0x16;
        (*pcVar8)(param_1[0x14],local_ac);
        puVar4 = FString::operator*(local_ac);
        thunk_FUN_10713f10(param_1,puVar4);
        local_7c = CONCAT31(local_7c._1_3_,0x13);
        FString::~FString(local_ac);
        local_7c = 0;
        goto switchD_10714c7f_default;
      case 2:
        (**(code **)(*param_1 + 0x3c))(0);
        param_1[0x23] = 1;
        local_7c = 0;
        goto switchD_10714c7f_default;
      case 3:
        thunk_FUN_10702770((FArchive *)param_1[0x14],&local_10);
        FOutputDevice::Logf((FOutputDevice *)GWarn_exref,*(ushort **)GWarn_exref,
                            L"Master server assigned our MatchID: %d",local_10);
        *(int *)(param_1[0x1a] + 0x484) = local_10;
        iVar1 = *(int *)(*(int *)(param_1[0x1a] + 0xe0) + 0x614);
        if ((iVar1 != 0) && (iVar1 = *(int *)(iVar1 + 0x4f8), iVar1 != 0)) {
          *(int *)(iVar1 + 0x480) = local_10;
        }
        if ((local_10 == 0) && (*(int *)(param_1[0x1a] + 0x47c) != 0)) {
          *(undefined4 *)(*(int *)(param_1[0x1a] + 0x47c) + 0x3c8) = 0;
          *(undefined4 *)(param_1[0x1a] + 0x47c) = 0;
          local_7c = 0;
          goto switchD_10714c7f_default;
        }
        break;
      case 4:
        thunk_FUN_10713510(&local_60);
        local_7c = CONCAT31(local_7c._1_3_,0x17);
        thunk_FUN_107141d0((FArchive *)param_1[0x14],(FArray *)&local_60);
        FOutputDevice::Logf(*(FOutputDevice **)GWarn_exref,(ushort *)*(FOutputDevice **)GWarn_exref,
                            L"Received updated MD5 data from master server.");
        local_14 = (UGameEngine *)
                   thunk_FUN_10713640(*(int *)(*(int *)(param_1[0x1a] + 0xe4) + 0x74));
        if (local_14 != (UGameEngine *)0x0) {
          for (iVar1 = 0; local_3c = iVar1, iVar1 < local_5c; iVar1 = iVar1 + 1) {
            pFVar3 = (FString *)(local_60 + iVar1 * 0x1c);
            iVar12 = *(int *)(pFVar3 + 0x18);
            puVar4 = FString::operator*(pFVar3 + 0xc);
            puVar6 = FString::operator*(pFVar3);
            UGameEngine::AddMD5(local_14,puVar6,puVar4,iVar12);
          }
          UGameEngine::SaveMD5Database(local_14);
          pcVar8 = operator<<_exref;
        }
        local_7c = CONCAT31(local_7c._1_3_,0x13);
        thunk_FUN_10714160((FArray *)&local_60);
        local_7c = 0;
        goto switchD_10714c7f_default;
      default:
        FOutputDevice::Logf(this_02,*(ushort **)GWarn_exref,
                            L"MSUS_ChannelOpen: received unknown command %d",(uint)local_6);
      }
      local_7c = 0;
      break;
    }
  } while( true );
}


// ==== 10714e30 Catch@10714e30

void Catch_10714e30(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + 0x4c) = *(undefined4 *)(unaff_EBP + -0x78);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + 0x4c,&DAT_10756c40);
}


// ==== 10714e44 Catch@10714e44

void Catch_10714e44(void)

{
  appUnwindf((ushort *)&DAT_10749e48,L"MSUS_WaitingChallenge");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 10715123 Catch@10715123

void Catch_10715123(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + 0x34) = *(undefined4 *)(unaff_EBP + -0x5c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + 0x34,&DAT_10756c40);
}


// ==== 10715137 Catch@10715137

void Catch_10715137(void)

{
  appUnwindf((ushort *)&DAT_10749e48,L"MSUS_WaitingApproval");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 10715254 Catch@10715254

void Catch_10715254(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + 0x54) = *(undefined4 *)(unaff_EBP + -0x74);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + 0x54,&DAT_10756c40);
}


// ==== 10715268 Catch@10715268

void Catch_10715268(void)

{
  appUnwindf((ushort *)&DAT_10749e48,L"MSUS_WaitingForUDPResponse");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 107154ba Catch@107154ba

void Catch_107154ba(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + 0x48) = *(undefined4 *)(unaff_EBP + -0x70);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + 0x48,&DAT_10756c40);
}


// ==== 107154ce Catch@107154ce

void Catch_107154ce(void)

{
  appUnwindf((ushort *)&DAT_10749e48,L"MSUS_ChannelOpen");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 107154f3 Catch@107154f3

void Catch_107154f3(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + 0x40) = *(undefined4 *)(unaff_EBP + -0x6c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + 0x40,&DAT_10756c40);
}


// ==== 10715507 Catch@10715507

void Catch_10715507(void)

{
  appUnwindf((ushort *)&DAT_10749e48,L"FMasterServerUplinkLink::OnDataReceived");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 10715780 FUN_10715780

int __thiscall FUN_10715780(void *this,int param_1)

{
  int iVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10743a10;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  iVar1 = FTcpLink::Poll(this,param_1);
  if (*(int **)((int)this + 0x58) != (int *)0x0) {
    (**(code **)(**(int **)((int)this + 0x58) + 0xc))();
  }
  if (*(int **)((int)this + 0x54) != (int *)0x0) {
    (**(code **)(**(int **)((int)this + 0x54) + 0xc))();
  }
  if (*(int *)((int)this + 0x8c) == 0) {
    thunk_FUN_10713cc0((int)this);
    thunk_FUN_10714450((int)this);
    thunk_FUN_10713310((int)this);
  }
  else {
    AMasterServerUplink::eventConnectionFailed
              (*(AMasterServerUplink **)((int)this + 0x68),*(ulong *)((int)this + 0x90));
    *(undefined4 *)((int)this + 0x8c) = 0;
  }
  ExceptionList = local_10;
  return iVar1;
}


// ==== 1071581f Catch@1071581f

void Catch_1071581f(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10756c40);
}


// ==== 10715833 Catch@10715833

void Catch_10715833(void)

{
  appUnwindf((ushort *)&DAT_10749e48,L"FMasterServerUplinkLink::Poll");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 10715890 FUN_10715890

void __fastcall FUN_10715890(AActor *param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10743a20;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  if (*(SOCKET *)(param_1 + 0x3c0) != 0xffffffff) {
    ExceptionList = &local_10;
    closesocket(*(SOCKET *)(param_1 + 0x3c0));
  }
  if (*(SOCKET *)(param_1 + 0x3c8) != 0xffffffff) {
    closesocket(*(SOCKET *)(param_1 + 0x3c8));
  }
  AActor::PostScriptDestroyed(param_1);
  ExceptionList = local_10;
  return;
}


// ==== 107158fc Catch@107158fc

void Catch_107158fc(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10756c40);
}


// ==== 10715910 Catch@10715910

void Catch_10715910(void)

{
  appUnwindf((ushort *)&DAT_10749e48,L"ATcpLink::PostScriptDestroyed");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 10715960 FUN_10715960

/* WARNING: Type propagation algorithm not settling */

void __thiscall FUN_10715960(void *this,ushort *param_1,int *param_2)

{
  byte bVar1;
  bool bVar2;
  u_short uVar3;
  u_short uVar4;
  SOCKET SVar5;
  uint uVar6;
  undefined2 extraout_var_00;
  undefined3 extraout_var;
  FOutputDevice *extraout_ECX;
  FOutputDevice *extraout_ECX_00;
  FOutputDevice *this_00;
  FOutputDevice *this_01;
  FOutputDevice *this_02;
  FOutputDevice *this_03;
  wchar_t *pwVar7;
  sockaddr local_34;
  int local_1c [2];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10743a30;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffc0;
  local_8 = 0;
  local_1c[1] = 0;
  bVar1 = **(byte **)(param_1 + 6);
  ExceptionList = &local_10;
  *(byte **)(param_1 + 6) = *(byte **)(param_1 + 6) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,local_1c + 1);
  local_1c[0] = 0;
  bVar1 = **(byte **)(param_1 + 6);
  *(byte **)(param_1 + 6) = *(byte **)(param_1 + 6) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,local_1c);
  *(int *)(param_1 + 6) = *(int *)(param_1 + 6) + 1;
  this_00 = extraout_ECX;
  if (**(char **)(param_1 + 6) == 'B') {
    *(char **)(param_1 + 6) = *(char **)(param_1 + 6) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
    this_00 = extraout_ECX_00;
  }
  if (DAT_1076a3f8 == 0) {
    pwVar7 = L"BindPort: winsock failed";
  }
  else {
    if (*(int *)((int)this + 0x3c0) == -1) {
      SVar5 = socket(2,1,6);
      *(SOCKET *)((int)this + 0x3c0) = SVar5;
      thunk_FUN_1071b710(SVar5,1);
      if (*(int *)((int)this + 0x3c0) == -1) {
        FOutputDevice::Logf(this_01,param_1,L"BindPort: socket failed");
      }
      else {
        local_34.sa_family = 2;
        uVar6 = thunk_FUN_10703e30(param_1);
        local_34.sa_data._2_2_ = SUB42(uVar6,0);
        local_34.sa_data._4_2_ = SUB42(uVar6 >> 0x10,0);
        local_34.sa_data._0_2_ = htons((u_short)local_1c[1]);
        uVar3 = thunk_FUN_10703930(*(SOCKET *)((int)this + 0x3c0),&local_34,
                                   (-(uint)(local_1c[0] != 0) & 0x13) + 1,1);
        if (CONCAT22(extraout_var_00,uVar3) == 0) {
          FOutputDevice::Logf(this_02,param_1,L"BindPort: bind failed");
        }
        else {
          bVar2 = thunk_FUN_1071b6e0(*(SOCKET *)((int)this + 0x3c0));
          if (CONCAT31(extraout_var,bVar2) != 0) {
            uVar4 = ntohs(local_34.sa_data._0_2_);
            *(uint *)((int)this + 0x3c4) = (uint)uVar4;
            *(undefined1 *)((int)this + 0x3d8) = 1;
            *param_2 = CONCAT22(extraout_var_00,uVar3);
            ExceptionList = local_10;
            return;
          }
          FOutputDevice::Logf(this_03,param_1,L"BindPort: ioctlsocket or fcntl failed");
        }
      }
      closesocket(*(SOCKET *)((int)this + 0x3c0));
      *(undefined4 *)((int)this + 0x3c0) = 0;
      *param_2 = 0;
      ExceptionList = local_10;
      return;
    }
    pwVar7 = L"BindPort: already bound";
  }
  FOutputDevice::Logf(this_00,param_1,pwVar7);
  *param_2 = 0;
  ExceptionList = local_10;
  return;
}


// ==== 10715b5a Catch@10715b5a

void Catch_10715b5a(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x1c) = *(undefined4 *)(unaff_EBP + -0x20);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x1c,&DAT_10756c40);
}


// ==== 10715b6e Catch@10715b6e

void Catch_10715b6e(void)

{
  int iVar1;
  ushort *puVar2;
  ushort *puVar3;
  int iVar4;
  int unaff_EBP;
  
  appUnwindf((ushort *)&DAT_10749e48,L"ATcpLink::execBindPort");
  iVar1 = *(int *)(unaff_EBP + 8);
  iVar4 = *(int *)(iVar1 + 0xc) - *(int *)(*(UObject **)(iVar1 + 4) + 0x54);
  puVar2 = UObject::GetFullName(*(UObject **)(iVar1 + 4),(ushort *)0x0);
  puVar3 = UObject::GetFullName(*(UObject **)(iVar1 + 8),(ushort *)0x0);
  appUnwindf((ushort *)L"(%s @ %s : %04X)",puVar3,puVar2,iVar4);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 10715c50 FUN_10715c50

void __thiscall FUN_10715c50(void *this,int param_1,undefined4 *param_2)

{
  undefined1 *puVar1;
  int iVar2;
  fd_set local_12c;
  timeval local_1c;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10743a40;
  local_10 = ExceptionList;
  local_14 = &stack0xfffffec8;
  local_8 = 0;
  ExceptionList = &local_10;
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  puVar1 = &stack0xfffffec8;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
    puVar1 = local_14;
  }
  local_14 = puVar1;
  local_1c.tv_sec = 0;
  local_1c.tv_usec = 0;
  if (*(char *)((int)this + 0x3d8) == '\0') {
    *param_2 = 0;
    ExceptionList = local_10;
    return;
  }
  if ((*(char *)((int)this + 0x3d8) == '\x02') && (*(int *)((int)this + 0x3c0) != -1)) {
    local_12c.fd_array[0] = *(SOCKET *)((int)this + 0x3c8);
    local_12c.fd_count = 1;
    iVar2 = select(local_12c.fd_array[0] + 1,(fd_set *)0x0,&local_12c,(fd_set *)0x0,&local_1c);
    if ((iVar2 != -1) && (iVar2 != 0)) goto LAB_10715d11;
  }
  local_12c.fd_array[0] = *(SOCKET *)((int)this + 0x3c0);
  if (local_12c.fd_array[0] != 0xffffffff) {
    local_12c.fd_count = 1;
    iVar2 = select(local_12c.fd_array[0] + 1,(fd_set *)0x0,&local_12c,(fd_set *)0x0,&local_1c);
    if ((iVar2 != -1) && (iVar2 != 0)) {
LAB_10715d11:
      *param_2 = 1;
      ExceptionList = local_10;
      return;
    }
  }
  *param_2 = 0;
  ExceptionList = local_10;
  return;
}


// ==== 10715d84 Catch@10715d84

void Catch_10715d84(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x1c) = *(undefined4 *)(unaff_EBP + -0x20);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x1c,&DAT_10756c40);
}


// ==== 10715d98 Catch@10715d98

void Catch_10715d98(void)

{
  int iVar1;
  ushort *puVar2;
  ushort *puVar3;
  int iVar4;
  int unaff_EBP;
  
  appUnwindf((ushort *)&DAT_10749e48,L"ATcpLink::execIsConnected");
  iVar1 = *(int *)(unaff_EBP + 8);
  iVar4 = *(int *)(iVar1 + 0xc) - *(int *)(*(UObject **)(iVar1 + 4) + 0x54);
  puVar2 = UObject::GetFullName(*(UObject **)(iVar1 + 4),(ushort *)0x0);
  puVar3 = UObject::GetFullName(*(UObject **)(iVar1 + 8),(ushort *)0x0);
  appUnwindf((ushort *)L"(%s @ %s : %04X)",puVar3,puVar2,iVar4);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 10715e50 FUN_10715e50

void __thiscall FUN_10715e50(void *this,ushort *param_1,undefined4 *param_2)

{
  int iVar1;
  FOutputDevice *this_00;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10743a50;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  *(int *)(param_1 + 6) = *(int *)(param_1 + 6) + 1;
  if (**(char **)(param_1 + 6) == 'B') {
    *(char **)(param_1 + 6) = *(char **)(param_1 + 6) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  if ((DAT_1076a3f8 == 0) || (*(SOCKET *)((int)this + 0x3c0) == 0xffffffff)) {
    *param_2 = 1;
    ExceptionList = local_10;
    return;
  }
  if (*(char *)((int)this + 0x3d8) != '\a') {
    if (*(char *)((int)this + 0x3d8) != '\x01') {
      *param_2 = 0;
      ExceptionList = local_10;
      return;
    }
    iVar1 = listen(*(SOCKET *)((int)this + 0x3c0),
                   (-(uint)(*(int *)((int)this + 0x3e4) != 0) & 9) + 1);
    if (iVar1 == -1) {
      FOutputDevice::Logf(this_00,param_1,L"Listen: listen failed");
      *param_2 = 0;
      ExceptionList = local_10;
      return;
    }
  }
  *(undefined1 *)((int)this + 0x3d8) = 2;
  TArray<unsigned_char>::Empty((TArray<unsigned_char> *)((int)this + 1000),0);
  *param_2 = 1;
  ExceptionList = local_10;
  return;
}


// ==== 10715f85 Catch@10715f85

void Catch_10715f85(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10756c40);
}


// ==== 10715f99 Catch@10715f99

void Catch_10715f99(void)

{
  int iVar1;
  ushort *puVar2;
  ushort *puVar3;
  int iVar4;
  int unaff_EBP;
  
  appUnwindf((ushort *)&DAT_10749e48,L"ATcpLink::execListen");
  iVar1 = *(int *)(unaff_EBP + 8);
  iVar4 = *(int *)(iVar1 + 0xc) - *(int *)(*(UObject **)(iVar1 + 4) + 0x54);
  puVar2 = UObject::GetFullName(*(UObject **)(iVar1 + 4),(ushort *)0x0);
  puVar3 = UObject::GetFullName(*(UObject **)(iVar1 + 8),(ushort *)0x0);
  appUnwindf((ushort *)L"(%s @ %s : %04X)",puVar3,puVar2,iVar4);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 10716050 FUN_10716050

void __thiscall FUN_10716050(void *this,int param_1,undefined4 *param_2)

{
  byte bVar1;
  int iVar2;
  FOutputDevice *this_00;
  sockaddr local_34;
  u_long local_24;
  u_short local_20;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10743a60;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffc0;
  local_8 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  ExceptionList = &local_10;
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&local_24);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  if ((DAT_1076a3f8 != 0) && (*(int *)((int)this + 0x3c0) != -1)) {
    local_34.sa_family = 2;
    local_34.sa_data._0_2_ = htons(local_20);
    local_34.sa_data._2_4_ = htonl(local_24);
    iVar2 = connect(*(SOCKET *)((int)this + 0x3c0),&local_34,0x10);
    if (iVar2 == -1) {
      iVar2 = WSAGetLastError();
      if (iVar2 != 0x2733) {
        if (*(int *)GLog_exref != 0) {
          iVar2 = WSAGetLastError();
          FOutputDevice::Logf2
                    (this_00,*(EName *)GLog_exref,(ushort *)0x2f8,
                     L"Open: An error occured while attempting to connect: %i",iVar2);
        }
        *param_2 = 0;
        ExceptionList = local_10;
        return;
      }
    }
    *(undefined1 *)((int)this + 0x3d8) = 3;
    TArray<unsigned_char>::Empty((TArray<unsigned_char> *)((int)this + 1000),0);
  }
  *param_2 = 1;
  ExceptionList = local_10;
  return;
}


// ==== 107161a2 Catch@107161a2

void Catch_107161a2(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10756c40);
}


// ==== 107161b6 Catch@107161b6

void Catch_107161b6(void)

{
  int iVar1;
  ushort *puVar2;
  ushort *puVar3;
  int iVar4;
  int unaff_EBP;
  
  appUnwindf((ushort *)&DAT_10749e48,L"ATcpLink::execOpen");
  iVar1 = *(int *)(unaff_EBP + 8);
  iVar4 = *(int *)(iVar1 + 0xc) - *(int *)(*(UObject **)(iVar1 + 4) + 0x54);
  puVar2 = UObject::GetFullName(*(UObject **)(iVar1 + 4),(ushort *)0x0);
  puVar3 = UObject::GetFullName(*(UObject **)(iVar1 + 8),(ushort *)0x0);
  appUnwindf((ushort *)L"(%s @ %s : %04X)",puVar3,puVar2,iVar4);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 10716270 FUN_10716270

void __fastcall FUN_10716270(ATcpLink *param_1)

{
  int iVar1;
  FOutputDevice *this;
  fd_set local_12c;
  timeval local_20;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10743a70;
  local_10 = ExceptionList;
  local_14 = &stack0xfffffec8;
  local_8 = 0;
  local_20.tv_sec = 0;
  local_20.tv_usec = 0;
  local_12c.fd_array[0] = *(SOCKET *)(param_1 + 0x3c0);
  if (local_12c.fd_array[0] != 0xffffffff) {
    local_12c.fd_count = 1;
    ExceptionList = &local_10;
    iVar1 = select(local_12c.fd_array[0] + 1,(fd_set *)0x0,&local_12c,(fd_set *)0x0,&local_20);
    if (iVar1 == -1) {
      if (*(int *)GLog_exref != 0) {
        FOutputDevice::Logf2
                  (this,*(EName *)GLog_exref,(ushort *)0x2f8,
                   L"CheckConnectionAttempt: Error while checking socket status.");
      }
    }
    else if (iVar1 != 0) {
      param_1[0x3d8] = (ATcpLink)0x4;
      ATcpLink::eventOpened(param_1);
      ExceptionList = local_10;
      return;
    }
  }
  ExceptionList = local_10;
  return;
}


// ==== 10716337 Catch@10716337

void Catch_10716337(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x20);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10756c40);
}


// ==== 1071634b Catch@1071634b

void Catch_1071634b(void)

{
  appUnwindf((ushort *)&DAT_10749e48,L"ATcpLink::CheckConnectionAttempt");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 107163b0 FUN_107163b0

void __thiscall FUN_107163b0(void *this,int param_1,undefined4 *param_2)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10743a80;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  if ((DAT_1076a3f8 != 0) && (*(int *)((int)this + 0x3c0) != -1)) {
    if (*(char *)((int)this + 0x3d8) == '\x02') {
      *(char *)((int)this + 0x3d8) = (*(int *)((int)this + 0x3c8) == -1) * '\x02' + '\x05';
    }
    else {
      *(undefined1 *)((int)this + 0x3d8) = 6;
    }
  }
  *param_2 = 1;
  ExceptionList = local_10;
  return;
}


// ==== 1071645a Catch@1071645a

void Catch_1071645a(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10756c40);
}


// ==== 1071646e Catch@1071646e

void Catch_1071646e(void)

{
  int iVar1;
  ushort *puVar2;
  ushort *puVar3;
  int iVar4;
  int unaff_EBP;
  
  appUnwindf((ushort *)&DAT_10749e48,L"ATcpLink::execClose");
  iVar1 = *(int *)(unaff_EBP + 8);
  iVar4 = *(int *)(iVar1 + 0xc) - *(int *)(*(UObject **)(iVar1 + 4) + 0x54);
  puVar2 = UObject::GetFullName(*(UObject **)(iVar1 + 4),(ushort *)0x0);
  puVar3 = UObject::GetFullName(*(UObject **)(iVar1 + 8),(ushort *)0x0);
  appUnwindf((ushort *)L"(%s @ %s : %04X)",puVar3,puVar2,iVar4);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 10716500 FUN_10716500

void __fastcall FUN_10716500(int param_1)

{
  int iVar1;
  FOutputDevice *this;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10743a90;
  local_10 = ExceptionList;
  local_8 = 0;
  if (DAT_1076a3f8 == 0) {
    return;
  }
  if (*(SOCKET *)(param_1 + 0x3c0) == 0xffffffff) {
    return;
  }
  if (*(char *)(param_1 + 0x3d8) == '\x05') {
    ExceptionList = &local_10;
    iVar1 = shutdown(*(SOCKET *)(param_1 + 0x3c8),2);
    if (iVar1 != -1) {
      *(undefined1 *)(param_1 + 0x3d8) = 7;
      ExceptionList = local_10;
      return;
    }
  }
  else {
    if (*(char *)(param_1 + 0x3d8) != '\x06') {
      return;
    }
    ExceptionList = &local_10;
    iVar1 = shutdown(*(SOCKET *)(param_1 + 0x3c0),2);
    if (iVar1 != -1) {
      *(undefined1 *)(param_1 + 0x3d8) = 8;
      ExceptionList = local_10;
      return;
    }
  }
  if (*(int *)GLog_exref != 0) {
    FOutputDevice::Logf2
              (*(FOutputDevice **)GLog_exref,(EName)*(FOutputDevice **)GLog_exref,(ushort *)0x2f8,
               L"Close: Error while attempting to close socket.");
  }
  iVar1 = WSAGetLastError();
  if ((iVar1 == 0x2736) && (*(int *)GLog_exref != 0)) {
    FOutputDevice::Logf2
              (this,*(EName *)GLog_exref,(ushort *)0x2f8,L"Close: Tried to close an invalid socket."
              );
  }
  ExceptionList = local_10;
  return;
}


// ==== 107165f7 Catch@107165f7

void Catch_107165f7(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_10756c40);
}


// ==== 1071660b Catch@1071660b

void Catch_1071660b(void)

{
  appUnwindf((ushort *)&DAT_10749e48,L"ATcpLink::ShutdownConnection");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 10716680 FUN_10716680

/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */

void __thiscall FUN_10716680(void *this,int param_1,int *param_2)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  FOutputDevice *this_00;
  ushort *puVar5;
  SOCKET s;
  int iStack_444;
  FString *pFStack_440;
  char local_430 [1032];
  FString local_28 [16];
  FString *local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  puStack_c = &LAB_10743aa9;
  local_10 = ExceptionList;
  local_14 = &stack0xfffffbc4;
  local_8 = 0;
  pFStack_440 = (FString *)0x107166b6;
  ExceptionList = &local_10;
  FString::FString(local_28);
  local_8 = CONCAT31(local_8._1_3_,1);
  *(undefined4 *)GPropAddr_exref = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  pFStack_440 = local_28;
  iStack_444 = param_1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))();
  if (*(int *)GPropObject_exref != 0) {
    (**(code **)(**(int **)GPropObject_exref + 0x60))(*(undefined4 *)GProperty_exref);
  }
  if (*(int *)GPropAddr_exref == 0) {
    local_18 = local_28;
  }
  else {
    local_18 = *(FString **)GPropAddr_exref;
  }
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  if (((DAT_1076a3f8 == 0) || (*(int *)((int)this + 0x3c0) == -1)) ||
     ((*(char *)((int)this + 0x3d8) != '\x02' && (*(char *)((int)this + 0x3d8) != '\x04')))) {
    *param_2 = 0;
    local_8 = local_8 & 0xffffff00;
    FString::~FString(local_28);
  }
  else {
    appMemset(local_430,0,0x400);
    s = *(SOCKET *)((int)this + 0x3c8);
    if (s == 0xffffffff) {
      s = *(SOCKET *)((int)this + 0x3c0);
    }
    iVar2 = recv(s,local_430,0x3ff,0);
    if (iVar2 == -1) {
      *param_2 = 0;
      iVar2 = WSAGetLastError();
      if ((iVar2 != 0x2733) && (*(int *)GLog_exref != 0)) {
        FOutputDevice::Logf2
                  (this_00,*(EName *)GLog_exref,(ushort *)0x2f8,L"ReadText: Error reading text.");
      }
    }
    else {
      uVar3 = winGetSizeUNICODE(local_430);
      if ((uVar3 & 0x7fffffff) == 0) {
        puVar5 = (ushort *)0x0;
      }
      else {
        winGetSizeUNICODE(local_430);
        local_14 = (undefined1 *)&iStack_444;
        puVar5 = (ushort *)&iStack_444;
      }
      iVar4 = winGetSizeUNICODE(local_430);
      puVar5 = winToUNICODE(puVar5,local_430,iVar4);
      FString::operator=(local_18,puVar5);
      *param_2 = iVar2;
    }
    local_8 = local_8 & 0xffffff00;
    FString::~FString(local_28);
  }
  ExceptionList = local_10;
  return;
}


// ==== 1071689f Catch@1071689f

void Catch_1071689f(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x28);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_10756c40);
}


// ==== 107168b3 Catch@107168b3

void Catch_107168b3(void)

{
  int iVar1;
  ushort *puVar2;
  ushort *puVar3;
  int iVar4;
  int unaff_EBP;
  
  appUnwindf((ushort *)&DAT_10749e48,L"ATcpLink::execReadText");
  iVar1 = *(int *)(unaff_EBP + 8);
  iVar4 = *(int *)(iVar1 + 0xc) - *(int *)(*(UObject **)(iVar1 + 4) + 0x54);
  puVar2 = UObject::GetFullName(*(UObject **)(iVar1 + 4),(ushort *)0x0);
  puVar3 = UObject::GetFullName(*(UObject **)(iVar1 + 8),(ushort *)0x0);
  appUnwindf((ushort *)L"(%s @ %s : %04X)",puVar3,puVar2,iVar4);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 107169a0 FUN_107169a0

void FUN_107169a0(int param_1,int *param_2)

{
  byte bVar1;
  int iVar2;
  char *buf;
  SOCKET s;
  char local_128 [264];
  int local_20;
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10743ac0;
  local_10 = ExceptionList;
  local_14 = &stack0xfffffecc;
  local_8 = 0;
  local_18 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  ExceptionList = &local_10;
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&local_18);
  *(undefined4 *)GPropAddr_exref = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,local_128);
  if (*(int *)GPropObject_exref != 0) {
    (**(code **)(**(int **)GPropObject_exref + 0x60))(*(undefined4 *)GProperty_exref);
  }
  if (*(int *)GPropAddr_exref == 0) {
    buf = local_128;
  }
  else {
    buf = *(char **)GPropAddr_exref;
  }
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  if (((DAT_1076a3f8 == 0) || (s = *(SOCKET *)(local_20 + 0x3c0), s == 0xffffffff)) ||
     ((*(char *)(local_20 + 0x3d8) != '\x02' && (*(char *)(local_20 + 0x3d8) != '\x04')))) {
    *param_2 = 0;
    ExceptionList = local_10;
    return;
  }
  if (*(SOCKET *)(local_20 + 0x3c8) != 0xffffffff) {
    s = *(SOCKET *)(local_20 + 0x3c8);
  }
  iVar2 = recv(s,buf,local_18,0);
  if (iVar2 != -1) {
    *param_2 = iVar2;
    ExceptionList = local_10;
    return;
  }
  *param_2 = 0;
  iVar2 = WSAGetLastError();
  if ((iVar2 != 0x2733) && (*(int *)GLog_exref != 0)) {
    FOutputDevice::Logf2
              (*(FOutputDevice **)GLog_exref,(EName)*(FOutputDevice **)GLog_exref,(ushort *)0x2f8,
               L"ReadBinary: Error reading bytes.");
  }
  ExceptionList = local_10;
  return;
}


// ==== 10716b36 Catch@10716b36

void Catch_10716b36(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x20);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_10756c40);
}


// ==== 10716b4a Catch@10716b4a

void Catch_10716b4a(void)

{
  int iVar1;
  ushort *puVar2;
  ushort *puVar3;
  int iVar4;
  int unaff_EBP;
  
  appUnwindf((ushort *)&DAT_10749e48,L"ATcpLink::execReadBinary");
  iVar1 = *(int *)(unaff_EBP + 8);
  iVar4 = *(int *)(iVar1 + 0xc) - *(int *)(*(UObject **)(iVar1 + 4) + 0x54);
  puVar2 = UObject::GetFullName(*(UObject **)(iVar1 + 4),(ushort *)0x0);
  puVar3 = UObject::GetFullName(*(UObject **)(iVar1 + 8),(ushort *)0x0);
  appUnwindf((ushort *)L"(%s @ %s : %04X)",puVar3,puVar2,iVar4);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 10716c20 FUN_10716c20

TArray<unsigned_char> * __fastcall FUN_10716c20(TArray<unsigned_char> *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10743ad9;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  TArray<unsigned_char>::TArray<unsigned_char>(param_1,0);
  ExceptionList = local_c;
  return param_1;
}


// ==== 10716c70 FUN_10716c70

int __cdecl FUN_10716c70(int param_1)

{
  UClass *pUVar1;
  
  if (param_1 != 0) {
    for (pUVar1 = *(UClass **)(param_1 + 0x24); pUVar1 != (UClass *)0x0;
        pUVar1 = *(UClass **)(pUVar1 + 0x34)) {
      if (pUVar1 == &ATcpLink::PrivateStaticClass) {
        return param_1;
      }
    }
  }
  return 0;
}


// ==== 10716ca0 FUN_10716ca0

AInternetLink * __fastcall FUN_10716ca0(AInternetLink *param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10743b0f;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  AInternetLink::AInternetLink(param_1);
  local_8 = 0;
  *(undefined ***)param_1 = ATcpLink::vftable;
  TArray<unsigned_char>::TArray<unsigned_char>((TArray<unsigned_char> *)(param_1 + 1000),0);
  param_1[0x3d8] = (AInternetLink)0x0;
  ExceptionList = local_10;
  return param_1;
}


// ==== 10716d12 Catch@10716d12

void Catch_10716d12(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x20);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10756c40);
}


// ==== 10716d26 Catch@10716d26

void Catch_10716d26(void)

{
  appUnwindf((ushort *)&DAT_10749e48,L"ATcpLink::ATcpLink");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 10716d70 FUN_10716d70

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_10716d70(ATcpLink *param_1)

{
  ATcpLink *pAVar1;
  int iVar2;
  SOCKET SVar3;
  UClass *pUVar4;
  u_long uVar5;
  FOutputDevice *this;
  FOutputDevice *this_00;
  undefined4 local_17c;
  undefined4 local_178;
  undefined4 local_174;
  undefined4 local_170;
  undefined4 local_16c;
  undefined4 local_168;
  undefined4 local_164;
  fd_set local_140;
  undefined1 *local_3c;
  sockaddr local_34;
  timeval local_24;
  int local_1c [2];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10743b30;
  local_10 = ExceptionList;
  local_14 = &stack0xfffffeb4;
  local_8 = 0;
  local_24.tv_sec = 0;
  local_24.tv_usec = 0;
  local_140.fd_array[0] = *(SOCKET *)(param_1 + 0x3c0);
  local_140.fd_count = 1;
  local_164 = 0x10716dd3;
  ExceptionList = &local_10;
  iVar2 = select(local_140.fd_array[0] + 1,&local_140,(fd_set *)0x0,(fd_set *)0x0,&local_24);
  if (iVar2 == -1) {
    if (*(int *)GLog_exref == 0) {
      ExceptionList = local_10;
      return;
    }
    WSAGetLastError();
  }
  else {
    if (iVar2 == 0) {
      ExceptionList = local_10;
      return;
    }
    local_1c[0] = 0x10;
    SVar3 = accept(*(SOCKET *)(param_1 + 0x3c0),&local_34,local_1c);
    if (SVar3 != 0xffffffff) {
      if ((*(int *)(param_1 + 0x3e4) != 0) || (*(int *)(param_1 + 0x3c8) == -1)) {
        thunk_FUN_1071b6e0(SVar3);
        pUVar4 = *(UClass **)(param_1 + 0x3e4);
        if (pUVar4 == (UClass *)0x0) {
          *(SOCKET *)(param_1 + 0x3c8) = SVar3;
          pAVar1 = param_1 + 0x3dc;
          thunk_FUN_1071b5b0(local_34.sa_data._2_4_,(undefined4 *)pAVar1);
          uVar5 = htonl(*(u_long *)pAVar1);
          *(u_long *)pAVar1 = uVar5;
          *(uint *)(param_1 + 0x3e0) = (uint)(ushort)local_34.sa_data._0_2_;
          ATcpLink::eventAccepted(param_1);
          ExceptionList = local_10;
          return;
        }
        while( true ) {
          if (pUVar4 == (UClass *)0x0) {
            if (*(int *)GLog_exref == 0) {
              ExceptionList = local_10;
              return;
            }
            FOutputDevice::Logf2(this_00,*(EName *)GLog_exref,(ushort *)0x2f8);
            ExceptionList = local_10;
            return;
          }
          if (pUVar4 == &ATcpLink::PrivateStaticClass) break;
          pUVar4 = *(UClass **)(pUVar4 + 0x34);
        }
        local_16c = *(undefined4 *)(param_1 + 0x1c8);
        local_168 = *(undefined4 *)(param_1 + 0x1cc);
        local_164 = *(undefined4 *)(param_1 + 0x1d0);
        local_178 = *(undefined4 *)(param_1 + 0x1bc);
        local_174 = *(undefined4 *)(param_1 + 0x1c0);
        local_170 = *(undefined4 *)(param_1 + 0x1c4);
        local_3c = (undefined1 *)&local_17c;
        local_17c = 0;
        iVar2 = (**(code **)(**(int **)(param_1 + 0xe4) + 0xc0))(*(undefined4 *)(param_1 + 0x3e4));
        iVar2 = thunk_FUN_10716c70(iVar2);
        if (iVar2 != 0) {
          ExceptionList = local_10;
          return;
        }
        if (*(int *)GLog_exref == 0) {
          DAT_000003d8 = 4;
          DAT_000003bc = param_1[0x3bc];
          _DAT_000003c0 = SVar3;
          thunk_FUN_1071b5b0(local_34.sa_data._2_4_,(undefined4 *)&DAT_000003dc);
          _DAT_000003dc = htonl(_DAT_000003dc);
          _DAT_000003e0 = (uint)(ushort)local_34.sa_data._0_2_;
          ATcpLink::eventAccepted((ATcpLink *)0x0);
          ExceptionList = local_10;
          return;
        }
        FOutputDevice::Logf2
                  (*(FOutputDevice **)GLog_exref,(EName)*(FOutputDevice **)GLog_exref,
                   (ushort *)0x2f8,L"Could not spawn AcceptClass!");
        ExceptionList = local_10;
        return;
      }
      if (*(int *)GLog_exref == 0) {
        ExceptionList = local_10;
        return;
      }
      FOutputDevice::Logf2(this,*(EName *)GLog_exref,(ushort *)0x2f8);
      if (*(int *)GLog_exref == 0) {
        ExceptionList = local_10;
        return;
      }
      FOutputDevice::Logf2
                (*(FOutputDevice **)(param_1 + 0x3c8),*(EName *)GLog_exref,(ushort *)0x2f8);
      ExceptionList = local_10;
      return;
    }
    if (*(int *)GLog_exref == 0) {
      ExceptionList = local_10;
      return;
    }
    WSAGetLastError();
  }
  FOutputDevice::Logf2((FOutputDevice *)GLog_exref,*(EName *)GLog_exref,(ushort *)0x2f8);
  ExceptionList = local_10;
  return;
}


// ==== 1071706a Catch@1071706a

void Catch_1071706a(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x34);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10756c40);
}


// ==== 1071707e Catch@1071707e

void Catch_1071707e(void)

{
  appUnwindf((ushort *)&DAT_10749e48,L"ATcpLink::CheckConnectionQueue");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 10717170 FUN_10717170

/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */

void __fastcall FUN_10717170(ATcpLink *param_1)

{
  ATcpLink AVar1;
  int iVar2;
  uint uVar3;
  SOCKET SVar4;
  ushort *puVar5;
  uchar local_524 [1000];
  fd_set local_13c;
  int local_30;
  int local_2c;
  int local_28;
  FString local_20 [4];
  timeval local_1c;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_10743b52;
  local_10 = ExceptionList;
  local_14 = &stack0xfffffad0;
  puVar5 = (ushort *)0x0;
  local_8 = 0;
  if (param_1[0x3d4] == (ATcpLink)0x0) {
    local_1c.tv_sec = 0;
    local_1c.tv_usec = 0;
    local_13c.fd_array[0] = *(SOCKET *)(param_1 + 0x3c8);
    if (local_13c.fd_array[0] == 0xffffffff) {
      local_13c.fd_array[0] = *(SOCKET *)(param_1 + 0x3c0);
    }
    local_13c.fd_count = 1;
    ExceptionList = &local_10;
    local_14 = &stack0xfffffad0;
    iVar2 = select(local_13c.fd_array[0] + 1,&local_13c,(fd_set *)0x0,(fd_set *)0x0,&local_1c);
    if ((iVar2 == 0) || (iVar2 == -1)) {
      *(undefined4 *)(param_1 + 0x3d0) = 0;
    }
    else {
      *(undefined4 *)(param_1 + 0x3d0) = 1;
    }
  }
  else if (param_1[0x3d4] == (ATcpLink)0x1) {
    AVar1 = param_1[0x3bc];
    if (AVar1 == (ATcpLink)0x0) {
      for (local_28 = 0; local_28 < 1000; local_28 = local_28 + 1) {
        local_524[local_28] = '\0';
      }
      SVar4 = *(SOCKET *)(param_1 + 0x3c8);
      if (SVar4 == 0xffffffff) {
        SVar4 = *(SOCKET *)(param_1 + 0x3c0);
      }
      ExceptionList = &local_10;
      local_14 = &stack0xfffffad0;
      iVar2 = recv(SVar4,(char *)local_524,999,0);
      if (iVar2 != -1) {
        local_524[iVar2] = '\0';
        uVar3 = winGetSizeUNICODE((char *)local_524);
        if ((uVar3 & 0x7fffffff) != 0) {
          winGetSizeUNICODE((char *)local_524);
          local_14 = &stack0xfffffad0;
          puVar5 = (ushort *)&stack0xfffffad0;
        }
        iVar2 = winGetSizeUNICODE((char *)local_524);
        puVar5 = winToUNICODE(puVar5,(char *)local_524,iVar2);
        FString::FString(local_20,puVar5);
        local_8._0_1_ = 1;
        ATcpLink::eventReceivedText(param_1,local_20);
        local_8 = (uint)local_8._1_3_ << 8;
        FString::~FString(local_20);
      }
    }
    else if (AVar1 == (ATcpLink)0x1) {
      for (local_2c = 0; local_2c < 1000; local_2c = local_2c + 1) {
        local_524[local_2c] = '\0';
      }
      SVar4 = *(SOCKET *)(param_1 + 0x3c8);
      if (SVar4 == 0xffffffff) {
        SVar4 = *(SOCKET *)(param_1 + 0x3c0);
      }
      ExceptionList = &local_10;
      local_14 = &stack0xfffffad0;
      iVar2 = recv(SVar4,(char *)local_524,999,0);
      if (iVar2 != -1) {
        local_524[iVar2] = '\0';
        uVar3 = winGetSizeUNICODE((char *)local_524);
        if ((uVar3 & 0x7fffffff) != 0) {
          winGetSizeUNICODE((char *)local_524);
          local_14 = &stack0xfffffad0;
          puVar5 = (ushort *)&stack0xfffffad0;
        }
        iVar2 = winGetSizeUNICODE((char *)local_524);
        puVar5 = winToUNICODE(puVar5,(char *)local_524,iVar2);
        FString::FString(local_20,puVar5);
        local_8._0_1_ = 2;
        ATcpLink::eventReceivedLine(param_1,local_20);
        local_8 = (uint)local_8._1_3_ << 8;
        FString::~FString(local_20);
      }
    }
    else if (AVar1 == (ATcpLink)0x2) {
      for (local_30 = 0; local_30 < 1000; local_30 = local_30 + 1) {
        local_524[local_30] = '\0';
      }
      SVar4 = *(SOCKET *)(param_1 + 0x3c8);
      if (SVar4 == 0xffffffff) {
        SVar4 = *(SOCKET *)(param_1 + 0x3c0);
      }
      ExceptionList = &local_10;
      iVar2 = recv(SVar4,(char *)local_524,999,0);
      if (iVar2 != -1) {
        ATcpLink::eventReceivedBinary(param_1,iVar2,local_524);
      }
    }
  }
  ExceptionList = local_10;
  return;
}


// ==== 10717442 Catch@10717442

void Catch_10717442(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x20) = *(undefined4 *)(unaff_EBP + -0x30);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x20,&DAT_10756c40);
}


// ==== 10717456 Catch@10717456

void Catch_10717456(void)

{
  appUnwindf((ushort *)&DAT_10749e48,L"ATcpLink::PollConnections");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 10717540 FUN_10717540

undefined4 __fastcall FUN_10717540(int param_1)

{
  char cVar1;
  int iVar2;
  SOCKET s;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10743b70;
  local_10 = ExceptionList;
  local_8 = 0;
  cVar1 = *(char *)(param_1 + 0x3d8);
  ExceptionList = &local_10;
  if ((((cVar1 == '\x02') || (ExceptionList = &local_10, cVar1 == '\x04')) ||
      (ExceptionList = &local_10, cVar1 == '\x06')) || (ExceptionList = &local_10, cVar1 == '\x05'))
  {
    while( true ) {
      iVar2 = *(int *)(param_1 + 0x3ec);
      if (0x200 < iVar2) {
        iVar2 = 0x200;
      }
      if (iVar2 < 1) break;
      s = *(SOCKET *)(param_1 + 0x3c8);
      if (s == 0xffffffff) {
        s = *(SOCKET *)(param_1 + 0x3c0);
      }
      iVar2 = send(s,*(char **)(param_1 + 1000),iVar2,0);
      if (iVar2 == -1) {
        ExceptionList = local_10;
        return 1;
      }
      TArray<unsigned_char>::Remove((TArray<unsigned_char> *)(param_1 + 1000),0,iVar2);
    }
  }
  ExceptionList = local_10;
  return 0;
}


// ==== 107175f7 Catch@107175f7

void Catch_107175f7(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10756c40);
}


// ==== 1071760b Catch@1071760b

void Catch_1071760b(void)

{
  appUnwindf((ushort *)&DAT_10749e48,L"ATcpLink::FlushSendBuffer");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 10717670 FUN_10717670

void FUN_10717670(int param_1,int *param_2)

{
  byte bVar1;
  int iVar2;
  undefined1 *puVar3;
  FArray *this;
  undefined1 local_130 [264];
  int local_28;
  int local_20;
  ATcpLink *local_1c;
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10743b80;
  local_10 = ExceptionList;
  local_14 = &stack0xfffffec4;
  local_8 = 0;
  local_18 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  ExceptionList = &local_10;
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&local_18);
  *(undefined4 *)GPropAddr_exref = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,local_130);
  if (*(int *)GPropObject_exref != 0) {
    (**(code **)(**(int **)GPropObject_exref + 0x60))(*(undefined4 *)GProperty_exref);
  }
  if (*(int *)GPropAddr_exref == 0) {
    puVar3 = local_130;
  }
  else {
    puVar3 = *(undefined1 **)GPropAddr_exref;
  }
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  if ((DAT_1076a3f8 != 0) && (*(int *)(local_1c + 0x3c0) != -1)) {
    this = (FArray *)(local_1c + 1000);
    iVar2 = FArray::Add(this,local_18,1);
    local_20 = 0;
    while( true ) {
      if (local_18 <= local_20) break;
      local_28 = local_20;
      *(undefined1 *)(*(int *)this + local_20 + iVar2) = puVar3[local_20];
      local_20 = local_20 + 1;
    }
    *param_2 = local_18;
    ATcpLink::FlushSendBuffer(local_1c);
    ExceptionList = local_10;
    return;
  }
  *param_2 = 0;
  ExceptionList = local_10;
  return;
}


// ==== 107177c4 Catch@107177c4

void Catch_107177c4(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x20) = *(undefined4 *)(unaff_EBP + -0x28);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x20,&DAT_10756c40);
}


// ==== 107177d8 Catch@107177d8

void Catch_107177d8(void)

{
  int iVar1;
  ushort *puVar2;
  ushort *puVar3;
  int iVar4;
  int unaff_EBP;
  
  appUnwindf((ushort *)&DAT_10749e48,L"ATcpLink::execSendBinary");
  iVar1 = *(int *)(unaff_EBP + 8);
  iVar4 = *(int *)(iVar1 + 0xc) - *(int *)(*(UObject **)(iVar1 + 4) + 0x54);
  puVar2 = UObject::GetFullName(*(UObject **)(iVar1 + 4),(ushort *)0x0);
  puVar3 = UObject::GetFullName(*(UObject **)(iVar1 + 8),(ushort *)0x0);
  appUnwindf((ushort *)L"(%s @ %s : %04X)",puVar3,puVar2,iVar4);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 10717890 FUN_10717890

/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */

void __thiscall FUN_10717890(void *this,int param_1,size_t *param_2)

{
  byte bVar1;
  char cVar2;
  ushort *puVar3;
  int iVar4;
  char *_Src;
  char *pcVar5;
  size_t _Size;
  int *piVar6;
  int iStack_40;
  FString *pFStack_3c;
  FString local_2c [20];
  ATcpLink *local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  puStack_c = &LAB_10743b99;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffc8;
  local_8 = 0;
  pFStack_3c = (FString *)0x107178c6;
  ExceptionList = &local_10;
  local_18 = this;
  FString::FString(local_2c);
  local_8 = CONCAT31(local_8._1_3_,1);
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  pFStack_3c = local_2c;
  iStack_40 = param_1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))();
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  *param_2 = 0;
  if ((DAT_1076a3f8 == 0) || (*(int *)((int)this + 0x3c0) == -1)) {
    *param_2 = 0;
    local_8 = local_8 & 0xffffff00;
    FString::~FString(local_2c);
  }
  else {
    if (*(char *)((int)this + 0x3bc) == '\x01') {
      FString::operator+=(local_2c,(ushort *)&DAT_1074fc68);
    }
    puVar3 = FString::operator*(local_2c);
    iVar4 = winGetSizeANSI(puVar3);
    if (iVar4 == 0) {
      piVar6 = (int *)0x0;
    }
    else {
      puVar3 = FString::operator*(local_2c);
      winGetSizeANSI(puVar3);
      local_14 = (undefined1 *)&iStack_40;
      piVar6 = &iStack_40;
    }
    puVar3 = FString::operator*(local_2c);
    iVar4 = winGetSizeANSI(puVar3);
    puVar3 = FString::operator*(local_2c);
    _Src = winToANSI((char *)piVar6,puVar3,iVar4);
    pcVar5 = _Src;
    do {
      cVar2 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar2 != '\0');
    _Size = (int)pcVar5 - (int)(_Src + 1);
    iVar4 = FArray::Add((FArray *)((int)this + 1000),_Size,1);
    _memcpy((void *)(*(int *)((int)this + 1000) + iVar4),_Src,_Size);
    *param_2 = _Size;
    ATcpLink::FlushSendBuffer(local_18);
    local_8 = local_8 & 0xffffff00;
    FString::~FString(local_2c);
  }
  ExceptionList = local_10;
  return;
}


// ==== 10717a29 Catch@10717a29

void Catch_10717a29(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_10756c40);
}


// ==== 10717a3d Catch@10717a3d

void Catch_10717a3d(void)

{
  int iVar1;
  ushort *puVar2;
  ushort *puVar3;
  int iVar4;
  int unaff_EBP;
  
  appUnwindf((ushort *)&DAT_10749e48,L"ATcpLink::execSendText");
  iVar1 = *(int *)(unaff_EBP + 8);
  iVar4 = *(int *)(iVar1 + 0xc) - *(int *)(*(UObject **)(iVar1 + 4) + 0x54);
  puVar2 = UObject::GetFullName(*(UObject **)(iVar1 + 4),(ushort *)0x0);
  puVar3 = UObject::GetFullName(*(UObject **)(iVar1 + 8),(ushort *)0x0);
  appUnwindf((ushort *)L"(%s @ %s : %04X)",puVar3,puVar2,iVar4);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 10717b10 FUN_10717b10

int __thiscall FUN_10717b10(void *this,float param_1,ELevelTick param_2)

{
  int iVar1;
  SOCKET *pSVar2;
  fd_set local_12c;
  timeval local_20;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10743bb0;
  local_10 = ExceptionList;
  local_14 = &stack0xfffffec8;
  local_8 = 0;
  ExceptionList = &local_10;
  param_2 = AInternetLink::Tick(this,param_1,param_2);
  pSVar2 = (SOCKET *)((int)this + 0x3c0);
  if (*pSVar2 != 0xffffffff) {
    switch(*(undefined1 *)((int)this + 0x3d8)) {
    case 2:
      ATcpLink::CheckConnectionQueue(this);
    case 4:
      ATcpLink::PollConnections(this);
      ATcpLink::FlushSendBuffer(this);
      break;
    case 3:
      ATcpLink::CheckConnectionAttempt(this);
      ATcpLink::PollConnections(this);
      break;
    case 5:
    case 6:
      ATcpLink::PollConnections(this);
      iVar1 = ATcpLink::FlushSendBuffer(this);
      if (iVar1 == 0) {
        ATcpLink::ShutdownConnection(this);
      }
    }
  }
  switch(*(undefined1 *)((int)this + 0x3d8)) {
  case 2:
  case 5:
  case 7:
    break;
  default:
    ExceptionList = local_10;
    return param_2;
  case 4:
  case 6:
  case 8:
    goto switchD_10717bc3_caseD_4;
  }
  pSVar2 = (SOCKET *)((int)this + 0x3c8);
switchD_10717bc3_caseD_4:
  if (*pSVar2 == 0xffffffff) {
    ExceptionList = local_10;
    return param_2;
  }
  local_20.tv_sec = 0;
  local_20.tv_usec = 0;
  local_12c.fd_array[0] = *pSVar2;
  local_12c.fd_count = 1;
  iVar1 = select(*pSVar2 + 1,&local_12c,(fd_set *)0x0,(fd_set *)0x0,&local_20);
  if (iVar1 == -1) {
    ExceptionList = local_10;
    return param_2;
  }
  if (iVar1 == 0) {
    ExceptionList = local_10;
    return param_2;
  }
  ioctlsocket(*pSVar2,0x4004667f,(u_long *)&param_1);
  if (param_1 == 0.0) {
    if (*(char *)((int)this + 0x3d8) != '\x02') {
      *(undefined1 *)((int)this + 0x3d8) = 0;
    }
    closesocket(*pSVar2);
    *pSVar2 = 0xffffffff;
    ATcpLink::eventClosed(this);
  }
  if (param_1 != -NAN) {
    ExceptionList = local_10;
    return param_2;
  }
  iVar1 = WSAGetLastError();
  if (iVar1 == 0x2733) {
    ExceptionList = local_10;
    return param_2;
  }
  if (*(char *)((int)this + 0x3d8) != '\x02') {
    *(undefined1 *)((int)this + 0x3d8) = 0;
  }
  closesocket(*pSVar2);
  *pSVar2 = 0xffffffff;
  ATcpLink::eventClosed(this);
  ExceptionList = local_10;
  return param_2;
}


// ==== 10717c9f Catch@10717c9f

void Catch_10717c9f(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x20);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10756c40);
}


// ==== 10717cb3 Catch@10717cb3

void Catch_10717cb3(void)

{
  appUnwindf((ushort *)&DAT_10749e48,L"ATcpLink::Tick");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 10717d90 FUN_10717d90

UNetConnection * __thiscall
FUN_10717d90(void *this,undefined4 param_1,UNetDriver *param_2,undefined4 param_3,undefined4 param_4
            ,undefined4 param_5,undefined4 param_6,undefined4 param_7,int param_8,FURL *param_9)

{
  ushort *puVar1;
  ushort *puVar2;
  char *cp;
  ulong uVar3;
  void *this_00;
  FOutputDevice *pFVar4;
  int iVar5;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10743bd4;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  UNetConnection::UNetConnection(this,param_2,param_9);
  *(undefined ***)this = UTcpipConnection::vftable_for_UObject_;
  *(undefined ***)((int)this + 0x34) = UTcpipConnection::vftable_for_FOutputDevice_;
  *(undefined ***)((int)this + 0x38) = UTcpipConnection::vftable_for_FExec_;
  *(undefined4 *)((int)this + 0x3f1c) = param_3;
  *(undefined4 *)((int)this + 0x3f20) = param_4;
  *(undefined4 *)((int)this + 0x3f24) = param_5;
  *(undefined4 *)((int)this + 0x3f28) = param_6;
  *(undefined4 *)((int)this + 0x3f2c) = param_1;
  *(int *)((int)this + 0x3f30) = param_8;
  local_8 = 1;
  *(undefined4 *)((int)this + 0x78) = param_7;
  *(undefined4 *)((int)this + 200) = 0x200;
  *(undefined4 *)((int)this + 0xcc) = 0x20;
  UNetConnection::InitOut(this);
  if (param_8 != 0) {
    puVar1 = FString::operator*((FString *)(param_9 + 0xc));
    iVar5 = 0;
    while ((((iVar5 < 4 && (puVar1 != (ushort *)0x0)) && (0x2f < *puVar1)) && (*puVar1 < 0x3a))) {
      puVar1 = appStrchr(puVar1,0x2e);
      if (puVar1 != (ushort *)0x0) {
        puVar1 = puVar1 + 1;
      }
      iVar5 = iVar5 + 1;
    }
    if ((iVar5 == 4) && (puVar1 == (ushort *)0x0)) {
      puVar2 = FString::operator*((FString *)(param_9 + 0xc));
      cp = appToAnsi(puVar2,(char *)puVar1);
      uVar3 = inet_addr(cp);
      thunk_FUN_1071b5c0((undefined4 *)((int)this + 0x3f20),uVar3);
    }
    else {
      this_00 = (void *)thunk_FUN_107026d0(0x308);
      local_8 = CONCAT31(local_8._1_3_,2);
      if (this_00 == (void *)0x0) {
        pFVar4 = (FOutputDevice *)0x0;
      }
      else {
        puVar1 = FString::operator*((FString *)(param_9 + 0xc));
        pFVar4 = thunk_FUN_10703780(this_00,puVar1);
      }
      *(FOutputDevice **)((int)this + 0x3f34) = pFVar4;
    }
  }
  ExceptionList = local_10;
  return this;
}


// ==== 10717f14 Catch@10717f14

void Catch_10717f14(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x1c) = *(undefined4 *)(unaff_EBP + -0x24);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x1c,&DAT_10756c40);
}


// ==== 10717f28 Catch@10717f28

void Catch_10717f28(void)

{
  appUnwindf((ushort *)&DAT_10749e48,L"UTcpipConnection::UTcpipConnection");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 10717fc0 FUN_10717fc0

void __thiscall FUN_10717fc0(void *this,char *param_1,int param_2)

{
  FOutputDevice *this_00;
  int *piVar1;
  uint *puVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  FString *this_01;
  ushort *puVar5;
  undefined4 uVar6;
  FString local_28 [20];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_10743bf9;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffcc;
  local_8 = 0;
  puVar2 = *(uint **)((int)this + 0x3f34);
  ExceptionList = &local_10;
  puVar4 = &stack0xffffffcc;
  if (puVar2 == (uint *)0x0) {
LAB_107180e2:
    local_14 = puVar4;
    uVar3 = rdtsc();
    piVar1 = (int *)(*(int *)((int)this + 0x74) + 0x8c);
    *piVar1 = *piVar1 - (int)uVar3;
    sendto(*(SOCKET *)((int)this + 0x3f2c),param_1,param_2,0,(sockaddr *)((int)this + 0x3f1c),0x10);
    uVar3 = rdtsc();
    piVar1 = (int *)(*(int *)((int)this + 0x74) + 0x8c);
    *piVar1 = *piVar1 + (int)uVar3 + -0xc;
    ExceptionList = local_10;
    return;
  }
  if (puVar2[1] == 0) {
    if (((short)puVar2[0x42] == 0) || (puVar2 + 0x42 == (uint *)0x0)) {
      ExceptionList = &local_10;
      *(uint *)((int)this + 0x3f20) = *puVar2;
      puVar4 = &stack0xffffffcc;
      if (*(int *)GLog_exref != 0) {
        this_01 = thunk_FUN_1071b5d0(local_28,*puVar2,0);
        local_8._0_1_ = 1;
        puVar5 = FString::operator*(this_01);
        uVar6 = thunk_FUN_10703910(*(int *)((int)this + 0x3f34));
        FOutputDevice::Logf2
                  (*(FOutputDevice **)GLog_exref,(ushort *)*(FOutputDevice **)GLog_exref,
                   L"Resolved %s (%s)",uVar6,puVar5);
        local_8 = (uint)local_8._1_3_ << 8;
        FString::~FString(local_28);
        puVar4 = local_14;
      }
      local_14 = puVar4;
      thunk_FUN_107026f0(*(undefined4 *)((int)this + 0x3f34));
      *(undefined4 *)((int)this + 0x3f34) = 0;
      puVar4 = local_14;
      goto LAB_107180e2;
    }
    ExceptionList = &local_10;
    local_14 = &stack0xffffffcc;
    if (*(int *)GLog_exref != 0) {
      this_00 = (FOutputDevice *)(puVar2 + 0x42);
      ExceptionList = &local_10;
      local_14 = &stack0xffffffcc;
      FOutputDevice::Logf2
                (this_00,*(EName *)GLog_exref,(ushort *)0x2f8,&DAT_10749e48,
                 -(uint)(*(short *)this_00 != 0) & (uint)this_00);
    }
    *(undefined4 *)(*(int *)(*(int *)((int)this + 0x74) + 0x44) + 0x78) = 1;
    thunk_FUN_107026f0(*(undefined4 *)((int)this + 0x3f34));
    *(undefined4 *)((int)this + 0x3f34) = 0;
  }
  ExceptionList = local_10;
  return;
}


// ==== 10718133 Catch@10718133

void Catch_10718133(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10756c40);
}


// ==== 10718147 Catch@10718147

void Catch_10718147(void)

{
  appUnwindf((ushort *)&DAT_10749e48,L"UTcpipConnection::LowLevelSend");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 107181d0 FUN_107181d0

FString * __thiscall FUN_107181d0(void *this,FString *param_1)

{
  u_short uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10743c2a;
  local_10 = ExceptionList;
  local_8 = 1;
  ExceptionList = &local_10;
  uVar1 = ntohs(*(u_short *)((int)this + 0x3f1e));
  thunk_FUN_1071b5d0(param_1,*(uint *)((int)this + 0x3f20),(uint)uVar1);
  ExceptionList = local_10;
  return param_1;
}


// ==== 1071823e Catch@1071823e

void Catch_1071823e(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_10756c40);
}


// ==== 10718252 Catch@10718252

void Catch_10718252(void)

{
  appUnwindf((ushort *)&DAT_10749e48,L"UTcpipConnection::LowLevelGetRemoteAddress");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 107182a0 FUN_107182a0

ushort * __thiscall FUN_107182a0(void *this,ushort *param_1)

{
  int iVar1;
  u_short uVar2;
  FString *this_00;
  ushort *puVar3;
  ushort *puVar4;
  wchar_t *pwVar5;
  FString local_2c [20];
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10743c63;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffc8;
  local_18 = 0;
  local_8 = 1;
  iVar1 = *(int *)((int)this + 0x78);
  if (iVar1 == 2) {
    pwVar5 = L"Pending";
  }
  else if (iVar1 == 3) {
    pwVar5 = L"Open";
  }
  else {
    pwVar5 = L"Closed";
    if (iVar1 != 1) {
      pwVar5 = L"Invalid";
    }
  }
  ExceptionList = &local_10;
  uVar2 = ntohs(*(u_short *)((int)this + 0x3f1e));
  this_00 = thunk_FUN_1071b5d0(local_2c,*(uint *)((int)this + 0x3f20),(uint)uVar2);
  local_8._0_1_ = 2;
  puVar3 = FString::operator*(this_00);
  puVar4 = FString::operator*((FString *)((int)this + 0x88));
  FString::Printf(param_1,L"%s %s state: %s",puVar4,puVar3,pwVar5);
  local_18 = 1;
  local_8 = CONCAT31(local_8._1_3_,1);
  FString::~FString(local_2c);
  ExceptionList = local_10;
  return param_1;
}


// ==== 10718370 Catch@10718370

void Catch_10718370(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_10756c40);
}


// ==== 10718384 Catch@10718384

void Catch_10718384(void)

{
  appUnwindf((ushort *)&DAT_10749e48,L"UTcpipConnection::LowLevelDescribe");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 107183f0 FUN_107183f0

FString * __thiscall FUN_107183f0(void *this,FString *param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10743c9a;
  local_10 = ExceptionList;
  local_8 = 1;
  ExceptionList = &local_10;
  thunk_FUN_1071b5d0(param_1,*(uint *)((int)this + 0xb0),0);
  ExceptionList = local_10;
  return param_1;
}


// ==== 1071844d Catch@1071844d

void Catch_1071844d(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_10756c40);
}


// ==== 10718461 Catch@10718461

void Catch_10718461(void)

{
  appUnwindf((ushort *)&DAT_10749e48,L"UTcpNetDriver::LowLevelGetNetworkNumber");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 107184b0 FUN_107184b0

void __fastcall FUN_107184b0(int param_1)

{
  int iVar1;
  FOutputDevice *extraout_ECX;
  FOutputDevice *extraout_ECX_00;
  FOutputDevice *this;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10743cb0;
  local_10 = ExceptionList;
  local_8 = 0;
  if (*(SOCKET *)(param_1 + 0xbc) != 0) {
    ExceptionList = &local_10;
    iVar1 = closesocket(*(SOCKET *)(param_1 + 0xbc));
    this = extraout_ECX;
    if ((iVar1 != 0) && (*(int *)GLog_exref != 0)) {
      iVar1 = WSAGetLastError();
      FOutputDevice::Logf2
                ((FOutputDevice *)GLog_exref,*(EName *)GLog_exref,(ushort *)0x2fb,
                 L"WinSock closesocket error (%i)",iVar1);
      this = extraout_ECX_00;
    }
    *(undefined4 *)(param_1 + 0xbc) = 0;
    if (*(int *)GLog_exref != 0) {
      FOutputDevice::Logf2(this,*(EName *)GLog_exref,(ushort *)0x2fb,L"WinSock shut down");
    }
  }
  ExceptionList = local_10;
  return;
}


// ==== 1071855c Catch@1071855c

void Catch_1071855c(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10756c40);
}


// ==== 10718570 Catch@10718570

void Catch_10718570(void)

{
  appUnwindf((ushort *)&DAT_10749e48,L"UTcpNetDriver::LowLevelDestroy");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 107185d0 FUN_107185d0

undefined4 __thiscall
FUN_107185d0(void *this,int param_1,undefined4 param_2,int param_3,FString *param_4)

{
  bool bVar1;
  u_short uVar2;
  u_short uVar3;
  int iVar4;
  SOCKET s;
  wchar_t *pwVar5;
  FString *pFVar6;
  uint uVar7;
  ushort *puVar8;
  undefined2 extraout_var_00;
  undefined3 extraout_var;
  FOutputDevice *this_00;
  int iVar9;
  u_short *puVar10;
  FString local_38 [20];
  char local_24 [4];
  FOutputDevice *local_20;
  FOutputDevice *local_1c;
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_10743ce4;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffbc;
  iVar9 = 0;
  local_8 = 0;
  ExceptionList = &local_10;
  iVar4 = thunk_FUN_1071af40();
  if (iVar4 != 0) {
    s = socket(2,2,0x11);
    *(SOCKET *)((int)this + 0xbc) = s;
    if (s == 0xffffffff) {
      *(undefined4 *)((int)this + 0xbc) = 0;
      pwVar5 = thunk_FUN_1071b190(-1);
      pFVar6 = (FString *)FString::Printf((ushort *)local_38,L"WinSock: socket failed (%i)",pwVar5);
      local_8._0_1_ = 1;
    }
    else {
      local_24[0] = '\x01';
      local_24[1] = '\0';
      local_24[2] = '\0';
      local_24[3] = '\0';
      iVar4 = setsockopt(s,0xffff,0x20,local_24,4);
      if (iVar4 == 0) {
        iVar4 = thunk_FUN_1071b710(*(SOCKET *)((int)this + 0xbc),1);
        if ((iVar4 != 0) && (*(int *)GLog_exref != 0)) {
          FOutputDevice::Logf2
                    (*(FOutputDevice **)GLog_exref,(ushort *)*(FOutputDevice **)GLog_exref,
                     L"setsockopt with SO_REUSEADDR failed");
        }
        iVar4 = thunk_FUN_1071b780();
        if ((iVar4 != 0) && (*(int *)GLog_exref != 0)) {
          FOutputDevice::Logf2(this_00,*(ushort **)GLog_exref,L"setsockopt with IP_RECVERR failed");
        }
        local_20 = (FOutputDevice *)((-(uint)(param_1 != 0) & 0xfffe8000) + 0x20000);
        local_18 = 4;
        local_1c = local_20;
        setsockopt(*(SOCKET *)((int)this + 0xbc),0xffff,0x1002,(char *)&local_20,4);
        getsockopt(*(SOCKET *)((int)this + 0xbc),0xffff,0x1002,(char *)&local_20,&local_18);
        setsockopt(*(SOCKET *)((int)this + 0xbc),0xffff,0x1001,(char *)&local_1c,local_18);
        getsockopt(*(SOCKET *)((int)this + 0xbc),0xffff,0x1001,(char *)&local_1c,&local_18);
        if (*(int *)GLog_exref != 0) {
          FOutputDevice::Logf2
                    (local_1c,*(EName *)GLog_exref,(ushort *)0x2fa,L"%s: Socket queue %i / %i",
                     L"WinSock",local_20,local_1c);
        }
        ((sockaddr *)((int)this + 0xac))->sa_family = 2;
        uVar7 = thunk_FUN_10703e30(*(ushort **)GLog_exref);
        *(uint *)((int)this + 0xb0) = uVar7;
        *(undefined2 *)((int)this + 0xae) = 0;
        if (param_1 == 0) {
          pwVar5 = L"PORT=";
          puVar10 = (u_short *)(param_3 + 0x18);
          puVar8 = appCmdLine();
          iVar9 = Parse(puVar8,(ushort *)pwVar5,(int *)puVar10);
          uVar2 = htons(*(u_short *)(param_3 + 0x18));
          *(u_short *)((int)this + 0xae) = uVar2;
        }
        uVar2 = ntohs(*(u_short *)((int)this + 0xae));
        uVar3 = thunk_FUN_10703930(*(SOCKET *)((int)this + 0xbc),(sockaddr *)((int)this + 0xac),
                                   (-(uint)(iVar9 != 0) & 0xffffffed) + 0x14,1);
        if (CONCAT22(extraout_var_00,uVar3) == 0) {
          pwVar5 = thunk_FUN_1071b190(-1);
          pFVar6 = (FString *)
                   FString::Printf((ushort *)local_38,L"%s: binding to port %i failed (%i)",
                                   L"WinSock",(uint)uVar2,pwVar5);
          local_8._0_1_ = 3;
        }
        else {
          bVar1 = thunk_FUN_1071b6e0(*(SOCKET *)((int)this + 0xbc));
          if (CONCAT31(extraout_var,bVar1) != 0) {
            ExceptionList = local_10;
            return 1;
          }
          pwVar5 = thunk_FUN_1071b190(-1);
          pFVar6 = (FString *)
                   FString::Printf((ushort *)local_38,L"%s: SetNonBlocking failed (%i)",L"WinSock",
                                   pwVar5);
          local_8._0_1_ = 4;
        }
      }
      else {
        pwVar5 = thunk_FUN_1071b190(-1);
        pFVar6 = (FString *)
                 FString::Printf((ushort *)local_38,L"%s: setsockopt SO_BROADCAST failed (%i)",
                                 L"WinSock",pwVar5);
        local_8._0_1_ = 2;
      }
    }
    FString::operator=(param_4,pFVar6);
    local_8 = (uint)local_8._1_3_ << 8;
    FString::~FString(local_38);
  }
  ExceptionList = local_10;
  return 0;
}


// ==== 107188e6 Catch@107188e6

void Catch_107188e6(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x24) = *(undefined4 *)(unaff_EBP + -0x28);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x24,&DAT_10756c40);
}


// ==== 107188fa Catch@107188fa

void Catch_107188fa(void)

{
  appUnwindf((ushort *)&DAT_10749e48,L"UTcpNetDriver::UTcpNetDriver");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 107189f0 FUN_107189f0

undefined4 __fastcall FUN_107189f0(int param_1)

{
  return *(undefined4 *)(param_1 + 0x44);
}


// ==== 10718a00 FUN_10718a00

sockaddr * __thiscall FUN_10718a00(void *this,sockaddr *param_1)

{
  SOCKET s;
  sockaddr *name;
  u_short uVar1;
  uint uVar2;
  
  name = param_1;
  s = *(SOCKET *)((int)this + 0xbc);
  *(SOCKET *)(param_1[1].sa_data + 2) = s;
  param_1 = (sockaddr *)0x10;
  getsockname(s,name,(int *)&param_1);
  uVar1 = ntohs(*(u_short *)name->sa_data);
  uVar2 = (uint)uVar1;
  name[1].sa_family = (short)uVar2;
  name[1].sa_data[0] = (char)(uVar2 >> 0x10);
  name[1].sa_data[1] = (char)(uVar2 >> 0x18);
  return name;
}


// ==== 10718a50 FUN_10718a50

void __fastcall FUN_10718a50(int param_1)

{
  undefined4 uVar1;
  UObject *pUVar2;
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10743d00;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffd4;
  local_8 = 0;
  uVar1 = *(undefined4 *)(param_1 + 0x24);
  ExceptionList = &local_10;
  FName::FName((FName *)&local_18,(ushort *)L"AllowPlayerPortUnreach",1);
  pUVar2 = UObject::StaticAllocateObject
                     (PrivateStaticClass_exref,uVar1,local_18,4,0,*(undefined4 *)GError_exref,0,0);
  if (pUVar2 != (UObject *)0x0) {
    UBoolProperty::UBoolProperty((UBoolProperty *)pUVar2,0,0xa4,(ushort *)L"Client",0x4000);
    *(undefined ***)pUVar2 = UBoolProperty::vftable;
  }
  uVar1 = *(undefined4 *)(param_1 + 0x24);
  FName::FName((FName *)&local_18,(ushort *)L"LogPortUnreach",1);
  pUVar2 = UObject::StaticAllocateObject
                     (PrivateStaticClass_exref,uVar1,local_18,4,0,*(undefined4 *)GError_exref,0,0);
  if (pUVar2 != (UObject *)0x0) {
    UBoolProperty::UBoolProperty((UBoolProperty *)pUVar2,0,0xa8,(ushort *)L"Client",0x4000);
    *(undefined ***)pUVar2 = UBoolProperty::vftable;
  }
  ExceptionList = local_10;
  return;
}


// ==== 10718b4a Catch@10718b4a

void Catch_10718b4a(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_10756c40);
}


// ==== 10718b5e Catch@10718b5e

void Catch_10718b5e(void)

{
  appUnwindf((ushort *)&DAT_10749e48,L"UTcpNetDriver::StaticConstructor");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 10718bf0 FUN_10718bf0

undefined4 __thiscall
FUN_10718bf0(void *this,FNetworkNotify *param_1,FURL *param_2,FString *param_3)

{
  u_short uVar1;
  int iVar2;
  UPackage *pUVar3;
  UTcpipConnection *pUVar4;
  undefined4 uVar5;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10743d10;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffc8;
  local_8 = 0;
  ExceptionList = &local_10;
  iVar2 = UNetDriver::InitConnect(this,param_1,param_2,param_3);
  if (iVar2 != 0) {
    iVar2 = UTcpNetDriver::InitBase(this,1,param_1,param_2,param_3);
    if (iVar2 != 0) {
      uVar1 = htons(*(u_short *)(param_2 + 0x18));
      local_2c = CONCAT22(uVar1,2);
      thunk_FUN_1071b580((undefined1 *)&local_28,0,0,0,0);
      pUVar3 = UObject::GetTransientPackage();
      pUVar4 = UTcpipConnection::operator_new(0x3f38,pUVar3);
      if (pUVar4 == (UTcpipConnection *)0x0) {
        uVar5 = 0;
      }
      else {
        uVar5 = UTcpipConnection::UTcpipConnection
                          (pUVar4,*(undefined4 *)((int)this + 0xbc),this,local_2c,local_28,local_24,
                           local_20,2);
      }
      *(undefined4 *)((int)this + 0x44) = uVar5;
      if (*(int *)GLog_exref != 0) {
        uVar1 = ntohs(*(u_short *)((int)this + 0xae));
        FOutputDevice::Logf2
                  ((FOutputDevice *)(uint)uVar1,*(EName *)GLog_exref,(ushort *)0x304,
                   L"Game client on port %i, rate %i");
      }
      UNetConnection::CreateChannel(*(UNetConnection **)((int)this + 0x44),1,1,0);
      ExceptionList = local_10;
      return 1;
    }
  }
  ExceptionList = local_10;
  return 0;
}


// ==== 10718d42 Catch@10718d42

void Catch_10718d42(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10756c40);
}


// ==== 10718d56 Catch@10718d56

void Catch_10718d56(void)

{
  appUnwindf((ushort *)&DAT_10749e48,L"UTcpNetDriver::InitConnect");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 10718de0 FUN_10718de0

undefined4 __thiscall
FUN_10718de0(void *this,FNetworkNotify *param_1,FURL *param_2,FString *param_3)

{
  u_short uVar1;
  int iVar2;
  FString *pFVar3;
  FString local_28 [20];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_10743d29;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffcc;
  local_8 = 0;
  ExceptionList = &local_10;
  iVar2 = UNetDriver::InitListen(this,param_1,param_2,param_3);
  if (iVar2 != 0) {
    iVar2 = UTcpNetDriver::InitBase(this,0,param_1,param_2,param_3);
    if (iVar2 != 0) {
      pFVar3 = thunk_FUN_1071b5d0(local_28,*(uint *)((int)this + 0xb0),0);
      local_8._0_1_ = 1;
      FString::operator=((FString *)(param_2 + 0xc),pFVar3);
      local_8 = (uint)local_8._1_3_ << 8;
      FString::~FString(local_28);
      uVar1 = ntohs(*(u_short *)((int)this + 0xae));
      *(uint *)(param_2 + 0x18) = (uint)uVar1;
      if (*(int *)GLog_exref != 0) {
        FOutputDevice::Logf2
                  ((FOutputDevice *)GLog_exref,*(EName *)GLog_exref,(ushort *)0x304,
                   L"TcpNetDriver on port %i",(uint)uVar1);
      }
      ExceptionList = local_10;
      return 1;
    }
  }
  ExceptionList = local_10;
  return 0;
}


// ==== 10718ec5 Catch@10718ec5

void Catch_10718ec5(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10756c40);
}


// ==== 10718ed9 Catch@10718ed9

void Catch_10718ed9(void)

{
  appUnwindf((ushort *)&DAT_10749e48,L"UTcpNetDriver::InitListen");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 10718f40 FUN_10718f40

void __thiscall FUN_10718f40(void *this,undefined4 *param_1)

{
  int iVar1;
  
  iVar1 = FArray::Add(this,1,4);
  *(undefined4 *)(*(int *)this + iVar1 * 4) = *param_1;
  return;
}


// ==== 10718f70 FUN_10718f70

void __thiscall FUN_10718f70(void *this,float param_1)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  int iVar3;
  FString *pFVar4;
  int iVar5;
  UPackage *pUVar6;
  UTcpipConnection *pUVar7;
  UNetConnection *this_00;
  char local_2e8 [576];
  FURL local_a8 [68];
  FString local_64 [12];
  FString local_58 [16];
  FString local_48 [16];
  UNetConnection *local_38;
  undefined1 *local_34;
  UNetConnection *local_30;
  int local_2c;
  sockaddr local_28;
  uint local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_10743d81;
  local_10 = ExceptionList;
  local_14 = &stack0xfffffd0c;
  local_18 = 0;
  local_8 = 0;
  ExceptionList = &local_10;
  UNetDriver::TickDispatch(this,param_1);
LAB_10718fb0:
  while( true ) {
    uVar1 = rdtsc();
    *(int *)((int)this + 0x90) = *(int *)((int)this + 0x90) - (int)uVar1;
    param_1 = 2.24208e-44;
    puVar2 = (undefined1 *)
             recvfrom(*(SOCKET *)((int)this + 0xbc),local_2e8,0x240,0,&local_28,(int *)&param_1);
    uVar1 = rdtsc();
    *(int *)((int)this + 0x90) = *(int *)((int)this + 0x90) + (int)uVar1 + -0xc;
    local_34 = puVar2;
    if (puVar2 == (undefined1 *)0xffffffff) {
      iVar3 = WSAGetLastError();
      if (iVar3 == 0x2733) {
        ExceptionList = local_10;
        return;
      }
      if (iVar3 != 0x2746) {
        if ((DAT_10765064 != 0) && (*(int *)GLog_exref != 0)) {
          pFVar4 = thunk_FUN_1071b5d0(local_48,CONCAT22(local_28.sa_data._4_2_,
                                                        local_28.sa_data._2_2_),0);
          local_8._0_1_ = 1;
          ntohs(local_28.sa_data._0_2_);
          FString::operator*(pFVar4);
          iVar3 = WSAGetLastError();
          FOutputDevice::Logf2
                    (*(FOutputDevice **)GLog_exref,(ushort *)*(FOutputDevice **)GLog_exref,
                     L"UDP recvfrom error: %i from %s:%d",iVar3);
          local_8 = (uint)local_8._1_3_ << 8;
          FString::~FString(local_48);
        }
        DAT_10765064 = 0;
        ExceptionList = local_10;
        return;
      }
    }
    this_00 = (UNetConnection *)0x0;
    local_30 = (UNetConnection *)0x0;
    if ((*(int *)((int)this + 0x44) != 0) &&
       (iVar3 = thunk_FUN_1071b500((short *)(*(int *)((int)this + 0x44) + 0x3f1c),(short *)&local_28
                                  ), iVar3 != 0)) {
      this_00 = *(UNetConnection **)((int)this + 0x44);
      local_30 = this_00;
    }
    local_2c = 0;
    while ((local_2c < *(int *)((int)this + 0x3c) && (this_00 == (UNetConnection *)0x0))) {
      iVar3 = local_2c * 4;
      iVar5 = thunk_FUN_1071b500((short *)(*(int *)(*(int *)((int)this + 0x38) + iVar3) + 0x3f1c),
                                 (short *)&local_28);
      if (iVar5 != 0) {
        this_00 = *(UNetConnection **)(iVar3 + *(int *)((int)this + 0x38));
        local_30 = this_00;
      }
      local_2c = local_2c + 1;
      puVar2 = local_34;
    }
    if (puVar2 != (undefined1 *)0xffffffff) break;
    if (this_00 == (UNetConnection *)0x0) {
      if ((*(int *)((int)this + 0xa8) != 0) && (*(int *)GLog_exref != 0)) {
        pFVar4 = thunk_FUN_1071b5d0(local_58,CONCAT22(local_28.sa_data._4_2_,local_28.sa_data._2_2_)
                                    ,0);
        local_8._0_1_ = 3;
        ntohs(local_28.sa_data._0_2_);
        FString::operator*(pFVar4);
        FOutputDevice::Logf2
                  (*(FOutputDevice **)GLog_exref,(ushort *)*(FOutputDevice **)GLog_exref,
                   L"Received ICMP port unreachable from %s:%d.  No matching connection found.");
        local_8 = (uint)local_8._1_3_ << 8;
        FString::~FString(local_58);
      }
    }
    else if ((this_00 != *(UNetConnection **)((int)this + 0x44)) &&
            ((*(int *)(this_00 + 0x78) != 3 || (*(int *)((int)this + 0xa4) == 0)))) {
      if ((*(int *)((int)this + 0xa8) != 0) && (*(int *)GLog_exref != 0)) {
        pFVar4 = thunk_FUN_1071b5d0(local_48,CONCAT22(local_28.sa_data._4_2_,local_28.sa_data._2_2_)
                                    ,0);
        local_8._0_1_ = 2;
        ntohs(local_28.sa_data._0_2_);
        FString::operator*(pFVar4);
        FOutputDevice::Logf2
                  (*(FOutputDevice **)GLog_exref,(ushort *)*(FOutputDevice **)GLog_exref,
                   L"Received ICMP port unreachable from client %s:%d.  Disconnecting.");
        local_8 = (uint)local_8._1_3_ << 8;
        FString::~FString(local_48);
      }
      (**(code **)(*(int *)this_00 + 0xc))();
    }
  }
  if (this_00 == (UNetConnection *)0x0) goto code_r0x10719231;
  goto LAB_10719324;
code_r0x10719231:
  iVar3 = (**(code **)**(undefined4 **)((int)this + 0x48))();
  if (iVar3 == 1) {
    local_34 = &stack0xfffffd04;
    pUVar6 = UObject::GetTransientPackage();
    pUVar7 = UTcpipConnection::operator_new(0x3f38,pUVar6);
    if (pUVar7 == (UTcpipConnection *)0x0) {
      this_00 = (UNetConnection *)0x0;
    }
    else {
      FURL::FURL(local_a8,(ushort *)0x0);
      local_8 = CONCAT31(local_8._1_3_,4);
      local_18 = local_18 | 1;
      this_00 = (UNetConnection *)
                UTcpipConnection::UTcpipConnection
                          (pUVar7,*(undefined4 *)((int)this + 0xbc),this,
                           CONCAT22(local_28.sa_data._0_2_,local_28.sa_family),
                           CONCAT22(local_28.sa_data._4_2_,local_28.sa_data._2_2_),
                           local_28.sa_data._6_4_,local_28.sa_data._10_4_,3);
    }
    local_8 = 0;
    local_30 = this_00;
    if ((local_18 & 1) != 0) {
      local_18 = local_18 & 0xfffffffe;
      FURL::~FURL(local_a8);
    }
    pFVar4 = thunk_FUN_1071b5d0(local_64,CONCAT22(local_28.sa_data._4_2_,local_28.sa_data._2_2_),0);
    local_8._0_1_ = 5;
    FString::operator=((FString *)(this_00 + 0x88),pFVar4);
    local_8 = (uint)local_8._1_3_ << 8;
    FString::~FString(local_64);
    (**(code **)(**(int **)((int)this + 0x48) + 4))();
    local_38 = this_00;
    thunk_FUN_10718f40((void *)((int)this + 0x38),&local_38);
    if (this_00 != (UNetConnection *)0x0) {
LAB_10719324:
      UNetConnection::ReceivedRawPacket(this_00,local_2e8,(int)puVar2);
    }
  }
  goto LAB_10718fb0;
}


// ==== 10719339 Catch@10719339

void Catch_10719339(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x38) = *(undefined4 *)(unaff_EBP + -0x48);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x38,&DAT_10756c40);
}


// ==== 1071934d Catch@1071934d

void Catch_1071934d(void)

{
  appUnwindf((ushort *)&DAT_10749e48,L"UTcpNetDriver::TickDispatch");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 10719490 FUN_10719490

UCommandlet * __fastcall FUN_10719490(UCommandlet *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10743da9;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UCommandlet::UCommandlet(param_1);
  *(undefined ***)param_1 = UCompressCommandlet::vftable;
  ExceptionList = local_c;
  return param_1;
}


// ==== 107194f0 FUN_107194f0

void __fastcall FUN_107194f0(UObject *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_10743dc9;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)param_1 = UCompressCommandlet::vftable;
  local_4 = 0;
  UObject::ConditionalDestroy(param_1);
  local_4 = 0xffffffff;
  UCommandlet::~UCommandlet((UCommandlet *)param_1);
  ExceptionList = local_c;
  return;
}


// ==== 10719560 FUN_10719560

UObject * __thiscall FUN_10719560(void *this,byte param_1)

{
  thunk_FUN_107194f0(this);
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(this,0x1e8);
  }
  return this;
}


// ==== 107195b0 FUN_107195b0

UCommandlet * __fastcall FUN_107195b0(UCommandlet *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10743de9;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UCommandlet::UCommandlet(param_1);
  *(undefined ***)param_1 = UDecompressCommandlet::vftable;
  ExceptionList = local_c;
  return param_1;
}


// ==== 10719610 FUN_10719610

void __fastcall FUN_10719610(UObject *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_10743e09;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)param_1 = UDecompressCommandlet::vftable;
  local_4 = 0;
  UObject::ConditionalDestroy(param_1);
  local_4 = 0xffffffff;
  UCommandlet::~UCommandlet((UCommandlet *)param_1);
  ExceptionList = local_c;
  return;
}


// ==== 10719680 FUN_10719680

UObject * __thiscall FUN_10719680(void *this,byte param_1)

{
  thunk_FUN_10719610(this);
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(this,0x1e8);
  }
  return this;
}


// ==== 107196b0 FUN_107196b0

undefined4 FUN_107196b0(void)

{
  int iVar1;
  FString *pFVar2;
  ushort *puVar3;
  ushort *puVar4;
  FOutputDevice *this;
  code *pcVar5;
  wchar_t *pwVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  FString local_4c [12];
  FString local_40 [12];
  FString local_34 [12];
  FString local_28 [20];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_10743e4d;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffa8;
  local_8 = 0;
  ExceptionList = &local_10;
  FString::FString(local_34);
  local_8._0_1_ = 1;
  FString::FString(local_4c);
  local_8 = CONCAT31(local_8._1_3_,2);
  iVar1 = ParseToken((ushort **)&stack0x00000004,local_34,0);
  if (iVar1 == 0) {
    FOutputDevice::Logf(this,*(ushort **)GError_exref,L"Compressed file not specified");
  }
  FString::FString(local_28);
  local_8._0_1_ = 3;
  appStrlen((ushort *)L".uz2");
  pFVar2 = (FString *)FString::Right(local_34,(int)local_40);
  local_8._0_1_ = 4;
  iVar1 = FString::operator==(pFVar2,(ushort *)L".uz2");
  local_8._0_1_ = 3;
  FString::~FString(local_40);
  pcVar5 = Logf_exref;
  if (iVar1 == 0) {
    FOutputDevice::Logf(*(FOutputDevice **)GError_exref,(ushort *)*(FOutputDevice **)GError_exref,
                        L"Compressed files must end in %s",L".uz2");
  }
  else {
    appStrlen((ushort *)L".uz2");
    pFVar2 = (FString *)FString::Left(local_34,(int)local_40);
    local_8._0_1_ = 5;
    FString::operator=(local_28,pFVar2);
    local_8._0_1_ = 3;
    FString::~FString(local_40);
    pcVar5 = Logf_exref;
  }
  iVar1 = **(int **)GFileManager_exref;
  uVar11 = 0;
  uVar10 = 2;
  uVar9 = 0;
  uVar8 = 1;
  uVar7 = 1;
  puVar3 = FString::operator*(local_28);
  puVar4 = FString::operator*(local_28);
  iVar1 = (**(code **)(iVar1 + 0x18))(puVar4,puVar3,uVar7,uVar8,uVar9,uVar10,uVar11);
  if (iVar1 != 0) {
    if (iVar1 == 2) {
      pwVar6 = L".uz2";
      puVar3 = FString::operator*(local_28);
      (*pcVar5)(*(undefined4 *)GError_exref,L"Error occurred opening %s%s",puVar3,pwVar6);
    }
    else if (iVar1 == 3) {
      puVar3 = FString::operator*(local_28);
      (*pcVar5)(*(undefined4 *)GError_exref,L"Error occurred creating %s",puVar3);
    }
    else {
      puVar3 = FString::operator*(local_28);
      (*pcVar5)(*(undefined4 *)GError_exref,L"Error occurred decompressing %s",puVar3);
    }
  }
  puVar3 = FString::operator*(local_28);
  puVar4 = FString::operator*(local_34);
  (*pcVar5)(*(undefined4 *)GWarn_exref,L"Decompressed %s -> %s",puVar4,puVar3);
  local_8._0_1_ = 2;
  FString::~FString(local_28);
  local_8._0_1_ = 1;
  FString::~FString(local_4c);
  local_8 = (uint)local_8._1_3_ << 8;
  FString::~FString(local_34);
  ExceptionList = local_10;
  return 0;
}


// ==== 107198d5 Catch@107198d5

void Catch_107198d5(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10756c40);
}


// ==== 107198e9 Catch@107198e9

void Catch_107198e9(void)

{
  appUnwindf((ushort *)&DAT_10749e48,L"UDecompressCommandlet::Main");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 107199e0 FUN_107199e0

undefined4 FUN_107199e0(void)

{
  int iVar1;
  FString *pFVar2;
  ushort *puVar3;
  ushort *puVar4;
  int iVar5;
  int iVar6;
  FOutputDevice *this;
  code *pcVar7;
  wchar_t *pwVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  FString local_68 [12];
  FString local_5c [12];
  FString local_50 [12];
  FArray local_44 [4];
  int local_40;
  short *local_38;
  int local_34;
  FString local_2c [20];
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  puStack_c = &LAB_10743ea5;
  local_10 = ExceptionList;
  local_14 = &stack0xffffff8c;
  local_8 = 0;
  ExceptionList = &local_10;
  FString::FString((FString *)&local_38);
  local_8 = CONCAT31(local_8._1_3_,1);
  iVar1 = ParseToken((ushort **)&stack0x00000004,(FString *)&local_38,0);
  pcVar7 = Logf_exref;
  if (iVar1 == 0) {
    FOutputDevice::Logf(this,*(ushort **)GError_exref,L"Source file(s) not specified");
  }
  do {
    if (((local_34 == 0) || (local_34 == 1 || local_34 + -1 < 0)) || (*local_38 != 0x2d)) {
      FString::FString(local_50);
      local_8._0_1_ = 2;
      iVar1 = FString::InStr((FString *)&local_38,(ushort *)&DAT_10750aac,1);
      if (iVar1 != -1) {
        pFVar2 = (FString *)FString::Left((FString *)&local_38,(int)local_5c);
        local_8._0_1_ = 3;
        FString::operator=(local_50,pFVar2);
        local_8._0_1_ = 2;
        FString::~FString(local_5c);
      }
      iVar1 = **(int **)GFileManager_exref;
      uVar12 = 0;
      uVar10 = 1;
      puVar3 = FString::operator*((FString *)&local_38);
      (**(code **)(iVar1 + 0x30))(local_44,puVar3,uVar10,uVar12);
      local_8 = CONCAT31(local_8._1_3_,4);
      if (local_40 == 0) {
        puVar3 = FString::operator*((FString *)&local_38);
        (*pcVar7)(*(undefined4 *)GError_exref,L"Source %s not found",puVar3);
      }
      local_18 = 0;
      while (iVar1 = local_18, local_18 < local_40) {
        FString::operator+(local_50,local_2c);
        local_8 = CONCAT31(local_8._1_3_,5);
        iVar5 = **(int **)GFileManager_exref;
        uVar13 = 0;
        uVar11 = 1;
        uVar9 = 0;
        uVar12 = 1;
        uVar10 = 1;
        puVar3 = FString::operator*(local_2c);
        puVar4 = FString::operator*(local_2c);
        iVar5 = (**(code **)(iVar5 + 0x18))(puVar4,puVar3,uVar10,uVar12,uVar9,uVar11,uVar13);
        if (iVar5 != 0) {
          if (iVar5 == 2) {
            puVar3 = FString::operator*(local_2c);
            pwVar8 = L"Error occurred opening %s";
            uVar10 = *(undefined4 *)GError_exref;
          }
          else {
            if (iVar5 == 3) {
              pwVar8 = L".uz2";
              puVar3 = FString::operator*(local_2c);
              (*pcVar7)(*(undefined4 *)GError_exref,L"Error occurred creating %s%s",puVar3,pwVar8);
              goto LAB_10719bc0;
            }
            puVar3 = FString::operator*(local_2c);
            pwVar8 = L"Error occurred compressing %s";
            uVar10 = *(undefined4 *)GError_exref;
          }
          (*pcVar7)(uVar10,pwVar8,puVar3);
        }
LAB_10719bc0:
        iVar5 = **(int **)GFileManager_exref;
        puVar3 = FString::operator*(local_2c);
        iVar6 = (**(code **)(iVar5 + 0x10))(puVar3);
        pFVar2 = (FString *)FString::operator+(local_2c,(ushort *)local_68);
        local_8._0_1_ = 6;
        iVar5 = **(int **)GFileManager_exref;
        puVar3 = FString::operator*(pFVar2);
        iVar5 = (**(code **)(iVar5 + 0x10))(puVar3);
        local_8._0_1_ = 5;
        FString::~FString(local_68);
        iVar6 = (iVar5 * 100) / iVar6;
        pwVar8 = L".uz2";
        puVar3 = FString::operator*(local_2c);
        puVar4 = FString::operator*(local_2c);
        FOutputDevice::Logf((FOutputDevice *)GWarn_exref,*(ushort **)GWarn_exref,
                            L"Compressed %s -> %s%s (%d%%)",puVar4,puVar3,pwVar8,iVar6);
        local_8 = CONCAT31(local_8._1_3_,4);
        FString::~FString(local_2c);
        pcVar7 = Logf_exref;
        local_18 = iVar1 + 1;
      }
      local_8._0_1_ = 2;
      thunk_FUN_107089c0(local_44);
      local_8 = CONCAT31(local_8._1_3_,1);
      FString::~FString(local_50);
    }
    iVar1 = ParseToken((ushort **)&stack0x00000004,(FString *)&local_38,0);
    if (iVar1 == 0) {
      local_8 = local_8 & 0xffffff00;
      FString::~FString((FString *)&local_38);
      ExceptionList = local_10;
      return 0;
    }
  } while( true );
}


// ==== 10719cd7 Catch@10719cd7

void Catch_10719cd7(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_10756c40);
}


// ==== 10719ceb Catch@10719ceb

void Catch_10719ceb(void)

{
  appUnwindf((ushort *)&DAT_10749e48,L"UCompressCommandlet::Main");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 10719de0 FUN_10719de0

AInternetLink * __fastcall FUN_10719de0(AInternetLink *param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10743ec8;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  AInternetLink::AInternetLink(param_1);
  *(undefined ***)param_1 = AUdpLink::vftable;
  ExceptionList = local_10;
  return param_1;
}


// ==== 10719e36 Catch@10719e36

void Catch_10719e36(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10756c40);
}


// ==== 10719e4a Catch@10719e4a

void Catch_10719e4a(void)

{
  appUnwindf((ushort *)&DAT_10749e48,L"AUdpLink::AUdpLink");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 10719e90 FUN_10719e90

void __fastcall FUN_10719e90(AActor *param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10743ee0;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  if (*(SOCKET *)(param_1 + 0x3c0) != 0xffffffff) {
    ExceptionList = &local_10;
    closesocket(*(SOCKET *)(param_1 + 0x3c0));
  }
  AActor::PostScriptDestroyed(param_1);
  ExceptionList = local_10;
  return;
}


// ==== 10719eeb Catch@10719eeb

void Catch_10719eeb(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10756c40);
}


// ==== 10719eff Catch@10719eff

void Catch_10719eff(void)

{
  appUnwindf((ushort *)&DAT_10749e48,L"AUdpLink::PostScriptDestroyed");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 10719f40 FUN_10719f40

void __thiscall FUN_10719f40(void *this,ushort *param_1,int *param_2)

{
  byte bVar1;
  ushort *puVar2;
  u_short uVar3;
  SOCKET s;
  int iVar4;
  uint uVar5;
  undefined2 extraout_var;
  FOutputDevice *extraout_ECX;
  FOutputDevice *extraout_ECX_00;
  FOutputDevice *extraout_ECX_01;
  FOutputDevice *extraout_ECX_02;
  FOutputDevice *this_00;
  FOutputDevice *this_01;
  FOutputDevice *pFVar6;
  wchar_t *pwVar7;
  sockaddr local_38;
  u_long local_20;
  char local_1c [4];
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puVar2 = param_1;
  puStack_c = &LAB_10743ef0;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffbc;
  local_8 = 0;
  local_18 = 0;
  bVar1 = **(byte **)(param_1 + 6);
  ExceptionList = &local_10;
  *(byte **)(param_1 + 6) = *(byte **)(param_1 + 6) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&local_18);
  param_1 = (ushort *)0x0;
  bVar1 = **(byte **)(puVar2 + 6);
  *(byte **)(puVar2 + 6) = *(byte **)(puVar2 + 6) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(puVar2,&param_1);
  *(int *)(puVar2 + 6) = *(int *)(puVar2 + 6) + 1;
  pFVar6 = extraout_ECX;
  if (**(char **)(puVar2 + 6) == 'B') {
    *(char **)(puVar2 + 6) = *(char **)(puVar2 + 6) + 1;
    (**(code **)(GNatives_exref + 0x108))(puVar2,0);
    pFVar6 = extraout_ECX_00;
  }
  if (DAT_1076a3f8 == 0) {
    pwVar7 = L"BindPort: winsock failed";
LAB_1071a131:
    FOutputDevice::Logf(pFVar6,puVar2,pwVar7);
    *param_2 = 0;
    ExceptionList = local_10;
    return;
  }
  if (*(int *)((int)this + 0x3c0) != -1) {
    pwVar7 = L"BindPort: already bound";
    goto LAB_1071a131;
  }
  s = socket(2,2,0x11);
  *(SOCKET *)((int)this + 0x3c0) = s;
  if (s == 0xffffffff) {
    pwVar7 = L"BindPort: socket failed";
    pFVar6 = extraout_ECX_01;
  }
  else {
    local_1c[0] = '\x01';
    local_1c[1] = '\0';
    local_1c[2] = '\0';
    local_1c[3] = '\0';
    iVar4 = setsockopt(s,0xffff,0x20,local_1c,4);
    if (iVar4 == 0) {
      local_38.sa_family = 2;
      uVar5 = thunk_FUN_10703e30(puVar2);
      local_38.sa_data._2_2_ = SUB42(uVar5,0);
      local_38.sa_data._4_2_ = SUB42(uVar5 >> 0x10,0);
      local_38.sa_data._0_2_ = htons((u_short)local_18);
      uVar3 = thunk_FUN_10703930(*(SOCKET *)((int)this + 0x3c0),&local_38,
                                 (-(uint)(param_1 != (ushort *)0x0) & 0x13) + 1,1);
      if (CONCAT22(extraout_var,uVar3) == 0) {
        FOutputDevice::Logf(this_00,puVar2,L"BindPort: bind failed");
      }
      else {
        local_20 = 1;
        iVar4 = ioctlsocket(*(SOCKET *)((int)this + 0x3c0),-0x7ffb9982,&local_20);
        if (iVar4 == 0) {
          *param_2 = CONCAT22(extraout_var,uVar3);
          uVar3 = ntohs(local_38.sa_data._0_2_);
          *(uint *)((int)this + 0x3c4) = (uint)uVar3;
          ExceptionList = local_10;
          return;
        }
        FOutputDevice::Logf(this_01,puVar2,L"BindPort: ioctlsocket failed");
      }
      goto LAB_1071a0f4;
    }
    pwVar7 = L"BindPort: setsockopt failed";
    pFVar6 = extraout_ECX_02;
  }
  FOutputDevice::Logf(pFVar6,puVar2,pwVar7);
LAB_1071a0f4:
  closesocket(*(SOCKET *)((int)this + 0x3c0));
  *(undefined4 *)((int)this + 0x3c0) = 0;
  *param_2 = 0;
  ExceptionList = local_10;
  return;
}


// ==== 1071a15a Catch@1071a15a

void Catch_1071a15a(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x20) = *(undefined4 *)(unaff_EBP + -0x24);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x20,&DAT_10756c40);
}


// ==== 1071a16e Catch@1071a16e

void Catch_1071a16e(void)

{
  appUnwindf((ushort *)&DAT_10749e48,L"AUdpLink::execBindPort");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 1071a220 FUN_1071a220

void __thiscall FUN_1071a220(void *this,ushort *param_1,undefined4 *param_2)

{
  byte bVar1;
  int iVar2;
  ushort *puVar3;
  wchar_t *pwVar4;
  FOutputDevice *this_00;
  char *pcVar5;
  int flags;
  sockaddr *to;
  int tolen;
  sockaddr local_40;
  FString local_30 [4];
  int local_2c;
  u_long local_24;
  u_short local_20;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  puStack_c = &LAB_10743f09;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffb4;
  local_8 = 0;
  bVar1 = **(byte **)(param_1 + 6);
  ExceptionList = &local_10;
  *(byte **)(param_1 + 6) = *(byte **)(param_1 + 6) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&local_24);
  FString::FString(local_30);
  local_8 = CONCAT31(local_8._1_3_,1);
  bVar1 = **(byte **)(param_1 + 6);
  *(byte **)(param_1 + 6) = *(byte **)(param_1 + 6) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,local_30);
  *(int *)(param_1 + 6) = *(int *)(param_1 + 6) + 1;
  if (**(char **)(param_1 + 6) == 'B') {
    *(char **)(param_1 + 6) = *(char **)(param_1 + 6) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  if (*(int *)((int)this + 0x3c0) != -1) {
    local_40.sa_family = 2;
    local_40.sa_data._0_2_ = htons(local_20);
    local_40.sa_data._2_4_ = htonl(local_24);
    if (local_2c == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = local_2c + -1;
    }
    tolen = 0x10;
    to = &local_40;
    flags = 0;
    pcVar5 = (char *)0x0;
    puVar3 = FString::operator*(local_30);
    pcVar5 = appToAnsi(puVar3,pcVar5);
    iVar2 = sendto(*(SOCKET *)((int)this + 0x3c0),pcVar5,iVar2,flags,to,tolen);
    if (iVar2 == -1) {
      iVar2 = WSAGetLastError();
      pwVar4 = thunk_FUN_1071b190(iVar2);
      FOutputDevice::Logf(this_00,param_1,L"SentText: sendto failed: %s",pwVar4);
      *param_2 = 0;
      local_8 = local_8 & 0xffffff00;
      FString::~FString(local_30);
      ExceptionList = local_10;
      return;
    }
  }
  *param_2 = 1;
  local_8 = local_8 & 0xffffff00;
  FString::~FString(local_30);
  ExceptionList = local_10;
  return;
}


// ==== 1071a38e Catch@1071a38e

void Catch_1071a38e(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10756c40);
}


// ==== 1071a3a2 Catch@1071a3a2

void Catch_1071a3a2(void)

{
  appUnwindf((ushort *)&DAT_10749e48,L"AUdpLink::execSendText");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 1071a430 FUN_1071a430

void FUN_1071a430(ushort *param_1,undefined4 *param_2)

{
  byte bVar1;
  ushort *puVar2;
  int iVar3;
  FOutputDevice *this;
  char *buf;
  char local_138 [256];
  sockaddr local_38;
  u_long local_24;
  u_short local_20;
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puVar2 = param_1;
  puStack_c = &LAB_10743f20;
  local_10 = ExceptionList;
  local_14 = &stack0xfffffebc;
  local_8 = 0;
  bVar1 = **(byte **)(param_1 + 6);
  ExceptionList = &local_10;
  *(byte **)(param_1 + 6) = *(byte **)(param_1 + 6) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&local_24);
  param_1 = (ushort *)0x0;
  bVar1 = **(byte **)(puVar2 + 6);
  *(byte **)(puVar2 + 6) = *(byte **)(puVar2 + 6) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(puVar2,&param_1);
  *(undefined4 *)GPropAddr_exref = 0;
  bVar1 = **(byte **)(puVar2 + 6);
  *(byte **)(puVar2 + 6) = *(byte **)(puVar2 + 6) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(puVar2,local_138);
  if (*(int *)GPropObject_exref != 0) {
    (**(code **)(**(int **)GPropObject_exref + 0x60))(*(undefined4 *)GProperty_exref);
  }
  if (*(int *)GPropAddr_exref == 0) {
    buf = local_138;
  }
  else {
    buf = *(char **)GPropAddr_exref;
  }
  *(int *)(puVar2 + 6) = *(int *)(puVar2 + 6) + 1;
  if (**(char **)(puVar2 + 6) == 'B') {
    *(char **)(puVar2 + 6) = *(char **)(puVar2 + 6) + 1;
    (**(code **)(GNatives_exref + 0x108))(puVar2,0);
  }
  if (*(int *)(local_18 + 0x3c0) != -1) {
    local_38.sa_family = 2;
    local_38.sa_data._0_2_ = htons(local_20);
    local_38.sa_data._2_4_ = htonl(local_24);
    iVar3 = sendto(*(SOCKET *)(local_18 + 0x3c0),buf,(int)param_1,0,&local_38,0x10);
    if (iVar3 == -1) {
      FOutputDevice::Logf(this,puVar2,L"SendBinary: sendto failed");
      *param_2 = 1;
      ExceptionList = local_10;
      return;
    }
  }
  *param_2 = 0;
  ExceptionList = local_10;
  return;
}


// ==== 1071a5b1 Catch@1071a5b1

void Catch_1071a5b1(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x24);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_10756c40);
}


// ==== 1071a5c5 Catch@1071a5c5

void Catch_1071a5c5(void)

{
  appUnwindf((ushort *)&DAT_10749e48,L"AUdpLink::execSendBinary");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 1071a650 FUN_1071a650

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

void FUN_1071a650(int param_1,int *param_2)

{
  SOCKET *pSVar1;
  byte bVar2;
  u_long *puVar3;
  u_short uVar4;
  int iVar5;
  u_long uVar6;
  ushort *puVar7;
  FOutputDevice *this;
  FString *this_00;
  char local_1048 [4096];
  sockaddr local_48;
  u_long local_38 [3];
  FString local_2c [16];
  u_long *local_1c;
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  puStack_c = &LAB_10743f39;
  local_10 = ExceptionList;
  local_14 = &stack0xffffefac;
  local_8 = 0;
  ExceptionList = &local_10;
  *(undefined4 *)GPropAddr_exref = 0;
  bVar2 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar2 * 4))(param_1,local_38);
  if (*(int *)GPropObject_exref != 0) {
    (**(code **)(**(int **)GPropObject_exref + 0x60))(*(undefined4 *)GProperty_exref);
  }
  if (*(int *)GPropAddr_exref == 0) {
    local_1c = local_38;
  }
  else {
    local_1c = *(u_long **)GPropAddr_exref;
  }
  FString::FString(local_2c);
  local_8 = CONCAT31(local_8._1_3_,1);
  *(undefined4 *)GPropAddr_exref = 0;
  bVar2 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar2 * 4))(param_1,local_2c);
  if (*(int *)GPropObject_exref != 0) {
    (**(code **)(**(int **)GPropObject_exref + 0x60))(*(undefined4 *)GProperty_exref);
  }
  if (*(int *)GPropAddr_exref == 0) {
    this_00 = local_2c;
  }
  else {
    this_00 = *(FString **)GPropAddr_exref;
  }
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  FString::operator=(this_00,(ushort *)&DAT_1074c080);
  pSVar1 = (SOCKET *)(local_18 + 0x3c0);
  if (*pSVar1 != 0xffffffff) {
    local_18 = 0x10;
    iVar5 = recvfrom(*pSVar1,local_1048,0x1000,0,&local_48,&local_18);
    if (iVar5 == -1) {
      *param_2 = 0;
      iVar5 = WSAGetLastError();
      if ((iVar5 != 0x2733) && (*(int *)GLog_exref != 0)) {
        FOutputDevice::Logf2
                  (this,*(EName *)GLog_exref,(ushort *)0x2f8,L"ReadText: Error reading text.");
      }
    }
    else {
      uVar6 = ntohl(CONCAT22(local_48.sa_data._4_2_,local_48.sa_data._2_2_));
      puVar3 = local_1c;
      *local_1c = uVar6;
      uVar4 = ntohs(local_48.sa_data._0_2_);
      puVar3[1] = (uint)uVar4;
      puVar7 = appFromAnsi(local_1048,(ushort *)0x0);
      FString::operator=(this_00,puVar7);
      *param_2 = iVar5;
    }
    local_8 = local_8 & 0xffffff00;
    FString::~FString(local_2c);
    ExceptionList = local_10;
    return;
  }
  *param_2 = 0;
  local_8 = local_8 & 0xffffff00;
  FString::~FString(local_2c);
  ExceptionList = local_10;
  return;
}


// ==== 1071a87e Catch@1071a87e

void Catch_1071a87e(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x1c) = *(undefined4 *)(unaff_EBP + -0x2c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x1c,&DAT_10756c40);
}


// ==== 1071a892 Catch@1071a892

void Catch_1071a892(void)

{
  int iVar1;
  ushort *puVar2;
  ushort *puVar3;
  int iVar4;
  int unaff_EBP;
  
  appUnwindf((ushort *)&DAT_10749e48,L"AUdpLink::execReadText");
  iVar1 = *(int *)(unaff_EBP + 8);
  iVar4 = *(int *)(iVar1 + 0xc) - *(int *)(*(UObject **)(iVar1 + 4) + 0x54);
  puVar2 = UObject::GetFullName(*(UObject **)(iVar1 + 4),(ushort *)0x0);
  puVar3 = UObject::GetFullName(*(UObject **)(iVar1 + 8),(ushort *)0x0);
  appUnwindf((ushort *)L"(%s @ %s : %04X)",puVar3,puVar2,iVar4);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 1071a980 FUN_1071a980

sockaddr * __thiscall FUN_1071a980(void *this,sockaddr *param_1)

{
  SOCKET s;
  sockaddr *name;
  u_short uVar1;
  uint uVar2;
  
  name = param_1;
  s = *(SOCKET *)((int)this + 0x3c0);
  *(SOCKET *)(param_1[1].sa_data + 2) = s;
  param_1 = (sockaddr *)0x10;
  getsockname(s,name,(int *)&param_1);
  uVar1 = ntohs(*(u_short *)name->sa_data);
  uVar2 = (uint)uVar1;
  name[1].sa_family = (short)uVar2;
  name[1].sa_data[0] = (char)(uVar2 >> 0x10);
  name[1].sa_data[1] = (char)(uVar2 >> 0x18);
  return name;
}


// ==== 1071a9d0 FUN_1071a9d0

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

int __thiscall FUN_1071a9d0(void *this,float param_1,ELevelTick param_2)

{
  char cVar1;
  u_short uVar2;
  int iVar3;
  int iVar4;
  u_long uVar5;
  ushort *puVar6;
  char local_1144 [4096];
  fd_set local_144;
  sockaddr local_40;
  u_long local_2c;
  uint local_28;
  FString local_20 [4];
  timeval local_1c;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_10743f62;
  local_10 = ExceptionList;
  local_1c.tv_usec = 0x1071a9f3;
  local_14 = &stack0xffffeeb0;
  local_8 = 0;
  ExceptionList = &local_10;
  iVar3 = AInternetLink::Tick(this,param_1,param_2);
  local_144.fd_array[0] = *(SOCKET *)((int)this + 0x3c0);
  if (local_144.fd_array[0] != 0xffffffff) {
    if (*(char *)((int)this + 0x3d4) == '\x01') {
      param_2 = 0x10;
      iVar4 = recvfrom(local_144.fd_array[0],local_1144,0xfff,0,&local_40,(int *)&param_2);
      if (iVar4 != -1) {
        uVar5 = ntohl(CONCAT22(local_40.sa_data._4_2_,local_40.sa_data._2_2_));
        local_2c = uVar5;
        uVar2 = ntohs(local_40.sa_data._0_2_);
        local_28 = (uint)uVar2;
        cVar1 = *(char *)((int)this + 0x3bc);
        if (cVar1 == '\0') {
          local_1144[iVar4] = '\0';
          puVar6 = appFromAnsi(local_1144,(ushort *)0x0);
          FString::FString(local_20,puVar6);
          local_8._0_1_ = 1;
          AUdpLink::eventReceivedText(this,uVar5,local_28,local_20);
          local_8 = (uint)local_8._1_3_ << 8;
          FString::~FString(local_20);
        }
        else if (cVar1 == '\x01') {
          local_1144[iVar4] = '\0';
          puVar6 = appFromAnsi(local_1144,(ushort *)0x0);
          FString::FString(local_20,puVar6);
          local_8._0_1_ = 2;
          AUdpLink::eventReceivedLine(this,uVar5,local_28,local_20);
          local_8 = (uint)local_8._1_3_ << 8;
          FString::~FString(local_20);
        }
        else if (cVar1 == '\x02') {
          AUdpLink::eventReceivedBinary(this,uVar5,local_28,iVar4,local_1144);
        }
      }
    }
    else if (*(char *)((int)this + 0x3d4) == '\0') {
      local_1c.tv_sec = 0;
      local_1c.tv_usec = 0;
      local_144.fd_count = 1;
      iVar4 = select(local_144.fd_array[0] + 1,&local_144,(fd_set *)0x0,(fd_set *)0x0,&local_1c);
      if ((iVar4 == 0) || (iVar4 == -1)) {
        *(undefined4 *)((int)this + 0x3d0) = 0;
      }
      else {
        *(undefined4 *)((int)this + 0x3d0) = 1;
      }
    }
  }
  ExceptionList = local_10;
  return iVar3;
}


// ==== 1071ab95 Catch@1071ab95

void Catch_1071ab95(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x20) = *(undefined4 *)(unaff_EBP + -0x2c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x20,&DAT_10756c40);
}


// ==== 1071aba9 Catch@1071aba9

void Catch_1071aba9(void)

{
  appUnwindf((ushort *)&DAT_10749e48,L"AUdpLink::Tick");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 1071ac50 FUN_1071ac50

void FUN_1071ac50(int param_1,int *param_2)

{
  SOCKET *pSVar1;
  byte bVar2;
  u_long *puVar3;
  u_short uVar4;
  int iVar5;
  u_long uVar6;
  FOutputDevice *this;
  char *buf;
  char local_140 [256];
  sockaddr local_40;
  u_long local_2c [3];
  int local_20;
  u_long *local_1c;
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10743f80;
  local_10 = ExceptionList;
  local_14 = &stack0xfffffeb4;
  local_8 = 0;
  ExceptionList = &local_10;
  *(undefined4 *)GPropAddr_exref = 0;
  bVar2 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar2 * 4))(param_1,local_2c);
  if (*(int *)GPropObject_exref != 0) {
    (**(code **)(**(int **)GPropObject_exref + 0x60))(*(undefined4 *)GProperty_exref);
  }
  if (*(int *)GPropAddr_exref == 0) {
    local_1c = local_2c;
  }
  else {
    local_1c = *(u_long **)GPropAddr_exref;
  }
  local_20 = 0;
  bVar2 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar2 * 4))(param_1,&local_20);
  *(undefined4 *)GPropAddr_exref = 0;
  bVar2 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar2 * 4))(param_1,local_140);
  if (*(int *)GPropObject_exref != 0) {
    (**(code **)(**(int **)GPropObject_exref + 0x60))(*(undefined4 *)GProperty_exref);
  }
  if (*(int *)GPropAddr_exref == 0) {
    buf = local_140;
  }
  else {
    buf = *(char **)GPropAddr_exref;
  }
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  pSVar1 = (SOCKET *)(local_18 + 0x3c0);
  if (*pSVar1 != 0xffffffff) {
    local_18 = 0x10;
    iVar5 = local_20;
    if (0xff < local_20) {
      iVar5 = 0xff;
    }
    iVar5 = recvfrom(*pSVar1,buf,iVar5,0,&local_40,&local_18);
    if (iVar5 == -1) {
      *param_2 = 0;
      iVar5 = WSAGetLastError();
      if ((iVar5 != 0x2733) && (*(int *)GLog_exref != 0)) {
        FOutputDevice::Logf2
                  (this,*(EName *)GLog_exref,(ushort *)0x2f8,L"ReadBinary: Error reading text.");
        ExceptionList = local_10;
        return;
      }
    }
    else {
      uVar6 = ntohl(CONCAT22(local_40.sa_data._4_2_,local_40.sa_data._2_2_));
      puVar3 = local_1c;
      *local_1c = uVar6;
      uVar4 = ntohs(local_40.sa_data._0_2_);
      puVar3[1] = (uint)uVar4;
      *param_2 = iVar5;
    }
    ExceptionList = local_10;
    return;
  }
  *param_2 = 0;
  ExceptionList = local_10;
  return;
}


// ==== 1071ae4b Catch@1071ae4b

void Catch_1071ae4b(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x20) = *(undefined4 *)(unaff_EBP + -0x2c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x20,&DAT_10756c40);
}


// ==== 1071ae5f Catch@1071ae5f

void Catch_1071ae5f(void)

{
  int iVar1;
  ushort *puVar2;
  ushort *puVar3;
  int iVar4;
  int unaff_EBP;
  
  appUnwindf((ushort *)&DAT_10749e48,L"AUdpLink::execReadBinary");
  iVar1 = *(int *)(unaff_EBP + 8);
  iVar4 = *(int *)(iVar1 + 0xc) - *(int *)(*(UObject **)(iVar1 + 4) + 0x54);
  puVar2 = UObject::GetFullName(*(UObject **)(iVar1 + 4),(ushort *)0x0);
  puVar3 = UObject::GetFullName(*(UObject **)(iVar1 + 8),(ushort *)0x0);
  appUnwindf((ushort *)L"(%s @ %s : %04X)",puVar3,puVar2,iVar4);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 1071af40 FUN_1071af40

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_1071af40(void)

{
  undefined4 *puVar1;
  FName local_1c [8];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10743f90;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffd4;
  local_8 = 0;
  ExceptionList = &local_10;
  puVar1 = (undefined4 *)FName::FName(local_1c,(ushort *)L"Resolved",2);
  _IPDRV_Resolved = *puVar1;
  puVar1 = (undefined4 *)FName::FName(local_1c,(ushort *)L"ResolveFailed",2);
  _IPDRV_ResolveFailed = *puVar1;
  puVar1 = (undefined4 *)FName::FName(local_1c,(ushort *)L"ReceivedText",2);
  _IPDRV_ReceivedText = *puVar1;
  puVar1 = (undefined4 *)FName::FName(local_1c,(ushort *)L"ReceivedLine",2);
  _IPDRV_ReceivedLine = *puVar1;
  puVar1 = (undefined4 *)FName::FName(local_1c,(ushort *)L"ReceivedBinary",2);
  _IPDRV_ReceivedBinary = *puVar1;
  puVar1 = (undefined4 *)FName::FName(local_1c,(ushort *)L"Accepted",2);
  _IPDRV_Accepted = *puVar1;
  puVar1 = (undefined4 *)FName::FName(local_1c,(ushort *)L"Opened",2);
  _IPDRV_Opened = *puVar1;
  puVar1 = (undefined4 *)FName::FName(local_1c,(ushort *)L"Closed",2);
  _IPDRV_Closed = *puVar1;
  puVar1 = (undefined4 *)FName::FName(local_1c,(ushort *)L"GetMasterServer",2);
  _IPDRV_GetMasterServer = *puVar1;
  puVar1 = (undefined4 *)FName::FName(local_1c,(ushort *)L"ConnectionFailed",2);
  _IPDRV_ConnectionFailed = *puVar1;
  puVar1 = (undefined4 *)FName::FName(local_1c,(ushort *)L"Refresh",2);
  _IPDRV_Refresh = *puVar1;
  puVar1 = (undefined4 *)FName::FName(local_1c,(ushort *)L"LogStatLine",2);
  _IPDRV_LogStatLine = *puVar1;
  puVar1 = (undefined4 *)FName::FName(local_1c,(ushort *)L"OnReceivedPingInfo",2);
  _IPDRV_OnReceivedPingInfo = *puVar1;
  puVar1 = (undefined4 *)FName::FName(local_1c,(ushort *)L"OnPingTimeout",2);
  _IPDRV_OnPingTimeout = *puVar1;
  puVar1 = (undefined4 *)FName::FName(local_1c,(ushort *)L"OnQueryFinished",2);
  _IPDRV_OnQueryFinished = *puVar1;
  puVar1 = (undefined4 *)FName::FName(local_1c,(ushort *)L"OnReceivedServer",2);
  _IPDRV_OnReceivedServer = *puVar1;
  puVar1 = (undefined4 *)FName::FName(local_1c,(ushort *)L"OnReceivedMOTDData",2);
  _IPDRV_OnReceivedMOTDData = *puVar1;
  if (DAT_1076c318 == 0) {
    DAT_1076c318 = 1;
  }
  ExceptionList = local_10;
  return DAT_1076a3f8;
}


// ==== 1071b0e5 Catch@1071b0e5

void Catch_1071b0e5(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10756c40);
}


// ==== 1071b0f9 Catch@1071b0f9

void Catch_1071b0f9(void)

{
  appUnwindf((ushort *)&DAT_10749e48,L"InitSockets");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 1071b190 FUN_1071b190

wchar_t * __cdecl FUN_1071b190(int param_1)

{
  if (param_1 == -1) {
    param_1 = WSAGetLastError();
  }
  if (param_1 < 0x2715) {
    if (param_1 == 0x2714) {
      return L"WSAEINTR";
    }
    if (param_1 == 0) {
      return L"WSANO_ERROR";
    }
  }
  else if (param_1 < 0x2afa) {
    if (param_1 == 0x2af9) {
      return L"WSAHOST_NOT_FOUND";
    }
    switch(param_1) {
    case 0x2719:
      return L"WSAEBADF";
    case 0x271d:
      return L"WSAEACCES";
    case 0x271e:
      return L"WSAEFAULT";
    case 0x2726:
      return L"WSAEINVAL";
    case 0x2728:
      return L"WSAEMFILE";
    case 0x2733:
      return L"WSAEWOULDBLOCK";
    case 0x2734:
      return L"WSAEINPROGRESS";
    case 0x2735:
      return L"WSAEALREADY";
    case 0x2736:
      return L"WSAENOTSOCK";
    case 0x2737:
      return L"WSAEDESTADDRREQ";
    case 0x2738:
      return L"WSAEMSGSIZE";
    case 0x2739:
      return L"WSAEPROTOTYPE";
    case 0x273a:
      return L"WSAENOPROTOOPT";
    case 0x273b:
      return L"WSAEPROTONOSUPPORT";
    case 0x273c:
      return L"WSAESOCKTNOSUPPORT";
    case 0x273d:
      return L"WSAEOPNOTSUPP";
    case 0x273e:
      return L"WSAEPFNOSUPPORT";
    case 0x273f:
      return L"WSAEAFNOSUPPORT";
    case 0x2740:
      return L"WSAEADDRINUSE";
    case 0x2741:
      return L"WSAEADDRNOTAVAIL";
    case 0x2742:
      return L"WSAENETDOWN";
    case 0x2743:
      return L"WSAENETUNREACH";
    case 0x2744:
      return L"WSAENETRESET";
    case 0x2745:
      return L"WSAECONNABORTED";
    case 0x2746:
      return L"WSAECONNRESET";
    case 0x2747:
      return L"WSAENOBUFS";
    case 0x2748:
      return L"WSAEISCONN";
    case 0x2749:
      return L"WSAENOTCONN";
    case 0x274a:
      return L"WSAESHUTDOWN";
    case 0x274b:
      return L"WSAETOOMANYREFS";
    case 0x274c:
      return L"WSAETIMEDOUT";
    case 0x274d:
      return L"WSAECONNREFUSED";
    case 0x274e:
      return L"WSAELOOP";
    case 0x274f:
      return L"WSAENAMETOOLONG";
    case 0x2750:
      return L"WSAEHOSTDOWN";
    case 0x2751:
      return L"WSAEHOSTUNREACH";
    case 0x2752:
      return L"WSAENOTEMPTY";
    case 0x2753:
      return L"WSAEPROCLIM";
    case 0x2754:
      return L"WSAEUSERS";
    case 0x2755:
      return L"WSAEDQUOT";
    case 0x2756:
      return L"WSAESTALE";
    case 0x2757:
      return L"WSAEREMOTE";
    case 0x276b:
      return L"WSASYSNOTREADY";
    case 0x276c:
      return L"WSAVERNOTSUPPORTED";
    case 0x276d:
      return L"WSANOTINITIALISED";
    case 0x2775:
      return L"WSAEDISCON";
    }
  }
  else {
    if (param_1 == 0x2afa) {
      return L"WSATRY_AGAIN";
    }
    if (param_1 == 0x2afb) {
      return L"WSANO_RECOVERY";
    }
    if (param_1 == 0x2afc) {
      return L"WSANO_DATA";
    }
  }
  return L"WSA_Unknown";
}


// ==== 1071b500 FUN_1071b500

undefined4 __cdecl FUN_1071b500(short *param_1,short *param_2)

{
  if (((*(int *)(param_1 + 2) == *(int *)(param_2 + 2)) && (param_1[1] == param_2[1])) &&
     (*param_1 == *param_2)) {
    return 1;
  }
  return 0;
}


// ==== 1071b580 FUN_1071b580

void __cdecl
FUN_1071b580(undefined1 *param_1,undefined1 param_2,undefined1 param_3,undefined1 param_4,
            undefined1 param_5)

{
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = param_4;
  param_1[3] = param_5;
  return;
}


// ==== 1071b5b0 FUN_1071b5b0

void __cdecl FUN_1071b5b0(undefined4 param_1,undefined4 *param_2)

{
  *param_2 = param_1;
  return;
}


// ==== 1071b5c0 FUN_1071b5c0

void __cdecl FUN_1071b5c0(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = param_2;
  return;
}


// ==== 1071b5d0 FUN_1071b5d0

FString * __cdecl FUN_1071b5d0(FString *param_1,uint param_2,int param_3)

{
  FString *pFVar1;
  FString local_2c [20];
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10743fc3;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffc8;
  local_18 = 0;
  local_8 = 1;
  ExceptionList = &local_10;
  FString::Printf((ushort *)param_1,L"%i.%i.%i.%i",param_2 & 0xff,param_2 >> 8 & 0xff,
                  param_2 >> 0x10 & 0xff,param_2 >> 0x18);
  local_18 = 1;
  if (param_3 != 0) {
    pFVar1 = (FString *)FString::Printf((ushort *)local_2c,&DAT_10751788,param_3);
    local_8._0_1_ = 2;
    FString::operator+=(param_1,pFVar1);
    local_8 = CONCAT31(local_8._1_3_,1);
    FString::~FString(local_2c);
  }
  ExceptionList = local_10;
  return param_1;
}


// ==== 1071b679 Catch@1071b679

void Catch_1071b679(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_10756c40);
}


// ==== 1071b68d Catch@1071b68d

void Catch_1071b68d(void)

{
  appUnwindf((ushort *)&DAT_10749e48,L"IpString");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 1071b6e0 FUN_1071b6e0

bool __cdecl FUN_1071b6e0(SOCKET param_1)

{
  int iVar1;
  u_long local_4;
  
  local_4 = 1;
  iVar1 = ioctlsocket(param_1,-0x7ffb9982,&local_4);
  return (bool)('\x01' - (iVar1 != 0));
}


// ==== 1071b710 FUN_1071b710

void __cdecl FUN_1071b710(SOCKET param_1,uint param_2)

{
  param_2 = (uint)(param_2 != 0);
  setsockopt(param_1,0xffff,4,(char *)&param_2,4);
  return;
}


// ==== 1071b740 FUN_1071b740

bool __cdecl FUN_1071b740(SOCKET param_1)

{
  int iVar1;
  char local_4 [4];
  
  local_4[0] = '\x01';
  local_4[1] = '\0';
  local_4[2] = '\0';
  local_4[3] = '\0';
  iVar1 = setsockopt(param_1,0xffff,0x80,local_4,4);
  return (bool)('\x01' - (iVar1 != 0));
}


// ==== 1071b780 FUN_1071b780

undefined4 FUN_1071b780(void)

{
  return 0;
}


// ==== 1071b790 FUN_1071b790

FString * __thiscall FUN_1071b790(void *this,FString *param_1,int param_2)

{
  u_short uVar1;
  uint uVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10743ffa;
  local_c = ExceptionList;
  if (param_2 == 0) {
    uVar2 = 0;
    ExceptionList = &local_c;
  }
  else {
    ExceptionList = &local_c;
    uVar1 = ntohs(*(u_short *)((int)this + 2));
    uVar2 = (uint)uVar1;
  }
  thunk_FUN_1071b5d0(param_1,*(uint *)((int)this + 4),uVar2);
  ExceptionList = local_c;
  return param_1;
}


// ==== 1071b820 FUN_1071b820

u_long * __thiscall FUN_1071b820(void *this,undefined4 param_1,u_long param_2)

{
  u_short uVar1;
  u_long uVar2;
  
  uVar2 = ntohl(param_2);
  *(u_long *)this = uVar2;
  uVar1 = ntohs(param_1._2_2_);
  *(uint *)((int)this + 4) = (uint)uVar1;
  return this;
}


// ==== 1071b850 FUN_1071b850

FString * __thiscall FUN_1071b850(void *this,FString *param_1,int param_2)

{
  u_long uVar1;
  int iVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1074402a;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  uVar1 = htonl(*(u_long *)this);
  if (param_2 == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)((int)this + 4);
  }
  thunk_FUN_1071b5d0(param_1,uVar1,iVar2);
  ExceptionList = local_c;
  return param_1;
}


// ==== 1071b8e0 FUN_1071b8e0

undefined2 * __thiscall FUN_1071b8e0(void *this,undefined2 *param_1)

{
  u_short uVar1;
  u_long uVar2;
  
  uVar1 = *(u_short *)((int)this + 4);
  *param_1 = 2;
  uVar1 = htons(uVar1);
  uVar2 = *(u_long *)this;
  param_1[1] = uVar1;
  uVar2 = htonl(uVar2);
  *(u_long *)(param_1 + 2) = uVar2;
  return param_1;
}


// ==== 1071ba62 WSOCK32.DLL::ntohl thunk -> EXTERNAL:00000019

// ==== 1071ba68 WSOCK32.DLL::inet_addr thunk -> EXTERNAL:00000018

// ==== 1071ba6e WSOCK32.DLL::ntohs thunk -> EXTERNAL:00000017

// ==== 1071ba74 WSOCK32.DLL::getsockname thunk -> EXTERNAL:00000016

// ==== 1071ba7a WSOCK32.DLL::htons thunk -> EXTERNAL:00000015

// ==== 1071ba80 WSOCK32.DLL::bind thunk -> EXTERNAL:00000014

// ==== 1071ba86 WSOCK32.DLL::gethostbyname thunk -> EXTERNAL:00000013

// ==== 1071ba8c WSOCK32.DLL::gethostname thunk -> EXTERNAL:00000012

// ==== 1071ba92 WSOCK32.DLL::WSAGetLastError thunk -> EXTERNAL:00000011

// ==== 1071ba98 WSOCK32.DLL::recv thunk -> EXTERNAL:00000010

// ==== 1071ba9e WSOCK32.DLL::closesocket thunk -> EXTERNAL:0000000f

// ==== 1071baa4 WSOCK32.DLL::send thunk -> EXTERNAL:0000000e

// ==== 1071baaa WSOCK32.DLL::select thunk -> EXTERNAL:0000000d

// ==== 1071bab0 WSOCK32.DLL::connect thunk -> EXTERNAL:0000000c

// ==== 1071bab6 WSOCK32.DLL::socket thunk -> EXTERNAL:0000000b

// ==== 1071babc WSOCK32.DLL::htonl thunk -> EXTERNAL:0000000a

// ==== 1071bac2 WSOCK32.DLL::listen thunk -> EXTERNAL:00000009

// ==== 1071bac8 WSOCK32.DLL::accept thunk -> EXTERNAL:00000008

// ==== 1071bace WSOCK32.DLL::__WSAFDIsSet thunk -> EXTERNAL:00000007

// ==== 1071bad4 WSOCK32.DLL::setsockopt thunk -> EXTERNAL:00000006

// ==== 1071bada WSOCK32.DLL::sendto thunk -> EXTERNAL:00000005

// ==== 1071bae0 WSOCK32.DLL::recvfrom thunk -> EXTERNAL:00000004

// ==== 1071bae6 WSOCK32.DLL::shutdown thunk -> EXTERNAL:00000003

// ==== 1071baec WSOCK32.DLL::ioctlsocket thunk -> EXTERNAL:00000002

// ==== 1071baf2 WSOCK32.DLL::getsockopt thunk -> EXTERNAL:00000001

// ==== 1071bb10 CORE.DLL::FArchive::Serialize thunk -> EXTERNAL:0000003a

// ==== 1071bb16 CORE.DLL::FArchive::SerializeBits thunk -> EXTERNAL:0000003b

// ==== 1071bb1c CORE.DLL::FArchive::SerializeInt thunk -> EXTERNAL:0000003c

// ==== 1071bb22 CORE.DLL::FArchive::Preload thunk -> EXTERNAL:0000003d

// ==== 1071bb28 CORE.DLL::FArchive::CountBytes thunk -> EXTERNAL:0000003e

// ==== 1071bb2e CORE.DLL::FArchive::operator<< thunk -> EXTERNAL:0000003f

// ==== 1071bb34 CORE.DLL::FArchive::operator<< thunk -> EXTERNAL:00000040

// ==== 1071bb3a CORE.DLL::FArchive::MapName thunk -> EXTERNAL:00000041

// ==== 1071bb40 CORE.DLL::FArchive::MapObject thunk -> EXTERNAL:00000042

// ==== 1071bb46 CORE.DLL::FArchive::Tell thunk -> EXTERNAL:00000043

// ==== 1071bb4c CORE.DLL::FArchive::TotalSize thunk -> EXTERNAL:00000044

// ==== 1071bb52 CORE.DLL::FArchive::AtEnd thunk -> EXTERNAL:00000045

// ==== 1071bb58 CORE.DLL::FArchive::AtStopper thunk -> EXTERNAL:00000046

// ==== 1071bb5e CORE.DLL::FArchive::SetStopper thunk -> EXTERNAL:00000047

// ==== 1071bb64 CORE.DLL::FArchive::Seek thunk -> EXTERNAL:00000048

// ==== 1071bb6a CORE.DLL::FArchive::AttachLazyLoader thunk -> EXTERNAL:00000049

// ==== 1071bb70 CORE.DLL::FArchive::DetachLazyLoader thunk -> EXTERNAL:0000004a

// ==== 1071bb76 CORE.DLL::FArchive::AttachRoughLoader thunk -> EXTERNAL:0000004b

// ==== 1071bb7c CORE.DLL::FArchive::DetachRoughLoader thunk -> EXTERNAL:0000004c

// ==== 1071bb82 CORE.DLL::FArchive::Precache thunk -> EXTERNAL:0000004d

// ==== 1071bb88 CORE.DLL::FArchive::Flush thunk -> EXTERNAL:0000004e

// ==== 1071bb8e CORE.DLL::FArchive::Close thunk -> EXTERNAL:0000004f

// ==== 1071bb94 CORE.DLL::FArchive::GetError thunk -> EXTERNAL:00000050

// ==== 1071bb9a CORE.DLL::FArchive::GetCurrentEncryptVersion thunk -> EXTERNAL:00000051

// ==== 1071bc1e CORE.DLL::UObject::QueryInterface thunk -> EXTERNAL:0000006a

// ==== 1071bc24 CORE.DLL::UObject::AddRef thunk -> EXTERNAL:0000006b

// ==== 1071bc2a CORE.DLL::UObject::Release thunk -> EXTERNAL:0000006c

// ==== 1071bc30 CORE.DLL::UObject::ProcessDelegate thunk -> EXTERNAL:0000006d

// ==== 1071bc36 CORE.DLL::UObject::Modify thunk -> EXTERNAL:0000006e

// ==== 1071bc3c CORE.DLL::UObject::GotoState thunk -> EXTERNAL:0000006f

// ==== 1071bc42 CORE.DLL::UObject::GotoLabel thunk -> EXTERNAL:00000070

// ==== 1071bc48 CORE.DLL::UObject::ShutdownAfterError thunk -> EXTERNAL:00000071

// ==== 1071bc4e CORE.DLL::UObject::CallFunction thunk -> EXTERNAL:00000072

// ==== 1071bc54 CORE.DLL::UObject::ScriptConsoleExec thunk -> EXTERNAL:00000073

// ==== 1071bc5a CORE.DLL::UObject::Register thunk -> EXTERNAL:00000074

// ==== 1071bc60 CORE.DLL::UObject::LanguageChange thunk -> EXTERNAL:00000075

// ==== 1071bc66 CORE.DLL::UObject::Rename thunk -> EXTERNAL:00000076

// ==== 1071bcba CORE.DLL::UObject::ProcessEvent thunk -> EXTERNAL:00000087

// ==== 1071bcc0 CORE.DLL::UObject::ProcessState thunk -> EXTERNAL:00000088

// ==== 1071bcc6 CORE.DLL::UObject::ProcessRemoteFunction thunk -> EXTERNAL:00000089

// ==== 1071bccc CORE.DLL::UField::PostLoad thunk -> EXTERNAL:0000008a

// ==== 1071bcd2 CORE.DLL::UObject::Destroy thunk -> EXTERNAL:0000008b

// ==== 1071bcd8 CORE.DLL::UStrProperty::Serialize thunk -> EXTERNAL:0000008c

// ==== 1071bcde CORE.DLL::UObject::IsPendingKill thunk -> EXTERNAL:0000008d

// ==== 1071bce4 CORE.DLL::UObject::InitExecution thunk -> EXTERNAL:0000001a

// ==== 1071bcea CORE.DLL::UObject::PostEditChange thunk -> EXTERNAL:0000008e

// ==== 1071bcf0 CORE.DLL::UField::Register thunk -> EXTERNAL:0000008f

// ==== 1071bcf6 CORE.DLL::UObject::ClearL2Game thunk -> EXTERNAL:00000090

// ==== 1071bcfc CORE.DLL::UObject::NetDirty thunk -> EXTERNAL:00000091

// ==== 1071bd02 CORE.DLL::UObject::IsLoaded thunk -> EXTERNAL:00000092

// ==== 1071bd08 CORE.DLL::UField::AddCppProperty thunk -> EXTERNAL:00000093

// ==== 1071bd0e CORE.DLL::UField::MergeBools thunk -> EXTERNAL:00000094

// ==== 1071bd14 CORE.DLL::UField::Bind thunk -> EXTERNAL:00000095

// ==== 1071bd1a CORE.DLL::UField::GetOwnerClass thunk -> EXTERNAL:00000096

// ==== 1071bd20 CORE.DLL::UField::GetPropertiesSize thunk -> EXTERNAL:00000097

// ==== 1071bd26 CORE.DLL::UProperty::CleanupDestroyed thunk -> EXTERNAL:00000098

// ==== 1071bd2c CORE.DLL::UStrProperty::Link thunk -> EXTERNAL:00000099

// ==== 1071bd32 CORE.DLL::UStrProperty::Identical thunk -> EXTERNAL:0000009a

// ==== 1071bd38 CORE.DLL::UProperty::ExportCpp thunk -> EXTERNAL:0000009b

// ==== 1071bd3e CORE.DLL::UStrProperty::ExportCppItem thunk -> EXTERNAL:0000009c

// ==== 1071bd44 CORE.DLL::UStrProperty::SerializeItem thunk -> EXTERNAL:0000009d

// ==== 1071bd4a CORE.DLL::UProperty::NetSerializeItem thunk -> EXTERNAL:0000009e

// ==== 1071bd50 CORE.DLL::UStrProperty::ExportTextItem thunk -> EXTERNAL:0000009f

// ==== 1071bd56 CORE.DLL::UStrProperty::ImportText thunk -> EXTERNAL:000000a0

// ==== 1071bd5c CORE.DLL::UProperty::ExportText thunk -> EXTERNAL:000000a1

// ==== 1071bd62 CORE.DLL::UStrProperty::CopySingleValue thunk -> EXTERNAL:000000a2

// ==== 1071bd68 CORE.DLL::UProperty::CopyCompleteValue thunk -> EXTERNAL:000000a3

// ==== 1071bd6e CORE.DLL::UStrProperty::DestroyValue thunk -> EXTERNAL:000000a4

// ==== 1071bd74 CORE.DLL::UProperty::Port thunk -> EXTERNAL:000000a5

// ==== 1071bd7a CORE.DLL::UProperty::GetID thunk -> EXTERNAL:000000a6

// ==== 1071bd80 CORE.DLL::UProperty::Serialize thunk -> EXTERNAL:000000a7

// ==== 1071bd86 CORE.DLL::UIntProperty::Link thunk -> EXTERNAL:000000a8

// ==== 1071bd8c CORE.DLL::UIntProperty::Identical thunk -> EXTERNAL:000000a9

// ==== 1071bd92 CORE.DLL::UIntProperty::ExportCppItem thunk -> EXTERNAL:000000aa

// ==== 1071bd98 CORE.DLL::UIntProperty::SerializeItem thunk -> EXTERNAL:000000ab

// ==== 1071bd9e CORE.DLL::UIntProperty::NetSerializeItem thunk -> EXTERNAL:000000ac

// ==== 1071bda4 CORE.DLL::UIntProperty::ExportTextItem thunk -> EXTERNAL:000000ad

// ==== 1071bdaa CORE.DLL::UIntProperty::ImportText thunk -> EXTERNAL:000000ae

// ==== 1071bdb0 CORE.DLL::UIntProperty::CopySingleValue thunk -> EXTERNAL:000000af

// ==== 1071bdb6 CORE.DLL::UIntProperty::CopyCompleteValue thunk -> EXTERNAL:000000b0

// ==== 1071bdbc CORE.DLL::UProperty::DestroyValue thunk -> EXTERNAL:000000b1

// ==== 1071bdc2 CORE.DLL::UBoolProperty::Serialize thunk -> EXTERNAL:000000b2

// ==== 1071bdc8 CORE.DLL::UBoolProperty::Link thunk -> EXTERNAL:000000b3

// ==== 1071bdce CORE.DLL::UBoolProperty::Identical thunk -> EXTERNAL:000000b4

// ==== 1071bdd4 CORE.DLL::UBoolProperty::ExportCppItem thunk -> EXTERNAL:000000b5

// ==== 1071bdda CORE.DLL::UBoolProperty::SerializeItem thunk -> EXTERNAL:000000b6

// ==== 1071bde0 CORE.DLL::UBoolProperty::NetSerializeItem thunk -> EXTERNAL:000000b7

// ==== 1071bde6 CORE.DLL::UBoolProperty::ExportTextItem thunk -> EXTERNAL:000000b8

// ==== 1071bdec CORE.DLL::UBoolProperty::ImportText thunk -> EXTERNAL:000000b9

// ==== 1071bdf2 CORE.DLL::UBoolProperty::CopySingleValue thunk -> EXTERNAL:000000ba

// ==== 1071be82 CORE.DLL::UObject::PostLoad thunk -> EXTERNAL:000000d2

// ==== 1071bee8 CORE.DLL::FOutputDevice::Flush thunk -> EXTERNAL:00000030

// ==== 1071beee CORE.DLL::FOutputDevice::Release thunk -> EXTERNAL:0000002f

// ==== 1071bef4 CORE.DLL::USubsystem::Tick thunk -> EXTERNAL:0000002e

// ==== 1071bf3c CORE.DLL::UObject::Serialize thunk -> EXTERNAL:00000022

// ==== 1071bf7e ENGINE.DLL::AActor::ProcessEvent thunk -> EXTERNAL:00000106

// ==== 1071bf84 ENGINE.DLL::AActor::ProcessState thunk -> EXTERNAL:00000107

// ==== 1071bf8a ENGINE.DLL::AActor::ProcessRemoteFunction thunk -> EXTERNAL:00000108

// ==== 1071bf90 ENGINE.DLL::AActor::PostLoad thunk -> EXTERNAL:00000109

// ==== 1071bf96 ENGINE.DLL::AActor::Serialize thunk -> EXTERNAL:0000010a

// ==== 1071bf9c ENGINE.DLL::AActor::IsPendingKill thunk -> EXTERNAL:0000010b

// ==== 1071bfa2 ENGINE.DLL::AActor::InitExecution thunk -> EXTERNAL:0000010c

// ==== 1071bfa8 ENGINE.DLL::AActor::PostEditChange thunk -> EXTERNAL:0000010d

// ==== 1071bfae ENGINE.DLL::AActor::ClearL2Game thunk -> EXTERNAL:0000010e

// ==== 1071bfb4 ENGINE.DLL::AActor::NetDirty thunk -> EXTERNAL:0000010f

// ==== 1071bfba ENGINE.DLL::AActor::IsLoaded thunk -> EXTERNAL:00000110

// ==== 1071bfc0 ENGINE.DLL::AActor::GetOptimizedRepList thunk -> EXTERNAL:00000111

// ==== 1071bfc6 ENGINE.DLL::AActor::GetPlayerPawn thunk -> EXTERNAL:00000112

// ==== 1071bfcc ENGINE.DLL::AActor::IsPlayer thunk -> EXTERNAL:00000113

// ==== 1071bfd2 ENGINE.DLL::AActor::GetPawn thunk -> EXTERNAL:00000114

// ==== 1071bfd8 ENGINE.DLL::AActor::GetLight thunk -> EXTERNAL:00000115

// ==== 1071bfde ENGINE.DLL::AActor::GetEmitter thunk -> EXTERNAL:00000116

// ==== 1071bfe4 ENGINE.DLL::AActor::GetNetPriority thunk -> EXTERNAL:00000117

// ==== 1071bfea ENGINE.DLL::AActor::WorldLightRadius thunk -> EXTERNAL:00000118

// ==== 1071bff0 ENGINE.DLL::AActor::PostEditMove thunk -> EXTERNAL:00000119

// ==== 1071bff6 ENGINE.DLL::AActor::PostEditLoad thunk -> EXTERNAL:0000011a

// ==== 1071bffc ENGINE.DLL::AActor::PreRaytrace thunk -> EXTERNAL:0000011b

// ==== 1071c002 ENGINE.DLL::AActor::PostRaytrace thunk -> EXTERNAL:0000011c

// ==== 1071c008 ENGINE.DLL::AActor::Spawned thunk -> EXTERNAL:0000011d

// ==== 1071c00e ENGINE.DLL::AActor::PreNetReceive thunk -> EXTERNAL:0000011e

// ==== 1071c014 ENGINE.DLL::AActor::PostNetReceive thunk -> EXTERNAL:0000011f

// ==== 1071c01a ENGINE.DLL::AActor::PostNetReceiveLocation thunk -> EXTERNAL:00000120

// ==== 1071c020 ENGINE.DLL::AActor::GetSkin thunk -> EXTERNAL:00000121

// ==== 1071c026 ENGINE.DLL::AActor::ShouldTickInEntry thunk -> EXTERNAL:00000122

// ==== 1071c02c ENGINE.DLL::AActor::L2EventShow thunk -> EXTERNAL:00000123

// ==== 1071c032 ENGINE.DLL::AActor::L2EventPlay thunk -> EXTERNAL:00000124

// ==== 1071c038 ENGINE.DLL::AActor::LostChild thunk -> EXTERNAL:00000125

// ==== 1071c03e ENGINE.DLL::AActor::GainedChild thunk -> EXTERNAL:00000126

// ==== 1071c044 ENGINE.DLL::AActor::CanBeAttacked thunk -> EXTERNAL:00000127

// ==== 1071c04a ENGINE.DLL::AActor::CanBeTold thunk -> EXTERNAL:00000128

// ==== 1071c050 ENGINE.DLL::AActor::PostRender thunk -> EXTERNAL:00000129

// ==== 1071c056 ENGINE.DLL::AActor::SetMeshes thunk -> EXTERNAL:0000012a

// ==== 1071c05c ENGINE.DLL::AActor::SetTexes thunk -> EXTERNAL:0000012b

// ==== 1071c062 ENGINE.DLL::AActor::GetSubSkin thunk -> EXTERNAL:0000012c

// ==== 1071c068 ENGINE.DLL::AActor::GetRightHandSkin thunk -> EXTERNAL:0000012d

// ==== 1071c06e ENGINE.DLL::AActor::GetLeftHandSkin thunk -> EXTERNAL:0000012e

// ==== 1071c074 ENGINE.DLL::AActor::GetRightArmSkin thunk -> EXTERNAL:0000012f

// ==== 1071c07a ENGINE.DLL::AActor::GetLeftArmSkin thunk -> EXTERNAL:00000130

// ==== 1071c080 ENGINE.DLL::AActor::GetCloakSkin thunk -> EXTERNAL:00000131

// ==== 1071c086 ENGINE.DLL::AActor::CheckSameAnim thunk -> EXTERNAL:00000132

// ==== 1071c08c ENGINE.DLL::AActor::IsSameAnim thunk -> EXTERNAL:00000133

// ==== 1071c092 ENGINE.DLL::AActor::CreateSkin thunk -> EXTERNAL:00000134

// ==== 1071c098 ENGINE.DLL::AActor::ClearTexModifier thunk -> EXTERNAL:00000135

// ==== 1071c09e ENGINE.DLL::AActor::SetAlphaTexModifier thunk -> EXTERNAL:00000136

// ==== 1071c0a4 ENGINE.DLL::AActor::ClearAlphaTexModifier thunk -> EXTERNAL:00000137

// ==== 1071c0aa ENGINE.DLL::AActor::SetOverlayTexModifier thunk -> EXTERNAL:00000138

// ==== 1071c0b0 ENGINE.DLL::AActor::SetOverlayDependAlphaTexModifier thunk -> EXTERNAL:00000139

// ==== 1071c0b6 ENGINE.DLL::AActor::SetSubtractTexModifier thunk -> EXTERNAL:0000013a

// ==== 1071c0bc ENGINE.DLL::AActor::SetAddTexModifier thunk -> EXTERNAL:0000013b

// ==== 1071c0c2 ENGINE.DLL::AActor::SetAddTexModifier thunk -> EXTERNAL:0000013c

// ==== 1071c0c8 ENGINE.DLL::AActor::SetChangeColorTexModifier thunk -> EXTERNAL:0000013d

// ==== 1071c0ce ENGINE.DLL::AActor::IsModifiedTexture thunk -> EXTERNAL:0000013e

// ==== 1071c0d4 ENGINE.DLL::AActor::GetModifiedTextureMaterial thunk -> EXTERNAL:0000013f

// ==== 1071c0da ENGINE.DLL::AActor::SetActorViewType thunk -> EXTERNAL:00000140

// ==== 1071c0e0 ENGINE.DLL::AActor::IsNeedTick thunk -> EXTERNAL:00000141

// ==== 1071c0e6 ENGINE.DLL::AActor::SetStaticMeshActorViewType thunk -> EXTERNAL:00000101

// ==== 1071c0ec ENGINE.DLL::AActor::GetStepSoundData thunk -> EXTERNAL:00000143

// ==== 1071c0f2 ENGINE.DLL::AActor::ConvertOrthMatrix thunk -> EXTERNAL:00000144

// ==== 1071c0f8 ENGINE.DLL::AActor::CollisionToWorld thunk -> EXTERNAL:00000145

// ==== 1071c0fe ENGINE.DLL::AActor::ToLocal thunk -> EXTERNAL:00000146

// ==== 1071c104 ENGINE.DLL::AActor::ToWorld thunk -> EXTERNAL:00000147

// ==== 1071c10a ENGINE.DLL::AActor::LocalToWorld thunk -> EXTERNAL:00000148

// ==== 1071c110 ENGINE.DLL::AActor::BillBoardLocalToWorld thunk -> EXTERNAL:00000149

// ==== 1071c116 ENGINE.DLL::AActor::WorldToLocal thunk -> EXTERNAL:0000014a

// ==== 1071c11c ENGINE.DLL::AActor::GetLightRenderData thunk -> EXTERNAL:0000014b

// ==== 1071c122 ENGINE.DLL::AActor::UpdateRenderData thunk -> EXTERNAL:0000014c

// ==== 1071c128 ENGINE.DLL::AActor::PostScriptDestroyed thunk -> EXTERNAL:0000014d

// ==== 1071c12e ENGINE.DLL::AActor::ShouldTrace thunk -> EXTERNAL:0000014e

// ==== 1071c134 ENGINE.DLL::AActor::GetPrimitive thunk -> EXTERNAL:0000014f

// ==== 1071c13a ENGINE.DLL::AActor::NotifyBump thunk -> EXTERNAL:00000150

// ==== 1071c140 ENGINE.DLL::AActor::SetBase thunk -> EXTERNAL:00000151

// ==== 1071c146 ENGINE.DLL::AActor::NotifyAnimEnd thunk -> EXTERNAL:00000152

// ==== 1071c14c ENGINE.DLL::AActor::UpdateAnimation thunk -> EXTERNAL:00000153

// ==== 1071c152 ENGINE.DLL::AActor::StartAnimPoll thunk -> EXTERNAL:00000154

// ==== 1071c158 ENGINE.DLL::AActor::CheckAnimFinished thunk -> EXTERNAL:00000155

// ==== 1071c15e ENGINE.DLL::AActor::CheckOwnerUpdated thunk -> EXTERNAL:00000156

// ==== 1071c164 ENGINE.DLL::AActor::TickAuthoritative thunk -> EXTERNAL:00000157

// ==== 1071c16a ENGINE.DLL::AActor::TickSimulated thunk -> EXTERNAL:00000158

// ==== 1071c170 ENGINE.DLL::AActor::TickSpecial thunk -> EXTERNAL:00000159

// ==== 1071c176 ENGINE.DLL::AActor::PlayerControlled thunk -> EXTERNAL:0000015a

// ==== 1071c17c ENGINE.DLL::AActor::IsNetRelevantFor thunk -> EXTERNAL:0000015b

// ==== 1071c182 ENGINE.DLL::AActor::Attacked thunk -> EXTERNAL:0000015c

// ==== 1071c188 ENGINE.DLL::AActor::IsDamageAct thunk -> EXTERNAL:0000015d

// ==== 1071c18e ENGINE.DLL::AActor::IsSpineRotation thunk -> EXTERNAL:0000015e

// ==== 1071c194 ENGINE.DLL::AActor::GetDamageDist thunk -> EXTERNAL:0000015f

// ==== 1071c19a ENGINE.DLL::AActor::GetTrailerPrePivot thunk -> EXTERNAL:00000160

// ==== 1071c1a0 ENGINE.DLL::AActor::SetTrailerPrePivot thunk -> EXTERNAL:00000161

// ==== 1071c1a6 ENGINE.DLL::AActor::RenderEditorInfo thunk -> EXTERNAL:00000162

// ==== 1071c1ac ENGINE.DLL::AActor::RenderEditorSelected thunk -> EXTERNAL:00000163

// ==== 1071c1b2 ENGINE.DLL::AActor::GetAmbientVolume thunk -> EXTERNAL:00000164

// ==== 1071c1b8 ENGINE.DLL::AActor::SetZone thunk -> EXTERNAL:00000165

// ==== 1071c1be ENGINE.DLL::AActor::SetVolumes thunk -> EXTERNAL:00000166

// ==== 1071c1c4 ENGINE.DLL::AActor::PostBeginPlay thunk -> EXTERNAL:00000167

// ==== 1071c1ca ENGINE.DLL::AActor::setPhysics thunk -> EXTERNAL:00000168

// ==== 1071c1d0 ENGINE.DLL::AActor::performPhysics thunk -> EXTERNAL:00000169

// ==== 1071c1d6 ENGINE.DLL::AActor::BoundProjectileVelocity thunk -> EXTERNAL:0000016a

// ==== 1071c1dc ENGINE.DLL::AActor::processHitWall thunk -> EXTERNAL:0000016b

// ==== 1071c1e2 ENGINE.DLL::AActor::processLanded thunk -> EXTERNAL:0000016c

// ==== 1071c1e8 ENGINE.DLL::AActor::physFalling thunk -> EXTERNAL:0000016d

// ==== 1071c1ee ENGINE.DLL::AActor::FindSlopeRotation thunk -> EXTERNAL:0000016e

// ==== 1071c1f4 ENGINE.DLL::AActor::SmoothHitWall thunk -> EXTERNAL:0000016f

// ==== 1071c1fa ENGINE.DLL::AActor::stepUp thunk -> EXTERNAL:00000170

// ==== 1071c200 ENGINE.DLL::AActor::ShrinkCollision thunk -> EXTERNAL:00000171

// ==== 1071c206 ENGINE.DLL::AActor::L2HitWall thunk -> EXTERNAL:00000172

// ==== 1071c20c ENGINE.DLL::AActor::L2Touch thunk -> EXTERNAL:00000173

// ==== 1071c212 ENGINE.DLL::AActor::L2Explode thunk -> EXTERNAL:00000174

// ==== 1071c218 ENGINE.DLL::AActor::GetAttackItemSound thunk -> EXTERNAL:00000175

// ==== 1071c21e ENGINE.DLL::AActor::GetDefenseItemSound thunk -> EXTERNAL:00000176

// ==== 1071c224 ENGINE.DLL::AActor::GetShieldItemSound thunk -> EXTERNAL:00000177

// ==== 1071c22a ENGINE.DLL::AActor::GetDamageSound thunk -> EXTERNAL:00000178

// ==== 1071c230 ENGINE.DLL::AActor::GetAttackVoiceSound thunk -> EXTERNAL:00000179

// ==== 1071c236 ENGINE.DLL::AActor::AttackedNotify thunk -> EXTERNAL:0000017a

// ==== 1071c23c ENGINE.DLL::AActor::AssociateAttackedNotify thunk -> EXTERNAL:0000017b

// ==== 1071c242 ENGINE.DLL::AActor::IsRendered thunk -> EXTERNAL:0000017c

// ==== 1071c248 ENGINE.DLL::AActor::GetRHandBoneName thunk -> EXTERNAL:0000017d

// ==== 1071c24e ENGINE.DLL::AActor::GetLHandBoneName thunk -> EXTERNAL:0000017e

// ==== 1071c254 ENGINE.DLL::AActor::GetRArmBoneName thunk -> EXTERNAL:0000017f

// ==== 1071c25a ENGINE.DLL::AActor::GetLArmBoneName thunk -> EXTERNAL:00000180

// ==== 1071c260 ENGINE.DLL::AActor::GetCapeBoneName thunk -> EXTERNAL:00000181

// ==== 1071c266 ENGINE.DLL::AActor::GetSpineBoneName thunk -> EXTERNAL:00000182

// ==== 1071c26c ENGINE.DLL::AActor::GetLowbodyBoneName thunk -> EXTERNAL:00000183

// ==== 1071c272 ENGINE.DLL::AActor::GetHeadBoneName thunk -> EXTERNAL:00000184

// ==== 1071c278 ENGINE.DLL::AActor::SetRHandBoneName thunk -> EXTERNAL:00000185

// ==== 1071c27e ENGINE.DLL::AActor::SetLHandBoneName thunk -> EXTERNAL:00000186

// ==== 1071c284 ENGINE.DLL::AActor::SetRArmBoneName thunk -> EXTERNAL:00000187

// ==== 1071c28a ENGINE.DLL::AActor::SetLArmBoneName thunk -> EXTERNAL:00000188

// ==== 1071c290 ENGINE.DLL::AActor::SetCapeBoneName thunk -> EXTERNAL:00000189

// ==== 1071c296 ENGINE.DLL::AActor::SetSpineBoneName thunk -> EXTERNAL:0000018a

// ==== 1071c29c ENGINE.DLL::AActor::SetLowbodyBoneName thunk -> EXTERNAL:0000018b

// ==== 1071c2a2 ENGINE.DLL::AActor::SetHeadBoneName thunk -> EXTERNAL:0000018c

// ==== 1071c2a8 ENGINE.DLL::AActor::GetSubMesh thunk -> EXTERNAL:0000018d

// ==== 1071c2ae ENGINE.DLL::AActor::GetRightHandMesh thunk -> EXTERNAL:0000018e

// ==== 1071c2b4 ENGINE.DLL::AActor::GetLeftHandMesh thunk -> EXTERNAL:0000018f

// ==== 1071c2ba ENGINE.DLL::AActor::GetRightArmMesh thunk -> EXTERNAL:00000190

// ==== 1071c2c0 ENGINE.DLL::AActor::GetLeftArmMesh thunk -> EXTERNAL:00000191

// ==== 1071c2c6 ENGINE.DLL::AActor::GetCloakMesh thunk -> EXTERNAL:00000192

// ==== 1071c2cc ENGINE.DLL::AActor::GetCloakCoverMesh thunk -> EXTERNAL:00000193

// ==== 1071c2d2 ENGINE.DLL::AActor::SetSubMesh thunk -> EXTERNAL:00000194

// ==== 1071c2d8 ENGINE.DLL::AActor::SetRightHandMesh thunk -> EXTERNAL:00000195

// ==== 1071c2de ENGINE.DLL::AActor::SetLeftHandMesh thunk -> EXTERNAL:00000196

// ==== 1071c2e4 ENGINE.DLL::AActor::SetRightArmMesh thunk -> EXTERNAL:00000197

// ==== 1071c2ea ENGINE.DLL::AActor::SetLeftArmMesh thunk -> EXTERNAL:00000198

// ==== 1071c2f0 ENGINE.DLL::AActor::SetCloakMesh thunk -> EXTERNAL:00000199

// ==== 1071c2f6 ENGINE.DLL::AActor::SetCloakCoverMesh thunk -> EXTERNAL:0000019a

// ==== 1071c2fc ENGINE.DLL::AActor::GetSubMeshInstance thunk -> EXTERNAL:0000019b

// ==== 1071c302 ENGINE.DLL::AActor::GetRightHandMeshInstance thunk -> EXTERNAL:0000019c

// ==== 1071c308 ENGINE.DLL::AActor::GetLeftHandMeshInstance thunk -> EXTERNAL:0000019d

// ==== 1071c30e ENGINE.DLL::AActor::GetRightArmMeshInstance thunk -> EXTERNAL:0000019e

// ==== 1071c314 ENGINE.DLL::AActor::GetLeftArmMeshInstance thunk -> EXTERNAL:0000019f

// ==== 1071c31a ENGINE.DLL::AActor::GetCloakMeshInstance thunk -> EXTERNAL:000001a0

// ==== 1071c320 ENGINE.DLL::AActor::GetCloakCoverMeshInstance thunk -> EXTERNAL:000001a1

// ==== 1071c326 ENGINE.DLL::AActor::GetMagicInfo thunk -> EXTERNAL:000001a2

// ==== 1071c32c ENGINE.DLL::AActor::GetTargetLocation thunk -> EXTERNAL:000001a3

// ==== 1071c332 ENGINE.DLL::AActor::physL2Movement thunk -> EXTERNAL:000001a4

// ==== 1071c338 ENGINE.DLL::AActor::AddMyMarker thunk -> EXTERNAL:000001a5

// ==== 1071c33e ENGINE.DLL::AActor::ClearMarker thunk -> EXTERNAL:000001a6

// ==== 1071c344 ENGINE.DLL::AActor::AssociatedLevelGeometry thunk -> EXTERNAL:000001a7

// ==== 1071c34a ENGINE.DLL::AActor::HasAssociatedLevelGeometry thunk -> EXTERNAL:000001a8

// ==== 1071c350 ENGINE.DLL::AActor::PlayAnim thunk -> EXTERNAL:000001a9

// ==== 1071c356 ENGINE.DLL::AActor::CheckForErrors thunk -> EXTERNAL:000001aa

// ==== 1071c35c ENGINE.DLL::AActor::PrePath thunk -> EXTERNAL:000001ab

// ==== 1071c362 ENGINE.DLL::AActor::PostPath thunk -> EXTERNAL:000001ac

// ==== 1071c368 ENGINE.DLL::AActor::GetProjectorBase thunk -> EXTERNAL:000001ad

// ==== 1071c36e ENGINE.DLL::AActor::IsABrush thunk -> EXTERNAL:000001ae

// ==== 1071c374 ENGINE.DLL::AActor::IsAMover thunk -> EXTERNAL:000001af

// ==== 1071c37a ENGINE.DLL::AActor::IsAVolume thunk -> EXTERNAL:000001b0

// ==== 1071c380 ENGINE.DLL::AActor::IsAPlayerController thunk -> EXTERNAL:000001b1

// ==== 1071c386 ENGINE.DLL::AActor::IsAPawn thunk -> EXTERNAL:000001b2

// ==== 1071c38c ENGINE.DLL::AActor::IsAProjectile thunk -> EXTERNAL:000001b3

// ==== 1071c392 ENGINE.DLL::AActor::IsAAmbientSound thunk -> EXTERNAL:000001b4

// ==== 1071c398 ENGINE.DLL::AActor::IsAEmitter thunk -> EXTERNAL:000001b5

// ==== 1071c39e ENGINE.DLL::AActor::IsALight thunk -> EXTERNAL:000001b6

// ==== 1071c3a4 ENGINE.DLL::AActor::IsObserverModeActor thunk -> EXTERNAL:000001b7

// ==== 1071c3aa ENGINE.DLL::AActor::IsBroadcastObserverModeActor thunk -> EXTERNAL:000001b8

// ==== 1071c3b0 ENGINE.DLL::AActor::GetL2MovementEventName thunk -> EXTERNAL:000001b9

// ==== 1071c3b6 ENGINE.DLL::AActor::GetL2MovementTagName thunk -> EXTERNAL:000001ba

// ==== 1071c3bc ENGINE.DLL::AActor::AttachL2MovementActor thunk -> EXTERNAL:000001bb

// ==== 1071c3c2 ENGINE.DLL::AActor::PostLoadProcess thunk -> EXTERNAL:000001bc

// ==== 1071c3c8 ENGINE.DLL::AActor::GetTopPlayerController thunk -> EXTERNAL:000001bd

// ==== 1071c3e0 ENGINE.DLL::AActor::Destroy thunk -> EXTERNAL:000001c1

// ==== 1071c3e6 ENGINE.DLL::AActor::Tick thunk -> EXTERNAL:000001c2

// ==== 1071c482 ENGINE.DLL::UDownload::ReceiveData thunk -> EXTERNAL:000001dc

// ==== 1071c488 ENGINE.DLL::UDownload::DownloadError thunk -> EXTERNAL:000001dd

// ==== 1071c48e ENGINE.DLL::UDownload::DownloadDone thunk -> EXTERNAL:000001de

// ==== 1071c4e2 ENGINE.DLL::UNetConnection::Destroy thunk -> EXTERNAL:000001ef

// ==== 1071c4e8 ENGINE.DLL::UNetConnection::Serialize thunk -> EXTERNAL:000001f0

// ==== 1071c4ee ENGINE.DLL::UNetConnection::ReadInput thunk -> EXTERNAL:000001f1

// ==== 1071c4f4 ENGINE.DLL::UNetConnection::InitOut thunk -> EXTERNAL:000001f2

// ==== 1071c4fa ENGINE.DLL::UNetConnection::AssertValid thunk -> EXTERNAL:000001f3

// ==== 1071c500 ENGINE.DLL::UNetConnection::SendAck thunk -> EXTERNAL:000001f4

// ==== 1071c506 ENGINE.DLL::UNetConnection::FlushNet thunk -> EXTERNAL:000001f5

// ==== 1071c50c ENGINE.DLL::UNetConnection::Tick thunk -> EXTERNAL:000001f6

// ==== 1071c512 ENGINE.DLL::UNetConnection::IsNetReady thunk -> EXTERNAL:000001f7

// ==== 1071c518 ENGINE.DLL::UNetConnection::HandleClientPlayer thunk -> EXTERNAL:000001f8

// ==== 1071c51e ENGINE.DLL::UNetConnection::Serialize thunk -> EXTERNAL:000001f9

// ==== 1071c524 ENGINE.DLL::UNetConnection::Exec thunk -> EXTERNAL:000001fa

// ==== 1071c542 ENGINE.DLL::UNetDriver::Destroy thunk -> EXTERNAL:000001ff

// ==== 1071c548 ENGINE.DLL::UNetDriver::Serialize thunk -> EXTERNAL:00000200

// ==== 1071c54e ENGINE.DLL::UNetDriver::AssertValid thunk -> EXTERNAL:00000142

// ==== 1071c554 ENGINE.DLL::UNetDriver::TickFlush thunk -> EXTERNAL:000000e8

// ==== 1071c55a ENGINE.DLL::UNetDriver::NotifyActorDestroyed thunk -> EXTERNAL:000000e9

// ==== 1071c560 ENGINE.DLL::UNetDriver::IsDemoDriver thunk -> EXTERNAL:000000ea

// ==== 1071c566 ENGINE.DLL::UNetDriver::Exec thunk -> EXTERNAL:000000eb

// ==== 1071c5d9 __cfltcvt_init

/* Library Function - Single Match
    __cfltcvt_init
   
   Library: Visual Studio 2005 Release */

void __cfltcvt_init(void)

{
  PTR_LAB_10765c00 = __cfltcvt;
  PTR_LAB_10765c04 = &LAB_1071d8a1;
  PTR_LAB_10765c08 = &LAB_1071d85f;
  PTR_LAB_10765c0c = &LAB_1071d893;
  PTR_LAB_10765c10 = &LAB_1071d809;
  PTR_LAB_10765c14 = __cfltcvt;
  PTR_LAB_10765c18 = __cfltcvt_l;
  PTR_LAB_10765c1c = __fassign_l;
  PTR_LAB_10765c20 = __cropzeros_l;
  PTR_LAB_10765c24 = __forcdecpt_l;
  return;
}


// ==== 1071c649 __fpmath

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    __fpmath
   
   Library: Visual Studio 2005 Release */

void __cdecl __fpmath(int param_1)

{
  __cfltcvt_init();
  _DAT_1076c320 = __ms_p5_mp_test_fdiv();
  if (param_1 != 0) {
    __setdefaultprecision();
  }
  return;
}


// ==== 1071c670 _memcpy

/* Library Function - Single Match
    _memcpy
   
   Libraries: Visual Studio 2005 Debug, Visual Studio 2005 Release, Visual Studio 2008 Debug, Visual
   Studio 2008 Release */

void * __cdecl _memcpy(void *_Dst,void *_Src,size_t _Size)

{
  undefined4 *puVar1;
  uint uVar2;
  uint uVar3;
  undefined4 *puVar4;
  
  if ((_Src < _Dst) && (_Dst < (void *)(_Size + (int)_Src))) {
    puVar1 = (undefined4 *)((_Size - 4) + (int)_Src);
    puVar4 = (undefined4 *)((_Size - 4) + (int)_Dst);
    if (((uint)puVar4 & 3) == 0) {
      uVar2 = _Size >> 2;
      uVar3 = _Size & 3;
      if (7 < uVar2) {
        for (; uVar2 != 0; uVar2 = uVar2 - 1) {
          *puVar4 = *puVar1;
          puVar1 = puVar1 + -1;
          puVar4 = puVar4 + -1;
        }
        switch(uVar3) {
        case 0:
          return _Dst;
        case 2:
          goto switchD_1071c853_caseD_2;
        case 3:
          goto switchD_1071c853_caseD_3;
        }
        goto switchD_1071c853_caseD_1;
      }
    }
    else {
      switch(_Size) {
      case 0:
        goto switchD_1071c853_caseD_0;
      case 1:
        goto switchD_1071c853_caseD_1;
      case 2:
        goto switchD_1071c853_caseD_2;
      case 3:
        goto switchD_1071c853_caseD_3;
      default:
        uVar2 = _Size - ((uint)puVar4 & 3);
        switch((uint)puVar4 & 3) {
        case 1:
          uVar3 = uVar2 & 3;
          *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar1 + 3);
          puVar1 = (undefined4 *)((int)puVar1 + -1);
          uVar2 = uVar2 >> 2;
          puVar4 = (undefined4 *)((int)puVar4 - 1);
          if (7 < uVar2) {
            for (; uVar2 != 0; uVar2 = uVar2 - 1) {
              *puVar4 = *puVar1;
              puVar1 = puVar1 + -1;
              puVar4 = puVar4 + -1;
            }
            switch(uVar3) {
            case 0:
              return _Dst;
            case 2:
              goto switchD_1071c853_caseD_2;
            case 3:
              goto switchD_1071c853_caseD_3;
            }
            goto switchD_1071c853_caseD_1;
          }
          break;
        case 2:
          uVar3 = uVar2 & 3;
          *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar1 + 3);
          uVar2 = uVar2 >> 2;
          *(undefined1 *)((int)puVar4 + 2) = *(undefined1 *)((int)puVar1 + 2);
          puVar1 = (undefined4 *)((int)puVar1 + -2);
          puVar4 = (undefined4 *)((int)puVar4 - 2);
          if (7 < uVar2) {
            for (; uVar2 != 0; uVar2 = uVar2 - 1) {
              *puVar4 = *puVar1;
              puVar1 = puVar1 + -1;
              puVar4 = puVar4 + -1;
            }
            switch(uVar3) {
            case 0:
              return _Dst;
            case 2:
              goto switchD_1071c853_caseD_2;
            case 3:
              goto switchD_1071c853_caseD_3;
            }
            goto switchD_1071c853_caseD_1;
          }
          break;
        case 3:
          uVar3 = uVar2 & 3;
          *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar1 + 3);
          *(undefined1 *)((int)puVar4 + 2) = *(undefined1 *)((int)puVar1 + 2);
          uVar2 = uVar2 >> 2;
          *(undefined1 *)((int)puVar4 + 1) = *(undefined1 *)((int)puVar1 + 1);
          puVar1 = (undefined4 *)((int)puVar1 + -3);
          puVar4 = (undefined4 *)((int)puVar4 - 3);
          if (7 < uVar2) {
            for (; uVar2 != 0; uVar2 = uVar2 - 1) {
              *puVar4 = *puVar1;
              puVar1 = puVar1 + -1;
              puVar4 = puVar4 + -1;
            }
            switch(uVar3) {
            case 0:
              return _Dst;
            case 2:
              goto switchD_1071c853_caseD_2;
            case 3:
              goto switchD_1071c853_caseD_3;
            }
            goto switchD_1071c853_caseD_1;
          }
        }
      }
    }
    switch(uVar2) {
    case 7:
      puVar4[7 - uVar2] = puVar1[7 - uVar2];
    case 6:
      puVar4[6 - uVar2] = puVar1[6 - uVar2];
    case 5:
      puVar4[5 - uVar2] = puVar1[5 - uVar2];
    case 4:
      puVar4[4 - uVar2] = puVar1[4 - uVar2];
    case 3:
      puVar4[3 - uVar2] = puVar1[3 - uVar2];
    case 2:
      puVar4[2 - uVar2] = puVar1[2 - uVar2];
    case 1:
      puVar4[1 - uVar2] = puVar1[1 - uVar2];
      puVar1 = puVar1 + -uVar2;
      puVar4 = puVar4 + -uVar2;
    }
    switch(uVar3) {
    case 1:
switchD_1071c853_caseD_1:
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar1 + 3);
      return _Dst;
    case 2:
switchD_1071c853_caseD_2:
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar1 + 3);
      *(undefined1 *)((int)puVar4 + 2) = *(undefined1 *)((int)puVar1 + 2);
      return _Dst;
    case 3:
switchD_1071c853_caseD_3:
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar1 + 3);
      *(undefined1 *)((int)puVar4 + 2) = *(undefined1 *)((int)puVar1 + 2);
      *(undefined1 *)((int)puVar4 + 1) = *(undefined1 *)((int)puVar1 + 1);
      return _Dst;
    }
switchD_1071c853_caseD_0:
    return _Dst;
  }
  if (((0xff < _Size) && (DAT_1076cfb0 != 0)) && (((uint)_Dst & 0xf) == ((uint)_Src & 0xf))) {
    puVar1 = __VEC_memcpy(_Dst,_Src,_Size);
    return puVar1;
  }
  puVar1 = _Dst;
  if (((uint)_Dst & 3) == 0) {
    uVar2 = _Size >> 2;
    uVar3 = _Size & 3;
    if (7 < uVar2) {
      for (; uVar2 != 0; uVar2 = uVar2 - 1) {
        *puVar1 = *(undefined4 *)_Src;
        _Src = (undefined4 *)((int)_Src + 4);
        puVar1 = puVar1 + 1;
      }
      switch(uVar3) {
      case 0:
        return _Dst;
      case 2:
        goto switchD_1071c6cc_caseD_2;
      case 3:
        goto switchD_1071c6cc_caseD_3;
      }
      goto switchD_1071c6cc_caseD_1;
    }
  }
  else {
    switch(_Size) {
    case 0:
      goto switchD_1071c6cc_caseD_0;
    case 1:
      goto switchD_1071c6cc_caseD_1;
    case 2:
      goto switchD_1071c6cc_caseD_2;
    case 3:
      goto switchD_1071c6cc_caseD_3;
    default:
      uVar2 = (_Size - 4) + ((uint)_Dst & 3);
      switch((uint)_Dst & 3) {
      case 1:
        uVar3 = uVar2 & 3;
        *(undefined1 *)_Dst = *(undefined1 *)_Src;
        *(undefined1 *)((int)_Dst + 1) = *(undefined1 *)((int)_Src + 1);
        uVar2 = uVar2 >> 2;
        *(undefined1 *)((int)_Dst + 2) = *(undefined1 *)((int)_Src + 2);
        _Src = (void *)((int)_Src + 3);
        puVar1 = (undefined4 *)((int)_Dst + 3);
        if (7 < uVar2) {
          for (; uVar2 != 0; uVar2 = uVar2 - 1) {
            *puVar1 = *(undefined4 *)_Src;
            _Src = (undefined4 *)((int)_Src + 4);
            puVar1 = puVar1 + 1;
          }
          switch(uVar3) {
          case 0:
            return _Dst;
          case 2:
            goto switchD_1071c6cc_caseD_2;
          case 3:
            goto switchD_1071c6cc_caseD_3;
          }
          goto switchD_1071c6cc_caseD_1;
        }
        break;
      case 2:
        uVar3 = uVar2 & 3;
        *(undefined1 *)_Dst = *(undefined1 *)_Src;
        uVar2 = uVar2 >> 2;
        *(undefined1 *)((int)_Dst + 1) = *(undefined1 *)((int)_Src + 1);
        _Src = (void *)((int)_Src + 2);
        puVar1 = (undefined4 *)((int)_Dst + 2);
        if (7 < uVar2) {
          for (; uVar2 != 0; uVar2 = uVar2 - 1) {
            *puVar1 = *(undefined4 *)_Src;
            _Src = (undefined4 *)((int)_Src + 4);
            puVar1 = puVar1 + 1;
          }
          switch(uVar3) {
          case 0:
            return _Dst;
          case 2:
            goto switchD_1071c6cc_caseD_2;
          case 3:
            goto switchD_1071c6cc_caseD_3;
          }
          goto switchD_1071c6cc_caseD_1;
        }
        break;
      case 3:
        uVar3 = uVar2 & 3;
        *(undefined1 *)_Dst = *(undefined1 *)_Src;
        _Src = (void *)((int)_Src + 1);
        uVar2 = uVar2 >> 2;
        puVar1 = (undefined4 *)((int)_Dst + 1);
        if (7 < uVar2) {
          for (; uVar2 != 0; uVar2 = uVar2 - 1) {
            *puVar1 = *(undefined4 *)_Src;
            _Src = (undefined4 *)((int)_Src + 4);
            puVar1 = puVar1 + 1;
          }
          switch(uVar3) {
          case 0:
            return _Dst;
          case 2:
            goto switchD_1071c6cc_caseD_2;
          case 3:
            goto switchD_1071c6cc_caseD_3;
          }
          goto switchD_1071c6cc_caseD_1;
        }
      }
    }
  }
  switch(uVar2) {
  case 7:
    puVar1[uVar2 - 7] = *(undefined4 *)((int)_Src + (uVar2 - 7) * 4);
  case 6:
    puVar1[uVar2 - 6] = *(undefined4 *)((int)_Src + (uVar2 - 6) * 4);
  case 5:
    puVar1[uVar2 - 5] = *(undefined4 *)((int)_Src + (uVar2 - 5) * 4);
  case 4:
    puVar1[uVar2 - 4] = *(undefined4 *)((int)_Src + (uVar2 - 4) * 4);
  case 3:
    puVar1[uVar2 - 3] = *(undefined4 *)((int)_Src + (uVar2 - 3) * 4);
  case 2:
    puVar1[uVar2 - 2] = *(undefined4 *)((int)_Src + (uVar2 - 2) * 4);
  case 1:
    puVar1[uVar2 - 1] = *(undefined4 *)((int)_Src + (uVar2 - 1) * 4);
    _Src = (void *)((int)_Src + uVar2 * 4);
    puVar1 = puVar1 + uVar2;
  }
  switch(uVar3) {
  case 1:
switchD_1071c6cc_caseD_1:
    *(undefined1 *)puVar1 = *(undefined1 *)_Src;
    return _Dst;
  case 2:
switchD_1071c6cc_caseD_2:
    *(undefined1 *)puVar1 = *(undefined1 *)_Src;
    *(undefined1 *)((int)puVar1 + 1) = *(undefined1 *)((int)_Src + 1);
    return _Dst;
  case 3:
switchD_1071c6cc_caseD_3:
    *(undefined1 *)puVar1 = *(undefined1 *)_Src;
    *(undefined1 *)((int)puVar1 + 1) = *(undefined1 *)((int)_Src + 1);
    *(undefined1 *)((int)puVar1 + 2) = *(undefined1 *)((int)_Src + 2);
    return _Dst;
  }
switchD_1071c6cc_caseD_0:
  return _Dst;
}


// ==== 1071c9d5 _JumpToContinuation

/* Library Function - Single Match
    void __stdcall _JumpToContinuation(void *,struct EHRegistrationNode *)
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release, Visual Studio 2010 Release */

void _JumpToContinuation(void *param_1,EHRegistrationNode *param_2)

{
  ExceptionList = *(void **)ExceptionList;
                    /* WARNING: Could not recover jumptable at 0x1071c9fe. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*param_1)();
  return;
}


// ==== 1071ca05 _CallMemberFunction0

/* Library Function - Single Match
    void __stdcall _CallMemberFunction0(void *,void *)
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release, Visual Studio 2010 Release */

void _CallMemberFunction0(void *param_1,void *param_2)

{
  LOCK();
  UNLOCK();
                    /* WARNING: Could not recover jumptable at 0x1071ca0a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*param_2)();
  return;
}


// ==== 1071ca0c FID_conflict:_CallMemberFunction1

/* Library Function - Multiple Matches With Different Base Names
    void __stdcall _CallMemberFunction1(void *,void *,void *)
    void __stdcall _CallMemberFunction2(void *,void *,void *,int)
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release, Visual Studio 2010 Release */

void FID_conflict__CallMemberFunction1(undefined4 param_1,undefined *UNRECOVERED_JUMPTABLE)

{
  LOCK();
  UNLOCK();
                    /* WARNING: Could not recover jumptable at 0x1071ca11. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)UNRECOVERED_JUMPTABLE)();
  return;
}


// ==== 1071ca13 FID_conflict:_CallMemberFunction1

/* Library Function - Multiple Matches With Different Base Names
    void __stdcall _CallMemberFunction1(void *,void *,void *)
    void __stdcall _CallMemberFunction2(void *,void *,void *,int)
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release, Visual Studio 2010 Release */

void FID_conflict__CallMemberFunction1(undefined4 param_1,undefined *UNRECOVERED_JUMPTABLE)

{
  LOCK();
  UNLOCK();
                    /* WARNING: Could not recover jumptable at 0x1071ca18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)UNRECOVERED_JUMPTABLE)();
  return;
}


// ==== 1071ca1a _UnwindNestedFrames

/* Library Function - Single Match
    void __stdcall _UnwindNestedFrames(struct EHRegistrationNode *,struct EHExceptionRecord *)
   
   Library: Visual Studio 2005 Release */

void _UnwindNestedFrames(EHRegistrationNode *param_1,EHExceptionRecord *param_2)

{
  void *pvVar1;
  
  pvVar1 = ExceptionList;
  RtlUnwind(param_1,(PVOID)0x1071ca43,(PEXCEPTION_RECORD)param_2,(PVOID)0x0);
  *(uint *)(param_2 + 4) = *(uint *)(param_2 + 4) & 0xfffffffd;
  *(void **)pvVar1 = ExceptionList;
  ExceptionList = pvVar1;
  return;
}


// ==== 1071ca6c FID_conflict:___CxxFrameHandler3

/* Library Function - Multiple Matches With Different Base Names
    ___CxxFrameHandler
    ___CxxFrameHandler2
    ___CxxFrameHandler3
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release, Visual Studio 2010 Release */

undefined4 __cdecl
FID_conflict____CxxFrameHandler3
          (EHExceptionRecord *param_1,EHRegistrationNode *param_2,_CONTEXT *param_3,void *param_4)

{
  _s_FuncInfo *in_EAX;
  undefined4 uVar1;
  
  uVar1 = ___InternalCxxFrameHandler
                    (param_1,param_2,param_3,param_4,in_EAX,0,(EHRegistrationNode *)0x0,'\0');
  return uVar1;
}


// ==== 1071caa2 FID_conflict:___CxxFrameHandler3

/* Library Function - Multiple Matches With Different Base Names
    ___CxxFrameHandler
    ___CxxFrameHandler2
    ___CxxFrameHandler3
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release, Visual Studio 2010 Release */

undefined4 __cdecl
FID_conflict____CxxFrameHandler3
          (EHExceptionRecord *param_1,EHRegistrationNode *param_2,_CONTEXT *param_3,void *param_4)

{
  _s_FuncInfo *in_EAX;
  undefined4 uVar1;
  
  uVar1 = ___InternalCxxFrameHandler
                    (param_1,param_2,param_3,param_4,in_EAX,0,(EHRegistrationNode *)0x0,'\0');
  return uVar1;
}


// ==== 1071cad8 FID_conflict:___CxxFrameHandler3

/* Library Function - Multiple Matches With Different Base Names
    ___CxxFrameHandler
    ___CxxFrameHandler2
    ___CxxFrameHandler3
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release, Visual Studio 2010 Release */

undefined4 __cdecl
FID_conflict____CxxFrameHandler3
          (EHExceptionRecord *param_1,EHRegistrationNode *param_2,_CONTEXT *param_3,void *param_4)

{
  _s_FuncInfo *in_EAX;
  undefined4 uVar1;
  
  uVar1 = ___InternalCxxFrameHandler
                    (param_1,param_2,param_3,param_4,in_EAX,0,(EHRegistrationNode *)0x0,'\0');
  return uVar1;
}


// ==== 1071cb58 _CallSETranslator

/* Library Function - Single Match
    int __cdecl _CallSETranslator(struct EHExceptionRecord *,struct EHRegistrationNode *,void *,void
   *,struct _s_FuncInfo const *,int,struct EHRegistrationNode *)
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release */

int __cdecl
_CallSETranslator(EHExceptionRecord *param_1,EHRegistrationNode *param_2,void *param_3,void *param_4
                 ,_s_FuncInfo *param_5,int param_6,EHRegistrationNode *param_7)

{
  _ptiddata p_Var1;
  int local_3c;
  EHExceptionRecord *local_38;
  void *local_34;
  code *local_30;
  undefined4 *local_2c;
  code *local_28;
  uint local_24;
  _s_FuncInfo *local_20;
  EHRegistrationNode *local_1c;
  int local_18;
  EHRegistrationNode *local_14;
  undefined1 *local_10;
  undefined1 *local_c;
  int local_8;
  
  local_c = &stack0xfffffffc;
  local_10 = &stack0xffffffc0;
  if (param_1 == (EHExceptionRecord *)0x123) {
    *(undefined4 *)param_2 = 0x1071cc01;
    local_3c = 1;
  }
  else {
    local_28 = TranslatorGuardHandler;
    local_24 = DAT_10765c70 ^ (uint)&local_2c;
    local_20 = param_5;
    local_1c = param_2;
    local_18 = param_6;
    local_14 = param_7;
    local_8 = 0;
    local_2c = ExceptionList;
    ExceptionList = &local_2c;
    local_38 = param_1;
    local_34 = param_3;
    p_Var1 = __getptd();
    local_30 = p_Var1->_translator;
    (*local_30)(*(undefined4 *)param_1,&local_38);
    local_3c = 0;
    if (local_8 != 0) {
      *local_2c = *(undefined4 *)ExceptionList;
    }
    ExceptionList = local_2c;
  }
  return local_3c;
}


// ==== 1071cc2d TranslatorGuardHandler

/* Library Function - Single Match
    enum _EXCEPTION_DISPOSITION __cdecl TranslatorGuardHandler(struct EHExceptionRecord *,struct
   TranslatorGuardRN *,void *,void *)
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release, Visual Studio 2010 Release */

_EXCEPTION_DISPOSITION __cdecl
TranslatorGuardHandler
          (EHExceptionRecord *param_1,TranslatorGuardRN *param_2,void *param_3,void *param_4)

{
  _EXCEPTION_DISPOSITION _Var1;
  code *local_8;
  
  __security_check_cookie(*(uint *)(param_2 + 8) ^ (uint)param_2);
  if ((*(uint *)(param_1 + 4) & 0x66) != 0) {
    *(undefined4 *)(param_2 + 0x24) = 1;
    return 1;
  }
  ___InternalCxxFrameHandler
            (param_1,*(EHRegistrationNode **)(param_2 + 0x10),param_3,(void *)0x0,
             *(_s_FuncInfo **)(param_2 + 0xc),*(int *)(param_2 + 0x14),
             *(EHRegistrationNode **)(param_2 + 0x18),'\x01');
  if (*(int *)(param_2 + 0x24) == 0) {
    _UnwindNestedFrames((EHRegistrationNode *)param_2,param_1);
  }
  _CallSETranslator((EHExceptionRecord *)0x123,(EHRegistrationNode *)&local_8,(void *)0x0,
                    (void *)0x0,(_s_FuncInfo *)0x0,0,(EHRegistrationNode *)0x0);
                    /* WARNING: Could not recover jumptable at 0x1071ccc2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _Var1 = (*local_8)();
  return _Var1;
}


// ==== 1071ccca _GetRangeOfTrysToCheck

/* Library Function - Single Match
    struct _s_TryBlockMapEntry const * __cdecl _GetRangeOfTrysToCheck(struct _s_FuncInfo const
   *,int,int,unsigned int *,unsigned int *)
   
   Library: Visual Studio 2005 Release */

_s_TryBlockMapEntry * __cdecl
_GetRangeOfTrysToCheck(_s_FuncInfo *param_1,int param_2,int param_3,uint *param_4,uint *param_5)

{
  TryBlockMapEntry *pTVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  pTVar1 = param_1->pTryBlockMap;
  uVar5 = param_1->nTryBlocks;
  uVar2 = uVar5;
  uVar3 = uVar5;
  while (uVar4 = uVar2, -1 < param_2) {
    if (uVar5 == 0xffffffff) {
      _inconsistency();
    }
    uVar5 = uVar5 - 1;
    if (((pTVar1[uVar5].tryHigh < param_3) && (param_3 <= pTVar1[uVar5].catchHigh)) ||
       (uVar2 = uVar4, uVar5 == 0xffffffff)) {
      param_2 = param_2 + -1;
      uVar2 = uVar5;
      uVar3 = uVar4;
    }
  }
  uVar5 = uVar5 + 1;
  *param_4 = uVar5;
  *param_5 = uVar3;
  if ((param_1->nTryBlocks < uVar3) || (uVar3 < uVar5)) {
    _inconsistency();
  }
  return pTVar1 + uVar5;
}


// ==== 1071cd3d __CreateFrameInfo

/* Library Function - Single Match
    __CreateFrameInfo
   
   Library: Visual Studio 2005 Release */

undefined4 * __cdecl __CreateFrameInfo(undefined4 *param_1,undefined4 param_2)

{
  _ptiddata p_Var1;
  
  *param_1 = param_2;
  p_Var1 = __getptd();
  param_1[1] = p_Var1->_pFrameInfoChain;
  p_Var1 = __getptd();
  p_Var1->_pFrameInfoChain = param_1;
  return param_1;
}


// ==== 1071cd65 __IsExceptionObjectToBeDestroyed

/* Library Function - Single Match
    __IsExceptionObjectToBeDestroyed
   
   Library: Visual Studio 2005 Release */

undefined4 __cdecl __IsExceptionObjectToBeDestroyed(int param_1)

{
  _ptiddata p_Var1;
  int *piVar2;
  
  p_Var1 = __getptd();
  piVar2 = p_Var1->_pFrameInfoChain;
  while( true ) {
    if (piVar2 == (int *)0x0) {
      return 1;
    }
    if (*piVar2 == param_1) break;
    piVar2 = (int *)piVar2[1];
  }
  return 0;
}


// ==== 1071cd86 __FindAndUnlinkFrame

/* Library Function - Single Match
    __FindAndUnlinkFrame
   
   Library: Visual Studio 2005 Release */

void __cdecl __FindAndUnlinkFrame(void *param_1)

{
  void *pvVar1;
  _ptiddata p_Var2;
  void *pvVar3;
  
  p_Var2 = __getptd();
  if (param_1 == p_Var2->_pFrameInfoChain) {
    p_Var2 = __getptd();
    p_Var2->_pFrameInfoChain = *(void **)((int)param_1 + 4);
    return;
  }
  p_Var2 = __getptd();
  pvVar1 = p_Var2->_pFrameInfoChain;
  do {
    pvVar3 = pvVar1;
    if (*(int *)((int)pvVar3 + 4) == 0) {
      _inconsistency();
      return;
    }
    pvVar1 = *(void **)((int)pvVar3 + 4);
  } while (param_1 != *(void **)((int)pvVar3 + 4));
  *(undefined4 *)((int)pvVar3 + 4) = *(undefined4 *)((int)param_1 + 4);
  return;
}


// ==== 1071cdd2 _CallCatchBlock2

/* Library Function - Single Match
    void * __cdecl _CallCatchBlock2(struct EHRegistrationNode *,struct _s_FuncInfo const *,void
   *,int,unsigned long)
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release, Visual Studio 2010 Release */

void * __cdecl
_CallCatchBlock2(EHRegistrationNode *param_1,_s_FuncInfo *param_2,void *param_3,int param_4,
                ulong param_5)

{
  void *pvVar1;
  void *local_1c;
  undefined1 *local_18;
  uint local_14;
  _s_FuncInfo *local_10;
  EHRegistrationNode *local_c;
  int local_8;
  
  local_14 = DAT_10765c70 ^ (uint)&local_1c;
  local_10 = param_2;
  local_8 = param_4 + 1;
  local_18 = &LAB_1071cb28;
  local_c = param_1;
  local_1c = ExceptionList;
  ExceptionList = &local_1c;
  pvVar1 = (void *)__CallSettingFrame_12(param_3,param_1,param_5);
  ExceptionList = local_1c;
  return pvVar1;
}


// ==== 1071ce3f type_info::~type_info

/* Library Function - Single Match
    public: virtual __thiscall type_info::~type_info(void)
   
   Library: Visual Studio 2005 Release */

void __thiscall type_info::~type_info(type_info *this)

{
  *(undefined ***)this = vftable;
  _Type_info_dtor(this);
  return;
}


// ==== 1071ce4d type_info::`scalar_deleting_destructor'

/* Library Function - Single Match
    public: virtual void * __thiscall type_info::`scalar deleting destructor'(unsigned int)
   
   Library: Visual Studio 2005 Release */

void * __thiscall type_info::_scalar_deleting_destructor_(type_info *this,uint param_1)

{
  ~type_info(this);
  if ((param_1 & 1) != 0) {
    thunk_FUN_107026f0(this);
  }
  return this;
}


// ==== 1071ce80 type_info::operator==

/* Library Function - Single Match
    public: bool __thiscall type_info::operator==(class type_info const &)const 
   
   Library: Visual Studio 2005 Release */

bool __thiscall type_info::operator==(type_info *this,type_info *param_1)

{
  int iVar1;
  
  iVar1 = _strcmp((char *)(param_1 + 9),(char *)(this + 9));
  return (bool)('\x01' - (iVar1 != 0));
}


// ==== 1071cefc __ArrayUnwind

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    void __stdcall __ArrayUnwind(void *,unsigned int,int,void (__thiscall*)(void *))
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release, Visual Studio 2010 Release */

void __ArrayUnwind(void *param_1,uint param_2,int param_3,_func_void_void_ptr *param_4)

{
  void *in_stack_ffffffc8;
  
  while( true ) {
    param_3 = param_3 + -1;
    if (param_3 < 0) break;
    (*param_4)(in_stack_ffffffc8);
  }
  return;
}


// ==== 1071cf5a `eh_vector_destructor_iterator'

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    void __stdcall `eh vector destructor iterator'(void *,unsigned int,int,void (__thiscall*)(void
   *))
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release, Visual Studio 2010 Release */

void _eh_vector_destructor_iterator_
               (void *param_1,uint param_2,int param_3,_func_void_void_ptr *param_4)

{
  void *in_stack_ffffffd0;
  
  while( true ) {
    param_3 = param_3 + -1;
    if (param_3 < 0) break;
    (*param_4)(in_stack_ffffffd0);
  }
  FUN_1071cfa5();
  return;
}


// ==== 1071cfa5 FUN_1071cfa5

void FUN_1071cfa5(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x1c) == 0) {
    __ArrayUnwind(*(void **)(unaff_EBP + 8),*(uint *)(unaff_EBP + 0xc),*(int *)(unaff_EBP + 0x10),
                  *(_func_void_void_ptr **)(unaff_EBP + 0x14));
  }
  return;
}


// ==== 1071cfbd __purecall

/* Library Function - Single Match
    __purecall
   
   Library: Visual Studio 2005 Release */

void __purecall(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)FUN_1071f707(DAT_1076c674);
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)();
  }
  FUN_10720477(0x19);
  __set_abort_behavior(0,1);
                    /* WARNING: Subroutine does not return */
  _abort();
}


// ==== 1071d016 __CxxThrowException@8

/* Library Function - Single Match
    __CxxThrowException@8
   
   Library: Visual Studio 2005 Release */

void __CxxThrowException_8(undefined4 param_1,byte *param_2)

{
  int iVar1;
  DWORD *pDVar2;
  DWORD *pDVar3;
  DWORD local_24 [4];
  DWORD local_14;
  ULONG_PTR local_10;
  undefined4 local_c;
  byte *local_8;
  
  pDVar2 = &DAT_10751850;
  pDVar3 = local_24;
  for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
    *pDVar3 = *pDVar2;
    pDVar2 = pDVar2 + 1;
    pDVar3 = pDVar3 + 1;
  }
  local_c = param_1;
  local_8 = param_2;
  if ((param_2 != (byte *)0x0) && ((*param_2 & 8) != 0)) {
    local_10 = 0x1994000;
  }
  RaiseException(local_24[0],local_24[1],local_14,&local_10);
  return;
}


// ==== 1071d060 _memset

/* Library Function - Single Match
    _memset
   
   Libraries: Visual Studio 2005 Debug, Visual Studio 2005 Release, Visual Studio 2008 Debug, Visual
   Studio 2008 Release */

void * __cdecl _memset(void *_Dst,int _Val,size_t _Size)

{
  uint uVar1;
  undefined1 (*pauVar2) [16];
  uint uVar3;
  size_t sVar4;
  uint *puVar5;
  
  if (_Size == 0) {
    return _Dst;
  }
  uVar1 = _Val & 0xff;
  if ((((char)_Val == '\0') && (0xff < _Size)) && (DAT_1076cfb0 != 0)) {
    pauVar2 = __VEC_memzero(_Dst,_Val,_Size);
    return pauVar2;
  }
  puVar5 = _Dst;
  if (3 < _Size) {
    uVar3 = -(int)_Dst & 3;
    sVar4 = _Size;
    if (uVar3 != 0) {
      sVar4 = _Size - uVar3;
      do {
        *(char *)puVar5 = (char)_Val;
        puVar5 = (uint *)((int)puVar5 + 1);
        uVar3 = uVar3 - 1;
      } while (uVar3 != 0);
    }
    uVar1 = uVar1 * 0x1010101;
    _Size = sVar4 & 3;
    uVar3 = sVar4 >> 2;
    if (uVar3 != 0) {
      for (; uVar3 != 0; uVar3 = uVar3 - 1) {
        *puVar5 = uVar1;
        puVar5 = puVar5 + 1;
      }
      if (_Size == 0) {
        return _Dst;
      }
    }
  }
  do {
    *(char *)puVar5 = (char)uVar1;
    puVar5 = (uint *)((int)puVar5 + 1);
    _Size = _Size - 1;
  } while (_Size != 0);
  return _Dst;
}


// ==== 1071d0da `eh_vector_constructor_iterator'

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    void __stdcall `eh vector constructor iterator'(void *,unsigned int,int,void (__thiscall*)(void
   *),void (__thiscall*)(void *))
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release, Visual Studio 2010 Release */

void _eh_vector_constructor_iterator_
               (void *param_1,uint param_2,int param_3,_func_void_void_ptr *param_4,
               _func_void_void_ptr *param_5)

{
  void *in_stack_ffffffcc;
  undefined4 local_20;
  
  for (local_20 = 0; local_20 < param_3; local_20 = local_20 + 1) {
    (*param_4)(in_stack_ffffffcc);
  }
  FUN_1071d127();
  return;
}


// ==== 1071d127 FUN_1071d127

void FUN_1071d127(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x20) == 0) {
    __ArrayUnwind(*(void **)(unaff_EBP + 8),*(uint *)(unaff_EBP + 0xc),*(int *)(unaff_EBP + -0x1c),
                  *(_func_void_void_ptr **)(unaff_EBP + 0x18));
  }
  return;
}


// ==== 1071d13f `eh_vector_copy_constructor_iterator'

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    void __stdcall `eh vector copy constructor iterator'(void *,void *,unsigned int,int,void
   (__thiscall*)(void *,void *),void (__thiscall*)(void *))
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release, Visual Studio 2010 Release */

void _eh_vector_copy_constructor_iterator_
               (void *param_1,void *param_2,uint param_3,int param_4,
               _func_void_void_ptr_void_ptr *param_5,_func_void_void_ptr *param_6)

{
  void *in_stack_ffffffcc;
  undefined4 local_20;
  
  for (local_20 = 0; local_20 < param_4; local_20 = local_20 + 1) {
    (*param_5)(param_2,in_stack_ffffffcc);
    param_2 = (void *)((int)param_2 + param_3);
  }
  FUN_1071d190();
  return;
}


// ==== 1071d190 FUN_1071d190

void FUN_1071d190(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x20) == 0) {
    __ArrayUnwind(*(void **)(unaff_EBP + 8),*(uint *)(unaff_EBP + 0x10),*(int *)(unaff_EBP + -0x1c),
                  *(_func_void_void_ptr **)(unaff_EBP + 0x1c));
  }
  return;
}


// ==== 1071d1a8 FUN_1071d1a8

int __cdecl FUN_1071d1a8(int param_1)

{
  uint uVar1;
  int *_Memory;
  int *piVar2;
  size_t sVar3;
  size_t sVar4;
  void *pvVar5;
  int iVar6;
  
  _Memory = (int *)FUN_1071f707(DAT_1076cf94);
  piVar2 = (int *)FUN_1071f707(DAT_1076cf90);
  if (_Memory <= piVar2) {
    uVar1 = ((int)piVar2 - (int)_Memory) + 4;
    if (3 < uVar1) {
      sVar3 = __msize(_Memory);
      if (sVar3 < uVar1) {
        sVar4 = 0x800;
        if (sVar3 < 0x800) {
          sVar4 = sVar3;
        }
        if ((sVar4 + sVar3 < sVar3) ||
           (pvVar5 = __realloc_crt(_Memory,sVar4 + sVar3), pvVar5 == (void *)0x0)) {
          if (sVar3 + 0x10 < sVar3) {
            return 0;
          }
          pvVar5 = __realloc_crt(_Memory,sVar3 + 0x10);
          if (pvVar5 == (void *)0x0) {
            return 0;
          }
        }
        piVar2 = (int *)((int)pvVar5 + ((int)piVar2 - (int)_Memory >> 2) * 4);
        DAT_1076cf94 = FUN_1071f690((int)pvVar5);
      }
      iVar6 = FUN_1071f690(param_1);
      *piVar2 = iVar6;
      DAT_1076cf90 = FUN_1071f690((int)(piVar2 + 1));
      return param_1;
    }
  }
  return 0;
}


// ==== 1071d290 __onexit

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    __onexit
   
   Library: Visual Studio 2005 Release */

_onexit_t __cdecl __onexit(_onexit_t _Func)

{
  _onexit_t p_Var1;
  
  FUN_10720b2c();
  p_Var1 = (_onexit_t)FUN_1071d1a8((int)_Func);
  FUN_1071d2c6();
  return p_Var1;
}


// ==== 1071d2c6 FUN_1071d2c6

void FUN_1071d2c6(void)

{
  FUN_10720b35();
  return;
}


// ==== 1071d2cc _atexit

/* Library Function - Single Match
    _atexit
   
   Library: Visual Studio 2005 Release */

int __cdecl _atexit(_func_4879 *param_1)

{
  _onexit_t p_Var1;
  
  p_Var1 = __onexit((_onexit_t)param_1);
  return (p_Var1 != (_onexit_t)0x0) - 1;
}


// ==== 1071d2e0 __alloca_probe

/* WARNING: This is an inlined function */
/* Library Function - Single Match
    __chkstk
   
   Library: Visual Studio */

void __alloca_probe(void)

{
  undefined1 *in_EAX;
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 unaff_retaddr;
  undefined1 auStack_4 [4];
  
  puVar2 = (undefined4 *)((int)&stack0x00000000 - (int)in_EAX & ~-(uint)(&stack0x00000000 < in_EAX))
  ;
  for (puVar1 = (undefined4 *)((uint)auStack_4 & 0xfffff000); puVar2 < puVar1;
      puVar1 = puVar1 + -0x400) {
  }
  *puVar2 = unaff_retaddr;
  return;
}


// ==== 1071d310 __alloca_probe_16

/* WARNING: This is an inlined function */
/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */
/* Library Function - Single Match
    __alloca_probe_16
   
   Library: Visual Studio 2005 Release */

uint __alloca_probe_16(void)

{
  uint in_EAX;
  uint uVar1;
  
  uVar1 = 4 - in_EAX & 0xf;
  return in_EAX + uVar1 | -(uint)CARRY4(in_EAX,uVar1);
}


// ==== 1071d326 __alloca_probe_8

/* WARNING: This is an inlined function */
/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */
/* Library Function - Single Match
    __alloca_probe_8
   
   Library: Visual Studio */

uint __alloca_probe_8(void)

{
  uint in_EAX;
  uint uVar1;
  
  uVar1 = 4 - in_EAX & 7;
  return in_EAX + uVar1 | -(uint)CARRY4(in_EAX,uVar1);
}


// ==== 1071d36e __CRT_INIT@12

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    __CRT_INIT@12
   
   Library: Visual Studio 2005 Release */

undefined4 __CRT_INIT_12(undefined4 param_1,int param_2,int param_3)

{
  DWORD DVar1;
  DWORD DVar2;
  DWORD DVar3;
  HANDLE pvVar4;
  LPOSVERSIONINFOA lpVersionInformation;
  BOOL BVar5;
  int iVar6;
  DWORD *_Memory;
  code *pcVar7;
  uint uVar8;
  DWORD DVar9;
  undefined4 uVar10;
  SIZE_T dwBytes;
  DWORD *pDVar11;
  
  if (param_2 == 1) {
    dwBytes = 0x94;
    DVar9 = 0;
    pvVar4 = GetProcessHeap();
    lpVersionInformation = HeapAlloc(pvVar4,DVar9,dwBytes);
    if (lpVersionInformation != (LPOSVERSIONINFOA)0x0) {
      lpVersionInformation->dwOSVersionInfoSize = 0x94;
      BVar5 = GetVersionExA(lpVersionInformation);
      DVar9 = 0;
      if (BVar5 == 0) {
        pvVar4 = GetProcessHeap();
        HeapFree(pvVar4,DVar9,lpVersionInformation);
      }
      else {
        DVar1 = lpVersionInformation->dwPlatformId;
        DVar2 = lpVersionInformation->dwMajorVersion;
        DVar3 = lpVersionInformation->dwMinorVersion;
        uVar8 = lpVersionInformation->dwBuildNumber & 0x7fff;
        pvVar4 = GetProcessHeap();
        HeapFree(pvVar4,DVar9,lpVersionInformation);
        if (DVar1 != 2) {
          uVar8 = uVar8 | 0x8000;
        }
        _DAT_1076c688 = DVar2 * 0x100 + DVar3;
        DAT_1076c680 = DVar1;
        _DAT_1076c684 = uVar8;
        DAT_1076c68c = DVar2;
        _DAT_1076c690 = DVar3;
        iVar6 = __heap_init();
        if (iVar6 != 0) {
          iVar6 = __mtinit();
          if (iVar6 != 0) {
            __RTC_Initialize();
            DAT_1076cfb4 = GetCommandLineA();
            DAT_1076c328 = ___crtGetEnvironmentStringsA();
            iVar6 = __ioinit();
            if (-1 < iVar6) {
              iVar6 = __setargv();
              if (((-1 < iVar6) && (iVar6 = __setenvp(), -1 < iVar6)) &&
                 (iVar6 = __cinit(0), iVar6 == 0)) {
                DAT_1076c324 = DAT_1076c324 + 1;
                return 1;
              }
              __ioterm();
            }
            __mtterm();
          }
          __heap_term();
        }
      }
    }
  }
  else if (param_2 == 0) {
    if (0 < DAT_1076c324) {
      DAT_1076c324 = DAT_1076c324 + -1;
      if (DAT_1076c6bc == 0) {
        __cexit();
      }
      if (param_3 == 0) {
        __ioterm();
        __mtterm();
        __heap_term();
      }
      return 1;
    }
  }
  else {
    if (param_2 != 2) {
      if (param_2 != 3) {
        return 1;
      }
      __freeptd((_ptiddata)0x0);
      return 1;
    }
    FUN_1071f799();
    _Memory = __calloc_crt(1,0x214);
    if (_Memory != (DWORD *)0x0) {
      uVar10 = DAT_10765c68;
      pDVar11 = _Memory;
      pcVar7 = (code *)FUN_1071f707(DAT_1076c340);
      iVar6 = (*pcVar7)(uVar10,pDVar11);
      if (iVar6 != 0) {
        FUN_1071f821((int)_Memory,0);
        DVar9 = GetCurrentThreadId();
        _Memory[1] = 0xffffffff;
        *_Memory = DVar9;
        return 1;
      }
      _free(_Memory);
    }
  }
  return 0;
}


// ==== 1071d547 ___DllMainCRTStartup

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* WARNING: Removing unreachable block (ram,0x1071d5d9) */
/* WARNING: Removing unreachable block (ram,0x1071d586) */
/* WARNING: Removing unreachable block (ram,0x1071d606) */
/* Library Function - Single Match
    ___DllMainCRTStartup
   
   Library: Visual Studio 2005 Release */

int __fastcall ___DllMainCRTStartup(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int local_20;
  
  if (((param_2 == 0) && (DAT_1076c324 == 0)) ||
     (((param_2 == 1 || (param_2 == 2)) &&
      (iVar1 = __CRT_INIT_12(param_3,param_2,param_1), iVar1 == 0)))) {
    local_20 = 0;
  }
  else {
    local_20 = _DllMain_12(param_3);
    if ((param_2 == 1) && (local_20 == 0)) {
      _DllMain_12(param_3);
      __CRT_INIT_12(param_3,0,param_1);
    }
    if (((param_2 == 0) || (param_2 == 3)) &&
       (iVar1 = __CRT_INIT_12(param_3,param_2,param_1), iVar1 == 0)) {
      local_20 = 0;
    }
  }
  return local_20;
}


// ==== 1071d63d entry

void entry(undefined4 param_1,int param_2,int param_3)

{
  if (param_2 == 1) {
    ___security_init_cookie();
  }
  ___DllMainCRTStartup(param_3,param_2,param_1);
  return;
}


// ==== 1071d663 _LocaleUpdate::_LocaleUpdate

/* Library Function - Single Match
    public: __thiscall _LocaleUpdate::_LocaleUpdate(struct localeinfo_struct *)
   
   Library: Visual Studio 2005 Release */

_LocaleUpdate * __thiscall
_LocaleUpdate::_LocaleUpdate(_LocaleUpdate *this,localeinfo_struct *param_1)

{
  uint *puVar1;
  _ptiddata p_Var2;
  pthreadlocinfo ptVar3;
  pthreadmbcinfo ptVar4;
  
  this[0xc] = (_LocaleUpdate)0x0;
  if (param_1 == (localeinfo_struct *)0x0) {
    p_Var2 = __getptd();
    *(_ptiddata *)(this + 8) = p_Var2;
    *(pthreadlocinfo *)this = p_Var2->ptlocinfo;
    *(pthreadmbcinfo *)(this + 4) = p_Var2->ptmbcinfo;
    if ((*(undefined **)this != PTR_DAT_10766428) && ((p_Var2->_ownlocale & DAT_10766344) == 0)) {
      ptVar3 = ___updatetlocinfo();
      *(pthreadlocinfo *)this = ptVar3;
    }
    if ((*(undefined **)(this + 4) != PTR_DAT_10766248) &&
       ((*(uint *)(*(int *)(this + 8) + 0x70) & DAT_10766344) == 0)) {
      ptVar4 = ___updatetmbcinfo();
      *(pthreadmbcinfo *)(this + 4) = ptVar4;
    }
    if ((*(byte *)(*(int *)(this + 8) + 0x70) & 2) == 0) {
      puVar1 = (uint *)(*(int *)(this + 8) + 0x70);
      *puVar1 = *puVar1 | 2;
      this[0xc] = (_LocaleUpdate)0x1;
    }
  }
  else {
    *(pthreadlocinfo *)this = param_1->locinfo;
    *(pthreadmbcinfo *)(this + 4) = param_1->mbcinfo;
  }
  return this;
}


// ==== 1071d6f6 __invoke_watson_if_error

/* Library Function - Single Match
    __invoke_watson_if_error
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release, Visual Studio 2019 Release */

void __cdecl
__invoke_watson_if_error
          (errno_t _ExpressionError,wchar_t *_Expression,wchar_t *_Function,wchar_t *_File,
          uint _Line,uintptr_t _Reserved)

{
  if (_ExpressionError != 0) {
                    /* WARNING: Subroutine does not return */
    __invoke_watson(_Expression,_Function,_File,_Line,_Reserved);
  }
  return;
}


// ==== 1071d718 __forcdecpt_l

/* Library Function - Single Match
    __forcdecpt_l
   
   Library: Visual Studio 2005 Release */

void __cdecl __forcdecpt_l(char *_Buf,_locale_t _Locale)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  bool bVar4;
  int local_14 [2];
  int local_c;
  char local_8;
  
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)local_14,_Locale);
  iVar3 = _tolower((int)*_Buf);
  bVar4 = iVar3 == 0x65;
  while (!bVar4) {
    _Buf = _Buf + 1;
    iVar3 = _isdigit((uint)(byte)*_Buf);
    bVar4 = iVar3 == 0;
  }
  iVar3 = _tolower((int)*_Buf);
  if (iVar3 == 0x78) {
    _Buf = _Buf + 2;
  }
  bVar2 = *_Buf;
  *_Buf = *(byte *)**(undefined4 **)(local_14[0] + 0xbc);
  do {
    _Buf = _Buf + 1;
    bVar1 = *_Buf;
    *_Buf = bVar2;
    bVar2 = bVar1;
  } while (*_Buf != 0);
  if (local_8 != '\0') {
    *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
  }
  return;
}


// ==== 1071d789 __cropzeros_l

/* Library Function - Single Match
    __cropzeros_l
   
   Library: Visual Studio 2005 Release */

void __cdecl __cropzeros_l(char *_Buf,_locale_t _Locale)

{
  char *pcVar1;
  char cVar3;
  int local_14 [2];
  int local_c;
  char local_8;
  char *pcVar2;
  
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)local_14,_Locale);
  cVar3 = *_Buf;
  if (cVar3 != '\0') {
    do {
      if (cVar3 == *(char *)**(undefined4 **)(local_14[0] + 0xbc)) break;
      _Buf = _Buf + 1;
      cVar3 = *_Buf;
    } while (cVar3 != '\0');
  }
  if (*_Buf != '\0') {
    do {
      _Buf = _Buf + 1;
      cVar3 = *_Buf;
      pcVar1 = _Buf;
      if ((cVar3 == '\0') || (cVar3 == 'e')) break;
    } while (cVar3 != 'E');
    do {
      pcVar2 = pcVar1;
      pcVar1 = pcVar2 + -1;
    } while (*pcVar1 == '0');
    if (*pcVar1 == *(char *)**(undefined4 **)(local_14[0] + 0xbc)) {
      pcVar1 = pcVar2 + -2;
    }
    do {
      cVar3 = *_Buf;
      pcVar1 = pcVar1 + 1;
      _Buf = _Buf + 1;
      *pcVar1 = cVar3;
    } while (cVar3 != '\0');
  }
  if (local_8 != '\0') {
    *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
  }
  return;
}


// ==== 1071d81f __fassign_l

/* Library Function - Single Match
    __fassign_l
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release, Visual Studio 2010 Release */

void __cdecl __fassign_l(int flag,char *argument,char *number,_locale_t param_4)

{
  _CRT_FLOAT local_c;
  undefined4 local_8;
  
  if (flag == 0) {
    FID_conflict___atoflt_l((_CRT_FLOAT *)&flag,number,param_4);
    *(int *)argument = flag;
  }
  else {
    FID_conflict___atoflt_l(&local_c,number,param_4);
    *(float *)argument = local_c.f;
    *(undefined4 *)(argument + 4) = local_8;
  }
  return;
}


// ==== 1071d876 __shift

/* Library Function - Single Match
    __shift
   
   Library: Visual Studio 2005 Release */

void __shift(void)

{
  char *in_EAX;
  size_t sVar1;
  int unaff_EDI;
  
  if (unaff_EDI != 0) {
    sVar1 = _strlen(in_EAX);
    _memmove(in_EAX + unaff_EDI,in_EAX,sVar1 + 1);
  }
  return;
}


// ==== 1071d8af __cftoe2_l

/* Library Function - Single Match
    __cftoe2_l
   
   Library: Visual Studio 2005 Release */

undefined4 __cdecl
__cftoe2_l(uint param_1,int param_2,int param_3,int *param_4,char param_5,localeinfo_struct *param_6
          )

{
  undefined1 *in_EAX;
  undefined4 *puVar1;
  errno_t eVar2;
  int iVar3;
  int iVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  char *_Dst;
  undefined4 uVar7;
  undefined4 uVar8;
  char *pcVar9;
  int local_14 [2];
  int local_c;
  char local_8;
  
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)local_14,param_6);
  if ((in_EAX == (undefined1 *)0x0) || (param_1 == 0)) {
    puVar1 = (undefined4 *)FUN_10724278();
    uVar7 = 0x16;
  }
  else {
    iVar3 = param_2;
    if (param_2 < 1) {
      iVar3 = 0;
    }
    if (iVar3 + 9U < param_1) {
      if (param_5 != '\0') {
        __shift();
      }
      puVar5 = in_EAX;
      if (*param_4 == 0x2d) {
        *in_EAX = 0x2d;
        puVar5 = in_EAX + 1;
      }
      puVar6 = puVar5;
      if (0 < param_2) {
        puVar6 = puVar5 + 1;
        *puVar5 = *puVar6;
        *puVar6 = *(undefined1 *)**(undefined4 **)(local_14[0] + 0xbc);
      }
      _Dst = puVar6 + (uint)(param_5 == '\0') + param_2;
      if (param_1 == 0xffffffff) {
        puVar5 = (undefined1 *)0xffffffff;
      }
      else {
        puVar5 = in_EAX + (param_1 - (int)_Dst);
      }
      pcVar9 = "e+000";
      eVar2 = _strcpy_s(_Dst,(rsize_t)puVar5,"e+000");
      if (eVar2 != 0) {
                    /* WARNING: Subroutine does not return */
        __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      if (param_3 != 0) {
        *_Dst = 'E';
      }
      if (*(char *)param_4[3] != '0') {
        iVar3 = param_4[1] + -1;
        if (iVar3 < 0) {
          iVar3 = -iVar3;
          _Dst[1] = '-';
        }
        if (99 < iVar3) {
          pcVar9 = (char *)0x64;
          iVar4 = iVar3 / 100;
          iVar3 = iVar3 % 100;
          _Dst[2] = _Dst[2] + (char)iVar4;
        }
        if (9 < iVar3) {
          pcVar9 = (char *)0xa;
          iVar4 = iVar3 / 10;
          iVar3 = iVar3 % 10;
          _Dst[3] = _Dst[3] + (char)iVar4;
        }
        _Dst[4] = _Dst[4] + (char)iVar3;
      }
      if (((DAT_1076c81c & 1) != 0) && (_Dst[2] == '0')) {
        pcVar9 = (char *)0x3;
        _memmove(_Dst + 2,_Dst + 3,3);
      }
      if (local_8 == '\0') {
        return pcVar9;
      }
      *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
      return pcVar9;
    }
    puVar1 = (undefined4 *)FUN_10724278();
    uVar7 = 0x22;
  }
  uVar8 = 0;
  *puVar1 = uVar7;
  FUN_10723411((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  if (local_8 != '\0') {
    *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
  }
  return uVar8;
}


// ==== 1071da1c __cftoe_l

/* Library Function - Single Match
    __cftoe_l
   
   Library: Visual Studio 2005 Release */

void __cdecl
__cftoe_l(double *param_1,undefined1 *param_2,uint param_3,int param_4,int param_5,
         localeinfo_struct *param_6)

{
  undefined4 *puVar1;
  size_t _SizeInBytes;
  errno_t eVar2;
  _strflt local_30;
  char local_20 [24];
  uint local_8;
  
  local_8 = DAT_10765c70 ^ (uint)&stack0xfffffffc;
  __fltout2((_CRT_DOUBLE)*param_1,&local_30,local_20,0x16);
  if ((param_2 == (undefined1 *)0x0) || (param_3 == 0)) {
    puVar1 = (undefined4 *)FUN_10724278();
    *puVar1 = 0x16;
    FUN_10723411((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  }
  else {
    if (param_3 == 0xffffffff) {
      _SizeInBytes = 0xffffffff;
    }
    else {
      _SizeInBytes = (param_3 - (local_30.sign == 0x2d)) - (uint)(0 < param_4);
    }
    eVar2 = __fptostr(param_2 + (uint)(0 < param_4) + (uint)(local_30.sign == 0x2d),_SizeInBytes,
                      param_4 + 1,&local_30);
    if (eVar2 == 0) {
      __cftoe2_l(param_3,param_4,param_5,&local_30.sign,'\0',param_6);
    }
    else {
      *param_2 = 0;
    }
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


// ==== 1071daea __cftoe

/* Library Function - Single Match
    __cftoe
   
   Library: Visual Studio 2005 Release */

errno_t __cdecl __cftoe(double *_Value,char *_Buf,size_t _SizeInBytes,int _Dec,int _Caps)

{
  errno_t eVar1;
  
  eVar1 = __cftoe_l(_Value,_Buf,_SizeInBytes,_Dec,_Caps,(localeinfo_struct *)0x0);
  return eVar1;
}


// ==== 1071db08 __cftoa_l

/* Library Function - Single Match
    __cftoa_l
   
   Library: Visual Studio 2005 Release */

errno_t __cdecl
__cftoa_l(double *param_1,undefined1 *param_2,uint param_3,size_t param_4,int param_5,
         localeinfo_struct *param_6)

{
  ushort uVar1;
  undefined4 *puVar2;
  size_t _SizeInBytes;
  char *pcVar3;
  char *pcVar4;
  uint uVar5;
  uint uVar6;
  uint extraout_ECX;
  uint extraout_ECX_00;
  uint extraout_ECX_01;
  short sVar7;
  errno_t unaff_EBX;
  char *pcVar8;
  char *pcVar9;
  bool bVar10;
  ulonglong uVar11;
  undefined8 uVar12;
  undefined4 uVar13;
  errno_t eVar14;
  int local_28 [2];
  int local_20;
  char local_1c;
  uint local_18;
  undefined4 local_14;
  uint local_10;
  uint local_c;
  int local_8;
  
  local_18 = 0x3ff;
  local_8 = 0x30;
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)local_28,param_6);
  if ((int)param_4 < 0) {
    param_4 = 0;
  }
  if ((param_2 == (undefined1 *)0x0) || (param_3 == 0)) {
    puVar2 = (undefined4 *)FUN_10724278();
    uVar13 = 0x16;
LAB_1071db41:
    eVar14 = 0;
    *puVar2 = uVar13;
    FUN_10723411((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    if (local_1c != '\0') {
      *(uint *)(local_20 + 0x70) = *(uint *)(local_20 + 0x70) & 0xfffffffd;
    }
    return eVar14;
  }
  *param_2 = 0;
  if (param_3 <= param_4 + 0xb) {
    puVar2 = (undefined4 *)FUN_10724278();
    uVar13 = 0x22;
    goto LAB_1071db41;
  }
  local_10 = *(uint *)param_1;
  if ((*(uint *)((int)param_1 + 4) >> 0x14 & 0x7ff) == 0x7ff) {
    if (param_3 == 0xffffffff) {
      _SizeInBytes = 0xffffffff;
    }
    else {
      _SizeInBytes = param_3 - 2;
    }
    eVar14 = __cftoe(param_1,param_2 + 2,_SizeInBytes,param_4,0);
    if (eVar14 != 0) {
      *param_2 = 0;
      if (local_1c == '\0') {
        return unaff_EBX;
      }
      *(uint *)(local_20 + 0x70) = *(uint *)(local_20 + 0x70) & 0xfffffffd;
      return unaff_EBX;
    }
    if (param_2[2] == '-') {
      *param_2 = 0x2d;
      param_2 = param_2 + 1;
    }
    *param_2 = 0x30;
    param_2[1] = ((param_5 == 0) - 1U & 0xe0) + 0x78;
    pcVar3 = _strrchr(param_2 + 2,0x65);
    if (pcVar3 != (char *)0x0) {
      *pcVar3 = ((param_5 == 0) - 1U & 0xe0) + 0x70;
      pcVar3[3] = '\0';
    }
    goto LAB_1071de65;
  }
  if ((*(uint *)((int)param_1 + 4) & 0x80000000) != 0) {
    *param_2 = 0x2d;
    param_2 = param_2 + 1;
  }
  *param_2 = 0x30;
  param_2[1] = ((param_5 == 0) - 1U & 0xe0) + 0x78;
  sVar7 = (-(ushort)(param_5 != 0) & 0xffe0) + 0x27;
  if (((ulonglong)*param_1 & 0x7ff0000000000000) == 0) {
    param_2[2] = 0x30;
    if (*(int *)param_1 == 0 && ((ulonglong)*param_1 & 0xfffff00000000) == 0) {
      local_18 = 0;
    }
    else {
      local_18 = 0x3fe;
    }
  }
  else {
    param_2[2] = 0x31;
  }
  pcVar9 = param_2 + 3;
  pcVar3 = param_2 + 4;
  if (param_4 == 0) {
    *pcVar9 = '\0';
  }
  else {
    *pcVar9 = *(char *)**(undefined4 **)(local_28[0] + 0xbc);
  }
  if ((((ulonglong)*param_1 & 0xfffff00000000) != 0) || (local_c = 0, *(int *)param_1 != 0)) {
    local_10 = 0;
    local_c = 0xf0000;
    do {
      if ((int)param_4 < 1) break;
      uVar11 = __aullshr((byte)local_8,*(uint *)((int)param_1 + 4) & local_c & 0xfffff);
      uVar1 = (short)uVar11 + 0x30;
      if (0x39 < uVar1) {
        uVar1 = uVar1 + sVar7;
      }
      local_8 = local_8 + -4;
      *pcVar3 = (char)uVar1;
      local_10 = local_10 >> 4 | local_c << 0x1c;
      local_c = local_c >> 4;
      pcVar3 = pcVar3 + 1;
      param_4 = param_4 - 1;
    } while (-1 < (short)local_8);
    if ((-1 < (short)local_8) &&
       (uVar11 = __aullshr((byte)local_8,*(uint *)((int)param_1 + 4) & local_c & 0xfffff),
       pcVar8 = pcVar3, 8 < (ushort)uVar11)) {
      while( true ) {
        pcVar4 = pcVar8 + -1;
        if ((*pcVar4 != 'f') && (*pcVar4 != 'F')) break;
        *pcVar4 = '0';
        pcVar8 = pcVar4;
      }
      if (pcVar4 == pcVar9) {
        pcVar8[-2] = pcVar8[-2] + '\x01';
      }
      else if (*pcVar4 == '9') {
        *pcVar4 = (char)sVar7 + ':';
      }
      else {
        *pcVar4 = *pcVar4 + '\x01';
      }
    }
  }
  if (0 < (int)param_4) {
    _memset(pcVar3,0x30,param_4);
    pcVar3 = pcVar3 + param_4;
  }
  if (*pcVar9 == '\0') {
    pcVar3 = pcVar9;
  }
  *pcVar3 = ((param_5 == 0) - 1U & 0xe0) + 0x70;
  uVar11 = __aullshr(0x34,*(uint *)((int)param_1 + 4));
  uVar5 = (uint)(uVar11 & 0x7ff);
  uVar6 = uVar5 - local_18;
  uVar5 = -(uint)(uVar5 < local_18);
  if ((int)uVar5 < 0) {
    pcVar3[1] = '-';
    bVar10 = uVar6 != 0;
    uVar6 = -uVar6;
    uVar5 = -(uVar5 + bVar10);
  }
  else {
    pcVar3[1] = '+';
  }
  pcVar8 = pcVar3 + 2;
  *pcVar8 = '0';
  pcVar9 = pcVar8;
  if (((int)uVar5 < 0) || (((int)uVar5 < 1 && (uVar6 < 1000)))) {
LAB_1071de14:
    if ((-1 < (int)uVar5) && ((0 < (int)uVar5 || (99 < uVar6)))) goto LAB_1071de1f;
  }
  else {
    uVar12 = __alldvrm(uVar6,uVar5,1000,0);
    local_14 = (undefined4)((ulonglong)uVar12 >> 0x20);
    *pcVar8 = (char)uVar12 + '0';
    pcVar9 = pcVar3 + 3;
    uVar5 = 0;
    uVar6 = extraout_ECX;
    if (pcVar9 == pcVar8) goto LAB_1071de14;
LAB_1071de1f:
    uVar12 = __alldvrm(uVar6,uVar5,100,0);
    local_14 = (undefined4)((ulonglong)uVar12 >> 0x20);
    *pcVar9 = (char)uVar12 + '0';
    pcVar9 = pcVar9 + 1;
    uVar5 = 0;
    uVar6 = extraout_ECX_00;
  }
  if ((pcVar9 != pcVar8) || ((-1 < (int)uVar5 && ((0 < (int)uVar5 || (9 < uVar6)))))) {
    uVar12 = __alldvrm(uVar6,uVar5,10,0);
    *pcVar9 = (char)uVar12 + '0';
    pcVar9 = pcVar9 + 1;
    uVar6 = extraout_ECX_01;
  }
  *pcVar9 = (char)uVar6 + '0';
  pcVar9[1] = '\0';
LAB_1071de65:
  if (local_1c == '\0') {
    return unaff_EBX;
  }
  *(uint *)(local_20 + 0x70) = *(uint *)(local_20 + 0x70) & 0xfffffffd;
  return unaff_EBX;
}


// ==== 1071de79 __cftoa

/* Library Function - Single Match
    __cftoa
   
   Library: Visual Studio 2005 Release */

errno_t __cdecl __cftoa(double *_Value,char *_Buf,size_t _SizeInBytes,int _Dec,int _Caps)

{
  errno_t extraout_EAX;
  
  __cftoa_l(_Value,_Buf,_SizeInBytes,_Dec,_Caps,(localeinfo_struct *)0x0);
  return extraout_EAX;
}


// ==== 1071de97 __cftof2_l

/* Library Function - Single Match
    __cftof2_l
   
   Library: Visual Studio 2005 Release */

undefined4 __thiscall
__cftof2_l(void *this,int param_1,size_t param_2,char param_3,localeinfo_struct *param_4)

{
  int iVar1;
  int *in_EAX;
  undefined4 *puVar2;
  undefined1 *puVar3;
  undefined4 uVar4;
  size_t sVar5;
  int local_14 [2];
  int local_c;
  char local_8;
  
  iVar1 = in_EAX[1];
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)local_14,param_4);
  if ((this == (void *)0x0) || (param_1 == 0)) {
    puVar2 = (undefined4 *)FUN_10724278();
    uVar4 = 0x16;
    *puVar2 = 0x16;
    FUN_10723411((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    if (local_8 != '\0') {
      *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
    }
  }
  else {
    if ((param_3 != '\0') && (iVar1 - 1U == param_2)) {
      puVar3 = (undefined1 *)((uint)(*in_EAX == 0x2d) + (iVar1 - 1U) + (int)this);
      *puVar3 = 0x30;
      puVar3[1] = 0;
    }
    if (*in_EAX == 0x2d) {
      *(undefined1 *)this = 0x2d;
      this = (void *)((int)this + 1);
    }
    if (in_EAX[1] < 1) {
      __shift();
      *(undefined1 *)this = 0x30;
      puVar3 = (undefined1 *)((int)this + 1);
    }
    else {
      puVar3 = (undefined1 *)((int)this + in_EAX[1]);
    }
    if (0 < (int)param_2) {
      __shift();
      *puVar3 = *(undefined1 *)**(undefined4 **)(local_14[0] + 0xbc);
      if (in_EAX[1] < 0) {
        sVar5 = -in_EAX[1];
        if ((param_3 != '\0') || ((int)sVar5 <= (int)param_2)) {
          param_2 = sVar5;
        }
        __shift();
        _memset(puVar3 + 1,0x30,param_2);
      }
    }
    if (local_8 != '\0') {
      *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
    }
    uVar4 = 0;
  }
  return uVar4;
}


// ==== 1071df8c __cftof_l

/* Library Function - Single Match
    __cftof_l
   
   Library: Visual Studio 2005 Release */

void __cdecl
__cftof_l(double *param_1,undefined1 *param_2,int param_3,size_t param_4,localeinfo_struct *param_5)

{
  undefined4 *puVar1;
  size_t _SizeInBytes;
  errno_t eVar2;
  _strflt local_30;
  char local_20 [24];
  uint local_8;
  
  local_8 = DAT_10765c70 ^ (uint)&stack0xfffffffc;
  __fltout2((_CRT_DOUBLE)*param_1,&local_30,local_20,0x16);
  if ((param_2 == (undefined1 *)0x0) || (param_3 == 0)) {
    puVar1 = (undefined4 *)FUN_10724278();
    *puVar1 = 0x16;
    FUN_10723411((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  }
  else {
    if (param_3 == -1) {
      _SizeInBytes = 0xffffffff;
    }
    else {
      _SizeInBytes = param_3 - (uint)(local_30.sign == 0x2d);
    }
    eVar2 = __fptostr(param_2 + (local_30.sign == 0x2d),_SizeInBytes,local_30.decpt + param_4,
                      &local_30);
    if (eVar2 == 0) {
      __cftof2_l(param_2,param_3,param_4,'\0',param_5);
    }
    else {
      *param_2 = 0;
    }
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


// ==== 1071e060 __cftog_l

/* Library Function - Single Match
    __cftog_l
   
   Library: Visual Studio 2005 Release */

void __cdecl
__cftog_l(double *param_1,undefined1 *param_2,uint param_3,size_t param_4,int param_5,
         localeinfo_struct *param_6)

{
  char *pcVar1;
  undefined4 *puVar2;
  errno_t eVar3;
  size_t _SizeInBytes;
  char *pcVar4;
  _strflt local_34;
  int local_24;
  char local_20 [24];
  uint local_8;
  
  local_8 = DAT_10765c70 ^ (uint)&stack0xfffffffc;
  __fltout2((_CRT_DOUBLE)*param_1,&local_34,local_20,0x16);
  if ((param_2 == (undefined1 *)0x0) || (param_3 == 0)) {
    puVar2 = (undefined4 *)FUN_10724278();
    *puVar2 = 0x16;
    FUN_10723411((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  }
  else {
    local_24 = local_34.decpt + -1;
    if (param_3 == 0xffffffff) {
      _SizeInBytes = 0xffffffff;
    }
    else {
      _SizeInBytes = param_3 - (local_34.sign == 0x2d);
    }
    eVar3 = __fptostr(param_2 + (local_34.sign == 0x2d),_SizeInBytes,param_4,&local_34);
    if (eVar3 == 0) {
      local_34.decpt = local_34.decpt + -1;
      if ((local_34.decpt < -4) || ((int)param_4 <= local_34.decpt)) {
        __cftoe2_l(param_3,param_4,param_5,&local_34.sign,'\x01',param_6);
      }
      else {
        pcVar1 = param_2 + (local_34.sign == 0x2d);
        if (local_24 < local_34.decpt) {
          do {
            pcVar4 = pcVar1;
            pcVar1 = pcVar4 + 1;
          } while (*pcVar4 != '\0');
          pcVar4[-1] = '\0';
        }
        __cftof2_l(param_2,param_3,param_4,'\x01',param_6);
      }
    }
    else {
      *param_2 = 0;
    }
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


// ==== 1071e158 __cftog

/* Library Function - Single Match
    __cftog
   
   Library: Visual Studio 2005 Release */

void __cdecl __cftog(double *param_1,undefined1 *param_2,uint param_3,size_t param_4,int param_5)

{
  __cftog_l(param_1,param_2,param_3,param_4,param_5,(localeinfo_struct *)0x0);
  return;
}


// ==== 1071e176 __cfltcvt_l

/* Library Function - Single Match
    __cfltcvt_l
   
   Library: Visual Studio 2005 Release */

errno_t __cdecl
__cfltcvt_l(double *arg,char *buffer,size_t sizeInBytes,int format,int precision,int caps,
           _locale_t plocinfo)

{
  errno_t eVar1;
  errno_t extraout_EAX;
  
  if ((format == 0x65) || (format == 0x45)) {
    eVar1 = __cftoe_l(arg,buffer,sizeInBytes,precision,caps,plocinfo);
  }
  else {
    if (format == 0x66) {
      eVar1 = __cftof_l(arg,buffer,sizeInBytes,precision,plocinfo);
      return eVar1;
    }
    if ((format == 0x61) || (format == 0x41)) {
      __cftoa_l(arg,buffer,sizeInBytes,precision,caps,plocinfo);
      eVar1 = extraout_EAX;
    }
    else {
      eVar1 = __cftog_l(arg,buffer,sizeInBytes,precision,caps,plocinfo);
    }
  }
  return eVar1;
}


// ==== 1071e1fc __cfltcvt

/* Library Function - Single Match
    __cfltcvt
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release, Visual Studio 2010 Release,
   Visual Studio 2012 Release */

errno_t __cdecl
__cfltcvt(double *arg,char *buffer,size_t sizeInBytes,int format,int precision,int caps)

{
  errno_t eVar1;
  
  eVar1 = __cfltcvt_l(arg,buffer,sizeInBytes,format,precision,caps,(_locale_t)0x0);
  return eVar1;
}


// ==== 1071e21d __initp_misc_cfltcvt_tab

/* Library Function - Single Match
    __initp_misc_cfltcvt_tab
   
   Library: Visual Studio 2005 Release */

void __initp_misc_cfltcvt_tab(void)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = 0;
  do {
    piVar1 = (int *)((int)&PTR_LAB_10765c00 + uVar3);
    iVar2 = FUN_1071f690(*piVar1);
    uVar3 = uVar3 + 4;
    *piVar1 = iVar2;
  } while (uVar3 < 0x28);
  return;
}


// ==== 1071e23c __setdefaultprecision

/* Library Function - Single Match
    __setdefaultprecision
   
   Library: Visual Studio 2005 Release */

void __setdefaultprecision(void)

{
  errno_t eVar1;
  
  eVar1 = __controlfp_s((uint *)0x0,0x10000,0x30000);
  if (eVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  }
  return;
}


// ==== 1071e265 __ms_p5_test_fdiv

/* WARNING: Removing unreachable block (ram,0x1071e298) */
/* Library Function - Single Match
    __ms_p5_test_fdiv
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release */

undefined4 __ms_p5_test_fdiv(void)

{
  return 0;
}


// ==== 1071e2a1 __ms_p5_mp_test_fdiv

/* Library Function - Single Match
    __ms_p5_mp_test_fdiv
   
   Library: Visual Studio 2005 Release */

void __ms_p5_mp_test_fdiv(void)

{
  HMODULE hModule;
  FARPROC pFVar1;
  
  hModule = GetModuleHandleA("KERNEL32");
  if (hModule != (HMODULE)0x0) {
    pFVar1 = GetProcAddress(hModule,"IsProcessorFeaturePresent");
    if (pFVar1 != (FARPROC)0x0) {
      (*pFVar1)(0);
      return;
    }
  }
  __ms_p5_test_fdiv();
  return;
}


// ==== 1071e2ca FUN_1071e2ca

void __cdecl FUN_1071e2ca(undefined4 *param_1,undefined4 *param_2,uint param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  uint uVar16;
  
  uVar16 = param_3 >> 7;
  do {
    uVar1 = param_2[1];
    uVar2 = param_2[2];
    uVar3 = param_2[3];
    uVar4 = param_2[4];
    uVar5 = param_2[5];
    uVar6 = param_2[6];
    uVar7 = param_2[7];
    uVar8 = param_2[8];
    uVar9 = param_2[9];
    uVar10 = param_2[10];
    uVar11 = param_2[0xb];
    uVar12 = param_2[0xc];
    uVar13 = param_2[0xd];
    uVar14 = param_2[0xe];
    uVar15 = param_2[0xf];
    *param_1 = *param_2;
    param_1[1] = uVar1;
    param_1[2] = uVar2;
    param_1[3] = uVar3;
    param_1[4] = uVar4;
    param_1[5] = uVar5;
    param_1[6] = uVar6;
    param_1[7] = uVar7;
    param_1[8] = uVar8;
    param_1[9] = uVar9;
    param_1[10] = uVar10;
    param_1[0xb] = uVar11;
    param_1[0xc] = uVar12;
    param_1[0xd] = uVar13;
    param_1[0xe] = uVar14;
    param_1[0xf] = uVar15;
    uVar1 = param_2[0x11];
    uVar2 = param_2[0x12];
    uVar3 = param_2[0x13];
    uVar4 = param_2[0x14];
    uVar5 = param_2[0x15];
    uVar6 = param_2[0x16];
    uVar7 = param_2[0x17];
    uVar8 = param_2[0x18];
    uVar9 = param_2[0x19];
    uVar10 = param_2[0x1a];
    uVar11 = param_2[0x1b];
    uVar12 = param_2[0x1c];
    uVar13 = param_2[0x1d];
    uVar14 = param_2[0x1e];
    uVar15 = param_2[0x1f];
    param_1[0x10] = param_2[0x10];
    param_1[0x11] = uVar1;
    param_1[0x12] = uVar2;
    param_1[0x13] = uVar3;
    param_1[0x14] = uVar4;
    param_1[0x15] = uVar5;
    param_1[0x16] = uVar6;
    param_1[0x17] = uVar7;
    param_1[0x18] = uVar8;
    param_1[0x19] = uVar9;
    param_1[0x1a] = uVar10;
    param_1[0x1b] = uVar11;
    param_1[0x1c] = uVar12;
    param_1[0x1d] = uVar13;
    param_1[0x1e] = uVar14;
    param_1[0x1f] = uVar15;
    param_2 = param_2 + 0x20;
    param_1 = param_1 + 0x20;
    uVar16 = uVar16 - 1;
  } while (uVar16 != 0);
  return;
}


// ==== 1071e351 __VEC_memcpy

/* Library Function - Single Match
    __VEC_memcpy
   
   Libraries: Visual Studio 2005 Debug, Visual Studio 2005 Release, Visual Studio 2008 Debug, Visual
   Studio 2008 Release */

undefined4 * __cdecl __VEC_memcpy(undefined4 *param_1,undefined4 *param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined1 *puVar4;
  undefined4 *puVar5;
  uint uVar6;
  undefined1 *puVar7;
  undefined4 *puVar8;
  
  uVar3 = (int)param_2 >> 0x1f;
  iVar1 = (((uint)param_2 ^ uVar3) - uVar3 & 0xf ^ uVar3) - uVar3;
  uVar3 = (int)param_1 >> 0x1f;
  uVar6 = ((uint)param_1 ^ uVar3) - uVar3 & 0xf ^ uVar3;
  if (iVar1 == 0 && uVar6 == uVar3) {
    uVar3 = param_3 & 0x7f;
    if (param_3 != uVar3) {
      FUN_1071e2ca(param_1,param_2,param_3 - uVar3);
    }
    if (uVar3 != 0) {
      puVar4 = (undefined1 *)((int)param_2 + (param_3 - uVar3));
      puVar7 = (undefined1 *)((int)param_1 + (param_3 - uVar3));
      for (; uVar3 != 0; uVar3 = uVar3 - 1) {
        *puVar7 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar7 = puVar7 + 1;
      }
    }
  }
  else if (iVar1 == uVar6 - uVar3) {
    iVar1 = 0x10 - iVar1;
    puVar5 = param_2;
    puVar8 = param_1;
    for (iVar2 = iVar1; iVar2 != 0; iVar2 = iVar2 + -1) {
      *(undefined1 *)puVar8 = *(undefined1 *)puVar5;
      puVar5 = (undefined4 *)((int)puVar5 + 1);
      puVar8 = (undefined4 *)((int)puVar8 + 1);
    }
    __VEC_memcpy((undefined4 *)((int)param_1 + iVar1),(undefined4 *)((int)param_2 + iVar1),
                 param_3 - iVar1);
  }
  else {
    puVar5 = param_1;
    for (uVar3 = param_3 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
      *puVar5 = *param_2;
      param_2 = param_2 + 1;
      puVar5 = puVar5 + 1;
    }
    for (uVar3 = param_3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(undefined1 *)puVar5 = *(undefined1 *)param_2;
      param_2 = (undefined4 *)((int)param_2 + 1);
      puVar5 = (undefined4 *)((int)puVar5 + 1);
    }
  }
  return param_1;
}


// ==== 1071e480 FUN_1071e480

exception * __thiscall FUN_1071e480(void *this,byte param_1)

{
  *(undefined ***)this = std::bad_exception::vftable;
  exception::~exception(this);
  if ((param_1 & 1) != 0) {
    thunk_FUN_107026f0(this);
  }
  return this;
}


// ==== 1071e4a2 ___TypeMatch

/* Library Function - Single Match
    ___TypeMatch
   
   Library: Visual Studio 2005 Release */

undefined4 __cdecl ___TypeMatch(byte *param_1,byte *param_2,uint *param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = *(int *)(param_1 + 4);
  if ((iVar1 == 0) || (*(char *)(iVar1 + 8) == '\0')) {
LAB_1071e4f8:
    uVar2 = 1;
  }
  else {
    if (iVar1 == *(int *)(param_2 + 4)) {
LAB_1071e4d6:
      if (((((*param_2 & 2) == 0) || ((*param_1 & 8) != 0)) &&
          (((*param_3 & 1) == 0 || ((*param_1 & 1) != 0)))) &&
         (((*param_3 & 2) == 0 || ((*param_1 & 2) != 0)))) goto LAB_1071e4f8;
    }
    else {
      iVar1 = _strcmp((char *)(iVar1 + 8),(char *)(*(int *)(param_2 + 4) + 8));
      if (iVar1 == 0) goto LAB_1071e4d6;
    }
    uVar2 = 0;
  }
  return uVar2;
}


// ==== 1071e542 ___FrameUnwindToState

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    ___FrameUnwindToState
   
   Library: Visual Studio 2005 Release */

void __cdecl ___FrameUnwindToState(int param_1,undefined4 param_2,int param_3,int param_4)

{
  _ptiddata p_Var1;
  int iVar2;
  int *piVar3;
  int iVar4;
  
  if (*(int *)(param_3 + 4) < 0x81) {
    iVar4 = (int)*(char *)(param_1 + 8);
  }
  else {
    iVar4 = *(int *)(param_1 + 8);
  }
  p_Var1 = __getptd();
  p_Var1->_ProcessingThrow = p_Var1->_ProcessingThrow + 1;
  while (iVar4 != param_4) {
    if ((iVar4 < 0) || (*(int *)(param_3 + 4) <= iVar4)) {
      _inconsistency();
    }
    iVar2 = iVar4 * 8;
    piVar3 = (int *)(*(int *)(param_3 + 8) + iVar2);
    iVar4 = *piVar3;
    if (piVar3[1] != 0) {
      *(int *)(param_1 + 8) = iVar4;
      __CallSettingFrame_12(*(undefined4 *)(*(int *)(param_3 + 8) + 4 + iVar2),param_1,0x103);
    }
  }
  FUN_1071e608();
  if (iVar4 != param_4) {
    _inconsistency();
  }
  *(int *)(param_1 + 8) = iVar4;
  return;
}


// ==== 1071e608 FUN_1071e608

void FUN_1071e608(void)

{
  _ptiddata p_Var1;
  
  p_Var1 = __getptd();
  if (0 < p_Var1->_ProcessingThrow) {
    p_Var1 = __getptd();
    p_Var1->_ProcessingThrow = p_Var1->_ProcessingThrow + -1;
  }
  return;
}


// ==== 1071e668 ___DestructExceptionObject

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    ___DestructExceptionObject
   
   Library: Visual Studio 2005 Release */

void __cdecl ___DestructExceptionObject(int *param_1)

{
  void *pvVar1;
  
  if ((((param_1 != (int *)0x0) && (*param_1 == -0x1f928c9d)) && (param_1[7] != 0)) &&
     (pvVar1 = *(void **)(param_1[7] + 4), pvVar1 != (void *)0x0)) {
    _CallMemberFunction0((void *)param_1[6],pvVar1);
  }
  return;
}


// ==== 1071e6bc ___AdjustPointer

/* Library Function - Single Match
    ___AdjustPointer
   
   Library: Visual Studio 2005 Release */

int __cdecl ___AdjustPointer(int param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_2 + param_1;
  if (-1 < param_2[1]) {
    iVar1 = iVar1 + *(int *)(*(int *)(param_2[1] + param_1) + param_2[2]) + param_2[1];
  }
  return iVar1;
}


// ==== 1071ea02 IsInExceptionSpec

/* Library Function - Single Match
    unsigned char __cdecl IsInExceptionSpec(struct EHExceptionRecord *,struct _s_ESTypeList const *)
   
   Library: Visual Studio 2005 Release */

uchar __cdecl IsInExceptionSpec(EHExceptionRecord *param_1,_s_ESTypeList *param_2)

{
  uchar extraout_AL;
  int iVar1;
  int iVar2;
  int *piVar3;
  int *unaff_EDI;
  int local_c;
  uchar local_5;
  
  if (unaff_EDI == (int *)0x0) {
    _inconsistency();
    terminate();
    return extraout_AL;
  }
  local_c = 0;
  local_5 = '\0';
  if (0 < *unaff_EDI) {
    do {
      piVar3 = *(int **)(*(int *)(param_1 + 0x1c) + 0xc);
      iVar2 = *piVar3;
      if (0 < iVar2) {
        do {
          piVar3 = piVar3 + 1;
          iVar1 = ___TypeMatch((byte *)(unaff_EDI[1] + local_c * 0x10),(byte *)*piVar3,
                               *(uint **)(param_1 + 0x1c));
          if (iVar1 != 0) {
            local_5 = '\x01';
            break;
          }
          iVar2 = iVar2 + -1;
        } while (0 < iVar2);
      }
      local_c = local_c + 1;
    } while (local_c < *unaff_EDI);
  }
  return local_5;
}


// ==== 1071ea7b CallUnexpected

/* WARNING: Function: __EH_prolog3_catch replaced with injection: EH_prolog3 */
/* Library Function - Single Match
    void __cdecl CallUnexpected(struct _s_ESTypeList const *)
   
   Library: Visual Studio 2005 Release */

void __cdecl CallUnexpected(_s_ESTypeList *param_1)

{
  _ptiddata p_Var1;
  
  p_Var1 = __getptd();
  if (p_Var1->_curexcspec != (void *)0x0) {
    _inconsistency();
  }
  unexpected();
  terminate();
  return;
}


// ==== 1071eaac Catch_All@1071eaac

void Catch_All_1071eaac(void)

{
  _ptiddata p_Var1;
  int unaff_EBP;
  
  p_Var1 = __getptd();
  p_Var1->_curexcspec = *(void **)(unaff_EBP + 8);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 1071eb76 CallCatchBlock

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    void * __cdecl CallCatchBlock(struct EHExceptionRecord *,struct EHRegistrationNode *,struct
   _CONTEXT *,struct _s_FuncInfo const *,void *,int,unsigned long)
   
   Library: Visual Studio 2005 Release */

void * __cdecl
CallCatchBlock(EHExceptionRecord *param_1,EHRegistrationNode *param_2,_CONTEXT *param_3,
              _s_FuncInfo *param_4,void *param_5,int param_6,ulong param_7)

{
  _ptiddata p_Var1;
  void *in_ECX;
  undefined4 local_40 [2];
  undefined4 local_38;
  void *local_34;
  void *local_30;
  undefined4 *local_2c;
  undefined4 local_28;
  void *local_20;
  undefined4 uStack_c;
  undefined *local_8;
  
  local_8 = &DAT_1075c5c8;
  uStack_c = 0x1071eb82;
  local_38 = 0;
  local_28 = *(undefined4 *)(param_2 + -4);
  local_2c = __CreateFrameInfo(local_40,*(undefined4 *)(param_1 + 0x18));
  p_Var1 = __getptd();
  local_30 = p_Var1->_curexception;
  p_Var1 = __getptd();
  local_34 = p_Var1->_curcontext;
  p_Var1 = __getptd();
  p_Var1->_curexception = param_1;
  p_Var1 = __getptd();
  p_Var1->_curcontext = param_3;
  local_8 = (undefined *)0x1;
  local_20 = _CallCatchBlock2(param_2,param_4,in_ECX,(int)param_5,param_6);
  local_8 = (undefined *)0xfffffffe;
  FUN_1071ec9c();
  return local_20;
}


// ==== 1071ec9c FUN_1071ec9c

void FUN_1071ec9c(void)

{
  _ptiddata p_Var1;
  int iVar2;
  int unaff_EBP;
  int *unaff_ESI;
  int unaff_EDI;
  
  *(undefined4 *)(unaff_EDI + -4) = *(undefined4 *)(unaff_EBP + -0x24);
  __FindAndUnlinkFrame(*(void **)(unaff_EBP + -0x28));
  p_Var1 = __getptd();
  p_Var1->_curexception = *(void **)(unaff_EBP + -0x2c);
  p_Var1 = __getptd();
  p_Var1->_curcontext = *(void **)(unaff_EBP + -0x30);
  if ((((*unaff_ESI == -0x1f928c9d) && (unaff_ESI[4] == 3)) &&
      ((iVar2 = unaff_ESI[5], iVar2 == 0x19930520 ||
       ((iVar2 == 0x19930521 || (iVar2 == 0x19930522)))))) &&
     ((*(int *)(unaff_EBP + -0x34) == 0 && (*(int *)(unaff_EBP + -0x1c) != 0)))) {
    iVar2 = __IsExceptionObjectToBeDestroyed(unaff_ESI[6]);
    if (iVar2 != 0) {
      ___DestructExceptionObject(unaff_ESI);
    }
  }
  return;
}


// ==== 1071ed12 ___BuildCatchObjectHelper

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    ___BuildCatchObjectHelper
   
   Library: Visual Studio 2005 Release */

char __cdecl ___BuildCatchObjectHelper(int param_1,int *param_2,uint *param_3,byte *param_4)

{
  bool bVar1;
  int iVar2;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  undefined3 extraout_var_01;
  void *pvVar3;
  undefined3 extraout_var_02;
  undefined3 extraout_var_03;
  size_t _Size;
  
  if (((param_3[1] == 0) || (*(char *)(param_3[1] + 8) == '\0')) ||
     ((param_3[2] == 0 && ((*param_3 & 0x80000000) == 0)))) {
    return '\0';
  }
  if (-1 < (int)*param_3) {
    param_2 = (int *)(param_3[2] + 0xc + (int)param_2);
  }
  if ((*param_3 & 8) == 0) {
    pvVar3 = *(void **)(param_1 + 0x18);
    if ((*param_4 & 1) == 0) {
      if (*(int *)(param_4 + 0x18) == 0) {
        iVar2 = _ValidateRead(pvVar3,1);
        if ((iVar2 != 0) &&
           (bVar1 = FID_conflict__ValidateExecute((int)param_2),
           CONCAT31(extraout_var_01,bVar1) != 0)) {
          _Size = *(size_t *)(param_4 + 0x14);
          pvVar3 = (void *)___AdjustPointer(*(int *)(param_1 + 0x18),(int *)(param_4 + 8));
          _memmove(param_2,pvVar3,_Size);
          return '\0';
        }
      }
      else {
        iVar2 = _ValidateRead(pvVar3,1);
        if (((iVar2 != 0) &&
            (bVar1 = FID_conflict__ValidateExecute((int)param_2),
            CONCAT31(extraout_var_02,bVar1) != 0)) &&
           (bVar1 = FID_conflict__ValidateExecute(*(int *)(param_4 + 0x18)),
           CONCAT31(extraout_var_03,bVar1) != 0)) {
          return ((*param_4 & 4) != 0) + '\x01';
        }
      }
    }
    else {
      iVar2 = _ValidateRead(pvVar3,1);
      if ((iVar2 != 0) &&
         (bVar1 = FID_conflict__ValidateExecute((int)param_2), CONCAT31(extraout_var_00,bVar1) != 0)
         ) {
        _memmove(param_2,*(void **)(param_1 + 0x18),*(size_t *)(param_4 + 0x14));
        if (*(int *)(param_4 + 0x14) != 4) {
          return '\0';
        }
        iVar2 = *param_2;
        if (iVar2 == 0) {
          return '\0';
        }
        goto LAB_1071ed97;
      }
    }
  }
  else {
    iVar2 = _ValidateRead(*(void **)(param_1 + 0x18),1);
    if ((iVar2 != 0) &&
       (bVar1 = FID_conflict__ValidateExecute((int)param_2), CONCAT31(extraout_var,bVar1) != 0)) {
      iVar2 = *(int *)(param_1 + 0x18);
      *param_2 = iVar2;
LAB_1071ed97:
      iVar2 = ___AdjustPointer(iVar2,(int *)(param_4 + 8));
      *param_2 = iVar2;
      return '\0';
    }
  }
  _inconsistency();
  return '\0';
}


// ==== 1071ee91 ___BuildCatchObject

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    ___BuildCatchObject
   
   Library: Visual Studio 2005 Release */

void __cdecl ___BuildCatchObject(int param_1,int *param_2,uint *param_3,byte *param_4)

{
  char cVar1;
  undefined3 extraout_var;
  int *piVar2;
  
  piVar2 = param_2;
  if ((*param_3 & 0x80000000) == 0) {
    piVar2 = (int *)(param_3[2] + 0xc + (int)param_2);
  }
  cVar1 = ___BuildCatchObjectHelper(param_1,param_2,param_3,param_4);
  if (CONCAT31(extraout_var,cVar1) == 1) {
    ___AdjustPointer(*(int *)(param_1 + 0x18),(int *)(param_4 + 8));
    FID_conflict__CallMemberFunction1(piVar2,*(undefined **)(param_4 + 0x18));
  }
  else if (CONCAT31(extraout_var,cVar1) == 2) {
    ___AdjustPointer(*(int *)(param_1 + 0x18),(int *)(param_4 + 8));
    FID_conflict__CallMemberFunction1(piVar2,*(undefined **)(param_4 + 0x18));
  }
  return;
}


// ==== 1071ef22 ___CxxExceptionFilter

/* Library Function - Single Match
    ___CxxExceptionFilter
   
   Library: Visual Studio 2005 Release */

int __cdecl ___CxxExceptionFilter(void *param_1,void *param_2,int param_3,void *param_4)

{
  byte *pbVar1;
  _ptiddata p_Var2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  uint local_14;
  void *local_10;
  
  if (param_1 == (void *)0x0) {
    return 0;
  }
  piVar5 = *(int **)param_1;
  if (((param_2 == (void *)0x0) || (*(char *)((int)param_2 + 8) == '\0')) &&
     ((*piVar5 == -0x1fbcb0b3 || ((param_3 & 0x40U) == 0)))) {
    if (((((*piVar5 != -0x1f928c9d) || (piVar5[4] != 3)) ||
         ((iVar6 = piVar5[5], iVar6 != 0x19930520 &&
          ((iVar6 != 0x19930521 && (iVar6 != 0x19930522)))))) || (piVar5[7] != 0)) ||
       (p_Var2 = __getptd(), p_Var2->_curexception != (void *)0x0)) {
      p_Var2 = __getptd();
      p_Var2->_ProcessingThrow = p_Var2->_ProcessingThrow + 1;
      return 1;
    }
  }
  else if (((*piVar5 == -0x1f928c9d) && (piVar5[4] == 3)) &&
          ((iVar6 = piVar5[5], iVar6 == 0x19930520 ||
           ((iVar6 == 0x19930521 || (iVar6 == 0x19930522)))))) {
    if (piVar5[7] == 0) {
      p_Var2 = __getptd();
      if (p_Var2->_curexception == (void *)0x0) {
        return 0;
      }
      p_Var2 = __getptd();
      piVar5 = p_Var2->_curexception;
    }
    piVar4 = *(int **)(piVar5[7] + 0xc);
    local_14 = param_3 | 0x80000000;
    local_10 = param_2;
    for (iVar6 = *piVar4; piVar4 = piVar4 + 1, 0 < iVar6; iVar6 = iVar6 + -1) {
      pbVar1 = (byte *)*piVar4;
      iVar3 = ___TypeMatch((byte *)&local_14,pbVar1,(uint *)piVar5[7]);
      if (iVar3 != 0) {
        p_Var2 = __getptd();
        p_Var2->_ProcessingThrow = p_Var2->_ProcessingThrow + 1;
        if (param_4 == (void *)0x0) {
          return 1;
        }
        ___BuildCatchObject((int)piVar5,param_4,&local_14,pbVar1);
        return 1;
      }
    }
  }
  return 0;
}


// ==== 1071f065 CatchIt

/* Library Function - Single Match
    void __cdecl CatchIt(struct EHExceptionRecord *,struct EHRegistrationNode *,struct _CONTEXT
   *,void *,struct _s_FuncInfo const *,struct _s_HandlerType const *,struct _s_CatchableType const
   *,struct _s_TryBlockMapEntry const *,int,struct EHRegistrationNode *,unsigned char)
   
   Library: Visual Studio 2005 Release */

void __cdecl
CatchIt(EHExceptionRecord *param_1,EHRegistrationNode *param_2,_CONTEXT *param_3,void *param_4,
       _s_FuncInfo *param_5,_s_HandlerType *param_6,_s_CatchableType *param_7,
       _s_TryBlockMapEntry *param_8,int param_9,EHRegistrationNode *param_10,uchar param_11)

{
  void *pvVar1;
  uint *unaff_EBX;
  EHRegistrationNode *unaff_ESI;
  int *unaff_EDI;
  EHRegistrationNode *pEVar2;
  
  if (param_5 != (_s_FuncInfo *)0x0) {
    ___BuildCatchObject((int)param_1,(int *)unaff_ESI,unaff_EBX,(byte *)param_5);
  }
  if (param_7 == (_s_CatchableType *)0x0) {
    param_7 = (_s_CatchableType *)unaff_ESI;
  }
  _UnwindNestedFrames((EHRegistrationNode *)param_7,param_1);
  pEVar2 = unaff_ESI;
  ___FrameUnwindToState((int)unaff_ESI,param_3,(int)param_4,*unaff_EDI);
  *(int *)(unaff_ESI + 8) = unaff_EDI[1] + 1;
  pvVar1 = CallCatchBlock(param_1,unaff_ESI,(_CONTEXT *)param_2,param_4,param_6,0x100,(ulong)pEVar2)
  ;
  if (pvVar1 != (void *)0x0) {
    _JumpToContinuation(pvVar1,unaff_ESI);
  }
  return;
}


// ==== 1071f0d1 FindHandlerForForeignException

/* Library Function - Single Match
    void __cdecl FindHandlerForForeignException(struct EHExceptionRecord *,struct EHRegistrationNode
   *,struct _CONTEXT *,void *,struct _s_FuncInfo const *,int,int,struct EHRegistrationNode *)
   
   Library: Visual Studio 2005 Release */

void __cdecl
FindHandlerForForeignException
          (EHExceptionRecord *param_1,EHRegistrationNode *param_2,_CONTEXT *param_3,void *param_4,
          _s_FuncInfo *param_5,int param_6,int param_7,EHRegistrationNode *param_8)

{
  TypeDescriptor *pTVar1;
  _ptiddata p_Var2;
  void *pvVar3;
  int iVar4;
  _s_TryBlockMapEntry *p_Var5;
  _s_TryBlockMapEntry *unaff_EBX;
  EHRegistrationNode *unaff_ESI;
  int unaff_EDI;
  uint extraout_var;
  uint uVar6;
  uint local_8;
  
  if (*(int *)param_1 != -0x7ffffffd) {
    p_Var2 = __getptd();
    uVar6 = extraout_var;
    if (p_Var2->_translator != (void *)0x0) {
      p_Var2 = __getptd();
      pvVar3 = (void *)__encoded_null();
      if (((p_Var2->_translator != pvVar3) && (*(int *)param_1 != -0x1fbcb0b3)) &&
         (iVar4 = _CallSETranslator(param_1,param_2,param_3,param_4,param_5,param_7,param_8),
         iVar4 != 0)) {
        return;
      }
    }
    if (param_5->nTryBlocks == 0) {
      _inconsistency();
    }
    p_Var5 = _GetRangeOfTrysToCheck(param_5,param_7,param_6,&local_8,(uint *)&stack0xfffffff4);
    if (local_8 < uVar6) {
      do {
        if ((p_Var5->tryLow <= param_6) && (param_6 <= p_Var5->tryHigh)) {
          pTVar1 = p_Var5->pHandlerArray[p_Var5->nCatches + -1].pType;
          if (((pTVar1 == (TypeDescriptor *)0x0) || (*(char *)&pTVar1[1].pVFTable == '\0')) &&
             ((p_Var5->pHandlerArray[p_Var5->nCatches + -1].adjectives & 0x40) == 0)) {
            CatchIt(param_1,(EHRegistrationNode *)param_3,param_4,param_5,(_s_FuncInfo *)0x0,
                    (_s_HandlerType *)param_7,(_s_CatchableType *)param_8,unaff_EBX,unaff_EDI,
                    unaff_ESI,(uchar)uVar6);
          }
        }
        local_8 = local_8 + 1;
        p_Var5 = p_Var5 + 1;
      } while (local_8 < uVar6);
    }
  }
  return;
}


// ==== 1071f1c3 FindHandler

/* Library Function - Single Match
    void __cdecl FindHandler(struct EHExceptionRecord *,struct EHRegistrationNode *,struct _CONTEXT
   *,void *,struct _s_FuncInfo const *,unsigned char,int,struct EHRegistrationNode *)
   
   Library: Visual Studio 2005 Release */

void __cdecl
FindHandler(EHExceptionRecord *param_1,EHRegistrationNode *param_2,_CONTEXT *param_3,void *param_4,
           _s_FuncInfo *param_5,uchar param_6,int param_7,EHRegistrationNode *param_8)

{
  uint uVar1;
  int *piVar2;
  uchar uVar3;
  bool bVar4;
  _ptiddata p_Var5;
  int iVar6;
  _s_TryBlockMapEntry *p_Var7;
  EHRegistrationNode *unaff_EBX;
  int iVar8;
  HandlerType *pHVar9;
  _s_FuncInfo *p_Var10;
  int unaff_ESI;
  _s_FuncInfo *p_Var11;
  _s_TryBlockMapEntry *unaff_EDI;
  EHRegistrationNode *pEVar12;
  undefined4 in_stack_ffffffd0;
  uint local_20;
  int local_1c;
  uint local_18;
  uint local_14;
  HandlerType *local_10;
  int local_c;
  char local_5;
  
  p_Var10 = param_5;
  local_5 = '\0';
  if (param_5->maxState < 0x81) {
    local_c = (int)(char)param_2[8];
  }
  else {
    local_c = *(int *)(param_2 + 8);
  }
  if ((local_c < -1) || (param_5->maxState <= local_c)) {
    _inconsistency();
  }
  p_Var11 = (_s_FuncInfo *)param_1;
  if (*(int *)param_1 == -0x1f928c9d) {
    if (((*(int *)(param_1 + 0x10) == 3) &&
        (((iVar6 = *(int *)(param_1 + 0x14), iVar6 == 0x19930520 || (iVar6 == 0x19930521)) ||
         (iVar6 == 0x19930522)))) && (*(int *)(param_1 + 0x1c) == 0)) {
      p_Var5 = __getptd();
      if (p_Var5->_curexception == (void *)0x0) {
        return;
      }
      p_Var5 = __getptd();
      p_Var11 = p_Var5->_curexception;
      param_1 = (EHExceptionRecord *)p_Var11;
      p_Var5 = __getptd();
      param_3 = p_Var5->_curcontext;
      iVar6 = _ValidateRead(p_Var11,1);
      if (iVar6 == 0) {
        _inconsistency();
      }
      if ((((p_Var11->magicNumber_and_bbtFlags == 0xe06d7363) &&
           (p_Var11->pTryBlockMap == (TryBlockMapEntry *)0x3)) &&
          ((uVar1 = p_Var11->nIPMapEntries, uVar1 == 0x19930520 ||
           ((uVar1 == 0x19930521 || (uVar1 == 0x19930522)))))) &&
         (p_Var11->pESTypeList == (ESTypeList *)0x0)) {
        _inconsistency();
      }
      p_Var5 = __getptd();
      if (p_Var5->_curexcspec != (void *)0x0) {
        p_Var5 = __getptd();
        piVar2 = p_Var5->_curexcspec;
        p_Var5 = __getptd();
        iVar6 = 0;
        p_Var5->_curexcspec = (void *)0x0;
        uVar3 = IsInExceptionSpec(param_1,(_s_ESTypeList *)unaff_EDI);
        p_Var11 = (_s_FuncInfo *)param_1;
        if (uVar3 == '\0') {
          iVar8 = 0;
          if (0 < *piVar2) {
            do {
              bVar4 = type_info::operator==
                                (*(type_info **)(iVar8 + 4 + piVar2[1]),
                                 (type_info *)&std::bad_exception::RTTI_Type_Descriptor);
              if (bVar4) {
                ___DestructExceptionObject((int *)param_1);
                param_1 = (EHExceptionRecord *)s_bad_exception_107518d8;
                std::exception::exception((exception *)&stack0xffffffd0,(char **)&param_1);
                    /* WARNING: Subroutine does not return */
                __CxxThrowException_8(&stack0xffffffd0,&DAT_1075c62c);
              }
              iVar6 = iVar6 + 1;
              iVar8 = iVar8 + 0x10;
            } while (iVar6 < *piVar2);
          }
          goto LAB_1071f301;
        }
      }
    }
    p_Var10 = param_5;
    if (((p_Var11->magicNumber_and_bbtFlags == 0xe06d7363) &&
        (p_Var11->pTryBlockMap == (TryBlockMapEntry *)0x3)) &&
       ((uVar1 = p_Var11->nIPMapEntries, uVar1 == 0x19930520 ||
        ((uVar1 == 0x19930521 || (uVar1 == 0x19930522)))))) {
      if (param_5->nTryBlocks != 0) {
        p_Var7 = _GetRangeOfTrysToCheck(param_5,param_7,local_c,&local_14,&local_20);
        for (; local_14 < local_20; local_14 = local_14 + 1) {
          if ((p_Var7->tryLow <= local_c) && (local_c <= p_Var7->tryHigh)) {
            local_10 = p_Var7->pHandlerArray;
            for (local_1c = p_Var7->nCatches; 0 < local_1c; local_1c = local_1c + -1) {
              pHVar9 = p_Var11->pESTypeList[1].pTypeArray;
              for (local_18 = pHVar9->adjectives; 0 < (int)local_18; local_18 = local_18 - 1) {
                pHVar9 = (HandlerType *)&pHVar9->pType;
                p_Var10 = *(_s_FuncInfo **)pHVar9;
                iVar6 = ___TypeMatch((byte *)local_10,(byte *)p_Var10,(uint *)p_Var11->pESTypeList);
                if (iVar6 != 0) {
                  local_5 = '\x01';
                  CatchIt((EHExceptionRecord *)p_Var11,(EHRegistrationNode *)param_3,param_4,param_5
                          ,p_Var10,(_s_HandlerType *)param_7,(_s_CatchableType *)param_8,unaff_EDI,
                          unaff_ESI,unaff_EBX,(uchar)SUB41(in_stack_ffffffd0,0));
                  p_Var11 = (_s_FuncInfo *)param_1;
                  goto LAB_1071f42b;
                }
              }
              local_10 = local_10 + 1;
            }
          }
LAB_1071f42b:
          p_Var7 = p_Var7 + 1;
        }
      }
      p_Var10 = param_5;
      if (param_6 != '\0') {
        ___DestructExceptionObject((int *)p_Var11);
      }
      if ((((local_5 != '\0') || ((p_Var10->magicNumber_and_bbtFlags & 0x1fffffff) < 0x19930521)) ||
          (p_Var10->pESTypeList == (ESTypeList *)0x0)) ||
         (uVar3 = IsInExceptionSpec((EHExceptionRecord *)p_Var11,(_s_ESTypeList *)unaff_EDI),
         uVar3 != '\0')) goto LAB_1071f501;
      __getptd();
      __getptd();
      p_Var5 = __getptd();
      p_Var5->_curexception = p_Var11;
      p_Var5 = __getptd();
      p_Var5->_curcontext = param_3;
      pEVar12 = param_8;
      if (param_8 == (EHRegistrationNode *)0x0) {
        pEVar12 = param_2;
      }
      _UnwindNestedFrames(pEVar12,(EHExceptionRecord *)p_Var11);
      p_Var11 = param_5;
      ___FrameUnwindToState((int)param_2,param_4,(int)param_5,-1);
      CallUnexpected(p_Var11->pESTypeList);
      p_Var10 = param_5;
    }
  }
  if (p_Var10->nTryBlocks != 0) {
    if (param_6 != '\0') {
LAB_1071f301:
      terminate();
      return;
    }
    FindHandlerForForeignException
              ((EHExceptionRecord *)p_Var11,param_2,param_3,param_4,p_Var10,local_c,param_7,param_8)
    ;
  }
LAB_1071f501:
  p_Var5 = __getptd();
  if (p_Var5->_curexcspec != (void *)0x0) {
    _inconsistency();
  }
  return;
}


// ==== 1071f531 ___InternalCxxFrameHandler

/* Library Function - Single Match
    ___InternalCxxFrameHandler
   
   Library: Visual Studio 2005 Release */

undefined4 __cdecl
___InternalCxxFrameHandler
          (EHExceptionRecord *param_1,EHRegistrationNode *param_2,_CONTEXT *param_3,void *param_4,
          _s_FuncInfo *param_5,int param_6,EHRegistrationNode *param_7,uchar param_8)

{
  _ptiddata p_Var1;
  undefined4 uVar2;
  
  p_Var1 = __getptd();
  if ((((*(int *)((p_Var1->_setloc_data)._cacheout + 0x27) != 0) || (*(int *)param_1 == -0x1f928c9d)
       ) || (*(int *)param_1 == -0x7fffffda)) ||
     (((param_5->magicNumber_and_bbtFlags & 0x1fffffff) < 0x19930522 ||
      ((param_5->EHFlags & 1) == 0)))) {
    if (((byte)param_1[4] & 0x66) == 0) {
      if ((param_5->nTryBlocks != 0) ||
         ((0x19930520 < (param_5->magicNumber_and_bbtFlags & 0x1fffffff) &&
          (param_5->pESTypeList != (ESTypeList *)0x0)))) {
        if ((*(int *)param_1 == -0x1f928c9d) &&
           (((2 < *(uint *)(param_1 + 0x10) && (0x19930522 < *(uint *)(param_1 + 0x14))) &&
            (*(code **)(*(int *)(param_1 + 0x1c) + 8) != (code *)0x0)))) {
          uVar2 = (**(code **)(*(int *)(param_1 + 0x1c) + 8))
                            (param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
          return uVar2;
        }
        FindHandler(param_1,param_2,param_3,param_4,param_5,param_8,param_6,param_7);
      }
    }
    else if ((param_5->maxState != 0) && (param_6 == 0)) {
      ___FrameUnwindToState((int)param_2,param_4,(int)param_5,-1);
    }
  }
  return 1;
}


// ==== 1071f615 __security_check_cookie

/* Library Function - Single Match
    @__security_check_cookie@4
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release, Visual Studio 2010 Release
   __fastcall __security_check_cookie,4 */

void __fastcall __security_check_cookie(int param_1)

{
  if (param_1 == DAT_10765c70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___report_gsfailure();
}


// ==== 1071f624 FUN_1071f624

undefined4 FUN_1071f624(void)

{
  int iVar1;
  HMODULE pHVar2;
  int iVar3;
  uint uVar4;
  char *_Str2;
  int local_8;
  
  uVar4 = 0;
  local_8 = 0;
  __get_winmajor(&local_8);
  if (local_8 < 6) {
    pHVar2 = GetModuleHandleA((LPCSTR)0x0);
    iVar1 = pHVar2[0xf].unused;
    _Str2 = (char *)((int)&pHVar2[6].unused +
                    iVar1 + (uint)*(ushort *)((int)&pHVar2[5].unused + iVar1));
    if (*(short *)((int)&pHVar2[1].unused + iVar1 + 2) != 0) {
      do {
        iVar3 = _strcmp(".mixcrt",_Str2);
        if (iVar3 == 0) {
          return 0;
        }
        uVar4 = uVar4 + 1;
        _Str2 = _Str2 + 0x28;
      } while (uVar4 < *(ushort *)((int)&pHVar2[1].unused + iVar1 + 2));
    }
  }
  return 1;
}


// ==== 1071f690 FUN_1071f690

int __cdecl FUN_1071f690(int param_1)

{
  LPVOID pvVar1;
  code *pcVar2;
  int iVar3;
  HMODULE hModule;
  FARPROC pFVar4;
  
  pvVar1 = TlsGetValue(DAT_10765c6c);
  if ((pvVar1 != (LPVOID)0x0) && (DAT_10765c68 != -1)) {
    iVar3 = DAT_10765c68;
    pcVar2 = TlsGetValue(DAT_10765c6c);
    iVar3 = (*pcVar2)(iVar3);
    if (iVar3 != 0) {
      pFVar4 = *(FARPROC *)(iVar3 + 0x1f8);
      goto LAB_1071f6ea;
    }
  }
  hModule = GetModuleHandleA("KERNEL32.DLL");
  if (hModule == (HMODULE)0x0) {
    return param_1;
  }
  iVar3 = FUN_1071f624();
  if (iVar3 == 0) {
    return param_1;
  }
  pFVar4 = GetProcAddress(hModule,"EncodePointer");
LAB_1071f6ea:
  if (pFVar4 != (FARPROC)0x0) {
    param_1 = (*pFVar4)(param_1);
  }
  return param_1;
}


// ==== 1071f6fe __encoded_null

/* Library Function - Single Match
    __encoded_null
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release */

void __encoded_null(void)

{
  FUN_1071f690(0);
  return;
}


// ==== 1071f707 FUN_1071f707

int __cdecl FUN_1071f707(int param_1)

{
  LPVOID pvVar1;
  code *pcVar2;
  int iVar3;
  HMODULE hModule;
  FARPROC pFVar4;
  
  pvVar1 = TlsGetValue(DAT_10765c6c);
  if ((pvVar1 != (LPVOID)0x0) && (DAT_10765c68 != -1)) {
    iVar3 = DAT_10765c68;
    pcVar2 = TlsGetValue(DAT_10765c6c);
    iVar3 = (*pcVar2)(iVar3);
    if (iVar3 != 0) {
      pFVar4 = *(FARPROC *)(iVar3 + 0x1fc);
      goto LAB_1071f761;
    }
  }
  hModule = GetModuleHandleA("KERNEL32.DLL");
  if (hModule == (HMODULE)0x0) {
    return param_1;
  }
  iVar3 = FUN_1071f624();
  if (iVar3 == 0) {
    return param_1;
  }
  pFVar4 = GetProcAddress(hModule,"DecodePointer");
LAB_1071f761:
  if (pFVar4 != (FARPROC)0x0) {
    param_1 = (*pFVar4)(param_1);
  }
  return param_1;
}


// ==== 1071f799 FUN_1071f799

LPVOID FUN_1071f799(void)

{
  LPVOID lpTlsValue;
  
  lpTlsValue = TlsGetValue(DAT_10765c6c);
  if (lpTlsValue == (LPVOID)0x0) {
    lpTlsValue = (LPVOID)FUN_1071f707(DAT_1076c33c);
    TlsSetValue(DAT_10765c6c,lpTlsValue);
  }
  return lpTlsValue;
}


// ==== 1071f7e4 __mtterm

/* Library Function - Single Match
    __mtterm
   
   Library: Visual Studio 2005 Release */

void __cdecl __mtterm(void)

{
  code *pcVar1;
  int iVar2;
  
  if (DAT_10765c68 != -1) {
    iVar2 = DAT_10765c68;
    pcVar1 = (code *)FUN_1071f707(DAT_1076c344);
    (*pcVar1)(iVar2);
    DAT_10765c68 = -1;
  }
  if (DAT_10765c6c != 0xffffffff) {
    TlsFree(DAT_10765c6c);
    DAT_10765c6c = 0xffffffff;
  }
  __mtdeletelocks();
  return;
}


// ==== 1071f821 FUN_1071f821

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */

void __cdecl FUN_1071f821(int param_1,int param_2)

{
  HMODULE hModule;
  int iVar1;
  FARPROC pFVar2;
  
  hModule = GetModuleHandleA("KERNEL32.DLL");
  *(undefined **)(param_1 + 0x5c) = &DAT_10765d98;
  *(undefined4 *)(param_1 + 0x14) = 1;
  if (hModule != (HMODULE)0x0) {
    iVar1 = FUN_1071f624();
    if (iVar1 != 0) {
      pFVar2 = GetProcAddress(hModule,"EncodePointer");
      *(FARPROC *)(param_1 + 0x1f8) = pFVar2;
      pFVar2 = GetProcAddress(hModule,"DecodePointer");
      *(FARPROC *)(param_1 + 0x1fc) = pFVar2;
    }
  }
  *(undefined4 *)(param_1 + 0x70) = 1;
  *(undefined1 *)(param_1 + 200) = 0x43;
  *(undefined1 *)(param_1 + 0x14b) = 0x43;
  *(undefined **)(param_1 + 0x68) = &DAT_10765e20;
  InterlockedIncrement((LONG *)&DAT_10765e20);
  __lock(0xc);
  *(int *)(param_1 + 0x6c) = param_2;
  if (param_2 == 0) {
    *(undefined **)(param_1 + 0x6c) = PTR_DAT_10766428;
  }
  ___addlocaleref(*(LONG **)(param_1 + 0x6c));
  FUN_1071f8d7();
  return;
}


// ==== 1071f8d7 FUN_1071f8d7

void FUN_1071f8d7(void)

{
  FUN_10724ccf(0xc);
  return;
}


// ==== 1071f8e0 FUN_1071f8e0

DWORD * FUN_1071f8e0(void)

{
  DWORD dwErrCode;
  code *pcVar1;
  DWORD *_Memory;
  int iVar2;
  DWORD DVar3;
  undefined4 uVar4;
  DWORD *pDVar5;
  
  dwErrCode = GetLastError();
  uVar4 = DAT_10765c68;
  pcVar1 = FUN_1071f799();
  _Memory = (DWORD *)(*pcVar1)(uVar4);
  if (_Memory == (DWORD *)0x0) {
    _Memory = __calloc_crt(1,0x214);
    if (_Memory != (DWORD *)0x0) {
      uVar4 = DAT_10765c68;
      pDVar5 = _Memory;
      pcVar1 = (code *)FUN_1071f707(DAT_1076c340);
      iVar2 = (*pcVar1)(uVar4,pDVar5);
      if (iVar2 == 0) {
        _free(_Memory);
        _Memory = (DWORD *)0x0;
      }
      else {
        FUN_1071f821((int)_Memory,0);
        DVar3 = GetCurrentThreadId();
        _Memory[1] = 0xffffffff;
        *_Memory = DVar3;
      }
    }
  }
  SetLastError(dwErrCode);
  return _Memory;
}


// ==== 1071f957 __getptd

/* Library Function - Single Match
    __getptd
   
   Library: Visual Studio 2005 Release */

_ptiddata __cdecl __getptd(void)

{
  _ptiddata p_Var1;
  
  p_Var1 = (_ptiddata)FUN_1071f8e0();
  if (p_Var1 == (_ptiddata)0x0) {
    __amsg_exit(0x10);
  }
  return p_Var1;
}


// ==== 1071f96f __freefls@4

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    __freefls@4
   
   Library: Visual Studio 2005 Release */

void __freefls_4(void *param_1)

{
  LONG *pLVar1;
  LONG LVar2;
  
  if (param_1 != (void *)0x0) {
    if (*(void **)((int)param_1 + 0x24) != (void *)0x0) {
      _free(*(void **)((int)param_1 + 0x24));
    }
    if (*(void **)((int)param_1 + 0x2c) != (void *)0x0) {
      _free(*(void **)((int)param_1 + 0x2c));
    }
    if (*(void **)((int)param_1 + 0x34) != (void *)0x0) {
      _free(*(void **)((int)param_1 + 0x34));
    }
    if (*(void **)((int)param_1 + 0x3c) != (void *)0x0) {
      _free(*(void **)((int)param_1 + 0x3c));
    }
    if (*(void **)((int)param_1 + 0x44) != (void *)0x0) {
      _free(*(void **)((int)param_1 + 0x44));
    }
    if (*(void **)((int)param_1 + 0x48) != (void *)0x0) {
      _free(*(void **)((int)param_1 + 0x48));
    }
    if (*(undefined **)((int)param_1 + 0x5c) != &DAT_10765d98) {
      _free(*(undefined **)((int)param_1 + 0x5c));
    }
    __lock(0xd);
    pLVar1 = *(LONG **)((int)param_1 + 0x68);
    if (pLVar1 != (LONG *)0x0) {
      LVar2 = InterlockedDecrement(pLVar1);
      if ((LVar2 == 0) && (pLVar1 != (LONG *)&DAT_10765e20)) {
        _free(pLVar1);
      }
    }
    FUN_1071fa7b();
    __lock(0xc);
    pLVar1 = *(LONG **)((int)param_1 + 0x6c);
    if (pLVar1 != (LONG *)0x0) {
      ___removelocaleref(pLVar1);
      if (((pLVar1 != (LONG *)PTR_DAT_10766428) && (pLVar1 != (LONG *)&DAT_10766350)) &&
         (*pLVar1 == 0)) {
        ___freetlocinfo(pLVar1);
      }
    }
    FUN_1071fa87();
    _free(param_1);
  }
  return;
}


// ==== 1071fa7b FUN_1071fa7b

void FUN_1071fa7b(void)

{
  FUN_10724ccf(0xd);
  return;
}


// ==== 1071fa87 FUN_1071fa87

void FUN_1071fa87(void)

{
  FUN_10724ccf(0xc);
  return;
}


// ==== 1071fa90 __freeptd

/* Library Function - Single Match
    __freeptd
   
   Library: Visual Studio 2005 Release */

void __cdecl __freeptd(_ptiddata _Ptd)

{
  LPVOID pvVar1;
  code *pcVar2;
  int iVar3;
  undefined4 uVar4;
  
  if (DAT_10765c68 != -1) {
    if ((_Ptd == (_ptiddata)0x0) && (pvVar1 = TlsGetValue(DAT_10765c6c), pvVar1 != (LPVOID)0x0)) {
      iVar3 = DAT_10765c68;
      pcVar2 = TlsGetValue(DAT_10765c6c);
      _Ptd = (_ptiddata)(*pcVar2)(iVar3);
    }
    uVar4 = 0;
    iVar3 = DAT_10765c68;
    pcVar2 = (code *)FUN_1071f707(DAT_1076c340);
    (*pcVar2)(iVar3,uVar4);
    __freefls_4(_Ptd);
  }
  if (DAT_10765c6c != 0xffffffff) {
    TlsSetValue(DAT_10765c6c,(LPVOID)0x0);
  }
  return;
}


// ==== 1071fb05 __mtinit

/* Library Function - Single Match
    __mtinit
   
   Library: Visual Studio 2005 Release */

int __cdecl __mtinit(void)

{
  HMODULE hModule;
  BOOL BVar1;
  int iVar2;
  code *pcVar3;
  DWORD *pDVar4;
  DWORD DVar5;
  code *pcVar6;
  DWORD *pDVar7;
  
  hModule = GetModuleHandleA("KERNEL32.DLL");
  if (hModule == (HMODULE)0x0) {
    __mtterm();
    return 0;
  }
  DAT_1076c338 = GetProcAddress(hModule,"FlsAlloc");
  DAT_1076c33c = GetProcAddress(hModule,"FlsGetValue");
  DAT_1076c340 = GetProcAddress(hModule,"FlsSetValue");
  DAT_1076c344 = GetProcAddress(hModule,"FlsFree");
  if ((((DAT_1076c338 == (FARPROC)0x0) || (DAT_1076c33c == (FARPROC)0x0)) ||
      (DAT_1076c340 == (FARPROC)0x0)) || (DAT_1076c344 == (FARPROC)0x0)) {
    DAT_1076c33c = TlsGetValue_exref;
    DAT_1076c338 = (FARPROC)&LAB_1071f775;
    DAT_1076c340 = TlsSetValue_exref;
    DAT_1076c344 = TlsFree_exref;
  }
  DAT_10765c6c = TlsAlloc();
  if ((DAT_10765c6c != 0xffffffff) && (BVar1 = TlsSetValue(DAT_10765c6c,DAT_1076c33c), BVar1 != 0))
  {
    __init_pointers();
    DAT_1076c338 = (FARPROC)FUN_1071f690((int)DAT_1076c338);
    DAT_1076c33c = (FARPROC)FUN_1071f690((int)DAT_1076c33c);
    DAT_1076c340 = (FARPROC)FUN_1071f690((int)DAT_1076c340);
    DAT_1076c344 = (FARPROC)FUN_1071f690((int)DAT_1076c344);
    iVar2 = __mtinitlocks();
    if (iVar2 != 0) {
      pcVar6 = __freefls_4;
      pcVar3 = (code *)FUN_1071f707((int)DAT_1076c338);
      DAT_10765c68 = (*pcVar3)(pcVar6);
      if ((DAT_10765c68 != -1) && (pDVar4 = __calloc_crt(1,0x214), pDVar4 != (DWORD *)0x0)) {
        iVar2 = DAT_10765c68;
        pDVar7 = pDVar4;
        pcVar3 = (code *)FUN_1071f707((int)DAT_1076c340);
        iVar2 = (*pcVar3)(iVar2,pDVar7);
        if (iVar2 != 0) {
          FUN_1071f821((int)pDVar4,0);
          DVar5 = GetCurrentThreadId();
          pDVar4[1] = 0xffffffff;
          *pDVar4 = DVar5;
          return 1;
        }
      }
    }
    __mtterm();
  }
  return 0;
}


// ==== 1071fc89 terminate

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* Library Function - Single Match
    void __cdecl terminate(void)
   
   Library: Visual Studio 2005 Release */

void __cdecl terminate(void)

{
  _ptiddata p_Var1;
  
  p_Var1 = __getptd();
  if (p_Var1->_terminate != (code *)0x0) {
    (*p_Var1->_terminate)();
  }
                    /* WARNING: Subroutine does not return */
  _abort();
}


// ==== 1071fcc2 unexpected

/* Library Function - Single Match
    void __cdecl unexpected(void)
   
   Library: Visual Studio 2005 Release */

void __cdecl unexpected(void)

{
  _ptiddata p_Var1;
  
  p_Var1 = __getptd();
  if (p_Var1->_unexpected != (code *)0x0) {
    (*p_Var1->_unexpected)();
  }
  terminate();
  return;
}


// ==== 1071fcd5 _inconsistency

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* Library Function - Single Match
    void __cdecl _inconsistency(void)
   
   Library: Visual Studio 2005 Release */

void __cdecl _inconsistency(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)FUN_1071f707(DAT_1076c348);
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)();
  }
  terminate();
  return;
}


// ==== 1071fd0c __initp_eh_hooks

/* Library Function - Single Match
    __initp_eh_hooks
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release */

void __initp_eh_hooks(void)

{
  DAT_1076c348 = FUN_1071f690(0x1071fc89);
  return;
}


// ==== 1071fd20 __CallSettingFrame@12

/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* Library Function - Single Match
    __CallSettingFrame@12
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release */

void __CallSettingFrame_12(undefined4 param_1,undefined4 param_2,int param_3)

{
  code *pcVar1;
  
  pcVar1 = (code *)__NLG_Notify1(param_3);
  (*pcVar1)();
  if (param_3 == 0x100) {
    param_3 = 2;
  }
  __NLG_Notify1(param_3);
  return;
}


// ==== 1071fd6c type_info::_Type_info_dtor

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    private: static void __cdecl type_info::_Type_info_dtor(class type_info *)
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release, Visual Studio 2010 Release */

void __cdecl type_info::_Type_info_dtor(type_info *param_1)

{
  int *_Memory;
  int *piVar1;
  int *piVar2;
  
  __lock(0xe);
  _Memory = DAT_1076c350;
  if (*(int *)(param_1 + 4) != 0) {
    piVar1 = (int *)&DAT_1076c34c;
    do {
      piVar2 = piVar1;
      if (DAT_1076c350 == (int *)0x0) goto LAB_1071fdb0;
      piVar1 = DAT_1076c350;
    } while (*DAT_1076c350 != *(int *)(param_1 + 4));
    piVar2[1] = DAT_1076c350[1];
    _free(_Memory);
LAB_1071fdb0:
    _free(*(void **)(param_1 + 4));
    *(undefined4 *)(param_1 + 4) = 0;
  }
  FUN_1071fdd3();
  return;
}


// ==== 1071fdd3 FUN_1071fdd3

void FUN_1071fdd3(void)

{
  FUN_10724ccf(0xe);
  return;
}


// ==== 1071ff41 ___unDNameHelper

/* Library Function - Single Match
    ___unDNameHelper
   
   Library: Visual Studio 2005 Release */

void __cdecl ___unDNameHelper(char *param_1,char *param_2,int param_3,ushort param_4)

{
  if (param_4 == 0) {
    param_4 = 0x2800;
  }
  ___unDName(param_1,param_2,param_3,0x1072a391,_free,param_4);
  return;
}


// ==== 107200b0 _strcmp

/* Library Function - Single Match
    _strcmp
   
   Library: Visual Studio 2005 Release */

int __cdecl _strcmp(char *_Str1,char *_Str2)

{
  undefined2 uVar1;
  undefined4 uVar2;
  byte bVar3;
  byte bVar4;
  bool bVar5;
  
  if (((uint)_Str1 & 3) != 0) {
    if (((uint)_Str1 & 1) != 0) {
      bVar4 = *_Str1;
      _Str1 = _Str1 + 1;
      bVar5 = bVar4 < (byte)*_Str2;
      if (bVar4 != *_Str2) goto LAB_107200f4;
      _Str2 = _Str2 + 1;
      if (bVar4 == 0) {
        return 0;
      }
      if (((uint)_Str1 & 2) == 0) goto LAB_107200c0;
    }
    uVar1 = *(undefined2 *)_Str1;
    _Str1 = _Str1 + 2;
    bVar4 = (byte)uVar1;
    bVar5 = bVar4 < (byte)*_Str2;
    if (bVar4 != *_Str2) goto LAB_107200f4;
    if (bVar4 == 0) {
      return 0;
    }
    bVar4 = (byte)((ushort)uVar1 >> 8);
    bVar5 = bVar4 < (byte)_Str2[1];
    if (bVar4 != _Str2[1]) goto LAB_107200f4;
    if (bVar4 == 0) {
      return 0;
    }
    _Str2 = _Str2 + 2;
  }
LAB_107200c0:
  while( true ) {
    uVar2 = *(undefined4 *)_Str1;
    bVar4 = (byte)uVar2;
    bVar5 = bVar4 < (byte)*_Str2;
    if (bVar4 != *_Str2) break;
    if (bVar4 == 0) {
      return 0;
    }
    bVar4 = (byte)((uint)uVar2 >> 8);
    bVar5 = bVar4 < (byte)_Str2[1];
    if (bVar4 != _Str2[1]) break;
    if (bVar4 == 0) {
      return 0;
    }
    bVar4 = (byte)((uint)uVar2 >> 0x10);
    bVar5 = bVar4 < (byte)_Str2[2];
    if (bVar4 != _Str2[2]) break;
    bVar3 = (byte)((uint)uVar2 >> 0x18);
    if (bVar4 == 0) {
      return 0;
    }
    bVar5 = bVar3 < (byte)_Str2[3];
    if (bVar3 != _Str2[3]) break;
    _Str2 = _Str2 + 4;
    _Str1 = _Str1 + 4;
    if (bVar3 == 0) {
      return 0;
    }
  }
LAB_107200f4:
  return (uint)bVar5 * -2 + 1;
}


// ==== 10720138 __SEH_prolog4

/* WARNING: This is an inlined function */
/* WARNING: Unable to track spacebase fully for stack */
/* WARNING: Variable defined which should be unmapped: param_2 */
/* Library Function - Single Match
    __SEH_prolog4
   
   Library: Visual Studio */

void __cdecl __SEH_prolog4(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 unaff_EBX;
  undefined4 unaff_ESI;
  undefined4 unaff_EDI;
  undefined4 unaff_retaddr;
  uint auStack_1c [5];
  undefined1 local_8 [8];
  
  iVar1 = -param_2;
  *(undefined4 *)((int)auStack_1c + iVar1 + 0x10) = unaff_EBX;
  *(undefined4 *)((int)auStack_1c + iVar1 + 0xc) = unaff_ESI;
  *(undefined4 *)((int)auStack_1c + iVar1 + 8) = unaff_EDI;
  *(uint *)((int)auStack_1c + iVar1 + 4) = DAT_10765c70 ^ (uint)&param_2;
  *(undefined4 *)((int)auStack_1c + iVar1) = unaff_retaddr;
  ExceptionList = local_8;
  return;
}


// ==== 1072017d __SEH_epilog4

/* WARNING: This is an inlined function */
/* Library Function - Single Match
    __SEH_epilog4
   
   Library: Visual Studio */

void __SEH_epilog4(void)

{
  undefined4 *unaff_EBP;
  undefined4 unaff_retaddr;
  
  ExceptionList = (void *)unaff_EBP[-4];
  *unaff_EBP = unaff_retaddr;
  return;
}


// ==== 107201d0 __except_handler4

/* Library Function - Single Match
    __except_handler4
   
   Library: Visual Studio 2005 Release */

undefined4 __cdecl __except_handler4(int *param_1,PVOID param_2,undefined4 param_3)

{
  int iVar1;
  uint uVar2;
  bool bVar3;
  int iVar4;
  BOOL BVar5;
  undefined4 uVar6;
  uint uVar7;
  int *piVar8;
  undefined4 local_c;
  int *local_8;
  undefined4 local_4;
  
  piVar8 = (int *)(*(uint *)((int)param_2 + 8) ^ DAT_10765c70);
  bVar3 = false;
  local_c = 1;
  iVar1 = (int)param_2 + 0x10;
  if (*piVar8 != -2) {
    __security_check_cookie(piVar8[1] + iVar1 ^ *(uint *)(*piVar8 + iVar1));
  }
  __security_check_cookie(piVar8[3] + iVar1 ^ *(uint *)(piVar8[2] + iVar1));
  if ((*(byte *)(param_1 + 1) & 0x66) == 0) {
    local_8 = param_1;
    local_4 = param_3;
    *(int ***)((int)param_2 + -4) = &local_8;
    uVar7 = *(uint *)((int)param_2 + 0xc);
    if (*(uint *)((int)param_2 + 0xc) == 0xfffffffe) {
      return 1;
    }
    do {
      uVar2 = piVar8[uVar7 * 3 + 4];
      if ((undefined *)piVar8[uVar7 * 3 + 5] != (undefined *)0x0) {
        iVar4 = _EH4_CallFilterFunc((undefined *)piVar8[uVar7 * 3 + 5]);
        bVar3 = true;
        if (iVar4 < 0) {
          local_c = 0;
          goto LAB_1072027b;
        }
        if (0 < iVar4) {
          if ((*param_1 == -0x1f928c9d) &&
             (BVar5 = __IsNonwritableInCurrentImage((PBYTE)&PTR____DestructExceptionObject_107518c8)
             , BVar5 != 0)) {
            ___DestructExceptionObject(param_1);
          }
          _EH4_GlobalUnwind(param_2);
          if (*(uint *)((int)param_2 + 0xc) != uVar7) {
            _EH4_LocalUnwind((int)param_2,uVar7,iVar1,&DAT_10765c70);
          }
          *(uint *)((int)param_2 + 0xc) = uVar2;
          if (*piVar8 != -2) {
            __security_check_cookie(piVar8[1] + iVar1 ^ *(uint *)(*piVar8 + iVar1));
          }
          __security_check_cookie(piVar8[3] + iVar1 ^ *(uint *)(piVar8[2] + iVar1));
          uVar6 = _EH4_TransferToHandler((undefined *)(piVar8 + uVar7 * 3 + 4)[2]);
          return uVar6;
        }
      }
      uVar7 = uVar2;
    } while (uVar2 != 0xfffffffe);
    if (!bVar3) {
      return 1;
    }
  }
  else {
    if (*(int *)((int)param_2 + 0xc) == -2) {
      return 1;
    }
    _EH4_LocalUnwind((int)param_2,0xfffffffe,iVar1,&DAT_10765c70);
  }
LAB_1072027b:
  if (*piVar8 != -2) {
    __security_check_cookie(piVar8[1] + iVar1 ^ *(uint *)(*piVar8 + iVar1));
  }
  __security_check_cookie(piVar8[3] + iVar1 ^ *(uint *)(piVar8[2] + iVar1));
  return local_c;
}


// ==== 10720366 _abort

/* Library Function - Single Match
    _abort
   
   Library: Visual Studio 2005 Release */

void __cdecl _abort(void)

{
  _PHNDLR p_Var1;
  EXCEPTION_RECORD local_32c;
  _EXCEPTION_POINTERS local_2dc;
  undefined4 local_2d4;
  
  if (((byte)DAT_10765c90 & 1) != 0) {
    FUN_10720477(10);
  }
  p_Var1 = ___get_sigabrt();
  if (p_Var1 != (_PHNDLR)0x0) {
    _raise(0x16);
  }
  if (((byte)DAT_10765c90 & 2) != 0) {
    local_2d4 = 0x10001;
    _memset(&local_32c,0,0x50);
    local_2dc.ExceptionRecord = &local_32c;
    local_2dc.ContextRecord = (PCONTEXT)&local_2d4;
    local_32c.ExceptionCode = 0x40000015;
    SetUnhandledExceptionFilter((LPTOP_LEVEL_EXCEPTION_FILTER)0x0);
    UnhandledExceptionFilter(&local_2dc);
  }
                    /* WARNING: Subroutine does not return */
  __exit(3);
}


// ==== 10720459 __set_abort_behavior

/* Library Function - Single Match
    __set_abort_behavior
   
   Library: Visual Studio 2005 Release */

uint __cdecl __set_abort_behavior(uint _Flags,uint _Mask)

{
  uint uVar1;
  
  uVar1 = DAT_10765c90;
  DAT_10765c90 = ~_Mask & DAT_10765c90 | _Flags & _Mask;
  return uVar1;
}


// ==== 10720477 FUN_10720477

void __cdecl FUN_10720477(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  errno_t eVar3;
  DWORD DVar4;
  size_t sVar5;
  char *_Dst;
  HANDLE hFile;
  uint uVar6;
  DWORD *lpNumberOfBytesWritten;
  LPOVERLAPPED lpOverlapped;
  DWORD local_4;
  
  uVar6 = 0;
  do {
    if (param_1 == (&DAT_10765c98)[uVar6 * 2]) break;
    uVar6 = uVar6 + 1;
  } while (uVar6 < 0x17);
  if (uVar6 < 0x17) {
    iVar2 = __set_error_mode(3);
    if ((iVar2 == 1) || ((iVar2 = __set_error_mode(3), iVar2 == 0 && (DAT_1076c334 == 1)))) {
      hFile = GetStdHandle(0xfffffff4);
      if ((hFile != (HANDLE)0x0) && (hFile != (HANDLE)0xffffffff)) {
        lpOverlapped = (LPOVERLAPPED)0x0;
        lpNumberOfBytesWritten = &local_4;
        puVar1 = (undefined4 *)(uVar6 * 8 + 0x10765c9c);
        sVar5 = _strlen((char *)*puVar1);
        WriteFile(hFile,(LPCVOID)*puVar1,sVar5,lpNumberOfBytesWritten,lpOverlapped);
      }
    }
    else if (param_1 != 0xfc) {
      eVar3 = _strcpy_s(&DAT_1076c358,0x314,"Runtime Error!\n\nProgram: ");
      if (eVar3 != 0) {
                    /* WARNING: Subroutine does not return */
        __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      DAT_1076c475 = 0;
      DVar4 = GetModuleFileNameA((HMODULE)0x0,&DAT_1076c371,0x104);
      if ((DVar4 == 0) &&
         (eVar3 = _strcpy_s(&DAT_1076c371,0x2fb,"<program name unknown>"), eVar3 != 0)) {
                    /* WARNING: Subroutine does not return */
        __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      sVar5 = _strlen(&DAT_1076c371);
      if (0x3c < sVar5 + 1) {
        sVar5 = _strlen(&DAT_1076c371);
        _Dst = (char *)((int)&DAT_1076c334 + sVar5 + 2);
        eVar3 = _strncpy_s(_Dst,(int)&DAT_1076c66c - (int)_Dst,"...",3);
        if (eVar3 != 0) {
                    /* WARNING: Subroutine does not return */
          __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
      }
      eVar3 = _strcat_s(&DAT_1076c358,0x314,"\n\n");
      if (eVar3 != 0) {
                    /* WARNING: Subroutine does not return */
        __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      eVar3 = _strcat_s(&DAT_1076c358,0x314,*(char **)(uVar6 * 8 + 0x10765c9c));
      if (eVar3 != 0) {
                    /* WARNING: Subroutine does not return */
        __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      FUN_1072abdf(&DAT_1076c358,"Microsoft Visual C++ Runtime Library",0x12010);
    }
  }
  return;
}


// ==== 10720637 __FF_MSGBANNER

/* Library Function - Single Match
    __FF_MSGBANNER
   
   Library: Visual Studio 2005 Release */

void __cdecl __FF_MSGBANNER(void)

{
  int iVar1;
  
  iVar1 = __set_error_mode(3);
  if (iVar1 != 1) {
    iVar1 = __set_error_mode(3);
    if (iVar1 != 0) {
      return;
    }
    if (DAT_1076c334 != 1) {
      return;
    }
  }
  FUN_10720477(0xfc);
  FUN_10720477(0xff);
  return;
}


// ==== 10720670 ___getlocaleinfo

/* Library Function - Single Match
    ___getlocaleinfo
   
   Library: Visual Studio 2005 Release */

int __cdecl
___getlocaleinfo(_locale_t _Locale,int _Lc_type,LPCWSTR _LocaleName,LCTYPE _FieldType,void *_Address
                )

{
  byte bVar1;
  bool bVar2;
  size_t sVar3;
  DWORD DVar4;
  LPSTR _LpLCData;
  char *_Dst;
  int iVar5;
  errno_t eVar6;
  byte *pbVar7;
  CHAR local_88 [32];
  undefined1 local_68 [96];
  uint local_8;
  
  local_8 = DAT_10765c70 ^ (uint)local_68;
  if (_Lc_type != 1) {
    if (_Lc_type == 0) {
      pbVar7 = &DAT_1076c66c;
      iVar5 = ___crtGetLocaleInfoW
                        (_Locale,(ulong)_LocaleName,_FieldType,(wchar_t *)&DAT_1076c66c,4,0);
      if (iVar5 != 0) {
        *(undefined1 *)_Address = 0;
        do {
          bVar1 = *pbVar7;
          iVar5 = _isdigit((uint)bVar1);
          if (iVar5 == 0) break;
          pbVar7 = pbVar7 + 2;
          *(byte *)_Address = *(char *)_Address * '\n' + bVar1 + -0x30;
        } while ((int)pbVar7 < 0x1076c674);
      }
    }
    goto LAB_1072073d;
  }
  _LpLCData = local_88;
  bVar2 = false;
  sVar3 = ___crtGetLocaleInfoA(_Locale,_LocaleName,_FieldType,_LpLCData,0x80);
  if (sVar3 == 0) {
    DVar4 = GetLastError();
    if (((DVar4 != 0x7a) ||
        (sVar3 = ___crtGetLocaleInfoA(_Locale,_LocaleName,_FieldType,(LPSTR)0x0,0), sVar3 == 0)) ||
       (_LpLCData = __calloc_crt(sVar3,1), _LpLCData == (LPSTR)0x0)) goto LAB_1072073d;
    bVar2 = true;
    sVar3 = ___crtGetLocaleInfoA(_Locale,_LocaleName,_FieldType,_LpLCData,sVar3);
    if (sVar3 != 0) goto LAB_1072071b;
  }
  else {
LAB_1072071b:
    _Dst = __calloc_crt(sVar3,1);
    *(char **)_Address = _Dst;
    if (_Dst != (char *)0x0) {
      eVar6 = _strncpy_s(_Dst,sVar3,_LpLCData,sVar3 - 1);
      if (eVar6 != 0) {
                    /* WARNING: Subroutine does not return */
        __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      if (bVar2) {
        _free(_LpLCData);
      }
      goto LAB_1072073d;
    }
    if (!bVar2) goto LAB_1072073d;
  }
  _free(_LpLCData);
LAB_1072073d:
  iVar5 = __security_check_cookie(local_8 ^ (uint)local_68);
  return iVar5;
}


// ==== 107207ca FUN_107207ca

void __cdecl FUN_107207ca(undefined4 param_1)

{
  DAT_1076c674 = param_1;
  return;
}


// ==== 107207d4 fastzero_I

/* Library Function - Single Match
    _fastzero_I
   
   Libraries: Visual Studio 2005, Visual Studio 2008, Visual Studio 2019 */

void __cdecl fastzero_I(undefined1 (*param_1) [16],uint param_2)

{
  uint uVar1;
  
  uVar1 = param_2 >> 7;
  do {
    *param_1 = (undefined1  [16])0x0;
    param_1[1] = (undefined1  [16])0x0;
    param_1[2] = (undefined1  [16])0x0;
    param_1[3] = (undefined1  [16])0x0;
    param_1[4] = (undefined1  [16])0x0;
    param_1[5] = (undefined1  [16])0x0;
    param_1[6] = (undefined1  [16])0x0;
    param_1[7] = (undefined1  [16])0x0;
    param_1 = param_1 + 8;
    uVar1 = uVar1 - 1;
  } while (uVar1 != 0);
  return;
}


// ==== 1072082b __VEC_memzero

/* Library Function - Single Match
    __VEC_memzero
   
   Libraries: Visual Studio 2005 Debug, Visual Studio 2005 Release, Visual Studio 2008 Debug, Visual
   Studio 2008 Release */

undefined1 (*) [16] __cdecl
__VEC_memzero(undefined1 (*param_1) [16],undefined4 param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined1 *puVar4;
  undefined1 (*pauVar5) [16];
  
  uVar2 = (int)param_1 >> 0x1f;
  iVar3 = (((uint)param_1 ^ uVar2) - uVar2 & 0xf ^ uVar2) - uVar2;
  if (iVar3 == 0) {
    uVar2 = param_3 & 0x7f;
    if (param_3 != uVar2) {
      fastzero_I(param_1,param_3 - uVar2);
    }
    if (uVar2 != 0) {
      puVar4 = (undefined1 *)((int)param_1 + (param_3 - uVar2));
      for (; uVar2 != 0; uVar2 = uVar2 - 1) {
        *puVar4 = 0;
        puVar4 = puVar4 + 1;
      }
    }
  }
  else {
    iVar3 = 0x10 - iVar3;
    pauVar5 = param_1;
    for (iVar1 = iVar3; iVar1 != 0; iVar1 = iVar1 + -1) {
      (*pauVar5)[0] = 0;
      pauVar5 = (undefined1 (*) [16])(*pauVar5 + 1);
    }
    __VEC_memzero((undefined1 (*) [16])((int)param_1 + iVar3),0,param_3 - iVar3);
  }
  return param_1;
}


// ==== 107208ba FUN_107208ba

uint __cdecl FUN_107208ba(DWORD param_1)

{
  uint uVar1;
  
  Sleep(param_1);
  uVar1 = param_1 + 1000;
  if (DAT_1076c678 < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1;
}


// ==== 107208eb __malloc_crt

/* Library Function - Single Match
    __malloc_crt
   
   Library: Visual Studio 2005 Release */

void * __cdecl __malloc_crt(size_t _Size)

{
  void *pvVar1;
  uint dwMilliseconds;
  
  dwMilliseconds = 0;
  while( true ) {
    pvVar1 = _malloc(_Size);
    if (pvVar1 != (void *)0x0) {
      return pvVar1;
    }
    if (DAT_1076c678 == 0) break;
    Sleep(dwMilliseconds);
    dwMilliseconds = dwMilliseconds + 1000;
    if (DAT_1076c678 < dwMilliseconds) {
      dwMilliseconds = 0xffffffff;
    }
    if (dwMilliseconds == 0xffffffff) {
      return (void *)0x0;
    }
  }
  return (void *)0x0;
}


// ==== 1072092b __calloc_crt

/* Library Function - Single Match
    __calloc_crt
   
   Library: Visual Studio 2005 Release */

void * __cdecl __calloc_crt(size_t _Count,size_t _Size)

{
  int *piVar1;
  uint dwMilliseconds;
  
  dwMilliseconds = 0;
  while( true ) {
    piVar1 = __calloc_impl(_Count,_Size,(undefined4 *)0x0);
    if (piVar1 != (int *)0x0) {
      return piVar1;
    }
    if (DAT_1076c678 == 0) break;
    Sleep(dwMilliseconds);
    dwMilliseconds = dwMilliseconds + 1000;
    if (DAT_1076c678 < dwMilliseconds) {
      dwMilliseconds = 0xffffffff;
    }
    if (dwMilliseconds == 0xffffffff) {
      return (void *)0x0;
    }
  }
  return (void *)0x0;
}


// ==== 10720973 __realloc_crt

/* Library Function - Single Match
    __realloc_crt
   
   Library: Visual Studio 2005 Release */

void * __cdecl __realloc_crt(void *_Ptr,size_t _NewSize)

{
  void *pvVar1;
  uint dwMilliseconds;
  
  dwMilliseconds = 0;
  do {
    pvVar1 = _realloc(_Ptr,_NewSize);
    if (pvVar1 != (void *)0x0) {
      return pvVar1;
    }
    if (_NewSize == 0) {
      return (void *)0x0;
    }
    if (DAT_1076c678 == 0) {
      return (void *)0x0;
    }
    Sleep(dwMilliseconds);
    dwMilliseconds = dwMilliseconds + 1000;
    if (DAT_1076c678 < dwMilliseconds) {
      dwMilliseconds = 0xffffffff;
    }
  } while (dwMilliseconds != 0xffffffff);
  return (void *)0x0;
}


// ==== 107209be __recalloc_crt

/* Library Function - Single Match
    __recalloc_crt
   
   Library: Visual Studio 2005 Release */

void * __cdecl __recalloc_crt(void *_Ptr,size_t _Count,size_t _Size)

{
  void *pvVar1;
  uint dwMilliseconds;
  
  dwMilliseconds = 0;
  do {
    pvVar1 = FUN_1072b5a9(_Ptr,_Count,_Size);
    if (pvVar1 != (void *)0x0) {
      return pvVar1;
    }
    if (_Size == 0) {
      return (void *)0x0;
    }
    if (DAT_1076c678 == 0) {
      return (void *)0x0;
    }
    Sleep(dwMilliseconds);
    dwMilliseconds = dwMilliseconds + 1000;
    if (DAT_1076c678 < dwMilliseconds) {
      dwMilliseconds = 0xffffffff;
    }
  } while (dwMilliseconds != 0xffffffff);
  return (void *)0x0;
}


// ==== 10720a2a __msize

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    __msize
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release */

size_t __cdecl __msize(void *_Memory)

{
  undefined4 *puVar1;
  size_t sVar2;
  int iVar3;
  void *this;
  size_t local_20;
  
  if (_Memory == (void *)0x0) {
    puVar1 = (undefined4 *)FUN_10724278();
    *puVar1 = 0x16;
    FUN_10723411((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    sVar2 = 0xffffffff;
  }
  else {
    if (DAT_1076ce34 == 3) {
      this = (void *)0x4;
      __lock(4);
      iVar3 = thunk_FUN_1072b731(this,(int)_Memory);
      if (iVar3 != 0) {
        local_20 = *(int *)((int)_Memory + -4) - 9;
      }
      FUN_10720ac4();
      if (iVar3 != 0) {
        return local_20;
      }
    }
    sVar2 = HeapSize(DAT_1076c7d4,0,_Memory);
  }
  return sVar2;
}


// ==== 10720ac4 FUN_10720ac4

void FUN_10720ac4(void)

{
  FUN_10724ccf(4);
  return;
}


// ==== 10720acd __amsg_exit

/* Library Function - Single Match
    __amsg_exit
   
   Library: Visual Studio 2005 Release */

void __cdecl __amsg_exit(int param_1)

{
  code *pcVar1;
  
  __FF_MSGBANNER();
  FUN_10720477(param_1);
  pcVar1 = (code *)FUN_1071f707((int)PTR___exit_10765d50);
  (*pcVar1)(0xff);
  return;
}


// ==== 10720af1 FUN_10720af1

void __cdecl FUN_10720af1(undefined4 param_1)

{
  HMODULE hModule;
  FARPROC pFVar1;
  
  hModule = GetModuleHandleA("mscoree.dll");
  if (hModule != (HMODULE)0x0) {
    pFVar1 = GetProcAddress(hModule,"CorExitProcess");
    if (pFVar1 != (FARPROC)0x0) {
      (*pFVar1)(param_1);
    }
  }
  return;
}


// ==== 10720b17 ___crtExitProcess

/* Library Function - Single Match
    ___crtExitProcess
   
   Library: Visual Studio 2005 Release */

void __cdecl ___crtExitProcess(int param_1)

{
  FUN_10720af1(param_1);
                    /* WARNING: Subroutine does not return */
  ExitProcess(param_1);
}


// ==== 10720b2c FUN_10720b2c

void FUN_10720b2c(void)

{
  __lock(8);
  return;
}


// ==== 10720b35 FUN_10720b35

void FUN_10720b35(void)

{
  FUN_10724ccf(8);
  return;
}


// ==== 10720b3e FUN_10720b3e

void __cdecl FUN_10720b3e(undefined4 *param_1)

{
  undefined4 *in_EAX;
  
  for (; in_EAX < param_1; in_EAX = in_EAX + 1) {
    if ((code *)*in_EAX != (code *)0x0) {
      (*(code *)*in_EAX)();
    }
  }
  return;
}


// ==== 10720b56 __initterm_e

/* Library Function - Single Match
    __initterm_e
   
   Library: Visual Studio 2005 Release */

void __cdecl __initterm_e(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  
  iVar1 = 0;
  while ((param_1 < param_2 && (iVar1 == 0))) {
    if ((code *)*param_1 != (code *)0x0) {
      iVar1 = (*(code *)*param_1)();
    }
    param_1 = param_1 + 1;
  }
  return;
}


// ==== 10720b76 __get_osplatform

/* Library Function - Single Match
    __get_osplatform
   
   Library: Visual Studio 2005 Release */

undefined4 __cdecl __get_osplatform(int *param_1)

{
  undefined4 *puVar1;
  
  if ((param_1 != (int *)0x0) && (DAT_1076c680 != 0)) {
    *param_1 = DAT_1076c680;
    return 0;
  }
  puVar1 = (undefined4 *)FUN_10724278();
  *puVar1 = 0x16;
  FUN_10723411((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  return 0x16;
}


// ==== 10720c25 __get_winmajor

/* Library Function - Single Match
    __get_winmajor
   
   Library: Visual Studio 2005 Release */

undefined4 __cdecl __get_winmajor(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  if ((param_1 != (undefined4 *)0x0) && (DAT_1076c680 != 0)) {
    *param_1 = DAT_1076c68c;
    return 0;
  }
  puVar1 = (undefined4 *)FUN_10724278();
  *puVar1 = 0x16;
  FUN_10723411((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  return 0x16;
}


// ==== 10720d0b __cinit

/* Library Function - Single Match
    __cinit
   
   Library: Visual Studio 2005 Release */

int __cdecl __cinit(int param_1)

{
  BOOL BVar1;
  int iVar2;
  undefined4 *puVar3;
  
  BVar1 = __IsNonwritableInCurrentImage((PBYTE)&PTR___fpmath_10751828);
  if (BVar1 != 0) {
    __fpmath(param_1);
  }
  __initp_misc_cfltcvt_tab();
  iVar2 = __initterm_e((undefined4 *)&DAT_107493e8,(undefined4 *)&DAT_10749600);
  if (iVar2 == 0) {
    _atexit((_func_4879 *)&LAB_107216b4);
    puVar3 = &DAT_10749000;
    do {
      if ((code *)*puVar3 != (code *)0x0) {
        (*(code *)*puVar3)();
      }
      puVar3 = puVar3 + 1;
    } while (puVar3 < &DAT_107492e4);
    if ((DAT_1076cf9c != (code *)0x0) &&
       (BVar1 = __IsNonwritableInCurrentImage((PBYTE)&DAT_1076cf9c), BVar1 != 0)) {
      (*DAT_1076cf9c)(0,2,0);
    }
    iVar2 = 0;
  }
  return iVar2;
}


// ==== 10720d9d FUN_10720d9d

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* WARNING: Removing unreachable block (ram,0x10720e70) */

void __cdecl FUN_10720d9d(int param_1,int param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  code *pcVar5;
  
  __lock(8);
  if (DAT_1076c6c0 != 1) {
    DAT_1076c6bc = 1;
    DAT_1076c6b8 = (undefined1)param_3;
    if (param_2 == 0) {
      piVar2 = (int *)FUN_1071f707(DAT_1076cf94);
      piVar3 = (int *)FUN_1071f707(DAT_1076cf90);
      if (piVar2 != (int *)0x0) {
        while (piVar3 = piVar3 + -1, piVar2 <= piVar3) {
          if (*piVar3 != 0) {
            iVar1 = *piVar3;
            iVar4 = __encoded_null();
            if (iVar1 != iVar4) {
              pcVar5 = (code *)FUN_1071f707(iVar1);
              (*pcVar5)();
            }
          }
        }
      }
      FUN_10720b3e((undefined4 *)&DAT_10749808);
    }
    FUN_10720b3e((undefined4 *)&DAT_10749a10);
  }
  FUN_10720e6a();
  if (param_3 != 0) {
    return;
  }
  DAT_1076c6c0 = 1;
  FUN_10724ccf(8);
  ___crtExitProcess(param_1);
  return;
}


// ==== 10720e6a FUN_10720e6a

void FUN_10720e6a(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + 0x10) != 0) {
    FUN_10724ccf(8);
  }
  return;
}


// ==== 10720e90 __exit

/* Library Function - Single Match
    __exit
   
   Library: Visual Studio 2005 Release */

void __cdecl __exit(int _Code)

{
  FUN_10720d9d(_Code,1,0);
  return;
}


// ==== 10720ea1 __cexit

/* Library Function - Single Match
    __cexit
   
   Library: Visual Studio 2005 Release */

void __cdecl __cexit(void)

{
  FUN_10720d9d(0,0,1);
  return;
}


// ==== 10720ebf __init_pointers

/* Library Function - Single Match
    __init_pointers
   
   Library: Visual Studio 2005 Release */

void __cdecl __init_pointers(void)

{
  undefined4 uVar1;
  
  uVar1 = __encoded_null();
  FUN_1072c808(uVar1);
  FUN_1072c729(uVar1);
  FUN_107232d3(uVar1);
  FUN_107207ca(uVar1);
  FUN_1072c61b(uVar1);
  __initp_misc_winsig(uVar1);
  FUN_10721807();
  __initp_eh_hooks();
  PTR___exit_10765d50 = (undefined *)FUN_1071f690(0x10720e90);
  return;
}


// ==== 10720f0b _free

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    _free
   
   Library: Visual Studio 2005 Release */

void __cdecl _free(void *_Memory)

{
  uint *puVar1;
  BOOL BVar2;
  int *piVar3;
  DWORD DVar4;
  int iVar5;
  void *this;
  
  if (_Memory != (void *)0x0) {
    if (DAT_1076ce34 == 3) {
      this = (void *)0x4;
      __lock(4);
      puVar1 = (uint *)thunk_FUN_1072b731(this,(int)_Memory);
      if (puVar1 != (uint *)0x0) {
        ___sbh_free_block(puVar1,(int)_Memory);
      }
      FUN_10720f61();
      if (puVar1 != (uint *)0x0) {
        return;
      }
    }
    BVar2 = HeapFree(DAT_1076c7d4,0,_Memory);
    if (BVar2 == 0) {
      piVar3 = (int *)FUN_10724278();
      DVar4 = GetLastError();
      iVar5 = FUN_1072423d(DVar4);
      *piVar3 = iVar5;
    }
  }
  return;
}


// ==== 10720f61 FUN_10720f61

void FUN_10720f61(void)

{
  FUN_10724ccf(4);
  return;
}


// ==== 10720f99 __ioinit

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    __ioinit
   
   Library: Visual Studio 2005 Release */

int __cdecl __ioinit(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  DWORD DVar3;
  HANDLE pvVar4;
  int iVar5;
  UINT *pUVar6;
  int iVar7;
  int *piVar8;
  UINT UVar9;
  UINT UVar10;
  _STARTUPINFOA local_68;
  uint local_24;
  byte *local_20;
  undefined4 uStack_c;
  undefined4 local_8;
  
  uStack_c = 0x10720fa5;
  local_8 = 0;
  GetStartupInfoA(&local_68);
  local_8 = 0xfffffffe;
  puVar2 = __calloc_crt(0x20,0x38);
  if (puVar2 == (undefined4 *)0x0) {
LAB_107211d0:
    iVar7 = -1;
  }
  else {
    DAT_1076ce40 = 0x20;
    DAT_1076ce80 = puVar2;
    for (; puVar2 < DAT_1076ce80 + 0x1c0; puVar2 = puVar2 + 0xe) {
      *(undefined1 *)(puVar2 + 1) = 0;
      *puVar2 = 0xffffffff;
      *(undefined1 *)((int)puVar2 + 5) = 10;
      puVar2[2] = 0;
      *(undefined1 *)(puVar2 + 9) = 0;
      *(undefined1 *)((int)puVar2 + 0x25) = 10;
      *(undefined1 *)((int)puVar2 + 0x26) = 10;
    }
    if ((local_68.cbReserved2 != 0) && ((UINT *)local_68.lpReserved2 != (UINT *)0x0)) {
      UVar9 = *(UINT *)local_68.lpReserved2;
      pUVar6 = (UINT *)((int)local_68.lpReserved2 + 4);
      local_20 = (byte *)((int)pUVar6 + UVar9);
      if (0x7ff < (int)UVar9) {
        UVar9 = 0x800;
      }
      iVar7 = 1;
      while ((UVar10 = UVar9, (int)DAT_1076ce40 < (int)UVar9 &&
             (puVar2 = __calloc_crt(0x20,0x38), UVar10 = DAT_1076ce40, puVar2 != (undefined4 *)0x0))
            ) {
        (&DAT_1076ce80)[iVar7] = puVar2;
        DAT_1076ce40 = DAT_1076ce40 + 0x20;
        puVar1 = puVar2;
        for (; puVar2 < puVar1 + 0x1c0; puVar2 = puVar2 + 0xe) {
          *(undefined1 *)(puVar2 + 1) = 0;
          *puVar2 = 0xffffffff;
          *(undefined1 *)((int)puVar2 + 5) = 10;
          puVar2[2] = 0;
          *(byte *)(puVar2 + 9) = *(byte *)(puVar2 + 9) & 0x80;
          *(undefined1 *)((int)puVar2 + 0x25) = 10;
          *(undefined1 *)((int)puVar2 + 0x26) = 10;
          puVar1 = (&DAT_1076ce80)[iVar7];
        }
        iVar7 = iVar7 + 1;
      }
      local_24 = 0;
      if (0 < (int)UVar10) {
        do {
          pvVar4 = *(HANDLE *)local_20;
          if ((((pvVar4 != (HANDLE)0xffffffff) && (pvVar4 != (HANDLE)0xfffffffe)) &&
              ((*pUVar6 & 1) != 0)) &&
             (((*pUVar6 & 8) != 0 || (DVar3 = GetFileType(pvVar4), DVar3 != 0)))) {
            puVar2 = (undefined4 *)
                     ((local_24 & 0x1f) * 0x38 + (int)(&DAT_1076ce80)[(int)local_24 >> 5]);
            *puVar2 = *(undefined4 *)local_20;
            *(byte *)(puVar2 + 1) = (byte)*pUVar6;
            iVar7 = ___crtInitCritSecAndSpinCount(puVar2 + 3,4000);
            if (iVar7 == 0) goto LAB_107211d0;
            puVar2[2] = puVar2[2] + 1;
          }
          local_24 = local_24 + 1;
          pUVar6 = (UINT *)((int)pUVar6 + 1);
          local_20 = local_20 + 4;
        } while ((int)local_24 < (int)UVar10);
      }
    }
    iVar7 = 0;
    do {
      piVar8 = DAT_1076ce80 + iVar7 * 0xe;
      if ((*piVar8 == -1) || (*piVar8 == -2)) {
        *(undefined1 *)(piVar8 + 1) = 0x81;
        if (iVar7 == 0) {
          DVar3 = 0xfffffff6;
        }
        else {
          DVar3 = 0xfffffff5 - (iVar7 != 1);
        }
        pvVar4 = GetStdHandle(DVar3);
        if (((pvVar4 == (HANDLE)0xffffffff) || (pvVar4 == (HANDLE)0x0)) ||
           (DVar3 = GetFileType(pvVar4), DVar3 == 0)) {
          *(byte *)(piVar8 + 1) = *(byte *)(piVar8 + 1) | 0x40;
          *piVar8 = -2;
        }
        else {
          *piVar8 = (int)pvVar4;
          if ((DVar3 & 0xff) == 2) {
            *(byte *)(piVar8 + 1) = *(byte *)(piVar8 + 1) | 0x40;
          }
          else if ((DVar3 & 0xff) == 3) {
            *(byte *)(piVar8 + 1) = *(byte *)(piVar8 + 1) | 8;
          }
          iVar5 = ___crtInitCritSecAndSpinCount(piVar8 + 3,4000);
          if (iVar5 == 0) goto LAB_107211d0;
          piVar8[2] = piVar8[2] + 1;
        }
      }
      else {
        *(byte *)(piVar8 + 1) = *(byte *)(piVar8 + 1) | 0x80;
      }
      iVar7 = iVar7 + 1;
    } while (iVar7 < 3);
    SetHandleCount(DAT_1076ce40);
    iVar7 = 0;
  }
  return iVar7;
}


// ==== 107211d9 __ioterm

/* Library Function - Single Match
    __ioterm
   
   Library: Visual Studio 2005 Release */

void __cdecl __ioterm(void)

{
  uint uVar1;
  uint *puVar2;
  uint uVar3;
  
  puVar2 = &DAT_1076ce80;
  do {
    uVar3 = *puVar2;
    uVar1 = uVar3;
    if (uVar3 != 0) {
      for (; uVar3 < uVar1 + 0x700; uVar3 = uVar3 + 0x38) {
        if (*(int *)(uVar3 + 8) != 0) {
          DeleteCriticalSection((LPCRITICAL_SECTION)(uVar3 + 0xc));
        }
        uVar1 = *puVar2;
      }
      _free((void *)*puVar2);
      *puVar2 = 0;
    }
    puVar2 = puVar2 + 1;
  } while ((int)puVar2 < 0x1076cf80);
  return;
}


// ==== 10721225 __setenvp

/* Library Function - Single Match
    __setenvp
   
   Library: Visual Studio 2005 Release */

int __cdecl __setenvp(void)

{
  undefined4 *puVar1;
  size_t sVar2;
  char *_Dst;
  errno_t eVar3;
  char *pcVar4;
  int iVar5;
  
  if (DAT_1076cf98 == 0) {
    ___initmbctable();
  }
  iVar5 = 0;
  pcVar4 = DAT_1076c328;
  if (DAT_1076c328 != (char *)0x0) {
    for (; *pcVar4 != '\0'; pcVar4 = pcVar4 + sVar2 + 1) {
      if (*pcVar4 != '=') {
        iVar5 = iVar5 + 1;
      }
      sVar2 = _strlen(pcVar4);
    }
    puVar1 = __calloc_crt(iVar5 + 1,4);
    pcVar4 = DAT_1076c328;
    DAT_1076c6a0 = puVar1;
    if (puVar1 != (undefined4 *)0x0) {
      do {
        if (*pcVar4 == '\0') {
          _free(DAT_1076c328);
          DAT_1076c328 = (char *)0x0;
          *puVar1 = 0;
          DAT_1076cf80 = 1;
          return 0;
        }
        sVar2 = _strlen(pcVar4);
        sVar2 = sVar2 + 1;
        if (*pcVar4 != '=') {
          _Dst = __calloc_crt(sVar2,1);
          *puVar1 = _Dst;
          if (_Dst == (char *)0x0) {
            _free(DAT_1076c6a0);
            DAT_1076c6a0 = (undefined4 *)0x0;
            return -1;
          }
          eVar3 = _strcpy_s(_Dst,sVar2,pcVar4);
          if (eVar3 != 0) {
                    /* WARNING: Subroutine does not return */
            __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
          }
          puVar1 = puVar1 + 1;
        }
        pcVar4 = pcVar4 + sVar2;
      } while( true );
    }
  }
  return -1;
}


// ==== 1072130a parse_cmdline

/* Library Function - Single Match
    _parse_cmdline
   
   Library: Visual Studio 2005 Release */

void __cdecl parse_cmdline(undefined4 *param_1,byte *param_2,int *param_3)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  byte *in_EDX;
  byte *pbVar5;
  byte bVar6;
  byte *pbVar7;
  byte *pbVar8;
  int *unaff_EDI;
  
  *unaff_EDI = 0;
  *param_3 = 1;
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = param_2;
    param_1 = param_1 + 1;
  }
  bVar2 = false;
  pbVar5 = param_2;
  do {
    if (*in_EDX == 0x22) {
      bVar2 = !bVar2;
      bVar6 = 0x22;
      pbVar7 = in_EDX + 1;
    }
    else {
      *unaff_EDI = *unaff_EDI + 1;
      if (pbVar5 != (byte *)0x0) {
        *pbVar5 = *in_EDX;
        param_2 = pbVar5 + 1;
      }
      bVar6 = *in_EDX;
      pbVar7 = in_EDX + 1;
      iVar3 = __ismbblead((uint)bVar6);
      if (iVar3 != 0) {
        *unaff_EDI = *unaff_EDI + 1;
        if (param_2 != (byte *)0x0) {
          *param_2 = *pbVar7;
          param_2 = param_2 + 1;
        }
        pbVar7 = in_EDX + 2;
      }
      pbVar5 = param_2;
      if (bVar6 == 0) {
        pbVar7 = pbVar7 + -1;
        goto LAB_1072139c;
      }
    }
    in_EDX = pbVar7;
  } while ((bVar2) || ((bVar6 != 0x20 && (bVar6 != 9))));
  if (pbVar5 != (byte *)0x0) {
    pbVar5[-1] = 0;
  }
LAB_1072139c:
  bVar2 = false;
  while (*pbVar7 != 0) {
    for (; (*pbVar7 == 0x20 || (*pbVar7 == 9)); pbVar7 = pbVar7 + 1) {
    }
    if (*pbVar7 == 0) break;
    if (param_1 != (undefined4 *)0x0) {
      *param_1 = pbVar5;
      param_1 = param_1 + 1;
    }
    *param_3 = *param_3 + 1;
    while( true ) {
      bVar1 = true;
      uVar4 = 0;
      for (; *pbVar7 == 0x5c; pbVar7 = pbVar7 + 1) {
        uVar4 = uVar4 + 1;
      }
      if (*pbVar7 == 0x22) {
        pbVar8 = pbVar7;
        if (((uVar4 & 1) == 0) && ((!bVar2 || (pbVar8 = pbVar7 + 1, *pbVar8 != 0x22)))) {
          bVar1 = false;
          bVar2 = !bVar2;
          pbVar8 = pbVar7;
        }
        uVar4 = uVar4 >> 1;
        pbVar7 = pbVar8;
      }
      while (uVar4 != 0) {
        uVar4 = uVar4 - 1;
        if (pbVar5 != (byte *)0x0) {
          *pbVar5 = 0x5c;
          pbVar5 = pbVar5 + 1;
        }
        *unaff_EDI = *unaff_EDI + 1;
        param_2 = pbVar5;
      }
      bVar6 = *pbVar7;
      if ((bVar6 == 0) || ((!bVar2 && ((bVar6 == 0x20 || (bVar6 == 9)))))) break;
      if (bVar1) {
        if (pbVar5 == (byte *)0x0) {
          iVar3 = __ismbblead((int)(char)bVar6);
          if (iVar3 != 0) {
            pbVar7 = pbVar7 + 1;
            *unaff_EDI = *unaff_EDI + 1;
          }
        }
        else {
          iVar3 = __ismbblead((int)(char)bVar6);
          if (iVar3 != 0) {
            *param_2 = *pbVar7;
            pbVar7 = pbVar7 + 1;
            *unaff_EDI = *unaff_EDI + 1;
            param_2 = param_2 + 1;
          }
          *param_2 = *pbVar7;
          param_2 = param_2 + 1;
        }
        *unaff_EDI = *unaff_EDI + 1;
        pbVar5 = param_2;
      }
      pbVar7 = pbVar7 + 1;
    }
    if (pbVar5 != (byte *)0x0) {
      *pbVar5 = 0;
      pbVar5 = pbVar5 + 1;
      param_2 = pbVar5;
    }
    *unaff_EDI = *unaff_EDI + 1;
  }
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = 0;
  }
  *param_3 = *param_3 + 1;
  return;
}


// ==== 107214a2 __setargv

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    __setargv
   
   Library: Visual Studio 2005 Release */

int __cdecl __setargv(void)

{
  uint _Size;
  uint uVar1;
  undefined4 *puVar2;
  uint local_10;
  uint local_c;
  char *local_8;
  
  if (DAT_1076cf98 == 0) {
    ___initmbctable();
  }
  DAT_1076c7cc = 0;
  GetModuleFileNameA((HMODULE)0x0,&DAT_1076c6c8,0x104);
  _DAT_1076c6b0 = &DAT_1076c6c8;
  if ((DAT_1076cfb4 == (char *)0x0) || (local_8 = DAT_1076cfb4, *DAT_1076cfb4 == '\0')) {
    local_8 = &DAT_1076c6c8;
  }
  parse_cmdline((undefined4 *)0x0,(byte *)0x0,(int *)&local_c);
  uVar1 = local_c;
  if ((local_c < 0x3fffffff) && (local_10 != 0xffffffff)) {
    _Size = local_c * 4 + local_10;
    if ((local_10 <= _Size) && (puVar2 = __malloc_crt(_Size), puVar2 != (undefined4 *)0x0)) {
      parse_cmdline(puVar2,(byte *)(puVar2 + uVar1),(int *)&local_c);
      _DAT_1076c694 = local_c - 1;
      _DAT_1076c698 = puVar2;
      return 0;
    }
  }
  return -1;
}


// ==== 1072155b ___crtGetEnvironmentStringsA

/* Library Function - Single Match
    ___crtGetEnvironmentStringsA
   
   Library: Visual Studio 2005 Release */

LPVOID __cdecl ___crtGetEnvironmentStringsA(void)

{
  char cVar1;
  WCHAR WVar2;
  DWORD DVar3;
  WCHAR *pWVar4;
  int iVar6;
  size_t _Size;
  LPSTR lpMultiByteStr;
  LPCH _Src;
  char *pcVar7;
  void *_Dst;
  LPWCH lpWideCharStr;
  LPSTR local_8;
  WCHAR *pWVar5;
  char *pcVar8;
  
  lpWideCharStr = (LPWCH)0x0;
  if (DAT_1076c7d0 == 0) {
    lpWideCharStr = GetEnvironmentStringsW();
    if (lpWideCharStr != (LPWCH)0x0) {
      DAT_1076c7d0 = 1;
      goto LAB_107215ad;
    }
    DVar3 = GetLastError();
    if (DVar3 == 0x78) {
      DAT_1076c7d0 = 2;
    }
  }
  if (DAT_1076c7d0 != 1) {
    if ((DAT_1076c7d0 != 2) && (DAT_1076c7d0 != 0)) {
      return (LPVOID)0x0;
    }
    _Src = GetEnvironmentStrings();
    if (_Src == (LPCH)0x0) {
      return (LPVOID)0x0;
    }
    cVar1 = *_Src;
    pcVar7 = _Src;
    while (cVar1 != '\0') {
      do {
        pcVar8 = pcVar7;
        pcVar7 = pcVar8 + 1;
      } while (*pcVar7 != '\0');
      pcVar7 = pcVar8 + 2;
      cVar1 = *pcVar7;
    }
    _Dst = __malloc_crt((size_t)(pcVar7 + (1 - (int)_Src)));
    if (_Dst == (void *)0x0) {
      FreeEnvironmentStringsA(_Src);
      return (LPVOID)0x0;
    }
    _memcpy(_Dst,_Src,(size_t)(pcVar7 + (1 - (int)_Src)));
    FreeEnvironmentStringsA(_Src);
    return _Dst;
  }
LAB_107215ad:
  if ((lpWideCharStr == (LPWCH)0x0) &&
     (lpWideCharStr = GetEnvironmentStringsW(), lpWideCharStr == (LPWCH)0x0)) {
    return (LPVOID)0x0;
  }
  WVar2 = *lpWideCharStr;
  pWVar4 = lpWideCharStr;
  while (WVar2 != L'\0') {
    do {
      pWVar5 = pWVar4;
      pWVar4 = pWVar5 + 1;
    } while (*pWVar4 != L'\0');
    pWVar4 = pWVar5 + 2;
    WVar2 = *pWVar4;
  }
  iVar6 = ((int)pWVar4 - (int)lpWideCharStr >> 1) + 1;
  _Size = WideCharToMultiByte(0,0,lpWideCharStr,iVar6,(LPSTR)0x0,0,(LPCSTR)0x0,(LPBOOL)0x0);
  local_8 = (LPSTR)0x0;
  if (((_Size != 0) && (lpMultiByteStr = __malloc_crt(_Size), lpMultiByteStr != (LPSTR)0x0)) &&
     (iVar6 = WideCharToMultiByte(0,0,lpWideCharStr,iVar6,lpMultiByteStr,_Size,(LPCSTR)0x0,
                                  (LPBOOL)0x0), local_8 = lpMultiByteStr, iVar6 == 0)) {
    _free(lpMultiByteStr);
    local_8 = (LPSTR)0x0;
  }
  FreeEnvironmentStringsW(lpWideCharStr);
  return local_8;
}


// ==== 10721690 __RTC_Initialize

/* Library Function - Single Match
    __RTC_Initialize
   
   Library: Visual Studio 2005 Release */

void __RTC_Initialize(void)

{
  undefined4 *puVar1;
  
  puVar1 = &DAT_10756530;
  do {
    if ((code *)*puVar1 != (code *)0x0) {
      (*(code *)*puVar1)();
    }
    puVar1 = puVar1 + 1;
  } while (puVar1 < &DAT_10756630);
  return;
}


// ==== 107216d8 ___heap_select

/* Library Function - Single Match
    ___heap_select
   
   Library: Visual Studio 2005 Release */

undefined4 ___heap_select(void)

{
  int iVar1;
  uint local_c;
  int local_8;
  
  local_8 = 0;
  local_c = 0;
  iVar1 = __get_osplatform(&local_8);
  if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  }
  iVar1 = __get_winmajor(&local_c);
  if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  }
  if ((local_8 == 2) && (4 < local_c)) {
    return 1;
  }
  return 3;
}


// ==== 10721733 __heap_init

/* Library Function - Single Match
    __heap_init
   
   Library: Visual Studio 2005 Release */

int __cdecl __heap_init(void)

{
  int iVar1;
  int in_stack_00000004;
  
  DAT_1076c7d4 = HeapCreate((uint)(in_stack_00000004 == 0),0x1000,0);
  if (DAT_1076c7d4 == (HANDLE)0x0) {
    return 0;
  }
  DAT_1076ce34 = ___heap_select();
  if ((DAT_1076ce34 == 3) && (iVar1 = ___sbh_heap_init(0x3f8), iVar1 == 0)) {
    HeapDestroy(DAT_1076c7d4);
    DAT_1076c7d4 = (HANDLE)0x0;
    return 0;
  }
  return 1;
}


// ==== 1072178d __heap_term

/* Library Function - Single Match
    __heap_term
   
   Library: Visual Studio 2005 Release */

void __cdecl __heap_term(void)

{
  undefined4 *puVar1;
  int iVar2;
  
  if (DAT_1076ce34 == 3) {
    iVar2 = 0;
    if (0 < DAT_1076ce08) {
      puVar1 = (undefined4 *)((int)DAT_1076ce0c + 0x10);
      do {
        VirtualFree((LPVOID)puVar1[-1],0,0x8000);
        HeapFree(DAT_1076c7d4,0,(LPVOID)*puVar1);
        puVar1 = puVar1 + 5;
        iVar2 = iVar2 + 1;
      } while (iVar2 < DAT_1076ce08);
    }
    HeapFree(DAT_1076c7d4,0,DAT_1076ce0c);
  }
  HeapDestroy(DAT_1076c7d4);
  DAT_1076c7d4 = (HANDLE)0x0;
  return;
}


// ==== 10721807 FUN_10721807

void FUN_10721807(void)

{
  return;
}


// ==== 1072183a FUN_1072183a

undefined4 __cdecl FUN_1072183a(int param_1,DWORD param_2)

{
  int *piVar1;
  code *pcVar2;
  DWORD DVar3;
  DWORD DVar4;
  DWORD *pDVar5;
  int *piVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  
  pDVar5 = FUN_1071f8e0();
  uVar7 = 0;
  if (pDVar5 != (DWORD *)0x0) {
    piVar1 = (int *)pDVar5[0x17];
    piVar6 = piVar1;
    do {
      if (*piVar6 == param_1) break;
      piVar6 = piVar6 + 3;
    } while (piVar6 < piVar1 + DAT_10765e1c * 3);
    if ((piVar1 + DAT_10765e1c * 3 <= piVar6) || (*piVar6 != param_1)) {
      piVar6 = (int *)0x0;
    }
    if ((piVar6 == (int *)0x0) || (pcVar2 = (code *)piVar6[2], pcVar2 == (code *)0x0)) {
      uVar7 = 0;
    }
    else if (pcVar2 == (code *)0x5) {
      piVar6[2] = 0;
      uVar7 = 1;
    }
    else {
      if (pcVar2 != (code *)0x1) {
        DVar3 = pDVar5[0x18];
        pDVar5[0x18] = param_2;
        if (piVar6[1] == 8) {
          if (DAT_10765e10 < DAT_10765e14 + DAT_10765e10) {
            iVar8 = DAT_10765e10 * 0xc;
            iVar9 = DAT_10765e10;
            do {
              *(undefined4 *)(iVar8 + 8 + pDVar5[0x17]) = 0;
              iVar9 = iVar9 + 1;
              iVar8 = iVar8 + 0xc;
            } while (iVar9 < DAT_10765e14 + DAT_10765e10);
          }
          iVar9 = *piVar6;
          DVar4 = pDVar5[0x19];
          if (iVar9 == -0x3fffff72) {
            pDVar5[0x19] = 0x83;
          }
          else if (iVar9 == -0x3fffff70) {
            pDVar5[0x19] = 0x81;
          }
          else if (iVar9 == -0x3fffff6f) {
            pDVar5[0x19] = 0x84;
          }
          else if (iVar9 == -0x3fffff6d) {
            pDVar5[0x19] = 0x85;
          }
          else if (iVar9 == -0x3fffff73) {
            pDVar5[0x19] = 0x82;
          }
          else if (iVar9 == -0x3fffff71) {
            pDVar5[0x19] = 0x86;
          }
          else if (iVar9 == -0x3fffff6e) {
            pDVar5[0x19] = 0x8a;
          }
          (*pcVar2)(8,pDVar5[0x19]);
          pDVar5[0x19] = DVar4;
        }
        else {
          piVar6[2] = 0;
          (*pcVar2)(piVar6[1]);
        }
        pDVar5[0x18] = DVar3;
      }
      uVar7 = 0xffffffff;
    }
  }
  return uVar7;
}


// ==== 107219b3 ___security_init_cookie

/* Library Function - Single Match
    ___security_init_cookie
   
   Library: Visual Studio 2005 Release */

void __cdecl ___security_init_cookie(void)

{
  DWORD DVar1;
  DWORD DVar2;
  DWORD DVar3;
  uint uVar4;
  LARGE_INTEGER local_14;
  _FILETIME local_c;
  
  local_c.dwLowDateTime = 0;
  local_c.dwHighDateTime = 0;
  if ((DAT_10765c70 == 0xbb40e64e) || ((DAT_10765c70 & 0xffff0000) == 0)) {
    GetSystemTimeAsFileTime(&local_c);
    uVar4 = local_c.dwHighDateTime ^ local_c.dwLowDateTime;
    DVar1 = GetCurrentProcessId();
    DVar2 = GetCurrentThreadId();
    DVar3 = GetTickCount();
    QueryPerformanceCounter(&local_14);
    DAT_10765c70 = uVar4 ^ DVar1 ^ DVar2 ^ DVar3 ^ local_14.s.HighPart ^ local_14.s.LowPart;
    if (DAT_10765c70 == 0xbb40e64e) {
      DAT_10765c70 = 0xbb40e64f;
    }
    else if ((DAT_10765c70 & 0xffff0000) == 0) {
      DAT_10765c70 = DAT_10765c70 | DAT_10765c70 << 0x10;
    }
  }
  DAT_10765c74 = ~DAT_10765c70;
  return;
}


// ==== 10721a50 _strrchr

/* Library Function - Single Match
    _strrchr
   
   Library: Visual Studio 2005 Release */

char * __cdecl _strrchr(char *_Str,int _Ch)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  
  iVar2 = -1;
  do {
    pcVar4 = _Str;
    if (iVar2 == 0) break;
    iVar2 = iVar2 + -1;
    pcVar4 = _Str + 1;
    cVar1 = *_Str;
    _Str = pcVar4;
  } while (cVar1 != '\0');
  iVar2 = -(iVar2 + 1);
  pcVar4 = pcVar4 + -1;
  do {
    pcVar3 = pcVar4;
    if (iVar2 == 0) break;
    iVar2 = iVar2 + -1;
    pcVar3 = pcVar4 + -1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar3;
  } while ((char)_Ch != cVar1);
  pcVar3 = pcVar3 + 1;
  if (*pcVar3 != (char)_Ch) {
    pcVar3 = (char *)0x0;
  }
  return pcVar3;
}


// ==== 10721a7d FUN_10721a7d

undefined4 FUN_10721a7d(void)

{
  int in_EAX;
  
  if (in_EAX == 0x3a4) {
    return 0x411;
  }
  if (in_EAX == 0x3a8) {
    return 0x804;
  }
  if (in_EAX == 0x3b5) {
    return 0x412;
  }
  if (in_EAX != 0x3b6) {
    return 0;
  }
  return 0x404;
}


// ==== 10721aac setSBCS

/* Library Function - Single Match
    void __cdecl setSBCS(struct threadmbcinfostruct *)
   
   Library: Visual Studio 2005 Release */

void __cdecl setSBCS(threadmbcinfostruct *param_1)

{
  int in_EAX;
  undefined1 *puVar1;
  int iVar2;
  
  iVar2 = 0x101;
  puVar1 = (undefined1 *)(in_EAX + 0x1c);
  _memset(puVar1,0,0x101);
  *(undefined4 *)(in_EAX + 4) = 0;
  *(undefined4 *)(in_EAX + 8) = 0;
  *(undefined4 *)(in_EAX + 0xc) = 0;
  *(undefined4 *)(in_EAX + 0x10) = 0;
  *(undefined4 *)(in_EAX + 0x14) = 0;
  *(undefined4 *)(in_EAX + 0x18) = 0;
  do {
    *puVar1 = puVar1[(int)&DAT_10765e20 - in_EAX];
    puVar1 = puVar1 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  puVar1 = (undefined1 *)(in_EAX + 0x11d);
  iVar2 = 0x100;
  do {
    *puVar1 = puVar1[(int)&DAT_10765e20 - in_EAX];
    puVar1 = puVar1 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return;
}


// ==== 10721b01 setSBUpLow

/* Library Function - Single Match
    void __cdecl setSBUpLow(struct threadmbcinfostruct *)
   
   Library: Visual Studio 2005 Release */

void __cdecl setSBUpLow(threadmbcinfostruct *param_1)

{
  byte *pbVar1;
  char *pcVar2;
  BOOL BVar3;
  uint uVar4;
  CHAR CVar5;
  char cVar6;
  BYTE *pBVar7;
  int unaff_ESI;
  _cpinfo local_51c;
  WORD local_508 [52];
  undefined1 local_4a0 [408];
  CHAR local_308 [256];
  CHAR local_208 [256];
  CHAR local_108 [256];
  uint local_8;
  
  local_8 = DAT_10765c70 ^ (uint)local_4a0;
  BVar3 = GetCPInfo(*(UINT *)(unaff_ESI + 4),&local_51c);
  if (BVar3 == 0) {
    uVar4 = 0;
    do {
      pcVar2 = (char *)(unaff_ESI + 0x11d + uVar4);
      if (pcVar2 + (-0x61 - (unaff_ESI + 0x11d)) + 0x20 < (char *)0x1a) {
        pbVar1 = (byte *)(unaff_ESI + 0x1d + uVar4);
        *pbVar1 = *pbVar1 | 0x10;
        cVar6 = (char)uVar4 + ' ';
LAB_10721c68:
        *pcVar2 = cVar6;
      }
      else {
        if (pcVar2 + (-0x61 - (unaff_ESI + 0x11d)) < (char *)0x1a) {
          pbVar1 = (byte *)(unaff_ESI + 0x1d + uVar4);
          *pbVar1 = *pbVar1 | 0x20;
          cVar6 = (char)uVar4 + -0x20;
          goto LAB_10721c68;
        }
        *pcVar2 = '\0';
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < 0x100);
  }
  else {
    uVar4 = 0;
    do {
      local_108[uVar4] = (CHAR)uVar4;
      uVar4 = uVar4 + 1;
    } while (uVar4 < 0x100);
    local_108[0] = ' ';
    if (local_51c.LeadByte[0] != 0) {
      pBVar7 = local_51c.LeadByte + 1;
      do {
        uVar4 = (uint)local_51c.LeadByte[0];
        if (uVar4 <= *pBVar7) {
          _memset(local_108 + uVar4,0x20,(*pBVar7 - uVar4) + 1);
        }
        local_51c.LeadByte[0] = pBVar7[1];
        pBVar7 = pBVar7 + 2;
      } while (local_51c.LeadByte[0] != 0);
    }
    ___crtGetStringTypeA
              ((_locale_t)0x0,1,local_108,0x100,local_508,*(int *)(unaff_ESI + 4),
               *(BOOL *)(unaff_ESI + 0xc));
    ___crtLCMapStringA((_locale_t)0x0,*(LPCWSTR *)(unaff_ESI + 0xc),0x100,local_108,0x100,local_208,
                       0x100,*(int *)(unaff_ESI + 4),0);
    ___crtLCMapStringA((_locale_t)0x0,*(LPCWSTR *)(unaff_ESI + 0xc),0x200,local_108,0x100,local_308,
                       0x100,*(int *)(unaff_ESI + 4),0);
    uVar4 = 0;
    do {
      if ((local_508[uVar4] & 1) == 0) {
        if ((local_508[uVar4] & 2) != 0) {
          pbVar1 = (byte *)(unaff_ESI + 0x1d + uVar4);
          *pbVar1 = *pbVar1 | 0x20;
          CVar5 = local_308[uVar4];
          goto LAB_10721c0f;
        }
        *(undefined1 *)(unaff_ESI + 0x11d + uVar4) = 0;
      }
      else {
        pbVar1 = (byte *)(unaff_ESI + 0x1d + uVar4);
        *pbVar1 = *pbVar1 | 0x10;
        CVar5 = local_208[uVar4];
LAB_10721c0f:
        *(CHAR *)(unaff_ESI + 0x11d + uVar4) = CVar5;
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < 0x100);
  }
  __security_check_cookie(local_8 ^ (uint)local_4a0);
  return;
}


// ==== 10721c8b ___updatetmbcinfo

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    ___updatetmbcinfo
   
   Library: Visual Studio 2005 Release */

pthreadmbcinfo __cdecl ___updatetmbcinfo(void)

{
  _ptiddata p_Var1;
  LONG LVar2;
  pthreadmbcinfo lpAddend;
  
  p_Var1 = __getptd();
  if (((p_Var1->_ownlocale & DAT_10766344) == 0) || (p_Var1->ptlocinfo == (pthreadlocinfo)0x0)) {
    __lock(0xd);
    lpAddend = p_Var1->ptmbcinfo;
    if (lpAddend != (pthreadmbcinfo)PTR_DAT_10766248) {
      if (lpAddend != (pthreadmbcinfo)0x0) {
        LVar2 = InterlockedDecrement(&lpAddend->refcount);
        if ((LVar2 == 0) && (lpAddend != (pthreadmbcinfo)&DAT_10765e20)) {
          _free(lpAddend);
        }
      }
      p_Var1->ptmbcinfo = (pthreadmbcinfo)PTR_DAT_10766248;
      lpAddend = (pthreadmbcinfo)PTR_DAT_10766248;
      InterlockedIncrement((LONG *)PTR_DAT_10766248);
    }
    FUN_10721d26();
  }
  else {
    lpAddend = p_Var1->ptmbcinfo;
  }
  if (lpAddend == (pthreadmbcinfo)0x0) {
    __amsg_exit(0x20);
  }
  return lpAddend;
}


// ==== 10721d26 FUN_10721d26

void FUN_10721d26(void)

{
  FUN_10724ccf(0xd);
  return;
}


// ==== 10721d2f getSystemCP

/* Library Function - Single Match
    int __cdecl getSystemCP(int)
   
   Library: Visual Studio 2005 Release */

int __cdecl getSystemCP(int param_1)

{
  UINT UVar1;
  int unaff_ESI;
  int local_14 [2];
  int local_c;
  char local_8;
  
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)local_14,(localeinfo_struct *)0x0);
  DAT_1076c7d8 = 0;
  if (unaff_ESI == -2) {
    DAT_1076c7d8 = 1;
    UVar1 = GetOEMCP();
  }
  else if (unaff_ESI == -3) {
    DAT_1076c7d8 = 1;
    UVar1 = GetACP();
  }
  else {
    if (unaff_ESI != -4) {
      if (local_8 == '\0') {
        DAT_1076c7d8 = 0;
        return unaff_ESI;
      }
      *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
      return unaff_ESI;
    }
    UVar1 = *(UINT *)(local_14[0] + 4);
    DAT_1076c7d8 = 1;
  }
  if (local_8 != '\0') {
    *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
  }
  return UVar1;
}


// ==== 10721da9 FUN_10721da9

void __cdecl FUN_10721da9(undefined4 param_1,int param_2)

{
  BYTE *pBVar1;
  byte *pbVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  BOOL BVar6;
  undefined2 *puVar7;
  byte *pbVar8;
  undefined4 uVar9;
  int extraout_ECX;
  undefined2 *puVar10;
  int iVar11;
  undefined4 extraout_EDX;
  BYTE *pBVar12;
  threadmbcinfostruct *unaff_EDI;
  uint local_24;
  byte *local_20;
  _cpinfo local_1c;
  uint local_8;
  
  local_8 = DAT_10765c70 ^ (uint)&stack0xfffffffc;
  uVar4 = getSystemCP((int)unaff_EDI);
  if (uVar4 != 0) {
    local_20 = (byte *)0x0;
    uVar5 = 0;
LAB_10721de5:
    if (*(uint *)((int)&DAT_10766250 + uVar5) != uVar4) goto code_r0x10721df1;
    _memset((void *)(param_2 + 0x1c),0,0x101);
    local_24 = 0;
    pbVar8 = &DAT_10766260 + (int)local_20 * 0x30;
    local_20 = pbVar8;
    do {
      for (; (*pbVar8 != 0 && (bVar3 = pbVar8[1], bVar3 != 0)); pbVar8 = pbVar8 + 2) {
        for (uVar5 = (uint)*pbVar8; uVar5 <= bVar3; uVar5 = uVar5 + 1) {
          pbVar2 = (byte *)(param_2 + 0x1d + uVar5);
          *pbVar2 = *pbVar2 | *(byte *)(local_24 + 0x1076624c);
          bVar3 = pbVar8[1];
        }
      }
      local_24 = local_24 + 1;
      pbVar8 = local_20 + 8;
      local_20 = pbVar8;
    } while (local_24 < 4);
    *(uint *)(param_2 + 4) = uVar4;
    *(undefined4 *)(param_2 + 8) = 1;
    uVar9 = FUN_10721a7d();
    *(undefined4 *)(param_2 + 0xc) = uVar9;
    puVar7 = (undefined2 *)(param_2 + 0x10);
    puVar10 = (undefined2 *)(&DAT_10766254 + extraout_ECX);
    iVar11 = 6;
    do {
      *puVar7 = *puVar10;
      puVar10 = puVar10 + 1;
      puVar7 = puVar7 + 1;
      iVar11 = iVar11 + -1;
    } while (iVar11 != 0);
    goto LAB_10721f16;
  }
LAB_10721dd2:
  setSBCS(unaff_EDI);
LAB_10721f73:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
code_r0x10721df1:
  local_20 = (byte *)((int)local_20 + 1);
  uVar5 = uVar5 + 0x30;
  if (0xef < uVar5) goto code_r0x10721dfe;
  goto LAB_10721de5;
code_r0x10721dfe:
  if (((uVar4 == 65000) || (uVar4 == 0xfde9)) ||
     (BVar6 = IsValidCodePage(uVar4 & 0xffff), BVar6 == 0)) goto LAB_10721f73;
  BVar6 = GetCPInfo(uVar4,&local_1c);
  if (BVar6 != 0) {
    _memset((void *)(param_2 + 0x1c),0,0x101);
    *(uint *)(param_2 + 4) = uVar4;
    *(undefined4 *)(param_2 + 0xc) = 0;
    if (local_1c.MaxCharSize < 2) {
      *(undefined4 *)(param_2 + 8) = 0;
    }
    else {
      if (local_1c.LeadByte[0] != '\0') {
        pBVar12 = local_1c.LeadByte + 1;
        do {
          bVar3 = *pBVar12;
          if (bVar3 == 0) break;
          for (uVar4 = (uint)pBVar12[-1]; uVar4 <= bVar3; uVar4 = uVar4 + 1) {
            pbVar8 = (byte *)(param_2 + 0x1d + uVar4);
            *pbVar8 = *pbVar8 | 4;
          }
          pBVar1 = pBVar12 + 1;
          pBVar12 = pBVar12 + 2;
        } while (*pBVar1 != 0);
      }
      pbVar8 = (byte *)(param_2 + 0x1e);
      iVar11 = 0xfe;
      do {
        *pbVar8 = *pbVar8 | 8;
        pbVar8 = pbVar8 + 1;
        iVar11 = iVar11 + -1;
      } while (iVar11 != 0);
      uVar9 = FUN_10721a7d();
      *(undefined4 *)(param_2 + 0xc) = uVar9;
      *(undefined4 *)(param_2 + 8) = extraout_EDX;
    }
    *(undefined4 *)(param_2 + 0x10) = 0;
    *(undefined4 *)(param_2 + 0x14) = 0;
    *(undefined4 *)(param_2 + 0x18) = 0;
LAB_10721f16:
    setSBUpLow(unaff_EDI);
    goto LAB_10721f73;
  }
  if (DAT_1076c7d8 == 0) goto LAB_10721f73;
  goto LAB_10721dd2;
}


// ==== 10721f82 __getmbcp

/* Library Function - Single Match
    __getmbcp
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release, Visual Studio 2010 Release */

int __cdecl __getmbcp(void)

{
  int iVar1;
  _LocaleUpdate local_14 [4];
  int local_10;
  int local_c;
  char local_8;
  
  _LocaleUpdate::_LocaleUpdate(local_14,(localeinfo_struct *)0x0);
  if (*(int *)(local_10 + 8) == 0) {
    if (local_8 != '\0') {
      *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
    }
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(local_10 + 4);
    if (local_8 != '\0') {
      *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
      return iVar1;
    }
  }
  return iVar1;
}


// ==== 10721fbe __setmbcp

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    __setmbcp
   
   Library: Visual Studio 2005 Release */

int __cdecl __setmbcp(int _CodePage)

{
  _ptiddata p_Var1;
  int iVar2;
  pthreadmbcinfo ptVar3;
  LONG LVar4;
  undefined4 *puVar5;
  int iVar6;
  pthreadmbcinfo ptVar7;
  pthreadmbcinfo ptVar8;
  int in_stack_ffffffc8;
  int local_24;
  
  local_24 = -1;
  p_Var1 = __getptd();
  ___updatetmbcinfo();
  ptVar3 = p_Var1->ptmbcinfo;
  iVar2 = getSystemCP(in_stack_ffffffc8);
  if (iVar2 == ptVar3->mbcodepage) {
    local_24 = 0;
  }
  else {
    ptVar3 = __malloc_crt(0x220);
    if (ptVar3 != (pthreadmbcinfo)0x0) {
      ptVar7 = p_Var1->ptmbcinfo;
      ptVar8 = ptVar3;
      for (iVar6 = 0x88; iVar6 != 0; iVar6 = iVar6 + -1) {
        ptVar8->refcount = ptVar7->refcount;
        ptVar7 = (pthreadmbcinfo)&ptVar7->mbcodepage;
        ptVar8 = (pthreadmbcinfo)&ptVar8->mbcodepage;
      }
      ptVar3->refcount = 0;
      local_24 = FUN_10721da9(iVar2,(int)ptVar3);
      if (local_24 == 0) {
        LVar4 = InterlockedDecrement(&p_Var1->ptmbcinfo->refcount);
        if ((LVar4 == 0) && (p_Var1->ptmbcinfo != (pthreadmbcinfo)&DAT_10765e20)) {
          _free(p_Var1->ptmbcinfo);
        }
        p_Var1->ptmbcinfo = ptVar3;
        InterlockedIncrement(&ptVar3->refcount);
        if (((p_Var1->_ownlocale & 2) == 0) && (((byte)DAT_10766344 & 1) == 0)) {
          __lock(0xd);
          _DAT_1076c7e8 = ptVar3->mbcodepage;
          _DAT_1076c7ec = ptVar3->ismbcodepage;
          _DAT_1076c7f0 = *(undefined4 *)ptVar3->mbulinfo;
          for (iVar2 = 0; iVar2 < 5; iVar2 = iVar2 + 1) {
            (&DAT_1076c7dc)[iVar2] = ptVar3->mbulinfo[iVar2 + 2];
          }
          for (iVar2 = 0; iVar2 < 0x101; iVar2 = iVar2 + 1) {
            (&DAT_10766040)[iVar2] = ptVar3->mbctype[iVar2 + 4];
          }
          for (iVar2 = 0; iVar2 < 0x100; iVar2 = iVar2 + 1) {
            (&DAT_10766148)[iVar2] = ptVar3->mbcasemap[iVar2 + 4];
          }
          LVar4 = InterlockedDecrement((LONG *)PTR_DAT_10766248);
          if ((LVar4 == 0) && (PTR_DAT_10766248 != &DAT_10765e20)) {
            _free(PTR_DAT_10766248);
          }
          PTR_DAT_10766248 = (undefined *)ptVar3;
          InterlockedIncrement(&ptVar3->refcount);
          FUN_1072211f();
        }
      }
      else if (local_24 == -1) {
        if (ptVar3 != (pthreadmbcinfo)&DAT_10765e20) {
          _free(ptVar3);
        }
        puVar5 = (undefined4 *)FUN_10724278();
        *puVar5 = 0x16;
      }
    }
  }
  return local_24;
}


// ==== 1072211f FUN_1072211f

void FUN_1072211f(void)

{
  FUN_10724ccf(0xd);
  return;
}


// ==== 10722158 ___initmbctable

/* Library Function - Single Match
    ___initmbctable
   
   Library: Visual Studio 2005 Release */

undefined4 ___initmbctable(void)

{
  if (DAT_1076cf98 == 0) {
    __setmbcp(-3);
    DAT_1076cf98 = 1;
  }
  return 0;
}


// ==== 10722182 ___freetlocinfo

/* Library Function - Single Match
    ___freetlocinfo
   
   Library: Visual Studio 2005 Release */

void __cdecl ___freetlocinfo(void *param_1)

{
  int *piVar1;
  undefined **ppuVar2;
  int iVar3;
  undefined4 *puVar4;
  
  if ((((*(undefined ***)((int)param_1 + 0xbc) != (undefined **)0x0) &&
       (*(undefined ***)((int)param_1 + 0xbc) != &PTR_DAT_10766898)) &&
      (*(int **)((int)param_1 + 0xb0) != (int *)0x0)) && (**(int **)((int)param_1 + 0xb0) == 0)) {
    piVar1 = *(int **)((int)param_1 + 0xb8);
    if ((piVar1 != (int *)0x0) && (*piVar1 == 0)) {
      _free(piVar1);
      ___free_lconv_mon(*(int *)((int)param_1 + 0xbc));
    }
    piVar1 = *(int **)((int)param_1 + 0xb4);
    if ((piVar1 != (int *)0x0) && (*piVar1 == 0)) {
      _free(piVar1);
      ___free_lconv_num(*(undefined4 **)((int)param_1 + 0xbc));
    }
    _free(*(void **)((int)param_1 + 0xb0));
    _free(*(void **)((int)param_1 + 0xbc));
  }
  if ((*(int **)((int)param_1 + 0xc0) != (int *)0x0) && (**(int **)((int)param_1 + 0xc0) == 0)) {
    _free((void *)(*(int *)((int)param_1 + 0xc4) + -0xfe));
    _free((void *)(*(int *)((int)param_1 + 0xcc) + -0x80));
    _free((void *)(*(int *)((int)param_1 + 0xd0) + -0x80));
    _free(*(void **)((int)param_1 + 0xc0));
  }
  ppuVar2 = *(undefined ***)((int)param_1 + 0xd4);
  if ((ppuVar2 != &PTR_DAT_107667d8) && (ppuVar2[0x2d] == (undefined *)0x0)) {
    ___free_lc_time(ppuVar2);
    _free(*(void **)((int)param_1 + 0xd4));
  }
  puVar4 = (undefined4 *)((int)param_1 + 0x50);
  iVar3 = 6;
  do {
    if ((((undefined *)puVar4[-2] != &DAT_10766348) &&
        (piVar1 = (int *)*puVar4, piVar1 != (int *)0x0)) && (*piVar1 == 0)) {
      _free(piVar1);
    }
    if (((puVar4[-1] != 0) && (piVar1 = (int *)puVar4[1], piVar1 != (int *)0x0)) && (*piVar1 == 0))
    {
      _free(piVar1);
    }
    puVar4 = puVar4 + 4;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  _free(param_1);
  return;
}


// ==== 107222c2 ___addlocaleref

/* Library Function - Single Match
    ___addlocaleref
   
   Library: Visual Studio 2005 Release */

void __cdecl ___addlocaleref(LONG *param_1)

{
  LONG *pLVar1;
  int iVar2;
  
  InterlockedIncrement(param_1);
  if ((LONG *)param_1[0x2c] != (LONG *)0x0) {
    InterlockedIncrement((LONG *)param_1[0x2c]);
  }
  if ((LONG *)param_1[0x2e] != (LONG *)0x0) {
    InterlockedIncrement((LONG *)param_1[0x2e]);
  }
  if ((LONG *)param_1[0x2d] != (LONG *)0x0) {
    InterlockedIncrement((LONG *)param_1[0x2d]);
  }
  if ((LONG *)param_1[0x30] != (LONG *)0x0) {
    InterlockedIncrement((LONG *)param_1[0x30]);
  }
  pLVar1 = param_1 + 0x14;
  iVar2 = 6;
  do {
    if (((undefined *)pLVar1[-2] != &DAT_10766348) && ((LONG *)*pLVar1 != (LONG *)0x0)) {
      InterlockedIncrement((LONG *)*pLVar1);
    }
    if ((pLVar1[-1] != 0) && ((LONG *)pLVar1[1] != (LONG *)0x0)) {
      InterlockedIncrement((LONG *)pLVar1[1]);
    }
    pLVar1 = pLVar1 + 4;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  InterlockedIncrement((LONG *)(param_1[0x35] + 0xb4));
  return;
}


// ==== 10722348 ___removelocaleref

/* Library Function - Single Match
    ___removelocaleref
   
   Library: Visual Studio 2005 Release */

LONG * __cdecl ___removelocaleref(LONG *param_1)

{
  LONG *pLVar1;
  int iVar2;
  
  if (param_1 != (LONG *)0x0) {
    InterlockedDecrement(param_1);
    if ((LONG *)param_1[0x2c] != (LONG *)0x0) {
      InterlockedDecrement((LONG *)param_1[0x2c]);
    }
    if ((LONG *)param_1[0x2e] != (LONG *)0x0) {
      InterlockedDecrement((LONG *)param_1[0x2e]);
    }
    if ((LONG *)param_1[0x2d] != (LONG *)0x0) {
      InterlockedDecrement((LONG *)param_1[0x2d]);
    }
    if ((LONG *)param_1[0x30] != (LONG *)0x0) {
      InterlockedDecrement((LONG *)param_1[0x30]);
    }
    pLVar1 = param_1 + 0x14;
    iVar2 = 6;
    do {
      if (((undefined *)pLVar1[-2] != &DAT_10766348) && ((LONG *)*pLVar1 != (LONG *)0x0)) {
        InterlockedDecrement((LONG *)*pLVar1);
      }
      if ((pLVar1[-1] != 0) && ((LONG *)pLVar1[1] != (LONG *)0x0)) {
        InterlockedDecrement((LONG *)pLVar1[1]);
      }
      pLVar1 = pLVar1 + 4;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    InterlockedDecrement((LONG *)(param_1[0x35] + 0xb4));
  }
  return param_1;
}


// ==== 107223d4 __copytlocinfo_nolock

/* Library Function - Single Match
    __copytlocinfo_nolock
   
   Library: Visual Studio 2005 Release */

void __fastcall __copytlocinfo_nolock(LONG *param_1)

{
  LONG *in_EAX;
  int iVar1;
  LONG *pLVar2;
  
  if (((param_1 != (LONG *)0x0) && (in_EAX != (LONG *)0x0)) && (in_EAX != param_1)) {
    pLVar2 = in_EAX;
    for (iVar1 = 0x36; iVar1 != 0; iVar1 = iVar1 + -1) {
      *pLVar2 = *param_1;
      param_1 = param_1 + 1;
      pLVar2 = pLVar2 + 1;
    }
    *in_EAX = 0;
    ___addlocaleref(in_EAX);
  }
  return;
}


// ==== 107223f8 __updatetlocinfoEx_nolock

/* Library Function - Single Match
    __updatetlocinfoEx_nolock
   
   Library: Visual Studio 2005 Release */

LONG * __updatetlocinfoEx_nolock(void)

{
  LONG *pLVar1;
  undefined4 *in_EAX;
  LONG *unaff_EDI;
  
  if ((unaff_EDI != (LONG *)0x0) && (in_EAX != (undefined4 *)0x0)) {
    pLVar1 = (LONG *)*in_EAX;
    if (pLVar1 != unaff_EDI) {
      *in_EAX = unaff_EDI;
      ___addlocaleref(unaff_EDI);
      if (pLVar1 != (LONG *)0x0) {
        ___removelocaleref(pLVar1);
        if ((*pLVar1 == 0) && (pLVar1 != (LONG *)&DAT_10766350)) {
          ___freetlocinfo(pLVar1);
        }
      }
    }
    return unaff_EDI;
  }
  return (LONG *)0x0;
}


// ==== 10722436 ___updatetlocinfo

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    ___updatetlocinfo
   
   Library: Visual Studio 2005 Release */

pthreadlocinfo __cdecl ___updatetlocinfo(void)

{
  _ptiddata p_Var1;
  
  p_Var1 = __getptd();
  if (((p_Var1->_ownlocale & DAT_10766344) == 0) || (p_Var1->ptlocinfo == (pthreadlocinfo)0x0)) {
    __lock(0xc);
    __updatetlocinfoEx_nolock();
    FUN_107224a0();
  }
  else {
    p_Var1 = __getptd();
    p_Var1 = (_ptiddata)p_Var1->ptlocinfo;
  }
  if (p_Var1 == (_ptiddata)0x0) {
    __amsg_exit(0x20);
  }
  return (pthreadlocinfo)p_Var1;
}


// ==== 107224a0 FUN_107224a0

void FUN_107224a0(void)

{
  FUN_10724ccf(0xc);
  return;
}


// ==== 10722690 __strcats

/* Library Function - Single Match
    __strcats
   
   Library: Visual Studio 2005 Release */

void __cdecl __strcats(char *param_1,rsize_t param_2,int param_3)

{
  errno_t eVar1;
  int *piVar2;
  int iVar3;
  
  if (0 < param_3) {
    piVar2 = &param_3;
    iVar3 = param_3;
    do {
      piVar2 = piVar2 + 1;
      eVar1 = _strcat_s(param_1,param_2,(char *)*piVar2);
      if (eVar1 != 0) {
                    /* WARNING: Subroutine does not return */
        __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  return;
}


// ==== 107226ce ___lc_strtolc

/* Library Function - Single Match
    ___lc_strtolc
   
   Library: Visual Studio 2005 Release */

undefined4 __cdecl ___lc_strtolc(char *param_1,char *param_2)

{
  char cVar1;
  errno_t eVar2;
  uint _MaxCount;
  char *_Dst;
  char *_Str;
  rsize_t _SizeInBytes;
  
  _Str = param_2;
  _memset(param_1,0,0x90);
  if (*param_2 != '\0') {
    if ((*param_2 != '.') || (param_2[1] == '\0')) {
      param_2 = (char *)0x0;
      _MaxCount = _strcspn(_Str,"_.,");
      while( true ) {
        if (_MaxCount == 0) {
          return 0xffffffff;
        }
        cVar1 = _Str[_MaxCount];
        if (param_2 == (char *)0x0) {
          if (0x3f < _MaxCount) {
            return 0xffffffff;
          }
          if (cVar1 == '.') {
            return 0xffffffff;
          }
          _SizeInBytes = 0x40;
          _Dst = param_1;
        }
        else if (param_2 == (char *)0x1) {
          if (0x3f < _MaxCount) {
            return 0xffffffff;
          }
          if (cVar1 == '_') {
            return 0xffffffff;
          }
          _SizeInBytes = 0x40;
          _Dst = param_1 + 0x40;
        }
        else {
          if (param_2 != (char *)0x2) {
            return 0xffffffff;
          }
          if (0xf < _MaxCount) {
            return 0xffffffff;
          }
          if ((cVar1 != '\0') && (cVar1 != ',')) {
            return 0xffffffff;
          }
          _SizeInBytes = 0x10;
          _Dst = param_1 + 0x80;
        }
        eVar2 = _strncpy_s(_Dst,_SizeInBytes,_Str,_MaxCount);
        if (eVar2 != 0) {
                    /* WARNING: Subroutine does not return */
          __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
        if (cVar1 == ',') break;
        if (cVar1 == '\0') {
          return 0;
        }
        param_2 = param_2 + 1;
        _Str = _Str + _MaxCount + 1;
        _MaxCount = _strcspn(_Str,"_.,");
      }
      return 0;
    }
    eVar2 = _strncpy_s(param_1 + 0x80,0x10,param_2 + 1,0xf);
    if (eVar2 != 0) {
                    /* WARNING: Subroutine does not return */
      __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    param_1[0x8f] = '\0';
  }
  return 0;
}


// ==== 107227f7 ___lc_lctostr

/* Library Function - Single Match
    ___lc_lctostr
   
   Library: Visual Studio 2005 Release */

void __cdecl ___lc_lctostr(char *param_1,rsize_t param_2,char *param_3)

{
  errno_t eVar1;
  
  eVar1 = _strcpy_s(param_1,param_2,param_3);
  if (eVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  }
  if (param_3[0x40] != '\0') {
    __strcats(param_1,param_2,2);
  }
  if (param_3[0x80] != '\0') {
    __strcats(param_1,param_2,2);
  }
  return;
}


// ==== 107232d3 FUN_107232d3

void __cdecl FUN_107232d3(undefined4 param_1)

{
  DAT_1076c818 = param_1;
  return;
}


// ==== 107232dd __invoke_watson

/* Library Function - Single Match
    __invoke_watson
   
   Library: Visual Studio 2005 Release */

void __cdecl
__invoke_watson(wchar_t *param_1,wchar_t *param_2,wchar_t *param_3,uint param_4,uintptr_t param_5)

{
  int iVar1;
  BOOL BVar2;
  LONG LVar3;
  HANDLE hProcess;
  UINT uExitCode;
  EXCEPTION_RECORD local_32c;
  _EXCEPTION_POINTERS local_2dc;
  undefined4 local_2d4;
  
  iVar1 = DAT_10765c70;
  local_2d4 = 0x10001;
  _memset(&local_32c,0,0x50);
  local_2dc.ExceptionRecord = &local_32c;
  local_2dc.ContextRecord = (PCONTEXT)&local_2d4;
  local_32c.ExceptionCode = 0xc000000d;
  BVar2 = IsDebuggerPresent();
  SetUnhandledExceptionFilter((LPTOP_LEVEL_EXCEPTION_FILTER)0x0);
  LVar3 = UnhandledExceptionFilter(&local_2dc);
  if ((LVar3 == 0) && (BVar2 == 0)) {
    FUN_107326b0();
  }
  uExitCode = 0xc000000d;
  hProcess = GetCurrentProcess();
  TerminateProcess(hProcess,uExitCode);
  __security_check_cookie(iVar1);
  return;
}


// ==== 10723408 FUN_10723408

void __cdecl
FUN_10723408(wchar_t *param_1,wchar_t *param_2,wchar_t *param_3,uint param_4,uintptr_t param_5)

{
                    /* WARNING: Subroutine does not return */
  __invoke_watson(param_1,param_2,param_3,param_4,param_5);
}


// ==== 10723411 FUN_10723411

void __cdecl
FUN_10723411(wchar_t *param_1,wchar_t *param_2,wchar_t *param_3,uint param_4,uintptr_t param_5)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = (code *)FUN_1071f707(DAT_1076c818);
  if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x10723425. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  FUN_107326b0();
                    /* WARNING: Subroutine does not return */
  __invoke_watson(param_1,param_2,param_3,param_4,param_5);
}


// ==== 10723445 FUN_10723445

void __cdecl
FUN_10723445(wchar_t *param_1,wchar_t *param_2,wchar_t *param_3,uint param_4,uintptr_t param_5)

{
  FUN_10723411(param_1,param_2,param_3,param_4,param_5);
  return;
}


// ==== 1072344e __isalpha_l

/* Library Function - Single Match
    __isalpha_l
   
   Library: Visual Studio 2005 Release */

int __cdecl __isalpha_l(int _C,_locale_t _Locale)

{
  uint uVar1;
  localeinfo_struct local_14;
  int local_c;
  char local_8;
  
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_14,_Locale);
  if ((int)(local_14.locinfo)->locale_name[3] < 2) {
    uVar1 = *(ushort *)(local_14.locinfo[1].lc_category[0].locale + _C * 2) & 0x103;
  }
  else {
    uVar1 = __isctype_l(_C,0x103,&local_14);
  }
  if (local_8 != '\0') {
    *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
  }
  return uVar1;
}


// ==== 107234cd __isupper_l

/* Library Function - Single Match
    __isupper_l
   
   Library: Visual Studio 2005 Release */

int __cdecl __isupper_l(int _C,_locale_t _Locale)

{
  uint uVar1;
  localeinfo_struct local_14;
  int local_c;
  char local_8;
  
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_14,_Locale);
  if ((int)(local_14.locinfo)->locale_name[3] < 2) {
    uVar1 = (byte)local_14.locinfo[1].lc_category[0].locale[_C * 2] & 1;
  }
  else {
    uVar1 = __isctype_l(_C,1,&local_14);
  }
  if (local_8 != '\0') {
    *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
  }
  return uVar1;
}


// ==== 10723545 __islower_l

/* Library Function - Single Match
    __islower_l
   
   Library: Visual Studio 2005 Release */

int __cdecl __islower_l(int _C,_locale_t _Locale)

{
  uint uVar1;
  localeinfo_struct local_14;
  int local_c;
  char local_8;
  
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_14,_Locale);
  if ((int)(local_14.locinfo)->locale_name[3] < 2) {
    uVar1 = (byte)local_14.locinfo[1].lc_category[0].locale[_C * 2] & 2;
  }
  else {
    uVar1 = __isctype_l(_C,2,&local_14);
  }
  if (local_8 != '\0') {
    *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
  }
  return uVar1;
}


// ==== 107235bd __isdigit_l

/* Library Function - Single Match
    __isdigit_l
   
   Library: Visual Studio 2005 Release */

int __cdecl __isdigit_l(int _C,_locale_t _Locale)

{
  uint uVar1;
  localeinfo_struct local_14;
  int local_c;
  char local_8;
  
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_14,_Locale);
  if ((int)(local_14.locinfo)->locale_name[3] < 2) {
    uVar1 = (byte)local_14.locinfo[1].lc_category[0].locale[_C * 2] & 4;
  }
  else {
    uVar1 = __isctype_l(_C,4,&local_14);
  }
  if (local_8 != '\0') {
    *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
  }
  return uVar1;
}


// ==== 1072360c _isdigit

/* Library Function - Single Match
    _isdigit
   
   Library: Visual Studio 2005 Release */

int __cdecl _isdigit(int _C)

{
  int iVar1;
  
  if (DAT_1076c7f4 == 0) {
    return (byte)PTR_DAT_10766418[_C * 2] & 4;
  }
  iVar1 = __isdigit_l(_C,(_locale_t)0x0);
  return iVar1;
}


// ==== 10723635 __isxdigit_l

/* Library Function - Single Match
    __isxdigit_l
   
   Library: Visual Studio 2005 Release */

int __cdecl __isxdigit_l(int _C,_locale_t _Locale)

{
  uint uVar1;
  localeinfo_struct local_14;
  int local_c;
  char local_8;
  
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_14,_Locale);
  if ((int)(local_14.locinfo)->locale_name[3] < 2) {
    uVar1 = (byte)local_14.locinfo[1].lc_category[0].locale[_C * 2] & 0x80;
  }
  else {
    uVar1 = __isctype_l(_C,0x80,&local_14);
  }
  if (local_8 != '\0') {
    *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
  }
  return uVar1;
}


// ==== 107236b4 __isspace_l

/* Library Function - Single Match
    __isspace_l
   
   Library: Visual Studio 2005 Release */

int __cdecl __isspace_l(int _C,_locale_t _Locale)

{
  uint uVar1;
  localeinfo_struct local_14;
  int local_c;
  char local_8;
  
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_14,_Locale);
  if ((int)(local_14.locinfo)->locale_name[3] < 2) {
    uVar1 = (byte)local_14.locinfo[1].lc_category[0].locale[_C * 2] & 8;
  }
  else {
    uVar1 = __isctype_l(_C,8,&local_14);
  }
  if (local_8 != '\0') {
    *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
  }
  return uVar1;
}


// ==== 1072372c __ispunct_l

/* Library Function - Single Match
    __ispunct_l
   
   Library: Visual Studio 2005 Release */

int __cdecl __ispunct_l(int _C,_locale_t _Locale)

{
  uint uVar1;
  localeinfo_struct local_14;
  int local_c;
  char local_8;
  
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_14,_Locale);
  if ((int)(local_14.locinfo)->locale_name[3] < 2) {
    uVar1 = (byte)local_14.locinfo[1].lc_category[0].locale[_C * 2] & 0x10;
  }
  else {
    uVar1 = __isctype_l(_C,0x10,&local_14);
  }
  if (local_8 != '\0') {
    *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
  }
  return uVar1;
}


// ==== 107237a4 __isalnum_l

/* Library Function - Single Match
    __isalnum_l
   
   Library: Visual Studio 2005 Release */

int __cdecl __isalnum_l(int _C,_locale_t _Locale)

{
  uint uVar1;
  localeinfo_struct local_14;
  int local_c;
  char local_8;
  
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_14,_Locale);
  if ((int)(local_14.locinfo)->locale_name[3] < 2) {
    uVar1 = *(ushort *)(local_14.locinfo[1].lc_category[0].locale + _C * 2) & 0x107;
  }
  else {
    uVar1 = __isctype_l(_C,0x107,&local_14);
  }
  if (local_8 != '\0') {
    *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
  }
  return uVar1;
}


// ==== 10723823 __isprint_l

/* Library Function - Single Match
    __isprint_l
   
   Library: Visual Studio 2005 Release */

int __cdecl __isprint_l(int _C,_locale_t _Locale)

{
  uint uVar1;
  localeinfo_struct local_14;
  int local_c;
  char local_8;
  
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_14,_Locale);
  if ((int)(local_14.locinfo)->locale_name[3] < 2) {
    uVar1 = *(ushort *)(local_14.locinfo[1].lc_category[0].locale + _C * 2) & 0x157;
  }
  else {
    uVar1 = __isctype_l(_C,0x157,&local_14);
  }
  if (local_8 != '\0') {
    *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
  }
  return uVar1;
}


// ==== 107238a2 __isgraph_l

/* Library Function - Single Match
    __isgraph_l
   
   Library: Visual Studio 2005 Release */

int __cdecl __isgraph_l(int _C,_locale_t _Locale)

{
  uint uVar1;
  localeinfo_struct local_14;
  int local_c;
  char local_8;
  
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_14,_Locale);
  if ((int)(local_14.locinfo)->locale_name[3] < 2) {
    uVar1 = *(ushort *)(local_14.locinfo[1].lc_category[0].locale + _C * 2) & 0x117;
  }
  else {
    uVar1 = __isctype_l(_C,0x117,&local_14);
  }
  if (local_8 != '\0') {
    *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
  }
  return uVar1;
}


// ==== 10723921 __iscntrl_l

/* Library Function - Single Match
    __iscntrl_l
   
   Library: Visual Studio 2005 Release */

int __cdecl __iscntrl_l(int _C,_locale_t _Locale)

{
  uint uVar1;
  localeinfo_struct local_14;
  int local_c;
  char local_8;
  
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_14,_Locale);
  if ((int)(local_14.locinfo)->locale_name[3] < 2) {
    uVar1 = (byte)local_14.locinfo[1].lc_category[0].locale[_C * 2] & 0x20;
  }
  else {
    uVar1 = __isctype_l(_C,0x20,&local_14);
  }
  if (local_8 != '\0') {
    *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
  }
  return uVar1;
}


// ==== 10723a2a __tolower_l

/* Library Function - Single Match
    __tolower_l
   
   Library: Visual Studio 2005 Release */

int __cdecl __tolower_l(int _C,_locale_t _Locale)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  CHAR CVar5;
  localeinfo_struct local_1c;
  int local_14;
  char local_10;
  byte local_c;
  undefined1 local_b;
  CHAR local_8;
  CHAR local_7;
  undefined1 local_6;
  
  iVar1 = _C;
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_1c,_Locale);
  if ((uint)_C < 0x100) {
    if ((int)(local_1c.locinfo)->locale_name[3] < 2) {
      uVar2 = (byte)local_1c.locinfo[1].lc_category[0].locale[_C * 2] & 1;
    }
    else {
      uVar2 = __isctype_l(_C,1,&local_1c);
    }
    if (uVar2 == 0) {
LAB_10723a89:
      if (local_10 == '\0') {
        return iVar1;
      }
      *(uint *)(local_14 + 0x70) = *(uint *)(local_14 + 0x70) & 0xfffffffd;
      return iVar1;
    }
    uVar2 = (uint)*(byte *)((int)local_1c.locinfo[1].lc_category[0].wlocale + _C);
  }
  else {
    CVar5 = (CHAR)_C;
    if (((int)(local_1c.locinfo)->locale_name[3] < 2) ||
       (iVar3 = __isleadbyte_l(_C >> 8 & 0xff,&local_1c), iVar3 == 0)) {
      puVar4 = (undefined4 *)FUN_10724278();
      *puVar4 = 0x2a;
      local_7 = '\0';
      iVar3 = 1;
      local_8 = CVar5;
    }
    else {
      _C._0_1_ = (CHAR)((uint)_C >> 8);
      local_8 = (CHAR)_C;
      local_6 = 0;
      iVar3 = 2;
      local_7 = CVar5;
    }
    iVar3 = ___crtLCMapStringA(&local_1c,(local_1c.locinfo)->lc_category[0].wlocale,0x100,&local_8,
                               iVar3,(LPSTR)&local_c,3,(local_1c.locinfo)->lc_codepage,1);
    if (iVar3 == 0) goto LAB_10723a89;
    if (iVar3 == 1) {
      uVar2 = (uint)local_c;
    }
    else {
      uVar2 = (uint)CONCAT11(local_c,local_b);
    }
  }
  if (local_10 != '\0') {
    *(uint *)(local_14 + 0x70) = *(uint *)(local_14 + 0x70) & 0xfffffffd;
  }
  return uVar2;
}


// ==== 10723b41 _tolower

/* Library Function - Single Match
    _tolower
   
   Library: Visual Studio 2005 Release */

int __cdecl _tolower(int _C)

{
  if (DAT_1076c7f4 == 0) {
    if (_C - 0x41U < 0x1a) {
      return _C + 0x20;
    }
  }
  else {
    _C = __tolower_l(_C,(_locale_t)0x0);
  }
  return _C;
}


// ==== 10723b68 FID_conflict:__atoflt_l

/* Library Function - Multiple Matches With Different Base Names
    __atodbl_l
    __atoflt_l
   
   Library: Visual Studio 2005 Release */

int __cdecl FID_conflict___atoflt_l(_CRT_FLOAT *_Result,char *_Str,_locale_t _Locale)

{
  INTRNCVT_STATUS IVar1;
  int iVar2;
  int local_2c;
  _LocaleUpdate local_28 [8];
  int local_20;
  char local_1c;
  uint local_18;
  _LDBL12 local_14;
  uint local_8;
  
  local_8 = DAT_10765c70 ^ (uint)&stack0xfffffffc;
  _LocaleUpdate::_LocaleUpdate(local_28,_Locale);
  local_18 = FUN_107342e1((undefined2 *)&local_14,&local_2c,_Str,0,0,0,0,(int *)local_28);
  IVar1 = FID_conflict___ld12tod(&local_14,(_CRT_DOUBLE *)_Result);
  if ((local_18 & 3) == 0) {
    if (IVar1 == INTRNCVT_OVERFLOW) {
LAB_10723bbf:
      if (local_1c != '\0') {
        *(uint *)(local_20 + 0x70) = *(uint *)(local_20 + 0x70) & 0xfffffffd;
      }
      goto LAB_10723bff;
    }
    if (IVar1 != INTRNCVT_UNDERFLOW) {
LAB_10723bf1:
      if (local_1c != '\0') {
        *(uint *)(local_20 + 0x70) = *(uint *)(local_20 + 0x70) & 0xfffffffd;
      }
      goto LAB_10723bff;
    }
  }
  else if ((local_18 & 1) == 0) {
    if ((local_18 & 2) == 0) goto LAB_10723bf1;
    goto LAB_10723bbf;
  }
  if (local_1c != '\0') {
    *(uint *)(local_20 + 0x70) = *(uint *)(local_20 + 0x70) & 0xfffffffd;
  }
LAB_10723bff:
  iVar2 = __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return iVar2;
}


// ==== 10723c21 __atoldbl_l

/* Library Function - Single Match
    __atoldbl_l
   
   Library: Visual Studio 2005 Release */

int __cdecl __atoldbl_l(_LDOUBLE *_Result,char *_Str,_locale_t _Locale)

{
  INTRNCVT_STATUS IVar1;
  int iVar2;
  int local_2c;
  _LocaleUpdate local_28 [8];
  int local_20;
  char local_1c;
  uint local_18;
  _LDBL12 local_14;
  uint local_8;
  
  local_8 = DAT_10765c70 ^ (uint)&stack0xfffffffc;
  _LocaleUpdate::_LocaleUpdate(local_28,_Locale);
  local_18 = FUN_107342e1((undefined2 *)&local_14,&local_2c,_Str,1,0,0,0,(int *)local_28);
  IVar1 = __ld12told(&local_14,_Result);
  if ((local_18 & 3) == 0) {
    if (IVar1 == INTRNCVT_OVERFLOW) {
LAB_10723c79:
      if (local_1c != '\0') {
        *(uint *)(local_20 + 0x70) = *(uint *)(local_20 + 0x70) & 0xfffffffd;
      }
      goto LAB_10723cb9;
    }
    if (IVar1 != INTRNCVT_UNDERFLOW) {
LAB_10723cab:
      if (local_1c != '\0') {
        *(uint *)(local_20 + 0x70) = *(uint *)(local_20 + 0x70) & 0xfffffffd;
      }
      goto LAB_10723cb9;
    }
  }
  else if ((local_18 & 1) == 0) {
    if ((local_18 & 2) == 0) goto LAB_10723cab;
    goto LAB_10723c79;
  }
  if (local_1c != '\0') {
    *(uint *)(local_20 + 0x70) = *(uint *)(local_20 + 0x70) & 0xfffffffd;
  }
LAB_10723cb9:
  iVar2 = __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return iVar2;
}


// ==== 10723cdb FID_conflict:__atoflt_l

/* Library Function - Multiple Matches With Different Base Names
    __atodbl_l
    __atoflt_l
   
   Library: Visual Studio 2005 Release */

int __cdecl FID_conflict___atoflt_l(_CRT_FLOAT *_Result,char *_Str,_locale_t _Locale)

{
  INTRNCVT_STATUS IVar1;
  int iVar2;
  int local_2c;
  _LocaleUpdate local_28 [8];
  int local_20;
  char local_1c;
  uint local_18;
  _LDBL12 local_14;
  uint local_8;
  
  local_8 = DAT_10765c70 ^ (uint)&stack0xfffffffc;
  _LocaleUpdate::_LocaleUpdate(local_28,_Locale);
  local_18 = FUN_107342e1((undefined2 *)&local_14,&local_2c,_Str,0,0,0,0,(int *)local_28);
  IVar1 = FID_conflict___ld12tod(&local_14,(_CRT_DOUBLE *)_Result);
  if ((local_18 & 3) == 0) {
    if (IVar1 == INTRNCVT_OVERFLOW) {
LAB_10723d32:
      if (local_1c != '\0') {
        *(uint *)(local_20 + 0x70) = *(uint *)(local_20 + 0x70) & 0xfffffffd;
      }
      goto LAB_10723d72;
    }
    if (IVar1 != INTRNCVT_UNDERFLOW) {
LAB_10723d64:
      if (local_1c != '\0') {
        *(uint *)(local_20 + 0x70) = *(uint *)(local_20 + 0x70) & 0xfffffffd;
      }
      goto LAB_10723d72;
    }
  }
  else if ((local_18 & 1) == 0) {
    if ((local_18 & 2) == 0) goto LAB_10723d64;
    goto LAB_10723d32;
  }
  if (local_1c != '\0') {
    *(uint *)(local_20 + 0x70) = *(uint *)(local_20 + 0x70) & 0xfffffffd;
  }
LAB_10723d72:
  iVar2 = __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return iVar2;
}


// ==== 10723da0 _memmove

/* Library Function - Single Match
    _memmove
   
   Libraries: Visual Studio 2005 Debug, Visual Studio 2005 Release, Visual Studio 2008 Debug, Visual
   Studio 2008 Release */

void * __cdecl _memmove(void *_Dst,void *_Src,size_t _Size)

{
  undefined4 *puVar1;
  uint uVar2;
  uint uVar3;
  undefined4 *puVar4;
  
  if ((_Src < _Dst) && (_Dst < (void *)(_Size + (int)_Src))) {
    puVar1 = (undefined4 *)((_Size - 4) + (int)_Src);
    puVar4 = (undefined4 *)((_Size - 4) + (int)_Dst);
    if (((uint)puVar4 & 3) == 0) {
      uVar2 = _Size >> 2;
      uVar3 = _Size & 3;
      if (7 < uVar2) {
        for (; uVar2 != 0; uVar2 = uVar2 - 1) {
          *puVar4 = *puVar1;
          puVar1 = puVar1 + -1;
          puVar4 = puVar4 + -1;
        }
        switch(uVar3) {
        case 0:
          return _Dst;
        case 2:
          goto switchD_10723f83_caseD_2;
        case 3:
          goto switchD_10723f83_caseD_3;
        }
        goto switchD_10723f83_caseD_1;
      }
    }
    else {
      switch(_Size) {
      case 0:
        goto switchD_10723f83_caseD_0;
      case 1:
        goto switchD_10723f83_caseD_1;
      case 2:
        goto switchD_10723f83_caseD_2;
      case 3:
        goto switchD_10723f83_caseD_3;
      default:
        uVar2 = _Size - ((uint)puVar4 & 3);
        switch((uint)puVar4 & 3) {
        case 1:
          uVar3 = uVar2 & 3;
          *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar1 + 3);
          puVar1 = (undefined4 *)((int)puVar1 + -1);
          uVar2 = uVar2 >> 2;
          puVar4 = (undefined4 *)((int)puVar4 - 1);
          if (7 < uVar2) {
            for (; uVar2 != 0; uVar2 = uVar2 - 1) {
              *puVar4 = *puVar1;
              puVar1 = puVar1 + -1;
              puVar4 = puVar4 + -1;
            }
            switch(uVar3) {
            case 0:
              return _Dst;
            case 2:
              goto switchD_10723f83_caseD_2;
            case 3:
              goto switchD_10723f83_caseD_3;
            }
            goto switchD_10723f83_caseD_1;
          }
          break;
        case 2:
          uVar3 = uVar2 & 3;
          *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar1 + 3);
          uVar2 = uVar2 >> 2;
          *(undefined1 *)((int)puVar4 + 2) = *(undefined1 *)((int)puVar1 + 2);
          puVar1 = (undefined4 *)((int)puVar1 + -2);
          puVar4 = (undefined4 *)((int)puVar4 - 2);
          if (7 < uVar2) {
            for (; uVar2 != 0; uVar2 = uVar2 - 1) {
              *puVar4 = *puVar1;
              puVar1 = puVar1 + -1;
              puVar4 = puVar4 + -1;
            }
            switch(uVar3) {
            case 0:
              return _Dst;
            case 2:
              goto switchD_10723f83_caseD_2;
            case 3:
              goto switchD_10723f83_caseD_3;
            }
            goto switchD_10723f83_caseD_1;
          }
          break;
        case 3:
          uVar3 = uVar2 & 3;
          *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar1 + 3);
          *(undefined1 *)((int)puVar4 + 2) = *(undefined1 *)((int)puVar1 + 2);
          uVar2 = uVar2 >> 2;
          *(undefined1 *)((int)puVar4 + 1) = *(undefined1 *)((int)puVar1 + 1);
          puVar1 = (undefined4 *)((int)puVar1 + -3);
          puVar4 = (undefined4 *)((int)puVar4 - 3);
          if (7 < uVar2) {
            for (; uVar2 != 0; uVar2 = uVar2 - 1) {
              *puVar4 = *puVar1;
              puVar1 = puVar1 + -1;
              puVar4 = puVar4 + -1;
            }
            switch(uVar3) {
            case 0:
              return _Dst;
            case 2:
              goto switchD_10723f83_caseD_2;
            case 3:
              goto switchD_10723f83_caseD_3;
            }
            goto switchD_10723f83_caseD_1;
          }
        }
      }
    }
    switch(uVar2) {
    case 7:
      puVar4[7 - uVar2] = puVar1[7 - uVar2];
    case 6:
      puVar4[6 - uVar2] = puVar1[6 - uVar2];
    case 5:
      puVar4[5 - uVar2] = puVar1[5 - uVar2];
    case 4:
      puVar4[4 - uVar2] = puVar1[4 - uVar2];
    case 3:
      puVar4[3 - uVar2] = puVar1[3 - uVar2];
    case 2:
      puVar4[2 - uVar2] = puVar1[2 - uVar2];
    case 1:
      puVar4[1 - uVar2] = puVar1[1 - uVar2];
      puVar1 = puVar1 + -uVar2;
      puVar4 = puVar4 + -uVar2;
    }
    switch(uVar3) {
    case 1:
switchD_10723f83_caseD_1:
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar1 + 3);
      return _Dst;
    case 2:
switchD_10723f83_caseD_2:
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar1 + 3);
      *(undefined1 *)((int)puVar4 + 2) = *(undefined1 *)((int)puVar1 + 2);
      return _Dst;
    case 3:
switchD_10723f83_caseD_3:
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar1 + 3);
      *(undefined1 *)((int)puVar4 + 2) = *(undefined1 *)((int)puVar1 + 2);
      *(undefined1 *)((int)puVar4 + 1) = *(undefined1 *)((int)puVar1 + 1);
      return _Dst;
    }
switchD_10723f83_caseD_0:
    return _Dst;
  }
  if (((0xff < _Size) && (DAT_1076cfb0 != 0)) && (((uint)_Dst & 0xf) == ((uint)_Src & 0xf))) {
    puVar1 = __VEC_memcpy(_Dst,_Src,_Size);
    return puVar1;
  }
  puVar1 = _Dst;
  if (((uint)_Dst & 3) == 0) {
    uVar2 = _Size >> 2;
    uVar3 = _Size & 3;
    if (7 < uVar2) {
      for (; uVar2 != 0; uVar2 = uVar2 - 1) {
        *puVar1 = *(undefined4 *)_Src;
        _Src = (undefined4 *)((int)_Src + 4);
        puVar1 = puVar1 + 1;
      }
      switch(uVar3) {
      case 0:
        return _Dst;
      case 2:
        goto switchD_10723dfc_caseD_2;
      case 3:
        goto switchD_10723dfc_caseD_3;
      }
      goto switchD_10723dfc_caseD_1;
    }
  }
  else {
    switch(_Size) {
    case 0:
      goto switchD_10723dfc_caseD_0;
    case 1:
      goto switchD_10723dfc_caseD_1;
    case 2:
      goto switchD_10723dfc_caseD_2;
    case 3:
      goto switchD_10723dfc_caseD_3;
    default:
      uVar2 = (_Size - 4) + ((uint)_Dst & 3);
      switch((uint)_Dst & 3) {
      case 1:
        uVar3 = uVar2 & 3;
        *(undefined1 *)_Dst = *(undefined1 *)_Src;
        *(undefined1 *)((int)_Dst + 1) = *(undefined1 *)((int)_Src + 1);
        uVar2 = uVar2 >> 2;
        *(undefined1 *)((int)_Dst + 2) = *(undefined1 *)((int)_Src + 2);
        _Src = (void *)((int)_Src + 3);
        puVar1 = (undefined4 *)((int)_Dst + 3);
        if (7 < uVar2) {
          for (; uVar2 != 0; uVar2 = uVar2 - 1) {
            *puVar1 = *(undefined4 *)_Src;
            _Src = (undefined4 *)((int)_Src + 4);
            puVar1 = puVar1 + 1;
          }
          switch(uVar3) {
          case 0:
            return _Dst;
          case 2:
            goto switchD_10723dfc_caseD_2;
          case 3:
            goto switchD_10723dfc_caseD_3;
          }
          goto switchD_10723dfc_caseD_1;
        }
        break;
      case 2:
        uVar3 = uVar2 & 3;
        *(undefined1 *)_Dst = *(undefined1 *)_Src;
        uVar2 = uVar2 >> 2;
        *(undefined1 *)((int)_Dst + 1) = *(undefined1 *)((int)_Src + 1);
        _Src = (void *)((int)_Src + 2);
        puVar1 = (undefined4 *)((int)_Dst + 2);
        if (7 < uVar2) {
          for (; uVar2 != 0; uVar2 = uVar2 - 1) {
            *puVar1 = *(undefined4 *)_Src;
            _Src = (undefined4 *)((int)_Src + 4);
            puVar1 = puVar1 + 1;
          }
          switch(uVar3) {
          case 0:
            return _Dst;
          case 2:
            goto switchD_10723dfc_caseD_2;
          case 3:
            goto switchD_10723dfc_caseD_3;
          }
          goto switchD_10723dfc_caseD_1;
        }
        break;
      case 3:
        uVar3 = uVar2 & 3;
        *(undefined1 *)_Dst = *(undefined1 *)_Src;
        _Src = (void *)((int)_Src + 1);
        uVar2 = uVar2 >> 2;
        puVar1 = (undefined4 *)((int)_Dst + 1);
        if (7 < uVar2) {
          for (; uVar2 != 0; uVar2 = uVar2 - 1) {
            *puVar1 = *(undefined4 *)_Src;
            _Src = (undefined4 *)((int)_Src + 4);
            puVar1 = puVar1 + 1;
          }
          switch(uVar3) {
          case 0:
            return _Dst;
          case 2:
            goto switchD_10723dfc_caseD_2;
          case 3:
            goto switchD_10723dfc_caseD_3;
          }
          goto switchD_10723dfc_caseD_1;
        }
      }
    }
  }
  switch(uVar2) {
  case 7:
    puVar1[uVar2 - 7] = *(undefined4 *)((int)_Src + (uVar2 - 7) * 4);
  case 6:
    puVar1[uVar2 - 6] = *(undefined4 *)((int)_Src + (uVar2 - 6) * 4);
  case 5:
    puVar1[uVar2 - 5] = *(undefined4 *)((int)_Src + (uVar2 - 5) * 4);
  case 4:
    puVar1[uVar2 - 4] = *(undefined4 *)((int)_Src + (uVar2 - 4) * 4);
  case 3:
    puVar1[uVar2 - 3] = *(undefined4 *)((int)_Src + (uVar2 - 3) * 4);
  case 2:
    puVar1[uVar2 - 2] = *(undefined4 *)((int)_Src + (uVar2 - 2) * 4);
  case 1:
    puVar1[uVar2 - 1] = *(undefined4 *)((int)_Src + (uVar2 - 1) * 4);
    _Src = (void *)((int)_Src + uVar2 * 4);
    puVar1 = puVar1 + uVar2;
  }
  switch(uVar3) {
  case 1:
switchD_10723dfc_caseD_1:
    *(undefined1 *)puVar1 = *(undefined1 *)_Src;
    return _Dst;
  case 2:
switchD_10723dfc_caseD_2:
    *(undefined1 *)puVar1 = *(undefined1 *)_Src;
    *(undefined1 *)((int)puVar1 + 1) = *(undefined1 *)((int)_Src + 1);
    return _Dst;
  case 3:
switchD_10723dfc_caseD_3:
    *(undefined1 *)puVar1 = *(undefined1 *)_Src;
    *(undefined1 *)((int)puVar1 + 1) = *(undefined1 *)((int)_Src + 1);
    *(undefined1 *)((int)puVar1 + 2) = *(undefined1 *)((int)_Src + 2);
    return _Dst;
  }
switchD_10723dfc_caseD_0:
  return _Dst;
}


// ==== 10724110 _strlen

/* Library Function - Single Match
    _strlen
   
   Library: Visual Studio */

size_t __cdecl _strlen(char *_Str)

{
  uint uVar1;
  uint *puVar2;
  uint *puVar3;
  
  puVar2 = (uint *)_Str;
  do {
    if (((uint)puVar2 & 3) == 0) goto LAB_10724140;
    uVar1 = *puVar2;
    puVar2 = (uint *)((int)puVar2 + 1);
  } while ((char)uVar1 != '\0');
LAB_10724173:
  return (size_t)((int)puVar2 + (-1 - (int)_Str));
LAB_10724140:
  do {
    do {
      puVar3 = puVar2;
      puVar2 = puVar3 + 1;
    } while (((*puVar3 ^ 0xffffffff ^ *puVar3 + 0x7efefeff) & 0x81010100) == 0);
    uVar1 = *puVar3;
    if ((char)uVar1 == '\0') {
      return (int)puVar3 - (int)_Str;
    }
    if ((char)(uVar1 >> 8) == '\0') {
      return (size_t)((int)puVar3 + (1 - (int)_Str));
    }
    if ((uVar1 & 0xff0000) == 0) {
      return (size_t)((int)puVar3 + (2 - (int)_Str));
    }
  } while ((uVar1 & 0xff000000) != 0);
  goto LAB_10724173;
}


// ==== 107241d8 _strcpy_s

/* Library Function - Single Match
    _strcpy_s
   
   Library: Visual Studio 2005 Release */

errno_t __cdecl _strcpy_s(char *_Dst,rsize_t _SizeInBytes,char *_Src)

{
  char cVar1;
  undefined4 *puVar2;
  char *pcVar3;
  errno_t eVar4;
  
  if ((_Dst != (char *)0x0) && (_SizeInBytes != 0)) {
    pcVar3 = _Dst;
    if (_Src != (char *)0x0) {
      do {
        cVar1 = *_Src;
        *pcVar3 = cVar1;
        _Src = _Src + 1;
        if (cVar1 == '\0') break;
        _SizeInBytes = _SizeInBytes - 1;
        pcVar3 = pcVar3 + 1;
      } while (_SizeInBytes != 0);
      if (_SizeInBytes != 0) {
        return 0;
      }
      *_Dst = '\0';
      puVar2 = (undefined4 *)FUN_10724278();
      eVar4 = 0x22;
      *puVar2 = 0x22;
      goto LAB_107241f7;
    }
    *_Dst = '\0';
  }
  puVar2 = (undefined4 *)FUN_10724278();
  eVar4 = 0x16;
  *puVar2 = 0x16;
LAB_107241f7:
  FUN_10723411((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  return eVar4;
}


// ==== 1072423d FUN_1072423d

int __cdecl FUN_1072423d(int param_1)

{
  uint uVar1;
  
  uVar1 = 0;
  do {
    if (param_1 == (&DAT_10766440)[uVar1 * 2]) {
      return *(int *)(uVar1 * 8 + 0x10766444);
    }
    uVar1 = uVar1 + 1;
  } while (uVar1 < 0x2d);
  if (param_1 - 0x13U < 0x12) {
    return 0xd;
  }
  return (-(uint)(0xe < param_1 - 0xbcU) & 0xe) + 8;
}


// ==== 10724278 FUN_10724278

undefined * FUN_10724278(void)

{
  DWORD *pDVar1;
  
  pDVar1 = FUN_1071f8e0();
  if (pDVar1 == (DWORD *)0x0) {
    return &DAT_107665a8;
  }
  return (undefined *)(pDVar1 + 2);
}


// ==== 10724346 __fptostr

/* Library Function - Single Match
    __fptostr
   
   Library: Visual Studio 2005 Release */

errno_t __cdecl __fptostr(char *_Buf,size_t _SizeInBytes,int _Digits,STRFLT _PtFlt)

{
  undefined4 *puVar1;
  int iVar2;
  char *pcVar3;
  size_t sVar4;
  char cVar5;
  char *pcVar6;
  errno_t eVar7;
  
  pcVar6 = _PtFlt->mantissa;
  if ((_Buf == (char *)0x0) || (_SizeInBytes == 0)) {
    puVar1 = (undefined4 *)FUN_10724278();
    eVar7 = 0x16;
    *puVar1 = 0x16;
  }
  else {
    *_Buf = '\0';
    iVar2 = _Digits;
    if (_Digits < 1) {
      iVar2 = 0;
    }
    if (iVar2 + 1U < _SizeInBytes) {
      *_Buf = '0';
      pcVar3 = _Buf;
      for (; pcVar3 = pcVar3 + 1, 0 < _Digits; _Digits = _Digits + -1) {
        cVar5 = *pcVar6;
        if (cVar5 == '\0') {
          cVar5 = '0';
        }
        else {
          pcVar6 = pcVar6 + 1;
        }
        *pcVar3 = cVar5;
      }
      *pcVar3 = '\0';
      if ((-1 < _Digits) && ('4' < *pcVar6)) {
        while (pcVar3 = pcVar3 + -1, *pcVar3 == '9') {
          *pcVar3 = '0';
        }
        *pcVar3 = *pcVar3 + '\x01';
      }
      if (*_Buf == '1') {
        _PtFlt->decpt = _PtFlt->decpt + 1;
      }
      else {
        sVar4 = _strlen(_Buf + 1);
        _memmove(_Buf,_Buf + 1,sVar4 + 1);
      }
      return 0;
    }
    puVar1 = (undefined4 *)FUN_10724278();
    eVar7 = 0x22;
    *puVar1 = 0x22;
  }
  FUN_10723411((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  return eVar7;
}


// ==== 10724403 ___dtold

/* Library Function - Single Match
    ___dtold
   
   Library: Visual Studio 2005 Release */

void __cdecl ___dtold(uint *param_1,uint *param_2)

{
  uint uVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  uint local_8;
  
  uVar2 = *(ushort *)((int)param_2 + 6) >> 4;
  uVar4 = *(ushort *)((int)param_2 + 6) & 0x8000;
  uVar3 = uVar2 & 0x7ff;
  uVar1 = *param_2;
  local_8 = 0x80000000;
  if ((uVar2 & 0x7ff) == 0) {
    if (((param_2[1] & 0xfffff) == 0) && (uVar1 == 0)) {
      param_1[1] = 0;
      *param_1 = 0;
      goto LAB_107244b5;
    }
    uVar3 = uVar3 + 0x3c01;
    local_8 = 0;
  }
  else if (uVar3 == 0x7ff) {
    uVar3 = 0x7fff;
  }
  else {
    uVar3 = uVar3 + 0x3c00;
  }
  param_1[1] = uVar1 >> 0x15 | (param_2[1] & 0xfffff) << 0xb | local_8;
  *param_1 = uVar1 << 0xb;
  while (local_8 == 0) {
    uVar1 = param_1[1];
    uVar3 = uVar3 - 1;
    param_1[1] = uVar1 * 2 | *param_1 >> 0x1f;
    *param_1 = *param_1 * 2;
    local_8 = uVar1 * 2 & 0x80000000;
  }
  uVar4 = uVar4 | uVar3;
LAB_107244b5:
  *(ushort *)(param_1 + 2) = uVar4;
  return;
}


// ==== 107244be __fltout2

/* Library Function - Single Match
    __fltout2
   
   Library: Visual Studio 2005 Release */

STRFLT __cdecl __fltout2(_CRT_DOUBLE _Dbl,STRFLT _Flt,char *_ResultStr,size_t _SizeInBytes)

{
  int iVar1;
  errno_t eVar2;
  STRFLT p_Var3;
  short local_30;
  char local_2e;
  char local_2c [24];
  uint local_14;
  uint uStack_10;
  ushort uStack_c;
  uint local_8;
  
  local_8 = DAT_10765c70 ^ (uint)&stack0xfffffffc;
  ___dtold(&local_14,(uint *)&_Dbl);
  iVar1 = FUN_10734a67(local_14,uStack_10,uStack_c,0x11,0,&local_30);
  _Flt->flag = iVar1;
  _Flt->sign = (int)local_2e;
  _Flt->decpt = (int)local_30;
  eVar2 = _strcpy_s(_ResultStr,_SizeInBytes,local_2c);
  if (eVar2 != 0) {
                    /* WARNING: Subroutine does not return */
    __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  }
  _Flt->mantissa = _ResultStr;
  p_Var3 = (STRFLT)__security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return p_Var3;
}


// ==== 10724550 __alldvrm

/* Library Function - Single Match
    __alldvrm
   
   Library: Visual Studio 2005 Release */

undefined8 __alldvrm(uint param_1,uint param_2,uint param_3,uint param_4)

{
  ulonglong uVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  bool bVar10;
  char cVar11;
  uint uVar9;
  
  cVar11 = (int)param_2 < 0;
  if ((bool)cVar11) {
    bVar10 = param_1 != 0;
    param_1 = -param_1;
    param_2 = -(uint)bVar10 - param_2;
  }
  if ((int)param_4 < 0) {
    cVar11 = cVar11 + '\x01';
    bVar10 = param_3 != 0;
    param_3 = -param_3;
    param_4 = -(uint)bVar10 - param_4;
  }
  uVar7 = param_1;
  uVar3 = param_3;
  uVar5 = param_2;
  uVar9 = param_4;
  if (param_4 == 0) {
    uVar3 = param_2 / param_3;
    iVar4 = (int)(((ulonglong)param_2 % (ulonglong)param_3 << 0x20 | (ulonglong)param_1) /
                 (ulonglong)param_3);
  }
  else {
    do {
      uVar8 = uVar9 >> 1;
      uVar3 = (uint)(CONCAT14((uVar9 & 1) != 0,uVar3) >> 1);
      uVar6 = uVar5 >> 1;
      uVar7 = (uint)(CONCAT14((uVar5 & 1) != 0,uVar7) >> 1);
      uVar5 = uVar6;
      uVar9 = uVar8;
    } while (uVar8 != 0);
    uVar1 = CONCAT44(uVar6,uVar7) / (ulonglong)uVar3;
    iVar4 = (int)uVar1;
    lVar2 = (ulonglong)param_3 * (uVar1 & 0xffffffff);
    uVar3 = (uint)((ulonglong)lVar2 >> 0x20);
    uVar7 = uVar3 + iVar4 * param_4;
    if (((CARRY4(uVar3,iVar4 * param_4)) || (param_2 < uVar7)) ||
       ((param_2 <= uVar7 && (param_1 < (uint)lVar2)))) {
      iVar4 = iVar4 + -1;
    }
    uVar3 = 0;
  }
  if (cVar11 == '\x01') {
    bVar10 = iVar4 != 0;
    iVar4 = -iVar4;
    uVar3 = -(uint)bVar10 - uVar3;
  }
  return CONCAT44(uVar3,iVar4);
}


// ==== 10724630 __aullshr

/* Library Function - Single Match
    __aullshr
   
   Library: Visual Studio 2005 Release */

ulonglong __fastcall __aullshr(byte param_1,uint param_2)

{
  uint in_EAX;
  
  if (0x3f < param_1) {
    return 0;
  }
  if (param_1 < 0x20) {
    return CONCAT44(param_2 >> (param_1 & 0x1f),
                    in_EAX >> (param_1 & 0x1f) | param_2 << 0x20 - (param_1 & 0x1f));
  }
  return (ulonglong)(param_2 >> (param_1 & 0x1f));
}


// ==== 10724658 __controlfp_s

/* Library Function - Single Match
    __controlfp_s
   
   Library: Visual Studio 2005 Release */

errno_t __cdecl __controlfp_s(uint *_CurrentState,uint _NewValue,uint _Mask)

{
  uint uVar1;
  undefined4 *puVar2;
  errno_t eVar3;
  
  uVar1 = _Mask & 0xfff7ffff;
  if ((_NewValue & uVar1 & 0xfcf0fce0) == 0) {
    if (_CurrentState == (uint *)0x0) {
      __control87(_NewValue,uVar1);
    }
    else {
      uVar1 = __control87(_NewValue,uVar1);
      *_CurrentState = uVar1;
    }
    eVar3 = 0;
  }
  else {
    if (_CurrentState != (uint *)0x0) {
      uVar1 = __control87(0,0);
      *_CurrentState = uVar1;
    }
    puVar2 = (undefined4 *)FUN_10724278();
    eVar3 = 0x16;
    *puVar2 = 0x16;
    FUN_10723411((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  }
  return eVar3;
}


// ==== 107246c2 FUN_107246c2

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */

undefined4 FUN_107246c2(void)

{
  return 1;
}


// ==== 10724712 __get_sse2_info

/* WARNING: Removing unreachable block (ram,0x1072474d) */
/* WARNING: Removing unreachable block (ram,0x1072473a) */
/* Library Function - Single Match
    __get_sse2_info
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release */

undefined4 __get_sse2_info(void)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  byte in_AF;
  byte in_TF;
  byte in_IF;
  byte in_NT;
  byte in_AC;
  byte in_VIF;
  byte in_VIP;
  byte in_ID;
  uint uVar4;
  undefined4 local_8;
  
  local_8 = 0;
  uVar4 = (uint)(in_NT & 1) * 0x4000 | (uint)(in_IF & 1) * 0x200 | (uint)(in_TF & 1) * 0x100 | 0x40
          | (uint)(in_AF & 1) * 0x10 | 4 | (uint)(in_ID & 1) * 0x200000 |
          (uint)(in_VIP & 1) * 0x100000 | (uint)(in_VIF & 1) * 0x80000 | (uint)(in_AC & 1) * 0x40000
  ;
  uVar1 = uVar4 ^ 0x200000;
  if (((uint)((uVar1 & 0x4000) != 0) * 0x4000 | (uint)((uVar1 & 0x200) != 0) * 0x200 |
       (uint)((uVar1 & 0x100) != 0) * 0x100 | (uint)((uVar1 & 0x40) != 0) * 0x40 |
       (uint)((uVar1 & 0x10) != 0) * 0x10 | (uint)((uVar1 & 4) != 0) * 4 |
       (uint)((uVar1 & 0x200000) != 0) * 0x200000 | (uint)((uVar1 & 0x40000) != 0) * 0x40000) !=
      uVar4) {
    cpuid_basic_info(0);
    iVar2 = cpuid_Version_info(1);
    local_8 = *(uint *)(iVar2 + 8);
  }
  if (((local_8 & 0x4000000) == 0) || (iVar2 = FUN_107246c2(), iVar2 == 0)) {
    uVar3 = 0;
  }
  else {
    uVar3 = 1;
  }
  return uVar3;
}


// ==== 10724790 std::exception::exception

/* Library Function - Single Match
    public: __thiscall std::exception::exception(char const * const &)
   
   Library: Visual Studio 2005 Release */

exception * __thiscall std::exception::exception(exception *this,char **param_1)

{
  size_t sVar1;
  char *_Dst;
  
  *(undefined ***)this = vftable;
  if (*param_1 == (char *)0x0) {
    *(undefined4 *)(this + 4) = 0;
  }
  else {
    sVar1 = _strlen(*param_1);
    _Dst = _malloc(sVar1 + 1);
    *(char **)(this + 4) = _Dst;
    if (_Dst != (char *)0x0) {
      _strcpy_s(_Dst,sVar1 + 1,*param_1);
    }
  }
  *(undefined4 *)(this + 8) = 1;
  return this;
}


// ==== 107248a4 exception::~exception

/* Library Function - Single Match
    public: virtual __thiscall exception::~exception(void)
   
   Libraries: Visual Studio 2003 Release, Visual Studio 2005 Release */

void __thiscall exception::~exception(exception *this)

{
  *(undefined ***)this = std::exception::vftable;
  if (*(int *)(this + 8) != 0) {
    _free(*(void **)(this + 4));
  }
  return;
}


// ==== 107248ba FUN_107248ba

char * __fastcall FUN_107248ba(int param_1)

{
  char *pcVar1;
  
  pcVar1 = *(char **)(param_1 + 4);
  if (pcVar1 == (char *)0x0) {
    pcVar1 = "Unknown exception";
  }
  return pcVar1;
}


// ==== 1072497a FUN_1072497a

exception * __thiscall FUN_1072497a(void *this,byte param_1)

{
  exception::~exception(this);
  if ((param_1 & 1) != 0) {
    thunk_FUN_107026f0(this);
  }
  return this;
}


// ==== 10724996 FUN_10724996

exception * __thiscall FUN_10724996(void *this,byte param_1)

{
  *(undefined ***)this = std::bad_cast::vftable;
  exception::~exception(this);
  if ((param_1 & 1) != 0) {
    thunk_FUN_107026f0(this);
  }
  return this;
}


// ==== 107249b8 FUN_107249b8

exception * __thiscall FUN_107249b8(void *this,byte param_1)

{
  *(undefined ***)this = std::bad_typeid::vftable;
  exception::~exception(this);
  if ((param_1 & 1) != 0) {
    thunk_FUN_107026f0(this);
  }
  return this;
}


// ==== 107249da FUN_107249da

exception * __thiscall FUN_107249da(void *this,byte param_1)

{
  *(undefined ***)this = std::bad_typeid::vftable;
  exception::~exception(this);
  if ((param_1 & 1) != 0) {
    thunk_FUN_107026f0(this);
  }
  return this;
}


// ==== 10724a2f __EH_prolog3_catch

/* WARNING: This is an inlined function */
/* WARNING: Unable to track spacebase fully for stack */
/* WARNING: Variable defined which should be unmapped: param_1 */
/* Library Function - Single Match
    __EH_prolog3_catch
   
   Libraries: Visual Studio 2005, Visual Studio 2008, Visual Studio 2010, Visual Studio 2012 */

void __cdecl __EH_prolog3_catch(int param_1)

{
  int iVar1;
  undefined4 unaff_EBX;
  undefined4 unaff_ESI;
  undefined4 unaff_EDI;
  undefined4 unaff_retaddr;
  uint auStack_1c [5];
  undefined1 local_8 [8];
  
  iVar1 = -param_1;
  *(undefined4 *)((int)auStack_1c + iVar1 + 0x10) = unaff_EBX;
  *(undefined4 *)((int)auStack_1c + iVar1 + 0xc) = unaff_ESI;
  *(undefined4 *)((int)auStack_1c + iVar1 + 8) = unaff_EDI;
  *(uint *)((int)auStack_1c + iVar1 + 4) = DAT_10765c70 ^ (uint)&param_1;
  *(undefined4 *)((int)auStack_1c + iVar1) = unaff_retaddr;
  ExceptionList = local_8;
  return;
}


// ==== 10724ad4 __EH_epilog3

/* WARNING: This is an inlined function */
/* Library Function - Single Match
    __EH_epilog3
   
   Libraries: Visual Studio 2005, Visual Studio 2008, Visual Studio 2010, Visual Studio 2012 */

void __EH_epilog3(void)

{
  undefined4 *unaff_EBP;
  undefined4 unaff_retaddr;
  
  ExceptionList = (void *)unaff_EBP[-3];
  *unaff_EBP = unaff_retaddr;
  return;
}


// ==== 10724b06 _ValidateRead

/* Library Function - Single Match
    int __cdecl _ValidateRead(void const *,unsigned int)
   
   Library: Visual Studio 2005 Release */

int __cdecl _ValidateRead(void *param_1,uint param_2)

{
  return (uint)(param_1 != (void *)0x0);
}


// ==== 10724b13 FID_conflict:_ValidateExecute

/* Library Function - Multiple Matches With Different Base Names
    int __cdecl _ValidateExecute(int (__stdcall*)(void))
    int __cdecl _ValidateRead(void const *,unsigned int)
    int __cdecl _ValidateWrite(void *,unsigned int)
   
   Library: Visual Studio 2005 Release */

bool __cdecl FID_conflict__ValidateExecute(int param_1)

{
  return param_1 != 0;
}


// ==== 10724b20 FID_conflict:_ValidateExecute

/* Library Function - Multiple Matches With Different Base Names
    int __cdecl _ValidateExecute(int (__stdcall*)(void))
    int __cdecl _ValidateRead(void const *,unsigned int)
    int __cdecl _ValidateWrite(void *,unsigned int)
   
   Library: Visual Studio 2005 Release */

bool __cdecl FID_conflict__ValidateExecute(int param_1)

{
  return param_1 != 0;
}


// ==== 10724b2d ___report_gsfailure

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    ___report_gsfailure
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release, Visual Studio 2010 Release */

void __cdecl ___report_gsfailure(void)

{
  undefined4 in_EAX;
  HANDLE hProcess;
  undefined4 in_ECX;
  undefined4 in_EDX;
  undefined4 unaff_EBX;
  undefined4 unaff_EBP;
  undefined4 unaff_ESI;
  undefined4 unaff_EDI;
  undefined2 in_ES;
  undefined2 in_CS;
  undefined2 in_SS;
  undefined2 in_DS;
  undefined2 in_FS;
  undefined2 in_GS;
  byte in_AF;
  byte in_TF;
  byte in_IF;
  byte in_NT;
  byte in_AC;
  byte in_VIF;
  byte in_VIP;
  byte in_ID;
  undefined4 unaff_retaddr;
  UINT uExitCode;
  undefined4 local_32c;
  undefined4 local_328;
  
  _DAT_1076c938 =
       (uint)(in_NT & 1) * 0x4000 | (uint)SBORROW4((int)&stack0xfffffffc,0x328) * 0x800 |
       (uint)(in_IF & 1) * 0x200 | (uint)(in_TF & 1) * 0x100 | (uint)((int)&local_32c < 0) * 0x80 |
       (uint)(&stack0x00000000 == (undefined1 *)0x32c) * 0x40 | (uint)(in_AF & 1) * 0x10 |
       (uint)((POPCOUNT((uint)&local_32c & 0xff) & 1U) == 0) * 4 |
       (uint)(&stack0xfffffffc < (undefined1 *)0x328) | (uint)(in_ID & 1) * 0x200000 |
       (uint)(in_VIP & 1) * 0x100000 | (uint)(in_VIF & 1) * 0x80000 | (uint)(in_AC & 1) * 0x40000;
  _DAT_1076c93c = &stack0x00000004;
  _DAT_1076c878 = 0x10001;
  _DAT_1076c820 = 0xc0000409;
  _DAT_1076c824 = 1;
  local_32c = DAT_10765c70;
  local_328 = DAT_10765c74;
  _DAT_1076c82c = unaff_retaddr;
  _DAT_1076c904 = in_GS;
  _DAT_1076c908 = in_FS;
  _DAT_1076c90c = in_ES;
  _DAT_1076c910 = in_DS;
  _DAT_1076c914 = unaff_EDI;
  _DAT_1076c918 = unaff_ESI;
  _DAT_1076c91c = unaff_EBX;
  _DAT_1076c920 = in_EDX;
  _DAT_1076c924 = in_ECX;
  _DAT_1076c928 = in_EAX;
  _DAT_1076c92c = unaff_EBP;
  DAT_1076c930 = unaff_retaddr;
  _DAT_1076c934 = in_CS;
  _DAT_1076c940 = in_SS;
  DAT_1076c870 = IsDebuggerPresent();
  FUN_107326b0();
  SetUnhandledExceptionFilter((LPTOP_LEVEL_EXCEPTION_FILTER)0x0);
  UnhandledExceptionFilter((_EXCEPTION_POINTERS *)&PTR_DAT_10752090);
  if (DAT_1076c870 == 0) {
    FUN_107326b0();
  }
  uExitCode = 0xc0000409;
  hProcess = GetCurrentProcess();
  TerminateProcess(hProcess,uExitCode);
  return;
}


// ==== 10724c31 __mtinitlocks

/* Library Function - Single Match
    __mtinitlocks
   
   Library: Visual Studio 2005 Release */

int __cdecl __mtinitlocks(void)

{
  int iVar1;
  int iVar2;
  undefined *puVar3;
  
  iVar2 = 0;
  puVar3 = &DAT_1076cb48;
  do {
    if ((&DAT_1076661c)[iVar2 * 2] == 1) {
      (&DAT_10766618)[iVar2 * 2] = puVar3;
      puVar3 = puVar3 + 0x18;
      iVar1 = ___crtInitCritSecAndSpinCount((&DAT_10766618)[iVar2 * 2],4000);
      if (iVar1 == 0) {
        (&DAT_10766618)[iVar2 * 2] = 0;
        return 0;
      }
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 0x24);
  return 1;
}


// ==== 10724c7a __mtdeletelocks

/* Library Function - Single Match
    __mtdeletelocks
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release */

void __cdecl __mtdeletelocks(void)

{
  LPCRITICAL_SECTION lpCriticalSection;
  undefined4 *puVar1;
  
  puVar1 = &DAT_10766618;
  do {
    lpCriticalSection = (LPCRITICAL_SECTION)*puVar1;
    if ((lpCriticalSection != (LPCRITICAL_SECTION)0x0) && (puVar1[1] != 1)) {
      DeleteCriticalSection(lpCriticalSection);
      _free(lpCriticalSection);
      *puVar1 = 0;
    }
    puVar1 = puVar1 + 2;
  } while ((int)puVar1 < 0x10766738);
  puVar1 = &DAT_10766618;
  do {
    if (((LPCRITICAL_SECTION)*puVar1 != (LPCRITICAL_SECTION)0x0) && (puVar1[1] == 1)) {
      DeleteCriticalSection((LPCRITICAL_SECTION)*puVar1);
    }
    puVar1 = puVar1 + 2;
  } while ((int)puVar1 < 0x10766738);
  return;
}


// ==== 10724ccf FUN_10724ccf

void __cdecl FUN_10724ccf(int param_1)

{
  LeaveCriticalSection((LPCRITICAL_SECTION)(&DAT_10766618)[param_1 * 2]);
  return;
}


// ==== 10724cfc __mtinitlocknum

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    __mtinitlocknum
   
   Library: Visual Studio 2005 Release */

int __cdecl __mtinitlocknum(int _LockNum)

{
  int *piVar1;
  void *_Memory;
  undefined4 *puVar2;
  int iVar3;
  int local_20;
  
  iVar3 = 1;
  local_20 = 1;
  if (DAT_1076c7d4 == 0) {
    __FF_MSGBANNER();
    FUN_10720477(0x1e);
    ___crtExitProcess(0xff);
  }
  piVar1 = &DAT_10766618 + _LockNum * 2;
  if (*piVar1 == 0) {
    _Memory = __malloc_crt(0x18);
    if (_Memory == (void *)0x0) {
      puVar2 = (undefined4 *)FUN_10724278();
      *puVar2 = 0xc;
      iVar3 = 0;
    }
    else {
      __lock(10);
      if (*piVar1 == 0) {
        iVar3 = ___crtInitCritSecAndSpinCount(_Memory,4000);
        if (iVar3 == 0) {
          _free(_Memory);
          puVar2 = (undefined4 *)FUN_10724278();
          *puVar2 = 0xc;
          local_20 = 0;
        }
        else {
          *piVar1 = (int)_Memory;
        }
      }
      else {
        _free(_Memory);
      }
      FUN_10724db6();
      iVar3 = local_20;
    }
  }
  return iVar3;
}


// ==== 10724db6 FUN_10724db6

void FUN_10724db6(void)

{
  FUN_10724ccf(10);
  return;
}


// ==== 10724dbf __lock

/* Library Function - Single Match
    __lock
   
   Library: Visual Studio 2005 Release */

void __cdecl __lock(int _File)

{
  int iVar1;
  
  if ((&DAT_10766618)[_File * 2] == 0) {
    iVar1 = __mtinitlocknum(_File);
    if (iVar1 == 0) {
      __amsg_exit(0x11);
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)(&DAT_10766618)[_File * 2]);
  return;
}


// ==== 10724df0 __global_unwind2

/* Library Function - Single Match
    __global_unwind2
   
   Library: Visual Studio */

void __cdecl __global_unwind2(PVOID param_1)

{
  RtlUnwind(param_1,(PVOID)0x10724e08,(PEXCEPTION_RECORD)0x0,(PVOID)0x0);
  return;
}


// ==== 10724e55 __local_unwind2

/* Library Function - Single Match
    __local_unwind2
   
   Libraries: Visual Studio 2017 Debug, Visual Studio 2017 Release, Visual Studio 2019 Debug, Visual
   Studio 2019 Release */

void __cdecl __local_unwind2(int param_1,uint param_2)

{
  uint uVar1;
  void *local_20;
  undefined1 *puStack_1c;
  undefined4 local_18;
  int iStack_14;
  
  iStack_14 = param_1;
  puStack_1c = &LAB_10724e10;
  local_20 = ExceptionList;
  ExceptionList = &local_20;
  while( true ) {
    uVar1 = *(uint *)(param_1 + 0xc);
    if ((uVar1 == 0xffffffff) || ((param_2 != 0xffffffff && (uVar1 <= param_2)))) break;
    local_18 = *(undefined4 *)(*(int *)(param_1 + 8) + uVar1 * 0xc);
    *(undefined4 *)(param_1 + 0xc) = local_18;
    if (*(int *)(*(int *)(param_1 + 8) + 4 + uVar1 * 0xc) == 0) {
      __NLG_Notify(0x101);
      FUN_10724f24();
    }
  }
  ExceptionList = local_20;
  return;
}


// ==== 10724efc __NLG_Notify1

/* Library Function - Single Match
    __NLG_Notify1
   
   Libraries: Visual Studio 2017 Debug, Visual Studio 2017 Release, Visual Studio 2019 Debug, Visual
   Studio 2019 Release */

undefined4 __fastcall __NLG_Notify1(undefined4 param_1)

{
  undefined4 in_EAX;
  undefined4 unaff_EBP;
  
  DAT_10766740 = param_1;
  DAT_1076673c = in_EAX;
  DAT_10766744 = unaff_EBP;
  return in_EAX;
}


// ==== 10724f05 __NLG_Notify

/* Library Function - Single Match
    __NLG_Notify
   
   Libraries: Visual Studio 2017 Debug, Visual Studio 2017 Release, Visual Studio 2019 Debug, Visual
   Studio 2019 Release */

void __NLG_Notify(ulong param_1)

{
  undefined4 in_EAX;
  undefined4 unaff_EBP;
  
  DAT_10766740 = param_1;
  DAT_1076673c = in_EAX;
  DAT_10766744 = unaff_EBP;
  return;
}


// ==== 10724f24 FUN_10724f24

void FUN_10724f24(void)

{
  code *in_EAX;
  
  (*in_EAX)();
  return;
}


// ==== 10724f48 HeapManager::Destructor

/* Library Function - Single Match
    public: void __thiscall HeapManager::Destructor(void)
   
   Library: Visual Studio 2005 Release */

void __thiscall HeapManager::Destructor(HeapManager *this)

{
  if (*(int *)(this + 4) != 0) {
    while (*(int *)(this + 0xc) = *(int *)(this + 8), *(int *)(this + 8) != 0) {
      *(undefined4 *)(this + 8) = **(undefined4 **)(this + 0xc);
      (**(code **)(this + 4))(*(undefined4 *)(this + 0xc));
    }
  }
  return;
}


// ==== 10724f6e UnDecorator::getNumberOfDimensions

/* Library Function - Single Match
    private: static int __cdecl UnDecorator::getNumberOfDimensions(void)
   
   Library: Visual Studio 2005 Release */

int __cdecl UnDecorator::getNumberOfDimensions(void)

{
  int iVar1;
  char cVar2;
  
  cVar2 = *DAT_1076ccb8;
  if (cVar2 != '\0') {
    if (('/' < cVar2) && (cVar2 < ':')) {
      DAT_1076ccb8 = DAT_1076ccb8 + 1;
      return cVar2 + -0x2f;
    }
    iVar1 = 0;
LAB_10724fba:
    if (cVar2 == '@') {
      cVar2 = *DAT_1076ccb8;
      DAT_1076ccb8 = DAT_1076ccb8 + 1;
      if (cVar2 != '@') {
LAB_10724fcd:
        iVar1 = -1;
      }
      return iVar1;
    }
    if (cVar2 != '\0') {
      if ((cVar2 < 'A') || ('P' < cVar2)) goto LAB_10724fcd;
      DAT_1076ccb8 = DAT_1076ccb8 + 1;
      iVar1 = iVar1 * 0x10 + -0x41 + (int)cVar2;
      cVar2 = *DAT_1076ccb8;
      goto LAB_10724fba;
    }
  }
  return 0;
}


// ==== 10724fd1 UnDecorator::getTypeEncoding

/* WARNING: Removing unreachable block (ram,0x1072537b) */
/* WARNING: Removing unreachable block (ram,0x1072521b) */
/* WARNING: Removing unreachable block (ram,0x10725390) */
/* WARNING: Removing unreachable block (ram,0x10725341) */
/* WARNING: Removing unreachable block (ram,0x10725307) */
/* WARNING: Removing unreachable block (ram,0x1072531c) */
/* WARNING: Removing unreachable block (ram,0x10725356) */
/* Library Function - Single Match
    private: static int __cdecl UnDecorator::getTypeEncoding(void)
   
   Library: Visual Studio 2005 Release */

int __cdecl UnDecorator::getTypeEncoding(void)

{
  char cVar1;
  bool bVar2;
  uint uVar3;
  char *pcVar4;
  char *pcVar5;
  uint uVar6;
  uint uVar7;
  
  do {
    uVar3 = 0;
    if (*DAT_1076ccb8 == '_') {
      DAT_1076ccb8 = DAT_1076ccb8 + 1;
      uVar3 = 0x4000;
    }
    cVar1 = *DAT_1076ccb8;
    if (('@' < cVar1) && (cVar1 < '[')) {
      uVar7 = (int)*DAT_1076ccb8 - 0x41;
      DAT_1076ccb8 = DAT_1076ccb8 + 1;
      if ((uVar7 & 1) == 0) {
        uVar3 = uVar3 | 0x8000;
      }
      else {
        uVar3 = uVar3 | 0xa000;
      }
      if (0x17 < (int)uVar7) {
        return uVar3;
      }
      if ((uVar3 & 0x8000) == 0) {
        uVar3 = uVar3 & 0xffff9fff;
      }
      else {
        uVar3 = uVar3 | 0x800;
      }
      uVar6 = uVar7 & 0x18;
      if (uVar6 == 0) {
        if ((uVar3 & 0x8000) == 0) {
          uVar3 = uVar3 | 0x800;
        }
        else {
          uVar3 = uVar3 | 0x40;
        }
      }
      else if (uVar6 == 8) {
        if ((uVar3 & 0x8000) == 0) {
          uVar3 = uVar3 & 0xfffff7ff | 0x1000;
        }
        else {
          uVar3 = uVar3 | 0x80;
        }
      }
      else {
        if (uVar6 != 0x10) {
          return 0xffff;
        }
        if ((uVar3 & 0x8000) == 0) {
          uVar3 = uVar3 & 0xffffe7ff;
        }
      }
      uVar7 = uVar7 & 6;
      if (uVar7 != 0) {
        if (uVar7 == 2) {
          if ((uVar3 & 0x8000) == 0) {
            return uVar3 & 0xffff9fff;
          }
          return uVar3 | 0x200;
        }
        if (uVar7 != 4) {
          if (uVar7 != 6) {
            return 0xffff;
          }
          return uVar3 | 0x400;
        }
        return uVar3 | 0x100;
      }
      return uVar3;
    }
    if (cVar1 != '$') {
      cVar1 = *DAT_1076ccb8;
      if (('/' < cVar1) && (cVar1 < '9')) {
        DAT_1076ccb8 = DAT_1076ccb8 + 1;
        switch(cVar1) {
        case '0':
          return 0x800;
        case '1':
          return 0x1000;
        case '2':
          return 0;
        case '3':
          return 0x4000;
        case '4':
          return 0x2000;
        case '5':
          return 0x6000;
        case '6':
          return 0x6800;
        case '7':
          return 0x7000;
        case '8':
          return 0x7800;
        default:
          return 0xffff;
        }
      }
      if (cVar1 != '9') {
        return (cVar1 != '\0') + 0xfffe;
      }
      DAT_1076ccb8 = DAT_1076ccb8 + 1;
      return 0xfffd;
    }
    bVar2 = false;
    pcVar4 = DAT_1076ccb8 + 1;
    cVar1 = *pcVar4;
    if ('B' < cVar1) {
      if (cVar1 == 'C') {
        uVar3 = 0x7c00;
      }
      else if (cVar1 == 'D') {
        uVar3 = uVar3 | 0x9100;
      }
      else if (cVar1 == 'E') {
        uVar3 = uVar3 | 0x9200;
      }
      else {
        if (cVar1 != 'R') {
          DAT_1076ccb8 = pcVar4;
          return 0xffff;
        }
        pcVar4 = DAT_1076ccb8 + 2;
        bVar2 = true;
LAB_107251fa:
        if (bVar2) {
          uVar3 = uVar3 | 0x8e00;
        }
        else {
          uVar3 = uVar3 | 0x8d00;
        }
        if (((int)*pcVar4 - 0x30U & 1) != 0) {
          uVar3 = uVar3 | 0x2000;
        }
        uVar7 = (int)*pcVar4 - 0x30U & 6;
        if (uVar7 == 0) {
          if ((uVar3 & 0x8000) == 0) {
            uVar3 = uVar3 | 0x800;
          }
          else {
            uVar3 = uVar3 | 0x40;
          }
        }
        else if (uVar7 == 2) {
          if ((uVar3 & 0x8000) == 0) {
            uVar3 = uVar3 & 0xfffff7ff | 0x1000;
          }
          else {
            uVar3 = uVar3 | 0x80;
          }
        }
        else {
          if (uVar7 != 4) {
            DAT_1076ccb8 = pcVar4;
            return 0xffff;
          }
          if ((uVar3 & 0x8000) == 0) {
            uVar3 = uVar3 & 0xffffe7ff;
          }
        }
      }
      goto switchD_10725058_caseD_47;
    }
    if (cVar1 == 'B') {
      uVar3 = uVar3 | 0x9800;
      goto switchD_10725058_caseD_47;
    }
    if (cVar1 == '\0') {
      uVar3 = 0xfffe;
      goto switchD_10725058_caseD_47;
    }
    if (cVar1 != '$') {
      if (cVar1 < '0') {
        DAT_1076ccb8 = pcVar4;
        return 0xffff;
      }
      if (cVar1 < '6') goto LAB_107251fa;
      if (cVar1 != 'A') {
        DAT_1076ccb8 = pcVar4;
        return 0xffff;
      }
      uVar3 = uVar3 | 0x9000;
switchD_10725058_caseD_47:
      DAT_1076ccb8 = pcVar4 + 1;
      return uVar3;
    }
    pcVar5 = pcVar4;
    if (DAT_1076ccb8[2] == 'P') {
      pcVar5 = DAT_1076ccb8 + 2;
    }
    pcVar4 = pcVar5 + 1;
    switch(*pcVar4) {
    case 'F':
    case 'H':
    case 'L':
    case 'M':
    case 'Q':
      DAT_1076ccb8 = pcVar5 + 2;
      break;
    default:
      goto switchD_10725058_caseD_47;
    case 'J':
    case 'N':
    case 'O':
      pcVar4 = pcVar5 + 2;
      cVar1 = *pcVar4;
      if (('/' < cVar1) && (cVar1 < ':')) {
        DAT_1076ccb8 = pcVar5 + cVar1 + -0x2d;
        uVar3 = getTypeEncoding();
        return uVar3 | 0x10000;
      }
      uVar3 = 0xffff;
      goto switchD_10725058_caseD_47;
    }
  } while( true );
}


// ==== 10725519 UnDecorator::UScore

/* Library Function - Single Match
    public: static char const * __cdecl UnDecorator::UScore(enum Tokens)
   
   Library: Visual Studio 2005 Release */

char * __cdecl UnDecorator::UScore(Tokens param_1)

{
  char *pcVar1;
  
  pcVar1 = (&PTR_s___based__10752630)[param_1];
  if ((~DAT_1076ccc8 & 1) == 0) {
    pcVar1 = pcVar1 + 2;
  }
  return pcVar1;
}


// ==== 10725532 HeapManager::getMemory

/* Library Function - Single Match
    public: void * __thiscall HeapManager::getMemory(unsigned int,int)
   
   Library: Visual Studio 2005 Release */

void * __thiscall HeapManager::getMemory(HeapManager *this,uint param_1,int param_2)

{
  void *pvVar1;
  undefined4 *puVar2;
  uint uVar3;
  
  uVar3 = param_1 + 7 & 0xfffffff8;
  if (param_2 != 0) {
    pvVar1 = (void *)(**(code **)this)(uVar3);
    return pvVar1;
  }
  if (uVar3 == 0) {
    uVar3 = 8;
  }
  if (*(uint *)(this + 0x10) < uVar3) {
    if (uVar3 < 0x1001) {
      puVar2 = getMemory((HeapManager *)&DAT_1076cc98,0x1004,1);
      if (puVar2 == (undefined4 *)0x0) {
        puVar2 = (undefined4 *)0x0;
      }
      else {
        *puVar2 = 0;
      }
      if (puVar2 != (undefined4 *)0x0) {
        if (*(undefined4 **)(this + 0xc) == (undefined4 *)0x0) {
          *(undefined4 **)(this + 8) = puVar2;
        }
        else {
          **(undefined4 **)(this + 0xc) = puVar2;
        }
        *(undefined4 **)(this + 0xc) = puVar2;
        *(uint *)(this + 0x10) = 0x1000 - uVar3;
        goto LAB_107255a6;
      }
    }
    pvVar1 = (void *)0x0;
  }
  else {
    *(uint *)(this + 0x10) = *(uint *)(this + 0x10) - uVar3;
LAB_107255a6:
    pvVar1 = (void *)(*(int *)(this + 0xc) + 4 + *(int *)(this + 0x10));
  }
  return pvVar1;
}


// ==== 107255d5 DName::DName

/* Library Function - Single Match
    public: __thiscall DName::DName(class DName const &)
   
   Library: Visual Studio 2005 Release */

void __thiscall DName::DName(DName *this,DName *param_1)

{
  uint uVar1;
  
  *(uint *)(this + 4) =
       *(uint *)(this + 4) ^ ((*(int *)(param_1 + 4) << 0x1c) >> 0x1c ^ *(uint *)(this + 4)) & 0xf;
  uVar1 = (*(uint *)(param_1 + 4) ^ *(uint *)(this + 4)) & 0x10 ^ *(uint *)(this + 4);
  *(uint *)(this + 4) = uVar1;
  uVar1 = (*(uint *)(param_1 + 4) ^ uVar1) & 0x20 ^ uVar1;
  *(uint *)(this + 4) = uVar1;
  uVar1 = (*(uint *)(param_1 + 4) ^ uVar1) & 0x40 ^ uVar1;
  *(uint *)(this + 4) = uVar1;
  uVar1 = (*(uint *)(param_1 + 4) ^ uVar1) & 0x80 ^ uVar1;
  *(uint *)(this + 4) = uVar1;
  *(undefined4 *)this = *(undefined4 *)param_1;
  *(uint *)(this + 4) = *(uint *)(this + 4) ^ (uVar1 ^ *(uint *)(param_1 + 4)) & 0x100;
  uVar1 = (*(uint *)(param_1 + 4) ^ *(uint *)(this + 4)) & 0x200 ^ *(uint *)(this + 4);
  *(uint *)(this + 4) = uVar1;
  uVar1 = (*(uint *)(param_1 + 4) ^ uVar1) & 0x400 ^ uVar1;
  *(uint *)(this + 4) = uVar1;
  *(uint *)(this + 4) = (*(uint *)(param_1 + 4) ^ uVar1) & 0x800 ^ uVar1;
  return;
}


// ==== 107256eb DName::operator=

/* Library Function - Single Match
    public: class DName & __thiscall DName::operator=(class DName const &)
   
   Library: Visual Studio 2005 Release */

DName * __thiscall DName::operator=(DName *this,DName *param_1)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = *(uint *)(this + 4);
  iVar1 = (int)(uVar2 << 0x1c) >> 0x1c;
  if ((iVar1 == 0) || (iVar1 == 2)) {
    uVar2 = ((*(int *)(param_1 + 4) << 0x1c) >> 0x1c ^ uVar2) & 0xf ^ uVar2;
    *(uint *)(this + 4) = uVar2;
    uVar2 = (*(uint *)(param_1 + 4) ^ uVar2) & 0x10 ^ uVar2;
    *(uint *)(this + 4) = uVar2;
    uVar2 = (*(uint *)(param_1 + 4) ^ uVar2) & 0x20 ^ uVar2;
    *(uint *)(this + 4) = uVar2;
    uVar2 = (*(uint *)(param_1 + 4) ^ uVar2) & 0x40 ^ uVar2;
    *(uint *)(this + 4) = uVar2;
    uVar2 = (*(uint *)(param_1 + 4) ^ uVar2) & 0x80 ^ uVar2;
    *(uint *)(this + 4) = uVar2;
    *(uint *)(this + 4) = (*(uint *)(param_1 + 4) ^ uVar2) & 0x800 ^ uVar2;
    *(undefined4 *)this = *(undefined4 *)param_1;
  }
  return this;
}


// ==== 1072576f Replicator::operator[]

/* Library Function - Single Match
    public: class DName const & __thiscall Replicator::operator[](int)const 
   
   Library: Visual Studio 2005 Release */

DName * __thiscall Replicator::operator[](Replicator *this,int param_1)

{
  DName *pDVar1;
  
  if ((uint)param_1 < 10) {
    if ((*(int *)this == -1) || (*(int *)this < param_1)) {
      pDVar1 = (DName *)(this + 0x34);
    }
    else {
      pDVar1 = *(DName **)(this + param_1 * 4 + 4);
    }
  }
  else {
    pDVar1 = (DName *)(this + 0x2c);
  }
  return pDVar1;
}


// ==== 107257a5 DNameNode::operator+=

/* Library Function - Single Match
    public: class DNameNode & __thiscall DNameNode::operator+=(class DNameNode *)
   
   Library: Visual Studio 2005 Release */

DNameNode * __thiscall DNameNode::operator+=(DNameNode *this,DNameNode *param_1)

{
  int iVar1;
  int iVar2;
  
  if (param_1 != (DNameNode *)0x0) {
    iVar1 = *(int *)(this + 4);
    if (*(int *)(this + 4) == 0) {
      *(DNameNode **)(this + 4) = param_1;
    }
    else {
      do {
        iVar2 = iVar1;
        iVar1 = *(int *)(iVar2 + 4);
      } while (iVar1 != 0);
      *(DNameNode **)(iVar2 + 4) = param_1;
    }
  }
  return this;
}


// ==== 107257e4 FUN_107257e4

undefined4 FUN_107257e4(void)

{
  return 1;
}


// ==== 107257e8 FUN_107257e8

undefined1 __fastcall FUN_107257e8(int param_1)

{
  return *(undefined1 *)(param_1 + 8);
}


// ==== 107257ec FUN_107257ec

undefined1 * __thiscall FUN_107257ec(void *this,undefined1 *param_1,int param_2)

{
  if ((param_1 == (undefined1 *)0x0) || (param_2 == 0)) {
    param_1 = (undefined1 *)0x0;
  }
  else {
    *param_1 = *(undefined1 *)((int)this + 8);
  }
  return param_1;
}


// ==== 10725807 FUN_10725807

undefined4 __fastcall FUN_10725807(int param_1)

{
  return *(undefined4 *)(param_1 + 0xc);
}


// ==== 1072580b pDNameNode::pDNameNode

/* Library Function - Single Match
    public: __thiscall pDNameNode::pDNameNode(class DName *)
   
   Library: Visual Studio 2005 Release */

void __thiscall pDNameNode::pDNameNode(pDNameNode *this,DName *param_1)

{
  int iVar1;
  
  *(undefined4 *)(this + 4) = 0;
  *(undefined ***)this = vftable;
  if ((param_1 != (DName *)0x0) &&
     ((iVar1 = (*(int *)(param_1 + 4) << 0x1c) >> 0x1c, iVar1 == 1 || (iVar1 == 3)))) {
    param_1 = (DName *)0x0;
  }
  *(DName **)(this + 8) = param_1;
  return;
}


// ==== 1072583a DNameStatusNode::DNameStatusNode

/* Library Function - Single Match
    public: __thiscall DNameStatusNode::DNameStatusNode(enum DNameStatus)
   
   Library: Visual Studio 2005 Release */

void __thiscall DNameStatusNode::DNameStatusNode(DNameStatusNode *this,DNameStatus param_1)

{
  undefined4 uVar1;
  
  *(undefined4 *)(this + 4) = 0;
  *(undefined ***)this = vftable;
  *(DNameStatus *)(this + 8) = param_1;
  if (param_1 == 2) {
    uVar1 = 4;
  }
  else {
    uVar1 = 0;
  }
  *(undefined4 *)(this + 0xc) = uVar1;
  return;
}


// ==== 1072585f FUN_1072585f

undefined4 __fastcall FUN_1072585f(int param_1)

{
  return *(undefined4 *)(param_1 + 0xc);
}


// ==== 10725863 FUN_10725863

byte __fastcall FUN_10725863(int param_1)

{
  return (*(int *)(param_1 + 8) != 2) - 1U & 0x20;
}


// ==== 1072587e und_strncpy

/* Library Function - Single Match
    char * __cdecl und_strncpy(char *,char const *,unsigned int)
   
   Library: Visual Studio 2005 Release */

char * __cdecl und_strncpy(char *param_1,char *param_2,uint param_3)

{
  char cVar1;
  char *pcVar2;
  char *in_EDX;
  
  pcVar2 = param_1;
  for (; (param_2 != (char *)0x0 && (cVar1 = *in_EDX, *pcVar2 = cVar1, cVar1 != '\0'));
      in_EDX = in_EDX + 1) {
    pcVar2 = pcVar2 + 1;
    param_2 = param_2 + -1;
  }
  return param_1;
}


// ==== 107258c3 UnDecorator::getDataIndirectType

/* Library Function - Single Match
    private: static class DName __cdecl UnDecorator::getDataIndirectType(void)
   
   Library: Visual Studio 2005 Release */

DName * __cdecl UnDecorator::getDataIndirectType(void)

{
  DName *in_stack_00000004;
  undefined4 local_14;
  uint local_10;
  undefined4 local_c;
  uint local_8;
  
  local_8 = local_8 & 0xfffff000;
  local_10 = local_10 & 0xfffff000;
  local_c = 0;
  local_14 = 0;
  getDataIndirectType(in_stack_00000004,(char)&local_14,(DName *)0x0,(int)&local_c);
  return in_stack_00000004;
}


// ==== 107258f6 UnDecorator::getThisType

/* Library Function - Single Match
    private: static class DName __cdecl UnDecorator::getThisType(void)
   
   Library: Visual Studio 2005 Release */

DName * __cdecl UnDecorator::getThisType(void)

{
  DName *in_stack_00000004;
  undefined4 local_14;
  uint local_10;
  undefined4 local_c;
  uint local_8;
  
  local_8 = local_8 & 0xfffff000;
  local_10 = local_10 & 0xfffff000;
  local_c = 0;
  local_14 = 0;
  getDataIndirectType(in_stack_00000004,(char)&local_14,(DName *)0x0,(int)&local_c);
  return in_stack_00000004;
}


// ==== 1072593d DName::DName

/* Library Function - Single Match
    public: __thiscall DName::DName(class DName *)
   
   Library: Visual Studio 2005 Release */

DName * __thiscall DName::DName(DName *this,DName *param_1)

{
  pDNameNode *this_00;
  int iVar1;
  
  if (param_1 == (DName *)0x0) {
    *(uint *)(this + 4) = *(uint *)(this + 4) & 0xfffffff0;
    *(undefined4 *)this = 0;
  }
  else {
    this_00 = HeapManager::getMemory((HeapManager *)&DAT_1076cc98,0xc,0);
    if (this_00 == (pDNameNode *)0x0) {
      iVar1 = 0;
    }
    else {
      iVar1 = pDNameNode::pDNameNode(this_00,param_1);
    }
    *(int *)this = iVar1;
    *(uint *)(this + 4) =
         *(uint *)(this + 4) ^ ((-(uint)(iVar1 != 0) & 0xfffffffd) + 3 ^ *(uint *)(this + 4)) & 0xf;
  }
  *(uint *)(this + 4) = *(uint *)(this + 4) & 0xfffff00f;
  return this;
}


// ==== 10725993 DName::DName

/* Library Function - Single Match
    public: __thiscall DName::DName(enum DNameStatus)
   
   Library: Visual Studio 2005 Release */

DName * __thiscall DName::DName(DName *this,DNameStatus param_1)

{
  DNameStatus DVar1;
  DNameStatusNode *this_00;
  int iVar2;
  
  DVar1 = param_1;
  if ((param_1 != 1) && (param_1 != 3)) {
    DVar1 = 0;
  }
  *(DNameStatus *)(this + 4) =
       *(DNameStatus *)(this + 4) ^ (*(DNameStatus *)(this + 4) ^ DVar1) & 0xf;
  this_00 = HeapManager::getMemory((HeapManager *)&DAT_1076cc98,0x10,0);
  if (this_00 == (DNameStatusNode *)0x0) {
    iVar2 = 0;
  }
  else {
    iVar2 = DNameStatusNode::DNameStatusNode(this_00,param_1);
  }
  *(uint *)(this + 4) = *(uint *)(this + 4) & 0xfffff00f;
  *(int *)this = iVar2;
  if (iVar2 == 0) {
    *(uint *)(this + 4) = *(uint *)(this + 4) & 0xfffffff3 | 3;
  }
  return this;
}


// ==== 107259f4 DName::isValid

/* Library Function - Single Match
    public: int __thiscall DName::isValid(void)const 
   
   Library: Visual Studio 2005 Release */

int __thiscall DName::isValid(DName *this)

{
  int iVar1;
  
  iVar1 = (*(int *)(this + 4) << 0x1c) >> 0x1c;
  if ((iVar1 != 0) && (iVar1 != 2)) {
    return 0;
  }
  return 1;
}


// ==== 10725a0b DName::isEmpty

/* Library Function - Single Match
    public: int __thiscall DName::isEmpty(void)const 
   
   Libraries: Visual Studio 2003 Release, Visual Studio 2005 Release */

int __thiscall DName::isEmpty(DName *this)

{
  int iVar1;
  
  if (*(int *)this != 0) {
    iVar1 = isValid(this);
    if (iVar1 != 0) {
      return 0;
    }
  }
  return 1;
}


// ==== 10725a20 DName::isUDC

/* Library Function - Single Match
    public: int __thiscall DName::isUDC(void)const 
   
   Library: Visual Studio 2005 Release */

int __thiscall DName::isUDC(DName *this)

{
  int iVar1;
  int extraout_ECX;
  
  iVar1 = isEmpty(this);
  if ((iVar1 == 0) && ((*(byte *)(extraout_ECX + 4) & 0x20) != 0)) {
    return 1;
  }
  return 0;
}


// ==== 10725a56 DName::length

/* Library Function - Single Match
    public: int __thiscall DName::length(void)const 
   
   Library: Visual Studio 2005 Release */

int __thiscall DName::length(DName *this)

{
  int iVar1;
  undefined4 *extraout_ECX;
  undefined4 *puVar2;
  int iVar3;
  
  iVar3 = 0;
  iVar1 = isEmpty(this);
  if (iVar1 == 0) {
    for (puVar2 = (undefined4 *)*extraout_ECX; puVar2 != (undefined4 *)0x0;
        puVar2 = (undefined4 *)puVar2[1]) {
      iVar1 = (**(code **)*puVar2)();
      iVar3 = iVar3 + iVar1;
    }
  }
  return iVar3;
}


// ==== 10725a7b DName::getLastChar

/* Library Function - Single Match
    public: char __thiscall DName::getLastChar(void)const 
   
   Library: Visual Studio 2005 Release */

char __thiscall DName::getLastChar(DName *this)

{
  char cVar1;
  int iVar2;
  int *extraout_ECX;
  int *piVar3;
  int *piVar4;
  
  piVar4 = (int *)0x0;
  iVar2 = isEmpty(this);
  if ((iVar2 == 0) && (piVar3 = (int *)*extraout_ECX, piVar3 != (int *)0x0)) {
    do {
      iVar2 = (**(code **)*piVar3)();
      if (iVar2 != 0) {
        piVar4 = piVar3;
      }
      piVar3 = (int *)piVar3[1];
    } while (piVar3 != (int *)0x0);
    if (piVar4 != (int *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x10725aab. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      cVar1 = (**(code **)(*piVar4 + 4))();
      return cVar1;
    }
  }
  return '\0';
}


// ==== 10725ab3 DName::getString

/* Library Function - Single Match
    public: char * __thiscall DName::getString(char *,int)const 
   
   Library: Visual Studio 2005 Release */

char * __thiscall DName::getString(DName *this,char *param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  DName *this_00;
  uint uVar3;
  int *piVar4;
  
  iVar1 = isEmpty(this);
  if (iVar1 == 0) {
    uVar3 = param_2;
    if (param_1 == (char *)0x0) {
      iVar1 = length(this_00);
      uVar3 = iVar1 + 1;
      param_1 = HeapManager::getMemory((HeapManager *)&DAT_1076cc98,uVar3,0);
      if (param_1 == (char *)0x0) {
        return (char *)0x0;
      }
    }
    piVar4 = *(int **)this;
    param_2 = (int)param_1;
    while ((piVar4 != (int *)0x0 && (0 < (int)uVar3))) {
      uVar2 = (**(code **)*piVar4)();
      if (uVar2 != 0) {
        if ((int)(uVar3 - uVar2) < 0) {
          uVar2 = uVar3;
        }
        iVar1 = (**(code **)(*piVar4 + 8))(param_2,uVar2);
        if (iVar1 != 0) {
          uVar3 = uVar3 - uVar2;
          param_2 = param_2 + uVar2;
        }
      }
      piVar4 = (int *)piVar4[1];
    }
  }
  else {
    param_2 = (int)param_1;
    if (param_1 == (char *)0x0) {
      return (char *)0x0;
    }
  }
  *(char *)param_2 = '\0';
  return param_1;
}


// ==== 10725b44 DName::operator|=

/* Library Function - Single Match
    public: class DName & __thiscall DName::operator|=(class DName const &)
   
   Library: Visual Studio 2005 Release */

DName * __thiscall DName::operator|=(DName *this,DName *param_1)

{
  uint uVar1;
  int iVar2;
  int extraout_ECX;
  DName *extraout_EDX;
  
  uVar1 = *(uint *)(this + 4);
  if (((byte)uVar1 & 0xf) != 3) {
    iVar2 = isValid(param_1);
    this = extraout_EDX;
    if (iVar2 == 0) {
      *(uint *)(extraout_EDX + 4) =
           ((*(int *)(extraout_ECX + 4) << 0x1c) >> 0x1c ^ uVar1) & 0xf ^ uVar1;
    }
  }
  return this;
}


// ==== 10725b79 DName::operator=

/* Library Function - Single Match
    public: class DName & __thiscall DName::operator=(enum DNameStatus)
   
   Library: Visual Studio 2005 Release */

DName * __thiscall DName::operator=(DName *this,DNameStatus param_1)

{
  DNameStatus DVar1;
  DNameStatusNode *this_00;
  int iVar2;
  
  if ((param_1 == 1) || (param_1 == 3)) {
    DVar1 = *(DNameStatus *)(this + 4);
    *(undefined4 *)this = 0;
    if (((byte)DVar1 & 0xf) != 3) {
      *(DNameStatus *)(this + 4) = (DVar1 ^ param_1) & 0xf ^ DVar1;
    }
  }
  else {
    iVar2 = (int)(*(uint *)(this + 4) << 0x1c) >> 0x1c;
    if ((iVar2 == 0) || (iVar2 == 2)) {
      *(uint *)(this + 4) = *(uint *)(this + 4) & 0xfffff70f;
      this_00 = HeapManager::getMemory((HeapManager *)&DAT_1076cc98,0x10,0);
      if (this_00 == (DNameStatusNode *)0x0) {
        iVar2 = 0;
      }
      else {
        iVar2 = DNameStatusNode::DNameStatusNode(this_00,param_1);
      }
      *(int *)this = iVar2;
      if (iVar2 == 0) {
        *(uint *)(this + 4) = *(uint *)(this + 4) & 0xfffffff3 | 3;
      }
    }
  }
  return this;
}


// ==== 10725bfa Replicator::Replicator

/* Library Function - Single Match
    public: __thiscall Replicator::Replicator(void)
   
   Library: Visual Studio 2005 Release */

Replicator * __thiscall Replicator::Replicator(Replicator *this)

{
  DName::DName((DName *)(this + 0x2c),3);
  DName::DName((DName *)(this + 0x34),1);
  *(undefined4 *)this = 0xffffffff;
  return this;
}


// ==== 10725c18 Replicator::operator+=

/* Library Function - Single Match
    public: class Replicator & __thiscall Replicator::operator+=(class DName const &)
   
   Library: Visual Studio 2005 Release */

Replicator * __thiscall Replicator::operator+=(Replicator *this,DName *param_1)

{
  int iVar1;
  DName *this_00;
  
  if (*(int *)this != 9) {
    iVar1 = DName::isEmpty(param_1);
    if (iVar1 == 0) {
      this_00 = HeapManager::getMemory((HeapManager *)&DAT_1076cc98,8,0);
      if (this_00 == (DName *)0x0) {
        iVar1 = 0;
      }
      else {
        iVar1 = DName::DName(this_00,param_1);
      }
      if (iVar1 != 0) {
        *(int *)this = *(int *)this + 1;
        *(int *)(this + *(int *)this * 4 + 4) = iVar1;
      }
    }
  }
  return this;
}


// ==== 10725c5f DNameNode::clone

/* Library Function - Single Match
    public: class DNameNode * __thiscall DNameNode::clone(void)
   
   Library: Visual Studio 2005 Release */

DNameNode * __thiscall DNameNode::clone(DNameNode *this)

{
  pDNameNode *this_00;
  DName *pDVar1;
  DNameNode *pDVar2;
  
  this_00 = HeapManager::getMemory((HeapManager *)&DAT_1076cc98,0xc,0);
  if (this_00 == (pDNameNode *)0x0) {
    pDVar2 = (DNameNode *)0x0;
  }
  else {
    pDVar1 = HeapManager::getMemory((HeapManager *)&DAT_1076cc98,8,0);
    if (pDVar1 == (DName *)0x0) {
      pDVar1 = (DName *)0x0;
    }
    else {
      *(uint *)(pDVar1 + 4) = *(uint *)(pDVar1 + 4) & 0xfffff000;
      *(DNameNode **)pDVar1 = this;
    }
    pDVar2 = (DNameNode *)pDNameNode::pDNameNode(this_00,pDVar1);
  }
  return pDVar2;
}


// ==== 10725ca6 pcharNode::pcharNode

/* Library Function - Single Match
    public: __thiscall pcharNode::pcharNode(char const *,int)
   
   Library: Visual Studio 2005 Release */

pcharNode * __thiscall pcharNode::pcharNode(pcharNode *this,char *param_1,int param_2)

{
  char cVar1;
  char *pcVar2;
  uint unaff_EDI;
  
  *(undefined4 *)(this + 4) = 0;
  *(undefined ***)this = vftable;
  if (param_2 == 0) {
    if (param_1 == (char *)0x0) goto LAB_10725cfd;
    param_2 = 0;
    cVar1 = *param_1;
    while (cVar1 != '\0') {
      param_2 = param_2 + 1;
      cVar1 = *(char *)(param_2 + (int)param_1);
    }
    if ((char *)param_2 == (char *)0x0) goto LAB_10725cfd;
  }
  if (param_1 != (char *)0x0) {
    pcVar2 = HeapManager::getMemory((HeapManager *)&DAT_1076cc98,param_2,0);
    *(char **)(this + 8) = pcVar2;
    *(int *)(this + 0xc) = param_2;
    if (pcVar2 == (char *)0x0) {
      return this;
    }
    und_strncpy(pcVar2,(char *)param_2,unaff_EDI);
    return this;
  }
LAB_10725cfd:
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0xc) = 0;
  return this;
}


// ==== 10725d0b FUN_10725d0b

undefined4 __fastcall FUN_10725d0b(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0xc);
  if (iVar1 != 0) {
    return CONCAT31((int3)((uint)iVar1 >> 8),*(undefined1 *)(*(int *)(param_1 + 8) + -1 + iVar1));
  }
  return 0;
}


// ==== 10725d1d pcharNode::getString

/* Library Function - Single Match
    public: virtual char * __thiscall pcharNode::getString(char *,int)const 
   
   Libraries: Visual Studio 2003 Release, Visual Studio 2005 Release */

char * __thiscall pcharNode::getString(pcharNode *this,char *param_1,int param_2)

{
  char *pcVar1;
  uint unaff_retaddr;
  
  if ((int)*(char **)(this + 0xc) < param_2) {
    param_2 = (int)*(char **)(this + 0xc);
  }
  pcVar1 = (char *)0x0;
  if (((*(int *)(this + 8) != 0) && (param_1 != (char *)0x0)) && ((char *)param_2 != (char *)0x0)) {
    pcVar1 = und_strncpy(param_1,(char *)param_2,unaff_retaddr);
  }
  return pcVar1;
}


// ==== 10725d4e pDNameNode::length

/* Library Function - Single Match
    public: virtual int __thiscall pDNameNode::length(void)const 
   
   Libraries: Visual Studio 2003 Release, Visual Studio 2005 Release */

int __thiscall pDNameNode::length(pDNameNode *this)

{
  int iVar1;
  
  if (*(DName **)(this + 8) != (DName *)0x0) {
    iVar1 = DName::length(*(DName **)(this + 8));
    return iVar1;
  }
  return 0;
}


// ==== 10725d5d pDNameNode::getLastChar

/* Library Function - Single Match
    public: virtual char __thiscall pDNameNode::getLastChar(void)const 
   
   Libraries: Visual Studio 2003 Release, Visual Studio 2005 Release */

char __thiscall pDNameNode::getLastChar(pDNameNode *this)

{
  char cVar1;
  
  if (*(DName **)(this + 8) != (DName *)0x0) {
    cVar1 = DName::getLastChar(*(DName **)(this + 8));
    return cVar1;
  }
  return '\0';
}


// ==== 10725d6c pDNameNode::getString

/* Library Function - Single Match
    public: virtual char * __thiscall pDNameNode::getString(char *,int)const 
   
   Libraries: Visual Studio 2003 Release, Visual Studio 2005 Release */

char * __thiscall pDNameNode::getString(pDNameNode *this,char *param_1,int param_2)

{
  char *pcVar1;
  
  if (((*(DName **)(this + 8) != (DName *)0x0) && (param_1 != (char *)0x0)) && (param_2 != 0)) {
    pcVar1 = DName::getString(*(DName **)(this + 8),param_1,param_2);
    return pcVar1;
  }
  return (char *)0x0;
}


// ==== 10725d89 DNameStatusNode::getString

/* Library Function - Single Match
    public: virtual char * __thiscall DNameStatusNode::getString(char *,int)const 
   
   Libraries: Visual Studio 2003 Release, Visual Studio 2005 Release */

char * __thiscall DNameStatusNode::getString(DNameStatusNode *this,char *param_1,int param_2)

{
  char *pcVar1;
  uint unaff_retaddr;
  
  if ((int)*(char **)(this + 0xc) < param_2) {
    param_2 = (int)*(char **)(this + 0xc);
  }
  pcVar1 = (char *)0x0;
  if (((*(int *)(this + 8) == 2) && (param_1 != (char *)0x0)) && ((char *)param_2 != (char *)0x0)) {
    pcVar1 = und_strncpy(param_1,(char *)param_2,unaff_retaddr);
  }
  return pcVar1;
}


// ==== 10725dbc UnDecorator::UnDecorator

/* Library Function - Single Match
    public: __thiscall UnDecorator::UnDecorator(char *,char const *,int,char *
   (__cdecl*)(long),unsigned long)
   
   Library: Visual Studio 2005 Release */

UnDecorator * __thiscall
UnDecorator::UnDecorator
          (UnDecorator *this,char *param_1,char *param_2,int param_3,_func_char_ptr_long *param_4,
          ulong param_5)

{
  Replicator::Replicator((Replicator *)this);
  Replicator::Replicator((Replicator *)(this + 0x3c));
  DAT_1076ccbc = param_2;
  DAT_1076ccb8 = param_2;
  if (param_1 == (char *)0x0) {
    DAT_1076ccc0 = (char *)0x0;
    DAT_1076ccc4 = 0;
  }
  else {
    DAT_1076ccc4 = param_3 + -1;
    DAT_1076ccc0 = param_1;
  }
  DAT_1076ccc8 = param_5;
  DAT_1076ccb0 = (Replicator *)(this + 0x3c);
  DAT_1076cccc = param_4;
  DAT_1076ccac = this;
  DAT_1076ccd0 = 0;
  return this;
}


// ==== 10725e2f UnDecorator::getReturnType

/* Library Function - Single Match
    private: static class DName __cdecl UnDecorator::getReturnType(class DName *)
   
   Library: Visual Studio 2005 Release */

DName * __cdecl UnDecorator::getReturnType(DName *param_1)

{
  DName *in_stack_00000008;
  
  if (*DAT_1076ccb8 == '@') {
    DAT_1076ccb8 = DAT_1076ccb8 + 1;
    DName::DName(param_1,in_stack_00000008);
  }
  else {
    getDataType(param_1);
  }
  return param_1;
}


// ==== 10725e6d DName::operator+=

/* Library Function - Single Match
    public: class DName & __thiscall DName::operator+=(enum DNameStatus)
   
   Library: Visual Studio 2005 Release */

DName * __thiscall DName::operator+=(DName *this,DNameStatus param_1)

{
  int iVar1;
  DNameStatusNode *this_00;
  DNameNode *pDVar2;
  DNameNode *this_01;
  DName *this_02;
  
  iVar1 = isEmpty(this);
  if (((iVar1 != 0) || (param_1 == 1)) || (param_1 == 3)) {
    operator=(this_02,param_1);
    return this;
  }
  this_00 = HeapManager::getMemory((HeapManager *)&DAT_1076cc98,0x10,0);
  if (this_00 == (DNameStatusNode *)0x0) {
    pDVar2 = (DNameNode *)0x0;
  }
  else {
    pDVar2 = (DNameNode *)DNameStatusNode::DNameStatusNode(this_00,param_1);
  }
  if (pDVar2 == (DNameNode *)0x0) {
    *(undefined4 *)this = 0;
  }
  else {
    this_01 = DNameNode::clone(*(DNameNode **)this);
    *(DNameNode **)this = this_01;
    if (this_01 == (DNameNode *)0x0) goto LAB_10725ecb;
    DNameNode::operator+=(this_01,pDVar2);
  }
  if (*(int *)this != 0) {
    return this;
  }
LAB_10725ecb:
  *(uint *)(this + 4) = *(uint *)(this + 4) & 0xfffffff3 | 3;
  return this;
}


// ==== 10725ee6 DName::operator=

/* Library Function - Single Match
    public: class DName & __thiscall DName::operator=(class DName *)
   
   Library: Visual Studio 2005 Release */

DName * __thiscall DName::operator=(DName *this,DName *param_1)

{
  pDNameNode *this_00;
  int iVar1;
  
  iVar1 = (int)(*(uint *)(this + 4) << 0x1c) >> 0x1c;
  if ((iVar1 == 0) || (iVar1 == 2)) {
    if (param_1 == (DName *)0x0) {
      operator=(this,3);
    }
    else {
      *(uint *)(this + 4) = *(uint *)(this + 4) & 0xfffff70f;
      this_00 = HeapManager::getMemory((HeapManager *)&DAT_1076cc98,0xc,0);
      if (this_00 == (pDNameNode *)0x0) {
        iVar1 = 0;
      }
      else {
        iVar1 = pDNameNode::pDNameNode(this_00,param_1);
      }
      *(int *)this = iVar1;
      if (iVar1 == 0) {
        *(uint *)(this + 4) = *(uint *)(this + 4) & 0xfffffff3 | 3;
      }
    }
  }
  return this;
}


// ==== 10725f4e DName::doPchar

/* Library Function - Single Match
    private: void __thiscall DName::doPchar(char const *,int)
   
   Library: Visual Studio 2005 Release */

void __thiscall DName::doPchar(DName *this,char *param_1,int param_2)

{
  char cVar1;
  pcharNode *this_00;
  undefined4 *puVar2;
  uint uVar3;
  int iVar4;
  
  uVar3 = *(uint *)(this + 4);
  iVar4 = (int)(uVar3 << 0x1c) >> 0x1c;
  if (iVar4 == 1) {
    return;
  }
  if (iVar4 == 3) {
    return;
  }
  if (*(int *)this != 0) {
    operator=(this,3);
    return;
  }
  if ((param_1 == (char *)0x0) || (param_2 == 0)) {
    uVar3 = uVar3 & 0xfffffff1 | 1;
    goto LAB_10725feb;
  }
  if (param_2 != 0) {
    if (param_2 == 1) {
      puVar2 = HeapManager::getMemory((HeapManager *)&DAT_1076cc98,0xc,0);
      if (puVar2 == (undefined4 *)0x0) goto LAB_10725fb7;
      cVar1 = *param_1;
      puVar2[1] = 0;
      *puVar2 = charNode::vftable;
      *(char *)(puVar2 + 2) = cVar1;
    }
    else {
      this_00 = HeapManager::getMemory((HeapManager *)&DAT_1076cc98,0x10,0);
      if (this_00 == (pcharNode *)0x0) {
LAB_10725fb7:
        puVar2 = (undefined4 *)0x0;
      }
      else {
        puVar2 = (undefined4 *)pcharNode::pcharNode(this_00,param_1,param_2);
      }
    }
    *(undefined4 **)this = puVar2;
    if (puVar2 != (undefined4 *)0x0) {
      return;
    }
    uVar3 = *(uint *)(this + 4);
  }
  uVar3 = uVar3 & 0xfffffff3 | 3;
LAB_10725feb:
  *(uint *)(this + 4) = uVar3;
  return;
}


// ==== 10725ff4 DName::DName

/* Library Function - Single Match
    public: __thiscall DName::DName(char)
   
   Library: Visual Studio 2005 Release */

DName * __thiscall DName::DName(DName *this,char param_1)

{
  *(undefined4 *)this = 0;
  *(uint *)(this + 4) = *(uint *)(this + 4) & 0xfffff000;
  if (param_1 != '\0') {
    doPchar(this,&param_1,1);
  }
  return this;
}


// ==== 1072601a DName::DName

/* Library Function - Single Match
    public: __thiscall DName::DName(char const *)
   
   Library: Visual Studio 2005 Release */

DName * __thiscall DName::DName(DName *this,char *param_1)

{
  char cVar1;
  int iVar2;
  
  *(uint *)(this + 4) = *(uint *)(this + 4) & 0xfffff000;
  *(undefined4 *)this = 0;
  if (param_1 != (char *)0x0) {
    iVar2 = 0;
    cVar1 = *param_1;
    while (cVar1 != '\0') {
      iVar2 = iVar2 + 1;
      cVar1 = param_1[iVar2];
    }
    doPchar(this,param_1,iVar2);
  }
  return this;
}


// ==== 1072604b DName::DName

/* Library Function - Single Match
    public: __thiscall DName::DName(char const * &,char)
   
   Library: Visual Studio 2005 Release */

DName * __thiscall DName::DName(DName *this,char **param_1,char param_2)

{
  byte bVar1;
  char cVar2;
  char *pcVar3;
  uint uVar4;
  byte *pbVar5;
  int iVar6;
  
  *(uint *)(this + 4) = *(uint *)(this + 4) & 0xfffff000;
  uVar4 = *(uint *)(this + 4);
  iVar6 = 0;
  *(undefined4 *)this = 0;
  pcVar3 = *param_1;
  if (pcVar3 == (char *)0x0) {
LAB_107260f4:
    uVar4 = uVar4 & 0xfffffff1 | 1;
  }
  else {
    if (*pcVar3 != '\0') {
      do {
        bVar1 = **param_1;
        if (bVar1 == param_2) break;
        if (((((((bVar1 != 0x5f) && (bVar1 != 0x24)) && (bVar1 != 0x3c)) &&
              (((bVar1 != 0x3e && (bVar1 != 0x2d)) && (((char)bVar1 < 'a' || ('z' < (char)bVar1)))))
              ) && (((char)bVar1 < 'A' || ('Z' < (char)bVar1)))) &&
            (((char)bVar1 < '0' || ('9' < (char)bVar1)))) &&
           (((bVar1 < 0x80 || (bVar1 == 0xff)) && ((DAT_1076ccc8 & 0x10000) == 0)))) {
          uVar4 = *(uint *)(this + 4);
          goto LAB_107260f4;
        }
        iVar6 = iVar6 + 1;
        pbVar5 = (byte *)(*param_1 + 1);
        *param_1 = (char *)pbVar5;
      } while (*pbVar5 != 0);
      doPchar(this,pcVar3,iVar6);
      cVar2 = **param_1;
      if (cVar2 != '\0') {
        *param_1 = *param_1 + 1;
        if (cVar2 == param_2) {
          *(uint *)(this + 4) = *(uint *)(this + 4) & 0xfffffff0;
          return this;
        }
        uVar4 = *(uint *)(this + 4) & 0xfffffff3 | 3;
        *(undefined4 *)this = 0;
        goto LAB_107260fa;
      }
      uVar4 = *(uint *)(this + 4);
      if ((uVar4 & 0xf) != 0) {
        return this;
      }
    }
    uVar4 = uVar4 & 0xfffffff2 | 2;
  }
LAB_107260fa:
  *(uint *)(this + 4) = uVar4;
  return this;
}


// ==== 1072611b DName::DName

/* Library Function - Single Match
    public: __thiscall DName::DName(unsigned __int64)
   
   Library: Visual Studio 2005 Release */

void __thiscall DName::DName(DName *this,__uint64 param_1)

{
  char extraout_CL;
  char *pcVar1;
  __uint64 _Var2;
  char local_d [5];
  uint local_8;
  
  local_8 = DAT_10765c70 ^ (uint)&stack0xfffffffc;
  *(undefined4 *)this = 0;
  *(uint *)(this + 4) = *(uint *)(this + 4) & 0xfffff000;
  pcVar1 = local_d + 1;
  local_d[1] = 0;
  _Var2 = param_1;
  do {
    param_1._4_4_ = (uint)(_Var2 >> 0x20);
    param_1._0_4_ = (uint)_Var2;
    pcVar1 = pcVar1 + -1;
    _Var2 = __aulldvrm((uint)param_1,param_1._4_4_,10,0);
    *pcVar1 = extraout_CL + '0';
  } while (_Var2 != 0);
  doPchar(this,pcVar1,(int)(local_d + (1 - (int)pcVar1)));
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


// ==== 10726184 FUN_10726184

void __thiscall FUN_10726184(void *this,uint param_1,int param_2)

{
  bool bVar1;
  char extraout_CL;
  char *pcVar2;
  char *pcVar3;
  bool bVar4;
  longlong lVar5;
  char local_d [5];
  uint local_8;
  
  local_8 = DAT_10765c70 ^ (uint)&stack0xfffffffc;
  *(uint *)((int)this + 4) = *(uint *)((int)this + 4) & 0xfffff000;
  *(undefined4 *)this = 0;
  local_d[2] = 0;
  bVar1 = false;
  if ((param_2 < 1) && (param_2 < 0)) {
    bVar4 = param_1 != 0;
    param_1 = -param_1;
    bVar1 = true;
    param_2 = -(param_2 + (uint)bVar4);
  }
  lVar5 = CONCAT44(param_2,param_1);
  pcVar3 = local_d + 2;
  do {
    pcVar2 = pcVar3;
    param_1 = (uint)lVar5;
    pcVar3 = pcVar2 + -1;
    lVar5 = __aulldvrm(param_1,(uint)((ulonglong)lVar5 >> 0x20),10,0);
    *pcVar3 = extraout_CL + '0';
  } while (lVar5 != 0);
  if (bVar1) {
    pcVar3 = pcVar2 + -2;
    *pcVar3 = '-';
  }
  DName::doPchar(this,pcVar3,(int)(local_d + (2 - (int)pcVar3)));
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


// ==== 1072621a DName::operator+

/* Library Function - Single Match
    public: class DName __thiscall DName::operator+(enum DNameStatus)const 
   
   Library: Visual Studio 2005 Release */

DNameStatus __thiscall DName::operator+(DName *this,DNameStatus param_1)

{
  int iVar1;
  DName *this_00;
  DNameStatus in_stack_00000008;
  
  DName((DName *)param_1,this);
  iVar1 = isEmpty((DName *)param_1);
  if (iVar1 == 0) {
    operator+=(this_00,in_stack_00000008);
  }
  else {
    operator=(this_00,in_stack_00000008);
  }
  return param_1;
}


// ==== 10726248 DName::operator+=

/* Library Function - Single Match
    public: class DName & __thiscall DName::operator+=(class DName const &)
   
   Library: Visual Studio 2005 Release */

DName * __thiscall DName::operator+=(DName *this,DName *param_1)

{
  int iVar1;
  DNameNode *this_00;
  DName *this_01;
  
  iVar1 = isEmpty(param_1);
  if (iVar1 == 0) {
    iVar1 = isEmpty(this);
    if (iVar1 == 0) {
      this_00 = DNameNode::clone(*(DNameNode **)this);
      *(DNameNode **)this = this_00;
      if (this_00 == (DNameNode *)0x0) {
        *(uint *)(this + 4) = *(uint *)(this + 4) & 0xfffffff3 | 3;
      }
      else {
        DNameNode::operator+=(this_00,*(DNameNode **)param_1);
      }
    }
    else {
      operator=(this_01,param_1);
    }
  }
  else {
    operator+=(this,(*(int *)(param_1 + 4) << 0x1c) >> 0x1c);
  }
  return this;
}


// ==== 107262aa FUN_107262aa

DName * __thiscall FUN_107262aa(void *this,DName *param_1)

{
  int iVar1;
  DNameStatus DVar2;
  pDNameNode *this_00;
  DNameNode *pDVar3;
  DNameNode *this_01;
  DName *this_02;
  
  if (param_1 == (DName *)0x0) {
    return this;
  }
  iVar1 = DName::isEmpty(this);
  if (iVar1 != 0) {
    DName::operator=(this_02,param_1);
    return this;
  }
  DVar2 = (*(int *)(param_1 + 4) << 0x1c) >> 0x1c;
  if ((DVar2 != 0) && (DVar2 != 2)) {
    DName::operator+=(this_02,DVar2);
    return this;
  }
  this_00 = HeapManager::getMemory((HeapManager *)&DAT_1076cc98,0xc,0);
  if (this_00 == (pDNameNode *)0x0) {
    pDVar3 = (DNameNode *)0x0;
  }
  else {
    pDVar3 = (DNameNode *)pDNameNode::pDNameNode(this_00,param_1);
  }
  if (pDVar3 == (DNameNode *)0x0) {
    *(undefined4 *)this = 0;
  }
  else {
    this_01 = DNameNode::clone(*(DNameNode **)this);
    *(DNameNode **)this = this_01;
    if (this_01 == (DNameNode *)0x0) goto LAB_10726322;
    DNameNode::operator+=(this_01,pDVar3);
  }
  if (*(int *)this != 0) {
    return this;
  }
LAB_10726322:
  *(uint *)((int)this + 4) = *(uint *)((int)this + 4) & 0xfffffff3 | 3;
  return this;
}


// ==== 10726335 DName::operator=

/* Library Function - Single Match
    public: class DName & __thiscall DName::operator=(char)
   
   Library: Visual Studio 2005 Release */

DName * __thiscall DName::operator=(DName *this,char param_1)

{
  *(uint *)(this + 4) = *(uint *)(this + 4) & 0xfffff70f;
  doPchar(this,&param_1,1);
  return this;
}


// ==== 10726351 DName::operator=

/* Library Function - Single Match
    public: class DName & __thiscall DName::operator=(char const *)
   
   Library: Visual Studio 2005 Release */

DName * __thiscall DName::operator=(DName *this,char *param_1)

{
  char cVar1;
  int iVar2;
  
  *(uint *)(this + 4) = *(uint *)(this + 4) & 0xfffff70f;
  iVar2 = 0;
  cVar1 = *param_1;
  while (cVar1 != '\0') {
    iVar2 = iVar2 + 1;
    cVar1 = param_1[iVar2];
  }
  doPchar(this,param_1,iVar2);
  return this;
}


// ==== 1072637b UnDecorator::getCallingConvention

/* Library Function - Single Match
    private: static class DName __cdecl UnDecorator::getCallingConvention(void)
   
   Library: Visual Studio 2005 Release */

DName * __cdecl UnDecorator::getCallingConvention(void)

{
  uint uVar1;
  char *pcVar2;
  uint in_ECX;
  DName *in_stack_00000004;
  Tokens TVar3;
  DNameStatus DVar4;
  undefined4 local_c;
  uint local_8;
  
  if (*DAT_1076ccb8 == '\0') {
    DVar4 = 2;
  }
  else {
    uVar1 = (int)*DAT_1076ccb8 - 0x41;
    DAT_1076ccb8 = DAT_1076ccb8 + 1;
    if (uVar1 < 0xd) {
      local_c = 0;
      local_8 = in_ECX & 0xfffff000;
      if ((~(DAT_1076ccc8 >> 1) & 1) != 0) {
        uVar1 = uVar1 & 0xfffffffe;
        if (uVar1 == 0) {
          TVar3 = 1;
        }
        else if (uVar1 == 2) {
          TVar3 = 2;
        }
        else if (uVar1 == 4) {
          TVar3 = 4;
        }
        else if (uVar1 == 6) {
          TVar3 = 3;
        }
        else if (uVar1 == 8) {
          TVar3 = 5;
        }
        else {
          if (uVar1 != 0xc) goto LAB_10726400;
          TVar3 = 6;
        }
        pcVar2 = UScore(TVar3);
        DName::operator=((DName *)&local_c,pcVar2);
      }
LAB_10726400:
      DName::DName(in_stack_00000004,(DName *)&local_c);
      return in_stack_00000004;
    }
    DVar4 = 1;
  }
  DName::DName(in_stack_00000004,DVar4);
  return in_stack_00000004;
}


// ==== 10726421 UnDecorator::getVCallThunkType

/* Library Function - Single Match
    private: static class DName __cdecl UnDecorator::getVCallThunkType(void)
   
   Library: Visual Studio 2005 Release */

DName * __cdecl UnDecorator::getVCallThunkType(void)

{
  DName *in_stack_00000004;
  DNameStatus DVar1;
  
  if (*DAT_1076ccb8 == '\0') {
    DVar1 = 2;
  }
  else {
    if (*DAT_1076ccb8 == 'A') {
      DAT_1076ccb8 = DAT_1076ccb8 + 1;
      DName::DName(in_stack_00000004,"{flat}");
      return in_stack_00000004;
    }
    DVar1 = 1;
  }
  DName::DName(in_stack_00000004,DVar1);
  return in_stack_00000004;
}


// ==== 10726458 DName::operator+

/* Library Function - Single Match
    public: class DName __thiscall DName::operator+(class DName const &)const 
   
   Library: Visual Studio 2005 Release */

DName * __thiscall DName::operator+(DName *this,DName *param_1)

{
  int iVar1;
  DName *this_00;
  DName *extraout_ECX;
  DName *in_stack_00000008;
  
  DName(param_1,this);
  iVar1 = isEmpty(param_1);
  if (iVar1 == 0) {
    iVar1 = isEmpty(in_stack_00000008);
    if (iVar1 == 0) {
      operator+=(param_1,extraout_ECX);
    }
    else {
      operator+=(param_1,(*(int *)(extraout_ECX + 4) << 0x1c) >> 0x1c);
    }
  }
  else {
    operator=(this_00,in_stack_00000008);
  }
  return param_1;
}


// ==== 107264a9 FUN_107264a9

DName * __thiscall FUN_107264a9(void *this,DName *param_1,DName *param_2)

{
  int iVar1;
  DName *this_00;
  
  DName::DName(param_1,this);
  iVar1 = DName::isEmpty(param_1);
  if (iVar1 == 0) {
    FUN_107262aa(this_00,param_2);
  }
  else {
    DName::operator=(this_00,param_2);
  }
  return param_1;
}


// ==== 107264d7 DName::operator+=

/* Library Function - Single Match
    public: class DName & __thiscall DName::operator+=(char)
   
   Library: Visual Studio 2005 Release */

DName * __thiscall DName::operator+=(DName *this,char param_1)

{
  int iVar1;
  DNameNode *pDVar2;
  DName *this_00;
  
  if (param_1 != '\0') {
    iVar1 = isEmpty(this);
    if (iVar1 == 0) {
      pDVar2 = DNameNode::clone(*(DNameNode **)this);
      *(DNameNode **)this = pDVar2;
      if (pDVar2 == (DNameNode *)0x0) {
        *(uint *)(this + 4) = *(uint *)(this + 4) & 0xfffffff3 | 3;
      }
      else {
        pDVar2 = HeapManager::getMemory((HeapManager *)&DAT_1076cc98,0xc,0);
        if (pDVar2 == (DNameNode *)0x0) {
          pDVar2 = (DNameNode *)0x0;
        }
        else {
          *(undefined4 *)(pDVar2 + 4) = 0;
          *(undefined ***)pDVar2 = charNode::vftable;
          pDVar2[8] = (DNameNode)param_1;
        }
        DNameNode::operator+=(*(DNameNode **)this,pDVar2);
      }
    }
    else {
      operator=(this_00,param_1);
    }
  }
  return this;
}


// ==== 10726541 DName::operator+=

/* Library Function - Single Match
    public: class DName & __thiscall DName::operator+=(char const *)
   
   Library: Visual Studio 2005 Release */

DName * __thiscall DName::operator+=(DName *this,char *param_1)

{
  int iVar1;
  DNameNode *pDVar2;
  pcharNode *this_00;
  DName *this_01;
  
  if ((param_1 != (char *)0x0) && (*param_1 != '\0')) {
    iVar1 = isEmpty(this);
    if (iVar1 == 0) {
      pDVar2 = DNameNode::clone(*(DNameNode **)this);
      *(DNameNode **)this = pDVar2;
      if (pDVar2 == (DNameNode *)0x0) {
        *(uint *)(this + 4) = *(uint *)(this + 4) & 0xfffffff3 | 3;
      }
      else {
        this_00 = HeapManager::getMemory((HeapManager *)&DAT_1076cc98,0x10,0);
        if (this_00 == (pcharNode *)0x0) {
          pDVar2 = (DNameNode *)0x0;
        }
        else {
          pDVar2 = (DNameNode *)pcharNode::pcharNode(this_00,param_1,0);
        }
        DNameNode::operator+=(*(DNameNode **)this,pDVar2);
      }
    }
    else {
      operator=(this_01,param_1);
    }
  }
  return this;
}


// ==== 107265ad UnDecorator::getArgumentList

/* Library Function - Single Match
    private: static class DName __cdecl UnDecorator::getArgumentList(void)
   
   Library: Visual Studio 2005 Release */

DName * __cdecl UnDecorator::getArgumentList(void)

{
  char *pcVar1;
  DName *pDVar2;
  uint uVar3;
  DName *in_stack_00000004;
  DName local_18 [8];
  undefined4 local_10;
  uint local_c;
  int local_8;
  
  *(undefined4 *)in_stack_00000004 = 0;
  *(uint *)(in_stack_00000004 + 4) = *(uint *)(in_stack_00000004 + 4) & 0xfffff000;
  local_8 = 1;
  if ((*(uint *)(in_stack_00000004 + 4) & 0xf) == 0) {
    do {
      if (*DAT_1076ccb8 == '@') {
        return in_stack_00000004;
      }
      if (*DAT_1076ccb8 == 'Z') {
        return in_stack_00000004;
      }
      if (local_8 == 0) {
        DName::operator+=(in_stack_00000004,',');
      }
      else {
        local_8 = 0;
      }
      pcVar1 = DAT_1076ccb8;
      if (*DAT_1076ccb8 == '\0') {
        DName::operator+=(in_stack_00000004,2);
        return in_stack_00000004;
      }
      uVar3 = (int)*DAT_1076ccb8 - 0x30;
      if (uVar3 < 10) {
        DAT_1076ccb8 = DAT_1076ccb8 + 1;
        pDVar2 = Replicator::operator[](DAT_1076ccac,uVar3);
      }
      else {
        local_10 = 0;
        local_c = local_c & 0xfffff000;
        getPrimaryDataType(local_18);
        if ((1 < (int)DAT_1076ccb8 - (int)pcVar1) && (*(int *)DAT_1076ccac != 9)) {
          Replicator::operator+=(DAT_1076ccac,local_18);
        }
        pDVar2 = local_18;
      }
      DName::operator+=(in_stack_00000004,pDVar2);
    } while (((byte)in_stack_00000004[4] & 0xf) == 0);
  }
  return in_stack_00000004;
}


// ==== 1072668d UnDecorator::getVdispMapType

/* Library Function - Single Match
    private: static class DName __cdecl UnDecorator::getVdispMapType(class DName const &)
   
   Library: Visual Studio 2005 Release */

DName * __cdecl UnDecorator::getVdispMapType(DName *param_1)

{
  DName *pDVar1;
  DName *in_stack_00000008;
  
  DName::DName(param_1,in_stack_00000008);
  DName::operator+=(param_1,"{for ");
  pDVar1 = (DName *)getScope();
  DName::operator+=(param_1,pDVar1);
  DName::operator+=(param_1,'}');
  if (*DAT_1076ccb8 == '@') {
    DAT_1076ccb8 = DAT_1076ccb8 + 1;
  }
  return param_1;
}


// ==== 107266dc operator+

/* Library Function - Single Match
    class DName __cdecl operator+(char,class DName const &)
   
   Library: Visual Studio 2005 Release */

DName * __cdecl operator+(char param_1,DName *param_2)

{
  DName *this;
  undefined3 in_stack_00000005;
  DName *pDVar1;
  DName local_c [8];
  
  pDVar1 = _param_1;
  this = (DName *)DName::DName(local_c,(char)param_2);
  DName::operator+(this,pDVar1);
  return _param_1;
}


// ==== 107266fe operator+

/* Library Function - Single Match
    class DName __cdecl operator+(enum DNameStatus,class DName const &)
   
   Library: Visual Studio 2005 Release */

DNameStatus __cdecl operator+(DNameStatus param_1,DName *param_2)

{
  DName *this;
  DName *pDVar1;
  DName local_c [8];
  
  pDVar1 = (DName *)param_1;
  this = (DName *)DName::DName(local_c,(DNameStatus)param_2);
  DName::operator+(this,pDVar1);
  return param_1;
}


// ==== 10726720 operator+

/* Library Function - Single Match
    class DName __cdecl operator+(char const *,class DName const &)
   
   Library: Visual Studio 2005 Release */

char * __cdecl operator+(char *param_1,DName *param_2)

{
  DName *this;
  DName *pDVar1;
  DName local_c [8];
  
  pDVar1 = (DName *)param_1;
  this = (DName *)DName::DName(local_c,(char *)param_2);
  DName::operator+(this,pDVar1);
  return param_1;
}


// ==== 10726742 DName::operator+

/* Library Function - Single Match
    public: class DName __thiscall DName::operator+(char)const 
   
   Library: Visual Studio 2005 Release */

DName * __thiscall DName::operator+(DName *this,char param_1)

{
  int iVar1;
  DName *this_00;
  undefined3 in_stack_00000005;
  char in_stack_00000008;
  
  DName(_param_1,this);
  iVar1 = isEmpty(_param_1);
  if (iVar1 == 0) {
    operator+=(this_00,in_stack_00000008);
  }
  else {
    operator=(this_00,in_stack_00000008);
  }
  return _param_1;
}


// ==== 10726770 DName::operator+

/* Library Function - Single Match
    public: class DName __thiscall DName::operator+(char const *)const 
   
   Library: Visual Studio 2005 Release */

char * __thiscall DName::operator+(DName *this,char *param_1)

{
  int iVar1;
  DName *this_00;
  char *in_stack_00000008;
  
  DName((DName *)param_1,this);
  iVar1 = isEmpty((DName *)param_1);
  if (iVar1 == 0) {
    operator+=(this_00,in_stack_00000008);
  }
  else {
    operator=(this_00,in_stack_00000008);
  }
  return param_1;
}


// ==== 1072679e UnDecorator::getDimension

/* Library Function - Single Match
    private: static class DName __cdecl UnDecorator::getDimension(bool)
   
   Library: Visual Studio 2005 Release */

DName * __cdecl UnDecorator::getDimension(bool param_1)

{
  __uint64 _Var1;
  char *pcVar2;
  char cVar3;
  DName *pDVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  undefined3 in_stack_00000005;
  char in_stack_00000008;
  DNameStatus DVar8;
  DName local_20 [8];
  char local_18 [8];
  DName local_10 [4];
  int local_c;
  DName *local_8;
  
  local_8 = (DName *)0x0;
  if (*DAT_1076ccb8 == 'Q') {
    DAT_1076ccb8 = DAT_1076ccb8 + 1;
    local_8 = (DName *)0x10752818;
  }
  cVar3 = *DAT_1076ccb8;
  if (cVar3 == '\0') {
    DName::DName(_param_1,2);
    return _param_1;
  }
  if (('/' < cVar3) && (cVar3 < ':')) {
    cVar3 = *DAT_1076ccb8;
    DAT_1076ccb8 = DAT_1076ccb8 + 1;
    if (local_8 == (DName *)0x0) {
      pDVar4 = (DName *)DName::DName(local_20,(longlong)(cVar3 + -0x2f));
    }
    else {
      DName::DName(local_10,(longlong)(cVar3 + -0x2f));
      pDVar4 = (DName *)operator+(local_18,local_8);
    }
    DName::DName(_param_1,pDVar4);
    return _param_1;
  }
  _Var1 = 0;
  while( true ) {
    pcVar2 = DAT_1076ccb8;
    iVar6 = (int)(_Var1 >> 0x20);
    uVar5 = (uint)_Var1;
    if (cVar3 == '@') break;
    if (cVar3 == '\0') {
      DVar8 = 2;
      goto LAB_1072688f;
    }
    if ((cVar3 < 'A') || ('P' < cVar3)) goto LAB_10726899;
    local_c = cVar3 + -0x41 >> 0x1f;
    lVar7 = __allmul(uVar5,iVar6,0x10,0);
    _Var1 = lVar7 + CONCAT44(local_c,cVar3 + -0x41);
    DAT_1076ccb8 = pcVar2 + 1;
    cVar3 = *DAT_1076ccb8;
  }
  cVar3 = *DAT_1076ccb8;
  DAT_1076ccb8 = DAT_1076ccb8 + 1;
  if (cVar3 != '@') {
LAB_10726899:
    DVar8 = 1;
LAB_1072688f:
    DName::DName(_param_1,DVar8);
    return _param_1;
  }
  if (in_stack_00000008 == '\0') {
    if (local_8 == (DName *)0x0) {
      pDVar4 = (DName *)DName::DName(local_10,_Var1);
      goto LAB_107268ce;
    }
    DName::DName(local_20,_Var1);
  }
  else {
    if (local_8 == (DName *)0x0) {
      pDVar4 = (DName *)FUN_10726184(local_10,uVar5,iVar6);
      goto LAB_107268ce;
    }
    FUN_10726184(local_20,uVar5,iVar6);
  }
  pDVar4 = (DName *)operator+(local_18,local_8);
LAB_107268ce:
  DName::DName(_param_1,pDVar4);
  return _param_1;
}


// ==== 107268df UnDecorator::getEnumType

/* Library Function - Single Match
    private: static class DName __cdecl UnDecorator::getEnumType(void)
   
   Library: Visual Studio 2005 Release */

DName * __cdecl UnDecorator::getEnumType(void)

{
  char cVar1;
  DName *pDVar2;
  DName *in_stack_00000004;
  char *pcVar3;
  DNameStatus DVar4;
  char local_14 [8];
  undefined4 local_c;
  uint local_8;
  
  local_c = 0;
  local_8 = local_8 & 0xfffff000;
  if (*DAT_1076ccb8 == '\0') {
    DVar4 = 2;
LAB_10726984:
    DName::DName(in_stack_00000004,DVar4);
    return in_stack_00000004;
  }
  switch(*DAT_1076ccb8) {
  case '0':
  case '1':
    pcVar3 = "char ";
    break;
  case '2':
  case '3':
    pcVar3 = "short ";
    break;
  case '4':
    goto switchD_1072690a_caseD_34;
  case '5':
    pcVar3 = "int ";
    break;
  case '6':
  case '7':
    pcVar3 = "long ";
    break;
  default:
    DVar4 = 1;
    goto LAB_10726984;
  }
  DName::operator=((DName *)&local_c,pcVar3);
switchD_1072690a_caseD_34:
  cVar1 = *DAT_1076ccb8;
  DAT_1076ccb8 = DAT_1076ccb8 + 1;
  if ((((cVar1 == '1') || (cVar1 == '3')) || (cVar1 == '5')) || (cVar1 == '7')) {
    pDVar2 = (DName *)operator+(local_14,(DName *)"unsigned ");
    DName::operator=((DName *)&local_c,pDVar2);
  }
  DName::DName(in_stack_00000004,(DName *)&local_c);
  return in_stack_00000004;
}


// ==== 107269b3 UnDecorator::getArgumentTypes

/* Library Function - Single Match
    private: static class DName __cdecl UnDecorator::getArgumentTypes(void)
   
   Library: Visual Studio 2005 Release */

DName * __cdecl UnDecorator::getArgumentTypes(void)

{
  char cVar1;
  DName *pDVar2;
  char *pcVar3;
  DName *in_stack_00000004;
  char local_14 [8];
  DName local_c [4];
  byte local_8;
  
  if (*DAT_1076ccb8 == 'X') {
    pcVar3 = "void";
LAB_10726a6a:
    DAT_1076ccb8 = DAT_1076ccb8 + 1;
    DName::DName(in_stack_00000004,pcVar3);
    return in_stack_00000004;
  }
  if (*DAT_1076ccb8 == 'Z') {
    pcVar3 = "...";
    if ((~(DAT_1076ccc8 >> 0x12) & 1) == 0) {
      pcVar3 = "<ellipsis>";
    }
    goto LAB_10726a6a;
  }
  getArgumentList();
  if (((local_8 & 0xf) == 0) && (cVar1 = *DAT_1076ccb8, cVar1 != '\0')) {
    if (cVar1 != '@') {
      if (cVar1 != 'Z') {
        DName::DName(in_stack_00000004,1);
        return in_stack_00000004;
      }
      DAT_1076ccb8 = DAT_1076ccb8 + 1;
      pDVar2 = (DName *)DName::operator+(local_c,local_14);
      goto LAB_10726a28;
    }
    DAT_1076ccb8 = DAT_1076ccb8 + 1;
  }
  pDVar2 = local_c;
LAB_10726a28:
  DName::DName(in_stack_00000004,pDVar2);
  return in_stack_00000004;
}


// ==== 10726a77 UnDecorator::getThrowTypes

/* Library Function - Single Match
    private: static class DName __cdecl UnDecorator::getThrowTypes(void)
   
   Library: Visual Studio 2005 Release */

DName * __cdecl UnDecorator::getThrowTypes(void)

{
  DName *pDVar1;
  DName *this;
  DName *in_stack_00000004;
  char *pcVar2;
  char cVar3;
  char local_14 [8];
  undefined4 local_c;
  uint local_8;
  
  if (*DAT_1076ccb8 == '\0') {
    pcVar2 = local_14;
    pDVar1 = in_stack_00000004;
    this = (DName *)DName::DName((DName *)&local_c," throw(");
    cVar3 = (char)pDVar1;
    pDVar1 = (DName *)DName::operator+(this,(DNameStatus)pcVar2);
  }
  else {
    if (*DAT_1076ccb8 == 'Z') {
      DAT_1076ccb8 = DAT_1076ccb8 + 1;
      local_c = 0;
      local_8 = local_8 & 0xfffff000;
      DName::DName(in_stack_00000004,(DName *)&local_c);
      return in_stack_00000004;
    }
    pDVar1 = in_stack_00000004;
    getArgumentTypes();
    cVar3 = (char)pDVar1;
    pDVar1 = (DName *)operator+(local_14,(DName *)" throw(");
  }
  DName::operator+(pDVar1,cVar3);
  return in_stack_00000004;
}


// ==== 10726af5 UnDecorator::getExtendedDataIndirectType

/* Library Function - Single Match
    private: static class DName __cdecl UnDecorator::getExtendedDataIndirectType(char &,bool &,int)
   
   Library: Visual Studio 2005 Release */

char * __cdecl UnDecorator::getExtendedDataIndirectType(char *param_1,bool *param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  DName *pDVar3;
  char *pcVar4;
  int in_stack_00000010;
  undefined1 local_2c [8];
  undefined1 local_24 [8];
  DName local_1c [8];
  DName local_14 [8];
  undefined4 local_c;
  uint local_8;
  
  local_c = 0;
  local_8 = local_8 & 0xfffff000;
  pcVar4 = (char *)((int)DAT_1076ccb8 + 1);
  iVar2 = (int)*pcVar4;
  if (iVar2 == 0x41) {
    DAT_1076ccb8 = pcVar4;
    if (in_stack_00000010 == 0) {
      *param_2 = (bool)(((*param_2 != true) - 1U & 199) + 0x5e);
    }
  }
  else if (iVar2 == 0x42) {
    DAT_1076ccb8 = pcVar4;
    *(undefined1 *)param_3 = 1;
    DName::operator=((DName *)&local_c,'>');
  }
  else {
    if (iVar2 != 0x43) {
      uVar1 = (iVar2 + -0x30) * 0x10 + -0x30 + (int)*(char *)((int)DAT_1076ccb8 + 2);
      DAT_1076ccb8 = (char *)((int)DAT_1076ccb8 + 3);
      if (1 < uVar1) {
        DName::operator=((DName *)&local_c,',');
        DName::DName(local_14,(ulonglong)uVar1);
        pDVar3 = (DName *)DName::operator+((DName *)&local_c,local_1c);
        DName::operator=((DName *)&local_c,pDVar3);
      }
      pDVar3 = (DName *)DName::operator+((DName *)&local_c,(char)local_24);
      DName::operator=((DName *)&local_c,pDVar3);
      if (*DAT_1076ccb8 == '$') {
        DAT_1076ccb8 = DAT_1076ccb8 + 1;
      }
      else {
        pDVar3 = (DName *)DName::operator+((DName *)&local_c,(char)local_2c);
        DName::operator=((DName *)&local_c,pDVar3);
      }
      DAT_1076ccb8 = DAT_1076ccb8 + 1;
      local_8 = local_8 | 0x400;
      DName::DName((DName *)param_1,(DName *)&local_c);
      return param_1;
    }
    DAT_1076ccb8 = pcVar4;
    *param_2 = true;
  }
  DAT_1076ccb8 = DAT_1076ccb8 + 1;
  param_1[0] = '\0';
  param_1[1] = '\0';
  param_1[2] = '\0';
  param_1[3] = '\0';
  *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xfffff000;
  return param_1;
}


// ==== 10726c1a UnDecorator::getArrayType

/* Library Function - Single Match
    private: static class DName __cdecl UnDecorator::getArrayType(class DName const &)
   
   Library: Visual Studio 2005 Release */

DName * __cdecl UnDecorator::getArrayType(DName *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  DName *pDVar3;
  DName *pDVar4;
  DName *extraout_ECX;
  int iVar5;
  DName *in_stack_00000008;
  char cVar6;
  DName local_2c [8];
  undefined4 local_24 [2];
  DName local_1c [8];
  DName local_14 [4];
  uint local_10;
  undefined4 local_c;
  uint local_8;
  
  if (*DAT_1076ccb8 == '\0') {
    iVar5 = DName::isEmpty(in_stack_00000008);
    cVar6 = (char)local_2c;
    puVar2 = local_24;
    if (iVar5 == 0) {
      pDVar3 = local_1c;
      pDVar4 = (DName *)operator+((char)local_14,(DName *)0x28);
      pDVar3 = (DName *)DName::operator+(pDVar4,(char *)pDVar3);
      goto LAB_10726c56;
    }
  }
  else {
    iVar1 = getNumberOfDimensions();
    iVar5 = iVar1;
    if (iVar1 < 0) {
      iVar5 = 0;
    }
    if (0 < iVar1) {
      local_c = 0;
      local_8 = local_8 & 0xfffff000;
      if (((byte)in_stack_00000008[4] & 0x80) != 0) {
        DName::operator+=((DName *)&local_c,"[]");
      }
      do {
        cVar6 = (char)local_1c;
        iVar5 = iVar5 + -1;
        getDimension(SUB41(local_24,0));
        pDVar3 = (DName *)operator+((char)local_2c,(DName *)0x5b);
        pDVar3 = (DName *)DName::operator+(pDVar3,cVar6);
        DName::operator+=((DName *)&local_c,pDVar3);
      } while (iVar5 != 0);
      iVar5 = DName::isEmpty(in_stack_00000008);
      if (iVar5 == 0) {
        pDVar3 = local_2c;
        pDVar4 = extraout_ECX;
        if (((byte)in_stack_00000008[4] & 0x80) == 0) {
          cVar6 = (char)local_24;
          pDVar4 = (DName *)operator+((char)local_1c,(DName *)0x28);
          pDVar4 = (DName *)DName::operator+(pDVar4,cVar6);
        }
        pDVar3 = (DName *)DName::operator+(pDVar4,pDVar3);
        DName::operator=((DName *)&local_c,pDVar3);
      }
      getPrimaryDataType(local_14);
      local_10 = local_10 | 0x80;
      DName::DName(param_1,local_14);
      return param_1;
    }
    cVar6 = (char)local_14;
    puVar2 = &local_c;
  }
  pDVar3 = (DName *)DName::DName(local_1c,'[');
LAB_10726c56:
  pDVar3 = (DName *)DName::operator+(pDVar3,(DNameStatus)puVar2);
  pDVar3 = (DName *)DName::operator+(pDVar3,cVar6);
  FUN_10729cf3(param_1,pDVar3);
  return param_1;
}


// ==== 10726d79 UnDecorator::getLexicalFrame

/* Library Function - Single Match
    private: static class DName __cdecl UnDecorator::getLexicalFrame(void)
   
   Library: Visual Studio 2005 Release */

undefined4 __cdecl UnDecorator::getLexicalFrame(void)

{
  DName *this;
  undefined4 in_stack_00000004;
  char cVar1;
  undefined4 uVar2;
  
  uVar2 = in_stack_00000004;
  getDimension(true);
  cVar1 = (char)uVar2;
  this = (DName *)operator+(-0x14,(DName *)0x60);
  DName::operator+(this,cVar1);
  return in_stack_00000004;
}


// ==== 10726de0 UnDecorator::getVfTableType

/* Library Function - Single Match
    private: static class DName __cdecl UnDecorator::getVfTableType(class DName const &)
   
   Library: Visual Studio 2005 Release */

DName * __cdecl UnDecorator::getVfTableType(DName *param_1)

{
  int iVar1;
  DName *this;
  DName *pDVar2;
  DName *this_00;
  DName *extraout_ECX;
  DName *extraout_ECX_00;
  DName *this_01;
  char *extraout_EDX;
  DName *in_stack_00000008;
  char cVar3;
  char *pcVar4;
  undefined1 local_1c [8];
  DName local_14 [8];
  DName local_c [8];
  
  DName::DName(param_1,in_stack_00000008);
  iVar1 = DName::isValid(param_1);
  if ((iVar1 == 0) || (*DAT_1076ccb8 == '\0')) {
    iVar1 = DName::isValid(this_00);
    if (iVar1 != 0) {
      pDVar2 = (DName *)operator+((DNameStatus)local_1c,(DName *)0x2);
      DName::operator=(param_1,pDVar2);
    }
  }
  else {
    getDataIndirectType();
    pDVar2 = local_14;
    this = (DName *)DName::operator+(local_c,(char)local_1c);
    pDVar2 = (DName *)DName::operator+(this,pDVar2);
    DName::operator=(param_1,pDVar2);
    iVar1 = DName::isValid(param_1);
    if (iVar1 != 0) {
      if (*DAT_1076ccb8 != '@') {
        pcVar4 = "{for ";
        pDVar2 = extraout_ECX;
        do {
          DName::operator+=(pDVar2,pcVar4);
          do {
            iVar1 = DName::isValid(param_1);
            if (((iVar1 == 0) || (*DAT_1076ccb8 == '\0')) || (*DAT_1076ccb8 == '@')) {
              iVar1 = DName::isValid(param_1);
              if (iVar1 != 0) {
                if (*DAT_1076ccb8 == '\0') {
                  DName::operator+=(this_01,2);
                }
                DName::operator+=(param_1,'}');
              }
              if (*DAT_1076ccb8 != '@') {
                return param_1;
              }
              goto LAB_10726f03;
            }
            cVar3 = (char)local_1c;
            getScope();
            pDVar2 = (DName *)operator+((char)local_c,(DName *)0x60);
            pDVar2 = (DName *)DName::operator+(pDVar2,cVar3);
            DName::operator+=(param_1,pDVar2);
            if (*DAT_1076ccb8 == '@') {
              DAT_1076ccb8 = DAT_1076ccb8 + 1;
            }
            iVar1 = DName::isValid(param_1);
          } while ((iVar1 == 0) || (*extraout_EDX == '@'));
          pcVar4 = "s ";
          pDVar2 = extraout_ECX_00;
        } while( true );
      }
LAB_10726f03:
      DAT_1076ccb8 = DAT_1076ccb8 + 1;
    }
  }
  return param_1;
}


// ==== 10726f30 UnDecorator::getStringEncoding

/* Library Function - Single Match
    private: static class DName __cdecl UnDecorator::getStringEncoding(char *,int)
   
   Library: Visual Studio 2005 Release */

char * __cdecl UnDecorator::getStringEncoding(char *param_1,int param_2)

{
  char *pcVar1;
  char cVar2;
  DNameStatus DVar3;
  undefined1 local_14 [8];
  DName local_c [8];
  
  DName::DName(local_c,(char *)param_2);
  pcVar1 = DAT_1076ccb8;
  cVar2 = *DAT_1076ccb8;
  DAT_1076ccb8 = DAT_1076ccb8 + 1;
  if ((cVar2 == '@') && (cVar2 = *DAT_1076ccb8, DAT_1076ccb8 = pcVar1 + 2, cVar2 == '_')) {
    DAT_1076ccb8 = pcVar1 + 3;
    getDimension(SUB41(local_14,0));
    getDimension(SUB41(local_14,0));
    cVar2 = *DAT_1076ccb8;
    if (cVar2 != '\0') {
      do {
        if (cVar2 == '@') break;
        DAT_1076ccb8 = DAT_1076ccb8 + 1;
        cVar2 = *DAT_1076ccb8;
      } while (cVar2 != '\0');
      if (*DAT_1076ccb8 != '\0') {
        DAT_1076ccb8 = DAT_1076ccb8 + 1;
        DName::DName((DName *)param_1,local_c);
        return param_1;
      }
    }
    DAT_1076ccb8 = DAT_1076ccb8 + -1;
    DVar3 = 2;
  }
  else {
    DVar3 = 1;
  }
  DName::DName((DName *)param_1,DVar3);
  return param_1;
}


// ==== 10726fd0 UnDecorator::getSignedDimension

/* Library Function - Single Match
    private: static class DName __cdecl UnDecorator::getSignedDimension(void)
   
   Library: Visual Studio 2005 Release */

DName * __cdecl UnDecorator::getSignedDimension(void)

{
  DName *in_stack_00000004;
  
  if (*DAT_1076ccb8 == '\0') {
    DName::DName(in_stack_00000004,2);
  }
  else if (*DAT_1076ccb8 == '?') {
    DAT_1076ccb8 = DAT_1076ccb8 + 1;
    getDimension(true);
    operator+(SUB41(in_stack_00000004,0),(DName *)0x2d);
  }
  else {
    getDimension(SUB41(in_stack_00000004,0));
  }
  return in_stack_00000004;
}


// ==== 10727020 UnDecorator::getTemplateConstant

/* Library Function - Single Match
    private: static class DName __cdecl UnDecorator::getTemplateConstant(void)
   
   Library: Visual Studio 2005 Release */

void __cdecl UnDecorator::getTemplateConstant(void)

{
  int iVar1;
  char *pcVar2;
  DName *pDVar3;
  long lVar4;
  DName *in_stack_00000004;
  char cVar5;
  char *pcVar6;
  DNameStatus DVar7;
  DName local_d4 [8];
  char local_cc [16];
  DName local_bc [16];
  undefined1 local_ac [32];
  char local_8c [8];
  DName local_84 [8];
  char local_7c;
  char local_7b;
  char local_7a;
  undefined1 local_78 [96];
  char local_18 [8];
  DName local_10 [8];
  uint local_8;
  
  pcVar2 = DAT_1076ccb8;
  local_8 = DAT_10765c70 ^ (uint)local_78;
  cVar5 = *DAT_1076ccb8;
  DAT_1076ccb8 = DAT_1076ccb8 + 1;
  if (cVar5 < 'E') {
    if (cVar5 == 'D') {
LAB_107271af:
      getSignedDimension();
      if (((ushort)DAT_1076ccc8 & 0x4000) != 0) {
        DName::getString(local_84,local_18,0x10);
        lVar4 = _atol(local_18);
        pcVar2 = (char *)(*DAT_1076cccc)(lVar4);
        if (pcVar2 != (char *)0x0) {
LAB_10727123:
          DName::DName(in_stack_00000004,pcVar2);
          goto LAB_107272c7;
        }
      }
      if (cVar5 == 'D') {
        pcVar6 = "`template-parameter";
        pcVar2 = local_8c;
      }
      else {
        pcVar6 = "`non-type-template-parameter";
        pcVar2 = local_cc;
      }
      pDVar3 = (DName *)operator+(pcVar2,(DName *)pcVar6);
      DName::operator+(pDVar3,(char *)in_stack_00000004);
      goto LAB_107272c7;
    }
    if (cVar5 != '\0') {
      if (cVar5 == '0') {
        getSignedDimension();
        goto LAB_107272c7;
      }
      if (cVar5 == '1') {
        if (*DAT_1076ccb8 == '@') {
          DAT_1076ccb8 = pcVar2 + 2;
          pcVar2 = "NULL";
          goto LAB_10727123;
        }
        getDecoratedName();
        pDVar3 = (DName *)DName::DName(local_bc,"&");
LAB_10727102:
        DName::operator+(pDVar3,in_stack_00000004);
        goto LAB_107272c7;
      }
      if (cVar5 == '2') {
        getSignedDimension();
        getSignedDimension();
        iVar1 = DName::isValid(local_84);
        pcVar2 = DAT_1076ccb8;
        if ((iVar1 == 0) || (iVar1 = DName::isValid(local_10), pcVar2 = DAT_1076ccb8, iVar1 == 0))
        goto LAB_1072715b;
        pcVar2 = DName::getString(local_84,&local_7b,100);
        if (pcVar2 != (char *)0x0) {
          local_7c = local_7b;
          if (local_7b == '-') {
            local_7b = local_7a;
            local_7a = '.';
          }
          else {
            local_7b = '.';
          }
          cVar5 = (char)local_ac;
          pDVar3 = (DName *)DName::DName(local_d4,&local_7c);
          pDVar3 = (DName *)DName::operator+(pDVar3,cVar5);
          goto LAB_10727102;
        }
      }
      goto LAB_107270bc;
    }
LAB_1072715b:
    DAT_1076ccb8 = pcVar2;
    DVar7 = 2;
  }
  else {
    if (cVar5 == 'E') {
      getDecoratedName();
      goto LAB_107272c7;
    }
    if ('E' < cVar5) {
      if (cVar5 < 'K') {
        DName::DName(local_84,'{');
        if (('G' < cVar5) && (cVar5 < 'K')) {
          pDVar3 = (DName *)getDecoratedName();
          DName::operator+=(local_84,pDVar3);
          DName::operator+=(local_84,',');
        }
        if (cVar5 == 'F') {
LAB_10727283:
          pDVar3 = (DName *)getSignedDimension();
          DName::operator+=(local_84,pDVar3);
          DName::operator+=(local_84,',');
LAB_107272a0:
          pDVar3 = (DName *)getSignedDimension();
          DName::operator+=(local_84,pDVar3);
        }
        else {
          if (cVar5 == 'G') {
LAB_10727266:
            pDVar3 = (DName *)getSignedDimension();
            DName::operator+=(local_84,pDVar3);
            DName::operator+=(local_84,',');
            goto LAB_10727283;
          }
          if (cVar5 == 'H') goto LAB_107272a0;
          if (cVar5 == 'I') goto LAB_10727283;
          if (cVar5 == 'J') goto LAB_10727266;
        }
        DName::operator+(local_84,(char)in_stack_00000004);
        goto LAB_107272c7;
      }
      if (cVar5 == 'Q') goto LAB_107271af;
      if (cVar5 == 'R') {
        getZName(SUB41(local_10,0));
        getSignedDimension();
        DName::DName(in_stack_00000004,local_10);
        goto LAB_107272c7;
      }
    }
LAB_107270bc:
    DVar7 = 1;
  }
  DName::DName(in_stack_00000004,DVar7);
LAB_107272c7:
  __security_check_cookie(local_8 ^ (uint)local_78);
  return;
}


// ==== 107272db UnDecorator::getPtrRefDataType

/* Library Function - Single Match
    private: static class DName __cdecl UnDecorator::getPtrRefDataType(class DName const &,int)
   
   Library: Visual Studio 2005 Release */

DName * __cdecl UnDecorator::getPtrRefDataType(DName *param_1,int param_2)

{
  int iVar1;
  DName *pDVar2;
  int in_stack_0000000c;
  char *pcVar3;
  char local_14 [8];
  DName local_c [8];
  
  if (*DAT_1076ccb8 == '\0') {
    operator+((DNameStatus)param_1,(DName *)0x2);
    return param_1;
  }
  if ((in_stack_0000000c != 0) && (*DAT_1076ccb8 == 'X')) {
    DAT_1076ccb8 = DAT_1076ccb8 + 1;
    iVar1 = DName::isEmpty((DName *)param_2);
    if (iVar1 == 0) {
      operator+((char *)param_1,(DName *)"void ");
      return param_1;
    }
    DName::DName(param_1,"void");
    return param_1;
  }
  if (*DAT_1076ccb8 == 'Y') {
    DAT_1076ccb8 = DAT_1076ccb8 + 1;
    getArrayType(param_1);
    return param_1;
  }
  FUN_10729cf3(local_c,(DName *)param_2);
  if ((*(uint *)(param_2 + 4) & 0x400) == 0) {
    if ((*(uint *)(param_2 + 4) & 0x200) == 0) goto LAB_10727391;
    pcVar3 = "cli::pin_ptr<";
  }
  else {
    pcVar3 = "cli::array<";
  }
  pDVar2 = (DName *)operator+(local_14,(DName *)pcVar3);
  DName::operator=(local_c,pDVar2);
LAB_10727391:
  DName::DName(param_1,local_c);
  return param_1;
}


// ==== 107273c8 UnDecorator::getTemplateArgumentList

/* Library Function - Single Match
    private: static class DName __cdecl UnDecorator::getTemplateArgumentList(void)
   
   Library: Visual Studio 2005 Release */

void __cdecl UnDecorator::getTemplateArgumentList(void)

{
  DName DVar1;
  char cVar2;
  char *pcVar3;
  DName *pDVar4;
  long lVar5;
  char *pcVar6;
  DName *in_stack_00000004;
  char *pcVar7;
  char local_5c [8];
  DName local_54 [8];
  char local_4c [8];
  char local_44 [8];
  char local_3c [8];
  undefined4 local_34;
  uint local_30;
  DName local_2c [8];
  int local_24;
  undefined4 local_20;
  uint local_1c;
  char local_18 [16];
  uint local_8;
  
  local_8 = DAT_10765c70 ^ (uint)&stack0xfffffffc;
  *(undefined4 *)in_stack_00000004 = 0;
  *(uint *)(in_stack_00000004 + 4) = *(uint *)(in_stack_00000004 + 4) & 0xfffff000;
  DAT_1076ccd1 = 1;
  DVar1 = in_stack_00000004[4];
  local_24 = 1;
  do {
    if (((((byte)DVar1 & 0xf) != 0) || (*DAT_1076ccb8 == '\0')) || (*DAT_1076ccb8 == '@')) {
      DAT_1076ccd1 = 0;
      __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
      return;
    }
    if (local_24 == 0) {
      DName::operator+=(in_stack_00000004,',');
    }
    else {
      local_24 = 0;
    }
    pcVar3 = DAT_1076ccb8;
    cVar2 = *DAT_1076ccb8;
    if ((int)cVar2 - 0x30U < 10) {
      DAT_1076ccb8 = DAT_1076ccb8 + 1;
      pDVar4 = Replicator::operator[](DAT_1076ccb4,(int)cVar2 - 0x30U);
    }
    else {
      local_20 = 0;
      local_1c = local_1c & 0xfffff000;
      if (cVar2 == 'X') {
        DAT_1076ccb8 = DAT_1076ccb8 + 1;
        pcVar7 = "void";
LAB_10727470:
        DName::operator=((DName *)&local_20,pcVar7);
      }
      else {
        if ((cVar2 == '$') && (DAT_1076ccb8[1] != '$')) {
          DAT_1076ccb8 = DAT_1076ccb8 + 1;
          pDVar4 = (DName *)getTemplateConstant();
        }
        else if (cVar2 == '?') {
          getSignedDimension();
          if (((ushort)DAT_1076ccc8 & 0x4000) == 0) {
            pcVar7 = local_5c;
            pcVar6 = local_44;
          }
          else {
            DName::getString(local_2c,local_18,0x10);
            lVar5 = _atol(local_18);
            pcVar7 = (char *)(*DAT_1076cccc)(lVar5);
            if (pcVar7 != (char *)0x0) goto LAB_10727470;
            pcVar7 = local_3c;
            pcVar6 = local_4c;
          }
          pDVar4 = (DName *)operator+(pcVar6,(DName *)"`template-parameter");
          pDVar4 = (DName *)DName::operator+(pDVar4,pcVar7);
        }
        else {
          local_34 = 0;
          local_30 = local_30 & 0xfffff000;
          pDVar4 = (DName *)getPrimaryDataType(local_54);
        }
        DName::operator=((DName *)&local_20,pDVar4);
      }
      if ((1 < (int)DAT_1076ccb8 - (int)pcVar3) && (*(int *)DAT_1076ccb4 != 9)) {
        Replicator::operator+=(DAT_1076ccb4,(DName *)&local_20);
      }
      pDVar4 = (DName *)&local_20;
    }
    DName::operator+=(in_stack_00000004,pDVar4);
    DVar1 = in_stack_00000004[4];
  } while( true );
}


// ==== 10727580 UnDecorator::getOperatorName

/* Library Function - Single Match
    private: static class DName __cdecl UnDecorator::getOperatorName(bool,bool *)
   
   Library: Visual Studio 2005 Release */

DName * __cdecl UnDecorator::getOperatorName(bool param_1,bool *param_2)

{
  bool bVar1;
  char cVar2;
  char *pcVar3;
  int iVar4;
  DName *pDVar5;
  DName *this;
  DName *pDVar6;
  DName *extraout_ECX;
  undefined3 in_stack_00000005;
  undefined1 *in_stack_0000000c;
  char *pcVar7;
  DNameStatus DVar8;
  undefined1 local_a4 [24];
  undefined1 local_8c [8];
  undefined1 local_84 [16];
  undefined1 local_74 [8];
  undefined1 local_6c [8];
  DName local_64 [16];
  undefined1 local_54 [8];
  undefined1 local_4c [8];
  undefined1 local_44 [8];
  undefined1 local_3c [16];
  undefined1 local_2c [8];
  char local_24 [8];
  undefined4 local_1c;
  uint local_18;
  DName local_14 [4];
  uint local_10;
  undefined4 local_c;
  uint local_8;
  
  cVar2 = *DAT_1076ccb8;
  local_8 = local_8 & 0xfffff000;
  local_18 = local_18 & 0xfffff000;
  bVar1 = false;
  pcVar3 = DAT_1076ccb8 + 1;
  local_c = 0;
  local_1c = 0;
  if (cVar2 < 'B') {
    if (cVar2 == 'A') {
LAB_10727abb:
      cVar2 = *DAT_1076ccb8;
      DAT_1076ccb8 = pcVar3;
      DName::operator=((DName *)&local_c,*(char **)("operator" + cVar2 * 4));
      pcVar3 = DAT_1076ccb8;
      if (bVar1) {
        iVar4 = DName::isEmpty((DName *)&local_c);
        if (iVar4 == 0) {
          local_8 = local_8 | 0x20;
        }
      }
      else {
LAB_107275f1:
        DAT_1076ccb8 = pcVar3;
        iVar4 = DName::isEmpty((DName *)&local_c);
        if (iVar4 == 0) {
          pDVar5 = (DName *)operator+(local_24,(DName *)"operator");
          DName::operator=((DName *)&local_c,pDVar5);
        }
      }
LAB_1072761a:
      pDVar5 = (DName *)&local_c;
LAB_1072761d:
      DName::DName(_param_1,pDVar5);
      return _param_1;
    }
    if (cVar2 == '\0') goto LAB_10727703;
    if ('/' < cVar2) {
      if (cVar2 < '2') {
        local_1c = 0;
        if ((char)param_2 != '\0') {
          DAT_1076ccb8 = pcVar3;
          getTemplateArgumentList();
          pDVar5 = (DName *)operator+((char)local_a4,(DName *)0x3c);
          DName::operator+=((DName *)&local_1c,pDVar5);
          cVar2 = DName::getLastChar((DName *)&local_1c);
          if (cVar2 == '>') {
            DName::operator+=((DName *)&local_1c,' ');
          }
          DName::operator+=((DName *)&local_1c,'>');
          if (in_stack_0000000c != (undefined1 *)0x0) {
            *in_stack_0000000c = 1;
          }
          if (*DAT_1076ccb8 == '\0') {
            pDVar5 = (DName *)&local_1c;
            goto LAB_1072761d;
          }
          pcVar3 = DAT_1076ccb8 + 1;
        }
        DAT_1076ccb8 = pcVar3;
        pDVar5 = (DName *)getZName(SUB41(local_3c,0));
        DName::operator=((DName *)&local_c,pDVar5);
        DAT_1076ccb8 = pcVar3;
        iVar4 = DName::isEmpty((DName *)&local_c);
        if ((iVar4 == 0) && (pcVar3[-1] == '1')) {
          pDVar5 = (DName *)operator+((char)local_8c,(DName *)0x7e);
          DName::operator=((DName *)&local_c,pDVar5);
        }
        iVar4 = DName::isEmpty((DName *)&local_1c);
        if (iVar4 == 0) {
          DName::operator+=((DName *)&local_c,extraout_ECX);
        }
        goto LAB_1072761a;
      }
      if (cVar2 < ':') {
        pcVar7 = *(char **)(&DAT_107525a8 + *DAT_1076ccb8 * 4);
        DAT_1076ccb8 = pcVar3;
        goto LAB_107275e9;
      }
    }
  }
  else {
    if (cVar2 == 'B') {
      bVar1 = true;
      goto LAB_10727abb;
    }
    if (cVar2 < 'C') goto LAB_1072780a;
    if (cVar2 < '[') goto LAB_10727abb;
    if (cVar2 == '_') {
      cVar2 = *pcVar3;
      pcVar3 = DAT_1076ccb8 + 2;
      if (cVar2 < 'P') {
        if ('C' < cVar2) {
LAB_10727a98:
          pcVar7 = *(char **)("__cdecl" + DAT_1076ccb8[1] * 4);
          DAT_1076ccb8 = pcVar3;
LAB_10727781:
          DName::DName(_param_1,pcVar7);
          return _param_1;
        }
        if (cVar2 < ':') {
          if (cVar2 == '9') {
            pcVar7 = DAT_1076ccb8 + 1;
            DAT_1076ccb8 = pcVar3;
            DName::DName(local_14,(&PTR_s___pascal_10752638)[*pcVar7]);
            local_10 = local_10 | 0x800;
LAB_107277b8:
            pDVar5 = local_14;
            goto LAB_1072761d;
          }
          if (cVar2 == '\0') {
LAB_10727703:
            pcVar3 = pcVar3 + -1;
LAB_10727709:
            DAT_1076ccb8 = pcVar3;
            DVar8 = 2;
            goto LAB_1072770b;
          }
          if ('/' < cVar2) {
            if (cVar2 < '7') {
              pcVar7 = (&PTR_s___pascal_10752638)[DAT_1076ccb8[1]];
              DAT_1076ccb8 = pcVar3;
              goto LAB_107275e9;
            }
            if (cVar2 < '9') {
              pcVar7 = (&PTR_s___pascal_10752638)[DAT_1076ccb8[1]];
              DAT_1076ccb8 = pcVar3;
              goto LAB_10727781;
            }
          }
        }
        else if (cVar2 == '?') {
          cVar2 = *pcVar3;
          pcVar3 = DAT_1076ccb8 + 3;
          if (cVar2 == '\0') goto LAB_10727703;
          if (cVar2 == '0') {
            pcVar7 = "`anonymous namespace\'";
            DAT_1076ccb8 = pcVar3;
LAB_107277df:
            getStringEncoding((char *)local_14,(int)pcVar7);
            local_10 = local_10 | 0x100;
            goto LAB_107277b8;
          }
        }
        else if ('@' < cVar2) {
          if (cVar2 < 'C') goto LAB_10727a98;
          if (cVar2 == 'C') {
            pcVar7 = "`string\'";
            DAT_1076ccb8 = pcVar3;
            goto LAB_107277df;
          }
        }
      }
      else if (cVar2 < 'U') {
        if ('R' < cVar2) goto LAB_10727a98;
        pDVar5 = _param_1;
        if (cVar2 == 'P') {
          pcVar7 = DAT_1076ccb8 + 1;
          DAT_1076ccb8 = pcVar3;
          DName::operator=((DName *)&local_c,*(char **)("__cdecl" + *pcVar7 * 4));
          pDVar6 = (DName *)getOperatorName(SUB41(local_84,0),(bool *)0x0);
          DName::operator=((DName *)&local_1c,pDVar6);
          iVar4 = DName::isEmpty((DName *)&local_1c);
          if ((iVar4 != 0) || (pcVar3 = DAT_1076ccb8, (local_18 & 0x40) == 0)) {
LAB_1072788c:
            pDVar6 = (DName *)&local_c;
LAB_10727896:
            DName::operator+(pDVar6,pDVar5);
            return _param_1;
          }
        }
        else {
          if (cVar2 == 'Q') goto LAB_107275f1;
          if (cVar2 == 'R') {
            pcVar7 = DAT_1076ccb8 + 1;
            DAT_1076ccb8 = pcVar3;
            DName::operator=((DName *)&local_c,*(char **)("__cdecl" + *pcVar7 * 4));
            DName::operator=((DName *)&local_1c,*(char **)(&DAT_1075259c + *DAT_1076ccb8 * 4));
            pcVar3 = DAT_1076ccb8;
            iVar4 = (int)*DAT_1076ccb8;
            DAT_1076ccb8 = DAT_1076ccb8 + 1;
            if (iVar4 == 0x30) {
              getDataType(local_14);
              pDVar6 = local_64;
              this = (DName *)DName::operator+(local_14,(char)local_74);
              pDVar6 = (DName *)DName::operator+(this,pDVar6);
              goto LAB_10727896;
            }
            if (iVar4 == 0x31) {
              DName::operator+((DName *)&local_c,local_14);
              cVar2 = (char)local_4c;
              pDVar5 = (DName *)getSignedDimension();
              pDVar5 = (DName *)DName::operator+(pDVar5,cVar2);
              DName::operator+=(local_14,pDVar5);
              cVar2 = (char)local_2c;
              pDVar5 = (DName *)getSignedDimension();
              pDVar5 = (DName *)DName::operator+(pDVar5,cVar2);
              DName::operator+=(local_14,pDVar5);
              cVar2 = (char)local_6c;
              pDVar5 = (DName *)getSignedDimension();
              pDVar5 = (DName *)DName::operator+(pDVar5,cVar2);
              DName::operator+=(local_14,pDVar5);
              cVar2 = (char)local_44;
              pDVar5 = (DName *)getDimension(SUB41(local_54,0));
              pDVar5 = (DName *)DName::operator+(pDVar5,cVar2);
              DName::operator+=(local_14,pDVar5);
              DName::operator+(local_14,param_1);
              return _param_1;
            }
            if (iVar4 - 0x32U < 3) goto LAB_1072788c;
            goto LAB_10727709;
          }
        }
      }
      else if ('T' < cVar2) {
        if (cVar2 < 'W') {
          pcVar7 = *(char **)("__cdecl" + DAT_1076ccb8[1] * 4);
          DAT_1076ccb8 = pcVar3;
LAB_107275e9:
          DName::operator=((DName *)&local_c,pcVar7);
          pcVar3 = DAT_1076ccb8;
          goto LAB_107275f1;
        }
        if ('W' < cVar2) {
          if (cVar2 < 'Z') goto LAB_10727a98;
          if (cVar2 == '_') {
            cVar2 = *pcVar3;
            pcVar3 = DAT_1076ccb8 + 3;
            if ('@' < cVar2) {
              if ('D' < cVar2) {
                if (cVar2 < 'G') {
                  pcVar7 = DAT_1076ccb8 + 2;
                  DAT_1076ccb8 = pcVar3;
                  DName::DName(local_14,(&PTR_DAT_10752680)[*pcVar7]);
                  if (*DAT_1076ccb8 == '?') {
                    pDVar5 = (DName *)getDecoratedName();
                    DName::operator+=(local_14,pDVar5);
                    if (*DAT_1076ccb8 == '@') {
                      DAT_1076ccb8 = DAT_1076ccb8 + 1;
                    }
                  }
                  else {
                    pDVar5 = (DName *)getSymbolName();
                    DName::operator+=(local_14,pDVar5);
                  }
                  DName::operator+=(local_14,"\'\'");
                  goto LAB_107277b8;
                }
                if ('J' < cVar2) goto LAB_1072780a;
              }
              pcVar7 = (&PTR_DAT_10752680)[DAT_1076ccb8[2]];
              DAT_1076ccb8 = pcVar3;
              goto LAB_10727781;
            }
          }
        }
      }
    }
  }
LAB_1072780a:
  DAT_1076ccb8 = pcVar3;
  DVar8 = 1;
LAB_1072770b:
  DName::DName(_param_1,DVar8);
  return _param_1;
}


// ==== 10727aef UnDecorator::getTemplateName

/* Library Function - Single Match
    private: static class DName __cdecl UnDecorator::getTemplateName(bool)
   
   Library: Visual Studio 2005 Release */

DName * __cdecl UnDecorator::getTemplateName(bool param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char cVar4;
  DName *pDVar5;
  int iVar6;
  undefined3 in_stack_00000005;
  char in_stack_00000008;
  Replicator local_d4 [60];
  Replicator local_98 [60];
  Replicator local_5c [60];
  undefined1 local_20 [8];
  undefined1 local_18 [8];
  undefined4 local_10;
  uint local_c;
  char local_5;
  
  uVar3 = DAT_1076ccb4;
  uVar2 = DAT_1076ccb0;
  uVar1 = DAT_1076ccac;
  if ((*DAT_1076ccb8 == '?') && (DAT_1076ccb8[1] == '$')) {
    DAT_1076ccb8 = DAT_1076ccb8 + 2;
    Replicator::Replicator(local_98);
    Replicator::Replicator(local_5c);
    Replicator::Replicator(local_d4);
    local_10 = 0;
    local_c = local_c & 0xfffff000;
    DAT_1076ccac = local_98;
    DAT_1076ccb0 = local_5c;
    DAT_1076ccb4 = local_d4;
    local_5 = '\0';
    if (*DAT_1076ccb8 == '?') {
      DAT_1076ccb8 = DAT_1076ccb8 + 1;
      pDVar5 = (DName *)getOperatorName(SUB41(local_18,0),(bool *)0x1);
    }
    else {
      pDVar5 = (DName *)getZName(SUB41(local_18,0));
    }
    DName::operator=((DName *)&local_10,pDVar5);
    iVar6 = DName::isEmpty((DName *)&local_10);
    if (iVar6 != 0) {
      DAT_1076ccd0 = 1;
    }
    if (local_5 == '\0') {
      getTemplateArgumentList();
      pDVar5 = (DName *)operator+((char)local_20,(DName *)0x3c);
      DName::operator+=((DName *)&local_10,pDVar5);
      cVar4 = DName::getLastChar((DName *)&local_10);
      if (cVar4 == '>') {
        DName::operator+=((DName *)&local_10,' ');
      }
      DName::operator+=((DName *)&local_10,'>');
      if (in_stack_00000008 != '\0') {
        DAT_1076ccb8 = DAT_1076ccb8 + 1;
      }
    }
    DAT_1076ccac = (Replicator *)uVar1;
    DAT_1076ccb0 = (Replicator *)uVar2;
    DAT_1076ccb4 = (Replicator *)uVar3;
    DName::DName(_param_1,(DName *)&local_10);
  }
  else {
    DName::DName(_param_1,1);
  }
  return _param_1;
}


// ==== 10727c42 UnDecorator::getZName

/* Library Function - Single Match
    private: static class DName __cdecl UnDecorator::getZName(bool)
   
   Library: Visual Studio 2005 Release */

void __cdecl UnDecorator::getZName(bool param_1)

{
  DName *pDVar1;
  long lVar2;
  DName *pDVar3;
  uint uVar4;
  char *pcVar5;
  int iVar6;
  char *pcVar7;
  char *pcVar8;
  undefined3 in_stack_00000005;
  char in_stack_00000008;
  DName local_3c [8];
  DName local_34 [8];
  DName *local_2c;
  DName local_28 [8];
  undefined4 local_20;
  uint local_1c;
  char local_18 [16];
  uint local_8;
  
  local_8 = DAT_10765c70 ^ (uint)&stack0xfffffffc;
  uVar4 = (int)*DAT_1076ccb8 - 0x30;
  local_2c = _param_1;
  if (uVar4 < 10) {
    DAT_1076ccb8 = DAT_1076ccb8 + 1;
    pDVar1 = Replicator::operator[](DAT_1076ccb0,uVar4);
    DName::DName(_param_1,pDVar1);
    goto LAB_10727e1f;
  }
  local_20 = 0;
  local_1c = local_1c & 0xfffff000;
  if (*DAT_1076ccb8 == '?') {
    pDVar1 = (DName *)getTemplateName(SUB41(local_28,0));
    DName::operator=((DName *)&local_20,pDVar1);
    pcVar7 = DAT_1076ccb8 + 1;
    if (*DAT_1076ccb8 != '@') {
      DName::operator=((DName *)&local_20,(*DAT_1076ccb8 == '\0') + 1);
      pcVar7 = DAT_1076ccb8;
    }
  }
  else {
    pcVar5 = "template-parameter-";
    pcVar8 = "template-parameter-";
    iVar6 = 0x12;
    pcVar7 = DAT_1076ccb8;
    do {
      if ((*pcVar7 == '\0') || (*pcVar7 != *pcVar8)) break;
      pcVar7 = pcVar7 + 1;
      pcVar8 = pcVar8 + 1;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
    if (*pcVar7 == *pcVar8) {
      DAT_1076ccb8 = DAT_1076ccb8 + 0x13;
    }
    else {
      pcVar5 = "generic-type-";
      pcVar8 = "generic-type-";
      iVar6 = 0xc;
      pcVar7 = DAT_1076ccb8;
      do {
        if ((*pcVar7 == '\0') || (*pcVar7 != *pcVar8)) break;
        pcVar7 = pcVar7 + 1;
        pcVar8 = pcVar8 + 1;
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
      if (*pcVar7 != *pcVar8) {
        pDVar1 = (DName *)DName::DName(local_34,&DAT_1076ccb8,'@');
        DName::operator=((DName *)&local_20,pDVar1);
        pcVar7 = DAT_1076ccb8;
        goto LAB_10727df6;
      }
      DAT_1076ccb8 = DAT_1076ccb8 + 0xd;
    }
    getSignedDimension();
    if (((ushort)DAT_1076ccc8 & 0x4000) == 0) {
      DName::operator=((DName *)&local_20,"`");
      pDVar1 = local_34;
      pDVar3 = local_3c;
    }
    else {
      DName::getString(local_28,local_18,0x10);
      lVar2 = _atol(local_18);
      pcVar7 = (char *)(*DAT_1076cccc)(lVar2);
      if (pcVar7 != (char *)0x0) {
        DName::operator=((DName *)&local_20,pcVar7);
        pcVar7 = DAT_1076ccb8;
        goto LAB_10727df6;
      }
      DName::operator=((DName *)&local_20,"`");
      pDVar1 = local_3c;
      pDVar3 = local_34;
    }
    pDVar3 = (DName *)operator+((char *)pDVar3,(DName *)pcVar5);
    pDVar1 = (DName *)DName::operator+(pDVar3,(char *)pDVar1);
    DName::operator+=((DName *)&local_20,pDVar1);
    pcVar7 = DAT_1076ccb8;
  }
LAB_10727df6:
  DAT_1076ccb8 = pcVar7;
  if ((in_stack_00000008 != '\0') && (*(int *)DAT_1076ccb0 != 9)) {
    Replicator::operator+=(DAT_1076ccb0,(DName *)&local_20);
  }
  DName::DName(local_2c,(DName *)&local_20);
LAB_10727e1f:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


// ==== 10727e2c UnDecorator::getScopedName

/* Library Function - Single Match
    private: static class DName __cdecl UnDecorator::getScopedName(void)
   
   Library: Visual Studio 2005 Release */

DName * __cdecl UnDecorator::getScopedName(void)

{
  DName *pDVar1;
  DName *pDVar2;
  int iVar3;
  DName *this;
  DName *in_stack_00000004;
  char *pcVar4;
  DName local_1c [8];
  char local_14 [8];
  DName local_c [8];
  
  *(undefined4 *)in_stack_00000004 = 0;
  *(uint *)(in_stack_00000004 + 4) = *(uint *)(in_stack_00000004 + 4) & 0xfffff000;
  pDVar1 = (DName *)getZName(SUB41(local_c,0));
  DName::operator=(in_stack_00000004,pDVar1);
  if ((((byte)in_stack_00000004[4] & 0xf) == 0) && (*DAT_1076ccb8 != '\0')) {
    if (*DAT_1076ccb8 == '@') goto LAB_10727ea5;
    pDVar1 = local_c;
    pcVar4 = local_14;
    pDVar2 = (DName *)getScope();
    pDVar2 = (DName *)DName::operator+(pDVar2,pcVar4);
    pDVar1 = (DName *)DName::operator+(pDVar2,pDVar1);
    DName::operator=(in_stack_00000004,pDVar1);
  }
  if (*DAT_1076ccb8 != '@') {
    if (*DAT_1076ccb8 == '\0') {
      iVar3 = DName::isEmpty(in_stack_00000004);
      if (iVar3 != 0) {
        DName::operator=(this,2);
        return in_stack_00000004;
      }
      pDVar1 = local_1c;
      pcVar4 = local_14;
      pDVar2 = (DName *)DName::DName(local_c,2);
      pDVar2 = (DName *)DName::operator+(pDVar2,pcVar4);
      pDVar1 = (DName *)DName::operator+(pDVar2,pDVar1);
      DName::operator=(in_stack_00000004,pDVar1);
      return in_stack_00000004;
    }
    *(undefined4 *)in_stack_00000004 = 0;
    if (((byte)*(uint *)(in_stack_00000004 + 4) & 0xf) == 3) {
      return in_stack_00000004;
    }
    *(uint *)(in_stack_00000004 + 4) = *(uint *)(in_stack_00000004 + 4) & 0xfffffff1 | 1;
    return in_stack_00000004;
  }
LAB_10727ea5:
  DAT_1076ccb8 = DAT_1076ccb8 + 1;
  return in_stack_00000004;
}


// ==== 10727f1f UnDecorator::getECSUDataType

/* Library Function - Single Match
    private: static class DName __cdecl UnDecorator::getECSUDataType(void)
   
   Library: Visual Studio 2005 Release */

DName * __cdecl UnDecorator::getECSUDataType(void)

{
  char cVar1;
  DName *pDVar2;
  uint uVar3;
  uint uVar4;
  DName *in_stack_00000004;
  char *pcVar5;
  char local_1c [8];
  undefined4 local_14;
  uint local_10;
  undefined4 local_c;
  uint local_8;
  
  pcVar5 = DAT_1076ccb8;
  uVar4 = 1;
  uVar3 = ~(DAT_1076ccc8 >> 0xf) & 1;
  if ((uVar3 == 0) || ((DAT_1076ccc8 & 0x1000) != 0)) {
    uVar4 = 0;
  }
  cVar1 = *DAT_1076ccb8;
  local_c = 0;
  local_8 = local_8 & 0xfffff000;
  DAT_1076ccb8 = DAT_1076ccb8 + 1;
  if (cVar1 == '\0') {
    DAT_1076ccb8 = pcVar5;
    DName::DName(in_stack_00000004,"nknown ecsu\'");
    return in_stack_00000004;
  }
  if (cVar1 == 'T') {
    pcVar5 = "union ";
  }
  else if (cVar1 == 'U') {
    pcVar5 = "struct ";
  }
  else if (cVar1 == 'V') {
    pcVar5 = "class ";
  }
  else {
    if (cVar1 == 'W') {
      getEnumType();
      pDVar2 = (DName *)operator+(local_1c,(DName *)"enum ");
      DName::operator=((DName *)&local_c,pDVar2);
      goto LAB_10727fca;
    }
    if (cVar1 == 'X') {
      pcVar5 = "coclass ";
    }
    else {
      uVar3 = uVar4;
      if (cVar1 != 'Y') goto LAB_10727fca;
      pcVar5 = "cointerface ";
    }
  }
  DName::operator=((DName *)&local_c,pcVar5);
  uVar3 = uVar4;
LAB_10727fca:
  local_14 = 0;
  local_10 = local_10 & 0xfffff000;
  if (uVar3 != 0) {
    DName::operator=((DName *)&local_14,(DName *)&local_c);
  }
  getScopedName();
  DName::operator+=((DName *)&local_14,(DName *)&local_c);
  DName::DName(in_stack_00000004,(DName *)&local_14);
  return in_stack_00000004;
}


// ==== 1072801f UnDecorator::getSymbolName

/* Library Function - Single Match
    private: static class DName __cdecl UnDecorator::getSymbolName(void)
   
   Library: Visual Studio 2005 Release */

undefined4 __cdecl UnDecorator::getSymbolName(void)

{
  undefined4 in_stack_00000004;
  bool bVar1;
  
  bVar1 = SUB41(in_stack_00000004,0);
  if (*DAT_1076ccb8 == '?') {
    if (DAT_1076ccb8[1] == '$') {
      getTemplateName(bVar1);
    }
    else {
      DAT_1076ccb8 = DAT_1076ccb8 + 1;
      getOperatorName(bVar1,(bool *)0x0);
    }
  }
  else {
    getZName(bVar1);
  }
  return in_stack_00000004;
}


// ==== 10728065 UnDecorator::getBasedType

/* Library Function - Single Match
    private: static class DName __cdecl UnDecorator::getBasedType(void)
   
   Library: Visual Studio 2005 Release */

DName * __cdecl UnDecorator::getBasedType(void)

{
  char cVar1;
  char *pcVar2;
  DName *pDVar3;
  DName *in_stack_00000004;
  DName local_c [8];
  
  pcVar2 = UScore(0);
  DName::DName(local_c,pcVar2);
  if (*DAT_1076ccb8 == '\0') {
    DName::operator+=(local_c,2);
  }
  else {
    cVar1 = *DAT_1076ccb8;
    DAT_1076ccb8 = DAT_1076ccb8 + 1;
    if (cVar1 == '0') {
      DName::operator+=(local_c,"void");
    }
    else if (cVar1 == '2') {
      pDVar3 = (DName *)getScopedName();
      DName::operator+=(local_c,pDVar3);
    }
    else if (cVar1 == '5') {
      DName::DName(in_stack_00000004,1);
      return in_stack_00000004;
    }
  }
  DName::operator+=(local_c,") ");
  DName::DName(in_stack_00000004,local_c);
  return in_stack_00000004;
}


// ==== 107280f7 UnDecorator::composeDeclaration

/* Library Function - Single Match
    private: static class DName __cdecl UnDecorator::composeDeclaration(class DName const &)
   
   Library: Visual Studio 2005 Release */

DName * __cdecl UnDecorator::composeDeclaration(DName *param_1)

{
  uint uVar1;
  uint uVar2;
  DName *pDVar3;
  DName *pDVar4;
  int iVar5;
  uint uVar6;
  DName *pDVar7;
  DName *pDVar8;
  bool bVar9;
  DName *in_stack_00000008;
  char cVar10;
  char cVar11;
  char cVar12;
  char *pcVar13;
  DName local_70 [8];
  char local_68 [8];
  DName local_60 [8];
  DName local_58 [8];
  undefined4 local_50;
  uint local_4c;
  undefined4 local_48;
  uint local_44;
  undefined4 local_40;
  uint local_3c;
  undefined4 local_38;
  uint local_34;
  undefined4 local_30;
  uint local_2c;
  undefined4 local_28;
  uint local_24;
  DName local_20 [4];
  int local_1c;
  undefined4 local_18;
  uint local_14;
  undefined1 local_10 [4];
  uint local_c;
  uint local_8;
  
  local_28 = 0;
  local_24 = local_24 & 0xfffff000;
  uVar1 = getTypeEncoding();
  local_1c = DName::isUDC(in_stack_00000008);
  if (uVar1 == 0xffff) {
    DName::DName(param_1,1);
    return param_1;
  }
  if (uVar1 == 0xfffe) {
    operator+((DNameStatus)param_1,(DName *)0x2);
    return param_1;
  }
  if (uVar1 == 0xfffd) {
    DName::DName(param_1,in_stack_00000008);
    return param_1;
  }
  local_8 = uVar1 & 0x8000;
  if (local_8 == 0) {
LAB_107286f7:
    DName::operator+=((DName *)&local_28,in_stack_00000008);
    if (local_8 == 0) {
      if (((uVar1 & 0x7c00) == 0x6800) || ((uVar1 & 0x7c00) == 0x7000)) {
        getVfTableType(param_1);
        return param_1;
      }
      if ((uVar1 & 0x7c00) == 0x6000) {
        getDimension(SUB41(&local_50,0));
        pDVar3 = local_70;
        pDVar4 = param_1;
        pDVar8 = (DName *)DName::operator+((DName *)&local_28,(char)local_68);
        pDVar3 = (DName *)DName::operator+(pDVar8,pDVar3);
        DName::operator+(pDVar3,(char *)pDVar4);
        return param_1;
      }
      if ((uVar1 & 0x7c00) == 0x7c00) {
        getVdispMapType(param_1);
        return param_1;
      }
      uVar2 = uVar1 & 0x6000;
    }
    else {
      uVar2 = (uVar1 & 0x1800) - 0x800;
    }
    if (uVar2 == 0) {
      uVar2 = uVar1 & 0x400;
    }
    else {
      uVar2 = uVar1 & 0x1000;
    }
    if ((uVar2 == 0) || ((uVar1 & 0x1b00) != 0x1000 || local_8 == 0)) {
      if (local_8 == 0) {
        uVar2 = uVar1 & 0x6000;
      }
      else {
        uVar2 = (uVar1 & 0x1800) - 0x800;
      }
      if (uVar2 == 0) {
        uVar2 = uVar1 & 0x400;
      }
      else {
        uVar2 = uVar1 & 0x1000;
      }
      if ((uVar2 != 0) && ((uVar1 & 0x1b00) == 0x1100 && local_8 != 0)) {
        pcVar13 = "`template static data member constructor helper\'";
        goto LAB_107288a0;
      }
      if (local_8 == 0) {
        uVar2 = uVar1 & 0x6000;
      }
      else {
        uVar2 = (uVar1 & 0x1800) - 0x800;
      }
      if (uVar2 == 0) {
        uVar2 = uVar1 & 0x400;
      }
      else {
        uVar2 = uVar1 & 0x1000;
      }
      if ((uVar2 != 0) && ((uVar1 & 0x1b00) == 0x1200 && local_8 != 0)) {
        pcVar13 = "`template static data member destructor helper\'";
        goto LAB_107288a0;
      }
      if (local_8 == 0) {
        if ((uVar1 & 0x7c00) == 0x7800) goto LAB_10728c25;
        goto LAB_107288bf;
      }
LAB_107288c5:
      uVar2 = (uVar1 & 0x1800) - 0x800;
    }
    else {
      pcVar13 = "`local static destructor helper\'";
LAB_107288a0:
      DName::operator+=((DName *)&local_28,pcVar13);
LAB_107288bf:
      if (local_8 != 0) goto LAB_107288c5;
      uVar2 = uVar1 & 0x6000;
    }
    if (uVar2 == 0) {
      uVar2 = uVar1 & 0x400;
    }
    else {
      uVar2 = uVar1 & 0x1000;
    }
    if ((uVar2 == 0) ||
       (((uVar1 & 0x1b00) != 0x1100 || local_8 == 0 && ((uVar1 & 0x1b00) != 0x1200 || local_8 == 0))
       )) {
      pDVar3 = (DName *)getExternalDataType(local_70);
    }
    else {
      pDVar3 = (DName *)operator+((char *)local_70,(DName *)&DAT_10752a78);
    }
LAB_10728946:
    DName::operator=((DName *)&local_28,pDVar3);
  }
  else {
    local_14 = uVar1 & 0x1800;
    local_c = (uint)(local_14 == 0x800);
    if (local_c == 0) {
      uVar2 = uVar1 & 0x1000;
    }
    else {
      uVar2 = uVar1 & 0x400;
    }
    if ((uVar2 != 0) && ((uVar1 & 0x1b00) == 0x1000)) goto LAB_107286f7;
    if (local_c == 0) {
      uVar2 = uVar1 & 0x1000;
    }
    else {
      uVar2 = uVar1 & 0x400;
    }
    if ((uVar2 != 0) && (((uVar1 & 0x1b00) == 0x1100 || ((uVar1 & 0x1b00) == 0x1200))))
    goto LAB_107286f7;
    if ((uVar1 & 0x4000) != 0) {
      if (((~(DAT_1076ccc8 >> 1) & 1) == 0) || ((~(DAT_1076ccc8 >> 3) & 1) == 0)) {
        pDVar3 = (DName *)getBasedType();
        DName::operator|=((DName *)&local_28,pDVar3);
      }
      else {
        getBasedType();
        pDVar3 = (DName *)operator+((char)&local_48,(DName *)0x20);
        DName::operator=((DName *)&local_28,pDVar3);
      }
    }
    if (local_c == 0) {
      uVar2 = uVar1 & 0x1000;
    }
    else {
      uVar2 = uVar1 & 0x400;
    }
    if ((uVar2 == 0) || (local_14 != 0x1800)) {
      local_3c = local_3c & 0xfffff000;
      local_34 = local_34 & 0xfffff000;
      local_14 = local_14 & 0xfffff000;
      local_44 = local_44 & 0xfffff000;
      local_2c = local_2c & 0xfffff000;
      local_40 = 0;
      local_38 = 0;
      local_18 = 0;
      local_48 = 0;
      local_30 = 0;
      if (local_c == 0) {
        uVar2 = uVar1 & 0x1000;
      }
      else {
        uVar2 = uVar1 & 0x400;
      }
      if (uVar2 != 0) {
        if (local_c != 0) {
          if ((uVar1 & 0x700) == 0x600) {
            getDimension(SUB41(&local_50,0));
            DName::operator=((DName *)&local_40,(DName *)&local_50);
            getDimension(SUB41(&local_50,0));
            DName::operator=((DName *)&local_38,(DName *)&local_50);
          }
          else if ((local_c == 0) || ((uVar1 & 0x700) != 0x500)) goto LAB_107283f7;
          getDimension(SUB41(&local_50,0));
          DName::operator=((DName *)&local_18,(DName *)&local_50);
        }
LAB_107283f7:
        getDimension(SUB41(&local_50,0));
        DName::operator=((DName *)&local_48,(DName *)&local_50);
      }
      if ((local_c != 0) && ((uVar1 & 0x700) != 0x200)) {
        if (((byte)DAT_1076ccc8 & 0x60) == 0x60) {
          pDVar3 = (DName *)getThisType();
          DName::operator|=((DName *)&local_30,pDVar3);
        }
        else {
          pDVar3 = (DName *)getThisType();
          DName::operator=((DName *)&local_30,pDVar3);
        }
      }
      if (((~(DAT_1076ccc8 >> 1) & 1) == 0) || ((~(DAT_1076ccc8 >> 4) & 1) == 0)) {
        pDVar3 = (DName *)getCallingConvention();
        DName::operator|=((DName *)&local_28,pDVar3);
      }
      else {
        pDVar3 = (DName *)&local_50;
        pDVar4 = (DName *)getCallingConvention();
        pDVar3 = (DName *)DName::operator+(pDVar4,pDVar3);
        DName::operator=((DName *)&local_28,pDVar3);
      }
      iVar5 = DName::isEmpty(in_stack_00000008);
      if (iVar5 == 0) {
        iVar5 = DName::isEmpty((DName *)&local_28);
        if ((iVar5 == 0) && ((DAT_1076ccc8 & 0x1000) == 0)) {
          pDVar3 = (DName *)operator+((char)local_58,(DName *)0x20);
          DName::operator+=((DName *)&local_28,pDVar3);
        }
        else {
          DName::operator=((DName *)&local_28,in_stack_00000008);
        }
      }
      local_4c = local_4c & 0xfffff000;
      pDVar3 = (DName *)0x0;
      local_50 = 0;
      if (local_1c == 0) {
        pDVar3 = HeapManager::getMemory((HeapManager *)&DAT_1076cc98,8,0);
        if (pDVar3 == (DName *)0x0) {
          pDVar3 = (DName *)0x0;
        }
        else {
          *(undefined4 *)pDVar3 = 0;
          *(uint *)(pDVar3 + 4) = *(uint *)(pDVar3 + 4) & 0xfffff000;
        }
        pDVar4 = (DName *)getReturnType(local_58);
        DName::operator=((DName *)&local_50,pDVar4);
      }
      else {
        getReturnType(local_58);
        pDVar4 = (DName *)operator+((char *)local_20,(DName *)&DAT_10752a78);
        DName::operator+=((DName *)&local_28,pDVar4);
        if ((DAT_1076ccc8 & 0x1000) != 0) goto LAB_10728c25;
      }
      uVar2 = local_c;
      if (local_c == 0) {
        uVar6 = uVar1 & 0x1000;
      }
      else {
        uVar6 = uVar1 & 0x400;
      }
      if (uVar6 != 0) {
        if (local_c == 0) {
LAB_10728625:
          DName::operator+=((DName *)&local_28,"`adjustor{");
        }
        else {
          if ((uVar1 & 0x700) == 0x600) {
            cVar12 = (char)local_58;
            pDVar4 = local_20;
            cVar11 = (char)local_10;
            pDVar8 = local_60;
            cVar10 = (char)local_68;
            pDVar7 = (DName *)operator+((char *)local_70,(DName *)"`vtordispex{");
            pDVar7 = (DName *)DName::operator+(pDVar7,cVar10);
            pDVar8 = (DName *)DName::operator+(pDVar7,pDVar8);
            pDVar8 = (DName *)DName::operator+(pDVar8,cVar11);
            pDVar4 = (DName *)DName::operator+(pDVar8,pDVar4);
          }
          else {
            if ((local_c == 0) || ((uVar1 & 0x700) != 0x500)) goto LAB_10728625;
            cVar12 = (char)local_70;
            pDVar4 = (DName *)operator+(local_68,(DName *)"`vtordisp{");
          }
          pDVar4 = (DName *)DName::operator+(pDVar4,cVar12);
          DName::operator+=((DName *)&local_28,pDVar4);
        }
        pDVar4 = (DName *)DName::operator+((DName *)&local_48,(char *)local_70);
        DName::operator+=((DName *)&local_28,pDVar4);
      }
      cVar12 = (char)local_70;
      getArgumentTypes();
      pDVar4 = (DName *)operator+((char)local_60,(DName *)0x28);
      pDVar4 = (DName *)DName::operator+(pDVar4,cVar12);
      DName::operator+=((DName *)&local_28,pDVar4);
      if ((uVar2 != 0) && ((uVar1 & 0x700) != 0x200)) {
        DName::operator+=((DName *)&local_28,(DName *)&local_30);
      }
      if ((~(DAT_1076ccc8 >> 8) & 1) == 0) {
        pDVar4 = (DName *)getThrowTypes();
        DName::operator|=((DName *)&local_28,pDVar4);
      }
      else {
        pDVar4 = (DName *)getThrowTypes();
        DName::operator+=((DName *)&local_28,pDVar4);
      }
      if (((~(DAT_1076ccc8 >> 2) & 1) == 0) || (pDVar3 == (DName *)0x0)) goto LAB_1072894f;
      DName::operator=(pDVar3,(DName *)&local_28);
      pDVar3 = (DName *)&local_50;
      goto LAB_10728946;
    }
    getDimension(SUB41(&local_50,0));
    pDVar3 = (DName *)&local_48;
    pDVar4 = (DName *)DName::operator+(in_stack_00000008,(char)&local_40);
    pDVar3 = (DName *)DName::operator+(pDVar4,pDVar3);
    DName::operator+=((DName *)&local_28,pDVar3);
    getVCallThunkType();
    if ((DAT_1076ccc8 & 0x1000) == 0) {
      pcVar13 = (char *)&local_48;
      pDVar3 = (DName *)operator+((char)&local_40,(DName *)0x2c);
      pDVar3 = (DName *)DName::operator+(pDVar3,pcVar13);
      DName::operator+=((DName *)&local_28,pDVar3);
    }
    DName::operator+=((DName *)&local_28,"}\'");
    getCallingConvention();
    if ((((~(DAT_1076ccc8 >> 1) & 1) != 0) && ((~(DAT_1076ccc8 >> 4) & 1) != 0)) &&
       ((DAT_1076ccc8 & 0x1000) == 0)) {
      pDVar3 = (DName *)&local_48;
      cVar12 = (char)&local_40;
      pDVar4 = (DName *)operator+((char)&local_38,(DName *)0x20);
      pDVar4 = (DName *)DName::operator+(pDVar4,cVar12);
      pDVar3 = (DName *)DName::operator+(pDVar4,pDVar3);
      goto LAB_10728946;
    }
  }
LAB_1072894f:
  if (local_8 == 0) {
    uVar2 = uVar1 & 0x6000;
  }
  else {
    uVar2 = (uVar1 & 0x1800) - 0x800;
  }
  if (uVar2 == 0) {
    if ((~(DAT_1076ccc8 >> 9) & 1) != 0) {
      if (local_8 == 0) {
        uVar2 = uVar1 & 0x6000;
      }
      else {
        uVar2 = (uVar1 & 0x1800) - 0x800;
      }
      if ((uVar2 == 0) && (local_8 == 0 || (uVar1 & 0x700) == 0x200)) {
        pDVar3 = (DName *)operator+((char *)local_70,(DName *)"static ");
        DName::operator=((DName *)&local_28,pDVar3);
      }
      if (local_8 == 0) {
LAB_10728a0d:
        uVar2 = uVar1 & 0x6000;
LAB_10728a11:
        if (uVar2 == 0) {
          uVar2 = uVar1 & 0x400;
        }
        else {
          uVar2 = uVar1 & 0x1000;
        }
        if (uVar2 == 0) goto LAB_10728ac2;
        if (local_8 == 0) {
          uVar2 = uVar1 & 0x6000;
        }
        else {
          uVar2 = (uVar1 & 0x1800) - 0x800;
        }
        if ((uVar2 != 0) || ((uVar1 & 0x700) != 0x500)) {
          if (local_8 == 0) {
            uVar2 = uVar1 & 0x6000;
          }
          else {
            uVar2 = (uVar1 & 0x1800) - 0x800;
          }
          if ((uVar2 != 0) || ((uVar1 & 0x700) != 0x600)) {
            if (local_8 == 0) {
              uVar2 = uVar1 & 0x6000;
            }
            else {
              uVar2 = (uVar1 & 0x1800) - 0x800;
            }
            if ((uVar2 != 0) || ((uVar1 & 0x700) != 0x400)) goto LAB_10728ac2;
          }
        }
      }
      else if ((uVar1 & 0x700) != 0x100) {
        if (local_8 == 0) goto LAB_10728a0d;
        uVar2 = (uVar1 & 0x1800) - 0x800;
        goto LAB_10728a11;
      }
      pDVar3 = (DName *)operator+((char *)local_70,(DName *)"virtual ");
      DName::operator=((DName *)&local_28,pDVar3);
    }
LAB_10728ac2:
    if ((~(DAT_1076ccc8 >> 7) & 1) != 0) {
      if (local_8 == 0) {
        uVar2 = uVar1 & 0x6000;
      }
      else {
        uVar2 = (uVar1 & 0x1800) - 0x800;
      }
      if (uVar2 == 0) {
        if (local_8 == 0) {
          bVar9 = (uVar1 & 0x1800) != 0x800;
        }
        else {
          bVar9 = ((byte)uVar1 & 0xc0) != 0x40;
        }
        if (bVar9) goto LAB_10728b16;
        pcVar13 = "private: ";
LAB_10728b91:
        pDVar3 = (DName *)operator+((char *)local_70,(DName *)pcVar13);
        DName::operator=((DName *)&local_28,pDVar3);
      }
      else {
LAB_10728b16:
        if (local_8 == 0) {
          uVar2 = uVar1 & 0x6000;
        }
        else {
          uVar2 = (uVar1 & 0x1800) - 0x800;
        }
        if (uVar2 == 0) {
          if (local_8 == 0) {
            bVar9 = (uVar1 & 0x1800) != 0x1000;
          }
          else {
            bVar9 = ((byte)uVar1 & 0xc0) != 0x80;
          }
          if (!bVar9) {
            pcVar13 = "protected: ";
            goto LAB_10728b91;
          }
        }
        if (local_8 == 0) {
          uVar2 = uVar1 & 0x6000;
        }
        else {
          uVar2 = (uVar1 & 0x1800) - 0x800;
        }
        if (uVar2 == 0) {
          if (local_8 == 0) {
            uVar2 = uVar1 & 0x1800;
          }
          else {
            uVar2 = uVar1 & 0xc0;
          }
          if (uVar2 == 0) {
            pcVar13 = "public: ";
            goto LAB_10728b91;
          }
        }
      }
    }
  }
  if (local_8 == 0) {
    uVar2 = uVar1 & 0x6000;
  }
  else {
    uVar2 = (uVar1 & 0x1800) - 0x800;
  }
  if (uVar2 == 0) {
    uVar2 = uVar1 & 0x400;
  }
  else {
    uVar2 = uVar1 & 0x1000;
  }
  if ((uVar2 != 0) && ((DAT_1076ccc8 & 0x1000) == 0)) {
    pDVar3 = (DName *)operator+((char *)local_70,(DName *)"[thunk]:");
    DName::operator=((DName *)&local_28,pDVar3);
  }
  if ((uVar1 & 0x10000) != 0) {
    pDVar3 = (DName *)operator+((char *)local_70,(DName *)"extern \"C\" ");
    DName::operator=((DName *)&local_28,pDVar3);
  }
LAB_10728c25:
  DName::DName(param_1,(DName *)&local_28);
  return param_1;
}


// ==== 10728c39 UnDecorator::getDecoratedName

/* Library Function - Single Match
    private: static class DName __cdecl UnDecorator::getDecoratedName(void)
   
   Library: Visual Studio 2005 Release */

DName * __cdecl UnDecorator::getDecoratedName(void)

{
  bool bVar1;
  char *pcVar2;
  int iVar3;
  DName *pDVar4;
  DName *pDVar5;
  uint extraout_EDX;
  uint uVar6;
  DName *in_stack_00000004;
  DNameStatus DVar7;
  DName local_24 [8];
  DName local_1c [8];
  undefined4 local_14;
  uint local_10;
  DName local_c [4];
  uint local_8;
  
  if ((DAT_1076ccc8 & 0x2000) == 0) {
    if (*DAT_1076ccb8 != '?') {
      if (*DAT_1076ccb8 == '\0') {
        DVar7 = 2;
        goto LAB_10728e3b;
      }
LAB_10728de9:
      DVar7 = 1;
LAB_10728e3b:
      DName::DName(in_stack_00000004,DVar7);
      return in_stack_00000004;
    }
    pcVar2 = DAT_1076ccb8 + 1;
    if ((*pcVar2 != '?') || (DAT_1076ccb8[2] != '?')) {
      DAT_1076ccb8 = pcVar2;
      getSymbolName();
      iVar3 = DName::isEmpty(local_c);
      if ((iVar3 == 0) && ((local_8 & 0x20) != 0)) {
        bVar1 = true;
      }
      else {
        bVar1 = false;
      }
      uVar6 = local_8 >> 0xb;
      iVar3 = DName::isValid(local_c);
      if (iVar3 != 0) {
        if ((*DAT_1076ccb8 != '\0') && (*DAT_1076ccb8 != '@')) {
          getScope();
          iVar3 = DName::isEmpty((DName *)&local_14);
          if (iVar3 == 0) {
            if (DAT_1076ccd0 == '\0') {
              pDVar4 = local_24;
              pDVar5 = local_1c;
            }
            else {
              DAT_1076ccd0 = '\0';
              pDVar4 = (DName *)DName::operator+(local_c,local_1c);
              DName::operator=(local_c,pDVar4);
              if (*DAT_1076ccb8 == '@') goto LAB_10728d9e;
              pDVar4 = (DName *)getScope();
              DName::operator=((DName *)&local_14,pDVar4);
              pDVar4 = local_1c;
              pDVar5 = local_24;
            }
            pDVar5 = (DName *)DName::operator+((DName *)&local_14,(char *)pDVar5);
            pDVar4 = (DName *)DName::operator+(pDVar5,pDVar4);
            DName::operator=(local_c,pDVar4);
          }
        }
LAB_10728d9e:
        if ((bVar1) && (iVar3 = DName::isEmpty(local_c), iVar3 == 0)) {
          local_8 = local_8 | 0x20;
        }
        if ((uVar6 & 1) != 0) {
          local_8 = local_8 | 0x800;
        }
        iVar3 = DName::isEmpty(local_c);
        if ((iVar3 == 0) && ((local_8 & 0x100) == 0)) {
          if (*DAT_1076ccb8 != '\0') {
            if (*DAT_1076ccb8 != '@') goto LAB_10728de9;
            DAT_1076ccb8 = DAT_1076ccb8 + 1;
          }
          if ((((DAT_1076ccc8 & 0x1000) == 0) || (bVar1)) || ((local_8 & extraout_EDX) != 0)) {
            composeDeclaration(in_stack_00000004);
            return in_stack_00000004;
          }
          local_14 = 0;
          local_10 = local_10 & 0xfffff000;
          composeDeclaration(local_24);
        }
      }
      pDVar4 = local_c;
      goto LAB_10728c6e;
    }
    DAT_1076ccb8 = pcVar2;
    getDecoratedName();
    for (; *DAT_1076ccb8 != '\0'; DAT_1076ccb8 = DAT_1076ccb8 + 1) {
    }
  }
  else {
    DAT_1076ccc8 = DAT_1076ccc8 & 0xffffdfff;
    getDataType((DName *)&local_14);
    DAT_1076ccc8 = DAT_1076ccc8 | 0x2000;
  }
  pDVar4 = (DName *)&local_14;
LAB_10728c6e:
  DName::DName(in_stack_00000004,pDVar4);
  return in_stack_00000004;
}


// ==== 10728e4a UnDecorator::getScope

/* Library Function - Single Match
    private: static class DName __cdecl UnDecorator::getScope(void)
   
   Library: Visual Studio 2005 Release */

DName * __cdecl UnDecorator::getScope(void)

{
  bool bVar1;
  undefined1 uVar2;
  int iVar3;
  DName *pDVar4;
  DName *pDVar5;
  DName *this;
  char *pcVar6;
  DName *this_00;
  DName *in_stack_00000004;
  char cVar7;
  char local_94 [8];
  DName local_8c [8];
  DName local_84 [8];
  undefined1 local_7c [8];
  undefined1 local_74 [8];
  DName local_6c [8];
  DName local_64 [8];
  char local_5c [8];
  DName local_54 [8];
  undefined1 local_4c [8];
  undefined1 local_44 [16];
  undefined1 local_34 [8];
  undefined1 local_2c [8];
  DName local_24 [8];
  DName local_1c [8];
  DName local_14 [8];
  DName local_c [8];
  
  *(uint *)(in_stack_00000004 + 4) = *(uint *)(in_stack_00000004 + 4) & 0xfffff000;
  *(undefined4 *)in_stack_00000004 = 0;
  bVar1 = false;
  if ((*(uint *)(in_stack_00000004 + 4) & 0xf) == 0) {
    do {
      if ((*DAT_1076ccb8 == '\0') || (*DAT_1076ccb8 == '@')) break;
      if ((DAT_1076ccd0 != '\0') && (DAT_1076ccd1 == '\0')) {
        return in_stack_00000004;
      }
      iVar3 = DName::isEmpty(in_stack_00000004);
      if (iVar3 == 0) {
        pDVar4 = (DName *)operator+(local_94,(DName *)&DAT_10752924);
        DName::operator=(in_stack_00000004,pDVar4);
        if (bVar1) {
          pDVar4 = (DName *)operator+((char)local_7c,(DName *)0x5b);
          DName::operator=(in_stack_00000004,pDVar4);
          bVar1 = false;
        }
      }
      if (*DAT_1076ccb8 == '?') {
        pcVar6 = DAT_1076ccb8 + 1;
        cVar7 = *pcVar6;
        if (cVar7 == '$') {
          pDVar4 = local_6c;
          uVar2 = SUB41(local_14,0);
          goto LAB_10729041;
        }
        if (cVar7 != '%') {
          if (cVar7 != '?') {
            if (cVar7 == 'A') goto LAB_10728fe9;
            if (cVar7 != 'I') {
              pDVar4 = local_8c;
              DAT_1076ccb8 = pcVar6;
              pDVar5 = (DName *)getLexicalFrame();
              goto LAB_1072904b;
            }
            pDVar4 = local_84;
            cVar7 = (char)local_44;
            DAT_1076ccb8 = DAT_1076ccb8 + 2;
            pDVar5 = (DName *)getZName(SUB41(local_74,0));
            pDVar5 = (DName *)DName::operator+(pDVar5,cVar7);
            pDVar4 = (DName *)DName::operator+(pDVar5,pDVar4);
            DName::operator=(in_stack_00000004,pDVar4);
            bVar1 = true;
            goto LAB_1072905a;
          }
          if ((DAT_1076ccb8[2] == '_') && (DAT_1076ccb8[3] == '?')) {
            pDVar4 = local_54;
            DAT_1076ccb8 = DAT_1076ccb8 + 2;
            pDVar5 = (DName *)getOperatorName(SUB41(local_2c,0),(bool *)0x0);
            pDVar4 = (DName *)DName::operator+(pDVar5,pDVar4);
            DName::operator=(in_stack_00000004,pDVar4);
            if (*DAT_1076ccb8 == '@') {
              DAT_1076ccb8 = DAT_1076ccb8 + 1;
            }
            goto LAB_1072905a;
          }
          pDVar4 = local_64;
          cVar7 = (char)local_34;
          DAT_1076ccb8 = pcVar6;
          getDecoratedName();
          pDVar5 = (DName *)operator+((char)local_4c,(DName *)0x60);
          pDVar5 = (DName *)DName::operator+(pDVar5,cVar7);
          goto LAB_1072904b;
        }
LAB_10728fe9:
        DAT_1076ccb8 = pcVar6;
        DName::DName(local_c,&DAT_1076ccb8,'@');
        pDVar4 = (DName *)operator+(local_5c,(DName *)"`anonymous namespace\'");
        DName::operator=(in_stack_00000004,pDVar4);
        if (*(int *)DAT_1076ccb0 != 9) {
          Replicator::operator+=(DAT_1076ccb0,local_c);
        }
      }
      else {
        pDVar4 = local_24;
        uVar2 = SUB41(local_1c,0);
LAB_10729041:
        pDVar5 = (DName *)getZName((bool)uVar2);
LAB_1072904b:
        pDVar4 = (DName *)DName::operator+(pDVar5,pDVar4);
        DName::operator=(in_stack_00000004,pDVar4);
      }
LAB_1072905a:
    } while (((byte)in_stack_00000004[4] & 0xf) == 0);
  }
  if (*DAT_1076ccb8 == '\0') {
    iVar3 = DName::isEmpty(in_stack_00000004);
    if (iVar3 == 0) {
      pDVar4 = local_1c;
      pDVar5 = local_24;
      this = (DName *)DName::DName(local_14,2);
      pDVar5 = (DName *)DName::operator+(this,(char *)pDVar5);
      pDVar4 = (DName *)DName::operator+(pDVar5,pDVar4);
      DName::operator=(in_stack_00000004,pDVar4);
    }
    else {
      DName::operator=(this_00,2);
    }
  }
  else if (*DAT_1076ccb8 != '@') {
    *(undefined4 *)in_stack_00000004 = 0;
    if (((byte)*(uint *)(in_stack_00000004 + 4) & 0xf) != 3) {
      *(uint *)(in_stack_00000004 + 4) = *(uint *)(in_stack_00000004 + 4) & 0xfffffff1 | 1;
    }
  }
  return in_stack_00000004;
}


// ==== 107290d5 UnDecorator::getFunctionIndirectType

/* Library Function - Single Match
    private: static class DName __cdecl UnDecorator::getFunctionIndirectType(class DName const &)
   
   Library: Visual Studio 2005 Release */

DName * __cdecl UnDecorator::getFunctionIndirectType(DName *param_1)

{
  char *pcVar1;
  DName *pDVar2;
  DName *pDVar3;
  int iVar4;
  uint uVar5;
  bool bVar6;
  bool bVar7;
  DName *in_stack_00000008;
  char cVar8;
  DNameStatus DVar9;
  DName local_34 [8];
  undefined1 local_2c [8];
  DName local_24 [8];
  DName local_1c [8];
  undefined4 local_14;
  uint local_10;
  DName local_c [8];
  
  cVar8 = *DAT_1076ccb8;
  if (cVar8 == '\0') {
    operator+((DNameStatus)param_1,(DName *)0x2);
    return param_1;
  }
  if (((cVar8 < '6') || ('9' < cVar8)) && (cVar8 != '_')) {
    DName::DName(param_1,1);
    return param_1;
  }
  uVar5 = (int)cVar8 - 0x36;
  pcVar1 = DAT_1076ccb8 + 1;
  if (uVar5 == 0x29) {
    cVar8 = *pcVar1;
    if (cVar8 == '\0') {
      DAT_1076ccb8 = pcVar1;
      operator+((DNameStatus)param_1,(DName *)0x2);
      return param_1;
    }
    uVar5 = (int)cVar8 - 0x3d;
    DAT_1076ccb8 = DAT_1076ccb8 + 2;
    if ((int)uVar5 < 4) goto LAB_10729165;
    bVar7 = SBORROW4(uVar5,7);
    iVar4 = cVar8 + -0x44;
    bVar6 = uVar5 == 7;
LAB_10729163:
    if (!bVar6 && bVar7 == iVar4 < 0) goto LAB_10729165;
  }
  else {
    DAT_1076ccb8 = pcVar1;
    if (-1 < (int)uVar5) {
      bVar7 = SBORROW4(uVar5,3);
      iVar4 = cVar8 + -0x39;
      bVar6 = uVar5 == 3;
      goto LAB_10729163;
    }
LAB_10729165:
    uVar5 = 0xffffffff;
  }
  if (uVar5 == 0xffffffff) {
    DName::DName(param_1,1);
    return param_1;
  }
  local_14 = 0;
  local_10 = local_10 & 0xfffff000;
  DName::DName(local_c,in_stack_00000008);
  if ((uVar5 & 2) != 0) {
    pDVar2 = (DName *)operator+((char *)local_24,(DName *)&DAT_10752924);
    DName::operator=(local_c,pDVar2);
    if (*DAT_1076ccb8 == '\0') {
      pDVar2 = (DName *)operator+((DNameStatus)local_34,(DName *)0x2);
    }
    else {
      pDVar2 = local_24;
      getScope();
      pDVar3 = (DName *)operator+((char)local_34,(DName *)0x20);
      pDVar2 = (DName *)DName::operator+(pDVar3,pDVar2);
    }
    DName::operator=(local_c,pDVar2);
    if (*DAT_1076ccb8 == '\0') {
      operator+((DNameStatus)param_1,(DName *)0x2);
      return param_1;
    }
    if (*DAT_1076ccb8 != '@') {
      DVar9 = 1;
      goto LAB_10729406;
    }
    DAT_1076ccb8 = DAT_1076ccb8 + 1;
    if (((byte)DAT_1076ccc8 & 0x60) == 0x60) {
      pDVar2 = (DName *)getThisType();
      DName::operator|=((DName *)&local_14,pDVar2);
    }
    else {
      pDVar2 = (DName *)getThisType();
      DName::operator=((DName *)&local_14,pDVar2);
    }
  }
  if ((uVar5 & 4) != 0) {
    if ((~(DAT_1076ccc8 >> 1) & 1) == 0) {
      pDVar2 = (DName *)getBasedType();
      DName::operator|=(local_c,pDVar2);
    }
    else {
      pDVar2 = local_34;
      getBasedType();
      pDVar3 = (DName *)operator+((char)local_24,(DName *)0x20);
      pDVar2 = (DName *)DName::operator+(pDVar3,pDVar2);
      DName::operator=(local_c,pDVar2);
    }
  }
  if ((~(DAT_1076ccc8 >> 1) & 1) == 0) {
    pDVar2 = (DName *)getCallingConvention();
    DName::operator|=(local_c,pDVar2);
  }
  else {
    pDVar2 = local_34;
    pDVar3 = (DName *)getCallingConvention();
    pDVar2 = (DName *)DName::operator+(pDVar3,pDVar2);
    DName::operator=(local_c,pDVar2);
  }
  iVar4 = DName::isEmpty(in_stack_00000008);
  if (iVar4 == 0) {
    cVar8 = (char)local_34;
    pDVar2 = (DName *)operator+((char)local_2c,(DName *)0x28);
    pDVar2 = (DName *)DName::operator+(pDVar2,cVar8);
    DName::operator=(local_c,pDVar2);
  }
  pDVar2 = HeapManager::getMemory((HeapManager *)&DAT_1076cc98,8,0);
  if (pDVar2 == (DName *)0x0) {
    pDVar2 = (DName *)0x0;
  }
  else {
    *(undefined4 *)pDVar2 = 0;
    *(uint *)(pDVar2 + 4) = *(uint *)(pDVar2 + 4) & 0xfffff000;
  }
  getReturnType(local_1c);
  cVar8 = (char)local_34;
  getArgumentTypes();
  pDVar3 = (DName *)operator+((char)local_24,(DName *)0x28);
  pDVar3 = (DName *)DName::operator+(pDVar3,cVar8);
  DName::operator+=(local_c,pDVar3);
  if ((((byte)DAT_1076ccc8 & 0x60) != 0x60) && ((uVar5 & 2) != 0)) {
    DName::operator+=(local_c,(DName *)&local_14);
  }
  if ((~(DAT_1076ccc8 >> 8) & 1) == 0) {
    pDVar3 = (DName *)getThrowTypes();
    DName::operator|=(local_c,pDVar3);
  }
  else {
    pDVar3 = (DName *)getThrowTypes();
    DName::operator+=(local_c,pDVar3);
  }
  if (pDVar2 != (DName *)0x0) {
    DName::operator=(pDVar2,local_c);
    DName::DName(param_1,local_1c);
    return param_1;
  }
  DVar9 = 3;
LAB_10729406:
  DName::DName(param_1,DVar9);
  return param_1;
}


// ==== 10729416 UnDecorator::getDataIndirectType

/* Library Function - Single Match
    private: static class DName __cdecl UnDecorator::getDataIndirectType(class DName const
   &,char,class DName const &,int)
   
   Library: Visual Studio 2005 Release */

DName * __cdecl
UnDecorator::getDataIndirectType(DName *param_1,char param_2,DName *param_3,int param_4)

{
  char cVar1;
  int iVar2;
  DName *pDVar3;
  DName *pDVar4;
  char *pcVar5;
  DName *extraout_ECX;
  DName *this;
  DName *this_00;
  DName *extraout_EDX;
  DName *extraout_EDX_00;
  int extraout_EDX_01;
  uint uVar6;
  undefined3 in_stack_00000009;
  int in_stack_00000014;
  Tokens TVar7;
  DNameStatus DVar8;
  DName local_58 [8];
  char local_50 [8];
  undefined1 local_48 [8];
  char local_40 [8];
  undefined1 local_38 [8];
  char local_30 [8];
  undefined4 local_28;
  uint local_24;
  undefined4 local_20;
  uint local_1c;
  undefined4 local_18;
  uint local_14;
  DName local_10 [4];
  uint local_c;
  char local_5;
  
  local_24 = local_24 & 0xfffff000;
  local_28 = 0;
  local_5 = '\0';
  if (*DAT_1076ccb8 == '\0') {
    if (in_stack_00000014 == 0) {
      iVar2 = DName::isEmpty(_param_2);
      if (iVar2 == 0) {
        if (((*(byte *)(extraout_EDX_01 + 4) & 0x10) == 0) &&
           (iVar2 = DName::isEmpty((DName *)param_4), iVar2 == 0)) {
          cVar1 = (char)local_58;
          pDVar3 = param_1;
          pDVar4 = (DName *)operator+((DNameStatus)local_50,(DName *)0x2);
          pDVar4 = (DName *)DName::operator+(pDVar4,cVar1);
          DName::operator+(pDVar4,pDVar3);
          return param_1;
        }
      }
      else {
        iVar2 = DName::isEmpty((DName *)param_4);
        if (iVar2 != 0) goto LAB_107298e8;
      }
      operator+((DNameStatus)param_1,(DName *)0x2);
      return param_1;
    }
LAB_107298e8:
    DVar8 = 2;
LAB_107298ea:
    DName::DName(param_1,DVar8);
    return param_1;
  }
  if (*DAT_1076ccb8 == '$') {
    getExtendedDataIndirectType((char *)&local_20,(bool *)&param_3,(int)&local_5);
    iVar2 = DName::isEmpty((DName *)&local_20);
    pDVar3 = extraout_ECX;
    if (iVar2 == 0) goto LAB_10729468;
  }
  local_14 = local_14 & 0xfffff000;
  local_18 = 0;
  uVar6 = (int)*DAT_1076ccb8 - (((*DAT_1076ccb8 < 'A') - 1 & 0x2b) + 0x16);
  local_1c = local_1c & 0xfffff000;
  local_20 = 0;
LAB_1072949f:
  if (uVar6 == 4) {
    if (((~(DAT_1076ccc8 >> 1) & 1) != 0) && ((~(DAT_1076ccc8 >> 0x11) & 1) != 0)) {
      iVar2 = DName::isEmpty((DName *)&local_18);
      TVar7 = 7;
      if (iVar2 == 0) {
        UScore(7);
        pcVar5 = local_50;
        cVar1 = (char)local_58;
LAB_107294e9:
        pDVar3 = (DName *)DName::operator+((DName *)&local_18,cVar1);
        pDVar4 = (DName *)DName::operator+(pDVar3,pcVar5);
        pDVar3 = (DName *)&local_18;
        goto LAB_107294fd;
      }
LAB_10729590:
      pcVar5 = UScore(TVar7);
      pDVar3 = (DName *)&local_18;
LAB_10729598:
      DName::operator=(pDVar3,pcVar5);
    }
  }
  else if (uVar6 == 5) {
    if ((~(DAT_1076ccc8 >> 1) & 1) != 0) {
      iVar2 = DName::isEmpty((DName *)&local_20);
      if (iVar2 != 0) {
        pcVar5 = UScore(9);
        pDVar3 = (DName *)&local_20;
        goto LAB_10729598;
      }
      UScore(9);
      pcVar5 = local_40;
      pDVar3 = (DName *)DName::operator+(this,(char)local_48);
      pDVar4 = (DName *)DName::operator+(pDVar3,pcVar5);
      pDVar3 = (DName *)&local_20;
LAB_107294fd:
      DName::operator=(pDVar3,pDVar4);
    }
  }
  else {
    if (uVar6 != 8) {
      DAT_1076ccb8 = DAT_1076ccb8 + 1;
      if (0x1f < uVar6) {
LAB_10729696:
        DVar8 = 1;
        goto LAB_107298ea;
      }
      DName::DName(local_10,(char)param_3);
      pDVar3 = (DName *)DName::operator+((DName *)&local_28,local_58);
      DName::operator=(local_10,pDVar3);
      iVar2 = DName::isEmpty((DName *)&local_18);
      if (iVar2 == 0) {
        pDVar3 = local_58;
        pDVar4 = (DName *)DName::operator+(local_10,(char)local_50);
        pDVar3 = (DName *)DName::operator+(pDVar4,pDVar3);
        DName::operator=(local_10,pDVar3);
      }
      iVar2 = DName::isEmpty((DName *)&local_20);
      if (iVar2 == 0) {
        pDVar3 = local_58;
        pDVar4 = (DName *)DName::operator+(this_00,(char)local_50);
        pDVar3 = (DName *)DName::operator+(pDVar4,pDVar3);
        DName::operator=(local_10,pDVar3);
      }
      if ((uVar6 & 0x10) != 0) {
        if (in_stack_00000014 != 0) goto LAB_10729696;
        if ((char)param_3 == '\0') {
          if (*DAT_1076ccb8 != '\0') {
            pDVar3 = (DName *)getScope();
            DName::operator|=(local_10,pDVar3);
            goto LAB_10729719;
          }
        }
        else {
          pDVar3 = (DName *)operator+((char *)local_58,(DName *)&DAT_10752924);
          DName::operator=(local_10,pDVar3);
          pDVar3 = local_58;
          if (*DAT_1076ccb8 == '\0') {
            pDVar3 = (DName *)operator+((DNameStatus)pDVar3,(DName *)0x2);
          }
          else {
            pDVar4 = (DName *)getScope();
            pDVar3 = (DName *)DName::operator+(pDVar4,pDVar3);
          }
          DName::operator=(local_10,pDVar3);
LAB_10729719:
          cVar1 = *DAT_1076ccb8;
          if (cVar1 != '\0') {
            DAT_1076ccb8 = DAT_1076ccb8 + 1;
            if (cVar1 != '@') goto LAB_10729696;
            goto LAB_1072973e;
          }
        }
        DName::operator+=(local_10,2);
      }
LAB_1072973e:
      if ((~(DAT_1076ccc8 >> 1) & 1) == 0) {
        if (((byte)uVar6 & 0xc) == 0xc) {
          pDVar3 = (DName *)getBasedType();
          DName::operator|=(local_10,pDVar3);
        }
      }
      else if (((byte)uVar6 & 0xc) == 0xc) {
        if (in_stack_00000014 != 0) goto LAB_10729696;
        pDVar3 = local_58;
        pDVar4 = (DName *)getBasedType();
        pDVar3 = (DName *)DName::operator+(pDVar4,pDVar3);
        DName::operator=(local_10,pDVar3);
      }
      if ((uVar6 & 2) != 0) {
        pDVar3 = (DName *)operator+((char *)local_58,(DName *)"volatile ");
        DName::operator=(local_10,pDVar3);
      }
      if ((uVar6 & 1) != 0) {
        pDVar3 = (DName *)operator+((char *)local_58,(DName *)"const ");
        DName::operator=(local_10,pDVar3);
      }
      if (in_stack_00000014 == 0) {
        iVar2 = DName::isEmpty(_param_2);
        if (iVar2 == 0) {
          uVar6 = *(uint *)(extraout_EDX + 4);
          pDVar3 = extraout_EDX;
          if (((uVar6 & 0x10) == 0) &&
             (iVar2 = DName::isEmpty((DName *)param_4), pDVar3 = extraout_EDX_00, iVar2 == 0)) {
            pDVar3 = local_58;
            cVar1 = (char)local_50;
            pDVar4 = (DName *)operator+((char)local_48,(DName *)0x20);
            pDVar4 = (DName *)DName::operator+(pDVar4,cVar1);
            pDVar3 = (DName *)DName::operator+(pDVar4,pDVar3);
LAB_10729859:
            DName::operator+=(local_10,pDVar3);
          }
          else {
            if (-1 < (char)uVar6) goto LAB_1072984c;
            DName::operator=(local_10,pDVar3);
          }
        }
        else {
          iVar2 = DName::isEmpty((DName *)param_4);
          if (iVar2 == 0) {
LAB_1072984c:
            pDVar3 = (DName *)operator+((char)local_58,(DName *)0x20);
            goto LAB_10729859;
          }
        }
      }
      uVar6 = local_c | 0x10;
      if (local_5 != '\0') {
        uVar6 = local_c | 0x210;
      }
LAB_10729873:
      local_c = uVar6;
      pDVar3 = local_10;
LAB_10729468:
      DName::DName(param_1,pDVar3);
      return param_1;
    }
    if ((~(DAT_1076ccc8 >> 1) & 1) != 0) {
      iVar2 = DName::isEmpty((DName *)&local_18);
      TVar7 = 8;
      if (iVar2 != 0) goto LAB_10729590;
      UScore(8);
      pcVar5 = local_30;
      cVar1 = (char)local_38;
      goto LAB_107294e9;
    }
  }
  DAT_1076ccb8 = DAT_1076ccb8 + 1;
  if (*DAT_1076ccb8 == '$') {
    getExtendedDataIndirectType((char *)local_10,(bool *)&param_3,(int)&local_5);
    iVar2 = DName::isEmpty(local_10);
    uVar6 = local_c;
    if (iVar2 == 0) goto LAB_10729873;
  }
  uVar6 = (int)*DAT_1076ccb8 - (((*DAT_1076ccb8 < 'A') - 1 & 0x2b) + 0x16);
  goto LAB_1072949f;
}


// ==== 107298fa UnDecorator::operator_char*

/* Library Function - Single Match
    public: __thiscall UnDecorator::operator char *(void)
   
   Library: Visual Studio 2005 Release */

char * __thiscall UnDecorator::operator_char_(UnDecorator *this)

{
  char cVar1;
  DName *pDVar2;
  int iVar3;
  char *pcVar4;
  char *pcVar5;
  char local_24 [16];
  undefined4 local_14;
  uint local_10;
  undefined4 local_c;
  uint local_8;
  
  local_c = 0;
  local_14 = 0;
  local_8 = local_8 & 0xfffff000;
  local_10 = local_10 & 0xfffff000;
  if (DAT_1076ccbc == (char *)0x0) goto LAB_10729990;
  if (*DAT_1076ccbc == '?') {
    if (DAT_1076ccbc[1] != '@') {
      if (DAT_1076ccbc[1] == '$') {
        pDVar2 = (DName *)getTemplateName(SUB41(local_24,0));
        DName::operator=((DName *)&local_c,pDVar2);
        if (((byte)local_8 & 0xf) != 1) goto LAB_10729990;
        local_8 = local_8 & 0xfffffff0;
        DAT_1076ccb8 = DAT_1076ccbc;
      }
      goto LAB_1072997d;
    }
    DAT_1076ccb8 = DAT_1076ccb8 + 2;
    getDecoratedName();
    pDVar2 = (DName *)operator+(local_24,(DName *)&DAT_10752a98);
  }
  else {
LAB_1072997d:
    pDVar2 = (DName *)getDecoratedName();
  }
  DName::operator=((DName *)&local_c,pDVar2);
LAB_10729990:
  iVar3 = (int)(local_8 << 0x1c) >> 0x1c;
  if (iVar3 == 3) {
    return (char *)0x0;
  }
  if ((iVar3 == 1) || ((((ushort)DAT_1076ccc8 & 0x1000) == 0 && (*DAT_1076ccb8 != '\0')))) {
    DName::operator=((DName *)&local_14,DAT_1076ccbc);
  }
  else {
    DName::operator=((DName *)&local_14,(DName *)&local_c);
  }
  if (DAT_1076ccc0 == (char *)0x0) {
    iVar3 = DName::length((DName *)&local_14);
    DAT_1076ccc4 = iVar3 + 1;
    DAT_1076ccc0 = (char *)(*DAT_1076cc98)(iVar3 + 8U & 0xfffffff8);
    if (DAT_1076ccc0 == (char *)0x0) {
      return (char *)0x0;
    }
  }
  DName::getString((DName *)&local_14,DAT_1076ccc0,DAT_1076ccc4);
  pcVar4 = DAT_1076ccc0;
  pcVar5 = DAT_1076ccc0;
  while (cVar1 = *pcVar4, cVar1 != '\0') {
    if (cVar1 == ' ') {
      *pcVar5 = ' ';
      pcVar5 = pcVar5 + 1;
      do {
        pcVar4 = pcVar4 + 1;
      } while (*pcVar4 == ' ');
    }
    else {
      *pcVar5 = cVar1;
      pcVar5 = pcVar5 + 1;
      pcVar4 = pcVar4 + 1;
    }
  }
  *pcVar5 = '\0';
  return DAT_1076ccc0;
}


// ==== 10729a46 UnDecorator::getPtrRefType

/* Library Function - Single Match
    private: static class DName __cdecl UnDecorator::getPtrRefType(class DName const &,class DName
   const &,char)
   
   Library: Visual Studio 2005 Release */

DName * __cdecl UnDecorator::getPtrRefType(DName *param_1,DName *param_2,char param_3)

{
  char cVar1;
  int iVar2;
  DName *extraout_ECX;
  undefined3 in_stack_0000000d;
  DName *in_stack_00000010;
  DName local_c [8];
  
  cVar1 = *DAT_1076ccb8;
  if (cVar1 == '\0') {
    DName::DName(local_c,2);
    DName::operator+=(local_c,(char)in_stack_00000010);
    iVar2 = DName::isEmpty(param_2);
    if (iVar2 == 0) {
      DName::operator+=(local_c,extraout_ECX);
    }
    iVar2 = DName::isEmpty(_param_3);
    if (iVar2 == 0) {
      iVar2 = DName::isEmpty(param_2);
      if (iVar2 == 0) {
        DName::operator+=(local_c,' ');
      }
      DName::operator+=(local_c,_param_3);
    }
    DName::DName(param_1,local_c);
  }
  else if (((cVar1 < '6') || ('9' < cVar1)) && (cVar1 != '_')) {
    getDataIndirectType(local_c,param_3,in_stack_00000010,(int)param_2);
    getPtrRefDataType(param_1,(int)local_c);
  }
  else {
    DName::DName(local_c,(char)in_stack_00000010);
    iVar2 = DName::isEmpty(param_2);
    if (iVar2 == 0) {
      iVar2 = DName::isEmpty(_param_3);
      if ((iVar2 != 0) || (((byte)_param_3[4] & 0x10) == 0)) {
        DName::operator+=(local_c,param_2);
      }
    }
    iVar2 = DName::isEmpty(_param_3);
    if (iVar2 == 0) {
      DName::operator+=(local_c,_param_3);
    }
    getFunctionIndirectType(param_1);
  }
  return param_1;
}


// ==== 10729bad ___unDName

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    ___unDName
   
   Library: Visual Studio 2005 Release */

char * __cdecl
___unDName(char *param_1,char *param_2,int param_3,int param_4,undefined4 param_5,ushort param_6)

{
  int iVar1;
  UnDecorator local_98 [120];
  char *local_20;
  undefined4 uStack_c;
  undefined *local_8;
  
  local_8 = &DAT_1075c940;
  uStack_c = 0x10729bbc;
  if ((param_4 != 0) && (iVar1 = __mtinitlocknum(5), iVar1 != 0)) {
    __lock(5);
    local_8 = (undefined *)0x0;
    DAT_1076cc98 = param_4;
    _DAT_1076cc9c = param_5;
    _DAT_1076cca8 = 0;
    _DAT_1076cca0 = 0;
    _DAT_1076cca4 = 0;
    UnDecorator::UnDecorator
              (local_98,param_1,param_2,param_3,(_func_char_ptr_long *)0x0,(uint)param_6);
    local_20 = UnDecorator::operator_char_(local_98);
    HeapManager::Destructor((HeapManager *)&DAT_1076cc98);
    local_8 = (undefined *)0xfffffffe;
    FUN_10729c47();
    return local_20;
  }
  return (char *)0x0;
}


// ==== 10729c47 FUN_10729c47

void FUN_10729c47(void)

{
  FUN_10724ccf(5);
  return;
}


// ==== 10729cf3 FUN_10729cf3

DName * __cdecl FUN_10729cf3(DName *param_1,DName *param_2)

{
  byte bVar1;
  byte *pbVar2;
  DName *pDVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  char *pcVar7;
  DName local_28 [8];
  DName local_20 [4];
  byte local_1c;
  DName local_18 [4];
  uint local_14;
  undefined4 local_10;
  uint local_c;
  byte local_5;
  
  pbVar2 = DAT_1076ccb8;
  bVar1 = *DAT_1076ccb8;
  if (bVar1 == 0) {
    operator+((DNameStatus)param_1,(DName *)0x2);
    return param_1;
  }
  DAT_1076ccb8 = DAT_1076ccb8 + 1;
  local_10 = 0;
  uVar6 = (uint)bVar1;
  local_c = local_c & 0xfffff000;
  uVar5 = 0xffffffff;
  if (uVar6 < 0x4f) {
    if (uVar6 != 0x4e) {
      switch(uVar6) {
      case 0x43:
      case 0x44:
      case 0x45:
        pcVar7 = "char";
        break;
      case 0x46:
      case 0x47:
        pcVar7 = "short";
        break;
      case 0x48:
      case 0x49:
        pcVar7 = "int";
        break;
      case 0x4a:
      case 0x4b:
        pcVar7 = "long";
        break;
      default:
        goto switchD_10729d43_caseD_4c;
      case 0x4d:
        pcVar7 = "float";
      }
      goto LAB_10729f07;
    }
LAB_10729f2d:
    DName::operator+=((DName *)&local_10,"double");
LAB_10729f3a:
    if (uVar5 != 0xffffffff) {
LAB_10729eab:
      local_10 = 0;
      local_c = local_c & 0xfffff000;
      DName::DName(local_18,param_2);
      if (uVar5 != 0xfffffffe) {
        iVar4 = DName::isEmpty(param_2);
        if (iVar4 != 0) {
          if ((uVar5 & 1) == 0) {
            if ((uVar5 & 2) != 0) {
              DName::operator=((DName *)&local_10,"volatile");
            }
          }
          else {
            DName::operator=((DName *)&local_10,"const");
            if ((uVar5 & 2) != 0) {
              DName::operator+=((DName *)&local_10," volatile");
            }
          }
        }
        UnDecorator::getPtrRefType(param_1,(DName *)&local_10,(char)local_18);
        return param_1;
      }
      local_14 = local_14 | 0x80;
      UnDecorator::getPtrRefType(local_20,(DName *)&local_10,(char)local_18);
      if ((local_1c & 0x80) == 0) {
        DName::operator+=(local_20,"[]");
      }
      pDVar3 = local_20;
      goto LAB_10729e8c;
    }
LAB_10729f43:
    if (uVar6 == 0x43) {
      pcVar7 = "signed ";
      pDVar3 = local_18;
LAB_10729fa3:
      pDVar3 = (DName *)operator+((char *)pDVar3,(DName *)pcVar7);
      DName::operator=((DName *)&local_10,pDVar3);
    }
    else {
      if ((((uVar6 == 0x45) || (uVar6 == 0x47)) || (uVar6 == 0x49)) || (uVar6 == 0x4b)) {
        pcVar7 = "unsigned ";
        pDVar3 = local_20;
        goto LAB_10729fa3;
      }
      if ((uVar6 == 0x5f) &&
         (((local_5 == 0x45 || (local_5 == 0x47)) ||
          ((local_5 == 0x49 || ((local_5 == 0x4b || (local_5 == 0x4d)))))))) {
        pcVar7 = "unsigned ";
        pDVar3 = local_28;
        goto LAB_10729fa3;
      }
    }
    iVar4 = DName::isEmpty(param_2);
    if (iVar4 == 0) {
      pDVar3 = (DName *)operator+((char)local_28,(DName *)0x20);
      DName::operator+=((DName *)&local_10,pDVar3);
    }
  }
  else {
    if (uVar6 == 0x4f) {
      DName::operator=((DName *)&local_10,"long ");
      goto LAB_10729f2d;
    }
    if (0x4f < uVar6) {
      if (uVar6 < 0x54) {
        uVar5 = uVar6 & 3;
        goto LAB_10729f3a;
      }
      if (uVar6 == 0x58) {
        pcVar7 = "void";
        goto LAB_10729f07;
      }
      if (uVar6 != 0x5f) goto switchD_10729d43_caseD_4c;
      local_5 = *DAT_1076ccb8;
      DAT_1076ccb8 = pbVar2 + 2;
      uVar5 = (uint)local_5;
      if (uVar5 < 0x4e) {
        if (uVar5 < 0x4c) {
          if (uVar5 < 0x48) {
            if (uVar5 < 0x46) {
              if (uVar5 == 0x24) {
                FUN_10729cf3(local_20,param_2);
                operator+((char *)param_1,(DName *)"__w64 ");
                return param_1;
              }
              if (1 < uVar5 - 0x44) goto LAB_10729e9a;
              pcVar7 = "__int8";
            }
            else {
              pcVar7 = "__int16";
            }
          }
          else if (uVar5 < 0x48) {
LAB_10729e9a:
            pcVar7 = "UNKNOWN";
          }
          else if (uVar5 < 0x4a) {
            pcVar7 = "__int32";
          }
          else {
            if (0x4b < uVar5) goto LAB_10729e9a;
            pcVar7 = "__int64";
          }
        }
        else {
          pcVar7 = "__int128";
        }
LAB_10729f07:
        DName::operator=((DName *)&local_10,pcVar7);
        goto LAB_10729f43;
      }
      if (uVar5 == 0x4e) {
        pcVar7 = "bool";
        goto LAB_10729f07;
      }
      if (uVar5 != 0x4f) {
        if (uVar5 != 0x57) {
          if (1 < uVar5 - 0x58) goto LAB_10729e9a;
          goto LAB_10729e63;
        }
        pcVar7 = "wchar_t";
        goto LAB_10729f07;
      }
      uVar5 = 0xfffffffe;
      goto LAB_10729eab;
    }
switchD_10729d43_caseD_4c:
LAB_10729e63:
    DAT_1076ccb8 = DAT_1076ccb8 + -1;
    pDVar3 = (DName *)UnDecorator::getECSUDataType();
    DName::operator=((DName *)&local_10,pDVar3);
    iVar4 = DName::isEmpty((DName *)&local_10);
    if (iVar4 == 0) goto LAB_10729f43;
  }
  pDVar3 = (DName *)&local_10;
LAB_10729e8c:
  DName::DName(param_1,pDVar3);
  return param_1;
}


// ==== 1072a07a UnDecorator::getPrimaryDataType

/* Library Function - Single Match
    private: static class DName __cdecl UnDecorator::getPrimaryDataType(class DName const &)
   
   Library: Visual Studio 2005 Release */

DName * __cdecl UnDecorator::getPrimaryDataType(DName *param_1)

{
  char cVar1;
  int iVar2;
  DName *pDVar3;
  char *pcVar4;
  DName *in_stack_00000008;
  DName local_1c [8];
  undefined4 local_14;
  uint local_10;
  undefined4 local_c;
  uint local_8;
  
  cVar1 = *DAT_1076ccb8;
  local_8 = local_8 & 0xfffff000;
  local_c = 0;
  pcVar4 = DAT_1076ccb8;
  if (cVar1 != '\0') {
    if (cVar1 != '$') {
      if (cVar1 != 'A') {
        if (cVar1 != 'B') {
          FUN_10729cf3(param_1,in_stack_00000008);
          return param_1;
        }
        DName::operator=((DName *)&local_c,"volatile");
        iVar2 = DName::isEmpty(in_stack_00000008);
        if (iVar2 == 0) {
          DName::operator+=((DName *)&local_c,' ');
        }
      }
      DName::DName((DName *)&local_14,in_stack_00000008);
      DAT_1076ccb8 = DAT_1076ccb8 + 1;
      local_10 = local_10 | 0x10;
      getPtrRefType(param_1,(DName *)&local_c,(char)&local_14);
      return param_1;
    }
    if (DAT_1076ccb8[1] == '$') {
      pcVar4 = DAT_1076ccb8 + 2;
      cVar1 = *pcVar4;
      if (cVar1 != '\0') {
        if (cVar1 == 'A') {
          DAT_1076ccb8 = DAT_1076ccb8 + 3;
          getFunctionIndirectType(param_1);
          return param_1;
        }
        if (cVar1 == 'B') {
          DAT_1076ccb8 = DAT_1076ccb8 + 3;
          getPtrRefDataType(param_1,(int)in_stack_00000008);
          return param_1;
        }
        if (cVar1 == 'C') {
          local_10 = local_10 & 0xfffff000;
          DAT_1076ccb8 = DAT_1076ccb8 + 3;
          local_14 = 0;
          pDVar3 = (DName *)getDataIndirectType(local_1c,(char)in_stack_00000008,(DName *)0x0,
                                                (int)&local_14);
          FUN_10729cf3(param_1,pDVar3);
          return param_1;
        }
        goto LAB_1072a11f;
      }
    }
    else if (DAT_1076ccb8[1] != '\0') {
LAB_1072a11f:
      DAT_1076ccb8 = pcVar4;
      DName::DName(param_1,1);
      return param_1;
    }
  }
  DAT_1076ccb8 = pcVar4;
  operator+((DNameStatus)param_1,(DName *)0x2);
  return param_1;
}


// ==== 1072a1b8 UnDecorator::getDataType

/* Library Function - Single Match
    private: static class DName __cdecl UnDecorator::getDataType(class DName *)
   
   Library: Visual Studio 2005 Release */

DName * __cdecl UnDecorator::getDataType(DName *param_1)

{
  char cVar1;
  int iVar2;
  DName *pDVar3;
  DName *in_stack_00000008;
  DName local_1c [8];
  undefined4 local_14;
  uint local_10;
  DName local_c [8];
  
  DName::DName(local_c,in_stack_00000008);
  cVar1 = *DAT_1076ccb8;
  if (cVar1 == '\0') {
    operator+((DNameStatus)param_1,(DName *)0x2);
  }
  else {
    if (cVar1 == '?') {
      DAT_1076ccb8 = DAT_1076ccb8 + 1;
      local_10 = local_10 & 0xfffff000;
      local_14 = 0;
      pDVar3 = (DName *)getDataIndirectType(local_1c,(char)local_c,(DName *)0x0,(int)&local_14);
      DName::operator=(local_c,pDVar3);
    }
    else if (cVar1 == 'X') {
      DAT_1076ccb8 = DAT_1076ccb8 + 1;
      iVar2 = DName::isEmpty(local_c);
      if (iVar2 == 0) {
        operator+((char *)param_1,(DName *)"void ");
        return param_1;
      }
      DName::DName(param_1,"void");
      return param_1;
    }
    getPrimaryDataType(param_1);
  }
  return param_1;
}


// ==== 1072a269 UnDecorator::getExternalDataType

/* Library Function - Single Match
    private: static class DName __cdecl UnDecorator::getExternalDataType(class DName const &)
   
   Library: Visual Studio 2005 Release */

DName * __cdecl UnDecorator::getExternalDataType(DName *param_1)

{
  DName *pDVar1;
  DName *this;
  DName *this_00;
  undefined1 local_1c [8];
  DName local_14 [8];
  DName local_c [8];
  
  pDVar1 = HeapManager::getMemory((HeapManager *)&DAT_1076cc98,8,0);
  this_00 = (DName *)0x0;
  if (pDVar1 != (DName *)0x0) {
    *(uint *)(pDVar1 + 4) = *(uint *)(pDVar1 + 4) & 0xfffff000;
    *(undefined4 *)pDVar1 = 0;
    this_00 = pDVar1;
  }
  getDataType(param_1);
  getDataIndirectType();
  pDVar1 = local_14;
  this = (DName *)DName::operator+(local_c,(char)local_1c);
  pDVar1 = (DName *)DName::operator+(this,pDVar1);
  DName::operator=(this_00,pDVar1);
  return param_1;
}


// ==== 1072a2cd _V6_HeapAlloc

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    _V6_HeapAlloc
   
   Library: Visual Studio 2005 Release */

int * __cdecl _V6_HeapAlloc(uint *param_1)

{
  undefined4 local_20;
  
  local_20 = (int *)0x0;
  if (param_1 <= DAT_1076ce10) {
    __lock(4);
    local_20 = ___sbh_alloc_block(param_1);
    FUN_1072a313();
  }
  return local_20;
}


// ==== 1072a313 FUN_1072a313

void FUN_1072a313(void)

{
  FUN_10724ccf(4);
  return;
}


// ==== 1072a391 _malloc

/* Library Function - Single Match
    _malloc
   
   Library: Visual Studio 2005 Release */

void * __cdecl _malloc(size_t _Size)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  size_t sVar4;
  uint dwBytes;
  
  if (0xffffffe0 < _Size) {
    __callnewh(_Size);
    puVar3 = (undefined4 *)FUN_10724278();
    *puVar3 = 0xc;
    return (void *)0x0;
  }
  do {
    if (DAT_1076c7d4 == (HANDLE)0x0) {
      __FF_MSGBANNER();
      FUN_10720477(0x1e);
      ___crtExitProcess(0xff);
    }
    if (DAT_1076ce34 == 1) {
      dwBytes = _Size;
      if (_Size == 0) {
        dwBytes = 1;
      }
LAB_1072a402:
      piVar1 = HeapAlloc(DAT_1076c7d4,0,dwBytes);
    }
    else if ((DAT_1076ce34 != 3) || (piVar1 = _V6_HeapAlloc((uint *)_Size), piVar1 == (int *)0x0)) {
      sVar4 = _Size;
      if (_Size == 0) {
        sVar4 = 1;
      }
      dwBytes = sVar4 + 0xf & 0xfffffff0;
      goto LAB_1072a402;
    }
    if (piVar1 != (int *)0x0) {
      return piVar1;
    }
    if (DAT_1076cd20 == 0) {
      puVar3 = (undefined4 *)FUN_10724278();
      *puVar3 = 0xc;
      goto LAB_1072a430;
    }
    iVar2 = __callnewh(_Size);
    if (iVar2 == 0) {
LAB_1072a430:
      puVar3 = (undefined4 *)FUN_10724278();
      *puVar3 = 0xc;
      return (void *)0x0;
    }
  } while( true );
}


// ==== 1072a454 __local_unwind4

/* Library Function - Single Match
    __local_unwind4
   
   Libraries: Visual Studio 2017 Debug, Visual Studio 2017 Release, Visual Studio 2019 Debug, Visual
   Studio 2019 Release */

void __cdecl __local_unwind4(uint *param_1,int param_2,uint param_3)

{
  undefined4 *puVar1;
  uint uVar2;
  void *pvStack_28;
  undefined1 *puStack_24;
  uint local_20;
  uint uStack_1c;
  int iStack_18;
  uint *puStack_14;
  
  puStack_14 = param_1;
  iStack_18 = param_2;
  uStack_1c = param_3;
  puStack_24 = &LAB_1072a4e4;
  pvStack_28 = ExceptionList;
  local_20 = DAT_10765c70 ^ (uint)&pvStack_28;
  ExceptionList = &pvStack_28;
  while( true ) {
    uVar2 = *(uint *)(param_2 + 0xc);
    if ((uVar2 == 0xfffffffe) || ((param_3 != 0xfffffffe && (uVar2 <= param_3)))) break;
    puVar1 = (undefined4 *)((*(uint *)(param_2 + 8) ^ *param_1) + 0x10 + uVar2 * 0xc);
    *(undefined4 *)(param_2 + 0xc) = *puVar1;
    if (puVar1[1] == 0) {
      __NLG_Notify(0x101);
      FUN_10724f24();
    }
  }
  ExceptionList = pvStack_28;
  return;
}


// ==== 1072a52a FUN_1072a52a

void FUN_1072a52a(int param_1)

{
  __local_unwind4(*(uint **)(param_1 + 0x28),*(int *)(param_1 + 0x18),*(uint *)(param_1 + 0x1c));
  return;
}


// ==== 1072a546 _EH4_CallFilterFunc

/* Library Function - Single Match
    @_EH4_CallFilterFunc@8
   
   Library: Visual Studio 2005 Release
   __fastcall _EH4_CallFilterFunc,8 */

void __fastcall _EH4_CallFilterFunc(undefined *param_1)

{
  (*(code *)param_1)();
  return;
}


// ==== 1072a55d _EH4_TransferToHandler

/* Library Function - Single Match
    @_EH4_TransferToHandler@8
   
   Library: Visual Studio 2005 Release
   __fastcall _EH4_TransferToHandler,8 */

void __fastcall _EH4_TransferToHandler(undefined *UNRECOVERED_JUMPTABLE)

{
  __NLG_Notify(1);
                    /* WARNING: Could not recover jumptable at 0x1072a574. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)UNRECOVERED_JUMPTABLE)();
  return;
}


// ==== 1072a576 _EH4_GlobalUnwind

/* Library Function - Single Match
    @_EH4_GlobalUnwind@4
   
   Library: Visual Studio 2005 Release
   __fastcall _EH4_GlobalUnwind,4 */

void __fastcall _EH4_GlobalUnwind(PVOID param_1)

{
  RtlUnwind(param_1,(PVOID)0x1072a58b,(PEXCEPTION_RECORD)0x0,(PVOID)0x0);
  return;
}


// ==== 1072a590 _EH4_LocalUnwind

/* Library Function - Single Match
    @_EH4_LocalUnwind@16
   
   Library: Visual Studio 2005 Release
   __fastcall _EH4_LocalUnwind,16 */

void __fastcall _EH4_LocalUnwind(int param_1,uint param_2,undefined4 param_3,uint *param_4)

{
  __local_unwind4(param_4,param_1,param_2);
  return;
}


// ==== 1072a5b0 __ValidateImageBase

/* Library Function - Single Match
    __ValidateImageBase
   
   Library: Visual Studio 2005 Release */

BOOL __cdecl __ValidateImageBase(PBYTE pImageBase)

{
  if ((*(short *)pImageBase == 0x5a4d) &&
     (*(int *)(pImageBase + *(int *)(pImageBase + 0x3c)) == 0x4550)) {
    return (uint)((short)*(int *)((int)(pImageBase + *(int *)(pImageBase + 0x3c)) + 0x18) == 0x10b);
  }
  return 0;
}


// ==== 1072a5e0 __FindPESection

/* Library Function - Single Match
    __FindPESection
   
   Library: Visual Studio 2005 Release */

PIMAGE_SECTION_HEADER __cdecl __FindPESection(PBYTE pImageBase,DWORD_PTR rva)

{
  int iVar1;
  PIMAGE_SECTION_HEADER p_Var2;
  uint uVar3;
  
  iVar1 = *(int *)(pImageBase + 0x3c);
  uVar3 = 0;
  p_Var2 = (PIMAGE_SECTION_HEADER)
           (pImageBase + *(ushort *)(pImageBase + iVar1 + 0x14) + 0x18 + iVar1);
  if (*(ushort *)(pImageBase + iVar1 + 6) != 0) {
    do {
      if ((p_Var2->VirtualAddress <= rva) &&
         (rva < (p_Var2->Misc).PhysicalAddress + p_Var2->VirtualAddress)) {
        return p_Var2;
      }
      uVar3 = uVar3 + 1;
      p_Var2 = p_Var2 + 1;
    } while (uVar3 < *(ushort *)(pImageBase + iVar1 + 6));
  }
  return (PIMAGE_SECTION_HEADER)0x0;
}


// ==== 1072a630 __IsNonwritableInCurrentImage

/* Library Function - Single Match
    __IsNonwritableInCurrentImage
   
   Library: Visual Studio */

BOOL __cdecl __IsNonwritableInCurrentImage(PBYTE pTarget)

{
  BOOL BVar1;
  PIMAGE_SECTION_HEADER p_Var2;
  void *local_14;
  code *pcStack_10;
  uint local_c;
  undefined4 local_8;
  
  pcStack_10 = __except_handler4;
  local_14 = ExceptionList;
  local_c = DAT_10765c70 ^ 0x1075c9a0;
  ExceptionList = &local_14;
  local_8 = 0;
  BVar1 = __ValidateImageBase((PBYTE)&IMAGE_DOS_HEADER_10700000);
  if (BVar1 != 0) {
    p_Var2 = __FindPESection((PBYTE)&IMAGE_DOS_HEADER_10700000,(DWORD_PTR)(pTarget + -0x10700000));
    if (p_Var2 != (PIMAGE_SECTION_HEADER)0x0) {
      ExceptionList = local_14;
      return ~(p_Var2->Characteristics >> 0x1f) & 1;
    }
  }
  ExceptionList = local_14;
  return 0;
}


// ==== 1072a6eb __initp_misc_winsig

/* Library Function - Single Match
    __initp_misc_winsig
   
   Library: Visual Studio 2005 Release */

void __cdecl __initp_misc_winsig(undefined4 param_1)

{
  DAT_1076ccd4 = param_1;
  DAT_1076ccd8 = param_1;
  DAT_1076ccdc = param_1;
  DAT_1076cce0 = param_1;
  return;
}


// ==== 1072a79f siglookup

/* Library Function - Single Match
    _siglookup
   
   Library: Visual Studio 2005 Release */

uint __cdecl siglookup(uint param_1)

{
  uint uVar1;
  int in_EDX;
  
  uVar1 = param_1;
  do {
    if (*(int *)(uVar1 + 4) == in_EDX) break;
    uVar1 = uVar1 + 0xc;
  } while (uVar1 < DAT_10765e1c * 0xc + param_1);
  if ((DAT_10765e1c * 0xc + param_1 <= uVar1) || (*(int *)(uVar1 + 4) != in_EDX)) {
    uVar1 = 0;
  }
  return uVar1;
}


// ==== 1072a7d3 ___get_sigabrt

/* Library Function - Single Match
    ___get_sigabrt
   
   Library: Visual Studio 2005 Release */

_PHNDLR __cdecl ___get_sigabrt(void)

{
  _PHNDLR p_Var1;
  
  p_Var1 = (_PHNDLR)FUN_1071f707(DAT_1076ccdc);
  return p_Var1;
}


// ==== 1072aa2f _raise

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    _raise
   
   Library: Visual Studio 2005 Release */

int __cdecl _raise(int _SigNum)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  code *pcVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  DWORD *pDVar7;
  DWORD local_34;
  DWORD local_30;
  int local_28;
  
  pDVar7 = (DWORD *)0x0;
  bVar1 = false;
  if (_SigNum < 0xc) {
    if (_SigNum != 0xb) {
      if (_SigNum == 2) {
        puVar6 = &DAT_1076ccd4;
        iVar3 = DAT_1076ccd4;
        goto LAB_1072aae4;
      }
      if (_SigNum != 4) {
        if (_SigNum == 6) goto LAB_1072aac2;
        if (_SigNum != 8) goto LAB_1072aaa6;
      }
    }
    pDVar7 = FUN_1071f8e0();
    if (pDVar7 == (DWORD *)0x0) {
      return -1;
    }
    uVar2 = siglookup(pDVar7[0x17]);
    puVar6 = (undefined4 *)(uVar2 + 8);
    pcVar4 = (code *)*puVar6;
  }
  else {
    if (_SigNum == 0xf) {
      puVar6 = &DAT_1076cce0;
      iVar3 = DAT_1076cce0;
    }
    else if (_SigNum == 0x15) {
      puVar6 = &DAT_1076ccd8;
      iVar3 = DAT_1076ccd8;
    }
    else {
      if (_SigNum != 0x16) {
LAB_1072aaa6:
        puVar6 = (undefined4 *)FUN_10724278();
        *puVar6 = 0x16;
        FUN_10723411((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        return -1;
      }
LAB_1072aac2:
      puVar6 = &DAT_1076ccdc;
      iVar3 = DAT_1076ccdc;
    }
LAB_1072aae4:
    bVar1 = true;
    pcVar4 = (code *)FUN_1071f707(iVar3);
  }
  if (pcVar4 == (code *)0x1) {
    return 0;
  }
  if (pcVar4 == (code *)0x0) {
                    /* WARNING: Subroutine does not return */
    __exit(3);
  }
  if (bVar1) {
    __lock(0);
  }
  if (((_SigNum == 8) || (_SigNum == 0xb)) || (_SigNum == 4)) {
    local_30 = pDVar7[0x18];
    pDVar7[0x18] = 0;
    if (_SigNum == 8) {
      local_34 = pDVar7[0x19];
      pDVar7[0x19] = 0x8c;
      goto LAB_1072ab48;
    }
  }
  else {
LAB_1072ab48:
    if (_SigNum == 8) {
      for (local_28 = DAT_10765e10; local_28 < DAT_10765e14 + DAT_10765e10; local_28 = local_28 + 1)
      {
        *(undefined4 *)(local_28 * 0xc + 8 + pDVar7[0x17]) = 0;
      }
      goto LAB_1072ab82;
    }
  }
  uVar5 = __encoded_null();
  *puVar6 = uVar5;
LAB_1072ab82:
  FUN_1072aba3();
  if (_SigNum == 8) {
    (*pcVar4)(8,pDVar7[0x19]);
  }
  else {
    (*pcVar4)(_SigNum);
    if ((_SigNum != 0xb) && (_SigNum != 4)) {
      return 0;
    }
  }
  pDVar7[0x18] = local_30;
  if (_SigNum == 8) {
    pDVar7[0x19] = local_34;
  }
  return 0;
}


// ==== 1072aba3 FUN_1072aba3

void FUN_1072aba3(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x1c) != 0) {
    FUN_10724ccf(0);
  }
  return;
}


// ==== 1072abdf FUN_1072abdf

undefined4 __cdecl FUN_1072abdf(undefined4 param_1,undefined4 param_2,uint param_3)

{
  HMODULE hModule;
  FARPROC pFVar1;
  int iVar2;
  code *pcVar3;
  code *pcVar4;
  undefined4 uVar5;
  undefined1 local_24 [8];
  byte local_1c;
  undefined1 local_18 [4];
  uint local_14;
  int local_10;
  int local_c;
  int local_8;
  
  local_c = __encoded_null();
  local_8 = 0;
  local_10 = 0;
  local_14 = 0;
  if (DAT_1076cce8 == 0) {
    hModule = LoadLibraryA("USER32.DLL");
    if (hModule == (HMODULE)0x0) {
      return 0;
    }
    pFVar1 = GetProcAddress(hModule,"MessageBoxA");
    if (pFVar1 == (FARPROC)0x0) {
      return 0;
    }
    DAT_1076cce8 = FUN_1071f690((int)pFVar1);
    pFVar1 = GetProcAddress(hModule,"GetActiveWindow");
    DAT_1076ccec = FUN_1071f690((int)pFVar1);
    pFVar1 = GetProcAddress(hModule,"GetLastActivePopup");
    DAT_1076ccf0 = FUN_1071f690((int)pFVar1);
    iVar2 = __get_osplatform(&local_10);
    if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
      __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    if (local_10 == 2) {
      pFVar1 = GetProcAddress(hModule,"GetUserObjectInformationA");
      DAT_1076ccf8 = FUN_1071f690((int)pFVar1);
      if (DAT_1076ccf8 != 0) {
        pFVar1 = GetProcAddress(hModule,"GetProcessWindowStation");
        DAT_1076ccf4 = FUN_1071f690((int)pFVar1);
      }
    }
  }
  if ((DAT_1076ccf4 != local_c) && (DAT_1076ccf8 != local_c)) {
    pcVar3 = (code *)FUN_1071f707(DAT_1076ccf4);
    pcVar4 = (code *)FUN_1071f707(DAT_1076ccf8);
    if (((pcVar3 != (code *)0x0) && (pcVar4 != (code *)0x0)) &&
       (((iVar2 = (*pcVar3)(), iVar2 == 0 ||
         (iVar2 = (*pcVar4)(iVar2,1,local_24,0xc,local_18), iVar2 == 0)) || ((local_1c & 1) == 0))))
    {
      iVar2 = __get_winmajor(&local_14);
      if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
        __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      if (local_14 < 4) {
        param_3 = param_3 | 0x40000;
      }
      else {
        param_3 = param_3 | 0x200000;
      }
      goto LAB_1072ad75;
    }
  }
  if ((((DAT_1076ccec != local_c) &&
       (pcVar3 = (code *)FUN_1071f707(DAT_1076ccec), pcVar3 != (code *)0x0)) &&
      (local_8 = (*pcVar3)(), local_8 != 0)) &&
     ((DAT_1076ccf0 != local_c &&
      (pcVar3 = (code *)FUN_1071f707(DAT_1076ccf0), pcVar3 != (code *)0x0)))) {
    local_8 = (*pcVar3)(local_8);
  }
LAB_1072ad75:
  pcVar3 = (code *)FUN_1071f707(DAT_1076cce8);
  if (pcVar3 == (code *)0x0) {
    return 0;
  }
  uVar5 = (*pcVar3)(local_8,param_1,param_2,param_3);
  return uVar5;
}


// ==== 1072ad9c _strcat_s

/* Library Function - Single Match
    _strcat_s
   
   Library: Visual Studio 2005 Release */

errno_t __cdecl _strcat_s(char *_Dst,rsize_t _SizeInBytes,char *_Src)

{
  char cVar1;
  undefined4 *puVar2;
  char *pcVar3;
  errno_t eVar4;
  
  if ((_Dst != (char *)0x0) && (_SizeInBytes != 0)) {
    pcVar3 = _Dst;
    if (_Src != (char *)0x0) {
      do {
        if (*pcVar3 == '\0') break;
        pcVar3 = pcVar3 + 1;
        _SizeInBytes = _SizeInBytes - 1;
      } while (_SizeInBytes != 0);
      if (_SizeInBytes != 0) {
        do {
          cVar1 = *_Src;
          *pcVar3 = cVar1;
          pcVar3 = pcVar3 + 1;
          _Src = _Src + 1;
          if (cVar1 == '\0') break;
          _SizeInBytes = _SizeInBytes - 1;
        } while (_SizeInBytes != 0);
        if (_SizeInBytes != 0) {
          return 0;
        }
        *_Dst = '\0';
        puVar2 = (undefined4 *)FUN_10724278();
        eVar4 = 0x22;
        *puVar2 = 0x22;
        goto LAB_1072adbb;
      }
    }
    *_Dst = '\0';
  }
  puVar2 = (undefined4 *)FUN_10724278();
  eVar4 = 0x16;
  *puVar2 = 0x16;
LAB_1072adbb:
  FUN_10723411((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  return eVar4;
}


// ==== 1072ae0d _strncpy_s

/* Library Function - Single Match
    _strncpy_s
   
   Library: Visual Studio 2005 Release */

errno_t __cdecl _strncpy_s(char *_Dst,rsize_t _SizeInBytes,char *_Src,rsize_t _MaxCount)

{
  char cVar1;
  undefined4 *puVar2;
  char *pcVar3;
  rsize_t rVar4;
  errno_t eVar5;
  
  if (_MaxCount == 0) {
    if (_Dst == (char *)0x0) {
      if (_SizeInBytes == 0) {
        return 0;
      }
    }
    else {
LAB_1072ae31:
      if (_SizeInBytes != 0) {
        if (_MaxCount == 0) {
          *_Dst = '\0';
          return 0;
        }
        if (_Src != (char *)0x0) {
          pcVar3 = _Dst;
          rVar4 = _SizeInBytes;
          if (_MaxCount == 0xffffffff) {
            do {
              cVar1 = *_Src;
              *pcVar3 = cVar1;
              pcVar3 = pcVar3 + 1;
              _Src = _Src + 1;
              if (cVar1 == '\0') break;
              rVar4 = rVar4 - 1;
            } while (rVar4 != 0);
          }
          else {
            do {
              cVar1 = *_Src;
              *pcVar3 = cVar1;
              pcVar3 = pcVar3 + 1;
              _Src = _Src + 1;
              if ((cVar1 == '\0') || (rVar4 = rVar4 - 1, rVar4 == 0)) break;
              _MaxCount = _MaxCount - 1;
            } while (_MaxCount != 0);
            if (_MaxCount == 0) {
              *pcVar3 = '\0';
            }
          }
          if (rVar4 != 0) {
            return 0;
          }
          if (_MaxCount == 0xffffffff) {
            _Dst[_SizeInBytes - 1] = '\0';
            return 0x50;
          }
          *_Dst = '\0';
          puVar2 = (undefined4 *)FUN_10724278();
          eVar5 = 0x22;
          *puVar2 = 0x22;
          goto LAB_1072ae42;
        }
        *_Dst = '\0';
      }
    }
  }
  else if (_Dst != (char *)0x0) goto LAB_1072ae31;
  puVar2 = (undefined4 *)FUN_10724278();
  eVar5 = 0x16;
  *puVar2 = 0x16;
LAB_1072ae42:
  FUN_10723411((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  return eVar5;
}


// ==== 1072aec0 __set_error_mode

/* Library Function - Single Match
    __set_error_mode
   
   Library: Visual Studio 2005 Release */

int __cdecl __set_error_mode(int _Mode)

{
  int iVar1;
  undefined4 *puVar2;
  
  if (-1 < _Mode) {
    if (_Mode < 3) {
      iVar1 = DAT_1076c330;
      DAT_1076c330 = _Mode;
      return iVar1;
    }
    if (_Mode == 3) {
      return DAT_1076c330;
    }
  }
  puVar2 = (undefined4 *)FUN_10724278();
  *puVar2 = 0x16;
  FUN_10723411((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  return -1;
}


// ==== 1072af28 __freea

/* Library Function - Single Match
    __freea
   
   Library: Visual Studio 2005 Release */

void __cdecl __freea(void *_Memory)

{
  if ((_Memory != (void *)0x0) && (*(int *)((int)_Memory + -8) == 0xdddd)) {
    _free((int *)((int)_Memory + -8));
  }
  return;
}


// ==== 1072af43 __crtGetLocaleInfoW_stat

/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */
/* Library Function - Single Match
    int __cdecl __crtGetLocaleInfoW_stat(struct localeinfo_struct *,unsigned long,unsigned
   long,wchar_t *,int,int)
   
   Library: Visual Studio 2005 Release */

int __cdecl
__crtGetLocaleInfoW_stat
          (localeinfo_struct *param_1,ulong param_2,ulong param_3,wchar_t *param_4,int param_5,
          int param_6)

{
  uint uVar1;
  int iVar2;
  DWORD DVar3;
  uint cchData;
  LPSTR lpLCData;
  
  uVar1 = DAT_10765c70 ^ (uint)&stack0xfffffffc;
  if (DAT_1076ccfc == 0) {
    iVar2 = GetLocaleInfoW(0,1,(LPWSTR)0x0,0);
    if (iVar2 == 0) {
      DVar3 = GetLastError();
      if (DVar3 == 0x78) {
        DAT_1076ccfc = 2;
      }
      goto LAB_1072af95;
    }
    DAT_1076ccfc = 1;
  }
  else {
LAB_1072af95:
    if (DAT_1076ccfc != 1) {
      if ((DAT_1076ccfc == 2) || (DAT_1076ccfc == 0)) {
        if (param_6 == 0) {
          param_6 = param_1->locinfo->lc_codepage;
        }
        cchData = GetLocaleInfoA(param_2,param_3,(LPSTR)0x0,0);
        if (cchData != 0) {
          if (((int)cchData < 1) || (0xffffffe0 / cchData == 0)) {
            lpLCData = (LPSTR)0x0;
          }
          else if (cchData + 8 < 0x401) {
            if (&stack0x00000000 == (undefined1 *)0x18) goto LAB_1072b06c;
            lpLCData = &stack0xfffffff0;
          }
          else {
            lpLCData = _malloc(cchData + 8);
            if (lpLCData != (LPSTR)0x0) {
              lpLCData[0] = -0x23;
              lpLCData[1] = -0x23;
              lpLCData[2] = '\0';
              lpLCData[3] = '\0';
              lpLCData = lpLCData + 8;
            }
          }
          if (lpLCData != (LPSTR)0x0) {
            iVar2 = GetLocaleInfoA(param_2,param_3,lpLCData,cchData);
            if (iVar2 != 0) {
              if (param_5 == 0) {
                param_5 = 0;
                param_4 = (LPWSTR)0x0;
              }
              MultiByteToWideChar(param_6,1,lpLCData,-1,param_4,param_5);
            }
            __freea(lpLCData);
          }
        }
      }
      goto LAB_1072b06c;
    }
  }
  GetLocaleInfoW(param_2,param_3,param_4,param_5);
LAB_1072b06c:
  iVar2 = __security_check_cookie(uVar1 ^ (uint)&stack0xfffffffc);
  return iVar2;
}


// ==== 1072b07e ___crtGetLocaleInfoW

/* Library Function - Single Match
    ___crtGetLocaleInfoW
   
   Library: Visual Studio 2005 Release */

void __cdecl
___crtGetLocaleInfoW
          (localeinfo_struct *param_1,ulong param_2,ulong param_3,wchar_t *param_4,int param_5,
          int param_6)

{
  localeinfo_struct local_14;
  int local_c;
  char local_8;
  
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_14,param_1);
  __crtGetLocaleInfoW_stat(&local_14,param_2,param_3,param_4,param_5,param_6);
  if (local_8 != '\0') {
    *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
  }
  return;
}


// ==== 1072b0b9 __crtGetLocaleInfoA_stat

/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */
/* Library Function - Single Match
    int __cdecl __crtGetLocaleInfoA_stat(struct localeinfo_struct *,unsigned long,unsigned long,char
   *,int,int)
   
   Library: Visual Studio 2005 Release */

int __cdecl
__crtGetLocaleInfoA_stat
          (localeinfo_struct *param_1,ulong param_2,ulong param_3,char *param_4,int param_5,
          int param_6)

{
  uint _Size;
  uint uVar1;
  int iVar2;
  DWORD DVar3;
  uint cchData;
  LPWSTR lpLCData;
  
  uVar1 = DAT_10765c70 ^ (uint)&stack0xfffffffc;
  if (DAT_1076cd00 == 0) {
    iVar2 = GetLocaleInfoW(0,1,(LPWSTR)0x0,0);
    if (iVar2 == 0) {
      DVar3 = GetLastError();
      if (DVar3 == 0x78) {
        DAT_1076cd00 = 2;
      }
      goto LAB_1072b10b;
    }
    DAT_1076cd00 = 1;
  }
  else {
LAB_1072b10b:
    if ((DAT_1076cd00 == 2) || (DAT_1076cd00 == 0)) {
      GetLocaleInfoA(param_2,param_3,param_4,param_5);
      goto LAB_1072b1e4;
    }
    if (DAT_1076cd00 != 1) goto LAB_1072b1e4;
  }
  if (param_6 == 0) {
    param_6 = param_1->locinfo->lc_codepage;
  }
  cchData = GetLocaleInfoW(param_2,param_3,(LPWSTR)0x0,0);
  if (cchData != 0) {
    if (((int)cchData < 1) || (0xffffffe0 / cchData < 2)) {
      lpLCData = (LPWSTR)0x0;
    }
    else {
      _Size = cchData * 2 + 8;
      if (_Size < 0x401) {
        if (&stack0x00000000 == (undefined1 *)0x18) goto LAB_1072b1e4;
        lpLCData = (LPWSTR)&stack0xfffffff0;
      }
      else {
        lpLCData = _malloc(_Size);
        if (lpLCData != (LPWSTR)0x0) {
          lpLCData[0] = L'\xdddd';
          lpLCData[1] = L'\0';
          lpLCData = lpLCData + 4;
        }
      }
    }
    if (lpLCData != (LPWSTR)0x0) {
      iVar2 = GetLocaleInfoW(param_2,param_3,lpLCData,cchData);
      if (iVar2 != 0) {
        if (param_5 == 0) {
          param_5 = 0;
          param_4 = (LPSTR)0x0;
        }
        WideCharToMultiByte(param_6,0,lpLCData,-1,param_4,param_5,(LPCSTR)0x0,(LPBOOL)0x0);
      }
      __freea(lpLCData);
    }
  }
LAB_1072b1e4:
  iVar2 = __security_check_cookie(uVar1 ^ (uint)&stack0xfffffffc);
  return iVar2;
}


// ==== 1072b1f6 ___crtGetLocaleInfoA

/* Library Function - Single Match
    ___crtGetLocaleInfoA
   
   Library: Visual Studio 2005 Release */

int __cdecl
___crtGetLocaleInfoA
          (_locale_t _Plocinfo,LPCWSTR _LocaleName,LCTYPE _LCType,LPSTR _LpLCData,int _CchData)

{
  int iVar1;
  int in_stack_00000018;
  localeinfo_struct local_14;
  int local_c;
  char local_8;
  
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_14,_Plocinfo);
  iVar1 = __crtGetLocaleInfoA_stat
                    (&local_14,(ulong)_LocaleName,_LCType,_LpLCData,_CchData,in_stack_00000018);
  if (local_8 != '\0') {
    *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
  }
  return iVar1;
}


// ==== 1072b231 __calloc_impl

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    __calloc_impl
   
   Library: Visual Studio 2005 Release */

int * __cdecl __calloc_impl(uint param_1,uint param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  int iVar2;
  uint *_Size;
  int *_Dst;
  uint *dwBytes;
  
  if ((param_1 == 0) || (param_2 <= 0xffffffe0 / param_1)) {
    _Size = (uint *)(param_1 * param_2);
    dwBytes = _Size;
    if (_Size == (uint *)0x0) {
      dwBytes = (uint *)0x1;
    }
    do {
      _Dst = (int *)0x0;
      if (dwBytes < (uint *)0xffffffe1) {
        if ((DAT_1076ce34 == 3) &&
           (dwBytes = (uint *)((int)dwBytes + 0xfU & 0xfffffff0), _Size <= DAT_1076ce10)) {
          __lock(4);
          _Dst = ___sbh_alloc_block(_Size);
          FUN_1072b32d();
          if (_Dst != (int *)0x0) {
            _memset(_Dst,0,(size_t)_Size);
            goto LAB_1072b2e2;
          }
        }
        else {
LAB_1072b2e2:
          if (_Dst != (int *)0x0) {
            return _Dst;
          }
        }
        _Dst = HeapAlloc(DAT_1076c7d4,8,(SIZE_T)dwBytes);
      }
      if (_Dst != (int *)0x0) {
        return _Dst;
      }
      if (DAT_1076cd20 == 0) {
        if (param_3 == (undefined4 *)0x0) {
          return (int *)0x0;
        }
        *param_3 = 0xc;
        return (int *)0x0;
      }
      iVar2 = __callnewh((size_t)dwBytes);
    } while (iVar2 != 0);
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = 0xc;
    }
  }
  else {
    puVar1 = (undefined4 *)FUN_10724278();
    *puVar1 = 0xc;
    FUN_10723411((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  }
  return (int *)0x0;
}


// ==== 1072b32d FUN_1072b32d

void FUN_1072b32d(void)

{
  FUN_10724ccf(4);
  return;
}


// ==== 1072b34f _calloc

/* Library Function - Single Match
    _calloc
   
   Library: Visual Studio 2005 Release */

void * __cdecl _calloc(size_t _Count,size_t _Size)

{
  int iVar1;
  int *piVar2;
  undefined *puVar3;
  int *piVar4;
  int local_8;
  
  local_8 = 0;
  piVar2 = __calloc_impl(_Count,_Size,&local_8);
  iVar1 = local_8;
  if (((piVar2 == (int *)0x0) && (local_8 != 0)) &&
     (puVar3 = FUN_10724278(), puVar3 != (undefined *)0x0)) {
    piVar4 = (int *)FUN_10724278();
    *piVar4 = iVar1;
  }
  return piVar2;
}


// ==== 1072b38e _realloc

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    _realloc
   
   Library: Visual Studio 2005 Release */

void * __cdecl _realloc(void *_Memory,size_t _NewSize)

{
  void *pvVar1;
  int iVar2;
  uint *puVar3;
  int *piVar4;
  DWORD DVar5;
  LPVOID pvVar6;
  void *this;
  uint *local_24;
  int *local_20;
  
  if (_Memory == (void *)0x0) {
    pvVar1 = _malloc(_NewSize);
    return pvVar1;
  }
  if (_NewSize == 0) {
    _free(_Memory);
    return (void *)0x0;
  }
  if (DAT_1076ce34 == 3) {
    do {
      local_20 = (int *)0x0;
      if ((uint *)0xffffffe0 < _NewSize) goto LAB_1072b567;
      pvVar1 = (void *)0x4;
      __lock(4);
      local_24 = (uint *)thunk_FUN_1072b731(pvVar1,(int)_Memory);
      if (local_24 != (uint *)0x0) {
        if (_NewSize <= DAT_1076ce10) {
          iVar2 = ___sbh_resize_block(local_24,(int)_Memory,_NewSize);
          if (iVar2 == 0) {
            local_20 = ___sbh_alloc_block((uint *)_NewSize);
            if (local_20 != (int *)0x0) {
              puVar3 = (uint *)(*(int *)((int)_Memory + -4) - 1);
              if (_NewSize <= puVar3) {
                puVar3 = (uint *)_NewSize;
              }
              _memcpy(local_20,_Memory,(size_t)puVar3);
              local_24 = (uint *)thunk_FUN_1072b731(this,(int)_Memory);
              ___sbh_free_block(local_24,(int)_Memory);
            }
          }
          else {
            local_20 = _Memory;
          }
        }
        if (local_20 == (int *)0x0) {
          if ((uint *)_NewSize == (uint *)0x0) {
            _NewSize = 1;
          }
          _NewSize = _NewSize + 0xf & 0xfffffff0;
          local_20 = HeapAlloc(DAT_1076c7d4,0,_NewSize);
          if (local_20 != (int *)0x0) {
            puVar3 = (uint *)(*(int *)((int)_Memory + -4) - 1);
            if (_NewSize <= puVar3) {
              puVar3 = (uint *)_NewSize;
            }
            _memcpy(local_20,_Memory,(size_t)puVar3);
            ___sbh_free_block(local_24,(int)_Memory);
          }
        }
      }
      FUN_1072b4d2();
      if (local_24 == (uint *)0x0) {
        if ((uint *)_NewSize == (uint *)0x0) {
          _NewSize = 1;
        }
        _NewSize = _NewSize + 0xf & 0xfffffff0;
        local_20 = HeapReAlloc(DAT_1076c7d4,0,_Memory,_NewSize);
      }
      if (local_20 != (int *)0x0) {
        return local_20;
      }
      if (DAT_1076cd20 == 0) {
        piVar4 = (int *)FUN_10724278();
        if (local_24 != (uint *)0x0) {
          *piVar4 = 0xc;
          return (void *)0x0;
        }
        goto LAB_1072b594;
      }
      iVar2 = __callnewh(_NewSize);
    } while (iVar2 != 0);
    piVar4 = (int *)FUN_10724278();
    if (local_24 != (uint *)0x0) goto LAB_1072b573;
  }
  else {
    do {
      if ((uint *)0xffffffe0 < _NewSize) goto LAB_1072b567;
      if ((uint *)_NewSize == (uint *)0x0) {
        _NewSize = 1;
      }
      pvVar6 = HeapReAlloc(DAT_1076c7d4,0,_Memory,_NewSize);
      if (pvVar6 != (LPVOID)0x0) {
        return pvVar6;
      }
      if (DAT_1076cd20 == 0) {
        piVar4 = (int *)FUN_10724278();
LAB_1072b594:
        DVar5 = GetLastError();
        iVar2 = FUN_1072423d(DVar5);
        *piVar4 = iVar2;
        return (void *)0x0;
      }
      iVar2 = __callnewh(_NewSize);
    } while (iVar2 != 0);
    piVar4 = (int *)FUN_10724278();
  }
  DVar5 = GetLastError();
  iVar2 = FUN_1072423d(DVar5);
  *piVar4 = iVar2;
  return (void *)0x0;
LAB_1072b567:
  __callnewh(_NewSize);
  piVar4 = (int *)FUN_10724278();
LAB_1072b573:
  *piVar4 = 0xc;
  return (void *)0x0;
}


// ==== 1072b4d2 FUN_1072b4d2

void FUN_1072b4d2(void)

{
  FUN_10724ccf(4);
  return;
}


// ==== 1072b5a9 FUN_1072b5a9

void * __cdecl FUN_1072b5a9(void *param_1,uint param_2,uint param_3)

{
  undefined4 *puVar1;
  void *pvVar2;
  uint _NewSize;
  size_t sVar3;
  
  sVar3 = 0;
  if ((param_2 == 0) || (param_3 <= 0xffffffe0 / param_2)) {
    _NewSize = param_2 * param_3;
    if (param_1 != (void *)0x0) {
      sVar3 = __msize(param_1);
    }
    pvVar2 = _realloc(param_1,_NewSize);
    if ((pvVar2 != (void *)0x0) && (sVar3 < _NewSize)) {
      _memset((void *)(sVar3 + (int)pvVar2),0,_NewSize - sVar3);
    }
  }
  else {
    puVar1 = (undefined4 *)FUN_10724278();
    *puVar1 = 0xc;
    FUN_10723411((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    pvVar2 = (void *)0x0;
  }
  return pvVar2;
}


// ==== 1072b6c5 ___sbh_heap_init

/* Library Function - Single Match
    ___sbh_heap_init
   
   Library: Visual Studio 2005 Release */

undefined4 __cdecl ___sbh_heap_init(undefined4 param_1)

{
  DAT_1076ce0c = HeapAlloc(DAT_1076c7d4,0,0x140);
  if (DAT_1076ce0c == (LPVOID)0x0) {
    return 0;
  }
  DAT_1076cd04 = 0;
  DAT_1076ce08 = 0;
  DAT_1076ce14 = DAT_1076ce0c;
  DAT_1076ce10 = param_1;
  DAT_1076ce18 = 0x10;
  return 1;
}


// ==== 1072b70d thunk_FUN_1072b731 thunk -> 1072b731

// ==== 1072b731 FUN_1072b731

void __thiscall FUN_1072b731(void *this,int param_1)

{
  void *in_EAX;
  
  for (; (in_EAX < this && (0xfffff < (uint)(param_1 - *(int *)((int)in_EAX + 0xc))));
      in_EAX = (void *)((int)in_EAX + 0x14)) {
  }
  return;
}


// ==== 1072b738 ___sbh_free_block

/* Library Function - Single Match
    ___sbh_free_block
   
   Library: Visual Studio 2005 Release */

void __cdecl ___sbh_free_block(uint *param_1,int param_2)

{
  int *piVar1;
  char *pcVar2;
  uint *puVar3;
  int *piVar4;
  char cVar5;
  uint uVar6;
  uint uVar7;
  byte bVar8;
  uint uVar9;
  uint *puVar10;
  uint *puVar11;
  uint *puVar12;
  uint uVar13;
  uint uVar14;
  uint local_8;
  
  uVar6 = param_1[4];
  puVar12 = (uint *)(param_2 + -4);
  uVar14 = param_2 - param_1[3] >> 0xf;
  piVar4 = (int *)(uVar14 * 0x204 + 0x144 + uVar6);
  local_8 = *puVar12 - 1;
  if ((local_8 & 1) == 0) {
    puVar10 = (uint *)(local_8 + (int)puVar12);
    uVar13 = *puVar10;
    uVar7 = *(uint *)(param_2 + -8);
    if ((uVar13 & 1) == 0) {
      uVar9 = ((int)uVar13 >> 4) - 1;
      if (0x3f < uVar9) {
        uVar9 = 0x3f;
      }
      if (puVar10[1] == puVar10[2]) {
        if (uVar9 < 0x20) {
          pcVar2 = (char *)(uVar9 + 4 + uVar6);
          uVar9 = ~(0x80000000U >> ((byte)uVar9 & 0x1f));
          puVar11 = (uint *)(uVar6 + 0x44 + uVar14 * 4);
          *puVar11 = *puVar11 & uVar9;
          *pcVar2 = *pcVar2 + -1;
          if (*pcVar2 == '\0') {
            *param_1 = *param_1 & uVar9;
          }
        }
        else {
          pcVar2 = (char *)(uVar9 + 4 + uVar6);
          uVar9 = ~(0x80000000U >> ((byte)uVar9 - 0x20 & 0x1f));
          puVar11 = (uint *)(uVar6 + 0xc4 + uVar14 * 4);
          *puVar11 = *puVar11 & uVar9;
          *pcVar2 = *pcVar2 + -1;
          if (*pcVar2 == '\0') {
            param_1[1] = param_1[1] & uVar9;
          }
        }
      }
      local_8 = local_8 + uVar13;
      *(uint *)(puVar10[2] + 4) = puVar10[1];
      *(uint *)(puVar10[1] + 8) = puVar10[2];
    }
    puVar10 = (uint *)(((int)local_8 >> 4) - 1);
    if ((uint *)0x3f < puVar10) {
      puVar10 = (uint *)0x3f;
    }
    puVar11 = param_1;
    if ((uVar7 & 1) == 0) {
      puVar12 = (uint *)((int)puVar12 - uVar7);
      puVar11 = (uint *)(((int)uVar7 >> 4) - 1);
      if ((uint *)0x3f < puVar11) {
        puVar11 = (uint *)0x3f;
      }
      local_8 = local_8 + uVar7;
      puVar10 = (uint *)(((int)local_8 >> 4) - 1);
      if ((uint *)0x3f < puVar10) {
        puVar10 = (uint *)0x3f;
      }
      if (puVar11 != puVar10) {
        if (puVar12[1] == puVar12[2]) {
          if (puVar11 < (uint *)0x20) {
            uVar13 = ~(0x80000000U >> ((byte)puVar11 & 0x1f));
            puVar3 = (uint *)(uVar6 + 0x44 + uVar14 * 4);
            *puVar3 = *puVar3 & uVar13;
            pcVar2 = (char *)((int)puVar11 + uVar6 + 4);
            *pcVar2 = *pcVar2 + -1;
            if (*pcVar2 == '\0') {
              *param_1 = *param_1 & uVar13;
            }
          }
          else {
            uVar13 = ~(0x80000000U >> ((byte)puVar11 - 0x20 & 0x1f));
            puVar3 = (uint *)(uVar6 + 0xc4 + uVar14 * 4);
            *puVar3 = *puVar3 & uVar13;
            pcVar2 = (char *)((int)puVar11 + uVar6 + 4);
            *pcVar2 = *pcVar2 + -1;
            if (*pcVar2 == '\0') {
              param_1[1] = param_1[1] & uVar13;
            }
          }
        }
        *(uint *)(puVar12[2] + 4) = puVar12[1];
        *(uint *)(puVar12[1] + 8) = puVar12[2];
      }
    }
    if (((uVar7 & 1) != 0) || (puVar11 != puVar10)) {
      piVar1 = piVar4 + (int)puVar10 * 2;
      uVar13 = piVar1[1];
      puVar12[2] = (uint)piVar1;
      puVar12[1] = uVar13;
      piVar1[1] = (int)puVar12;
      *(uint **)(puVar12[1] + 8) = puVar12;
      if (puVar12[1] == puVar12[2]) {
        cVar5 = *(char *)((int)puVar10 + uVar6 + 4);
        *(char *)((int)puVar10 + uVar6 + 4) = cVar5 + '\x01';
        bVar8 = (byte)puVar10;
        if (puVar10 < (uint *)0x20) {
          if (cVar5 == '\0') {
            *param_1 = *param_1 | 0x80000000U >> (bVar8 & 0x1f);
          }
          puVar10 = (uint *)(uVar6 + 0x44 + uVar14 * 4);
          *puVar10 = *puVar10 | 0x80000000U >> (bVar8 & 0x1f);
        }
        else {
          if (cVar5 == '\0') {
            param_1[1] = param_1[1] | 0x80000000U >> (bVar8 - 0x20 & 0x1f);
          }
          puVar10 = (uint *)(uVar6 + 0xc4 + uVar14 * 4);
          *puVar10 = *puVar10 | 0x80000000U >> (bVar8 - 0x20 & 0x1f);
        }
      }
    }
    *puVar12 = local_8;
    *(uint *)((local_8 - 4) + (int)puVar12) = local_8;
    *piVar4 = *piVar4 + -1;
    if (*piVar4 == 0) {
      if (DAT_1076cd04 != (uint *)0x0) {
        VirtualFree((LPVOID)(DAT_1076ce1c * 0x8000 + DAT_1076cd04[3]),0x8000,0x4000);
        DAT_1076cd04[2] = DAT_1076cd04[2] | 0x80000000U >> ((byte)DAT_1076ce1c & 0x1f);
        *(undefined4 *)(DAT_1076cd04[4] + 0xc4 + DAT_1076ce1c * 4) = 0;
        *(char *)(DAT_1076cd04[4] + 0x43) = *(char *)(DAT_1076cd04[4] + 0x43) + -1;
        if (*(char *)(DAT_1076cd04[4] + 0x43) == '\0') {
          DAT_1076cd04[1] = DAT_1076cd04[1] & 0xfffffffe;
        }
        if (DAT_1076cd04[2] == 0xffffffff) {
          VirtualFree((LPVOID)DAT_1076cd04[3],0,0x8000);
          HeapFree(DAT_1076c7d4,0,(LPVOID)DAT_1076cd04[4]);
          _memmove(DAT_1076cd04,DAT_1076cd04 + 5,
                   (DAT_1076ce08 * 0x14 - (int)DAT_1076cd04) + -0x14 + DAT_1076ce0c);
          DAT_1076ce08 = DAT_1076ce08 + -1;
          if (DAT_1076cd04 < param_1) {
            param_1 = param_1 + -5;
          }
          DAT_1076ce14 = DAT_1076ce0c;
        }
      }
      DAT_1076cd04 = param_1;
      DAT_1076ce1c = uVar14;
    }
  }
  return;
}


// ==== 1072ba4c ___sbh_alloc_new_region

/* Library Function - Single Match
    ___sbh_alloc_new_region
   
   Library: Visual Studio 2005 Release */

undefined4 * ___sbh_alloc_new_region(void)

{
  LPVOID pvVar1;
  undefined4 *puVar2;
  
  if (DAT_1076ce08 == DAT_1076ce18) {
    pvVar1 = HeapReAlloc(DAT_1076c7d4,0,DAT_1076ce0c,(DAT_1076ce18 + 0x10) * 0x14);
    if (pvVar1 == (LPVOID)0x0) {
      return (undefined4 *)0x0;
    }
    DAT_1076ce18 = DAT_1076ce18 + 0x10;
    DAT_1076ce0c = pvVar1;
  }
  puVar2 = (undefined4 *)(DAT_1076ce08 * 0x14 + (int)DAT_1076ce0c);
  pvVar1 = HeapAlloc(DAT_1076c7d4,8,0x41c4);
  puVar2[4] = pvVar1;
  if (pvVar1 != (LPVOID)0x0) {
    pvVar1 = VirtualAlloc((LPVOID)0x0,0x100000,0x2000,4);
    puVar2[3] = pvVar1;
    if (pvVar1 != (LPVOID)0x0) {
      puVar2[2] = 0xffffffff;
      *puVar2 = 0;
      puVar2[1] = 0;
      DAT_1076ce08 = DAT_1076ce08 + 1;
      *(undefined4 *)puVar2[4] = 0xffffffff;
      return puVar2;
    }
    HeapFree(DAT_1076c7d4,0,(LPVOID)puVar2[4]);
  }
  return (undefined4 *)0x0;
}


// ==== 1072bafc ___sbh_alloc_new_group

/* Library Function - Single Match
    ___sbh_alloc_new_group
   
   Library: Visual Studio 2005 Release */

int __cdecl ___sbh_alloc_new_group(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  LPVOID pvVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  LPVOID lpAddress;
  
  iVar2 = *(int *)(param_1 + 0x10);
  iVar8 = 0;
  for (iVar3 = *(int *)(param_1 + 8); -1 < iVar3; iVar3 = iVar3 * 2) {
    iVar8 = iVar8 + 1;
  }
  iVar3 = iVar8 * 0x204 + 0x144 + iVar2;
  iVar7 = 0x3f;
  iVar4 = iVar3;
  do {
    *(int *)(iVar4 + 8) = iVar4;
    *(int *)(iVar4 + 4) = iVar4;
    iVar4 = iVar4 + 8;
    iVar7 = iVar7 + -1;
  } while (iVar7 != 0);
  lpAddress = (LPVOID)(iVar8 * 0x8000 + *(int *)(param_1 + 0xc));
  pvVar5 = VirtualAlloc(lpAddress,0x8000,0x1000,4);
  if (pvVar5 == (LPVOID)0x0) {
    iVar8 = -1;
  }
  else {
    if (lpAddress <= (LPVOID)((int)lpAddress + 0x7000U)) {
      piVar6 = (int *)((int)lpAddress + 0x10);
      iVar7 = ((uint)((int)((int)lpAddress + 0x7000U) - (int)lpAddress) >> 0xc) + 1;
      do {
        piVar6[-2] = -1;
        piVar6[0x3fb] = -1;
        *piVar6 = (int)(piVar6 + 0x3ff);
        piVar6[-1] = 0xff0;
        piVar6[1] = (int)(piVar6 + -0x401);
        piVar6[0x3fa] = 0xff0;
        piVar6 = piVar6 + 0x400;
        iVar7 = iVar7 + -1;
      } while (iVar7 != 0);
    }
    *(int *)(iVar3 + 0x1fc) = (int)lpAddress + 0xc;
    *(int *)((int)lpAddress + 0x14) = iVar3 + 0x1f8;
    *(int *)(iVar3 + 0x200) = (int)lpAddress + 0x700c;
    *(int *)((int)lpAddress + 0x7010) = iVar3 + 0x1f8;
    *(undefined4 *)(iVar2 + 0x44 + iVar8 * 4) = 0;
    *(undefined4 *)(iVar2 + 0xc4 + iVar8 * 4) = 1;
    cVar1 = *(char *)(iVar2 + 0x43);
    *(char *)(iVar2 + 0x43) = cVar1 + '\x01';
    if (cVar1 == '\0') {
      *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 1;
    }
    *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) & ~(0x80000000U >> ((byte)iVar8 & 0x1f));
  }
  return iVar8;
}


// ==== 1072bc02 ___sbh_resize_block

/* Library Function - Single Match
    ___sbh_resize_block
   
   Library: Visual Studio 2005 Release */

undefined4 __cdecl ___sbh_resize_block(uint *param_1,int param_2,int param_3)

{
  char *pcVar1;
  uint *puVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  char cVar6;
  uint uVar7;
  uint *puVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint local_c;
  
  uVar7 = param_1[4];
  uVar10 = param_2 - param_1[3] >> 0xf;
  iVar5 = uVar10 * 0x204 + 0x144 + uVar7;
  uVar12 = param_3 + 0x17U & 0xfffffff0;
  iVar9 = *(int *)(param_2 + -4) + -1;
  puVar8 = (uint *)(*(int *)(param_2 + -4) + -5 + param_2);
  uVar13 = *puVar8;
  if (iVar9 < (int)uVar12) {
    if (((uVar13 & 1) != 0) || ((int)(uVar13 + iVar9) < (int)uVar12)) {
      return 0;
    }
    local_c = ((int)uVar13 >> 4) - 1;
    if (0x3f < local_c) {
      local_c = 0x3f;
    }
    if (puVar8[1] == puVar8[2]) {
      if (local_c < 0x20) {
        pcVar1 = (char *)(local_c + 4 + uVar7);
        uVar11 = ~(0x80000000U >> ((byte)local_c & 0x1f));
        puVar2 = (uint *)(uVar7 + 0x44 + uVar10 * 4);
        *puVar2 = *puVar2 & uVar11;
        *pcVar1 = *pcVar1 + -1;
        if (*pcVar1 == '\0') {
          *param_1 = *param_1 & uVar11;
        }
      }
      else {
        pcVar1 = (char *)(local_c + 4 + uVar7);
        uVar11 = ~(0x80000000U >> ((byte)local_c - 0x20 & 0x1f));
        puVar2 = (uint *)(uVar7 + 0xc4 + uVar10 * 4);
        *puVar2 = *puVar2 & uVar11;
        *pcVar1 = *pcVar1 + -1;
        if (*pcVar1 == '\0') {
          param_1[1] = param_1[1] & uVar11;
        }
      }
    }
    *(uint *)(puVar8[2] + 4) = puVar8[1];
    *(uint *)(puVar8[1] + 8) = puVar8[2];
    iVar9 = uVar13 + (iVar9 - uVar12);
    if (0 < iVar9) {
      uVar13 = (iVar9 >> 4) - 1;
      iVar3 = param_2 + -4 + uVar12;
      if (0x3f < uVar13) {
        uVar13 = 0x3f;
      }
      iVar5 = iVar5 + uVar13 * 8;
      *(undefined4 *)(iVar3 + 4) = *(undefined4 *)(iVar5 + 4);
      *(int *)(iVar3 + 8) = iVar5;
      *(int *)(iVar5 + 4) = iVar3;
      *(int *)(*(int *)(iVar3 + 4) + 8) = iVar3;
      if (*(int *)(iVar3 + 4) == *(int *)(iVar3 + 8)) {
        cVar6 = *(char *)(uVar13 + 4 + uVar7);
        *(char *)(uVar13 + 4 + uVar7) = cVar6 + '\x01';
        if (uVar13 < 0x20) {
          if (cVar6 == '\0') {
            *param_1 = *param_1 | 0x80000000U >> ((byte)uVar13 & 0x1f);
          }
          puVar8 = (uint *)(uVar7 + 0x44 + uVar10 * 4);
        }
        else {
          if (cVar6 == '\0') {
            param_1[1] = param_1[1] | 0x80000000U >> ((byte)uVar13 - 0x20 & 0x1f);
          }
          puVar8 = (uint *)(uVar7 + 0xc4 + uVar10 * 4);
          uVar13 = uVar13 - 0x20;
        }
        *puVar8 = *puVar8 | 0x80000000U >> ((byte)uVar13 & 0x1f);
      }
      piVar4 = (int *)(param_2 + -4 + uVar12);
      *piVar4 = iVar9;
      *(int *)(iVar9 + -4 + (int)piVar4) = iVar9;
    }
    *(uint *)(param_2 + -4) = uVar12 + 1;
    *(uint *)(param_2 + -8 + uVar12) = uVar12 + 1;
  }
  else if ((int)uVar12 < iVar9) {
    param_3 = iVar9 - uVar12;
    *(uint *)(param_2 + -4) = uVar12 + 1;
    piVar4 = (int *)(param_2 + -4 + uVar12);
    uVar11 = (param_3 >> 4) - 1;
    piVar4[-1] = uVar12 + 1;
    if (0x3f < uVar11) {
      uVar11 = 0x3f;
    }
    if ((uVar13 & 1) == 0) {
      uVar12 = ((int)uVar13 >> 4) - 1;
      if (0x3f < uVar12) {
        uVar12 = 0x3f;
      }
      if (puVar8[1] == puVar8[2]) {
        if (uVar12 < 0x20) {
          pcVar1 = (char *)(uVar12 + 4 + uVar7);
          uVar12 = ~(0x80000000U >> ((byte)uVar12 & 0x1f));
          puVar2 = (uint *)(uVar7 + 0x44 + uVar10 * 4);
          *puVar2 = *puVar2 & uVar12;
          *pcVar1 = *pcVar1 + -1;
          if (*pcVar1 == '\0') {
            *param_1 = *param_1 & uVar12;
          }
        }
        else {
          pcVar1 = (char *)(uVar12 + 4 + uVar7);
          uVar12 = ~(0x80000000U >> ((byte)uVar12 - 0x20 & 0x1f));
          puVar2 = (uint *)(uVar7 + 0xc4 + uVar10 * 4);
          *puVar2 = *puVar2 & uVar12;
          *pcVar1 = *pcVar1 + -1;
          if (*pcVar1 == '\0') {
            param_1[1] = param_1[1] & uVar12;
          }
        }
      }
      *(uint *)(puVar8[2] + 4) = puVar8[1];
      *(uint *)(puVar8[1] + 8) = puVar8[2];
      param_3 = param_3 + uVar13;
      uVar11 = (param_3 >> 4) - 1;
      if (0x3f < uVar11) {
        uVar11 = 0x3f;
      }
    }
    iVar5 = iVar5 + uVar11 * 8;
    iVar9 = *(int *)(iVar5 + 4);
    piVar4[2] = iVar5;
    piVar4[1] = iVar9;
    *(int **)(iVar5 + 4) = piVar4;
    *(int **)(piVar4[1] + 8) = piVar4;
    if (piVar4[1] == piVar4[2]) {
      cVar6 = *(char *)(uVar11 + 4 + uVar7);
      *(char *)(uVar11 + 4 + uVar7) = cVar6 + '\x01';
      if (uVar11 < 0x20) {
        if (cVar6 == '\0') {
          *param_1 = *param_1 | 0x80000000U >> ((byte)uVar11 & 0x1f);
        }
        puVar8 = (uint *)(uVar7 + 0x44 + uVar10 * 4);
      }
      else {
        if (cVar6 == '\0') {
          param_1[1] = param_1[1] | 0x80000000U >> ((byte)uVar11 - 0x20 & 0x1f);
        }
        puVar8 = (uint *)(uVar7 + 0xc4 + uVar10 * 4);
        uVar11 = uVar11 - 0x20;
      }
      *puVar8 = *puVar8 | 0x80000000U >> ((byte)uVar11 & 0x1f);
    }
    *piVar4 = param_3;
    *(int *)(param_3 + -4 + (int)piVar4) = param_3;
  }
  return 1;
}


// ==== 1072bfae ___sbh_heap_check

/* Library Function - Single Match
    ___sbh_heap_check
   
   Library: Visual Studio 2005 Release */

undefined4 ___sbh_heap_check(void)

{
  undefined4 uVar1;
  uint *puVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint *puVar6;
  int iVar7;
  uint *puVar8;
  uint *puVar9;
  int *piVar10;
  uint *puVar11;
  int local_13c [64];
  uint *local_3c;
  uint *local_38;
  uint *local_34;
  uint *local_30;
  uint local_2c;
  uint *local_28;
  uint local_24;
  int local_20;
  uint local_1c;
  uint local_18;
  uint local_14;
  int local_10;
  uint *local_c;
  uint local_8;
  
  if (DAT_1076ce0c == (uint *)0x0) {
    uVar1 = 0xffffffff;
  }
  else {
    local_38 = DAT_1076ce0c;
    local_20 = 0;
    puVar2 = DAT_1076ce0c;
    if (0 < DAT_1076ce08) {
      do {
        uVar3 = puVar2[4];
        if (uVar3 == 0) {
          return 0xfffffffe;
        }
        local_c = (uint *)puVar2[3];
        local_28 = (uint *)(uVar3 + 0x144);
        puVar9 = (uint *)(uVar3 + 0xc4);
        local_24 = puVar2[2];
        local_14 = 0;
        local_18 = 0;
        local_10 = 0;
        local_3c = puVar9;
        local_38 = puVar2;
        do {
          uVar3 = local_24;
          iVar7 = 0;
          local_2c = 0;
          local_1c = 0;
          local_8 = 0;
          piVar10 = local_13c;
          local_3c = puVar9;
          for (iVar4 = 0x40; iVar4 != 0; iVar4 = iVar4 + -1) {
            *piVar10 = 0;
            piVar10 = piVar10 + 1;
          }
          if (-1 < (int)uVar3) {
            if (local_c == (uint *)0x0) {
              return 0xfffffffc;
            }
            puVar2 = local_c + 0x3ff;
            do {
              puVar9 = puVar2 + -0x3fc;
              if ((puVar2[-0x3fd] != 0xffffffff) || (*puVar2 != 0xffffffff)) {
                return 0xfffffffb;
              }
              do {
                uVar3 = *puVar9;
                if ((uVar3 & 1) == 0) {
                  iVar4 = ((int)uVar3 >> 4) + -1;
                  if (0x3f < iVar4) {
                    iVar4 = 0x3f;
                  }
                  local_13c[iVar4] = local_13c[iVar4] + 1;
                  uVar5 = uVar3;
                }
                else {
                  if (0x400 < (int)(uVar3 - 1)) {
                    return 0xfffffffa;
                  }
                  local_8 = local_8 + 1;
                  uVar5 = uVar3 - 1;
                }
                if ((((int)uVar5 < 0x10) || ((uVar5 & 0xf) != 0)) || (0xff0 < (int)uVar5)) {
                  return 0xfffffff9;
                }
                puVar9 = (uint *)(uVar5 + (int)puVar9);
                if (puVar9[-1] != uVar3) {
                  return 0xfffffff8;
                }
              } while (puVar9 < puVar2);
              if (puVar9 != puVar2) {
                return 0xfffffff8;
              }
              puVar2 = puVar2 + 0x400;
              iVar7 = iVar7 + 1;
            } while (iVar7 < 8);
            if (*local_28 != local_8) {
              return 0xfffffff7;
            }
            iVar4 = 0;
            puVar11 = local_28;
            do {
              local_8 = 0;
              local_34 = puVar11 + 2;
              puVar2 = (uint *)puVar11[1];
              local_30 = puVar11;
              puVar8 = local_34;
              if (puVar2 != puVar11) {
                do {
                  if (local_8 == local_13c[iVar4]) break;
                  if ((puVar2 < local_c) || (local_c + 0x2000 <= puVar2)) {
                    return 0xfffffff6;
                  }
                  puVar6 = (uint *)(((uint)puVar2 & 0xfffff000) + 0xc);
                  puVar9 = (uint *)(((uint)puVar2 & 0xfffff000) + 0xffc);
                  if (puVar6 == puVar9) {
                    return 0xfffffff5;
                  }
                  do {
                    if (puVar6 == puVar2) break;
                    puVar6 = (uint *)((int)puVar6 + (*puVar6 & 0xfffffffe));
                    puVar8 = local_34;
                  } while (puVar6 != puVar9);
                  if (puVar6 == puVar9) {
                    return 0xfffffff5;
                  }
                  iVar7 = ((int)*puVar2 >> 4) + -1;
                  if (0x3f < iVar7) {
                    iVar7 = 0x3f;
                  }
                  if (iVar7 != iVar4) {
                    return 0xfffffff4;
                  }
                  if ((uint *)puVar2[2] != local_30) {
                    return 0xfffffff3;
                  }
                  local_8 = local_8 + 1;
                  local_30 = puVar2;
                  puVar2 = (uint *)puVar2[1];
                } while (puVar2 != puVar11);
                if (local_8 != 0) {
                  if (iVar4 < 0x20) {
                    uVar3 = 0x80000000 >> ((byte)iVar4 & 0x1f);
                    local_2c = local_2c | uVar3;
                    local_14 = local_14 | uVar3;
                  }
                  else {
                    uVar3 = 0x80000000 >> ((byte)iVar4 - 0x20 & 0x1f);
                    local_1c = local_1c | uVar3;
                    local_18 = local_18 | uVar3;
                  }
                }
              }
              if (((uint *)local_30[1] != puVar11) || (local_8 != local_13c[iVar4])) {
                return 0xfffffff2;
              }
              if ((uint *)*puVar8 != local_30) {
                return 0xfffffff1;
              }
              iVar4 = iVar4 + 1;
              puVar2 = local_38;
              puVar9 = local_3c;
              puVar11 = puVar8;
            } while (iVar4 < 0x40);
          }
          if ((local_2c != puVar9[-0x20]) || (local_1c != *puVar9)) {
            return 0xfffffff0;
          }
          local_c = local_c + 0x2000;
          local_28 = local_28 + 0x81;
          local_24 = local_24 << 1;
          local_10 = local_10 + 1;
          puVar9 = puVar9 + 1;
          local_3c = puVar9;
        } while (local_10 < 0x20);
        if ((local_14 != *puVar2) || (local_18 != puVar2[1])) {
          return 0xffffffef;
        }
        puVar2 = puVar2 + 5;
        local_20 = local_20 + 1;
        local_38 = puVar2;
      } while (local_20 < DAT_1076ce08);
    }
    uVar1 = 0;
  }
  return uVar1;
}


// ==== 1072c338 ___sbh_alloc_block

/* Library Function - Single Match
    ___sbh_alloc_block
   
   Library: Visual Studio 2005 Release */

int * __cdecl ___sbh_alloc_block(uint *param_1)

{
  int *piVar1;
  char *pcVar2;
  int *piVar3;
  char cVar4;
  int *piVar5;
  byte bVar6;
  uint uVar7;
  int iVar8;
  uint *puVar9;
  int iVar10;
  uint uVar11;
  int *piVar12;
  uint *puVar13;
  uint *puVar14;
  uint uVar15;
  int iVar16;
  uint local_c;
  int local_8;
  
  puVar9 = DAT_1076ce0c + DAT_1076ce08 * 5;
  uVar7 = (int)param_1 + 0x17U & 0xfffffff0;
  iVar8 = ((int)((int)param_1 + 0x17U) >> 4) + -1;
  bVar6 = (byte)iVar8;
  param_1 = DAT_1076ce14;
  if (iVar8 < 0x20) {
    uVar15 = 0xffffffff >> (bVar6 & 0x1f);
    local_c = 0xffffffff;
  }
  else {
    uVar15 = 0;
    local_c = 0xffffffff >> (bVar6 - 0x20 & 0x1f);
  }
  for (; (param_1 < puVar9 && ((param_1[1] & local_c) == 0 && (*param_1 & uVar15) == 0));
      param_1 = param_1 + 5) {
  }
  puVar13 = DAT_1076ce0c;
  if (param_1 == puVar9) {
    for (; (puVar13 < DAT_1076ce14 && ((puVar13[1] & local_c) == 0 && (*puVar13 & uVar15) == 0));
        puVar13 = puVar13 + 5) {
    }
    param_1 = puVar13;
    if (puVar13 == DAT_1076ce14) {
      for (; (puVar13 < puVar9 && (puVar13[2] == 0)); puVar13 = puVar13 + 5) {
      }
      puVar14 = DAT_1076ce0c;
      param_1 = puVar13;
      if (puVar13 == puVar9) {
        for (; (puVar14 < DAT_1076ce14 && (puVar14[2] == 0)); puVar14 = puVar14 + 5) {
        }
        param_1 = puVar14;
        if ((puVar14 == DAT_1076ce14) &&
           (param_1 = ___sbh_alloc_new_region(), param_1 == (uint *)0x0)) {
          return (int *)0x0;
        }
      }
      iVar8 = ___sbh_alloc_new_group((int)param_1);
      *(int *)param_1[4] = iVar8;
      if (*(int *)param_1[4] == -1) {
        return (int *)0x0;
      }
    }
  }
  piVar5 = (int *)param_1[4];
  local_8 = *piVar5;
  if ((local_8 == -1) ||
     ((piVar5[local_8 + 0x31] & local_c) == 0 && (piVar5[local_8 + 0x11] & uVar15) == 0)) {
    local_8 = 0;
    puVar9 = (uint *)(piVar5 + 0x11);
    uVar11 = piVar5[0x31];
    while ((uVar11 & local_c) == 0 && (*puVar9 & uVar15) == 0) {
      local_8 = local_8 + 1;
      puVar13 = puVar9 + 0x21;
      puVar9 = puVar9 + 1;
      uVar11 = *puVar13;
    }
  }
  piVar3 = piVar5 + local_8 * 0x81 + 0x51;
  iVar8 = 0;
  uVar15 = piVar5[local_8 + 0x11] & uVar15;
  if (uVar15 == 0) {
    uVar15 = piVar5[local_8 + 0x31] & local_c;
    iVar8 = 0x20;
  }
  for (; -1 < (int)uVar15; uVar15 = uVar15 * 2) {
    iVar8 = iVar8 + 1;
  }
  piVar12 = (int *)piVar3[iVar8 * 2 + 1];
  iVar10 = *piVar12 - uVar7;
  iVar16 = (iVar10 >> 4) + -1;
  if (0x3f < iVar16) {
    iVar16 = 0x3f;
  }
  DAT_1076ce14 = param_1;
  if (iVar16 != iVar8) {
    if (piVar12[1] == piVar12[2]) {
      if (iVar8 < 0x20) {
        pcVar2 = (char *)((int)piVar5 + iVar8 + 4);
        uVar15 = ~(0x80000000U >> ((byte)iVar8 & 0x1f));
        piVar5[local_8 + 0x11] = uVar15 & piVar5[local_8 + 0x11];
        *pcVar2 = *pcVar2 + -1;
        if (*pcVar2 == '\0') {
          *param_1 = *param_1 & uVar15;
        }
      }
      else {
        pcVar2 = (char *)((int)piVar5 + iVar8 + 4);
        uVar15 = ~(0x80000000U >> ((byte)iVar8 - 0x20 & 0x1f));
        piVar5[local_8 + 0x31] = piVar5[local_8 + 0x31] & uVar15;
        *pcVar2 = *pcVar2 + -1;
        if (*pcVar2 == '\0') {
          param_1[1] = param_1[1] & uVar15;
        }
      }
    }
    *(int *)(piVar12[2] + 4) = piVar12[1];
    *(int *)(piVar12[1] + 8) = piVar12[2];
    if (iVar10 == 0) goto LAB_1072c5d8;
    piVar1 = piVar3 + iVar16 * 2;
    iVar8 = piVar1[1];
    piVar12[2] = (int)piVar1;
    piVar12[1] = iVar8;
    piVar1[1] = (int)piVar12;
    *(int **)(piVar12[1] + 8) = piVar12;
    if (piVar12[1] == piVar12[2]) {
      cVar4 = *(char *)(iVar16 + 4 + (int)piVar5);
      *(char *)(iVar16 + 4 + (int)piVar5) = cVar4 + '\x01';
      bVar6 = (byte)iVar16;
      if (iVar16 < 0x20) {
        if (cVar4 == '\0') {
          *param_1 = *param_1 | 0x80000000U >> (bVar6 & 0x1f);
        }
        piVar5[local_8 + 0x11] = piVar5[local_8 + 0x11] | 0x80000000U >> (bVar6 & 0x1f);
      }
      else {
        if (cVar4 == '\0') {
          param_1[1] = param_1[1] | 0x80000000U >> (bVar6 - 0x20 & 0x1f);
        }
        piVar5[local_8 + 0x31] = piVar5[local_8 + 0x31] | 0x80000000U >> (bVar6 - 0x20 & 0x1f);
      }
    }
  }
  if (iVar10 != 0) {
    *piVar12 = iVar10;
    *(int *)(iVar10 + -4 + (int)piVar12) = iVar10;
  }
LAB_1072c5d8:
  piVar12 = (int *)((int)piVar12 + iVar10);
  *piVar12 = uVar7 + 1;
  *(uint *)((int)piVar12 + (uVar7 - 4)) = uVar7 + 1;
  iVar8 = *piVar3;
  *piVar3 = iVar8 + 1;
  if (((iVar8 == 0) && (param_1 == DAT_1076cd04)) && (local_8 == DAT_1076ce1c)) {
    DAT_1076cd04 = (uint *)0x0;
  }
  *piVar5 = local_8;
  return piVar12 + 1;
}


// ==== 1072c61b FUN_1072c61b

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_1072c61b(undefined4 param_1)

{
  _DAT_1076cd08 = param_1;
  return;
}


// ==== 1072c729 FUN_1072c729

void __cdecl FUN_1072c729(undefined4 param_1)

{
  DAT_1076cd0c = param_1;
  return;
}


// ==== 1072c733 ___crtInitCritSecNoSpinCount@8

/* Library Function - Single Match
    ___crtInitCritSecNoSpinCount@8
   
   Library: Visual Studio 2005 Release */

undefined4 ___crtInitCritSecNoSpinCount_8(LPCRITICAL_SECTION param_1)

{
  InitializeCriticalSection(param_1);
  return 1;
}


// ==== 1072c743 ___crtInitCritSecAndSpinCount

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    ___crtInitCritSecAndSpinCount
   
   Library: Visual Studio 2005 Release */

int __cdecl ___crtInitCritSecAndSpinCount(undefined4 param_1,undefined4 param_2)

{
  code *pcVar1;
  int iVar2;
  HMODULE hModule;
  int local_20 [5];
  undefined4 uStack_c;
  undefined *local_8;
  
  local_8 = &DAT_1075ca60;
  uStack_c = 0x1072c74f;
  local_20[0] = 0;
  pcVar1 = (code *)FUN_1071f707(DAT_1076cd0c);
  if (pcVar1 != (FARPROC)0x0) goto LAB_1072c7b9;
  iVar2 = __get_osplatform(local_20);
  if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
    __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  }
  if (local_20[0] == 1) {
LAB_1072c7a8:
    pcVar1 = ___crtInitCritSecNoSpinCount_8;
  }
  else {
    hModule = GetModuleHandleA("kernel32.dll");
    if (hModule == (HMODULE)0x0) goto LAB_1072c7a8;
    pcVar1 = GetProcAddress(hModule,"InitializeCriticalSectionAndSpinCount");
    if (pcVar1 == (FARPROC)0x0) goto LAB_1072c7a8;
  }
  DAT_1076cd0c = FUN_1071f690((int)pcVar1);
LAB_1072c7b9:
  local_8 = (undefined *)0x0;
  iVar2 = (*pcVar1)(param_1,param_2);
  return iVar2;
}


// ==== 1072c808 FUN_1072c808

void __cdecl FUN_1072c808(undefined4 param_1)

{
  DAT_1076cd10 = param_1;
  return;
}


// ==== 1072c859 __callnewh

/* Library Function - Single Match
    __callnewh
   
   Library: Visual Studio 2005 Release */

int __cdecl __callnewh(size_t _Size)

{
  code *pcVar1;
  int iVar2;
  
  pcVar1 = (code *)FUN_1071f707(DAT_1076cd10);
  if (pcVar1 != (code *)0x0) {
    iVar2 = (*pcVar1)(_Size);
    if (iVar2 != 0) {
      return 1;
    }
  }
  return 0;
}


// ==== 1072c87b x_ismbbtype_l

/* Library Function - Single Match
    int __cdecl x_ismbbtype_l(struct localeinfo_struct *,unsigned int,int,int)
   
   Library: Visual Studio 2005 Release */

int __cdecl x_ismbbtype_l(localeinfo_struct *param_1,uint param_2,int param_3,int param_4)

{
  uint uVar1;
  int iVar2;
  int local_14;
  int local_10;
  int local_c;
  char local_8;
  
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_14,param_1);
  if ((*(byte *)(local_10 + 0x1d + (param_2 & 0xff)) & (byte)param_4) == 0) {
    if (param_3 == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = (uint)*(ushort *)(*(int *)(local_14 + 200) + (param_2 & 0xff) * 2) & param_3;
    }
    iVar2 = 0;
    if (uVar1 == 0) goto LAB_1072c8bd;
  }
  iVar2 = 1;
LAB_1072c8bd:
  if (local_8 != '\0') {
    *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
  }
  return iVar2;
}


// ==== 1072ca39 __ismbblead

/* Library Function - Single Match
    __ismbblead
   
   Library: Visual Studio 2005 Release */

int __cdecl __ismbblead(uint _C)

{
  int iVar1;
  
  iVar1 = x_ismbbtype_l((localeinfo_struct *)0x0,_C,0,4);
  return iVar1;
}


// ==== 1072ca74 __ismbbkana_l

/* Library Function - Single Match
    __ismbbkana_l
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release, Visual Studio 2010 Release */

int __cdecl __ismbbkana_l(uint _C,_locale_t _Locale)

{
  int iVar1;
  _LocaleUpdate local_14 [4];
  int local_10;
  int local_c;
  char local_8;
  
  _LocaleUpdate::_LocaleUpdate(local_14,_Locale);
  if ((local_10 == 0) || (*(int *)(local_10 + 4) != 0x3a4)) {
    if (local_8 != '\0') {
      *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
    }
    iVar1 = 0;
  }
  else {
    iVar1 = x_ismbbtype_l(_Locale,_C,0,3);
    if (local_8 != '\0') {
      *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
      return iVar1;
    }
  }
  return iVar1;
}


// ==== 1072caef __crtLCMapStringA_stat

/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */
/* Library Function - Single Match
    int __cdecl __crtLCMapStringA_stat(struct localeinfo_struct *,unsigned long,unsigned long,char
   const *,int,char *,int,int,int)
   
   Library: Visual Studio 2005 Release */

int __cdecl
__crtLCMapStringA_stat
          (localeinfo_struct *param_1,ulong param_2,ulong param_3,char *param_4,int param_5,
          char *param_6,int param_7,int param_8,int param_9)

{
  uint uVar1;
  bool bVar2;
  int iVar3;
  DWORD DVar4;
  char *pcVar5;
  uint cchWideChar;
  undefined4 *puVar6;
  LPCWSTR lpDestStr;
  UINT UVar7;
  int *in_ECX;
  char *pcVar8;
  LPSTR lpMultiByteStr;
  void *local_14;
  LPCWSTR local_10;
  uint local_c;
  uint local_8;
  
  local_8 = DAT_10765c70 ^ (uint)&stack0xfffffffc;
  if (DAT_1076cd14 == 0) {
    iVar3 = LCMapStringW(0,0x100,L"",1,(LPWSTR)0x0,0);
    if (iVar3 == 0) {
      DVar4 = GetLastError();
      if (DVar4 == 0x78) {
        DAT_1076cd14 = 2;
      }
    }
    else {
      DAT_1076cd14 = 1;
    }
  }
  pcVar5 = (char *)param_3;
  pcVar8 = param_4;
  if (0 < (int)param_4) {
    do {
      pcVar8 = pcVar8 + -1;
      if (*pcVar5 == '\0') goto LAB_1072cb5e;
      pcVar5 = pcVar5 + 1;
    } while (pcVar8 != (char *)0x0);
    pcVar8 = (char *)0xffffffff;
LAB_1072cb5e:
    pcVar5 = param_4 + -(int)pcVar8;
    bVar2 = (int)(pcVar5 + -1) < (int)param_4;
    param_4 = pcVar5 + -1;
    if (bVar2) {
      param_4 = pcVar5;
    }
  }
  if ((DAT_1076cd14 == 2) || (DAT_1076cd14 == 0)) {
    local_10 = (LPCWSTR)0x0;
    local_14 = (void *)0x0;
    if (param_1 == (localeinfo_struct *)0x0) {
      param_1 = *(localeinfo_struct **)(*in_ECX + 0x14);
    }
    if (param_7 == 0) {
      param_7 = *(int *)(*in_ECX + 4);
    }
    UVar7 = ___ansicp((LCID)param_1);
    if (UVar7 == 0xffffffff) goto LAB_1072ce7f;
    if (UVar7 == param_7) {
      LCMapStringA((LCID)param_1,param_2,(LPCSTR)param_3,(int)param_4,(LPSTR)param_5,(int)param_6);
    }
    else {
      local_10 = (LPCWSTR)___convertcp(param_7,UVar7,(char *)param_3,(uint *)&param_4,(LPSTR)0x0,0);
      if (local_10 == (LPCWSTR)0x0) goto LAB_1072ce7f;
      local_c = LCMapStringA((LCID)param_1,param_2,(LPCSTR)local_10,(int)param_4,(LPSTR)0x0,0);
      if (local_c != 0) {
        if (((int)local_c < 1) || (0xffffffe0 < local_c)) {
          pcVar5 = (char *)0x0;
        }
        else if (local_c + 8 < 0x401) {
          if (&stack0x00000000 == (undefined1 *)0x24) goto LAB_1072ce5c;
          pcVar5 = &stack0xffffffe4;
        }
        else {
          pcVar5 = _malloc(local_c + 8);
          if (pcVar5 != (char *)0x0) {
            pcVar5[0] = -0x23;
            pcVar5[1] = -0x23;
            pcVar5[2] = '\0';
            pcVar5[3] = '\0';
            pcVar5 = pcVar5 + 8;
          }
        }
        if (pcVar5 != (char *)0x0) {
          _memset(pcVar5,0,local_c);
          local_c = LCMapStringA((LCID)param_1,param_2,(LPCSTR)local_10,(int)param_4,pcVar5,local_c)
          ;
          if (local_c != 0) {
            local_14 = (void *)___convertcp(UVar7,param_7,pcVar5,&local_c,(LPSTR)param_5,
                                            (int)param_6);
          }
          __freea(pcVar5);
        }
      }
    }
LAB_1072ce5c:
    if (local_10 != (LPCWSTR)0x0) {
      _free(local_10);
    }
    if ((local_14 != (void *)0x0) && ((void *)param_5 != local_14)) {
      _free(local_14);
    }
    goto LAB_1072ce7f;
  }
  if (DAT_1076cd14 != 1) goto LAB_1072ce7f;
  local_c = 0;
  if (param_7 == 0) {
    param_7 = *(int *)(*in_ECX + 4);
  }
  cchWideChar = MultiByteToWideChar(param_7,(uint)(param_8 != 0) * 8 + 1,(LPCSTR)param_3,
                                    (int)param_4,(LPWSTR)0x0,0);
  if (cchWideChar == 0) goto LAB_1072ce7f;
  if (((int)cchWideChar < 1) || (0xffffffe0 / cchWideChar < 2)) {
    local_10 = (LPCWSTR)0x0;
  }
  else {
    uVar1 = cchWideChar * 2 + 8;
    if (uVar1 < 0x401) {
      puVar6 = (undefined4 *)&stack0xffffffdc;
      local_10 = (LPCWSTR)&stack0xffffffdc;
      if (&stack0x00000000 != (undefined1 *)0x24) {
LAB_1072cc06:
        local_10 = (LPCWSTR)(puVar6 + 2);
      }
    }
    else {
      puVar6 = _malloc(uVar1);
      local_10 = (LPCWSTR)0x0;
      if (puVar6 != (undefined4 *)0x0) {
        *puVar6 = 0xdddd;
        goto LAB_1072cc06;
      }
    }
  }
  if (local_10 == (LPCWSTR)0x0) goto LAB_1072ce7f;
  iVar3 = MultiByteToWideChar(param_7,1,(LPCSTR)param_3,(int)param_4,local_10,cchWideChar);
  if ((iVar3 != 0) &&
     (local_c = LCMapStringW((LCID)param_1,param_2,local_10,cchWideChar,(LPWSTR)0x0,0), local_c != 0
     )) {
    if ((param_2 & 0x400) == 0) {
      if (((int)local_c < 1) || (0xffffffe0 / local_c < 2)) {
        lpDestStr = (LPCWSTR)0x0;
      }
      else {
        uVar1 = local_c * 2 + 8;
        if (uVar1 < 0x401) {
          if (&stack0x00000000 == (undefined1 *)0x24) goto LAB_1072cd15;
          lpDestStr = (LPCWSTR)&stack0xffffffe4;
        }
        else {
          lpDestStr = _malloc(uVar1);
          if (lpDestStr != (LPCWSTR)0x0) {
            lpDestStr[0] = L'\xdddd';
            lpDestStr[1] = L'\0';
            lpDestStr = lpDestStr + 4;
          }
        }
      }
      if (lpDestStr != (LPCWSTR)0x0) {
        iVar3 = LCMapStringW((LCID)param_1,param_2,local_10,cchWideChar,lpDestStr,local_c);
        if (iVar3 != 0) {
          lpMultiByteStr = (LPSTR)param_5;
          pcVar5 = param_6;
          if (param_6 == (char *)0x0) {
            lpMultiByteStr = (LPSTR)0x0;
            pcVar5 = (char *)0x0;
          }
          local_c = WideCharToMultiByte(param_7,0,lpDestStr,local_c,lpMultiByteStr,(int)pcVar5,
                                        (LPCSTR)0x0,(LPBOOL)0x0);
        }
        __freea(lpDestStr);
      }
    }
    else if ((param_6 != (char *)0x0) && ((int)local_c <= (int)param_6)) {
      LCMapStringW((LCID)param_1,param_2,local_10,cchWideChar,(LPWSTR)param_5,(int)param_6);
    }
  }
LAB_1072cd15:
  __freea(local_10);
LAB_1072ce7f:
  iVar3 = __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return iVar3;
}


// ==== 1072ce91 ___crtLCMapStringA

/* Library Function - Single Match
    ___crtLCMapStringA
   
   Library: Visual Studio 2005 Release */

int __cdecl
___crtLCMapStringA(_locale_t _Plocinfo,LPCWSTR _LocaleName,DWORD _DwMapFlag,LPCSTR _LpSrcStr,
                  int _CchSrc,LPSTR _LpDestStr,int _CchDest,int _Code_page,BOOL _BError)

{
  int iVar1;
  int in_stack_ffffffec;
  int local_c;
  char local_8;
  
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&stack0xffffffec,_Plocinfo);
  iVar1 = __crtLCMapStringA_stat
                    ((localeinfo_struct *)_LocaleName,_DwMapFlag,(ulong)_LpSrcStr,(char *)_CchSrc,
                     (int)_LpDestStr,(char *)_CchDest,_Code_page,_BError,in_stack_ffffffec);
  if (local_8 != '\0') {
    *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
  }
  return iVar1;
}


// ==== 1072ced4 __crtGetStringTypeA_stat

/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */
/* Library Function - Single Match
    int __cdecl __crtGetStringTypeA_stat(struct localeinfo_struct *,unsigned long,char const
   *,int,unsigned short *,int,int,int)
   
   Library: Visual Studio 2005 Release */

int __cdecl
__crtGetStringTypeA_stat
          (localeinfo_struct *param_1,ulong param_2,char *param_3,int param_4,ushort *param_5,
          int param_6,int param_7,int param_8)

{
  uint _Size;
  BOOL BVar1;
  DWORD DVar2;
  uint cchWideChar;
  undefined4 *puVar3;
  int iVar4;
  ushort *puVar5;
  int *in_ECX;
  LPCWSTR lpWideCharStr;
  void *_Memory;
  int *local_c;
  uint local_8;
  
  local_8 = DAT_10765c70 ^ (uint)&stack0xfffffffc;
  lpWideCharStr = (LPCWSTR)0x0;
  local_c = in_ECX;
  if (DAT_1076cd18 == 0) {
    BVar1 = GetStringTypeW(1,L"",1,(LPWORD)&local_c);
    if (BVar1 == 0) {
      DVar2 = GetLastError();
      if (DVar2 == 0x78) {
        DAT_1076cd18 = 2;
      }
      goto LAB_1072cf2d;
    }
    DAT_1076cd18 = 1;
  }
  else {
LAB_1072cf2d:
    if ((DAT_1076cd18 == 2) || (DAT_1076cd18 == 0)) {
      _Memory = (void *)0x0;
      if (param_6 == 0) {
        param_6 = *(int *)(*in_ECX + 0x14);
      }
      if (param_5 == (ushort *)0x0) {
        param_5 = *(ushort **)(*in_ECX + 4);
      }
      puVar5 = (ushort *)___ansicp(param_6);
      if ((puVar5 != (ushort *)0xffffffff) &&
         (((puVar5 == param_5 ||
           (_Memory = (void *)___convertcp((UINT)param_5,(UINT)puVar5,(char *)param_2,
                                           (uint *)&param_3,(LPSTR)0x0,0), param_2 = (ulong)_Memory,
           _Memory != (void *)0x0)) &&
          (GetStringTypeA(param_6,(DWORD)param_1,(LPCSTR)param_2,(int)param_3,(LPWORD)param_4),
          _Memory != (void *)0x0)))) {
        _free(_Memory);
      }
      goto LAB_1072d07a;
    }
    if (DAT_1076cd18 != 1) goto LAB_1072d07a;
  }
  local_c = (int *)0x0;
  if (param_5 == (ushort *)0x0) {
    param_5 = *(ushort **)(*in_ECX + 4);
  }
  cchWideChar = MultiByteToWideChar((UINT)param_5,(uint)(param_7 != 0) * 8 + 1,(LPCSTR)param_2,
                                    (int)param_3,(LPWSTR)0x0,0);
  if (cchWideChar == 0) goto LAB_1072d07a;
  if ((0 < (int)cchWideChar) && (cchWideChar < 0x7ffffff1)) {
    _Size = cchWideChar * 2 + 8;
    if (_Size < 0x401) {
      puVar3 = (undefined4 *)&stack0xffffffe8;
      lpWideCharStr = (LPCWSTR)&stack0xffffffe8;
      if (&stack0x00000000 != (undefined1 *)0x18) {
LAB_1072cfbd:
        lpWideCharStr = (LPCWSTR)(puVar3 + 2);
      }
    }
    else {
      puVar3 = _malloc(_Size);
      lpWideCharStr = (LPCWSTR)0x0;
      if (puVar3 != (undefined4 *)0x0) {
        *puVar3 = 0xdddd;
        goto LAB_1072cfbd;
      }
    }
  }
  if (lpWideCharStr != (LPCWSTR)0x0) {
    _memset(lpWideCharStr,0,cchWideChar * 2);
    iVar4 = MultiByteToWideChar((UINT)param_5,1,(LPCSTR)param_2,(int)param_3,lpWideCharStr,
                                cchWideChar);
    if (iVar4 != 0) {
      local_c = (int *)GetStringTypeW((DWORD)param_1,lpWideCharStr,iVar4,(LPWORD)param_4);
    }
    __freea(lpWideCharStr);
  }
LAB_1072d07a:
  iVar4 = __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return iVar4;
}


// ==== 1072d08c ___crtGetStringTypeA

/* Library Function - Single Match
    ___crtGetStringTypeA
   
   Library: Visual Studio 2005 Release */

BOOL __cdecl
___crtGetStringTypeA
          (_locale_t _Plocinfo,DWORD _DWInfoType,LPCSTR _LpSrcStr,int _CchSrc,LPWORD _LpCharType,
          int _Code_page,BOOL _BError)

{
  int iVar1;
  int in_stack_00000020;
  int in_stack_ffffffec;
  int local_c;
  char local_8;
  
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&stack0xffffffec,_Plocinfo);
  iVar1 = __crtGetStringTypeA_stat
                    ((localeinfo_struct *)_DWInfoType,(ulong)_LpSrcStr,(char *)_CchSrc,
                     (int)_LpCharType,(ushort *)_Code_page,_BError,in_stack_00000020,
                     in_stack_ffffffec);
  if (local_8 != '\0') {
    *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
  }
  return iVar1;
}


// ==== 1072d0fb __get_lc_time

/* Library Function - Single Match
    __get_lc_time
   
   Library: Visual Studio 2005 Release */

uint __get_lc_time(void)

{
  LPCWSTR pWVar1;
  int in_EAX;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  uint uVar29;
  uint uVar30;
  uint uVar31;
  uint uVar32;
  uint uVar33;
  uint uVar34;
  uint uVar35;
  uint uVar36;
  uint uVar37;
  uint uVar38;
  uint uVar39;
  uint uVar40;
  uint uVar41;
  uint uVar42;
  uint uVar43;
  uint uVar44;
  uint uVar45;
  void *unaff_ESI;
  localeinfo_struct local_14;
  LPCWSTR local_c;
  LPCWSTR local_8;
  
  local_8 = (LPCWSTR)(uint)*(ushort *)(in_EAX + 0x42);
  local_c = (LPCWSTR)(uint)*(ushort *)(in_EAX + 0x44);
  if (unaff_ESI == (void *)0x0) {
    return 0xffffffff;
  }
  local_14.mbcinfo = (pthreadmbcinfo)0x0;
  uVar2 = ___getlocaleinfo(&local_14,1,local_8,0x31,(void *)((int)unaff_ESI + 4));
  uVar3 = ___getlocaleinfo(&local_14,1,local_8,0x32,(void *)((int)unaff_ESI + 8));
  uVar4 = ___getlocaleinfo(&local_14,1,local_8,0x33,(void *)((int)unaff_ESI + 0xc));
  uVar5 = ___getlocaleinfo(&local_14,1,local_8,0x34,(void *)((int)unaff_ESI + 0x10));
  uVar6 = ___getlocaleinfo(&local_14,1,local_8,0x35,(void *)((int)unaff_ESI + 0x14));
  uVar7 = ___getlocaleinfo(&local_14,1,local_8,0x36,(void *)((int)unaff_ESI + 0x18));
  uVar8 = ___getlocaleinfo(&local_14,1,local_8,0x37,unaff_ESI);
  uVar9 = ___getlocaleinfo(&local_14,1,local_8,0x2a,(void *)((int)unaff_ESI + 0x20));
  uVar10 = ___getlocaleinfo(&local_14,1,local_8,0x2b,(void *)((int)unaff_ESI + 0x24));
  uVar11 = ___getlocaleinfo(&local_14,1,local_8,0x2c,(void *)((int)unaff_ESI + 0x28));
  uVar12 = ___getlocaleinfo(&local_14,1,local_8,0x2d,(void *)((int)unaff_ESI + 0x2c));
  uVar13 = ___getlocaleinfo(&local_14,1,local_8,0x2e,(void *)((int)unaff_ESI + 0x30));
  uVar14 = ___getlocaleinfo(&local_14,1,local_8,0x2f,(void *)((int)unaff_ESI + 0x34));
  uVar15 = ___getlocaleinfo(&local_14,1,local_8,0x30,(void *)((int)unaff_ESI + 0x1c));
  uVar16 = ___getlocaleinfo(&local_14,1,local_8,0x44,(void *)((int)unaff_ESI + 0x38));
  uVar17 = ___getlocaleinfo(&local_14,1,local_8,0x45,(void *)((int)unaff_ESI + 0x3c));
  uVar18 = ___getlocaleinfo(&local_14,1,local_8,0x46,(void *)((int)unaff_ESI + 0x40));
  uVar19 = ___getlocaleinfo(&local_14,1,local_8,0x47,(void *)((int)unaff_ESI + 0x44));
  uVar20 = ___getlocaleinfo(&local_14,1,local_8,0x48,(void *)((int)unaff_ESI + 0x48));
  uVar21 = ___getlocaleinfo(&local_14,1,local_8,0x49,(void *)((int)unaff_ESI + 0x4c));
  uVar22 = ___getlocaleinfo(&local_14,1,local_8,0x4a,(void *)((int)unaff_ESI + 0x50));
  uVar23 = ___getlocaleinfo(&local_14,1,local_8,0x4b,(void *)((int)unaff_ESI + 0x54));
  uVar24 = ___getlocaleinfo(&local_14,1,local_8,0x4c,(void *)((int)unaff_ESI + 0x58));
  uVar25 = ___getlocaleinfo(&local_14,1,local_8,0x4d,(void *)((int)unaff_ESI + 0x5c));
  uVar26 = ___getlocaleinfo(&local_14,1,local_8,0x4e,(void *)((int)unaff_ESI + 0x60));
  uVar27 = ___getlocaleinfo(&local_14,1,local_8,0x4f,(void *)((int)unaff_ESI + 100));
  uVar28 = ___getlocaleinfo(&local_14,1,local_8,0x38,(void *)((int)unaff_ESI + 0x68));
  uVar29 = ___getlocaleinfo(&local_14,1,local_8,0x39,(void *)((int)unaff_ESI + 0x6c));
  uVar30 = ___getlocaleinfo(&local_14,1,local_8,0x3a,(void *)((int)unaff_ESI + 0x70));
  uVar31 = ___getlocaleinfo(&local_14,1,local_8,0x3b,(void *)((int)unaff_ESI + 0x74));
  uVar32 = ___getlocaleinfo(&local_14,1,local_8,0x3c,(void *)((int)unaff_ESI + 0x78));
  uVar33 = ___getlocaleinfo(&local_14,1,local_8,0x3d,(void *)((int)unaff_ESI + 0x7c));
  uVar34 = ___getlocaleinfo(&local_14,1,local_8,0x3e,(void *)((int)unaff_ESI + 0x80));
  uVar35 = ___getlocaleinfo(&local_14,1,local_8,0x3f,(void *)((int)unaff_ESI + 0x84));
  uVar36 = ___getlocaleinfo(&local_14,1,local_8,0x40,(void *)((int)unaff_ESI + 0x88));
  uVar37 = ___getlocaleinfo(&local_14,1,local_8,0x41,(void *)((int)unaff_ESI + 0x8c));
  uVar38 = ___getlocaleinfo(&local_14,1,local_8,0x42,(void *)((int)unaff_ESI + 0x90));
  uVar39 = ___getlocaleinfo(&local_14,1,local_8,0x43,(void *)((int)unaff_ESI + 0x94));
  uVar40 = ___getlocaleinfo(&local_14,1,local_8,0x28,(void *)((int)unaff_ESI + 0x98));
  uVar41 = ___getlocaleinfo(&local_14,1,local_8,0x29,(void *)((int)unaff_ESI + 0x9c));
  uVar42 = ___getlocaleinfo(&local_14,1,local_c,0x1f,(void *)((int)unaff_ESI + 0xa0));
  uVar43 = ___getlocaleinfo(&local_14,1,local_c,0x20,(void *)((int)unaff_ESI + 0xa4));
  uVar44 = ___getlocaleinfo(&local_14,1,local_c,0x1003,(void *)((int)unaff_ESI + 0xa8));
  pWVar1 = local_c;
  uVar45 = ___getlocaleinfo(&local_14,0,local_c,0x1009,(void *)((int)unaff_ESI + 0xb0));
  *(LPCWSTR *)((int)unaff_ESI + 0xac) = pWVar1;
  return uVar2 | uVar3 | uVar4 | uVar5 | uVar6 | uVar7 | uVar8 | uVar9 | uVar10 | uVar11 | uVar12 |
         uVar13 | uVar14 | uVar15 | uVar16 | uVar17 | uVar18 | uVar19 | uVar20 | uVar21 | uVar22 |
         uVar23 | uVar24 | uVar25 | uVar26 | uVar27 | uVar28 | uVar29 | uVar30 | uVar31 | uVar32 |
         uVar33 | uVar34 | uVar35 | uVar36 | uVar37 | uVar38 | uVar39 | uVar40 | uVar41 | uVar42 |
         uVar43 | uVar44 | uVar45;
}


// ==== 1072d514 ___free_lc_time

/* Library Function - Single Match
    ___free_lc_time
   
   Library: Visual Studio 2005 Release */

void __cdecl ___free_lc_time(undefined4 *param_1)

{
  if (param_1 != (undefined4 *)0x0) {
    _free((void *)param_1[1]);
    _free((void *)param_1[2]);
    _free((void *)param_1[3]);
    _free((void *)param_1[4]);
    _free((void *)param_1[5]);
    _free((void *)param_1[6]);
    _free((void *)*param_1);
    _free((void *)param_1[8]);
    _free((void *)param_1[9]);
    _free((void *)param_1[10]);
    _free((void *)param_1[0xb]);
    _free((void *)param_1[0xc]);
    _free((void *)param_1[0xd]);
    _free((void *)param_1[7]);
    _free((void *)param_1[0xe]);
    _free((void *)param_1[0xf]);
    _free((void *)param_1[0x10]);
    _free((void *)param_1[0x11]);
    _free((void *)param_1[0x12]);
    _free((void *)param_1[0x13]);
    _free((void *)param_1[0x14]);
    _free((void *)param_1[0x15]);
    _free((void *)param_1[0x16]);
    _free((void *)param_1[0x17]);
    _free((void *)param_1[0x18]);
    _free((void *)param_1[0x19]);
    _free((void *)param_1[0x1a]);
    _free((void *)param_1[0x1b]);
    _free((void *)param_1[0x1c]);
    _free((void *)param_1[0x1d]);
    _free((void *)param_1[0x1e]);
    _free((void *)param_1[0x1f]);
    _free((void *)param_1[0x20]);
    _free((void *)param_1[0x21]);
    _free((void *)param_1[0x22]);
    _free((void *)param_1[0x23]);
    _free((void *)param_1[0x24]);
    _free((void *)param_1[0x25]);
    _free((void *)param_1[0x26]);
    _free((void *)param_1[0x27]);
    _free((void *)param_1[0x28]);
    _free((void *)param_1[0x29]);
    _free((void *)param_1[0x2a]);
  }
  return;
}


// ==== 1072d6a4 ___init_time

/* Library Function - Single Match
    ___init_time
   
   Library: Visual Studio 2005 Release */

int __cdecl ___init_time(threadlocinfo *_LocInfo)

{
  undefined **ppuVar1;
  undefined **_Memory;
  uint uVar2;
  int **ppiVar3;
  
  if (_LocInfo->lc_category[1].locale == (char *)0x0) {
    _Memory = &PTR_DAT_107667d8;
  }
  else {
    _Memory = __calloc_crt(1,0xb8);
    if (_Memory == (undefined **)0x0) {
      return 1;
    }
    uVar2 = __get_lc_time();
    if (uVar2 != 0) {
      ___free_lc_time(_Memory);
      _free(_Memory);
      return 1;
    }
    _Memory[0x2d] = (undefined *)0x1;
  }
  ppiVar3 = &_LocInfo[1].lc_category[0].wrefcount;
  ppuVar1 = (undefined **)*ppiVar3;
  if (ppuVar1 != &PTR_DAT_107667d8) {
    InterlockedDecrement((LONG *)(ppuVar1 + 0x2d));
  }
  *ppiVar3 = (int *)_Memory;
  return 0;
}


// ==== 1072d74a ___free_lconv_num

/* Library Function - Single Match
    ___free_lconv_num
   
   Library: Visual Studio 2005 Release */

void __cdecl ___free_lconv_num(undefined4 *param_1)

{
  if (param_1 != (undefined4 *)0x0) {
    if ((undefined *)*param_1 != PTR_DAT_10766898) {
      _free((undefined *)*param_1);
    }
    if ((undefined *)param_1[1] != PTR_DAT_1076689c) {
      _free((undefined *)param_1[1]);
    }
    if ((undefined *)param_1[2] != PTR_DAT_107668a0) {
      _free((undefined *)param_1[2]);
    }
  }
  return;
}


// ==== 1072d78a ___init_numeric

/* Library Function - Single Match
    ___init_numeric
   
   Library: Visual Studio 2005 Release */

int __cdecl ___init_numeric(threadlocinfo *_LocInfo)

{
  char *pcVar1;
  char cVar2;
  threadlocinfo *ptVar3;
  threadlocinfo *_Address;
  uint uVar4;
  char *pcVar5;
  LONG LVar6;
  int iVar7;
  int *piVar8;
  char *pcVar9;
  threadlocinfo *ptVar10;
  LPCWSTR _LocaleName;
  localeinfo_struct local_1c;
  uint *local_14;
  uint local_10;
  wchar_t *local_c;
  wchar_t *local_8;
  
  ptVar3 = _LocInfo;
  local_1c.locinfo = _LocInfo;
  local_1c.mbcinfo = (pthreadmbcinfo)0x0;
  if ((_LocInfo->lc_category[0].wrefcount == (int *)0x0) &&
     (_LocInfo->lc_category[0].refcount == (int *)0x0)) {
    local_8 = (wchar_t *)0x0;
    local_c = (wchar_t *)0x0;
    _LocInfo = (threadlocinfo *)&PTR_DAT_10766898;
LAB_1072d8f4:
    if (ptVar3->locale_name[5] != (wchar_t *)0x0) {
      InterlockedDecrement((LONG *)ptVar3->locale_name[5]);
    }
    if ((ptVar3->locale_name[4] != (wchar_t *)0x0) &&
       (LVar6 = InterlockedDecrement((LONG *)ptVar3->locale_name[4]), LVar6 == 0)) {
      _free(ptVar3->locale_name[4]);
      _free((void *)ptVar3[1].lc_codepage);
    }
    ptVar3->locale_name[5] = local_8;
    ptVar3->locale_name[4] = local_c;
    ptVar3[1].lc_codepage = (uint)_LocInfo;
    iVar7 = 0;
  }
  else {
    _Address = __calloc_crt(1,0x30);
    if (_Address != (threadlocinfo *)0x0) {
      piVar8 = (int *)_LocInfo[1].lc_codepage;
      ptVar10 = _Address;
      for (iVar7 = 0xc; iVar7 != 0; iVar7 = iVar7 + -1) {
        ptVar10->refcount = *piVar8;
        piVar8 = piVar8 + 1;
        ptVar10 = (threadlocinfo *)&ptVar10->lc_codepage;
      }
      local_c = __malloc_crt(4);
      if (local_c != (wchar_t *)0x0) {
        local_c[0] = L'\0';
        local_c[1] = L'\0';
        if (_LocInfo->lc_category[0].wrefcount == (int *)0x0) {
          _Address->refcount = (int)PTR_DAT_10766898;
          _Address->lc_codepage = (uint)PTR_DAT_1076689c;
          local_8 = (wchar_t *)0x0;
          _Address->lc_collate_cp = (uint)PTR_DAT_107668a0;
        }
        else {
          local_8 = __malloc_crt(4);
          if (local_8 == (wchar_t *)0x0) {
            iVar7 = 1;
LAB_1072d81a:
            _free(_Address);
            _free(local_c);
            return iVar7;
          }
          local_8[0] = L'\0';
          local_8[1] = L'\0';
          _LocaleName = (LPCWSTR)(uint)*(ushort *)((int)&_LocInfo->lc_category[2].wrefcount + 2);
          local_10 = ___getlocaleinfo(&local_1c,1,_LocaleName,0xe,_Address);
          uVar4 = ___getlocaleinfo(&local_1c,1,_LocaleName,0xf,&_Address->lc_codepage);
          local_10 = local_10 | uVar4;
          local_14 = &_Address->lc_collate_cp;
          iVar7 = ___getlocaleinfo(&local_1c,1,_LocaleName,0x10,local_14);
          if (iVar7 != 0 || local_10 != 0) {
            ___free_lconv_num(&_Address->refcount);
            iVar7 = -1;
            goto LAB_1072d81a;
          }
          pcVar5 = (char *)*local_14;
          while (*pcVar5 != '\0') {
            cVar2 = *pcVar5;
            if ((cVar2 < '0') || ('9' < cVar2)) {
              pcVar9 = pcVar5;
              if (cVar2 != ';') goto LAB_1072d8a4;
              do {
                pcVar1 = pcVar9 + 1;
                *pcVar9 = *pcVar1;
                pcVar9 = pcVar1;
              } while (*pcVar1 != '\0');
            }
            else {
              *pcVar5 = cVar2 + -0x30;
LAB_1072d8a4:
              pcVar5 = pcVar5 + 1;
            }
          }
        }
        local_c[0] = L'\x01';
        local_c[1] = L'\0';
        _LocInfo = _Address;
        if (local_8 != (wchar_t *)0x0) {
          local_8[0] = L'\x01';
          local_8[1] = L'\0';
        }
        goto LAB_1072d8f4;
      }
      _free(_Address);
    }
    iVar7 = 1;
  }
  return iVar7;
}


// ==== 1072d985 ___free_lconv_mon

/* Library Function - Single Match
    ___free_lconv_mon
   
   Library: Visual Studio 2005 Release */

void __cdecl ___free_lconv_mon(int param_1)

{
  if (param_1 != 0) {
    if (*(undefined **)(param_1 + 0xc) != PTR_DAT_107668a4) {
      _free(*(undefined **)(param_1 + 0xc));
    }
    if (*(undefined **)(param_1 + 0x10) != PTR_DAT_107668a8) {
      _free(*(undefined **)(param_1 + 0x10));
    }
    if (*(undefined **)(param_1 + 0x14) != PTR_DAT_107668ac) {
      _free(*(undefined **)(param_1 + 0x14));
    }
    if (*(undefined **)(param_1 + 0x18) != PTR_DAT_107668b0) {
      _free(*(undefined **)(param_1 + 0x18));
    }
    if (*(undefined **)(param_1 + 0x1c) != PTR_DAT_107668b4) {
      _free(*(undefined **)(param_1 + 0x1c));
    }
    if (*(undefined **)(param_1 + 0x20) != PTR_DAT_107668b8) {
      _free(*(undefined **)(param_1 + 0x20));
    }
    if (*(undefined **)(param_1 + 0x24) != PTR_DAT_107668bc) {
      _free(*(undefined **)(param_1 + 0x24));
    }
  }
  return;
}


// ==== 1072da0e ___init_monetary

/* Library Function - Single Match
    ___init_monetary
   
   Library: Visual Studio 2005 Release */

int __cdecl ___init_monetary(threadlocinfo *_LocInfo)

{
  char *pcVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  char *pcVar17;
  uint *puVar18;
  LONG LVar19;
  int iVar20;
  undefined **_Memory;
  LPCWSTR _LocaleName;
  char *pcVar21;
  undefined **ppuVar22;
  undefined **ppuVar23;
  localeinfo_struct local_14;
  wchar_t *local_c;
  undefined4 *local_8;
  
  local_8 = (undefined4 *)0x0;
  local_14.locinfo = _LocInfo;
  local_14.mbcinfo = (pthreadmbcinfo)0x0;
  if ((_LocInfo->lc_category[0].refcount == (int *)0x0) &&
     (_LocInfo->lc_category[0].wrefcount == (int *)0x0)) {
    local_8 = (undefined4 *)0x0;
    local_c = (wchar_t *)0x0;
    _Memory = &PTR_DAT_10766898;
LAB_1072dc75:
    if ((LONG *)_LocInfo[1].refcount != (LONG *)0x0) {
      InterlockedDecrement((LONG *)_LocInfo[1].refcount);
    }
    if ((_LocInfo->locale_name[4] != (wchar_t *)0x0) &&
       (LVar19 = InterlockedDecrement((LONG *)_LocInfo->locale_name[4]), LVar19 == 0)) {
      _free((void *)_LocInfo[1].lc_codepage);
      _free(_LocInfo->locale_name[4]);
    }
    _LocInfo[1].refcount = (int)local_8;
    _LocInfo->locale_name[4] = local_c;
    _LocInfo[1].lc_codepage = (uint)_Memory;
    iVar20 = 0;
  }
  else {
    _Memory = __calloc_crt(1,0x30);
    if (_Memory != (undefined **)0x0) {
      local_c = __malloc_crt(4);
      if (local_c == (wchar_t *)0x0) {
        _free(_Memory);
      }
      else {
        local_c[0] = L'\0';
        local_c[1] = L'\0';
        if (_LocInfo->lc_category[0].refcount == (int *)0x0) {
          ppuVar22 = &PTR_DAT_10766898;
          ppuVar23 = _Memory;
          for (iVar20 = 0xc; iVar20 != 0; iVar20 = iVar20 + -1) {
            *ppuVar23 = *ppuVar22;
            ppuVar22 = ppuVar22 + 1;
            ppuVar23 = ppuVar23 + 1;
          }
LAB_1072dc40:
          puVar18 = &_LocInfo[1].lc_codepage;
          *_Memory = *(undefined **)*puVar18;
          _Memory[1] = *(undefined **)(*puVar18 + 4);
          _Memory[2] = *(undefined **)(*puVar18 + 8);
          local_c[0] = L'\x01';
          local_c[1] = L'\0';
          if (local_8 != (undefined4 *)0x0) {
            *local_8 = 1;
          }
          goto LAB_1072dc75;
        }
        local_8 = __malloc_crt(4);
        if (local_8 == (undefined4 *)0x0) {
          _free(_Memory);
          _free(local_c);
        }
        else {
          *local_8 = 0;
          _LocaleName = (LPCWSTR)(uint)*(ushort *)&_LocInfo->lc_category[2].refcount;
          iVar20 = ___getlocaleinfo(&local_14,1,_LocaleName,0x15,_Memory + 3);
          iVar3 = ___getlocaleinfo(&local_14,1,_LocaleName,0x14,_Memory + 4);
          iVar4 = ___getlocaleinfo(&local_14,1,_LocaleName,0x16,_Memory + 5);
          iVar5 = ___getlocaleinfo(&local_14,1,_LocaleName,0x17,_Memory + 6);
          iVar6 = ___getlocaleinfo(&local_14,1,_LocaleName,0x18,_Memory + 7);
          iVar7 = ___getlocaleinfo(&local_14,1,_LocaleName,0x50,_Memory + 8);
          iVar8 = ___getlocaleinfo(&local_14,1,_LocaleName,0x51,_Memory + 9);
          iVar9 = ___getlocaleinfo(&local_14,0,_LocaleName,0x1a,_Memory + 10);
          iVar10 = ___getlocaleinfo(&local_14,0,_LocaleName,0x19,(void *)((int)_Memory + 0x29));
          iVar11 = ___getlocaleinfo(&local_14,0,_LocaleName,0x54,(void *)((int)_Memory + 0x2a));
          iVar12 = ___getlocaleinfo(&local_14,0,_LocaleName,0x55,(void *)((int)_Memory + 0x2b));
          iVar13 = ___getlocaleinfo(&local_14,0,_LocaleName,0x56,_Memory + 0xb);
          iVar14 = ___getlocaleinfo(&local_14,0,_LocaleName,0x57,(void *)((int)_Memory + 0x2d));
          iVar15 = ___getlocaleinfo(&local_14,0,_LocaleName,0x52,(void *)((int)_Memory + 0x2e));
          iVar16 = ___getlocaleinfo(&local_14,0,_LocaleName,0x53,(void *)((int)_Memory + 0x2f));
          if (iVar16 == 0 &&
              (((((((((((((iVar20 == 0 && iVar3 == 0) && iVar4 == 0) && iVar5 == 0) && iVar6 == 0)
                      && iVar7 == 0) && iVar8 == 0) && iVar9 == 0) && iVar10 == 0) && iVar11 == 0)
                 && iVar12 == 0) && iVar13 == 0) && iVar14 == 0) && iVar15 == 0)) {
            pcVar17 = _Memory[7];
            while (*pcVar17 != '\0') {
              cVar2 = *pcVar17;
              if ((cVar2 < '0') || ('9' < cVar2)) {
                pcVar21 = pcVar17;
                if (cVar2 != ';') goto LAB_1072dc15;
                do {
                  pcVar1 = pcVar21 + 1;
                  *pcVar21 = *pcVar1;
                  pcVar21 = pcVar1;
                } while (*pcVar1 != '\0');
              }
              else {
                *pcVar17 = cVar2 + -0x30;
LAB_1072dc15:
                pcVar17 = pcVar17 + 1;
              }
            }
            goto LAB_1072dc40;
          }
          ___free_lconv_mon((int)_Memory);
          _free(_Memory);
          _free(local_c);
          _free(local_8);
        }
      }
    }
    iVar20 = 1;
  }
  return iVar20;
}


// ==== 1072dcd2 ___init_ctype

/* Library Function - Single Match
    ___init_ctype
   
   Library: Visual Studio 2005 Release */

int __cdecl ___init_ctype(threadlocinfo *_LocInfo)

{
  BYTE *pBVar1;
  byte bVar2;
  LONG *lpAddend;
  undefined2 *_Dst;
  int iVar3;
  BOOL BVar4;
  BYTE *pBVar5;
  LONG LVar6;
  BYTE *pBVar7;
  uint uVar8;
  localeinfo_struct local_4c;
  wchar_t *local_44;
  LPWORD local_40;
  undefined2 *local_3c;
  int *local_38;
  wchar_t *local_34;
  undefined4 *local_30;
  void *local_2c;
  undefined2 *local_28;
  LPCSTR local_24;
  BYTE *local_20;
  _cpinfo local_1c;
  uint local_8;
  
  local_8 = DAT_10765c70 ^ (uint)&stack0xfffffffc;
  local_30 = (undefined4 *)0x0;
  local_28 = (undefined2 *)0x0;
  local_20 = (BYTE *)0x0;
  local_2c = (void *)0x0;
  local_24 = (LPCSTR)0x0;
  local_4c.locinfo = _LocInfo;
  local_4c.mbcinfo = (pthreadmbcinfo)0x0;
  if (_LocInfo->lc_category[0].wlocale == (wchar_t *)0x0) {
    lpAddend = (LONG *)_LocInfo[1].lc_collate_cp;
    if (lpAddend != (LONG *)0x0) {
      InterlockedDecrement(lpAddend);
    }
    _LocInfo[1].lc_collate_cp = 0;
    _LocInfo[1].lc_time_cp = 0;
    _LocInfo[1].lc_category[0].locale = " ";
    _LocInfo[1].lc_category[0].wlocale = (wchar_t *)&DAT_10753198;
    _LocInfo[1].lc_category[0].refcount = (int *)&DAT_10753318;
    _LocInfo->locale_name[3] = (wchar_t *)0x1;
    goto LAB_1072e058;
  }
  if ((_LocInfo->lc_codepage == 0) &&
     (iVar3 = ___getlocaleinfo(&local_4c,0,
                               (LPCWSTR)(uint)*(ushort *)&_LocInfo->lc_category[2].locale,0x1004,
                               &_LocInfo->lc_codepage), iVar3 != 0)) {
LAB_1072dfeb:
    _free(local_30);
    _free(local_28);
    _free(local_20);
    _free(local_2c);
  }
  else {
    local_30 = __malloc_crt(4);
    local_28 = __calloc_crt(0x180,2);
    local_20 = __calloc_crt(0x180,1);
    local_2c = __calloc_crt(0x180,1);
    local_24 = __calloc_crt(0x101,1);
    if ((local_30 == (undefined4 *)0x0) ||
       ((((local_28 == (undefined2 *)0x0 || (local_24 == (LPCSTR)0x0)) || (local_20 == (BYTE *)0x0))
        || (local_2c == (void *)0x0)))) goto LAB_1072dfeb;
    *local_30 = 0;
    iVar3 = 0;
    do {
      local_24[iVar3] = (CHAR)iVar3;
      iVar3 = iVar3 + 1;
    } while (iVar3 < 0x100);
    BVar4 = GetCPInfo(_LocInfo->lc_codepage,&local_1c);
    if ((BVar4 == 0) || (5 < local_1c.MaxCharSize)) goto LAB_1072dfeb;
    local_34 = (wchar_t *)(local_1c.MaxCharSize & 0xffff);
    if (((wchar_t *)0x1 < local_34) && (local_1c.LeadByte[0] != '\0')) {
      pBVar5 = local_1c.LeadByte + 1;
      do {
        bVar2 = *pBVar5;
        if (bVar2 == 0) break;
        for (uVar8 = (uint)pBVar5[-1]; (int)uVar8 <= (int)(uint)bVar2; uVar8 = uVar8 + 1) {
          local_24[uVar8] = ' ';
          bVar2 = *pBVar5;
        }
        pBVar7 = pBVar5 + 1;
        pBVar5 = pBVar5 + 2;
      } while (*pBVar7 != 0);
    }
    local_40 = local_28 + 0x80;
    BVar4 = ___crtGetStringTypeA((_locale_t)0x0,1,local_24,0x100,local_40,_LocInfo->lc_codepage,0);
    if (((BVar4 == 0) ||
        (iVar3 = ___crtLCMapStringA((_locale_t)0x0,_LocInfo->lc_category[0].wlocale,0x100,
                                    local_24 + 1,0xff,(LPSTR)(local_20 + 0x81),0xff,
                                    _LocInfo->lc_codepage,0), iVar3 == 0)) ||
       (iVar3 = ___crtLCMapStringA((_locale_t)0x0,_LocInfo->lc_category[0].wlocale,0x200,
                                   local_24 + 1,0xff,(LPSTR)((int)local_2c + 0x81),0xff,
                                   _LocInfo->lc_codepage,0), pBVar5 = local_20, _Dst = local_28,
       iVar3 == 0)) goto LAB_1072dfeb;
    local_3c = local_28 + 0x7f;
    *local_3c = 0;
    local_44 = (wchar_t *)(local_20 + 0x80);
    local_20[0x7f] = 0;
    *(undefined1 *)((int)local_2c + 0x7f) = 0;
    *(byte *)local_44 = 0;
    local_38 = (int *)((int)local_2c + 0x80);
    *(undefined1 *)local_38 = 0;
    if ((1 < (int)local_34) && (local_1c.LeadByte[0] != '\0')) {
      pBVar7 = local_1c.LeadByte + 1;
      do {
        local_20 = pBVar7;
        if (*pBVar7 == 0) break;
        uVar8 = (uint)pBVar7[-1];
        if (uVar8 <= *pBVar7) {
          local_28 = _Dst + uVar8 + 0x80;
          do {
            *local_28 = 0x8000;
            uVar8 = uVar8 + 1;
            local_28 = local_28 + 1;
          } while ((int)uVar8 <= (int)(uint)*pBVar7);
        }
        local_20 = pBVar7 + 2;
        pBVar1 = pBVar7 + 1;
        pBVar7 = local_20;
      } while (*pBVar1 != 0);
    }
    _memcpy(_Dst,_Dst + 0x100,0xfe);
    _memcpy(pBVar5,pBVar5 + 0x100,0x7f);
    _memcpy(local_2c,(void *)((int)local_2c + 0x100),0x7f);
    if (((LONG *)_LocInfo[1].lc_collate_cp != (LONG *)0x0) &&
       (LVar6 = InterlockedDecrement((LONG *)_LocInfo[1].lc_collate_cp), LVar6 == 0)) {
      _free((void *)(_LocInfo[1].lc_time_cp - 0xfe));
      _free(_LocInfo[1].lc_category[0].wlocale + -0x40);
      _free(_LocInfo[1].lc_category[0].refcount + -0x20);
      _free((void *)_LocInfo[1].lc_collate_cp);
    }
    *local_30 = 1;
    _LocInfo[1].lc_collate_cp = (uint)local_30;
    _LocInfo[1].lc_category[0].locale = (char *)local_40;
    _LocInfo[1].lc_time_cp = (uint)local_3c;
    _LocInfo[1].lc_category[0].wlocale = local_44;
    _LocInfo[1].lc_category[0].refcount = local_38;
    _LocInfo->locale_name[3] = local_34;
  }
  _free(local_24);
LAB_1072e058:
  iVar3 = __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return iVar3;
}


// ==== 1072e0a6 ____lc_codepage_func

/* Library Function - Single Match
    ____lc_codepage_func
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release */

UINT __cdecl ____lc_codepage_func(void)

{
  _ptiddata p_Var1;
  pthreadlocinfo ptVar2;
  
  p_Var1 = __getptd();
  ptVar2 = p_Var1->ptlocinfo;
  if ((ptVar2 != (pthreadlocinfo)PTR_DAT_10766428) && ((p_Var1->_ownlocale & DAT_10766344) == 0)) {
    ptVar2 = ___updatetlocinfo();
  }
  return ptVar2->lc_codepage;
}


// ==== 1072e11b __Getdays_l

/* Library Function - Single Match
    __Getdays_l
   
   Library: Visual Studio 2005 Release */

char * __cdecl __Getdays_l(localeinfo_struct *param_1)

{
  int iVar1;
  size_t sVar2;
  char *pcVar3;
  errno_t eVar4;
  int iVar5;
  int iVar6;
  int local_1c [2];
  int local_14;
  char local_10;
  char *local_c;
  uint local_8;
  
  iVar5 = 0;
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)local_1c,param_1);
  iVar1 = *(int *)(local_1c[0] + 0xd4);
  local_8 = 0;
  do {
    iVar6 = local_8 * 4;
    local_c = (char *)_strlen(*(char **)(iVar6 + 0x1c + iVar1));
    sVar2 = _strlen(*(char **)(iVar6 + iVar1));
    local_8 = local_8 + 1;
    iVar5 = sVar2 + iVar5 + 2 + (int)local_c;
  } while (local_8 < 7);
  pcVar3 = __malloc_crt(iVar5 + 1);
  local_c = pcVar3;
  if (pcVar3 != (char *)0x0) {
    local_8 = 0;
    do {
      *pcVar3 = ':';
      pcVar3 = pcVar3 + 1;
      eVar4 = _strcpy_s(pcVar3,(rsize_t)(local_c + iVar5 + (1 - (int)pcVar3)),
                        *(char **)(iVar1 + local_8 * 4));
      if (eVar4 != 0) {
                    /* WARNING: Subroutine does not return */
        __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      sVar2 = _strlen(pcVar3);
      pcVar3[sVar2] = ':';
      pcVar3 = pcVar3 + sVar2 + 1;
      eVar4 = _strcpy_s(pcVar3,(rsize_t)(local_c + iVar5 + (1 - (int)pcVar3)),
                        *(char **)(iVar1 + 0x1c + local_8 * 4));
      if (eVar4 != 0) {
                    /* WARNING: Subroutine does not return */
        __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      sVar2 = _strlen(pcVar3);
      pcVar3 = pcVar3 + sVar2;
      local_8 = local_8 + 1;
    } while (local_8 < 7);
    *pcVar3 = '\0';
  }
  if (local_10 != '\0') {
    *(uint *)(local_14 + 0x70) = *(uint *)(local_14 + 0x70) & 0xfffffffd;
  }
  return local_c;
}


// ==== 1072e222 __Getmonths_l

/* Library Function - Single Match
    __Getmonths_l
   
   Library: Visual Studio 2005 Release */

char * __cdecl __Getmonths_l(localeinfo_struct *param_1)

{
  int iVar1;
  size_t sVar2;
  char *pcVar3;
  errno_t eVar4;
  int iVar5;
  undefined4 *puVar6;
  int local_20 [2];
  int local_18;
  char local_14;
  size_t local_10;
  int local_c;
  char *local_8;
  
  iVar5 = 0;
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)local_20,param_1);
  iVar1 = *(int *)(local_20[0] + 0xd4);
  puVar6 = (undefined4 *)(iVar1 + 0x38);
  local_c = 0xc;
  do {
    local_8 = (char *)puVar6;
    local_10 = _strlen((char *)puVar6[0xc]);
    sVar2 = _strlen((char *)*puVar6);
    puVar6 = (undefined4 *)((int)local_8 + 4);
    local_c = local_c + -1;
    iVar5 = sVar2 + iVar5 + 2 + local_10;
  } while (local_c != 0);
  local_8 = (char *)puVar6;
  pcVar3 = __malloc_crt(iVar5 + 1);
  local_8 = pcVar3;
  if (pcVar3 != (char *)0x0) {
    puVar6 = (undefined4 *)(iVar1 + 0x68);
    local_c = 0xc;
    do {
      *pcVar3 = ':';
      pcVar3 = pcVar3 + 1;
      eVar4 = _strcpy_s(pcVar3,(rsize_t)(local_8 + iVar5 + (1 - (int)pcVar3)),(char *)puVar6[-0xc]);
      if (eVar4 != 0) {
                    /* WARNING: Subroutine does not return */
        __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      sVar2 = _strlen(pcVar3);
      pcVar3[sVar2] = ':';
      pcVar3 = pcVar3 + sVar2 + 1;
      eVar4 = _strcpy_s(pcVar3,(rsize_t)(local_8 + iVar5 + (1 - (int)pcVar3)),(char *)*puVar6);
      if (eVar4 != 0) {
                    /* WARNING: Subroutine does not return */
        __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      sVar2 = _strlen(pcVar3);
      pcVar3 = pcVar3 + sVar2;
      puVar6 = puVar6 + 1;
      local_c = local_c + -1;
    } while (local_c != 0);
    *pcVar3 = '\0';
  }
  if (local_14 != '\0') {
    *(uint *)(local_18 + 0x70) = *(uint *)(local_18 + 0x70) & 0xfffffffd;
  }
  return local_8;
}


// ==== 1072e329 __Gettnames_l

/* Library Function - Single Match
    __Gettnames_l
   
   Library: Visual Studio 2005 Release */

void * __cdecl __Gettnames_l(localeinfo_struct *param_1)

{
  void *_Src;
  undefined4 *puVar1;
  size_t sVar2;
  size_t sVar3;
  size_t sVar4;
  size_t sVar5;
  void *_Dst;
  errno_t eVar6;
  int iVar7;
  int iVar8;
  char *pcVar9;
  int local_28 [2];
  int local_20;
  char local_1c;
  size_t local_18;
  undefined4 *local_14;
  undefined4 *local_10;
  size_t local_c;
  undefined4 *local_8;
  
  iVar8 = 0;
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)local_28,param_1);
  _Src = *(void **)(local_28[0] + 0xd4);
  local_8 = (undefined4 *)0x0;
  do {
    iVar7 = (int)local_8 * 4;
    local_18 = _strlen(*(char **)(iVar7 + 0x1c + (int)_Src));
    sVar2 = _strlen(*(char **)(iVar7 + (int)_Src));
    local_8 = (undefined4 *)((int)local_8 + 1);
    iVar8 = sVar2 + iVar8 + 2 + local_18;
  } while (local_8 < 7);
  local_14 = (undefined4 *)((int)_Src + 0x38);
  local_10 = (undefined4 *)0xc;
  do {
    puVar1 = local_14;
    local_18 = _strlen((char *)local_14[0xc]);
    sVar2 = _strlen((char *)*puVar1);
    local_14 = local_14 + 1;
    local_10 = (undefined4 *)((int)local_10 + -1);
    iVar8 = sVar2 + iVar8 + 2 + local_18;
  } while (local_10 != (undefined4 *)0x0);
  sVar2 = _strlen(*(char **)((int)_Src + 0x9c));
  sVar3 = _strlen(*(char **)((int)_Src + 0x98));
  sVar4 = _strlen(*(char **)((int)_Src + 0xa0));
  sVar5 = _strlen(*(char **)((int)_Src + 0xa4));
  local_c = _strlen(*(char **)((int)_Src + 0xa8));
  local_c = sVar3 + iVar8 + sVar2 + sVar4 + sVar5 + 0xbd + local_c;
  _Dst = __malloc_crt(local_c);
  if (_Dst != (void *)0x0) {
    pcVar9 = (char *)((int)_Dst + 0xb8);
    _memcpy(_Dst,_Src,0xb8);
    local_8 = (undefined4 *)0x0;
    local_10 = (undefined4 *)((int)_Src + 0x1c);
    local_14 = (undefined4 *)((int)_Dst - (int)_Src);
    do {
      *(char **)((int)_Dst + (int)local_8 * 4) = pcVar9;
      eVar6 = _strcpy_s(pcVar9,(int)_Dst + (local_c - (int)pcVar9),(char *)local_10[-7]);
      if (eVar6 != 0) {
                    /* WARNING: Subroutine does not return */
        __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      sVar2 = _strlen(pcVar9);
      pcVar9 = pcVar9 + sVar2 + 1;
      *(char **)((int)local_14 + (int)local_10) = pcVar9;
      eVar6 = _strcpy_s(pcVar9,(int)_Dst + (local_c - (int)pcVar9),(char *)*local_10);
      if (eVar6 != 0) {
                    /* WARNING: Subroutine does not return */
        __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      sVar2 = _strlen(pcVar9);
      local_8 = (undefined4 *)((int)local_8 + 1);
      local_10 = local_10 + 1;
      pcVar9 = pcVar9 + sVar2 + 1;
    } while (local_8 < 7);
    local_8 = (undefined4 *)((int)_Dst + 0x68);
    local_10 = (undefined4 *)((int)_Src + 0x38);
    local_18 = 0xc;
    do {
      *(char **)((int)local_10 + (int)local_14) = pcVar9;
      eVar6 = _strcpy_s(pcVar9,(int)_Dst + (local_c - (int)pcVar9),(char *)*local_10);
      if (eVar6 != 0) {
                    /* WARNING: Subroutine does not return */
        __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      sVar2 = _strlen(pcVar9);
      pcVar9 = pcVar9 + sVar2 + 1;
      *local_8 = pcVar9;
      eVar6 = _strcpy_s(pcVar9,(int)_Dst + (local_c - (int)pcVar9),(char *)local_10[0xc]);
      if (eVar6 != 0) {
                    /* WARNING: Subroutine does not return */
        __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      sVar2 = _strlen(pcVar9);
      local_10 = local_10 + 1;
      local_8 = local_8 + 1;
      local_18 = local_18 + -1;
      pcVar9 = pcVar9 + sVar2 + 1;
    } while (local_18 != 0);
    *(char **)((int)_Dst + 0x98) = pcVar9;
    eVar6 = _strcpy_s(pcVar9,(int)_Dst + (local_c - (int)pcVar9),*(char **)((int)_Src + 0x98));
    if (eVar6 != 0) {
                    /* WARNING: Subroutine does not return */
      __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    sVar2 = _strlen(pcVar9);
    pcVar9 = pcVar9 + sVar2 + 1;
    *(char **)((int)_Dst + 0x9c) = pcVar9;
    eVar6 = _strcpy_s(pcVar9,(int)_Dst + (local_c - (int)pcVar9),*(char **)((int)_Src + 0x9c));
    if (eVar6 != 0) {
                    /* WARNING: Subroutine does not return */
      __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    sVar2 = _strlen(pcVar9);
    pcVar9 = pcVar9 + sVar2 + 1;
    *(char **)((int)_Dst + 0xa0) = pcVar9;
    eVar6 = _strcpy_s(pcVar9,(int)_Dst + (local_c - (int)pcVar9),*(char **)((int)_Src + 0xa0));
    if (eVar6 != 0) {
                    /* WARNING: Subroutine does not return */
      __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    sVar2 = _strlen(pcVar9);
    pcVar9 = pcVar9 + sVar2 + 1;
    *(char **)((int)_Dst + 0xa4) = pcVar9;
    eVar6 = _strcpy_s(pcVar9,(int)_Dst + (local_c - (int)pcVar9),*(char **)((int)_Src + 0xa4));
    if (eVar6 != 0) {
                    /* WARNING: Subroutine does not return */
      __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    sVar2 = _strlen(pcVar9);
    pcVar9 = pcVar9 + sVar2 + 1;
    *(char **)((int)_Dst + 0xa8) = pcVar9;
    eVar6 = _strcpy_s(pcVar9,(int)_Dst + (local_c - (int)pcVar9),*(char **)((int)_Src + 0xa8));
    if (eVar6 != 0) {
                    /* WARNING: Subroutine does not return */
      __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
  }
  if (local_1c != '\0') {
    *(uint *)(local_20 + 0x70) = *(uint *)(local_20 + 0x70) & 0xfffffffd;
  }
  return _Dst;
}


// ==== 1072e687 FUN_1072e687

void __fastcall FUN_1072e687(int *param_1,char *param_2)

{
  int iVar1;
  int *in_EAX;
  
  iVar1 = *in_EAX;
  for (; (iVar1 != 0 && (*param_2 != '\0')); param_2 = param_2 + 1) {
    *(char *)*param_1 = *param_2;
    *param_1 = *param_1 + 1;
    *in_EAX = *in_EAX + -1;
    iVar1 = *in_EAX;
  }
  return;
}


// ==== 1072e6dd FID_conflict:__store_num

/* Library Function - Multiple Matches With Different Base Names
    void __cdecl _store_num(int,int,char * *,unsigned int *,unsigned int)
    __store_num
   
   Libraries: Visual Studio 2003 Release, Visual Studio 2005 Release */

void __fastcall FID_conflict___store_num(uint *param_1,uint param_2,int param_3)

{
  char cVar1;
  uint uVar2;
  int in_EAX;
  int iVar3;
  char *pcVar4;
  char *pcVar5;
  int *unaff_EDI;
  int local_8;
  
  local_8 = 0;
  if (param_3 == 0) {
    if (param_2 < *param_1) {
      iVar3 = param_2 - 1;
      if (param_2 != 0) {
        do {
          local_8 = local_8 + 1;
          *(char *)(iVar3 + *unaff_EDI) = (char)(in_EAX % 10) + '0';
          iVar3 = iVar3 + -1;
          in_EAX = in_EAX / 10;
        } while (iVar3 != -1);
      }
      *unaff_EDI = *unaff_EDI + local_8;
      *param_1 = *param_1 - local_8;
    }
    else {
      *param_1 = 0;
    }
  }
  else {
    uVar2 = *param_1;
    pcVar5 = (char *)*unaff_EDI;
    do {
      if (uVar2 < 2) break;
      iVar3 = in_EAX / 10;
      *pcVar5 = (char)(in_EAX % 10) + '0';
      pcVar5 = pcVar5 + 1;
      *param_1 = *param_1 - 1;
      uVar2 = *param_1;
      in_EAX = iVar3;
    } while (0 < iVar3);
    pcVar4 = (char *)*unaff_EDI;
    *unaff_EDI = (int)pcVar5;
    pcVar5 = pcVar5 + -1;
    do {
      cVar1 = *pcVar5;
      *pcVar5 = *pcVar4;
      pcVar5 = pcVar5 + -1;
      *pcVar4 = cVar1;
      pcVar4 = pcVar4 + 1;
    } while (pcVar4 < pcVar5);
  }
  return;
}


// ==== 1072e756 FUN_1072e756

undefined4 __fastcall
FUN_1072e756(int *param_1,int *param_2,_locale_t param_3,uint *param_4,int param_5,int param_6)

{
  int iVar1;
  char in_AL;
  undefined4 *puVar2;
  undefined **ppuVar3;
  char *pcVar4;
  bool bVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  
  if (in_AL < 'Z') {
    if (in_AL == 'Y') {
      if ((-0x76d < param_2[5]) && (param_2[5] < 0x1fa4)) {
        uVar8 = 4;
        goto LAB_1072e9a1;
      }
LAB_1072e909:
      puVar2 = (undefined4 *)FUN_10724278();
      goto LAB_1072ea31;
    }
    if (in_AL < 'J') {
      if (in_AL == 'I') {
        if ((-1 < param_2[2]) && (param_2[2] < 0x18)) {
LAB_1072e99e:
          uVar8 = 2;
LAB_1072e9a1:
          FID_conflict___store_num(param_4,uVar8,param_6);
          return 1;
        }
      }
      else {
        if (in_AL == '\x04') {
          return 1;
        }
        if (in_AL == '\r') {
          return 1;
        }
        if (in_AL == '%') {
          *(undefined1 *)*param_1 = 0x25;
          *param_1 = *param_1 + 1;
          *param_4 = *param_4 - 1;
          return 1;
        }
        if (in_AL == 'A') {
          iVar7 = param_2[6];
          if ((-1 < iVar7) && (iVar7 < 7)) {
            pcVar4 = *(char **)(param_5 + 0x1c + iVar7 * 4);
            goto LAB_1072eb2c;
          }
        }
        else if (in_AL == 'B') {
          iVar7 = param_2[4];
          if ((-1 < iVar7) && (iVar7 < 0xc)) {
            pcVar4 = *(char **)(param_5 + 0x68 + iVar7 * 4);
            goto LAB_1072eb2c;
          }
        }
        else {
          if (in_AL != 'H') {
            return 0;
          }
          iVar1 = param_2[2];
          if (-1 < iVar1) {
            bVar6 = SBORROW4(iVar1,0x17);
            iVar7 = iVar1 + -0x17;
            bVar5 = iVar1 == 0x17;
            goto LAB_1072e7ba;
          }
        }
      }
    }
    else {
      if (in_AL == 'M') {
        iVar7 = param_2[1];
      }
      else {
        if (in_AL != 'S') {
          if (in_AL == 'U') {
            iVar7 = param_2[6];
          }
          else {
            if (in_AL != 'W') {
              if (in_AL != 'X') {
                return 0;
              }
LAB_1072e9e8:
              iVar7 = 2;
LAB_1072e9ec:
              iVar7 = FUN_1072eb3c(param_3,iVar7,(undefined2 *)param_2,param_1,param_4,param_5);
              if (iVar7 == 0) {
                return 0;
              }
              return 1;
            }
            iVar7 = param_2[6];
          }
          if ((((-1 < iVar7) && (iVar7 < 7)) && (-1 < param_2[7])) && (param_2[7] < 0x16e))
          goto LAB_1072e99e;
          goto LAB_1072ea2c;
        }
        iVar7 = *param_2;
      }
      if (-1 < iVar7) {
        bVar6 = SBORROW4(iVar7,0x3b);
        iVar7 = iVar7 + -0x3b;
        bVar5 = iVar7 == 0;
LAB_1072e7ba:
        if (bVar5 || bVar6 != iVar7 < 0) goto LAB_1072e99e;
      }
    }
  }
  else if (in_AL < 'n') {
    if (in_AL == 'm') {
      if ((-1 < param_2[4]) && (param_2[4] < 0xc)) goto LAB_1072e99e;
    }
    else {
      if (in_AL == 'Z') {
LAB_1072ea83:
        ___tzset();
        ppuVar3 = FUN_10736803();
        pcVar4 = ppuVar3[param_2[8] != 0];
LAB_1072eb2c:
        FUN_1072e687(param_1,pcVar4);
        return 1;
      }
      if (in_AL == 'a') {
        iVar7 = param_2[6];
        if ((-1 < iVar7) && (iVar7 < 7)) {
          pcVar4 = *(char **)(param_5 + iVar7 * 4);
          goto LAB_1072eb2c;
        }
      }
      else if (in_AL == 'b') {
        iVar7 = param_2[4];
        if ((-1 < iVar7) && (iVar7 < 0xc)) {
          pcVar4 = *(char **)(param_5 + 0x38 + iVar7 * 4);
          goto LAB_1072eb2c;
        }
      }
      else {
        if (in_AL == 'c') {
          iVar7 = FUN_1072eb3c(param_3,(uint)(param_6 != 0),(undefined2 *)param_2,param_1,param_4,
                               param_5);
          if (iVar7 == 0) {
            return 0;
          }
          if (*param_4 == 0) {
            return 0;
          }
          *(undefined1 *)*param_1 = 0x20;
          *param_1 = *param_1 + 1;
          *param_4 = *param_4 - 1;
          goto LAB_1072e9e8;
        }
        if (in_AL == 'd') {
          if ((param_2[3] < 1) || (0x1f < param_2[3])) goto LAB_1072e909;
          goto LAB_1072e99e;
        }
        if (in_AL != 'j') {
          return 0;
        }
        if ((-1 < param_2[7]) && (param_2[7] < 0x16e)) {
          uVar8 = 3;
          goto LAB_1072e9a1;
        }
      }
    }
  }
  else if (in_AL == 'p') {
    iVar7 = param_2[2];
    if ((-1 < iVar7) && (iVar7 < 0x18)) {
      if (iVar7 < 0xc) {
        pcVar4 = *(char **)(param_5 + 0x98);
      }
      else {
        pcVar4 = *(char **)(param_5 + 0x9c);
      }
      goto LAB_1072eb2c;
    }
  }
  else if (in_AL == 'w') {
    if ((-1 < param_2[6]) && (param_2[6] < 7)) {
      uVar8 = 1;
      goto LAB_1072e9a1;
    }
  }
  else {
    if (in_AL == 'x') {
      if (param_6 == 0) {
        iVar7 = 0;
      }
      else {
        iVar7 = 1;
      }
      goto LAB_1072e9ec;
    }
    if (in_AL != 'y') {
      if (in_AL != 'z') {
        return 0;
      }
      goto LAB_1072ea83;
    }
    if (-1 < param_2[5]) goto LAB_1072e99e;
  }
LAB_1072ea2c:
  puVar2 = (undefined4 *)FUN_10724278();
LAB_1072ea31:
  *puVar2 = 0x16;
  FUN_10723411((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  return 0;
}


// ==== 1072eb3c FUN_1072eb3c

/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */

void __cdecl
FUN_1072eb3c(_locale_t param_1,int param_2,undefined2 *param_3,int *param_4,uint *param_5,
            int param_6)

{
  code cVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined4 *puVar6;
  code *_Str1;
  code *pcVar7;
  char *pcVar8;
  char *pcVar9;
  short local_24;
  short local_22;
  undefined2 local_1e;
  undefined2 local_1c;
  undefined2 local_1a;
  undefined2 local_18;
  undefined2 local_16;
  int local_14;
  code *local_10;
  undefined4 *local_c;
  uint local_8;
  
  local_8 = DAT_10765c70 ^ (uint)&stack0xfffffffc;
  if (param_2 == 0) {
    _Str1 = *(code **)(param_6 + 0xa0);
  }
  else if (param_2 == 1) {
    _Str1 = *(code **)(param_6 + 0xa4);
  }
  else {
    _Str1 = *(code **)(param_6 + 0xa8);
  }
  if (*(int *)(param_6 + 0xb0) != 1) {
    local_10 = GetDateFormatA_exref;
    if (param_2 == 2) {
      local_10 = GetTimeFormatA_exref;
    }
    local_24 = param_3[10] + 0x76c;
    local_22 = param_3[8] + 1;
    local_1e = param_3[6];
    local_1c = param_3[4];
    local_1a = param_3[2];
    local_18 = *param_3;
    local_16 = 0;
    local_14 = (*local_10)(*(undefined4 *)(param_6 + 0xac),0,&local_24,_Str1,0,0);
    if (local_14 != 0) {
      if ((int)(local_14 + 8U) < 0x401) {
        puVar2 = (undefined4 *)&stack0xffffffd0;
        puVar6 = (undefined4 *)&stack0xffffffd0;
        if (&stack0x00000000 != (undefined1 *)0x30) {
LAB_1072ec1c:
          puVar6 = puVar2 + 2;
        }
      }
      else {
        puVar2 = _malloc(local_14 + 8U);
        puVar6 = (undefined4 *)0x0;
        if (puVar2 != (undefined4 *)0x0) {
          *puVar2 = 0xdddd;
          goto LAB_1072ec1c;
        }
      }
      local_c = puVar6;
      if (puVar6 != (undefined4 *)0x0) {
        iVar3 = (*local_10)(*(undefined4 *)(param_6 + 0xac),0,&local_24,_Str1,puVar6,local_14);
        while ((iVar3 = iVar3 + -1, 0 < iVar3 && (*param_5 != 0))) {
          local_14 = iVar3;
          *(undefined1 *)*param_4 = *(undefined1 *)puVar6;
          *param_4 = *param_4 + 1;
          puVar6 = (undefined4 *)((int)puVar6 + 1);
          *param_5 = *param_5 - 1;
        }
        __freea(local_c);
LAB_1072ec6e:
        __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
        return;
      }
    }
  }
  cVar1 = *_Str1;
joined_r0x1072ec84:
  if ((cVar1 == (code)0x0) || (*param_5 == 0)) goto LAB_1072ec6e;
  local_c = (undefined4 *)0x0;
  local_10 = _Str1;
  uVar5 = 0;
  do {
    uVar4 = uVar5;
    local_10 = local_10 + 1;
    uVar5 = uVar4 + 1;
  } while (*local_10 == cVar1);
  iVar3 = (int)(char)cVar1;
  if (iVar3 < 0x65) {
    if (iVar3 == 100) {
      if (uVar4 == 0) {
        local_c = (undefined4 *)0x1;
      }
      else {
joined_r0x1072ee07:
        if ((uVar4 != 1) && (uVar4 != 2)) {
joined_r0x1072ee0d:
          if (uVar4 != 3) goto LAB_1072ecd8;
        }
      }
      goto LAB_1072ef6f;
    }
    if (iVar3 != 0x27) {
      if (iVar3 == 0x41) {
LAB_1072ed60:
        iVar3 = ___ascii_stricmp((char *)_Str1,"am/pm");
        if (iVar3 == 0) {
          local_10 = _Str1 + 5;
        }
        else {
          iVar3 = ___ascii_stricmp((char *)_Str1,"a/p");
          if (iVar3 == 0) {
            local_10 = _Str1 + 3;
          }
        }
      }
      else if (iVar3 == 0x48) {
        if (uVar4 != 0) goto joined_r0x1072ef5f;
        local_c = (undefined4 *)0x1;
      }
      else {
        if (iVar3 != 0x4d) {
          if (iVar3 != 0x61) goto LAB_1072ecd8;
          goto LAB_1072ed60;
        }
        if (uVar4 != 0) goto joined_r0x1072ee07;
        local_c = (undefined4 *)0x1;
      }
      goto LAB_1072ef6f;
    }
    _Str1 = _Str1 + uVar5;
    if ((uVar5 & 1) != 0) {
      cVar1 = *_Str1;
      if (cVar1 == (code)0x0) goto LAB_1072ec6e;
      do {
        if (*param_5 == 0) break;
        if (cVar1 == (code)0x27) {
          _Str1 = _Str1 + 1;
          break;
        }
        iVar3 = __isleadbyte_l((int)(char)cVar1,param_1);
        pcVar7 = _Str1;
        if ((iVar3 != 0) && (1 < *param_5)) {
          pcVar7 = _Str1 + 1;
          if (*pcVar7 == (code)0x0) goto LAB_1072ec6e;
          *(code *)*param_4 = *_Str1;
          *param_4 = *param_4 + 1;
          *param_5 = *param_5 - 1;
        }
        *(code *)*param_4 = *pcVar7;
        *param_4 = *param_4 + 1;
        _Str1 = pcVar7 + 1;
        *param_5 = *param_5 - 1;
        cVar1 = *_Str1;
      } while (cVar1 != (code)0x0);
    }
  }
  else {
    if (iVar3 == 0x68) {
      if (uVar4 == 0) {
        local_c = (undefined4 *)0x1;
      }
      else {
joined_r0x1072ef5f:
        if (uVar5 != 2) {
LAB_1072ecd8:
          iVar3 = __isleadbyte_l(iVar3,param_1);
          pcVar7 = _Str1;
          if ((iVar3 != 0) && (1 < *param_5)) {
            pcVar7 = _Str1 + 1;
            if (*pcVar7 == (code)0x0) goto LAB_1072ec6e;
            *(code *)*param_4 = *_Str1;
            *param_4 = *param_4 + 1;
            *param_5 = *param_5 - 1;
          }
          *(code *)*param_4 = *pcVar7;
          *param_4 = *param_4 + 1;
          *param_5 = *param_5 - 1;
          _Str1 = pcVar7 + 1;
          goto LAB_1072ed0f;
        }
      }
    }
    else if (iVar3 == 0x6d) {
      if (uVar4 != 0) goto joined_r0x1072ef5f;
      local_c = (undefined4 *)0x1;
    }
    else if (iVar3 == 0x73) {
      if (uVar4 != 0) goto joined_r0x1072ef5f;
      local_c = (undefined4 *)0x1;
    }
    else {
      if (iVar3 == 0x74) {
        if (*(int *)(param_3 + 4) < 0xc) {
          pcVar9 = *(char **)(param_6 + 0x98);
        }
        else {
          pcVar9 = *(char **)(param_6 + 0x9c);
        }
        if ((uVar5 == 1) && (*param_5 != 0)) {
          iVar3 = __isleadbyte_l((int)*pcVar9,param_1);
          pcVar8 = pcVar9;
          if ((iVar3 != 0) && (1 < *param_5)) {
            pcVar8 = pcVar9 + 1;
            if (*pcVar8 == '\0') goto LAB_1072ec6e;
            *(char *)*param_4 = *pcVar9;
            *param_4 = *param_4 + 1;
            *param_5 = *param_5 - 1;
          }
          *(char *)*param_4 = *pcVar8;
          *param_4 = *param_4 + 1;
          *param_5 = *param_5 - 1;
          _Str1 = local_10;
          goto LAB_1072ed0f;
        }
        while ((_Str1 = local_10, *pcVar9 != '\0' && (*param_5 != 0))) {
          iVar3 = __isleadbyte_l((int)*pcVar9,param_1);
          pcVar8 = pcVar9;
          if ((iVar3 != 0) && (1 < *param_5)) {
            pcVar8 = pcVar9 + 1;
            if (*pcVar8 == '\0') goto LAB_1072ec6e;
            *(char *)*param_4 = *pcVar9;
            *param_4 = *param_4 + 1;
            *param_5 = *param_5 - 1;
          }
          *(char *)*param_4 = *pcVar8;
          *param_4 = *param_4 + 1;
          pcVar9 = pcVar8 + 1;
          *param_5 = *param_5 - 1;
        }
        goto LAB_1072ed0f;
      }
      if (iVar3 != 0x79) goto LAB_1072ecd8;
      if (uVar4 != 1) goto joined_r0x1072ee0d;
    }
LAB_1072ef6f:
    iVar3 = FUN_1072e756(param_4,(int *)param_3,param_1,param_5,param_6,(int)local_c);
    _Str1 = local_10;
    if (iVar3 == 0) goto LAB_1072ec6e;
  }
LAB_1072ed0f:
  cVar1 = *_Str1;
  goto joined_r0x1072ec84;
}


// ==== 1072ef99 __Strftime_l

/* Library Function - Single Match
    __Strftime_l
   
   Library: Visual Studio 2005 Release */

int __cdecl
__Strftime_l(char *param_1,uint param_2,char *param_3,int *param_4,int *param_5,
            localeinfo_struct *param_6)

{
  char cVar1;
  uint uVar2;
  undefined4 *puVar3;
  int iVar4;
  char *pcVar5;
  char *pcVar6;
  localeinfo_struct local_24;
  int local_1c;
  char local_18;
  char *local_14;
  int *local_10;
  int local_c;
  uint local_8;
  
  local_c = 0;
  local_14 = param_1;
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_24,param_6);
  uVar2 = param_2;
  if (param_1 == (char *)0x0) {
    puVar3 = (undefined4 *)FUN_10724278();
    *puVar3 = 0x16;
    FUN_10723411((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    if (local_18 != '\0') {
      *(uint *)(local_1c + 0x70) = *(uint *)(local_1c + 0x70) & 0xfffffffd;
    }
    return 0;
  }
  if (param_2 == 0) {
    puVar3 = (undefined4 *)FUN_10724278();
    *puVar3 = 0x16;
    FUN_10723411((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    if (local_18 != '\0') {
      *(uint *)(local_1c + 0x70) = *(uint *)(local_1c + 0x70) & 0xfffffffd;
    }
    return 0;
  }
  *param_1 = '\0';
  if (param_3 != (char *)0x0) {
    local_10 = param_5;
    if (param_5 == (int *)0x0) {
      local_10 = local_24.locinfo[1].lc_category[0].wrefcount;
    }
    local_8 = param_2;
    pcVar5 = param_3;
    if (param_2 != 0) {
      do {
        cVar1 = *pcVar5;
        if (cVar1 == '\0') break;
        if (cVar1 == '%') {
          if (param_4 == (int *)0x0) {
            puVar3 = (undefined4 *)FUN_10724278();
            *puVar3 = 0x16;
            goto LAB_1072f135;
          }
          pcVar6 = pcVar5 + 1;
          cVar1 = *pcVar6;
          if (cVar1 == '#') {
            pcVar6 = pcVar5 + 2;
          }
          iVar4 = FUN_1072e756((int *)&param_1,param_4,&local_24,&local_8,(int)local_10,
                               (uint)(cVar1 == '#'));
          if (iVar4 == 0) {
            if (local_8 != 0) {
              local_c = 1;
            }
            goto LAB_1072f0e6;
          }
        }
        else {
          iVar4 = __isleadbyte_l((int)cVar1,&local_24);
          pcVar6 = pcVar5;
          if ((iVar4 != 0) && (1 < local_8)) {
            pcVar6 = pcVar5 + 1;
            if (*pcVar6 == '\0') {
              local_c = 1;
              goto LAB_1072f0e6;
            }
            *param_1 = *pcVar5;
            param_1 = param_1 + 1;
            local_8 = local_8 - 1;
          }
          *param_1 = *pcVar6;
          param_1 = param_1 + 1;
          local_8 = local_8 - 1;
        }
        pcVar5 = pcVar6 + 1;
      } while (local_8 != 0);
      if (local_8 != 0) {
        *param_1 = '\0';
        if (local_18 == '\0') {
          return uVar2 - local_8;
        }
        *(uint *)(local_1c + 0x70) = *(uint *)(local_1c + 0x70) & 0xfffffffd;
        return uVar2 - local_8;
      }
    }
LAB_1072f0e6:
    *local_14 = '\0';
    if ((local_c == 0) && (local_8 == 0)) {
      puVar3 = (undefined4 *)FUN_10724278();
      *puVar3 = 0x22;
      goto LAB_1072f135;
    }
  }
  puVar3 = (undefined4 *)FUN_10724278();
  *puVar3 = 0x16;
  FUN_10723411((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
LAB_1072f135:
  if (local_18 != '\0') {
    *(uint *)(local_1c + 0x70) = *(uint *)(local_1c + 0x70) & 0xfffffffd;
  }
  return 0;
}


// ==== 1072f148 __strftime_l

/* Library Function - Single Match
    __strftime_l
   
   Library: Visual Studio 2005 Release */

size_t __cdecl __strftime_l(char *_Buf,size_t _Max_size,char *_Format,tm *_Tm,_locale_t _Locale)

{
  size_t sVar1;
  
  sVar1 = __Strftime_l(_Buf,_Max_size,_Format,&_Tm->tm_sec,(int *)0x0,_Locale);
  return sVar1;
}


// ==== 1072f183 __Strftime

/* Library Function - Single Match
    __Strftime
   
   Library: Visual Studio 2005 Release */

size_t __cdecl __Strftime(char *param_1,size_t _Maxsize,char *param_3,tm *param_4,void *param_5)

{
  size_t sVar1;
  
  sVar1 = __Strftime_l(param_1,_Maxsize,param_3,&param_4->tm_sec,param_5,(localeinfo_struct *)0x0);
  return sVar1;
}


// ==== 1072f1d0 _strcspn

/* Library Function - Single Match
    _strcspn
   
   Library: Visual Studio 2005 Release */

size_t __cdecl _strcspn(char *_Str,char *_Control)

{
  byte bVar1;
  size_t sVar2;
  byte abStack_28 [32];
  
  abStack_28[0x1c] = 0;
  abStack_28[0x1d] = 0;
  abStack_28[0x1e] = 0;
  abStack_28[0x1f] = 0;
  abStack_28[0x18] = 0;
  abStack_28[0x19] = 0;
  abStack_28[0x1a] = 0;
  abStack_28[0x1b] = 0;
  abStack_28[0x14] = 0;
  abStack_28[0x15] = 0;
  abStack_28[0x16] = 0;
  abStack_28[0x17] = 0;
  abStack_28[0x10] = 0;
  abStack_28[0x11] = 0;
  abStack_28[0x12] = 0;
  abStack_28[0x13] = 0;
  abStack_28[0xc] = 0;
  abStack_28[0xd] = 0;
  abStack_28[0xe] = 0;
  abStack_28[0xf] = 0;
  abStack_28[8] = 0;
  abStack_28[9] = 0;
  abStack_28[10] = 0;
  abStack_28[0xb] = 0;
  abStack_28[4] = 0;
  abStack_28[5] = 0;
  abStack_28[6] = 0;
  abStack_28[7] = 0;
  abStack_28[0] = 0;
  abStack_28[1] = 0;
  abStack_28[2] = 0;
  abStack_28[3] = 0;
  while( true ) {
    bVar1 = *_Control;
    if (bVar1 == 0) break;
    _Control = _Control + 1;
    abStack_28[(int)(uint)bVar1 >> 3] = abStack_28[(int)(uint)bVar1 >> 3] | '\x01' << (bVar1 & 7);
  }
  sVar2 = 0xffffffff;
  do {
    sVar2 = sVar2 + 1;
    bVar1 = *_Str;
    if (bVar1 == 0) {
      return sVar2;
    }
    _Str = _Str + 1;
  } while ((abStack_28[(int)(uint)bVar1 >> 3] >> (bVar1 & 7) & 1) == 0);
  return sVar2;
}


// ==== 1072f216 _TranslateName

/* Library Function - Single Match
    _TranslateName
   
   Library: Visual Studio 2005 Release */

bool __cdecl _TranslateName(int param_1,int param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  
  iVar3 = 0;
  iVar2 = 1;
  if (-1 < param_2) {
    do {
      bVar5 = iVar2 == 0;
      iVar2 = 0;
      if (bVar5) break;
      iVar4 = (param_2 + iVar3) / 2;
      puVar1 = (undefined4 *)(param_1 + iVar4 * 8);
      iVar2 = __stricmp((char *)*param_3,(char *)*puVar1);
      if (iVar2 == 0) {
        *param_3 = puVar1 + 1;
      }
      else if (iVar2 < 0) {
        param_2 = iVar4 + -1;
      }
      else {
        iVar3 = iVar4 + 1;
      }
    } while (iVar3 <= param_2);
  }
  return iVar2 == 0;
}


// ==== 1072f28a _ProcessCodePage

/* Library Function - Single Match
    _ProcessCodePage
   
   Library: Visual Studio 2005 Release */

void __fastcall _ProcessCodePage(CHAR *param_1)

{
  int iVar1;
  int unaff_EDI;
  LCTYPE LCType;
  CHAR local_10 [8];
  uint local_8;
  
  local_8 = DAT_10765c70 ^ (uint)&stack0xfffffffc;
  if ((param_1 == (CHAR *)0x0) || (*param_1 == '\0')) {
LAB_1072f2d2:
    LCType = 0x1004;
LAB_1072f2dd:
    iVar1 = GetLocaleInfoA(*(LCID *)(unaff_EDI + 0x1c),LCType,local_10,8);
    if (iVar1 == 0) goto LAB_1072f2f4;
    param_1 = local_10;
  }
  else {
    iVar1 = _strcmp(param_1,"ACP");
    if (iVar1 == 0) goto LAB_1072f2d2;
    iVar1 = _strcmp(param_1,"OCP");
    if (iVar1 == 0) {
      LCType = 0xb;
      goto LAB_1072f2dd;
    }
  }
  _atol(param_1);
LAB_1072f2f4:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


// ==== 1072f301 _TestDefaultCountry

/* Library Function - Single Match
    _TestDefaultCountry
   
   Library: Visual Studio 2005 Release */

undefined4 __cdecl _TestDefaultCountry(short param_1)

{
  uint uVar1;
  
  uVar1 = 0;
  do {
    if (param_1 == *(short *)((int)&DAT_10753d18 + uVar1)) {
      return 0;
    }
    uVar1 = uVar1 + 2;
  } while (uVar1 < 0x14);
  return 1;
}


// ==== 1072f31f _LcidFromHexString

/* Library Function - Single Match
    _LcidFromHexString
   
   Library: Visual Studio 2005 Release */

int __fastcall _LcidFromHexString(undefined4 param_1,char *param_2)

{
  char cVar1;
  int iVar2;
  
  iVar2 = 0;
  while (cVar1 = *param_2, cVar1 != '\0') {
    param_2 = param_2 + 1;
    if ((byte)(cVar1 + 0x9fU) < 6) {
      cVar1 = cVar1 + -0x27;
    }
    else if ((byte)(cVar1 + 0xbfU) < 6) {
      cVar1 = cVar1 + -7;
    }
    iVar2 = iVar2 * 0x10 + -0x30 + (int)cVar1;
  }
  return iVar2;
}


// ==== 1072f351 _GetPrimaryLen

/* Library Function - Single Match
    _GetPrimaryLen
   
   Library: Visual Studio 2005 Release */

int __fastcall _GetPrimaryLen(undefined4 param_1,char *param_2)

{
  char cVar1;
  int iVar2;
  
  iVar2 = 0;
  while( true ) {
    cVar1 = *param_2;
    param_2 = param_2 + 1;
    if (((cVar1 < 'A') || ('Z' < cVar1)) && (0x19 < (byte)(cVar1 + 0x9fU))) break;
    iVar2 = iVar2 + 1;
  }
  return iVar2;
}


// ==== 1072f36c _CountryEnumProc@4

/* Library Function - Single Match
    _CountryEnumProc@4
   
   Library: Visual Studio 2005 Release */

void _CountryEnumProc_4(char *param_1)

{
  int *piVar1;
  _ptiddata p_Var2;
  LCID Locale;
  int iVar3;
  undefined4 extraout_ECX;
  CHAR local_80 [120];
  uint local_8;
  
  local_8 = DAT_10765c70 ^ (uint)&stack0xfffffffc;
  p_Var2 = __getptd();
  Locale = _LcidFromHexString(extraout_ECX,param_1);
  iVar3 = GetLocaleInfoA(Locale,(-(uint)((p_Var2->_setloc_data).bAbbrevCountry != 0) & 0xfffff005) +
                                0x1002,local_80,0x78);
  if (iVar3 == 0) {
    (p_Var2->_setloc_data).iLocState = 0;
  }
  else {
    iVar3 = __stricmp((char *)(p_Var2->_setloc_data).pchCountry,local_80);
    if ((iVar3 == 0) && (iVar3 = _TestDefaultCountry((short)Locale), iVar3 != 0)) {
      piVar1 = &(p_Var2->_setloc_data).iLocState;
      *piVar1 = *piVar1 | 4;
      *(LCID *)(p_Var2->_setloc_data)._cachein = Locale;
      (p_Var2->_setloc_data)._cachecp = Locale;
    }
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


// ==== 1072f402 _TestDefaultLanguage

/* Library Function - Single Match
    _TestDefaultLanguage
   
   Library: Visual Studio 2005 Release */

void __thiscall _TestDefaultLanguage(void *this,uint param_1,int param_2)

{
  char *_Str;
  int iVar1;
  uint uVar2;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  CHAR local_80 [120];
  uint local_8;
  
  local_8 = DAT_10765c70 ^ (uint)&stack0xfffffffc;
  iVar1 = GetLocaleInfoA(param_1 & 0x3ff | 0x400,1,local_80,0x78);
  if (((iVar1 != 0) && (uVar2 = _LcidFromHexString(extraout_ECX,local_80), param_1 != uVar2)) &&
     (param_2 != 0)) {
    _Str = *(char **)this;
    _GetPrimaryLen(extraout_ECX_00,_Str);
    _strlen(_Str);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


// ==== 1072f474 _LangCountryEnumProc@4

/* Library Function - Single Match
    _LangCountryEnumProc@4
   
   Library: Visual Studio 2005 Release */

void _LangCountryEnumProc_4(char *param_1)

{
  int *piVar1;
  _ptiddata p_Var2;
  LCID Locale;
  int iVar3;
  size_t sVar4;
  undefined4 extraout_ECX;
  uint extraout_EDX;
  _setloc_struct *this;
  CHAR local_80 [120];
  uint local_8;
  
  local_8 = DAT_10765c70 ^ (uint)&stack0xfffffffc;
  p_Var2 = __getptd();
  this = &p_Var2->_setloc_data;
  Locale = _LcidFromHexString(extraout_ECX,param_1);
  iVar3 = GetLocaleInfoA(Locale,(-(uint)((p_Var2->_setloc_data).bAbbrevCountry != 0) & 0xfffff005) +
                                0x1002,local_80,0x78);
  if (iVar3 == 0) {
LAB_1072f4c5:
    (p_Var2->_setloc_data).iLocState = 0;
    goto LAB_1072f633;
  }
  iVar3 = __stricmp((char *)(p_Var2->_setloc_data).pchCountry,local_80);
  if (iVar3 == 0) {
    iVar3 = GetLocaleInfoA(Locale,(-(uint)((p_Var2->_setloc_data).bAbbrevLanguage != 0) & 0xfffff002
                                  ) + 0x1001,local_80,0x78);
    if (iVar3 == 0) goto LAB_1072f4c5;
    iVar3 = __stricmp((char *)this->pchLanguage,local_80);
    if (iVar3 == 0) {
      piVar1 = &(p_Var2->_setloc_data).iLocState;
      *piVar1 = *piVar1 | 0x304;
      (p_Var2->_setloc_data)._cachecp = Locale;
LAB_1072f575:
      *(LCID *)(p_Var2->_setloc_data)._cachein = Locale;
    }
    else if (((p_Var2->_setloc_data).iLocState & 2) == 0) {
      sVar4 = (p_Var2->_setloc_data).iPrimaryLen;
      if ((sVar4 == 0) || (iVar3 = __strnicmp((char *)this->pchLanguage,local_80,sVar4), iVar3 != 0)
         ) {
        if ((((p_Var2->_setloc_data).iLocState & 1U) == 0) &&
           (iVar3 = _TestDefaultCountry((short)Locale), iVar3 != 0)) {
          (p_Var2->_setloc_data).iLocState = extraout_EDX | 1;
          goto LAB_1072f575;
        }
      }
      else {
        piVar1 = &(p_Var2->_setloc_data).iLocState;
        *piVar1 = *piVar1 | 2;
        *(LCID *)(p_Var2->_setloc_data)._cachein = Locale;
        sVar4 = _strlen((char *)this->pchLanguage);
        if (sVar4 == (p_Var2->_setloc_data).iPrimaryLen) {
          (p_Var2->_setloc_data)._cachecp = Locale;
        }
      }
    }
  }
  if (((p_Var2->_setloc_data).iLocState & 0x300U) == 0x300) goto LAB_1072f633;
  iVar3 = GetLocaleInfoA(Locale,(-(uint)((p_Var2->_setloc_data).bAbbrevLanguage != 0) & 0xfffff002)
                                + 0x1001,local_80,0x78);
  if (iVar3 == 0) goto LAB_1072f4c5;
  iVar3 = __stricmp((char *)this->pchLanguage,local_80);
  if (iVar3 == 0) {
    piVar1 = &(p_Var2->_setloc_data).iLocState;
    *piVar1 = *piVar1 | 0x200;
    if ((p_Var2->_setloc_data).bAbbrevLanguage == 0) {
      if (((p_Var2->_setloc_data).iPrimaryLen != 0) &&
         (sVar4 = _strlen((char *)this->pchLanguage), sVar4 == (p_Var2->_setloc_data).iPrimaryLen))
      {
        iVar3 = 1;
        goto LAB_1072f60b;
      }
      goto LAB_1072f619;
    }
    (p_Var2->_setloc_data).iLocState = (p_Var2->_setloc_data).iLocState | 0x100;
  }
  else {
    if ((((p_Var2->_setloc_data).bAbbrevLanguage != 0) || ((p_Var2->_setloc_data).iPrimaryLen == 0))
       || (iVar3 = __stricmp((char *)this->pchLanguage,local_80), iVar3 != 0)) goto LAB_1072f633;
    iVar3 = 0;
LAB_1072f60b:
    iVar3 = _TestDefaultLanguage(this,Locale,iVar3);
    if (iVar3 == 0) goto LAB_1072f633;
LAB_1072f619:
    piVar1 = &(p_Var2->_setloc_data).iLocState;
    *piVar1 = *piVar1 | 0x100;
  }
  if ((p_Var2->_setloc_data)._cachecp == 0) {
    (p_Var2->_setloc_data)._cachecp = Locale;
  }
LAB_1072f633:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


// ==== 1072f644 _LanguageEnumProc@4

/* Library Function - Single Match
    _LanguageEnumProc@4
   
   Library: Visual Studio 2005 Release */

void _LanguageEnumProc_4(char *param_1)

{
  int *piVar1;
  _ptiddata p_Var2;
  LCID Locale;
  int iVar3;
  undefined4 extraout_ECX;
  _setloc_struct *this;
  CHAR local_80 [120];
  uint local_8;
  
  local_8 = DAT_10765c70 ^ (uint)&stack0xfffffffc;
  p_Var2 = __getptd();
  this = &p_Var2->_setloc_data;
  Locale = _LcidFromHexString(extraout_ECX,param_1);
  iVar3 = GetLocaleInfoA(Locale,(-(uint)((p_Var2->_setloc_data).bAbbrevLanguage != 0) & 0xfffff002)
                                + 0x1001,local_80,0x78);
  if (iVar3 == 0) {
    (p_Var2->_setloc_data).iLocState = 0;
    goto LAB_1072f6f3;
  }
  iVar3 = __stricmp((char *)this->pchLanguage,local_80);
  if (iVar3 == 0) {
    if ((p_Var2->_setloc_data).bAbbrevLanguage == 0) {
      iVar3 = 1;
      goto LAB_1072f6d0;
    }
  }
  else {
    if ((((p_Var2->_setloc_data).bAbbrevLanguage != 0) || ((p_Var2->_setloc_data).iPrimaryLen == 0))
       || (iVar3 = __stricmp((char *)this->pchLanguage,local_80), iVar3 != 0)) goto LAB_1072f6f3;
    iVar3 = 0;
LAB_1072f6d0:
    iVar3 = _TestDefaultLanguage(this,Locale,iVar3);
    if (iVar3 == 0) goto LAB_1072f6f3;
  }
  piVar1 = &(p_Var2->_setloc_data).iLocState;
  *piVar1 = *piVar1 | 4;
  (p_Var2->_setloc_data)._cachecp = Locale;
  *(LCID *)(p_Var2->_setloc_data)._cachein = Locale;
LAB_1072f6f3:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


// ==== 1072f72f _GetLcidFromLangCountry

/* Library Function - Single Match
    _GetLcidFromLangCountry
   
   Library: Visual Studio 2005 Release */

void _GetLcidFromLangCountry(void)

{
  uint uVar1;
  size_t sVar2;
  int iVar3;
  undefined4 *unaff_ESI;
  char *_Str;
  
  _Str = (char *)*unaff_ESI;
  sVar2 = _strlen(_Str);
  unaff_ESI[4] = (uint)(sVar2 == 3);
  sVar2 = _strlen((char *)unaff_ESI[1]);
  unaff_ESI[6] = 0;
  unaff_ESI[5] = (uint)(sVar2 == 3);
  if (unaff_ESI[4] == 0) {
    iVar3 = _GetPrimaryLen(_Str,(char *)*unaff_ESI);
  }
  else {
    iVar3 = 2;
  }
  unaff_ESI[3] = iVar3;
  EnumSystemLocalesA(_LangCountryEnumProc_4,1);
  uVar1 = unaff_ESI[2];
  if ((((uVar1 & 0x100) == 0) || ((uVar1 & 0x200) == 0)) || ((uVar1 & 7) == 0)) {
    unaff_ESI[2] = 0;
  }
  return;
}


// ==== 1072f794 _GetLcidFromLanguage

/* Library Function - Single Match
    _GetLcidFromLanguage
   
   Library: Visual Studio 2005 Release */

void _GetLcidFromLanguage(void)

{
  size_t sVar1;
  int iVar2;
  undefined4 *unaff_ESI;
  char *_Str;
  
  _Str = (char *)*unaff_ESI;
  sVar1 = _strlen(_Str);
  unaff_ESI[4] = (uint)(sVar1 == 3);
  if ((sVar1 == 3) == 0) {
    iVar2 = _GetPrimaryLen(_Str,(char *)*unaff_ESI);
  }
  else {
    iVar2 = 2;
  }
  unaff_ESI[3] = iVar2;
  EnumSystemLocalesA(_LanguageEnumProc_4,1);
  if ((*(byte *)(unaff_ESI + 2) & 4) == 0) {
    unaff_ESI[2] = 0;
  }
  return;
}


// ==== 1072f7d0 ___get_qualified_locale

/* Library Function - Single Match
    ___get_qualified_locale
   
   Library: Visual Studio 2005 Release */

BOOL __cdecl ___get_qualified_locale(LPLC_STRINGS _LpInStr,UINT *_LpCodePage,LPLC_STRINGS _LpOutStr)

{
  int *piVar1;
  wchar_t **ppwVar2;
  wchar_t *pwVar3;
  bool bVar4;
  _ptiddata p_Var5;
  undefined3 extraout_var;
  size_t sVar6;
  LCID LVar7;
  uint _Value;
  BOOL BVar8;
  errno_t eVar9;
  int iVar10;
  _setloc_struct *p_Var11;
  
  p_Var5 = __getptd();
  p_Var11 = &p_Var5->_setloc_data;
  if (_LpInStr == (LPLC_STRINGS)0x0) {
    piVar1 = &(p_Var5->_setloc_data).iLocState;
    *piVar1 = *piVar1 | 0x104;
LAB_1072f8a8:
    LVar7 = GetUserDefaultLCID();
    (p_Var5->_setloc_data)._cachecp = LVar7;
    *(LCID *)(p_Var5->_setloc_data)._cachein = LVar7;
  }
  else {
    pwVar3 = _LpInStr->szLanguage + 0x20;
    ppwVar2 = &(p_Var5->_setloc_data).pchCountry;
    p_Var11->pchLanguage = _LpInStr->szLanguage;
    *ppwVar2 = pwVar3;
    if ((pwVar3 != (wchar_t *)0x0) && ((char)*pwVar3 != '\0')) {
      _TranslateName(0x10753c60,0x16,ppwVar2);
    }
    (p_Var5->_setloc_data).iLocState = 0;
    if ((p_Var11->pchLanguage == (wchar_t *)0x0) || ((char)*p_Var11->pchLanguage == '\0')) {
      pwVar3 = *ppwVar2;
      if ((pwVar3 == (wchar_t *)0x0) || ((char)*pwVar3 == '\0')) {
        (p_Var5->_setloc_data).iLocState = 0x104;
        goto LAB_1072f8a8;
      }
      sVar6 = _strlen((char *)pwVar3);
      (p_Var5->_setloc_data).bAbbrevCountry = (uint)(sVar6 == 3);
      EnumSystemLocalesA(_CountryEnumProc_4,1);
      if (((p_Var5->_setloc_data).iLocState & 4) == 0) {
        (p_Var5->_setloc_data).iLocState = 0;
      }
    }
    else {
      if ((*ppwVar2 == (wchar_t *)0x0) || ((char)**ppwVar2 == '\0')) {
        _GetLcidFromLanguage();
      }
      else {
        _GetLcidFromLangCountry();
      }
      if ((p_Var5->_setloc_data).iLocState != 0) goto LAB_1072f8bd;
      bVar4 = _TranslateName(0x10753a58,0x40,&p_Var11->pchLanguage);
      if (CONCAT31(extraout_var,bVar4) != 0) {
        if ((*ppwVar2 == (wchar_t *)0x0) || ((char)**ppwVar2 == '\0')) {
          _GetLcidFromLanguage();
        }
        else {
          _GetLcidFromLangCountry();
        }
      }
    }
  }
  if ((p_Var5->_setloc_data).iLocState == 0) {
    return 0;
  }
LAB_1072f8bd:
  _Value = _ProcessCodePage((CHAR *)(-(uint)(_LpInStr != (LPLC_STRINGS)0x0) &
                                    (uint)_LpInStr->szCountry));
  if ((((_Value == 0) || (_Value == 65000)) || (_Value == 0xfde9)) ||
     ((BVar8 = IsValidCodePage(_Value & 0xffff), BVar8 == 0 ||
      (BVar8 = IsValidLocale((p_Var5->_setloc_data)._cachecp,1), BVar8 == 0)))) {
    return 0;
  }
  if (_LpCodePage != (UINT *)0x0) {
    *(short *)_LpCodePage = (short)(p_Var5->_setloc_data)._cachecp;
    *(wchar_t *)((int)_LpCodePage + 2) = (p_Var5->_setloc_data)._cachein[0];
    *(short *)(_LpCodePage + 1) = (short)_Value;
  }
  if (_LpOutStr != (LPLC_STRINGS)0x0) {
    if ((short)*_LpCodePage == 0x814) {
      eVar9 = _strcpy_s((char *)_LpOutStr,0x40,"Norwegian-Nynorsk");
      if (eVar9 != 0) {
                    /* WARNING: Subroutine does not return */
        __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    else {
      iVar10 = GetLocaleInfoA((p_Var5->_setloc_data)._cachecp,0x1001,(LPSTR)_LpOutStr,0x40);
      if (iVar10 == 0) {
        return 0;
      }
    }
    iVar10 = GetLocaleInfoA(*(LCID *)(p_Var5->_setloc_data)._cachein,0x1002,
                            (LPSTR)(_LpOutStr->szLanguage + 0x20),0x40);
    if (iVar10 == 0) {
      return 0;
    }
    __itoa_s(_Value,(char *)_LpOutStr->szCountry,0x10,10);
  }
  return 1;
}


// ==== 10732670 _strpbrk

/* Library Function - Single Match
    _strpbrk
   
   Library: Visual Studio */

char * __cdecl _strpbrk(char *_Str,char *_Control)

{
  byte bVar1;
  byte *pbVar2;
  byte abStack_28 [32];
  
  abStack_28[0x1c] = 0;
  abStack_28[0x1d] = 0;
  abStack_28[0x1e] = 0;
  abStack_28[0x1f] = 0;
  abStack_28[0x18] = 0;
  abStack_28[0x19] = 0;
  abStack_28[0x1a] = 0;
  abStack_28[0x1b] = 0;
  abStack_28[0x14] = 0;
  abStack_28[0x15] = 0;
  abStack_28[0x16] = 0;
  abStack_28[0x17] = 0;
  abStack_28[0x10] = 0;
  abStack_28[0x11] = 0;
  abStack_28[0x12] = 0;
  abStack_28[0x13] = 0;
  abStack_28[0xc] = 0;
  abStack_28[0xd] = 0;
  abStack_28[0xe] = 0;
  abStack_28[0xf] = 0;
  abStack_28[8] = 0;
  abStack_28[9] = 0;
  abStack_28[10] = 0;
  abStack_28[0xb] = 0;
  abStack_28[4] = 0;
  abStack_28[5] = 0;
  abStack_28[6] = 0;
  abStack_28[7] = 0;
  abStack_28[0] = 0;
  abStack_28[1] = 0;
  abStack_28[2] = 0;
  abStack_28[3] = 0;
  while( true ) {
    bVar1 = *_Control;
    if (bVar1 == 0) break;
    _Control = _Control + 1;
    abStack_28[(int)(uint)bVar1 >> 3] = abStack_28[(int)(uint)bVar1 >> 3] | '\x01' << (bVar1 & 7);
  }
  do {
    pbVar2 = (byte *)_Str;
    bVar1 = *pbVar2;
    if (bVar1 == 0) {
      return (char *)0x0;
    }
    _Str = (char *)(pbVar2 + 1);
  } while ((abStack_28[(int)(uint)bVar1 >> 3] >> (bVar1 & 7) & 1) == 0);
  return (char *)pbVar2;
}


// ==== 107326b0 FUN_107326b0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107326b0(void)

{
  _DAT_1076cde8 = 0;
  return;
}


// ==== 107326b8 __isctype_l

/* Library Function - Single Match
    __isctype_l
   
   Library: Visual Studio 2005 Release */

int __cdecl __isctype_l(int _C,int _Type,_locale_t _Locale)

{
  int iVar1;
  BOOL BVar2;
  CHAR CVar3;
  localeinfo_struct local_1c;
  int local_14;
  char local_10;
  CHAR local_c;
  CHAR local_b;
  undefined1 local_a;
  ushort local_8 [2];
  
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_1c,_Locale);
  if (_C + 1U < 0x101) {
    local_8[0] = *(ushort *)(local_1c.locinfo[1].lc_category[0].locale + _C * 2);
  }
  else {
    iVar1 = __isleadbyte_l(_C >> 8 & 0xff,&local_1c);
    CVar3 = (CHAR)_C;
    if (iVar1 == 0) {
      local_b = '\0';
      iVar1 = 1;
      local_c = CVar3;
    }
    else {
      _C._0_1_ = (CHAR)((uint)_C >> 8);
      local_c = (CHAR)_C;
      local_a = 0;
      iVar1 = 2;
      local_b = CVar3;
    }
    BVar2 = ___crtGetStringTypeA
                      (&local_1c,1,&local_c,iVar1,local_8,(local_1c.locinfo)->lc_codepage,
                       (BOOL)(local_1c.locinfo)->lc_category[0].wlocale);
    if (BVar2 == 0) {
      if (local_10 != '\0') {
        *(uint *)(local_14 + 0x70) = *(uint *)(local_14 + 0x70) & 0xfffffffd;
      }
      return 0;
    }
  }
  if (local_10 != '\0') {
    *(uint *)(local_14 + 0x70) = *(uint *)(local_14 + 0x70) & 0xfffffffd;
  }
  return (uint)local_8[0] & _Type;
}


// ==== 1073279d __isleadbyte_l

/* Library Function - Single Match
    __isleadbyte_l
   
   Library: Visual Studio 2005 Release */

int __cdecl __isleadbyte_l(int _C,_locale_t _Locale)

{
  ushort uVar1;
  int local_14 [2];
  int local_c;
  char local_8;
  
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)local_14,_Locale);
  uVar1 = *(ushort *)(*(int *)(local_14[0] + 200) + (_C & 0xffU) * 2);
  if (local_8 != '\0') {
    *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
  }
  return uVar1 & 0x8000;
}


// ==== 10732ad4 __RoundMan

/* Library Function - Single Match
    __RoundMan
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release */

int __cdecl __RoundMan(int param_1,int param_2)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  byte bVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  undefined4 *puVar9;
  int local_8;
  
  local_8 = 0;
  iVar8 = param_2 + -1;
  iVar7 = (int)(param_2 + (param_2 >> 0x1f & 0x1fU)) >> 5;
  bVar5 = 0x1f - ((byte)param_2 & 0x1f);
  if ((*(uint *)(param_1 + iVar7 * 4) & 1 << (bVar5 & 0x1f)) != 0) {
    uVar3 = *(uint *)(param_1 + iVar7 * 4) & ~(-1 << (bVar5 & 0x1f));
    iVar4 = iVar7;
    while (uVar3 == 0) {
      iVar4 = iVar4 + 1;
      if (2 < iVar4) goto LAB_10732b9c;
      uVar3 = *(uint *)(param_1 + iVar4 * 4);
    }
    iVar4 = (int)(iVar8 + (iVar8 >> 0x1f & 0x1fU)) >> 5;
    param_2 = 0;
    uVar6 = 1 << (0x1f - ((byte)iVar8 & 0x1f) & 0x1f);
    uVar2 = *(uint *)(param_1 + iVar4 * 4);
    uVar3 = uVar2 + uVar6;
    if ((uVar3 < uVar2) || (uVar3 < uVar6)) {
      param_2 = 1;
    }
    *(uint *)(param_1 + iVar4 * 4) = uVar3;
    while ((iVar4 = iVar4 + -1, local_8 = param_2, -1 < iVar4 && (param_2 != 0))) {
      uVar2 = *(uint *)(param_1 + iVar4 * 4);
      uVar3 = uVar2 + 1;
      param_2 = 0;
      if ((uVar3 < uVar2) || (uVar3 == 0)) {
        param_2 = 1;
      }
      *(uint *)(param_1 + iVar4 * 4) = uVar3;
    }
  }
LAB_10732b9c:
  puVar1 = (uint *)(param_1 + iVar7 * 4);
  *puVar1 = *puVar1 & -1 << (bVar5 & 0x1f);
  iVar7 = iVar7 + 1;
  if (iVar7 < 3) {
    puVar9 = (undefined4 *)(param_1 + iVar7 * 4);
    for (iVar8 = 3 - iVar7; iVar8 != 0; iVar8 = iVar8 + -1) {
      *puVar9 = 0;
      puVar9 = puVar9 + 1;
    }
  }
  return local_8;
}


// ==== 10732c02 __ShrMan

/* Library Function - Single Match
    __ShrMan
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release */

void __cdecl __ShrMan(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  byte bVar3;
  int iVar4;
  undefined4 *puVar5;
  uint local_c;
  
  iVar2 = (int)(param_2 + (param_2 >> 0x1f & 0x1fU)) >> 5;
  bVar3 = (byte)param_2 & 0x1f;
  local_c = 0;
  param_2 = 0;
  do {
    uVar1 = *(uint *)(param_1 + param_2 * 4);
    *(uint *)(param_1 + param_2 * 4) = *(uint *)(param_1 + param_2 * 4) >> bVar3 | local_c;
    local_c = (uVar1 & ~(-1 << bVar3)) << (0x20 - bVar3 & 0x1f);
    param_2 = param_2 + 1;
  } while (param_2 < 3);
  iVar4 = 2;
  puVar5 = (undefined4 *)(param_1 + (2 - iVar2) * 4);
  do {
    if (iVar4 < iVar2) {
      *(undefined4 *)(param_1 + iVar4 * 4) = 0;
    }
    else {
      *(undefined4 *)(param_1 + iVar4 * 4) = *puVar5;
    }
    iVar4 = iVar4 + -1;
    puVar5 = puVar5 + -1;
  } while (-1 < iVar4);
  return;
}


// ==== 10732c9a __ld12cvt

/* Library Function - Single Match
    __ld12cvt
   
   Library: Visual Studio 2005 Release */

undefined4 __cdecl __ld12cvt(ushort *param_1,uint *param_2,int *param_3)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  uint *puVar4;
  undefined4 uVar5;
  byte bVar6;
  uint *puVar7;
  uint uVar8;
  ushort *puVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  bool bVar14;
  uint local_24 [4];
  uint local_14;
  uint local_10;
  int local_c;
  ushort *local_8;
  
  local_24[3] = param_1[5] & 0x8000;
  uVar10 = *(uint *)(param_1 + 3);
  local_24[0] = uVar10;
  uVar2 = *(uint *)(param_1 + 1);
  uVar1 = *param_1;
  uVar11 = param_1[5] & 0x7fff;
  iVar12 = uVar11 - 0x3fff;
  local_24[1] = uVar2;
  local_24[2] = (uint)uVar1 << 0x10;
  if (iVar12 == -0x3fff) {
    iVar12 = 0;
    iVar3 = 0;
    do {
      if (local_24[iVar3] != 0) goto LAB_10732e0a;
      iVar3 = iVar3 + 1;
    } while (iVar3 < 3);
LAB_10733180:
    uVar5 = 0;
  }
  else {
    param_1 = (ushort *)0x0;
    uVar8 = param_3[2];
    iVar13 = uVar8 - 1;
    iVar3 = (int)(uVar8 + ((int)uVar8 >> 0x1f & 0x1fU)) >> 5;
    uVar8 = uVar8 & 0x8000001f;
    local_14 = iVar12;
    local_10 = iVar3;
    if ((int)uVar8 < 0) {
      uVar8 = (uVar8 - 1 | 0xffffffe0) + 1;
    }
    puVar4 = local_24 + iVar3;
    bVar6 = (byte)(0x1f - uVar8);
    local_c = 0x1f - uVar8;
    if ((*puVar4 & 1 << (bVar6 & 0x1f)) != 0) {
      uVar8 = local_24[iVar3] & ~(-1 << (bVar6 & 0x1f));
      while( true ) {
        if (uVar8 != 0) {
          iVar3 = (int)(iVar13 + (iVar13 >> 0x1f & 0x1fU)) >> 5;
          local_8 = (ushort *)0x0;
          puVar9 = (ushort *)(1 << (0x1f - ((byte)iVar13 & 0x1f) & 0x1f));
          puVar7 = local_24 + iVar3;
          param_1 = (ushort *)(*puVar7 + (int)puVar9);
          if (param_1 < (ushort *)*puVar7) goto LAB_10732dbf;
          bVar14 = param_1 < puVar9;
          do {
            local_8 = (ushort *)0x0;
            if (!bVar14) goto LAB_10732dc6;
LAB_10732dbf:
            do {
              local_8 = (ushort *)0x1;
LAB_10732dc6:
              iVar3 = iVar3 + -1;
              *puVar7 = (uint)param_1;
              if ((iVar3 < 0) || (local_8 == (ushort *)0x0)) {
                param_1 = local_8;
                goto LAB_10732dd4;
              }
              local_8 = (ushort *)0x0;
              puVar7 = local_24 + iVar3;
              param_1 = (ushort *)((int)*puVar7 + 1);
            } while (param_1 < (ushort *)*puVar7);
            bVar14 = param_1 == (ushort *)0x0;
          } while( true );
        }
        iVar3 = iVar3 + 1;
        if (2 < iVar3) break;
        uVar8 = local_24[iVar3];
      }
    }
LAB_10732dd4:
    *puVar4 = *puVar4 & -1 << ((byte)local_c & 0x1f);
    iVar3 = local_10 + 1;
    if (iVar3 < 3) {
      puVar4 = local_24 + iVar3;
      for (iVar13 = 3 - iVar3; iVar13 != 0; iVar13 = iVar13 + -1) {
        *puVar4 = 0;
        puVar4 = puVar4 + 1;
      }
    }
    if (param_1 != (ushort *)0x0) {
      iVar12 = uVar11 - 0x3ffe;
    }
    iVar3 = param_3[1];
    if (iVar12 < iVar3 - param_3[2]) {
LAB_10732e0a:
      local_24[0] = 0;
      local_24[1] = 0;
    }
    else {
      if (iVar3 < iVar12) {
        if (*param_3 <= iVar12) {
          local_24[1] = 0;
          local_24[2] = 0;
          local_24[0] = 0x80000000;
          uVar10 = param_3[3];
          iVar12 = (int)(uVar10 + ((int)uVar10 >> 0x1f & 0x1fU)) >> 5;
          uVar10 = uVar10 & 0x8000001f;
          if ((int)uVar10 < 0) {
            uVar10 = (uVar10 - 1 | 0xffffffe0) + 1;
          }
          local_10 = 0;
          param_1 = (ushort *)0x0;
          local_8 = (ushort *)(0x20 - uVar10);
          do {
            uVar2 = local_24[(int)param_1];
            local_14 = uVar2 & ~(-1 << ((byte)uVar10 & 0x1f));
            local_24[(int)param_1] = uVar2 >> ((byte)uVar10 & 0x1f) | local_10;
            param_1 = (ushort *)((int)param_1 + 1);
            local_10 = local_14 << ((byte)(0x20 - uVar10) & 0x1f);
          } while ((int)param_1 < 3);
          iVar3 = 2;
          puVar4 = local_24 + (2 - iVar12);
          do {
            if (iVar3 < iVar12) {
              local_24[iVar3] = 0;
            }
            else {
              local_24[iVar3] = *puVar4;
            }
            iVar3 = iVar3 + -1;
            puVar4 = puVar4 + -1;
          } while (-1 < iVar3);
          iVar12 = param_3[5] + *param_3;
          uVar5 = 1;
          goto LAB_10733182;
        }
        local_24[0] = local_24[0] & 0x7fffffff;
        uVar10 = param_3[3];
        iVar12 = param_3[5] + iVar12;
        iVar3 = (int)(uVar10 + ((int)uVar10 >> 0x1f & 0x1fU)) >> 5;
        uVar10 = uVar10 & 0x8000001f;
        if ((int)uVar10 < 0) {
          uVar10 = (uVar10 - 1 | 0xffffffe0) + 1;
        }
        local_10 = 0;
        param_1 = (ushort *)0x0;
        local_8 = (ushort *)(0x20 - uVar10);
        do {
          local_14 = local_24[(int)param_1] & ~(-1 << ((byte)uVar10 & 0x1f));
          local_24[(int)param_1] = local_24[(int)param_1] >> ((byte)uVar10 & 0x1f) | local_10;
          param_1 = (ushort *)((int)param_1 + 1);
          local_10 = local_14 << ((byte)(0x20 - uVar10) & 0x1f);
        } while ((int)param_1 < 3);
        iVar13 = 2;
        puVar4 = local_24 + (2 - iVar3);
        do {
          if (iVar13 < iVar3) {
            local_24[iVar13] = 0;
          }
          else {
            local_24[iVar13] = *puVar4;
          }
          iVar13 = iVar13 + -1;
          puVar4 = puVar4 + -1;
        } while (-1 < iVar13);
        goto LAB_10733180;
      }
      local_14 = iVar3 - local_14;
      local_24[0] = uVar10;
      local_24[1] = uVar2;
      iVar12 = (int)(local_14 + ((int)local_14 >> 0x1f & 0x1fU)) >> 5;
      uVar10 = local_14 & 0x8000001f;
      if ((int)uVar10 < 0) {
        uVar10 = (uVar10 - 1 | 0xffffffe0) + 1;
      }
      local_10 = 0;
      param_1 = (ushort *)0x0;
      local_8 = (ushort *)(0x20 - uVar10);
      do {
        uVar2 = local_24[(int)param_1];
        local_14 = uVar2 & ~(-1 << ((byte)uVar10 & 0x1f));
        local_24[(int)param_1] = uVar2 >> ((byte)uVar10 & 0x1f) | local_10;
        param_1 = (ushort *)((int)param_1 + 1);
        local_10 = local_14 << ((byte)(0x20 - uVar10) & 0x1f);
      } while ((int)param_1 < 3);
      iVar3 = 2;
      puVar4 = local_24 + (2 - iVar12);
      do {
        if (iVar3 < iVar12) {
          local_24[iVar3] = 0;
        }
        else {
          local_24[iVar3] = *puVar4;
        }
        iVar3 = iVar3 + -1;
        puVar4 = puVar4 + -1;
      } while (-1 < iVar3);
      uVar10 = param_3[2];
      iVar3 = uVar10 - 1;
      iVar12 = (int)(uVar10 + ((int)uVar10 >> 0x1f & 0x1fU)) >> 5;
      uVar10 = uVar10 & 0x8000001f;
      local_10 = iVar12;
      if ((int)uVar10 < 0) {
        uVar10 = (uVar10 - 1 | 0xffffffe0) + 1;
      }
      bVar6 = (byte)(0x1f - uVar10);
      puVar4 = local_24 + iVar12;
      local_14 = 0x1f - uVar10;
      if ((*puVar4 & 1 << (bVar6 & 0x1f)) != 0) {
        uVar10 = local_24[iVar12] & ~(-1 << (bVar6 & 0x1f));
        while (uVar10 == 0) {
          iVar12 = iVar12 + 1;
          if (2 < iVar12) goto LAB_10732f75;
          uVar10 = local_24[iVar12];
        }
        iVar12 = (int)(iVar3 + (iVar3 >> 0x1f & 0x1fU)) >> 5;
        bVar14 = false;
        uVar11 = 1 << (0x1f - ((byte)iVar3 & 0x1f) & 0x1f);
        uVar2 = local_24[iVar12];
        uVar10 = uVar2 + uVar11;
        if ((uVar10 < uVar2) || (uVar10 < uVar11)) {
          bVar14 = true;
        }
        local_24[iVar12] = uVar10;
        while ((iVar12 = iVar12 + -1, -1 < iVar12 && (bVar14))) {
          uVar2 = local_24[iVar12];
          uVar10 = uVar2 + 1;
          bVar14 = false;
          if ((uVar10 < uVar2) || (uVar10 == 0)) {
            bVar14 = true;
          }
          local_24[iVar12] = uVar10;
        }
      }
LAB_10732f75:
      *puVar4 = *puVar4 & -1 << ((byte)local_14 & 0x1f);
      iVar12 = local_10 + 1;
      if (iVar12 < 3) {
        puVar4 = local_24 + iVar12;
        for (iVar3 = 3 - iVar12; iVar3 != 0; iVar3 = iVar3 + -1) {
          *puVar4 = 0;
          puVar4 = puVar4 + 1;
        }
      }
      uVar10 = param_3[3] + 1;
      iVar12 = (int)(uVar10 + ((int)uVar10 >> 0x1f & 0x1fU)) >> 5;
      uVar10 = uVar10 & 0x8000001f;
      if ((int)uVar10 < 0) {
        uVar10 = (uVar10 - 1 | 0xffffffe0) + 1;
      }
      local_10 = 0;
      param_1 = (ushort *)0x0;
      local_8 = (ushort *)(0x20 - uVar10);
      do {
        uVar2 = local_24[(int)param_1];
        local_14 = uVar2 & ~(-1 << ((byte)uVar10 & 0x1f));
        local_24[(int)param_1] = uVar2 >> ((byte)uVar10 & 0x1f) | local_10;
        param_1 = (ushort *)((int)param_1 + 1);
        local_10 = local_14 << ((byte)(0x20 - uVar10) & 0x1f);
      } while ((int)param_1 < 3);
      iVar3 = 2;
      puVar4 = local_24 + (2 - iVar12);
      do {
        if (iVar3 < iVar12) {
          local_24[iVar3] = 0;
        }
        else {
          local_24[iVar3] = *puVar4;
        }
        iVar3 = iVar3 + -1;
        puVar4 = puVar4 + -1;
      } while (-1 < iVar3);
    }
    iVar12 = 0;
    uVar5 = 2;
  }
LAB_10733182:
  local_24[0] = iVar12 << (0x1fU - (char)param_3[3] & 0x1f) | -(uint)(local_24[3] != 0) & 0x80000000
                | local_24[0];
  if (param_3[4] == 0x40) {
    param_2[1] = local_24[0];
    *param_2 = local_24[1];
  }
  else if (param_3[4] == 0x20) {
    *param_2 = local_24[0];
  }
  return uVar5;
}


// ==== 107331c3 FID_conflict:__ld12tod

/* Library Function - Multiple Matches With Different Base Names
    __ld12tod
    __ld12tof
   
   Library: Visual Studio 2005 Release */

INTRNCVT_STATUS __cdecl FID_conflict___ld12tod(_LDBL12 *_Ifp,_CRT_DOUBLE *_D)

{
  undefined4 uVar1;
  int iVar2;
  INTRNCVT_STATUS IVar3;
  int iVar4;
  byte bVar5;
  uint *puVar6;
  uint *puVar7;
  uint uVar8;
  _LDBL12 *p_Var9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  bool bVar14;
  uint local_24 [4];
  uint local_14;
  uint local_10;
  int local_c;
  _LDBL12 *local_8;
  
  local_24[3] = *(ushort *)(_Ifp->ld12 + 10) & 0x8000;
  uVar10 = *(uint *)(_Ifp->ld12 + 6);
  local_24[0] = uVar10;
  uVar1 = *(undefined4 *)(_Ifp->ld12 + 2);
  uVar11 = *(ushort *)(_Ifp->ld12 + 10) & 0x7fff;
  iVar12 = uVar11 - 0x3fff;
  iVar2 = (uint)*(ushort *)_Ifp->ld12 << 0x10;
  local_24[1] = uVar1;
  local_24[2] = iVar2;
  if (iVar12 == -0x3fff) {
    iVar12 = 0;
    iVar2 = 0;
    do {
      if (local_24[iVar2] != 0) {
        local_24[0] = 0;
        local_24[1] = 0;
        IVar3 = INTRNCVT_UNDERFLOW;
        goto LAB_107336c2;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < 3);
    IVar3 = INTRNCVT_OK;
  }
  else {
    _Ifp = (_LDBL12 *)0x0;
    iVar13 = DAT_107668e8 - 1;
    iVar4 = (int)(DAT_107668e8 + ((int)DAT_107668e8 >> 0x1f & 0x1fU)) >> 5;
    uVar8 = DAT_107668e8 & 0x8000001f;
    local_14 = iVar12;
    local_10 = iVar4;
    if ((int)uVar8 < 0) {
      uVar8 = (uVar8 - 1 | 0xffffffe0) + 1;
    }
    puVar7 = local_24 + iVar4;
    bVar5 = (byte)(0x1f - uVar8);
    local_c = 0x1f - uVar8;
    if ((*puVar7 & 1 << (bVar5 & 0x1f)) != 0) {
      uVar8 = local_24[iVar4] & ~(-1 << (bVar5 & 0x1f));
      while( true ) {
        if (uVar8 != 0) {
          iVar4 = (int)(iVar13 + (iVar13 >> 0x1f & 0x1fU)) >> 5;
          local_8 = (_LDBL12 *)0x0;
          p_Var9 = (_LDBL12 *)(1 << (0x1f - ((byte)iVar13 & 0x1f) & 0x1f));
          puVar6 = local_24 + iVar4;
          _Ifp = (_LDBL12 *)(p_Var9->ld12 + *puVar6);
          if (_Ifp < (_LDBL12 *)*puVar6) goto LAB_107332f6;
          bVar14 = _Ifp < p_Var9;
          do {
            local_8 = (_LDBL12 *)0x0;
            if (!bVar14) goto LAB_107332fd;
LAB_107332f6:
            do {
              local_8 = (_LDBL12 *)0x1;
LAB_107332fd:
              iVar4 = iVar4 + -1;
              *puVar6 = (uint)_Ifp;
              if ((iVar4 < 0) || (local_8 == (_LDBL12 *)0x0)) {
                _Ifp = local_8;
                goto LAB_1073330b;
              }
              local_8 = (_LDBL12 *)0x0;
              puVar6 = local_24 + iVar4;
              _Ifp = (_LDBL12 *)(((_LDBL12 *)*puVar6)->ld12 + 1);
            } while (_Ifp < (_LDBL12 *)*puVar6);
            bVar14 = _Ifp == (_LDBL12 *)0x0;
          } while( true );
        }
        iVar4 = iVar4 + 1;
        if (2 < iVar4) break;
        uVar8 = local_24[iVar4];
      }
    }
LAB_1073330b:
    *puVar7 = *puVar7 & -1 << ((byte)local_c & 0x1f);
    iVar4 = local_10 + 1;
    if (iVar4 < 3) {
      puVar7 = local_24 + iVar4;
      for (iVar13 = 3 - iVar4; iVar13 != 0; iVar13 = iVar13 + -1) {
        *puVar7 = 0;
        puVar7 = puVar7 + 1;
      }
    }
    if (_Ifp != (_LDBL12 *)0x0) {
      iVar12 = uVar11 - 0x3ffe;
    }
    if (iVar12 < (int)(DAT_107668e4 - DAT_107668e8)) {
      local_24[0] = 0;
      local_24[1] = 0;
    }
    else {
      if (DAT_107668e4 < iVar12) {
        if (iVar12 < DAT_107668e0) {
          local_24[0] = local_24[0] & 0x7fffffff;
          iVar12 = iVar12 + DAT_107668f4;
          iVar2 = (int)(DAT_107668ec + ((int)DAT_107668ec >> 0x1f & 0x1fU)) >> 5;
          uVar10 = DAT_107668ec & 0x8000001f;
          if ((int)uVar10 < 0) {
            uVar10 = (uVar10 - 1 | 0xffffffe0) + 1;
          }
          local_10 = 0;
          _Ifp = (_LDBL12 *)0x0;
          local_8 = (_LDBL12 *)(0x20 - uVar10);
          do {
            local_14 = local_24[(int)_Ifp] & ~(-1 << ((byte)uVar10 & 0x1f));
            local_24[(int)_Ifp] = local_24[(int)_Ifp] >> ((byte)uVar10 & 0x1f) | local_10;
            _Ifp = (_LDBL12 *)(_Ifp->ld12 + 1);
            local_10 = local_14 << ((byte)(0x20 - uVar10) & 0x1f);
          } while ((int)_Ifp < 3);
          iVar4 = 2;
          puVar7 = local_24 + (2 - iVar2);
          do {
            if (iVar4 < iVar2) {
              local_24[iVar4] = 0;
            }
            else {
              local_24[iVar4] = *puVar7;
            }
            iVar4 = iVar4 + -1;
            puVar7 = puVar7 + -1;
          } while (-1 < iVar4);
          IVar3 = INTRNCVT_OK;
        }
        else {
          local_24[1] = 0;
          local_24[2] = 0;
          local_24[0] = 0x80000000;
          iVar12 = (int)(DAT_107668ec + ((int)DAT_107668ec >> 0x1f & 0x1fU)) >> 5;
          uVar10 = DAT_107668ec & 0x8000001f;
          if ((int)uVar10 < 0) {
            uVar10 = (uVar10 - 1 | 0xffffffe0) + 1;
          }
          local_10 = 0;
          _Ifp = (_LDBL12 *)0x0;
          local_8 = (_LDBL12 *)(0x20 - uVar10);
          do {
            uVar11 = local_24[(int)_Ifp];
            local_14 = uVar11 & ~(-1 << ((byte)uVar10 & 0x1f));
            local_24[(int)_Ifp] = uVar11 >> ((byte)uVar10 & 0x1f) | local_10;
            _Ifp = (_LDBL12 *)(_Ifp->ld12 + 1);
            local_10 = local_14 << ((byte)(0x20 - uVar10) & 0x1f);
          } while ((int)_Ifp < 3);
          iVar2 = 2;
          puVar7 = local_24 + (2 - iVar12);
          do {
            if (iVar2 < iVar12) {
              local_24[iVar2] = 0;
            }
            else {
              local_24[iVar2] = *puVar7;
            }
            iVar2 = iVar2 + -1;
            puVar7 = puVar7 + -1;
          } while (-1 < iVar2);
          iVar12 = DAT_107668f4 + DAT_107668e0;
          IVar3 = INTRNCVT_OVERFLOW;
        }
        goto LAB_107336c2;
      }
      local_14 = DAT_107668e4 - local_14;
      local_24[0] = uVar10;
      local_24[1] = uVar1;
      iVar12 = (int)(local_14 + ((int)local_14 >> 0x1f & 0x1fU)) >> 5;
      uVar10 = local_14 & 0x8000001f;
      if ((int)uVar10 < 0) {
        uVar10 = (uVar10 - 1 | 0xffffffe0) + 1;
      }
      local_10 = 0;
      _Ifp = (_LDBL12 *)0x0;
      local_8 = (_LDBL12 *)(0x20 - uVar10);
      do {
        uVar11 = local_24[(int)_Ifp];
        local_14 = uVar11 & ~(-1 << ((byte)uVar10 & 0x1f));
        local_24[(int)_Ifp] = uVar11 >> ((byte)uVar10 & 0x1f) | local_10;
        _Ifp = (_LDBL12 *)(_Ifp->ld12 + 1);
        local_10 = local_14 << ((byte)(0x20 - uVar10) & 0x1f);
      } while ((int)_Ifp < 3);
      iVar2 = 2;
      puVar7 = local_24 + (2 - iVar12);
      do {
        if (iVar2 < iVar12) {
          local_24[iVar2] = 0;
        }
        else {
          local_24[iVar2] = *puVar7;
        }
        iVar2 = iVar2 + -1;
        puVar7 = puVar7 + -1;
      } while (-1 < iVar2);
      iVar2 = DAT_107668e8 - 1;
      iVar12 = (int)(DAT_107668e8 + ((int)DAT_107668e8 >> 0x1f & 0x1fU)) >> 5;
      uVar10 = DAT_107668e8 & 0x8000001f;
      local_10 = iVar12;
      if ((int)uVar10 < 0) {
        uVar10 = (uVar10 - 1 | 0xffffffe0) + 1;
      }
      bVar5 = (byte)(0x1f - uVar10);
      puVar7 = local_24 + iVar12;
      local_14 = 0x1f - uVar10;
      if ((*puVar7 & 1 << (bVar5 & 0x1f)) != 0) {
        uVar10 = local_24[iVar12] & ~(-1 << (bVar5 & 0x1f));
        while (uVar10 == 0) {
          iVar12 = iVar12 + 1;
          if (2 < iVar12) goto LAB_107334ae;
          uVar10 = local_24[iVar12];
        }
        iVar12 = (int)(iVar2 + (iVar2 >> 0x1f & 0x1fU)) >> 5;
        bVar14 = false;
        uVar8 = 1 << (0x1f - ((byte)iVar2 & 0x1f) & 0x1f);
        uVar11 = local_24[iVar12];
        uVar10 = uVar11 + uVar8;
        if ((uVar10 < uVar11) || (uVar10 < uVar8)) {
          bVar14 = true;
        }
        local_24[iVar12] = uVar10;
        while ((iVar12 = iVar12 + -1, -1 < iVar12 && (bVar14))) {
          uVar11 = local_24[iVar12];
          uVar10 = uVar11 + 1;
          bVar14 = false;
          if ((uVar10 < uVar11) || (uVar10 == 0)) {
            bVar14 = true;
          }
          local_24[iVar12] = uVar10;
        }
      }
LAB_107334ae:
      *puVar7 = *puVar7 & -1 << ((byte)local_14 & 0x1f);
      iVar12 = local_10 + 1;
      if (iVar12 < 3) {
        puVar7 = local_24 + iVar12;
        for (iVar2 = 3 - iVar12; iVar2 != 0; iVar2 = iVar2 + -1) {
          *puVar7 = 0;
          puVar7 = puVar7 + 1;
        }
      }
      uVar10 = DAT_107668ec + 1;
      iVar12 = (int)(uVar10 + ((int)uVar10 >> 0x1f & 0x1fU)) >> 5;
      uVar10 = uVar10 & 0x8000001f;
      if ((int)uVar10 < 0) {
        uVar10 = (uVar10 - 1 | 0xffffffe0) + 1;
      }
      local_10 = 0;
      _Ifp = (_LDBL12 *)0x0;
      local_8 = (_LDBL12 *)(0x20 - uVar10);
      do {
        uVar11 = local_24[(int)_Ifp];
        local_14 = uVar11 & ~(-1 << ((byte)uVar10 & 0x1f));
        local_24[(int)_Ifp] = uVar11 >> ((byte)uVar10 & 0x1f) | local_10;
        _Ifp = (_LDBL12 *)(_Ifp->ld12 + 1);
        local_10 = local_14 << ((byte)(0x20 - uVar10) & 0x1f);
      } while ((int)_Ifp < 3);
      iVar2 = 2;
      puVar7 = local_24 + (2 - iVar12);
      do {
        if (iVar2 < iVar12) {
          local_24[iVar2] = 0;
        }
        else {
          local_24[iVar2] = *puVar7;
        }
        iVar2 = iVar2 + -1;
        puVar7 = puVar7 + -1;
      } while (-1 < iVar2);
    }
    iVar12 = 0;
    IVar3 = INTRNCVT_UNDERFLOW;
  }
LAB_107336c2:
  local_24[0] = iVar12 << (0x1fU - (char)DAT_107668ec & 0x1f) |
                -(uint)(local_24[3] != 0) & 0x80000000 | local_24[0];
  if (DAT_107668f0 == 0x40) {
    *(uint *)((int)&_D->x + 4) = local_24[0];
    *(uint *)&_D->x = local_24[1];
  }
  else if (DAT_107668f0 == 0x20) {
    *(uint *)&_D->x = local_24[0];
  }
  return IVar3;
}


// ==== 10733705 FID_conflict:__ld12tod

/* Library Function - Multiple Matches With Different Base Names
    __ld12tod
    __ld12tof
   
   Library: Visual Studio 2005 Release */

INTRNCVT_STATUS __cdecl FID_conflict___ld12tod(_LDBL12 *_Ifp,_CRT_DOUBLE *_D)

{
  undefined4 uVar1;
  int iVar2;
  INTRNCVT_STATUS IVar3;
  int iVar4;
  byte bVar5;
  uint *puVar6;
  uint *puVar7;
  uint uVar8;
  _LDBL12 *p_Var9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  bool bVar14;
  uint local_24 [4];
  uint local_14;
  uint local_10;
  int local_c;
  _LDBL12 *local_8;
  
  local_24[3] = *(ushort *)(_Ifp->ld12 + 10) & 0x8000;
  uVar10 = *(uint *)(_Ifp->ld12 + 6);
  local_24[0] = uVar10;
  uVar1 = *(undefined4 *)(_Ifp->ld12 + 2);
  uVar11 = *(ushort *)(_Ifp->ld12 + 10) & 0x7fff;
  iVar12 = uVar11 - 0x3fff;
  iVar2 = (uint)*(ushort *)_Ifp->ld12 << 0x10;
  local_24[1] = uVar1;
  local_24[2] = iVar2;
  if (iVar12 == -0x3fff) {
    iVar12 = 0;
    iVar2 = 0;
    do {
      if (local_24[iVar2] != 0) {
        local_24[0] = 0;
        local_24[1] = 0;
        IVar3 = INTRNCVT_UNDERFLOW;
        goto LAB_10733c04;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < 3);
    IVar3 = INTRNCVT_OK;
  }
  else {
    _Ifp = (_LDBL12 *)0x0;
    iVar13 = DAT_10766900 - 1;
    iVar4 = (int)(DAT_10766900 + ((int)DAT_10766900 >> 0x1f & 0x1fU)) >> 5;
    uVar8 = DAT_10766900 & 0x8000001f;
    local_14 = iVar12;
    local_10 = iVar4;
    if ((int)uVar8 < 0) {
      uVar8 = (uVar8 - 1 | 0xffffffe0) + 1;
    }
    puVar7 = local_24 + iVar4;
    bVar5 = (byte)(0x1f - uVar8);
    local_c = 0x1f - uVar8;
    if ((*puVar7 & 1 << (bVar5 & 0x1f)) != 0) {
      uVar8 = local_24[iVar4] & ~(-1 << (bVar5 & 0x1f));
      while( true ) {
        if (uVar8 != 0) {
          iVar4 = (int)(iVar13 + (iVar13 >> 0x1f & 0x1fU)) >> 5;
          local_8 = (_LDBL12 *)0x0;
          p_Var9 = (_LDBL12 *)(1 << (0x1f - ((byte)iVar13 & 0x1f) & 0x1f));
          puVar6 = local_24 + iVar4;
          _Ifp = (_LDBL12 *)(p_Var9->ld12 + *puVar6);
          if (_Ifp < (_LDBL12 *)*puVar6) goto LAB_10733838;
          bVar14 = _Ifp < p_Var9;
          do {
            local_8 = (_LDBL12 *)0x0;
            if (!bVar14) goto LAB_1073383f;
LAB_10733838:
            do {
              local_8 = (_LDBL12 *)0x1;
LAB_1073383f:
              iVar4 = iVar4 + -1;
              *puVar6 = (uint)_Ifp;
              if ((iVar4 < 0) || (local_8 == (_LDBL12 *)0x0)) {
                _Ifp = local_8;
                goto LAB_1073384d;
              }
              local_8 = (_LDBL12 *)0x0;
              puVar6 = local_24 + iVar4;
              _Ifp = (_LDBL12 *)(((_LDBL12 *)*puVar6)->ld12 + 1);
            } while (_Ifp < (_LDBL12 *)*puVar6);
            bVar14 = _Ifp == (_LDBL12 *)0x0;
          } while( true );
        }
        iVar4 = iVar4 + 1;
        if (2 < iVar4) break;
        uVar8 = local_24[iVar4];
      }
    }
LAB_1073384d:
    *puVar7 = *puVar7 & -1 << ((byte)local_c & 0x1f);
    iVar4 = local_10 + 1;
    if (iVar4 < 3) {
      puVar7 = local_24 + iVar4;
      for (iVar13 = 3 - iVar4; iVar13 != 0; iVar13 = iVar13 + -1) {
        *puVar7 = 0;
        puVar7 = puVar7 + 1;
      }
    }
    if (_Ifp != (_LDBL12 *)0x0) {
      iVar12 = uVar11 - 0x3ffe;
    }
    if (iVar12 < (int)(DAT_107668fc - DAT_10766900)) {
      local_24[0] = 0;
      local_24[1] = 0;
    }
    else {
      if (DAT_107668fc < iVar12) {
        if (iVar12 < DAT_107668f8) {
          local_24[0] = local_24[0] & 0x7fffffff;
          iVar12 = iVar12 + DAT_1076690c;
          iVar2 = (int)(DAT_10766904 + ((int)DAT_10766904 >> 0x1f & 0x1fU)) >> 5;
          uVar10 = DAT_10766904 & 0x8000001f;
          if ((int)uVar10 < 0) {
            uVar10 = (uVar10 - 1 | 0xffffffe0) + 1;
          }
          local_10 = 0;
          _Ifp = (_LDBL12 *)0x0;
          local_8 = (_LDBL12 *)(0x20 - uVar10);
          do {
            local_14 = local_24[(int)_Ifp] & ~(-1 << ((byte)uVar10 & 0x1f));
            local_24[(int)_Ifp] = local_24[(int)_Ifp] >> ((byte)uVar10 & 0x1f) | local_10;
            _Ifp = (_LDBL12 *)(_Ifp->ld12 + 1);
            local_10 = local_14 << ((byte)(0x20 - uVar10) & 0x1f);
          } while ((int)_Ifp < 3);
          iVar4 = 2;
          puVar7 = local_24 + (2 - iVar2);
          do {
            if (iVar4 < iVar2) {
              local_24[iVar4] = 0;
            }
            else {
              local_24[iVar4] = *puVar7;
            }
            iVar4 = iVar4 + -1;
            puVar7 = puVar7 + -1;
          } while (-1 < iVar4);
          IVar3 = INTRNCVT_OK;
        }
        else {
          local_24[1] = 0;
          local_24[2] = 0;
          local_24[0] = 0x80000000;
          iVar12 = (int)(DAT_10766904 + ((int)DAT_10766904 >> 0x1f & 0x1fU)) >> 5;
          uVar10 = DAT_10766904 & 0x8000001f;
          if ((int)uVar10 < 0) {
            uVar10 = (uVar10 - 1 | 0xffffffe0) + 1;
          }
          local_10 = 0;
          _Ifp = (_LDBL12 *)0x0;
          local_8 = (_LDBL12 *)(0x20 - uVar10);
          do {
            uVar11 = local_24[(int)_Ifp];
            local_14 = uVar11 & ~(-1 << ((byte)uVar10 & 0x1f));
            local_24[(int)_Ifp] = uVar11 >> ((byte)uVar10 & 0x1f) | local_10;
            _Ifp = (_LDBL12 *)(_Ifp->ld12 + 1);
            local_10 = local_14 << ((byte)(0x20 - uVar10) & 0x1f);
          } while ((int)_Ifp < 3);
          iVar2 = 2;
          puVar7 = local_24 + (2 - iVar12);
          do {
            if (iVar2 < iVar12) {
              local_24[iVar2] = 0;
            }
            else {
              local_24[iVar2] = *puVar7;
            }
            iVar2 = iVar2 + -1;
            puVar7 = puVar7 + -1;
          } while (-1 < iVar2);
          iVar12 = DAT_1076690c + DAT_107668f8;
          IVar3 = INTRNCVT_OVERFLOW;
        }
        goto LAB_10733c04;
      }
      local_14 = DAT_107668fc - local_14;
      local_24[0] = uVar10;
      local_24[1] = uVar1;
      iVar12 = (int)(local_14 + ((int)local_14 >> 0x1f & 0x1fU)) >> 5;
      uVar10 = local_14 & 0x8000001f;
      if ((int)uVar10 < 0) {
        uVar10 = (uVar10 - 1 | 0xffffffe0) + 1;
      }
      local_10 = 0;
      _Ifp = (_LDBL12 *)0x0;
      local_8 = (_LDBL12 *)(0x20 - uVar10);
      do {
        uVar11 = local_24[(int)_Ifp];
        local_14 = uVar11 & ~(-1 << ((byte)uVar10 & 0x1f));
        local_24[(int)_Ifp] = uVar11 >> ((byte)uVar10 & 0x1f) | local_10;
        _Ifp = (_LDBL12 *)(_Ifp->ld12 + 1);
        local_10 = local_14 << ((byte)(0x20 - uVar10) & 0x1f);
      } while ((int)_Ifp < 3);
      iVar2 = 2;
      puVar7 = local_24 + (2 - iVar12);
      do {
        if (iVar2 < iVar12) {
          local_24[iVar2] = 0;
        }
        else {
          local_24[iVar2] = *puVar7;
        }
        iVar2 = iVar2 + -1;
        puVar7 = puVar7 + -1;
      } while (-1 < iVar2);
      iVar2 = DAT_10766900 - 1;
      iVar12 = (int)(DAT_10766900 + ((int)DAT_10766900 >> 0x1f & 0x1fU)) >> 5;
      uVar10 = DAT_10766900 & 0x8000001f;
      local_10 = iVar12;
      if ((int)uVar10 < 0) {
        uVar10 = (uVar10 - 1 | 0xffffffe0) + 1;
      }
      bVar5 = (byte)(0x1f - uVar10);
      puVar7 = local_24 + iVar12;
      local_14 = 0x1f - uVar10;
      if ((*puVar7 & 1 << (bVar5 & 0x1f)) != 0) {
        uVar10 = local_24[iVar12] & ~(-1 << (bVar5 & 0x1f));
        while (uVar10 == 0) {
          iVar12 = iVar12 + 1;
          if (2 < iVar12) goto LAB_107339f0;
          uVar10 = local_24[iVar12];
        }
        iVar12 = (int)(iVar2 + (iVar2 >> 0x1f & 0x1fU)) >> 5;
        bVar14 = false;
        uVar8 = 1 << (0x1f - ((byte)iVar2 & 0x1f) & 0x1f);
        uVar11 = local_24[iVar12];
        uVar10 = uVar11 + uVar8;
        if ((uVar10 < uVar11) || (uVar10 < uVar8)) {
          bVar14 = true;
        }
        local_24[iVar12] = uVar10;
        while ((iVar12 = iVar12 + -1, -1 < iVar12 && (bVar14))) {
          uVar11 = local_24[iVar12];
          uVar10 = uVar11 + 1;
          bVar14 = false;
          if ((uVar10 < uVar11) || (uVar10 == 0)) {
            bVar14 = true;
          }
          local_24[iVar12] = uVar10;
        }
      }
LAB_107339f0:
      *puVar7 = *puVar7 & -1 << ((byte)local_14 & 0x1f);
      iVar12 = local_10 + 1;
      if (iVar12 < 3) {
        puVar7 = local_24 + iVar12;
        for (iVar2 = 3 - iVar12; iVar2 != 0; iVar2 = iVar2 + -1) {
          *puVar7 = 0;
          puVar7 = puVar7 + 1;
        }
      }
      uVar10 = DAT_10766904 + 1;
      iVar12 = (int)(uVar10 + ((int)uVar10 >> 0x1f & 0x1fU)) >> 5;
      uVar10 = uVar10 & 0x8000001f;
      if ((int)uVar10 < 0) {
        uVar10 = (uVar10 - 1 | 0xffffffe0) + 1;
      }
      local_10 = 0;
      _Ifp = (_LDBL12 *)0x0;
      local_8 = (_LDBL12 *)(0x20 - uVar10);
      do {
        uVar11 = local_24[(int)_Ifp];
        local_14 = uVar11 & ~(-1 << ((byte)uVar10 & 0x1f));
        local_24[(int)_Ifp] = uVar11 >> ((byte)uVar10 & 0x1f) | local_10;
        _Ifp = (_LDBL12 *)(_Ifp->ld12 + 1);
        local_10 = local_14 << ((byte)(0x20 - uVar10) & 0x1f);
      } while ((int)_Ifp < 3);
      iVar2 = 2;
      puVar7 = local_24 + (2 - iVar12);
      do {
        if (iVar2 < iVar12) {
          local_24[iVar2] = 0;
        }
        else {
          local_24[iVar2] = *puVar7;
        }
        iVar2 = iVar2 + -1;
        puVar7 = puVar7 + -1;
      } while (-1 < iVar2);
    }
    iVar12 = 0;
    IVar3 = INTRNCVT_UNDERFLOW;
  }
LAB_10733c04:
  local_24[0] = iVar12 << (0x1fU - (char)DAT_10766904 & 0x1f) |
                -(uint)(local_24[3] != 0) & 0x80000000 | local_24[0];
  if (DAT_10766908 == 0x40) {
    *(uint *)((int)&_D->x + 4) = local_24[0];
    *(uint *)&_D->x = local_24[1];
  }
  else if (DAT_10766908 == 0x20) {
    *(uint *)&_D->x = local_24[0];
  }
  return IVar3;
}


// ==== 10733c47 __ld12told

/* Library Function - Single Match
    __ld12told
   
   Library: Visual Studio 2005 Release */

INTRNCVT_STATUS __cdecl __ld12told(_LDBL12 *_Ifp,_LDOUBLE *_Ld)

{
  uint *puVar1;
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  uint uVar6;
  ushort uVar7;
  uint local_18 [3];
  INTRNCVT_STATUS local_c;
  
  uVar2 = *(ushort *)(_Ifp->ld12 + 10);
  local_18[0] = *(uint *)(_Ifp->ld12 + 6);
  uVar3 = *(uint *)(_Ifp->ld12 + 2);
  uVar7 = uVar2 & 0x7fff;
  uVar6 = uVar3;
  if (((*(ushort *)_Ifp->ld12 & 0x8000) != 0) && ((*(ushort *)_Ifp->ld12 & 0x7fff) != 0)) {
    uVar6 = uVar3 + 1;
    bVar5 = false;
    if ((uVar6 < uVar3) || (uVar6 == 0)) {
      bVar5 = true;
    }
    _Ifp = (_LDBL12 *)0x0;
    do {
      if (!bVar5) goto LAB_10733ce5;
      bVar5 = false;
      puVar1 = local_18 + (int)_Ifp;
      uVar4 = *puVar1;
      uVar3 = uVar4 + 1;
      if ((uVar3 < uVar4) || (uVar3 == 0)) {
        bVar5 = true;
      }
      _Ifp = (_LDBL12 *)(_Ifp[-1].ld12 + 0xb);
      *puVar1 = uVar3;
    } while (-1 < (int)_Ifp);
    if (bVar5) {
      local_18[0] = 0x80000000;
      uVar7 = uVar7 + 1;
    }
  }
LAB_10733ce5:
  local_c = (INTRNCVT_STATUS)(uVar7 == 0x7fff);
  *(uint *)_Ld->ld = uVar6;
  *(uint *)(_Ld->ld + 4) = local_18[0];
  *(ushort *)(_Ld->ld + 8) = uVar2 & 0x8000 | uVar7;
  return local_c;
}


// ==== 10733d64 ___ld12mul

/* Library Function - Single Match
    ___ld12mul
   
   Library: Visual Studio 2005 Release */

void __cdecl ___ld12mul(int *param_1,int *param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  ushort uVar7;
  uint uVar8;
  ushort uVar9;
  short *psVar10;
  ushort uVar11;
  ushort uVar12;
  int local_34;
  int local_30;
  ushort *local_2c;
  ushort *local_28;
  int local_24;
  int local_1c;
  uint local_18;
  byte local_14;
  undefined1 uStack_13;
  ushort uStack_12;
  short local_10;
  undefined4 uStack_e;
  ushort uStack_a;
  uint local_8;
  
  local_8 = DAT_10765c70 ^ (uint)&stack0xfffffffc;
  local_24 = 0;
  local_10 = 0;
  iVar4 = 0;
  uStack_e._0_2_ = 0;
  uStack_e._2_2_ = 0;
  iVar5 = 0;
  uStack_a = 0;
  uVar7 = *(ushort *)((int)param_1 + 10) & 0x7fff;
  uVar9 = *(ushort *)((int)param_2 + 10) & 0x7fff;
  uVar12 = uVar9 + uVar7;
  uVar11 = (*(ushort *)((int)param_2 + 10) ^ *(ushort *)((int)param_1 + 10)) & 0x8000;
  iVar2 = 0;
  iVar3 = 0;
  if (((uVar7 < 0x7fff) && (iVar2 = 0, iVar3 = 0, uVar9 < 0x7fff)) &&
     (iVar2 = iVar4, iVar3 = iVar5, uVar12 < 0xbffe)) {
    if (uVar12 < 0x3fc0) {
LAB_10733dd3:
      param_1[2] = 0;
      param_1[1] = 0;
      *param_1 = 0;
      goto LAB_10733fc9;
    }
    if (((uVar7 == 0) && (uVar12 = uVar12 + 1, (param_1[2] & 0x7fffffffU) == 0)) &&
       ((param_1[1] == 0 && (*param_1 == 0)))) {
      *(undefined2 *)((int)param_1 + 10) = 0;
      goto LAB_10733fc9;
    }
    if (((uVar9 == 0) && (uVar12 = uVar12 + 1, (param_2[2] & 0x7fffffffU) == 0)) &&
       ((param_2[1] == 0 && (*param_2 == 0)))) goto LAB_10733dd3;
    local_30 = 0;
    psVar10 = &local_10;
    local_1c = 5;
    do {
      local_34 = local_1c;
      if (0 < local_1c) {
        local_2c = (ushort *)(param_2 + 2);
        local_28 = (ushort *)(local_30 * 2 + (int)param_1);
        do {
          bVar6 = false;
          uVar1 = *(uint *)(psVar10 + -2) + (uint)*local_28 * (uint)*local_2c;
          if ((uVar1 < *(uint *)(psVar10 + -2)) || (uVar1 < (uint)*local_28 * (uint)*local_2c)) {
            bVar6 = true;
          }
          *(uint *)(psVar10 + -2) = uVar1;
          if (bVar6) {
            *psVar10 = *psVar10 + 1;
          }
          local_28 = local_28 + 1;
          local_2c = local_2c + -1;
          local_34 = local_34 + -1;
        } while (0 < local_34);
      }
      uVar1 = CONCAT22((ushort)uStack_e,local_10);
      psVar10 = psVar10 + 1;
      local_30 = local_30 + 1;
      local_1c = local_1c + -1;
    } while (0 < local_1c);
    uVar12 = uVar12 + 0xc002;
    uVar8 = uVar1;
    if ((short)uVar12 < 1) {
LAB_10733eed:
      uStack_12 = 0;
      uStack_13 = 0;
      local_14 = 0;
      uVar12 = uVar12 - 1;
      uVar8 = uVar1;
      if ((short)uVar12 < 0) {
        local_18 = (uint)(ushort)-uVar12;
        uVar12 = 0;
        do {
          if ((local_14 & 1) != 0) {
            local_24 = local_24 + 1;
          }
          iVar2 = CONCAT22(uStack_a,uStack_e._2_2_);
          uStack_e._2_2_ = (ushort)(CONCAT22(uStack_a,uStack_e._2_2_) >> 1);
          uStack_a = uStack_a >> 1;
          uStack_e._0_2_ = (ushort)(uVar1 >> 0x11) | (ushort)((uint)(iVar2 << 0x1f) >> 0x10);
          uVar8 = CONCAT22(uStack_12,CONCAT11(uStack_13,local_14)) >> 1;
          uStack_12 = uStack_12 >> 1 | (ushort)((uVar1 << 0x1f) >> 0x10);
          local_18 = local_18 - 1;
          local_10 = (short)(uVar1 >> 1);
          uVar1 = CONCAT22((ushort)uStack_e,local_10);
          local_14 = (byte)uVar8;
          uStack_13 = (undefined1)(uVar8 >> 8);
        } while (local_18 != 0);
        uVar8 = CONCAT22((ushort)uStack_e,local_10);
        if (local_24 != 0) {
          local_14 = local_14 | 1;
          uVar8 = uVar1;
        }
      }
    }
    else {
      do {
        uVar1 = uVar8;
        if ((uStack_a & 0x8000) != 0) break;
        uVar1 = uVar8 * 2;
        iVar2 = CONCAT22(uStack_a,uStack_e._2_2_) * 2;
        uStack_e._2_2_ = (ushort)iVar2 | (ushort)(uVar8 >> 0x1f);
        uVar12 = uVar12 - 1;
        uStack_a = (ushort)((uint)iVar2 >> 0x10);
        uVar8 = uVar1;
      } while (0 < (short)uVar12);
      uStack_12 = 0;
      uStack_13 = 0;
      local_14 = 0;
      uVar8 = uVar1;
      if ((short)uVar12 < 1) goto LAB_10733eed;
    }
    uStack_e._0_2_ = (ushort)(uVar8 >> 0x10);
    local_10 = (short)uVar8;
    if ((0x8000 < CONCAT11(uStack_13,local_14)) ||
       (iVar3 = CONCAT22(uStack_e._2_2_,(ushort)uStack_e), iVar2 = CONCAT22(local_10,uStack_12),
       (CONCAT22(uStack_12,CONCAT11(uStack_13,local_14)) & 0x1ffff) == 0x18000)) {
      if (CONCAT22(local_10,uStack_12) == -1) {
        iVar2 = 0;
        if (CONCAT22(uStack_e._2_2_,(ushort)uStack_e) == -1) {
          if (uStack_a == 0xffff) {
            uStack_a = 0x8000;
            uVar12 = uVar12 + 1;
            iVar3 = 0;
            iVar2 = 0;
          }
          else {
            uStack_a = uStack_a + 1;
            iVar3 = 0;
            iVar2 = 0;
          }
        }
        else {
          iVar3 = CONCAT22(uStack_e._2_2_,(ushort)uStack_e) + 1;
        }
      }
      else {
        iVar2 = CONCAT22(local_10,uStack_12) + 1;
        iVar3 = CONCAT22(uStack_e._2_2_,(ushort)uStack_e);
      }
    }
    local_10 = (short)((uint)iVar2 >> 0x10);
    uStack_12 = (ushort)iVar2;
    uStack_e._2_2_ = (ushort)((uint)iVar3 >> 0x10);
    uStack_e._0_2_ = (ushort)iVar3;
    if (uVar12 < 0x7fff) {
      *(ushort *)param_1 = uStack_12;
      *(uint *)((int)param_1 + 2) = CONCAT22((ushort)uStack_e,local_10);
      *(uint *)((int)param_1 + 6) = CONCAT22(uStack_a,uStack_e._2_2_);
      *(ushort *)((int)param_1 + 10) = uVar12 | uVar11;
      goto LAB_10733fc9;
    }
  }
  param_1[1] = 0;
  *param_1 = 0;
  param_1[2] = (-(uint)(uVar11 != 0) & 0x80000000) + 0x7fff8000;
LAB_10733fc9:
  local_10 = (short)((uint)iVar2 >> 0x10);
  uStack_e = iVar3;
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


// ==== 10733fd8 FUN_10733fd8

void __cdecl FUN_10733fd8(int *param_1,uint param_2,int param_3)

{
  int iVar1;
  int iVar2;
  ushort *puVar3;
  int iVar4;
  bool bVar5;
  ushort uVar6;
  uint uVar7;
  ushort *puVar8;
  ushort uVar9;
  uint uVar10;
  short *psVar11;
  uint uVar12;
  ushort uVar13;
  ushort *local_44;
  ushort *local_40;
  int local_3c;
  int local_34;
  int local_30;
  undefined *local_2c;
  int local_28;
  ushort local_24;
  ushort local_20;
  undefined4 uStack_1e;
  undefined2 uStack_1a;
  undefined4 local_18;
  byte local_14;
  undefined1 uStack_13;
  undefined4 uStack_12;
  undefined4 uStack_e;
  ushort uStack_a;
  uint local_8;
  
  iVar1 = CONCAT22(uStack_1e._2_2_,(undefined2)uStack_1e);
  local_8 = DAT_10765c70 ^ (uint)&stack0xfffffffc;
  local_2c = &DAT_10766960;
  if (param_2 == 0) {
LAB_107342d4:
    uStack_1e = iVar1;
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  }
  if ((int)param_2 < 0) {
    param_2 = -param_2;
    local_2c = &DAT_10766ac0;
  }
  if (param_3 == 0) {
    *(undefined2 *)param_1 = 0;
  }
joined_r0x1073401d:
  do {
    if (param_2 == 0) goto LAB_107342d4;
    local_2c = local_2c + 0x54;
    uVar12 = (int)param_2 >> 3;
    uVar7 = param_2 & 7;
    param_2 = uVar12;
    if (uVar7 != 0) {
      puVar8 = (ushort *)(local_2c + uVar7 * 0xc);
      if (0x7fff < *puVar8) {
        local_20 = (ushort)*(undefined4 *)puVar8;
        uStack_1e._0_2_ = (undefined2)((uint)*(undefined4 *)puVar8 >> 0x10);
        puVar3 = puVar8 + 4;
        uStack_1e._2_2_ = (undefined2)*(undefined4 *)(puVar8 + 2);
        uStack_1a = (undefined2)((uint)*(undefined4 *)(puVar8 + 2) >> 0x10);
        puVar8 = &local_20;
        local_18 = *(undefined4 *)puVar3;
        iVar1 = CONCAT22(uStack_1e._2_2_,(undefined2)uStack_1e) + -1;
        uStack_1e._0_2_ = (undefined2)iVar1;
        uStack_1e._2_2_ = (undefined2)((uint)iVar1 >> 0x10);
      }
      local_34 = 0;
      local_14 = 0;
      uStack_13 = 0;
      uStack_12._0_2_ = 0;
      uStack_12._2_2_ = 0;
      uStack_e._0_2_ = 0;
      uStack_e._2_2_ = 0;
      uStack_a = 0;
      uVar9 = *(ushort *)((int)param_1 + 10) & 0x7fff;
      uVar13 = puVar8[5] & 0x7fff;
      local_24 = uVar13 + uVar9;
      uVar6 = (puVar8[5] ^ *(ushort *)((int)param_1 + 10)) & 0x8000;
      if (((uVar9 < 0x7fff) && (uVar13 < 0x7fff)) && (local_24 < 0xbffe)) {
        if (0x3fbf < local_24) {
          if (((uVar9 == 0) && (local_24 = local_24 + 1, (param_1[2] & 0x7fffffffU) == 0)) &&
             ((param_1[1] == 0 && (*param_1 == 0)))) {
            *(undefined2 *)((int)param_1 + 10) = 0;
            uStack_12 = 0;
            uStack_e = 0;
            goto joined_r0x1073401d;
          }
          if (((uVar13 != 0) || (local_24 = local_24 + 1, (*(uint *)(puVar8 + 4) & 0x7fffffff) != 0)
              ) || ((*(int *)(puVar8 + 2) != 0 || (*(int *)puVar8 != 0)))) {
            local_3c = 0;
            psVar11 = (short *)((int)&uStack_12 + 2);
            local_28 = 5;
            do {
              local_30 = local_28;
              if (0 < local_28) {
                local_44 = puVar8 + 4;
                local_40 = (ushort *)(local_3c * 2 + (int)param_1);
                do {
                  bVar5 = false;
                  uVar12 = *(uint *)(psVar11 + -2) + (uint)*local_40 * (uint)*local_44;
                  if ((uVar12 < *(uint *)(psVar11 + -2)) ||
                     (uVar12 < (uint)*local_40 * (uint)*local_44)) {
                    bVar5 = true;
                  }
                  *(uint *)(psVar11 + -2) = uVar12;
                  if (bVar5) {
                    *psVar11 = *psVar11 + 1;
                  }
                  local_40 = local_40 + 1;
                  local_44 = local_44 + -1;
                  local_30 = local_30 + -1;
                } while (0 < local_30);
              }
              psVar11 = psVar11 + 1;
              local_3c = local_3c + 1;
              local_28 = local_28 + -1;
            } while (0 < local_28);
            local_24 = local_24 + 0xc002;
            if ((short)local_24 < 1) {
LAB_107341ca:
              local_24 = local_24 - 1;
              if ((short)local_24 < 0) {
                uVar12 = (uint)(ushort)-local_24;
                local_24 = 0;
                do {
                  if ((local_14 & 1) != 0) {
                    local_34 = local_34 + 1;
                  }
                  iVar2 = CONCAT22(uStack_a,uStack_e._2_2_);
                  uVar7 = CONCAT22((ushort)uStack_e,uStack_12._2_2_);
                  iVar4 = CONCAT22((ushort)uStack_e,uStack_12._2_2_);
                  uStack_e._2_2_ = (ushort)(CONCAT22(uStack_a,uStack_e._2_2_) >> 1);
                  uStack_a = uStack_a >> 1;
                  uStack_e._0_2_ = (ushort)uStack_e >> 1 | (ushort)((uint)(iVar2 << 0x1f) >> 0x10);
                  uVar10 = CONCAT22((ushort)uStack_12,CONCAT11(uStack_13,local_14)) >> 1;
                  uStack_12._0_2_ = (ushort)uStack_12 >> 1 | (ushort)((uint)(iVar4 << 0x1f) >> 0x10)
                  ;
                  uVar12 = uVar12 - 1;
                  uStack_12._2_2_ = (ushort)(uVar7 >> 1);
                  local_14 = (byte)uVar10;
                  uStack_13 = (undefined1)(uVar10 >> 8);
                } while (uVar12 != 0);
                if (local_34 != 0) {
                  local_14 = local_14 | 1;
                }
              }
            }
            else {
              do {
                uVar9 = (ushort)uStack_12;
                if ((uStack_a & 0x8000) != 0) break;
                local_24 = local_24 - 1;
                iVar4 = CONCAT22((ushort)uStack_12,CONCAT11(uStack_13,local_14)) << 1;
                local_14 = (byte)iVar4;
                uStack_13 = (undefined1)((uint)iVar4 >> 8);
                uStack_12._0_2_ = (ushort)((uint)iVar4 >> 0x10);
                iVar4 = CONCAT22((ushort)uStack_e,uStack_12._2_2_) * 2;
                uStack_12._2_2_ = (ushort)iVar4 | uVar9 >> 0xf;
                iVar2 = CONCAT22(uStack_a,uStack_e._2_2_) * 2;
                uStack_e._2_2_ = (ushort)iVar2 | (ushort)uStack_e >> 0xf;
                uStack_e._0_2_ = (ushort)((uint)iVar4 >> 0x10);
                uStack_a = (ushort)((uint)iVar2 >> 0x10);
              } while (0 < (short)local_24);
              if ((short)local_24 < 1) goto LAB_107341ca;
            }
            if ((0x8000 < CONCAT11(uStack_13,local_14)) ||
               (iVar4 = CONCAT22(uStack_e._2_2_,(ushort)uStack_e),
               iVar2 = CONCAT22(uStack_12._2_2_,(ushort)uStack_12),
               (CONCAT22((ushort)uStack_12,CONCAT11(uStack_13,local_14)) & 0x1ffff) == 0x18000)) {
              if (CONCAT22(uStack_12._2_2_,(ushort)uStack_12) == -1) {
                uStack_12._0_2_ = 0;
                uStack_12._2_2_ = 0;
                iVar2 = 0;
                if (CONCAT22(uStack_e._2_2_,(ushort)uStack_e) == -1) {
                  uStack_e._0_2_ = 0;
                  uStack_e._2_2_ = 0;
                  if (uStack_a == 0xffff) {
                    local_24 = local_24 + 1;
                    uStack_a = 0x8000;
                    iVar4 = 0;
                    iVar2 = 0;
                  }
                  else {
                    uStack_a = uStack_a + 1;
                    iVar4 = 0;
                    iVar2 = 0;
                  }
                }
                else {
                  iVar4 = CONCAT22(uStack_e._2_2_,(ushort)uStack_e) + 1;
                  uStack_e._0_2_ = (ushort)iVar4;
                  uStack_e._2_2_ = (ushort)((uint)iVar4 >> 0x10);
                }
              }
              else {
                iVar2 = CONCAT22(uStack_12._2_2_,(ushort)uStack_12) + 1;
                uStack_12._0_2_ = (ushort)iVar2;
                uStack_12._2_2_ = (ushort)((uint)iVar2 >> 0x10);
                iVar4 = CONCAT22(uStack_e._2_2_,(ushort)uStack_e);
              }
            }
            uStack_12._2_2_ = (ushort)((uint)iVar2 >> 0x10);
            uStack_12._0_2_ = (ushort)iVar2;
            uStack_e._2_2_ = (ushort)((uint)iVar4 >> 0x10);
            uStack_e._0_2_ = (ushort)iVar4;
            uStack_12 = iVar2;
            uStack_e = iVar4;
            if (local_24 < 0x7fff) {
              *(ushort *)param_1 = (ushort)uStack_12;
              *(uint *)((int)param_1 + 2) = CONCAT22((ushort)uStack_e,uStack_12._2_2_);
              *(uint *)((int)param_1 + 6) = CONCAT22(uStack_a,uStack_e._2_2_);
              *(ushort *)((int)param_1 + 10) = local_24 | uVar6;
            }
            else {
              param_1[1] = 0;
              *param_1 = 0;
              param_1[2] = (-(uint)(uVar6 != 0) & 0x80000000) + 0x7fff8000;
            }
            goto joined_r0x1073401d;
          }
        }
        param_1[2] = 0;
      }
      else {
        param_1[2] = (-(uint)(uVar6 != 0) & 0x80000000) + 0x7fff8000;
      }
      param_1[1] = 0;
      *param_1 = 0;
      uStack_12 = 0;
      uStack_e = 0;
    }
  } while( true );
}


// ==== 107342e1 FUN_107342e1

void __cdecl
FUN_107342e1(undefined2 *param_1,int *param_2,char *param_3,int param_4,int param_5,int param_6,
            int param_7,int *param_8)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  ushort uVar7;
  char cVar8;
  ushort uVar9;
  undefined4 *puVar10;
  uint uVar11;
  ushort *puVar12;
  int iVar13;
  ushort uVar14;
  int iVar15;
  uint uVar16;
  ushort uVar17;
  char *pcVar18;
  undefined4 uVar19;
  undefined *puVar20;
  short *psVar21;
  uint uVar22;
  undefined4 uVar23;
  ushort uVar24;
  char *pcVar25;
  int local_6c;
  int local_68;
  ushort *local_64;
  ushort *local_60;
  int local_5c;
  char *local_58;
  int local_54;
  uint local_50;
  ushort local_4c;
  undefined4 uStack_4a;
  undefined2 uStack_46;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  ushort uStack_38;
  ushort local_36;
  byte local_30;
  undefined1 uStack_2f;
  undefined4 uStack_2e;
  undefined4 uStack_2a;
  ushort uStack_26;
  char local_24 [23];
  char local_d;
  uint local_8;
  
  local_8 = DAT_10765c70 ^ (uint)&stack0xfffffffc;
  iVar15 = 0;
  pcVar25 = local_24;
  uVar7 = 0;
  local_6c = 1;
  local_50 = 0;
  bVar4 = false;
  bVar6 = false;
  bVar5 = false;
  local_68 = 0;
  local_54 = 0;
  if (param_8 != (int *)0x0) {
    local_58 = param_3;
    for (; (((cVar8 = *param_3, cVar8 == ' ' || (cVar8 == '\t')) || (cVar8 == '\n')) ||
           (cVar8 == '\r')); param_3 = param_3 + 1) {
    }
LAB_10734366:
    cVar8 = *param_3;
    pcVar18 = param_3 + 1;
    switch(iVar15) {
    case 0:
      if ((byte)(cVar8 - 0x31U) < 9) {
LAB_10734383:
        iVar15 = 3;
        goto LAB_10734385;
      }
      if (cVar8 == *(char *)**(undefined4 **)(*param_8 + 0xbc)) {
LAB_1073439a:
        iVar15 = 5;
        param_3 = pcVar18;
      }
      else if (cVar8 == '+') {
        uVar7 = 0;
        iVar15 = 2;
        param_3 = pcVar18;
      }
      else {
        if (cVar8 != '-') {
          if (cVar8 == '0') goto LAB_107343b4;
          goto LAB_1073453f;
        }
        iVar15 = 2;
        uVar7 = 0x8000;
        param_3 = pcVar18;
      }
      goto LAB_10734366;
    case 1:
      bVar4 = true;
      if ((byte)(cVar8 - 0x31U) < 9) goto LAB_10734383;
      if (cVar8 == *(char *)**(undefined4 **)(*param_8 + 0xbc)) goto LAB_107343eb;
      if ((cVar8 == '+') || (cVar8 == '-')) goto LAB_1073441b;
      if (cVar8 == '0') goto LAB_107343b4;
      goto LAB_107343fb;
    case 2:
      if ((byte)(cVar8 - 0x31U) < 9) goto LAB_10734383;
      if (cVar8 == *(char *)**(undefined4 **)(*param_8 + 0xbc)) goto LAB_1073439a;
      param_3 = local_58;
      if (cVar8 != '0') goto LAB_1073456a;
LAB_107343b4:
      iVar15 = 1;
      param_3 = pcVar18;
      goto LAB_10734366;
    case 3:
      while (('/' < cVar8 && (cVar8 < ':'))) {
        if (local_50 < 0x19) {
          local_50 = local_50 + 1;
          *pcVar25 = cVar8 + -0x30;
          pcVar25 = pcVar25 + 1;
        }
        else {
          local_54 = local_54 + 1;
        }
        cVar8 = *pcVar18;
        pcVar18 = pcVar18 + 1;
      }
      if (cVar8 != *(char *)**(undefined4 **)(*param_8 + 0xbc)) goto LAB_1073448e;
LAB_107343eb:
      bVar4 = true;
      iVar15 = 4;
      param_3 = pcVar18;
      goto LAB_10734366;
    case 4:
      bVar6 = true;
      if (local_50 == 0) {
        while (cVar8 == '0') {
          local_54 = local_54 + -1;
          cVar8 = *pcVar18;
          pcVar18 = pcVar18 + 1;
        }
      }
      while (('/' < cVar8 && (cVar8 < ':'))) {
        if (local_50 < 0x19) {
          local_50 = local_50 + 1;
          *pcVar25 = cVar8 + -0x30;
          pcVar25 = pcVar25 + 1;
          local_54 = local_54 + -1;
        }
        cVar8 = *pcVar18;
        pcVar18 = pcVar18 + 1;
      }
LAB_1073448e:
      if ((cVar8 == '+') || (cVar8 == '-')) {
LAB_1073441b:
        bVar4 = true;
        iVar15 = 0xb;
        param_3 = pcVar18 + -1;
      }
      else {
LAB_107343fb:
        bVar4 = true;
        if ((cVar8 < 'D') || (('E' < cVar8 && ((cVar8 < 'd' || ('e' < cVar8)))))) goto LAB_1073453f;
        iVar15 = 6;
        param_3 = pcVar18;
      }
      goto LAB_10734366;
    case 5:
      bVar6 = true;
      param_3 = local_58;
      if ((byte)(cVar8 - 0x30U) < 10) {
        iVar15 = 4;
        goto LAB_10734385;
      }
      goto LAB_1073456a;
    case 6:
      local_58 = param_3 + -1;
      if (8 < (byte)(cVar8 - 0x31U)) {
        if (cVar8 == '+') goto LAB_10734526;
        if (cVar8 == '-') goto LAB_1073451a;
LAB_1073450d:
        param_3 = local_58;
        if (cVar8 != '0') goto LAB_1073456a;
        iVar15 = 8;
        param_3 = pcVar18;
        goto LAB_10734366;
      }
      break;
    case 7:
      if (8 < (byte)(cVar8 - 0x31U)) goto LAB_1073450d;
      break;
    case 8:
      bVar5 = true;
      while (cVar8 == '0') {
        cVar8 = *pcVar18;
        pcVar18 = pcVar18 + 1;
      }
      if (8 < (byte)(cVar8 - 0x31U)) goto LAB_1073453f;
      break;
    case 9:
      bVar5 = true;
      local_68 = 0;
      goto LAB_107345cc;
    default:
      goto switchD_10734372_caseD_a;
    case 0xb:
      if (param_7 != 0) {
        local_58 = param_3;
        if (cVar8 == '+') {
LAB_10734526:
          iVar15 = 7;
          param_3 = pcVar18;
        }
        else {
          if (cVar8 != '-') goto LAB_1073456a;
LAB_1073451a:
          local_6c = -1;
          iVar15 = 7;
          param_3 = pcVar18;
        }
        goto LAB_10734366;
      }
      iVar15 = 10;
      pcVar18 = param_3;
switchD_10734372_caseD_a:
      param_3 = pcVar18;
      if (iVar15 != 10) goto LAB_10734366;
      goto LAB_1073456a;
    }
    iVar15 = 9;
LAB_10734385:
    param_3 = pcVar18 + -1;
    goto LAB_10734366;
  }
  puVar10 = (undefined4 *)FUN_10724278();
  *puVar10 = 0x16;
  FUN_10723411((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  uVar2 = CONCAT22(local_40._2_2_,(undefined2)local_40);
  goto LAB_10734962;
LAB_107345cc:
  if ((cVar8 < '0') || ('9' < cVar8)) goto LAB_107345e7;
  local_68 = local_68 * 10 + -0x30 + (int)cVar8;
  if (local_68 < 0x1451) {
    cVar8 = *pcVar18;
    pcVar18 = pcVar18 + 1;
    goto LAB_107345cc;
  }
  local_68 = 0x1451;
LAB_107345e7:
  while (('/' < cVar8 && (cVar8 < ':'))) {
    cVar8 = *pcVar18;
    pcVar18 = pcVar18 + 1;
  }
LAB_1073453f:
  param_3 = pcVar18 + -1;
LAB_1073456a:
  *param_2 = (int)param_3;
  if (bVar4) {
    if (0x18 < local_50) {
      if ('\x04' < local_d) {
        local_d = local_d + '\x01';
      }
      pcVar25 = pcVar25 + -1;
      local_54 = local_54 + 1;
      local_50 = 0x18;
    }
    if (local_50 == 0) goto LAB_10734944;
    while (pcVar25 = pcVar25 + -1, *pcVar25 == '\0') {
      local_50 = local_50 - 1;
      local_54 = local_54 + 1;
    }
    ___mtold12(local_24,local_50,&local_40);
    iVar13 = CONCAT22(local_3c._2_2_,(undefined2)local_3c);
    uVar2 = CONCAT22(local_40._2_2_,(undefined2)local_40);
    iVar1 = CONCAT22(uStack_2a._2_2_,(ushort)uStack_2a);
    uVar22 = CONCAT22(uStack_2e._2_2_,(ushort)uStack_2e);
    iVar15 = CONCAT22(uStack_4a._2_2_,(undefined2)uStack_4a);
    if (local_6c < 0) {
      local_68 = -local_68;
    }
    local_58 = (char *)(local_68 + local_54);
    if (!bVar5) {
      local_58 = (char *)((int)local_58 + param_5);
    }
    if (!bVar6) {
      local_58 = (char *)((int)local_58 - param_6);
    }
    if ((int)local_58 < 0x1451) {
      if ((int)local_58 < -0x1450) goto LAB_10734944;
      puVar20 = &DAT_10766960;
      if (local_58 != (char *)0x0) {
        if ((int)local_58 < 0) {
          local_58 = (char *)-(int)local_58;
          puVar20 = &DAT_10766ac0;
        }
        if (param_4 == 0) {
          local_40._0_2_ = 0;
        }
        iVar15 = uStack_4a;
        uVar22 = uStack_2e;
        iVar1 = uStack_2a;
        uVar2 = CONCAT22(local_40._2_2_,(undefined2)local_40);
        iVar13 = local_3c;
joined_r0x10734672:
        if (local_58 != (char *)0x0) {
          uVar16 = (int)local_58 >> 3;
          puVar20 = puVar20 + 0x54;
          uVar11 = (uint)local_58 & 7;
          local_58 = (char *)uVar16;
          if (uVar11 != 0) {
            puVar12 = (ushort *)(puVar20 + uVar11 * 0xc);
            if (0x7fff < *puVar12) {
              local_4c = (ushort)*(undefined4 *)puVar12;
              uStack_4a._0_2_ = (undefined2)((uint)*(undefined4 *)puVar12 >> 0x10);
              uStack_4a._2_2_ = (undefined2)*(undefined4 *)(puVar12 + 2);
              uStack_46 = (undefined2)((uint)*(undefined4 *)(puVar12 + 2) >> 0x10);
              local_44 = *(undefined4 *)(puVar12 + 4);
              iVar15 = CONCAT22(uStack_4a._2_2_,(undefined2)uStack_4a) + -1;
              uStack_4a._0_2_ = (undefined2)iVar15;
              uStack_4a._2_2_ = (undefined2)((uint)iVar15 >> 0x10);
              puVar12 = &local_4c;
            }
            local_54 = 0;
            local_30 = 0;
            uStack_2f = 0;
            uStack_2e._0_2_ = 0;
            uStack_2e._2_2_ = 0;
            uVar16 = 0;
            uStack_2a._0_2_ = 0;
            uStack_2a._2_2_ = 0;
            iVar3 = 0;
            uStack_26 = 0;
            uVar14 = local_36 & 0x7fff;
            uVar17 = puVar12[5] & 0x7fff;
            uVar9 = (puVar12[5] ^ local_36) & 0x8000;
            uVar24 = uVar17 + uVar14;
            uVar22 = 0;
            iVar1 = 0;
            if (((uVar14 < 0x7fff) && (uVar22 = 0, iVar1 = 0, uVar17 < 0x7fff)) &&
               (uVar22 = uVar16, iVar1 = iVar3, uVar24 < 0xbffe)) {
              if (0x3fbf < uVar24) {
                if (((uVar14 == 0) &&
                    (uVar24 = uVar24 + 1, (CONCAT22(local_36,uStack_38) & 0x7fffffff) == 0)) &&
                   ((iVar13 == 0 && (uVar2 == 0)))) {
                  local_36 = 0;
                }
                else if (((uVar17 == 0) &&
                         (uVar24 = uVar24 + 1, (*(uint *)(puVar12 + 4) & 0x7fffffff) == 0)) &&
                        ((*(int *)(puVar12 + 2) == 0 && (*(int *)puVar12 == 0)))) {
                  uStack_38 = 0;
                  local_36 = 0;
                  local_3c._0_2_ = 0;
                  local_3c._2_2_ = 0;
                  local_40._0_2_ = 0;
                  local_40._2_2_ = 0;
                  uVar2 = 0;
                  iVar13 = 0;
                }
                else {
                  local_6c = 0;
                  psVar21 = (short *)((int)&uStack_2e + 2);
                  local_5c = 5;
                  do {
                    local_68 = local_5c;
                    if (0 < local_5c) {
                      local_60 = (ushort *)((int)&local_40 + local_6c * 2);
                      local_64 = puVar12 + 4;
                      do {
                        bVar4 = false;
                        uVar22 = *(uint *)(psVar21 + -2) + (uint)*local_64 * (uint)*local_60;
                        if ((uVar22 < *(uint *)(psVar21 + -2)) ||
                           (uVar22 < (uint)*local_64 * (uint)*local_60)) {
                          bVar4 = true;
                        }
                        *(uint *)(psVar21 + -2) = uVar22;
                        if (bVar4) {
                          *psVar21 = *psVar21 + 1;
                        }
                        local_60 = local_60 + 1;
                        local_64 = local_64 + -1;
                        local_68 = local_68 + -1;
                      } while (0 < local_68);
                    }
                    psVar21 = psVar21 + 1;
                    local_6c = local_6c + 1;
                    local_5c = local_5c + -1;
                  } while (0 < local_5c);
                  uVar24 = uVar24 + 0xc002;
                  if ((short)uVar24 < 1) {
LAB_10734828:
                    uVar24 = uVar24 - 1;
                    if ((short)uVar24 < 0) {
                      uVar22 = (uint)(ushort)-uVar24;
                      uVar24 = 0;
                      do {
                        if ((local_30 & 1) != 0) {
                          local_54 = local_54 + 1;
                        }
                        iVar13 = CONCAT22(uStack_26,uStack_2a._2_2_);
                        uVar2 = CONCAT22((ushort)uStack_2a,uStack_2e._2_2_);
                        iVar1 = CONCAT22((ushort)uStack_2a,uStack_2e._2_2_);
                        uStack_2a._2_2_ = (ushort)(CONCAT22(uStack_26,uStack_2a._2_2_) >> 1);
                        uStack_26 = uStack_26 >> 1;
                        uStack_2a._0_2_ =
                             (ushort)uStack_2a >> 1 | (ushort)((uint)(iVar13 << 0x1f) >> 0x10);
                        uVar16 = CONCAT22((ushort)uStack_2e,CONCAT11(uStack_2f,local_30)) >> 1;
                        uStack_2e._0_2_ =
                             (ushort)uStack_2e >> 1 | (ushort)((uint)(iVar1 << 0x1f) >> 0x10);
                        uVar22 = uVar22 - 1;
                        uStack_2e._2_2_ = (ushort)(uVar2 >> 1);
                        local_30 = (byte)uVar16;
                        uStack_2f = (undefined1)(uVar16 >> 8);
                      } while (uVar22 != 0);
                      if (local_54 != 0) {
                        local_30 = local_30 | 1;
                      }
                    }
                  }
                  else {
                    do {
                      uVar14 = (ushort)uStack_2e;
                      if ((uStack_26 & 0x8000) != 0) break;
                      iVar1 = CONCAT22((ushort)uStack_2e,CONCAT11(uStack_2f,local_30)) << 1;
                      local_30 = (byte)iVar1;
                      uStack_2f = (undefined1)((uint)iVar1 >> 8);
                      uStack_2e._0_2_ = (ushort)((uint)iVar1 >> 0x10);
                      iVar1 = CONCAT22((ushort)uStack_2a,uStack_2e._2_2_) * 2;
                      uStack_2e._2_2_ = (ushort)iVar1 | uVar14 >> 0xf;
                      iVar13 = CONCAT22(uStack_26,uStack_2a._2_2_) * 2;
                      uStack_2a._2_2_ = (ushort)iVar13 | (ushort)uStack_2a >> 0xf;
                      uVar24 = uVar24 - 1;
                      uStack_2a._0_2_ = (ushort)((uint)iVar1 >> 0x10);
                      uStack_26 = (ushort)((uint)iVar13 >> 0x10);
                    } while (0 < (short)uVar24);
                    if ((short)uVar24 < 1) goto LAB_10734828;
                  }
                  if ((0x8000 < CONCAT11(uStack_2f,local_30)) ||
                     (iVar1 = CONCAT22(uStack_2a._2_2_,(ushort)uStack_2a),
                     uVar22 = CONCAT22(uStack_2e._2_2_,(ushort)uStack_2e),
                     (CONCAT22((ushort)uStack_2e,CONCAT11(uStack_2f,local_30)) & 0x1ffff) == 0x18000
                     )) {
                    if (CONCAT22(uStack_2e._2_2_,(ushort)uStack_2e) == -1) {
                      uStack_2e._0_2_ = 0;
                      uStack_2e._2_2_ = 0;
                      uVar22 = 0;
                      if (CONCAT22(uStack_2a._2_2_,(ushort)uStack_2a) == -1) {
                        uStack_2a._0_2_ = 0;
                        uStack_2a._2_2_ = 0;
                        if (uStack_26 == 0xffff) {
                          uStack_26 = 0x8000;
                          uVar24 = uVar24 + 1;
                          iVar1 = 0;
                          uVar22 = 0;
                        }
                        else {
                          uStack_26 = uStack_26 + 1;
                          iVar1 = 0;
                          uVar22 = 0;
                        }
                      }
                      else {
                        iVar1 = CONCAT22(uStack_2a._2_2_,(ushort)uStack_2a) + 1;
                        uStack_2a._0_2_ = (ushort)iVar1;
                        uStack_2a._2_2_ = (ushort)((uint)iVar1 >> 0x10);
                      }
                    }
                    else {
                      uVar22 = CONCAT22(uStack_2e._2_2_,(ushort)uStack_2e) + 1;
                      uStack_2e._0_2_ = (ushort)uVar22;
                      uStack_2e._2_2_ = (ushort)(uVar22 >> 0x10);
                      iVar1 = CONCAT22(uStack_2a._2_2_,(ushort)uStack_2a);
                    }
                  }
                  if (0x7ffe < uVar24) goto LAB_107348e7;
                  local_40 = uVar22;
                  local_3c = iVar1;
                  uStack_38 = uStack_26;
                  local_36 = uVar24 | uVar9;
                  uVar2 = uVar22;
                  iVar13 = iVar1;
                }
                goto joined_r0x10734672;
              }
              iVar13 = 0;
              local_3c._0_2_ = 0;
              local_3c._2_2_ = 0;
              local_40._0_2_ = 0;
              local_40._2_2_ = 0;
            }
            else {
LAB_107348e7:
              local_3c._0_2_ = 0;
              local_3c._2_2_ = 0;
              iVar13 = (-(uint)(uVar9 != 0) & 0x80000000) + 0x7fff8000;
              local_40._0_2_ = 0;
              local_40._2_2_ = 0;
            }
            uStack_38 = (ushort)iVar13;
            local_36 = (ushort)((uint)iVar13 >> 0x10);
            uVar2 = 0;
            iVar13 = 0;
          }
          goto joined_r0x10734672;
        }
      }
      local_3c._2_2_ = (undefined2)((uint)iVar13 >> 0x10);
      local_3c._0_2_ = (undefined2)iVar13;
      local_40._2_2_ = (undefined2)(uVar2 >> 0x10);
      local_40._0_2_ = (undefined2)uVar2;
      uVar23 = CONCAT22((undefined2)local_3c,local_40._2_2_);
      uVar19 = CONCAT22(uStack_38,local_3c._2_2_);
      uVar24 = local_36;
      uStack_4a = iVar15;
      uStack_2e = uVar22;
      uStack_2a = iVar1;
      local_3c = iVar13;
    }
    else {
      uVar23 = 0;
      uVar24 = 0x7fff;
      uVar19 = 0x80000000;
      local_40._0_2_ = 0;
    }
  }
  else {
LAB_10734944:
    uVar2 = CONCAT22(local_40._2_2_,(undefined2)local_40);
    local_40._0_2_ = 0;
    uVar24 = 0;
    uVar19 = 0;
    uVar23 = 0;
  }
  *param_1 = (undefined2)local_40;
  param_1[5] = uVar24 | uVar7;
  *(undefined4 *)(param_1 + 1) = uVar23;
  *(undefined4 *)(param_1 + 3) = uVar19;
LAB_10734962:
  local_40 = uVar2;
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


// ==== 107349a1 FUN_107349a1

void __cdecl FUN_107349a1(_LDOUBLE *param_1,int *param_2,char *param_3,int param_4,int *param_5)

{
  _LDBL12 local_14;
  uint local_8;
  
  local_8 = DAT_10765c70 ^ (uint)&stack0xfffffffc;
  FUN_107342e1((undefined2 *)&local_14,param_2,param_3,param_4,0,0,0,param_5);
  __ld12told(&local_14,param_1);
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


// ==== 10734a67 FUN_10734a67

/* WARNING: Removing unreachable block (ram,0x10734f58) */
/* WARNING: Removing unreachable block (ram,0x10734f62) */
/* WARNING: Removing unreachable block (ram,0x10734f67) */

void __cdecl
FUN_10734a67(int param_1,uint param_2,ushort param_3,int param_4,byte param_5,short *param_6)

{
  int iVar1;
  ushort *puVar2;
  int iVar3;
  bool bVar4;
  int iVar5;
  errno_t eVar6;
  short *psVar7;
  ushort uVar8;
  ushort uVar9;
  ushort *puVar10;
  int iVar11;
  uint uVar12;
  ushort uVar13;
  uint uVar14;
  char cVar15;
  uint uVar16;
  int iVar17;
  short *psVar18;
  short *psVar19;
  int iVar20;
  uint uVar21;
  uint uVar22;
  ushort uVar23;
  ushort uVar24;
  char *pcVar25;
  undefined *local_6c;
  ushort *local_60;
  ushort *local_5c;
  ushort *local_58;
  int local_54;
  short local_50;
  ushort *local_4c;
  uint local_48;
  int local_44;
  ushort local_40;
  undefined4 uStack_3e;
  ushort uStack_3a;
  int local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined2 local_2c;
  undefined1 uStack_2a;
  undefined1 uStack_29;
  undefined4 local_24;
  undefined4 uStack_20;
  ushort uStack_1c;
  undefined1 local_1a;
  byte bStack_19;
  byte local_14;
  undefined1 uStack_13;
  ushort uStack_12;
  undefined4 local_10;
  ushort local_c;
  ushort uStack_a;
  uint local_8;
  
  uVar16 = CONCAT22(local_24._2_2_,(ushort)local_24);
  iVar1 = CONCAT22(uStack_3e._2_2_,(undefined2)uStack_3e);
  local_8 = DAT_10765c70 ^ (uint)&stack0xfffffffc;
  local_14 = (byte)param_1;
  uStack_13 = (undefined1)((uint)param_1 >> 8);
  uStack_12 = (ushort)((uint)param_1 >> 0x10);
  local_10._0_2_ = (ushort)param_2;
  iVar17 = CONCAT22((ushort)local_10,uStack_12);
  local_10._2_2_ = (ushort)(param_2 >> 0x10);
  local_c = param_3;
  uVar8 = param_3 & 0x8000;
  uVar14 = param_3 & 0x7fff;
  local_34 = 0xcccccccc;
  local_30 = 0xcccccccc;
  local_2c._0_1_ = 0xcc;
  local_2c._1_1_ = 0xcc;
  uStack_2a = 0xfb;
  uStack_29 = 0x3f;
  if (uVar8 == 0) {
    *(undefined1 *)(param_6 + 1) = 0x20;
  }
  else {
    *(undefined1 *)(param_6 + 1) = 0x2d;
  }
  if ((((short)uVar14 == 0) && (param_2 == 0)) && (param_1 == 0)) {
    *param_6 = 0;
    *(byte *)(param_6 + 1) = ((uVar8 != 0x8000) - 1U & 0xd) + 0x20;
    *(undefined1 *)((int)param_6 + 3) = 1;
    *(undefined1 *)(param_6 + 2) = 0x30;
    *(undefined1 *)((int)param_6 + 5) = 0;
    goto LAB_107352e5;
  }
  if ((short)uVar14 == 0x7fff) {
    *param_6 = 1;
    if (((param_2 == 0x80000000) && (param_1 == 0)) || ((param_2 & 0x40000000) != 0)) {
      if ((uVar8 == 0) || (param_2 != 0xc0000000)) {
        if ((param_2 != 0x80000000) || (param_1 != 0)) goto LAB_10734b96;
        pcVar25 = "1#INF";
      }
      else {
        if (param_1 != 0) {
LAB_10734b96:
          pcVar25 = "1#QNAN";
          goto LAB_10734b9b;
        }
        pcVar25 = "1#IND";
      }
      eVar6 = _strcpy_s((char *)(param_6 + 2),0x16,pcVar25);
      if (eVar6 != 0) {
                    /* WARNING: Subroutine does not return */
        __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      *(undefined1 *)((int)param_6 + 3) = 5;
    }
    else {
      pcVar25 = "1#SNAN";
LAB_10734b9b:
      eVar6 = _strcpy_s((char *)(param_6 + 2),0x16,pcVar25);
      if (eVar6 != 0) {
                    /* WARNING: Subroutine does not return */
        __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      *(undefined1 *)((int)param_6 + 3) = 6;
    }
    iVar1 = CONCAT22(uStack_3e._2_2_,(undefined2)uStack_3e);
    param_2 = CONCAT22(local_10._2_2_,(ushort)local_10);
    uVar16 = CONCAT22(local_24._2_2_,(ushort)local_24);
    goto LAB_107352e5;
  }
  local_50 = (short)(((uVar14 >> 8) + (param_2 >> 0x18) * 2) * 0x4d + -0x134312f4 + uVar14 * 0x4d10
                    >> 0x10);
  uVar16 = (uint)local_50;
  local_1a = (undefined1)uVar14;
  bStack_19 = (byte)(uVar14 >> 8);
  local_24._2_2_ = (ushort)param_1;
  local_24._0_2_ = 0;
  local_6c = &DAT_10766960;
  uStack_20._0_2_ = uStack_12;
  uStack_20._2_2_ = (ushort)local_10;
  uStack_1c = local_10._2_2_;
  if (uVar16 != 0) {
    iVar20 = param_1;
    uVar14 = -uVar16;
    if ((int)-uVar16 < 0) {
      local_6c = &DAT_10766ac0;
      uVar14 = uVar16;
    }
    while (uVar14 != 0) {
      uStack_20._0_2_ = (ushort)((uint)iVar20 >> 0x10);
      local_24._2_2_ = (ushort)iVar20;
      local_6c = local_6c + 0x54;
      iVar3 = CONCAT22(local_c,local_10._2_2_);
      if ((uVar14 & 7) == 0) goto LAB_10734ebc;
      puVar10 = (ushort *)(local_6c + (uVar14 & 7) * 0xc);
      if (0x7fff < *puVar10) {
        local_40 = (ushort)*(undefined4 *)puVar10;
        uStack_3e._0_2_ = (undefined2)((uint)*(undefined4 *)puVar10 >> 0x10);
        puVar2 = puVar10 + 4;
        uStack_3e._2_2_ = (undefined2)*(undefined4 *)(puVar10 + 2);
        uStack_3a = (ushort)((uint)*(undefined4 *)(puVar10 + 2) >> 0x10);
        puVar10 = &local_40;
        local_38 = *(int *)puVar2;
        iVar1 = CONCAT22(uStack_3e._2_2_,(undefined2)uStack_3e) + -1;
        uStack_3e._0_2_ = (undefined2)iVar1;
        uStack_3e._2_2_ = (undefined2)((uint)iVar1 >> 0x10);
      }
      uVar13 = CONCAT11(bStack_19,local_1a) & 0x7fff;
      uVar23 = puVar10[5] & 0x7fff;
      local_4c = (ushort *)0x0;
      local_14 = 0;
      uStack_13 = 0;
      uStack_12 = 0;
      local_10._0_2_ = 0;
      iVar11 = 0;
      local_10._2_2_ = 0;
      local_c = 0;
      iVar5 = 0;
      uStack_a = 0;
      uVar9 = (puVar10[5] ^ CONCAT11(bStack_19,local_1a)) & 0x8000;
      uVar24 = uVar23 + uVar13;
      iVar17 = 0;
      iVar3 = 0;
      if (((uVar13 < 0x7fff) && (iVar17 = 0, iVar3 = 0, uVar23 < 0x7fff)) &&
         (iVar17 = iVar11, iVar3 = iVar5, uVar24 < 0xbffe)) {
        if (uVar24 < 0x3fc0) {
          uStack_1c = 0;
          local_1a = 0;
          bStack_19 = 0;
          uStack_20._0_2_ = 0;
          uStack_20._2_2_ = 0;
          local_24._0_2_ = 0;
          local_24._2_2_ = 0;
          iVar20 = 0;
        }
        else if (((uVar13 == 0) &&
                 (uVar24 = uVar24 + 1,
                 (CONCAT13(bStack_19,CONCAT12(local_1a,uStack_1c)) & 0x7fffffff) == 0)) &&
                ((CONCAT22(uStack_20._2_2_,(ushort)uStack_20) == 0 &&
                 (CONCAT22(local_24._2_2_,(ushort)local_24) == 0)))) {
          local_1a = 0;
          bStack_19 = 0;
        }
        else if ((((uVar23 == 0) &&
                  (uVar24 = uVar24 + 1, (*(uint *)(puVar10 + 4) & 0x7fffffff) == 0)) &&
                 (*(int *)(puVar10 + 2) == 0)) && (*(int *)puVar10 == 0)) {
          uStack_1c = 0;
          local_1a = 0;
          bStack_19 = 0;
          uStack_20._0_2_ = 0;
          uStack_20._2_2_ = 0;
          local_24._0_2_ = 0;
          local_24._2_2_ = 0;
          iVar20 = 0;
        }
        else {
          psVar7 = (short *)&local_10;
          local_60 = (ushort *)0x0;
          local_44 = 5;
          do {
            local_54 = local_44;
            if (0 < local_44) {
              local_5c = (ushort *)((int)&local_24 + (int)local_60 * 2);
              local_58 = puVar10 + 4;
              do {
                bVar4 = false;
                uVar16 = *(uint *)(psVar7 + -2) + (uint)*local_5c * (uint)*local_58;
                if ((uVar16 < *(uint *)(psVar7 + -2)) ||
                   (uVar16 < (uint)*local_5c * (uint)*local_58)) {
                  bVar4 = true;
                }
                *(uint *)(psVar7 + -2) = uVar16;
                if (bVar4) {
                  *psVar7 = *psVar7 + 1;
                }
                local_5c = local_5c + 1;
                local_58 = local_58 + -1;
                local_54 = local_54 + -1;
              } while (0 < local_54);
            }
            psVar7 = psVar7 + 1;
            local_60 = (ushort *)((int)local_60 + 1);
            local_44 = local_44 + -1;
          } while (0 < local_44);
          uVar24 = uVar24 + 0xc002;
          if ((short)uVar24 < 1) {
LAB_10734de0:
            uVar24 = uVar24 - 1;
            if ((short)uVar24 < 0) {
              local_48 = (uint)(ushort)-uVar24;
              uVar24 = 0;
              do {
                if ((local_14 & 1) != 0) {
                  local_4c = (ushort *)((int)local_4c + 1);
                }
                iVar20 = CONCAT22(uStack_a,local_c);
                uVar16 = CONCAT22(local_10._2_2_,(ushort)local_10);
                iVar17 = CONCAT22(local_10._2_2_,(ushort)local_10);
                local_c = (ushort)(CONCAT22(uStack_a,local_c) >> 1);
                uStack_a = uStack_a >> 1;
                local_10._2_2_ = local_10._2_2_ >> 1 | (ushort)((uint)(iVar20 << 0x1f) >> 0x10);
                uVar12 = CONCAT22(uStack_12,CONCAT11(uStack_13,local_14)) >> 1;
                uStack_12 = uStack_12 >> 1 | (ushort)((uint)(iVar17 << 0x1f) >> 0x10);
                local_48 = local_48 - 1;
                local_10._0_2_ = (ushort)(uVar16 >> 1);
                local_14 = (byte)uVar12;
                uStack_13 = (undefined1)(uVar12 >> 8);
              } while (local_48 != 0);
              if (local_4c != (ushort *)0x0) {
                local_14 = local_14 | 1;
              }
            }
          }
          else {
            do {
              uVar13 = uStack_12;
              if ((uStack_a & 0x8000) != 0) break;
              iVar17 = CONCAT22(uStack_12,CONCAT11(uStack_13,local_14)) << 1;
              local_14 = (byte)iVar17;
              uStack_13 = (undefined1)((uint)iVar17 >> 8);
              uStack_12 = (ushort)((uint)iVar17 >> 0x10);
              iVar17 = CONCAT22(local_10._2_2_,(ushort)local_10) * 2;
              local_10._0_2_ = (ushort)iVar17 | uVar13 >> 0xf;
              iVar20 = CONCAT22(uStack_a,local_c) * 2;
              local_c = (ushort)iVar20 | local_10._2_2_ >> 0xf;
              uVar24 = uVar24 - 1;
              local_10._2_2_ = (ushort)((uint)iVar17 >> 0x10);
              uStack_a = (ushort)((uint)iVar20 >> 0x10);
            } while (0 < (short)uVar24);
            if ((short)uVar24 < 1) goto LAB_10734de0;
          }
          if ((0x8000 < CONCAT11(uStack_13,local_14)) ||
             (iVar3 = CONCAT22(local_c,local_10._2_2_),
             iVar17 = CONCAT22((ushort)local_10,uStack_12),
             (CONCAT22(uStack_12,CONCAT11(uStack_13,local_14)) & 0x1ffff) == 0x18000)) {
            if (CONCAT22((ushort)local_10,uStack_12) == -1) {
              uStack_12 = 0;
              local_10._0_2_ = 0;
              iVar17 = 0;
              if (CONCAT22(local_c,local_10._2_2_) == -1) {
                local_10._2_2_ = 0;
                local_c = 0;
                if (uStack_a == 0xffff) {
                  uStack_a = 0x8000;
                  uVar24 = uVar24 + 1;
                  iVar3 = 0;
                  iVar17 = 0;
                }
                else {
                  uStack_a = uStack_a + 1;
                  iVar3 = 0;
                  iVar17 = 0;
                }
              }
              else {
                iVar3 = CONCAT22(local_c,local_10._2_2_) + 1;
                local_10._2_2_ = (ushort)iVar3;
                local_c = (ushort)((uint)iVar3 >> 0x10);
              }
            }
            else {
              iVar17 = CONCAT22((ushort)local_10,uStack_12) + 1;
              uStack_12 = (ushort)iVar17;
              local_10._0_2_ = (ushort)((uint)iVar17 >> 0x10);
              iVar3 = CONCAT22(local_c,local_10._2_2_);
            }
          }
          local_10._0_2_ = (ushort)((uint)iVar17 >> 0x10);
          uStack_12 = (ushort)iVar17;
          local_c = (ushort)((uint)iVar3 >> 0x10);
          local_10._2_2_ = (ushort)iVar3;
          if (0x7ffe < uVar24) goto LAB_10734ea0;
          local_24._0_2_ = uStack_12;
          local_24._2_2_ = (ushort)local_10;
          uStack_20._0_2_ = local_10._2_2_;
          iVar20 = CONCAT22(local_10._2_2_,(ushort)local_10);
          bStack_19 = (byte)(uVar24 >> 8) | (byte)(uVar9 >> 8);
          uStack_20._2_2_ = local_c;
          uStack_1c = uStack_a;
          local_1a = (undefined1)uVar24;
        }
      }
      else {
LAB_10734ea0:
        uStack_20._0_2_ = 0;
        uStack_20._2_2_ = 0;
        iVar11 = (-(uint)(uVar9 != 0) & 0x80000000) + 0x7fff8000;
        local_24._0_2_ = 0;
        local_24._2_2_ = 0;
        iVar20 = 0;
        uStack_1c = (ushort)iVar11;
        local_1a = (undefined1)((uint)iVar11 >> 0x10);
        bStack_19 = (byte)((uint)iVar11 >> 0x18);
      }
LAB_10734ebc:
      uStack_20._0_2_ = (ushort)((uint)iVar20 >> 0x10);
      local_24._2_2_ = (ushort)iVar20;
      local_c = (ushort)((uint)iVar3 >> 0x10);
      local_10._2_2_ = (ushort)iVar3;
      local_10._0_2_ = (ushort)((uint)iVar17 >> 0x10);
      uStack_12 = (ushort)iVar17;
      param_1 = CONCAT22(uStack_12,local_24._2_2_);
      param_2 = CONCAT22(local_10._2_2_,(ushort)local_10);
      uVar14 = (int)uVar14 >> 3;
    }
  }
  local_24._2_2_ = (ushort)param_1;
  uVar16 = CONCAT13(bStack_19,CONCAT12(local_1a,uStack_1c));
  uStack_20 = CONCAT22(uStack_20._2_2_,(ushort)uStack_20);
  if (0x3ffe < (ushort)(uVar16 >> 0x10)) {
    local_50 = local_50 + 1;
    uVar16 = uVar16 >> 0x10 & 0x7fff;
    iVar17 = uVar16 + 0x3ffb;
    local_5c = (ushort *)0x0;
    local_14 = 0;
    uStack_13 = 0;
    uStack_12 = 0;
    param_1 = param_1 & 0xffff;
    local_10._0_2_ = 0;
    local_10._2_2_ = 0;
    param_2 = 0;
    local_c = 0;
    uStack_a = 0;
    if (((ushort)uVar16 < 0x7fff) && ((ushort)iVar17 < 0xbffe)) {
      if (0x3fbf < (ushort)iVar17) {
        if (((((ushort)uVar16 == 0) &&
             (iVar17 = uVar16 + 0x3ffc,
             (CONCAT13(bStack_19,CONCAT12(local_1a,uStack_1c)) & 0x7fffffff) == 0)) &&
            (CONCAT22(uStack_20._2_2_,(ushort)uStack_20) == 0)) &&
           (CONCAT22(local_24._2_2_,(ushort)local_24) == 0)) {
          local_1a = 0;
          bStack_19 = 0;
          uStack_20 = CONCAT22(uStack_20._2_2_,(ushort)uStack_20);
          goto LAB_10735124;
        }
        local_58 = (ushort *)0x0;
        psVar7 = (short *)&local_10;
        local_44 = 5;
        do {
          local_54 = local_44;
          if (0 < local_44) {
            local_60 = &local_2c;
            local_4c = (ushort *)((int)&local_24 + (int)local_58 * 2);
            do {
              bVar4 = false;
              uVar16 = *(uint *)(psVar7 + -2) + (uint)*local_60 * (uint)*local_4c;
              if ((uVar16 < *(uint *)(psVar7 + -2)) || (uVar16 < (uint)*local_60 * (uint)*local_4c))
              {
                bVar4 = true;
              }
              *(uint *)(psVar7 + -2) = uVar16;
              if (bVar4) {
                *psVar7 = *psVar7 + 1;
              }
              local_4c = local_4c + 1;
              local_60 = local_60 + -1;
              local_54 = local_54 + -1;
            } while (0 < local_54);
          }
          psVar7 = psVar7 + 1;
          local_58 = (ushort *)((int)local_58 + 1);
          local_44 = local_44 + -1;
        } while (0 < local_44);
        iVar17 = iVar17 + 0xc002;
        if ((short)iVar17 < 1) {
LAB_10735032:
          uVar24 = (ushort)(iVar17 + 0xffff);
          if ((short)uVar24 < 0) {
            uVar16 = -(iVar17 + 0xffff);
            uVar14 = uVar16 & 0xffff;
            uVar24 = uVar24 + (short)uVar16;
            do {
              if ((local_14 & 1) != 0) {
                local_5c = (ushort *)((int)local_5c + 1);
              }
              iVar20 = CONCAT22(uStack_a,local_c);
              uVar16 = CONCAT22(local_10._2_2_,(ushort)local_10);
              iVar17 = CONCAT22(local_10._2_2_,(ushort)local_10);
              local_c = (ushort)(CONCAT22(uStack_a,local_c) >> 1);
              uStack_a = uStack_a >> 1;
              local_10._2_2_ = local_10._2_2_ >> 1 | (ushort)((uint)(iVar20 << 0x1f) >> 0x10);
              uVar12 = CONCAT22(uStack_12,CONCAT11(uStack_13,local_14)) >> 1;
              uStack_12 = uStack_12 >> 1 | (ushort)((uint)(iVar17 << 0x1f) >> 0x10);
              uVar14 = uVar14 - 1;
              local_10._0_2_ = (ushort)(uVar16 >> 1);
              local_14 = (byte)uVar12;
              uStack_13 = (undefined1)(uVar12 >> 8);
            } while (uVar14 != 0);
            if (local_5c != (ushort *)0x0) {
              local_14 = local_14 | 1;
            }
          }
        }
        else {
          do {
            uVar24 = uStack_12;
            if ((uStack_a & 0x8000) != 0) break;
            iVar20 = CONCAT22(uStack_12,CONCAT11(uStack_13,local_14)) << 1;
            local_14 = (byte)iVar20;
            uStack_13 = (undefined1)((uint)iVar20 >> 8);
            uStack_12 = (ushort)((uint)iVar20 >> 0x10);
            iVar20 = CONCAT22(local_10._2_2_,(ushort)local_10) * 2;
            local_10._0_2_ = (ushort)iVar20 | uVar24 >> 0xf;
            iVar3 = CONCAT22(uStack_a,local_c) * 2;
            local_c = (ushort)iVar3 | local_10._2_2_ >> 0xf;
            iVar17 = iVar17 + 0xffff;
            local_10._2_2_ = (ushort)((uint)iVar20 >> 0x10);
            uStack_a = (ushort)((uint)iVar3 >> 0x10);
          } while (0 < (short)iVar17);
          uVar24 = (ushort)iVar17;
          if ((short)uVar24 < 1) goto LAB_10735032;
        }
        iVar17 = 0;
        if ((0x8000 < CONCAT11(uStack_13,local_14)) ||
           (uStack_20 = CONCAT22(local_c,local_10._2_2_),
           iVar20 = CONCAT22((ushort)local_10,uStack_12),
           (CONCAT22(uStack_12,CONCAT11(uStack_13,local_14)) & 0x1ffff) == 0x18000)) {
          if (CONCAT22((ushort)local_10,uStack_12) == -1) {
            if (CONCAT22(local_c,local_10._2_2_) == -1) {
              if (uStack_a == 0xffff) {
                uStack_a = 0x8000;
                uVar24 = uVar24 + 1;
                uStack_20 = iVar17;
                iVar20 = iVar17;
              }
              else {
                uStack_a = uStack_a + 1;
                uStack_20 = iVar17;
                iVar20 = iVar17;
              }
            }
            else {
              uStack_20 = CONCAT22(local_c,local_10._2_2_) + 1;
              iVar20 = iVar17;
            }
          }
          else {
            iVar20 = CONCAT22((ushort)local_10,uStack_12) + 1;
            uStack_20 = CONCAT22(local_c,local_10._2_2_);
          }
        }
        local_10._0_2_ = (ushort)((uint)iVar20 >> 0x10);
        uStack_12 = (ushort)iVar20;
        local_c = (ushort)((uint)uStack_20 >> 0x10);
        local_10._2_2_ = (ushort)uStack_20;
        param_2 = CONCAT22(local_10._2_2_,(ushort)local_10);
        if (uVar24 < 0x7fff) {
          bStack_19 = (byte)(uVar24 >> 8) | bStack_19 & 0x80;
          uStack_1c = uStack_a;
          local_1a = (undefined1)uVar24;
        }
        else {
          iVar20 = (-(uint)((bStack_19 & 0x80) != 0) & 0x80000000) + 0x7fff8000;
          uStack_1c = (ushort)iVar20;
          local_1a = (undefined1)((uint)iVar20 >> 0x10);
          bStack_19 = (byte)((uint)iVar20 >> 0x18);
          uStack_20 = iVar17;
          iVar20 = iVar17;
        }
        local_24._2_2_ = (ushort)((uint)iVar20 >> 0x10);
        local_24._0_2_ = (ushort)iVar20;
        param_1 = CONCAT22(uStack_12,local_24._2_2_);
        goto LAB_10735124;
      }
      uStack_1c = 0;
      local_1a = 0;
      bStack_19 = 0;
    }
    else {
      iVar17 = (-(uint)((bStack_19 & 0x80) != 0) & 0x80000000) + 0x7fff8000;
      uStack_1c = (ushort)iVar17;
      local_1a = (undefined1)((uint)iVar17 >> 0x10);
      bStack_19 = (byte)((uint)iVar17 >> 0x18);
    }
    local_24._0_2_ = 0;
    param_1 = 0;
    param_2 = 0;
    uStack_20 = 0;
  }
LAB_10735124:
  uStack_12 = (ushort)((uint)param_1 >> 0x10);
  local_24._2_2_ = (ushort)param_1;
  uVar16 = CONCAT22(local_24._2_2_,(ushort)local_24);
  *param_6 = local_50;
  if (((param_5 & 1) == 0) || (param_4 = param_4 + local_50, 0 < param_4)) {
    if (0x15 < param_4) {
      param_4 = 0x15;
    }
    iVar20 = (CONCAT13(bStack_19,CONCAT12(local_1a,uStack_1c)) >> 0x10) - 0x3ffe;
    local_1a = 0;
    bStack_19 = 0;
    iVar17 = 8;
    do {
      uVar24 = local_24._2_2_;
      iVar3 = CONCAT22(local_24._2_2_,(ushort)local_24) << 1;
      local_24._0_2_ = (ushort)iVar3;
      local_24._2_2_ = (ushort)((uint)iVar3 >> 0x10);
      uVar16 = uStack_20 * 2;
      iVar3 = CONCAT13(bStack_19,CONCAT12(local_1a,uStack_1c)) * 2;
      uStack_1c = (ushort)iVar3 | (ushort)((uint)uStack_20 >> 0x1f);
      iVar17 = iVar17 + -1;
      uStack_20._0_2_ = (ushort)(uVar16 | uVar24 >> 0xf);
      uStack_20._2_2_ = (ushort)(uVar16 >> 0x10);
      local_1a = (undefined1)((uint)iVar3 >> 0x10);
      bStack_19 = (byte)((uint)iVar3 >> 0x18);
    } while (iVar17 != 0);
    if ((iVar20 < 0) && (uVar16 = -iVar20 & 0xff, uVar16 != 0)) {
      do {
        iVar20 = CONCAT13(bStack_19,CONCAT12(local_1a,uStack_1c));
        uVar12 = CONCAT22(uStack_20._2_2_,(ushort)uStack_20);
        iVar17 = CONCAT22(uStack_20._2_2_,(ushort)uStack_20);
        uVar14 = CONCAT13(bStack_19,CONCAT12(local_1a,uStack_1c)) >> 1;
        uStack_1c = (ushort)uVar14;
        local_1a = (undefined1)(uVar14 >> 0x10);
        bStack_19 = bStack_19 >> 1;
        uStack_20._2_2_ = uStack_20._2_2_ >> 1 | (ushort)((uint)(iVar20 << 0x1f) >> 0x10);
        uVar14 = CONCAT22(local_24._2_2_,(ushort)local_24);
        local_24._2_2_ = local_24._2_2_ >> 1 | (ushort)((uint)(iVar17 << 0x1f) >> 0x10);
        uVar16 = uVar16 - 1;
        uStack_20._0_2_ = (ushort)(uVar12 >> 1);
        local_24._0_2_ = (ushort)(uVar14 >> 1);
      } while (0 < (int)uVar16);
    }
    uVar16 = CONCAT22(local_24._2_2_,(ushort)local_24);
    psVar7 = param_6 + 2;
    psVar18 = psVar7;
    uVar24 = uStack_20._2_2_;
    for (iVar17 = param_4 + 1; 0 < iVar17; iVar17 = iVar17 + -1) {
      local_24._2_2_ = (ushort)(uVar16 >> 0x10);
      local_24._0_2_ = (ushort)uVar16;
      iVar1 = CONCAT22((ushort)uStack_20,local_24._2_2_);
      local_38 = CONCAT13(bStack_19,CONCAT12(local_1a,uStack_1c));
      uVar12 = (CONCAT13(bStack_19,CONCAT12(local_1a,uStack_1c)) * 2 | (uint)(uVar24 >> 0xf)) * 2 |
               (CONCAT22(uVar24,(ushort)uStack_20) & 0x7fffffff) >> 0x1e;
      uVar21 = (CONCAT22(uVar24,(ushort)uStack_20) * 2 | (uint)(local_24._2_2_ >> 0xf)) * 2 |
               (uVar16 & 0x7fffffff) >> 0x1e;
      uVar14 = uVar16 * 5;
      if ((uVar14 < uVar16 * 4) || (uVar22 = uVar21, uVar14 < uVar16)) {
        uVar22 = uVar21 + 1;
        bVar4 = false;
        if ((uVar22 < uVar21) || (uVar22 == 0)) {
          bVar4 = true;
        }
        if (bVar4) {
          uVar12 = uVar12 + 1;
        }
      }
      uVar21 = CONCAT22(uVar24,(ushort)uStack_20) + uVar22;
      if ((uVar21 < uVar22) || (uVar21 < CONCAT22(uVar24,(ushort)uStack_20))) {
        uVar12 = uVar12 + 1;
      }
      iVar20 = (uVar12 + local_38) * 2;
      uStack_1c = (ushort)iVar20 | (ushort)(uVar21 >> 0x1f);
      uVar16 = uVar16 * 10;
      local_1a = (undefined1)((uint)iVar20 >> 0x10);
      uStack_20._0_2_ = (ushort)(uVar21 * 2) | (ushort)(uVar14 >> 0x1f);
      *(char *)psVar18 = (char)((uint)iVar20 >> 0x18) + '0';
      psVar18 = (short *)((int)psVar18 + 1);
      uStack_20._2_2_ = (ushort)(uVar21 * 2 >> 0x10);
      bStack_19 = 0;
      local_40 = (ushort)local_24;
      uStack_3a = uVar24;
      uVar24 = uStack_20._2_2_;
    }
    uStack_20 = CONCAT22(uVar24,(ushort)uStack_20);
    psVar19 = psVar18 + -1;
    if (*(char *)((int)psVar18 + -1) < '5') {
      for (; (psVar7 <= psVar19 && ((char)*psVar19 == '0')); psVar19 = (short *)((int)psVar19 + -1))
      {
      }
      if (psVar19 < psVar7) {
        *param_6 = 0;
        *(undefined1 *)((int)param_6 + 3) = 1;
        *(byte *)(param_6 + 1) = ((uVar8 != 0x8000) - 1U & 0xd) + 0x20;
        *(char *)psVar7 = '0';
        *(undefined1 *)((int)param_6 + 5) = 0;
        goto LAB_107352e5;
      }
    }
    else {
      for (; (psVar7 <= psVar19 && ((char)*psVar19 == '9')); psVar19 = (short *)((int)psVar19 + -1))
      {
        *(char *)psVar19 = '0';
      }
      if (psVar19 < psVar7) {
        psVar19 = (short *)((int)psVar19 + 1);
        *param_6 = *param_6 + 1;
      }
      *(char *)psVar19 = (char)*psVar19 + '\x01';
    }
    cVar15 = ((char)psVar19 - (char)param_6) + -3;
    *(char *)((int)param_6 + 3) = cVar15;
    *(undefined1 *)(cVar15 + 4 + (int)param_6) = 0;
  }
  else {
    *param_6 = 0;
    *(undefined1 *)((int)param_6 + 3) = 1;
    *(byte *)(param_6 + 1) = ((uVar8 != 0x8000) - 1U & 0xd) + 0x20;
    *(undefined1 *)(param_6 + 2) = 0x30;
    *(undefined1 *)((int)param_6 + 5) = 0;
  }
LAB_107352e5:
  local_24 = uVar16;
  local_10 = param_2;
  uStack_3e = iVar1;
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


// ==== 1073532d __set_controlfp

/* Library Function - Single Match
    __set_controlfp
   
   Library: Visual Studio 2005 Release */

void __cdecl __set_controlfp(uint _NewValue,uint _Mask)

{
  errno_t eVar1;
  ushort in_FPUControlWord;
  
  if ((((_NewValue != 0x9001f) || (_Mask != 0xffffffff)) || ((in_FPUControlWord & 0x1f3d) != 0x23d))
     || ((DAT_1076cfb0 != 0 && ((MXCSR & 0xfec0) != 0x1e80)))) {
    eVar1 = __controlfp_s((uint *)0x0,_NewValue,_Mask & 0xfff7ffff);
    if (eVar1 != 0) {
                    /* WARNING: Subroutine does not return */
      __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
  }
  return;
}


// ==== 10735430 __hw_cw

/* Library Function - Single Match
    __hw_cw
   
   Library: Visual Studio 2005 Release */

uint __hw_cw(void)

{
  uint uVar1;
  uint uVar2;
  uint unaff_EBX;
  
  uVar1 = (uint)((unaff_EBX & 0x10) != 0);
  if ((unaff_EBX & 8) != 0) {
    uVar1 = uVar1 | 4;
  }
  if ((unaff_EBX & 4) != 0) {
    uVar1 = uVar1 | 8;
  }
  if ((unaff_EBX & 2) != 0) {
    uVar1 = uVar1 | 0x10;
  }
  if ((unaff_EBX & 1) != 0) {
    uVar1 = uVar1 | 0x20;
  }
  if ((unaff_EBX & 0x80000) != 0) {
    uVar1 = uVar1 | 2;
  }
  uVar2 = unaff_EBX & 0x300;
  if (uVar2 != 0) {
    if (uVar2 == 0x100) {
      uVar1 = uVar1 | 0x400;
    }
    else if (uVar2 == 0x200) {
      uVar1 = uVar1 | 0x800;
    }
    else if (uVar2 == 0x300) {
      uVar1 = uVar1 | 0xc00;
    }
  }
  if ((unaff_EBX & 0x30000) == 0) {
    uVar1 = uVar1 | 0x300;
  }
  else if ((unaff_EBX & 0x30000) == 0x10000) {
    uVar1 = uVar1 | 0x200;
  }
  if ((unaff_EBX & 0x40000) != 0) {
    uVar1 = uVar1 | 0x1000;
  }
  return uVar1;
}


// ==== 10735599 ___hw_cw_sse2

/* Library Function - Single Match
    ___hw_cw_sse2
   
   Library: Visual Studio 2005 Release */

uint __fastcall ___hw_cw_sse2(undefined4 param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = 0;
  if ((param_2 & 0x10) != 0) {
    uVar1 = 0x80;
  }
  if ((param_2 & 8) != 0) {
    uVar1 = uVar1 | 0x200;
  }
  if ((param_2 & 4) != 0) {
    uVar1 = uVar1 | 0x400;
  }
  if ((param_2 & 2) != 0) {
    uVar1 = uVar1 | 0x800;
  }
  if ((param_2 & 1) != 0) {
    uVar1 = uVar1 | 0x1000;
  }
  if ((param_2 & 0x80000) != 0) {
    uVar1 = uVar1 | 0x100;
  }
  uVar2 = param_2 & 0x300;
  if (uVar2 != 0) {
    if (uVar2 == 0x100) {
      uVar1 = uVar1 | 0x2000;
    }
    else if (uVar2 == 0x200) {
      uVar1 = uVar1 | 0x4000;
    }
    else if (uVar2 == 0x300) {
      uVar1 = uVar1 | 0x6000;
    }
  }
  uVar2 = param_2 & 0x3000000;
  if (uVar2 == 0x1000000) {
    uVar1 = uVar1 | 0x8040;
  }
  else {
    if (uVar2 == 0x2000000) {
      return uVar1 | 0x40;
    }
    if (uVar2 == 0x3000000) {
      return uVar1 | 0x8000;
    }
  }
  return uVar1;
}


// ==== 10735683 __statusfp

/* Library Function - Single Match
    __statusfp
   
   Library: Visual Studio 2005 Release */

uint __cdecl __statusfp(void)

{
  uint uVar1;
  uint uVar2;
  ushort in_FPUStatusWord;
  
  uVar2 = 0;
  if ((in_FPUStatusWord & 0x3f) != 0) {
    if ((in_FPUStatusWord & 1) != 0) {
      uVar2 = 0x10;
    }
    if ((in_FPUStatusWord & 4) != 0) {
      uVar2 = uVar2 | 8;
    }
    if ((in_FPUStatusWord & 8) != 0) {
      uVar2 = uVar2 | 4;
    }
    if ((in_FPUStatusWord & 0x10) != 0) {
      uVar2 = uVar2 | 2;
    }
    if ((in_FPUStatusWord & 0x20) != 0) {
      uVar2 = uVar2 | 1;
    }
    if ((in_FPUStatusWord & 2) != 0) {
      uVar2 = uVar2 | 0x80000;
    }
  }
  if (DAT_1076cfb0 != 0) {
    uVar1 = 0;
    if ((MXCSR & 0x3f) != 0) {
      if ((MXCSR & 1) != 0) {
        uVar1 = 0x10;
      }
      if ((MXCSR & 4) != 0) {
        uVar1 = uVar1 | 8;
      }
      if ((MXCSR & 8) != 0) {
        uVar1 = uVar1 | 4;
      }
      if ((MXCSR & 0x10) != 0) {
        uVar1 = uVar1 | 2;
      }
      if ((MXCSR & 0x20) != 0) {
        uVar1 = uVar1 | 1;
      }
      if ((MXCSR & 2) != 0) {
        uVar1 = uVar1 | 0x80000;
      }
    }
    uVar2 = uVar1 | uVar2;
  }
  return uVar2;
}


// ==== 10735749 ___statusfp_sse2

/* Library Function - Single Match
    ___statusfp_sse2
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release, Visual Studio 2010 Release */

uint ___statusfp_sse2(void)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = ___get_fpsr_sse2();
  uVar2 = 0;
  if ((uVar1 & 0x3f) != 0) {
    if ((uVar1 & 1) != 0) {
      uVar2 = 0x10;
    }
    if ((uVar1 & 4) != 0) {
      uVar2 = uVar2 | 8;
    }
    if ((uVar1 & 8) != 0) {
      uVar2 = uVar2 | 4;
    }
    if ((uVar1 & 0x10) != 0) {
      uVar2 = uVar2 | 2;
    }
    if ((uVar1 & 0x20) != 0) {
      uVar2 = uVar2 | 1;
    }
    if ((uVar1 & 2) != 0) {
      uVar2 = uVar2 | 0x80000;
    }
  }
  return uVar2;
}


// ==== 10735943 __statusfp2

/* Library Function - Single Match
    __statusfp2
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release, Visual Studio 2010 Release */

void __cdecl __statusfp2(uint *_X86_status,uint *_SSE2_status)

{
  uint uVar1;
  ushort in_FPUStatusWord;
  
  if (_X86_status != (uint *)0x0) {
    uVar1 = 0;
    if ((in_FPUStatusWord & 0x3f) != 0) {
      if ((in_FPUStatusWord & 1) != 0) {
        uVar1 = 0x10;
      }
      if ((in_FPUStatusWord & 4) != 0) {
        uVar1 = uVar1 | 8;
      }
      if ((in_FPUStatusWord & 8) != 0) {
        uVar1 = uVar1 | 4;
      }
      if ((in_FPUStatusWord & 0x10) != 0) {
        uVar1 = uVar1 | 2;
      }
      if ((in_FPUStatusWord & 0x20) != 0) {
        uVar1 = uVar1 | 1;
      }
      if ((in_FPUStatusWord & 2) != 0) {
        uVar1 = uVar1 | 0x80000;
      }
    }
    *_X86_status = uVar1;
  }
  if (_SSE2_status != (uint *)0x0) {
    uVar1 = ___statusfp_sse2();
    *_SSE2_status = uVar1;
  }
  return;
}


// ==== 1073599b __clearfp

/* WARNING: Removing unreachable block (ram,0x10735a25) */
/* WARNING: Removing unreachable block (ram,0x10735a15) */
/* WARNING: Removing unreachable block (ram,0x10735a05) */
/* WARNING: Removing unreachable block (ram,0x10735a00) */
/* WARNING: Removing unreachable block (ram,0x10735a08) */
/* WARNING: Removing unreachable block (ram,0x10735a0d) */
/* WARNING: Removing unreachable block (ram,0x10735a10) */
/* WARNING: Removing unreachable block (ram,0x10735a18) */
/* WARNING: Removing unreachable block (ram,0x10735a1d) */
/* WARNING: Removing unreachable block (ram,0x10735a20) */
/* WARNING: Removing unreachable block (ram,0x10735a28) */
/* WARNING: Removing unreachable block (ram,0x10735a2d) */
/* Library Function - Single Match
    __clearfp
   
   Library: Visual Studio 2005 Release */

uint __cdecl __clearfp(void)

{
  uint uVar1;
  ushort in_FPUStatusWord;
  
  if (DAT_1076cfb0 == 0) {
    uVar1 = 0;
    if ((in_FPUStatusWord & 0x3f) != 0) {
      if ((in_FPUStatusWord & 1) != 0) {
        uVar1 = 0x10;
      }
      if ((in_FPUStatusWord & 4) != 0) {
        uVar1 = uVar1 | 8;
      }
      if ((in_FPUStatusWord & 8) != 0) {
        uVar1 = uVar1 | 4;
      }
      if ((in_FPUStatusWord & 0x10) != 0) {
        uVar1 = uVar1 | 2;
      }
      if ((in_FPUStatusWord & 0x20) != 0) {
        uVar1 = uVar1 | 1;
      }
      if ((in_FPUStatusWord & 2) != 0) {
        uVar1 = uVar1 | 0x80000;
      }
    }
    return uVar1;
  }
  uVar1 = 0;
  if ((in_FPUStatusWord & 0x3f) != 0) {
    if ((in_FPUStatusWord & 1) != 0) {
      uVar1 = 0x10;
    }
    if ((in_FPUStatusWord & 4) != 0) {
      uVar1 = uVar1 | 8;
    }
    if ((in_FPUStatusWord & 8) != 0) {
      uVar1 = uVar1 | 4;
    }
    if ((in_FPUStatusWord & 0x10) != 0) {
      uVar1 = uVar1 | 2;
    }
    if ((in_FPUStatusWord & 0x20) != 0) {
      uVar1 = uVar1 | 1;
    }
    if ((in_FPUStatusWord & 2) != 0) {
      uVar1 = uVar1 | 0x80000;
    }
  }
  MXCSR = MXCSR & 0xffffffc0;
  return uVar1;
}


// ==== 10735a72 ___control87_2

/* Library Function - Single Match
    ___control87_2
   
   Library: Visual Studio 2005 Release */

int __cdecl ___control87_2(uint _NewValue,uint _Mask,uint *_X86_cw,uint *_Sse2_cw)

{
  uint uVar1;
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  ushort in_FPUControlWord;
  
  uVar3 = 0;
  if (_X86_cw != (uint *)0x0) {
    if ((in_FPUControlWord & 1) != 0) {
      uVar3 = 0x10;
    }
    if ((in_FPUControlWord & 4) != 0) {
      uVar3 = uVar3 | 8;
    }
    if ((in_FPUControlWord & 8) != 0) {
      uVar3 = uVar3 | 4;
    }
    if ((in_FPUControlWord & 0x10) != 0) {
      uVar3 = uVar3 | 2;
    }
    if ((in_FPUControlWord & 0x20) != 0) {
      uVar3 = uVar3 | 1;
    }
    if ((in_FPUControlWord & 2) != 0) {
      uVar3 = uVar3 | 0x80000;
    }
    uVar2 = in_FPUControlWord & 0xc00;
    if ((in_FPUControlWord & 0xc00) != 0) {
      if (uVar2 == 0x400) {
        uVar3 = uVar3 | 0x100;
      }
      else if (uVar2 == 0x800) {
        uVar3 = uVar3 | 0x200;
      }
      else if (uVar2 == 0xc00) {
        uVar3 = uVar3 | 0x300;
      }
    }
    if ((in_FPUControlWord & 0x300) == 0) {
      uVar3 = uVar3 | 0x20000;
    }
    else if ((in_FPUControlWord & 0x300) == 0x200) {
      uVar3 = uVar3 | 0x10000;
    }
    if ((in_FPUControlWord & 0x1000) != 0) {
      uVar3 = uVar3 | 0x40000;
    }
    uVar4 = ~_Mask & uVar3 | _NewValue & _Mask;
    if (uVar4 != uVar3) {
      uVar3 = __hw_cw();
      uVar4 = 0;
      if ((uVar3 & 1) != 0) {
        uVar4 = 0x10;
      }
      if ((uVar3 & 4) != 0) {
        uVar4 = uVar4 | 8;
      }
      if ((uVar3 & 8) != 0) {
        uVar4 = uVar4 | 4;
      }
      if ((uVar3 & 0x10) != 0) {
        uVar4 = uVar4 | 2;
      }
      if ((uVar3 & 0x20) != 0) {
        uVar4 = uVar4 | 1;
      }
      if ((uVar3 & 2) != 0) {
        uVar4 = uVar4 | 0x80000;
      }
      uVar1 = uVar3 & 0xc00;
      if (uVar1 != 0) {
        if (uVar1 == 0x400) {
          uVar4 = uVar4 | 0x100;
        }
        else if (uVar1 == 0x800) {
          uVar4 = uVar4 | 0x200;
        }
        else if (uVar1 == 0xc00) {
          uVar4 = uVar4 | 0x300;
        }
      }
      if ((uVar3 & 0x300) == 0) {
        uVar4 = uVar4 | 0x20000;
      }
      else if ((uVar3 & 0x300) == 0x200) {
        uVar4 = uVar4 | 0x10000;
      }
      if ((uVar3 & 0x1000) != 0) {
        uVar4 = uVar4 | 0x40000;
      }
    }
    *_X86_cw = uVar4;
  }
  if (_Sse2_cw != (uint *)0x0) {
    uVar3 = 0;
    if (DAT_1076cfb0 == 0) {
      *_Sse2_cw = 0;
    }
    else {
      if ((char)MXCSR < '\0') {
        uVar3 = 0x10;
      }
      if ((MXCSR & 0x200) != 0) {
        uVar3 = uVar3 | 8;
      }
      if ((MXCSR & 0x400) != 0) {
        uVar3 = uVar3 | 4;
      }
      if ((MXCSR & 0x800) != 0) {
        uVar3 = uVar3 | 2;
      }
      if ((MXCSR & 0x1000) != 0) {
        uVar3 = uVar3 | 1;
      }
      if ((MXCSR & 0x100) != 0) {
        uVar3 = uVar3 | 0x80000;
      }
      uVar4 = MXCSR & 0x6000;
      if (uVar4 != 0) {
        if (uVar4 == 0x2000) {
          uVar3 = uVar3 | 0x100;
        }
        else if (uVar4 == 0x4000) {
          uVar3 = uVar3 | 0x200;
        }
        else if (uVar4 == 0x6000) {
          uVar3 = uVar3 | 0x300;
        }
      }
      uVar1 = MXCSR & 0x8040;
      if (uVar1 == 0x40) {
        uVar3 = uVar3 | 0x2000000;
      }
      else if (uVar1 == 0x8000) {
        uVar3 = uVar3 | 0x3000000;
      }
      else if (uVar1 == 0x8040) {
        uVar3 = uVar3 | 0x1000000;
      }
      uVar1 = ~(_Mask & 0x308031f) & uVar3 | _Mask & 0x308031f & _NewValue;
      if (uVar1 != uVar3) {
        uVar3 = ___hw_cw_sse2(uVar4,uVar1);
        ___set_fpsr_sse2(uVar3);
        uVar3 = 0;
        if ((char)MXCSR < '\0') {
          uVar3 = 0x10;
        }
        if ((MXCSR & 0x200) != 0) {
          uVar3 = uVar3 | 8;
        }
        if ((MXCSR & 0x400) != 0) {
          uVar3 = uVar3 | 4;
        }
        if ((MXCSR & 0x800) != 0) {
          uVar3 = uVar3 | 2;
        }
        if ((MXCSR & 0x1000) != 0) {
          uVar3 = uVar3 | 1;
        }
        if ((MXCSR & 0x100) != 0) {
          uVar3 = uVar3 | 0x80000;
        }
        uVar4 = MXCSR & 0x6000;
        if (uVar4 != 0) {
          if (uVar4 == 0x2000) {
            uVar3 = uVar3 | 0x100;
          }
          else if (uVar4 == 0x4000) {
            uVar3 = uVar3 | 0x200;
          }
          else if (uVar4 == 0x6000) {
            uVar3 = uVar3 | 0x300;
          }
        }
        uVar4 = MXCSR & 0x8040;
        if (uVar4 == 0x40) {
          uVar3 = uVar3 | 0x2000000;
        }
        else if (uVar4 == 0x8000) {
          uVar3 = uVar3 | 0x3000000;
        }
        else if (uVar4 == 0x8040) {
          uVar3 = uVar3 | 0x1000000;
        }
      }
      *_Sse2_cw = uVar3;
    }
  }
  return 1;
}


// ==== 10735d7c __control87

/* Library Function - Single Match
    __control87
   
   Library: Visual Studio 2005 Release */

uint __cdecl __control87(uint _NewValue,uint _Mask)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  ushort in_FPUControlWord;
  
  uVar5 = 0;
  if ((in_FPUControlWord & 1) != 0) {
    uVar5 = 0x10;
  }
  if ((in_FPUControlWord & 4) != 0) {
    uVar5 = uVar5 | 8;
  }
  if ((in_FPUControlWord & 8) != 0) {
    uVar5 = uVar5 | 4;
  }
  if ((in_FPUControlWord & 0x10) != 0) {
    uVar5 = uVar5 | 2;
  }
  if ((in_FPUControlWord & 0x20) != 0) {
    uVar5 = uVar5 | 1;
  }
  if ((in_FPUControlWord & 2) != 0) {
    uVar5 = uVar5 | 0x80000;
  }
  uVar1 = in_FPUControlWord & 0xc00;
  if ((in_FPUControlWord & 0xc00) != 0) {
    if (uVar1 == 0x400) {
      uVar5 = uVar5 | 0x100;
    }
    else if (uVar1 == 0x800) {
      uVar5 = uVar5 | 0x200;
    }
    else if (uVar1 == 0xc00) {
      uVar5 = uVar5 | 0x300;
    }
  }
  if ((in_FPUControlWord & 0x300) == 0) {
    uVar5 = uVar5 | 0x20000;
  }
  else if ((in_FPUControlWord & 0x300) == 0x200) {
    uVar5 = uVar5 | 0x10000;
  }
  if ((in_FPUControlWord & 0x1000) != 0) {
    uVar5 = uVar5 | 0x40000;
  }
  uVar2 = ~_Mask & uVar5 | _NewValue & _Mask;
  if (uVar2 != uVar5) {
    uVar5 = __hw_cw();
    uVar2 = 0;
    if ((uVar5 & 1) != 0) {
      uVar2 = 0x10;
    }
    if ((uVar5 & 4) != 0) {
      uVar2 = uVar2 | 8;
    }
    if ((uVar5 & 8) != 0) {
      uVar2 = uVar2 | 4;
    }
    if ((uVar5 & 0x10) != 0) {
      uVar2 = uVar2 | 2;
    }
    if ((uVar5 & 0x20) != 0) {
      uVar2 = uVar2 | 1;
    }
    if ((uVar5 & 2) != 0) {
      uVar2 = uVar2 | 0x80000;
    }
    uVar3 = uVar5 & 0xc00;
    if (uVar3 != 0) {
      if (uVar3 == 0x400) {
        uVar2 = uVar2 | 0x100;
      }
      else if (uVar3 == 0x800) {
        uVar2 = uVar2 | 0x200;
      }
      else if (uVar3 == 0xc00) {
        uVar2 = uVar2 | 0x300;
      }
    }
    if ((uVar5 & 0x300) == 0) {
      uVar2 = uVar2 | 0x20000;
    }
    else if ((uVar5 & 0x300) == 0x200) {
      uVar2 = uVar2 | 0x10000;
    }
    if ((uVar5 & 0x1000) != 0) {
      uVar2 = uVar2 | 0x40000;
    }
  }
  if (DAT_1076cfb0 != 0) {
    uVar5 = 0;
    if ((char)MXCSR < '\0') {
      uVar5 = 0x10;
    }
    if ((MXCSR & 0x200) != 0) {
      uVar5 = uVar5 | 8;
    }
    if ((MXCSR & 0x400) != 0) {
      uVar5 = uVar5 | 4;
    }
    if ((MXCSR & 0x800) != 0) {
      uVar5 = uVar5 | 2;
    }
    if ((MXCSR & 0x1000) != 0) {
      uVar5 = uVar5 | 1;
    }
    if ((MXCSR & 0x100) != 0) {
      uVar5 = uVar5 | 0x80000;
    }
    uVar3 = MXCSR & 0x6000;
    if (uVar3 != 0) {
      if (uVar3 == 0x2000) {
        uVar5 = uVar5 | 0x100;
      }
      else if (uVar3 == 0x4000) {
        uVar5 = uVar5 | 0x200;
      }
      else if (uVar3 == 0x6000) {
        uVar5 = uVar5 | 0x300;
      }
    }
    uVar4 = MXCSR & 0x8040;
    if (uVar4 == 0x40) {
      uVar5 = uVar5 | 0x2000000;
    }
    else if (uVar4 == 0x8000) {
      uVar5 = uVar5 | 0x3000000;
    }
    else if (uVar4 == 0x8040) {
      uVar5 = uVar5 | 0x1000000;
    }
    uVar4 = ~(_Mask & 0x308031f) & uVar5 | _Mask & 0x308031f & _NewValue;
    if (uVar4 != uVar5) {
      uVar5 = ___hw_cw_sse2(uVar3,uVar4);
      ___set_fpsr_sse2(uVar5);
      uVar5 = 0;
      if ((char)MXCSR < '\0') {
        uVar5 = 0x10;
      }
      if ((MXCSR & 0x200) != 0) {
        uVar5 = uVar5 | 8;
      }
      if ((MXCSR & 0x400) != 0) {
        uVar5 = uVar5 | 4;
      }
      if ((MXCSR & 0x800) != 0) {
        uVar5 = uVar5 | 2;
      }
      if ((MXCSR & 0x1000) != 0) {
        uVar5 = uVar5 | 1;
      }
      if ((MXCSR & 0x100) != 0) {
        uVar5 = uVar5 | 0x80000;
      }
      uVar3 = MXCSR & 0x6000;
      if (uVar3 != 0) {
        if (uVar3 == 0x2000) {
          uVar5 = uVar5 | 0x100;
        }
        else if (uVar3 == 0x4000) {
          uVar5 = uVar5 | 0x200;
        }
        else if (uVar3 == 0x6000) {
          uVar5 = uVar5 | 0x300;
        }
      }
      uVar3 = MXCSR & 0x8040;
      if (uVar3 == 0x40) {
        uVar5 = uVar5 | 0x2000000;
      }
      else if (uVar3 == 0x8000) {
        uVar5 = uVar5 | 0x3000000;
      }
      else if (uVar3 == 0x8040) {
        uVar5 = uVar5 | 0x1000000;
      }
    }
    uVar3 = uVar5 ^ uVar2;
    uVar2 = uVar5 | uVar2;
    if ((uVar3 & 0x8031f) != 0) {
      uVar2 = uVar2 | 0x80000000;
    }
  }
  return uVar2;
}


// ==== 10736390 __aulldvrm

/* Library Function - Single Match
    __aulldvrm
   
   Library: Visual Studio 2005 Release */

undefined8 __aulldvrm(uint param_1,uint param_2,uint param_3,uint param_4)

{
  ulonglong uVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar6;
  
  uVar9 = param_1;
  uVar6 = param_4;
  uVar7 = param_2;
  uVar3 = param_3;
  if (param_4 == 0) {
    uVar3 = param_2 / param_3;
    iVar4 = (int)(((ulonglong)param_2 % (ulonglong)param_3 << 0x20 | (ulonglong)param_1) /
                 (ulonglong)param_3);
  }
  else {
    do {
      uVar5 = uVar6 >> 1;
      uVar3 = (uint)(CONCAT14((uVar6 & 1) != 0,uVar3) >> 1);
      uVar8 = uVar7 >> 1;
      uVar9 = (uint)(CONCAT14((uVar7 & 1) != 0,uVar9) >> 1);
      uVar6 = uVar5;
      uVar7 = uVar8;
    } while (uVar5 != 0);
    uVar1 = CONCAT44(uVar8,uVar9) / (ulonglong)uVar3;
    iVar4 = (int)uVar1;
    lVar2 = (ulonglong)param_3 * (uVar1 & 0xffffffff);
    uVar3 = (uint)((ulonglong)lVar2 >> 0x20);
    uVar9 = uVar3 + iVar4 * param_4;
    if (((CARRY4(uVar3,iVar4 * param_4)) || (param_2 < uVar9)) ||
       ((param_2 <= uVar9 && (param_1 < (uint)lVar2)))) {
      iVar4 = iVar4 + -1;
    }
    uVar3 = 0;
  }
  return CONCAT44(uVar3,iVar4);
}


// ==== 10736430 __allmul

/* Library Function - Single Match
    __allmul
   
   Library: Visual Studio 2005 Release */

longlong __allmul(uint param_1,int param_2,uint param_3,int param_4)

{
  if (param_4 == 0 && param_2 == 0) {
    return (ulonglong)param_1 * (ulonglong)param_3;
  }
  return CONCAT44((int)((ulonglong)param_1 * (ulonglong)param_3 >> 0x20) +
                  param_2 * param_3 + param_1 * param_4,
                  (int)((ulonglong)param_1 * (ulonglong)param_3));
}


// ==== 10736464 _atol

/* Library Function - Single Match
    _atol
   
   Library: Visual Studio 2005 Release */

long __cdecl _atol(char *_Str)

{
  long lVar1;
  
  lVar1 = _strtol(_Str,(char **)0x0,10);
  return lVar1;
}


// ==== 107364ba ___ansicp

/* Library Function - Single Match
    ___ansicp
   
   Library: Visual Studio 2005 Release */

void __cdecl ___ansicp(LCID param_1)

{
  int iVar1;
  CHAR local_10 [6];
  undefined1 local_a;
  uint local_8;
  
  local_8 = DAT_10765c70 ^ (uint)&stack0xfffffffc;
  local_a = 0;
  iVar1 = GetLocaleInfoA(param_1,0x1004,local_10,6);
  if (iVar1 != 0) {
    _atol(local_10);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


// ==== 10736501 ___convertcp

/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */
/* Library Function - Single Match
    ___convertcp
   
   Library: Visual Studio 2005 Release */

void __cdecl
___convertcp(UINT param_1,UINT param_2,char *param_3,uint *param_4,LPSTR param_5,int param_6)

{
  uint _Size;
  uint cbMultiByte;
  bool bVar1;
  BOOL BVar2;
  size_t sVar3;
  undefined4 *puVar4;
  int iVar5;
  LPSTR lpMultiByteStr;
  uint uVar6;
  bool bVar7;
  LPCWSTR local_20;
  _cpinfo local_1c;
  uint local_8;
  
  local_8 = DAT_10765c70 ^ (uint)&stack0xfffffffc;
  cbMultiByte = *param_4;
  bVar1 = false;
  if (param_1 == param_2) goto LAB_107366a1;
  BVar2 = GetCPInfo(param_1,&local_1c);
  if ((((BVar2 == 0) || (local_1c.MaxCharSize != 1)) ||
      (BVar2 = GetCPInfo(param_2,&local_1c), BVar2 == 0)) || (local_1c.MaxCharSize != 1)) {
    uVar6 = MultiByteToWideChar(param_1,1,param_3,cbMultiByte,(LPWSTR)0x0,0);
    bVar7 = false;
    if (uVar6 == 0) goto LAB_107366a1;
  }
  else {
    bVar1 = true;
    uVar6 = cbMultiByte;
    if (cbMultiByte == 0xffffffff) {
      sVar3 = _strlen(param_3);
      uVar6 = sVar3 + 1;
    }
    bVar7 = uVar6 == 0;
  }
  if ((bVar7 || (int)uVar6 < 0) || (0x7ffffff0 < uVar6)) {
    local_20 = (LPCWSTR)0x0;
  }
  else {
    _Size = uVar6 * 2 + 8;
    if (_Size < 0x401) {
      puVar4 = (undefined4 *)&stack0xffffffbc;
      local_20 = (LPCWSTR)&stack0xffffffbc;
      if (&stack0x00000000 != (undefined1 *)0x44) {
LAB_107365e1:
        local_20 = (LPCWSTR)(puVar4 + 2);
      }
    }
    else {
      puVar4 = _malloc(_Size);
      local_20 = (LPCWSTR)0x0;
      if (puVar4 != (undefined4 *)0x0) {
        *puVar4 = 0xdddd;
        goto LAB_107365e1;
      }
    }
  }
  if (local_20 != (LPCWSTR)0x0) {
    _memset(local_20,0,uVar6 * 2);
    iVar5 = MultiByteToWideChar(param_1,1,param_3,cbMultiByte,local_20,uVar6);
    if (iVar5 != 0) {
      if (param_5 == (LPSTR)0x0) {
        if (((bVar1) ||
            (uVar6 = WideCharToMultiByte(param_2,0,local_20,uVar6,(LPSTR)0x0,0,(LPCSTR)0x0,
                                         (LPBOOL)0x0), uVar6 != 0)) &&
           (lpMultiByteStr = __calloc_crt(1,uVar6), lpMultiByteStr != (LPSTR)0x0)) {
          uVar6 = WideCharToMultiByte(param_2,0,local_20,uVar6,lpMultiByteStr,uVar6,(LPCSTR)0x0,
                                      (LPBOOL)0x0);
          if (uVar6 == 0) {
            _free(lpMultiByteStr);
          }
          else if (cbMultiByte != 0xffffffff) {
            *param_4 = uVar6;
          }
        }
      }
      else {
        WideCharToMultiByte(param_2,0,local_20,uVar6,param_5,param_6,(LPCSTR)0x0,(LPBOOL)0x0);
      }
    }
    __freea(local_20);
  }
LAB_107366a1:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


// ==== 107366b3 __get_daylight

/* Library Function - Single Match
    __get_daylight
   
   Library: Visual Studio 2005 Release */

errno_t __cdecl __get_daylight(int *_Daylight)

{
  undefined4 *puVar1;
  
  if (_Daylight == (int *)0x0) {
    puVar1 = (undefined4 *)FUN_10724278();
    *puVar1 = 0x16;
    FUN_10723411((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    return 0x16;
  }
  *_Daylight = DAT_10766914;
  return 0;
}


// ==== 107366e7 __get_dstbias

/* Library Function - Single Match
    __get_dstbias
   
   Library: Visual Studio 2005 Release */

errno_t __cdecl __get_dstbias(long *_Daylight_savings_bias)

{
  undefined4 *puVar1;
  
  if (_Daylight_savings_bias == (long *)0x0) {
    puVar1 = (undefined4 *)FUN_10724278();
    *puVar1 = 0x16;
    FUN_10723411((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    return 0x16;
  }
  *_Daylight_savings_bias = DAT_10766918;
  return 0;
}


// ==== 1073671b FUN_1073671b

undefined4 __cdecl FUN_1073671b(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  if (param_1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)FUN_10724278();
    *puVar1 = 0x16;
    FUN_10723411((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    return 0x16;
  }
  *param_1 = DAT_10766910;
  return 0;
}


// ==== 1073674f __get_tzname

/* Library Function - Single Match
    __get_tzname
   
   Library: Visual Studio 2005 Release */

errno_t __cdecl __get_tzname(size_t *_ReturnValue,char *_Buffer,size_t _SizeInBytes,int _Index)

{
  undefined4 *puVar1;
  size_t sVar2;
  errno_t eVar3;
  
  if (_Buffer == (char *)0x0) {
    if (_SizeInBytes != 0) goto LAB_1073679c;
  }
  else if (_SizeInBytes == 0) {
LAB_1073679c:
    puVar1 = (undefined4 *)FUN_10724278();
    *puVar1 = 0x16;
    FUN_10723411((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    return 0x16;
  }
  if (_Buffer != (char *)0x0) {
    *_Buffer = '\0';
  }
  if ((_ReturnValue == (size_t *)0x0) || ((_Index != 0 && (_Index != 1)))) {
    puVar1 = (undefined4 *)FUN_10724278();
    eVar3 = 0x16;
    *puVar1 = 0x16;
    FUN_10723411((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  }
  else {
    sVar2 = _strlen((&PTR_DAT_107669a0)[_Index]);
    *_ReturnValue = sVar2 + 1;
    if (_Buffer == (char *)0x0) {
      eVar3 = 0;
    }
    else if (_SizeInBytes < sVar2 + 1) {
      eVar3 = 0x22;
    }
    else {
      eVar3 = _strcpy_s(_Buffer,_SizeInBytes,(&PTR_DAT_107669a0)[_Index]);
    }
  }
  return eVar3;
}


// ==== 107367f1 FUN_107367f1

undefined4 * FUN_107367f1(void)

{
  return &DAT_10766914;
}


// ==== 107367f7 FUN_107367f7

undefined4 * FUN_107367f7(void)

{
  return &DAT_10766918;
}


// ==== 107367fd FUN_107367fd

undefined4 * FUN_107367fd(void)

{
  return &DAT_10766910;
}


// ==== 10736803 FUN_10736803

undefined ** FUN_10736803(void)

{
  return &PTR_DAT_107669a0;
}


// ==== 1073682d FUN_1073682d

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */

void FUN_1073682d(void)

{
  char cVar1;
  char cVar2;
  undefined **ppuVar3;
  int iVar4;
  int iVar5;
  errno_t eVar6;
  UINT CodePage;
  char *_Str1;
  size_t sVar7;
  DWORD DVar8;
  int *piVar9;
  long lVar10;
  char *pcVar11;
  int local_34;
  int local_30;
  long local_2c;
  int local_28;
  undefined **local_24;
  int local_20 [5];
  undefined4 uStack_c;
  undefined *local_8;
  
  local_8 = &DAT_1075ca80;
  uStack_c = 0x10736839;
  local_30 = 0;
  local_20[0] = 0;
  local_28 = 0;
  local_2c = 0;
  local_24 = (undefined **)0x0;
  __lock(7);
  local_8 = (undefined *)0x0;
  local_24 = FUN_10736803();
  iVar5 = FUN_1073671b(local_20);
  if (iVar5 != 0) {
                    /* WARNING: Subroutine does not return */
    __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  }
  eVar6 = __get_daylight(&local_28);
  if (eVar6 != 0) {
                    /* WARNING: Subroutine does not return */
    __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  }
  eVar6 = __get_dstbias(&local_2c);
  if (eVar6 != 0) {
                    /* WARNING: Subroutine does not return */
    __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  }
  CodePage = ____lc_codepage_func();
  DAT_1076cdd4 = 0;
  DAT_107669b4 = 0xffffffff;
  DAT_107669a8 = 0xffffffff;
  _Str1 = __getenv_helper_nolock("TZ");
  if ((_Str1 == (char *)0x0) || (*_Str1 == '\0')) {
    if (DAT_1076cdd8 != (char *)0x0) {
      _free(DAT_1076cdd8);
      DAT_1076cdd8 = (char *)0x0;
    }
    DVar8 = GetTimeZoneInformation((LPTIME_ZONE_INFORMATION)&DAT_1076cd28);
    if (DVar8 != 0xffffffff) {
      DAT_1076cdd4 = 1;
      local_20[0] = DAT_1076cd28 * 0x3c;
      if (DAT_1076cd6e != 0) {
        local_20[0] = local_20[0] + DAT_1076cd7c * 0x3c;
      }
      if ((DAT_1076cdc2 == 0) || (DAT_1076cdd0 == 0)) {
        local_28 = 0;
        local_2c = 0;
      }
      else {
        local_28 = 1;
        local_2c = (DAT_1076cdd0 - DAT_1076cd7c) * 0x3c;
      }
      iVar5 = WideCharToMultiByte(CodePage,0,(LPCWSTR)&DAT_1076cd2c,-1,*local_24,0x3f,(LPCSTR)0x0,
                                  &local_34);
      if ((iVar5 == 0) || (local_34 != 0)) {
        **local_24 = 0;
      }
      else {
        (*local_24)[0x3f] = 0;
      }
      iVar5 = WideCharToMultiByte(CodePage,0,(LPCWSTR)&DAT_1076cd80,-1,local_24[1],0x3f,(LPCSTR)0x0,
                                  &local_34);
      if ((iVar5 == 0) || (local_34 != 0)) {
        *local_24[1] = 0;
      }
      else {
        local_24[1][0x3f] = 0;
      }
    }
  }
  else {
    if (DAT_1076cdd8 != (char *)0x0) {
      iVar5 = _strcmp(_Str1,DAT_1076cdd8);
      if (iVar5 == 0) goto LAB_10736a49;
      if (DAT_1076cdd8 != (char *)0x0) {
        _free(DAT_1076cdd8);
      }
    }
    sVar7 = _strlen(_Str1);
    DAT_1076cdd8 = __malloc_crt(sVar7 + 1);
    if (DAT_1076cdd8 != (char *)0x0) {
      pcVar11 = _Str1;
      sVar7 = _strlen(_Str1);
      eVar6 = _strcpy_s(DAT_1076cdd8,sVar7 + 1,pcVar11);
      if (eVar6 != 0) {
                    /* WARNING: Subroutine does not return */
        __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      goto LAB_10736a50;
    }
  }
LAB_10736a49:
  local_30 = 1;
LAB_10736a50:
  iVar4 = local_20[0];
  piVar9 = FUN_107367fd();
  iVar5 = local_28;
  *piVar9 = iVar4;
  piVar9 = FUN_107367f1();
  lVar10 = local_2c;
  *piVar9 = iVar5;
  piVar9 = FUN_107367f7();
  *piVar9 = lVar10;
  local_8 = (undefined *)0xfffffffe;
  FUN_10736adc();
  ppuVar3 = local_24;
  if (local_30 == 0) {
    eVar6 = _strncpy_s(*local_24,0x40,_Str1,3);
    if (eVar6 != 0) {
                    /* WARNING: Subroutine does not return */
      __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    pcVar11 = _Str1 + 3;
    cVar1 = *pcVar11;
    if (cVar1 == '-') {
      pcVar11 = _Str1 + 4;
    }
    lVar10 = _atol(pcVar11);
    local_20[0] = lVar10 * 0xe10;
    for (; (cVar2 = *pcVar11, cVar2 == '+' || (('/' < cVar2 && (cVar2 < ':'))));
        pcVar11 = pcVar11 + 1) {
    }
    if (*pcVar11 == ':') {
      pcVar11 = pcVar11 + 1;
      lVar10 = _atol(pcVar11);
      local_20[0] = local_20[0] + lVar10 * 0x3c;
      for (; ('/' < *pcVar11 && (*pcVar11 < ':')); pcVar11 = pcVar11 + 1) {
      }
      if (*pcVar11 == ':') {
        pcVar11 = pcVar11 + 1;
        lVar10 = _atol(pcVar11);
        local_20[0] = local_20[0] + lVar10;
        for (; ('/' < *pcVar11 && (*pcVar11 < ':')); pcVar11 = pcVar11 + 1) {
        }
      }
    }
    if (cVar1 == '-') {
      local_20[0] = -local_20[0];
    }
    local_28 = (int)*pcVar11;
    if (local_28 == 0) {
      *ppuVar3[1] = 0;
    }
    else {
      eVar6 = _strncpy_s(ppuVar3[1],0x40,pcVar11,3);
      if (eVar6 != 0) {
                    /* WARNING: Subroutine does not return */
        __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    iVar4 = local_20[0];
    piVar9 = FUN_107367fd();
    iVar5 = local_28;
    *piVar9 = iVar4;
    piVar9 = FUN_107367f1();
    *piVar9 = iVar5;
  }
  return;
}


// ==== 10736adc FUN_10736adc

void FUN_10736adc(void)

{
  FUN_10724ccf(7);
  return;
}


// ==== 10736b76 cvtdate

/* Library Function - Single Match
    _cvtdate
   
   Library: Visual Studio 2005 Release */

int __cdecl
cvtdate(int param_1,int param_2,uint param_3,int param_4,int param_5,int param_6,int param_7,
       int param_8,int param_9)

{
  int in_EAX;
  uint uVar1;
  int iVar2;
  errno_t eVar3;
  int in_ECX;
  int iVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  long local_8;
  
  local_8 = 0;
  if (param_2 == 1) {
    uVar1 = param_3 & 0x80000003;
    if ((int)uVar1 < 0) {
      uVar1 = (uVar1 - 1 | 0xfffffffc) + 1;
    }
    if (((uVar1 == 0) && ((int)param_3 % 100 != 0)) || ((int)(param_3 + 0x76c) % 400 == 0)) {
      iVar4 = (&DAT_10766c94)[in_EAX];
    }
    else {
      iVar4 = *(int *)(&DAT_10766cc8 + in_EAX * 4);
    }
    iVar6 = iVar4 + 1;
    iVar5 = (int)(param_3 * 0x16d + -0x63db +
                 ((int)((param_3 - 1) + ((int)(param_3 - 1) >> 0x1f & 3U)) >> 2) + iVar6 +
                 ((int)(param_3 + 299) / 400 - (int)(param_3 - 1) / 100)) % 7;
    iVar2 = (param_4 * 7 - iVar5) + param_5;
    if (iVar5 <= param_5) {
      iVar6 = iVar4 + -6;
    }
    iVar6 = iVar6 + iVar2;
    if (param_4 == 5) {
      if (((uVar1 == 0) && ((int)param_3 % 100 != 0)) || ((int)(param_3 + 0x76c) % 400 == 0)) {
        iVar2 = *(int *)(&DAT_10766c98 + in_EAX * 4);
      }
      else {
        iVar2 = *(int *)(&DAT_10766ccc + in_EAX * 4);
      }
      if (iVar2 < iVar6) {
        iVar6 = iVar6 + -7;
      }
    }
  }
  else {
    uVar1 = param_3 & 0x80000003;
    bVar7 = uVar1 == 0;
    if ((int)uVar1 < 0) {
      bVar7 = (uVar1 - 1 | 0xfffffffc) == 0xffffffff;
    }
    if (((bVar7) && (iVar2 = (int)param_3 / 100, (int)param_3 % 100 != 0)) ||
       (iVar2 = (int)(param_3 + 0x76c) / 400, (int)(param_3 + 0x76c) % 400 == 0)) {
      iVar6 = (&DAT_10766c94)[in_EAX];
    }
    else {
      iVar6 = *(int *)(&DAT_10766cc8 + in_EAX * 4);
    }
    iVar6 = iVar6 + param_6;
  }
  iVar4 = ((in_ECX * 0x3c + param_7) * 0x3c + param_8) * 1000 + param_9;
  if (param_1 == 1) {
    DAT_107669a8 = param_3;
    DAT_107669ac = iVar6;
    DAT_107669b0 = iVar4;
  }
  else {
    DAT_107669b8 = iVar6;
    DAT_107669bc = iVar4;
    eVar3 = __get_dstbias(&local_8);
    if (eVar3 != 0) {
                    /* WARNING: Subroutine does not return */
      __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    iVar2 = local_8 * 1000;
    DAT_107669bc = DAT_107669bc + iVar2;
    if (DAT_107669bc < 0) {
      DAT_107669bc = DAT_107669bc + 86400000;
      DAT_107669b8 = DAT_107669b8 + -1;
    }
    else {
      iVar2 = 86400000;
      if (86399999 < DAT_107669bc) {
        DAT_107669bc = DAT_107669bc + -86400000;
        DAT_107669b8 = DAT_107669b8 + 1;
      }
    }
    DAT_107669b4 = param_3;
  }
  return iVar2;
}


// ==== 10736d6b __isindst_nolock

/* Library Function - Single Match
    __isindst_nolock
   
   Library: Visual Studio 2005 Release */

bool __isindst_nolock(void)

{
  int iVar1;
  bool bVar2;
  errno_t eVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int *unaff_EDI;
  uint uVar7;
  uint uVar8;
  int local_8;
  
  local_8 = 0;
  eVar3 = __get_daylight(&local_8);
  if (eVar3 != 0) {
                    /* WARNING: Subroutine does not return */
    __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  }
  if (local_8 == 0) {
    return false;
  }
  uVar7 = unaff_EDI[5];
  if ((uVar7 != DAT_107669a8) || (uVar7 != DAT_107669b4)) {
    if (DAT_1076cdd4 == 0) {
      cvtdate(1,1,uVar7,1,0,0,0,0,0);
      cvtdate(0,1,unaff_EDI[5],5,0,0,0,0,0);
    }
    else {
      if (DAT_1076cdc0 != 0) {
        uVar8 = (uint)DAT_1076cdc6;
        uVar4 = 0;
        uVar5 = 0;
      }
      else {
        uVar4 = (uint)DAT_1076cdc4;
        uVar8 = 0;
        uVar5 = (uint)DAT_1076cdc6;
      }
      cvtdate(1,(uint)(DAT_1076cdc0 == 0),uVar7,uVar5,uVar4,uVar8,(uint)DAT_1076cdca,
              (uint)DAT_1076cdcc,(uint)DAT_1076cdce);
      if (DAT_1076cd6c != 0) {
        uVar8 = (uint)DAT_1076cd72;
        uVar4 = 0;
        uVar5 = 0;
        uVar7 = unaff_EDI[5];
      }
      else {
        uVar4 = (uint)DAT_1076cd70;
        uVar8 = 0;
        uVar5 = (uint)DAT_1076cd72;
        uVar7 = unaff_EDI[5];
      }
      cvtdate(0,(uint)(DAT_1076cd6c == 0),uVar7,uVar5,uVar4,uVar8,(uint)DAT_1076cd76,
              (uint)DAT_1076cd78,(uint)DAT_1076cd7a);
    }
  }
  iVar1 = unaff_EDI[7];
  if (DAT_107669ac < DAT_107669b8) {
    if ((iVar1 < DAT_107669ac) || (DAT_107669b8 < iVar1)) {
      return false;
    }
    if ((DAT_107669ac < iVar1) && (iVar1 < DAT_107669b8)) {
      return true;
    }
  }
  else {
    if (iVar1 < DAT_107669b8) {
      return true;
    }
    if (DAT_107669ac < iVar1) {
      return true;
    }
    if ((DAT_107669b8 < iVar1) && (iVar1 < DAT_107669ac)) {
      return false;
    }
  }
  iVar6 = ((unaff_EDI[2] * 0x3c + unaff_EDI[1]) * 0x3c + *unaff_EDI) * 1000;
  if (iVar1 == DAT_107669ac) {
    bVar2 = DAT_107669b0 <= iVar6;
  }
  else {
    bVar2 = iVar6 < DAT_107669bc;
  }
  return bVar2;
}


// ==== 10736f19 ___tzset

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    ___tzset
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release, Visual Studio 2010 Release */

void __cdecl ___tzset(void)

{
  if (DAT_1076cddc == 0) {
    __lock(6);
    if (DAT_1076cddc == 0) {
      FUN_1073682d();
      DAT_1076cddc = DAT_1076cddc + 1;
    }
    FUN_10736f5f();
  }
  return;
}


// ==== 10736f5f FUN_10736f5f

void FUN_10736f5f(void)

{
  FUN_10724ccf(6);
  return;
}


// ==== 10736fe1 ___ascii_stricmp

/* Library Function - Single Match
    ___ascii_stricmp
   
   Library: Visual Studio 2005 Release */

int __cdecl ___ascii_stricmp(char *_Str1,char *_Str2)

{
  uint uVar1;
  uint uVar2;
  
  do {
    uVar1 = (uint)(byte)*_Str1;
    _Str1 = _Str1 + 1;
    if (uVar1 - 0x41 < 0x1a) {
      uVar1 = uVar1 + 0x20;
    }
    uVar2 = (uint)(byte)*_Str2;
    _Str2 = _Str2 + 1;
    if (uVar2 - 0x41 < 0x1a) {
      uVar2 = uVar2 + 0x20;
    }
  } while ((uVar1 != 0) && (uVar1 == uVar2));
  return uVar1 - uVar2;
}


// ==== 10737016 __stricmp_l

/* Library Function - Single Match
    __stricmp_l
   
   Library: Visual Studio 2005 Release */

int __cdecl __stricmp_l(char *_Str1,char *_Str2,_locale_t _Locale)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  localeinfo_struct local_14;
  int local_c;
  char local_8;
  
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_14,_Locale);
  if (_Str1 == (char *)0x0) {
    puVar1 = (undefined4 *)FUN_10724278();
    *puVar1 = 0x16;
    FUN_10723411((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    if (local_8 != '\0') {
      *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
    }
    iVar2 = 0x7fffffff;
  }
  else if (_Str2 == (char *)0x0) {
    puVar1 = (undefined4 *)FUN_10724278();
    *puVar1 = 0x16;
    FUN_10723411((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    if (local_8 != '\0') {
      *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
    }
    iVar2 = 0x7fffffff;
  }
  else {
    if ((local_14.locinfo)->lc_category[0].wlocale == (wchar_t *)0x0) {
      iVar2 = ___ascii_stricmp(_Str1,_Str2);
    }
    else {
      do {
        iVar2 = __tolower_l((uint)(byte)*_Str1,&local_14);
        _Str1 = _Str1 + 1;
        iVar3 = __tolower_l((uint)(byte)*_Str2,&local_14);
        _Str2 = _Str2 + 1;
        if (iVar2 == 0) break;
      } while (iVar2 == iVar3);
      iVar2 = iVar2 - iVar3;
    }
    if (local_8 != '\0') {
      *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
    }
  }
  return iVar2;
}


// ==== 107370e9 __stricmp

/* Library Function - Single Match
    __stricmp
   
   Library: Visual Studio 2005 Release */

int __cdecl __stricmp(char *_Str1,char *_Str2)

{
  undefined4 *puVar1;
  int iVar2;
  
  if (DAT_1076c7f4 == 0) {
    if ((_Str1 != (char *)0x0) && (_Str2 != (char *)0x0)) {
      iVar2 = ___ascii_stricmp(_Str1,_Str2);
      return iVar2;
    }
    puVar1 = (undefined4 *)FUN_10724278();
    *puVar1 = 0x16;
    FUN_10723411((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    iVar2 = 0x7fffffff;
  }
  else {
    iVar2 = __stricmp_l(_Str1,_Str2,(_locale_t)0x0);
  }
  return iVar2;
}


// ==== 10737139 __strnicmp_l

/* Library Function - Single Match
    __strnicmp_l
   
   Library: Visual Studio 2005 Release */

int __cdecl __strnicmp_l(char *_Str1,char *_Str2,size_t _MaxCount,_locale_t _Locale)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  localeinfo_struct local_14;
  int local_c;
  char local_8;
  
  if (_MaxCount == 0) {
    iVar2 = 0;
  }
  else {
    _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_14,_Locale);
    if ((_Str1 == (char *)0x0) || (_Str2 == (char *)0x0)) {
      puVar1 = (undefined4 *)FUN_10724278();
      *puVar1 = 0x16;
      FUN_10723411((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      if (local_8 != '\0') {
        *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
      }
      iVar2 = 0x7fffffff;
    }
    else if (_MaxCount < 0x80000000) {
      if ((local_14.locinfo)->lc_category[0].wlocale == (wchar_t *)0x0) {
        iVar2 = ___ascii_strnicmp(_Str1,_Str2,_MaxCount);
      }
      else {
        do {
          iVar2 = __tolower_l((uint)(byte)*_Str1,&local_14);
          _Str1 = _Str1 + 1;
          iVar3 = __tolower_l((uint)(byte)*_Str2,&local_14);
          _Str2 = _Str2 + 1;
          _MaxCount = _MaxCount - 1;
          if ((_MaxCount == 0) || (iVar2 == 0)) break;
        } while (iVar2 == iVar3);
        iVar2 = iVar2 - iVar3;
      }
      if (local_8 != '\0') {
        *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
      }
    }
    else {
      puVar1 = (undefined4 *)FUN_10724278();
      *puVar1 = 0x16;
      FUN_10723411((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      if (local_8 != '\0') {
        *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
      }
      iVar2 = 0x7fffffff;
    }
  }
  return iVar2;
}


// ==== 10737229 __strnicmp

/* Library Function - Single Match
    __strnicmp
   
   Library: Visual Studio 2005 Release */

int __cdecl __strnicmp(char *_Str1,char *_Str2,size_t _MaxCount)

{
  undefined4 *puVar1;
  int iVar2;
  
  if (DAT_1076c7f4 == 0) {
    if (((_Str1 != (char *)0x0) && (_Str2 != (char *)0x0)) && (_MaxCount < 0x80000000)) {
      iVar2 = ___ascii_strnicmp(_Str1,_Str2,_MaxCount);
      return iVar2;
    }
    puVar1 = (undefined4 *)FUN_10724278();
    *puVar1 = 0x16;
    FUN_10723411((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    iVar2 = 0x7fffffff;
  }
  else {
    iVar2 = __strnicmp_l(_Str1,_Str2,_MaxCount,(_locale_t)0x0);
  }
  return iVar2;
}


// ==== 10737285 xtoa_s

/* Library Function - Single Match
    _xtoa_s@20
   
   Library: Visual Studio 2005 Release
   __stdcall xtoa_s,20 */

undefined4 xtoa_s(uint param_1,uint param_2,int param_3)

{
  ulonglong uVar1;
  char *pcVar2;
  uint in_EAX;
  undefined4 *puVar3;
  char *in_ECX;
  char *pcVar4;
  char cVar5;
  char *pcVar6;
  undefined4 uVar7;
  uint local_8;
  
  if (in_ECX == (char *)0x0) {
    puVar3 = (undefined4 *)FUN_10724278();
    *puVar3 = 0x16;
    FUN_10723411((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    return 0x16;
  }
  if (param_1 == 0) {
LAB_107372b7:
    puVar3 = (undefined4 *)FUN_10724278();
    uVar7 = 0x16;
  }
  else {
    *in_ECX = '\0';
    if ((param_3 != 0) + 1 < param_1) {
      if (0x22 < param_2 - 2) goto LAB_107372b7;
      pcVar6 = in_ECX;
      if (param_3 != 0) {
        *in_ECX = '-';
        pcVar6 = in_ECX + 1;
        in_EAX = -in_EAX;
      }
      local_8 = (uint)(param_3 != 0);
      pcVar2 = pcVar6;
      do {
        pcVar4 = pcVar2;
        uVar1 = (ulonglong)in_EAX;
        in_EAX = in_EAX / param_2;
        cVar5 = (char)(uVar1 % (ulonglong)param_2);
        if ((uint)(uVar1 % (ulonglong)param_2) < 10) {
          cVar5 = cVar5 + '0';
        }
        else {
          cVar5 = cVar5 + 'W';
        }
        *pcVar4 = cVar5;
        local_8 = local_8 + 1;
      } while ((in_EAX != 0) && (pcVar2 = pcVar4 + 1, local_8 < param_1));
      if (local_8 < param_1) {
        pcVar4[1] = '\0';
        do {
          cVar5 = *pcVar4;
          *pcVar4 = *pcVar6;
          pcVar4 = pcVar4 + -1;
          *pcVar6 = cVar5;
          pcVar6 = pcVar6 + 1;
        } while (pcVar6 < pcVar4);
        return 0;
      }
      *in_ECX = '\0';
    }
    puVar3 = (undefined4 *)FUN_10724278();
    uVar7 = 0x22;
  }
  *puVar3 = uVar7;
  FUN_10723411((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  return uVar7;
}


// ==== 10737360 __itoa_s

/* Library Function - Single Match
    __itoa_s
   
   Library: Visual Studio 2005 Release */

errno_t __cdecl __itoa_s(int _Value,char *_DstBuf,size_t _Size,int _Radix)

{
  errno_t eVar1;
  int iVar2;
  
  if ((_Radix == 10) && (_Value < 0)) {
    iVar2 = 1;
    _Radix = 10;
  }
  else {
    iVar2 = 0;
  }
  eVar1 = xtoa_s(_Size,_Radix,iVar2);
  return eVar1;
}


// ==== 10737388 __ltoa_s

/* Library Function - Single Match
    __ltoa_s
   
   Library: Visual Studio 2005 Release */

errno_t __cdecl __ltoa_s(long _Val,char *_DstBuf,size_t _Size,int _Radix)

{
  int iVar1;
  errno_t eVar2;
  
  iVar1 = 0;
  if ((_Radix == 10) && (_Val < 0)) {
    iVar1 = 1;
  }
  eVar2 = xtoa_s(_Size,_Radix,iVar1);
  return eVar2;
}


// ==== 107373c5 x64toa_s

/* Library Function - Single Match
    @x64toa_s@24
   
   Library: Visual Studio 2005 Release
   __fastcall x64toa_s,24 */

undefined4 __fastcall
x64toa_s(undefined4 param_1,undefined4 param_2,uint param_3,uint param_4,uint param_5,uint param_6,
        char *param_7)

{
  char *pcVar1;
  undefined4 *puVar2;
  char cVar3;
  uint extraout_ECX;
  char *pcVar4;
  char *unaff_EDI;
  bool bVar5;
  bool bVar6;
  ulonglong uVar7;
  undefined4 uVar8;
  uint local_8;
  
  if ((unaff_EDI == (char *)0x0) || (param_5 == 0)) {
LAB_107373d3:
    puVar2 = (undefined4 *)FUN_10724278();
    uVar8 = 0x16;
  }
  else {
    *unaff_EDI = '\0';
    if ((param_7 != (char *)0x0) + 1 < param_5) {
      if (param_6 - 2 < 0x23) {
        bVar6 = param_7 != (char *)0x0;
        param_7 = unaff_EDI;
        if (bVar6) {
          bVar5 = param_3 != 0;
          param_3 = -param_3;
          *unaff_EDI = '-';
          param_7 = unaff_EDI + 1;
          param_4 = -(param_4 + bVar5);
        }
        local_8 = (uint)bVar6;
        uVar7 = (ulonglong)param_3;
        pcVar1 = param_7;
        do {
          pcVar4 = pcVar1;
          uVar7 = __aulldvrm((uint)uVar7,param_4,param_6,0);
          param_4 = (uint)(uVar7 >> 0x20);
          if (extraout_ECX < 10) {
            cVar3 = (char)extraout_ECX + '0';
          }
          else {
            cVar3 = (char)extraout_ECX + 'W';
          }
          *pcVar4 = cVar3;
          local_8 = local_8 + 1;
        } while ((uVar7 != 0) && (pcVar1 = pcVar4 + 1, local_8 < param_5));
        if (local_8 < param_5) {
          pcVar4[1] = '\0';
          do {
            cVar3 = *pcVar4;
            *pcVar4 = *param_7;
            pcVar4 = pcVar4 + -1;
            *param_7 = cVar3;
            param_7 = param_7 + 1;
          } while (param_7 < pcVar4);
          return 0;
        }
        *unaff_EDI = '\0';
        puVar2 = (undefined4 *)FUN_10724278();
        uVar8 = 0x22;
        *puVar2 = 0x22;
        goto LAB_107373dd;
      }
      goto LAB_107373d3;
    }
    puVar2 = (undefined4 *)FUN_10724278();
    uVar8 = 0x22;
  }
  *puVar2 = uVar8;
LAB_107373dd:
  FUN_10723411((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  return uVar8;
}


// ==== 107374bb __i64toa_s

/* Library Function - Single Match
    __i64toa_s
   
   Library: Visual Studio 2005 Release */

errno_t __cdecl __i64toa_s(longlong _Val,char *_DstBuf,size_t _Size,int _Radix)

{
  char *pcVar1;
  errno_t eVar2;
  undefined4 in_ECX;
  undefined4 in_EDX;
  
  pcVar1 = (char *)0x0;
  if (((_Radix == 10) && (_Val < 0x100000000)) && (_Val < 0)) {
    pcVar1 = (char *)0x1;
  }
  eVar2 = x64toa_s(in_ECX,in_EDX,(uint)_Val,_Val._4_4_,_Size,_Radix,pcVar1);
  return eVar2;
}


// ==== 107374ee __ui64toa_s

/* Library Function - Single Match
    __ui64toa_s
   
   Library: Visual Studio 2005 Release */

errno_t __cdecl __ui64toa_s(ulonglong _Val,char *_DstBuf,size_t _Size,int _Radix)

{
  errno_t eVar1;
  undefined4 in_ECX;
  undefined4 in_EDX;
  
  eVar1 = x64toa_s(in_ECX,in_EDX,(uint)_Val,_Val._4_4_,_Size,_Radix,(char *)0x0);
  return eVar1;
}


// ==== 1073750b __iswctype_l

/* Library Function - Single Match
    __iswctype_l
   
   Library: Visual Studio 2005 Release */

int __cdecl __iswctype_l(wint_t _C,wctype_t _Type,_locale_t _Locale)

{
  int iVar1;
  localeinfo_struct local_18;
  int local_10;
  char local_c;
  ushort local_8 [2];
  
  if (_C == 0xffff) {
    local_8[0] = 0;
  }
  else if (_C < 0x100) {
    local_8[0] = *(ushort *)(PTR_DAT_107667d0 + (uint)_C * 2) & _Type;
  }
  else {
    _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_18,_Locale);
    iVar1 = ___crtGetStringTypeW
                      (&local_18,1,(wchar_t *)&_C,1,local_8,(local_18.locinfo)->lc_codepage,
                       (int)(local_18.locinfo)->lc_category[0].wlocale);
    if (iVar1 == 0) {
      local_8[0] = 0;
    }
    if (local_c != '\0') {
      *(uint *)(local_10 + 0x70) = *(uint *)(local_10 + 0x70) & 0xfffffffd;
    }
  }
  return (uint)(local_8[0] & _Type);
}


// ==== 1073758d _iswctype

/* Library Function - Single Match
    _iswctype
   
   Library: Visual Studio 2005 Release */

int __cdecl _iswctype(wint_t _C,wctype_t _Type)

{
  int iVar1;
  undefined2 in_stack_00000006;
  undefined2 in_stack_0000000a;
  ushort local_8 [2];
  
  if (_C == 0xffff) {
    return 0;
  }
  if (_C < 0x100) {
    return (uint)(*(ushort *)(PTR_DAT_107667d0 + (uint)_C * 2) & _Type);
  }
  if (DAT_1076c7f4 == 0) {
    ___crtGetStringTypeW
              ((localeinfo_struct *)&PTR_DAT_10766430,1,(wchar_t *)&_C,1,local_8,DAT_10766354,
               DAT_10766364);
  }
  iVar1 = __iswctype_l((wint_t)__C,(wctype_t)__Type,(_locale_t)0x0);
  return iVar1;
}


// ==== 10737600 ___mtold12

/* Library Function - Single Match
    ___mtold12
   
   Library: Visual Studio 2005 Release */

void __cdecl ___mtold12(char *param_1,int param_2,uint *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  bool bVar5;
  short sVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  
  uVar7 = DAT_10765c70 ^ (uint)&stack0xfffffffc;
  sVar6 = 0x404e;
  *param_3 = 0;
  param_3[1] = 0;
  param_3[2] = 0;
  for (; param_2 != 0; param_2 = param_2 + -1) {
    uVar2 = *param_3;
    uVar9 = param_3[1];
    uVar10 = *param_3;
    uVar1 = param_3[1];
    uVar11 = param_3[2];
    bVar4 = false;
    uVar8 = (param_3[2] * 2 | uVar9 >> 0x1f) * 2 | (uVar9 & 0x7fffffff) >> 0x1e;
    uVar3 = uVar2 * 4;
    uVar9 = (uVar9 * 2 | uVar2 >> 0x1f) * 2 | (uVar2 & 0x7fffffff) >> 0x1e;
    uVar2 = uVar3 + uVar10;
    *param_3 = uVar3;
    param_3[1] = uVar9;
    param_3[2] = uVar8;
    if ((uVar2 < uVar3) || (uVar2 < uVar10)) {
      bVar4 = true;
    }
    bVar5 = false;
    *param_3 = uVar2;
    if (bVar4) {
      uVar10 = uVar9 + 1;
      if ((uVar10 < uVar9) || (uVar10 == 0)) {
        bVar5 = true;
      }
      param_3[1] = uVar10;
      if (bVar5) {
        param_3[2] = uVar8 + 1;
      }
    }
    uVar10 = param_3[1] + uVar1;
    bVar4 = false;
    if ((uVar10 < param_3[1]) || (uVar10 < uVar1)) {
      bVar4 = true;
    }
    param_3[1] = uVar10;
    if (bVar4) {
      param_3[2] = param_3[2] + 1;
    }
    param_3[2] = param_3[2] + uVar11;
    bVar4 = false;
    uVar1 = uVar2 * 2;
    uVar11 = uVar10 * 2 | uVar2 >> 0x1f;
    uVar10 = param_3[2] * 2 | uVar10 >> 0x1f;
    *param_3 = uVar1;
    param_3[1] = uVar11;
    param_3[2] = uVar10;
    uVar2 = uVar1 + (int)*param_1;
    if ((uVar2 < uVar1) || (uVar2 < (uint)(int)*param_1)) {
      bVar4 = true;
    }
    *param_3 = uVar2;
    if (bVar4) {
      uVar2 = uVar11 + 1;
      bVar4 = false;
      if ((uVar2 < uVar11) || (uVar2 == 0)) {
        bVar4 = true;
      }
      param_3[1] = uVar2;
      if (bVar4) {
        param_3[2] = uVar10 + 1;
      }
    }
    param_1 = param_1 + 1;
  }
  while (param_3[2] == 0) {
    param_3[2] = param_3[1] >> 0x10;
    sVar6 = sVar6 + -0x10;
    param_3[1] = param_3[1] << 0x10 | *param_3 >> 0x10;
    *param_3 = *param_3 << 0x10;
  }
  uVar2 = param_3[2];
  while ((uVar2 & 0x8000) == 0) {
    uVar10 = *param_3;
    uVar1 = param_3[1];
    sVar6 = sVar6 + -1;
    *param_3 = uVar10 * 2;
    uVar2 = param_3[2] * 2;
    param_3[1] = uVar1 * 2 | uVar10 >> 0x1f;
    param_3[2] = uVar2 | uVar1 >> 0x1f;
  }
  *(short *)((int)param_3 + 10) = sVar6;
  __security_check_cookie(uVar7 ^ (uint)&stack0xfffffffc);
  return;
}


// ==== 107377e3 __ctrlfp

/* Library Function - Single Match
    __ctrlfp
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release */

int __ctrlfp(void)

{
  short in_FPUControlWord;
  
  return (int)in_FPUControlWord;
}


// ==== 10737860 ___get_fpsr_sse2

/* Library Function - Single Match
    ___get_fpsr_sse2
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release, Visual Studio 2010 Release */

undefined4 ___get_fpsr_sse2(void)

{
  undefined4 local_8;
  
  if (DAT_1076cfb0 == 0) {
    local_8 = 0;
  }
  else {
    local_8 = MXCSR;
  }
  return local_8;
}


// ==== 1073787c ___set_fpsr_sse2

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    ___set_fpsr_sse2
   
   Library: Visual Studio 2005 Release */

void __cdecl ___set_fpsr_sse2(uint param_1)

{
  if (DAT_1076cfb0 != 0) {
    if (((param_1 & 0x40) == 0) || (DAT_10766c94 == 0)) {
      MXCSR = param_1 & 0xffffffbf;
    }
    else {
      MXCSR = param_1;
    }
  }
  return;
}


// ==== 1073797b strtoxl

/* Library Function - Single Match
    unsigned long __cdecl strtoxl(struct localeinfo_struct *,char const *,char const * *,int,int)
   
   Library: Visual Studio 2005 Release */

ulong __cdecl
strtoxl(localeinfo_struct *param_1,char *param_2,char **param_3,int param_4,int param_5)

{
  ushort uVar1;
  byte *pbVar2;
  undefined4 *puVar3;
  uint uVar4;
  pthreadlocinfo ptVar5;
  uint uVar6;
  int iVar7;
  byte bVar8;
  byte *pbVar9;
  localeinfo_struct local_18;
  int local_10;
  char local_c;
  uint local_8;
  
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_18,param_1);
  if (param_3 != (char **)0x0) {
    *param_3 = param_2;
  }
  if ((param_2 == (char *)0x0) || ((param_4 != 0 && ((param_4 < 2 || (0x24 < param_4)))))) {
    puVar3 = (undefined4 *)FUN_10724278();
    *puVar3 = 0x16;
    FUN_10723411((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    if (local_c != '\0') {
      *(uint *)(local_10 + 0x70) = *(uint *)(local_10 + 0x70) & 0xfffffffd;
    }
    return 0;
  }
  bVar8 = *param_2;
  local_8 = 0;
  ptVar5 = local_18.locinfo;
  pbVar2 = (byte *)param_2;
  while( true ) {
    pbVar9 = pbVar2 + 1;
    if ((int)ptVar5->locale_name[3] < 2) {
      uVar4 = (byte)ptVar5[1].lc_category[0].locale[(uint)bVar8 * 2] & 8;
    }
    else {
      uVar4 = __isctype_l((uint)bVar8,8,&local_18);
      ptVar5 = local_18.locinfo;
    }
    if (uVar4 == 0) break;
    bVar8 = *pbVar9;
    pbVar2 = pbVar9;
  }
  if (bVar8 == 0x2d) {
    param_5 = param_5 | 2;
LAB_10737a32:
    bVar8 = *pbVar9;
    pbVar9 = pbVar2 + 2;
  }
  else if (bVar8 == 0x2b) goto LAB_10737a32;
  if (((param_4 < 0) || (param_4 == 1)) || (0x24 < param_4)) {
    if (param_3 != (char **)0x0) {
      *param_3 = param_2;
    }
    if (local_c != '\0') {
      *(uint *)(local_10 + 0x70) = *(uint *)(local_10 + 0x70) & 0xfffffffd;
    }
    return 0;
  }
  if (param_4 == 0) {
    if (bVar8 != 0x30) {
      param_4 = 10;
      goto LAB_10737a98;
    }
    if ((*pbVar9 != 0x78) && (*pbVar9 != 0x58)) {
      param_4 = 8;
      goto LAB_10737a98;
    }
    param_4 = 0x10;
  }
  else if ((param_4 != 0x10) || (bVar8 != 0x30)) goto LAB_10737a98;
  if ((*pbVar9 == 0x78) || (*pbVar9 == 0x58)) {
    bVar8 = pbVar9[1];
    pbVar9 = pbVar9 + 2;
  }
LAB_10737a98:
  uVar4 = (uint)(0xffffffff / (ulonglong)(uint)param_4);
  do {
    uVar1 = *(ushort *)(ptVar5[1].lc_category[0].locale + (uint)bVar8 * 2);
    if ((uVar1 & 4) == 0) {
      if ((uVar1 & 0x103) == 0) {
LAB_10737af2:
        pbVar9 = pbVar9 + -1;
        if ((param_5 & 8U) == 0) {
          if (param_3 != (char **)0x0) {
            pbVar9 = (byte *)param_2;
          }
          local_8 = 0;
        }
        else if (((param_5 & 4U) != 0) ||
                (((param_5 & 1U) == 0 &&
                 ((((param_5 & 2U) != 0 && (0x80000000 < local_8)) ||
                  (((param_5 & 2U) == 0 && (0x7fffffff < local_8)))))))) {
          puVar3 = (undefined4 *)FUN_10724278();
          *puVar3 = 0x22;
          if ((param_5 & 1U) == 0) {
            local_8 = ((param_5 & 2U) != 0) + 0x7fffffff;
          }
          else {
            local_8 = 0xffffffff;
          }
        }
        if (param_3 != (char **)0x0) {
          *param_3 = (char *)pbVar9;
        }
        if ((param_5 & 2U) != 0) {
          local_8 = -local_8;
        }
        if (local_c == '\0') {
          return local_8;
        }
        *(uint *)(local_10 + 0x70) = *(uint *)(local_10 + 0x70) & 0xfffffffd;
        return local_8;
      }
      iVar7 = (int)(char)bVar8;
      if ((byte)(bVar8 + 0x9f) < 0x1a) {
        iVar7 = iVar7 + -0x20;
      }
      uVar6 = iVar7 - 0x37;
    }
    else {
      uVar6 = (int)(char)bVar8 - 0x30;
    }
    if ((uint)param_4 <= uVar6) goto LAB_10737af2;
    if ((local_8 < uVar4) ||
       ((local_8 == uVar4 && (uVar6 <= (uint)(0xffffffff % (ulonglong)(uint)param_4))))) {
      local_8 = local_8 * param_4 + uVar6;
      param_5 = param_5 | 8;
    }
    else {
      param_5 = param_5 | 0xc;
      if (param_3 == (char **)0x0) goto LAB_10737af2;
    }
    bVar8 = *pbVar9;
    pbVar9 = pbVar9 + 1;
  } while( true );
}


// ==== 10737ba6 _strtol

/* Library Function - Single Match
    _strtol
   
   Library: Visual Studio 2005 Release */

long __cdecl _strtol(char *_Str,char **_EndPtr,int _Radix)

{
  ulong uVar1;
  undefined **ppuVar2;
  
  if (DAT_1076c7f4 == 0) {
    ppuVar2 = &PTR_DAT_10766430;
  }
  else {
    ppuVar2 = (undefined **)0x0;
  }
  uVar1 = strtoxl((localeinfo_struct *)ppuVar2,_Str,_EndPtr,_Radix,0);
  return uVar1;
}


// ==== 10737bea _strtoul

/* Library Function - Single Match
    _strtoul
   
   Library: Visual Studio 2005 Release */

ulong __cdecl _strtoul(char *_Str,char **_EndPtr,int _Radix)

{
  ulong uVar1;
  undefined **ppuVar2;
  
  if (DAT_1076c7f4 == 0) {
    ppuVar2 = &PTR_DAT_10766430;
  }
  else {
    ppuVar2 = (undefined **)0x0;
  }
  uVar1 = strtoxl((localeinfo_struct *)ppuVar2,_Str,_EndPtr,_Radix,1);
  return uVar1;
}


// ==== 10737c2f strtoxq

/* Library Function - Single Match
    unsigned __int64 __cdecl strtoxq(struct localeinfo_struct *,char const *,char const * *,int,int)
   
   Library: Visual Studio 2005 Release */

__uint64 __cdecl
strtoxq(localeinfo_struct *param_1,char *param_2,char **param_3,int param_4,int param_5)

{
  ushort uVar1;
  char *pcVar2;
  undefined4 *puVar3;
  uint uVar4;
  int iVar5;
  uint extraout_ECX;
  pthreadlocinfo ptVar6;
  byte *pbVar7;
  byte *pbVar8;
  localeinfo_struct local_3c;
  int local_34;
  char local_30;
  uint local_28;
  uint local_24;
  int local_20;
  undefined8 local_1c;
  undefined8 local_14;
  byte *local_c;
  byte local_5;
  
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_3c,param_1);
  if (param_3 != (char **)0x0) {
    *param_3 = param_2;
  }
  if ((param_2 == (char *)0x0) || ((param_4 != 0 && ((param_4 < 2 || (0x24 < param_4)))))) {
    puVar3 = (undefined4 *)FUN_10724278();
    *puVar3 = 0x16;
    FUN_10723411((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    if (local_30 != '\0') {
      *(uint *)(local_34 + 0x70) = *(uint *)(local_34 + 0x70) & 0xfffffffd;
    }
    local_14._0_4_ = 0;
    local_14._4_4_ = 0;
    goto LAB_10737ebf;
  }
  local_14 = 0;
  ptVar6 = local_3c.locinfo;
  pbVar8 = (byte *)param_2;
  do {
    pbVar7 = pbVar8;
    local_5 = *pbVar7;
    pbVar8 = pbVar7 + 1;
    if ((int)ptVar6->locale_name[3] < 2) {
      uVar4 = (byte)ptVar6[1].lc_category[0].locale[(uint)local_5 * 2] & 8;
    }
    else {
      uVar4 = __isctype_l((uint)local_5,8,&local_3c);
      ptVar6 = local_3c.locinfo;
    }
  } while (uVar4 != 0);
  if (local_5 == 0x2d) {
    param_5 = param_5 | 2;
LAB_10737ced:
    local_5 = *pbVar8;
    pbVar8 = pbVar7 + 2;
  }
  else if (local_5 == 0x2b) goto LAB_10737ced;
  local_c = pbVar8;
  if (param_4 == 0) {
    if (local_5 != 0x30) {
      param_4 = 10;
      goto LAB_10737d42;
    }
    if ((*pbVar8 != 0x78) && (*pbVar8 != 0x58)) {
      param_4 = 8;
      goto LAB_10737d42;
    }
    param_4 = 0x10;
  }
  if (((param_4 == 0x10) && (local_5 == 0x30)) && ((*pbVar8 == 0x78 || (*pbVar8 == 0x58)))) {
    local_5 = pbVar8[1];
    local_c = pbVar8 + 2;
  }
LAB_10737d42:
  local_28 = param_4 >> 0x1f;
  local_1c = __aulldvrm(0xffffffff,0xffffffff,param_4,local_28);
  local_20 = 0;
  pcVar2 = ptVar6[1].lc_category[0].locale;
  local_24 = extraout_ECX;
  do {
    uVar1 = *(ushort *)(pcVar2 + (uint)local_5 * 2);
    if ((uVar1 & 4) == 0) {
      if ((uVar1 & 0x103) == 0) break;
      iVar5 = (int)(char)local_5;
      if ((byte)(local_5 + 0x9f) < 0x1a) {
        iVar5 = iVar5 + -0x20;
      }
      uVar4 = iVar5 - 0x37;
    }
    else {
      uVar4 = (int)(char)local_5 - 0x30;
    }
    if ((uint)param_4 <= uVar4) break;
    if (((local_14._4_4_ < local_1c._4_4_) ||
        ((local_14._4_4_ == local_1c._4_4_ && ((uint)local_14 < (uint)local_1c)))) ||
       (((uint)local_14 == (uint)local_1c &&
        ((local_14._4_4_ == local_1c._4_4_ && ((local_20 != 0 || (uVar4 <= local_24)))))))) {
      local_14 = __allmul(param_4,local_28,(uint)local_14,local_14._4_4_);
      local_14 = local_14 + (ulonglong)uVar4;
      param_5 = param_5 | 8;
    }
    else {
      param_5 = param_5 | 0xc;
      if (param_3 == (char **)0x0) break;
    }
    local_5 = *local_c;
    local_c = local_c + 1;
  } while( true );
  local_c = local_c + -1;
  if ((param_5 & 8U) == 0) {
    if (param_3 != (char **)0x0) {
      local_c = (byte *)param_2;
    }
    local_14 = 0;
  }
  else if (((param_5 & 4U) != 0) ||
          (((param_5 & 1U) == 0 &&
           ((((param_5 & 2U) != 0 &&
             ((0x80000000 < local_14._4_4_ ||
              ((0x7fffffff < local_14._4_4_ && ((uint)local_14 != 0)))))) ||
            (((param_5 & 2U) == 0 &&
             ((0x7ffffffe < local_14._4_4_ && (0x7fffffff < local_14._4_4_)))))))))) {
    puVar3 = (undefined4 *)FUN_10724278();
    *puVar3 = 0x22;
    if ((param_5 & 1U) == 0) {
      if ((param_5 & 2U) == 0) {
        local_14 = 0x7fffffffffffffff;
      }
      else {
        local_14 = -0x8000000000000000;
      }
    }
    else {
      local_14 = -1;
    }
  }
  if (param_3 != (char **)0x0) {
    *param_3 = (char *)local_c;
  }
  if ((param_5 & 2U) != 0) {
    local_14 = CONCAT44(-(local_14._4_4_ + ((uint)local_14 != 0)),-(uint)local_14);
  }
  if (local_30 != '\0') {
    *(uint *)(local_34 + 0x70) = *(uint *)(local_34 + 0x70) & 0xfffffffd;
  }
LAB_10737ebf:
  return CONCAT44(local_14._4_4_,(uint)local_14);
}


// ==== 10737ec3 __strtoi64

/* Library Function - Single Match
    __strtoi64
   
   Library: Visual Studio 2005 Release */

longlong __cdecl __strtoi64(char *_String,char **_EndPtr,int _Radix)

{
  __uint64 _Var1;
  undefined **ppuVar2;
  
  if (DAT_1076c7f4 == 0) {
    ppuVar2 = &PTR_DAT_10766430;
  }
  else {
    ppuVar2 = (undefined **)0x0;
  }
  _Var1 = strtoxq((localeinfo_struct *)ppuVar2,_String,_EndPtr,_Radix,0);
  return _Var1;
}


// ==== 10737f07 __strtoui64

/* Library Function - Single Match
    __strtoui64
   
   Library: Visual Studio 2005 Release */

ulonglong __cdecl __strtoui64(char *_String,char **_EndPtr,int _Radix)

{
  __uint64 _Var1;
  undefined **ppuVar2;
  
  if (DAT_1076c7f4 == 0) {
    ppuVar2 = &PTR_DAT_10766430;
  }
  else {
    ppuVar2 = (undefined **)0x0;
  }
  _Var1 = strtoxq((localeinfo_struct *)ppuVar2,_String,_EndPtr,_Radix,1);
  return _Var1;
}


// ==== 10737f4c __getenv_helper_nolock

/* Library Function - Single Match
    __getenv_helper_nolock
   
   Library: Visual Studio 2005 Release */

char * __cdecl __getenv_helper_nolock(char *param_1)

{
  int iVar1;
  size_t _MaxCount;
  size_t sVar2;
  int *piVar3;
  
  if (DAT_1076cf80 == 0) {
    return (char *)0x0;
  }
  if (((DAT_1076c6a0 != (int *)0x0) ||
      (((DAT_1076c6a8 != 0 && (iVar1 = ___wtomb_environ(), iVar1 == 0)) &&
       (DAT_1076c6a0 != (int *)0x0)))) && (piVar3 = DAT_1076c6a0, param_1 != (char *)0x0)) {
    _MaxCount = _strlen(param_1);
    for (; (char *)*piVar3 != (char *)0x0; piVar3 = piVar3 + 1) {
      sVar2 = _strlen((char *)*piVar3);
      if (((_MaxCount < sVar2) && (((uchar *)*piVar3)[_MaxCount] == '=')) &&
         (iVar1 = __mbsnbicoll((uchar *)*piVar3,(uchar *)param_1,_MaxCount), iVar1 == 0)) {
        return (char *)(*piVar3 + 1 + _MaxCount);
      }
    }
  }
  return (char *)0x0;
}


// ==== 10737fcd __getenv_s_helper

/* Library Function - Single Match
    __getenv_s_helper
   
   Library: Visual Studio 2005 Release */

undefined4 __cdecl __getenv_s_helper(char *param_1,uint param_2,char *param_3)

{
  uint *in_EAX;
  undefined4 *puVar1;
  char *_Str;
  size_t sVar2;
  errno_t eVar3;
  
  if (in_EAX != (uint *)0x0) {
    *in_EAX = 0;
    if (param_1 == (char *)0x0) {
      if (param_2 == 0) goto LAB_1073800a;
    }
    else if (param_2 != 0) {
LAB_1073800a:
      if (param_1 != (char *)0x0) {
        *param_1 = '\0';
      }
      _Str = __getenv_helper_nolock(param_3);
      if (_Str != (char *)0x0) {
        sVar2 = _strlen(_Str);
        *in_EAX = sVar2 + 1;
        if (param_2 != 0) {
          if (param_2 < sVar2 + 1) {
            return 0x22;
          }
          eVar3 = _strcpy_s(param_1,param_2,_Str);
          if (eVar3 != 0) {
                    /* WARNING: Subroutine does not return */
            __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
          }
        }
      }
      return 0;
    }
  }
  puVar1 = (undefined4 *)FUN_10724278();
  *puVar1 = 0x16;
  FUN_10723411((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  return 0x16;
}


// ==== 10738060 __dupenv_s_helper

/* Library Function - Single Match
    __dupenv_s_helper
   
   Library: Visual Studio 2005 Release */

undefined4 __cdecl __dupenv_s_helper(size_t *param_1,char *param_2)

{
  undefined4 *puVar1;
  char *_Str;
  size_t sVar2;
  char *_Dst;
  errno_t eVar3;
  undefined4 *unaff_EBX;
  
  if (unaff_EBX != (undefined4 *)0x0) {
    *unaff_EBX = 0;
    if (param_1 != (size_t *)0x0) {
      *param_1 = 0;
    }
    if (param_2 != (char *)0x0) {
      _Str = __getenv_helper_nolock(param_2);
      if (_Str != (char *)0x0) {
        sVar2 = _strlen(_Str);
        sVar2 = sVar2 + 1;
        _Dst = _calloc(sVar2,1);
        *unaff_EBX = _Dst;
        if (_Dst == (char *)0x0) {
          puVar1 = (undefined4 *)FUN_10724278();
          *puVar1 = 0xc;
          puVar1 = (undefined4 *)FUN_10724278();
          return *puVar1;
        }
        eVar3 = _strcpy_s(_Dst,sVar2,_Str);
        if (eVar3 != 0) {
                    /* WARNING: Subroutine does not return */
          __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
        if (param_1 != (size_t *)0x0) {
          *param_1 = sVar2;
        }
      }
      return 0;
    }
  }
  puVar1 = (undefined4 *)FUN_10724278();
  *puVar1 = 0x16;
  FUN_10723411((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  return 0x16;
}


// ==== 10738350 ___ascii_strnicmp

/* Library Function - Single Match
    ___ascii_strnicmp
   
   Library: Visual Studio 2005 Release */

int __cdecl ___ascii_strnicmp(char *_Str1,char *_Str2,size_t _MaxCount)

{
  char cVar1;
  byte bVar2;
  ushort uVar3;
  uint uVar4;
  int iVar5;
  bool bVar6;
  
  iVar5 = 0;
  if (_MaxCount != 0) {
    do {
      bVar2 = *_Str1;
      cVar1 = *_Str2;
      uVar3 = CONCAT11(bVar2,cVar1);
      if (bVar2 == 0) break;
      uVar3 = CONCAT11(bVar2,cVar1);
      uVar4 = (uint)uVar3;
      if (cVar1 == '\0') break;
      _Str1 = _Str1 + 1;
      _Str2 = _Str2 + 1;
      if ((0x40 < bVar2) && (bVar2 < 0x5b)) {
        uVar4 = (uint)CONCAT11(bVar2 + 0x20,cVar1);
      }
      uVar3 = (ushort)uVar4;
      bVar2 = (byte)uVar4;
      if ((0x40 < bVar2) && (bVar2 < 0x5b)) {
        uVar3 = (ushort)CONCAT31((int3)(uVar4 >> 8),bVar2 + 0x20);
      }
      bVar2 = (byte)(uVar3 >> 8);
      bVar6 = bVar2 < (byte)uVar3;
      if (bVar2 != (byte)uVar3) goto LAB_107383a1;
      _MaxCount = _MaxCount - 1;
    } while (_MaxCount != 0);
    iVar5 = 0;
    bVar2 = (byte)(uVar3 >> 8);
    bVar6 = bVar2 < (byte)uVar3;
    if (bVar2 != (byte)uVar3) {
LAB_107383a1:
      iVar5 = -1;
      if (!bVar6) {
        iVar5 = 1;
      }
    }
  }
  return iVar5;
}


// ==== 107383b1 __crtGetStringTypeW_stat

/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */
/* Library Function - Single Match
    int __cdecl __crtGetStringTypeW_stat(struct localeinfo_struct *,unsigned long,wchar_t const
   *,int,unsigned short *,int,int)
   
   Library: Visual Studio 2005 Release */

int __cdecl
__crtGetStringTypeW_stat
          (localeinfo_struct *param_1,ulong param_2,wchar_t *param_3,int param_4,ushort *param_5,
          int param_6,int param_7)

{
  LPWORD pWVar1;
  uint _Size;
  LPSTR lpSrcStr;
  BOOL BVar2;
  DWORD DVar3;
  uint _Size_00;
  undefined4 *puVar4;
  LPWORD lpCharType;
  int iVar5;
  LPSTR local_c;
  uint local_8;
  
  local_8 = DAT_10765c70 ^ (uint)&stack0xfffffffc;
  if (param_4 < -1) goto LAB_107385c3;
  if (DAT_1076cde0 == 0) {
    BVar2 = GetStringTypeW(1,L"",1,(LPWORD)&local_c);
    if (BVar2 == 0) {
      DVar3 = GetLastError();
      if (DVar3 == 0x78) {
        DAT_1076cde0 = 2;
      }
      goto LAB_10738418;
    }
    DAT_1076cde0 = 1;
  }
  else {
LAB_10738418:
    if (DAT_1076cde0 != 1) {
      if ((DAT_1076cde0 != 2) && (DAT_1076cde0 != 0)) goto LAB_107385c3;
      if (param_7 == 0) {
        param_7 = (int)param_1->locinfo->lc_category[0].wlocale;
      }
      if (param_6 == 0) {
        param_6 = param_1->locinfo->lc_codepage;
      }
      iVar5 = ___ansicp(param_7);
      if ((param_6 != iVar5) && (iVar5 != -1)) {
        param_6 = iVar5;
      }
      _Size_00 = WideCharToMultiByte(param_6,0,param_3,param_4,(LPSTR)0x0,0,(LPCSTR)0x0,(LPBOOL)0x0)
      ;
      if (_Size_00 == 0) goto LAB_107385c3;
      if (((int)_Size_00 < 1) || (0xffffffe0 < _Size_00)) {
        local_c = (LPSTR)0x0;
      }
      else if (_Size_00 + 8 < 0x401) {
        puVar4 = (undefined4 *)&stack0xffffffe0;
        local_c = &stack0xffffffe0;
        if (&stack0x00000000 != (undefined1 *)0x20) {
LAB_107384c9:
          local_c = (LPSTR)(puVar4 + 2);
        }
      }
      else {
        puVar4 = _malloc(_Size_00 + 8);
        local_c = (LPSTR)0x0;
        if (puVar4 != (undefined4 *)0x0) {
          *puVar4 = 0xdddd;
          goto LAB_107384c9;
        }
      }
      if (local_c == (LPSTR)0x0) goto LAB_107385c3;
      _memset(local_c,0,_Size_00);
      iVar5 = WideCharToMultiByte(param_6,0,param_3,param_4,local_c,_Size_00,(LPCSTR)0x0,(LPBOOL)0x0
                                 );
      if (iVar5 != 0) {
        if (((int)(_Size_00 + 1) < 1) || (0x7ffffff0 < _Size_00 + 1)) {
          lpCharType = (LPWORD)0x0;
        }
        else {
          _Size = _Size_00 * 2 + 10;
          if (_Size < 0x401) {
            if (&stack0x00000000 == (undefined1 *)0x20) goto LAB_107385b7;
            lpCharType = (LPWORD)&stack0xffffffe8;
          }
          else {
            lpCharType = _malloc(_Size);
            if (lpCharType != (LPWORD)0x0) {
              lpCharType[0] = 0xdddd;
              lpCharType[1] = 0;
              lpCharType = lpCharType + 4;
            }
          }
        }
        lpSrcStr = local_c;
        if (lpCharType != (LPWORD)0x0) {
          if (param_7 == 0) {
            param_7 = (int)param_1->locinfo->lc_category[0].wlocale;
          }
          pWVar1 = lpCharType + param_4;
          *pWVar1 = 0xffff;
          pWVar1[-1] = 0xffff;
          GetStringTypeA(param_7,param_2,lpSrcStr,_Size_00,lpCharType);
          if ((pWVar1[-1] != 0xffff) && (*pWVar1 == 0xffff)) {
            _memmove(param_5,lpCharType,param_4 * 2);
          }
          __freea(lpCharType);
        }
      }
LAB_107385b7:
      __freea(local_c);
      goto LAB_107385c3;
    }
  }
  GetStringTypeW(param_2,param_3,param_4,param_5);
LAB_107385c3:
  iVar5 = __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return iVar5;
}


// ==== 107385d5 ___crtGetStringTypeW

/* Library Function - Single Match
    ___crtGetStringTypeW
   
   Library: Visual Studio 2005 Release */

void __cdecl
___crtGetStringTypeW
          (localeinfo_struct *param_1,ulong param_2,wchar_t *param_3,int param_4,ushort *param_5,
          int param_6,int param_7)

{
  localeinfo_struct local_14;
  int local_c;
  char local_8;
  
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_14,param_1);
  __crtGetStringTypeW_stat(&local_14,param_2,param_3,param_4,param_5,param_6,param_7);
  if (local_8 != '\0') {
    *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
  }
  return;
}


// ==== 10738613 __mbsnbicoll_l

/* Library Function - Single Match
    __mbsnbicoll_l
   
   Library: Visual Studio 2005 Release */

int __cdecl __mbsnbicoll_l(uchar *_Str1,uchar *_Str2,size_t _MaxCount,_locale_t _Locale)

{
  undefined4 *puVar1;
  int iVar2;
  localeinfo_struct local_14;
  int local_c;
  char local_8;
  
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_14,_Locale);
  if (_MaxCount == 0) {
    if (local_8 != '\0') {
      *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
    }
    return 0;
  }
  if ((_Str1 == (uchar *)0x0) || (_Str2 == (uchar *)0x0)) {
    puVar1 = (undefined4 *)FUN_10724278();
    *puVar1 = 0x16;
    FUN_10723411((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    if (local_8 != '\0') {
      *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
    }
    return 0x7fffffff;
  }
  if (_MaxCount < 0x80000000) {
    if ((local_14.mbcinfo)->ismbcodepage == 0) {
      iVar2 = __strnicoll_l((char *)_Str1,(char *)_Str2,_MaxCount,_Locale);
    }
    else {
      iVar2 = ___crtCompareStringA
                        (&local_14,*(LPCWSTR *)(local_14.mbcinfo)->mbulinfo,0x1001,(LPCSTR)_Str1,
                         _MaxCount,(LPCSTR)_Str2,_MaxCount,(local_14.mbcinfo)->mbcodepage);
      if (iVar2 == 0) goto LAB_107386dc;
      iVar2 = iVar2 + -2;
    }
    if (local_8 != '\0') {
      *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
    }
  }
  else {
    puVar1 = (undefined4 *)FUN_10724278();
    *puVar1 = 0x16;
    FUN_10723411((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
LAB_107386dc:
    if (local_8 != '\0') {
      *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
    }
    iVar2 = 0x7fffffff;
  }
  return iVar2;
}


// ==== 107386ff __mbsnbicoll

/* Library Function - Single Match
    __mbsnbicoll
   
   Library: Visual Studio 2005 Release */

int __cdecl __mbsnbicoll(uchar *_Str1,uchar *_Str2,size_t _MaxCount)

{
  int iVar1;
  
  iVar1 = __mbsnbicoll_l(_Str1,_Str2,_MaxCount,(_locale_t)0x0);
  return iVar1;
}


// ==== 10738716 ___wtomb_environ

/* Library Function - Single Match
    ___wtomb_environ
   
   Library: Visual Studio 2005 Release */

int __cdecl ___wtomb_environ(void)

{
  LPCWSTR lpWideCharStr;
  size_t _Count;
  int iVar1;
  undefined4 *puVar2;
  LPSTR local_8;
  
  local_8 = (LPSTR)0x0;
  lpWideCharStr = (LPCWSTR)*DAT_1076c6a8;
  puVar2 = DAT_1076c6a8;
  while( true ) {
    if (lpWideCharStr == (LPCWSTR)0x0) {
      return 0;
    }
    _Count = WideCharToMultiByte(0,0,lpWideCharStr,-1,(LPSTR)0x0,0,(LPCSTR)0x0,(LPBOOL)0x0);
    if ((_Count == 0) || (local_8 = __calloc_crt(_Count,1), local_8 == (LPSTR)0x0)) break;
    iVar1 = WideCharToMultiByte(0,0,(LPCWSTR)*puVar2,-1,local_8,_Count,(LPCSTR)0x0,(LPBOOL)0x0);
    if (iVar1 == 0) {
      _free(local_8);
      return -1;
    }
    iVar1 = FUN_10738d71(&local_8,0);
    if ((iVar1 < 0) && (local_8 != (LPSTR)0x0)) {
      _free(local_8);
      local_8 = (LPSTR)0x0;
    }
    puVar2 = puVar2 + 1;
    lpWideCharStr = (LPCWSTR)*puVar2;
  }
  return -1;
}


// ==== 107387df __crtCompareStringA_stat

/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */
/* Library Function - Single Match
    int __cdecl __crtCompareStringA_stat(struct localeinfo_struct *,unsigned long,unsigned long,char
   const *,int,char const *,int,int)
   
   Library: Visual Studio 2005 Release */

int __cdecl
__crtCompareStringA_stat
          (localeinfo_struct *param_1,ulong param_2,ulong param_3,char *param_4,int param_5,
          char *param_6,int param_7,int param_8)

{
  uint _Size;
  char *lpMultiByteStr;
  int iVar1;
  DWORD DVar2;
  BOOL BVar3;
  BYTE *pBVar4;
  uint cchWideChar;
  undefined4 *puVar5;
  uint uVar6;
  LPWSTR lpWideCharStr;
  char *pcVar7;
  int *in_ECX;
  ulong uVar8;
  byte *in_EDX;
  byte *pbVar9;
  PCNZCH _Memory;
  byte *local_28;
  PCNZWCH local_24;
  char *local_20;
  _cpinfo local_1c;
  uint local_8;
  
  lpMultiByteStr = param_4;
  local_8 = DAT_10765c70 ^ (uint)&stack0xfffffffc;
  local_20 = param_4;
  if (DAT_1076cde4 == 0) {
    iVar1 = CompareStringW(0,0,L"",1,L"",1);
    if (iVar1 == 0) {
      DVar2 = GetLastError();
      if (DVar2 == 0x78) {
        DAT_1076cde4 = 2;
      }
    }
    else {
      DAT_1076cde4 = 1;
    }
  }
  pbVar9 = in_EDX;
  uVar8 = param_3;
  if ((int)param_3 < 1) {
    if ((int)param_3 < -1) goto LAB_10738b56;
  }
  else {
    do {
      uVar8 = uVar8 - 1;
      if (*pbVar9 == 0) goto LAB_10738859;
      pbVar9 = pbVar9 + 1;
    } while (uVar8 != 0);
    uVar8 = 0xffffffff;
LAB_10738859:
    param_3 = param_3 + (-1 - uVar8);
  }
  pcVar7 = lpMultiByteStr;
  iVar1 = param_5;
  if (param_5 < 1) {
    if (param_5 < -1) goto LAB_10738b56;
  }
  else {
    do {
      iVar1 = iVar1 + -1;
      if (*pcVar7 == '\0') goto LAB_1073887b;
      pcVar7 = pcVar7 + 1;
    } while (iVar1 != 0);
    iVar1 = -1;
LAB_1073887b:
    param_5 = param_5 + (-1 - iVar1);
  }
  if ((DAT_1076cde4 == 2) || (DAT_1076cde4 == 0)) {
    _Memory = (PCNZCH)0x0;
    pbVar9 = (byte *)0x0;
    if (param_1 == (localeinfo_struct *)0x0) {
      param_1 = *(localeinfo_struct **)(*in_ECX + 0x14);
    }
    if (param_6 == (char *)0x0) {
      param_6 = *(char **)(*in_ECX + 4);
    }
    pcVar7 = (char *)___ansicp((LCID)param_1);
    if (pcVar7 == (char *)0xffffffff) goto LAB_10738b56;
    local_28 = in_EDX;
    if (pcVar7 != param_6) {
      pbVar9 = (byte *)___convertcp((UINT)param_6,(UINT)pcVar7,(char *)in_EDX,&param_3,(LPSTR)0x0,0)
      ;
      if (pbVar9 == (byte *)0x0) goto LAB_10738b56;
      _Memory = (PCNZCH)___convertcp((UINT)param_6,(UINT)pcVar7,lpMultiByteStr,(uint *)&param_5,
                                     (LPSTR)0x0,0);
      local_28 = pbVar9;
      local_20 = _Memory;
      if (_Memory == (PCNZCH)0x0) {
        _free(pbVar9);
        goto LAB_10738b56;
      }
    }
    CompareStringA((LCID)param_1,param_2,(PCNZCH)local_28,param_3,local_20,param_5);
    if (pbVar9 != (byte *)0x0) {
      _free(pbVar9);
      _free(_Memory);
    }
    goto LAB_10738b56;
  }
  if (DAT_1076cde4 != 1) goto LAB_10738b56;
  if (param_6 == (char *)0x0) {
    param_6 = *(char **)(*in_ECX + 4);
  }
  if ((param_3 == 0) || (param_5 == 0)) {
    if ((param_3 == param_5) ||
       (((1 < param_5 || (1 < (int)param_3)) ||
        (BVar3 = GetCPInfo((UINT)param_6,&local_1c), BVar3 == 0)))) goto LAB_10738b56;
    if (0 < (int)param_3) {
      if (1 < local_1c.MaxCharSize) {
        pBVar4 = local_1c.LeadByte;
        while (((local_1c.LeadByte[0] != 0 && (pBVar4[1] != 0)) &&
               ((*in_EDX < *pBVar4 || (pBVar4[1] < *in_EDX))))) {
          pBVar4 = pBVar4 + 2;
          local_1c.LeadByte[0] = *pBVar4;
        }
      }
      goto LAB_10738b56;
    }
    if (0 < param_5) {
      if (1 < local_1c.MaxCharSize) {
        pBVar4 = local_1c.LeadByte;
        while (((local_1c.LeadByte[0] != 0 && (pBVar4[1] != 0)) &&
               (((byte)*lpMultiByteStr < *pBVar4 || (pBVar4[1] < (byte)*lpMultiByteStr))))) {
          pBVar4 = pBVar4 + 2;
          local_1c.LeadByte[0] = *pBVar4;
        }
      }
      goto LAB_10738b56;
    }
  }
  cchWideChar = MultiByteToWideChar((UINT)param_6,9,(LPCSTR)in_EDX,param_3,(LPWSTR)0x0,0);
  if (cchWideChar == 0) goto LAB_10738b56;
  if (((int)cchWideChar < 1) || (0xffffffe0 / cchWideChar < 2)) {
    local_24 = (PCNZWCH)0x0;
  }
  else {
    uVar6 = cchWideChar * 2 + 8;
    if (uVar6 < 0x401) {
      puVar5 = (undefined4 *)&stack0xffffffc4;
      local_24 = (PCNZWCH)&stack0xffffffc4;
      if (&stack0x00000000 != (undefined1 *)0x3c) {
LAB_107389cf:
        local_24 = (PCNZWCH)(puVar5 + 2);
      }
    }
    else {
      puVar5 = _malloc(uVar6);
      local_24 = (PCNZWCH)0x0;
      if (puVar5 != (undefined4 *)0x0) {
        *puVar5 = 0xdddd;
        goto LAB_107389cf;
      }
    }
  }
  if (local_24 == (PCNZWCH)0x0) goto LAB_10738b56;
  iVar1 = MultiByteToWideChar((UINT)param_6,1,(LPCSTR)in_EDX,param_3,local_24,cchWideChar);
  if ((iVar1 != 0) &&
     (uVar6 = MultiByteToWideChar((UINT)param_6,9,lpMultiByteStr,param_5,(LPWSTR)0x0,0), uVar6 != 0)
     ) {
    if (((int)uVar6 < 1) || (0xffffffe0 / uVar6 < 2)) {
      lpWideCharStr = (LPWSTR)0x0;
    }
    else {
      _Size = uVar6 * 2 + 8;
      if (_Size < 0x401) {
        if (&stack0x00000000 == (undefined1 *)0x3c) goto LAB_10738a90;
        lpWideCharStr = (LPWSTR)&stack0xffffffcc;
      }
      else {
        lpWideCharStr = _malloc(_Size);
        if (lpWideCharStr != (LPWSTR)0x0) {
          lpWideCharStr[0] = L'\xdddd';
          lpWideCharStr[1] = L'\0';
          lpWideCharStr = lpWideCharStr + 4;
        }
      }
    }
    if (lpWideCharStr != (LPWSTR)0x0) {
      iVar1 = MultiByteToWideChar((UINT)param_6,1,lpMultiByteStr,param_5,lpWideCharStr,uVar6);
      if (iVar1 != 0) {
        CompareStringW((LCID)param_1,param_2,local_24,cchWideChar,lpWideCharStr,uVar6);
      }
      __freea(lpWideCharStr);
    }
  }
LAB_10738a90:
  __freea(local_24);
LAB_10738b56:
  iVar1 = __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return iVar1;
}


// ==== 10738b68 ___crtCompareStringA

/* Library Function - Single Match
    ___crtCompareStringA
   
   Library: Visual Studio 2005 Release */

int __cdecl
___crtCompareStringA
          (_locale_t _Plocinfo,LPCWSTR _LocaleName,DWORD _DwCmpFlags,LPCSTR _LpString1,
          int _CchCount1,LPCSTR _LpString2,int _CchCount2,int _Code_page)

{
  int iVar1;
  int in_stack_ffffffec;
  int in_stack_fffffff0;
  int local_c;
  char local_8;
  
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&stack0xffffffec,_Plocinfo);
  iVar1 = __crtCompareStringA_stat
                    ((localeinfo_struct *)_LocaleName,_DwCmpFlags,_CchCount1,_LpString2,_CchCount2,
                     (char *)_Code_page,in_stack_ffffffec,in_stack_fffffff0);
  if (local_8 != '\0') {
    *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
  }
  return iVar1;
}


// ==== 10738ba8 __strnicoll_l

/* Library Function - Single Match
    __strnicoll_l
   
   Library: Visual Studio 2005 Release */

int __cdecl __strnicoll_l(char *_Str1,char *_Str2,size_t _MaxCount,_locale_t _Locale)

{
  LPCWSTR _LocaleName;
  undefined4 *puVar1;
  int iVar2;
  localeinfo_struct local_14;
  int local_c;
  char local_8;
  
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_14,_Locale);
  if (_MaxCount == 0) {
    if (local_8 != '\0') {
      *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
    }
    return 0;
  }
  if ((_Str1 == (char *)0x0) || (_Str2 == (char *)0x0)) {
    puVar1 = (undefined4 *)FUN_10724278();
    *puVar1 = 0x16;
    FUN_10723411((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    if (local_8 != '\0') {
      *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
    }
    return 0x7fffffff;
  }
  if (_MaxCount < 0x80000000) {
    _LocaleName = (LPCWSTR)(local_14.locinfo)->lc_category[0].locale;
    if (_LocaleName == (LPCWSTR)0x0) {
      iVar2 = __strnicmp_l(_Str1,_Str2,_MaxCount,&local_14);
    }
    else {
      iVar2 = ___crtCompareStringA
                        (&local_14,_LocaleName,0x1001,_Str1,_MaxCount,_Str2,_MaxCount,
                         (local_14.locinfo)->lc_collate_cp);
      if (iVar2 == 0) {
        puVar1 = (undefined4 *)FUN_10724278();
        *puVar1 = 0x16;
        goto LAB_10738c7d;
      }
      iVar2 = iVar2 + -2;
    }
    if (local_8 != '\0') {
      *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
    }
  }
  else {
    puVar1 = (undefined4 *)FUN_10724278();
    *puVar1 = 0x16;
    FUN_10723411((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
LAB_10738c7d:
    if (local_8 != '\0') {
      *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
    }
    iVar2 = 0x7fffffff;
  }
  return iVar2;
}


// ==== 10738ca0 __strnicoll

/* Library Function - Single Match
    __strnicoll
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release */

int __cdecl __strnicoll(char *_Str1,char *_Str2,size_t _MaxCount)

{
  int iVar1;
  
  if (DAT_1076c7f4 == 0) {
    iVar1 = __strnicmp(_Str1,_Str2,_MaxCount);
    return iVar1;
  }
  iVar1 = __strnicoll_l(_Str1,_Str2,_MaxCount,(_locale_t)0x0);
  return iVar1;
}


// ==== 10738cc7 findenv

/* Library Function - Single Match
    _findenv
   
   Library: Visual Studio 2005 Release */

int __cdecl findenv(uchar *param_1)

{
  int iVar1;
  int *piVar2;
  size_t unaff_EDI;
  
  piVar2 = DAT_1076c6a0;
  while( true ) {
    if ((uchar *)*piVar2 == (uchar *)0x0) {
      return -((int)piVar2 - (int)DAT_1076c6a0 >> 2);
    }
    iVar1 = __mbsnbicoll(param_1,(uchar *)*piVar2,unaff_EDI);
    if ((iVar1 == 0) &&
       ((*(char *)(unaff_EDI + *piVar2) == '=' || (*(char *)(unaff_EDI + *piVar2) == '\0')))) break;
    piVar2 = piVar2 + 1;
  }
  return (int)piVar2 - (int)DAT_1076c6a0 >> 2;
}


// ==== 10738d14 copy_environ

/* Library Function - Single Match
    _copy_environ
   
   Library: Visual Studio 2005 Release */

undefined4 * __cdecl copy_environ(void)

{
  int iVar1;
  undefined4 *puVar2;
  char *pcVar3;
  int *piVar4;
  undefined4 *puVar5;
  int *unaff_EDI;
  
  puVar2 = (undefined4 *)0x0;
  if (unaff_EDI != (int *)0x0) {
    iVar1 = *unaff_EDI;
    piVar4 = unaff_EDI;
    while (iVar1 != 0) {
      piVar4 = piVar4 + 1;
      puVar2 = (undefined4 *)((int)puVar2 + 1);
      iVar1 = *piVar4;
    }
    puVar2 = __calloc_crt((int)puVar2 + 1,4);
    if (puVar2 == (undefined4 *)0x0) {
      __amsg_exit(9);
    }
    pcVar3 = (char *)*unaff_EDI;
    puVar5 = puVar2;
    while (pcVar3 != (char *)0x0) {
      pcVar3 = __strdup(pcVar3);
      *puVar5 = pcVar3;
      puVar5 = puVar5 + 1;
      unaff_EDI = unaff_EDI + 1;
      pcVar3 = (char *)*unaff_EDI;
    }
    *puVar5 = 0;
    return puVar2;
  }
  return puVar2;
}


// ==== 10738d71 FUN_10738d71

undefined4 __cdecl FUN_10738d71(undefined4 *param_1,int param_2)

{
  uint _Size;
  uchar *_Str;
  undefined4 *puVar1;
  uchar *puVar2;
  int iVar3;
  uint _Count;
  int *piVar4;
  size_t sVar5;
  char *_Dst;
  errno_t eVar6;
  BOOL BVar7;
  int *piVar8;
  bool bVar9;
  size_t _Size_00;
  uchar *_Src;
  undefined4 local_14;
  
  local_14 = 0;
  if (param_1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)FUN_10724278();
    *puVar1 = 0x16;
    FUN_10723411((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    return 0xffffffff;
  }
  _Str = (uchar *)*param_1;
  if (((_Str == (uchar *)0x0) || (puVar2 = __mbschr(_Str,0x3d), puVar2 == (uchar *)0x0)) ||
     (_Str == puVar2)) {
LAB_10738dff:
    puVar1 = (undefined4 *)FUN_10724278();
    *puVar1 = 0x16;
    return 0xffffffff;
  }
  bVar9 = puVar2[1] == '\0';
  if (DAT_1076c6a0 == DAT_1076c6a4) {
    DAT_1076c6a0 = copy_environ();
  }
  if (DAT_1076c6a0 == (int *)0x0) {
    if ((param_2 == 0) || (DAT_1076c6a8 == (undefined4 *)0x0)) {
      if (bVar9) {
        return 0;
      }
      DAT_1076c6a0 = __malloc_crt(4);
      if (DAT_1076c6a0 == (int *)0x0) {
        return 0xffffffff;
      }
      *DAT_1076c6a0 = 0;
      if (DAT_1076c6a8 == (undefined4 *)0x0) {
        DAT_1076c6a8 = __malloc_crt(4);
        if (DAT_1076c6a8 == (undefined4 *)0x0) {
          return 0xffffffff;
        }
        *DAT_1076c6a8 = 0;
      }
    }
    else {
      iVar3 = ___wtomb_environ();
      if (iVar3 != 0) goto LAB_10738dff;
    }
  }
  piVar4 = DAT_1076c6a0;
  if (DAT_1076c6a0 == (int *)0x0) {
    return 0xffffffff;
  }
  _Count = findenv(_Str);
  if (((int)_Count < 0) || (*piVar4 == 0)) {
    if (bVar9) {
      _free(_Str);
      *param_1 = 0;
      return 0;
    }
    if ((int)_Count < 0) {
      _Count = -_Count;
    }
    _Size = _Count + 2;
    if ((int)_Size < (int)_Count) {
      return 0xffffffff;
    }
    if (0x3ffffffe < _Size) {
      return 0xffffffff;
    }
    piVar4 = __recalloc_crt(DAT_1076c6a0,4,_Size);
    if (piVar4 == (int *)0x0) {
      return 0xffffffff;
    }
    piVar4[_Count] = (int)_Str;
    (piVar4 + _Count)[1] = 0;
    *param_1 = 0;
  }
  else {
    piVar8 = piVar4 + _Count;
    _free((void *)*piVar8);
    if (!bVar9) {
      *piVar8 = (int)_Str;
      *param_1 = 0;
      goto LAB_10738f10;
    }
    while (*piVar8 != 0) {
      *piVar8 = piVar8[1];
      _Count = _Count + 1;
      piVar8 = piVar4 + _Count;
    }
    if ((0x3ffffffe < _Count) ||
       (piVar4 = __recalloc_crt(DAT_1076c6a0,_Count,4), piVar4 == (int *)0x0)) goto LAB_10738f10;
  }
  DAT_1076c6a0 = piVar4;
LAB_10738f10:
  if (param_2 != 0) {
    _Size_00 = 1;
    sVar5 = _strlen((char *)_Str);
    _Dst = __calloc_crt(sVar5 + 2,_Size_00);
    if (_Dst != (char *)0x0) {
      _Src = _Str;
      sVar5 = _strlen((char *)_Str);
      eVar6 = _strcpy_s(_Dst,sVar5 + 2,(char *)_Src);
      if (eVar6 != 0) {
                    /* WARNING: Subroutine does not return */
        __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      puVar2[(int)_Dst - (int)_Str] = '\0';
      BVar7 = SetEnvironmentVariableA
                        (_Dst,(LPCSTR)(~-(uint)bVar9 & (uint)(puVar2 + ((int)_Dst - (int)_Str) + 1))
                        );
      if (BVar7 == 0) {
        local_14 = 0xffffffff;
        puVar1 = (undefined4 *)FUN_10724278();
        *puVar1 = 0x2a;
      }
      _free(_Dst);
    }
  }
  if (bVar9) {
    _free(_Str);
    *param_1 = 0;
    return local_14;
  }
  return local_14;
}


// ==== 10738fbd __strdup

/* Library Function - Single Match
    __strdup
   
   Library: Visual Studio 2005 Release */

char * __cdecl __strdup(char *_Src)

{
  char *_Dst;
  size_t sVar1;
  errno_t eVar2;
  
  if (_Src == (char *)0x0) {
    _Dst = (char *)0x0;
  }
  else {
    sVar1 = _strlen(_Src);
    _Dst = _malloc(sVar1 + 1);
    if (_Dst == (char *)0x0) {
      _Dst = (char *)0x0;
    }
    else {
      eVar2 = _strcpy_s(_Dst,sVar1 + 1,_Src);
      if (eVar2 != 0) {
                    /* WARNING: Subroutine does not return */
        __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
  }
  return _Dst;
}


// ==== 1073900d __mbschr_l

/* Library Function - Single Match
    __mbschr_l
   
   Library: Visual Studio 2005 Release */

uchar * __cdecl __mbschr_l(uchar *_Str,uint _Ch,_locale_t _Locale)

{
  byte bVar1;
  byte bVar2;
  undefined4 *puVar3;
  byte *pbVar4;
  _LocaleUpdate local_14 [4];
  int local_10;
  int local_c;
  char local_8;
  
  _LocaleUpdate::_LocaleUpdate(local_14,_Locale);
  if (_Str == (uchar *)0x0) {
    puVar3 = (undefined4 *)FUN_10724278();
    *puVar3 = 0x16;
    FUN_10723411((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    if (local_8 != '\0') {
      *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
    }
    _Str = (byte *)0x0;
  }
  else {
    if (*(int *)(local_10 + 8) == 0) {
      _Str = (uchar *)_strchr((char *)_Str,_Ch);
    }
    else {
      while( true ) {
        bVar2 = *_Str;
        if (bVar2 == 0) break;
        if ((*(byte *)(bVar2 + 0x1d + local_10) & 4) == 0) {
          pbVar4 = _Str;
          if (_Ch == bVar2) break;
        }
        else {
          bVar1 = _Str[1];
          if (bVar1 == 0) goto LAB_107390b5;
          pbVar4 = _Str + 1;
          if (_Ch == CONCAT11(bVar2,bVar1)) goto LAB_107390a7;
        }
        _Str = pbVar4 + 1;
      }
      if (_Ch != (ushort)bVar2) {
LAB_107390b5:
        if (local_8 != '\0') {
          *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
        }
        return (uchar *)0x0;
      }
    }
LAB_107390a7:
    if (local_8 != '\0') {
      *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
    }
  }
  return _Str;
}


