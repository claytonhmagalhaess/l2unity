// ==== 10004190 FUN_10004190 depth=0 from=raiz callees=CORE.DLL::FString::operator_int@EXTERNAL:000001a1 CORE.DLL::FString::operator=@EXTERNAL:000001a2 FUN_10054cc0@10054cc0
// strings: 

void __thiscall FUN_10004190(int param_1,FString *param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101d7240;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_10054cc0();
  iVar1 = FString::operator_int(param_2);
  if (iVar1 != 0) {
    FString::operator=((FString *)(param_1 + 0x310),param_2);
    *(undefined4 *)(param_1 + 0x2e0) = param_3;
    *(undefined4 *)(param_1 + 0x328) = param_4;
  }
  ExceptionList = local_10;
  return;
}


// ==== 10006d80 FUN_10006d80 depth=0 from=raiz callees=FUN_10006980@10006980
// strings: 

undefined4 * __thiscall
FUN_10006d80(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_101d79c8;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_10006980(param_2,param_3,param_4);
  *param_1 = NCExButton::vftable;
  ExceptionList = local_10;
  return param_1;
}


// ==== 1000eb50 FUN_1000eb50 depth=0 from=raiz callees=FUN_10016ea0@10016ea0
// strings: 

void __thiscall FUN_1000eb50(int param_1,int param_2)

{
  if ((*(int *)(param_1 + 0x334) != 0) && (param_2 != 0)) {
    FUN_10016ea0(param_2,1);
  }
  return;
}


// ==== 1000fc80 FUN_1000fc80 depth=0 from=raiz callees=CORE.DLL::FString::operator_int@EXTERNAL:000001a1 CORE.DLL::FString::operator=@EXTERNAL:000001a2 FUN_1000cf80@1000cf80 FUN_1000cfd0@1000cfd0 FUN_1005d0a0@1005d0a0 FUN_1000eb50@1000eb50 CORE.DLL::FString::operator*@EXTERNAL:0000019f FUN_10014b00@10014b00
// strings: 

void __thiscall FUN_1000fc80(int *param_1,int *param_2)

{
  uint *puVar1;
  int iVar2;
  ushort *puVar3;
  code *pcVar4;
  FString *this;
  uint uStack_3c;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101d90b0;
  local_10 = ExceptionList;
  uStack_3c = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_3c;
  ExceptionList = &local_10;
  local_8 = 0;
  if ((param_1[0xca] == 0x46) && (param_1[0xdb] == 0x5e6)) {
    pcVar4 = *(code **)(*param_1 + 0x13c);
LAB_1000fce2:
    (*pcVar4)();
    puVar1 = (uint *)local_14;
  }
  else {
    puVar1 = &uStack_3c;
    if (param_1[0xca] != -1) {
      pcVar4 = *(code **)(*param_1 + 0x1fc);
      goto LAB_1000fce2;
    }
  }
  local_14 = (undefined1 *)puVar1;
  (**(code **)(*param_1 + 0x174))();
  param_1[0xce] = param_2[5];
  param_1[0xca] = *param_2;
  iVar2 = param_2[1];
  param_1[0xcb] = iVar2;
  FUN_10014b00(iVar2);
  param_1[0xcd] = param_2[4];
  param_1[0xd4] = param_2[6];
  param_1[0xcc] = param_2[2];
  iVar2 = param_2[7];
  param_1[0xcf] = iVar2;
  if (iVar2 == 0) {
    (**(code **)(*(int *)param_1[200] + 0x13c))();
  }
  else {
    param_1[0xd0] = param_2[8];
    (**(code **)(*(int *)param_1[200] + 0x138))();
    FUN_1000cf80();
    FUN_1000cfd0();
  }
  this = (FString *)(param_2 + 0xc);
  iVar2 = FString::operator_int(this);
  if (iVar2 == 0) {
    this = (FString *)(param_2 + 9);
    iVar2 = FString::operator_int(this);
    if (iVar2 == 0) goto LAB_1000fdaf;
  }
  FString::operator=((FString *)(param_1 + 0xd5),this);
LAB_1000fdaf:
  iVar2 = FString::operator_int((FString *)(param_2 + 0x18));
  if (iVar2 != 0) {
    FString::operator=((FString *)(param_1 + 0xd8),(FString *)(param_2 + 0x18));
  }
  if (param_2[0x1b] != 0) {
    param_1[0xdb] = param_2[0x1b];
  }
  if (param_2[0x1c] != 0) {
    param_1[0xdc] = param_2[0x1c];
  }
  if (param_2[0x1d] != 0) {
    param_1[0xdd] = param_2[0x1d];
  }
  local_28 = 0;
  local_2c = 0;
  local_24 = 0;
  local_20 = 0;
  FUN_1005d0a0(&local_2c);
  param_1[0xe7] = param_2[0x23];
  param_1[0xde] = param_2[0x24];
  param_1[0xdf] = param_2[0x25];
  param_1[0xe0] = param_2[0x26];
  FString::operator=((FString *)(param_1 + 0xe1),(FString *)(param_2 + 0x27));
  FString::operator=((FString *)(param_1 + 0xe4),(FString *)(param_2 + 0x2a));
  if (param_1[0xcd] != 0) {
    iVar2 = FString::operator_int((FString *)(param_2 + 0x1e));
    if (iVar2 != 0) {
      puVar3 = FString::operator*((FString *)(param_2 + 0x1e));
      FUN_1000eb50(puVar3);
    }
  }
  ExceptionList = local_10;
  return;
}


// ==== 10013300 FUN_10013300 depth=0 from=raiz callees=CORE.DLL::FString::~FString@EXTERNAL:00000197 CORE.DLL::FString::operator=@EXTERNAL:000001a2
// strings: 

void __fastcall FUN_10013300(int param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101d9779;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 1;
  FString::operator=((FString *)(param_1 + 0x3f4),(FString *)&stack0x00000004);
  local_8 = 0xffffffff;
  FString::~FString((FString *)&stack0x00000004);
  ExceptionList = local_10;
  return;
}


// ==== 10014b00 FUN_10014b00 depth=0 from=raiz callees=
// strings: 

void __thiscall FUN_10014b00(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x334) = param_2;
  return;
}


// ==== 1001c510 FUN_1001c510 depth=0 from=raiz callees=FUN_100031f0@100031f0 FUN_1003f630@1003f630 CORE.DLL::FString::FString@EXTERNAL:000001a4
// strings: 10235c68=L2UI_CH3.FrameCtrl.FrameBackLeft | 10235c28=L2UI_CH3.FrameCtrl.FrameBackMid | 10235be0=L2UI_CH3.FrameCtrl.FrameBackRight | 10235ba0=L2UI_CH3.FrameCtrl.smallbar_h1 | 10235b60=L2UI_CH3.FrameCtrl.smallbar_h2 | 10235b20=L2UI_CH3.FrameCtrl.smallbar_h3 | 10235ae4=L2UI_CH3.FrameCtrl.smallbar1 | 10235aa8=L2UI_CH3.FrameCtrl.smallbar2 | 10235a6c=L2UI_CH3.FrameCtrl.smallbar3 | 

undefined4 * __thiscall
FUN_1001c510(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101da717;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_100031f0(DAT_103554c4 ^ (uint)&stack0xffffffe8);
  local_4 = 0;
  *param_1 = NCFrameCtrl::vftable;
  FString::FString((FString *)(param_1 + 0xb6));
  local_4 = CONCAT31(local_4._1_3_,1);
  param_1[0xbe] = 0;
  param_1[0xbf] = 0;
  param_1[199] = 0;
  param_1[0xc6] = 0;
  param_1[0xc9] = 0;
  param_1[200] = 0;
  param_1[0xd1] = 0;
  param_1[0xd0] = 0;
  uVar1 = FUN_1003f630(L"L2UI_CH3.FrameCtrl.FrameBackLeft",1);
  param_1[0xbb] = uVar1;
  uVar1 = FUN_1003f630(L"L2UI_CH3.FrameCtrl.FrameBackMid",1);
  param_1[0xbc] = uVar1;
  uVar1 = FUN_1003f630(L"L2UI_CH3.FrameCtrl.FrameBackRight",1);
  param_1[0xbd] = uVar1;
  uVar1 = FUN_1003f630(L"L2UI_CH3.FrameCtrl.smallbar_h1",1);
  param_1[0xc0] = uVar1;
  uVar1 = FUN_1003f630(L"L2UI_CH3.FrameCtrl.smallbar_h2",1);
  param_1[0xc1] = uVar1;
  uVar1 = FUN_1003f630(L"L2UI_CH3.FrameCtrl.smallbar_h3",1);
  param_1[0xc2] = uVar1;
  uVar1 = FUN_1003f630(L"L2UI_CH3.FrameCtrl.smallbar1",1);
  param_1[0xc3] = uVar1;
  uVar1 = FUN_1003f630(L"L2UI_CH3.FrameCtrl.smallbar2",1);
  param_1[0xc4] = uVar1;
  uVar1 = FUN_1003f630(L"L2UI_CH3.FrameCtrl.smallbar3",1);
  param_1[0xc5] = uVar1;
  param_1[0xd2] = param_2;
  param_1[0xd3] = 0;
  param_1[0xca] = param_3;
  param_1[0xcb] = param_4;
  param_1[0xcc] = 0;
  param_1[0xcf] = 0;
  param_1[0xb9] = 0xffffffff;
  ExceptionList = local_c;
  return param_1;
}


// ==== 10021000 FUN_10021000 depth=0 from=raiz callees=
// strings: 

void __thiscall
FUN_10021000(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9,
            undefined4 param_10)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101db160;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  (**(code **)(**(int **)(param_1 + 0x34) + 200))
            (param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10,0);
  ExceptionList = local_10;
  return;
}


// ==== 100210c0 FUN_100210c0 depth=0 from=raiz callees=
// strings: 

void __thiscall
FUN_100210c0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9,
            undefined4 param_10,undefined4 param_11,undefined4 param_12)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101db180;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  (**(code **)(**(int **)(param_1 + 0x34) + 0x134))
            (param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10,param_11,
             param_12);
  ExceptionList = local_10;
  return;
}


// ==== 100214c0 FUN_100214c0 depth=0 from=raiz callees=
// strings: 

void FUN_100214c0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  (**(code **)(*DAT_103663c0 + 0x8c))(param_1,param_2,param_3);
  return;
}


// ==== 10023820 FUN_10023820 depth=0 from=raiz callees=CORE.DLL::FString::operator=@EXTERNAL:000001a3 FUN_1003f630@1003f630
// strings: 

void __thiscall FUN_10023820(int param_1,int param_2,ushort *param_3,byte param_4)

{
  undefined4 uVar1;
  
  if (param_2 != 0) {
    uVar1 = FUN_1003f630(param_2,1);
    *(undefined4 *)(param_1 + 0x2d8) = uVar1;
  }
  if (param_3 != (ushort *)0x0) {
    FString::operator=((FString *)(param_1 + 0x2e4),param_3);
    *(uint *)(param_1 + 0x2f8) = (uint)param_4;
    return;
  }
  *(uint *)(param_1 + 0x2f8) = (uint)param_4;
  return;
}


// ==== 10034510 FUN_10034510 depth=0 from=raiz callees=
// strings: 

void __thiscall FUN_10034510(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 8) = param_2;
  return;
}


// ==== 10034ff0 FUN_10034ff0 depth=0 from=raiz callees=
// strings: 

void __thiscall FUN_10034ff0(int param_1,undefined4 param_2,undefined4 param_3)

{
  *(undefined4 *)(param_1 + 0x344) = param_2;
  *(undefined4 *)(param_1 + 0x348) = param_3;
  return;
}


// ==== 1004f590 FUN_1004f590 depth=0 from=raiz callees=
// strings: 

void __fastcall FUN_1004f590(undefined4 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  return;
}


// ==== 1004f740 FUN_1004f740 depth=0 from=raiz callees=FUN_1004f5b0@1004f5b0 FUN_1004f610@1004f610
// strings: 

void FUN_1004f740(undefined4 param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_1004f5b0();
  FUN_1004f610(param_1,uVar1);
  return;
}


// ==== 10050440 FUN_10050440 depth=0 from=raiz callees=CORE.DLL::FName::FName@EXTERNAL:0000019c FUN_10004c70@10004c70 FUN_10060d40@10060d40 FUN_10003dc0@10003dc0 CORE.DLL::FArray::Add@EXTERNAL:00000185 CORE.DLL::FString::FString@EXTERNAL:000001b0 CORE.DLL::UObject::GetTransientPackage@EXTERNAL:0000019b CORE.DLL::FString::~FString@EXTERNAL:00000197 FUN_100040d0@100040d0 FUN_10004d00@10004d00 FUN_100073a0@100073a0 FUN_10020bb0@10020bb0 CORE.DLL::UObject::StaticAllocateObject@EXTERNAL:000001b1 FUN_1005c1e0@1005c1e0
// strings: 10241fe0=Default.Darkyellow | 10230f28=Default.BlackTexture | 

int __thiscall
FUN_10050440(int param_1,int param_2,undefined4 param_3,int param_4,int param_5,ushort *param_6,
            ushort *param_7)

{
  code *pcVar1;
  ushort *puVar2;
  uint uVar3;
  UPackage *pUVar4;
  UObject *pUVar5;
  int *piVar6;
  undefined4 uVar7;
  int iVar8;
  FString *this;
  bool bVar9;
  int unaff_retaddr;
  int local_50;
  int local_4c;
  FString local_48 [12];
  FString local_3c [8];
  FString aFStack_34 [4];
  FString local_30 [12];
  FString local_24 [4];
  undefined4 uStack_20;
  ushort *puStack_18;
  int *piStack_14;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  iVar8 = param_5;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101e0b31;
  local_c = ExceptionList;
  uVar3 = DAT_103554c4 ^ (uint)&stack0xffffff9c;
  if (param_2 == 0) {
    return -1;
  }
  ExceptionList = &local_c;
  if (*(int *)(param_1 + 0x2e0) == 0) {
    *(undefined4 *)(param_1 + 0x2ec) = param_3;
  }
  if ((param_4 == 0) || (param_5 == 0)) {
    FUN_10020bb0(&local_50,param_2,0,0,0,0,0,0,uVar3);
    param_5 = local_50 + 10;
    iVar8 = local_4c + 5;
  }
  else {
    param_5 = param_4;
  }
  puVar2 = param_6;
  if ((param_6 == (ushort *)0x0) || (param_7 == (ushort *)0x0)) {
    FName::FName((FName *)&param_7,0);
    pUVar4 = UObject::GetTransientPackage();
    pUVar5 = UObject::StaticAllocateObject
                       (&DAT_10358d30,pUVar4,param_7,0,0,*(undefined4 *)GError_exref,0,0);
    bVar9 = pUVar5 == (UObject *)0x0;
    if (bVar9) {
      piVar6 = (int *)0x0;
    }
    else {
      FString::FString(local_24,(ushort *)L"Default.Darkyellow");
      local_4 = 2;
      FString::FString(local_30,(ushort *)L"Default.BlackTexture");
      local_4 = 3;
      piVar6 = (int *)FUN_100073a0(local_30,local_24,0);
    }
    local_4 = 2;
    if (!bVar9) {
      FString::~FString(local_30);
    }
    local_4 = 0xffffffff;
    if (bVar9) goto LAB_10050694;
    this = local_24;
  }
  else {
    FName::FName((FName *)&param_6,0);
    pUVar4 = UObject::GetTransientPackage();
    pUVar5 = UObject::StaticAllocateObject
                       (&DAT_10358d30,pUVar4,param_6,0,0,*(undefined4 *)GError_exref,0,0);
    bVar9 = pUVar5 == (UObject *)0x0;
    if (bVar9) {
      piVar6 = (int *)0x0;
    }
    else {
      FString::FString(local_3c,param_7);
      local_4 = 0;
      FString::FString(local_48,puVar2);
      local_4 = 1;
      piVar6 = (int *)FUN_100073a0(local_48,local_3c,0);
    }
    local_4 = 0;
    if (!bVar9) {
      FString::~FString(local_48);
    }
    local_4 = 0xffffffff;
    if (bVar9) goto LAB_10050694;
    this = local_3c;
  }
  local_4 = 0xffffffff;
  FString::~FString(this);
LAB_10050694:
  pcVar1 = *(code **)(*piVar6 + 0xc0);
  piVar6[0x73] = *(int *)(param_1 + 0x2e8);
  (*pcVar1)(*(undefined4 *)(param_1 + 0x2d8),0,param_5,iVar8,0,0,3);
  uVar7 = FUN_10060d40(piVar6,0x22);
  FUN_1005c1e0(uVar7);
  FUN_10004c70(*(undefined4 *)(param_1 + 0x2e0));
  FString::FString(aFStack_34,puStack_18);
  uStack_20 = 4;
  FUN_10003dc0(aFStack_34);
  uStack_20 = 0xffffffff;
  FString::~FString(aFStack_34);
  piVar6[199] = 2;
  piVar6[200] = 1;
  FUN_100040d0(param_2,1);
  bVar9 = *(int *)(param_1 + 0x2e0) != 0;
  if (!bVar9) {
    *(int **)(param_1 + 0x2ec) = piStack_14;
  }
  FUN_10004d00(bVar9);
  *(int *)(param_1 + 0x2d8) = *(int *)(param_1 + 0x2d8) + param_5 + unaff_retaddr;
  iVar8 = FArray::Add((FArray *)(param_1 + 0x2dc),1,4);
  *(int **)(*(int *)(param_1 + 0x2dc) + iVar8 * 4) = piVar6;
  iVar8 = FArray::Add((FArray *)(param_1 + 0x2f0),1,4);
  *(int **)(*(int *)(param_1 + 0x2f0) + iVar8 * 4) = piStack_14;
  (**(code **)(*piStack_14 + 0x120))(0x10000000);
  ExceptionList = local_c;
  return *(int *)(param_1 + 0x2e0) + -1;
}


// ==== 100514d0 FUN_100514d0 depth=0 from=raiz callees=FUN_100031f0@100031f0 CORE.DLL::FArray::FArray@EXTERNAL:00000184
// strings: 

undefined4 * __fastcall FUN_100514d0(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101e0d4d;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_100031f0(DAT_103554c4 ^ (uint)&stack0xffffffe4);
  local_4 = 0;
  *param_1 = NCTabControl::vftable;
  param_1[0xb6] = 0;
  FArray::FArray((FArray *)(param_1 + 0xb7));
  local_4._0_1_ = 2;
  param_1[0xbb] = 0;
  FArray::FArray((FArray *)(param_1 + 0xbc));
  local_4 = CONCAT31(local_4._1_3_,4);
  FArray::FArray((FArray *)(param_1 + 0xbf));
  param_1[0xc2] = 0;
  param_1[0xc3] = 0;
  ExceptionList = local_c;
  return param_1;
}


// ==== 10062790 FUN_10062790 depth=0 from=raiz callees=__security_check_cookie@101c16c2 CORE.DLL::FString::FString@EXTERNAL:000001b0 CORE.DLL::FString::operator*@EXTERNAL:0000019f CORE.DLL::appSprintf@EXTERNAL:000001ba
// strings: 10245ae8=%d%s %d%s %d%s | 

void FUN_10062790(FString *param_1,int param_2)

{
  int iVar1;
  ushort *puVar2;
  ushort *puVar3;
  ushort *puVar4;
  int iVar5;
  void *local_414;
  undefined1 *puStack_410;
  undefined4 local_40c;
  ushort local_408 [512];
  uint local_8;
  
  puStack_410 = &LAB_101e353a;
  local_414 = ExceptionList;
  local_8 = DAT_103554c4 ^ (uint)local_408;
  ExceptionList = &local_414;
  local_40c = 1;
  iVar1 = (param_2 % 0x15180) / 0xe10;
  iVar5 = ((param_2 % 0x15180) % 0xe10) / 0x3c;
  puVar2 = FString::operator*((FString *)(GL2GameData_exref + 0x6dcf0));
  puVar3 = FString::operator*((FString *)(GL2GameData_exref + 0x6dce4));
  puVar4 = FString::operator*((FString *)(GL2GameData_exref + 0x6dcd8));
  appSprintf(local_408,(ushort *)L"%d%s %d%s %d%s",param_2 / 0x15180,puVar4,iVar1,puVar3,iVar5,
             puVar2);
  FString::FString(param_1,local_408);
  ExceptionList = local_414;
  __security_check_cookie(local_8 ^ (uint)local_408);
  return;
}


// ==== 100a98c0 FUN_100a98c0 depth=0 from=raiz callees=FUN_100be240@100be240 CORE.DLL::FString::FString@EXTERNAL:000001b0
// strings: 

FString * __thiscall FUN_100a98c0(int param_1,FString *param_2)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101f01ba;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (*(int *)(param_1 + 0xc) == 0) {
    FString::FString(param_2,(ushort *)&DAT_1022f9f8);
  }
  else {
    FUN_100be240(param_2);
  }
  ExceptionList = local_c;
  return param_2;
}


// ==== 100b0ed0 FUN_100b0ed0 depth=0 from=raiz callees=FUN_10061e90@10061e90
// strings: 

undefined4 __fastcall FUN_100b0ed0(int param_1)

{
  if (*(int *)(param_1 + 0x1cc) != 0) {
    *(undefined4 *)(param_1 + 0x1cc) = 0;
  }
  if (*(int *)(param_1 + 0x1d0) != 0) {
    *(undefined4 *)(param_1 + 0x1d0) = 0;
  }
  if (*(int *)(param_1 + 0x1d4) != 0) {
    *(undefined4 *)(param_1 + 0x1d4) = 0;
  }
  if (*(int *)(param_1 + 0x1d8) != 0) {
    *(undefined4 *)(param_1 + 0x1d8) = 0;
  }
  if (*(int *)(param_1 + 0x1dc) != 0) {
    *(undefined4 *)(param_1 + 0x1dc) = 0;
  }
  FUN_10061e90();
  return 1;
}


// ==== 100b0f30 FUN_100b0f30 depth=0 from=raiz callees=
// strings: 

undefined4 __fastcall FUN_100b0f30(int param_1)

{
  (**(code **)(**(int **)(param_1 + 0x1cc) + 0x174))();
  (**(code **)(**(int **)(param_1 + 0x1d0) + 0x174))();
  return 1;
}


// ==== 100b0f80 FUN_100b0f80 depth=0 from=raiz callees=FUN_10061b40@10061b40 FUN_1003f630@1003f630
// strings: 102564c0=L2UI_CH3.Msn.messenger_back1 | 

undefined4 __fastcall FUN_100b0f80(int param_1)

{
  undefined4 uVar1;
  
  FUN_10061b40();
  uVar1 = FUN_1003f630(L"L2UI_CH3.Msn.messenger_back1",1);
  *(undefined4 *)(param_1 + 0x1d4) = uVar1;
  return 1;
}


// ==== 100b14b0 FUN_100b14b0 depth=0 from=raiz callees=
// strings: 

void __fastcall FUN_100b14b0(int param_1)

{
                    /* WARNING: Could not recover jumptable at 0x100b14be. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(param_1 + 600) + 0x138))();
  return;
}


// ==== 100b1c90 FUN_100b1c90 depth=0 from=raiz callees=FUN_10061e90@10061e90
// strings: 

undefined4 __fastcall FUN_100b1c90(int param_1)

{
  if (*(int *)(param_1 + 0x1cc) != 0) {
    *(undefined4 *)(param_1 + 0x1cc) = 0;
  }
  if (*(int *)(param_1 + 0x1d0) != 0) {
    *(undefined4 *)(param_1 + 0x1d0) = 0;
  }
  if (*(int *)(param_1 + 0x1d4) != 0) {
    *(undefined4 *)(param_1 + 0x1d4) = 0;
  }
  FUN_10061e90();
  return 1;
}


// ==== 100b1cd0 FUN_100b1cd0 depth=0 from=raiz callees=FUN_10023820@10023820 CORE.DLL::FString::operator*@EXTERNAL:0000019f
// strings: 

void __thiscall FUN_100b1cd0(int param_1,undefined4 param_2)

{
  ushort *puVar1;
  undefined4 uVar2;
  
  if (*(int *)(param_1 + 0x50) != 0) {
    uVar2 = 0;
    puVar1 = FString::operator*((FString *)(GL2GameData_exref + 0x6d7b0));
    FUN_10023820(param_2,puVar1,uVar2);
  }
  return;
}


// ==== 100b1d00 FUN_100b1d00 depth=0 from=raiz callees=__security_check_cookie@101c16c2 FUN_100c7ac0@100c7ac0 CORE.DLL::appStrcmp@EXTERNAL:0000014d
// strings: 102565c4=6.2.0.205 | 

void FUN_100b1d00(void)

{
  int iVar1;
  ushort local_20c [260];
  uint local_4;
  
  local_4 = DAT_103554c4 ^ (uint)local_20c;
  FUN_100c7ac0(local_20c);
  iVar1 = appStrcmp(local_20c,(ushort *)L"6.2.0.205");
  DAT_1037c9d0 = (uint)(iVar1 < 0);
  __security_check_cookie(local_4 ^ (uint)local_20c);
  return;
}


// ==== 100b1fe0 FUN_100b1fe0 depth=0 from=raiz callees=FUN_10003cf0@10003cf0 CORE.DLL::FName::FName@EXTERNAL:0000019c FUN_10061b40@10061b40 FUN_10060d40@10060d40 FUN_1001a820@1001a820 FUN_100131e0@100131e0 CORE.DLL::FString::FString@EXTERNAL:000001b0 FUN_10006980@10006980 CORE.DLL::UObject::GetTransientPackage@EXTERNAL:0000019b CORE.DLL::FString::~FString@EXTERNAL:00000197 FUN_10058020@10058020 FUN_1003f630@1003f630 CORE.DLL::UObject::StaticAllocateObject@EXTERNAL:000001b1 FUN_1005c1e0@1005c1e0
// strings: 102564c0=L2UI_CH3.Msn.messenger_back1 | 10256650=L2UI_CH3.Msn.msnlogo | 10252b68=L2UI_CH3.Button.SmallButton2_down | 10252b28=L2UI_CH3.Button.SmallButton2 | 10252b68=L2UI_CH3.Button.SmallButton2_down | 10252b28=L2UI_CH3.Button.SmallButton2 | 10256610=L2UI_CH3.Button.bigbutton3_down | 102565d8=L2UI_CH3.Button.bigbutton3 | 

undefined4 __fastcall FUN_100b1fe0(int *param_1)

{
  int iVar1;
  UObject *pUVar2;
  int *piVar3;
  UPackage *pUVar4;
  uint uVar5;
  undefined4 *puVar6;
  void *pvVar7;
  undefined4 uVar8;
  UPackage *pUStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  UPackage **ppUStack_84;
  undefined4 *puStack_80;
  UPackage *pUStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  uint uStack_64;
  UPackage *pUStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  wchar_t *pwStack_48;
  undefined4 uVar9;
  undefined4 local_28 [7];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_101f258c;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_10061b40();
  pwStack_48 = L"L2UI_CH3.Msn.messenger_back1";
  uStack_4c = 0x100b2024;
  iVar1 = FUN_1003f630();
  pwStack_48 = L"L2UI_CH3.Msn.msnlogo";
  param_1[0x79] = iVar1;
  uStack_4c = 0x100b2038;
  iVar1 = FUN_1003f630();
  param_1[0x7a] = iVar1;
  pwStack_48 = 
  L"㶋쏔ဢ\xd7ffඋ쏜ဢᆋ䲋ᠤⶋ쐬ဢjj橒樀儀桐헠ဵ헿쒃蔠瓀樘樀栁\x80";
  FName::FName((FName *)local_28,0);
  pUStack_5c = UObject::GetTransientPackage();
  uStack_4c = *(undefined4 *)GError_exref;
  pwStack_48 = (wchar_t *)0x0;
  uStack_50 = 0;
  uStack_54 = 0;
  uStack_58 = local_28[0];
  uStack_64 = 0x100b2076;
  pUVar2 = UObject::StaticAllocateObject();
  if (pUVar2 == (UObject *)0x0) {
    piVar3 = (int *)0x0;
  }
  else {
    pwStack_48 = (wchar_t *)0x1;
    uStack_4c = 0x80;
    uStack_50 = 1;
    uStack_54 = 0;
    uStack_58 = 6;
    pUStack_5c = (UPackage *)0x100b2093;
    piVar3 = (int *)FUN_1001a820();
  }
  uVar9 = 3;
  pwStack_48 = (wchar_t *)0x0;
  uStack_4c = 0;
  uStack_50 = 0x11;
  uStack_54 = 0x97;
  param_1[0x73] = (int)piVar3;
  uStack_58 = 0x83;
  pUStack_5c = (UPackage *)0x5c;
  (**(code **)(*piVar3 + 0xc0))();
  uStack_64 = param_1[0x73];
  uStack_68 = 0x100b20cd;
  FUN_10060d40();
  uStack_64 = 0x100b20d9;
  FUN_1005c1e0();
  uStack_64 = 0x100b20e6;
  FUN_100131e0();
  uStack_64 = 0x100b20f2;
  FName::FName((FName *)&stack0xffffffbc,0);
  uStack_74 = uVar9;
  pUStack_78 = UObject::GetTransientPackage();
  uStack_68 = *(undefined4 *)GError_exref;
  uStack_64 = 0;
  uStack_6c = 0;
  uStack_70 = 0;
  puStack_80 = (undefined4 *)0x100b2112;
  pUVar2 = UObject::StaticAllocateObject();
  if (pUVar2 == (UObject *)0x0) {
    iVar1 = 0;
  }
  else {
    uStack_64 = 1;
    uStack_68 = 0x80;
    uStack_6c = 1;
    uStack_70 = 0;
    uStack_74 = 2;
    pUStack_78 = (UPackage *)0x100b212f;
    iVar1 = FUN_1001a820();
  }
  uVar9 = 3;
  uStack_64 = 0;
  uStack_68 = 0;
  param_1[0x74] = iVar1;
  uStack_6c = 0x11;
  *(undefined4 *)(iVar1 + 0x1cc) = 0xa56;
  uStack_70 = 0x97;
  uStack_74 = 0x97;
  pUStack_78 = (UPackage *)0x5c;
  (**(code **)(*(int *)param_1[0x74] + 0xc0))();
  puStack_80 = (undefined4 *)param_1[0x74];
  ppUStack_84 = (UPackage **)0x100b2177;
  FUN_10060d40();
  puStack_80 = (undefined4 *)0x100b2183;
  FUN_1005c1e0();
  puStack_80 = (undefined4 *)0x100b2190;
  FUN_100131e0();
  puStack_80 = (undefined4 *)0x100b219c;
  FName::FName((FName *)&stack0xffffffa0,0);
  uStack_90 = uVar9;
  pUStack_94 = UObject::GetTransientPackage();
  ppUStack_84 = *(UPackage ***)GError_exref;
  puStack_80 = (undefined4 *)0x0;
  uStack_88 = 0;
  uStack_8c = 0;
  pUVar2 = UObject::StaticAllocateObject();
  if (pUVar2 == (UObject *)0x0) {
    iVar1 = 0;
  }
  else {
    puStack_80 = (undefined4 *)0x100b21d4;
    FString::FString((FString *)&uStack_50,(ushort *)L"L2UI_CH3.Button.SmallButton2_down");
    uStack_64 = 1;
    puStack_80 = (undefined4 *)0x100b21f3;
    FString::FString((FString *)&pUStack_5c,(ushort *)L"L2UI_CH3.Button.SmallButton2");
    puStack_80 = &uStack_50;
    ppUStack_84 = &pUStack_5c;
    uStack_64 = 3;
    uStack_88 = 0x100b2216;
    iVar1 = FUN_10006980();
  }
  param_1[0x75] = iVar1;
  uVar5 = uStack_64;
  if ((uStack_64 & 2) != 0) {
    uVar5 = uStack_64 & 0xfffffffd;
    uStack_64 = uVar5;
    FString::~FString((FString *)&pUStack_5c);
  }
  if ((uVar5 & 1) != 0) {
    uStack_64 = uVar5 & 0xfffffffe;
    FString::~FString((FString *)&uStack_50);
  }
  uVar9 = 3;
  puStack_80 = (undefined4 *)0x0;
  ppUStack_84 = (UPackage **)0x0;
  uStack_88 = 0x15;
  *(undefined4 *)(param_1[0x75] + 0x1cc) = 0xa09;
  uStack_8c = 0x42;
  uStack_90 = 0xb0;
  pUStack_94 = (UPackage *)0x48;
  (**(code **)(*(int *)param_1[0x75] + 0xc0))();
  FUN_10060d40(param_1[0x75]);
  FUN_1005c1e0();
  FUN_10003cf0();
  FName::FName((FName *)&stack0xffffff84,0);
  pUVar4 = UObject::GetTransientPackage();
  pUVar2 = UObject::StaticAllocateObject
                     (&DAT_10357870,pUVar4,uVar9,0,0,*(undefined4 *)GError_exref,0);
  if (pUVar2 == (UObject *)0x0) {
    iVar1 = 0;
  }
  else {
    FString::FString((FString *)&pUStack_78,(ushort *)L"L2UI_CH3.Button.SmallButton2_down");
    uStack_58 = 2;
    puStack_80 = (undefined4 *)((uint)puStack_80 | 4);
    FString::FString((FString *)&uStack_6c,(ushort *)L"L2UI_CH3.Button.SmallButton2");
    uStack_58 = 3;
    puStack_80 = (undefined4 *)((uint)puStack_80 | 8);
    iVar1 = FUN_10006980(&uStack_6c,&pUStack_78);
  }
  param_1[0x76] = iVar1;
  uStack_58 = 2;
  puVar6 = puStack_80;
  if (((uint)puStack_80 & 8) != 0) {
    puVar6 = (undefined4 *)((uint)puStack_80 & 0xfffffff7);
    puStack_80 = puVar6;
    FString::~FString((FString *)&uStack_6c);
  }
  uStack_58 = 0xffffffff;
  if (((uint)puVar6 & 4) != 0) {
    puVar6 = (undefined4 *)((uint)puVar6 & 0xfffffffb);
    puStack_80 = puVar6;
    FString::~FString((FString *)&pUStack_78);
  }
  uVar8 = 3;
  *(undefined4 *)(param_1[0x76] + 0x1cc) = 0xa0a;
  (**(code **)(*(int *)param_1[0x76] + 0xc0))(0x8e,0xb0,0x42,0x15,0,0);
  uVar9 = FUN_10060d40(param_1[0x76],2);
  FUN_1005c1e0(uVar9);
  FUN_10003cf0(0x8d);
  FName::FName((FName *)&stack0xffffff68,0);
  pUVar4 = UObject::GetTransientPackage();
  pUVar2 = UObject::StaticAllocateObject
                     (&DAT_10357870,pUVar4,uVar8,0,0,*(undefined4 *)GError_exref,0,0);
  if (pUVar2 == (UObject *)0x0) {
    iVar1 = 0;
  }
  else {
    FString::FString((FString *)&pUStack_94,(ushort *)L"L2UI_CH3.Button.bigbutton3_down");
    uStack_74 = 4;
    FString::FString((FString *)&uStack_88,(ushort *)L"L2UI_CH3.Button.bigbutton3");
    uStack_74 = 5;
    puVar6 = (undefined4 *)((uint)puVar6 | 0x30);
    iVar1 = FUN_10006980(&uStack_88,&pUStack_94,0);
  }
  param_1[0x77] = iVar1;
  uStack_74 = 4;
  if (((uint)puVar6 & 0x20) != 0) {
    puVar6 = (undefined4 *)((uint)puVar6 & 0xffffffdf);
    FString::~FString((FString *)&uStack_88);
  }
  uStack_74 = 0xffffffff;
  if (((uint)puVar6 & 0x10) != 0) {
    FString::~FString((FString *)&pUStack_94);
  }
  pvVar7 = (void *)0x17;
  *(undefined4 *)(param_1[0x77] + 0x1cc) = 0xa0b;
  (**(code **)(*(int *)param_1[0x77] + 0xc0))(0x48,0xcc,0x86,0x17,0,0,3);
  uVar9 = FUN_10060d40(param_1[0x77],2);
  FUN_1005c1e0(uVar9);
  FUN_10003cf0(0x3e3);
  iVar1 = *param_1;
  uVar9 = FUN_10058020();
  uVar9 = FUN_10058020(uVar9);
  (**(code **)(iVar1 + 0x10c))(uVar9);
  iVar1 = *(int *)param_1[0x73];
  uVar9 = FUN_10058020();
  uVar9 = FUN_10058020(uVar9);
  (**(code **)(iVar1 + 0x10c))(uVar9);
  iVar1 = *(int *)param_1[0x74];
  uVar9 = FUN_10058020();
  uVar9 = FUN_10058020(uVar9);
  (**(code **)(iVar1 + 0x10c))(uVar9);
  iVar1 = *(int *)param_1[0x75];
  uVar9 = FUN_10058020();
  uVar9 = FUN_10058020(uVar9);
  (**(code **)(iVar1 + 0x10c))(uVar9);
  iVar1 = *(int *)param_1[0x76];
  uVar9 = FUN_10058020();
  uVar9 = FUN_10058020(uVar9);
  (**(code **)(iVar1 + 0x10c))(uVar9);
  ExceptionList = pvVar7;
  return 1;
}


// ==== 100b2600 FUN_100b2600 depth=0 from=raiz callees=FUN_101c19e0@101c19e0 FUN_100217a0@100217a0 FUN_100212e0@100212e0 FUN_10020bb0@10020bb0 CORE.DLL::FString::operator*@EXTERNAL:0000019f FUN_10021a00@10021a00 FUN_10021df0@10021df0
// strings: 

undefined4 __thiscall FUN_100b2600(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  ushort *puVar3;
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
  undefined4 uVar16;
  undefined1 local_8 [8];
  
  uVar1 = *(undefined4 *)(param_1 + 0x80);
  uVar2 = *(undefined4 *)(param_1 + 0x84);
  *(undefined4 *)(param_2 + 0x38) = uVar1;
  *(undefined4 *)(param_2 + 0x3c) = uVar2;
  *(undefined4 *)(param_2 + 0x6c) = uVar1;
  *(undefined4 *)(param_2 + 0x54) = *(undefined4 *)(param_2 + 0x3c);
  *(undefined4 *)(param_2 + 0x58) = 0;
  uVar1 = FUN_101c19e0();
  uVar2 = FUN_101c19e0(uVar1);
  FUN_10021df0(*(undefined4 *)(param_1 + 0x80),*(undefined4 *)(param_1 + 0x84),uVar2,uVar1);
  if (*(int *)(param_1 + 0x1e4) != 0) {
    FUN_10021a00(0,0,0x100,0x161,0,0,0x100,0x161,*(int *)(param_1 + 0x1e4),0xff,1);
  }
  if (*(int *)(param_1 + 0x1e8) != 0) {
    FUN_10021a00(0x5f,0x116,0x8e,0x17,0,0,0x8e,0x17,*(int *)(param_1 + 0x1e8),0xff,1);
  }
  uVar15 = 0;
  uVar13 = 0;
  uVar11 = 0;
  uVar9 = 0;
  uVar2 = 0;
  uVar1 = 0;
  puVar3 = FString::operator*((FString *)(GL2GameData_exref + 0x6d7e0));
  FUN_10020bb0(local_8,puVar3,uVar1,uVar2,uVar9,uVar11,uVar13,uVar15);
  uVar16 = 0xffffffff;
  uVar14 = 0;
  uVar12 = 0;
  uVar10 = 0;
  uVar8 = 0;
  uVar7 = 0;
  uVar6 = 0;
  uVar5 = 0;
  uVar4 = 0;
  uVar15 = 0;
  uVar13 = 0;
  uVar11 = 0;
  puVar3 = FString::operator*((FString *)(GL2GameData_exref + 0x6d7e0));
  uVar9 = 0xffdcdcdc;
  uVar2 = 0x6d;
  uVar1 = FUN_101c19e0(0x6d,0xffdcdcdc,puVar3,uVar11,uVar13,uVar15,uVar4,uVar5,uVar6,uVar7,uVar8,
                       uVar10,uVar12,uVar14,uVar16);
  FUN_100217a0(uVar1,uVar2,uVar9,puVar3,uVar11,uVar13,uVar15,uVar4,uVar5,uVar6,uVar7,uVar8,uVar10,
               uVar12,uVar14,uVar16);
  uVar10 = 0xffffffff;
  uVar8 = 0;
  uVar7 = 0;
  uVar6 = 0;
  uVar5 = 0;
  uVar4 = 0;
  uVar15 = 0;
  uVar13 = 0;
  uVar11 = 0;
  uVar9 = 0;
  uVar2 = 0;
  uVar1 = 0;
  puVar3 = FString::operator*((FString *)(GL2GameData_exref + 0x6d7ec));
  FUN_100217a0(0x10,0x86,0xffdcdcdc,puVar3,uVar1,uVar2,uVar9,uVar11,uVar13,uVar15,uVar4,uVar5,uVar6,
               uVar7,uVar8,uVar10);
  uVar10 = 0xffffffff;
  uVar8 = 0;
  uVar7 = 0;
  uVar6 = 0;
  uVar5 = 0;
  uVar4 = 0;
  uVar15 = 0;
  uVar13 = 0;
  uVar11 = 0;
  uVar9 = 0;
  uVar2 = 0;
  uVar1 = 0;
  puVar3 = FString::operator*((FString *)(GL2GameData_exref + 0x6d7f8));
  FUN_100217a0(0x10,0x9b,0xffdcdcdc,puVar3,uVar1,uVar2,uVar9,uVar11,uVar13,uVar15,uVar4,uVar5,uVar6,
               uVar7,uVar8,uVar10);
  FUN_100212e0();
  *(undefined4 *)(param_2 + 0x38) = 0;
  *(undefined4 *)(param_2 + 0x3c) = 0;
  return 1;
}


// ==== 100b27f0 FUN_100b27f0 depth=0 from=raiz callees=CORE.DLL::FString::FString@EXTERNAL:000001b0 FUN_100b14c0@100b14c0
// strings: 

undefined4 __fastcall FUN_100b27f0(int param_1)

{
  int iVar1;
  ushort *puVar2;
  FString aFStack_34 [4];
  undefined4 uStack_30;
  FString aFStack_28 [8];
  undefined4 uStack_20;
  uint uStack_1c;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_101f25c2;
  local_c = ExceptionList;
  uStack_1c = DAT_103554c4 ^ (uint)&stack0xffffffe8;
  ExceptionList = &local_c;
  if (*(int *)(param_1 + 0x1e0) != 0) {
    uStack_20 = 0x100b2833;
    iVar1 = (**(code **)(**(int **)(param_1 + 0x1cc) + 0x1f8))();
    if (iVar1 != 0) {
      uStack_20 = 0x100b2847;
      iVar1 = (**(code **)(**(int **)(param_1 + 0x1d0) + 0x1f8))();
      if (iVar1 != 0) {
        uStack_20 = 0x100b285b;
        puVar2 = (ushort *)(**(code **)(**(int **)(param_1 + 0x1d0) + 0x1f8))();
        uStack_30 = 0x100b286b;
        FString::FString(aFStack_28,puVar2);
        uStack_4 = 0;
        puVar2 = (ushort *)(**(code **)(**(int **)(param_1 + 0x1cc) + 0x1f8))();
        FString::FString(aFStack_34,puVar2);
        uStack_4 = 0xffffffff;
        FUN_100b14c0();
      }
    }
  }
  uStack_20 = 0x100b28bb;
  (**(code **)(**(int **)(param_1 + 0x1cc) + 0x174))();
  uStack_20 = 0x100b28cb;
  (**(code **)(**(int **)(param_1 + 0x1d0) + 0x174))();
  ExceptionList = local_c;
  return 1;
}


// ==== 100b28f0 FUN_100b28f0 depth=0 from=raiz callees=FUN_100b14b0@100b14b0
// strings: 

undefined4 __fastcall FUN_100b28f0(int *param_1)

{
  (**(code **)(*param_1 + 0x13c))();
  FUN_100b14b0();
  return 1;
}


// ==== 100b2c60 FUN_100b2c60 depth=0 from=raiz callees=FUN_101c19e0@101c19e0 FUN_100217a0@100217a0 FUN_100212e0@100212e0 CORE.DLL::FString::operator*@EXTERNAL:0000019f FUN_1003f630@1003f630 FUN_10021a00@10021a00 FUN_10021df0@10021df0
// strings: 1025671c=L2UI_CH3.Msn.msnlogin01 | 

undefined4 __thiscall FUN_100b2c60(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  ushort *puVar3;
  FString *this;
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
  
  uVar1 = *(undefined4 *)(param_1 + 0x80);
  uVar2 = *(undefined4 *)(param_1 + 0x84);
  *(undefined4 *)(param_2 + 0x38) = uVar1;
  *(undefined4 *)(param_2 + 0x3c) = uVar2;
  *(undefined4 *)(param_2 + 0x6c) = uVar1;
  *(undefined4 *)(param_2 + 0x54) = *(undefined4 *)(param_2 + 0x3c);
  *(undefined4 *)(param_2 + 0x58) = 0;
  uVar1 = FUN_101c19e0();
  uVar2 = FUN_101c19e0(uVar1);
  FUN_10021df0(*(undefined4 *)(param_1 + 0x80),*(undefined4 *)(param_1 + 0x84),uVar2,uVar1);
  if (*(int *)(param_1 + 0x1d4) != 0) {
    FUN_10021a00(0,0,0x100,0x161,0,0,0x100,0x161,*(int *)(param_1 + 0x1d4),0xff,1);
  }
  uVar12 = 1;
  uVar2 = 0xff;
  uVar1 = FUN_1003f630(L"L2UI_CH3.Msn.msnlogin01",1);
  FUN_10021a00(0x2b,0x90,0x27,0x21,0,0,0x27,0x21,uVar1,uVar2,uVar12);
  uVar13 = 0xffffffff;
  uVar11 = 0;
  uVar10 = 0;
  uVar9 = 0;
  uVar8 = 0;
  uVar7 = 0;
  uVar6 = 0;
  uVar5 = 0;
  uVar4 = 0;
  uVar12 = 0;
  uVar2 = 0;
  uVar1 = 0;
  if (*(int *)(param_1 + 0x1d0) == 0) {
    this = (FString *)(GL2GameData_exref + 0x428f4);
  }
  else {
    this = (FString *)(GL2GameData_exref + 0x41cbc);
  }
  puVar3 = FString::operator*(this);
  FUN_100217a0(0x53,0xa0,0xffdcdcdc,puVar3,uVar1,uVar2,uVar12,uVar4,uVar5,uVar6,uVar7,uVar8,uVar9,
               uVar10,uVar11,uVar13);
  FUN_100212e0();
  *(undefined4 *)(param_2 + 0x38) = 0;
  *(undefined4 *)(param_2 + 0x3c) = 0;
  return 1;
}


// ==== 100b5fc0 FUN_100b5fc0 depth=0 from=raiz callees=CORE.DLL::FString::operator==@EXTERNAL:000001c7 CORE.DLL::FString::operator*@EXTERNAL:0000019f FUN_10021a00@10021a00 CORE.DLL::FString::operator=@EXTERNAL:000001a2 CORE.DLL::appStrcpy@EXTERNAL:000001c3 FUN_100a98c0@100a98c0 FUN_101c19e0@101c19e0 CORE.DLL::FString::~FString@EXTERNAL:00000197 FUN_100212e0@100212e0 CORE.DLL::FString::FString@EXTERNAL:000001a4 FUN_10023820@10023820 __security_check_cookie@101c16c2 FUN_10021df0@10021df0
// strings: 10256a28=L2UI_CH3.Msn.msnminimumicon1 | 102569f4=L2UI_CH3.Msn.msnminiicon5 | 102569b8=L2UI_CH3.Msn.msnminimumicon4 | 1025697c=L2UI_CH3.Msn.msnminimumicon2 | 10256940=L2UI_CH3.Msn.msnminimumicon3 | 

void __thiscall FUN_100b5fc0(int param_1,int param_2)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  FString *pFVar4;
  int iVar5;
  ushort *puVar6;
  wchar_t *pwVar7;
  FString local_230 [12];
  FString local_224 [12];
  ushort local_218 [260];
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101f2c58;
  local_c = ExceptionList;
  local_10 = DAT_103554c4 ^ (uint)local_230;
  uVar1 = DAT_103554c4 ^ (uint)&stack0xfffffdc4;
  ExceptionList = &local_c;
  uVar2 = *(undefined4 *)(param_1 + 0x80);
  uVar3 = *(undefined4 *)(param_1 + 0x84);
  *(undefined4 *)(param_2 + 0x38) = uVar2;
  *(undefined4 *)(param_2 + 0x3c) = uVar3;
  *(undefined4 *)(param_2 + 0x6c) = uVar2;
  *(undefined4 *)(param_2 + 0x54) = *(undefined4 *)(param_2 + 0x3c);
  *(undefined4 *)(param_2 + 0x58) = 0;
  uVar2 = FUN_101c19e0(uVar1);
  uVar3 = FUN_101c19e0(uVar2);
  FUN_10021df0(*(undefined4 *)(param_1 + 0x80),*(undefined4 *)(param_1 + 0x84),uVar3,uVar2);
  if (*(int *)(param_1 + 0x1d8) != 0) {
    FUN_10021a00(0,0x14,0x114,0x1c,0,0,0x114,0x1c,*(int *)(param_1 + 0x1d8),0xff,1);
  }
  if ((*(int *)(param_1 + 0x50) == 0) || (*(int *)(*(int *)(param_1 + 0x50) + 0x2f8) == 0))
  goto LAB_100b6229;
  FString::FString(local_230);
  local_4 = 0;
  if (*(int *)(*(int *)(param_1 + 0x1cc) + 0x1cc) != 0) {
    pFVar4 = (FString *)FUN_100a98c0(local_224);
    local_4._0_1_ = 1;
    FString::operator=(local_230,pFVar4);
    local_4 = (uint)local_4._1_3_ << 8;
    FString::~FString(local_224);
  }
  iVar5 = FString::operator==(local_230,(ushort *)&DAT_10251d70);
  if (iVar5 == 0) {
    iVar5 = FString::operator==(local_230,(ushort *)&DAT_10251d3c);
    if ((((iVar5 != 0) ||
         (iVar5 = FString::operator==(local_230,(ushort *)&DAT_10251d34), iVar5 != 0)) ||
        (iVar5 = FString::operator==(local_230,(ushort *)&DAT_10251d2c), iVar5 != 0)) ||
       (iVar5 = FString::operator==(local_230,(ushort *)&DAT_10251d24), iVar5 != 0)) {
      pwVar7 = L"L2UI_CH3.Msn.msnminimumicon3";
      goto LAB_100b61ea;
    }
    iVar5 = FString::operator==(local_230,(ushort *)&DAT_10251d1c);
    if ((iVar5 != 0) || (iVar5 = FString::operator==(local_230,(ushort *)&DAT_10251d14), iVar5 != 0)
       ) {
      pwVar7 = L"L2UI_CH3.Msn.msnminimumicon2";
      goto LAB_100b61ea;
    }
    iVar5 = FString::operator==(local_230,(ushort *)&DAT_10251d0c);
    if ((iVar5 != 0) || (iVar5 = FString::operator==(local_230,(ushort *)&DAT_10252c20), iVar5 != 0)
       ) {
      pwVar7 = L"L2UI_CH3.Msn.msnminimumicon4";
      goto LAB_100b61ea;
    }
    iVar5 = FString::operator==(local_230,(ushort *)&DAT_1022f9f8);
    if (iVar5 != 0) {
      pwVar7 = L"L2UI_CH3.Msn.msnminiicon5";
      goto LAB_100b61ea;
    }
  }
  else {
    pwVar7 = L"L2UI_CH3.Msn.msnminimumicon1";
LAB_100b61ea:
    appStrcpy(local_218,(ushort *)pwVar7);
  }
  uVar2 = 0;
  puVar6 = FString::operator*((FString *)(GL2GameData_exref + 0x6d7b0));
  FUN_10023820(local_218,puVar6,uVar2);
  local_4 = 0xffffffff;
  FString::~FString(local_230);
LAB_100b6229:
  FUN_100212e0();
  *(undefined4 *)(param_2 + 0x38) = 0;
  *(undefined4 *)(param_2 + 0x3c) = 0;
  ExceptionList = local_c;
  __security_check_cookie(local_10 ^ (uint)local_230);
  return;
}


// ==== 100b6270 FUN_100b6270 depth=0 from=raiz callees=FUN_100a98c0@100a98c0 CORE.DLL::FString::operator==@EXTERNAL:000001c7 FUN_1005ff00@1005ff00 CORE.DLL::FString::~FString@EXTERNAL:00000197 CORE.DLL::FString::FString@EXTERNAL:000001a4 CORE.DLL::FString::operator*@EXTERNAL:0000019f FUN_10023820@10023820 __security_check_cookie@101c16c2 CORE.DLL::FString::operator=@EXTERNAL:000001a2 CORE.DLL::appStrcpy@EXTERNAL:000001c3
// strings: 10256a28=L2UI_CH3.Msn.msnminimumicon1 | 102569f4=L2UI_CH3.Msn.msnminiicon5 | 102569b8=L2UI_CH3.Msn.msnminimumicon4 | 1025697c=L2UI_CH3.Msn.msnminimumicon2 | 10256940=L2UI_CH3.Msn.msnminimumicon3 | 

void __fastcall FUN_100b6270(int param_1)

{
  FString *pFVar1;
  int iVar2;
  ushort *puVar3;
  wchar_t *pwVar4;
  undefined4 uVar5;
  FString local_230 [12];
  FString local_224 [12];
  ushort local_218 [260];
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101f2ca8;
  local_c = ExceptionList;
  local_10 = DAT_103554c4 ^ (uint)local_230;
  ExceptionList = &local_c;
  FUN_1005ff00(DAT_103554c4 ^ (uint)&stack0xfffffdcc);
  FString::FString(local_230);
  local_4 = 0;
  if (*(int *)(*(int *)(param_1 + 0x1cc) + 0x1cc) != 0) {
    pFVar1 = (FString *)FUN_100a98c0(local_224);
    local_4._0_1_ = 1;
    FString::operator=(local_230,pFVar1);
    local_4 = (uint)local_4._1_3_ << 8;
    FString::~FString(local_224);
  }
  iVar2 = FString::operator==(local_230,(ushort *)&DAT_10251d70);
  if (iVar2 == 0) {
    iVar2 = FString::operator==(local_230,(ushort *)&DAT_10251d3c);
    if ((((iVar2 == 0) &&
         (iVar2 = FString::operator==(local_230,(ushort *)&DAT_10251d34), iVar2 == 0)) &&
        (iVar2 = FString::operator==(local_230,(ushort *)&DAT_10251d2c), iVar2 == 0)) &&
       (iVar2 = FString::operator==(local_230,(ushort *)&DAT_10251d24), iVar2 == 0)) {
      iVar2 = FString::operator==(local_230,(ushort *)&DAT_10251d1c);
      if ((iVar2 == 0) &&
         (iVar2 = FString::operator==(local_230,(ushort *)&DAT_10251d14), iVar2 == 0)) {
        iVar2 = FString::operator==(local_230,(ushort *)&DAT_10251d0c);
        if ((iVar2 == 0) &&
           (iVar2 = FString::operator==(local_230,(ushort *)&DAT_10252c20), iVar2 == 0)) {
          iVar2 = FString::operator==(local_230,(ushort *)&DAT_1022f9f8);
          if (iVar2 == 0) goto LAB_100b6415;
          pwVar4 = L"L2UI_CH3.Msn.msnminiicon5";
        }
        else {
          pwVar4 = L"L2UI_CH3.Msn.msnminimumicon4";
        }
      }
      else {
        pwVar4 = L"L2UI_CH3.Msn.msnminimumicon2";
      }
    }
    else {
      pwVar4 = L"L2UI_CH3.Msn.msnminimumicon3";
    }
  }
  else {
    pwVar4 = L"L2UI_CH3.Msn.msnminimumicon1";
  }
  appStrcpy(local_218,(ushort *)pwVar4);
LAB_100b6415:
  uVar5 = 0;
  puVar3 = FString::operator*((FString *)(GL2GameData_exref + 0x6d7b0));
  FUN_10023820(local_218,puVar3,uVar5);
  if (*(int *)(param_1 + 0x80) < 0) {
    (**(code **)(**(int **)(param_1 + 0x50) + 0x14c))(-*(int *)(param_1 + 0x80),0);
  }
  (**(code **)(**(int **)(param_1 + 0x50) + 0x138))();
  (**(code **)(**(int **)(param_1 + 0x50) + 0x78))();
  local_4 = 0xffffffff;
  FString::~FString(local_230);
  ExceptionList = local_c;
  __security_check_cookie(local_10 ^ (uint)local_230);
  return;
}


// ==== 100b64b0 FUN_100b64b0 depth=0 from=raiz callees=FUN_1005fe50@1005fe50 FUN_10058770@10058770 FUN_100b1d00@100b1d00
// strings: 

void __fastcall FUN_100b64b0(int *param_1)

{
  undefined4 uVar1;
  undefined4 uStack_18;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  FUN_100b1d00();
  FUN_1005fe50();
  (**(code **)(*(int *)param_1[0x75] + 0x1f8))();
  if (param_1[0x14] != 0) {
    uStack_8 = 0;
    uStack_4 = 0;
    uStack_c = 0;
    uStack_10 = 0;
    FUN_10058770(&uStack_10);
    uStack_18 = (undefined4)(longlong)ROUND((float)param_1[0x23]);
    uVar1 = uStack_18;
    uStack_18 = (undefined4)(longlong)ROUND((float)param_1[0x22]);
    (**(code **)(*param_1 + 0xc0))(uStack_10,uStack_c,uStack_18,uVar1,0,0,3);
    (**(code **)(*(int *)param_1[0x14] + 0xc0))(0,0,0,0,0,0,3);
    (**(code **)(*(int *)param_1[0x14] + 0x13c))();
  }
  return;
}


// ==== 100b65a0 FUN_100b65a0 depth=0 from=raiz callees=FUN_1005c5b0@1005c5b0
// strings: 

void __fastcall FUN_100b65a0(int param_1)

{
  int iVar1;
  
  FUN_1005c5b0();
  iVar1 = (**(code **)(**(int **)(*(int *)(param_1 + 0x1cc) + 0x254) + 0xfc))(0);
  if (iVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x100b65dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(int **)(*(int *)(*(int *)(param_1 + 0x1cc) + 0x254) + 0x1cc) + 0x78))();
    return;
  }
  return;
}


// ==== 100b6800 FUN_100b6800 depth=0 from=raiz callees=FUN_100b27f0@100b27f0
// strings: 

undefined4 FUN_100b6800(int param_1)

{
  if (param_1 == 1) {
    FUN_100b27f0();
  }
  return 1;
}


// ==== 100b79d0 FUN_100b79d0 depth=0 from=raiz callees=FUN_100b6800@100b6800 FUN_100570d0@100570d0 FUN_100b27f0@100b27f0 FUN_100b0f30@100b0f30 FUN_100b28f0@100b28f0
// strings: 

bool FUN_100b79d0(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = FUN_100570d0(param_1,param_2,param_3);
  if (iVar1 != 0) {
    return true;
  }
  if (param_1 == 0x501) {
    if (param_2 == 0xa56) {
      iVar1 = FUN_100b6800(param_3);
      return iVar1 != 0;
    }
    if (param_2 == 0xa09) {
      iVar1 = FUN_100b27f0();
      return iVar1 != 0;
    }
    if (param_2 == 0xa0a) {
      iVar1 = FUN_100b0f30();
      return iVar1 != 0;
    }
    if (param_2 == 0xa0b) {
      iVar1 = FUN_100b28f0();
      return iVar1 != 0;
    }
  }
  return false;
}


// ==== 100bb130 FUN_100bb130 depth=0 from=raiz callees=CORE.DLL::UObject::ConditionalDestroy@EXTERNAL:00000187 FUN_10002910@10002910
// strings: 

void __fastcall FUN_100bb130(UObject *param_1)

{
  uint uVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_101f3a28;
  local_c = ExceptionList;
  uVar1 = DAT_103554c4 ^ (uint)&stack0xffffffec;
  ExceptionList = &local_c;
  *(undefined ***)param_1 = LoginWnd::vftable;
  local_4 = 0;
  UObject::ConditionalDestroy(param_1);
  local_4 = 0xffffffff;
  FUN_10002910(uVar1);
  ExceptionList = local_c;
  return;
}


// ==== 100bb190 FUN_100bb190 depth=0 from=raiz callees=CORE.DLL::UObject::operator_delete@EXTERNAL:00000188 FUN_100bb130@100bb130
// strings: 

void * __thiscall FUN_100bb190(void *param_1,byte param_2)

{
  FUN_100bb130();
  if ((param_2 & 1) != 0) {
    UObject::operator_delete(param_1,0x1ec);
  }
  return param_1;
}


// ==== 100bb330 FUN_100bb330 depth=0 from=raiz callees=CORE.DLL::UObject::ConditionalDestroy@EXTERNAL:00000187 FUN_10002910@10002910
// strings: 

void __fastcall FUN_100bb330(UObject *param_1)

{
  uint uVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_101f3ae8;
  local_c = ExceptionList;
  uVar1 = DAT_103554c4 ^ (uint)&stack0xffffffec;
  ExceptionList = &local_c;
  *(undefined ***)param_1 = LoadingWnd::vftable;
  local_4 = 0;
  UObject::ConditionalDestroy(param_1);
  local_4 = 0xffffffff;
  FUN_10002910(uVar1);
  ExceptionList = local_c;
  return;
}


// ==== 100bb390 FUN_100bb390 depth=0 from=raiz callees=FUN_100bb330@100bb330 CORE.DLL::UObject::operator_delete@EXTERNAL:00000188
// strings: 

void * __thiscall FUN_100bb390(void *param_1,byte param_2)

{
  FUN_100bb330();
  if ((param_2 & 1) != 0) {
    UObject::operator_delete(param_1,0x1d8);
  }
  return param_1;
}


// ==== 100bb8b0 FUN_100bb8b0 depth=0 from=raiz callees=FUN_100b88b0@100b88b0 FUN_10061fa0@10061fa0 FUN_10096660@10096660 FUN_100ba5c0@100ba5c0
// strings: 

undefined4 * __fastcall FUN_100bb8b0(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101f3d18;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_10061fa0(DAT_103554c4 ^ (uint)&stack0xffffffe4);
  local_4 = 0;
  *param_1 = MsnWnd::vftable;
  FUN_100ba5c0();
  local_4._0_1_ = 2;
  FUN_100ba5c0();
  local_4._0_1_ = 4;
  FUN_100b88b0();
  local_4 = CONCAT31(local_4._1_3_,6);
  FUN_10096660();
  param_1[0x73] = 0;
  param_1[0x94] = 0;
  param_1[0x95] = 0;
  param_1[0x96] = 0;
  param_1[0x97] = 0;
  param_1[0x98] = 0;
  param_1[0x99] = 0;
  param_1[0x9a] = 0;
  param_1[0x9d] = 0;
  param_1[0x9e] = 0;
  param_1[0x9f] = 0;
  param_1[0xa0] = 0;
  param_1[0xa1] = 0;
  param_1[0xa2] = 0;
  param_1[0xa3] = 0;
  param_1[0xa4] = 0;
  param_1[0xa5] = 0;
  param_1[0x9b] = 0;
  param_1[0x9c] = 0;
  param_1[0xa6] = 0;
  param_1[0xa7] = 0;
  param_1[0xa8] = 0;
  param_1[0xa9] = 0;
  param_1[0xaa] = 0;
  param_1[0xab] = 0;
  param_1[0xac] = 0;
  ExceptionList = local_c;
  return param_1;
}


// ==== 100bd3f0 FUN_100bd3f0 depth=0 from=raiz callees=CORE.DLL::UObject::ConditionalDestroy@EXTERNAL:00000187 FUN_10002910@10002910
// strings: 

void __fastcall FUN_100bd3f0(UObject *param_1)

{
  uint uVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_101f40c8;
  local_c = ExceptionList;
  uVar1 = DAT_103554c4 ^ (uint)&stack0xffffffec;
  ExceptionList = &local_c;
  *(undefined ***)param_1 = MessengerWnd::vftable;
  local_4 = 0;
  UObject::ConditionalDestroy(param_1);
  local_4 = 0xffffffff;
  FUN_10002910(uVar1);
  ExceptionList = local_c;
  return;
}


// ==== 100bd450 FUN_100bd450 depth=0 from=raiz callees=FUN_100bd3f0@100bd3f0 CORE.DLL::UObject::operator_delete@EXTERNAL:00000188
// strings: 

void * __thiscall FUN_100bd450(void *param_1,byte param_2)

{
  FUN_100bd3f0();
  if ((param_2 & 1) != 0) {
    UObject::operator_delete(param_1,0x1dc);
  }
  return param_1;
}


// ==== 100bd480 FUN_100bd480 depth=0 from=raiz callees=CORE.DLL::FName::FName@EXTERNAL:0000019c FUN_10061b40@10061b40 FUN_10060d40@10060d40 FUN_100514d0@100514d0 CORE.DLL::FString::operator*@EXTERNAL:0000019f FUN_100bd1f0@100bd1f0 CORE.DLL::UObject::GetTransientPackage@EXTERNAL:0000019b FUN_1003f630@1003f630 FUN_1001c510@1001c510 CORE.DLL::UObject::StaticAllocateObject@EXTERNAL:000001b1 FUN_1005c1e0@1005c1e0 FUN_100bb8b0@100bb8b0 FUN_10050440@10050440
// strings: 10257e10=L2UI_CH3.Msn.msn_back | 10257de4=L2UI_CH3.Msn.msn_tab1 | 10257db8=L2UI_CH3.Msn.msn_tab2 | 10257de4=L2UI_CH3.Msn.msn_tab1 | 10257db8=L2UI_CH3.Msn.msn_tab2 | 

undefined4 __fastcall FUN_100bd480(int param_1)

{
  undefined4 uVar1;
  UObject *pUVar2;
  int iVar3;
  int *piVar4;
  UPackage *pUVar5;
  ushort *puVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  wchar_t *pwVar9;
  wchar_t *pwVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  wchar_t *pwStack_18;
  int local_4;
  
  local_4 = param_1;
  FUN_10061b40();
  pwStack_18 = L"L2UI_CH3.Msn.msn_back";
  uStack_1c = 0x100bd499;
  uVar1 = FUN_1003f630();
  *(undefined4 *)(param_1 + 0x1d8) = uVar1;
  pwStack_18 = (wchar_t *)0x100bd4ab;
  FName::FName((FName *)&local_4,0);
  UObject::GetTransientPackage();
  uStack_1c = *(undefined4 *)GError_exref;
  pwStack_18 = (wchar_t *)0x0;
  uStack_20 = 0;
  uStack_34 = 0x100bd4d7;
  pUVar2 = UObject::StaticAllocateObject();
  if (pUVar2 == (UObject *)0x0) {
    iVar3 = 0;
  }
  else {
    pwStack_18 = (wchar_t *)0x0;
    uStack_1c = 1;
    uStack_20 = 0x100bd4eb;
    iVar3 = FUN_1001c510();
  }
  pwStack_18 = (wchar_t *)0x0;
  uStack_1c = 0;
  *(int *)(param_1 + 0xc0) = iVar3;
  *(undefined4 *)(param_1 + 200) = 0xa03;
  uStack_20 = 0x14;
  *(undefined4 *)(iVar3 + 0x1cc) = 0xa03;
  (**(code **)(**(int **)(param_1 + 0xc0) + 0xc0))();
  uStack_34 = *(undefined4 *)(param_1 + 0xc0);
  uStack_38 = 0x100bd537;
  FUN_10060d40();
  uStack_34 = 0x100bd543;
  FUN_1005c1e0();
  uStack_34 = 0x100bd54f;
  FName::FName((FName *)&uStack_20,0);
  UObject::GetTransientPackage();
  uStack_38 = *(undefined4 *)GError_exref;
  uStack_34 = 0;
  uStack_3c = 0;
  uStack_50 = 0x100bd56f;
  pUVar2 = UObject::StaticAllocateObject();
  if (pUVar2 == (UObject *)0x0) {
    piVar4 = (int *)0x0;
  }
  else {
    piVar4 = (int *)FUN_100bb8b0();
  }
  uStack_34 = 0;
  uStack_38 = 0;
  uStack_3c = 0x161;
  *(int **)(param_1 + 0x1cc) = piVar4;
  (**(code **)(*piVar4 + 0xc0))();
  uStack_50 = *(undefined4 *)(param_1 + 0x1cc);
  uStack_54 = 0x100bd5b7;
  FUN_10060d40();
  uStack_50 = 0x100bd5c3;
  FUN_1005c1e0();
  uStack_50 = 0x100bd5cf;
  FName::FName((FName *)&uStack_3c,0);
  pUVar5 = UObject::GetTransientPackage();
  uStack_54 = *(undefined4 *)GError_exref;
  uStack_50 = 0;
  uStack_58 = 0;
  pUVar2 = UObject::StaticAllocateObject(&DAT_1037ee28,pUVar5,uStack_3c,0);
  if (pUVar2 == (UObject *)0x0) {
    piVar4 = (int *)0x0;
  }
  else {
    piVar4 = (int *)FUN_100bd1f0();
  }
  uStack_50 = 0;
  uStack_54 = 0;
  uStack_58 = 0x161;
  *(int **)(param_1 + 0x1d0) = piVar4;
  (**(code **)(*piVar4 + 0xc0))(0,0x30,0x100);
  uVar1 = FUN_10060d40(*(undefined4 *)(param_1 + 0x1d0),2);
  FUN_1005c1e0(uVar1);
  FName::FName((FName *)&uStack_58,0);
  pUVar5 = UObject::GetTransientPackage();
  pUVar2 = UObject::StaticAllocateObject
                     (&DAT_1036ac80,pUVar5,uStack_58,0,0,*(undefined4 *)GError_exref,0,0);
  if (pUVar2 == (UObject *)0x0) {
    iVar3 = 0;
  }
  else {
    iVar3 = FUN_100514d0();
  }
  *(int *)(param_1 + 0x1d4) = iVar3;
  *(undefined4 *)(iVar3 + 0x1cc) = 0xa02;
  (**(code **)(**(int **)(param_1 + 0x1d4) + 0xc0))(0xc,0x19,0xe0,0x29,0,0,3);
  uVar1 = FUN_10060d40(*(undefined4 *)(param_1 + 0x1d4),2);
  FUN_1005c1e0(uVar1);
  uVar1 = *(undefined4 *)(param_1 + 0x1cc);
  uVar12 = 0xffffffff;
  uVar11 = 1;
  pwVar10 = L"L2UI_CH3.Msn.msn_tab1";
  pwVar9 = L"L2UI_CH3.Msn.msn_tab2";
  uVar8 = 0x17;
  uVar7 = 0x72;
  puVar6 = FString::operator*((FString *)(GL2GameData_exref + 0x6d78c));
  FUN_10050440(puVar6,uVar1,uVar7,uVar8,pwVar9,pwVar10,uVar11,uVar12);
  uVar1 = *(undefined4 *)(param_1 + 0x1d0);
  uVar12 = 0xffffffff;
  uVar11 = 1;
  pwVar10 = L"L2UI_CH3.Msn.msn_tab1";
  pwVar9 = L"L2UI_CH3.Msn.msn_tab2";
  uVar8 = 0x17;
  uVar7 = 0x72;
  puVar6 = FString::operator*((FString *)(GL2GameData_exref + 0x6d798));
  FUN_10050440(puVar6,uVar1,uVar7,uVar8,pwVar9,pwVar10,uVar11,uVar12);
  return 1;
}


// ==== 100be240 FUN_100be240 depth=0 from=raiz callees=CORE.DLL::FString::FString@EXTERNAL:0000019e
// strings: 

FString * __thiscall FUN_100be240(int param_1,FString *param_2)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101f439a;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FString::FString(param_2,(FString *)(param_1 + 0x74));
  ExceptionList = local_c;
  return param_2;
}


// ==== 100c75d0 FUN_100c75d0 depth=0 from=raiz callees=KERNEL32.DLL::LocalFree@EXTERNAL:00000236 KERNEL32.DLL::LocalAlloc@EXTERNAL:00000237 VERSION.DLL::VerQueryValueW@101c0eaa VERSION.DLL::GetFileVersionInfoSizeW@101c0eb6 VERSION.DLL::GetFileVersionInfoW@101c0eb0
// strings: 

undefined4 FUN_100c75d0(LPCWSTR param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  DWORD uBytes;
  HLOCAL lpData;
  BOOL BVar2;
  undefined4 local_c;
  uint local_8;
  LPVOID local_4;
  
  puVar1 = param_2;
  local_c = 0;
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = 0;
  }
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = 0;
  }
  uBytes = GetFileVersionInfoSizeW(param_1,(LPDWORD)&param_2);
  if (uBytes != 0) {
    lpData = LocalAlloc(0x40,uBytes);
    if (lpData == (HLOCAL)0x0) {
      return 0;
    }
    BVar2 = GetFileVersionInfoW(param_1,(DWORD)param_2,uBytes,lpData);
    if (((BVar2 != 0) && (BVar2 = VerQueryValueW(lpData,L"\\",&local_4,&local_8), BVar2 != 0)) &&
       (local_8 != 0)) {
      local_c = 1;
      if (puVar1 != (undefined4 *)0x0) {
        *puVar1 = *(undefined4 *)((int)local_4 + 8);
      }
      if (param_3 != (undefined4 *)0x0) {
        *param_3 = *(undefined4 *)((int)local_4 + 0xc);
        LocalFree(lpData);
        return 1;
      }
    }
    LocalFree(lpData);
    return local_c;
  }
  return 0;
}


// ==== 100c7ac0 FUN_100c7ac0 depth=0 from=raiz callees=SHLWAPI.DLL::PathAppendW@EXTERNAL:0000021a ADVAPI32.DLL::RegOpenKeyExW@EXTERNAL:000002b4 ADVAPI32.DLL::RegCloseKey@EXTERNAL:000002b2 SHLWAPI.DLL::wnsprintfW@EXTERNAL:0000021c ADVAPI32.DLL::RegQueryValueExW@EXTERNAL:000002b3 SHLWAPI.DLL::StrCpyNW@EXTERNAL:0000021b FUN_100c75d0@100c75d0 __security_check_cookie@101c16c2 CORE.DLL::appStrcpy@EXTERNAL:000001c3
// strings: 10258de0=SOFTWARE\Classes\CLSID | 10258d90={F81CD990-910B-4bbf-9CB3-6A77F3D697B3} | 10258d74=LocalServer32 | 10258d5c=%d.%d.%d.%d | 10258d4c=0.0.0.0 | 

void FUN_100c7ac0(ushort *param_1)

{
  short sVar1;
  bool bVar2;
  BOOL BVar3;
  LSTATUS LVar4;
  short *psVar5;
  int iVar6;
  short *lpData;
  wchar_t *pwVar7;
  DWORD local_46c;
  DWORD local_468;
  HKEY local_464;
  uint local_460;
  uint local_45c;
  WCHAR local_458 [31];
  short local_41a [261];
  undefined2 local_210;
  WCHAR local_20c [260];
  uint local_4;
  
  local_4 = DAT_103554c4 ^ (uint)&local_46c;
  local_458[0] = L'\0';
  bVar2 = false;
  StrCpyNW(local_20c,L"SOFTWARE\\Classes\\CLSID",0x104);
  BVar3 = PathAppendW(local_20c,L"{F81CD990-910B-4bbf-9CB3-6A77F3D697B3}");
  if (BVar3 != 0) {
    BVar3 = PathAppendW(local_20c,L"LocalServer32");
    if (BVar3 != 0) {
      LVar4 = RegOpenKeyExW((HKEY)0x80000002,local_20c,0,1,&local_464);
      if (LVar4 == 0) {
        lpData = local_41a + 1;
        local_46c = 0x208;
        local_468 = 0;
        RegQueryValueExW(local_464,(LPCWSTR)0x0,(LPDWORD)0x0,&local_468,(LPBYTE)lpData,&local_46c);
        if ((local_468 == 1) && (local_46c != 0)) {
          local_210 = 0;
          psVar5 = lpData;
          do {
            sVar1 = *psVar5;
            psVar5 = psVar5 + 1;
          } while (sVar1 != 0);
          iVar6 = (int)psVar5 - (int)(local_41a + 2) >> 1;
          if (local_41a[1] == 0x22) {
            lpData = local_41a + 2;
          }
          if (local_41a[iVar6] == 0x22) {
            local_41a[iVar6] = 0;
          }
          iVar6 = FUN_100c75d0(lpData,&local_45c,&local_460);
          if (iVar6 != 0) {
            bVar2 = true;
            wnsprintfW(local_458,0x20,L"%d.%d.%d.%d",local_45c >> 0x10,local_45c & 0xffff,
                       local_460 >> 0x10,local_460 & 0xffff);
          }
        }
        RegCloseKey(local_464);
        if ((bVar2) && (local_458[0] != L'\0')) {
          pwVar7 = local_458;
          goto LAB_100c7c38;
        }
      }
    }
  }
  pwVar7 = L"0.0.0.0";
LAB_100c7c38:
  appStrcpy(param_1,(ushort *)pwVar7);
  __security_check_cookie(local_4 ^ (uint)&local_46c);
  return;
}


// ==== 10135df0 FUN_10135df0 depth=0 from=raiz callees=NPKCRYPT.DLL::Ordinal_2@EXTERNAL:000001ed
// strings: 

int __fastcall FUN_10135df0(int *param_1)

{
  int iVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_102088e0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  iVar1 = 1;
  if (0 < *param_1) {
    iVar1 = Ordinal_2(*param_1);
    if (iVar1 != 0) {
      *param_1 = 0;
      ExceptionList = local_10;
      return iVar1;
    }
    *param_1 = *param_1;
    iVar1 = 0;
  }
  ExceptionList = local_10;
  return iVar1;
}


// ==== 10135ea0 FUN_10135ea0 depth=0 from=raiz callees=NPKCRYPT.DLL::Ordinal_16@EXTERNAL:000001ee
// strings: 

void __fastcall FUN_10135ea0(undefined4 *param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10208900;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  Ordinal_16(*param_1,DAT_103663b8,0x50d);
  ExceptionList = local_10;
  return;
}


// ==== 10135fc0 FUN_10135fc0 depth=0 from=raiz callees=ADVAPI32.DLL::RegOpenKeyW@EXTERNAL:000002b6 ADVAPI32.DLL::RegSetValueExW@EXTERNAL:000002b5 ADVAPI32.DLL::RegCloseKey@EXTERNAL:000002b2 ADVAPI32.DLL::RegQueryValueExW@EXTERNAL:000002b3
// strings: 1027b808=Software\INCAInternet\npkcx | 1027b7f8=protect | 1027b7f8=protect | 

void FUN_10135fc0(void)

{
  LSTATUS LVar1;
  uint uStack_3c;
  DWORD local_24;
  DWORD local_20;
  HKEY local_1c;
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10208940;
  local_10 = ExceptionList;
  uStack_3c = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_3c;
  ExceptionList = &local_10;
  local_8 = 0;
  local_20 = 4;
  LVar1 = RegOpenKeyW((HKEY)0x80000002,L"Software\\INCAInternet\\npkcx",&local_1c);
  if (LVar1 == 0) {
    LVar1 = RegQueryValueExW(local_1c,L"protect",(LPDWORD)0x0,&local_24,(LPBYTE)&local_18,&local_20)
    ;
    if ((LVar1 != 0) || (local_18 == 0)) {
      local_18 = 1;
      RegSetValueExW(local_1c,L"protect",0,local_24,(BYTE *)&local_18,local_20);
    }
    RegCloseKey(local_1c);
  }
  ExceptionList = local_10;
  return;
}


// ==== 10136290 FUN_10136290 depth=0 from=raiz callees=FUN_10135df0@10135df0
// strings: 

void FUN_10136290(void)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_102089b0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_10135df0();
  ExceptionList = local_10;
  return;
}


// ==== 10136320 FUN_10136320 depth=0 from=raiz callees=CORE.DLL::FString::operator*@EXTERNAL:0000019f KERNEL32.DLL::GetCurrentDirectoryA@EXTERNAL:0000022d NPKCRYPT.DLL::Ordinal_25@EXTERNAL:000001ec FUN_10135df0@10135df0 KERNEL32.DLL::GetLastError@EXTERNAL:00000230 CORE.DLL::appStrcpy@EXTERNAL:000001c3 CORE.DLL::appStrrchr@EXTERNAL:000000f0 NPKCRYPT.DLL::Ordinal_37@EXTERNAL:000001eb CORE.DLL::FString::~FString@EXTERNAL:00000197 NPKCRYPT.DLL::Ordinal_36@EXTERNAL:000001ea CORE.DLL::appSprintf@EXTERNAL:000001ba NPKCRYPT.DLL::Ordinal_1@EXTERNAL:000001f0 FUN_10135fc0@10135fc0 CORE.DLL::FOutputDevice::Logf2@EXTERNAL:000000ef CORE.DLL::appStrcat@EXTERNAL:000001d4 __security_check_cookie@101c16c2
// strings: 1027ba7c=OpenKeyCrypt start | 1027ba6c=\L2.exe | 1027ba44=GameFile Path : %s | 1027ba20=LineageII.exe | 1027b9e4=Compatibility mode detected. | 1027ba20=LineageII.exe | 1027b9bc=Launcher Path : %s | 1027b9a0=Load KeyCrypt | 1027b964=Open KeyCrypt Driver Succeed | 1027b920=Open KeyCrypt Driver Failed : %x | 

void __fastcall FUN_10136320(FOutputDevice *param_1)

{
  FOutputDevice *pFVar1;
  undefined1 *puVar2;
  FString *this;
  ushort *puVar3;
  int iVar4;
  FOutputDevice *this_00;
  FOutputDevice *this_01;
  FOutputDevice *this_02;
  FString local_544 [20];
  FOutputDevice *local_530;
  undefined1 *local_52c;
  void *local_528;
  undefined1 *puStack_524;
  int local_520;
  CHAR local_51c [260];
  FOutputDevice local_418 [520];
  ushort local_210 [260];
  uint local_8;
  
  puStack_524 = &LAB_102089d9;
  local_528 = ExceptionList;
  local_8 = DAT_103554c4 ^ (uint)local_51c;
  local_52c = &stack0xfffffaac;
  ExceptionList = &local_528;
  local_520 = 0;
  local_530 = param_1;
  puVar2 = &stack0xfffffaac;
  if (*(int *)GLog_exref != 0) {
    FOutputDevice::Logf2(param_1,*(EName *)GLog_exref,(ushort *)0x2f8);
    puVar2 = local_52c;
  }
  local_52c = puVar2;
  FUN_10135df0();
  this = (FString *)(**(code **)(**(int **)GFileManager_exref + 0x38))();
  local_520._0_1_ = 1;
  puVar3 = FString::operator*(this);
  appStrcpy(local_210,puVar3);
  local_520 = (uint)local_520._1_3_ << 8;
  FString::~FString(local_544);
  appStrcat(local_210,(ushort *)L"\\L2.exe");
  if (*(int *)GLog_exref != 0) {
    FOutputDevice::Logf2(this_00,*(EName *)GLog_exref,(ushort *)0x2f8);
  }
  iVar4 = Ordinal_36();
  if (iVar4 == -1) {
    puVar3 = appStrrchr(local_210,0x5c);
    if (puVar3 != (ushort *)0x0) {
      *puVar3 = 0;
    }
    puVar3 = appStrrchr(local_210,0x5c);
    if (puVar3 != (ushort *)0x0) {
      *puVar3 = 0;
    }
    appSprintf((ushort *)local_418,(ushort *)&DAT_1027ba3c,local_210);
    appStrcat((ushort *)local_418,(ushort *)L"LineageII.exe");
    if (*(int *)GLog_exref != 0) {
      FOutputDevice::Logf2(local_418,*(EName *)GLog_exref,(ushort *)0x2f8);
    }
    iVar4 = Ordinal_36(local_418);
    if (iVar4 == -1) {
      if (*(int *)GLog_exref != 0) {
        FOutputDevice::Logf2(this_01,*(EName *)GLog_exref,(ushort *)0x2f8);
      }
      pFVar1 = local_530;
      FUN_10135fc0();
      GetCurrentDirectoryA(0x104,local_51c);
      Ordinal_25(local_51c);
      iVar4 = Ordinal_1();
      *(int *)pFVar1 = iVar4;
      if (iVar4 < 1) {
        GetLastError();
        if (*(int *)GLog_exref != 0) {
          FOutputDevice::Logf2((FOutputDevice *)GLog_exref,*(EName *)GLog_exref,(ushort *)0x2f8);
        }
      }
      else if (*(int *)GLog_exref != 0) {
        FOutputDevice::Logf2(this_02,*(EName *)GLog_exref,(ushort *)0x2f8);
      }
    }
    else {
      Ordinal_37(local_418,0xffffffff);
    }
  }
  else {
    Ordinal_37(local_210,0xffffffff);
    puVar3 = appStrrchr(local_210,0x5c);
    if (puVar3 != (ushort *)0x0) {
      *puVar3 = 0;
    }
    puVar3 = appStrrchr(local_210,0x5c);
    if (puVar3 != (ushort *)0x0) {
      *puVar3 = 0;
    }
    appSprintf((ushort *)local_418,(ushort *)&DAT_1027ba3c,local_210);
    appStrcat((ushort *)local_418,(ushort *)L"LineageII.exe");
    iVar4 = Ordinal_36(local_418);
    if (iVar4 != -1) {
      Ordinal_37(local_418,0xffffffff);
    }
    if (*(int *)GLog_exref != 0) {
      FOutputDevice::Logf2
                (*(FOutputDevice **)GLog_exref,(EName)*(FOutputDevice **)GLog_exref,(ushort *)0x2f8)
      ;
    }
  }
  ExceptionList = local_528;
  __security_check_cookie(local_8 ^ (uint)local_51c);
  return;
}


// ==== 1013cab0 FUN_1013cab0 depth=0 from=raiz callees=
// strings: 

undefined4 __fastcall FUN_1013cab0(int param_1)

{
  return *(undefined4 *)(param_1 + 0x234);
}


// ==== 1013ece0 FUN_1013ece0 depth=0 from=raiz callees=CORE.DLL::UObject::ConditionalDestroy@EXTERNAL:00000187 FUN_10002910@10002910
// strings: 

void __fastcall FUN_1013ece0(UObject *param_1)

{
  uint uVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_10209c48;
  local_c = ExceptionList;
  uVar1 = DAT_103554c4 ^ (uint)&stack0xffffffec;
  ExceptionList = &local_c;
  *(undefined ***)param_1 = NCLoginFunctionWnd::vftable;
  local_4 = 0;
  UObject::ConditionalDestroy(param_1);
  local_4 = 0xffffffff;
  FUN_10002910(uVar1);
  ExceptionList = local_c;
  return;
}


// ==== 1013ed40 FUN_1013ed40 depth=0 from=raiz callees=FUN_1013ece0@1013ece0 CORE.DLL::UObject::operator_delete@EXTERNAL:00000188
// strings: 

void * __thiscall FUN_1013ed40(void *param_1,byte param_2)

{
  FUN_1013ece0();
  if ((param_2 & 1) != 0) {
    UObject::operator_delete(param_1,0x1e4);
  }
  return param_1;
}


// ==== 1013edd0 FUN_1013edd0 depth=0 from=raiz callees=CORE.DLL::UObject::ConditionalDestroy@EXTERNAL:00000187 FUN_10002910@10002910
// strings: 

void __fastcall FUN_1013edd0(UObject *param_1)

{
  uint uVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_10209ca8;
  local_c = ExceptionList;
  uVar1 = DAT_103554c4 ^ (uint)&stack0xffffffec;
  ExceptionList = &local_c;
  *(undefined ***)param_1 = NCLoginServerWnd::vftable;
  local_4 = 0;
  UObject::ConditionalDestroy(param_1);
  local_4 = 0xffffffff;
  FUN_10002910(uVar1);
  ExceptionList = local_c;
  return;
}


// ==== 1013ee30 FUN_1013ee30 depth=0 from=raiz callees=FUN_1013edd0@1013edd0 CORE.DLL::UObject::operator_delete@EXTERNAL:00000188
// strings: 

void * __thiscall FUN_1013ee30(void *param_1,byte param_2)

{
  FUN_1013edd0();
  if ((param_2 & 1) != 0) {
    UObject::operator_delete(param_1,0x1d4);
  }
  return param_1;
}


// ==== 10141090 FUN_10141090 depth=0 from=raiz callees=
// strings: 

undefined4 FUN_10141090(void)

{
  if (*(int *)GLanguageType_exref == 0) {
    return 1;
  }
  return 0;
}


// ==== 10141df0 FUN_10141df0 depth=0 from=raiz callees=ENGINE.DLL::UL2ConsoleWnd::SetState@EXTERNAL:0000007e
// strings: 

undefined4 __thiscall FUN_10141df0(UL2ConsoleWnd *param_1,undefined4 param_2)

{
  int iVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1020a120;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  iVar1 = (**(code **)(**(int **)(*(int *)(param_1 + 0x50) + 0x60) + 0x14c))(param_2);
  if (iVar1 != 0) {
    UL2ConsoleWnd::SetState(param_1,1);
    ExceptionList = local_10;
    return 1;
  }
  ExceptionList = local_10;
  return 0;
}


// ==== 10141f70 FUN_10141f70 depth=0 from=raiz callees=
// strings: 

void __fastcall FUN_10141f70(int param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1020a160;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  (**(code **)(**(int **)(*(int *)(param_1 + 0x50) + 0x60) + 0x154))();
  ExceptionList = local_10;
  return;
}


// ==== 10142000 FUN_10142000 depth=0 from=raiz callees=__security_check_cookie@101c16c2 ENGINE.DLL::UL2ConsoleWnd::SetState@EXTERNAL:0000007e
// strings: 

void __fastcall FUN_10142000(UL2ConsoleWnd *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 auStack_f0 [24];
  uint uStack_90;
  undefined4 local_78 [24];
  uint local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1020a180;
  local_10 = ExceptionList;
  uStack_90 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_18 = uStack_90;
  ExceptionList = &local_10;
  local_14 = (undefined1 *)&uStack_90;
  puVar4 = local_78;
  puVar3 = (undefined4 *)register0x00000010;
  for (iVar1 = 0x18; puVar3 = puVar3 + 1, iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar4 = *puVar3;
    puVar4 = puVar4 + 1;
  }
  local_8 = 0;
  iVar1 = **(int **)(*(int *)(param_1 + 0x50) + 0x60);
  puVar3 = local_78;
  puVar4 = auStack_f0;
  for (iVar2 = 0x18; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  iVar1 = (**(code **)(iVar1 + 0x158))();
  if (iVar1 != 0) {
    UL2ConsoleWnd::SetState(param_1,1);
  }
  ExceptionList = local_10;
  auStack_f0[3] = 0x10142090;
  __security_check_cookie(local_18 ^ (uint)&stack0xfffffffc);
  return;
}


// ==== 10149f50 FUN_10149f50 depth=0 from=raiz callees=FUN_10070110@10070110 CORE.DLL::FString::FString@EXTERNAL:000001b0
// strings: 102484a4=ReplaySelectState | 

void FUN_10149f50(void)

{
  FString aFStack_3c [12];
  uint uStack_30;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  puStack_c = &LAB_1020b3a9;
  local_10 = ExceptionList;
  uStack_30 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_8 = 0;
  FString::FString(aFStack_3c,(ushort *)L"ReplaySelectState");
  local_8 = local_8 & 0xffffff00;
  FUN_10070110();
  ExceptionList = local_10;
  return;
}


// ==== 1014a7d0 FUN_1014a7d0 depth=0 from=raiz callees=FUN_1013cab0@1013cab0
// strings: 

undefined4 __fastcall FUN_1014a7d0(int param_1)

{
  undefined4 uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1020b570;
  local_10 = ExceptionList;
  local_8 = 0;
  if (*(int *)(param_1 + 0x50ac) == 0) {
    return 0;
  }
  ExceptionList = &local_10;
  uVar1 = FUN_1013cab0();
  ExceptionList = local_10;
  return uVar1;
}


// ==== 1014b550 FUN_1014b550 depth=0 from=raiz callees=FUN_10136290@10136290
// strings: 

undefined4 __thiscall FUN_1014b550(undefined4 param_1,byte param_2)

{
  FUN_10136290();
  if ((param_2 & 1) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))(param_1);
  }
  return param_1;
}


// ==== 10164030 FUN_10164030 depth=0 from=raiz callees=FUN_1014f960@1014f960 FUN_101b88a0@101b88a0
// strings: 

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


// ==== 10164450 FUN_10164450 depth=0 from=raiz callees=FUN_10010290@10010290 CORE.DLL::FString::~FString@EXTERNAL:00000197 FUN_1014ed50@1014ed50 CORE.DLL::FString::FString@EXTERNAL:000001b0
// strings: 10257ea8=OptionWnd | 

void __fastcall FUN_10164450(int *param_1)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
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
  uVar1 = (**(code **)(*param_1 + 0x778))(local_28);
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


// ==== 10174cb0 FUN_10174cb0 depth=0 from=raiz callees=CORE.DLL::FString::~FString@EXTERNAL:00000197 FUN_1000b7e0@1000b7e0 CORE.DLL::FString::FString@EXTERNAL:000001a4 CORE.DLL::FString::operator*@EXTERNAL:0000019f FUN_1003f630@1003f630 CORE.DLL::FString::operator+@EXTERNAL:000001c1 CORE.DLL::FString::Len@EXTERNAL:000001a8 FUN_10088300@10088300 FUN_100214c0@100214c0 CORE.DLL::FString::FString@EXTERNAL:000001b0 FUN_10174560@10174560 CORE.DLL::FString::operator=@EXTERNAL:000001a2
// strings: 10288e5c=CreditFont.gly | 10288e28=L2UI.CreditWnd.CreditFont | 10288e10=..\L2Text\ | 

void __fastcall FUN_10174cb0(int param_1)

{
  int *piVar1;
  int iVar2;
  ushort *puVar3;
  FString *pFVar4;
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
    *(undefined4 *)(param_1 + 0xce4) = *(undefined4 *)(*piVar1 + 0x1c);
    iVar2 = FString::Len((FString *)(*piVar1 + 0x10));
    if (0 < iVar2) {
      uVar5 = 1;
      puVar3 = FString::operator*((FString *)(*piVar1 + 0x10));
      uVar5 = FUN_1003f630(puVar3,uVar5);
      *(undefined4 *)(param_1 + 0x2d8) = uVar5;
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


// ==== 1017ca30 FUN_1017ca30 depth=0 from=raiz callees=FUN_100570d0@100570d0
// strings: 

bool __thiscall FUN_1017ca30(int *param_1,int param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = FUN_100570d0(param_2,param_3,param_4);
  if (iVar1 != 0) {
    return true;
  }
  if (param_2 == 0x501) {
    if (param_3 == 0x100a) {
      iVar1 = (**(code **)(*param_1 + 500))();
      return iVar1 != 0;
    }
    if (param_3 == 0x100b) {
      iVar1 = (**(code **)(*param_1 + 0x1f8))();
      return iVar1 != 0;
    }
    if (param_3 == 0x100c) {
      iVar1 = (**(code **)(*param_1 + 0x1fc))();
      return iVar1 != 0;
    }
  }
  return false;
}


// ==== 1017cad0 FUN_1017cad0 depth=0 from=raiz callees=FUN_10003cf0@10003cf0 CORE.DLL::FName::FName@EXTERNAL:0000019c FUN_10061b40@10061b40 CORE.DLL::FString::~FString@EXTERNAL:00000197 FUN_10060d40@10060d40 FUN_1000a130@1000a130 FUN_1003f630@1003f630 CORE.DLL::FString::FString@EXTERNAL:000001b0 FUN_10006980@10006980 CORE.DLL::UObject::GetTransientPackage@EXTERNAL:0000019b FUN_1005c1e0@1005c1e0
// strings: 1028aba0=L2UI_CH3.LobbyWnd.lobby_menuback | 1028ab60=L2UI_CH3.Button.BigButton_down | 1028ab2c=L2UI_CH3.Button.BigButton | 1028ab60=L2UI_CH3.Button.BigButton_down | 1028ab2c=L2UI_CH3.Button.BigButton | 1028ab60=L2UI_CH3.Button.BigButton_down | 1028ab2c=L2UI_CH3.Button.BigButton | 

undefined4 __fastcall FUN_1017cad0(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  UPackage *pUVar3;
  FString *extraout_ECX;
  FString *extraout_ECX_00;
  FString *extraout_ECX_01;
  uint uVar4;
  FString *pFStack_90;
  FString *pFStack_70;
  FString *pFStack_54;
  uint uStack_4c;
  FString local_3c [12];
  FString local_30 [16];
  undefined1 *local_20;
  uint local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_102135dc;
  local_10 = ExceptionList;
  uStack_4c = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_4c;
  ExceptionList = &local_10;
  uVar4 = 0;
  local_18 = 0;
  local_8 = 0;
  FUN_10061b40();
  pFStack_54 = (FString *)0x1028aba0;
  uVar1 = FUN_1003f630();
  *(undefined4 *)(param_1 + 0x1d8) = uVar1;
  local_20 = (undefined1 *)&pFStack_54;
  pFStack_54 = extraout_ECX;
  FName::FName((FName *)&pFStack_54,0);
  UObject::GetTransientPackage();
  iVar2 = FUN_1000a130();
  if (iVar2 == 0) {
    uVar1 = 0;
  }
  else {
    pFStack_54 = (FString *)0x1017cb54;
    FString::FString(local_3c,(ushort *)L"L2UI_CH3.Button.BigButton_down");
    local_8 = CONCAT31(local_8._1_3_,1);
    local_18 = 1;
    pFStack_54 = (FString *)0x1017cb6d;
    FString::FString(local_30,(ushort *)L"L2UI_CH3.Button.BigButton");
    local_8 = 2;
    uVar4 = 3;
    local_18 = 3;
    pFStack_54 = local_3c;
    uVar1 = FUN_10006980();
  }
  *(undefined4 *)(param_1 + 0x1d0) = uVar1;
  local_8 = 1;
  if ((uVar4 & 2) != 0) {
    uVar4 = uVar4 & 0xfffffffd;
    local_18 = uVar4;
    FString::~FString(local_30);
  }
  local_8 = 0;
  if ((uVar4 & 1) != 0) {
    uVar4 = uVar4 & 0xfffffffe;
    local_18 = uVar4;
    FString::~FString(local_3c);
  }
  *(undefined4 *)(*(int *)(param_1 + 0x1d0) + 0x1cc) = 0x100b;
  pFStack_54 = (FString *)0x0;
  (**(code **)(**(int **)(param_1 + 0x1d0) + 0xc0))();
  pFStack_70 = *(FString **)(param_1 + 0x1d0);
  FUN_10060d40();
  pFStack_70 = (FString *)0x1017cc17;
  FUN_1005c1e0();
  pFStack_70 = (FString *)0x1017cc27;
  FUN_10003cf0();
  local_20 = (undefined1 *)&pFStack_70;
  pFStack_70 = extraout_ECX_00;
  FName::FName((FName *)&pFStack_70,0);
  UObject::GetTransientPackage();
  iVar2 = FUN_1000a130();
  if (iVar2 == 0) {
    uVar1 = 0;
  }
  else {
    pFStack_70 = (FString *)0x1017cc5f;
    FString::FString(local_30,(ushort *)L"L2UI_CH3.Button.BigButton_down");
    local_8 = CONCAT31(local_8._1_3_,3);
    local_18 = uVar4 | 4;
    pFStack_70 = (FString *)0x1017cc77;
    FString::FString(local_3c,(ushort *)L"L2UI_CH3.Button.BigButton");
    local_8 = 4;
    uVar4 = uVar4 | 0xc;
    pFStack_70 = local_30;
    local_18 = uVar4;
    uVar1 = FUN_10006980();
  }
  *(undefined4 *)(param_1 + 0x1d4) = uVar1;
  local_8 = 3;
  if ((uVar4 & 8) != 0) {
    uVar4 = uVar4 & 0xfffffff7;
    local_18 = uVar4;
    FString::~FString(local_3c);
  }
  local_8 = 0;
  if ((uVar4 & 4) != 0) {
    uVar4 = uVar4 & 0xfffffffb;
    local_18 = uVar4;
    FString::~FString(local_30);
  }
  *(undefined4 *)(*(int *)(param_1 + 0x1d4) + 0x1cc) = 0x100c;
  pFStack_70 = (FString *)0x0;
  (**(code **)(**(int **)(param_1 + 0x1d4) + 0xc0))();
  pFStack_90 = (FString *)0x1017cd13;
  FUN_10060d40();
  FUN_1005c1e0();
  FUN_10003cf0();
  (**(code **)(**(int **)(param_1 + 0x1d4) + 0x118))();
  local_20 = (undefined1 *)&pFStack_90;
  pFStack_90 = extraout_ECX_01;
  FName::FName((FName *)&pFStack_90,0);
  pUVar3 = UObject::GetTransientPackage();
  iVar2 = FUN_1000a130(0x33c,pUVar3);
  if (iVar2 == 0) {
    uVar1 = 0;
  }
  else {
    pFStack_90 = (FString *)0x1017cd79;
    FString::FString(local_30,(ushort *)L"L2UI_CH3.Button.BigButton_down");
    local_8 = CONCAT31(local_8._1_3_,5);
    local_18 = uVar4 | 0x10;
    pFStack_90 = (FString *)0x1017cd91;
    FString::FString(local_3c,(ushort *)L"L2UI_CH3.Button.BigButton");
    local_8 = 6;
    uVar4 = uVar4 | 0x30;
    pFStack_90 = local_30;
    local_18 = uVar4;
    uVar1 = FUN_10006980(local_3c);
  }
  *(undefined4 *)(param_1 + 0x1cc) = uVar1;
  local_8 = 5;
  if ((uVar4 & 0x20) != 0) {
    uVar4 = uVar4 & 0xffffffdf;
    local_18 = uVar4;
    FString::~FString(local_3c);
  }
  local_8 = 0;
  if ((uVar4 & 0x10) != 0) {
    local_18 = uVar4 & 0xffffffef;
    FString::~FString(local_30);
  }
  *(undefined4 *)(*(int *)(param_1 + 0x1cc) + 0x1cc) = 0x100a;
  pFStack_90 = (FString *)0x0;
  (**(code **)(**(int **)(param_1 + 0x1cc) + 0xc0))(0xd,0x5f,0x60,0x17,0);
  uVar1 = FUN_10060d40(*(undefined4 *)(param_1 + 0x1cc),2);
  FUN_1005c1e0(uVar1);
  FUN_10003cf0(0x374);
  ExceptionList = local_10;
  return 1;
}


// ==== 1017cea0 FUN_1017cea0 depth=0 from=raiz callees=FUN_101c19e0@101c19e0 FUN_100212e0@100212e0 FUN_10021a00@10021a00 FUN_10002f40@10002f40 FUN_10021df0@10021df0
// strings: 

undefined4 __thiscall FUN_1017cea0(int param_1,int param_2)

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
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10213600;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  uVar1 = FUN_101c19e0();
  uVar2 = FUN_101c19e0(uVar1);
  FUN_10021df0(*(undefined4 *)(param_1 + 0x80),*(undefined4 *)(param_1 + 0x84),uVar2,uVar1);
  FUN_10002f40(*(undefined4 *)(param_1 + 0x80),*(undefined4 *)(param_1 + 0x84));
  uVar9 = 1;
  uVar8 = 0xff;
  uVar1 = *(undefined4 *)(param_1 + 0x1d8);
  uVar7 = 0x8a;
  uVar6 = 0x78;
  uVar5 = 0;
  uVar4 = 0;
  uVar2 = FUN_101c19e0(0,0,0x78,0x8a,uVar1,0xff,1);
  uVar3 = FUN_101c19e0(uVar2);
  FUN_10021a00(0,0,uVar3,uVar2,uVar4,uVar5,uVar6,uVar7,uVar1,uVar8,uVar9);
  *(undefined4 *)(param_2 + 0x38) = 0;
  *(undefined4 *)(param_2 + 0x3c) = 0;
  FUN_100212e0();
  ExceptionList = local_10;
  return 1;
}


// ==== 1017cfb0 FUN_1017cfb0 depth=0 from=raiz callees=CORE.DLL::UObject::GetName@EXTERNAL:000001ad CORE.DLL::UObject::IsA@EXTERNAL:00000198 CORE.DLL::UObject::GetFullName@EXTERNAL:000001ae CORE.DLL::FOutputDevice::Logf@EXTERNAL:000001ac
// strings: 1022fb70=NULL | 1022fb40=Cast of %s to %s failed | 

UObject * FUN_1017cfb0(UObject *param_1)

{
  int iVar1;
  
  if (param_1 != (UObject *)0x0) {
    iVar1 = UObject::IsA(param_1,(UClass *)&DAT_103a28d0);
    if (iVar1 != 0) {
      return param_1;
    }
    UObject::GetFullName(param_1,(ushort *)0x0);
  }
  UObject::GetName((UObject *)&DAT_103a28d0);
  FOutputDevice::Logf(*(FOutputDevice **)GError_exref,(ushort *)*(FOutputDevice **)GError_exref);
  return param_1;
}


// ==== 1017d010 FUN_1017d010 depth=0 from=raiz callees=FUN_1017cfb0@1017cfb0
// strings: 

void __fastcall FUN_1017d010(int param_1)

{
  int *piVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10213620;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  piVar1 = (int *)FUN_1017cfb0(*(undefined4 *)(*(int *)(*(int *)(param_1 + 0xb8) + 0xc) + 4));
  (**(code **)(*piVar1 + 0x200))();
  ExceptionList = local_10;
  return;
}


// ==== 1017d0b0 FUN_1017d0b0 depth=0 from=raiz callees=FUN_1017cfb0@1017cfb0
// strings: 

void __fastcall FUN_1017d0b0(int param_1)

{
  int *piVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10213640;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  piVar1 = (int *)FUN_1017cfb0(*(undefined4 *)(*(int *)(*(int *)(param_1 + 0xb8) + 0xc) + 4));
  (**(code **)(*piVar1 + 0x204))();
  ExceptionList = local_10;
  return;
}


// ==== 1017d150 FUN_1017d150 depth=0 from=raiz callees=FUN_1017cfb0@1017cfb0
// strings: 

void __fastcall FUN_1017d150(int param_1)

{
  int *piVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10213660;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  piVar1 = (int *)FUN_1017cfb0(*(undefined4 *)(*(int *)(*(int *)(param_1 + 0xb8) + 0xc) + 4));
  (**(code **)(*piVar1 + 0x208))();
  ExceptionList = local_10;
  return;
}


// ==== 1017d1f0 FUN_1017d1f0 depth=0 from=raiz callees=FUN_10061fa0@10061fa0
// strings: 

undefined4 * __fastcall FUN_1017d1f0(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10213688;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_10061fa0(DAT_103554c4 ^ (uint)&stack0xffffffec);
  *param_1 = NCLobbyFunctionWnd::vftable;
  ExceptionList = local_c;
  return param_1;
}


// ==== 1017d250 FUN_1017d250 depth=0 from=raiz callees=CORE.DLL::UObject::ConditionalDestroy@EXTERNAL:00000187 FUN_10002910@10002910
// strings: 

void __fastcall FUN_1017d250(UObject *param_1)

{
  uint uVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_102136b8;
  local_c = ExceptionList;
  uVar1 = DAT_103554c4 ^ (uint)&stack0xffffffec;
  ExceptionList = &local_c;
  *(undefined ***)param_1 = NCLobbyFunctionWnd::vftable;
  local_4 = 0;
  UObject::ConditionalDestroy(param_1);
  local_4 = 0xffffffff;
  FUN_10002910(uVar1);
  ExceptionList = local_c;
  return;
}


// ==== 1017d2b0 FUN_1017d2b0 depth=0 from=raiz callees=CORE.DLL::UObject::operator_delete@EXTERNAL:00000188 FUN_1017d250@1017d250
// strings: 

void * __thiscall FUN_1017d2b0(void *param_1,byte param_2)

{
  FUN_1017d250();
  if ((param_2 & 1) != 0) {
    UObject::operator_delete(param_1,0x1dc);
  }
  return param_1;
}


// ==== 1017d2f0 FUN_1017d2f0 depth=0 from=raiz callees=FUN_100570d0@100570d0
// strings: 

bool __thiscall FUN_1017d2f0(int *param_1,int param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = FUN_100570d0(param_2,param_3,param_4);
  if (iVar1 != 0) {
    return true;
  }
  if ((param_2 == 0x501) && (param_3 == 0x1009)) {
    iVar1 = (**(code **)(*param_1 + 500))();
    return iVar1 != 0;
  }
  return false;
}


// ==== 1017d350 FUN_1017d350 depth=0 from=raiz callees=FUN_10061e90@10061e90
// strings: 

undefined4 __fastcall FUN_1017d350(int param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_102136e0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if (*(int *)(param_1 + 0x1cc) != 0) {
    *(undefined4 *)(param_1 + 0x1cc) = 0;
  }
  FUN_10061e90();
  ExceptionList = local_10;
  return 1;
}


// ==== 1017d3f0 FUN_1017d3f0 depth=0 from=raiz callees=FUN_10003cf0@10003cf0 CORE.DLL::FName::FName@EXTERNAL:0000019c CORE.DLL::FString::~FString@EXTERNAL:00000197 FUN_10060d40@10060d40 FUN_1000a130@1000a130 FUN_1003f630@1003f630 CORE.DLL::FString::FString@EXTERNAL:000001b0 FUN_10006980@10006980 CORE.DLL::UObject::GetTransientPackage@EXTERNAL:0000019b FUN_1005c1e0@1005c1e0
// strings: 1028b038=L2UI_CH3.LobbyWnd.lobby_startbtnback | 1028aff8=L2UI_CH3.Button.BigButton2_down | 1028afc0=L2UI_CH3.Button.BigButton2 | 

undefined4 __fastcall FUN_1017d3f0(int param_1)

{
  undefined4 uVar1;
  UPackage *pUVar2;
  int iVar3;
  FString *extraout_ECX;
  uint uVar4;
  FString *pFStack_54;
  uint uStack_4c;
  FString local_3c [12];
  FString local_30 [16];
  undefined1 *local_20;
  uint local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10213734;
  local_10 = ExceptionList;
  uStack_4c = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_4c;
  ExceptionList = &local_10;
  uVar4 = 0;
  local_18 = 0;
  local_8 = 0;
  pFStack_54 = (FString *)0x1028b038;
  uVar1 = FUN_1003f630();
  *(undefined4 *)(param_1 + 0x1d0) = uVar1;
  local_20 = (undefined1 *)&pFStack_54;
  pFStack_54 = extraout_ECX;
  FName::FName((FName *)&pFStack_54,0);
  pUVar2 = UObject::GetTransientPackage();
  iVar3 = FUN_1000a130(0x33c,pUVar2);
  if (iVar3 == 0) {
    uVar1 = 0;
  }
  else {
    pFStack_54 = (FString *)0x1017d46d;
    FString::FString(local_3c,(ushort *)L"L2UI_CH3.Button.BigButton2_down");
    local_8 = CONCAT31(local_8._1_3_,1);
    local_18 = 1;
    pFStack_54 = (FString *)0x1017d486;
    FString::FString(local_30,(ushort *)L"L2UI_CH3.Button.BigButton2");
    local_8 = 2;
    uVar4 = 3;
    local_18 = 3;
    pFStack_54 = local_3c;
    uVar1 = FUN_10006980(local_30);
  }
  *(undefined4 *)(param_1 + 0x1cc) = uVar1;
  local_8 = 1;
  if ((uVar4 & 2) != 0) {
    uVar4 = uVar4 & 0xfffffffd;
    local_18 = uVar4;
    FString::~FString(local_30);
  }
  local_8 = 0;
  if ((uVar4 & 1) != 0) {
    local_18 = uVar4 & 0xfffffffe;
    FString::~FString(local_3c);
  }
  *(undefined4 *)(*(int *)(param_1 + 0x1cc) + 0x1cc) = 0x1009;
  pFStack_54 = (FString *)0x0;
  (**(code **)(**(int **)(param_1 + 0x1cc) + 0xc0))(0xd,10,0x74,0x1f,0);
  uVar1 = FUN_10060d40(*(undefined4 *)(param_1 + 0x1cc),2);
  FUN_1005c1e0(uVar1);
  FUN_10003cf0(0xa0);
  (**(code **)(**(int **)(param_1 + 0x1cc) + 0x118))(0);
  ExceptionList = local_10;
  return 1;
}


// ==== 1017d5a0 FUN_1017d5a0 depth=0 from=raiz callees=FUN_101c19e0@101c19e0 FUN_100212e0@100212e0 FUN_10021a00@10021a00 FUN_10002f40@10002f40 FUN_10021df0@10021df0
// strings: 

undefined4 __thiscall FUN_1017d5a0(int param_1,int param_2)

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
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10213750;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  uVar1 = FUN_101c19e0();
  uVar2 = FUN_101c19e0(uVar1);
  FUN_10021df0(*(undefined4 *)(param_1 + 0x80),*(undefined4 *)(param_1 + 0x84),uVar2,uVar1);
  FUN_10002f40(*(undefined4 *)(param_1 + 0x80),*(undefined4 *)(param_1 + 0x84));
  uVar9 = 1;
  uVar8 = 0xff;
  uVar1 = *(undefined4 *)(param_1 + 0x1d0);
  uVar7 = 0x31;
  uVar6 = 0x8c;
  uVar5 = 0;
  uVar4 = 0;
  uVar2 = FUN_101c19e0(0,0,0x8c,0x31,uVar1,0xff,1);
  uVar3 = FUN_101c19e0(uVar2);
  FUN_10021a00(0,0,uVar3,uVar2,uVar4,uVar5,uVar6,uVar7,uVar1,uVar8,uVar9);
  *(undefined4 *)(param_2 + 0x38) = 0;
  *(undefined4 *)(param_2 + 0x3c) = 0;
  FUN_100212e0();
  ExceptionList = local_10;
  return 1;
}


// ==== 1017d6b0 FUN_1017d6b0 depth=0 from=raiz callees=FUN_1017cfb0@1017cfb0
// strings: 

void __fastcall FUN_1017d6b0(int param_1)

{
  int *piVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10213770;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  piVar1 = (int *)FUN_1017cfb0(*(undefined4 *)(*(int *)(*(int *)(param_1 + 0xb8) + 0xc) + 4));
  (**(code **)(*piVar1 + 0x1fc))();
  ExceptionList = local_10;
  return;
}


// ==== 1017d750 FUN_1017d750 depth=0 from=raiz callees=FUN_10061fa0@10061fa0
// strings: 

undefined4 * __fastcall FUN_1017d750(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10213798;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_10061fa0(DAT_103554c4 ^ (uint)&stack0xffffffec);
  *param_1 = NCLobbyStartWnd::vftable;
  ExceptionList = local_c;
  return param_1;
}


// ==== 1017d7b0 FUN_1017d7b0 depth=0 from=raiz callees=CORE.DLL::UObject::ConditionalDestroy@EXTERNAL:00000187 FUN_10002910@10002910
// strings: 

void __fastcall FUN_1017d7b0(UObject *param_1)

{
  uint uVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_102137c8;
  local_c = ExceptionList;
  uVar1 = DAT_103554c4 ^ (uint)&stack0xffffffec;
  ExceptionList = &local_c;
  *(undefined ***)param_1 = NCLobbyStartWnd::vftable;
  local_4 = 0;
  UObject::ConditionalDestroy(param_1);
  local_4 = 0xffffffff;
  FUN_10002910(uVar1);
  ExceptionList = local_c;
  return;
}


// ==== 1017d810 FUN_1017d810 depth=0 from=raiz callees=CORE.DLL::UObject::operator_delete@EXTERNAL:00000188 FUN_1017d7b0@1017d7b0
// strings: 

void * __thiscall FUN_1017d810(void *param_1,byte param_2)

{
  FUN_1017d7b0();
  if ((param_2 & 1) != 0) {
    UObject::operator_delete(param_1,0x1d4);
  }
  return param_1;
}


// ==== 1017d9e0 FUN_1017d9e0 depth=0 from=raiz callees=
// strings: 

undefined4 __fastcall FUN_1017d9e0(int param_1)

{
  return *(undefined4 *)(param_1 + 0x1774);
}


// ==== 1017d9f0 FUN_1017d9f0 depth=0 from=raiz callees=ENGINE.DLL::User::GetName@EXTERNAL:0000009f
// strings: 

void __thiscall FUN_1017d9f0(int param_1,int param_2)

{
  User::GetName((User *)(param_2 * 0x314 + 0x1e4 + param_1));
  return;
}


// ==== 1017dba0 FUN_1017dba0 depth=0 from=raiz callees=FUN_100570d0@100570d0
// strings: 

bool __thiscall FUN_1017dba0(int *param_1,int param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = FUN_100570d0(param_2,param_3,param_4);
  if (iVar1 != 0) {
    return true;
  }
  if (param_2 == 0x501) {
    if (param_3 == 0x10001) {
      iVar1 = (**(code **)(*param_1 + 500))();
      return iVar1 != 0;
    }
  }
  else if (param_2 == -0xffffffd) {
    iVar1 = (**(code **)(*param_1 + 0x1f8))(param_3,param_4);
    return iVar1 != 0;
  }
  return false;
}


// ==== 1017dc40 FUN_1017dc40 depth=0 from=raiz callees=FUN_10061e90@10061e90
// strings: 

undefined4 __fastcall FUN_1017dc40(int param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10213810;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if (*(int *)(param_1 + 0x1cc) != 0) {
    *(undefined4 *)(param_1 + 0x1cc) = 0;
  }
  if (*(int *)(param_1 + 0x1d0) != 0) {
    *(undefined4 *)(param_1 + 0x1d0) = 0;
  }
  if (*(int *)(param_1 + 0x1d4) != 0) {
    *(undefined4 *)(param_1 + 0x1d4) = 0;
  }
  if (*(int *)(param_1 + 0x1d8) != 0) {
    *(undefined4 *)(param_1 + 0x1d8) = 0;
  }
  FUN_10061e90();
  ExceptionList = local_10;
  return 1;
}


// ==== 1017df20 FUN_1017df20 depth=0 from=raiz callees=FUN_1017dd00@1017dd00
// strings: 

undefined4 FUN_1017df20(void)

{
  FUN_1017dd00();
  return 1;
}


// ==== 1017df30 FUN_1017df30 depth=0 from=raiz callees=FUN_1017dc20@1017dc20 FUN_1014cd40@1014cd40
// strings: 

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_1017df30(void)

{
  if (((DAT_103663bc != 0) && (*(int *)(DAT_103663bc + 0x50) != 0)) &&
     (*(int *)(*(int *)(DAT_103663bc + 0x50) + 0x58) != 0)) {
    (**(code **)(**(int **)(*(int *)(DAT_103663bc + 0x50) + 0x58) + 0xe0))(_DAT_1026d3ec,0);
  }
  FUN_1014cd40();
  FUN_1017dc20();
  return 1;
}


// ==== 1017df80 FUN_1017df80 depth=0 from=raiz callees=CORE.DLL::FString::operator*@EXTERNAL:0000019f FUN_10141f70@10141f70
// strings: 

undefined4 __fastcall FUN_1017df80(int param_1)

{
  int iVar1;
  ushort *puVar2;
  
  if (*(int *)(param_1 + 0x1e0) == 7) {
    iVar1 = *DAT_103663bc;
    puVar2 = FString::operator*((FString *)(GL2GameData_exref + 0x25c98));
    (**(code **)(iVar1 + 0x658))(puVar2);
    return 1;
  }
  if (*(int *)(param_1 + 0x1e0) < 7) {
    FUN_10141f70();
  }
  return 1;
}


// ==== 1017dfd0 FUN_1017dfd0 depth=0 from=raiz callees=FUN_1017d9e0@1017d9e0 FUN_10009f70@10009f70 FUN_10141df0@10141df0
// strings: 

undefined4 __thiscall FUN_1017dfd0(int param_1,int param_2)

{
  int iVar1;
  
  if (param_2 == 0) {
    (**(code **)(*DAT_103663bc + 0x5e8))(0xffffffff);
    FUN_10009f70(0xffffffff);
    *(undefined4 *)(*(int *)(param_1 + 0x1cc) + 0x1774) = 0xffffffff;
    (**(code **)(**(int **)(*(int *)(param_1 + 0x1d8) + 0x1d0) + 0x118))(1);
    (**(code **)(**(int **)(*(int *)(param_1 + 0x1d8) + 0x1d4) + 0x118))(1);
    (**(code **)(**(int **)(*(int *)(param_1 + 0x1d4) + 0x1cc) + 0x118))(1);
  }
  else {
    iVar1 = FUN_1017d9e0();
    if (-1 < iVar1) {
      FUN_10141df0(iVar1);
      return 1;
    }
  }
  return 1;
}


// ==== 1017e090 FUN_1017e090 depth=0 from=raiz callees=FUN_1005fe50@1005fe50 FUN_10009f70@10009f70
// strings: 

void __fastcall FUN_1017e090(int param_1)

{
  FUN_1005fe50();
  (**(code **)(*DAT_103663bc + 0x5e8))(0xffffffff);
  FUN_10009f70(0xffffffff);
  *(undefined4 *)(*(int *)(param_1 + 0x1cc) + 0x1774) = 0xffffffff;
  (**(code **)(**(int **)(*(int *)(param_1 + 0x1d8) + 0x1d0) + 0x118))(1);
  (**(code **)(**(int **)(*(int *)(param_1 + 0x1d8) + 0x1d4) + 0x118))(1);
  (**(code **)(**(int **)(*(int *)(param_1 + 0x1d4) + 0x1cc) + 0x118))(1);
                    /* WARNING: Could not recover jumptable at 0x1017e124. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(param_1 + 0x1d0) + 0x13c))();
  return;
}


// ==== 1017e130 FUN_1017e130 depth=0 from=raiz callees=FUN_1005f3a0@1005f3a0
// strings: 

undefined4 __thiscall FUN_1017e130(int *param_1,int param_2,undefined4 param_3)

{
  if (param_2 == 0xd) {
    (**(code **)(*param_1 + 0x1fc))();
  }
  FUN_1005f3a0(param_2,param_3);
  return 1;
}


// ==== 1017ef00 FUN_1017ef00 depth=0 from=raiz callees=FUN_10021000@10021000 CORE.DLL::FString::operator*@EXTERNAL:0000019f ENGINE.DLL::User::GetName@EXTERNAL:0000009f ENGINE.DLL::User::GetMeshType@EXTERNAL:00000018 FUN_100210c0@100210c0 FUN_10062790@10062790 FUN_101c19e0@101c19e0 CORE.DLL::FString::~FString@EXTERNAL:00000197 FUN_100212e0@100212e0 CORE.DLL::appSprintf@EXTERNAL:000001ba FUN_10002f40@10002f40 FUN_100536d0@100536d0 __security_check_cookie@101c16c2 FUN_10021df0@10021df0
// strings: 1026eb70=%s : %s | 

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_1017ef00(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  ushort *puVar3;
  FString *this;
  ushort *puVar4;
  int iVar5;
  undefined4 *puVar6;
  User *pUVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  uint uStack_760;
  FString local_750 [20];
  int local_73c;
  undefined4 local_734;
  float local_730;
  undefined1 *local_72c;
  void *local_728;
  undefined1 *puStack_724;
  int local_720;
  User local_71c [408];
  int local_584;
  int local_518;
  char local_510;
  int local_50c;
  ushort local_408 [512];
  uint local_8;
  
  puStack_724 = &LAB_102138f9;
  local_728 = ExceptionList;
  uStack_760 = DAT_103554c4 ^ (uint)local_71c;
  local_72c = (undefined1 *)&uStack_760;
  ExceptionList = &local_728;
  local_720 = 0;
  local_8 = uStack_760;
  uVar1 = FUN_101c19e0();
  uVar2 = FUN_101c19e0(uVar1);
  FUN_10021df0(*(undefined4 *)(param_1 + 0x80),*(undefined4 *)(param_1 + 0x84),uVar2,uVar1);
  FUN_10002f40(*(undefined4 *)(param_1 + 0x80),*(undefined4 *)(param_1 + 0x84));
  for (local_73c = 0; local_73c < 8; local_73c = local_73c + 1) {
    puVar6 = (undefined4 *)(local_73c * 0x314 + 0x37bc + DAT_103663bc);
    pUVar7 = local_71c;
    for (iVar5 = 0xc5; iVar5 != 0; iVar5 = iVar5 + -1) {
      *(undefined4 *)pUVar7 = *puVar6;
      puVar6 = puVar6 + 1;
      pUVar7 = pUVar7 + 4;
    }
    if (local_518 != 0) {
      uVar1 = *(undefined4 *)(local_518 + 0x1bc);
      local_734 = *(undefined4 *)(local_518 + 0x1c0);
      local_730 = *(float *)(local_518 + 0x2f4) * (float)_DAT_1022f270 + (float)_DAT_1027f850 +
                  *(float *)(local_518 + 0x1c4);
      iVar5 = User::GetMeshType(local_71c);
      if (iVar5 == 0) {
        local_730 = local_730 + (float)_DAT_10230fb8;
      }
      iVar5 = 0;
      if (0xff < local_584) {
        iVar5 = 0xff;
      }
      if (0 < local_584) {
        iVar5 = FUN_100536d0(local_584,((int)(local_584 + (local_584 >> 0x1f & 0xfU)) >> 4) + 100,
                             0xff);
      }
      uVar11 = 1;
      uVar10 = 0;
      uVar9 = 2;
      uVar8 = 0;
      puVar3 = User::GetName(local_71c);
      uVar2 = local_734;
      FUN_10021000(uVar1,local_734,local_730,iVar5 * -0x100 - 0x100U | 0xffU - iVar5 | 0xffff0000,
                   puVar3,uVar8,uVar9,uVar10,uVar11);
      if ((0 < local_50c) && (local_510 == '\0')) {
        local_730 = local_730 + (float)_DAT_102373b0;
        this = (FString *)FUN_10062790(local_750,local_50c);
        local_720._0_1_ = 1;
        puVar3 = FString::operator*(this);
        puVar4 = FString::operator*((FString *)(GL2GameData_exref + 0x6dccc));
        appSprintf(local_408,(ushort *)L"%s : %s",puVar4,puVar3);
        local_720 = (uint)local_720._1_3_ << 8;
        FString::~FString(local_750);
        FUN_100210c0(uVar1,uVar2,local_730,0xffdcdcdc,local_408,2,0,0,0,1,0);
      }
    }
  }
  *(undefined4 *)(param_2 + 0x38) = 0;
  *(undefined4 *)(param_2 + 0x3c) = 0;
  FUN_100212e0();
  local_720 = 0xffffffff;
  ExceptionList = local_728;
  __security_check_cookie(local_8 ^ (uint)local_71c);
  return;
}


// ==== 1017f360 FUN_1017f360 depth=0 from=raiz callees=FUN_1000de50@1000de50 FUN_1017d9f0@1017d9f0 FUN_10164570@10164570 FUN_1000ef40@1000ef40 FUN_1017d9e0@1017d9e0 CORE.DLL::FString::operator*@EXTERNAL:0000019f CORE.DLL::appSprintf@EXTERNAL:000001ba FUN_1000fc80@1000fc80 __security_check_cookie@101c16c2 FUN_1000e440@1000e440
// strings: 

void __fastcall FUN_1017f360(int param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  ushort *puVar4;
  int extraout_ECX;
  ushort *puVar5;
  undefined4 uVar6;
  undefined4 local_1f4 [2];
  undefined4 local_1ec;
  undefined4 local_1e8;
  undefined4 local_1e4;
  ushort local_140 [24];
  undefined1 local_110 [256];
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1021397b;
  local_c = ExceptionList;
  local_10 = DAT_103554c4 ^ (uint)local_1f4;
  uVar1 = DAT_103554c4 ^ (uint)&stack0xfffffe04;
  ExceptionList = &local_c;
  iVar2 = FUN_1017d9e0(uVar1);
  if (((-1 < iVar2) && (iVar2 = iVar2 * 0x314 + extraout_ECX, *(int *)(iVar2 + 0x3f4) < 1)) &&
     (*(char *)(iVar2 + 0x3f0) == '\0')) {
    uVar3 = FUN_1017d9e0(uVar1);
    uVar3 = FUN_1017d9f0(uVar3);
    appSprintf(local_140,(ushort *)&DAT_1022dde0,uVar3);
    uVar6 = 0;
    uVar3 = 0;
    puVar5 = local_140;
    puVar4 = FString::operator*((FString *)(GL2GameData_exref + 0x25cf4));
    FUN_10164570(local_110,puVar4,puVar5,uVar3,uVar6);
    FUN_1000ef40();
    local_4 = 0;
    local_1ec = *(undefined4 *)(param_1 + 0xb8);
    local_1f4[0] = 0;
    local_1e8 = 0;
    local_1e4 = 0;
    FUN_1000de50(local_110);
    FUN_1000fc80(local_1f4);
    (**(code **)(**(int **)(param_1 + 0x1d0) + 0x138))();
    local_4 = 0xffffffff;
    FUN_1000e440();
  }
  ExceptionList = local_c;
  __security_check_cookie(local_10 ^ (uint)local_1f4);
  return;
}


// ==== 1017f4c0 FUN_1017f4c0 depth=0 from=raiz callees=ENGINE.DLL::User::User@EXTERNAL:00000041 FUN_10061fa0@10061fa0
// strings: 

undefined4 * __fastcall FUN_1017f4c0(undefined4 *param_1)

{
  int iVar1;
  User *this;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_102139b8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_10061fa0(DAT_103554c4 ^ (uint)&stack0xffffffe0);
  local_4 = 0;
  *param_1 = NCPawnSelectWnd::vftable;
  param_1[0x73] = 0;
  param_1[0x74] = 0;
  param_1[0x75] = 0;
  param_1[0x76] = 0;
  param_1[0x77] = 0;
  this = (User *)(param_1 + 0x79);
  iVar1 = 6;
  do {
    User::User(this);
    this = this + 0x314;
    iVar1 = iVar1 + -1;
  } while (-1 < iVar1);
  param_1[0x5dc] = 0;
  param_1[0x5dd] = 0xffffffff;
  ExceptionList = local_c;
  return param_1;
}


// ==== 1017f660 FUN_1017f660 depth=0 from=raiz callees=CORE.DLL::UObject::ConditionalDestroy@EXTERNAL:00000187 FUN_10002910@10002910
// strings: 

void __fastcall FUN_1017f660(UObject *param_1)

{
  uint uVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_10213a48;
  local_c = ExceptionList;
  uVar1 = DAT_103554c4 ^ (uint)&stack0xffffffec;
  ExceptionList = &local_c;
  *(undefined ***)param_1 = NCLobbyWnd::vftable;
  local_4 = 0;
  UObject::ConditionalDestroy(param_1);
  local_4 = 0xffffffff;
  FUN_10002910(uVar1);
  ExceptionList = local_c;
  return;
}


// ==== 1017f6c0 FUN_1017f6c0 depth=0 from=raiz callees=FUN_1017f660@1017f660 CORE.DLL::UObject::operator_delete@EXTERNAL:00000188
// strings: 

void * __thiscall FUN_1017f6c0(void *param_1,byte param_2)

{
  FUN_1017f660();
  if ((param_2 & 1) != 0) {
    UObject::operator_delete(param_1,0x1e4);
  }
  return param_1;
}


// ==== 1017f6f0 FUN_1017f6f0 depth=0 from=raiz callees=CORE.DLL::FName::FName@EXTERNAL:0000019c FUN_10012260@10012260 FUN_1017d1f0@1017d1f0 FUN_10061b40@10061b40 FUN_10060d40@10060d40 FUN_1017f4c0@1017f4c0 FUN_1000eae0@1000eae0 FUN_1017d750@1017d750 CORE.DLL::UObject::GetTransientPackage@EXTERNAL:0000019b CORE.DLL::UObject::StaticAllocateObject@EXTERNAL:000001b1 FUN_1005c1e0@1005c1e0
// strings: 

undefined4 __fastcall FUN_1017f6f0(int param_1)

{
  UObject *pUVar1;
  int *piVar2;
  undefined4 uVar3;
  UPackage *pUVar4;
  int iStack_64;
  undefined *puStack_60;
  UPackage *pUStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined *puStack_34;
  UPackage *pUStack_30;
  int iStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  int local_4;
  
  local_4 = param_1;
  FUN_10061b40();
  uStack_1c = 0x1017f708;
  FName::FName((FName *)&local_4,0);
  pUStack_30 = UObject::GetTransientPackage();
  uStack_20 = *(undefined4 *)GError_exref;
  uStack_1c = 0;
  uStack_24 = 0;
  uStack_28 = 0;
  iStack_2c = local_4;
  puStack_34 = &DAT_103a23a0;
  uStack_38 = 0x1017f734;
  pUVar1 = UObject::StaticAllocateObject();
  if (pUVar1 == (UObject *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = (int *)FUN_1017f4c0();
  }
  uStack_1c = 0;
  uStack_20 = 0;
  uStack_24 = 0x6c;
  uStack_28 = 0x100;
  *(int **)(param_1 + 0x1cc) = piVar2;
  iStack_2c = 0x1b;
  pUStack_30 = (UPackage *)0x18;
  puStack_34 = (undefined *)0x1017f769;
  (**(code **)(*piVar2 + 0xc0))();
  uStack_38 = *(undefined4 *)(param_1 + 0x1cc);
  puStack_34 = (undefined *)0x4002;
  uStack_3c = 0x1017f77c;
  puStack_34 = (undefined *)FUN_10060d40();
  uStack_38 = 0x1017f788;
  FUN_1005c1e0();
  puStack_34 = (undefined *)0x9d;
  uStack_38 = 0x1017f79d;
  (**(code **)(**(int **)(param_1 + 0x1cc) + 0x164))();
  uStack_38 = 0x1b;
  uStack_3c = 0x18;
  (**(code **)(**(int **)(param_1 + 0x1cc) + 0xd0))();
  FName::FName((FName *)&pUStack_30,0);
  pUStack_5c = UObject::GetTransientPackage();
  uStack_54 = 0;
  uStack_58 = pUStack_30;
  puStack_60 = &DAT_1035c110;
  iStack_64 = 0x1017f7e7;
  pUVar1 = UObject::StaticAllocateObject();
  if (pUVar1 == (UObject *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_10012260();
  }
  *(undefined4 *)(param_1 + 0x1d0) = uVar3;
  FUN_10060d40();
  FUN_1005c1e0();
  (**(code **)(**(int **)(param_1 + 0x1d0) + 0xd0))();
  uStack_54 = 0xb8;
  uStack_58 = 0x1017f842;
  FUN_1000eae0();
  (**(code **)(**(int **)(param_1 + 0x1d0) + 0x13c))();
  uStack_54 = 0x1017f85e;
  FName::FName((FName *)&uStack_3c,0);
  pUVar4 = UObject::GetTransientPackage();
  uStack_58 = *(undefined4 *)GError_exref;
  uStack_54 = 0;
  pUStack_5c = (UPackage *)0x0;
  puStack_60 = (undefined *)0x0;
  iStack_64 = uStack_3c;
  pUVar1 = UObject::StaticAllocateObject(&DAT_103a1e70,pUVar4);
  if (pUVar1 == (UObject *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = (int *)FUN_1017d750();
  }
  uStack_54 = 0;
  *(int **)(param_1 + 0x1d4) = piVar2;
  uStack_58 = 0;
  iStack_64 = *(int *)GSEKScreenY_exref + -0x6f;
  pUStack_5c = (UPackage *)0x31;
  puStack_60 = (undefined *)0x8c;
  (**(code **)(*piVar2 + 0xc0))(*(int *)GSEKScreenX_exref / 2 + -0x47);
  uVar3 = FUN_10060d40(*(undefined4 *)(param_1 + 0x1d4),2);
  FUN_1005c1e0(uVar3);
  (**(code **)(**(int **)(param_1 + 0x1d4) + 0xd0))(8,0,0xfffffff6);
  FName::FName((FName *)&iStack_64,0);
  pUVar4 = UObject::GetTransientPackage();
  pUVar1 = UObject::StaticAllocateObject
                     (&DAT_103a1940,pUVar4,iStack_64,0,0,*(undefined4 *)GError_exref,0,0);
  if (pUVar1 == (UObject *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = (int *)FUN_1017d1f0();
  }
  *(int **)(param_1 + 0x1d8) = piVar2;
  (**(code **)(*piVar2 + 0xc0))
            (*(int *)GSEKScreenX_exref + -0x9a,*(int *)GSEKScreenY_exref + -200,0x78,0x8a,0,0,3);
  uVar3 = FUN_10060d40(*(undefined4 *)(param_1 + 0x1d8),2);
  FUN_1005c1e0(uVar3);
  (**(code **)(**(int **)(param_1 + 0x1d8) + 0xd0))(9,0xffffffde,0xfffffff6);
  return 1;
}


// ==== 1017f9f0 FUN_1017f9f0 depth=0 from=raiz callees=FUN_100570d0@100570d0
// strings: 

bool __thiscall FUN_1017f9f0(int *param_1,int param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = FUN_100570d0(param_2,param_3,param_4);
  if (iVar1 != 0) {
    return true;
  }
  if (param_2 == 0x501) {
    if (param_3 == -0x500edfee) {
      iVar1 = (**(code **)(*param_1 + 500))();
      return iVar1 != 0;
    }
    if (param_3 == -0x500edfeb) {
      iVar1 = (**(code **)(*param_1 + 0x200))();
      return iVar1 != 0;
    }
    if (param_3 == -0x500edfef) {
      iVar1 = (**(code **)(*param_1 + 0x1f8))();
      return iVar1 != 0;
    }
    if (param_3 == -0x500edfec) {
      iVar1 = (**(code **)(*param_1 + 0x1fc))();
      return iVar1 != 0;
    }
    if (param_3 == -0x500edfea) {
      iVar1 = (**(code **)(*param_1 + 0x204))();
      return iVar1 != 0;
    }
  }
  return false;
}


// ==== 1017fad0 FUN_1017fad0 depth=0 from=raiz callees=FUN_10061e90@10061e90
// strings: 

undefined4 __fastcall FUN_1017fad0(int param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10213a70;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if (*(int *)(param_1 + 0x1d0) != 0) {
    *(undefined4 *)(param_1 + 0x1d0) = 0;
  }
  if (*(int *)(param_1 + 0x1d4) != 0) {
    *(undefined4 *)(param_1 + 0x1d4) = 0;
  }
  if (*(int *)(param_1 + 0x1d8) != 0) {
    *(undefined4 *)(param_1 + 0x1d8) = 0;
  }
  if (*(int *)(param_1 + 0x1dc) != 0) {
    *(undefined4 *)(param_1 + 0x1dc) = 0;
  }
  if (*(int *)(param_1 + 0x1e0) != 0) {
    *(undefined4 *)(param_1 + 0x1e0) = 0;
  }
  FUN_10061e90();
  ExceptionList = local_10;
  return 1;
}


// ==== 1017fba0 FUN_1017fba0 depth=0 from=raiz callees=CORE.DLL::FString::operator*@EXTERNAL:0000019f
// strings: 

undefined4 FUN_1017fba0(void)

{
  int iVar1;
  ushort *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10213a90;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  iVar1 = *DAT_103663bc;
  puVar2 = FString::operator*((FString *)(GL2GameData_exref + 0x3eb24));
  (**(code **)(iVar1 + 0x658))(puVar2);
  ExceptionList = local_10;
  return 1;
}


// ==== 1017fc50 FUN_1017fc50 depth=0 from=raiz callees=CORE.DLL::FString::operator*@EXTERNAL:0000019f
// strings: 

undefined4 FUN_1017fc50(void)

{
  int iVar1;
  ushort *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10213ab0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  iVar1 = *DAT_103663bc;
  puVar2 = FString::operator*((FString *)(GL2GameData_exref + 0x3eb80));
  (**(code **)(iVar1 + 0x658))(puVar2);
  ExceptionList = local_10;
  return 1;
}


// ==== 1017fd00 FUN_1017fd00 depth=0 from=raiz callees=FUN_10164450@10164450
// strings: 

undefined4 FUN_1017fd00(void)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10213ad0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_10164450();
  ExceptionList = local_10;
  return 1;
}


// ==== 1017fd90 FUN_1017fd90 depth=0 from=raiz callees=FUN_10070110@10070110 FUN_10174cb0@10174cb0 CORE.DLL::FString::FString@EXTERNAL:000001b0
// strings: 102484c8=CreditState | 

undefined4 FUN_1017fd90(void)

{
  FString aFStack_3c [8];
  undefined4 uStack_34;
  uint uStack_30;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  puStack_c = &LAB_10213af9;
  local_10 = ExceptionList;
  uStack_30 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_8 = 0;
  if (((DAT_103663bc != (int *)0x0) && (DAT_103663bc[0x142b] != 0)) &&
     (*(int *)(DAT_103663bc[0x142b] + 500) != 0)) {
    FString::FString(aFStack_3c,(ushort *)L"CreditState");
    local_8 = local_8 & 0xffffff00;
    FUN_10070110();
    uStack_34 = 0x1017fe23;
    (**(code **)(*DAT_103663bc + 0x604))();
    uStack_34 = 0x1017fe3a;
    FUN_10174cb0();
    uStack_34 = 0x1017fe52;
    (**(code **)(**(int **)(DAT_103663bc[0x142b] + 500) + 0x78))();
  }
  ExceptionList = local_10;
  return 1;
}


// ==== 1017fea0 FUN_1017fea0 depth=0 from=raiz callees=FUN_10149f50@10149f50
// strings: 

undefined4 FUN_1017fea0(void)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10213b20;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_10149f50();
  ExceptionList = local_10;
  return 1;
}


// ==== 1017ff30 FUN_1017ff30 depth=0 from=raiz callees=FUN_101c19e0@101c19e0 FUN_100212e0@100212e0 FUN_10002f40@10002f40 FUN_10021a00@10021a00 FUN_10021df0@10021df0
// strings: 

undefined4 __thiscall FUN_1017ff30(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10213b40;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  uVar1 = FUN_101c19e0();
  uVar2 = FUN_101c19e0(uVar1);
  FUN_10021df0(*(undefined4 *)(param_1 + 0x80),*(undefined4 *)(param_1 + 0x84),uVar2,uVar1);
  FUN_10002f40(*(undefined4 *)(param_1 + 0x80),*(undefined4 *)(param_1 + 0x84));
  iVar7 = *(int *)(param_1 + 0x1cc);
  if (iVar7 != 0) {
    uVar9 = 1;
    uVar8 = 0xff;
    uVar6 = 0x8a;
    uVar5 = 0x78;
    uVar4 = 0;
    uVar3 = 0;
    uVar1 = FUN_101c19e0(0,0,0x78,0x8a,iVar7,0xff,1);
    uVar2 = FUN_101c19e0(uVar1);
    FUN_10021a00(0,0,uVar2,uVar1,uVar3,uVar4,uVar5,uVar6,iVar7,uVar8,uVar9);
  }
  *(undefined4 *)(param_2 + 0x38) = 0;
  *(undefined4 *)(param_2 + 0x3c) = 0;
  FUN_100212e0();
  ExceptionList = local_10;
  return 1;
}


// ==== 10180040 FUN_10180040 depth=0 from=raiz callees=FUN_10003cf0@10003cf0 CORE.DLL::FName::FName@EXTERNAL:0000019c FUN_10061b40@10061b40 CORE.DLL::FString::~FString@EXTERNAL:00000197 FUN_10060d40@10060d40 FUN_1003f630@1003f630 FUN_1000a130@1000a130 CORE.DLL::FString::FString@EXTERNAL:000001b0 FUN_10006980@10006980 CORE.DLL::UObject::GetTransientPackage@EXTERNAL:0000019b FUN_1005c1e0@1005c1e0
// strings: 1028aba0=L2UI_CH3.LobbyWnd.lobby_menuback | 1028ab60=L2UI_CH3.Button.BigButton_down | 1028ab2c=L2UI_CH3.Button.BigButton | 1028ab60=L2UI_CH3.Button.BigButton_down | 1028ab2c=L2UI_CH3.Button.BigButton | 1028ab60=L2UI_CH3.Button.BigButton_down | 1028ab2c=L2UI_CH3.Button.BigButton | 1028ab60=L2UI_CH3.Button.BigButton_down | 1028ab2c=L2UI_CH3.Button.BigButton | 1028ab60=L2UI_CH3.Button.BigButton_down | 1028ab2c=L2UI_CH3.Button.BigButton | 

undefined4 __fastcall FUN_10180040(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  UPackage *pUVar3;
  FString *extraout_ECX;
  FString *extraout_ECX_00;
  FString *extraout_ECX_01;
  FString *extraout_ECX_02;
  FString *extraout_ECX_03;
  uint uVar4;
  FString *pFStack_c4;
  FString *pFStack_a8;
  FString *pFStack_8c;
  FString *pFStack_70;
  FString *pFStack_54;
  uint uStack_4c;
  FString local_3c [12];
  FString local_30 [16];
  undefined1 *local_20;
  uint local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10213c73;
  local_10 = ExceptionList;
  uStack_4c = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_4c;
  ExceptionList = &local_10;
  uVar4 = 0;
  local_18 = 0;
  local_8 = 0;
  FUN_10061b40();
  pFStack_54 = (FString *)0x1028aba0;
  uVar1 = FUN_1003f630();
  *(undefined4 *)(param_1 + 0x1cc) = uVar1;
  local_20 = (undefined1 *)&pFStack_54;
  pFStack_54 = extraout_ECX;
  FName::FName((FName *)&pFStack_54,0);
  UObject::GetTransientPackage();
  iVar2 = FUN_1000a130();
  if (iVar2 == 0) {
    uVar1 = 0;
  }
  else {
    pFStack_54 = (FString *)0x101800c4;
    FString::FString(local_3c,(ushort *)L"L2UI_CH3.Button.BigButton_down");
    local_8 = CONCAT31(local_8._1_3_,1);
    local_18 = 1;
    pFStack_54 = (FString *)0x101800dd;
    FString::FString(local_30,(ushort *)L"L2UI_CH3.Button.BigButton");
    local_8 = 2;
    uVar4 = 3;
    local_18 = 3;
    pFStack_54 = local_3c;
    uVar1 = FUN_10006980();
  }
  *(undefined4 *)(param_1 + 0x1d0) = uVar1;
  local_8 = 1;
  if ((uVar4 & 2) != 0) {
    uVar4 = uVar4 & 0xfffffffd;
    local_18 = uVar4;
    FString::~FString(local_30);
  }
  local_8 = 0;
  if ((uVar4 & 1) != 0) {
    uVar4 = uVar4 & 0xfffffffe;
    local_18 = uVar4;
    FString::~FString(local_3c);
  }
  *(undefined4 *)(*(int *)(param_1 + 0x1d0) + 0x1cc) = 0xaff12012;
  pFStack_54 = (FString *)0x0;
  (**(code **)(**(int **)(param_1 + 0x1d0) + 0xc0))();
  pFStack_70 = *(FString **)(param_1 + 0x1d0);
  FUN_10060d40();
  pFStack_70 = (FString *)0x10180187;
  FUN_1005c1e0();
  pFStack_70 = (FString *)0x10180197;
  FUN_10003cf0();
  local_20 = (undefined1 *)&pFStack_70;
  pFStack_70 = extraout_ECX_00;
  FName::FName((FName *)&pFStack_70,0);
  UObject::GetTransientPackage();
  iVar2 = FUN_1000a130();
  if (iVar2 == 0) {
    uVar1 = 0;
  }
  else {
    pFStack_70 = (FString *)0x101801cf;
    FString::FString(local_30,(ushort *)L"L2UI_CH3.Button.BigButton_down");
    local_8 = CONCAT31(local_8._1_3_,3);
    local_18 = uVar4 | 4;
    pFStack_70 = (FString *)0x101801e7;
    FString::FString(local_3c,(ushort *)L"L2UI_CH3.Button.BigButton");
    local_8 = 4;
    uVar4 = uVar4 | 0xc;
    pFStack_70 = local_30;
    local_18 = uVar4;
    uVar1 = FUN_10006980();
  }
  *(undefined4 *)(param_1 + 0x1d4) = uVar1;
  local_8 = 3;
  if ((uVar4 & 8) != 0) {
    uVar4 = uVar4 & 0xfffffff7;
    local_18 = uVar4;
    FString::~FString(local_3c);
  }
  local_8 = 0;
  if ((uVar4 & 4) != 0) {
    uVar4 = uVar4 & 0xfffffffb;
    local_18 = uVar4;
    FString::~FString(local_30);
  }
  *(undefined4 *)(*(int *)(param_1 + 0x1d4) + 0x1cc) = 0xaff12015;
  pFStack_70 = (FString *)0x0;
  (**(code **)(**(int **)(param_1 + 0x1d4) + 0xc0))();
  pFStack_8c = *(FString **)(param_1 + 0x1d4);
  FUN_10060d40();
  pFStack_8c = (FString *)0x1018028f;
  FUN_1005c1e0();
  pFStack_8c = (FString *)0x1018029f;
  FUN_10003cf0();
  local_20 = (undefined1 *)&pFStack_8c;
  pFStack_8c = extraout_ECX_01;
  FName::FName((FName *)&pFStack_8c,0);
  UObject::GetTransientPackage();
  iVar2 = FUN_1000a130();
  if (iVar2 == 0) {
    uVar1 = 0;
  }
  else {
    pFStack_8c = (FString *)0x101802d7;
    FString::FString(local_30,(ushort *)L"L2UI_CH3.Button.BigButton_down");
    local_8 = CONCAT31(local_8._1_3_,5);
    local_18 = uVar4 | 0x10;
    pFStack_8c = (FString *)0x101802ef;
    FString::FString(local_3c,(ushort *)L"L2UI_CH3.Button.BigButton");
    local_8 = 6;
    uVar4 = uVar4 | 0x30;
    pFStack_8c = local_30;
    local_18 = uVar4;
    uVar1 = FUN_10006980();
  }
  *(undefined4 *)(param_1 + 0x1d8) = uVar1;
  local_8 = 5;
  if ((uVar4 & 0x20) != 0) {
    uVar4 = uVar4 & 0xffffffdf;
    local_18 = uVar4;
    FString::~FString(local_3c);
  }
  local_8 = 0;
  if ((uVar4 & 0x10) != 0) {
    uVar4 = uVar4 & 0xffffffef;
    local_18 = uVar4;
    FString::~FString(local_30);
  }
  *(undefined4 *)(*(int *)(param_1 + 0x1d8) + 0x1cc) = 0xaff12011;
  pFStack_8c = (FString *)0x0;
  (**(code **)(**(int **)(param_1 + 0x1d8) + 0xc0))();
  pFStack_a8 = *(FString **)(param_1 + 0x1d8);
  FUN_10060d40();
  pFStack_a8 = (FString *)0x10180397;
  FUN_1005c1e0();
  pFStack_a8 = (FString *)0x101803a7;
  FUN_10003cf0();
  local_20 = (undefined1 *)&pFStack_a8;
  pFStack_a8 = extraout_ECX_02;
  FName::FName((FName *)&pFStack_a8,0);
  UObject::GetTransientPackage();
  iVar2 = FUN_1000a130();
  if (iVar2 == 0) {
    uVar1 = 0;
  }
  else {
    pFStack_a8 = (FString *)0x101803df;
    FString::FString(local_30,(ushort *)L"L2UI_CH3.Button.BigButton_down");
    local_8 = CONCAT31(local_8._1_3_,7);
    local_18 = uVar4 | 0x40;
    pFStack_a8 = (FString *)0x101803f7;
    FString::FString(local_3c,(ushort *)L"L2UI_CH3.Button.BigButton");
    local_8 = 8;
    uVar4 = uVar4 | 0xc0;
    pFStack_a8 = local_30;
    local_18 = uVar4;
    uVar1 = FUN_10006980();
  }
  *(undefined4 *)(param_1 + 0x1dc) = uVar1;
  local_8 = 7;
  if ((char)uVar4 < '\0') {
    uVar4 = uVar4 & 0xffffff7f;
    local_18 = uVar4;
    FString::~FString(local_3c);
  }
  local_8 = 0;
  if ((uVar4 & 0x40) != 0) {
    uVar4 = uVar4 & 0xffffffbf;
    local_18 = uVar4;
    FString::~FString(local_30);
  }
  *(undefined4 *)(*(int *)(param_1 + 0x1dc) + 0x1cc) = 0xaff12014;
  pFStack_a8 = (FString *)0x0;
  (**(code **)(**(int **)(param_1 + 0x1dc) + 0xc0))();
  pFStack_c4 = *(FString **)(param_1 + 0x1dc);
  FUN_10060d40();
  pFStack_c4 = (FString *)0x101804a4;
  FUN_1005c1e0();
  pFStack_c4 = (FString *)0x101804b4;
  FUN_10003cf0();
  local_20 = (undefined1 *)&pFStack_c4;
  pFStack_c4 = extraout_ECX_03;
  FName::FName((FName *)&pFStack_c4,0);
  pUVar3 = UObject::GetTransientPackage();
  iVar2 = FUN_1000a130(0x33c,pUVar3);
  if (iVar2 == 0) {
    uVar1 = 0;
  }
  else {
    pFStack_c4 = (FString *)0x101804ec;
    FString::FString(local_30,(ushort *)L"L2UI_CH3.Button.BigButton_down");
    local_8 = CONCAT31(local_8._1_3_,9);
    local_18 = uVar4 | 0x100;
    pFStack_c4 = (FString *)0x10180507;
    FString::FString(local_3c,(ushort *)L"L2UI_CH3.Button.BigButton");
    local_8 = 10;
    uVar4 = uVar4 | 0x300;
    pFStack_c4 = local_30;
    local_18 = uVar4;
    uVar1 = FUN_10006980(local_3c);
  }
  *(undefined4 *)(param_1 + 0x1e0) = uVar1;
  local_8 = 9;
  if ((uVar4 & 0x200) != 0) {
    uVar4 = uVar4 & 0xfffffdff;
    local_18 = uVar4;
    FString::~FString(local_3c);
  }
  local_8 = 0;
  if ((uVar4 & 0x100) != 0) {
    local_18 = uVar4 & 0xfffffeff;
    FString::~FString(local_30);
  }
  *(undefined4 *)(*(int *)(param_1 + 0x1e0) + 0x1cc) = 0xaff12016;
  pFStack_c4 = (FString *)0x0;
  (**(code **)(**(int **)(param_1 + 0x1e0) + 0xc0))(0xd,0x6b,0x60,0x17,0);
  uVar1 = FUN_10060d40(*(undefined4 *)(param_1 + 0x1e0),2);
  FUN_1005c1e0(uVar1);
  FUN_10003cf0(0x4e3);
  ExceptionList = local_10;
  return 1;
}


// ==== 10180630 FUN_10180630 depth=0 from=raiz callees=FUN_10061e90@10061e90
// strings: 

undefined4 __fastcall FUN_10180630(int param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10213c90;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if (*(int *)(param_1 + 0x1cc) != 0) {
    *(undefined4 *)(param_1 + 0x1cc) = 0;
  }
  if (*(int *)(param_1 + 0x1d0) != 0) {
    *(undefined4 *)(param_1 + 0x1d0) = 0;
  }
  FUN_10061e90();
  ExceptionList = local_10;
  return 1;
}


// ==== 101806d0 FUN_101806d0 depth=0 from=raiz callees=
// strings: 

void __fastcall FUN_101806d0(int param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10213cb0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  (**(code **)(**(int **)(param_1 + 0x1cc) + 0x174))();
  ExceptionList = local_10;
  return;
}


// ==== 10180760 FUN_10180760 depth=0 from=raiz callees=CORE.DLL::UObject::StaticAllocateObject@EXTERNAL:000001b1
// strings: 

void FUN_10180760(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  UObject::StaticAllocateObject
            (&DAT_103af850,param_2,param_3,param_4,0,*(undefined4 *)GError_exref,0,0);
  return;
}


// ==== 10180790 FUN_10180790 depth=0 from=raiz callees=CORE.DLL::UObject::StaticAllocateObject@EXTERNAL:000001b1
// strings: 

void FUN_10180790(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  UObject::StaticAllocateObject
            (&DAT_103afd80,param_2,param_3,param_4,0,*(undefined4 *)GError_exref,0,0);
  return;
}


// ==== 101807c0 FUN_101807c0 depth=0 from=raiz callees=FUN_10061fa0@10061fa0
// strings: 

undefined4 * __fastcall FUN_101807c0(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10213cd8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_10061fa0(DAT_103554c4 ^ (uint)&stack0xffffffec);
  *param_1 = NCServerInfoWnd::vftable;
  ExceptionList = local_c;
  return param_1;
}


// ==== 101808b0 FUN_101808b0 depth=0 from=raiz callees=CORE.DLL::FName::FName@EXTERNAL:0000019c FUN_101807c0@101807c0 FUN_101aa0d0@101aa0d0 FUN_10060d40@10060d40 FUN_10180760@10180760 CORE.DLL::UObject::GetTransientPackage@EXTERNAL:0000019b FUN_1005c1e0@1005c1e0 FUN_10180790@10180790
// strings: 

undefined4 __fastcall FUN_101808b0(int param_1)

{
  int iVar1;
  int *piVar2;
  UPackage *pUVar3;
  undefined4 uVar4;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  int aiStack_38 [3];
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10213d30;
  local_10 = ExceptionList;
  aiStack_38[2] = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_8 = 0;
  aiStack_38[1] = 0;
  uStack_40 = 0x101808f4;
  aiStack_38[0] = param_1;
  FName::FName((FName *)aiStack_38,0);
  UObject::GetTransientPackage();
  uStack_40 = 0x210;
  uStack_44 = 0x10180907;
  iVar1 = FUN_10180760();
  if (iVar1 == 0) {
    piVar2 = (int *)0x0;
  }
  else {
    aiStack_38[1] = 0x10180915;
    piVar2 = (int *)FUN_101aa0d0();
  }
  *(int **)(param_1 + 0x1cc) = piVar2;
  aiStack_38[1] = 3;
  aiStack_38[0] = 0;
  uStack_40 = 0x14a;
  uStack_44 = 0x13c;
  uStack_48 = 0;
  uStack_4c = 0;
  uStack_50 = 0x1018093f;
  (**(code **)(*piVar2 + 0xc0))();
  uStack_50 = 2;
  uStack_54 = *(undefined4 *)(param_1 + 0x1cc);
  uStack_58 = 0x1018094f;
  uStack_50 = FUN_10060d40();
  uStack_54 = 0x1018095b;
  FUN_1005c1e0();
  uStack_50 = 0x1c1;
  uStack_54 = 0x10180970;
  (**(code **)(**(int **)(param_1 + 0x1cc) + 0x164))();
  uStack_54 = 0;
  FName::FName((FName *)&uStack_58,0);
  pUVar3 = UObject::GetTransientPackage();
  iVar1 = FUN_10180790(0x1d4,pUVar3);
  if (iVar1 == 0) {
    piVar2 = (int *)0x0;
  }
  else {
    uStack_54 = 0x1018099b;
    piVar2 = (int *)FUN_101807c0();
  }
  *(int **)(param_1 + 0x1d0) = piVar2;
  uStack_54 = 3;
  uStack_58 = 0;
  (**(code **)(*piVar2 + 0xc0))(0,0x151,0x13c,0xcd,0);
  uVar4 = FUN_10060d40(*(undefined4 *)(param_1 + 0x1d0),2);
  FUN_1005c1e0(uVar4);
  (**(code **)(**(int **)(param_1 + 0x1d0) + 0x164))(0x359);
  ExceptionList = local_10;
  return 1;
}


// ==== 10180b10 FUN_10180b10 depth=0 from=raiz callees=FUN_100570d0@100570d0
// strings: 

bool __thiscall FUN_10180b10(int *param_1,int param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = FUN_100570d0(param_2,param_3,param_4);
  if (iVar1 != 0) {
    return true;
  }
  if (param_2 == 0x501) {
    if (param_3 == 0x112211f0) {
      iVar1 = (**(code **)(*param_1 + 500))();
      return iVar1 != 0;
    }
    if (param_3 == 0x1006) {
      iVar1 = (**(code **)(*param_1 + 0x1f8))();
      return iVar1 != 0;
    }
    if (param_3 == 0x1007) {
      iVar1 = (**(code **)(*param_1 + 0x1fc))();
      return iVar1 != 0;
    }
    if (param_3 == 0x1503) {
      iVar1 = (**(code **)(*param_1 + 0x200))(param_4);
      return iVar1 != 0;
    }
    if (param_3 == 0x112211f1) {
      iVar1 = (**(code **)(*param_1 + 0x204))(param_4);
      return iVar1 != 0;
    }
  }
  return false;
}


// ==== 10180c00 FUN_10180c00 depth=0 from=raiz callees=FUN_10061e90@10061e90
// strings: 

undefined4 __fastcall FUN_10180c00(int param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10213d70;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if (*(int *)(param_1 + 0x1e0) != 0) {
    *(undefined4 *)(param_1 + 0x1e0) = 0;
  }
  if (*(int *)(param_1 + 0x1e4) != 0) {
    *(undefined4 *)(param_1 + 0x1e4) = 0;
  }
  if (*(int *)(param_1 + 0x1f0) != 0) {
    *(undefined4 *)(param_1 + 0x1f0) = 0;
  }
  if (*(int *)(param_1 + 500) != 0) {
    *(undefined4 *)(param_1 + 500) = 0;
  }
  if (*(int *)(param_1 + 0x1f8) != 0) {
    *(undefined4 *)(param_1 + 0x1f8) = 0;
  }
  FUN_10061e90();
  ExceptionList = local_10;
  return 1;
}


// ==== 10180cd0 FUN_10180cd0 depth=0 from=raiz callees=
// strings: 

void __fastcall FUN_10180cd0(int param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10213d90;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  (**(code **)(**(int **)(param_1 + 0x1e4) + 0x174))();
  (**(code **)(**(int **)(param_1 + 0x1e8) + 0x174))();
  ExceptionList = local_10;
  return;
}


// ==== 10180d70 FUN_10180d70 depth=0 from=raiz callees=CORE.DLL::FString::operator*@EXTERNAL:0000019f CORE.DLL::appAtoi@EXTERNAL:000001bc CORE.DLL::appStrlen@EXTERNAL:000001b4 FUN_10141a90@10141a90 FUN_10141b50@10141b50 FUN_1014ed50@1014ed50
// strings: 

undefined4 __fastcall FUN_10180d70(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  ushort *puVar5;
  FString *this;
  int iVar6;
  undefined4 *puVar7;
  int local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10213db0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  iVar6 = 0;
  local_8 = 0;
  if (*(int *)(param_1 + 0x1cc) == 0) {
    iVar2 = (**(code **)(**(int **)(param_1 + 0x1e0) + 0x1f8))();
    if (iVar2 != 0) {
      iVar2 = (**(code **)(**(int **)(param_1 + 0x1e0) + 0x1f8))();
      if (iVar2 != 0) {
        iVar2 = (**(code **)(**(int **)(param_1 + 0x1e4) + 0x1f8))();
        if (iVar2 == 0) {
          puVar7 = (undefined4 *)(*DAT_103663bc + 0x658);
          this = (FString *)(GL2GameData_exref + 0x26030);
          goto LAB_10180ee6;
        }
      }
      if (*(int *)(param_1 + 0x200) != 0) goto LAB_10180fb2;
      puVar5 = (ushort *)(**(code **)(**(int **)(param_1 + 0x1e8) + 0x1f8))();
      if (puVar5 != (ushort *)0x0) {
        iVar6 = appAtoi(puVar5);
      }
      piVar1 = *(int **)(param_1 + 0x1e0);
      uVar3 = (**(code **)(**(int **)(param_1 + 0x1e4) + 0x1f8))(iVar6);
      uVar4 = (**(code **)(*piVar1 + 0x1f8))(uVar3);
      iVar6 = FUN_10141a90(uVar4,uVar3,iVar6);
      if (iVar6 == 0) {
        iVar6 = *DAT_103663bc;
        puVar5 = FString::operator*((FString *)(GL2GameData_exref + 0x26144));
        (**(code **)(iVar6 + 0x658))(puVar5);
      }
LAB_10180fa8:
      *(undefined4 *)(param_1 + 0x200) = 1;
      goto LAB_10180fb2;
    }
    puVar7 = (undefined4 *)(*DAT_103663bc + 0x658);
    this = (FString *)(GL2GameData_exref + 0x25fd4);
  }
  else {
    iVar2 = (**(code **)(**(int **)(param_1 + 0x1e4) + 0x1f8))();
    if (iVar2 != 0) {
      if (*(int *)(param_1 + 0x200) != 0) goto LAB_10180fb2;
      puVar5 = (ushort *)(**(code **)(**(int **)(param_1 + 0x1e4) + 0x1f8))();
      local_18 = appAtoi(puVar5);
      while( true ) {
        iVar2 = appStrlen(puVar5);
        if (iVar2 <= iVar6) break;
        if ((puVar5[iVar6] < 0x30) || (0x39 < puVar5[iVar6])) {
          local_18 = -1;
        }
        iVar6 = iVar6 + 1;
      }
      if (iVar6 != 4) {
        local_18 = -1;
      }
      iVar6 = FUN_10141b50(*(undefined4 *)(param_1 + 0x1d4),local_18);
      if (iVar6 == 0) {
        iVar6 = *DAT_103663bc;
        puVar5 = FString::operator*((FString *)(GL2GameData_exref + 0x26144));
        (**(code **)(iVar6 + 0x658))(puVar5);
      }
      goto LAB_10180fa8;
    }
    puVar7 = (undefined4 *)(*DAT_103663bc + 0x658);
    this = (FString *)(GL2GameData_exref + 0x3fd1c);
  }
LAB_10180ee6:
  puVar5 = FString::operator*(this);
  (*(code *)*puVar7)(puVar5);
LAB_10180fb2:
  FUN_1014ed50(0);
  ExceptionList = local_10;
  return 1;
}


// ==== 10181010 FUN_10181010 depth=0 from=raiz callees=CORE.DLL::appRequestExit@EXTERNAL:000001bb
// strings: 

undefined4 FUN_10181010(void)

{
  appRequestExit(0);
  return 1;
}


// ==== 10181030 FUN_10181030 depth=0 from=raiz callees=FUN_1005fe50@1005fe50 FUN_10141090@10141090 FUN_10135ea0@10135ea0 FUN_10136320@10136320
// strings: 

void __fastcall FUN_10181030(int param_1)

{
  int iVar1;
  code *pcVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10213dd0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_1005fe50();
  iVar1 = **(int **)(param_1 + 0x1e0);
  if (*(int *)(param_1 + 0x1cc) != 0) {
    (**(code **)(iVar1 + 0x13c))();
    (**(code **)(**(int **)(param_1 + 0x1e4) + 0x174))();
    iVar1 = **(int **)(param_1 + 0x1e4);
  }
  (**(code **)(iVar1 + 0x78))();
  iVar1 = FUN_10141090();
  if (iVar1 == 0) {
    (**(code **)(**(int **)(param_1 + 0x1e8) + 0x13c))();
    (**(code **)(**(int **)(param_1 + 0x1ec) + 0x13c))();
  }
  if ((*(int *)GL2UseKeyCrypt_exref == 0) || (*(int *)GIsL2NetLogin_exref == 0)) {
LAB_10181132:
    pcVar2 = *(code **)(**(int **)(param_1 + 0x1f8) + 0x13c);
  }
  else {
    if (*(int *)(DAT_103663bc + 0x5120) != 0) {
      iVar1 = FUN_10136320();
      if (iVar1 != 0) {
        iVar1 = FUN_10135ea0();
        if (iVar1 != 0) goto LAB_10181132;
      }
    }
    (**(code **)(**(int **)(param_1 + 0x1f8) + 0x1f8))();
    pcVar2 = *(code **)(**(int **)(param_1 + 0x1f8) + 0x78);
  }
  (*pcVar2)();
  ExceptionList = local_10;
  return;
}


// ==== 10181190 FUN_10181190 depth=0 from=raiz callees=FUN_10135df0@10135df0 FUN_1005ff00@1005ff00
// strings: 

void FUN_10181190(void)

{
  FUN_1005ff00();
  if ((*(int *)GL2UseKeyCrypt_exref != 0) && (*(int *)(DAT_103663bc + 0x5120) != 0)) {
    FUN_10135df0();
    return;
  }
  return;
}


// ==== 101811c0 FUN_101811c0 depth=0 from=raiz callees=
// strings: 

undefined4 __thiscall FUN_101811c0(int *param_1,int param_2)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10213df0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if (param_2 == 1) {
    (**(code **)(*param_1 + 0x1f8))();
  }
  ExceptionList = local_10;
  return 1;
}


// ==== 10181250 FUN_10181250 depth=0 from=raiz callees=
// strings: 

undefined4 __thiscall FUN_10181250(int *param_1,int param_2)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10213e10;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if (param_2 == 1) {
    (**(code **)(*param_1 + 0x1f8))();
  }
  ExceptionList = local_10;
  return 1;
}


// ==== 101812e0 FUN_101812e0 depth=0 from=raiz callees=
// strings: 

undefined4 __thiscall FUN_101812e0(int param_1,int param_2)

{
  if (param_2 == -0x500edfed) {
    *(undefined4 *)(param_1 + 0x200) = 0;
  }
  return 1;
}


// ==== 10181300 FUN_10181300 depth=0 from=raiz callees=CORE.DLL::UObject::StaticAllocateObject@EXTERNAL:000001b1
// strings: 

void FUN_10181300(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  UObject::StaticAllocateObject
            (&DAT_103a3860,param_2,param_3,param_4,0,*(undefined4 *)GError_exref,0,0);
  return;
}


// ==== 10181670 FUN_10181670 depth=0 from=raiz callees=FUN_10164030@10164030 FUN_101c19e0@101c19e0 FUN_100212e0@100212e0 FUN_100217a0@100217a0 FUN_10141090@10141090 FUN_10002f40@10002f40 FUN_10021a00@10021a00 FUN_10020bb0@10020bb0 __security_check_cookie@101c16c2 FUN_10021df0@10021df0
// strings: 

void __thiscall FUN_10181670(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  ushort *puVar3;
  int iVar4;
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
  uint uStack_438;
  int aiStack_420 [2];
  undefined1 *puStack_418;
  void *pvStack_414;
  undefined *puStack_410;
  undefined4 uStack_40c;
  ushort auStack_408 [512];
  uint uStack_8;
  
  puStack_410 = &UNK_10213ea0;
  pvStack_414 = ExceptionList;
  uStack_438 = DAT_103554c4 ^ (uint)auStack_408;
  puStack_418 = (undefined1 *)&uStack_438;
  ExceptionList = &pvStack_414;
  uStack_40c = 0;
  uStack_8 = uStack_438;
  uVar1 = FUN_101c19e0();
  uVar2 = FUN_101c19e0(uVar1);
  FUN_10021df0(*(undefined4 *)(param_1 + 0x80),*(undefined4 *)(param_1 + 0x84),uVar2,uVar1);
  FUN_10002f40(*(undefined4 *)(param_1 + 0x80),*(undefined4 *)(param_1 + 0x84));
  if (*(int *)(param_1 + 0x1dc) != 0) {
    uVar1 = FUN_101c19e0();
    uVar2 = FUN_101c19e0();
    FUN_10021a00(0,0,uVar2,uVar1,0,0,uVar2,uVar1,*(undefined4 *)(param_1 + 0x1dc),0xff,1);
  }
  if (*(int *)(param_1 + 0x1cc) == 0) {
    puVar3 = FString::operator*((FString *)(GL2GameData_exref + 0x6afe4));
    if (puVar3 != (ushort *)0x0) {
      uVar13 = 0;
      uVar11 = 0;
      uVar9 = 0;
      uVar7 = 0;
      uVar2 = 0;
      uVar1 = 0;
      puVar3 = FString::operator*((FString *)(GL2GameData_exref + 0x6afe4));
      FUN_10020bb0(aiStack_420,puVar3,uVar1,uVar2,uVar7,uVar9,uVar11,uVar13);
      uVar14 = 0xffffffff;
      uVar12 = 0;
      uVar10 = 0;
      uVar8 = 0;
      uVar6 = 0;
      uVar5 = 0;
      uVar13 = 0;
      uVar11 = 0;
      uVar9 = 0;
      uVar7 = 0;
      uVar2 = 0;
      uVar1 = 0;
      puVar3 = FString::operator*((FString *)(GL2GameData_exref + 0x6afe4));
      FUN_100217a0(0x4e - aiStack_420[0],0x17,0xffdcdcdc,puVar3,uVar1,uVar2,uVar7,uVar9,uVar11,
                   uVar13,uVar5,uVar6,uVar8,uVar10,uVar12,uVar14);
    }
    puVar3 = FString::operator*((FString *)(GL2GameData_exref + 0x6aff0));
    if (puVar3 != (ushort *)0x0) {
      uVar13 = 0;
      uVar11 = 0;
      uVar9 = 0;
      uVar7 = 0;
      uVar2 = 0;
      uVar1 = 0;
      puVar3 = FString::operator*((FString *)(GL2GameData_exref + 0x6aff0));
      FUN_10020bb0(aiStack_420,puVar3,uVar1,uVar2,uVar7,uVar9,uVar11,uVar13);
      uVar14 = 0xffffffff;
      uVar12 = 0;
      uVar10 = 0;
      uVar8 = 0;
      uVar6 = 0;
      uVar5 = 0;
      uVar13 = 0;
      uVar11 = 0;
      uVar9 = 0;
      uVar7 = 0;
      uVar2 = 0;
      uVar1 = 0;
      puVar3 = FString::operator*((FString *)(GL2GameData_exref + 0x6aff0));
      FUN_100217a0(0x4e - aiStack_420[0],0x2d,0xffdcdcdc,puVar3,uVar1,uVar2,uVar7,uVar9,uVar11,
                   uVar13,uVar5,uVar6,uVar8,uVar10,uVar12,uVar14);
    }
    iVar4 = FUN_10141090();
    if (iVar4 == 0) goto LAB_101818f6;
    puVar3 = FString::operator*((FString *)(GL2GameData_exref + 0x6ede8));
    if (puVar3 == (ushort *)0x0) goto LAB_101818f6;
    uVar13 = 0;
    uVar11 = 0;
    uVar9 = 0;
    uVar7 = 0;
    uVar2 = 0;
    uVar1 = 0;
    puVar3 = FString::operator*((FString *)(GL2GameData_exref + 0x6ede8));
    FUN_10020bb0(aiStack_420,puVar3,uVar1,uVar2,uVar7,uVar9,uVar11,uVar13);
    uVar15 = 0xffffffff;
    uVar14 = 0;
    uVar12 = 0;
    uVar10 = 0;
    uVar8 = 0;
    uVar6 = 0;
    uVar5 = 0;
    uVar13 = 0;
    uVar11 = 0;
    uVar9 = 0;
    uVar7 = 0;
    uVar2 = 0;
    puVar3 = FString::operator*((FString *)(GL2GameData_exref + 0x6ede8));
    uVar1 = 0x43;
    aiStack_420[0] = 0x4e - aiStack_420[0];
  }
  else {
    if (*(int *)(param_1 + 0x1cc) != 1) goto LAB_101818f6;
    FUN_10164030(0x4d5,*(undefined4 *)(param_1 + 0x1d0),auStack_408);
    uVar15 = 0xffffffff;
    uVar14 = 0;
    uVar12 = 0;
    uVar10 = 0;
    uVar8 = 0;
    uVar6 = 0;
    uVar5 = 0;
    uVar13 = 0;
    uVar11 = 0;
    uVar9 = 0;
    uVar7 = 0;
    uVar2 = 0;
    uVar1 = 0x17;
    aiStack_420[0] = 0x1e;
    puVar3 = auStack_408;
  }
  FUN_100217a0(aiStack_420[0],uVar1,0xffdcdcdc,puVar3,uVar2,uVar7,uVar9,uVar11,uVar13,uVar5,uVar6,
               uVar8,uVar10,uVar12,uVar14,uVar15);
LAB_101818f6:
  *(undefined4 *)(param_2 + 0x38) = 0;
  *(undefined4 *)(param_2 + 0x3c) = 0;
  FUN_100212e0();
  uStack_40c = 0xffffffff;
  ExceptionList = pvStack_414;
  __security_check_cookie(uStack_8 ^ (uint)auStack_408);
  return;
}


// ==== 10181970 FUN_10181970 depth=0 from=raiz callees=FUN_10005c30@10005c30 FUN_1003f970@1003f970 CORE.DLL::FString::~FString@EXTERNAL:00000197 FUN_100d1790@100d1790 FUN_1003fff0@1003fff0 CORE.DLL::FString::FString@EXTERNAL:000001b0 FUN_10040230@10040230
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


// ==== 10181a70 FUN_10181a70 depth=0 from=raiz callees=FUN_10012420@10012420
// strings: 

undefined4 * __fastcall FUN_10181a70(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10213f18;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_10012420(DAT_103554c4 ^ (uint)&stack0xffffffec);
  *param_1 = NCKeyCryptWarningDialogBox::vftable;
  param_1[0xb6] = 0;
  param_1[0xb7] = 0;
  ExceptionList = local_c;
  return param_1;
}


// ==== 10181bf0 FUN_10181bf0 depth=0 from=raiz callees=CORE.DLL::UObject::ConditionalDestroy@EXTERNAL:00000187 FUN_10002910@10002910
// strings: 

void __fastcall FUN_10181bf0(UObject *param_1)

{
  uint uVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_10213fa8;
  local_c = ExceptionList;
  uVar1 = DAT_103554c4 ^ (uint)&stack0xffffffec;
  ExceptionList = &local_c;
  *(undefined ***)param_1 = NCAuthWnd::vftable;
  local_4 = 0;
  UObject::ConditionalDestroy(param_1);
  local_4 = 0xffffffff;
  FUN_10002910(uVar1);
  ExceptionList = local_c;
  return;
}


// ==== 10181c50 FUN_10181c50 depth=0 from=raiz callees=FUN_10181bf0@10181bf0 CORE.DLL::UObject::operator_delete@EXTERNAL:00000188
// strings: 

void * __thiscall FUN_10181c50(void *param_1,byte param_2)

{
  FUN_10181bf0();
  if ((param_2 & 1) != 0) {
    UObject::operator_delete(param_1,0x204);
  }
  return param_1;
}


// ==== 10181c80 FUN_10181c80 depth=0 from=raiz callees=FUN_10003cf0@10003cf0 FUN_10181300@10181300 CORE.DLL::FName::FName@EXTERNAL:0000019c FUN_10061b40@10061b40 FUN_1003f600@1003f600 FUN_10060d40@10060d40 FUN_1001a820@1001a820 CORE.DLL::FString::operator*@EXTERNAL:0000019f FUN_1000ef10@1000ef10 FUN_1000a130@1000a130 CORE.DLL::FString::FString@EXTERNAL:000001b0 FUN_10006980@10006980 CORE.DLL::UObject::GetTransientPackage@EXTERNAL:0000019b FUN_10004190@10004190 FUN_10181a70@10181a70 CORE.DLL::FString::~FString@EXTERNAL:00000197 FUN_10058020@10058020 FUN_1003f630@1003f630 FUN_10141090@10141090 FUN_10013300@10013300 FUN_1005c1e0@1005c1e0
// strings: 1028cac0=L2UI_CH3.LoginWnd.otplogon_back | 1028ca80=L2UI_CH3.LoginWnd.logon_back | 1028ca38=L2UI_CH3.LoginWnd.aboutotpicon_down | 1028c9f8=L2UI_CH3.LoginWnd.aboutotpicon | 1028c9b8=L2UI_CH3.BUTTON.bigbutton_down | 1028c984=L2UI_CH3.BUTTON.bigbutton | 1028c9b8=L2UI_CH3.BUTTON.bigbutton_down | 1028c984=L2UI_CH3.BUTTON.bigbutton | 

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __fastcall FUN_10181c80(int *param_1)

{
  int iVar1;
  ushort *puVar2;
  UPackage *pUVar3;
  int *piVar4;
  undefined4 uVar5;
  FString *extraout_ECX;
  FString *extraout_ECX_00;
  FString *extraout_ECX_01;
  FString *pFVar6;
  FString *extraout_ECX_02;
  uint uVar7;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  int iStack_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  FString *pFStack_ec;
  FString *pFStack_d0;
  FString *pFStack_b0;
  int iStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  int iStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  wchar_t *pwStack_50;
  undefined4 uStack_4c;
  uint uStack_48;
  FString local_38 [16];
  FString local_28 [4];
  undefined4 local_24;
  undefined1 *local_20;
  uint local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  puStack_c = &LAB_1021407e;
  local_10 = ExceptionList;
  uStack_48 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_48;
  ExceptionList = &local_10;
  uVar7 = 0;
  local_18 = 0;
  local_8 = 0;
  uStack_4c = 0x10181cbb;
  FUN_10061b40();
  uStack_4c = 0x10181cc6;
  iVar1 = FUN_10141090();
  uStack_4c = 1;
  if (iVar1 == 0) {
    pwStack_50 = L"L2UI_CH3.LoginWnd.logon_back";
  }
  else {
    pwStack_50 = L"L2UI_CH3.LoginWnd.otplogon_back";
  }
  uStack_54 = 0x10181cdf;
  iVar1 = FUN_1003f630();
  param_1[0x77] = iVar1;
  uStack_4c = 0;
  pwStack_50 = (wchar_t *)0x1388;
  uStack_54 = 0xaff12013;
  uStack_58 = 0x10181cf7;
  iVar1 = FUN_1003f600();
  param_1[0x7f] = iVar1;
  uStack_58 = 0;
  local_20 = (undefined1 *)&uStack_5c;
  uStack_64 = 0x10181d0b;
  FName::FName((FName *)&uStack_5c,0);
  UObject::GetTransientPackage();
  uStack_64 = 0x400;
  uStack_68 = 0x10181d1e;
  iVar1 = FUN_1000ef10();
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    uStack_58 = 0;
    uStack_5c = 1;
    uStack_64 = 1;
    uStack_68 = 0;
    uStack_6c = 6;
    uStack_70 = 0x10181d3b;
    iVar1 = FUN_1001a820();
  }
  param_1[0x78] = iVar1;
  *(undefined4 *)(iVar1 + 0x1cc) = 0x1502;
  uStack_58 = 3;
  uStack_5c = 0;
  uStack_64 = 0x11;
  uStack_68 = 0x80;
  uStack_6c = 0x14;
  uStack_70 = 0x54;
  uStack_74 = 0x10181d70;
  (**(code **)(*(int *)param_1[0x78] + 0xc0))();
  uStack_74 = 2;
  iStack_78 = param_1[0x78];
  uStack_74 = FUN_10060d40();
  iStack_78 = 0x10181d8c;
  FUN_1005c1e0();
  uStack_74 = 0;
  local_20 = (undefined1 *)&iStack_78;
  uStack_80 = 0x10181d9c;
  FName::FName((FName *)&iStack_78,0);
  UObject::GetTransientPackage();
  uStack_80 = 0x400;
  uStack_84 = 0x10181da9;
  iVar1 = FUN_1000ef10();
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    uStack_74 = 0;
    iStack_78 = 1;
    uStack_80 = 1;
    uStack_84 = 0;
    uStack_88 = 2;
    uStack_8c = 0x10181dc6;
    iVar1 = FUN_1001a820();
  }
  param_1[0x79] = iVar1;
  *(undefined4 *)(iVar1 + 0x1cc) = 0x1503;
  uStack_74 = 3;
  iStack_78 = 0;
  uStack_80 = 0x11;
  uStack_84 = 0x80;
  uStack_88 = 0x2a;
  uStack_8c = 0x54;
  uStack_90 = 0x10181dfb;
  (**(code **)(*(int *)param_1[0x79] + 0xc0))();
  uStack_90 = 2;
  iStack_94 = param_1[0x79];
  uStack_90 = FUN_10060d40();
  iStack_94 = 0x10181e17;
  FUN_1005c1e0();
  uStack_90 = 0;
  local_20 = (undefined1 *)&iStack_94;
  FName::FName((FName *)&iStack_94,0);
  UObject::GetTransientPackage();
  iVar1 = FUN_1000ef10();
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    uStack_90 = 0;
    iStack_94 = 1;
    iVar1 = FUN_1001a820();
  }
  param_1[0x7a] = iVar1;
  *(undefined4 *)(iVar1 + 0x1cc) = 0x112211f1;
  uStack_90 = 3;
  iStack_94 = 0;
  (**(code **)(*(int *)param_1[0x7a] + 0xc0))();
  pFStack_b0 = (FString *)param_1[0x7a];
  FUN_10060d40();
  pFStack_b0 = (FString *)0x10181ea2;
  FUN_1005c1e0();
  puVar2 = FString::operator*((FString *)(GL2GameData_exref + 0x4f00c));
  local_20 = &stack0xffffff4c;
  FString::FString((FString *)&stack0xffffff4c,puVar2);
  local_8 = local_8 & 0xffffff00;
  FUN_10013300();
  local_20 = (undefined1 *)&pFStack_b0;
  pFStack_b0 = extraout_ECX;
  FName::FName((FName *)&pFStack_b0,0);
  UObject::GetTransientPackage();
  iVar1 = FUN_1000a130();
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    pFStack_b0 = (FString *)0x10181f0a;
    FString::FString(local_38,(ushort *)L"L2UI_CH3.LoginWnd.aboutotpicon_down");
    local_8 = CONCAT31(local_8._1_3_,2);
    local_18 = 1;
    pFStack_b0 = (FString *)0x10181f23;
    FString::FString(local_28,(ushort *)L"L2UI_CH3.LoginWnd.aboutotpicon");
    uVar7 = 3;
    local_8 = 3;
    local_18 = 3;
    pFStack_b0 = local_38;
    iVar1 = FUN_10006980();
  }
  param_1[0x7b] = iVar1;
  local_8 = 2;
  if ((uVar7 & 2) != 0) {
    uVar7 = uVar7 & 0xfffffffd;
    local_18 = uVar7;
    FString::~FString(local_28);
  }
  local_8 = 0;
  if ((uVar7 & 1) != 0) {
    uVar7 = uVar7 & 0xfffffffe;
    local_18 = uVar7;
    FString::~FString(local_38);
  }
  *(undefined4 *)(param_1[0x7b] + 0x1cc) = 0x112211f0;
  pFStack_b0 = (FString *)param_1[0x7b];
  FUN_10060d40();
  pFStack_b0 = _DAT_102372c8;
  (**(code **)(*(int *)param_1[0x7b] + 0x128))();
  local_24 = 5;
  local_20 = (undefined1 *)0x1;
  (**(code **)(*(int *)param_1[0x7b] + 0xd4))();
  pFStack_d0 = (FString *)0x10182001;
  FUN_1005c1e0();
  puVar2 = FString::operator*((FString *)(GL2GameData_exref + 0x4ecd0));
  pFStack_d0 = (FString *)0x1018201d;
  FString::FString(local_38,puVar2);
  local_8._0_1_ = 4;
  pFStack_d0 = (FString *)0x1;
  FUN_10004190();
  local_8 = (uint)local_8._1_3_ << 8;
  FString::~FString(local_38);
  iVar1 = FUN_10141090();
  pFVar6 = extraout_ECX_00;
  if (iVar1 == 0) {
    (**(code **)(*(int *)param_1[0x7a] + 0x13c))();
    (**(code **)(*(int *)param_1[0x7b] + 0x13c))();
    pFVar6 = extraout_ECX_01;
  }
  local_20 = (undefined1 *)&pFStack_d0;
  pFStack_d0 = pFVar6;
  FName::FName((FName *)&pFStack_d0,0);
  UObject::GetTransientPackage();
  iVar1 = FUN_1000a130();
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    pFStack_d0 = (FString *)0x101820a8;
    FString::FString(local_28,(ushort *)L"L2UI_CH3.BUTTON.bigbutton_down");
    local_8 = CONCAT31(local_8._1_3_,5);
    local_18 = uVar7 | 4;
    pFStack_d0 = (FString *)0x101820c0;
    FString::FString(local_38,(ushort *)L"L2UI_CH3.BUTTON.bigbutton");
    local_8 = 6;
    uVar7 = uVar7 | 0xc;
    pFStack_d0 = local_28;
    local_18 = uVar7;
    iVar1 = FUN_10006980();
  }
  param_1[0x7c] = iVar1;
  local_8 = 5;
  if ((uVar7 & 8) != 0) {
    uVar7 = uVar7 & 0xfffffff7;
    local_18 = uVar7;
    FString::~FString(local_38);
  }
  local_8 = 0;
  if ((uVar7 & 4) != 0) {
    uVar7 = uVar7 & 0xfffffffb;
    local_18 = uVar7;
    FString::~FString(local_28);
  }
  *(undefined4 *)(param_1[0x7c] + 0x1cc) = 0x1006;
  FUN_10141090();
  pFStack_d0 = (FString *)0x0;
  (**(code **)(*(int *)param_1[0x7c] + 0xc0))();
  pFStack_ec = (FString *)param_1[0x7c];
  FUN_10060d40();
  pFStack_ec = (FString *)0x1018217b;
  FUN_1005c1e0();
  pFStack_ec = (FString *)0x1018218b;
  FUN_10003cf0();
  local_20 = (undefined1 *)&pFStack_ec;
  uStack_f4 = 0x1018219b;
  pFStack_ec = extraout_ECX_02;
  FName::FName((FName *)&pFStack_ec,0);
  UObject::GetTransientPackage();
  uStack_f4 = 0x33c;
  uStack_f8 = 0x101821ac;
  iVar1 = FUN_1000a130();
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    pFStack_ec = (FString *)0x101821c3;
    FString::FString(local_28,(ushort *)L"L2UI_CH3.BUTTON.bigbutton_down");
    local_8 = CONCAT31(local_8._1_3_,7);
    local_18 = uVar7 | 0x10;
    pFStack_ec = (FString *)0x101821db;
    FString::FString(local_38,(ushort *)L"L2UI_CH3.BUTTON.bigbutton");
    local_8 = 8;
    uVar7 = uVar7 | 0x30;
    pFStack_ec = local_28;
    uStack_f4 = 0x101821f9;
    local_18 = uVar7;
    iVar1 = FUN_10006980();
  }
  param_1[0x7d] = iVar1;
  local_8 = 7;
  if ((uVar7 & 0x20) != 0) {
    uVar7 = uVar7 & 0xffffffdf;
    local_18 = uVar7;
    FString::~FString(local_38);
  }
  local_8 = 0;
  if ((uVar7 & 0x10) != 0) {
    local_18 = uVar7 & 0xffffffef;
    FString::~FString(local_28);
  }
  *(undefined4 *)(param_1[0x7d] + 0x1cc) = 0x1007;
  iVar1 = FUN_10141090();
  pFStack_ec = (FString *)0x0;
  uStack_f4 = 0x17;
  uStack_f8 = 0x60;
  if (iVar1 == 0) {
    uStack_fc = 0x48;
  }
  else {
    uStack_fc = 0x5c;
  }
  uStack_100 = 0x83;
  uStack_104 = 0x1018227d;
  (**(code **)(*(int *)param_1[0x7d] + 0xc0))();
  uStack_104 = 2;
  iStack_108 = param_1[0x7d];
  uStack_10c = 0x1018228d;
  uStack_104 = FUN_10060d40();
  iStack_108 = 0x10182299;
  FUN_1005c1e0();
  uStack_104 = 0x99;
  iStack_108 = 0x101822a9;
  FUN_10003cf0();
  iVar1 = *param_1;
  uStack_104 = 0x101822b6;
  uStack_104 = FUN_10058020();
  iStack_108 = 0x101822c2;
  iStack_108 = FUN_10058020();
  uStack_10c = 0x101822cd;
  (**(code **)(iVar1 + 0x10c))();
  uStack_10c = 0x101822d8;
  iVar1 = FUN_10141090();
  if (iVar1 == 0) {
    iVar1 = *(int *)param_1[0x78];
    uStack_10c = 0x1018239a;
    uStack_10c = FUN_10058020();
    uStack_110 = 0x101823a6;
    uStack_110 = FUN_10058020();
    uStack_114 = 0x101823b5;
    (**(code **)(iVar1 + 0x10c))();
    iVar1 = *(int *)param_1[0x79];
    uStack_124 = 0x101823c8;
    uStack_124 = FUN_10058020();
    uStack_128 = 0x101823d4;
    uStack_128 = FUN_10058020();
  }
  else {
    iVar1 = *param_1;
    uStack_10c = 0x101822ed;
    uStack_10c = FUN_10058020();
    uStack_110 = 0x101822f9;
    uStack_110 = FUN_10058020();
    uStack_114 = 0x10182304;
    (**(code **)(iVar1 + 0x10c))();
    iVar1 = *(int *)param_1[0x78];
    uStack_114 = 0x10182317;
    uStack_114 = FUN_10058020();
    uStack_118 = 0x10182323;
    uStack_118 = FUN_10058020();
    uStack_11c = 0x10182332;
    (**(code **)(iVar1 + 0x10c))();
    iVar1 = *(int *)param_1[0x79];
    uStack_11c = 0x10182345;
    uStack_11c = FUN_10058020();
    uStack_120 = 0x10182351;
    uStack_120 = FUN_10058020();
    uStack_124 = 0x10182360;
    (**(code **)(iVar1 + 0x10c))();
    iVar1 = *(int *)param_1[0x7a];
    uStack_124 = 0x10182373;
    uStack_124 = FUN_10058020();
    uStack_128 = 0x1018237f;
    uStack_128 = FUN_10058020();
  }
  uStack_12c = 0x101823e3;
  (**(code **)(iVar1 + 0x10c))();
  uStack_12c = 0;
  local_20 = (undefined1 *)&uStack_130;
  FName::FName((FName *)&uStack_130,0);
  pUVar3 = UObject::GetTransientPackage();
  iVar1 = FUN_10181300(0x2e0,pUVar3);
  if (iVar1 == 0) {
    piVar4 = (int *)0x0;
  }
  else {
    uStack_12c = 0x10182412;
    piVar4 = (int *)FUN_10181a70();
  }
  param_1[0x7e] = (int)piVar4;
  uStack_12c = 3;
  uStack_130 = 0;
  (**(code **)(*piVar4 + 0xc0))
            (*(int *)GSEKScreenX_exref / 2 + -0x65,*(int *)GSEKScreenY_exref / 2 + -0x2b,0xcd,0x57,0
            );
  uVar5 = FUN_10060d40(param_1[0x7e],2);
  FUN_1005c1e0(uVar5);
  (**(code **)(*(int *)param_1[0x7e] + 0x13c))();
  ExceptionList = local_10;
  return 1;
}


// ==== 101913a0 FUN_101913a0 depth=0 from=raiz callees=FUN_10033250@10033250
// strings: 

undefined4 FUN_101913a0(void)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10215b20;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_10033250();
  ExceptionList = local_10;
  return 1;
}


// ==== 10191430 FUN_10191430 depth=0 from=raiz callees=FUN_100326c0@100326c0
// strings: 

undefined4 FUN_10191430(undefined4 param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10215b40;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_100326c0(param_1);
  ExceptionList = local_10;
  return 1;
}


// ==== 101914c0 FUN_101914c0 depth=0 from=raiz callees=FUN_10032d00@10032d00
// strings: 

undefined4 FUN_101914c0(void)

{
  FUN_10032d00();
  return 1;
}


// ==== 101914d0 FUN_101914d0 depth=0 from=raiz callees=FUN_10032390@10032390
// strings: 

undefined4 FUN_101914d0(undefined4 param_1)

{
  FUN_10032390(param_1);
  return 1;
}


// ==== 101914f0 FUN_101914f0 depth=0 from=raiz callees=FUN_10032c50@10032c50
// strings: 

undefined4 FUN_101914f0(undefined4 param_1,undefined4 param_2)

{
  FUN_10032c50(param_1,param_2);
  return 1;
}


// ==== 10191510 FUN_10191510 depth=0 from=raiz callees=thunk_FUN_10049a00@1004a040
// strings: 

void FUN_10191510(void)

{
  thunk_FUN_10049a00();
  return;
}


// ==== 10191520 FUN_10191520 depth=0 from=raiz callees=
// strings: 

undefined4 __thiscall FUN_10191520(int *param_1,int param_2)

{
  if (param_2 == 1) {
    (**(code **)(*param_1 + 0x200))();
  }
  return 1;
}


// ==== 10191540 FUN_10191540 depth=0 from=raiz callees=
// strings: 

void __thiscall FUN_10191540(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  *param_1 = param_3;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[10] = 0xffffffff;
  param_1[9] = param_2;
  param_1[0xb] = 0;
  return;
}


// ==== 101915b0 FUN_101915b0 depth=0 from=raiz callees=CORE.DLL::UObject::StaticAllocateObject@EXTERNAL:000001b1
// strings: 

void FUN_101915b0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  UObject::StaticAllocateObject
            (&DAT_103a95c0,param_2,param_3,param_4,0,*(undefined4 *)GError_exref,0,0);
  return;
}


// ==== 10191910 FUN_10191910 depth=0 from=raiz callees=CORE.DLL::appFailAssert@EXTERNAL:0000018a CORE.DLL::FName::FName@EXTERNAL:0000019c CORE.DLL::FRotator::FRotator@EXTERNAL:000001df FUN_1000b3d0@1000b3d0 CORE.DLL::FName::FName@EXTERNAL:0000012f CORE.DLL::FName::operator*@EXTERNAL:0000013b FUN_1014a7d0@1014a7d0 CORE.DLL::UObject::StaticLoadClass@EXTERNAL:000001ca ENGINE.DLL::L2FName::operator*@EXTERNAL:00000093 FUN_101c19e0@101c19e0 FUN_10191540@10191540 CORE.DLL::appSprintf@EXTERNAL:000001ba ENGINE.DLL::APawn::StaticClass@EXTERNAL:0000004f FUN_10032ee0@10032ee0 FUN_10016ea0@10016ea0 __security_check_cookie@101c16c2 ENGINE.DLL::User::SetPawnResource@EXTERNAL:0000001b CORE.DLL::FOutputDevice::Logf2@EXTERNAL:000001b5 ENGINE.DLL::AController::StaticClass@EXTERNAL:00000014 FUN_1018ccd0@1018ccd0
// strings: 1028f0b4=Engine.PlayerController | 10290930=.\Src\NNpcViewerWnd.cpp | 1028f090=pController | 10290910=PawnClass = %s | 

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_10191910(int *param_1)

{
  int *piVar1;
  ushort *puVar2;
  UClass *pUVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  undefined4 *puStack_1f0;
  UObject *pUVar9;
  ushort *puVar10;
  ulong uVar11;
  UPackageMap *pUVar12;
  uint uStack_1c0;
  undefined1 local_1b0 [8];
  undefined4 local_1a8;
  undefined4 *local_1a4;
  float local_1a0;
  float local_18c;
  undefined4 local_17c;
  undefined4 local_178;
  float local_174;
  undefined4 local_170;
  undefined4 local_16c;
  undefined4 *local_168;
  int local_164;
  int local_160;
  undefined4 local_15c;
  undefined4 local_158;
  undefined4 local_154;
  undefined4 local_14c;
  undefined4 local_148;
  float local_144;
  float local_140;
  int *local_13c;
  undefined1 *local_138;
  undefined4 local_134;
  undefined4 local_130;
  undefined4 *local_12c;
  undefined1 *local_128;
  int *local_124;
  float local_120;
  undefined1 *local_11c;
  undefined1 *local_118;
  void *local_114;
  undefined1 *puStack_110;
  undefined4 local_10c;
  ushort local_108 [128];
  uint local_8;
  
  puStack_110 = &LAB_10215ba0;
  local_114 = ExceptionList;
  uStack_1c0 = DAT_103554c4 ^ (uint)local_108;
  local_118 = (undefined1 *)&uStack_1c0;
  ExceptionList = &local_114;
  local_10c = 0;
  local_124 = param_1;
  local_8 = uStack_1c0;
  FName::FName((FName *)&local_128,0);
  if (-1 < param_1[0xc4]) {
    piVar1 = *(int **)(*(int *)(DAT_103663bc + 0x50) + 0x19c);
    local_120 = *(float *)(**(int **)(*(int *)(*(int *)(DAT_103663bc + 0x50) + 0x54) + 0x38) + 0x3c)
    ;
    FName::FName((FName *)&local_11c,(ushort *)L"Engine.PlayerController",1);
    local_128 = local_11c;
    pUVar12 = (UPackageMap *)0x0;
    uVar11 = 1;
    puVar10 = (ushort *)0x0;
    puVar2 = FName::operator*((FName *)&local_128);
    pUVar9 = (UObject *)0x0;
    pUVar3 = AController::StaticClass();
    pUVar3 = UObject::StaticLoadClass(pUVar3,pUVar9,puVar2,puVar10,uVar11,pUVar12);
    local_170 = 0;
    local_16c = 0;
    local_168 = (undefined4 *)0x0;
    iVar4 = *piVar1;
    FRotator::FRotator((FRotator *)&local_140,0,0,0);
    local_11c = (undefined1 *)&puStack_1f0;
    puStack_1f0 = local_168;
    FName::FName((FName *)&puStack_1f0,0);
    iVar4 = (**(code **)(iVar4 + 0xc0))(pUVar3);
    if (iVar4 == 0) {
      appFailAssert("pController",".\\Src\\NNpcViewerWnd.cpp",0x1ff);
    }
    piVar5 = (int *)FUN_10032ee0();
    local_124 = piVar5;
    iVar6 = FUN_1014a7d0();
    *(int *)(iVar6 + 0x200) = *piVar5;
    FUN_1014a7d0();
    pUVar12 = (UPackageMap *)0x0;
    uVar11 = 0;
    puVar10 = (ushort *)0x0;
    puVar2 = L2FName::operator*((L2FName *)(piVar5 + 8));
    pUVar9 = (UObject *)0x0;
    pUVar3 = APawn::StaticClass();
    pUVar3 = UObject::StaticLoadClass(pUVar3,pUVar9,puVar2,puVar10,uVar11,pUVar12);
    *(UClass **)(iVar4 + 0x4f8) = pUVar3;
    if (*(int *)GLog_exref != 0) {
      L2FName::operator*((L2FName *)(piVar5 + 8));
      FOutputDevice::Logf2(*(FOutputDevice **)GLog_exref,(ushort *)*(FOutputDevice **)GLog_exref);
    }
    if (*(int *)(iVar4 + 0x4f8) != 0) {
      iVar6 = *(int *)(*(int *)(**(int **)(*(int *)(*(int *)(DAT_103663bc + 0x50) + 0x54) + 0x38) +
                               0x3c) + 0x3bc);
      local_134 = *(undefined4 *)(iVar6 + 0x1bc);
      local_130 = *(undefined4 *)(iVar6 + 0x1c0);
      local_12c = (undefined4 *)(*(float *)(iVar6 + 0x1c4) + (float)_DAT_1028e5d0);
      iVar6 = *piVar1;
      FRotator::FRotator((FRotator *)&local_140,0,0,0);
      local_11c = (undefined1 *)&puStack_1f0;
      puStack_1f0 = local_12c;
      FName::FName((FName *)&puStack_1f0,0);
      piVar5 = (int *)(**(code **)(iVar6 + 0xc0))(*(undefined4 *)(iVar4 + 0x4f8));
      if (piVar5 != (int *)0x0) {
        (**(code **)(*piVar1 + 0xac))();
        *(int **)(*(int *)(**(int **)(*(int *)(*(int *)(DAT_103663bc + 0x50) + 0x54) + 0x38) + 0x3c)
                 + 0x3bc) = piVar5;
        piVar5[0x536] = (int)local_120;
        *(undefined1 *)((int)piVar5 + 0xc2) = 4;
        local_15c = 0;
        local_158 = 0;
        local_154 = 0x3f800000;
        (**(code **)(*piVar5 + 0x1c8))();
        piVar5[0x1a7] = *local_124;
        iVar4 = FUN_1014a7d0();
        *(int **)(iVar4 + 0x3f0) = piVar5;
        iVar4 = FUN_1014a7d0();
        User::SetPawnResource((User *)(iVar4 + 0x1ec));
        iVar4 = *(int *)(*(int *)(**(int **)(*(int *)(*(int *)(DAT_103663bc + 0x50) + 0x54) + 0x38)
                                 + 0x3c) + 0x3bc);
        local_17c = *(undefined4 *)(iVar4 + 0x1bc);
        local_178 = *(undefined4 *)(iVar4 + 0x1c0);
        local_174 = *(float *)(iVar4 + 0x1c4);
        local_144 = local_174 + (float)_DAT_1028a190;
        local_14c = local_17c;
        local_148 = local_178;
        for (iVar4 = 0; local_164 = iVar4, iVar4 < 0x1e; iVar4 = iVar4 + 1) {
          FUN_10191540();
          local_144 = local_144 + (float)_DAT_1023cb08;
          local_174 = local_174 - (float)_DAT_1023cb08;
          local_140 = (float)piVar5[0xbc];
          local_13c = (int *)piVar5[0xbc];
          local_138 = (undefined1 *)piVar5[0xbd];
          puStack_1f0 = &local_14c;
          local_124 = local_13c;
          local_120 = local_140;
          local_11c = local_138;
          (**(code **)(*piVar1 + 0xe4))(local_1b0,piVar5,&local_17c);
          if (local_1a0 != 0.0) {
            local_120 = local_18c * (float)_DAT_10234f70;
            if (local_120 < (float)_DAT_10290908) {
              local_1a0 = ((float)_DAT_10290900 - local_120) + local_1a0;
            }
            puStack_1f0 = local_1a4;
            (**(code **)(*piVar1 + 0xa8))(piVar5,local_1a8);
            break;
          }
        }
        uVar7 = FUN_101c19e0();
        iVar4 = FUN_1014a7d0();
        *(undefined4 *)(*(int *)(iVar4 + 0x1d4) + 0x234) = uVar7;
        FUN_101c19e0();
        appSprintf(local_108,(ushort *)&DAT_10233718);
        iVar4 = FUN_1014a7d0();
        (**(code **)(**(int **)(*(int *)(iVar4 + 0x1d4) + 0x200) + 0x174))();
        FUN_1014a7d0();
        FUN_10016ea0();
        iVar4 = FUN_1014a7d0();
        *(undefined4 *)(*(int *)(iVar4 + 0x1d4) + 0x230) = 0x3f800000;
        iVar4 = FUN_1014a7d0();
        (**(code **)(**(int **)(*(int *)(iVar4 + 0x1d4) + 0x1fc) + 0x174))();
        FUN_1014a7d0();
        FUN_10016ea0();
        puStack_1f0 = (undefined4 *)0x10191ecc;
        appSprintf(local_108,(ushort *)&DAT_1023d700);
        iVar4 = FUN_1014a7d0();
        (**(code **)(**(int **)(*(int *)(iVar4 + 0x1d4) + 0x204) + 0x174))();
        FUN_1014a7d0();
        FUN_10016ea0();
        puStack_1f0 = (undefined4 *)0x10191f29;
        appSprintf(local_108,(ushort *)&DAT_1023d700);
        iVar4 = FUN_1014a7d0();
        (**(code **)(**(int **)(*(int *)(iVar4 + 0x1d4) + 0x208) + 0x174))();
        FUN_1014a7d0();
        FUN_10016ea0();
        puStack_1f0 = (undefined4 *)0x10191f86;
        appSprintf(local_108,(ushort *)&DAT_1023d700);
        iVar4 = FUN_1014a7d0();
        (**(code **)(**(int **)(*(int *)(iVar4 + 0x1d4) + 0x20c) + 0x174))();
        FUN_1014a7d0();
        FUN_10016ea0();
        iVar4 = *(int *)(*(int *)(**(int **)(*(int *)(*(int *)(DAT_103663bc + 0x50) + 0x54) + 0x38)
                                 + 0x3c) + 0x3bc);
        if ((iVar4 != 0) && (*(int *)(iVar4 + 0x104) != 0)) {
          piVar1 = *(int **)(iVar4 + 0x104);
          (**(code **)(*piVar1 + 0x98))();
          FUN_1018ccd0();
          iVar4 = piVar1[0x92];
          if (iVar4 != 0) {
            FName::FName((FName *)&local_11c,0);
            iVar6 = *(int *)(iVar4 + 0x70);
            iVar8 = FUN_1014a7d0();
            (**(code **)(**(int **)(*(int *)(iVar8 + 0x1d4) + 0x1d0) + 0x174))();
            for (iVar8 = 0; local_160 = iVar8, iVar8 < iVar6; iVar8 = iVar8 + 1) {
              local_11c = *(undefined1 **)(iVar8 * 0x74 + *(int *)(iVar4 + 0x6c));
              FName::operator*((FName *)&local_11c);
              FUN_1014a7d0();
              FUN_1000b3d0();
            }
          }
        }
        local_10c = 0xffffffff;
      }
    }
  }
  ExceptionList = local_114;
  __security_check_cookie(local_8 ^ (uint)local_108);
  return;
}


// ==== 101920e0 FUN_101920e0 depth=0 from=raiz callees=ENGINE.DLL::FL2GameData::GetNpcName@EXTERNAL:00000075 FUN_10032350@10032350 ENGINE.DLL::L2FName::operator*@EXTERNAL:00000093 CORE.DLL::appStrcpy@EXTERNAL:000001c3 FUN_1014a7d0@1014a7d0 FUN_10032ee0@10032ee0
// strings: 

undefined4 __thiscall FUN_101920e0(int param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  ushort *puVar3;
  
  FUN_10032350(param_2,param_3);
  if (*(int *)(param_1 + 0x310) < 0) {
    return 0;
  }
  piVar1 = (int *)FUN_10032ee0(*(int *)(param_1 + 0x310));
  puVar3 = (ushort *)&DAT_1022f9f8;
  iVar2 = FUN_1014a7d0();
  appStrcpy((ushort *)(*(int *)(iVar2 + 0x1d4) + 0x238),puVar3);
  iVar2 = FUN_1014a7d0();
  if (*(int *)(*(int *)(*(int *)(iVar2 + 0x1d4) + 0x214) + 0x2fc) == 0) {
    puVar3 = L2FName::operator*((L2FName *)(piVar1 + 9));
    iVar2 = FUN_1014a7d0();
    iVar2 = *(int *)(iVar2 + 0x1d4);
  }
  else {
    puVar3 = FL2GameData::GetNpcName((FL2GameData *)GL2GameData_exref,*piVar1);
    iVar2 = FUN_1014a7d0();
    iVar2 = *(int *)(iVar2 + 0x1d4);
  }
  appStrcpy((ushort *)(iVar2 + 0x238),puVar3);
  puVar3 = (ushort *)&DAT_1022f9f8;
  iVar2 = FUN_1014a7d0();
  appStrcpy((ushort *)(*(int *)(iVar2 + 0x1d4) + 0x438),puVar3);
  puVar3 = (ushort *)&DAT_1022f9f8;
  iVar2 = FUN_1014a7d0();
  appStrcpy((ushort *)(*(int *)(iVar2 + 0x1d4) + 0x638),puVar3);
  puVar3 = (ushort *)&DAT_1022f9f8;
  iVar2 = FUN_1014a7d0();
  appStrcpy((ushort *)(*(int *)(iVar2 + 0x1d4) + 0x838),puVar3);
  puVar3 = (ushort *)&DAT_1022f9f8;
  iVar2 = FUN_1014a7d0();
  appStrcpy((ushort *)(*(int *)(iVar2 + 0x1d4) + 0xa38),puVar3);
  puVar3 = L2FName::operator*((L2FName *)(piVar1 + 0xb));
  iVar2 = FUN_1014a7d0();
  appStrcpy((ushort *)(*(int *)(iVar2 + 0x1d4) + 0x438),puVar3);
  puVar3 = L2FName::operator*((L2FName *)(piVar1 + 0xc));
  iVar2 = FUN_1014a7d0();
  appStrcpy((ushort *)(*(int *)(iVar2 + 0x1d4) + 0x638),puVar3);
  puVar3 = L2FName::operator*((L2FName *)(piVar1 + 0xd));
  iVar2 = FUN_1014a7d0();
  appStrcpy((ushort *)(*(int *)(iVar2 + 0x1d4) + 0x838),puVar3);
  puVar3 = L2FName::operator*((L2FName *)(piVar1 + 0xe));
  iVar2 = FUN_1014a7d0();
  appStrcpy((ushort *)(*(int *)(iVar2 + 0x1d4) + 0xa38),puVar3);
  return 1;
}


// ==== 101922e0 FUN_101922e0 depth=0 from=raiz callees=FUN_1004f760@1004f760 ENGINE.DLL::L2FName::operator*@EXTERNAL:00000093 CORE.DLL::FString::operator*@EXTERNAL:0000019f FUN_1004f610@1004f610
// strings: 

void __thiscall FUN_101922e0(int param_1,int param_2)

{
  int iVar1;
  ushort *puVar2;
  int iVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10215bd0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  iVar3 = 0;
  local_8 = 0;
  while (iVar3 < *(int *)(param_1 + 0x2ec)) {
    iVar1 = *(int *)(*(int *)(param_1 + 0x2e8) + iVar3 * 4);
    FUN_1004f760();
    iVar1 = *(int *)(iVar1 + 4);
    if (param_2 == 0) {
      puVar2 = FString::operator*((FString *)(iVar1 + 4));
      FUN_1004f610(puVar2,0);
      iVar3 = iVar3 + 1;
    }
    else {
      puVar2 = L2FName::operator*((L2FName *)(iVar1 + 0x24));
      FUN_1004f610(puVar2,0);
      iVar3 = iVar3 + 1;
    }
  }
  ExceptionList = local_10;
  return;
}


// ==== 101923c0 FUN_101923c0 depth=0 from=raiz callees=FUN_10009b10@10009b10 CORE.DLL::FName::FName@EXTERNAL:0000012f
// strings: 

undefined4 __thiscall FUN_101923c0(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  ushort *puVar3;
  FName aFStack_40 [4];
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  uint uStack_2c;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10215bf0;
  local_10 = ExceptionList;
  uStack_2c = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_8 = 0;
  if (*(int *)(*(int *)(param_1 + 0x1d0) + 0x2e4) < param_2) {
    return 1;
  }
  uStack_30 = 0x10192432;
  ExceptionList = &local_10;
  puVar3 = (ushort *)FUN_10009b10();
  piVar1 = *(int **)(*(int *)(**(int **)(*(int *)(*(int *)(DAT_103663bc + 0x50) + 0x54) + 0x38) +
                             0x3c) + 0x3bc);
  piVar1[0x5cd] = piVar1[0x5cd] & 0xfffffffe;
  piVar1[0x19e] = piVar1[0x19e] | 0x10;
  iVar2 = *piVar1;
  uStack_30 = 0;
  uStack_34 = 1;
  local_38 = 0;
  local_3c = *(undefined4 *)(param_1 + 0x230);
  FName::FName(aFStack_40,puVar3,1);
  (**(code **)(iVar2 + 0x328))(0);
  ExceptionList = local_10;
  return 1;
}


// ==== 101924e0 FUN_101924e0 depth=0 from=raiz callees=FUN_10002f40@10002f40 CORE.DLL::FString::operator*@EXTERNAL:0000019f FUN_10021df0@10021df0 FUN_10020bb0@10020bb0 FUN_100212e0@100212e0 FUN_10021970@10021970 FUN_100217a0@100217a0 FUN_101c19e0@101c19e0
// strings: 10290af8=Mesh | 10290af8=Mesh | 10290aec=Tex1 | 10290aec=Tex1 | 10290ae0=Tex2 | 10290ae0=Tex2 | 10290ad4=Tex3 | 10290ad4=Tex3 | 10290ac8=Tex4 | 10290ac8=Tex4 | 10290ab0=CollisionH | 10290aa0=ColliH | 10290a88=CollisionR | 10290a78=ColliR | 10290a6c=Speed | 10290a58=AnimRate | 10290aa0=ColliH | 10290a78=ColliR | 10290a4c=Scale | 

undefined4 __thiscall FUN_101924e0(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  ushort *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  undefined4 uVar9;
  uint uStack_34;
  int local_24;
  int local_20;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10215c10;
  local_10 = ExceptionList;
  uStack_34 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_34;
  ExceptionList = &local_10;
  local_8 = 0;
  uVar1 = FUN_101c19e0();
  uVar2 = FUN_101c19e0(uVar1);
  FUN_10021df0(*(undefined4 *)(param_1 + 0x80),*(undefined4 *)(param_1 + 0x84),uVar2,uVar1);
  FUN_10002f40(*(undefined4 *)(param_1 + 0x80),*(undefined4 *)(param_1 + 0x84));
  iVar8 = *(int *)(param_1 + 0x228);
  if (iVar8 != 0) {
    uVar9 = 0xff;
    uVar7 = 0x14;
    uVar6 = 0xf0;
    uVar5 = 0;
    uVar4 = 0;
    uVar2 = 0x14;
    uVar1 = FUN_101c19e0(0x14,0,0,0xf0,0x14,iVar8,0xff);
    FUN_10021970(0,0,uVar1,uVar2,uVar4,uVar5,uVar6,uVar7,iVar8,uVar9);
  }
  iVar8 = *(int *)(param_1 + 0x22c);
  if (iVar8 != 0) {
    uVar9 = 0xff;
    uVar7 = 0x9b;
    uVar6 = 0xf2;
    uVar5 = 0;
    uVar4 = 0;
    uVar1 = FUN_101c19e0(0,0,0xf2,0x9b,iVar8,0xff);
    uVar2 = FUN_101c19e0(uVar1);
    FUN_10021970(0,0x14,uVar2,uVar1,uVar4,uVar5,uVar6,uVar7,iVar8,uVar9);
  }
  FUN_100217a0(10,0x12d,0xffffff00,param_1 + 0x238,0,0,0,0,0,0,0,0,0,0,0,0xffffffff);
  FUN_100217a0(10,0x13d,0xffffff00,param_1 + 0x438,0,0,0,0,0,0,0,0,0,0,0,0xffffffff);
  FUN_100217a0(10,0x14d,0xffffff00,param_1 + 0x638,0,0,0,0,0,0,0,0,0,0,0,0xffffffff);
  FUN_100217a0(10,0x15d,0xffffff00,param_1 + 0x838,0,0,0,0,0,0,0,0,0,0,0,0xffffffff);
  FUN_100217a0(10,0x16d,0xffffff00,param_1 + 0xa38,0,0,0,0,0,0,0,0,0,0,0,0xffffffff);
  FUN_10020bb0(&local_24,L"Mesh",0,0,0,0,0,0);
  FUN_100217a0((0x40 - local_24) / 2 + 5,(0x10 - local_20) / 2 + 0x1a2,0xffdcdcdc,L"Mesh",0,0,0,0,0,
               0,0,0,0,0,0,0xffffffff);
  FUN_10020bb0(&local_24,L"Tex1",0,0,0,0,0,0);
  FUN_100217a0((0x40 - local_24) / 2 + 5,(0x10 - local_20) / 2 + 0x1b6,0xffdcdcdc,L"Tex1",0,0,0,0,0,
               0,0,0,0,0,0,0xffffffff);
  FUN_10020bb0(&local_24,L"Tex2",0,0,0,0,0,0);
  FUN_100217a0((0x40 - local_24) / 2 + 5,(0x10 - local_20) / 2 + 0x1ca,0xffdcdcdc,L"Tex2",0,0,0,0,0,
               0,0,0,0,0,0,0xffffffff);
  FUN_10020bb0(&local_24,L"Tex3",0,0,0,0,0,0);
  FUN_100217a0((0x40 - local_24) / 2 + 5,(0x10 - local_20) / 2 + 0x1de,0xffdcdcdc,L"Tex3",0,0,0,0,0,
               0,0,0,0,0,0,0xffffffff);
  FUN_10020bb0(&local_24,L"Tex4",0,0,0,0,0,0);
  FUN_100217a0((0x40 - local_24) / 2 + 5,(0x10 - local_20) / 2 + 0x1f2,0xffdcdcdc,L"Tex4",0,0,0,0,0,
               0,0,0,0,0,0,0xffffffff);
  uVar7 = 0;
  uVar6 = 0;
  uVar5 = 0;
  uVar4 = 0;
  uVar2 = 0;
  uVar1 = 0;
  puVar3 = FString::operator*((FString *)(GL2GameData_exref + 0x6bd1c));
  FUN_10020bb0(&local_24,puVar3,uVar1,uVar2,uVar4,uVar5,uVar6,uVar7);
  FUN_10020bb0(&local_24,L"CollisionH",0,0,0,0,0,0);
  FUN_100217a0((0x40 - local_24) / 2 + 5,(0x10 - local_20) / 2 + 0x206,0xffdcdcdc,L"ColliH",0,0,0,0,
               0,0,0,0,0,0,0,0xffffffff);
  FUN_10020bb0(&local_24,L"CollisionR",0,0,0,0,0,0);
  FUN_100217a0((0x40 - local_24) / 2 + 100,(0x10 - local_20) / 2 + 0x206,0xffdcdcdc,L"ColliR",0,0,0,
               0,0,0,0,0,0,0,0,0xffffffff);
  FUN_100217a0(10,(0x10 - local_20) / 2 + 0x226,0xffdcdcdc,L"Speed",0,0,0,0,0,0,0,0,0,0,0,0xffffffff
              );
  FUN_100217a0(0x96,(0x10 - local_20) / 2 + 0x226,0xffdcdcdc,L"AnimRate",0,0,0,0,0,0,0,0,0,0,0,
               0xffffffff);
  FUN_100217a0(10,(0x10 - local_20) / 2 + 0x23a,0xffdcdcdc,L"ColliH",0,0,0,0,0,0,0,0,0,0,0,
               0xffffffff);
  FUN_100217a0(0x96,(0x10 - local_20) / 2 + 0x23a,0xffdcdcdc,L"ColliR",0,0,0,0,0,0,0,0,0,0,0,
               0xffffffff);
  FUN_100217a0(10,(0x10 - local_20) / 2 + 0x24e,0xffdcdcdc,L"Scale",0,0,0,0,0,0,0,0,0,0,0,0xffffffff
              );
  *(undefined4 *)(param_2 + 0x38) = 0;
  *(undefined4 *)(param_2 + 0x3c) = 0;
  FUN_100212e0();
  ExceptionList = local_10;
  return 1;
}


// ==== 10192a90 FUN_10192a90 depth=0 from=raiz callees=CORE.DLL::appAtof@EXTERNAL:000001e2 FUN_1014a7d0@1014a7d0 __wtof@101c4496 FUN_101c19e0@101c19e0
// strings: 

undefined4 __fastcall FUN_10192a90(int param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  wchar_t *pwVar4;
  ushort *puVar5;
  float10 extraout_ST0;
  double dVar6;
  float fVar7;
  undefined4 uStack_48;
  undefined4 uStack_44;
  float fStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  float fStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  float fStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  bVar1 = false;
  iVar2 = FUN_1014a7d0();
  iVar2 = *(int *)(iVar2 + 0x3f0);
  iVar3 = (**(code **)(**(int **)(param_1 + 0x1fc) + 0x1f8))();
  if (iVar3 != 0) {
    pwVar4 = (wchar_t *)(**(code **)(**(int **)(param_1 + 0x1fc) + 0x1f8))();
    dVar6 = __wtof(pwVar4);
    fVar7 = (float)dVar6;
    if (0.0 < fVar7) {
      *(float *)(param_1 + 0x230) = fVar7;
      *(float *)(iVar2 + 0x6b4) = fVar7;
      if (*(int *)(iVar2 + 0x134) != 0) {
        iVar3 = *(int *)(*(int *)(iVar2 + 0x134) + 0x184);
        *(float *)(iVar3 + 0xc) = *(float *)(iVar3 + 0x20) * *(float *)(param_1 + 0x230);
      }
    }
  }
  iVar3 = (**(code **)(**(int **)(param_1 + 0x200) + 0x1f8))();
  if (iVar3 != 0) {
    pwVar4 = (wchar_t *)(**(code **)(**(int **)(param_1 + 0x200) + 0x1f8))();
    dVar6 = __wtof(pwVar4);
    if (0.0 < (float)dVar6) {
      iVar3 = FUN_101c19e0();
      *(int *)(param_1 + 0x234) = iVar3;
      if ((float10)*(float *)(param_1 + 0x230) <= extraout_ST0) {
        *(float *)(iVar2 + 0x6ec) = (float)iVar3;
      }
      else {
        *(float *)(iVar2 + 0x6ec) = (float)iVar3 / *(float *)(param_1 + 0x230);
      }
    }
  }
  iVar3 = (**(code **)(**(int **)(param_1 + 0x204) + 0x1f8))();
  if (iVar3 != 0) {
    puVar5 = (ushort *)(**(code **)(**(int **)(param_1 + 0x204) + 0x1f8))();
    fVar7 = appAtof(puVar5);
    if ((0.0 < fVar7) &&
       (iVar3 = FUN_1014a7d0(), fVar7 != *(float *)(*(int *)(iVar3 + 0x3f0) + 0x2f0))) {
      *(float *)(iVar2 + 0x2f0) = fVar7;
      bVar1 = true;
    }
  }
  iVar3 = (**(code **)(**(int **)(param_1 + 0x208) + 0x1f8))();
  if (iVar3 != 0) {
    puVar5 = (ushort *)(**(code **)(**(int **)(param_1 + 0x208) + 0x1f8))();
    fVar7 = appAtof(puVar5);
    if ((0.0 < fVar7) && (fVar7 != *(float *)(iVar2 + 0x2f4))) {
      *(float *)(iVar2 + 0x2f4) = fVar7;
      bVar1 = true;
    }
  }
  iVar3 = (**(code **)(**(int **)(param_1 + 0x20c) + 0x1f8))();
  if (iVar3 != 0) {
    puVar5 = (ushort *)(**(code **)(**(int **)(param_1 + 0x20c) + 0x1f8))();
    fVar7 = appAtof(puVar5);
    if ((0.0 < fVar7) && (fVar7 != *(float *)(iVar2 + 0x27c))) {
      *(float *)(iVar2 + 0x27c) = fVar7;
      goto LAB_10192cdb;
    }
  }
  if (!bVar1) {
    return 1;
  }
LAB_10192cdb:
  uStack_48 = *(undefined4 *)(iVar2 + 0x1bc);
  uStack_44 = *(undefined4 *)(iVar2 + 0x1c0);
  fStack_40 = *(float *)(iVar2 + 0x1c4);
  iVar3 = 0;
  uStack_3c = uStack_48;
  uStack_38 = uStack_44;
  fStack_34 = fStack_40;
  do {
    uStack_28 = 0;
    uStack_24 = 0;
    fStack_20 = 0.0;
    uStack_1c = 0;
    uStack_30 = 0;
    uStack_18 = 0;
    uStack_2c = 0;
    uStack_14 = 0;
    uStack_10 = 0;
    uStack_4 = 0;
    uStack_c = 0x3f800000;
    uStack_8 = 0xffffffff;
    fStack_40 = *(float *)(iVar2 + 0x2f4) + fStack_40;
    fStack_34 = fStack_34 - *(float *)(iVar2 + 0x2f4);
    (**(code **)(**(int **)(*(int *)(DAT_103663bc + 0x50) + 0x19c) + 0xe4))
              (&uStack_30,iVar2,&uStack_3c,&uStack_48,0x86,*(undefined4 *)(iVar2 + 0x2f0),
               *(undefined4 *)(iVar2 + 0x2f0),*(undefined4 *)(iVar2 + 0x2f4));
    if (fStack_20 != 0.0) {
      (**(code **)(**(int **)(*(int *)(DAT_103663bc + 0x50) + 0x19c) + 0xa8))
                (iVar2,uStack_28,uStack_24,fStack_20,1,0,0);
      return 1;
    }
    iVar3 = iVar3 + 1;
  } while (iVar3 < 0x1e);
  return 1;
}


// ==== 10192e30 FUN_10192e30 depth=0 from=raiz callees=FUN_101922e0@101922e0
// strings: 

undefined4 __fastcall FUN_10192e30(int param_1)

{
  FUN_101922e0(*(undefined4 *)(*(int *)(param_1 + 0x214) + 0x2fc));
  return 1;
}


// ==== 10192e50 FUN_10192e50 depth=0 from=raiz callees=FUN_10032ee0@10032ee0 CORE.DLL::FName::FName@EXTERNAL:0000019c ENGINE.DLL::APawn::SpawnEnterEvent@EXTERNAL:0000000f CORE.DLL::UObject::StaticLoadClass@EXTERNAL:000001ca ENGINE.DLL::User::SetPawnResource@EXTERNAL:0000001b CORE.DLL::FRotator::FRotator@EXTERNAL:000001df CORE.DLL::FName::operator*@EXTERNAL:0000013b ENGINE.DLL::User::User@EXTERNAL:00000041 ENGINE.DLL::AController::StaticClass@EXTERNAL:00000014 ENGINE.DLL::AActor::GetLevel@EXTERNAL:00000090 __security_check_cookie@101c16c2 ENGINE.DLL::APawn::StaticClass@EXTERNAL:0000004f
// strings: 1028f0b4=Engine.PlayerController | 

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_10192e50(int param_1)

{
  int iVar1;
  ULevel *pUVar2;
  UClass *pUVar3;
  int *piVar4;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  float fStack_3cc;
  undefined4 local_3c8;
  undefined4 local_3c4;
  float local_3c0;
  undefined4 *local_3bc;
  int local_3b8;
  UObject *pUVar8;
  wchar_t *pwVar9;
  ushort *puVar10;
  ushort *puVar11;
  ulong uVar12;
  UPackageMap *pUVar13;
  UClass *local_38c;
  undefined4 local_388;
  undefined4 local_384;
  float local_380;
  undefined4 uStack_37c;
  undefined4 uStack_378;
  undefined4 uStack_374;
  undefined4 uStack_370;
  undefined4 uStack_36c;
  undefined4 uStack_368;
  float fStack_364;
  undefined4 uStack_360;
  undefined4 uStack_35c;
  float fStack_358;
  undefined4 uStack_354;
  undefined4 uStack_350;
  undefined4 uStack_34c;
  undefined4 uStack_348;
  float fStack_344;
  undefined4 uStack_340;
  undefined4 uStack_33c;
  undefined4 uStack_338;
  undefined4 uStack_334;
  float fStack_330;
  undefined4 uStack_32c;
  undefined4 uStack_328;
  FRotator local_324 [12];
  User aUStack_318 [8];
  undefined4 uStack_310;
  undefined4 uStack_304;
  undefined4 uStack_300;
  APawn *pAStack_114;
  uint local_4;
  
  local_4 = DAT_103554c4 ^ (uint)&local_38c;
  piVar4 = *(int **)(*(int *)(*(int *)(DAT_103663bc + 0x50) + 0x54) + 0x38);
  iVar5 = *(int *)(*piVar4 + 0x3c);
  if ((((iVar5 != 0) && (*(int *)(iVar5 + 0x3bc) != 0)) &&
      (pUVar2 = AActor::GetLevel(*(AActor **)(*piVar4 + 0x3c)), pUVar2 != (ULevel *)0x0)) &&
     (local_38c = *(UClass **)(*(int *)(param_1 + 0x1cc) + 0x310), -1 < (int)local_38c)) {
    piVar4 = *(int **)(*(int *)(*(int *)(DAT_103663bc + 0x50) + 0x54) + 0x38);
    iVar5 = *(int *)(*(int *)(*piVar4 + 0x3c) + 0x3bc);
    local_388 = *(undefined4 *)(iVar5 + 0x1bc);
    local_384 = *(undefined4 *)(iVar5 + 0x1c0);
    local_380 = *(float *)(iVar5 + 0x1c4);
    pUVar2 = AActor::GetLevel(*(AActor **)(*piVar4 + 0x3c));
    pUVar13 = (UPackageMap *)0x0;
    uVar12 = 1;
    puVar10 = (ushort *)0x0;
    pwVar9 = L"Engine.PlayerController";
    pUVar8 = (UObject *)0x0;
    pUVar3 = AController::StaticClass();
    local_3b8 = 0x10192f1b;
    pUVar3 = UObject::StaticLoadClass(pUVar3,pUVar8,(ushort *)pwVar9,puVar10,uVar12,pUVar13);
    iVar5 = *(int *)pUVar2;
    piVar4 = (int *)FRotator::FRotator(local_324,0,0,0);
    local_3bc = (undefined4 *)*piVar4;
    local_3b8 = piVar4[1];
    local_3c8 = local_388;
    fStack_3cc = local_380;
    local_3c4 = local_384;
    local_3c0 = local_380;
    FName::FName((FName *)&fStack_3cc,0);
    iVar5 = (**(code **)(iVar5 + 0xc0))(pUVar3);
    FName::FName((FName *)&uStack_370,0);
    puVar6 = (undefined4 *)FUN_10032ee0();
    if (puVar6 != (undefined4 *)0x0) {
      uStack_370 = puVar6[8];
    }
    pUVar13 = (UPackageMap *)0x0;
    uVar12 = 0;
    puVar11 = (ushort *)0x0;
    puVar10 = FName::operator*((FName *)&uStack_370);
    pUVar8 = (UObject *)0x0;
    pUVar3 = APawn::StaticClass();
    local_3b8 = 0x10192fd0;
    local_38c = UObject::StaticLoadClass(pUVar3,pUVar8,puVar10,puVar11,uVar12,pUVar13);
    if (local_38c != (UClass *)0x0) {
      iVar7 = *(int *)(*(int *)(**(int **)(*(int *)(*(int *)(DAT_103663bc + 0x50) + 0x54) + 0x38) +
                               0x3c) + 0x3bc);
      local_3bc = *(undefined4 **)(iVar7 + 0x1c8);
      iVar1 = *(int *)pUVar2;
      local_3b8 = *(undefined4 *)(iVar7 + 0x1cc);
      local_3c8 = local_388;
      fStack_3cc = local_380;
      local_3c4 = local_384;
      local_3c0 = local_380;
      FName::FName((FName *)&fStack_3cc,0);
      iVar7 = (**(code **)(iVar1 + 0xc0))(local_38c);
      *(int *)(iVar5 + 0x3bc) = iVar7;
      *(int *)(iVar7 + 0x14d8) = iVar5;
      *(undefined1 *)(iVar5 + 0xc2) = 4;
      *(undefined1 *)(*(int *)(iVar5 + 0x3bc) + 0xc2) = 4;
      (**(code **)(**(int **)(iVar5 + 0x3bc) + 0x1c8))(1,0,0,0,0x3f800000);
      *(undefined4 *)(*(int *)(iVar5 + 0x3bc) + 0x69c) = *puVar6;
      User::User(aUStack_318);
      uStack_310 = 1;
      uStack_304 = *puVar6;
      uStack_300 = *puVar6;
      pAStack_114 = *(APawn **)(iVar5 + 0x3bc);
      User::SetPawnResource(aUStack_318);
      fStack_364 = local_380 + (float)_DAT_1028a190;
      uStack_36c = local_388;
      uStack_368 = local_384;
      uStack_360 = local_388;
      uStack_35c = local_384;
      fStack_358 = local_380;
      iVar7 = 0;
      do {
        uStack_34c = 0;
        uStack_354 = 0;
        uStack_348 = 0;
        uStack_350 = 0;
        fStack_344 = 0.0;
        uStack_334 = 0;
        uStack_340 = 0;
        uStack_328 = 0;
        uStack_33c = 0;
        uStack_338 = 0;
        uStack_32c = 0xffffffff;
        fStack_330 = 1.0;
        fStack_364 = fStack_364 + (float)_DAT_1023cb08;
        fStack_358 = fStack_358 - (float)_DAT_1023cb08;
        local_3b8 = *(int *)(iVar5 + 0x3bc);
        uStack_37c = *(undefined4 *)(local_3b8 + 0x2f0);
        uStack_378 = *(undefined4 *)(local_3b8 + 0x2f0);
        uStack_374 = *(undefined4 *)(local_3b8 + 0x2f4);
        local_3bc = &uStack_354;
        local_3c0 = 3.0212418e-29;
        (**(code **)(*(int *)pUVar2 + 0xe4))();
        if (fStack_344 != 0.0) {
          local_38c = (UClass *)(fStack_330 * (float)_DAT_10234f70);
          if ((float)local_38c < (float)_DAT_10290908) {
            fStack_344 = ((float)_DAT_10290900 - (float)local_38c) + fStack_344;
          }
          local_3b8 = *(int *)(iVar5 + 0x3bc);
          local_3bc = (undefined4 *)0x10193280;
          (**(code **)(*(int *)pUVar2 + 0xa8))();
          break;
        }
        iVar7 = iVar7 + 1;
      } while (iVar7 < 0x1e);
      APawn::SpawnEnterEvent(pAStack_114);
    }
  }
  __security_check_cookie(local_4 ^ (uint)&local_38c);
  return;
}


// ==== 101932b0 FUN_101932b0 depth=0 from=raiz callees=CORE.DLL::FName::FName@EXTERNAL:0000019c FUN_10016ea0@10016ea0 CORE.DLL::UObject::StaticLoadObject@EXTERNAL:000001d8 CORE.DLL::appAtof@EXTERNAL:000001e2 CORE.DLL::FName::FName@EXTERNAL:0000012f CORE.DLL::appFailAssert@EXTERNAL:0000018a CORE.DLL::FRotator::FRotator@EXTERNAL:000001df FUN_1014a7d0@1014a7d0 ENGINE.DLL::AController::StaticClass@EXTERNAL:00000014 FUN_1018ccd0@1018ccd0 CORE.DLL::appSprintf@EXTERNAL:000001ba FUN_1000b3d0@1000b3d0 FUN_10191540@10191540 ENGINE.DLL::UMesh::StaticClass@EXTERNAL:0000000e CORE.DLL::UObject::StaticLoadClass@EXTERNAL:000001ca CORE.DLL::FName::operator*@EXTERNAL:0000013b ENGINE.DLL::AActor::GetLevel@EXTERNAL:00000090 __security_check_cookie@101c16c2 ENGINE.DLL::APawn::StaticClass@EXTERNAL:0000004f FUN_101c19e0@101c19e0
// strings: 1028f0b4=Engine.PlayerController | 10290930=.\Src\NNpcViewerWnd.cpp | 1028f090=pController | 10290b0c=LineageWarrior.LineagePawn | 

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_101932b0(int param_1)

{
  int *piVar1;
  code *pcVar2;
  int iVar3;
  ushort *puVar4;
  UClass *pUVar5;
  ULevel *pUVar6;
  int iVar7;
  int *piVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  int iVar11;
  int unaff_EBP;
  float fVar12;
  EFindName EVar13;
  int *piStack_1ac;
  UObject *pUVar14;
  wchar_t *pwVar15;
  undefined4 uVar16;
  ushort *puVar17;
  ulong uVar18;
  float fVar19;
  UPackageMap *pUVar20;
  float fStack_178;
  undefined4 uStack_174;
  undefined4 *puStack_170;
  float fStack_16c;
  int *piStack_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  float fStack_158;
  float fStack_144;
  ushort auStack_12c [14];
  FRotator aFStack_110 [268];
  uint local_4;
  
  local_4 = DAT_103554c4 ^ (uint)&fStack_178;
  iVar3 = (**(code **)(**(int **)(param_1 + 0x1d4) + 0x1f8))();
  if (iVar3 != 0) {
    pUVar20 = (UPackageMap *)0x0;
    uVar18 = 0;
    puVar17 = (ushort *)0x0;
    puVar4 = (ushort *)(**(code **)(**(int **)(param_1 + 0x1d4) + 0x1f8))();
    pUVar14 = (UObject *)0x0;
    pUVar5 = UMesh::StaticClass();
    pUVar14 = UObject::StaticLoadObject(pUVar5,pUVar14,puVar4,puVar17,uVar18,pUVar20);
    if (pUVar14 != (UObject *)0x0) {
      piVar1 = *(int **)(*(int *)(*(int *)(DAT_103663bc + 0x50) + 0x54) + 0x38);
      iVar3 = *(int *)(*piVar1 + 0x3c);
      if (((iVar3 != 0) && (*(int *)(iVar3 + 0x3bc) != 0)) &&
         (pUVar6 = AActor::GetLevel(*(AActor **)(*piVar1 + 0x3c)), pUVar6 != (ULevel *)0x0)) {
        piVar1 = *(int **)(*(int *)(DAT_103663bc + 0x50) + 0x19c);
        fStack_178 = *(float *)(**(int **)(*(int *)(*(int *)(DAT_103663bc + 0x50) + 0x54) + 0x38) +
                               0x3c);
        pUVar20 = (UPackageMap *)0x0;
        uVar18 = 1;
        puVar4 = (ushort *)0x0;
        pwVar15 = L"Engine.PlayerController";
        pUVar14 = (UObject *)0x0;
        pUVar5 = AController::StaticClass();
        pUVar5 = UObject::StaticLoadClass(pUVar5,pUVar14,(ushort *)pwVar15,puVar4,uVar18,pUVar20);
        iVar3 = *piVar1;
        puStack_170 = (undefined4 *)0x0;
        fStack_16c = 0.0;
        piStack_168 = (int *)0x0;
        FRotator::FRotator((FRotator *)&uStack_164,0,0,0);
        piStack_1ac = piStack_168;
        FName::FName((FName *)&stack0xfffffe48,0);
        iVar3 = (**(code **)(iVar3 + 0xc0))(pUVar5);
        if (iVar3 == 0) {
          appFailAssert("pController",".\\Src\\NNpcViewerWnd.cpp",0x4bc);
        }
        iVar7 = FUN_1014a7d0();
        *(undefined4 *)(iVar7 + 0x200) = 0;
        FUN_1014a7d0();
        pUVar20 = (UPackageMap *)0x0;
        uVar18 = 0;
        puVar4 = (ushort *)0x0;
        pwVar15 = L"LineageWarrior.LineagePawn";
        pUVar14 = (UObject *)0x0;
        pUVar5 = APawn::StaticClass();
        pUVar5 = UObject::StaticLoadClass(pUVar5,pUVar14,(ushort *)pwVar15,puVar4,uVar18,pUVar20);
        *(UClass **)(iVar3 + 0x4f8) = pUVar5;
        if (pUVar5 != (UClass *)0x0) {
          iVar7 = *(int *)(*(int *)(**(int **)(*(int *)(*(int *)(DAT_103663bc + 0x50) + 0x54) + 0x38
                                              ) + 0x3c) + 0x3bc);
          puStack_170 = *(undefined4 **)(iVar7 + 0x1bc);
          fStack_16c = *(float *)(iVar7 + 0x1c0);
          iVar11 = *piVar1;
          piStack_168 = *(int **)(iVar7 + 0x1c4);
          FRotator::FRotator(aFStack_110,0,0,0);
          piStack_1ac = piStack_168;
          FName::FName((FName *)&stack0xfffffe48,0);
          piVar8 = (int *)(**(code **)(iVar11 + 0xc0))(*(undefined4 *)(iVar3 + 0x4f8));
          if (piVar8 != (int *)0x0) {
            fVar19 = *(float *)(*(int *)(**(int **)(*(int *)(*(int *)(DAT_103663bc + 0x50) + 0x54) +
                                                   0x38) + 0x3c) + 0x3bc);
            (**(code **)(*piVar1 + 0xac))();
            fStack_16c = 0.0;
            piStack_168 = (int *)0x0;
            uStack_164 = 0x3f800000;
            *(int **)(*(int *)(**(int **)(*(int *)(*(int *)(DAT_103663bc + 0x50) + 0x54) + 0x38) +
                              0x3c) + 0x3bc) = piVar8;
            pcVar2 = *(code **)(*piVar8 + 0x1c8);
            piVar8[0x536] = unaff_EBP;
            uVar16 = 0;
            *(undefined1 *)((int)piVar8 + 0xc2) = 4;
            (*pcVar2)();
            piVar8[0x1a7] = 0;
            iVar3 = FUN_1014a7d0();
            *(int **)(iVar3 + 0x3f0) = piVar8;
            iVar3 = (**(code **)(**(int **)(param_1 + 0x1e8) + 0x1f8))();
            fVar12 = _DAT_10290b08;
            if (iVar3 != 0) {
              puVar4 = (ushort *)(**(code **)(**(int **)(param_1 + 0x1e8) + 0x1f8))();
              piStack_1ac = (int *)0x101935e3;
              fVar12 = appAtof(puVar4);
            }
            piVar8[0xbd] = (int)fVar12;
            iVar3 = (**(code **)(**(int **)(param_1 + 0x1ec) + 0x1f8))();
            fVar12 = _DAT_10290b04;
            if (iVar3 != 0) {
              puVar4 = (ushort *)(**(code **)(**(int **)(param_1 + 0x1ec) + 0x1f8))();
              piStack_1ac = (int *)0x1019361f;
              fVar12 = appAtof(puVar4);
            }
            piVar8[0xbc] = (int)fVar12;
            piStack_1ac = *(int **)(param_1 + 0x1d4);
            puVar9 = (undefined4 *)(*piVar8 + 0xd0);
            EVar13 = 1;
            puVar4 = (ushort *)(**(code **)(*piStack_1ac + 0x1f8))();
            FName::FName((FName *)&piStack_1ac,puVar4,EVar13);
            (*(code *)*puVar9)();
            iVar3 = (**(code **)(**(int **)(param_1 + 0x1d8) + 0x1f8))();
            if (iVar3 != 0) {
              puVar10 = (undefined4 *)(*piVar8 + 0xd4);
              EVar13 = 1;
              puVar4 = (ushort *)(**(code **)(**(int **)(param_1 + 0x1d8) + 0x1f8))();
              FName::FName((FName *)&stack0xfffffe48,puVar4,EVar13);
              (*(code *)*puVar10)(9);
            }
            iVar3 = (**(code **)(**(int **)(param_1 + 0x1dc) + 0x1f8))();
            if (iVar3 != 0) {
              puVar10 = (undefined4 *)(*piVar8 + 0xd4);
              EVar13 = 1;
              puVar4 = (ushort *)(**(code **)(**(int **)(param_1 + 0x1dc) + 0x1f8))();
              FName::FName((FName *)&stack0xfffffe48,puVar4,EVar13);
              (*(code *)*puVar10)(9);
            }
            iVar3 = (**(code **)(**(int **)(param_1 + 0x1e0) + 0x1f8))();
            if (iVar3 != 0) {
              puVar10 = (undefined4 *)(*piVar8 + 0xd4);
              EVar13 = 1;
              puVar4 = (ushort *)(**(code **)(**(int **)(param_1 + 0x1e0) + 0x1f8))();
              FName::FName((FName *)&stack0xfffffe48,puVar4,EVar13);
              (*(code *)*puVar10)(9);
            }
            iVar3 = (**(code **)(**(int **)(param_1 + 0x1e4) + 0x1f8))();
            if (iVar3 != 0) {
              puVar10 = (undefined4 *)(*piVar8 + 0xd4);
              EVar13 = 1;
              puVar4 = (ushort *)(**(code **)(**(int **)(param_1 + 0x1e4) + 0x1f8))();
              FName::FName((FName *)&stack0xfffffe48,puVar4,EVar13);
              (*(code *)*puVar10)(9);
            }
            fStack_178 = fVar19 + (float)_DAT_1028a190;
            iVar3 = 0;
            uStack_174 = uVar16;
            puStack_170 = puVar9;
            fStack_16c = fVar19;
            do {
              FUN_10191540();
              fStack_178 = fStack_178 + (float)_DAT_1023cb08;
              fStack_16c = fStack_16c - (float)_DAT_1023cb08;
              (**(code **)(*piVar1 + 0xe4))
                        (&piStack_168,piVar8,&uStack_174,&stack0xfffffe80,0x86,piVar8[0xbc]);
              if (fStack_158 != 0.0) {
                if (fStack_144 * (float)_DAT_10234f70 < (float)_DAT_10290908) {
                  fStack_158 = ((float)_DAT_10290900 - fStack_144 * (float)_DAT_10234f70) +
                               fStack_158;
                }
                (**(code **)(*piVar1 + 0xa8))(piVar8,uStack_160,uStack_15c,fStack_158,0);
                break;
              }
              iVar3 = iVar3 + 1;
            } while (iVar3 < 0x1e);
            uVar16 = FUN_101c19e0();
            iVar3 = FUN_1014a7d0();
            *(undefined4 *)(*(int *)(iVar3 + 0x1d4) + 0x234) = uVar16;
            FUN_101c19e0();
            appSprintf(auStack_12c,(ushort *)&DAT_10233718);
            iVar3 = FUN_1014a7d0();
            (**(code **)(**(int **)(*(int *)(iVar3 + 0x1d4) + 0x200) + 0x174))();
            FUN_1014a7d0();
            FUN_10016ea0();
            iVar3 = FUN_1014a7d0();
            *(undefined4 *)(*(int *)(iVar3 + 0x1d4) + 0x230) = 0x3f800000;
            iVar3 = FUN_1014a7d0();
            (**(code **)(**(int **)(*(int *)(iVar3 + 0x1d4) + 0x1fc) + 0x174))();
            FUN_1014a7d0();
            FUN_10016ea0();
            iVar3 = *(int *)(*(int *)(**(int **)(*(int *)(*(int *)(DAT_103663bc + 0x50) + 0x54) +
                                                0x38) + 0x3c) + 0x3bc);
            if ((iVar3 != 0) && (*(int *)(iVar3 + 0x104) != 0)) {
              piVar1 = *(int **)(iVar3 + 0x104);
              (**(code **)(*piVar1 + 0x98))();
              FUN_1018ccd0();
              iVar3 = piVar1[0x92];
              if (iVar3 != 0) {
                FName::FName((FName *)&fStack_178,0);
                iVar7 = *(int *)(iVar3 + 0x70);
                iVar11 = FUN_1014a7d0();
                (**(code **)(**(int **)(*(int *)(iVar11 + 0x1d4) + 0x1d0) + 0x174))();
                if (0 < iVar7) {
                  iVar11 = 0;
                  do {
                    fStack_178 = *(float *)(iVar11 + *(int *)(iVar3 + 0x6c));
                    FName::operator*((FName *)&fStack_178);
                    FUN_1014a7d0();
                    FUN_1000b3d0();
                    iVar11 = iVar11 + 0x74;
                    iVar7 = iVar7 + -1;
                  } while (iVar7 != 0);
                }
              }
            }
          }
        }
      }
    }
  }
  __security_check_cookie(local_4 ^ (uint)&fStack_178);
  return;
}


// ==== 10193ac0 FUN_10193ac0 depth=0 from=raiz callees=FUN_100570d0@100570d0 FUN_101923c0@101923c0
// strings: 

bool __thiscall FUN_10193ac0(int *param_1,int param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = FUN_100570d0(param_2,param_3,param_4);
  if (iVar1 != 0) {
    return true;
  }
  if (param_2 == 0x501) {
    if (param_3 == 0x1f05) {
      iVar1 = FUN_101923c0(param_4);
      return iVar1 != 0;
    }
    if (param_3 == 0xf5) {
      iVar1 = (**(code **)(*param_1 + 0x1f8))();
      return iVar1 != 0;
    }
    if (param_3 == 0xf6) {
      iVar1 = (**(code **)(*param_1 + 0x1fc))();
      return iVar1 != 0;
    }
    if (param_3 == 0xf9) {
      iVar1 = (**(code **)(*param_1 + 0x200))();
      return iVar1 != 0;
    }
    if (param_3 == 0xfb) {
      iVar1 = (**(code **)(*param_1 + 0x204))();
      return iVar1 != 0;
    }
    if (param_3 == 0xfa) {
      iVar1 = (**(code **)(*param_1 + 0x208))();
      return iVar1 != 0;
    }
    if (param_3 == 0x1100) {
      iVar1 = (**(code **)(*param_1 + 500))();
      return iVar1 != 0;
    }
    if (param_3 == 0xf4) {
      iVar1 = (**(code **)(*param_1 + 0x20c))(param_4);
      return iVar1 != 0;
    }
    if ((((param_3 == 0xf8) || (param_3 == 0xf7)) || (param_3 == 0xfe)) ||
       ((param_3 == 0xff || (param_3 == 0x1101)))) {
      iVar1 = (**(code **)(*param_1 + 0x210))(param_4);
      return iVar1 != 0;
    }
  }
  return false;
}


// ==== 10193c50 FUN_10193c50 depth=0 from=raiz callees=CORE.DLL::FString::operator_int@EXTERNAL:000001a1 CORE.DLL::FName::FName@EXTERNAL:0000019c CORE.DLL::FName::operator==@EXTERNAL:000000cf CORE.DLL::appStristr@EXTERNAL:000000ce FUN_100d10a0@100d10a0 ENGINE.DLL::L2FName::operator*@EXTERNAL:00000093 ENGINE.DLL::FL2GameData::GetNpcName@EXTERNAL:00000075 FUN_10191510@10191510
// strings: 10290bc4=lineagenpcs | 10290ba8=lineagedecos | 10290b88=lineagemonsters | 

void __fastcall FUN_10193c50(int param_1)

{
  int *piVar1;
  int iVar2;
  ushort *puVar3;
  undefined4 uVar4;
  wchar_t *pwVar5;
  int iVar6;
  uint uStack_48;
  int local_30;
  FName local_20 [4];
  L2FName *local_1c;
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_10215c38;
  local_10 = ExceptionList;
  uStack_48 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_48;
  ExceptionList = &local_10;
  local_18 = 0;
  piVar1 = *(int **)(GL2GameData_exref + 0x1838);
  local_30 = 0;
  local_8._0_1_ = 1;
  local_8._1_3_ = 0;
  do {
    if (piVar1[1] <= local_30) {
      local_8 = (uint)local_8._1_3_ << 8;
      FUN_100d10a0();
      FUN_10191510(local_18,0x14);
      *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1d4) + 0x1cc) + 0x308) = 0;
      ExceptionList = local_10;
      return;
    }
    iVar6 = *(int *)(*piVar1 + 8 + local_30 * 0xc);
    if (iVar6 != 0) {
      iVar2 = FString::operator_int((FString *)(iVar6 + 4));
      if (iVar2 != 0) {
        FName::FName(local_20,0);
        local_1c = (L2FName *)(iVar6 + 0x24);
        iVar2 = FName::operator==((FName *)local_1c,local_20);
        if (iVar2 == 0) {
          if (*(int *)(*(int *)(*(int *)(param_1 + 0x1d4) + 0x220) + 0x2fc) != 0) {
            pwVar5 = L"lineagenpcs";
            puVar3 = L2FName::operator*(local_1c);
            puVar3 = appStristr(puVar3,(ushort *)pwVar5);
            if (puVar3 != (ushort *)0x0) goto LAB_10193d8d;
          }
          if (*(int *)(*(int *)(*(int *)(param_1 + 0x1d4) + 0x220) + 0x2fc) != 0) {
            pwVar5 = L"lineagedecos";
            puVar3 = L2FName::operator*(local_1c);
            puVar3 = appStristr(puVar3,(ushort *)pwVar5);
            if (puVar3 != (ushort *)0x0) goto LAB_10193d8d;
          }
          if (*(int *)(*(int *)(*(int *)(param_1 + 0x1d4) + 0x224) + 0x2fc) != 0) {
            pwVar5 = L"lineagemonsters";
            puVar3 = L2FName::operator*(local_1c);
            puVar3 = appStristr(puVar3,(ushort *)pwVar5);
            if (puVar3 != (ushort *)0x0) goto LAB_10193d8d;
          }
        }
        else {
LAB_10193d8d:
          local_18 = local_18 + 1;
          uVar4 = 0xffdcdcdc;
          if (*(int *)(*(int *)(*(int *)(param_1 + 0x1d4) + 0x214) + 0x2fc) == 0) {
            iVar2 = **(int **)(*(int *)(param_1 + 0x1d4) + 0x1cc);
            puVar3 = FL2GameData::GetNpcName
                               ((FL2GameData *)GL2GameData_exref,
                                *(int *)(*piVar1 + 4 + local_30 * 0xc));
          }
          else {
            iVar2 = **(int **)(*(int *)(param_1 + 0x1d4) + 0x1cc);
            puVar3 = L2FName::operator*(local_1c);
          }
          (**(code **)(iVar2 + 0x1fc))(puVar3,uVar4,iVar6);
        }
      }
    }
    local_30 = local_30 + 1;
  } while( true );
}


// ==== 101941a0 FUN_101941a0 depth=0 from=raiz callees=CORE.DLL::FString::operator_int@EXTERNAL:000001a1 CORE.DLL::FName::FName@EXTERNAL:0000019c CORE.DLL::FName::operator==@EXTERNAL:000000cf CORE.DLL::appStristr@EXTERNAL:000000ce ENGINE.DLL::L2FName::operator*@EXTERNAL:00000093 CORE.DLL::appAtoi@EXTERNAL:000001bc ENGINE.DLL::FL2GameData::GetNpcName@EXTERNAL:00000075 CORE.DLL::FName::operator!=@EXTERNAL:000000d0 FUN_10191510@10191510
// strings: 10290bc4=lineagenpcs | 10290ba8=lineagedecos | 10290b88=lineagemonsters | 

undefined4 __fastcall FUN_101941a0(int param_1)

{
  FName *this;
  int *piVar1;
  int iVar2;
  ushort *puVar3;
  int iVar4;
  ushort *puVar5;
  ushort *puVar6;
  undefined4 uVar7;
  wchar_t *pwVar8;
  int *piVar9;
  int iStack_30;
  FName aFStack_24 [4];
  FName aFStack_20 [4];
  int *piStack_1c;
  int *piStack_18;
  int iStack_14;
  undefined4 uStack_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_10215cc8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  puVar3 = (ushort *)
           (**(code **)(**(int **)(param_1 + 0x1f0) + 0x1f8))(DAT_103554c4 ^ (uint)&stack0xffffffc0)
  ;
  iStack_30 = 0;
  if (puVar3 != (ushort *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x1cc) + 0x174))();
    piVar1 = *(int **)(GL2GameData_exref + 0x1838);
    iStack_14 = 0;
    uStack_10 = 0;
    uStack_4 = 0;
    piStack_1c = piVar1;
    piStack_18 = piVar1;
    if (0 < piVar1[1]) {
      do {
        iVar2 = iStack_14 * 0xc;
        piVar9 = *(int **)(iVar2 + 8 + *piVar1);
        if ((piVar9 != (int *)0x0) &&
           (iVar4 = FString::operator_int((FString *)(piVar9 + 1)), iVar4 != 0)) {
          FName::FName(aFStack_24,0);
          this = (FName *)(piVar9 + 9);
          iVar4 = FName::operator==(this,aFStack_24);
          if (iVar4 == 0) {
            if (*(int *)(*(int *)(param_1 + 0x220) + 0x2fc) != 0) {
              pwVar8 = L"lineagenpcs";
              puVar5 = L2FName::operator*((L2FName *)this);
              puVar5 = appStristr(puVar5,(ushort *)pwVar8);
              if (puVar5 != (ushort *)0x0) goto LAB_101942fe;
            }
            if (*(int *)(*(int *)(param_1 + 0x220) + 0x2fc) != 0) {
              pwVar8 = L"lineagedecos";
              puVar5 = L2FName::operator*((L2FName *)this);
              puVar5 = appStristr(puVar5,(ushort *)pwVar8);
              if (puVar5 != (ushort *)0x0) goto LAB_101942fe;
            }
            if (*(int *)(*(int *)(param_1 + 0x224) + 0x2fc) != 0) {
              pwVar8 = L"lineagemonsters";
              puVar5 = L2FName::operator*((L2FName *)this);
              puVar5 = appStristr(puVar5,(ushort *)pwVar8);
              if (puVar5 != (ushort *)0x0) goto LAB_101942fe;
            }
          }
          else {
LAB_101942fe:
            iVar4 = appAtoi(puVar3);
            if (iVar4 == *piVar9) {
              iVar2 = **(int **)(param_1 + 0x1cc);
              iStack_30 = iStack_30 + 1;
              uVar7 = 0xffdcdcdc;
              puVar3 = FL2GameData::GetNpcName
                                 ((FL2GameData *)GL2GameData_exref,
                                  *(int *)(*piVar1 + 4 + iStack_14 * 0xc));
              (**(code **)(iVar2 + 0x1fc))(puVar3,uVar7,piVar9);
              break;
            }
            if (*(int *)(*(int *)(param_1 + 0x214) + 0x2fc) == 0) {
LAB_10194384:
              if (*(int *)(*(int *)(param_1 + 0x214) + 0x2fc) == 0) {
                puVar5 = puVar3;
                puVar6 = FL2GameData::GetNpcName
                                   ((FL2GameData *)GL2GameData_exref,*(int *)(iVar2 + 4 + *piVar1));
                puVar5 = appStristr(puVar6,puVar5);
                if (puVar5 != (ushort *)0x0) {
                  iVar4 = **(int **)(param_1 + 0x1cc);
                  uVar7 = 0xffdcdcdc;
                  puVar5 = FL2GameData::GetNpcName
                                     ((FL2GameData *)GL2GameData_exref,*(int *)(iVar2 + 4 + *piVar1)
                                     );
                  goto LAB_101943eb;
                }
              }
            }
            else {
              FName::FName(aFStack_20,0);
              iVar4 = FName::operator!=(this,aFStack_20);
              if (iVar4 == 0) goto LAB_10194384;
              puVar5 = puVar3;
              puVar6 = L2FName::operator*((L2FName *)this);
              puVar5 = appStristr(puVar6,puVar5);
              if (puVar5 == (ushort *)0x0) goto LAB_10194384;
              iVar4 = **(int **)(param_1 + 0x1cc);
              uVar7 = 0xffdcdcdc;
              puVar5 = L2FName::operator*((L2FName *)this);
LAB_101943eb:
              iStack_30 = iStack_30 + 1;
              (**(code **)(iVar4 + 0x1fc))(puVar5,uVar7,piVar9);
            }
          }
        }
        iStack_14 = iStack_14 + 1;
      } while (iStack_14 < piVar1[1]);
    }
    uStack_4 = 0xffffffff;
    FUN_10191510(iStack_30,0x14);
    *(undefined4 *)(*(int *)(param_1 + 0x1cc) + 0x308) = 0;
  }
  ExceptionList = local_c;
  return 1;
}


// ==== 10194490 FUN_10194490 depth=0 from=raiz callees=FUN_10193c50@10193c50 FUN_1014a7d0@1014a7d0
// strings: 

undefined4 __fastcall FUN_10194490(int param_1)

{
  (**(code **)(**(int **)(param_1 + 0x1cc) + 0x174))();
  FUN_1014a7d0();
  FUN_10193c50();
  return 1;
}


// ==== 10194820 FUN_10194820 depth=0 from=raiz callees=CORE.DLL::UObject::ConditionalDestroy@EXTERNAL:00000187 FUN_10175970@10175970
// strings: 

void __fastcall FUN_10194820(UObject *param_1)

{
  uint uVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_10215e18;
  local_c = ExceptionList;
  uVar1 = DAT_103554c4 ^ (uint)&stack0xffffffec;
  ExceptionList = &local_c;
  *(undefined ***)param_1 = NCNpcView_CharacterSelect_List::vftable;
  local_4 = 0;
  UObject::ConditionalDestroy(param_1);
  local_4 = 0xffffffff;
  FUN_10175970(uVar1);
  ExceptionList = local_c;
  return;
}


// ==== 10194880 FUN_10194880 depth=0 from=raiz callees=CORE.DLL::UObject::operator_delete@EXTERNAL:00000188 FUN_10194820@10194820
// strings: 

void * __thiscall FUN_10194880(void *param_1,byte param_2)

{
  FUN_10194820();
  if ((param_2 & 1) != 0) {
    UObject::operator_delete(param_1,0x324);
  }
  return param_1;
}


// ==== 101948b0 FUN_101948b0 depth=0 from=raiz callees=FUN_10175910@10175910
// strings: 

undefined4 * __thiscall FUN_101948b0(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10215e48;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_10175910(DAT_103554c4 ^ (uint)&stack0xffffffec);
  *param_1 = NCNpcView_CharacterSelect_List::vftable;
  param_1[0xc1] = param_2;
  param_1[0xc0] = param_3;
  ExceptionList = local_c;
  return param_1;
}


// ==== 10194980 FUN_10194980 depth=0 from=raiz callees=CORE.DLL::UObject::ConditionalDestroy@EXTERNAL:00000187 FUN_10002910@10002910
// strings: 

void __fastcall FUN_10194980(UObject *param_1)

{
  uint uVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_10215ea8;
  local_c = ExceptionList;
  uVar1 = DAT_103554c4 ^ (uint)&stack0xffffffec;
  ExceptionList = &local_c;
  *(undefined ***)param_1 = NCNpcView_CharacterSelectWnd::vftable;
  local_4 = 0;
  UObject::ConditionalDestroy(param_1);
  local_4 = 0xffffffff;
  FUN_10002910(uVar1);
  ExceptionList = local_c;
  return;
}


// ==== 101949e0 FUN_101949e0 depth=0 from=raiz callees=FUN_10194980@10194980 CORE.DLL::UObject::operator_delete@EXTERNAL:00000188
// strings: 

void * __thiscall FUN_101949e0(void *param_1,byte param_2)

{
  FUN_10194980();
  if ((param_2 & 1) != 0) {
    UObject::operator_delete(param_1,0xc38);
  }
  return param_1;
}


// ==== 10194a10 FUN_10194a10 depth=0 from=raiz callees=FUN_10003cf0@10003cf0 CORE.DLL::FName::FName@EXTERNAL:0000019c FUN_10003dc0@10003dc0 FUN_10061b40@10061b40 FUN_1001c510@1001c510 FUN_10060d40@10060d40 FUN_1001a820@1001a820 FUN_1008b6f0@1008b6f0 FUN_1000ef10@1000ef10 FUN_1009e150@1009e150 CORE.DLL::FString::FString@EXTERNAL:000001b0 FUN_10006980@10006980 CORE.DLL::UObject::GetTransientPackage@EXTERNAL:0000019b FUN_1005b950@1005b950 FUN_100097b0@100097b0 FUN_1000a130@1000a130 CORE.DLL::FString::~FString@EXTERNAL:00000197 FUN_1003f630@1003f630 FUN_101915b0@101915b0 FUN_1000b680@1000b680 FUN_101948b0@101948b0 FUN_1005c1e0@1005c1e0
// strings: 1028f948=L2UI_ch3.button.SmallButton2_Down | 1028f908=L2UI_ch3.button.SmallButton2 | 1028f948=L2UI_ch3.button.SmallButton2_Down | 1028f908=L2UI_ch3.button.SmallButton2 | 1028f948=L2UI_ch3.button.SmallButton2_Down | 1028f908=L2UI_ch3.button.SmallButton2 | 10291574=Monster | 1028f948=L2UI_ch3.button.SmallButton2_Down | 1028f908=L2UI_ch3.button.SmallButton2 | 1028f948=L2UI_ch3.button.SmallButton2_Down | 1028f908=L2UI_ch3.button.SmallButton2 | 10291558=NpcViewer | 1028efcc=sek.cbui168 | 1028efb4=sek.cbui144 | 

undefined4 __fastcall FUN_10194a10(int *param_1)

{
  int iVar1;
  int *piVar2;
  UPackage *pUVar3;
  undefined4 uVar4;
  FString *extraout_ECX;
  FString *extraout_ECX_00;
  FString *extraout_ECX_01;
  FString *extraout_ECX_02;
  FString *extraout_ECX_03;
  uint uVar5;
  FString *pFStack_2d8;
  int iStack_2bc;
  undefined4 uStack_2b8;
  undefined4 uStack_2b4;
  undefined4 uStack_2b0;
  undefined4 uStack_2ac;
  undefined4 uStack_2a8;
  int iStack_2a0;
  undefined4 uStack_29c;
  undefined4 uStack_298;
  undefined4 uStack_294;
  undefined4 uStack_290;
  undefined4 uStack_28c;
  int iStack_284;
  undefined4 uStack_280;
  undefined4 uStack_27c;
  undefined4 uStack_278;
  undefined4 uStack_274;
  undefined4 uStack_270;
  int iStack_268;
  undefined4 uStack_264;
  undefined4 uStack_260;
  undefined4 uStack_25c;
  undefined4 uStack_258;
  undefined4 uStack_254;
  int iStack_24c;
  FString *pFStack_230;
  int iStack_214;
  undefined4 uStack_210;
  undefined4 uStack_20c;
  undefined4 uStack_208;
  undefined4 uStack_204;
  undefined4 uStack_200;
  int iStack_1f8;
  undefined4 uStack_1f4;
  undefined4 uStack_1f0;
  undefined4 uStack_1ec;
  undefined4 uStack_1e8;
  undefined4 uStack_1e4;
  int iStack_1dc;
  undefined4 uStack_1d8;
  undefined4 uStack_1d4;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  undefined4 uStack_1c8;
  int iStack_1c0;
  undefined4 uStack_1bc;
  undefined4 uStack_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  int iStack_1a4;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined4 uStack_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  int iStack_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined4 uStack_178;
  undefined4 uStack_174;
  int iStack_16c;
  undefined4 uStack_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined *puStack_158;
  int iStack_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  wchar_t *pwStack_13c;
  int iStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined *puStack_120;
  int iStack_118;
  FString *pFStack_fc;
  FString *pFStack_e0;
  FString *pFStack_c4;
  int iStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  int iStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  int iStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_54;
  undefined4 uStack_50;
  uint uStack_4c;
  FString local_3c [20];
  FString local_28 [4];
  undefined8 local_24;
  uint local_1c;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_10215ff5;
  local_10 = ExceptionList;
  uStack_4c = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_4c;
  ExceptionList = &local_10;
  local_1c = 0;
  local_8 = 0;
  uStack_50 = 0x10194a4b;
  FUN_10061b40();
  uStack_50 = 0;
  local_24 = CONCAT44(&uStack_54,(undefined4)local_24);
  uStack_5c = 0x10194a59;
  FName::FName((FName *)&uStack_54,0);
  UObject::GetTransientPackage();
  uStack_5c = 0x350;
  uStack_60 = 0x10194a6c;
  iVar1 = FUN_1005b950();
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    uStack_50 = 0;
    uStack_54 = 0;
    uStack_5c = 0x10194a7d;
    iVar1 = FUN_1001c510();
  }
  param_1[0x30] = iVar1;
  param_1[0x32] = 0xf3;
  *(undefined4 *)(iVar1 + 0x1cc) = 0xf3;
  uStack_50 = 3;
  uStack_54 = 0;
  uStack_5c = 0x19;
  local_24 = (longlong)ROUND((float)param_1[0x22]);
  uStack_60 = (undefined4)local_24;
  uStack_64 = 0;
  uStack_68 = 0;
  uStack_6c = 0x10194ad2;
  (**(code **)(*(int *)param_1[0x30] + 0xc0))();
  uStack_6c = 2;
  iStack_70 = param_1[0x30];
  uStack_6c = FUN_10060d40();
  iStack_70 = 0x10194aee;
  FUN_1005c1e0();
  uStack_6c = 0;
  local_24 = CONCAT44(&iStack_70,(undefined4)local_24);
  uStack_78 = 0x10194afc;
  FName::FName((FName *)&iStack_70,0);
  UObject::GetTransientPackage();
  uStack_78 = 0x330;
  uStack_7c = 0x10194b09;
  iVar1 = FUN_1008b6f0();
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    uStack_6c = 0x10194b17;
    iVar1 = FUN_1000b680();
  }
  param_1[0x74] = iVar1;
  *(undefined4 *)(iVar1 + 0x1cc) = 0x1f05;
  uStack_6c = 3;
  iStack_70 = 0;
  uStack_78 = 0x12;
  uStack_7c = 0x7d;
  uStack_80 = 0x1e;
  uStack_84 = 0x19;
  uStack_88 = 0x10194b47;
  (**(code **)(*(int *)param_1[0x74] + 0xc0))();
  uStack_88 = 2;
  iStack_8c = param_1[0x74];
  uStack_88 = FUN_10060d40();
  iStack_8c = 0x10194b63;
  FUN_1005c1e0();
  uStack_88 = 0;
  local_24 = CONCAT44(&iStack_8c,(undefined4)local_24);
  uStack_94 = 0x10194b71;
  FName::FName((FName *)&iStack_8c,0);
  UObject::GetTransientPackage();
  uStack_94 = 0x324;
  uStack_98 = 0x10194b7e;
  iVar1 = FUN_101915b0();
  if (iVar1 == 0) {
    piVar2 = (int *)0x0;
  }
  else {
    uStack_88 = 0x14;
    iStack_8c = 0xbc2;
    piVar2 = (int *)FUN_101948b0();
  }
  param_1[0x73] = (int)piVar2;
  uStack_88 = 3;
  iStack_8c = 0;
  uStack_94 = 0xfa;
  uStack_98 = 0x11d;
  uStack_9c = 0x32;
  uStack_a0 = 10;
  uStack_a4 = 0x10194bbb;
  (**(code **)(*piVar2 + 0xc0))();
  uStack_a4 = 2;
  iStack_a8 = param_1[0x73];
  uStack_a4 = FUN_10060d40();
  iStack_a8 = 0x10194bd7;
  FUN_1005c1e0();
  uStack_a4 = 0;
  local_24 = CONCAT44(&iStack_a8,(undefined4)local_24);
  FName::FName((FName *)&iStack_a8,0);
  UObject::GetTransientPackage();
  iVar1 = FUN_1000ef10();
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    uStack_a4 = 0;
    iStack_a8 = 0;
    iVar1 = FUN_1001a820();
  }
  param_1[0x7c] = iVar1;
  *(undefined4 *)(iVar1 + 0x1cc) = 0xf4;
  uStack_a4 = 3;
  iStack_a8 = 0;
  (**(code **)(*(int *)param_1[0x7c] + 0xc0))();
  pFStack_c4 = (FString *)param_1[0x7c];
  FUN_10060d40();
  pFStack_c4 = (FString *)0x10194c59;
  FUN_1005c1e0();
  local_24 = CONCAT44(&pFStack_c4,(undefined4)local_24);
  pFStack_c4 = extraout_ECX;
  FName::FName((FName *)&pFStack_c4,0);
  UObject::GetTransientPackage();
  iVar1 = FUN_1000a130();
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    pFStack_c4 = (FString *)0x10194c8d;
    FString::FString(local_3c,(ushort *)L"L2UI_ch3.button.SmallButton2_Down");
    local_8 = CONCAT31(local_8._1_3_,1);
    local_1c = 1;
    pFStack_c4 = (FString *)0x10194ca6;
    FString::FString(local_28,(ushort *)L"L2UI_ch3.button.SmallButton2");
    local_8 = 2;
    local_1c = 3;
    pFStack_c4 = local_3c;
    iVar1 = FUN_10006980();
  }
  param_1[0x7d] = iVar1;
  local_8 = 1;
  uVar5 = local_1c;
  if ((local_1c & 2) != 0) {
    uVar5 = local_1c & 0xfffffffd;
    local_1c = uVar5;
    FString::~FString(local_28);
  }
  local_8 = 0;
  if ((uVar5 & 1) != 0) {
    local_1c = uVar5 & 0xfffffffe;
    FString::~FString(local_3c);
  }
  *(undefined4 *)(param_1[0x7d] + 0x1cc) = 0xf5;
  pFStack_c4 = (FString *)0x0;
  (**(code **)(*(int *)param_1[0x7d] + 0xc0))();
  pFStack_e0 = (FString *)param_1[0x7d];
  FUN_10060d40();
  pFStack_e0 = (FString *)0x10194d55;
  FUN_1005c1e0();
  pFStack_e0 = (FString *)0x10194d65;
  FUN_10003cf0();
  local_24 = CONCAT44(&pFStack_e0,(undefined4)local_24);
  pFStack_e0 = extraout_ECX_00;
  FName::FName((FName *)&pFStack_e0,0);
  UObject::GetTransientPackage();
  iVar1 = FUN_1000a130();
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    pFStack_e0 = (FString *)0x10194d99;
    FString::FString(local_28,(ushort *)L"L2UI_ch3.button.SmallButton2_Down");
    local_8 = CONCAT31(local_8._1_3_,3);
    local_1c = local_1c | 4;
    pFStack_e0 = (FString *)0x10194daf;
    FString::FString(local_3c,(ushort *)L"L2UI_ch3.button.SmallButton2");
    local_8 = 4;
    local_1c = local_1c | 8;
    pFStack_e0 = local_28;
    iVar1 = FUN_10006980();
  }
  param_1[0x7e] = iVar1;
  local_8 = 3;
  uVar5 = local_1c;
  if ((local_1c & 8) != 0) {
    uVar5 = local_1c & 0xfffffff7;
    local_1c = uVar5;
    FString::~FString(local_3c);
  }
  local_8 = 0;
  if ((uVar5 & 4) != 0) {
    local_1c = uVar5 & 0xfffffffb;
    FString::~FString(local_28);
  }
  *(undefined4 *)(param_1[0x7e] + 0x1cc) = 0xf6;
  pFStack_e0 = (FString *)0x0;
  (**(code **)(*(int *)param_1[0x7e] + 0xc0))();
  pFStack_fc = (FString *)param_1[0x7e];
  FUN_10060d40();
  pFStack_fc = (FString *)0x10194e5e;
  FUN_1005c1e0();
  pFStack_fc = (FString *)0x10194e6e;
  FUN_10003cf0();
  local_24 = CONCAT44(&pFStack_fc,(undefined4)local_24);
  pFStack_fc = extraout_ECX_01;
  FName::FName((FName *)&pFStack_fc,0);
  UObject::GetTransientPackage();
  iVar1 = FUN_1000a130();
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    pFStack_fc = (FString *)0x10194ea2;
    FString::FString(local_28,(ushort *)L"L2UI_ch3.button.SmallButton2_Down");
    local_8 = CONCAT31(local_8._1_3_,5);
    local_1c = local_1c | 0x10;
    pFStack_fc = (FString *)0x10194eb8;
    FString::FString(local_3c,(ushort *)L"L2UI_ch3.button.SmallButton2");
    local_8 = 6;
    local_1c = local_1c | 0x20;
    pFStack_fc = local_28;
    iVar1 = FUN_10006980();
  }
  param_1[0x86] = iVar1;
  local_8 = 5;
  uVar5 = local_1c;
  if ((local_1c & 0x20) != 0) {
    uVar5 = local_1c & 0xffffffdf;
    local_1c = uVar5;
    FString::~FString(local_3c);
  }
  local_8 = 0;
  if ((uVar5 & 0x10) != 0) {
    local_1c = uVar5 & 0xffffffef;
    FString::~FString(local_28);
  }
  *(undefined4 *)(param_1[0x86] + 0x1cc) = 0xfa;
  pFStack_fc = (FString *)0x0;
  (**(code **)(*(int *)param_1[0x86] + 0xc0))();
  iStack_118 = param_1[0x86];
  FUN_10060d40();
  iStack_118 = 0x10194f67;
  FUN_1005c1e0();
  iStack_118 = 0x10194f75;
  FString::FString(local_3c,(ushort *)&DAT_10291594);
  local_8._0_1_ = 7;
  iStack_118 = 0x10194f88;
  FUN_10003dc0();
  local_8 = (uint)local_8._1_3_ << 8;
  FString::~FString(local_3c);
  local_24 = CONCAT44(&iStack_118,(undefined4)local_24);
  puStack_120 = (undefined *)0x10194fa5;
  FName::FName((FName *)&iStack_118,0);
  UObject::GetTransientPackage();
  puStack_120 = (undefined *)0x314;
  uStack_124 = 0x10194fb2;
  iVar1 = FUN_1009e150();
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    iStack_118 = 0;
    puStack_120 = &DAT_10291584;
    uStack_124 = 0x10194fcb;
    iVar1 = FUN_100097b0();
  }
  param_1[0x85] = iVar1;
  *(undefined4 *)(iVar1 + 0x1cc) = 0xfb;
  iStack_118 = 0;
  puStack_120 = (undefined *)0x10;
  uStack_124 = 100;
  uStack_128 = 0x20;
  uStack_12c = 0xb4;
  uStack_130 = 0x10195000;
  (**(code **)(*(int *)param_1[0x85] + 0xc0))();
  uStack_130 = 2;
  iStack_134 = param_1[0x85];
  uStack_130 = FUN_10060d40();
  iStack_134 = 0x1019501c;
  FUN_1005c1e0();
  *(undefined4 *)(param_1[0x85] + 0x2fc) = 0;
  uStack_130 = 0;
  local_24 = CONCAT44(&iStack_134,(undefined4)local_24);
  pwStack_13c = L"\xd7ff桐̔";
  FName::FName((FName *)&iStack_134,0);
  UObject::GetTransientPackage();
  pwStack_13c = (wchar_t *)0x314;
  uStack_140 = 0x10195049;
  iVar1 = FUN_1009e150();
  if (iVar1 == 0) {
    piVar2 = (int *)0x0;
  }
  else {
    uStack_130 = 0;
    iStack_134 = 0;
    pwStack_13c = L"Monster";
    uStack_140 = 0x10195062;
    piVar2 = (int *)FUN_100097b0();
  }
  param_1[0x89] = (int)piVar2;
  uStack_130 = 3;
  iStack_134 = 0;
  pwStack_13c = (wchar_t *)0x10;
  uStack_140 = 100;
  uStack_144 = 400;
  uStack_148 = 10;
  uStack_14c = 0x10195089;
  (**(code **)(*piVar2 + 0xc0))();
  uStack_14c = 2;
  iStack_150 = param_1[0x89];
  uStack_14c = FUN_10060d40();
  iStack_150 = 0x101950a5;
  FUN_1005c1e0();
  *(undefined4 *)(param_1[0x89] + 0x2fc) = 1;
  uStack_14c = 0;
  local_24 = CONCAT44(&iStack_150,(undefined4)local_24);
  puStack_158 = (undefined *)0x101950c6;
  FName::FName((FName *)&iStack_150,0);
  UObject::GetTransientPackage();
  puStack_158 = (undefined *)0x314;
  uStack_15c = 0x101950d3;
  iVar1 = FUN_1009e150();
  if (iVar1 == 0) {
    piVar2 = (int *)0x0;
  }
  else {
    uStack_14c = 0;
    iStack_150 = 0;
    puStack_158 = &DAT_1029156c;
    uStack_15c = 0x101950ec;
    piVar2 = (int *)FUN_100097b0();
  }
  param_1[0x88] = (int)piVar2;
  uStack_14c = 3;
  iStack_150 = 0;
  puStack_158 = (undefined *)0x10;
  uStack_15c = 100;
  uStack_160 = 400;
  uStack_164 = 0x6e;
  uStack_168 = 0x10195113;
  (**(code **)(*piVar2 + 0xc0))();
  uStack_168 = 2;
  iStack_16c = param_1[0x88];
  uStack_168 = FUN_10060d40();
  iStack_16c = 0x1019512f;
  FUN_1005c1e0();
  *(undefined4 *)(param_1[0x88] + 0x2fc) = 1;
  uStack_168 = 0;
  local_24 = CONCAT44(&iStack_16c,(undefined4)local_24);
  uStack_174 = 0x1019514b;
  FName::FName((FName *)&iStack_16c,0);
  UObject::GetTransientPackage();
  uStack_174 = 0x400;
  uStack_178 = 0x10195158;
  iVar1 = FUN_1000ef10();
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    uStack_168 = 0;
    iStack_16c = 0;
    uStack_174 = 1;
    uStack_178 = 0;
    uStack_17c = 0;
    uStack_180 = 0x10195171;
    iVar1 = FUN_1001a820();
  }
  param_1[0x75] = iVar1;
  *(undefined4 *)(iVar1 + 0x1cc) = 0xfe;
  uStack_168 = 3;
  iStack_16c = 0;
  uStack_174 = 0x10;
  uStack_178 = 0xe6;
  uStack_17c = 0x1a2;
  uStack_180 = 0x3c;
  uStack_184 = 0x101951a9;
  (**(code **)(*(int *)param_1[0x75] + 0xc0))();
  uStack_184 = 2;
  iStack_188 = param_1[0x75];
  uStack_184 = FUN_10060d40();
  iStack_188 = 0x101951c5;
  FUN_1005c1e0();
  uStack_184 = 0;
  local_24 = CONCAT44(&iStack_188,(undefined4)local_24);
  uStack_190 = 0x101951d5;
  FName::FName((FName *)&iStack_188,0);
  UObject::GetTransientPackage();
  uStack_190 = 0x400;
  uStack_194 = 0x101951e2;
  iVar1 = FUN_1000ef10();
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    uStack_184 = 0;
    iStack_188 = 0;
    uStack_190 = 1;
    uStack_194 = 0;
    uStack_198 = 0;
    uStack_19c = 0x101951fb;
    iVar1 = FUN_1001a820();
  }
  param_1[0x76] = iVar1;
  *(undefined4 *)(iVar1 + 0x1cc) = 0xff;
  uStack_184 = 3;
  iStack_188 = 0;
  uStack_190 = 0x10;
  uStack_194 = 0xe6;
  uStack_198 = 0x1b6;
  uStack_19c = 0x3c;
  uStack_1a0 = 0x10195233;
  (**(code **)(*(int *)param_1[0x76] + 0xc0))();
  uStack_1a0 = 2;
  iStack_1a4 = param_1[0x76];
  uStack_1a0 = FUN_10060d40();
  iStack_1a4 = 0x1019524f;
  FUN_1005c1e0();
  uStack_1a0 = 0;
  local_24 = CONCAT44(&iStack_1a4,(undefined4)local_24);
  uStack_1ac = 0x1019525f;
  FName::FName((FName *)&iStack_1a4,0);
  UObject::GetTransientPackage();
  uStack_1ac = 0x400;
  uStack_1b0 = 0x1019526c;
  iVar1 = FUN_1000ef10();
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    uStack_1a0 = 0;
    iStack_1a4 = 0;
    uStack_1ac = 1;
    uStack_1b0 = 0;
    uStack_1b4 = 0;
    uStack_1b8 = 0x10195285;
    iVar1 = FUN_1001a820();
  }
  param_1[0x77] = iVar1;
  *(undefined4 *)(iVar1 + 0x1cc) = 0x100;
  uStack_1a0 = 3;
  iStack_1a4 = 0;
  uStack_1ac = 0x10;
  uStack_1b0 = 0xe6;
  uStack_1b4 = 0x1ca;
  uStack_1b8 = 0x3c;
  uStack_1bc = 0x101952bd;
  (**(code **)(*(int *)param_1[0x77] + 0xc0))();
  uStack_1bc = 2;
  iStack_1c0 = param_1[0x77];
  uStack_1bc = FUN_10060d40();
  iStack_1c0 = 0x101952d9;
  FUN_1005c1e0();
  uStack_1bc = 0;
  local_24 = CONCAT44(&iStack_1c0,(undefined4)local_24);
  uStack_1c8 = 0x101952e9;
  FName::FName((FName *)&iStack_1c0,0);
  UObject::GetTransientPackage();
  uStack_1c8 = 0x400;
  uStack_1cc = 0x101952f6;
  iVar1 = FUN_1000ef10();
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    uStack_1bc = 0;
    iStack_1c0 = 0;
    uStack_1c8 = 1;
    uStack_1cc = 0;
    uStack_1d0 = 0;
    uStack_1d4 = 0x1019530f;
    iVar1 = FUN_1001a820();
  }
  param_1[0x78] = iVar1;
  *(undefined4 *)(iVar1 + 0x1cc) = 0x101;
  uStack_1bc = 3;
  iStack_1c0 = 0;
  uStack_1c8 = 0x10;
  uStack_1cc = 0xe6;
  uStack_1d0 = 0x1de;
  uStack_1d4 = 0x3c;
  uStack_1d8 = 0x10195347;
  (**(code **)(*(int *)param_1[0x78] + 0xc0))();
  uStack_1d8 = 2;
  iStack_1dc = param_1[0x78];
  uStack_1d8 = FUN_10060d40();
  iStack_1dc = 0x10195363;
  FUN_1005c1e0();
  uStack_1d8 = 0;
  local_24 = CONCAT44(&iStack_1dc,(undefined4)local_24);
  uStack_1e4 = 0x10195373;
  FName::FName((FName *)&iStack_1dc,0);
  UObject::GetTransientPackage();
  uStack_1e4 = 0x400;
  uStack_1e8 = 0x10195380;
  iVar1 = FUN_1000ef10();
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    uStack_1d8 = 0;
    iStack_1dc = 0;
    uStack_1e4 = 1;
    uStack_1e8 = 0;
    uStack_1ec = 0;
    uStack_1f0 = 0x10195399;
    iVar1 = FUN_1001a820();
  }
  param_1[0x79] = iVar1;
  *(undefined4 *)(iVar1 + 0x1cc) = 0x102;
  uStack_1d8 = 3;
  iStack_1dc = 0;
  uStack_1e4 = 0x10;
  uStack_1e8 = 0xe6;
  uStack_1ec = 0x1f2;
  uStack_1f0 = 0x3c;
  uStack_1f4 = 0x101953d1;
  (**(code **)(*(int *)param_1[0x79] + 0xc0))();
  uStack_1f4 = 2;
  iStack_1f8 = param_1[0x79];
  uStack_1f4 = FUN_10060d40();
  iStack_1f8 = 0x101953ed;
  FUN_1005c1e0();
  uStack_1f4 = 0;
  local_24 = CONCAT44(&iStack_1f8,(undefined4)local_24);
  uStack_200 = 0x101953fd;
  FName::FName((FName *)&iStack_1f8,0);
  UObject::GetTransientPackage();
  uStack_200 = 0x400;
  uStack_204 = 0x1019540a;
  iVar1 = FUN_1000ef10();
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    uStack_1f4 = 0;
    iStack_1f8 = 0;
    uStack_200 = 1;
    uStack_204 = 0;
    uStack_208 = 0;
    uStack_20c = 0x10195423;
    iVar1 = FUN_1001a820();
  }
  param_1[0x7a] = iVar1;
  *(undefined4 *)(iVar1 + 0x1cc) = 0x103;
  uStack_1f4 = 3;
  iStack_1f8 = 0;
  uStack_200 = 0x10;
  uStack_204 = 0x20;
  uStack_208 = 0x206;
  uStack_20c = 0x3c;
  uStack_210 = 0x10195458;
  (**(code **)(*(int *)param_1[0x7a] + 0xc0))();
  uStack_210 = 2;
  iStack_214 = param_1[0x7a];
  uStack_210 = FUN_10060d40();
  iStack_214 = 0x10195474;
  FUN_1005c1e0();
  uStack_210 = 0;
  local_24 = CONCAT44(&iStack_214,(undefined4)local_24);
  FName::FName((FName *)&iStack_214,0);
  UObject::GetTransientPackage();
  iVar1 = FUN_1000ef10();
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    uStack_210 = 0;
    iStack_214 = 0;
    iVar1 = FUN_1001a820();
  }
  param_1[0x7b] = iVar1;
  *(undefined4 *)(iVar1 + 0x1cc) = 0x104;
  uStack_210 = 3;
  iStack_214 = 0;
  (**(code **)(*(int *)param_1[0x7b] + 0xc0))();
  pFStack_230 = (FString *)param_1[0x7b];
  FUN_10060d40();
  pFStack_230 = (FString *)0x101954fe;
  FUN_1005c1e0();
  local_24 = CONCAT44(&pFStack_230,(undefined4)local_24);
  pFStack_230 = extraout_ECX_02;
  FName::FName((FName *)&pFStack_230,0);
  UObject::GetTransientPackage();
  iVar1 = FUN_1000a130();
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    pFStack_230 = (FString *)0x10195532;
    FString::FString(local_28,(ushort *)L"L2UI_ch3.button.SmallButton2_Down");
    local_8 = CONCAT31(local_8._1_3_,8);
    local_1c = local_1c | 0x40;
    pFStack_230 = (FString *)0x10195548;
    FString::FString(local_3c,(ushort *)L"L2UI_ch3.button.SmallButton2");
    local_8 = 9;
    local_1c = local_1c | 0x80;
    pFStack_230 = local_28;
    iVar1 = FUN_10006980();
  }
  param_1[0x87] = iVar1;
  local_8 = 8;
  uVar5 = local_1c;
  if ((char)local_1c < '\0') {
    uVar5 = local_1c & 0xffffff7f;
    local_1c = uVar5;
    FString::~FString(local_3c);
  }
  local_8 = 0;
  if ((uVar5 & 0x40) != 0) {
    uVar5 = uVar5 & 0xffffffbf;
    local_1c = uVar5;
    FString::~FString(local_28);
  }
  *(undefined4 *)(param_1[0x87] + 0x1cc) = 0x1100;
  pFStack_230 = (FString *)0x0;
  (**(code **)(*(int *)param_1[0x87] + 0xc0))();
  iStack_24c = param_1[0x87];
  FUN_10060d40();
  iStack_24c = 0x101955fc;
  FUN_1005c1e0();
  iStack_24c = 0x1019560a;
  FString::FString(local_3c,(ushort *)&DAT_10291594);
  local_8._0_1_ = 10;
  iStack_24c = 0x1019561d;
  FUN_10003dc0();
  local_8 = (uint)local_8._1_3_ << 8;
  FString::~FString(local_3c);
  local_24 = CONCAT44(&iStack_24c,(undefined4)local_24);
  uStack_254 = 0x1019563a;
  FName::FName((FName *)&iStack_24c,0);
  UObject::GetTransientPackage();
  uStack_254 = 0x400;
  uStack_258 = 0x10195647;
  iVar1 = FUN_1000ef10();
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    iStack_24c = 0;
    uStack_254 = 1;
    uStack_258 = 0;
    uStack_25c = 0;
    uStack_260 = 0x10195661;
    iVar1 = FUN_1001a820();
  }
  param_1[0x80] = iVar1;
  *(undefined4 *)(iVar1 + 0x1cc) = 0xf8;
  iStack_24c = 0;
  uStack_254 = 0x10;
  uStack_258 = 0x50;
  uStack_25c = 0x226;
  uStack_260 = 0x3c;
  uStack_264 = 0x10195696;
  (**(code **)(*(int *)param_1[0x80] + 0xc0))();
  uStack_264 = 2;
  iStack_268 = param_1[0x80];
  uStack_264 = FUN_10060d40();
  iStack_268 = 0x101956b2;
  FUN_1005c1e0();
  uStack_264 = 0;
  local_24 = CONCAT44(&iStack_268,(undefined4)local_24);
  uStack_270 = 0x101956c2;
  FName::FName((FName *)&iStack_268,0);
  UObject::GetTransientPackage();
  uStack_270 = 0x400;
  uStack_274 = 0x101956cf;
  iVar1 = FUN_1000ef10();
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    uStack_264 = 0;
    iStack_268 = 0;
    uStack_270 = 1;
    uStack_274 = 0;
    uStack_278 = 0;
    uStack_27c = 0x101956e9;
    iVar1 = FUN_1001a820();
  }
  param_1[0x7f] = iVar1;
  *(undefined4 *)(iVar1 + 0x1cc) = 0xf7;
  uStack_264 = 3;
  iStack_268 = 0;
  uStack_270 = 0x10;
  uStack_274 = 0x50;
  uStack_278 = 0x226;
  uStack_27c = 0xd2;
  uStack_280 = 0x10195721;
  (**(code **)(*(int *)param_1[0x7f] + 0xc0))();
  uStack_280 = 2;
  iStack_284 = param_1[0x7f];
  uStack_280 = FUN_10060d40();
  iStack_284 = 0x1019573d;
  FUN_1005c1e0();
  uStack_280 = 0;
  local_24 = CONCAT44(&iStack_284,(undefined4)local_24);
  uStack_28c = 0x1019574d;
  FName::FName((FName *)&iStack_284,0);
  UObject::GetTransientPackage();
  uStack_28c = 0x400;
  uStack_290 = 0x1019575a;
  iVar1 = FUN_1000ef10();
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    uStack_280 = 0;
    iStack_284 = 0;
    uStack_28c = 1;
    uStack_290 = 0;
    uStack_294 = 0;
    uStack_298 = 0x10195774;
    iVar1 = FUN_1001a820();
  }
  param_1[0x82] = iVar1;
  *(undefined4 *)(iVar1 + 0x1cc) = 0xfe;
  uStack_280 = 3;
  iStack_284 = 0;
  uStack_28c = 0x10;
  uStack_290 = 0x50;
  uStack_294 = 0x23a;
  uStack_298 = 0x3c;
  uStack_29c = 0x101957a9;
  (**(code **)(*(int *)param_1[0x82] + 0xc0))();
  uStack_29c = 2;
  iStack_2a0 = param_1[0x82];
  uStack_29c = FUN_10060d40();
  iStack_2a0 = 0x101957c5;
  FUN_1005c1e0();
  uStack_29c = 0;
  local_24 = CONCAT44(&iStack_2a0,(undefined4)local_24);
  uStack_2a8 = 0x101957d5;
  FName::FName((FName *)&iStack_2a0,0);
  UObject::GetTransientPackage();
  uStack_2a8 = 0x400;
  uStack_2ac = 0x101957e2;
  iVar1 = FUN_1000ef10();
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    uStack_29c = 0;
    iStack_2a0 = 0;
    uStack_2a8 = 1;
    uStack_2ac = 0;
    uStack_2b0 = 0;
    uStack_2b4 = 0x101957fc;
    iVar1 = FUN_1001a820();
  }
  param_1[0x81] = iVar1;
  *(undefined4 *)(iVar1 + 0x1cc) = 0xff;
  uStack_29c = 3;
  iStack_2a0 = 0;
  uStack_2a8 = 0x10;
  uStack_2ac = 0x50;
  uStack_2b0 = 0x23a;
  uStack_2b4 = 0xd2;
  uStack_2b8 = 0x10195834;
  (**(code **)(*(int *)param_1[0x81] + 0xc0))();
  uStack_2b8 = 2;
  iStack_2bc = param_1[0x81];
  uStack_2b8 = FUN_10060d40();
  iStack_2bc = 0x10195850;
  FUN_1005c1e0();
  uStack_2b8 = 0;
  local_24 = CONCAT44(&iStack_2bc,(undefined4)local_24);
  FName::FName((FName *)&iStack_2bc,0);
  UObject::GetTransientPackage();
  iVar1 = FUN_1000ef10();
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    uStack_2b8 = 0;
    iStack_2bc = 0;
    iVar1 = FUN_1001a820();
  }
  param_1[0x83] = iVar1;
  *(undefined4 *)(iVar1 + 0x1cc) = 0x1101;
  uStack_2b8 = 3;
  iStack_2bc = 0;
  (**(code **)(*(int *)param_1[0x83] + 0xc0))();
  pFStack_2d8 = (FString *)param_1[0x83];
  FUN_10060d40();
  pFStack_2d8 = (FString *)0x101958d8;
  FUN_1005c1e0();
  local_24 = CONCAT44(&pFStack_2d8,(undefined4)local_24);
  pFStack_2d8 = extraout_ECX_03;
  FName::FName((FName *)&pFStack_2d8,0);
  pUVar3 = UObject::GetTransientPackage();
  iVar1 = FUN_1000a130(0x33c,pUVar3);
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    pFStack_2d8 = (FString *)0x1019590c;
    FString::FString(local_28,(ushort *)L"L2UI_ch3.button.SmallButton2_Down");
    local_8 = CONCAT31(local_8._1_3_,0xb);
    local_1c = uVar5 | 0x100;
    pFStack_2d8 = (FString *)0x10195927;
    FString::FString(local_3c,(ushort *)L"L2UI_ch3.button.SmallButton2");
    local_8 = 0xc;
    uVar5 = uVar5 | 0x300;
    pFStack_2d8 = local_28;
    local_1c = uVar5;
    iVar1 = FUN_10006980(local_3c);
  }
  param_1[0x84] = iVar1;
  local_8 = 0xb;
  if ((uVar5 & 0x200) != 0) {
    uVar5 = uVar5 & 0xfffffdff;
    local_1c = uVar5;
    FString::~FString(local_3c);
  }
  local_8 = 0;
  if ((uVar5 & 0x100) != 0) {
    local_1c = uVar5 & 0xfffffeff;
    FString::~FString(local_28);
  }
  *(undefined4 *)(param_1[0x84] + 0x1cc) = 0xf9;
  pFStack_2d8 = (FString *)0x0;
  (**(code **)(*(int *)param_1[0x84] + 0xc0))(0xd2,0x24e,0x20,0x10,0);
  uVar4 = FUN_10060d40(param_1[0x84],2);
  FUN_1005c1e0(uVar4);
  FUN_10003cf0(0xda);
  (**(code **)(*param_1 + 0x168))(L"NpcViewer");
  iVar1 = FUN_1003f630(L"sek.cbui168",1);
  param_1[0x8a] = iVar1;
  iVar1 = FUN_1003f630(L"sek.cbui144",1);
  param_1[0x8b] = iVar1;
  ExceptionList = local_10;
  return 1;
}


// ==== 10196030 FUN_10196030 depth=0 from=raiz callees=FUN_100570d0@100570d0
// strings: 

bool __thiscall FUN_10196030(int *param_1,int param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = FUN_100570d0(param_2,param_3,param_4);
  if (iVar1 != 0) {
    return true;
  }
  if (param_2 == 0x501) {
    if (param_3 == 0x100a) {
      iVar1 = (**(code **)(*param_1 + 500))();
      return iVar1 != 0;
    }
    if (param_3 == 0x1009) {
      iVar1 = (**(code **)(*param_1 + 0x1f8))();
      return iVar1 != 0;
    }
  }
  return false;
}


// ==== 101960b0 FUN_101960b0 depth=0 from=raiz callees=FUN_10003cf0@10003cf0 CORE.DLL::FName::FName@EXTERNAL:0000019c FUN_1000a130@1000a130 FUN_10061b40@10061b40 CORE.DLL::FString::~FString@EXTERNAL:00000197 FUN_10060d40@10060d40 FUN_1003f630@1003f630 CORE.DLL::FString::FString@EXTERNAL:000001b0 FUN_10006980@10006980 CORE.DLL::UObject::GetTransientPackage@EXTERNAL:0000019b FUN_1005c1e0@1005c1e0
// strings: 1028aba0=L2UI_CH3.LobbyWnd.lobby_menuback | 1028ab60=L2UI_CH3.Button.BigButton_down | 1028ab2c=L2UI_CH3.Button.BigButton | 1028ab60=L2UI_CH3.Button.BigButton_down | 1028ab2c=L2UI_CH3.Button.BigButton | 

undefined4 __fastcall FUN_101960b0(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  UPackage *pUVar3;
  FString *extraout_ECX;
  FString *extraout_ECX_00;
  uint uVar4;
  FString *pFStack_70;
  FString *pFStack_54;
  uint uStack_4c;
  FString local_3c [12];
  FString local_30 [16];
  undefined1 *local_20;
  uint local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_102160c8;
  local_10 = ExceptionList;
  uStack_4c = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_4c;
  ExceptionList = &local_10;
  uVar4 = 0;
  local_18 = 0;
  local_8 = 0;
  FUN_10061b40();
  pFStack_54 = (FString *)0x1028aba0;
  uVar1 = FUN_1003f630();
  *(undefined4 *)(param_1 + 0x1cc) = uVar1;
  local_20 = (undefined1 *)&pFStack_54;
  pFStack_54 = extraout_ECX;
  FName::FName((FName *)&pFStack_54,0);
  UObject::GetTransientPackage();
  iVar2 = FUN_1000a130();
  if (iVar2 == 0) {
    uVar1 = 0;
  }
  else {
    pFStack_54 = (FString *)0x10196134;
    FString::FString(local_3c,(ushort *)L"L2UI_CH3.Button.BigButton_down");
    local_8 = CONCAT31(local_8._1_3_,1);
    local_18 = 1;
    pFStack_54 = (FString *)0x1019614d;
    FString::FString(local_30,(ushort *)L"L2UI_CH3.Button.BigButton");
    local_8 = 2;
    uVar4 = 3;
    local_18 = 3;
    pFStack_54 = local_3c;
    uVar1 = FUN_10006980();
  }
  *(undefined4 *)(param_1 + 0x1d0) = uVar1;
  local_8 = 1;
  if ((uVar4 & 2) != 0) {
    uVar4 = uVar4 & 0xfffffffd;
    local_18 = uVar4;
    FString::~FString(local_30);
  }
  local_8 = 0;
  if ((uVar4 & 1) != 0) {
    uVar4 = uVar4 & 0xfffffffe;
    local_18 = uVar4;
    FString::~FString(local_3c);
  }
  *(undefined4 *)(*(int *)(param_1 + 0x1d0) + 0x1cc) = 0x1009;
  pFStack_54 = (FString *)0x0;
  (**(code **)(**(int **)(param_1 + 0x1d0) + 0xc0))();
  pFStack_70 = *(FString **)(param_1 + 0x1d0);
  FUN_10060d40();
  pFStack_70 = (FString *)0x101961f7;
  FUN_1005c1e0();
  pFStack_70 = (FString *)0x10196207;
  FUN_10003cf0();
  local_20 = (undefined1 *)&pFStack_70;
  pFStack_70 = extraout_ECX_00;
  FName::FName((FName *)&pFStack_70,0);
  pUVar3 = UObject::GetTransientPackage();
  iVar2 = FUN_1000a130(0x33c,pUVar3);
  if (iVar2 == 0) {
    uVar1 = 0;
  }
  else {
    pFStack_70 = (FString *)0x1019623f;
    FString::FString(local_30,(ushort *)L"L2UI_CH3.Button.BigButton_down");
    local_8 = CONCAT31(local_8._1_3_,3);
    local_18 = uVar4 | 4;
    pFStack_70 = (FString *)0x10196257;
    FString::FString(local_3c,(ushort *)L"L2UI_CH3.Button.BigButton");
    local_8 = 4;
    uVar4 = uVar4 | 0xc;
    pFStack_70 = local_30;
    local_18 = uVar4;
    uVar1 = FUN_10006980(local_3c);
  }
  *(undefined4 *)(param_1 + 0x1d4) = uVar1;
  local_8 = 3;
  if ((uVar4 & 8) != 0) {
    uVar4 = uVar4 & 0xfffffff7;
    local_18 = uVar4;
    FString::~FString(local_3c);
  }
  local_8 = 0;
  if ((uVar4 & 4) != 0) {
    local_18 = uVar4 & 0xfffffffb;
    FString::~FString(local_30);
  }
  *(undefined4 *)(*(int *)(param_1 + 0x1d4) + 0x1cc) = 0x100a;
  pFStack_70 = (FString *)0x0;
  (**(code **)(**(int **)(param_1 + 0x1d4) + 0xc0))(0xd,0x2d,0x60,0x17,0);
  uVar1 = FUN_10060d40(*(undefined4 *)(param_1 + 0x1d4),2);
  FUN_1005c1e0(uVar1);
  FUN_10003cf0(0xa1);
  ExceptionList = local_10;
  return 1;
}


// ==== 10196360 FUN_10196360 depth=0 from=raiz callees=FUN_10002f40@10002f40 FUN_10021df0@10021df0 FUN_100212e0@100212e0 FUN_10021a00@10021a00 FUN_101c19e0@101c19e0
// strings: 

undefined4 __thiscall FUN_10196360(int param_1,int param_2)

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
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_102160f0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  uVar1 = FUN_101c19e0();
  uVar2 = FUN_101c19e0(uVar1);
  FUN_10021df0(*(undefined4 *)(param_1 + 0x80),*(undefined4 *)(param_1 + 0x84),uVar2,uVar1);
  FUN_10002f40(*(undefined4 *)(param_1 + 0x80),*(undefined4 *)(param_1 + 0x84));
  uVar9 = 1;
  uVar8 = 0xff;
  uVar1 = *(undefined4 *)(param_1 + 0x1cc);
  uVar7 = 0x8a;
  uVar6 = 0x78;
  uVar5 = 0;
  uVar4 = 0;
  uVar2 = FUN_101c19e0(0,0,0x78,0x8a,uVar1,0xff,1);
  uVar3 = FUN_101c19e0(uVar2);
  FUN_10021a00(0,0,uVar3,uVar2,uVar4,uVar5,uVar6,uVar7,uVar1,uVar8,uVar9);
  *(undefined4 *)(param_2 + 0x38) = 0;
  *(undefined4 *)(param_2 + 0x3c) = 0;
  FUN_100212e0();
  ExceptionList = local_10;
  return 1;
}


// ==== 10196470 FUN_10196470 depth=0 from=raiz callees=CORE.DLL::UObject::GetFullName@EXTERNAL:000001ae CORE.DLL::UObject::IsA@EXTERNAL:00000198 CORE.DLL::UObject::GetName@EXTERNAL:000001ad CORE.DLL::FOutputDevice::Logf@EXTERNAL:000001ac
// strings: 1022fb70=NULL | 1022fb40=Cast of %s to %s failed | 

UObject * FUN_10196470(UObject *param_1)

{
  int iVar1;
  
  if (param_1 != (UObject *)0x0) {
    iVar1 = UObject::IsA(param_1,(UClass *)&DAT_103ab4e0);
    if (iVar1 != 0) {
      return param_1;
    }
    UObject::GetFullName(param_1,(ushort *)0x0);
  }
  UObject::GetName((UObject *)&DAT_103ab4e0);
  FOutputDevice::Logf(*(FOutputDevice **)GError_exref,(ushort *)*(FOutputDevice **)GError_exref);
  return param_1;
}


// ==== 101964d0 FUN_101964d0 depth=0 from=raiz callees=FUN_10196470@10196470
// strings: 

void __fastcall FUN_101964d0(int param_1)

{
  int *piVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10216110;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  piVar1 = (int *)FUN_10196470(*(undefined4 *)(*(int *)(*(int *)(param_1 + 0xb8) + 0xc) + 4));
  (**(code **)(*piVar1 + 0x200))();
  ExceptionList = local_10;
  return;
}


// ==== 10196570 FUN_10196570 depth=0 from=raiz callees=FUN_10196470@10196470
// strings: 

void __fastcall FUN_10196570(int param_1)

{
  int *piVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10216130;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  piVar1 = (int *)FUN_10196470(*(undefined4 *)(*(int *)(*(int *)(param_1 + 0xb8) + 0xc) + 4));
  (**(code **)(*piVar1 + 0x204))();
  ExceptionList = local_10;
  return;
}


// ==== 10196610 FUN_10196610 depth=0 from=raiz callees=FUN_10061fa0@10061fa0
// strings: 

undefined4 * __fastcall FUN_10196610(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10216158;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_10061fa0(DAT_103554c4 ^ (uint)&stack0xffffffec);
  *param_1 = NCPawnCreateFunctionWnd::vftable;
  ExceptionList = local_c;
  return param_1;
}


// ==== 10196670 FUN_10196670 depth=0 from=raiz callees=CORE.DLL::UObject::ConditionalDestroy@EXTERNAL:00000187 FUN_10002910@10002910
// strings: 

void __fastcall FUN_10196670(UObject *param_1)

{
  uint uVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_10216188;
  local_c = ExceptionList;
  uVar1 = DAT_103554c4 ^ (uint)&stack0xffffffec;
  ExceptionList = &local_c;
  *(undefined ***)param_1 = NCPawnCreateFunctionWnd::vftable;
  local_4 = 0;
  UObject::ConditionalDestroy(param_1);
  local_4 = 0xffffffff;
  FUN_10002910(uVar1);
  ExceptionList = local_c;
  return;
}


// ==== 101966d0 FUN_101966d0 depth=0 from=raiz callees=CORE.DLL::UObject::operator_delete@EXTERNAL:00000188 FUN_10196670@10196670
// strings: 

void * __thiscall FUN_101966d0(void *param_1,byte param_2)

{
  FUN_10196670();
  if ((param_2 & 1) != 0) {
    UObject::operator_delete(param_1,0x1d8);
  }
  return param_1;
}


// ==== 10196c30 FUN_10196c30 depth=0 from=raiz callees=
// strings: 

int __fastcall FUN_10196c30(int param_1)

{
  return *(int *)(param_1 + 0x1f8) + (*(int *)(param_1 + 500) + *(int *)(param_1 + 0x1f0) * 2) * 2;
}


// ==== 10196db0 FUN_10196db0 depth=0 from=raiz callees=FUN_100570d0@100570d0
// strings: 

bool __thiscall FUN_10196db0(int *param_1,int param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = FUN_100570d0(param_2,param_3,param_4);
  if (iVar1 != 0) {
    return true;
  }
  if (param_2 == 0x501) {
    if (param_3 == 0x100d) {
      iVar1 = (**(code **)(*param_1 + 500))(param_4);
      return iVar1 != 0;
    }
    if (param_3 == 0x100e) {
      iVar1 = (**(code **)(*param_1 + 0x1f8))(param_4);
      return iVar1 != 0;
    }
    if (param_3 == 0x1010) {
      iVar1 = (**(code **)(*param_1 + 0x1fc))();
      return iVar1 != 0;
    }
  }
  return false;
}


// ==== 10196e50 FUN_10196e50 depth=0 from=raiz callees=
// strings: 

void __fastcall FUN_10196e50(int param_1)

{
  (**(code **)(**(int **)(param_1 + 0x1cc) + 0x174))();
                    /* WARNING: Could not recover jumptable at 0x10196e72. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(param_1 + 0x1d0) + 0x174))();
  return;
}


// ==== 10196ea0 FUN_10196ea0 depth=0 from=raiz callees=FUN_101454e0@101454e0
// strings: 

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_10196ea0(void)

{
  if (((DAT_103663bc != 0) && (*(int *)(DAT_103663bc + 0x50) != 0)) &&
     (*(int *)(*(int *)(DAT_103663bc + 0x50) + 0x58) != 0)) {
    (**(code **)(**(int **)(*(int *)(DAT_103663bc + 0x50) + 0x58) + 0xe0))(_DAT_1026d3ec,0);
  }
  FUN_101454e0();
  return 1;
}


// ==== 10196ef0 FUN_10196ef0 depth=0 from=raiz callees=FUN_10196c50@10196c50 FUN_1005ff00@1005ff00
// strings: 

void FUN_10196ef0(void)

{
  FUN_1005ff00();
  FUN_10196c50();
  return;
}


// ==== 10196ff0 FUN_10196ff0 depth=0 from=raiz callees=FUN_10196f10@10196f10 FUN_1005fe50@1005fe50
// strings: 

void FUN_10196ff0(void)

{
  FUN_1005fe50();
  FUN_10196f10(0);
  return;
}


// ==== 10197010 FUN_10197010 depth=0 from=raiz callees=FUN_10196c30@10196c30
// strings: 

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_10197010(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_10196c30();
  if (param_1 != 0) {
    (**(code **)(*DAT_103663bc + 0x5ec))(uVar1,_DAT_10249830);
    return 1;
  }
  (**(code **)(*DAT_103663bc + 0x5f0))(uVar1);
  return 1;
}


// ==== 10197060 FUN_10197060 depth=0 from=raiz callees=FUN_10196c30@10196c30
// strings: 

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_10197060(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_10196c30();
  if (param_1 != 0) {
    (**(code **)(*DAT_103663bc + 0x5ec))(uVar1,_DAT_10291b6c);
    return 1;
  }
  (**(code **)(*DAT_103663bc + 0x5f0))(uVar1);
  return 1;
}


// ==== 10198500 FUN_10198500 depth=0 from=raiz callees=KERNEL32.DLL::WideCharToMultiByte@EXTERNAL:00000225 CORE.DLL::FString::operator*@EXTERNAL:0000019f FUN_10196d00@10196d00 __security_check_cookie@101c16c2
// strings: 

/* WARNING: Type propagation algorithm not settling */

void __thiscall FUN_10198500(int param_1,short *param_2)

{
  char cVar1;
  short sVar2;
  int iVar3;
  ushort *puVar4;
  LPCWSTR lpWideCharStr;
  char *pcVar5;
  short *psVar6;
  FString *this;
  short *psVar7;
  undefined4 *puVar8;
  CHAR *lpMultiByteStr;
  int cbMultiByte;
  LPCSTR lpDefaultChar;
  LPBOOL lpUsedDefaultChar;
  CHAR aCStack_324 [800];
  uint local_4;
  
  local_4 = DAT_103554c4 ^ (uint)aCStack_324;
  iVar3 = (**(code **)(**(int **)(param_1 + 0x1ec) + 0x1f8))();
  if (iVar3 == 0) {
    puVar8 = (undefined4 *)(*DAT_103663bc + 0x658);
    this = (FString *)(GL2GameData_exref + 0x25dac);
  }
  else {
    lpUsedDefaultChar = (LPBOOL)0x0;
    lpDefaultChar = (LPCSTR)0x0;
    cbMultiByte = 800;
    lpMultiByteStr = aCStack_324;
    iVar3 = -1;
    lpWideCharStr = (LPCWSTR)(**(code **)(**(int **)(param_1 + 0x1ec) + 0x1f8))();
    WideCharToMultiByte(0,0,lpWideCharStr,iVar3,lpMultiByteStr,cbMultiByte,lpDefaultChar,
                        lpUsedDefaultChar);
    pcVar5 = aCStack_324;
    do {
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    if ((pcVar5 == aCStack_324 + 1) ||
       ((int)((uint)(*(int *)GLanguageType_exref != 5) * 4 + 0xc) <
        (int)pcVar5 - (int)(aCStack_324 + 1))) {
      iVar3 = *DAT_103663bc;
      puVar4 = FString::operator*((FString *)(GL2GameData_exref + 0x25dac));
      (**(code **)(iVar3 + 0x658))(puVar4);
      (**(code **)(**(int **)(param_1 + 0x1ec) + 0x78))();
      goto LAB_101986e9;
    }
    psVar6 = (short *)(**(code **)(**(int **)(param_1 + 0x1ec) + 0x1f8))();
    psVar7 = param_2;
    do {
      sVar2 = *psVar6;
      *psVar7 = sVar2;
      psVar6 = psVar6 + 1;
      psVar7 = psVar7 + 1;
    } while (sVar2 != 0);
    iVar3 = *(int *)(*(int *)(param_1 + 0x1cc) + 0x2ec);
    *(int *)(param_2 + 0x18) = iVar3;
    if (iVar3 < 0) {
      puVar8 = (undefined4 *)(*DAT_103663bc + 0x658);
      this = (FString *)(GL2GameData_exref + 0x25e08);
    }
    else {
      iVar3 = FUN_10196d00();
      *(int *)(param_2 + 0x1a) = iVar3;
      if (iVar3 < 0) {
        puVar8 = (undefined4 *)(*DAT_103663bc + 0x658);
        this = (FString *)(GL2GameData_exref + 0x25e64);
      }
      else {
        iVar3 = *(int *)(*(int *)(param_1 + 0x1d4) + 0x2ec);
        *(int *)(param_2 + 0x1c) = iVar3;
        if (iVar3 < 0) {
          puVar8 = (undefined4 *)(*DAT_103663bc + 0x658);
          this = (FString *)(GL2GameData_exref + 0x25ec0);
        }
        else {
          iVar3 = *(int *)(*(int *)(param_1 + 0x1d8) + 0x2ec);
          *(int *)(param_2 + 0x2a) = iVar3;
          if (-1 < iVar3) goto LAB_101986e9;
          puVar8 = (undefined4 *)(*DAT_103663bc + 0x658);
          this = (FString *)(GL2GameData_exref + 0x261a0);
        }
      }
    }
  }
  puVar4 = FString::operator*(this);
  (*(code *)*puVar8)(puVar4);
LAB_101986e9:
  __security_check_cookie(local_4 ^ (uint)aCStack_324);
  return;
}


// ==== 10198b10 FUN_10198b10 depth=0 from=raiz callees=FUN_10142000@10142000 FUN_1016e320@1016e320 CORE.DLL::FString::operator*@EXTERNAL:0000019f FUN_10145750@10145750 FUN_10198500@10198500 __security_check_cookie@101c16c2
// strings: 

void __fastcall FUN_10198b10(int param_1)

{
  int iVar1;
  ushort *puVar2;
  undefined4 *puVar3;
  undefined4 auStack_cc [22];
  undefined4 uStack_74;
  ushort *puStack_70;
  ushort local_64 [30];
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  uint local_4;
  
  local_4 = DAT_103554c4 ^ (uint)local_64;
  puStack_70 = local_64;
  uStack_74 = 0x10198b32;
  iVar1 = FUN_10198500();
  if (iVar1 == 0) goto LAB_10198c3b;
  if (local_64[0] == 0) {
LAB_10198bbd:
    local_20 = *(undefined4 *)(param_1 + 0x1f8);
    local_24 = *(undefined4 *)(param_1 + 0x1ec);
    local_1c = *(undefined4 *)(param_1 + 0x204);
    iVar1 = *(int *)(param_1 + 0x1cc);
    local_14 = *(undefined4 *)(param_1 + 0x21c);
    local_28 = *(undefined4 *)(param_1 + 0x1e0);
    local_18 = *(undefined4 *)(param_1 + 0x210);
    local_c = *(undefined4 *)(iVar1 + 0x200);
    local_10 = *(undefined4 *)(iVar1 + 0x1fc);
    local_8 = *(undefined4 *)(iVar1 + 0x204);
    puVar2 = local_64;
    puVar3 = auStack_cc;
    for (iVar1 = 0x18; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar3 = *(undefined4 *)puVar2;
      puVar2 = puVar2 + 2;
      puVar3 = puVar3 + 1;
    }
    FUN_10142000();
  }
  else {
    puStack_70 = local_64;
    uStack_74 = 0x10198b52;
    iVar1 = FUN_10145750();
    if (iVar1 == 0) {
      puStack_70 = local_64;
      uStack_74 = 0x10198b66;
      iVar1 = FUN_1016e320();
      if (iVar1 != 0) goto LAB_10198bbd;
    }
    iVar1 = *DAT_103663bc;
    puStack_70 = (ushort *)0x10198b83;
    puStack_70 = FString::operator*((FString *)(GL2GameData_exref + 0x28a3c));
    uStack_74 = 0x10198b92;
    (**(code **)(iVar1 + 0x658))();
    uStack_74 = 0x10198ba8;
    (**(code **)(**(int **)(*(int *)(param_1 + 0x1cc) + 0x1ec) + 0x174))();
    uStack_74 = 0x10198bbb;
    (**(code **)(**(int **)(*(int *)(param_1 + 0x1cc) + 0x1ec) + 0x78))();
  }
LAB_10198c3b:
  __security_check_cookie(local_4 ^ (uint)local_64);
  return;
}


// ==== 10198c60 FUN_10198c60 depth=0 from=raiz callees=FUN_1004f590@1004f590 FUN_1004f7b0@1004f7b0 FUN_1004f5c0@1004f5c0 FUN_1004f740@1004f740
// strings: 10291d9c=_CHEST | 10291d9c=_CHEST | 

undefined4 __fastcall FUN_10198c60(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined *puVar6;
  undefined4 uVar7;
  void *pvStack_14;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10216348;
  local_c = ExceptionList;
  uVar4 = DAT_103554c4 ^ (uint)&stack0xffffffd0;
  ExceptionList = &local_c;
  *(uint *)(param_1 + 0x238) = (uint)(*(int *)(param_1 + 0x238) == 0);
  iVar1 = *(int *)(param_1 + 0x1cc);
  iVar2 = *(int *)(*(int *)(iVar1 + 0x1cc) + 0x2ec);
  iVar3 = *(int *)(*(int *)(iVar1 + 0x1d0) + 0x2ec);
  iVar1 = *(int *)(*(int *)(iVar1 + 0x1d4) + 0x2ec);
  FUN_1004f590(uVar4);
  local_4 = 0;
  if (*(int *)(param_1 + 0x238) == 0) {
    (**(code **)(**(int **)(param_1 + 0x230) + 0x13c))();
    (**(code **)(**(int **)(param_1 + 0x22c) + 0x138))();
    if (-1 < iVar2) {
      FUN_1004f740((&PTR_u_HUMAN_10352700)[iVar2]);
    }
    if (-1 < iVar1) {
      if (iVar3 == 0) {
        puVar6 = &DAT_10291d90;
LAB_10198dc8:
        FUN_1004f740(puVar6);
      }
      else if (iVar3 == 1) {
        puVar6 = &DAT_10291d88;
        goto LAB_10198dc8;
      }
      FUN_1004f740((&PTR_DAT_1035271c)[iVar1]);
      FUN_1004f740(L"_CHEST");
    }
    iVar1 = *DAT_103663bc;
    uVar7 = 1;
    uVar5 = FUN_1004f5c0(0);
    (**(code **)(iVar1 + 0x59c))(uVar5,uVar7);
    goto LAB_10198e14;
  }
  (**(code **)(**(int **)(param_1 + 0x230) + 0x138))();
  (**(code **)(**(int **)(param_1 + 0x22c) + 0x13c))();
  if (-1 < iVar2) {
    FUN_1004f740((&PTR_u_HUMAN_10352700)[iVar2]);
  }
  if (-1 < iVar1) {
    if (iVar3 == 0) {
      puVar6 = &DAT_10291d90;
LAB_10198d30:
      FUN_1004f740(puVar6);
    }
    else if (iVar3 == 1) {
      puVar6 = &DAT_10291d88;
      goto LAB_10198d30;
    }
    FUN_1004f740((&PTR_DAT_1035271c)[iVar1]);
    FUN_1004f740(L"_CHEST");
  }
  iVar1 = *DAT_103663bc;
  uVar7 = 0;
  uVar5 = FUN_1004f5c0(0);
  (**(code **)(iVar1 + 0x59c))(uVar5,uVar7);
LAB_10198e14:
  local_c = (void *)0xffffffff;
  FUN_1004f7b0();
  ExceptionList = pvStack_14;
  return 1;
}


// ==== 10199b80 FUN_10199b80 depth=0 from=raiz callees=FUN_10061fa0@10061fa0
// strings: 

undefined4 * __fastcall FUN_10199b80(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_102163f8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_10061fa0(DAT_103554c4 ^ (uint)&stack0xffffffec);
  *param_1 = NCPawnInfoWnd::vftable;
  param_1[0x73] = 0;
  *(undefined2 *)(param_1 + 0x75) = 0;
  ExceptionList = local_c;
  return param_1;
}


// ==== 10199c80 FUN_10199c80 depth=0 from=raiz callees=FUN_10061fa0@10061fa0
// strings: 

undefined4 * __fastcall FUN_10199c80(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10216458;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_10061fa0(DAT_103554c4 ^ (uint)&stack0xffffffec);
  *param_1 = NCPawnSetupWnd::vftable;
  param_1[0x73] = 0;
  param_1[0x74] = 0;
  param_1[0x75] = 0;
  param_1[0x79] = 0;
  param_1[0x7a] = 0;
  param_1[0x7b] = 0;
  param_1[0x7c] = 0xffffffff;
  param_1[0x7d] = 0xffffffff;
  param_1[0x7e] = 0xffffffff;
  param_1[0x7f] = 0xffffffff;
  param_1[0x80] = 0xffffffff;
  param_1[0x81] = 0xffffffff;
  param_1[0x82] = 0;
  ExceptionList = local_c;
  return param_1;
}


// ==== 1019a240 FUN_1019a240 depth=0 from=raiz callees=FUN_10002910@10002910 CORE.DLL::UObject::ConditionalDestroy@EXTERNAL:00000187
// strings: 

void __fastcall FUN_1019a240(UObject *param_1)

{
  uint uVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_102164e8;
  local_c = ExceptionList;
  uVar1 = DAT_103554c4 ^ (uint)&stack0xffffffec;
  ExceptionList = &local_c;
  *(undefined ***)param_1 = NCPawnCreateWnd::vftable;
  local_4 = 0;
  UObject::ConditionalDestroy(param_1);
  local_4 = 0xffffffff;
  FUN_10002910(uVar1);
  ExceptionList = local_c;
  return;
}


// ==== 1019a2a0 FUN_1019a2a0 depth=0 from=raiz callees=FUN_1019a240@1019a240 CORE.DLL::UObject::operator_delete@EXTERNAL:00000188
// strings: 

void * __thiscall FUN_1019a2a0(void *param_1,byte param_2)

{
  FUN_1019a240();
  if ((param_2 & 1) != 0) {
    UObject::operator_delete(param_1,0x23c);
  }
  return param_1;
}


// ==== 1019a2d0 FUN_1019a2d0 depth=0 from=raiz callees=CORE.DLL::FName::FName@EXTERNAL:0000019c FUN_10061b40@10061b40 FUN_10060d40@10060d40 FUN_10199b80@10199b80 CORE.DLL::FString::FString@EXTERNAL:000001b0 FUN_10006980@10006980 CORE.DLL::UObject::GetTransientPackage@EXTERNAL:0000019b FUN_10199c80@10199c80 FUN_10196610@10196610 CORE.DLL::FString::~FString@EXTERNAL:00000197 FUN_10006d80@10006d80 CORE.DLL::UObject::StaticAllocateObject@EXTERNAL:000001b1 FUN_1005c1e0@1005c1e0
// strings: 10292730=l2ui.LobbyWnd.left_click | 10292708=l2ui.LobbyWnd.left | 102926c8=l2ui.LobbyWnd.right_click | 102926a0=l2ui.LobbyWnd.right | 1029265c=l2ui.LobbyWnd.zoomin_click | 10292630=l2ui.LobbyWnd.zoomin | 102925f8=l2ui.LobbyWnd.zoomout_click | 102925cc=l2ui.LobbyWnd.zoomout | 

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __fastcall FUN_1019a2d0(int param_1)

{
  UObject *pUVar1;
  int *piVar2;
  undefined4 uVar3;
  UPackage *pUVar4;
  byte bVar5;
  uint uVar6;
  undefined2 in_FPUControlWord;
  void *pvVar7;
  UPackage **ppUStack_124;
  undefined4 *puStack_120;
  undefined8 uStack_fc;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined *puStack_e8;
  UPackage *pUStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  uint uStack_d8;
  undefined8 uStack_d4;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined *puStack_c0;
  UPackage *pUStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  uint uStack_b0;
  undefined8 uStack_ac;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined *puStack_98;
  UPackage *pUStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  uint uStack_88;
  undefined8 uStack_84;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined *puStack_6c;
  UPackage *pUStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 local_38;
  undefined4 local_34;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_102165e5;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_34 = 0;
  FUN_10061b40();
  *(undefined4 *)(param_1 + 0x238) = 0;
  uStack_54 = 0x1019a315;
  FName::FName((FName *)&local_38,0);
  pUStack_68 = UObject::GetTransientPackage();
  uStack_58 = *(undefined4 *)GError_exref;
  uStack_54 = 0;
  uStack_5c = 0;
  uStack_60 = 0;
  uStack_64 = local_38;
  puStack_6c = &DAT_103aafb0;
  uStack_70 = 0x1019a33d;
  pUVar1 = UObject::StaticAllocateObject();
  if (pUVar1 == (UObject *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = (int *)FUN_10199c80();
  }
  uStack_54 = 0;
  uStack_58 = 0;
  uStack_5c = 0xcd;
  uStack_60 = 0x100;
  *(int **)(param_1 + 0x1cc) = piVar2;
  uStack_64 = 0x1b;
  pUStack_68 = (UPackage *)0x18;
  puStack_6c = (undefined *)0x1019a373;
  (**(code **)(*piVar2 + 0xc0))();
  uStack_70 = *(undefined4 *)(param_1 + 0x1cc);
  puStack_6c = (undefined *)0x4002;
  uStack_74 = 0x1019a386;
  puStack_6c = (undefined *)FUN_10060d40();
  uStack_70 = 0x1019a392;
  FUN_1005c1e0();
  puStack_6c = (undefined *)0x9e;
  uStack_70 = 0x1019a3a7;
  (**(code **)(**(int **)(param_1 + 0x1cc) + 0x164))();
  uStack_70 = 0x1b;
  uStack_74 = 0x18;
  uStack_78 = 1;
  (**(code **)(**(int **)(param_1 + 0x1cc) + 0xd0))();
  uStack_84 = CONCAT44(0x1019a3d1,(UPackage *)uStack_84);
  FName::FName((FName *)&uStack_64,0);
  pUStack_94 = UObject::GetTransientPackage();
  uStack_84 = (ulonglong)*(uint *)GError_exref;
  uStack_88 = 0;
  uStack_8c = 0;
  uStack_90 = uStack_64;
  puStack_98 = &DAT_103aaa80;
  uStack_9c = 0x1019a3f1;
  pUVar1 = UObject::StaticAllocateObject();
  if (pUVar1 == (UObject *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = (int *)FUN_10199b80();
  }
  uStack_84 = 0;
  uStack_88 = 0xcd;
  uStack_8c = 0x100;
  *(int **)(param_1 + 0x1d0) = piVar2;
  uStack_90 = 0xf9;
  pUStack_94 = (UPackage *)0x18;
  puStack_98 = (undefined *)0x1019a42c;
  (**(code **)(*piVar2 + 0xc0))();
  uStack_9c = *(undefined4 *)(param_1 + 0x1d0);
  puStack_98 = (undefined *)0x2;
  uStack_a0 = 0x1019a43c;
  puStack_98 = (undefined *)FUN_10060d40();
  uStack_9c = 0x1019a448;
  FUN_1005c1e0();
  puStack_98 = (undefined *)0xf9;
  uStack_9c = 0x18;
  uStack_a0 = 1;
  (**(code **)(**(int **)(param_1 + 0x1d0) + 0xd0))();
  uStack_ac = CONCAT44(0x1019a472,(UPackage *)uStack_ac);
  FName::FName((FName *)&uStack_8c,0);
  pUStack_bc = UObject::GetTransientPackage();
  uStack_ac = (ulonglong)*(uint *)GError_exref;
  uStack_b0 = 0;
  uStack_b4 = 0;
  uStack_b8 = uStack_8c;
  puStack_c0 = &DAT_10357da0;
  uStack_c4 = 0x1019a492;
  pUVar1 = UObject::StaticAllocateObject();
  if (pUVar1 == (UObject *)0x0) {
    uVar3 = 0;
  }
  else {
    uStack_ac = CONCAT44(0x1019a4aa,(UPackage *)uStack_ac);
    FString::FString((FString *)&uStack_78,(ushort *)L"l2ui.LobbyWnd.left_click");
    uStack_58 = 0;
    uStack_88 = 1;
    uStack_ac = CONCAT44(0x1019a4c9,(UPackage *)uStack_ac);
    FString::FString((FString *)&uStack_84,(ushort *)L"l2ui.LobbyWnd.left");
    uStack_58 = 1;
    uStack_ac = CONCAT44(&uStack_78,&uStack_84);
    uStack_88 = 3;
    uStack_b0 = 0x1019a4ec;
    uVar3 = FUN_10006d80();
  }
  *(undefined4 *)(param_1 + 0x224) = uVar3;
  uStack_58 = 0;
  uVar6 = uStack_88;
  if ((uStack_88 & 2) != 0) {
    uVar6 = uStack_88 & 0xfffffffd;
    uStack_88 = uVar6;
    FString::~FString((FString *)&uStack_84);
  }
  uStack_58 = 0xffffffff;
  if ((uVar6 & 1) != 0) {
    uStack_88 = uVar6 & 0xfffffffe;
    FString::~FString((FString *)&uStack_78);
  }
  *(undefined4 *)(*(int *)(param_1 + 0x224) + 0x1cc) = 0x100d;
  uStack_ac = 0;
  uStack_84._0_4_ = (UPackage *)(longlong)ROUND(*(float *)(param_1 + 0x8c) - (float)_DAT_10234778);
  uStack_b0 = 0x2c;
  uStack_b4 = 0x2c;
  uStack_b8 = (UPackage *)uStack_84;
  uStack_8c = CONCAT22(uStack_8c._2_2_,in_FPUControlWord);
  uStack_84 = (ulonglong)
              ROUND(*(float *)(param_1 + 0x88) * (float)_DAT_1022f270 - (float)_DAT_10292700);
  pUStack_bc = (UPackage *)uStack_84;
  puStack_c0 = (undefined *)0x1019a5c4;
  (**(code **)(**(int **)(param_1 + 0x224) + 0xc0))();
  uStack_c4 = *(undefined4 *)(param_1 + 0x224);
  puStack_c0 = (undefined *)0x2;
  uStack_c8 = 0x1019a5d4;
  puStack_c0 = (undefined *)FUN_10060d40();
  uStack_c4 = 0x1019a5e0;
  FUN_1005c1e0();
  puStack_c0 = (undefined *)0x1019a5f0;
  (**(code **)(**(int **)(param_1 + 0x224) + 0x13c))();
  puStack_c0 = (undefined *)0xffffffc8;
  uStack_c4 = 0xffffffbe;
  uStack_c8 = 8;
  (**(code **)(**(int **)(param_1 + 0x224) + 0xd0))();
  uStack_d4 = CONCAT44(0x1019a61a,(undefined4)uStack_d4);
  FName::FName((FName *)&uStack_ac,0);
  pUStack_e4 = UObject::GetTransientPackage();
  uStack_d4 = (ulonglong)*(uint *)GError_exref;
  uStack_d8 = 0;
  uStack_dc = 0;
  uStack_e0 = (UPackage *)uStack_ac;
  puStack_e8 = &DAT_10357da0;
  uStack_ec = 0x1019a63a;
  pUVar1 = UObject::StaticAllocateObject();
  if (pUVar1 == (UObject *)0x0) {
    uVar3 = 0;
  }
  else {
    uStack_d4 = CONCAT44(0x1019a652,(undefined4)uStack_d4);
    FString::FString((FString *)&pUStack_94,(ushort *)L"l2ui.LobbyWnd.right_click");
    uStack_84 = CONCAT44(2,(UPackage *)uStack_84);
    uStack_b0 = uStack_b0 | 4;
    uStack_d4 = CONCAT44(0x1019a66e,(undefined4)uStack_d4);
    FString::FString((FString *)&uStack_a0,(ushort *)L"l2ui.LobbyWnd.right");
    uStack_84 = CONCAT44(3,(UPackage *)uStack_84);
    uStack_b0 = uStack_b0 | 8;
    uStack_d4 = CONCAT44(&pUStack_94,&uStack_a0);
    uStack_d8 = 0x1019a68e;
    uVar3 = FUN_10006d80();
  }
  *(undefined4 *)(param_1 + 0x228) = uVar3;
  uStack_84 = CONCAT44(2,(UPackage *)uStack_84);
  uVar6 = uStack_b0;
  if ((uStack_b0 & 8) != 0) {
    uVar6 = uStack_b0 & 0xfffffff7;
    uStack_b0 = uVar6;
    FString::~FString((FString *)&uStack_a0);
  }
  uStack_84 = CONCAT44(0xffffffff,(UPackage *)uStack_84);
  if ((uVar6 & 4) != 0) {
    uStack_b0 = uVar6 & 0xfffffffb;
    FString::~FString((FString *)&pUStack_94);
  }
  *(undefined4 *)(*(int *)(param_1 + 0x228) + 0x1cc) = 0x100e;
  uStack_d4 = 0;
  uStack_ac._0_4_ = (UPackage *)(longlong)ROUND(*(float *)(param_1 + 0x8c) - (float)_DAT_10234778);
  uStack_d8 = 0x2c;
  uStack_dc = 0x2c;
  uStack_e0 = (UPackage *)uStack_ac;
  uStack_b4 = CONCAT22(uStack_b4._2_2_,in_FPUControlWord);
  uStack_ac = (ulonglong)
              ROUND(*(float *)(param_1 + 0x88) * (float)_DAT_1022f270 + (float)_DAT_10292698);
  pUStack_e4 = (UPackage *)uStack_ac;
  puStack_e8 = (undefined *)0x1019a766;
  (**(code **)(**(int **)(param_1 + 0x228) + 0xc0))();
  uStack_ec = *(undefined4 *)(param_1 + 0x228);
  puStack_e8 = (undefined *)0x2;
  uStack_f0 = 0x1019a776;
  puStack_e8 = (undefined *)FUN_10060d40();
  uStack_ec = 0x1019a782;
  FUN_1005c1e0();
  puStack_e8 = (undefined *)0x1019a792;
  (**(code **)(**(int **)(param_1 + 0x228) + 0x13c))();
  puStack_e8 = (undefined *)0xffffffc8;
  uStack_ec = 0x42;
  uStack_f0 = 8;
  (**(code **)(**(int **)(param_1 + 0x228) + 0xd0))();
  uStack_fc = CONCAT44(0x1019a7bc,(undefined4)uStack_fc);
  FName::FName((FName *)&uStack_d4,0);
  UObject::GetTransientPackage();
  uStack_fc = (ulonglong)*(uint *)GError_exref;
  pUVar1 = UObject::StaticAllocateObject();
  if (pUVar1 == (UObject *)0x0) {
    uVar3 = 0;
  }
  else {
    uStack_fc = CONCAT44(0x1019a7f4,(undefined4)uStack_fc);
    FString::FString((FString *)&uStack_c8,(ushort *)L"l2ui.LobbyWnd.zoomin_click");
    uStack_ac = CONCAT44(4,(UPackage *)uStack_ac);
    uStack_d8 = uStack_d8 | 0x10;
    uStack_fc = CONCAT44(0x1019a810,(undefined4)uStack_fc);
    FString::FString((FString *)&pUStack_bc,(ushort *)L"l2ui.LobbyWnd.zoomin");
    uStack_ac = CONCAT44(5,(UPackage *)uStack_ac);
    uStack_d8 = uStack_d8 | 0x20;
    uStack_fc = CONCAT44(&uStack_c8,&pUStack_bc);
    uVar3 = FUN_10006980();
  }
  *(undefined4 *)(param_1 + 0x22c) = uVar3;
  uStack_ac = CONCAT44(4,(UPackage *)uStack_ac);
  uVar6 = uStack_d8;
  if ((uStack_d8 & 0x20) != 0) {
    uVar6 = uStack_d8 & 0xffffffdf;
    uStack_d8 = uVar6;
    FString::~FString((FString *)&pUStack_bc);
  }
  uStack_ac = CONCAT44(0xffffffff,(UPackage *)uStack_ac);
  if ((uVar6 & 0x10) != 0) {
    uStack_d8 = uVar6 & 0xffffffef;
    FString::~FString((FString *)&uStack_c8);
  }
  *(undefined4 *)(*(int *)(param_1 + 0x22c) + 0x1cc) = 0x1010;
  uStack_fc = 0;
  bVar5 = 0x2c;
  uStack_dc = CONCAT22(uStack_dc._2_2_,in_FPUControlWord);
  uStack_d4 = (ulonglong)
              ROUND(*(float *)(param_1 + 0x88) * (float)_DAT_1022f270 - (float)_DAT_1023c288);
  (**(code **)(**(int **)(param_1 + 0x22c) + 0xc0))();
  FUN_10060d40();
  FUN_1005c1e0();
  (**(code **)(**(int **)(param_1 + 0x22c) + 0x13c))();
  (**(code **)(**(int **)(param_1 + 0x22c) + 0xd0))();
  puStack_120 = (undefined4 *)0x1019a95b;
  FName::FName((FName *)&uStack_fc,0);
  pUVar4 = UObject::GetTransientPackage();
  ppUStack_124 = *(UPackage ***)GError_exref;
  puStack_120 = (undefined4 *)0x0;
  pUVar1 = UObject::StaticAllocateObject(&DAT_10357870,pUVar4,(undefined4)uStack_fc,0,0);
  if (pUVar1 == (UObject *)0x0) {
    uVar3 = 0;
  }
  else {
    puStack_120 = (undefined4 *)0x1019a993;
    FString::FString((FString *)&uStack_f0,(ushort *)L"l2ui.LobbyWnd.zoomout_click");
    uStack_d4 = CONCAT44(6,(undefined4)uStack_d4);
    puStack_120 = (undefined4 *)0x1019a9af;
    FString::FString((FString *)&pUStack_e4,(ushort *)L"l2ui.LobbyWnd.zoomout");
    uStack_d4 = CONCAT44(7,(undefined4)uStack_d4);
    bVar5 = 0xec;
    puStack_120 = &uStack_f0;
    ppUStack_124 = &pUStack_e4;
    uVar3 = FUN_10006980();
  }
  *(undefined4 *)(param_1 + 0x230) = uVar3;
  uStack_d4 = CONCAT44(6,(undefined4)uStack_d4);
  if ((char)bVar5 < '\0') {
    bVar5 = bVar5 & 0x7f;
    FString::~FString((FString *)&pUStack_e4);
  }
  uStack_d4 = CONCAT44(0xffffffff,(undefined4)uStack_d4);
  if ((bVar5 & 0x40) != 0) {
    FString::~FString((FString *)&uStack_f0);
  }
  *(undefined4 *)(*(int *)(param_1 + 0x230) + 0x1cc) = 0x1010;
  puStack_120 = (undefined4 *)0x0;
  ppUStack_124 = (UPackage **)0x0;
  uStack_fc._0_4_ = (undefined4)(longlong)ROUND(*(float *)(param_1 + 0x8c) - (float)_DAT_10234778);
  uVar3 = (undefined4)uStack_fc;
  pvVar7 = (void *)0x2c;
  uStack_fc = (ulonglong)
              ROUND(*(float *)(param_1 + 0x88) * (float)_DAT_1022f270 - (float)_DAT_1023c288);
  (**(code **)(**(int **)(param_1 + 0x230) + 0xc0))((undefined4)uStack_fc,uVar3,0x2c);
  uVar3 = FUN_10060d40(*(undefined4 *)(param_1 + 0x230),2);
  FUN_1005c1e0(uVar3);
  (**(code **)(**(int **)(param_1 + 0x230) + 0x13c))();
  (**(code **)(**(int **)(param_1 + 0x230) + 0xd0))(8,0,0xffffffc8);
  FName::FName((FName *)&ppUStack_124,0);
  pUVar4 = UObject::GetTransientPackage();
  pUVar1 = UObject::StaticAllocateObject
                     (&DAT_103aa020,pUVar4,ppUStack_124,0,0,*(undefined4 *)GError_exref,0,0);
  if (pUVar1 == (UObject *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = (int *)FUN_10196610();
  }
  *(int **)(param_1 + 0x234) = piVar2;
  (**(code **)(*piVar2 + 0xc0))
            (*(int *)GSEKScreenX_exref + -0x9a,*(int *)GSEKScreenY_exref + -200,0x78,0x8a,0,0,3);
  uVar3 = FUN_10060d40(*(undefined4 *)(param_1 + 0x234),2);
  FUN_1005c1e0(uVar3);
  (**(code **)(**(int **)(param_1 + 0x234) + 0xd0))(9,0xffffffde,0xfffffff6);
  ExceptionList = pvVar7;
  return 1;
}


// ==== 1019c630 FUN_1019c630 depth=0 from=raiz callees=FUN_10032db0@10032db0
// strings: 

undefined4 FUN_1019c630(void)

{
  FUN_10032db0();
  return 1;
}


// ==== 101a82e0 FUN_101a82e0 depth=0 from=raiz callees=FUN_10034b20@10034b20
// strings: 

bool __thiscall FUN_101a82e0(int *param_1,int param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = FUN_10034b20(param_2,param_3,param_4);
  if (iVar1 != 0) {
    return true;
  }
  if ((param_2 == 0x501) && (param_3 == 0xf021)) {
    iVar1 = (**(code **)(*param_1 + 0x208))(param_4);
    return iVar1 != 0;
  }
  return false;
}


// ==== 101a8340 FUN_101a8340 depth=0 from=raiz callees=FUN_100570d0@100570d0
// strings: 

bool __thiscall FUN_101a8340(int *param_1,int param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = FUN_100570d0(param_2,param_3,param_4);
  if (iVar1 != 0) {
    return true;
  }
  if (param_2 == 0x501) {
    if (param_3 == 0xf007) {
      iVar1 = (**(code **)(*param_1 + 500))();
      return iVar1 != 0;
    }
    if (param_3 == 0xf017) {
      iVar1 = (**(code **)(*param_1 + 0x1f8))();
      return iVar1 != 0;
    }
    if (param_3 == 0xf020) {
      iVar1 = (**(code **)(*param_1 + 0x1fc))();
      return iVar1 != 0;
    }
    if (param_3 == 0xf018) {
      iVar1 = (**(code **)(*param_1 + 0x200))(param_4);
      return iVar1 != 0;
    }
  }
  return false;
}


// ==== 101a8410 FUN_101a8410 depth=0 from=raiz callees=FUN_10061e90@10061e90
// strings: 

undefined4 __fastcall FUN_101a8410(int param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10217790;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if (*(int *)(param_1 + 0x1d0) != 0) {
    *(undefined4 *)(param_1 + 0x1d0) = 0;
  }
  if (*(int *)(param_1 + 0x1d4) != 0) {
    *(undefined4 *)(param_1 + 0x1d4) = 0;
  }
  if (*(int *)(param_1 + 0x1d8) != 0) {
    *(undefined4 *)(param_1 + 0x1d8) = 0;
  }
  if (*(int *)(param_1 + 0x1dc) != 0) {
    *(undefined4 *)(param_1 + 0x1dc) = 0;
  }
  FUN_10061e90();
  ExceptionList = local_10;
  return 1;
}


// ==== 101a86c0 FUN_101a86c0 depth=0 from=raiz callees=FUN_100364c0@100364c0
// strings: 

void __fastcall FUN_101a86c0(int param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_102177b0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_100364c0();
  *(undefined4 *)(param_1 + 0x1e0) = 0;
  *(undefined4 *)(param_1 + 0x1e4) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x1e8) = 0;
  ExceptionList = local_10;
  return;
}


// ==== 101a8760 FUN_101a8760 depth=0 from=raiz callees=
// strings: 

undefined4 __fastcall FUN_101a8760(int *param_1)

{
  (**(code **)(*param_1 + 500))();
  return 1;
}


// ==== 101a8780 FUN_101a8780 depth=0 from=raiz callees=
// strings: 

undefined4 __thiscall FUN_101a8780(int param_1,int param_2)

{
  if (param_2 == 0xf019) {
    *(undefined4 *)(param_1 + 0x1f0) = 0;
  }
  return 1;
}


// ==== 101a87a0 FUN_101a87a0 depth=0 from=raiz callees=
// strings: 

undefined4 FUN_101a87a0(uint param_1)

{
  uint uVar1;
  bool bVar2;
  
  uVar1 = param_1 & 0x80000003;
  bVar2 = uVar1 == 0;
  if ((int)uVar1 < 0) {
    bVar2 = (uVar1 - 1 | 0xfffffffc) == 0xffffffff;
  }
  if (((!bVar2) || (param_1 == ((int)param_1 / 100) * 100)) &&
     (param_1 != ((int)param_1 / 400) * 400)) {
    return 0;
  }
  return 1;
}


// ==== 101a8800 FUN_101a8800 depth=0 from=raiz callees=FUN_101a87a0@101a87a0
// strings: 

int FUN_101a8800(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  iVar2 = 1;
  if (0 < param_1) {
    do {
      iVar1 = FUN_101a87a0(iVar2);
      if (iVar1 == 0) {
        iVar3 = iVar3 + 0x16d;
      }
      else {
        iVar3 = iVar3 + 0x16e;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 <= param_1);
  }
  return iVar3;
}


// ==== 101a8840 FUN_101a8840 depth=0 from=raiz callees=FUN_101a87a0@101a87a0
// strings: 

int FUN_101a8840(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  iVar1 = FUN_101a87a0(param_1);
  iVar2 = 1;
  if (1 < param_2) {
    do {
      if ((((iVar2 == 1) || (iVar2 == 3)) || (iVar2 == 5)) ||
         (((iVar2 == 7 || (iVar2 == 8)) || ((iVar2 == 10 || (iVar2 == 0xc)))))) {
        iVar3 = iVar3 + 0x1f;
      }
      else if (iVar2 == 2) {
        iVar3 = iVar3 + (iVar1 != 0) + 0x1c;
      }
      else {
        iVar3 = iVar3 + 0x1e;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < param_2);
  }
  return iVar3;
}


// ==== 101a88b0 FUN_101a88b0 depth=0 from=raiz callees=
// strings: 

int FUN_101a88b0(int param_1,int param_2)

{
  if (1 < param_1) {
    return param_1 * 0x18 + -0x18 + param_2;
  }
  return param_2;
}


// ==== 101a88e0 FUN_101a88e0 depth=0 from=raiz callees=FUN_101a8840@101a8840 FUN_101a8800@101a8800 FUN_101a88b0@101a88b0 CORE.DLL::appLocalTime@EXTERNAL:000000c6
// strings: 

int FUN_101a88e0(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  int local_4;
  
  appLocalTime(&local_10,&local_14,&local_8,&local_c,&local_4);
  iVar1 = FUN_101a8840(local_10,local_14 + -1);
  iVar2 = FUN_101a8800(local_10 + -1);
  iVar3 = FUN_101a88b0(local_8,local_c);
  return iVar3 + iVar1 + iVar2;
}


// ==== 101a8940 FUN_101a8940 depth=0 from=raiz callees=FUN_101a88e0@101a88e0
// strings: 102959f4=s_info.ini | 1025ae8c=Time | 1025ae98=Date | 

bool FUN_101a8940(void)

{
  int iVar1;
  wchar_t *pwVar2;
  undefined1 local_4 [4];
  
  pwVar2 = L"Date";
  iVar1 = (**(code **)(**(int **)GConfig_exref + 4))(L"Date",L"Time",local_4,L"s_info.ini");
  if (iVar1 != 0) {
    iVar1 = FUN_101a88e0();
    return (int)(pwVar2 + 6) < iVar1;
  }
  return true;
}


// ==== 101a8a60 FUN_101a8a60 depth=0 from=raiz callees=FUN_101a88e0@101a88e0
// strings: 102959f4=s_info.ini | 1025ae8c=Time | 1025ae98=Date | 

void __fastcall FUN_101a8a60(int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 500) != 0) {
    uVar1 = FUN_101a88e0();
    (**(code **)(**(int **)GConfig_exref + 0x28))(L"Date",L"Time",uVar1,L"s_info.ini");
    *(undefined4 *)(param_1 + 500) = 0;
  }
  return;
}


// ==== 101a8b40 FUN_101a8b40 depth=0 from=raiz callees=FUN_101c19e0@101c19e0 FUN_10002f40@10002f40 FUN_100212e0@100212e0 FUN_10021a00@10021a00 FUN_10021df0@10021df0
// strings: 

undefined4 __thiscall FUN_101a8b40(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_102177f0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  uVar2 = FUN_101c19e0();
  uVar3 = FUN_101c19e0(uVar2);
  FUN_10021df0(*(undefined4 *)(param_1 + 0x80),*(undefined4 *)(param_1 + 0x84),uVar3,uVar2);
  FUN_10002f40(*(undefined4 *)(param_1 + 0x80),*(undefined4 *)(param_1 + 0x84));
  iVar1 = *(int *)(param_1 + 0x1cc);
  if (iVar1 != 0) {
    uVar2 = FUN_101c19e0();
    uVar3 = FUN_101c19e0();
    FUN_10021a00(0,0,uVar3,uVar2,0,0,uVar3,uVar2,iVar1,0xff,1);
  }
  *(undefined4 *)(param_2 + 0x38) = 0;
  *(undefined4 *)(param_2 + 0x3c) = 0;
  FUN_100212e0();
  ExceptionList = local_10;
  return 1;
}


// ==== 101a8d60 FUN_101a8d60 depth=0 from=raiz callees=CORE.DLL::appAtoi@EXTERNAL:000001bc CORE.DLL::L2ParamStack::L2ParamStack@EXTERNAL:000001b9 CORE.DLL::L2ParamStack::PushBack@EXTERNAL:000001b8 FUN_101a8a60@101a8a60 CORE.DLL::L2ParamStack::~L2ParamStack@EXTERNAL:000001b7 FUN_1014ed50@1014ed50 FUN_10035c90@10035c90 FUN_1014fc30@1014fc30 CORE.DLL::FString::FString@EXTERNAL:000001b0 FUN_10142250@10142250
// strings: 

undefined4 __fastcall FUN_101a8d60(int param_1)

{
  void *pvVar1;
  int *piVar2;
  FString aFStack_50 [4];
  undefined4 uStack_4c;
  uint uStack_44;
  L2ParamStack local_34 [24];
  undefined1 *local_1c;
  void *local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  puStack_c = &LAB_10217822;
  local_10 = ExceptionList;
  uStack_44 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_44;
  ExceptionList = &local_10;
  local_8 = 0;
  piVar2 = (int *)FUN_10035c90();
  if (piVar2 == (int *)0x0) {
    uStack_4c = 0x101a8e70;
    FUN_1014ed50();
  }
  else {
    local_1c = aFStack_50;
    FString::FString(aFStack_50,(ushort *)(*piVar2 + 0x6174));
    local_8 = local_8 & 0xffffff00;
    FUN_1014fc30();
    uStack_4c = 0x101a8ddd;
    L2ParamStack::L2ParamStack(local_34,10);
    local_8 = CONCAT31(local_8._1_3_,2);
    pvVar1 = (void *)piVar2[0x201];
    local_18 = (void *)piVar2[0x202];
    uStack_4c = 0x101a8dfa;
    local_1c = (undefined1 *)appAtoi((ushort *)(piVar2 + 1));
    uStack_4c = 0x101a8e0c;
    L2ParamStack::PushBack(local_34,pvVar1);
    uStack_4c = 0x101a8e15;
    L2ParamStack::PushBack(local_34,local_18);
    uStack_4c = 0x101a8e1e;
    L2ParamStack::PushBack(local_34,local_1c);
    if (*(int *)(param_1 + 0x1f0) == 0) {
      uStack_4c = 0x101a8e36;
      FUN_10142250();
      FUN_101a8a60();
      *(undefined4 *)(param_1 + 0x1f0) = 1;
    }
    uStack_4c = 0x101a8e54;
    FUN_1014ed50();
    local_8 = local_8 & 0xffffff00;
    L2ParamStack::~L2ParamStack(local_34);
  }
  *(undefined4 *)(param_1 + 0x1e8) = 0;
  ExceptionList = local_10;
  return 1;
}


// ==== 101a8ed0 FUN_101a8ed0 depth=0 from=raiz callees=FUN_101a8a60@101a8a60 ENGINE.DLL::UL2ConsoleWnd::SetState@EXTERNAL:0000007e CORE.DLL::FString::FString@EXTERNAL:000001b0 FUN_10070110@10070110
// strings: 102485e8=LoginState | 

undefined4 __fastcall FUN_101a8ed0(int param_1)

{
  FString aFStack_3c [4];
  undefined4 uStack_38;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  puStack_c = &LAB_10217849;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  (**(code **)(**(int **)(*(int *)(DAT_103663bc + 0x50) + 0x60) + 0x308))();
  FString::FString(aFStack_3c,(ushort *)L"LoginState");
  local_8 = local_8 & 0xffffff00;
  FUN_10070110();
  uStack_38 = 0x101a8f50;
  UL2ConsoleWnd::SetState((UL2ConsoleWnd *)DAT_103663bc,2);
  *(undefined4 *)(param_1 + 0x1e8) = 0;
  FUN_101a8a60();
  ExceptionList = local_10;
  return 1;
}


// ==== 101a8fb0 FUN_101a8fb0 depth=0 from=raiz callees=CORE.DLL::appAtoi@EXTERNAL:000001bc FUN_10034fb0@10034fb0 FUN_10034fa0@10034fa0
// strings: 

undefined4 __fastcall FUN_101a8fb0(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int local_2c;
  int local_28;
  int local_24;
  int local_1c;
  int local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10217870;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  iVar7 = 0;
  local_8 = 0;
  local_24 = 0;
  local_28 = 0;
  local_2c = 0;
  while ((iVar4 = FUN_10034fa0(), iVar6 = -1, iVar7 < iVar4 &&
         (iVar6 = iVar7,
         *(int *)(*(int *)(*(int *)(*(int *)(param_1 + 0x1d0) + 0x2fc) + iVar7 * 4) + 0x804) !=
         *(int *)(param_1 + 0x1e4)))) {
    iVar7 = iVar7 + 1;
  }
  local_1c = 0;
  if ((-1 < iVar6) && (iVar7 = FUN_10034fa0(), iVar6 < iVar7)) {
    puVar2 = *(undefined4 **)(*(int *)(param_1 + 0x1d0) + 0x2fc);
    uVar3 = *puVar2;
    *puVar2 = puVar2[iVar6];
    *(undefined4 *)(iVar6 * 4 + *(int *)(*(int *)(param_1 + 0x1d0) + 0x2fc)) = uVar3;
    FUN_10034fb0(0,0);
    local_1c = 1;
  }
  iVar7 = local_1c;
  iVar6 = local_1c;
  if (*(int *)GLanguageType_exref == 0) {
    for (; iVar7 = local_1c, iVar6 < *(int *)(*(int *)(param_1 + 0x1d0) + 0x300); iVar6 = iVar6 + 1)
    {
      puVar2 = *(undefined4 **)(*(int *)(*(int *)(param_1 + 0x1d0) + 0x2fc) + iVar6 * 4);
      iVar7 = appAtoi((ushort *)*puVar2);
      if ((iVar7 == 0x22) || (iVar7 = appAtoi((ushort *)*puVar2), iVar7 == 0x23)) {
        puVar1 = (undefined4 *)(*(int *)(*(int *)(param_1 + 0x1d0) + 0x2fc) + local_1c * 4);
        uVar3 = *puVar1;
        *puVar1 = puVar2;
        *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1d0) + 0x2fc) + iVar6 * 4) = uVar3;
        local_1c = local_1c + 1;
      }
    }
  }
  for (; iVar6 = local_1c, iVar7 < *(int *)(*(int *)(param_1 + 0x1d0) + 0x300); iVar7 = iVar7 + 1) {
    for (; (iVar4 = *(int *)(*(int *)(param_1 + 0x1d0) + 0x300), iVar6 < iVar4 - iVar7 &&
           (iVar6 < iVar4 + -1)); iVar6 = iVar6 + 1) {
      puVar2 = (undefined4 *)(*(int *)(*(int *)(param_1 + 0x1d0) + 0x2fc) + iVar6 * 4);
      iVar4 = appAtoi((ushort *)(*(int *)*puVar2 + 0x4f2c));
      iVar5 = appAtoi((ushort *)(*(int *)puVar2[1] + 0x4f2c));
      if (iVar5 < iVar4) {
        puVar2 = (undefined4 *)(*(int *)(*(int *)(param_1 + 0x1d0) + 0x2fc) + iVar6 * 4);
        uVar3 = *puVar2;
        *puVar2 = puVar2[1];
        *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1d0) + 0x2fc) + 4 + iVar6 * 4) = uVar3;
      }
    }
  }
  local_18 = local_1c;
  while (local_18 < *(int *)(*(int *)(param_1 + 0x1d0) + 0x300)) {
    iVar7 = local_18 * 4;
    iVar6 = appAtoi((ushort *)
                    (**(int **)(*(int *)(*(int *)(param_1 + 0x1d0) + 0x2fc) + iVar7) + 0x4f2c));
    if (iVar6 < 10) {
      local_24 = local_24 + 1;
      local_18 = local_18 + 1;
    }
    else {
      iVar6 = appAtoi((ushort *)
                      (**(int **)(*(int *)(*(int *)(param_1 + 0x1d0) + 0x2fc) + iVar7) + 0x4f2c));
      if ((iVar6 < 0x33) ||
         (iVar6 = appAtoi((ushort *)
                          (**(int **)(*(int *)(*(int *)(param_1 + 0x1d0) + 0x2fc) + iVar7) + 0x4f2c)
                         ), 0x270e < iVar6)) {
        iVar7 = appAtoi((ushort *)
                        (**(int **)(*(int *)(*(int *)(param_1 + 0x1d0) + 0x2fc) + iVar7) + 0x4f2c));
        if (iVar7 < 9999) {
          local_28 = local_28 + 1;
        }
        local_18 = local_18 + 1;
      }
      else {
        local_2c = local_2c + 1;
        local_18 = local_18 + 1;
      }
    }
  }
  for (local_18 = local_1c; iVar7 = local_1c, local_18 < local_1c + local_24;
      local_18 = local_18 + 1) {
    for (; (iVar7 < local_1c + local_24 + -1 && (iVar7 < local_24)); iVar7 = iVar7 + 1) {
      puVar2 = (undefined4 *)(*(int *)(*(int *)(param_1 + 0x1d0) + 0x2fc) + iVar7 * 4);
      if (*(uint *)(*(int *)puVar2[1] + 0x34ac) < *(uint *)(*(int *)*puVar2 + 0x34ac)) {
        puVar2 = (undefined4 *)(*(int *)(*(int *)(param_1 + 0x1d0) + 0x2fc) + iVar7 * 4);
        uVar3 = *puVar2;
        *puVar2 = puVar2[1];
        *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1d0) + 0x2fc) + 4 + iVar7 * 4) = uVar3;
      }
    }
  }
  local_1c = local_1c + local_24;
  local_18 = local_1c;
  while( true ) {
    local_18 = local_18 + 1;
    iVar7 = local_1c;
    if (local_1c + local_28 <= local_18) break;
    while ((iVar7 = iVar7 + 1, iVar7 < local_1c + local_28 + -1 && (iVar7 < local_24 + local_28))) {
      puVar2 = (undefined4 *)(*(int *)(*(int *)(param_1 + 0x1d0) + 0x2fc) + iVar7 * 4);
      if (*(uint *)(*(int *)puVar2[1] + 0x34ac) < *(uint *)(*(int *)*puVar2 + 0x34ac)) {
        puVar2 = (undefined4 *)(*(int *)(*(int *)(param_1 + 0x1d0) + 0x2fc) + iVar7 * 4);
        uVar3 = *puVar2;
        *puVar2 = puVar2[1];
        *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1d0) + 0x2fc) + 4 + iVar7 * 4) = uVar3;
      }
    }
  }
  local_1c = local_1c + local_28;
  local_18 = local_1c;
  while( true ) {
    local_18 = local_18 + 1;
    iVar7 = local_1c;
    if (local_1c + local_2c <= local_18) break;
    while ((iVar7 = iVar7 + 1, iVar7 < local_1c + local_2c + -1 &&
           (iVar7 < local_2c + local_28 + local_24))) {
      puVar2 = (undefined4 *)(*(int *)(*(int *)(param_1 + 0x1d0) + 0x2fc) + iVar7 * 4);
      if (*(uint *)(*(int *)puVar2[1] + 0x34ac) < *(uint *)(*(int *)*puVar2 + 0x34ac)) {
        puVar2 = (undefined4 *)(*(int *)(*(int *)(param_1 + 0x1d0) + 0x2fc) + iVar7 * 4);
        uVar3 = *puVar2;
        *puVar2 = puVar2[1];
        *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1d0) + 0x2fc) + 4 + iVar7 * 4) = uVar3;
      }
    }
  }
  for (iVar7 = 0; iVar7 < *(int *)(*(int *)(param_1 + 0x1d0) + 0x300) + -1; iVar7 = iVar7 + 1) {
    if ((*(byte *)(**(int **)(*(int *)(*(int *)(param_1 + 0x1d0) + 0x2fc) + iVar7 * 4) + 0x4f10) & 8
        ) != 0) {
      puVar2 = (undefined4 *)(*(int *)(*(int *)(param_1 + 0x1d0) + 0x2fc) + iVar7 * 4);
      uVar3 = *puVar2;
      *puVar2 = puVar2[1];
      *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1d0) + 0x2fc) + 4 + iVar7 * 4) = uVar3;
    }
  }
  ExceptionList = local_10;
  return 1;
}


// ==== 101a9770 FUN_101a9770 depth=0 from=raiz callees=__wcsicmp@101c331a thunk_FUN_101c1b01@101c1b12
// strings: 

undefined4 __thiscall FUN_101a9770(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  int local_c;
  int local_8;
  
  iVar6 = *(int *)(param_1 + 0x334);
  local_8 = 0;
  if ((-1 < iVar6) && (iVar6 < *(int *)(param_1 + 0x300))) {
    local_8 = *(int *)(*(int *)(param_1 + 0x2fc) + iVar6 * 4);
  }
  iVar6 = *(int *)(param_1 + 0x300);
  local_c = 0;
  if (0 < iVar6) {
    do {
      if (iVar6 != local_c && -1 < iVar6 - local_c) {
        iVar7 = 0;
        do {
          if (iVar6 + -1 <= iVar7) break;
          iVar6 = param_2 * 0x1a64;
          if ((*(short *)(iVar6 + **(int **)(*(int *)(param_1 + 0x2fc) + iVar7 * 4)) == 0) ||
             (*(short *)(iVar6 + **(int **)(*(int *)(param_1 + 0x2fc) + iVar7 * 4 + 4)) == 0))
          goto LAB_101a98e2;
          iVar4 = *(int *)(*(int *)(param_1 + 0x308) + param_2 * 4);
          iVar1 = *(int *)(param_1 + 0x2fc);
          if (*(int *)(iVar4 + 0x314) == 0) {
            iVar2 = **(int **)(iVar1 + 4 + iVar7 * 4);
            iVar1 = **(int **)(iVar1 + iVar7 * 4);
            if (*(int *)(iVar4 + 0x318) == 0) {
              iVar6 = __wcsicmp((wchar_t *)(iVar1 + iVar6),(wchar_t *)(iVar2 + iVar6));
              if (iVar6 < 0) goto LAB_101a98c8;
            }
            else {
              iVar6 = __wcsicmp((wchar_t *)(iVar1 + iVar6),(wchar_t *)(iVar2 + iVar6));
              if (0 < iVar6) {
LAB_101a98c8:
                puVar5 = (undefined4 *)(*(int *)(param_1 + 0x2fc) + iVar7 * 4);
                goto LAB_101a98d1;
              }
            }
          }
          else {
            iVar2 = **(int **)(iVar1 + 4 + iVar7 * 4);
            puVar5 = (undefined4 *)(iVar1 + iVar7 * 4);
            if (*(int *)(iVar4 + 0x318) == 0) {
              iVar4 = thunk_FUN_101c1b01(iVar2 + iVar6);
              iVar6 = thunk_FUN_101c1b01(*(int *)*puVar5 + iVar6);
              if (iVar6 < iVar4) {
                puVar5 = (undefined4 *)(*(int *)(param_1 + 0x2fc) + iVar7 * 4);
                goto LAB_101a98d1;
              }
            }
            else {
              iVar4 = thunk_FUN_101c1b01(iVar2 + iVar6);
              iVar6 = thunk_FUN_101c1b01(*(int *)*puVar5 + iVar6);
              if (iVar4 < iVar6) {
                puVar5 = (undefined4 *)(*(int *)(param_1 + 0x2fc) + iVar7 * 4);
LAB_101a98d1:
                uVar3 = *puVar5;
                *puVar5 = puVar5[1];
                *(undefined4 *)(*(int *)(param_1 + 0x2fc) + 4 + iVar7 * 4) = uVar3;
              }
            }
          }
LAB_101a98e2:
          iVar6 = *(int *)(param_1 + 0x300);
          iVar7 = iVar7 + 1;
        } while (iVar7 < iVar6 - local_c);
      }
      iVar6 = *(int *)(param_1 + 0x300);
      local_c = local_c + 1;
    } while (local_c < iVar6);
  }
  iVar6 = 0;
  if (0 < *(int *)(param_1 + 0x300)) {
    puVar5 = *(undefined4 **)(param_1 + 0x2fc);
    do {
      if ((*(byte *)(*(int *)*puVar5 + 0x4f10) & 8) != 0) {
        iVar7 = *(int *)(param_1 + 0x2fc);
        uVar3 = *(undefined4 *)(iVar7 + iVar6 * 4);
        *(undefined4 *)(iVar7 + iVar6 * 4) =
             *(undefined4 *)(iVar7 + -4 + *(int *)(param_1 + 0x300) * 4);
        *(undefined4 *)(*(int *)(param_1 + 0x2fc) + -4 + *(int *)(param_1 + 0x300) * 4) = uVar3;
        break;
      }
      iVar6 = iVar6 + 1;
      puVar5 = puVar5 + 1;
    } while (iVar6 < *(int *)(param_1 + 0x300));
  }
  iVar6 = *(int *)(*(int *)(param_1 + 0x308) + param_2 * 4);
  *(uint *)(iVar6 + 0x318) = (uint)(*(int *)(iVar6 + 0x318) == 0);
  if ((local_8 != 0) && (*(undefined4 *)(param_1 + 0x334) = 0, 0 < *(int *)(param_1 + 0x300))) {
    do {
      if (*(int *)(*(int *)(param_1 + 0x2fc) + *(int *)(param_1 + 0x334) * 4) == local_8) {
        return 1;
      }
      iVar6 = *(int *)(param_1 + 0x334) + 1;
      *(int *)(param_1 + 0x334) = iVar6;
    } while (iVar6 < *(int *)(param_1 + 0x300));
  }
  return 1;
}


// ==== 101a9fc0 FUN_101a9fc0 depth=0 from=raiz callees=CORE.DLL::UObject::ConditionalDestroy@EXTERNAL:00000187 FUN_100377f0@100377f0
// strings: 

void __fastcall FUN_101a9fc0(UObject *param_1)

{
  uint uVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_10217928;
  local_c = ExceptionList;
  uVar1 = DAT_103554c4 ^ (uint)&stack0xffffffec;
  ExceptionList = &local_c;
  *(undefined ***)param_1 = NCServerSelectListCtrl::vftable;
  local_4 = 0;
  UObject::ConditionalDestroy(param_1);
  local_4 = 0xffffffff;
  FUN_100377f0(uVar1);
  ExceptionList = local_c;
  return;
}


// ==== 101aa020 FUN_101aa020 depth=0 from=raiz callees=FUN_101a9fc0@101a9fc0 CORE.DLL::UObject::operator_delete@EXTERNAL:00000188
// strings: 

void * __thiscall FUN_101aa020(void *param_1,byte param_2)

{
  FUN_101a9fc0();
  if ((param_2 & 1) != 0) {
    UObject::operator_delete(param_1,0x35c);
  }
  return param_1;
}


// ==== 101aa050 FUN_101aa050 depth=0 from=raiz callees=FUN_100378a0@100378a0
// strings: 

undefined4 * __thiscall
FUN_101aa050(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10217958;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_100378a0(param_2,param_3,param_4,param_5,0,0x11);
  *param_1 = NCServerSelectListCtrl::vftable;
  ExceptionList = local_c;
  return param_1;
}


// ==== 101aa0d0 FUN_101aa0d0 depth=0 from=raiz callees=FUN_10061fa0@10061fa0
// strings: 

undefined4 * __fastcall FUN_101aa0d0(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10217988;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_10061fa0(DAT_103554c4 ^ (uint)&stack0xffffffec);
  *param_1 = NCServerSelectWnd::vftable;
  param_1[0x73] = 0;
  param_1[0x78] = 0;
  param_1[0x79] = 0xffffffff;
  param_1[0x7c] = 0;
  param_1[0x7a] = 0;
  ExceptionList = local_c;
  return param_1;
}


// ==== 101aa150 FUN_101aa150 depth=0 from=raiz callees=FUN_10002910@10002910 CORE.DLL::UObject::ConditionalDestroy@EXTERNAL:00000187
// strings: 

void __fastcall FUN_101aa150(UObject *param_1)

{
  uint uVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_102179b8;
  local_c = ExceptionList;
  uVar1 = DAT_103554c4 ^ (uint)&stack0xffffffec;
  ExceptionList = &local_c;
  *(undefined ***)param_1 = NCServerSelectWnd::vftable;
  local_4 = 0;
  UObject::ConditionalDestroy(param_1);
  local_4 = 0xffffffff;
  FUN_10002910(uVar1);
  ExceptionList = local_c;
  return;
}


// ==== 101aa1b0 FUN_101aa1b0 depth=0 from=raiz callees=CORE.DLL::UObject::operator_delete@EXTERNAL:00000188 FUN_101aa150@101aa150
// strings: 

void * __thiscall FUN_101aa1b0(void *param_1,byte param_2)

{
  FUN_101aa150();
  if ((param_2 & 1) != 0) {
    UObject::operator_delete(param_1,0x210);
  }
  return param_1;
}


// ==== 101aa1e0 FUN_101aa1e0 depth=0 from=raiz callees=FUN_10003cf0@10003cf0 CORE.DLL::FName::FName@EXTERNAL:0000019c __alloca_probe@101c2730 FUN_10061b40@10061b40 FUN_10060d40@10060d40 FUN_10034ff0@10034ff0 FUN_101aa050@101aa050 FUN_1003f600@1003f600 FUN_101a8940@101a8940 CORE.DLL::FString::FString@EXTERNAL:000001b0 FUN_10006980@10006980 CORE.DLL::UObject::GetTransientPackage@EXTERNAL:0000019b FUN_100379e0@100379e0 __security_check_cookie@101c16c2 CORE.DLL::FString::~FString@EXTERNAL:00000197 FUN_100e03d0@100e03d0 FUN_1003f630@1003f630 FUN_10034510@10034510 CORE.DLL::UObject::StaticAllocateObject@EXTERNAL:000001b1 FUN_1005c1e0@1005c1e0
// strings: 10296118=L2UI_CH3.Serverselectwnd.Serverselect_back | 102960d8=L2UI_CH3.Button.Btn1_normalOn | 102960a0=L2UI_CH3.Button.Btn1_normal | 102960d8=L2UI_CH3.Button.Btn1_normalOn | 102960a0=L2UI_CH3.Button.Btn1_normal | 102960d8=L2UI_CH3.Button.Btn1_normalOn | 102960a0=L2UI_CH3.Button.Btn1_normal | 

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

void __fastcall FUN_101aa1e0(int param_1)

{
  bool bVar1;
  undefined4 uVar2;
  UObject *pUVar3;
  int iVar4;
  UPackage *pUVar5;
  uint uVar6;
  UPackage **ppUStack_14124;
  UPackage *pUStack_14100;
  undefined4 uStack_140fc;
  undefined4 uStack_140f8;
  undefined4 uStack_140f4;
  undefined4 *puStack_140f0;
  uint *puStack_140ec;
  UPackage *pUStack_140e4;
  undefined4 uStack_140e0;
  undefined4 uStack_140dc;
  undefined4 uStack_140d8;
  undefined4 uStack_140d4;
  uint uStack_140d0;
  undefined4 uStack_140c8;
  wchar_t *pwStack_140c4;
  undefined4 uStack_140c0;
  uint uStack_140bc;
  uint uStack_8c;
  void *pvStack_88;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_10217ab2;
  local_c = ExceptionList;
  uStack_140bc = DAT_103554c4 ^ (uint)&stack0xfffebf48;
  ExceptionList = &local_c;
  uVar6 = 0;
  uStack_140c0 = 0x101aa22c;
  FUN_10061b40();
  uStack_140c0 = 1;
  pwStack_140c4 = L"L2UI_CH3.Serverselectwnd.Serverselect_back";
  uStack_140c8 = 0x101aa23a;
  uVar2 = FUN_1003f630();
  uStack_140c0 = 0;
  pwStack_140c4 = (wchar_t *)0xbb8;
  uStack_140c8 = 0xf019;
  *(undefined4 *)(param_1 + 0x1cc) = uVar2;
  uVar2 = FUN_1003f600();
  *(undefined4 *)(param_1 + 0x1ec) = uVar2;
  uStack_140d0 = 0x101aa263;
  FName::FName((FName *)&stack0xfffebf50,0);
  pUStack_140e4 = UObject::GetTransientPackage();
  uStack_140d4 = *(undefined4 *)GError_exref;
  uStack_140d0 = 0;
  uStack_140d8 = 0;
  uStack_140dc = 0;
  puStack_140ec = (uint *)0x101aa287;
  pUVar3 = UObject::StaticAllocateObject();
  if (pUVar3 == (UObject *)0x0) {
    iVar4 = 0;
  }
  else {
    uStack_140d0 = 5;
    uStack_140d4 = 0xf;
    uStack_140d8 = 100;
    uStack_140dc = 0x101aa29d;
    iVar4 = FUN_101aa050();
  }
  uVar2 = 3;
  uStack_140d0 = 0;
  uStack_140d4 = 0;
  *(int *)(param_1 + 0x1d0) = iVar4;
  uStack_140d8 = 0x112;
  *(undefined4 *)(iVar4 + 0x1cc) = 0xf018;
  uStack_140dc = 300;
  uStack_140e0 = 10;
  pUStack_140e4 = (UPackage *)0x8;
  (**(code **)(**(int **)(param_1 + 0x1d0) + 0xc0))();
  puStack_140ec = *(uint **)(param_1 + 0x1d0);
  puStack_140f0 = (undefined4 *)0x101aa2e3;
  FUN_10060d40();
  puStack_140ec = (uint *)0x101aa2ef;
  FUN_1005c1e0();
  puStack_140ec = (uint *)0x0;
  puStack_140f0 = (undefined4 *)0x101aa2fd;
  FUN_10034ff0();
  FUN_100e03d0();
  iVar4 = *(int *)GLanguageType_exref;
  if (((iVar4 == 2) || (iVar4 == 6)) || (iVar4 == 0)) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  if (!bVar1) {
    puStack_140ec = (uint *)0x101aa34d;
    FUN_10034510();
  }
  puStack_140ec = (uint *)0x101aa35d;
  FUN_100379e0();
  FUN_100e03d0();
  puStack_140ec = (uint *)0x101aa392;
  FUN_10034510();
  puStack_140ec = (uint *)0x101aa3a5;
  FUN_100379e0();
  FUN_100e03d0();
  puStack_140ec = (uint *)0x101aa3d4;
  FUN_10034510();
  puStack_140ec = (uint *)0x101aa3e7;
  FUN_100379e0();
  FUN_100e03d0();
  puStack_140ec = (uint *)0x101aa422;
  FUN_10034510();
  puStack_140ec = (uint *)0x101aa435;
  FUN_100379e0();
  FUN_100e03d0();
  puStack_140ec = (uint *)0x101aa460;
  FUN_10034510();
  puStack_140ec = (uint *)0x101aa473;
  FUN_100379e0();
  puStack_140ec = (uint *)0x101aa47f;
  FName::FName((FName *)&stack0xfffebf34,0);
  uStack_140fc = uVar2;
  pUStack_14100 = UObject::GetTransientPackage();
  puStack_140f0 = *(undefined4 **)GError_exref;
  puStack_140ec = (uint *)0x0;
  uStack_140f4 = 0;
  uStack_140f8 = 0;
  pUVar3 = UObject::StaticAllocateObject();
  if (pUVar3 == (UObject *)0x0) {
    uVar2 = 0;
  }
  else {
    puStack_140ec = (uint *)0x101aa4c1;
    FString::FString((FString *)&uStack_140bc,(ushort *)L"L2UI_CH3.Button.Btn1_normalOn");
    uStack_140d0 = 1;
    puStack_140ec = (uint *)0x101aa4e4;
    FString::FString((FString *)&uStack_140c8,(ushort *)L"L2UI_CH3.Button.Btn1_normal");
    puStack_140ec = &uStack_140bc;
    puStack_140f0 = &uStack_140c8;
    uVar6 = 3;
    uStack_140d0 = 3;
    uStack_140f4 = 0x101aa507;
    uVar2 = FUN_10006980();
  }
  *(undefined4 *)(param_1 + 0x1d4) = uVar2;
  if ((uVar6 & 2) != 0) {
    uVar6 = uVar6 & 0xfffffffd;
    uStack_140d0 = uVar6;
    FString::~FString((FString *)&uStack_140c8);
  }
  if ((uVar6 & 1) != 0) {
    uVar6 = uVar6 & 0xfffffffe;
    uStack_140d0 = uVar6;
    FString::~FString((FString *)&uStack_140bc);
  }
  puStack_140ec = (uint *)0x0;
  puStack_140f0 = (undefined4 *)0x0;
  uStack_140f4 = 0x17;
  *(undefined4 *)(*(int *)(param_1 + 0x1d4) + 0x1cc) = 0xf007;
  uStack_140f8 = 0x4c;
  uStack_140fc = 0x129;
  pUStack_14100 = (UPackage *)0x79;
  (**(code **)(**(int **)(param_1 + 0x1d4) + 0xc0))();
  FUN_10060d40();
  FUN_1005c1e0();
  FUN_10003cf0();
  FName::FName((FName *)&stack0xfffebf18,0);
  UObject::GetTransientPackage();
  ppUStack_14124 = (UPackage **)0x101aa5ee;
  pUVar3 = UObject::StaticAllocateObject();
  if (pUVar3 == (UObject *)0x0) {
    uVar2 = 0;
  }
  else {
    FString::FString((FString *)&pUStack_140e4,(ushort *)L"L2UI_CH3.Button.Btn1_normalOn");
    puStack_140ec = (uint *)(uVar6 | 4);
    FString::FString((FString *)&uStack_140d8,(ushort *)L"L2UI_CH3.Button.Btn1_normal");
    uVar6 = uVar6 | 0xc;
    puStack_140ec = (uint *)uVar6;
    uVar2 = FUN_10006980();
  }
  *(undefined4 *)(param_1 + 0x1d8) = uVar2;
  if ((uVar6 & 8) != 0) {
    uVar6 = uVar6 & 0xfffffff7;
    puStack_140ec = (uint *)uVar6;
    FString::~FString((FString *)&uStack_140d8);
  }
  if ((uVar6 & 4) != 0) {
    puStack_140ec = (uint *)(uVar6 & 0xfffffffb);
    FString::~FString((FString *)&pUStack_140e4);
  }
  uVar2 = 3;
  *(undefined4 *)(*(int *)(param_1 + 0x1d8) + 0x1cc) = 0xf017;
  (**(code **)(**(int **)(param_1 + 0x1d8) + 0xc0))();
  ppUStack_14124 = *(UPackage ***)(param_1 + 0x1d8);
  FUN_10060d40();
  ppUStack_14124 = (UPackage **)0x101aa6e8;
  FUN_1005c1e0();
  ppUStack_14124 = (UPackage **)0x101aa6f8;
  FUN_10003cf0();
  ppUStack_14124 = (UPackage **)0x101aa704;
  FName::FName((FName *)&stack0xfffebefc,0);
  pUVar5 = UObject::GetTransientPackage();
  ppUStack_14124 = (UPackage **)0x0;
  pUVar3 = UObject::StaticAllocateObject(&DAT_10357870,pUVar5,uVar2,0,0,*(undefined4 *)GError_exref)
  ;
  if (pUVar3 == (UObject *)0x0) {
    uVar2 = 0;
  }
  else {
    ppUStack_14124 = (UPackage **)0x101aa742;
    FString::FString((FString *)&pUStack_14100,(ushort *)L"L2UI_CH3.Button.Btn1_normalOn");
    ppUStack_14124 = (UPackage **)0x101aa763;
    FString::FString((FString *)&uStack_140f4,(ushort *)L"L2UI_CH3.Button.Btn1_normal");
    ppUStack_14124 = &pUStack_14100;
    uVar2 = FUN_10006980(&uStack_140f4);
  }
  *(undefined4 *)(param_1 + 0x1dc) = uVar2;
  if (pUVar3 != (UObject *)0x0) {
    FString::~FString((FString *)&uStack_140f4);
    FString::~FString((FString *)&pUStack_14100);
  }
  ppUStack_14124 = (UPackage **)0x0;
  *(undefined4 *)(*(int *)(param_1 + 0x1dc) + 0x1cc) = 0xf020;
  (**(code **)(**(int **)(param_1 + 0x1dc) + 0xc0))(0x29,0x129,0x4c,0x17,0);
  uVar2 = FUN_10060d40(*(undefined4 *)(param_1 + 0x1dc),2);
  FUN_1005c1e0(uVar2);
  FUN_10003cf0(0x25b);
  uVar2 = FUN_101a8940();
  *(undefined4 *)(param_1 + 500) = uVar2;
  *(undefined4 *)(param_1 + 0x1f8) = 0;
  *(undefined4 *)(param_1 + 0x1fc) = 0;
  ExceptionList = pvStack_88;
  __security_check_cookie(uStack_8c ^ (uint)&ppUStack_14124);
  return;
}


// ==== 101aaf60 FUN_101aaf60 depth=0 from=raiz callees=FUN_10164030@10164030 CORE.DLL::appItoa@EXTERNAL:00000146 CORE.DLL::FString::operator=@EXTERNAL:000001a3 __security_check_cookie@101c16c2
// strings: 

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_101aaf60(int param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  ushort *puVar1;
  uint uStack_230;
  ushort local_218 [256];
  uint local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10217be0;
  local_10 = ExceptionList;
  uStack_230 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_230;
  ExceptionList = &local_10;
  local_8 = 0;
  local_18 = uStack_230;
  FUN_10164030(param_2,param_4,local_218);
  FString::operator=((FString *)(param_1 + 0x210),local_218);
  *(int *)(param_1 + 0x21c) = param_3;
  puVar1 = appItoa(param_3);
  FString::operator=((FString *)(param_1 + 0x220),puVar1);
  *(undefined4 *)(param_1 + 0x22c) = _DAT_10249830;
  *(undefined4 *)(param_1 + 0x230) = 1;
  local_8 = 0xffffffff;
  ExceptionList = local_10;
  __security_check_cookie(local_18 ^ (uint)&stack0xfffffffc);
  return;
}


// ==== 101b88a0 FUN_101b88a0 depth=0 from=raiz callees=FUN_101b7cd0@101b7cd0 CORE.DLL::L2ParamStack::L2ParamStack@EXTERNAL:000001b9 CORE.DLL::L2ParamStack::PushBack@EXTERNAL:000001b8 FUN_101b7af0@101b7af0 CORE.DLL::L2ParamStack::~L2ParamStack@EXTERNAL:000001b7
// strings: 

void FUN_101b88a0(void *param_1,void *param_2,undefined4 param_3)

{
  uint uStack_4c;
  L2ParamStack local_3c [16];
  L2ParamStack local_2c [24];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_1021a2b2;
  local_10 = ExceptionList;
  uStack_4c = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_4c;
  ExceptionList = &local_10;
  local_8 = 0;
  L2ParamStack::L2ParamStack(local_2c,10);
  local_8._0_1_ = 1;
  L2ParamStack::PushBack(local_2c,(void *)0x1);
  L2ParamStack::PushBack(local_2c,param_2);
  FUN_101b7af0(local_2c);
  L2ParamStack::L2ParamStack(local_3c,10);
  local_8._0_1_ = 2;
  L2ParamStack::PushBack(local_3c,param_1);
  FUN_101b7cd0(local_3c,1,param_3,0);
  local_8._0_1_ = 1;
  L2ParamStack::~L2ParamStack(local_3c);
  local_8 = (uint)local_8._1_3_ << 8;
  L2ParamStack::~L2ParamStack(local_2c);
  ExceptionList = local_10;
  return;
}


