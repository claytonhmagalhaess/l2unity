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


// ==== 10401350 FUN_10401350 depth=0 from=raiz callees=
// strings: 

uint FUN_10401350(void)

{
  return (uint)ExceptionList & 0xffffff00;
}


// ==== 10414a30 FUN_10414a30 depth=0 from=raiz callees=thunk_FUN_104026b0@103034e5 CORE.DLL::FOutputDevice::Logf@EXTERNAL:000000b4
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


// ==== 10415110 FUN_10415110 depth=0 from=raiz callees=CORE.DLL::appStrcpy@EXTERNAL:0000012c thunk_FUN_104026b0@103034e5
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


// ==== 104186a0 FUN_104186a0 depth=0 from=raiz callees=thunk_FUN_104026b0@103034e5 CORE.DLL::FOutputDevice::Logf@EXTERNAL:000000b4
// strings: 10886db4=(Receive)NetPingPacket | 

uint FUN_104186a0(int param_1,undefined4 param_2)

{
  uint extraout_EAX;
  
  thunk_FUN_104026b0(*(undefined4 *)(param_1 + 0x48),param_2,&DAT_1087ff8c,&param_1);
  (**(code **)(*DAT_10b1f538 + 0x448))(param_1);
  FOutputDevice::Logf(*(FOutputDevice **)GNetworkLog_exref,
                      (ushort *)*(FOutputDevice **)GNetworkLog_exref);
  return extraout_EAX & 0xffffff00;
}


// ==== 1041e380 FUN_1041e380 depth=0 from=raiz callees=thunk_FUN_104026b0@103034e5 thunk_FUN_1036f7b0@1030ed2c
// strings: 

uint FUN_1041e380(int param_1,undefined4 param_2)

