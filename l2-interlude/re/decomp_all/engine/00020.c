// ==== 104082f0 FUN_104082f0

undefined4 FUN_104082f0(undefined4 param_1,undefined4 param_2)

{
  int in_ECX;
  
  (**(code **)(**(int **)(in_ECX + 0x48) + 0x68))
            (*(int **)(in_ECX + 0x48),&DAT_10882338,0x6e,param_1,param_2,0);
  FOutputDevice::Logf((FOutputDevice *)GNetworkLog_exref,*(ushort **)GNetworkLog_exref);
  return 1;
}


// ==== 10408340 FUN_10408340

undefined4 FUN_10408340(undefined4 param_1,undefined4 param_2)

{
  int in_ECX;
  
  (**(code **)(**(int **)(in_ECX + 0x48) + 0x68))
            (*(int **)(in_ECX + 0x48),&DAT_10880d2c,0x7f,param_1,param_2);
  FOutputDevice::Logf((FOutputDevice *)GNetworkLog_exref,*(ushort **)GNetworkLog_exref);
  return 1;
}


// ==== 10408390 FUN_10408390

undefined4 FUN_10408390(void)

{
  int in_ECX;
  
  (**(code **)(**(int **)(in_ECX + 0x48) + 0x68))(*(int **)(in_ECX + 0x48),&DAT_1087f8a0,0x80);
  FOutputDevice::Logf(*(FOutputDevice **)GNetworkLog_exref,
                      (ushort *)*(FOutputDevice **)GNetworkLog_exref);
  return 1;
}


// ==== 104083d0 FUN_104083d0

undefined4 FUN_104083d0(void)

{
  int in_ECX;
  
  (**(code **)(**(int **)(in_ECX + 0x48) + 0x68))(*(int **)(in_ECX + 0x48),&DAT_1087f9dc,0x81);
  FOutputDevice::Logf(*(FOutputDevice **)GNetworkLog_exref,
                      (ushort *)*(FOutputDevice **)GNetworkLog_exref);
  return 1;
}


// ==== 10408410 FUN_10408410

void FUN_10408410(undefined4 param_1)

{
  int in_ECX;
  
  (**(code **)(**(int **)(in_ECX + 0x48) + 0x68))
            (*(int **)(in_ECX + 0x48),&DAT_1087f8f8,0x8f,param_1);
  FOutputDevice::Logf((FOutputDevice *)GNetworkLog_exref,*(ushort **)GNetworkLog_exref);
  return;
}


// ==== 10408460 FUN_10408460

void FUN_10408460(undefined4 param_1)

{
  int in_ECX;
  
  (**(code **)(**(int **)(in_ECX + 0x48) + 0x68))
            (*(int **)(in_ECX + 0x48),&DAT_1087f8f8,0x8a,param_1);
  FOutputDevice::Logf((FOutputDevice *)GNetworkLog_exref,*(ushort **)GNetworkLog_exref);
  return;
}


// ==== 104084b0 FUN_104084b0

void FUN_104084b0(L2ParamStack *param_1)

{
  void *pvVar1;
  void *pvVar2;
  int in_ECX;
  
  pvVar1 = L2ParamStack::Top(param_1);
  pvVar2 = L2ParamStack::Top(param_1);
  (**(code **)(**(int **)(in_ECX + 0x48) + 0x68))
            (*(int **)(in_ECX + 0x48),&DAT_1087fb50,0x8b,pvVar1,pvVar2);
  return;
}


// ==== 10408500 FUN_10408500

void FUN_10408500(L2ParamStack *param_1)

{
  void *pvVar1;
  void *pvVar2;
  void *pvVar3;
  int in_ECX;
  
  pvVar1 = L2ParamStack::Top(param_1);
  pvVar2 = L2ParamStack::Top(param_1);
  pvVar3 = L2ParamStack::Top(param_1);
  (**(code **)(**(int **)(in_ECX + 0x48) + 0x68))
            (*(int **)(in_ECX + 0x48),&DAT_1087fa3c,0x8c,pvVar1,pvVar2,pvVar3);
  return;
}


// ==== 10408560 FUN_10408560

void FUN_10408560(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  int in_ECX;
  
  piVar1 = *(int **)(in_ECX + 0x48);
  iVar2 = *piVar1;
  uVar3 = FUN_107a6660();
  uVar3 = FUN_107a6660(uVar3);
  uVar3 = FUN_107a6660(uVar3);
  (**(code **)(iVar2 + 0x68))(piVar1,"cddddd",0x12,param_2,param_4,uVar3);
  FOutputDevice::Logf(*(FOutputDevice **)GNetworkLog_exref,
                      (ushort *)*(FOutputDevice **)GNetworkLog_exref);
  return;
}


// ==== 104085d0 FUN_104085d0

void FUN_104085d0(undefined4 param_1)

{
  int in_ECX;
  
  (**(code **)(**(int **)(in_ECX + 0x48) + 0x68))
            (*(int **)(in_ECX + 0x48),&DAT_1087f8a0,0x89,param_1);
  FOutputDevice::Logf((FOutputDevice *)GNetworkLog_exref,*(ushort **)GNetworkLog_exref);
  return;
}


// ==== 10408620 FUN_10408620

void FUN_10408620(L2ParamStack *param_1)

{
  void *pvVar1;
  int in_ECX;
  
  pvVar1 = L2ParamStack::Top(param_1);
  (**(code **)(**(int **)(in_ECX + 0x48) + 0x68))
            (*(int **)(in_ECX + 0x48),&DAT_1087f8f8,0xac,pvVar1);
  FOutputDevice::Logf((FOutputDevice *)GNetworkLog_exref,*(ushort **)GNetworkLog_exref);
  return;
}


// ==== 10408670 FUN_10408670

void FUN_10408670(undefined4 param_1)

{
  int in_ECX;
  
  (**(code **)(**(int **)(in_ECX + 0x48) + 0x68))
            (*(int **)(in_ECX + 0x48),&DAT_1087f8f8,0xad,param_1);
  FOutputDevice::Logf((FOutputDevice *)GNetworkLog_exref,*(ushort **)GNetworkLog_exref);
  return;
}


// ==== 104086c0 FUN_104086c0

void FUN_104086c0(undefined4 param_1)

{
  int in_ECX;
  
  (**(code **)(**(int **)(in_ECX + 0x48) + 0x68))
            (*(int **)(in_ECX + 0x48),&DAT_1087f8f8,0xae,param_1);
  FOutputDevice::Logf((FOutputDevice *)GNetworkLog_exref,*(ushort **)GNetworkLog_exref);
  return;
}


// ==== 10408710 FUN_10408710

void FUN_10408710(undefined4 param_1)

{
  int in_ECX;
  
  (**(code **)(**(int **)(in_ECX + 0x48) + 0x68))
            (*(int **)(in_ECX + 0x48),&DAT_1087f8f8,0xaf,param_1);
  FOutputDevice::Logf((FOutputDevice *)GNetworkLog_exref,*(ushort **)GNetworkLog_exref);
  return;
}


// ==== 10408760 FUN_10408760

void FUN_10408760(void)

{
  int in_ECX;
  
  (**(code **)(**(int **)(in_ECX + 0x48) + 0x68))(*(int **)(in_ECX + 0x48),&DAT_1087f9dc,0xb0);
  FOutputDevice::Logf(*(FOutputDevice **)GNetworkLog_exref,
                      (ushort *)*(FOutputDevice **)GNetworkLog_exref);
  return;
}


// ==== 104087a0 FUN_104087a0

void FUN_104087a0(int param_1)

{
  int in_ECX;
  
  if (param_1 != 0) {
    (**(code **)(**(int **)(in_ECX + 0x48) + 0x68))
              (*(int **)(in_ECX + 0x48),&DAT_1087f8a0,0xb1,param_1);
  }
  FOutputDevice::Logf(*(FOutputDevice **)GNetworkLog_exref,
                      (ushort *)*(FOutputDevice **)GNetworkLog_exref);
  return;
}


// ==== 104087f0 FUN_104087f0

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

void FUN_104087f0(L2ParamStack *param_1)

{
  void *pvVar1;
  void *pvVar2;
  void *pvVar3;
  int iVar4;
  int in_ECX;
  int iVar5;
  void *local_2408;
  undefined1 local_2400 [9212];
  undefined4 uStack_4;
  
  uStack_4 = 0x104087fa;
  iVar5 = 0;
  pvVar1 = L2ParamStack::Top(param_1);
  local_2408 = pvVar1;
  if (0 < (int)pvVar1) {
    do {
      pvVar2 = L2ParamStack::Top(param_1);
      pvVar3 = L2ParamStack::Top(param_1);
      iVar4 = thunk_FUN_10402610(*(undefined4 *)(in_ECX + 0x48),local_2400 + iVar5,0x2400 - iVar5,
                                 &DAT_1087ff44,pvVar2,pvVar3);
      iVar5 = iVar5 + iVar4;
      local_2408 = (void *)((int)local_2408 + -1);
    } while (local_2408 != (void *)0x0);
  }
  (**(code **)(**(int **)(in_ECX + 0x48) + 0x68))
            (*(int **)(in_ECX + 0x48),&DAT_1088029c,0xb2,pvVar1,iVar5,local_2400);
  FOutputDevice::Logf((FOutputDevice *)GNetworkLog_exref,*(ushort **)GNetworkLog_exref);
  return;
}


// ==== 104088d0 FUN_104088d0

void FUN_104088d0(void)

{
  int in_ECX;
  
  (**(code **)(**(int **)(in_ECX + 0x48) + 0x68))(*(int **)(in_ECX + 0x48),&DAT_1087f9dc,0xb3);
  FOutputDevice::Logf(*(FOutputDevice **)GNetworkLog_exref,
                      (ushort *)*(FOutputDevice **)GNetworkLog_exref);
  return;
}


// ==== 10408910 FUN_10408910

void FUN_10408910(void)

{
  int in_ECX;
  
  (**(code **)(**(int **)(in_ECX + 0x48) + 0x68))(*(int **)(in_ECX + 0x48),&DAT_1087f9dc,0xb4);
  FOutputDevice::Logf(*(FOutputDevice **)GNetworkLog_exref,
                      (ushort *)*(FOutputDevice **)GNetworkLog_exref);
  return;
}


// ==== 10408950 FUN_10408950

void FUN_10408950(undefined4 param_1)

{
  int in_ECX;
  
  (**(code **)(**(int **)(in_ECX + 0x48) + 0x68))
            (*(int **)(in_ECX + 0x48),&DAT_1087f8f8,0xb7,param_1);
  FOutputDevice::Logf((FOutputDevice *)GNetworkLog_exref,*(ushort **)GNetworkLog_exref);
  return;
}


// ==== 104089a0 FUN_104089a0

void FUN_104089a0(undefined4 param_1,undefined4 param_2)

{
  int in_ECX;
  
  (**(code **)(**(int **)(in_ECX + 0x48) + 0x68))
            (*(int **)(in_ECX + 0x48),&DAT_1087fb50,0xb5,param_1,param_2);
  FOutputDevice::Logf((FOutputDevice *)GNetworkLog_exref,*(ushort **)GNetworkLog_exref);
  return;
}


// ==== 104089f0 FUN_104089f0

void FUN_104089f0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int in_ECX;
  
  (**(code **)(**(int **)(in_ECX + 0x48) + 0x68))
            (*(int **)(in_ECX + 0x48),&DAT_1087fa3c,0xb6,param_1,param_2,param_3);
  FOutputDevice::Logf((FOutputDevice *)GNetworkLog_exref,*(ushort **)GNetworkLog_exref);
  return;
}


// ==== 10408a40 FUN_10408a40

void FUN_10408a40(undefined4 param_1)

{
  int in_ECX;
  
  (**(code **)(**(int **)(in_ECX + 0x48) + 0x68))
            (*(int **)(in_ECX + 0x48),&DAT_1087f8f8,0xbb,param_1);
  FOutputDevice::Logf((FOutputDevice *)GNetworkLog_exref,*(ushort **)GNetworkLog_exref);
  return;
}


// ==== 10408a90 FUN_10408a90

void FUN_10408a90(undefined4 param_1)

{
  int in_ECX;
  
  (**(code **)(**(int **)(in_ECX + 0x48) + 0x68))
            (*(int **)(in_ECX + 0x48),&DAT_1087f8f8,0xbc,param_1);
  FOutputDevice::Logf((FOutputDevice *)GNetworkLog_exref,*(ushort **)GNetworkLog_exref);
  return;
}


// ==== 10408ae0 FUN_10408ae0

void FUN_10408ae0(undefined4 param_1)

{
  int in_ECX;
  
  (**(code **)(**(int **)(in_ECX + 0x48) + 0x68))
            (*(int **)(in_ECX + 0x48),&DAT_1087f8f8,0xbe,param_1);
  FOutputDevice::Logf((FOutputDevice *)GNetworkLog_exref,*(ushort **)GNetworkLog_exref);
  return;
}


// ==== 10408b30 FUN_10408b30

void FUN_10408b30(undefined4 param_1)

{
  int in_ECX;
  
  (**(code **)(**(int **)(in_ECX + 0x48) + 0x68))
            (*(int **)(in_ECX + 0x48),&DAT_1087f8f8,0xbf,param_1);
  FOutputDevice::Logf((FOutputDevice *)GNetworkLog_exref,*(ushort **)GNetworkLog_exref);
  return;
}


// ==== 10408b80 FUN_10408b80

void FUN_10408b80(void)

{
  int in_ECX;
  
  (**(code **)(**(int **)(in_ECX + 0x48) + 0x68))(*(int **)(in_ECX + 0x48),&DAT_1087f8f8,0xba);
  FOutputDevice::Logf(*(FOutputDevice **)GNetworkLog_exref,
                      (ushort *)*(FOutputDevice **)GNetworkLog_exref);
  return;
}


// ==== 10408bc0 FUN_10408bc0

void FUN_10408bc0(void)

{
  int in_ECX;
  
  (**(code **)(**(int **)(in_ECX + 0x48) + 0x68))(*(int **)(in_ECX + 0x48),&DAT_1087f8f8,0xbd);
  FOutputDevice::Logf(*(FOutputDevice **)GNetworkLog_exref,
                      (ushort *)*(FOutputDevice **)GNetworkLog_exref);
  return;
}


// ==== 10408c00 FUN_10408c00

void FUN_10408c00(void)

{
  int in_ECX;
  
  (**(code **)(**(int **)(in_ECX + 0x48) + 0x68))(*(int **)(in_ECX + 0x48),&DAT_1087f9dc,0x73);
  return;
}


// ==== 10408c20 FUN_10408c20

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

void FUN_10408c20(L2ParamStack *param_1)

{
  void *pvVar1;
  void *pvVar2;
  void *pvVar3;
  void *pvVar4;
  void *pvVar5;
  int iVar6;
  int in_ECX;
  FOutputDevice *this;
  int iVar7;
  void *local_2414;
  undefined1 local_2400 [9212];
  undefined4 uStack_4;
  
  uStack_4 = 0x10408c2a;
  iVar7 = 0;
  pvVar1 = L2ParamStack::Top(param_1);
  pvVar2 = L2ParamStack::Top(param_1);
  local_2414 = pvVar2;
  if (0 < (int)pvVar2) {
    do {
      pvVar3 = L2ParamStack::Top(param_1);
      pvVar4 = L2ParamStack::Top(param_1);
      pvVar5 = L2ParamStack::Top(param_1);
      iVar6 = thunk_FUN_10402610(*(undefined4 *)(in_ECX + 0x48),local_2400 + iVar7,0x2400 - iVar7,
                                 &DAT_1087ff0c,pvVar3,pvVar4,pvVar5);
      iVar7 = iVar7 + iVar6;
      local_2414 = (void *)((int)local_2414 + -1);
    } while (local_2414 != (void *)0x0);
  }
  (**(code **)(**(int **)(in_ECX + 0x48) + 0x68))
            (*(int **)(in_ECX + 0x48),&DAT_1087ff04,0x74,pvVar1,pvVar2,iVar7,local_2400);
  FOutputDevice::Logf(this,*(ushort **)GNetworkLog_exref);
  return;
}


// ==== 10408d30 FUN_10408d30

void FUN_10408d30(void)

{
  int in_ECX;
  
  (**(code **)(**(int **)(in_ECX + 0x48) + 0x68))(*(int **)(in_ECX + 0x48),&DAT_1087f9dc,0x75);
  return;
}


// ==== 10408d50 FUN_10408d50

void FUN_10408d50(void)

{
  int in_ECX;
  
  (**(code **)(**(int **)(in_ECX + 0x48) + 0x68))(*(int **)(in_ECX + 0x48),&DAT_1087f9dc,0x76);
  return;
}


// ==== 10408d70 FUN_10408d70

void FUN_10408d70(int param_1)

{
  int in_ECX;
  
  if (param_1 != 0) {
    (**(code **)(**(int **)(in_ECX + 0x48) + 0x68))
              (*(int **)(in_ECX + 0x48),&DAT_1087f8a0,0x77,param_1);
  }
  return;
}


// ==== 10408da0 FUN_10408da0

void FUN_10408da0(undefined4 param_1)

{
  int in_ECX;
  
  (**(code **)(**(int **)(in_ECX + 0x48) + 0x68))
            (*(int **)(in_ECX + 0x48),&DAT_1087f8f8,0x78,param_1);
  return;
}


// ==== 10408dd0 FUN_10408dd0

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

void FUN_10408dd0(L2ParamStack *param_1)

{
  void *pvVar1;
  void *pvVar2;
  void *pvVar3;
  void *pvVar4;
  void *pvVar5;
  int iVar6;
  int in_ECX;
  FOutputDevice *this;
  int iVar7;
  void *local_2414;
  undefined1 local_2400 [9212];
  undefined4 uStack_4;
  
  uStack_4 = 0x10408dda;
  iVar7 = 0;
  pvVar1 = L2ParamStack::Top(param_1);
  pvVar2 = L2ParamStack::Top(param_1);
  local_2414 = pvVar2;
  if (0 < (int)pvVar2) {
    do {
      pvVar3 = L2ParamStack::Top(param_1);
      pvVar4 = L2ParamStack::Top(param_1);
      pvVar5 = L2ParamStack::Top(param_1);
      iVar6 = thunk_FUN_10402610(*(undefined4 *)(in_ECX + 0x48),local_2400 + iVar7,0x2400 - iVar7,
                                 &DAT_1087ff0c,pvVar3,pvVar4,pvVar5);
      iVar7 = iVar7 + iVar6;
      local_2414 = (void *)((int)local_2414 + -1);
    } while (local_2414 != (void *)0x0);
  }
  (**(code **)(**(int **)(in_ECX + 0x48) + 0x68))
            (*(int **)(in_ECX + 0x48),&DAT_1087ff04,0x79,pvVar1,pvVar2,iVar7,local_2400);
  FOutputDevice::Logf(this,*(ushort **)GNetworkLog_exref);
  return;
}


// ==== 10408ee0 FUN_10408ee0

void FUN_10408ee0(void)

{
  int in_ECX;
  
  (**(code **)(**(int **)(in_ECX + 0x48) + 0x68))(*(int **)(in_ECX + 0x48),&DAT_1087f9dc,0x90);
  FOutputDevice::Logf(*(FOutputDevice **)GNetworkLog_exref,
                      (ushort *)*(FOutputDevice **)GNetworkLog_exref);
  return;
}


// ==== 10408f20 FUN_10408f20

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

void FUN_10408f20(L2ParamStack *param_1)

{
  void *pvVar1;
  void *pvVar2;
  void *pvVar3;
  void *pvVar4;
  void *pvVar5;
  void *pvVar6;
  int iVar7;
  int in_ECX;
  int iVar8;
  void *local_2418;
  short local_2410;
  short local_240c;
  undefined1 local_2400 [9212];
  undefined4 uStack_4;
  
  uStack_4 = 0x10408f2a;
  iVar8 = 0;
  pvVar1 = L2ParamStack::Top(param_1);
  local_2418 = pvVar1;
  if (0 < (int)pvVar1) {
    do {
      pvVar2 = L2ParamStack::Top(param_1);
      pvVar3 = L2ParamStack::Top(param_1);
      pvVar4 = L2ParamStack::Top(param_1);
      pvVar5 = L2ParamStack::Top(param_1);
      pvVar6 = L2ParamStack::Top(param_1);
      local_240c = (short)pvVar3;
      local_2410 = (short)pvVar4;
      iVar7 = thunk_FUN_10402610(*(undefined4 *)(in_ECX + 0x48),local_2400 + iVar8,0x2400 - iVar8,
                                 "dhhdd",pvVar2,(int)local_240c,(int)local_2410,pvVar5,pvVar6);
      iVar8 = iVar8 + iVar7;
      local_2418 = (void *)((int)local_2418 + -1);
    } while (local_2418 != (void *)0x0);
  }
  (**(code **)(**(int **)(in_ECX + 0x48) + 0x68))
            (*(int **)(in_ECX + 0x48),&DAT_1088029c,0x91,pvVar1,iVar8,local_2400);
  FOutputDevice::Logf((FOutputDevice *)GNetworkLog_exref,*(ushort **)GNetworkLog_exref);
  return;
}


// ==== 10409040 FUN_10409040

void FUN_10409040(void)

{
  int in_ECX;
  
  (**(code **)(**(int **)(in_ECX + 0x48) + 0x68))(*(int **)(in_ECX + 0x48),&DAT_1087f9dc,0x92);
  return;
}


// ==== 10409060 FUN_10409060

void FUN_10409060(void)

{
  int in_ECX;
  
  (**(code **)(**(int **)(in_ECX + 0x48) + 0x68))(*(int **)(in_ECX + 0x48),&DAT_1087f9dc,0x93);
  return;
}


// ==== 10409080 FUN_10409080

void FUN_10409080(int param_1)

{
  int in_ECX;
  
  if (param_1 != 0) {
    (**(code **)(**(int **)(in_ECX + 0x48) + 0x68))
              (*(int **)(in_ECX + 0x48),&DAT_1087f8a0,0x94,param_1);
  }
  return;
}


// ==== 104090b0 FUN_104090b0

void FUN_104090b0(undefined4 param_1)

{
  int in_ECX;
  
  (**(code **)(**(int **)(in_ECX + 0x48) + 0x68))
            (*(int **)(in_ECX + 0x48),&DAT_1087f8f8,0x95,param_1);
  return;
}


// ==== 104090e0 FUN_104090e0

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

void FUN_104090e0(L2ParamStack *param_1)

{
  void *pvVar1;
  void *pvVar2;
  void *pvVar3;
  void *pvVar4;
  void *pvVar5;
  void *pvVar6;
  void *pvVar7;
  void *pvVar8;
  int iVar9;
  int in_ECX;
  FOutputDevice *this;
  int iVar10;
  void *local_2420;
  short local_2418;
  short local_2404;
  undefined1 local_2400 [9212];
  undefined4 uStack_4;
  
  uStack_4 = 0x104090ea;
  iVar10 = 0;
  pvVar1 = L2ParamStack::Top(param_1);
  pvVar2 = L2ParamStack::Top(param_1);
  local_2420 = pvVar2;
  if (0 < (int)pvVar2) {
    do {
      pvVar3 = L2ParamStack::Top(param_1);
      pvVar4 = L2ParamStack::Top(param_1);
      pvVar5 = L2ParamStack::Top(param_1);
      pvVar6 = L2ParamStack::Top(param_1);
      pvVar7 = L2ParamStack::Top(param_1);
      pvVar8 = L2ParamStack::Top(param_1);
      local_2418 = (short)pvVar5;
      local_2404 = (short)pvVar6;
      iVar9 = thunk_FUN_10402610(*(undefined4 *)(in_ECX + 0x48),local_2400 + iVar10,0x2400 - iVar10,
                                 "ddhhdd",pvVar3,pvVar4,(int)local_2418,(int)local_2404,pvVar7,
                                 pvVar8);
      iVar10 = iVar10 + iVar9;
      local_2420 = (void *)((int)local_2420 + -1);
    } while (local_2420 != (void *)0x0);
  }
  (**(code **)(**(int **)(in_ECX + 0x48) + 0x68))
            (*(int **)(in_ECX + 0x48),&DAT_1087ff04,0x96,pvVar1,pvVar2,iVar10,local_2400);
  FOutputDevice::Logf(this,*(ushort **)GNetworkLog_exref);
  return;
}


// ==== 10409220 FUN_10409220

void FUN_10409220(L2ParamStack *param_1)

{
  void *pvVar1;
  void *pvVar2;
  int in_ECX;
  
  pvVar1 = L2ParamStack::Top(param_1);
  pvVar2 = L2ParamStack::Top(param_1);
  (**(code **)(**(int **)(in_ECX + 0x48) + 0x68))
            (*(int **)(in_ECX + 0x48),&DAT_1087fb50,0x97,pvVar1,pvVar2);
  FOutputDevice::Logf((FOutputDevice *)GNetworkLog_exref,*(ushort **)GNetworkLog_exref);
  return;
}


// ==== 10409290 FUN_10409290

void FUN_10409290(void)

{
  int in_ECX;
  
  (**(code **)(**(int **)(in_ECX + 0x48) + 0x68))(*(int **)(in_ECX + 0x48),&DAT_1087f9dc,0x9d);
  FOutputDevice::Logf(*(FOutputDevice **)GNetworkLog_exref,
                      (ushort *)*(FOutputDevice **)GNetworkLog_exref);
  return;
}


// ==== 104092d0 FUN_104092d0

void FUN_104092d0(void)

{
  return;
}


// ==== 104092e0 FUN_104092e0

void FUN_104092e0(void)

{
  return;
}


// ==== 104092f0 FUN_104092f0

void FUN_104092f0(void)

{
  return;
}


// ==== 10409300 FUN_10409300

void FUN_10409300(void)

{
  return;
}


// ==== 10409310 FUN_10409310

void FUN_10409310(void)

{
  return;
}


// ==== 10409320 FUN_10409320

void FUN_10409320(L2ParamStack *param_1)

{
  void *pvVar1;
  int in_ECX;
  
  pvVar1 = L2ParamStack::Top(param_1);
  (**(code **)(**(int **)(in_ECX + 0x48) + 0x68))
            (*(int **)(in_ECX + 0x48),&DAT_1087f8f8,0x9e,pvVar1);
  FOutputDevice::Logf((FOutputDevice *)GNetworkLog_exref,*(ushort **)GNetworkLog_exref);
  return;
}


// ==== 10409370 FUN_10409370

void FUN_10409370(L2ParamStack *param_1)

{
  void *pvVar1;
  int in_ECX;
  
  pvVar1 = L2ParamStack::Top(param_1);
  (**(code **)(**(int **)(in_ECX + 0x48) + 0x68))
            (*(int **)(in_ECX + 0x48),&DAT_1087f8f8,0xa1,pvVar1);
  FOutputDevice::Logf((FOutputDevice *)GNetworkLog_exref,*(ushort **)GNetworkLog_exref);
  return;
}


// ==== 104093c0 FUN_104093c0

void FUN_104093c0(L2ParamStack *param_1)

{
  void *pvVar1;
  int in_ECX;
  
  pvVar1 = L2ParamStack::Top(param_1);
  (**(code **)(**(int **)(in_ECX + 0x48) + 0x68))
            (*(int **)(in_ECX + 0x48),&DAT_1087f8f8,0xa2,pvVar1);
  FOutputDevice::Logf((FOutputDevice *)GNetworkLog_exref,*(ushort **)GNetworkLog_exref);
  return;
}


// ==== 10409410 FUN_10409410

void FUN_10409410(L2ParamStack *param_1)

{
  void *pvVar1;
  int in_ECX;
  
  pvVar1 = L2ParamStack::Top(param_1);
  (**(code **)(**(int **)(in_ECX + 0x48) + 0x68))
            (*(int **)(in_ECX + 0x48),&DAT_1087f8f8,0xa3,pvVar1);
  FOutputDevice::Logf((FOutputDevice *)GNetworkLog_exref,*(ushort **)GNetworkLog_exref);
  return;
}


// ==== 10409460 FUN_10409460

void FUN_10409460(L2ParamStack *param_1)

{
  void *pvVar1;
  void *pvVar2;
  void *pvVar3;
  int in_ECX;
  FOutputDevice *this;
  
  pvVar1 = L2ParamStack::Top(param_1);
  pvVar2 = L2ParamStack::Top(param_1);
  pvVar3 = L2ParamStack::Top(param_1);
  (**(code **)(**(int **)(in_ECX + 0x48) + 0x68))
            (*(int **)(in_ECX + 0x48),&DAT_1087fa3c,0xa4,pvVar1,pvVar2,pvVar3);
  FOutputDevice::Logf(this,*(ushort **)GNetworkLog_exref);
  return;
}


// ==== 104094e0 FUN_104094e0

void FUN_104094e0(L2ParamStack *param_1)

{
  void *pvVar1;
  void *pvVar2;
  void *pvVar3;
  int in_ECX;
  FOutputDevice *this;
  
  pvVar1 = L2ParamStack::Top(param_1);
  pvVar2 = L2ParamStack::Top(param_1);
  pvVar3 = L2ParamStack::Top(param_1);
  (**(code **)(**(int **)(in_ECX + 0x48) + 0x68))
            (*(int **)(in_ECX + 0x48),&DAT_1087fa3c,0xa5,pvVar1,pvVar2,pvVar3);
  FOutputDevice::Logf(this,*(ushort **)GNetworkLog_exref);
  return;
}


// ==== 10409560 FUN_10409560

void FUN_10409560(L2ParamStack *param_1)

{
  void *pvVar1;
  void *pvVar2;
  int in_ECX;
  
  pvVar1 = L2ParamStack::Top(param_1);
  pvVar2 = L2ParamStack::Top(param_1);
  (**(code **)(**(int **)(in_ECX + 0x48) + 0x68))
            (*(int **)(in_ECX + 0x48),&DAT_1087fb50,0xa6,pvVar1,pvVar2);
  FOutputDevice::Logf((FOutputDevice *)GNetworkLog_exref,*(ushort **)GNetworkLog_exref);
  return;
}


// ==== 104095d0 FUN_104095d0

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

void FUN_104095d0(L2ParamStack *param_1)

{
  void *pvVar1;
  void *pvVar2;
  void *pvVar3;
  void *pvVar4;
  int iVar5;
  int in_ECX;
  FOutputDevice *this;
  int iVar6;
  void *local_2410;
  undefined1 local_2400 [9212];
  undefined4 uStack_4;
  
  uStack_4 = 0x104095da;
  pvVar1 = L2ParamStack::Top(param_1);
  pvVar2 = L2ParamStack::Top(param_1);
  iVar6 = 0;
  local_2410 = pvVar2;
  if (0 < (int)pvVar2) {
    do {
      pvVar3 = L2ParamStack::Top(param_1);
      pvVar4 = L2ParamStack::Top(param_1);
      iVar5 = thunk_FUN_10402610(*(undefined4 *)(in_ECX + 0x48),local_2400 + iVar6,0x2400 - iVar6,
                                 &DAT_1087ff44,pvVar3,pvVar4);
      iVar6 = iVar6 + iVar5;
      local_2410 = (void *)((int)local_2410 + -1);
    } while (local_2410 != (void *)0x0);
  }
  (**(code **)(**(int **)(in_ECX + 0x48) + 0x68))
            (*(int **)(in_ECX + 0x48),&DAT_1087ff04,0x9f,pvVar1,pvVar2,iVar6,local_2400);
  FOutputDevice::Logf(this,*(ushort **)GNetworkLog_exref);
  return;
}


// ==== 104096d0 FUN_104096d0

void FUN_104096d0(L2ParamStack *param_1)

{
  void *pvVar1;
  void *pvVar2;
  void *pvVar3;
  void *pvVar4;
  void *pvVar5;
  int in_ECX;
  FOutputDevice *this;
  
  pvVar1 = L2ParamStack::Top(param_1);
  pvVar2 = L2ParamStack::Top(param_1);
  pvVar3 = L2ParamStack::Top(param_1);
  pvVar4 = L2ParamStack::Top(param_1);
  pvVar5 = L2ParamStack::Top(param_1);
  (**(code **)(**(int **)(in_ECX + 0x48) + 0x68))
            (*(int **)(in_ECX + 0x48),"cddddd",0xa7,pvVar1,pvVar2,pvVar3,pvVar4,pvVar5);
  FOutputDevice::Logf(this,*(ushort **)GNetworkLog_exref);
  return;
}


// ==== 10409770 FUN_10409770

void FUN_10409770(undefined4 param_1)

{
  int in_ECX;
  
  (**(code **)(**(int **)(in_ECX + 0x48) + 0x68))
            (*(int **)(in_ECX + 0x48),&DAT_1087f8f8,0xab,param_1);
  FOutputDevice::Logf((FOutputDevice *)GNetworkLog_exref,*(ushort **)GNetworkLog_exref);
  return;
}


// ==== 104097c0 FUN_104097c0

void FUN_104097c0(undefined4 param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  int in_ECX;
  
  piVar1 = *(int **)(in_ECX + 0x48);
  iVar2 = *piVar1;
  uVar3 = FUN_107a6660();
  uVar3 = FUN_107a6660(uVar3);
  (**(code **)(iVar2 + 0x68))(piVar1,&DAT_1087fa3c,0xa8,param_1,uVar3);
  *(undefined4 *)(in_ECX + 0x18c) = 0;
  FOutputDevice::Logf(*(FOutputDevice **)GNetworkLog_exref,
                      (ushort *)*(FOutputDevice **)GNetworkLog_exref);
  return;
}


// ==== 10409860 FUN_10409860

void FUN_10409860(void)

{
  int in_ECX;
  
  (**(code **)(**(int **)(in_ECX + 0x48) + 0x68))(*(int **)(in_ECX + 0x48),&DAT_1087f9dc,0xa9);
  FOutputDevice::Logf(*(FOutputDevice **)GNetworkLog_exref,
                      (ushort *)*(FOutputDevice **)GNetworkLog_exref);
  return;
}


// ==== 104098a0 FUN_104098a0

void FUN_104098a0(L2ParamStack *param_1)

{
  void *pvVar1;
  int in_ECX;
  
  pvVar1 = L2ParamStack::Top(param_1);
  (**(code **)(**(int **)(in_ECX + 0x48) + 0x68))
            (*(int **)(in_ECX + 0x48),&DAT_1087f8f8,0xaa,pvVar1);
  FOutputDevice::Logf((FOutputDevice *)GNetworkLog_exref,*(ushort **)GNetworkLog_exref);
  return;
}


// ==== 104098f0 FUN_104098f0

void FUN_104098f0(int param_1,int param_2,int param_3)

{
  int *piVar1;
  int in_ECX;
  
  if ((-1 < param_1) && (param_1 < 0x80)) {
    piVar1 = (int *)(*(int *)(in_ECX + 0x184) + 0x34 + param_1 * 0x10);
    *piVar1 = param_1;
    piVar1[1] = param_2;
    piVar1[2] = param_3;
    piVar1[3] = 0;
  }
  return;
}


// ==== 10409940 FUN_10409940

void FUN_10409940(void)

{
  int in_ECX;
  
  (**(code **)(**(int **)(in_ECX + 0x48) + 0x68))(*(int **)(in_ECX + 0x48),&DAT_1087f9dc,0xb8);
  FOutputDevice::Logf(*(FOutputDevice **)GNetworkLog_exref,
                      (ushort *)*(FOutputDevice **)GNetworkLog_exref);
  return;
}


// ==== 10409980 FUN_10409980

void FUN_10409980(undefined4 param_1,int param_2,byte *param_3)

{
  byte bVar1;
  int in_ECX;
  code *pcVar2;
  int iVar3;
  uint uVar4;
  
  if (param_2 == 1) {
    (**(code **)(**(int **)(in_ECX + 0x48) + 0x68))
              (*(int **)(in_ECX + 0x48),&DAT_1087fb50,0xc0,param_1,1);
  }
  else if (param_2 == 2) {
    uVar4 = 0;
    pcVar2 = GLog_exref;
    if (param_3 != (byte *)0x0) {
      iVar3 = 0x1f;
      do {
        bVar1 = param_3[iVar3];
        if (*(int *)pcVar2 != 0) {
          FOutputDevice::Logf2(*(FOutputDevice **)pcVar2,(ushort *)*(FOutputDevice **)pcVar2);
          pcVar2 = GLog_exref;
        }
        iVar3 = iVar3 + -1;
        uVar4 = (uVar4 | bVar1 != 0) * 2;
      } while (0 < iVar3);
      uVar4 = uVar4 | *param_3;
    }
    if (*(int *)pcVar2 != 0) {
      FOutputDevice::Logf2(*(FOutputDevice **)pcVar2,(ushort *)*(FOutputDevice **)pcVar2);
    }
    (**(code **)(**(int **)(in_ECX + 0x48) + 0x68))
              (*(int **)(in_ECX + 0x48),&DAT_1087fa3c,0xc0,param_1,2,uVar4);
  }
  FOutputDevice::Logf(*(FOutputDevice **)GNetworkLog_exref,
                      (ushort *)*(FOutputDevice **)GNetworkLog_exref);
  return;
}


// ==== 10409ab0 FUN_10409ab0

void FUN_10409ab0(undefined4 param_1)

{
  int in_ECX;
  
  (**(code **)(**(int **)(in_ECX + 0x48) + 0x68))
            (*(int **)(in_ECX + 0x48),&DAT_1087f8f8,0xb9,param_1);
  FOutputDevice::Logf((FOutputDevice *)GNetworkLog_exref,*(ushort **)GNetworkLog_exref);
  return;
}


// ==== 10409b00 FUN_10409b00

void FUN_10409b00(L2ParamStack *param_1)

{
  void *pvVar1;
  void *pvVar2;
  void *pvVar3;
  int in_ECX;
  FOutputDevice *this;
  
  pvVar1 = L2ParamStack::Top(param_1);
  pvVar2 = L2ParamStack::Top(param_1);
  pvVar3 = L2ParamStack::Top(param_1);
  (**(code **)(**(int **)(in_ECX + 0x48) + 0x68))
            (*(int **)(in_ECX + 0x48),&DAT_1087fa3c,0xc5,pvVar1,pvVar2,pvVar3);
  FOutputDevice::Logf(this,*(ushort **)GNetworkLog_exref);
  return;
}


// ==== 10409b80 FUN_10409b80

void FUN_10409b80(undefined4 param_1)

{
  int in_ECX;
  
  (**(code **)(**(int **)(in_ECX + 0x48) + 0x68))
            (*(int **)(in_ECX + 0x48),&DAT_10881a1c,199,param_1);
  FOutputDevice::Logf((FOutputDevice *)GNetworkLog_exref,*(ushort **)GNetworkLog_exref);
  return;
}


// ==== 10409bd0 FUN_10409bd0

void FUN_10409bd0(L2ParamStack *param_1)

{
  void *pvVar1;
  void *pvVar2;
  int in_ECX;
  
  pvVar1 = L2ParamStack::Top(param_1);
  pvVar2 = L2ParamStack::Top(param_1);
  (**(code **)(**(int **)(in_ECX + 0x48) + 0x68))
            (*(int **)(in_ECX + 0x48),&DAT_10883060,200,1,pvVar1,pvVar2);
  FOutputDevice::Logf((FOutputDevice *)GNetworkLog_exref,*(ushort **)GNetworkLog_exref);
  return;
}


// ==== 10409c40 FUN_10409c40

void FUN_10409c40(L2ParamStack *param_1)

{
  void *pvVar1;
  int in_ECX;
  
  pvVar1 = L2ParamStack::Top(param_1);
  (**(code **)(**(int **)(in_ECX + 0x48) + 0x68))
            (*(int **)(in_ECX + 0x48),&DAT_1088038c,0xd0,0x18,pvVar1);
  FOutputDevice::Logf((FOutputDevice *)GNetworkLog_exref,*(ushort **)GNetworkLog_exref);
  return;
}


// ==== 10409c90 FUN_10409c90

undefined * FUN_10409c90(void)

{
  return &DAT_10b20f54;
}


// ==== 10409cce Catch@10409cce

void Catch_10409cce(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 10409ce2 Catch@10409ce2

void Catch_10409ce2(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"UNetworkHandler::GetUserAccount");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10409d20 FUN_10409d20

undefined * FUN_10409d20(void)

{
  return &DAT_10b20f72;
}


// ==== 10409d5e Catch@10409d5e

void Catch_10409d5e(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 10409d72 Catch@10409d72

void Catch_10409d72(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"UNetworkHandler::GetUserPassword");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10409db0 FUN_10409db0

undefined4 FUN_10409db0(void)

{
  return DAT_10b20f94;
}


// ==== 10409dee Catch@10409dee

void Catch_10409dee(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 10409e02 Catch@10409e02

void Catch_10409e02(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"UNetworkHandler::GetUserOneTimePassword");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10409e40 FUN_10409e40

void FUN_10409e40(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int in_ECX;
  
  (**(code **)(**(int **)(in_ECX + 0x48) + 0x68))
            (*(int **)(in_ECX + 0x48),"cdddd",0xca,param_1,param_2,param_3,param_4);
  FOutputDevice::Logf((FOutputDevice *)GNetworkLog_exref,*(ushort **)GNetworkLog_exref);
  return;
}


// ==== 10409ea0 FUN_10409ea0

void FUN_10409ea0(undefined4 param_1,undefined4 param_2)

{
  int in_ECX;
  
  (**(code **)(**(int **)(in_ECX + 0x48) + 0x68))
            (*(int **)(in_ECX + 0x48),&DAT_108806cc,0xcc,param_2,param_1);
  FOutputDevice::Logf((FOutputDevice *)GNetworkLog_exref,*(ushort **)GNetworkLog_exref);
  return;
}


// ==== 10409ef0 FUN_10409ef0

void FUN_10409ef0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int in_ECX;
  
  (**(code **)(**(int **)(in_ECX + 0x48) + 0x68))
            (*(int **)(in_ECX + 0x48),&DAT_10883274,0xce,param_2,param_1,param_3);
  FOutputDevice::Logf((FOutputDevice *)GNetworkLog_exref,*(ushort **)GNetworkLog_exref);
  return;
}


// ==== 10409f40 FUN_10409f40

void FUN_10409f40(void)

{
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1080e730;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  (**(code **)(**(int **)(in_ECX + 0x48) + 0x68))(*(int **)(in_ECX + 0x48),&DAT_1087f9dc,0xcf);
  FOutputDevice::Logf(*(FOutputDevice **)GNetworkLog_exref,
                      (ushort *)*(FOutputDevice **)GNetworkLog_exref);
  ExceptionList = local_10;
  return;
}


// ==== 10409fab Catch@10409fab

void Catch_10409fab(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 10409fbf Catch@10409fbf

void Catch_10409fbf(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"UNetworkHandler::RequestReload");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1040a010 FUN_1040a010

void FUN_1040a010(L2ParamStack *param_1)

{
  void *pvVar1;
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1080e740;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  pvVar1 = L2ParamStack::Top(param_1);
  (**(code **)(**(int **)(in_ECX + 0x48) + 0x68))
            (*(int **)(in_ECX + 0x48),&DAT_10880bc4,0xd0,0x14,pvVar1);
  FOutputDevice::Logf((FOutputDevice *)GNetworkLog_exref,*(ushort **)GNetworkLog_exref);
  ExceptionList = local_10;
  return;
}


// ==== 1040a08c Catch@1040a08c

void Catch_1040a08c(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 1040a0a0 Catch@1040a0a0

void Catch_1040a0a0(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"UNetworkHandler::RequestAskJoinPartyRoom");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1040a0f0 FUN_1040a0f0

void FUN_1040a0f0(L2ParamStack *param_1)

{
  void *pvVar1;
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1080e750;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  pvVar1 = L2ParamStack::Top(param_1);
  (**(code **)(**(int **)(in_ECX + 0x48) + 0x68))
            (*(int **)(in_ECX + 0x48),&DAT_1088038c,0xd0,0x15,pvVar1);
  FOutputDevice::Logf((FOutputDevice *)GNetworkLog_exref,*(ushort **)GNetworkLog_exref);
  ExceptionList = local_10;
  return;
}


// ==== 1040a16c Catch@1040a16c

void Catch_1040a16c(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 1040a180 Catch@1040a180

void Catch_1040a180(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"UNetworkHandler::AnswerJoinPartyRoom");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1040a1d0 FUN_1040a1d0

void FUN_1040a1d0(L2ParamStack *param_1)

{
  void *pvVar1;
  void *pvVar2;
  void *pvVar3;
  void *pvVar4;
  int in_ECX;
  FOutputDevice *this;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1080e760;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  pvVar1 = L2ParamStack::Top(param_1);
  pvVar2 = L2ParamStack::Top(param_1);
  pvVar3 = L2ParamStack::Top(param_1);
  pvVar4 = L2ParamStack::Top(param_1);
  (**(code **)(**(int **)(in_ECX + 0x48) + 0x68))
            (*(int **)(in_ECX + 0x48),"chdddd",0xd0,0x16,pvVar1,pvVar2,pvVar3,pvVar4);
  FOutputDevice::Logf(this,*(ushort **)GNetworkLog_exref);
  ExceptionList = local_10;
  return;
}


// ==== 1040a271 Catch@1040a271

void Catch_1040a271(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x1c) = *(undefined4 *)(unaff_EBP + -0x20);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x1c,&DAT_10914c48);
}


// ==== 1040a285 Catch@1040a285

void Catch_1040a285(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"UNetworkHandler::RequestListPartyMatchingWaitingRoom");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1040a2e0 FUN_1040a2e0

void FUN_1040a2e0(void)

{
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1080e770;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  (**(code **)(**(int **)(in_ECX + 0x48) + 0x68))(*(int **)(in_ECX + 0x48),&DAT_1088095c,0xd0,0x17);
  FOutputDevice::Logf(*(FOutputDevice **)GNetworkLog_exref,
                      (ushort *)*(FOutputDevice **)GNetworkLog_exref);
  ExceptionList = local_10;
  return;
}


// ==== 1040a34f Catch@1040a34f

void Catch_1040a34f(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 1040a363 Catch@1040a363

void Catch_1040a363(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"UNetworkHandler::RequestExitPartyMatchingWaitingRoom");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1040a3b0 FUN_1040a3b0

void FUN_1040a3b0(L2ParamStack *param_1)

{
  void *pvVar1;
  void *pvVar2;
  void *pvVar3;
  int in_ECX;
  FOutputDevice *this;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1080e780;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  pvVar1 = L2ParamStack::Top(param_1);
  pvVar2 = L2ParamStack::Top(param_1);
  pvVar3 = L2ParamStack::Top(param_1);
  (**(code **)(**(int **)(in_ECX + 0x48) + 0x68))
            (*(int **)(in_ECX + 0x48),"chdSd",0xd0,0x31,pvVar1,pvVar2,pvVar3);
  FOutputDevice::Logf(this,*(ushort **)GNetworkLog_exref);
  ExceptionList = local_10;
  return;
}


// ==== 1040a446 Catch@1040a446

void Catch_1040a446(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_10914c48);
}


// ==== 1040a45a Catch@1040a45a

void Catch_1040a45a(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"UNetworkHandler::RequestExChangeName");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1040a4b0 FUN_1040a4b0

void FUN_1040a4b0(L2ParamStack *param_1)

{
  void *pvVar1;
  void *pvVar2;
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1080e790;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  pvVar1 = L2ParamStack::Top(param_1);
  pvVar2 = L2ParamStack::Top(param_1);
  (**(code **)(**(int **)(in_ECX + 0x48) + 0x68))
            (*(int **)(in_ECX + 0x48),&DAT_10880a20,0xd0,0x27,pvVar1,pvVar2);
  FOutputDevice::Logf((FOutputDevice *)GNetworkLog_exref,*(ushort **)GNetworkLog_exref);
  ExceptionList = local_10;
  return;
}


// ==== 1040a53b Catch@1040a53b

void Catch_1040a53b(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_10914c48);
}


// ==== 1040a54f Catch@1040a54f

void Catch_1040a54f(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"UNetworkHandler::RequestDuelStart");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1040a5a0 FUN_1040a5a0

void FUN_1040a5a0(L2ParamStack *param_1)

{
  void *pvVar1;
  void *pvVar2;
  void *pvVar3;
  int in_ECX;
  FOutputDevice *this;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1080e7a0;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  pvVar1 = L2ParamStack::Top(param_1);
  pvVar2 = L2ParamStack::Top(param_1);
  pvVar3 = L2ParamStack::Top(param_1);
  (**(code **)(**(int **)(in_ECX + 0x48) + 0x68))
            (*(int **)(in_ECX + 0x48),"chddd",0xd0,0x28,pvVar1,pvVar2,pvVar3);
  FOutputDevice::Logf(this,*(ushort **)GNetworkLog_exref);
  ExceptionList = local_10;
  return;
}


// ==== 1040a636 Catch@1040a636

void Catch_1040a636(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_10914c48);
}


// ==== 1040a64a Catch@1040a64a

void Catch_1040a64a(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"UNetworkHandler::RequestDuelAnswerStart");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1040a6a0 FUN_1040a6a0

void FUN_1040a6a0(undefined4 param_1)

{
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1080e7b0;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  (**(code **)(**(int **)(in_ECX + 0x48) + 0x68))
            (*(int **)(in_ECX + 0x48),&DAT_1088038c,0xd0,0x29,param_1);
  FOutputDevice::Logf((FOutputDevice *)GNetworkLog_exref,*(ushort **)GNetworkLog_exref);
  ExceptionList = local_10;
  return;
}


// ==== 1040a714 Catch@1040a714

void Catch_1040a714(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 1040a728 Catch@1040a728

void Catch_1040a728(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"UNetworkHandler::RequestConfirmTargetItem");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1040a770 FUN_1040a770

void FUN_1040a770(undefined4 param_1,undefined4 param_2)

{
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1080e7c0;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  (**(code **)(**(int **)(in_ECX + 0x48) + 0x68))
            (*(int **)(in_ECX + 0x48),&DAT_10880ab0,0xd0,0x2a,param_1,param_2);
  FOutputDevice::Logf((FOutputDevice *)GNetworkLog_exref,*(ushort **)GNetworkLog_exref);
  ExceptionList = local_10;
  return;
}


// ==== 1040a7e8 Catch@1040a7e8

void Catch_1040a7e8(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 1040a7fc Catch@1040a7fc

void Catch_1040a7fc(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"UNetworkHandler::RequestConfirmRefinerItem");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1040a850 FUN_1040a850

void FUN_1040a850(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1080e7d0;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  (**(code **)(**(int **)(in_ECX + 0x48) + 0x68))
            (*(int **)(in_ECX + 0x48),"chdddd",0xd0,0x2b,param_1,param_2,param_3,param_4);
  FOutputDevice::Logf((FOutputDevice *)GNetworkLog_exref,*(ushort **)GNetworkLog_exref);
  ExceptionList = local_10;
  return;
}


// ==== 1040a8d0 Catch@1040a8d0

void Catch_1040a8d0(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 1040a8e4 Catch@1040a8e4

void Catch_1040a8e4(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"UNetworkHandler::RequestConfirmGemStone");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1040a930 FUN_1040a930

void FUN_1040a930(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1080e7e0;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  (**(code **)(**(int **)(in_ECX + 0x48) + 0x68))
            (*(int **)(in_ECX + 0x48),"chdddd",0xd0,0x2c,param_1,param_2,param_3,param_4);
  FOutputDevice::Logf((FOutputDevice *)GNetworkLog_exref,*(ushort **)GNetworkLog_exref);
  ExceptionList = local_10;
  return;
}


// ==== 1040a9b0 Catch@1040a9b0

void Catch_1040a9b0(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 1040a9c4 Catch@1040a9c4

void Catch_1040a9c4(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"UNetworkHandler::RequestRefine");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1040aa10 FUN_1040aa10

void FUN_1040aa10(undefined4 param_1)

{
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1080e7f0;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  (**(code **)(**(int **)(in_ECX + 0x48) + 0x68))
            (*(int **)(in_ECX + 0x48),&DAT_1088038c,0xd0,0x2d,param_1);
  FOutputDevice::Logf((FOutputDevice *)GNetworkLog_exref,*(ushort **)GNetworkLog_exref);
  ExceptionList = local_10;
  return;
}


// ==== 1040aa84 Catch@1040aa84

void Catch_1040aa84(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 1040aa98 Catch@1040aa98

void Catch_1040aa98(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"UNetworkHandler::RequestConfirmCancelItem");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1040aae0 FUN_1040aae0

void FUN_1040aae0(undefined4 param_1)

{
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1080e800;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  (**(code **)(**(int **)(in_ECX + 0x48) + 0x68))
            (*(int **)(in_ECX + 0x48),&DAT_1088038c,0xd0,0x2e,param_1);
  FOutputDevice::Logf((FOutputDevice *)GNetworkLog_exref,*(ushort **)GNetworkLog_exref);
  ExceptionList = local_10;
  return;
}


// ==== 1040ab54 Catch@1040ab54

void Catch_1040ab54(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 1040ab68 Catch@1040ab68

void Catch_1040ab68(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"UNetworkHandler::RequestRefineCancel");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1040abb0 FUN_1040abb0

void FUN_1040abb0(void)

{
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1080e810;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  (**(code **)(**(int **)(in_ECX + 0x48) + 0x68))(*(int **)(in_ECX + 0x48),&DAT_1088095c,0xd0,0x30);
  ExceptionList = local_10;
  return;
}


// ==== 1040ac0c Catch@1040ac0c

void Catch_1040ac0c(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 1040ac20 Catch@1040ac20

void Catch_1040ac20(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"UNetworkHandler::RequestDuelSurrender");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1040acf0 FUN_1040acf0

void FUN_1040acf0(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = 0;
  in_ECX[1] = 0;
  in_ECX[2] = 0;
  return;
}


// ==== 1040ad50 FUN_1040ad50

void FUN_1040ad50(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = 0;
  in_ECX[1] = 0;
  in_ECX[2] = 0;
  return;
}


// ==== 1040af70 FUN_1040af70

void FUN_1040af70(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = 0;
  in_ECX[1] = 0;
  in_ECX[2] = 0;
  return;
}


// ==== 1040afe0 FUN_1040afe0

void FUN_1040afe0(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = 0;
  in_ECX[1] = 0;
  in_ECX[2] = 0;
  return;
}


// ==== 1040b050 FUN_1040b050

void FUN_1040b050(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = 0;
  in_ECX[1] = 0;
  in_ECX[2] = 0;
  return;
}


// ==== 1040b0c0 FUN_1040b0c0

void FUN_1040b0c0(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = 0;
  in_ECX[1] = 0;
  in_ECX[2] = 0;
  return;
}


// ==== 1040b160 FUN_1040b160

void FUN_1040b160(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = 0;
  in_ECX[1] = 0;
  in_ECX[2] = 0;
  return;
}


// ==== 1040b460 FUN_1040b460

int FUN_1040b460(int param_1)

{
  UClass *pUVar1;
  
  if (param_1 != 0) {
    for (pUVar1 = *(UClass **)(param_1 + 0x24); pUVar1 != (UClass *)0x0;
        pUVar1 = *(UClass **)(pUVar1 + 0x34)) {
      if (pUVar1 == &ALineagePlayerController::PrivateStaticClass) {
        return param_1;
      }
    }
  }
  return 0;
}


// ==== 1040b490 FUN_1040b490

int FUN_1040b490(int param_1)

{
  UClass *pUVar1;
  
  if (param_1 != 0) {
    for (pUVar1 = *(UClass **)(param_1 + 0x24); pUVar1 != (UClass *)0x0;
        pUVar1 = *(UClass **)(pUVar1 + 0x34)) {
      if (pUVar1 == &AServerPrimitive::PrivateStaticClass) {
        return param_1;
      }
    }
  }
  return 0;
}


// ==== 1040b4c0 FUN_1040b4c0

int FUN_1040b4c0(int param_1)

{
  UClass *pUVar1;
  
  if (param_1 != 0) {
    for (pUVar1 = *(UClass **)(param_1 + 0x24); pUVar1 != (UClass *)0x0;
        pUVar1 = *(UClass **)(pUVar1 + 0x34)) {
      if (pUVar1 == &UTexture::PrivateStaticClass) {
        return param_1;
      }
    }
  }
  return 0;
}


// ==== 1040b4f0 FUN_1040b4f0

int FUN_1040b4f0(int param_1)

{
  code *pcVar1;
  
  if (param_1 != 0) {
    for (pcVar1 = *(code **)(param_1 + 0x24); pcVar1 != (code *)0x0;
        pcVar1 = *(code **)(pcVar1 + 0x34)) {
      if (pcVar1 == PrivateStaticClass_exref) {
        return param_1;
      }
    }
    if (PrivateStaticClass_exref == (code *)0x0) {
      return param_1;
    }
  }
  return 0;
}


// ==== 1040b530 FUN_1040b530

void FUN_1040b530(UObject *param_1,ushort *param_2,int param_3)

{
  UObject::StaticFindObject((UClass *)PrivateStaticClass_exref,param_1,param_2,param_3);
  return;
}


// ==== 1040b560 FUN_1040b560

int FUN_1040b560(int param_1)

{
  UClass *pUVar1;
  
  if (param_1 != 0) {
    for (pUVar1 = *(UClass **)(param_1 + 0x24); pUVar1 != (UClass *)0x0;
        pUVar1 = *(UClass **)(pUVar1 + 0x34)) {
      if (pUVar1 == &AVehicle::PrivateStaticClass) {
        return param_1;
      }
    }
  }
  return 0;
}


// ==== 1040b740 FUN_1040b740

int FUN_1040b740(int param_1,int param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  int in_ECX;
  int iVar3;
  
  iVar3 = 0;
  while( true ) {
    if (*(int *)(in_ECX + 0x14) <= iVar3) {
      return 0;
    }
    piVar1 = (int *)(*(int *)(in_ECX + 0x10) + iVar3 * 4);
    iVar2 = *piVar1;
    if (((*(int *)(iVar2 + 4) == param_1) && (*(int *)(iVar2 + 8) == param_2)) &&
       (iVar2 = *piVar1, *(int *)(iVar2 + 0xc) == param_3)) break;
    iVar3 = iVar3 + 1;
  }
  return iVar2;
}


// ==== 1040b7c3 Catch@1040b7c3

void Catch_1040b7c3(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_10914c48);
}


// ==== 1040b7d7 Catch@1040b7d7

void Catch_1040b7d7(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"FindResourceInfo");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1040b830 FUN_1040b830

float10 FUN_1040b830(int param_1)

{
  int *piVar1;
  int iVar2;
  float10 fVar3;
  undefined4 local_4;
  
  local_4 = 0.0;
  if ((((DAT_10c51044 != 0) && (*(int *)(DAT_10c51044 + 0x54) != 0)) &&
      (piVar1 = *(int **)(*(int *)(DAT_10c51044 + 0x54) + 0x38), *piVar1 != 0)) &&
     (iVar2 = *(int *)(*piVar1 + 0x3c), iVar2 != 0)) {
    iVar2 = thunk_FUN_1040b460(iVar2);
    if (iVar2 != 0) {
      fVar3 = (float10)thunk_FUN_10373830(iVar2 + 0x1bc,param_1 + 0x1bc);
      local_4 = (float)fVar3;
    }
  }
  return (float10)local_4;
}


// ==== 1040b8a0 FUN_1040b8a0

undefined4 FUN_1040b8a0(void)

{
  int iVar1;
  int in_ECX;
  
  if ((*(int *)(in_ECX + 0x14) != 0) &&
     (iVar1 = *(int *)(*(int *)(in_ECX + 0x10) + -4 + *(int *)(in_ECX + 0x14) * 4), iVar1 != 0)) {
    return *(undefined4 *)(iVar1 + 4);
  }
  return 0;
}


// ==== 1040b8c0 FUN_1040b8c0

void FUN_1040b8c0(int param_1)

{
  FArray *this;
  int iVar1;
  int in_ECX;
  int iVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1080e910;
  local_10 = ExceptionList;
  local_8 = 0;
  iVar2 = *(int *)(in_ECX + 8);
  if (*(int *)(in_ECX + 8) == 0) {
    ExceptionList = &local_10;
    FArray::Insert((FArray *)(in_ECX + 4),0,1,4);
    **(int **)(in_ECX + 4) = param_1;
    ExceptionList = local_10;
    return;
  }
  do {
    iVar1 = iVar2;
    iVar2 = iVar1 + -1;
    this = (FArray *)(in_ECX + 4);
    if (iVar2 < 0) {
      ExceptionList = &local_10;
      FArray::Insert(this,0,1,4);
      **(int **)this = param_1;
      ExceptionList = local_10;
      return;
    }
  } while (*(float *)(*(int *)(*(int *)this + iVar2 * 4) + 0xc) < *(float *)(param_1 + 0xc));
  ExceptionList = &local_10;
  FArray::Insert(this,iVar1,1,4);
  *(int *)(iVar2 * 4 + 4 + *(int *)this) = param_1;
  ExceptionList = local_10;
  return;
}


// ==== 1040b9be Catch@1040b9be

void Catch_1040b9be(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x1c) = *(undefined4 *)(unaff_EBP + -0x20);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x1c,&DAT_10914c48);
}


// ==== 1040b9d2 Catch@1040b9d2

void Catch_1040b9d2(void)

{
  appUnwindf((ushort *)&DAT_10851d80,
             &`public:_void___thiscall_FNActorResourceLoader::Add(FNPawnResource*)'::__l3::
              __FUNC_NAME__);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1040ba40 FUN_1040ba40

undefined4 FUN_1040ba40(void)

{
  int in_ECX;
  
  if (*(int *)(in_ECX + 8) != 0) {
    return **(undefined4 **)(in_ECX + 4);
  }
  return 0;
}


// ==== 1040ba60 FUN_1040ba60

undefined4 FUN_1040ba60(int param_1,int param_2)

{
  int iVar1;
  int in_ECX;
  int *piVar2;
  
  iVar1 = *(int *)(in_ECX + 8) + -1;
  if (-1 < iVar1) {
    piVar2 = (int *)(*(int *)(in_ECX + 4) + iVar1 * 4);
    do {
      if ((*(int *)(*piVar2 + 4) == param_1) && (*(int *)(*piVar2 + 8) == param_2)) {
        return *(undefined4 *)(*(int *)(in_ECX + 4) + iVar1 * 4);
      }
      iVar1 = iVar1 + -1;
      piVar2 = piVar2 + -1;
    } while (-1 < iVar1);
  }
  return 0;
}


// ==== 1040bac0 FUN_1040bac0

void FUN_1040bac0(int param_1,undefined4 param_2)

{
  int in_ECX;
  
  if (param_1 < *(int *)(in_ECX + 0x24)) {
    *(undefined4 *)(*(int *)(in_ECX + 0x20) + param_1 * 4) = param_2;
  }
  return;
}


// ==== 1040bae0 FUN_1040bae0

float10 FUN_1040bae0(int param_1)

{
  int in_ECX;
  
  if (*(int *)(in_ECX + 0x24) <= param_1) {
    return (float10)0;
  }
  return (float10)*(float *)(*(int *)(in_ECX + 0x20) + param_1 * 4);
}


// ==== 1040bb00 FUN_1040bb00

undefined4 FUN_1040bb00(void)

{
  int iVar1;
  int iVar2;
  FNMonsterRaceInfo *in_ECX;
  float fVar3;
  float fVar4;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1080e920;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffb0;
  local_8 = 0;
  iVar1 = *(int *)(in_ECX + 4);
  local_38 = *(float *)(iVar1 + 0x1bc) - *(float *)(in_ECX + 8);
  local_34 = *(float *)(iVar1 + 0x1c0) - *(float *)(in_ECX + 0xc);
  local_30 = *(float *)(iVar1 + 0x1c4) - *(float *)(in_ECX + 0x10);
  ExceptionList = &local_10;
  local_20 = local_30;
  local_1c = local_34;
  local_18 = local_38;
  fVar3 = FVector::Size((FVector *)&local_38);
  fVar4 = (float)(*(int *)(in_ECX + 0x2c) + 1) * 100.0;
  if (fVar4 < fVar3 != (fVar4 == fVar3)) {
    iVar1 = *(int *)(in_ECX + 4);
    local_44 = *(float *)(iVar1 + 0x1bc) - *(float *)(in_ECX + 8);
    local_40 = *(float *)(iVar1 + 0x1c0) - *(float *)(in_ECX + 0xc);
    local_3c = *(float *)(iVar1 + 0x1c4) - *(float *)(in_ECX + 0x10);
    iVar2 = *(int *)(in_ECX + 0x2c);
    iVar1 = iVar2 + 1;
    local_20 = (float)iVar1;
    local_1c = local_40;
    local_18 = local_3c;
    fVar4 = FVector::Size((FVector *)&local_44);
    local_20 = fVar4 - (float)(int)local_20 * 100.0;
    local_18 = (float)*(int *)(in_ECX + 0x3c);
    local_1c = FNMonsterRaceInfo::GetSpeedRate(in_ECX,iVar2);
    local_1c = local_1c * local_18;
    local_24 = local_20 / local_1c;
    local_20 = 100.0 - local_20;
    local_1c = FNMonsterRaceInfo::GetSpeedRate(in_ECX,iVar1);
    local_1c = local_18 * local_1c;
    local_20 = local_20 / local_1c;
    local_24 = (100.0 / (local_20 + local_24)) / local_18;
    FNMonsterRaceInfo::SetSpeedRate(in_ECX,iVar1,local_24);
    *(int *)(in_ECX + 0x2c) = *(int *)(in_ECX + 0x2c) + 1;
  }
  ExceptionList = local_10;
  return *(undefined4 *)(in_ECX + 0x2c);
}


// ==== 1040bc6c Catch@1040bc6c

void Catch_1040bc6c(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x24) = *(undefined4 *)(unaff_EBP + -0x28);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x24,&DAT_10914c48);
}


// ==== 1040bc80 Catch@1040bc80

void Catch_1040bc80(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"SetSection");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1040bd10 FUN_1040bd10

float10 FUN_1040bd10(int param_1)

{
  float fVar1;
  int iVar2;
  FOutputDevice *in_ECX;
  
  iVar2 = param_1;
  if (*(int *)(in_ECX + 4) != 0) {
    fVar1 = 0.0;
    if (param_1 < *(int *)(in_ECX + 0x24)) {
      param_1 = *(undefined4 *)(*(int *)(in_ECX + 0x20) + param_1 * 4);
    }
    else {
      param_1 = 0;
    }
    *(int *)(*(int *)(in_ECX + 4) + 0x6b4) = param_1;
    if (iVar2 < *(int *)(in_ECX + 0x24)) {
      fVar1 = *(float *)(*(int *)(in_ECX + 0x20) + iVar2 * 4);
    }
    return (float10)fVar1;
  }
  if (*(int *)GLog_exref != 0) {
    FOutputDevice::Logf2(in_ECX,*(ushort **)GLog_exref);
  }
  return (float10)0;
}


// ==== 1040bd90 FUN_1040bd90

int FUN_1040bd90(int param_1)

{
  int iVar1;
  int in_ECX;
  int iVar2;
  
  iVar2 = 0;
  while( true ) {
    if (*(int *)(in_ECX + 0x20) <= iVar2) {
      return 0;
    }
    iVar1 = *(int *)(*(int *)(in_ECX + 0x1c) + iVar2 * 4);
    if ((iVar1 != 0) && (*(int *)(iVar1 + 4) == param_1)) break;
    iVar2 = iVar2 + 1;
  }
  return iVar1;
}


// ==== 1040bdee Catch@1040bdee

void Catch_1040bdee(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_10914c48);
}


// ==== 1040be02 Catch@1040be02

void Catch_1040be02(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"FindMonsterRaceInfo");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1040be50 FUN_1040be50

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
    local_3c = 0x30303031;
    local_38 = 0x31;
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


// ==== 1040c1e5 Catch@1040c1e5

void Catch_1040c1e5(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x2c) = *(undefined4 *)(unaff_EBP + -0x68);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x2c,&DAT_10914c48);
}


// ==== 1040c1f9 Catch@1040c1f9

void Catch_1040c1f9(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"ProtocolVersionPacket");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1040c310 FUN_1040c310

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


// ==== 1040c3d7 Catch@1040c3d7

void Catch_1040c3d7(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x24) = *(undefined4 *)(unaff_EBP + -0x28);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x24,&DAT_10914c48);
}


// ==== 1040c3eb Catch@1040c3eb

void Catch_1040c3eb(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"AuthGameGuardPacket");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1040c450 FUN_1040c450

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


// ==== 1040c559 Catch@1040c559

void Catch_1040c559(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_10914c48);
}


// ==== 1040c56d Catch@1040c56d

void Catch_1040c56d(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"LoginFailPacket2");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1040c5e0 FUN_1040c5e0

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


// ==== 1040c710 FUN_1040c710

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


// ==== 1040c8d0 FUN_1040c8d0

uint FUN_1040c8d0(int param_1,undefined4 param_2)

{
  uint uVar1;
  undefined4 uStack_4;
  
  thunk_FUN_104026b0(*(undefined4 *)(param_1 + 0x4c),param_2,&DAT_10883f30,&uStack_4,&param_1);
  uVar1 = (**(code **)(*(int *)GL2Console + 0x8c))(uStack_4,(int)(char)param_1);
  return uVar1 & 0xffffff00;
}


// ==== 1040c930 FUN_1040c930

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


// ==== 1040cbd0 FUN_1040cbd0

uint FUN_1040cbd0(int param_1,undefined4 param_2)

{
  int iVar1;
  uint extraout_EAX;
  undefined4 uStack_4;
  
  uStack_4 = 0;
  thunk_FUN_104026b0(*(undefined4 *)(param_1 + 0x4c),param_2,&DAT_1087f9dc,&uStack_4);
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
  *(undefined4 *)(*(int *)(DAT_10b1f538 + 0x4c) + 0x50bc) = 0;
  (**(code **)(*(int *)GL2Console + 0x90))(uStack_4);
  FOutputDevice::Logf((FOutputDevice *)GNetworkLog_exref,*(ushort **)GNetworkLog_exref);
  return extraout_EAX & 0xffffff00;
}


// ==== 1040ccd0 FUN_1040ccd0

uint FUN_1040ccd0(int param_1,undefined4 param_2)

{
  int iVar1;
  uint extraout_EAX;
  undefined4 uStack_4;
  
  uStack_4 = 0;
  thunk_FUN_104026b0(*(undefined4 *)(param_1 + 0x4c),param_2,&DAT_1087f9dc,&uStack_4);
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
  (**(code **)(*(int *)GL2Console + 0x90))(uStack_4);
  FOutputDevice::Logf(*(FOutputDevice **)GNetworkLog_exref,
                      (ushort *)*(FOutputDevice **)GNetworkLog_exref);
  return extraout_EAX & 0xffffff00;
}


// ==== 1040cdc0 FUN_1040cdc0

uint FUN_1040cdc0(int param_1,undefined4 param_2)

{
  int iVar1;
  uint extraout_EAX;
  undefined4 uStack_4;
  
  uStack_4 = 0;
  thunk_FUN_104026b0(*(undefined4 *)(param_1 + 0x4c),param_2,&DAT_1087f9dc,&uStack_4);
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
  (**(code **)(*(int *)GL2Console + 0x90))(uStack_4);
  FOutputDevice::Logf(*(FOutputDevice **)GNetworkLog_exref,
                      (ushort *)*(FOutputDevice **)GNetworkLog_exref);
  return extraout_EAX & 0xffffff00;
}


// ==== 1040ceb0 FUN_1040ceb0

uint FUN_1040ceb0(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  uint extraout_EAX;
  int iVar2;
  char cStack_405;
  undefined1 auStack_404 [4];
  undefined1 auStack_400 [1024];
  
  uVar1 = thunk_FUN_104026b0(*(undefined4 *)(param_1 + 0x4c),param_2,&DAT_1087f9dc,&cStack_405);
  iVar2 = 0;
  if ('\0' < cStack_405) {
    do {
      uVar1 = thunk_FUN_104026b0(*(undefined4 *)(param_1 + 0x4c),uVar1,&DAT_10884080,auStack_404,
                                 0x400,auStack_400);
      (**(code **)(*(int *)GL2Console + 0x53c))(auStack_400);
      iVar2 = iVar2 + 1;
    } while (iVar2 < cStack_405);
  }
  *(undefined4 *)(DAT_10b1f538 + 0x50) = 0;
  iVar2 = *(int *)(DAT_10b1f538 + 0x4c);
  if (*(SOCKET *)(iVar2 + 0x38) != 0) {
    closesocket(*(SOCKET *)(iVar2 + 0x38));
    DeleteCriticalSection((LPCRITICAL_SECTION)(iVar2 + 0x4efc));
  }
  *(undefined4 *)(iVar2 + 0x38) = 0;
  *(undefined4 *)(*(int *)(DAT_10b1f538 + 0x4c) + 0x38) = 0;
  *(undefined4 *)(*(int *)(DAT_10b1f538 + 0x4c) + 0x4850) = 0;
  *(undefined4 *)(*(int *)(DAT_10b1f538 + 0x4c) + 0x4854) = 0;
  *(undefined4 *)(*(int *)(DAT_10b1f538 + 0x4c) + 0x50bc) = 0;
  FOutputDevice::Logf((FOutputDevice *)GNetworkLog_exref,*(ushort **)GNetworkLog_exref);
  return extraout_EAX & 0xffffff00;
}


// ==== 1040d000 FUN_1040d000

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


// ==== 1040d250 FUN_1040d250

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


// ==== 1040d3a0 FUN_1040d3a0

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


// ==== 1040d43c Catch@1040d43c

void Catch_1040d43c(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x24) = *(undefined4 *)(unaff_EBP + -0x28);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x24,&DAT_10914c48);
}


// ==== 1040d450 Catch@1040d450

void Catch_1040d450(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"ExUseSharedGroupItem");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1040d4a0 FUN_1040d4a0

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


// ==== 1040d5f8 Catch@1040d5f8

void Catch_1040d5f8(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x28) = *(undefined4 *)(unaff_EBP + -0x2c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x28,&DAT_10914c48);
}


// ==== 1040d60c Catch@1040d60c

void Catch_1040d60c(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"ExMPCCShowPartyMemberInfo");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1040d690 FUN_1040d690

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


// ==== 1040d778 Catch@1040d778

void Catch_1040d778(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x1c) = *(undefined4 *)(unaff_EBP + -0x30);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x1c,&DAT_10914c48);
}


// ==== 1040d78c Catch@1040d78c

void Catch_1040d78c(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"ExNeedToChangeName");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1040d7f0 FUN_1040d7f0

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


// ==== 1040d85a Catch@1040d85a

void Catch_1040d85a(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 1040d86e Catch@1040d86e

void Catch_1040d86e(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"ExPlayScene");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1040d8c0 FUN_1040d8c0

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


// ==== 1040d994 Catch@1040d994

void Catch_1040d994(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x20) = *(undefined4 *)(unaff_EBP + -0x34);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x20,&DAT_10914c48);
}


// ==== 1040d9a8 Catch@1040d9a8

void Catch_1040d9a8(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"ExMPCCPartyInfoUpdate");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1040da10 FUN_1040da10

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


// ==== 1040dace Catch@1040dace

void Catch_1040dace(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_10914c48);
}


// ==== 1040dae2 Catch@1040dae2

void Catch_1040dae2(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"ExDuelAskStart");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1040db40 FUN_1040db40

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


// ==== 1040dbee Catch@1040dbee

void Catch_1040dbee(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_10914c48);
}


// ==== 1040dc02 Catch@1040dc02

void Catch_1040dc02(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"ExDuelReady");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1040dc60 FUN_1040dc60

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


// ==== 1040dd0e Catch@1040dd0e

void Catch_1040dd0e(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_10914c48);
}


// ==== 1040dd22 Catch@1040dd22

void Catch_1040dd22(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"ExDuelStart");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1040dd80 FUN_1040dd80

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


// ==== 1040de2e Catch@1040de2e

void Catch_1040de2e(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_10914c48);
}


// ==== 1040de42 Catch@1040de42

void Catch_1040de42(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"ExDuelEnd");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1040dea0 FUN_1040dea0

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


// ==== 1040dfc7 Catch@1040dfc7

void Catch_1040dfc7(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x38) = *(undefined4 *)(unaff_EBP + -0x3c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x38,&DAT_10914c48);
}


// ==== 1040dfdb Catch@1040dfdb

void Catch_1040dfdb(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"ExDuelUpdateUserInfo");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1040e050 FUN_1040e050

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


// ==== 1040e0cd Catch@1040e0cd

void Catch_1040e0cd(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x20) = *(undefined4 *)(unaff_EBP + -0x24);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x20,&DAT_10914c48);
}


// ==== 1040e0e1 Catch@1040e0e1

void Catch_1040e0e1(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"ExPutItemResultForVariationMake");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1040e130 FUN_1040e130

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


// ==== 1040e1be Catch@1040e1be

void Catch_1040e1be(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x28) = *(undefined4 *)(unaff_EBP + -0x2c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x28,&DAT_10914c48);
}


// ==== 1040e1d2 Catch@1040e1d2

void Catch_1040e1d2(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"ExPutIntensiveResultForVariationMake");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1040e220 FUN_1040e220

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


// ==== 1040e2ae Catch@1040e2ae

void Catch_1040e2ae(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x28) = *(undefined4 *)(unaff_EBP + -0x2c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x28,&DAT_10914c48);
}


// ==== 1040e2c2 Catch@1040e2c2

void Catch_1040e2c2(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"ExPutCommissionResultForVariationMake");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1040e310 FUN_1040e310

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


// ==== 1040e38d Catch@1040e38d

void Catch_1040e38d(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x20) = *(undefined4 *)(unaff_EBP + -0x24);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x20,&DAT_10914c48);
}


// ==== 1040e3a1 Catch@1040e3a1

void Catch_1040e3a1(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"ExVariationResult");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1040e3f0 FUN_1040e3f0

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


// ==== 1040e489 Catch@1040e489

void Catch_1040e489(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x28) = *(undefined4 *)(unaff_EBP + -0x2c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x28,&DAT_10914c48);
}


// ==== 1040e49d Catch@1040e49d

void Catch_1040e49d(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"ExPutItemResultForVariationCancel");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1040e4f0 FUN_1040e4f0

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


// ==== 1040e55e Catch@1040e55e

void Catch_1040e55e(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_10914c48);
}


// ==== 1040e572 Catch@1040e572

void Catch_1040e572(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"ExVariationCancelResult");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1040e690 FUN_1040e690

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


// ==== 1040e710 FUN_1040e710

uint FUN_1040e710(int param_1,undefined4 param_2)

{
  uint extraout_EAX;
  
  thunk_FUN_104026b0(*(undefined4 *)(param_1 + 0x48),param_2,&DAT_1087ff8c,&param_1);
  (**(code **)(**(int **)(DAT_10b1f538 + 0x54) + 0x1f8))(param_1);
  FOutputDevice::Logf(*(FOutputDevice **)GNetworkLog_exref,
                      (ushort *)*(FOutputDevice **)GNetworkLog_exref);
  return extraout_EAX & 0xffffff00;
}


// ==== 1040e780 FUN_1040e780

uint FUN_1040e780(int param_1,undefined4 param_2)

{
  uint extraout_EAX;
  
  thunk_FUN_104026b0(*(undefined4 *)(param_1 + 0x48),param_2,&DAT_1087ff8c,&param_1);
  (**(code **)(**(int **)(DAT_10b1f538 + 0x54) + 0x1fc))(param_1);
  FOutputDevice::Logf(*(FOutputDevice **)GNetworkLog_exref,
                      (ushort *)*(FOutputDevice **)GNetworkLog_exref);
  return extraout_EAX & 0xffffff00;
}


// ==== 1040e7f0 FUN_1040e7f0

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


// ==== 1040e890 FUN_1040e890

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


// ==== 1040e930 FUN_1040e930

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


// ==== 1040e9b0 FUN_1040e9b0

uint FUN_1040e9b0(int param_1,undefined4 param_2)

{
  uint uVar1;
  
  thunk_FUN_104026b0(*(undefined4 *)(param_1 + 0x48),param_2,&DAT_1087ff8c,&param_1);
  uVar1 = (**(code **)(**(int **)(DAT_10b1f538 + 0x54) + 0x4f0))(param_1);
  return uVar1 & 0xffffff00;
}


// ==== 1040ea00 FUN_1040ea00

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


// ==== 1040eb90 FUN_1040eb90

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


// ==== 1040ecc3 Catch@1040ecc3

void Catch_1040ecc3(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x24) = *(undefined4 *)(unaff_EBP + -0x28);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x24,&DAT_10914c48);
}


// ==== 1040ecd7 Catch@1040ecd7

void Catch_1040ecd7(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"TEXT(\"PetInventoryUpdatePacket\")");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1040ed50 FUN_1040ed50

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


// ==== 1040ef99 Catch@1040ef99

void Catch_1040ef99(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x54) = *(undefined4 *)(unaff_EBP + -0x70);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x54,&DAT_10914c48);
}


// ==== 1040efad Catch@1040efad

void Catch_1040efad(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"TEXT(\"PetStatusUpdatePacket\")");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1040f070 FUN_1040f070

uint FUN_1040f070(int param_1,undefined4 param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 unaff_retaddr;
  undefined1 auStack_4 [4];
  
  iVar2 = param_1;
  thunk_FUN_104026b0(*(undefined4 *)(param_1 + 0x48),param_2,&DAT_1087ff44,&param_1,auStack_4);
  (**(code **)(**(int **)(DAT_10b1f538 + 0x54) + 0x4f8))(param_1);
  uVar1 = *(uint *)(iVar2 + 0x48);
  *(undefined4 *)(uVar1 + 0x4f64) = unaff_retaddr;
  *(undefined4 *)(uVar1 + 0x4f68) = 0xffffffff;
  *(undefined4 *)(uVar1 + 0x4f9c) = 0;
  *(undefined4 *)(uVar1 + 0x4fa0) = 0;
  *(undefined4 *)(uVar1 + 0x4fa4) = 0;
  return uVar1 & 0xffffff00;
}


// ==== 1040f100 FUN_1040f100

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


// ==== 1040f2c0 FUN_1040f2c0

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


// ==== 1040f480 FUN_1040f480

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


// ==== 1040f680 FUN_1040f680

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


// ==== 1040f880 FUN_1040f880

uint FUN_1040f880(int param_1)

{
  int iVar1;
  FOutputDevice *this;
  undefined4 uVar2;
  uint uVar3;
  uint extraout_EAX;
  int iVar4;
  User *pUVar5;
  undefined4 *puVar6;
  undefined4 auStackY_744 [118];
  undefined4 uStackY_56c;
  undefined4 uStackY_568;
  undefined4 uStackY_564;
  char *pcStackY_560;
  undefined4 uStackY_55c;
  undefined1 *puStackY_558;
  undefined1 *puStackY_554;
  undefined4 uStackY_550;
  undefined1 *puStackY_54c;
  undefined1 *puStackY_548;
  undefined1 *puStackY_544;
  undefined1 *puStackY_540;
  undefined4 *puStackY_53c;
  undefined1 *puStackY_538;
  undefined1 *puStackY_534;
  undefined1 *puStackY_530;
  undefined1 *puStackY_52c;
  undefined1 *puStackY_528;
  undefined1 *puStackY_524;
  undefined1 *puStackY_520;
  undefined1 *puStackY_51c;
  undefined1 *puStackY_518;
  undefined1 *puStackY_514;
  undefined1 *puStackY_510;
  undefined1 *puStackY_50c;
  undefined1 *puStackY_508;
  undefined1 *puStackY_504;
  undefined1 *puStackY_500;
  undefined1 *puStackY_4fc;
  undefined1 *puStackY_4f8;
  undefined1 *puStackY_4f4;
  undefined1 *puStackY_4f0;
  undefined1 *puStackY_4ec;
  undefined1 *puStackY_4e8;
  undefined1 *puStackY_4e4;
  undefined1 *puStackY_4e0;
  undefined1 *puStackY_4dc;
  undefined1 *puStackY_4d8;
  undefined1 *puStackY_4d4;
  undefined1 *puStackY_4d0;
  undefined1 *puStackY_4cc;
  undefined1 *puStackY_4c8;
  undefined1 *puStackY_4c4;
  undefined1 *puStackY_4c0;
  undefined1 *puStackY_4bc;
  undefined1 *puStackY_4b8;
  undefined1 *puStackY_4b4;
  undefined1 *puStackY_4b0;
  undefined1 *puStackY_4ac;
  undefined1 *puStackY_4a8;
  undefined1 *puStackY_4a4;
  undefined1 *puStackY_4a0;
  undefined1 *puStackY_49c;
  undefined1 *puStackY_498;
  undefined1 *puStackY_494;
  undefined1 *puStackY_490;
  undefined1 *puStackY_48c;
  undefined1 *puStackY_488;
  undefined1 *puStackY_484;
  undefined1 *puStackY_480;
  undefined1 *puStackY_47c;
  undefined1 *puStackY_478;
  undefined1 *puStackY_474;
  undefined1 *puStackY_470;
  undefined1 *puStackY_46c;
  undefined1 *puStackY_468;
  undefined1 *puStackY_464;
  undefined1 *puStackY_460;
  undefined1 *puStackY_45c;
  undefined1 *puStackY_458;
  undefined1 *puStackY_454;
  undefined1 *puStackY_450;
  undefined1 *puStackY_44c;
  uint *puStackY_448;
  undefined1 *puStackY_444;
  undefined1 *puStackY_440;
  undefined1 auStack_420 [32];
  User aUStack_400 [8];
  undefined4 uStack_3f8;
  undefined1 auStack_3e4 [48];
  undefined1 auStack_3b4 [4];
  undefined4 uStack_3b0;
  undefined1 auStack_3ac [4];
  undefined1 auStack_3a8 [4];
  undefined1 auStack_3a4 [8];
  undefined1 auStack_39c [4];
  undefined1 auStack_398 [4];
  undefined1 auStack_394 [4];
  undefined1 auStack_390 [4];
  undefined1 auStack_38c [4];
  undefined1 auStack_388 [4];
  undefined4 uStack_384;
  undefined4 uStack_380;
  undefined4 uStack_37c;
  undefined4 uStack_378;
  undefined4 uStack_36c;
  undefined1 auStack_368 [4];
  undefined1 auStack_364 [4];
  undefined1 auStack_360 [4];
  undefined1 auStack_35c [4];
  undefined1 auStack_358 [4];
  undefined1 auStack_354 [4];
  undefined1 auStack_350 [4];
  undefined1 auStack_34c [4];
  undefined1 auStack_348 [4];
  undefined1 auStack_344 [4];
  undefined1 auStack_340 [4];
  undefined1 auStack_33c [4];
  undefined1 auStack_338 [4];
  undefined1 auStack_334 [4];
  undefined1 auStack_330 [12];
  undefined1 auStack_324 [4];
  undefined1 auStack_320 [184];
  undefined1 auStack_268 [116];
  bool bStack_1f4;
  uint auStack_1f0 [2];
  undefined1 auStack_1e8 [40];
  undefined1 auStack_1c0 [4];
  undefined1 auStack_1bc [4];
  undefined1 auStack_1b8 [120];
  undefined1 auStack_140 [12];
  undefined1 auStack_134 [28];
  int iStack_118;
  uint uStack_110;
  uint uStack_10c;
  undefined1 auStack_ec [4];
  undefined1 auStack_e8 [4];
  undefined1 auStack_e4 [8];
  undefined1 auStack_dc [4];
  undefined1 auStack_d8 [8];
  undefined1 auStack_d0 [4];
  undefined1 auStack_cc [8];
  undefined1 auStack_c4 [4];
  undefined1 auStack_c0 [8];
  undefined1 auStack_b8 [8];
  undefined1 auStack_b0 [8];
  undefined1 auStack_a8 [8];
  undefined1 auStack_a0 [8];
  undefined1 auStack_98 [8];
  undefined1 auStack_90 [4];
  undefined1 auStack_8c [4];
  undefined1 auStack_88 [4];
  undefined1 *puStack_84;
  void *pvStack_80;
  undefined *puStack_7c;
  undefined4 uStack_78;
  undefined1 auStack_74 [4];
  undefined1 auStack_70 [4];
  undefined1 auStack_6c [4];
  undefined1 auStack_68 [4];
  undefined1 auStack_64 [4];
  undefined1 auStack_60 [4];
  undefined1 auStack_5c [4];
  undefined1 auStack_58 [4];
  undefined1 auStack_54 [4];
  undefined1 auStack_50 [4];
  undefined1 auStack_4c [4];
  undefined1 auStack_48 [4];
  undefined1 auStack_44 [4];
  undefined1 auStack_40 [4];
  undefined1 auStack_3c [8];
  uint uStack_34;
  undefined4 uStack_20;
  ushort uStack_1c;
  float fStack_18;
  ushort uStack_14;
  FOutputDevice *pFStack_10;
  float fStack_c;
  char cStack_5;
  
  puStack_7c = &UNK_1080eba0;
  pvStack_80 = ExceptionList;
  puStack_84 = &stack0xfffffbd4;
  uStack_78 = 0;
  ExceptionList = &pvStack_80;
  User::User(aUStack_400);
  uStack_78 = CONCAT31(uStack_78._1_3_,1);
  puStackY_440 = (undefined1 *)0x1040f8d8;
  uVar2 = thunk_FUN_104026b0();
  (**(code **)(*(int *)GL2Console + 0x9c))();
  while( true ) {
    this = pFStack_10;
    uStack_78 = 0;
    if ((int)pFStack_10 < 1) break;
    uStack_78 = 3;
    puStackY_440 = auStack_134;
    puStackY_444 = auStack_140;
    puStackY_448 = auStack_1f0;
    puStackY_44c = auStack_e4;
    puStackY_450 = auStack_d8;
    puStackY_454 = auStack_1b8;
    puStackY_458 = auStack_1bc;
    puStackY_45c = auStack_1c0;
    puStackY_460 = auStack_320;
    puStackY_464 = auStack_324;
    puStackY_468 = auStack_330;
    puStackY_46c = auStack_334;
    puStackY_470 = auStack_338;
    puStackY_474 = auStack_33c;
    puStackY_478 = auStack_340;
    puStackY_47c = auStack_344;
    puStackY_480 = auStack_348;
    puStackY_484 = auStack_34c;
    puStackY_488 = auStack_350;
    puStackY_48c = auStack_354;
    puStackY_490 = auStack_358;
    puStackY_494 = auStack_35c;
    puStackY_498 = auStack_360;
    puStackY_49c = auStack_364;
    puStackY_4a0 = auStack_368;
    puStackY_4a4 = auStack_70;
    puStackY_4a8 = auStack_c4;
    puStackY_4ac = auStack_48;
    puStackY_4b0 = auStack_a0;
    puStackY_4b4 = auStack_50;
    puStackY_4b8 = auStack_ec;
    puStackY_4bc = auStack_58;
    puStackY_4c0 = auStack_a8;
    puStackY_4c4 = auStack_60;
    puStackY_4c8 = auStack_d0;
    puStackY_4cc = auStack_68;
    puStackY_4d0 = auStack_b0;
    puStackY_4d4 = auStack_3c;
    puStackY_4d8 = auStack_e8;
    puStackY_4dc = auStack_88;
    puStackY_4e0 = auStack_b8;
    puStackY_4e4 = auStack_90;
    puStackY_4e8 = auStack_388;
    puStackY_4ec = auStack_38c;
    puStackY_4f0 = auStack_390;
    puStackY_4f4 = auStack_394;
    puStackY_4f8 = auStack_398;
    puStackY_4fc = auStack_39c;
    puStackY_500 = auStack_dc;
    puStackY_504 = auStack_98;
    puStackY_508 = auStack_40;
    puStackY_50c = auStack_268;
    puStackY_510 = auStack_3a8;
    puStackY_514 = auStack_3a4;
    puStackY_518 = auStack_1e8;
    puStackY_51c = auStack_cc;
    puStackY_520 = auStack_c0;
    puStackY_524 = auStack_44;
    puStackY_528 = auStack_4c;
    puStackY_52c = auStack_54;
    puStackY_530 = auStack_5c;
    puStackY_534 = auStack_3ac;
    puStackY_538 = auStack_3b4;
    puStackY_53c = &uStack_20;
    puStackY_540 = auStack_64;
    puStackY_544 = auStack_6c;
    puStackY_54c = auStack_420;
    uStackY_550 = 0x1e;
    puStackY_554 = auStack_8c;
    puStackY_558 = auStack_3e4;
    uStackY_55c = 0x30;
    pcStackY_560 = "SdSddddddddddffdQddddddddddddddddddddddddddddddddddddddddddddddddffdddchh";
    uStackY_568 = *(undefined4 *)(param_1 + 0x48);
    uStackY_56c = 0x1040fab9;
    uStackY_564 = uVar2;
    puStackY_548 = auStack_74;
    pFStack_10 = pFStack_10 + -1;
    uVar2 = thunk_FUN_104026b0();
    uStack_78 = 5;
    uStack_3f8 = 0;
    uStack_36c = 0;
    uStack_380 = FUN_107a6660();
    uStack_378 = FUN_107a6660();
    uStack_3b0 = uStack_20;
    uStack_384 = FUN_107a6660();
    uStack_37c = FUN_107a6660();
    iStack_118 = (int)cStack_5;
    fStack_c = 2.0;
    uStack_34 = 0x1f;
    fStack_18 = 1.0;
    while( true ) {
      if ((uStack_34 & 1) != 0) {
        fStack_18 = fStack_18 * fStack_c;
      }
      uStack_34 = uStack_34 >> 1;
      if (uStack_34 == 0) break;
      fStack_c = fStack_c * fStack_c;
    }
    fStack_c = fStack_18;
    uVar3 = FUN_107a6660();
    bStack_1f4 = (auStack_1f0[0] & uVar3) != 0;
    auStack_1f0[0] = auStack_1f0[0] & 0x7fffffff;
    uStack_110 = (uint)uStack_1c;
    uStack_10c = (uint)uStack_14;
    uStack_78 = 7;
    iVar1 = *(int *)GL2Console;
    pUVar5 = aUStack_400;
    puVar6 = auStackY_744;
    for (iVar4 = 0xc5; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = *(undefined4 *)pUVar5;
      pUVar5 = pUVar5 + 4;
      puVar6 = puVar6 + 1;
    }
    (**(code **)(iVar1 + 0xa0))();
  }
  puStackY_440 = (undefined1 *)0x1040fc75;
  pFStack_10 = pFStack_10 + -1;
  FOutputDevice::Logf(this,*(ushort **)GNetworkLog_exref);
  ExceptionList = pvStack_80;
  return extraout_EAX & 0xffffff00;
}


// ==== 1040fbd5 Catch@1040fbd5

void Catch_1040fbd5(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + 0x48) = *(undefined4 *)(unaff_EBP + -0x20);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + 0x48,&DAT_10914c48);
}


// ==== 1040fbe9 Catch@1040fbe9

void Catch_1040fbe9(void)

{
  appUnwindf((ushort *)&DAT_10851d80,&DAT_10884cec);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1040fc12 Catch@1040fc12

void Catch_1040fc12(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + 0x50) = *(undefined4 *)(unaff_EBP + -0x28);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + 0x50,&DAT_10914c48);
}


// ==== 1040fc26 Catch@1040fc26

void Catch_1040fc26(void)

{
  appUnwindf((ushort *)&DAT_10851d80,&DAT_10884ce8);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1040fc2d Catch@1040fc2d

void Catch_1040fc2d(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + 0x4c) = *(undefined4 *)(unaff_EBP + -0x30);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + 0x4c,&DAT_10914c48);
}


// ==== 1040fc3e Catch@1040fc3e

void Catch_1040fc3e(void)

{
  int unaff_EBP;
  
  appUnwindf((ushort *)&DAT_10851d80,&DAT_10884ce4);
  appUnwindf((ushort *)L"count=%d",*(undefined4 *)(unaff_EBP + 100));
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1040fc8f Catch@1040fc8f

void Catch_1040fc8f(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + 0x44) = *(undefined4 *)(unaff_EBP + -0x38);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + 0x44,&DAT_10914c48);
}


// ==== 1040fca3 Catch@1040fca3

void Catch_1040fca3(void)

{
  appUnwindf((ushort *)&DAT_10851d80,&DAT_10884c60);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1040fcad Catch@1040fcad

void Catch_1040fcad(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + 0x3c) = *(undefined4 *)(unaff_EBP + -0x40);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + 0x3c,&DAT_10914c48);
}


// ==== 1040fcc1 Catch@1040fcc1

void Catch_1040fcc1(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"CharacterSelectionInfoPacket");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1040fde0 FUN_1040fde0

uint FUN_1040fde0(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  UClass *pUVar2;
  UPackage *pUVar3;
  UObject *pUVar4;
  undefined4 uVar5;
  uint uVar6;
  ulong unaff_EBX;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  int iStack_424;
  ulong uStack_420;
  int iStack_41c;
  ulong uStack_418;
  undefined1 auStack_414 [4];
  ulong uStack_410;
  undefined1 auStack_40c [4];
  undefined4 uStack_408;
  undefined1 auStack_404 [4];
  undefined1 auStack_400 [4];
  undefined1 auStack_3fc [4];
  undefined1 auStack_3f8 [4];
  undefined1 auStack_3f4 [4];
  undefined1 auStack_3f0 [4];
  undefined1 auStack_3ec [4];
  undefined1 auStack_3e8 [4];
  undefined1 auStack_3e4 [4];
  undefined1 auStack_3e0 [4];
  undefined1 auStack_3dc [4];
  undefined1 auStack_3d8 [4];
  undefined1 auStack_3d4 [4];
  undefined1 auStack_3d0 [4];
  undefined1 auStack_3cc [4];
  undefined1 auStack_3c8 [4];
  undefined1 auStack_3c4 [4];
  undefined1 auStack_3c0 [4];
  undefined1 auStack_3bc [4];
  undefined1 auStack_3b8 [4];
  undefined1 auStack_3b4 [4];
  undefined1 auStack_3b0 [4];
  undefined1 auStack_3ac [4];
  undefined1 auStack_3a8 [4];
  undefined1 auStack_3a4 [4];
  undefined1 auStack_3a0 [8];
  undefined1 auStack_398 [4];
  undefined1 auStack_394 [4];
  undefined1 auStack_390 [4];
  undefined1 auStack_38c [4];
  undefined1 auStack_388 [4];
  undefined1 auStack_384 [4];
  undefined1 auStack_380 [4];
  undefined1 auStack_37c [8];
  undefined1 uStack_374;
  undefined1 auStack_373 [63];
  User aUStack_334 [8];
  undefined4 uStack_32c;
  undefined1 auStack_318 [48];
  undefined1 auStack_2e8 [4];
  undefined4 uStack_2e4;
  undefined1 auStack_2e0 [4];
  undefined1 auStack_2dc [12];
  undefined1 auStack_2d0 [4];
  undefined1 auStack_2cc [4];
  undefined1 auStack_2c8 [4];
  undefined1 auStack_2c4 [4];
  undefined1 auStack_2c0 [4];
  undefined1 auStack_2bc [8];
  undefined4 uStack_2b4;
  undefined4 uStack_2ac;
  undefined4 uStack_2a0;
  undefined1 auStack_29c [4];
  undefined1 auStack_298 [4];
  undefined1 auStack_294 [4];
  undefined1 auStack_290 [4];
  undefined1 auStack_28c [4];
  undefined1 auStack_288 [4];
  undefined1 auStack_284 [4];
  undefined1 auStack_280 [4];
  undefined1 auStack_27c [4];
  undefined1 auStack_278 [4];
  undefined1 auStack_274 [4];
  undefined1 auStack_270 [4];
  undefined1 auStack_26c [4];
  undefined1 auStack_268 [4];
  undefined1 auStack_264 [12];
  undefined1 auStack_258 [484];
  undefined1 auStack_74 [84];
  undefined1 auStack_20 [32];
  
  if (*(int *)(DAT_10c51044 + 0x74) != 0) {
    uVar1 = (**(code **)(**(int **)(DAT_10c51044 + 0x70) + 0x78))();
    pUVar2 = UObject::StaticLoadClass
                       (&UL2OrcMove::PrivateStaticClass,(UObject *)0x0,(ushort *)L"Engine.OrcMove",
                        (ushort *)0x0,1,(UPackageMap *)0x0);
    uVar5 = *(undefined4 *)GError_exref;
    uVar12 = 0;
    uVar11 = 0;
    uVar10 = 0;
    uVar9 = 0;
    pUVar3 = UObject::GetTransientPackage();
    pUVar4 = UObject::StaticConstructObject(pUVar2,pUVar3,uVar9,uVar10,uVar11,uVar5,uVar12);
    *(UObject **)(DAT_10c51044 + 0x70) = pUVar4;
    (**(code **)(**(int **)(DAT_10c51044 + 0x70) + 0x7c))(uVar1);
  }
  uStack_374 = 0;
  _memset(auStack_373,0,0x3f);
  iStack_424 = 0;
  uStack_420 = 0;
  iStack_41c = 0;
  iVar7 = 0;
  User::User(aUStack_334);
  uVar5 = thunk_FUN_104026b0(*(undefined4 *)(param_1 + 0x48),param_2,
                             "SdSddddddddddffdQddddddddddddddddddddddddddddddddddddddddddd",0x30,
                             auStack_318,auStack_3b0,0x1e,auStack_20,auStack_3b8,auStack_3c0,
                             auStack_3c8,&uStack_408,auStack_2e8,auStack_2e0,auStack_3d0,auStack_3f8
                             ,auStack_414,auStack_400,auStack_3a0,auStack_394,auStack_3d8,
                             auStack_37c,auStack_2dc,auStack_3e0,auStack_3e8,auStack_2d0,auStack_2cc
                             ,auStack_2c8,auStack_2c4,auStack_2c0,auStack_2bc,auStack_3ec,
                             auStack_3b4,auStack_388,auStack_3bc,auStack_398,auStack_3c4,auStack_384
                             ,auStack_3f0,auStack_3a4,auStack_3d4,auStack_380,auStack_3dc,
                             auStack_3ac,auStack_3e4,auStack_38c,auStack_3cc,auStack_29c,auStack_298
                             ,auStack_294,auStack_290,auStack_28c,auStack_288,auStack_284,
                             auStack_280,auStack_27c,auStack_278,auStack_274,auStack_270,auStack_26c
                             ,auStack_268,auStack_264,auStack_258,&uStack_410,&iStack_424);
  if (0 < iStack_424) {
    uVar5 = thunk_FUN_104026b0(*(undefined4 *)(param_1 + 0x48),uVar5,&DAT_1087ff8c,&uStack_420);
    if (0 < (int)uStack_420) {
      iVar7 = (**(code **)**(undefined4 **)GMalloc_exref)(uStack_420,L"InspectorBin");
      uVar5 = thunk_FUN_104026b0(*(undefined4 *)(param_1 + 0x48),uVar5,&DAT_10883ef0,uStack_420,
                                 iVar7);
    }
    iStack_41c = (**(code **)**(undefined4 **)GMalloc_exref)(iStack_424 << 4,L"InspectorParams");
    uStack_418 = 0;
    if (0 < iStack_424) {
      iVar8 = iStack_41c + 8;
      do {
        uVar5 = thunk_FUN_104026b0(*(undefined4 *)(param_1 + 0x48),uVar5,&DAT_108810b0,iVar8 + -8,
                                   iVar8 + -4,iVar8,iVar8 + 4);
        uStack_418 = uStack_418 + 1;
        iVar8 = iVar8 + 0x10;
      } while ((int)uStack_418 < iStack_424);
    }
  }
  uVar5 = thunk_FUN_104026b0(*(undefined4 *)(param_1 + 0x48),uVar5,&DAT_1087ff8c,auStack_74);
  uVar5 = thunk_FUN_104026b0(*(undefined4 *)(param_1 + 0x48),uVar5,&DAT_108810b0,auStack_3f4,
                             auStack_3fc,auStack_404,auStack_40c);
  uVar5 = thunk_FUN_104026b0(*(undefined4 *)(param_1 + 0x48),uVar5,&DAT_1087ff8c,auStack_3a8);
  uVar5 = thunk_FUN_104026b0(*(undefined4 *)(param_1 + 0x48),uVar5,&DAT_1087ff8c,auStack_258);
  thunk_FUN_104026b0(*(undefined4 *)(param_1 + 0x48),uVar5,&DAT_10883ef0,0x40,&uStack_374);
  uStack_2a0 = 0;
  uStack_2b4 = FUN_107a6660();
  uStack_2ac = FUN_107a6660();
  uStack_2e4 = uStack_408;
  uStack_32c = 0;
  iVar8 = **(int **)(DAT_10b1f538 + 0x54);
  uVar5 = FUN_107a6660(uStack_420,iVar7,iStack_424,iStack_41c);
  uVar5 = FUN_107a6660(uVar5);
  uVar5 = FUN_107a6660(uVar5);
  (**(code **)(iVar8 + 0x300))(uVar5);
  if (iVar7 != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))(iVar7);
  }
  FOutputDevice::Logf((FOutputDevice *)GNetworkLog_exref,*(ushort **)GNetworkLog_exref);
  (**(code **)(**(int **)(DAT_10b1f538 + 0x54) + 0x444))(unaff_EBX);
  UGameEngine::OnGameGuardQuery
            (*(UGameEngine **)(DAT_10b1f538 + 0x54),uStack_410,uStack_418,uStack_420,unaff_EBX,1);
  uVar6 = (**(code **)(**(int **)(DAT_10b1f538 + 0x54) + 0xe8))(auStack_390);
  return uVar6 & 0xffffff00;
}


// ==== 10410430 FUN_10410430

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


// ==== 104104b4 Catch@104104b4

void Catch_104104b4(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_10914c48);
}


// ==== 104104c8 Catch@104104c8

void Catch_104104c8(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"GMHidePacket");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10410520 FUN_10410520

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


// ==== 104106a9 Catch@104106a9

void Catch_104106a9(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x34) = *(undefined4 *)(unaff_EBP + -0x4c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x34,&DAT_10914c48);
}


// ==== 104106bd Catch@104106bd

void Catch_104106bd(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"ListPartyWatingPacket");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10410750 FUN_10410750

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


// ==== 1041085c Catch@1041085c

void Catch_1041085c(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x2c) = *(undefined4 *)(unaff_EBP + -0x40);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x2c,&DAT_10914c48);
}


// ==== 10410870 Catch@10410870

void Catch_10410870(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"PartyRoomInfoPacket");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 104108e0 FUN_104108e0

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


// ==== 10410a70 FUN_10410a70

uint FUN_10410a70(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  uint extraout_EAX;
  int iVar4;
  int iStack_188;
  L2ParamStack aLStack_184 [16];
  void *pvStack_174;
  void *pvStack_170;
  int iStack_16c;
  void *pvStack_168;
  void *pvStack_164;
  void *pvStack_160;
  void *pvStack_15c;
  undefined1 auStack_158 [4];
  int iStack_154;
  short asStack_150 [24];
  undefined1 auStack_120 [48];
  undefined1 auStack_f0 [4];
  undefined1 auStack_ec [4];
  undefined1 auStack_e8 [4];
  undefined1 auStack_e4 [4];
  undefined1 auStack_e0 [4];
  undefined1 auStack_dc [4];
  undefined1 auStack_d8 [4];
  undefined1 auStack_d4 [24];
  undefined1 auStack_bc [4];
  undefined1 auStack_b8 [48];
  undefined1 auStack_88 [12];
  undefined1 auStack_7c [16];
  undefined1 auStack_6c [48];
  undefined1 auStack_3c [48];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_1080ec2c;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  thunk_FUN_103ff760();
  uVar1 = thunk_FUN_104026b0(*(undefined4 *)(param_1 + 0x48),param_2,"dSddSS",auStack_158,0x30,
                             auStack_3c,&iStack_154,&iStack_16c,0x30,asStack_150,0x30,auStack_120);
  if ((iStack_154 != 0) && (asStack_150[0] != 0)) {
    uVar1 = thunk_FUN_104026b0(*(undefined4 *)(param_1 + 0x48),uVar1,"dddddddddSdd",auStack_d4,
                               auStack_f0,auStack_ec,auStack_e8,auStack_e4,auStack_e0,auStack_dc,
                               auStack_d8,auStack_bc,0x30,auStack_b8,auStack_88,auStack_7c);
  }
  if (iStack_16c == 0) {
    (**(code **)(**(int **)(DAT_10b1f538 + 0x54) + 0x514))(&iStack_154);
    (**(code **)(**(int **)(DAT_10b1f538 + 0x54) + 0x518))();
  }
  uVar2 = thunk_FUN_104026b0(*(undefined4 *)(param_1 + 0x48),uVar1,&DAT_1087ff8c,&iStack_188);
  iVar4 = 0;
  uVar3 = uVar2;
  if (0 < iStack_188) {
    do {
      uVar3 = thunk_FUN_104026b0(*(undefined4 *)(param_1 + 0x48),uVar3,"Sdddddd",0x30,auStack_6c,
                                 &pvStack_168,&pvStack_164,&pvStack_15c,&pvStack_160,&pvStack_174,
                                 &pvStack_170);
      L2ParamStack::L2ParamStack(aLStack_184,10);
      uStack_4 = 0;
      L2ParamStack::PushBack(aLStack_184,auStack_6c);
      L2ParamStack::PushBack(aLStack_184,pvStack_168);
      L2ParamStack::PushBack(aLStack_184,pvStack_164);
      L2ParamStack::PushBack(aLStack_184,pvStack_15c);
      L2ParamStack::PushBack(aLStack_184,pvStack_160);
      L2ParamStack::PushBack(aLStack_184,pvStack_174);
      L2ParamStack::PushBack(aLStack_184,pvStack_170);
      (**(code **)(**(int **)(DAT_10b1f538 + 0x54) + 0x51c))(aLStack_184);
      uStack_4 = 0xffffffff;
      L2ParamStack::~L2ParamStack(aLStack_184);
      iVar4 = iVar4 + 1;
      uVar2 = extraout_EAX;
    } while (iVar4 < iStack_188);
  }
  ExceptionList = pvStack_c;
  return uVar2 & 0xffffff00;
}


// ==== 10410d50 FUN_10410d50

uint FUN_10410d50(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  uint uVar2;
  uint extraout_EAX;
  undefined1 auStack_5c [4];
  int iStack_58;
  void *pvStack_54;
  void *pvStack_50;
  void *pvStack_4c;
  L2ParamStack aLStack_48 [12];
  undefined1 auStack_3c [48];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_1080ec49;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  uVar1 = thunk_FUN_104026b0(*(undefined4 *)(param_1 + 0x48),param_2,&DAT_108843d0,0x30,auStack_3c,
                             auStack_5c);
  FOutputDevice::Logf((FOutputDevice *)GNetworkLog_exref,*(ushort **)GNetworkLog_exref);
  uVar2 = (**(code **)(**(int **)(DAT_10b1f538 + 0x54) + 0x520))();
  while (0 < iStack_58) {
    iStack_58 = iStack_58 + -1;
    L2ParamStack::L2ParamStack(aLStack_48,10);
    uVar1 = thunk_FUN_104026b0(*(undefined4 *)(param_1 + 0x48),uVar1,&DAT_10881140,&pvStack_54,
                               &pvStack_50,&pvStack_4c,&param_2);
    L2ParamStack::PushBack(aLStack_48,pvStack_54);
    L2ParamStack::PushBack(aLStack_48,pvStack_50);
    L2ParamStack::PushBack(aLStack_48,pvStack_4c);
    L2ParamStack::PushBack(aLStack_48,(void *)(int)(char)param_2);
    (**(code **)(**(int **)(DAT_10b1f538 + 0x54) + 0x524))(aLStack_48);
    L2ParamStack::~L2ParamStack(aLStack_48);
    uVar2 = extraout_EAX;
  }
  ExceptionList = puStack_8;
  return uVar2 & 0xffffff00;
}


// ==== 10410ee0 FUN_10410ee0

uint FUN_10410ee0(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  uint extraout_EAX;
  void *pvStack_54;
  void *pvStack_50;
  undefined1 auStack_4c [4];
  L2ParamStack aLStack_48 [12];
  undefined1 auStack_3c [48];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  iVar1 = param_1;
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_1080ec69;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  uVar2 = thunk_FUN_104026b0(*(undefined4 *)(param_1 + 0x48),param_2,&DAT_108843d0,0x30,auStack_3c,
                             &param_1);
  FOutputDevice::Logf((FOutputDevice *)GNetworkLog_exref,*(ushort **)GNetworkLog_exref);
  uVar3 = (**(code **)(**(int **)(DAT_10b1f538 + 0x54) + 0x528))();
  while (0 < param_2) {
    param_2 = param_2 + -1;
    L2ParamStack::L2ParamStack(aLStack_48,10);
    uVar2 = thunk_FUN_104026b0(*(undefined4 *)(iVar1 + 0x48),uVar2,&DAT_1087ff0c,auStack_4c,
                               &pvStack_54,&pvStack_50);
    L2ParamStack::PushBack(aLStack_48,pvStack_54);
    L2ParamStack::PushBack(aLStack_48,pvStack_50);
    (**(code **)(**(int **)(DAT_10b1f538 + 0x54) + 0x52c))(aLStack_48);
    L2ParamStack::~L2ParamStack(aLStack_48);
    uVar3 = extraout_EAX;
  }
  ExceptionList = puStack_8;
  return uVar3 & 0xffffff00;
}


// ==== 10411040 FUN_10411040

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


// ==== 10411260 FUN_10411260

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


// ==== 10411470 FUN_10411470

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


// ==== 10411690 FUN_10411690

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


// ==== 10411800 FUN_10411800

uint FUN_10411800(int param_1,undefined4 param_2)

{
  uint extraout_EAX;
  
  thunk_FUN_104026b0(*(undefined4 *)(param_1 + 0x48),param_2,&DAT_1087ff8c,&param_1);
  (**(code **)(*(int *)GL2Console + 0x98))(param_1);
  FOutputDevice::Logf((FOutputDevice *)GNetworkLog_exref,*(ushort **)GNetworkLog_exref);
  return extraout_EAX & 0xffffff00;
}


// ==== 10411870 FUN_10411870

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


// ==== 104119cd Catch@104119cd

void Catch_104119cd(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x24) = *(undefined4 *)(unaff_EBP + -0x28);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x24,&DAT_10914c48);
}


// ==== 104119e1 Catch@104119e1

void Catch_104119e1(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"ItemListPacket");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10411a70 FUN_10411a70

uint FUN_10411a70(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  uint extraout_EAX;
  int iVar2;
  short unaff_retaddr;
  undefined4 uStack_44;
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
  
  uVar1 = thunk_FUN_104026b0(*(undefined4 *)(param_1 + 0x48),param_2,&DAT_1087ff8c,&uStack_44);
  (**(code **)(**(int **)(DAT_10b1f538 + 0x54) + 0x2e4))(uStack_44);
  uVar1 = thunk_FUN_104026b0(*(undefined4 *)(param_1 + 0x48),uVar1,&DAT_1088494c,&stack0x00000000);
  iVar2 = 0;
  if (0 < unaff_retaddr) {
    do {
      auStack_40[0] = 0xffff;
      uStack_14 = 0xffffffff;
      uStack_8 = 0xffffffff;
      uStack_44 = 0xffffffff;
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
      uStack_10 = 0;
      uStack_c = 0;
      uVar1 = thunk_FUN_104026b0(*(undefined4 *)(param_1 + 0x48),uVar1,&DAT_1088494c,&uStack_44);
      uVar1 = thunk_FUN_104026b0(*(undefined4 *)(param_1 + 0x48),uVar1,"dddhhdhhh",&uStack_3c,
                                 &uStack_38,&uStack_34,auStack_40,&uStack_24,&uStack_28,&uStack_20,
                                 &uStack_22,&uStack_1c);
      (**(code **)(**(int **)(DAT_10b1f538 + 0x54) + 0x2e8))(auStack_40);
      iVar2 = iVar2 + 1;
    } while (iVar2 < unaff_retaddr);
  }
  FOutputDevice::Logf(*(FOutputDevice **)GNetworkLog_exref,
                      (ushort *)*(FOutputDevice **)GNetworkLog_exref);
  return extraout_EAX & 0xffffff00;
}


// ==== 10411c30 FUN_10411c30

uint FUN_10411c30(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  uint extraout_EAX;
  int iVar3;
  undefined4 uStack_40;
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
  uVar2 = thunk_FUN_104026b0(*(undefined4 *)(param_1 + 0x48),param_2,&DAT_1088494c,&param_1);
  if (0 < (short)param_1) {
    iVar3 = 0;
    do {
      auStack_3c[0] = 0xffff;
      uStack_10 = 0xffffffff;
      uStack_4 = 0xffffffff;
      uStack_40 = 0xffffffff;
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
      uVar2 = thunk_FUN_104026b0(*(undefined4 *)(iVar1 + 0x48),uVar2,&DAT_1088494c,&uStack_40);
      uVar2 = thunk_FUN_104026b0(*(undefined4 *)(iVar1 + 0x48),uVar2,"dddhhdhhh",&uStack_38,
                                 &uStack_34,&uStack_30,auStack_3c,&uStack_20,&uStack_24,&uStack_1c,
                                 &uStack_1e,&uStack_18);
      (**(code **)(**(int **)(DAT_10b1f538 + 0x54) + 0x2ec))(auStack_3c);
      iVar3 = iVar3 + 1;
    } while (iVar3 < (short)param_1);
  }
  FOutputDevice::Logf(*(FOutputDevice **)GNetworkLog_exref,
                      (ushort *)*(FOutputDevice **)GNetworkLog_exref);
  return extraout_EAX & 0xffffff00;
}


// ==== 10411db0 FUN_10411db0

uint FUN_10411db0(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  uint extraout_EAX;
  int iVar3;
  undefined4 uStack_40;
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
  uVar2 = thunk_FUN_104026b0(*(undefined4 *)(param_1 + 0x48),param_2,&DAT_1088494c,&param_1);
  if (0 < (short)param_1) {
    iVar3 = 0;
    do {
      auStack_3c[0] = 0xffff;
      uStack_10 = 0xffffffff;
      uStack_4 = 0xffffffff;
      uStack_40 = 0xffffffff;
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
      uVar2 = thunk_FUN_104026b0(*(undefined4 *)(iVar1 + 0x48),uVar2,&DAT_1088494c,&uStack_40);
      uVar2 = thunk_FUN_104026b0(*(undefined4 *)(iVar1 + 0x48),uVar2,"dddhhdhhh",&uStack_38,
                                 &uStack_34,&uStack_30,auStack_3c,&uStack_20,&uStack_24,&uStack_1c,
                                 &uStack_1e,&uStack_18);
      (**(code **)(**(int **)(DAT_10b1f538 + 0x54) + 0x2f0))(auStack_3c);
      iVar3 = iVar3 + 1;
    } while (iVar3 < (short)param_1);
  }
  FOutputDevice::Logf(*(FOutputDevice **)GNetworkLog_exref,
                      (ushort *)*(FOutputDevice **)GNetworkLog_exref);
  return extraout_EAX & 0xffffff00;
}


// ==== 10411f30 FUN_10411f30

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


// ==== 104120c0 FUN_104120c0

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


// ==== 10412260 FUN_10412260

uint FUN_10412260(int param_1,undefined4 param_2)

{
  uint extraout_EAX;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  thunk_FUN_104026b0(*(undefined4 *)(param_1 + 0x48),param_2,&DAT_1087ff8c,&uStack_4);
  (**(code **)(**(int **)(DAT_10b1f538 + 0x54) + 0x480))(uStack_4);
  FOutputDevice::Logf((FOutputDevice *)GNetworkLog_exref,*(ushort **)GNetworkLog_exref);
  return extraout_EAX & 0xffffff00;
}


// ==== 104122e0 FUN_104122e0

uint FUN_104122e0(int param_1,undefined4 param_2)

{
  uint extraout_EAX;
  
  thunk_FUN_104026b0(*(undefined4 *)(param_1 + 0x48),param_2,&DAT_1087ff8c,&param_1);
  (**(code **)(**(int **)(DAT_10b1f538 + 0x54) + 0x2fc))(param_1);
  FOutputDevice::Logf((FOutputDevice *)GNetworkLog_exref,*(ushort **)GNetworkLog_exref);
  return extraout_EAX & 0xffffff00;
}


// ==== 10412350 FUN_10412350

uint FUN_10412350(int param_1,undefined4 param_2)

{
  uint extraout_EAX;
  
  thunk_FUN_104026b0(*(undefined4 *)(param_1 + 0x48),param_2,&DAT_1087ff8c,&param_1);
  (**(code **)(**(int **)(DAT_10b1f538 + 0x54) + 0x2d0))(param_1);
  FOutputDevice::Logf(*(FOutputDevice **)GNetworkLog_exref,
                      (ushort *)*(FOutputDevice **)GNetworkLog_exref);
  return extraout_EAX & 0xffffff00;
}


// ==== 104123c0 FUN_104123c0

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


// ==== 10412500 Catch@10412500

void Catch_10412500(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x24) = *(undefined4 *)(unaff_EBP + -0x28);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x24,&DAT_10914c48);
}


// ==== 10412514 Catch@10412514

void Catch_10412514(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"TEXT(\"InventoryUpdatePacket\")");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10412590 FUN_10412590

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


// ==== 104126e0 FUN_104126e0

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


// ==== 104127d0 FUN_104127d0

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


// ==== 10412920 FUN_10412920

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


// ==== 10412a70 FUN_10412a70

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


// ==== 10412be0 FUN_10412be0

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


// ==== 10412dc0 FUN_10412dc0

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


// ==== 10412ea0 FUN_10412ea0

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


// ==== 10412fd0 FUN_10412fd0

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


// ==== 10413090 FUN_10413090

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


// ==== 104131f0 FUN_104131f0

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


// ==== 104132d0 FUN_104132d0

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


// ==== 104133b0 FUN_104133b0

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


// ==== 10413490 FUN_10413490

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


// ==== 10413570 FUN_10413570

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


// ==== 1041369d Catch@1041369d

void Catch_1041369d(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x1c) = *(undefined4 *)(unaff_EBP + -0x20);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x1c,&DAT_10914c48);
}


// ==== 104136b1 Catch@104136b1

void Catch_104136b1(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"PledgeCrestPacket");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10413730 FUN_10413730

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


// ==== 10413840 FUN_10413840

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


// ==== 10413920 FUN_10413920

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


// ==== 10413a00 FUN_10413a00

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


// ==== 10413ae0 FUN_10413ae0

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


// ==== 10413bc0 FUN_10413bc0

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


// ==== 10413cd0 FUN_10413cd0

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

void FUN_10413cd0(L2ParamStack *param_1)

{
  void *pvVar1;
  void *pvVar2;
  int iVar3;
  FOutputDevice *this;
  int iVar4;
  undefined1 local_2438 [9224];
  int local_30;
  void *local_2c;
  void *local_24;
  void *local_20;
  int local_1c;
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1080ef60;
  local_10 = ExceptionList;
  local_18 = 0x10413cf3;
  local_14 = &stack0xffffdbbc;
  iVar4 = 0;
  local_8 = 0;
  local_30 = 0;
  ExceptionList = &local_10;
  local_24 = L2ParamStack::Top(param_1);
  local_20 = L2ParamStack::Top(param_1);
  for (local_18 = 0; local_18 < (int)local_20; local_18 = local_18 + 1) {
    local_2c = L2ParamStack::Top(param_1);
    pvVar1 = L2ParamStack::Top(param_1);
    pvVar2 = L2ParamStack::Top(param_1);
    iVar3 = thunk_FUN_10402610(*(undefined4 *)(local_1c + 0x48),local_2438 + iVar4,0x2400 - iVar4,
                               &DAT_1087ff0c,local_2c,pvVar1,pvVar2);
    iVar4 = iVar4 + iVar3;
    local_30 = iVar4;
  }
  (**(code **)(**(int **)(local_1c + 0x48) + 0x68))
            (*(int **)(local_1c + 0x48),"chddb",0xd0,10,local_24,local_20,iVar4,local_2438);
  FOutputDevice::Logf(this,*(ushort **)GNetworkLog_exref);
  ExceptionList = local_10;
  return;
}


// ==== 10413dca Catch@10413dca

void Catch_10413dca(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x24) = *(undefined4 *)(unaff_EBP + -0x30);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x24,&DAT_10914c48);
}


// ==== 10413dde Catch@10413dde

void Catch_10413dde(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"UNetworkHandler::RequestSetSeed");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10413e50 FUN_10413e50

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


// ==== 10414000 FUN_10414000

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


// ==== 104141b0 FUN_104141b0

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


// ==== 10414290 FUN_10414290

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


// ==== 10414600 FUN_10414600

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


// ==== 104148b3 Catch@104148b3

void Catch_104148b3(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x54) = *(undefined4 *)(unaff_EBP + -0x58);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x54,&DAT_10914c48);
}


// ==== 104148c7 Catch@104148c7

void Catch_104148c7(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"TEXT(\"ShortCutInitPacket Function\")");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 104149c0 FUN_104149c0

uint FUN_104149c0(int param_1,undefined4 param_2)

{
  uint extraout_EAX;
  
  thunk_FUN_104026b0(*(undefined4 *)(param_1 + 0x48),param_2,&DAT_1087ff8c,&param_1);
  (**(code **)(**(int **)(DAT_10b1f538 + 0x54) + 0x40c))(param_1);
  FOutputDevice::Logf(*(FOutputDevice **)GNetworkLog_exref,
                      (ushort *)*(FOutputDevice **)GNetworkLog_exref);
  return extraout_EAX & 0xffffff00;
}


// ==== 10414a30 FUN_10414a30

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


// ==== 10414ab0 FUN_10414ab0

uint FUN_10414ab0(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  ushort *puVar2;
  uint extraout_EAX;
  FOutputDevice *pFStack_88c;
  void *pvStack_888;
  int iStack_884;
  int iStack_880;
  L2ParamStack aLStack_87c [16];
  ushort auStack_86c [48];
  ushort auStack_80c [1024];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_1080efdc;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  uVar1 = thunk_FUN_104026b0(*(undefined4 *)(param_1 + 0x48),param_2,&DAT_1087ff44,&pvStack_888,
                             &pFStack_88c);
  if (pFStack_88c == (FOutputDevice *)0xb) {
    thunk_FUN_104026b0(*(undefined4 *)(param_1 + 0x48),uVar1,&DAT_1087ff44,&iStack_880,&iStack_884);
    puVar2 = FString::operator*((FString *)(&DAT_10ba714c + iStack_880 * 0xc));
    appStrcpy(auStack_86c,puVar2);
    puVar2 = FString::operator*((FString *)(&DAT_10b6095c + iStack_884 * 0x5c));
    appStrcpy(auStack_80c,puVar2);
  }
  else {
    thunk_FUN_104026b0(*(undefined4 *)(param_1 + 0x48),uVar1,&DAT_10886084,0x60,auStack_86c,0x800,
                       auStack_80c);
  }
  L2ParamStack::L2ParamStack(aLStack_87c,10);
  uStack_4 = 0;
  L2ParamStack::PushBack(aLStack_87c,pvStack_888);
  L2ParamStack::PushBack(aLStack_87c,pFStack_88c);
  L2ParamStack::PushBack(aLStack_87c,auStack_86c);
  L2ParamStack::PushBack(aLStack_87c,auStack_80c);
  (**(code **)(**(int **)(DAT_10b1f538 + 0x54) + 0x414))(aLStack_87c);
  FOutputDevice::Logf(pFStack_88c,*(ushort **)GNetworkLog_exref);
  uStack_4 = 0xffffffff;
  L2ParamStack::~L2ParamStack(aLStack_87c);
  ExceptionList = pvStack_c;
  return extraout_EAX & 0xffffff00;
}


// ==== 10414cb0 FUN_10414cb0

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


// ==== 10414dc0 FUN_10414dc0

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


// ==== 10414f40 FUN_10414f40

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


// ==== 104150a0 FUN_104150a0

uint FUN_104150a0(int param_1,undefined4 param_2)

{
  uint extraout_EAX;
  undefined1 auStack_30 [48];
  
  thunk_FUN_104026b0(*(undefined4 *)(param_1 + 0x48),param_2,&DAT_108847bc,0x30,auStack_30);
  (**(code **)(**(int **)(DAT_10b1f538 + 0x54) + 0x350))(auStack_30);
  FOutputDevice::Logf(*(FOutputDevice **)GNetworkLog_exref,
                      (ushort *)*(FOutputDevice **)GNetworkLog_exref);
  return extraout_EAX & 0xffffff00;
}


// ==== 10415110 FUN_10415110

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


// ==== 104151c0 FUN_104151c0

uint FUN_104151c0(int param_1,undefined4 param_2)

{
  uint uVar1;
  undefined1 auStack_e8 [4];
  undefined1 auStack_e4 [48];
  undefined1 auStack_b4 [48];
  undefined1 auStack_84 [4];
  undefined1 auStack_80 [4];
  undefined1 auStack_7c [4];
  undefined1 auStack_78 [4];
  undefined1 auStack_74 [4];
  undefined1 auStack_70 [4];
  undefined1 auStack_6c [4];
  undefined1 auStack_68 [24];
  undefined1 auStack_50 [4];
  undefined1 auStack_4c [48];
  undefined1 auStack_1c [28];
  
  thunk_FUN_103ff760();
  thunk_FUN_104026b0(*(undefined4 *)(param_1 + 0x48),param_2,"SddSddddddddSd",0x30,auStack_e4,
                     auStack_e8,auStack_68,0x30,auStack_b4,auStack_84,auStack_80,auStack_7c,
                     auStack_78,auStack_74,auStack_70,auStack_6c,auStack_50,0x30,auStack_4c,
                     auStack_1c);
  uVar1 = (**(code **)(**(int **)(DAT_10b1f538 + 0x54) + 0x324))(auStack_e8);
  return uVar1 & 0xffffff00;
}


// ==== 104152b0 FUN_104152b0

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


// ==== 10415450 FUN_10415450

uint FUN_10415450(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  uint uVar2;
  undefined1 auStack_2c [4];
  int iStack_28;
  void *pvStack_24;
  void *pvStack_20;
  void *pvStack_1c;
  L2ParamStack aLStack_18 [12];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_1080f079;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  uVar1 = thunk_FUN_104026b0(*(undefined4 *)(param_1 + 0x48),param_2,&DAT_1087ff8c,auStack_2c);
  FOutputDevice::Logf((FOutputDevice *)GNetworkLog_exref,*(ushort **)GNetworkLog_exref);
  (**(code **)(*(int *)DAT_10b1f538[0x15] + 0x45c))();
  while (0 < iStack_28) {
    iStack_28 = iStack_28 + -1;
    L2ParamStack::L2ParamStack(aLStack_18,10);
    uVar1 = thunk_FUN_104026b0(*(undefined4 *)(param_1 + 0x48),uVar1,&DAT_10881140,&pvStack_24,
                               &pvStack_20,&pvStack_1c,&param_2);
    L2ParamStack::PushBack(aLStack_18,pvStack_24);
    L2ParamStack::PushBack(aLStack_18,pvStack_20);
    L2ParamStack::PushBack(aLStack_18,pvStack_1c);
    L2ParamStack::PushBack(aLStack_18,(void *)(int)(char)param_2);
    (**(code **)(*(int *)DAT_10b1f538[0x15] + 0x464))(aLStack_18);
    L2ParamStack::~L2ParamStack(aLStack_18);
  }
  iStack_28 = iStack_28 + -1;
  uVar2 = (**(code **)(*DAT_10b1f538 + 0x338))();
  ExceptionList = puStack_8;
  return uVar2 & 0xffffff00;
}


// ==== 104155f0 FUN_104155f0

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


// ==== 104156d0 FUN_104156d0

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


// ==== 1041595b Catch@1041595b

void Catch_1041595b(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x4c) = *(undefined4 *)(unaff_EBP + -0x58);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x4c,&DAT_10914c48);
}


// ==== 1041596f Catch@1041596f

void Catch_1041596f(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"TEXT(\"SystemMessagePacket\")");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10415a70 FUN_10415a70

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


// ==== 10415b80 FUN_10415b80

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

uint FUN_10415b80(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  uint extraout_EAX;
  char cStack_4821;
  uint uStack_4820;
  L2ParamStack aLStack_481c [16];
  undefined1 auStack_480c [256];
  undefined1 auStack_470c [256];
  undefined1 auStack_460c [256];
  undefined1 auStack_450c [256];
  undefined1 auStack_440c [256];
  undefined1 auStack_430c [256];
  undefined1 auStack_420c [256];
  undefined1 auStack_410c [256];
  undefined1 auStack_400c [16380];
  void *pvStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_1080f10c;
  pvStack_c = ExceptionList;
  pvStack_10 = (void *)0x10415b9f;
  ExceptionList = &pvStack_c;
  uVar1 = thunk_FUN_104026b0(*(undefined4 *)(param_1 + 0x48),param_2,&DAT_1087f9dc,&cStack_4821);
  L2ParamStack::L2ParamStack(aLStack_481c,10);
  uStack_4 = 0;
  uStack_4820 = uStack_4820 & 0xffffff00;
  if (cStack_4821 == '\x01') {
    thunk_FUN_104026b0(*(undefined4 *)(param_1 + 0x48),uVar1,"SSSSSSSSS",0x100,auStack_450c,0x100,
                       auStack_430c,0x100,auStack_480c,0x100,auStack_410c,0x100,auStack_470c,0x100,
                       auStack_460c,0x100,auStack_440c,0x100,auStack_420c,0x4000,auStack_400c);
    L2ParamStack::PushBack(aLStack_481c,auStack_450c);
    L2ParamStack::PushBack(aLStack_481c,auStack_430c);
    L2ParamStack::PushBack(aLStack_481c,auStack_480c);
    L2ParamStack::PushBack(aLStack_481c,auStack_410c);
    L2ParamStack::PushBack(aLStack_481c,auStack_470c);
    L2ParamStack::PushBack(aLStack_481c,auStack_460c);
    L2ParamStack::PushBack(aLStack_481c,auStack_440c);
    L2ParamStack::PushBack(aLStack_481c,auStack_420c);
    L2ParamStack::PushBack(aLStack_481c,auStack_400c);
    uStack_4820 = CONCAT31(uStack_4820._1_3_,1);
  }
  (**(code **)(**(int **)(DAT_10b1f538 + 0x54) + 0x478))(uStack_4820,aLStack_481c);
  FOutputDevice::Logf(*(FOutputDevice **)GNetworkLog_exref,
                      (ushort *)*(FOutputDevice **)GNetworkLog_exref);
  puStack_8 = (undefined1 *)0xffffffff;
  L2ParamStack::~L2ParamStack((L2ParamStack *)&uStack_4820);
  ExceptionList = pvStack_10;
  return extraout_EAX & 0xffffff00;
}


// ==== 10415dd0 FUN_10415dd0

uint FUN_10415dd0(int param_1,undefined4 param_2)

{
  uint extraout_EAX;
  
  thunk_FUN_104026b0(*(undefined4 *)(param_1 + 0x48),param_2,&DAT_1087ff8c,&param_1);
  (**(code **)(**(int **)(DAT_10b1f538 + 0x54) + 0x47c))(param_1);
  FOutputDevice::Logf(*(FOutputDevice **)GNetworkLog_exref,
                      (ushort *)*(FOutputDevice **)GNetworkLog_exref);
  return extraout_EAX & 0xffffff00;
}


// ==== 10415e40 FUN_10415e40

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


// ==== 10415ecb Catch@10415ecb

void Catch_10415ecb(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_10914c48);
}


// ==== 10415edf Catch@10415edf

void Catch_10415edf(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"ClientActionPacket");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10415f30 FUN_10415f30

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


// ==== 104160ba Catch@104160ba

void Catch_104160ba(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x34) = *(undefined4 *)(unaff_EBP + -0x38);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x34,&DAT_10914c48);
}


// ==== 104160ce Catch@104160ce

void Catch_104160ce(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"AcquireSkillListPacket");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10416160 FUN_10416160

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


// ==== 10416317 Catch@10416317

void Catch_10416317(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x3c) = *(undefined4 *)(unaff_EBP + -0x40);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x3c,&DAT_10914c48);
}


// ==== 1041632b Catch@1041632b

void Catch_1041632b(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"AcquireSkillInfoPacket");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 104163d0 FUN_104163d0

uint FUN_104163d0(int param_1,undefined4 param_2)

{
  uint extraout_EAX;
  undefined1 auStack_4 [4];
  
  thunk_FUN_104026b0(*(undefined4 *)(param_1 + 0x48),param_2,&DAT_10883f30,auStack_4,&param_1);
  (**(code **)(**(int **)(DAT_10b1f538 + 0x54) + 0x54c))((int)(char)param_1);
  FOutputDevice::Logf((FOutputDevice *)GNetworkLog_exref,*(ushort **)GNetworkLog_exref);
  return extraout_EAX & 0xffffff00;
}


// ==== 10416440 FUN_10416440

uint FUN_10416440(int param_1,undefined4 param_2)

{
  uint extraout_EAX;
  
  thunk_FUN_104026b0(*(undefined4 *)(param_1 + 0x48),param_2,&DAT_1087ff8c,&param_1);
  (**(code **)(**(int **)(DAT_10b1f538 + 0x54) + 0x550))(param_1);
  FOutputDevice::Logf(*(FOutputDevice **)GNetworkLog_exref,
                      (ushort *)*(FOutputDevice **)GNetworkLog_exref);
  return extraout_EAX & 0xffffff00;
}


// ==== 104164b0 FUN_104164b0

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


// ==== 10416880 FUN_10416880

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


// ==== 10416a90 FUN_10416a90

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


// ==== 10416e10 FUN_10416e10

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


// ==== 10417010 FUN_10417010

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


// ==== 10417150 FUN_10417150

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


// ==== 10417230 FUN_10417230

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


// ==== 10417310 FUN_10417310

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


// ==== 104173f0 FUN_104173f0

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


// ==== 104174d0 FUN_104174d0

uint FUN_104174d0(int param_1,undefined4 param_2)

{
  void *pvVar1;
  int iVar2;
  void *pvVar3;
  UObject *pUVar4;
  void *extraout_EAX;
  size_t unaff_EDI;
  undefined4 uVar5;
  int iStack_108;
  int aiStack_104 [65];
  
  pvVar1 = (void *)thunk_FUN_104026b0(*(undefined4 *)(param_1 + 0x48),param_2,&DAT_1087ff44,
                                      &iStack_108,aiStack_104);
  pvVar3 = pvVar1;
  if ((0 < iStack_108) && (0 < aiStack_104[0])) {
    uVar5 = 0;
    iVar2 = (**(code **)(**(int **)GFileManager_exref + 0x28))(L"..\\crest",0);
    pvVar3 = (void *)0x0;
    if (iVar2 != 0) {
      pvVar3 = _malloc(unaff_EDI);
      _memcpy(pvVar3,pvVar1,unaff_EDI);
      appSprintf((ushort *)&iStack_108,(ushort *)L"crest_%d_%d",DAT_10b20f30,uVar5);
      pUVar4 = UObject::StaticFindObject
                         (&UTexture::PrivateStaticClass,(UObject *)0xffffffff,(ushort *)&iStack_108,
                          0);
      if (pUVar4 == (UObject *)0x0) {
        pvVar1 = pvVar3;
        (**(code **)(**(int **)(DAT_10b1f538 + 0x54) + 0x360))
                  (DAT_10b20f30,uVar5,pvVar3,unaff_EDI,0);
        (**(code **)(**(int **)(DAT_10b1f538 + 0x54) + 0x35c))(DAT_10b20f30,pvVar1,0,0);
      }
      _free(pvVar3);
      pvVar3 = extraout_EAX;
    }
  }
  return (uint)pvVar3 & 0xffffff00;
}


// ==== 10417620 FUN_10417620

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


// ==== 10417700 FUN_10417700

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


// ==== 104177e0 FUN_104177e0

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


// ==== 104178c0 FUN_104178c0

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


// ==== 104179a0 FUN_104179a0

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


// ==== 10417b40 FUN_10417b40

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


// ==== 10417c20 FUN_10417c20

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


// ==== 10417d00 FUN_10417d00

uint FUN_10417d00(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  uint extraout_EAX;
  void *pvVar2;
  int iStack_54;
  void *pvStack_50;
  L2ParamStack aLStack_4c [16];
  undefined1 auStack_3c [48];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_1080f3a9;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  uVar1 = thunk_FUN_104026b0(*(undefined4 *)(param_1 + 0x48),param_2,&DAT_1087ff8c,&iStack_54);
  pvVar2 = (void *)0x0;
  if (0 < iStack_54) {
    do {
      uVar1 = thunk_FUN_104026b0(*(undefined4 *)(param_1 + 0x48),uVar1,&DAT_10886b28,&pvStack_50,
                                 0x30,auStack_3c);
      L2ParamStack::L2ParamStack(aLStack_4c,10);
      uStack_4 = 0;
      L2ParamStack::PushBack(aLStack_4c,pvVar2);
      L2ParamStack::PushBack(aLStack_4c,pvStack_50);
      L2ParamStack::PushBack(aLStack_4c,auStack_3c);
      (**(code **)(**(int **)(DAT_10b1f538 + 0x54) + 0x5a4))(aLStack_4c);
      uStack_4 = 0xffffffff;
      L2ParamStack::~L2ParamStack(aLStack_4c);
      pvVar2 = (void *)((int)pvVar2 + 1);
    } while ((int)pvVar2 < iStack_54);
  }
  FOutputDevice::Logf(*(FOutputDevice **)GNetworkLog_exref,
                      (ushort *)*(FOutputDevice **)GNetworkLog_exref);
  ExceptionList = puStack_8;
  return extraout_EAX & 0xffffff00;
}


// ==== 10417e50 FUN_10417e50

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


// ==== 10417fe0 FUN_10417fe0

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


// ==== 104180e0 FUN_104180e0

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


// ==== 10418320 FUN_10418320

uint FUN_10418320(int param_1,undefined4 param_2)

{
  uint extraout_EAX;
  undefined4 uStack_4;
  
  thunk_FUN_104026b0(*(undefined4 *)(param_1 + 0x48),param_2,&DAT_10883f30,&uStack_4,&param_1);
  (**(code **)(**(int **)(DAT_10b1f538 + 0x54) + 700))(uStack_4,(int)(char)param_1);
  FOutputDevice::Logf(*(FOutputDevice **)GNetworkLog_exref,
                      (ushort *)*(FOutputDevice **)GNetworkLog_exref);
  return extraout_EAX & 0xffffff00;
}


// ==== 104183a0 FUN_104183a0

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


// ==== 10418630 FUN_10418630

uint FUN_10418630(int param_1,undefined4 param_2)

{
  uint extraout_EAX;
  FOutputDevice *this;
  int iStack_4;
  
  thunk_FUN_104026b0(*(undefined4 *)(param_1 + 0x48),param_2,&DAT_1087ff44,&param_1,&iStack_4);
  UGameEngine::OnSetSummonRemainTime(*(UGameEngine **)(DAT_10b1f538 + 0x54),iStack_4,param_1);
  FOutputDevice::Logf(this,*(ushort **)GNetworkLog_exref);
  return extraout_EAX & 0xffffff00;
}


// ==== 104186a0 FUN_104186a0

uint FUN_104186a0(int param_1,undefined4 param_2)

{
  uint extraout_EAX;
  
  thunk_FUN_104026b0(*(undefined4 *)(param_1 + 0x48),param_2,&DAT_1087ff8c,&param_1);
  (**(code **)(*DAT_10b1f538 + 0x448))(param_1);
  FOutputDevice::Logf(*(FOutputDevice **)GNetworkLog_exref,
                      (ushort *)*(FOutputDevice **)GNetworkLog_exref);
  return extraout_EAX & 0xffffff00;
}


// ==== 10418700 FUN_10418700

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


// ==== 10418870 FUN_10418870

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


// ==== 10418960 FUN_10418960

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


// ==== 10418a90 FUN_10418a90

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


// ==== 10418c10 FUN_10418c10

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


// ==== 10418d30 FUN_10418d30

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


// ==== 10418de0 FUN_10418de0

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


// ==== 10418f20 FUN_10418f20

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


// ==== 10419050 FUN_10419050

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


// ==== 10419160 FUN_10419160

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


// ==== 10419250 FUN_10419250

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


// ==== 104193d0 FUN_104193d0

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


// ==== 10419530 FUN_10419530

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


// ==== 104196f0 FUN_104196f0

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


// ==== 104198b0 FUN_104198b0

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


// ==== 10419a30 FUN_10419a30

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


// ==== 10419ce0 FUN_10419ce0

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


// ==== 10419e40 FUN_10419e40

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


// ==== 10419f90 FUN_10419f90

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


// ==== 1041a090 FUN_1041a090

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


// ==== 1041a308 Catch@1041a308

void Catch_1041a308(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x38) = *(undefined4 *)(unaff_EBP + -0x68);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x38,&DAT_10914c48);
}


// ==== 1041a31c Catch@1041a31c

void Catch_1041a31c(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"ConfirmDlgPacket");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1041a410 FUN_1041a410

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


// ==== 1041a570 FUN_1041a570

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


// ==== 1041a700 FUN_1041a700

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


// ==== 1041a7c0 FUN_1041a7c0

uint FUN_1041a7c0(int param_1,undefined4 param_2)

{
  uint uVar1;
  
  thunk_FUN_104026b0(*(undefined4 *)(param_1 + 0x48),param_2,&DAT_1087ff8c,&param_1);
  uVar1 = (**(code **)(**(int **)(DAT_10b1f538 + 0x54) + 0x69c))(param_1);
  return uVar1 & 0xffffff00;
}


// ==== 1041a810 FUN_1041a810

uint FUN_1041a810(int param_1,undefined4 param_2)

{
  uint extraout_EAX;
  
  thunk_FUN_104026b0(*(undefined4 *)(param_1 + 0x48),param_2,&DAT_1087ff8c,&param_1);
  (**(code **)(**(int **)(DAT_10b1f538 + 0x54) + 0x6a0))(param_1);
  FOutputDevice::Logf(*(FOutputDevice **)GNetworkLog_exref,
                      (ushort *)*(FOutputDevice **)GNetworkLog_exref);
  return extraout_EAX & 0xffffff00;
}


// ==== 1041a880 FUN_1041a880

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


// ==== 1041aaf0 FUN_1041aaf0

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


// ==== 1041ac20 FUN_1041ac20

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

uint FUN_1041ac20(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  code *pcVar2;
  uint extraout_EAX;
  int iVar3;
  undefined1 *puVar4;
  char cStack_b451;
  char cStack_b450;
  char cStack_b44f;
  char cStack_b44e;
  char cStack_b44d;
  char cStack_b44c;
  char cStack_b44b;
  char cStack_b44a;
  char cStack_b449;
  L2ParamStack aLStack_b448 [4];
  L2ParamStack aLStack_b444 [12];
  void *pvStack_b438;
  void *pvStack_b434;
  void *pvStack_b430;
  void *pvStack_b42c;
  void *pvStack_b428;
  void *pvStack_b424;
  void *pvStack_b420;
  void *pvStack_b41c;
  void *pvStack_b418;
  void *pvStack_b414;
  void *pvStack_b410;
  undefined1 auStack_b40c [23040];
  undefined1 auStack_5a0c [23036];
  undefined4 uStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_1080f57c;
  pvStack_c = ExceptionList;
  uStack_10 = 0x1041ac3f;
  cStack_b44a = '\0';
  ExceptionList = &pvStack_c;
  uVar1 = thunk_FUN_104026b0(*(undefined4 *)(param_1 + 0x48),param_2,&DAT_1087f9dc,&cStack_b44a);
  cStack_b449 = '\0';
  uVar1 = thunk_FUN_104026b0(*(undefined4 *)(param_1 + 0x48),uVar1,&DAT_1087f9dc,&cStack_b449);
  L2ParamStack::L2ParamStack(aLStack_b448,200);
  iVar3 = 0;
  uStack_4 = 0;
  L2ParamStack::PushBack(aLStack_b448,(void *)(int)cStack_b449);
  if (cStack_b44a == '\x01') {
    thunk_FUN_104026b0(*(undefined4 *)(param_1 + 0x48),uVar1,"dddccdddddcdddc",&pvStack_b428,
                       &pvStack_b42c,&pvStack_b438,&cStack_b451,&cStack_b44e,&pvStack_b434,
                       &pvStack_b418,&pvStack_b414,&pvStack_b41c,&pvStack_b424,&cStack_b44f,
                       &pvStack_b410,&pvStack_b420,&pvStack_b430,&cStack_b450);
    L2ParamStack::PushBack(aLStack_b448,pvStack_b428);
    L2ParamStack::PushBack(aLStack_b448,pvStack_b42c);
    L2ParamStack::PushBack(aLStack_b448,pvStack_b438);
    L2ParamStack::PushBack(aLStack_b448,(void *)(int)cStack_b451);
    L2ParamStack::PushBack(aLStack_b448,(void *)(int)cStack_b44e);
    L2ParamStack::PushBack(aLStack_b448,pvStack_b434);
    L2ParamStack::PushBack(aLStack_b448,pvStack_b418);
    L2ParamStack::PushBack(aLStack_b448,pvStack_b414);
    L2ParamStack::PushBack(aLStack_b448,pvStack_b41c);
    L2ParamStack::PushBack(aLStack_b448,pvStack_b410);
    L2ParamStack::PushBack(aLStack_b448,pvStack_b420);
    L2ParamStack::PushBack(aLStack_b448,(void *)(int)cStack_b44f);
    L2ParamStack::PushBack(aLStack_b448,(void *)(int)cStack_b450);
    L2ParamStack::PushBack(aLStack_b448,pvStack_b424);
    L2ParamStack::PushBack(aLStack_b448,pvStack_b430);
    pcVar2 = *(code **)(**(int **)(DAT_10b1f538 + 0x54) + 0x658);
  }
  else {
    if (cStack_b44a == '\x02') {
      (**(code **)(**(int **)(DAT_10b1f538 + 0x54) + 0x660))();
      cStack_b450 = '\0';
      uVar1 = thunk_FUN_104026b0(*(undefined4 *)(param_1 + 0x48),uVar1,&DAT_1087f9dc,&cStack_b450);
      L2ParamStack::PushBack(aLStack_b448,(void *)(int)cStack_b450);
      pvStack_b428 = (void *)0x0;
      if ('\0' < cStack_b450) {
        do {
          uVar1 = thunk_FUN_104026b0(*(undefined4 *)(param_1 + 0x48),uVar1,&DAT_10881a1c,
                                     &cStack_b44d,&cStack_b451);
          L2ParamStack::PushBack(aLStack_b448,(void *)(int)cStack_b44d);
          L2ParamStack::PushBack(aLStack_b448,(void *)(int)cStack_b451);
          pvStack_b42c = (void *)0x0;
          if ('\0' < cStack_b451) {
            pvStack_b434 = (void *)0x0;
            do {
              uVar1 = thunk_FUN_104026b0(*(undefined4 *)(param_1 + 0x48),uVar1,&DAT_1087f698,
                                         &cStack_b44c,&pvStack_b430,&pvStack_b424,&cStack_b44f);
              L2ParamStack::PushBack(aLStack_b448,(void *)(int)cStack_b44c);
              L2ParamStack::PushBack(aLStack_b448,pvStack_b430);
              L2ParamStack::PushBack(aLStack_b448,pvStack_b424);
              L2ParamStack::PushBack(aLStack_b448,(void *)(int)cStack_b44f);
              pvStack_b438 = (void *)0x0;
              if ('\0' < cStack_b44f) {
                puVar4 = auStack_b40c + (int)pvStack_b434;
                do {
                  uVar1 = thunk_FUN_104026b0(*(undefined4 *)(param_1 + 0x48),uVar1,&DAT_108847bc,
                                             0x200,puVar4);
                  L2ParamStack::PushBack(aLStack_b448,puVar4);
                  pvStack_b438 = (void *)((int)pvStack_b438 + 1);
                  puVar4 = puVar4 + 0x200;
                } while ((int)pvStack_b438 < (int)cStack_b44f);
              }
              uVar1 = thunk_FUN_104026b0(*(undefined4 *)(param_1 + 0x48),uVar1,&DAT_10883f30,
                                         &pvStack_b420,&cStack_b44e);
              L2ParamStack::PushBack(aLStack_b448,pvStack_b420);
              L2ParamStack::PushBack(aLStack_b448,(void *)(int)cStack_b44e);
              pvStack_b438 = (void *)0x0;
              if ('\0' < cStack_b44e) {
                puVar4 = auStack_5a0c + (int)pvStack_b434;
                do {
                  uVar1 = thunk_FUN_104026b0(*(undefined4 *)(param_1 + 0x48),uVar1,&DAT_108847bc,
                                             0x200,puVar4);
                  L2ParamStack::PushBack(aLStack_b448,puVar4);
                  pvStack_b438 = (void *)((int)pvStack_b438 + 1);
                  puVar4 = puVar4 + 0x200;
                } while ((int)pvStack_b438 < (int)cStack_b44e);
              }
              pvStack_b434 = (void *)((int)pvStack_b434 + 0x1200);
              pvStack_b42c = (void *)((int)pvStack_b42c + 1);
            } while ((int)pvStack_b42c < (int)cStack_b451);
          }
          pvStack_b428 = (void *)((int)pvStack_b428 + 1);
        } while ((int)pvStack_b428 < (int)cStack_b450);
      }
      (**(code **)(**(int **)(DAT_10b1f538 + 0x54) + 0x664))(aLStack_b448);
      goto LAB_1041b190;
    }
    if (cStack_b44a == '\x03') {
      uVar1 = thunk_FUN_104026b0(*(undefined4 *)(param_1 + 0x48),uVar1,&DAT_10887580,&cStack_b44c,
                                 &cStack_b44d,&cStack_b451);
      L2ParamStack::PushBack(aLStack_b448,(void *)(int)cStack_b44c);
      L2ParamStack::PushBack(aLStack_b448,(void *)(int)cStack_b44d);
      L2ParamStack::PushBack(aLStack_b448,(void *)(int)cStack_b451);
      if ('\0' < cStack_b451) {
        do {
          uVar1 = thunk_FUN_104026b0(*(undefined4 *)(param_1 + 0x48),uVar1,&DAT_10887578,
                                     &cStack_b44e,&cStack_b44f,&cStack_b450,&cStack_b44b);
          L2ParamStack::PushBack(aLStack_b448,(void *)(int)cStack_b44e);
          L2ParamStack::PushBack(aLStack_b448,(void *)(int)cStack_b44f);
          L2ParamStack::PushBack(aLStack_b448,(void *)(int)cStack_b450);
          L2ParamStack::PushBack(aLStack_b448,(void *)(int)cStack_b44b);
          iVar3 = iVar3 + 1;
        } while (iVar3 < cStack_b451);
      }
      pcVar2 = *(code **)(**(int **)(DAT_10b1f538 + 0x54) + 0x668);
    }
    else {
      if (cStack_b44a != '\x04') goto LAB_1041b190;
      uVar1 = thunk_FUN_104026b0(*(undefined4 *)(param_1 + 0x48),uVar1,&DAT_10881a1c,&cStack_b44b,
                                 &cStack_b451);
      L2ParamStack::PushBack(aLStack_b448,(void *)(int)cStack_b44b);
      L2ParamStack::PushBack(aLStack_b448,(void *)(int)cStack_b451);
      if ('\0' < cStack_b451) {
        do {
          uVar1 = thunk_FUN_104026b0(*(undefined4 *)(param_1 + 0x48),uVar1,&DAT_10887574,
                                     &cStack_b44c,&cStack_b44d,&pvStack_b430);
          L2ParamStack::PushBack(aLStack_b448,(void *)(int)cStack_b44c);
          L2ParamStack::PushBack(aLStack_b448,(void *)(int)cStack_b44d);
          L2ParamStack::PushBack(aLStack_b448,pvStack_b430);
          iVar3 = iVar3 + 1;
        } while (iVar3 < cStack_b451);
      }
      pcVar2 = *(code **)(**(int **)(DAT_10b1f538 + 0x54) + 0x65c);
    }
  }
  (*pcVar2)(aLStack_b448);
LAB_1041b190:
  FOutputDevice::Logf((FOutputDevice *)GNetworkLog_exref,*(ushort **)GNetworkLog_exref);
  L2ParamStack::~L2ParamStack(aLStack_b444);
  ExceptionList = puStack_8;
  return extraout_EAX & 0xffffff00;
}


// ==== 1041b350 FUN_1041b350

uint FUN_1041b350(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  uint extraout_EAX;
  
  uVar1 = thunk_FUN_104026b0(*(undefined4 *)(param_1 + 0x48),param_2,&DAT_1087ff8c,&param_1);
  (**(code **)(**(int **)(DAT_10b1f538 + 0x54) + 0x670))(param_1,uVar1);
  FOutputDevice::Logf(*(FOutputDevice **)GNetworkLog_exref,
                      (ushort *)*(FOutputDevice **)GNetworkLog_exref);
  return extraout_EAX & 0xffffff00;
}


// ==== 1041b3c0 FUN_1041b3c0

uint FUN_1041b3c0(int param_1,undefined4 param_2)

{
  uint extraout_EAX;
  undefined4 uStack_4;
  
  thunk_FUN_104026b0(*(undefined4 *)(param_1 + 0x48),param_2,&DAT_10881a1c,&uStack_4,&param_1);
  (**(code **)(**(int **)(DAT_10b1f538 + 0x54) + 0x66c))(uStack_4,param_1);
  FOutputDevice::Logf((FOutputDevice *)GNetworkLog_exref,*(ushort **)GNetworkLog_exref);
  return extraout_EAX & 0xffffff00;
}


// ==== 1041b440 FUN_1041b440

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


// ==== 1041b4d0 FUN_1041b4d0

uint FUN_1041b4d0(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  uint extraout_EAX;
  int iVar3;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined1 auStack_30 [48];
  
  iVar1 = param_1;
  uVar2 = thunk_FUN_104026b0(*(undefined4 *)(param_1 + 0x48),param_2,&DAT_1087ff8c,&param_1);
  (**(code **)(**(int **)(DAT_10b1f538 + 0x54) + 0x6a4))();
  iVar3 = 0;
  if (0 < param_1) {
    do {
      uVar2 = thunk_FUN_104026b0(*(undefined4 *)(iVar1 + 0x48),uVar2,&DAT_108876a0,&uStack_34,0x30,
                                 auStack_30,&uStack_38,&uStack_3c);
      (**(code **)(**(int **)(DAT_10b1f538 + 0x54) + 0x6a8))
                (uStack_34,auStack_30,uStack_38,uStack_3c);
      iVar3 = iVar3 + 1;
    } while (iVar3 < param_1);
  }
  (**(code **)(**(int **)(DAT_10b1f538 + 0x54) + 0x6ac))();
  FOutputDevice::Logf((FOutputDevice *)GNetworkLog_exref,*(ushort **)GNetworkLog_exref);
  return extraout_EAX & 0xffffff00;
}


// ==== 1041b5d0 FUN_1041b5d0

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


// ==== 1041b670 FUN_1041b670

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


// ==== 1041b700 FUN_1041b700

uint FUN_1041b700(int param_1,undefined4 param_2)

{
  uint extraout_EAX;
  undefined4 uStack_464;
  undefined1 auStack_460 [48];
  undefined1 auStack_430 [48];
  undefined1 auStack_400 [1024];
  
  thunk_FUN_104026b0(*(undefined4 *)(param_1 + 0x48),param_2,&DAT_10886854,&uStack_464,0x30,
                     auStack_430,0x30,auStack_460,0x400,auStack_400);
  (**(code **)(**(int **)(DAT_10b1f538 + 0x54) + 0x6b8))(uStack_464,auStack_460,auStack_400);
  FOutputDevice::Logf(*(FOutputDevice **)GNetworkLog_exref,
                      (ushort *)*(FOutputDevice **)GNetworkLog_exref);
  return extraout_EAX & 0xffffff00;
}


// ==== 1041b7b0 FUN_1041b7b0

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


// ==== 1041b850 FUN_1041b850

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


// ==== 1041b937 Catch@1041b937

void Catch_1041b937(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x34);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_10914c48);
}


// ==== 1041b94b Catch@1041b94b

void Catch_1041b94b(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"ExEventMatchListPacket");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1041b9b0 FUN_1041b9b0

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


// ==== 1041ba46 Catch@1041ba46

void Catch_1041ba46(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x20);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_10914c48);
}


// ==== 1041ba5a Catch@1041ba5a

void Catch_1041ba5a(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"ExEventMatchListPacket");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1041bab0 FUN_1041bab0

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


// ==== 1041bb2d Catch@1041bb2d

void Catch_1041bb2d(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x20) = *(undefined4 *)(unaff_EBP + -0x24);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x20,&DAT_10914c48);
}


// ==== 1041bb41 Catch@1041bb41

void Catch_1041bb41(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"ExEventMatchListPacket");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1041bb90 FUN_1041bb90

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


// ==== 1041bd30 Catch@1041bd30

void Catch_1041bd30(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x50) = *(undefined4 *)(unaff_EBP + -0x58);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x50,&DAT_10914c48);
}


// ==== 1041bd44 Catch@1041bd44

void Catch_1041bd44(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"ExEventMatchListPacket");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1041bde0 FUN_1041bde0

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


// ==== 1041be64 Catch@1041be64

void Catch_1041be64(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_10914c48);
}


// ==== 1041be78 Catch@1041be78

void Catch_1041be78(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"ExEventMatchListPacket");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1041bed0 FUN_1041bed0

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


// ==== 1041bf9e Catch@1041bf9e

void Catch_1041bf9e(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x38) = *(undefined4 *)(unaff_EBP + -0x40);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x38,&DAT_10914c48);
}


// ==== 1041bfb2 Catch@1041bfb2

void Catch_1041bfb2(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"ExEventMatchUserInfoPacket");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1041c010 FUN_1041c010

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


// ==== 1041c109 Catch@1041c109

void Catch_1041c109(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x30) = *(undefined4 *)(unaff_EBP + -0x34);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x30,&DAT_10914c48);
}


// ==== 1041c11d Catch@1041c11d

void Catch_1041c11d(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"ExEventMatchSpelledInfoPacket");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1041c190 FUN_1041c190

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


// ==== 1041c206 Catch@1041c206

void Catch_1041c206(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x1c) = *(undefined4 *)(unaff_EBP + -0x20);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x1c,&DAT_10914c48);
}


// ==== 1041c21a Catch@1041c21a

void Catch_1041c21a(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"ExEventMatchTeamUnlockedPacket");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1041c260 FUN_1041c260

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


// ==== 1041c3a9 Catch@1041c3a9

void Catch_1041c3a9(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x34) = *(undefined4 *)(unaff_EBP + -0x48);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x34,&DAT_10914c48);
}


// ==== 1041c3bd Catch@1041c3bd

void Catch_1041c3bd(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"ExPartyRoomMemberPacket");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1041c440 FUN_1041c440

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


// ==== 1041c54c Catch@1041c54c

void Catch_1041c54c(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x2c) = *(undefined4 *)(unaff_EBP + -0x40);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x2c,&DAT_10914c48);
}


// ==== 1041c560 Catch@1041c560

void Catch_1041c560(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"ExManagePartyRoomMemberPacket");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1041c5d0 FUN_1041c5d0

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


// ==== 1041c68c Catch@1041c68c

void Catch_1041c68c(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x1c) = *(undefined4 *)(unaff_EBP + -0x20);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x1c,&DAT_10914c48);
}


// ==== 1041c6a0 Catch@1041c6a0

void Catch_1041c6a0(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"ExAutoSoulShot");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1041c700 FUN_1041c700

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


// ==== 1041c860 Catch@1041c860

void Catch_1041c860(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x28) = *(undefined4 *)(unaff_EBP + -0x2c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x28,&DAT_10914c48);
}


// ==== 1041c874 Catch@1041c874

void Catch_1041c874(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"ExEnchantSkillListPacket");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1041c900 FUN_1041c900

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


// ==== 1041cad6 Catch@1041cad6

void Catch_1041cad6(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x3c) = *(undefined4 *)(unaff_EBP + -0x40);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x3c,&DAT_10914c48);
}


// ==== 1041caea Catch@1041caea

void Catch_1041caea(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"ExEnchantSkillInfoPacket");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1041cb90 FUN_1041cb90

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


// ==== 1041cc27 Catch@1041cc27

void Catch_1041cc27(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_10914c48);
}


// ==== 1041cc3b Catch@1041cc3b

void Catch_1041cc3b(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"ExShowQuestMarkPacket");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1041cc90 FUN_1041cc90

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


// ==== 1041cd8f Catch@1041cd8f

void Catch_1041cd8f(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x20) = *(undefined4 *)(unaff_EBP + -0x24);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x20,&DAT_10914c48);
}


// ==== 1041cda3 Catch@1041cda3

void Catch_1041cda3(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"ExSendManorListPacket");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1041ce10 FUN_1041ce10

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


// ==== 1041cfff Catch@1041cfff

void Catch_1041cfff(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x4c) = *(undefined4 *)(unaff_EBP + -0x50);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x4c,&DAT_10914c48);
}


// ==== 1041d013 Catch@1041d013

void Catch_1041d013(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"ExShowSeedInfoPacket");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1041d0c0 FUN_1041d0c0

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


// ==== 1041d2be Catch@1041d2be

void Catch_1041d2be(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x4c) = *(undefined4 *)(unaff_EBP + -0x50);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x4c,&DAT_10914c48);
}


// ==== 1041d2d2 Catch@1041d2d2

void Catch_1041d2d2(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"ExShowCropInfoPacket");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1041d380 FUN_1041d380

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


// ==== 1041d543 Catch@1041d543

void Catch_1041d543(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x40) = *(undefined4 *)(unaff_EBP + -0x44);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x40,&DAT_10914c48);
}


// ==== 1041d557 Catch@1041d557

void Catch_1041d557(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"ExShowManorDefaultInfoPacket");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1041d600 FUN_1041d600

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


// ==== 1041d828 Catch@1041d828

void Catch_1041d828(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x5c) = *(undefined4 *)(unaff_EBP + -0x60);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x5c,&DAT_10914c48);
}


// ==== 1041d83c Catch@1041d83c

void Catch_1041d83c(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"ExShowSeedSettingPacket");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1041d8f0 FUN_1041d8f0

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


// ==== 1041db31 Catch@1041db31

void Catch_1041db31(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x5c) = *(undefined4 *)(unaff_EBP + -0x60);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x5c,&DAT_10914c48);
}


// ==== 1041db45 Catch@1041db45

void Catch_1041db45(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"ExShowCropSettingPacket");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1041dc00 FUN_1041dc00

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


// ==== 1041de15 Catch@1041de15

void Catch_1041de15(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x50) = *(undefined4 *)(unaff_EBP + -0x54);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x50,&DAT_10914c48);
}


// ==== 1041de29 Catch@1041de29

void Catch_1041de29(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"ExShowSellCropListPacket");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1041dee0 FUN_1041dee0

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


// ==== 1041dff9 Catch@1041dff9

void Catch_1041dff9(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x30) = *(undefined4 *)(unaff_EBP + -0x34);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x30,&DAT_10914c48);
}


// ==== 1041e00d Catch@1041e00d

void Catch_1041e00d(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"ExShowProcureCropDetailPacket");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1041e080 FUN_1041e080

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


// ==== 1041e2b6 Catch@1041e2b6

void Catch_1041e2b6(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x3c) = *(undefined4 *)(unaff_EBP + -0x40);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x3c,&DAT_10914c48);
}


// ==== 1041e2ca Catch@1041e2ca

void Catch_1041e2ca(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"ExHeroListPacket");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1041e380 FUN_1041e380

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


// ==== 1041eab0 FUN_1041eab0

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


// ==== 1041ebb0 FUN_1041ebb0

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


// ==== 1041ecf8 Catch@1041ecf8

void Catch_1041ecf8(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x20) = *(undefined4 *)(unaff_EBP + -0x24);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x20,&DAT_10914c48);
}


// ==== 1041ed0c Catch@1041ed0c

void Catch_1041ed0c(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"PledgeCrestLargePacket");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1041ed90 FUN_1041ed90

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


// ==== 1041ee93 Catch@1041ee93

void Catch_1041ee93(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x30) = *(undefined4 *)(unaff_EBP + -0x44);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x30,&DAT_10914c48);
}


// ==== 1041eea7 Catch@1041eea7

void Catch_1041eea7(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"ExOlympiadUserInfoPacket");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1041ef20 FUN_1041ef20

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


// ==== 1041f021 Catch@1041f021

void Catch_1041f021(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x2c) = *(undefined4 *)(unaff_EBP + -0x30);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x2c,&DAT_10914c48);
}


// ==== 1041f035 Catch@1041f035

void Catch_1041f035(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"ExOlympiadSpelledInfoPacket");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1041f0a0 FUN_1041f0a0

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


// ==== 1041f10e Catch@1041f10e

void Catch_1041f10e(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_10914c48);
}


// ==== 1041f122 Catch@1041f122

void Catch_1041f122(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"ExOlympiadModePacket");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1041f170 FUN_1041f170

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


// ==== 1041f257 Catch@1041f257

void Catch_1041f257(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 1041f26b Catch@1041f26b

void Catch_1041f26b(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"ExStorageMaxCountPacket");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1041f2d0 FUN_1041f2d0

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


// ==== 1041f4ad Catch@1041f4ad

void Catch_1041f4ad(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x50) = *(undefined4 *)(unaff_EBP + -0x58);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x50,&DAT_10914c48);
}


// ==== 1041f4c1 Catch@1041f4c1

void Catch_1041f4c1(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"ExEventMatchManagePacket");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1041f570 FUN_1041f570

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


// ==== 1041f6de Catch@1041f6de

void Catch_1041f6de(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x24) = *(undefined4 *)(unaff_EBP + -0x50);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x24,&DAT_10914c48);
}


// ==== 1041f6f2 Catch@1041f6f2

void Catch_1041f6f2(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"ExMultiPartyCommandChannelInfoPacket");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1041f780 FUN_1041f780

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


// ==== 1041f84f Catch@1041f84f

void Catch_1041f84f(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x24) = *(undefined4 *)(unaff_EBP + -0x28);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x24,&DAT_10914c48);
}


// ==== 1041f863 Catch@1041f863

void Catch_1041f863(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"ExPCCafePointInfoPacket");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1041f8c0 FUN_1041f8c0

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


// ==== 1041f957 Catch@1041f957

void Catch_1041f957(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_10914c48);
}


// ==== 1041f96b Catch@1041f96b

void Catch_1041f96b(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"ExSetCompassZoneCode");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1041f9c0 FUN_1041f9c0

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


// ==== 1041fad9 Catch@1041fad9

void Catch_1041fad9(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x30) = *(undefined4 *)(unaff_EBP + -0x34);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x30,&DAT_10914c48);
}


// ==== 1041faed Catch@1041faed

void Catch_1041faed(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"ExGetBossRecord");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1041fb60 FUN_1041fb60

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


// ==== 1041fc89 Catch@1041fc89

void Catch_1041fc89(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x3c) = *(undefined4 *)(unaff_EBP + -0x50);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x3c,&DAT_10914c48);
}


// ==== 1041fc9d Catch@1041fc9d

void Catch_1041fc9d(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"ExShowScreenMessage");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1041fd10 FUN_1041fd10

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


// ==== 1041fdb5 Catch@1041fdb5

void Catch_1041fdb5(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 1041fdc9 Catch@1041fdc9

void Catch_1041fdc9(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"ExAskJoinPartyRoom");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1041fe20 FUN_1041fe20

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


// ==== 1041ff6e Catch@1041ff6e

void Catch_1041ff6e(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x20) = *(undefined4 *)(unaff_EBP + -0x4c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x20,&DAT_10914c48);
}


// ==== 1041ff82 Catch@1041ff82

void Catch_1041ff82(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"ExListPartyMatchingWaitingRoom");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10420000 FUN_10420000

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


// ==== 10420097 Catch@10420097

void Catch_10420097(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_10914c48);
}


// ==== 104200ab Catch@104200ab

void Catch_104200ab(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"ExSetMpccRouting");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10420100 FUN_10420100

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


// ==== 1042016e Catch@1042016e

void Catch_1042016e(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_10914c48);
}


// ==== 10420182 Catch@10420182

void Catch_10420182(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"ExRedSkyPacket");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 104201d0 FUN_104201d0

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


// ==== 1042028c Catch@1042028c

void Catch_1042028c(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 104202a0 Catch@104202a0

void Catch_104202a0(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"ExOrcMove");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10420300 FUN_10420300

void FUN_10420300(void)

{
  UObject *in_ECX;
  
  if (*(SOCKET *)(in_ECX + 0x38) != 0) {
    closesocket(*(SOCKET *)(in_ECX + 0x38));
    DeleteCriticalSection((LPCRITICAL_SECTION)(in_ECX + 0x4efc));
  }
  *(undefined4 *)(in_ECX + 0x38) = 0;
  if (*(int *)(in_ECX + 0x495c) != 0) {
    *(undefined4 *)(in_ECX + 0x495c) = 0;
    DAT_10b1f53c = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x10420345. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  UObject::ShutdownAfterError(in_ECX);
  return;
}


// ==== 10420360 FUN_10420360

void FUN_10420360(void)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *in_ECX;
  int iVar4;
  undefined4 *puVar5;
  FString aFStack_250 [4];
  undefined4 uStack_24c;
  FString aFStack_244 [12];
  undefined4 uStack_238;
  undefined4 uStack_234;
  FString aFStack_22c [4];
  undefined4 uStack_228;
  FString aFStack_220 [12];
  undefined4 uStack_214;
  undefined4 uStack_210;
  FString aFStack_208 [4];
  undefined4 uStack_204;
  FString aFStack_1fc [12];
  undefined4 uStack_1f0;
  undefined4 uStack_1ec;
  FString aFStack_1e4 [4];
  undefined4 uStack_1e0;
  FString aFStack_1d8 [12];
  undefined4 uStack_1cc;
  undefined4 uStack_1c8;
  FString aFStack_1c0 [4];
  undefined4 uStack_1bc;
  FString aFStack_1b4 [12];
  undefined4 uStack_1a8;
  undefined4 uStack_1a4;
  FString aFStack_19c [4];
  undefined4 uStack_198;
  FString aFStack_190 [12];
  undefined4 uStack_184;
  undefined4 uStack_180;
  FString aFStack_178 [4];
  undefined4 uStack_174;
  undefined4 uStack_16c;
  ushort local_150 [132];
  int local_48;
  undefined4 *local_44;
  undefined4 *local_40;
  int local_38;
  int local_34;
  int local_28;
  undefined4 *local_24;
  undefined1 *local_1c;
  undefined1 *local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_1080fb86;
  local_10 = ExceptionList;
  local_14 = &stack0xfffffea4;
  iVar4 = 0;
  local_8 = 0;
  if (DAT_10ddd7cc == 0) {
    local_18 = (undefined1 *)&uStack_16c;
    uStack_174 = 0x104203d5;
    ExceptionList = &local_10;
    FString::FString((FString *)&uStack_16c,(ushort *)L"L2Network");
    local_8._0_1_ = 1;
    local_1c = aFStack_178;
    uStack_180 = 0x104203ec;
    FString::FString(aFStack_178,(ushort *)L"TotalRecvPacketCycles");
    uStack_180 = 8;
    local_8 = (uint)local_8._1_3_ << 8;
    uStack_184 = 0x10420400;
    iVar3 = FStats::RegisterStats(&GStats);
    in_ECX[1] = iVar3;
    uStack_184 = 6;
    local_1c = aFStack_190;
    uStack_198 = 0x10420418;
    FString::FString(aFStack_190,(ushort *)L"L2Network");
    local_8._0_1_ = 3;
    local_18 = aFStack_19c;
    uStack_1a4 = 0x1042042f;
    FString::FString(aFStack_19c,(ushort *)L"RecvPacketCycles");
    uStack_1a4 = 8;
    local_8 = (uint)local_8._1_3_ << 8;
    uStack_1a8 = 0x10420443;
    iVar3 = FStats::RegisterStats(&GStats);
    in_ECX[2] = iVar3;
    uStack_1a8 = 6;
    local_1c = aFStack_1b4;
    uStack_1bc = 0x1042045b;
    FString::FString(aFStack_1b4,(ushort *)L"L2Network");
    local_8._0_1_ = 5;
    local_18 = aFStack_1c0;
    uStack_1c8 = 0x10420472;
    FString::FString(aFStack_1c0,(ushort *)L"MakeLoaclMessageCycles");
    uStack_1c8 = 8;
    local_8 = (uint)local_8._1_3_ << 8;
    uStack_1cc = 0x10420486;
    iVar3 = FStats::RegisterStats(&GStats);
    in_ECX[3] = iVar3;
    uStack_1cc = 0;
    local_1c = aFStack_1d8;
    uStack_1e0 = 0x1042049d;
    FString::FString(aFStack_1d8,(ushort *)L"L2Network");
    local_8._0_1_ = 7;
    local_18 = aFStack_1e4;
    uStack_1ec = 0x104204b4;
    FString::FString(aFStack_1e4,(ushort *)L"RNetworkbps");
    uStack_1ec = 8;
    local_8 = (uint)local_8._1_3_ << 8;
    uStack_1f0 = 0x104204c8;
    iVar3 = FStats::RegisterStats(&GStats);
    in_ECX[4] = iVar3;
    uStack_1f0 = 0;
    local_1c = aFStack_1fc;
    uStack_204 = 0x104204df;
    FString::FString(aFStack_1fc,(ushort *)L"L2Network");
    local_8._0_1_ = 9;
    local_18 = aFStack_208;
    uStack_210 = 0x104204f6;
    FString::FString(aFStack_208,(ushort *)L"RNetworkPeakByte");
    uStack_210 = 8;
    local_8 = (uint)local_8._1_3_ << 8;
    uStack_214 = 0x1042050a;
    iVar3 = FStats::RegisterStats(&GStats);
    in_ECX[5] = iVar3;
    uStack_214 = 0;
    local_1c = aFStack_220;
    uStack_228 = 0x10420521;
    FString::FString(aFStack_220,(ushort *)L"L2Network");
    local_8._0_1_ = 0xb;
    local_18 = aFStack_22c;
    uStack_234 = 0x10420538;
    FString::FString(aFStack_22c,(ushort *)L"SNetworkbps");
    uStack_234 = 8;
    local_8 = (uint)local_8._1_3_ << 8;
    uStack_238 = 0x1042054c;
    iVar3 = FStats::RegisterStats(&GStats);
    in_ECX[6] = iVar3;
    uStack_238 = 0;
    local_1c = aFStack_244;
    uStack_24c = 0x10420563;
    FString::FString(aFStack_244,(ushort *)L"L2Network");
    local_8._0_1_ = 0xd;
    local_18 = aFStack_250;
    FString::FString(aFStack_250,(ushort *)L"SNetworkPeakByte");
    local_8 = (uint)local_8._1_3_ << 8;
    iVar3 = FStats::RegisterStats(&GStats,8,0);
    in_ECX[7] = iVar3;
    DAT_10ddd7cc = 1;
  }
  else {
    local_38 = 0;
    local_44 = in_ECX;
    ExceptionList = &local_10;
    while( true ) {
      local_44 = local_44 + 1;
      local_14 = &stack0xfffffea4;
      if (DAT_10ddd8d4 <= local_38) break;
      *local_44 = *(undefined4 *)(DAT_10ddd8d0 + local_38 * 0xc);
      local_38 = local_38 + 1;
    }
  }
  if (DAT_10ddd7d0 == 0) {
    for (iVar3 = 0; local_34 = iVar3, iVar3 < 0xff; iVar3 = iVar3 + 1) {
      uStack_16c = 0x1042062a;
      appSprintf(local_150,(ushort *)&DAT_10851d80);
      local_1c = (undefined1 *)&uStack_16c;
      uStack_174 = 0x10420642;
      FString::FString((FString *)&uStack_16c,(ushort *)L"L2ServerPacket");
      local_8._0_1_ = 0xf;
      local_18 = aFStack_178;
      uStack_180 = 0x1042065b;
      FString::FString(aFStack_178,local_150);
      uStack_180 = 9;
      local_8 = (uint)local_8._1_3_ << 8;
      uStack_184 = 0x1042066f;
      iVar1 = FStats::RegisterStats(&GStats);
      in_ECX[iVar3 + 9] = iVar1;
      uStack_184 = 6;
      local_1c = aFStack_190;
      uStack_198 = 0x10420688;
      FString::FString(aFStack_190,(ushort *)L"L2ServerPacket");
      local_8._0_1_ = 0x11;
      local_18 = aFStack_19c;
      uStack_1a4 = 0x104206a1;
      FString::FString(aFStack_19c,local_150);
      uStack_1a4 = 9;
      local_8 = (uint)local_8._1_3_ << 8;
      uStack_1a8 = 0x104206b5;
      iVar1 = FStats::RegisterStats(&GStats);
      in_ECX[iVar3 + 0x108] = iVar1;
    }
    DAT_10ddd7d0 = 1;
  }
  else {
    local_40 = in_ECX + 9;
    local_24 = in_ECX + 0x108;
    for (local_28 = 0; local_28 < DAT_10ddd8e0; local_28 = local_28 + 2) {
      *local_40 = *(undefined4 *)(DAT_10ddd8dc + local_28 * 0xc);
      local_40 = local_40 + 1;
      *local_24 = *(undefined4 *)(DAT_10ddd8dc + (local_28 + 1) * 0xc);
      local_24 = local_24 + 1;
    }
  }
  if (DAT_10ddd7d4 == 0) {
    for (iVar4 = 0; iVar4 < 0x5d; iVar4 = iVar4 + 1) {
      uStack_16c = 0x10420755;
      local_48 = iVar4;
      appSprintf(local_150,(ushort *)&DAT_10851d80);
      local_1c = (undefined1 *)&uStack_16c;
      uStack_174 = 0x1042076d;
      FString::FString((FString *)&uStack_16c,(ushort *)L"L2ServerExPacket");
      local_8._0_1_ = 0x13;
      local_18 = aFStack_178;
      uStack_180 = 0x10420786;
      FString::FString(aFStack_178,local_150);
      uStack_180 = 10;
      local_8 = (uint)local_8._1_3_ << 8;
      uStack_184 = 0x1042079a;
      iVar3 = FStats::RegisterStats(&GStats);
      in_ECX[iVar4 + 0x207] = iVar3;
      uStack_184 = 6;
      local_1c = aFStack_190;
      uStack_198 = 0x104207b6;
      FString::FString(aFStack_190,(ushort *)L"L2ServerExPacket");
      local_8._0_1_ = 0x15;
      local_18 = aFStack_19c;
      uStack_1a4 = 0x104207cf;
      FString::FString(aFStack_19c,local_150);
      uStack_1a4 = 10;
      local_8 = (uint)local_8._1_3_ << 8;
      uStack_1a8 = 0x104207e3;
      iVar3 = FStats::RegisterStats(&GStats);
      in_ECX[iVar4 + 0x264] = iVar3;
    }
    DAT_10ddd7d0 = 1;
  }
  else {
    puVar2 = in_ECX + 0x207;
    puVar5 = in_ECX + 0x264;
    while( true ) {
      if (DAT_10ddd8ec <= iVar4) break;
      *puVar2 = *(undefined4 *)(DAT_10ddd8e8 + iVar4 * 0xc);
      puVar2 = puVar2 + 1;
      *puVar5 = *(undefined4 *)(DAT_10ddd8e8 + (iVar4 + 1) * 0xc);
      puVar5 = puVar5 + 1;
      iVar4 = iVar4 + 2;
    }
  }
  ExceptionList = local_10;
  return;
}


// ==== 10420814 Catch@10420814

void Catch_10420814(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x2c) = *(undefined4 *)(unaff_EBP + -0x48);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x2c,&DAT_10914c48);
}


// ==== 10420828 Catch@10420828

void Catch_10420828(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"FL2NetworkStats::Init");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10420c60 FUN_10420c60

void FUN_10420c60(char *param_1,u_short param_2)

{
  u_short uVar1;
  HANDLE pvVar2;
  SOCKET s;
  int iVar3;
  ulong uVar4;
  hostent *phVar5;
  uintptr_t uVar6;
  void *in_ECX;
  
  if (*(SOCKET *)((int)in_ECX + 0x38) != 0) {
    closesocket(*(SOCKET *)((int)in_ECX + 0x38));
    DeleteCriticalSection((LPCRITICAL_SECTION)((int)in_ECX + 0x4efc));
  }
  *(undefined4 *)((int)in_ECX + 0x38) = 0;
  if (*(int *)((int)in_ECX + 0x495c) != 0) {
    *(undefined4 *)((int)in_ECX + 0x495c) = 0;
    DAT_10b1f53c = 0;
  }
  *(undefined4 *)((int)in_ECX + 0x5bf0) = 0;
  *(undefined4 *)((int)in_ECX + 0x5bec) = 0;
  *(undefined4 *)((int)in_ECX + 0x5be8) = 0;
  pvVar2 = CreateSemaphoreA((LPSECURITY_ATTRIBUTES)0x0,0,0x7fffffff,(LPCSTR)0x0);
  *(HANDLE *)((int)in_ECX + 0x4958) = pvVar2;
  s = socket(2,1,6);
  *(SOCKET *)((int)in_ECX + 0x38) = s;
  if (s == 0xffffffff) {
    MessageBoxW(*(HWND *)((int)in_ECX + 0x34),L"INVALID_SOCKET",L"ERROR",0);
    return;
  }
  iVar3 = WSAAsyncSelect(s,*(HWND *)((int)in_ECX + 0x34),0x507,0x10);
  if (iVar3 != 0) {
    iVar3 = WSAGetLastError();
    thunk_FUN_10401a60(L"WSAAsyncSelect Error : %d  sock : %d",iVar3,
                       *(undefined4 *)((int)in_ECX + 0x38));
    return;
  }
  uVar4 = inet_addr(param_1);
  if (uVar4 == 0xffffffff) {
    phVar5 = gethostbyname(param_1);
    *(hostent **)((int)in_ECX + 0x4c) = phVar5;
    if (phVar5 == (hostent *)0x0) {
      MessageBoxW(*(HWND *)((int)in_ECX + 0x34),L"Can not resolve hostname",L"ERROR",0);
      return;
    }
    _memcpy((void *)((int)in_ECX + 0x40),*phVar5->h_addr_list,(int)phVar5->h_length);
  }
  else {
    *(ulong *)((int)in_ECX + 0x40) = uVar4;
  }
  ((sockaddr *)((int)in_ECX + 0x3c))->sa_family = 2;
  uVar1 = htons(param_2);
  *(u_short *)((int)in_ECX + 0x3e) = uVar1;
  uVar6 = __beginthread((_StartAddress *)&LAB_10309e49,0,in_ECX);
  *(uintptr_t *)((int)in_ECX + 0x495c) = uVar6;
  iVar3 = connect(*(SOCKET *)((int)in_ECX + 0x38),(sockaddr *)((int)in_ECX + 0x3c),0x10);
  if (iVar3 != 0) {
    iVar3 = WSAGetLastError();
    if (iVar3 != 0x2733) {
      thunk_FUN_10401a60(L"Connect Error : %d : %x",iVar3,*(undefined4 *)((int)in_ECX + 0x40));
      return;
    }
  }
  InitializeCriticalSection((LPCRITICAL_SECTION)((int)in_ECX + 0x4efc));
  return;
}


// ==== 10420e60 FUN_10420e60

void FUN_10420e60(int param_1,int param_2)

{
  int *piVar1;
  undefined8 uVar2;
  void *_Dst;
  undefined1 *puVar3;
  int *in_ECX;
  undefined1 unaff_BP;
  undefined2 unaff_SI;
  
  piVar1 = (int *)(DAT_10ddd7e0 + in_ECX[0x143c] * 4);
  uVar2 = rdtsc();
  *piVar1 = *piVar1 - (int)uVar2;
  if (in_ECX[0x142f] != 0) {
    (**(code **)(*in_ECX + 0x7c))(param_1 + 2,(int)in_ECX + 0x50d1,param_2 + -2);
  }
  if (*(char *)(param_1 + 2) == -2) {
    if (param_2 + -4 != 0) {
      _Dst = (void *)(**(code **)**(undefined4 **)GMalloc_exref)(param_2 + -4,L"NetCmd");
      _memcpy(_Dst,(void *)(param_1 + 5),param_2 - 5);
      *(undefined1 *)((int)_Dst + param_2 + -5) = 0;
LAB_10420f34:
      puVar3 = (undefined1 *)(**(code **)**(undefined4 **)GMalloc_exref)(0xc,L"NetPacket");
      *puVar3 = unaff_BP;
      *(undefined2 *)(puVar3 + 2) = unaff_SI;
      *(int *)(puVar3 + 4) = param_2 + -3;
      *(void **)(puVar3 + 8) = _Dst;
      if (DAT_10b1f538 != (int *)0x0) {
        (**(code **)(*DAT_10b1f538 + 0x84))(puVar3);
      }
      in_ECX[0x1214] = in_ECX[0x1214] + 1;
      piVar1 = (int *)(DAT_10ddd7e0 + in_ECX[0x143c] * 4);
      uVar2 = rdtsc();
      *piVar1 = *piVar1 + (int)uVar2 + -0xc;
      return;
    }
  }
  else if (param_2 + -2 != 0) {
    _Dst = (void *)(**(code **)**(undefined4 **)GMalloc_exref)(param_2 + -2,L"NetCmd");
    _memcpy(_Dst,(void *)(param_1 + 3),param_2 - 3);
    *(undefined1 *)((int)_Dst + param_2 + -3) = 0;
    goto LAB_10420f34;
  }
  thunk_FUN_10401a60(L"length is under 0 b");
  return;
}


// ==== 10420ff0 FUN_10420ff0

void FUN_10420ff0(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  UClass *pUVar1;
  UObject *pUVar2;
  int iVar3;
  ushort local_100 [64];
  ushort local_80 [64];
  
  if ((param_1 < 1) || (param_2 < 1)) {
    if ((param_2 == 0) && (iVar3 = (**(code **)(*DAT_10b1f538 + 0xac))(param_1), iVar3 != 0)) {
      *(undefined4 *)(iVar3 + 0xe0) = 0;
    }
  }
  else {
    appSprintf(local_100,(ushort *)L"crest_%d_%d",DAT_10b20f30,param_2);
    appSprintf(local_80,(ushort *)L"crest.%s",local_100);
    pUVar2 = UObject::StaticFindObject
                       (&UTexture::PrivateStaticClass,(UObject *)0xffffffff,local_100,0);
    if (pUVar2 != (UObject *)0x0) {
      for (pUVar1 = *(UClass **)(pUVar2 + 0x24); pUVar1 != (UClass *)0x0;
          pUVar1 = *(UClass **)(pUVar1 + 0x34)) {
        if (pUVar1 == &UTexture::PrivateStaticClass) goto LAB_1042109f;
      }
    }
    pUVar2 = UObject::StaticLoadObject
                       (&UTexture::PrivateStaticClass,(UObject *)0x0,local_80,(ushort *)0x0,0x2002,
                        (UPackageMap *)0x0);
    pUVar2 = (UObject *)thunk_FUN_1040b4c0(pUVar2);
    if (pUVar2 == (UObject *)0x0) {
      (**(code **)(*DAT_10b1f538 + 0x1cc))(param_2);
    }
    else {
LAB_1042109f:
      *(uint *)(pUVar2 + 0x1c) = *(uint *)(pUVar2 + 0x1c) | 0x4000000;
      (**(code **)(*DAT_10b1f538 + 0xc0))(param_2,pUVar2);
    }
  }
  if ((param_3 < 1) || (param_4 < 1)) {
    if ((param_4 == 0) && (iVar3 = (**(code **)(*DAT_10b1f538 + 0xac))(param_1), iVar3 != 0)) {
      *(undefined4 *)(iVar3 + 0xe4) = 0;
    }
  }
  else {
    appSprintf(local_100,(ushort *)L"crest_%d_%d",DAT_10b20f30,param_4);
    appSprintf(local_80,(ushort *)L"crest.%s",local_100);
    pUVar2 = UObject::StaticFindObject
                       (&UTexture::PrivateStaticClass,(UObject *)0xffffffff,local_100,0);
    if (pUVar2 != (UObject *)0x0) {
      for (pUVar1 = *(UClass **)(pUVar2 + 0x24); pUVar1 != (UClass *)0x0;
          pUVar1 = *(UClass **)(pUVar1 + 0x34)) {
        if (pUVar1 == &UTexture::PrivateStaticClass) goto LAB_1042118d;
      }
    }
    pUVar2 = UObject::StaticLoadObject
                       (&UTexture::PrivateStaticClass,(UObject *)0x0,local_80,(ushort *)0x0,0x2002,
                        (UPackageMap *)0x0);
    pUVar2 = (UObject *)thunk_FUN_1040b4c0(pUVar2);
    if (pUVar2 == (UObject *)0x0) {
      (**(code **)(*DAT_10b1f538 + 0x234))(param_4);
    }
    else {
LAB_1042118d:
      *(uint *)(pUVar2 + 0x1c) = *(uint *)(pUVar2 + 0x1c) | 0x4000000;
      (**(code **)(*DAT_10b1f538 + 200))(param_4,pUVar2);
    }
  }
  if ((0 < param_1) && (0 < param_5)) {
    appSprintf(local_100,(ushort *)L"crest_%d_%d_l",DAT_10b20f30,param_5);
    appSprintf(local_80,(ushort *)L"crest.%s",local_100);
    pUVar2 = UObject::StaticFindObject
                       (&UTexture::PrivateStaticClass,(UObject *)0xffffffff,local_100,0);
    if (pUVar2 != (UObject *)0x0) {
      for (pUVar1 = *(UClass **)(pUVar2 + 0x24); pUVar1 != (UClass *)0x0;
          pUVar1 = *(UClass **)(pUVar1 + 0x34)) {
        if (pUVar1 == &UTexture::PrivateStaticClass) goto LAB_10421281;
      }
    }
    pUVar2 = UObject::StaticLoadObject
                       (&UTexture::PrivateStaticClass,(UObject *)0x0,local_80,(ushort *)0x0,0x2002,
                        (UPackageMap *)0x0);
    pUVar2 = (UObject *)thunk_FUN_1040b4c0(pUVar2);
    if (pUVar2 != (UObject *)0x0) {
LAB_10421281:
      *(uint *)(pUVar2 + 0x1c) = *(uint *)(pUVar2 + 0x1c) | 0x4000000;
      return;
    }
    (**(code **)(*DAT_10b1f538 + 0x524))(param_5);
  }
  return;
}


// ==== 10421370 FUN_10421370

void FUN_10421370(void)

{
  UObject *pUVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1080fbd0;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  pUVar1 = UObject::LoadPackage((UObject *)0x0,(ushort *)L"..\\SysTextures\\crest.utx",0,0);
  pUVar1 = (UObject *)thunk_FUN_1040b4f0(pUVar1);
  if ((pUVar1 == (UObject *)0x0) &&
     (pUVar1 = (UObject *)thunk_FUN_1040b530(0,L"crest",0), pUVar1 == (UObject *)0x0)) {
    ExceptionList = local_10;
    return;
  }
  UObject::SavePackage
            (pUVar1,(UObject *)0x0,0x80004,(ushort *)L"..\\SysTextures\\Crest.utx",
             (FOutputDevice *)0x0,(ULinkerLoad *)0x0,1);
  ExceptionList = local_10;
  return;
}


// ==== 104213fd Catch@104213fd

void Catch_104213fd(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 10421411 Catch@10421411

void Catch_10421411(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"SaveCrestPackage");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10421460 FUN_10421460

void FUN_10421460(int param_1,char *param_2,u_short param_3)

{
  SOCKET SVar1;
  ulong uVar2;
  hostent *phVar3;
  int iVar4;
  int in_ECX;
  double dVar5;
  double dVar6;
  undefined4 local_18;
  sockaddr local_10;
  
  if (*(int *)(DAT_10b1f538 + 0x50) == 0) {
    return;
  }
  if (*(SOCKET *)(in_ECX + 0x850) != 0) {
    closesocket(*(SOCKET *)(in_ECX + 0x850));
  }
  SVar1 = socket(2,1,6);
  *(SOCKET *)(in_ECX + 0x850) = SVar1;
  if (SVar1 == 0xffffffff) {
    thunk_FUN_10401a60(L"INVALID_PING_SOCKET");
    return;
  }
  uVar2 = inet_addr(param_2);
  if (uVar2 == 0xffffffff) {
    phVar3 = gethostbyname(param_2);
    if (phVar3 == (hostent *)0x0) {
      thunk_FUN_10401a60(L"Can not resolve hostname");
      return;
    }
    _memcpy(local_10.sa_data + 2,*phVar3->h_addr_list,(int)phVar3->h_length);
    uVar2 = local_10.sa_data._2_4_;
  }
  local_10.sa_data._2_4_ = uVar2;
  local_10.sa_family = 2;
  local_10.sa_data._0_2_ = htons(param_3);
  dVar5 = appSecondsQPC();
  iVar4 = connect(*(SOCKET *)(in_ECX + 0x850),&local_10,0x10);
  if (iVar4 != 0) {
    if (DAT_10b1f538 != 0) {
      (**(code **)(*(int *)GL2Console + 0x624))
                (*(undefined4 *)(param_1 * 0x10 + 0x38 + in_ECX),9999);
      return;
    }
    __endthread();
    return;
  }
  dVar6 = appSecondsQPC();
  local_18 = (undefined4)(longlong)ROUND(dVar6 * 1000.0 - dVar5 * 1000.0);
  *(undefined4 *)((param_1 + 4) * 0x10 + in_ECX) = local_18;
  if (DAT_10b1f538 == 0) {
    __endthread();
  }
  else {
    (**(code **)(*(int *)GL2Console + 0x624))
              (*(undefined4 *)(param_1 * 0x10 + 0x38 + in_ECX),local_18);
  }
  thunk_FUN_104024b0();
  return;
}


// ==== 10421670 FUN_10421670

void FUN_10421670(char *param_1,u_short param_2)

{
  u_short uVar1;
  SOCKET s;
  int iVar2;
  ulong uVar3;
  hostent *phVar4;
  int in_ECX;
  int local_14;
  sockaddr local_10;
  
  if (*(SOCKET *)(in_ECX + 0x38) != 0) {
    closesocket(*(SOCKET *)(in_ECX + 0x38));
    DeleteCriticalSection((LPCRITICAL_SECTION)(in_ECX + 0x4efc));
  }
  *(undefined4 *)(in_ECX + 0x38) = 0;
  *(undefined4 *)(in_ECX + 0x5bf0) = 0;
  *(undefined4 *)(in_ECX + 0x5bec) = 0;
  *(undefined4 *)(in_ECX + 0x5be8) = 0;
  s = socket(2,1,6);
  *(SOCKET *)(in_ECX + 0x38) = s;
  if (s == 0xffffffff) {
    MessageBoxW(*(HWND *)(in_ECX + 0x34),L"INVALID_SOCKET",L"ERROR",0);
    return;
  }
  iVar2 = WSAAsyncSelect(s,*(HWND *)(in_ECX + 0x34),0x507,0x10);
  if (iVar2 != 0) {
    iVar2 = WSAGetLastError();
    thunk_FUN_10401a60(L"WSAAsyncSelect Error : %d  sock : %d",iVar2,*(undefined4 *)(in_ECX + 0x38))
    ;
    return;
  }
  uVar3 = inet_addr(param_1);
  if (uVar3 == 0xffffffff) {
    phVar4 = gethostbyname(param_1);
    *(hostent **)(in_ECX + 0x4c) = phVar4;
    if (phVar4 == (hostent *)0x0) {
      MessageBoxW(*(HWND *)(in_ECX + 0x34),L"Can not resolve hostname",L"ERROR",0);
      return;
    }
    _memcpy((void *)(in_ECX + 0x40),*phVar4->h_addr_list,(int)phVar4->h_length);
  }
  else {
    *(ulong *)(in_ECX + 0x40) = uVar3;
  }
  ((sockaddr *)(in_ECX + 0x3c))->sa_family = 2;
  uVar1 = htons(param_2);
  *(u_short *)(in_ECX + 0x3e) = uVar1;
  iVar2 = connect(*(SOCKET *)(in_ECX + 0x38),(sockaddr *)(in_ECX + 0x3c),0x10);
  if (iVar2 != 0) {
    iVar2 = WSAGetLastError();
    if (iVar2 != 0x2733) {
      thunk_FUN_10401a60(L"Connect Error : %d : %x",iVar2,*(undefined4 *)(in_ECX + 0x40));
      return;
    }
  }
  InitializeCriticalSection((LPCRITICAL_SECTION)(in_ECX + 0x4efc));
  local_10.sa_family = 0;
  local_10.sa_data[0] = '\0';
  local_10.sa_data[1] = '\0';
  local_10.sa_data[2] = '\0';
  local_10.sa_data[3] = '\0';
  local_10.sa_data[4] = '\0';
  local_10.sa_data[5] = '\0';
  local_10.sa_data[6] = '\0';
  local_10.sa_data[7] = '\0';
  local_10.sa_data[8] = '\0';
  local_10.sa_data[9] = '\0';
  local_10.sa_data[10] = '\0';
  local_10.sa_data[0xb] = '\0';
  local_10.sa_data[0xc] = '\0';
  local_10.sa_data[0xd] = '\0';
  local_14 = 0x10;
  getsockname(*(SOCKET *)(in_ECX + 0x38),&local_10,&local_14);
  uVar1 = htons(0x4bd);
  thunk_FUN_10402ab0(&DAT_10b1b470,0x10,uVar1);
  thunk_FUN_103ff550(&DAT_10b1b470,0x10);
  return;
}


// ==== 104218b0 FUN_104218b0

void FUN_104218b0(float param_1)

{
  int *piVar1;
  float fVar2;
  undefined8 uVar3;
  int iVar4;
  int *in_ECX;
  int *piVar5;
  uint local_20;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1080fbe0;
  local_10 = ExceptionList;
  local_8 = 0;
  fVar2 = (float)*(int *)(DAT_10ddd7ec + DAT_10ddd91c * 4);
  if (*(int *)(DAT_10ddd7ec + DAT_10ddd91c * 4) < 0) {
    fVar2 = fVar2 + 4.2949673e+09;
  }
  fVar2 = fVar2 * (float)*(double *)GSecondsPerCycleQPF_exref;
  if ((float)in_ECX[99] != 0.0) {
    fVar2 = fVar2 * 0.02 + (float)in_ECX[99] * 0.98;
  }
  ExceptionList = &local_10;
  in_ECX[99] = (int)fVar2;
  if ((*(int *)(DAT_10b1f538 + 0x50) == 2) && (iVar4 = in_ECX[0x12], iVar4 != 0)) {
    *(float *)(iVar4 + 0x4960) = param_1 + *(float *)(iVar4 + 0x4960);
    *(float *)(in_ECX[0x12] + 0x4964) = param_1 + *(float *)(in_ECX[0x12] + 0x4964);
    iVar4 = in_ECX[0x12];
    fVar2 = (float)*(int *)(iVar4 + 0x4970);
    if (*(int *)(iVar4 + 0x4970) < 0) {
      fVar2 = fVar2 + 4.2949673e+09;
    }
    local_20 = (uint)(longlong)ROUND(fVar2 / *(float *)(iVar4 + 0x4960));
    *(uint *)(DAT_10ddd7e0 + *(int *)(iVar4 + 0x50f4) * 4) = local_20;
    iVar4 = in_ECX[0x12];
    fVar2 = (float)*(int *)(iVar4 + 0x4978);
    if (*(int *)(iVar4 + 0x4978) < 0) {
      fVar2 = fVar2 + 4.2949673e+09;
    }
    local_20 = (uint)(longlong)ROUND(fVar2 / *(float *)(iVar4 + 0x4960));
    *(uint *)(DAT_10ddd7e0 + *(int *)(iVar4 + 0x50fc) * 4) = local_20;
    iVar4 = in_ECX[0x12];
    fVar2 = *(float *)(iVar4 + 0x4964);
    if (!NAN(fVar2) && 1.0 < fVar2 != (fVar2 == 1.0)) {
      fVar2 = (float)*(int *)(iVar4 + 0x4974);
      if (*(int *)(iVar4 + 0x4974) < 0) {
        fVar2 = fVar2 + 4.2949673e+09;
      }
      local_20 = (uint)(longlong)ROUND(fVar2 / *(float *)(iVar4 + 0x4964));
      if (*(uint *)(iVar4 + 0x4968) < local_20) {
        *(uint *)(iVar4 + 0x4968) = local_20;
      }
      iVar4 = in_ECX[0x12];
      fVar2 = (float)*(int *)(iVar4 + 0x497c);
      if (*(int *)(iVar4 + 0x497c) < 0) {
        fVar2 = fVar2 + 4.2949673e+09;
      }
      local_20 = (uint)(longlong)ROUND(fVar2 / *(float *)(iVar4 + 0x4964));
      if (*(uint *)(iVar4 + 0x496c) < local_20) {
        *(uint *)(iVar4 + 0x496c) = local_20;
      }
      *(undefined4 *)(in_ECX[0x12] + 0x4964) = 0;
      *(undefined4 *)(in_ECX[0x12] + 0x4974) = 0;
      *(undefined4 *)(in_ECX[0x12] + 0x497c) = 0;
    }
    *(undefined4 *)(DAT_10ddd7e0 + *(int *)(in_ECX[0x12] + 0x50f8) * 4) =
         *(undefined4 *)(in_ECX[0x12] + 0x4968);
    *(undefined4 *)(DAT_10ddd7e0 + *(int *)(in_ECX[0x12] + 0x5100) * 4) =
         *(undefined4 *)(in_ECX[0x12] + 0x496c);
  }
  do {
    do {
      while( true ) {
        piVar1 = in_ECX + 0xe;
        iVar4 = (**(code **)(*in_ECX + 0x80))(piVar1);
        if (iVar4 == 0) {
          (**(code **)(*in_ECX + 0x530))(param_1);
          if ((*(int *)(DAT_10b1f538 + 0x50) == 2) && (in_ECX[0x12] != 0)) {
            for (iVar4 = 0; iVar4 < 0xff; iVar4 = iVar4 + 1) {
              *(undefined4 *)(DAT_10ddd7e0 + *(int *)(in_ECX[0x12] + 0x5108 + iVar4 * 4) * 4) =
                   *(undefined4 *)(in_ECX[0x12] + 0x4980 + iVar4 * 4);
            }
            for (iVar4 = 0; iVar4 < 0x5d; iVar4 = iVar4 + 1) {
              *(undefined4 *)(DAT_10ddd7e0 + *(int *)(in_ECX[0x12] + 0x5900 + iVar4 * 4) * 4) =
                   *(undefined4 *)(in_ECX[0x12] + 0x4d7c + iVar4 * 4);
            }
          }
          ExceptionList = local_10;
          return;
        }
        if (*(int *)(DAT_10b1f538 + 0x50) != 1) break;
        if (0xb < *(byte *)*piVar1) {
          *(byte *)*piVar1 = 0xc;
        }
        *(int *)(in_ECX[0x13] + 0x4ef8) = *(int *)(*piVar1 + 8) + *(int *)(*piVar1 + 4);
        (*(code *)(&PTR_LAB_10a572c0)[*(byte *)*piVar1])();
        *(undefined4 *)(in_ECX[0x13] + 0x4ef8) = 0;
        (**(code **)(**(int **)GMalloc_exref + 8))(*(undefined4 *)(*piVar1 + 8));
        (**(code **)(**(int **)GMalloc_exref + 8))(*piVar1);
      }
    } while ((*(int *)(DAT_10b1f538 + 0x50) != 2) && (*(int *)GL2ReplayMode_exref == 0));
    if ((*(int *)GL2UseReplayManager_exref != 0) &&
       ((*(int *)(DAT_10c51044 + 0x198) != 0 &&
        (iVar4 = FL2ReplayManager::GetState(*(FL2ReplayManager **)(DAT_10c51044 + 0x198)),
        iVar4 == 2)))) {
      FL2ReplayManager::AddPacketData
                (*(FL2ReplayManager **)(DAT_10c51044 + 0x198),(NetworkPacket *)*piVar1);
    }
    if (*(char *)*piVar1 == -1) {
      *(char *)*piVar1 = -1;
    }
    iVar4 = in_ECX[0x12];
    if (*(byte *)*piVar1 == 0xfe) {
      if (*(int *)(iVar4 + 0x4ef0) != 0) {
        piVar5 = (int *)(DAT_10ddd7e0 + *(int *)(iVar4 + 0x58fc) * 4);
        uVar3 = rdtsc();
        *piVar5 = *piVar5 - (int)uVar3;
        piVar5 = (int *)(DAT_10ddd7e0 +
                        *(int *)(in_ECX[0x12] + 0x5a74 + *(short *)(*piVar1 + 2) * 4) * 4);
        uVar3 = rdtsc();
        *piVar5 = *piVar5 - (int)uVar3;
      }
      *(int *)(in_ECX[0x12] + 0x4ef8) = *(int *)(*piVar1 + 8) + *(int *)(*piVar1 + 4);
      (*(code *)(&PTR_LAB_10a67610)[*(short *)(*piVar1 + 2) * 0x41])();
      *(undefined4 *)(in_ECX[0x12] + 0x4ef8) = 0;
      iVar4 = in_ECX[0x12];
      if ((iVar4 != 0) && (*(int *)(iVar4 + 0x4ef0) != 0)) {
        piVar5 = (int *)(iVar4 + 0x4980 + (uint)*(byte *)*piVar1 * 4);
        *piVar5 = *piVar5 + 1;
        piVar5 = (int *)(DAT_10ddd7e0 +
                        *(int *)(in_ECX[0x12] + 0x5504 + (uint)*(byte *)*piVar1 * 4) * 4);
        uVar3 = rdtsc();
        *piVar5 = *piVar5 + (int)uVar3 + -0xc;
        piVar5 = (int *)(in_ECX[0x12] + 0x4d7c + *(short *)(*piVar1 + 2) * 4);
        *piVar5 = *piVar5 + 1;
        piVar5 = (int *)(DAT_10ddd7e0 +
                        *(int *)(in_ECX[0x12] + 0x5a74 + *(short *)(*piVar1 + 2) * 4) * 4);
        uVar3 = rdtsc();
        iVar4 = (int)uVar3;
LAB_10421d57:
        *piVar5 = *piVar5 + iVar4 + -0xc;
      }
    }
    else {
      if (*(int *)(iVar4 + 0x4ef0) != 0) {
        piVar5 = (int *)(DAT_10ddd7e0 + *(int *)(iVar4 + 0x5504 + (uint)*(byte *)*piVar1 * 4) * 4);
        uVar3 = rdtsc();
        *piVar5 = *piVar5 - (int)uVar3;
      }
      *(int *)(in_ECX[0x12] + 0x4ef8) = *(int *)(*piVar1 + 8) + *(int *)(*piVar1 + 4);
      (*(code *)(&PTR_LAB_10a57310)[(uint)*(byte *)*piVar1 * 0x41])();
      *(undefined4 *)(in_ECX[0x12] + 0x4ef8) = 0;
      iVar4 = in_ECX[0x12];
      if ((iVar4 != 0) && (*(int *)(iVar4 + 0x4ef0) != 0)) {
        piVar5 = (int *)(iVar4 + 0x4980 + (uint)*(byte *)*piVar1 * 4);
        *piVar5 = *piVar5 + 1;
        piVar5 = (int *)(DAT_10ddd7e0 +
                        *(int *)(in_ECX[0x12] + 0x5504 + (uint)*(byte *)*piVar1 * 4) * 4);
        uVar3 = rdtsc();
        iVar4 = (int)uVar3;
        goto LAB_10421d57;
      }
    }
    (**(code **)(**(int **)GMalloc_exref + 8))(*(undefined4 *)(*piVar1 + 8));
    (**(code **)(**(int **)GMalloc_exref + 8))(*piVar1);
  } while( true );
}


// ==== 10421e19 Catch@10421e19

void Catch_10421e19(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x28) = *(undefined4 *)(unaff_EBP + -0x30);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x28,&DAT_10914c48);
}


// ==== 10421e2d Catch@10421e2d

void Catch_10421e2d(void)

{
  byte bVar1;
  byte *pbVar2;
  undefined *puVar3;
  int unaff_EBP;
  
  appUnwindf((ushort *)&DAT_10851d80,L"UNetworkHandler::Tick");
  pbVar2 = *(byte **)(*(int *)(unaff_EBP + -0x2c) + 0x38);
  bVar1 = *pbVar2;
  if (bVar1 == 0xfe) {
    puVar3 = &DAT_10a67614 + *(short *)(pbVar2 + 2) * 0x104;
  }
  else {
    puVar3 = &DAT_10a57314 + (uint)bVar1 * 0x104;
  }
  appUnwindf((ushort *)L"Function Name=%s",puVar3);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10422000 FUN_10422000

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_10422000(wchar_t *param_1,wchar_t *param_2,undefined4 param_3)

{
  int in_ECX;
  
  _DAT_10b20f54 = 0;
  _DAT_10b20f58 = 0;
  _DAT_10b20f5c = 0;
  _DAT_10b20f60 = 0;
  DAT_10b20f62 = 0;
  _DAT_10b20f72 = 0;
  _DAT_10b20f76 = 0;
  _DAT_10b20f7a = 0;
  _DAT_10b20f7e = 0;
  DAT_10b20f82 = 0;
  _wcsncpy((wchar_t *)&DAT_10b20f54,param_1,0xe);
  _wcsncpy((wchar_t *)&DAT_10b20f72,param_2,0x10);
  DAT_10b20f94 = param_3;
  *(undefined4 *)(*(int *)(in_ECX + 0x4c) + 0x50bc) = 1;
  *(undefined4 *)(*(int *)(in_ECX + 0x4c) + 0x50b8) = 1;
  thunk_FUN_10421670(*(int *)(in_ECX + 0x4c) + 0x4858,0x83a);
  *(undefined4 *)(in_ECX + 0x50) = 1;
  FOutputDevice::Logf(*(FOutputDevice **)GNetworkLog_exref,
                      (ushort *)*(FOutputDevice **)GNetworkLog_exref);
  return 1;
}


// ==== 104220f0 FUN_104220f0

void FUN_104220f0(int param_1,float param_2,float param_3,float param_4,float param_5,
                 FOutputDevice *param_6,float param_7,int param_8,int param_9)

{
  UClass *pUVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int in_ECX;
  int iVar8;
  int unaff_EDI;
  undefined4 *puVar9;
  undefined4 *puVar10;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined1 local_c [8];
  undefined4 local_4;
  
  if (param_9 == 0) {
    if (param_8 != 0) {
      for (pUVar1 = *(UClass **)(param_8 + 0x24); pUVar1 != (UClass *)0x0;
          pUVar1 = *(UClass **)(pUVar1 + 0x34)) {
        iVar8 = param_8;
        if (pUVar1 == &AVehicle::PrivateStaticClass) {
LAB_104221b3:
          param_2 = param_2 - *(float *)(iVar8 + 0x1bc);
          puVar10 = &local_18;
          param_3 = param_3 - *(float *)(iVar8 + 0x1c0);
          param_4 = param_4 - *(float *)(iVar8 + 0x1c4);
          param_5 = param_5 - *(float *)(iVar8 + 0x1bc);
          param_6 = (FOutputDevice *)((float)param_6 - *(float *)(iVar8 + 0x1c0));
          param_7 = param_7 - *(float *)(iVar8 + 0x1c4);
          local_18 = 0;
          local_14 = 0;
          local_10 = 0x3f800000;
          iVar4 = FVector::RotateAngleAxis
                            ((FVector *)&param_2,(int)local_c,
                             (FVector *)-(*(uint *)(iVar8 + 0x1cc) & 0xffff));
          param_2 = *(float *)(iVar4 + 4);
          param_3 = *(float *)(iVar4 + 8);
          local_1c = 0;
          local_18 = 0;
          puVar9 = &local_1c;
          local_14 = 0x3f800000;
          puVar5 = (undefined4 *)
                   FVector::RotateAngleAxis
                             ((FVector *)&param_4,(int)&local_10,
                              (FVector *)-(*(uint *)(iVar8 + 0x1cc) & 0xffff));
          param_3 = (float)*puVar5;
          param_4 = (float)puVar5[1];
          param_5 = (float)puVar5[2];
          uVar3 = FUN_107a6660(puVar9,puVar10);
          uVar6 = FUN_107a6660();
          uVar7 = FUN_107a6660();
          param_6 = (FOutputDevice *)FUN_107a6660();
          param_7 = (float)FUN_107a6660();
          local_4 = FUN_107a6660();
          (**(code **)(**(int **)(unaff_EDI + 0x48) + 0x68))
                    (*(int **)(unaff_EDI + 0x48),"cddddddd",0x5c,*(undefined4 *)(iVar8 + 0x60),uVar3
                     ,uVar6,uVar7,param_6,param_7,local_4);
          FOutputDevice::Logf(param_6,*(ushort **)GNetworkLog_exref);
          return;
        }
      }
    }
  }
  else {
    iVar8 = *(int *)(param_1 + 0x40);
    if (iVar8 != 0) {
      for (pUVar1 = *(UClass **)(iVar8 + 0x24); pUVar1 != (UClass *)0x0;
          pUVar1 = *(UClass **)(pUVar1 + 0x34)) {
        if (pUVar1 == &AVehicle::PrivateStaticClass) goto LAB_104221b3;
      }
    }
  }
  piVar2 = *(int **)(in_ECX + 0x48);
  iVar8 = *piVar2;
  uVar3 = FUN_107a6660(param_9 == 0);
  uVar3 = FUN_107a6660(uVar3);
  uVar3 = FUN_107a6660(uVar3);
  uVar3 = FUN_107a6660(uVar3);
  uVar3 = FUN_107a6660(uVar3);
  uVar3 = FUN_107a6660(uVar3);
  (**(code **)(iVar8 + 0x68))(piVar2,"cddddddd",1,uVar3);
  return;
}


// ==== 104223f0 FUN_104223f0

void FUN_104223f0(int param_1,float param_2,float param_3,float param_4,undefined4 param_5,
                 int param_6)

{
  int iVar1;
  UClass *pUVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  int in_ECX;
  int unaff_EBX;
  undefined4 *puVar7;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined1 local_c [12];
  
  if ((param_1 != 0) && (iVar1 = *(int *)(param_1 + 0x40), iVar1 != 0)) {
    for (pUVar2 = *(UClass **)(iVar1 + 0x24); pUVar2 != (UClass *)0x0;
        pUVar2 = *(UClass **)(pUVar2 + 0x34)) {
      if (pUVar2 == &AVehicle::PrivateStaticClass) {
        param_2 = param_2 - *(float *)(iVar1 + 0x1bc);
        puVar7 = &local_18;
        param_3 = param_3 - *(float *)(iVar1 + 0x1c0);
        param_4 = param_4 - *(float *)(iVar1 + 0x1c4);
        local_18 = 0;
        local_14 = 0;
        local_10 = 0x3f800000;
        iVar6 = FVector::RotateAngleAxis
                          ((FVector *)&param_2,(int)local_c,
                           (FVector *)-(*(uint *)(iVar1 + 0x1cc) & 0xffff));
        param_2 = *(float *)(iVar6 + 4);
        param_3 = *(float *)(iVar6 + 8);
        uVar3 = FUN_107a6660(puVar7);
        uVar4 = FUN_107a6660();
        uVar5 = FUN_107a6660();
        (**(code **)(**(int **)(unaff_EBX + 0x48) + 0x68))
                  (*(int **)(unaff_EBX + 0x48),"cddddd",0x5d,*(undefined4 *)(iVar1 + 0x60),uVar3,
                   uVar4,uVar5,param_4);
        FOutputDevice::Logf((FOutputDevice *)GNetworkLog_exref,*(ushort **)GNetworkLog_exref);
        return;
      }
    }
  }
  if (param_6 == 0) {
    uVar3 = FUN_107a6660();
    uVar4 = FUN_107a6660();
    uVar5 = FUN_107a6660();
    (**(code **)(**(int **)(in_ECX + 0x48) + 0x68))
              (*(int **)(in_ECX + 0x48),"cdddd",0x36,uVar3,uVar4,uVar5,param_5);
    FOutputDevice::Logf(*(FOutputDevice **)GNetworkLog_exref,
                        (ushort *)*(FOutputDevice **)GNetworkLog_exref);
  }
  return;
}


// ==== 104225e0 FUN_104225e0

void FUN_104225e0(undefined4 *param_1)

{
  int iVar1;
  FArray *in_ECX;
  
  iVar1 = FArray::Add(in_ECX,1,4);
  *(undefined4 *)(*(int *)in_ECX + iVar1 * 4) = *param_1;
  return;
}


// ==== 10422610 FUN_10422610

void FUN_10422610(undefined4 *param_1)

{
  int iVar1;
  FArray *in_ECX;
  
  iVar1 = FArray::Add(in_ECX,1,4);
  *(undefined4 *)(*(int *)in_ECX + iVar1 * 4) = *param_1;
  return;
}


// ==== 10422640 FUN_10422640

undefined4 FUN_10422640(uint *param_1)

{
  int iVar1;
  int iVar2;
  int *in_ECX;
  
  iVar2 = *(int *)(in_ECX[3] + (in_ECX[4] - 1U & *param_1) * 4);
  if (iVar2 != -1) {
    iVar1 = *in_ECX;
    do {
      if (*(uint *)(iVar1 + 4 + iVar2 * 0xc) == *param_1) {
        return *(undefined4 *)(iVar1 + 8 + iVar2 * 0xc);
      }
      iVar2 = *(int *)(iVar1 + iVar2 * 0xc);
    } while (iVar2 != -1);
  }
  return 0;
}


// ==== 104226e0 FUN_104226e0

undefined4 FUN_104226e0(uint *param_1)

{
  int iVar1;
  int iVar2;
  int *in_ECX;
  
  iVar2 = *(int *)(in_ECX[3] + (in_ECX[4] - 1U & *param_1) * 4);
  if (iVar2 != -1) {
    iVar1 = *in_ECX;
    do {
      if (*(uint *)(iVar1 + 4 + iVar2 * 0xc) == *param_1) {
        return *(undefined4 *)(iVar1 + 8 + iVar2 * 0xc);
      }
      iVar2 = *(int *)(iVar1 + iVar2 * 0xc);
    } while (iVar2 != -1);
  }
  return 0;
}


// ==== 10422740 FUN_10422740

undefined4 FUN_10422740(uint *param_1)

{
  int iVar1;
  int iVar2;
  int *in_ECX;
  
  iVar2 = *(int *)(in_ECX[3] + (in_ECX[4] - 1U & *param_1) * 4);
  if (iVar2 != -1) {
    iVar1 = *in_ECX;
    do {
      if (*(uint *)(iVar1 + 4 + iVar2 * 0xc) == *param_1) {
        return *(undefined4 *)(iVar1 + 8 + iVar2 * 0xc);
      }
      iVar2 = *(int *)(iVar1 + iVar2 * 0xc);
    } while (iVar2 != -1);
  }
  return 0;
}


// ==== 104227a0 FUN_104227a0

int FUN_104227a0(uint *param_1)

{
  int iVar1;
  int iVar2;
  int *in_ECX;
  
  iVar2 = *(int *)(in_ECX[3] + (in_ECX[4] - 1U & *param_1) * 4);
  if (iVar2 != -1) {
    iVar1 = *in_ECX;
    do {
      if (*(uint *)(iVar1 + 4 + iVar2 * 0xc) == *param_1) {
        return iVar1 + 8 + iVar2 * 0xc;
      }
      iVar2 = *(int *)(iVar1 + iVar2 * 0xc);
    } while (iVar2 != -1);
  }
  return 0;
}


// ==== 10422800 FUN_10422800

undefined4 FUN_10422800(uint *param_1)

{
  int iVar1;
  int iVar2;
  int *in_ECX;
  
  iVar2 = *(int *)(in_ECX[3] + (in_ECX[4] - 1U & *param_1) * 4);
  if (iVar2 != -1) {
    iVar1 = *in_ECX;
    do {
      if (*(uint *)(iVar1 + 4 + iVar2 * 0xc) == *param_1) {
        return *(undefined4 *)(iVar1 + 8 + iVar2 * 0xc);
      }
      iVar2 = *(int *)(iVar1 + iVar2 * 0xc);
    } while (iVar2 != -1);
  }
  return 0;
}


// ==== 10422860 FUN_10422860

void FUN_10422860(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  FArray *in_ECX;
  int iVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1080fbf9;
  local_c = ExceptionList;
  iVar3 = param_1[1];
  ExceptionList = &local_c;
  *(undefined4 *)in_ECX = 0;
  *(int *)(in_ECX + 4) = iVar3;
  *(int *)(in_ECX + 8) = iVar3;
  FArray::Realloc(in_ECX,4);
  local_4 = 0;
  iVar3 = 0;
  *(undefined4 *)(in_ECX + 4) = 0;
  if (0 < param_1[1]) {
    do {
      iVar2 = FArray::Add(in_ECX,1,4);
      puVar1 = (undefined4 *)(*(int *)in_ECX + iVar2 * 4);
      if (puVar1 != (undefined4 *)0x0) {
        *puVar1 = *(undefined4 *)(*param_1 + iVar3 * 4);
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < param_1[1]);
  }
  ExceptionList = local_c;
  return;
}


// ==== 10422920 FUN_10422920

void FUN_10422920(int param_1,int param_2)

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
  FArray::Remove(in_ECX,param_1,param_2,4);
  return;
}


// ==== 104229f0 FUN_104229f0

void FUN_104229f0(FArray *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  FArray *in_ECX;
  int iVar3;
  
  if (in_ECX == param_1) {
    return;
  }
  iVar3 = *(int *)(param_1 + 4);
  *(undefined4 *)(in_ECX + 4) = 0;
  *(int *)(in_ECX + 8) = iVar3;
  FArray::Realloc(in_ECX,4);
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 4)) {
    do {
      iVar2 = FArray::Add(in_ECX,1,4);
      puVar1 = (undefined4 *)(*(int *)in_ECX + iVar2 * 4);
      if (puVar1 != (undefined4 *)0x0) {
        *puVar1 = *(undefined4 *)(*(int *)param_1 + iVar3 * 4);
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(param_1 + 4));
  }
  return;
}


// ==== 10422aa0 FUN_10422aa0

void FUN_10422aa0(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  FArray *in_ECX;
  int iVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1080fc19;
  local_c = ExceptionList;
  iVar3 = param_1[1];
  ExceptionList = &local_c;
  *(undefined4 *)in_ECX = 0;
  *(int *)(in_ECX + 4) = iVar3;
  *(int *)(in_ECX + 8) = iVar3;
  FArray::Realloc(in_ECX,4);
  local_4 = 0;
  iVar3 = 0;
  *(undefined4 *)(in_ECX + 4) = 0;
  if (0 < param_1[1]) {
    do {
      iVar2 = FArray::Add(in_ECX,1,4);
      puVar1 = (undefined4 *)(*(int *)in_ECX + iVar2 * 4);
      if (puVar1 != (undefined4 *)0x0) {
        *puVar1 = *(undefined4 *)(*param_1 + iVar3 * 4);
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < param_1[1]);
  }
  ExceptionList = local_c;
  return;
}


// ==== 10422b60 FUN_10422b60

void FUN_10422b60(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  FArray *in_ECX;
  int iVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1080fc39;
  local_c = ExceptionList;
  iVar3 = param_1[1];
  ExceptionList = &local_c;
  *(undefined4 *)in_ECX = 0;
  *(int *)(in_ECX + 4) = iVar3;
  *(int *)(in_ECX + 8) = iVar3;
  FArray::Realloc(in_ECX,4);
  local_4 = 0;
  iVar3 = 0;
  *(undefined4 *)(in_ECX + 4) = 0;
  if (0 < param_1[1]) {
    do {
      iVar2 = FArray::Add(in_ECX,1,4);
      puVar1 = (undefined4 *)(*(int *)in_ECX + iVar2 * 4);
      if (puVar1 != (undefined4 *)0x0) {
        *puVar1 = *(undefined4 *)(*param_1 + iVar3 * 4);
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < param_1[1]);
  }
  ExceptionList = local_c;
  return;
}


// ==== 10422c50 FUN_10422c50

void FUN_10422c50(FArray *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  FArray *in_ECX;
  int iVar3;
  
  if (in_ECX == param_1) {
    return;
  }
  iVar3 = *(int *)(param_1 + 4);
  *(undefined4 *)(in_ECX + 4) = 0;
  *(int *)(in_ECX + 8) = iVar3;
  FArray::Realloc(in_ECX,4);
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 4)) {
    do {
      iVar2 = FArray::Add(in_ECX,1,4);
      puVar1 = (undefined4 *)(*(int *)in_ECX + iVar2 * 4);
      if (puVar1 != (undefined4 *)0x0) {
        *puVar1 = *(undefined4 *)(*(int *)param_1 + iVar3 * 4);
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(param_1 + 4));
  }
  return;
}


// ==== 10422cd0 FUN_10422cd0

void FUN_10422cd0(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  FArray *in_ECX;
  int iVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1080fc59;
  local_c = ExceptionList;
  iVar3 = param_1[1];
  ExceptionList = &local_c;
  *(undefined4 *)in_ECX = 0;
  *(int *)(in_ECX + 4) = iVar3;
  *(int *)(in_ECX + 8) = iVar3;
  FArray::Realloc(in_ECX,4);
  local_4 = 0;
  iVar3 = 0;
  *(undefined4 *)(in_ECX + 4) = 0;
  if (0 < param_1[1]) {
    do {
      iVar2 = FArray::Add(in_ECX,1,4);
      puVar1 = (undefined4 *)(*(int *)in_ECX + iVar2 * 4);
      if (puVar1 != (undefined4 *)0x0) {
        *puVar1 = *(undefined4 *)(*param_1 + iVar3 * 4);
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < param_1[1]);
  }
  ExceptionList = local_c;
  return;
}


// ==== 10422d90 FUN_10422d90

void FUN_10422d90(int param_1,int param_2)

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
  FArray::Remove(in_ECX,param_1,param_2,4);
  return;
}


// ==== 10422e30 FUN_10422e30

void FUN_10422e30(undefined4 param_1)

{
  FArray *in_ECX;
  
  *(undefined4 *)(in_ECX + 4) = 0;
  *(undefined4 *)(in_ECX + 8) = param_1;
                    /* WARNING: Could not recover jumptable at 0x10422e46. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FArray::Realloc(in_ECX,4);
  return;
}


// ==== 10422e60 FUN_10422e60

void FUN_10422e60(FArray *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  FArray *in_ECX;
  int iVar3;
  
  if (in_ECX == param_1) {
    return;
  }
  iVar3 = *(int *)(param_1 + 4);
  *(undefined4 *)(in_ECX + 4) = 0;
  *(int *)(in_ECX + 8) = iVar3;
  FArray::Realloc(in_ECX,4);
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 4)) {
    do {
      iVar2 = FArray::Add(in_ECX,1,4);
      puVar1 = (undefined4 *)(*(int *)in_ECX + iVar2 * 4);
      if (puVar1 != (undefined4 *)0x0) {
        *puVar1 = *(undefined4 *)(*(int *)param_1 + iVar3 * 4);
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(param_1 + 4));
  }
  return;
}


// ==== 10422ee0 FUN_10422ee0

undefined4 FUN_10422ee0(uint *param_1)

{
  int iVar1;
  int iVar2;
  int *in_ECX;
  
  iVar2 = *(int *)(in_ECX[3] + (in_ECX[4] - 1U & *param_1) * 4);
  if (iVar2 != -1) {
    iVar1 = *in_ECX;
    do {
      if (*(uint *)(iVar1 + 4 + iVar2 * 0xc) == *param_1) {
        return *(undefined4 *)(iVar1 + 8 + iVar2 * 0xc);
      }
      iVar2 = *(int *)(iVar1 + iVar2 * 0xc);
    } while (iVar2 != -1);
  }
  return 0;
}


// ==== 10422f80 FUN_10422f80

undefined4 FUN_10422f80(uint *param_1)

{
  int iVar1;
  int iVar2;
  int *in_ECX;
  
  iVar2 = *(int *)(in_ECX[3] + (in_ECX[4] - 1U & *param_1) * 4);
  if (iVar2 != -1) {
    iVar1 = *in_ECX;
    do {
      if (*(uint *)(iVar1 + 4 + iVar2 * 0xc) == *param_1) {
        return *(undefined4 *)(iVar1 + 8 + iVar2 * 0xc);
      }
      iVar2 = *(int *)(iVar1 + iVar2 * 0xc);
    } while (iVar2 != -1);
  }
  return 0;
}


// ==== 10423040 FUN_10423040

void FUN_10423040(void)

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
      iVar4 = iVar4 + 0xc;
    } while (iVar2 < in_ECX[1]);
  }
  if (in_ECX[3] != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))(in_ECX[3]);
  }
  in_ECX[3] = iVar1;
  return;
}


// ==== 10423150 FUN_10423150

undefined4 * FUN_10423150(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  uint uVar2;
  FArray *in_ECX;
  undefined4 *puVar3;
  
  iVar1 = FArray::Add(in_ECX,1,0xc);
  puVar3 = (undefined4 *)(*(int *)in_ECX + iVar1 * 0xc);
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    puVar3[1] = *param_1;
    puVar3[2] = *param_2;
  }
  uVar2 = puVar3[1] & *(int *)(in_ECX + 0x10) - 1U;
  *puVar3 = *(undefined4 *)(*(int *)(in_ECX + 0xc) + uVar2 * 4);
  *(int *)(*(int *)(in_ECX + 0xc) + uVar2 * 4) = *(int *)(in_ECX + 4) + -1;
  if (*(int *)(in_ECX + 0x10) * 2 + 8 < *(int *)(in_ECX + 4)) {
    *(int *)(in_ECX + 0x10) = *(int *)(in_ECX + 0x10) * 2;
    thunk_FUN_10423040();
  }
  return puVar3 + 2;
}


// ==== 10423210 FUN_10423210

void FUN_10423210(void)

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
      iVar4 = iVar4 + 0xc;
    } while (iVar2 < in_ECX[1]);
  }
  if (in_ECX[3] != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))(in_ECX[3]);
  }
  in_ECX[3] = iVar1;
  return;
}


// ==== 10423320 FUN_10423320

undefined4 * FUN_10423320(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  uint uVar2;
  FArray *in_ECX;
  undefined4 *puVar3;
  
  iVar1 = FArray::Add(in_ECX,1,0xc);
  puVar3 = (undefined4 *)(*(int *)in_ECX + iVar1 * 0xc);
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    puVar3[1] = *param_1;
    puVar3[2] = *param_2;
  }
  uVar2 = puVar3[1] & *(int *)(in_ECX + 0x10) - 1U;
  *puVar3 = *(undefined4 *)(*(int *)(in_ECX + 0xc) + uVar2 * 4);
  *(int *)(*(int *)(in_ECX + 0xc) + uVar2 * 4) = *(int *)(in_ECX + 4) + -1;
  if (*(int *)(in_ECX + 0x10) * 2 + 8 < *(int *)(in_ECX + 4)) {
    *(int *)(in_ECX + 0x10) = *(int *)(in_ECX + 0x10) * 2;
    thunk_FUN_10423210();
  }
  return puVar3 + 2;
}


// ==== 104233b0 FUN_104233b0

void FUN_104233b0(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  FArray *in_ECX;
  int iVar3;
  int iVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1080fc79;
  local_c = ExceptionList;
  iVar4 = param_1[1];
  iVar3 = 0;
  ExceptionList = &local_c;
  *(undefined4 *)in_ECX = 0;
  *(int *)(in_ECX + 4) = iVar4;
  *(int *)(in_ECX + 8) = iVar4;
  FArray::Realloc(in_ECX,0xc);
  local_4 = 0;
  *(undefined4 *)(in_ECX + 4) = 0;
  if (0 < param_1[1]) {
    iVar4 = 0;
    do {
      iVar2 = FArray::Add(in_ECX,1,0xc);
      puVar1 = (undefined4 *)(*(int *)in_ECX + iVar2 * 0xc);
      if (puVar1 != (undefined4 *)0x0) {
        iVar2 = *param_1 + iVar4;
        *puVar1 = *(undefined4 *)(*param_1 + iVar4);
        puVar1[1] = *(undefined4 *)(iVar2 + 4);
        puVar1[2] = *(undefined4 *)(iVar2 + 8);
      }
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + 0xc;
    } while (iVar3 < param_1[1]);
  }
  ExceptionList = local_c;
  return;
}


// ==== 10423490 FUN_10423490

void FUN_10423490(int param_1,int param_2)

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
  FArray::Remove(in_ECX,param_1,param_2,0xc);
  return;
}


// ==== 10423560 FUN_10423560

void FUN_10423560(void)

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
      iVar4 = iVar4 + 0xc;
    } while (iVar2 < in_ECX[1]);
  }
  if (in_ECX[3] != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))(in_ECX[3]);
  }
  in_ECX[3] = iVar1;
  return;
}


// ==== 10423670 FUN_10423670

undefined4 * FUN_10423670(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  uint uVar2;
  FArray *in_ECX;
  undefined4 *puVar3;
  
  iVar1 = FArray::Add(in_ECX,1,0xc);
  puVar3 = (undefined4 *)(*(int *)in_ECX + iVar1 * 0xc);
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    puVar3[1] = *param_1;
    puVar3[2] = *param_2;
  }
  uVar2 = puVar3[1] & *(int *)(in_ECX + 0x10) - 1U;
  *puVar3 = *(undefined4 *)(*(int *)(in_ECX + 0xc) + uVar2 * 4);
  *(int *)(*(int *)(in_ECX + 0xc) + uVar2 * 4) = *(int *)(in_ECX + 4) + -1;
  if (*(int *)(in_ECX + 0x10) * 2 + 8 < *(int *)(in_ECX + 4)) {
    *(int *)(in_ECX + 0x10) = *(int *)(in_ECX + 0x10) * 2;
    thunk_FUN_10423560();
  }
  return puVar3 + 2;
}


// ==== 10423730 FUN_10423730

void FUN_10423730(void)

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
      iVar4 = iVar4 + 0xc;
    } while (iVar2 < in_ECX[1]);
  }
  if (in_ECX[3] != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))(in_ECX[3]);
  }
  in_ECX[3] = iVar1;
  return;
}


// ==== 10423840 FUN_10423840

undefined4 * FUN_10423840(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  uint uVar2;
  FArray *in_ECX;
  undefined4 *puVar3;
  
  iVar1 = FArray::Add(in_ECX,1,0xc);
  puVar3 = (undefined4 *)(*(int *)in_ECX + iVar1 * 0xc);
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    puVar3[1] = *param_1;
    puVar3[2] = *param_2;
  }
  uVar2 = puVar3[1] & *(int *)(in_ECX + 0x10) - 1U;
  *puVar3 = *(undefined4 *)(*(int *)(in_ECX + 0xc) + uVar2 * 4);
  *(int *)(*(int *)(in_ECX + 0xc) + uVar2 * 4) = *(int *)(in_ECX + 4) + -1;
  if (*(int *)(in_ECX + 0x10) * 2 + 8 < *(int *)(in_ECX + 4)) {
    *(int *)(in_ECX + 0x10) = *(int *)(in_ECX + 0x10) * 2;
    thunk_FUN_10423730();
  }
  return puVar3 + 2;
}


// ==== 104238d0 FUN_104238d0

void FUN_104238d0(int param_1,int param_2)

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
  FArray::Remove(in_ECX,param_1,param_2,0xc);
  return;
}


// ==== 104239a0 FUN_104239a0

void FUN_104239a0(void)

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
      iVar4 = iVar4 + 0xc;
    } while (iVar2 < in_ECX[1]);
  }
  if (in_ECX[3] != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))(in_ECX[3]);
  }
  in_ECX[3] = iVar1;
  return;
}


// ==== 10423ab0 FUN_10423ab0

undefined4 * FUN_10423ab0(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  uint uVar2;
  FArray *in_ECX;
  undefined4 *puVar3;
  
  iVar1 = FArray::Add(in_ECX,1,0xc);
  puVar3 = (undefined4 *)(*(int *)in_ECX + iVar1 * 0xc);
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    puVar3[1] = *param_1;
    puVar3[2] = *param_2;
  }
  uVar2 = puVar3[1] & *(int *)(in_ECX + 0x10) - 1U;
  *puVar3 = *(undefined4 *)(*(int *)(in_ECX + 0xc) + uVar2 * 4);
  *(int *)(*(int *)(in_ECX + 0xc) + uVar2 * 4) = *(int *)(in_ECX + 4) + -1;
  if (*(int *)(in_ECX + 0x10) * 2 + 8 < *(int *)(in_ECX + 4)) {
    *(int *)(in_ECX + 0x10) = *(int *)(in_ECX + 0x10) * 2;
    thunk_FUN_104239a0();
  }
  return puVar3 + 2;
}


// ==== 10423b40 FUN_10423b40

void FUN_10423b40(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  FArray *in_ECX;
  int iVar3;
  int iVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1080fc99;
  local_c = ExceptionList;
  iVar4 = param_1[1];
  iVar3 = 0;
  ExceptionList = &local_c;
  *(undefined4 *)in_ECX = 0;
  *(int *)(in_ECX + 4) = iVar4;
  *(int *)(in_ECX + 8) = iVar4;
  FArray::Realloc(in_ECX,0xc);
  local_4 = 0;
  *(undefined4 *)(in_ECX + 4) = 0;
  if (0 < param_1[1]) {
    iVar4 = 0;
    do {
      iVar2 = FArray::Add(in_ECX,1,0xc);
      puVar1 = (undefined4 *)(*(int *)in_ECX + iVar2 * 0xc);
      if (puVar1 != (undefined4 *)0x0) {
        iVar2 = *param_1 + iVar4;
        *puVar1 = *(undefined4 *)(*param_1 + iVar4);
        puVar1[1] = *(undefined4 *)(iVar2 + 4);
        puVar1[2] = *(undefined4 *)(iVar2 + 8);
      }
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + 0xc;
    } while (iVar3 < param_1[1]);
  }
  ExceptionList = local_c;
  return;
}


// ==== 10423c20 FUN_10423c20

void FUN_10423c20(int param_1,int param_2)

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
  FArray::Remove(in_ECX,param_1,param_2,0xc);
  return;
}


// ==== 10423cc0 FUN_10423cc0

void FUN_10423cc0(int param_1,int param_2)

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
  FArray::Remove(in_ECX,param_1,param_2,4);
  return;
}


// ==== 10423dc0 FUN_10423dc0

void FUN_10423dc0(int param_1,int param_2)

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
  FArray::Remove(in_ECX,param_1,param_2,4);
  return;
}


// ==== 10423f00 FUN_10423f00

void FUN_10423f00(FArray *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  FArray *in_ECX;
  int iVar3;
  int iVar4;
  
  if (in_ECX != param_1) {
    iVar3 = *(int *)(param_1 + 4);
    iVar4 = 0;
    *(undefined4 *)(in_ECX + 4) = 0;
    *(int *)(in_ECX + 8) = iVar3;
    FArray::Realloc(in_ECX,0xc);
    iVar3 = 0;
    if (0 < *(int *)(param_1 + 4)) {
      do {
        iVar2 = FArray::Add(in_ECX,1,0xc);
        puVar1 = (undefined4 *)(*(int *)in_ECX + iVar2 * 0xc);
        if (puVar1 != (undefined4 *)0x0) {
          iVar2 = *(int *)param_1 + iVar4;
          *puVar1 = *(undefined4 *)(*(int *)param_1 + iVar4);
          puVar1[1] = *(undefined4 *)(iVar2 + 4);
          puVar1[2] = *(undefined4 *)(iVar2 + 8);
        }
        iVar3 = iVar3 + 1;
        iVar4 = iVar4 + 0xc;
      } while (iVar3 < *(int *)(param_1 + 4));
    }
    return;
  }
  return;
}


// ==== 10424030 FUN_10424030

void FUN_10424030(FArray *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  FArray *in_ECX;
  int iVar3;
  int iVar4;
  
  if (in_ECX != param_1) {
    iVar3 = *(int *)(param_1 + 4);
    iVar4 = 0;
    *(undefined4 *)(in_ECX + 4) = 0;
    *(int *)(in_ECX + 8) = iVar3;
    FArray::Realloc(in_ECX,0xc);
    iVar3 = 0;
    if (0 < *(int *)(param_1 + 4)) {
      do {
        iVar2 = FArray::Add(in_ECX,1,0xc);
        puVar1 = (undefined4 *)(*(int *)in_ECX + iVar2 * 0xc);
        if (puVar1 != (undefined4 *)0x0) {
          iVar2 = *(int *)param_1 + iVar4;
          *puVar1 = *(undefined4 *)(*(int *)param_1 + iVar4);
          puVar1[1] = *(undefined4 *)(iVar2 + 4);
          puVar1[2] = *(undefined4 *)(iVar2 + 8);
        }
        iVar3 = iVar3 + 1;
        iVar4 = iVar4 + 0xc;
      } while (iVar3 < *(int *)(param_1 + 4));
    }
    return;
  }
  return;
}


// ==== 104240c0 FUN_104240c0

undefined4 FUN_104240c0(int param_1,int param_2,float param_3)

{
  int iVar1;
  UClass *pUVar2;
  undefined4 uVar3;
  int in_ECX;
  int iVar4;
  int *piVar5;
  int iVar6;
  float10 fVar7;
  
  uVar3 = 0;
  iVar4 = 0;
  if (0 < *(int *)(in_ECX + 0x14)) {
    piVar5 = *(int **)(in_ECX + 0x10);
    while (((iVar6 = *piVar5, *(int *)(iVar6 + 4) != param_1 || (*(int *)(iVar6 + 8) != param_2)) ||
           ((float)*(int *)(iVar6 + 0xc) != param_3))) {
      iVar4 = iVar4 + 1;
      piVar5 = piVar5 + 1;
      if (*(int *)(in_ECX + 0x14) <= iVar4) {
        return 0;
      }
    }
    iVar6 = 0;
    iVar4 = DAT_10c51044;
    do {
      param_3 = 0.0;
      if (((iVar4 != 0) && (*(int *)(iVar4 + 0x54) != 0)) &&
         ((piVar5 = *(int **)(*(int *)(iVar4 + 0x54) + 0x38), *piVar5 != 0 &&
          (iVar1 = *(int *)(*piVar5 + 0x3c), iVar1 != 0)))) {
        for (pUVar2 = *(UClass **)(iVar1 + 0x24); pUVar2 != (UClass *)0x0;
            pUVar2 = *(UClass **)(pUVar2 + 0x34)) {
          if (pUVar2 == &ALineagePlayerController::PrivateStaticClass) {
            fVar7 = (float10)thunk_FUN_10373830(iVar1 + 0x1bc,
                                                *(int *)(*(int *)(*(int *)(in_ECX + 0x10) +
                                                                 iVar6 * 4) + 4) + 0x1bc);
            param_3 = (float)fVar7;
            iVar4 = DAT_10c51044;
            break;
          }
        }
      }
      if (param_3 < *(float *)(in_ECX + 0xc)) {
        *(float *)(in_ECX + 0xc) = param_3;
        iVar4 = DAT_10c51044;
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < *(int *)(in_ECX + 0x14));
    uVar3 = 1;
  }
  return uVar3;
}


// ==== 104241f0 FUN_104241f0

void FUN_104241f0(void)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 8) = 0;
  *(undefined4 *)(in_ECX + 0xc) = 0;
  FArray::Realloc((FArray *)(in_ECX + 4),4);
  return;
}


// ==== 10424210 FUN_10424210

void FUN_10424210(int param_1)

{
  int in_ECX;
  
  thunk_FUN_10422c50(param_1 + 4);
  *(undefined4 *)(in_ECX + 0x10) = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)(in_ECX + 0x14) = *(undefined4 *)(param_1 + 0x14);
  return;
}


// ==== 10424240 FUN_10424240

void FUN_10424240(int param_1)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(in_ECX + 8) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(in_ECX + 0xc) = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(in_ECX + 0x10) = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)(in_ECX + 0x14) = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)(in_ECX + 0x18) = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)(in_ECX + 0x1c) = *(undefined4 *)(param_1 + 0x1c);
  thunk_FUN_10379900(param_1 + 0x20);
  *(undefined4 *)(in_ECX + 0x2c) = *(undefined4 *)(param_1 + 0x2c);
  *(undefined4 *)(in_ECX + 0x30) = *(undefined4 *)(param_1 + 0x30);
  *(undefined4 *)(in_ECX + 0x34) = *(undefined4 *)(param_1 + 0x34);
  *(undefined4 *)(in_ECX + 0x38) = *(undefined4 *)(param_1 + 0x38);
  *(undefined4 *)(in_ECX + 0x3c) = *(undefined4 *)(param_1 + 0x3c);
  return;
}


// ==== 104242c0 FUN_104242c0

void FUN_104242c0(void)

{
  undefined4 *puVar1;
  int in_ECX;
  int iVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1080fcb0;
  local_10 = ExceptionList;
  local_8 = 0;
  iVar2 = *(int *)(in_ECX + 0x20);
  ExceptionList = &local_10;
  while( true ) {
    iVar2 = iVar2 + -1;
    if (iVar2 < 0) break;
    puVar1 = *(undefined4 **)(*(int *)(in_ECX + 0x1c) + iVar2 * 4);
    if (puVar1 != (undefined4 *)0x0) {
      thunk_FUN_10422d90(iVar2,1);
      (**(code **)*puVar1)(1);
    }
  }
  thunk_FUN_10422e30(0);
  *(undefined4 *)(in_ECX + 0x14) = 0;
  *(undefined4 *)(in_ECX + 0x10) = 0;
  *(undefined4 *)(in_ECX + 0xc) = 0;
  *(undefined4 *)(in_ECX + 4) = 0;
  ExceptionList = local_10;
  return;
}


// ==== 10424349 Catch@10424349

void Catch_10424349(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_10914c48);
}


// ==== 1042435d Catch@1042435d

void Catch_1042435d(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"clear");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 104243b0 FUN_104243b0

undefined4 FUN_104243b0(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1080fcc0;
  local_10 = ExceptionList;
  local_8 = 0;
  if (param_1 != 0) {
    iVar2 = *(int *)(in_ECX + 0x20);
    while (iVar2 = iVar2 + -1, -1 < iVar2) {
      puVar1 = *(undefined4 **)(*(int *)(in_ECX + 0x1c) + iVar2 * 4);
      if ((puVar1 != (undefined4 *)0x0) && (puVar1[1] == param_1)) {
        ExceptionList = &local_10;
        thunk_FUN_10422d90(iVar2,1);
        (**(code **)*puVar1)(1);
        ExceptionList = local_10;
        return 1;
      }
    }
  }
  return 0;
}


// ==== 10424443 Catch@10424443

void Catch_10424443(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_10914c48);
}


// ==== 10424457 Catch@10424457

void Catch_10424457(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"RemoveMonsterRaceInfo");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 104244b0 FUN_104244b0

void FUN_104244b0(int param_1)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(in_ECX + 8) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(in_ECX + 0xc) = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(in_ECX + 0x10) = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)(in_ECX + 0x14) = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)(in_ECX + 0x18) = *(undefined4 *)(param_1 + 0x18);
  thunk_FUN_10422e60(param_1 + 0x1c);
  return;
}


// ==== 10424500 FUN_10424500

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


// ==== 104245f0 FUN_104245f0

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


// ==== 10424750 FUN_10424750

uint FUN_10424750(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  uint extraout_EAX;
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
  
  thunk_FUN_104026b0(*(undefined4 *)(param_1 + 0x48),param_2,"ddddddd",&param_1,&local_1c,&local_20,
                     &local_24,&local_28,&local_2c,&local_30);
  iVar1 = DAT_10b1f538;
  local_c = (float)local_1c;
  local_8 = (float)local_20;
  local_4 = (float)local_24;
  local_18 = (float)local_28;
  local_14 = (float)local_2c;
  local_10 = (float)local_30;
  if (DAT_10b1f538 != 0) {
    iVar2 = thunk_FUN_104226e0(&param_1);
    if (iVar2 != 0) {
      piVar3 = (int *)thunk_FUN_104226e0(&param_1);
      if (*piVar3 == 1) {
        iVar2 = thunk_FUN_104226e0(&param_1);
        if (*(int *)(iVar2 + 4) != 0) {
          iVar2 = thunk_FUN_104226e0(&param_1);
          uVar4 = *(undefined4 *)(iVar2 + 4);
          goto LAB_10424818;
        }
      }
    }
  }
  uVar4 = 0;
LAB_10424818:
  (**(code **)(**(int **)(iVar1 + 0x54) + 0xf8))
            (uVar4,local_c,local_8,local_4,local_18,local_14,local_10);
  FOutputDevice::Logf((FOutputDevice *)GNetworkLog_exref,*(ushort **)GNetworkLog_exref);
  return extraout_EAX & 0xffffff00;
}


// ==== 104248f0 FUN_104248f0

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


// ==== 10424b60 FUN_10424b60

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


// ==== 10424c70 FUN_10424c70

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


// ==== 10424d80 FUN_10424d80

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


// ==== 10424e80 FUN_10424e80

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


// ==== 10425770 FUN_10425770

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


// ==== 10425930 FUN_10425930

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


// ==== 10425ab0 FUN_10425ab0

uint FUN_10425ab0(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  uint extraout_EAX;
  FOutputDevice *unaff_retaddr;
  
  thunk_FUN_104026b0(*(undefined4 *)(param_1 + 0x48),param_2,&DAT_1087ff8c,&param_1);
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
          goto LAB_10425b27;
        }
      }
    }
  }
  uVar4 = 0;
LAB_10425b27:
  (**(code **)(**(int **)(iVar1 + 0x54) + 0x144))(uVar4);
  FOutputDevice::Logf(unaff_retaddr,*(ushort **)GNetworkLog_exref);
  return extraout_EAX & 0xffffff00;
}


// ==== 10425b80 FUN_10425b80

uint FUN_10425b80(void)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  uint extraout_EAX;
  
  iVar1 = DAT_10b1f538;
  if (DAT_10b1f538 != 0) {
    iVar2 = thunk_FUN_104226e0(&DAT_10b1f530);
    if (iVar2 != 0) {
      piVar3 = (int *)thunk_FUN_104226e0(&DAT_10b1f530);
      if (*piVar3 == 1) {
        iVar2 = thunk_FUN_104226e0(&DAT_10b1f530);
        if (*(int *)(iVar2 + 4) != 0) {
          iVar2 = thunk_FUN_104226e0(&DAT_10b1f530);
          uVar4 = *(undefined4 *)(iVar2 + 4);
          goto LAB_10425bd8;
        }
      }
    }
  }
  uVar4 = 0;
LAB_10425bd8:
  (**(code **)(**(int **)(iVar1 + 0x54) + 0x148))(uVar4);
  FOutputDevice::Logf((FOutputDevice *)GNetworkLog_exref,*(ushort **)GNetworkLog_exref);
  return extraout_EAX & 0xffffff00;
}


// ==== 10425c30 FUN_10425c30

uint FUN_10425c30(void)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  uint extraout_EAX;
  
  iVar1 = DAT_10b1f538;
  if (DAT_10b1f538 != 0) {
    iVar2 = thunk_FUN_104226e0(&DAT_10b1f530);
    if (iVar2 != 0) {
      piVar3 = (int *)thunk_FUN_104226e0(&DAT_10b1f530);
      if (*piVar3 == 1) {
        iVar2 = thunk_FUN_104226e0(&DAT_10b1f530);
        if (*(int *)(iVar2 + 4) != 0) {
          iVar2 = thunk_FUN_104226e0(&DAT_10b1f530);
          uVar4 = *(undefined4 *)(iVar2 + 4);
          goto LAB_10425c88;
        }
      }
    }
  }
  uVar4 = 0;
LAB_10425c88:
  (**(code **)(**(int **)(iVar1 + 0x54) + 0x14c))(uVar4);
  FOutputDevice::Logf((FOutputDevice *)GNetworkLog_exref,*(ushort **)GNetworkLog_exref);
  return extraout_EAX & 0xffffff00;
}


// ==== 10425ce0 FUN_10425ce0

uint FUN_10425ce0(void)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  uint extraout_EAX;
  
  iVar1 = DAT_10b1f538;
  if (DAT_10b1f538 != 0) {
    iVar2 = thunk_FUN_104226e0(&DAT_10b1f530);
    if (iVar2 != 0) {
      piVar3 = (int *)thunk_FUN_104226e0(&DAT_10b1f530);
      if (*piVar3 == 1) {
        iVar2 = thunk_FUN_104226e0(&DAT_10b1f530);
        if (*(int *)(iVar2 + 4) != 0) {
          iVar2 = thunk_FUN_104226e0(&DAT_10b1f530);
          uVar4 = *(undefined4 *)(iVar2 + 4);
          goto LAB_10425d38;
        }
      }
    }
  }
  uVar4 = 0;
LAB_10425d38:
  (**(code **)(**(int **)(iVar1 + 0x54) + 0x150))(uVar4);
  FOutputDevice::Logf((FOutputDevice *)GNetworkLog_exref,*(ushort **)GNetworkLog_exref);
  return extraout_EAX & 0xffffff00;
}


// ==== 10425d90 FUN_10425d90

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


// ==== 10425f30 FUN_10425f30

uint FUN_10425f30(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  uint extraout_EAX;
  undefined4 uVar5;
  undefined1 local_8 [4];
  undefined4 local_4;
  
  thunk_FUN_104026b0(*(undefined4 *)(param_1 + 0x48),param_2,&DAT_1087ff0c,local_8,&param_1,&local_4
                    );
  iVar1 = DAT_10b1f538;
  if (DAT_10b1f538 == 0) {
LAB_10425fb3:
    uVar5 = 0;
  }
  else {
    iVar2 = thunk_FUN_104226e0(&param_1);
    if (iVar2 == 0) goto LAB_10425fb3;
    piVar3 = (int *)thunk_FUN_104226e0(&param_1);
    if (*piVar3 != 2) goto LAB_10425fb3;
    iVar2 = thunk_FUN_104226e0(&param_1);
    if (*(int *)(iVar2 + 4) == 0) goto LAB_10425fb3;
    iVar2 = thunk_FUN_104226e0(&param_1);
    uVar5 = *(undefined4 *)(iVar2 + 4);
  }
  if (iVar1 != 0) {
    iVar2 = thunk_FUN_104226e0(local_8);
    if (iVar2 != 0) {
      piVar3 = (int *)thunk_FUN_104226e0(local_8);
      if (*piVar3 == 1) {
        iVar2 = thunk_FUN_104226e0(local_8);
        if (*(int *)(iVar2 + 4) != 0) {
          iVar2 = thunk_FUN_104226e0(local_8);
          uVar4 = *(undefined4 *)(iVar2 + 4);
          goto LAB_10426005;
        }
      }
    }
  }
  uVar4 = 0;
LAB_10426005:
  (**(code **)(**(int **)(iVar1 + 0x54) + 0x170))(uVar4,uVar5,local_4);
  FOutputDevice::Logf((FOutputDevice *)GNetworkLog_exref,*(ushort **)GNetworkLog_exref);
  return extraout_EAX & 0xffffff00;
}


// ==== 10426090 FUN_10426090

uint FUN_10426090(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  uint extraout_EAX;
  undefined4 uVar5;
  undefined1 local_8 [4];
  undefined4 local_4;
  
  thunk_FUN_104026b0(*(undefined4 *)(param_1 + 0x48),param_2,&DAT_1087ff0c,local_8,&param_1,&local_4
                    );
  iVar1 = DAT_10b1f538;
  if (DAT_10b1f538 == 0) {
LAB_10426113:
    uVar5 = 0;
  }
  else {
    iVar2 = thunk_FUN_104226e0(&param_1);
    if (iVar2 == 0) goto LAB_10426113;
    piVar3 = (int *)thunk_FUN_104226e0(&param_1);
    if (*piVar3 != 2) goto LAB_10426113;
    iVar2 = thunk_FUN_104226e0(&param_1);
    if (*(int *)(iVar2 + 4) == 0) goto LAB_10426113;
    iVar2 = thunk_FUN_104226e0(&param_1);
    uVar5 = *(undefined4 *)(iVar2 + 4);
  }
  if (iVar1 != 0) {
    iVar2 = thunk_FUN_104226e0(local_8);
    if (iVar2 != 0) {
      piVar3 = (int *)thunk_FUN_104226e0(local_8);
      if (*piVar3 == 1) {
        iVar2 = thunk_FUN_104226e0(local_8);
        if (*(int *)(iVar2 + 4) != 0) {
          iVar2 = thunk_FUN_104226e0(local_8);
          uVar4 = *(undefined4 *)(iVar2 + 4);
          goto LAB_10426165;
        }
      }
    }
  }
  uVar4 = 0;
LAB_10426165:
  (**(code **)(**(int **)(iVar1 + 0x54) + 0x174))(uVar4,uVar5,local_4);
  FOutputDevice::Logf((FOutputDevice *)GNetworkLog_exref,*(ushort **)GNetworkLog_exref);
  return extraout_EAX & 0xffffff00;
}


// ==== 104261f0 FUN_104261f0

uint FUN_104261f0(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  uint extraout_EAX;
  code *pcVar5;
  int iStack_c;
  undefined1 auStack_8 [4];
  undefined4 uStack_4;
  
  iVar1 = param_1;
  uVar2 = thunk_FUN_104026b0(*(undefined4 *)(param_1 + 0x48),param_2,&DAT_1087ff44,auStack_8,
                             &iStack_c);
  if ((((DAT_10b1f538 != 0) && (iVar3 = thunk_FUN_104226e0(auStack_8), iVar3 != 0)) &&
      (piVar4 = (int *)thunk_FUN_104226e0(auStack_8), *piVar4 == 1)) &&
     (iVar3 = thunk_FUN_104226e0(auStack_8), *(int *)(iVar3 + 4) != 0)) {
    iVar3 = thunk_FUN_104226e0(auStack_8);
    iVar3 = *(int *)(iVar3 + 4);
    if (iVar3 != 0) {
      while (0 < iStack_c) {
        iStack_c = iStack_c + -1;
        uVar2 = thunk_FUN_104026b0(*(undefined4 *)(iVar1 + 0x48),uVar2,&DAT_1087ff44,&uStack_4,
                                   &param_1);
        switch(uStack_4) {
        case 0:
          (**(code **)(**(int **)(DAT_10b1f538 + 0x54) + 0x178))(iVar3,param_1);
          goto switchD_104262c0_caseD_2;
        case 1:
          pcVar5 = *(code **)(**(int **)(DAT_10b1f538 + 0x54) + 0x17c);
          break;
        default:
          goto switchD_104262c0_caseD_2;
        case 3:
          pcVar5 = *(code **)(**(int **)(DAT_10b1f538 + 0x54) + 0x184);
          break;
        case 4:
          pcVar5 = *(code **)(**(int **)(DAT_10b1f538 + 0x54) + 0x188);
          break;
        case 5:
          pcVar5 = *(code **)(**(int **)(DAT_10b1f538 + 0x54) + 0x18c);
          break;
        case 6:
          pcVar5 = *(code **)(**(int **)(DAT_10b1f538 + 0x54) + 400);
          break;
        case 7:
          pcVar5 = *(code **)(**(int **)(DAT_10b1f538 + 0x54) + 0x194);
          break;
        case 8:
          pcVar5 = *(code **)(**(int **)(DAT_10b1f538 + 0x54) + 0x198);
          break;
        case 9:
          pcVar5 = *(code **)(**(int **)(DAT_10b1f538 + 0x54) + 0x19c);
          break;
        case 10:
          pcVar5 = *(code **)(**(int **)(DAT_10b1f538 + 0x54) + 0x1a0);
          break;
        case 0xb:
          pcVar5 = *(code **)(**(int **)(DAT_10b1f538 + 0x54) + 0x1ac);
          break;
        case 0xc:
          pcVar5 = *(code **)(**(int **)(DAT_10b1f538 + 0x54) + 0x1b0);
          break;
        case 0xd:
          pcVar5 = *(code **)(**(int **)(DAT_10b1f538 + 0x54) + 0x1b4);
          break;
        case 0xe:
          pcVar5 = *(code **)(**(int **)(DAT_10b1f538 + 0x54) + 0x1b8);
          break;
        case 0xf:
          pcVar5 = *(code **)(**(int **)(DAT_10b1f538 + 0x54) + 0x1bc);
          break;
        case 0x10:
          pcVar5 = *(code **)(**(int **)(DAT_10b1f538 + 0x54) + 0x1c0);
          break;
        case 0x11:
          pcVar5 = *(code **)(**(int **)(DAT_10b1f538 + 0x54) + 0x1c4);
          break;
        case 0x12:
          pcVar5 = *(code **)(**(int **)(DAT_10b1f538 + 0x54) + 0x1c8);
          break;
        case 0x13:
          pcVar5 = *(code **)(**(int **)(DAT_10b1f538 + 0x54) + 0x1cc);
          break;
        case 0x14:
          pcVar5 = *(code **)(**(int **)(DAT_10b1f538 + 0x54) + 0x1d0);
          break;
        case 0x15:
          pcVar5 = *(code **)(**(int **)(DAT_10b1f538 + 0x54) + 0x1d4);
          break;
        case 0x16:
          pcVar5 = *(code **)(**(int **)(DAT_10b1f538 + 0x54) + 0x1d8);
          break;
        case 0x17:
          pcVar5 = *(code **)(**(int **)(DAT_10b1f538 + 0x54) + 0x1dc);
          break;
        case 0x18:
          pcVar5 = *(code **)(**(int **)(DAT_10b1f538 + 0x54) + 0x1e0);
          break;
        case 0x19:
          pcVar5 = *(code **)(**(int **)(DAT_10b1f538 + 0x54) + 0x1e4);
          break;
        case 0x1a:
          pcVar5 = *(code **)(**(int **)(DAT_10b1f538 + 0x54) + 0x1e8);
          break;
        case 0x1b:
          pcVar5 = *(code **)(**(int **)(DAT_10b1f538 + 0x54) + 0x1ec);
          break;
        case 0x21:
          pcVar5 = *(code **)(**(int **)(DAT_10b1f538 + 0x54) + 0x1a4);
          break;
        case 0x22:
          pcVar5 = *(code **)(**(int **)(DAT_10b1f538 + 0x54) + 0x1a8);
        }
        (*pcVar5)(iVar3,param_1);
switchD_104262c0_caseD_2:
      }
      iStack_c = iStack_c + -1;
    }
  }
  FOutputDevice::Logf((FOutputDevice *)GNetworkLog_exref,*(ushort **)GNetworkLog_exref);
  return extraout_EAX & 0xffffff00;
}


// ==== 104266f0 FUN_104266f0

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


// ==== 10426810 FUN_10426810

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


// ==== 104268c0 Catch@104268c0

void Catch_104268c0(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x2c) = *(undefined4 *)(unaff_EBP + -0x30);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x2c,&DAT_10914c48);
}


// ==== 104268d4 Catch@104268d4

void Catch_104268d4(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"PartyMemberPositionPacket");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10426930 FUN_10426930

uint FUN_10426930(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  uint extraout_EAX;
  char cStack_39e;
  char cStack_39d;
  char cStack_39c;
  char cStack_39b;
  char cStack_39a;
  undefined1 auStack_398 [4];
  undefined8 uStack_394;
  undefined8 uStack_38c;
  double dStack_380;
  undefined1 auStack_378 [4];
  double dStack_374;
  undefined1 auStack_36c [4];
  undefined1 auStack_368 [4];
  undefined1 auStack_364 [4];
  undefined1 auStack_360 [4];
  undefined1 auStack_35c [4];
  undefined1 auStack_358 [4];
  undefined1 auStack_354 [4];
  undefined1 auStack_350 [4];
  undefined1 auStack_34c [4];
  undefined1 auStack_348 [4];
  undefined1 auStack_344 [4];
  undefined1 auStack_340 [4];
  undefined1 auStack_33c [4];
  undefined1 auStack_338 [4];
  undefined1 auStack_334 [4];
  undefined1 auStack_330 [4];
  undefined1 auStack_32c [12];
  undefined1 auStack_320 [4];
  undefined1 auStack_31c [8];
  User aUStack_314 [24];
  undefined1 auStack_2fc [4];
  undefined1 auStack_2f8 [48];
  undefined1 auStack_2c8 [4];
  undefined1 auStack_2c4 [4];
  undefined1 auStack_2c0 [4];
  undefined1 auStack_2bc [4];
  undefined1 auStack_2b8 [8];
  undefined1 auStack_2b0 [4];
  undefined1 auStack_2ac [4];
  undefined1 auStack_2a8 [4];
  undefined1 auStack_2a4 [4];
  undefined1 auStack_2a0 [4];
  undefined1 auStack_29c [4];
  undefined1 auStack_298 [4];
  undefined1 auStack_294 [4];
  undefined1 auStack_290 [4];
  undefined1 auStack_28c [4];
  undefined1 auStack_288 [4];
  undefined1 auStack_284 [8];
  undefined1 auStack_27c [4];
  undefined1 auStack_278 [4];
  undefined1 auStack_274 [4];
  undefined1 auStack_270 [4];
  undefined1 auStack_26c [4];
  undefined1 auStack_268 [4];
  undefined1 auStack_264 [4];
  undefined1 auStack_260 [4];
  undefined1 auStack_25c [4];
  undefined1 auStack_258 [4];
  undefined1 auStack_254 [4];
  undefined1 auStack_250 [4];
  undefined1 auStack_24c [4];
  undefined1 auStack_248 [4];
  undefined1 auStack_244 [12];
  undefined1 auStack_238 [4];
  undefined1 auStack_234 [8];
  undefined1 auStack_22c [4];
  undefined1 auStack_228 [4];
  undefined1 auStack_224 [4];
  undefined1 auStack_220 [4];
  undefined1 auStack_21c [4];
  undefined1 auStack_218 [4];
  undefined1 auStack_214 [4];
  undefined1 auStack_210 [4];
  undefined1 auStack_20c [4];
  undefined1 auStack_208 [4];
  undefined1 auStack_204 [4];
  undefined1 auStack_200 [4];
  undefined1 auStack_1fc [4];
  undefined1 auStack_1f8 [4];
  undefined1 auStack_1f4 [4];
  undefined1 auStack_1f0 [4];
  undefined1 auStack_1ec [4];
  undefined1 auStack_1e8 [4];
  undefined1 auStack_1e4 [4];
  undefined1 auStack_1e0 [4];
  undefined1 auStack_1dc [4];
  undefined1 auStack_1d8 [4];
  undefined1 auStack_1d4 [4];
  undefined1 auStack_1d0 [4];
  undefined1 auStack_1cc [4];
  undefined1 auStack_1c8 [4];
  undefined1 auStack_1c4 [4];
  undefined1 auStack_1c0 [4];
  undefined1 auStack_1bc [4];
  undefined1 auStack_1b8 [20];
  undefined1 auStack_1a4 [4];
  undefined1 auStack_1a0 [4];
  undefined1 auStack_19c [4];
  undefined1 auStack_198 [24];
  undefined1 auStack_180 [4];
  undefined1 auStack_17c [4];
  undefined1 auStack_178 [4];
  undefined1 auStack_174 [4];
  undefined1 auStack_170 [4];
  undefined1 auStack_16c [4];
  undefined1 auStack_168 [4];
  undefined1 auStack_164 [4];
  undefined1 auStack_160 [4];
  undefined1 auStack_15c [4];
  undefined8 uStack_158;
  undefined8 uStack_150;
  float fStack_148;
  float fStack_144;
  undefined4 uStack_110;
  undefined1 auStack_100 [4];
  undefined1 auStack_fc [4];
  undefined1 auStack_f8 [4];
  undefined1 auStack_f4 [4];
  undefined1 auStack_f0 [4];
  undefined1 auStack_ec [4];
  undefined1 auStack_e8 [4];
  undefined1 auStack_e4 [4];
  undefined1 auStack_e0 [4];
  undefined1 auStack_dc [4];
  undefined1 auStack_d8 [4];
  undefined1 auStack_d4 [4];
  undefined1 auStack_d0 [4];
  undefined1 auStack_cc [8];
  undefined1 auStack_c4 [88];
  int iStack_6c;
  undefined1 auStack_68 [60];
  int iStack_2c;
  int iStack_28;
  int iStack_1c;
  int iStack_18;
  
  User::User(aUStack_314);
  thunk_FUN_104026b0(*(undefined4 *)(param_1 + 0x48),param_2,
                     "dddddSddddQddddddddddddddddddddddddddddddddddddddddddddddddhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhddddddddddddddddddddffffddddSdddcccddhhddddccdccdd"
                     ,auStack_378,auStack_36c,auStack_398,auStack_368,auStack_2fc,0x30,auStack_2f8,
                     auStack_2c8,auStack_2c4,auStack_2c0,auStack_2bc,auStack_2b8,auStack_2b0,
                     auStack_2ac,auStack_2a8,auStack_2a4,auStack_2a0,auStack_29c,auStack_298,
                     auStack_294,auStack_290,auStack_28c,auStack_fc,auStack_100,auStack_288,
                     auStack_284,auStack_27c,auStack_278,auStack_274,auStack_270,auStack_26c,
                     auStack_268,auStack_264,auStack_260,auStack_25c,auStack_258,auStack_254,
                     auStack_250,auStack_24c,auStack_248,auStack_244,auStack_238,auStack_234,
                     auStack_364,auStack_360,auStack_35c,auStack_358,auStack_354,auStack_350,
                     auStack_34c,auStack_348,auStack_344,auStack_340,auStack_33c,auStack_338,
                     auStack_334,auStack_330,auStack_32c,auStack_320,auStack_31c,auStack_22c,
                     auStack_228,auStack_224,auStack_220,auStack_21c,auStack_218,auStack_214,
                     auStack_210,auStack_20c,auStack_208,auStack_204,auStack_200,auStack_1fc,
                     auStack_1f8,auStack_1f4,auStack_1f0,auStack_1ec,auStack_1e8,auStack_1e4,
                     auStack_1e0,auStack_1dc,auStack_1d8,auStack_1d4,auStack_1d0,auStack_1cc,
                     auStack_1c8,auStack_1c4,auStack_1c0,auStack_1bc,auStack_1b8,auStack_1a4,
                     auStack_1a0,auStack_19c,auStack_198,auStack_f0,auStack_ec,auStack_e8,auStack_e4
                     ,auStack_f8,auStack_f4,auStack_e0,auStack_d8,auStack_68,auStack_dc,auStack_180,
                     auStack_17c,auStack_178,auStack_174,auStack_170,auStack_16c,auStack_160,
                     auStack_15c,auStack_168,auStack_164,&uStack_38c,&uStack_394,&dStack_380,
                     &dStack_374,auStack_d4,auStack_d0,auStack_cc,auStack_c4);
  iStack_6c = (int)cStack_39a;
  uStack_158 = uStack_394;
  iStack_2c = (int)cStack_39c;
  uStack_150 = uStack_38c;
  fStack_148 = (float)dStack_380;
  iStack_28 = (int)cStack_39e;
  fStack_144 = (float)dStack_374;
  iStack_1c = (int)cStack_39d;
  iStack_18 = (int)cStack_39b;
  User::SetAttackItemVariationOption(aUStack_314);
  iVar1 = DAT_10b1f538;
  if (DAT_10b1f538 != 0) {
    iVar2 = thunk_FUN_104226e0(auStack_2fc);
    if (iVar2 != 0) {
      piVar3 = (int *)thunk_FUN_104226e0(auStack_2fc);
      if (*piVar3 == 1) {
        iVar2 = thunk_FUN_104226e0(auStack_2fc);
        if (*(int *)(iVar2 + 4) != 0) {
          iVar2 = thunk_FUN_104226e0(auStack_2fc);
          if (*(int *)(iVar2 + 4) != 0) {
            iVar2 = thunk_FUN_104226e0(auStack_2fc);
            if (iVar2 != 0) {
              piVar3 = (int *)thunk_FUN_104226e0(auStack_2fc);
              if (*piVar3 == 1) {
                iVar2 = thunk_FUN_104226e0(auStack_2fc);
                if (*(int *)(iVar2 + 4) != 0) {
                  iVar2 = thunk_FUN_104226e0(auStack_2fc);
                  uStack_110 = *(undefined4 *)(*(int *)(iVar2 + 4) + 0x204);
                  goto LAB_10426f47;
                }
              }
            }
            uStack_110 = uRam00000204;
            goto LAB_10426f47;
          }
        }
      }
    }
  }
  uStack_110 = 0;
LAB_10426f47:
  (**(code **)(**(int **)(iVar1 + 0x54) + 0x510))(aUStack_314);
  FOutputDevice::Logf(*(FOutputDevice **)GNetworkLog_exref,
                      (ushort *)*(FOutputDevice **)GNetworkLog_exref);
  return extraout_EAX & 0xffffff00;
}


// ==== 10427110 FUN_10427110

uint FUN_10427110(int param_1)

{
  int iVar1;
  uint uVar2;
  
  thunk_FUN_10421370();
  iVar1 = *(int *)(param_1 + 0x48);
  if (*(SOCKET *)(iVar1 + 0x38) != 0) {
    closesocket(*(SOCKET *)(iVar1 + 0x38));
    DeleteCriticalSection((LPCRITICAL_SECTION)(iVar1 + 0x4efc));
  }
  *(undefined4 *)(iVar1 + 0x38) = 0;
  if (*(int *)(iVar1 + 0x495c) != 0) {
    *(undefined4 *)(iVar1 + 0x495c) = 0;
    DAT_10b1f53c = 0;
  }
  (**(code **)(*(int *)DAT_10b1f538[0x15] + 0x2c4))();
  uVar2 = (**(code **)(*DAT_10b1f538 + 0xd8))(0);
  return uVar2 & 0xffffff00;
}


// ==== 104271b0 FUN_104271b0

undefined1 FUN_104271b0(void)

{
  return 0;
}


// ==== 104271c0 FUN_104271c0

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


// ==== 10427310 FUN_10427310

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


// ==== 10427590 FUN_10427590

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


// ==== 10427750 FUN_10427750

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


// ==== 10427890 FUN_10427890

uint FUN_10427890(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  uint extraout_EAX;
  FOutputDevice *unaff_retaddr;
  
  thunk_FUN_104026b0(*(undefined4 *)(param_1 + 0x48),param_2,&DAT_1087ff8c,&param_1);
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
          goto LAB_10427907;
        }
      }
    }
  }
  uVar4 = 0;
LAB_10427907:
  (**(code **)(**(int **)(iVar1 + 0x54) + 0x274))(uVar4);
  FOutputDevice::Logf(unaff_retaddr,*(ushort **)GNetworkLog_exref);
  return extraout_EAX & 0xffffff00;
}


// ==== 10427960 FUN_10427960

uint FUN_10427960(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  uint extraout_EAX;
  FOutputDevice *unaff_retaddr;
  
  thunk_FUN_104026b0(*(undefined4 *)(param_1 + 0x48),param_2,&DAT_1087ff8c,&param_1);
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
          goto LAB_104279d7;
        }
      }
    }
  }
  uVar4 = 0;
LAB_104279d7:
  (**(code **)(**(int **)(iVar1 + 0x54) + 0x278))(uVar4);
  FOutputDevice::Logf(unaff_retaddr,*(ushort **)GNetworkLog_exref);
  return extraout_EAX & 0xffffff00;
}


// ==== 10427a30 FUN_10427a30

uint FUN_10427a30(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  uint extraout_EAX;
  undefined4 uStack_4;
  
  thunk_FUN_104026b0(*(undefined4 *)(param_1 + 0x48),param_2,&DAT_1087ff44,&param_1,&uStack_4);
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
          goto LAB_10427aad;
        }
      }
    }
  }
  uVar4 = 0;
LAB_10427aad:
  (**(code **)(**(int **)(iVar1 + 0x54) + 0x27c))(uVar4,uStack_4);
  FOutputDevice::Logf(*(FOutputDevice **)GNetworkLog_exref,
                      (ushort *)*(FOutputDevice **)GNetworkLog_exref);
  return extraout_EAX & 0xffffff00;
}


// ==== 10427b20 FUN_10427b20

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


// ==== 10427c20 FUN_10427c20

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


// ==== 10427d60 FUN_10427d60

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


// ==== 104287a0 FUN_104287a0

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


// ==== 104288f0 FUN_104288f0

uint FUN_104288f0(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  uint extraout_EAX;
  int local_18;
  int local_14;
  int local_10;
  float local_c;
  float local_8;
  float local_4;
  
  thunk_FUN_104026b0(*(undefined4 *)(param_1 + 0x48),param_2,&DAT_108810b0,&param_1,&local_10,
                     &local_14,&local_18);
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
          goto LAB_10428979;
        }
      }
    }
  }
  uVar4 = 0;
LAB_10428979:
  local_c = (float)local_10;
  local_8 = (float)local_14;
  local_4 = (float)local_18;
  (**(code **)(**(int **)(iVar1 + 0x54) + 0x290))(uVar4,local_c,local_8,local_4);
  FOutputDevice::Logf((FOutputDevice *)GNetworkLog_exref,*(ushort **)GNetworkLog_exref);
  return extraout_EAX & 0xffffff00;
}


// ==== 10428a30 FUN_10428a30

uint FUN_10428a30(int param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  uint extraout_EAX;
  void *pvStack_34;
  void *pvStack_30;
  void *pvStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined1 auStack_20 [4];
  L2ParamStack aLStack_1c [16];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_1080fd29;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  thunk_FUN_104026b0(*(undefined4 *)(param_1 + 0x48),param_2,"ddddddd",&param_1,&pvStack_2c,
                     &pvStack_30,&pvStack_34,auStack_20,&uStack_28,&uStack_24);
  if ((((DAT_10b1f538 != 0) && (iVar1 = thunk_FUN_104226e0(&param_1), iVar1 != 0)) &&
      (piVar2 = (int *)thunk_FUN_104226e0(&param_1), *piVar2 == 4)) &&
     (iVar1 = thunk_FUN_104226e0(&param_1), *(int *)(iVar1 + 4) != 0)) {
    iVar1 = thunk_FUN_104226e0(&param_1);
    iVar1 = *(int *)(iVar1 + 4);
    if (iVar1 != 0) {
      L2ParamStack::L2ParamStack(aLStack_1c,10);
      uStack_4 = 0;
      L2ParamStack::PushBack(aLStack_1c,pvStack_2c);
      L2ParamStack::PushBack(aLStack_1c,pvStack_30);
      L2ParamStack::PushBack(aLStack_1c,pvStack_34);
      *(undefined4 *)(iVar1 + 0x10) = uStack_28;
      *(undefined4 *)(iVar1 + 0xc) = uStack_24;
      (**(code **)(**(int **)(DAT_10b1f538 + 0x54) + 0x298))
                (aLStack_1c,*(undefined4 *)(iVar1 + 0x18));
      uStack_4 = 0xffffffff;
      L2ParamStack::~L2ParamStack(aLStack_1c);
    }
  }
  FOutputDevice::Logf((FOutputDevice *)GNetworkLog_exref,*(ushort **)GNetworkLog_exref);
  ExceptionList = puStack_8;
  return extraout_EAX & 0xffffff00;
}


// ==== 10428c00 FUN_10428c00

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


// ==== 10428dd0 FUN_10428dd0

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


// ==== 10428fd0 FUN_10428fd0

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


// ==== 10429170 FUN_10429170

uint FUN_10429170(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  uint extraout_EAX;
  
  thunk_FUN_104026b0(*(undefined4 *)(param_1 + 0x48),param_2,&DAT_1087ff8c,&param_1);
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
          goto LAB_104291e7;
        }
      }
    }
  }
  uVar4 = 0;
LAB_104291e7:
  (**(code **)(**(int **)(iVar1 + 0x54) + 0x680))(uVar4);
  FOutputDevice::Logf((FOutputDevice *)GNetworkLog_exref,*(ushort **)GNetworkLog_exref);
  return extraout_EAX & 0xffffff00;
}


// ==== 10429240 FUN_10429240

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


// ==== 10429420 FUN_10429420

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


// ==== 104295c0 FUN_104295c0

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


// ==== 10429790 FUN_10429790

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


// ==== 10429a60 FUN_10429a60

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


// ==== 10429bd0 FUN_10429bd0

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


// ==== 10429d40 FUN_10429d40

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


// ==== 10429ef0 FUN_10429ef0

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


// ==== 1042a000 FUN_1042a000

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


// ==== 1042a0c0 FUN_1042a0c0

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


// ==== 1042a1f0 FUN_1042a1f0

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


// ==== 1042a450 FUN_1042a450

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


// ==== 1042a630 FUN_1042a630

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


// ==== 1042a7a0 FUN_1042a7a0

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


// ==== 1042a8e0 FUN_1042a8e0

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


// ==== 1042a9a8 Catch@1042a9a8

void Catch_1042a9a8(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_10914c48);
}


// ==== 1042a9bc Catch@1042a9bc

void Catch_1042a9bc(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"ExEventMatchFirecrackerPacket");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1042aa20 FUN_1042aa20

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


// ==== 1042ab65 Catch@1042ab65

void Catch_1042ab65(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x38) = *(undefined4 *)(unaff_EBP + -0x3c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x38,&DAT_10914c48);
}


// ==== 1042ab79 Catch@1042ab79

void Catch_1042ab79(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"ExFishingStartPacket");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1042ac00 FUN_1042ac00

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


// ==== 1042acdb Catch@1042acdb

void Catch_1042acdb(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x1c) = *(undefined4 *)(unaff_EBP + -0x20);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x1c,&DAT_10914c48);
}


// ==== 1042acef Catch@1042acef

void Catch_1042acef(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"ExFishingEndPacket");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1042ad50 FUN_1042ad50

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


// ==== 1042aea5 Catch@1042aea5

void Catch_1042aea5(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x24) = *(undefined4 *)(unaff_EBP + -0x28);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x24,&DAT_10914c48);
}


// ==== 1042aeb9 Catch@1042aeb9

void Catch_1042aeb9(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"ExFishingStartCombatPacket");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1042af40 FUN_1042af40

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


// ==== 1042b0b1 Catch@1042b0b1

void Catch_1042b0b1(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x28) = *(undefined4 *)(unaff_EBP + -0x2c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x28,&DAT_10914c48);
}


// ==== 1042b0c5 Catch@1042b0c5

void Catch_1042b0c5(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"ExFishingHpRegenPacket");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1042b150 FUN_1042b150

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


// ==== 1042b210 Catch@1042b210

void Catch_1042b210(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x20) = *(undefined4 *)(unaff_EBP + -0x24);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x20,&DAT_10914c48);
}


// ==== 1042b224 Catch@1042b224

void Catch_1042b224(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"ExCursedWeaponList");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1042b280 FUN_1042b280

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


// ==== 1042b388 Catch@1042b388

void Catch_1042b388(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x1c) = *(undefined4 *)(unaff_EBP + -0x28);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x1c,&DAT_10914c48);
}


// ==== 1042b39c Catch@1042b39c

void Catch_1042b39c(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"ExPlayAnimation");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1042b410 FUN_1042b410

void FUN_1042b410(int param_1,uint param_2)

{
  int *piVar1;
  undefined8 uVar2;
  int in_ECX;
  WCHAR local_21c [260];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1080fde0;
  local_10 = ExceptionList;
  local_14 = &stack0xfffffdd8;
  local_8 = 0;
  piVar1 = (int *)(DAT_10ddd7e0 + *(int *)(in_ECX + 0x50e8) * 4);
  uVar2 = rdtsc();
  ExceptionList = &local_10;
  *piVar1 = *piVar1 - (int)uVar2;
  EnterCriticalSection((LPCRITICAL_SECTION)(in_ECX + 0x4efc));
  if ((short)(param_2 >> 0x10) == 0) {
    switch(param_2 & 0xffff) {
    case 1:
      ReleaseSemaphore(*(HANDLE *)(in_ECX + 0x4958),1,(LPLONG)0x0);
      break;
    case 2:
      MessageBoxW(*(HWND *)(in_ECX + 0x34),local_21c,L"FD_WRITE",0);
      break;
    default:
      thunk_FUN_10401a60(L"102 arrive %d:%d",param_1,param_2);
      break;
    case 4:
      MessageBoxW(*(HWND *)(in_ECX + 0x34),local_21c,L"FD_OOB",0);
      break;
    case 0x20:
      break;
    }
  }
  else if (((short)param_2 == 0x20) && (param_1 == *(int *)(in_ECX + 0x38))) {
    thunk_FUN_10421370();
    (**(code **)(**(int **)(DAT_10b1f538 + 0x54) + 0x314))(1);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(in_ECX + 0x4efc));
  piVar1 = (int *)(DAT_10ddd7e0 + *(int *)(in_ECX + 0x50e8) * 4);
  uVar2 = rdtsc();
  *piVar1 = *piVar1 + (int)uVar2 + -0xc;
  ExceptionList = local_10;
  return;
}


// ==== 1042b53f Catch@1042b53f

void Catch_1042b53f(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 1042b553 Catch@1042b553

void Catch_1042b553(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"CClientSocket::OnUserNetmessage");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1042b6e0 FUN_1042b6e0

int FUN_1042b6e0(undefined4 *param_1)

{
  LPCRITICAL_SECTION lpCriticalSection;
  int iVar1;
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1080fdf0;
  local_10 = ExceptionList;
  local_8 = 0;
  lpCriticalSection = (LPCRITICAL_SECTION)(in_ECX + 0x16c);
  ExceptionList = &local_10;
  EnterCriticalSection(lpCriticalSection);
  if (*(int *)(in_ECX + 0x40) != 0) {
    *param_1 = **(undefined4 **)(in_ECX + 0x3c);
    thunk_FUN_10422920(0,1);
    iVar1 = *(int *)(in_ECX + 0x40);
    LeaveCriticalSection(lpCriticalSection);
    ExceptionList = local_10;
    return iVar1 + 1;
  }
  LeaveCriticalSection(lpCriticalSection);
  ExceptionList = local_10;
  return 0;
}


// ==== 1042b76e Catch@1042b76e

void Catch_1042b76e(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 1042b782 Catch@1042b782

void Catch_1042b782(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"UNetworkHandler::DispatchNetworkQueue");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1042b7d0 FUN_1042b7d0

int FUN_1042b7d0(undefined4 param_1)

{
  int iVar1;
  int in_ECX;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(in_ECX + 0x16c));
  iVar1 = FArray::Add((FArray *)(in_ECX + 0x3c),1,4);
  *(undefined4 *)(*(int *)(in_ECX + 0x3c) + iVar1 * 4) = param_1;
  LeaveCriticalSection((LPCRITICAL_SECTION)(in_ECX + 0x16c));
  return iVar1;
}


// ==== 1042b820 FUN_1042b820

int FUN_1042b820(int param_1)

{
  int *piVar1;
  
  if ((((-1 < param_1) && (DAT_10b1f538 != 0)) &&
      (piVar1 = (int *)thunk_FUN_104226e0(&param_1), piVar1 != (int *)0x0)) &&
     ((*piVar1 == 1 && (piVar1[1] != 0)))) {
    return piVar1[1];
  }
  return 0;
}


// ==== 1042b870 FUN_1042b870

int FUN_1042b870(int param_1)

{
  int *piVar1;
  
  if ((((-1 < param_1) && (DAT_10b1f538 != 0)) &&
      (piVar1 = (int *)thunk_FUN_104226e0(&param_1), piVar1 != (int *)0x0)) &&
     ((*piVar1 == 4 && (piVar1[1] != 0)))) {
    return piVar1[1];
  }
  return 0;
}


// ==== 1042b8c0 FUN_1042b8c0

int FUN_1042b8c0(void)

{
  int *piVar1;
  
  if ((((DAT_10b1f538 != 0) &&
       (piVar1 = (int *)thunk_FUN_104226e0(&stack0x00000004), piVar1 != (int *)0x0)) &&
      (*piVar1 == 2)) && (piVar1[1] != 0)) {
    return piVar1[1];
  }
  return 0;
}


// ==== 1042b900 FUN_1042b900

int FUN_1042b900(void)

{
  int *piVar1;
  
  if ((((DAT_10b1f538 != 0) &&
       (piVar1 = (int *)thunk_FUN_104226e0(&stack0x00000004), piVar1 != (int *)0x0)) &&
      (*piVar1 == 3)) && (piVar1[1] != 0)) {
    return piVar1[1];
  }
  return 0;
}


// ==== 1042b940 FUN_1042b940

int FUN_1042b940(int param_1)

{
  int iVar1;
  
  if ((0 < param_1) && (iVar1 = thunk_FUN_10422740(&param_1), iVar1 != 0)) {
    return iVar1;
  }
  return 0;
}


// ==== 1042b970 FUN_1042b970

int FUN_1042b970(int param_1)

{
  int iVar1;
  
  if (((0 < param_1) && (iVar1 = thunk_FUN_10422740(&param_1), iVar1 != 0)) &&
     (*(int *)(iVar1 + 0xe0) != 0)) {
    return *(int *)(iVar1 + 0xe0);
  }
  return 0;
}


// ==== 1042b9b0 FUN_1042b9b0

int FUN_1042b9b0(int param_1)

{
  int iVar1;
  
  if (((0 < param_1) && (iVar1 = thunk_FUN_10422740(&param_1), iVar1 != 0)) &&
     (*(int *)(iVar1 + 0xe4) != 0)) {
    return *(int *)(iVar1 + 0xe4);
  }
  return 0;
}


// ==== 1042b9f0 FUN_1042b9f0

undefined4 FUN_1042b9f0(int param_1)

{
  int iVar1;
  
  if (0 < param_1) {
    iVar1 = thunk_FUN_10422640(&param_1);
    if (0 < iVar1) {
      return 1;
    }
  }
  return 0;
}


// ==== 1042ba30 FUN_1042ba30

undefined4 FUN_1042ba30(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_2;
  if ((0 < param_1) && (0 < param_2)) {
    iVar2 = thunk_FUN_10422740(&param_1);
    if ((iVar2 != 0) && (*(int *)(iVar2 + 0x84) == iVar1)) {
      return 1;
    }
  }
  return 0;
}


// ==== 1042ba80 FUN_1042ba80

undefined4 FUN_1042ba80(int param_1,int param_2)

{
  int iVar1;
  
  if (0 < param_1) {
    iVar1 = thunk_FUN_10422740(&param_1);
    if ((iVar1 != 0) && (*(int *)(iVar1 + 0x88) == param_2)) {
      return 1;
    }
  }
  return 0;
}


// ==== 1042bad0 FUN_1042bad0

void FUN_1042bad0(void)

{
  uintptr_t uVar1;
  int in_ECX;
  
  if (*(int *)((int)*(void **)(in_ECX + 0x184) + 0x84c) == 0) {
    uVar1 = __beginthread((_StartAddress *)&LAB_10302bd5,0,*(void **)(in_ECX + 0x184));
    *(uintptr_t *)(*(int *)(in_ECX + 0x184) + 0x84c) = uVar1;
  }
  return;
}


// ==== 1042bb10 FUN_1042bb10

void FUN_1042bb10(void)

{
  int iVar1;
  UObject *in_ECX;
  int iVar2;
  
  iVar2 = 0;
  DAT_10b1f538 = 0;
  if (0 < *(int *)(in_ECX + 0x40)) {
    do {
      iVar1 = *(int *)(*(int *)(in_ECX + 0x3c) + iVar2 * 4);
      if (iVar1 != 0) {
        if (*(int *)(iVar1 + 8) != 0) {
          (**(code **)(**(int **)GMalloc_exref + 8))(*(int *)(iVar1 + 8));
        }
        (**(code **)(**(int **)GMalloc_exref + 8))(iVar1);
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)(in_ECX + 0x40));
  }
  *(undefined4 *)(in_ECX + 0x40) = 0;
  *(undefined4 *)(in_ECX + 0x44) = 0;
  FArray::Realloc((FArray *)(in_ECX + 0x3c),4);
  DeleteCriticalSection((LPCRITICAL_SECTION)(in_ECX + 0x16c));
                    /* WARNING: Could not recover jumptable at 0x1042bb8a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  UObject::Destroy(in_ECX);
  return;
}


// ==== 1042bbb0 FUN_1042bbb0

undefined4 FUN_1042bbb0(byte param_1,int param_2,int param_3,int *param_4)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  int in_ECX;
  bool bVar4;
  undefined1 local_18 [4];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1080fe00;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffd4;
  local_8 = 0;
  uVar1 = (uint)param_1;
  if (0x108 < uVar1) {
    return 0;
  }
  if (uVar1 == 0x108) {
    ExceptionList = &local_10;
    *(int *)(*(int *)(in_ECX + 0x48) + 0x4ef8) = param_2 + param_3;
    thunk_FUN_104026b0(*(undefined4 *)(in_ECX + 0x48),param_3,&DAT_1087ff8c,&param_3);
    *(undefined4 *)(*(int *)(in_ECX + 0x48) + 0x4ef8) = 0;
    *param_4 = param_3;
    if (DAT_10b1f538 == 0) {
      ExceptionList = local_10;
      return 1;
    }
    iVar2 = thunk_FUN_104226e0(&param_3);
    if (iVar2 == 0) {
      ExceptionList = local_10;
      return 1;
    }
    piVar3 = (int *)thunk_FUN_104226e0(&param_3);
    if (*piVar3 != 5) {
      ExceptionList = local_10;
      return 1;
    }
    iVar2 = thunk_FUN_104226e0(&param_3);
    iVar2 = *(int *)(iVar2 + 4);
    goto joined_r0x1042c00d;
  }
  switch(uVar1) {
  case 3:
  case 4:
    ExceptionList = &local_10;
    *(int *)(*(int *)(in_ECX + 0x48) + 0x4ef8) = param_2 + param_3;
    local_14 = &stack0xffffffd4;
    thunk_FUN_104026b0(*(undefined4 *)(in_ECX + 0x48),param_3,"ddddd",local_18,local_18,local_18,
                       local_18,&param_3);
    goto LAB_1042bc39;
  default:
    goto switchD_1042bc02_caseD_5;
  case 0xb:
    ExceptionList = &local_10;
    *(int *)(*(int *)(in_ECX + 0x48) + 0x4ef8) = param_2 + param_3;
    local_14 = &stack0xffffffd4;
    thunk_FUN_104026b0(*(undefined4 *)(in_ECX + 0x48),param_3,&DAT_1087ff8c,&param_3);
    *(undefined4 *)(*(int *)(in_ECX + 0x48) + 0x4ef8) = 0;
    *param_4 = param_3;
    if (DAT_10b1f538 == 0) {
      ExceptionList = local_10;
      return 1;
    }
    iVar2 = thunk_FUN_104226e0(&param_3);
    if (iVar2 == 0) {
      ExceptionList = local_10;
      return 1;
    }
    piVar3 = (int *)thunk_FUN_104226e0(&param_3);
    bVar4 = *piVar3 == 2;
    break;
  case 0x16:
  case 0x8c:
    ExceptionList = &local_10;
    *(int *)(*(int *)(in_ECX + 0x48) + 0x4ef8) = param_2 + param_3;
    local_14 = &stack0xffffffd4;
    thunk_FUN_104026b0(*(undefined4 *)(in_ECX + 0x48),param_3,&DAT_1087ff8c,&param_3);
    goto LAB_1042bc39;
  case 0x4c:
    ExceptionList = &local_10;
    *(int *)(*(int *)(in_ECX + 0x48) + 0x4ef8) = param_2 + param_3;
    local_14 = &stack0xffffffd4;
    thunk_FUN_104026b0(*(undefined4 *)(in_ECX + 0x48),param_3,&DAT_1087ff8c,&param_3);
    *(undefined4 *)(*(int *)(in_ECX + 0x48) + 0x4ef8) = 0;
    *param_4 = param_3;
    if (DAT_10b1f538 == 0) {
      ExceptionList = local_10;
      return 1;
    }
    iVar2 = thunk_FUN_104226e0(&param_3);
    if (iVar2 == 0) {
      ExceptionList = local_10;
      return 1;
    }
    piVar3 = (int *)thunk_FUN_104226e0(&param_3);
    bVar4 = *piVar3 == 4;
    break;
  case 0x59:
    ExceptionList = &local_10;
    *(int *)(*(int *)(in_ECX + 0x48) + 0x4ef8) = param_2 + param_3;
    local_14 = &stack0xffffffd4;
    thunk_FUN_104026b0(*(undefined4 *)(in_ECX + 0x48),param_3,&DAT_1087ff8c,&param_3);
    *(undefined4 *)(*(int *)(in_ECX + 0x48) + 0x4ef8) = 0;
    *param_4 = param_3;
    if (DAT_10b1f538 == 0) {
      ExceptionList = local_10;
      return 1;
    }
    iVar2 = thunk_FUN_104226e0(&param_3);
    if (iVar2 == 0) {
      ExceptionList = local_10;
      return 1;
    }
    piVar3 = (int *)thunk_FUN_104226e0(&param_3);
    bVar4 = *piVar3 == 3;
    break;
  case 0x99:
    ExceptionList = &local_10;
    *(int *)(*(int *)(in_ECX + 0x48) + 0x4ef8) = param_2 + param_3;
    local_14 = &stack0xffffffd4;
    thunk_FUN_104026b0(*(undefined4 *)(in_ECX + 0x48),param_3,&DAT_1087ff44,local_18,&param_3);
    *(undefined4 *)(*(int *)(in_ECX + 0x48) + 0x4ef8) = 0;
    *param_4 = param_3;
    if (DAT_10b1f538 == 0) {
      ExceptionList = local_10;
      return 1;
    }
    iVar2 = thunk_FUN_104226e0(&param_3);
    if (iVar2 == 0) {
      ExceptionList = local_10;
      return 1;
    }
    piVar3 = (int *)thunk_FUN_104226e0(&param_3);
    if (*piVar3 != 4) {
      ExceptionList = local_10;
      return 1;
    }
    iVar2 = thunk_FUN_104226e0(&param_3);
    iVar2 = *(int *)(iVar2 + 4);
    goto joined_r0x1042c00d;
  case 0xb1:
    ExceptionList = &local_10;
    *(int *)(*(int *)(in_ECX + 0x48) + 0x4ef8) = param_2 + param_3;
    local_14 = &stack0xffffffd4;
    thunk_FUN_104026b0(*(undefined4 *)(in_ECX + 0x48),param_3,&DAT_1087ff44,local_18,&param_3);
    *(undefined4 *)(*(int *)(in_ECX + 0x48) + 0x4ef8) = 0;
    *param_4 = param_3;
    if (DAT_10b1f538 == 0) {
      ExceptionList = local_10;
      return 1;
    }
    iVar2 = thunk_FUN_104226e0(&param_3);
    if (iVar2 == 0) {
      ExceptionList = local_10;
      return 1;
    }
    piVar3 = (int *)thunk_FUN_104226e0(&param_3);
    if (*piVar3 != 1) {
      ExceptionList = local_10;
      return 1;
    }
    iVar2 = thunk_FUN_104226e0(&param_3);
    iVar2 = *(int *)(iVar2 + 4);
joined_r0x1042c00d:
    if (iVar2 == 0) {
      ExceptionList = local_10;
      return 1;
    }
    goto LAB_1042bc8c;
  case 0xdd:
    ExceptionList = &local_10;
    *(int *)(*(int *)(in_ECX + 0x48) + 0x4ef8) = param_2 + param_3;
    local_14 = &stack0xffffffd4;
    thunk_FUN_104026b0(*(undefined4 *)(in_ECX + 0x48),param_3,&DAT_108810b0,local_18,local_18,
                       local_18,&param_3);
LAB_1042bc39:
    *(undefined4 *)(*(int *)(in_ECX + 0x48) + 0x4ef8) = 0;
    *param_4 = param_3;
    if (DAT_10b1f538 == 0) {
      ExceptionList = local_10;
      return 1;
    }
    iVar2 = thunk_FUN_104226e0(&param_3);
    if (iVar2 == 0) {
      ExceptionList = local_10;
      return 1;
    }
    piVar3 = (int *)thunk_FUN_104226e0(&param_3);
    bVar4 = *piVar3 == 1;
  }
  if ((bVar4) && (iVar2 = thunk_FUN_104226e0(&param_3), *(int *)(iVar2 + 4) != 0)) {
LAB_1042bc8c:
    iVar2 = thunk_FUN_104226e0(&param_3);
    if (*(int *)(iVar2 + 4) != 0) {
switchD_1042bc02_caseD_5:
      ExceptionList = local_10;
      return 0;
    }
  }
  ExceptionList = local_10;
  return 1;
}


// ==== 1042c031 Catch@1042c031

void Catch_1042c031(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_10914c48);
}


// ==== 1042c045 Catch@1042c045

void Catch_1042c045(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"UNetworkHandler::IsPawnCreatePacket");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1042c2d0 FUN_1042c2d0

void FUN_1042c2d0(void)

{
  FArray *in_ECX;
  
  *(undefined4 *)(in_ECX + 4) = 0;
  *(undefined4 *)(in_ECX + 8) = 0;
  FArray::Realloc(in_ECX,0xc);
  *(undefined4 *)(in_ECX + 0x10) = 8;
  thunk_FUN_10423040();
  return;
}


// ==== 1042c300 FUN_1042c300

int FUN_1042c300(uint *param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  int *in_ECX;
  
  iVar2 = *(int *)(in_ECX[3] + (in_ECX[4] - 1U & *param_1) * 4);
  if (iVar2 != -1) {
    iVar1 = *in_ECX;
    do {
      if (*(uint *)(iVar1 + 4 + iVar2 * 0xc) == *param_1) {
        *(undefined4 *)(iVar1 + 8 + iVar2 * 0xc) = *param_2;
        return iVar2 * 0xc + 8 + *in_ECX;
      }
      iVar2 = *(int *)(iVar1 + iVar2 * 0xc);
    } while (iVar2 != -1);
  }
  iVar2 = thunk_FUN_10423150(param_1,param_2);
  return iVar2;
}


// ==== 1042c380 FUN_1042c380

void FUN_1042c380(void)

{
  int iVar1;
  int *in_ECX;
  
  if (in_ECX[3] != 0) {
    iVar1 = *in_ECX;
    if (*(int *)(iVar1 + 4) * 2 + 8 < *(int *)(iVar1 + 0x10)) {
      do {
        *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) / 2;
      } while (*(int *)(iVar1 + 4) * 2 + 8 < *(int *)(iVar1 + 0x10));
    }
    thunk_FUN_10423040();
    return;
  }
  return;
}


// ==== 1042c3c0 FUN_1042c3c0

void FUN_1042c3c0(void)

{
  FArray *in_ECX;
  
  *(undefined4 *)(in_ECX + 4) = 0;
  *(undefined4 *)(in_ECX + 8) = 0;
  FArray::Realloc(in_ECX,0xc);
  *(undefined4 *)(in_ECX + 0x10) = 8;
  thunk_FUN_10423210();
  return;
}


// ==== 1042c3f0 FUN_1042c3f0

int FUN_1042c3f0(uint *param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  int *in_ECX;
  
  iVar2 = *(int *)(in_ECX[3] + (in_ECX[4] - 1U & *param_1) * 4);
  if (iVar2 != -1) {
    iVar1 = *in_ECX;
    do {
      if (*(uint *)(iVar1 + 4 + iVar2 * 0xc) == *param_1) {
        *(undefined4 *)(iVar1 + 8 + iVar2 * 0xc) = *param_2;
        return iVar2 * 0xc + 8 + *in_ECX;
      }
      iVar2 = *(int *)(iVar1 + iVar2 * 0xc);
    } while (iVar2 != -1);
  }
  iVar2 = thunk_FUN_10423320(param_1,param_2);
  return iVar2;
}


// ==== 1042c470 FUN_1042c470

int FUN_1042c470(int *param_1)

{
  int *in_ECX;
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = 0;
  iVar3 = in_ECX[1] + -1;
  if (-1 < iVar3) {
    iVar1 = iVar3 * 0xc;
    do {
      if (*(int *)(iVar1 + 4 + *in_ECX) == *param_1) {
        thunk_FUN_10423490(iVar3,1);
        iVar2 = iVar2 + 1;
      }
      iVar3 = iVar3 + -1;
      iVar1 = iVar1 + -0xc;
    } while (-1 < iVar3);
    if (iVar2 != 0) {
      if (in_ECX[1] * 2 + 8 < in_ECX[4]) {
        do {
          in_ECX[4] = in_ECX[4] / 2;
        } while (in_ECX[1] * 2 + 8 < in_ECX[4]);
      }
      thunk_FUN_10423210();
    }
  }
  return iVar2;
}


// ==== 1042c510 FUN_1042c510

void FUN_1042c510(void)

{
  FArray *in_ECX;
  
  *(undefined4 *)(in_ECX + 4) = 0;
  *(undefined4 *)(in_ECX + 8) = 0;
  FArray::Realloc(in_ECX,0xc);
  *(undefined4 *)(in_ECX + 0x10) = 8;
  thunk_FUN_10423560();
  return;
}


// ==== 1042c540 FUN_1042c540

int FUN_1042c540(uint *param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  int *in_ECX;
  
  iVar2 = *(int *)(in_ECX[3] + (in_ECX[4] - 1U & *param_1) * 4);
  if (iVar2 != -1) {
    iVar1 = *in_ECX;
    do {
      if (*(uint *)(iVar1 + 4 + iVar2 * 0xc) == *param_1) {
        *(undefined4 *)(iVar1 + 8 + iVar2 * 0xc) = *param_2;
        return iVar2 * 0xc + 8 + *in_ECX;
      }
      iVar2 = *(int *)(iVar1 + iVar2 * 0xc);
    } while (iVar2 != -1);
  }
  iVar2 = thunk_FUN_10423670(param_1,param_2);
  return iVar2;
}


// ==== 1042c5c0 FUN_1042c5c0

void FUN_1042c5c0(void)

{
  FArray *in_ECX;
  
  *(undefined4 *)(in_ECX + 4) = 0;
  *(undefined4 *)(in_ECX + 8) = 0;
  FArray::Realloc(in_ECX,0xc);
  *(undefined4 *)(in_ECX + 0x10) = 8;
  thunk_FUN_10423730();
  return;
}


// ==== 1042c5f0 FUN_1042c5f0

int FUN_1042c5f0(uint *param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  int *in_ECX;
  
  iVar2 = *(int *)(in_ECX[3] + (in_ECX[4] - 1U & *param_1) * 4);
  if (iVar2 != -1) {
    iVar1 = *in_ECX;
    do {
      if (*(uint *)(iVar1 + 4 + iVar2 * 0xc) == *param_1) {
        *(undefined4 *)(iVar1 + 8 + iVar2 * 0xc) = *param_2;
        return iVar2 * 0xc + 8 + *in_ECX;
      }
      iVar2 = *(int *)(iVar1 + iVar2 * 0xc);
    } while (iVar2 != -1);
  }
  iVar2 = thunk_FUN_10423840(param_1,param_2);
  return iVar2;
}


// ==== 1042c670 FUN_1042c670

int FUN_1042c670(int *param_1)

{
  int *in_ECX;
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = 0;
  iVar3 = in_ECX[1] + -1;
  if (-1 < iVar3) {
    iVar1 = iVar3 * 0xc;
    do {
      if (*(int *)(iVar1 + 4 + *in_ECX) == *param_1) {
        thunk_FUN_104238d0(iVar3,1);
        iVar2 = iVar2 + 1;
      }
      iVar3 = iVar3 + -1;
      iVar1 = iVar1 + -0xc;
    } while (-1 < iVar3);
    if (iVar2 != 0) {
      if (in_ECX[1] * 2 + 8 < in_ECX[4]) {
        do {
          in_ECX[4] = in_ECX[4] / 2;
        } while (in_ECX[1] * 2 + 8 < in_ECX[4]);
      }
      thunk_FUN_10423730();
    }
  }
  return iVar2;
}


// ==== 1042c710 FUN_1042c710

void FUN_1042c710(void)

{
  int iVar1;
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_1080fe19;
  local_c = ExceptionList;
  local_4 = 0;
  iVar1 = *(int *)(in_ECX + 4);
  ExceptionList = &local_c;
  if (iVar1 < 0) {
    ExceptionList = &local_c;
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


// ==== 1042c7d0 FUN_1042c7d0

int FUN_1042c7d0(uint *param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  int *in_ECX;
  
  iVar2 = *(int *)(in_ECX[3] + (in_ECX[4] - 1U & *param_1) * 4);
  if (iVar2 != -1) {
    iVar1 = *in_ECX;
    do {
      if (*(uint *)(iVar1 + 4 + iVar2 * 0xc) == *param_1) {
        *(undefined4 *)(iVar1 + 8 + iVar2 * 0xc) = *param_2;
        return iVar2 * 0xc + 8 + *in_ECX;
      }
      iVar2 = *(int *)(iVar1 + iVar2 * 0xc);
    } while (iVar2 != -1);
  }
  iVar2 = thunk_FUN_10423ab0(param_1,param_2);
  return iVar2;
}


// ==== 1042c850 FUN_1042c850

int FUN_1042c850(int *param_1)

{
  int *in_ECX;
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = 0;
  iVar3 = in_ECX[1] + -1;
  if (-1 < iVar3) {
    iVar1 = iVar3 * 0xc;
    do {
      if (*(int *)(iVar1 + 4 + *in_ECX) == *param_1) {
        thunk_FUN_10423c20(iVar3,1);
        iVar2 = iVar2 + 1;
      }
      iVar3 = iVar3 + -1;
      iVar1 = iVar1 + -0xc;
    } while (-1 < iVar3);
    if (iVar2 != 0) {
      if (in_ECX[1] * 2 + 8 < in_ECX[4]) {
        do {
          in_ECX[4] = in_ECX[4] / 2;
        } while (in_ECX[1] * 2 + 8 < in_ECX[4]);
      }
      thunk_FUN_104239a0();
    }
  }
  return iVar2;
}


// ==== 1042c8f0 FUN_1042c8f0

void FUN_1042c8f0(void)

{
  int iVar1;
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_1080fe39;
  local_c = ExceptionList;
  local_4 = 0;
  iVar1 = *(int *)(in_ECX + 4);
  ExceptionList = &local_c;
  if (iVar1 < 0) {
    ExceptionList = &local_c;
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


// ==== 1042c9b0 FUN_1042c9b0

void FUN_1042c9b0(FArray *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  FArray *in_ECX;
  int iVar3;
  
  if (in_ECX == param_1) {
    return;
  }
  iVar3 = *(int *)(param_1 + 4);
  *(undefined4 *)(in_ECX + 4) = 0;
  *(int *)(in_ECX + 8) = iVar3;
  FArray::Realloc(in_ECX,4);
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 4)) {
    do {
      iVar2 = FArray::Add(in_ECX,1,4);
      puVar1 = (undefined4 *)(*(int *)in_ECX + iVar2 * 4);
      if (puVar1 != (undefined4 *)0x0) {
        *puVar1 = *(undefined4 *)(*(int *)param_1 + iVar3 * 4);
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(param_1 + 4));
  }
  return;
}


// ==== 1042ca30 FUN_1042ca30

void FUN_1042ca30(int *param_1)

{
  int iVar1;
  FArray *in_ECX;
  int *piVar2;
  
  iVar1 = 0;
  if (0 < *(int *)(in_ECX + 4)) {
    piVar2 = *(int **)in_ECX;
    do {
      if (*piVar2 == *param_1) {
        return;
      }
      iVar1 = iVar1 + 1;
      piVar2 = piVar2 + 1;
    } while (iVar1 < *(int *)(in_ECX + 4));
  }
  iVar1 = FArray::Add(in_ECX,1,4);
  *(int *)(*(int *)in_ECX + iVar1 * 4) = *param_1;
  return;
}


// ==== 1042ca80 FUN_1042ca80

int FUN_1042ca80(int *param_1)

{
  int iVar1;
  int *in_ECX;
  int iVar2;
  
  iVar1 = in_ECX[1];
  iVar2 = 0;
  if (0 < iVar1) {
    do {
      if (*(int *)(*in_ECX + iVar2 * 4) == *param_1) {
        thunk_FUN_10423cc0(iVar2,1);
        iVar2 = iVar2 + -1;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < in_ECX[1]);
  }
  return iVar1 - in_ECX[1];
}


// ==== 1042cad0 FUN_1042cad0

void FUN_1042cad0(void)

{
  int iVar1;
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_1080fe59;
  local_c = ExceptionList;
  local_4 = 0;
  iVar1 = *(int *)(in_ECX + 4);
  ExceptionList = &local_c;
  if (iVar1 < 0) {
    ExceptionList = &local_c;
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


// ==== 1042cb90 FUN_1042cb90

int FUN_1042cb90(int *param_1)

{
  int iVar1;
  int *in_ECX;
  int iVar2;
  
  iVar1 = in_ECX[1];
  iVar2 = 0;
  if (0 < iVar1) {
    do {
      if (*(int *)(*in_ECX + iVar2 * 4) == *param_1) {
        thunk_FUN_10423dc0(iVar2,1);
        iVar2 = iVar2 + -1;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < in_ECX[1]);
  }
  return iVar1 - in_ECX[1];
}


// ==== 1042cbe0 FUN_1042cbe0

void FUN_1042cbe0(void)

{
  int iVar1;
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_1080fe79;
  local_c = ExceptionList;
  local_4 = 0;
  iVar1 = *(int *)(in_ECX + 4);
  ExceptionList = &local_c;
  if (iVar1 < 0) {
    ExceptionList = &local_c;
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


// ==== 1042cca0 FUN_1042cca0

void FUN_1042cca0(void)

{
  int iVar1;
  int *in_ECX;
  
  if (in_ECX[3] != 0) {
    iVar1 = *in_ECX;
    if (*(int *)(iVar1 + 4) * 2 + 8 < *(int *)(iVar1 + 0x10)) {
      do {
        *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) / 2;
      } while (*(int *)(iVar1 + 4) * 2 + 8 < *(int *)(iVar1 + 0x10));
    }
    thunk_FUN_10423210();
    return;
  }
  return;
}


// ==== 1042cce0 FUN_1042cce0

void FUN_1042cce0(void)

{
  int iVar1;
  int *in_ECX;
  
  if (in_ECX[3] != 0) {
    iVar1 = *in_ECX;
    if (*(int *)(iVar1 + 4) * 2 + 8 < *(int *)(iVar1 + 0x10)) {
      do {
        *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) / 2;
      } while (*(int *)(iVar1 + 4) * 2 + 8 < *(int *)(iVar1 + 0x10));
    }
    thunk_FUN_10423560();
    return;
  }
  return;
}


// ==== 1042cd20 FUN_1042cd20

void FUN_1042cd20(void)

{
  int iVar1;
  int *in_ECX;
  
  if (in_ECX[3] != 0) {
    iVar1 = *in_ECX;
    if (*(int *)(iVar1 + 4) * 2 + 8 < *(int *)(iVar1 + 0x10)) {
      do {
        *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) / 2;
      } while (*(int *)(iVar1 + 4) * 2 + 8 < *(int *)(iVar1 + 0x10));
    }
    thunk_FUN_10423730();
    return;
  }
  return;
}


// ==== 1042cd60 FUN_1042cd60

void FUN_1042cd60(void)

{
  int iVar1;
  int *in_ECX;
  
  if (in_ECX[3] != 0) {
    iVar1 = *in_ECX;
    if (*(int *)(iVar1 + 4) * 2 + 8 < *(int *)(iVar1 + 0x10)) {
      do {
        *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) / 2;
      } while (*(int *)(iVar1 + 4) * 2 + 8 < *(int *)(iVar1 + 0x10));
    }
    thunk_FUN_104239a0();
    return;
  }
  return;
}


// ==== 1042cda0 FUN_1042cda0

void FUN_1042cda0(void)

{
  int iVar1;
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_1080fe99;
  local_c = ExceptionList;
  local_4 = 0;
  iVar1 = *(int *)(in_ECX + 4);
  ExceptionList = &local_c;
  if (iVar1 < 0) {
    ExceptionList = &local_c;
    appFailAssert("Index<=ArrayNum",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x204);
  }
  if (*(int *)(in_ECX + 4) < iVar1) {
    appFailAssert("Index+Count<=ArrayNum",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x205);
  }
  FArray::Remove(in_ECX,0,iVar1,0xc);
  local_4 = 0xffffffff;
  FArray::~FArray(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 1042ce90 FUN_1042ce90

void FUN_1042ce90(void)

{
  int iVar1;
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_1080feb9;
  local_c = ExceptionList;
  local_4 = 0;
  iVar1 = *(int *)(in_ECX + 4);
  ExceptionList = &local_c;
  if (iVar1 < 0) {
    ExceptionList = &local_c;
    appFailAssert("Index<=ArrayNum",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x204);
  }
  if (*(int *)(in_ECX + 4) < iVar1) {
    appFailAssert("Index+Count<=ArrayNum",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x205);
  }
  FArray::Remove(in_ECX,0,iVar1,0xc);
  local_4 = 0xffffffff;
  FArray::~FArray(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 1042cf50 FUN_1042cf50

void FUN_1042cf50(void)

{
  int iVar1;
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_1080fed9;
  local_c = ExceptionList;
  local_4 = 0;
  iVar1 = *(int *)(in_ECX + 4);
  ExceptionList = &local_c;
  if (iVar1 < 0) {
    ExceptionList = &local_c;
    appFailAssert("Index<=ArrayNum",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x204);
  }
  if (*(int *)(in_ECX + 4) < iVar1) {
    appFailAssert("Index+Count<=ArrayNum",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x205);
  }
  FArray::Remove(in_ECX,0,iVar1,0xc);
  local_4 = 0xffffffff;
  FArray::~FArray(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 1042d010 FUN_1042d010

void FUN_1042d010(void)

{
  int iVar1;
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_1080fef9;
  local_c = ExceptionList;
  local_4 = 0;
  iVar1 = *(int *)(in_ECX + 4);
  ExceptionList = &local_c;
  if (iVar1 < 0) {
    ExceptionList = &local_c;
    appFailAssert("Index<=ArrayNum",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x204);
  }
  if (*(int *)(in_ECX + 4) < iVar1) {
    appFailAssert("Index+Count<=ArrayNum",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x205);
  }
  FArray::Remove(in_ECX,0,iVar1,0xc);
  local_4 = 0xffffffff;
  FArray::~FArray(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 1042d100 FUN_1042d100

void FUN_1042d100(void)

{
  int iVar1;
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_1080ff19;
  local_c = ExceptionList;
  local_4 = 0;
  iVar1 = *(int *)(in_ECX + 4);
  ExceptionList = &local_c;
  if (iVar1 < 0) {
    ExceptionList = &local_c;
    appFailAssert("Index<=ArrayNum",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x204);
  }
  if (*(int *)(in_ECX + 4) < iVar1) {
    appFailAssert("Index+Count<=ArrayNum",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x205);
  }
  FArray::Remove(in_ECX,0,iVar1,0xc);
  local_4 = 0xffffffff;
  FArray::~FArray(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 1042d1c0 FUN_1042d1c0

void FUN_1042d1c0(void)

{
  FArray *in_ECX;
  
  *(undefined4 *)(in_ECX + 4) = 0;
  *(undefined4 *)(in_ECX + 8) = 0;
  FArray::Realloc(in_ECX,0xc);
  *(undefined4 *)(in_ECX + 0x10) = 8;
  thunk_FUN_10423040();
  appMemset(in_ECX + 0x14,0,0x80);
  return;
}


// ==== 1042d230 FUN_1042d230

void FUN_1042d230(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  AActor *pAVar1;
  undefined4 *puVar2;
  FNPawnResource *in_ECX;
  void *unaff_EBX;
  float fVar3;
  void *pvStack_c;
  undefined1 *puStack_8;
  AActor *local_4;
  
  puStack_8 = &LAB_1080ff4f;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *(undefined4 *)(in_ECX + 4) = param_2;
  *(undefined ***)in_ECX = FNPawnResource::vftable;
  *(undefined4 *)(in_ECX + 8) = param_3;
  *(undefined4 *)(in_ECX + 0x10) = 0;
  *(undefined4 *)(in_ECX + 0x14) = 0;
  *(undefined4 *)(in_ECX + 0x18) = 0;
  local_4 = (AActor *)0x1;
  puVar2 = (undefined4 *)(**(code **)**(undefined4 **)GMalloc_exref)(0x10,&DAT_10853a28);
  pAVar1 = local_4;
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    *puVar2 = FNPawnResourceInfo::vftable;
    puVar2[1] = local_4;
    puVar2[2] = in_ECX + 0x10;
    puVar2[3] = param_3;
    *(int *)(local_4 + 0x758) = *(int *)(local_4 + 0x758) + 1;
  }
  pvStack_c = (void *)CONCAT31(pvStack_c._1_3_,1);
  if (puVar2 != (undefined4 *)0x0) {
    thunk_FUN_1042ca30(&stack0x00000000);
  }
  fVar3 = FNPawnResource::SetDist(in_ECX,pAVar1);
  *(float *)(in_ECX + 0xc) = fVar3;
  FName::SetFlags((FName *)(in_ECX + 4),0x4000000);
  ExceptionList = unaff_EBX;
  return;
}


// ==== 1042d360 FUN_1042d360

void FUN_1042d360(undefined4 param_1)

{
  int *piVar1;
  int iVar2;
  UClass *pUVar3;
  undefined4 *puVar4;
  int in_ECX;
  int iVar5;
  void *unaff_ESI;
  int iVar6;
  float10 fVar7;
  undefined4 unaff_retaddr;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 *puStack_4;
  
  puStack_4 = (undefined4 *)0xffffffff;
  puStack_8 = &LAB_1080ff7b;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  puVar4 = (undefined4 *)(**(code **)**(undefined4 **)GMalloc_exref)(0x10,&DAT_10853a28);
  if (puVar4 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    puVar4[2] = unaff_retaddr;
    *puVar4 = FNPawnResourceInfo::vftable;
    puVar4[1] = puStack_4;
    puVar4[3] = param_1;
    puStack_4[0x1d6] = puStack_4[0x1d6] + 1;
  }
  pvStack_c = (void *)0xffffffff;
  if (puVar4 != (undefined4 *)0x0) {
    puStack_4 = puVar4;
    thunk_FUN_1042ca30(&puStack_4);
  }
  iVar6 = 0;
  iVar5 = DAT_10c51044;
  if (0 < *(int *)(in_ECX + 0x14)) {
    do {
      puStack_4 = (undefined4 *)0x0;
      if ((((iVar5 != 0) && (*(int *)(iVar5 + 0x54) != 0)) &&
          (piVar1 = *(int **)(*(int *)(iVar5 + 0x54) + 0x38), *piVar1 != 0)) &&
         (iVar2 = *(int *)(*piVar1 + 0x3c), iVar2 != 0)) {
        for (pUVar3 = *(UClass **)(iVar2 + 0x24); pUVar3 != (UClass *)0x0;
            pUVar3 = *(UClass **)(pUVar3 + 0x34)) {
          if (pUVar3 == &ALineagePlayerController::PrivateStaticClass) {
            fVar7 = (float10)thunk_FUN_10373830(iVar2 + 0x1bc,
                                                *(int *)(*(int *)(*(int *)(in_ECX + 0x10) +
                                                                 iVar6 * 4) + 4) + 0x1bc);
            puStack_4 = (undefined4 *)(float)fVar7;
            iVar5 = DAT_10c51044;
            break;
          }
        }
      }
      if ((float)puStack_4 < *(float *)(in_ECX + 0xc)) {
        *(undefined4 **)(in_ECX + 0xc) = puStack_4;
        iVar5 = DAT_10c51044;
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < *(int *)(in_ECX + 0x14));
  }
  ExceptionList = unaff_ESI;
  return;
}


// ==== 1042d4f0 FUN_1042d4f0

void FUN_1042d4f0(undefined4 *param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1080ff90;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  thunk_FUN_1042ca80(&param_1);
  if (param_1 != (undefined4 *)0x0) {
    (**(code **)*param_1)(1);
  }
  ExceptionList = local_10;
  return;
}


// ==== 1042d54d Catch@1042d54d

void Catch_1042d54d(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 1042d561 Catch@1042d561

void Catch_1042d561(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"RemoveResourceInfo");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1042d5b0 FUN_1042d5b0

void FUN_1042d5b0(int param_1)

{
  undefined4 *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1080ffab;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *in_ECX = FNPawnResource::vftable;
  in_ECX[1] = *(undefined4 *)(param_1 + 4);
  in_ECX[2] = *(undefined4 *)(param_1 + 8);
  in_ECX[3] = *(undefined4 *)(param_1 + 0xc);
  thunk_FUN_10422aa0(param_1 + 0x10);
  ExceptionList = local_c;
  return;
}


// ==== 1042d630 FUN_1042d630

void FUN_1042d630(int param_1)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(in_ECX + 8) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(in_ECX + 0xc) = *(undefined4 *)(param_1 + 0xc);
  thunk_FUN_1042c9b0(param_1 + 0x10);
  return;
}


// ==== 1042d670 FUN_1042d670

void FUN_1042d670(undefined4 *param_1)

{
  undefined4 *puVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puVar1 = param_1;
  puStack_c = &LAB_1080ffc0;
  local_10 = ExceptionList;
  local_8 = 0;
  if (param_1 != (undefined4 *)0x0) {
    ExceptionList = &local_10;
    thunk_FUN_1042cb90(&param_1);
    local_8 = CONCAT31(local_8._1_3_,1);
    (**(code **)*puVar1)(1);
  }
  ExceptionList = local_10;
  return;
}


// ==== 1042d6da Catch@1042d6da

void Catch_1042d6da(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 1042d6ee Catch@1042d6ee

void Catch_1042d6ee(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"Remove1");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1042d70a Catch@1042d70a

void Catch_1042d70a(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x20);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_10914c48);
}


// ==== 1042d71e Catch@1042d71e

void Catch_1042d71e(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"Remove");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1042d760 FUN_1042d760

void FUN_1042d760(int param_1)

{
  undefined4 *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1080ffdb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *in_ECX = FNActorResourceLoader::vftable;
  thunk_FUN_10422b60(param_1 + 4);
  in_ECX[4] = *(undefined4 *)(param_1 + 0x10);
  in_ECX[5] = *(undefined4 *)(param_1 + 0x14);
  ExceptionList = local_c;
  return;
}


// ==== 1042d7e0 FUN_1042d7e0

void FUN_1042d7e0(FNMonsterRaceInfo *param_1,int param_2,int param_3,float param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                 undefined4 param_9,undefined4 param_10)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  float *pfVar4;
  FNMonsterRaceInfo *in_ECX;
  int iVar5;
  FRotator local_60 [48];
  undefined1 local_30 [24];
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10810004;
  local_10 = ExceptionList;
  local_14 = &stack0xffffff94;
  ExceptionList = &local_10;
  *(undefined ***)in_ECX = FNMonsterRaceInfo::vftable;
  *(FNMonsterRaceInfo **)(in_ECX + 4) = param_1;
  *(undefined4 *)(in_ECX + 8) = param_5;
  *(undefined4 *)(in_ECX + 0xc) = param_6;
  *(undefined4 *)(in_ECX + 0x10) = param_7;
  *(undefined4 *)(in_ECX + 0x14) = param_8;
  *(undefined4 *)(in_ECX + 0x18) = param_9;
  *(undefined4 *)(in_ECX + 0x1c) = param_10;
  param_1 = in_ECX + 0x20;
  iVar5 = 0;
  *(undefined4 *)param_1 = 0;
  *(undefined4 *)(in_ECX + 0x24) = 0;
  *(undefined4 *)(in_ECX + 0x28) = 0;
  local_8 = 2;
  *(undefined4 *)(in_ECX + 0x34) = 0;
  *(undefined4 *)(in_ECX + 0x2c) = 0;
  *(undefined4 *)(in_ECX + 0x30) = 0;
  *(undefined4 *)(in_ECX + 0x38) = 0;
  *(int *)(in_ECX + 0x3c) = param_3;
  puVar1 = &stack0xffffff94;
  if (0 < param_3) {
    for (; local_18 = iVar5, iVar5 < param_2; iVar5 = iVar5 + 1) {
      param_1 = (FNMonsterRaceInfo *)
                ((float)*(int *)((int)param_4 + iVar5 * 4) / (float)*(int *)(in_ECX + 0x3c));
      thunk_FUN_10422610(&param_1);
      *(float *)(in_ECX + 0x34) =
           100.0 / (float)*(int *)((int)param_4 + iVar5 * 4) + *(float *)(in_ECX + 0x34);
    }
    param_4 = (100.0 / (float)*(int *)(in_ECX + 0x3c)) * 1.5;
    thunk_FUN_10422610(&param_4);
    param_5 = 0x3f800000;
    param_6 = 0;
    param_7 = 0;
    iVar5 = *(int *)(in_ECX + 4) + 0x1c8;
    uVar2 = FCoords::operator*((FCoords *)(GMath_exref + 0x18),local_60);
    uVar3 = FVector::TransformVectorBy((FVector *)&param_5,(FCoords *)&param_8);
    pfVar4 = (float *)thunk_FUN_103301a0(local_30,0x42480000,uVar3,uVar2,iVar5);
    *(float *)(in_ECX + 0x14) = *pfVar4 + *(float *)(in_ECX + 0x14);
    *(float *)(in_ECX + 0x18) = pfVar4[1] + *(float *)(in_ECX + 0x18);
    *(float *)(in_ECX + 0x1c) = pfVar4[2] + *(float *)(in_ECX + 0x1c);
    puVar1 = local_14;
  }
  local_14 = puVar1;
  FNMonsterRaceInfo::SetPrePivot(in_ECX);
  ExceptionList = local_10;
  return;
}


// ==== 1042d950 Catch@1042d950

void Catch_1042d950(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x20);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_10914c48);
}


// ==== 1042d964 Catch@1042d964

void Catch_1042d964(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"FNMonsterRaceInfo");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1042d9f0 FUN_1042d9f0

void FUN_1042d9f0(void)

{
  undefined4 *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_1081002b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *in_ECX = FNMonsterRaceInfo::vftable;
  local_4 = 0;
  in_ECX[9] = 0;
  in_ECX[10] = 0;
  FArray::Realloc((FArray *)(in_ECX + 8),4);
  local_4 = 0xffffffff;
  thunk_FUN_1038fce0();
  ExceptionList = local_c;
  return;
}


// ==== 1042da60 FUN_1042da60

void FUN_1042da60(int param_1)

{
  undefined4 *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1081004b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *in_ECX = FNMonsterRaceInfo::vftable;
  in_ECX[1] = *(undefined4 *)(param_1 + 4);
  in_ECX[2] = *(undefined4 *)(param_1 + 8);
  in_ECX[3] = *(undefined4 *)(param_1 + 0xc);
  in_ECX[4] = *(undefined4 *)(param_1 + 0x10);
  in_ECX[5] = *(undefined4 *)(param_1 + 0x14);
  in_ECX[6] = *(undefined4 *)(param_1 + 0x18);
  in_ECX[7] = *(undefined4 *)(param_1 + 0x1c);
  thunk_FUN_10379830(param_1 + 0x20);
  in_ECX[0xb] = *(undefined4 *)(param_1 + 0x2c);
  in_ECX[0xc] = *(undefined4 *)(param_1 + 0x30);
  in_ECX[0xd] = *(undefined4 *)(param_1 + 0x34);
  in_ECX[0xe] = *(undefined4 *)(param_1 + 0x38);
  in_ECX[0xf] = *(undefined4 *)(param_1 + 0x3c);
  ExceptionList = local_c;
  return;
}


// ==== 1042db30 FUN_1042db30

void FUN_1042db30(byte param_1)

{
  FNMonsterRaceInfo *in_ECX;
  
  FNMonsterRaceInfo::~FNMonsterRaceInfo(in_ECX);
  if ((param_1 & 1) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))();
  }
  return;
}


// ==== 1042db60 FUN_1042db60

FNMonsterRaceInfo * FUN_1042db60(byte param_1)

{
  FNMonsterRaceInfo *in_ECX;
  
  if ((param_1 & 2) != 0) {
    _eh_vector_destructor_iterator_
              (in_ECX,0x40,*(int *)(in_ECX + -4),FNMonsterRaceInfo::~FNMonsterRaceInfo);
    if ((param_1 & 1) != 0) {
      (**(code **)(**(int **)GMalloc_exref + 8))(in_ECX + -4);
    }
    return in_ECX + -4;
  }
  FNMonsterRaceInfo::~FNMonsterRaceInfo(in_ECX);
  if ((param_1 & 1) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))();
  }
  return in_ECX;
}


// ==== 1042dbe0 FUN_1042dbe0

void FUN_1042dbe0(void)

{
  FNMonsterRaceMgr *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1081006b;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *(undefined ***)in_ECX = FNMonsterRaceMgr::vftable;
  local_8 = 1;
  FNMonsterRaceMgr::Clear(in_ECX);
  local_8 = 0xffffffff;
  thunk_FUN_1042cbe0();
  ExceptionList = local_10;
  return;
}


// ==== 1042dc3c Catch@1042dc3c

void Catch_1042dc3c(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 1042dc50 Catch@1042dc50

void Catch_1042dc50(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"~FNMonsterRaceMgr");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1042dc90 FUN_1042dc90

void FUN_1042dc90(int param_1)

{
  undefined4 *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1081008b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *in_ECX = FNMonsterRaceMgr::vftable;
  in_ECX[1] = *(undefined4 *)(param_1 + 4);
  in_ECX[2] = *(undefined4 *)(param_1 + 8);
  in_ECX[3] = *(undefined4 *)(param_1 + 0xc);
  in_ECX[4] = *(undefined4 *)(param_1 + 0x10);
  in_ECX[5] = *(undefined4 *)(param_1 + 0x14);
  in_ECX[6] = *(undefined4 *)(param_1 + 0x18);
  thunk_FUN_10422cd0(param_1 + 0x1c);
  ExceptionList = local_c;
  return;
}


// ==== 1042dd20 FUN_1042dd20

void FUN_1042dd20(byte param_1)

{
  FNMonsterRaceMgr *in_ECX;
  
  FNMonsterRaceMgr::~FNMonsterRaceMgr(in_ECX);
  if ((param_1 & 1) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))();
  }
  return;
}


// ==== 1042dd50 FUN_1042dd50

FNMonsterRaceMgr * FUN_1042dd50(byte param_1)

{
  FNMonsterRaceMgr *in_ECX;
  
  if ((param_1 & 2) != 0) {
    _eh_vector_destructor_iterator_
              (in_ECX,0x28,*(int *)(in_ECX + -4),FNMonsterRaceMgr::~FNMonsterRaceMgr);
    if ((param_1 & 1) != 0) {
      (**(code **)(**(int **)GMalloc_exref + 8))(in_ECX + -4);
    }
    return in_ECX + -4;
  }
  FNMonsterRaceMgr::~FNMonsterRaceMgr(in_ECX);
  if ((param_1 & 1) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))();
  }
  return in_ECX;
}


// ==== 1042ddd0 FUN_1042ddd0

uint FUN_1042ddd0(int param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  uint extraout_EAX;
  int unaff_EBX;
  int unaff_EBP;
  int iStack_38;
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  undefined4 *puStack_28;
  undefined4 uStack_24;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  void *pvStack_c;
  undefined1 *puStack_8;
  int iStack_4;
  
  iStack_4 = -1;
  puStack_8 = &LAB_108100ab;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  thunk_FUN_104026b0(*(undefined4 *)(param_1 + 0x48),param_2,"dddddddd",&param_1,&iStack_2c,
                     &iStack_30,&iStack_34,&iStack_38,&puStack_28,&uStack_24,&fStack_1c);
  if (DAT_10b1f538 != 0) {
    iVar1 = thunk_FUN_104226e0(&param_1);
    if (iVar1 != 0) {
      piVar2 = (int *)thunk_FUN_104226e0(&param_1);
      if (*piVar2 == 2) {
        iVar1 = thunk_FUN_104226e0(&param_1);
        if (*(int *)(iVar1 + 4) != 0) {
          uVar3 = thunk_FUN_104226e0(&param_1);
          if (*(int *)(uVar3 + 4) != 0) goto LAB_1042e038;
        }
      }
    }
  }
  piVar2 = (int *)(**(code **)**(undefined4 **)GMalloc_exref)(0x18,&DAT_10853a28);
  *piVar2 = iStack_4;
  piVar2[1] = iStack_34;
  piVar2[4] = 0;
  piVar2[5] = 0;
  piVar2[2] = iStack_30;
  piVar2[3] = iStack_2c;
  if (iStack_4 < 1) {
LAB_1042df66:
    iVar1 = DAT_10b1f538;
    if (DAT_10b1f538 == 0) goto LAB_1042dfb9;
    iVar4 = thunk_FUN_104226e0(&iStack_4);
    if (iVar4 == 0) goto LAB_1042dfb9;
    piVar2 = (int *)thunk_FUN_104226e0(&iStack_4);
    if (*piVar2 != 2) goto LAB_1042dfb9;
    iVar4 = thunk_FUN_104226e0(&iStack_4);
    if (*(int *)(iVar4 + 4) == 0) goto LAB_1042dfb9;
    iVar4 = thunk_FUN_104226e0(&iStack_4);
    uVar5 = *(undefined4 *)(iVar4 + 4);
  }
  else {
    iVar1 = DAT_10b1f538;
    if (DAT_10b1f538 != 0) {
      iVar1 = thunk_FUN_104226e0(&iStack_4);
      if (iVar1 != 0) {
        thunk_FUN_103254a0(iVar1);
        thunk_FUN_1042c470(&iStack_4);
      }
      puStack_28 = (undefined4 *)(**(code **)**(undefined4 **)GMalloc_exref)(8,&DAT_10853a28);
      if (puStack_28 == (undefined4 *)0x0) {
        puStack_28 = (undefined4 *)0x0;
      }
      else {
        *puStack_28 = 0;
        puStack_28[1] = 0;
      }
      pvStack_c = (void *)0xffffffff;
      if (puStack_28 != (undefined4 *)0x0) {
        puStack_28[1] = piVar2;
        *puStack_28 = 2;
      }
      thunk_FUN_1042c3f0(&iStack_4,&puStack_28);
      goto LAB_1042df66;
    }
LAB_1042dfb9:
    uVar5 = 0;
  }
  fStack_20 = (float)iStack_38;
  fStack_1c = (float)unaff_EBX;
  fStack_18 = (float)unaff_EBP;
  (**(code **)(**(int **)(iVar1 + 0x54) + 0x15c))(uVar5,fStack_20,fStack_1c,fStack_18,0,uStack_24,0)
  ;
  FOutputDevice::Logf((FOutputDevice *)GNetworkLog_exref,*(ushort **)GNetworkLog_exref);
  uVar3 = extraout_EAX;
LAB_1042e038:
  ExceptionList = pvStack_c;
  return uVar3 & 0xffffff00;
}


// ==== 1042e0f0 FUN_1042e0f0

uint FUN_1042e0f0(int param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 uVar5;
  uint extraout_EAX;
  undefined4 uVar6;
  int iStack_3c;
  int iStack_38;
  int iStack_34;
  void *pvStack_30;
  int iStack_2c;
  int iStack_28;
  undefined4 uStack_24;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  void *pvStack_c;
  undefined1 *puStack_8;
  int iStack_4;
  
  iStack_4 = -1;
  puStack_8 = &LAB_108100cb;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  thunk_FUN_104026b0(*(undefined4 *)(param_1 + 0x48),param_2,"ddddddddd",&iStack_3c,&param_1,
                     &iStack_28,&iStack_2c,&pvStack_30,&iStack_34,&uStack_24,&fStack_20,&fStack_1c);
  piVar1 = (int *)(**(code **)**(undefined4 **)GMalloc_exref)(0x18,&DAT_10853a28);
  *piVar1 = iStack_4;
  piVar1[1] = (int)pvStack_30;
  piVar1[4] = 0;
  piVar1[5] = 0;
  piVar1[2] = iStack_2c;
  piVar1[3] = iStack_28;
  if (iStack_4 < 1) {
LAB_1042e23c:
    iVar2 = DAT_10b1f538;
    if (DAT_10b1f538 == 0) goto LAB_1042e293;
    iVar4 = thunk_FUN_104226e0(&iStack_4);
    if (iVar4 == 0) goto LAB_1042e293;
    piVar1 = (int *)thunk_FUN_104226e0(&iStack_4);
    if (*piVar1 != 2) goto LAB_1042e293;
    iVar4 = thunk_FUN_104226e0(&iStack_4);
    if (*(int *)(iVar4 + 4) == 0) goto LAB_1042e293;
    iVar4 = thunk_FUN_104226e0(&iStack_4);
    uVar6 = *(undefined4 *)(iVar4 + 4);
  }
  else {
    iVar2 = DAT_10b1f538;
    if (DAT_10b1f538 != 0) {
      iVar2 = thunk_FUN_104226e0(&iStack_4);
      if (iVar2 != 0) {
        (**(code **)(**(int **)GMalloc_exref + 8))(iVar2);
        thunk_FUN_1042c470(&iStack_4);
      }
      puVar3 = (undefined4 *)(**(code **)**(undefined4 **)GMalloc_exref)(8,&DAT_10853a28);
      if (puVar3 == (undefined4 *)0x0) {
        puVar3 = (undefined4 *)0x0;
      }
      else {
        *puVar3 = 0;
        puVar3[1] = 0;
      }
      pvStack_c = (void *)0xffffffff;
      if (puVar3 != (undefined4 *)0x0) {
        puVar3[1] = piVar1;
        *puVar3 = 2;
      }
      thunk_FUN_1042c3f0(&iStack_4,&stack0xffffffc0);
      goto LAB_1042e23c;
    }
LAB_1042e293:
    uVar6 = 0;
  }
  if (iVar2 != 0) {
    iVar4 = thunk_FUN_104226e0(&stack0xffffffbc);
    if (iVar4 != 0) {
      piVar1 = (int *)thunk_FUN_104226e0(&stack0xffffffbc);
      if (*piVar1 == 1) {
        iVar4 = thunk_FUN_104226e0(&stack0xffffffbc);
        if (*(int *)(iVar4 + 4) != 0) {
          iVar4 = thunk_FUN_104226e0(&stack0xffffffbc);
          uVar5 = *(undefined4 *)(iVar4 + 4);
          goto LAB_1042e2e6;
        }
      }
    }
  }
  uVar5 = 0;
LAB_1042e2e6:
  fStack_20 = (float)iStack_34;
  fStack_1c = (float)iStack_38;
  fStack_18 = (float)iStack_3c;
  (**(code **)(**(int **)(iVar2 + 0x54) + 0x160))
            (uVar5,uVar6,fStack_20,fStack_1c,fStack_18,0,uStack_24,0);
  FOutputDevice::Logf(*(FOutputDevice **)GNetworkLog_exref,
                      (ushort *)*(FOutputDevice **)GNetworkLog_exref);
  ExceptionList = pvStack_30;
  return extraout_EAX & 0xffffff00;
}


// ==== 1042e430 FUN_1042e430

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


// ==== 1042f860 FUN_1042f860

void FUN_1042f860(byte param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_1081011b;
  local_c = ExceptionList;
  local_4 = 0xffffffff;
  ExceptionList = &local_c;
  thunk_FUN_10326630();
  if ((param_1 & 1) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))();
  }
  ExceptionList = local_c;
  return;
}


// ==== 1042f8d0 FUN_1042f8d0

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


// ==== 1042fea0 FUN_1042fea0

uint FUN_1042fea0(FOutputDevice *param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  uint extraout_EAX;
  undefined4 *puVar3;
  void *pvStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 *puStack_20;
  L2ParamStack aLStack_1c [16];
  void *pvStack_c;
  undefined1 *puStack_8;
  uint uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_1081016f;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  thunk_FUN_104026b0(*(undefined4 *)(param_1 + 0x48),param_2,&DAT_1087ff0c,&param_1,&pvStack_2c,
                     &uStack_24);
  if (DAT_10b1f538 != 0) {
    iVar1 = thunk_FUN_104226e0(&param_1);
    if (iVar1 != 0) {
      piVar2 = (int *)thunk_FUN_104226e0(&param_1);
      if (*piVar2 == 4) {
        iVar1 = thunk_FUN_104226e0(&param_1);
        if (*(int *)(iVar1 + 4) != 0) {
          iVar1 = thunk_FUN_104226e0(&param_1);
          if (*(int *)(iVar1 + 4) != 0) goto LAB_1043009e;
        }
      }
    }
  }
  L2ParamStack::L2ParamStack(aLStack_1c,10);
  uStack_4 = 0;
  L2ParamStack::PushBack(aLStack_1c,param_1);
  L2ParamStack::PushBack(aLStack_1c,pvStack_2c);
  uStack_28 = 0;
  iVar1 = (**(code **)(**(int **)(DAT_10b1f538 + 0x54) + 0x294))(aLStack_1c,&uStack_28);
  if (iVar1 != 0) {
    puStack_20 = (undefined4 *)(**(code **)**(undefined4 **)GMalloc_exref)(0x1c,&DAT_10853a28);
    if (puStack_20 == (undefined4 *)0x0) {
      puVar3 = (undefined4 *)0x0;
    }
    else {
      puStack_20[2] = 0;
      puStack_20[1] = 0;
      puStack_20[6] = 0;
      *puStack_20 = 0xffffffff;
      puStack_20[3] = 0;
      puStack_20[4] = 0;
      puVar3 = puStack_20;
    }
    uStack_4 = uStack_4 & 0xffffff00;
    *puVar3 = 1;
    puVar3[1] = pvStack_2c;
    puVar3[2] = param_1;
    puVar3[6] = uStack_28;
    puVar3[5] = uStack_24;
    if (DAT_10b1f538 != 0) {
      iVar1 = thunk_FUN_104226e0(&param_1);
      if (iVar1 != 0) {
        thunk_FUN_103254a0(iVar1);
        thunk_FUN_1042c470(&param_1);
      }
      puStack_20 = (undefined4 *)(**(code **)**(undefined4 **)GMalloc_exref)(8,&DAT_10853a28);
      if (puStack_20 == (undefined4 *)0x0) {
        puStack_20 = (undefined4 *)0x0;
      }
      else {
        *puStack_20 = 0;
        puStack_20[1] = 0;
      }
      uStack_4 = uStack_4 & 0xffffff00;
      if (puStack_20 != (undefined4 *)0x0) {
        puStack_20[1] = puVar3;
        *puStack_20 = 4;
      }
      thunk_FUN_1042c3f0(&param_1,&puStack_20);
    }
  }
  uStack_4 = 0xffffffff;
  L2ParamStack::~L2ParamStack(aLStack_1c);
LAB_1043009e:
  FOutputDevice::Logf(param_1,*(ushort **)GNetworkLog_exref);
  ExceptionList = puStack_8;
  return extraout_EAX & 0xffffff00;
}


// ==== 10430160 FUN_10430160

uint FUN_10430160(int param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  uint extraout_EAX;
  int unaff_EBX;
  undefined4 unaff_ESI;
  int iStack_34;
  int iStack_30;
  float fStack_2c;
  float fStack_28;
  void *pvStack_24;
  float fStack_20;
  float fStack_1c;
  void *pvStack_18;
  float fStack_14;
  float fStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_1081019b;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  thunk_FUN_104026b0(*(undefined4 *)(param_1 + 0x48),param_2,"ddddd",&param_1,&fStack_28,&fStack_2c,
                     &iStack_30,&iStack_34);
  iVar4 = DAT_10b1f538;
  if (DAT_10b1f538 != 0) {
    iVar1 = thunk_FUN_104226e0(&param_1);
    if (iVar1 != 0) {
      piVar2 = (int *)thunk_FUN_104226e0(&param_1);
      if (*piVar2 == 3) {
        iVar1 = thunk_FUN_104226e0(&param_1);
        if (*(int *)(iVar1 + 4) != 0) {
          iVar1 = thunk_FUN_104226e0(&param_1);
          if (*(int *)(iVar1 + 4) != 0) {
            iVar1 = thunk_FUN_104226e0(&param_1);
            if (iVar1 == 0) {
LAB_104303a5:
              uVar6 = 0;
            }
            else {
              piVar2 = (int *)thunk_FUN_104226e0(&param_1);
              if (*piVar2 != 3) goto LAB_104303a5;
              iVar1 = thunk_FUN_104226e0(&param_1);
              if (*(int *)(iVar1 + 4) == 0) goto LAB_104303a5;
              iVar1 = thunk_FUN_104226e0(&param_1);
              uVar6 = *(undefined4 *)(iVar1 + 4);
            }
            pvStack_18 = (void *)(float)(int)fStack_28;
            fStack_14 = (float)(int)fStack_2c;
            fStack_10 = (float)iStack_30;
            (**(code **)(**(int **)(iVar4 + 0x54) + 0x2a8))
                      (uVar6,pvStack_18,fStack_14,fStack_10,iStack_34);
            goto LAB_104303eb;
          }
        }
      }
    }
  }
  puVar3 = (undefined4 *)(**(code **)**(undefined4 **)GMalloc_exref)(8,&DAT_10853a28);
  if (puVar3 == (undefined4 *)0x0) {
    appFailAssert("pVehicle",".\\ClientSocket.cpp",0x197d);
  }
  *puVar3 = uStack_4;
  puVar3[1] = 0;
  fStack_2c = (float)iStack_30;
  fStack_28 = (float)iStack_34;
  pvStack_24 = (void *)(float)unaff_EBX;
  fStack_20 = fStack_2c;
  fStack_1c = fStack_28;
  pvStack_18 = pvStack_24;
  iVar4 = (**(code **)(**(int **)(DAT_10b1f538 + 0x54) + 0x29c))
                    (puVar3,fStack_2c,fStack_28,pvStack_24,unaff_ESI);
  if (iVar4 == 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))(puVar3);
  }
  else if (DAT_10b1f538 != 0) {
    iVar4 = thunk_FUN_104226e0(&pvStack_18);
    if (iVar4 != 0) {
      thunk_FUN_103254a0(iVar4);
      thunk_FUN_1042c470(&pvStack_18);
    }
    puVar5 = (undefined4 *)(**(code **)**(undefined4 **)GMalloc_exref)(8,&DAT_10853a28);
    if (puVar5 == (undefined4 *)0x0) {
      puVar5 = (undefined4 *)0x0;
    }
    else {
      *puVar5 = 0;
      puVar5[1] = 0;
    }
    fStack_20 = -NAN;
    if (puVar5 != (undefined4 *)0x0) {
      puVar5[1] = puVar3;
      *puVar5 = 3;
    }
    thunk_FUN_1042c3f0(&pvStack_18,&stack0xffffffc8);
  }
LAB_104303eb:
  FOutputDevice::Logf(*(FOutputDevice **)GNetworkLog_exref,
                      (ushort *)*(FOutputDevice **)GNetworkLog_exref);
  ExceptionList = pvStack_24;
  return extraout_EAX & 0xffffff00;
}


// ==== 104304f0 FUN_104304f0

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


// ==== 104306ca Catch@104306ca

void Catch_104306ca(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x24) = *(undefined4 *)(unaff_EBP + -0x28);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x24,&DAT_10914c48);
}


// ==== 104306de Catch@104306de

void Catch_104306de(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"StaticObjectPacket");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10430780 FUN_10430780

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
              (&GL2MonsterRaceMgr,(float)local_e0 / 1000.0,(float)(int)local_c8 / 1000.0,1);
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


// ==== 10431240 FUN_10431240

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


// ==== 10431439 Catch@10431439

void Catch_10431439(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x40) = *(undefined4 *)(unaff_EBP + -0x44);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x40,&DAT_10914c48);
}


// ==== 1043144d Catch@1043144d

void Catch_1043144d(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"ExColosseumFenceInfoPacket");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10431500 FUN_10431500

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


// ==== 1043165e Catch@1043165e

void Catch_1043165e(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x3c) = *(undefined4 *)(unaff_EBP + -0x40);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x3c,&DAT_10914c48);
}


// ==== 10431672 Catch@10431672

void Catch_10431672(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"ExCursedWeaponLocation");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10431700 FUN_10431700

void FUN_10431700(void)

{
  int iVar1;
  int in_ECX;
  int iVar2;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_10810288;
  pvStack_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &pvStack_c;
  if (0 < *(int *)(in_ECX + 0x4f2c)) {
    iVar2 = 0;
    ExceptionList = &pvStack_c;
    do {
      iVar1 = *(int *)(*(int *)(in_ECX + 0x4f28) + 8 + iVar2 * 0xc);
      if (iVar1 != 0) {
        (**(code **)(**(int **)GMalloc_exref + 8))(iVar1);
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)(in_ECX + 0x4f2c));
  }
  local_4 = 0xffffffff;
  *(undefined4 *)(in_ECX + 0x4f2c) = 0;
  *(undefined4 *)(in_ECX + 0x4f30) = 0;
  FArray::Realloc((FArray *)(in_ECX + 0x4f28),0xc);
  *(undefined4 *)(in_ECX + 0x4f38) = 8;
  thunk_FUN_10423560();
  ExceptionList = pvStack_c;
  return;
}


// ==== 104317d0 FUN_104317d0

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


// ==== 10431960 FUN_10431960

void FUN_10431960(void)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 0x4f40) = 0;
  *(undefined4 *)(in_ECX + 0x4f44) = 0;
  FArray::Realloc((FArray *)(in_ECX + 0x4f3c),0xc);
  *(undefined4 *)(in_ECX + 0x4f4c) = 8;
  thunk_FUN_10423040();
  return;
}


// ==== 104319c0 FUN_104319c0

void FUN_104319c0(void)

{
  int iVar1;
  int in_ECX;
  int iVar2;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_108102a8;
  pvStack_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &pvStack_c;
  if (0 < *(int *)(in_ECX + 0x4f54)) {
    iVar2 = 0;
    ExceptionList = &pvStack_c;
    do {
      iVar1 = *(int *)(*(int *)(in_ECX + 0x4f50) + 8 + iVar2 * 0xc);
      if (iVar1 != 0) {
        (**(code **)(**(int **)GMalloc_exref + 8))(iVar1);
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)(in_ECX + 0x4f54));
  }
  local_4 = 0xffffffff;
  *(undefined4 *)(in_ECX + 0x4f54) = 0;
  *(undefined4 *)(in_ECX + 0x4f58) = 0;
  FArray::Realloc((FArray *)(in_ECX + 0x4f50),0xc);
  *(undefined4 *)(in_ECX + 0x4f60) = 8;
  thunk_FUN_10423730();
  ExceptionList = pvStack_c;
  return;
}


// ==== 10431a90 FUN_10431a90

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


// ==== 10431b60 FUN_10431b60

int FUN_10431b60(ushort *param_1)

{
  int *piVar1;
  ushort *puVar2;
  ushort *puVar3;
  int iVar4;
  int in_ECX;
  int iVar5;
  int iVar6;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_108102c8;
  local_c = ExceptionList;
  iVar5 = 0;
  iVar6 = 0;
  local_4 = 0;
  ExceptionList = &local_c;
  if (0 < *(int *)(in_ECX + 0x198)) {
    do {
      piVar1 = *(int **)(*(int *)(in_ECX + 0x194) + 8 + iVar5 * 0xc);
      if ((((piVar1 != (int *)0x0) && (*piVar1 == 1)) && ((User *)piVar1[1] != (User *)0x0)) &&
         (puVar2 = User::GetName((User *)piVar1[1]), puVar2 != (ushort *)0x0)) {
        puVar2 = param_1;
        puVar3 = User::GetName((User *)piVar1[1]);
        iVar4 = appStricmp(puVar3,puVar2);
        if ((iVar4 == 0) && (iVar6 = piVar1[1], *(int *)(iVar6 + 0xc) == 0)) {
          local_4 = 0xffffffff;
          thunk_FUN_1042cca0();
          ExceptionList = local_c;
          return iVar6;
        }
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < *(int *)(in_ECX + 0x198));
  }
  ExceptionList = local_c;
  return iVar6;
}


// ==== 10431c80 FUN_10431c80

void FUN_10431c80(ushort *param_1)

{
  int *piVar1;
  void **ppvVar2;
  int in_ECX;
  int iVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_108102e8;
  local_c = ExceptionList;
  iVar3 = 0;
  local_4 = 0;
  ppvVar2 = &local_c;
  if (*(int *)(in_ECX + 0x198) < 1) {
    return;
  }
  do {
    ExceptionList = ppvVar2;
    piVar1 = *(int **)(*(int *)(in_ECX + 0x194) + 8 + iVar3 * 0xc);
    if (((piVar1 != (int *)0x0) && (*piVar1 == 1)) && ((User *)piVar1[1] != (User *)0x0)) {
      User::IsMatchedStoreMsg((User *)piVar1[1],param_1);
    }
    iVar3 = iVar3 + 1;
    ppvVar2 = ExceptionList;
  } while (iVar3 < *(int *)(in_ECX + 0x198));
  ExceptionList = local_c;
  return;
}


// ==== 10431d50 FUN_10431d50

int FUN_10431d50(int param_1)

{
  int iVar1;
  int iVar2;
  int in_ECX;
  int iVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_10810308;
  local_c = ExceptionList;
  if (0 < param_1) {
    iVar3 = 0;
    iVar1 = *(int *)(*(int *)(in_ECX + 0x48) + 0x4f2c);
    if (0 < iVar1) {
      do {
        iVar2 = *(int *)(*(int *)(*(int *)(in_ECX + 0x48) + 0x4f28) + 8 + iVar3 * 0xc);
        if ((iVar2 != 0) && (*(int *)(iVar2 + 0x80) == param_1)) {
          iVar1 = *(int *)(iVar2 + 0xe0);
          if (iVar1 == 0) {
            local_4 = 0xffffffff;
            ExceptionList = &local_c;
            thunk_FUN_1042cce0();
            ExceptionList = local_c;
            return 0;
          }
          local_4 = 0xffffffff;
          ExceptionList = &local_c;
          thunk_FUN_1042cce0();
          ExceptionList = local_c;
          return iVar1;
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < iVar1);
    }
  }
  return 0;
}


// ==== 10431e70 FUN_10431e70

int FUN_10431e70(int param_1)

{
  int iVar1;
  int iVar2;
  int in_ECX;
  int iVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_10810328;
  local_c = ExceptionList;
  if (0 < param_1) {
    iVar3 = 0;
    iVar1 = *(int *)(*(int *)(in_ECX + 0x48) + 0x4f2c);
    if (0 < iVar1) {
      do {
        iVar2 = *(int *)(*(int *)(*(int *)(in_ECX + 0x48) + 0x4f28) + 8 + iVar3 * 0xc);
        if ((iVar2 != 0) && (*(int *)(iVar2 + 0xcc) == param_1)) {
          iVar1 = *(int *)(iVar2 + 0xe4);
          if (iVar1 == 0) {
            local_4 = 0xffffffff;
            ExceptionList = &local_c;
            thunk_FUN_1042cce0();
            ExceptionList = local_c;
            return 0;
          }
          local_4 = 0xffffffff;
          ExceptionList = &local_c;
          thunk_FUN_1042cce0();
          ExceptionList = local_c;
          return iVar1;
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < iVar1);
    }
  }
  return 0;
}


// ==== 10431f90 FUN_10431f90

void FUN_10431f90(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int in_ECX;
  int iVar3;
  
  iVar3 = 0;
  if (0 < param_1) {
    iVar1 = *(int *)(in_ECX + 0x48);
    if (0 < *(int *)(iVar1 + 0x4f2c)) {
      do {
        iVar2 = *(int *)(*(int *)(iVar1 + 0x4f28) + 8 + iVar3 * 0xc);
        if (*(int *)(iVar2 + 0x80) == param_1) {
          *(undefined4 *)(iVar2 + 0xe0) = param_2;
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < *(int *)(iVar1 + 0x4f2c));
    }
  }
  return;
}


// ==== 10432050 FUN_10432050

void FUN_10432050(int param_1,int param_2)

{
  User *this;
  int iVar1;
  int *piVar2;
  int in_ECX;
  int iVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  iVar1 = param_2;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10810368;
  local_c = ExceptionList;
  if (param_1 < 1) {
    if (0 < param_2) {
      iVar3 = 0;
      local_4 = 0;
      ExceptionList = &local_c;
      if (0 < *(int *)(in_ECX + 0x198)) {
        do {
          piVar2 = *(int **)(*(int *)(in_ECX + 0x194) + 8 + iVar3 * 0xc);
          if (((*piVar2 == 1) && (this = (User *)piVar2[1], this != (User *)0x0)) &&
             (*(int *)(this + 0x284) == iVar1)) {
            User::SetPawnResource(this);
          }
          iVar3 = iVar3 + 1;
        } while (iVar3 < *(int *)(in_ECX + 0x198));
      }
    }
  }
  else if (((DAT_10b1f538 != 0) &&
           (ExceptionList = &local_c, piVar2 = (int *)thunk_FUN_104226e0(&param_1),
           piVar2 != (int *)0x0)) && ((*piVar2 == 1 && ((User *)piVar2[1] != (User *)0x0)))) {
    User::SetPawnResource((User *)piVar2[1]);
    ExceptionList = local_c;
    return;
  }
  ExceptionList = local_c;
  return;
}


// ==== 10432180 FUN_10432180

void FUN_10432180(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int in_ECX;
  int iVar3;
  
  iVar3 = 0;
  if (0 < param_1) {
    iVar1 = *(int *)(in_ECX + 0x48);
    if (0 < *(int *)(iVar1 + 0x4f2c)) {
      do {
        iVar2 = *(int *)(*(int *)(iVar1 + 0x4f28) + 8 + iVar3 * 0xc);
        if (*(int *)(iVar2 + 0xcc) == param_1) {
          *(undefined4 *)(iVar2 + 0xe4) = param_2;
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < *(int *)(iVar1 + 0x4f2c));
    }
  }
  return;
}


// ==== 10432240 FUN_10432240

void FUN_10432240(undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  void **ppvVar3;
  int *piVar4;
  int in_ECX;
  int iVar5;
  int iVar6;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  iVar2 = DAT_10b1f538;
  puStack_8 = &LAB_108103b3;
  pvStack_c = ExceptionList;
  ppvVar3 = &pvStack_c;
  if (DAT_10b1f538 != 0) {
    piVar4 = (int *)(DAT_10b1f538 + 0x194);
    iVar5 = 0;
    local_4 = 0;
    ExceptionList = &pvStack_c;
    ppvVar3 = &pvStack_c;
    if (0 < *(int *)(DAT_10b1f538 + 0x198)) {
      do {
        piVar1 = *(int **)(*piVar4 + 8 + iVar5 * 0xc);
        if (piVar1 != (int *)0x0) {
          iVar6 = *piVar1;
          if (iVar6 == 1) {
            iVar6 = piVar1[1];
            if ((iVar6 != 0) && (param_1 != (undefined4 *)iVar6)) {
              thunk_FUN_1042c850(iVar6 + 0x18);
              (**(code **)(**(int **)(DAT_10b1f538 + 0x54) + 0x24c))(iVar6,0,0);
              goto LAB_104322ee;
            }
          }
          else {
            if (iVar6 == 2) {
              iVar6 = piVar1[1];
              (**(code **)(**(int **)(DAT_10b1f538 + 0x54) + 0x250))(iVar6);
            }
            else if (iVar6 == 3) {
              iVar6 = piVar1[1];
              (**(code **)(**(int **)(DAT_10b1f538 + 0x54) + 0x2a0))(iVar6);
            }
            else {
              if (iVar6 != 4) {
                if ((iVar6 == 5) &&
                   (iVar6 = piVar1[1],
                   (**(code **)(**(int **)(DAT_10b1f538 + 0x54) + 0x6f8))(iVar6,0), iVar6 != 0)) {
                  thunk_FUN_1042f860(1);
                }
                goto LAB_10432388;
              }
              iVar6 = piVar1[1];
              (**(code **)(**(int **)(DAT_10b1f538 + 0x54) + 0x650))(iVar6);
            }
LAB_104322ee:
            (**(code **)(**(int **)GMalloc_exref + 8))(iVar6);
          }
LAB_10432388:
          (**(code **)(**(int **)GMalloc_exref + 8))(piVar1);
        }
        iVar5 = iVar5 + 1;
        ppvVar3 = ExceptionList;
      } while (iVar5 < *(int *)(iVar2 + 0x198));
    }
  }
  ExceptionList = ppvVar3;
  local_4 = 0xffffffff;
  *(undefined4 *)(in_ECX + 0x198) = 0;
  *(undefined4 *)(in_ECX + 0x19c) = 0;
  FArray::Realloc((FArray *)(in_ECX + 0x194),0xc);
  *(undefined4 *)(in_ECX + 0x1a4) = 8;
  thunk_FUN_10423210();
  iVar2 = (int)param_1;
  if (((param_1 != (undefined4 *)0x0) &&
      (piVar4 = (int *)(*(int *)((int)param_1 + 0x204) + 0x60), 0 < *piVar4)) && (DAT_10b1f538 != 0)
     ) {
    iVar5 = thunk_FUN_104226e0(piVar4);
    if (iVar5 != 0) {
      (**(code **)(**(int **)GMalloc_exref + 8))(iVar5);
      thunk_FUN_1042c470(*(int *)(iVar2 + 0x204) + 0x60);
    }
    param_1 = (undefined4 *)(**(code **)**(undefined4 **)GMalloc_exref)(8,&DAT_10853a28);
    if (param_1 == (undefined4 *)0x0) {
      param_1 = (undefined4 *)0x0;
    }
    else {
      *param_1 = 0;
      param_1[1] = 0;
    }
    local_4 = 0xffffffff;
    if (param_1 != (undefined4 *)0x0) {
      param_1[1] = iVar2;
      *param_1 = 1;
    }
    thunk_FUN_1042c3f0(*(int *)(iVar2 + 0x204) + 0x60,&param_1);
  }
  ExceptionList = pvStack_c;
  return;
}


// ==== 10432560 FUN_10432560

void FUN_10432560(void)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_108103d0;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  thunk_FUN_10431700();
  thunk_FUN_10431960();
  thunk_FUN_104319c0();
  thunk_FUN_103ff8a0();
  thunk_FUN_1042d1c0();
  ExceptionList = local_10;
  return;
}


// ==== 104325d6 Catch@104325d6

void Catch_104325d6(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 104325ea Catch@104325ea

void Catch_104325ea(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"UNetworkHandler::ContinueServerClose");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10432630 FUN_10432630

void FUN_10432630(void)

{
  short sVar1;
  User *this;
  int iVar2;
  short *psVar3;
  int iVar4;
  undefined4 *puVar5;
  int in_ECX;
  short *psVar6;
  undefined1 auStack_10 [4];
  void *pvStack_c;
  undefined1 *puStack_8;
  int iStack_4;
  
  iStack_4 = -1;
  puStack_8 = &LAB_108103eb;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  this = (User *)(**(code **)**(undefined4 **)GMalloc_exref)();
  if (this == (User *)0x0) {
    iVar2 = 0;
  }
  else {
    iVar2 = User::User(this);
  }
  iVar4 = iStack_4;
  *(int *)(iVar2 + 0x18) = iStack_4;
  psVar3 = (short *)(**(code **)(**(int **)GConfig_exref + 0x14))(&DAT_1088ac34,L"CharName",0);
  psVar6 = (short *)(iVar2 + 0x1c);
  do {
    sVar1 = *psVar3;
    *psVar6 = sVar1;
    psVar3 = psVar3 + 1;
    psVar6 = psVar6 + 1;
  } while (sVar1 != 0);
  if ((0 < iVar4) && (DAT_10b1f538 != 0)) {
    iVar4 = thunk_FUN_104226e0(auStack_10);
    if (iVar4 != 0) {
      (**(code **)(**(int **)GMalloc_exref + 8))(iVar4);
      thunk_FUN_1042c470(auStack_10);
    }
    puVar5 = (undefined4 *)(**(code **)**(undefined4 **)GMalloc_exref)(8,&DAT_10853a28);
    if (puVar5 == (undefined4 *)0x0) {
      puVar5 = (undefined4 *)0x0;
    }
    else {
      *puVar5 = 0;
      puVar5[1] = 0;
    }
    if (puVar5 != (undefined4 *)0x0) {
      puVar5[1] = iVar2;
      *puVar5 = 1;
    }
    thunk_FUN_1042c3f0(auStack_10,&stack0xffffffdc);
  }
  (**(code **)(**(int **)(in_ECX + 0x48) + 0x68))
            (*(int **)(in_ECX + 0x48),&DAT_1087f8a0,3,L"narcasse");
  FOutputDevice::Logf((FOutputDevice *)GNetworkLog_exref,*(ushort **)GNetworkLog_exref);
  ExceptionList = u_EnterWorld_1088ac58;
  return;
}


// ==== 10432810 FUN_10432810

undefined4 FUN_10432810(undefined4 param_1,undefined4 param_2)

{
  int in_ECX;
  
  (**(code **)(**(int **)(in_ECX + 0x48) + 0x68))
            (*(int **)(in_ECX + 0x48),&DAT_1087f8f8,0x66,param_1);
  FOutputDevice::Logf(*(FOutputDevice **)GNetworkLog_exref,
                      (ushort *)*(FOutputDevice **)GNetworkLog_exref);
  param_2 = param_1;
  thunk_FUN_1042c300(&param_2,&param_2);
  return 1;
}


// ==== 10432880 FUN_10432880

int FUN_10432880(undefined4 param_1,float param_2,int param_3)

{
  float fVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *in_ECX;
  int *piVar6;
  int iVar7;
  float10 fVar8;
  float local_28;
  int local_24;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10810408;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  iVar4 = thunk_FUN_104226e0(in_ECX[0x12] + 0x4f68);
  iVar3 = DAT_10b1f538;
  iVar7 = 0;
  if ((iVar4 != 0) && (*(int *)(iVar4 + 4) != 0)) {
    local_28 = param_2;
    local_24 = 0;
    if (DAT_10b1f538 != 0) {
      piVar6 = (int *)(DAT_10b1f538 + 0x194);
      local_4 = 0;
      if (0 < *(int *)(DAT_10b1f538 + 0x198)) {
        do {
          iVar2 = *(int *)(*piVar6 + 8 + iVar7 * 0xc);
          if (((iVar2 != 0) && (*(int *)(iVar2 + 4) != 0)) &&
             (iVar5 = (**(code **)(*in_ECX + 0x52c))(param_1,iVar2), iVar5 != 0)) {
            fVar8 = (float10)(**(code **)(*in_ECX + 0x528))(iVar2,iVar4);
            fVar1 = (float)fVar8;
            if (((0.0 <= fVar1) && (fVar1 < local_28)) &&
               (iVar5 = thunk_FUN_103ffaa0(), iVar5 != param_3)) {
              local_28 = fVar1;
              local_24 = iVar2;
            }
          }
          iVar7 = iVar7 + 1;
        } while (iVar7 < *(int *)(iVar3 + 0x198));
      }
    }
    ExceptionList = local_c;
    return local_24;
  }
  ExceptionList = local_c;
  return 0;
}


// ==== 10432a20 FUN_10432a20

int FUN_10432a20(undefined4 param_1,float param_2,int param_3)

{
  float fVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *in_ECX;
  int *piVar6;
  int iVar7;
  float10 fVar8;
  float local_28;
  int local_24;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10810428;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  iVar4 = thunk_FUN_104226e0(&DAT_10b1f530);
  iVar3 = DAT_10b1f538;
  iVar7 = 0;
  if ((iVar4 != 0) && (*(int *)(iVar4 + 4) != 0)) {
    local_28 = param_2;
    local_24 = 0;
    if (DAT_10b1f538 != 0) {
      piVar6 = (int *)(DAT_10b1f538 + 0x194);
      local_4 = 0;
      if (0 < *(int *)(DAT_10b1f538 + 0x198)) {
        do {
          iVar2 = *(int *)(*piVar6 + 8 + iVar7 * 0xc);
          if (((iVar2 != 0) && (*(int *)(iVar2 + 4) != 0)) &&
             (iVar5 = (**(code **)(*in_ECX + 0x52c))(param_1,iVar2), iVar5 != 0)) {
            fVar8 = (float10)(**(code **)(*in_ECX + 0x528))(iVar2,iVar4);
            fVar1 = (float)fVar8;
            if (((0.0 <= fVar1) && (fVar1 < local_28)) &&
               (iVar5 = thunk_FUN_103ffaa0(), iVar5 != param_3)) {
              local_28 = fVar1;
              local_24 = iVar2;
            }
          }
          iVar7 = iVar7 + 1;
        } while (iVar7 < *(int *)(iVar3 + 0x198));
      }
    }
    ExceptionList = local_c;
    return local_24;
  }
  ExceptionList = local_c;
  return 0;
}


// ==== 10432bc0 FUN_10432bc0

int FUN_10432bc0(int param_1,float param_2,int param_3)

{
  float fVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int *in_ECX;
  int iVar7;
  int *piVar8;
  float10 fVar9;
  int local_34;
  float local_30;
  float local_28;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10810448;
  local_c = ExceptionList;
  if (param_1 == 0) {
    return 0;
  }
  ExceptionList = &local_c;
  if (param_1 != in_ECX[0x16]) {
    ExceptionList = &local_c;
    in_ECX[0x16] = param_1;
    in_ECX[0x17] = 0;
    in_ECX[0x18] = -1;
  }
  iVar4 = thunk_FUN_104226e0(&DAT_10b1f530);
  if ((iVar4 == 0) || (*(int *)(iVar4 + 4) == 0)) {
    ExceptionList = local_c;
    return 0;
  }
  local_30 = 0.0;
  if (0 < in_ECX[0x18]) {
    iVar2 = *in_ECX;
    iVar7 = iVar4;
    uVar5 = thunk_FUN_104226e0(in_ECX + 0x18);
    fVar9 = (float10)(**(code **)(iVar2 + 0x528))(uVar5,iVar7);
    local_30 = (float)fVar9;
    if (local_30 < 0.0) {
      local_30 = 0.0;
    }
  }
  iVar2 = DAT_10b1f538;
  iVar7 = 0;
  local_28 = param_2;
  local_34 = 0;
  if (DAT_10b1f538 != 0) {
    piVar8 = (int *)(DAT_10b1f538 + 0x194);
    local_4 = 0;
    if (0 < *(int *)(DAT_10b1f538 + 0x198)) {
      do {
        iVar3 = *(int *)(*piVar8 + 8 + iVar7 * 0xc);
        if (((iVar3 != 0) && (*(int *)(iVar3 + 4) != 0)) &&
           (iVar6 = (**(code **)(*in_ECX + 0x52c))(param_1,iVar3), iVar6 != 0)) {
          fVar9 = (float10)(**(code **)(*in_ECX + 0x528))(iVar3,iVar4);
          fVar1 = (float)fVar9;
          if (((0.0 <= fVar1) && (local_30 < fVar1)) &&
             ((fVar1 < local_28 && (iVar6 = thunk_FUN_103ffaa0(), iVar6 != param_3)))) {
            local_34 = iVar3;
            local_28 = fVar1;
          }
        }
        iVar7 = iVar7 + 1;
      } while (iVar7 < *(int *)(iVar2 + 0x198));
    }
    local_4 = 0xffffffff;
    thunk_FUN_1042cca0();
    if (local_34 != 0) goto LAB_10432d9a;
  }
  local_34 = (**(code **)(*in_ECX + 0x538))(param_1,param_2,param_3);
  if (local_34 == 0) {
    ExceptionList = local_c;
    return 0;
  }
LAB_10432d9a:
  iVar4 = thunk_FUN_103ffaa0();
  in_ECX[0x18] = iVar4;
  ExceptionList = local_c;
  return local_34;
}


// ==== 10432e60 FUN_10432e60

int FUN_10432e60(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  int iVar7;
  int *in_ECX;
  int iVar8;
  int *piVar9;
  float fVar10;
  float unaff_retaddr;
  int *piStack_70;
  int *piStack_6c;
  float fStack_68;
  undefined4 uStack_64;
  int aiStack_60 [20];
  void *pvStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_10810468;
  pvStack_c = ExceptionList;
  iVar8 = 1;
  ExceptionList = &pvStack_c;
  aiStack_60[0] = (**(code **)(*in_ECX + 0x94))(DAT_10b1f530);
  if (0 < *(int *)(in_ECX[0x12] + 0x4f68)) {
    aiStack_60[1] = (**(code **)(*in_ECX + 0x94))(*(int *)(in_ECX[0x12] + 0x4f68));
    iVar8 = 2;
  }
  iVar1 = in_ECX[0x12];
  piVar9 = (int *)(iVar1 + 0x4f50);
  fStack_68 = 0.0;
  uStack_64 = 0;
  puStack_8 = (undefined1 *)0x0;
  piStack_70 = piVar9;
  piStack_6c = piVar9;
  if (0 < *(int *)(iVar1 + 0x4f54)) {
    do {
      fVar3 = fStack_68;
      puVar2 = *(undefined4 **)(*piVar9 + 8 + (int)fStack_68 * 0xc);
      if (puVar2 != (undefined4 *)0x0) {
        iVar7 = (**(code **)(*in_ECX + 0x94))(*puVar2);
        aiStack_60[iVar8] = iVar7;
        iVar8 = iVar8 + 1;
      }
      fStack_68 = (float)((int)fVar3 + 1);
    } while ((int)fStack_68 < *(int *)(iVar1 + 0x4f54));
  }
  puStack_8 = (undefined1 *)0xffffffff;
  iVar1 = *(int *)(aiStack_60[0] + 0x204);
  fVar3 = *(float *)(iVar1 + 0x1bc);
  fVar4 = *(float *)(iVar1 + 0x1c0);
  fVar5 = *(float *)(iVar1 + 0x1c4);
  iVar1 = iVar8 + -1;
  if (iVar1 < in_ECX[100]) {
    in_ECX[100] = 0;
  }
  iVar7 = in_ECX[100];
  if (param_1 == 0) {
    for (; iVar7 < iVar8; iVar7 = iVar7 + -1) {
      iVar6 = *(int *)(aiStack_60[iVar7] + 0x204);
      piStack_70 = (int *)(fVar3 - *(float *)(iVar6 + 0x1bc));
      piStack_6c = (int *)(fVar4 - *(float *)(iVar6 + 0x1c0));
      fStack_68 = fVar5 - *(float *)(iVar6 + 0x1c4);
      fVar10 = FVector::Size((FVector *)&piStack_70);
      if (fVar10 < unaff_retaddr) {
        in_ECX[100] = iVar7 + -1;
        if (iVar7 + -1 < 0) {
          in_ECX[100] = iVar1;
        }
        ExceptionList = pvStack_10;
        return aiStack_60[iVar7];
      }
      if (iVar7 < 0) {
        iVar7 = iVar1;
      }
    }
  }
  else {
    for (; iVar7 < iVar8; iVar7 = iVar7 + 1) {
      iVar6 = *(int *)(aiStack_60[iVar7] + 0x204);
      piStack_70 = (int *)(fVar3 - *(float *)(iVar6 + 0x1bc));
      piStack_6c = (int *)(fVar4 - *(float *)(iVar6 + 0x1c0));
      fStack_68 = fVar5 - *(float *)(iVar6 + 0x1c4);
      fVar10 = FVector::Size((FVector *)&piStack_70);
      if (fVar10 < unaff_retaddr) {
        in_ECX[100] = iVar7 + 1;
        if (iVar1 < iVar7 + 1) {
          in_ECX[100] = 0;
        }
        ExceptionList = pvStack_10;
        return aiStack_60[iVar7];
      }
      if (iVar1 < iVar7) {
        iVar7 = 0;
      }
    }
  }
  ExceptionList = pvStack_10;
  return 0;
}


// ==== 10433180 FUN_10433180

void FUN_10433180(void)

{
  int iVar1;
  int *piVar2;
  int in_ECX;
  int iVar3;
  int local_28;
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_10810488;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffc4;
  local_28 = 0;
  local_8._0_1_ = 1;
  local_8._1_3_ = 0;
  iVar3 = DAT_10b1f538;
  ExceptionList = &local_10;
  do {
    if (*(int *)(in_ECX + 0x198) <= local_28) {
      local_8 = (uint)local_8._1_3_ << 8;
      thunk_FUN_1042cca0();
      ExceptionList = local_10;
      return;
    }
    local_18 = thunk_FUN_103ffaa0();
    if (iVar3 != 0) {
      iVar1 = thunk_FUN_104226e0(&local_18);
      if (iVar1 != 0) {
        piVar2 = (int *)thunk_FUN_104226e0(&local_18);
        if (*piVar2 == 1) {
          iVar1 = thunk_FUN_104226e0(&local_18);
          if (*(int *)(iVar1 + 4) != 0) {
            iVar1 = thunk_FUN_104226e0(&local_18);
            if (*(int *)(iVar1 + 4) != 0) {
              thunk_FUN_104225e0(&local_18);
              iVar3 = DAT_10b1f538;
            }
          }
        }
      }
      if (iVar3 != 0) {
        iVar1 = thunk_FUN_104226e0(&local_18);
        if (iVar1 != 0) {
          piVar2 = (int *)thunk_FUN_104226e0(&local_18);
          if (*piVar2 == 2) {
            iVar1 = thunk_FUN_104226e0(&local_18);
            if (*(int *)(iVar1 + 4) != 0) {
              iVar1 = thunk_FUN_104226e0(&local_18);
              if (*(int *)(iVar1 + 4) != 0) {
                iVar1 = thunk_FUN_104226e0(&local_18);
                if (iVar1 == 0) {
LAB_104332cf:
                  iVar1 = 0;
                }
                else {
                  piVar2 = (int *)thunk_FUN_104226e0(&local_18);
                  if (*piVar2 != 2) goto LAB_104332cf;
                  iVar1 = thunk_FUN_104226e0(&local_18);
                  if (*(int *)(iVar1 + 4) == 0) goto LAB_104332cf;
                  iVar1 = thunk_FUN_104226e0(&local_18);
                  iVar1 = *(int *)(iVar1 + 4);
                }
                if (*(int *)(iVar1 + 0x10) != 0) {
                  thunk_FUN_104225e0(&local_18);
                  iVar3 = DAT_10b1f538;
                }
              }
            }
          }
        }
        if (iVar3 != 0) {
          iVar1 = thunk_FUN_104226e0(&local_18);
          if (iVar1 != 0) {
            piVar2 = (int *)thunk_FUN_104226e0(&local_18);
            if (*piVar2 == 3) {
              iVar1 = thunk_FUN_104226e0(&local_18);
              if (*(int *)(iVar1 + 4) != 0) {
                iVar1 = thunk_FUN_104226e0(&local_18);
                if (*(int *)(iVar1 + 4) != 0) {
                  thunk_FUN_104225e0(&local_18);
                  iVar3 = DAT_10b1f538;
                }
              }
            }
          }
          if (iVar3 != 0) {
            iVar1 = thunk_FUN_104226e0(&local_18);
            if (iVar1 != 0) {
              piVar2 = (int *)thunk_FUN_104226e0(&local_18);
              if (*piVar2 == 4) {
                iVar1 = thunk_FUN_104226e0(&local_18);
                if (*(int *)(iVar1 + 4) != 0) {
                  iVar1 = thunk_FUN_104226e0(&local_18);
                  if (*(int *)(iVar1 + 4) != 0) {
                    thunk_FUN_104225e0(&local_18);
                    iVar3 = DAT_10b1f538;
                  }
                }
              }
            }
            if (iVar3 != 0) {
              iVar1 = thunk_FUN_104226e0(&local_18);
              if (iVar1 != 0) {
                piVar2 = (int *)thunk_FUN_104226e0(&local_18);
                if (*piVar2 == 5) {
                  iVar1 = thunk_FUN_104226e0(&local_18);
                  if (*(int *)(iVar1 + 4) != 0) {
                    iVar1 = thunk_FUN_104226e0(&local_18);
                    if (*(int *)(iVar1 + 4) != 0) {
                      thunk_FUN_104225e0(&local_18);
                      iVar3 = DAT_10b1f538;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    local_28 = local_28 + 1;
  } while( true );
}


// ==== 10433437 Catch@10433437

void Catch_10433437(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_10914c48);
}


// ==== 1043344b Catch@1043344b

void Catch_1043344b(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"UNetworkHandler::GetUserIDList");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10433530 FUN_10433530

void FUN_10433530(void)

{
  int iVar1;
  void **ppvVar2;
  int in_ECX;
  int iVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_108104a8;
  local_c = ExceptionList;
  iVar1 = *(int *)(in_ECX + 0x48);
  iVar3 = 0;
  local_4 = 0;
  ppvVar2 = &local_c;
  if (*(int *)(iVar1 + 0x5028) < 1) {
    return;
  }
  do {
    ExceptionList = ppvVar2;
    (**(code **)(**(int **)(DAT_10b1f538 + 0x54) + 0x43c))
              (*(undefined4 *)(*(int *)(iVar1 + 0x5024) + 4 + iVar3 * 0xc),
               *(undefined4 *)(*(int *)(iVar1 + 0x5024) + iVar3 * 0xc + 8));
    iVar3 = iVar3 + 1;
    ppvVar2 = ExceptionList;
  } while (iVar3 < *(int *)(iVar1 + 0x5028));
  ExceptionList = local_c;
  return;
}


// ==== 10433600 FUN_10433600

void FUN_10433600(void)

{
  int iVar1;
  APawn *this;
  int iVar2;
  int iVar3;
  int *piVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  iVar2 = DAT_10b1f538;
  puStack_8 = &LAB_108104c8;
  local_c = ExceptionList;
  iVar3 = 0;
  piVar4 = (int *)(DAT_10b1f538 + 0x1a8);
  local_4 = 0;
  ExceptionList = &local_c;
  if (0 < *(int *)(DAT_10b1f538 + 0x1ac)) {
    do {
      iVar1 = *(int *)(*piVar4 + 8 + iVar3 * 0xc);
      if ((iVar1 != 0) && (this = *(APawn **)(iVar1 + 0x204), this != (APawn *)0x0)) {
        APawn::RefreshQuestMark(this);
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(iVar2 + 0x1ac));
  }
  ExceptionList = local_c;
  return;
}


// ==== 104336b0 FUN_104336b0

void FUN_104336b0(void)

{
  undefined4 *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_108104f1;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *in_ECX = 0;
  in_ECX[1] = 0;
  in_ECX[2] = 0;
  local_4 = 1;
  in_ECX[3] = 0;
  in_ECX[4] = 8;
  thunk_FUN_10423040();
  ExceptionList = local_c;
  return;
}


// ==== 10433720 FUN_10433720

void FUN_10433720(void)

{
  int in_ECX;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_10810518;
  pvStack_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &pvStack_c;
  if (*(int *)(in_ECX + 0xc) != 0) {
    ExceptionList = &pvStack_c;
    (**(code **)(**(int **)GMalloc_exref + 8))(*(int *)(in_ECX + 0xc));
  }
  *(undefined4 *)(in_ECX + 0xc) = 0;
  *(undefined4 *)(in_ECX + 0x10) = 0;
  local_4 = 0xffffffff;
  thunk_FUN_1042cda0();
  ExceptionList = pvStack_c;
  return;
}


// ==== 104337e0 FUN_104337e0

void FUN_104337e0(void)

{
  undefined4 *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_10810541;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *in_ECX = 0;
  in_ECX[1] = 0;
  in_ECX[2] = 0;
  local_4 = 1;
  in_ECX[3] = 0;
  in_ECX[4] = 8;
  thunk_FUN_10423210();
  ExceptionList = local_c;
  return;
}


// ==== 10433850 FUN_10433850

void FUN_10433850(int param_1)

{
  int in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10810568;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  thunk_FUN_104233b0(param_1);
  local_4 = 0;
  *(undefined4 *)(in_ECX + 0xc) = 0;
  *(undefined4 *)(in_ECX + 0x10) = *(undefined4 *)(param_1 + 0x10);
  thunk_FUN_10423210();
  ExceptionList = local_c;
  return;
}


// ==== 104338d0 FUN_104338d0

void FUN_104338d0(void)

{
  int in_ECX;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_10810588;
  pvStack_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &pvStack_c;
  if (*(int *)(in_ECX + 0xc) != 0) {
    ExceptionList = &pvStack_c;
    (**(code **)(**(int **)GMalloc_exref + 8))(*(int *)(in_ECX + 0xc));
  }
  *(undefined4 *)(in_ECX + 0xc) = 0;
  *(undefined4 *)(in_ECX + 0x10) = 0;
  local_4 = 0xffffffff;
  thunk_FUN_1042ce90();
  ExceptionList = pvStack_c;
  return;
}


// ==== 10433960 FUN_10433960

void FUN_10433960(void)

{
  undefined4 *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_108105b1;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *in_ECX = 0;
  in_ECX[1] = 0;
  in_ECX[2] = 0;
  local_4 = 1;
  in_ECX[3] = 0;
  in_ECX[4] = 8;
  thunk_FUN_10423560();
  ExceptionList = local_c;
  return;
}


// ==== 104339d0 FUN_104339d0

void FUN_104339d0(void)

{
  int in_ECX;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_108105d8;
  pvStack_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &pvStack_c;
  if (*(int *)(in_ECX + 0xc) != 0) {
    ExceptionList = &pvStack_c;
    (**(code **)(**(int **)GMalloc_exref + 8))(*(int *)(in_ECX + 0xc));
  }
  *(undefined4 *)(in_ECX + 0xc) = 0;
  *(undefined4 *)(in_ECX + 0x10) = 0;
  local_4 = 0xffffffff;
  thunk_FUN_1042cf50();
  ExceptionList = pvStack_c;
  return;
}


// ==== 10433a60 FUN_10433a60

void FUN_10433a60(void)

{
  undefined4 *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_10810601;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *in_ECX = 0;
  in_ECX[1] = 0;
  in_ECX[2] = 0;
  local_4 = 1;
  in_ECX[3] = 0;
  in_ECX[4] = 8;
  thunk_FUN_10423730();
  ExceptionList = local_c;
  return;
}


// ==== 10433ad0 FUN_10433ad0

void FUN_10433ad0(void)

{
  int in_ECX;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_10810628;
  pvStack_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &pvStack_c;
  if (*(int *)(in_ECX + 0xc) != 0) {
    ExceptionList = &pvStack_c;
    (**(code **)(**(int **)GMalloc_exref + 8))(*(int *)(in_ECX + 0xc));
  }
  *(undefined4 *)(in_ECX + 0xc) = 0;
  *(undefined4 *)(in_ECX + 0x10) = 0;
  local_4 = 0xffffffff;
  thunk_FUN_1042d010();
  ExceptionList = pvStack_c;
  return;
}


// ==== 10433b90 FUN_10433b90

void FUN_10433b90(void)

{
  undefined4 *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_10810651;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *in_ECX = 0;
  in_ECX[1] = 0;
  in_ECX[2] = 0;
  local_4 = 1;
  in_ECX[3] = 0;
  in_ECX[4] = 8;
  thunk_FUN_104239a0();
  ExceptionList = local_c;
  return;
}


// ==== 10433c00 FUN_10433c00

void FUN_10433c00(int param_1)

{
  int in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10810678;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  thunk_FUN_10423b40(param_1);
  local_4 = 0;
  *(undefined4 *)(in_ECX + 0xc) = 0;
  *(undefined4 *)(in_ECX + 0x10) = *(undefined4 *)(param_1 + 0x10);
  thunk_FUN_104239a0();
  ExceptionList = local_c;
  return;
}


// ==== 10433c80 FUN_10433c80

void FUN_10433c80(void)

{
  int in_ECX;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_10810698;
  pvStack_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &pvStack_c;
  if (*(int *)(in_ECX + 0xc) != 0) {
    ExceptionList = &pvStack_c;
    (**(code **)(**(int **)GMalloc_exref + 8))(*(int *)(in_ECX + 0xc));
  }
  *(undefined4 *)(in_ECX + 0xc) = 0;
  *(undefined4 *)(in_ECX + 0x10) = 0;
  local_4 = 0xffffffff;
  thunk_FUN_1042d100();
  ExceptionList = pvStack_c;
  return;
}


// ==== 10433d10 FUN_10433d10

void FUN_10433d10(void)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_108106b8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  thunk_FUN_104336b0();
  ExceptionList = local_c;
  return;
}


// ==== 10433d60 FUN_10433d60

void FUN_10433d60(void)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_108106d8;
  local_c = ExceptionList;
  local_4 = 0xffffffff;
  ExceptionList = &local_c;
  thunk_FUN_10433720();
  ExceptionList = local_c;
  return;
}


// ==== 10433db0 FUN_10433db0

void FUN_10433db0(void)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_108106f8;
  local_c = ExceptionList;
  local_4 = 0xffffffff;
  ExceptionList = &local_c;
  thunk_FUN_104338d0();
  ExceptionList = local_c;
  return;
}


// ==== 10433e00 FUN_10433e00

void FUN_10433e00(void)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_10810718;
  local_c = ExceptionList;
  local_4 = 0xffffffff;
  ExceptionList = &local_c;
  thunk_FUN_104339d0();
  ExceptionList = local_c;
  return;
}


// ==== 10433e50 FUN_10433e50

void FUN_10433e50(void)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_10810738;
  local_c = ExceptionList;
  local_4 = 0xffffffff;
  ExceptionList = &local_c;
  thunk_FUN_10433ad0();
  ExceptionList = local_c;
  return;
}


// ==== 10433ea0 FUN_10433ea0

void FUN_10433ea0(void)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_10810760;
  local_c = ExceptionList;
  local_4 = 0xffffffff;
  ExceptionList = &local_c;
  thunk_FUN_10433720();
  ExceptionList = local_c;
  return;
}


// ==== 10433ef0 FUN_10433ef0

void FUN_10433ef0(void)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10810778;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  thunk_FUN_104337e0();
  ExceptionList = local_c;
  return;
}


// ==== 10433f40 FUN_10433f40

void FUN_10433f40(void)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10810798;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  thunk_FUN_10433960();
  ExceptionList = local_c;
  return;
}


// ==== 10433f90 FUN_10433f90

void FUN_10433f90(void)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_108107b8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  thunk_FUN_10433a60();
  ExceptionList = local_c;
  return;
}


// ==== 10433fe0 FUN_10433fe0

void FUN_10433fe0(UObject *param_1)

{
  UObject *pUVar1;
  UObject *in_ECX;
  int iVar2;
  
  UObject::operator=(in_ECX,param_1);
  *(undefined4 *)(in_ECX + 0x38) = *(undefined4 *)(param_1 + 0x38);
  thunk_FUN_104229f0(param_1 + 0x3c);
  *(undefined4 *)(in_ECX + 0x48) = *(undefined4 *)(param_1 + 0x48);
  *(undefined4 *)(in_ECX + 0x4c) = *(undefined4 *)(param_1 + 0x4c);
  *(undefined4 *)(in_ECX + 0x50) = *(undefined4 *)(param_1 + 0x50);
  *(undefined4 *)(in_ECX + 0x54) = *(undefined4 *)(param_1 + 0x54);
  *(undefined4 *)(in_ECX + 0x58) = *(undefined4 *)(param_1 + 0x58);
  *(undefined4 *)(in_ECX + 0x5c) = *(undefined4 *)(param_1 + 0x5c);
  *(undefined4 *)(in_ECX + 0x60) = *(undefined4 *)(param_1 + 0x60);
  pUVar1 = in_ECX + 100;
  iVar2 = 0x80;
  do {
    *pUVar1 = pUVar1[(int)param_1 - (int)in_ECX];
    pUVar1 = pUVar1 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  *(undefined4 *)(in_ECX + 0xe4) = *(undefined4 *)(param_1 + 0xe4);
  pUVar1 = in_ECX + 0xe8;
  iVar2 = 0x81;
  do {
    *pUVar1 = pUVar1[(int)param_1 - (int)in_ECX];
    pUVar1 = pUVar1 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  *(undefined4 *)(in_ECX + 0x16c) = *(undefined4 *)(param_1 + 0x16c);
  *(undefined4 *)(in_ECX + 0x170) = *(undefined4 *)(param_1 + 0x170);
  *(undefined4 *)(in_ECX + 0x174) = *(undefined4 *)(param_1 + 0x174);
  *(undefined4 *)(in_ECX + 0x178) = *(undefined4 *)(param_1 + 0x178);
  *(undefined4 *)(in_ECX + 0x17c) = *(undefined4 *)(param_1 + 0x17c);
  *(undefined4 *)(in_ECX + 0x180) = *(undefined4 *)(param_1 + 0x180);
  *(undefined4 *)(in_ECX + 0x184) = *(undefined4 *)(param_1 + 0x184);
  *(undefined4 *)(in_ECX + 0x188) = *(undefined4 *)(param_1 + 0x188);
  *(undefined4 *)(in_ECX + 0x18c) = *(undefined4 *)(param_1 + 0x18c);
  *(undefined4 *)(in_ECX + 400) = *(undefined4 *)(param_1 + 400);
  thunk_FUN_10423f00(param_1 + 0x194);
  *(undefined4 *)(in_ECX + 0x1a4) = *(undefined4 *)(param_1 + 0x1a4);
  thunk_FUN_10423210();
  thunk_FUN_10424030(param_1 + 0x1a8);
  *(undefined4 *)(in_ECX + 0x1b8) = *(undefined4 *)(param_1 + 0x1b8);
  thunk_FUN_104239a0();
  return;
}


// ==== 10434190 FUN_10434190

void FUN_10434190(void)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_108107d8;
  local_c = ExceptionList;
  local_4 = 0xffffffff;
  ExceptionList = &local_c;
  thunk_FUN_10433c80();
  ExceptionList = local_c;
  return;
}


// ==== 104341e0 FUN_104341e0

void FUN_104341e0(void)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_108107f8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  thunk_FUN_10433b90();
  ExceptionList = local_c;
  return;
}


// ==== 10434230 FUN_10434230

void FUN_10434230(undefined4 param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10810818;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  thunk_FUN_10433850(param_1);
  ExceptionList = local_c;
  return;
}


// ==== 10434290 FUN_10434290

void FUN_10434290(undefined4 param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10810838;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  thunk_FUN_10433c00(param_1);
  ExceptionList = local_c;
  return;
}


// ==== 104342f0 FUN_104342f0

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
    *(float *)(*(int *)(pUVar10 + 0x204) + 0x6b8) = (float)*(int *)(pUVar10 + 0x23c) / 333.0;
    *(float *)(*(int *)(pUVar10 + 0x204) + 0x6bc) = (float)*(int *)(pUVar10 + 0x2ac) / 333.0;
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


// ==== 104366f0 FUN_104366f0

/* WARNING: Type propagation algorithm not settling */

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
      *(float *)(*(int *)(pUVar9 + 0x204) + 0x6b8) = (float)*(int *)(pUVar9 + 0x23c) / 333.0;
      *(float *)(*(int *)(pUVar9 + 0x204) + 0x6bc) = (float)*(int *)(pUVar9 + 0x2ac) / 333.0;
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
    fStack_e4 = *(float *)(iVar12 + 0x1c4) + pfVar15[2] + 50.0;
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


// ==== 104381b0 FUN_104381b0

uint FUN_104381b0(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  undefined4 uVar8;
  uint extraout_EAX;
  bool bVar9;
  undefined1 auStack_24 [4];
  undefined4 uStack_20;
  int *piStack_1c;
  int *piStack_18;
  int iStack_14;
  undefined4 uStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_10810960;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  thunk_FUN_104026b0(*(undefined4 *)(param_1 + 0x48),param_2,&DAT_1087ff44,auStack_24,&uStack_20);
  iVar6 = DAT_10b1f538;
  if (DAT_10b1f538 != 0) {
    piVar7 = (int *)(DAT_10b1f538 + 0x194);
    iVar3 = thunk_FUN_104226e0(auStack_24);
    if ((((iVar3 == 0) || (piVar4 = (int *)thunk_FUN_104226e0(auStack_24), *piVar4 != 1)) ||
        (iVar3 = thunk_FUN_104226e0(auStack_24), *(int *)(iVar3 + 4) == 0)) ||
       (iVar3 = thunk_FUN_104226e0(auStack_24), *(int *)(iVar3 + 4) == 0)) {
      iVar3 = thunk_FUN_104226e0(auStack_24);
      if (((iVar3 == 0) || (piVar4 = (int *)thunk_FUN_104226e0(auStack_24), *piVar4 != 2)) ||
         ((iVar3 = thunk_FUN_104226e0(auStack_24), *(int *)(iVar3 + 4) == 0 ||
          (iVar3 = thunk_FUN_104226e0(auStack_24), *(int *)(iVar3 + 4) == 0)))) {
        iVar3 = thunk_FUN_104226e0(auStack_24);
        if (((iVar3 == 0) || (piVar7 = (int *)thunk_FUN_104226e0(auStack_24), *piVar7 != 3)) ||
           ((iVar3 = thunk_FUN_104226e0(auStack_24), *(int *)(iVar3 + 4) == 0 ||
            (iVar3 = thunk_FUN_104226e0(auStack_24), *(int *)(iVar3 + 4) == 0)))) {
          iVar3 = thunk_FUN_104226e0(auStack_24);
          if ((((iVar3 == 0) || (piVar7 = (int *)thunk_FUN_104226e0(auStack_24), *piVar7 != 4)) ||
              (iVar3 = thunk_FUN_104226e0(auStack_24), *(int *)(iVar3 + 4) == 0)) ||
             (iVar3 = thunk_FUN_104226e0(auStack_24), *(int *)(iVar3 + 4) == 0)) {
            iVar3 = thunk_FUN_104226e0(auStack_24);
            if ((((iVar3 == 0) || (piVar7 = (int *)thunk_FUN_104226e0(auStack_24), *piVar7 != 5)) ||
                (iVar3 = thunk_FUN_104226e0(auStack_24), *(int *)(iVar3 + 4) == 0)) ||
               (iVar3 = thunk_FUN_104226e0(auStack_24), *(int *)(iVar3 + 4) == 0))
            goto LAB_104389db;
            iVar3 = thunk_FUN_104226e0(auStack_24);
            if (((iVar3 == 0) || (piVar7 = (int *)thunk_FUN_104226e0(auStack_24), *piVar7 != 5)) ||
               (iVar3 = thunk_FUN_104226e0(auStack_24), *(int *)(iVar3 + 4) == 0)) {
              iVar3 = 0;
            }
            else {
              iVar3 = thunk_FUN_104226e0(auStack_24);
              iVar3 = *(int *)(iVar3 + 4);
            }
            (**(code **)(**(int **)(iVar6 + 0x54) + 0x6f8))(iVar3,0);
            if (iVar3 != 0) {
              thunk_FUN_1042f860(1);
            }
            if ((DAT_10b1f538 == 0) || (iVar6 = thunk_FUN_104226e0(auStack_24), iVar6 == 0))
            goto LAB_104389db;
            piVar7 = (int *)thunk_FUN_104226e0(auStack_24);
            bVar9 = *piVar7 == 5;
          }
          else {
            iVar3 = thunk_FUN_104226e0(auStack_24);
            if (((iVar3 == 0) || (piVar7 = (int *)thunk_FUN_104226e0(auStack_24), *piVar7 != 4)) ||
               (iVar3 = thunk_FUN_104226e0(auStack_24), *(int *)(iVar3 + 4) == 0)) {
              iVar3 = 0;
            }
            else {
              iVar3 = thunk_FUN_104226e0(auStack_24);
              iVar3 = *(int *)(iVar3 + 4);
            }
            (**(code **)(**(int **)(iVar6 + 0x54) + 0x650))(iVar3);
            if (iVar3 != 0) {
              thunk_FUN_103254a0(iVar3);
            }
            if ((DAT_10b1f538 == 0) || (iVar6 = thunk_FUN_104226e0(auStack_24), iVar6 == 0))
            goto LAB_104389db;
            piVar7 = (int *)thunk_FUN_104226e0(auStack_24);
            bVar9 = *piVar7 == 4;
          }
        }
        else {
          iVar3 = thunk_FUN_104226e0(auStack_24);
          if (((iVar3 == 0) || (piVar7 = (int *)thunk_FUN_104226e0(auStack_24), *piVar7 != 3)) ||
             (iVar3 = thunk_FUN_104226e0(auStack_24), *(int *)(iVar3 + 4) == 0)) {
            iVar3 = 0;
          }
          else {
            iVar3 = thunk_FUN_104226e0(auStack_24);
            iVar3 = *(int *)(iVar3 + 4);
          }
          (**(code **)(**(int **)(iVar6 + 0x54) + 0x2a0))(iVar3);
          if (iVar3 != 0) {
            (**(code **)(**(int **)GMalloc_exref + 8))(iVar3);
          }
          if ((DAT_10b1f538 == 0) || (iVar6 = thunk_FUN_104226e0(auStack_24), iVar6 == 0))
          goto LAB_104389db;
          piVar7 = (int *)thunk_FUN_104226e0(auStack_24);
          bVar9 = *piVar7 == 3;
        }
        if (!bVar9) goto LAB_104389db;
        uVar8 = thunk_FUN_104226e0(auStack_24);
        thunk_FUN_103254a0(uVar8);
      }
      else {
        iVar3 = thunk_FUN_104226e0(auStack_24);
        if (((iVar3 == 0) || (piVar4 = (int *)thunk_FUN_104226e0(auStack_24), *piVar4 != 2)) ||
           (iVar3 = thunk_FUN_104226e0(auStack_24), *(int *)(iVar3 + 4) == 0)) {
          iVar3 = 0;
        }
        else {
          iVar3 = thunk_FUN_104226e0(auStack_24);
          iVar3 = *(int *)(iVar3 + 4);
        }
        if (iVar3 != -0x10) {
          iStack_14 = 0;
          uStack_10 = 0;
          uStack_4 = 1;
          piStack_1c = piVar7;
          piStack_18 = piVar7;
          if (0 < *(int *)(iVar6 + 0x198)) {
            do {
              iVar2 = iStack_14;
              piVar4 = *(int **)(*piVar7 + 8 + iStack_14 * 0xc);
              if ((((piVar4 != (int *)0x0) && (*piVar4 == 1)) && (iVar1 = piVar4[1], iVar1 != 0)) &&
                 (*(int *)(iVar1 + 0x204) != 0)) {
                iVar5 = (**(code **)(**(int **)(*(int *)(iVar1 + 0x204) + 0x14d8) + 0x35c))();
                if ((iVar5 != 0) &&
                   ((iVar5 = (**(code **)(**(int **)(*(int *)(iVar1 + 0x204) + 0x14d8) + 0x35c))(),
                    iVar5 == *(int *)(iVar3 + 0x10) ||
                    (iVar5 = (**(code **)(**(int **)(*(int *)(iVar1 + 0x204) + 0x14d8) + 0x35c))(),
                    iVar5 == *(int *)(iVar3 + 0x14))))) {
                  (**(code **)(**(int **)(*(int *)(iVar1 + 0x204) + 0x14d8) + 0x360))(0);
                }
                iVar5 = *(int *)(*(int *)(*(int *)(iVar1 + 0x204) + 0x14d8) + 0x3f0);
                if (((iVar5 != 0) && (iVar5 == *(int *)(iVar3 + 0x10))) &&
                   (iVar5 == *(int *)(iVar3 + 0x14))) {
                  (**(code **)(**(int **)(*(int *)(iVar1 + 0x204) + 0x14d8) + 800))();
                }
              }
              iStack_14 = iVar2 + 1;
            } while (iStack_14 < *(int *)(iVar6 + 0x198));
          }
          uStack_4 = 0xffffffff;
          thunk_FUN_1042cca0();
          iVar6 = DAT_10b1f538;
        }
        (**(code **)(**(int **)(iVar6 + 0x54) + 0x250))(iVar3);
        (**(code **)(**(int **)GMalloc_exref + 8))(iVar3);
        if (((DAT_10b1f538 == 0) || (iVar6 = thunk_FUN_104226e0(auStack_24), iVar6 == 0)) ||
           (piVar7 = (int *)thunk_FUN_104226e0(auStack_24), *piVar7 != 2)) goto LAB_104389db;
        iVar6 = **(int **)GMalloc_exref;
        uVar8 = thunk_FUN_104226e0(auStack_24);
        (**(code **)(iVar6 + 8))(uVar8);
      }
      thunk_FUN_1042c470(auStack_24);
    }
    else {
      iVar3 = thunk_FUN_104226e0(auStack_24);
      if (((iVar3 == 0) || (piVar4 = (int *)thunk_FUN_104226e0(auStack_24), *piVar4 != 1)) ||
         (iVar3 = thunk_FUN_104226e0(auStack_24), *(int *)(iVar3 + 4) == 0)) {
        iVar3 = 0;
      }
      else {
        iVar3 = thunk_FUN_104226e0(auStack_24);
        iVar3 = *(int *)(iVar3 + 4);
      }
      if (*(int *)(iVar3 + 0x204) != 0) {
        iStack_14 = 0;
        uStack_10 = 0;
        uStack_4 = 0;
        piStack_1c = piVar7;
        piStack_18 = piVar7;
        if (0 < *(int *)(iVar6 + 0x198)) {
          do {
            iVar2 = iStack_14;
            piVar4 = *(int **)(*piVar7 + 8 + iStack_14 * 0xc);
            if (((piVar4 != (int *)0x0) && (*piVar4 == 1)) &&
               ((iVar1 = piVar4[1], iVar1 != 0 &&
                ((iVar5 = *(int *)(iVar1 + 0x204), iVar5 != 0 && (*(int *)(iVar5 + 0x14d8) != 0)))))
               ) {
              iVar5 = (**(code **)(**(int **)(iVar5 + 0x14d8) + 0x35c))();
              if ((iVar5 != 0) &&
                 (iVar5 = (**(code **)(**(int **)(*(int *)(iVar1 + 0x204) + 0x14d8) + 0x35c))(),
                 iVar5 == *(int *)(iVar3 + 0x204))) {
                (**(code **)(**(int **)(*(int *)(iVar1 + 0x204) + 0x14d8) + 0x360))(0);
              }
              iVar5 = *(int *)(*(int *)(*(int *)(iVar1 + 0x204) + 0x14d8) + 0x3f0);
              if ((iVar5 != 0) && (iVar5 == *(int *)(iVar3 + 0x204))) {
                (**(code **)(**(int **)(*(int *)(iVar1 + 0x204) + 0x14d8) + 800))();
              }
              iVar5 = *(int *)(*(int *)(iVar1 + 0x204) + 0x63c);
              if ((iVar5 != 0) && (iVar5 == *(int *)(iVar3 + 0x204))) {
                *(undefined4 *)(*(int *)(iVar1 + 0x204) + 0x63c) = 0;
                APawn::DisableSpineRotation(*(APawn **)(iVar1 + 0x204));
              }
            }
            iStack_14 = iVar2 + 1;
          } while (iStack_14 < *(int *)(iVar6 + 0x198));
        }
        uStack_4 = 0xffffffff;
        iVar6 = DAT_10b1f538;
      }
      (**(code **)(**(int **)(iVar6 + 0x54) + 0x24c))(iVar3,1,uStack_20);
      if (*(int *)(iVar3 + 0x18) == *(int *)(*(int *)(puStack_8 + 0x48) + 0x4f68)) {
        (**(code **)(**(int **)(DAT_10b1f538 + 0x54) + 0x4f8))(1);
        (**(code **)(**(int **)(DAT_10b1f538 + 0x54) + 0x4f8))(2);
      }
      (**(code **)(**(int **)GMalloc_exref + 8))(iVar3);
      if (((DAT_10b1f538 != 0) && (iVar6 = thunk_FUN_104226e0(auStack_24), iVar6 != 0)) &&
         (piVar7 = (int *)thunk_FUN_104226e0(auStack_24), *piVar7 == 1)) {
        iVar6 = **(int **)GMalloc_exref;
        uVar8 = thunk_FUN_104226e0(auStack_24);
        (**(code **)(iVar6 + 8))(uVar8);
        thunk_FUN_1042c470(auStack_24);
      }
      thunk_FUN_1042c850(auStack_24);
    }
  }
LAB_104389db:
  FOutputDevice::Logf(*(FOutputDevice **)GNetworkLog_exref,
                      (ushort *)*(FOutputDevice **)GNetworkLog_exref);
  ExceptionList = puStack_8;
  return extraout_EAX & 0xffffff00;
}


// ==== 10438c20 FUN_10438c20

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


// ==== 10438df0 FUN_10438df0

uint FUN_10438df0(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  uint extraout_EAX;
  int iVar2;
  L2ParamStack aLStack_168 [16];
  int iStack_158;
  void *pvStack_154;
  L2ParamStack aLStack_150 [16];
  void *pvStack_140;
  void *pvStack_13c;
  void *pvStack_138;
  void *pvStack_134;
  void *pvStack_130;
  void *pvStack_12c;
  undefined1 auStack_128 [4];
  void *pvStack_124;
  short asStack_120 [24];
  undefined1 auStack_f0 [48];
  void *pvStack_c0;
  uint uStack_bc;
  uint uStack_b8;
  void *pvStack_b4;
  void *pvStack_b0;
  void *pvStack_ac;
  void *pvStack_a8;
  void *apvStack_a4 [6];
  void *pvStack_8c;
  undefined1 auStack_88 [48];
  void *pvStack_58;
  void *pvStack_54;
  void *pvStack_50;
  void *apvStack_4c [4];
  undefined1 auStack_3c [48];
  void *pvStack_c;
  undefined1 *puStack_8;
  int iStack_4;
  
  iStack_4 = 0xffffffff;
  puStack_8 = &LAB_10810988;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  thunk_FUN_103ff760();
  uVar1 = thunk_FUN_104026b0(*(undefined4 *)(param_1 + 0x48),param_2,"dddSS",auStack_128,
                             &pvStack_124,&pvStack_154,0x30,asStack_120,0x30,auStack_f0);
  if ((pvStack_124 != (void *)0x0) && (asStack_120[0] != 0)) {
    uVar1 = thunk_FUN_104026b0(*(undefined4 *)(param_1 + 0x48),uVar1,"dddddddddSdd",apvStack_a4,
                               &pvStack_c0,&pvStack_54,&pvStack_50,&pvStack_b4,&pvStack_b0,
                               &pvStack_ac,&pvStack_a8,&pvStack_8c,0x30,auStack_88,&pvStack_58,
                               apvStack_4c);
    uStack_bc = (uint)(0 < (int)pvStack_54);
    uStack_b8 = (uint)(0 < (int)pvStack_50);
    thunk_FUN_104317d0(pvStack_124,apvStack_a4[0],pvStack_8c,pvStack_58,0,pvStack_b0);
    L2ParamStack::L2ParamStack(aLStack_168,0x20);
    iStack_4 = 0;
    L2ParamStack::PushBack(aLStack_168,pvStack_124);
    L2ParamStack::PushBack(aLStack_168,pvStack_154);
    L2ParamStack::PushBack(aLStack_168,asStack_120);
    L2ParamStack::PushBack(aLStack_168,auStack_f0);
    L2ParamStack::PushBack(aLStack_168,apvStack_a4[0]);
    L2ParamStack::PushBack(aLStack_168,pvStack_c0);
    L2ParamStack::PushBack(aLStack_168,pvStack_54);
    L2ParamStack::PushBack(aLStack_168,pvStack_50);
    L2ParamStack::PushBack(aLStack_168,pvStack_b4);
    L2ParamStack::PushBack(aLStack_168,pvStack_b0);
    L2ParamStack::PushBack(aLStack_168,pvStack_ac);
    L2ParamStack::PushBack(aLStack_168,pvStack_a8);
    L2ParamStack::PushBack(aLStack_168,pvStack_8c);
    L2ParamStack::PushBack(aLStack_168,auStack_88);
    L2ParamStack::PushBack(aLStack_168,pvStack_58);
    L2ParamStack::PushBack(aLStack_168,apvStack_4c[0]);
    (**(code **)(**(int **)(DAT_10b1f538 + 0x54) + 0x328))(aLStack_168);
    uVar1 = thunk_FUN_104026b0(*(undefined4 *)(param_1 + 0x48),uVar1,&DAT_1087ff8c,&iStack_158);
    iVar2 = 0;
    if (0 < iStack_158) {
      do {
        L2ParamStack::L2ParamStack(aLStack_150,10);
        iStack_4._0_1_ = 1;
        L2ParamStack::PushBack(aLStack_150,pvStack_154);
        uVar1 = thunk_FUN_104026b0(*(undefined4 *)(param_1 + 0x48),uVar1,"Sdddddd",0x30,auStack_3c,
                                   &pvStack_130,&pvStack_12c,&pvStack_138,&pvStack_134,&pvStack_140,
                                   &pvStack_13c);
        L2ParamStack::PushBack(aLStack_150,auStack_3c);
        L2ParamStack::PushBack(aLStack_150,pvStack_130);
        L2ParamStack::PushBack(aLStack_150,pvStack_12c);
        L2ParamStack::PushBack(aLStack_150,pvStack_138);
        L2ParamStack::PushBack(aLStack_150,pvStack_134);
        L2ParamStack::PushBack(aLStack_150,pvStack_140);
        L2ParamStack::PushBack(aLStack_150,pvStack_13c);
        (**(code **)(**(int **)(DAT_10b1f538 + 0x54) + 0x348))(aLStack_150);
        iStack_4 = (uint)iStack_4._1_3_ << 8;
        L2ParamStack::~L2ParamStack(aLStack_150);
        iVar2 = iVar2 + 1;
      } while (iVar2 < iStack_158);
    }
    iStack_4 = 0xffffffff;
    L2ParamStack::~L2ParamStack(aLStack_168);
  }
  FOutputDevice::Logf(*(FOutputDevice **)GNetworkLog_exref,
                      (ushort *)*(FOutputDevice **)GNetworkLog_exref);
  ExceptionList = puStack_8;
  return extraout_EAX & 0xffffff00;
}


// ==== 10439280 FUN_10439280

uint FUN_10439280(int param_1,undefined4 param_2)

{
  uint extraout_EAX;
  undefined4 auStack_e8 [25];
  undefined1 auStack_84 [4];
  uint uStack_80;
  uint uStack_7c;
  undefined1 auStack_78 [4];
  undefined4 uStack_74;
  undefined1 auStack_70 [4];
  undefined1 auStack_6c [4];
  undefined4 auStack_68 [6];
  undefined4 uStack_50;
  undefined1 auStack_4c [48];
  undefined4 uStack_1c;
  int iStack_18;
  int iStack_14;
  undefined1 auStack_10 [4];
  undefined4 auStack_c [3];
  
  thunk_FUN_103ff760();
  thunk_FUN_104026b0(*(undefined4 *)(param_1 + 0x48),param_2,"ddddddddddSdd",auStack_e8,auStack_68,
                     auStack_84,&iStack_18,&iStack_14,auStack_78,&uStack_74,auStack_70,auStack_6c,
                     &uStack_50,0x30,auStack_4c,&uStack_1c,auStack_10,auStack_c);
  uStack_80 = (uint)(0 < iStack_18);
  uStack_7c = (uint)(0 < iStack_14);
  thunk_FUN_104317d0(auStack_e8[0],auStack_68[0],uStack_50,uStack_1c,auStack_c[0],uStack_74);
  (**(code **)(**(int **)(DAT_10b1f538 + 0x54) + 0x32c))(auStack_e8);
  FOutputDevice::Logf(*(FOutputDevice **)GNetworkLog_exref,
                      (ushort *)*(FOutputDevice **)GNetworkLog_exref);
  return extraout_EAX & 0xffffff00;
}


// ==== 10439400 FUN_10439400

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


// ==== 104397b0 FUN_104397b0

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


// ==== 10439a10 FUN_10439a10

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


// ==== 10439ac0 FUN_10439ac0

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


// ==== 10439c20 FUN_10439c20

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


// ==== 10439d23 Catch@10439d23

void Catch_10439d23(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x2c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_10914c48);
}


// ==== 10439d37 Catch@10439d37

void Catch_10439d37(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"TEXT(\"RestartResponsePacket Function\")");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10439db0 FUN_10439db0

uint FUN_10439db0(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  void *pvStack_108;
  L2ParamStack aLStack_104 [16];
  int iStack_f4;
  void *pvStack_f0;
  int iStack_ec;
  void *pvStack_e8;
  void *pvStack_e4;
  uint uStack_e0;
  void *pvStack_dc;
  undefined1 auStack_d8 [4];
  undefined1 auStack_d4 [4];
  undefined1 auStack_d0 [4];
  undefined1 auStack_cc [48];
  undefined1 auStack_9c [48];
  undefined1 auStack_6c [48];
  undefined1 auStack_3c [48];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_10810a6c;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  uVar1 = thunk_FUN_104026b0(*(undefined4 *)(param_1 + 0x48),param_2,"dddddd",auStack_d8,auStack_d4,
                             &uStack_e0,&iStack_ec,auStack_d0,&iStack_f4);
  if (iStack_ec == 0) {
    (**(code **)(**(int **)(DAT_10b1f538 + 0x54) + 0x61c))();
  }
  iVar2 = 0;
  if (0 < iStack_f4) {
    do {
      uVar1 = thunk_FUN_104026b0(*(undefined4 *)(param_1 + 0x48),uVar1,"dSSdddSSd",&pvStack_108,0x30
                                 ,auStack_cc,0x30,auStack_6c,&pvStack_f0,&pvStack_dc,&pvStack_e8,
                                 0x30,auStack_9c,0x30,auStack_3c,&pvStack_e4);
      L2ParamStack::L2ParamStack(aLStack_104,10);
      uStack_4 = 0;
      L2ParamStack::PushBack(aLStack_104,pvStack_108);
      L2ParamStack::PushBack(aLStack_104,auStack_cc);
      L2ParamStack::PushBack(aLStack_104,auStack_6c);
      L2ParamStack::PushBack(aLStack_104,pvStack_f0);
      L2ParamStack::PushBack(aLStack_104,pvStack_dc);
      L2ParamStack::PushBack(aLStack_104,pvStack_e8);
      L2ParamStack::PushBack(aLStack_104,auStack_9c);
      L2ParamStack::PushBack(aLStack_104,auStack_3c);
      L2ParamStack::PushBack(aLStack_104,pvStack_e4);
      thunk_FUN_104317d0(pvStack_108,pvStack_f0,pvStack_e8,pvStack_e4,0,0x80000000);
      (**(code **)(**(int **)(DAT_10b1f538 + 0x54) + 0x608))(aLStack_104);
      uStack_4 = 0xffffffff;
      L2ParamStack::~L2ParamStack(aLStack_104);
      iVar2 = iVar2 + 1;
    } while (iVar2 < iStack_f4);
  }
  if ((iStack_ec == uStack_e0 - 1) || (uStack_e0 == 0)) {
    uStack_e0 = (**(code **)(**(int **)(DAT_10b1f538 + 0x54) + 0x614))();
  }
  ExceptionList = pvStack_c;
  return uStack_e0 & 0xffffff00;
}


// ==== 1043a030 FUN_1043a030

uint FUN_1043a030(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  L2ParamStack aLStack_10c [16];
  void *pvStack_fc;
  int iStack_f8;
  void *pvStack_f4;
  int iStack_f0;
  void *pvStack_ec;
  void *pvStack_e8;
  uint uStack_e4;
  void *pvStack_e0;
  void *pvStack_dc;
  undefined1 auStack_d8 [4];
  undefined1 auStack_d4 [4];
  undefined1 auStack_d0 [4];
  undefined1 auStack_cc [48];
  undefined1 auStack_9c [48];
  undefined1 auStack_6c [48];
  undefined1 auStack_3c [48];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_10810a8c;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  uVar1 = thunk_FUN_104026b0(*(undefined4 *)(param_1 + 0x48),param_2,"dddddd",auStack_d8,auStack_d4,
                             &uStack_e4,&iStack_f0,auStack_d0,&iStack_f8);
  if (iStack_f0 == 0) {
    (**(code **)(**(int **)(DAT_10b1f538 + 0x54) + 0x620))();
  }
  iVar2 = 0;
  if (0 < iStack_f8) {
    do {
      uVar1 = thunk_FUN_104026b0(*(undefined4 *)(param_1 + 0x48),uVar1,"dSSddddSSd",&pvStack_fc,0x30
                                 ,auStack_cc,0x30,auStack_6c,&pvStack_f4,&pvStack_dc,&pvStack_e0,
                                 &pvStack_ec,0x30,auStack_9c,0x30,auStack_3c,&pvStack_e8);
      L2ParamStack::L2ParamStack(aLStack_10c,10);
      uStack_4 = 0;
      L2ParamStack::PushBack(aLStack_10c,pvStack_fc);
      L2ParamStack::PushBack(aLStack_10c,auStack_cc);
      L2ParamStack::PushBack(aLStack_10c,auStack_6c);
      L2ParamStack::PushBack(aLStack_10c,pvStack_f4);
      L2ParamStack::PushBack(aLStack_10c,pvStack_dc);
      L2ParamStack::PushBack(aLStack_10c,pvStack_e0);
      L2ParamStack::PushBack(aLStack_10c,pvStack_ec);
      L2ParamStack::PushBack(aLStack_10c,auStack_9c);
      L2ParamStack::PushBack(aLStack_10c,auStack_3c);
      L2ParamStack::PushBack(aLStack_10c,pvStack_e8);
      thunk_FUN_104317d0(pvStack_fc,pvStack_f4,pvStack_ec,pvStack_e8,0,0x80000000);
      (**(code **)(**(int **)(DAT_10b1f538 + 0x54) + 0x60c))(aLStack_10c);
      uStack_4 = 0xffffffff;
      L2ParamStack::~L2ParamStack(aLStack_10c);
      iVar2 = iVar2 + 1;
    } while (iVar2 < iStack_f8);
  }
  if ((iStack_f0 == uStack_e4 - 1) || (uStack_e4 == 0)) {
    uStack_e4 = (**(code **)(**(int **)(DAT_10b1f538 + 0x54) + 0x618))();
  }
  ExceptionList = pvStack_c;
  return uStack_e4 & 0xffffff00;
}


// ==== 1043a2d0 FUN_1043a2d0

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


// ==== 1043a470 FUN_1043a470

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


// ==== 1043b6b0 FUN_1043b6b0

void FUN_1043b6b0(void)

{
  UObject *in_ECX;
  
  if (*(SOCKET *)(in_ECX + 0x38) != 0) {
    closesocket(*(SOCKET *)(in_ECX + 0x38));
    DeleteCriticalSection((LPCRITICAL_SECTION)(in_ECX + 0x4efc));
  }
  *(undefined4 *)(in_ECX + 0x38) = 0;
  if (*(int *)(in_ECX + 0x495c) != 0) {
    *(undefined4 *)(in_ECX + 0x495c) = 0;
    DAT_10b1f53c = 0;
  }
  thunk_FUN_10431700();
  *(undefined4 *)(in_ECX + 0x4f40) = 0;
  *(undefined4 *)(in_ECX + 0x4f44) = 0;
  FArray::Realloc((FArray *)(in_ECX + 0x4f3c),0xc);
  *(undefined4 *)(in_ECX + 0x4f4c) = 8;
  thunk_FUN_10423040();
  thunk_FUN_104319c0();
                    /* WARNING: Could not recover jumptable at 0x1043b720. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  UObject::Destroy(in_ECX);
  return;
}


// ==== 1043b750 FUN_1043b750

void FUN_1043b750(void)

{
  int in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10810ae0;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  thunk_FUN_104336b0();
  local_4 = 1;
  appMemset((void *)(in_ECX + 0x14),0,0x80);
  ExceptionList = local_c;
  return;
}


// ==== 1043b7c0 FUN_1043b7c0

void FUN_1043b7c0(void)

{
  UObject *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_10810b6f;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)in_ECX = CClientSocket::vftable;
  local_4 = 5;
  UObject::ConditionalDestroy(in_ECX);
  local_4._1_3_ = (uint3)((uint)local_4 >> 8);
  local_4._0_1_ = 4;
  thunk_FUN_10433720();
  local_4._0_1_ = 3;
  thunk_FUN_10433ad0();
  local_4._0_1_ = 2;
  thunk_FUN_10433720();
  local_4._0_1_ = 1;
  thunk_FUN_104339d0();
  local_4 = (uint)local_4._1_3_ << 8;
  thunk_FUN_104338d0();
  local_4 = 0xffffffff;
  UObject::~UObject(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 1043b8d0 FUN_1043b8d0

void FUN_1043b8d0(void)

{
  UObject *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10810c0f;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UObject::UObject(in_ECX);
  local_4 = 0;
  *(undefined ***)in_ECX = CClientSocket::vftable;
  thunk_FUN_104337e0();
  local_4._0_1_ = 2;
  thunk_FUN_10433960();
  local_4._0_1_ = 4;
  thunk_FUN_104336b0();
  local_4._0_1_ = 6;
  thunk_FUN_10433a60();
  local_4._0_1_ = 8;
  *(undefined2 *)(in_ECX + 0x4f6c) = 0;
  *(undefined4 *)(in_ECX + 0x5010) = 0;
  *(undefined4 *)(in_ECX + 0x4f68) = 0xffffffff;
  *(undefined4 *)(in_ECX + 0x5018) = 0;
  thunk_FUN_1043b750();
  local_4 = CONCAT31(local_4._1_3_,9);
  in_ECX[0x50c0] = (UObject)0x0;
  *(undefined4 *)(in_ECX + 0x50c1) = 0;
  *(undefined4 *)(in_ECX + 0x50c5) = 0;
  *(undefined4 *)(in_ECX + 0x50c9) = 0;
  *(undefined4 *)(in_ECX + 0x50cd) = 0;
  in_ECX[0x50d1] = (UObject)0x0;
  *(undefined4 *)(in_ECX + 0x50d2) = 0;
  *(undefined4 *)(in_ECX + 0x50d6) = 0;
  *(undefined4 *)(in_ECX + 0x50da) = 0;
  *(undefined4 *)(in_ECX + 0x50de) = 0;
  thunk_FUN_10401ba0();
  *(undefined4 *)(in_ECX + 0x50bc) = 0;
  *(undefined4 *)(in_ECX + 0x4ef0) = 0;
  *(undefined4 *)(in_ECX + 0x4ef4) = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(in_ECX + 0x4efc));
  thunk_FUN_10420360();
  *(undefined4 *)(in_ECX + 0x4ef8) = 0;
  ExceptionList = local_c;
  return;
}


// ==== 1043ba70 FUN_1043ba70

void FUN_1043ba70(byte param_1)

{
  void *in_ECX;
  
  thunk_FUN_1043b7c0();
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x5bf4);
  }
  return;
}


// ==== 1043baa0 FUN_1043baa0

void FUN_1043baa0(void)

{
  UObject *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_10810c7f;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)in_ECX = UNetworkHandler::vftable_for_UObject_;
  *(undefined ***)(in_ECX + 0x34) = UNetworkHandler::vftable_for_FExec_;
  local_4 = 3;
  UObject::ConditionalDestroy(in_ECX);
  local_4._1_3_ = (uint3)((uint)local_4 >> 8);
  local_4._0_1_ = 2;
  thunk_FUN_10433c80();
  local_4._0_1_ = 1;
  thunk_FUN_104338d0();
  local_4 = (uint)local_4._1_3_ << 8;
  thunk_FUN_1042c710();
  local_4 = 0xffffffff;
  UL2NetHandler::~UL2NetHandler((UL2NetHandler *)in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 1043bb60 FUN_1043bb60

void FUN_1043bb60(void)

{
  UL2NetHandler *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10810ce8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UL2NetHandler::UL2NetHandler(in_ECX);
  *(undefined ***)in_ECX = UNetworkHandler::vftable_for_UObject_;
  *(undefined ***)(in_ECX + 0x34) = UNetworkHandler::vftable_for_FExec_;
  *(undefined4 *)(in_ECX + 0x3c) = 0;
  *(undefined4 *)(in_ECX + 0x40) = 0;
  *(undefined4 *)(in_ECX + 0x44) = 0;
  local_4._0_1_ = 2;
  local_4._1_3_ = 0;
  thunk_FUN_104337e0();
  local_4 = CONCAT31(local_4._1_3_,4);
  thunk_FUN_10433b90();
  ExceptionList = local_c;
  return;
}


// ==== 1043bc10 FUN_1043bc10

void FUN_1043bc10(UL2NetHandler *param_1)

{
  UL2NetHandler *in_ECX;
  int iVar1;
  UL2NetHandler *pUVar2;
  UL2NetHandler *pUVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10810d4f;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UL2NetHandler::UL2NetHandler(in_ECX,param_1);
  local_4 = 0;
  *(undefined ***)in_ECX = UNetworkHandler::vftable_for_UObject_;
  *(undefined ***)(in_ECX + 0x34) = UNetworkHandler::vftable_for_FExec_;
  *(undefined4 *)(in_ECX + 0x38) = *(undefined4 *)(param_1 + 0x38);
  thunk_FUN_10422860(param_1 + 0x3c);
  local_4._0_1_ = 1;
  *(undefined4 *)(in_ECX + 0x48) = *(undefined4 *)(param_1 + 0x48);
  *(undefined4 *)(in_ECX + 0x4c) = *(undefined4 *)(param_1 + 0x4c);
  *(undefined4 *)(in_ECX + 0x50) = *(undefined4 *)(param_1 + 0x50);
  *(undefined4 *)(in_ECX + 0x54) = *(undefined4 *)(param_1 + 0x54);
  *(undefined4 *)(in_ECX + 0x58) = *(undefined4 *)(param_1 + 0x58);
  *(undefined4 *)(in_ECX + 0x5c) = *(undefined4 *)(param_1 + 0x5c);
  *(undefined4 *)(in_ECX + 0x60) = *(undefined4 *)(param_1 + 0x60);
  pUVar2 = param_1 + 100;
  pUVar3 = in_ECX + 100;
  for (iVar1 = 0x20; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)pUVar3 = *(undefined4 *)pUVar2;
    pUVar2 = pUVar2 + 4;
    pUVar3 = pUVar3 + 4;
  }
  *(undefined4 *)(in_ECX + 0xe4) = *(undefined4 *)(param_1 + 0xe4);
  pUVar2 = param_1 + 0xe8;
  pUVar3 = in_ECX + 0xe8;
  for (iVar1 = 0x20; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)pUVar3 = *(undefined4 *)pUVar2;
    pUVar2 = pUVar2 + 4;
    pUVar3 = pUVar3 + 4;
  }
  *pUVar3 = *pUVar2;
  *(undefined4 *)(in_ECX + 0x16c) = *(undefined4 *)(param_1 + 0x16c);
  *(undefined4 *)(in_ECX + 0x170) = *(undefined4 *)(param_1 + 0x170);
  *(undefined4 *)(in_ECX + 0x174) = *(undefined4 *)(param_1 + 0x174);
  *(undefined4 *)(in_ECX + 0x178) = *(undefined4 *)(param_1 + 0x178);
  *(undefined4 *)(in_ECX + 0x17c) = *(undefined4 *)(param_1 + 0x17c);
  *(undefined4 *)(in_ECX + 0x180) = *(undefined4 *)(param_1 + 0x180);
  *(undefined4 *)(in_ECX + 0x184) = *(undefined4 *)(param_1 + 0x184);
  *(undefined4 *)(in_ECX + 0x188) = *(undefined4 *)(param_1 + 0x188);
  *(undefined4 *)(in_ECX + 0x18c) = *(undefined4 *)(param_1 + 0x18c);
  *(undefined4 *)(in_ECX + 400) = *(undefined4 *)(param_1 + 400);
  thunk_FUN_10433850(param_1 + 0x194);
  local_4 = CONCAT31(local_4._1_3_,3);
  thunk_FUN_10433c00(param_1 + 0x1a8);
  ExceptionList = local_c;
  return;
}


// ==== 1043bdf0 FUN_1043bdf0

void FUN_1043bdf0(byte param_1)

{
  UNetworkHandler *in_ECX;
  
  UNetworkHandler::~UNetworkHandler(in_ECX);
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x1bc);
  }
  return;
}


// ==== 1043be20 FUN_1043be20

UNetworkHandler * FUN_1043be20(byte param_1)

{
  UNetworkHandler *in_ECX;
  
  if ((param_1 & 2) != 0) {
    _eh_vector_destructor_iterator_
              (in_ECX,0x1bc,*(int *)(in_ECX + -4),UNetworkHandler::~UNetworkHandler);
    if ((param_1 & 1) != 0) {
      (**(code **)(**(int **)GMalloc_exref + 8))(in_ECX + -4);
    }
    return in_ECX + -4;
  }
  UNetworkHandler::~UNetworkHandler(in_ECX);
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x1bc);
  }
  return in_ECX;
}


// ==== 1043bea0 FUN_1043bea0

void FUN_1043bea0(undefined4 param_1)

{
  UObject *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10810ddf;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UObject::UObject(in_ECX);
  local_4 = 0;
  *(undefined ***)in_ECX = CClientSocket::vftable;
  thunk_FUN_104337e0();
  local_4._0_1_ = 2;
  thunk_FUN_10433960();
  local_4._0_1_ = 4;
  thunk_FUN_104336b0();
  local_4._0_1_ = 6;
  thunk_FUN_10433a60();
  local_4._0_1_ = 8;
  *(undefined2 *)(in_ECX + 0x4f6c) = 0;
  *(undefined4 *)(in_ECX + 0x5010) = 0;
  *(undefined4 *)(in_ECX + 0x4f68) = 0xffffffff;
  *(undefined4 *)(in_ECX + 0x5018) = 0;
  thunk_FUN_1043b750();
  local_4 = CONCAT31(local_4._1_3_,9);
  in_ECX[0x50c0] = (UObject)0x0;
  *(undefined4 *)(in_ECX + 0x50c1) = 0;
  *(undefined4 *)(in_ECX + 0x50c5) = 0;
  *(undefined4 *)(in_ECX + 0x50c9) = 0;
  *(undefined4 *)(in_ECX + 0x50cd) = 0;
  in_ECX[0x50d1] = (UObject)0x0;
  *(undefined4 *)(in_ECX + 0x50d2) = 0;
  *(undefined4 *)(in_ECX + 0x50d6) = 0;
  *(undefined4 *)(in_ECX + 0x50da) = 0;
  *(undefined4 *)(in_ECX + 0x50de) = 0;
  thunk_FUN_10401ba0();
  *(undefined4 *)(in_ECX + 0x4960) = 0;
  *(undefined4 *)(in_ECX + 0x4964) = 0;
  *(undefined4 *)(in_ECX + 0x34) = param_1;
  *(undefined4 *)(in_ECX + 0x38) = 0;
  *(undefined4 *)(in_ECX + 0x4850) = 0;
  *(undefined4 *)(in_ECX + 0x4854) = 0;
  *(undefined4 *)(in_ECX + 0x4958) = 0;
  *(undefined4 *)(in_ECX + 0x495c) = 0;
  *(undefined4 *)(in_ECX + 0x4968) = 0;
  *(undefined4 *)(in_ECX + 0x496c) = 0;
  *(undefined4 *)(in_ECX + 0x4970) = 0;
  *(undefined4 *)(in_ECX + 0x4974) = 0;
  *(undefined4 *)(in_ECX + 0x4978) = 0;
  *(undefined4 *)(in_ECX + 0x497c) = 0;
  thunk_FUN_10420360();
  ExceptionList = local_c;
  return;
}


// ==== 1043c080 FUN_1043c080

void FUN_1043c080(void)

{
  undefined4 *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10810e26;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  thunk_FUN_1043b8d0();
  local_4 = 0;
  *in_ECX = CAuthSocket::vftable;
  FBlowFish::FBlowFish((FBlowFish *)(in_ECX + 0x16fd));
  thunk_FUN_103ff530();
  in_ECX[0x142f] = 1;
  in_ECX[0x142e] = 1;
  ExceptionList = local_c;
  return;
}


// ==== 1043c120 FUN_1043c120

void FUN_1043c120(void)

{
  UObject *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_10810e56;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)in_ECX = CAuthSocket::vftable;
  local_4 = 1;
  UObject::ConditionalDestroy(in_ECX);
  local_4 = local_4 & 0xffffff00;
  thunk_FUN_103ff540();
  local_4 = 0xffffffff;
  thunk_FUN_1043b7c0();
  ExceptionList = local_c;
  return;
}


// ==== 1043c1a0 FUN_1043c1a0

void FUN_1043c1a0(byte param_1)

{
  void *in_ECX;
  
  thunk_FUN_1043c120();
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x7c84);
  }
  return;
}


// ==== 1043c1d0 FUN_1043c1d0

void FUN_1043c1d0(undefined4 param_1)

{
  undefined4 *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10810e86;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  thunk_FUN_1043bea0(param_1);
  local_4 = 0;
  *in_ECX = CAuthSocket::vftable;
  FBlowFish::FBlowFish((FBlowFish *)(in_ECX + 0x16fd));
  thunk_FUN_103ff530();
  in_ECX[0x142f] = 1;
  in_ECX[0x142e] = 1;
  ExceptionList = local_c;
  return;
}


// ==== 1043c270 FUN_1043c270

void FUN_1043c270(void)

{
  undefined4 *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10810ea8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  thunk_FUN_1043b8d0();
  *in_ECX = CDummySocket::vftable;
  ExceptionList = local_c;
  return;
}


// ==== 1043c2d0 FUN_1043c2d0

void FUN_1043c2d0(void)

{
  UObject *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_10810ec8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)in_ECX = CDummySocket::vftable;
  local_4 = 0;
  UObject::ConditionalDestroy(in_ECX);
  local_4 = 0xffffffff;
  thunk_FUN_1043b7c0();
  ExceptionList = local_c;
  return;
}


// ==== 1043c340 FUN_1043c340

void FUN_1043c340(byte param_1)

{
  void *in_ECX;
  
  thunk_FUN_1043c2d0();
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x5bf4);
  }
  return;
}


// ==== 1043c370 FUN_1043c370

void FUN_1043c370(undefined4 param_1)

{
  undefined4 *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10810ee8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  thunk_FUN_1043bea0(param_1);
  *in_ECX = CDummySocket::vftable;
  ExceptionList = local_c;
  return;
}


// ==== 1043c3e0 FUN_1043c3e0

void FUN_1043c3e0(int param_1,undefined4 param_2)

{
  UObject *pUVar1;
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 0x5c) = 0;
  *(undefined4 *)(in_ECX + 0x54) = param_2;
  *(undefined4 *)(in_ECX + 0x58) = 0;
  *(undefined4 *)(in_ECX + 0x60) = 0;
  DAT_10b1f538 = in_ECX;
  pUVar1 = UObject::StaticAllocateObject
                     (&DAT_10b1ffa0,*(undefined4 *)(in_ECX + 0x18),0,1,0,*(undefined4 *)GError_exref
                      ,0,0);
  if (pUVar1 == (UObject *)0x0) {
    pUVar1 = (UObject *)0x0;
  }
  else {
    pUVar1 = (UObject *)thunk_FUN_1043c080();
  }
  *(UObject **)(in_ECX + 0x4c) = pUVar1;
  UObject::AddToRoot(pUVar1);
  if (param_1 == 0) {
    pUVar1 = UObject::StaticAllocateObject
                       (&DAT_10b204d0,*(undefined4 *)(in_ECX + 0x18),0,1,0,
                        *(undefined4 *)GError_exref,0,0);
    if (pUVar1 != (UObject *)0x0) {
      pUVar1 = (UObject *)thunk_FUN_1043b8d0();
      goto LAB_1043c48c;
    }
  }
  else {
    pUVar1 = UObject::StaticAllocateObject
                       (&DAT_10b1f540,*(undefined4 *)(in_ECX + 0x18),0,1,0,
                        *(undefined4 *)GError_exref,0,0);
    if (pUVar1 != (UObject *)0x0) {
      pUVar1 = (UObject *)thunk_FUN_1043c270();
      goto LAB_1043c48c;
    }
  }
  pUVar1 = (UObject *)0x0;
LAB_1043c48c:
  *(UObject **)(in_ECX + 0x48) = pUVar1;
  UObject::AddToRoot(pUVar1);
  pUVar1 = UObject::StaticAllocateObject
                     (FUN_10b20a00,*(undefined4 *)(in_ECX + 0x18),0,1,0,*(undefined4 *)GError_exref,
                      0,0);
  if (pUVar1 == (UObject *)0x0) {
    pUVar1 = (UObject *)0x0;
  }
  else {
    pUVar1 = (UObject *)thunk_FUN_103ffc50();
  }
  *(UObject **)(in_ECX + 0x184) = pUVar1;
  UObject::AddToRoot(pUVar1);
  *(undefined4 *)(in_ECX + 0x50) = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(in_ECX + 0x16c));
  *(undefined4 *)(in_ECX + 0x18c) = 0;
  *(undefined4 *)(in_ECX + 400) = 0;
  return;
}


// ==== 1043c5a0 FUN_1043c5a0

void FUN_1043c5a0(UNetworkHandler *param_1)

{
  if (param_1 != (UNetworkHandler *)0x0) {
    UNetworkHandler::UNetworkHandler(param_1);
    return;
  }
  return;
}


// ==== 1043c5c0 FUN_1043c5c0

void FUN_1043c5c0(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = CCrc32Static::vftable;
  return;
}


// ==== 1043c5d0 FUN_1043c5d0

void FUN_1043c5d0(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = CCrc32Static::vftable;
  return;
}


// ==== 1043c5e0 FUN_1043c5e0

void FUN_1043c5e0(byte param_1,uint *param_2)

{
  *param_2 = *param_2 >> 8 ^ *(uint *)(&DAT_10a72138 + (*param_2 & 0xff ^ (uint)param_1) * 4);
  return;
}


// ==== 1043c610 FUN_1043c610

undefined1 FUN_1043c610(HANDLE param_1,DWORD *param_2)

{
  DWORD DVar1;
  DWORD DVar2;
  DWORD local_1c;
  undefined1 local_15;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10810f00;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffd8;
  local_15 = 1;
  local_8 = 0;
  local_1c = 0;
  ExceptionList = &local_10;
  DVar1 = GetFileSize(param_1,&local_1c);
  if ((DVar1 == 0xffffffff) && (DVar2 = GetLastError(), DVar2 != 0)) {
    *param_2 = 0;
    param_2[1] = 0;
    ExceptionList = local_10;
    return 0;
  }
  *param_2 = DVar1;
  param_2[1] = local_1c;
  ExceptionList = local_10;
  return local_15;
}


// ==== 1043c697 Catch@1043c697

undefined4 Catch_1043c697(void)

{
  int unaff_EBP;
  
  *(undefined1 *)(unaff_EBP + -0x11) = 0;
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  return 0x1043c683;
}


// ==== 1043c6d0 FUN_1043c6d0

void FUN_1043c6d0(short *param_1,undefined4 *param_2)

{
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10810f10;
  pvStack_10 = ExceptionList;
  ExceptionList = &pvStack_10;
  *param_2 = 0xffffffff;
  local_8 = 0;
  for (; *param_1 != 0; param_1 = param_1 + 1) {
    thunk_FUN_1043c5e0((char)*param_1,param_2);
  }
  local_8 = 0xffffffff;
  FUN_1043c740();
  return;
}


// ==== 1043c726 Catch@1043c726

undefined * Catch_1043c726(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = 0x17;
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  return &DAT_1043c73a;
}


// ==== 1043c740 FUN_1043c740

void FUN_1043c740(void)

{
  int unaff_EBP;
  uint *unaff_EDI;
  
  *unaff_EDI = ~*unaff_EDI;
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


// ==== 1043c780 FUN_1043c780

void FUN_1043c780(undefined1 *param_1,int param_2,undefined4 *param_3)

{
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10810f20;
  pvStack_10 = ExceptionList;
  ExceptionList = &pvStack_10;
  *param_3 = 0xffffffff;
  local_8 = 0;
  for (; param_2 != 0; param_2 = param_2 + -1) {
    thunk_FUN_1043c5e0(*param_1,param_3);
    param_1 = param_1 + 1;
  }
  local_8 = 0xffffffff;
  FUN_1043c7f7();
  return;
}


// ==== 1043c7e0 Catch@1043c7e0

undefined * Catch_1043c7e0(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = 0x17;
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  return &DAT_1043c7f4;
}


// ==== 1043c7f7 FUN_1043c7f7

undefined4 FUN_1043c7f7(void)

{
  uint *unaff_EBX;
  int unaff_EBP;
  
  *unaff_EBX = ~*unaff_EBX;
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return *(undefined4 *)(unaff_EBP + -0x14);
}


// ==== 1043c840 FUN_1043c840

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

void FUN_1043c840(LPCWSTR param_1,undefined4 *param_2)

{
  uint uVar1;
  HANDLE hFile;
  BOOL BVar2;
  uint uVar3;
  undefined1 local_1024 [4096];
  uint local_24;
  uint local_20;
  HANDLE local_1c;
  DWORD local_18;
  undefined1 *local_14;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10810f30;
  pvStack_10 = ExceptionList;
  local_14 = &stack0xffffefd0;
  local_18 = 0;
  local_1c = (HANDLE)0x0;
  ExceptionList = &pvStack_10;
  *param_2 = 0xffffffff;
  local_8 = 0;
  hFile = CreateFileW(param_1,0x80000000,1,(LPSECURITY_ATTRIBUTES)0x0,3,0x8000027,(HANDLE)0x0);
  local_1c = hFile;
  if (hFile == (HANDLE)0xffffffff) {
    local_18 = GetLastError();
  }
  else {
    while ((BVar2 = ReadFile(hFile,local_1024,0x1000,&local_20,(LPOVERLAPPED)0x0), uVar1 = local_20,
           BVar2 != 0 && (local_20 != 0))) {
      for (uVar3 = 0; local_24 = uVar3, uVar3 < uVar1; uVar3 = uVar3 + 1) {
        thunk_FUN_1043c5e0(local_1024[uVar3],param_2);
      }
    }
  }
  local_8 = 0xffffffff;
  FUN_1043c924();
  return;
}


// ==== 1043c90d Catch@1043c90d

undefined * Catch_1043c90d(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = 0x17;
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  return &DAT_1043c921;
}


// ==== 1043c924 FUN_1043c924

undefined4 FUN_1043c924(void)

{
  int unaff_EBP;
  HANDLE unaff_EDI;
  
  if (unaff_EDI != (HANDLE)0x0) {
    CloseHandle(unaff_EDI);
  }
  **(uint **)(unaff_EBP + 0xc) = ~**(uint **)(unaff_EBP + 0xc);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return *(undefined4 *)(unaff_EBP + -0x14);
}


// ==== 1043c990 FUN_1043c990

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

void FUN_1043c990(LPCWSTR param_1,uint *param_2,int param_3,code *param_4)

{
  byte *pbVar1;
  byte bVar2;
  HANDLE hFile;
  DWORD DVar3;
  BOOL BVar4;
  uint uVar5;
  byte *pbVar6;
  byte local_102c [4096];
  undefined *local_2c;
  DWORD local_28;
  DWORD local_24;
  HANDLE local_20;
  uint local_1c;
  DWORD local_18;
  undefined1 *local_14;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10810f40;
  pvStack_10 = ExceptionList;
  local_18 = 0x1043c9b3;
  local_14 = &stack0xffffefc8;
  local_24 = 0;
  local_20 = (HANDLE)0x0;
  ExceptionList = &pvStack_10;
  *param_2 = 0xffffffff;
  local_8 = 0;
  hFile = CreateFileW(param_1,0x80000000,1,(LPSECURITY_ATTRIBUTES)0x0,3,0x8000027,(HANDLE)0x0);
  local_20 = hFile;
  if (hFile == (HANDLE)0xffffffff) {
    local_24 = GetLastError();
  }
  else {
    DVar3 = GetFileSize(hFile,&local_28);
    if (DVar3 == 0xffffffff) {
      GetLastError();
    }
    local_1c = DVar3 - param_3;
    local_2c = &DAT_10a72138;
    DVar3 = local_1c;
    if (0xfff < local_1c) {
      DVar3 = 0x1000;
    }
    while( true ) {
      uVar5 = local_1c;
      BVar4 = ReadFile(hFile,local_102c,DVar3,&local_18,(LPOVERLAPPED)0x0);
      local_1c = uVar5 - local_18;
      if ((BVar4 == 0) || (local_18 == 0)) break;
      (*param_4)(1);
      uVar5 = *param_2;
      pbVar6 = local_102c;
      pbVar1 = pbVar6 + local_18;
      do {
        bVar2 = *pbVar6;
        pbVar6 = pbVar6 + 1;
        uVar5 = uVar5 >> 8 ^ *(uint *)(local_2c + (uint)(byte)((byte)uVar5 ^ bVar2) * 4);
      } while (pbVar1 != pbVar6);
      *param_2 = uVar5;
      if (local_1c == 0) break;
      hFile = local_20;
      DVar3 = local_1c;
      if (0xfff < local_1c) {
        DVar3 = 0x1000;
      }
    }
  }
  local_8 = 0xffffffff;
  FUN_1043caff();
  return;
}


// ==== 1043cae8 Catch@1043cae8

undefined * Catch_1043cae8(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x20) = 0x17;
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  return &DAT_1043cafc;
}


// ==== 1043caff FUN_1043caff

undefined4 FUN_1043caff(void)

{
  int unaff_EBP;
  HANDLE unaff_EDI;
  
  if (unaff_EDI != (HANDLE)0x0) {
    CloseHandle(unaff_EDI);
  }
  **(uint **)(unaff_EBP + 0xc) = ~**(uint **)(unaff_EBP + 0xc);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return *(undefined4 *)(unaff_EBP + -0x20);
}


// ==== 1043cb90 FUN_1043cb90

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

void FUN_1043cb90(LPCWSTR param_1,uint *param_2,int param_3)

{
  byte *pbVar1;
  byte bVar2;
  HANDLE hFile;
  DWORD DVar3;
  BOOL BVar4;
  uint uVar5;
  byte *pbVar6;
  byte local_102c [4096];
  undefined *local_2c;
  DWORD local_28;
  DWORD local_24;
  HANDLE local_20;
  uint local_1c;
  DWORD local_18;
  undefined1 *local_14;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10810f50;
  pvStack_10 = ExceptionList;
  local_18 = 0x1043cbb3;
  local_14 = &stack0xffffefc8;
  local_24 = 0;
  local_20 = (HANDLE)0x0;
  ExceptionList = &pvStack_10;
  *param_2 = 0xffffffff;
  local_8 = 0;
  hFile = CreateFileW(param_1,0x80000000,1,(LPSECURITY_ATTRIBUTES)0x0,3,0x8000027,(HANDLE)0x0);
  local_20 = hFile;
  if (hFile == (HANDLE)0xffffffff) {
    local_24 = GetLastError();
  }
  else {
    DVar3 = GetFileSize(hFile,&local_28);
    if (DVar3 == 0xffffffff) {
      GetLastError();
    }
    local_1c = DVar3 - param_3;
    local_2c = &DAT_10a72138;
    DVar3 = local_1c;
    if (0xfff < local_1c) {
      DVar3 = 0x1000;
    }
    while( true ) {
      uVar5 = local_1c;
      BVar4 = ReadFile(hFile,local_102c,DVar3,&local_18,(LPOVERLAPPED)0x0);
      local_1c = uVar5 - local_18;
      if ((BVar4 == 0) || (local_18 == 0)) break;
      uVar5 = *param_2;
      pbVar6 = local_102c;
      pbVar1 = pbVar6 + local_18;
      do {
        bVar2 = *pbVar6;
        pbVar6 = pbVar6 + 1;
        uVar5 = uVar5 >> 8 ^ *(uint *)(local_2c + (uint)(byte)((byte)uVar5 ^ bVar2) * 4);
      } while (pbVar1 != pbVar6);
      *param_2 = uVar5;
      if (local_1c == 0) break;
      hFile = local_20;
      DVar3 = local_1c;
      if (0xfff < local_1c) {
        DVar3 = 0x1000;
      }
    }
  }
  local_8 = 0xffffffff;
  FUN_1043ccfa();
  return;
}


// ==== 1043cce3 Catch@1043cce3

undefined * Catch_1043cce3(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x20) = 0x17;
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  return &DAT_1043ccf7;
}


// ==== 1043ccfa FUN_1043ccfa

undefined4 FUN_1043ccfa(void)

{
  int unaff_EBP;
  HANDLE unaff_EDI;
  
  if (unaff_EDI != (HANDLE)0x0) {
    CloseHandle(unaff_EDI);
  }
  **(uint **)(unaff_EBP + 0xc) = ~**(uint **)(unaff_EBP + 0xc);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return *(undefined4 *)(unaff_EBP + -0x20);
}


// ==== 1043cd90 FUN_1043cd90

void FUN_1043cd90(byte param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = CCrc32Static::vftable;
  if ((param_1 & 1) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))();
  }
  return;
}


// ==== 1043cdd0 FUN_1043cdd0

undefined4 FUN_1043cdd0(undefined4 param_1)

{
  ushort *puVar1;
  int iVar2;
  char *pcVar3;
  FString aFStack_5c [12];
  FURL local_50 [68];
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10810f71;
  local_c = ExceptionList;
  if (DAT_10b1f538 != 0) {
    ExceptionList = &local_c;
    FURL::FURL(local_50,(ushort *)0x0);
    local_4 = 0;
    puVar1 = (ushort *)(**(code **)(**(int **)GConfig_exref + 0x14))(&DAT_1088ac34,L"ServerAddr",0);
    FString::FString(aFStack_5c,puVar1);
    local_4._0_1_ = 1;
    puVar1 = FString::operator*(aFStack_5c);
    iVar2 = appStrlen(puVar1);
    pcVar3 = (char *)0x0;
    puVar1 = FString::operator*(aFStack_5c);
    pcVar3 = appToAnsi(puVar1,pcVar3);
    _memcpy((void *)(*(int *)(DAT_10b1f538 + 0x48) + 0x4858),pcVar3,iVar2 + 1);
    *(undefined4 *)(*(int *)(DAT_10b1f538 + 0x48) + 0x34) = param_1;
    puVar1 = FString::operator*(aFStack_5c);
    iVar2 = appStrlen(puVar1);
    pcVar3 = (char *)0x0;
    puVar1 = FString::operator*(aFStack_5c);
    pcVar3 = appToAnsi(puVar1,pcVar3);
    _memcpy((void *)(*(int *)(DAT_10b1f538 + 0x4c) + 0x4858),pcVar3,iVar2 + 1);
    *(undefined4 *)(*(int *)(DAT_10b1f538 + 0x4c) + 0x34) = param_1;
    local_4 = (uint)local_4._1_3_ << 8;
    FString::~FString(aFStack_5c);
    local_4 = 0xffffffff;
    FURL::~FURL(local_50);
  }
  ExceptionList = local_c;
  return 1;
}


// ==== 1043cf70 FUN_1043cf70

undefined4 FUN_1043cf70(undefined4 param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  
  if (param_2 < 0x508) {
    if (param_2 != 0x507) {
      if (param_2 == 1) {
        thunk_FUN_1043cdd0(param_1);
        return 0;
      }
      return 0;
    }
    if (DAT_10b1f538 != 0) {
      if ((*(int *)(DAT_10b1f538 + 0x50) == 0) || (*(int *)(DAT_10b1f538 + 0x50) == 1)) {
        if (*(int *)(DAT_10b1f538 + 0x4c) == 0) {
          return 0;
        }
        piVar1 = *(int **)(DAT_10b1f538 + 0x4c);
      }
      else {
        if (*(int *)(DAT_10b1f538 + 0x48) == 0) {
          return 0;
        }
        piVar1 = *(int **)(DAT_10b1f538 + 0x48);
      }
      if (piVar1[0xe] != 0) {
        (**(code **)(*piVar1 + 0x6c))(param_3,param_4);
        return 0;
      }
    }
  }
  else if ((param_2 == 0x508) && (DAT_10b1f538 != 0)) {
    if ((*(int *)(DAT_10b1f538 + 0x50) == 0) || (*(int *)(DAT_10b1f538 + 0x50) == 1)) {
      if (*(int *)(DAT_10b1f538 + 0x4c) == 0) {
        return 0;
      }
      piVar1 = *(int **)(DAT_10b1f538 + 0x4c);
    }
    else {
      if (*(int *)(DAT_10b1f538 + 0x48) == 0) {
        return 0;
      }
      piVar1 = *(int **)(DAT_10b1f538 + 0x48);
    }
    if (piVar1[0xe] != 0) {
      (**(code **)(*piVar1 + 0x70))(param_3,param_4);
    }
  }
  return 0;
}


// ==== 1043d070 FUN_1043d070

undefined4 FUN_1043d070(undefined4 param_1)

{
  DAT_10b221e8 = param_1;
  return 1;
}


// ==== 1043d110 FUN_1043d110

bool FUN_1043d110(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = FUN_107a7267(param_2,1,4,param_1);
  return iVar1 == 4;
}


// ==== 1043d140 FUN_1043d140

bool FUN_1043d140(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = FUN_107a7267(param_2,1,2,param_1);
  return iVar1 == 2;
}


// ==== 1043d1a0 FUN_1043d1a0

undefined4 FUN_1043d1a0(undefined4 param_1)

{
  undefined4 uVar1;
  char cVar2;
  int iVar3;
  int in_ECX;
  undefined1 local_4 [4];
  
  uVar1 = param_1;
  iVar3 = FUN_107a7267(in_ECX + 0xd0000c,1,1,param_1);
  if (iVar3 == 1) {
    iVar3 = FUN_107a7267(in_ECX + 0xd0000d,1,1,uVar1);
    if (iVar3 == 1) {
      iVar3 = FUN_107a7267(in_ECX + 0xd00014,1,2,uVar1);
      if (iVar3 == 2) {
        iVar3 = FUN_107a7267(in_ECX + 0xd00016,1,2,uVar1);
        if (iVar3 == 2) {
          cVar2 = thunk_FUN_1043d110(uVar1,in_ECX + 0xd00010);
          if (cVar2 != '\0') {
            cVar2 = thunk_FUN_1043d110(uVar1,&param_1);
            if (cVar2 != '\0') {
              cVar2 = thunk_FUN_1043d110(uVar1,local_4);
              if (cVar2 != '\0') {
                return 1;
              }
            }
          }
        }
      }
    }
  }
  return 0;
}


// ==== 1043d2c0 FUN_1043d2c0

int FUN_1043d2c0(uint param_1,uint param_2)

{
  int iVar1;
  int in_ECX;
  int iVar2;
  short sVar3;
  short sVar4;
  int iVar5;
  int iVar6;
  undefined4 local_18;
  
  iVar5 = (((int)(param_1 + ((int)param_1 >> 0x1f & 7U)) >> 3) * 0x100 +
          ((int)(param_2 + ((int)param_2 >> 0x1f & 7U)) >> 3)) * 0xd0 + in_ECX;
  if (*(char *)(iVar5 + 0xc9) != '\0') {
    return -1;
  }
  param_1 = param_1 & 0x80000007;
  if ((int)param_1 < 0) {
    param_1 = (param_1 - 1 | 0xfffffff8) + 1;
  }
  param_2 = param_2 & 0x80000007;
  if ((int)param_2 < 0) {
    param_2 = (param_2 - 1 | 0xfffffff8) + 1;
  }
  iVar2 = (int)*(short *)(iVar5 + (param_2 + 0x20 + param_1 * 8) * 2);
  sVar4 = -0x8000;
  local_18 = iVar2;
  for (iVar6 = 1; iVar6 < *(char *)(param_1 + param_2 * 8 + iVar5); iVar6 = iVar6 + 1) {
    iVar1 = iVar6 + iVar2;
    sVar3 = (short)(DAT_10b357ec & *(ushort *)(*(int *)(in_ECX + 0xd00000) + iVar1 * 2)) >> 1;
    if (sVar4 < sVar3) {
      local_18 = iVar1;
      sVar4 = sVar3;
    }
  }
  return local_18;
}


// ==== 1043d3c3 Catch@1043d3c3

void Catch_1043d3c3(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x24) = *(undefined4 *)(unaff_EBP + -0x28);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x24,&DAT_10914c48);
}


// ==== 1043d3d7 Catch@1043d3d7

void Catch_1043d3d7(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"CGeoZone::GetTopCellIndex");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1043d470 FUN_1043d470

undefined4 FUN_1043d470(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char cVar4;
  int in_ECX;
  int iVar5;
  char local_150 [264];
  int local_48;
  int local_40;
  int local_3c;
  undefined2 local_38 [2];
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  FILE *local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  uVar3 = param_2;
  uVar2 = param_1;
  puStack_c = &LAB_10810fa0;
  local_10 = ExceptionList;
  local_14 = &stack0xfffffea4;
  local_8 = 0;
  ExceptionList = &local_10;
  _sprintf(local_150,".\\GeoData\\%d_%d_conv.dat",param_1,param_2);
  local_18 = _fopen(local_150,"rb");
  if (local_18 == (FILE *)0x0) {
    _sprintf(local_150,".\\ServerData\\%d_%d_conv.dat",uVar2,uVar3);
    local_18 = _fopen(local_150,"rb");
    if (local_18 == (FILE *)0x0) {
      _sprintf(local_150,".\\%d_%d_conv.dat",uVar2,uVar3);
      local_18 = _fopen(local_150,"rb");
      if (local_18 == (FILE *)0x0) {
        ExceptionList = local_10;
        return 0;
      }
    }
  }
  cVar4 = thunk_FUN_1043d1a0(local_18);
  if (cVar4 == '\0') {
    ExceptionList = local_10;
    return 0;
  }
  *(undefined4 *)(in_ECX + 0xd00018) = uVar2;
  *(undefined4 *)(in_ECX + 0xd0001c) = uVar3;
  iVar5 = 0;
  for (local_40 = 0; local_40 < *(int *)(in_ECX + 0xd00004); local_40 = local_40 + 1) {
  }
  FArray::Empty((FArray *)(in_ECX + 0xd00000),2,0);
  local_30 = 0;
  local_2c = 0;
  local_24 = 0;
  do {
    if (0xff < local_24) {
      _fclose(local_18);
      ExceptionList = local_10;
      return 1;
    }
    local_1c = 0;
    while (local_1c < 0x100) {
      local_2c = local_2c + (short)iVar5;
      iVar5 = 0;
      local_30 = 0;
      iVar1 = (local_24 * 0x100 + local_1c) * 0xd0 + in_ECX;
      *(int *)(iVar1 + 0xc4) = local_2c;
      cVar4 = thunk_FUN_1043d140(local_18,iVar1 + 0xce);
      if (cVar4 == '\0') {
LAB_1043d78d:
        _fclose(local_18);
        ExceptionList = local_10;
        return 0;
      }
      if (*(short *)(iVar1 + 0xce) == 0) {
        *(undefined1 *)(iVar1 + 0xc9) = 1;
        *(undefined1 *)(iVar1 + 200) = 1;
        cVar4 = thunk_FUN_1043d140(local_18,iVar1 + 0xca);
        if ((cVar4 == '\0') || (cVar4 = thunk_FUN_1043d140(local_18,iVar1 + 0xcc), cVar4 == '\0'))
        goto LAB_1043d78d;
        local_1c = local_1c + 1;
      }
      else {
        if (*(short *)(iVar1 + 0xce) == 0x40) {
          *(undefined1 *)(iVar1 + 200) = 1;
          *(undefined1 *)(iVar1 + 0xc9) = 0;
          FArray::Add((FArray *)(in_ECX + 0xd00000),0x40,2);
          for (local_3c = 0; local_3c < 8; local_3c = local_3c + 1) {
            local_48 = 0;
            while (iVar1 = local_48, local_48 < 8) {
              *(short *)(in_ECX + (local_48 + 0x20 +
                                  ((local_24 * 0x100 + local_1c) * 0xd + local_3c) * 8) * 2) =
                   (short)iVar5;
              cVar4 = thunk_FUN_1043d140(local_18,&param_1);
              if (cVar4 == '\0') goto LAB_1043d78d;
              *(undefined2 *)(*(int *)(in_ECX + 0xd00000) + ((short)iVar5 + local_2c) * 2) =
                   (undefined2)param_1;
              iVar5 = iVar5 + 1;
              local_30 = iVar5;
              local_48 = iVar1 + 1;
            }
          }
        }
        else {
          *(undefined1 *)(iVar1 + 200) = 0;
          *(undefined1 *)(iVar1 + 0xc9) = 0;
          for (local_20 = 0; local_20 < 8; local_20 = local_20 + 1) {
            for (local_28 = 0; local_28 < 8; local_28 = local_28 + 1) {
              cVar4 = thunk_FUN_1043d140(local_18,&param_2);
              if (cVar4 == '\0') goto LAB_1043d78d;
              FArray::Add((FArray *)(in_ECX + 0xd00000),(int)(short)param_2,2);
              iVar1 = local_24 * 0x100 + local_1c;
              *(short *)(in_ECX + (local_28 + 0x20 + (iVar1 * 0xd + local_20) * 8) * 2) =
                   (short)iVar5;
              *(undefined1 *)(local_20 + (iVar1 * 0x1a + local_28) * 8 + in_ECX) =
                   (undefined1)param_2;
              for (local_34 = 0; local_34 < (short)param_2; local_34 = local_34 + 1) {
                cVar4 = thunk_FUN_1043d140(local_18,local_38);
                if (cVar4 == '\0') goto LAB_1043d78d;
                *(undefined2 *)(*(int *)(in_ECX + 0xd00000) + ((short)iVar5 + local_2c) * 2) =
                     local_38[0];
                iVar5 = iVar5 + 1;
                local_30 = iVar5;
              }
            }
          }
          *(short *)((local_24 * 0x100 + local_1c) * 0xd0 + 0xc0 + in_ECX) = (short)iVar5;
        }
        local_1c = local_1c + 1;
      }
    }
    local_24 = local_24 + 1;
  } while( true );
}


// ==== 1043d82d Catch@1043d82d

void Catch_1043d82d(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x40) = *(undefined4 *)(unaff_EBP + -0x48);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x40,&DAT_10914c48);
}


// ==== 1043d841 Catch@1043d841

void Catch_1043d841(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"CGeoZone::Load");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1043d960 FUN_1043d960

uint FUN_1043d960(ushort *param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = 0;
  if (1 < param_2) {
    iVar1 = (param_2 - 2U >> 1) + 1;
    param_2 = param_2 + iVar1 * -2;
    do {
      uVar2 = uVar2 + *param_1;
      param_1 = param_1 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  if (param_2 != 0) {
    uVar2 = uVar2 + (byte)*param_1;
  }
  uVar2 = (uVar2 >> 0x10) + (uVar2 & 0xffff);
  return ~((uVar2 >> 0x10) + uVar2);
}


// ==== 1043d9d0 FUN_1043d9d0

void FUN_1043d9d0(int param_1)

{
  byte bVar1;
  undefined4 *puVar2;
  undefined4 local_28 [5];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10810fb0;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffcc;
  local_8 = 0;
  ExceptionList = &local_10;
  *(undefined4 *)GPropAddr_exref = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,local_28);
  if (*(int *)GPropObject_exref != 0) {
    (**(code **)(**(int **)GPropObject_exref + 0x60))(*(undefined4 *)GProperty_exref);
  }
  if (*(int *)GPropAddr_exref == 0) {
    puVar2 = local_28;
  }
  else {
    puVar2 = *(undefined4 **)GPropAddr_exref;
  }
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  puVar2[2] = 0;
  puVar2[1] = 0;
  *puVar2 = 0;
  ExceptionList = local_10;
  return;
}


// ==== 1043da9e Catch@1043da9e

void Catch_1043da9e(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 1043dab2 Catch@1043dab2

void Catch_1043dab2(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"AKConstraint::execKGetConstraintForce");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1043db10 FUN_1043db10

void FUN_1043db10(int param_1)

{
  byte bVar1;
  undefined4 *puVar2;
  undefined4 local_28 [5];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10810fc0;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffcc;
  local_8 = 0;
  ExceptionList = &local_10;
  *(undefined4 *)GPropAddr_exref = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,local_28);
  if (*(int *)GPropObject_exref != 0) {
    (**(code **)(**(int **)GPropObject_exref + 0x60))(*(undefined4 *)GProperty_exref);
  }
  if (*(int *)GPropAddr_exref == 0) {
    puVar2 = local_28;
  }
  else {
    puVar2 = *(undefined4 **)GPropAddr_exref;
  }
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  puVar2[2] = 0;
  puVar2[1] = 0;
  *puVar2 = 0;
  ExceptionList = local_10;
  return;
}


// ==== 1043dbde Catch@1043dbde

void Catch_1043dbde(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 1043dbf2 Catch@1043dbf2

void Catch_1043dbf2(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"AKConstraint::execKGetConstraintTorque");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1043dc50 FUN_1043dc50

void FUN_1043dc50(int param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10810fd0;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  ExceptionList = local_10;
  return;
}


// ==== 1043dcba Catch@1043dcba

void Catch_1043dcba(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 1043dcce Catch@1043dcce

void Catch_1043dcce(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"AKConstraint::execKGetConstraintTorque");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1043dd20 FUN_1043dd20

void FUN_1043dd20(int param_1)

{
  byte bVar1;
  TArray<unsigned_short> *this;
  UObject *in_ECX;
  undefined4 uStack_68;
  FString local_38 [12];
  FString local_2c [20];
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_10810ffb;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffbc;
  local_8 = 0;
  ExceptionList = &local_10;
  FString::FString(local_2c);
  local_8 = CONCAT31(local_8._1_3_,1);
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))();
  local_18 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))();
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))();
  }
  this = FString::GetCharArray(local_2c);
  FArray::GetData((FArray *)this);
  UObject::GetName(in_ECX);
  uStack_68 = 0x1043ddeb;
  FString::Printf((ushort *)local_38);
  local_8._0_1_ = 2;
  FString::FString((FString *)&uStack_68,local_38);
  local_8._0_1_ = 2;
  FStatGraph::AddDataPoint(GStatGraph);
  local_8._0_1_ = 1;
  FString::~FString(local_38);
  local_8 = (uint)local_8._1_3_ << 8;
  FString::~FString(local_2c);
  ExceptionList = local_10;
  return;
}


// ==== 1043de53 Catch@1043de53

void Catch_1043de53(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_10914c48);
}


// ==== 1043de67 Catch@1043de67

void Catch_1043de67(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"AKVehicle::execGraphData");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1043dee0 FUN_1043dee0

void FUN_1043dee0(UStruct *param_1,UPackage *param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = UStruct::IsChildOf(param_1,(UStruct *)&UKarmaParams::PrivateStaticClass);
  if (iVar1 == 0) {
    appFailAssert("Class->IsChildOf(T::StaticClass())",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnObjBas.h",0x4d9);
  }
  if (param_2 == (UPackage *)0xffffffff) {
    param_2 = UObject::GetTransientPackage();
  }
  UObject::StaticConstructObject(param_1,param_2,param_3,param_4,0,*(undefined4 *)GError_exref,0);
  return;
}


// ==== 1043df60 FUN_1043df60

void FUN_1043df60(void)

{
  int iVar1;
  UObject *pUVar2;
  undefined4 uVar3;
  UObject *in_ECX;
  undefined4 uStack_34;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10811010;
  local_10 = ExceptionList;
  local_8 = 0;
  if (*(int *)(in_ECX + 0x348) == 0) {
    uStack_34 = 0x1043df9e;
    ExceptionList = &local_10;
    iVar1 = UObject::IsA(in_ECX,&AKConstraint::PrivateStaticClass);
    if (iVar1 == 0) {
      FName::FName((FName *)&uStack_34,0);
      pUVar2 = UObject::GetOuter(in_ECX);
      uVar3 = thunk_FUN_1043dee0(&UKarmaParams::PrivateStaticClass,pUVar2);
      *(undefined4 *)(in_ECX + 0x348) = uVar3;
    }
  }
  ExceptionList = local_10;
  return;
}


// ==== 1043dfe4 Catch@1043dfe4

void Catch_1043dfe4(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 1043dff8 Catch@1043dff8

void Catch_1043dff8(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"AKActor::Spawned");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1043e050 FUN_1043e050

void FUN_1043e050(int param_1,undefined4 *param_2)

{
  undefined4 local_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  FQuat::FQuat((FQuat *)&local_10,0.0,0.0,0.0,1.0);
  *param_2 = local_10;
  param_2[1] = uStack_c;
  param_2[2] = uStack_8;
  param_2[3] = uStack_4;
  return;
}


// ==== 1043e0e0 FUN_1043e0e0

void FUN_1043e0e0(int param_1,undefined4 *param_2)

{
  byte bVar1;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10811020;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffc0;
  local_8 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  ExceptionList = &local_10;
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&local_34);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  *param_2 = local_34;
  param_2[1] = local_30;
  param_2[2] = local_2c;
  ExceptionList = local_10;
  return;
}


// ==== 1043e190 Catch@1043e190

void Catch_1043e190(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 1043e1a4 Catch@1043e1a4

void Catch_1043e1a4(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"AActor::execKRBVecToVector");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1043e200 FUN_1043e200

void FUN_1043e200(int param_1,undefined4 *param_2)

{
  byte bVar1;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10811030;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffc0;
  local_8 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  ExceptionList = &local_10;
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&local_34);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  *param_2 = local_34;
  param_2[1] = local_30;
  param_2[2] = local_2c;
  ExceptionList = local_10;
  return;
}


// ==== 1043e2b0 Catch@1043e2b0

void Catch_1043e2b0(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 1043e2c4 Catch@1043e2c4

void Catch_1043e2c4(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"AActor::execKRBVecFromVector");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1043e320 FUN_1043e320

void FUN_1043e320(int param_1)

{
  byte bVar1;
  undefined4 *puVar2;
  undefined4 local_28 [5];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10811040;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffcc;
  local_8 = 0;
  ExceptionList = &local_10;
  *(undefined4 *)GPropAddr_exref = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,local_28);
  if (*(int *)GPropObject_exref != 0) {
    (**(code **)(**(int **)GPropObject_exref + 0x60))(*(undefined4 *)GProperty_exref);
  }
  if (*(int *)GPropAddr_exref == 0) {
    puVar2 = local_28;
  }
  else {
    puVar2 = *(undefined4 **)GPropAddr_exref;
  }
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  puVar2[2] = 0;
  puVar2[1] = 0;
  *puVar2 = 0;
  ExceptionList = local_10;
  return;
}


// ==== 1043e3ee Catch@1043e3ee

void Catch_1043e3ee(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 1043e402 Catch@1043e402

void Catch_1043e402(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"AActor::execKGetCOMPosition");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1043e460 FUN_1043e460

void FUN_1043e460(int param_1)

{
  byte bVar1;
  int in_ECX;
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10811050;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffd4;
  local_8 = 0;
  local_18 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  ExceptionList = &local_10;
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&local_18);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  if (*(int *)(in_ECX + 0x348) == 0) {
    ExceptionList = local_10;
    return;
  }
  *(undefined4 *)(*(int *)(in_ECX + 0x348) + 0x4c) = local_18;
  ExceptionList = local_10;
  return;
}


// ==== 1043e515 Catch@1043e515

void Catch_1043e515(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_10914c48);
}


// ==== 1043e529 Catch@1043e529

void Catch_1043e529(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"AActor::execKSetRestitution");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1043e580 FUN_1043e580

void FUN_1043e580(int param_1,undefined4 *param_2)

{
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10811060;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  if (*(int *)(in_ECX + 0x348) == 0) {
    ExceptionList = local_10;
    return;
  }
  *param_2 = *(undefined4 *)(*(int *)(in_ECX + 0x348) + 0x4c);
  ExceptionList = local_10;
  return;
}


// ==== 1043e614 Catch@1043e614

void Catch_1043e614(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 1043e628 Catch@1043e628

void Catch_1043e628(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"AActor::execKGetRestitution");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1043e680 FUN_1043e680

void FUN_1043e680(int param_1)

{
  byte bVar1;
  int in_ECX;
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10811070;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffd4;
  local_8 = 0;
  local_18 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  ExceptionList = &local_10;
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&local_18);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  if (*(int *)(in_ECX + 0x348) == 0) {
    ExceptionList = local_10;
    return;
  }
  *(undefined4 *)(*(int *)(in_ECX + 0x348) + 0x48) = local_18;
  ExceptionList = local_10;
  return;
}


// ==== 1043e735 Catch@1043e735

void Catch_1043e735(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_10914c48);
}


// ==== 1043e749 Catch@1043e749

void Catch_1043e749(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"AActor::execKSetFriction");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1043e7a0 FUN_1043e7a0

void FUN_1043e7a0(int param_1,undefined4 *param_2)

{
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10811080;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  if (*(int *)(in_ECX + 0x348) == 0) {
    ExceptionList = local_10;
    return;
  }
  *param_2 = *(undefined4 *)(*(int *)(in_ECX + 0x348) + 0x48);
  ExceptionList = local_10;
  return;
}


// ==== 1043e834 Catch@1043e834

void Catch_1043e834(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 1043e848 Catch@1043e848

void Catch_1043e848(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"AActor::execKGetFriction");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1043e8a0 FUN_1043e8a0

void FUN_1043e8a0(int param_1)

{
  byte bVar1;
  int in_ECX;
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10811090;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffd4;
  local_8 = 0;
  local_18 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  ExceptionList = &local_10;
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&local_18);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  if (*(int *)(in_ECX + 0x348) == 0) {
    ExceptionList = local_10;
    return;
  }
  *(undefined4 *)(*(int *)(in_ECX + 0x348) + 0x50) = local_18;
  ExceptionList = local_10;
  return;
}


// ==== 1043e955 Catch@1043e955

void Catch_1043e955(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_10914c48);
}


// ==== 1043e969 Catch@1043e969

void Catch_1043e969(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"AActor::execKSetImpactThreshold");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1043e9c0 FUN_1043e9c0

void FUN_1043e9c0(int param_1,undefined4 *param_2)

{
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_108110a0;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  if (*(int *)(in_ECX + 0x348) == 0) {
    ExceptionList = local_10;
    return;
  }
  *param_2 = *(undefined4 *)(*(int *)(in_ECX + 0x348) + 0x50);
  ExceptionList = local_10;
  return;
}


// ==== 1043ea54 Catch@1043ea54

void Catch_1043ea54(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 1043ea68 Catch@1043ea68

void Catch_1043ea68(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"AActor::execKGetImpactThreshold");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1043eac0 FUN_1043eac0

void FUN_1043eac0(int param_1)

{
  byte bVar1;
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_108110b0;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffd4;
  local_8 = 0;
  local_18 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  ExceptionList = &local_10;
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&local_18);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  ExceptionList = local_10;
  return;
}


// ==== 1043eb4f Catch@1043eb4f

void Catch_1043eb4f(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_10914c48);
}


// ==== 1043eb63 Catch@1043eb63

void Catch_1043eb63(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"AActor::execKSetBlockKarma");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1043ebb0 FUN_1043ebb0

void FUN_1043ebb0(int param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_108110c0;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  ExceptionList = local_10;
  return;
}


// ==== 1043ec1a Catch@1043ec1a

void Catch_1043ec1a(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 1043ec2e Catch@1043ec2e

void Catch_1043ec2e(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"AActor::execKWake");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1043ec80 FUN_1043ec80

void FUN_1043ec80(int param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_108110d0;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  ExceptionList = local_10;
  return;
}


// ==== 1043ecea Catch@1043ecea

void Catch_1043ecea(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 1043ecfe Catch@1043ecfe

void Catch_1043ecfe(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"AActor::execKIsAwake");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1043ed50 FUN_1043ed50

void FUN_1043ed50(int param_1)

{
  byte bVar1;
  int iVar2;
  undefined1 local_34 [12];
  undefined1 local_28 [20];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  iVar2 = param_1;
  puStack_c = &LAB_108110e0;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffc0;
  local_8 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  ExceptionList = &local_10;
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,local_28);
  bVar1 = **(byte **)(iVar2 + 0xc);
  *(byte **)(iVar2 + 0xc) = *(byte **)(iVar2 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(iVar2,local_34);
  FName::FName((FName *)&param_1,0);
  bVar1 = **(byte **)(iVar2 + 0xc);
  *(byte **)(iVar2 + 0xc) = *(byte **)(iVar2 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(iVar2,&param_1);
  *(int *)(iVar2 + 0xc) = *(int *)(iVar2 + 0xc) + 1;
  if (**(char **)(iVar2 + 0xc) == 'B') {
    *(char **)(iVar2 + 0xc) = *(char **)(iVar2 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(iVar2,0);
  }
  ExceptionList = local_10;
  return;
}


// ==== 1043ee1f Catch@1043ee1f

void Catch_1043ee1f(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 1043ee33 Catch@1043ee33

void Catch_1043ee33(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"AActor::execKAddImpulse");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1043ee90 FUN_1043ee90

void FUN_1043ee90(int param_1)

{
  byte bVar1;
  int iVar2;
  undefined1 local_34 [12];
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  iVar2 = param_1;
  puStack_c = &LAB_108110f0;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffc0;
  local_8 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  ExceptionList = &local_10;
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,local_34);
  local_28 = 0;
  local_24 = 0;
  local_20 = 0;
  bVar1 = **(byte **)(iVar2 + 0xc);
  *(byte **)(iVar2 + 0xc) = *(byte **)(iVar2 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(iVar2,&local_28);
  param_1 = 0;
  bVar1 = **(byte **)(iVar2 + 0xc);
  *(byte **)(iVar2 + 0xc) = *(byte **)(iVar2 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(iVar2,&param_1);
  *(int *)(iVar2 + 0xc) = *(int *)(iVar2 + 0xc) + 1;
  if (**(char **)(iVar2 + 0xc) == 'B') {
    *(char **)(iVar2 + 0xc) = *(char **)(iVar2 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(iVar2,0);
  }
  ExceptionList = local_10;
  return;
}


// ==== 1043ef68 Catch@1043ef68

void Catch_1043ef68(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 1043ef7c Catch@1043ef7c

void Catch_1043ef7c(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"AActor::execKSetSkelVel");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1043efe0 FUN_1043efe0

void FUN_1043efe0(int param_1)

{
  byte bVar1;
  FInterpCurve local_3c [12];
  FInterpCurve local_30 [20];
  undefined4 local_1c;
  FName local_18 [4];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_10811112;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffb8;
  local_8 = 0;
  ExceptionList = &local_10;
  FName::FName(local_18,0);
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,local_18);
  FInterpCurve::FInterpCurve(local_3c);
  local_8._0_1_ = 1;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,local_3c);
  local_1c = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&local_1c);
  FInterpCurve::FInterpCurve(local_30);
  local_8 = CONCAT31(local_8._1_3_,2);
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,local_30);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  local_8._0_1_ = 1;
  FInterpCurve::~FInterpCurve(local_30);
  local_8 = (uint)local_8._1_3_ << 8;
  FInterpCurve::~FInterpCurve(local_3c);
  ExceptionList = local_10;
  return;
}


// ==== 1043f104 Catch@1043f104

void Catch_1043f104(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x1c) = *(undefined4 *)(unaff_EBP + -0x20);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x1c,&DAT_10914c48);
}


// ==== 1043f118 Catch@1043f118

void Catch_1043f118(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"AActor::execKAddBoneLifter");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1043f190 FUN_1043f190

void FUN_1043f190(int param_1)

{
  byte bVar1;
  FName local_18 [4];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10811130;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffd4;
  local_8 = 0;
  ExceptionList = &local_10;
  FName::FName(local_18,0);
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,local_18);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  ExceptionList = local_10;
  return;
}


// ==== 1043f223 Catch@1043f223

void Catch_1043f223(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_10914c48);
}


// ==== 1043f237 Catch@1043f237

void Catch_1043f237(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"AActor::execKRemoveLifterFromBone");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1043f290 FUN_1043f290

void FUN_1043f290(int param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10811140;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  ExceptionList = local_10;
  return;
}


// ==== 1043f2fa Catch@1043f2fa

void Catch_1043f2fa(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 1043f30e Catch@1043f30e

void Catch_1043f30e(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"AActor::execKRemoveAllBoneLifters");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1043f360 FUN_1043f360

void FUN_1043f360(int param_1,undefined4 *param_2)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10811150;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  *param_2 = 0;
  ExceptionList = local_10;
  return;
}


// ==== 1043f3d3 Catch@1043f3d3

void Catch_1043f3d3(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 1043f3e7 Catch@1043f3e7

void Catch_1043f3e7(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"AActor::execKGetSkelMass");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1043f430 FUN_1043f430

void FUN_1043f430(int param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10811160;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  ExceptionList = local_10;
  return;
}


// ==== 1043f49a Catch@1043f49a

void Catch_1043f49a(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 1043f4ae Catch@1043f4ae

void Catch_1043f4ae(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"AActor::execKFreezeRagdoll");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1043f500 FUN_1043f500

void FUN_1043f500(int param_1,undefined4 *param_2)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10811170;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  *param_2 = 0;
  ExceptionList = local_10;
  return;
}


// ==== 1043f573 Catch@1043f573

void Catch_1043f573(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 1043f587 Catch@1043f587

void Catch_1043f587(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"AActor::execKIsRagdollAvailable");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1043f5d0 FUN_1043f5d0

void FUN_1043f5d0(int param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10811180;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  ExceptionList = local_10;
  return;
}


// ==== 1043f63a Catch@1043f63a

void Catch_1043f63a(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 1043f64e Catch@1043f64e

void Catch_1043f64e(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"AActor::execKMakeRagdollAvailable");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1043f6a0 FUN_1043f6a0

void FUN_1043f6a0(int param_1)

{
  byte bVar1;
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10811190;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffd4;
  local_8 = 0;
  local_18 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  ExceptionList = &local_10;
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&local_18);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  ExceptionList = local_10;
  return;
}


// ==== 1043f735 Catch@1043f735

void Catch_1043f735(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_10914c48);
}


// ==== 1043f749 Catch@1043f749

void Catch_1043f749(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"AActor::execKDisableCollision");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1043f7a0 FUN_1043f7a0

void FUN_1043f7a0(int param_1)

{
  byte bVar1;
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_108111a0;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffd4;
  local_8 = 0;
  local_18 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  ExceptionList = &local_10;
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&local_18);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  ExceptionList = local_10;
  return;
}


// ==== 1043f835 Catch@1043f835

void Catch_1043f835(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_10914c48);
}


// ==== 1043f849 Catch@1043f849

void Catch_1043f849(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"AActor::execKEnableCollision");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1043f8a0 FUN_1043f8a0

void FUN_1043f8a0(int param_1)

{
  byte bVar1;
  undefined1 *puVar2;
  undefined1 local_50 [12];
  FQuat local_44 [48];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_108111b0;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffa4;
  local_8 = 0;
  ExceptionList = &local_10;
  FQuat::FQuat(local_44);
  *(undefined4 *)GPropAddr_exref = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,local_50);
  if (*(int *)GPropObject_exref != 0) {
    (**(code **)(**(int **)GPropObject_exref + 0x60))(*(undefined4 *)GProperty_exref);
  }
  if (*(int *)GPropAddr_exref == 0) {
    puVar2 = local_50;
  }
  else {
    puVar2 = *(undefined1 **)GPropAddr_exref;
  }
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  appMemset(puVar2,0,0x34);
  *(undefined4 *)(puVar2 + 0x18) = 0x3f800000;
  ExceptionList = local_10;
  return;
}


// ==== 1043f980 Catch@1043f980

void Catch_1043f980(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 1043f994 Catch@1043f994

void Catch_1043f994(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"AActor::execKGetRigidBodyState");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1043fa00 FUN_1043fa00

void FUN_1043fa00(int param_1)

{
  byte bVar1;
  undefined1 local_54 [12];
  FQuat local_48 [48];
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_108111c0;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffa0;
  local_8 = 0;
  ExceptionList = &local_10;
  FQuat::FQuat(local_48);
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,local_54);
  local_18 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&local_18);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  ExceptionList = local_10;
  return;
}


// ==== 1043fab6 Catch@1043fab6

void Catch_1043fab6(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_10914c48);
}


// ==== 1043faca Catch@1043faca

void Catch_1043faca(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"AActor::execKDrawRigidBodyState");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1043fb20 FUN_1043fb20

UObject * FUN_1043fb20(UObject *param_1)

{
  int iVar1;
  
  if (param_1 != (UObject *)0x0) {
    iVar1 = UObject::IsA(param_1,&UKarmaParams::PrivateStaticClass);
    if (iVar1 != 0) {
      return param_1;
    }
  }
  return (UObject *)0x0;
}


// ==== 1043fb50 FUN_1043fb50

UObject * FUN_1043fb50(UObject *param_1)

{
  int iVar1;
  
  if (param_1 != (UObject *)0x0) {
    iVar1 = UObject::IsA(param_1,&UKarmaParamsRBFull::PrivateStaticClass);
    if (iVar1 != 0) {
      return param_1;
    }
  }
  return (UObject *)0x0;
}


// ==== 1043fb80 FUN_1043fb80

void FUN_1043fb80(int param_1)

{
  byte bVar1;
  int iVar2;
  int in_ECX;
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_108111d0;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffd4;
  local_8 = 0;
  local_18 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  ExceptionList = &local_10;
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&local_18);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  if (*(int *)(in_ECX + 0x348) != 0) {
    iVar2 = thunk_FUN_1043fb20(*(int *)(in_ECX + 0x348));
    if (iVar2 != 0) {
      *(undefined4 *)(iVar2 + 0x60) = local_18;
      ExceptionList = local_10;
      return;
    }
  }
  ExceptionList = local_10;
  return;
}


// ==== 1043fc42 Catch@1043fc42

void Catch_1043fc42(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_10914c48);
}


// ==== 1043fc56 Catch@1043fc56

void Catch_1043fc56(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"AActor::execKSetMass");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1043fcb0 FUN_1043fcb0

void FUN_1043fcb0(int param_1,undefined4 *param_2)

{
  int iVar1;
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_108111e0;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  if (*(int *)(in_ECX + 0x348) != 0) {
    iVar1 = thunk_FUN_1043fb20(*(int *)(in_ECX + 0x348));
    if (iVar1 != 0) {
      *param_2 = *(undefined4 *)(iVar1 + 0x60);
      ExceptionList = local_10;
      return;
    }
  }
  ExceptionList = local_10;
  return;
}


// ==== 1043fd51 Catch@1043fd51

void Catch_1043fd51(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 1043fd65 Catch@1043fd65

void Catch_1043fd65(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"AActor::execKGetMass");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1043fdc0 FUN_1043fdc0

void FUN_1043fdc0(int param_1)

{
  byte bVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 local_38 [3];
  undefined4 local_2c [5];
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_108111f0;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffbc;
  local_8 = 0;
  ExceptionList = &local_10;
  *(undefined4 *)GPropAddr_exref = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,local_2c);
  if (*(int *)GPropObject_exref != 0) {
    (**(code **)(**(int **)GPropObject_exref + 0x60))(*(undefined4 *)GProperty_exref);
  }
  if (*(int *)GPropAddr_exref == 0) {
    puVar3 = local_2c;
  }
  else {
    puVar3 = *(undefined4 **)GPropAddr_exref;
  }
  *(undefined4 *)GPropAddr_exref = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,local_38);
  if (*(int *)GPropObject_exref != 0) {
    (**(code **)(**(int **)GPropObject_exref + 0x60))(*(undefined4 *)GProperty_exref);
  }
  if (*(int *)GPropAddr_exref == 0) {
    puVar4 = local_38;
  }
  else {
    puVar4 = *(undefined4 **)GPropAddr_exref;
  }
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  if (*(int *)(local_18 + 0x348) == 0) {
    ExceptionList = local_10;
    return;
  }
  iVar2 = thunk_FUN_1043fb50(*(int *)(local_18 + 0x348));
  if (iVar2 != 0) {
    *puVar4 = *(undefined4 *)(iVar2 + 0x9c);
    puVar4[1] = *(undefined4 *)(iVar2 + 0xa0);
    puVar4[2] = *(undefined4 *)(iVar2 + 0xa4);
    *puVar3 = *(undefined4 *)(iVar2 + 0xa8);
    puVar3[1] = *(undefined4 *)(iVar2 + 0xac);
    puVar3[2] = *(undefined4 *)(iVar2 + 0xb0);
    ExceptionList = local_10;
    return;
  }
  iVar2 = *(int *)(local_18 + 0x38);
  if ((iVar2 != 0) && (*(int *)(iVar2 + 0x1f0) != 0)) {
    iVar2 = *(int *)(iVar2 + 0x1f0);
    *puVar4 = *(undefined4 *)(iVar2 + 0x34);
    puVar4[1] = *(undefined4 *)(iVar2 + 0x38);
    puVar4[2] = *(undefined4 *)(iVar2 + 0x3c);
    *puVar3 = *(undefined4 *)(iVar2 + 0x40);
    puVar3[1] = *(undefined4 *)(iVar2 + 0x44);
    puVar3[2] = *(undefined4 *)(iVar2 + 0x48);
  }
  ExceptionList = local_10;
  return;
}


// ==== 1043ff8f Catch@1043ff8f

void Catch_1043ff8f(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_10914c48);
}


