// ==== 10400730 FUN_10400730 depth=0 from=raiz callees=CORE.DLL::FOutputDevice::Logf@EXTERNAL:000000b4
// strings: 1087e888=GameGuard Fail! \n Please Restart Lineage2 | 1087e830=(Receive)Game Guard Module Not Equal | 

uint FUN_10400730(void)

{
  uint extraout_EAX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1080e3f0;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  (**(code **)(*(int *)GL2Console + 0x80))(L"GameGuard Fail! \n Please Restart Lineage2",1);
  FOutputDevice::Logf(*(FOutputDevice **)GNetworkLog_exref,
                      (ushort *)*(FOutputDevice **)GNetworkLog_exref);
  ExceptionList = local_10;
  return extraout_EAX & 0xffffff00;
}


// ==== 104007f0 FUN_104007f0 depth=0 from=raiz callees=CORE.DLL::FOutputDevice::Logf@EXTERNAL:000000b4
// strings: 1087e91c=(Receive)ExRequestHackShield | 

uint FUN_104007f0(void)

{
  uint extraout_EAX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1080e400;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  FOutputDevice::Logf(*(FOutputDevice **)GNetworkLog_exref,
                      (ushort *)*(FOutputDevice **)GNetworkLog_exref);
  ExceptionList = local_10;
  return extraout_EAX & 0xffffff00;
}


// ==== 104008a0 FUN_104008a0 depth=0 from=raiz callees=
// strings: 

uint FUN_104008a0(void)

{
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1080e410;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  uVar1 = (**(code **)(**(int **)(DAT_10b1f538 + 0x54) + 0x5b0))();
  ExceptionList = local_10;
  return uVar1 & 0xffffff00;
}


// ==== 10400940 FUN_10400940 depth=0 from=raiz callees=
// strings: 

uint FUN_10400940(void)

{
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1080e420;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  uVar1 = (**(code **)(**(int **)(DAT_10b1f538 + 0x54) + 0x5b4))();
  ExceptionList = local_10;
  return uVar1 & 0xffffff00;
}


// ==== 104009e0 FUN_104009e0 depth=0 from=raiz callees=
// strings: 

uint FUN_104009e0(void)

{
  return (uint)ExceptionList & 0xffffff00;
}


// ==== 10400a70 FUN_10400a70 depth=0 from=raiz callees=
// strings: 

uint FUN_10400a70(void)

{
  return (uint)ExceptionList & 0xffffff00;
}


// ==== 10400b70 FUN_10400b70 depth=0 from=raiz callees=CORE.DLL::FOutputDevice::Logf@EXTERNAL:000000b4
// strings: 1087eac0=(Receive)AcquireSkillDonePacket | 

uint FUN_10400b70(void)

{
  uint extraout_EAX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1080e450;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  (**(code **)(**(int **)(DAT_10b1f538 + 0x54) + 0x4e8))();
  FOutputDevice::Logf((FOutputDevice *)GNetworkLog_exref,*(ushort **)GNetworkLog_exref);
  ExceptionList = local_10;
  return extraout_EAX & 0xffffff00;
}


// ==== 10400e00 FUN_10400e00 depth=0 from=raiz callees=CORE.DLL::L2ParamStack::~L2ParamStack@EXTERNAL:0000012a CORE.DLL::L2ParamStack::L2ParamStack@EXTERNAL:0000012b CORE.DLL::FOutputDevice::Logf@EXTERNAL:000000b4
// strings: 1087ebd0=(Receive) SetOustPledgeMemberPacket | 

uint FUN_10400e00(void)

{
  uint extraout_EAX;
  L2ParamStack local_1c [16];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1080e469;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  L2ParamStack::L2ParamStack(local_1c,10);
  local_4 = 0;
  (**(code **)(**(int **)(DAT_10b1f538 + 0x54) + 0x378))(local_1c);
  FOutputDevice::Logf(*(FOutputDevice **)GNetworkLog_exref,
                      (ushort *)*(FOutputDevice **)GNetworkLog_exref);
  local_4 = 0xffffffff;
  L2ParamStack::~L2ParamStack(local_1c);
  ExceptionList = pvStack_c;
  return extraout_EAX & 0xffffff00;
}


// ==== 10400ea0 FUN_10400ea0 depth=0 from=raiz callees=CORE.DLL::L2ParamStack::~L2ParamStack@EXTERNAL:0000012a CORE.DLL::L2ParamStack::L2ParamStack@EXTERNAL:0000012b CORE.DLL::FOutputDevice::Logf@EXTERNAL:000000b4
// strings: 1087ec28=(Receive) SetDismissPledgePacket | 

uint FUN_10400ea0(void)

{
  uint extraout_EAX;
  L2ParamStack local_1c [16];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1080e489;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  L2ParamStack::L2ParamStack(local_1c,10);
  local_4 = 0;
  (**(code **)(**(int **)(DAT_10b1f538 + 0x54) + 0x378))(local_1c);
  FOutputDevice::Logf(*(FOutputDevice **)GNetworkLog_exref,
                      (ushort *)*(FOutputDevice **)GNetworkLog_exref);
  local_4 = 0xffffffff;
  L2ParamStack::~L2ParamStack(local_1c);
  ExceptionList = pvStack_c;
  return extraout_EAX & 0xffffff00;
}


// ==== 10400fc0 FUN_10400fc0 depth=0 from=raiz callees=CORE.DLL::L2ParamStack::~L2ParamStack@EXTERNAL:0000012a CORE.DLL::L2ParamStack::L2ParamStack@EXTERNAL:0000012b CORE.DLL::FOutputDevice::Logf@EXTERNAL:000000b4
// strings: 1087ec78=(Receive) SetOustPartyMemberPacket | 

uint FUN_10400fc0(void)

{
  uint extraout_EAX;
  L2ParamStack local_1c [16];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1080e4a9;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  L2ParamStack::L2ParamStack(local_1c,10);
  local_4 = 0;
  (**(code **)(**(int **)(DAT_10b1f538 + 0x54) + 0x3ac))(local_1c);
  FOutputDevice::Logf(*(FOutputDevice **)GNetworkLog_exref,
                      (ushort *)*(FOutputDevice **)GNetworkLog_exref);
  local_4 = 0xffffffff;
  L2ParamStack::~L2ParamStack(local_1c);
  ExceptionList = pvStack_c;
  return extraout_EAX & 0xffffff00;
}


// ==== 10401060 FUN_10401060 depth=0 from=raiz callees=CORE.DLL::L2ParamStack::~L2ParamStack@EXTERNAL:0000012a CORE.DLL::L2ParamStack::L2ParamStack@EXTERNAL:0000012b CORE.DLL::FOutputDevice::Logf@EXTERNAL:000000b4
// strings: 1087ecd0=(Receive) SetDismissPartyPacket | 

uint FUN_10401060(void)

{
  uint extraout_EAX;
  L2ParamStack local_1c [16];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1080e4c9;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  L2ParamStack::L2ParamStack(local_1c,10);
  local_4 = 0;
  (**(code **)(**(int **)(DAT_10b1f538 + 0x54) + 0x3b4))(local_1c);
  FOutputDevice::Logf(*(FOutputDevice **)GNetworkLog_exref,
                      (ushort *)*(FOutputDevice **)GNetworkLog_exref);
  local_4 = 0xffffffff;
  L2ParamStack::~L2ParamStack(local_1c);
  ExceptionList = pvStack_c;
  return extraout_EAX & 0xffffff00;
}


// ==== 10401220 FUN_10401220 depth=0 from=raiz callees=
// strings: 

uint FUN_10401220(void)

{
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1080e4e0;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  uVar1 = (**(code **)(*(int *)GL2Console + 0x734))();
  ExceptionList = local_10;
  return uVar1 & 0xffffff00;
}


// ==== 10401350 FUN_10401350 depth=0 from=raiz callees=
// strings: 

uint FUN_10401350(void)

{
  return (uint)ExceptionList & 0xffffff00;
}


// ==== 104013e0 FUN_104013e0 depth=0 from=raiz callees=
// strings: 

uint FUN_104013e0(void)

{
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1080e500;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  uVar1 = (**(code **)(**(int **)(DAT_10b1f538 + 0x54) + 0x6f0))();
  ExceptionList = local_10;
  return uVar1 & 0xffffff00;
}


// ==== 10401480 FUN_10401480 depth=0 from=raiz callees=CORE.DLL::L2ParamStack::~L2ParamStack@EXTERNAL:0000012a CORE.DLL::L2ParamStack::L2ParamStack@EXTERNAL:0000012b CORE.DLL::FOutputDevice::Logf@EXTERNAL:000000b4
// strings: 1087ef38=(Receive)ExClosePartyRoomPacket | 

uint FUN_10401480(void)

{
  uint extraout_EAX;
  L2ParamStack local_2c [24];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_1080e519;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffc8;
  local_8 = 0;
  ExceptionList = &local_10;
  L2ParamStack::L2ParamStack(local_2c,10);
  local_8._0_1_ = 1;
  (**(code **)(**(int **)(DAT_10b1f538 + 0x54) + 0x708))(local_2c);
  FOutputDevice::Logf(*(FOutputDevice **)GNetworkLog_exref,
                      (ushort *)*(FOutputDevice **)GNetworkLog_exref);
  local_8 = (uint)local_8._1_3_ << 8;
  L2ParamStack::~L2ParamStack(local_2c);
  ExceptionList = local_10;
  return extraout_EAX & 0xffffff00;
}


// ==== 10401580 FUN_10401580 depth=0 from=raiz callees=CORE.DLL::L2ParamStack::~L2ParamStack@EXTERNAL:0000012a CORE.DLL::L2ParamStack::L2ParamStack@EXTERNAL:0000012b
// strings: 

uint FUN_10401580(void)

{
  uint extraout_EAX;
  L2ParamStack local_2c [24];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_1080e539;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffc8;
  local_8 = 0;
  ExceptionList = &local_10;
  L2ParamStack::L2ParamStack(local_2c,10);
  local_8._0_1_ = 1;
  (**(code **)(**(int **)(DAT_10b1f538 + 0x54) + 0x498))(local_2c);
  local_8 = (uint)local_8._1_3_ << 8;
  L2ParamStack::~L2ParamStack(local_2c);
  ExceptionList = local_10;
  return extraout_EAX & 0xffffff00;
}


// ==== 10401720 FUN_10401720 depth=0 from=raiz callees=CORE.DLL::L2ParamStack::~L2ParamStack@EXTERNAL:0000012a CORE.DLL::L2ParamStack::L2ParamStack@EXTERNAL:0000012b
// strings: 

uint FUN_10401720(void)

{
  uint extraout_EAX;
  L2ParamStack local_1c [12];
  void *pvStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1080e599;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  L2ParamStack::L2ParamStack(local_1c,10);
  local_4 = 0;
  (**(code **)(**(int **)(DAT_10b1f538 + 0x54) + 0x4dc))();
  puStack_8 = (undefined1 *)0xffffffff;
  L2ParamStack::~L2ParamStack((L2ParamStack *)&stack0xffffffe0);
  ExceptionList = pvStack_10;
  return extraout_EAX & 0xffffff00;
}


// ==== 104017a0 FUN_104017a0 depth=0 from=raiz callees=CORE.DLL::L2ParamStack::~L2ParamStack@EXTERNAL:0000012a CORE.DLL::L2ParamStack::L2ParamStack@EXTERNAL:0000012b
// strings: 

uint FUN_104017a0(void)

{
  uint extraout_EAX;
  L2ParamStack local_1c [12];
  void *pvStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1080e5b9;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  L2ParamStack::L2ParamStack(local_1c,10);
  local_4 = 0;
  (**(code **)(**(int **)(DAT_10b1f538 + 0x54) + 0x4e0))();
  puStack_8 = (undefined1 *)0xffffffff;
  L2ParamStack::~L2ParamStack((L2ParamStack *)&stack0xffffffe0);
  ExceptionList = pvStack_10;
  return extraout_EAX & 0xffffff00;
}


// ==== 10401820 FUN_10401820 depth=0 from=raiz callees=
// strings: 

uint FUN_10401820(void)

{
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1080e5d0;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  uVar1 = (**(code **)(**(int **)(DAT_10b1f538 + 0x54) + 0x4d0))();
  ExceptionList = local_10;
  return uVar1 & 0xffffff00;
}


// ==== 104018c0 FUN_104018c0 depth=0 from=raiz callees=
// strings: 

uint FUN_104018c0(void)

{
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1080e5e0;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  uVar1 = (**(code **)(**(int **)(DAT_10b1f538 + 0x54) + 0x4d4))();
  ExceptionList = local_10;
  return uVar1 & 0xffffff00;
}


// ==== 10401960 FUN_10401960 depth=0 from=raiz callees=CORE.DLL::L2ParamStack::~L2ParamStack@EXTERNAL:0000012a CORE.DLL::L2ParamStack::L2ParamStack@EXTERNAL:0000012b
// strings: 

uint FUN_10401960(void)

{
  uint extraout_EAX;
  L2ParamStack local_2c [24];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_1080e5f9;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffc8;
  local_8 = 0;
  ExceptionList = &local_10;
  L2ParamStack::L2ParamStack(local_2c,10);
  local_8._0_1_ = 1;
  (**(code **)(**(int **)(DAT_10b1f538 + 0x54) + 0x750))(local_2c);
  local_8 = (uint)local_8._1_3_ << 8;
  L2ParamStack::~L2ParamStack(local_2c);
  ExceptionList = local_10;
  return extraout_EAX & 0xffffff00;
}


// ==== 1040be50 FUN_1040be50 depth=0 from=raiz callees=thunk_FUN_103ff550@10313165 CORE.DLL::appRand@EXTERNAL:00000130 CORE.DLL::appMemset@EXTERNAL:000000c9 _memset@107a6860 thunk_FUN_104026b0@103034e5 KERNEL32.DLL::WideCharToMultiByte@EXTERNAL:000003f0 UGameEngine::OnGameGuardQuery@10310f28 CORE.DLL::FOutputDevice::Logf2@EXTERNAL:0000002e _memcpy@107a6260 __alloca_probe@107a69d0
// strings: 10883cc0=AC_PROTOCOL : %d %d %d %d %d | 

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

uint FUN_1040be50(int param_1)

{
  byte *_Dst;
  undefined4 uVar1;
  byte bVar2;
  char cVar3;
  void *_Src;
  uint uVar4;
  int iVar5;
  code *extraout_EAX;
  code *pcVar6;
  byte bVar7;
  int iVar8;
  byte abStackY_4234 [4];
  undefined4 uStackY_4230;
  int iStackY_422c;
  undefined *puStackY_4228;
  byte abStack_41f4 [13];
  uint auStack_41e7 [9];
  uint auStack_41c0 [3];
  byte abStack_41b4 [13];
  undefined4 auStack_41a7 [12];
  undefined1 auStack_4174 [16384];
  char local_174 [268];
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  CHAR local_58 [16];
  undefined4 local_48;
  undefined1 local_44;
  int local_40;
  undefined4 local_3c;
  undefined2 local_38;
  undefined4 local_34;
  ulong local_28;
  ulong local_24;
  ulong local_20;
  int local_1c;
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1080e940;
  local_10 = ExceptionList;
  local_18 = 0x1040be73;
  local_14 = &stack0xffffbe00;
  local_8 = 0;
  pcVar6 = (code *)0x41e0;
  if ((param_1 != 0) && (pcVar6 = (code *)0x0, *(int *)(param_1 + 0x4c) != 0)) {
    ExceptionList = &local_10;
    *(undefined4 *)(param_1 + 0x50) = 1;
    local_34 = 0;
    _Src = (void *)thunk_FUN_104026b0();
    *(undefined4 *)(*(int *)(param_1 + 0x4c) + 0x50bc) = 1;
    local_68 = 0;
    local_64 = 0;
    local_60 = 0;
    local_5c = 0;
    local_58[0] = '\0';
    local_58[1] = '\0';
    local_58[2] = '\0';
    local_58[3] = '\0';
    local_58[4] = '\0';
    local_58[5] = '\0';
    local_58[6] = '\0';
    local_58[7] = '\0';
    local_58[8] = '\0';
    local_58[9] = '\0';
    local_58[10] = '\0';
    local_58[0xb] = '\0';
    local_58[0xc] = '\0';
    local_58[0xd] = '\0';
    local_58[0xe] = '\0';
    local_58[0xf] = '\0';
    local_48 = 0;
    local_44 = 0;
    WideCharToMultiByte(0,0,(LPCWSTR)&DAT_10b20f54,0xe,(LPSTR)((int)&local_68 + 2),0x25,(LPCSTR)0x0,
                        (LPBOOL)0x0);
    WideCharToMultiByte(0,0,(LPCWSTR)&DAT_10b20f72,0x10,local_58,0x15,(LPCSTR)0x0,(LPBOOL)0x0);
    local_48 = DAT_10b20f94;
    uVar4 = appRand();
    uVar4 = uVar4 & 0x8000007f;
    if ((int)uVar4 < 0) {
      uVar4 = (uVar4 - 1 | 0xffffff80) + 1;
    }
    for (iVar8 = 0; local_18 = iVar8, iVar8 < 0x80; iVar8 = iVar8 + 1) {
      iVar5 = appRand();
      (&DAT_10b1b490)[iVar8] = (char)iVar5;
    }
    iVar8 = uVar4 * 0x81;
    _Dst = abStack_41f4 + iVar8;
    _memcpy(_Dst,&DAT_10b1b490,0x80);
    auStack_4174[iVar8] = 0;
    _memcpy(_Dst,_Src,0x80);
    appMemset((void *)(DAT_10b1f538 + 0xe8),0,0x80);
    puStackY_4228 = (undefined *)0x1040bfc1;
    _memcpy((void *)(DAT_10b1f538 + 0xe8),_Dst,0x80);
    for (iVar5 = 0x40; iVar5 < 0x80; iVar5 = iVar5 + 1) {
      abStack_41f4[iVar8 + iVar5] = abStackY_4234[iVar8 + iVar5] ^ abStack_41f4[iVar8 + iVar5];
    }
    *(uint *)((int)auStack_41e7 + iVar8) =
         *(uint *)((int)auStack_41e7 + iVar8) ^ *(uint *)((int)auStack_41c0 + iVar8);
    for (local_18 = 0; local_18 < 0x40; local_18 = local_18 + 1) {
      abStack_41f4[iVar8 + local_18] =
           abStack_41b4[local_18 + iVar8] ^ abStack_41f4[iVar8 + local_18];
    }
    uVar1 = *(undefined4 *)((int)auStack_41a7 + iVar8);
    *(undefined4 *)((int)auStack_41a7 + iVar8) = *(undefined4 *)(abStack_41f4 + iVar8);
    *(undefined4 *)(abStack_41f4 + iVar8) = uVar1;
    local_3c = DAT_1087f648;
    local_38 = DAT_1087f64c;
    local_174[0] = '\0';
    _memset(local_174 + 1,0,0x100);
    iVar8 = 0;
    iVar5 = 0;
    while (iVar5 < 0x80) {
      bVar7 = abStack_41f4[uVar4 * 0x81 + iVar5];
      bVar2 = bVar7 >> 4;
      if (bVar2 < 10) {
        cVar3 = '0';
      }
      else {
        cVar3 = '7';
      }
      local_174[iVar8] = bVar2 + cVar3;
      bVar7 = bVar7 & 0xf;
      if (bVar7 < 10) {
        local_174[iVar8 + 1] = bVar7 + 0x30;
        iVar8 = iVar8 + 2;
        iVar5 = iVar5 + 1;
      }
      else {
        local_174[iVar8 + 1] = bVar7 + 0x37;
        iVar8 = iVar8 + 2;
        iVar5 = iVar5 + 1;
      }
    }
    local_40 = iVar5;
    local_1c = iVar8;
    if (*(int *)GL2CurrentTxtCodec_exref != 0) {
      (**(code **)(**(int **)GL2CurrentTxtCodec_exref + 8))();
    }
    thunk_FUN_104026b0();
    puStackY_4228 = &DAT_10883d08;
    iStackY_422c = (int)_Src + 0x90;
    uStackY_4230 = *(undefined4 *)(param_1 + 0x4c);
    abStackY_4234[0] = 0x58;
    abStackY_4234[1] = 0xc1;
    abStackY_4234[2] = 0x40;
    abStackY_4234[3] = 0x10;
    thunk_FUN_104026b0();
    *(undefined4 *)(*(int *)(param_1 + 0x4c) + 0x50b8) = 0;
    thunk_FUN_103ff550();
    UGameEngine::OnGameGuardQuery
              (*(UGameEngine **)(DAT_10b1f538 + 0x54),local_28,local_24,local_20,local_20,3);
    pcVar6 = GLog_exref;
    if (*(int *)GLog_exref != 0) {
      FOutputDevice::Logf2((FOutputDevice *)DAT_10b1f538,*(ushort **)GLog_exref);
      pcVar6 = extraout_EAX;
    }
  }
  ExceptionList = local_10;
  return (uint)pcVar6 & 0xffffff00;
}


// ==== 1040c310 FUN_1040c310 depth=0 from=raiz callees=thunk_FUN_104026b0@103034e5 UGameEngine::OnGameGuardQuery@10310f28 CORE.DLL::FOutputDevice::Logf2@EXTERNAL:0000002e
// strings: 10883d84=ddddd | 10883d3c=AC_GAMEGUARD : %d %d %d %d %d | 

uint FUN_1040c310(int param_1,undefined4 param_2)

{
  code *extraout_EAX;
  code *pcVar1;
  ulong local_24;
  ulong local_20;
  ulong local_1c;
  ulong local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1080e950;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffc8;
  local_8 = 0;
  ExceptionList = &local_10;
  thunk_FUN_104026b0(*(undefined4 *)(param_1 + 0x4c),param_2,"ddddd",DAT_10b1f538 + 0xe4,&local_24,
                     &local_20,&local_1c,&local_18);
  UGameEngine::OnGameGuardQuery
            (*(UGameEngine **)(DAT_10b1f538 + 0x54),local_24,local_20,local_1c,local_18,4);
  pcVar1 = GLog_exref;
  if (*(int *)GLog_exref != 0) {
    FOutputDevice::Logf2((FOutputDevice *)DAT_10b1f538,*(ushort **)GLog_exref);
    pcVar1 = extraout_EAX;
  }
  ExceptionList = local_10;
  return (uint)pcVar1 & 0xffffff00;
}


// ==== 1040c450 FUN_1040c450 depth=0 from=raiz callees=CORE.DLL::appMemset@EXTERNAL:000000c9 CORE.DLL::FOutputDevice::Logf@EXTERNAL:000000b4 thunk_FUN_104026b0@103034e5 thunk_FUN_10402b50@10306118
// strings: 10883db8=(Receive)LoginFailPacket2 errorcode:%d | 

uint FUN_1040c450(int param_1,undefined4 param_2)

{
  code *pcVar1;
  uint extraout_EAX;
  FOutputDevice *pFVar2;
  FOutputDevice *local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1080e960;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffd4;
  local_8 = 0;
  local_18 = (FOutputDevice *)0x0;
  ExceptionList = &local_10;
  thunk_FUN_104026b0(*(undefined4 *)(param_1 + 0x4c),param_2,&DAT_1087f9dc,&local_18);
  if (local_18 == (FOutputDevice *)0x1f) {
    pcVar1 = *(code **)(*(int *)GL2Console + 0x90);
    pFVar2 = (FOutputDevice *)0x1f;
  }
  else {
    appMemset((void *)(DAT_10b1f538 + 0xe8),0,0x80);
    *(undefined4 *)(DAT_10b1f538 + 0x50) = 0;
    thunk_FUN_10402b50();
    *(undefined4 *)(*(int *)(DAT_10b1f538 + 0x4c) + 0x38) = 0;
    *(undefined4 *)(*(int *)(DAT_10b1f538 + 0x4c) + 0x4850) = 0;
    *(undefined4 *)(*(int *)(DAT_10b1f538 + 0x4c) + 0x4854) = 0;
    *(undefined4 *)(*(int *)(DAT_10b1f538 + 0x4c) + 0x50bc) = 0;
    pcVar1 = *(code **)(*(int *)GL2Console + 0x90);
    pFVar2 = local_18;
  }
  (*pcVar1)(pFVar2);
  FOutputDevice::Logf(local_18,*(ushort **)GNetworkLog_exref);
  ExceptionList = local_10;
  return extraout_EAX & 0xffffff00;
}


// ==== 1040c5e0 FUN_1040c5e0 depth=0 from=raiz callees=WS2_32.DLL::closesocket@EXTERNAL:0000000d KERNEL32.DLL::DeleteCriticalSection@EXTERNAL:000003e8 CORE.DLL::FOutputDevice::Logf@EXTERNAL:000000b4 thunk_FUN_104026b0@103034e5
// strings: 10883e60=(Receive)AccountKickedPacketMerge | 10883e18=(Receive)AccountKickedPacket | 

uint FUN_1040c5e0(int param_1,undefined4 param_2)

{
  int iVar1;
  uint extraout_EAX;
  undefined4 local_8;
  undefined4 local_4;
  
  local_4 = 0;
  local_8 = 0;
  thunk_FUN_104026b0(*(undefined4 *)(param_1 + 0x4c),param_2,&DAT_1087ff44,&local_4,&local_8);
  *(undefined4 *)(DAT_10b1f538 + 0x50) = 0;
  iVar1 = *(int *)(DAT_10b1f538 + 0x4c);
  if (*(SOCKET *)(iVar1 + 0x38) != 0) {
    closesocket(*(SOCKET *)(iVar1 + 0x38));
    DeleteCriticalSection((LPCRITICAL_SECTION)(iVar1 + 0x4efc));
  }
  *(undefined4 *)(iVar1 + 0x38) = 0;
  *(undefined4 *)(*(int *)(DAT_10b1f538 + 0x4c) + 0x38) = 0;
  *(undefined4 *)(*(int *)(DAT_10b1f538 + 0x4c) + 0x4850) = 0;
  *(undefined4 *)(*(int *)(DAT_10b1f538 + 0x4c) + 0x4854) = 0;
  *(undefined4 *)(*(int *)(param_1 + 0x4c) + 0x50b8) = 1;
  iVar1 = (**(code **)(*(int *)GL2Console + 0x544))(local_8);
  if (iVar1 == 0) {
    (**(code **)(*(int *)GL2Console + 0x540))(local_8);
  }
  FOutputDevice::Logf(*(FOutputDevice **)GNetworkLog_exref,
                      (ushort *)*(FOutputDevice **)GNetworkLog_exref);
  return extraout_EAX & 0xffffff00;
}


// ==== 1040c710 FUN_1040c710 depth=0 from=raiz callees=CORE.DLL::L2ParamStack::PushBack@EXTERNAL:00000136 CORE.DLL::L2ParamStack::~L2ParamStack@EXTERNAL:0000012a CORE.DLL::appMemset@EXTERNAL:000000c9 CORE.DLL::L2ParamStack::L2ParamStack@EXTERNAL:0000012b CORE.DLL::FOutputDevice::Logf@EXTERNAL:000000b4 thunk_FUN_104026b0@103034e5
// strings: 10883f24=dddddddd | 10883ef4=FobiddenServerFlag | 10883eb4=(Receive)LoginOkPacket  | 

uint FUN_1040c710(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  void *pvVar2;
  int iVar3;
  uint extraout_EAX;
  void *unaff_EBP;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20 [3];
  void *pvStack_14;
  undefined4 uStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_1080e979;
  pvStack_c = ExceptionList;
  local_28 = 0;
  local_24 = 0;
  local_20[0] = 0;
  local_2c = 0;
  ExceptionList = &pvStack_c;
  uVar1 = thunk_FUN_104026b0(*(undefined4 *)(param_1 + 0x4c),param_2,"dddddddd",&DAT_10b20f34,
                             &DAT_10b20f38,&DAT_10b20f3c,&DAT_10b20f40,&local_2c,local_20,&local_24,
                             &local_28);
  pvVar2 = (void *)(**(code **)**(undefined4 **)GMalloc_exref)(0x10,L"FobiddenServerFlag");
  thunk_FUN_104026b0(*(undefined4 *)(param_1 + 0x4c),uVar1,&DAT_10883ef0,0x10,pvVar2);
  iVar3 = (**(code **)(**(int **)(DAT_10b1f538 + 0x54) + 0x2c8))(unaff_EBP);
  if (iVar3 != 0) {
    appMemset((void *)(DAT_10b1f538 + 0xe8),0,0x80);
    L2ParamStack::L2ParamStack((L2ParamStack *)&local_28,10);
    uStack_10 = 0;
    L2ParamStack::PushBack((L2ParamStack *)&local_28,unaff_EBP);
    L2ParamStack::PushBack((L2ParamStack *)&local_28,pvVar2);
    (**(code **)(*(int *)GL2Console + 0x94))(&local_28);
    uStack_10 = 0xffffffff;
    L2ParamStack::~L2ParamStack((L2ParamStack *)&local_28);
  }
  if (pvVar2 != (void *)0x0) {
    (**(code **)(**(int **)GMalloc_exref + 8))(pvVar2);
  }
  FOutputDevice::Logf((FOutputDevice *)GNetworkLog_exref,*(ushort **)GNetworkLog_exref);
  ExceptionList = pvStack_14;
  return extraout_EAX & 0xffffff00;
}


// ==== 1040c930 FUN_1040c930 depth=0 from=raiz callees=CORE.DLL::L2ParamStack::PushBack@EXTERNAL:00000136 CORE.DLL::L2ParamStack::~L2ParamStack@EXTERNAL:0000012a CORE.DLL::L2ParamStack::L2ParamStack@EXTERNAL:0000012b CORE.DLL::FOutputDevice::Logf@EXTERNAL:000000b4 thunk_FUN_104026b0@103034e5
// strings: 10883f98=cddcchhcdc | 10883f38=(Receive)ServerListPacket ServerNum:%d | 

/* WARNING: Removing unreachable block (ram,0x1040c9c6) */
/* WARNING: Removing unreachable block (ram,0x1040c9d0) */
/* WARNING: Removing unreachable block (ram,0x1040cabd) */
/* WARNING: Removing unreachable block (ram,0x1040cac4) */
/* WARNING: Removing unreachable block (ram,0x1040ca9f) */
/* WARNING: Removing unreachable block (ram,0x1040caa6) */
/* WARNING: Removing unreachable block (ram,0x1040cad9) */
/* WARNING: Removing unreachable block (ram,0x1040cb00) */

uint FUN_1040c930(int param_1,undefined4 param_2)

{
  uint extraout_EAX;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_1080e999;
  pvStack_c = ExceptionList;
  local_48 = 0;
  local_40 = 0;
  local_3c = 0;
  local_38 = 0;
  local_44 = 0;
  local_34 = 0;
  local_30 = 0;
  local_2c = 0;
  local_28 = 0;
  local_24 = 0;
  local_20 = 0;
  ExceptionList = &pvStack_c;
  thunk_FUN_104026b0(*(undefined4 *)(param_1 + 0x4c),param_2,&DAT_10881a1c,&local_48,&local_44);
  (**(code **)(*(int *)GL2Console + 0xbc))(local_44);
  (**(code **)(*(int *)GL2Console + 0xc4))();
  FOutputDevice::Logf((FOutputDevice *)0x0,*(ushort **)GNetworkLog_exref);
  ExceptionList = pvStack_c;
  return extraout_EAX & 0xffffff00;
}


// ==== 1040d000 FUN_1040d000 depth=0 from=raiz callees=CORE.DLL::L2ParamStack::PushBack@EXTERNAL:00000136 CORE.DLL::L2ParamStack::~L2ParamStack@EXTERNAL:0000012a CORE.DLL::L2ParamStack::L2ParamStack@EXTERNAL:0000012b CORE.DLL::FOutputDevice::Logf@EXTERNAL:000000b4 thunk_FUN_104026b0@103034e5 _memcpy_s@107a67d9
// strings: 108840c4=(Receive)VersionCheck | 108840b8=cSddddd | 10884084=(Send)C_LOGIN Packet | 

uint FUN_1040d000(int param_1,undefined4 param_2)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint extraout_EAX;
  wchar_t *pwVar5;
  undefined4 local_54;
  void *local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined1 local_44 [8];
  undefined1 local_3c;
  undefined4 local_3b;
  undefined4 local_37;
  undefined4 local_33;
  undefined2 local_2f;
  undefined1 local_2d;
  undefined1 local_2c;
  undefined4 local_2b;
  undefined4 local_27;
  undefined4 local_23;
  undefined2 local_1f;
  undefined1 local_1d;
  L2ParamStack local_1c [4];
  L2ParamStack aLStack_18 [12];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  iVar3 = param_1;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1080e9b9;
  pvStack_c = ExceptionList;
  local_4c = 0x19327c8;
  local_48 = 0x97316ca1;
  local_54 = 0;
  local_50 = (void *)0x0;
  ExceptionList = &pvStack_c;
  thunk_FUN_104026b0(*(undefined4 *)(param_1 + 0x48),param_2,&DAT_108840f8,&param_1,local_44,
                     &local_54,&local_50);
  *(undefined4 *)(*(int *)(iVar3 + 0x48) + 0x50bc) = local_54;
  uVar4 = 0;
  local_3c = 0;
  local_3b = 0;
  local_37 = 0;
  local_33 = 0;
  local_2f = 0;
  local_2d = 0;
  local_2c = 0;
  local_2b = 0;
  local_27 = 0;
  local_23 = 0;
  local_1f = 0;
  local_1d = 0;
  do {
    (&local_3c)[uVar4] = local_44[uVar4];
    (&local_2c)[uVar4] = local_44[uVar4];
    uVar1 = *(undefined1 *)((int)&local_4c + uVar4);
    *(undefined1 *)((int)&local_37 + uVar4 + 3) = uVar1;
    *(undefined1 *)((int)&local_27 + uVar4 + 3) = uVar1;
    uVar4 = uVar4 + 1;
  } while (uVar4 < 8);
  iVar2 = *(int *)(iVar3 + 0x48);
  _memcpy_s((void *)(iVar2 + 0x50d2),0x10,&local_3c,0x10);
  *(undefined1 *)(iVar2 + 0x50d1) = 1;
  iVar3 = *(int *)(iVar3 + 0x48);
  _memcpy_s((void *)(iVar3 + 0x50c1),0x10,&local_2c,0x10);
  *(undefined1 *)(iVar3 + 0x50c0) = 1;
  L2ParamStack::L2ParamStack(local_1c,10);
  local_4 = 0;
  L2ParamStack::PushBack(local_1c,(void *)(int)(char)param_1);
  L2ParamStack::PushBack(local_1c,local_50);
  (**(code **)(**(int **)(DAT_10b1f538 + 0x54) + 0x418))(local_1c);
  pwVar5 = L"(Receive)VersionCheck";
  FOutputDevice::Logf((FOutputDevice *)GNetworkLog_exref,*(ushort **)GNetworkLog_exref);
  (**(code **)(**(int **)(DAT_10b1f538 + 0x48) + 0x68))
            (*(int **)(DAT_10b1f538 + 0x48),"cSddddd",8,&DAT_10b20f54,DAT_10b20f4c,DAT_10b20f50,
             DAT_10b20f34,DAT_10b20f38,*(undefined4 *)GLanguageType_exref,pwVar5);
  FOutputDevice::Logf((FOutputDevice *)GNetworkLog_exref,*(ushort **)GNetworkLog_exref);
  L2ParamStack::~L2ParamStack(aLStack_18);
  ExceptionList = puStack_8;
  return extraout_EAX & 0xffffff00;
}


// ==== 1040d250 FUN_1040d250 depth=0 from=raiz callees=CORE.DLL::L2ParamStack::PushBack@EXTERNAL:00000136 CORE.DLL::L2ParamStack::~L2ParamStack@EXTERNAL:0000012a CORE.DLL::L2ParamStack::L2ParamStack@EXTERNAL:0000012b CORE.DLL::FOutputDevice::Logf@EXTERNAL:000000b4 thunk_FUN_104026b0@103034e5
// strings: 10884100=(Receive)NcpSay CreatureID : %d classid : %d Say Msg:%s | 

uint FUN_1040d250(int param_1,undefined4 param_2)

{
  uint extraout_EAX;
  void *local_428;
  void *local_424;
  void *local_420;
  L2ParamStack local_41c [16];
  undefined1 local_40c [1024];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1080e9dc;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  thunk_FUN_104026b0(*(undefined4 *)(param_1 + 0x48),param_2,&DAT_10884188,&local_424,&local_420,
                     &local_428,0x400,local_40c);
  L2ParamStack::L2ParamStack(local_41c,10);
  local_4 = 0;
  L2ParamStack::PushBack(local_41c,local_424);
  L2ParamStack::PushBack(local_41c,local_420);
  L2ParamStack::PushBack(local_41c,local_428);
  L2ParamStack::PushBack(local_41c,local_40c);
  (**(code **)(*(int *)GL2Console + 0x5b8))(local_41c);
  FOutputDevice::Logf(*(FOutputDevice **)GNetworkLog_exref,
                      (ushort *)*(FOutputDevice **)GNetworkLog_exref);
  local_4 = 0xffffffff;
  L2ParamStack::~L2ParamStack(local_41c);
  ExceptionList = pvStack_c;
  return extraout_EAX & 0xffffff00;
}


// ==== 1040d3a0 FUN_1040d3a0 depth=0 from=raiz callees=CORE.DLL::FOutputDevice::Logf@EXTERNAL:000000b4 thunk_FUN_104026b0@103034e5
// strings: 108841c4=(Receive)ExUseSharedGroupItem | 

uint FUN_1040d3a0(int param_1,undefined4 param_2)

{
  uint extraout_EAX;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1080e9f0;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffc8;
  local_8 = 0;
  ExceptionList = &local_10;
  thunk_FUN_104026b0(*(undefined4 *)(param_1 + 0x48),param_2,&DAT_108810b0,&local_24,&local_20,
                     &local_1c,&local_18);
  (**(code **)(**(int **)(DAT_10b1f538 + 0x54) + 800))(local_24,local_20,local_1c,local_18);
  FOutputDevice::Logf(*(FOutputDevice **)GNetworkLog_exref,
                      (ushort *)*(FOutputDevice **)GNetworkLog_exref);
  ExceptionList = local_10;
  return extraout_EAX & 0xffffff00;
}


// ==== 1040d4a0 FUN_1040d4a0 depth=0 from=raiz callees=CORE.DLL::L2ParamStack::PushBack@EXTERNAL:00000136 CORE.DLL::L2ParamStack::~L2ParamStack@EXTERNAL:0000012a CORE.DLL::L2ParamStack::L2ParamStack@EXTERNAL:0000012b thunk_FUN_104026b0@103034e5 thunk_FUN_103254c0@103136f6 thunk_FUN_103ff730@1031082f
// strings: 

uint FUN_1040d4a0(int param_1,undefined4 param_2)

{
  void *pvVar1;
  undefined4 uVar2;
  uint extraout_EAX;
  int iVar3;
  L2ParamStack local_40 [24];
  int local_28;
  int local_24;
  void *local_20;
  void *local_1c;
  void *local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  puStack_c = &LAB_1080ea09;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffb4;
  iVar3 = 0;
  local_8 = 0;
  ExceptionList = &local_10;
  param_2 = thunk_FUN_104026b0(*(undefined4 *)(param_1 + 0x48),param_2,&DAT_1087ff8c,&local_18);
  L2ParamStack::L2ParamStack(local_40,(int)local_18 * 3 + 1);
  local_8 = CONCAT31(local_8._1_3_,1);
  L2ParamStack::PushBack(local_40,local_18);
  pvVar1 = local_20;
  if (0 < (int)local_18) {
    pvVar1 = (void *)thunk_FUN_103ff730(-(uint)((int)(ZEXT48(local_18) * 4 >> 0x20) != 0) |
                                        (uint)(ZEXT48(local_18) * 4));
    for (; local_24 = iVar3, iVar3 < (int)local_18; iVar3 = iVar3 + 1) {
      local_1c = (void *)0x0;
      local_20 = (void *)0x0;
      uVar2 = thunk_FUN_103ff730(0x100);
      *(undefined4 *)((int)pvVar1 + iVar3 * 4) = uVar2;
      param_2 = thunk_FUN_104026b0(*(undefined4 *)(param_1 + 0x48),param_2,&DAT_1088424c,0x80,uVar2,
                                   &local_1c,&local_20);
      L2ParamStack::PushBack(local_40,*(void **)((int)pvVar1 + iVar3 * 4));
      L2ParamStack::PushBack(local_40,local_1c);
      L2ParamStack::PushBack(local_40,local_20);
    }
  }
  (**(code **)(**(int **)(DAT_10b1f538 + 0x54) + 0x738))(local_40);
  if (0 < (int)local_18) {
    for (iVar3 = 0; local_28 = iVar3, iVar3 < (int)local_18; iVar3 = iVar3 + 1) {
      thunk_FUN_103254c0(*(undefined4 *)((int)pvVar1 + iVar3 * 4));
    }
    thunk_FUN_103254c0(pvVar1);
  }
  local_8 = local_8 & 0xffffff00;
  L2ParamStack::~L2ParamStack(local_40);
  ExceptionList = local_10;
  return extraout_EAX & 0xffffff00;
}


// ==== 1040d690 FUN_1040d690 depth=0 from=raiz callees=CORE.DLL::L2ParamStack::PushBack@EXTERNAL:00000136 CORE.DLL::L2ParamStack::~L2ParamStack@EXTERNAL:0000012a CORE.DLL::L2ParamStack::L2ParamStack@EXTERNAL:0000012b CORE.DLL::FOutputDevice::Logf@EXTERNAL:000000b4 thunk_FUN_104026b0@103034e5
// strings: 10884280=(Receive)ExNeedToChangeName Type:%d Reason:%d OriginalName:%s | 

uint FUN_1040d690(int param_1,undefined4 param_2)

{
  uint extraout_EAX;
  undefined1 local_138 [264];
  L2ParamStack local_30 [20];
  void *local_1c;
  void *local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_1080ea29;
  local_10 = ExceptionList;
  local_14 = &stack0xfffffebc;
  local_8 = 0;
  local_1c = (void *)0x0;
  local_18 = (void *)0x0;
  ExceptionList = &local_10;
  thunk_FUN_104026b0(*(undefined4 *)(param_1 + 0x48),param_2,&DAT_10884314,&local_1c,&local_18,0x80,
                     local_138);
  L2ParamStack::L2ParamStack(local_30,10);
  local_8._0_1_ = 1;
  L2ParamStack::PushBack(local_30,local_1c);
  L2ParamStack::PushBack(local_30,local_18);
  L2ParamStack::PushBack(local_30,local_138);
  (**(code **)(**(int **)(DAT_10b1f538 + 0x54) + 0x740))(local_30);
  FOutputDevice::Logf(*(FOutputDevice **)GNetworkLog_exref,
                      (ushort *)*(FOutputDevice **)GNetworkLog_exref);
  local_8 = (uint)local_8._1_3_ << 8;
  L2ParamStack::~L2ParamStack(local_30);
  ExceptionList = local_10;
  return extraout_EAX & 0xffffff00;
}


// ==== 1040d7f0 FUN_1040d7f0 depth=0 from=raiz callees=thunk_FUN_104026b0@103034e5
// strings: 

uint FUN_1040d7f0(int param_1,undefined4 param_2)

{
  uint uVar1;
  undefined1 local_1c [8];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1080ea40;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffd4;
  local_8 = 0;
  ExceptionList = &local_10;
  thunk_FUN_104026b0(*(undefined4 *)(param_1 + 0x48),param_2,&DAT_1087ff8c,local_1c);
  uVar1 = (**(code **)(**(int **)(DAT_10b1f538 + 0x54) + 0x5ac))();
  ExceptionList = local_10;
  return uVar1 & 0xffffff00;
}


// ==== 1040d8c0 FUN_1040d8c0 depth=0 from=raiz callees=CORE.DLL::L2ParamStack::PushBack@EXTERNAL:00000136 CORE.DLL::L2ParamStack::~L2ParamStack@EXTERNAL:0000012a CORE.DLL::L2ParamStack::L2ParamStack@EXTERNAL:0000012b thunk_FUN_104026b0@103034e5
// strings: 

uint FUN_1040d8c0(int param_1,undefined4 param_2)

{
  uint extraout_EAX;
  undefined1 local_13c [264];
  L2ParamStack local_34 [20];
  void *local_20;
  void *local_1c;
  void *local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_1080ea59;
  local_10 = ExceptionList;
  local_14 = &stack0xfffffeb8;
  local_8 = 0;
  local_1c = (void *)0x0;
  local_18 = (void *)0x0;
  local_20 = (void *)0x0;
  ExceptionList = &local_10;
  thunk_FUN_104026b0(*(undefined4 *)(param_1 + 0x48),param_2,&DAT_10884368,0x80,local_13c,&local_1c,
                     &local_18,&local_20);
  L2ParamStack::L2ParamStack(local_34,10);
  local_8._0_1_ = 1;
  L2ParamStack::PushBack(local_34,local_13c);
  L2ParamStack::PushBack(local_34,local_1c);
  L2ParamStack::PushBack(local_34,local_18);
  L2ParamStack::PushBack(local_34,local_20);
  (**(code **)(**(int **)(DAT_10b1f538 + 0x54) + 0x73c))(local_34);
  local_8 = (uint)local_8._1_3_ << 8;
  L2ParamStack::~L2ParamStack(local_34);
  ExceptionList = local_10;
  return extraout_EAX & 0xffffff00;
}


// ==== 1040da10 FUN_1040da10 depth=0 from=raiz callees=CORE.DLL::L2ParamStack::PushBack@EXTERNAL:00000136 CORE.DLL::L2ParamStack::~L2ParamStack@EXTERNAL:0000012a CORE.DLL::L2ParamStack::L2ParamStack@EXTERNAL:0000012b CORE.DLL::FOutputDevice::Logf@EXTERNAL:000000b4 thunk_FUN_104026b0@103034e5
// strings: 10884394=(Receive)ExDuelAskStart | 

uint FUN_1040da10(int param_1,undefined4 param_2)

{
  uint extraout_EAX;
  undefined1 local_60 [48];
  L2ParamStack local_30 [24];
  void *local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_1080ea79;
  local_10 = ExceptionList;
  local_14 = &stack0xffffff94;
  local_8 = 0;
  ExceptionList = &local_10;
  thunk_FUN_104026b0(*(undefined4 *)(param_1 + 0x48),param_2,&DAT_108843d0,0x30,local_60,&local_18);
  L2ParamStack::L2ParamStack(local_30,10);
  local_8._0_1_ = 1;
  L2ParamStack::PushBack(local_30,local_60);
  L2ParamStack::PushBack(local_30,local_18);
  (**(code **)(**(int **)(DAT_10b1f538 + 0x54) + 0x778))(local_30);
  FOutputDevice::Logf(*(FOutputDevice **)GNetworkLog_exref,
                      (ushort *)*(FOutputDevice **)GNetworkLog_exref);
  local_8 = (uint)local_8._1_3_ << 8;
  L2ParamStack::~L2ParamStack(local_30);
  ExceptionList = local_10;
  return extraout_EAX & 0xffffff00;
}


// ==== 1040db40 FUN_1040db40 depth=0 from=raiz callees=CORE.DLL::L2ParamStack::PushBack@EXTERNAL:00000136 CORE.DLL::L2ParamStack::~L2ParamStack@EXTERNAL:0000012a CORE.DLL::L2ParamStack::L2ParamStack@EXTERNAL:0000012b CORE.DLL::FOutputDevice::Logf@EXTERNAL:000000b4 thunk_FUN_104026b0@103034e5
// strings: 108843f0=(Receive)ExDuelReady | 

uint FUN_1040db40(int param_1,undefined4 param_2)

{
  uint extraout_EAX;
  L2ParamStack local_30 [24];
  void *local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_1080ea99;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffc4;
  local_8 = 0;
  ExceptionList = &local_10;
  thunk_FUN_104026b0(*(undefined4 *)(param_1 + 0x48),param_2,&DAT_1087ff8c,&local_18);
  L2ParamStack::L2ParamStack(local_30,10);
  local_8._0_1_ = 1;
  L2ParamStack::PushBack(local_30,local_18);
  (**(code **)(**(int **)(DAT_10b1f538 + 0x54) + 0x77c))(local_30);
  FOutputDevice::Logf((FOutputDevice *)GNetworkLog_exref,*(ushort **)GNetworkLog_exref);
  local_8 = (uint)local_8._1_3_ << 8;
  L2ParamStack::~L2ParamStack(local_30);
  ExceptionList = local_10;
  return extraout_EAX & 0xffffff00;
}


// ==== 1040dc60 FUN_1040dc60 depth=0 from=raiz callees=CORE.DLL::L2ParamStack::PushBack@EXTERNAL:00000136 CORE.DLL::L2ParamStack::~L2ParamStack@EXTERNAL:0000012a CORE.DLL::L2ParamStack::L2ParamStack@EXTERNAL:0000012b CORE.DLL::FOutputDevice::Logf@EXTERNAL:000000b4 thunk_FUN_104026b0@103034e5
// strings: 10884440=(Receive)ExDuelStart | 

uint FUN_1040dc60(int param_1,undefined4 param_2)

{
  uint extraout_EAX;
  L2ParamStack local_30 [24];
  void *local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_1080eab9;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffc4;
  local_8 = 0;
  ExceptionList = &local_10;
  thunk_FUN_104026b0(*(undefined4 *)(param_1 + 0x48),param_2,&DAT_1087ff8c,&local_18);
  L2ParamStack::L2ParamStack(local_30,10);
  local_8._0_1_ = 1;
  L2ParamStack::PushBack(local_30,local_18);
  (**(code **)(**(int **)(DAT_10b1f538 + 0x54) + 0x780))(local_30);
  FOutputDevice::Logf((FOutputDevice *)GNetworkLog_exref,*(ushort **)GNetworkLog_exref);
  local_8 = (uint)local_8._1_3_ << 8;
  L2ParamStack::~L2ParamStack(local_30);
  ExceptionList = local_10;
  return extraout_EAX & 0xffffff00;
}


// ==== 1040dd80 FUN_1040dd80 depth=0 from=raiz callees=CORE.DLL::L2ParamStack::PushBack@EXTERNAL:00000136 CORE.DLL::L2ParamStack::~L2ParamStack@EXTERNAL:0000012a CORE.DLL::L2ParamStack::L2ParamStack@EXTERNAL:0000012b CORE.DLL::FOutputDevice::Logf@EXTERNAL:000000b4 thunk_FUN_104026b0@103034e5
// strings: 1088448c=(Receive)ExDuelEnd | 

uint FUN_1040dd80(int param_1,undefined4 param_2)

{
  uint extraout_EAX;
  L2ParamStack local_30 [24];
  void *local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_1080ead9;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffc4;
  local_8 = 0;
  ExceptionList = &local_10;
  thunk_FUN_104026b0(*(undefined4 *)(param_1 + 0x48),param_2,&DAT_1087ff8c,&local_18);
  L2ParamStack::L2ParamStack(local_30,10);
  local_8._0_1_ = 1;
  L2ParamStack::PushBack(local_30,local_18);
  (**(code **)(**(int **)(DAT_10b1f538 + 0x54) + 0x784))(local_30);
  FOutputDevice::Logf((FOutputDevice *)GNetworkLog_exref,*(ushort **)GNetworkLog_exref);
  local_8 = (uint)local_8._1_3_ << 8;
  L2ParamStack::~L2ParamStack(local_30);
  ExceptionList = local_10;
  return extraout_EAX & 0xffffff00;
}


// ==== 1040dea0 FUN_1040dea0 depth=0 from=raiz callees=CORE.DLL::L2ParamStack::PushBack@EXTERNAL:00000136 CORE.DLL::L2ParamStack::~L2ParamStack@EXTERNAL:0000012a CORE.DLL::L2ParamStack::L2ParamStack@EXTERNAL:0000012b CORE.DLL::FOutputDevice::Logf@EXTERNAL:000000b4 thunk_FUN_104026b0@103034e5
// strings: 10884538=Sddddddddd | 108844f0=(Receive)ExDuelUpdateUserInfo | 

uint FUN_1040dea0(int param_1,undefined4 param_2)

{
  uint extraout_EAX;
  undefined1 local_80 [48];
  L2ParamStack local_50 [24];
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
  
  puStack_c = &LAB_1080eaf9;
  local_10 = ExceptionList;
  local_14 = &stack0xffffff74;
  local_8 = 0;
  ExceptionList = &local_10;
  thunk_FUN_104026b0(*(undefined4 *)(param_1 + 0x48),param_2,"Sddddddddd",0x30,local_80,&local_18,
                     &local_1c,&local_20,&local_24,&local_28,&local_2c,&local_30,&local_34,&local_38
                    );
  L2ParamStack::L2ParamStack(local_50,10);
  local_8._0_1_ = 1;
  L2ParamStack::PushBack(local_50,local_80);
  L2ParamStack::PushBack(local_50,local_18);
  L2ParamStack::PushBack(local_50,local_1c);
  L2ParamStack::PushBack(local_50,local_20);
  L2ParamStack::PushBack(local_50,local_24);
  L2ParamStack::PushBack(local_50,local_28);
  L2ParamStack::PushBack(local_50,local_2c);
  L2ParamStack::PushBack(local_50,local_30);
  L2ParamStack::PushBack(local_50,local_34);
  L2ParamStack::PushBack(local_50,local_38);
  (**(code **)(**(int **)(DAT_10b1f538 + 0x54) + 0x788))(local_50);
  FOutputDevice::Logf((FOutputDevice *)GNetworkLog_exref,*(ushort **)GNetworkLog_exref);
  local_8 = (uint)local_8._1_3_ << 8;
  L2ParamStack::~L2ParamStack(local_50);
  ExceptionList = local_10;
  return extraout_EAX & 0xffffff00;
}


// ==== 1040e050 FUN_1040e050 depth=0 from=raiz callees=thunk_FUN_104026b0@103034e5
// strings: 

uint FUN_1040e050(int param_1,undefined4 param_2)

{
  uint uVar1;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1080eb10;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffcc;
  local_8 = 0;
  ExceptionList = &local_10;
  thunk_FUN_104026b0(*(undefined4 *)(param_1 + 0x48),param_2,&DAT_1087ff0c,&local_20,&local_1c,
                     &local_18);
  uVar1 = (**(code **)(**(int **)(DAT_10b1f538 + 0x54) + 0x5b8))(local_20,local_1c,local_18);
  ExceptionList = local_10;
  return uVar1 & 0xffffff00;
}


// ==== 1040e130 FUN_1040e130 depth=0 from=raiz callees=thunk_FUN_104026b0@103034e5
// strings: 10883d84=ddddd | 

uint FUN_1040e130(int param_1,undefined4 param_2)

{
  uint uVar1;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1080eb20;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffc4;
  local_8 = 0;
  ExceptionList = &local_10;
  thunk_FUN_104026b0(*(undefined4 *)(param_1 + 0x48),param_2,"ddddd",&local_28,&local_24,&local_20,
                     &local_1c,&local_18);
  uVar1 = (**(code **)(**(int **)(DAT_10b1f538 + 0x54) + 0x5bc))
                    (local_28,local_24,local_20,local_1c,local_18);
  ExceptionList = local_10;
  return uVar1 & 0xffffff00;
}


// ==== 1040e220 FUN_1040e220 depth=0 from=raiz callees=thunk_FUN_104026b0@103034e5
// strings: 10883d84=ddddd | 

uint FUN_1040e220(int param_1,undefined4 param_2)

{
  uint uVar1;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1080eb30;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffc4;
  local_8 = 0;
  ExceptionList = &local_10;
  thunk_FUN_104026b0(*(undefined4 *)(param_1 + 0x48),param_2,"ddddd",&local_28,&local_24,&local_20,
                     &local_1c,&local_18);
  uVar1 = (**(code **)(**(int **)(DAT_10b1f538 + 0x54) + 0x5c0))
                    (local_28,local_24,local_20,local_1c,local_18);
  ExceptionList = local_10;
  return uVar1 & 0xffffff00;
}


// ==== 1040e310 FUN_1040e310 depth=0 from=raiz callees=thunk_FUN_104026b0@103034e5
// strings: 

uint FUN_1040e310(int param_1,undefined4 param_2)

{
  uint uVar1;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1080eb40;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffcc;
  local_8 = 0;
  ExceptionList = &local_10;
  thunk_FUN_104026b0(*(undefined4 *)(param_1 + 0x48),param_2,&DAT_1087ff0c,&local_20,&local_1c,
                     &local_18);
  uVar1 = (**(code **)(**(int **)(DAT_10b1f538 + 0x54) + 0x5c4))(local_20,local_1c,local_18);
  ExceptionList = local_10;
  return uVar1 & 0xffffff00;
}


// ==== 1040e3f0 FUN_1040e3f0 depth=0 from=raiz callees=thunk_FUN_104026b0@103034e5
// strings: 108846cc=ddddQd | 

uint FUN_1040e3f0(int param_1,undefined4 param_2)

{
  uint uVar1;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1080eb50;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffbc;
  local_8 = 0;
  ExceptionList = &local_10;
  thunk_FUN_104026b0(*(undefined4 *)(param_1 + 0x48),param_2,"ddddQd",&local_28,&local_24,&local_20,
                     &local_1c,&local_38,&local_18);
  uVar1 = (**(code **)(**(int **)(DAT_10b1f538 + 0x54) + 0x5c8))
                    (local_28,local_24,local_20,local_1c,local_38,local_34,local_18);
  ExceptionList = local_10;
  return uVar1 & 0xffffff00;
}


// ==== 1040e4f0 FUN_1040e4f0 depth=0 from=raiz callees=thunk_FUN_104026b0@103034e5
// strings: 

uint FUN_1040e4f0(int param_1,undefined4 param_2)

{
  uint uVar1;
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1080eb60;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffd4;
  local_8 = 0;
  ExceptionList = &local_10;
  thunk_FUN_104026b0(*(undefined4 *)(param_1 + 0x48),param_2,&DAT_1087ff8c,&local_18);
  uVar1 = (**(code **)(**(int **)(DAT_10b1f538 + 0x54) + 0x5cc))(local_18);
  ExceptionList = local_10;
  return uVar1 & 0xffffff00;
}


// ==== 1040e690 FUN_1040e690 depth=0 from=raiz callees=CORE.DLL::FOutputDevice::Logf@EXTERNAL:000000b4 thunk_FUN_104026b0@103034e5 __alloca_probe@107a69d0
// strings: 10884770=(Receive)TutorialShowHtmlPacket | 

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

uint FUN_1040e690(int param_1,undefined4 param_2)

{
  uint extraout_EAX;
  undefined1 local_4000 [16380];
  undefined4 uStack_4;
  
  uStack_4 = 0x1040e69a;
  thunk_FUN_104026b0(*(undefined4 *)(param_1 + 0x48),param_2,&DAT_108847bc,0x4000,local_4000);
  (**(code **)(**(int **)(DAT_10b1f538 + 0x54) + 500))(local_4000);
  FOutputDevice::Logf(*(FOutputDevice **)GNetworkLog_exref,
                      (ushort *)*(FOutputDevice **)GNetworkLog_exref);
  return extraout_EAX & 0xffffff00;
}


// ==== 1040e7f0 FUN_1040e7f0 depth=0 from=raiz callees=CORE.DLL::FOutputDevice::Logf@EXTERNAL:000000b4 thunk_FUN_104026b0@103034e5
// strings: 10883d84=ddddd | 10884884=(Receive)ShowRadarPacket | 

uint FUN_1040e7f0(int param_1,undefined4 param_2)

{
  uint extraout_EAX;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  thunk_FUN_104026b0(*(undefined4 *)(param_1 + 0x48),param_2,"ddddd",&local_4,&local_8,&local_c,
                     &local_10,&param_1);
  (**(code **)(**(int **)(DAT_10b1f538 + 0x54) + 0x208))(local_4,local_8,local_c,local_10,param_1);
  FOutputDevice::Logf((FOutputDevice *)GNetworkLog_exref,*(ushort **)GNetworkLog_exref);
  return extraout_EAX & 0xffffff00;
}


// ==== 1040e890 FUN_1040e890 depth=0 from=raiz callees=CORE.DLL::FOutputDevice::Logf@EXTERNAL:000000b4 thunk_FUN_104026b0@103034e5
// strings: 10883d84=ddddd | 10884884=(Receive)ShowRadarPacket | 

uint FUN_1040e890(int param_1,undefined4 param_2)

{
  uint extraout_EAX;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  thunk_FUN_104026b0(*(undefined4 *)(param_1 + 0x48),param_2,"ddddd",&local_4,&local_8,&local_c,
                     &local_10,&param_1);
  (**(code **)(**(int **)(DAT_10b1f538 + 0x54) + 0x208))(local_4,local_8,local_c,local_10,param_1);
  FOutputDevice::Logf((FOutputDevice *)GNetworkLog_exref,*(ushort **)GNetworkLog_exref);
  return extraout_EAX & 0xffffff00;
}


// ==== 1040e930 FUN_1040e930 depth=0 from=raiz callees=CORE.DLL::FOutputDevice::Logf@EXTERNAL:000000b4 thunk_FUN_104026b0@103034e5
// strings: 108848c0=(Receive)DeleteRadarPacket | 

uint FUN_1040e930(int param_1,undefined4 param_2)

{
  uint extraout_EAX;
  undefined4 local_8;
  undefined4 local_4;
  
  thunk_FUN_104026b0(*(undefined4 *)(param_1 + 0x48),param_2,&DAT_1087ff0c,&local_4,&local_8,
                     &param_1);
  (**(code **)(**(int **)(DAT_10b1f538 + 0x54) + 0x20c))(local_4,local_8,param_1);
  FOutputDevice::Logf(*(FOutputDevice **)GNetworkLog_exref,
                      (ushort *)*(FOutputDevice **)GNetworkLog_exref);
  return extraout_EAX & 0xffffff00;
}


// ==== 1040ea00 FUN_1040ea00 depth=0 from=raiz callees=CORE.DLL::FOutputDevice::Logf@EXTERNAL:000000b4 thunk_FUN_104026b0@103034e5
// strings: 10884940=dddhhhdhh | 10884900=(Receive)PetItemList : %d | 

uint FUN_1040ea00(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  uint extraout_EAX;
  int iVar3;
  undefined4 local_40;
  undefined2 auStack_3c [2];
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined2 uStack_20;
  undefined2 uStack_1e;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  iVar1 = param_1;
  local_40 = 0;
  uVar2 = thunk_FUN_104026b0(*(undefined4 *)(param_1 + 0x48),param_2,&DAT_1088494c,&local_40);
  (**(code **)(**(int **)(DAT_10b1f538 + 0x54) + 0x504))();
  iVar3 = 0;
  if (0 < (short)local_40) {
    do {
      auStack_3c[0] = 0xffff;
      uStack_38 = 0;
      uStack_34 = 0;
      uStack_30 = 0;
      uStack_2c = 0;
      uStack_28 = 0;
      uStack_24 = 0;
      uStack_20 = 0;
      uStack_1e = 0;
      uStack_18 = 0;
      uStack_14 = 0;
      uStack_10 = 0xffffffff;
      uStack_c = 0;
      uStack_8 = 0;
      uStack_4 = 0xffffffff;
      uStack_1c = 0;
      param_1 = -1;
      uVar2 = thunk_FUN_104026b0(*(undefined4 *)(iVar1 + 0x48),uVar2,&DAT_1088494c,&param_1);
      uVar2 = thunk_FUN_104026b0(*(undefined4 *)(iVar1 + 0x48),uVar2,"dddhhhdhh",&uStack_38,
                                 &uStack_34,&uStack_30,auStack_3c,&uStack_20,&uStack_1e,&uStack_24,
                                 &uStack_1c,&uStack_18);
      (**(code **)(**(int **)(DAT_10b1f538 + 0x54) + 0x508))(auStack_3c);
      iVar3 = iVar3 + 1;
    } while (iVar3 < (short)local_40);
  }
  FOutputDevice::Logf(*(FOutputDevice **)GNetworkLog_exref,
                      (ushort *)*(FOutputDevice **)GNetworkLog_exref);
  return extraout_EAX & 0xffffff00;
}


// ==== 1040eb90 FUN_1040eb90 depth=0 from=raiz callees=thunk_FUN_103ff8c0@1030cc7f CORE.DLL::FOutputDevice::Logf@EXTERNAL:000000b4 thunk_FUN_104026b0@103034e5
// strings: 10884940=dddhhhdhh | 108849a0=(Receive)PetInventoryUpdatePacket | 

uint FUN_1040eb90(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  uint extraout_EAX;
  undefined1 local_68 [4];
  undefined4 local_64;
  undefined1 local_60 [4];
  undefined1 local_5c [12];
  undefined1 local_50 [4];
  undefined1 local_4c [2];
  undefined1 local_4a [2];
  undefined4 local_48;
  undefined1 local_44 [32];
  undefined4 local_24;
  undefined4 local_20;
  int local_1c;
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1080eb70;
  local_10 = ExceptionList;
  local_14 = &stack0xffffff8c;
  local_8 = 0;
  local_20 = 0;
  ExceptionList = &local_10;
  uVar1 = thunk_FUN_104026b0(*(undefined4 *)(param_1 + 0x48),param_2,&DAT_1088494c,&local_20);
  for (local_1c = 0; local_1c < (short)local_20; local_1c = local_1c + 1) {
    thunk_FUN_103ff8c0();
    local_48 = 0;
    local_18 = 0xffffffff;
    local_24 = 0xffffffff;
    uVar1 = thunk_FUN_104026b0(*(undefined4 *)(param_1 + 0x48),uVar1,&DAT_108849f4,&local_18,
                               &local_24);
    uVar1 = thunk_FUN_104026b0(*(undefined4 *)(param_1 + 0x48),uVar1,"dddhhhdhh",&local_64,local_60,
                               local_5c,local_68,local_4c,local_4a,local_50,&local_48,local_44);
    (**(code **)(**(int **)(DAT_10b1f538 + 0x54) + 0x50c))((int)(short)local_18,local_68);
    if (((short)local_18 == 2) || ((short)local_18 == 3)) {
      (**(code **)(**(int **)(DAT_10b1f538 + 0x54) + 0x408))(local_64);
    }
  }
  FOutputDevice::Logf(*(FOutputDevice **)GNetworkLog_exref,
                      (ushort *)*(FOutputDevice **)GNetworkLog_exref);
  ExceptionList = local_10;
  return extraout_EAX & 0xffffff00;
}


// ==== 1040ed50 FUN_1040ed50 depth=0 from=raiz callees=thunk_FUN_104021a0@1030c00e CORE.DLL::L2ParamStack::PushBack@EXTERNAL:00000136 CORE.DLL::L2ParamStack::~L2ParamStack@EXTERNAL:0000012a CORE.DLL::L2ParamStack::L2ParamStack@EXTERNAL:0000012b CORE.DLL::FOutputDevice::Logf@EXTERNAL:000000b4 thunk_FUN_104026b0@103034e5
// strings: 10884a8c=dddddSdddddddQQQ | 10884a40=(Receive)PetStatusUpdatePacket | 

uint FUN_1040ed50(int param_1,undefined4 param_2)

{
  int iVar1;
  uint extraout_EAX;
  undefined1 local_a8 [56];
  void *local_70;
  undefined4 local_6c;
  void *local_68;
  undefined4 local_64;
  void *local_60;
  undefined4 local_5c;
  void *local_54;
  void *local_50;
  void *local_4c;
  void *local_48;
  void *local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  void *local_34;
  void *local_30;
  L2ParamStack local_2c [16];
  void *local_1c;
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_1080eb89;
  local_10 = ExceptionList;
  local_14 = &stack0xffffff4c;
  local_8 = 0;
  ExceptionList = &local_10;
  thunk_FUN_104026b0(*(undefined4 *)(param_1 + 0x48),param_2,"dddddSdddddddQQQ",&local_18,&local_1c,
                     &local_38,&local_40,&local_3c,0x30,local_a8,&local_4c,&local_54,&local_50,
                     &local_48,&local_30,&local_44,&local_34,&local_68,&local_70,&local_60);
  *(undefined4 *)(*(int *)(param_1 + 0x48) + 0x4f64) = local_18;
  *(void **)(*(int *)(param_1 + 0x48) + 0x4f68) = local_1c;
  *(undefined4 *)(*(int *)(param_1 + 0x48) + 0x4f9c) = local_38;
  *(undefined4 *)(*(int *)(param_1 + 0x48) + 0x4fa0) = local_40;
  *(undefined4 *)(*(int *)(param_1 + 0x48) + 0x4fa4) = local_3c;
  *(void **)(*(int *)(param_1 + 0x48) + 0x4fd8) = local_4c;
  *(void **)(*(int *)(param_1 + 0x48) + 0x4fdc) = local_54;
  *(void **)(*(int *)(param_1 + 0x48) + 0x4fa8) = local_50;
  *(void **)(*(int *)(param_1 + 0x48) + 0x4fac) = local_48;
  *(void **)(*(int *)(param_1 + 0x48) + 0x4fb0) = local_30;
  *(void **)(*(int *)(param_1 + 0x48) + 0x4fb4) = local_44;
  *(void **)(*(int *)(param_1 + 0x48) + 0x4fbc) = local_34;
  iVar1 = *(int *)(param_1 + 0x48);
  *(void **)(iVar1 + 0x4fc0) = local_68;
  *(undefined4 *)(iVar1 + 0x4fc4) = local_64;
  iVar1 = *(int *)(param_1 + 0x48);
  *(void **)(iVar1 + 0x4fc8) = local_70;
  *(undefined4 *)(iVar1 + 0x4fcc) = local_6c;
  iVar1 = *(int *)(param_1 + 0x48);
  *(void **)(iVar1 + 0x4fd0) = local_60;
  *(undefined4 *)(iVar1 + 0x4fd4) = local_5c;
  thunk_FUN_104021a0(local_18,local_1c,local_38,local_40,local_3c);
  L2ParamStack::L2ParamStack(local_2c,10);
  local_8._0_1_ = 1;
  L2ParamStack::PushBack(local_2c,local_1c);
  L2ParamStack::PushBack(local_2c,local_a8);
  L2ParamStack::PushBack(local_2c,local_4c);
  L2ParamStack::PushBack(local_2c,local_54);
  L2ParamStack::PushBack(local_2c,local_50);
  L2ParamStack::PushBack(local_2c,local_48);
  L2ParamStack::PushBack(local_2c,local_30);
  L2ParamStack::PushBack(local_2c,local_44);
  L2ParamStack::PushBack(local_2c,local_34);
  L2ParamStack::PushBack(local_2c,local_68);
  L2ParamStack::PushBack(local_2c,local_70);
  L2ParamStack::PushBack(local_2c,local_60);
  (**(code **)(**(int **)(DAT_10b1f538 + 0x54) + 0x500))(local_18,local_2c);
  FOutputDevice::Logf((FOutputDevice *)GNetworkLog_exref,*(ushort **)GNetworkLog_exref);
  local_8 = (uint)local_8._1_3_ << 8;
  L2ParamStack::~L2ParamStack(local_2c);
  ExceptionList = local_10;
  return extraout_EAX & 0xffffff00;
}


// ==== 1040f100 FUN_1040f100 depth=0 from=raiz callees=CORE.DLL::FOutputDevice::Logf@EXTERNAL:000000b4 thunk_FUN_104026b0@103034e5
// strings: 10884af0=dddhhdhhhd | 10884aa0=(Receive)SellList SellListNum:%d | 

uint FUN_1040f100(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  uint extraout_EAX;
  int iVar2;
  short unaff_BP;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined2 uStack_28;
  undefined2 uStack_26;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_4;
  
  local_40 = 0;
  local_44 = 0;
  local_48 = 0;
  uVar1 = thunk_FUN_104026b0(*(undefined4 *)(param_1 + 0x48),param_2,&DAT_10884b00,&local_40,
                             &local_44,&local_48);
  (**(code **)(**(int **)(DAT_10b1f538 + 0x54) + 0x210))(local_40,local_44);
  iVar2 = 0;
  if (0 < unaff_BP) {
    do {
      local_44 = CONCAT22(local_44._2_2_,0xffff);
      local_40 = 0;
      uStack_3c = 0;
      uStack_38 = 0;
      uStack_34 = 0;
      uStack_30 = 0;
      uStack_2c = 0;
      uStack_24 = 0;
      uStack_28 = 0;
      uStack_26 = 0;
      uStack_20 = 0;
      uStack_1c = 0;
      uStack_18 = 0xffffffff;
      uStack_14 = 0;
      uStack_10 = 0;
      uStack_c = 0xffffffff;
      uStack_4 = 0xffffffff;
      uVar1 = thunk_FUN_104026b0(*(undefined4 *)(param_1 + 0x48),uVar1,&DAT_1088494c,&uStack_4);
      uVar1 = thunk_FUN_104026b0(*(undefined4 *)(param_1 + 0x48),uVar1,"dddhhdhhhd",&local_40,
                                 &uStack_3c,&uStack_38,&local_44,&uStack_28,&uStack_2c,&uStack_24,
                                 &uStack_26,&uStack_20,&uStack_34);
      (**(code **)(**(int **)(DAT_10b1f538 + 0x54) + 0x214))(&local_44);
      iVar2 = iVar2 + 1;
    } while (iVar2 < unaff_BP);
  }
  FOutputDevice::Logf(*(FOutputDevice **)GNetworkLog_exref,
                      (ushort *)*(FOutputDevice **)GNetworkLog_exref);
  return extraout_EAX & 0xffffff00;
}


// ==== 1040f2c0 FUN_1040f2c0 depth=0 from=raiz callees=CORE.DLL::FOutputDevice::Logf@EXTERNAL:000000b4 thunk_FUN_104026b0@103034e5
// strings: 10884af0=dddhhdhhhd | 

uint FUN_1040f2c0(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  uint extraout_EAX;
  int iVar2;
  short unaff_BP;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined2 uStack_28;
  undefined2 uStack_26;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_4;
  
  local_40 = 0;
  local_44 = 0;
  local_48 = 0;
  uVar1 = thunk_FUN_104026b0(*(undefined4 *)(param_1 + 0x48),param_2,&DAT_10884b00,&local_40,
                             &local_44,&local_48);
  (**(code **)(**(int **)(DAT_10b1f538 + 0x54) + 0x218))(local_40,local_44);
  iVar2 = 0;
  if (0 < unaff_BP) {
    do {
      local_44 = CONCAT22(local_44._2_2_,0xffff);
      local_40 = 0;
      uStack_3c = 0;
      uStack_38 = 0;
      uStack_34 = 0;
      uStack_30 = 0;
      uStack_2c = 0;
      uStack_24 = 0;
      uStack_28 = 0;
      uStack_26 = 0;
      uStack_20 = 0;
      uStack_1c = 0;
      uStack_18 = 0xffffffff;
      uStack_14 = 0;
      uStack_10 = 0;
      uStack_c = 0xffffffff;
      uStack_4 = 0xffffffff;
      uVar1 = thunk_FUN_104026b0(*(undefined4 *)(param_1 + 0x48),uVar1,&DAT_1088494c,&uStack_4);
      uVar1 = thunk_FUN_104026b0(*(undefined4 *)(param_1 + 0x48),uVar1,"dddhhdhhhd",&local_40,
                                 &uStack_3c,&uStack_38,&local_44,&uStack_28,&uStack_2c,&uStack_24,
                                 &uStack_26,&uStack_20,&uStack_34);
      (**(code **)(**(int **)(DAT_10b1f538 + 0x54) + 0x21c))(&local_44);
      iVar2 = iVar2 + 1;
    } while (iVar2 < unaff_BP);
  }
  FOutputDevice::Logf(*(FOutputDevice **)GNetworkLog_exref,
                      (ushort *)*(FOutputDevice **)GNetworkLog_exref);
  return extraout_EAX & 0xffffff00;
}


// ==== 1040f480 FUN_1040f480 depth=0 from=raiz callees=CORE.DLL::FOutputDevice::Logf@EXTERNAL:000000b4 thunk_FUN_104026b0@103034e5
// strings: 10884bac=dddhh | 10884b50=(Receive)BuyListSeed BuyListNum:%d | 

uint FUN_1040f480(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  uint extraout_EAX;
  short unaff_SI;
  undefined4 local_4c;
  int local_48;
  undefined4 local_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined2 uStack_28;
  undefined2 uStack_26;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_4;
  
  local_44 = 0;
  local_48 = 0;
  local_4c = 0;
  uVar1 = thunk_FUN_104026b0(*(undefined4 *)(param_1 + 0x48),param_2,&DAT_10884b00,&local_44,
                             &local_48,&local_4c);
  (**(code **)(**(int **)(DAT_10b1f538 + 0x54) + 0x234))(local_44,local_48);
  local_48 = 0;
  if (0 < unaff_SI) {
    do {
      local_44 = CONCAT22(local_44._2_2_,0xffff);
      uStack_40 = 0;
      uStack_3c = 0;
      uStack_38 = 0;
      uStack_34 = 0;
      uStack_30 = 0;
      uStack_2c = 0;
      uStack_24 = 0;
      uStack_28 = 0;
      uStack_26 = 0;
      uStack_20 = 0;
      uStack_1c = 0;
      uStack_18 = 0xffffffff;
      uStack_14 = 0;
      uStack_10 = 0;
      uStack_c = 0xffffffff;
      uStack_4 = 0xffffffff;
      uVar1 = thunk_FUN_104026b0(*(undefined4 *)(param_1 + 0x48),uVar1,&DAT_1088494c,&uStack_4);
      uVar1 = thunk_FUN_104026b0(*(undefined4 *)(param_1 + 0x48),uVar1,"dddhh",&uStack_40,&uStack_3c
                                 ,&uStack_38,&local_44,&uStack_28);
      if ((ushort)uStack_4 < 4) {
        uVar1 = thunk_FUN_104026b0(*(undefined4 *)(param_1 + 0x48),uVar1,&DAT_10884ba4,&uStack_2c,
                                   &uStack_24,&uStack_26,&uStack_20);
      }
      uVar1 = thunk_FUN_104026b0(*(undefined4 *)(param_1 + 0x48),uVar1,&DAT_1087ff8c,&uStack_34);
      (**(code **)(**(int **)(DAT_10b1f538 + 0x54) + 0x238))(&local_44);
      local_48 = local_48 + 1;
    } while (local_48 < unaff_SI);
  }
  FOutputDevice::Logf((FOutputDevice *)GNetworkLog_exref,*(ushort **)GNetworkLog_exref);
  return extraout_EAX & 0xffffff00;
}


// ==== 1040f680 FUN_1040f680 depth=0 from=raiz callees=CORE.DLL::FOutputDevice::Logf@EXTERNAL:000000b4 thunk_FUN_104026b0@103034e5
// strings: 10884bac=dddhh | 10884bb8=(Receive)SellListProcure SellListNum:%d | 

uint FUN_1040f680(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  uint extraout_EAX;
  short unaff_SI;
  undefined4 local_4c;
  int local_48;
  undefined4 local_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined2 uStack_28;
  undefined2 uStack_26;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_4;
  
  local_44 = 0;
  local_48 = 0;
  local_4c = 0;
  uVar1 = thunk_FUN_104026b0(*(undefined4 *)(param_1 + 0x48),param_2,&DAT_10884b00,&local_44,
                             &local_48,&local_4c);
  (**(code **)(**(int **)(DAT_10b1f538 + 0x54) + 0x22c))(local_44,local_48);
  local_48 = 0;
  if (0 < unaff_SI) {
    do {
      local_44 = CONCAT22(local_44._2_2_,0xffff);
      uStack_40 = 0;
      uStack_3c = 0;
      uStack_38 = 0;
      uStack_34 = 0;
      uStack_30 = 0;
      uStack_2c = 0;
      uStack_24 = 0;
      uStack_28 = 0;
      uStack_26 = 0;
      uStack_20 = 0;
      uStack_1c = 0;
      uStack_18 = 0xffffffff;
      uStack_14 = 0;
      uStack_10 = 0;
      uStack_c = 0xffffffff;
      uStack_4 = 0xffffffff;
      uVar1 = thunk_FUN_104026b0(*(undefined4 *)(param_1 + 0x48),uVar1,&DAT_1088494c,&uStack_4);
      uVar1 = thunk_FUN_104026b0(*(undefined4 *)(param_1 + 0x48),uVar1,"dddhh",&uStack_40,&uStack_3c
                                 ,&uStack_38,&local_44,&uStack_28);
      if ((ushort)uStack_4 < 4) {
        uVar1 = thunk_FUN_104026b0(*(undefined4 *)(param_1 + 0x48),uVar1,&DAT_10884ba4,&uStack_2c,
                                   &uStack_24,&uStack_26,&uStack_20);
      }
      uVar1 = thunk_FUN_104026b0(*(undefined4 *)(param_1 + 0x48),uVar1,&DAT_1087ff8c,&uStack_34);
      (**(code **)(**(int **)(DAT_10b1f538 + 0x54) + 0x230))(&local_44);
      local_48 = local_48 + 1;
    } while (local_48 < unaff_SI);
  }
  FOutputDevice::Logf((FOutputDevice *)GNetworkLog_exref,*(ushort **)GNetworkLog_exref);
  return extraout_EAX & 0xffffff00;
}


// ==== 10410430 FUN_10410430 depth=0 from=raiz callees=CORE.DLL::FOutputDevice::Logf@EXTERNAL:000000b4 thunk_FUN_104026b0@103034e5
// strings: 10884e78=(Receive)GMHidePacket ID | 

uint FUN_10410430(int param_1,undefined4 param_2)

{
  uint extraout_EAX;
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1080ebb0;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffd4;
  local_8 = 0;
  ExceptionList = &local_10;
  thunk_FUN_104026b0(*(undefined4 *)(param_1 + 0x48),param_2,&DAT_1087ff8c,&local_18);
  (**(code **)(**(int **)(DAT_10b1f538 + 0x54) + 0x254))(local_18);
  FOutputDevice::Logf(*(FOutputDevice **)GNetworkLog_exref,
                      (ushort *)*(FOutputDevice **)GNetworkLog_exref);
  ExceptionList = local_10;
  return extraout_EAX & 0xffffff00;
}


// ==== 10410520 FUN_10410520 depth=0 from=raiz callees=CORE.DLL::L2ParamStack::PushBack@EXTERNAL:00000136 CORE.DLL::L2ParamStack::~L2ParamStack@EXTERNAL:0000012a CORE.DLL::L2ParamStack::L2ParamStack@EXTERNAL:0000012b CORE.DLL::FOutputDevice::Logf@EXTERNAL:000000b4 thunk_FUN_104026b0@103034e5 __alloca_probe@107a69d0
// strings: 10884f34=dSdddddS | 10884ee8=(Receive)ListPartyWatingPacket | 

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

uint FUN_10410520(int param_1,undefined4 param_2)

{
  int iVar1;
  uint extraout_EAX;
  undefined1 local_2854 [5120];
  undefined1 local_1454 [5128];
  void *local_4c;
  void *local_48;
  void *local_44;
  void *local_40;
  void *local_3c [2];
  void *local_34;
  void *local_30;
  void *local_2c;
  L2ParamStack local_28 [16];
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  puStack_c = &LAB_1080ebc9;
  local_10 = ExceptionList;
  local_18 = 0x10410543;
  local_14 = &stack0xffffd7a0;
  local_8 = 0;
  ExceptionList = &local_10;
  L2ParamStack::L2ParamStack(local_28,0x8c);
  local_8 = CONCAT31(local_8._1_3_,1);
  param_2 = thunk_FUN_104026b0(*(undefined4 *)(param_1 + 0x48),param_2,&DAT_1087ff44,&local_44,
                               &local_2c);
  L2ParamStack::PushBack(local_28,local_44);
  L2ParamStack::PushBack(local_28,local_2c);
  (**(code **)(**(int **)(DAT_10b1f538 + 0x54) + 0x710))();
  for (local_18 = 0; local_18 < (int)local_2c; local_18 = local_18 + 1) {
    iVar1 = local_18 * 0x100;
    param_2 = thunk_FUN_104026b0(*(undefined4 *)(param_1 + 0x48),param_2,"dSdddddS",&local_48,0x100,
                                 local_2854 + iVar1,&local_40,local_3c,&local_30,&local_4c,&local_34
                                 ,0x100,local_1454 + iVar1);
    L2ParamStack::PushBack(local_28,local_48);
    L2ParamStack::PushBack(local_28,local_2854 + iVar1);
    L2ParamStack::PushBack(local_28,local_40);
    L2ParamStack::PushBack(local_28,local_3c[0]);
    L2ParamStack::PushBack(local_28,local_30);
    L2ParamStack::PushBack(local_28,local_4c);
    L2ParamStack::PushBack(local_28,local_34);
    L2ParamStack::PushBack(local_28,local_1454 + iVar1);
  }
  (**(code **)(**(int **)(DAT_10b1f538 + 0x54) + 0x6fc))(local_28);
  FOutputDevice::Logf(*(FOutputDevice **)GNetworkLog_exref,
                      (ushort *)*(FOutputDevice **)GNetworkLog_exref);
  local_8 = local_8 & 0xffffff00;
  L2ParamStack::~L2ParamStack(local_28);
  ExceptionList = local_10;
  return extraout_EAX & 0xffffff00;
}


// ==== 10410750 FUN_10410750 depth=0 from=raiz callees=CORE.DLL::L2ParamStack::PushBack@EXTERNAL:00000136 CORE.DLL::L2ParamStack::~L2ParamStack@EXTERNAL:0000012a CORE.DLL::L2ParamStack::L2ParamStack@EXTERNAL:0000012b CORE.DLL::FOutputDevice::Logf@EXTERNAL:000000b4 thunk_FUN_104026b0@103034e5
// strings: 10884fb8=ddddddS | 10884f70=(Receive)PartyRoomInfoPacket | 

uint FUN_10410750(int param_1,undefined4 param_2)

{
  uint extraout_EAX;
  undefined1 local_148 [264];
  void *local_40;
  void *local_3c;
  void *local_38;
  void *local_34 [2];
  void *local_2c;
  void *local_28;
  L2ParamStack local_24 [16];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_1080ebe9;
  local_10 = ExceptionList;
  local_14 = &stack0xfffffeac;
  local_8 = 0;
  ExceptionList = &local_10;
  thunk_FUN_104026b0(*(undefined4 *)(param_1 + 0x48),param_2,"ddddddS",&local_38,&local_3c,&local_40
                     ,local_34,&local_28,&local_2c,0x100,local_148);
  L2ParamStack::L2ParamStack(local_24,10);
  local_8._0_1_ = 1;
  L2ParamStack::PushBack(local_24,local_38);
  L2ParamStack::PushBack(local_24,local_3c);
  L2ParamStack::PushBack(local_24,local_40);
  L2ParamStack::PushBack(local_24,local_34[0]);
  L2ParamStack::PushBack(local_24,local_28);
  L2ParamStack::PushBack(local_24,local_2c);
  L2ParamStack::PushBack(local_24,local_148);
  (**(code **)(**(int **)(DAT_10b1f538 + 0x54) + 0x700))(local_24);
  FOutputDevice::Logf((FOutputDevice *)GNetworkLog_exref,*(ushort **)GNetworkLog_exref);
  local_8 = (uint)local_8._1_3_ << 8;
  L2ParamStack::~L2ParamStack(local_24);
  ExceptionList = local_10;
  return extraout_EAX & 0xffffff00;
}


// ==== 104108e0 FUN_104108e0 depth=0 from=raiz callees=CORE.DLL::L2ParamStack::PushBack@EXTERNAL:00000136 CORE.DLL::L2ParamStack::~L2ParamStack@EXTERNAL:0000012a CORE.DLL::L2ParamStack::L2ParamStack@EXTERNAL:0000012b CORE.DLL::FOutputDevice::Logf@EXTERNAL:000000b4 thunk_FUN_104026b0@103034e5
// strings: 10885000=dSdddddd | 10884fc4=(Receive)PlaySoundPacket | 

uint FUN_104108e0(int param_1,undefined4 param_2)

{
  uint extraout_EAX;
  L2ParamStack local_238 [16];
  void *local_228;
  void *local_224;
  void *local_220;
  void *local_21c;
  void *local_218;
  void *local_214;
  void *local_210;
  undefined1 local_20c [512];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1080ec0c;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  thunk_FUN_104026b0(*(undefined4 *)(param_1 + 0x48),param_2,"dSdddddd",&local_218,0x200,local_20c,
                     &local_214,&local_220,&local_210,&local_228,&local_224,&local_21c);
  L2ParamStack::L2ParamStack(local_238,10);
  local_4 = 0;
  L2ParamStack::PushBack(local_238,local_218);
  L2ParamStack::PushBack(local_238,local_20c);
  L2ParamStack::PushBack(local_238,local_214);
  L2ParamStack::PushBack(local_238,local_220);
  L2ParamStack::PushBack(local_238,local_210);
  L2ParamStack::PushBack(local_238,local_228);
  L2ParamStack::PushBack(local_238,local_224);
  L2ParamStack::PushBack(local_238,local_21c);
  (**(code **)(**(int **)(DAT_10b1f538 + 0x54) + 0x648))(local_238);
  FOutputDevice::Logf(*(FOutputDevice **)GNetworkLog_exref,
                      (ushort *)*(FOutputDevice **)GNetworkLog_exref);
  local_4 = 0xffffffff;
  L2ParamStack::~L2ParamStack(local_238);
  ExceptionList = pvStack_c;
  return extraout_EAX & 0xffffff00;
}


// ==== 10411040 FUN_10411040 depth=0 from=raiz callees=CORE.DLL::FOutputDevice::Logf@EXTERNAL:000000b4 thunk_FUN_104026b0@103034e5
// strings: 108850e4=(Receive)GMViewQuestInfoPacket | 

uint FUN_10411040(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  uint extraout_EAX;
  int iVar2;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined1 auStack_6c [48];
  undefined2 auStack_3c [2];
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined2 uStack_20;
  undefined2 uStack_1e;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  local_78 = 0;
  (**(code **)(**(int **)(DAT_10b1f538 + 0x54) + 0x530))();
  uVar1 = thunk_FUN_104026b0(*(undefined4 *)(param_1 + 0x48),param_2,&DAT_10885130,0x30,auStack_6c,
                             &local_78);
  iVar2 = 0;
  if (0 < (short)local_78) {
    do {
      uStack_70 = 0;
      uStack_74 = 0;
      uVar1 = thunk_FUN_104026b0(*(undefined4 *)(param_1 + 0x48),uVar1,&DAT_1087ff44,&uStack_70,
                                 &uStack_74);
      (**(code **)(**(int **)(DAT_10b1f538 + 0x54) + 0x538))(uStack_70,uStack_74);
      iVar2 = iVar2 + 1;
    } while (iVar2 < (short)local_78);
  }
  (**(code **)(**(int **)(DAT_10b1f538 + 0x54) + 0x534))();
  uVar1 = thunk_FUN_104026b0(*(undefined4 *)(param_1 + 0x48),uVar1,&DAT_1088494c,&local_78);
  iVar2 = 0;
  if (0 < (short)local_78) {
    do {
      auStack_3c[0] = 0xffff;
      uStack_10 = 0xffffffff;
      uStack_4 = 0xffffffff;
      uStack_38 = 0;
      uStack_34 = 0;
      uStack_30 = 0;
      uStack_2c = 0;
      uStack_28 = 0;
      uStack_24 = 0;
      uStack_1c = 0;
      uStack_20 = 0;
      uStack_1e = 0;
      uStack_18 = 0;
      uStack_14 = 0;
      uStack_c = 0;
      uStack_8 = 0;
      uVar1 = thunk_FUN_104026b0(*(undefined4 *)(param_1 + 0x48),uVar1,&DAT_108810b0,&uStack_38,
                                 &uStack_34,&uStack_30,&uStack_24);
      (**(code **)(**(int **)(DAT_10b1f538 + 0x54) + 0x53c))(auStack_3c);
      iVar2 = iVar2 + 1;
    } while (iVar2 < (short)local_78);
  }
  FOutputDevice::Logf((FOutputDevice *)GNetworkLog_exref,*(ushort **)GNetworkLog_exref);
  return extraout_EAX & 0xffffff00;
}


// ==== 10411260 FUN_10411260 depth=0 from=raiz callees=CORE.DLL::FOutputDevice::Logf@EXTERNAL:000000b4 thunk_FUN_104026b0@103034e5
// strings: 1088517c=dddhhhdhhhhd | 10885134=(Receive)GMViewItemListPacket | 

uint FUN_10411260(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  uint extraout_EAX;
  int iVar2;
  short unaff_BP;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74 [2];
  undefined1 local_6c [40];
  undefined2 auStack_44 [2];
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined2 uStack_28;
  undefined2 uStack_26;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 auStack_c [3];
  
  local_7c = 0;
  uVar1 = thunk_FUN_104026b0(*(undefined4 *)(param_1 + 0x48),param_2,&DAT_1088518c,0x30,local_6c,
                             &local_78,local_74,&local_7c);
  (**(code **)(*(int *)GL2Console + 0x4f0))(local_74[0],local_78);
  iVar2 = 0;
  if (0 < unaff_BP) {
    do {
      auStack_44[0] = 0xffff;
      uStack_40 = 0;
      uStack_3c = 0;
      uStack_38 = 0;
      uStack_34 = 0;
      uStack_30 = 0;
      uStack_2c = 0;
      uStack_28 = 0;
      uStack_26 = 0;
      uStack_20 = 0;
      uStack_1c = 0;
      uStack_18 = 0xffffffff;
      uStack_14 = 0;
      uStack_10 = 0;
      auStack_c[0] = 0xffffffff;
      uStack_24 = 0;
      local_78 = 0xffffffff;
      uVar1 = thunk_FUN_104026b0(*(undefined4 *)(param_1 + 0x48),uVar1,&DAT_1088494c,&local_78);
      uVar1 = thunk_FUN_104026b0(*(undefined4 *)(param_1 + 0x48),uVar1,"dddhhhdhhhhd",&uStack_40,
                                 &uStack_3c,&uStack_38,auStack_44,&uStack_28,&uStack_26,&uStack_2c,
                                 &uStack_24,&uStack_20,&uStack_14,&uStack_10,auStack_c);
      (**(code **)(**(int **)(DAT_10b1f538 + 0x54) + 0x540))(auStack_44);
      iVar2 = iVar2 + 1;
    } while (iVar2 < unaff_BP);
  }
  FOutputDevice::Logf((FOutputDevice *)GNetworkLog_exref,*(ushort **)GNetworkLog_exref);
  return extraout_EAX & 0xffffff00;
}


// ==== 10411470 FUN_10411470 depth=0 from=raiz callees=CORE.DLL::FOutputDevice::Logf@EXTERNAL:000000b4 thunk_FUN_104026b0@103034e5
// strings: 10884bac=dddhh | 10885204=dhhhdd | 10885198=(Receive) GMViewWarehouseWithdrawListPacket | 

uint FUN_10411470(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  uint extraout_EAX;
  FOutputDevice *extraout_ECX;
  FOutputDevice *this;
  short unaff_BX;
  undefined4 local_7c;
  int iStack_78;
  undefined4 local_70;
  undefined1 local_6c [44];
  undefined2 auStack_40 [2];
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined2 uStack_24;
  undefined2 uStack_22;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  
  uVar1 = thunk_FUN_104026b0(*(undefined4 *)(param_1 + 0x48),param_2,&DAT_1088520c,0x30,local_6c,
                             &local_70,&local_7c);
  (**(code **)(**(int **)(DAT_10b1f538 + 0x54) + 0x544))(local_70);
  iStack_78 = 0;
  this = extraout_ECX;
  if (0 < unaff_BX) {
    do {
      auStack_40[0] = 0xffff;
      uStack_3c = 0;
      uStack_38 = 0;
      uStack_34 = 0;
      uStack_30 = 0;
      uStack_2c = 0;
      uStack_28 = 0;
      uStack_20 = 0;
      uStack_24 = 0;
      uStack_22 = 0;
      uStack_1c = 0;
      uStack_18 = 0;
      uStack_14 = 0xffffffff;
      uStack_10 = 0;
      uStack_c = 0;
      uStack_8 = 0xffffffff;
      local_7c = 0xffffffff;
      uVar1 = thunk_FUN_104026b0(*(undefined4 *)(param_1 + 0x48),uVar1,&DAT_1088494c,&local_7c);
      uVar1 = thunk_FUN_104026b0(*(undefined4 *)(param_1 + 0x48),uVar1,"dddhh",&uStack_3c,&uStack_38
                                 ,&uStack_34,auStack_40,&uStack_24);
      if ((ushort)local_7c < 4) {
        uVar1 = thunk_FUN_104026b0(*(undefined4 *)(param_1 + 0x48),uVar1,"dhhhdd",&uStack_28,
                                   &uStack_20,&uStack_22,&uStack_1c,&uStack_10,&uStack_c);
      }
      uVar1 = thunk_FUN_104026b0(*(undefined4 *)(param_1 + 0x48),uVar1,&DAT_1087ff8c,&uStack_14);
      (**(code **)(**(int **)(DAT_10b1f538 + 0x54) + 0x548))(auStack_40);
      this = (FOutputDevice *)(int)unaff_BX;
      iStack_78 = iStack_78 + 1;
    } while (iStack_78 < (int)this);
  }
  FOutputDevice::Logf(this,*(ushort **)GNetworkLog_exref);
  return extraout_EAX & 0xffffff00;
}


// ==== 10411690 FUN_10411690 depth=0 from=raiz callees=thunk_FUN_104026b0@103034e5
// strings: 10885210=dddddddddddddddddddd | 

/* WARNING: Removing unreachable block (ram,0x104116dc) */
/* WARNING: Removing unreachable block (ram,0x104116e0) */
/* WARNING: Removing unreachable block (ram,0x10411774) */
/* WARNING: Removing unreachable block (ram,0x10411776) */
/* WARNING: Removing unreachable block (ram,0x1041178f) */
/* WARNING: Removing unreachable block (ram,0x10411793) */

uint FUN_10411690(void)

{
  uint uVar1;
  
  (**(code **)(**(int **)(DAT_10b1f538 + 0x54) + 0x2d4))();
  uVar1 = thunk_FUN_104026b0();
  return uVar1 & 0xffffff00;
}


// ==== 10411870 FUN_10411870 depth=0 from=raiz callees=thunk_FUN_103ff8c0@1030cc7f CORE.DLL::FOutputDevice::Logf@EXTERNAL:000000b4 thunk_FUN_104026b0@103034e5
// strings: 1088517c=dddhhhdhhhhd | 108852c0=(Receive)ItemList : %d | 

uint FUN_10411870(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  uint extraout_EAX;
  undefined1 local_68 [4];
  undefined4 local_64;
  undefined1 local_60 [4];
  undefined1 local_5c [12];
  undefined1 local_50 [4];
  undefined1 local_4c [2];
  undefined1 local_4a [2];
  undefined4 local_48;
  undefined1 local_44 [12];
  undefined1 local_38 [4];
  undefined1 local_34 [4];
  undefined1 local_30 [12];
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1080ec80;
  local_10 = ExceptionList;
  local_14 = &stack0xffffff8c;
  local_8 = 0;
  local_20 = 0;
  local_1c = 0;
  ExceptionList = &local_10;
  uVar1 = thunk_FUN_104026b0(*(undefined4 *)(param_1 + 0x48),param_2,&DAT_108849f4,&local_20,
                             &local_1c);
  (**(code **)(**(int **)(DAT_10b1f538 + 0x54) + 0x2dc))((int)(short)local_20);
  for (local_18 = 0; local_18 < (short)local_1c; local_18 = local_18 + 1) {
    thunk_FUN_103ff8c0();
    local_48 = 0;
    local_24 = 0xffffffff;
    uVar1 = thunk_FUN_104026b0(*(undefined4 *)(param_1 + 0x48),uVar1,&DAT_1088494c,&local_24);
    uVar1 = thunk_FUN_104026b0(*(undefined4 *)(param_1 + 0x48),uVar1,"dddhhhdhhhhd",&local_64,
                               local_60,local_5c,local_68,local_4c,local_4a,local_50,&local_48,
                               local_44,local_38,local_34,local_30);
    (**(code **)(**(int **)(DAT_10b1f538 + 0x54) + 0x30c))(local_68);
    (**(code **)(**(int **)(DAT_10b1f538 + 0x54) + 0x404))(local_64);
  }
  (**(code **)(**(int **)(DAT_10b1f538 + 0x54) + 0x624))();
  FOutputDevice::Logf((FOutputDevice *)(int)(short)local_1c,*(ushort **)GNetworkLog_exref);
  ExceptionList = local_10;
  return extraout_EAX & 0xffffff00;
}


// ==== 10411f30 FUN_10411f30 depth=0 from=raiz callees=CORE.DLL::FOutputDevice::Logf@EXTERNAL:000000b4 thunk_FUN_104026b0@103034e5
// strings: 10885344=dddhhdhhh | 108853a0=(Receive)TradeOtherAddPacket : %d | 

uint FUN_10411f30(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  uint extraout_EAX;
  int iVar2;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined2 local_3c [2];
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined2 local_20;
  undefined2 local_1e;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  local_48 = 0;
  uVar1 = thunk_FUN_104026b0(*(undefined4 *)(param_1 + 0x48),param_2,&DAT_1088494c,&local_48);
  iVar2 = 0;
  if (0 < (short)local_48) {
    do {
      local_3c[0] = 0xffff;
      local_38 = 0;
      local_34 = 0;
      local_30 = 0;
      local_2c = 0;
      local_28 = 0;
      local_24 = 0;
      local_1c = 0;
      local_20 = 0;
      local_1e = 0;
      local_18 = 0;
      local_14 = 0;
      local_10 = 0xffffffff;
      local_c = 0;
      local_8 = 0;
      local_4 = 0xffffffff;
      local_44 = 0xffffffff;
      local_40 = 0xffffffff;
      uVar1 = thunk_FUN_104026b0(*(undefined4 *)(param_1 + 0x48),uVar1,&DAT_108849f4,&local_44,
                                 &local_40);
      uVar1 = thunk_FUN_104026b0(*(undefined4 *)(param_1 + 0x48),uVar1,"dddhhdhhh",&local_38,
                                 &local_34,&local_30,local_3c,&local_20,&local_24,&local_1c,
                                 &local_1e,&local_18);
      (**(code **)(**(int **)(DAT_10b1f538 + 0x54) + 0x2f4))((int)(short)local_44,local_3c);
      iVar2 = iVar2 + 1;
    } while (iVar2 < (short)local_48);
  }
  FOutputDevice::Logf(*(FOutputDevice **)GNetworkLog_exref,
                      (ushort *)*(FOutputDevice **)GNetworkLog_exref);
  return extraout_EAX & 0xffffff00;
}


// ==== 104120c0 FUN_104120c0 depth=0 from=raiz callees=CORE.DLL::L2ParamStack::PushBack@EXTERNAL:00000136 CORE.DLL::L2ParamStack::~L2ParamStack@EXTERNAL:0000012a CORE.DLL::L2ParamStack::L2ParamStack@EXTERNAL:0000012b CORE.DLL::FOutputDevice::Logf@EXTERNAL:000000b4 thunk_FUN_104026b0@103034e5
// strings: 108853f8=(Receive)AbnormalStatusUpdatePacket : %d | 

uint FUN_104120c0(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  uint extraout_EAX;
  int iVar2;
  undefined4 local_2c;
  void *pvStack_28;
  undefined4 uStack_24;
  void *pvStack_20;
  L2ParamStack aLStack_1c [16];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_1080ec99;
  pvStack_c = ExceptionList;
  local_2c = 0;
  ExceptionList = &pvStack_c;
  (**(code **)(**(int **)(DAT_10b1f538 + 0x54) + 0x41c))();
  uVar1 = thunk_FUN_104026b0(*(undefined4 *)(param_1 + 0x48),param_2,&DAT_1088494c,&local_2c);
  L2ParamStack::L2ParamStack(aLStack_1c,(short)local_2c * 3 + 1);
  uStack_4 = 0;
  L2ParamStack::PushBack(aLStack_1c,(void *)(int)(short)local_2c);
  iVar2 = 0;
  if (0 < (short)local_2c) {
    do {
      pvStack_28 = (void *)0x0;
      uStack_24 = 0;
      pvStack_20 = (void *)0x0;
      uVar1 = thunk_FUN_104026b0(*(undefined4 *)(param_1 + 0x48),uVar1,&DAT_1088545c,&pvStack_28,
                                 &uStack_24,&pvStack_20);
      L2ParamStack::PushBack(aLStack_1c,pvStack_28);
      L2ParamStack::PushBack(aLStack_1c,(void *)(int)(short)uStack_24);
      L2ParamStack::PushBack(aLStack_1c,pvStack_20);
      iVar2 = iVar2 + 1;
    } while (iVar2 < (short)local_2c);
  }
  (**(code **)(**(int **)(DAT_10b1f538 + 0x54) + 0x420))(aLStack_1c);
  FOutputDevice::Logf((FOutputDevice *)GNetworkLog_exref,*(ushort **)GNetworkLog_exref);
  uStack_4 = 0xffffffff;
  L2ParamStack::~L2ParamStack(aLStack_1c);
  ExceptionList = pvStack_c;
  return extraout_EAX & 0xffffff00;
}


// ==== 104123c0 FUN_104123c0 depth=0 from=raiz callees=thunk_FUN_103ff8c0@1030cc7f CORE.DLL::FOutputDevice::Logf@EXTERNAL:000000b4 thunk_FUN_104026b0@103034e5
// strings: 1088517c=dddhhhdhhhhd | 1088558c=(Receive)InventoryUpdatePacket | 

uint FUN_104123c0(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  uint extraout_EAX;
  undefined1 local_68 [4];
  undefined4 local_64;
  undefined1 local_60 [4];
  undefined1 local_5c [12];
  undefined1 local_50 [4];
  undefined1 local_4c [2];
  undefined1 local_4a [2];
  undefined4 local_48;
  undefined1 local_44 [12];
  undefined1 local_38 [4];
  undefined1 local_34 [4];
  undefined1 local_30 [12];
  undefined4 local_24;
  undefined4 local_20;
  int local_1c;
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1080ecb0;
  local_10 = ExceptionList;
  local_14 = &stack0xffffff8c;
  local_8 = 0;
  local_20 = 0;
  ExceptionList = &local_10;
  uVar1 = thunk_FUN_104026b0(*(undefined4 *)(param_1 + 0x48),param_2,&DAT_1088494c,&local_20);
  for (local_1c = 0; local_1c < (short)local_20; local_1c = local_1c + 1) {
    thunk_FUN_103ff8c0();
    local_48 = 0;
    local_18 = 0xffffffff;
    local_24 = 0xffffffff;
    uVar1 = thunk_FUN_104026b0(*(undefined4 *)(param_1 + 0x48),uVar1,&DAT_108849f4,&local_18,
                               &local_24);
    uVar1 = thunk_FUN_104026b0(*(undefined4 *)(param_1 + 0x48),uVar1,"dddhhhdhhhhd",&local_64,
                               local_60,local_5c,local_68,local_4c,local_4a,local_50,&local_48,
                               local_44,local_38,local_34,local_30);
    (**(code **)(**(int **)(DAT_10b1f538 + 0x54) + 0x2e0))((int)(short)local_18,local_68);
    if (((short)local_18 == 2) || ((short)local_18 == 3)) {
      (**(code **)(**(int **)(DAT_10b1f538 + 0x54) + 0x404))(local_64);
    }
  }
  FOutputDevice::Logf(*(FOutputDevice **)GNetworkLog_exref,
                      (ushort *)*(FOutputDevice **)GNetworkLog_exref);
  ExceptionList = local_10;
  return extraout_EAX & 0xffffff00;
}


// ==== 10412590 FUN_10412590 depth=0 from=raiz callees=CORE.DLL::L2ParamStack::PushBack@EXTERNAL:00000136 CORE.DLL::L2ParamStack::~L2ParamStack@EXTERNAL:0000012a CORE.DLL::L2ParamStack::L2ParamStack@EXTERNAL:0000012b CORE.DLL::FOutputDevice::Logf@EXTERNAL:000000b4 thunk_FUN_104026b0@103034e5
// strings: 108855d8=(Receive)PledgeSkillListPacket | 

uint FUN_10412590(void *param_1,undefined4 param_2)

{
  void *pvVar1;
  undefined4 uVar2;
  uint extraout_EAX;
  int iVar3;
  void *local_24;
  void *local_20;
  L2ParamStack local_1c [16];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  pvVar1 = param_1;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1080ecc9;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  uVar2 = thunk_FUN_104026b0(*(undefined4 *)((int)param_1 + 0x48),param_2,&DAT_1087ff8c,&param_1);
  L2ParamStack::L2ParamStack(local_1c,(int)param_1 * 2 + 1);
  iVar3 = 0;
  local_4 = 0;
  L2ParamStack::PushBack(local_1c,param_1);
  if (0 < (int)param_1) {
    do {
      uVar2 = thunk_FUN_104026b0(*(undefined4 *)((int)pvVar1 + 0x48),uVar2,&DAT_1087ff44,&local_24,
                                 &local_20);
      L2ParamStack::PushBack(local_1c,local_24);
      L2ParamStack::PushBack(local_1c,local_20);
      iVar3 = iVar3 + 1;
    } while (iVar3 < (int)param_1);
  }
  (**(code **)(**(int **)(DAT_10b1f538 + 0x54) + 0x330))(local_1c);
  FOutputDevice::Logf((FOutputDevice *)GNetworkLog_exref,*(ushort **)GNetworkLog_exref);
  local_4 = 0xffffffff;
  L2ParamStack::~L2ParamStack(local_1c);
  ExceptionList = pvStack_c;
  return extraout_EAX & 0xffffff00;
}


// ==== 104126e0 FUN_104126e0 depth=0 from=raiz callees=CORE.DLL::L2ParamStack::PushBack@EXTERNAL:00000136 CORE.DLL::L2ParamStack::~L2ParamStack@EXTERNAL:0000012a CORE.DLL::L2ParamStack::L2ParamStack@EXTERNAL:0000012b CORE.DLL::FOutputDevice::Logf@EXTERNAL:000000b4 thunk_FUN_104026b0@103034e5
// strings: 10885628=(Receive)PledgeSkillListAddPacket | 

uint FUN_104126e0(void *param_1,undefined4 param_2)

{
  uint extraout_EAX;
  void *local_20;
  L2ParamStack local_1c [16];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1080ece9;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  thunk_FUN_104026b0(*(undefined4 *)((int)param_1 + 0x48),param_2,&DAT_1087ff44,&param_1,&local_20);
  L2ParamStack::L2ParamStack(local_1c,10);
  local_4 = 0;
  L2ParamStack::PushBack(local_1c,param_1);
  L2ParamStack::PushBack(local_1c,local_20);
  (**(code **)(**(int **)(DAT_10b1f538 + 0x54) + 0x334))(local_1c);
  FOutputDevice::Logf(*(FOutputDevice **)GNetworkLog_exref,
                      (ushort *)*(FOutputDevice **)GNetworkLog_exref);
  local_4 = 0xffffffff;
  L2ParamStack::~L2ParamStack(local_1c);
  ExceptionList = pvStack_c;
  return extraout_EAX & 0xffffff00;
}


// ==== 104127d0 FUN_104127d0 depth=0 from=raiz callees=CORE.DLL::L2ParamStack::PushBack@EXTERNAL:00000136 CORE.DLL::L2ParamStack::~L2ParamStack@EXTERNAL:0000012a CORE.DLL::L2ParamStack::L2ParamStack@EXTERNAL:0000012b CORE.DLL::FOutputDevice::Logf@EXTERNAL:000000b4 thunk_FUN_104026b0@103034e5
// strings: 1088567c=(Receive)PledgePowerGradeList | 

uint FUN_104127d0(void *param_1,undefined4 param_2)

{
  void *pvVar1;
  undefined4 uVar2;
  uint extraout_EAX;
  int iVar3;
  void *local_24;
  void *local_20;
  L2ParamStack local_1c [16];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  pvVar1 = param_1;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1080ed09;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  uVar2 = thunk_FUN_104026b0(*(undefined4 *)((int)param_1 + 0x48),param_2,&DAT_1087ff8c,&param_1);
  L2ParamStack::L2ParamStack(local_1c,(int)param_1 * 2 + 1);
  iVar3 = 0;
  local_4 = 0;
  L2ParamStack::PushBack(local_1c,param_1);
  if (0 < (int)param_1) {
    do {
      uVar2 = thunk_FUN_104026b0(*(undefined4 *)((int)pvVar1 + 0x48),uVar2,&DAT_1087ff44,&local_24,
                                 &local_20);
      L2ParamStack::PushBack(local_1c,local_24);
      L2ParamStack::PushBack(local_1c,local_20);
      iVar3 = iVar3 + 1;
    } while (iVar3 < (int)param_1);
  }
  (**(code **)(**(int **)(DAT_10b1f538 + 0x54) + 0x33c))(local_1c);
  FOutputDevice::Logf((FOutputDevice *)GNetworkLog_exref,*(ushort **)GNetworkLog_exref);
  local_4 = 0xffffffff;
  L2ParamStack::~L2ParamStack(local_1c);
  ExceptionList = pvStack_c;
  return extraout_EAX & 0xffffff00;
}


// ==== 10412920 FUN_10412920 depth=0 from=raiz callees=CORE.DLL::L2ParamStack::PushBack@EXTERNAL:00000136 CORE.DLL::L2ParamStack::~L2ParamStack@EXTERNAL:0000012a CORE.DLL::L2ParamStack::L2ParamStack@EXTERNAL:0000012b CORE.DLL::FOutputDevice::Logf@EXTERNAL:000000b4 thunk_FUN_104026b0@103034e5 CORE.DLL::FOutputDevice::Logf2@EXTERNAL:0000002e
// strings: 10885714=PledgeReceivePowerInfo %d : %d | 108856c8=(Receive)PledgeReceivePowerInfo | 

uint FUN_10412920(void *param_1,undefined4 param_2)

{
  uint extraout_EAX;
  FOutputDevice *this;
  int iVar1;
  uint local_50;
  L2ParamStack local_4c [16];
  undefined1 local_3c [48];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1080ed29;
  pvStack_c = ExceptionList;
  iVar1 = 0;
  local_50 = 0;
  ExceptionList = &pvStack_c;
  thunk_FUN_104026b0(*(undefined4 *)((int)param_1 + 0x48),param_2,&DAT_10885760,&param_1,0x30,
                     local_3c,&local_50);
  L2ParamStack::L2ParamStack(local_4c,0x30);
  local_4 = 0;
  L2ParamStack::PushBack(local_4c,param_1);
  L2ParamStack::PushBack(local_4c,local_3c);
  do {
    L2ParamStack::PushBack(local_4c,(void *)(local_50 & 1));
    local_50 = local_50 >> 1;
    if (*(int *)GLog_exref != 0) {
      FOutputDevice::Logf2(this,*(ushort **)GLog_exref);
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 0x20);
  (**(code **)(**(int **)(DAT_10b1f538 + 0x54) + 0x3bc))(local_4c);
  FOutputDevice::Logf(*(FOutputDevice **)GNetworkLog_exref,
                      (ushort *)*(FOutputDevice **)GNetworkLog_exref);
  local_4 = 0xffffffff;
  L2ParamStack::~L2ParamStack(local_4c);
  ExceptionList = pvStack_c;
  return extraout_EAX & 0xffffff00;
}


// ==== 10412a70 FUN_10412a70 depth=0 from=raiz callees=CORE.DLL::L2ParamStack::PushBack@EXTERNAL:00000136 CORE.DLL::L2ParamStack::~L2ParamStack@EXTERNAL:0000012a CORE.DLL::L2ParamStack::L2ParamStack@EXTERNAL:0000012b CORE.DLL::FOutputDevice::Logf@EXTERNAL:000000b4 thunk_FUN_104026b0@103034e5
// strings: 108857b8=dSSdSS | 10885768=(Receive)PledgeReceiveMemberInfo | 

uint FUN_10412a70(int param_1,undefined4 param_2)

{
  uint extraout_EAX;
  L2ParamStack local_e4 [16];
  void *local_d4;
  void *local_d0;
  undefined1 local_cc [48];
  undefined1 local_9c [48];
  undefined1 local_6c [48];
  undefined1 local_3c [48];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1080ed4c;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  thunk_FUN_104026b0(*(undefined4 *)(param_1 + 0x48),param_2,"dSSdSS",&local_d0,0x30,local_cc,0x30,
                     local_6c,&local_d4,0x30,local_9c,0x30,local_3c);
  L2ParamStack::L2ParamStack(local_e4,10);
  local_4 = 0;
  L2ParamStack::PushBack(local_e4,local_d0);
  L2ParamStack::PushBack(local_e4,local_cc);
  L2ParamStack::PushBack(local_e4,local_6c);
  L2ParamStack::PushBack(local_e4,local_d4);
  L2ParamStack::PushBack(local_e4,local_9c);
  L2ParamStack::PushBack(local_e4,local_3c);
  (**(code **)(**(int **)(DAT_10b1f538 + 0x54) + 0x3c0))(local_e4);
  FOutputDevice::Logf(*(FOutputDevice **)GNetworkLog_exref,
                      (ushort *)*(FOutputDevice **)GNetworkLog_exref);
  local_4 = 0xffffffff;
  L2ParamStack::~L2ParamStack(local_e4);
  ExceptionList = pvStack_c;
  return extraout_EAX & 0xffffff00;
}


// ==== 10412be0 FUN_10412be0 depth=0 from=raiz callees=CORE.DLL::L2ParamStack::PushBack@EXTERNAL:00000136 CORE.DLL::L2ParamStack::~L2ParamStack@EXTERNAL:0000012a CORE.DLL::L2ParamStack::L2ParamStack@EXTERNAL:0000012b CORE.DLL::FOutputDevice::Logf@EXTERNAL:000000b4 thunk_FUN_104026b0@103034e5
// strings: 108857c0=(Receive)PledgeReceiveWarList | 

uint FUN_10412be0(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  uint extraout_EAX;
  int iVar3;
  int unaff_retaddr;
  void *local_6c;
  void *local_68;
  void *pvStack_64;
  L2ParamStack aLStack_60 [20];
  L2ParamStack local_4c [12];
  undefined1 auStack_40 [52];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  iVar1 = param_1;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1080ed72;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  uVar2 = thunk_FUN_104026b0(*(undefined4 *)(param_1 + 0x48),param_2,&DAT_1087ff0c,&local_6c,
                             &local_68,&param_1);
  L2ParamStack::L2ParamStack(local_4c,10);
  iVar3 = 0;
  local_4 = 0;
  L2ParamStack::PushBack(local_4c,(void *)0xffffffff);
  L2ParamStack::PushBack(local_4c,local_6c);
  (**(code **)(**(int **)(DAT_10b1f538 + 0x54) + 0x3c4))(local_4c);
  if (0 < unaff_retaddr) {
    do {
      uVar2 = thunk_FUN_104026b0(*(undefined4 *)(iVar1 + 0x48),uVar2,&DAT_1088424c,0x30,auStack_40,
                                 &local_68,&pvStack_64);
      L2ParamStack::L2ParamStack(aLStack_60,10);
      puStack_8._0_1_ = 1;
      L2ParamStack::PushBack(aLStack_60,(void *)0x0);
      L2ParamStack::PushBack(aLStack_60,local_6c);
      L2ParamStack::PushBack(aLStack_60,auStack_40);
      L2ParamStack::PushBack(aLStack_60,local_68);
      L2ParamStack::PushBack(aLStack_60,pvStack_64);
      (**(code **)(**(int **)(DAT_10b1f538 + 0x54) + 0x3c4))(aLStack_60);
      puStack_8 = (undefined1 *)((uint)puStack_8._1_3_ << 8);
      L2ParamStack::~L2ParamStack(aLStack_60);
      iVar3 = iVar3 + 1;
    } while (iVar3 < unaff_retaddr);
  }
  FOutputDevice::Logf((FOutputDevice *)GNetworkLog_exref,*(ushort **)GNetworkLog_exref);
  local_4 = 0xffffffff;
  L2ParamStack::~L2ParamStack(local_4c);
  ExceptionList = pvStack_c;
  return extraout_EAX & 0xffffff00;
}


// ==== 10412dc0 FUN_10412dc0 depth=0 from=raiz callees=CORE.DLL::L2ParamStack::PushBack@EXTERNAL:00000136 CORE.DLL::L2ParamStack::~L2ParamStack@EXTERNAL:0000012a CORE.DLL::L2ParamStack::L2ParamStack@EXTERNAL:0000012b CORE.DLL::FOutputDevice::Logf@EXTERNAL:000000b4 thunk_FUN_104026b0@103034e5
// strings: 10885808=(Receive) CreatePledgePacket | 

uint FUN_10412dc0(void *param_1,undefined4 param_2)

{
  uint extraout_EAX;
  L2ParamStack local_1c [16];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1080ed99;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  thunk_FUN_104026b0(*(undefined4 *)((int)param_1 + 0x48),param_2,&DAT_1087ff8c,&param_1);
  L2ParamStack::L2ParamStack(local_1c,10);
  local_4 = 0;
  L2ParamStack::PushBack(local_1c,param_1);
  (**(code **)(**(int **)(DAT_10b1f538 + 0x54) + 0x358))(local_1c);
  FOutputDevice::Logf((FOutputDevice *)GNetworkLog_exref,*(ushort **)GNetworkLog_exref);
  local_4 = 0xffffffff;
  L2ParamStack::~L2ParamStack(local_1c);
  ExceptionList = pvStack_c;
  return extraout_EAX & 0xffffff00;
}


// ==== 10412ea0 FUN_10412ea0 depth=0 from=raiz callees=CORE.DLL::L2ParamStack::PushBack@EXTERNAL:00000136 CORE.DLL::L2ParamStack::~L2ParamStack@EXTERNAL:0000012a CORE.DLL::L2ParamStack::L2ParamStack@EXTERNAL:0000012b CORE.DLL::FOutputDevice::Logf@EXTERNAL:000000b4 thunk_FUN_104026b0@103034e5
// strings: 10885850=(Receive) PledgeReceiveSubPledgeCreated | 

uint FUN_10412ea0(int param_1,undefined4 param_2)

{
  uint extraout_EAX;
  void *local_84;
  void *local_80;
  L2ParamStack local_7c [16];
  undefined1 local_6c [48];
  undefined1 local_3c [48];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1080edb9;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  thunk_FUN_104026b0(*(undefined4 *)(param_1 + 0x48),param_2,&DAT_108858b0,&local_84,&local_80,0x30,
                     local_6c,0x30,local_3c);
  L2ParamStack::L2ParamStack(local_7c,10);
  local_4 = 0;
  L2ParamStack::PushBack(local_7c,local_84);
  L2ParamStack::PushBack(local_7c,local_80);
  L2ParamStack::PushBack(local_7c,local_6c);
  L2ParamStack::PushBack(local_7c,local_3c);
  (**(code **)(**(int **)(DAT_10b1f538 + 0x54) + 0x3c8))(local_7c);
  FOutputDevice::Logf((FOutputDevice *)GNetworkLog_exref,*(ushort **)GNetworkLog_exref);
  local_4 = 0xffffffff;
  L2ParamStack::~L2ParamStack(local_7c);
  ExceptionList = pvStack_c;
  return extraout_EAX & 0xffffff00;
}


// ==== 10412fd0 FUN_10412fd0 depth=0 from=raiz callees=CORE.DLL::L2ParamStack::PushBack@EXTERNAL:00000136 CORE.DLL::L2ParamStack::~L2ParamStack@EXTERNAL:0000012a CORE.DLL::L2ParamStack::L2ParamStack@EXTERNAL:0000012b thunk_FUN_104026b0@103034e5
// strings: 

uint FUN_10412fd0(void *param_1,undefined4 param_2)

{
  uint extraout_EAX;
  L2ParamStack local_1c [12];
  void *pvStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1080edd9;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  thunk_FUN_104026b0(*(undefined4 *)((int)param_1 + 0x48),param_2,&DAT_1087ff8c);
  L2ParamStack::L2ParamStack(local_1c,10);
  local_4 = 0;
  L2ParamStack::PushBack(local_1c,param_1);
  (**(code **)(**(int **)(DAT_10b1f538 + 0x54) + 0x3cc))();
  puStack_8 = (undefined1 *)0xffffffff;
  L2ParamStack::~L2ParamStack((L2ParamStack *)&stack0xffffffe0);
  ExceptionList = pvStack_10;
  return extraout_EAX & 0xffffff00;
}


// ==== 10413090 FUN_10413090 depth=0 from=raiz callees=CORE.DLL::L2ParamStack::PushBack@EXTERNAL:00000136 CORE.DLL::L2ParamStack::~L2ParamStack@EXTERNAL:0000012a CORE.DLL::L2ParamStack::L2ParamStack@EXTERNAL:0000012b CORE.DLL::FOutputDevice::Logf@EXTERNAL:000000b4 thunk_FUN_104026b0@103034e5
// strings: 108858b8=(Receive) AskJoinPledgePacket | 

uint FUN_10413090(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  uint extraout_EAX;
  void *local_84;
  void *local_80;
  L2ParamStack local_7c [16];
  undefined1 local_6c [48];
  undefined1 local_3c [48];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1080edf9;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  uVar1 = thunk_FUN_104026b0(*(undefined4 *)(param_1 + 0x48),param_2,&DAT_10885760,&local_80,0x30,
                             local_6c,&local_84);
  L2ParamStack::L2ParamStack(local_7c,10);
  local_4 = 0;
  L2ParamStack::PushBack(local_7c,local_80);
  L2ParamStack::PushBack(local_7c,local_6c);
  L2ParamStack::PushBack(local_7c,local_84);
  if (local_84 != (void *)0x0) {
    thunk_FUN_104026b0(*(undefined4 *)(param_1 + 0x48),uVar1,&DAT_108847bc,0x30,local_3c);
    L2ParamStack::PushBack(local_7c,local_3c);
  }
  (**(code **)(**(int **)(DAT_10b1f538 + 0x54) + 0x364))(local_7c);
  FOutputDevice::Logf((FOutputDevice *)GNetworkLog_exref,*(ushort **)GNetworkLog_exref);
  local_4 = 0xffffffff;
  L2ParamStack::~L2ParamStack(local_7c);
  ExceptionList = pvStack_c;
  return extraout_EAX & 0xffffff00;
}


// ==== 104131f0 FUN_104131f0 depth=0 from=raiz callees=CORE.DLL::L2ParamStack::PushBack@EXTERNAL:00000136 CORE.DLL::L2ParamStack::~L2ParamStack@EXTERNAL:0000012a CORE.DLL::L2ParamStack::L2ParamStack@EXTERNAL:0000012b CORE.DLL::FOutputDevice::Logf@EXTERNAL:000000b4 thunk_FUN_104026b0@103034e5
// strings: 10885900=(Receive) JoinPledgePacket | 

uint FUN_104131f0(void *param_1,undefined4 param_2)

{
  uint extraout_EAX;
  L2ParamStack local_1c [16];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1080ee19;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  thunk_FUN_104026b0(*(undefined4 *)((int)param_1 + 0x48),param_2,&DAT_1087ff8c,&param_1);
  L2ParamStack::L2ParamStack(local_1c,10);
  local_4 = 0;
  L2ParamStack::PushBack(local_1c,param_1);
  (**(code **)(**(int **)(DAT_10b1f538 + 0x54) + 0x370))(local_1c);
  FOutputDevice::Logf((FOutputDevice *)GNetworkLog_exref,*(ushort **)GNetworkLog_exref);
  local_4 = 0xffffffff;
  L2ParamStack::~L2ParamStack(local_1c);
  ExceptionList = pvStack_c;
  return extraout_EAX & 0xffffff00;
}


// ==== 104132d0 FUN_104132d0 depth=0 from=raiz callees=CORE.DLL::L2ParamStack::PushBack@EXTERNAL:00000136 CORE.DLL::L2ParamStack::~L2ParamStack@EXTERNAL:0000012a CORE.DLL::L2ParamStack::L2ParamStack@EXTERNAL:0000012b CORE.DLL::FOutputDevice::Logf@EXTERNAL:000000b4 thunk_FUN_104026b0@103034e5
// strings: 10885940=(Receive) WithdrawalPledgePacket | 

uint FUN_104132d0(void *param_1,undefined4 param_2)

{
  uint extraout_EAX;
  L2ParamStack local_1c [16];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1080ee39;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  thunk_FUN_104026b0(*(undefined4 *)((int)param_1 + 0x48),param_2,&DAT_1087ff8c,&param_1);
  L2ParamStack::L2ParamStack(local_1c,10);
  local_4 = 0;
  L2ParamStack::PushBack(local_1c,param_1);
  (**(code **)(**(int **)(DAT_10b1f538 + 0x54) + 0x374))(local_1c);
  FOutputDevice::Logf((FOutputDevice *)GNetworkLog_exref,*(ushort **)GNetworkLog_exref);
  local_4 = 0xffffffff;
  L2ParamStack::~L2ParamStack(local_1c);
  ExceptionList = pvStack_c;
  return extraout_EAX & 0xffffff00;
}


// ==== 104133b0 FUN_104133b0 depth=0 from=raiz callees=CORE.DLL::L2ParamStack::PushBack@EXTERNAL:00000136 CORE.DLL::L2ParamStack::~L2ParamStack@EXTERNAL:0000012a CORE.DLL::L2ParamStack::L2ParamStack@EXTERNAL:0000012b CORE.DLL::FOutputDevice::Logf@EXTERNAL:000000b4 thunk_FUN_104026b0@103034e5
// strings: 10885990=(Receive) OustPledgeMemberPacket | 

uint FUN_104133b0(void *param_1,undefined4 param_2)

{
  uint extraout_EAX;
  L2ParamStack local_1c [16];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1080ee59;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  thunk_FUN_104026b0(*(undefined4 *)((int)param_1 + 0x48),param_2,&DAT_1087ff8c,&param_1);
  L2ParamStack::L2ParamStack(local_1c,10);
  local_4 = 0;
  L2ParamStack::PushBack(local_1c,param_1);
  (**(code **)(**(int **)(DAT_10b1f538 + 0x54) + 0x368))(local_1c);
  FOutputDevice::Logf((FOutputDevice *)GNetworkLog_exref,*(ushort **)GNetworkLog_exref);
  local_4 = 0xffffffff;
  L2ParamStack::~L2ParamStack(local_1c);
  ExceptionList = pvStack_c;
  return extraout_EAX & 0xffffff00;
}


// ==== 10413490 FUN_10413490 depth=0 from=raiz callees=CORE.DLL::L2ParamStack::PushBack@EXTERNAL:00000136 CORE.DLL::L2ParamStack::~L2ParamStack@EXTERNAL:0000012a CORE.DLL::L2ParamStack::L2ParamStack@EXTERNAL:0000012b CORE.DLL::FOutputDevice::Logf@EXTERNAL:000000b4 thunk_FUN_104026b0@103034e5
// strings: 108859e0=(Receive) DismissPledgePacket | 

uint FUN_10413490(void *param_1,undefined4 param_2)

{
  uint extraout_EAX;
  L2ParamStack local_1c [16];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1080ee79;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  thunk_FUN_104026b0(*(undefined4 *)((int)param_1 + 0x48),param_2,&DAT_1087ff8c,&param_1);
  L2ParamStack::L2ParamStack(local_1c,10);
  local_4 = 0;
  L2ParamStack::PushBack(local_1c,param_1);
  (**(code **)(**(int **)(DAT_10b1f538 + 0x54) + 0x36c))(local_1c);
  FOutputDevice::Logf((FOutputDevice *)GNetworkLog_exref,*(ushort **)GNetworkLog_exref);
  local_4 = 0xffffffff;
  L2ParamStack::~L2ParamStack(local_1c);
  ExceptionList = pvStack_c;
  return extraout_EAX & 0xffffff00;
}


// ==== 10413570 FUN_10413570 depth=0 from=raiz callees=CORE.DLL::UObject::StaticFindObject@EXTERNAL:00000135 CORE.DLL::appSprintf@EXTERNAL:0000013b _free@107a6b24 thunk_FUN_104026b0@103034e5 _memcpy@107a6260 _malloc@107a6ccc
// strings: 10885a70=..\crest | 10885a54=crest_%d_%d | 

uint FUN_10413570(int param_1,undefined4 param_2)

{
  void *_Src;
  int iVar1;
  void *pvVar2;
  UObject *pUVar3;
  void *extraout_EAX;
  ushort local_128 [134];
  int local_1c;
  size_t local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1080ee90;
  local_10 = ExceptionList;
  local_14 = &stack0xfffffecc;
  local_8 = 0;
  ExceptionList = &local_10;
  _Src = (void *)thunk_FUN_104026b0(*(undefined4 *)(param_1 + 0x48),param_2,&DAT_1087ff44,&local_1c,
                                    &local_18);
  pvVar2 = _Src;
  if ((0 < local_1c) && (0 < (int)local_18)) {
    iVar1 = (**(code **)(**(int **)GFileManager_exref + 0x28))(L"..\\crest",0);
    pvVar2 = (void *)0x0;
    if (iVar1 != 0) {
      pvVar2 = _malloc(local_18);
      _memcpy(pvVar2,_Src,local_18);
      appSprintf(local_128,(ushort *)L"crest_%d_%d",DAT_10b20f30,local_1c);
      pUVar3 = UObject::StaticFindObject
                         (&UTexture::PrivateStaticClass,(UObject *)0xffffffff,local_128,0);
      if (pUVar3 == (UObject *)0x0) {
        (**(code **)(**(int **)(DAT_10b1f538 + 0x54) + 0x360))
                  (DAT_10b20f30,local_1c,pvVar2,local_18,1);
        (**(code **)(**(int **)(DAT_10b1f538 + 0x54) + 0x35c))(DAT_10b20f30,local_1c,1,0);
      }
      _free(pvVar2);
      pvVar2 = extraout_EAX;
    }
  }
  ExceptionList = local_10;
  return (uint)pvVar2 & 0xffffff00;
}


// ==== 10413730 FUN_10413730 depth=0 from=raiz callees=CORE.DLL::L2ParamStack::PushBack@EXTERNAL:00000136 CORE.DLL::L2ParamStack::~L2ParamStack@EXTERNAL:0000012a CORE.DLL::L2ParamStack::L2ParamStack@EXTERNAL:0000012b CORE.DLL::FOutputDevice::Logf@EXTERNAL:000000b4 thunk_FUN_104026b0@103034e5
// strings: 10885a88=(Receive) AskJoinPartyPacket | 

uint FUN_10413730(int param_1,undefined4 param_2)

{
  uint extraout_EAX;
  void *local_220;
  L2ParamStack local_21c [16];
  undefined1 local_20c [512];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1080eeac;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  thunk_FUN_104026b0(*(undefined4 *)(param_1 + 0x48),param_2,&DAT_108843d0,0x200,local_20c,
                     &local_220);
  L2ParamStack::L2ParamStack(local_21c,10);
  local_4 = 0;
  L2ParamStack::PushBack(local_21c,local_20c);
  L2ParamStack::PushBack(local_21c,local_220);
  (**(code **)(**(int **)(DAT_10b1f538 + 0x54) + 0x39c))(local_21c);
  FOutputDevice::Logf(*(FOutputDevice **)GNetworkLog_exref,
                      (ushort *)*(FOutputDevice **)GNetworkLog_exref);
  local_4 = 0xffffffff;
  L2ParamStack::~L2ParamStack(local_21c);
  ExceptionList = pvStack_c;
  return extraout_EAX & 0xffffff00;
}


// ==== 10413840 FUN_10413840 depth=0 from=raiz callees=CORE.DLL::L2ParamStack::PushBack@EXTERNAL:00000136 CORE.DLL::L2ParamStack::~L2ParamStack@EXTERNAL:0000012a CORE.DLL::L2ParamStack::L2ParamStack@EXTERNAL:0000012b CORE.DLL::FOutputDevice::Logf@EXTERNAL:000000b4 thunk_FUN_104026b0@103034e5
// strings: 10885ad0=(Receive) JoinPartyPacket | 

uint FUN_10413840(void *param_1,undefined4 param_2)

{
  uint extraout_EAX;
  L2ParamStack local_1c [16];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1080eec9;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  thunk_FUN_104026b0(*(undefined4 *)((int)param_1 + 0x48),param_2,&DAT_1087ff8c,&param_1);
  L2ParamStack::L2ParamStack(local_1c,10);
  local_4 = 0;
  L2ParamStack::PushBack(local_1c,param_1);
  (**(code **)(**(int **)(DAT_10b1f538 + 0x54) + 0x3a0))(local_1c);
  FOutputDevice::Logf((FOutputDevice *)GNetworkLog_exref,*(ushort **)GNetworkLog_exref);
  local_4 = 0xffffffff;
  L2ParamStack::~L2ParamStack(local_1c);
  ExceptionList = pvStack_c;
  return extraout_EAX & 0xffffff00;
}


// ==== 10413920 FUN_10413920 depth=0 from=raiz callees=CORE.DLL::L2ParamStack::PushBack@EXTERNAL:00000136 CORE.DLL::L2ParamStack::~L2ParamStack@EXTERNAL:0000012a CORE.DLL::L2ParamStack::L2ParamStack@EXTERNAL:0000012b CORE.DLL::FOutputDevice::Logf@EXTERNAL:000000b4 thunk_FUN_104026b0@103034e5
// strings: 10885b10=(Receive) WithdrawalPartyPacket | 

uint FUN_10413920(void *param_1,undefined4 param_2)

{
  uint extraout_EAX;
  L2ParamStack local_1c [16];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1080eee9;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  thunk_FUN_104026b0(*(undefined4 *)((int)param_1 + 0x48),param_2,&DAT_1087ff8c,&param_1);
  L2ParamStack::L2ParamStack(local_1c,10);
  local_4 = 0;
  L2ParamStack::PushBack(local_1c,param_1);
  (**(code **)(**(int **)(DAT_10b1f538 + 0x54) + 0x3a4))(local_1c);
  FOutputDevice::Logf((FOutputDevice *)GNetworkLog_exref,*(ushort **)GNetworkLog_exref);
  local_4 = 0xffffffff;
  L2ParamStack::~L2ParamStack(local_1c);
  ExceptionList = pvStack_c;
  return extraout_EAX & 0xffffff00;
}


// ==== 10413a00 FUN_10413a00 depth=0 from=raiz callees=CORE.DLL::L2ParamStack::PushBack@EXTERNAL:00000136 CORE.DLL::L2ParamStack::~L2ParamStack@EXTERNAL:0000012a CORE.DLL::L2ParamStack::L2ParamStack@EXTERNAL:0000012b CORE.DLL::FOutputDevice::Logf@EXTERNAL:000000b4 thunk_FUN_104026b0@103034e5
// strings: 10885b60=(Receive) OustPartyMemberPacket | 

uint FUN_10413a00(void *param_1,undefined4 param_2)

{
  uint extraout_EAX;
  L2ParamStack local_1c [16];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1080ef09;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  thunk_FUN_104026b0(*(undefined4 *)((int)param_1 + 0x48),param_2,&DAT_1087ff8c,&param_1);
  L2ParamStack::L2ParamStack(local_1c,10);
  local_4 = 0;
  L2ParamStack::PushBack(local_1c,param_1);
  (**(code **)(**(int **)(DAT_10b1f538 + 0x54) + 0x3a8))(local_1c);
  FOutputDevice::Logf((FOutputDevice *)GNetworkLog_exref,*(ushort **)GNetworkLog_exref);
  local_4 = 0xffffffff;
  L2ParamStack::~L2ParamStack(local_1c);
  ExceptionList = pvStack_c;
  return extraout_EAX & 0xffffff00;
}


// ==== 10413ae0 FUN_10413ae0 depth=0 from=raiz callees=CORE.DLL::L2ParamStack::PushBack@EXTERNAL:00000136 CORE.DLL::L2ParamStack::~L2ParamStack@EXTERNAL:0000012a CORE.DLL::L2ParamStack::L2ParamStack@EXTERNAL:0000012b CORE.DLL::FOutputDevice::Logf@EXTERNAL:000000b4 thunk_FUN_104026b0@103034e5
// strings: 10885bac=(Receive) DismissPartyPacket | 

uint FUN_10413ae0(void *param_1,undefined4 param_2)

{
  uint extraout_EAX;
  L2ParamStack local_1c [16];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1080ef29;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  thunk_FUN_104026b0(*(undefined4 *)((int)param_1 + 0x48),param_2,&DAT_1087ff8c,&param_1);
  L2ParamStack::L2ParamStack(local_1c,10);
  local_4 = 0;
  L2ParamStack::PushBack(local_1c,param_1);
  (**(code **)(**(int **)(DAT_10b1f538 + 0x54) + 0x3b0))(local_1c);
  FOutputDevice::Logf((FOutputDevice *)GNetworkLog_exref,*(ushort **)GNetworkLog_exref);
  local_4 = 0xffffffff;
  L2ParamStack::~L2ParamStack(local_1c);
  ExceptionList = pvStack_c;
  return extraout_EAX & 0xffffff00;
}


// ==== 10413bc0 FUN_10413bc0 depth=0 from=raiz callees=CORE.DLL::L2ParamStack::PushBack@EXTERNAL:00000136 CORE.DLL::L2ParamStack::~L2ParamStack@EXTERNAL:0000012a CORE.DLL::L2ParamStack::L2ParamStack@EXTERNAL:0000012b CORE.DLL::FOutputDevice::Logf@EXTERNAL:000000b4 thunk_FUN_104026b0@103034e5
// strings: 10885bf4=(Receive) MagicAndSkillList | 

uint FUN_10413bc0(void *param_1,undefined4 param_2)

{
  uint extraout_EAX;
  void *local_24;
  void *local_20;
  L2ParamStack local_1c [16];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1080ef49;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  thunk_FUN_104026b0(*(undefined4 *)((int)param_1 + 0x48),param_2,&DAT_1087ff0c,&param_1,&local_24,
                     &local_20);
  L2ParamStack::L2ParamStack(local_1c,10);
  local_4 = 0;
  L2ParamStack::PushBack(local_1c,param_1);
  L2ParamStack::PushBack(local_1c,local_24);
  L2ParamStack::PushBack(local_1c,local_20);
  (**(code **)(**(int **)(DAT_10b1f538 + 0x54) + 0x410))(local_1c);
  FOutputDevice::Logf(*(FOutputDevice **)GNetworkLog_exref,
                      (ushort *)*(FOutputDevice **)GNetworkLog_exref);
  local_4 = 0xffffffff;
  L2ParamStack::~L2ParamStack(local_1c);
  ExceptionList = pvStack_c;
  return extraout_EAX & 0xffffff00;
}


// ==== 10413e50 FUN_10413e50 depth=0 from=raiz callees=CORE.DLL::FOutputDevice::Logf@EXTERNAL:000000b4 thunk_FUN_104026b0@103034e5
// strings: 10885d10=dddhhdhhhddd | 10885cb8=(Receive) WareHouseDepositListPacket | 

uint FUN_10413e50(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  uint extraout_EAX;
  int iVar3;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined2 uStack_28;
  undefined2 uStack_26;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  short sStack_4;
  
  iVar1 = param_1;
  uVar2 = thunk_FUN_104026b0(*(undefined4 *)(param_1 + 0x48),param_2,&DAT_10885d20,&local_44,
                             &local_48,&param_1);
  (**(code **)(**(int **)(DAT_10b1f538 + 0x54) + 0x23c))(local_44,local_48);
  iVar3 = 0;
  if (0 < sStack_4) {
    do {
      local_44 = CONCAT22(local_44._2_2_,0xffff);
      uStack_40 = 0;
      uStack_3c = 0;
      uStack_38 = 0;
      uStack_34 = 0;
      uStack_30 = 0;
      uStack_2c = 0;
      uStack_24 = 0;
      uStack_28 = 0;
      uStack_26 = 0;
      uStack_20 = 0;
      uStack_1c = 0;
      uStack_18 = 0xffffffff;
      uStack_14 = 0;
      uStack_10 = 0;
      uStack_c = 0xffffffff;
      local_48 = 0xffffffff;
      uVar2 = thunk_FUN_104026b0(*(undefined4 *)(iVar1 + 0x48),uVar2,&DAT_1088494c,&local_48);
      uVar2 = thunk_FUN_104026b0(*(undefined4 *)(iVar1 + 0x48),uVar2,"dddhhdhhhddd",&uStack_40,
                                 &uStack_3c,&uStack_38,&local_44,&uStack_28,&uStack_2c,&uStack_24,
                                 &uStack_26,&uStack_20,&uStack_18,&uStack_14,&uStack_10);
      (**(code **)(**(int **)(DAT_10b1f538 + 0x54) + 0x240))(&local_44);
      iVar3 = iVar3 + 1;
    } while (iVar3 < sStack_4);
  }
  FOutputDevice::Logf((FOutputDevice *)GNetworkLog_exref,*(ushort **)GNetworkLog_exref);
  return extraout_EAX & 0xffffff00;
}


// ==== 10414000 FUN_10414000 depth=0 from=raiz callees=CORE.DLL::FOutputDevice::Logf@EXTERNAL:000000b4 thunk_FUN_104026b0@103034e5
// strings: 10885d10=dddhhdhhhddd | 10885d28=(Receive) WareHouseWithdrawListPacket | 

uint FUN_10414000(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  uint extraout_EAX;
  int iVar3;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined2 uStack_28;
  undefined2 uStack_26;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  short sStack_4;
  
  iVar1 = param_1;
  uVar2 = thunk_FUN_104026b0(*(undefined4 *)(param_1 + 0x48),param_2,&DAT_10885d20,&local_44,
                             &local_48,&param_1);
  (**(code **)(**(int **)(DAT_10b1f538 + 0x54) + 0x244))(local_44,local_48);
  iVar3 = 0;
  if (0 < sStack_4) {
    do {
      local_44 = CONCAT22(local_44._2_2_,0xffff);
      uStack_40 = 0;
      uStack_3c = 0;
      uStack_38 = 0;
      uStack_34 = 0;
      uStack_30 = 0;
      uStack_2c = 0;
      uStack_24 = 0;
      uStack_28 = 0;
      uStack_26 = 0;
      uStack_20 = 0;
      uStack_1c = 0;
      uStack_18 = 0xffffffff;
      uStack_14 = 0;
      uStack_10 = 0;
      uStack_c = 0xffffffff;
      local_48 = 0xffffffff;
      uVar2 = thunk_FUN_104026b0(*(undefined4 *)(iVar1 + 0x48),uVar2,&DAT_1088494c,&local_48);
      uVar2 = thunk_FUN_104026b0(*(undefined4 *)(iVar1 + 0x48),uVar2,"dddhhdhhhddd",&uStack_40,
                                 &uStack_3c,&uStack_38,&local_44,&uStack_28,&uStack_2c,&uStack_24,
                                 &uStack_26,&uStack_20,&uStack_18,&uStack_14,&uStack_10);
      (**(code **)(**(int **)(DAT_10b1f538 + 0x54) + 0x248))(&local_44);
      iVar3 = iVar3 + 1;
    } while (iVar3 < sStack_4);
  }
  FOutputDevice::Logf((FOutputDevice *)GNetworkLog_exref,*(ushort **)GNetworkLog_exref);
  return extraout_EAX & 0xffffff00;
}


// ==== 104141b0 FUN_104141b0 depth=0 from=raiz callees=CORE.DLL::L2ParamStack::PushBack@EXTERNAL:00000136 CORE.DLL::L2ParamStack::~L2ParamStack@EXTERNAL:0000012a CORE.DLL::L2ParamStack::L2ParamStack@EXTERNAL:0000012b CORE.DLL::FOutputDevice::Logf@EXTERNAL:000000b4 thunk_FUN_104026b0@103034e5
// strings: 10885d84=(Receive) WareHouseDonePacket | 

uint FUN_104141b0(void *param_1,undefined4 param_2)

{
  uint extraout_EAX;
  L2ParamStack local_1c [16];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1080ef79;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  thunk_FUN_104026b0(*(undefined4 *)((int)param_1 + 0x48),param_2,&DAT_1087ff8c,&param_1);
  L2ParamStack::L2ParamStack(local_1c,10);
  local_4 = 0;
  L2ParamStack::PushBack(local_1c,param_1);
  (**(code **)(**(int **)(DAT_10b1f538 + 0x54) + 0x3b8))(local_1c);
  FOutputDevice::Logf((FOutputDevice *)GNetworkLog_exref,*(ushort **)GNetworkLog_exref);
  local_4 = 0xffffffff;
  L2ParamStack::~L2ParamStack(local_1c);
  ExceptionList = pvStack_c;
  return extraout_EAX & 0xffffff00;
}


// ==== 10414290 FUN_10414290 depth=0 from=raiz callees=CORE.DLL::L2ParamStack::PushBack@EXTERNAL:00000136 CORE.DLL::L2ParamStack::~L2ParamStack@EXTERNAL:0000012a CORE.DLL::L2ParamStack::L2ParamStack@EXTERNAL:0000012b CORE.DLL::FOutputDevice::Logf@EXTERNAL:000000b4 thunk_FUN_104026b0@103034e5
// strings: 10885e68=dddddhh | 10885dd0=(Receive) ShortCutRegisterPacket ShortCutType=%d RoomNum=%d | 

uint FUN_10414290(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  uint extraout_EAX;
  FOutputDevice *pFVar3;
  code *pcVar4;
  char local_4d;
  short local_4c [2];
  FOutputDevice *local_48;
  void *local_44;
  void *local_40;
  void *local_3c;
  void *local_38;
  void *local_34;
  void *local_30;
  void *local_2c;
  void *local_28;
  void *local_24;
  void *local_20;
  L2ParamStack local_1c [16];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1080ef99;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  L2ParamStack::L2ParamStack(local_1c,10);
  iVar1 = param_1;
  local_4 = 0;
  uVar2 = thunk_FUN_104026b0(*(undefined4 *)(param_1 + 0x48),param_2,&DAT_1087ff44,&local_44,
                             &local_40);
  switch(local_44) {
  case (void *)0x1:
    thunk_FUN_104026b0(*(undefined4 *)(iVar1 + 0x48),uVar2,"dddddhh",&local_3c,&local_48,&local_38,
                       &local_34,&local_30,&param_1,local_4c);
    pcVar4 = PushBack_exref;
    L2ParamStack::PushBack(local_1c,local_44);
    L2ParamStack::PushBack(local_1c,local_40);
    L2ParamStack::PushBack(local_1c,local_3c);
    L2ParamStack::PushBack(local_1c,local_48);
    L2ParamStack::PushBack(local_1c,local_38);
    L2ParamStack::PushBack(local_1c,local_34);
    L2ParamStack::PushBack(local_1c,local_30);
    L2ParamStack::PushBack(local_1c,(void *)(int)(short)param_1);
    pFVar3 = (FOutputDevice *)(int)local_4c[0];
    break;
  case (void *)0x2:
    thunk_FUN_104026b0(*(undefined4 *)(iVar1 + 0x48),uVar2,&DAT_10885e60,&local_2c,&local_28,
                       &local_4d,&local_48);
    pcVar4 = PushBack_exref;
    L2ParamStack::PushBack(local_1c,local_44);
    L2ParamStack::PushBack(local_1c,local_40);
    L2ParamStack::PushBack(local_1c,local_2c);
    L2ParamStack::PushBack(local_1c,local_28);
    L2ParamStack::PushBack(local_1c,(void *)(int)local_4d);
    pFVar3 = local_48;
    break;
  case (void *)0x3:
    thunk_FUN_104026b0(*(undefined4 *)(iVar1 + 0x48),uVar2,&DAT_1087ff44,&local_24,&local_48);
    pcVar4 = PushBack_exref;
    L2ParamStack::PushBack(local_1c,local_44);
    L2ParamStack::PushBack(local_1c,local_40);
    local_3c = local_24;
    goto LAB_104144cc;
  case (void *)0x4:
    thunk_FUN_104026b0(*(undefined4 *)(iVar1 + 0x48),uVar2,&DAT_1087ff44,&local_20,&local_48);
    pcVar4 = PushBack_exref;
    L2ParamStack::PushBack(local_1c,local_44);
    L2ParamStack::PushBack(local_1c,local_40);
    L2ParamStack::PushBack(local_1c,local_20);
    pFVar3 = local_48;
    break;
  case (void *)0x5:
    thunk_FUN_104026b0(*(undefined4 *)(iVar1 + 0x48),uVar2,&DAT_1087ff44,&local_3c,&local_48);
    pcVar4 = PushBack_exref;
    L2ParamStack::PushBack(local_1c,local_44);
    L2ParamStack::PushBack(local_1c,local_40);
LAB_104144cc:
    (*pcVar4)(local_3c);
    pFVar3 = local_48;
    break;
  default:
    goto switchD_104142f1_default;
  }
  (*pcVar4)(pFVar3);
switchD_104142f1_default:
  (**(code **)(*(int *)GL2Console + 0x2d4))(local_1c);
  FOutputDevice::Logf(local_48,*(ushort **)GNetworkLog_exref);
  local_4 = 0xffffffff;
  L2ParamStack::~L2ParamStack(local_1c);
  ExceptionList = pvStack_c;
  return extraout_EAX & 0xffffff00;
}


// ==== 10414600 FUN_10414600 depth=0 from=raiz callees=CORE.DLL::L2ParamStack::PushBack@EXTERNAL:00000136 CORE.DLL::L2ParamStack::~L2ParamStack@EXTERNAL:0000012a CORE.DLL::L2ParamStack::L2ParamStack@EXTERNAL:0000012b CORE.DLL::FOutputDevice::Logf@EXTERNAL:000000b4 thunk_FUN_104026b0@103034e5
// strings: 10885e68=dddddhh | 10885ed0=(Receive) ShortCutInitPacket | 

uint FUN_10414600(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  uint extraout_EAX;
  void *pvVar2;
  L2ParamStack local_6c [24];
  void *local_54;
  void *local_50;
  void *local_4c;
  void *local_48;
  void *local_44;
  void *local_40;
  void *local_3c;
  int local_38;
  int local_34;
  void *local_30;
  void *local_2c;
  void *local_28;
  void *local_24;
  short local_20 [2];
  short local_1c [3];
  char local_15;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  puStack_c = &LAB_1080efb9;
  local_10 = ExceptionList;
  local_14 = &stack0xffffff88;
  local_8 = 0;
  ExceptionList = &local_10;
  (**(code **)(*(int *)DAT_10b1f538[0x15] + 0x400))();
  uVar1 = thunk_FUN_104026b0(*(undefined4 *)(param_1 + 0x48),param_2,&DAT_1087ff8c,&local_38);
  local_34 = 0;
  do {
    if (local_38 <= local_34) {
      (**(code **)(*DAT_10b1f538 + 0x338))();
      FOutputDevice::Logf((FOutputDevice *)GNetworkLog_exref,*(ushort **)GNetworkLog_exref);
      ExceptionList = local_10;
      return extraout_EAX & 0xffffff00;
    }
    L2ParamStack::L2ParamStack(local_6c,10);
    local_8 = CONCAT31(local_8._1_3_,1);
    uVar1 = thunk_FUN_104026b0(*(undefined4 *)(param_1 + 0x48),uVar1,&DAT_1087ff44,&local_28,
                               &local_2c);
    switch(local_28) {
    case (void *)0x1:
      uVar1 = thunk_FUN_104026b0(*(undefined4 *)(param_1 + 0x48),uVar1,"dddddhh",&local_30,&local_24
                                 ,&local_3c,&local_40,&local_44,local_1c,local_20);
      L2ParamStack::PushBack(local_6c,local_28);
      L2ParamStack::PushBack(local_6c,local_2c);
      L2ParamStack::PushBack(local_6c,local_30);
      L2ParamStack::PushBack(local_6c,local_24);
      L2ParamStack::PushBack(local_6c,local_3c);
      L2ParamStack::PushBack(local_6c,local_40);
      L2ParamStack::PushBack(local_6c,local_44);
      L2ParamStack::PushBack(local_6c,(void *)(int)local_1c[0]);
      pvVar2 = (void *)(int)local_20[0];
      break;
    case (void *)0x2:
      uVar1 = thunk_FUN_104026b0(*(undefined4 *)(param_1 + 0x48),uVar1,&DAT_10885e60,&local_48,
                                 &local_4c,&local_15,&local_24);
      L2ParamStack::PushBack(local_6c,local_28);
      L2ParamStack::PushBack(local_6c,local_2c);
      L2ParamStack::PushBack(local_6c,local_48);
      L2ParamStack::PushBack(local_6c,local_4c);
      pvVar2 = (void *)(int)local_15;
      goto LAB_10414840;
    case (void *)0x3:
      uVar1 = thunk_FUN_104026b0(*(undefined4 *)(param_1 + 0x48),uVar1,&DAT_1087ff44,&local_50,
                                 &local_24);
      L2ParamStack::PushBack(local_6c,local_28);
      L2ParamStack::PushBack(local_6c,local_2c);
      L2ParamStack::PushBack(local_6c,local_50);
      pvVar2 = local_24;
      break;
    case (void *)0x4:
      uVar1 = thunk_FUN_104026b0(*(undefined4 *)(param_1 + 0x48),uVar1,&DAT_1087ff44,&local_54,
                                 &local_24);
      L2ParamStack::PushBack(local_6c,local_28);
      L2ParamStack::PushBack(local_6c,local_2c);
      L2ParamStack::PushBack(local_6c,local_54);
      pvVar2 = local_24;
      break;
    case (void *)0x5:
      uVar1 = thunk_FUN_104026b0(*(undefined4 *)(param_1 + 0x48),uVar1,&DAT_1087ff44,&local_30,
                                 &local_24);
      L2ParamStack::PushBack(local_6c,local_28);
      L2ParamStack::PushBack(local_6c,local_2c);
      pvVar2 = local_30;
LAB_10414840:
      L2ParamStack::PushBack(local_6c,pvVar2);
      pvVar2 = local_24;
      break;
    default:
      goto switchD_104146ab_default;
    }
    L2ParamStack::PushBack(local_6c,pvVar2);
switchD_104146ab_default:
    (**(code **)(*(int *)GL2Console + 0x2d4))(local_6c);
    local_8 = local_8 & 0xffffff00;
    L2ParamStack::~L2ParamStack(local_6c);
    local_34 = local_34 + 1;
  } while( true );
}


// ==== 10414a30 FUN_10414a30 depth=0 from=raiz callees=CORE.DLL::FOutputDevice::Logf@EXTERNAL:000000b4 thunk_FUN_104026b0@103034e5
// strings: 10885f68=(Receive) OnVehicleCheckLocation ID:%d x:%d y:%d z:%d yaw:%d | 

uint FUN_10414a30(int param_1,undefined4 param_2)

{
  uint extraout_EAX;
  undefined1 local_c [4];
  undefined1 local_8 [4];
  FOutputDevice *local_4;
  
  thunk_FUN_104026b0(*(undefined4 *)(param_1 + 0x48),param_2,&DAT_108810b0,&local_4,local_8,local_c,
                     &param_1);
  FOutputDevice::Logf(local_4,*(ushort **)GNetworkLog_exref);
  return extraout_EAX & 0xffffff00;
}


// ==== 10414cb0 FUN_10414cb0 depth=0 from=raiz callees=CORE.DLL::L2ParamStack::PushBack@EXTERNAL:00000136 CORE.DLL::L2ParamStack::~L2ParamStack@EXTERNAL:0000012a CORE.DLL::L2ParamStack::L2ParamStack@EXTERNAL:0000012b CORE.DLL::FOutputDevice::Logf@EXTERNAL:000000b4 thunk_FUN_104026b0@103034e5
// strings: 10886088=(Receive)EquipUpdatePacket | 

uint FUN_10414cb0(void *param_1,undefined4 param_2)

{
  uint extraout_EAX;
  void *local_24;
  void *local_20;
  L2ParamStack local_1c [16];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1080eff9;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  thunk_FUN_104026b0(*(undefined4 *)((int)param_1 + 0x48),param_2,&DAT_1087ff0c,&param_1,&local_24,
                     &local_20);
  L2ParamStack::L2ParamStack(local_1c,10);
  local_4 = 0;
  L2ParamStack::PushBack(local_1c,param_1);
  L2ParamStack::PushBack(local_1c,local_24);
  L2ParamStack::PushBack(local_1c,local_20);
  (**(code **)(**(int **)(DAT_10b1f538 + 0x54) + 0x448))(local_1c);
  FOutputDevice::Logf(*(FOutputDevice **)GNetworkLog_exref,
                      (ushort *)*(FOutputDevice **)GNetworkLog_exref);
  local_4 = 0xffffffff;
  L2ParamStack::~L2ParamStack(local_1c);
  ExceptionList = pvStack_c;
  return extraout_EAX & 0xffffff00;
}


// ==== 10414dc0 FUN_10414dc0 depth=0 from=raiz callees=CORE.DLL::L2ParamStack::PushBack@EXTERNAL:00000136 CORE.DLL::L2ParamStack::~L2ParamStack@EXTERNAL:0000012a CORE.DLL::L2ParamStack::L2ParamStack@EXTERNAL:0000012b CORE.DLL::FOutputDevice::Logf@EXTERNAL:000000b4 thunk_FUN_104026b0@103034e5
// strings: 1088612c=Sddddddd | 108860c8=(Receive)PledgeShowMemberListUpdatePacket | 

uint FUN_10414dc0(void *param_1,undefined4 param_2)

{
  uint extraout_EAX;
  void *local_64;
  void *local_60;
  void *local_5c;
  void *local_58;
  void *local_54;
  void *local_50;
  L2ParamStack local_4c [16];
  undefined1 local_3c [48];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1080f019;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  thunk_FUN_104026b0(*(undefined4 *)((int)param_1 + 0x48),param_2,"Sddddddd",0x30,local_3c,&param_1,
                     &local_64,&local_60,&local_5c,&local_58,&local_54,&local_50);
  L2ParamStack::L2ParamStack(local_4c,10);
  local_4 = 0;
  L2ParamStack::PushBack(local_4c,local_3c);
  L2ParamStack::PushBack(local_4c,param_1);
  L2ParamStack::PushBack(local_4c,local_64);
  L2ParamStack::PushBack(local_4c,local_60);
  L2ParamStack::PushBack(local_4c,local_5c);
  L2ParamStack::PushBack(local_4c,local_58);
  L2ParamStack::PushBack(local_4c,local_54);
  L2ParamStack::PushBack(local_4c,local_50);
  (**(code **)(**(int **)(DAT_10b1f538 + 0x54) + 0x34c))(local_4c);
  FOutputDevice::Logf(*(FOutputDevice **)GNetworkLog_exref,
                      (ushort *)*(FOutputDevice **)GNetworkLog_exref);
  local_4 = 0xffffffff;
  L2ParamStack::~L2ParamStack(local_4c);
  ExceptionList = pvStack_c;
  return extraout_EAX & 0xffffff00;
}


// ==== 10414f40 FUN_10414f40 depth=0 from=raiz callees=CORE.DLL::L2ParamStack::PushBack@EXTERNAL:00000136 CORE.DLL::L2ParamStack::~L2ParamStack@EXTERNAL:0000012a CORE.DLL::L2ParamStack::L2ParamStack@EXTERNAL:0000012b CORE.DLL::FOutputDevice::Logf@EXTERNAL:000000b4 thunk_FUN_104026b0@103034e5
// strings: 1088500c=Sdddddd | 10886138=(Receive)PledgeShowMemberListAddPacket | 

uint FUN_10414f40(void *param_1,undefined4 param_2)

{
  uint extraout_EAX;
  void *local_60;
  void *local_5c;
  void *local_58;
  void *local_54;
  void *local_50;
  L2ParamStack local_4c [16];
  undefined1 local_3c [48];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1080f039;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  thunk_FUN_104026b0(*(undefined4 *)((int)param_1 + 0x48),param_2,"Sdddddd",0x30,local_3c,&param_1,
                     &local_60,&local_5c,&local_58,&local_54,&local_50);
  L2ParamStack::L2ParamStack(local_4c,10);
  local_4 = 0;
  L2ParamStack::PushBack(local_4c,local_3c);
  L2ParamStack::PushBack(local_4c,param_1);
  L2ParamStack::PushBack(local_4c,local_60);
  L2ParamStack::PushBack(local_4c,local_5c);
  L2ParamStack::PushBack(local_4c,local_58);
  L2ParamStack::PushBack(local_4c,local_54);
  L2ParamStack::PushBack(local_4c,local_50);
  (**(code **)(**(int **)(DAT_10b1f538 + 0x54) + 0x344))(local_4c);
  FOutputDevice::Logf((FOutputDevice *)GNetworkLog_exref,*(ushort **)GNetworkLog_exref);
  local_4 = 0xffffffff;
  L2ParamStack::~L2ParamStack(local_4c);
  ExceptionList = pvStack_c;
  return extraout_EAX & 0xffffff00;
}


// ==== 10415110 FUN_10415110 depth=0 from=raiz callees=thunk_FUN_104026b0@103034e5 CORE.DLL::appStrcpy@EXTERNAL:0000012c
// strings: 

uint FUN_10415110(uint param_1,undefined4 param_2)

{
  int iVar1;
  ushort *puVar2;
  undefined1 local_60 [44];
  ushort auStack_34 [26];
  
  thunk_FUN_104026b0(*(undefined4 *)(param_1 + 0x48),param_2,&DAT_108861fc,&param_1,0x30,local_60,
                     0x30);
  if ((int)param_1 < 1) {
    return param_1 & 0xffffff00;
  }
  iVar1 = (**(code **)(*DAT_10b1f538 + 0xac))(param_1);
  if (iVar1 != 0) {
    appStrcpy((ushort *)(iVar1 + 4),(ushort *)&stack0xffffff9c);
    puVar2 = appStrcpy((ushort *)(iVar1 + 0x9c),auStack_34);
    return (uint)puVar2 & 0xffffff00;
  }
  return 0;
}


// ==== 104152b0 FUN_104152b0 depth=0 from=raiz callees=CORE.DLL::L2ParamStack::PushBack@EXTERNAL:00000136 CORE.DLL::L2ParamStack::~L2ParamStack@EXTERNAL:0000012a CORE.DLL::L2ParamStack::L2ParamStack@EXTERNAL:0000012b CORE.DLL::FOutputDevice::Logf@EXTERNAL:000000b4 thunk_FUN_104026b0@103034e5
// strings: 10886274=dSdddddddd | 10886218=(Receive)PartySmallWindowUpdatePacket | 

uint FUN_104152b0(void *param_1,undefined4 param_2)

{
  uint extraout_EAX;
  void *local_6c;
  void *local_68;
  void *local_64;
  void *local_60;
  void *local_5c;
  void *local_58;
  void *local_54;
  void *local_50;
  L2ParamStack local_4c [16];
  undefined1 local_3c [48];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1080f059;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  thunk_FUN_104026b0(*(undefined4 *)((int)param_1 + 0x48),param_2,"dSdddddddd",&param_1,0x30,
                     local_3c,&local_6c,&local_68,&local_64,&local_60,&local_5c,&local_58,&local_54,
                     &local_50);
  L2ParamStack::L2ParamStack(local_4c,10);
  local_4 = 0;
  L2ParamStack::PushBack(local_4c,param_1);
  L2ParamStack::PushBack(local_4c,local_3c);
  L2ParamStack::PushBack(local_4c,local_6c);
  L2ParamStack::PushBack(local_4c,local_68);
  L2ParamStack::PushBack(local_4c,local_64);
  L2ParamStack::PushBack(local_4c,local_60);
  L2ParamStack::PushBack(local_4c,local_5c);
  L2ParamStack::PushBack(local_4c,local_58);
  L2ParamStack::PushBack(local_4c,local_54);
  L2ParamStack::PushBack(local_4c,local_50);
  (**(code **)(**(int **)(DAT_10b1f538 + 0x54) + 0x450))(local_4c);
  FOutputDevice::Logf((FOutputDevice *)GNetworkLog_exref,*(ushort **)GNetworkLog_exref);
  local_4 = 0xffffffff;
  L2ParamStack::~L2ParamStack(local_4c);
  ExceptionList = pvStack_c;
  return extraout_EAX & 0xffffff00;
}


// ==== 104155f0 FUN_104155f0 depth=0 from=raiz callees=CORE.DLL::L2ParamStack::PushBack@EXTERNAL:00000136 CORE.DLL::L2ParamStack::~L2ParamStack@EXTERNAL:0000012a CORE.DLL::L2ParamStack::L2ParamStack@EXTERNAL:0000012b CORE.DLL::FOutputDevice::Logf@EXTERNAL:000000b4 thunk_FUN_104026b0@103034e5
// strings: 108862d8=(Receive)TradeRequestPacket  User ID : %d | 

uint FUN_104155f0(void *param_1,undefined4 param_2)

{
  uint extraout_EAX;
  FOutputDevice *unaff_retaddr;
  L2ParamStack local_1c [16];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1080f099;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  thunk_FUN_104026b0(*(undefined4 *)((int)param_1 + 0x48),param_2,&DAT_1087ff8c,&param_1);
  L2ParamStack::L2ParamStack(local_1c,10);
  local_4 = 0;
  L2ParamStack::PushBack(local_1c,param_1);
  (**(code **)(**(int **)(DAT_10b1f538 + 0x54) + 0x46c))(local_1c);
  FOutputDevice::Logf(unaff_retaddr,*(ushort **)GNetworkLog_exref);
  local_4 = 0xffffffff;
  L2ParamStack::~L2ParamStack(local_1c);
  ExceptionList = pvStack_c;
  return extraout_EAX & 0xffffff00;
}


// ==== 104156d0 FUN_104156d0 depth=0 from=raiz callees=CORE.DLL::L2ParamStack::PushBack@EXTERNAL:00000136 CORE.DLL::L2ParamStack::~L2ParamStack@EXTERNAL:0000012a FL2GameData::GetZoneName@1031509b CORE.DLL::L2ParamStack::L2ParamStack@EXTERNAL:0000012b CORE.DLL::FOutputDevice::Logf@EXTERNAL:000000b4 thunk_FUN_104026b0@103034e5 CORE.DLL::appStrcpy@EXTERNAL:0000012c
// strings: 

uint FUN_104156d0(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  ushort *puVar2;
  uint extraout_EAX;
  ushort local_674 [512];
  ushort local_274 [256];
  ushort *local_74;
  L2ParamStack local_6c [20];
  ushort *local_58;
  void *local_54 [2];
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  void *local_3c;
  void *local_38;
  L2ParamStack local_34 [16];
  short local_24;
  short local_20 [2];
  ushort *local_1c;
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  puStack_c = &LAB_1080f0c2;
  local_10 = ExceptionList;
  local_14 = &stack0xfffff980;
  local_8 = 0;
  ExceptionList = &local_10;
  uVar1 = thunk_FUN_104026b0(*(undefined4 *)(param_1 + 0x48),param_2,&DAT_1087ff8c,&local_38);
  uVar1 = thunk_FUN_104026b0(*(undefined4 *)(param_1 + 0x48),uVar1,&DAT_1087ff8c,&local_4c);
  FOutputDevice::Logf((FOutputDevice *)GNetworkLog_exref,*(ushort **)GNetworkLog_exref);
  local_18 = 0;
  do {
    if (local_4c <= local_18) {
      L2ParamStack::L2ParamStack(local_6c,10);
      local_8._0_1_ = 2;
      L2ParamStack::PushBack(local_6c,local_38);
      (**(code **)(*(int *)GL2Console + 0x354))(local_6c,0,0);
      local_8 = (uint)local_8._1_3_ << 8;
      L2ParamStack::~L2ParamStack(local_6c);
      ExceptionList = local_10;
      return extraout_EAX & 0xffffff00;
    }
    L2ParamStack::L2ParamStack(local_34,10);
    local_8 = CONCAT31(local_8._1_3_,1);
    uVar1 = thunk_FUN_104026b0(*(undefined4 *)(param_1 + 0x48),uVar1,&DAT_1087ff8c);
    L2ParamStack::PushBack(local_34,local_3c);
    switch(local_3c) {
    case (void *)0x0:
      uVar1 = thunk_FUN_104026b0(*(undefined4 *)(param_1 + 0x48),uVar1,&DAT_108847bc,0x400);
      puVar2 = local_674;
      break;
    case (void *)0x1:
    case (void *)0x2:
    case (void *)0x3:
    case (void *)0x5:
      uVar1 = thunk_FUN_104026b0(*(undefined4 *)(param_1 + 0x48),uVar1,&DAT_1087ff8c);
      puVar2 = local_1c;
      break;
    case (void *)0x4:
      uVar1 = thunk_FUN_104026b0(*(undefined4 *)(param_1 + 0x48),uVar1,&DAT_1087ff44,local_54);
      L2ParamStack::PushBack(local_34,local_54[0]);
      puVar2 = local_58;
      break;
    case (void *)0x6:
      uVar1 = thunk_FUN_104026b0(*(undefined4 *)(param_1 + 0x48),uVar1,&DAT_10886380);
      puVar2 = local_74;
      break;
    case (void *)0x7:
      uVar1 = thunk_FUN_104026b0(*(undefined4 *)(param_1 + 0x48),uVar1,&DAT_1087ff0c,&local_48,
                                 &local_44);
      puVar2 = FL2GameData::GetZoneName
                         (&GL2GameData,(float)local_48,(float)local_44,(float)local_40);
      appStrcpy(local_274,puVar2);
      puVar2 = local_274;
      break;
    case (void *)0x8:
      uVar1 = thunk_FUN_104026b0(*(undefined4 *)(param_1 + 0x48),uVar1,&DAT_10886384,&local_1c,
                                 local_20);
      L2ParamStack::PushBack(local_34,local_1c);
      L2ParamStack::PushBack(local_34,(void *)(int)local_20[0]);
      puVar2 = (ushort *)(int)local_24;
      break;
    default:
      goto switchD_1041579d_default;
    }
    L2ParamStack::PushBack(local_34,puVar2);
switchD_1041579d_default:
    (**(code **)(*(int *)GL2Console + 0x350))();
    local_8 = local_8 & 0xffffff00;
    L2ParamStack::~L2ParamStack(local_34);
    local_18 = local_18 + 1;
  } while( true );
}


// ==== 10415a70 FUN_10415a70 depth=0 from=raiz callees=CORE.DLL::L2ParamStack::PushBack@EXTERNAL:00000136 CORE.DLL::L2ParamStack::~L2ParamStack@EXTERNAL:0000012a CORE.DLL::L2ParamStack::L2ParamStack@EXTERNAL:0000012b CORE.DLL::FOutputDevice::Logf@EXTERNAL:000000b4 thunk_FUN_104026b0@103034e5
// strings: 108863f8=(Receive)SetupGaugePacket | 

uint FUN_10415a70(void *param_1,undefined4 param_2)

{
  uint extraout_EAX;
  void *local_24;
  void *local_20;
  L2ParamStack local_1c [16];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1080f0e9;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  thunk_FUN_104026b0(*(undefined4 *)((int)param_1 + 0x48),param_2,&DAT_1087ff0c,&param_1,&local_24,
                     &local_20);
  L2ParamStack::L2ParamStack(local_1c,10);
  local_4 = 0;
  L2ParamStack::PushBack(local_1c,param_1);
  L2ParamStack::PushBack(local_1c,local_24);
  L2ParamStack::PushBack(local_1c,local_20);
  (**(code **)(**(int **)(DAT_10b1f538 + 0x54) + 0x474))(local_1c);
  FOutputDevice::Logf(*(FOutputDevice **)GNetworkLog_exref,
                      (ushort *)*(FOutputDevice **)GNetworkLog_exref);
  local_4 = 0xffffffff;
  L2ParamStack::~L2ParamStack(local_1c);
  ExceptionList = pvStack_c;
  return extraout_EAX & 0xffffff00;
}


// ==== 10415e40 FUN_10415e40 depth=0 from=raiz callees=CORE.DLL::FOutputDevice::Logf@EXTERNAL:000000b4 thunk_FUN_104026b0@103034e5
// strings: 10886504=(Receive) ClientActionPacket | 

uint FUN_10415e40(int param_1,undefined4 param_2)

{
  uint extraout_EAX;
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1080f120;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffd4;
  local_8 = 0;
  local_18 = 0xffffffff;
  ExceptionList = &local_10;
  thunk_FUN_104026b0(*(undefined4 *)(param_1 + 0x48),param_2,&DAT_1087ff8c,&local_18);
  (**(code **)(**(int **)(DAT_10b1f538 + 0x54) + 0x484))(local_18);
  FOutputDevice::Logf(*(FOutputDevice **)GNetworkLog_exref,
                      (ushort *)*(FOutputDevice **)GNetworkLog_exref);
  ExceptionList = local_10;
  return extraout_EAX & 0xffffff00;
}


// ==== 10415f30 FUN_10415f30 depth=0 from=raiz callees=CORE.DLL::L2ParamStack::PushBack@EXTERNAL:00000136 CORE.DLL::L2ParamStack::~L2ParamStack@EXTERNAL:0000012a CORE.DLL::L2ParamStack::L2ParamStack@EXTERNAL:0000012b CORE.DLL::FOutputDevice::Logf@EXTERNAL:000000b4 thunk_FUN_104026b0@103034e5
// strings: 10883d84=ddddd | 10886588=(Receive)AcquireSkillListPacket | 

uint FUN_10415f30(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  uint extraout_EAX;
  L2ParamStack local_5c [16];
  L2ParamStack local_4c [24];
  void *local_34;
  void *local_30;
  void *local_2c;
  void *local_28;
  void *local_24;
  int local_20;
  int local_1c;
  void *local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  puStack_c = &LAB_1080f142;
  local_10 = ExceptionList;
  local_14 = &stack0xffffff98;
  local_8 = 0;
  local_18 = (void *)0x0;
  local_20 = 0;
  ExceptionList = &local_10;
  uVar1 = thunk_FUN_104026b0(*(undefined4 *)(param_1 + 0x48),param_2,&DAT_1087ff44,&local_18,
                             &local_20);
  L2ParamStack::L2ParamStack(local_5c,10);
  local_8 = CONCAT31(local_8._1_3_,1);
  L2ParamStack::PushBack(local_5c,local_18);
  (**(code **)(**(int **)(DAT_10b1f538 + 0x54) + 0x488))(local_5c);
  for (local_1c = 0; local_1c < local_20; local_1c = local_1c + 1) {
    local_30 = (void *)0xffffffff;
    local_2c = (void *)0xffffffff;
    local_28 = (void *)0xffffffff;
    local_24 = (void *)0xffffffff;
    local_34 = (void *)0x0;
    uVar1 = thunk_FUN_104026b0(*(undefined4 *)(param_1 + 0x48),uVar1,"ddddd",&local_24,&local_28,
                               &local_2c,&local_30,&local_34);
    L2ParamStack::L2ParamStack(local_4c,10);
    local_8._0_1_ = 2;
    L2ParamStack::PushBack(local_4c,(void *)0x0);
    L2ParamStack::PushBack(local_4c,local_24);
    L2ParamStack::PushBack(local_4c,local_28);
    L2ParamStack::PushBack(local_4c,local_2c);
    L2ParamStack::PushBack(local_4c,local_30);
    L2ParamStack::PushBack(local_4c,local_34);
    L2ParamStack::PushBack(local_4c,local_18);
    (**(code **)(**(int **)(DAT_10b1f538 + 0x54) + 0x490))(local_4c);
    local_8 = CONCAT31(local_8._1_3_,1);
    L2ParamStack::~L2ParamStack(local_4c);
  }
  FOutputDevice::Logf((FOutputDevice *)GNetworkLog_exref,*(ushort **)GNetworkLog_exref);
  local_8 = local_8 & 0xffffff00;
  L2ParamStack::~L2ParamStack(local_5c);
  ExceptionList = local_10;
  return extraout_EAX & 0xffffff00;
}


// ==== 10416160 FUN_10416160 depth=0 from=raiz callees=CORE.DLL::L2ParamStack::PushBack@EXTERNAL:00000136 CORE.DLL::L2ParamStack::~L2ParamStack@EXTERNAL:0000012a CORE.DLL::L2ParamStack::L2ParamStack@EXTERNAL:0000012b CORE.DLL::FOutputDevice::Logf@EXTERNAL:000000b4 thunk_FUN_104026b0@103034e5
// strings: 10886610=(Receive)AcquireSkillInfoPacket | 

uint FUN_10416160(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  uint extraout_EAX;
  L2ParamStack local_64 [16];
  L2ParamStack local_54 [24];
  void *local_3c;
  void *local_38;
  void *local_34;
  void *local_30;
  void *local_2c;
  int local_28;
  void *local_24;
  void *local_20;
  void *local_1c;
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  puStack_c = &LAB_1080f172;
  local_10 = ExceptionList;
  local_14 = &stack0xffffff90;
  local_8 = 0;
  local_24 = (void *)0xffffffff;
  local_20 = (void *)0xffffffff;
  local_1c = (void *)0xffffffff;
  ExceptionList = &local_10;
  uVar1 = thunk_FUN_104026b0(*(undefined4 *)(param_1 + 0x48),param_2,&DAT_108810b0,&local_1c,
                             &local_20,&local_24,&local_3c);
  L2ParamStack::L2ParamStack(local_54,10);
  local_8 = CONCAT31(local_8._1_3_,1);
  L2ParamStack::PushBack(local_54,(void *)0x0);
  L2ParamStack::PushBack(local_54,local_1c);
  L2ParamStack::PushBack(local_54,local_20);
  L2ParamStack::PushBack(local_54,local_24);
  L2ParamStack::PushBack(local_54,local_3c);
  local_28 = 0;
  uVar1 = thunk_FUN_104026b0(*(undefined4 *)(param_1 + 0x48),uVar1,&DAT_1087ff8c,&local_28);
  (**(code **)(**(int **)(DAT_10b1f538 + 0x54) + 0x48c))(local_54);
  for (local_18 = 0; local_18 < local_28; local_18 = local_18 + 1) {
    local_2c = (void *)0xffffffff;
    local_30 = (void *)0xffffffff;
    local_34 = (void *)0x0;
    local_38 = (void *)0x0;
    uVar1 = thunk_FUN_104026b0(*(undefined4 *)(param_1 + 0x48),uVar1,&DAT_108810b0,&local_2c,
                               &local_30,&local_34,&local_38);
    L2ParamStack::L2ParamStack(local_64,10);
    local_8._0_1_ = 2;
    L2ParamStack::PushBack(local_64,local_2c);
    L2ParamStack::PushBack(local_64,local_30);
    L2ParamStack::PushBack(local_64,local_34);
    L2ParamStack::PushBack(local_64,local_38);
    (**(code **)(**(int **)(DAT_10b1f538 + 0x54) + 0x494))(local_64);
    local_8 = CONCAT31(local_8._1_3_,1);
    L2ParamStack::~L2ParamStack(local_64);
  }
  FOutputDevice::Logf(*(FOutputDevice **)GNetworkLog_exref,
                      (ushort *)*(FOutputDevice **)GNetworkLog_exref);
  local_8 = local_8 & 0xffffff00;
  L2ParamStack::~L2ParamStack(local_54);
  ExceptionList = local_10;
  return extraout_EAX & 0xffffff00;
}


// ==== 104164b0 FUN_104164b0 depth=0 from=raiz callees=CORE.DLL::L2ParamStack::PushBack@EXTERNAL:00000136 CORE.DLL::L2ParamStack::~L2ParamStack@EXTERNAL:0000012a CORE.DLL::L2ParamStack::L2ParamStack@EXTERNAL:0000012b CORE.DLL::FOutputDevice::Logf@EXTERNAL:000000b4 thunk_FUN_104026b0@103034e5
// strings: 10886770=ddddhhhdd | 10886760=ddddhhhddd | 108866d8=(Receive)PrivateSellList SellListNum1:%d SellListNum2:%d | 

uint FUN_104164b0(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  uint extraout_EAX;
  int unaff_EBX;
  int iVar2;
  int iVar3;
  int local_a8 [2];
  void *local_a0;
  void *local_9c;
  void *local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined2 uStack_7c;
  undefined2 uStack_7a;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined2 auStack_5c [2];
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined2 uStack_40;
  undefined2 uStack_3e;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  L2ParamStack local_1c [16];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1080f199;
  pvStack_c = ExceptionList;
  iVar3 = 0;
  local_98 = (void *)0x0;
  local_9c = (void *)0x0;
  local_a8[0] = 0;
  local_a8[1] = 0;
  local_a0 = (void *)0x0;
  ExceptionList = &pvStack_c;
  uVar1 = thunk_FUN_104026b0(*(undefined4 *)(param_1 + 0x48),param_2,&DAT_108810b0,&local_98,
                             &local_a0,&local_9c,local_a8);
  L2ParamStack::L2ParamStack(local_1c,10);
  local_4 = 0;
  L2ParamStack::PushBack(local_1c,local_98);
  L2ParamStack::PushBack(local_1c,local_a0);
  L2ParamStack::PushBack(local_1c,local_9c);
  (**(code **)(**(int **)(DAT_10b1f538 + 0x54) + 0x5d0))(local_1c);
  local_98 = (void *)CONCAT22(local_98._2_2_,0xffff);
  uStack_94 = 0;
  uStack_8c = 0;
  uStack_88 = 0;
  uStack_84 = 0;
  uStack_80 = 0;
  uStack_78 = 0;
  uStack_7c = 0;
  uStack_7a = 0;
  uStack_74 = 0;
  uStack_70 = 0;
  uStack_6c = 0xffffffff;
  uStack_68 = 0;
  uStack_64 = 0;
  uStack_60 = 0xffffffff;
  auStack_5c[0] = 0xffff;
  uStack_58 = 0;
  uStack_50 = 0;
  uStack_4c = 0;
  uStack_48 = 0;
  uStack_44 = 0;
  uStack_3c = 0;
  uStack_40 = 0;
  uStack_3e = 0;
  uStack_38 = 0;
  uStack_34 = 0;
  uStack_30 = 0xffffffff;
  uStack_2c = 0;
  iVar2 = 0;
  uStack_28 = 0;
  uStack_24 = 0xffffffff;
  uStack_90 = 0xffffffff;
  uStack_54 = 0xffffffff;
  if (0 < unaff_EBX) {
    do {
      uVar1 = thunk_FUN_104026b0(*(undefined4 *)(param_1 + 0x48),uVar1,"ddddhhhdd",&local_98,
                                 &uStack_94,&uStack_90,&uStack_8c,&uStack_7c,&uStack_78,&uStack_74,
                                 &uStack_80,&uStack_70);
      (**(code **)(**(int **)(DAT_10b1f538 + 0x54) + 0x5d8))(&local_98,auStack_5c);
      iVar2 = iVar2 + 1;
    } while (iVar2 < unaff_EBX);
  }
  if (unaff_EBX == 0) {
    (**(code **)(**(int **)(DAT_10b1f538 + 0x54) + 0x5d8))(&local_98,auStack_5c);
  }
  uStack_90 = 0xffffffff;
  uVar1 = thunk_FUN_104026b0(*(undefined4 *)(param_1 + 0x48),uVar1,&DAT_1087ff8c,local_a8);
  if (0 < local_a8[0]) {
    do {
      uVar1 = thunk_FUN_104026b0(*(undefined4 *)(param_1 + 0x48),uVar1,"ddddhhhddd",auStack_5c,
                                 &uStack_58,&uStack_54,&uStack_50,&uStack_40,&uStack_3c,&uStack_38,
                                 &uStack_44,&uStack_4c,&uStack_34);
      (**(code **)(**(int **)(DAT_10b1f538 + 0x54) + 0x5d8))(&local_98,auStack_5c);
      iVar3 = iVar3 + 1;
    } while (iVar3 < local_a8[0]);
  }
  FOutputDevice::Logf((FOutputDevice *)GNetworkLog_exref,*(ushort **)GNetworkLog_exref);
  local_4 = 0xffffffff;
  L2ParamStack::~L2ParamStack(local_1c);
  ExceptionList = pvStack_c;
  return extraout_EAX & 0xffffff00;
}


// ==== 10416880 FUN_10416880 depth=0 from=raiz callees=CORE.DLL::L2ParamStack::PushBack@EXTERNAL:00000136 CORE.DLL::L2ParamStack::~L2ParamStack@EXTERNAL:0000012a CORE.DLL::L2ParamStack::L2ParamStack@EXTERNAL:0000012b CORE.DLL::FOutputDevice::Logf@EXTERNAL:000000b4 thunk_FUN_104026b0@103034e5
// strings: 10886760=ddddhhhddd | 10886780=(Receive)PrivateBuyList BuyListNum1:%d | 

uint FUN_10416880(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  uint extraout_EAX;
  int unaff_EBX;
  int iVar2;
  undefined4 local_68;
  void *local_64;
  void *local_60;
  void *local_5c;
  L2ParamStack local_58 [12];
  undefined2 auStack_4c [2];
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined2 uStack_30;
  undefined2 uStack_2e;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1080f1b9;
  pvStack_c = ExceptionList;
  iVar2 = 0;
  local_64 = (void *)0x0;
  local_60 = (void *)0x0;
  local_5c = (void *)0x0;
  local_68 = 0;
  ExceptionList = &pvStack_c;
  uVar1 = thunk_FUN_104026b0(*(undefined4 *)(param_1 + 0x48),param_2,&DAT_108810b0,&local_64,
                             &local_60,&local_5c,&local_68);
  L2ParamStack::L2ParamStack(local_58,10);
  local_4 = 0;
  L2ParamStack::PushBack(local_58,local_64);
  L2ParamStack::PushBack(local_58,local_60);
  L2ParamStack::PushBack(local_58,local_5c);
  (**(code **)(**(int **)(DAT_10b1f538 + 0x54) + 0x5d4))(local_58);
  auStack_4c[0] = 0xffff;
  uStack_48 = 0;
  uStack_44 = 0;
  uStack_40 = 0;
  uStack_3c = 0;
  uStack_38 = 0;
  uStack_34 = 0;
  uStack_2c = 0;
  uStack_30 = 0;
  uStack_2e = 0;
  uStack_28 = 0;
  uStack_24 = 0;
  uStack_20 = 0xffffffff;
  uStack_1c = 0;
  uStack_18 = 0;
  uStack_14 = 0xffffffff;
  if (0 < unaff_EBX) {
    do {
      uVar1 = thunk_FUN_104026b0(*(undefined4 *)(param_1 + 0x48),uVar1,"ddddhhhddd",auStack_4c,
                                 &uStack_48,&uStack_44,&uStack_40,&uStack_30,&uStack_2c,&uStack_28,
                                 &uStack_34,&uStack_3c,&uStack_24);
      (**(code **)(**(int **)(DAT_10b1f538 + 0x54) + 0x5dc))(auStack_4c);
      iVar2 = iVar2 + 1;
    } while (iVar2 < unaff_EBX);
  }
  FOutputDevice::Logf((FOutputDevice *)GNetworkLog_exref,*(ushort **)GNetworkLog_exref);
  local_4 = 0xffffffff;
  L2ParamStack::~L2ParamStack(local_58);
  ExceptionList = pvStack_c;
  return extraout_EAX & 0xffffff00;
}


// ==== 10416a90 FUN_10416a90 depth=0 from=raiz callees=CORE.DLL::L2ParamStack::PushBack@EXTERNAL:00000136 CORE.DLL::L2ParamStack::~L2ParamStack@EXTERNAL:0000012a CORE.DLL::L2ParamStack::L2ParamStack@EXTERNAL:0000012b CORE.DLL::FOutputDevice::Logf@EXTERNAL:000000b4 thunk_FUN_104026b0@103034e5
// strings: 108867ec=dhddhdh | 108867e0=dhddhdhdd | 108866d8=(Receive)PrivateSellList SellListNum1:%d SellListNum2:%d | 

uint FUN_10416a90(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  uint extraout_EAX;
  int unaff_EBX;
  int iVar2;
  int iVar3;
  int local_a4 [2];
  void *local_9c;
  void *local_98;
  undefined2 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined2 local_78;
  undefined2 local_76;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined2 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined2 local_3c;
  undefined2 local_3a;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  L2ParamStack local_1c [16];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1080f1d9;
  pvStack_c = ExceptionList;
  iVar3 = 0;
  local_98 = (void *)0x0;
  local_9c = (void *)0x0;
  local_a4[0] = 0;
  local_a4[1] = 0;
  ExceptionList = &pvStack_c;
  uVar1 = thunk_FUN_104026b0(*(undefined4 *)(param_1 + 0x48),param_2,&DAT_1087ff0c,&local_98,
                             &local_9c,local_a4);
  local_58 = 0xffff;
  local_54 = 0;
  local_4c = 0;
  local_48 = 0;
  local_44 = 0;
  local_40 = 0;
  local_38 = 0;
  local_3c = 0;
  local_3a = 0;
  local_34 = 0;
  local_30 = 0;
  local_2c = 0xffffffff;
  local_28 = 0;
  local_24 = 0;
  local_20 = 0xffffffff;
  local_94 = 0xffff;
  local_90 = 0;
  local_88 = 0;
  local_84 = 0;
  local_80 = 0;
  local_7c = 0;
  local_74 = 0;
  local_78 = 0;
  local_76 = 0;
  local_70 = 0;
  local_6c = 0;
  local_68 = 0xffffffff;
  local_64 = 0;
  local_60 = 0;
  local_5c = 0xffffffff;
  local_50 = 0xffffffff;
  local_8c = 0xffffffff;
  L2ParamStack::L2ParamStack(local_1c,10);
  local_4 = 0;
  L2ParamStack::PushBack(local_1c,local_98);
  L2ParamStack::PushBack(local_1c,local_9c);
  (**(code **)(**(int **)(DAT_10b1f538 + 0x54) + 0x5e0))(local_1c);
  iVar2 = 0;
  if (0 < unaff_EBX) {
    do {
      uVar1 = thunk_FUN_104026b0(*(undefined4 *)(param_1 + 0x48),uVar1,"dhddhdh",&local_54,&local_3c
                                 ,&local_50,&local_34,&local_38,&local_44,&local_5c);
      (**(code **)(**(int **)(DAT_10b1f538 + 0x54) + 0x5e8))(&local_5c,&local_98);
      iVar2 = iVar2 + 1;
    } while (iVar2 < unaff_EBX);
  }
  if (unaff_EBX == 0) {
    (**(code **)(**(int **)(DAT_10b1f538 + 0x54) + 0x5e8))(&local_5c,&local_98);
  }
  local_54 = 0xffffffff;
  uVar1 = thunk_FUN_104026b0(*(undefined4 *)(param_1 + 0x48),uVar1,&DAT_1087ff8c,local_a4);
  if (0 < local_a4[0]) {
    do {
      uVar1 = thunk_FUN_104026b0(*(undefined4 *)(param_1 + 0x48),uVar1,"dhddhdhdd",&local_90,
                                 &local_78,&local_8c,&local_70,&local_74,&local_80,&local_98,
                                 &local_88,&local_6c);
      (**(code **)(**(int **)(DAT_10b1f538 + 0x54) + 0x5e8))(&local_5c,&local_98);
      iVar3 = iVar3 + 1;
    } while (iVar3 < local_a4[0]);
  }
  FOutputDevice::Logf((FOutputDevice *)GNetworkLog_exref,*(ushort **)GNetworkLog_exref);
  local_4 = 0xffffffff;
  L2ParamStack::~L2ParamStack(local_1c);
  ExceptionList = pvStack_c;
  return extraout_EAX & 0xffffff00;
}


// ==== 10416e10 FUN_10416e10 depth=0 from=raiz callees=CORE.DLL::L2ParamStack::PushBack@EXTERNAL:00000136 CORE.DLL::L2ParamStack::~L2ParamStack@EXTERNAL:0000012a CORE.DLL::L2ParamStack::L2ParamStack@EXTERNAL:0000012b CORE.DLL::FOutputDevice::Logf@EXTERNAL:000000b4 thunk_FUN_104026b0@103034e5
// strings: 108867f8=ddhddhdhdd | 10886780=(Receive)PrivateBuyList BuyListNum1:%d | 

uint FUN_10416e10(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  uint extraout_EAX;
  int unaff_EBX;
  int iVar2;
  undefined4 local_64;
  void *local_60;
  void *local_5c;
  L2ParamStack local_58 [12];
  undefined1 auStack_4c [4];
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
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1080f1f9;
  pvStack_c = ExceptionList;
  iVar2 = 0;
  local_60 = (void *)0x0;
  local_5c = (void *)0x0;
  local_64 = 0;
  ExceptionList = &pvStack_c;
  uVar1 = thunk_FUN_104026b0(*(undefined4 *)(param_1 + 0x48),param_2,&DAT_1087ff0c,&local_60,
                             &local_5c,&local_64);
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
  L2ParamStack::L2ParamStack(local_58,10);
  local_4 = 0;
  L2ParamStack::PushBack(local_58,local_60);
  L2ParamStack::PushBack(local_58,local_5c);
  (**(code **)(**(int **)(DAT_10b1f538 + 0x54) + 0x5e4))(local_58);
  if (0 < unaff_EBX) {
    do {
      uVar1 = thunk_FUN_104026b0(*(undefined4 *)(param_1 + 0x48),uVar1,"ddhddhdhdd",local_48,
                                 &local_44,&local_2c,&local_40,&local_24,&local_28,&local_34,
                                 auStack_4c,&local_3c,&local_20);
      (**(code **)(**(int **)(DAT_10b1f538 + 0x54) + 0x5ec))(auStack_4c);
      iVar2 = iVar2 + 1;
    } while (iVar2 < unaff_EBX);
  }
  FOutputDevice::Logf((FOutputDevice *)GNetworkLog_exref,*(ushort **)GNetworkLog_exref);
  local_4 = 0xffffffff;
  L2ParamStack::~L2ParamStack(local_58);
  ExceptionList = pvStack_c;
  return extraout_EAX & 0xffffff00;
}


// ==== 10417010 FUN_10417010 depth=0 from=raiz callees=CORE.DLL::L2ParamStack::PushBack@EXTERNAL:00000136 CORE.DLL::L2ParamStack::~L2ParamStack@EXTERNAL:0000012a CORE.DLL::L2ParamStack::L2ParamStack@EXTERNAL:0000012b CORE.DLL::FOutputDevice::Logf@EXTERNAL:000000b4 thunk_FUN_104026b0@103034e5
// strings: 10886808=(Receive) AskJoinAlliancePacket | 

uint FUN_10417010(int param_1,undefined4 param_2)

{
  uint extraout_EAX;
  void *local_b0;
  L2ParamStack local_ac [16];
  undefined1 local_9c [48];
  undefined1 local_6c [48];
  undefined1 local_3c [48];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1080f21c;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  thunk_FUN_104026b0(*(undefined4 *)(param_1 + 0x48),param_2,&DAT_10886854,&local_b0,0x30,local_9c,
                     0x30,local_6c,0x30,local_3c);
  L2ParamStack::L2ParamStack(local_ac,10);
  local_4 = 0;
  L2ParamStack::PushBack(local_ac,local_b0);
  L2ParamStack::PushBack(local_ac,local_9c);
  L2ParamStack::PushBack(local_ac,local_6c);
  L2ParamStack::PushBack(local_ac,local_3c);
  (**(code **)(**(int **)(DAT_10b1f538 + 0x54) + 0x3d0))(local_ac);
  FOutputDevice::Logf((FOutputDevice *)GNetworkLog_exref,*(ushort **)GNetworkLog_exref);
  local_4 = 0xffffffff;
  L2ParamStack::~L2ParamStack(local_ac);
  ExceptionList = pvStack_c;
  return extraout_EAX & 0xffffff00;
}


// ==== 10417150 FUN_10417150 depth=0 from=raiz callees=CORE.DLL::L2ParamStack::PushBack@EXTERNAL:00000136 CORE.DLL::L2ParamStack::~L2ParamStack@EXTERNAL:0000012a CORE.DLL::L2ParamStack::L2ParamStack@EXTERNAL:0000012b CORE.DLL::FOutputDevice::Logf@EXTERNAL:000000b4 thunk_FUN_104026b0@103034e5
// strings: 1088685c=(Receive) JoinAlliancePacket | 

uint FUN_10417150(void *param_1,undefined4 param_2)

{
  uint extraout_EAX;
  L2ParamStack local_1c [16];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1080f239;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  thunk_FUN_104026b0(*(undefined4 *)((int)param_1 + 0x48),param_2,&DAT_1087ff8c,&param_1);
  L2ParamStack::L2ParamStack(local_1c,10);
  local_4 = 0;
  L2ParamStack::PushBack(local_1c,param_1);
  (**(code **)(**(int **)(DAT_10b1f538 + 0x54) + 0x3d8))(local_1c);
  FOutputDevice::Logf((FOutputDevice *)GNetworkLog_exref,*(ushort **)GNetworkLog_exref);
  local_4 = 0xffffffff;
  L2ParamStack::~L2ParamStack(local_1c);
  ExceptionList = pvStack_c;
  return extraout_EAX & 0xffffff00;
}


// ==== 10417230 FUN_10417230 depth=0 from=raiz callees=CORE.DLL::L2ParamStack::PushBack@EXTERNAL:00000136 CORE.DLL::L2ParamStack::~L2ParamStack@EXTERNAL:0000012a CORE.DLL::L2ParamStack::L2ParamStack@EXTERNAL:0000012b CORE.DLL::FOutputDevice::Logf@EXTERNAL:000000b4 thunk_FUN_104026b0@103034e5
// strings: 108868a8=(Receive) WithdrawAlliancePacket | 

uint FUN_10417230(void *param_1,undefined4 param_2)

{
  uint extraout_EAX;
  L2ParamStack local_1c [16];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1080f259;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  thunk_FUN_104026b0(*(undefined4 *)((int)param_1 + 0x48),param_2,&DAT_1087ff8c,&param_1);
  L2ParamStack::L2ParamStack(local_1c,10);
  local_4 = 0;
  L2ParamStack::PushBack(local_1c,param_1);
  (**(code **)(**(int **)(DAT_10b1f538 + 0x54) + 0x3e0))(local_1c);
  FOutputDevice::Logf((FOutputDevice *)GNetworkLog_exref,*(ushort **)GNetworkLog_exref);
  local_4 = 0xffffffff;
  L2ParamStack::~L2ParamStack(local_1c);
  ExceptionList = pvStack_c;
  return extraout_EAX & 0xffffff00;
}


// ==== 10417310 FUN_10417310 depth=0 from=raiz callees=CORE.DLL::L2ParamStack::PushBack@EXTERNAL:00000136 CORE.DLL::L2ParamStack::~L2ParamStack@EXTERNAL:0000012a CORE.DLL::L2ParamStack::L2ParamStack@EXTERNAL:0000012b CORE.DLL::FOutputDevice::Logf@EXTERNAL:000000b4 thunk_FUN_104026b0@103034e5
// strings: 108868f8=(Receive) OustAllianceMemberPledgePacket | 

uint FUN_10417310(void *param_1,undefined4 param_2)

{
  uint extraout_EAX;
  L2ParamStack local_1c [16];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1080f279;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  thunk_FUN_104026b0(*(undefined4 *)((int)param_1 + 0x48),param_2,&DAT_1087ff8c,&param_1);
  L2ParamStack::L2ParamStack(local_1c,10);
  local_4 = 0;
  L2ParamStack::PushBack(local_1c,param_1);
  (**(code **)(**(int **)(DAT_10b1f538 + 0x54) + 0x3dc))(local_1c);
  FOutputDevice::Logf((FOutputDevice *)GNetworkLog_exref,*(ushort **)GNetworkLog_exref);
  local_4 = 0xffffffff;
  L2ParamStack::~L2ParamStack(local_1c);
  ExceptionList = pvStack_c;
  return extraout_EAX & 0xffffff00;
}


// ==== 104173f0 FUN_104173f0 depth=0 from=raiz callees=CORE.DLL::L2ParamStack::PushBack@EXTERNAL:00000136 CORE.DLL::L2ParamStack::~L2ParamStack@EXTERNAL:0000012a CORE.DLL::L2ParamStack::L2ParamStack@EXTERNAL:0000012b CORE.DLL::FOutputDevice::Logf@EXTERNAL:000000b4 thunk_FUN_104026b0@103034e5
// strings: 10886960=(Receive) DismissAlliancePacket | 

uint FUN_104173f0(void *param_1,undefined4 param_2)

{
  uint extraout_EAX;
  L2ParamStack local_1c [16];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1080f299;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  thunk_FUN_104026b0(*(undefined4 *)((int)param_1 + 0x48),param_2,&DAT_1087ff8c,&param_1);
  L2ParamStack::L2ParamStack(local_1c,10);
  local_4 = 0;
  L2ParamStack::PushBack(local_1c,param_1);
  (**(code **)(**(int **)(DAT_10b1f538 + 0x54) + 0x3d4))(local_1c);
  FOutputDevice::Logf((FOutputDevice *)GNetworkLog_exref,*(ushort **)GNetworkLog_exref);
  local_4 = 0xffffffff;
  L2ParamStack::~L2ParamStack(local_1c);
  ExceptionList = pvStack_c;
  return extraout_EAX & 0xffffff00;
}


// ==== 10417620 FUN_10417620 depth=0 from=raiz callees=CORE.DLL::L2ParamStack::PushBack@EXTERNAL:00000136 CORE.DLL::L2ParamStack::~L2ParamStack@EXTERNAL:0000012a CORE.DLL::L2ParamStack::L2ParamStack@EXTERNAL:0000012b CORE.DLL::FOutputDevice::Logf@EXTERNAL:000000b4 thunk_FUN_104026b0@103034e5
// strings: 108869b0=(Receive) FriendAddRequestResult | 

uint FUN_10417620(void *param_1,undefined4 param_2)

{
  uint extraout_EAX;
  L2ParamStack local_1c [16];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1080f2b9;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  thunk_FUN_104026b0(*(undefined4 *)((int)param_1 + 0x48),param_2,&DAT_1087ff8c,&param_1);
  L2ParamStack::L2ParamStack(local_1c,10);
  local_4 = 0;
  L2ParamStack::PushBack(local_1c,param_1);
  (**(code **)(**(int **)(DAT_10b1f538 + 0x54) + 0x3e4))(local_1c);
  FOutputDevice::Logf((FOutputDevice *)GNetworkLog_exref,*(ushort **)GNetworkLog_exref);
  local_4 = 0xffffffff;
  L2ParamStack::~L2ParamStack(local_1c);
  ExceptionList = pvStack_c;
  return extraout_EAX & 0xffffff00;
}


// ==== 10417700 FUN_10417700 depth=0 from=raiz callees=CORE.DLL::L2ParamStack::PushBack@EXTERNAL:00000136 CORE.DLL::L2ParamStack::~L2ParamStack@EXTERNAL:0000012a CORE.DLL::L2ParamStack::L2ParamStack@EXTERNAL:0000012b CORE.DLL::FOutputDevice::Logf@EXTERNAL:000000b4 thunk_FUN_104026b0@103034e5
// strings: 108869b0=(Receive) FriendAddRequestResult | 

uint FUN_10417700(int param_1,undefined4 param_2)

{
  uint extraout_EAX;
  L2ParamStack local_4c [16];
  undefined1 local_3c [48];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1080f2d9;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  thunk_FUN_104026b0(*(undefined4 *)(param_1 + 0x48),param_2,&DAT_108847bc,0x30,local_3c);
  L2ParamStack::L2ParamStack(local_4c,10);
  local_4 = 0;
  L2ParamStack::PushBack(local_4c,local_3c);
  (**(code **)(**(int **)(DAT_10b1f538 + 0x54) + 1000))(local_4c);
  FOutputDevice::Logf((FOutputDevice *)GNetworkLog_exref,*(ushort **)GNetworkLog_exref);
  local_4 = 0xffffffff;
  L2ParamStack::~L2ParamStack(local_4c);
  ExceptionList = pvStack_c;
  return extraout_EAX & 0xffffff00;
}


// ==== 104177e0 FUN_104177e0 depth=0 from=raiz callees=CORE.DLL::L2ParamStack::PushBack@EXTERNAL:00000136 CORE.DLL::L2ParamStack::~L2ParamStack@EXTERNAL:0000012a CORE.DLL::L2ParamStack::L2ParamStack@EXTERNAL:0000012b CORE.DLL::FOutputDevice::Logf@EXTERNAL:000000b4 thunk_FUN_104026b0@103034e5
// strings: 10886a00=(Receive) VehicleStartPacket | 

uint FUN_104177e0(void *param_1,undefined4 param_2)

{
  uint extraout_EAX;
  undefined1 local_20 [4];
  L2ParamStack local_1c [16];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1080f2f9;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  thunk_FUN_104026b0(*(undefined4 *)((int)param_1 + 0x48),param_2,&DAT_1087ff44,local_20,&param_1);
  L2ParamStack::L2ParamStack(local_1c,10);
  local_4 = 0;
  L2ParamStack::PushBack(local_1c,param_1);
  (**(code **)(**(int **)(DAT_10b1f538 + 0x54) + 0x694))(local_1c);
  FOutputDevice::Logf(*(FOutputDevice **)GNetworkLog_exref,
                      (ushort *)*(FOutputDevice **)GNetworkLog_exref);
  local_4 = 0xffffffff;
  L2ParamStack::~L2ParamStack(local_1c);
  ExceptionList = pvStack_c;
  return extraout_EAX & 0xffffff00;
}


// ==== 104178c0 FUN_104178c0 depth=0 from=raiz callees=CORE.DLL::L2ParamStack::PushBack@EXTERNAL:00000136 CORE.DLL::L2ParamStack::~L2ParamStack@EXTERNAL:0000012a CORE.DLL::L2ParamStack::L2ParamStack@EXTERNAL:0000012b CORE.DLL::FOutputDevice::Logf@EXTERNAL:000000b4 thunk_FUN_104026b0@103034e5
// strings: 10886a48=(Receive) RequestTimeCheckPacket | 

uint FUN_104178c0(void *param_1,undefined4 param_2)

{
  uint extraout_EAX;
  L2ParamStack local_1c [16];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1080f319;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  thunk_FUN_104026b0(*(undefined4 *)((int)param_1 + 0x48),param_2,&DAT_1087ff8c,&param_1);
  L2ParamStack::L2ParamStack(local_1c,10);
  local_4 = 0;
  L2ParamStack::PushBack(local_1c,param_1);
  (**(code **)(**(int **)(DAT_10b1f538 + 0x54) + 0x698))(local_1c);
  FOutputDevice::Logf((FOutputDevice *)GNetworkLog_exref,*(ushort **)GNetworkLog_exref);
  local_4 = 0xffffffff;
  L2ParamStack::~L2ParamStack(local_1c);
  ExceptionList = pvStack_c;
  return extraout_EAX & 0xffffff00;
}


// ==== 104179a0 FUN_104179a0 depth=0 from=raiz callees=CORE.DLL::L2ParamStack::PushBack@EXTERNAL:00000136 CORE.DLL::L2ParamStack::~L2ParamStack@EXTERNAL:0000012a CORE.DLL::L2ParamStack::L2ParamStack@EXTERNAL:0000012b CORE.DLL::FOutputDevice::Logf@EXTERNAL:000000b4 thunk_FUN_104026b0@103034e5
// strings: 10886a98=(Receive) SkillCoolTimePacket | 

uint FUN_104179a0(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  uint extraout_EAX;
  void *unaff_EBX;
  int iVar3;
  int unaff_retaddr;
  void *pvStack_3c;
  void *pvStack_38;
  void *pvStack_34;
  L2ParamStack aLStack_30 [20];
  L2ParamStack local_1c [16];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  iVar1 = param_1;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1080f342;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  uVar2 = thunk_FUN_104026b0(*(undefined4 *)(param_1 + 0x48),param_2,&DAT_1087ff8c,&param_1);
  L2ParamStack::L2ParamStack(local_1c,10);
  iVar3 = 0;
  local_4 = 0;
  (**(code **)(**(int **)(DAT_10b1f538 + 0x54) + 0x5f8))(local_1c);
  if (0 < unaff_retaddr) {
    do {
      uVar2 = thunk_FUN_104026b0(*(undefined4 *)(iVar1 + 0x48),uVar2,&DAT_108810b0,&stack0xffffffc0,
                                 &pvStack_3c,&pvStack_38,&pvStack_34);
      L2ParamStack::L2ParamStack(aLStack_30,10);
      puStack_8._0_1_ = 1;
      L2ParamStack::PushBack(aLStack_30,unaff_EBX);
      L2ParamStack::PushBack(aLStack_30,pvStack_3c);
      L2ParamStack::PushBack(aLStack_30,pvStack_38);
      L2ParamStack::PushBack(aLStack_30,pvStack_34);
      (**(code **)(**(int **)(DAT_10b1f538 + 0x54) + 0x5f4))(aLStack_30);
      puStack_8 = (undefined1 *)((uint)puStack_8._1_3_ << 8);
      L2ParamStack::~L2ParamStack(aLStack_30);
      iVar3 = iVar3 + 1;
    } while (iVar3 < unaff_retaddr);
  }
  FOutputDevice::Logf(*(FOutputDevice **)GNetworkLog_exref,
                      (ushort *)*(FOutputDevice **)GNetworkLog_exref);
  local_4 = 0xffffffff;
  L2ParamStack::~L2ParamStack(local_1c);
  ExceptionList = pvStack_c;
  return extraout_EAX & 0xffffff00;
}


// ==== 10417b40 FUN_10417b40 depth=0 from=raiz callees=CORE.DLL::L2ParamStack::PushBack@EXTERNAL:00000136 CORE.DLL::L2ParamStack::~L2ParamStack@EXTERNAL:0000012a CORE.DLL::L2ParamStack::L2ParamStack@EXTERNAL:0000012b thunk_FUN_104026b0@103034e5
// strings: 

uint FUN_10417b40(int param_1,undefined4 param_2)

{
  uint extraout_EAX;
  L2ParamStack local_7c [16];
  undefined1 local_6c [48];
  undefined1 local_3c [44];
  void *pvStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1080f369;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  thunk_FUN_104026b0(*(undefined4 *)(param_1 + 0x48),param_2,&DAT_10886084,0x30,local_6c,0x30,
                     local_3c);
  L2ParamStack::L2ParamStack(local_7c,10);
  local_4 = 0;
  L2ParamStack::PushBack(local_7c,local_6c);
  L2ParamStack::PushBack(local_7c,local_3c);
  (**(code **)(**(int **)(DAT_10b1f538 + 0x54) + 0x5fc))(local_7c);
  puStack_8 = (undefined1 *)0xffffffff;
  L2ParamStack::~L2ParamStack((L2ParamStack *)&stack0xffffff80);
  ExceptionList = pvStack_10;
  return extraout_EAX & 0xffffff00;
}


// ==== 10417c20 FUN_10417c20 depth=0 from=raiz callees=CORE.DLL::L2ParamStack::PushBack@EXTERNAL:00000136 CORE.DLL::L2ParamStack::~L2ParamStack@EXTERNAL:0000012a CORE.DLL::L2ParamStack::L2ParamStack@EXTERNAL:0000012b thunk_FUN_104026b0@103034e5
// strings: 

uint FUN_10417c20(int param_1,undefined4 param_2)

{
  uint extraout_EAX;
  L2ParamStack local_7c [16];
  undefined1 local_6c [48];
  undefined1 local_3c [44];
  void *pvStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1080f389;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  thunk_FUN_104026b0(*(undefined4 *)(param_1 + 0x48),param_2,&DAT_10886084,0x30,local_6c,0x30,
                     local_3c);
  L2ParamStack::L2ParamStack(local_7c,10);
  local_4 = 0;
  L2ParamStack::PushBack(local_7c,local_6c);
  L2ParamStack::PushBack(local_7c,local_3c);
  (**(code **)(**(int **)(DAT_10b1f538 + 0x54) + 0x600))(local_7c);
  puStack_8 = (undefined1 *)0xffffffff;
  L2ParamStack::~L2ParamStack((L2ParamStack *)&stack0xffffff80);
  ExceptionList = pvStack_10;
  return extraout_EAX & 0xffffff00;
}


// ==== 10417e50 FUN_10417e50 depth=0 from=raiz callees=CORE.DLL::FOutputDevice::Logf@EXTERNAL:000000b4 thunk_FUN_104026b0@103034e5
// strings: 10884af0=dddhhdhhhd | 10886b30=(Receive) PackageSendableListPacket | 

uint FUN_10417e50(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  uint extraout_EAX;
  int iVar3;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined2 local_3c [2];
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined2 local_20;
  undefined2 local_1e;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  iVar1 = param_1;
  uVar2 = thunk_FUN_104026b0(*(undefined4 *)(param_1 + 0x48),param_2,&DAT_1087ff0c,&local_40,
                             &local_44,&param_1);
  iVar3 = 0;
  if (0 < param_1) {
    do {
      local_3c[0] = 0xffff;
      local_10 = 0xffffffff;
      local_4 = 0xffffffff;
      local_48 = 0xffffffff;
      local_38 = 0;
      local_34 = 0;
      local_30 = 0;
      local_2c = 0;
      local_28 = 0;
      local_24 = 0;
      local_1c = 0;
      local_20 = 0;
      local_1e = 0;
      local_18 = 0;
      local_14 = 0;
      local_c = 0;
      local_8 = 0;
      uVar2 = thunk_FUN_104026b0(*(undefined4 *)(iVar1 + 0x48),uVar2,&DAT_1088494c,&local_48);
      uVar2 = thunk_FUN_104026b0(*(undefined4 *)(iVar1 + 0x48),uVar2,"dddhhdhhhd",&local_38,
                                 &local_34,&local_30,local_3c,&local_20,&local_24,&local_1c,
                                 &local_1e,&local_18,&local_10);
      (**(code **)(**(int **)(DAT_10b1f538 + 0x54) + 0x5a8))(iVar3,local_40,local_44,local_3c);
      iVar3 = iVar3 + 1;
    } while (iVar3 < param_1);
  }
  FOutputDevice::Logf(*(FOutputDevice **)GNetworkLog_exref,
                      (ushort *)*(FOutputDevice **)GNetworkLog_exref);
  return extraout_EAX & 0xffffff00;
}


// ==== 10417fe0 FUN_10417fe0 depth=0 from=raiz callees=CORE.DLL::FOutputDevice::Logf@EXTERNAL:000000b4 thunk_FUN_104026b0@103034e5
// strings: 10886c3c=dddddd | 10886b88=(Receive)EarthQuake OriginX:%d OriginY:%d OriginZ:%d Intensity:%d Time:%d | 

uint FUN_10417fe0(FOutputDevice *param_1,undefined4 param_2)

{
  uint extraout_EAX;
  FOutputDevice *this;
  undefined4 local_20;
  int local_1c;
  int local_18;
  int local_14;
  undefined4 local_10;
  float local_c;
  float local_8;
  float local_4;
  
  thunk_FUN_104026b0(*(undefined4 *)(param_1 + 0x48),param_2,"dddddd",&local_14,&local_18,&local_1c,
                     &local_20,&param_1,&local_10);
  local_c = (float)local_14;
  local_8 = (float)local_18;
  local_4 = (float)local_1c;
  this = param_1;
  (**(code **)(**(int **)(DAT_10b1f538 + 0x54) + 0x114))
            (local_c,local_8,local_4,local_20,param_1,local_10);
  FOutputDevice::Logf(this,*(ushort **)GNetworkLog_exref);
  return extraout_EAX & 0xffffff00;
}


// ==== 104180e0 FUN_104180e0 depth=0 from=raiz callees=CORE.DLL::L2ParamStack::PushBack@EXTERNAL:00000136 CORE.DLL::L2ParamStack::~L2ParamStack@EXTERNAL:0000012a CORE.DLL::L2ParamStack::L2ParamStack@EXTERNAL:0000012b CORE.DLL::FOutputDevice::Logf@EXTERNAL:000000b4 thunk_FUN_104026b0@103034e5
// strings: 10886c94=dddSSdSdd | 10886c48=(Receive) CastleSiegeInfoPacket | 

uint FUN_104180e0(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  uint extraout_EAX;
  int unaff_EBX;
  int iVar2;
  void *local_cc [2];
  L2ParamStack local_c4 [12];
  int iStack_b8;
  void *local_b4;
  void *local_b0;
  void *local_ac;
  void *local_a8 [2];
  void *local_a0;
  undefined1 local_9c [48];
  undefined1 local_6c [48];
  undefined1 local_3c [48];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1080f3cc;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  uVar1 = thunk_FUN_104026b0(*(undefined4 *)(param_1 + 0x48),param_2,"dddSSdSdd",local_a8,local_cc,
                             &local_ac,0x30,local_9c,0x30,local_6c,&local_b0,0x30,local_3c,&local_a0
                             ,&local_b4);
  L2ParamStack::L2ParamStack(local_c4,10);
  local_4 = 0;
  L2ParamStack::PushBack(local_c4,local_a8[0]);
  L2ParamStack::PushBack(local_c4,local_cc[0]);
  L2ParamStack::PushBack(local_c4,local_ac);
  L2ParamStack::PushBack(local_c4,local_9c);
  L2ParamStack::PushBack(local_c4,local_6c);
  L2ParamStack::PushBack(local_c4,local_b0);
  L2ParamStack::PushBack(local_c4,local_3c);
  L2ParamStack::PushBack(local_c4,local_a0);
  L2ParamStack::PushBack(local_c4,local_b4);
  (**(code **)(**(int **)(DAT_10b1f538 + 0x54) + 0x604))(local_c4);
  if ((iStack_b8 == 0) && (unaff_EBX == 1)) {
    uVar1 = thunk_FUN_104026b0(*(undefined4 *)(param_1 + 0x48),uVar1,&DAT_1087ff8c,local_cc);
    iVar2 = 0;
    if (0 < (int)local_cc[0]) {
      do {
        uVar1 = thunk_FUN_104026b0(*(undefined4 *)(param_1 + 0x48),uVar1,&DAT_1087ff8c,local_a8);
        (**(code **)(**(int **)(DAT_10b1f538 + 0x54) + 0x610))(local_a8[0]);
        iVar2 = iVar2 + 1;
      } while (iVar2 < (int)local_cc[0]);
    }
  }
  FOutputDevice::Logf((FOutputDevice *)GNetworkLog_exref,*(ushort **)GNetworkLog_exref);
  local_4 = 0xffffffff;
  L2ParamStack::~L2ParamStack(local_c4);
  ExceptionList = pvStack_c;
  return extraout_EAX & 0xffffff00;
}


// ==== 104183a0 FUN_104183a0 depth=0 from=raiz callees=UGameEngine::OnAddVIPItemList@1031358e CORE.DLL::FOutputDevice::Logf@EXTERNAL:000000b4 thunk_FUN_104026b0@103034e5 UGameEngine::OnVIPItemListEnd@1030f6a5 UGameEngine::OnSetVIPShopID@1030e0cf UGameEngine::OnAddVIPNeedItemList@10309610
// strings: 10883d84=ddddd | 10886d54=dddchh | 10886d48=hdhdhdd | 10886d40=hhdhdd | 10886cf8=(Receive)MultiSellListPacket | 

uint FUN_104183a0(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  uint extraout_EAX;
  int iVar3;
  short local_60 [2];
  short local_5c [2];
  short local_58 [2];
  short local_54 [2];
  short local_50 [2];
  short local_4c [2];
  short local_48 [2];
  undefined1 local_44 [4];
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  undefined1 local_4 [4];
  
  iVar1 = param_1;
  uVar2 = thunk_FUN_104026b0(*(undefined4 *)(param_1 + 0x48),param_2,"ddddd",&local_28,&local_2c,
                             &local_8,local_4,&local_30);
  if (local_2c == 1) {
    UGameEngine::OnSetVIPShopID(*(UGameEngine **)(DAT_10b1f538 + 0x54),local_28);
  }
  local_34 = 0;
  if (0 < local_30) {
    do {
      uVar2 = thunk_FUN_104026b0(*(undefined4 *)(iVar1 + 0x48),uVar2,"dddchh",&local_38,&local_3c,
                                 &local_40,&param_1,local_60,local_5c);
      iVar3 = 0;
      if (0 < local_60[0]) {
        do {
          uVar2 = thunk_FUN_104026b0(*(undefined4 *)(iVar1 + 0x48),uVar2,"hdhdhdd",local_50,
                                     &local_18,local_54,&local_1c,local_58,&local_20,&local_24);
          UGameEngine::OnAddVIPItemList
                    (*(UGameEngine **)(DAT_10b1f538 + 0x54),iVar3,(int)(char)param_1,local_38,
                     local_3c,local_40,(int)local_50[0],local_18,(int)local_54[0],local_1c,
                     (int)local_58[0],local_20,local_24);
          iVar3 = iVar3 + 1;
        } while (iVar3 < local_60[0]);
      }
      iVar3 = 0;
      if (0 < local_5c[0]) {
        do {
          uVar2 = thunk_FUN_104026b0(*(undefined4 *)(iVar1 + 0x48),uVar2,"hhdhdd",local_48,local_44,
                                     &local_c,local_4c,&local_10,&local_14);
          UGameEngine::OnAddVIPNeedItemList
                    (*(UGameEngine **)(DAT_10b1f538 + 0x54),local_38,local_3c,local_40,
                     (int)local_48[0],local_c,(int)local_4c[0],local_10,local_14);
          iVar3 = iVar3 + 1;
        } while (iVar3 < local_5c[0]);
      }
      local_34 = local_34 + 1;
    } while (local_34 < local_30);
  }
  if (local_8 == 1) {
    UGameEngine::OnVIPItemListEnd(*(UGameEngine **)(DAT_10b1f538 + 0x54));
  }
  FOutputDevice::Logf((FOutputDevice *)GNetworkLog_exref,*(ushort **)GNetworkLog_exref);
  return extraout_EAX & 0xffffff00;
}


// ==== 10418700 FUN_10418700 depth=0 from=raiz callees=CORE.DLL::L2ParamStack::PushBack@EXTERNAL:00000136 CORE.DLL::L2ParamStack::~L2ParamStack@EXTERNAL:0000012a CORE.DLL::L2ParamStack::L2ParamStack@EXTERNAL:0000012b CORE.DLL::FOutputDevice::Logf@EXTERNAL:000000b4 thunk_FUN_104026b0@103034e5
// strings: 10885028=dSddSS | 10886dec=(Receive)SnoopPacket | 

uint FUN_10418700(int param_1,undefined4 param_2)

{
  uint extraout_EAX;
  L2ParamStack local_488 [16];
  void *local_478;
  void *local_474;
  void *local_470;
  undefined1 local_46c [48];
  undefined1 local_43c [48];
  undefined1 local_40c [1024];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1080f3ec;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  thunk_FUN_104026b0(*(undefined4 *)(param_1 + 0x48),param_2,"dSddSS",&local_478,0x30,local_46c,
                     &local_470,&local_474,0x30,local_43c,0x400,local_40c);
  L2ParamStack::L2ParamStack(local_488,10);
  local_4 = 0;
  L2ParamStack::PushBack(local_488,local_478);
  L2ParamStack::PushBack(local_488,local_46c);
  L2ParamStack::PushBack(local_488,local_470);
  L2ParamStack::PushBack(local_488,local_474);
  L2ParamStack::PushBack(local_488,local_43c);
  L2ParamStack::PushBack(local_488,local_40c);
  (**(code **)(**(int **)(DAT_10b1f538 + 0x54) + 0x628))(local_488);
  FOutputDevice::Logf(*(FOutputDevice **)GNetworkLog_exref,
                      (ushort *)*(FOutputDevice **)GNetworkLog_exref);
  local_4 = 0xffffffff;
  L2ParamStack::~L2ParamStack(local_488);
  ExceptionList = pvStack_c;
  return extraout_EAX & 0xffffff00;
}


// ==== 10418870 FUN_10418870 depth=0 from=raiz callees=CORE.DLL::FOutputDevice::Logf@EXTERNAL:000000b4 thunk_FUN_104026b0@103034e5
// strings: 10886e20=(Receive)RecipeBookItemListPacket | 

uint FUN_10418870(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  uint extraout_EAX;
  int iVar3;
  undefined4 local_10;
  undefined4 local_c [2];
  int iStack_4;
  
  iVar1 = param_1;
  uVar2 = thunk_FUN_104026b0(*(undefined4 *)(param_1 + 0x48),param_2,&DAT_1087ff0c,local_c,&local_10
                             ,&param_1);
  (**(code **)(**(int **)(DAT_10b1f538 + 0x54) + 0x554))(local_c[0],local_10);
  iVar3 = 0;
  if (0 < iStack_4) {
    do {
      uVar2 = thunk_FUN_104026b0(*(undefined4 *)(iVar1 + 0x48),uVar2,&DAT_1087ff44,&local_10,local_c
                                );
      (**(code **)(**(int **)(DAT_10b1f538 + 0x54) + 0x558))(local_10);
      iVar3 = iVar3 + 1;
    } while (iVar3 < iStack_4);
  }
  FOutputDevice::Logf(*(FOutputDevice **)GNetworkLog_exref,
                      (ushort *)*(FOutputDevice **)GNetworkLog_exref);
  return extraout_EAX & 0xffffff00;
}


// ==== 10418960 FUN_10418960 depth=0 from=raiz callees=CORE.DLL::L2ParamStack::PushBack@EXTERNAL:00000136 CORE.DLL::L2ParamStack::~L2ParamStack@EXTERNAL:0000012a CORE.DLL::L2ParamStack::L2ParamStack@EXTERNAL:0000012b CORE.DLL::FOutputDevice::Logf@EXTERNAL:000000b4 thunk_FUN_104026b0@103034e5
// strings: 10883d84=ddddd | 10886e78=(Receive)RecipeItemMakeInfoPacket | 

uint FUN_10418960(int param_1,undefined4 param_2)

{
  uint extraout_EAX;
  void *local_30;
  void *local_2c;
  void *local_28;
  void *local_24;
  void *local_20;
  L2ParamStack local_1c [16];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1080f409;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  L2ParamStack::L2ParamStack(local_1c,10);
  local_4 = 0;
  thunk_FUN_104026b0(*(undefined4 *)(param_1 + 0x48),param_2,"ddddd",&local_30,&local_20,&local_2c,
                     &local_28,&local_24);
  L2ParamStack::PushBack(local_1c,local_30);
  L2ParamStack::PushBack(local_1c,local_2c);
  L2ParamStack::PushBack(local_1c,local_28);
  L2ParamStack::PushBack(local_1c,local_24);
  L2ParamStack::PushBack(local_1c,local_20);
  (**(code **)(**(int **)(DAT_10b1f538 + 0x54) + 0x55c))(local_1c);
  FOutputDevice::Logf(*(FOutputDevice **)GNetworkLog_exref,
                      (ushort *)*(FOutputDevice **)GNetworkLog_exref);
  local_4 = 0xffffffff;
  L2ParamStack::~L2ParamStack(local_1c);
  ExceptionList = pvStack_c;
  return extraout_EAX & 0xffffff00;
}


// ==== 10418a90 FUN_10418a90 depth=0 from=raiz callees=CORE.DLL::FOutputDevice::Logf@EXTERNAL:000000b4 thunk_FUN_104026b0@103034e5
// strings: 10886ed0=(Receive)RecipeShopManageListPacket | 

uint FUN_10418a90(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  uint extraout_EAX;
  int iVar3;
  undefined4 unaff_ESI;
  undefined4 unaff_EDI;
  undefined4 local_10;
  undefined4 local_c;
  int local_8 [2];
  
  iVar1 = param_1;
  uVar2 = thunk_FUN_104026b0(*(undefined4 *)(param_1 + 0x48),param_2,&DAT_108810b0,local_8,&local_c,
                             &local_10,&param_1);
  (**(code **)(**(int **)(DAT_10b1f538 + 0x54) + 0x560))(local_8[0],local_c,local_10);
  iVar3 = 0;
  if (0 < local_8[0]) {
    do {
      uVar2 = thunk_FUN_104026b0(*(undefined4 *)(iVar1 + 0x48),uVar2,&DAT_1087ff44,&stack0xffffffe0,
                                 &stack0xffffffdc);
      (**(code **)(**(int **)(DAT_10b1f538 + 0x54) + 0x564))(unaff_ESI,unaff_EDI);
      iVar3 = iVar3 + 1;
    } while (iVar3 < local_8[0]);
  }
  uVar2 = thunk_FUN_104026b0(*(undefined4 *)(iVar1 + 0x48),uVar2,&DAT_1087ff8c,local_8);
  iVar3 = 0;
  if (0 < local_8[0]) {
    do {
      uVar2 = thunk_FUN_104026b0(*(undefined4 *)(iVar1 + 0x48),uVar2,&DAT_1087ff0c,&stack0xffffffe0,
                                 &stack0xffffffdc,&local_10);
      (**(code **)(**(int **)(DAT_10b1f538 + 0x54) + 0x568))(unaff_ESI,unaff_EDI,local_10);
      iVar3 = iVar3 + 1;
    } while (iVar3 < local_8[0]);
  }
  FOutputDevice::Logf(*(FOutputDevice **)GNetworkLog_exref,
                      (ushort *)*(FOutputDevice **)GNetworkLog_exref);
  return extraout_EAX & 0xffffff00;
}


// ==== 10418c10 FUN_10418c10 depth=0 from=raiz callees=CORE.DLL::FOutputDevice::Logf@EXTERNAL:000000b4 thunk_FUN_104026b0@103034e5
// strings: 10883d84=ddddd | 10886f28=(Receive)RecipeShopSellListPacket | 

uint FUN_10418c10(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  uint extraout_EAX;
  int iVar3;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  int iStack_c;
  
  iVar1 = param_1;
  uVar2 = thunk_FUN_104026b0(*(undefined4 *)(param_1 + 0x48),param_2,"ddddd",&local_10,&local_14,
                             &local_18,&local_1c,&param_1);
  (**(code **)(**(int **)(DAT_10b1f538 + 0x54) + 0x56c))(local_10,local_14,local_18,local_1c);
  iVar3 = 0;
  if (0 < iStack_c) {
    do {
      uVar2 = thunk_FUN_104026b0(*(undefined4 *)(iVar1 + 0x48),uVar2,&DAT_1087ff0c,&local_14,
                                 &local_18,&local_1c);
      (**(code **)(**(int **)(DAT_10b1f538 + 0x54) + 0x570))(local_14,local_18,local_1c);
      iVar3 = iVar3 + 1;
    } while (iVar3 < iStack_c);
  }
  FOutputDevice::Logf(*(FOutputDevice **)GNetworkLog_exref,
                      (ushort *)*(FOutputDevice **)GNetworkLog_exref);
  return extraout_EAX & 0xffffff00;
}


// ==== 10418d30 FUN_10418d30 depth=0 from=raiz callees=CORE.DLL::FOutputDevice::Logf@EXTERNAL:000000b4 thunk_FUN_104026b0@103034e5
// strings: 10886c3c=dddddd | 10886f80=(Receive)RecipeShopItemInfoPacket | 

uint FUN_10418d30(int param_1,undefined4 param_2)

{
  uint extraout_EAX;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  thunk_FUN_104026b0(*(undefined4 *)(param_1 + 0x48),param_2,"dddddd",&local_4,&local_8,&local_c,
                     &local_10,&local_14,&param_1);
  (**(code **)(**(int **)(DAT_10b1f538 + 0x54) + 0x574))
            (local_4,local_8,local_c,local_10,local_14,param_1);
  FOutputDevice::Logf(*(FOutputDevice **)GNetworkLog_exref,
                      (ushort *)*(FOutputDevice **)GNetworkLog_exref);
  return extraout_EAX & 0xffffff00;
}


// ==== 10418de0 FUN_10418de0 depth=0 from=raiz callees=CORE.DLL::L2ParamStack::PushBack@EXTERNAL:00000136 CORE.DLL::L2ParamStack::~L2ParamStack@EXTERNAL:0000012a _memset@107a6860 CORE.DLL::L2ParamStack::L2ParamStack@EXTERNAL:0000012b CORE.DLL::FOutputDevice::Logf@EXTERNAL:000000b4 thunk_FUN_104026b0@103034e5
// strings: 10886fd4=(Receive)ShowTownMapPacket | 

uint FUN_10418de0(int param_1,undefined4 param_2)

{
  uint extraout_EAX;
  void *local_824;
  void *local_820;
  L2ParamStack local_81c [16];
  undefined2 local_80c;
  undefined1 local_80a [2046];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1080f42c;
  pvStack_c = ExceptionList;
  local_80c = 0;
  ExceptionList = &pvStack_c;
  _memset(local_80a,0,0x7fe);
  thunk_FUN_104026b0(*(undefined4 *)(param_1 + 0x48),param_2,&DAT_1088424c,0x800,&local_80c,
                     &local_820,&local_824);
  L2ParamStack::L2ParamStack(local_81c,10);
  local_4 = 0;
  L2ParamStack::PushBack(local_81c,&local_80c);
  L2ParamStack::PushBack(local_81c,local_820);
  L2ParamStack::PushBack(local_81c,local_824);
  (**(code **)(*(int *)GL2Console + 0x638))(local_81c);
  FOutputDevice::Logf(*(FOutputDevice **)GNetworkLog_exref,
                      (ushort *)*(FOutputDevice **)GNetworkLog_exref);
  local_4 = 0xffffffff;
  L2ParamStack::~L2ParamStack(local_81c);
  ExceptionList = pvStack_c;
  return extraout_EAX & 0xffffff00;
}


// ==== 10418f20 FUN_10418f20 depth=0 from=raiz callees=CORE.DLL::L2ParamStack::PushBack@EXTERNAL:00000136 CORE.DLL::L2ParamStack::~L2ParamStack@EXTERNAL:0000012a CORE.DLL::L2ParamStack::L2ParamStack@EXTERNAL:0000012b CORE.DLL::FOutputDevice::Logf@EXTERNAL:000000b4 thunk_FUN_104026b0@103034e5
// strings: 10883d84=ddddd | 10887014=(Receive)ObserverStartPacket | 

uint FUN_10418f20(void *param_1,undefined4 param_2)

{
  uint extraout_EAX;
  void *local_2c;
  void *local_28;
  void *local_24;
  void *local_20;
  L2ParamStack local_1c [16];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1080f449;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  thunk_FUN_104026b0(*(undefined4 *)((int)param_1 + 0x48),param_2,"ddddd",&param_1,&local_2c,
                     &local_28,&local_24,&local_20);
  L2ParamStack::L2ParamStack(local_1c,10);
  local_4 = 0;
  L2ParamStack::PushBack(local_1c,param_1);
  L2ParamStack::PushBack(local_1c,local_2c);
  L2ParamStack::PushBack(local_1c,local_28);
  L2ParamStack::PushBack(local_1c,local_24);
  L2ParamStack::PushBack(local_1c,local_20);
  (**(code **)(**(int **)(DAT_10b1f538 + 0x54) + 0x62c))(local_1c);
  FOutputDevice::Logf(*(FOutputDevice **)GNetworkLog_exref,
                      (ushort *)*(FOutputDevice **)GNetworkLog_exref);
  local_4 = 0xffffffff;
  L2ParamStack::~L2ParamStack(local_1c);
  ExceptionList = pvStack_c;
  return extraout_EAX & 0xffffff00;
}


// ==== 10419050 FUN_10419050 depth=0 from=raiz callees=CORE.DLL::L2ParamStack::PushBack@EXTERNAL:00000136 CORE.DLL::L2ParamStack::~L2ParamStack@EXTERNAL:0000012a CORE.DLL::L2ParamStack::L2ParamStack@EXTERNAL:0000012b CORE.DLL::FOutputDevice::Logf@EXTERNAL:000000b4 thunk_FUN_104026b0@103034e5
// strings: 1088705c=(Receive)ObserverEndPacket | 

uint FUN_10419050(void *param_1,undefined4 param_2)

{
  uint extraout_EAX;
  void *local_24;
  void *local_20;
  L2ParamStack local_1c [16];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1080f469;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  thunk_FUN_104026b0(*(undefined4 *)((int)param_1 + 0x48),param_2,&DAT_1087ff0c,&param_1,&local_24,
                     &local_20);
  L2ParamStack::L2ParamStack(local_1c,10);
  local_4 = 0;
  L2ParamStack::PushBack(local_1c,param_1);
  L2ParamStack::PushBack(local_1c,local_24);
  L2ParamStack::PushBack(local_1c,local_20);
  (**(code **)(**(int **)(DAT_10b1f538 + 0x54) + 0x630))(local_1c);
  FOutputDevice::Logf(*(FOutputDevice **)GNetworkLog_exref,
                      (ushort *)*(FOutputDevice **)GNetworkLog_exref);
  local_4 = 0xffffffff;
  L2ParamStack::~L2ParamStack(local_1c);
  ExceptionList = pvStack_c;
  return extraout_EAX & 0xffffff00;
}


// ==== 10419160 FUN_10419160 depth=0 from=raiz callees=CORE.DLL::L2ParamStack::PushBack@EXTERNAL:00000136 CORE.DLL::L2ParamStack::~L2ParamStack@EXTERNAL:0000012a CORE.DLL::L2ParamStack::L2ParamStack@EXTERNAL:0000012b CORE.DLL::FOutputDevice::Logf@EXTERNAL:000000b4 thunk_FUN_104026b0@103034e5
// strings: 1088709c=(Receive)ChairSitPacket | 

uint FUN_10419160(void *param_1,undefined4 param_2)

{
  uint extraout_EAX;
  void *local_20;
  L2ParamStack local_1c [16];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1080f489;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  thunk_FUN_104026b0(*(undefined4 *)((int)param_1 + 0x48),param_2,&DAT_1087ff44,&param_1,&local_20);
  L2ParamStack::L2ParamStack(local_1c,10);
  local_4 = 0;
  L2ParamStack::PushBack(local_1c,param_1);
  L2ParamStack::PushBack(local_1c,local_20);
  (**(code **)(**(int **)(DAT_10b1f538 + 0x54) + 0x634))(local_1c);
  FOutputDevice::Logf(*(FOutputDevice **)GNetworkLog_exref,
                      (ushort *)*(FOutputDevice **)GNetworkLog_exref);
  local_4 = 0xffffffff;
  L2ParamStack::~L2ParamStack(local_1c);
  ExceptionList = pvStack_c;
  return extraout_EAX & 0xffffff00;
}


// ==== 10419250 FUN_10419250 depth=0 from=raiz callees=CORE.DLL::FOutputDevice::Logf@EXTERNAL:000000b4 thunk_FUN_104026b0@103034e5
// strings: 10883d84=ddddd | 108870d8=(Receive)HennaEquipListPacket | 

/* WARNING: Type propagation algorithm not settling */

uint FUN_10419250(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  uint extraout_EAX;
  int iVar3;
  int unaff_EBX;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 auStackY_b0 [8];
  undefined4 uStackY_90;
  undefined4 uStackY_8c;
  undefined4 uStackY_88;
  char *pcStackY_84;
  undefined4 *puStackY_80;
  undefined4 *puStackY_7c;
  undefined4 *puStackY_78;
  int iVar6;
  undefined4 local_4c [18];
  int iStack_4;
  
  puStackY_7c = *(undefined4 **)(param_1 + 0x48);
  puStackY_78 = (undefined4 *)param_2;
  puStackY_80 = (undefined4 *)0x1041927d;
  uVar2 = thunk_FUN_104026b0();
  (**(code **)(**(int **)(DAT_10b1f538 + 0x54) + 0x57c))();
  iVar6 = 0;
  if (0 < unaff_EBX) {
    do {
      puStackY_78 = local_4c + 2;
      puStackY_7c = local_4c + 1;
      uStackY_8c = *(undefined4 *)(iStack_4 + 0x48);
      puStackY_80 = local_4c;
      pcStackY_84 = "ddddd";
      local_4c[0] = 0;
      local_4c[1] = 0;
      local_4c[2] = 0;
      local_4c[3] = 0;
      local_4c[4] = 0;
      local_4c[5] = 0;
      local_4c[6] = 0;
      local_4c[7] = 0;
      local_4c[8] = 0;
      local_4c[9] = 0;
      local_4c[10] = 0;
      local_4c[0xb] = 0;
      local_4c[0xc] = 0;
      local_4c[0xd] = 0;
      local_4c[0xe] = 0;
      local_4c[0xf] = 0;
      local_4c[0x10] = 0;
      uStackY_90 = 0x10419323;
      uStackY_88 = uVar2;
      uVar2 = thunk_FUN_104026b0();
      iVar1 = **(int **)(DAT_10b1f538 + 0x54);
      puVar4 = local_4c;
      puVar5 = auStackY_b0;
      for (iVar3 = 0x11; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar5 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar5 = puVar5 + 1;
      }
      (**(code **)(iVar1 + 0x580))();
      iVar6 = iVar6 + 1;
    } while (iVar6 < unaff_EBX);
  }
  puStackY_78 = (undefined4 *)0x10419373;
  FOutputDevice::Logf((FOutputDevice *)GNetworkLog_exref,*(ushort **)GNetworkLog_exref);
  return extraout_EAX & 0xffffff00;
}


// ==== 104193d0 FUN_104193d0 depth=0 from=raiz callees=CORE.DLL::FOutputDevice::Logf@EXTERNAL:000000b4 thunk_FUN_104026b0@103034e5
// strings: 10887168=dddddddcdcdcdcdcdc | 10887120=(Receive)HennaItemInfoPacket | 

/* WARNING: Type propagation algorithm not settling */

uint FUN_104193d0(int param_1,undefined4 param_2)

{
  code *pcVar1;
  uint extraout_EAX;
  int iVar2;
  undefined4 *puVar3;
  undefined4 **ppuVar4;
  undefined4 *apuStack_94 [4];
  undefined4 *puStack_84;
  undefined4 *puStack_80;
  undefined4 *puStack_7c;
  undefined4 *puStack_78;
  undefined4 *puStack_74;
  undefined4 *puStack_70;
  undefined4 *puStack_6c;
  undefined4 *puStack_68;
  undefined4 *puStack_64;
  undefined4 *puStack_60;
  undefined4 *puStack_5c;
  undefined4 *puStack_58;
  undefined4 *puStack_54;
  undefined4 *puStack_50;
  undefined4 local_44 [17];
  
  local_44[0] = 0;
  local_44[1] = 0;
  local_44[2] = 0;
  local_44[3] = 0;
  local_44[4] = 0;
  local_44[5] = 0;
  local_44[6] = 0;
  local_44[7] = 0;
  local_44[8] = 0;
  local_44[9] = 0;
  local_44[10] = 0;
  local_44[0xb] = 0;
  local_44[0xc] = 0;
  local_44[0xd] = 0;
  local_44[0xe] = 0;
  local_44[0xf] = 0;
  local_44[0x10] = 0;
  puStack_50 = local_44 + 0x10;
  puStack_54 = local_44 + 0xf;
  puStack_58 = local_44 + 0xe;
  puStack_5c = local_44 + 0xd;
  puStack_60 = local_44 + 0xc;
  puStack_64 = local_44 + 0xb;
  puStack_68 = local_44 + 10;
  puStack_6c = local_44 + 9;
  puStack_70 = local_44 + 8;
  puStack_74 = local_44 + 7;
  puStack_78 = local_44 + 6;
  puStack_7c = local_44 + 5;
  puStack_80 = &param_1;
  puStack_84 = local_44 + 4;
  apuStack_94[3] = local_44 + 3;
  apuStack_94[2] = local_44 + 2;
  apuStack_94[1] = local_44 + 1;
  apuStack_94[0] = local_44;
  thunk_FUN_104026b0(*(undefined4 *)(param_1 + 0x48),param_2,"dddddddcdcdcdcdcdc");
  pcVar1 = *(code **)(**(int **)(DAT_10b1f538 + 0x54) + 0x584);
  puStack_50 = (undefined4 *)param_1;
  puVar3 = local_44;
  ppuVar4 = apuStack_94;
  for (iVar2 = 0x11; iVar2 != 0; iVar2 = iVar2 + -1) {
    *ppuVar4 = (undefined4 *)*puVar3;
    puVar3 = puVar3 + 1;
    ppuVar4 = ppuVar4 + 1;
  }
  (*pcVar1)();
  FOutputDevice::Logf(*(FOutputDevice **)GNetworkLog_exref,
                      (ushort *)*(FOutputDevice **)GNetworkLog_exref);
  return extraout_EAX & 0xffffff00;
}


// ==== 10419530 FUN_10419530 depth=0 from=raiz callees=CORE.DLL::FOutputDevice::Logf@EXTERNAL:000000b4 thunk_FUN_104026b0@103034e5
// strings: 108871bc=ccccccdd | 10887180=(Receive)HennaInfoPacket | 

uint FUN_10419530(int param_1,undefined4 param_2)

{
  code *pcVar1;
  undefined4 uVar2;
  uint extraout_EAX;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int aiStack_b4 [6];
  int iStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  char *pcStack_90;
  char *pcStack_8c;
  char *pcStack_88;
  char *pcStack_84;
  char *pcStack_80;
  char *pcStack_7c;
  char *pcStack_78;
  undefined4 *puStack_74;
  undefined1 *puStack_70;
  char local_5a;
  char local_59;
  char local_58;
  char local_57;
  char local_56;
  char local_55;
  undefined1 local_54 [4];
  undefined4 local_50 [3];
  int local_44 [7];
  undefined4 local_28;
  int local_24;
  undefined4 local_20;
  int local_1c;
  undefined4 local_18;
  int local_14;
  undefined4 local_10;
  int local_c;
  undefined4 local_8;
  int local_4;
  
  puStack_70 = local_54;
  puStack_74 = local_50;
  pcStack_78 = &local_55;
  pcStack_7c = &local_56;
  pcStack_80 = &local_57;
  pcStack_84 = &local_58;
  pcStack_88 = &local_59;
  pcStack_8c = &local_5a;
  uStack_98 = *(undefined4 *)(param_1 + 0x48);
  pcStack_90 = "ccccccdd";
  uStack_94 = param_2;
  local_44[0] = 0;
  local_44[1] = 0;
  local_44[2] = 0;
  local_44[3] = 0;
  local_44[4] = 0;
  local_44[5] = 0;
  local_28 = 0;
  local_20 = 0;
  local_18 = 0;
  local_10 = 0;
  local_8 = 0;
  iStack_9c = 0x104195b3;
  uVar2 = thunk_FUN_104026b0();
  local_1c = (int)local_58;
  local_44[6] = (int)local_5a;
  local_4 = (int)local_55;
  local_24 = (int)local_59;
  local_14 = (int)local_57;
  puStack_70 = (undefined1 *)local_50[0];
  local_c = (int)local_56;
  pcVar1 = *(code **)(**(int **)(DAT_10b1f538 + 0x54) + 0x588);
  piVar4 = local_44;
  piVar5 = aiStack_b4;
  for (iVar3 = 0x11; iVar3 != 0; iVar3 = iVar3 + -1) {
    *piVar5 = *piVar4;
    piVar4 = piVar4 + 1;
    piVar5 = piVar5 + 1;
  }
  (*pcVar1)();
  iVar3 = 0;
  if (0 < iStack_9c) {
    do {
      uVar2 = thunk_FUN_104026b0(*(undefined4 *)(local_44[0] + 0x48),uVar2,&DAT_1087ff44,&pcStack_90
                                 ,&uStack_94);
      (**(code **)(**(int **)(DAT_10b1f538 + 0x54) + 0x58c))(pcStack_90,uStack_94);
      iVar3 = iVar3 + 1;
    } while (iVar3 < iStack_9c);
  }
  FOutputDevice::Logf(*(FOutputDevice **)GNetworkLog_exref,
                      (ushort *)*(FOutputDevice **)GNetworkLog_exref);
  return extraout_EAX & 0xffffff00;
}


// ==== 104196f0 FUN_104196f0 depth=0 from=raiz callees=CORE.DLL::FOutputDevice::Logf@EXTERNAL:000000b4 thunk_FUN_104026b0@103034e5
// strings: 108871bc=ccccccdd | 108871c8=(Receive)GMHennaInfoPacket | 

uint FUN_104196f0(int param_1,undefined4 param_2)

{
  code *pcVar1;
  undefined4 uVar2;
  uint extraout_EAX;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int aiStack_b4 [6];
  int iStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  char *pcStack_90;
  char *pcStack_8c;
  char *pcStack_88;
  char *pcStack_84;
  char *pcStack_80;
  char *pcStack_7c;
  char *pcStack_78;
  undefined4 *puStack_74;
  undefined1 *puStack_70;
  char local_5a;
  char local_59;
  char local_58;
  char local_57;
  char local_56;
  char local_55;
  undefined1 local_54 [4];
  undefined4 local_50 [3];
  int local_44 [7];
  undefined4 local_28;
  int local_24;
  undefined4 local_20;
  int local_1c;
  undefined4 local_18;
  int local_14;
  undefined4 local_10;
  int local_c;
  undefined4 local_8;
  int local_4;
  
  puStack_70 = local_54;
  puStack_74 = local_50;
  pcStack_78 = &local_55;
  pcStack_7c = &local_56;
  pcStack_80 = &local_57;
  pcStack_84 = &local_58;
  pcStack_88 = &local_59;
  pcStack_8c = &local_5a;
  uStack_98 = *(undefined4 *)(param_1 + 0x48);
  pcStack_90 = "ccccccdd";
  uStack_94 = param_2;
  local_44[0] = 0;
  local_44[1] = 0;
  local_44[2] = 0;
  local_44[3] = 0;
  local_44[4] = 0;
  local_44[5] = 0;
  local_28 = 0;
  local_20 = 0;
  local_18 = 0;
  local_10 = 0;
  local_8 = 0;
  iStack_9c = 0x10419773;
  uVar2 = thunk_FUN_104026b0();
  local_1c = (int)local_58;
  local_44[6] = (int)local_5a;
  local_4 = (int)local_55;
  local_24 = (int)local_59;
  local_14 = (int)local_57;
  puStack_70 = (undefined1 *)local_50[0];
  local_c = (int)local_56;
  pcVar1 = *(code **)(**(int **)(DAT_10b1f538 + 0x54) + 0x5a0);
  piVar4 = local_44;
  piVar5 = aiStack_b4;
  for (iVar3 = 0x11; iVar3 != 0; iVar3 = iVar3 + -1) {
    *piVar5 = *piVar4;
    piVar4 = piVar4 + 1;
    piVar5 = piVar5 + 1;
  }
  (*pcVar1)();
  iVar3 = 0;
  if (0 < iStack_9c) {
    do {
      uVar2 = thunk_FUN_104026b0(*(undefined4 *)(local_44[0] + 0x48),uVar2,&DAT_1087ff44,&pcStack_90
                                 ,&uStack_94);
      (**(code **)(**(int **)(DAT_10b1f538 + 0x54) + 0x59c))(pcStack_90,uStack_94);
      iVar3 = iVar3 + 1;
    } while (iVar3 < iStack_9c);
  }
  FOutputDevice::Logf(*(FOutputDevice **)GNetworkLog_exref,
                      (ushort *)*(FOutputDevice **)GNetworkLog_exref);
  return extraout_EAX & 0xffffff00;
}


// ==== 104198b0 FUN_104198b0 depth=0 from=raiz callees=CORE.DLL::FOutputDevice::Logf@EXTERNAL:000000b4 thunk_FUN_104026b0@103034e5
// strings: 10883d84=ddddd | 10887208=(Receive)HennaUnequipListPacket | 

/* WARNING: Type propagation algorithm not settling */

uint FUN_104198b0(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  uint extraout_EAX;
  int iVar3;
  int unaff_EBX;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 auStackY_b0 [8];
  undefined4 uStackY_90;
  undefined4 uStackY_8c;
  undefined4 uStackY_88;
  char *pcStackY_84;
  undefined4 *puStackY_80;
  undefined4 *puStackY_7c;
  undefined4 *puStackY_78;
  int iVar6;
  undefined4 local_4c [18];
  int iStack_4;
  
  puStackY_7c = *(undefined4 **)(param_1 + 0x48);
  puStackY_78 = (undefined4 *)param_2;
  puStackY_80 = (undefined4 *)0x104198dd;
  uVar2 = thunk_FUN_104026b0();
  (**(code **)(**(int **)(DAT_10b1f538 + 0x54) + 0x590))();
  iVar6 = 0;
  if (0 < unaff_EBX) {
    do {
      puStackY_78 = local_4c + 2;
      puStackY_7c = local_4c + 1;
      uStackY_8c = *(undefined4 *)(iStack_4 + 0x48);
      puStackY_80 = local_4c;
      pcStackY_84 = "ddddd";
      local_4c[0] = 0;
      local_4c[1] = 0;
      local_4c[2] = 0;
      local_4c[3] = 0;
      local_4c[4] = 0;
      local_4c[5] = 0;
      local_4c[6] = 0;
      local_4c[7] = 0;
      local_4c[8] = 0;
      local_4c[9] = 0;
      local_4c[10] = 0;
      local_4c[0xb] = 0;
      local_4c[0xc] = 0;
      local_4c[0xd] = 0;
      local_4c[0xe] = 0;
      local_4c[0xf] = 0;
      local_4c[0x10] = 0;
      uStackY_90 = 0x10419983;
      uStackY_88 = uVar2;
      uVar2 = thunk_FUN_104026b0();
      iVar1 = **(int **)(DAT_10b1f538 + 0x54);
      puVar4 = local_4c;
      puVar5 = auStackY_b0;
      for (iVar3 = 0x11; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar5 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar5 = puVar5 + 1;
      }
      (**(code **)(iVar1 + 0x594))();
      iVar6 = iVar6 + 1;
    } while (iVar6 < unaff_EBX);
  }
  puStackY_78 = (undefined4 *)0x104199d3;
  FOutputDevice::Logf((FOutputDevice *)GNetworkLog_exref,*(ushort **)GNetworkLog_exref);
  return extraout_EAX & 0xffffff00;
}


// ==== 10419a30 FUN_10419a30 depth=0 from=raiz callees=CORE.DLL::FOutputDevice::Logf@EXTERNAL:000000b4 thunk_FUN_104026b0@103034e5 __alloca_probe@107a69d0
// strings: 10887290=dSSScc | 10881734=ccdcS | 10887254=(Receive)MacroListPacket | 

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

uint FUN_10419a30(int param_1,undefined4 param_2)

{
  code *pcVar1;
  undefined4 uVar2;
  uint extraout_EAX;
  int iVar3;
  char cVar4;
  char *pcVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 auStack_1929c [240];
  undefined4 uStack_18edc;
  undefined4 uStack_18ed8;
  undefined4 uStack_18ed4;
  undefined *puStack_18ed0;
  undefined4 *puStack_18ecc;
  undefined4 uStack_18ec8;
  undefined4 uStack_18ec4;
  char *pcStack_18ec0;
  char *pcStack_18ebc;
  undefined4 uStack_18eb8;
  char *pcStack_18eb4;
  char *pcStack_18eb0;
  char *pcStack_18eac;
  char *pcStack_18ea8;
  undefined1 *puStack_18ea4;
  char cStack_18e85;
  undefined4 uStack_18e84;
  char acStack_18e80 [8];
  undefined4 uStack_18e78;
  char *pcStack_18e74;
  char acStack_18e70 [30];
  char acStack_18e52 [66];
  undefined1 auStack_18e10 [11];
  char acStack_18e05 [9];
  undefined1 auStack_18dfc [101884];
  
  pcStack_18ea8 = *(char **)(param_1 + 0x48);
  puStack_18ea4 = (undefined1 *)param_2;
  pcStack_18eac = (char *)0x10419a60;
  pcStack_18eb4 = (char *)thunk_FUN_104026b0();
  uStack_18eb8 = *(undefined4 *)(param_1 + 0x48);
  pcStack_18eac = acStack_18e80;
  pcStack_18eb0 = "d";
  pcStack_18ebc = (char *)0x10419a74;
  uStack_18ec4 = thunk_FUN_104026b0();
  uStack_18ec8 = *(undefined4 *)(param_1 + 0x48);
  pcStack_18ebc = (char *)&uStack_18e78;
  pcStack_18ec0 = "c";
  puStack_18ecc = (undefined4 *)0x10419a88;
  uStack_18ed4 = thunk_FUN_104026b0();
  uStack_18ed8 = *(undefined4 *)(param_1 + 0x48);
  puStack_18ecc = &uStack_18e84;
  puStack_18ed0 = &DAT_1087f9dc;
  uStack_18edc = 0x10419a9c;
  uVar2 = thunk_FUN_104026b0();
  if (((char)uStack_18e78 < '\x01') || ((char)uStack_18e84 < '\x01')) {
    acStack_18e05[0] = '\0';
    acStack_18e70[0] = '\0';
    acStack_18e70[1] = '\0';
    acStack_18e70[2] = '\0';
    acStack_18e70[3] = '\0';
    iVar6 = **(int **)(DAT_10b1f538 + 0x54);
    pcVar5 = acStack_18e70;
    puVar7 = auStack_1929c;
    for (iVar3 = 0xff; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar7 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      puVar7 = puVar7 + 1;
    }
    (**(code **)(iVar6 + 0x578))(uStack_18e78,uStack_18e84);
  }
  else {
    cStack_18e85 = '\0';
    if ('\0' < (char)uStack_18e84) {
      do {
        if ('c' < cStack_18e85) break;
        iVar6 = cStack_18e85 * 0x3fc;
        puStack_18ea4 = auStack_18e10 + iVar6;
        pcStack_18ea8 = (char *)0xa;
        pcStack_18eac = acStack_18e52 + iVar6;
        pcStack_18eb0 = (char *)0x42;
        pcStack_18eb4 = acStack_18e70 + iVar6 + 4;
        uStack_18eb8 = 0x1a;
        pcStack_18ebc = acStack_18e70 + iVar6;
        pcStack_18ec0 = "dSSScc";
        uStack_18ec8 = *(undefined4 *)(param_1 + 0x48);
        puStack_18ecc = (undefined4 *)0x10419b2c;
        uStack_18ec4 = uVar2;
        pcStack_18e74 = pcStack_18ebc;
        uVar2 = thunk_FUN_104026b0();
        cVar4 = '\0';
        if ('\0' < acStack_18e05[iVar6]) {
          do {
            iVar3 = cVar4 * 0x4c + iVar6;
            puStack_18ea4 = auStack_18dfc + iVar3;
            pcStack_18ea8 = acStack_18e05 + iVar3 + 5;
            pcStack_18eac = acStack_18e05 + iVar3 + 2;
            pcStack_18eb0 = acStack_18e05 + iVar3 + 1;
            pcStack_18ebc = *(char **)(param_1 + 0x48);
            pcStack_18eb4 = "ccdcS";
            pcStack_18ec0 = (char *)0x10419b80;
            uStack_18eb8 = uVar2;
            uVar2 = thunk_FUN_104026b0();
            cVar4 = cVar4 + '\x01';
          } while (cVar4 < acStack_18e05[iVar6]);
        }
        pcVar1 = *(code **)(**(int **)(DAT_10b1f538 + 0x54) + 0x578);
        pcVar5 = pcStack_18e74;
        puVar7 = auStack_1929c;
        for (iVar6 = 0xff; iVar6 != 0; iVar6 = iVar6 + -1) {
          *puVar7 = *(undefined4 *)pcVar5;
          pcVar5 = pcVar5 + 4;
          puVar7 = puVar7 + 1;
        }
        (*pcVar1)(uStack_18e78,uStack_18e84);
        cStack_18e85 = cStack_18e85 + '\x01';
      } while (cStack_18e85 < (char)uStack_18e84);
    }
  }
  puStack_18ea4 = (undefined1 *)0x10419c47;
  FOutputDevice::Logf(*(FOutputDevice **)GNetworkLog_exref,
                      (ushort *)*(FOutputDevice **)GNetworkLog_exref);
  return extraout_EAX & 0xffffff00;
}


// ==== 10419ce0 FUN_10419ce0 depth=0 from=raiz callees=CORE.DLL::FOutputDevice::Logf@EXTERNAL:000000b4 thunk_FUN_104026b0@103034e5
// strings: 10887168=dddddddcdcdcdcdcdc | 10887298=(Receive)HennaUnequipInfoPacket | 

/* WARNING: Type propagation algorithm not settling */

uint FUN_10419ce0(int param_1,undefined4 param_2)

{
  code *pcVar1;
  uint extraout_EAX;
  int iVar2;
  undefined4 *puVar3;
  undefined4 **ppuVar4;
  undefined4 *apuStack_94 [4];
  undefined4 *puStack_84;
  undefined4 *puStack_80;
  undefined4 *puStack_7c;
  undefined4 *puStack_78;
  undefined4 *puStack_74;
  undefined4 *puStack_70;
  undefined4 *puStack_6c;
  undefined4 *puStack_68;
  undefined4 *puStack_64;
  undefined4 *puStack_60;
  undefined4 *puStack_5c;
  undefined4 *puStack_58;
  undefined4 *puStack_54;
  undefined4 *puStack_50;
  undefined4 local_44 [17];
  
  local_44[0] = 0;
  local_44[1] = 0;
  local_44[2] = 0;
  local_44[3] = 0;
  local_44[4] = 0;
  local_44[5] = 0;
  local_44[6] = 0;
  local_44[7] = 0;
  local_44[8] = 0;
  local_44[9] = 0;
  local_44[10] = 0;
  local_44[0xb] = 0;
  local_44[0xc] = 0;
  local_44[0xd] = 0;
  local_44[0xe] = 0;
  local_44[0xf] = 0;
  local_44[0x10] = 0;
  puStack_50 = local_44 + 0x10;
  puStack_54 = local_44 + 0xf;
  puStack_58 = local_44 + 0xe;
  puStack_5c = local_44 + 0xd;
  puStack_60 = local_44 + 0xc;
  puStack_64 = local_44 + 0xb;
  puStack_68 = local_44 + 10;
  puStack_6c = local_44 + 9;
  puStack_70 = local_44 + 8;
  puStack_74 = local_44 + 7;
  puStack_78 = local_44 + 6;
  puStack_7c = local_44 + 5;
  puStack_80 = &param_1;
  puStack_84 = local_44 + 4;
  apuStack_94[3] = local_44 + 3;
  apuStack_94[2] = local_44 + 2;
  apuStack_94[1] = local_44 + 1;
  apuStack_94[0] = local_44;
  thunk_FUN_104026b0(*(undefined4 *)(param_1 + 0x48),param_2,"dddddddcdcdcdcdcdc");
  pcVar1 = *(code **)(**(int **)(DAT_10b1f538 + 0x54) + 0x598);
  puStack_50 = (undefined4 *)param_1;
  puVar3 = local_44;
  ppuVar4 = apuStack_94;
  for (iVar2 = 0x11; iVar2 != 0; iVar2 = iVar2 + -1) {
    *ppuVar4 = (undefined4 *)*puVar3;
    puVar3 = puVar3 + 1;
    ppuVar4 = ppuVar4 + 1;
  }
  (*pcVar1)();
  FOutputDevice::Logf(*(FOutputDevice **)GNetworkLog_exref,
                      (ushort *)*(FOutputDevice **)GNetworkLog_exref);
  return extraout_EAX & 0xffffff00;
}


// ==== 10419e40 FUN_10419e40 depth=0 from=raiz callees=CORE.DLL::L2ParamStack::PushBack@EXTERNAL:00000136 CORE.DLL::L2ParamStack::~L2ParamStack@EXTERNAL:0000012a CORE.DLL::L2ParamStack::L2ParamStack@EXTERNAL:0000012b CORE.DLL::FOutputDevice::Logf@EXTERNAL:000000b4 thunk_FUN_104026b0@103034e5 CORE.DLL::FOutputDevice::Logf2@EXTERNAL:0000002e
// strings: 10887338=ManagePledgePowerPacket %d : %d | 108872e8=(Receive)ManagePledgePowerPacket | 

uint FUN_10419e40(uint param_1,undefined4 param_2)

{
  uint extraout_EAX;
  FOutputDevice *this;
  int iVar1;
  void *local_24;
  void *local_20;
  L2ParamStack local_1c [16];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1080f4a9;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  thunk_FUN_104026b0(*(undefined4 *)(param_1 + 0x48),param_2,&DAT_1087ff0c,&local_24,&local_20,
                     &param_1);
  L2ParamStack::L2ParamStack(local_1c,0x30);
  iVar1 = 0;
  local_4 = 0;
  L2ParamStack::PushBack(local_1c,local_24);
  L2ParamStack::PushBack(local_1c,local_20);
  do {
    L2ParamStack::PushBack(local_1c,(void *)(param_1 & 1));
    param_1 = param_1 >> 1;
    if (*(int *)GLog_exref != 0) {
      FOutputDevice::Logf2(this,*(ushort **)GLog_exref);
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 0x20);
  (**(code **)(**(int **)(DAT_10b1f538 + 0x54) + 0x638))(local_1c);
  FOutputDevice::Logf(*(FOutputDevice **)GNetworkLog_exref,
                      (ushort *)*(FOutputDevice **)GNetworkLog_exref);
  local_4 = 0xffffffff;
  L2ParamStack::~L2ParamStack(local_1c);
  ExceptionList = pvStack_c;
  return extraout_EAX & 0xffffff00;
}


// ==== 10419f90 FUN_10419f90 depth=0 from=raiz callees=CORE.DLL::L2ParamStack::PushBack@EXTERNAL:00000136 CORE.DLL::L2ParamStack::~L2ParamStack@EXTERNAL:0000012a CORE.DLL::L2ParamStack::L2ParamStack@EXTERNAL:0000012b CORE.DLL::FOutputDevice::Logf@EXTERNAL:000000b4 thunk_FUN_104026b0@103034e5
// strings: 10887384=(Receive)ClientSetTimePacket | 

uint FUN_10419f90(int param_1,undefined4 param_2)

{
  uint extraout_EAX;
  void *local_24;
  void *local_20;
  L2ParamStack local_1c [16];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1080f4c9;
  pvStack_c = ExceptionList;
  local_24 = (void *)0x0;
  local_20 = (void *)0x0;
  ExceptionList = &pvStack_c;
  thunk_FUN_104026b0(*(undefined4 *)(param_1 + 0x48),param_2,&DAT_1087ff44,&local_24,&local_20);
  L2ParamStack::L2ParamStack(local_1c,10);
  local_4 = 0;
  L2ParamStack::PushBack(local_1c,local_24);
  L2ParamStack::PushBack(local_1c,local_20);
  (**(code **)(**(int **)(DAT_10b1f538 + 0x54) + 0x690))(local_1c);
  FOutputDevice::Logf(*(FOutputDevice **)GNetworkLog_exref,
                      (ushort *)*(FOutputDevice **)GNetworkLog_exref);
  local_4 = 0xffffffff;
  L2ParamStack::~L2ParamStack(local_1c);
  ExceptionList = pvStack_c;
  return extraout_EAX & 0xffffff00;
}


// ==== 1041a090 FUN_1041a090 depth=0 from=raiz callees=CORE.DLL::L2ParamStack::PushBack@EXTERNAL:00000136 CORE.DLL::L2ParamStack::~L2ParamStack@EXTERNAL:0000012a FL2GameData::GetZoneName@1031509b CORE.DLL::L2ParamStack::L2ParamStack@EXTERNAL:0000012b CORE.DLL::FOutputDevice::Logf@EXTERNAL:000000b4 thunk_FUN_104026b0@103034e5 CORE.DLL::appStrcpy@EXTERNAL:0000012c
// strings: 

uint FUN_1041a090(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  ushort *puVar2;
  uint extraout_EAX;
  ushort local_674 [512];
  ushort local_274 [256];
  ushort *local_74;
  L2ParamStack local_68 [16];
  int local_58;
  void *local_54;
  int local_50;
  ushort *local_4c;
  int local_48;
  void *local_44;
  ushort *local_40;
  void *local_38;
  int local_34;
  L2ParamStack local_30 [16];
  void *local_20;
  void *local_1c;
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  puStack_c = &LAB_1080f4f2;
  local_10 = ExceptionList;
  local_14 = &stack0xfffff980;
  local_8 = 0;
  ExceptionList = &local_10;
  uVar1 = thunk_FUN_104026b0(*(undefined4 *)(param_1 + 0x48),param_2,&DAT_1087ff8c,&local_20);
  uVar1 = thunk_FUN_104026b0(*(undefined4 *)(param_1 + 0x48),uVar1,&DAT_1087ff8c,&local_48);
  FOutputDevice::Logf((FOutputDevice *)GNetworkLog_exref,*(ushort **)GNetworkLog_exref);
  local_18 = 0;
  do {
    if (local_48 <= local_18) {
      thunk_FUN_104026b0(*(undefined4 *)(param_1 + 0x48),uVar1,&DAT_1087ff44,&local_54);
      L2ParamStack::L2ParamStack(local_68,10);
      local_8._0_1_ = 2;
      L2ParamStack::PushBack(local_68,local_20);
      L2ParamStack::PushBack(local_68,local_54);
      L2ParamStack::PushBack(local_68,local_38);
      (**(code **)(*(int *)GL2Console + 0x660))();
      local_8 = (uint)local_8._1_3_ << 8;
      L2ParamStack::~L2ParamStack(local_68);
      ExceptionList = local_10;
      return extraout_EAX & 0xffffff00;
    }
    L2ParamStack::L2ParamStack(local_30,10);
    local_8 = CONCAT31(local_8._1_3_,1);
    uVar1 = thunk_FUN_104026b0(*(undefined4 *)(param_1 + 0x48),uVar1,&DAT_1087ff8c);
    L2ParamStack::PushBack(local_30,local_1c);
    switch(local_1c) {
    case (void *)0x0:
      uVar1 = thunk_FUN_104026b0(*(undefined4 *)(param_1 + 0x48),uVar1,&DAT_108847bc,0x400);
      puVar2 = local_674;
      break;
    case (void *)0x1:
    case (void *)0x2:
    case (void *)0x3:
    case (void *)0x5:
      uVar1 = thunk_FUN_104026b0(*(undefined4 *)(param_1 + 0x48),uVar1,&DAT_1087ff8c);
      puVar2 = local_4c;
      break;
    case (void *)0x4:
      uVar1 = thunk_FUN_104026b0(*(undefined4 *)(param_1 + 0x48),uVar1,&DAT_1087ff44,&local_44);
      L2ParamStack::PushBack(local_30,local_44);
      puVar2 = local_40;
      break;
    case (void *)0x6:
      uVar1 = thunk_FUN_104026b0(*(undefined4 *)(param_1 + 0x48),uVar1,&DAT_10886380);
      puVar2 = local_74;
      break;
    case (void *)0x7:
      uVar1 = thunk_FUN_104026b0(*(undefined4 *)(param_1 + 0x48),uVar1,&DAT_1087ff0c,&local_34,
                                 &local_58);
      puVar2 = FL2GameData::GetZoneName
                         (&GL2GameData,(float)local_34,(float)local_58,(float)local_50);
      appStrcpy(local_274,puVar2);
      puVar2 = local_274;
      break;
    default:
      goto switchD_1041a15d_default;
    }
    L2ParamStack::PushBack(local_30,puVar2);
switchD_1041a15d_default:
    (**(code **)(*(int *)GL2Console + 0x350))();
    local_8 = local_8 & 0xffffff00;
    L2ParamStack::~L2ParamStack(local_30);
    local_18 = local_18 + 1;
  } while( true );
}


// ==== 1041a410 FUN_1041a410 depth=0 from=raiz callees=CORE.DLL::L2ParamStack::PushBack@EXTERNAL:00000136 CORE.DLL::L2ParamStack::~L2ParamStack@EXTERNAL:0000012a CORE.DLL::L2ParamStack::L2ParamStack@EXTERNAL:0000012b thunk_FUN_104026b0@103034e5
// strings: 

uint FUN_1041a410(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  uint extraout_EAX;
  int iVar3;
  void *local_30;
  void *local_2c;
  void *local_28;
  void *local_24;
  void *local_20;
  L2ParamStack local_1c [12];
  void *pvStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  iVar1 = param_1;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1080f519;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  uVar2 = thunk_FUN_104026b0(*(undefined4 *)(param_1 + 0x48),param_2,&DAT_1087ff0c,&local_2c,
                             &local_28,&local_30);
  L2ParamStack::L2ParamStack(local_1c,(int)local_30 * 3 + 3);
  iVar3 = 0;
  local_4 = 0;
  L2ParamStack::PushBack(local_1c,local_2c);
  L2ParamStack::PushBack(local_1c,local_28);
  L2ParamStack::PushBack(local_1c,local_30);
  if (0 < (int)local_30) {
    do {
      uVar2 = thunk_FUN_104026b0(*(undefined4 *)(iVar1 + 0x48),uVar2,&DAT_1088545c,&local_24,
                                 &param_1,&local_20);
      L2ParamStack::PushBack(local_1c,local_24);
      L2ParamStack::PushBack(local_1c,(void *)(int)(short)param_1);
      L2ParamStack::PushBack(local_1c,local_20);
      iVar3 = iVar3 + 1;
    } while (iVar3 < (int)local_30);
  }
  (**(code **)(*(int *)GL2Console + 0x204))(local_1c);
  puStack_8 = (undefined1 *)0xffffffff;
  L2ParamStack::~L2ParamStack((L2ParamStack *)&local_20);
  ExceptionList = pvStack_10;
  return extraout_EAX & 0xffffff00;
}


// ==== 1041a570 FUN_1041a570 depth=0 from=raiz callees=CORE.DLL::FOutputDevice::Logf@EXTERNAL:000000b4 thunk_FUN_104026b0@103034e5
// strings: 108873f8=(Receive)PreviewList PreviewListNum:%d | 

uint FUN_1041a570(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  uint extraout_EAX;
  short sVar2;
  short unaff_DI;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined2 uStack_2c;
  undefined2 uStack_2a;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  int iStack_8;
  
  local_40 = 0;
  local_44 = 0;
  local_48 = 0;
  local_4c = 0;
  uVar1 = thunk_FUN_104026b0(*(undefined4 *)(param_1 + 0x48),param_2,&DAT_10887460,&local_40,
                             &local_44,&local_48,&local_4c);
  (**(code **)(**(int **)(DAT_10b1f538 + 0x54) + 0x220))(local_40,local_44,local_48);
  sVar2 = 0;
  if (0 < unaff_DI) {
    do {
      local_48 = CONCAT22(local_48._2_2_,0xffff);
      local_44 = 0;
      local_40 = 0;
      uStack_3c = 0;
      uStack_38 = 0;
      uStack_34 = 0;
      uStack_30 = 0;
      uStack_28 = 0;
      uStack_2c = 0;
      uStack_2a = 0;
      uStack_24 = 0;
      uStack_20 = 0;
      uStack_1c = 0xffffffff;
      uStack_18 = 0;
      uStack_14 = 0;
      uStack_10 = 0xffffffff;
      uVar1 = thunk_FUN_104026b0(*(undefined4 *)(iStack_8 + 0x48),uVar1,&DAT_10887458,&local_40,
                                 &local_48,&uStack_30,&uStack_38);
      (**(code **)(**(int **)(DAT_10b1f538 + 0x54) + 0x224))(&local_48);
      sVar2 = sVar2 + 1;
    } while (sVar2 < unaff_DI);
  }
  FOutputDevice::Logf((FOutputDevice *)GNetworkLog_exref,*(ushort **)GNetworkLog_exref);
  return extraout_EAX & 0xffffff00;
}


// ==== 1041a700 FUN_1041a700 depth=0 from=raiz callees=thunk_FUN_104026b0@103034e5
// strings: 10887468=dddddddddddddddd | 

uint FUN_1041a700(int param_1,undefined4 param_2)

{
  uint uVar1;
  undefined1 local_40 [4];
  undefined1 local_3c [4];
  undefined1 local_38 [4];
  undefined1 local_34 [4];
  undefined1 local_30 [4];
  undefined1 local_2c [4];
  undefined1 local_28 [4];
  undefined1 local_24 [4];
  undefined1 local_20 [4];
  undefined1 local_1c [4];
  undefined1 local_18 [4];
  undefined1 local_14 [4];
  undefined1 local_10 [4];
  undefined1 local_c [4];
  undefined1 local_8 [4];
  undefined1 local_4 [4];
  
  thunk_FUN_104026b0(*(undefined4 *)(param_1 + 0x48),param_2,"dddddddddddddddd",local_40,local_3c,
                     local_38,local_34,local_30,local_2c,local_28,local_24,local_20,local_1c,
                     local_18,local_14,local_10,local_c,local_8,local_4);
  uVar1 = (**(code **)(**(int **)(DAT_10b1f538 + 0x54) + 0x228))(local_40);
  return uVar1 & 0xffffff00;
}


// ==== 1041a880 FUN_1041a880 depth=0 from=raiz callees=CORE.DLL::L2ParamStack::PushBack@EXTERNAL:00000136 CORE.DLL::L2ParamStack::~L2ParamStack@EXTERNAL:0000012a CORE.DLL::L2ParamStack::L2ParamStack@EXTERNAL:0000012b CORE.DLL::FOutputDevice::Logf@EXTERNAL:000000b4 thunk_FUN_104026b0@103034e5
// strings: 108874cc=ddddddd | 10887480=(Receive)EtcStatusUpdatePacket  | 

uint FUN_1041a880(int param_1,undefined4 param_2)

{
  uint extraout_EAX;
  void *pvVar1;
  void *pvStack_38;
  void *pvStack_34;
  void *pvStack_30;
  int iStack_2c;
  int iStack_28;
  int iStack_24;
  int iStack_20;
  L2ParamStack aLStack_1c [16];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_1080f539;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  (**(code **)(**(int **)(DAT_10b1f538 + 0x54) + 0x424))();
  pvStack_34 = (void *)0x0;
  pvStack_30 = (void *)0x0;
  iStack_2c = 0;
  iStack_28 = 0;
  iStack_24 = 0;
  iStack_20 = 0;
  pvStack_38 = (void *)0x0;
  thunk_FUN_104026b0(*(undefined4 *)(param_1 + 0x48),param_2,"ddddddd",&pvStack_34,&pvStack_30,
                     &iStack_2c,&iStack_28,&iStack_24,&iStack_20,&pvStack_38);
  pvVar1 = (void *)(uint)(0 < (int)pvStack_38);
  if (0 < (int)pvStack_34) {
    pvVar1 = (void *)((int)pvVar1 + 1);
  }
  if (0 < (int)pvStack_30) {
    pvVar1 = (void *)((int)pvVar1 + 1);
  }
  if (0 < iStack_2c) {
    pvVar1 = (void *)((int)pvVar1 + 1);
  }
  if (0 < iStack_28) {
    pvVar1 = (void *)((int)pvVar1 + 1);
  }
  if (0 < iStack_24) {
    pvVar1 = (void *)((int)pvVar1 + 1);
  }
  if (0 < iStack_20) {
    pvVar1 = (void *)((int)pvVar1 + 1);
  }
  L2ParamStack::L2ParamStack(aLStack_1c,0xc);
  uStack_4 = 0;
  L2ParamStack::PushBack(aLStack_1c,pvVar1);
  if (0 < (int)pvStack_38) {
    L2ParamStack::PushBack(aLStack_1c,(void *)0x13d4);
    L2ParamStack::PushBack(aLStack_1c,pvStack_38);
  }
  if (0 < (int)pvStack_34) {
    L2ParamStack::PushBack(aLStack_1c,(void *)0x10af);
    L2ParamStack::PushBack(aLStack_1c,pvStack_34);
  }
  if (0 < (int)pvStack_30) {
    L2ParamStack::PushBack(aLStack_1c,(void *)0x10ae);
    L2ParamStack::PushBack(aLStack_1c,pvStack_30);
  }
  if (0 < iStack_2c) {
    L2ParamStack::PushBack(aLStack_1c,(void *)0x10ad);
    L2ParamStack::PushBack(aLStack_1c,(void *)0x1);
  }
  if (0 < iStack_28) {
    L2ParamStack::PushBack(aLStack_1c,(void *)0x10ac);
    L2ParamStack::PushBack(aLStack_1c,(void *)0x1);
  }
  if (0 < iStack_24) {
    L2ParamStack::PushBack(aLStack_1c,(void *)0x10ab);
    L2ParamStack::PushBack(aLStack_1c,(void *)0x1);
  }
  if (0 < iStack_20) {
    L2ParamStack::PushBack(aLStack_1c,(void *)0x13b1);
    L2ParamStack::PushBack(aLStack_1c,(void *)0x1);
  }
  (**(code **)(**(int **)(DAT_10b1f538 + 0x54) + 0x428))(aLStack_1c);
  FOutputDevice::Logf((FOutputDevice *)GNetworkLog_exref,*(ushort **)GNetworkLog_exref);
  uStack_4 = 0xffffffff;
  L2ParamStack::~L2ParamStack(aLStack_1c);
  ExceptionList = pvStack_c;
  return extraout_EAX & 0xffffff00;
}


// ==== 1041aaf0 FUN_1041aaf0 depth=0 from=raiz callees=CORE.DLL::L2ParamStack::PushBack@EXTERNAL:00000136 CORE.DLL::L2ParamStack::~L2ParamStack@EXTERNAL:0000012a CORE.DLL::L2ParamStack::L2ParamStack@EXTERNAL:0000012b CORE.DLL::FOutputDevice::Logf@EXTERNAL:000000b4 thunk_FUN_104026b0@103034e5
// strings: 108874d8=(Receive)ShortBuffStatusUpdatePacket  | 

uint FUN_1041aaf0(int param_1,undefined4 param_2)

{
  uint extraout_EAX;
  void *pvStack_28;
  void *pvStack_24;
  void *pvStack_20;
  L2ParamStack aLStack_1c [16];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_1080f559;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  (**(code **)(**(int **)(DAT_10b1f538 + 0x54) + 0x42c))();
  pvStack_28 = (void *)0x0;
  pvStack_24 = (void *)0x0;
  pvStack_20 = (void *)0x0;
  thunk_FUN_104026b0(*(undefined4 *)(param_1 + 0x48),param_2,&DAT_1087ff0c,&pvStack_28,&pvStack_24,
                     &pvStack_20);
  L2ParamStack::L2ParamStack(aLStack_1c,10);
  uStack_4 = 0;
  L2ParamStack::PushBack(aLStack_1c,(void *)0x1);
  L2ParamStack::PushBack(aLStack_1c,pvStack_28);
  L2ParamStack::PushBack(aLStack_1c,pvStack_24);
  L2ParamStack::PushBack(aLStack_1c,pvStack_20);
  (**(code **)(**(int **)(DAT_10b1f538 + 0x54) + 0x430))(aLStack_1c);
  FOutputDevice::Logf(*(FOutputDevice **)GNetworkLog_exref,
                      (ushort *)*(FOutputDevice **)GNetworkLog_exref);
  uStack_4 = 0xffffffff;
  L2ParamStack::~L2ParamStack(aLStack_1c);
  ExceptionList = pvStack_c;
  return extraout_EAX & 0xffffff00;
}


// ==== 1041b440 FUN_1041b440 depth=0 from=raiz callees=CORE.DLL::FOutputDevice::Logf@EXTERNAL:000000b4 thunk_FUN_104026b0@103034e5 UGameEngine::OnGameGuardQuery@10310f28
// strings: 10887614=(Receive)GameGuardQueryPacket | 

uint FUN_1041b440(ulong param_1,undefined4 param_2)

{
  uint extraout_EAX;
  ulong local_c;
  ulong local_8;
  ulong local_4;
  
  thunk_FUN_104026b0(*(undefined4 *)(param_1 + 0x48),param_2,&DAT_108810b0,&local_4,&local_8,
                     &local_c,&param_1);
  UGameEngine::OnGameGuardQuery
            (*(UGameEngine **)(DAT_10b1f538 + 0x54),local_4,local_8,local_c,param_1,0);
  FOutputDevice::Logf(*(FOutputDevice **)GNetworkLog_exref,
                      (ushort *)*(FOutputDevice **)GNetworkLog_exref);
  return extraout_EAX & 0xffffff00;
}


// ==== 1041b5d0 FUN_1041b5d0 depth=0 from=raiz callees=CORE.DLL::FOutputDevice::Logf@EXTERNAL:000000b4 thunk_FUN_104026b0@103034e5
// strings: 108876e4=ddSdd | 108876a8=(Receive)L2FriendPacket | 

uint FUN_1041b5d0(int param_1,undefined4 param_2)

{
  uint extraout_EAX;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined1 local_30 [48];
  
  thunk_FUN_104026b0(*(undefined4 *)(param_1 + 0x48),param_2,"ddSdd",&local_34,&local_38,0x30,
                     local_30,&local_3c,&param_1);
  (**(code **)(**(int **)(DAT_10b1f538 + 0x54) + 0x6b0))
            (local_34,local_38,local_30,local_3c,param_1);
  FOutputDevice::Logf((FOutputDevice *)GNetworkLog_exref,*(ushort **)GNetworkLog_exref);
  return extraout_EAX & 0xffffff00;
}


// ==== 1041b670 FUN_1041b670 depth=0 from=raiz callees=CORE.DLL::FOutputDevice::Logf@EXTERNAL:000000b4 thunk_FUN_104026b0@103034e5
// strings: 108876ec=(Receive)L2FriendStatusPacket | 

uint FUN_1041b670(int param_1,undefined4 param_2)

{
  uint extraout_EAX;
  undefined4 local_34;
  undefined1 local_30 [48];
  
  thunk_FUN_104026b0(*(undefined4 *)(param_1 + 0x48),param_2,&DAT_10885760,&local_34,0x30,local_30,
                     &param_1);
  (**(code **)(**(int **)(DAT_10b1f538 + 0x54) + 0x6b4))(local_34,local_30,param_1);
  FOutputDevice::Logf(*(FOutputDevice **)GNetworkLog_exref,
                      (ushort *)*(FOutputDevice **)GNetworkLog_exref);
  return extraout_EAX & 0xffffff00;
}


// ==== 1041b7b0 FUN_1041b7b0 depth=0 from=raiz callees=CORE.DLL::FOutputDevice::Logf@EXTERNAL:000000b4 thunk_FUN_104026b0@103034e5
// strings: 10887774=(Receive)ExRegenMaxPacket | 

uint FUN_1041b7b0(int param_1,undefined4 param_2)

{
  uint extraout_EAX;
  undefined4 local_10;
  undefined4 local_c;
  undefined8 local_8;
  
  thunk_FUN_104026b0(*(undefined4 *)(param_1 + 0x48),param_2,&DAT_108877b4,&local_c,&local_10,
                     &param_1,&local_8);
  (**(code **)(**(int **)(DAT_10b1f538 + 0x54) + 0x6bc))(local_c,local_10,param_1,local_8);
  FOutputDevice::Logf(*(FOutputDevice **)GNetworkLog_exref,
                      (ushort *)*(FOutputDevice **)GNetworkLog_exref);
  return extraout_EAX & 0xffffff00;
}


// ==== 1041b850 FUN_1041b850 depth=0 from=raiz callees=thunk_FUN_104026b0@103034e5 CORE.DLL::FString::FString@EXTERNAL:000000cc
// strings: 108877f4=dccSSddd | 

uint FUN_1041b850(int param_1,undefined4 param_2)

{
  uint uVar1;
  undefined4 *puStack_46c;
  undefined4 *puStack_468;
  ushort *puStack_460;
  undefined4 uStack_45c;
  ushort *puStack_458;
  undefined4 *puStack_454;
  undefined4 *puStack_450;
  undefined4 *puStack_44c;
  ushort local_43c [256];
  ushort local_23c [256];
  undefined1 *local_3c;
  undefined1 *local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20 [2];
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_1080f5a2;
  local_10 = ExceptionList;
  local_14 = &stack0xfffffbb8;
  local_8 = 0;
  puStack_44c = &local_28;
  puStack_450 = local_20;
  puStack_454 = &local_30;
  puStack_458 = local_23c;
  uStack_45c = 0x200;
  puStack_460 = local_43c;
  puStack_468 = &local_2c;
  puStack_46c = &local_24;
  ExceptionList = &local_10;
  thunk_FUN_104026b0(*(undefined4 *)(param_1 + 0x48),param_2,"dccSSddd",&local_18);
  puStack_44c = (undefined4 *)local_28;
  puStack_450 = (undefined4 *)local_20[0];
  puStack_454 = (undefined4 *)local_30;
  local_34 = (undefined1 *)&puStack_460;
  puStack_468 = (undefined4 *)0x1041b8e4;
  FString::FString((FString *)&puStack_460,local_23c);
  local_8._0_1_ = 1;
  local_3c = (undefined1 *)&puStack_46c;
  FString::FString((FString *)&puStack_46c,local_43c);
  local_8 = (uint)local_8._1_3_ << 8;
  uVar1 = (**(code **)(**(int **)(DAT_10b1f538 + 0x54) + 0x6c0))(local_18,local_24,local_2c);
  ExceptionList = local_10;
  return uVar1 & 0xffffff00;
}


// ==== 1041b9b0 FUN_1041b9b0 depth=0 from=raiz callees=thunk_FUN_104026b0@103034e5 CORE.DLL::FString::FString@EXTERNAL:000000cc
// strings: 

uint FUN_1041b9b0(int param_1,undefined4 param_2)

{
  uint uVar1;
  undefined4 *puStack_440;
  undefined4 uStack_43c;
  ushort *puStack_438;
  ushort local_428 [516];
  undefined1 *local_20;
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  puStack_c = &LAB_1080f5c9;
  local_10 = ExceptionList;
  local_14 = &stack0xfffffbcc;
  local_8 = 0;
  puStack_438 = local_428;
  uStack_43c = 0x400;
  puStack_440 = &local_18;
  ExceptionList = &local_10;
  thunk_FUN_104026b0(*(undefined4 *)(param_1 + 0x48),param_2,&DAT_1087f8a0);
  local_20 = (undefined1 *)&puStack_440;
  FString::FString((FString *)&puStack_440,local_428);
  local_8 = local_8 & 0xffffff00;
  uVar1 = (**(code **)(**(int **)(DAT_10b1f538 + 0x54) + 0x6c4))(local_18);
  ExceptionList = local_10;
  return uVar1 & 0xffffff00;
}


// ==== 1041bab0 FUN_1041bab0 depth=0 from=raiz callees=thunk_FUN_104026b0@103034e5
// strings: 

uint FUN_1041bab0(int param_1,undefined4 param_2)

{
  uint uVar1;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1080f5e0;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffcc;
  local_8 = 0;
  ExceptionList = &local_10;
  thunk_FUN_104026b0(*(undefined4 *)(param_1 + 0x48),param_2,&DAT_1087ff0c,&local_20,&local_1c,
                     &local_18);
  uVar1 = (**(code **)(**(int **)(DAT_10b1f538 + 0x54) + 0x6c8))(local_20,local_1c,local_18);
  ExceptionList = local_10;
  return uVar1 & 0xffffff00;
}


// ==== 1041bb90 FUN_1041bb90 depth=0 from=raiz callees=CORE.DLL::FOutputDevice::Logf@EXTERNAL:000000b4 thunk_FUN_104026b0@103034e5 CORE.DLL::FString::FString@EXTERNAL:000000cc
// strings: 10887900=dSdddddddddd | 108878a8=(Receive)ExEventMatchTeamInfoPacket | 

uint FUN_1041bb90(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  uint extraout_EAX;
  int iVar3;
  undefined4 *puStack_d8;
  undefined4 uStack_d4;
  ushort *puStack_d0;
  undefined4 *puStack_cc;
  undefined4 *puStack_c8;
  undefined4 *puStack_c4;
  undefined4 *puStack_c0;
  undefined4 *puStack_bc;
  undefined4 *puStack_b8;
  undefined4 *puStack_b4;
  undefined4 *puStack_b0;
  ushort local_8c [26];
  undefined1 *local_58;
  int local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30 [4];
  char local_20;
  undefined4 local_1c;
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  puStack_c = &LAB_1080f5f9;
  local_10 = ExceptionList;
  local_14 = &stack0xffffff68;
  local_8 = 0;
  puStack_b0 = *(undefined4 **)(param_1 + 0x48);
  puStack_b4 = (undefined4 *)0x1041bbd7;
  ExceptionList = &local_10;
  uVar1 = thunk_FUN_104026b0();
  (**(code **)(*(int *)DAT_10b1f538[0x15] + 0x6cc))();
  for (iVar3 = 0; local_50 = iVar3, iVar3 < local_18; iVar3 = iVar3 + 1) {
    puStack_b0 = local_30;
    puStack_b4 = &local_34;
    puStack_b8 = &local_38;
    puStack_bc = &local_3c;
    puStack_c0 = &local_40;
    puStack_c4 = &local_44;
    puStack_c8 = &local_48;
    puStack_cc = &local_4c;
    puStack_d0 = local_8c;
    uStack_d4 = 0x30;
    puStack_d8 = &local_1c;
    uVar1 = thunk_FUN_104026b0(*(undefined4 *)(param_1 + 0x48),uVar1,"dSdddddddddd");
    puStack_b0 = (undefined4 *)local_30[0];
    puStack_b4 = (undefined4 *)local_34;
    puStack_b8 = (undefined4 *)local_38;
    puStack_bc = (undefined4 *)local_3c;
    puStack_c0 = (undefined4 *)local_40;
    puStack_c4 = (undefined4 *)local_44;
    puStack_c8 = (undefined4 *)local_48;
    puStack_cc = (undefined4 *)local_4c;
    local_58 = (undefined1 *)&puStack_d8;
    FString::FString((FString *)&puStack_d8,local_8c);
    local_8 = local_8 & 0xffffff00;
    (**(code **)(*(int *)DAT_10b1f538[0x15] + 0x6d0))(iVar3,local_1c);
    iVar2 = (**(code **)(*DAT_10b1f538 + 0x94))(local_1c);
    if ((iVar2 != 0) && (*(int *)(iVar2 + 0x204) != 0)) {
      *(int *)(*(int *)(iVar2 + 0x204) + 0x1864) = (int)local_20;
      *(int *)(*(int *)(iVar2 + 0x204) + 0x1868) = iVar3;
    }
  }
  (**(code **)(*(int *)DAT_10b1f538[0x15] + 0x6d4))();
  puStack_b0 = (undefined4 *)0x1041bd1a;
  FOutputDevice::Logf((FOutputDevice *)GNetworkLog_exref,*(ushort **)GNetworkLog_exref);
  ExceptionList = local_10;
  return extraout_EAX & 0xffffff00;
}


// ==== 1041bde0 FUN_1041bde0 depth=0 from=raiz callees=CORE.DLL::FOutputDevice::Logf@EXTERNAL:000000b4 thunk_FUN_104026b0@103034e5
// strings: 10887950=(Receive)ExEventMatchCreatePacket | 

uint FUN_1041bde0(int param_1,undefined4 param_2)

{
  uint extraout_EAX;
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1080f610;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffd4;
  local_8 = 0;
  ExceptionList = &local_10;
  thunk_FUN_104026b0(*(undefined4 *)(param_1 + 0x48),param_2,&DAT_1087ff8c,&local_18);
  (**(code **)(**(int **)(DAT_10b1f538 + 0x54) + 0x6d8))(local_18);
  FOutputDevice::Logf(*(FOutputDevice **)GNetworkLog_exref,
                      (ushort *)*(FOutputDevice **)GNetworkLog_exref);
  ExceptionList = local_10;
  return extraout_EAX & 0xffffff00;
}


// ==== 1041bed0 FUN_1041bed0 depth=0 from=raiz callees=thunk_FUN_104026b0@103034e5 CORE.DLL::FString::FString@EXTERNAL:000000cc
// strings: 10886274=dSdddddddd | 

uint FUN_1041bed0(int param_1,undefined4 param_2)

{
  uint uVar1;
  undefined4 *puStack_ac;
  undefined4 uStack_a8;
  ushort *puStack_a4;
  undefined4 *puStack_a0;
  undefined4 *puStack_9c;
  undefined4 *puStack_98;
  undefined4 *puStack_94;
  undefined4 *puStack_90;
  undefined4 *puStack_8c;
  undefined4 *puStack_88;
  undefined4 *puStack_84;
  ushort local_74 [26];
  undefined1 *local_40;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  puStack_c = &LAB_1080f629;
  local_10 = ExceptionList;
  local_14 = &stack0xffffff80;
  local_8 = 0;
  puStack_84 = &local_18;
  puStack_88 = &local_1c;
  puStack_8c = &local_20;
  puStack_90 = &local_24;
  puStack_94 = &local_28;
  puStack_98 = &local_2c;
  puStack_9c = &local_30;
  puStack_a0 = &local_34;
  puStack_a4 = local_74;
  uStack_a8 = 0x30;
  puStack_ac = &local_38;
  ExceptionList = &local_10;
  thunk_FUN_104026b0(*(undefined4 *)(param_1 + 0x48),param_2,"dSdddddddd");
  puStack_84 = (undefined4 *)local_18;
  puStack_88 = (undefined4 *)local_1c;
  puStack_8c = (undefined4 *)local_20;
  puStack_90 = (undefined4 *)local_24;
  puStack_94 = (undefined4 *)local_28;
  puStack_98 = (undefined4 *)local_2c;
  puStack_9c = (undefined4 *)local_30;
  puStack_a0 = (undefined4 *)local_34;
  local_40 = (undefined1 *)&puStack_ac;
  FString::FString((FString *)&puStack_ac,local_74);
  local_8 = local_8 & 0xffffff00;
  uVar1 = (**(code **)(**(int **)(DAT_10b1f538 + 0x54) + 0x6dc))(local_38);
  ExceptionList = local_10;
  return uVar1 & 0xffffff00;
}


// ==== 1041c010 FUN_1041c010 depth=0 from=raiz callees=CORE.DLL::FOutputDevice::Logf@EXTERNAL:000000b4 thunk_FUN_104026b0@103034e5
// strings: 108878a8=(Receive)ExEventMatchTeamInfoPacket | 

uint FUN_1041c010(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  uint extraout_EAX;
  int iVar2;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1080f640;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffbc;
  local_8 = 0;
  ExceptionList = &local_10;
  uVar1 = thunk_FUN_104026b0(*(undefined4 *)(param_1 + 0x48),param_2,&DAT_1087ff0c,&local_20,
                             &local_1c,&local_18);
  (**(code **)(**(int **)(DAT_10b1f538 + 0x54) + 0x6e0))(local_20,local_1c,local_18);
  for (iVar2 = 0; iVar2 < local_18; iVar2 = iVar2 + 1) {
    uVar1 = thunk_FUN_104026b0(*(undefined4 *)(param_1 + 0x48),uVar1,&DAT_1088545c,&local_2c,
                               &local_28,&local_24);
    (**(code **)(**(int **)(DAT_10b1f538 + 0x54) + 0x6e4))(iVar2,local_2c,local_28,local_24);
  }
  (**(code **)(**(int **)(DAT_10b1f538 + 0x54) + 0x6e8))();
  FOutputDevice::Logf((FOutputDevice *)GNetworkLog_exref,*(ushort **)GNetworkLog_exref);
  ExceptionList = local_10;
  return extraout_EAX & 0xffffff00;
}


// ==== 1041c190 FUN_1041c190 depth=0 from=raiz callees=thunk_FUN_104026b0@103034e5
// strings: 

uint FUN_1041c190(int param_1,undefined4 param_2)

{
  uint uVar1;
  undefined4 local_1c;
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1080f650;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffd0;
  local_8 = 0;
  ExceptionList = &local_10;
  thunk_FUN_104026b0(*(undefined4 *)(param_1 + 0x48),param_2,&DAT_10883f30,&local_1c,&local_18);
  uVar1 = (**(code **)(**(int **)(DAT_10b1f538 + 0x54) + 0x6ec))(local_1c,local_18);
  ExceptionList = local_10;
  return uVar1 & 0xffffff00;
}


// ==== 1041c260 FUN_1041c260 depth=0 from=raiz callees=CORE.DLL::L2ParamStack::PushBack@EXTERNAL:00000136 CORE.DLL::L2ParamStack::~L2ParamStack@EXTERNAL:0000012a CORE.DLL::L2ParamStack::L2ParamStack@EXTERNAL:0000012b CORE.DLL::FOutputDevice::Logf@EXTERNAL:000000b4 thunk_FUN_104026b0@103034e5
// strings: 10887b08=dSdddd | 10887ab8=(Receive)ExPartyRoomMemberPacket | 

uint FUN_1041c260(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  uint extraout_EAX;
  undefined1 local_c50 [3080];
  void *local_48;
  void *local_44;
  void *local_40;
  void *local_3c [2];
  void *local_34;
  void *local_30;
  L2ParamStack local_2c [16];
  void *local_1c;
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  puStack_c = &LAB_1080f669;
  local_10 = ExceptionList;
  local_14 = &stack0xfffff3a4;
  local_8 = 0;
  ExceptionList = &local_10;
  L2ParamStack::L2ParamStack(local_2c,100);
  local_8 = CONCAT31(local_8._1_3_,1);
  uVar1 = thunk_FUN_104026b0(*(undefined4 *)(param_1 + 0x48),param_2,&DAT_1087ff44,local_3c,
                             &local_1c);
  L2ParamStack::PushBack(local_2c,local_3c[0]);
  L2ParamStack::PushBack(local_2c,local_1c);
  for (local_18 = 0; local_18 < (int)local_1c; local_18 = local_18 + 1) {
    iVar2 = local_18 * 0x100;
    uVar1 = thunk_FUN_104026b0(*(undefined4 *)(param_1 + 0x48),uVar1,"dSdddd",&local_44,0x80,
                               local_c50 + iVar2,&local_48,&local_30,&local_40,&local_34);
    L2ParamStack::PushBack(local_2c,local_44);
    L2ParamStack::PushBack(local_2c,local_c50 + iVar2);
    L2ParamStack::PushBack(local_2c,local_48);
    L2ParamStack::PushBack(local_2c,local_30);
    L2ParamStack::PushBack(local_2c,local_40);
    L2ParamStack::PushBack(local_2c,local_34);
  }
  (**(code **)(**(int **)(DAT_10b1f538 + 0x54) + 0x704))(local_2c);
  FOutputDevice::Logf(*(FOutputDevice **)GNetworkLog_exref,
                      (ushort *)*(FOutputDevice **)GNetworkLog_exref);
  local_8 = local_8 & 0xffffff00;
  L2ParamStack::~L2ParamStack(local_2c);
  ExceptionList = local_10;
  return extraout_EAX & 0xffffff00;
}


// ==== 1041c440 FUN_1041c440 depth=0 from=raiz callees=CORE.DLL::L2ParamStack::PushBack@EXTERNAL:00000136 CORE.DLL::L2ParamStack::~L2ParamStack@EXTERNAL:0000012a CORE.DLL::L2ParamStack::L2ParamStack@EXTERNAL:0000012b CORE.DLL::FOutputDevice::Logf@EXTERNAL:000000b4 thunk_FUN_104026b0@103034e5
// strings: 10887bb8=ddSdddd | 10887b58=(Receive)ExManagePartyRoomMemberPacket | 

uint FUN_1041c440(int param_1,undefined4 param_2)

{
  uint extraout_EAX;
  undefined1 local_248 [520];
  void *local_40;
  void *local_3c;
  void *local_38;
  void *local_34 [2];
  void *local_2c;
  void *local_28;
  L2ParamStack local_24 [16];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_1080f689;
  local_10 = ExceptionList;
  local_14 = &stack0xfffffdac;
  local_8 = 0;
  ExceptionList = &local_10;
  thunk_FUN_104026b0(*(undefined4 *)(param_1 + 0x48),param_2,"ddSdddd",&local_38,&local_3c,0x200,
                     local_248,&local_40,local_34,&local_28,&local_2c);
  L2ParamStack::L2ParamStack(local_24,10);
  local_8._0_1_ = 1;
  L2ParamStack::PushBack(local_24,local_38);
  L2ParamStack::PushBack(local_24,local_3c);
  L2ParamStack::PushBack(local_24,local_248);
  L2ParamStack::PushBack(local_24,local_40);
  L2ParamStack::PushBack(local_24,local_34[0]);
  L2ParamStack::PushBack(local_24,local_28);
  L2ParamStack::PushBack(local_24,local_2c);
  (**(code **)(**(int **)(DAT_10b1f538 + 0x54) + 0x70c))(local_24);
  FOutputDevice::Logf((FOutputDevice *)GNetworkLog_exref,*(ushort **)GNetworkLog_exref);
  local_8 = (uint)local_8._1_3_ << 8;
  L2ParamStack::~L2ParamStack(local_24);
  ExceptionList = local_10;
  return extraout_EAX & 0xffffff00;
}


// ==== 1041c5d0 FUN_1041c5d0 depth=0 from=raiz callees=CORE.DLL::L2ParamStack::PushBack@EXTERNAL:00000136 CORE.DLL::L2ParamStack::~L2ParamStack@EXTERNAL:0000012a CORE.DLL::L2ParamStack::L2ParamStack@EXTERNAL:0000012b CORE.DLL::FOutputDevice::Logf@EXTERNAL:000000b4 thunk_FUN_104026b0@103034e5
// strings: 10887be8=(Receive)ExAutoSoulShot | 

uint FUN_1041c5d0(int param_1,undefined4 param_2)

{
  uint extraout_EAX;
  L2ParamStack local_34 [24];
  void *local_1c;
  void *local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_1080f6a9;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffc0;
  local_8 = 0;
  ExceptionList = &local_10;
  thunk_FUN_104026b0(*(undefined4 *)(param_1 + 0x48),param_2,&DAT_1087ff44,&local_18,&local_1c);
  L2ParamStack::L2ParamStack(local_34,10);
  local_8._0_1_ = 1;
  L2ParamStack::PushBack(local_34,local_18);
  L2ParamStack::PushBack(local_34,local_1c);
  (**(code **)(**(int **)(DAT_10b1f538 + 0x54) + 0x714))(local_34);
  FOutputDevice::Logf(*(FOutputDevice **)GNetworkLog_exref,
                      (ushort *)*(FOutputDevice **)GNetworkLog_exref);
  local_8 = (uint)local_8._1_3_ << 8;
  L2ParamStack::~L2ParamStack(local_34);
  ExceptionList = local_10;
  return extraout_EAX & 0xffffff00;
}


// ==== 1041c700 FUN_1041c700 depth=0 from=raiz callees=CORE.DLL::L2ParamStack::PushBack@EXTERNAL:00000136 CORE.DLL::L2ParamStack::~L2ParamStack@EXTERNAL:0000012a CORE.DLL::L2ParamStack::L2ParamStack@EXTERNAL:0000012b CORE.DLL::FOutputDevice::Logf@EXTERNAL:000000b4 thunk_FUN_104026b0@103034e5
// strings: 10887c60=(Receive)ExEnchantSkillListPacket | 

uint FUN_1041c700(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  uint extraout_EAX;
  L2ParamStack local_58 [16];
  L2ParamStack local_48 [16];
  void *local_38;
  undefined4 local_34;
  void *local_28;
  void *local_24;
  void *local_20;
  int local_1c;
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  puStack_c = &LAB_1080f6d2;
  local_10 = ExceptionList;
  local_14 = &stack0xffffff9c;
  local_8 = 0;
  local_1c = 0;
  ExceptionList = &local_10;
  uVar1 = thunk_FUN_104026b0(*(undefined4 *)(param_1 + 0x48),param_2,&DAT_1087ff8c,&local_1c);
  L2ParamStack::L2ParamStack(local_58,10);
  local_8 = CONCAT31(local_8._1_3_,1);
  L2ParamStack::PushBack(local_58,(void *)0x3);
  (**(code **)(**(int **)(DAT_10b1f538 + 0x54) + 0x488))(local_58);
  for (local_18 = 0; local_18 < local_1c; local_18 = local_18 + 1) {
    local_28 = (void *)0xffffffff;
    local_38 = (void *)0xffffffff;
    local_34 = 0xffffffff;
    local_24 = (void *)0xffffffff;
    local_20 = (void *)0xffffffff;
    uVar1 = thunk_FUN_104026b0(*(undefined4 *)(param_1 + 0x48),uVar1,&DAT_10887cb4,&local_20,
                               &local_24,&local_28,&local_38);
    L2ParamStack::L2ParamStack(local_48,10);
    local_8._0_1_ = 2;
    L2ParamStack::PushBack(local_48,(void *)0x1);
    L2ParamStack::PushBack(local_48,local_20);
    L2ParamStack::PushBack(local_48,local_24);
    L2ParamStack::PushBack(local_48,local_28);
    L2ParamStack::PushBack(local_48,local_38);
    (**(code **)(**(int **)(DAT_10b1f538 + 0x54) + 0x490))(local_48);
    local_8 = CONCAT31(local_8._1_3_,1);
    L2ParamStack::~L2ParamStack(local_48);
  }
  FOutputDevice::Logf((FOutputDevice *)GNetworkLog_exref,*(ushort **)GNetworkLog_exref);
  local_8 = local_8 & 0xffffff00;
  L2ParamStack::~L2ParamStack(local_58);
  ExceptionList = local_10;
  return extraout_EAX & 0xffffff00;
}


// ==== 1041c900 FUN_1041c900 depth=0 from=raiz callees=CORE.DLL::L2ParamStack::PushBack@EXTERNAL:00000136 CORE.DLL::L2ParamStack::~L2ParamStack@EXTERNAL:0000012a CORE.DLL::L2ParamStack::L2ParamStack@EXTERNAL:0000012b CORE.DLL::FOutputDevice::Logf@EXTERNAL:000000b4 thunk_FUN_104026b0@103034e5
// strings: 10887d4c=dddQd | 10887cf8=(Receive)ExEnchantSkillInfoPacket | 

uint FUN_1041c900(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  uint extraout_EAX;
  L2ParamStack local_6c [16];
  L2ParamStack local_5c [16];
  void *local_4c;
  undefined4 local_48;
  void *local_3c;
  void *local_38;
  void *local_34;
  void *local_30;
  int local_2c;
  void *local_28;
  void *local_24;
  void *local_20;
  void *local_1c;
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  puStack_c = &LAB_1080f702;
  local_10 = ExceptionList;
  local_14 = &stack0xffffff88;
  local_8 = 0;
  local_28 = (void *)0xffffffff;
  local_4c = (void *)0xffffffff;
  local_48 = 0xffffffff;
  local_24 = (void *)0xffffffff;
  local_20 = (void *)0xffffffff;
  local_1c = (void *)0xffffffff;
  ExceptionList = &local_10;
  uVar1 = thunk_FUN_104026b0(*(undefined4 *)(param_1 + 0x48),param_2,"dddQd",&local_1c,&local_20,
                             &local_24,&local_4c,&local_28);
  L2ParamStack::L2ParamStack(local_5c,10);
  local_8 = CONCAT31(local_8._1_3_,1);
  L2ParamStack::PushBack(local_5c,(void *)0x1);
  L2ParamStack::PushBack(local_5c,local_1c);
  L2ParamStack::PushBack(local_5c,local_20);
  L2ParamStack::PushBack(local_5c,local_24);
  L2ParamStack::PushBack(local_5c,local_4c);
  L2ParamStack::PushBack(local_5c,local_28);
  L2ParamStack::PushBack(local_5c,(void *)0x3);
  local_2c = 0;
  uVar1 = thunk_FUN_104026b0(*(undefined4 *)(param_1 + 0x48),uVar1,&DAT_1087ff8c,&local_2c);
  (**(code **)(**(int **)(DAT_10b1f538 + 0x54) + 0x48c))(local_5c);
  for (local_18 = 0; local_18 < local_2c; local_18 = local_18 + 1) {
    local_30 = (void *)0xffffffff;
    local_34 = (void *)0xffffffff;
    local_38 = (void *)0x0;
    local_3c = (void *)0x0;
    uVar1 = thunk_FUN_104026b0(*(undefined4 *)(param_1 + 0x48),uVar1,&DAT_108810b0,&local_30,
                               &local_34,&local_38,&local_3c);
    L2ParamStack::L2ParamStack(local_6c,10);
    local_8._0_1_ = 2;
    L2ParamStack::PushBack(local_6c,local_30);
    L2ParamStack::PushBack(local_6c,local_34);
    L2ParamStack::PushBack(local_6c,local_38);
    L2ParamStack::PushBack(local_6c,local_3c);
    (**(code **)(**(int **)(DAT_10b1f538 + 0x54) + 0x494))(local_6c);
    local_8 = CONCAT31(local_8._1_3_,1);
    L2ParamStack::~L2ParamStack(local_6c);
  }
  FOutputDevice::Logf(*(FOutputDevice **)GNetworkLog_exref,
                      (ushort *)*(FOutputDevice **)GNetworkLog_exref);
  local_8 = local_8 & 0xffffff00;
  L2ParamStack::~L2ParamStack(local_5c);
  ExceptionList = local_10;
  return extraout_EAX & 0xffffff00;
}


// ==== 1041cb90 FUN_1041cb90 depth=0 from=raiz callees=CORE.DLL::L2ParamStack::PushBack@EXTERNAL:00000136 CORE.DLL::L2ParamStack::~L2ParamStack@EXTERNAL:0000012a CORE.DLL::L2ParamStack::L2ParamStack@EXTERNAL:0000012b thunk_FUN_104026b0@103034e5
// strings: 

uint FUN_1041cb90(int param_1,undefined4 param_2)

{
  uint extraout_EAX;
  L2ParamStack local_30 [24];
  void *local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_1080f729;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffc4;
  local_8 = 0;
  ExceptionList = &local_10;
  thunk_FUN_104026b0(*(undefined4 *)(param_1 + 0x48),param_2,&DAT_1087ff8c,&local_18);
  L2ParamStack::L2ParamStack(local_30,10);
  local_8._0_1_ = 1;
  L2ParamStack::PushBack(local_30,local_18);
  (**(code **)(**(int **)(DAT_10b1f538 + 0x54) + 0x49c))(local_30);
  local_8 = (uint)local_8._1_3_ << 8;
  L2ParamStack::~L2ParamStack(local_30);
  ExceptionList = local_10;
  return extraout_EAX & 0xffffff00;
}


// ==== 1041cc90 FUN_1041cc90 depth=0 from=raiz callees=CORE.DLL::L2ParamStack::PushBack@EXTERNAL:00000136 thunk_FUN_1032ffc0@103131d8 CORE.DLL::L2ParamStack::L2ParamStack@EXTERNAL:0000012b thunk_FUN_104026b0@103034e5 thunk_FUN_10401650@1030b1fe
// strings: 

uint FUN_1041cc90(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  uint uVar2;
  L2ParamStack *this;
  undefined1 local_22c [524];
  void *local_20;
  L2ParamStack *local_1c;
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_1080f74b;
  local_10 = ExceptionList;
  local_14 = &stack0xfffffdc8;
  this = (L2ParamStack *)0x0;
  local_8 = 0;
  ExceptionList = &local_10;
  local_1c = (L2ParamStack *)thunk_FUN_1032ffc0(0x10);
  local_8._0_1_ = 1;
  if (local_1c != (L2ParamStack *)0x0) {
    this = (L2ParamStack *)L2ParamStack::L2ParamStack(local_1c,0x100);
  }
  local_8 = (uint)local_8._1_3_ << 8;
  uVar1 = thunk_FUN_104026b0(*(undefined4 *)(param_1 + 0x48),param_2,&DAT_1087ff8c,&local_20);
  L2ParamStack::PushBack(this,local_20);
  for (local_18 = 0; local_18 < (int)local_20; local_18 = local_18 + 1) {
    uVar1 = thunk_FUN_104026b0(*(undefined4 *)(param_1 + 0x48),uVar1,&DAT_10886b28,&local_1c,0x200,
                               local_22c);
    L2ParamStack::PushBack(this,local_1c);
    L2ParamStack::PushBack(this,local_22c);
  }
  uVar2 = (**(code **)(**(int **)(DAT_10b1f538 + 0x54) + 0x4a0))(this);
  if (this != (L2ParamStack *)0x0) {
    uVar2 = thunk_FUN_10401650(1);
  }
  ExceptionList = local_10;
  return uVar2 & 0xffffff00;
}


// ==== 1041ce10 FUN_1041ce10 depth=0 from=raiz callees=CORE.DLL::L2ParamStack::PushBack@EXTERNAL:00000136 thunk_FUN_1032ffc0@103131d8 CORE.DLL::L2ParamStack::L2ParamStack@EXTERNAL:0000012b thunk_FUN_104026b0@103034e5 thunk_FUN_10401650@1030b1fe
// strings: 10887df0=dddddc | 

uint FUN_1041ce10(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  uint uVar2;
  L2ParamStack *this;
  L2ParamStack *local_4c;
  void *local_48;
  void *local_44;
  void *local_40;
  void *local_3c;
  void *local_38;
  void *local_34;
  void *local_30;
  void *local_2c;
  void *local_28;
  int local_24;
  int local_20;
  int local_1c;
  char local_17;
  char local_16;
  char local_15;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_1080f76b;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffa0;
  this = (L2ParamStack *)0x0;
  local_8 = 0;
  ExceptionList = &local_10;
  local_4c = (L2ParamStack *)thunk_FUN_1032ffc0(0x10);
  local_8._0_1_ = 1;
  if (local_4c != (L2ParamStack *)0x0) {
    this = (L2ParamStack *)L2ParamStack::L2ParamStack(local_4c,0x400);
  }
  local_8 = (uint)local_8._1_3_ << 8;
  uVar1 = thunk_FUN_104026b0(*(undefined4 *)(param_1 + 0x48),param_2,&DAT_1087fa3c,&local_17,
                             &local_2c,&local_30,&local_28);
  L2ParamStack::PushBack(this,(void *)(int)local_17);
  L2ParamStack::PushBack(this,local_2c);
  L2ParamStack::PushBack(this,local_30);
  L2ParamStack::PushBack(this,local_28);
  for (local_24 = 0; local_24 < (int)local_28; local_24 = local_24 + 1) {
    uVar1 = thunk_FUN_104026b0(*(undefined4 *)(param_1 + 0x48),uVar1,"dddddc",&local_34,&local_38,
                               &local_3c,&local_40,&local_44,&local_15);
    L2ParamStack::PushBack(this,local_34);
    L2ParamStack::PushBack(this,local_38);
    L2ParamStack::PushBack(this,local_3c);
    L2ParamStack::PushBack(this,local_40);
    L2ParamStack::PushBack(this,local_44);
    L2ParamStack::PushBack(this,(void *)(int)local_15);
    for (local_1c = 0; local_1c < local_15; local_1c = local_1c + 1) {
      uVar1 = thunk_FUN_104026b0(*(undefined4 *)(param_1 + 0x48),uVar1,&DAT_1087ff8c,&local_48);
      L2ParamStack::PushBack(this,local_48);
    }
    uVar1 = thunk_FUN_104026b0(*(undefined4 *)(param_1 + 0x48),uVar1,&DAT_1087f9dc,&local_16);
    L2ParamStack::PushBack(this,(void *)(int)local_16);
    for (local_20 = 0; local_20 < local_16; local_20 = local_20 + 1) {
      uVar1 = thunk_FUN_104026b0(*(undefined4 *)(param_1 + 0x48),uVar1,&DAT_1087ff8c,&local_4c);
      L2ParamStack::PushBack(this,local_4c);
    }
  }
  uVar2 = (**(code **)(**(int **)(DAT_10b1f538 + 0x54) + 0x4a4))(this);
  if (this != (L2ParamStack *)0x0) {
    uVar2 = thunk_FUN_10401650(1);
  }
  ExceptionList = local_10;
  return uVar2 & 0xffffff00;
}


// ==== 1041d0c0 FUN_1041d0c0 depth=0 from=raiz callees=CORE.DLL::L2ParamStack::PushBack@EXTERNAL:00000136 thunk_FUN_1032ffc0@103131d8 CORE.DLL::L2ParamStack::L2ParamStack@EXTERNAL:0000012b thunk_FUN_104026b0@103034e5 thunk_FUN_10401650@1030b1fe
// strings: 10887e2c=ddddcdc | 

uint FUN_1041d0c0(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  uint uVar2;
  L2ParamStack *this;
  L2ParamStack *local_4c;
  void *local_48;
  void *local_44;
  void *local_40;
  void *local_3c;
  void *local_38;
  void *local_34;
  void *local_30;
  void *local_2c;
  void *local_28;
  int local_24;
  int local_20;
  int local_1c;
  char local_18;
  char local_17;
  char local_16;
  char local_15;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_1080f78b;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffa0;
  this = (L2ParamStack *)0x0;
  local_8 = 0;
  ExceptionList = &local_10;
  local_4c = (L2ParamStack *)thunk_FUN_1032ffc0(0x10);
  local_8._0_1_ = 1;
  if (local_4c != (L2ParamStack *)0x0) {
    this = (L2ParamStack *)L2ParamStack::L2ParamStack(local_4c,0x400);
  }
  local_8 = (uint)local_8._1_3_ << 8;
  uVar1 = thunk_FUN_104026b0(*(undefined4 *)(param_1 + 0x48),param_2,&DAT_1087fa3c,&local_17,
                             &local_2c,&local_30,&local_28);
  L2ParamStack::PushBack(this,(void *)(int)local_17);
  L2ParamStack::PushBack(this,local_2c);
  L2ParamStack::PushBack(this,local_30);
  L2ParamStack::PushBack(this,local_28);
  for (local_24 = 0; local_24 < (int)local_28; local_24 = local_24 + 1) {
    uVar1 = thunk_FUN_104026b0(*(undefined4 *)(param_1 + 0x48),uVar1,"ddddcdc",&local_34,&local_38,
                               &local_3c,&local_40,&local_18,&local_44,&local_15);
    L2ParamStack::PushBack(this,local_34);
    L2ParamStack::PushBack(this,local_38);
    L2ParamStack::PushBack(this,local_3c);
    L2ParamStack::PushBack(this,local_40);
    L2ParamStack::PushBack(this,(void *)(int)local_18);
    L2ParamStack::PushBack(this,local_44);
    L2ParamStack::PushBack(this,(void *)(int)local_15);
    for (local_1c = 0; local_1c < local_15; local_1c = local_1c + 1) {
      uVar1 = thunk_FUN_104026b0(*(undefined4 *)(param_1 + 0x48),uVar1,&DAT_1087ff8c,&local_48);
      L2ParamStack::PushBack(this,local_48);
    }
    uVar1 = thunk_FUN_104026b0(*(undefined4 *)(param_1 + 0x48),uVar1,&DAT_1087f9dc,&local_16);
    L2ParamStack::PushBack(this,(void *)(int)local_16);
    for (local_20 = 0; local_20 < local_16; local_20 = local_20 + 1) {
      uVar1 = thunk_FUN_104026b0(*(undefined4 *)(param_1 + 0x48),uVar1,&DAT_1087ff8c,&local_4c);
      L2ParamStack::PushBack(this,local_4c);
    }
  }
  uVar2 = (**(code **)(**(int **)(DAT_10b1f538 + 0x54) + 0x4a8))(this);
  if (this != (L2ParamStack *)0x0) {
    uVar2 = thunk_FUN_10401650(1);
  }
  ExceptionList = local_10;
  return uVar2 & 0xffffff00;
}


// ==== 1041d380 FUN_1041d380 depth=0 from=raiz callees=CORE.DLL::L2ParamStack::PushBack@EXTERNAL:00000136 thunk_FUN_1032ffc0@103131d8 CORE.DLL::L2ParamStack::L2ParamStack@EXTERNAL:0000012b thunk_FUN_104026b0@103034e5 thunk_FUN_10401650@1030b1fe
// strings: 10887e80=ddddc | 

uint FUN_1041d380(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  uint uVar2;
  L2ParamStack *this;
  L2ParamStack *local_40;
  void *local_3c;
  void *local_38;
  void *local_34;
  void *local_30;
  void *local_2c;
  void *local_28;
  int local_24;
  int local_20;
  int local_1c;
  char local_17;
  char local_16;
  char local_15;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_1080f7ab;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffac;
  this = (L2ParamStack *)0x0;
  local_8 = 0;
  ExceptionList = &local_10;
  local_40 = (L2ParamStack *)thunk_FUN_1032ffc0(0x10);
  local_8._0_1_ = 1;
  if (local_40 != (L2ParamStack *)0x0) {
    this = (L2ParamStack *)L2ParamStack::L2ParamStack(local_40,0x400);
  }
  local_8 = (uint)local_8._1_3_ << 8;
  uVar1 = thunk_FUN_104026b0(*(undefined4 *)(param_1 + 0x48),param_2,&DAT_1087f8f8,&local_17,
                             &local_28);
  L2ParamStack::PushBack(this,(void *)(int)local_17);
  L2ParamStack::PushBack(this,local_28);
  for (local_24 = 0; local_24 < (int)local_28; local_24 = local_24 + 1) {
    uVar1 = thunk_FUN_104026b0(*(undefined4 *)(param_1 + 0x48),uVar1,"ddddc",&local_2c,&local_30,
                               &local_34,&local_38,&local_15);
    L2ParamStack::PushBack(this,local_2c);
    L2ParamStack::PushBack(this,local_30);
    L2ParamStack::PushBack(this,local_34);
    L2ParamStack::PushBack(this,local_38);
    L2ParamStack::PushBack(this,(void *)(int)local_15);
    for (local_1c = 0; local_1c < local_15; local_1c = local_1c + 1) {
      uVar1 = thunk_FUN_104026b0(*(undefined4 *)(param_1 + 0x48),uVar1,&DAT_1087ff8c,&local_3c);
      L2ParamStack::PushBack(this,local_3c);
    }
    uVar1 = thunk_FUN_104026b0(*(undefined4 *)(param_1 + 0x48),uVar1,&DAT_1087f9dc,&local_16);
    L2ParamStack::PushBack(this,(void *)(int)local_16);
    for (local_20 = 0; local_20 < local_16; local_20 = local_20 + 1) {
      uVar1 = thunk_FUN_104026b0(*(undefined4 *)(param_1 + 0x48),uVar1,&DAT_1087ff8c,&local_40);
      L2ParamStack::PushBack(this,local_40);
    }
  }
  uVar2 = (**(code **)(**(int **)(DAT_10b1f538 + 0x54) + 0x4ac))(this);
  if (this != (L2ParamStack *)0x0) {
    uVar2 = thunk_FUN_10401650(1);
  }
  ExceptionList = local_10;
  return uVar2 & 0xffffff00;
}


// ==== 1041d600 FUN_1041d600 depth=0 from=raiz callees=CORE.DLL::L2ParamStack::PushBack@EXTERNAL:00000136 thunk_FUN_1032ffc0@103131d8 CORE.DLL::L2ParamStack::L2ParamStack@EXTERNAL:0000012b thunk_FUN_104026b0@103034e5 thunk_FUN_10401650@1030b1fe
// strings: 10883f24=dddddddd | 

uint FUN_1041d600(int param_1,undefined4 param_2)

{
  uint uVar1;
  L2ParamStack *this;
  L2ParamStack *local_5c;
  void *local_58;
  void *local_54;
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
  void *local_28;
  int local_24;
  int local_20;
  int local_1c;
  char local_16;
  char local_15;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_1080f7cb;
  local_10 = ExceptionList;
  local_14 = &stack0xffffff90;
  this = (L2ParamStack *)0x0;
  local_8 = 0;
  ExceptionList = &local_10;
  local_5c = (L2ParamStack *)thunk_FUN_1032ffc0(0x10);
  local_8._0_1_ = 1;
  if (local_5c != (L2ParamStack *)0x0) {
    this = (L2ParamStack *)L2ParamStack::L2ParamStack(local_5c,0x400);
  }
  local_8 = (uint)local_8._1_3_ << 8;
  param_2 = thunk_FUN_104026b0(*(undefined4 *)(param_1 + 0x48),param_2,&DAT_1087ff44,&local_2c,
                               &local_28);
  L2ParamStack::PushBack(this,local_2c);
  L2ParamStack::PushBack(this,local_28);
  for (local_24 = 0; local_24 < (int)local_28; local_24 = local_24 + 1) {
    param_2 = thunk_FUN_104026b0(*(undefined4 *)(param_1 + 0x48),param_2,&DAT_10887ec4,&local_30,
                                 &local_34,&local_15);
    L2ParamStack::PushBack(this,local_30);
    L2ParamStack::PushBack(this,local_34);
    L2ParamStack::PushBack(this,(void *)(int)local_15);
    for (local_1c = 0; local_1c < local_15; local_1c = local_1c + 1) {
      param_2 = thunk_FUN_104026b0(*(undefined4 *)(param_1 + 0x48),param_2,&DAT_1087ff8c,&local_38);
      L2ParamStack::PushBack(this,local_38);
    }
    param_2 = thunk_FUN_104026b0(*(undefined4 *)(param_1 + 0x48),param_2,&DAT_1087f9dc,&local_16);
    L2ParamStack::PushBack(this,(void *)(int)local_16);
    for (local_20 = 0; local_20 < local_16; local_20 = local_20 + 1) {
      param_2 = thunk_FUN_104026b0(*(undefined4 *)(param_1 + 0x48),param_2,&DAT_1087ff8c,&local_3c);
      L2ParamStack::PushBack(this,local_3c);
    }
    param_2 = thunk_FUN_104026b0(*(undefined4 *)(param_1 + 0x48),param_2,"dddddddd",&local_40,
                                 &local_44,&local_48,&local_4c,&local_50,&local_54,&local_58,
                                 &local_5c);
    L2ParamStack::PushBack(this,local_40);
    L2ParamStack::PushBack(this,local_44);
    L2ParamStack::PushBack(this,local_48);
    L2ParamStack::PushBack(this,local_4c);
    L2ParamStack::PushBack(this,local_50);
    L2ParamStack::PushBack(this,local_54);
    L2ParamStack::PushBack(this,local_58);
    L2ParamStack::PushBack(this,local_5c);
  }
  uVar1 = (**(code **)(**(int **)(DAT_10b1f538 + 0x54) + 0x4b0))(this);
  if (this != (L2ParamStack *)0x0) {
    uVar1 = thunk_FUN_10401650(1);
  }
  ExceptionList = local_10;
  return uVar1 & 0xffffff00;
}


// ==== 1041d8f0 FUN_1041d8f0 depth=0 from=raiz callees=CORE.DLL::L2ParamStack::PushBack@EXTERNAL:00000136 thunk_FUN_1032ffc0@103131d8 CORE.DLL::L2ParamStack::L2ParamStack@EXTERNAL:0000012b thunk_FUN_104026b0@103034e5 thunk_FUN_10401650@1030b1fe
// strings: 10887f04=ddddddcddc | 

uint FUN_1041d8f0(int param_1,undefined4 param_2)

{
  uint uVar1;
  L2ParamStack *this;
  L2ParamStack *local_5c;
  void *local_58;
  void *local_54;
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
  void *local_28;
  int local_24;
  int local_20;
  int local_1c;
  char local_18;
  char local_17;
  char local_16;
  char local_15;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_1080f7eb;
  local_10 = ExceptionList;
  local_14 = &stack0xffffff90;
  this = (L2ParamStack *)0x0;
  local_8 = 0;
  ExceptionList = &local_10;
  local_5c = (L2ParamStack *)thunk_FUN_1032ffc0(0x10);
  local_8._0_1_ = 1;
  if (local_5c != (L2ParamStack *)0x0) {
    this = (L2ParamStack *)L2ParamStack::L2ParamStack(local_5c,0x400);
  }
  local_8 = (uint)local_8._1_3_ << 8;
  param_2 = thunk_FUN_104026b0(*(undefined4 *)(param_1 + 0x48),param_2,&DAT_1087ff44,&local_2c,
                               &local_28);
  L2ParamStack::PushBack(this,local_2c);
  L2ParamStack::PushBack(this,local_28);
  for (local_24 = 0; local_24 < (int)local_28; local_24 = local_24 + 1) {
    param_2 = thunk_FUN_104026b0(*(undefined4 *)(param_1 + 0x48),param_2,&DAT_10887ec4,&local_30,
                                 &local_34,&local_15);
    L2ParamStack::PushBack(this,local_30);
    L2ParamStack::PushBack(this,local_34);
    L2ParamStack::PushBack(this,(void *)(int)local_15);
    for (local_1c = 0; local_1c < local_15; local_1c = local_1c + 1) {
      param_2 = thunk_FUN_104026b0(*(undefined4 *)(param_1 + 0x48),param_2,&DAT_1087ff8c,&local_38);
      L2ParamStack::PushBack(this,local_38);
    }
    param_2 = thunk_FUN_104026b0(*(undefined4 *)(param_1 + 0x48),param_2,&DAT_1087f9dc,&local_16);
    L2ParamStack::PushBack(this,(void *)(int)local_16);
    for (local_20 = 0; local_20 < local_16; local_20 = local_20 + 1) {
      param_2 = thunk_FUN_104026b0(*(undefined4 *)(param_1 + 0x48),param_2,&DAT_1087ff8c,&local_3c);
      L2ParamStack::PushBack(this,local_3c);
    }
    param_2 = thunk_FUN_104026b0(*(undefined4 *)(param_1 + 0x48),param_2,"ddddddcddc",&local_40,
                                 &local_44,&local_48,&local_4c,&local_50,&local_54,&local_17,
                                 &local_58,&local_5c,&local_18);
    L2ParamStack::PushBack(this,local_40);
    L2ParamStack::PushBack(this,local_44);
    L2ParamStack::PushBack(this,local_48);
    L2ParamStack::PushBack(this,local_4c);
    L2ParamStack::PushBack(this,local_50);
    L2ParamStack::PushBack(this,local_54);
    L2ParamStack::PushBack(this,(void *)(int)local_17);
    L2ParamStack::PushBack(this,local_58);
    L2ParamStack::PushBack(this,local_5c);
    L2ParamStack::PushBack(this,(void *)(int)local_18);
  }
  uVar1 = (**(code **)(**(int **)(DAT_10b1f538 + 0x54) + 0x4b4))(this);
  if (this != (L2ParamStack *)0x0) {
    uVar1 = thunk_FUN_10401650(1);
  }
  ExceptionList = local_10;
  return uVar1 & 0xffffff00;
}


// ==== 1041dc00 FUN_1041dc00 depth=0 from=raiz callees=CORE.DLL::L2ParamStack::PushBack@EXTERNAL:00000136 thunk_FUN_1032ffc0@103131d8 CORE.DLL::L2ParamStack::L2ParamStack@EXTERNAL:0000012b thunk_FUN_104026b0@103034e5 thunk_FUN_10401650@1030b1fe
// strings: 10887f50=dddcd | 

uint FUN_1041dc00(int param_1,undefined4 param_2)

{
  uint uVar1;
  L2ParamStack *this;
  L2ParamStack *local_50;
  void *local_4c;
  void *local_48;
  void *local_44;
  void *local_40;
  void *local_3c;
  void *local_38;
  void *local_34;
  void *local_30;
  void *local_2c;
  void *local_28;
  int local_24;
  int local_20;
  int local_1c;
  char local_17;
  char local_16;
  char local_15;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_1080f80b;
  local_10 = ExceptionList;
  local_14 = &stack0xffffff9c;
  this = (L2ParamStack *)0x0;
  local_8 = 0;
  ExceptionList = &local_10;
  local_50 = (L2ParamStack *)thunk_FUN_1032ffc0(0x10);
  local_8._0_1_ = 1;
  if (local_50 != (L2ParamStack *)0x0) {
    this = (L2ParamStack *)L2ParamStack::L2ParamStack(local_50,0x400);
  }
  local_8 = (uint)local_8._1_3_ << 8;
  param_2 = thunk_FUN_104026b0(*(undefined4 *)(param_1 + 0x48),param_2,&DAT_1087ff44,&local_2c,
                               &local_28);
  L2ParamStack::PushBack(this,local_2c);
  L2ParamStack::PushBack(this,local_28);
  for (local_24 = 0; local_24 < (int)local_28; local_24 = local_24 + 1) {
    param_2 = thunk_FUN_104026b0(*(undefined4 *)(param_1 + 0x48),param_2,&DAT_10881140,&local_30,
                                 &local_34,&local_38,&local_15);
    L2ParamStack::PushBack(this,local_30);
    L2ParamStack::PushBack(this,local_34);
    L2ParamStack::PushBack(this,local_38);
    L2ParamStack::PushBack(this,(void *)(int)local_15);
    for (local_1c = 0; local_1c < local_15; local_1c = local_1c + 1) {
      param_2 = thunk_FUN_104026b0(*(undefined4 *)(param_1 + 0x48),param_2,&DAT_1087ff8c,&local_3c);
      L2ParamStack::PushBack(this,local_3c);
    }
    param_2 = thunk_FUN_104026b0(*(undefined4 *)(param_1 + 0x48),param_2,&DAT_1087f9dc,&local_16);
    L2ParamStack::PushBack(this,(void *)(int)local_16);
    for (local_20 = 0; local_20 < local_16; local_20 = local_20 + 1) {
      param_2 = thunk_FUN_104026b0(*(undefined4 *)(param_1 + 0x48),param_2,&DAT_1087ff8c,&local_40);
      L2ParamStack::PushBack(this,local_40);
    }
    param_2 = thunk_FUN_104026b0(*(undefined4 *)(param_1 + 0x48),param_2,"dddcd",&local_44,&local_48
                                 ,&local_4c,&local_17,&local_50);
    L2ParamStack::PushBack(this,local_44);
    L2ParamStack::PushBack(this,local_48);
    L2ParamStack::PushBack(this,local_4c);
    L2ParamStack::PushBack(this,(void *)(int)local_17);
    L2ParamStack::PushBack(this,local_50);
  }
  uVar1 = (**(code **)(**(int **)(DAT_10b1f538 + 0x54) + 0x4b8))(this);
  if (this != (L2ParamStack *)0x0) {
    uVar1 = thunk_FUN_10401650(1);
  }
  ExceptionList = local_10;
  return uVar1 & 0xffffff00;
}


// ==== 1041dee0 FUN_1041dee0 depth=0 from=raiz callees=CORE.DLL::L2ParamStack::PushBack@EXTERNAL:00000136 thunk_FUN_1032ffc0@103131d8 CORE.DLL::L2ParamStack::L2ParamStack@EXTERNAL:0000012b thunk_FUN_104026b0@103034e5 thunk_FUN_10401650@1030b1fe
// strings: 

uint FUN_1041dee0(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  uint uVar2;
  L2ParamStack *this;
  L2ParamStack *local_30;
  void *local_2c;
  void *local_28;
  void *local_24;
  void *local_20;
  int local_1c;
  char local_15;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_1080f82b;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffbc;
  this = (L2ParamStack *)0x0;
  local_8 = 0;
  ExceptionList = &local_10;
  local_30 = (L2ParamStack *)thunk_FUN_1032ffc0(0x10);
  local_8._0_1_ = 1;
  if (local_30 != (L2ParamStack *)0x0) {
    this = (L2ParamStack *)L2ParamStack::L2ParamStack(local_30,0x400);
  }
  local_8 = (uint)local_8._1_3_ << 8;
  uVar1 = thunk_FUN_104026b0(*(undefined4 *)(param_1 + 0x48),param_2,&DAT_1087ff44,&local_24,
                             &local_20);
  L2ParamStack::PushBack(this,local_24);
  L2ParamStack::PushBack(this,local_20);
  for (local_1c = 0; local_1c < (int)local_20; local_1c = local_1c + 1) {
    uVar1 = thunk_FUN_104026b0(*(undefined4 *)(param_1 + 0x48),uVar1,&DAT_10881140,&local_28,
                               &local_2c,&local_30,&local_15);
    L2ParamStack::PushBack(this,local_28);
    L2ParamStack::PushBack(this,local_2c);
    L2ParamStack::PushBack(this,local_30);
    L2ParamStack::PushBack(this,(void *)(int)local_15);
  }
  uVar2 = (**(code **)(**(int **)(DAT_10b1f538 + 0x54) + 0x4bc))(this);
  if (this != (L2ParamStack *)0x0) {
    uVar2 = thunk_FUN_10401650(1);
  }
  ExceptionList = local_10;
  return uVar2 & 0xffffff00;
}


// ==== 1041e080 FUN_1041e080 depth=0 from=raiz callees=CORE.DLL::L2ParamStack::PushBack@EXTERNAL:00000136 thunk_FUN_1032ffc0@103131d8 CORE.DLL::L2ParamStack::L2ParamStack@EXTERNAL:0000012b thunk_FUN_104026b0@103034e5 thunk_FUN_103254c0@103136f6 thunk_FUN_103ff730@1031082f thunk_FUN_10401650@1030b1fe
// strings: 10887fc8=SdSdSdd | 

uint FUN_1041e080(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  uint uVar2;
  L2ParamStack *this;
  int iVar3;
  L2ParamStack *local_34;
  void *local_30;
  void *local_2c;
  void *local_28;
  int local_24;
  int local_20;
  int local_1c;
  void *local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_1080f84b;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffb0;
  this = (L2ParamStack *)0x0;
  local_8 = 0;
  ExceptionList = &local_10;
  local_34 = (L2ParamStack *)thunk_FUN_1032ffc0(0x10);
  local_8._0_1_ = 1;
  if (local_34 != (L2ParamStack *)0x0) {
    this = (L2ParamStack *)L2ParamStack::L2ParamStack(local_34,0x400);
  }
  local_8 = (uint)local_8._1_3_ << 8;
  param_2 = thunk_FUN_104026b0(*(undefined4 *)(param_1 + 0x48),param_2,&DAT_1087ff8c,&local_18);
  L2ParamStack::PushBack(this,local_18);
  if (0 < (int)local_18) {
    local_1c = thunk_FUN_103ff730(-(uint)((int)(ZEXT48(local_18) * 4 >> 0x20) != 0) |
                                  (uint)(ZEXT48(local_18) * 4));
    local_20 = thunk_FUN_103ff730(-(uint)((int)(ZEXT48(local_18) * 4 >> 0x20) != 0) |
                                  (uint)(ZEXT48(local_18) * 4));
    local_24 = thunk_FUN_103ff730(-(uint)((int)(ZEXT48(local_18) * 4 >> 0x20) != 0) |
                                  (uint)(ZEXT48(local_18) * 4));
    for (iVar3 = 0; iVar3 < (int)local_18; iVar3 = iVar3 + 1) {
      uVar1 = thunk_FUN_103ff730(0x800);
      *(undefined4 *)(local_1c + iVar3 * 4) = uVar1;
      uVar1 = thunk_FUN_103ff730(0x800);
      *(undefined4 *)(local_20 + iVar3 * 4) = uVar1;
      uVar1 = thunk_FUN_103ff730(0x800);
      *(undefined4 *)(local_24 + iVar3 * 4) = uVar1;
      param_2 = thunk_FUN_104026b0(*(undefined4 *)(param_1 + 0x48),param_2,"SdSdSdd",0x400,
                                   *(undefined4 *)(local_1c + iVar3 * 4),&local_28,0x400,
                                   *(undefined4 *)(local_20 + iVar3 * 4),&local_2c,0x400,uVar1,
                                   &local_30,&local_34);
      L2ParamStack::PushBack(this,*(void **)(local_1c + iVar3 * 4));
      L2ParamStack::PushBack(this,local_28);
      L2ParamStack::PushBack(this,*(void **)(local_20 + iVar3 * 4));
      L2ParamStack::PushBack(this,local_2c);
      L2ParamStack::PushBack(this,*(void **)(local_24 + iVar3 * 4));
      L2ParamStack::PushBack(this,local_30);
      L2ParamStack::PushBack(this,local_34);
    }
  }
  uVar2 = (**(code **)(**(int **)(DAT_10b1f538 + 0x54) + 0x4c0))(this);
  if (0 < (int)local_18) {
    iVar3 = 0;
    while( true ) {
      if ((int)local_18 <= iVar3) break;
      thunk_FUN_103254c0(*(undefined4 *)(local_1c + iVar3 * 4));
      thunk_FUN_103254c0(*(undefined4 *)(local_20 + iVar3 * 4));
      thunk_FUN_103254c0(*(undefined4 *)(local_24 + iVar3 * 4));
      iVar3 = iVar3 + 1;
    }
    thunk_FUN_103254c0(local_1c);
    thunk_FUN_103254c0(local_20);
    uVar2 = thunk_FUN_103254c0(local_24);
  }
  if (this != (L2ParamStack *)0x0) {
    uVar2 = thunk_FUN_10401650(1);
  }
  ExceptionList = local_10;
  return uVar2 & 0xffffff00;
}


// ==== 1041eab0 FUN_1041eab0 depth=0 from=raiz callees=CORE.DLL::L2ParamStack::PushBack@EXTERNAL:00000136 CORE.DLL::L2ParamStack::~L2ParamStack@EXTERNAL:0000012a CORE.DLL::L2ParamStack::L2ParamStack@EXTERNAL:0000012b thunk_FUN_104026b0@103034e5
// strings: 

uint FUN_1041eab0(int param_1,undefined4 param_2)

{
  uint extraout_EAX;
  void *local_220;
  L2ParamStack local_21c [16];
  undefined1 local_20c [508];
  void *pvStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1080f8bc;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  L2ParamStack::L2ParamStack(local_21c,10);
  local_4 = 0;
  thunk_FUN_104026b0(*(undefined4 *)(param_1 + 0x48),param_2,&DAT_108843d0,0x200,local_20c,
                     &local_220);
  L2ParamStack::PushBack(local_21c,local_20c);
  L2ParamStack::PushBack(local_21c,local_220);
  (**(code **)(**(int **)(DAT_10b1f538 + 0x54) + 0x4e4))(local_21c);
  puStack_8 = (undefined1 *)0xffffffff;
  L2ParamStack::~L2ParamStack((L2ParamStack *)&local_220);
  ExceptionList = pvStack_10;
  return extraout_EAX & 0xffffff00;
}


// ==== 1041ebb0 FUN_1041ebb0 depth=0 from=raiz callees=CORE.DLL::UObject::StaticFindObject@EXTERNAL:00000135 CORE.DLL::appSprintf@EXTERNAL:0000013b _free@107a6b24 thunk_FUN_104026b0@103034e5 _memcpy@107a6260 _malloc@107a6ccc
// strings: 10885a70=..\crest | 1088804c=crest_%d_%d_l | 

uint FUN_1041ebb0(int param_1,undefined4 param_2)

{
  void *_Src;
  int iVar1;
  void *pvVar2;
  UObject *pUVar3;
  void *extraout_EAX;
  ushort local_12c [134];
  undefined4 local_20;
  int local_1c;
  size_t local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1080f8d0;
  local_10 = ExceptionList;
  local_14 = &stack0xfffffec8;
  local_8 = 0;
  ExceptionList = &local_10;
  _Src = (void *)thunk_FUN_104026b0(*(undefined4 *)(param_1 + 0x48),param_2,&DAT_1087ff0c,&local_20,
                                    &local_1c,&local_18);
  pvVar2 = _Src;
  if ((0 < local_1c) && (0 < (int)local_18)) {
    iVar1 = (**(code **)(**(int **)GFileManager_exref + 0x28))(L"..\\crest",0);
    pvVar2 = (void *)0x0;
    if (iVar1 != 0) {
      pvVar2 = _malloc(local_18);
      _memcpy(pvVar2,_Src,local_18);
      appSprintf(local_12c,(ushort *)L"crest_%d_%d_l",DAT_10b20f30,local_1c);
      pUVar3 = UObject::StaticFindObject
                         (&UTexture::PrivateStaticClass,(UObject *)0xffffffff,local_12c,0);
      if (pUVar3 == (UObject *)0x0) {
        (**(code **)(*(int *)DAT_10b1f538[0x15] + 0x360))(DAT_10b20f30,local_1c,pvVar2,local_18,1);
        (**(code **)(*(int *)DAT_10b1f538[0x15] + 0x35c))(DAT_10b20f30,local_1c,1,1);
        (**(code **)(*DAT_10b1f538 + 0xc4))(0,local_20);
      }
      _free(pvVar2);
      pvVar2 = extraout_EAX;
    }
  }
  ExceptionList = local_10;
  return (uint)pvVar2 & 0xffffff00;
}


// ==== 1041ed90 FUN_1041ed90 depth=0 from=raiz callees=CORE.DLL::L2ParamStack::PushBack@EXTERNAL:00000136 CORE.DLL::L2ParamStack::~L2ParamStack@EXTERNAL:0000012a CORE.DLL::L2ParamStack::L2ParamStack@EXTERNAL:0000012b thunk_FUN_104026b0@103034e5
// strings: 108880ac=cdSddddd | 

uint FUN_1041ed90(int param_1,undefined4 param_2)

{
  uint extraout_EAX;
  undefined1 local_14c [264];
  void *local_44;
  void *local_40;
  void *local_3c;
  void *local_38 [2];
  void *local_30;
  void *local_2c;
  L2ParamStack local_28 [19];
  char local_15;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_1080f8e9;
  local_10 = ExceptionList;
  local_14 = &stack0xfffffea8;
  local_8 = 0;
  ExceptionList = &local_10;
  L2ParamStack::L2ParamStack(local_28,10);
  local_8._0_1_ = 1;
  thunk_FUN_104026b0(*(undefined4 *)(param_1 + 0x48),param_2,"cdSddddd",&local_15,&local_3c,0x100,
                     local_14c,&local_40,&local_44,local_38,&local_2c,&local_30);
  L2ParamStack::PushBack(local_28,(void *)(int)local_15);
  L2ParamStack::PushBack(local_28,local_3c);
  L2ParamStack::PushBack(local_28,local_14c);
  L2ParamStack::PushBack(local_28,local_40);
  L2ParamStack::PushBack(local_28,local_44);
  L2ParamStack::PushBack(local_28,local_38[0]);
  L2ParamStack::PushBack(local_28,local_2c);
  L2ParamStack::PushBack(local_28,local_30);
  (**(code **)(**(int **)(DAT_10b1f538 + 0x54) + 0x4c4))(local_28);
  local_8 = (uint)local_8._1_3_ << 8;
  L2ParamStack::~L2ParamStack(local_28);
  ExceptionList = local_10;
  return extraout_EAX & 0xffffff00;
}


// ==== 1041ef20 FUN_1041ef20 depth=0 from=raiz callees=CORE.DLL::L2ParamStack::PushBack@EXTERNAL:00000136 CORE.DLL::L2ParamStack::~L2ParamStack@EXTERNAL:0000012a CORE.DLL::L2ParamStack::L2ParamStack@EXTERNAL:0000012b thunk_FUN_104026b0@103034e5
// strings: 

uint FUN_1041ef20(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  uint extraout_EAX;
  L2ParamStack local_44 [24];
  void *local_2c;
  void *local_28;
  void *local_24;
  void *local_20;
  int local_1c;
  short local_18 [2];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  puStack_c = &LAB_1080f909;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffb0;
  local_8 = 0;
  ExceptionList = &local_10;
  L2ParamStack::L2ParamStack(local_44,0x100);
  local_8 = CONCAT31(local_8._1_3_,1);
  uVar1 = thunk_FUN_104026b0(*(undefined4 *)(param_1 + 0x48),param_2,&DAT_1087ff44,&local_24,
                             &local_20);
  L2ParamStack::PushBack(local_44,local_24);
  L2ParamStack::PushBack(local_44,local_20);
  for (local_1c = 0; local_1c < (int)local_20; local_1c = local_1c + 1) {
    uVar1 = thunk_FUN_104026b0(*(undefined4 *)(param_1 + 0x48),uVar1,&DAT_1088545c,&local_28,
                               local_18,&local_2c);
    L2ParamStack::PushBack(local_44,local_28);
    L2ParamStack::PushBack(local_44,(void *)(int)local_18[0]);
    L2ParamStack::PushBack(local_44,local_2c);
  }
  (**(code **)(**(int **)(DAT_10b1f538 + 0x54) + 0x4c8))(local_44);
  local_8 = local_8 & 0xffffff00;
  L2ParamStack::~L2ParamStack(local_44);
  ExceptionList = local_10;
  return extraout_EAX & 0xffffff00;
}


// ==== 1041f0a0 FUN_1041f0a0 depth=0 from=raiz callees=thunk_FUN_104026b0@103034e5
// strings: 

uint FUN_1041f0a0(int param_1,undefined4 param_2)

{
  uint uVar1;
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1080f920;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffd4;
  local_8 = 0;
  ExceptionList = &local_10;
  thunk_FUN_104026b0(*(undefined4 *)(param_1 + 0x48),param_2,&DAT_1087f9dc,&local_18);
  uVar1 = (**(code **)(**(int **)(DAT_10b1f538 + 0x54) + 0x4cc))(local_18);
  ExceptionList = local_10;
  return uVar1 & 0xffffff00;
}


// ==== 1041f170 FUN_1041f170 depth=0 from=raiz callees=CORE.DLL::L2ParamStack::PushBack@EXTERNAL:00000136 CORE.DLL::L2ParamStack::~L2ParamStack@EXTERNAL:0000012a CORE.DLL::L2ParamStack::L2ParamStack@EXTERNAL:0000012b thunk_FUN_104026b0@103034e5
// strings: 108874cc=ddddddd | 

uint FUN_1041f170(int param_1,undefined4 param_2)

{
  uint extraout_EAX;
  void *local_48;
  void *local_44;
  void *local_40;
  void *local_3c;
  void *local_38;
  void *local_34;
  void *local_30;
  L2ParamStack local_2c [24];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_1080f939;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffac;
  local_8 = 0;
  ExceptionList = &local_10;
  thunk_FUN_104026b0(*(undefined4 *)(param_1 + 0x48),param_2,"ddddddd",&local_48,&local_44,&local_40
                     ,&local_3c,&local_38,&local_34,&local_30);
  L2ParamStack::L2ParamStack(local_2c,10);
  local_8._0_1_ = 1;
  L2ParamStack::PushBack(local_2c,local_48);
  L2ParamStack::PushBack(local_2c,local_44);
  L2ParamStack::PushBack(local_2c,local_40);
  L2ParamStack::PushBack(local_2c,local_3c);
  L2ParamStack::PushBack(local_2c,local_38);
  L2ParamStack::PushBack(local_2c,local_34);
  L2ParamStack::PushBack(local_2c,local_30);
  (**(code **)(**(int **)(DAT_10b1f538 + 0x54) + 0x4d8))(local_2c);
  local_8 = (uint)local_8._1_3_ << 8;
  L2ParamStack::~L2ParamStack(local_2c);
  ExceptionList = local_10;
  return extraout_EAX & 0xffffff00;
}


// ==== 1041f2d0 FUN_1041f2d0 depth=0 from=raiz callees=CORE.DLL::L2ParamStack::PushBack@EXTERNAL:00000136 CORE.DLL::L2ParamStack::~L2ParamStack@EXTERNAL:0000012a CORE.DLL::L2ParamStack::L2ParamStack@EXTERNAL:0000012b thunk_FUN_104026b0@103034e5
// strings: 108881b0=dccScScd | 108881a8=ccdSdd | 

uint FUN_1041f2d0(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  uint extraout_EAX;
  int iVar2;
  undefined1 local_a60 [1024];
  undefined1 local_660 [1024];
  undefined1 local_260 [520];
  int local_58;
  int local_50;
  void *local_4c;
  void *local_48;
  void *local_44;
  L2ParamStack local_40 [16];
  L2ParamStack local_30 [16];
  void *local_20;
  char local_1a;
  char local_19;
  char local_18;
  char local_17;
  char local_16;
  char local_15;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  puStack_c = &LAB_1080f962;
  local_10 = ExceptionList;
  local_14 = &stack0xfffff594;
  local_8 = 0;
  ExceptionList = &local_10;
  uVar1 = thunk_FUN_104026b0(*(undefined4 *)(param_1 + 0x48),param_2,"dccScScd",&local_20,&local_19,
                             &local_18,0x400,local_660,&local_1a,0x400,local_a60,&local_16,&local_50
                            );
  L2ParamStack::L2ParamStack(local_40,10);
  local_8 = CONCAT31(local_8._1_3_,1);
  L2ParamStack::PushBack(local_40,local_20);
  L2ParamStack::PushBack(local_40,(void *)(int)local_19);
  L2ParamStack::PushBack(local_40,(void *)(int)local_18);
  L2ParamStack::PushBack(local_40,local_660);
  L2ParamStack::PushBack(local_40,(void *)(int)local_1a);
  L2ParamStack::PushBack(local_40,local_a60);
  L2ParamStack::PushBack(local_40,(void *)(int)local_16);
  (**(code **)(**(int **)(DAT_10b1f538 + 0x54) + 0x718))(local_40);
  for (iVar2 = 0; local_58 = iVar2, iVar2 < local_50; iVar2 = iVar2 + 1) {
    uVar1 = thunk_FUN_104026b0(*(undefined4 *)(param_1 + 0x48),uVar1,"ccdSdd",&local_15,&local_17,
                               &local_48,0x200,local_260,&local_44,&local_4c);
    L2ParamStack::L2ParamStack(local_30,10);
    local_8._0_1_ = 2;
    L2ParamStack::PushBack(local_30,local_20);
    L2ParamStack::PushBack(local_30,(void *)(iVar2 + local_15 * -9 + 9));
    L2ParamStack::PushBack(local_30,(void *)(int)local_15);
    L2ParamStack::PushBack(local_30,(void *)(int)local_17);
    L2ParamStack::PushBack(local_30,local_48);
    L2ParamStack::PushBack(local_30,local_260);
    L2ParamStack::PushBack(local_30,local_44);
    L2ParamStack::PushBack(local_30,local_4c);
    (**(code **)(**(int **)(DAT_10b1f538 + 0x54) + 0x71c))(local_30);
    local_8 = CONCAT31(local_8._1_3_,1);
    L2ParamStack::~L2ParamStack(local_30);
  }
  local_8 = local_8 & 0xffffff00;
  L2ParamStack::~L2ParamStack(local_40);
  ExceptionList = local_10;
  return extraout_EAX & 0xffffff00;
}


// ==== 1041f570 FUN_1041f570 depth=0 from=raiz callees=CORE.DLL::L2ParamStack::PushBack@EXTERNAL:00000136 CORE.DLL::L2ParamStack::~L2ParamStack@EXTERNAL:0000012a CORE.DLL::L2ParamStack::L2ParamStack@EXTERNAL:0000012b thunk_FUN_104026b0@103034e5
// strings: 

uint FUN_1041f570(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  uint extraout_EAX;
  undefined1 local_258 [256];
  undefined1 local_158 [264];
  L2ParamStack local_50 [16];
  L2ParamStack local_40 [16];
  void *local_30;
  void *local_2c [2];
  void *local_24;
  void *local_20;
  void *local_1c;
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  puStack_c = &LAB_1080f992;
  local_10 = ExceptionList;
  local_14 = &stack0xfffffd9c;
  local_8 = 0;
  ExceptionList = &local_10;
  uVar1 = thunk_FUN_104026b0(*(undefined4 *)(param_1 + 0x48),param_2,&DAT_10884368,0x100,local_158,
                             &local_24,&local_30,&local_1c);
  L2ParamStack::L2ParamStack(local_40,10);
  local_8 = CONCAT31(local_8._1_3_,1);
  L2ParamStack::PushBack(local_40,local_158);
  L2ParamStack::PushBack(local_40,local_24);
  L2ParamStack::PushBack(local_40,local_1c);
  L2ParamStack::PushBack(local_40,local_30);
  (**(code **)(**(int **)(DAT_10b1f538 + 0x54) + 0x730))(local_40);
  for (local_18 = 0; local_18 < (int)local_1c; local_18 = local_18 + 1) {
    uVar1 = thunk_FUN_104026b0(*(undefined4 *)(param_1 + 0x48),uVar1,&DAT_1088424c,0x100,local_258,
                               local_2c,&local_20);
    L2ParamStack::L2ParamStack(local_50,10);
    local_8._0_1_ = 2;
    L2ParamStack::PushBack(local_50,local_258);
    L2ParamStack::PushBack(local_50,local_2c[0]);
    L2ParamStack::PushBack(local_50,local_20);
    (**(code **)(**(int **)(DAT_10b1f538 + 0x54) + 0x734))(local_50);
    local_8 = CONCAT31(local_8._1_3_,1);
    L2ParamStack::~L2ParamStack(local_50);
  }
  local_8 = local_8 & 0xffffff00;
  L2ParamStack::~L2ParamStack(local_40);
  ExceptionList = local_10;
  return extraout_EAX & 0xffffff00;
}


// ==== 1041f780 FUN_1041f780 depth=0 from=raiz callees=CORE.DLL::L2ParamStack::PushBack@EXTERNAL:00000136 CORE.DLL::L2ParamStack::~L2ParamStack@EXTERNAL:0000012a CORE.DLL::L2ParamStack::L2ParamStack@EXTERNAL:0000012b thunk_FUN_104026b0@103034e5
// strings: 10888254=ddcdc | 

uint FUN_1041f780(int param_1,undefined4 param_2)

{
  uint extraout_EAX;
  L2ParamStack local_3c [24];
  void *local_24;
  void *local_20;
  void *local_1c;
  char local_16;
  char local_15;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_1080f9b9;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffb8;
  local_8 = 0;
  ExceptionList = &local_10;
  thunk_FUN_104026b0(*(undefined4 *)(param_1 + 0x48),param_2,"ddcdc",&local_1c,&local_20,&local_15,
                     &local_24,&local_16);
  L2ParamStack::L2ParamStack(local_3c,10);
  local_8._0_1_ = 1;
  L2ParamStack::PushBack(local_3c,local_1c);
  L2ParamStack::PushBack(local_3c,local_20);
  L2ParamStack::PushBack(local_3c,(void *)(int)local_15);
  L2ParamStack::PushBack(local_3c,local_24);
  L2ParamStack::PushBack(local_3c,(void *)(int)local_16);
  (**(code **)(**(int **)(DAT_10b1f538 + 0x54) + 0x744))(local_3c);
  local_8 = (uint)local_8._1_3_ << 8;
  L2ParamStack::~L2ParamStack(local_3c);
  ExceptionList = local_10;
  return extraout_EAX & 0xffffff00;
}


// ==== 1041f8c0 FUN_1041f8c0 depth=0 from=raiz callees=CORE.DLL::L2ParamStack::PushBack@EXTERNAL:00000136 CORE.DLL::L2ParamStack::~L2ParamStack@EXTERNAL:0000012a CORE.DLL::L2ParamStack::L2ParamStack@EXTERNAL:0000012b thunk_FUN_104026b0@103034e5
// strings: 

uint FUN_1041f8c0(int param_1,undefined4 param_2)

{
  uint extraout_EAX;
  L2ParamStack local_30 [24];
  void *local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_1080f9d9;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffc4;
  local_8 = 0;
  local_18 = (void *)0x0;
  ExceptionList = &local_10;
  thunk_FUN_104026b0(*(undefined4 *)(param_1 + 0x48),param_2,&DAT_1087ff8c,&local_18);
  L2ParamStack::L2ParamStack(local_30,10);
  local_8._0_1_ = 1;
  L2ParamStack::PushBack(local_30,local_18);
  (**(code **)(**(int **)(DAT_10b1f538 + 0x54) + 0x748))(local_30);
  local_8 = (uint)local_8._1_3_ << 8;
  L2ParamStack::~L2ParamStack(local_30);
  ExceptionList = local_10;
  return extraout_EAX & 0xffffff00;
}


// ==== 1041f9c0 FUN_1041f9c0 depth=0 from=raiz callees=CORE.DLL::L2ParamStack::PushBack@EXTERNAL:00000136 CORE.DLL::L2ParamStack::~L2ParamStack@EXTERNAL:0000012a CORE.DLL::L2ParamStack::L2ParamStack@EXTERNAL:0000012b thunk_FUN_104026b0@103034e5
// strings: 

uint FUN_1041f9c0(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  uint extraout_EAX;
  L2ParamStack local_48 [24];
  void *local_30;
  void *local_2c;
  void *local_28;
  void *local_24;
  void *local_20;
  int local_1c;
  void *local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  puStack_c = &LAB_1080f9f9;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffac;
  local_8 = 0;
  local_18 = (void *)0x0;
  local_28 = (void *)0x0;
  local_2c = (void *)0x0;
  local_30 = (void *)0x0;
  local_20 = (void *)0x0;
  local_24 = (void *)0x0;
  ExceptionList = &local_10;
  uVar1 = thunk_FUN_104026b0(*(undefined4 *)(param_1 + 0x48),param_2,&DAT_1087ff0c,&local_20,
                             &local_24,&local_18);
  L2ParamStack::L2ParamStack(local_48,(int)local_18 * 3 + 3);
  local_8 = CONCAT31(local_8._1_3_,1);
  L2ParamStack::PushBack(local_48,local_20);
  L2ParamStack::PushBack(local_48,local_24);
  L2ParamStack::PushBack(local_48,local_18);
  for (local_1c = 0; local_1c < (int)local_18; local_1c = local_1c + 1) {
    uVar1 = thunk_FUN_104026b0(*(undefined4 *)(param_1 + 0x48),uVar1,&DAT_1087ff0c,&local_28,
                               &local_2c,&local_30);
    L2ParamStack::PushBack(local_48,local_28);
    L2ParamStack::PushBack(local_48,local_2c);
    L2ParamStack::PushBack(local_48,local_30);
  }
  (**(code **)(**(int **)(DAT_10b1f538 + 0x54) + 0x74c))(local_48);
  local_8 = local_8 & 0xffffff00;
  L2ParamStack::~L2ParamStack(local_48);
  ExceptionList = local_10;
  return extraout_EAX & 0xffffff00;
}


// ==== 1041fb60 FUN_1041fb60 depth=0 from=raiz callees=CORE.DLL::L2ParamStack::PushBack@EXTERNAL:00000136 CORE.DLL::L2ParamStack::~L2ParamStack@EXTERNAL:0000012a CORE.DLL::L2ParamStack::L2ParamStack@EXTERNAL:0000012b thunk_FUN_104026b0@103034e5
// strings: 108882e8=ddddddddddS | 

uint FUN_1041fb60(int param_1,undefined4 param_2)

{
  uint extraout_EAX;
  undefined1 local_858 [2056];
  void *local_50;
  void *local_4c;
  void *local_48;
  void *local_44 [2];
  void *local_3c;
  void *local_38;
  void *local_34;
  void *local_30;
  void *local_2c;
  void *local_28;
  L2ParamStack local_24 [16];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_1080fa19;
  local_10 = ExceptionList;
  local_14 = &stack0xfffff79c;
  local_8 = 0;
  ExceptionList = &local_10;
  thunk_FUN_104026b0(*(undefined4 *)(param_1 + 0x48),param_2,"ddddddddddS",&local_50,&local_4c,
                     local_44,&local_34,&local_48,&local_3c,&local_28,&local_2c,&local_30,&local_38,
                     0x800,local_858);
  L2ParamStack::L2ParamStack(local_24,10);
  local_8._0_1_ = 1;
  L2ParamStack::PushBack(local_24,local_50);
  L2ParamStack::PushBack(local_24,local_4c);
  L2ParamStack::PushBack(local_24,local_44[0]);
  L2ParamStack::PushBack(local_24,local_34);
  L2ParamStack::PushBack(local_24,local_48);
  L2ParamStack::PushBack(local_24,local_3c);
  L2ParamStack::PushBack(local_24,local_28);
  L2ParamStack::PushBack(local_24,local_2c);
  L2ParamStack::PushBack(local_24,local_30);
  L2ParamStack::PushBack(local_24,local_38);
  L2ParamStack::PushBack(local_24,local_858);
  (**(code **)(**(int **)(DAT_10b1f538 + 0x54) + 0x754))(local_24);
  local_8 = (uint)local_8._1_3_ << 8;
  L2ParamStack::~L2ParamStack(local_24);
  ExceptionList = local_10;
  return extraout_EAX & 0xffffff00;
}


// ==== 1041fd10 FUN_1041fd10 depth=0 from=raiz callees=CORE.DLL::L2ParamStack::PushBack@EXTERNAL:00000136 CORE.DLL::L2ParamStack::~L2ParamStack@EXTERNAL:0000012a CORE.DLL::L2ParamStack::L2ParamStack@EXTERNAL:0000012b thunk_FUN_104026b0@103034e5
// strings: 

uint FUN_1041fd10(int param_1,undefined4 param_2)

{
  uint extraout_EAX;
  undefined1 local_22c [512];
  L2ParamStack local_2c [24];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_1080fa39;
  local_10 = ExceptionList;
  local_14 = &stack0xfffffdc8;
  local_8 = 0;
  ExceptionList = &local_10;
  thunk_FUN_104026b0(*(undefined4 *)(param_1 + 0x48),param_2,&DAT_108847bc,0x200,local_22c);
  L2ParamStack::L2ParamStack(local_2c,10);
  local_8._0_1_ = 1;
  L2ParamStack::PushBack(local_2c,local_22c);
  (**(code **)(**(int **)(DAT_10b1f538 + 0x54) + 0x758))(local_2c);
  local_8 = (uint)local_8._1_3_ << 8;
  L2ParamStack::~L2ParamStack(local_2c);
  ExceptionList = local_10;
  return extraout_EAX & 0xffffff00;
}


// ==== 1041fe20 FUN_1041fe20 depth=0 from=raiz callees=CORE.DLL::L2ParamStack::PushBack@EXTERNAL:00000136 CORE.DLL::L2ParamStack::~L2ParamStack@EXTERNAL:0000012a CORE.DLL::L2ParamStack::L2ParamStack@EXTERNAL:0000012b thunk_FUN_104026b0@103034e5
// strings: 

uint FUN_1041fe20(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  uint extraout_EAX;
  undefined1 local_254 [520];
  L2ParamStack local_4c [16];
  L2ParamStack local_3c [16];
  void *local_2c;
  void *local_28 [2];
  void *local_20;
  void *local_1c;
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  puStack_c = &LAB_1080fa62;
  local_10 = ExceptionList;
  local_14 = &stack0xfffffda0;
  local_8 = 0;
  ExceptionList = &local_10;
  uVar1 = thunk_FUN_104026b0(*(undefined4 *)(param_1 + 0x48),param_2,&DAT_1087ff8c,local_28);
  uVar1 = thunk_FUN_104026b0(*(undefined4 *)(param_1 + 0x48),uVar1,&DAT_1087ff8c,&local_1c);
  L2ParamStack::L2ParamStack(local_4c,10);
  local_8 = CONCAT31(local_8._1_3_,1);
  L2ParamStack::PushBack(local_4c,local_28[0]);
  L2ParamStack::PushBack(local_4c,local_1c);
  (**(code **)(**(int **)(DAT_10b1f538 + 0x54) + 0x75c))(local_4c);
  for (local_18 = 0; local_18 < (int)local_1c; local_18 = local_18 + 1) {
    uVar1 = thunk_FUN_104026b0(*(undefined4 *)(param_1 + 0x48),uVar1,&DAT_1088424c,0x200,local_254,
                               &local_2c,&local_20);
    L2ParamStack::L2ParamStack(local_3c,10);
    local_8._0_1_ = 2;
    L2ParamStack::PushBack(local_3c,local_254);
    L2ParamStack::PushBack(local_3c,local_2c);
    L2ParamStack::PushBack(local_3c,local_20);
    (**(code **)(**(int **)(DAT_10b1f538 + 0x54) + 0x760))(local_3c);
    local_8 = CONCAT31(local_8._1_3_,1);
    L2ParamStack::~L2ParamStack(local_3c);
  }
  local_8 = local_8 & 0xffffff00;
  L2ParamStack::~L2ParamStack(local_4c);
  ExceptionList = local_10;
  return extraout_EAX & 0xffffff00;
}


// ==== 10420000 FUN_10420000 depth=0 from=raiz callees=CORE.DLL::L2ParamStack::PushBack@EXTERNAL:00000136 CORE.DLL::L2ParamStack::~L2ParamStack@EXTERNAL:0000012a CORE.DLL::L2ParamStack::L2ParamStack@EXTERNAL:0000012b thunk_FUN_104026b0@103034e5
// strings: 

uint FUN_10420000(int param_1,undefined4 param_2)

{
  uint extraout_EAX;
  L2ParamStack local_30 [24];
  void *local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_1080fa89;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffc4;
  local_8 = 0;
  ExceptionList = &local_10;
  thunk_FUN_104026b0(*(undefined4 *)(param_1 + 0x48),param_2,&DAT_1087ff8c,&local_18);
  L2ParamStack::L2ParamStack(local_30,10);
  local_8._0_1_ = 1;
  L2ParamStack::PushBack(local_30,local_18);
  (**(code **)(**(int **)(DAT_10b1f538 + 0x54) + 0x764))(local_30);
  local_8 = (uint)local_8._1_3_ << 8;
  L2ParamStack::~L2ParamStack(local_30);
  ExceptionList = local_10;
  return extraout_EAX & 0xffffff00;
}


// ==== 10420100 FUN_10420100 depth=0 from=raiz callees=thunk_FUN_104026b0@103034e5
// strings: 

uint FUN_10420100(int param_1,undefined4 param_2)

{
  uint uVar1;
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1080faa0;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffd4;
  local_8 = 0;
  ExceptionList = &local_10;
  thunk_FUN_104026b0(*(undefined4 *)(param_1 + 0x48),param_2,&DAT_1087ff8c,&local_18);
  uVar1 = (**(code **)(**(int **)(DAT_10b1f538 + 0x54) + 0x768))(local_18);
  ExceptionList = local_10;
  return uVar1 & 0xffffff00;
}


// ==== 104201d0 FUN_104201d0 depth=0 from=raiz callees=_memset@107a6860 thunk_FUN_104026b0@103034e5
// strings: 

uint FUN_104201d0(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined1 local_5c;
  undefined1 local_5b [71];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1080fab0;
  local_10 = ExceptionList;
  local_14 = &stack0xffffff98;
  local_8 = 0;
  local_5c = 0;
  ExceptionList = &local_10;
  _memset(local_5b,0,0x3f);
  thunk_FUN_104026b0(*(undefined4 *)(param_1 + 0x48),param_2,&DAT_10883ef0,0x40,&local_5c);
  (**(code **)(**(int **)(DAT_10b1f538 + 0x54) + 0xe8))(&local_5c);
  iVar1 = **(int **)(DAT_10b1f538 + 0x48);
  uVar2 = (**(code **)(**(int **)(DAT_10c51044 + 0x70) + 0x6c))();
  uVar3 = (**(code **)(iVar1 + 0x68))
                    (*(undefined4 *)(DAT_10b1f538 + 0x48),&DAT_108883d8,0xd0,0x21,0x40,uVar2);
  ExceptionList = local_10;
  return uVar3 & 0xffffff00;
}


// ==== 104245f0 FUN_104245f0 depth=0 from=raiz callees=thunk_FUN_104226e0@1030d04e thunk_FUN_104026b0@103034e5
// strings: 108874cc=ddddddd | 

uint FUN_104245f0(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  uint uVar5;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
  thunk_FUN_104026b0(*(undefined4 *)(param_1 + 0x48),param_2,"ddddddd",&param_1,&local_30,&local_2c,
                     &local_28,&local_24,&local_20,&local_1c);
  iVar1 = DAT_10b1f538;
  local_c = (float)local_30;
  local_8 = (float)local_2c;
  local_4 = (float)local_28;
  local_18 = (float)local_24;
  local_14 = (float)local_20;
  local_10 = (float)local_1c;
  if (DAT_10b1f538 != 0) {
    iVar2 = thunk_FUN_104226e0(&param_1);
    if (iVar2 != 0) {
      piVar3 = (int *)thunk_FUN_104226e0(&param_1);
      if (*piVar3 == 1) {
        iVar2 = thunk_FUN_104226e0(&param_1);
        if (*(int *)(iVar2 + 4) != 0) {
          iVar2 = thunk_FUN_104226e0(&param_1);
          uVar4 = *(undefined4 *)(iVar2 + 4);
          goto LAB_104246b8;
        }
      }
    }
  }
  uVar4 = 0;
LAB_104246b8:
  uVar5 = (**(code **)(**(int **)(iVar1 + 0x54) + 0xf0))
                    (uVar4,local_c,local_8,local_4,local_18,local_14,local_10);
  return uVar5 & 0xffffff00;
}


// ==== 104248f0 FUN_104248f0 depth=0 from=raiz callees=thunk_FUN_104226e0@1030d04e CORE.DLL::FOutputDevice::Logf@EXTERNAL:000000b4 thunk_FUN_104026b0@103034e5
// strings: 10886c3c=dddddd | 10888ae8=(Receive)MoveToPawn ID:%d TargetID:%d Dist:%d OriginX:%d OriginY:%d OriginZ:%d | 

uint FUN_104248f0(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  uint extraout_EAX;
  code *pcVar5;
  undefined4 uVar6;
  undefined1 local_20 [4];
  undefined4 local_1c;
  int local_18;
  int local_14;
  int local_10;
  float local_c;
  float local_8;
  float local_4;
  
  thunk_FUN_104026b0(*(undefined4 *)(param_1 + 0x48),param_2,"dddddd",local_20,&param_1,&local_1c,
                     &local_10,&local_14,&local_18);
  iVar1 = DAT_10b1f538;
  local_c = (float)local_10;
  local_8 = (float)local_14;
  local_4 = (float)local_18;
  if (DAT_10b1f538 == 0) {
LAB_1042499b:
    uVar6 = 0;
  }
  else {
    iVar2 = thunk_FUN_104226e0(local_20);
    if (iVar2 == 0) goto LAB_1042499b;
    piVar3 = (int *)thunk_FUN_104226e0(local_20);
    if (*piVar3 != 1) goto LAB_1042499b;
    iVar2 = thunk_FUN_104226e0(local_20);
    if (*(int *)(iVar2 + 4) == 0) goto LAB_1042499b;
    iVar2 = thunk_FUN_104226e0(local_20);
    uVar6 = *(undefined4 *)(iVar2 + 4);
  }
  if (iVar1 == 0) {
LAB_104249eb:
    iVar2 = 0;
  }
  else {
    iVar2 = thunk_FUN_104226e0(&param_1);
    if (iVar2 == 0) goto LAB_104249eb;
    piVar3 = (int *)thunk_FUN_104226e0(&param_1);
    if (*piVar3 != 1) goto LAB_104249eb;
    iVar2 = thunk_FUN_104226e0(&param_1);
    if (*(int *)(iVar2 + 4) == 0) goto LAB_104249eb;
    iVar2 = thunk_FUN_104226e0(&param_1);
    iVar2 = *(int *)(iVar2 + 4);
  }
  if (iVar1 == 0) {
LAB_10424a3b:
    iVar4 = 0;
  }
  else {
    iVar4 = thunk_FUN_104226e0(&param_1);
    if (iVar4 == 0) goto LAB_10424a3b;
    piVar3 = (int *)thunk_FUN_104226e0(&param_1);
    if (*piVar3 != 4) goto LAB_10424a3b;
    iVar4 = thunk_FUN_104226e0(&param_1);
    if (*(int *)(iVar4 + 4) == 0) goto LAB_10424a3b;
    iVar4 = thunk_FUN_104226e0(&param_1);
    iVar4 = *(int *)(iVar4 + 4);
  }
  if (iVar2 == 0) {
    if (iVar4 == 0) goto LAB_10424aa1;
    iVar2 = *(int *)(iVar4 + 0x18);
    pcVar5 = *(code **)(**(int **)(iVar1 + 0x54) + 0x654);
  }
  else {
    pcVar5 = *(code **)(**(int **)(iVar1 + 0x54) + 0xfc);
  }
  (*pcVar5)(uVar6,iVar2,local_1c,local_c,local_8,local_4);
LAB_10424aa1:
  FOutputDevice::Logf(*(FOutputDevice **)GNetworkLog_exref,
                      (ushort *)*(FOutputDevice **)GNetworkLog_exref);
  return extraout_EAX & 0xffffff00;
}


// ==== 10424b60 FUN_10424b60 depth=0 from=raiz callees=thunk_FUN_104226e0@1030d04e thunk_FUN_104026b0@103034e5
// strings: 10883d84=ddddd | 

uint FUN_10424b60(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  uint uVar5;
  int local_1c;
  int local_18;
  int local_14;
  undefined4 local_10;
  float local_c;
  float local_8;
  float local_4;
  
  thunk_FUN_104026b0(*(undefined4 *)(param_1 + 0x48),param_2,"ddddd",&param_1,&local_1c,&local_18,
                     &local_14,&local_10);
  iVar1 = DAT_10b1f538;
  local_c = (float)local_1c;
  local_8 = (float)local_18;
  local_4 = (float)local_14;
  if (DAT_10b1f538 != 0) {
    iVar2 = thunk_FUN_104226e0(&param_1);
    if (iVar2 != 0) {
      piVar3 = (int *)thunk_FUN_104226e0(&param_1);
      if (*piVar3 == 1) {
        iVar2 = thunk_FUN_104226e0(&param_1);
        if (*(int *)(iVar2 + 4) != 0) {
          iVar2 = thunk_FUN_104226e0(&param_1);
          uVar4 = *(undefined4 *)(iVar2 + 4);
          goto LAB_10424c06;
        }
      }
    }
  }
  uVar4 = 0;
LAB_10424c06:
  uVar5 = (**(code **)(**(int **)(iVar1 + 0x54) + 0x100))(uVar4,local_c,local_8,local_4,local_10);
  return uVar5 & 0xffffff00;
}


// ==== 10424c70 FUN_10424c70 depth=0 from=raiz callees=thunk_FUN_104226e0@1030d04e CORE.DLL::FOutputDevice::Logf@EXTERNAL:000000b4 thunk_FUN_104026b0@103034e5
// strings: 10888ba8=(Receive)StartRotating ID:%d CurYaw:%d Dir:%d | 

uint FUN_10424c70(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  uint extraout_EAX;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  thunk_FUN_104026b0(*(undefined4 *)(param_1 + 0x48),param_2,&DAT_108810b0,&param_1,&local_8,
                     &local_c,&local_4);
  iVar1 = DAT_10b1f538;
  if (DAT_10b1f538 != 0) {
    iVar2 = thunk_FUN_104226e0(&param_1);
    if (iVar2 != 0) {
      piVar3 = (int *)thunk_FUN_104226e0(&param_1);
      if (*piVar3 == 1) {
        iVar2 = thunk_FUN_104226e0(&param_1);
        if (*(int *)(iVar2 + 4) != 0) {
          iVar2 = thunk_FUN_104226e0(&param_1);
          uVar4 = *(undefined4 *)(iVar2 + 4);
          goto LAB_10424cf9;
        }
      }
    }
  }
  uVar4 = 0;
LAB_10424cf9:
  (**(code **)(**(int **)(iVar1 + 0x54) + 0x118))(uVar4,local_8,local_c,local_4);
  FOutputDevice::Logf((FOutputDevice *)GNetworkLog_exref,*(ushort **)GNetworkLog_exref);
  return extraout_EAX & 0xffffff00;
}


// ==== 10424d80 FUN_10424d80 depth=0 from=raiz callees=thunk_FUN_104226e0@1030d04e CORE.DLL::FOutputDevice::Logf@EXTERNAL:000000b4 thunk_FUN_104026b0@103034e5
// strings: 10888c18=(Receive)FinishRotating ID:%d CurYaw:%d | 

uint FUN_10424d80(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  uint extraout_EAX;
  undefined4 local_8;
  undefined4 local_4;
  
  thunk_FUN_104026b0(*(undefined4 *)(param_1 + 0x48),param_2,&DAT_1087ff0c,&param_1,&local_8,
                     &local_4);
  iVar1 = DAT_10b1f538;
  if (DAT_10b1f538 != 0) {
    iVar2 = thunk_FUN_104226e0(&param_1);
    if (iVar2 != 0) {
      piVar3 = (int *)thunk_FUN_104226e0(&param_1);
      if (*piVar3 == 1) {
        iVar2 = thunk_FUN_104226e0(&param_1);
        if (*(int *)(iVar2 + 4) != 0) {
          iVar2 = thunk_FUN_104226e0(&param_1);
          uVar4 = *(undefined4 *)(iVar2 + 4);
          goto LAB_10424e04;
        }
      }
    }
  }
  uVar4 = 0;
LAB_10424e04:
  (**(code **)(**(int **)(iVar1 + 0x54) + 0x11c))(uVar4,local_8,local_4);
  FOutputDevice::Logf(*(FOutputDevice **)GNetworkLog_exref,
                      (ushort *)*(FOutputDevice **)GNetworkLog_exref);
  return extraout_EAX & 0xffffff00;
}


// ==== 10424e80 FUN_10424e80 depth=0 from=raiz callees=thunk_FUN_104226e0@1030d04e CORE.DLL::FOutputDevice::Logf@EXTERNAL:000000b4 thunk_FUN_104026b0@103034e5
// strings: 10888d30=dddcdddh | 10888c78=(Receive)Attack AttackerID:%d DefenderID:%d Damage:%d bMiss:%d bCritical:%d | 

uint FUN_10424e80(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  uint extraout_EAX;
  undefined4 *puVar5;
  short unaff_DI;
  uint uVar6;
  uint uVar7;
  undefined4 *puStack_64;
  byte *pbStack_60;
  int *local_5c;
  int *local_58;
  int *local_54;
  undefined4 *puStack_50;
  byte local_39;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  uint local_2c;
  int local_28;
  undefined4 local_24;
  undefined4 local_20;
  uint local_1c;
  int local_18;
  int local_14;
  int local_10;
  int *local_c;
  float local_8;
  float local_4;
  
  puStack_50 = &local_20;
  local_54 = &local_10;
  local_58 = &local_14;
  local_5c = &local_18;
  pbStack_60 = &local_39;
  puStack_64 = &local_30;
  local_20 = 0;
  local_28 = 0;
  local_2c = 0;
  thunk_FUN_104026b0(*(undefined4 *)(param_1 + 0x48),param_2,"dddcdddh",&local_34,&local_38);
  iVar1 = DAT_10b1f538;
  uVar6 = (uint)((char)local_39 < '\0');
  if ((local_39 & 0x40) != 0) {
    local_2c = 1;
  }
  puVar5 = (undefined4 *)(uint)((local_39 & 0x20) != 0);
  if ((local_39 & 0x10) != 0) {
    local_28 = 1;
  }
  local_c = (int *)(float)local_18;
  local_1c = local_39 & 0xf;
  local_8 = (float)local_14;
  local_4 = (float)local_10;
  if ((short)local_20 == 0) {
    if (DAT_10b1f538 == 0) {
LAB_10425381:
      uVar4 = 0;
    }
    else {
      puStack_50 = &local_38;
      local_54 = (int *)0x10425217;
      iVar2 = thunk_FUN_104226e0();
      if (iVar2 != 0) {
        puStack_50 = &local_38;
        local_54 = (int *)0x1042522b;
        piVar3 = (int *)thunk_FUN_104226e0();
        if (*piVar3 == 1) {
          puStack_50 = &local_38;
          local_54 = (int *)0x10425240;
          iVar2 = thunk_FUN_104226e0();
          if (*(int *)(iVar2 + 4) != 0) {
            puStack_50 = &local_38;
            local_54 = (int *)0x10425256;
            iVar2 = thunk_FUN_104226e0();
            if (*(int *)(iVar2 + 4) != 0) {
              puStack_50 = &local_38;
              local_54 = (int *)0x1042526c;
              iVar2 = thunk_FUN_104226e0();
              if (iVar2 == 0) {
LAB_104252a8:
                param_1 = 0;
              }
              else {
                puStack_50 = &local_38;
                local_54 = (int *)0x1042527c;
                piVar3 = (int *)thunk_FUN_104226e0();
                if (*piVar3 != 1) goto LAB_104252a8;
                puStack_50 = &local_38;
                local_54 = (int *)0x1042528d;
                iVar2 = thunk_FUN_104226e0();
                if (*(int *)(iVar2 + 4) == 0) goto LAB_104252a8;
                puStack_50 = &local_38;
                local_54 = (int *)0x1042529f;
                iVar2 = thunk_FUN_104226e0();
                param_1 = *(undefined4 *)(iVar2 + 4);
              }
              puStack_50 = &local_34;
              local_54 = (int *)0x104252bc;
              iVar2 = thunk_FUN_104226e0();
              if (iVar2 == 0) {
LAB_104252f4:
                uVar4 = 0;
              }
              else {
                puStack_50 = &local_34;
                local_54 = (int *)0x104252cc;
                piVar3 = (int *)thunk_FUN_104226e0();
                if (*piVar3 != 1) goto LAB_104252f4;
                puStack_50 = &local_34;
                local_54 = (int *)0x104252dd;
                iVar2 = thunk_FUN_104226e0();
                if (*(int *)(iVar2 + 4) == 0) goto LAB_104252f4;
                puStack_50 = &local_34;
                local_54 = (int *)0x104252ef;
                iVar2 = thunk_FUN_104226e0();
                uVar4 = *(undefined4 *)(iVar2 + 4);
              }
              puStack_50 = (undefined4 *)local_1c;
              local_5c = local_c;
              local_58 = (int *)local_8;
              local_54 = (int *)local_4;
              pbStack_60 = (byte *)local_28;
              puStack_64 = puVar5;
              (**(code **)(**(int **)(iVar1 + 0x54) + 300))(uVar4,param_1,local_30,uVar6,local_2c);
              goto LAB_104253c0;
            }
          }
        }
      }
      puStack_50 = &local_34;
      local_54 = (int *)0x10425349;
      iVar2 = thunk_FUN_104226e0();
      if (iVar2 == 0) goto LAB_10425381;
      puStack_50 = &local_34;
      local_54 = (int *)0x10425359;
      piVar3 = (int *)thunk_FUN_104226e0();
      if (*piVar3 != 1) goto LAB_10425381;
      puStack_50 = &local_34;
      local_54 = (int *)0x1042536a;
      iVar2 = thunk_FUN_104226e0();
      if (*(int *)(iVar2 + 4) == 0) goto LAB_10425381;
      puStack_50 = &local_34;
      local_54 = (int *)0x1042537c;
      iVar2 = thunk_FUN_104226e0();
      uVar4 = *(undefined4 *)(iVar2 + 4);
    }
    puStack_50 = (undefined4 *)local_1c;
    local_5c = local_c;
    local_58 = (int *)local_8;
    local_54 = (int *)local_4;
    pbStack_60 = (byte *)local_28;
    puStack_64 = puVar5;
    (**(code **)(**(int **)(iVar1 + 0x54) + 0x128))(uVar4,local_38,local_30,uVar6);
    goto LAB_104253c0;
  }
  if (DAT_10b1f538 == 0) {
LAB_10424f90:
    local_24 = 0;
  }
  else {
    puStack_50 = &local_34;
    local_54 = (int *)0x10424f54;
    iVar2 = thunk_FUN_104226e0();
    if (iVar2 == 0) goto LAB_10424f90;
    puStack_50 = &local_34;
    local_54 = (int *)0x10424f64;
    piVar3 = (int *)thunk_FUN_104226e0();
    if (*piVar3 != 1) goto LAB_10424f90;
    puStack_50 = &local_34;
    local_54 = (int *)0x10424f75;
    iVar2 = thunk_FUN_104226e0();
    if (*(int *)(iVar2 + 4) == 0) goto LAB_10424f90;
    puStack_50 = &local_34;
    local_54 = (int *)0x10424f87;
    iVar2 = thunk_FUN_104226e0();
    local_24 = *(undefined4 *)(iVar2 + 4);
  }
  if (iVar1 == 0) {
LAB_10425085:
    puStack_50 = (undefined4 *)local_1c;
    local_5c = local_c;
    local_58 = (int *)local_8;
    local_54 = (int *)local_4;
    pbStack_60 = (byte *)local_28;
    puStack_64 = puVar5;
    (**(code **)(**(int **)(iVar1 + 0x54) + 0x128))(local_24,local_38,local_30);
  }
  else {
    puStack_50 = &local_38;
    local_54 = (int *)0x10424fb2;
    iVar2 = thunk_FUN_104226e0();
    if (iVar2 == 0) goto LAB_10425085;
    puStack_50 = &local_38;
    local_54 = (int *)0x10424fc6;
    piVar3 = (int *)thunk_FUN_104226e0();
    if (*piVar3 != 1) goto LAB_10425085;
    puStack_50 = &local_38;
    local_54 = (int *)0x10424fdb;
    iVar2 = thunk_FUN_104226e0();
    if (*(int *)(iVar2 + 4) == 0) goto LAB_10425085;
    puStack_50 = &local_38;
    local_54 = (int *)0x10424ff1;
    iVar2 = thunk_FUN_104226e0();
    if (*(int *)(iVar2 + 4) == 0) goto LAB_10425085;
    puStack_50 = &local_38;
    local_54 = (int *)0x10425007;
    iVar2 = thunk_FUN_104226e0();
    if (iVar2 == 0) {
LAB_1042503f:
      uVar4 = 0;
    }
    else {
      puStack_50 = &local_38;
      local_54 = (int *)0x10425017;
      piVar3 = (int *)thunk_FUN_104226e0();
      if (*piVar3 != 1) goto LAB_1042503f;
      puStack_50 = &local_38;
      local_54 = (int *)0x10425028;
      iVar2 = thunk_FUN_104226e0();
      if (*(int *)(iVar2 + 4) == 0) goto LAB_1042503f;
      puStack_50 = &local_38;
      local_54 = (int *)0x1042503a;
      iVar2 = thunk_FUN_104226e0();
      uVar4 = *(undefined4 *)(iVar2 + 4);
    }
    puStack_50 = (undefined4 *)local_1c;
    local_5c = local_c;
    local_58 = (int *)local_8;
    local_54 = (int *)local_4;
    pbStack_60 = (byte *)local_28;
    uVar7 = local_2c;
    puStack_64 = puVar5;
    (**(code **)(**(int **)(iVar1 + 0x54) + 300))(local_24,uVar4,local_30,uVar6);
    uVar6 = uVar7;
  }
  local_54 = (int *)0x0;
  if (0 < unaff_DI) {
    do {
      local_24 = thunk_FUN_104026b0(*(undefined4 *)(local_28 + 0x48),local_24,&DAT_10887ec4,
                                    &puStack_64,&local_5c,&stack0xffffff9b);
      iVar1 = DAT_10b1f538;
      if ((((DAT_10b1f538 == 0) || (iVar2 = thunk_FUN_104226e0(&puStack_64), iVar2 == 0)) ||
          (piVar3 = (int *)thunk_FUN_104226e0(&puStack_64), *piVar3 != 1)) ||
         (iVar2 = thunk_FUN_104226e0(&puStack_64), *(int *)(iVar2 + 4) == 0)) {
        iVar2 = 0;
      }
      else {
        iVar2 = thunk_FUN_104226e0(&puStack_64);
        iVar2 = *(int *)(iVar2 + 4);
      }
      local_58 = (int *)(uint)((uVar6 & 0x40000000) != 0);
      if (iVar2 != 0) {
        (**(code **)(**(int **)(iVar1 + 0x54) + 0x68c))
                  (puStack_50,iVar2,local_5c,(int)uVar6 < 0,local_58,(uVar6 & 0x20000000) != 0,
                   (uVar6 & 0x10000000) != 0,local_38,local_34,local_30,uVar6 >> 0x18 & 0xf);
      }
      local_54 = (int *)((int)local_54 + 1);
    } while ((short)local_54 < unaff_DI);
  }
LAB_104253c0:
  FOutputDevice::Logf((FOutputDevice *)GNetworkLog_exref,*(ushort **)GNetworkLog_exref);
  return extraout_EAX & 0xffffff00;
}


// ==== 10425770 FUN_10425770 depth=0 from=raiz callees=CORE.DLL::L2ParamStack::PushBack@EXTERNAL:00000136 thunk_FUN_104226e0@1030d04e CORE.DLL::L2ParamStack::~L2ParamStack@EXTERNAL:0000012a CORE.DLL::L2ParamStack::L2ParamStack@EXTERNAL:0000012b CORE.DLL::FOutputDevice::Logf@EXTERNAL:000000b4 thunk_FUN_104026b0@103034e5
// strings: 108874cc=ddddddd | 10888e0c=(Receive)Die ID:%d | 

uint FUN_10425770(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  uint extraout_EAX;
  void *local_34;
  void *local_30;
  void *local_2c;
  void *local_28;
  void *local_24;
  void *local_20;
  L2ParamStack local_1c [12];
  void *pvStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  FOutputDevice *local_4;
  
  local_4 = (FOutputDevice *)0xffffffff;
  puStack_8 = &LAB_1080fcd9;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  thunk_FUN_104026b0(*(undefined4 *)(param_1 + 0x48),param_2,"ddddddd",&param_1,&local_34,&local_30,
                     &local_2c,&local_28,&local_24,&local_20);
  L2ParamStack::L2ParamStack(local_1c,10);
  local_4 = (FOutputDevice *)0x0;
  L2ParamStack::PushBack(local_1c,local_34);
  L2ParamStack::PushBack(local_1c,local_30);
  L2ParamStack::PushBack(local_1c,local_2c);
  L2ParamStack::PushBack(local_1c,local_28);
  L2ParamStack::PushBack(local_1c,local_24);
  L2ParamStack::PushBack(local_1c,local_20);
  iVar1 = DAT_10b1f538;
  if (DAT_10b1f538 != 0) {
    iVar2 = thunk_FUN_104226e0(&param_1);
    if (iVar2 != 0) {
      piVar3 = (int *)thunk_FUN_104226e0(&param_1);
      if (*piVar3 == 1) {
        iVar2 = thunk_FUN_104226e0(&param_1);
        if (*(int *)(iVar2 + 4) != 0) {
          iVar2 = thunk_FUN_104226e0(&param_1);
          uVar4 = *(undefined4 *)(iVar2 + 4);
          goto LAB_10425879;
        }
      }
    }
  }
  uVar4 = 0;
LAB_10425879:
  (**(code **)(**(int **)(iVar1 + 0x54) + 0x13c))(uVar4,local_1c);
  FOutputDevice::Logf(local_4,*(ushort **)GNetworkLog_exref);
  puStack_8 = (undefined1 *)0xffffffff;
  L2ParamStack::~L2ParamStack(local_1c);
  ExceptionList = pvStack_10;
  return extraout_EAX & 0xffffff00;
}


// ==== 10425930 FUN_10425930 depth=0 from=raiz callees=thunk_FUN_104226e0@1030d04e CORE.DLL::FOutputDevice::Logf@EXTERNAL:000000b4 thunk_FUN_104026b0@103034e5
// strings: 108874cc=ddddddd | 10888e40=(Receive)Ride ID:%d bRide:%d, RideType:%d RideClassID : %d | 

uint FUN_10425930(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  uint extraout_EAX;
  int local_24;
  int local_20;
  int local_1c;
  FOutputDevice *local_18;
  undefined4 local_14;
  undefined4 local_10;
  float local_c;
  float local_8;
  float local_4;
  
  local_24 = 0;
  local_20 = 0;
  local_1c = 0;
  thunk_FUN_104026b0(*(undefined4 *)(param_1 + 0x48),param_2,"ddddddd",&param_1,&local_10,&local_14,
                     &local_18,&local_24,&local_20,&local_1c);
  iVar1 = DAT_10b1f538;
  if (DAT_10b1f538 != 0) {
    iVar2 = thunk_FUN_104226e0(&param_1);
    if (iVar2 != 0) {
      piVar3 = (int *)thunk_FUN_104226e0(&param_1);
      if (*piVar3 == 1) {
        iVar2 = thunk_FUN_104226e0(&param_1);
        if (*(int *)(iVar2 + 4) != 0) {
          iVar2 = thunk_FUN_104226e0(&param_1);
          uVar4 = *(undefined4 *)(iVar2 + 4);
          goto LAB_104259e0;
        }
      }
    }
  }
  uVar4 = 0;
LAB_104259e0:
  local_c = (float)local_24;
  local_8 = (float)local_20;
  local_4 = (float)local_1c;
  (**(code **)(**(int **)(iVar1 + 0x54) + 0x140))
            (uVar4,local_10,local_14,local_18,local_c,local_8,local_4);
  FOutputDevice::Logf(local_18,*(ushort **)GNetworkLog_exref);
  return extraout_EAX & 0xffffff00;
}


// ==== 10425d90 FUN_10425d90 depth=0 from=raiz callees=thunk_FUN_104226e0@1030d04e CORE.DLL::FOutputDevice::Logf@EXTERNAL:000000b4 thunk_FUN_104026b0@103034e5
// strings: 10883d84=ddddd | 10888fc8=(Receive)GetItem UserID:%d, ItemID:%d | 

uint FUN_10425d90(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  uint extraout_EAX;
  undefined4 uVar5;
  FOutputDevice *this;
  undefined1 local_1c [4];
  int local_18;
  int local_14;
  int local_10;
  float local_c;
  FOutputDevice *local_8;
  float local_4;
  
  thunk_FUN_104026b0(*(undefined4 *)(param_1 + 0x48),param_2,"ddddd",local_1c,&param_1,&local_18,
                     &local_14,&local_10);
  iVar1 = DAT_10b1f538;
  local_c = (float)local_18;
  local_8 = (FOutputDevice *)(float)local_14;
  local_4 = (float)local_10;
  if (DAT_10b1f538 == 0) {
LAB_10425e35:
    uVar5 = 0;
  }
  else {
    iVar2 = thunk_FUN_104226e0(&param_1);
    if (iVar2 == 0) goto LAB_10425e35;
    piVar3 = (int *)thunk_FUN_104226e0(&param_1);
    if (*piVar3 != 2) goto LAB_10425e35;
    iVar2 = thunk_FUN_104226e0(&param_1);
    if (*(int *)(iVar2 + 4) == 0) goto LAB_10425e35;
    iVar2 = thunk_FUN_104226e0(&param_1);
    uVar5 = *(undefined4 *)(iVar2 + 4);
  }
  if (iVar1 != 0) {
    iVar2 = thunk_FUN_104226e0(local_1c);
    if (iVar2 != 0) {
      piVar3 = (int *)thunk_FUN_104226e0(local_1c);
      if (*piVar3 == 1) {
        iVar2 = thunk_FUN_104226e0(local_1c);
        if (*(int *)(iVar2 + 4) != 0) {
          iVar2 = thunk_FUN_104226e0(local_1c);
          uVar4 = *(undefined4 *)(iVar2 + 4);
          goto LAB_10425e87;
        }
      }
    }
  }
  uVar4 = 0;
LAB_10425e87:
  this = local_8;
  (**(code **)(**(int **)(iVar1 + 0x54) + 0x16c))(uVar4,uVar5,local_c,local_8,local_4);
  FOutputDevice::Logf(this,*(ushort **)GNetworkLog_exref);
  return extraout_EAX & 0xffffff00;
}


// ==== 104266f0 FUN_104266f0 depth=0 from=raiz callees=thunk_FUN_104226e0@1030d04e CORE.DLL::FOutputDevice::Logf@EXTERNAL:000000b4 thunk_FUN_104026b0@103034e5 __alloca_probe@107a69d0
// strings: 10889188=(Receive)NpcHtmlMessage UserID:%d | 

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

uint FUN_104266f0(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  uint extraout_EAX;
  FOutputDevice *this;
  undefined1 local_4008 [4];
  FOutputDevice *local_4004;
  undefined1 local_4000 [16380];
  undefined4 uStack_4;
  
  uStack_4 = 0x104266fa;
  local_4004 = (FOutputDevice *)0x0;
  thunk_FUN_104026b0(*(undefined4 *)(param_1 + 0x48),param_2,&DAT_10885760,local_4008,0x4000,
                     local_4000,&local_4004);
  iVar1 = DAT_10b1f538;
  if (DAT_10b1f538 != 0) {
    iVar2 = thunk_FUN_104226e0(local_4008);
    if (iVar2 != 0) {
      piVar3 = (int *)thunk_FUN_104226e0(local_4008);
      if (*piVar3 == 1) {
        iVar2 = thunk_FUN_104226e0(local_4008);
        if (*(int *)(iVar2 + 4) != 0) {
          iVar2 = thunk_FUN_104226e0(local_4008);
          uVar4 = *(undefined4 *)(iVar2 + 4);
          goto LAB_1042678e;
        }
      }
    }
  }
  uVar4 = 0;
LAB_1042678e:
  this = local_4004;
  (**(code **)(**(int **)(iVar1 + 0x54) + 0x1f0))(uVar4,local_4000);
  FOutputDevice::Logf(this,*(ushort **)GNetworkLog_exref);
  return extraout_EAX & 0xffffff00;
}


// ==== 10426810 FUN_10426810 depth=0 from=raiz callees=thunk_FUN_10422800@1030e3ef thunk_FUN_104026b0@103034e5
// strings: 

uint FUN_10426810(int param_1,undefined4 param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined1 local_1c [4];
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1080fcf0;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffc0;
  local_8 = 0;
  ExceptionList = &local_10;
  uVar1 = thunk_FUN_104026b0(*(undefined4 *)(param_1 + 0x48),param_2,&DAT_1087ff8c,&local_18);
  uVar2 = uVar1;
  for (iVar3 = 0; iVar3 < local_18; iVar3 = iVar3 + 1) {
    uVar2 = thunk_FUN_104026b0(*(undefined4 *)(param_1 + 0x48),uVar2,&DAT_108810b0,local_1c,
                               &local_20,&local_24,&local_28);
    uVar1 = thunk_FUN_10422800(local_1c);
    if (uVar1 != 0) {
      *(undefined4 *)(uVar1 + 4) = local_20;
      *(undefined4 *)(uVar1 + 8) = local_24;
      *(undefined4 *)(uVar1 + 0xc) = local_28;
    }
  }
  ExceptionList = local_10;
  return uVar1 & 0xffffff00;
}


// ==== 104271c0 FUN_104271c0 depth=0 from=raiz callees=thunk_FUN_104226e0@1030d04e CORE.DLL::FOutputDevice::Logf@EXTERNAL:000000b4 thunk_FUN_104026b0@103034e5
// strings: 10883d84=ddddd | 10889328=(Receive)TeleportToLocationPacket id:%d, x:%d, y:%d, z:%d, IsValidation:%d | 

uint FUN_104271c0(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  uint extraout_EAX;
  undefined4 local_1c;
  int local_18;
  int local_14;
  int local_10;
  float local_c;
  float local_8;
  float local_4;
  
  thunk_FUN_104026b0(*(undefined4 *)(param_1 + 0x48),param_2,"ddddd",&param_1,&local_10,&local_14,
                     &local_18,&local_1c);
  iVar1 = DAT_10b1f538;
  if (DAT_10b1f538 != 0) {
    iVar2 = thunk_FUN_104226e0(&param_1);
    if (iVar2 != 0) {
      piVar3 = (int *)thunk_FUN_104226e0(&param_1);
      if (*piVar3 == 1) {
        iVar2 = thunk_FUN_104226e0(&param_1);
        if (*(int *)(iVar2 + 4) != 0) {
          iVar2 = thunk_FUN_104226e0(&param_1);
          uVar4 = *(undefined4 *)(iVar2 + 4);
          goto LAB_1042724e;
        }
      }
    }
  }
  uVar4 = 0;
LAB_1042724e:
  local_c = (float)local_10;
  local_8 = (float)local_14;
  local_4 = (float)local_18;
  (**(code **)(**(int **)(iVar1 + 0x54) + 0x264))(uVar4,local_c,local_8,local_4,local_1c);
  FOutputDevice::Logf(*(FOutputDevice **)GNetworkLog_exref,
                      (ushort *)*(FOutputDevice **)GNetworkLog_exref);
  return extraout_EAX & 0xffffff00;
}


// ==== 10427310 FUN_10427310 depth=0 from=raiz callees=thunk_FUN_104226e0@1030d04e CORE.DLL::FOutputDevice::Logf@EXTERNAL:000000b4 thunk_FUN_104026b0@103034e5
// strings: 10886c3c=dddddd | 108893e0=(Receive)TargetSelectedPacket actorid:%d, targetid:%d | 

uint FUN_10427310(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  uint extraout_EAX;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined1 local_24 [4];
  undefined4 local_20;
  int local_1c;
  int local_18;
  int local_14;
  undefined1 local_10 [4];
  float local_c;
  float local_8;
  float local_4;
  
  thunk_FUN_104026b0(*(undefined4 *)(param_1 + 0x48),param_2,"dddddd",local_24,&param_1,&local_1c,
                     &local_18,&local_14,local_10);
  iVar1 = DAT_10b1f538;
  local_c = (float)local_1c;
  uVar5 = 0;
  local_8 = (float)local_18;
  local_4 = (float)local_14;
  if (DAT_10b1f538 == 0) {
LAB_104273c0:
    local_20 = 0;
  }
  else {
    iVar2 = thunk_FUN_104226e0(&param_1);
    if (iVar2 == 0) goto LAB_104273c0;
    piVar3 = (int *)thunk_FUN_104226e0(&param_1);
    if (*piVar3 != 4) goto LAB_104273c0;
    iVar2 = thunk_FUN_104226e0(&param_1);
    if (*(int *)(iVar2 + 4) == 0) goto LAB_104273c0;
    iVar2 = thunk_FUN_104226e0(&param_1);
    local_20 = *(undefined4 *)(iVar2 + 4);
  }
  if (iVar1 == 0) {
LAB_10427411:
    uVar6 = 0;
  }
  else {
    iVar2 = thunk_FUN_104226e0(&param_1);
    if (iVar2 == 0) goto LAB_10427411;
    piVar3 = (int *)thunk_FUN_104226e0(&param_1);
    if (*piVar3 != 2) goto LAB_10427411;
    iVar2 = thunk_FUN_104226e0(&param_1);
    if (*(int *)(iVar2 + 4) == 0) goto LAB_10427411;
    iVar2 = thunk_FUN_104226e0(&param_1);
    uVar6 = *(undefined4 *)(iVar2 + 4);
  }
  if (iVar1 != 0) {
    iVar2 = thunk_FUN_104226e0(&param_1);
    if (iVar2 != 0) {
      piVar3 = (int *)thunk_FUN_104226e0(&param_1);
      if (*piVar3 == 1) {
        iVar2 = thunk_FUN_104226e0(&param_1);
        if (*(int *)(iVar2 + 4) != 0) {
          iVar2 = thunk_FUN_104226e0(&param_1);
          uVar5 = *(undefined4 *)(iVar2 + 4);
        }
      }
    }
  }
  if (iVar1 != 0) {
    iVar2 = thunk_FUN_104226e0(local_24);
    if (iVar2 != 0) {
      piVar3 = (int *)thunk_FUN_104226e0(local_24);
      if (*piVar3 == 1) {
        iVar2 = thunk_FUN_104226e0(local_24);
        if (*(int *)(iVar2 + 4) != 0) {
          iVar2 = thunk_FUN_104226e0(local_24);
          uVar4 = *(undefined4 *)(iVar2 + 4);
          goto LAB_104274ae;
        }
      }
    }
  }
  uVar4 = 0;
LAB_104274ae:
  (**(code **)(**(int **)(iVar1 + 0x54) + 0x268))
            (uVar4,param_1,uVar5,uVar6,local_20,local_c,local_8,local_4);
  FOutputDevice::Logf(*(FOutputDevice **)GNetworkLog_exref,
                      (ushort *)*(FOutputDevice **)GNetworkLog_exref);
  return extraout_EAX & 0xffffff00;
}


// ==== 10427590 FUN_10427590 depth=0 from=raiz callees=thunk_FUN_104226e0@1030d04e CORE.DLL::FOutputDevice::Logf@EXTERNAL:000000b4 thunk_FUN_104026b0@103034e5
// strings: 10889468=(Receive)MyTargetSelectedPacket | 

uint FUN_10427590(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  uint extraout_EAX;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 local_8;
  undefined1 local_4 [4];
  
  thunk_FUN_104026b0(*(undefined4 *)(param_1 + 0x48),param_2,&DAT_1088545c,&local_8,&param_1,local_4
                    );
  iVar1 = DAT_10b1f538;
  if (DAT_10b1f538 == 0) {
LAB_10427614:
    uVar6 = 0;
  }
  else {
    iVar2 = thunk_FUN_104226e0(&local_8);
    if (iVar2 == 0) goto LAB_10427614;
    piVar3 = (int *)thunk_FUN_104226e0(&local_8);
    if (*piVar3 != 4) goto LAB_10427614;
    iVar2 = thunk_FUN_104226e0(&local_8);
    if (*(int *)(iVar2 + 4) == 0) goto LAB_10427614;
    iVar2 = thunk_FUN_104226e0(&local_8);
    uVar6 = *(undefined4 *)(iVar2 + 4);
  }
  if (iVar1 == 0) {
LAB_10427664:
    uVar5 = 0;
  }
  else {
    iVar2 = thunk_FUN_104226e0(&local_8);
    if (iVar2 == 0) goto LAB_10427664;
    piVar3 = (int *)thunk_FUN_104226e0(&local_8);
    if (*piVar3 != 2) goto LAB_10427664;
    iVar2 = thunk_FUN_104226e0(&local_8);
    if (*(int *)(iVar2 + 4) == 0) goto LAB_10427664;
    iVar2 = thunk_FUN_104226e0(&local_8);
    uVar5 = *(undefined4 *)(iVar2 + 4);
  }
  if (iVar1 != 0) {
    iVar2 = thunk_FUN_104226e0(&local_8);
    if (iVar2 != 0) {
      piVar3 = (int *)thunk_FUN_104226e0(&local_8);
      if (*piVar3 == 1) {
        iVar2 = thunk_FUN_104226e0(&local_8);
        if (*(int *)(iVar2 + 4) != 0) {
          iVar2 = thunk_FUN_104226e0(&local_8);
          uVar4 = *(undefined4 *)(iVar2 + 4);
          goto LAB_104276b6;
        }
      }
    }
  }
  uVar4 = 0;
LAB_104276b6:
  (**(code **)(**(int **)(iVar1 + 0x54) + 0x26c))(uVar4,local_8,uVar5,uVar6,(int)(short)param_1);
  FOutputDevice::Logf((FOutputDevice *)GNetworkLog_exref,*(ushort **)GNetworkLog_exref);
  return extraout_EAX & 0xffffff00;
}


// ==== 10427750 FUN_10427750 depth=0 from=raiz callees=thunk_FUN_104226e0@1030d04e CORE.DLL::FOutputDevice::Logf@EXTERNAL:000000b4 thunk_FUN_104026b0@103034e5
// strings: 10883d84=ddddd | 108894b8=(Receive)TargetUnselectedPacket id:%d | 

uint FUN_10427750(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  uint extraout_EAX;
  int local_1c;
  int local_18;
  int local_14;
  FOutputDevice *local_10;
  float local_c;
  float local_8;
  float local_4;
  
  thunk_FUN_104026b0(*(undefined4 *)(param_1 + 0x48),param_2,"ddddd",&param_1,&local_1c,&local_18,
                     &local_14,&local_10);
  iVar1 = DAT_10b1f538;
  local_c = (float)local_1c;
  local_8 = (float)local_18;
  local_4 = (float)local_14;
  if (DAT_10b1f538 != 0) {
    iVar2 = thunk_FUN_104226e0(&param_1);
    if (iVar2 != 0) {
      piVar3 = (int *)thunk_FUN_104226e0(&param_1);
      if (*piVar3 == 1) {
        iVar2 = thunk_FUN_104226e0(&param_1);
        if (*(int *)(iVar2 + 4) != 0) {
          iVar2 = thunk_FUN_104226e0(&param_1);
          uVar4 = *(undefined4 *)(iVar2 + 4);
          goto LAB_104277f6;
        }
      }
    }
  }
  uVar4 = 0;
LAB_104277f6:
  (**(code **)(**(int **)(iVar1 + 0x54) + 0x270))(uVar4,local_c,local_8,local_4,local_10);
  FOutputDevice::Logf(local_10,*(ushort **)GNetworkLog_exref);
  return extraout_EAX & 0xffffff00;
}


// ==== 10427b20 FUN_10427b20 depth=0 from=raiz callees=thunk_FUN_104226e0@1030d04e CORE.DLL::FOutputDevice::Logf@EXTERNAL:000000b4 thunk_FUN_104026b0@103034e5
// strings: 10889640=(Receive)ChangeMoveTypePacket id:%d, MoveType:%d, EnvType:%d | 

uint FUN_10427b20(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  uint extraout_EAX;
  undefined4 local_8;
  undefined4 local_4;
  
  thunk_FUN_104026b0(*(undefined4 *)(param_1 + 0x48),param_2,&DAT_1087ff0c,&param_1,&local_4,
                     &local_8);
  iVar1 = DAT_10b1f538;
  if (DAT_10b1f538 != 0) {
    iVar2 = thunk_FUN_104226e0(&param_1);
    if (iVar2 != 0) {
      piVar3 = (int *)thunk_FUN_104226e0(&param_1);
      if (*piVar3 == 1) {
        iVar2 = thunk_FUN_104226e0(&param_1);
        if (*(int *)(iVar2 + 4) != 0) {
          iVar2 = thunk_FUN_104226e0(&param_1);
          uVar4 = *(undefined4 *)(iVar2 + 4);
          goto LAB_10427ba4;
        }
      }
    }
  }
  uVar4 = 0;
LAB_10427ba4:
  (**(code **)(**(int **)(iVar1 + 0x54) + 0x280))(uVar4,local_4,local_8);
  FOutputDevice::Logf((FOutputDevice *)GNetworkLog_exref,*(ushort **)GNetworkLog_exref);
  return extraout_EAX & 0xffffff00;
}


// ==== 10427c20 FUN_10427c20 depth=0 from=raiz callees=thunk_FUN_104226e0@1030d04e CORE.DLL::FOutputDevice::Logf@EXTERNAL:000000b4 thunk_FUN_104026b0@103034e5
// strings: 10883d84=ddddd | 108896d8=(Receive)ChangeWaitTypePacket id:%d, WaitType:%d | 

uint FUN_10427c20(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  uint extraout_EAX;
  undefined4 local_1c;
  int local_18;
  int local_14;
  int local_10;
  float local_c;
  float local_8;
  float local_4;
  
  thunk_FUN_104026b0(*(undefined4 *)(param_1 + 0x48),param_2,"ddddd",&param_1,&local_1c,&local_18,
                     &local_14,&local_10);
  iVar1 = DAT_10b1f538;
  local_c = (float)local_18;
  local_8 = (float)local_14;
  local_4 = (float)local_10;
  if (DAT_10b1f538 != 0) {
    iVar2 = thunk_FUN_104226e0(&param_1);
    if (iVar2 != 0) {
      piVar3 = (int *)thunk_FUN_104226e0(&param_1);
      if (*piVar3 == 1) {
        iVar2 = thunk_FUN_104226e0(&param_1);
        if (*(int *)(iVar2 + 4) != 0) {
          iVar2 = thunk_FUN_104226e0(&param_1);
          uVar4 = *(undefined4 *)(iVar2 + 4);
          goto LAB_10427cc6;
        }
      }
    }
  }
  uVar4 = 0;
LAB_10427cc6:
  (**(code **)(**(int **)(iVar1 + 0x54) + 0x284))(uVar4,local_1c,local_c,local_8,local_4);
  FOutputDevice::Logf(*(FOutputDevice **)GNetworkLog_exref,
                      (ushort *)*(FOutputDevice **)GNetworkLog_exref);
  return extraout_EAX & 0xffffff00;
}


// ==== 10427d60 FUN_10427d60 depth=0 from=raiz callees=CORE.DLL::L2ParamStack::PushBack@EXTERNAL:00000136 WS2_32.DLL::closesocket@EXTERNAL:0000000d KERNEL32.DLL::DeleteCriticalSection@EXTERNAL:000003e8 CORE.DLL::L2ParamStack::~L2ParamStack@EXTERNAL:0000012a CORE.DLL::L2ParamStack::L2ParamStack@EXTERNAL:0000012b CORE.DLL::FOutputDevice::Logf@EXTERNAL:000000b4 thunk_FUN_104026b0@103034e5
// strings: 1088978c=dddddddddh | 10889750=(Receive) MagicSkillUse | 

undefined4 FUN_10427d60(void *param_1,undefined4 param_2)

{
  int iVar1;
  longlong lVar2;
  void *pvVar3;
  short sVar4;
  undefined4 uVar5;
  code *pcVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  short sVar10;
  int *piVar11;
  undefined4 local_48;
  undefined4 local_44;
  int local_40;
  void *local_3c;
  uint local_38;
  void *local_34;
  void *local_30;
  void *local_2c;
  void *local_28;
  void *local_24;
  uint local_20;
  L2ParamStack aLStack_1c [8];
  void *pvStack_14;
  void *pvStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  pvVar3 = param_1;
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_1080fd09;
  pvStack_c = ExceptionList;
  iVar8 = 0;
  local_48 = 0;
  local_44 = 0;
  local_40 = 0;
  ExceptionList = &pvStack_c;
  uVar5 = thunk_FUN_104026b0(*(undefined4 *)((int)param_1 + 0x48),param_2,"dddddddddh",&local_38,
                             &local_20,&local_34,&local_30,&param_1,&local_3c,&local_2c,&local_28,
                             &local_24,&local_48);
  sVar4 = 0;
  if ((short)local_48 != 0) {
    lVar2 = (ulonglong)((int)(short)local_48 + 1) * 2;
    iVar8 = (**(code **)**(undefined4 **)GMalloc_exref)
                      ((uint)lVar2 | -(uint)((int)((ulonglong)lVar2 >> 0x20) != 0),&DAT_10853a28);
    sVar4 = (short)local_48;
  }
  sVar10 = 0;
  if (0 < sVar4) {
    do {
      uVar5 = thunk_FUN_104026b0(*(undefined4 *)((int)pvVar3 + 0x48),uVar5,&DAT_1088494c,
                                 iVar8 + sVar10 * 2);
      sVar10 = sVar10 + 1;
    } while (sVar10 < (short)local_48);
  }
  uVar5 = thunk_FUN_104026b0(*(undefined4 *)((int)pvVar3 + 0x48),uVar5,&DAT_1088494c,&local_44);
  sVar4 = 0;
  if ((short)local_44 != 0) {
    lVar2 = (ulonglong)((short)local_44 * 3 + 1) * 4;
    local_40 = (**(code **)**(undefined4 **)GMalloc_exref)
                         ((uint)lVar2 | -(uint)((int)((ulonglong)lVar2 >> 0x20) != 0),&DAT_10853a28)
    ;
    sVar4 = (short)local_44;
  }
  sVar10 = 0;
  if (0 < sVar4) {
    do {
      iVar1 = local_40 + sVar10 * 0xc;
      uVar5 = thunk_FUN_104026b0(*(undefined4 *)((int)pvVar3 + 0x48),uVar5,&DAT_1087ff0c,iVar1,
                                 iVar1 + 4,iVar1 + 8);
      sVar10 = sVar10 + 1;
    } while (sVar10 < (short)local_44);
  }
  if ((void *)((int)param_1 * -0xae1 + -0xd268) == local_3c) {
    iVar8 = *(int *)((int)pvVar3 + 0x48);
    if (*(SOCKET *)(iVar8 + 0x38) != 0) {
      closesocket(*(SOCKET *)(iVar8 + 0x38));
      DeleteCriticalSection((LPCRITICAL_SECTION)(iVar8 + 0x4efc));
    }
    *(undefined4 *)(iVar8 + 0x38) = 0;
    if (*(int *)(iVar8 + 0x495c) != 0) {
      *(undefined4 *)(iVar8 + 0x495c) = 0;
      DAT_10b1f53c = 0;
    }
    (**(code **)(**(int **)(DAT_10b1f538 + 0x54) + 0x314))(2);
    ExceptionList = pvStack_10;
    return 1;
  }
  L2ParamStack::L2ParamStack(aLStack_1c,0x40);
  uStack_4 = 0;
  L2ParamStack::PushBack(aLStack_1c,local_34);
  L2ParamStack::PushBack(aLStack_1c,local_30);
  L2ParamStack::PushBack(aLStack_1c,param_1);
  L2ParamStack::PushBack(aLStack_1c,local_3c);
  L2ParamStack::PushBack(aLStack_1c,(void *)(int)(short)local_48);
  L2ParamStack::PushBack(aLStack_1c,local_2c);
  L2ParamStack::PushBack(aLStack_1c,local_28);
  L2ParamStack::PushBack(aLStack_1c,local_24);
  L2ParamStack::PushBack(aLStack_1c,(void *)(int)(short)local_44);
  if ((short)local_48 != 0) {
    sVar4 = 0;
    if (0 < (short)local_48) {
      do {
        L2ParamStack::PushBack(aLStack_1c,(void *)(int)*(short *)(iVar8 + sVar4 * 2));
        sVar4 = sVar4 + 1;
      } while (sVar4 < (short)local_48);
    }
    (**(code **)(**(int **)GMalloc_exref + 8))(iVar8);
  }
  iVar8 = local_40;
  if ((short)local_44 != 0) {
    sVar4 = 0;
    if (0 < (short)local_44) {
      do {
        iVar1 = iVar8 + sVar4 * 0xc;
        L2ParamStack::PushBack(aLStack_1c,*(void **)(iVar8 + sVar4 * 0xc));
        L2ParamStack::PushBack(aLStack_1c,*(void **)(iVar1 + 4));
        L2ParamStack::PushBack(aLStack_1c,*(void **)(iVar1 + 8));
        sVar4 = sVar4 + 1;
      } while (sVar4 < (short)local_44);
    }
    (**(code **)(**(int **)GMalloc_exref + 8))(iVar8);
  }
  if (DAT_10b1f538 == 0) goto LAB_104280e7;
  iVar8 = *(int *)(*(int *)(DAT_10b1f538 + 0x1a0) +
                  (*(int *)(DAT_10b1f538 + 0x1a4) - 1U & local_20) * 4);
  uVar7 = uRam00000004;
  if (iVar8 != -1) {
    iVar1 = *(int *)(DAT_10b1f538 + 0x194);
    do {
      if (*(uint *)(iVar1 + 4 + iVar8 * 0xc) == local_20) {
        if (*(int *)(iVar1 + 8 + iVar8 * 0xc) != 0) {
          iVar8 = *(int *)(*(int *)(DAT_10b1f538 + 0x1a0) +
                          (*(int *)(DAT_10b1f538 + 0x1a4) - 1U & local_20) * 4);
          goto joined_r0x10428160;
        }
        break;
      }
      iVar8 = *(int *)(iVar1 + iVar8 * 0xc);
    } while (iVar8 != -1);
  }
  goto LAB_104280a7;
joined_r0x10428160:
  if (iVar8 == -1) goto LAB_10428179;
  if (*(uint *)(iVar1 + 4 + iVar8 * 0xc) == local_20) {
    piVar11 = *(int **)(iVar1 + 8 + iVar8 * 0xc);
    goto LAB_1042817b;
  }
  iVar8 = *(int *)(iVar1 + iVar8 * 0xc);
  goto joined_r0x10428160;
joined_r0x104282e9:
  if (iVar8 == -1) goto LAB_10428307;
  if (*(uint *)(iVar1 + 4 + iVar8 * 0xc) == local_20) {
    piVar11 = *(int **)(iVar1 + 8 + iVar8 * 0xc);
    goto LAB_10428309;
  }
  iVar8 = *(int *)(iVar1 + iVar8 * 0xc);
  goto joined_r0x104282e9;
LAB_10428307:
  piVar11 = (int *)0x0;
LAB_10428309:
  if (*piVar11 == 1) {
    iVar8 = *(int *)(*(int *)(DAT_10b1f538 + 0x1a0) +
                    (*(int *)(DAT_10b1f538 + 0x1a4) - 1U & local_20) * 4);
    if (iVar8 != -1) {
      iVar1 = *(int *)(DAT_10b1f538 + 0x194);
      do {
        if (*(uint *)(iVar1 + 4 + iVar8 * 0xc) == local_20) {
          iVar8 = *(int *)(iVar1 + 8 + iVar8 * 0xc);
          goto LAB_10428346;
        }
        iVar8 = *(int *)(iVar1 + iVar8 * 0xc);
      } while (iVar8 != -1);
    }
    iVar8 = 0;
LAB_10428346:
    if (*(int *)(iVar8 + 4) == 0) goto LAB_10428247;
    iVar8 = *(int *)(*(int *)(DAT_10b1f538 + 0x1a0) +
                    (*(int *)(DAT_10b1f538 + 0x1a4) - 1U & local_20) * 4);
    uVar9 = uRam00000004;
    if (iVar8 != -1) {
      iVar1 = *(int *)(DAT_10b1f538 + 0x194);
      do {
        if (*(uint *)(iVar1 + 4 + iVar8 * 0xc) == local_20) {
          uVar9 = *(uint *)(*(int *)(iVar1 + 8 + iVar8 * 0xc) + 4);
          break;
        }
        iVar8 = *(int *)(iVar1 + iVar8 * 0xc);
      } while (iVar8 != -1);
    }
  }
  else {
LAB_10428247:
    uVar9 = 0;
  }
  iVar8 = *(int *)(*(int *)(DAT_10b1f538 + 0x1a0) +
                  (*(int *)(DAT_10b1f538 + 0x1a4) - 1U & local_38) * 4);
  if (iVar8 != -1) {
    iVar1 = *(int *)(DAT_10b1f538 + 0x194);
    do {
      if (*(uint *)(iVar1 + 4 + iVar8 * 0xc) == local_38) {
        if (*(int *)(iVar1 + 8 + iVar8 * 0xc) != 0) {
          iVar8 = *(int *)(*(int *)(DAT_10b1f538 + 0x1a0) +
                          (*(int *)(DAT_10b1f538 + 0x1a4) - 1U & local_38) * 4);
          goto joined_r0x104283d6;
        }
        break;
      }
      iVar8 = *(int *)(iVar1 + iVar8 * 0xc);
    } while (iVar8 != -1);
  }
LAB_10428287:
  uVar7 = 0;
  goto LAB_10428289;
joined_r0x104283d6:
  if (iVar8 == -1) goto LAB_104283f7;
  if (*(uint *)(iVar1 + 4 + iVar8 * 0xc) == local_38) {
    piVar11 = *(int **)(iVar1 + 8 + iVar8 * 0xc);
    goto LAB_104283f9;
  }
  iVar8 = *(int *)(iVar1 + iVar8 * 0xc);
  goto joined_r0x104283d6;
LAB_104283f7:
  piVar11 = (int *)0x0;
LAB_104283f9:
  if (*piVar11 != 1) goto LAB_10428287;
  iVar8 = *(int *)(*(int *)(DAT_10b1f538 + 0x1a0) +
                  (*(int *)(DAT_10b1f538 + 0x1a4) - 1U & local_38) * 4);
  if (iVar8 != -1) {
    iVar1 = *(int *)(DAT_10b1f538 + 0x194);
    do {
      if (*(uint *)(iVar1 + 4 + iVar8 * 0xc) == local_38) {
        iVar8 = *(int *)(iVar1 + 8 + iVar8 * 0xc);
        goto LAB_10428436;
      }
      iVar8 = *(int *)(iVar1 + iVar8 * 0xc);
    } while (iVar8 != -1);
  }
  iVar8 = 0;
LAB_10428436:
  if (*(int *)(iVar8 + 4) == 0) goto LAB_10428287;
  iVar8 = *(int *)(*(int *)(DAT_10b1f538 + 0x1a0) +
                  (*(int *)(DAT_10b1f538 + 0x1a4) - 1U & local_38) * 4);
  if (iVar8 != -1) {
    iVar1 = *(int *)(DAT_10b1f538 + 0x194);
    do {
      if (*(uint *)(iVar1 + 4 + iVar8 * 0xc) == local_38) {
        uVar7 = *(uint *)(*(int *)(iVar1 + 8 + iVar8 * 0xc) + 4);
        break;
      }
      iVar8 = *(int *)(iVar1 + iVar8 * 0xc);
    } while (iVar8 != -1);
  }
LAB_10428289:
  pcVar6 = *(code **)(**(int **)(DAT_10b1f538 + 0x54) + 0x67c);
  goto LAB_104280fb;
joined_r0x104284c6:
  if (iVar8 == -1) goto LAB_104284e7;
  if (*(uint *)(iVar1 + 4 + iVar8 * 0xc) == local_38) {
    piVar11 = *(int **)(iVar1 + 8 + iVar8 * 0xc);
    goto LAB_104284e9;
  }
  iVar8 = *(int *)(iVar1 + iVar8 * 0xc);
  goto joined_r0x104284c6;
LAB_104284e7:
  piVar11 = (int *)0x0;
LAB_104284e9:
  if (*piVar11 != 1) goto LAB_104280e7;
  iVar8 = *(int *)(*(int *)(DAT_10b1f538 + 0x1a0) +
                  (*(int *)(DAT_10b1f538 + 0x1a4) - 1U & local_38) * 4);
  if (iVar8 != -1) {
    iVar1 = *(int *)(DAT_10b1f538 + 0x194);
    do {
      if (*(uint *)(iVar1 + 4 + iVar8 * 0xc) == local_38) {
        iVar8 = *(int *)(iVar1 + 8 + iVar8 * 0xc);
        goto LAB_10428526;
      }
      iVar8 = *(int *)(iVar1 + iVar8 * 0xc);
    } while (iVar8 != -1);
  }
  iVar8 = 0;
LAB_10428526:
  if (*(int *)(iVar8 + 4) == 0) goto LAB_104280e7;
  iVar8 = *(int *)(*(int *)(DAT_10b1f538 + 0x1a0) +
                  (*(int *)(DAT_10b1f538 + 0x1a4) - 1U & local_38) * 4);
  if (iVar8 != -1) {
    iVar1 = *(int *)(DAT_10b1f538 + 0x194);
    do {
      if (*(uint *)(iVar1 + 4 + iVar8 * 0xc) == local_38) {
        uVar7 = *(uint *)(*(int *)(iVar1 + 8 + iVar8 * 0xc) + 4);
        break;
      }
      iVar8 = *(int *)(iVar1 + iVar8 * 0xc);
    } while (iVar8 != -1);
  }
  goto LAB_104280e9;
LAB_10428179:
  piVar11 = (int *)0x0;
LAB_1042817b:
  if (*piVar11 == 1) {
    iVar8 = *(int *)(*(int *)(DAT_10b1f538 + 0x1a0) +
                    (*(int *)(DAT_10b1f538 + 0x1a4) - 1U & local_20) * 4);
    if (iVar8 != -1) {
      iVar1 = *(int *)(DAT_10b1f538 + 0x194);
      do {
        if (*(uint *)(iVar1 + 4 + iVar8 * 0xc) == local_20) {
          iVar8 = *(int *)(iVar1 + 8 + iVar8 * 0xc);
          goto LAB_104281bc;
        }
        iVar8 = *(int *)(iVar1 + iVar8 * 0xc);
      } while (iVar8 != -1);
    }
    iVar8 = 0;
LAB_104281bc:
    if (*(int *)(iVar8 + 4) != 0) {
      iVar8 = *(int *)(*(int *)(DAT_10b1f538 + 0x1a0) +
                      (*(int *)(DAT_10b1f538 + 0x1a4) - 1U & local_20) * 4);
      if (iVar8 != -1) {
        iVar1 = *(int *)(DAT_10b1f538 + 0x194);
        do {
          if (*(uint *)(iVar1 + 4 + iVar8 * 0xc) == local_20) {
            iVar8 = *(int *)(iVar1 + 8 + iVar8 * 0xc);
            goto LAB_104281fe;
          }
          iVar8 = *(int *)(iVar1 + iVar8 * 0xc);
        } while (iVar8 != -1);
      }
      iVar8 = 0;
LAB_104281fe:
      if (*(int *)(iVar8 + 4) != 0) {
        iVar8 = *(int *)(*(int *)(DAT_10b1f538 + 0x1a0) +
                        (*(int *)(DAT_10b1f538 + 0x1a4) - 1U & local_20) * 4);
        if (iVar8 != -1) {
          iVar1 = *(int *)(DAT_10b1f538 + 0x194);
          do {
            if (*(uint *)(iVar1 + 4 + iVar8 * 0xc) == local_20) {
              if (*(int *)(iVar1 + 8 + iVar8 * 0xc) != 0) {
                iVar8 = *(int *)(*(int *)(DAT_10b1f538 + 0x1a0) +
                                (*(int *)(DAT_10b1f538 + 0x1a4) - 1U & local_20) * 4);
                goto joined_r0x104282e9;
              }
              break;
            }
            iVar8 = *(int *)(iVar1 + iVar8 * 0xc);
          } while (iVar8 != -1);
        }
        goto LAB_10428247;
      }
    }
  }
LAB_104280a7:
  iVar8 = *(int *)(*(int *)(DAT_10b1f538 + 0x1a0) +
                  (*(int *)(DAT_10b1f538 + 0x1a4) - 1U & local_38) * 4);
  if (iVar8 != -1) {
    iVar1 = *(int *)(DAT_10b1f538 + 0x194);
    do {
      if (*(uint *)(iVar1 + 4 + iVar8 * 0xc) == local_38) {
        if (*(int *)(iVar1 + 8 + iVar8 * 0xc) != 0) {
          iVar8 = *(int *)(*(int *)(DAT_10b1f538 + 0x1a0) +
                          (*(int *)(DAT_10b1f538 + 0x1a4) - 1U & local_38) * 4);
          goto joined_r0x104284c6;
        }
        break;
      }
      iVar8 = *(int *)(iVar1 + iVar8 * 0xc);
    } while (iVar8 != -1);
  }
LAB_104280e7:
  uVar7 = 0;
LAB_104280e9:
  pcVar6 = *(code **)(**(int **)(DAT_10b1f538 + 0x54) + 0x678);
  uVar9 = local_20;
LAB_104280fb:
  (*pcVar6)(uVar7,uVar9,aLStack_1c);
  FOutputDevice::Logf((FOutputDevice *)GNetworkLog_exref,*(ushort **)GNetworkLog_exref);
  pvStack_c = (void *)0xffffffff;
  L2ParamStack::~L2ParamStack((L2ParamStack *)&local_24);
  ExceptionList = pvStack_14;
  return 0;
}


// ==== 104287a0 FUN_104287a0 depth=0 from=raiz callees=thunk_FUN_104226e0@1030d04e CORE.DLL::FOutputDevice::Logf@EXTERNAL:000000b4 thunk_FUN_104026b0@103034e5
// strings: 10883d84=ddddd | 108897a0=(Receive) StopMove ID:%d, OriginX:%d, OriginY:%d, OriginZ:%d, OriginYaw:%d  | 

uint FUN_104287a0(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  uint extraout_EAX;
  undefined4 local_1c;
  int local_18;
  int local_14;
  int local_10;
  float local_c;
  float local_8;
  float local_4;
  
  thunk_FUN_104026b0(*(undefined4 *)(param_1 + 0x48),param_2,"ddddd",&param_1,&local_10,&local_14,
                     &local_18,&local_1c);
  iVar1 = DAT_10b1f538;
  local_c = (float)local_10;
  local_8 = (float)local_14;
  local_4 = (float)local_18;
  if (DAT_10b1f538 != 0) {
    iVar2 = thunk_FUN_104226e0(&param_1);
    if (iVar2 != 0) {
      piVar3 = (int *)thunk_FUN_104226e0(&param_1);
      if (*piVar3 == 1) {
        iVar2 = thunk_FUN_104226e0(&param_1);
        if (*(int *)(iVar2 + 4) != 0) {
          iVar2 = thunk_FUN_104226e0(&param_1);
          uVar4 = *(undefined4 *)(iVar2 + 4);
          goto LAB_10428846;
        }
      }
    }
  }
  uVar4 = 0;
LAB_10428846:
  (**(code **)(**(int **)(iVar1 + 0x54) + 0x288))(uVar4,local_c,local_8,local_4,local_1c);
  FOutputDevice::Logf(*(FOutputDevice **)GNetworkLog_exref,
                      (ushort *)*(FOutputDevice **)GNetworkLog_exref);
  return extraout_EAX & 0xffffff00;
}


// ==== 10428c00 FUN_10428c00 depth=0 from=raiz callees=thunk_FUN_104226e0@1030d04e CORE.DLL::FOutputDevice::Logf@EXTERNAL:000000b4 thunk_FUN_104026b0@103034e5
// strings: 10886c3c=dddddd | 10889980=(Receive) OnVehicleDeparture ID:%d MoveSpeed:%d, RotationSpeed:%d x:%d y:%d z:%d | 

uint FUN_10428c00(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  uint extraout_EAX;
  int local_20;
  int local_1c;
  int local_18;
  undefined4 local_14;
  undefined4 local_10;
  float local_c;
  float local_8;
  float local_4;
  
  thunk_FUN_104026b0(*(undefined4 *)(param_1 + 0x48),param_2,"dddddd",&param_1,&local_10,&local_14,
                     &local_18,&local_1c,&local_20);
  iVar1 = DAT_10b1f538;
  if (DAT_10b1f538 == 0) goto LAB_10428d35;
  iVar2 = thunk_FUN_104226e0(&param_1);
  if (iVar2 == 0) goto LAB_10428d35;
  piVar3 = (int *)thunk_FUN_104226e0(&param_1);
  if (*piVar3 != 3) goto LAB_10428d35;
  iVar2 = thunk_FUN_104226e0(&param_1);
  if (*(int *)(iVar2 + 4) == 0) goto LAB_10428d35;
  iVar2 = thunk_FUN_104226e0(&param_1);
  if (*(int *)(iVar2 + 4) == 0) goto LAB_10428d35;
  iVar2 = thunk_FUN_104226e0(&param_1);
  if (iVar2 == 0) {
LAB_10428cea:
    uVar4 = 0;
  }
  else {
    piVar3 = (int *)thunk_FUN_104226e0(&param_1);
    if (*piVar3 != 3) goto LAB_10428cea;
    iVar2 = thunk_FUN_104226e0(&param_1);
    if (*(int *)(iVar2 + 4) == 0) goto LAB_10428cea;
    iVar2 = thunk_FUN_104226e0(&param_1);
    uVar4 = *(undefined4 *)(iVar2 + 4);
  }
  local_c = (float)local_18;
  local_8 = (float)local_1c;
  local_4 = (float)local_20;
  (**(code **)(**(int **)(iVar1 + 0x54) + 0x2a4))(uVar4,local_10,local_14,local_c,local_8,local_4);
LAB_10428d35:
  FOutputDevice::Logf((FOutputDevice *)GNetworkLog_exref,*(ushort **)GNetworkLog_exref);
  return extraout_EAX & 0xffffff00;
}


// ==== 10428dd0 FUN_10428dd0 depth=0 from=raiz callees=thunk_FUN_104226e0@1030d04e CORE.DLL::FOutputDevice::Logf@EXTERNAL:000000b4 thunk_FUN_104026b0@103034e5
// strings: 10883d84=ddddd | 10889a48=(Receive) OnGetOnVehicle UserID:%d VehicleID:%d | 

uint FUN_10428dd0(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  uint extraout_EAX;
  undefined4 uVar5;
  FOutputDevice *local_1c;
  int local_18;
  int local_14;
  int local_10;
  float local_c;
  float local_8;
  float local_4;
  
  thunk_FUN_104026b0(*(undefined4 *)(param_1 + 0x48),param_2,"ddddd",&local_1c,&param_1,&local_18,
                     &local_14,&local_10);
  iVar1 = DAT_10b1f538;
  if (DAT_10b1f538 == 0) goto LAB_10428f3e;
  iVar2 = thunk_FUN_104226e0(&param_1);
  if (iVar2 == 0) goto LAB_10428f3e;
  piVar3 = (int *)thunk_FUN_104226e0(&param_1);
  if (*piVar3 != 3) goto LAB_10428f3e;
  iVar2 = thunk_FUN_104226e0(&param_1);
  if (*(int *)(iVar2 + 4) == 0) goto LAB_10428f3e;
  iVar2 = thunk_FUN_104226e0(&param_1);
  if (*(int *)(iVar2 + 4) == 0) goto LAB_10428f3e;
  iVar2 = thunk_FUN_104226e0(&param_1);
  if (iVar2 == 0) {
LAB_10428eb6:
    uVar5 = 0;
  }
  else {
    piVar3 = (int *)thunk_FUN_104226e0(&param_1);
    if (*piVar3 != 3) goto LAB_10428eb6;
    iVar2 = thunk_FUN_104226e0(&param_1);
    if (*(int *)(iVar2 + 4) == 0) goto LAB_10428eb6;
    iVar2 = thunk_FUN_104226e0(&param_1);
    uVar5 = *(undefined4 *)(iVar2 + 4);
  }
  iVar2 = thunk_FUN_104226e0(&local_1c);
  if (iVar2 == 0) {
LAB_10428efc:
    uVar4 = 0;
  }
  else {
    piVar3 = (int *)thunk_FUN_104226e0(&local_1c);
    if (*piVar3 != 1) goto LAB_10428efc;
    iVar2 = thunk_FUN_104226e0(&local_1c);
    if (*(int *)(iVar2 + 4) == 0) goto LAB_10428efc;
    iVar2 = thunk_FUN_104226e0(&local_1c);
    uVar4 = *(undefined4 *)(iVar2 + 4);
  }
  local_c = (float)local_18;
  local_8 = (float)local_14;
  local_4 = (float)local_10;
  (**(code **)(**(int **)(iVar1 + 0x54) + 0x2ac))(uVar4,uVar5,local_c,local_8,local_4);
LAB_10428f3e:
  FOutputDevice::Logf(local_1c,*(ushort **)GNetworkLog_exref);
  return extraout_EAX & 0xffffff00;
}


// ==== 10428fd0 FUN_10428fd0 depth=0 from=raiz callees=thunk_FUN_104226e0@1030d04e CORE.DLL::FOutputDevice::Logf@EXTERNAL:000000b4 thunk_FUN_104026b0@103034e5
// strings: 10883d84=ddddd | 10889ac0=(Receive) OnGetOffVehicle UserID:%d VehicleID:%d | 

uint FUN_10428fd0(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  uint extraout_EAX;
  undefined4 uVar5;
  FOutputDevice *this;
  undefined1 local_1c [4];
  int local_18;
  int local_14;
  int local_10;
  float local_c;
  FOutputDevice *local_8;
  float local_4;
  
  thunk_FUN_104026b0(*(undefined4 *)(param_1 + 0x48),param_2,"ddddd",local_1c,&param_1,&local_18,
                     &local_14,&local_10);
  iVar1 = DAT_10b1f538;
  if (DAT_10b1f538 == 0) {
LAB_1042905d:
    uVar5 = 0;
  }
  else {
    iVar2 = thunk_FUN_104226e0(&param_1);
    if (iVar2 == 0) goto LAB_1042905d;
    piVar3 = (int *)thunk_FUN_104226e0(&param_1);
    if (*piVar3 != 3) goto LAB_1042905d;
    iVar2 = thunk_FUN_104226e0(&param_1);
    if (*(int *)(iVar2 + 4) == 0) goto LAB_1042905d;
    iVar2 = thunk_FUN_104226e0(&param_1);
    uVar5 = *(undefined4 *)(iVar2 + 4);
  }
  if (iVar1 != 0) {
    iVar2 = thunk_FUN_104226e0(local_1c);
    if (iVar2 != 0) {
      piVar3 = (int *)thunk_FUN_104226e0(local_1c);
      if (*piVar3 == 1) {
        iVar2 = thunk_FUN_104226e0(local_1c);
        if (*(int *)(iVar2 + 4) != 0) {
          iVar2 = thunk_FUN_104226e0(local_1c);
          uVar4 = *(undefined4 *)(iVar2 + 4);
          goto LAB_104290af;
        }
      }
    }
  }
  uVar4 = 0;
LAB_104290af:
  local_c = (float)local_18;
  this = (FOutputDevice *)(float)local_14;
  local_4 = (float)local_10;
  local_8 = this;
  (**(code **)(**(int **)(iVar1 + 0x54) + 0x2b0))(uVar4,uVar5,local_c,this,local_4);
  FOutputDevice::Logf(this,*(ushort **)GNetworkLog_exref);
  return extraout_EAX & 0xffffff00;
}


// ==== 10429240 FUN_10429240 depth=0 from=raiz callees=thunk_FUN_104226e0@1030d04e CORE.DLL::FOutputDevice::Logf@EXTERNAL:000000b4 thunk_FUN_104026b0@103034e5
// strings: 10883f24=dddddddd | 10889b80=(Receive)MoveToLocationInVehicle | 

uint FUN_10429240(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  uint extraout_EAX;
  undefined4 uVar5;
  undefined1 local_34 [4];
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
  thunk_FUN_104026b0(*(undefined4 *)(param_1 + 0x48),param_2,"dddddddd",&param_1,local_34,&local_30,
                     &local_2c,&local_28,&local_24,&local_20,&local_1c);
  iVar1 = DAT_10b1f538;
  local_c = (float)local_30;
  local_8 = (float)local_2c;
  local_4 = (float)local_28;
  local_18 = (float)local_24;
  local_14 = (float)local_20;
  local_10 = (float)local_1c;
  if (DAT_10b1f538 == 0) {
LAB_1042930c:
    uVar5 = 0;
  }
  else {
    iVar2 = thunk_FUN_104226e0(&param_1);
    if (iVar2 == 0) goto LAB_1042930c;
    piVar3 = (int *)thunk_FUN_104226e0(&param_1);
    if (*piVar3 != 1) goto LAB_1042930c;
    iVar2 = thunk_FUN_104226e0(&param_1);
    if (*(int *)(iVar2 + 4) == 0) goto LAB_1042930c;
    iVar2 = thunk_FUN_104226e0(&param_1);
    uVar5 = *(undefined4 *)(iVar2 + 4);
  }
  if (iVar1 != 0) {
    iVar2 = thunk_FUN_104226e0(local_34);
    if (iVar2 != 0) {
      piVar3 = (int *)thunk_FUN_104226e0(local_34);
      if (*piVar3 == 3) {
        iVar2 = thunk_FUN_104226e0(local_34);
        if (*(int *)(iVar2 + 4) != 0) {
          iVar2 = thunk_FUN_104226e0(local_34);
          uVar4 = *(undefined4 *)(iVar2 + 4);
          goto LAB_1042935e;
        }
      }
    }
  }
  uVar4 = 0;
LAB_1042935e:
  (**(code **)(**(int **)(iVar1 + 0x54) + 0xf4))
            (uVar4,uVar5,local_c,local_8,local_4,local_18,local_14,local_10);
  FOutputDevice::Logf(*(FOutputDevice **)GNetworkLog_exref,
                      (ushort *)*(FOutputDevice **)GNetworkLog_exref);
  return extraout_EAX & 0xffffff00;
}


// ==== 10429420 FUN_10429420 depth=0 from=raiz callees=thunk_FUN_104226e0@1030d04e CORE.DLL::FOutputDevice::Logf@EXTERNAL:000000b4 thunk_FUN_104026b0@103034e5
// strings: 10886c3c=dddddd | 10889bd0=(Receive)StopMoveInVehicle | 

uint FUN_10429420(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  uint extraout_EAX;
  undefined4 uVar5;
  undefined1 local_20 [4];
  int local_1c;
  int local_18;
  int local_14;
  undefined4 local_10;
  float local_c;
  float local_8;
  float local_4;
  
  thunk_FUN_104026b0(*(undefined4 *)(param_1 + 0x48),param_2,"dddddd",&param_1,local_20,&local_1c,
                     &local_18,&local_14,&local_10);
  iVar1 = DAT_10b1f538;
  local_c = (float)local_1c;
  local_8 = (float)local_18;
  local_4 = (float)local_14;
  if (DAT_10b1f538 == 0) {
LAB_104294ca:
    uVar5 = 0;
  }
  else {
    iVar2 = thunk_FUN_104226e0(&param_1);
    if (iVar2 == 0) goto LAB_104294ca;
    piVar3 = (int *)thunk_FUN_104226e0(&param_1);
    if (*piVar3 != 1) goto LAB_104294ca;
    iVar2 = thunk_FUN_104226e0(&param_1);
    if (*(int *)(iVar2 + 4) == 0) goto LAB_104294ca;
    iVar2 = thunk_FUN_104226e0(&param_1);
    uVar5 = *(undefined4 *)(iVar2 + 4);
  }
  if (iVar1 != 0) {
    iVar2 = thunk_FUN_104226e0(local_20);
    if (iVar2 != 0) {
      piVar3 = (int *)thunk_FUN_104226e0(local_20);
      if (*piVar3 == 3) {
        iVar2 = thunk_FUN_104226e0(local_20);
        if (*(int *)(iVar2 + 4) != 0) {
          iVar2 = thunk_FUN_104226e0(local_20);
          uVar4 = *(undefined4 *)(iVar2 + 4);
          goto LAB_1042951c;
        }
      }
    }
  }
  uVar4 = 0;
LAB_1042951c:
  (**(code **)(**(int **)(iVar1 + 0x54) + 0x28c))(uVar4,uVar5,local_c,local_8,local_4,local_10);
  FOutputDevice::Logf((FOutputDevice *)GNetworkLog_exref,*(ushort **)GNetworkLog_exref);
  return extraout_EAX & 0xffffff00;
}


// ==== 104295c0 FUN_104295c0 depth=0 from=raiz callees=thunk_FUN_104226e0@1030d04e CORE.DLL::FOutputDevice::Logf@EXTERNAL:000000b4 thunk_FUN_104026b0@103034e5
// strings: 10886c3c=dddddd | 10889c10=(Receive)ValidateLocationInVehicle ID:%d OriginX:%d OriginY:%d OriginZ:%d OriginYaw:%d | 

uint FUN_104295c0(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  uint extraout_EAX;
  undefined1 local_20 [4];
  undefined4 local_1c;
  int local_18;
  int local_14;
  int local_10;
  float local_c;
  float local_8;
  float local_4;
  
  thunk_FUN_104026b0(*(undefined4 *)(param_1 + 0x48),param_2,"dddddd",&param_1,local_20,&local_10,
                     &local_14,&local_18,&local_1c);
  iVar1 = DAT_10b1f538;
  local_c = (float)local_10;
  local_8 = (float)local_14;
  local_4 = (float)local_18;
  if (DAT_10b1f538 == 0) {
LAB_1042966a:
    iVar2 = 0;
  }
  else {
    iVar2 = thunk_FUN_104226e0(&param_1);
    if (iVar2 == 0) goto LAB_1042966a;
    piVar3 = (int *)thunk_FUN_104226e0(&param_1);
    if (*piVar3 != 1) goto LAB_1042966a;
    iVar2 = thunk_FUN_104226e0(&param_1);
    if (*(int *)(iVar2 + 4) == 0) goto LAB_1042966a;
    iVar2 = thunk_FUN_104226e0(&param_1);
    iVar2 = *(int *)(iVar2 + 4);
  }
  if (iVar1 != 0) {
    iVar4 = thunk_FUN_104226e0(local_20);
    if (iVar4 != 0) {
      piVar3 = (int *)thunk_FUN_104226e0(local_20);
      if (*piVar3 == 3) {
        iVar4 = thunk_FUN_104226e0(local_20);
        if (*(int *)(iVar4 + 4) != 0) {
          iVar4 = thunk_FUN_104226e0(local_20);
          iVar4 = *(int *)(iVar4 + 4);
          goto LAB_104296bc;
        }
      }
    }
  }
  iVar4 = 0;
LAB_104296bc:
  if ((iVar2 != 0) && (iVar4 != 0)) {
    (**(code **)(**(int **)(iVar1 + 0x54) + 0x104))(iVar4,iVar2,local_c,local_8,local_4,local_1c);
  }
  FOutputDevice::Logf(*(FOutputDevice **)GNetworkLog_exref,
                      (ushort *)*(FOutputDevice **)GNetworkLog_exref);
  return extraout_EAX & 0xffffff00;
}


// ==== 10429790 FUN_10429790 depth=0 from=raiz callees=thunk_FUN_104226e0@1030d04e CORE.DLL::FOutputDevice::Logf@EXTERNAL:000000b4 thunk_FUN_104026b0@103034e5
// strings: 10889d38=(Receive) MagicSkillLaunchedPacket Failed | 10889ce0=(Receive) MagicSkillLaunchedPacket | 

uint FUN_10429790(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  int iVar5;
  uint extraout_EAX;
  undefined4 uVar7;
  undefined4 local_18;
  undefined1 local_14 [4];
  int local_10;
  undefined4 local_c;
  undefined4 local_8;
  int local_4;
  code *pcVar6;
  
  uVar1 = thunk_FUN_104026b0(*(undefined4 *)(param_1 + 0x48),param_2,&DAT_108810b0,local_14,&local_8
                             ,&local_c,&local_10);
  if (0 < local_10) {
    local_4 = 0;
    do {
      uVar1 = thunk_FUN_104026b0(*(undefined4 *)(param_1 + 0x48),uVar1,&DAT_1087ff8c,&local_18);
      iVar5 = DAT_10b1f538;
      if (DAT_10b1f538 == 0) {
LAB_10429954:
        uVar4 = 0;
LAB_10429956:
        pcVar6 = *(code **)(**(int **)(iVar5 + 0x54) + 0x684);
        uVar7 = local_18;
      }
      else {
        iVar2 = thunk_FUN_104226e0(&local_18);
        if ((((iVar2 == 0) || (piVar3 = (int *)thunk_FUN_104226e0(&local_18), *piVar3 != 1)) ||
            (iVar2 = thunk_FUN_104226e0(&local_18), *(int *)(iVar2 + 4) == 0)) ||
           (iVar2 = thunk_FUN_104226e0(&local_18), *(int *)(iVar2 + 4) == 0)) {
          iVar2 = thunk_FUN_104226e0(local_14);
          if (((iVar2 == 0) || (piVar3 = (int *)thunk_FUN_104226e0(local_14), *piVar3 != 1)) ||
             (iVar2 = thunk_FUN_104226e0(local_14), *(int *)(iVar2 + 4) == 0)) goto LAB_10429954;
          iVar2 = thunk_FUN_104226e0(local_14);
          uVar4 = *(undefined4 *)(iVar2 + 4);
          goto LAB_10429956;
        }
        iVar2 = thunk_FUN_104226e0(&local_18);
        if (((iVar2 == 0) || (piVar3 = (int *)thunk_FUN_104226e0(&local_18), *piVar3 != 1)) ||
           (iVar2 = thunk_FUN_104226e0(&local_18), *(int *)(iVar2 + 4) == 0)) {
          uVar7 = 0;
        }
        else {
          iVar2 = thunk_FUN_104226e0(&local_18);
          uVar7 = *(undefined4 *)(iVar2 + 4);
        }
        iVar2 = thunk_FUN_104226e0(local_14);
        if (((iVar2 == 0) || (piVar3 = (int *)thunk_FUN_104226e0(local_14), *piVar3 != 1)) ||
           (iVar2 = thunk_FUN_104226e0(local_14), *(int *)(iVar2 + 4) == 0)) {
          uVar4 = 0;
        }
        else {
          iVar2 = thunk_FUN_104226e0(local_14);
          uVar4 = *(undefined4 *)(iVar2 + 4);
        }
        pcVar6 = *(code **)(**(int **)(iVar5 + 0x54) + 0x688);
      }
      iVar5 = (*pcVar6)(uVar4,uVar7,local_10,local_8,local_c);
      if (iVar5 == 0) {
        FOutputDevice::Logf((FOutputDevice *)GNetworkLog_exref,*(ushort **)GNetworkLog_exref);
      }
      local_4 = local_4 + 1;
    } while (local_4 < local_10);
  }
  FOutputDevice::Logf(*(FOutputDevice **)GNetworkLog_exref,
                      (ushort *)*(FOutputDevice **)GNetworkLog_exref);
  return extraout_EAX & 0xffffff00;
}


// ==== 10429d40 FUN_10429d40 depth=0 from=raiz callees=thunk_FUN_104226e0@1030d04e CORE.DLL::FOutputDevice::Logf@EXTERNAL:000000b4 thunk_FUN_104026b0@103034e5
// strings: 10883f24=dddddddd | 10889df8=(Receive)FlyToLocation ID:%d X:%d Y:%d Z:%d OriginX:%d OriginY:%d OriginZ:%d | 

uint FUN_10429d40(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  uint extraout_EAX;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  FOutputDevice *local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
  thunk_FUN_104026b0(*(undefined4 *)(param_1 + 0x48),param_2,"dddddddd",&param_1,&local_20,&local_24
                     ,&local_28,&local_2c,&local_30,&local_34,&local_1c);
  iVar1 = DAT_10b1f538;
  local_c = (float)local_20;
  local_8 = (float)local_24;
  local_4 = (float)local_28;
  local_18 = (float)local_2c;
  local_14 = (float)local_30;
  local_10 = (float)local_34;
  if (DAT_10b1f538 != 0) {
    iVar2 = thunk_FUN_104226e0(&param_1);
    if (iVar2 != 0) {
      piVar3 = (int *)thunk_FUN_104226e0(&param_1);
      if (*piVar3 == 1) {
        iVar2 = thunk_FUN_104226e0(&param_1);
        if (*(int *)(iVar2 + 4) != 0) {
          iVar2 = thunk_FUN_104226e0(&param_1);
          uVar4 = *(undefined4 *)(iVar2 + 4);
          goto LAB_10429e0d;
        }
      }
    }
  }
  uVar4 = 0;
LAB_10429e0d:
  (**(code **)(**(int **)(iVar1 + 0x54) + 0x10c))
            (uVar4,local_c,local_8,local_4,local_18,local_14,local_10,local_1c);
  FOutputDevice::Logf(local_1c,*(ushort **)GNetworkLog_exref);
  return extraout_EAX & 0xffffff00;
}


// ==== 10429ef0 FUN_10429ef0 depth=0 from=raiz callees=thunk_FUN_104226e0@1030d04e thunk_FUN_104026b0@103034e5
// strings: 

uint FUN_10429ef0(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  uint uVar5;
  int local_18;
  int local_14;
  int local_10;
  float local_c;
  float local_8;
  float local_4;
  
  thunk_FUN_104026b0(*(undefined4 *)(param_1 + 0x48),param_2,&DAT_108810b0,&param_1,&local_18,
                     &local_14,&local_10);
  iVar1 = DAT_10b1f538;
  local_c = (float)local_18;
  local_8 = (float)local_14;
  local_4 = (float)local_10;
  if (DAT_10b1f538 != 0) {
    iVar2 = thunk_FUN_104226e0(&param_1);
    if (iVar2 != 0) {
      piVar3 = (int *)thunk_FUN_104226e0(&param_1);
      if (*piVar3 == 1) {
        iVar2 = thunk_FUN_104226e0(&param_1);
        if (*(int *)(iVar2 + 4) != 0) {
          iVar2 = thunk_FUN_104226e0(&param_1);
          uVar4 = *(undefined4 *)(iVar2 + 4);
          goto LAB_10429f91;
        }
      }
    }
  }
  uVar4 = 0;
LAB_10429f91:
  uVar5 = (**(code **)(**(int **)(iVar1 + 0x54) + 0x110))(uVar4,local_c,local_8,local_4);
  return uVar5 & 0xffffff00;
}


// ==== 1042a0c0 FUN_1042a0c0 depth=0 from=raiz callees=thunk_FUN_104226e0@1030d04e thunk_FUN_104026b0@103034e5
// strings: 10883d84=ddddd | 

uint FUN_1042a0c0(int param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  uint local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  thunk_FUN_104026b0(*(undefined4 *)(param_1 + 0x48),param_2,"ddddd",&param_1,&local_10,&local_c,
                     &local_8,&local_4);
  piVar2 = (int *)0x0;
  if (DAT_10b1f538 != 0) {
    iVar1 = thunk_FUN_104226e0(&param_1);
    piVar2 = (int *)0x0;
    if (((iVar1 != 0) && (piVar2 = (int *)thunk_FUN_104226e0(&param_1), *piVar2 == 1)) &&
       (piVar2 = (int *)thunk_FUN_104226e0(&param_1), piVar2[1] != 0)) {
      iVar1 = thunk_FUN_104226e0(&param_1);
      iVar1 = *(int *)(iVar1 + 4);
      piVar2 = (int *)0x0;
      if (iVar1 != 0) {
        *(uint *)(iVar1 + 0x298) = local_10 >> 7 & 1;
        *(undefined4 *)(iVar1 + 0x10) = local_c;
        *(undefined4 *)(iVar1 + 0x198) = local_8;
        *(uint *)(iVar1 + 0x24c) = local_10 >> 5 & 1;
        *(undefined4 *)(iVar1 + 0x194) = local_4;
        *(uint *)(iVar1 + 0x294) = local_10;
        piVar2 = (int *)(**(code **)(**(int **)(DAT_10b1f538 + 0x54) + 0x4ec))();
      }
    }
  }
  return (uint)piVar2 & 0xffffff00;
}


// ==== 1042a1f0 FUN_1042a1f0 depth=0 from=raiz callees=thunk_FUN_104226e0@1030d04e CORE.DLL::FOutputDevice::Logf@EXTERNAL:000000b4 thunk_FUN_104026b0@103034e5
// strings: 10889f60=ddddddddddd | 10889eb0=(Receive)SpecialCamera ID:%d Dist:%d Yaw:%d Pitch:%d Time:%d Duration:%d | 

uint FUN_1042a1f0(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  uint extraout_EAX;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  undefined4 local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  int local_4;
  
  thunk_FUN_104026b0(*(undefined4 *)(param_1 + 0x48),param_2,"ddddddddddd",&param_1,&local_10,
                     &local_28,&local_2c,&local_14,&local_18,&local_24,&local_20,&local_4,&local_8,
                     &local_c);
  iVar1 = (local_28 * -0x10000) / 0x168;
  iVar2 = (local_2c * -0x10000) / 0x168;
  iVar3 = (local_24 * 0x10000) / 0x168;
  iVar4 = (local_20 * 0x10000) / 0x168;
  local_2c = iVar2;
  local_28 = iVar1;
  local_24 = iVar3;
  local_20 = iVar4;
  if (DAT_10b1f538 != 0) {
    iVar5 = thunk_FUN_104226e0(&param_1);
    if (iVar5 != 0) {
      piVar6 = (int *)thunk_FUN_104226e0(&param_1);
      if (*piVar6 == 1) {
        iVar5 = thunk_FUN_104226e0(&param_1);
        if (*(int *)(iVar5 + 4) != 0) {
          iVar5 = thunk_FUN_104226e0(&param_1);
          local_1c = *(undefined4 *)(iVar5 + 4);
          goto LAB_1042a342;
        }
      }
    }
  }
  local_1c = 0;
LAB_1042a342:
  (**(code **)(**(int **)(DAT_10b1f538 + 0x54) + 0x2b4))
            (local_1c,(float)local_10,iVar1,iVar2,(float)local_14,(float)local_18,iVar3,iVar4,
             0 < local_4,0 < local_8,0 < local_c);
  FOutputDevice::Logf(*(FOutputDevice **)GNetworkLog_exref,
                      (ushort *)*(FOutputDevice **)GNetworkLog_exref);
  return extraout_EAX & 0xffffff00;
}


// ==== 1042a450 FUN_1042a450 depth=0 from=raiz callees=thunk_FUN_104226e0@1030d04e CORE.DLL::FOutputDevice::Logf@EXTERNAL:000000b4 thunk_FUN_104026b0@103034e5
// strings: 108874cc=ddddddd | 10889f70=(Receive)OnSkillRemainSec | 

uint FUN_1042a450(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  undefined4 uVar5;
  uint extraout_EAX;
  undefined1 local_18 [4];
  int local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  thunk_FUN_104026b0(*(undefined4 *)(param_1 + 0x48),param_2,"ddddddd",&param_1,local_18,&local_4,
                     &local_8,&local_c,&local_10,&local_14);
  iVar1 = DAT_10b1f538;
  if (DAT_10b1f538 == 0) {
LAB_1042a531:
    iVar2 = 0;
  }
  else {
    iVar2 = thunk_FUN_104226e0(local_18);
    if (iVar2 == 0) {
LAB_1042a4ed:
      iVar2 = thunk_FUN_104226e0(&param_1);
      if (iVar2 != 0) {
        piVar3 = (int *)thunk_FUN_104226e0(&param_1);
        if (*piVar3 == 1) {
          iVar2 = thunk_FUN_104226e0(&param_1);
          if (*(int *)(iVar2 + 4) != 0) {
            iVar2 = thunk_FUN_104226e0(&param_1);
            iVar2 = *(int *)(iVar2 + 4);
            goto LAB_1042a533;
          }
        }
      }
      goto LAB_1042a531;
    }
    piVar3 = (int *)thunk_FUN_104226e0(local_18);
    if (*piVar3 != 1) goto LAB_1042a4ed;
    iVar2 = thunk_FUN_104226e0(local_18);
    if (*(int *)(iVar2 + 4) == 0) goto LAB_1042a4ed;
    iVar2 = thunk_FUN_104226e0(local_18);
    iVar2 = *(int *)(iVar2 + 4);
    if (iVar2 == 0) goto LAB_1042a4ed;
  }
LAB_1042a533:
  if (iVar1 != 0) {
    iVar4 = thunk_FUN_104226e0(&param_1);
    if (iVar4 != 0) {
      piVar3 = (int *)thunk_FUN_104226e0(&param_1);
      if (*piVar3 == 1) {
        iVar4 = thunk_FUN_104226e0(&param_1);
        if (*(int *)(iVar4 + 4) != 0) {
          iVar4 = thunk_FUN_104226e0(&param_1);
          uVar5 = *(undefined4 *)(iVar4 + 4);
          goto LAB_1042a583;
        }
      }
    }
  }
  uVar5 = 0;
LAB_1042a583:
  (**(code **)(**(int **)(iVar1 + 0x54) + 0x2c0))
            (uVar5,iVar2,local_4,local_8,local_c,local_10,(float)local_14);
  FOutputDevice::Logf((FOutputDevice *)GNetworkLog_exref,*(ushort **)GNetworkLog_exref);
  return extraout_EAX & 0xffffff00;
}


// ==== 1042a7a0 FUN_1042a7a0 depth=0 from=raiz callees=thunk_FUN_104226e0@1030d04e CORE.DLL::FOutputDevice::Logf@EXTERNAL:000000b4 thunk_FUN_104026b0@103034e5
// strings: 10886c3c=dddddd | 10889ff8=(Receive)DicePacket | 

uint FUN_1042a7a0(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  uint extraout_EAX;
  int local_20;
  int local_1c;
  int local_18;
  undefined4 local_14;
  undefined4 local_10;
  float local_c;
  float local_8;
  float local_4;
  
  thunk_FUN_104026b0(*(undefined4 *)(param_1 + 0x48),param_2,"dddddd",&param_1,&local_10,&local_14,
                     &local_20,&local_1c,&local_18);
  iVar1 = DAT_10b1f538;
  if (DAT_10b1f538 != 0) {
    iVar2 = thunk_FUN_104226e0(&param_1);
    if (iVar2 != 0) {
      piVar3 = (int *)thunk_FUN_104226e0(&param_1);
      if (*piVar3 == 1) {
        iVar2 = thunk_FUN_104226e0(&param_1);
        if (*(int *)(iVar2 + 4) != 0) {
          iVar2 = thunk_FUN_104226e0(&param_1);
          uVar4 = *(undefined4 *)(iVar2 + 4);
          goto LAB_1042a833;
        }
      }
    }
  }
  uVar4 = 0;
LAB_1042a833:
  local_c = (float)local_20;
  local_8 = (float)local_1c;
  local_4 = (float)local_18;
  (**(code **)(**(int **)(iVar1 + 0x54) + 0x164))(uVar4,local_10,local_14,local_c,local_8,local_4);
  FOutputDevice::Logf((FOutputDevice *)GNetworkLog_exref,*(ushort **)GNetworkLog_exref);
  return extraout_EAX & 0xffffff00;
}


// ==== 1042a8e0 FUN_1042a8e0 depth=0 from=raiz callees=thunk_FUN_104226e0@1030d04e thunk_FUN_104026b0@103034e5
// strings: 

uint FUN_1042a8e0(int param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined1 local_18 [4];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1080fd40;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffd4;
  local_8 = 0;
  ExceptionList = &local_10;
  piVar2 = (int *)thunk_FUN_104026b0(*(undefined4 *)(param_1 + 0x48),param_2,&DAT_1087ff8c,local_18)
  ;
  iVar1 = DAT_10b1f538;
  if (DAT_10b1f538 != 0) {
    iVar3 = thunk_FUN_104226e0(local_18);
    piVar2 = (int *)0x0;
    if (iVar3 != 0) {
      piVar2 = (int *)thunk_FUN_104226e0(local_18);
      if (*piVar2 == 1) {
        piVar2 = (int *)thunk_FUN_104226e0(local_18);
        if (piVar2[1] != 0) {
          iVar3 = thunk_FUN_104226e0(local_18);
          piVar2 = *(int **)(iVar3 + 4);
          if ((piVar2 != (int *)0x0) && (piVar2[0x81] != 0)) {
            piVar2 = (int *)(**(code **)(**(int **)(iVar1 + 0x54) + 0x6f4))(piVar2[0x81],0);
          }
        }
      }
    }
  }
  ExceptionList = local_10;
  return (uint)piVar2 & 0xffffff00;
}


// ==== 1042aa20 FUN_1042aa20 depth=0 from=raiz callees=thunk_FUN_104226e0@1030d04e CORE.DLL::FOutputDevice::Logf@EXTERNAL:000000b4 thunk_FUN_104026b0@103034e5
// strings: 1088a0ec=dddddcc | 1088a0a4=(Receive)ExFishingStartPacket | 

uint FUN_1042aa20(int param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int *extraout_EAX;
  undefined4 local_38;
  float local_34;
  float local_30;
  float local_2c;
  int local_28;
  int local_24;
  int local_20;
  undefined1 local_1c [6];
  undefined1 local_16;
  undefined1 local_15;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1080fd50;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffa8;
  local_8 = 0;
  ExceptionList = &local_10;
  piVar2 = (int *)thunk_FUN_104026b0(*(undefined4 *)(param_1 + 0x48),param_2,"dddddcc",local_1c,
                                     &local_38,&local_20,&local_24,&local_28,&local_16,&local_15);
  iVar1 = DAT_10b1f538;
  if (DAT_10b1f538 != 0) {
    iVar3 = thunk_FUN_104226e0(local_1c);
    piVar2 = (int *)0x0;
    if (iVar3 != 0) {
      piVar2 = (int *)thunk_FUN_104226e0(local_1c);
      if (*piVar2 == 1) {
        piVar2 = (int *)thunk_FUN_104226e0(local_1c);
        if (piVar2[1] != 0) {
          iVar3 = thunk_FUN_104226e0(local_1c);
          piVar2 = (int *)0x0;
          if (*(int *)(iVar3 + 4) != 0) {
            local_2c = (float)local_20;
            local_30 = (float)local_24;
            local_34 = (float)local_28;
            (**(code **)(**(int **)(iVar1 + 0x54) + 0x720))
                      (*(undefined4 *)(*(int *)(iVar3 + 4) + 0x204),local_38,local_2c,local_30,
                       local_34,local_16,local_15);
            FOutputDevice::Logf(*(FOutputDevice **)GNetworkLog_exref,
                                (ushort *)*(FOutputDevice **)GNetworkLog_exref);
            piVar2 = extraout_EAX;
          }
        }
      }
    }
  }
  ExceptionList = local_10;
  return (uint)piVar2 & 0xffffff00;
}


// ==== 1042ac00 FUN_1042ac00 depth=0 from=raiz callees=thunk_FUN_104226e0@1030d04e CORE.DLL::FOutputDevice::Logf@EXTERNAL:000000b4 thunk_FUN_104026b0@103034e5
// strings: 1088a128=(Receive)ExFishingEndPacket | 

uint FUN_1042ac00(int param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int *extraout_EAX;
  undefined4 local_1c;
  undefined1 local_18 [4];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1080fd60;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffd0;
  local_8 = 0;
  ExceptionList = &local_10;
  piVar2 = (int *)thunk_FUN_104026b0(*(undefined4 *)(param_1 + 0x48),param_2,&DAT_10883f30,local_18,
                                     &local_1c);
  iVar1 = DAT_10b1f538;
  if (DAT_10b1f538 != 0) {
    iVar3 = thunk_FUN_104226e0(local_18);
    piVar2 = (int *)0x0;
    if (iVar3 != 0) {
      piVar2 = (int *)thunk_FUN_104226e0(local_18);
      if (*piVar2 == 1) {
        piVar2 = (int *)thunk_FUN_104226e0(local_18);
        if (piVar2[1] != 0) {
          iVar3 = thunk_FUN_104226e0(local_18);
          piVar2 = (int *)0x0;
          if (*(int *)(iVar3 + 4) != 0) {
            (**(code **)(**(int **)(iVar1 + 0x54) + 0x724))
                      (*(undefined4 *)(*(int *)(iVar3 + 4) + 0x204),local_1c);
            FOutputDevice::Logf(*(FOutputDevice **)GNetworkLog_exref,
                                (ushort *)*(FOutputDevice **)GNetworkLog_exref);
            piVar2 = extraout_EAX;
          }
        }
      }
    }
  }
  ExceptionList = local_10;
  return (uint)piVar2 & 0xffffff00;
}


// ==== 1042ad50 FUN_1042ad50 depth=0 from=raiz callees=thunk_FUN_104226e0@1030d04e CORE.DLL::L2ParamStack::PushBack@EXTERNAL:00000136 CORE.DLL::L2ParamStack::~L2ParamStack@EXTERNAL:0000012a CORE.DLL::L2ParamStack::L2ParamStack@EXTERNAL:0000012b CORE.DLL::FOutputDevice::Logf@EXTERNAL:000000b4 thunk_FUN_104026b0@103034e5
// strings: 1088a208=dddccc | 1088a1b0=(Receive)ExFishingStartCombatPacket | 

uint FUN_1042ad50(int param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  int *extraout_EAX;
  L2ParamStack local_3c [24];
  void *local_24;
  void *local_20;
  undefined1 local_1c [5];
  byte local_17;
  byte local_16;
  byte local_15;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_1080fd79;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffb8;
  local_8 = 0;
  ExceptionList = &local_10;
  thunk_FUN_104026b0(*(undefined4 *)(param_1 + 0x48),param_2,"dddccc",local_1c,&local_20,&local_24,
                     &local_15,&local_16,&local_17);
  piVar2 = (int *)0x0;
  if (DAT_10b1f538 != 0) {
    iVar1 = thunk_FUN_104226e0(local_1c);
    piVar2 = (int *)0x0;
    if (iVar1 != 0) {
      piVar2 = (int *)thunk_FUN_104226e0(local_1c);
      if (*piVar2 == 1) {
        piVar2 = (int *)thunk_FUN_104226e0(local_1c);
        if (piVar2[1] != 0) {
          piVar2 = (int *)thunk_FUN_104226e0(local_1c);
          iVar1 = piVar2[1];
          if (iVar1 != 0) {
            L2ParamStack::L2ParamStack(local_3c,10);
            local_8._0_1_ = 1;
            L2ParamStack::PushBack(local_3c,local_20);
            L2ParamStack::PushBack(local_3c,local_24);
            L2ParamStack::PushBack(local_3c,(void *)(uint)local_15);
            L2ParamStack::PushBack(local_3c,(void *)(uint)local_16);
            L2ParamStack::PushBack(local_3c,(void *)(uint)local_17);
            (**(code **)(**(int **)(DAT_10b1f538 + 0x54) + 0x728))
                      (*(undefined4 *)(iVar1 + 0x204),local_3c);
            FOutputDevice::Logf(*(FOutputDevice **)GNetworkLog_exref,
                                (ushort *)*(FOutputDevice **)GNetworkLog_exref);
            local_8 = (uint)local_8._1_3_ << 8;
            L2ParamStack::~L2ParamStack(local_3c);
            piVar2 = extraout_EAX;
          }
        }
      }
    }
  }
  ExceptionList = local_10;
  return (uint)piVar2 & 0xffffff00;
}


// ==== 1042af40 FUN_1042af40 depth=0 from=raiz callees=thunk_FUN_104226e0@1030d04e CORE.DLL::L2ParamStack::PushBack@EXTERNAL:00000136 CORE.DLL::L2ParamStack::~L2ParamStack@EXTERNAL:0000012a CORE.DLL::L2ParamStack::L2ParamStack@EXTERNAL:0000012b CORE.DLL::FOutputDevice::Logf@EXTERNAL:000000b4 thunk_FUN_104026b0@103034e5
// strings: 1088a294=dddcccdc | 1088a248=(Receive)ExFishingHpRegenPacket | 

uint FUN_1042af40(int param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  int *extraout_EAX;
  L2ParamStack local_40 [24];
  void *local_28;
  void *local_24;
  void *local_20;
  undefined1 local_1c [4];
  byte local_18;
  byte local_17;
  byte local_16;
  byte local_15;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_1080fd99;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffb4;
  local_8 = 0;
  ExceptionList = &local_10;
  thunk_FUN_104026b0(*(undefined4 *)(param_1 + 0x48),param_2,"dddcccdc",local_1c,&local_20,&local_24
                     ,&local_15,&local_16,&local_17,&local_28,&local_18);
  piVar2 = (int *)0x0;
  if (DAT_10b1f538 != 0) {
    iVar1 = thunk_FUN_104226e0(local_1c);
    piVar2 = (int *)0x0;
    if (iVar1 != 0) {
      piVar2 = (int *)thunk_FUN_104226e0(local_1c);
      if (*piVar2 == 1) {
        piVar2 = (int *)thunk_FUN_104226e0(local_1c);
        if (piVar2[1] != 0) {
          piVar2 = (int *)thunk_FUN_104226e0(local_1c);
          iVar1 = piVar2[1];
          if (iVar1 != 0) {
            L2ParamStack::L2ParamStack(local_40,10);
            local_8._0_1_ = 1;
            L2ParamStack::PushBack(local_40,local_20);
            L2ParamStack::PushBack(local_40,local_24);
            L2ParamStack::PushBack(local_40,(void *)(uint)local_15);
            L2ParamStack::PushBack(local_40,(void *)(uint)local_16);
            L2ParamStack::PushBack(local_40,(void *)(uint)local_17);
            L2ParamStack::PushBack(local_40,local_28);
            L2ParamStack::PushBack(local_40,(void *)(uint)local_18);
            (**(code **)(**(int **)(DAT_10b1f538 + 0x54) + 0x72c))
                      (*(undefined4 *)(iVar1 + 0x204),local_40);
            FOutputDevice::Logf(*(FOutputDevice **)GNetworkLog_exref,
                                (ushort *)*(FOutputDevice **)GNetworkLog_exref);
            local_8 = (uint)local_8._1_3_ << 8;
            L2ParamStack::~L2ParamStack(local_40);
            piVar2 = extraout_EAX;
          }
        }
      }
    }
  }
  ExceptionList = local_10;
  return (uint)piVar2 & 0xffffff00;
}


// ==== 1042b150 FUN_1042b150 depth=0 from=raiz callees=thunk_FUN_10325f90@1031447a thunk_FUN_104225e0@1031502d thunk_FUN_10368430@1030b78f thunk_FUN_104026b0@103034e5
// strings: 

uint FUN_1042b150(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  undefined1 local_34 [20];
  int local_20;
  undefined4 local_1c;
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  puStack_c = &LAB_1080fdb8;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffc0;
  local_8 = 0;
  local_18 = 0;
  ExceptionList = &local_10;
  thunk_FUN_10368430();
  local_8 = CONCAT31(local_8._1_3_,1);
  uVar1 = thunk_FUN_104026b0(*(undefined4 *)(param_1 + 0x48),param_2,&DAT_1087ff8c,&local_18);
  for (iVar3 = 0; local_20 = iVar3, iVar3 < local_18; iVar3 = iVar3 + 1) {
    local_1c = 0xffffffff;
    uVar1 = thunk_FUN_104026b0(*(undefined4 *)(param_1 + 0x48),uVar1,&DAT_1087ff8c,&local_1c);
    thunk_FUN_104225e0(&local_1c);
  }
  (**(code **)(**(int **)(DAT_10b1f538 + 0x54) + 0x76c))(local_34);
  local_8 = local_8 & 0xffffff00;
  uVar2 = thunk_FUN_10325f90();
  ExceptionList = local_10;
  return uVar2 & 0xffffff00;
}


// ==== 1042b280 FUN_1042b280 depth=0 from=raiz callees=thunk_FUN_104226e0@1030d04e CORE.DLL::FName::FName@EXTERNAL:000000dd thunk_FUN_104026b0@103034e5
// strings: 

uint FUN_1042b280(int param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  ushort local_b0 [68];
  FName local_28 [4];
  undefined4 local_24 [2];
  undefined1 local_1c [7];
  undefined1 local_15;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1080fdd0;
  local_10 = ExceptionList;
  local_14 = &stack0xffffff44;
  local_8 = 0;
  ExceptionList = &local_10;
  piVar2 = (int *)thunk_FUN_104026b0(*(undefined4 *)(param_1 + 0x48),param_2,&DAT_1088a2f8,local_1c,
                                     &local_15,local_24,0x80,local_b0);
  iVar1 = DAT_10b1f538;
  if (DAT_10b1f538 != 0) {
    iVar3 = thunk_FUN_104226e0(local_1c);
    piVar2 = (int *)0x0;
    if (iVar3 != 0) {
      piVar2 = (int *)thunk_FUN_104226e0(local_1c);
      if (*piVar2 == 1) {
        piVar2 = (int *)thunk_FUN_104226e0(local_1c);
        if (piVar2[1] != 0) {
          piVar2 = (int *)thunk_FUN_104226e0(local_1c);
          iVar3 = piVar2[1];
          if ((iVar3 != 0) && (*(int *)(iVar3 + 0x204) != 0)) {
            iVar1 = **(int **)(iVar1 + 0x54);
            puVar4 = (undefined4 *)FName::FName(local_28,local_b0,1);
            piVar2 = (int *)(**(code **)(iVar1 + 0x774))
                                      (*(undefined4 *)(iVar3 + 0x204),local_15,local_24[0],*puVar4);
          }
        }
      }
    }
  }
  ExceptionList = local_10;
  return (uint)piVar2 & 0xffffff00;
}


// ==== 1042e430 FUN_1042e430 depth=0 from=raiz callees=CORE.DLL::FVector::RotateAngleAxis@EXTERNAL:00000143 User::SetNickName@1030c82e thunk_FUN_103254a0@10314fc4 CORE.DLL::L2ParamStack::~L2ParamStack@EXTERNAL:0000012a thunk_FUN_10422f80@10307a77 User::SetEventmatchEffect@103022f7 CORE.DLL::FOutputDevice::Logf@EXTERNAL:000000b4 thunk_FUN_1042c470@10304a34 thunk_FUN_104026b0@103034e5 User::SetName@103072f7 User::User@10313449 thunk_FUN_1042c3f0@1030a60f thunk_FUN_104226e0@1030d04e CORE.DLL::L2ParamStack::PushBack@EXTERNAL:00000136 thunk_FUN_103ff860@10305beb CORE.DLL::L2ParamStack::L2ParamStack@EXTERNAL:0000012b CORE.DLL::FString::operator*@EXTERNAL:00000032
// strings: 1088a748=dddddddddddddddddddffffdddcccccSSdddddddddddQQQddddddddddddddccdd | 1088a698=(Receive)PetInfo ID:%d, ClassID:%d, CanBeAttacked:%d, X:%d, Y:%d, Z:%d | 1088a684=PetInfo | 1088a600=[Error] Can not find the Vehicle data [PetInfoPacket] | 

uint FUN_1042e430(int param_1,undefined4 param_2)

{
  User *pUVar1;
  float fVar2;
  int iVar3;
  int *piVar4;
  ushort *puVar5;
  uint extraout_EAX;
  undefined4 *puVar6;
  float *pfVar7;
  undefined4 unaff_EBX;
  User *pUVar8;
  undefined4 unaff_EDI;
  float local_1c4;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  float local_1b8;
  float local_1b4;
  undefined4 uStack_1b0;
  int iStack_1ac;
  uint uStack_1a8;
  int local_1a4;
  void *local_1a0;
  undefined4 local_19c;
  int local_198;
  int local_194;
  undefined4 local_190;
  undefined4 local_18c;
  undefined4 local_188;
  undefined4 local_184;
  undefined4 local_180;
  undefined4 local_17c;
  undefined4 local_178;
  undefined4 local_174;
  undefined4 local_170;
  int local_16c;
  undefined4 local_168;
  int local_164;
  undefined4 local_160;
  int local_15c;
  undefined4 local_158;
  undefined4 local_154;
  undefined4 local_150;
  undefined4 local_14c;
  undefined4 local_148;
  undefined4 local_144;
  undefined4 local_140;
  undefined4 local_13c;
  undefined4 local_138;
  undefined4 local_134;
  undefined4 local_130;
  undefined4 local_12c;
  void *local_128;
  undefined4 local_124;
  undefined4 local_120;
  void *local_11c;
  undefined4 local_118;
  undefined1 local_114 [4];
  void *local_110;
  undefined4 local_10c;
  void *local_108;
  undefined4 local_104;
  undefined4 local_100;
  undefined4 local_fc;
  undefined4 local_f8;
  undefined4 local_f4;
  L2ParamStack local_f0 [8];
  undefined4 uStack_e8;
  double dStack_e4;
  undefined8 local_dc;
  undefined8 uStack_d4;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined8 uStack_b4;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 uStack_98;
  ushort auStack_90 [4];
  ushort local_88 [2];
  short local_84 [18];
  ushort auStack_60 [4];
  ushort auStack_58 [2];
  undefined2 local_54 [18];
  undefined1 auStack_30 [24];
  void *pvStack_18;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined4 uStack_c;
  
  uStack_c = 0xffffffff;
  puStack_10 = &LAB_108100fa;
  pvStack_14 = ExceptionList;
  local_1b4 = 0.0;
  local_174 = 0;
  local_194 = 0;
  local_110 = (void *)0x0;
  local_11c = (void *)0x0;
  local_104 = 0;
  local_fc = 0;
  local_54[0] = 0;
  local_84[0] = 0;
  local_168 = 0;
  ExceptionList = &pvStack_14;
  thunk_FUN_104026b0(*(undefined4 *)(param_1 + 0x48),param_2,
                     "dddddddddddddddddddffffdddcccccSSdddddddddddQQQddddddddddddddccdd",&local_108,
                     &local_1c4,&local_1a0,&local_148,&local_150,&local_158,&local_160,&local_dc,
                     &local_1b8,&local_1b4,&local_174,&local_128,&local_124,local_f0,local_114,
                     &local_120,&local_100,&local_f8,&local_118,(int)&uStack_d4 + 4,
                     (int)&local_dc + 4,&local_b8,(int)&uStack_b4 + 4,&local_1a4,&local_190,
                     &local_19c,&local_fc,&local_104,&local_11c,&local_110,&local_194,0x30,local_84,
                     0x30,local_54,local_88,&local_f4,&local_10c,&local_140,&local_138,&local_144,
                     &local_184,&local_154,&local_17c,&local_18c,&local_134,&local_130,&local_a0,
                     &local_a8,&local_16c,&local_14c,&local_164,&local_13c,&local_15c,&local_188,
                     &local_180,&local_198,&local_178,&local_c0,&local_170,&local_1b4,&local_168,
                     &local_c4,(int)&uStack_1bc + 3,(int)&uStack_1bc + 2,&local_c8,&local_bc);
  *(void **)(*(int *)(param_1 + 0x48) + 0x4f64) = local_108;
  *(float *)(*(int *)(param_1 + 0x48) + 0x4f68) = local_1c4;
  *(undefined4 *)(*(int *)(param_1 + 0x48) + 0x4f9c) = local_150;
  *(undefined4 *)(*(int *)(param_1 + 0x48) + 0x4fa0) = local_158;
  *(undefined4 *)(*(int *)(param_1 + 0x48) + 0x4fa4) = local_160;
  *(undefined4 *)(*(int *)(param_1 + 0x48) + 0x4fa8) = local_144;
  *(undefined4 *)(*(int *)(param_1 + 0x48) + 0x4fac) = local_184;
  *(undefined4 *)(*(int *)(param_1 + 0x48) + 0x4fb0) = local_154;
  *(undefined4 *)(*(int *)(param_1 + 0x48) + 0x4fb4) = local_17c;
  *(undefined4 *)(*(int *)(param_1 + 0x48) + 0x4fb8) = local_18c;
  *(undefined4 *)(*(int *)(param_1 + 0x48) + 0x4fbc) = local_134;
  iVar3 = *(int *)(param_1 + 0x48);
  *(undefined4 *)(iVar3 + 0x4fc0) = local_130;
  *(undefined4 *)(iVar3 + 0x4fc4) = local_12c;
  iVar3 = *(int *)(param_1 + 0x48);
  *(undefined4 *)(iVar3 + 0x4fc8) = local_a0;
  *(undefined4 *)(iVar3 + 0x4fcc) = local_9c;
  iVar3 = *(int *)(param_1 + 0x48);
  *(undefined4 *)(iVar3 + 0x4fd0) = local_a8;
  *(undefined4 *)(iVar3 + 0x4fd4) = local_a4;
  *(undefined4 *)(*(int *)(param_1 + 0x48) + 0x4fd8) = local_140;
  *(undefined4 *)(*(int *)(param_1 + 0x48) + 0x4fdc) = local_138;
  *(int *)(*(int *)(param_1 + 0x48) + 0x4fe0) = local_16c;
  *(undefined4 *)(*(int *)(param_1 + 0x48) + 0x4fe4) = local_14c;
  *(int *)(*(int *)(param_1 + 0x48) + 0x4fe8) = local_164;
  *(undefined4 *)(*(int *)(param_1 + 0x48) + 0x4fec) = local_13c;
  *(undefined4 *)(*(int *)(param_1 + 0x48) + 0x4ff0) = local_180;
  *(undefined4 *)(*(int *)(param_1 + 0x48) + 0x4ff4) = local_178;
  *(undefined4 *)(*(int *)(param_1 + 0x48) + 0x4ff8) = local_170;
  *(int *)(*(int *)(param_1 + 0x48) + 0x4ffc) = local_15c;
  *(undefined4 *)(*(int *)(param_1 + 0x48) + 0x5000) = local_188;
  *(undefined4 *)(*(int *)(param_1 + 0x48) + 0x5008) = local_c0;
  *(float *)(*(int *)(param_1 + 0x48) + 0x500c) = local_1b4;
  *(int *)(*(int *)(param_1 + 0x48) + 0x5004) = local_198;
  *(void **)(*(int *)(param_1 + 0x48) + 0x5014) = local_1a0;
  *(undefined4 *)(*(int *)(param_1 + 0x48) + 0x5018) = local_c4;
  *(undefined4 *)(*(int *)(param_1 + 0x48) + 0x501c) = local_c8;
  *(undefined4 *)(*(int *)(param_1 + 0x48) + 0x5020) = local_bc;
  if (local_84[0] == 0) {
    (**(code **)(**(int **)(DAT_10b1f538 + 0x54) + 0x4fc))(1);
  }
  else {
    (**(code **)(**(int **)(DAT_10b1f538 + 0x54) + 0x4fc))(0);
  }
  pUVar8 = (User *)0x0;
  if ((((DAT_10b1f538 == 0) || (iVar3 = thunk_FUN_104226e0(&stack0xfffffe38), iVar3 == 0)) ||
      (piVar4 = (int *)thunk_FUN_104226e0(&stack0xfffffe38), *piVar4 != 1)) ||
     ((iVar3 = thunk_FUN_104226e0(&stack0xfffffe38), *(int *)(iVar3 + 4) == 0 ||
      (iVar3 = thunk_FUN_104226e0(&stack0xfffffe38), *(int *)(iVar3 + 4) == 0)))) {
    if ((local_198 != 0) && (local_198 != 2)) goto LAB_1042ed3a;
    pUVar8 = (User *)(**(code **)**(undefined4 **)GMalloc_exref)(0x314,L"PetInfo");
    if (pUVar8 == (User *)0x0) {
      pUVar8 = (User *)0x0;
    }
    else {
      pUVar8 = (User *)User::User(pUVar8);
    }
    *(undefined4 *)(pUVar8 + 0x18) = unaff_EDI;
    *(undefined4 *)(*(int *)(param_1 + 0x48) + 0x4f68) = unaff_EDI;
    *(undefined4 *)(pUVar8 + 0x94) = 0;
    *(undefined4 *)(pUVar8 + 8) = 1;
    *(undefined4 *)(pUVar8 + 0xc) = 1;
    *(int *)(pUVar8 + 0x14) = iStack_1ac + -1000000;
    *(undefined4 *)(pUVar8 + 0x10) = local_154;
    *(undefined4 *)(pUVar8 + 0x19c) = local_134;
    *(undefined4 *)(pUVar8 + 0x1a0) = local_130;
    *(undefined4 *)(pUVar8 + 0x1a4) = local_fc;
    *(undefined4 *)(pUVar8 + 0x1a8) = local_120;
    *(undefined4 *)(pUVar8 + 0x1b4) = local_12c;
    *(undefined4 *)(pUVar8 + 0x1b8) = local_10c;
    *(undefined4 *)(pUVar8 + 0x1ac) = local_104;
    *(undefined4 *)(pUVar8 + 0x1b0) = local_124;
    *(double *)(pUVar8 + 0x1bc) = (double)(float)dStack_e4;
    *(double *)(pUVar8 + 0x1c4) = (double)(float)local_dc;
    *(double *)(pUVar8 + 0x1bc) = dStack_e4;
    *(double *)(pUVar8 + 0x1c4) = local_dc;
    *(float *)(pUVar8 + 0x1cc) = (float)(double)CONCAT44(local_c0,local_c4);
    *(float *)(pUVar8 + 0x1d0) = (float)(double)CONCAT44(local_b8,local_bc);
    *(undefined4 *)(pUVar8 + 0xb4) = uStack_1b0;
    *(uint *)(pUVar8 + 0xb8) = uStack_1a8;
    *(undefined4 *)(pUVar8 + 0xc0) = local_19c;
    *(float *)(pUVar8 + 0x23c) = uStack_1c0;
    *(undefined4 *)(pUVar8 + 0x2ac) = local_180;
    *(undefined4 *)(pUVar8 + 0x194) = local_100;
    *(undefined4 *)(pUVar8 + 0x198) = local_118;
    if (auStack_90[0] == 0) {
      iVar3 = thunk_FUN_10422f80(pUVar8 + 0x14);
      if (iVar3 != 0) {
        puVar5 = FString::operator*((FString *)(iVar3 + 4));
        User::SetName(pUVar8,puVar5);
        puVar5 = FString::operator*((FString *)(iVar3 + 4));
        thunk_FUN_103ff860(puVar5);
        *(undefined4 *)(*(int *)(param_1 + 0x48) + 0x5010) = 0;
      }
    }
    else {
      User::SetName(pUVar8,auStack_90);
      thunk_FUN_103ff860(auStack_90);
      *(undefined4 *)(*(int *)(param_1 + 0x48) + 0x5010) = 1;
    }
    if (auStack_60[0] == 0) {
      iVar3 = thunk_FUN_10422f80(pUVar8 + 0x14);
      if (iVar3 != 0) {
        puVar5 = FString::operator*((FString *)(iVar3 + 0x10));
        goto LAB_1042f004;
      }
    }
    else {
      puVar5 = auStack_60;
LAB_1042f004:
      User::SetNickName(pUVar8,puVar5);
    }
    *(undefined4 *)(pUVar8 + 0x188) = local_14c;
    *(undefined4 *)(pUVar8 + 0x18c) = local_144;
    *(undefined4 *)(pUVar8 + 0x7c) = local_190;
    *(undefined4 *)(pUVar8 + 0x80) = local_150;
    *(undefined4 *)(pUVar8 + 0x84) = local_188;
    *(undefined4 *)(pUVar8 + 0x88) = local_160;
    *(int *)(pUVar8 + 0x218) = local_198;
    *(undefined4 *)(pUVar8 + 0x58) = local_140;
    *(undefined4 *)(pUVar8 + 0x5c) = local_13c;
    *(undefined4 *)(pUVar8 + 0x60) = local_138;
    *(undefined4 *)(pUVar8 + 0x214) = local_178;
    *(undefined4 *)(pUVar8 + 0x8c) = local_158;
    *(undefined4 *)(pUVar8 + 0x224) = local_170;
    *(undefined4 *)(pUVar8 + 0x22c) = local_148;
    *(undefined4 *)(pUVar8 + 0x234) = local_168;
    *(int *)(pUVar8 + 0x238) = local_194;
    *(undefined4 *)(pUVar8 + 0x21c) = local_18c;
    *(int *)(pUVar8 + 0x230) = local_1a4;
    *(undefined4 *)(pUVar8 + 0x220) = local_184;
    pUVar1 = pUVar8 + 0x18;
    *(undefined4 *)(pUVar8 + 0x228) = local_17c;
    if ((0 < *(int *)(pUVar8 + 0x18)) && (DAT_10b1f538 != 0)) {
      iVar3 = thunk_FUN_104226e0(pUVar1);
      if (iVar3 != 0) {
        thunk_FUN_103254a0(iVar3);
        thunk_FUN_1042c470(pUVar1);
      }
      puVar6 = (undefined4 *)(**(code **)**(undefined4 **)GMalloc_exref)(8,&DAT_10853a28);
      if (puVar6 == (undefined4 *)0x0) {
        puVar6 = (undefined4 *)0x0;
      }
      else {
        *puVar6 = 0;
        puVar6[1] = 0;
      }
      pvStack_18 = (void *)0xffffffff;
      if (puVar6 != (undefined4 *)0x0) {
        puVar6[1] = pUVar8;
        *puVar6 = 1;
      }
      thunk_FUN_1042c3f0(pUVar1,&stack0xfffffe34);
    }
    uStack_1bc = (float)local_15c;
    local_1b8 = (float)local_164;
    local_1b4 = (float)local_16c;
    if (0 < (int)local_1c4) {
      if ((((DAT_10b1f538 == 0) || (iVar3 = thunk_FUN_104226e0(&local_1c4), iVar3 == 0)) ||
          (piVar4 = (int *)thunk_FUN_104226e0(&local_1c4), *piVar4 != 3)) ||
         ((iVar3 = thunk_FUN_104226e0(&local_1c4), *(int *)(iVar3 + 4) == 0 ||
          (iVar3 = thunk_FUN_104226e0(&local_1c4), *(int *)(iVar3 + 4) == 0)))) {
        FOutputDevice::Logf(*(FOutputDevice **)GNetworkLog_exref,
                            (ushort *)*(FOutputDevice **)GNetworkLog_exref);
      }
      else {
        iVar3 = thunk_FUN_104226e0(&local_1c4);
        if ((iVar3 == 0) ||
           ((piVar4 = (int *)thunk_FUN_104226e0(&local_1c4), *piVar4 != 3 ||
            (iVar3 = thunk_FUN_104226e0(&local_1c4), *(int *)(iVar3 + 4) == 0)))) {
          iVar3 = 0;
        }
        else {
          iVar3 = thunk_FUN_104226e0(&local_1c4);
          iVar3 = *(int *)(iVar3 + 4);
        }
        local_a0 = 0;
        local_9c = 0;
        uStack_98 = 0x3f800000;
        pfVar7 = (float *)FVector::RotateAngleAxis
                                    ((FVector *)&uStack_1bc,(int)auStack_30,
                                     (FVector *)(*(uint *)(*(int *)(iVar3 + 4) + 0x1cc) & 0xffff));
        iVar3 = *(int *)(iVar3 + 4);
        uStack_1c0 = *pfVar7 + *(float *)(iVar3 + 0x1bc);
        uStack_1bc = *(float *)(iVar3 + 0x1c0) + pfVar7[1];
        local_1b8 = *(float *)(iVar3 + 0x1c4) + pfVar7[2];
      }
    }
    *(undefined4 *)(pUVar8 + 0x204) = 0;
    L2ParamStack::L2ParamStack((L2ParamStack *)&local_f8,10);
    pvStack_18 = (void *)0x1;
    L2ParamStack::PushBack((L2ParamStack *)&local_f8,local_108);
    L2ParamStack::PushBack((L2ParamStack *)&local_f8,local_110);
    L2ParamStack::PushBack((L2ParamStack *)&local_f8,local_128);
    L2ParamStack::PushBack((L2ParamStack *)&local_f8,local_11c);
    L2ParamStack::PushBack((L2ParamStack *)&local_f8,local_1a0);
    L2ParamStack::PushBack((L2ParamStack *)&local_f8,(void *)(int)(char)((uint)unaff_EBX >> 0x18));
    (**(code **)(**(int **)(DAT_10b1f538 + 0x54) + 600))
              (pUVar8,uStack_1bc,local_1b8,local_1b4,uStack_e8,&local_f8);
    if (*(int *)(pUVar8 + 0x204) != 0) {
      *(uint *)(*(int *)(pUVar8 + 0x204) + 0x6a0) = ((int)uStack_1a8 < 1) - 1 & uStack_1a8;
      if (local_194 < 1) {
        *(undefined4 *)(*(int *)(pUVar8 + 0x204) + 0x6a4) = 0;
      }
      else {
        *(int *)(*(int *)(pUVar8 + 0x204) + 0x6a4) = local_194;
      }
      if ((int)local_1a0 < 1) {
        *(undefined4 *)(*(int *)(pUVar8 + 0x204) + 0x6a8) = 0;
      }
      else {
        *(void **)(*(int *)(pUVar8 + 0x204) + 0x6a8) = local_1a0;
      }
      *(int *)(*(int *)(pUVar8 + 0x204) + 0x17d0) = local_16c;
      User::SetEventmatchEffect(pUVar8,(int)uStack_1c0._2_1_);
    }
    puStack_10 = (undefined1 *)0xffffffff;
    L2ParamStack::~L2ParamStack(local_f0);
    goto LAB_1042ed3a;
  }
  iVar3 = thunk_FUN_104226e0(&stack0xfffffe38);
  if ((iVar3 == 0) ||
     ((piVar4 = (int *)thunk_FUN_104226e0(&stack0xfffffe38), *piVar4 != 1 ||
      (iVar3 = thunk_FUN_104226e0(&stack0xfffffe38), *(int *)(iVar3 + 4) == 0)))) {
    pUVar8 = (User *)0x0;
  }
  else {
    iVar3 = thunk_FUN_104226e0(&stack0xfffffe38);
    pUVar8 = *(User **)(iVar3 + 4);
  }
  *(undefined4 *)(*(int *)(param_1 + 0x48) + 0x4f68) = unaff_EBX;
  *(undefined4 *)(pUVar8 + 0x94) = 0;
  *(undefined4 *)(pUVar8 + 8) = 1;
  *(undefined4 *)(pUVar8 + 0xc) = 1;
  *(int *)(pUVar8 + 0x14) = local_1a4 + -1000000;
  *(undefined4 *)(pUVar8 + 0x10) = local_14c;
  *(undefined4 *)(pUVar8 + 0x19c) = local_12c;
  *(void **)(pUVar8 + 0x1a0) = local_128;
  *(undefined4 *)(pUVar8 + 0x1a4) = local_f4;
  *(undefined4 *)(pUVar8 + 0x1a8) = local_118;
  *(undefined4 *)(pUVar8 + 0x1b4) = local_124;
  *(undefined4 *)(pUVar8 + 0x1b8) = local_104;
  *(undefined4 *)(pUVar8 + 0x1ac) = local_fc;
  *(void **)(pUVar8 + 0x1b0) = local_11c;
  *(double *)(pUVar8 + 0x1bc) = local_dc;
  *(undefined8 *)(pUVar8 + 0x1c4) = uStack_d4;
  *(float *)(pUVar8 + 0x1cc) = (float)(double)CONCAT44(local_b8,local_bc);
  *(float *)(pUVar8 + 0x1d0) = (float)uStack_b4;
  *(uint *)(pUVar8 + 0xb4) = uStack_1a8;
  *(void **)(pUVar8 + 0xb8) = local_1a0;
  *(int *)(pUVar8 + 0xc0) = local_194;
  *(float *)(pUVar8 + 0x23c) = local_1b8;
  *(undefined4 *)(pUVar8 + 0x2ac) = local_178;
  *(undefined4 *)(pUVar8 + 0x194) = local_f8;
  *(void **)(pUVar8 + 0x198) = local_110;
  *(undefined4 *)(pUVar8 + 0x230) = local_19c;
  if (local_88[0] == 0) {
    iVar3 = thunk_FUN_10422f80(pUVar8 + 0x14);
    if (iVar3 != 0) {
      puVar5 = FString::operator*((FString *)(iVar3 + 4));
      User::SetName(pUVar8,puVar5);
      puVar5 = FString::operator*((FString *)(iVar3 + 4));
      thunk_FUN_103ff860(puVar5);
      *(undefined4 *)(*(int *)(param_1 + 0x48) + 0x5010) = 0;
    }
  }
  else {
    User::SetName(pUVar8,local_88);
    thunk_FUN_103ff860(local_88);
    *(undefined4 *)(*(int *)(param_1 + 0x48) + 0x5010) = 1;
  }
  if (auStack_58[0] == 0) {
    iVar3 = thunk_FUN_10422f80(pUVar8 + 0x14);
    if (iVar3 != 0) {
      puVar5 = FString::operator*((FString *)(iVar3 + 0x10));
      goto LAB_1042eb63;
    }
  }
  else {
    puVar5 = auStack_58;
LAB_1042eb63:
    User::SetNickName(pUVar8,puVar5);
  }
  *(undefined4 *)(pUVar8 + 0x188) = local_144;
  *(undefined4 *)(pUVar8 + 0x18c) = local_13c;
  *(undefined4 *)(pUVar8 + 0x7c) = local_188;
  *(undefined4 *)(pUVar8 + 0x80) = local_148;
  *(undefined4 *)(pUVar8 + 0x84) = local_180;
  *(undefined4 *)(pUVar8 + 0x88) = local_158;
  *(undefined4 *)(pUVar8 + 0x218) = local_190;
  *(undefined4 *)(pUVar8 + 0x58) = local_138;
  *(undefined4 *)(pUVar8 + 0x5c) = local_134;
  *(undefined4 *)(pUVar8 + 0x60) = local_130;
  *(undefined4 *)(pUVar8 + 0x214) = local_170;
  *(undefined4 *)(pUVar8 + 0x8c) = local_150;
  *(undefined4 *)(pUVar8 + 0x224) = local_168;
  *(undefined4 *)(pUVar8 + 0x22c) = local_140;
  *(undefined4 *)(pUVar8 + 0x234) = local_160;
  *(undefined4 *)(pUVar8 + 0x238) = local_18c;
  *(undefined4 *)(pUVar8 + 0x21c) = local_184;
  *(undefined4 *)(pUVar8 + 0x230) = local_19c;
  *(undefined4 *)(pUVar8 + 0x220) = local_17c;
  *(undefined4 *)(pUVar8 + 0x228) = local_174;
  if (*(int *)(pUVar8 + 0x204) != 0) {
    *(uint *)(*(int *)(pUVar8 + 0x204) + 0x6a0) = ((int)uStack_1a8 < 1) - 1 & uStack_1a8;
    if (local_194 < 1) {
      *(undefined4 *)(*(int *)(pUVar8 + 0x204) + 0x6a4) = 0;
    }
    else {
      *(int *)(*(int *)(pUVar8 + 0x204) + 0x6a4) = local_194;
    }
    if ((int)local_1a0 < 1) {
      *(undefined4 *)(*(int *)(pUVar8 + 0x204) + 0x6a8) = 0;
    }
    else {
      *(void **)(*(int *)(pUVar8 + 0x204) + 0x6a8) = local_1a0;
    }
    *(float *)(*(int *)(pUVar8 + 0x204) + 0x6b0) = (float)*(double *)(pUVar8 + 0x1bc);
    local_1c4 = (float)*(double *)(pUVar8 + 0x1c4);
    *(float *)(*(int *)(pUVar8 + 0x204) + 0x6b4) = local_1c4;
    iVar3 = *(int *)(pUVar8 + 0x204);
    if (*(char *)(*(int *)(iVar3 + 0x14d8) + 0x434) == '\x01') {
      fVar2 = *(float *)(iVar3 + 0x6ec);
    }
    else {
      fVar2 = *(float *)(iVar3 + 0x6f0);
    }
    *(float *)(iVar3 + 0x1550) = fVar2 * *(float *)(iVar3 + 0x6b4);
    *(int *)(*(int *)(pUVar8 + 0x204) + 0x17d0) = local_16c;
    *(int *)(*(int *)(pUVar8 + 0x204) + 0x778) = (int)uStack_1c0._3_1_;
    User::SetEventmatchEffect(pUVar8,(int)uStack_1c0._2_1_);
  }
LAB_1042ed3a:
  if ((local_198 == 0) || (local_198 == 2)) {
    (**(code **)(**(int **)(DAT_10b1f538 + 0x54) + 0x4f4))(local_10c);
  }
  (**(code **)(*(int *)GL2Console + 0x6f4))(pUVar8);
  FOutputDevice::Logf(*(FOutputDevice **)GNetworkLog_exref,
                      (ushort *)*(FOutputDevice **)GNetworkLog_exref);
  ExceptionList = pvStack_18;
  return extraout_EAX & 0xffffff00;
}


// ==== 1042f8d0 FUN_1042f8d0 depth=0 from=raiz callees=thunk_FUN_104226e0@1030d04e thunk_FUN_103254a0@10314fc4 thunk_FUN_10422f80@10307a77 AActor::eventL2GameActionNotify@1030a646 thunk_FUN_1042c470@10304a34 CORE.DLL::FOutputDevice::Logf@EXTERNAL:000000b4 thunk_FUN_104026b0@103034e5 CORE.DLL::FString::operator*@EXTERNAL:00000032 User::SetName@103072f7 User::User@10313449 thunk_FUN_1042c3f0@1030a60f
// strings: 1088a894=ddSdddddffffdddd | 1088a868=ServerObjbectInfo | 1088a798=(Receive)ServerObjectInfoPacket ID:%d, ClassID:%d, CanBeAttacked:%d, X:%d, Y:%d, Z:%d | 

uint FUN_1042f8d0(int param_1,undefined4 param_2)

{
  User *pUVar1;
  float fVar2;
  int iVar3;
  int *piVar4;
  ushort *puVar5;
  uint extraout_EAX;
  User *pUVar6;
  uchar uVar7;
  undefined4 uVar8;
  int local_a4;
  undefined4 *local_a0;
  int local_9c;
  int local_98;
  undefined4 local_94;
  undefined4 local_90;
  int local_8c;
  int local_88;
  int local_84;
  undefined4 local_80;
  undefined4 local_7c;
  float local_78;
  float local_74;
  float local_70;
  undefined4 local_6c;
  undefined8 local_68;
  double local_60;
  undefined8 local_58;
  double local_50;
  ushort local_48 [12];
  void *pvStack_30;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined4 uStack_c;
  
  uStack_c = 0xffffffff;
  puStack_10 = &LAB_1081013e;
  pvStack_14 = ExceptionList;
  ExceptionList = &pvStack_14;
  thunk_FUN_104026b0(*(undefined4 *)(param_1 + 0x48),param_2,"ddSdddddffffdddd",&local_a4,&local_98,
                     0x30,local_48,&local_94,&local_84,&local_88,&local_8c,&local_6c,&local_68,
                     &local_58,&local_50,&local_60,&local_80,&local_7c,&local_9c,&local_90);
  if ((((DAT_10b1f538 == 0) || (iVar3 = thunk_FUN_104226e0(&local_a4), iVar3 == 0)) ||
      (piVar4 = (int *)thunk_FUN_104226e0(&local_a4), *piVar4 != 1)) ||
     ((iVar3 = thunk_FUN_104226e0(&local_a4), *(int *)(iVar3 + 4) == 0 ||
      (iVar3 = thunk_FUN_104226e0(&local_a4), *(int *)(iVar3 + 4) == 0)))) {
    pUVar6 = (User *)(**(code **)**(undefined4 **)GMalloc_exref)(0x314,L"ServerObjbectInfo");
    if (pUVar6 == (User *)0x0) {
      pUVar6 = (User *)0x0;
    }
    else {
      pUVar6 = (User *)User::User(pUVar6);
    }
    pUVar1 = pUVar6 + 0x18;
    *(int *)pUVar1 = local_a4;
    *(undefined4 *)(pUVar6 + 8) = 1;
    *(undefined4 *)(pUVar6 + 0x94) = 0;
    *(int *)(pUVar6 + 0x14) = local_98 + -1000000;
    if (local_48[0] == 0) {
      iVar3 = thunk_FUN_10422f80(pUVar6 + 0x14);
      if (iVar3 != 0) {
        puVar5 = FString::operator*((FString *)(iVar3 + 4));
        User::SetName(pUVar6,puVar5);
        *(undefined4 *)(pUVar6 + 400) = *(undefined4 *)(iVar3 + 0x1c);
      }
    }
    else {
      User::SetName(pUVar6,local_48);
    }
    *(undefined4 *)(pUVar6 + 0x10) = local_94;
    *(undefined8 *)(pUVar6 + 0x1c4) = local_68;
    *(undefined8 *)(pUVar6 + 0x1bc) = local_58;
    *(float *)(pUVar6 + 0x1cc) = (float)local_50;
    *(float *)(pUVar6 + 0x1d0) = (float)local_60;
    *(undefined4 *)(pUVar6 + 0x7c) = local_80;
    *(undefined4 *)(pUVar6 + 0x80) = local_7c;
    if ((0 < *(int *)pUVar1) && (DAT_10b1f538 != 0)) {
      iVar3 = thunk_FUN_104226e0(pUVar1);
      if (iVar3 != 0) {
        thunk_FUN_103254a0(iVar3);
        thunk_FUN_1042c470(pUVar1);
      }
      local_a0 = (undefined4 *)(**(code **)**(undefined4 **)GMalloc_exref)(8,&DAT_10853a28);
      if (local_a0 == (undefined4 *)0x0) {
        local_a0 = (undefined4 *)0x0;
      }
      else {
        *local_a0 = 0;
        local_a0[1] = 0;
      }
      uStack_c = 0xffffffff;
      if (local_a0 != (undefined4 *)0x0) {
        local_a0[1] = pUVar6;
        *local_a0 = 1;
      }
      thunk_FUN_1042c3f0(pUVar1,&local_a0);
    }
    local_78 = (float)local_84;
    uVar8 = 1;
    local_74 = (float)local_88;
    local_70 = (float)local_8c;
    *(undefined4 *)(pUVar6 + 0x204) = 0;
    piVar4 = *(int **)(DAT_10b1f538 + 0x54);
    goto LAB_1042fce5;
  }
  iVar3 = thunk_FUN_104226e0(&local_a4);
  if ((iVar3 == 0) ||
     ((piVar4 = (int *)thunk_FUN_104226e0(&local_a4), *piVar4 != 1 ||
      (iVar3 = thunk_FUN_104226e0(&local_a4), *(int *)(iVar3 + 4) == 0)))) {
    pUVar6 = (User *)0x0;
  }
  else {
    iVar3 = thunk_FUN_104226e0(&local_a4);
    pUVar6 = *(User **)(iVar3 + 4);
  }
  *(undefined4 *)(pUVar6 + 8) = 1;
  *(undefined4 *)(pUVar6 + 0x94) = 0;
  *(int *)(pUVar6 + 0x14) = local_98 + -1000000;
  if (local_48[0] == 0) {
    iVar3 = thunk_FUN_10422f80(pUVar6 + 0x14);
    if (iVar3 != 0) {
      puVar5 = FString::operator*((FString *)(iVar3 + 4));
      User::SetName(pUVar6,puVar5);
      *(undefined4 *)(pUVar6 + 400) = *(undefined4 *)(iVar3 + 0x1c);
    }
  }
  else {
    User::SetName(pUVar6,local_48);
  }
  *(undefined4 *)(pUVar6 + 0x10) = local_94;
  *(undefined8 *)(pUVar6 + 0x1c4) = local_68;
  *(undefined8 *)(pUVar6 + 0x1bc) = local_58;
  *(float *)(pUVar6 + 0x1cc) = (float)local_50;
  *(float *)(pUVar6 + 0x1d0) = (float)local_60;
  *(undefined4 *)(pUVar6 + 0x7c) = local_80;
  *(undefined4 *)(pUVar6 + 0x80) = local_7c;
  if (*(int *)(pUVar6 + 0x204) != 0) {
    *(float *)(*(int *)(pUVar6 + 0x204) + 0x6b0) = (float)*(double *)(pUVar6 + 0x1bc);
    local_a0 = (undefined4 *)(float)*(double *)(pUVar6 + 0x1c4);
    *(undefined4 **)(*(int *)(pUVar6 + 0x204) + 0x6b4) = local_a0;
    iVar3 = *(int *)(pUVar6 + 0x204);
    if (*(char *)(*(int *)(iVar3 + 0x14d8) + 0x434) == '\x01') {
      fVar2 = *(float *)(iVar3 + 0x6ec);
    }
    else {
      fVar2 = *(float *)(iVar3 + 0x6f0);
    }
    *(float *)(iVar3 + 0x1550) = fVar2 * *(float *)(iVar3 + 0x6b4);
    if (local_9c == 3) {
      switch(local_90) {
      case 0:
        uVar7 = '\x03';
        break;
      case 1:
        uVar7 = '\x01';
        break;
      case 2:
        uVar7 = '\x02';
        break;
      case 3:
        uVar7 = '\0';
        break;
      default:
        goto switchD_1042fb1f_default;
      }
      AActor::eventL2GameActionNotify(*(AActor **)(pUVar6 + 0x204),uVar7);
    }
  }
switchD_1042fb1f_default:
  piVar4 = *(int **)(DAT_10b1f538 + 0x54);
  uVar8 = 0;
LAB_1042fce5:
  (**(code **)(*piVar4 + 0x25c))(pUVar6,local_78,local_74,local_70,local_6c,local_9c,local_90,uVar8)
  ;
  FOutputDevice::Logf(*(FOutputDevice **)GNetworkLog_exref,
                      (ushort *)*(FOutputDevice **)GNetworkLog_exref);
  ExceptionList = pvStack_30;
  return extraout_EAX & 0xffffff00;
}


// ==== 104304f0 FUN_104304f0 depth=0 from=raiz callees=thunk_FUN_104226e0@1030d04e CORE.DLL::L2ParamStack::PushBack@EXTERNAL:00000136 FServerStaticObject::FServerStaticObject@1031285f thunk_FUN_103254a0@10314fc4 CORE.DLL::L2ParamStack::~L2ParamStack@EXTERNAL:0000012a thunk_FUN_1032ffc0@103131d8 CORE.DLL::L2ParamStack::L2ParamStack@EXTERNAL:0000012b thunk_FUN_1042c470@10304a34 CORE.DLL::FOutputDevice::Logf@EXTERNAL:000000b4 thunk_FUN_104026b0@103034e5 thunk_FUN_1042c3f0@1030a60f
// strings: 1088a9d8=(Receive)ServerObjectPacket | 

uint FUN_104304f0(int param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  uint extraout_EAX;
  FOutputDevice *extraout_ECX;
  FOutputDevice *extraout_ECX_00;
  FOutputDevice *this;
  L2ParamStack local_3c [24];
  FServerStaticObject *local_24;
  undefined4 local_20;
  void *local_1c;
  void *local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_108101cf;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffb8;
  local_8 = 0;
  ExceptionList = &local_10;
  thunk_FUN_104026b0(*(undefined4 *)(param_1 + 0x48),param_2,&DAT_1087ff44,&local_1c,&local_18);
  if (DAT_10b1f538 != 0) {
    iVar1 = thunk_FUN_104226e0(&local_18);
    if (iVar1 != 0) {
      piVar2 = (int *)thunk_FUN_104226e0(&local_18);
      if (*piVar2 == 4) {
        iVar1 = thunk_FUN_104226e0(&local_18);
        if (*(int *)(iVar1 + 4) != 0) {
          iVar1 = thunk_FUN_104226e0(&local_18);
          this = extraout_ECX;
          if (*(int *)(iVar1 + 4) != 0) goto LAB_104306a0;
        }
      }
    }
  }
  L2ParamStack::L2ParamStack(local_3c,10);
  local_8._0_1_ = 1;
  L2ParamStack::PushBack(local_3c,local_1c);
  L2ParamStack::PushBack(local_3c,local_18);
  local_20 = 0;
  iVar1 = (**(code **)(**(int **)(DAT_10b1f538 + 0x54) + 0x64c))(local_3c,&local_20);
  if (iVar1 != 0) {
    local_24 = (FServerStaticObject *)thunk_FUN_1032ffc0(0x1c);
    local_8._0_1_ = 2;
    if (local_24 == (FServerStaticObject *)0x0) {
      puVar3 = (undefined4 *)0x0;
    }
    else {
      puVar3 = (undefined4 *)FServerStaticObject::FServerStaticObject(local_24);
    }
    local_8._0_1_ = 1;
    *puVar3 = 0;
    puVar3[1] = local_1c;
    puVar3[2] = local_18;
    puVar3[6] = local_20;
    if (DAT_10b1f538 != 0) {
      iVar1 = thunk_FUN_104226e0(&local_18);
      if (iVar1 != 0) {
        thunk_FUN_103254a0(iVar1);
        thunk_FUN_1042c470(&local_18);
      }
      local_24 = (FServerStaticObject *)thunk_FUN_1032ffc0(8);
      if (local_24 == (FServerStaticObject *)0x0) {
        local_24 = (FServerStaticObject *)0x0;
      }
      else {
        *(undefined4 *)local_24 = 0;
        *(undefined4 *)(local_24 + 4) = 0;
      }
      local_8._0_1_ = 1;
      if (local_24 != (FServerStaticObject *)0x0) {
        *(undefined4 **)(local_24 + 4) = puVar3;
        *(undefined4 *)local_24 = 4;
      }
      thunk_FUN_1042c3f0(&local_18,&local_24);
    }
  }
  local_8 = (uint)local_8._1_3_ << 8;
  L2ParamStack::~L2ParamStack(local_3c);
  this = extraout_ECX_00;
LAB_104306a0:
  FOutputDevice::Logf(this,*(ushort **)GNetworkLog_exref);
  ExceptionList = local_10;
  return extraout_EAX & 0xffffff00;
}


// ==== 10430780 FUN_10430780 depth=0 from=raiz callees=APawn::AddMonsterRaceMgr@10314bbe FNMonsterRaceMgr::CheckMonsterRaceTime@1030411f CORE.DLL::L2ParamStack::~L2ParamStack@EXTERNAL:0000012a thunk_FUN_1042c470@10304a34 CORE.DLL::FOutputDevice::Logf@EXTERNAL:000000b4 thunk_FUN_104026b0@103034e5 User::SetName@103072f7 User::User@10313449 FUN_107a6660@107a6660 thunk_FUN_1042c3f0@1030a60f thunk_FUN_104226e0@1030d04e CORE.DLL::L2ParamStack::PushBack@EXTERNAL:00000136 CORE.DLL::L2ParamStack::L2ParamStack@EXTERNAL:0000012b CORE.DLL::FString::operator*@EXTERNAL:00000032 CORE.DLL::FVector::Rotation@EXTERNAL:00000147
// strings: 1088aa94=ddddddddffd | 1088aa80=NpcInfo | 1088aa20=(Receive)RaceMonsterStatusUpdatePacket | 

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_10430780(int param_1,undefined4 param_2)

{
  User *pUVar1;
  int iVar2;
  APawn *pAVar3;
  uint uVar4;
  undefined4 uVar5;
  float fVar6;
  User *pUVar7;
  int iVar8;
  int *piVar9;
  ushort *puVar10;
  uint extraout_EAX;
  int *piVar11;
  float unaff_EBP;
  int iVar12;
  undefined4 local_104;
  undefined4 *puStack_100;
  uint local_fc;
  int iStack_f8;
  int local_f4;
  int iStack_f0;
  int local_ec;
  int local_e8;
  float local_e4;
  int local_e0;
  undefined1 local_dc [4];
  int local_d8 [2];
  undefined1 local_d0 [4];
  int local_cc;
  float local_c8;
  float local_c4;
  float local_c0;
  undefined1 local_b8 [8];
  float fStack_b0;
  float fStack_ac;
  float fStack_a8;
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  float fStack_88;
  undefined4 *puStack_84;
  float fStack_80;
  L2ParamStack aLStack_7c [8];
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  double dStack_68;
  double dStack_60;
  undefined4 local_58 [2];
  undefined1 local_50 [4];
  ushort auStack_4c [8];
  undefined2 local_3c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  void *pvStack_c;
  undefined1 *puStack_8;
  int iStack_4;
  
  iStack_4 = -1;
  puStack_8 = &LAB_10810207;
  pvStack_c = ExceptionList;
  local_e0 = 0;
  local_c4 = 0.0;
  local_3c = 0;
  local_cc = 0;
  ExceptionList = &pvStack_c;
  uVar5 = thunk_FUN_104026b0(*(undefined4 *)(param_1 + 0x48),param_2,&DAT_1087ff44,&local_e0,
                             &local_c8);
  uVar5 = thunk_FUN_104026b0(*(undefined4 *)(param_1 + 0x48),uVar5,&DAT_1087ff8c,&local_cc);
  if ((local_c8 == -NAN) || (local_c0 = 0.0, local_cc < 1)) {
LAB_10430fad:
    FNMonsterRaceMgr::CheckMonsterRaceTime
              (&GL2MonsterRaceMgr,(float)local_e0 / (float)_DAT_10888760,
               (float)(int)local_c8 / (float)_DAT_10888760,1);
    FOutputDevice::Logf((FOutputDevice *)GNetworkLog_exref,*(ushort **)GNetworkLog_exref);
    ExceptionList = puStack_8;
    return extraout_EAX & 0xffffff00;
  }
LAB_1043081e:
  uVar5 = thunk_FUN_104026b0(*(undefined4 *)(param_1 + 0x48),uVar5,"ddddddddffd",&local_f4,local_b8,
                             &local_e4,&local_e8,&local_ec,local_d8,local_d0,local_dc,local_58,
                             local_50,&local_fc);
  fVar6 = (float)(**(code **)**(undefined4 **)GMalloc_exref)(0x50,&DAT_10853a28);
  iVar12 = 0;
  local_c4 = fVar6;
  do {
    iStack_f8 = 0;
    uVar5 = thunk_FUN_104026b0(*(undefined4 *)(iStack_4 + 0x48),uVar5,&DAT_1087f9dc,&iStack_f8);
    *(int *)((int)fVar6 + iVar12 * 4) = iStack_f8;
    iVar12 = iVar12 + 1;
  } while (iVar12 < 0x14);
  thunk_FUN_104026b0(*(undefined4 *)(iStack_4 + 0x48),uVar5,&DAT_1087ff8c,&local_cc);
  uVar4 = local_fc;
  iVar12 = DAT_10b1f538;
  if (DAT_10b1f538 != 0) {
    piVar9 = (int *)(DAT_10b1f538 + 0x194);
    iVar8 = *(int *)(*(int *)(DAT_10b1f538 + 0x1a0) +
                    (*(int *)(DAT_10b1f538 + 0x1a4) - 1U & local_fc) * 4);
    if (iVar8 != -1) {
      iVar2 = *piVar9;
      do {
        if (*(uint *)(iVar2 + 4 + iVar8 * 0xc) == local_fc) {
          if (*(int *)(iVar2 + 8 + iVar8 * 0xc) != 0) {
            iVar8 = *(int *)(*(int *)(DAT_10b1f538 + 0x1a0) +
                            (*(int *)(DAT_10b1f538 + 0x1a4) - 1U & local_fc) * 4);
            if (iVar8 == -1) goto LAB_104309a9;
            iVar2 = *piVar9;
            goto LAB_10430992;
          }
          break;
        }
        iVar8 = *(int *)(iVar2 + iVar8 * 0xc);
      } while (iVar8 != -1);
    }
  }
  goto LAB_10430946;
  while (iVar8 = *(int *)(iVar2 + iVar8 * 0xc), iVar8 != -1) {
LAB_10430992:
    if (*(uint *)(iVar2 + 4 + iVar8 * 0xc) == local_fc) {
      piVar11 = *(int **)(iVar2 + 8 + iVar8 * 0xc);
      goto LAB_104309ab;
    }
  }
LAB_104309a9:
  piVar11 = (int *)0x0;
LAB_104309ab:
  if (((*piVar11 == 1) && (iVar8 = thunk_FUN_104226e0(&local_fc), *(int *)(iVar8 + 4) != 0)) &&
     (iVar8 = thunk_FUN_104226e0(&local_fc), *(int *)(iVar8 + 4) != 0)) {
    iVar12 = *(int *)(*(int *)(iVar12 + 0x1a0) + (*(int *)(iVar12 + 0x1a4) - 1U & uVar4) * 4);
    if (iVar12 != -1) {
      iVar8 = *piVar9;
      do {
        if (*(uint *)(iVar8 + 4 + iVar12 * 0xc) == uVar4) {
          if (((*(int *)(iVar8 + 8 + iVar12 * 0xc) != 0) &&
              (piVar9 = (int *)thunk_FUN_104226e0(&local_fc), *piVar9 == 1)) &&
             (iVar12 = thunk_FUN_104226e0(&local_fc), *(int *)(iVar12 + 4) != 0)) {
            iVar12 = thunk_FUN_104226e0(&local_fc);
            iVar12 = *(int *)(iVar12 + 4);
            goto LAB_10430a09;
          }
          break;
        }
        iVar12 = *(int *)(iVar8 + iVar12 * 0xc);
      } while (iVar12 != -1);
    }
    iVar12 = 0;
LAB_10430a09:
    if (*(int *)(iVar12 + 0x204) != 0) {
      fStack_94 = (float)local_e0;
      pAVar3 = *(APawn **)(iVar12 + 0x204);
      fStack_90 = (float)local_d8[0];
      fStack_8c = (float)(int)local_e4;
      fStack_a4 = (float)local_ec;
      fStack_a0 = (float)iStack_f0;
      fStack_9c = (float)local_f4;
      uVar5 = FUN_107a6660(fVar6,fStack_a4,fStack_a0,fStack_9c,fStack_94,fStack_90,fStack_8c,
                           local_e8);
      APawn::AddMonsterRaceMgr(pAVar3,0x14,uVar5);
    }
  }
  else {
LAB_10430946:
    pUVar7 = (User *)(**(code **)**(undefined4 **)GMalloc_exref)(0x314,L"NpcInfo");
    if (pUVar7 == (User *)0x0) {
      pUVar7 = (User *)0x0;
    }
    else {
      pUVar7 = (User *)User::User(pUVar7);
    }
    *(undefined4 *)(pUVar7 + 0x18) = local_104;
    *(undefined4 *)(pUVar7 + 0xc) = 0;
    *(undefined4 *)(pUVar7 + 0x94) = 0;
    *(undefined4 *)(pUVar7 + 8) = 1;
    *(undefined4 *)(pUVar7 + 0x10) = 0;
    pUVar1 = pUVar7 + 0x18;
    *(int *)(pUVar7 + 0x14) = (int)local_c8 + -1000000;
    *(float *)(pUVar7 + 0x19c) = unaff_EBP;
    *(float *)(pUVar7 + 0x1a0) = unaff_EBP;
    *(float *)(pUVar7 + 0x1a4) = unaff_EBP;
    *(float *)(pUVar7 + 0x1a8) = unaff_EBP;
    *(float *)(pUVar7 + 0x1b4) = unaff_EBP;
    *(float *)(pUVar7 + 0x1b8) = unaff_EBP;
    *(float *)(pUVar7 + 0x1ac) = unaff_EBP;
    *(undefined8 *)(pUVar7 + 0x1bc) = 0x3ff0000000000000;
    *(undefined8 *)(pUVar7 + 0x1c4) = 0x3ff0000000000000;
    *(float *)(pUVar7 + 0x1b0) = unaff_EBP;
    *(float *)(pUVar7 + 0x1cc) = (float)dStack_68;
    *(undefined4 *)(pUVar7 + 0xb4) = 0;
    *(float *)(pUVar7 + 0x1d0) = (float)dStack_60;
    *(undefined4 *)(pUVar7 + 0xb8) = 0;
    *(undefined4 *)(pUVar7 + 0xc0) = 0;
    *(undefined4 *)(pUVar7 + 0x23c) = 1;
    *(undefined4 *)(pUVar7 + 0x2ac) = 1;
    *(undefined4 *)(pUVar7 + 0x194) = 0;
    *(undefined4 *)(pUVar7 + 0x198) = 0;
    if (auStack_4c[0] == 0) {
      iVar12 = *(int *)(DAT_10b3e0a8[3] + (DAT_10b3e0a8[4] - 1U & *(uint *)(pUVar7 + 0x14)) * 4);
      if (iVar12 != -1) {
        iVar8 = *DAT_10b3e0a8;
        do {
          if (*(uint *)(iVar8 + 4 + iVar12 * 0xc) == *(uint *)(pUVar7 + 0x14)) {
            iVar12 = *(int *)(iVar8 + 8 + iVar12 * 0xc);
            if (iVar12 != 0) {
              puVar10 = FString::operator*((FString *)(iVar12 + 4));
              User::SetName(pUVar7,puVar10);
              *(undefined4 *)(pUVar7 + 400) = *(undefined4 *)(iVar12 + 0x1c);
              *(undefined4 *)(*(int *)((int)pvStack_c + 0x48) + 0x5010) = 0;
            }
            break;
          }
          iVar12 = *(int *)(iVar8 + iVar12 * 0xc);
        } while (iVar12 != -1);
      }
    }
    else {
      User::SetName(pUVar7,auStack_4c);
      *(undefined4 *)(*(int *)((int)pvStack_c + 0x48) + 0x5010) = 1;
    }
    if ((0 < *(int *)pUVar1) && (DAT_10b1f538 != 0)) {
      iVar12 = thunk_FUN_104226e0(pUVar1);
      if (iVar12 != 0) {
        (**(code **)(**(int **)GMalloc_exref + 8))(iVar12);
        thunk_FUN_1042c470(pUVar1);
      }
      puStack_100 = (undefined4 *)(**(code **)**(undefined4 **)GMalloc_exref)(8,&DAT_10853a28);
      if (puStack_100 == (undefined4 *)0x0) {
        puStack_100 = (undefined4 *)0x0;
      }
      else {
        *puStack_100 = 0;
        puStack_100[1] = 0;
      }
      uStack_14 = 0xffffffff;
      if (puStack_100 != (undefined4 *)0x0) {
        puStack_100[1] = pUVar7;
        *puStack_100 = 1;
      }
      thunk_FUN_1042c3f0(pUVar1,&puStack_100);
    }
    *(undefined4 *)(pUVar7 + 0x204) = 0;
    puStack_100 = (undefined4 *)(float)local_e8;
    fStack_a0 = (float)local_e0;
    local_e4 = (float)puStack_100 - (float)local_f4;
    fStack_70 = fStack_a0 - (float)iStack_f8;
    fStack_6c = (float)local_ec - (float)(int)local_fc;
    fStack_74 = local_e4;
    FVector::Rotation((FVector *)&fStack_74);
    L2ParamStack::L2ParamStack((L2ParamStack *)&fStack_88,10);
    uStack_18 = 1;
    L2ParamStack::PushBack((L2ParamStack *)&fStack_88,(void *)0x1);
    L2ParamStack::PushBack((L2ParamStack *)&fStack_88,(void *)0x1);
    L2ParamStack::PushBack((L2ParamStack *)&fStack_88,(void *)0x0);
    L2ParamStack::PushBack((L2ParamStack *)&fStack_88,(void *)0x0);
    L2ParamStack::PushBack((L2ParamStack *)&fStack_88,(void *)0x0);
    local_c8 = (float)iStack_f8;
    unaff_EBP = (float)(int)local_fc;
    local_c0 = (float)(int)puStack_100;
    local_c4 = unaff_EBP;
    (**(code **)(**(int **)(DAT_10b1f538 + 0x54) + 600))
              (pUVar7,local_c8,unaff_EBP,local_c0,local_58[0],&fStack_88);
    if (*(int *)(pUVar7 + 0x204) != 0) {
      *(int *)(*(int *)(pUVar7 + 0x204) + 0x17d0) = local_cc;
      fStack_b0 = (float)local_e0;
      pAVar3 = *(APawn **)(pUVar7 + 0x204);
      fStack_ac = (float)local_d8[0];
      fStack_a8 = (float)(int)local_e4;
      unaff_EBP = (float)local_ec;
      puStack_100 = (undefined4 *)(float)iStack_f0;
      fStack_80 = (float)local_f4;
      fStack_88 = unaff_EBP;
      puStack_84 = puStack_100;
      uVar5 = FUN_107a6660(local_c4,unaff_EBP,puStack_100,fStack_80,fStack_b0,fStack_ac,fStack_a8,
                           0xffffffff);
      APawn::AddMonsterRaceMgr(pAVar3,0x14,uVar5);
    }
    pvStack_c = (void *)0xffffffff;
    L2ParamStack::~L2ParamStack(aLStack_7c);
    fVar6 = local_c4;
  }
  (**(code **)(**(int **)GMalloc_exref + 8))(fVar6);
  local_c0 = (float)((int)local_c0 + 1);
  uVar5 = param_2;
  if (local_cc <= (int)local_c0) goto LAB_10430fad;
  goto LAB_1043081e;
}


// ==== 10431240 FUN_10431240 depth=0 from=raiz callees=thunk_FUN_104226e0@1030d04e thunk_FUN_103254a0@10314fc4 ColosseumFence::ColosseumFence@10306faf thunk_FUN_1032ffc0@103131d8 thunk_FUN_1042c470@10304a34 CORE.DLL::FOutputDevice::Logf@EXTERNAL:000000b4 thunk_FUN_104026b0@103034e5 thunk_FUN_1042c3f0@1030a60f
// strings: 108874cc=ddddddd | 1088aae8=(Receive)ExColosseumFenceInfoPacket | 

uint FUN_10431240(int param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  uint extraout_EAX;
  undefined4 local_40;
  undefined4 local_3c;
  ColosseumFence *local_38;
  float local_34;
  float local_30;
  int local_2c;
  int local_28;
  int local_24;
  undefined4 *local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  puStack_c = &LAB_10810236;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffa0;
  local_8 = 0;
  ExceptionList = &local_10;
  thunk_FUN_104026b0(*(undefined4 *)(param_1 + 0x48),param_2,"ddddddd",&local_18,&local_1c,&local_24
                     ,&local_28,&local_2c,&local_3c,&local_40);
  iVar4 = DAT_10b1f538;
  if (DAT_10b1f538 != 0) {
    iVar1 = thunk_FUN_104226e0(&local_18);
    if (iVar1 != 0) {
      piVar2 = (int *)thunk_FUN_104226e0(&local_18);
      if (*piVar2 == 5) {
        iVar1 = thunk_FUN_104226e0(&local_18);
        if (*(int *)(iVar1 + 4) != 0) {
          iVar1 = thunk_FUN_104226e0(&local_18);
          puVar3 = *(undefined4 **)(iVar1 + 4);
          goto LAB_104312ec;
        }
      }
    }
  }
  puVar3 = (undefined4 *)0x0;
LAB_104312ec:
  local_20 = puVar3;
  if (puVar3 == (undefined4 *)0x0) {
    local_38 = (ColosseumFence *)thunk_FUN_1032ffc0(0x38);
    local_8._0_1_ = 1;
    if (local_38 == (ColosseumFence *)0x0) {
      puVar3 = (undefined4 *)0x0;
    }
    else {
      puVar3 = (undefined4 *)ColosseumFence::ColosseumFence(local_38);
    }
    local_8 = (uint)local_8._1_3_ << 8;
    *puVar3 = local_18;
    puVar3[1] = local_1c;
    local_30 = (float)local_24;
    local_34 = (float)local_28;
    local_38 = (ColosseumFence *)(float)local_2c;
    puVar3[2] = local_30;
    puVar3[3] = local_34;
    puVar3[4] = local_38;
    puVar3[5] = local_3c;
    puVar3[6] = local_40;
    iVar4 = DAT_10b1f538;
    local_20 = puVar3;
    if (DAT_10b1f538 != 0) {
      iVar4 = thunk_FUN_104226e0(&local_18);
      if (iVar4 != 0) {
        thunk_FUN_103254a0(iVar4);
        thunk_FUN_1042c470(&local_18);
      }
      local_38 = (ColosseumFence *)thunk_FUN_1032ffc0(8);
      if (local_38 == (ColosseumFence *)0x0) {
        local_38 = (ColosseumFence *)0x0;
      }
      else {
        *(undefined4 *)local_38 = 0;
        *(undefined4 *)(local_38 + 4) = 0;
      }
      local_8 = local_8 & 0xffffff00;
      if (local_38 != (ColosseumFence *)0x0) {
        *(undefined4 **)(local_38 + 4) = puVar3;
        *(undefined4 *)local_38 = 5;
      }
      thunk_FUN_1042c3f0(&local_18,&local_38);
      iVar4 = DAT_10b1f538;
    }
  }
  (**(code **)(**(int **)(iVar4 + 0x54) + 0x6f8))(puVar3,local_1c);
  FOutputDevice::Logf(*(FOutputDevice **)GNetworkLog_exref,
                      (ushort *)*(FOutputDevice **)GNetworkLog_exref);
  ExceptionList = local_10;
  return extraout_EAX & 0xffffff00;
}


// ==== 10431500 FUN_10431500 depth=0 from=raiz callees=thunk_FUN_10325f90@1031447a thunk_FUN_104225e0@1031502d thunk_FUN_10368430@1030b78f thunk_FUN_10368910@10301b13 thunk_FUN_104026b0@103034e5 thunk_FUN_10379630@1030eb10 thunk_FUN_1038fad0@10306eb0
// strings: 10883d84=ddddd | 

/* WARNING: Type propagation algorithm not settling */

uint FUN_10431500(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  uint uVar2;
  undefined1 local_74 [12];
  undefined1 local_68 [12];
  undefined1 local_5c [12];
  float local_50;
  float local_4c;
  float local_48;
  float local_3c;
  float local_38;
  float local_34;
  int local_30;
  int local_2c;
  int local_28 [5];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_10810268;
  local_10 = ExceptionList;
  local_14 = &stack0xffffff80;
  local_8 = 0;
  local_28[3] = 0;
  ExceptionList = &local_10;
  thunk_FUN_10368430();
  local_8._0_1_ = 1;
  thunk_FUN_10368430();
  local_8._0_1_ = 2;
  thunk_FUN_10368910();
  local_8 = CONCAT31(local_8._1_3_,3);
  uVar1 = thunk_FUN_104026b0(*(undefined4 *)(param_1 + 0x48),param_2,&DAT_1087ff8c,local_28 + 3);
  for (local_28[4] = 0; local_28[4] < local_28[3]; local_28[4] = local_28[4] + 1) {
    local_28[2] = 0xffffffff;
    local_28[1] = 0;
    local_28[0] = 0;
    local_2c = 0;
    local_30 = 0;
    uVar1 = thunk_FUN_104026b0(*(undefined4 *)(param_1 + 0x48),uVar1,"ddddd",local_28 + 2,
                               local_28 + 1,local_28,&local_2c,&local_30);
    thunk_FUN_104225e0(local_28 + 2);
    thunk_FUN_104225e0(local_28 + 1);
    local_50 = (float)local_28[0];
    local_4c = (float)local_2c;
    local_48 = (float)local_30;
    local_3c = local_48;
    local_38 = local_4c;
    local_34 = local_50;
    thunk_FUN_10379630(&local_50);
  }
  (**(code **)(**(int **)(DAT_10b1f538 + 0x54) + 0x770))(local_74,local_68,local_5c);
  local_8._0_1_ = 2;
  thunk_FUN_1038fad0();
  local_8._0_1_ = 1;
  thunk_FUN_10325f90();
  local_8 = (uint)local_8._1_3_ << 8;
  uVar2 = thunk_FUN_10325f90();
  ExceptionList = local_10;
  return uVar2 & 0xffffff00;
}


// ==== 104342f0 FUN_104342f0 depth=0 from=raiz callees=CORE.DLL::FVector::RotateAngleAxis@EXTERNAL:00000143 CORE.DLL::L2ParamStack::~L2ParamStack@EXTERNAL:0000012a User::SetEventmatchEffect@103022f7 thunk_FUN_1042c470@10304a34 CORE.DLL::FOutputDevice::Logf@EXTERNAL:000000b4 User::SetAttackItemVariationOption@1030aa47 thunk_FUN_104026b0@103034e5 User::GetItemClassID@10305394 APawn::CheckCubicStatus@1030a871 User::User@10313449 thunk_FUN_104317d0@10303df5 thunk_FUN_1042c3f0@1030a60f APawn::NActionStop@1030bef6 CORE.DLL::L2ParamStack::PushBack@EXTERNAL:00000136 thunk_FUN_104226e0@1030d04e _memset@107a6860 thunk_FUN_10422ee0@1030c04a User::HasBootsSound@10303742 CORE.DLL::L2ParamStack::L2ParamStack@EXTERNAL:0000012b AActor::SetCollisionSize@1030c3ab UNetworkHandler::NotifyQuestMark@103095e8
// strings: 1088aed8=UserInfo | 1088ae38=dddddSddddQddddddddddddddddddddddddddddddddddddddddddddddddhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhddddddddddddddddddddffffddddSdddddcccddh | 10887e80=ddddc | 1088ad98=[Error] Can not find the Vehicle data [UserInfoPacket] | 1088ad00=(Receive)UserInfo ID:%d Name:%s Race:%d Sex:%d X:%d Y:%d Z:%d | 

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_104342f0(void)

{
  User *pUVar1;
  User *pUVar2;
  uint *puVar3;
  float fVar4;
  uint uVar5;
  longlong lVar6;
  UNetworkHandler *pUVar7;
  uint3 uVar8;
  short sVar9;
  User *pUVar10;
  undefined4 uVar11;
  int *piVar12;
  int iVar13;
  uint *puVar14;
  undefined4 *puVar15;
  int iVar16;
  float *pfVar17;
  uint extraout_EAX;
  APawn *pAVar18;
  uint *puVar19;
  short *psVar20;
  short sVar21;
  uint *unaff_EBP;
  User *pUVar22;
  undefined4 unaff_retaddr;
  char cStack_11d;
  short *psStack_118;
  int iStack_114;
  uint local_110;
  short *psStack_10c;
  int iStack_108;
  char cStack_101;
  int local_100;
  float fStack_fc;
  float fStack_f8;
  float fStack_f4;
  float fStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  int iStack_e0;
  User *local_dc;
  int iStack_d8;
  User *pUStack_d4;
  User *pUStack_d0;
  int iStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  int iStack_c0;
  int iStack_bc;
  int iStack_b8;
  void *pvStack_b4;
  float fStack_b0;
  float fStack_ac;
  short *psStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  L2ParamStack aLStack_94 [16];
  uint uStack_84;
  undefined1 auStack_80 [4];
  undefined1 auStack_7c [4];
  undefined1 auStack_78 [4];
  undefined1 auStack_74 [4];
  undefined1 auStack_70 [4];
  undefined1 auStack_6c [4];
  undefined1 auStack_68 [4];
  int iStack_64;
  undefined1 auStack_60 [4];
  undefined1 auStack_5c [4];
  int iStack_58;
  undefined1 auStack_54 [4];
  undefined1 auStack_50 [4];
  undefined1 auStack_4c [12];
  undefined1 auStack_40 [4];
  undefined1 auStack_3c [8];
  double dStack_34;
  undefined8 uStack_2c;
  void *pvStack_24;
  undefined4 uStack_20;
  undefined8 uStack_1c;
  undefined4 uStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  int iStack_4;
  
  uVar8 = (uint3)psStack_118;
  iStack_4 = -1;
  puStack_8 = &LAB_10810894;
  pvStack_c = ExceptionList;
  psStack_118 = (short *)(uint)(uint3)psStack_118;
  local_dc = (User *)CONCAT31(local_dc._1_3_,1);
  local_110 = 0;
  local_100 = 0;
  ExceptionList = &pvStack_c;
  pUVar10 = (User *)(**(code **)**(undefined4 **)GMalloc_exref)(0x314,L"UserInfo");
  if (pUVar10 == (User *)0x0) {
    pUVar10 = (User *)0x0;
  }
  else {
    pUVar10 = (User *)User::User(pUVar10);
  }
  _memset(pUVar10,0,0x314);
  iVar13 = iStack_4;
  pUStack_d0 = pUVar10 + 0x50;
  local_dc = pUVar10 + 0x4c;
  pUStack_d4 = pUVar10 + 0x1c;
  pUVar1 = pUVar10 + 0x18;
  uVar11 = thunk_FUN_104026b0(*(undefined4 *)(iStack_4 + 0x48),unaff_retaddr,
                              "dddddSddddQddddddddddddddddddddddddddddddddddddddddddddddddhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhddddddddddddddddddddffffddddSdddddcccddh"
                              ,&iStack_e0,&iStack_cc,&iStack_d8,&local_110,pUVar1,0x30,pUStack_d4,
                              local_dc,pUStack_d0,pUVar10 + 0x54,pUVar10 + 0x58,pUVar10 + 0x5c,
                              pUVar10 + 100,pUVar10 + 0x68,pUVar10 + 0x6c,pUVar10 + 0x70,
                              pUVar10 + 0x74,pUVar10 + 0x78,pUVar10 + 0x7c,pUVar10 + 0x80,
                              pUVar10 + 0x84,pUVar10 + 0x88,pUVar10 + 0x218,pUVar10 + 0x214,
                              pUVar10 + 0x8c,pUVar10 + 0x90,pUVar10 + 0x98,pUVar10 + 0x9c,
                              pUVar10 + 0xa0,pUVar10 + 0xa4,pUVar10 + 0xa8,pUVar10 + 0xac,
                              pUVar10 + 0xb0,pUVar10 + 0xb4,pUVar10 + 0xb8,pUVar10 + 0xbc,
                              pUVar10 + 0xc0,pUVar10 + 0xc4,pUVar10 + 200,pUVar10 + 0xcc,
                              pUVar10 + 0xd0,pUVar10 + 0xdc,pUVar10 + 0xe0,&uStack_84,auStack_80,
                              auStack_7c,auStack_78,auStack_74,auStack_70,auStack_6c,auStack_68,
                              &iStack_64,auStack_60,auStack_5c,&iStack_58,auStack_54,auStack_50,
                              auStack_4c,auStack_40,auStack_3c,pUVar10 + 0xe8,pUVar10 + 0xec,
                              pUVar10 + 0xf0,pUVar10 + 0xf4,pUVar10 + 0xf8,pUVar10 + 0xfc,
                              pUVar10 + 0x100,pUVar10 + 0x104,pUVar10 + 0x108,pUVar10 + 0x10c,
                              pUVar10 + 0x110,pUVar10 + 0x114,pUVar10 + 0x118,pUVar10 + 0x11c,
                              pUVar10 + 0x120,pUVar10 + 0x124,pUVar10 + 0x128,pUVar10 + 300,
                              pUVar10 + 0x130,pUVar10 + 0x134,pUVar10 + 0x138,pUVar10 + 0x13c,
                              pUVar10 + 0x140,pUVar10 + 0x144,pUVar10 + 0x148,pUVar10 + 0x14c,
                              pUVar10 + 0x150,pUVar10 + 0x154,pUVar10 + 0x158,pUVar10 + 0x15c,
                              pUVar10 + 0x170,pUVar10 + 0x174,pUVar10 + 0x178,pUVar10 + 0x17c,
                              pUVar10 + 0x224,pUVar10 + 0x228,pUVar10 + 0x22c,pUVar10 + 0x230,
                              pUVar10 + 0x21c,pUVar10 + 0x220,pUVar10 + 0x234,pUVar10 + 0x23c,
                              pUVar10 + 0x2ac,pUVar10 + 0x238,pUVar10 + 0x194,pUVar10 + 0x198,
                              pUVar10 + 0x19c,pUVar10 + 0x1a0,pUVar10 + 0x1a4,pUVar10 + 0x1a8,
                              pUVar10 + 0x1b4,pUVar10 + 0x1b8,pUVar10 + 0x1ac,pUVar10 + 0x1b0,
                              &uStack_2c,&uStack_1c,&dStack_34,&pvStack_24,pUVar10 + 0x240,
                              pUVar10 + 0x244,pUVar10 + 0x248,pUVar10 + 0x250);
  sVar9 = (short)uVar8;
  if (0 < sVar9) {
    lVar6 = (ulonglong)((int)sVar9 + 1) * 2;
    iStack_108 = (**(code **)**(undefined4 **)GMalloc_exref)
                           ((uint)lVar6 | -(uint)((int)((ulonglong)lVar6 >> 0x20) != 0),
                            &DAT_10853a28);
  }
  sVar21 = 0;
  if (0 < sVar9) {
    do {
      uVar11 = thunk_FUN_104026b0(*(undefined4 *)(iVar13 + 0x48),uVar11,&DAT_1088494c,
                                  iStack_108 + sVar21 * 2);
      sVar21 = sVar21 + 1;
    } while (sVar21 < sVar9);
  }
  uVar11 = thunk_FUN_104026b0(*(undefined4 *)(iVar13 + 0x48),uVar11,&DAT_1087f9dc,pUVar10 + 700);
  uStack_e8 = 0;
  uStack_c8 = 0;
  uStack_a4 = 0;
  uVar11 = thunk_FUN_104026b0(*(undefined4 *)(iVar13 + 0x48),uVar11,&DAT_10883f30,&uStack_e8,
                              &uStack_ec);
  uVar11 = thunk_FUN_104026b0(*(undefined4 *)(iVar13 + 0x48),uVar11,&DAT_1087ff8c,&pvStack_b4);
  if (0 < *(int *)(pUVar10 + 0x284)) {
    L2ParamStack::L2ParamStack(aLStack_94,10);
    pvStack_c = (void *)0x0;
    L2ParamStack::PushBack(aLStack_94,pvStack_b4);
    (**(code **)(**(int **)(DAT_10b1f538 + 0x54) + 0x3cc))(aLStack_94);
    pvStack_c = (void *)0xffffffff;
    L2ParamStack::~L2ParamStack(aLStack_94);
  }
  uVar11 = thunk_FUN_104026b0(*(undefined4 *)(iVar13 + 0x48),uVar11,&DAT_1088ae30,pUVar10 + 0x2e0,
                              pUVar10 + 0x2e2,&uStack_c8,pUVar10 + 0x2e4);
  uVar11 = thunk_FUN_104026b0(*(undefined4 *)(iVar13 + 0x48),uVar11,"ddddc",pUVar10 + 0x2c0,
                              &uStack_a4,pUVar10 + 0x2c4,pUVar10 + 0x2c8,&cStack_101);
  uVar11 = thunk_FUN_104026b0(*(undefined4 *)(iVar13 + 0x48),uVar11,&DAT_1087f9dc,pUVar10 + 0x2ec);
  uVar11 = thunk_FUN_104026b0(*(undefined4 *)(iVar13 + 0x48),uVar11,&DAT_1088ae2c,pUVar10 + 0x2a0,
                              pUVar10 + 0x2f8,pUVar10 + 0x2fc);
  uStack_c4 = 0;
  uVar11 = thunk_FUN_104026b0(*(undefined4 *)(iVar13 + 0x48),uVar11,&DAT_1087fa3c,&uStack_c4,
                              &iStack_b8,&iStack_bc,&iStack_c0);
  fStack_b0 = (float)iStack_b8;
  pUVar22 = pUVar10 + 0x308;
  fStack_fc = (float)iStack_bc;
  psStack_10c = (short *)(float)iStack_c0;
  fStack_ac = fStack_fc;
  psStack_a8 = psStack_10c;
  uVar11 = thunk_FUN_104026b0(*(undefined4 *)(iVar13 + 0x48),uVar11,&DAT_1087ff8c,pUVar22);
  uVar11 = thunk_FUN_104026b0(*(undefined4 *)(iVar13 + 0x48),uVar11,&DAT_1087f9dc,&uStack_e4);
  uVar11 = thunk_FUN_104026b0(*(undefined4 *)(iVar13 + 0x48),uVar11,&DAT_1087ff44,pUVar10 + 0x30c,
                              pUVar10 + 0x310);
  pUVar2 = pUVar10 + 400;
  uVar11 = thunk_FUN_104026b0(*(undefined4 *)(iVar13 + 0x48),uVar11,&DAT_1087ff8c,pUVar2);
  *(uint *)pUVar2 =
       (((byte)*pUVar2 | 0xffffff00) << 8 | (uint)(byte)pUVar10[0x191]) << 8 |
       (uint)(byte)pUVar10[0x192];
  thunk_FUN_104026b0(*(undefined4 *)(iVar13 + 0x48),uVar11,&DAT_1087ff8c,pUVar10 + 0x304);
  iVar13 = *(int *)(pUVar10 + 0x304);
  if ((iVar13 < 1) || (0x13 < iVar13)) {
    uVar11 = 0;
  }
  else {
    uVar11 = 1;
  }
  *(undefined4 *)(pUVar10 + 0x300) = uVar11;
  *(undefined4 *)(pUVar10 + 0x94) = 1;
  *(uint *)pUVar22 =
       (((byte)*pUVar22 | 0xffffff00) << 8 | (uint)(byte)pUVar10[0x309]) << 8 |
       (uint)(byte)pUVar10[0x30a];
  *(undefined8 *)(pUVar10 + 0x1bc) = uStack_1c;
  *(undefined8 *)(pUVar10 + 0x1c4) = uStack_2c;
  *(float *)(pUVar10 + 0x1cc) = (float)dStack_34;
  *(float *)(pUVar10 + 0x1d0) = (float)(double)CONCAT44(uStack_20,pvStack_24);
  *(int *)(pUVar10 + 0x2e8) = (int)cStack_101;
  if (DAT_10b1f538 != (UNetworkHandler *)0x0) {
    iVar13 = *(int *)(*(int *)(DAT_10b1f538 + 0x1a0) +
                     (*(int *)(DAT_10b1f538 + 0x1a4) - 1U & *(uint *)pUVar1) * 4);
    if (iVar13 != -1) {
      iVar16 = *(int *)(DAT_10b1f538 + 0x194);
      do {
        if (*(uint *)(iVar16 + 4 + iVar13 * 0xc) == *(uint *)pUVar1) {
          if ((((*(int *)(iVar16 + 8 + iVar13 * 0xc) != 0) &&
               (piVar12 = (int *)thunk_FUN_104226e0(pUVar1), *piVar12 == 1)) &&
              (iVar13 = thunk_FUN_104226e0(pUVar1), *(int *)(iVar13 + 4) != 0)) &&
             (iVar13 = thunk_FUN_104226e0(pUVar1), *(int *)(iVar13 + 4) != 0)) {
            iVar13 = thunk_FUN_104226e0(pUVar1);
            if (((iVar13 == 0) || (piVar12 = (int *)thunk_FUN_104226e0(pUVar1), *piVar12 != 1)) ||
               (iVar13 = thunk_FUN_104226e0(pUVar1), *(int *)(iVar13 + 4) == 0)) {
              psStack_10c = (short *)0x0;
            }
            else {
              iVar13 = thunk_FUN_104226e0(pUVar1);
              psStack_10c = *(short **)(iVar13 + 4);
            }
            puVar19 = (uint *)(psStack_10c + 0x4c);
            fStack_fc = (float)((int)pUVar10 - (int)psStack_10c);
            local_100 = 0;
            goto LAB_10434c80;
          }
          break;
        }
        iVar13 = *(int *)(iVar16 + iVar13 * 0xc);
      } while (iVar13 != -1);
    }
  }
  iStack_114 = 0;
  pUVar22 = pUVar10 + 0x98;
  do {
    if (*(int *)pUVar22 != 0) {
      piVar12 = (int *)(**(code **)**(undefined4 **)GMalloc_exref)(0x18,&DAT_10853a28);
      *piVar12 = *(int *)pUVar22;
      piVar12[1] = (&uStack_84)[iStack_114];
      piVar12[4] = 0;
      piVar12[5] = 0;
      if ((0 < *(int *)pUVar22) && (DAT_10b1f538 != (UNetworkHandler *)0x0)) {
        iVar13 = thunk_FUN_104226e0(pUVar22);
        if (iVar13 != 0) {
          (**(code **)(**(int **)GMalloc_exref + 8))(iVar13);
          thunk_FUN_1042c470(pUVar22);
        }
        unaff_EBP = (uint *)(**(code **)**(undefined4 **)GMalloc_exref)(8,&DAT_10853a28);
        if (unaff_EBP == (uint *)0x0) {
          unaff_EBP = (uint *)0x0;
        }
        else {
          *unaff_EBP = 0;
          unaff_EBP[1] = 0;
        }
        pvStack_c = (void *)0xffffffff;
        if (unaff_EBP != (uint *)0x0) {
          unaff_EBP[1] = (uint)piVar12;
          *unaff_EBP = 2;
        }
        thunk_FUN_1042c3f0(pUVar22,&stack0xfffffed8);
      }
    }
    iStack_114 = iStack_114 + 1;
    pUVar22 = pUVar22 + 4;
  } while (iStack_114 < 0x14);
  *(undefined4 *)(pUVar10 + 8) = 0;
  *(undefined4 *)(pUVar10 + 0x94) = 1;
  if ((0 < (int)*(uint *)pUVar1) && (DAT_10b1f538 != (UNetworkHandler *)0x0)) {
    iVar13 = thunk_FUN_104226e0(pUVar1);
    if (iVar13 != 0) {
      (**(code **)(**(int **)GMalloc_exref + 8))(iVar13);
      thunk_FUN_1042c470(pUVar1);
    }
    unaff_EBP = (uint *)(**(code **)**(undefined4 **)GMalloc_exref)(8,&DAT_10853a28);
    if (unaff_EBP == (uint *)0x0) {
      unaff_EBP = (uint *)0x0;
    }
    else {
      *unaff_EBP = 0;
      unaff_EBP[1] = 0;
    }
    pvStack_c = (void *)0xffffffff;
    if (unaff_EBP != (uint *)0x0) {
      unaff_EBP[1] = (uint)pUVar10;
      *unaff_EBP = 1;
    }
    thunk_FUN_1042c3f0(pUVar1,&stack0xfffffed8);
  }
  fStack_f8 = (float)iStack_e0;
  DAT_10b1f530 = *(uint *)pUVar1;
  fStack_f4 = (float)iStack_cc;
  fStack_f0 = (float)iStack_d8;
  if (0 < (int)local_110) {
    if (DAT_10b1f538 != (UNetworkHandler *)0x0) {
      iVar13 = *(int *)(*(int *)(DAT_10b1f538 + 0x1a0) +
                       (*(int *)(DAT_10b1f538 + 0x1a4) - 1U & local_110) * 4);
      if (iVar13 != -1) {
        iVar16 = *(int *)(DAT_10b1f538 + 0x194);
        do {
          if (*(uint *)(iVar16 + 4 + iVar13 * 0xc) == local_110) {
            if ((((*(int *)(iVar16 + 8 + iVar13 * 0xc) != 0) &&
                 (piVar12 = (int *)thunk_FUN_104226e0(&local_110), *piVar12 == 3)) &&
                (iVar13 = thunk_FUN_104226e0(&local_110), *(int *)(iVar13 + 4) != 0)) &&
               (iVar13 = thunk_FUN_104226e0(&local_110), *(int *)(iVar13 + 4) != 0)) {
              iVar13 = thunk_FUN_104226e0(&local_110);
              if (((iVar13 == 0) || (piVar12 = (int *)thunk_FUN_104226e0(&local_110), *piVar12 != 3)
                  ) || (iVar13 = thunk_FUN_104226e0(&local_110), *(int *)(iVar13 + 4) == 0)) {
                iVar13 = 0;
              }
              else {
                iVar13 = thunk_FUN_104226e0(&local_110);
                iVar13 = *(int *)(iVar13 + 4);
              }
              uStack_a0 = 0;
              uStack_9c = 0;
              uStack_98 = 0x3f800000;
              pfVar17 = (float *)FVector::RotateAngleAxis
                                           ((FVector *)&fStack_f8,(int)aLStack_94,
                                            (FVector *)
                                            (*(uint *)(*(int *)(iVar13 + 4) + 0x1cc) & 0xffff));
              iVar13 = *(int *)(iVar13 + 4);
              fStack_fc = *pfVar17 + *(float *)(iVar13 + 0x1bc);
              fStack_f8 = *(float *)(iVar13 + 0x1c0) + pfVar17[1];
              fStack_f4 = *(float *)(iVar13 + 0x1c4) + pfVar17[2];
              goto LAB_10435993;
            }
            break;
          }
          iVar13 = *(int *)(iVar16 + iVar13 * 0xc);
        } while (iVar13 != -1);
      }
    }
    FOutputDevice::Logf(*(FOutputDevice **)GNetworkLog_exref,
                        (ushort *)*(FOutputDevice **)GNetworkLog_exref);
  }
LAB_10435993:
  *(undefined4 *)(pUVar10 + 0x204) = 0;
  (**(code **)(**(int **)(DAT_10b1f538 + 0x54) + 0x124))
            (pUVar10,fStack_f8,fStack_f4,fStack_f0,0,(int)cStack_11d,uStack_c8,uStack_ec,uStack_e4);
  sVar9 = *(short *)(pUVar10 + 0x2b0);
  if (((sVar9 == 1) || (sVar9 == 3)) || ((sVar9 == 5 || ((sVar9 == 7 || (sVar9 == 8)))))) {
    APawn::NActionStop(*(APawn **)(pUVar10 + 0x204));
    if (*(short *)(pUVar10 + 0x2b0) == 7) {
      *(undefined4 *)(*(int *)(pUVar10 + 0x204) + 0x62c) = 10;
    }
    else {
      *(undefined4 *)(*(int *)(pUVar10 + 0x204) + 0x62c) = 9;
    }
    *(int *)(*(int *)(pUVar10 + 0x204) + 0x63c) = *(int *)(pUVar10 + 0x204);
  }
  if ((*(short *)(pUVar10 + 0x2b0) == 0) && (*(int *)(*(APawn **)(pUVar10 + 0x204) + 0x62c) == 9)) {
    APawn::NActionStop(*(APawn **)(pUVar10 + 0x204));
  }
  pAVar18 = *(APawn **)(pUVar10 + 0x204);
  if ((*(int *)(pAVar18 + 0x718) != 0) && ((*(byte *)(*(int *)(pAVar18 + 0x718) + 0x714) & 1) != 0))
  {
    APawn::CheckCubicStatus(pAVar18,0,(short *)0x0);
    pAVar18 = *(APawn **)(*(int *)(pUVar10 + 0x204) + 0x718);
  }
  APawn::CheckCubicStatus(pAVar18,(short)unaff_EBP,psStack_118);
  *(float *)(*(int *)(pUVar10 + 0x204) + 0x17d0) = fStack_f8;
  *(int *)(*(int *)(pUVar10 + 0x204) + 0x778) = (int)fStack_fc._0_1_;
  iVar13 = User::HasBootsSound(pUVar10,iStack_64);
  *(int *)(*(int *)(pUVar10 + 0x204) + 0x1828) = iVar13;
  *(undefined4 *)(*(int *)(pUVar10 + 0x204) + 0x1830) = *(undefined4 *)(pUVar10 + 0x2e8);
  puVar19 = (uint *)(*(int *)(pUVar10 + 0x204) + 0x1820);
  *puVar19 = *puVar19 ^
             (*(uint *)(*(int *)(pUVar10 + 0x204) + 0x1820) ^ *(uint *)(pUVar10 + 0x2fc)) & 1;
  goto LAB_10435c34;
LAB_10434c80:
  uVar5 = *puVar19;
  if ((uVar5 != 0) || (*(int *)((int)fStack_fc + (int)puVar19) != 0)) {
    if (DAT_10b1f538 != (UNetworkHandler *)0x0) {
      iVar13 = *(int *)(*(int *)(DAT_10b1f538 + 0x1a0) +
                       (*(int *)(DAT_10b1f538 + 0x1a4) - 1U & uVar5) * 4);
      if (iVar13 != -1) {
        iVar16 = *(int *)(DAT_10b1f538 + 0x194);
        do {
          if (*(uint *)(iVar16 + 4 + iVar13 * 0xc) == uVar5) {
            if (*(int *)(iVar16 + 8 + iVar13 * 0xc) != 0) {
              iVar13 = *(int *)(*(int *)(DAT_10b1f538 + 0x1a0) +
                               (*(int *)(DAT_10b1f538 + 0x1a4) - 1U & uVar5) * 4);
              goto joined_r0x10434e38;
            }
            break;
          }
          iVar13 = *(int *)(iVar16 + iVar13 * 0xc);
        } while (iVar13 != -1);
      }
    }
    goto LAB_10434cd8;
  }
  goto LAB_104350ec;
joined_r0x10434e38:
  if (iVar13 == -1) goto LAB_10434e54;
  if (*(uint *)(iVar16 + 4 + iVar13 * 0xc) == uVar5) {
    piVar12 = *(int **)(iVar16 + 8 + iVar13 * 0xc);
    goto LAB_10434e56;
  }
  iVar13 = *(int *)(iVar16 + iVar13 * 0xc);
  goto joined_r0x10434e38;
LAB_10434e54:
  piVar12 = (int *)0x0;
LAB_10434e56:
  if ((*piVar12 == 2) && (iVar13 = thunk_FUN_104226e0(puVar19), *(int *)(iVar13 + 4) != 0)) {
    iVar13 = thunk_FUN_104226e0(puVar19);
    iStack_114 = *(int *)(iVar13 + 4);
  }
  else {
LAB_10434cd8:
    iStack_114 = 0;
  }
  if (DAT_10b1f538 != (UNetworkHandler *)0x0) {
    puVar3 = (uint *)((int)fStack_fc + (int)puVar19);
    uVar5 = *puVar3;
    iVar13 = *(int *)(*(int *)(DAT_10b1f538 + 0x1a0) +
                     (*(int *)(DAT_10b1f538 + 0x1a4) - 1U & uVar5) * 4);
    if (iVar13 != -1) {
      iVar16 = *(int *)(DAT_10b1f538 + 0x194);
      do {
        if (*(uint *)(iVar16 + 4 + iVar13 * 0xc) == uVar5) {
          if (*(int *)(iVar16 + 8 + iVar13 * 0xc) != 0) {
            iVar13 = *(int *)(*(int *)(DAT_10b1f538 + 0x1a0) +
                             (*(int *)(DAT_10b1f538 + 0x1a4) - 1U & uVar5) * 4);
            goto joined_r0x10434eae;
          }
          break;
        }
        iVar13 = *(int *)(iVar16 + iVar13 * 0xc);
      } while (iVar13 != -1);
    }
  }
LAB_10434d38:
  iVar13 = 0;
LAB_10434d3a:
  if (((iStack_114 == 0) || (iVar13 == 0)) || (iStack_114 != iVar13)) {
    puVar3 = (uint *)((int)fStack_fc + (int)puVar19);
    if ((*(int *)((int)fStack_fc + (int)puVar19) != 0) && (iVar13 == 0)) {
      puVar14 = (uint *)(**(code **)**(undefined4 **)GMalloc_exref)(0x18,&DAT_10853a28);
      *puVar14 = *puVar3;
      puVar14[1] = (&uStack_84)[local_100];
      puVar14[4] = 0;
      puVar14[5] = 0;
      if ((0 < (int)*puVar3) && (DAT_10b1f538 != (UNetworkHandler *)0x0)) {
        iVar13 = thunk_FUN_104226e0(puVar3);
        if (iVar13 != 0) {
          (**(code **)(**(int **)GMalloc_exref + 8))(iVar13);
          thunk_FUN_1042c470(puVar3);
        }
        unaff_EBP = (uint *)(**(code **)**(undefined4 **)GMalloc_exref)(8,&DAT_10853a28);
        if (unaff_EBP == (uint *)0x0) {
          unaff_EBP = (uint *)0x0;
        }
        else {
          *unaff_EBP = 0;
          unaff_EBP[1] = 0;
        }
        pvStack_c = (void *)0xffffffff;
        if (unaff_EBP != (uint *)0x0) {
          unaff_EBP[1] = (uint)puVar14;
          *unaff_EBP = 2;
        }
        thunk_FUN_1042c3f0(puVar3,&stack0xfffffed8);
      }
    }
    uVar5 = *puVar3;
    if (iStack_114 == 0) {
      if ((0 < (int)uVar5) && (*puVar19 != uVar5)) {
        (**(code **)(**(int **)(DAT_10b1f538 + 0x54) + 0x168))((&uStack_84)[local_100]);
      }
    }
    else {
      if (((int)uVar5 < 1) || (*puVar19 == uVar5)) {
        if (uVar5 == 0) {
          (**(code **)(**(int **)(DAT_10b1f538 + 0x54) + 0x168))(*(undefined4 *)(iStack_114 + 4));
        }
      }
      else {
        (**(code **)(**(int **)(DAT_10b1f538 + 0x54) + 0x168))((&uStack_84)[local_100]);
      }
      if (DAT_10b1f538 != (UNetworkHandler *)0x0) {
        iVar13 = *(int *)(*(int *)(DAT_10b1f538 + 0x1a0) +
                         (*(int *)(DAT_10b1f538 + 0x1a4) - 1U & *puVar19) * 4);
        if (iVar13 != -1) {
          iVar16 = *(int *)(DAT_10b1f538 + 0x194);
          do {
            if (*(uint *)(iVar16 + 4 + iVar13 * 0xc) == *puVar19) {
              if (((*(int *)(iVar16 + 8 + iVar13 * 0xc) != 0) &&
                  (piVar12 = (int *)thunk_FUN_104226e0(puVar19), *piVar12 == 2)) &&
                 (iVar13 = thunk_FUN_104226e0(puVar19), *(int *)(iVar13 + 4) != 0)) {
                iVar13 = thunk_FUN_104226e0(puVar19);
                uVar11 = *(undefined4 *)(iVar13 + 4);
                goto LAB_10434fc9;
              }
              break;
            }
            iVar13 = *(int *)(iVar16 + iVar13 * 0xc);
          } while (iVar13 != -1);
        }
      }
      uVar11 = 0;
LAB_10434fc9:
      (**(code **)(**(int **)GMalloc_exref + 8))(uVar11);
      if (DAT_10b1f538 != (UNetworkHandler *)0x0) {
        iVar13 = *(int *)(*(int *)(DAT_10b1f538 + 0x1a0) +
                         (*(int *)(DAT_10b1f538 + 0x1a4) - 1U & *puVar19) * 4);
        if (iVar13 != -1) {
          iVar16 = *(int *)(DAT_10b1f538 + 0x194);
          do {
            if (*(uint *)(iVar16 + 4 + iVar13 * 0xc) == *puVar19) {
              if ((*(int *)(iVar16 + 8 + iVar13 * 0xc) != 0) &&
                 (piVar12 = (int *)thunk_FUN_104226e0(puVar19), *piVar12 == 2)) {
                uVar11 = thunk_FUN_104226e0(puVar19);
                (**(code **)(**(int **)GMalloc_exref + 8))(uVar11);
                thunk_FUN_1042c470(puVar19);
              }
              break;
            }
            iVar13 = *(int *)(iVar16 + iVar13 * 0xc);
          } while (iVar13 != -1);
        }
      }
    }
  }
LAB_104350ec:
  local_100 = local_100 + 1;
  puVar19 = puVar19 + 1;
  if (0x13 < local_100) goto code_r0x1043510b;
  goto LAB_10434c80;
joined_r0x10434eae:
  if (iVar13 == -1) goto LAB_10434ec4;
  if (*(uint *)(iVar16 + 4 + iVar13 * 0xc) == uVar5) {
    piVar12 = *(int **)(iVar16 + 8 + iVar13 * 0xc);
    goto LAB_10434ec6;
  }
  iVar13 = *(int *)(iVar16 + iVar13 * 0xc);
  goto joined_r0x10434eae;
LAB_10434ec4:
  piVar12 = (int *)0x0;
LAB_10434ec6:
  if ((*piVar12 == 2) && (iVar13 = thunk_FUN_104226e0(puVar3), *(int *)(iVar13 + 4) != 0)) {
    iVar13 = thunk_FUN_104226e0(puVar3);
    iVar13 = *(int *)(iVar13 + 4);
    goto LAB_10434d3a;
  }
  goto LAB_10434d38;
code_r0x1043510b:
  *(undefined4 *)(pUVar10 + 0x204) = *(undefined4 *)(psStack_10c + 0x102);
  *(undefined4 *)(pUVar10 + 0x1d4) = *(undefined4 *)(psStack_10c + 0xea);
  *(undefined4 *)(pUVar10 + 0x1d8) = *(undefined4 *)(psStack_10c + 0xec);
  *(undefined4 *)(pUVar10 + 0x1dc) = *(undefined4 *)(psStack_10c + 0xee);
  *(undefined4 *)(pUVar10 + 0x1e0) = *(undefined4 *)(psStack_10c + 0xf0);
  *(undefined4 *)(pUVar10 + 0x1e4) = *(undefined4 *)(psStack_10c + 0xf2);
  *(undefined4 *)(pUVar10 + 0x1e8) = *(undefined4 *)(psStack_10c + 0xf4);
  *(undefined4 *)(pUVar10 + 0x1ec) = *(undefined4 *)(psStack_10c + 0xf6);
  *(undefined4 *)(pUVar10 + 0x1f0) = *(undefined4 *)(psStack_10c + 0xf8);
  *(undefined4 *)(pUVar10 + 500) = *(undefined4 *)(psStack_10c + 0xfa);
  *(undefined4 *)(pUVar10 + 0x1f8) = *(undefined4 *)(psStack_10c + 0xfc);
  *(undefined4 *)(pUVar10 + 0x1fc) = *(undefined4 *)(psStack_10c + 0xfe);
  *(undefined4 *)(pUVar10 + 0x200) = *(undefined4 *)(psStack_10c + 0x100);
  *(undefined4 *)(pUVar10 + 0x2d4) = *(undefined4 *)(psStack_10c + 0x16a);
  if (DAT_10b1f538 != (UNetworkHandler *)0x0) {
    uVar5 = *(uint *)(psStack_10c + 0xc);
    psVar20 = psStack_10c + 0xc;
    iVar13 = *(int *)(*(int *)(DAT_10b1f538 + 0x1a0) +
                     (*(int *)(DAT_10b1f538 + 0x1a4) - 1U & uVar5) * 4);
    if (iVar13 != -1) {
      iVar16 = *(int *)(DAT_10b1f538 + 0x194);
      do {
        if (*(uint *)(iVar16 + 4 + iVar13 * 0xc) == uVar5) {
          if (*(int *)(iVar16 + 8 + iVar13 * 0xc) != 0) {
            iVar13 = *(int *)(*(int *)(DAT_10b1f538 + 0x1a0) +
                             (*(int *)(DAT_10b1f538 + 0x1a4) - 1U & uVar5) * 4);
            goto joined_r0x10435221;
          }
          break;
        }
        iVar13 = *(int *)(iVar16 + iVar13 * 0xc);
      } while (iVar13 != -1);
    }
  }
  goto LAB_1043526b;
joined_r0x10435221:
  if (iVar13 == -1) goto LAB_1043523b;
  if (*(uint *)(iVar16 + 4 + iVar13 * 0xc) == uVar5) {
    piVar12 = *(int **)(iVar16 + 8 + iVar13 * 0xc);
    goto LAB_1043523d;
  }
  iVar13 = *(int *)(iVar16 + iVar13 * 0xc);
  goto joined_r0x10435221;
joined_r0x104357a5:
  if (iVar13 == -1) goto LAB_104357c4;
  if (*(uint *)(iVar16 + 4 + iVar13 * 0xc) == *unaff_EBP) {
    piVar12 = *(int **)(iVar16 + 8 + iVar13 * 0xc);
    goto LAB_104357c6;
  }
  iVar13 = *(int *)(iVar16 + iVar13 * 0xc);
  goto joined_r0x104357a5;
LAB_104357c4:
  piVar12 = (int *)0x0;
LAB_104357c6:
  if ((*piVar12 != 1) || (iVar13 = thunk_FUN_104226e0(unaff_EBP), *(int *)(iVar13 + 4) == 0))
  goto LAB_10435764;
  iVar13 = thunk_FUN_104226e0(unaff_EBP);
  uVar11 = *(undefined4 *)(iVar13 + 4);
  goto LAB_10435766;
LAB_1043523b:
  piVar12 = (int *)0x0;
LAB_1043523d:
  if (*piVar12 == 1) {
    uVar11 = thunk_FUN_104226e0(psVar20);
    (**(code **)(**(int **)GMalloc_exref + 8))(uVar11);
    thunk_FUN_1042c470(psVar20);
  }
LAB_1043526b:
  (**(code **)(**(int **)GMalloc_exref + 8))(psStack_10c);
  uVar5 = *unaff_EBP;
  *(undefined4 *)(pUVar10 + 8) = 0;
  *(undefined4 *)(pUVar10 + 0x94) = 1;
  if ((0 < (int)uVar5) && (DAT_10b1f538 != (UNetworkHandler *)0x0)) {
    iVar13 = thunk_FUN_104226e0(unaff_EBP);
    if (iVar13 != 0) {
      (**(code **)(**(int **)GMalloc_exref + 8))(iVar13);
      thunk_FUN_1042c470(unaff_EBP);
    }
    puVar15 = (undefined4 *)(**(code **)**(undefined4 **)GMalloc_exref)(8,&DAT_10853a28);
    if (puVar15 == (undefined4 *)0x0) {
      puVar15 = (undefined4 *)0x0;
    }
    else {
      *puVar15 = 0;
      puVar15[1] = 0;
    }
    uStack_10 = 0xffffffff;
    if (puVar15 != (undefined4 *)0x0) {
      puVar15[1] = pUVar10;
      *puVar15 = 1;
    }
    thunk_FUN_1042c3f0(unaff_EBP,&stack0xfffffed4);
  }
  if (*(int *)(pUVar10 + 0x204) != 0) {
    *(float *)(*(int *)(pUVar10 + 0x204) + 0x6ec) = (float)*(int *)(pUVar10 + 0x19c);
    *(float *)(*(int *)(pUVar10 + 0x204) + 0x6f0) = (float)*(int *)(pUVar10 + 0x1a0);
    *(float *)(*(int *)(pUVar10 + 0x204) + 0x6f4) = (float)*(int *)(pUVar10 + 0x1a4);
    *(float *)(*(int *)(pUVar10 + 0x204) + 0x6f8) = (float)*(int *)(pUVar10 + 0x1a8);
    *(float *)(*(int *)(pUVar10 + 0x204) + 0x6fc) = (float)*(int *)(pUVar10 + 0x1ac);
    *(float *)(*(int *)(pUVar10 + 0x204) + 0x700) = (float)*(int *)(pUVar10 + 0x1b0);
    if ((char)((uint)pUVar1 >> 0x18) == '\0') {
      AActor::SetCollisionSize
                (*(AActor **)(pUVar10 + 0x204),*(float *)(pUVar10 + 0x1cc),
                 *(float *)(pUVar10 + 0x1d0));
    }
    iVar13 = *(int *)(*(int *)(pUVar10 + 0x204) + 0x6a0);
    iVar16 = User::GetItemClassID(pUVar10,10);
    *(int *)(*(int *)(pUVar10 + 0x204) + 0x6a0) = iVar16;
    if (*(int *)(*(int *)(pUVar10 + 0x204) + 0x6a0) == 0) {
      iVar16 = User::GetItemClassID(pUVar10,0xb);
      *(int *)(*(int *)(pUVar10 + 0x204) + 0x6a0) = iVar16;
    }
    if (*(int *)(*(int *)(pUVar10 + 0x204) + 0x6a0) == 0) {
      iVar16 = User::GetItemClassID(pUVar10,0xc);
      *(int *)(*(int *)(pUVar10 + 0x204) + 0x6a0) = iVar16;
    }
    if (iVar13 != *(int *)(*(int *)(pUVar10 + 0x204) + 0x6a0)) {
      *(int *)(*(int *)(pUVar10 + 0x204) + 0x182c) = iVar13;
      iVar13 = *(int *)(pUVar10 + 0x204);
      if (((-1 < *(int *)(iVar13 + 0x6a0)) &&
          (iVar16 = thunk_FUN_10422ee0(iVar13 + 0x6a0), iVar16 != 0)) && (*(int *)(iVar16 + 4) == 0)
         ) {
        if (*(int *)(iVar16 + 0x168) < 0) {
          *(uint *)(iVar13 + 0x1820) = *(uint *)(iVar13 + 0x1820) & 0xfffffffd;
        }
        else {
          *(uint *)(iVar13 + 0x1820) = *(uint *)(iVar13 + 0x1820) | 2;
        }
      }
    }
    iVar13 = User::GetItemClassID(pUVar10,2);
    *(int *)(*(int *)(pUVar10 + 0x204) + 0x6a4) = iVar13;
    iVar13 = User::GetItemClassID(pUVar10,0xd);
    *(int *)(*(int *)(pUVar10 + 0x204) + 0x6a8) = iVar13;
    fVar4 = (float)_DAT_1088ae20;
    *(float *)(*(int *)(pUVar10 + 0x204) + 0x6b8) = (float)*(int *)(pUVar10 + 0x23c) / fVar4;
    *(float *)(*(int *)(pUVar10 + 0x204) + 0x6bc) = (float)*(int *)(pUVar10 + 0x2ac) / fVar4;
    *(float *)(*(int *)(pUVar10 + 0x204) + 0x6b0) = (float)*(double *)(pUVar10 + 0x1bc);
    *(float *)(*(int *)(pUVar10 + 0x204) + 0x6b4) = (float)*(double *)(pUVar10 + 0x1c4);
    *(undefined1 *)(*(int *)(*(int *)(pUVar10 + 0x204) + 0x14d8) + 0x434) = (undefined1)uStack_e8;
    iVar13 = *(int *)(pUVar10 + 0x204);
    if (*(char *)(*(int *)(iVar13 + 0x14d8) + 0x434) == '\x01') {
      *(float *)(iVar13 + 0x1550) = *(float *)(iVar13 + 0x6ec) * *(float *)(iVar13 + 0x6b4);
      iVar13 = *(int *)(pUVar10 + 0x204);
      *(float *)(iVar13 + 0x1554) = *(float *)(iVar13 + 0x6f4) * *(float *)(iVar13 + 0x6b4);
      iVar13 = *(int *)(pUVar10 + 0x204);
      fVar4 = *(float *)(iVar13 + 0x6fc);
    }
    else {
      *(float *)(iVar13 + 0x1550) = *(float *)(iVar13 + 0x6f0) * *(float *)(iVar13 + 0x6b4);
      iVar13 = *(int *)(pUVar10 + 0x204);
      *(float *)(iVar13 + 0x1554) = *(float *)(iVar13 + 0x6f8) * *(float *)(iVar13 + 0x6b4);
      iVar13 = *(int *)(pUVar10 + 0x204);
      fVar4 = *(float *)(iVar13 + 0x700);
    }
    *(float *)(iVar13 + 0x1558) = fVar4 * *(float *)(iVar13 + 0x6b4);
    sVar9 = *(short *)(pUVar10 + 0x2b0);
    if (((sVar9 == 1) || (sVar9 == 3)) || ((sVar9 == 5 || ((sVar9 == 7 || (sVar9 == 8)))))) {
      APawn::NActionStop(*(APawn **)(pUVar10 + 0x204));
      if (*(short *)(pUVar10 + 0x2b0) == 7) {
        *(undefined4 *)(*(int *)(pUVar10 + 0x204) + 0x62c) = 10;
      }
      else {
        *(undefined4 *)(*(int *)(pUVar10 + 0x204) + 0x62c) = 9;
      }
      *(int *)(*(int *)(pUVar10 + 0x204) + 0x63c) = *(int *)(pUVar10 + 0x204);
    }
    if ((*(short *)(pUVar10 + 0x2b0) == 0) && (*(int *)(*(APawn **)(pUVar10 + 0x204) + 0x62c) == 9))
    {
      APawn::NActionStop(*(APawn **)(pUVar10 + 0x204));
    }
    pAVar18 = *(APawn **)(pUVar10 + 0x204);
    if ((*(int *)(pAVar18 + 0x718) != 0) &&
       ((*(byte *)(*(int *)(pAVar18 + 0x718) + 0x714) & 1) != 0)) {
      APawn::CheckCubicStatus(pAVar18,0,(short *)0x0);
      pAVar18 = *(APawn **)(*(int *)(pUVar10 + 0x204) + 0x718);
    }
    APawn::CheckCubicStatus(pAVar18,(short)puVar19,psStack_10c);
    *(undefined4 *)(*(int *)(pUVar10 + 0x204) + 0x17d0) = uStack_ec;
    *(int *)(*(int *)(pUVar10 + 0x204) + 0x778) = (int)fStack_f0._0_1_;
    iVar13 = User::HasBootsSound(pUVar10,iStack_58);
    *(int *)(*(int *)(pUVar10 + 0x204) + 0x1828) = iVar13;
    *(undefined4 *)(*(int *)(pUVar10 + 0x204) + 0x1830) = *(undefined4 *)(pUVar10 + 0x2e8);
    puVar19 = (uint *)(*(int *)(pUVar10 + 0x204) + 0x1820);
    *puVar19 = *puVar19 ^
               (*(uint *)(*(int *)(pUVar10 + 0x204) + 0x1820) ^ *(uint *)(pUVar10 + 0x2fc)) & 1;
  }
  pUVar7 = DAT_10b1f538;
  if (DAT_10b1f538 != (UNetworkHandler *)0x0) {
    iVar13 = *(int *)(*(int *)(DAT_10b1f538 + 0x1a0) +
                     (*(int *)(DAT_10b1f538 + 0x1a4) - 1U & *unaff_EBP) * 4);
    if (iVar13 != -1) {
      iVar16 = *(int *)(DAT_10b1f538 + 0x194);
      do {
        if (*(uint *)(iVar16 + 4 + iVar13 * 0xc) == *unaff_EBP) {
          if (*(int *)(iVar16 + 8 + iVar13 * 0xc) != 0) {
            iVar13 = *(int *)(*(int *)(DAT_10b1f538 + 0x1a0) +
                             (*(int *)(DAT_10b1f538 + 0x1a4) - 1U & *unaff_EBP) * 4);
            goto joined_r0x104357a5;
          }
          break;
        }
        iVar13 = *(int *)(iVar16 + iVar13 * 0xc);
      } while (iVar13 != -1);
    }
  }
LAB_10435764:
  uVar11 = 0;
LAB_10435766:
  (**(code **)(**(int **)(pUVar7 + 0x54) + 0x170))(uVar11,0,0);
LAB_10435c34:
  iVar13 = *(int *)(pUVar10 + 0x204);
  if (iVar13 != 0) {
    *(uint *)(iVar13 + 0x1820) =
         *(uint *)(iVar13 + 0x1820) ^
         (*(int *)(pUVar10 + 0x300) * 4 ^ *(uint *)(iVar13 + 0x1820)) & 4;
    *(undefined4 *)(*(int *)(pUVar10 + 0x204) + 0x1824) = *(undefined4 *)(pUVar10 + 0x304);
  }
  User::SetEventmatchEffect(pUVar10,*(int *)(pUVar10 + 0x2ec));
  if (0 < *(int *)(pUVar10 + 0x284)) {
    thunk_FUN_104317d0(*(int *)(pUVar10 + 0x284),*(undefined4 *)(pUVar10 + 0x288),
                       *(undefined4 *)(pUVar10 + 0x28c),*(undefined4 *)(pUVar10 + 0x290),
                       *(undefined4 *)(pUVar10 + 0x2a0),0x80000000);
  }
  *(uint *)(pUVar10 + 0x298) = *(uint *)(pUVar10 + 0x294) >> 6 & 1;
  (**(code **)(**(int **)(DAT_10b1f538 + 0x54) + 0x4ec))();
  if (0 < (short)unaff_EBP) {
    (**(code **)(**(int **)GMalloc_exref + 8))(psStack_118);
  }
  if (pUStack_d4 != (User *)0x0) {
    (**(code **)(**(int **)(DAT_10b1f538 + 0x54) + 0x720))
              (*(undefined4 *)(pUVar10 + 0x204),0,iStack_c0,iStack_bc,iStack_b8,0,0);
  }
  User::SetAttackItemVariationOption(pUVar10);
  UNetworkHandler::NotifyQuestMark(DAT_10b1f538);
  (**(code **)(*(int *)GL2Console + 0x6f0))(pUVar10);
  FOutputDevice::Logf((FOutputDevice *)GNetworkLog_exref,*(ushort **)GNetworkLog_exref);
  ExceptionList = pvStack_24;
  return extraout_EAX & 0xffffff00;
}


// ==== 104366f0 FUN_104366f0 depth=0 from=raiz callees=CORE.DLL::FVector::RotateAngleAxis@EXTERNAL:00000143 CORE.DLL::L2ParamStack::~L2ParamStack@EXTERNAL:0000012a User::SetEventmatchEffect@103022f7 thunk_FUN_1042c470@10304a34 CORE.DLL::FOutputDevice::Logf@EXTERNAL:000000b4 User::SetAttackItemVariationOption@1030aa47 thunk_FUN_104026b0@103034e5 User::GetItemClassID@10305394 APawn::CheckCubicStatus@1030a871 User::User@10313449 thunk_FUN_104317d0@10303df5 thunk_FUN_1042c3f0@1030a60f APawn::NActionStop@1030bef6 thunk_FUN_104226e0@1030d04e CORE.DLL::L2ParamStack::PushBack@EXTERNAL:00000136 WS2_32.DLL::closesocket@EXTERNAL:0000000d KERNEL32.DLL::DeleteCriticalSection@EXTERNAL:000003e8 _memset@107a6860 User::HasBootsSound@10303742 CORE.DLL::L2ParamStack::L2ParamStack@EXTERNAL:0000012b AActor::SetCollisionSize@1030c3ab
// strings: 1088b0e4=CharInfo | 10852190=dddddSdddddddddddddddhhhhhhhhhhhhhhhhhhhhhhhhddddddddddddddffffdddSdddddccccccch | 1088afd8=[Error] Can not find the Vehicle data [CharacterInfoPacket] | 1088af30=(Receive)CharInfo ID:%d Name:%s Race:%d Sex:%d X:%d Y:%d Z:%d | 

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_104366f0(void)

{
  User *pUVar1;
  User *pUVar2;
  uint *puVar3;
  float fVar4;
  int iVar5;
  float fVar6;
  uint uVar7;
  short sVar8;
  User *pUVar9;
  undefined4 uVar10;
  short *psVar11;
  int iVar12;
  int *piVar13;
  undefined4 *puVar14;
  float *pfVar15;
  APawn *pAVar16;
  int *piVar17;
  uint3 unaff_EBX;
  short sVar18;
  int iVar19;
  undefined4 unaff_retaddr;
  char cVar21;
  uint *puVar20;
  short *psStack_10c;
  short *psStack_108;
  char cStack_101;
  uint uStack_100;
  uint uStack_fc;
  uint uStack_f8;
  int iStack_f4;
  undefined4 uStack_f0;
  float fStack_ec;
  float fStack_e8;
  float fStack_e4;
  float fStack_e0;
  undefined4 uStack_dc;
  int iStack_d8;
  int iStack_d4;
  void *pvStack_d0;
  int iStack_cc;
  undefined4 uStack_c8;
  void *pvStack_c4;
  int local_c0;
  void *pvStack_bc;
  int iStack_b8;
  void *pvStack_b4;
  void *pvStack_b0;
  int iStack_ac;
  int iStack_a8;
  int iStack_a4;
  undefined4 uStack_a0;
  float fStack_9c;
  undefined1 auStack_98 [4];
  int aiStack_94 [2];
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  int iStack_80;
  int iStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  double dStack_68;
  double dStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined1 auStack_48 [4];
  short asStack_44 [26];
  void *pvStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  int iStack_4;
  
  iStack_4 = -1;
  puStack_8 = &LAB_1081091f;
  pvStack_c = ExceptionList;
  local_c0 = 0;
  ExceptionList = &pvStack_c;
  pUVar9 = (User *)(**(code **)**(undefined4 **)GMalloc_exref)(0x314,L"CharInfo");
  if (pUVar9 == (User *)0x0) {
    pUVar9 = (User *)0x0;
  }
  else {
    pUVar9 = (User *)User::User(pUVar9);
  }
  _memset(pUVar9,0,0x314);
  iVar12 = iStack_4;
  puVar20 = (uint *)(uint)unaff_EBX;
  iStack_cc = 0;
  pvStack_c4 = (void *)0x0;
  pvStack_d0 = (void *)0x0;
  pvStack_b4 = (void *)0x0;
  pvStack_bc = (void *)0x0;
  psStack_10c = (short *)0x0;
  psStack_108 = (short *)0x0;
  pUVar1 = pUVar9 + 0x18;
  uVar10 = thunk_FUN_104026b0(*(undefined4 *)(iStack_4 + 0x48),unaff_retaddr,
                              "dddddSdddddddddddddddhhhhhhhhhhhhhhhhhhhhhhhhddddddddddddddffffdddSdddddccccccch"
                              ,&iStack_d8,&iStack_d4,&local_c0,&uStack_100,pUVar1,0x30,asStack_44,
                              pUVar9 + 0x4c,pUVar9 + 0x50,pUVar9 + 0x54,pUVar9 + 0x98,pUVar9 + 0xb0,
                              pUVar9 + 0xb4,pUVar9 + 0xb8,pUVar9 + 0xbc,pUVar9 + 0xc0,pUVar9 + 0xc4,
                              pUVar9 + 200,pUVar9 + 0xcc,pUVar9 + 0xd0,pUVar9 + 0xdc,pUVar9 + 0xe0,
                              pUVar9 + 0xe8,pUVar9 + 0xec,pUVar9 + 0x118,pUVar9 + 0x11c,
                              pUVar9 + 0x120,pUVar9 + 0x124,pUVar9 + 0x128,pUVar9 + 300,
                              pUVar9 + 0x130,pUVar9 + 0x134,pUVar9 + 0x138,pUVar9 + 0x13c,
                              pUVar9 + 0x140,pUVar9 + 0x144,pUVar9 + 0x148,pUVar9 + 0x14c,
                              pUVar9 + 0x150,pUVar9 + 0x154,pUVar9 + 0x158,pUVar9 + 0x15c,
                              pUVar9 + 0x170,pUVar9 + 0x174,pUVar9 + 0x178,pUVar9 + 0x17c,
                              pUVar9 + 0x194,pUVar9 + 0x198,pUVar9 + 0x23c,pUVar9 + 0x2ac,auStack_98
                              ,auStack_48,pUVar9 + 0x19c,pUVar9 + 0x1a0,pUVar9 + 0x1a4,
                              pUVar9 + 0x1a8,pUVar9 + 0x1b4,pUVar9 + 0x1b8,pUVar9 + 0x1ac,
                              pUVar9 + 0x1b0,&uStack_58,&uStack_50,&dStack_68,&dStack_60,
                              pUVar9 + 0x240,pUVar9 + 0x244,pUVar9 + 0x248,0x30,pUVar9 + 0x254,
                              pUVar9 + 0x284,pUVar9 + 0x288,pUVar9 + 0x28c,pUVar9 + 0x290,auStack_98
                              ,&pvStack_bc,&pvStack_b4,&pvStack_d0,&pvStack_c4,&iStack_cc,
                              &stack0xfffffeef,pUVar9 + 0x2b0,&psStack_10c);
  sVar8 = (short)psStack_10c;
  if (0 < sVar8) {
    psStack_108 = (short *)(**(code **)**(undefined4 **)GMalloc_exref)
                                     ((uint)((ulonglong)(uint)(int)sVar8 * 2) |
                                      -(uint)((int)((ulonglong)(uint)(int)sVar8 * 2 >> 0x20) != 0),
                                      &DAT_10853a28);
    sVar8 = (short)psStack_10c;
  }
  sVar18 = 0;
  if (0 < sVar8) {
    do {
      uVar10 = thunk_FUN_104026b0(*(undefined4 *)(iVar12 + 0x48),uVar10,&DAT_1088494c,
                                  psStack_108 + sVar18);
      sVar18 = sVar18 + 1;
    } while (sVar18 < (short)psStack_10c);
  }
  uVar10 = thunk_FUN_104026b0(*(undefined4 *)(iVar12 + 0x48),uVar10,&DAT_1087f9dc,pUVar9 + 700);
  uStack_dc = 0;
  pvStack_b0 = (void *)0x0;
  aiStack_94[1] = 0;
  if (0x1a4 < DAT_10a56e8c) {
    uVar10 = thunk_FUN_104026b0(*(undefined4 *)(iVar12 + 0x48),uVar10,&DAT_1088b074,&uStack_dc,
                                &stack0xfffffeee,pUVar9 + 0x2e2,&pvStack_b0);
  }
  uVar10 = thunk_FUN_104026b0(*(undefined4 *)(iVar12 + 0x48),uVar10,&DAT_10887ec4,pUVar9 + 0x2c0,
                              aiStack_94 + 1,&cStack_101);
  uVar10 = thunk_FUN_104026b0(*(undefined4 *)(iVar12 + 0x48),uVar10,&DAT_1087f9dc,pUVar9 + 0x2ec);
  uVar10 = thunk_FUN_104026b0(*(undefined4 *)(iVar12 + 0x48),uVar10,&DAT_1088ae2c,pUVar9 + 0x2a0,
                              pUVar9 + 0x2f8,pUVar9 + 0x2fc);
  iStack_b8 = 0;
  uVar10 = thunk_FUN_104026b0(*(undefined4 *)(iVar12 + 0x48),uVar10,&DAT_1087fa3c,&iStack_b8,
                              aiStack_94,&iStack_7c,&iStack_80);
  fStack_ec = (float)aiStack_94[0];
  pUVar2 = pUVar9 + 0x308;
  fStack_9c = (float)iStack_7c;
  fVar6 = (float)iStack_80;
  fStack_8c = fStack_ec;
  fStack_88 = fStack_9c;
  fStack_84 = fVar6;
  uVar10 = thunk_FUN_104026b0(*(undefined4 *)(iVar12 + 0x48),uVar10,&DAT_1087ff8c,pUVar2);
  *(uint *)pUVar2 =
       (((byte)*pUVar2 | 0xffffff00) << 8 | (uint)(byte)pUVar9[0x309]) << 8 |
       (uint)(byte)pUVar9[0x30a];
  uVar10 = thunk_FUN_104026b0(*(undefined4 *)(iVar12 + 0x48),uVar10,&DAT_1087ff8c,&uStack_c8);
  uVar10 = thunk_FUN_104026b0(*(undefined4 *)(iVar12 + 0x48),uVar10,&DAT_1087ff44,pUVar9 + 0x30c,
                              pUVar9 + 0x310);
  pUVar2 = pUVar9 + 400;
  uVar10 = thunk_FUN_104026b0(*(undefined4 *)(iVar12 + 0x48),uVar10,&DAT_1087ff8c,pUVar2);
  *(uint *)pUVar2 =
       (((byte)*pUVar2 | 0xffffff00) << 8 | (uint)(byte)pUVar9[0x191]) << 8 |
       (uint)(byte)pUVar9[0x192];
  uVar10 = thunk_FUN_104026b0(*(undefined4 *)(iVar12 + 0x48),uVar10,&DAT_1087ff8c,pUVar9 + 0x304);
  thunk_FUN_104026b0(*(undefined4 *)(iVar12 + 0x48),uVar10,&DAT_1087ff8c,&uStack_78);
  iVar19 = *(int *)(pUVar9 + 0x304);
  if ((iVar19 < 1) || (0x13 < iVar19)) {
    uVar10 = 0;
  }
  else {
    uVar10 = 1;
  }
  *(undefined4 *)(pUVar9 + 0x300) = uVar10;
  if (*(int *)(pUVar9 + 0x23c) * 0x569 + -0xc0f52 == *(int *)(pUVar9 + 0x2ac)) {
    iVar12 = *(int *)(iVar12 + 0x48);
    if (*(SOCKET *)(iVar12 + 0x38) != 0) {
      closesocket(*(SOCKET *)(iVar12 + 0x38));
      DeleteCriticalSection((LPCRITICAL_SECTION)(iVar12 + 0x4efc));
    }
    *(undefined4 *)(iVar12 + 0x38) = 0;
    if (*(int *)(iVar12 + 0x495c) != 0) {
      *(undefined4 *)(iVar12 + 0x495c) = 0;
      DAT_10b1f53c = 0;
    }
    (**(code **)(**(int **)(DAT_10b1f538 + 0x54) + 0x314))(2);
    ExceptionList = pvStack_10;
    return 1;
  }
  *(undefined8 *)(pUVar9 + 0x1bc) = uStack_50;
  *(undefined8 *)(pUVar9 + 0x1c4) = uStack_58;
  *(float *)(pUVar9 + 0x1cc) = (float)dStack_68;
  *(float *)(pUVar9 + 0x1d0) = (float)dStack_60;
  *(int *)(pUVar9 + 0x2e8) = (int)cStack_101;
  if (asStack_44[0] != 0) {
    psVar11 = asStack_44;
    iVar12 = 0x1c - (int)psVar11;
    do {
      sVar8 = *psVar11;
      *(short *)(pUVar9 + iVar12 + (int)psVar11) = sVar8;
      psVar11 = psVar11 + 1;
    } while (sVar8 != 0);
  }
  if ((((DAT_10b1f538 != 0) && (iVar12 = thunk_FUN_104226e0(pUVar1), iVar12 != 0)) &&
      (piVar13 = (int *)thunk_FUN_104226e0(pUVar1), *piVar13 == 1)) &&
     ((iVar12 = thunk_FUN_104226e0(pUVar1), *(int *)(iVar12 + 4) != 0 &&
      (iVar12 = thunk_FUN_104226e0(pUVar1), *(int *)(iVar12 + 4) != 0)))) {
    iVar12 = thunk_FUN_104226e0(pUVar1);
    if ((iVar12 == 0) ||
       ((piVar13 = (int *)thunk_FUN_104226e0(pUVar1), *piVar13 != 1 ||
        (iVar12 = thunk_FUN_104226e0(pUVar1), *(int *)(iVar12 + 4) == 0)))) {
      fStack_ec = 0.0;
    }
    else {
      iVar12 = thunk_FUN_104226e0(pUVar1);
      fStack_ec = *(float *)(iVar12 + 4);
    }
    *(undefined4 *)(pUVar9 + 0x204) = *(undefined4 *)((int)fStack_ec + 0x204);
    *(undefined4 *)(pUVar9 + 0x294) = *(undefined4 *)((int)fStack_ec + 0x294);
    uStack_fc = DAT_10b1f538 + 0x194;
    iVar12 = 0;
    iStack_f4 = 0;
    uStack_f0 = 0;
    if (0 < *(int *)(DAT_10b1f538 + 0x198)) {
      do {
        iVar12 = iVar12 + 1;
        iStack_f4 = iVar12;
      } while (iVar12 < *(int *)(DAT_10b1f538 + 0x198));
    }
    pvStack_c = (void *)0xffffffff;
    uStack_f8 = uStack_fc;
    if (DAT_10b1f538 != 0) {
      iVar19 = (int)fStack_ec + 0x18;
      iVar12 = *(int *)(*(int *)(DAT_10b1f538 + 0x1a0) +
                       (*(int *)(DAT_10b1f538 + 0x1a4) - 1U & *(uint *)((int)fStack_ec + 0x18)) * 4)
      ;
      if (iVar12 != -1) {
        iVar5 = *(int *)(DAT_10b1f538 + 0x194);
        do {
          if (*(uint *)(iVar5 + 4 + iVar12 * 0xc) == *(uint *)((int)fStack_ec + 0x18)) {
            if ((*(int *)(iVar5 + 8 + iVar12 * 0xc) != 0) &&
               (piVar13 = (int *)thunk_FUN_104226e0(iVar19), *piVar13 == 1)) {
              uVar10 = thunk_FUN_104226e0(iVar19);
              (**(code **)(**(int **)GMalloc_exref + 8))(uVar10);
              thunk_FUN_1042c470(iVar19);
            }
            break;
          }
          iVar12 = *(int *)(iVar5 + iVar12 * 0xc);
        } while (iVar12 != -1);
      }
    }
    (**(code **)(**(int **)GMalloc_exref + 8))(fStack_ec);
    *(undefined4 *)(pUVar9 + 8) = 0;
    *(undefined4 *)(pUVar9 + 0x94) = 0;
    uStack_100 = DAT_10b1f538 + 0x194;
    iVar12 = 0;
    uStack_f8 = 0;
    iStack_f4 = 0;
    if (0 < *(int *)(DAT_10b1f538 + 0x198)) {
      do {
        iVar12 = iVar12 + 1;
        uStack_f8 = iVar12;
      } while (iVar12 < *(int *)(DAT_10b1f538 + 0x198));
    }
    pvStack_10 = (void *)0xffffffff;
    if ((0 < (int)*puVar20) && (DAT_10b1f538 != 0)) {
      iVar12 = *(int *)(*(int *)(DAT_10b1f538 + 0x1a0) +
                       (*(int *)(DAT_10b1f538 + 0x1a4) - 1U & *puVar20) * 4);
      uStack_fc = uStack_100;
      if (iVar12 != -1) {
        iVar19 = *(int *)(DAT_10b1f538 + 0x194);
        do {
          if (*(uint *)(iVar19 + 4 + iVar12 * 0xc) == *puVar20) {
            iVar12 = *(int *)(iVar19 + 8 + iVar12 * 0xc);
            if (iVar12 != 0) {
              (**(code **)(**(int **)GMalloc_exref + 8))(iVar12);
              thunk_FUN_1042c470(puVar20);
            }
            break;
          }
          iVar12 = *(int *)(iVar19 + iVar12 * 0xc);
        } while (iVar12 != -1);
      }
      puVar14 = (undefined4 *)(**(code **)**(undefined4 **)GMalloc_exref)(8,&DAT_10853a28);
      if (puVar14 == (undefined4 *)0x0) {
        puVar14 = (undefined4 *)0x0;
      }
      else {
        *puVar14 = 0;
        puVar14[1] = 0;
      }
      pvStack_10 = (void *)0xffffffff;
      if (puVar14 != (undefined4 *)0x0) {
        puVar14[1] = pUVar9;
        *puVar14 = 1;
      }
      thunk_FUN_1042c3f0(puVar20,&stack0xfffffee4);
    }
    uStack_100 = DAT_10b1f538 + 0x194;
    iVar12 = 0;
    uStack_f8 = 0;
    iStack_f4 = 0;
    if (0 < *(int *)(DAT_10b1f538 + 0x198)) {
      do {
        iVar12 = iVar12 + 1;
        uStack_f8 = iVar12;
      } while (iVar12 < *(int *)(DAT_10b1f538 + 0x198));
    }
    pvStack_10 = (void *)0xffffffff;
    uStack_fc = uStack_100;
    if (*(int *)(pUVar9 + 0x204) != 0) {
      iVar12 = *(int *)(*(int *)(pUVar9 + 0x204) + 0x6a0);
      iVar19 = User::GetItemClassID(pUVar9,10);
      *(int *)(*(int *)(pUVar9 + 0x204) + 0x6a0) = iVar19;
      if (*(int *)(*(int *)(pUVar9 + 0x204) + 0x6a0) == 0) {
        iVar19 = User::GetItemClassID(pUVar9,0xb);
        *(int *)(*(int *)(pUVar9 + 0x204) + 0x6a0) = iVar19;
      }
      if (*(int *)(*(int *)(pUVar9 + 0x204) + 0x6a0) == 0) {
        iVar19 = User::GetItemClassID(pUVar9,0xc);
        *(int *)(*(int *)(pUVar9 + 0x204) + 0x6a0) = iVar19;
      }
      if (iVar12 != *(int *)(*(int *)(pUVar9 + 0x204) + 0x6a0)) {
        *(int *)(*(int *)(pUVar9 + 0x204) + 0x182c) = iVar12;
        iVar12 = *(int *)(pUVar9 + 0x204);
        if (-1 < *(int *)(iVar12 + 0x6a0)) {
          iVar19 = *(int *)(DAT_10b3e0a4[3] + (DAT_10b3e0a4[4] - 1U & *(uint *)(iVar12 + 0x6a0)) * 4
                           );
          if (iVar19 != -1) {
            iVar5 = *DAT_10b3e0a4;
            do {
              if (*(uint *)(iVar5 + 4 + iVar19 * 0xc) == *(uint *)(iVar12 + 0x6a0)) {
                iVar19 = *(int *)(iVar5 + 8 + iVar19 * 0xc);
                if ((iVar19 != 0) && (*(int *)(iVar19 + 4) == 0)) {
                  if (*(int *)(iVar19 + 0x168) < 0) {
                    *(uint *)(iVar12 + 0x1820) = *(uint *)(iVar12 + 0x1820) & 0xfffffffd;
                  }
                  else {
                    *(uint *)(iVar12 + 0x1820) = *(uint *)(iVar12 + 0x1820) | 2;
                  }
                }
                break;
              }
              iVar19 = *(int *)(iVar5 + iVar19 * 0xc);
            } while (iVar19 != -1);
          }
        }
      }
      iVar12 = User::GetItemClassID(pUVar9,2);
      *(int *)(*(int *)(pUVar9 + 0x204) + 0x6a4) = iVar12;
      iVar12 = User::GetItemClassID(pUVar9,0xd);
      *(int *)(*(int *)(pUVar9 + 0x204) + 0x6a8) = iVar12;
      fVar4 = (float)_DAT_1088ae20;
      *(float *)(*(int *)(pUVar9 + 0x204) + 0x6b8) = (float)*(int *)(pUVar9 + 0x23c) / fVar4;
      *(float *)(*(int *)(pUVar9 + 0x204) + 0x6bc) = (float)*(int *)(pUVar9 + 0x2ac) / fVar4;
      *(float *)(*(int *)(pUVar9 + 0x204) + 0x6ec) = (float)*(int *)(pUVar9 + 0x19c);
      *(float *)(*(int *)(pUVar9 + 0x204) + 0x6f0) = (float)*(int *)(pUVar9 + 0x1a0);
      *(float *)(*(int *)(pUVar9 + 0x204) + 0x6f4) = (float)*(int *)(pUVar9 + 0x1a4);
      *(float *)(*(int *)(pUVar9 + 0x204) + 0x6f8) = (float)*(int *)(pUVar9 + 0x1a8);
      *(float *)(*(int *)(pUVar9 + 0x204) + 0x6fc) = (float)*(int *)(pUVar9 + 0x1ac);
      *(float *)(*(int *)(pUVar9 + 0x204) + 0x700) = (float)*(int *)(pUVar9 + 0x1b0);
      if ((char)((uint)fVar6 >> 0x18) == '\0') {
        AActor::SetCollisionSize
                  (*(AActor **)(pUVar9 + 0x204),*(float *)(pUVar9 + 0x1cc),
                   *(float *)(pUVar9 + 0x1d0));
      }
      *(float *)(*(int *)(pUVar9 + 0x204) + 0x6b0) = (float)*(double *)(pUVar9 + 0x1bc);
      *(float *)(*(int *)(pUVar9 + 0x204) + 0x6b4) = (float)*(double *)(pUVar9 + 0x1c4);
      iVar12 = *(int *)(pUVar9 + 0x204);
      if (*(char *)(*(int *)(iVar12 + 0x14d8) + 0x434) == '\x01') {
        *(float *)(iVar12 + 0x1550) = *(float *)(iVar12 + 0x6ec) * *(float *)(iVar12 + 0x6b4);
        iVar12 = *(int *)(pUVar9 + 0x204);
        *(float *)(iVar12 + 0x1554) = *(float *)(iVar12 + 0x6f4) * *(float *)(iVar12 + 0x6b4);
        iVar12 = *(int *)(pUVar9 + 0x204);
        fVar4 = *(float *)(iVar12 + 0x6fc);
      }
      else {
        *(float *)(iVar12 + 0x1550) = *(float *)(iVar12 + 0x6f0) * *(float *)(iVar12 + 0x6b4);
        iVar12 = *(int *)(pUVar9 + 0x204);
        *(float *)(iVar12 + 0x1554) = *(float *)(iVar12 + 0x6f8) * *(float *)(iVar12 + 0x6b4);
        iVar12 = *(int *)(pUVar9 + 0x204);
        fVar4 = *(float *)(iVar12 + 0x700);
      }
      *(float *)(iVar12 + 0x1558) = fVar4 * *(float *)(iVar12 + 0x6b4);
      sVar8 = *(short *)(pUVar9 + 0x2b0);
      if ((((sVar8 == 1) || (sVar8 == 3)) || (sVar8 == 5)) || ((sVar8 == 7 || (sVar8 == 8)))) {
        APawn::NActionStop(*(APawn **)(pUVar9 + 0x204));
        if (*(short *)(pUVar9 + 0x2b0) == 7) {
          *(undefined4 *)(*(int *)(pUVar9 + 0x204) + 0x62c) = 10;
        }
        else {
          *(undefined4 *)(*(int *)(pUVar9 + 0x204) + 0x62c) = 9;
        }
        *(int *)(*(int *)(pUVar9 + 0x204) + 0x63c) = *(int *)(pUVar9 + 0x204);
      }
      if ((*(short *)(pUVar9 + 0x2b0) == 0) && (*(int *)(*(APawn **)(pUVar9 + 0x204) + 0x62c) == 9))
      {
        APawn::NActionStop(*(APawn **)(pUVar9 + 0x204));
      }
      pAVar16 = *(APawn **)(pUVar9 + 0x204);
      if ((*(int *)(pAVar16 + 0x718) != 0) &&
         ((*(byte *)(*(int *)(pAVar16 + 0x718) + 0x714) & 1) != 0)) {
        APawn::CheckCubicStatus(pAVar16,0,(short *)0x0);
        pAVar16 = *(APawn **)(*(int *)(pUVar9 + 0x204) + 0x718);
      }
      APawn::CheckCubicStatus(pAVar16,(short)pUVar1,psStack_10c);
      *(float *)(*(int *)(pUVar9 + 0x204) + 0x17d0) = fStack_e0;
      *(int *)(*(int *)(pUVar9 + 0x204) + 0x778) = (int)(char)((uint)fVar6 >> 0x10);
      iVar12 = User::HasBootsSound(pUVar9,*(int *)(pUVar9 + 200));
      *(int *)(*(int *)(pUVar9 + 0x204) + 0x1828) = iVar12;
      *(undefined4 *)(*(int *)(pUVar9 + 0x204) + 0x1830) = *(undefined4 *)(pUVar9 + 0x2e8);
      puVar3 = (uint *)(*(int *)(pUVar9 + 0x204) + 0x1820);
      *puVar3 = *puVar3 ^ (*(uint *)(*(int *)(pUVar9 + 0x204) + 0x1820) ^ *(uint *)(pUVar9 + 0x2fc))
                          & 1;
    }
    if (DAT_10b1f538 != 0) {
      iVar12 = *(int *)(*(int *)(DAT_10b1f538 + 0x1a0) +
                       (*(int *)(DAT_10b1f538 + 0x1a4) - 1U & *puVar20) * 4);
      if (iVar12 != -1) {
        iVar19 = *(int *)(DAT_10b1f538 + 0x194);
        do {
          if (*(uint *)(iVar19 + 4 + iVar12 * 0xc) == *puVar20) {
            if (*(int *)(iVar19 + 8 + iVar12 * 0xc) != 0) {
              iVar12 = *(int *)(*(int *)(DAT_10b1f538 + 0x1a0) +
                               (*(int *)(DAT_10b1f538 + 0x1a4) - 1U & *puVar20) * 4);
              goto joined_r0x104374ca;
            }
            break;
          }
          iVar12 = *(int *)(iVar19 + iVar12 * 0xc);
        } while (iVar12 != -1);
      }
    }
    goto LAB_10437488;
  }
  if (iStack_cc != 0) goto LAB_10437b1c;
  *(undefined4 *)(pUVar9 + 8) = 0;
  *(undefined4 *)(pUVar9 + 0x94) = 0;
  iStack_ac = DAT_10b1f538 + 0x194;
  iVar12 = 0;
  iStack_a4 = 0;
  uStack_a0 = 0;
  if (0 < *(int *)(DAT_10b1f538 + 0x198)) {
    do {
      iVar12 = iVar12 + 1;
      iStack_a4 = iVar12;
    } while (iVar12 < *(int *)(DAT_10b1f538 + 0x198));
  }
  pvStack_c = (void *)0xffffffff;
  if ((0 < *(int *)pUVar1) && (DAT_10b1f538 != 0)) {
    iStack_a8 = iStack_ac;
    iVar12 = thunk_FUN_104226e0(pUVar1);
    if (iVar12 != 0) {
      (**(code **)(**(int **)GMalloc_exref + 8))(iVar12);
      thunk_FUN_1042c470(pUVar1);
    }
    puVar14 = (undefined4 *)(**(code **)**(undefined4 **)GMalloc_exref)(8,&DAT_10853a28);
    if (puVar14 == (undefined4 *)0x0) {
      puVar14 = (undefined4 *)0x0;
    }
    else {
      *puVar14 = 0;
      puVar14[1] = 0;
    }
    pvStack_c = (void *)0xffffffff;
    if (puVar14 != (undefined4 *)0x0) {
      puVar14[1] = pUVar9;
      *puVar14 = 1;
    }
    thunk_FUN_1042c3f0(pUVar1,&stack0xfffffee8);
  }
  uVar7 = uStack_100;
  iVar12 = DAT_10b1f538;
  iStack_ac = DAT_10b1f538 + 0x194;
  iVar19 = 0;
  iStack_a4 = 0;
  uStack_a0 = 0;
  if (0 < *(int *)(DAT_10b1f538 + 0x198)) {
    do {
      iVar19 = iVar19 + 1;
      iStack_a4 = iVar19;
    } while (iVar19 < *(int *)(DAT_10b1f538 + 0x198));
  }
  pvStack_c = (void *)0xffffffff;
  fStack_e8 = (float)iStack_d8;
  fStack_e4 = (float)iStack_d4;
  fStack_e0 = (float)local_c0;
  iStack_a8 = iStack_ac;
  if (0 < (int)uStack_100) {
    if (DAT_10b1f538 != 0) {
      piVar13 = (int *)(DAT_10b1f538 + 0x194);
      iVar19 = *(int *)(*(int *)(DAT_10b1f538 + 0x1a0) +
                       (*(int *)(DAT_10b1f538 + 0x1a4) - 1U & uStack_100) * 4);
      if (iVar19 != -1) {
        iVar5 = *piVar13;
        do {
          if (*(uint *)(iVar5 + 4 + iVar19 * 0xc) == uStack_100) {
            if (*(int *)(iVar5 + 8 + iVar19 * 0xc) != 0) {
              iVar19 = *(int *)(*(int *)(DAT_10b1f538 + 0x1a0) +
                               (*(int *)(DAT_10b1f538 + 0x1a4) - 1U & uStack_100) * 4);
              if (iVar19 == -1) goto LAB_104378cb;
              iVar5 = *piVar13;
              goto LAB_104378b4;
            }
            break;
          }
          iVar19 = *(int *)(iVar5 + iVar19 * 0xc);
        } while (iVar19 != -1);
      }
    }
    goto LAB_1043776b;
  }
  goto LAB_10437781;
joined_r0x104374ca:
  if (iVar12 == -1) goto LAB_104374e8;
  if (*(uint *)(iVar19 + 4 + iVar12 * 0xc) == *puVar20) {
    piVar13 = *(int **)(iVar19 + 8 + iVar12 * 0xc);
    goto LAB_104374ea;
  }
  iVar12 = *(int *)(iVar19 + iVar12 * 0xc);
  goto joined_r0x104374ca;
LAB_104374e8:
  piVar13 = (int *)0x0;
LAB_104374ea:
  if (*piVar13 == 1) {
    iVar12 = *(int *)(*(int *)(DAT_10b1f538 + 0x1a0) +
                     (*(int *)(DAT_10b1f538 + 0x1a4) - 1U & *puVar20) * 4);
    if (iVar12 != -1) {
      iVar19 = *(int *)(DAT_10b1f538 + 0x194);
      do {
        if (*(uint *)(iVar19 + 4 + iVar12 * 0xc) == *puVar20) {
          iVar12 = *(int *)(iVar19 + 8 + iVar12 * 0xc);
          goto LAB_1043752b;
        }
        iVar12 = *(int *)(iVar19 + iVar12 * 0xc);
      } while (iVar12 != -1);
    }
    iVar12 = 0;
LAB_1043752b:
    if (*(int *)(iVar12 + 4) == 0) goto LAB_10437488;
    iVar12 = *(int *)(*(int *)(DAT_10b1f538 + 0x1a0) +
                     (*(int *)(DAT_10b1f538 + 0x1a4) - 1U & *puVar20) * 4);
    uVar10 = uRam00000004;
    if (iVar12 != -1) {
      iVar19 = *(int *)(DAT_10b1f538 + 0x194);
      do {
        if (*(uint *)(iVar19 + 4 + iVar12 * 0xc) == *puVar20) {
          uVar10 = *(undefined4 *)(*(int *)(iVar19 + 8 + iVar12 * 0xc) + 4);
          break;
        }
        iVar12 = *(int *)(iVar19 + iVar12 * 0xc);
      } while (iVar12 != -1);
    }
  }
  else {
LAB_10437488:
    uVar10 = 0;
  }
  (**(code **)(**(int **)(DAT_10b1f538 + 0x54) + 0x170))(uVar10,0,0);
  goto LAB_10437b1c;
  while (iVar19 = *(int *)(iVar5 + iVar19 * 0xc), iVar19 != -1) {
LAB_104378b4:
    if (*(uint *)(iVar5 + 4 + iVar19 * 0xc) == uStack_100) {
      piVar17 = *(int **)(iVar5 + 8 + iVar19 * 0xc);
      goto LAB_104378cd;
    }
  }
LAB_104378cb:
  piVar17 = (int *)0x0;
LAB_104378cd:
  if (((*piVar17 == 3) && (iVar19 = thunk_FUN_104226e0(&uStack_100), *(int *)(iVar19 + 4) != 0)) &&
     (iVar19 = thunk_FUN_104226e0(&uStack_100), *(int *)(iVar19 + 4) != 0)) {
    iVar12 = *(int *)(*(int *)(iVar12 + 0x1a0) + (*(int *)(iVar12 + 0x1a4) - 1U & uVar7) * 4);
    if (iVar12 != -1) {
      iVar19 = *piVar13;
      do {
        if (*(uint *)(iVar19 + 4 + iVar12 * 0xc) == uVar7) {
          if (((*(int *)(iVar19 + 8 + iVar12 * 0xc) != 0) &&
              (piVar13 = (int *)thunk_FUN_104226e0(&uStack_100), *piVar13 == 3)) &&
             (iVar12 = thunk_FUN_104226e0(&uStack_100), *(int *)(iVar12 + 4) != 0)) {
            iVar12 = thunk_FUN_104226e0(&uStack_100);
            iVar12 = *(int *)(iVar12 + 4);
            goto LAB_10437939;
          }
          break;
        }
        iVar12 = *(int *)(iVar19 + iVar12 * 0xc);
      } while (iVar12 != -1);
    }
    iVar12 = 0;
LAB_10437939:
    uStack_74 = 0;
    uStack_70 = 0;
    uStack_6c = 0x3f800000;
    pfVar15 = (float *)FVector::RotateAngleAxis
                                 ((FVector *)&fStack_e8,(int)&iStack_ac,
                                  (FVector *)(*(uint *)(*(int *)(iVar12 + 4) + 0x1cc) & 0xffff));
    iVar12 = *(int *)(iVar12 + 4);
    fStack_ec = *pfVar15 + *(float *)(iVar12 + 0x1bc);
    fStack_e8 = *(float *)(iVar12 + 0x1c0) + pfVar15[1];
    fStack_e4 = *(float *)(iVar12 + 0x1c4) + pfVar15[2] + (float)_DAT_1088afc8;
  }
  else {
LAB_1043776b:
    FOutputDevice::Logf(*(FOutputDevice **)GNetworkLog_exref,
                        (ushort *)*(FOutputDevice **)GNetworkLog_exref);
  }
LAB_10437781:
  *(undefined4 *)(pUVar9 + 0x204) = 0;
  L2ParamStack::L2ParamStack((L2ParamStack *)&uStack_fc,10);
  pvStack_c = (void *)0x7;
  L2ParamStack::PushBack((L2ParamStack *)&uStack_fc,pvStack_bc);
  L2ParamStack::PushBack((L2ParamStack *)&uStack_fc,pvStack_b4);
  L2ParamStack::PushBack((L2ParamStack *)&uStack_fc,pvStack_d0);
  L2ParamStack::PushBack((L2ParamStack *)&uStack_fc,pvStack_c4);
  L2ParamStack::PushBack((L2ParamStack *)&uStack_fc,(void *)0x0);
  L2ParamStack::PushBack((L2ParamStack *)&uStack_fc,pvStack_b0);
  cVar21 = (char)(unaff_EBX >> 0x10);
  L2ParamStack::PushBack((L2ParamStack *)&uStack_fc,(void *)(int)cVar21);
  (**(code **)(**(int **)(DAT_10b1f538 + 0x54) + 0x120))
            (pUVar9,fStack_e8,fStack_e4,fStack_e0,uStack_c8,&uStack_fc);
  if ((*(APawn **)(pUVar9 + 0x204) != (APawn *)0x0) &&
     (((sVar8 = *(short *)(pUVar9 + 0x2b0), sVar8 == 1 || (sVar8 == 3)) ||
      ((sVar8 == 5 || ((sVar8 == 7 || (sVar8 == 8)))))))) {
    APawn::NActionStop(*(APawn **)(pUVar9 + 0x204));
    if (*(short *)(pUVar9 + 0x2b0) == 7) {
      *(undefined4 *)(*(int *)(pUVar9 + 0x204) + 0x62c) = 10;
    }
    else {
      *(undefined4 *)(*(int *)(pUVar9 + 0x204) + 0x62c) = 9;
    }
    *(int *)(*(int *)(pUVar9 + 0x204) + 0x63c) = *(int *)(pUVar9 + 0x204);
  }
  if ((*(short *)(pUVar9 + 0x2b0) == 0) && (*(int *)(*(APawn **)(pUVar9 + 0x204) + 0x62c) == 9)) {
    APawn::NActionStop(*(APawn **)(pUVar9 + 0x204));
  }
  pAVar16 = *(APawn **)(pUVar9 + 0x204);
  if ((*(int *)(pAVar16 + 0x718) != 0) && ((*(byte *)(*(int *)(pAVar16 + 0x718) + 0x714) & 1) != 0))
  {
    APawn::CheckCubicStatus(pAVar16,0,(short *)0x0);
    pAVar16 = *(APawn **)(*(int *)(pUVar9 + 0x204) + 0x718);
  }
  APawn::CheckCubicStatus(pAVar16,(short)psStack_10c,psStack_108);
  *(undefined4 *)(*(int *)(pUVar9 + 0x204) + 0x17d0) = uStack_dc;
  *(int *)(*(int *)(pUVar9 + 0x204) + 0x778) = (int)cVar21;
  iVar12 = User::HasBootsSound(pUVar9,*(int *)(pUVar9 + 200));
  *(int *)(*(int *)(pUVar9 + 0x204) + 0x1828) = iVar12;
  *(undefined4 *)(*(int *)(pUVar9 + 0x204) + 0x1830) = *(undefined4 *)(pUVar9 + 0x2e8);
  puVar20 = (uint *)(*(int *)(pUVar9 + 0x204) + 0x1820);
  *puVar20 = *puVar20 ^
             (*(uint *)(*(int *)(pUVar9 + 0x204) + 0x1820) ^ *(uint *)(pUVar9 + 0x2fc)) & 1;
  pvStack_c = (void *)0xffffffff;
  L2ParamStack::~L2ParamStack((L2ParamStack *)&uStack_fc);
LAB_10437b1c:
  iVar12 = *(int *)(pUVar9 + 0x204);
  if (iVar12 != 0) {
    *(uint *)(iVar12 + 0x1820) =
         *(uint *)(iVar12 + 0x1820) ^
         (*(int *)(pUVar9 + 0x300) * 4 ^ *(uint *)(iVar12 + 0x1820)) & 4;
    *(undefined4 *)(*(int *)(pUVar9 + 0x204) + 0x1824) = *(undefined4 *)(pUVar9 + 0x304);
  }
  User::SetEventmatchEffect(pUVar9,*(int *)(pUVar9 + 0x2ec));
  if (0 < *(int *)(pUVar9 + 0x284)) {
    thunk_FUN_104317d0(*(int *)(pUVar9 + 0x284),*(undefined4 *)(pUVar9 + 0x288),
                       *(undefined4 *)(pUVar9 + 0x28c),*(undefined4 *)(pUVar9 + 0x290),
                       *(undefined4 *)(pUVar9 + 0x2a0),uStack_78);
  }
  if (0 < (short)psStack_10c) {
    (**(code **)(**(int **)GMalloc_exref + 8))(psStack_108);
  }
  if (iStack_b8 != 0) {
    (**(code **)(**(int **)(DAT_10b1f538 + 0x54) + 0x720))
              (*(undefined4 *)(pUVar9 + 0x204),0,fStack_8c,fStack_88,fStack_84,0,0);
  }
  User::SetAttackItemVariationOption(pUVar9);
  FOutputDevice::Logf(*(FOutputDevice **)GNetworkLog_exref,
                      (ushort *)*(FOutputDevice **)GNetworkLog_exref);
  ExceptionList = pvStack_10;
  return 0;
}


// ==== 10438c20 FUN_10438c20 depth=0 from=raiz callees=CORE.DLL::FArray::Realloc@EXTERNAL:00000110 CORE.DLL::appMemset@EXTERNAL:000000c9 thunk_FUN_1042c300@10312b34 CORE.DLL::FOutputDevice::Logf@EXTERNAL:000000b4 thunk_FUN_104026b0@103034e5 thunk_FUN_10423040@103064d3 _memcpy@107a6260 UNetworkHandler::NotifyQuestMark@103095e8
// strings: 1088b190=OneTimeQuest | 1088b154=(Receive)QuestListPacket | 

uint FUN_10438c20(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  void *_Src;
  uint extraout_EAX;
  short unaff_BP;
  int iVar3;
  undefined4 local_10;
  undefined4 local_c;
  int local_8;
  undefined4 local_4;
  
  iVar1 = param_1;
  local_10 = 0;
  uVar2 = thunk_FUN_104026b0(*(undefined4 *)(param_1 + 0x48),param_2,&DAT_1088494c,&local_10);
  iVar3 = *(int *)(iVar1 + 0x48);
  *(undefined4 *)(iVar3 + 0x5028) = 0;
  *(undefined4 *)(iVar3 + 0x502c) = 0;
  FArray::Realloc((FArray *)(iVar3 + 0x5024),0xc);
  *(undefined4 *)(iVar3 + 0x5034) = 8;
  thunk_FUN_10423040();
  appMemset((void *)(iVar3 + 0x5038),0,0x80);
  iVar3 = 0;
  if (0 < (short)local_10) {
    do {
      local_c = 0;
      param_1 = 0;
      uVar2 = thunk_FUN_104026b0(*(undefined4 *)(iVar1 + 0x48),uVar2,&DAT_1087ff44,&local_c,&param_1
                                );
      local_4 = local_c;
      local_8 = param_1;
      thunk_FUN_1042c300(&local_4,&local_8);
      iVar3 = iVar3 + 1;
    } while (iVar3 < (short)local_10);
  }
  _Src = (void *)(**(code **)**(undefined4 **)GMalloc_exref)(0x80,L"OneTimeQuest");
  thunk_FUN_104026b0(*(undefined4 *)(iVar1 + 0x48),uVar2,&DAT_10883ef0,0x80,_Src);
  _memcpy((void *)(*(int *)(iVar1 + 0x48) + 0x5038),_Src,0x80);
  if (_Src != (void *)0x0) {
    (**(code **)(**(int **)GMalloc_exref + 8))(_Src);
  }
  UNetworkHandler::NotifyQuestMark(DAT_10b1f538);
  (**(code **)(**(int **)(DAT_10b1f538 + 0x54) + 0x438))();
  FOutputDevice::Logf((FOutputDevice *)(int)unaff_BP,*(ushort **)GNetworkLog_exref);
  return extraout_EAX & 0xffffff00;
}


// ==== 10439400 FUN_10439400 depth=0 from=raiz callees=CORE.DLL::L2ParamStack::PushBack@EXTERNAL:00000136 CORE.DLL::L2ParamStack::~L2ParamStack@EXTERNAL:0000012a CORE.DLL::L2ParamStack::L2ParamStack@EXTERNAL:0000012b thunk_FUN_104026b0@103034e5 thunk_FUN_1042c5f0@103136ba thunk_FUN_1042c670@1030b087
// strings: 10887900=dSdddddddddd | 

uint FUN_10439400(int param_1,undefined4 param_2)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  uint *puVar4;
  int iVar5;
  uint uVar6;
  uint unaff_EBP;
  void *local_8c;
  uint local_88;
  int local_84;
  void *local_80;
  void *local_7c;
  void *local_78;
  void *local_74;
  void *local_70;
  void *local_6c;
  void *local_68;
  void *local_64;
  void *local_60;
  void *local_5c;
  uint *local_58;
  void *local_54 [2];
  L2ParamStack local_4c [16];
  undefined1 local_3c [48];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_108109b4;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  uVar2 = thunk_FUN_104026b0(*(undefined4 *)(param_1 + 0x48),param_2,&DAT_1087ff0c,&local_80,
                             &local_7c,&local_84);
  local_88 = 0;
  uVar6 = uVar2;
  if (0 < local_84) {
    do {
      uVar2 = thunk_FUN_104026b0(*(undefined4 *)(param_1 + 0x48),uVar2,"dSdddddddddd",&local_8c,0x30
                                 ,local_3c,&local_78,&local_74,&local_70,&local_6c,&local_68,
                                 &local_64,&local_60,&local_5c,&local_58,local_54);
      L2ParamStack::L2ParamStack(local_4c,0xe);
      local_4 = 0;
      L2ParamStack::PushBack(local_4c,local_80);
      L2ParamStack::PushBack(local_4c,local_8c);
      L2ParamStack::PushBack(local_4c,local_7c);
      L2ParamStack::PushBack(local_4c,local_3c);
      L2ParamStack::PushBack(local_4c,local_78);
      L2ParamStack::PushBack(local_4c,local_74);
      L2ParamStack::PushBack(local_4c,local_70);
      L2ParamStack::PushBack(local_4c,local_6c);
      L2ParamStack::PushBack(local_4c,local_68);
      L2ParamStack::PushBack(local_4c,local_64);
      L2ParamStack::PushBack(local_4c,local_60);
      L2ParamStack::PushBack(local_4c,local_5c);
      L2ParamStack::PushBack(local_4c,local_58);
      L2ParamStack::PushBack(local_4c,local_54[0]);
      if ((DAT_10b1f538 != 0) &&
         (iVar3 = *(int *)(*(int *)(DAT_10b1f538 + 0x1a0) +
                          (*(int *)(DAT_10b1f538 + 0x1a4) - 1U & (uint)local_8c) * 4), iVar3 != -1))
      {
        do {
          if (*(void **)(*(int *)(DAT_10b1f538 + 0x194) + 4 + iVar3 * 0xc) == local_8c) break;
          iVar3 = *(int *)(*(int *)(DAT_10b1f538 + 0x194) + iVar3 * 0xc);
        } while (iVar3 != -1);
      }
      puVar4 = (uint *)(**(code **)**(undefined4 **)GMalloc_exref)(0x10,&DAT_10853a28);
      if (puVar4 == (uint *)0x0) {
        puVar4 = (uint *)0x0;
      }
      else {
        *puVar4 = 0xffffffff;
        puVar4[1] = 0xffffffff;
        puVar4[2] = 0xffffffff;
        puVar4[3] = 0xffffffff;
      }
      local_c = (void *)((uint)local_c & 0xffffff00);
      *puVar4 = unaff_EBP;
      iVar3 = *(int *)(param_1 + 0x48);
      iVar5 = *(int *)(*(int *)(iVar3 + 0x4f5c) + (*(int *)(iVar3 + 0x4f60) - 1U & unaff_EBP) * 4);
      local_58 = puVar4;
      if (iVar5 != -1) {
        iVar3 = *(int *)(iVar3 + 0x4f50);
        do {
          if (*(uint *)(iVar3 + 4 + iVar5 * 0xc) == unaff_EBP) {
            piVar1 = (int *)(iVar3 + 8 + iVar5 * 0xc);
            if ((piVar1 != (int *)0x0) && (*piVar1 != 0)) {
              (**(code **)(**(int **)GMalloc_exref + 8))(*piVar1);
              *piVar1 = 0;
              thunk_FUN_1042c670(puVar4);
            }
            break;
          }
          iVar5 = *(int *)(iVar3 + iVar5 * 0xc);
        } while (iVar5 != -1);
      }
      thunk_FUN_1042c5f0(puVar4,&local_58);
      (**(code **)(**(int **)(DAT_10b1f538 + 0x54) + 0x44c))(local_54);
      local_4 = 0xffffffff;
      L2ParamStack::~L2ParamStack(local_4c);
      uVar6 = local_88 + 1;
      local_88 = uVar6;
    } while ((int)uVar6 < local_84);
  }
  ExceptionList = local_c;
  return uVar6 & 0xffffff00;
}


// ==== 104397b0 FUN_104397b0 depth=0 from=raiz callees=CORE.DLL::L2ParamStack::PushBack@EXTERNAL:00000136 CORE.DLL::L2ParamStack::~L2ParamStack@EXTERNAL:0000012a CORE.DLL::L2ParamStack::L2ParamStack@EXTERNAL:0000012b CORE.DLL::FOutputDevice::Logf@EXTERNAL:000000b4 thunk_FUN_10431a90@1030b082 thunk_FUN_104026b0@103034e5
// strings: 1088b2d4=dddSdddddddddd | 1088b218=(Receive)PartySmallWindowAddPacket | 

uint FUN_104397b0(int param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  uint extraout_EAX;
  undefined4 unaff_EDI;
  void *local_84;
  void *local_80;
  void *local_7c;
  void *local_78;
  void *local_74;
  void *local_70;
  void *local_6c;
  void *local_68;
  void *local_64;
  void *local_60;
  void *local_5c;
  undefined4 *local_58;
  void *local_54 [2];
  L2ParamStack local_4c [16];
  undefined1 local_3c [40];
  void *pvStack_14;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_108109e4;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  thunk_FUN_104026b0(*(undefined4 *)(param_1 + 0x48),param_2,"dddSdddddddddd",&local_80,&local_7c,
                     &local_84,0x30,local_3c,&local_78,&local_74,&local_70,&local_6c,&local_68,
                     &local_64,&local_60,&local_5c,&local_58,local_54);
  L2ParamStack::L2ParamStack(local_4c,0xe);
  local_4 = 0;
  L2ParamStack::PushBack(local_4c,local_80);
  L2ParamStack::PushBack(local_4c,local_84);
  L2ParamStack::PushBack(local_4c,local_7c);
  L2ParamStack::PushBack(local_4c,local_3c);
  L2ParamStack::PushBack(local_4c,local_78);
  L2ParamStack::PushBack(local_4c,local_74);
  L2ParamStack::PushBack(local_4c,local_70);
  L2ParamStack::PushBack(local_4c,local_6c);
  L2ParamStack::PushBack(local_4c,local_68);
  L2ParamStack::PushBack(local_4c,local_64);
  L2ParamStack::PushBack(local_4c,local_60);
  L2ParamStack::PushBack(local_4c,local_5c);
  L2ParamStack::PushBack(local_4c,local_58);
  L2ParamStack::PushBack(local_4c,local_54[0]);
  local_58 = (undefined4 *)(**(code **)**(undefined4 **)GMalloc_exref)(0x10,&DAT_10853a28);
  if (local_58 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    *local_58 = 0xffffffff;
    local_58[1] = 0xffffffff;
    local_58[2] = 0xffffffff;
    local_58[3] = 0xffffffff;
    puVar1 = local_58;
  }
  pvStack_c = (void *)((uint)pvStack_c & 0xffffff00);
  *puVar1 = unaff_EDI;
  thunk_FUN_10431a90(puVar1);
  (**(code **)(**(int **)(DAT_10b1f538 + 0x54) + 0x44c))(local_54);
  FOutputDevice::Logf((FOutputDevice *)GNetworkLog_exref,*(ushort **)GNetworkLog_exref);
  pvStack_c = (void *)0xffffffff;
  L2ParamStack::~L2ParamStack((L2ParamStack *)local_54);
  ExceptionList = pvStack_14;
  return extraout_EAX & 0xffffff00;
}


// ==== 10439a10 FUN_10439a10 depth=0 from=raiz callees=thunk_FUN_104319c0@1030a93e CORE.DLL::L2ParamStack::~L2ParamStack@EXTERNAL:0000012a CORE.DLL::L2ParamStack::L2ParamStack@EXTERNAL:0000012b CORE.DLL::FOutputDevice::Logf@EXTERNAL:000000b4
// strings: 1088b280=(Receive)PartySmallWindowDeleteAllPacket | 

uint FUN_10439a10(void)

{
  uint extraout_EAX;
  L2ParamStack local_1c [16];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10810a09;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  L2ParamStack::L2ParamStack(local_1c,10);
  local_4 = 0;
  thunk_FUN_104319c0();
  (**(code **)(**(int **)(DAT_10b1f538 + 0x54) + 0x458))(local_1c);
  FOutputDevice::Logf(*(FOutputDevice **)GNetworkLog_exref,
                      (ushort *)*(FOutputDevice **)GNetworkLog_exref);
  local_4 = 0xffffffff;
  L2ParamStack::~L2ParamStack(local_1c);
  ExceptionList = pvStack_c;
  return extraout_EAX & 0xffffff00;
}


// ==== 10439ac0 FUN_10439ac0 depth=0 from=raiz callees=CORE.DLL::L2ParamStack::PushBack@EXTERNAL:00000136 CORE.DLL::L2ParamStack::~L2ParamStack@EXTERNAL:0000012a CORE.DLL::L2ParamStack::L2ParamStack@EXTERNAL:0000012b thunk_FUN_104227a0@1030ad49 CORE.DLL::FOutputDevice::Logf@EXTERNAL:000000b4 thunk_FUN_104026b0@103034e5 thunk_FUN_1042c670@1030b087
// strings: 1088b2e8=(Receive)PartySmallWindowDeletePacket | 

uint FUN_10439ac0(void *param_1,undefined4 param_2)

{
  int *piVar1;
  uint extraout_EAX;
  void *local_50;
  L2ParamStack local_4c [16];
  undefined1 local_3c [48];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10810a29;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  thunk_FUN_104026b0(*(undefined4 *)((int)param_1 + 0x48),param_2,&DAT_10886b28,&param_1,0x30,
                     local_3c);
  L2ParamStack::L2ParamStack(local_4c,10);
  local_4 = 0;
  L2ParamStack::PushBack(local_4c,param_1);
  L2ParamStack::PushBack(local_4c,local_3c);
  local_50 = param_1;
  piVar1 = (int *)thunk_FUN_104227a0(&local_50);
  if ((piVar1 != (int *)0x0) && (*piVar1 != 0)) {
    (**(code **)(**(int **)GMalloc_exref + 8))(*piVar1);
    *piVar1 = 0;
    thunk_FUN_1042c670(&local_50);
  }
  (**(code **)(**(int **)(DAT_10b1f538 + 0x54) + 0x454))(local_4c);
  FOutputDevice::Logf((FOutputDevice *)GNetworkLog_exref,*(ushort **)GNetworkLog_exref);
  local_4 = 0xffffffff;
  L2ParamStack::~L2ParamStack(local_4c);
  ExceptionList = pvStack_c;
  return extraout_EAX & 0xffffff00;
}


// ==== 10439c20 FUN_10439c20 depth=0 from=raiz callees=CORE.DLL::L2ParamStack::PushBack@EXTERNAL:00000136 thunk_FUN_104319c0@1030a93e thunk_FUN_103ff8a0@1030e3e5 thunk_FUN_1042d1c0@1030f6be CORE.DLL::L2ParamStack::~L2ParamStack@EXTERNAL:0000012a thunk_FUN_10431960@10307a54 CORE.DLL::L2ParamStack::L2ParamStack@EXTERNAL:0000012b CORE.DLL::FOutputDevice::Logf@EXTERNAL:000000b4 thunk_FUN_104026b0@103034e5 thunk_FUN_10431700@10307f27
// strings: 1088b410=(Receive)RestartResponsePacket | 

uint FUN_10439c20(int param_1,undefined4 param_2)

{
  uint extraout_EAX;
  undefined1 local_834 [2056];
  L2ParamStack local_2c [20];
  void *local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  puStack_c = &LAB_10810a49;
  local_10 = ExceptionList;
  local_14 = &stack0xfffff7c0;
  local_8 = 0;
  ExceptionList = &local_10;
  thunk_FUN_104026b0(*(undefined4 *)(param_1 + 0x48),param_2,&DAT_10886b28,&local_18,0x800,local_834
                    );
  L2ParamStack::L2ParamStack(local_2c,10);
  local_8 = CONCAT31(local_8._1_3_,1);
  L2ParamStack::PushBack(local_2c,local_18);
  L2ParamStack::PushBack(local_2c,local_834);
  (**(code **)(**(int **)(DAT_10b1f538 + 0x54) + 0x470))(local_2c);
  if (local_18 != (void *)0x0) {
    thunk_FUN_10431700();
    thunk_FUN_10431960();
    thunk_FUN_104319c0();
    thunk_FUN_103ff8a0();
    thunk_FUN_1042d1c0();
  }
  FOutputDevice::Logf(*(FOutputDevice **)GNetworkLog_exref,
                      (ushort *)*(FOutputDevice **)GNetworkLog_exref);
  local_8 = local_8 & 0xffffff00;
  L2ParamStack::~L2ParamStack(local_2c);
  ExceptionList = local_10;
  return extraout_EAX & 0xffffff00;
}


// ==== 1043a2d0 FUN_1043a2d0 depth=0 from=raiz callees=thunk_FUN_104226e0@1030d04e thunk_FUN_104026b0@103034e5 thunk_FUN_104317d0@10303df5
// strings: 108874cc=ddddddd | 

uint FUN_1043a2d0(int param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  int *local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  thunk_FUN_104026b0(*(undefined4 *)(param_1 + 0x48),param_2,"ddddddd",&param_1,&local_18,&local_c,
                     &local_10,&local_14,&local_8,&local_4);
  piVar2 = (int *)0x0;
  if (DAT_10b1f538 != (int *)0x0) {
    iVar1 = thunk_FUN_104226e0(&param_1);
    piVar2 = (int *)0x0;
    if (((iVar1 != 0) && (piVar2 = (int *)thunk_FUN_104226e0(&param_1), *piVar2 == 1)) &&
       (piVar2 = (int *)thunk_FUN_104226e0(&param_1), piVar2[1] != 0)) {
      piVar2 = (int *)thunk_FUN_104226e0(&param_1);
      iVar1 = piVar2[1];
      if ((iVar1 != 0) && (piVar2 = local_18, 0 < (int)local_18)) {
        *(int **)(iVar1 + 0x284) = local_18;
        *(undefined4 *)(iVar1 + 0x288) = local_c;
        *(undefined4 *)(iVar1 + 0x28c) = local_10;
        *(undefined4 *)(iVar1 + 0x290) = local_14;
        thunk_FUN_104317d0(local_18,local_c,local_10,local_14,local_8,0x80000000);
        *(uint *)(iVar1 + 0x298) = *(uint *)(iVar1 + 0x294) >> 6 & 1;
        *(undefined4 *)(iVar1 + 0x2a0) = local_8;
        *(undefined4 *)(iVar1 + 0x310) = local_4;
        piVar2 = (int *)(**(code **)(*DAT_10b1f538 + 0xc4))(0,local_18);
      }
    }
  }
  return (uint)piVar2 & 0xffffff00;
}


// ==== 1043a470 FUN_1043a470 depth=0 from=raiz callees=CORE.DLL::FVector::RotateAngleAxis@EXTERNAL:00000143 User::SetNickName@1030c82e thunk_FUN_103254a0@10314fc4 CORE.DLL::L2ParamStack::~L2ParamStack@EXTERNAL:0000012a thunk_FUN_10422f80@10307a77 User::SetEventmatchEffect@103022f7 thunk_FUN_1042c470@10304a34 CORE.DLL::FOutputDevice::Logf@EXTERNAL:000000b4 thunk_FUN_104026b0@103034e5 User::SetPawnResource@10314583 User::SetName@103072f7 thunk_FUN_104317d0@10303df5 User::User@10313449 thunk_FUN_1042c3f0@1030a60f thunk_FUN_1042c7d0@1031428b thunk_FUN_104226e0@1030d04e CORE.DLL::L2ParamStack::PushBack@EXTERNAL:00000136 thunk_FUN_10401d60@1031311f CORE.DLL::L2ParamStack::L2ParamStack@EXTERNAL:0000012b CORE.DLL::FString::operator*@EXTERNAL:00000032 UNetworkHandler::NotifyQuestMark@103095e8
// strings: 1088b5bc=ddddddddddddddddddffffdddcccccSSddd | 1088b5ac=dddddccffdd | 1088aa80=NpcInfo | 1088b478=[Error] Can not find the Vehicle data [NpcInfoPacket] | 10852570=(Receive)NpcInfo ID:%d, ClassID:%d, CanBeAttacked:%d, X:%d, Y:%d, Z:%d | 

undefined4 FUN_1043a470(int param_1,undefined4 param_2)

{
  User *pUVar1;
  float fVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  ushort *puVar6;
  float *pfVar7;
  undefined4 unaff_ESI;
  User *pUVar8;
  char local_181;
  float local_180;
  undefined4 uStack_17c;
  int local_178;
  float fStack_174;
  float local_170;
  float local_16c;
  float fStack_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 local_15c;
  undefined4 local_158;
  undefined4 local_154;
  uint local_150;
  int local_14c;
  int local_148;
  undefined4 local_144;
  undefined4 local_140;
  undefined4 local_13c;
  void *local_138;
  int local_134;
  void *local_130;
  int local_12c;
  int local_128;
  undefined4 local_124;
  int local_120;
  undefined4 local_11c;
  undefined4 local_118;
  undefined4 local_114;
  int local_110;
  undefined4 local_10c;
  undefined4 local_108;
  undefined4 local_104;
  void *local_100;
  undefined4 local_fc;
  void *local_f8;
  undefined4 local_f4;
  undefined4 local_f0;
  undefined4 local_ec;
  void *local_e8;
  undefined4 local_e4;
  void *local_e0;
  undefined4 local_dc;
  undefined4 local_d8;
  undefined4 local_d4;
  L2ParamStack aLStack_d0 [8];
  double dStack_c8;
  double local_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined1 local_ac [4];
  double local_a8;
  double local_a0;
  undefined8 local_98;
  undefined4 local_90;
  ushort uStack_8c;
  undefined2 uStack_8a;
  ushort local_84 [20];
  ushort auStack_5c [4];
  ushort local_54 [20];
  undefined1 auStack_2c [20];
  void *pvStack_18;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined4 uStack_c;
  
  uStack_c = 0xffffffff;
  puStack_10 = &LAB_10810aba;
  pvStack_14 = ExceptionList;
  local_a0 = 0.0;
  local_a8 = 0.0;
  local_144 = 0;
  local_138 = (void *)0x0;
  local_130 = (void *)0x0;
  local_e0 = (void *)0x0;
  local_f0 = 0;
  local_d8 = 0;
  local_f8 = (void *)0x0;
  local_84[0] = 0;
  local_54[0] = 0;
  local_140 = 0;
  local_13c = 0;
  local_16c = 0.0;
  local_128 = 0;
  ExceptionList = &pvStack_14;
  uVar3 = thunk_FUN_104026b0(*(undefined4 *)(param_1 + 0x48),param_2,
                             "ddddddddddddddddddffffdddcccccSSddd",&local_178,&local_12c,&local_134,
                             &local_118,&local_120,&local_108,local_ac,&local_170,&local_144,
                             &local_138,&local_10c,&local_104,&local_110,&local_d4,&local_100,
                             &local_11c,&local_f4,&local_114,&local_98,&local_90,&local_c0,&local_b8
                             ,&local_150,&local_14c,&local_148,&local_f8,&local_d8,&local_f0,
                             &local_e0,&local_130,0x30,local_54,0x30,local_84,&local_140,&local_ec,
                             &local_124);
  thunk_FUN_104026b0(*(undefined4 *)(param_1 + 0x48),uVar3,"dddddccffdd",&local_13c,&local_e4,
                     &local_dc,&local_fc,&local_e8,&local_181,(int)&uStack_17c + 3,&local_a0,
                     &local_a8,&local_16c,&local_128);
  if ((((DAT_10b1f538 == (UNetworkHandler *)0x0) ||
       (iVar4 = thunk_FUN_104226e0(&local_178), iVar4 == 0)) ||
      (piVar5 = (int *)thunk_FUN_104226e0(&local_178), *piVar5 != 1)) ||
     ((iVar4 = thunk_FUN_104226e0(&local_178), *(int *)(iVar4 + 4) == 0 ||
      (iVar4 = thunk_FUN_104226e0(&local_178), *(int *)(iVar4 + 4) == 0)))) {
    if ((local_130 != (void *)0x0) && (local_130 != (void *)0x2)) goto LAB_1043b270;
    pUVar8 = (User *)(**(code **)**(undefined4 **)GMalloc_exref)(0x314,L"NpcInfo");
    if (pUVar8 == (User *)0x0) {
      pUVar8 = (User *)0x0;
    }
    else {
      pUVar8 = (User *)User::User(pUVar8);
    }
    *(float *)(pUVar8 + 0x18) = local_180;
    *(undefined4 *)(pUVar8 + 8) = 1;
    *(int *)(pUVar8 + 0xc) = local_148;
    *(undefined4 *)(pUVar8 + 0x94) = 0;
    *(int *)(pUVar8 + 0x14) = local_134 + -1000000;
    *(undefined4 *)(pUVar8 + 0x10) = local_13c;
    *(undefined4 *)(pUVar8 + 0x19c) = local_114;
    *(undefined4 *)(pUVar8 + 0x1a0) = local_10c;
    *(undefined4 *)(pUVar8 + 0x1a4) = local_118;
    *(undefined4 *)(pUVar8 + 0x1a8) = local_dc;
    *(undefined4 *)(pUVar8 + 0x1b4) = local_108;
    *(undefined4 *)(pUVar8 + 0x1b8) = local_124;
    *(undefined4 *)(pUVar8 + 0x1ac) = local_fc;
    *(undefined4 *)(pUVar8 + 0x1b0) = local_11c;
    *(undefined8 *)(pUVar8 + 0x1bc) = local_98;
    *(double *)(pUVar8 + 0x1c4) = local_a0;
    *(float *)(pUVar8 + 0x1cc) = (float)dStack_c8;
    *(float *)(pUVar8 + 0x1d0) = (float)local_c0;
    *(undefined4 *)(pUVar8 + 0xb4) = local_158;
    *(uint *)(pUVar8 + 0xb8) = local_150;
    *(undefined4 *)(pUVar8 + 0xc0) = local_154;
    *(int *)(pUVar8 + 0x23c) = local_14c;
    *(undefined4 *)(pUVar8 + 0x2ac) = local_140;
    *(undefined4 *)(pUVar8 + 0x194) = local_f4;
    *(int *)(pUVar8 + 0x198) = local_12c;
    *(undefined4 *)(pUVar8 + 0x284) = local_ec;
    *(undefined4 *)(pUVar8 + 0x288) = local_e4;
    *(undefined4 *)(pUVar8 + 0x28c) = local_104;
    *(undefined4 *)(pUVar8 + 0x290) = local_f0;
    if (auStack_5c[0] == 0) {
      iVar4 = thunk_FUN_10422f80(pUVar8 + 0x14);
      if (iVar4 != 0) {
        puVar6 = FString::operator*((FString *)(iVar4 + 4));
        User::SetName(pUVar8,puVar6);
        *(undefined4 *)(pUVar8 + 400) = *(undefined4 *)(iVar4 + 0x1c);
        *(undefined4 *)(*(int *)(param_1 + 0x48) + 0x5010) = 0;
      }
    }
    else {
      User::SetName(pUVar8,auStack_5c);
      *(undefined4 *)(*(int *)(param_1 + 0x48) + 0x5010) = 1;
    }
    if (uStack_8c == 0) {
      iVar4 = thunk_FUN_10422f80(pUVar8 + 0x14);
      if (iVar4 != 0) {
        puVar6 = FString::operator*((FString *)(iVar4 + 0x10));
        goto LAB_1043adfd;
      }
    }
    else {
      puVar6 = &uStack_8c;
LAB_1043adfd:
      User::SetNickName(pUVar8,puVar6);
    }
    *(float *)(pUVar8 + 0x2e8) = fStack_174;
    pUVar1 = pUVar8 + 0x18;
    if ((0 < *(int *)(pUVar8 + 0x18)) && (DAT_10b1f538 != (UNetworkHandler *)0x0)) {
      iVar4 = thunk_FUN_104226e0(pUVar1);
      if (iVar4 != 0) {
        thunk_FUN_103254a0(iVar4);
        thunk_FUN_1042c470(pUVar1);
      }
      uStack_17c = (undefined4 *)(**(code **)**(undefined4 **)GMalloc_exref)(8,&DAT_10853a28);
      if (uStack_17c == (undefined4 *)0x0) {
        uStack_17c = (undefined4 *)0x0;
      }
      else {
        *uStack_17c = 0;
        uStack_17c[1] = 0;
      }
      pvStack_14 = (void *)0xffffffff;
      if (uStack_17c != (undefined4 *)0x0) {
        uStack_17c[1] = pUVar8;
        *uStack_17c = 1;
      }
      thunk_FUN_1042c3f0(pUVar1,&uStack_17c);
    }
    local_170 = (float)local_120;
    local_16c = (float)local_128;
    fStack_168 = (float)local_110;
    if (0 < local_178) {
      if ((((DAT_10b1f538 == (UNetworkHandler *)0x0) ||
           (iVar4 = thunk_FUN_104226e0(&local_178), iVar4 == 0)) ||
          (piVar5 = (int *)thunk_FUN_104226e0(&local_178), *piVar5 != 3)) ||
         ((iVar4 = thunk_FUN_104226e0(&local_178), *(int *)(iVar4 + 4) == 0 ||
          (iVar4 = thunk_FUN_104226e0(&local_178), *(int *)(iVar4 + 4) == 0)))) {
        FOutputDevice::Logf(*(FOutputDevice **)GNetworkLog_exref,
                            (ushort *)*(FOutputDevice **)GNetworkLog_exref);
      }
      else {
        iVar4 = thunk_FUN_104226e0(&local_178);
        if ((iVar4 == 0) ||
           ((piVar5 = (int *)thunk_FUN_104226e0(&local_178), *piVar5 != 3 ||
            (iVar4 = thunk_FUN_104226e0(&local_178), *(int *)(iVar4 + 4) == 0)))) {
          iVar4 = 0;
        }
        else {
          iVar4 = thunk_FUN_104226e0(&local_178);
          iVar4 = *(int *)(iVar4 + 4);
        }
        uStack_164 = 0;
        uStack_160 = 0;
        local_15c = 0x3f800000;
        pfVar7 = (float *)FVector::RotateAngleAxis
                                    ((FVector *)&local_170,(int)auStack_2c,
                                     (FVector *)(*(uint *)(*(int *)(iVar4 + 4) + 0x1cc) & 0xffff));
        iVar4 = *(int *)(iVar4 + 4);
        fStack_174 = *(float *)(iVar4 + 0x1bc) + *pfVar7;
        local_170 = *(float *)(iVar4 + 0x1c0) + pfVar7[1];
        local_16c = *(float *)(iVar4 + 0x1c4) + pfVar7[2];
      }
    }
    *(undefined4 *)(pUVar8 + 0x204) = 0;
    L2ParamStack::L2ParamStack((L2ParamStack *)&local_d8,10);
    pvStack_14 = (void *)0x1;
    L2ParamStack::PushBack((L2ParamStack *)&local_d8,local_100);
    L2ParamStack::PushBack((L2ParamStack *)&local_d8,local_e0);
    L2ParamStack::PushBack((L2ParamStack *)&local_d8,local_f8);
    L2ParamStack::PushBack((L2ParamStack *)&local_d8,local_e8);
    L2ParamStack::PushBack((L2ParamStack *)&local_d8,local_138);
    L2ParamStack::PushBack((L2ParamStack *)&local_d8,(void *)(int)(char)((uint)unaff_ESI >> 0x18));
    L2ParamStack::PushBack((L2ParamStack *)&local_d8,local_130);
    (**(code **)(**(int **)(DAT_10b1f538 + 0x54) + 600))
              (pUVar8,local_170,local_16c,fStack_168,uStack_b4,&local_d8);
    if (*(int *)(pUVar8 + 0x204) != 0) {
      if ((int)local_150 < 1) {
        *(undefined4 *)(*(int *)(pUVar8 + 0x204) + 0x6a0) = 0;
      }
      else {
        *(uint *)(*(int *)(pUVar8 + 0x204) + 0x6a0) = local_150;
      }
      if (local_14c < 1) {
        *(undefined4 *)(*(int *)(pUVar8 + 0x204) + 0x6a4) = 0;
      }
      else {
        *(int *)(*(int *)(pUVar8 + 0x204) + 0x6a4) = local_14c;
      }
      if (local_148 < 1) {
        *(undefined4 *)(*(int *)(pUVar8 + 0x204) + 0x6a8) = 0;
      }
      else {
        *(int *)(*(int *)(pUVar8 + 0x204) + 0x6a8) = local_148;
      }
      *(undefined4 *)(*(int *)(pUVar8 + 0x204) + 0x17d0) = local_13c;
      *(int *)(*(int *)(pUVar8 + 0x204) + 0x778) = (int)local_181;
      User::SetEventmatchEffect(pUVar8,(int)uStack_17c._3_1_);
      *(float *)(*(int *)(pUVar8 + 0x204) + 0x2f0) = (float)local_c0;
      *(float *)(*(int *)(pUVar8 + 0x204) + 0x2f4) = (float)(double)CONCAT44(uStack_b4,local_b8);
      *(float *)(*(int *)(pUVar8 + 0x204) + 0x186c) = (float)local_a0;
      fStack_174 = (float)local_a8;
      *(float *)(*(int *)(pUVar8 + 0x204) + 0x1870) = fStack_174;
      *(float *)(*(int *)(pUVar8 + 0x204) + 0x1830) = local_16c;
      if (*(int *)(pUVar8 + 0x10) == 0) {
        thunk_FUN_1042c7d0(pUVar8 + 0x18,&local_180);
        UNetworkHandler::NotifyQuestMark(DAT_10b1f538);
      }
    }
    if (0 < *(int *)(pUVar8 + 0x284)) {
      thunk_FUN_104317d0(*(int *)(pUVar8 + 0x284),*(undefined4 *)(pUVar8 + 0x288),
                         *(undefined4 *)(pUVar8 + 0x28c),*(undefined4 *)(pUVar8 + 0x290),0,
                         0x80000000);
    }
    uStack_c = 0xffffffff;
    L2ParamStack::~L2ParamStack(aLStack_d0);
    goto LAB_1043b270;
  }
  iVar4 = thunk_FUN_104226e0(&local_178);
  if ((iVar4 == 0) ||
     ((piVar5 = (int *)thunk_FUN_104226e0(&local_178), *piVar5 != 1 ||
      (iVar4 = thunk_FUN_104226e0(&local_178), *(int *)(iVar4 + 4) == 0)))) {
    pUVar8 = (User *)0x0;
  }
  else {
    iVar4 = thunk_FUN_104226e0(&local_178);
    pUVar8 = *(User **)(iVar4 + 4);
  }
  *(undefined4 *)(pUVar8 + 8) = 1;
  *(undefined4 *)(pUVar8 + 0xc) = local_140;
  *(undefined4 *)(pUVar8 + 0x94) = 0;
  *(int *)(pUVar8 + 0x14) = local_12c + -1000000;
  *(int *)(pUVar8 + 0x10) = local_134;
  *(undefined4 *)(pUVar8 + 0x19c) = local_10c;
  *(undefined4 *)(pUVar8 + 0x1a0) = local_104;
  *(int *)(pUVar8 + 0x1a4) = local_110;
  *(undefined4 *)(pUVar8 + 0x1a8) = local_d4;
  *(void **)(pUVar8 + 0x1b4) = local_100;
  *(undefined4 *)(pUVar8 + 0x1b8) = local_11c;
  *(undefined4 *)(pUVar8 + 0x1ac) = local_f4;
  *(undefined4 *)(pUVar8 + 0x1b0) = local_114;
  *(ulonglong *)(pUVar8 + 0x1bc) = CONCAT26(uStack_8a,CONCAT24(uStack_8c,local_90));
  *(undefined8 *)(pUVar8 + 0x1c4) = local_98;
  *(float *)(pUVar8 + 0x1cc) = (float)local_c0;
  *(float *)(pUVar8 + 0x1d0) = (float)(double)CONCAT44(uStack_b4,local_b8);
  *(uint *)(pUVar8 + 0xb4) = local_150;
  *(int *)(pUVar8 + 0xb8) = local_148;
  *(int *)(pUVar8 + 0xc0) = local_14c;
  *(undefined4 *)(pUVar8 + 0x23c) = local_144;
  *(void **)(pUVar8 + 0x2ac) = local_138;
  *(undefined4 *)(pUVar8 + 0x194) = local_ec;
  *(undefined4 *)(pUVar8 + 0x198) = local_124;
  *(undefined4 *)(pUVar8 + 0x284) = local_e4;
  *(undefined4 *)(pUVar8 + 0x288) = local_dc;
  *(undefined4 *)(pUVar8 + 0x28c) = local_fc;
  *(void **)(pUVar8 + 0x290) = local_e8;
  if (local_54[0] == 0) {
    iVar4 = thunk_FUN_10422f80(pUVar8 + 0x14);
    if (iVar4 != 0) {
      puVar6 = FString::operator*((FString *)(iVar4 + 4));
      User::SetName(pUVar8,puVar6);
      *(undefined4 *)(pUVar8 + 400) = *(undefined4 *)(iVar4 + 0x1c);
      *(undefined4 *)(*(int *)(param_1 + 0x48) + 0x5010) = 0;
    }
  }
  else {
    User::SetName(pUVar8,local_54);
    *(undefined4 *)(*(int *)(param_1 + 0x48) + 0x5010) = 1;
  }
  if (local_84[0] == 0) {
    iVar4 = thunk_FUN_10422f80(pUVar8 + 0x14);
    if (iVar4 != 0) {
      puVar6 = FString::operator*((FString *)(iVar4 + 0x10));
      goto LAB_1043a908;
    }
  }
  else {
    puVar6 = local_84;
LAB_1043a908:
    User::SetNickName(pUVar8,puVar6);
  }
  *(float *)(pUVar8 + 0x2e8) = local_16c;
  if (*(int *)(pUVar8 + 0x204) != 0) {
    *(uint *)(*(int *)(pUVar8 + 0x204) + 0x6a0) = ((int)local_150 < 1) - 1 & local_150;
    if (local_14c < 1) {
      *(undefined4 *)(*(int *)(pUVar8 + 0x204) + 0x6a4) = 0;
    }
    else {
      *(int *)(*(int *)(pUVar8 + 0x204) + 0x6a4) = local_14c;
    }
    if (local_148 < 1) {
      *(undefined4 *)(*(int *)(pUVar8 + 0x204) + 0x6a8) = 0;
    }
    else {
      *(int *)(*(int *)(pUVar8 + 0x204) + 0x6a8) = local_148;
    }
    *(float *)(*(int *)(pUVar8 + 0x204) + 0x6b0) = (float)*(double *)(pUVar8 + 0x1bc);
    local_180 = (float)*(double *)(pUVar8 + 0x1c4);
    *(float *)(*(int *)(pUVar8 + 0x204) + 0x6b4) = local_180;
    *(float *)(*(int *)(pUVar8 + 0x204) + 0x6ec) = (float)*(int *)(pUVar8 + 0x19c);
    *(float *)(*(int *)(pUVar8 + 0x204) + 0x6f0) = (float)*(int *)(pUVar8 + 0x1a0);
    *(float *)(*(int *)(pUVar8 + 0x204) + 0x6f4) = (float)*(int *)(pUVar8 + 0x1a4);
    *(float *)(*(int *)(pUVar8 + 0x204) + 0x6f8) = (float)*(int *)(pUVar8 + 0x1a8);
    *(float *)(*(int *)(pUVar8 + 0x204) + 0x6fc) = (float)*(int *)(pUVar8 + 0x1ac);
    *(float *)(*(int *)(pUVar8 + 0x204) + 0x700) = (float)*(int *)(pUVar8 + 0x1b0);
    iVar4 = *(int *)(pUVar8 + 0x204);
    if (*(char *)(*(int *)(iVar4 + 0x14d8) + 0x434) == '\x01') {
      *(float *)(iVar4 + 0x1550) = *(float *)(iVar4 + 0x6ec) * *(float *)(iVar4 + 0x6b4);
      iVar4 = *(int *)(pUVar8 + 0x204);
      *(float *)(iVar4 + 0x1554) = *(float *)(iVar4 + 0x6f4) * *(float *)(iVar4 + 0x6b4);
      iVar4 = *(int *)(pUVar8 + 0x204);
      fVar2 = *(float *)(iVar4 + 0x6fc);
    }
    else {
      *(float *)(iVar4 + 0x1550) = *(float *)(iVar4 + 0x6f0) * *(float *)(iVar4 + 0x6b4);
      iVar4 = *(int *)(pUVar8 + 0x204);
      *(float *)(iVar4 + 0x1554) = *(float *)(iVar4 + 0x6f8) * *(float *)(iVar4 + 0x6b4);
      iVar4 = *(int *)(pUVar8 + 0x204);
      fVar2 = *(float *)(iVar4 + 0x700);
    }
    *(float *)(iVar4 + 0x1558) = fVar2 * *(float *)(iVar4 + 0x6b4);
    *(undefined4 *)(*(int *)(pUVar8 + 0x204) + 0x17d0) = local_13c;
    *(int *)(*(int *)(pUVar8 + 0x204) + 0x778) = (int)local_181;
    User::SetEventmatchEffect(pUVar8,(int)uStack_17c._3_1_);
    *(float *)(*(int *)(pUVar8 + 0x204) + 0x2f0) = (float)local_c0;
    *(float *)(*(int *)(pUVar8 + 0x204) + 0x2f4) = (float)(double)CONCAT44(uStack_b4,local_b8);
    *(float *)(*(int *)(pUVar8 + 0x204) + 0x186c) = (float)local_a0;
    local_180 = (float)local_a8;
    *(float *)(*(int *)(pUVar8 + 0x204) + 0x1870) = local_180;
    *(float *)(*(int *)(pUVar8 + 0x204) + 0x1830) = local_16c;
    if (local_128 == 0) {
      uVar3 = 1;
    }
    else {
      if (local_128 != 1) goto LAB_1043abad;
      uVar3 = 4;
    }
    local_15c = 0;
    local_158 = 0;
    local_154 = 0x3f800000;
    (**(code **)(**(int **)(pUVar8 + 0x204) + 0x1c8))(uVar3,0,0,0,0x3f800000);
  }
LAB_1043abad:
  if (0 < *(int *)(pUVar8 + 0x284)) {
    thunk_FUN_104317d0(*(int *)(pUVar8 + 0x284),*(undefined4 *)(pUVar8 + 0x288),
                       *(undefined4 *)(pUVar8 + 0x28c),*(undefined4 *)(pUVar8 + 0x290),0,0x80000000)
    ;
  }
  User::SetPawnResource(pUVar8);
LAB_1043b270:
  if ((-1 < local_12c + -0x3042) && (local_12c + -0x41d2 < 0)) {
    thunk_FUN_10401d60();
    (**(code **)(**(int **)(DAT_10b1f538 + 0x54) + 0x314))(2);
    ExceptionList = pvStack_18;
    return 1;
  }
  FOutputDevice::Logf((FOutputDevice *)GNetworkLog_exref,*(ushort **)GNetworkLog_exref);
  ExceptionList = puStack_10;
  return 0;
}


// ==== 103ff550 FUN_103ff550 depth=1 from=FUN_1040be50 callees=thunk_FUN_103ff3e0@10312c56
// strings: 

undefined4 __thiscall FUN_103ff550(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  thunk_FUN_103ff3e0(param_1,param_2,param_3);
  return 1;
}


// ==== 107a6860 _memset depth=1 from=FUN_1040be50 callees=__VEC_memzero@107ad8e2
// strings: 

/* Library Function - Single Match
    _memset
   
   Libraries: Visual Studio 2005 Debug, Visual Studio 2005 Release, Visual Studio 2008 Debug, Visual
   Studio 2008 Release */

void * __cdecl _memset(void *_Dst,int _Val,size_t _Size)

{
  uint uVar1;
  void *pvVar2;
  uint uVar3;
  size_t sVar4;
  uint *puVar5;
  
  if (_Size == 0) {
    return _Dst;
  }
  uVar1 = _Val & 0xff;
  if ((((char)_Val == '\0') && (0xff < _Size)) && (DAT_11d8b2ec != 0)) {
    pvVar2 = (void *)__VEC_memzero();
    return pvVar2;
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


// ==== 104026b0 FUN_104026b0 depth=1 from=FUN_1040be50 callees=thunk_FUN_10402640@1030437c thunk_FUN_10401a60@103121f2 _memcpy@107a6260 _strncpy@107a6a00
// strings: 1087f25c=unknown type %c in %s | 

short * FUN_104026b0(int param_1,short *param_2,char *param_3)

{
  int *piVar1;
  uint *puVar2;
  short sVar3;
  undefined8 *puVar4;
  undefined4 *puVar5;
  size_t sVar6;
  char *_Dest;
  char *pcVar7;
  int iVar8;
  short *psVar9;
  int iVar10;
  int *piVar11;
  
  pcVar7 = param_3;
  if (*(int *)(param_1 + 0x4ef8) == 0) {
    return param_2;
  }
  iVar8 = (int)*param_3;
  if (iVar8 != 0) {
    piVar11 = (int *)&param_3;
    do {
      param_3 = param_3 + 1;
      switch(iVar8) {
      case 0x51:
        puVar5 = (undefined4 *)piVar11[1];
        piVar11 = piVar11 + 1;
        if (param_2 < *(short **)(param_1 + 0x4ef8)) {
          *puVar5 = *(undefined4 *)param_2;
          puVar5[1] = *(undefined4 *)(param_2 + 2);
          param_2 = param_2 + 4;
        }
        else {
          *puVar5 = 0;
          puVar5[1] = 0;
        }
        break;
      default:
        thunk_FUN_10401a60(L"unknown type %c in %s",iVar8,pcVar7);
        break;
      case 0x53:
        puVar2 = (uint *)(piVar11 + 1);
        psVar9 = (short *)piVar11[2];
        piVar11 = piVar11 + 2;
        if (param_2 < *(short **)(param_1 + 0x4ef8)) {
          psVar9 = param_2;
          do {
            sVar3 = *psVar9;
            psVar9 = psVar9 + 1;
          } while (sVar3 != 0);
          iVar10 = (int)psVar9 - (int)(param_2 + 1) >> 1;
          iVar8 = (*puVar2 >> 1) - 1;
          if (iVar10 <= iVar8) {
            iVar8 = iVar10;
          }
          _memcpy((void *)*piVar11,param_2,iVar8 * 2);
          *(undefined2 *)(iVar8 * 2 + *piVar11) = 0;
          param_2 = param_2 + iVar10 + 1;
        }
        else {
LAB_10402743:
          *psVar9 = 0;
        }
        break;
      case 0x62:
        sVar6 = piVar11[1];
        piVar11 = piVar11 + 2;
        if (param_2 < *(short **)(param_1 + 0x4ef8)) {
          _memcpy((void *)*piVar11,param_2,sVar6);
          param_2 = (short *)((int)param_2 + sVar6);
        }
        break;
      case 99:
        piVar1 = piVar11 + 1;
        piVar11 = piVar11 + 1;
        if (param_2 < *(short **)(param_1 + 0x4ef8)) {
          *(undefined1 *)*piVar1 = (char)*param_2;
          param_2 = (short *)((int)param_2 + 1);
        }
        else {
          *(undefined1 *)*piVar1 = 0;
        }
        break;
      case 100:
        piVar1 = piVar11 + 1;
        piVar11 = piVar11 + 1;
        if (param_2 < *(short **)(param_1 + 0x4ef8)) {
          *(undefined4 *)*piVar1 = *(undefined4 *)param_2;
          param_2 = param_2 + 2;
        }
        else {
          *(undefined4 *)*piVar1 = 0;
        }
        break;
      case 0x66:
        puVar4 = (undefined8 *)piVar11[1];
        piVar11 = piVar11 + 1;
        if (param_2 < *(short **)(param_1 + 0x4ef8)) {
          *(undefined4 *)puVar4 = *(undefined4 *)param_2;
          *(undefined4 *)((int)puVar4 + 4) = *(undefined4 *)(param_2 + 2);
          param_2 = param_2 + 4;
        }
        else {
          *puVar4 = 0;
        }
        break;
      case 0x68:
        psVar9 = (short *)piVar11[1];
        piVar11 = piVar11 + 1;
        if (*(short **)(param_1 + 0x4ef8) <= param_2) goto LAB_10402743;
        *psVar9 = *param_2;
        param_2 = param_2 + 1;
        break;
      case 0x73:
        sVar6 = piVar11[1];
        _Dest = (char *)piVar11[2];
        piVar11 = piVar11 + 2;
        if (param_2 < *(short **)(param_1 + 0x4ef8)) {
          _strncpy(_Dest,(char *)param_2,sVar6);
          _Dest[sVar6 - 1] = '\0';
          iVar8 = thunk_FUN_10402640(param_2,0,sVar6);
          param_2 = (short *)(iVar8 + 1);
        }
        else {
          *_Dest = '\0';
        }
      }
      iVar8 = (int)*param_3;
    } while (iVar8 != 0);
  }
  return param_2;
}


// ==== 10310f28 UGameEngine::OnGameGuardQuery depth=1 from=FUN_1040be50 callees=
// strings: 

/* public: void __thiscall UGameEngine::OnGameGuardQuery(unsigned long,unsigned long,unsigned
   long,unsigned long,int) */

void __thiscall
UGameEngine::OnGameGuardQuery
          (UGameEngine *this,ulong param_1,ulong param_2,ulong param_3,ulong param_4,int param_5)

{
                    /* 0x10f28  6428  ?OnGameGuardQuery@UGameEngine@@QAEXKKKKH@Z */
                    /* WARNING: Could not recover jumptable at 0x1048b88b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(this + 0x68) + 0x84))();
  return;
}


// ==== 107a6260 _memcpy depth=1 from=FUN_1040be50 callees=__VEC_memcpy@107ad08e
// strings: 

/* Library Function - Single Match
    _memcpy
   
   Libraries: Visual Studio 2005 Debug, Visual Studio 2005 Release, Visual Studio 2008 Debug, Visual
   Studio 2008 Release */

void * __cdecl _memcpy(void *_Dst,void *_Src,size_t _Size)

{
  void *pvVar1;
  uint uVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  if ((_Src < _Dst) && (_Dst < (void *)(_Size + (int)_Src))) {
    puVar4 = (undefined4 *)((_Size - 4) + (int)_Src);
    puVar5 = (undefined4 *)((_Size - 4) + (int)_Dst);
    if (((uint)puVar5 & 3) == 0) {
      uVar2 = _Size >> 2;
      uVar3 = _Size & 3;
      if (7 < uVar2) {
        for (; uVar2 != 0; uVar2 = uVar2 - 1) {
          *puVar5 = *puVar4;
          puVar4 = puVar4 + -1;
          puVar5 = puVar5 + -1;
        }
        switch(uVar3) {
        case 0:
          return _Dst;
        case 2:
          goto switchD_107a6443_caseD_2;
        case 3:
          goto switchD_107a6443_caseD_3;
        }
        goto switchD_107a6443_caseD_1;
      }
    }
    else {
      switch(_Size) {
      case 0:
        goto switchD_107a6443_caseD_0;
      case 1:
        goto switchD_107a6443_caseD_1;
      case 2:
        goto switchD_107a6443_caseD_2;
      case 3:
        goto switchD_107a6443_caseD_3;
      default:
        uVar2 = _Size - ((uint)puVar5 & 3);
        switch((uint)puVar5 & 3) {
        case 1:
          uVar3 = uVar2 & 3;
          *(undefined1 *)((int)puVar5 + 3) = *(undefined1 *)((int)puVar4 + 3);
          puVar4 = (undefined4 *)((int)puVar4 + -1);
          uVar2 = uVar2 >> 2;
          puVar5 = (undefined4 *)((int)puVar5 - 1);
          if (7 < uVar2) {
            for (; uVar2 != 0; uVar2 = uVar2 - 1) {
              *puVar5 = *puVar4;
              puVar4 = puVar4 + -1;
              puVar5 = puVar5 + -1;
            }
            switch(uVar3) {
            case 0:
              return _Dst;
            case 2:
              goto switchD_107a6443_caseD_2;
            case 3:
              goto switchD_107a6443_caseD_3;
            }
            goto switchD_107a6443_caseD_1;
          }
          break;
        case 2:
          uVar3 = uVar2 & 3;
          *(undefined1 *)((int)puVar5 + 3) = *(undefined1 *)((int)puVar4 + 3);
          uVar2 = uVar2 >> 2;
          *(undefined1 *)((int)puVar5 + 2) = *(undefined1 *)((int)puVar4 + 2);
          puVar4 = (undefined4 *)((int)puVar4 + -2);
          puVar5 = (undefined4 *)((int)puVar5 - 2);
          if (7 < uVar2) {
            for (; uVar2 != 0; uVar2 = uVar2 - 1) {
              *puVar5 = *puVar4;
              puVar4 = puVar4 + -1;
              puVar5 = puVar5 + -1;
            }
            switch(uVar3) {
            case 0:
              return _Dst;
            case 2:
              goto switchD_107a6443_caseD_2;
            case 3:
              goto switchD_107a6443_caseD_3;
            }
            goto switchD_107a6443_caseD_1;
          }
          break;
        case 3:
          uVar3 = uVar2 & 3;
          *(undefined1 *)((int)puVar5 + 3) = *(undefined1 *)((int)puVar4 + 3);
          *(undefined1 *)((int)puVar5 + 2) = *(undefined1 *)((int)puVar4 + 2);
          uVar2 = uVar2 >> 2;
          *(undefined1 *)((int)puVar5 + 1) = *(undefined1 *)((int)puVar4 + 1);
          puVar4 = (undefined4 *)((int)puVar4 + -3);
          puVar5 = (undefined4 *)((int)puVar5 - 3);
          if (7 < uVar2) {
            for (; uVar2 != 0; uVar2 = uVar2 - 1) {
              *puVar5 = *puVar4;
              puVar4 = puVar4 + -1;
              puVar5 = puVar5 + -1;
            }
            switch(uVar3) {
            case 0:
              return _Dst;
            case 2:
              goto switchD_107a6443_caseD_2;
            case 3:
              goto switchD_107a6443_caseD_3;
            }
            goto switchD_107a6443_caseD_1;
          }
        }
      }
    }
    switch(uVar2) {
    case 7:
      puVar5[7 - uVar2] = puVar4[7 - uVar2];
    case 6:
      puVar5[6 - uVar2] = puVar4[6 - uVar2];
    case 5:
      puVar5[5 - uVar2] = puVar4[5 - uVar2];
    case 4:
      puVar5[4 - uVar2] = puVar4[4 - uVar2];
    case 3:
      puVar5[3 - uVar2] = puVar4[3 - uVar2];
    case 2:
      puVar5[2 - uVar2] = puVar4[2 - uVar2];
    case 1:
      puVar5[1 - uVar2] = puVar4[1 - uVar2];
      puVar4 = puVar4 + -uVar2;
      puVar5 = puVar5 + -uVar2;
    }
    switch(uVar3) {
    case 1:
switchD_107a6443_caseD_1:
      *(undefined1 *)((int)puVar5 + 3) = *(undefined1 *)((int)puVar4 + 3);
      return _Dst;
    case 2:
switchD_107a6443_caseD_2:
      *(undefined1 *)((int)puVar5 + 3) = *(undefined1 *)((int)puVar4 + 3);
      *(undefined1 *)((int)puVar5 + 2) = *(undefined1 *)((int)puVar4 + 2);
      return _Dst;
    case 3:
switchD_107a6443_caseD_3:
      *(undefined1 *)((int)puVar5 + 3) = *(undefined1 *)((int)puVar4 + 3);
      *(undefined1 *)((int)puVar5 + 2) = *(undefined1 *)((int)puVar4 + 2);
      *(undefined1 *)((int)puVar5 + 1) = *(undefined1 *)((int)puVar4 + 1);
      return _Dst;
    }
switchD_107a6443_caseD_0:
    return _Dst;
  }
  if (((0xff < _Size) && (DAT_11d8b2ec != 0)) && (((uint)_Dst & 0xf) == ((uint)_Src & 0xf))) {
    pvVar1 = (void *)__VEC_memcpy();
    return pvVar1;
  }
  puVar4 = _Dst;
  if (((uint)_Dst & 3) == 0) {
    uVar2 = _Size >> 2;
    uVar3 = _Size & 3;
    if (7 < uVar2) {
      for (; uVar2 != 0; uVar2 = uVar2 - 1) {
        *puVar4 = *(undefined4 *)_Src;
        _Src = (undefined4 *)((int)_Src + 4);
        puVar4 = puVar4 + 1;
      }
      switch(uVar3) {
      case 0:
        return _Dst;
      case 2:
        goto switchD_107a62bc_caseD_2;
      case 3:
        goto switchD_107a62bc_caseD_3;
      }
      goto switchD_107a62bc_caseD_1;
    }
  }
  else {
    switch(_Size) {
    case 0:
      goto switchD_107a62bc_caseD_0;
    case 1:
      goto switchD_107a62bc_caseD_1;
    case 2:
      goto switchD_107a62bc_caseD_2;
    case 3:
      goto switchD_107a62bc_caseD_3;
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
        puVar4 = (undefined4 *)((int)_Dst + 3);
        if (7 < uVar2) {
          for (; uVar2 != 0; uVar2 = uVar2 - 1) {
            *puVar4 = *(undefined4 *)_Src;
            _Src = (undefined4 *)((int)_Src + 4);
            puVar4 = puVar4 + 1;
          }
          switch(uVar3) {
          case 0:
            return _Dst;
          case 2:
            goto switchD_107a62bc_caseD_2;
          case 3:
            goto switchD_107a62bc_caseD_3;
          }
          goto switchD_107a62bc_caseD_1;
        }
        break;
      case 2:
        uVar3 = uVar2 & 3;
        *(undefined1 *)_Dst = *(undefined1 *)_Src;
        uVar2 = uVar2 >> 2;
        *(undefined1 *)((int)_Dst + 1) = *(undefined1 *)((int)_Src + 1);
        _Src = (void *)((int)_Src + 2);
        puVar4 = (undefined4 *)((int)_Dst + 2);
        if (7 < uVar2) {
          for (; uVar2 != 0; uVar2 = uVar2 - 1) {
            *puVar4 = *(undefined4 *)_Src;
            _Src = (undefined4 *)((int)_Src + 4);
            puVar4 = puVar4 + 1;
          }
          switch(uVar3) {
          case 0:
            return _Dst;
          case 2:
            goto switchD_107a62bc_caseD_2;
          case 3:
            goto switchD_107a62bc_caseD_3;
          }
          goto switchD_107a62bc_caseD_1;
        }
        break;
      case 3:
        uVar3 = uVar2 & 3;
        *(undefined1 *)_Dst = *(undefined1 *)_Src;
        _Src = (void *)((int)_Src + 1);
        uVar2 = uVar2 >> 2;
        puVar4 = (undefined4 *)((int)_Dst + 1);
        if (7 < uVar2) {
          for (; uVar2 != 0; uVar2 = uVar2 - 1) {
            *puVar4 = *(undefined4 *)_Src;
            _Src = (undefined4 *)((int)_Src + 4);
            puVar4 = puVar4 + 1;
          }
          switch(uVar3) {
          case 0:
            return _Dst;
          case 2:
            goto switchD_107a62bc_caseD_2;
          case 3:
            goto switchD_107a62bc_caseD_3;
          }
          goto switchD_107a62bc_caseD_1;
        }
      }
    }
  }
  switch(uVar2) {
  case 7:
    puVar4[uVar2 - 7] = *(undefined4 *)((int)_Src + (uVar2 - 7) * 4);
  case 6:
    puVar4[uVar2 - 6] = *(undefined4 *)((int)_Src + (uVar2 - 6) * 4);
  case 5:
    puVar4[uVar2 - 5] = *(undefined4 *)((int)_Src + (uVar2 - 5) * 4);
  case 4:
    puVar4[uVar2 - 4] = *(undefined4 *)((int)_Src + (uVar2 - 4) * 4);
  case 3:
    puVar4[uVar2 - 3] = *(undefined4 *)((int)_Src + (uVar2 - 3) * 4);
  case 2:
    puVar4[uVar2 - 2] = *(undefined4 *)((int)_Src + (uVar2 - 2) * 4);
  case 1:
    puVar4[uVar2 - 1] = *(undefined4 *)((int)_Src + (uVar2 - 1) * 4);
    _Src = (void *)((int)_Src + uVar2 * 4);
    puVar4 = puVar4 + uVar2;
  }
  switch(uVar3) {
  case 1:
switchD_107a62bc_caseD_1:
    *(undefined1 *)puVar4 = *(undefined1 *)_Src;
    return _Dst;
  case 2:
switchD_107a62bc_caseD_2:
    *(undefined1 *)puVar4 = *(undefined1 *)_Src;
    *(undefined1 *)((int)puVar4 + 1) = *(undefined1 *)((int)_Src + 1);
    return _Dst;
  case 3:
switchD_107a62bc_caseD_3:
    *(undefined1 *)puVar4 = *(undefined1 *)_Src;
    *(undefined1 *)((int)puVar4 + 1) = *(undefined1 *)((int)_Src + 1);
    *(undefined1 *)((int)puVar4 + 2) = *(undefined1 *)((int)_Src + 2);
    return _Dst;
  }
switchD_107a62bc_caseD_0:
  return _Dst;
}


// ==== 107a69d0 __alloca_probe depth=1 from=FUN_1040be50 callees=
// strings: 

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


// ==== 10402b50 FUN_10402b50 depth=1 from=FUN_1040c450 callees=WS2_32.DLL::closesocket@EXTERNAL:0000000d KERNEL32.DLL::DeleteCriticalSection@EXTERNAL:000003e8
// strings: 

void __fastcall FUN_10402b50(int param_1)

{
  if (*(SOCKET *)(param_1 + 0x38) != 0) {
    closesocket(*(SOCKET *)(param_1 + 0x38));
    DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x4efc));
  }
  *(undefined4 *)(param_1 + 0x38) = 0;
  return;
}


// ==== 107a67d9 _memcpy_s depth=1 from=FUN_1040d000 callees=_memset@107a6860 FUN_107ad7bd@107ad7bd FUN_107ad745@107ad745 _memcpy@107a6260
// strings: 

/* Library Function - Single Match
    _memcpy_s
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release */

errno_t __cdecl _memcpy_s(void *_Dst,rsize_t _DstSize,void *_Src,rsize_t _MaxCount)

{
  errno_t eVar1;
  undefined4 *puVar2;
  
  if (_MaxCount == 0) {
LAB_107a67e7:
    eVar1 = 0;
  }
  else {
    if (_Dst == (void *)0x0) {
LAB_107a67f0:
      puVar2 = (undefined4 *)FUN_107ad7bd();
      eVar1 = 0x16;
      *puVar2 = 0x16;
    }
    else {
      if ((_Src != (void *)0x0) && (_MaxCount <= _DstSize)) {
        _memcpy(_Dst,_Src,_MaxCount);
        goto LAB_107a67e7;
      }
      _memset(_Dst,0,_DstSize);
      if (_Src == (void *)0x0) goto LAB_107a67f0;
      if (_MaxCount <= _DstSize) {
        return 0x16;
      }
      puVar2 = (undefined4 *)FUN_107ad7bd();
      eVar1 = 0x22;
      *puVar2 = 0x22;
    }
    FUN_107ad745(0,0,0,0,0);
  }
  return eVar1;
}


// ==== 103254c0 FUN_103254c0 depth=1 from=FUN_1040d4a0 callees=
// strings: 

void FUN_103254c0(undefined4 param_1)

{
  (**(code **)(**(int **)GMalloc_exref + 8))(param_1);
  return;
}


// ==== 103ff730 FUN_103ff730 depth=1 from=FUN_1040d4a0 callees=
// strings: 

void FUN_103ff730(undefined4 param_1)

{
  (**(code **)**(undefined4 **)GMalloc_exref)(param_1,&DAT_10853a28);
  return;
}


// ==== 103ff8c0 FUN_103ff8c0 depth=1 from=FUN_1040eb90 callees=
// strings: 

void __fastcall FUN_103ff8c0(undefined2 *param_1)

{
  *param_1 = 0xffff;
  *(undefined4 *)(param_1 + 2) = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  *(undefined4 *)(param_1 + 0x12) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x16) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x1a) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0xffffffff;
  return;
}


// ==== 104021a0 FUN_104021a0 depth=1 from=FUN_1040ed50 callees=
// strings: 

void __thiscall
FUN_104021a0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6)

{
  *(undefined4 *)(param_1 + 0x4f64) = param_2;
  *(undefined4 *)(param_1 + 0x4f68) = param_3;
  *(undefined4 *)(param_1 + 0x4f9c) = param_4;
  *(undefined4 *)(param_1 + 0x4fa0) = param_5;
  *(undefined4 *)(param_1 + 0x4fa4) = param_6;
  return;
}


// ==== 107a6b24 _free depth=1 from=FUN_10413570 callees=FUN_107a6b7a@107a6b7a ___sbh_free_block@107af8fc KERNEL32.DLL::HeapFree@EXTERNAL:0000040e __lock@107af7b5 KERNEL32.DLL::GetLastError@EXTERNAL:000003f4 __SEH_prolog4@107ac790 FUN_107ad7bd@107ad7bd FUN_107ad782@107ad782 thunk_FUN_107af8f5@107af8d1 __SEH_epilog4@107ac7d5
// strings: 

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    _free
   
   Library: Visual Studio 2005 Release */

void __cdecl _free(void *_Memory)

{
  int iVar1;
  BOOL BVar2;
  undefined4 *puVar3;
  DWORD DVar4;
  undefined4 uVar5;
  
  if (_Memory != (void *)0x0) {
    if (DAT_11d8b2d0 == 3) {
      __lock(4);
      iVar1 = thunk_FUN_107af8f5(_Memory);
      if (iVar1 != 0) {
        ___sbh_free_block(iVar1,_Memory);
      }
      FUN_107a6b7a();
      if (iVar1 != 0) {
        return;
      }
    }
    BVar2 = HeapFree(DAT_11d8969c,0,_Memory);
    if (BVar2 == 0) {
      puVar3 = (undefined4 *)FUN_107ad7bd();
      DVar4 = GetLastError();
      uVar5 = FUN_107ad782(DVar4);
      *puVar3 = uVar5;
    }
  }
  return;
}


// ==== 107a6ccc _malloc depth=1 from=FUN_10413570 callees=FUN_107ad2aa@107ad2aa _V6_HeapAlloc@107a6c08 ___crtExitProcess@107acc13 __callnewh@107b0e01 KERNEL32.DLL::HeapAlloc@EXTERNAL:0000040f __FF_MSGBANNER@107ad46a FUN_107ad7bd@107ad7bd
// strings: 

/* Library Function - Single Match
    _malloc
   
   Library: Visual Studio 2005 Release */

void * __cdecl _malloc(size_t _Size)

{
  LPVOID pvVar1;
  int iVar2;
  undefined4 *puVar3;
  size_t sVar4;
  uint dwBytes;
  
  if (0xffffffe0 < _Size) {
    __callnewh(_Size);
    puVar3 = (undefined4 *)FUN_107ad7bd();
    *puVar3 = 0xc;
    return (void *)0x0;
  }
  do {
    if (DAT_11d8969c == (HANDLE)0x0) {
      __FF_MSGBANNER();
      FUN_107ad2aa(0x1e);
      ___crtExitProcess(0xff);
    }
    if (DAT_11d8b2d0 == 1) {
      dwBytes = _Size;
      if (_Size == 0) {
        dwBytes = 1;
      }
LAB_107a6d3d:
      pvVar1 = HeapAlloc(DAT_11d8969c,0,dwBytes);
    }
    else if ((DAT_11d8b2d0 != 3) || (pvVar1 = (LPVOID)_V6_HeapAlloc(_Size), pvVar1 == (LPVOID)0x0))
    {
      sVar4 = _Size;
      if (_Size == 0) {
        sVar4 = 1;
      }
      dwBytes = sVar4 + 0xf & 0xfffffff0;
      goto LAB_107a6d3d;
    }
    if (pvVar1 != (LPVOID)0x0) {
      return pvVar1;
    }
    if (DAT_11d897f8 == 0) {
      puVar3 = (undefined4 *)FUN_107ad7bd();
      *puVar3 = 0xc;
      goto LAB_107a6d6b;
    }
    iVar2 = __callnewh(_Size);
    if (iVar2 == 0) {
LAB_107a6d6b:
      puVar3 = (undefined4 *)FUN_107ad7bd();
      *puVar3 = 0xc;
      return (void *)0x0;
    }
  } while( true );
}


// ==== 1031509b FL2GameData::GetZoneName depth=1 from=FUN_104156d0 callees=
// strings: 

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


// ==== 1031358e UGameEngine::OnAddVIPItemList depth=1 from=FUN_104183a0 callees=
// strings: 

/* public: void __thiscall
   UGameEngine::OnAddVIPItemList(int,int,int,int,int,int,int,int,int,int,int,int) */

void __thiscall
UGameEngine::OnAddVIPItemList
          (UGameEngine *this,int param_1,int param_2,int param_3,int param_4,int param_5,int param_6
          ,int param_7,int param_8,int param_9,int param_10,int param_11,int param_12)

{
                    /* 0x1358e  6304  ?OnAddVIPItemList@UGameEngine@@QAEXHHHHHHHHHHHH@Z */
                    /* WARNING: Could not recover jumptable at 0x1048b67b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(this + 0x68) + 0x408))();
  return;
}


// ==== 1030f6a5 UGameEngine::OnVIPItemListEnd depth=1 from=FUN_104183a0 callees=
// strings: 

/* public: void __thiscall UGameEngine::OnVIPItemListEnd(void) */

void __thiscall UGameEngine::OnVIPItemListEnd(UGameEngine *this)

{
                    /* 0xf6a5  6677  ?OnVIPItemListEnd@UGameEngine@@QAEXXZ */
                    /* WARNING: Could not recover jumptable at 0x1048b69b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(this + 0x68) + 0x410))();
  return;
}


// ==== 1030e0cf UGameEngine::OnSetVIPShopID depth=1 from=FUN_104183a0 callees=
// strings: 

/* public: void __thiscall UGameEngine::OnSetVIPShopID(int) */

void __thiscall UGameEngine::OnSetVIPShopID(UGameEngine *this,int param_1)

{
                    /* 0xe0cf  6608  ?OnSetVIPShopID@UGameEngine@@QAEXH@Z */
                    /* WARNING: Could not recover jumptable at 0x1048b66b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(this + 0x68) + 0x404))();
  return;
}


// ==== 10309610 UGameEngine::OnAddVIPNeedItemList depth=1 from=FUN_104183a0 callees=
// strings: 

/* public: void __thiscall UGameEngine::OnAddVIPNeedItemList(int,int,int,int,int,int,int,int) */

void __thiscall
UGameEngine::OnAddVIPNeedItemList
          (UGameEngine *this,int param_1,int param_2,int param_3,int param_4,int param_5,int param_6
          ,int param_7,int param_8)

{
                    /* 0x9610  6305  ?OnAddVIPNeedItemList@UGameEngine@@QAEXHHHHHHHH@Z */
                    /* WARNING: Could not recover jumptable at 0x1048b68b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(this + 0x68) + 0x40c))();
  return;
}


// ==== 1032ffc0 FUN_1032ffc0 depth=1 from=FUN_1041cc90 callees=
// strings: 

void FUN_1032ffc0(undefined4 param_1)

{
  (**(code **)**(undefined4 **)GMalloc_exref)(param_1,&DAT_10853a28);
  return;
}


// ==== 10401650 FUN_10401650 depth=1 from=FUN_1041cc90 callees=CORE.DLL::L2ParamStack::~L2ParamStack@EXTERNAL:0000012a
// strings: 

L2ParamStack * __thiscall FUN_10401650(L2ParamStack *param_1,byte param_2)

{
  L2ParamStack::~L2ParamStack(param_1);
  if ((param_2 & 1) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))(param_1);
  }
  return param_1;
}


// ==== 104226e0 FUN_104226e0 depth=1 from=FUN_104245f0 callees=
// strings: 

undefined4 __thiscall FUN_104226e0(int *param_1,uint *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1[3] + (param_1[4] - 1U & *param_2) * 4);
  if (iVar2 != -1) {
    iVar1 = *param_1;
    do {
      if (*(uint *)(iVar1 + 4 + iVar2 * 0xc) == *param_2) {
        return *(undefined4 *)(iVar1 + 8 + iVar2 * 0xc);
      }
      iVar2 = *(int *)(iVar1 + iVar2 * 0xc);
    } while (iVar2 != -1);
  }
  return 0;
}


// ==== 10422800 FUN_10422800 depth=1 from=FUN_10426810 callees=
// strings: 

undefined4 __thiscall FUN_10422800(int *param_1,uint *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1[3] + (param_1[4] - 1U & *param_2) * 4);
  if (iVar2 != -1) {
    iVar1 = *param_1;
    do {
      if (*(uint *)(iVar1 + 4 + iVar2 * 0xc) == *param_2) {
        return *(undefined4 *)(iVar1 + 8 + iVar2 * 0xc);
      }
      iVar2 = *(int *)(iVar1 + iVar2 * 0xc);
    } while (iVar2 != -1);
  }
  return 0;
}


// ==== 10325f90 FUN_10325f90 depth=1 from=FUN_1042b150 callees=CORE.DLL::appFailAssert@EXTERNAL:00000026 CORE.DLL::FArray::Remove@EXTERNAL:00000025 CORE.DLL::FArray::~FArray@EXTERNAL:00000027
// strings: 10851d0c=d:\work\interlude\2007_05_23\warfare2110\core\inc\UnTemplate.h | 10851cec=Index<=ArrayNum | 10851d0c=d:\work\interlude\2007_05_23\warfare2110\core\inc\UnTemplate.h | 10851cd0=Index+Count<=ArrayNum | 

void __fastcall FUN_10325f90(FArray *param_1)

{
  int iVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107efe69;
  local_c = ExceptionList;
  local_4 = 0;
  iVar1 = *(int *)(param_1 + 4);
  ExceptionList = &local_c;
  if (iVar1 < 0) {
    ExceptionList = &local_c;
    appFailAssert("Index<=ArrayNum",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x204);
  }
  if (*(int *)(param_1 + 4) < iVar1) {
    appFailAssert("Index+Count<=ArrayNum",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x205);
  }
  FArray::Remove(param_1,0,iVar1,4);
  local_4 = 0xffffffff;
  FArray::~FArray(param_1);
  ExceptionList = local_c;
  return;
}


// ==== 104225e0 FUN_104225e0 depth=1 from=FUN_1042b150 callees=CORE.DLL::FArray::Add@EXTERNAL:000000a7
// strings: 

void __thiscall FUN_104225e0(FArray *param_1,undefined4 *param_2)

{
  int iVar1;
  
  iVar1 = FArray::Add(param_1,1,4);
  *(undefined4 *)(*(int *)param_1 + iVar1 * 4) = *param_2;
  return;
}


// ==== 10368430 FUN_10368430 depth=1 from=FUN_1042b150 callees=CORE.DLL::FArray::FArray@EXTERNAL:000000b3
// strings: 

FArray * __fastcall FUN_10368430(FArray *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f7729;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(param_1);
  ExceptionList = local_c;
  return param_1;
}


// ==== 1030c82e User::SetNickName depth=1 from=FUN_1042e430 callees=
// strings: 

/* public: void __thiscall User::SetNickName(unsigned short *) */

void __thiscall User::SetNickName(User *this,ushort *param_1)

{
  ushort uVar1;
  int iVar2;
  
                    /* 0xc82e  7932  ?SetNickName@User@@QAEXPAG@Z */
  if ((param_1 != (ushort *)0x0) && (*param_1 != 0)) {
    iVar2 = 0x254 - (int)param_1;
    do {
      uVar1 = *param_1;
      *(ushort *)(this + iVar2 + (int)param_1) = uVar1;
      param_1 = param_1 + 1;
    } while (uVar1 != 0);
    return;
  }
  *(undefined2 *)(this + 0x254) = 0;
  return;
}


// ==== 103254a0 FUN_103254a0 depth=1 from=FUN_1042e430 callees=
// strings: 

void FUN_103254a0(undefined4 param_1)

{
  (**(code **)(**(int **)GMalloc_exref + 8))(param_1);
  return;
}


// ==== 10422f80 FUN_10422f80 depth=1 from=FUN_1042e430 callees=
// strings: 

undefined4 __thiscall FUN_10422f80(int *param_1,uint *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1[3] + (param_1[4] - 1U & *param_2) * 4);
  if (iVar2 != -1) {
    iVar1 = *param_1;
    do {
      if (*(uint *)(iVar1 + 4 + iVar2 * 0xc) == *param_2) {
        return *(undefined4 *)(iVar1 + 8 + iVar2 * 0xc);
      }
      iVar2 = *(int *)(iVar1 + iVar2 * 0xc);
    } while (iVar2 != -1);
  }
  return 0;
}


// ==== 103022f7 User::SetEventmatchEffect depth=1 from=FUN_1042e430 callees=
// strings: 

/* public: void __thiscall User::SetEventmatchEffect(int) */

void __thiscall User::SetEventmatchEffect(User *this,int param_1)

{
  APawn *this_00;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x22f7  7871  ?SetEventmatchEffect@User@@QAEXH@Z */
  puStack_c = &LAB_10815b90;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  this_00 = *(APawn **)(this + 0x204);
  if (this_00 != (APawn *)0x0) {
    if (param_1 == 0) {
      ExceptionList = &pvStack_10;
      APawn::DeleteAppendixEffect(this_00,4);
      APawn::DeleteAppendixEffect(*(APawn **)(this + 0x204),8);
    }
    else if (param_1 == 1) {
      ExceptionList = &pvStack_10;
      APawn::DeleteAppendixEffect(this_00,4);
      APawn::AddAppendixEffect(*(APawn **)(this + 0x204),8);
    }
    else if (param_1 == 2) {
      ExceptionList = &pvStack_10;
      APawn::DeleteAppendixEffect(this_00,8);
      APawn::AddAppendixEffect(*(APawn **)(this + 0x204),4);
    }
  }
  ExceptionList = pvStack_10;
  return;
}


// ==== 1042c470 FUN_1042c470 depth=1 from=FUN_1042e430 callees=thunk_FUN_10423210@103065f5 thunk_FUN_10423490@103115cc
// strings: 

int __thiscall FUN_1042c470(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = 0;
  iVar3 = param_1[1] + -1;
  if (-1 < iVar3) {
    iVar1 = iVar3 * 0xc;
    do {
      if (*(int *)(iVar1 + 4 + *param_1) == *param_2) {
        thunk_FUN_10423490(iVar3,1);
        iVar2 = iVar2 + 1;
      }
      iVar3 = iVar3 + -1;
      iVar1 = iVar1 + -0xc;
    } while (-1 < iVar3);
    if (iVar2 != 0) {
      if (param_1[1] * 2 + 8 < param_1[4]) {
        do {
          param_1[4] = param_1[4] / 2;
        } while (param_1[1] * 2 + 8 < param_1[4]);
      }
      thunk_FUN_10423210();
    }
  }
  return iVar2;
}


// ==== 103072f7 User::SetName depth=1 from=FUN_1042e430 callees=
// strings: 

/* public: void __thiscall User::SetName(unsigned short *) */

void __thiscall User::SetName(User *this,ushort *param_1)

{
  ushort uVar1;
  int iVar2;
  
                    /* 0x72f7  7931  ?SetName@User@@QAEXPAG@Z */
  if ((param_1 != (ushort *)0x0) && (*param_1 != 0)) {
    iVar2 = 0x1c - (int)param_1;
    do {
      uVar1 = *param_1;
      *(ushort *)(this + iVar2 + (int)param_1) = uVar1;
      param_1 = param_1 + 1;
    } while (uVar1 != 0);
    return;
  }
  *(undefined2 *)(this + 0x1c) = 0;
  return;
}


// ==== 10313449 User::User depth=1 from=FUN_1042e430 callees=
// strings: 

/* public: __thiscall User::User(void) */

User * __thiscall User::User(User *this)

{
                    /* 0x13449  1035  ??0User@@QAE@XZ */
  *(undefined4 *)(this + 0x1d4) = 0;
  *(undefined4 *)(this + 0x1e0) = 0;
  *(undefined4 *)(this + 0x1ec) = 0;
  *(undefined4 *)(this + 0x1f8) = 0;
  this[0x2d8] = (User)0x0;
  this[0x2d9] = (User)0x0;
  this[0x2da] = (User)0x0;
  this[0x2db] = (User)0x0;
  this[0x2dc] = (User)0x0;
  this[0x2dd] = (User)0x0;
  this[0x2de] = (User)0x0;
  appMemset(this,0,0x314);
  *(undefined4 *)(this + 0x308) = 0xffffffff;
  return this;
}


// ==== 1042c3f0 FUN_1042c3f0 depth=1 from=FUN_1042e430 callees=thunk_FUN_10423320@1030a196
// strings: 

int __thiscall FUN_1042c3f0(int *param_1,uint *param_2,undefined4 *param_3)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1[3] + (param_1[4] - 1U & *param_2) * 4);
  if (iVar2 != -1) {
    iVar1 = *param_1;
    do {
      if (*(uint *)(iVar1 + 4 + iVar2 * 0xc) == *param_2) {
        *(undefined4 *)(iVar1 + 8 + iVar2 * 0xc) = *param_3;
        return iVar2 * 0xc + 8 + *param_1;
      }
      iVar2 = *(int *)(iVar1 + iVar2 * 0xc);
    } while (iVar2 != -1);
  }
  iVar2 = thunk_FUN_10423320(param_2,param_3);
  return iVar2;
}


// ==== 103ff860 FUN_103ff860 depth=1 from=FUN_1042e430 callees=
// strings: 

void __thiscall FUN_103ff860(int param_1,short *param_2)

{
  short sVar1;
  int iVar2;
  
  if ((param_2 != (short *)0x0) && (*param_2 != 0)) {
    iVar2 = (param_1 + 8) - (int)param_2;
    do {
      sVar1 = *param_2;
      *(short *)(iVar2 + (int)param_2) = sVar1;
      param_2 = param_2 + 1;
    } while (sVar1 != 0);
    return;
  }
  *(undefined2 *)(param_1 + 8) = 0;
  return;
}


// ==== 1030a646 AActor::eventL2GameActionNotify depth=1 from=FUN_1042f8d0 callees=
// strings: 

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: void __thiscall AActor::eventL2GameActionNotify(unsigned char) */

void __thiscall AActor::eventL2GameActionNotify(AActor *this,uchar param_1)

{
  int iVar1;
  UFunction *pUVar2;
  
                    /* 0xa646  9015  ?eventL2GameActionNotify@AActor@@QAEXE@Z */
  iVar1 = *(int *)this;
  pUVar2 = UObject::FindFunctionChecked((UObject *)this,_ENGINE_L2GameActionNotify,0,&param_1,0);
  (**(code **)(iVar1 + 0x10))(pUVar2);
  return;
}


// ==== 1031285f FServerStaticObject::FServerStaticObject depth=1 from=FUN_104304f0 callees=
// strings: 

/* public: __thiscall FServerStaticObject::FServerStaticObject(void) */

void __thiscall FServerStaticObject::FServerStaticObject(FServerStaticObject *this)

{
                    /* 0x1285f  523  ??0FServerStaticObject@@QAE@XZ */
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined4 *)this = 0xffffffff;
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)(this + 0x10) = 0;
  return;
}


// ==== 10314bbe APawn::AddMonsterRaceMgr depth=1 from=FUN_10430780 callees=
// strings: 

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


// ==== 1030411f FNMonsterRaceMgr::CheckMonsterRaceTime depth=1 from=FUN_10430780 callees=
// strings: 

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: void __thiscall FNMonsterRaceMgr::CheckMonsterRaceTime(float,float,int) */

void __thiscall
FNMonsterRaceMgr::CheckMonsterRaceTime
          (FNMonsterRaceMgr *this,float param_1,float param_2,int param_3)

{
  int iVar1;
  int iVar2;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x411f  3569  ?CheckMonsterRaceTime@FNMonsterRaceMgr@@QAEXMMH@Z */
  puStack_c = &LAB_10817f10;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  ExceptionList = &pvStack_10;
  *(float *)(this + 4) = param_1;
  if (param_2 == _DAT_108a4e3c) {
    if (0.0 < param_1 != (param_1 == 0.0)) {
      *(undefined4 *)(this + 8) = 0;
      iVar2 = *(int *)(this + 0x20);
      while (iVar2 = iVar2 + -1, -1 < iVar2) {
        iVar1 = *(int *)(*(int *)(this + 0x1c) + iVar2 * 4);
        if (iVar1 != 0) {
          AController::MoveTo(*(AController **)(*(int *)(iVar1 + 4) + 0x14d8),
                              *(undefined4 *)(iVar1 + 0x14),*(undefined4 *)(iVar1 + 0x18),
                              *(undefined4 *)(iVar1 + 0x1c),0,0x3f800000);
        }
      }
    }
  }
  else if (0.0 < param_1 != (param_1 == 0.0)) {
    if (param_2 <= param_1) {
      *(undefined4 *)(this + 8) = 0;
    }
    else {
      *(float *)(this + 0x14) = param_2;
      *(undefined4 *)(this + 8) = 1;
    }
    iVar2 = *(int *)(this + 0x20);
    while (iVar2 = iVar2 + -1, -1 < iVar2) {
      iVar1 = *(int *)(*(int *)(this + 0x1c) + iVar2 * 4);
      if (iVar1 != 0) {
        AdjustLocation(this,*(APawn **)(iVar1 + 4));
      }
    }
  }
  ExceptionList = pvStack_10;
  return;
}


// ==== 107a6660 FUN_107a6660 depth=1 from=FUN_10430780 callees=
// strings: 

ulonglong __fastcall FUN_107a6660(undefined4 param_1,undefined4 param_2)

{
  ulonglong uVar1;
  uint uVar2;
  float fVar3;
  float10 in_ST0;
  uint uStack_20;
  float fStack_1c;
  
  if (DAT_11d8b2ec == 0) {
    uVar1 = (ulonglong)ROUND(in_ST0);
    uStack_20 = (uint)uVar1;
    fStack_1c = (float)(uVar1 >> 0x20);
    fVar3 = (float)in_ST0;
    if ((uStack_20 != 0) || (fVar3 = fStack_1c, (uVar1 & 0x7fffffff00000000) != 0)) {
      if ((int)fVar3 < 0) {
        uVar1 = uVar1 + (0x80000000 < (uint)-(float)(in_ST0 - (float10)(longlong)uVar1));
      }
      else {
        uVar2 = (uint)(0x80000000 < (uint)(float)(in_ST0 - (float10)(longlong)uVar1));
        uVar1 = CONCAT44((int)fStack_1c - (uint)(uStack_20 < uVar2),uStack_20 - uVar2);
      }
    }
    return uVar1;
  }
  return CONCAT44(param_2,(int)in_ST0);
}


// ==== 10306faf ColosseumFence::ColosseumFence depth=1 from=FUN_10431240 callees=
// strings: 

/* public: __thiscall ColosseumFence::ColosseumFence(void) */

ColosseumFence * __thiscall ColosseumFence::ColosseumFence(ColosseumFence *this)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x6faf  275  ??0ColosseumFence@@QAE@XZ */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_107ffbe4;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FArray::FArray((FArray *)(this + 0x2c));
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)this = 0xffffffff;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x14) = 0;
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined4 *)(this + 0x1c) = 0;
  *(undefined4 *)(this + 0x20) = 0;
  *(undefined4 *)(this + 0x24) = 0;
  *(undefined4 *)(this + 0x28) = 0;
  ExceptionList = pvStack_c;
  return this;
}


// ==== 10368910 FUN_10368910 depth=1 from=FUN_10431500 callees=CORE.DLL::FArray::FArray@EXTERNAL:000000b3
// strings: 

FArray * __fastcall FUN_10368910(FArray *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f7809;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(param_1);
  ExceptionList = local_c;
  return param_1;
}


// ==== 10379630 FUN_10379630 depth=1 from=FUN_10431500 callees=CORE.DLL::FArray::Add@EXTERNAL:000000a7
// strings: 

void __thiscall FUN_10379630(FArray *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  
  iVar2 = FArray::Add(param_1,1,0xc);
  puVar1 = (undefined4 *)(*(int *)param_1 + iVar2 * 0xc);
  *puVar1 = *param_2;
  puVar1[1] = param_2[1];
  puVar1[2] = param_2[2];
  return;
}


// ==== 1038fad0 FUN_1038fad0 depth=1 from=FUN_10431500 callees=CORE.DLL::appFailAssert@EXTERNAL:00000026 CORE.DLL::FArray::Remove@EXTERNAL:00000025 CORE.DLL::FArray::~FArray@EXTERNAL:00000027
// strings: 10851d0c=d:\work\interlude\2007_05_23\warfare2110\core\inc\UnTemplate.h | 10851cec=Index<=ArrayNum | 10851d0c=d:\work\interlude\2007_05_23\warfare2110\core\inc\UnTemplate.h | 10851cd0=Index+Count<=ArrayNum | 

void __fastcall FUN_1038fad0(FArray *param_1)

{
  int iVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107fb899;
  local_c = ExceptionList;
  local_4 = 0;
  iVar1 = *(int *)(param_1 + 4);
  ExceptionList = &local_c;
  if (iVar1 < 0) {
    ExceptionList = &local_c;
    appFailAssert("Index<=ArrayNum",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x204);
  }
  if (*(int *)(param_1 + 4) < iVar1) {
    appFailAssert("Index+Count<=ArrayNum",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x205);
  }
  FArray::Remove(param_1,0,iVar1,0xc);
  local_4 = 0xffffffff;
  FArray::~FArray(param_1);
  ExceptionList = local_c;
  return;
}


// ==== 1030aa47 User::SetAttackItemVariationOption depth=1 from=FUN_104342f0 callees=
// strings: 

/* public: void __thiscall User::SetAttackItemVariationOption(void) */

void __thiscall User::SetAttackItemVariationOption(User *this)

{
                    /* 0xaa47  7806  ?SetAttackItemVariationOption@User@@QAEXXZ */
  if (*(int *)(this + 0x204) != 0) {
    if (this + 0x120 == (User *)0x0) {
      if (this + 0x128 == (User *)0x0) {
        if (this + 0x158 == (User *)0x0) {
          *(undefined4 *)(*(int *)(this + 0x204) + 0x1834) = 0;
          *(undefined4 *)(*(int *)(this + 0x204) + 0x1838) = 0;
        }
        else {
          *(undefined4 *)(*(int *)(this + 0x204) + 0x1834) = *(undefined4 *)(this + 0x158);
          *(undefined4 *)(*(int *)(this + 0x204) + 0x1838) = *(undefined4 *)(this + 0x15c);
        }
      }
      else {
        *(undefined4 *)(*(int *)(this + 0x204) + 0x1834) = *(undefined4 *)(this + 0x128);
        *(undefined4 *)(*(int *)(this + 0x204) + 0x1838) = *(undefined4 *)(this + 300);
      }
    }
    else {
      *(undefined4 *)(*(int *)(this + 0x204) + 0x1834) = *(undefined4 *)(this + 0x120);
      *(undefined4 *)(*(int *)(this + 0x204) + 0x1838) = *(undefined4 *)(this + 0x124);
    }
  }
  return;
}


// ==== 10305394 User::GetItemClassID depth=1 from=FUN_104342f0 callees=
// strings: 

/* public: int __thiscall User::GetItemClassID(int) */

int __thiscall User::GetItemClassID(User *this,int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  User *pUVar4;
  bool bVar5;
  int iStack_1c;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x5394  4669  ?GetItemClassID@User@@QAEHH@Z */
  puStack_c = &LAB_10815be0;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  iStack_1c = 0;
  if (*(int *)(this + 0x94) == 0) {
    switch(param_1) {
    case 0:
      iStack_1c = *(int *)(this + 0xc0);
      if (((iStack_1c < 1) ||
          (ExceptionList = &pvStack_10, iVar2 = thunk_FUN_10422ee0(this + 0xc0), iVar2 == 0)) ||
         ((*(int *)(iVar2 + 4) != 1 || ((*(int *)(iVar2 + 0xd4) != 0x10 || (iStack_1c == 0)))))) {
        iStack_1c = *(int *)(this + 200);
      }
      break;
    case 1:
      iStack_1c = *(int *)(this + 0xc0);
      if (((((iStack_1c < 1) ||
            (ExceptionList = &pvStack_10, iVar2 = thunk_FUN_10422ee0(this + 0xc0), iVar2 == 0)) ||
           (*(int *)(iVar2 + 4) != 1)) ||
          ((*(int *)(iVar2 + 0xd4) != 0xf && (*(int *)(iVar2 + 0xd4) != 0x10)))) || (iStack_1c == 0)
         ) {
        iStack_1c = *(int *)(this + 0xc4);
      }
      break;
    case 2:
      iStack_1c = *(int *)(this + 0xc0);
      break;
    case 3:
      iStack_1c = *(int *)(this + 0xc0);
      if (((iStack_1c < 1) ||
          (ExceptionList = &pvStack_10, iVar2 = thunk_FUN_10422ee0(this + 0xc0), iVar2 == 0)) ||
         ((*(int *)(iVar2 + 4) != 1 || ((*(int *)(iVar2 + 0xd4) != 0x10 || (iStack_1c == 0)))))) {
        iStack_1c = *(int *)(this + 0xbc);
      }
      break;
    default:
      goto switchD_10482146_caseD_4;
    case 6:
      iStack_1c = *(int *)(this + 0xb0);
      if (iStack_1c < 1) {
        return 0;
      }
      break;
    case 7:
      iStack_1c = *(int *)(this + 0xdc);
      break;
    case 8:
      iStack_1c = *(int *)(this + 0xe0);
      break;
    case 10:
      iStack_1c = *(int *)(this + 0xb4);
      if (iStack_1c < 1) {
        iStack_1c = *(int *)(this + 0xd0);
        if (iStack_1c < 1) {
          return 0;
        }
        ExceptionList = &pvStack_10;
        iVar2 = thunk_FUN_10422ee0(this + 0xd0);
        if (iVar2 == 0) {
          ExceptionList = pvStack_10;
          return 0;
        }
        if (*(int *)(iVar2 + 4) != 0) {
          ExceptionList = pvStack_10;
          return 0;
        }
        iVar2 = *(int *)(iVar2 + 0xd8);
      }
      else {
        ExceptionList = &pvStack_10;
        iVar2 = thunk_FUN_10422ee0(this + 0xb4);
        if (iVar2 == 0) {
          ExceptionList = pvStack_10;
          return 0;
        }
        if (*(int *)(iVar2 + 4) != 0) {
          ExceptionList = pvStack_10;
          return 0;
        }
        iVar2 = *(int *)(iVar2 + 0xd8);
      }
      if (iVar2 == 5) {
        ExceptionList = pvStack_10;
        return 0;
      }
      break;
    case 0xb:
      pUVar4 = this + 0xd0;
      iVar2 = *(int *)pUVar4;
      if ((0 < iVar2) && (0 < *(int *)(this + 0xb8))) {
        ExceptionList = &pvStack_10;
        iVar3 = thunk_FUN_10422ee0(pUVar4);
        if (iVar3 == 0) {
          ExceptionList = pvStack_10;
          return 0;
        }
        if (*(int *)(iVar3 + 4) != 0) {
          ExceptionList = pvStack_10;
          return 0;
        }
        iStack_1c = iVar2;
        if (*(int *)(iVar3 + 0xd8) != 5) {
          ExceptionList = pvStack_10;
          return 0;
        }
        break;
      }
      iStack_1c = *(int *)(this + 0xb8);
      if (0 < iStack_1c) {
        ExceptionList = &pvStack_10;
        iVar2 = thunk_FUN_10422ee0(this + 0xb8);
        if (iVar2 == 0) {
          ExceptionList = pvStack_10;
          return 0;
        }
        if (*(int *)(iVar2 + 4) != 0) {
          ExceptionList = pvStack_10;
          return 0;
        }
        if (*(int *)(iVar2 + 0xd8) != 1) {
          if (*(int *)(this + 8) == 0) {
            ExceptionList = pvStack_10;
            return 0;
          }
          iVar2 = *(int *)(iVar2 + 0xd8);
          if ((iVar2 != 5) && (iVar2 != 3)) {
            bVar5 = iVar2 == 7;
            goto LAB_104827be;
          }
        }
        break;
      }
      if (0 < iVar2) {
        ExceptionList = &pvStack_10;
        iVar3 = thunk_FUN_10422ee0(pUVar4);
        if (iVar3 == 0) {
          ExceptionList = pvStack_10;
          return 0;
        }
        if (*(int *)(iVar3 + 4) != 0) {
          ExceptionList = pvStack_10;
          return 0;
        }
        iVar3 = *(int *)(iVar3 + 0xd8);
        iStack_1c = iVar2;
        if (((iVar3 != 5) && (iVar3 != 3)) && (iVar3 != 7)) {
          ExceptionList = pvStack_10;
          return 0;
        }
        break;
      }
      iStack_1c = *(int *)(this + 0xb4);
      if (iStack_1c < 1) {
        return 0;
      }
      ExceptionList = &pvStack_10;
      iVar2 = thunk_FUN_10422ee0(this + 0xb4);
      if (iVar2 == 0) {
        ExceptionList = pvStack_10;
        return 0;
      }
      if (*(int *)(iVar2 + 4) != 0) {
        ExceptionList = pvStack_10;
        return 0;
      }
      bVar5 = *(int *)(iVar2 + 0xd8) == 5;
      goto LAB_104827be;
    case 0xc:
      pUVar4 = this + 0xd0;
      iStack_1c = *(int *)pUVar4;
      if (iStack_1c < 1) {
        pUVar4 = this + 0xb4;
        goto LAB_1048278f;
      }
      goto LAB_10482799;
    case 0xd:
      pUVar4 = this + 0xb8;
LAB_1048278f:
      iStack_1c = *(int *)pUVar4;
      if (iStack_1c < 1) {
        return 0;
      }
LAB_10482799:
      ExceptionList = &pvStack_10;
      iVar2 = thunk_FUN_10422ee0(pUVar4);
      if (iVar2 == 0) {
        ExceptionList = pvStack_10;
        return 0;
      }
      if (*(int *)(iVar2 + 4) != 0) {
        ExceptionList = pvStack_10;
        return 0;
      }
      bVar5 = *(int *)(iVar2 + 0xd8) == 0;
LAB_104827be:
      if (!bVar5) {
        ExceptionList = pvStack_10;
        return 0;
      }
      break;
    case 0xe:
      iStack_1c = *(int *)(this + 0xcc);
    }
    goto LAB_10482975;
  }
  switch(param_1) {
  case 0:
    ExceptionList = &pvStack_10;
    if ((((*(int *)(this + 0xc0) < 1) ||
         (ExceptionList = &pvStack_10,
         iVar2 = (**(code **)(**(int **)(DAT_10c51044 + 0x60) + 0xa0))(*(int *)(this + 0xc0)),
         iVar2 == 0)) || (iVar3 = thunk_FUN_10422ee0(iVar2 + 4), iVar3 == 0)) ||
       ((*(int *)(iVar3 + 4) != 1 || (*(int *)(iVar3 + 0xd4) != 0x10)))) {
      iVar2 = *(int *)(this + 200);
LAB_1048263a:
      if (iVar2 < 1) {
        ExceptionList = pvStack_10;
        return 0;
      }
      iVar2 = (**(code **)(**(int **)(DAT_10c51044 + 0x60) + 0xa0))(iVar2);
      break;
    }
    iStack_1c = *(int *)(iVar2 + 4);
    goto LAB_10482975;
  case 1:
    ExceptionList = &pvStack_10;
    if (((*(int *)(this + 0xc0) < 1) ||
        (ExceptionList = &pvStack_10,
        iVar2 = (**(code **)(**(int **)(DAT_10c51044 + 0x60) + 0xa0))(*(int *)(this + 0xc0)),
        iVar2 == 0)) ||
       (((iVar3 = thunk_FUN_10422ee0(iVar2 + 4), iVar3 == 0 || (*(int *)(iVar3 + 4) != 1)) ||
        ((*(int *)(iVar3 + 0xd4) != 0xf && (*(int *)(iVar3 + 0xd4) != 0x10)))))) {
      iVar2 = *(int *)(this + 0xc4);
      goto LAB_1048263a;
    }
    iStack_1c = *(int *)(iVar2 + 4);
    goto LAB_10482975;
  case 2:
    iVar2 = *(int *)(this + 0xc0);
    goto LAB_10482218;
  case 3:
    ExceptionList = &pvStack_10;
    if ((((*(int *)(this + 0xc0) < 1) ||
         (ExceptionList = &pvStack_10,
         iVar2 = (**(code **)(**(int **)(DAT_10c51044 + 0x60) + 0xa0))(*(int *)(this + 0xc0)),
         iVar2 == 0)) || (iVar3 = thunk_FUN_10422ee0(iVar2 + 4), iVar3 == 0)) ||
       ((*(int *)(iVar3 + 4) != 1 || (*(int *)(iVar3 + 0xd4) != 0x10)))) {
      iVar2 = *(int *)(this + 0xbc);
      goto LAB_1048263a;
    }
    iStack_1c = *(int *)(iVar2 + 4);
    goto LAB_10482975;
  default:
    goto switchD_10482146_caseD_4;
  case 6:
    iVar2 = *(int *)(this + 0xb0);
LAB_10482218:
    if (iVar2 < 1) {
      return 0;
    }
    ExceptionList = &pvStack_10;
    iVar2 = (**(code **)(**(int **)(DAT_10c51044 + 0x60) + 0xa0))(iVar2);
    break;
  case 7:
    iVar2 = *(int *)(this + 0xdc);
    goto LAB_104822a8;
  case 8:
    ExceptionList = &pvStack_10;
    if (((*(int *)(this + 0xdc) < 1) ||
        (ExceptionList = &pvStack_10,
        iVar2 = (**(code **)(**(int **)(DAT_10c51044 + 0x60) + 0xa0))(*(int *)(this + 0xdc)),
        iVar2 == 0)) ||
       ((iVar3 = thunk_FUN_10422ee0(iVar2 + 4), iVar3 == 0 ||
        ((*(int *)(iVar3 + 4) != 1 || (*(int *)(iVar3 + 0xd4) != 0x13)))))) {
      iVar2 = *(int *)(this + 0xe0);
      goto LAB_1048263a;
    }
    iStack_1c = *(int *)(iVar2 + 4);
    goto LAB_10482975;
  case 10:
    if (*(int *)(this + 0xb4) < 1) {
      if (*(int *)(this + 0xd0) < 1) {
        return 0;
      }
      ExceptionList = &pvStack_10;
      iVar2 = (**(code **)(**(int **)(DAT_10c51044 + 0x60) + 0xa0))(*(int *)(this + 0xd0));
    }
    else {
      ExceptionList = &pvStack_10;
      iVar2 = (**(code **)(**(int **)(DAT_10c51044 + 0x60) + 0xa0))(*(int *)(this + 0xb4));
    }
    if (iVar2 == 0) {
      ExceptionList = pvStack_10;
      return 0;
    }
    iVar3 = thunk_FUN_10422ee0(iVar2 + 4);
    if (((iVar3 != 0) && (*(int *)(iVar3 + 4) == 0)) && (*(int *)(iVar3 + 0xd8) == 5)) {
      ExceptionList = pvStack_10;
      return 0;
    }
    break;
  case 0xb:
    iVar2 = *(int *)(this + 0xd0);
    if ((iVar2 < 1) || (*(int *)(this + 0xb8) < 1)) {
      if (*(int *)(this + 0xb8) < 1) {
        if (iVar2 < 1) {
          if (*(int *)(this + 0xb4) < 1) {
            return 0;
          }
          ExceptionList = &pvStack_10;
          iVar2 = (**(code **)(**(int **)(DAT_10c51044 + 0x60) + 0xa0))(*(int *)(this + 0xb4));
          goto joined_r0x1048252c;
        }
        ExceptionList = &pvStack_10;
        iVar2 = (**(code **)(**(int **)(DAT_10c51044 + 0x60) + 0xa0))(iVar2);
        if (iVar2 == 0) {
          ExceptionList = pvStack_10;
          return 0;
        }
        iVar3 = thunk_FUN_10422ee0(iVar2 + 4);
        if ((((iVar3 != 0) && (*(int *)(iVar3 + 4) == 0)) &&
            (iVar3 = *(int *)(iVar3 + 0xd8), iVar3 != 5)) && (iVar3 != 3)) {
          bVar5 = iVar3 == 7;
          goto LAB_1048231c;
        }
      }
      else {
        ExceptionList = &pvStack_10;
        iVar2 = (**(code **)(**(int **)(DAT_10c51044 + 0x60) + 0xa0))(*(int *)(this + 0xb8));
        if (iVar2 == 0) {
          ExceptionList = pvStack_10;
          return 0;
        }
        iVar3 = thunk_FUN_10422ee0(iVar2 + 4);
        if (iVar3 != 0) {
          iVar1 = *(int *)(iVar3 + 4);
          if ((iVar1 == 0) && (*(int *)(iVar3 + 0xd8) != 1)) {
            iVar2 = 0;
          }
          goto joined_r0x104823c0;
        }
      }
    }
    else {
      ExceptionList = &pvStack_10;
      iVar2 = (**(code **)(**(int **)(DAT_10c51044 + 0x60) + 0xa0))(iVar2);
joined_r0x1048252c:
      if (iVar2 == 0) {
        ExceptionList = pvStack_10;
        return 0;
      }
      iVar3 = thunk_FUN_10422ee0(iVar2 + 4);
      if ((iVar3 != 0) && (*(int *)(iVar3 + 4) == 0)) {
        bVar5 = *(int *)(iVar3 + 0xd8) == 5;
        goto LAB_1048231c;
      }
    }
    break;
  case 0xc:
    if (*(int *)(this + 0xb4) < 1) {
      if (*(int *)(this + 0xd0) < 1) {
        return 0;
      }
      ExceptionList = &pvStack_10;
      iVar2 = (**(code **)(**(int **)(DAT_10c51044 + 0x60) + 0xa0))(*(int *)(this + 0xd0));
    }
    else {
      ExceptionList = &pvStack_10;
      iVar2 = (**(code **)(**(int **)(DAT_10c51044 + 0x60) + 0xa0))(*(int *)(this + 0xb4));
    }
    if (iVar2 == 0) {
      ExceptionList = pvStack_10;
      return 0;
    }
    iVar3 = thunk_FUN_10422ee0(iVar2 + 4);
    if ((iVar3 != 0) && (*(int *)(iVar3 + 4) == 0)) {
      bVar5 = *(int *)(iVar3 + 0xd8) == 0;
LAB_1048231c:
      if (!bVar5) {
        ExceptionList = pvStack_10;
        return 0;
      }
    }
    break;
  case 0xd:
    if (*(int *)(this + 0xb8) < 1) {
      return 0;
    }
    ExceptionList = &pvStack_10;
    iVar2 = (**(code **)(**(int **)(DAT_10c51044 + 0x60) + 0xa0))(*(int *)(this + 0xb8));
    if (iVar2 == 0) {
      ExceptionList = pvStack_10;
      return 0;
    }
    iVar3 = thunk_FUN_10422ee0(iVar2 + 4);
    if (iVar3 != 0) {
      iVar1 = *(int *)(iVar3 + 4);
      if ((iVar1 == 0) && (*(int *)(iVar3 + 0xd8) != 0)) {
        iVar2 = 0;
      }
joined_r0x104823c0:
      if (iVar1 == 2) {
        ExceptionList = pvStack_10;
        return 0;
      }
    }
    break;
  case 0xe:
    iVar2 = *(int *)(this + 0xcc);
LAB_104822a8:
    if (iVar2 < 1) {
      return 0;
    }
    ExceptionList = &pvStack_10;
    iVar2 = (**(code **)(**(int **)(DAT_10c51044 + 0x60) + 0xa0))(iVar2);
  }
  if (iVar2 != 0) {
    iStack_1c = *(int *)(iVar2 + 4);
LAB_10482975:
    if (iStack_1c < 0) {
      iStack_1c = 0;
    }
  }
switchD_10482146_caseD_4:
  ExceptionList = pvStack_10;
  return iStack_1c;
}


// ==== 1030a871 APawn::CheckCubicStatus depth=1 from=FUN_104342f0 callees=
// strings: 

/* public: void __thiscall APawn::CheckCubicStatus(short,short *) */

void __thiscall APawn::CheckCubicStatus(APawn *this,short param_1,short *param_2)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0xa871  3528  ?CheckCubicStatus@APawn@@QAEXFPAF@Z */
  puStack_c = &LAB_10818930;
  pvStack_10 = ExceptionList;
  iVar3 = 0;
  uStack_8 = 0;
  ExceptionList = &pvStack_10;
  if (0 < param_1) {
    for (; iVar3 < param_1; iVar3 = iVar3 + 1) {
      bVar1 = false;
      for (iVar2 = 0; iVar2 < *(int *)(this + 0x1678); iVar2 = iVar2 + 1) {
        if (param_2[iVar3] ==
            (ushort)*(byte *)(*(int *)(*(int *)(this + 0x1674) + iVar2 * 4) + 0x4dc)) {
          bVar1 = true;
        }
      }
      if (!bVar1) {
        AddNCubic(this,(int)param_2[iVar3]);
      }
    }
    for (iVar3 = 0; iVar3 < *(int *)(this + 0x1678); iVar3 = iVar3 + 1) {
      bVar1 = false;
      for (iVar2 = 0; iVar2 < param_1; iVar2 = iVar2 + 1) {
        if (param_2[iVar2] ==
            (ushort)*(byte *)(*(int *)(*(int *)(this + 0x1674) + iVar3 * 4) + 0x4dc)) {
          bVar1 = true;
        }
      }
      if (!bVar1) {
        DeleteNCubic(this,(uint)*(byte *)(*(int *)(*(int *)(this + 0x1674) + iVar3 * 4) + 0x4dc));
      }
    }
    for (iVar3 = 0; iVar3 < *(int *)(this + 0x1678); iVar3 = iVar3 + 1) {
      *(int *)(*(int *)(*(int *)(this + 0x1674) + iVar3 * 4) + 0x4ec) = iVar3;
    }
    ExceptionList = pvStack_10;
    return;
  }
  ExceptionList = &pvStack_10;
  DeleteAllNCubic(this);
  ExceptionList = pvStack_10;
  return;
}


// ==== 104317d0 FUN_104317d0 depth=1 from=FUN_104342f0 callees=thunk_FUN_10420ff0@10310041 thunk_FUN_1042c540@10313e17 thunk_FUN_103ff760@1030459d
// strings: 1088ab78=PledgeInfo | 

void FUN_104317d0(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  int *piVar1;
  int iVar2;
  int unaff_retaddr;
  undefined1 auStack_8 [4];
  int local_4;
  
  if (*(int *)GL2ReplayMode_exref == 0) {
    piVar1 = (int *)(**(code **)(*DAT_10b1f538 + 0xac))(param_1);
    if (piVar1 == (int *)0x0) {
      iVar2 = (**(code **)**(undefined4 **)GMalloc_exref)(0xe8,L"PledgeInfo");
      if (iVar2 == 0) {
        piVar1 = (int *)0x0;
      }
      else {
        piVar1 = (int *)thunk_FUN_103ff760();
      }
      *piVar1 = param_1;
      piVar1[0x20] = local_4;
      piVar1[0x26] = unaff_retaddr;
      piVar1[0x33] = param_1;
      piVar1[0x37] = param_2;
      if (param_3 != -0x80000000) {
        piVar1[0x1d] = param_3;
      }
      thunk_FUN_1042c540(auStack_8,&stack0xffffffec);
      (**(code **)(*DAT_10b1f538 + 0x1c0))(param_1);
      param_2 = unaff_retaddr;
      param_3 = param_1;
    }
    else {
      *piVar1 = param_1;
      piVar1[0x20] = param_1;
      piVar1[0x37] = param_4;
      if (piVar1[0x26] != param_2) {
        (**(code **)(*DAT_10b1f538 + 0x1c0))(param_1);
      }
      piVar1[0x26] = param_2;
      piVar1[0x33] = param_3;
      if (param_5 != -0x80000000) {
        piVar1[0x1d] = param_5;
      }
    }
    thunk_FUN_10420ff0(param_1,param_1,param_2,param_3,param_4);
  }
  return;
}


// ==== 1030bef6 APawn::NActionStop depth=1 from=FUN_104342f0 callees=
// strings: 

/* public: void __thiscall APawn::NActionStop(void) */

void __thiscall APawn::NActionStop(APawn *this)

{
  int iVar1;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0xbef6  6210  ?NActionStop@APawn@@QAEXXZ */
  puStack_c = &LAB_108233f0;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  iVar1 = *(int *)(this + 0x62c);
  if (iVar1 == 6) {
    return;
  }
  if (((iVar1 == 1) || (iVar1 == 2)) || (iVar1 == 8)) {
    ExceptionList = &pvStack_10;
    AttackStop(this);
  }
  else {
    ExceptionList = &pvStack_10;
    if (iVar1 == 5) {
      ExceptionList = &pvStack_10;
      MagicStop(this);
    }
  }
  FNMagicInfo::Clear((FNMagicInfo *)(this + 0x4f0),1);
  *(undefined4 *)(this + 0x62c) = 0;
  *(undefined4 *)(this + 0x63c) = 0;
  for (iVar1 = 0; iVar1 < *(int *)(this + 0x650); iVar1 = iVar1 + 1) {
  }
  FArray::Empty((FArray *)(this + 0x64c),0x10,0);
  *(undefined4 *)(this + 0x640) = 0;
  *(undefined4 *)(this + 0x644) = 0;
  NPrimeActionEnd(this);
  *(undefined4 *)(this + 0x74c) = 0;
  *(undefined4 *)(this + 0x750) = 0;
  *(undefined4 *)(this + 0x754) = 0;
  ExceptionList = pvStack_10;
  return;
}


// ==== 10422ee0 FUN_10422ee0 depth=1 from=FUN_104342f0 callees=
// strings: 

undefined4 __thiscall FUN_10422ee0(int *param_1,uint *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1[3] + (param_1[4] - 1U & *param_2) * 4);
  if (iVar2 != -1) {
    iVar1 = *param_1;
    do {
      if (*(uint *)(iVar1 + 4 + iVar2 * 0xc) == *param_2) {
        return *(undefined4 *)(iVar1 + 8 + iVar2 * 0xc);
      }
      iVar2 = *(int *)(iVar1 + iVar2 * 0xc);
    } while (iVar2 != -1);
  }
  return 0;
}


// ==== 10303742 User::HasBootsSound depth=1 from=FUN_104342f0 callees=
// strings: 

/* public: int __thiscall User::HasBootsSound(int) */

int __thiscall User::HasBootsSound(User *this,int param_1)

{
  int iVar1;
  int iVar2;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x3742  5350  ?HasBootsSound@User@@QAEHH@Z */
  iVar1 = param_1;
  puStack_c = &LAB_10815c60;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  if (param_1 != 0) {
    ExceptionList = &pvStack_10;
    iVar2 = thunk_FUN_10422ee0(&param_1);
    if (((iVar2 != 0) && (*(int *)(iVar2 + 4) == 1)) && (*(int *)(iVar2 + 0x5b4) != 0)) {
      ExceptionList = pvStack_10;
      return iVar1;
    }
  }
  ExceptionList = pvStack_10;
  return 0;
}


// ==== 1030c3ab AActor::SetCollisionSize depth=1 from=FUN_104342f0 callees=
// strings: 

/* public: void __thiscall AActor::SetCollisionSize(float,float) */

void __thiscall AActor::SetCollisionSize(AActor *this,float param_1,float param_2)

{
  int iVar1;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0xc3ab  7846  ?SetCollisionSize@AActor@@QAEXMM@Z */
  puStack_c = &LAB_1081a710;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  ExceptionList = &pvStack_10;
  if (((((byte)this[0x2f8] & 1) != 0) &&
      (iVar1 = *(int *)(this + 0xe4), ExceptionList = &pvStack_10, iVar1 != 0)) &&
     (ExceptionList = &pvStack_10, *(int *)(iVar1 + 0x120) != 0)) {
    ExceptionList = &pvStack_10;
    (**(code **)(**(int **)(iVar1 + 0x120) + 0xc))(this);
  }
  *(float *)(this + 0x2f0) = param_1;
  *(float *)(this + 0x2f4) = param_2;
  if (((((byte)this[0x2f8] & 1) != 0) && (iVar1 = *(int *)(this + 0xe4), iVar1 != 0)) &&
     (*(int *)(iVar1 + 0x120) != 0)) {
    (**(code **)(**(int **)(iVar1 + 0x120) + 8))(this);
  }
  *(uint *)(this + 0x74) = *(uint *)(this + 0x74) | 0x800;
  ExceptionList = pvStack_10;
  return;
}


// ==== 103095e8 UNetworkHandler::NotifyQuestMark depth=1 from=FUN_104342f0 callees=
// strings: 

/* public: void __thiscall UNetworkHandler::NotifyQuestMark(void) */

void __thiscall UNetworkHandler::NotifyQuestMark(UNetworkHandler *this)

{
  int iVar1;
  APawn *this_00;
  int iVar2;
  int iVar3;
  int *piVar4;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x95e8  6268  ?NotifyQuestMark@UNetworkHandler@@QAEXXZ */
  iVar2 = DAT_10b1f538;
  puStack_8 = &LAB_108104c8;
  pvStack_c = ExceptionList;
  iVar3 = 0;
  piVar4 = (int *)(DAT_10b1f538 + 0x1a8);
  uStack_4 = 0;
  ExceptionList = &pvStack_c;
  if (0 < *(int *)(DAT_10b1f538 + 0x1ac)) {
    do {
      iVar1 = *(int *)(*piVar4 + 8 + iVar3 * 0xc);
      if ((iVar1 != 0) && (this_00 = *(APawn **)(iVar1 + 0x204), this_00 != (APawn *)0x0)) {
        APawn::RefreshQuestMark(this_00);
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(iVar2 + 0x1ac));
  }
  ExceptionList = pvStack_c;
  return;
}


// ==== 1042c300 FUN_1042c300 depth=1 from=FUN_10438c20 callees=thunk_FUN_10423150@1030d96d
// strings: 

int __thiscall FUN_1042c300(int *param_1,uint *param_2,undefined4 *param_3)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1[3] + (param_1[4] - 1U & *param_2) * 4);
  if (iVar2 != -1) {
    iVar1 = *param_1;
    do {
      if (*(uint *)(iVar1 + 4 + iVar2 * 0xc) == *param_2) {
        *(undefined4 *)(iVar1 + 8 + iVar2 * 0xc) = *param_3;
        return iVar2 * 0xc + 8 + *param_1;
      }
      iVar2 = *(int *)(iVar1 + iVar2 * 0xc);
    } while (iVar2 != -1);
  }
  iVar2 = thunk_FUN_10423150(param_2,param_3);
  return iVar2;
}


// ==== 10423040 FUN_10423040 depth=1 from=FUN_10438c20 callees=
// strings: 10852f38=HashMapHash | 

void __fastcall FUN_10423040(int *param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  iVar1 = (**(code **)**(undefined4 **)GMalloc_exref)
                    ((uint)((ulonglong)(uint)param_1[4] * 4) |
                     -(uint)((int)((ulonglong)(uint)param_1[4] * 4 >> 0x20) != 0),L"HashMapHash");
  iVar2 = 0;
  if (0 < param_1[4]) {
    do {
      *(undefined4 *)(iVar1 + iVar2 * 4) = 0xffffffff;
      iVar2 = iVar2 + 1;
    } while (iVar2 < param_1[4]);
  }
  iVar2 = 0;
  if (0 < param_1[1]) {
    iVar4 = 0;
    do {
      uVar3 = *(uint *)(*param_1 + 4 + iVar4) & param_1[4] - 1U;
      *(undefined4 *)(*param_1 + iVar4) = *(undefined4 *)(iVar1 + uVar3 * 4);
      *(int *)(iVar1 + uVar3 * 4) = iVar2;
      iVar2 = iVar2 + 1;
      iVar4 = iVar4 + 0xc;
    } while (iVar2 < param_1[1]);
  }
  if (param_1[3] != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))(param_1[3]);
  }
  param_1[3] = iVar1;
  return;
}


// ==== 1042c5f0 FUN_1042c5f0 depth=1 from=FUN_10439400 callees=thunk_FUN_10423840@10308a30
// strings: 

int __thiscall FUN_1042c5f0(int *param_1,uint *param_2,undefined4 *param_3)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1[3] + (param_1[4] - 1U & *param_2) * 4);
  if (iVar2 != -1) {
    iVar1 = *param_1;
    do {
      if (*(uint *)(iVar1 + 4 + iVar2 * 0xc) == *param_2) {
        *(undefined4 *)(iVar1 + 8 + iVar2 * 0xc) = *param_3;
        return iVar2 * 0xc + 8 + *param_1;
      }
      iVar2 = *(int *)(iVar1 + iVar2 * 0xc);
    } while (iVar2 != -1);
  }
  iVar2 = thunk_FUN_10423840(param_2,param_3);
  return iVar2;
}


// ==== 1042c670 FUN_1042c670 depth=1 from=FUN_10439400 callees=thunk_FUN_104238d0@1030d530 thunk_FUN_10423730@1031068b
// strings: 

int __thiscall FUN_1042c670(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = 0;
  iVar3 = param_1[1] + -1;
  if (-1 < iVar3) {
    iVar1 = iVar3 * 0xc;
    do {
      if (*(int *)(iVar1 + 4 + *param_1) == *param_2) {
        thunk_FUN_104238d0(iVar3,1);
        iVar2 = iVar2 + 1;
      }
      iVar3 = iVar3 + -1;
      iVar1 = iVar1 + -0xc;
    } while (-1 < iVar3);
    if (iVar2 != 0) {
      if (param_1[1] * 2 + 8 < param_1[4]) {
        do {
          param_1[4] = param_1[4] / 2;
        } while (param_1[1] * 2 + 8 < param_1[4]);
      }
      thunk_FUN_10423730();
    }
  }
  return iVar2;
}


// ==== 10431a90 FUN_10431a90 depth=1 from=FUN_104397b0 callees=thunk_FUN_104227a0@1030ad49 thunk_FUN_1042c5f0@103136ba thunk_FUN_1042c670@1030b087
// strings: 

void FUN_10431a90(undefined4 param_1)

{
  undefined4 uVar1;
  int *piVar2;
  
  uVar1 = param_1;
  piVar2 = (int *)thunk_FUN_104227a0(param_1);
  if ((piVar2 != (int *)0x0) && (*piVar2 != 0)) {
    (**(code **)(**(int **)GMalloc_exref + 8))(*piVar2);
    *piVar2 = 0;
    thunk_FUN_1042c670(uVar1);
  }
  thunk_FUN_1042c5f0(uVar1,&param_1);
  return;
}


// ==== 104319c0 FUN_104319c0 depth=1 from=FUN_10439a10 callees=thunk_FUN_10423730@1031068b CORE.DLL::FArray::Realloc@EXTERNAL:00000110
// strings: 

void __fastcall FUN_104319c0(int param_1)

{
  int iVar1;
  int iVar2;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_108102a8;
  pvStack_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &pvStack_c;
  if (0 < *(int *)(param_1 + 0x4f54)) {
    iVar2 = 0;
    ExceptionList = &pvStack_c;
    do {
      iVar1 = *(int *)(*(int *)(param_1 + 0x4f50) + 8 + iVar2 * 0xc);
      if (iVar1 != 0) {
        (**(code **)(**(int **)GMalloc_exref + 8))(iVar1);
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)(param_1 + 0x4f54));
  }
  local_4 = 0xffffffff;
  *(undefined4 *)(param_1 + 0x4f54) = 0;
  *(undefined4 *)(param_1 + 0x4f58) = 0;
  FArray::Realloc((FArray *)(param_1 + 0x4f50),0xc);
  *(undefined4 *)(param_1 + 0x4f60) = 8;
  thunk_FUN_10423730();
  ExceptionList = pvStack_c;
  return;
}


// ==== 104227a0 FUN_104227a0 depth=1 from=FUN_10439ac0 callees=
// strings: 

int __thiscall FUN_104227a0(int *param_1,uint *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1[3] + (param_1[4] - 1U & *param_2) * 4);
  if (iVar2 != -1) {
    iVar1 = *param_1;
    do {
      if (*(uint *)(iVar1 + 4 + iVar2 * 0xc) == *param_2) {
        return iVar1 + 8 + iVar2 * 0xc;
      }
      iVar2 = *(int *)(iVar1 + iVar2 * 0xc);
    } while (iVar2 != -1);
  }
  return 0;
}


// ==== 103ff8a0 FUN_103ff8a0 depth=1 from=FUN_10439c20 callees=
// strings: 

void __fastcall FUN_103ff8a0(int param_1)

{
  *(undefined2 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xac) = 0;
  *(undefined4 *)(param_1 + 4) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xb4) = 0;
  return;
}


// ==== 1042d1c0 FUN_1042d1c0 depth=1 from=FUN_10439c20 callees=CORE.DLL::FArray::Realloc@EXTERNAL:00000110 CORE.DLL::appMemset@EXTERNAL:000000c9 thunk_FUN_10423040@103064d3
// strings: 

void __fastcall FUN_1042d1c0(FArray *param_1)

{
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  FArray::Realloc(param_1,0xc);
  *(undefined4 *)(param_1 + 0x10) = 8;
  thunk_FUN_10423040();
  appMemset(param_1 + 0x14,0,0x80);
  return;
}


// ==== 10431960 FUN_10431960 depth=1 from=FUN_10439c20 callees=CORE.DLL::FArray::Realloc@EXTERNAL:00000110 thunk_FUN_10423040@103064d3
// strings: 

void __fastcall FUN_10431960(int param_1)

{
  *(undefined4 *)(param_1 + 0x4f40) = 0;
  *(undefined4 *)(param_1 + 0x4f44) = 0;
  FArray::Realloc((FArray *)(param_1 + 0x4f3c),0xc);
  *(undefined4 *)(param_1 + 0x4f4c) = 8;
  thunk_FUN_10423040();
  return;
}


// ==== 10431700 FUN_10431700 depth=1 from=FUN_10439c20 callees=CORE.DLL::FArray::Realloc@EXTERNAL:00000110 thunk_FUN_10423560@10309cff
// strings: 

void __fastcall FUN_10431700(int param_1)

{
  int iVar1;
  int iVar2;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_10810288;
  pvStack_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &pvStack_c;
  if (0 < *(int *)(param_1 + 0x4f2c)) {
    iVar2 = 0;
    ExceptionList = &pvStack_c;
    do {
      iVar1 = *(int *)(*(int *)(param_1 + 0x4f28) + 8 + iVar2 * 0xc);
      if (iVar1 != 0) {
        (**(code **)(**(int **)GMalloc_exref + 8))(iVar1);
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)(param_1 + 0x4f2c));
  }
  local_4 = 0xffffffff;
  *(undefined4 *)(param_1 + 0x4f2c) = 0;
  *(undefined4 *)(param_1 + 0x4f30) = 0;
  FArray::Realloc((FArray *)(param_1 + 0x4f28),0xc);
  *(undefined4 *)(param_1 + 0x4f38) = 8;
  thunk_FUN_10423560();
  ExceptionList = pvStack_c;
  return;
}


// ==== 10314583 User::SetPawnResource depth=1 from=FUN_1043a470 callees=
// strings: 

/* public: void __thiscall User::SetPawnResource(void) */

void __thiscall User::SetPawnResource(User *this)

{
  APawn *pAVar1;
  User *pUVar2;
  undefined1 *puVar3;
  FName *pFVar4;
  int iVar5;
  FName *pFVar6;
  ushort *puVar7;
  UClass *pUVar8;
  undefined4 *puVar9;
  undefined4 uVar10;
  User *this_00;
  code *pcVar11;
  APawn *pAVar12;
  int iVar13;
  undefined1 **ppuVar14;
  int iVar15;
  ulong uVar16;
  UPackageMap *pUVar17;
  FRotator aFStack_78 [12];
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  FName aFStack_5c [4];
  FName aFStack_58 [4];
  undefined1 auStack_54 [4];
  undefined1 auStack_50 [4];
  undefined1 *apuStack_4c [2];
  int iStack_44;
  int iStack_40;
  int iStack_3c;
  int iStack_38;
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  int iStack_28;
  undefined4 *puStack_24;
  int iStack_20;
  APawn *pAStack_1c;
  User *pUStack_18;
  undefined1 *puStack_14;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x14583  7963  ?SetPawnResource@User@@QAEXXZ */
  puStack_c = &LAB_10815d10;
  pvStack_10 = ExceptionList;
  puStack_14 = &stack0xffffff7c;
  uStack_8 = 0;
  if (*(int *)(this + 0x204) == 0) {
    return;
  }
  pAVar1 = *(APawn **)(this + 0x204);
  pAStack_1c = (APawn *)0x0;
  pAVar12 = pAVar1;
  ExceptionList = &pvStack_10;
  pUStack_18 = this;
  puVar3 = &stack0xffffff7c;
  if ((*(int *)(pAVar1 + 0x718) != 0) &&
     (pAVar12 = *(APawn **)(pAVar1 + 0x718), ExceptionList = &pvStack_10, pAStack_1c = pAVar1,
     puVar3 = &stack0xffffff7c, pAVar1 != (APawn *)0x0)) {
    ExceptionList = &pvStack_10;
    puVar3 = &stack0xffffff7c;
    if ((pAVar12 != (APawn *)0x0) &&
       (ExceptionList = &pvStack_10, puVar3 = &stack0xffffff7c, pAVar12[0x71c] == (APawn)0x1)) {
      ExceptionList = &pvStack_10;
      FName::FName((FName *)&puStack_24,(ushort *)L"LineageWeapons.HeadGear_m00",1);
      (**(code **)(*(int *)pAVar1 + 0xd0))(7);
      puVar3 = puStack_14;
    }
    puStack_14 = puVar3;
    pAVar1[0x71d] = (APawn)0x0;
    FName::FName((FName *)&puStack_24,(ushort *)L"NONE",1);
    pFVar6 = (FName *)apuStack_4c;
    pFVar4 = (FName *)GetDamageEffect(this);
    iVar5 = FName::operator!=(pFVar4,pFVar6);
    puVar3 = puStack_14;
    if (iVar5 != 0) {
      pUVar17 = (UPackageMap *)0x0;
      uVar16 = 0;
      ppuVar14 = apuStack_4c;
      pFVar6 = (FName *)GetDamageEffect(this);
      puVar7 = FName::operator*(pFVar6);
      pUVar8 = UObject::StaticLoadClass
                         (&AEmitter::PrivateStaticClass,(UObject *)0x0,puVar7,(ushort *)ppuVar14,
                          uVar16,pUVar17);
      *(UClass **)(pAVar1 + 0x6e8) = pUVar8;
      puVar3 = puStack_14;
    }
  }
  puStack_14 = puVar3;
  if (*(int *)(this + 8) == 0) {
    iVar5 = 0;
    while (iStack_40 = iVar5, iVar5 < 0x10) {
      if ((pAStack_1c == (APawn *)0x0) ||
         ((((iVar5 != 0xb && (iVar5 != 10)) && (iVar5 != 0xd)) && (iVar5 != 0xc)))) {
        iVar13 = *(int *)pAVar12;
        puVar9 = (undefined4 *)GetPcMeshName(pUStack_18,(int)auStack_50);
        (**(code **)(iVar13 + 0xd0))(iVar5,*puVar9);
        iStack_20 = 0;
        while (pUVar2 = pUStack_18, iVar13 = GetPcTexNum(pUStack_18,iVar5), iStack_20 < iVar13) {
          iVar13 = *(int *)pAVar12;
          iVar15 = iStack_20;
          puVar9 = (undefined4 *)GetPcTexName(pUStack_18,(int)auStack_54,iVar5);
          (**(code **)(iVar13 + 0xd4))(iVar5,*puVar9,iStack_20,iVar15);
          iStack_20 = iStack_20 + 1;
        }
        iVar15 = iVar5;
        puStack_24 = (undefined4 *)GetPcExTexName(pUVar2,(int)aFStack_58);
        iVar13 = iVar5;
        puVar9 = (undefined4 *)GetPcExMeshName(pUVar2,(int)aFStack_5c);
        APawn::SetExMeshesNTexes(pAVar12,iVar5,*puVar9,*puStack_24,iVar13,iVar15);
        iVar5 = iVar5 + 1;
      }
      else {
        iVar13 = *(int *)pAVar12;
        FName::FName((FName *)apuStack_4c,0);
        (**(code **)(iVar13 + 0xd0))(iVar5);
        iVar5 = iVar5 + 1;
      }
    }
    goto LAB_10487895;
  }
  iVar5 = *(int *)pAVar12;
  puVar9 = (undefined4 *)GetNpcMeshName(this);
  (**(code **)(iVar5 + 0xd0))(9,*puVar9);
  puStack_24 = (undefined4 *)GetNpcTexNum(this);
  for (iVar5 = 0; iStack_28 = iVar5, iVar5 < (int)puStack_24; iVar5 = iVar5 + 1) {
    iVar13 = *(int *)pAVar12;
    puVar9 = (undefined4 *)GetNpcTexName(pUStack_18,(int)apuStack_4c);
    (**(code **)(iVar13 + 0xd4))(9,*puVar9);
    this = pUStack_18;
  }
  if (pAStack_1c == (APawn *)0x0) {
    pAStack_1c = (APawn *)GetItemClassID(this,10);
    if ((int)pAStack_1c < 1) {
      iVar5 = *(int *)pAVar12;
      apuStack_4c[0] = &stack0xffffff74;
      FName::FName((FName *)&stack0xffffff74,0);
      (**(code **)(iVar5 + 0xd0))(10);
    }
    else {
      iVar5 = thunk_FUN_10422ee0();
      if ((iVar5 != 0) && (*(int *)(iVar5 + 4) == 0)) {
        if ((*(int *)(iVar5 + 0xd8) == 3) || (*(int *)(iVar5 + 0xd8) == 7)) {
          (**(code **)(*(int *)pAVar12 + 0xd0))(10);
          (**(code **)(*(int *)pAVar12 + 0xd4))(10,*(undefined4 *)(iVar5 + 0xf4),0);
        }
        else {
          (**(code **)(*(int *)pAVar12 + 0xd0))(10);
          for (iVar13 = 0; this = pUStack_18, iStack_2c = iVar13, iVar13 < *(int *)(iVar5 + 0xf0);
              iVar13 = iVar13 + 1) {
            (**(code **)(*(int *)pAVar12 + 0xd4))(10);
          }
        }
      }
    }
    pAStack_1c = (APawn *)GetItemClassID(this,0xb);
    if ((int)pAStack_1c < 1) {
      iVar5 = *(int *)pAVar12;
      apuStack_4c[0] = &stack0xffffff74;
      FName::FName((FName *)&stack0xffffff74,0);
      (**(code **)(iVar5 + 0xd0))(0xb);
    }
    else {
      iVar5 = thunk_FUN_10422ee0();
      if ((iVar5 != 0) && (*(int *)(iVar5 + 4) == 0)) {
        if ((*(int *)(iVar5 + 0xd8) == 3) || (*(int *)(iVar5 + 0xd8) == 7)) {
          (**(code **)(*(int *)pAVar12 + 0xd0))(0xb);
          (**(code **)(*(int *)pAVar12 + 0xd4))(0xb,*(undefined4 *)(iVar5 + 0xf8),1);
        }
        else {
          (**(code **)(*(int *)pAVar12 + 0xd0))(0xb);
          for (iVar13 = 0; iStack_30 = iVar13, iVar13 < *(int *)(iVar5 + 0xf0); iVar13 = iVar13 + 1)
          {
            (**(code **)(*(int *)pAVar12 + 0xd4))(0xb);
          }
        }
      }
    }
    pAStack_1c = (APawn *)GetItemClassID(pUStack_18,0xc);
    if ((int)pAStack_1c < 1) {
      iVar5 = *(int *)pAVar12;
      apuStack_4c[0] = &stack0xffffff74;
      FName::FName((FName *)&stack0xffffff74,0);
      (**(code **)(iVar5 + 0xd0))(0xc);
    }
    else {
      iVar5 = thunk_FUN_10422ee0();
      if ((iVar5 != 0) && (*(int *)(iVar5 + 4) == 0)) {
        (**(code **)(*(int *)pAVar12 + 0xd0))(0xc);
        for (iVar13 = 0; iStack_34 = iVar13, iVar13 < *(int *)(iVar5 + 0xf0); iVar13 = iVar13 + 1) {
          (**(code **)(*(int *)pAVar12 + 0xd4))(0xc);
        }
      }
    }
    pAStack_1c = (APawn *)GetItemClassID(pUStack_18,0xd);
    if ((int)pAStack_1c < 1) {
      iVar5 = *(int *)pAVar12;
      apuStack_4c[0] = &stack0xffffff74;
      FName::FName((FName *)&stack0xffffff74,0);
      uVar10 = 0xd;
      pcVar11 = *(code **)(iVar5 + 0xd0);
      goto LAB_104877b0;
    }
    iVar5 = thunk_FUN_10422ee0();
    if ((iVar5 != 0) && (*(int *)(iVar5 + 4) == 0)) {
      (**(code **)(*(int *)pAVar12 + 0xd0))(0xd);
      for (iVar13 = 0; iStack_38 = iVar13, iVar13 < *(int *)(iVar5 + 0xf0); iVar13 = iVar13 + 1) {
        (**(code **)(*(int *)pAVar12 + 0xd4))(0xd);
      }
    }
  }
  else {
    iVar5 = *(int *)pAVar12;
    FName::FName((FName *)apuStack_4c,0);
    (**(code **)(iVar5 + 0xd0))(0xb);
    iVar5 = *(int *)pAVar12;
    puVar9 = (undefined4 *)FName::FName((FName *)apuStack_4c,0);
    (**(code **)(iVar5 + 0xd0))(10,*puVar9,0);
    iVar5 = *(int *)pAVar12;
    puVar9 = (undefined4 *)FName::FName((FName *)apuStack_4c,0);
    (**(code **)(iVar5 + 0xd0))(0xd,*puVar9,0);
    iVar5 = *(int *)pAVar12;
    FName::FName((FName *)apuStack_4c,0);
    uVar10 = 0xc;
    pcVar11 = *(code **)(iVar5 + 0xd0);
LAB_104877b0:
    (*pcVar11)(uVar10);
  }
  pAStack_1c = (APawn *)GetItemClassID(pUStack_18,2);
  if ((int)pAStack_1c < 1) {
    iVar5 = *(int *)pAVar12;
    apuStack_4c[0] = &stack0xffffff74;
    FName::FName((FName *)&stack0xffffff74,0);
    (**(code **)(iVar5 + 0xd0))(2);
  }
  else {
    iVar5 = thunk_FUN_10422ee0();
    if ((iVar5 != 0) && (*(int *)(iVar5 + 4) == 1)) {
      (**(code **)(*(int *)pAVar12 + 0xd0))(2);
      for (iVar13 = 0; iStack_3c = iVar13, iVar13 < *(int *)(iVar5 + 0x59c); iVar13 = iVar13 + 1) {
        (**(code **)(*(int *)pAVar12 + 0xd4))(2);
      }
    }
  }
  iVar5 = thunk_FUN_10422f80();
  if ((iVar5 != 0) && (*(int *)(iVar5 + 0x60) != 0)) {
    pAVar12[0x3b0] = (APawn)0x2;
    pAVar12[0x628] = **(APawn **)(iVar5 + 0x60);
    pAVar12[0x629] = *(APawn *)(*(int *)(iVar5 + 0x60) + 6);
    pAVar12[0x62a] = *(APawn *)(*(int *)(iVar5 + 0x60) + 5);
    pAVar12[0x62b] = *(APawn *)(*(int *)(iVar5 + 0x60) + 4);
  }
LAB_10487895:
  pUVar2 = pUStack_18;
  iVar5 = GetAnimType(pUStack_18,pAVar12);
  pAVar12[0x71d] = SUB41(iVar5,0);
  if (SUB41(iVar5,0) == (APawn)0x5) {
    GetArrowItemID(pUVar2);
  }
  FName::FName(aFStack_5c,(ushort *)L"NONE",1);
  pFVar6 = aFStack_58;
  pFVar4 = (FName *)GetDamageEffect(pUVar2);
  iVar5 = FName::operator!=(pFVar4,pFVar6);
  if (iVar5 != 0) {
    pUVar17 = (UPackageMap *)0x0;
    uVar16 = 0;
    pFVar6 = aFStack_5c;
    pFVar4 = (FName *)GetDamageEffect(pUVar2);
    puVar7 = FName::operator*(pFVar4);
    pUVar8 = UObject::StaticLoadClass
                       (&AEmitter::PrivateStaticClass,(UObject *)0x0,puVar7,(ushort *)pFVar6,uVar16,
                        pUVar17);
    *(UClass **)(pAVar12 + 0x6e8) = pUVar8;
  }
  for (iVar5 = 0; iVar5 < 2; iVar5 = iVar5 + 1) {
    uStack_6c = 0;
    uStack_68 = 0;
    uStack_64 = 0;
    *(undefined4 *)(pAVar12 + iVar5 * 0xc + 0x188c) = 0;
    *(undefined4 *)(pAVar12 + iVar5 * 0xc + 0x1890) = 0;
    *(undefined4 *)(pAVar12 + iVar5 * 0xc + 0x1894) = 0;
    iStack_44 = iVar5;
    puVar9 = (undefined4 *)FRotator::FRotator(aFStack_78,0,0,0);
    *(undefined4 *)(pAVar12 + iVar5 * 0xc + 0x18a4) = *puVar9;
    *(undefined4 *)(pAVar12 + iVar5 * 0xc + 0x18a8) = puVar9[1];
    *(undefined4 *)(pAVar12 + iVar5 * 0xc + 0x18ac) = puVar9[2];
    iVar13 = HaveItem(pUStack_18,iVar5 + 0x11);
    if (iVar13 != 0) {
      uVar10 = GetPcMeshName(this_00,(int)aFStack_5c);
      iVar13 = thunk_FUN_10458eb0(uVar10);
      if (iVar13 != 0) {
        puVar9 = (undefined4 *)(iVar13 + 4 + *(int *)(pUStack_18 + 0x240) * 0xc);
        *(undefined4 *)(pAVar12 + iVar5 * 0xc + 0x188c) = *puVar9;
        *(undefined4 *)(pAVar12 + iVar5 * 0xc + 0x1890) = puVar9[1];
        *(undefined4 *)(pAVar12 + iVar5 * 0xc + 0x1894) = puVar9[2];
        puVar9 = (undefined4 *)(iVar13 + 0xb8 + *(int *)(pUStack_18 + 0x240) * 0xc);
        *(undefined4 *)(pAVar12 + iVar5 * 0xc + 0x18a4) = *puVar9;
        *(undefined4 *)(pAVar12 + iVar5 * 0xc + 0x18a8) = puVar9[1];
        *(undefined4 *)(pAVar12 + iVar5 * 0xc + 0x18ac) = puVar9[2];
      }
    }
  }
  *(uint *)(pAVar12 + 0x18c8) = *(uint *)(pAVar12 + 0x18c8) | 1;
  *(uint *)(pAVar12 + 0x18d4) = *(uint *)(pAVar12 + 0x18d4) & 0xfffffffe;
  ExceptionList = pvStack_10;
  return;
}


// ==== 1042c7d0 FUN_1042c7d0 depth=1 from=FUN_1043a470 callees=thunk_FUN_10423ab0@1030e1dd
// strings: 

int __thiscall FUN_1042c7d0(int *param_1,uint *param_2,undefined4 *param_3)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1[3] + (param_1[4] - 1U & *param_2) * 4);
  if (iVar2 != -1) {
    iVar1 = *param_1;
    do {
      if (*(uint *)(iVar1 + 4 + iVar2 * 0xc) == *param_2) {
        *(undefined4 *)(iVar1 + 8 + iVar2 * 0xc) = *param_3;
        return iVar2 * 0xc + 8 + *param_1;
      }
      iVar2 = *(int *)(iVar1 + iVar2 * 0xc);
    } while (iVar2 != -1);
  }
  iVar2 = thunk_FUN_10423ab0(param_2,param_3);
  return iVar2;
}


// ==== 10401d60 FUN_10401d60 depth=1 from=FUN_1043a470 callees=WS2_32.DLL::closesocket@EXTERNAL:0000000d KERNEL32.DLL::DeleteCriticalSection@EXTERNAL:000003e8
// strings: 

void __fastcall FUN_10401d60(int param_1)

{
  if (*(SOCKET *)(param_1 + 0x38) != 0) {
    closesocket(*(SOCKET *)(param_1 + 0x38));
    DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x4efc));
  }
  *(undefined4 *)(param_1 + 0x38) = 0;
  if (*(int *)(param_1 + 0x495c) != 0) {
    *(undefined4 *)(param_1 + 0x495c) = 0;
    DAT_10b1f53c = 0;
  }
  return;
}