{
  UClass *pUVar1;
  undefined4 *puVar2;
  int iVar3;
  UClass *pUVar4;
  undefined4 uVar5;
  UClass *pUVar6;
  char cStack_ad9;
  float fStack_ad8;
  UClass *pUStack_ad4;
  float fStack_ad0;
  float fStack_acc;
  UClass *pUStack_ac8;
  float fStack_ac4;
  float fStack_ac0;
  float fStack_abc;
  int iStack_ab8;
  int iStack_ab4;
  int iStack_ab0;
  int iStack_aac;
  int iStack_aa8;
  int iStack_aa4;
  int iStack_aa0;
  int iStack_a9c;
  int iStack_a98;
  int iStack_a94;
  int iStack_a90;
  int iStack_a8c;
  int iStack_a88;
  int iStack_a84;
  float fStack_a80;
  float fStack_a7c;
  float fStack_a78;
  int iStack_a74;
  int iStack_a70;
  float fStack_a6c;
  float fStack_a68;
  float fStack_a64;
  float fStack_a60;
  float fStack_a5c;
  float fStack_a58;
  float fStack_a54;
  int iStack_a50;
  float fStack_a4c;
  float fStack_a48;
  float fStack_a44;
  float fStack_a40;
  FString aFStack_a3c [12];
  float fStack_a30;
  float fStack_a2c;
  float fStack_a28;
  float fStack_a24;
  float fStack_a20;
  float fStack_a1c;
  float fStack_a18;
  FString aFStack_a14 [12];
  float fStack_a08;
  float fStack_a04;
  float fStack_a00;
  float fStack_9fc;
  float fStack_9f8;
  float fStack_9f4;
  float fStack_9f0;
  float fStack_9ec;
  float fStack_9e8;
  float fStack_9e4;
  FName aFStack_9e0 [4];
  ushort auStack_9dc [256];
  ushort auStack_7dc [1000];
  void *pvStack_c;
  undefined *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &UNK_1080f88e;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  pUVar1 = (UClass *)
           thunk_FUN_104026b0(*(undefined4 *)(param_1 + 0x48),param_2,"Sdddddd",0x200,auStack_9dc,
                              &iStack_a9c,&iStack_aa0,&iStack_a98,&iStack_a90,&iStack_a70,
                              &iStack_ab8);
  pUVar6 = pUVar1;
  if (iStack_ab8 != 0) {
    pUStack_ad4 = UObject::StaticLoadClass
                            (&AInfo::PrivateStaticClass,(UObject *)0x0,
                             (ushort *)L"Engine.ServerPrimitive",(ushort *)0x0,1,(UPackageMap *)0x0)
    ;
    pUVar6 = (UClass *)0x0;
    if (pUStack_ad4 != (UClass *)0x0) {
      pUStack_ac8 = (UClass *)(float)iStack_a9c;
      iVar3 = **(int **)(DAT_10c51044 + 0x19c);
      fStack_ad8 = (float)iStack_aa0;
      fStack_ad0 = (float)iStack_a98;
      fStack_ac4 = (float)pUStack_ac8;
      fStack_ac0 = fStack_ad8;
      fStack_abc = fStack_ad0;
      puVar2 = (undefined4 *)FName::FName(aFStack_9e0,auStack_9dc,1);
      iVar3 = (**(code **)(iVar3 + 0xc0))
                        (pUStack_ad4,*puVar2,fStack_ac4,fStack_ac0,fStack_abc,0,0,0,0,0,0,0,0);
      pUVar4 = *(UClass **)(iVar3 + 0x24);
      *(undefined1 *)(iVar3 + 0x9c) = 9;
      *(float *)(iVar3 + 0x2f0) = (float)iStack_a90;
      *(float *)(iVar3 + 0x2f4) = (float)iStack_a70;
      pUVar6 = (UClass *)0x0;
      if (pUVar4 != (UClass *)0x0) {
        do {
          if (pUVar4 == &AServerPrimitive::PrivateStaticClass) {
            pUStack_ac8 = (UClass *)0x0;
            pUVar6 = &AServerPrimitive::PrivateStaticClass;
            if (0 < iStack_ab8) {
              do {
                pUVar1 = (UClass *)
                         thunk_FUN_104026b0(*(undefined4 *)(param_1 + 0x48),pUVar1,&DAT_1087f9dc,
                                            &cStack_ad9);
                if (cStack_ad9 == '\x01') {
                  pUVar1 = (UClass *)
                           thunk_FUN_104026b0(*(undefined4 *)(param_1 + 0x48),pUVar1,"Sddddddd",2000
                                              ,auStack_7dc,&iStack_ab4,&iStack_a94,&iStack_a74,
                                              &iStack_a8c,&iStack_a88,&iStack_a50,&iStack_aa8);
                  FString::FString(aFStack_a3c);
                  uStack_4 = 1;
                  FString::operator=(aFStack_a3c,auStack_7dc);
                  fStack_ac4 = (float)iStack_a88;
                  fStack_ac0 = (float)iStack_a50;
                  fStack_abc = (float)iStack_aa8;
                  fStack_a4c = (float)iStack_ab4;
                  fStack_a48 = (float)iStack_a94;
                  fStack_acc = (float)iStack_a74;
                  fStack_a40 = (float)iStack_a8c;
                  fStack_a44 = fStack_acc;
                  fStack_a30 = fStack_ac4;
                  fStack_a2c = fStack_ac0;
                  fStack_a28 = fStack_abc;
                  fStack_a24 = fStack_a4c;
                  fStack_a20 = fStack_a48;
                  fStack_a1c = fStack_acc;
                  fStack_a18 = fStack_a40;
                  FArray::AddZeroed((FArray *)(iVar3 + 0x3bc),0x28,1);
                  func_0x10313cc3(aFStack_a3c);
                  uStack_4 = 0xffffffff;
                  FString::~FString(aFStack_a3c);
                }
                else if (cStack_ad9 == '\x02') {
                  func_0x1030a5ce();
                  uStack_4 = 3;
                  uVar5 = thunk_FUN_104026b0(*(undefined4 *)(param_1 + 0x48),pUVar1,&UNK_10887fd4,
                                             2000,auStack_7dc,&iStack_a84,&iStack_ab0,&iStack_aac,
                                             &iStack_aa4);
                  FString::operator=(aFStack_a14,auStack_7dc);
                  fStack_a6c = (float)iStack_a84;
                  fStack_a68 = (float)iStack_ab0;
                  fStack_a64 = (float)iStack_aac;
                  fStack_acc = (float)iStack_aa4;
                  fStack_a60 = fStack_acc;
                  fStack_9f0 = fStack_a6c;
                  fStack_9ec = fStack_a68;
                  fStack_9e8 = fStack_a64;
                  fStack_9e4 = fStack_acc;
                  uVar5 = thunk_FUN_104026b0(*(undefined4 *)(param_1 + 0x48),uVar5,&DAT_1087ff0c,
                                             &pUStack_ad4,&fStack_ad0,&fStack_ad8);
                  fStack_a80 = (float)(int)pUStack_ad4;
                  fStack_a7c = (float)(int)fStack_ad0;
                  fStack_a78 = (float)(int)fStack_ad8;
                  fStack_a08 = fStack_a80;
                  fStack_a04 = fStack_a7c;
                  fStack_a00 = fStack_a78;
                  pUVar1 = (UClass *)
                           thunk_FUN_104026b0(*(undefined4 *)(param_1 + 0x48),uVar5,&DAT_1087ff0c,
                                              &pUStack_ad4,&fStack_ad0,&fStack_ad8);
                  fStack_a5c = (float)(int)pUStack_ad4;
                  fStack_a58 = (float)(int)fStack_ad0;
                  fStack_a54 = (float)(int)fStack_ad8;
                  fStack_9fc = fStack_a5c;
                  fStack_9f8 = fStack_a58;
                  fStack_9f4 = fStack_a54;
                  FArray::AddZeroed((FArray *)(iVar3 + 0x3c8),0x34,1);
                  func_0x103067f3(aFStack_a14);
                  uStack_4 = 0xffffffff;
                  thunk_FUN_1036f7b0();
                }
                pUVar6 = pUStack_ac8 + 1;
                pUStack_ac8 = pUVar6;
              } while ((int)pUVar6 < iStack_ab8);
            }
            goto LAB_1041e91a;
          }
          pUVar4 = *(UClass **)(pUVar4 + 0x34);
        } while (pUVar4 != (UClass *)0x0);
        pUVar6 = (UClass *)0x0;
      }
    }
  }
LAB_1041e91a:
  ExceptionList = pvStack_c;
  return (uint)pUVar6 & 0xffffff00;
}


// ==== 10424500 FUN_10424500 depth=0 from=raiz callees=KERNEL32.DLL::DeleteCriticalSection@EXTERNAL:000003e8 thunk_FUN_10420c60@1030f82b thunk_FUN_104026b0@103034e5 WS2_32.DLL::closesocket@EXTERNAL:0000000d WS2_32.DLL::inet_ntoa@EXTERNAL:00000006
// strings: 

uint FUN_10424500(int param_1,undefined4 param_2)

{
  int iVar1;
  char *pcVar2;
  uint uVar3;
  undefined4 uVar4;
  
  thunk_FUN_104026b0(*(undefined4 *)(param_1 + 0x4c),param_2,&DAT_1087ff44,&DAT_10b20f50,
                     &DAT_10b20f4c);
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
  *(undefined4 *)(*(int *)(DAT_10b1f538 + 0x4c) + 0x50bc) = 1;
  uVar4 = DAT_10b20f48;
  pcVar2 = inet_ntoa((in_addr)DAT_10b20f44.S_un_b);
  uVar3 = thunk_FUN_10420c60(pcVar2,uVar4);
  *(undefined4 *)(param_1 + 0x50) = 2;
  return uVar3 & 0xffffff00;
}


// ==== 10426810 FUN_10426810 depth=0 from=raiz callees=thunk_FUN_104026b0@103034e5 thunk_FUN_10422800@1030e3ef
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


// ==== 10429a60 FUN_10429a60 depth=0 from=raiz callees=thunk_FUN_104026b0@103034e5 thunk_FUN_104226e0@1030d04e CORE.DLL::FStringNoInit::operator=@EXTERNAL:000000da CORE.DLL::FOutputDevice::Logf@EXTERNAL:000000b4
// strings: 10889da0=(Receive)PrivateStoreMsg MSG : %s | 

uint FUN_10429a60(int param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  uint extraout_EAX;
  undefined4 uStack_404;
  ushort auStack_400 [512];
  
  uStack_404 = 0;
  thunk_FUN_104026b0(*(undefined4 *)(param_1 + 0x48),param_2,&DAT_10886b28,&uStack_404,0x400,
                     auStack_400);
  if ((((DAT_10b1f538 != 0) && (iVar1 = thunk_FUN_104226e0(&uStack_404), iVar1 != 0)) &&
      (piVar2 = (int *)thunk_FUN_104226e0(&uStack_404), *piVar2 == 1)) &&
     ((iVar1 = thunk_FUN_104226e0(&uStack_404), *(int *)(iVar1 + 4) != 0 &&
      (iVar1 = thunk_FUN_104226e0(&uStack_404), *(int *)(iVar1 + 4) != 0)))) {
    iVar1 = thunk_FUN_104226e0(&uStack_404);
    if ((iVar1 == 0) ||
       ((piVar2 = (int *)thunk_FUN_104226e0(&uStack_404), *piVar2 != 1 ||
        (iVar1 = thunk_FUN_104226e0(&uStack_404), *(int *)(iVar1 + 4) == 0)))) {
      iVar1 = 0;
    }
    else {
      iVar1 = thunk_FUN_104226e0(&uStack_404);
      iVar1 = *(int *)(iVar1 + 4);
    }
    if (*(int *)(iVar1 + 0x204) != 0) {
      FStringNoInit::operator=((FStringNoInit *)(*(int *)(iVar1 + 0x204) + 0x17ac),auStack_400);
    }
  }
  FOutputDevice::Logf(*(FOutputDevice **)GNetworkLog_exref,
                      (ushort *)*(FOutputDevice **)GNetworkLog_exref);
  return extraout_EAX & 0xffffff00;
}


// ==== 10429bd0 FUN_10429bd0 depth=0 from=raiz callees=thunk_FUN_104026b0@103034e5 thunk_FUN_104226e0@1030d04e CORE.DLL::FStringNoInit::operator=@EXTERNAL:000000da CORE.DLL::FOutputDevice::Logf@EXTERNAL:000000b4
// strings: 10889da0=(Receive)PrivateStoreMsg MSG : %s | 

uint FUN_10429bd0(int param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  uint extraout_EAX;
  undefined4 uStack_404;
  ushort auStack_400 [512];
  
  uStack_404 = 0;
  thunk_FUN_104026b0(*(undefined4 *)(param_1 + 0x48),param_2,&DAT_10886b28,&uStack_404,0x400,
                     auStack_400);
  if ((((DAT_10b1f538 != 0) && (iVar1 = thunk_FUN_104226e0(&uStack_404), iVar1 != 0)) &&
      (piVar2 = (int *)thunk_FUN_104226e0(&uStack_404), *piVar2 == 1)) &&
     ((iVar1 = thunk_FUN_104226e0(&uStack_404), *(int *)(iVar1 + 4) != 0 &&
      (iVar1 = thunk_FUN_104226e0(&uStack_404), *(int *)(iVar1 + 4) != 0)))) {
    iVar1 = thunk_FUN_104226e0(&uStack_404);
    if ((iVar1 == 0) ||
       ((piVar2 = (int *)thunk_FUN_104226e0(&uStack_404), *piVar2 != 1 ||
        (iVar1 = thunk_FUN_104226e0(&uStack_404), *(int *)(iVar1 + 4) == 0)))) {
      iVar1 = 0;
    }
    else {
      iVar1 = thunk_FUN_104226e0(&uStack_404);
      iVar1 = *(int *)(iVar1 + 4);
    }
    if (*(int *)(iVar1 + 0x204) != 0) {
      FStringNoInit::operator=((FStringNoInit *)(*(int *)(iVar1 + 0x204) + 0x17b8),auStack_400);
    }
  }
  FOutputDevice::Logf(*(FOutputDevice **)GNetworkLog_exref,
                      (ushort *)*(FOutputDevice **)GNetworkLog_exref);
  return extraout_EAX & 0xffffff00;
}


// ==== 1042a000 FUN_1042a000 depth=0 from=raiz callees=CORE.DLL::appStrcpy@EXTERNAL:0000012c thunk_FUN_104026b0@103034e5 thunk_FUN_104226e0@1030d04e
// strings: 

uint FUN_1042a000(int param_1,undefined4 param_2)

{
  int iVar1;
  ushort *puVar2;
  ushort auStack_30 [24];
  
  thunk_FUN_104026b0(*(undefined4 *)(param_1 + 0x48),param_2,&DAT_10886b28,&param_1,0x30,auStack_30)
  ;
  puVar2 = (ushort *)0x0;
  if (DAT_10b1f538 != 0) {
    iVar1 = thunk_FUN_104226e0(&param_1);
    puVar2 = (ushort *)0x0;
    if (((iVar1 != 0) && (puVar2 = (ushort *)thunk_FUN_104226e0(&param_1), *(int *)puVar2 == 1)) &&
       (puVar2 = (ushort *)thunk_FUN_104226e0(&param_1), *(int *)(puVar2 + 2) != 0)) {
      iVar1 = thunk_FUN_104226e0(&param_1);
      puVar2 = (ushort *)0x0;
      if (*(int *)(iVar1 + 4) != 0) {
        puVar2 = appStrcpy((ushort *)(*(int *)(iVar1 + 4) + 0x254),auStack_30);
      }
    }
  }
  return (uint)puVar2 & 0xffffff00;
}


// ==== 1042a630 FUN_1042a630 depth=0 from=raiz callees=thunk_FUN_104026b0@103034e5 thunk_FUN_104226e0@1030d04e CORE.DLL::FStringNoInit::operator=@EXTERNAL:000000da CORE.DLL::FOutputDevice::Logf@EXTERNAL:000000b4
// strings: 10889fb0=(Receive)RecipeShopMsgPacket | 

uint FUN_1042a630(int param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  uint extraout_EAX;
  FOutputDevice *extraout_ECX;
  FOutputDevice *extraout_ECX_00;
  FOutputDevice *extraout_ECX_01;
  FOutputDevice *extraout_ECX_02;
  FOutputDevice *extraout_ECX_03;
  FOutputDevice *extraout_ECX_04;
  FOutputDevice *extraout_ECX_05;
  FOutputDevice *extraout_ECX_06;
  FOutputDevice *extraout_ECX_07;
  FOutputDevice *this;
  FOutputDevice *extraout_ECX_08;
  undefined4 uStack_404;
  ushort auStack_400 [512];
  
  uStack_404 = 0;
  thunk_FUN_104026b0(*(undefined4 *)(param_1 + 0x48),param_2,&DAT_10886b28,&uStack_404,0x400,
                     auStack_400);
  this = extraout_ECX;
  if ((((DAT_10b1f538 != 0) &&
       (iVar1 = thunk_FUN_104226e0(&uStack_404), this = extraout_ECX_00, iVar1 != 0)) &&
      (piVar2 = (int *)thunk_FUN_104226e0(&uStack_404), this = extraout_ECX_01, *piVar2 == 1)) &&
     ((iVar1 = thunk_FUN_104226e0(&uStack_404), this = extraout_ECX_02, *(int *)(iVar1 + 4) != 0 &&
      (iVar1 = thunk_FUN_104226e0(&uStack_404), this = extraout_ECX_03, *(int *)(iVar1 + 4) != 0))))
  {
    iVar1 = thunk_FUN_104226e0(&uStack_404);
    this = extraout_ECX_04;
    if ((iVar1 == 0) ||
       ((piVar2 = (int *)thunk_FUN_104226e0(&uStack_404), this = extraout_ECX_05, *piVar2 != 1 ||
        (iVar1 = thunk_FUN_104226e0(&uStack_404), this = extraout_ECX_06, *(int *)(iVar1 + 4) == 0))
       )) {
      iVar1 = 0;
    }
    else {
      iVar1 = thunk_FUN_104226e0(&uStack_404);
      iVar1 = *(int *)(iVar1 + 4);
      this = extraout_ECX_07;
    }
    if (*(int *)(iVar1 + 0x204) != 0) {
      FStringNoInit::operator=((FStringNoInit *)(*(int *)(iVar1 + 0x204) + 0x17c4),auStack_400);
      this = extraout_ECX_08;
    }
  }
  FOutputDevice::Logf(this,*(ushort **)GNetworkLog_exref);
  return extraout_EAX & 0xffffff00;
}


// ==== 1043a2d0 FUN_1043a2d0 depth=0 from=raiz callees=thunk_FUN_104026b0@103034e5 thunk_FUN_104226e0@1030d04e thunk_FUN_104317d0@10303df5
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


// ==== 104026b0 FUN_104026b0 depth=1 from=FUN_10414a30 callees=_memcpy@107a6260 _strncpy@107a6a00 thunk_FUN_10401a60@103121f2 thunk_FUN_10402640@1030437c
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


// ==== 1036f7b0 FUN_1036f7b0 depth=1 from=FUN_1041e380 callees=CORE.DLL::FString::~FString@EXTERNAL:0000002b
// strings: 

void __fastcall FUN_1036f7b0(FString *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107f8c59;
  local_c = ExceptionList;
  local_4 = 0xffffffff;
  ExceptionList = &local_c;
  FString::~FString(param_1);
  ExceptionList = local_c;
  return;
}


// ==== 10420c60 FUN_10420c60 depth=1 from=FUN_10424500 callees=WS2_32.DLL::gethostbyname@EXTERNAL:00000012 WS2_32.DLL::WSAGetLastError@EXTERNAL:00000010 _memcpy@107a6260 KERNEL32.DLL::CreateSemaphoreA@EXTERNAL:000003f2 thunk_FUN_10401a60@103121f2 WS2_32.DLL::WSAAsyncSelect@EXTERNAL:0000000f WS2_32.DLL::connect@EXTERNAL:0000000b KERNEL32.DLL::DeleteCriticalSection@EXTERNAL:000003e8 WS2_32.DLL::closesocket@EXTERNAL:0000000d WS2_32.DLL::socket@EXTERNAL:00000008 WS2_32.DLL::htons@EXTERNAL:0000000a WS2_32.DLL::inet_addr@EXTERNAL:00000009 KERNEL32.DLL::InitializeCriticalSection@EXTERNAL:000003f1 __beginthread@107a6ebc USER32.DLL::MessageBoxW@EXTERNAL:00000444
// strings: 10888684=ERROR | 10888660=INVALID_SOCKET | 10888608=WSAAsyncSelect Error : %d  sock : %d | 108885cc=Connect Error : %d : %x | 10888684=ERROR | 10888590=Can not resolve hostname | 

void __thiscall FUN_10420c60(void *param_1,char *param_2,u_short param_3)

{
  u_short uVar1;
  HANDLE pvVar2;
  SOCKET s;
  int iVar3;
  ulong uVar4;
  hostent *phVar5;
  uintptr_t uVar6;
  
  if (*(SOCKET *)((int)param_1 + 0x38) != 0) {
    closesocket(*(SOCKET *)((int)param_1 + 0x38));
    DeleteCriticalSection((LPCRITICAL_SECTION)((int)param_1 + 0x4efc));
  }
  *(undefined4 *)((int)param_1 + 0x38) = 0;
  if (*(int *)((int)param_1 + 0x495c) != 0) {
    *(undefined4 *)((int)param_1 + 0x495c) = 0;
    DAT_10b1f53c = 0;
  }
  *(undefined4 *)((int)param_1 + 0x5bf0) = 0;
  *(undefined4 *)((int)param_1 + 0x5bec) = 0;
  *(undefined4 *)((int)param_1 + 0x5be8) = 0;
  pvVar2 = CreateSemaphoreA((LPSECURITY_ATTRIBUTES)0x0,0,0x7fffffff,(LPCSTR)0x0);
  *(HANDLE *)((int)param_1 + 0x4958) = pvVar2;
  s = socket(2,1,6);
  *(SOCKET *)((int)param_1 + 0x38) = s;
  if (s == 0xffffffff) {
    MessageBoxW(*(HWND *)((int)param_1 + 0x34),L"INVALID_SOCKET",L"ERROR",0);
    return;
  }
  iVar3 = WSAAsyncSelect(s,*(HWND *)((int)param_1 + 0x34),0x507,0x10);
  if (iVar3 != 0) {
    iVar3 = WSAGetLastError();
    thunk_FUN_10401a60(L"WSAAsyncSelect Error : %d  sock : %d",iVar3,
                       *(undefined4 *)((int)param_1 + 0x38));
    return;
  }
  uVar4 = inet_addr(param_2);
  if (uVar4 == 0xffffffff) {
    phVar5 = gethostbyname(param_2);
    *(hostent **)((int)param_1 + 0x4c) = phVar5;
    if (phVar5 == (hostent *)0x0) {
      MessageBoxW(*(HWND *)((int)param_1 + 0x34),L"Can not resolve hostname",L"ERROR",0);
      return;
    }
    _memcpy((void *)((int)param_1 + 0x40),*phVar5->h_addr_list,(int)phVar5->h_length);
  }
  else {
    *(ulong *)((int)param_1 + 0x40) = uVar4;
  }
  ((sockaddr *)((int)param_1 + 0x3c))->sa_family = 2;
  uVar1 = htons(param_3);
  *(u_short *)((int)param_1 + 0x3e) = uVar1;
  uVar6 = __beginthread((_StartAddress *)&LAB_10309e49,0,param_1);
  *(uintptr_t *)((int)param_1 + 0x495c) = uVar6;
  iVar3 = connect(*(SOCKET *)((int)param_1 + 0x38),(sockaddr *)((int)param_1 + 0x3c),0x10);
  if (iVar3 != 0) {
    iVar3 = WSAGetLastError();
    if (iVar3 != 0x2733) {
      thunk_FUN_10401a60(L"Connect Error : %d : %x",iVar3,*(undefined4 *)((int)param_1 + 0x40));
      return;
    }
  }
  InitializeCriticalSection((LPCRITICAL_SECTION)((int)param_1 + 0x4efc));
  return;
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


// ==== 104226e0 FUN_104226e0 depth=1 from=FUN_10429a60 callees=
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


// ==== 104317d0 FUN_104317d0 depth=1 from=FUN_1043a2d0 callees=thunk_FUN_103ff760@1030459d thunk_FUN_10420ff0@10310041 thunk_FUN_1042c540@10313e17
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


