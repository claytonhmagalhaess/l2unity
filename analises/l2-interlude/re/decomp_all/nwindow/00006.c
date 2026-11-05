// ==== 100b193c Catch@100b193c

void Catch_100b193c(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"MsnWnd::NotifyAddGroup");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100b1960 FUN_100b1960

void FUN_100b1960(void)

{
  int in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_101f2348;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_4 = 0;
  (**(code **)(**(int **)(in_ECX + 0x254) + 0x13c))(DAT_103554c4 ^ (uint)&stack0xfffffff0);
  (**(code **)(**(int **)(in_ECX + 600) + 0x13c))();
  (**(code **)(**(int **)(in_ECX + 0x25c) + 0x13c))();
  (**(code **)(**(int **)(in_ECX + 0x260) + 0x138))();
  (**(code **)(**(int **)(in_ECX + 0x298) + 0x138))();
  (**(code **)(**(int **)(in_ECX + 0x29c) + 0x138))();
  (**(code **)(**(int **)(in_ECX + 0x2a0) + 0x138))();
  (**(code **)(**(int **)(in_ECX + 0x2a4) + 0x138))();
  (**(code **)(**(int **)(in_ECX + 0x2a8) + 0x138))();
  (**(code **)(**(int **)(in_ECX + 0x2ac) + 0x138))();
  FUN_100abce0(&stack0x00000004);
  local_4 = 0xffffffff;
  FUN_100abc50();
  ExceptionList = local_c;
  return;
}


// ==== 100b1a60 FUN_100b1a60

void FUN_100b1a60(void)

{
  uint uVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_101f2378;
  local_c = ExceptionList;
  uVar1 = DAT_103554c4 ^ (uint)&local_c;
  local_4 = 0;
  ExceptionList = &local_c;
  FUN_100abce0(&stack0x00000004);
  local_4 = 0xffffffff;
  FUN_100abc50(uVar1);
  ExceptionList = local_c;
  return;
}


// ==== 100b1ac0 FUN_100b1ac0

bool FUN_100b1ac0(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int *in_ECX;
  
  iVar1 = FUN_100570d0(param_1,param_2,param_3);
  if (iVar1 != 0) {
    return true;
  }
  if (param_1 == 0x203) {
    iVar1 = (**(code **)(*in_ECX + 0x1bc))(param_2,param_3);
    return iVar1 != 0;
  }
  return false;
}


// ==== 100b1b20 FUN_100b1b20

undefined4 FUN_100b1b20(void)

{
  int in_ECX;
  
  if (*(int *)(in_ECX + 0x1f8) != 0) {
    *(undefined4 *)(in_ECX + 0x1f8) = 0;
  }
  FUN_10061e90();
  return 1;
}


// ==== 100b1b40 FUN_100b1b40

void FUN_100b1b40(void)

{
  uint uVar1;
  ushort *puVar2;
  ushort *puVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_101f23b2;
  local_c = ExceptionList;
  uVar1 = DAT_103554c4 ^ (uint)&local_c;
  local_4 = 1;
  ExceptionList = &local_c;
  puVar2 = FString::operator*((FString *)&stack0x00000010);
  puVar3 = FString::operator*((FString *)&stack0x00000004);
  FUN_10148650(puVar3,puVar2,uVar1);
  local_c = (void *)((uint)local_c & 0xffffff00);
  FString::~FString((FString *)&local_4);
  local_c = (void *)0xffffffff;
  FString::~FString((FString *)&stack0x00000008);
  ExceptionList = puVar2;
  return;
}


// ==== 100b1bc0 FUN_100b1bc0

void FUN_100b1bc0(void)

{
  int in_ECX;
  
  *(undefined4 *)(*(int *)(in_ECX + 0x1f8) + 0x228) = *(undefined4 *)(in_ECX + 0x1cc);
  FUN_100ac300();
  FUN_100c6750();
  return;
}


// ==== 100b1bf0 FUN_100b1bf0

undefined4 FUN_100b1bf0(void)

{
  undefined4 uVar1;
  FString aFStack_24 [8];
  undefined4 uStack_1c;
  uint uStack_18;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_101f23e2;
  local_c = ExceptionList;
  uStack_18 = DAT_103554c4 ^ (uint)&stack0xffffffec;
  ExceptionList = &local_c;
  local_4 = 0;
  FString::FString(aFStack_24,(FString *)&stack0x00000004);
  local_4 = local_4 & 0xffffff00;
  uVar1 = FUN_100ac460();
  local_4 = 0xffffffff;
  uStack_1c = 0x100b1c59;
  FString::~FString((FString *)&stack0x00000004);
  ExceptionList = local_c;
  return uVar1;
}


// ==== 100b1c70 FUN_100b1c70

bool FUN_100b1c70(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = FUN_100570d0(param_1,param_2,param_3);
  return iVar1 != 0;
}


// ==== 100b1c90 FUN_100b1c90

undefined4 FUN_100b1c90(void)

{
  int in_ECX;
  
  if (*(int *)(in_ECX + 0x1cc) != 0) {
    *(undefined4 *)(in_ECX + 0x1cc) = 0;
  }
  if (*(int *)(in_ECX + 0x1d0) != 0) {
    *(undefined4 *)(in_ECX + 0x1d0) = 0;
  }
  if (*(int *)(in_ECX + 0x1d4) != 0) {
    *(undefined4 *)(in_ECX + 0x1d4) = 0;
  }
  FUN_10061e90();
  return 1;
}


// ==== 100b1cd0 FUN_100b1cd0

void FUN_100b1cd0(undefined4 param_1)

{
  ushort *puVar1;
  int in_ECX;
  undefined4 uVar2;
  
  if (*(int *)(in_ECX + 0x50) != 0) {
    uVar2 = 0;
    puVar1 = FString::operator*((FString *)(GL2GameData_exref + 0x6d7b0));
    FUN_10023820(param_1,puVar1,uVar2);
  }
  return;
}


// ==== 100b1d00 FUN_100b1d00

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


// ==== 100b1d60 FUN_100b1d60

void FUN_100b1d60(void)

{
  int in_ECX;
  
                    /* WARNING: Could not recover jumptable at 0x100b1d6e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(in_ECX + 0x1d0) + 0x174))();
  return;
}


// ==== 100b1d70 FUN_100b1d70

void FUN_100b1d70(void)

{
  FUN_100b1bc0();
  return;
}


// ==== 100b1d80 FUN_100b1d80

void FUN_100b1d80(ushort *param_1,undefined4 *param_2)

{
  int in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101f240c;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FString::FString((FString *)(in_ECX + 4),param_1);
  *(undefined4 *)(in_ECX + 0x10) = *param_2;
  ExceptionList = local_c;
  return;
}


// ==== 100b1df0 FUN_100b1df0

void FUN_100b1df0(ushort *param_1,undefined4 *param_2)

{
  int in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101f243c;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FString::FString((FString *)(in_ECX + 4),param_1);
  *(undefined4 *)(in_ECX + 0x10) = *param_2;
  ExceptionList = local_c;
  return;
}


// ==== 100b1e60 FUN_100b1e60

void FUN_100b1e60(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  UObject::StaticAllocateObject
            (&DAT_1036ac80,param_2,param_3,param_4,0,*(undefined4 *)GError_exref,0,0);
  return;
}


// ==== 100b1e90 FUN_100b1e90

void FUN_100b1e90(void)

{
  int in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_101f2469;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  FString::operator=((FString *)(in_ECX + 0xa3c),(FString *)&stack0x00000004);
  local_4 = 0xffffffff;
  FString::~FString((FString *)&stack0x00000004);
  ExceptionList = local_c;
  return;
}


// ==== 100b1ef0 FUN_100b1ef0

void FUN_100b1ef0(void)

{
  uint uVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_101f2498;
  local_c = ExceptionList;
  uVar1 = DAT_103554c4 ^ (uint)&local_c;
  local_4 = 0;
  ExceptionList = &local_c;
  FUN_100abce0(&stack0x00000004);
  local_4 = 0xffffffff;
  FUN_100abc50(uVar1);
  ExceptionList = local_c;
  return;
}


// ==== 100b1f50 FUN_100b1f50

void FUN_100b1f50(void)

{
  int in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_101f24c9;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  FString::operator=((FString *)(in_ECX + 0x1d0),(FString *)&stack0x00000004);
  local_4 = 0xffffffff;
  FString::~FString((FString *)&stack0x00000004);
  ExceptionList = local_c;
  return;
}


// ==== 100b1fb0 FUN_100b1fb0

void FUN_100b1fb0(void)

{
  int in_ECX;
  
  (**(code **)(**(int **)(in_ECX + 0x268) + 0x138))();
                    /* WARNING: Could not recover jumptable at 0x100b1fcf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(in_ECX + 0x268) + 0x78))();
  return;
}


// ==== 100b1fe0 FUN_100b1fe0

undefined4 FUN_100b1fe0(void)

{
  int iVar1;
  UObject *pUVar2;
  int *piVar3;
  UPackage *pUVar4;
  int *in_ECX;
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
  in_ECX[0x79] = iVar1;
  uStack_4c = 0x100b2038;
  iVar1 = FUN_1003f630();
  in_ECX[0x7a] = iVar1;
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
  in_ECX[0x73] = (int)piVar3;
  uStack_58 = 0x83;
  pUStack_5c = (UPackage *)0x5c;
  (**(code **)(*piVar3 + 0xc0))();
  uStack_64 = in_ECX[0x73];
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
  in_ECX[0x74] = iVar1;
  uStack_6c = 0x11;
  *(undefined4 *)(iVar1 + 0x1cc) = 0xa56;
  uStack_70 = 0x97;
  uStack_74 = 0x97;
  pUStack_78 = (UPackage *)0x5c;
  (**(code **)(*(int *)in_ECX[0x74] + 0xc0))();
  puStack_80 = (undefined4 *)in_ECX[0x74];
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
  in_ECX[0x75] = iVar1;
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
  *(undefined4 *)(in_ECX[0x75] + 0x1cc) = 0xa09;
  uStack_8c = 0x42;
  uStack_90 = 0xb0;
  pUStack_94 = (UPackage *)0x48;
  (**(code **)(*(int *)in_ECX[0x75] + 0xc0))();
  FUN_10060d40(in_ECX[0x75]);
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
  in_ECX[0x76] = iVar1;
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
  *(undefined4 *)(in_ECX[0x76] + 0x1cc) = 0xa0a;
  (**(code **)(*(int *)in_ECX[0x76] + 0xc0))(0x8e,0xb0,0x42,0x15,0,0);
  uVar9 = FUN_10060d40(in_ECX[0x76],2);
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
  in_ECX[0x77] = iVar1;
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
  *(undefined4 *)(in_ECX[0x77] + 0x1cc) = 0xa0b;
  (**(code **)(*(int *)in_ECX[0x77] + 0xc0))(0x48,0xcc,0x86,0x17,0,0,3);
  uVar9 = FUN_10060d40(in_ECX[0x77],2);
  FUN_1005c1e0(uVar9);
  FUN_10003cf0(0x3e3);
  iVar1 = *in_ECX;
  uVar9 = FUN_10058020();
  uVar9 = FUN_10058020(uVar9);
  (**(code **)(iVar1 + 0x10c))(uVar9);
  iVar1 = *(int *)in_ECX[0x73];
  uVar9 = FUN_10058020();
  uVar9 = FUN_10058020(uVar9);
  (**(code **)(iVar1 + 0x10c))(uVar9);
  iVar1 = *(int *)in_ECX[0x74];
  uVar9 = FUN_10058020();
  uVar9 = FUN_10058020(uVar9);
  (**(code **)(iVar1 + 0x10c))(uVar9);
  iVar1 = *(int *)in_ECX[0x75];
  uVar9 = FUN_10058020();
  uVar9 = FUN_10058020(uVar9);
  (**(code **)(iVar1 + 0x10c))(uVar9);
  iVar1 = *(int *)in_ECX[0x76];
  uVar9 = FUN_10058020();
  uVar9 = FUN_10058020(uVar9);
  (**(code **)(iVar1 + 0x10c))(uVar9);
  ExceptionList = pvVar7;
  return 1;
}


// ==== 100b2600 FUN_100b2600

undefined4 FUN_100b2600(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  ushort *puVar3;
  int in_ECX;
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
  
  uVar1 = *(undefined4 *)(in_ECX + 0x80);
  uVar2 = *(undefined4 *)(in_ECX + 0x84);
  *(undefined4 *)(param_1 + 0x38) = uVar1;
  *(undefined4 *)(param_1 + 0x3c) = uVar2;
  *(undefined4 *)(param_1 + 0x6c) = uVar1;
  *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(param_1 + 0x3c);
  *(undefined4 *)(param_1 + 0x58) = 0;
  uVar1 = FUN_101c19e0();
  uVar2 = FUN_101c19e0(uVar1);
  FUN_10021df0(*(undefined4 *)(in_ECX + 0x80),*(undefined4 *)(in_ECX + 0x84),uVar2,uVar1);
  if (*(int *)(in_ECX + 0x1e4) != 0) {
    FUN_10021a00(0,0,0x100,0x161,0,0,0x100,0x161,*(int *)(in_ECX + 0x1e4),0xff,1);
  }
  if (*(int *)(in_ECX + 0x1e8) != 0) {
    FUN_10021a00(0x5f,0x116,0x8e,0x17,0,0,0x8e,0x17,*(int *)(in_ECX + 0x1e8),0xff,1);
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
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  return 1;
}


// ==== 100b27f0 FUN_100b27f0

undefined4 FUN_100b27f0(void)

{
  int iVar1;
  ushort *puVar2;
  int in_ECX;
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
  if (*(int *)(in_ECX + 0x1e0) != 0) {
    uStack_20 = 0x100b2833;
    iVar1 = (**(code **)(**(int **)(in_ECX + 0x1cc) + 0x1f8))();
    if (iVar1 != 0) {
      uStack_20 = 0x100b2847;
      iVar1 = (**(code **)(**(int **)(in_ECX + 0x1d0) + 0x1f8))();
      if (iVar1 != 0) {
        uStack_20 = 0x100b285b;
        puVar2 = (ushort *)(**(code **)(**(int **)(in_ECX + 0x1d0) + 0x1f8))();
        uStack_30 = 0x100b286b;
        FString::FString(aFStack_28,puVar2);
        uStack_4 = 0;
        puVar2 = (ushort *)(**(code **)(**(int **)(in_ECX + 0x1cc) + 0x1f8))();
        FString::FString(aFStack_34,puVar2);
        uStack_4 = 0xffffffff;
        FUN_100b14c0();
      }
    }
  }
  uStack_20 = 0x100b28bb;
  (**(code **)(**(int **)(in_ECX + 0x1cc) + 0x174))();
  uStack_20 = 0x100b28cb;
  (**(code **)(**(int **)(in_ECX + 0x1d0) + 0x174))();
  ExceptionList = local_c;
  return 1;
}


// ==== 100b28f0 FUN_100b28f0

undefined4 FUN_100b28f0(void)

{
  int *in_ECX;
  
  (**(code **)(*in_ECX + 0x13c))();
  FUN_100b14b0();
  return 1;
}


// ==== 100b2910 FUN_100b2910

undefined4 FUN_100b2910(void)

{
  undefined4 uVar1;
  UPackage *pUVar2;
  UObject *pUVar3;
  int in_ECX;
  bool bVar4;
  void *local_28;
  FString local_24 [12];
  FString local_18 [12];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101f2614;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_10061b40(DAT_103554c4 ^ (uint)&stack0xffffffc8);
  uVar1 = FUN_1003f630(L"L2UI_CH3.Msn.messenger_back1",1);
  *(undefined4 *)(in_ECX + 0x1d4) = uVar1;
  FName::FName((FName *)&local_28,0);
  pUVar2 = UObject::GetTransientPackage();
  pUVar3 = UObject::StaticAllocateObject
                     (&DAT_10357870,pUVar2,local_28,0,0,*(undefined4 *)GError_exref,0,0);
  bVar4 = pUVar3 == (UObject *)0x0;
  if (bVar4) {
    uVar1 = 0;
  }
  else {
    FString::FString(local_18,(ushort *)L"L2UI_CH3.Button.bigbutton_down");
    local_4 = 0;
    FString::FString(local_24,(ushort *)L"L2UI_CH3.Button.bigbutton");
    local_4 = 1;
    uVar1 = FUN_10006980(local_24,local_18,0);
  }
  *(undefined4 *)(in_ECX + 0x1d0) = uVar1;
  local_4 = 0;
  if (!bVar4) {
    FString::~FString(local_24);
  }
  local_4 = 0xffffffff;
  if (!bVar4) {
    FString::~FString(local_18);
  }
  *(undefined4 *)(*(int *)(in_ECX + 0x1d0) + 0x1cc) = 0xa54;
  (**(code **)(**(int **)(in_ECX + 0x1d0) + 0xc0))(0x4f,0x112,0x60,0x17,0,0,3);
  uVar1 = FUN_10060d40(*(undefined4 *)(in_ECX + 0x1d0),2);
  FUN_1005c1e0(uVar1);
  FUN_10003cf0(0x3f0);
  ExceptionList = local_28;
  return 1;
}


// ==== 100b2aa0 FUN_100b2aa0

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

void FUN_100b2aa0(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  ushort *puVar3;
  int in_ECX;
  undefined1 auStack_1010 [4];
  longlong local_100c;
  ushort local_1004 [2048];
  uint local_4;
  
  local_4 = DAT_103554c4 ^ (uint)auStack_1010;
  uVar1 = *(undefined4 *)(in_ECX + 0x80);
  uVar2 = *(undefined4 *)(in_ECX + 0x84);
  *(undefined4 *)(param_1 + 0x38) = uVar1;
  *(undefined4 *)(param_1 + 0x3c) = uVar2;
  *(undefined4 *)(param_1 + 0x6c) = uVar1;
  *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(param_1 + 0x3c);
  *(undefined4 *)(param_1 + 0x58) = 0;
  uVar1 = FUN_101c19e0();
  uVar2 = FUN_101c19e0(uVar1);
  FUN_10021df0(*(undefined4 *)(in_ECX + 0x80),*(undefined4 *)(in_ECX + 0x84),uVar2,uVar1);
  if (*(int *)(in_ECX + 0x1d4) != 0) {
    FUN_10021a00(0,0,0x100,0x161,0,0,0x100,0x161,*(int *)(in_ECX + 0x1d4),0xff,1);
  }
  local_1004[0] = 0;
  puVar3 = FString::operator*((FString *)(GL2GameData_exref + 0x417b4));
  appSprintf(local_1004,(ushort *)L"%s%s\r\n\r\n\r\n",local_1004,puVar3);
  puVar3 = FString::operator*((FString *)(GL2GameData_exref + 0x41810));
  appSprintf(local_1004,(ushort *)L"%s%s\r\n\r\n\r\n",local_1004,puVar3);
  puVar3 = FString::operator*((FString *)(GL2GameData_exref + 0x4186c));
  appSprintf(local_1004,(ushort *)L"%s%s",local_1004,puVar3);
  local_100c = (longlong)ROUND(*(float *)(in_ECX + 0x88) - 36.0);
  FUN_100217a0(0x12,0x2c,0xffdcdcdc,local_1004,(undefined4)local_100c,0,0,0,0,0,0,0,0,0,0,0xffffffff
              );
  FUN_100212e0();
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  __security_check_cookie(local_4 ^ (uint)auStack_1010);
  return;
}


// ==== 100b2c40 FUN_100b2c40

undefined4 FUN_100b2c40(void)

{
  int *in_ECX;
  
  (**(code **)(*in_ECX + 0x13c))();
  FUN_100b14a0();
  return 1;
}


// ==== 100b2c60 FUN_100b2c60

undefined4 FUN_100b2c60(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  ushort *puVar3;
  int in_ECX;
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
  
  uVar1 = *(undefined4 *)(in_ECX + 0x80);
  uVar2 = *(undefined4 *)(in_ECX + 0x84);
  *(undefined4 *)(param_1 + 0x38) = uVar1;
  *(undefined4 *)(param_1 + 0x3c) = uVar2;
  *(undefined4 *)(param_1 + 0x6c) = uVar1;
  *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(param_1 + 0x3c);
  *(undefined4 *)(param_1 + 0x58) = 0;
  uVar1 = FUN_101c19e0();
  uVar2 = FUN_101c19e0(uVar1);
  FUN_10021df0(*(undefined4 *)(in_ECX + 0x80),*(undefined4 *)(in_ECX + 0x84),uVar2,uVar1);
  if (*(int *)(in_ECX + 0x1d4) != 0) {
    FUN_10021a00(0,0,0x100,0x161,0,0,0x100,0x161,*(int *)(in_ECX + 0x1d4),0xff,1);
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
  if (*(int *)(in_ECX + 0x1d0) == 0) {
    this = (FString *)(GL2GameData_exref + 0x428f4);
  }
  else {
    this = (FString *)(GL2GameData_exref + 0x41cbc);
  }
  puVar3 = FString::operator*(this);
  FUN_100217a0(0x53,0xa0,0xffdcdcdc,puVar3,uVar1,uVar2,uVar12,uVar4,uVar5,uVar6,uVar7,uVar8,uVar9,
               uVar10,uVar11,uVar13);
  FUN_100212e0();
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  return 1;
}


// ==== 100b2d90 FUN_100b2d90

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

void FUN_100b2d90(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  ushort *puVar3;
  FString *pFVar4;
  int iVar5;
  int in_ECX;
  undefined2 in_FPUControlWord;
  undefined4 uStack_206c;
  undefined4 uStack_2068;
  undefined1 *local_2040;
  longlong local_203c;
  FString local_2034 [12];
  FString local_2028 [12];
  FString local_201c [12];
  ushort local_2010 [2048];
  undefined2 local_1010 [2048];
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101f26cc;
  local_c = ExceptionList;
  local_10 = DAT_103554c4 ^ (uint)&local_2040;
  ExceptionList = &local_c;
  uVar2 = *(undefined4 *)(in_ECX + 0x80);
  uVar1 = *(undefined4 *)(in_ECX + 0x84);
  *(undefined4 *)(param_1 + 0x38) = uVar2;
  *(undefined4 *)(param_1 + 0x3c) = uVar1;
  *(undefined4 *)(param_1 + 0x6c) = uVar2;
  *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(param_1 + 0x3c);
  *(undefined4 *)(param_1 + 0x58) = 0;
  FUN_101c19e0();
  FUN_101c19e0();
  uStack_2068 = 0x100b2e25;
  FUN_10021df0();
  if (*(int *)(in_ECX + 0x290) != 0) {
    uVar2 = FUN_101c19e0();
    uStack_2068 = FUN_101c19e0();
    uStack_206c = 0;
    FUN_10021a00(0,0,uStack_2068,uVar2,0);
  }
  iVar5 = *(int *)(in_ECX + 0x1d4);
  local_1010[0] = 0;
  if (iVar5 == 0) {
    puVar3 = FString::operator*((FString *)(GL2GameData_exref + 0x42950));
    FString::FString(local_2028,puVar3);
    local_4 = 0;
    local_203c = CONCAT44(local_203c._4_4_,&stack0xffffdfa0);
    uStack_2068 = 0x100b2eb6;
    FUN_100abd40();
    local_4._0_1_ = 1;
    local_2040 = (undefined1 *)&uStack_206c;
    FString::FString((FString *)&uStack_206c,(ushort *)&DAT_10251894);
    local_4 = (uint)local_4._1_3_ << 8;
    pFVar4 = (FString *)FString::Substitute(local_2028,local_201c);
    local_4._0_1_ = 3;
    FString::operator=(local_2028,pFVar4);
    local_4 = (uint)local_4._1_3_ << 8;
    FString::~FString(local_201c);
    FString::operator*(local_2028);
    appSprintf(local_2010,(ushort *)&DAT_1022dde0);
    local_4 = 0xffffffff;
    FString::~FString(local_2028);
  }
  else if (iVar5 == 1) {
    puVar3 = FString::operator*((FString *)(GL2GameData_exref + 0x41d74));
    FString::FString(local_2034,puVar3);
    local_4 = 4;
    FUN_100abd40();
    local_4._0_1_ = 5;
    local_203c = CONCAT44(local_203c._4_4_,&stack0xffffdfa0);
    uStack_2068 = 0x100b2fa7;
    FString::FString((FString *)&stack0xffffdfa0,local_201c);
    local_4._0_1_ = 6;
    local_2040 = (undefined1 *)&uStack_206c;
    FString::FString((FString *)&uStack_206c,(ushort *)&DAT_10251894);
    local_4._0_1_ = 5;
    FString::Substitute(local_2034,local_2028);
    local_4 = CONCAT31(local_4._1_3_,8);
    iVar5 = FString::operator==(local_2034,local_2028);
    if (iVar5 != 0) {
      pFVar4 = FString::operator+=(local_201c,local_2034);
      FString::operator=(local_2028,pFVar4);
    }
    FString::operator*((FString *)(in_ECX + 0x22c));
    FString::operator*(local_2028);
    uStack_2068 = 0x100b303f;
    appSprintf(local_2010,(ushort *)L"%s %s");
    local_4._0_1_ = 5;
    FString::~FString(local_2028);
    local_4 = CONCAT31(local_4._1_3_,4);
    FString::~FString(local_201c);
    local_4 = 0xffffffff;
    FString::~FString(local_2034);
  }
  else if (iVar5 == 2) {
    puVar3 = FString::operator*((FString *)(GL2GameData_exref + 0x429ac));
    FString::FString(local_2034,puVar3);
    local_4 = 9;
    local_203c = CONCAT44(local_203c._4_4_,&stack0xffffdfa0);
    uStack_2068 = 0x100b30c4;
    FString::FString((FString *)&stack0xffffdfa0,(FString *)(in_ECX + 0x21c));
    local_4._0_1_ = 10;
    local_2040 = (undefined1 *)&uStack_206c;
    FString::FString((FString *)&uStack_206c,(ushort *)&DAT_10251894);
    local_4._0_1_ = 9;
    pFVar4 = (FString *)FString::Substitute(local_2034,local_201c);
    local_4._0_1_ = 0xc;
    FString::operator=(local_2034,pFVar4);
    local_4 = CONCAT31(local_4._1_3_,9);
    FString::~FString(local_201c);
    FString::operator*(local_2034);
    appSprintf(local_2010,(ushort *)&DAT_1022dde0);
    local_4 = 0xffffffff;
    FString::~FString(local_2034);
  }
  else {
    if (iVar5 == 3) {
      puVar3 = FString::operator*((FString *)(GL2GameData_exref + 0x41d18));
    }
    else {
      if (iVar5 != 4) goto LAB_100b319a;
      puVar3 = FString::operator*((FString *)(GL2GameData_exref + 0x42a08));
    }
    appSprintf(local_2010,puVar3);
  }
LAB_100b319a:
  FUN_101c19e0();
  FUN_101c19e0();
  uStack_2068 = 0x100b31d0;
  FUN_100c73d0();
  local_2040 = (undefined1 *)CONCAT22(local_2040._2_2_,in_FPUControlWord);
  uStack_2068 = 0;
  uStack_206c = 0;
  local_203c = (longlong)ROUND(*(float *)(in_ECX + 0x88) - 22.0);
  FUN_100217a0(0xb,0x10,0xffdcdcdc,local_1010,(undefined4)local_203c,0,0,0,0,0);
  FUN_100212e0();
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  ExceptionList = local_c;
  __security_check_cookie(local_10 ^ (uint)&local_2040);
  return;
}


// ==== 100b3270 FUN_100b3270

undefined4 FUN_100b3270(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int in_ECX;
  int iVar6;
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
  undefined4 uVar17;
  undefined4 uVar18;
  
  iVar2 = param_1;
  uVar3 = *(undefined4 *)(in_ECX + 0x80);
  uVar4 = *(undefined4 *)(in_ECX + 0x84);
  *(undefined4 *)(param_1 + 0x38) = uVar3;
  *(undefined4 *)(param_1 + 0x3c) = uVar4;
  *(undefined4 *)(param_1 + 0x6c) = uVar3;
  *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(param_1 + 0x3c);
  *(undefined4 *)(param_1 + 0x58) = 0;
  uVar3 = FUN_101c19e0();
  uVar4 = FUN_101c19e0(uVar3);
  FUN_10021df0(*(undefined4 *)(in_ECX + 0x80),*(undefined4 *)(in_ECX + 0x84),uVar4,uVar3);
  if (*(int *)(in_ECX + 0x1e4) != 0) {
    FUN_10021a00(0,0,8,8,0,0,8,8,*(int *)(in_ECX + 0x1e4),0xff,1);
  }
  iVar5 = *(int *)(in_ECX + 0x1e8);
  if (iVar5 != 0) {
    uVar17 = 0xff;
    uVar14 = 1;
    uVar4 = 8;
    uVar3 = FUN_101c19e0(8,iVar5,1,0xff);
    FUN_100218f0(8,0,uVar3,uVar4,iVar5,uVar14,uVar17);
  }
  iVar5 = *(int *)(in_ECX + 0x1ec);
  if (iVar5 != 0) {
    uVar18 = 1;
    uVar15 = 0xff;
    uVar11 = 8;
    uVar9 = 8;
    uVar8 = 0;
    uVar7 = 0;
    uVar17 = 8;
    uVar14 = 8;
    uVar4 = 0;
    uVar3 = FUN_101c19e0(0,8,8,0,0,8,8,iVar5,0xff,1);
    FUN_10021a00(uVar3,uVar4,uVar14,uVar17,uVar7,uVar8,uVar9,uVar11,iVar5,uVar15,uVar18);
  }
  iVar5 = *(int *)(in_ECX + 0x1f0);
  if (iVar5 != 0) {
    uVar14 = 0xff;
    uVar4 = 1;
    uVar3 = FUN_101c19e0(iVar5,1,0xff);
    FUN_100218f0(0,8,8,uVar3,iVar5,uVar4,uVar14);
  }
  iVar5 = *(int *)(in_ECX + 500);
  if (iVar5 != 0) {
    uVar17 = 0xff;
    uVar14 = 1;
    uVar3 = FUN_101c19e0(iVar5,1,0xff);
    uVar4 = FUN_101c19e0(uVar3);
    FUN_100218f0(8,8,uVar4,uVar3,iVar5,uVar14,uVar17);
  }
  iVar5 = *(int *)(in_ECX + 0x1f8);
  if (iVar5 != 0) {
    uVar8 = 0xff;
    uVar7 = 1;
    uVar3 = FUN_101c19e0(iVar5,1,0xff);
    uVar17 = 8;
    uVar14 = 8;
    uVar4 = FUN_101c19e0(8,8,uVar3);
    FUN_100218f0(uVar4,uVar14,uVar17,uVar3,iVar5,uVar7,uVar8);
  }
  iVar5 = *(int *)(in_ECX + 0x1fc);
  if (iVar5 != 0) {
    uVar15 = 1;
    uVar11 = 0xff;
    uVar9 = 8;
    uVar8 = 8;
    uVar7 = 0;
    uVar17 = 0;
    uVar14 = 8;
    uVar4 = 8;
    uVar3 = FUN_101c19e0(8,8,0,0,8,8,iVar5,0xff,1);
    FUN_10021a00(0,uVar3,uVar4,uVar14,uVar17,uVar7,uVar8,uVar9,iVar5,uVar11,uVar15);
  }
  iVar5 = *(int *)(in_ECX + 0x200);
  if (iVar5 != 0) {
    uVar7 = 0xff;
    uVar17 = 1;
    uVar14 = 8;
    uVar3 = FUN_101c19e0(8,iVar5,1,0xff);
    uVar4 = FUN_101c19e0(uVar3);
    FUN_100218f0(8,uVar4,uVar3,uVar14,iVar5,uVar17,uVar7);
  }
  iVar5 = *(int *)(in_ECX + 0x204);
  if (iVar5 != 0) {
    uVar18 = 1;
    uVar15 = 0xff;
    uVar11 = 8;
    uVar9 = 8;
    uVar8 = 0;
    uVar7 = 0;
    uVar17 = 8;
    uVar14 = 8;
    uVar3 = FUN_101c19e0(8,8,0,0,8,8,iVar5,0xff,1);
    uVar4 = FUN_101c19e0(uVar3);
    FUN_10021a00(uVar4,uVar3,uVar14,uVar17,uVar7,uVar8,uVar9,uVar11,iVar5,uVar15,uVar18);
  }
  iVar5 = *(int *)(in_ECX + 0x1d8);
  param_1 = 0;
  if (0 < iVar5) {
    iVar6 = 4;
    do {
      piVar1 = *(int **)(*(int *)(in_ECX + 0x1d4) + param_1 * 4);
      if (param_1 == *(int *)(in_ECX + 0x1e0)) {
        uVar3 = 0xff;
        if (param_1 == iVar5 + -1) {
          uVar4 = *(undefined4 *)(in_ECX + 0x208);
          uVar11 = 0xd;
          uVar9 = 0x10;
          uVar8 = 0;
          uVar7 = 0;
          uVar17 = 0x11;
          iVar5 = iVar6 + 2;
          uVar14 = FUN_101c19e0(0x11,0,0,0x10,0xd,uVar4);
          FUN_10021970(2,iVar5,uVar14,uVar17,uVar7,uVar8,uVar9,uVar11,uVar4,uVar3);
          uVar3 = *(undefined4 *)(in_ECX + 0x20c);
        }
        else {
          uVar4 = *(undefined4 *)(in_ECX + 0x208);
          uVar11 = 0xd;
          uVar9 = 0x10;
          uVar8 = 0;
          uVar7 = 0;
          uVar17 = 0x11;
          iVar5 = iVar6 + -2;
          uVar14 = FUN_101c19e0(0x11,0,0,0x10,0xd,uVar4,0xff);
          FUN_10021970(2,iVar5,uVar14,uVar17,uVar7,uVar8,uVar9,uVar11,uVar4,uVar3);
          uVar3 = *(undefined4 *)(in_ECX + 0x20c);
        }
        uVar15 = 0xff;
        uVar11 = 0xd;
        uVar9 = 0x20;
        uVar8 = 0;
        uVar7 = 0;
        uVar17 = 0x11;
        uVar14 = 0x20;
        uVar4 = FUN_101c19e0(iVar5,0x20,0x11,0,0,0x20,0xd,uVar3,0xff);
        FUN_10021970(uVar4,iVar5,uVar14,uVar17,uVar7,uVar8,uVar9,uVar11,uVar3,uVar15);
      }
      if (piVar1[2] != 0) {
        FUN_10021a00(4,iVar6,0xd,0xd,0,0,0xd,0xd,piVar1[2],0xff,1);
      }
      if (param_1 == *(int *)(in_ECX + 0x1d8) + -1) {
        if (*piVar1 != 0) {
          iVar5 = FUN_1004f5c0(0);
          if (iVar5 == 0) goto LAB_100b3687;
          uVar14 = 0;
          uVar4 = 0xff7e7e7e;
          iVar5 = iVar6;
          uVar3 = FUN_101c19e0(iVar6,0xff7e7e7e,0);
          FUN_10020e80(4,iVar6,uVar3,iVar5,uVar4,uVar14);
          uVar16 = 0xffffffff;
          uVar13 = 0;
          uVar12 = 0;
          uVar10 = 0;
          uVar18 = 0;
          uVar15 = 0;
          uVar11 = 0;
          uVar9 = 0;
          uVar8 = 0;
          uVar7 = 0;
          uVar17 = 0;
          uVar14 = 0;
          if (DAT_1037c9d0 == 0) {
            uVar3 = FUN_1004f5c0(0);
            uVar4 = 0xffdcdcdc;
            iVar5 = iVar6 + 6;
          }
          else {
            uVar3 = FUN_1004f5c0(0);
            uVar4 = 0xff7e7e7e;
            iVar5 = iVar6 + 4;
          }
          goto LAB_100b36c5;
        }
      }
      else {
LAB_100b3687:
        if ((*piVar1 != 0) && (iVar5 = FUN_1004f5c0(0), iVar5 != 0)) {
          uVar16 = 0xffffffff;
          uVar13 = 0;
          uVar12 = 0;
          uVar10 = 0;
          uVar18 = 0;
          uVar15 = 0;
          uVar11 = 0;
          uVar9 = 0;
          uVar8 = 0;
          uVar7 = 0;
          uVar17 = 0;
          uVar14 = 0;
          uVar3 = FUN_1004f5c0(0);
          uVar4 = 0xffdcdcdc;
          iVar5 = iVar6 + 2;
LAB_100b36c5:
          FUN_100217a0(0x16,iVar5,uVar4,uVar3,uVar14,uVar17,uVar7,uVar8,uVar9,uVar11,uVar15,uVar18,
                       uVar10,uVar12,uVar13,uVar16);
        }
      }
      iVar5 = *(int *)(in_ECX + 0x1d8);
      param_1 = param_1 + 1;
      iVar6 = iVar6 + 0x11;
    } while (param_1 < iVar5);
  }
  FUN_100212e0();
  *(undefined4 *)(iVar2 + 0x38) = 0;
  *(undefined4 *)(iVar2 + 0x3c) = 0;
  return 1;
}


// ==== 100b3710 FUN_100b3710

undefined4 FUN_100b3710(void)

{
  undefined4 uVar1;
  UObject *pUVar2;
  int iVar3;
  int *piVar4;
  UPackage *pUVar5;
  int in_ECX;
  uint uVar6;
  undefined4 *puVar7;
  bool bVar8;
  void *pvVar9;
  UPackage *pUStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined4 uStack_168;
  undefined4 uStack_164;
  uint uStack_160;
  UPackage *pUStack_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
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
  undefined4 local_28 [7];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_101f2813;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_10061b40();
  pwStack_48 = L"L2UI_CH3.Msn.msn_optionback2";
  uStack_4c = 0x100b3754;
  uVar1 = FUN_1003f630();
  *(undefined4 *)(in_ECX + 0x204) = uVar1;
  pwStack_48 = (wchar_t *)0x100b3766;
  FName::FName((FName *)local_28,0);
  pUStack_5c = UObject::GetTransientPackage();
  uStack_4c = *(undefined4 *)GError_exref;
  pwStack_48 = (wchar_t *)0x0;
  uStack_50 = 0;
  uStack_54 = 0;
  uStack_58 = local_28[0];
  uStack_64 = 0x100b3792;
  pUVar2 = UObject::StaticAllocateObject();
  if (pUVar2 == (UObject *)0x0) {
    iVar3 = 0;
  }
  else {
    pwStack_48 = (wchar_t *)0x0;
    uStack_4c = 1;
    uStack_50 = 0x100b37a6;
    iVar3 = FUN_1001c510();
  }
  uVar1 = 3;
  pwStack_48 = (wchar_t *)0x0;
  uStack_4c = 0;
  *(int *)(in_ECX + 0xc0) = iVar3;
  *(undefined4 *)(in_ECX + 200) = 0xa53;
  uStack_50 = 0x14;
  *(undefined4 *)(iVar3 + 0x1cc) = 0xa53;
  uStack_54 = 0x100;
  uStack_58 = 0;
  pUStack_5c = (UPackage *)0x0;
  (**(code **)(**(int **)(in_ECX + 0xc0) + 0xc0))();
  uStack_64 = *(undefined4 *)(in_ECX + 0xc0);
  uStack_68 = 0x100b37f2;
  FUN_10060d40();
  uStack_64 = 0x100b37fe;
  FUN_1005c1e0();
  uStack_64 = 0x100b380a;
  FName::FName((FName *)&stack0xffffffbc,0);
  uStack_74 = uVar1;
  pUStack_78 = UObject::GetTransientPackage();
  uStack_68 = *(undefined4 *)GError_exref;
  uStack_64 = 0;
  uStack_6c = 0;
  uStack_70 = 0;
  puStack_80 = (undefined4 *)0x100b382a;
  pUVar2 = UObject::StaticAllocateObject();
  if (pUVar2 == (UObject *)0x0) {
    iVar3 = 0;
  }
  else {
    uStack_64 = 0;
    uStack_68 = 0x108;
    uStack_6c = 1;
    uStack_70 = 0;
    uStack_74 = 0;
    pUStack_78 = (UPackage *)0x100b3847;
    iVar3 = FUN_1001a820();
  }
  uVar1 = 3;
  uStack_64 = 0;
  uStack_68 = 0;
  *(int *)(in_ECX + 0x1d4) = iVar3;
  uStack_6c = 0x10;
  *(undefined4 *)(iVar3 + 0x1cc) = 0xa1a;
  uStack_70 = 0xdc;
  uStack_74 = 0x34;
  pUStack_78 = (UPackage *)0x12;
  (**(code **)(**(int **)(in_ECX + 0x1d4) + 0xc0))();
  puStack_80 = *(undefined4 **)(in_ECX + 0x1d4);
  ppUStack_84 = (UPackage **)0x100b388c;
  FUN_10060d40();
  puStack_80 = (undefined4 *)0x100b3898;
  FUN_1005c1e0();
  puStack_80 = (undefined4 *)0x100b38a4;
  FName::FName((FName *)&stack0xffffffa0,0);
  uStack_90 = uVar1;
  pUStack_94 = UObject::GetTransientPackage();
  ppUStack_84 = *(UPackage ***)GError_exref;
  puStack_80 = (undefined4 *)0x0;
  uStack_88 = 0;
  uStack_8c = 0;
  pUVar2 = UObject::StaticAllocateObject();
  if (pUVar2 == (UObject *)0x0) {
    uVar1 = 0;
  }
  else {
    puStack_80 = (undefined4 *)0x100b38dc;
    FString::FString((FString *)&uStack_50,(ushort *)L"L2UI_ch3.button.btn1_normalon");
    uStack_64 = 1;
    puStack_80 = (undefined4 *)0x100b38fb;
    FString::FString((FString *)&pUStack_5c,(ushort *)L"L2UI_ch3.button.btn1_normal");
    puStack_80 = &uStack_50;
    ppUStack_84 = &pUStack_5c;
    uStack_64 = 3;
    uStack_88 = 0x100b391e;
    uVar1 = FUN_10006980();
  }
  *(undefined4 *)(in_ECX + 0x1d8) = uVar1;
  uVar6 = uStack_64;
  if ((uStack_64 & 2) != 0) {
    uVar6 = uStack_64 & 0xfffffffd;
    uStack_64 = uVar6;
    FString::~FString((FString *)&pUStack_5c);
  }
  if ((uVar6 & 1) != 0) {
    uStack_64 = uVar6 & 0xfffffffe;
    FString::~FString((FString *)&uStack_50);
  }
  puStack_80 = (undefined4 *)0x0;
  ppUStack_84 = (UPackage **)0x0;
  uStack_88 = 0x17;
  *(undefined4 *)(*(int *)(in_ECX + 0x1d8) + 0x1cc) = 0xa1b;
  uStack_8c = 0x4c;
  uStack_90 = 0x67;
  pUStack_94 = (UPackage *)0x10;
  (**(code **)(**(int **)(in_ECX + 0x1d8) + 0xc0))();
  FUN_10060d40();
  FUN_1005c1e0();
  FUN_10003cf0();
  FName::FName((FName *)&stack0xffffff84,0);
  UObject::GetTransientPackage();
  pUVar2 = UObject::StaticAllocateObject();
  if (pUVar2 == (UObject *)0x0) {
    uVar1 = 0;
  }
  else {
    FString::FString((FString *)&pUStack_78,(ushort *)L"L2UI_ch3.button.btn1_normalon");
    uStack_58 = 2;
    puStack_80 = (undefined4 *)((uint)puStack_80 | 4);
    FString::FString((FString *)&uStack_6c,(ushort *)L"L2UI_ch3.button.btn1_normal");
    uStack_58 = 3;
    puStack_80 = (undefined4 *)((uint)puStack_80 | 8);
    uVar1 = FUN_10006980();
  }
  *(undefined4 *)(in_ECX + 0x1dc) = uVar1;
  uStack_58 = 2;
  puVar7 = puStack_80;
  if (((uint)puStack_80 & 8) != 0) {
    puVar7 = (undefined4 *)((uint)puStack_80 & 0xfffffff7);
    puStack_80 = puVar7;
    FString::~FString((FString *)&uStack_6c);
  }
  uStack_58 = 0xffffffff;
  if (((uint)puVar7 & 4) != 0) {
    puStack_80 = (undefined4 *)((uint)puVar7 & 0xfffffffb);
    FString::~FString((FString *)&pUStack_78);
  }
  *(undefined4 *)(*(int *)(in_ECX + 0x1dc) + 0x1cc) = 0xa1c;
  (**(code **)(**(int **)(in_ECX + 0x1dc) + 0xc0))();
  FUN_10060d40();
  FUN_1005c1e0();
  FUN_10003cf0();
  FName::FName((FName *)&stack0xffffff68,0);
  UObject::GetTransientPackage();
  pUVar2 = UObject::StaticAllocateObject();
  bVar8 = pUVar2 == (UObject *)0x0;
  if (bVar8) {
    uVar1 = 0;
  }
  else {
    FString::FString((FString *)&pUStack_94,(ushort *)L"L2UI_ch3.button.btn1_normalon");
    uStack_74 = 4;
    FString::FString((FString *)&uStack_88,(ushort *)L"L2UI_ch3.button.btn1_normal");
    uStack_74 = 5;
    uVar1 = FUN_10006980();
  }
  *(undefined4 *)(in_ECX + 0x1e0) = uVar1;
  uStack_74 = 4;
  if (!bVar8) {
    FString::~FString((FString *)&uStack_88);
  }
  uStack_74 = 0xffffffff;
  if (!bVar8) {
    FString::~FString((FString *)&pUStack_94);
  }
  *(undefined4 *)(*(int *)(in_ECX + 0x1e0) + 0x1cc) = 0xa1d;
  (**(code **)(**(int **)(in_ECX + 0x1e0) + 0xc0))();
  FUN_10060d40();
  FUN_1005c1e0();
  FUN_10003cf0();
  FName::FName((FName *)&stack0xffffff4c,0);
  UObject::GetTransientPackage();
  pUVar2 = UObject::StaticAllocateObject();
  if (pUVar2 == (UObject *)0x0) {
    piVar4 = (int *)0x0;
  }
  else {
    piVar4 = (int *)FUN_10009930();
  }
  *(int **)(in_ECX + 0x1e4) = piVar4;
  (**(code **)(*piVar4 + 0xc0))();
  FUN_10060d40();
  FUN_1005c1e0();
  FName::FName((FName *)&stack0xffffff30,0);
  UObject::GetTransientPackage();
  pUVar2 = UObject::StaticAllocateObject();
  if (pUVar2 == (UObject *)0x0) {
    piVar4 = (int *)0x0;
  }
  else {
    piVar4 = (int *)FUN_10009930();
  }
  *(int **)(in_ECX + 0x1e8) = piVar4;
  (**(code **)(*piVar4 + 0xc0))();
  FUN_10060d40();
  FUN_1005c1e0();
  FName::FName((FName *)&stack0xffffff14,0);
  UObject::GetTransientPackage();
  pUVar2 = UObject::StaticAllocateObject();
  if (pUVar2 == (UObject *)0x0) {
    piVar4 = (int *)0x0;
  }
  else {
    piVar4 = (int *)FUN_10009930();
  }
  *(int **)(in_ECX + 0x1ec) = piVar4;
  (**(code **)(*piVar4 + 0xc0))();
  FUN_10060d40();
  FUN_1005c1e0();
  FName::FName((FName *)&stack0xfffffef8,0);
  UObject::GetTransientPackage();
  uStack_144 = 0x100b3dda;
  pUVar2 = UObject::StaticAllocateObject();
  if (pUVar2 == (UObject *)0x0) {
    piVar4 = (int *)0x0;
  }
  else {
    piVar4 = (int *)FUN_10009930();
  }
  uVar1 = 3;
  *(int **)(in_ECX + 0x1f0) = piVar4;
  (**(code **)(*piVar4 + 0xc0))();
  uStack_144 = *(undefined4 *)(in_ECX + 0x1f0);
  uStack_148 = 0x100b3e2d;
  FUN_10060d40();
  uStack_144 = 0x100b3e39;
  FUN_1005c1e0();
  uStack_144 = 0x100b3e45;
  FName::FName((FName *)&stack0xfffffedc,0);
  uStack_154 = uVar1;
  pUStack_158 = UObject::GetTransientPackage();
  uStack_148 = *(undefined4 *)GError_exref;
  uStack_144 = 0;
  uStack_14c = 0;
  uStack_150 = 0;
  uStack_160 = 0x100b3e65;
  pUVar2 = UObject::StaticAllocateObject();
  if (pUVar2 == (UObject *)0x0) {
    piVar4 = (int *)0x0;
  }
  else {
    uStack_144 = 0;
    uStack_148 = 0;
    uStack_14c = 0x3df;
    uStack_150 = 0x100b3e7e;
    piVar4 = (int *)FUN_10009930();
  }
  uVar1 = 3;
  uStack_144 = 0;
  uStack_148 = 0;
  uStack_14c = 0x14;
  uStack_150 = 0xfa;
  *(int **)(in_ECX + 500) = piVar4;
  uStack_154 = 0xe8;
  pUStack_158 = (UPackage *)0x14;
  (**(code **)(*piVar4 + 0xc0))();
  uStack_160 = *(undefined4 *)(in_ECX + 500);
  uStack_164 = 0x100b3eb8;
  FUN_10060d40();
  uStack_160 = 0x100b3ec4;
  FUN_1005c1e0();
  uStack_160 = 0x100b3ed0;
  FName::FName((FName *)&stack0xfffffec0,0);
  uStack_170 = uVar1;
  pUStack_174 = UObject::GetTransientPackage();
  uStack_164 = *(undefined4 *)GError_exref;
  uStack_160 = 0;
  uStack_168 = 0;
  uStack_16c = 0;
  pUVar2 = UObject::StaticAllocateObject();
  if (pUVar2 == (UObject *)0x0) {
    piVar4 = (int *)0x0;
  }
  else {
    uStack_160 = 0;
    uStack_164 = 0;
    uStack_168 = 0x3e0;
    uStack_16c = 0x100b3f0c;
    piVar4 = (int *)FUN_10009930();
  }
  uVar1 = 3;
  uStack_160 = 0;
  uStack_164 = 0;
  uStack_168 = 0x1e;
  uStack_16c = 0xfa;
  *(int **)(in_ECX + 0x1f8) = piVar4;
  uStack_170 = 0xfb;
  pUStack_174 = (UPackage *)0x14;
  (**(code **)(*piVar4 + 0xc0))();
  FUN_10060d40(*(undefined4 *)(in_ECX + 0x1f8));
  FUN_1005c1e0();
  FName::FName((FName *)&stack0xfffffea4,0);
  pUVar5 = UObject::GetTransientPackage();
  pUVar2 = UObject::StaticAllocateObject
                     (&DAT_10357870,pUVar5,uVar1,0,0,*(undefined4 *)GError_exref,0);
  if (pUVar2 == (UObject *)0x0) {
    uVar1 = 0;
  }
  else {
    FString::FString((FString *)&pUStack_158,(ushort *)L"L2UI_CH3.Button.Btn1_NormalOn");
    uStack_160 = uStack_160 | 0x40;
    FString::FString((FString *)&uStack_14c,(ushort *)L"L2UI_CH3.Button.Btn1_Normal");
    uStack_160 = uStack_160 | 0x80;
    uVar1 = FUN_10006980(&uStack_14c,&pUStack_158);
  }
  *(undefined4 *)(in_ECX + 0x1fc) = uVar1;
  uVar6 = uStack_160;
  if ((char)uStack_160 < '\0') {
    uVar6 = uStack_160 & 0xffffff7f;
    uStack_160 = uVar6;
    FString::~FString((FString *)&uStack_14c);
  }
  if ((uVar6 & 0x40) != 0) {
    uVar6 = uVar6 & 0xffffffbf;
    uStack_160 = uVar6;
    FString::~FString((FString *)&pUStack_158);
  }
  pvVar9 = (void *)0x3;
  *(undefined4 *)(*(int *)(in_ECX + 0x1fc) + 0x1cc) = 0xa17;
  (**(code **)(**(int **)(in_ECX + 0x1fc) + 0xc0))(0x32,0x121,0x4c,0x17,0,0);
  uVar1 = FUN_10060d40(*(undefined4 *)(in_ECX + 0x1fc),2);
  FUN_1005c1e0(uVar1);
  FUN_10003cf0(0x8c);
  FName::FName((FName *)&stack0xfffffe88,0);
  pUVar5 = UObject::GetTransientPackage();
  pUVar2 = UObject::StaticAllocateObject
                     (&DAT_10357870,pUVar5,pvVar9,0,0,*(undefined4 *)GError_exref,0,0);
  if (pUVar2 == (UObject *)0x0) {
    uVar1 = 0;
  }
  else {
    FString::FString((FString *)&pUStack_174,(ushort *)L"L2UI_CH3.Button.Btn1_NormalOn");
    uStack_154 = 8;
    FString::FString((FString *)&uStack_168,(ushort *)L"L2UI_CH3.Button.Btn1_Normal");
    uStack_154 = 9;
    uVar6 = uVar6 | 0x300;
    uVar1 = FUN_10006980(&uStack_168,&pUStack_174,0);
  }
  *(undefined4 *)(in_ECX + 0x200) = uVar1;
  uStack_154 = 8;
  if ((uVar6 & 0x200) != 0) {
    uVar6 = uVar6 & 0xfffffdff;
    FString::~FString((FString *)&uStack_168);
  }
  uStack_154 = 0xffffffff;
  if ((uVar6 & 0x100) != 0) {
    FString::~FString((FString *)&pUStack_174);
  }
  *(undefined4 *)(*(int *)(in_ECX + 0x200) + 0x1cc) = 0xa18;
  (**(code **)(**(int **)(in_ECX + 0x200) + 0xc0))(0x82,0x121,0x4c,0x17,0,0,3);
  uVar1 = FUN_10060d40(*(undefined4 *)(in_ECX + 0x200),2);
  FUN_1005c1e0(uVar1);
  FUN_10003cf0(0x8d);
  ExceptionList = pvVar9;
  return 1;
}


// ==== 100b41e0 FUN_100b41e0

undefined4 FUN_100b41e0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  ushort *puVar4;
  int in_ECX;
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
  
  uVar2 = *(undefined4 *)(in_ECX + 0x80);
  uVar3 = *(undefined4 *)(in_ECX + 0x84);
  *(undefined4 *)(param_1 + 0x38) = uVar2;
  *(undefined4 *)(param_1 + 0x3c) = uVar3;
  *(undefined4 *)(param_1 + 0x6c) = uVar2;
  *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(param_1 + 0x3c);
  *(undefined4 *)(param_1 + 0x58) = 0;
  uVar2 = FUN_101c19e0();
  uVar3 = FUN_101c19e0(uVar2);
  FUN_10021df0(*(undefined4 *)(in_ECX + 0x80),*(undefined4 *)(in_ECX + 0x84),uVar3,uVar2);
  iVar1 = *(int *)(in_ECX + 0x204);
  if (iVar1 != 0) {
    uVar2 = FUN_101c19e0();
    uVar3 = FUN_101c19e0();
    FUN_10021a00(0,0x14,uVar3,uVar2,0,0,uVar3,uVar2,iVar1,0xff,1);
  }
  uVar14 = 0xffffffff;
  uVar13 = 0;
  uVar12 = 0;
  uVar11 = 0;
  uVar10 = 0;
  uVar9 = 0;
  uVar8 = 0;
  uVar7 = 0;
  uVar6 = 0;
  uVar5 = 0;
  uVar3 = 0;
  uVar2 = 0;
  puVar4 = FString::operator*((FString *)(GL2GameData_exref + 0x6d828));
  FUN_100217a0(0x16,0x1f,0xffdcdcdc,puVar4,uVar2,uVar3,uVar5,uVar6,uVar7,uVar8,uVar9,uVar10,uVar11,
               uVar12,uVar13,uVar14);
  uVar14 = 0xffffffff;
  uVar13 = 0;
  uVar12 = 0;
  uVar11 = 0;
  uVar10 = 0;
  uVar9 = 0;
  uVar8 = 0;
  uVar7 = 0;
  uVar6 = 0;
  uVar5 = 0;
  uVar3 = 0;
  uVar2 = 0;
  puVar4 = FString::operator*((FString *)(GL2GameData_exref + 0x6d834));
  FUN_100217a0(0x16,0x52,0xffdcdcdc,puVar4,uVar2,uVar3,uVar5,uVar6,uVar7,uVar8,uVar9,uVar10,uVar11,
               uVar12,uVar13,uVar14);
  uVar14 = 0xffffffff;
  uVar13 = 0;
  uVar12 = 0;
  uVar11 = 0;
  uVar10 = 0;
  uVar9 = 0;
  uVar8 = 0;
  uVar7 = 0;
  uVar6 = 0;
  uVar5 = 0;
  uVar3 = 0;
  uVar2 = 0;
  puVar4 = FString::operator*((FString *)(GL2GameData_exref + 0x6d840));
  FUN_100217a0(0x16,0x87,0xffdcdcdc,puVar4,uVar2,uVar3,uVar5,uVar6,uVar7,uVar8,uVar9,uVar10,uVar11,
               uVar12,uVar13,uVar14);
  FUN_100212e0();
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  return 1;
}


// ==== 100b4330 FUN_100b4330

void FUN_100b4330(void)

{
  int iVar1;
  FString *this;
  ushort *puVar2;
  int in_ECX;
  undefined4 uVar3;
  FString aFStack_18 [12];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_101f2839;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  (**(code **)(**(int **)(in_ECX + 0x1d4) + 0x174))(DAT_103554c4 ^ (uint)&stack0xffffffe4);
  iVar1 = FUN_100aa590();
  if (iVar1 != 0) {
    this = (FString *)FUN_100abd40(aFStack_18);
    uStack_4 = 0;
    uVar3 = 1;
    puVar2 = FString::operator*(this);
    FUN_10016ea0(puVar2,uVar3);
    uStack_4 = 0xffffffff;
    FString::~FString(aFStack_18);
  }
  *(undefined4 *)(*(int *)(in_ECX + 0x1e4) + 0x2fc) = *(undefined4 *)GMsnLoginAlarm_exref;
  *(undefined4 *)(*(int *)(in_ECX + 0x1e8) + 0x2fc) = *(undefined4 *)GMsnMessageAlarm_exref;
  *(undefined4 *)(*(int *)(in_ECX + 0x1ec) + 0x2fc) = *(undefined4 *)GMsnNewEMailAlarm_exref;
  *(undefined4 *)(*(int *)(in_ECX + 0x1f0) + 0x2fc) = *(undefined4 *)GMsnSoundAlarm_exref;
  *(undefined4 *)(*(int *)(in_ECX + 500) + 0x2fc) = *(undefined4 *)GMsnDontDisturb_exref;
  *(undefined4 *)(*(int *)(in_ECX + 0x1f8) + 0x2fc) = *(undefined4 *)GMsnHideAll_exref;
  ExceptionList = local_c;
  return;
}


// ==== 100b4440 FUN_100b4440

undefined4 FUN_100b4440(void)

{
  int iVar1;
  ushort *puVar2;
  int *in_ECX;
  wchar_t *pwStack_24;
  undefined4 uStack_20;
  wchar_t *pwStack_1c;
  uint uStack_18;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_101f2869;
  local_c = ExceptionList;
  uStack_18 = DAT_103554c4 ^ (uint)&stack0xffffffec;
  ExceptionList = &local_c;
  pwStack_1c = L"삅㭴躋ǔ";
  iVar1 = (**(code **)(*(int *)in_ECX[0x75] + 0x1f8))();
  if (iVar1 != 0) {
    pwStack_1c = L"\xec83謌觌⑤倔ᗿ쐨ဢ䓇․";
    puVar2 = (ushort *)(**(code **)(*(int *)in_ECX[0x75] + 0x1f8))();
    FString::FString((FString *)&pwStack_24,puVar2);
    uStack_4 = 0xffffffff;
    FUN_100a9da0();
  }
  *(undefined4 *)GMsnLoginAlarm_exref = *(undefined4 *)(in_ECX[0x79] + 0x2fc);
  *(undefined4 *)GMsnMessageAlarm_exref = *(undefined4 *)(in_ECX[0x7a] + 0x2fc);
  *(undefined4 *)GMsnNewEMailAlarm_exref = *(undefined4 *)(in_ECX[0x7b] + 0x2fc);
  *(undefined4 *)GMsnSoundAlarm_exref = *(undefined4 *)(in_ECX[0x7c] + 0x2fc);
  *(undefined4 *)GMsnDontDisturb_exref = *(undefined4 *)(in_ECX[0x7d] + 0x2fc);
  *(undefined4 *)GMsnHideAll_exref = *(undefined4 *)(in_ECX[0x7e] + 0x2fc);
  uStack_20 = *(undefined4 *)GMsnLoginAlarm_exref;
  pwStack_1c = L"Option.ini";
  pwStack_24 = L"LoginAlarm";
  (**(code **)(**(int **)GConfig_exref + 0x24))(&DAT_10256814);
  (**(code **)(**(int **)GConfig_exref + 0x24))
            (&DAT_10256814,L"MessageAlarm",*(undefined4 *)GMsnMessageAlarm_exref,L"Option.ini");
  (**(code **)(**(int **)GConfig_exref + 0x24))
            (&DAT_10256814,L"NewEMailAlarm",*(undefined4 *)GMsnNewEMailAlarm_exref,L"Option.ini");
  (**(code **)(**(int **)GConfig_exref + 0x24))
            (&DAT_10256814,L"SoundAlarm",*(undefined4 *)GMsnSoundAlarm_exref,L"Option.ini");
  (**(code **)(**(int **)GConfig_exref + 0x24))
            (&DAT_10256814,L"DontDisturb",*(undefined4 *)GMsnDontDisturb_exref,L"Option.ini");
  (**(code **)(**(int **)GConfig_exref + 0x24))
            (&DAT_10256814,L"HideAll",*(undefined4 *)GMsnHideAll_exref);
  (**(code **)(*in_ECX + 0x13c))();
  ExceptionList = u_Option_ini_1023dfb4;
  return 1;
}


// ==== 100b4630 FUN_100b4630

void FUN_100b4630(int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  FString *pFVar4;
  int iVar5;
  ushort *puVar6;
  int in_ECX;
  uint uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined1 *puVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined1 auStack_23c [3];
  char local_239;
  uint local_238;
  FString local_234 [12];
  int local_228;
  FString local_224 [12];
  undefined1 local_218 [520];
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101f29b8;
  local_c = ExceptionList;
  local_10 = DAT_103554c4 ^ (uint)auStack_23c;
  uVar1 = DAT_103554c4 ^ (uint)&stack0xfffffdb4;
  ExceptionList = &local_c;
  local_238 = 0;
  uVar2 = *(undefined4 *)(in_ECX + 0x80);
  uVar3 = *(undefined4 *)(in_ECX + 0x84);
  *(undefined4 *)(param_1 + 0x38) = uVar2;
  *(undefined4 *)(param_1 + 0x3c) = uVar3;
  *(undefined4 *)(param_1 + 0x6c) = uVar2;
  *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(param_1 + 0x3c);
  *(undefined4 *)(param_1 + 0x58) = 0;
  uVar2 = FUN_101c19e0(uVar1);
  uVar3 = FUN_101c19e0(uVar2);
  FUN_10021df0(*(undefined4 *)(in_ECX + 0x80),*(undefined4 *)(in_ECX + 0x84),uVar3,uVar2);
  if (*(int *)(*(int *)(in_ECX + 0x1cc) + 0x4c) == 0) goto LAB_100b4d69;
  if (*(int *)(in_ECX + 0x2b0) != 0) {
    FUN_10021a00(0,0,0x100,0x161,0,0,0x100,0x161,*(int *)(in_ECX + 0x2b0),0xff,1);
  }
  pFVar4 = (FString *)FUN_100a98c0(local_224);
  local_4 = 0;
  iVar5 = FString::operator==(pFVar4,(ushort *)&DAT_10251d70);
  local_4 = 0xffffffff;
  FString::~FString(local_224);
  if (iVar5 == 0) {
    pFVar4 = (FString *)FUN_100a98c0(local_224);
    local_4 = 2;
    iVar5 = FString::operator==(pFVar4,(ushort *)&DAT_10251d3c);
    local_4 = 0xffffffff;
    FString::~FString(local_224);
    if (iVar5 != 0) {
      uVar17 = 1;
      uVar3 = 0xff;
      uVar2 = FUN_1003f630(L"L2UI_CH3.Msn.msnbigicon2",1);
      FUN_10021a00(9,10,0x1d,0x1d,0,0,0x1d,0x1d,uVar2,uVar3,uVar17);
      puVar6 = FString::operator*((FString *)(GL2GameData_exref + 0x6d888));
      pFVar4 = (FString *)FString::Printf((ushort *)local_224,L"(%s)",puVar6);
      local_4 = 3;
      goto LAB_100b47a7;
    }
    pFVar4 = (FString *)FUN_100a98c0(local_234);
    local_4 = 4;
    uVar1 = 1;
    local_238 = 1;
    iVar5 = FString::operator==(pFVar4,(ushort *)&DAT_10251d34);
    if (iVar5 == 0) {
      pFVar4 = (FString *)FUN_100a98c0(local_224);
      local_4 = 5;
      uVar1 = 3;
      local_238 = 3;
      iVar5 = FString::operator==(pFVar4,(ushort *)&DAT_10251d2c);
      local_239 = '\0';
      if (iVar5 != 0) goto LAB_100b48f8;
    }
    else {
LAB_100b48f8:
      local_239 = '\x01';
    }
    local_4 = 4;
    if ((uVar1 & 2) != 0) {
      uVar1 = uVar1 & 0xfffffffd;
      local_238 = uVar1;
      FString::~FString(local_224);
    }
    local_4 = 0xffffffff;
    if ((uVar1 & 1) != 0) {
      uVar1 = uVar1 & 0xfffffffe;
      local_238 = uVar1;
      FString::~FString(local_234);
    }
    if (local_239 != '\0') {
      uVar17 = 1;
      uVar3 = 0xff;
      uVar2 = FUN_1003f630(L"L2UI_CH3.Msn.msnbigicon2",1);
      FUN_10021a00(9,10,0x1d,0x1d,0,0,0x1d,0x1d,uVar2,uVar3,uVar17);
      puVar6 = FString::operator*((FString *)(GL2GameData_exref + 0x6d894));
      pFVar4 = (FString *)FString::Printf((ushort *)local_234,L"(%s)",puVar6);
      local_4 = 6;
LAB_100b4cb1:
      uVar18 = 0xffffffff;
      uVar16 = 0;
      uVar14 = 0;
      uVar13 = 0;
      uVar12 = 0;
      uVar11 = 0;
      uVar10 = 0;
      uVar9 = 0;
      uVar8 = 0;
      uVar17 = 0;
      uVar3 = 0;
      uVar2 = 0;
      puVar6 = FString::operator*(pFVar4);
      FUN_100217a0(0x34,0x1b,0xffb09b79,puVar6,uVar2,uVar3,uVar17,uVar8,uVar9,uVar10,uVar11,uVar12,
                   uVar13,uVar14,uVar16,uVar18);
      pFVar4 = local_234;
      goto LAB_100b4cec;
    }
    pFVar4 = (FString *)FUN_100a98c0(local_234);
    local_4 = 7;
    local_228 = FString::operator==(pFVar4,(ushort *)&DAT_10251d24);
    local_4 = 0xffffffff;
    FString::~FString(local_234);
    if (local_228 != 0) {
      uVar17 = 1;
      uVar3 = 0xff;
      uVar2 = FUN_1003f630(L"L2UI_CH3.Msn.msnbigicon2",1);
      FUN_10021a00(9,10,0x1d,0x1d,0,0,0x1d,0x1d,uVar2,uVar3,uVar17);
      puVar6 = FString::operator*((FString *)(GL2GameData_exref + 0x6d8ac));
      pFVar4 = (FString *)FString::Printf((ushort *)local_234,L"(%s)",puVar6);
      local_4 = 8;
      goto LAB_100b4cb1;
    }
    pFVar4 = (FString *)FUN_100a98c0(local_234);
    local_4 = 9;
    local_228 = FString::operator==(pFVar4,(ushort *)&DAT_10251d1c);
    local_4 = 0xffffffff;
    FString::~FString(local_234);
    if (local_228 != 0) {
      uVar17 = 1;
      uVar3 = 0xff;
      uVar2 = FUN_1003f630(L"L2UI_CH3.Msn.msnbigicon3",1);
      FUN_10021a00(9,10,0x1d,0x1d,0,0,0x1d,0x1d,uVar2,uVar3,uVar17);
      puVar6 = FString::operator*((FString *)(GL2GameData_exref + 0x6d87c));
      pFVar4 = (FString *)FString::Printf((ushort *)local_234,L"(%s)",puVar6);
      local_4 = 10;
      goto LAB_100b4cb1;
    }
    pFVar4 = (FString *)FUN_100a98c0(local_234);
    local_4 = 0xb;
    local_228 = FString::operator==(pFVar4,(ushort *)&DAT_10251d14);
    local_4 = 0xffffffff;
    FString::~FString(local_234);
    if (local_228 != 0) {
      uVar17 = 1;
      uVar3 = 0xff;
      uVar2 = FUN_1003f630(L"L2UI_CH3.Msn.msnbigicon3",1);
      FUN_10021a00(9,10,0x1d,0x1d,0,0,0x1d,0x1d,uVar2,uVar3,uVar17);
      puVar6 = FString::operator*((FString *)(GL2GameData_exref + 0x6d8a0));
      pFVar4 = (FString *)FString::Printf((ushort *)local_234,L"(%s)",puVar6);
      local_4 = 0xc;
      goto LAB_100b4cb1;
    }
    pFVar4 = (FString *)FUN_100a98c0(local_224);
    local_4 = 0xd;
    uVar7 = uVar1 | 4;
    local_238 = uVar7;
    iVar5 = FString::operator==(pFVar4,(ushort *)&DAT_10251d0c);
    if (iVar5 == 0) {
      pFVar4 = (FString *)FUN_100a98c0(local_234);
      local_4 = 0xe;
      uVar7 = uVar1 | 0xc;
      local_238 = uVar7;
      iVar5 = FString::operator==(pFVar4,(ushort *)&DAT_10252c20);
      local_239 = '\0';
      if (iVar5 != 0) goto LAB_100b4c05;
    }
    else {
LAB_100b4c05:
      local_239 = '\x01';
    }
    local_4 = 0xd;
    if ((uVar7 & 8) != 0) {
      uVar7 = uVar7 & 0xfffffff7;
      local_238 = uVar7;
      FString::~FString(local_234);
    }
    local_4 = 0xffffffff;
    if ((uVar7 & 4) != 0) {
      local_238 = uVar7 & 0xfffffffb;
      FString::~FString(local_224);
    }
    if (local_239 != '\0') {
      uVar17 = 1;
      uVar3 = 0xff;
      uVar2 = FUN_1003f630(L"L2UI_CH3.Msn.msnbigicon4",1);
      FUN_10021a00(9,10,0x1d,0x1d,0,0,0x1d,0x1d,uVar2,uVar3,uVar17);
      puVar6 = FString::operator*((FString *)(GL2GameData_exref + 0x6d8b8));
      pFVar4 = (FString *)FString::Printf((ushort *)local_234,L"(%s)",puVar6);
      local_4 = 0xf;
      goto LAB_100b4cb1;
    }
  }
  else {
    uVar17 = 1;
    uVar3 = 0xff;
    uVar2 = FUN_1003f630(L"L2UI_CH3.Msn.msnbigicon1",1);
    FUN_10021a00(9,10,0x1d,0x1d,0,0,0x1d,0x1d,uVar2,uVar3,uVar17);
    puVar6 = FString::operator*((FString *)(GL2GameData_exref + 0x6d870));
    pFVar4 = (FString *)FString::Printf((ushort *)local_224,L"(%s)",puVar6);
    local_4 = 1;
LAB_100b47a7:
    uVar18 = 0xffffffff;
    uVar16 = 0;
    uVar14 = 0;
    uVar13 = 0;
    uVar12 = 0;
    uVar11 = 0;
    uVar10 = 0;
    uVar9 = 0;
    uVar8 = 0;
    uVar17 = 0;
    uVar3 = 0;
    uVar2 = 0;
    puVar6 = FString::operator*(pFVar4);
    FUN_100217a0(0x34,0x1b,0xffb09b79,puVar6,uVar2,uVar3,uVar17,uVar8,uVar9,uVar10,uVar11,uVar12,
                 uVar13,uVar14,uVar16,uVar18);
    pFVar4 = local_224;
LAB_100b4cec:
    local_4 = 0xffffffff;
    FString::~FString(pFVar4);
  }
  pFVar4 = (FString *)FUN_100abd40(local_234);
  local_4 = 0x10;
  uVar3 = 0xc;
  uVar2 = 0x80;
  puVar15 = local_218;
  puVar6 = FString::operator*(pFVar4);
  FUN_100c72c0(puVar6,puVar15,uVar2,uVar3);
  local_4 = 0xffffffff;
  FString::~FString(local_234);
  FUN_100217a0(0x34,0xb,0xffdcdcdc,local_218,0,0,0,0,0,0,0,0,0,0,0,0xffffffff);
LAB_100b4d69:
  FUN_100212e0();
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  ExceptionList = local_c;
  __security_check_cookie(local_10 ^ (uint)auStack_23c);
  return;
}


// ==== 100b4db0 FUN_100b4db0

void FUN_100b4db0(void)

{
  int in_ECX;
  
  if (*(int *)(*(int *)(in_ECX + 0x1cc) + 0x4c) != 0) {
    (**(code **)(**(int **)(in_ECX + 0x278) + 0x13c))();
    (**(code **)(**(int **)(in_ECX + 0x27c) + 0x13c))();
    (**(code **)(**(int **)(in_ECX + 0x284) + 0x13c))();
    (**(code **)(**(int **)(in_ECX + 0x288) + 0x13c))();
    (**(code **)(**(int **)(in_ECX + 0x28c) + 0x13c))();
    (**(code **)(**(int **)(in_ECX + 0x290) + 0x13c))();
    (**(code **)(**(int **)(in_ECX + 0x294) + 0x13c))();
    (**(code **)(**(int **)(in_ECX + 0x274) + 0x138))();
                    /* WARNING: Could not recover jumptable at 0x100b4e55. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(int **)(*(int *)(in_ECX + 0x274) + 0x2dc) + 0x78))();
    return;
  }
  return;
}


// ==== 100b4e60 FUN_100b4e60

void FUN_100b4e60(void)

{
  int in_ECX;
  
  if (*(int *)(*(int *)(in_ECX + 0x1cc) + 0x4c) != 0) {
    (**(code **)(**(int **)(in_ECX + 0x274) + 0x13c))();
    (**(code **)(**(int **)(in_ECX + 0x27c) + 0x13c))();
    (**(code **)(**(int **)(in_ECX + 0x284) + 0x13c))();
    (**(code **)(**(int **)(in_ECX + 0x288) + 0x13c))();
    (**(code **)(**(int **)(in_ECX + 0x28c) + 0x13c))();
    (**(code **)(**(int **)(in_ECX + 0x290) + 0x13c))();
    (**(code **)(**(int **)(in_ECX + 0x294) + 0x13c))();
    (**(code **)(**(int **)(in_ECX + 0x278) + 0x138))();
                    /* WARNING: Could not recover jumptable at 0x100b4eff. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(int **)(in_ECX + 0x278) + 0x78))();
    return;
  }
  return;
}


// ==== 100b4f10 FUN_100b4f10

void FUN_100b4f10(void)

{
  int in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_101f2a00;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_4 = 0;
  if (*(int *)(*(int *)(in_ECX + 0x1cc) + 0x4c) != 0) {
    (**(code **)(**(int **)(in_ECX + 0x274) + 0x13c))();
    (**(code **)(**(int **)(in_ECX + 0x278) + 0x13c))();
    (**(code **)(**(int **)(in_ECX + 0x284) + 0x13c))();
    (**(code **)(**(int **)(in_ECX + 0x288) + 0x13c))();
    (**(code **)(**(int **)(in_ECX + 0x28c) + 0x13c))();
    (**(code **)(**(int **)(in_ECX + 0x290) + 0x13c))();
    (**(code **)(**(int **)(in_ECX + 0x294) + 0x13c))();
    FUN_100abb60(&stack0x00000004);
    local_4 = local_4 & 0xffffff00;
    FUN_100b1ef0();
    (**(code **)(**(int **)(in_ECX + 0x27c) + 0x138))();
    (**(code **)(**(int **)(in_ECX + 0x27c) + 0x78))();
  }
  local_4 = 0xffffffff;
  FUN_100abc50();
  ExceptionList = local_c;
  return;
}


// ==== 100b5030 FUN_100b5030

void FUN_100b5030(void)

{
  int in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_101f2a30;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_4 = 0;
  if (*(int *)(*(int *)(in_ECX + 0x1cc) + 0x4c) != 0) {
    FUN_100abb60(&stack0x00000004);
    local_4 = local_4 & 0xffffff00;
    FUN_100a1550();
    (**(code **)(**(int **)(in_ECX + 0x280) + 0x138))();
    (**(code **)(**(int **)(in_ECX + 0x280) + 0x78))();
  }
  local_4 = 0xffffffff;
  FUN_100abc50();
  ExceptionList = local_c;
  return;
}


// ==== 100b50e0 FUN_100b50e0

void FUN_100b50e0(void)

{
  int in_ECX;
  
  if (*(int *)(*(int *)(in_ECX + 0x1cc) + 0x4c) != 0) {
    (**(code **)(**(int **)(in_ECX + 0x274) + 0x13c))();
    (**(code **)(**(int **)(in_ECX + 0x278) + 0x13c))();
    (**(code **)(**(int **)(in_ECX + 0x27c) + 0x13c))();
    (**(code **)(**(int **)(in_ECX + 0x288) + 0x13c))();
    (**(code **)(**(int **)(in_ECX + 0x28c) + 0x13c))();
    (**(code **)(**(int **)(in_ECX + 0x290) + 0x13c))();
    (**(code **)(**(int **)(in_ECX + 0x294) + 0x13c))();
    (**(code **)(**(int **)(in_ECX + 0x284) + 0x138))();
                    /* WARNING: Could not recover jumptable at 0x100b517f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(int **)(in_ECX + 0x284) + 0x78))();
    return;
  }
  return;
}


// ==== 100b5190 FUN_100b5190

void FUN_100b5190(void)

{
  int in_ECX;
  
  if (*(int *)(*(int *)(in_ECX + 0x1cc) + 0x4c) != 0) {
    (**(code **)(**(int **)(in_ECX + 0x274) + 0x13c))();
    (**(code **)(**(int **)(in_ECX + 0x278) + 0x13c))();
    (**(code **)(**(int **)(in_ECX + 0x27c) + 0x13c))();
    (**(code **)(**(int **)(in_ECX + 0x284) + 0x13c))();
    (**(code **)(**(int **)(in_ECX + 0x28c) + 0x13c))();
    (**(code **)(**(int **)(in_ECX + 0x290) + 0x13c))();
    (**(code **)(**(int **)(in_ECX + 0x294) + 0x13c))();
    (**(code **)(**(int **)(in_ECX + 0x288) + 0x138))();
                    /* WARNING: Could not recover jumptable at 0x100b5235. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(int **)(*(int *)(in_ECX + 0x288) + 0x2dc) + 0x78))();
    return;
  }
  return;
}


// ==== 100b5240 FUN_100b5240

void FUN_100b5240(void)

{
  int in_ECX;
  
  if (*(int *)(*(int *)(in_ECX + 0x1cc) + 0x4c) != 0) {
    (**(code **)(**(int **)(in_ECX + 0x274) + 0x13c))();
    (**(code **)(**(int **)(in_ECX + 0x278) + 0x13c))();
    (**(code **)(**(int **)(in_ECX + 0x27c) + 0x13c))();
    (**(code **)(**(int **)(in_ECX + 0x284) + 0x13c))();
    (**(code **)(**(int **)(in_ECX + 0x288) + 0x13c))();
    (**(code **)(**(int **)(in_ECX + 0x290) + 0x13c))();
    (**(code **)(**(int **)(in_ECX + 0x294) + 0x13c))();
    (**(code **)(**(int **)(in_ECX + 0x28c) + 0x138))();
                    /* WARNING: Could not recover jumptable at 0x100b52df. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(int **)(in_ECX + 0x28c) + 0x78))();
    return;
  }
  return;
}


// ==== 100b52f0 FUN_100b52f0

void FUN_100b52f0(void)

{
  int in_ECX;
  
  if (*(int *)(*(int *)(in_ECX + 0x1cc) + 0x4c) != 0) {
    (**(code **)(**(int **)(in_ECX + 0x274) + 0x13c))();
    (**(code **)(**(int **)(in_ECX + 0x278) + 0x13c))();
    (**(code **)(**(int **)(in_ECX + 0x27c) + 0x13c))();
    (**(code **)(**(int **)(in_ECX + 0x284) + 0x13c))();
    (**(code **)(**(int **)(in_ECX + 0x288) + 0x13c))();
    (**(code **)(**(int **)(in_ECX + 0x28c) + 0x13c))();
    (**(code **)(**(int **)(in_ECX + 0x294) + 0x13c))();
    (**(code **)(**(int **)(in_ECX + 0x290) + 0x138))();
                    /* WARNING: Could not recover jumptable at 0x100b538f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(int **)(in_ECX + 0x290) + 0x78))();
    return;
  }
  return;
}


// ==== 100b53a0 FUN_100b53a0

void FUN_100b53a0(ushort *param_1)

{
  int in_ECX;
  
  (**(code **)(**(int **)(in_ECX + 0x274) + 0x13c))();
  (**(code **)(**(int **)(in_ECX + 0x278) + 0x13c))();
  (**(code **)(**(int **)(in_ECX + 0x27c) + 0x13c))();
  (**(code **)(**(int **)(in_ECX + 0x284) + 0x13c))();
  (**(code **)(**(int **)(in_ECX + 0x288) + 0x13c))();
  (**(code **)(**(int **)(in_ECX + 0x28c) + 0x13c))();
  (**(code **)(**(int **)(in_ECX + 0x290) + 0x13c))();
  FString::operator=((FString *)(*(int *)(in_ECX + 0x294) + 0x2d8),param_1);
  (**(code **)(**(int **)(in_ECX + 0x294) + 0x138))();
  (**(code **)(**(int **)(in_ECX + 0x294) + 0x78))();
  return;
}


// ==== 100b5450 FUN_100b5450

undefined4 FUN_100b5450(void)

{
  ushort *puVar1;
  int in_ECX;
  
  if (*(int *)(*(int *)(in_ECX + 0x1cc) + 0x4c) != 0) {
    if (DAT_1037c9d0 != 0) {
      puVar1 = FString::operator*((FString *)(GL2GameData_exref + 0x41758));
      FUN_100b53a0(puVar1);
      return 1;
    }
    FUN_100b4db0();
  }
  return 1;
}


// ==== 100b54a0 FUN_100b54a0

undefined4 FUN_100b54a0(void)

{
  int iVar1;
  ushort *puVar2;
  int in_ECX;
  FString *this;
  
  if (*(int *)(*(int *)(in_ECX + 0x1cc) + 0x4c) != 0) {
    if (DAT_1037c9d0 == 0) {
      iVar1 = *(int *)(*(int *)(in_ECX + 0x260) + 0x238);
      if (iVar1 == 0) {
        iVar1 = 0;
      }
      else {
        iVar1 = *(int *)(iVar1 + 0x2e8);
      }
      if (((iVar1 != 0) && ((short *)(iVar1 + 0x1810) != (short *)0x0)) &&
         (*(short *)(iVar1 + 0x1810) != 0)) {
        FUN_100b4e60();
        return 1;
      }
      this = (FString *)(GL2GameData_exref + 0x42a64);
    }
    else {
      this = (FString *)(GL2GameData_exref + 0x41758);
    }
    puVar2 = FString::operator*(this);
    FUN_100b53a0(puVar2);
  }
  return 1;
}


// ==== 100b5520 FUN_100b5520

undefined4 FUN_100b5520(void)

{
  ushort *puVar1;
  int iVar2;
  int in_ECX;
  FString *this;
  FString aFStack_2c [4];
  undefined4 uStack_28;
  ushort *puStack_24;
  uint uStack_20;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101f2a6b;
  local_c = ExceptionList;
  uStack_20 = DAT_103554c4 ^ (uint)&stack0xffffffe4;
  if (*(int *)(*(int *)(in_ECX + 0x1cc) + 0x4c) == 0) {
    return 1;
  }
  ExceptionList = &local_c;
  if (DAT_1037c9d0 != 0) {
    this = (FString *)(GL2GameData_exref + 0x41758);
LAB_100b563f:
    puStack_24 = (ushort *)0x100b5645;
    puStack_24 = FString::operator*(this);
    uStack_28 = 0x100b564d;
    FUN_100b53a0();
    ExceptionList = local_c;
    return 1;
  }
  iVar2 = *(int *)(*(int *)(in_ECX + 0x260) + 0x238);
  if (iVar2 == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)(iVar2 + 0x2e8);
  }
  if (((iVar2 == 0) || (puVar1 = (ushort *)(iVar2 + 0x1810), puVar1 == (ushort *)0x0)) ||
     (*puVar1 == 0)) {
    this = (FString *)(GL2GameData_exref + 0x41a94);
    goto LAB_100b563f;
  }
  puStack_24 = (ushort *)0x100b55b0;
  FUN_100aa580();
  puStack_24 = (ushort *)0x100b55b7;
  iVar2 = FUN_1004f5b0();
  if (iVar2 != 0) {
    FString::FString(aFStack_2c,puVar1);
    local_4 = 0xffffffff;
    iVar2 = FUN_100ac3d0();
    if (iVar2 != 0) {
      puStack_24 = (ushort *)0x0;
      FString::FString((FString *)&stack0xffffffd0,puVar1);
      goto LAB_100b5602;
    }
  }
  puStack_24 = (ushort *)0x1;
  FString::FString((FString *)&stack0xffffffd0,puVar1);
LAB_100b5602:
  local_4 = 0xffffffff;
  FUN_100a9a50();
  ExceptionList = local_c;
  return 1;
}


// ==== 100b5670 FUN_100b5670

undefined4 FUN_100b5670(void)

{
  ushort *puVar1;
  int iVar2;
  int in_ECX;
  FString *this;
  FString aFStack_2c [4];
  undefined4 uStack_28;
  ushort *puStack_24;
  uint uStack_20;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101f2aa1;
  local_c = ExceptionList;
  uStack_20 = DAT_103554c4 ^ (uint)&stack0xffffffe4;
  ExceptionList = &local_c;
  if (*(int *)(*(int *)(in_ECX + 0x1cc) + 0x4c) != 0) {
    if (DAT_1037c9d0 == 0) {
      iVar2 = *(int *)(*(int *)(in_ECX + 0x260) + 0x238);
      if (iVar2 == 0) {
        iVar2 = 0;
      }
      else {
        iVar2 = *(int *)(iVar2 + 0x2e8);
      }
      if (((iVar2 != 0) && (puVar1 = (ushort *)(iVar2 + 0x1810), puVar1 != (ushort *)0x0)) &&
         (*puVar1 != 0)) {
        puStack_24 = (ushort *)0x100b56f4;
        FUN_100aa580();
        puStack_24 = (ushort *)0x100b56fb;
        iVar2 = FUN_100abe10();
        if (iVar2 == 0) {
          ExceptionList = local_c;
          return 1;
        }
        FString::FString(aFStack_2c,puVar1);
        local_4 = 0xffffffff;
        iVar2 = FUN_100ac3d0();
        if (iVar2 == 0) {
          ExceptionList = local_c;
          return 1;
        }
        FUN_100abb60(iVar2);
        local_4 = 0xffffffff;
        FUN_100b4f10();
        ExceptionList = local_c;
        return 1;
      }
      this = (FString *)(GL2GameData_exref + 0x41af0);
    }
    else {
      this = (FString *)(GL2GameData_exref + 0x41758);
    }
    puStack_24 = (ushort *)0x100b5761;
    puStack_24 = FString::operator*(this);
    uStack_28 = 0x100b5769;
    FUN_100b53a0();
  }
  ExceptionList = local_c;
  return 1;
}


// ==== 100b5790 FUN_100b5790

void FUN_100b5790(void)

{
  UPackage *pUVar1;
  UObject *pUVar2;
  int *piVar3;
  undefined4 uVar4;
  int in_ECX;
  int local_4;
  
  if (*(int **)(in_ECX + 0x264) == (int *)0x0) {
    local_4 = in_ECX;
    FName::FName((FName *)&local_4,0);
    pUVar1 = UObject::GetTransientPackage();
    pUVar2 = UObject::StaticAllocateObject
                       (&DAT_103771a0,pUVar1,local_4,0,0,*(undefined4 *)GError_exref,0,0);
    if (pUVar2 == (UObject *)0x0) {
      piVar3 = (int *)0x0;
    }
    else {
      piVar3 = (int *)FUN_1009d720();
    }
    *(int **)(in_ECX + 0x264) = piVar3;
    (**(code **)(*piVar3 + 0xc0))
              (*(int *)GSEKScreenX_exref + -0xac,*(int *)GSEKScreenY_exref + -0x11a,0xac,0x84,0,0,3)
    ;
    uVar4 = FUN_10060d40(*(undefined4 *)(in_ECX + 0x264),0x4002);
    FUN_1005c1e0(uVar4);
                    /* WARNING: Could not recover jumptable at 0x100b5862. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(int **)(in_ECX + 0x264) + 0x138))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x100b5870. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(in_ECX + 0x264) + 0x138))();
  return;
}


// ==== 100b5880 FUN_100b5880

void FUN_100b5880(undefined4 param_1,undefined4 param_2)

{
  uint uVar1;
  int local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_101f2ac8;
  local_c = ExceptionList;
  uVar1 = DAT_103554c4 ^ (uint)&stack0xffffffec;
  ExceptionList = &local_c;
  local_4 = 0;
  local_10 = FUN_100c4fc0(param_2);
  if (local_10 != 0) {
    FUN_100c6240(&local_10);
  }
  local_4 = 0xffffffff;
  FUN_100abc50(uVar1);
  ExceptionList = local_c;
  return;
}


// ==== 100b5900 FUN_100b5900

void FUN_100b5900(void)

{
  int in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_101f2b00;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_4 = 0;
  if ((*(int *)GMsnDontDisturb_exref == 0) && (*(int *)(*(int *)(in_ECX + 0x1cc) + 0x4c) != 0)) {
    FUN_100abb60(&stack0x00000004);
    local_4 = local_4 & 0xffffff00;
    FUN_100b5030();
  }
  local_4 = 0xffffffff;
  FUN_100abc50();
  ExceptionList = local_c;
  return;
}


// ==== 100b5990 FUN_100b5990

void FUN_100b5990(void)

{
  int iVar1;
  ushort *puVar2;
  int in_ECX;
  FString *this;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_101f2b29;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_4 = 0;
  iVar1 = FString::operator==((FString *)&stack0x00000004,(ushort *)&DAT_10255bf8);
  if (iVar1 == 0) {
    iVar1 = FString::operator==((FString *)&stack0x00000004,(ushort *)&DAT_10255bf0);
    if (iVar1 == 0) {
      iVar1 = FString::operator==((FString *)&stack0x00000004,(ushort *)&DAT_10255be0);
      if (iVar1 == 0) {
        iVar1 = FString::operator==((FString *)&stack0x00000004,(ushort *)&DAT_102559f8);
        if (iVar1 == 0) {
          iVar1 = FString::operator==((FString *)&stack0x00000004,(ushort *)&DAT_10255e20);
          if (iVar1 == 0) goto LAB_100b5b38;
          this = (FString *)(GL2GameData_exref + 0x423ec);
        }
        else {
          this = (FString *)(GL2GameData_exref + 0x42390);
        }
        puVar2 = FString::operator*(this);
        FUN_100b53a0(puVar2);
        (**(code **)(**(int **)(in_ECX + 600) + 0x13c))();
        (**(code **)(**(int **)(in_ECX + 0x25c) + 0x13c))();
        (**(code **)(**(int **)(in_ECX + 0x260) + 0x13c))();
        if (*(int **)(in_ECX + 0x264) != (int *)0x0) {
          (**(code **)(**(int **)(in_ECX + 0x264) + 0x13c))();
        }
        (**(code **)(**(int **)(in_ECX + 0x298) + 0x13c))();
        (**(code **)(**(int **)(in_ECX + 0x29c) + 0x13c))();
        (**(code **)(**(int **)(in_ECX + 0x2a0) + 0x13c))();
        (**(code **)(**(int **)(in_ECX + 0x2a4) + 0x13c))();
        (**(code **)(**(int **)(in_ECX + 0x2a8) + 0x13c))();
        (**(code **)(**(int **)(in_ECX + 0x2ac) + 0x13c))();
        (**(code **)(**(int **)(in_ECX + 0x254) + 0x138))();
      }
      else {
        puVar2 = FString::operator*((FString *)(GL2GameData_exref + 0x42334));
        FUN_100b53a0(puVar2);
      }
      goto LAB_100b5b38;
    }
  }
  puVar2 = FString::operator*((FString *)(GL2GameData_exref + 0x422d8));
  FUN_100b53a0(puVar2);
LAB_100b5b38:
  local_4 = 0xffffffff;
  FString::~FString((FString *)&stack0x00000004);
  ExceptionList = local_c;
  return;
}


// ==== 100b5b60 FUN_100b5b60

undefined4 FUN_100b5b60(void)

{
  undefined4 uVar1;
  UPackage *pUVar2;
  UObject *pUVar3;
  int *piVar4;
  int in_ECX;
  int local_4;
  
  local_4 = in_ECX;
  FUN_10061b40();
  uVar1 = FUN_1003f630(L"L2UI_CH3.Msn.msn_back0",1);
  *(undefined4 *)(in_ECX + 0x200) = uVar1;
  FName::FName((FName *)&local_4,0);
  pUVar2 = UObject::GetTransientPackage();
  pUVar3 = UObject::StaticAllocateObject
                     (&DAT_103802e8,pUVar2,local_4,0,0,*(undefined4 *)GError_exref,0,0);
  if (pUVar3 == (UObject *)0x0) {
    piVar4 = (int *)0x0;
  }
  else {
    piVar4 = (int *)FUN_100c6a20();
  }
  *(int **)(in_ECX + 0x1f8) = piVar4;
  (**(code **)(*piVar4 + 0xc0))(8,0x2d,0xf0,0x10e,0,0,3);
  uVar1 = FUN_10060d40(*(undefined4 *)(in_ECX + 0x1f8),2);
  FUN_1005c1e0(uVar1);
  return 1;
}


// ==== 100b5c10 FUN_100b5c10

undefined4 FUN_100b5c10(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int in_ECX;
  
  uVar1 = *(undefined4 *)(in_ECX + 0x80);
  uVar2 = *(undefined4 *)(in_ECX + 0x84);
  *(undefined4 *)(param_1 + 0x38) = uVar1;
  *(undefined4 *)(param_1 + 0x3c) = uVar2;
  *(undefined4 *)(param_1 + 0x6c) = uVar1;
  *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(param_1 + 0x3c);
  *(undefined4 *)(param_1 + 0x58) = 0;
  uVar1 = FUN_101c19e0();
  uVar2 = FUN_101c19e0(uVar1);
  FUN_10021df0(*(undefined4 *)(in_ECX + 0x80),*(undefined4 *)(in_ECX + 0x84),uVar2,uVar1);
  if (*(int *)(in_ECX + 0x200) != 0) {
    FUN_10021a00(0,0,0x100,0x161,0,0,0x100,0x161,*(int *)(in_ECX + 0x200),0xff,1);
  }
  FUN_100212e0();
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  return 1;
}


// ==== 100b5cc0 FUN_100b5cc0

void FUN_100b5cc0(void)

{
  uint uVar1;
  UPackage *pUVar2;
  UObject *pUVar3;
  int *piVar4;
  undefined4 uVar5;
  int in_ECX;
  undefined4 local_1c;
  FString aFStack_18 [12];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_101f2b59;
  local_c = ExceptionList;
  uVar1 = DAT_103554c4 ^ (uint)&stack0xffffffe0;
  ExceptionList = &local_c;
  piVar4 = *(int **)(in_ECX + 0x1fc);
  if (piVar4 == (int *)0x0) {
    FName::FName((FName *)&local_1c,0);
    pUVar2 = UObject::GetTransientPackage();
    pUVar3 = UObject::StaticAllocateObject
                       (&DAT_1037bf70,pUVar2,local_1c,0,0,*(undefined4 *)GError_exref,0,0);
    if (pUVar3 == (UObject *)0x0) {
      piVar4 = (int *)0x0;
    }
    else {
      piVar4 = (int *)FUN_100a48c0();
    }
    *(int **)(in_ECX + 0x1fc) = piVar4;
    (**(code **)(*piVar4 + 0xc0))
              (*(int *)GSEKScreenX_exref + -0xac,*(int *)GSEKScreenY_exref + -0x19e,0xac,0x84,0,0,3)
    ;
    uVar5 = FUN_10060d40(*(undefined4 *)(in_ECX + 0x1fc),0x4002);
    FUN_1005c1e0(uVar5);
    FString::FString(aFStack_18,(ushort *)L"GamingState");
    uStack_4 = 0;
    FUN_10141490(*(undefined4 *)(in_ECX + 0x1fc),aFStack_18);
    uStack_4 = 0xffffffff;
    FString::~FString(aFStack_18);
    piVar4 = *(int **)(in_ECX + 0x1fc);
  }
  (**(code **)(*piVar4 + 0x138))(uVar1);
  ExceptionList = local_c;
  return;
}


// ==== 100b5e10 FUN_100b5e10

void FUN_100b5e10(void)

{
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_101f2b99;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_4 = 0;
  FUN_100a4d50(&stack0x00000004);
  local_4 = local_4 & 0xffffff00;
  FUN_100acaf0();
  FUN_100ac300();
  FUN_100c6660();
  local_4 = 0xffffffff;
  FString::~FString((FString *)&stack0x00000004);
  ExceptionList = local_c;
  return;
}


// ==== 100b5ea0 FUN_100b5ea0

void FUN_100b5ea0(void)

{
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_101f2bd9;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_4 = 0;
  FUN_100a4d50(&stack0x00000004);
  local_4 = local_4 & 0xffffff00;
  FUN_100ad2b0();
  FUN_100ac300();
  FUN_100c6660();
  local_4 = 0xffffffff;
  FString::~FString((FString *)&stack0x00000004);
  ExceptionList = local_c;
  return;
}


// ==== 100b5f30 FUN_100b5f30

void FUN_100b5f30(void)

{
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_101f2c19;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_4 = 0;
  FUN_100a4d50(&stack0x00000004);
  local_4 = local_4 & 0xffffff00;
  FUN_100ac4c0();
  FUN_100ac300();
  FUN_100c6660();
  local_4 = 0xffffffff;
  FString::~FString((FString *)&stack0x00000004);
  ExceptionList = local_c;
  return;
}


// ==== 100b5fc0 FUN_100b5fc0

void FUN_100b5fc0(int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  FString *pFVar4;
  int iVar5;
  ushort *puVar6;
  int in_ECX;
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
  uVar2 = *(undefined4 *)(in_ECX + 0x80);
  uVar3 = *(undefined4 *)(in_ECX + 0x84);
  *(undefined4 *)(param_1 + 0x38) = uVar2;
  *(undefined4 *)(param_1 + 0x3c) = uVar3;
  *(undefined4 *)(param_1 + 0x6c) = uVar2;
  *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(param_1 + 0x3c);
  *(undefined4 *)(param_1 + 0x58) = 0;
  uVar2 = FUN_101c19e0(uVar1);
  uVar3 = FUN_101c19e0(uVar2);
  FUN_10021df0(*(undefined4 *)(in_ECX + 0x80),*(undefined4 *)(in_ECX + 0x84),uVar3,uVar2);
  if (*(int *)(in_ECX + 0x1d8) != 0) {
    FUN_10021a00(0,0x14,0x114,0x1c,0,0,0x114,0x1c,*(int *)(in_ECX + 0x1d8),0xff,1);
  }
  if ((*(int *)(in_ECX + 0x50) == 0) || (*(int *)(*(int *)(in_ECX + 0x50) + 0x2f8) == 0))
  goto LAB_100b6229;
  FString::FString(local_230);
  local_4 = 0;
  if (*(int *)(*(int *)(in_ECX + 0x1cc) + 0x1cc) != 0) {
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
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  ExceptionList = local_c;
  __security_check_cookie(local_10 ^ (uint)local_230);
  return;
}


// ==== 100b6270 FUN_100b6270

void FUN_100b6270(void)

{
  FString *pFVar1;
  int iVar2;
  ushort *puVar3;
  int in_ECX;
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
  if (*(int *)(*(int *)(in_ECX + 0x1cc) + 0x1cc) != 0) {
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
  if (*(int *)(in_ECX + 0x80) < 0) {
    (**(code **)(**(int **)(in_ECX + 0x50) + 0x14c))(-*(int *)(in_ECX + 0x80),0);
  }
  (**(code **)(**(int **)(in_ECX + 0x50) + 0x138))();
  (**(code **)(**(int **)(in_ECX + 0x50) + 0x78))();
  local_4 = 0xffffffff;
  FString::~FString(local_230);
  ExceptionList = local_c;
  __security_check_cookie(local_10 ^ (uint)local_230);
  return;
}


// ==== 100b64b0 FUN_100b64b0

void FUN_100b64b0(void)

{
  undefined4 uVar1;
  int *in_ECX;
  undefined4 uStack_18;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  FUN_100b1d00();
  FUN_1005fe50();
  (**(code **)(*(int *)in_ECX[0x75] + 0x1f8))();
  if (in_ECX[0x14] != 0) {
    uStack_8 = 0;
    uStack_4 = 0;
    uStack_c = 0;
    uStack_10 = 0;
    FUN_10058770(&uStack_10);
    uStack_18 = (undefined4)(longlong)ROUND((float)in_ECX[0x23]);
    uVar1 = uStack_18;
    uStack_18 = (undefined4)(longlong)ROUND((float)in_ECX[0x22]);
    (**(code **)(*in_ECX + 0xc0))(uStack_10,uStack_c,uStack_18,uVar1,0,0,3);
    (**(code **)(*(int *)in_ECX[0x14] + 0xc0))(0,0,0,0,0,0,3);
    (**(code **)(*(int *)in_ECX[0x14] + 0x13c))();
  }
  return;
}


// ==== 100b65a0 FUN_100b65a0

void FUN_100b65a0(void)

{
  int iVar1;
  int in_ECX;
  
  FUN_1005c5b0();
  iVar1 = (**(code **)(**(int **)(*(int *)(in_ECX + 0x1cc) + 0x254) + 0xfc))(0);
  if (iVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x100b65dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(int **)(*(int *)(*(int *)(in_ECX + 0x1cc) + 0x254) + 0x1cc) + 0x78))();
    return;
  }
  return;
}


// ==== 100b65e0 FUN_100b65e0

undefined4 FUN_100b65e0(void)

{
  int in_ECX;
  
  if ((*(int *)(in_ECX + 0x50) != 0) && (*(int *)(*(int *)(in_ECX + 0x50) + 0x2f8) != 0)) {
    return 1;
  }
  return 0;
}


// ==== 100b6600 FUN_100b6600

void FUN_100b6600(void)

{
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_101f2cf9;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_4 = 0;
  FUN_100a4d50(&stack0x00000004);
  local_4 = local_4 & 0xffffff00;
  FUN_100b5e10();
  local_4 = 0xffffffff;
  FString::~FString((FString *)&stack0x00000004);
  ExceptionList = local_c;
  return;
}


// ==== 100b6680 FUN_100b6680

void FUN_100b6680(void)

{
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_101f2d39;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_4 = 0;
  FUN_100a4d50(&stack0x00000004);
  local_4 = local_4 & 0xffffff00;
  FUN_100b5ea0();
  local_4 = 0xffffffff;
  FString::~FString((FString *)&stack0x00000004);
  ExceptionList = local_c;
  return;
}


// ==== 100b6700 FUN_100b6700

void FUN_100b6700(void)

{
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_101f2d79;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_4 = 0;
  FUN_100a4d50(&stack0x00000004);
  local_4 = local_4 & 0xffffff00;
  FUN_100b5f30();
  local_4 = 0xffffffff;
  FString::~FString((FString *)&stack0x00000004);
  ExceptionList = local_c;
  return;
}


// ==== 100b6780 FUN_100b6780

void FUN_100b6780(FString *param_1,undefined4 param_2)

{
  int iVar1;
  ushort *puVar2;
  uint uVar3;
  int iVar4;
  undefined4 *puVar5;
  int *in_ECX;
  
  puVar2 = FString::operator*(param_1);
  uVar3 = FUN_10048c20(puVar2);
  for (iVar1 = *(int *)(in_ECX[3] + (in_ECX[4] - 1U & uVar3) * 4); iVar1 != -1;
      iVar1 = *(int *)(iVar1 + *in_ECX)) {
    iVar1 = iVar1 * 0x14;
    iVar4 = FString::operator==((FString *)(*in_ECX + iVar1 + 4),param_1);
    if ((iVar4 != 0) &&
       (puVar5 = (undefined4 *)FUN_100c56a0(4,param_2), puVar5 != (undefined4 *)0x0)) {
      *puVar5 = *(undefined4 *)(iVar1 + 0x10 + *in_ECX);
    }
  }
  return;
}


// ==== 100b6800 FUN_100b6800

undefined4 FUN_100b6800(int param_1)

{
  if (param_1 == 1) {
    FUN_100b27f0();
  }
  return 1;
}


// ==== 100b6820 FUN_100b6820

bool FUN_100b6820(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = FUN_100570d0(param_1,param_2,param_3);
  if (iVar1 != 0) {
    return true;
  }
  if ((param_1 == 0x501) && (param_2 == 0xa54)) {
    iVar1 = FUN_100b2c40();
    return iVar1 != 0;
  }
  return false;
}


// ==== 100b6880 FUN_100b6880

void FUN_100b6880(void)

{
  FArray *this;
  int iVar1;
  ushort *puVar2;
  undefined4 uVar3;
  int in_ECX;
  undefined4 *puVar4;
  void *pvVar5;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_101f2e50;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  iVar1 = (**(code **)**(undefined4 **)GMalloc_exref)
                    (0x10,&DAT_1022f8a0,DAT_103554c4 ^ (uint)&stack0xffffffe0);
  puVar4 = (undefined4 *)0x0;
  local_c = (void *)0x0;
  if (iVar1 != 0) {
    puVar4 = (undefined4 *)FUN_100322c0();
  }
  local_c = (void *)0xffffffff;
  iVar1 = (**(code **)**(undefined4 **)GMalloc_exref)(0x14,&DAT_1022f8a0);
  if (iVar1 == 0) {
    uVar3 = 0;
  }
  else {
    puVar2 = FString::operator*((FString *)(GL2GameData_exref + 0x6d870));
    uVar3 = FUN_1004f780(puVar2);
  }
  *puVar4 = uVar3;
  uVar3 = FUN_1003f630(L"L2UI_CH3.Msn.msnicon1",1);
  this = (FArray *)(in_ECX + 0x1d4);
  puVar4[2] = uVar3;
  iVar1 = FArray::Add(this,1,4);
  *(undefined4 **)(*(int *)this + iVar1 * 4) = puVar4;
  iVar1 = (**(code **)**(undefined4 **)GMalloc_exref)(0x10,&DAT_1022f8a0);
  if (iVar1 == 0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    puVar4 = (undefined4 *)FUN_100322c0();
  }
  iVar1 = (**(code **)**(undefined4 **)GMalloc_exref)(0x14,&DAT_1022f8a0);
  if (iVar1 == 0) {
    uVar3 = 0;
  }
  else {
    puVar2 = FString::operator*((FString *)(GL2GameData_exref + 0x6d87c));
    uVar3 = FUN_1004f780(puVar2);
  }
  *puVar4 = uVar3;
  uVar3 = FUN_1003f630(L"L2UI_CH3.Msn.msnicon3",1);
  puVar4[2] = uVar3;
  iVar1 = FArray::Add(this,1,4);
  *(undefined4 **)(*(int *)this + iVar1 * 4) = puVar4;
  iVar1 = (**(code **)**(undefined4 **)GMalloc_exref)(0x10,&DAT_1022f8a0);
  if (iVar1 == 0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    puVar4 = (undefined4 *)FUN_100322c0();
  }
  iVar1 = (**(code **)**(undefined4 **)GMalloc_exref)(0x14,&DAT_1022f8a0);
  if (iVar1 == 0) {
    uVar3 = 0;
  }
  else {
    puVar2 = FString::operator*((FString *)(GL2GameData_exref + 0x6d888));
    uVar3 = FUN_1004f780(puVar2);
  }
  *puVar4 = uVar3;
  uVar3 = FUN_1003f630(L"L2UI_CH3.Msn.msnicon2",1);
  puVar4[2] = uVar3;
  iVar1 = FArray::Add(this,1,4);
  *(undefined4 **)(*(int *)this + iVar1 * 4) = puVar4;
  iVar1 = (**(code **)**(undefined4 **)GMalloc_exref)(0x10,&DAT_1022f8a0);
  if (iVar1 == 0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    puVar4 = (undefined4 *)FUN_100322c0();
  }
  iVar1 = (**(code **)**(undefined4 **)GMalloc_exref)(0x14,&DAT_1022f8a0);
  if (iVar1 == 0) {
    uVar3 = 0;
  }
  else {
    puVar2 = FString::operator*((FString *)(GL2GameData_exref + 0x6d894));
    uVar3 = FUN_1004f780(puVar2);
  }
  *puVar4 = uVar3;
  uVar3 = FUN_1003f630(L"L2UI_CH3.Msn.msnicon2",1);
  puVar4[2] = uVar3;
  iVar1 = FArray::Add(this,1,4);
  *(undefined4 **)(*(int *)this + iVar1 * 4) = puVar4;
  iVar1 = (**(code **)**(undefined4 **)GMalloc_exref)(0x10,&DAT_1022f8a0);
  if (iVar1 == 0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    puVar4 = (undefined4 *)FUN_100322c0();
  }
  iVar1 = (**(code **)**(undefined4 **)GMalloc_exref)(0x14,&DAT_1022f8a0);
  if (iVar1 == 0) {
    uVar3 = 0;
  }
  else {
    puVar2 = FString::operator*((FString *)(GL2GameData_exref + 0x6d8a0));
    uVar3 = FUN_1004f780(puVar2);
  }
  *puVar4 = uVar3;
  uVar3 = FUN_1003f630(L"L2UI_CH3.Msn.msnicon3",1);
  puVar4[2] = uVar3;
  iVar1 = FArray::Add(this,1,4);
  *(undefined4 **)(*(int *)this + iVar1 * 4) = puVar4;
  iVar1 = (**(code **)**(undefined4 **)GMalloc_exref)(0x10,&DAT_1022f8a0);
  if (iVar1 == 0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    puVar4 = (undefined4 *)FUN_100322c0();
  }
  iVar1 = (**(code **)**(undefined4 **)GMalloc_exref)(0x14,&DAT_1022f8a0);
  if (iVar1 == 0) {
    uVar3 = 0;
  }
  else {
    puVar2 = FString::operator*((FString *)(GL2GameData_exref + 0x6d8ac));
    uVar3 = FUN_1004f780(puVar2);
  }
  *puVar4 = uVar3;
  uVar3 = FUN_1003f630(L"L2UI_CH3.Msn.msnicon2",1);
  puVar4[2] = uVar3;
  iVar1 = FArray::Add(this,1,4);
  *(undefined4 **)(*(int *)this + iVar1 * 4) = puVar4;
  pvVar5 = (void *)0x10;
  iVar1 = (**(code **)**(undefined4 **)GMalloc_exref)(0x10,&DAT_1022f8a0);
  if (iVar1 == 0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    puVar4 = (undefined4 *)FUN_100322c0();
  }
  iVar1 = (**(code **)**(undefined4 **)GMalloc_exref)(0x14,&DAT_1022f8a0);
  if (iVar1 == 0) {
    uVar3 = 0;
  }
  else {
    puVar2 = FString::operator*((FString *)(GL2GameData_exref + 0x6d8b8));
    uVar3 = FUN_1004f780(puVar2);
  }
  *puVar4 = uVar3;
  uVar3 = FUN_1003f630(L"L2UI_CH3.Msn.msnicon4",1);
  puVar4[2] = uVar3;
  iVar1 = FArray::Add(this,1,4);
  *(undefined4 **)(*(int *)this + iVar1 * 4) = puVar4;
  iVar1 = (**(code **)**(undefined4 **)GMalloc_exref)(0x10,&DAT_1022f8a0);
  if (iVar1 == 0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    puVar4 = (undefined4 *)FUN_100322c0();
  }
  iVar1 = (**(code **)**(undefined4 **)GMalloc_exref)(0x14,&DAT_1022f8a0);
  if (iVar1 == 0) {
    uVar3 = 0;
  }
  else {
    puVar2 = FString::operator*((FString *)(GL2GameData_exref + 0x6d7c8));
    uVar3 = FUN_1004f780(puVar2);
  }
  *puVar4 = uVar3;
  puVar4[2] = 0;
  iVar1 = FArray::Add(this,1,4);
  *(undefined4 **)(*(int *)this + iVar1 * 4) = puVar4;
  ExceptionList = pvVar5;
  return;
}


// ==== 100b6dd0 FUN_100b6dd0

undefined4 FUN_100b6dd0(void)

{
  int *piVar1;
  int iVar2;
  int in_ECX;
  int iVar3;
  
  iVar3 = 0;
  if (0 < *(int *)(in_ECX + 0x1d8)) {
    do {
      piVar1 = *(int **)(*(int *)(in_ECX + 0x1d4) + iVar3 * 4);
      iVar2 = *piVar1;
      if (iVar2 != 0) {
        FUN_1004f7b0();
        (**(code **)(**(int **)GMalloc_exref + 8))(iVar2);
        *piVar1 = 0;
      }
      FUN_100325f0();
      (**(code **)(**(int **)GMalloc_exref + 8))(piVar1);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(in_ECX + 0x1d8));
  }
  FArray::Empty((FArray *)(in_ECX + 0x1d4),4,0);
  FUN_10061e90();
  return 1;
}


// ==== 100b6e50 FUN_100b6e50

undefined4 FUN_100b6e50(undefined4 param_1,undefined4 param_2)

{
  int *in_ECX;
  int iVar1;
  uint uVar2;
  FString aFStack_28 [4];
  undefined4 uStack_24;
  ushort *puStack_20;
  uint uStack_1c;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101f2ea6;
  local_c = ExceptionList;
  uStack_1c = DAT_103554c4 ^ (uint)&stack0xffffffe8;
  ExceptionList = &local_c;
  uVar2 = (uint)(ushort)((short)((uint)param_2 >> 0x10) - (short)in_ECX[0x21]);
  iVar1 = -1;
  if (((float)(ushort)((short)param_2 - (short)in_ECX[0x20]) < (float)in_ECX[0x22]) &&
     ((float)uVar2 < (float)in_ECX[0x23])) {
    iVar1 = (int)(uVar2 - 2) / 0x11;
  }
  if ((iVar1 == in_ECX[0x78]) && (in_ECX[0x74] != 0)) {
    if (iVar1 == 0) {
      FString::FString(aFStack_28,(ushort *)&DAT_10251d70);
      local_4 = 0xffffffff;
      FUN_100a9d20();
    }
    else if (iVar1 == 1) {
      FString::FString(aFStack_28,(ushort *)&DAT_10251d1c);
      local_4 = 0xffffffff;
      FUN_100a9d20();
    }
    else if (iVar1 == 2) {
      FString::FString(aFStack_28,(ushort *)&DAT_10251d3c);
      local_4 = 0xffffffff;
      FUN_100a9d20();
    }
    else if (iVar1 == 3) {
      FString::FString(aFStack_28,(ushort *)&DAT_10251d34);
      local_4 = 0xffffffff;
      FUN_100a9d20();
    }
    else if (iVar1 == 4) {
      FString::FString(aFStack_28,(ushort *)&DAT_10251d14);
      local_4 = 0xffffffff;
      FUN_100a9d20();
    }
    else if (iVar1 == 5) {
      FString::FString(aFStack_28,(ushort *)&DAT_10251d24);
      local_4 = 0xffffffff;
      FUN_100a9d20();
    }
    else if (iVar1 == 6) {
      puStack_20 = (ushort *)0x100b7040;
      FUN_100b50e0();
    }
    else if (iVar1 == 7) {
      if (DAT_1037c9d0 == 0) {
        puStack_20 = (ushort *)0x100b707b;
        FUN_100b1fb0();
      }
      else {
        puStack_20 = (ushort *)0x100b7062;
        puStack_20 = FString::operator*((FString *)(GL2GameData_exref + 0x41758));
        uStack_24 = 0x100b706e;
        FUN_100b53a0();
      }
    }
  }
  puStack_20 = (ushort *)0x100b7087;
  (**(code **)(*in_ECX + 0x13c))();
  ExceptionList = local_c;
  return 1;
}


// ==== 100b70b0 FUN_100b70b0

void FUN_100b70b0(void)

{
  FUN_1005fe50();
  FUN_100b4330();
  return;
}


// ==== 100b70c0 FUN_100b70c0

undefined4 FUN_100b70c0(void)

{
  FUN_100b5190();
  return 1;
}


// ==== 100b70e0 FUN_100b70e0

undefined4 FUN_100b70e0(void)

{
  FUN_100b5240();
  return 1;
}


// ==== 100b7100 FUN_100b7100

undefined4 FUN_100b7100(void)

{
  FUN_100b52f0();
  return 1;
}


// ==== 100b7120 FUN_100b7120

void FUN_100b7120(int param_1)

{
  int iVar1;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_101f2ee0;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_4 = 0;
  if (param_1 != 0) {
    FUN_100adf40();
    iVar1 = FUN_100d0a00();
    if (iVar1 != 0) {
      FUN_100abb60(&stack0x00000008);
      local_4 = local_4 & 0xffffff00;
      FUN_1009abd0();
    }
  }
  local_4 = 0xffffffff;
  FUN_100abc50();
  ExceptionList = local_c;
  return;
}


// ==== 100b71c0 FUN_100b71c0

void FUN_100b71c0(void)

{
  int iVar1;
  int *in_ECX;
  int *extraout_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_101f2f09;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_4 = 0;
  (**(code **)(*in_ECX + 0x174))(DAT_103554c4 ^ (uint)&stack0xfffffff0);
  iVar1 = FUN_100b65e0();
  if (iVar1 == 0) {
    iVar1 = (**(code **)(*extraout_ECX + 0xfc))(0);
    if (iVar1 != 0) {
      (**(code **)(*(int *)in_ECX[0x96] + 0x13c))();
      (**(code **)(*(int *)in_ECX[0x97] + 0x13c))();
      (**(code **)(*(int *)in_ECX[0x98] + 0x13c))();
      if ((int *)in_ECX[0x99] != (int *)0x0) {
        (**(code **)(*(int *)in_ECX[0x99] + 0x13c))();
      }
      (**(code **)(*(int *)in_ECX[0x9d] + 0x13c))();
      (**(code **)(*(int *)in_ECX[0x9e] + 0x13c))();
      (**(code **)(*(int *)in_ECX[0x9f] + 0x13c))();
      (**(code **)(*(int *)in_ECX[0xa1] + 0x13c))();
      (**(code **)(*(int *)in_ECX[0xa2] + 0x13c))();
      (**(code **)(*(int *)in_ECX[0xa3] + 0x13c))();
      (**(code **)(*(int *)in_ECX[0xa4] + 0x13c))();
      (**(code **)(*(int *)in_ECX[0xa5] + 0x13c))();
      (**(code **)(*(int *)in_ECX[0x9b] + 0x13c))();
      (**(code **)(*(int *)in_ECX[0xa6] + 0x13c))();
      (**(code **)(*(int *)in_ECX[0xa7] + 0x13c))();
      (**(code **)(*(int *)in_ECX[0xa8] + 0x13c))();
      (**(code **)(*(int *)in_ECX[0xa9] + 0x13c))();
      (**(code **)(*(int *)in_ECX[0xaa] + 0x13c))();
      (**(code **)(*(int *)in_ECX[0xab] + 0x13c))();
      (**(code **)(*(int *)in_ECX[0x95] + 0x138))();
    }
  }
  else {
    FUN_100b1cd0(L"L2UI_CH3.Msn.msnminiicon5");
  }
  iVar1 = FString::operator==((FString *)&stack0x00000004,(ushort *)&DAT_10256a6c);
  if (iVar1 == 0) {
    iVar1 = FString::operator==((FString *)&stack0x00000004,(ushort *)&DAT_10256a64);
    if (iVar1 == 0) goto LAB_100b73c9;
    *(undefined4 *)(in_ECX[0x9b] + 0x1d4) = 4;
  }
  else {
    *(undefined4 *)(in_ECX[0x9b] + 0x1d4) = 3;
  }
  (**(code **)(*(int *)in_ECX[0x9b] + 0x138))();
LAB_100b73c9:
  local_4 = 0xffffffff;
  FString::~FString((FString *)&stack0x00000004);
  ExceptionList = local_c;
  return;
}


// ==== 100b73f0 FUN_100b73f0

void FUN_100b73f0(void)

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
    FUN_1006b150();
    return;
  }
  return;
}


// ==== 100b7430 FUN_100b7430

void FUN_100b7430(void)

{
  int iVar1;
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_101f2f39;
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


// ==== 100b74d0 FUN_100b74d0

undefined4 * FUN_100b74d0(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 *puVar2;
  ushort *puVar3;
  uint uVar4;
  int in_ECX;
  
  iVar1 = FUN_10097bd0(0x14);
  if (iVar1 == 0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puVar2 = (undefined4 *)FUN_100b1d80(param_1,param_2);
  }
  puVar3 = FString::operator*((FString *)(puVar2 + 1));
  uVar4 = FUN_10048c20(puVar3);
  uVar4 = *(int *)(in_ECX + 0x10) - 1U & uVar4;
  *puVar2 = *(undefined4 *)(*(int *)(in_ECX + 0xc) + uVar4 * 4);
  *(int *)(*(int *)(in_ECX + 0xc) + uVar4 * 4) = *(int *)(in_ECX + 4) + -1;
  if (*(int *)(in_ECX + 0x10) * 2 + 8 < *(int *)(in_ECX + 4)) {
    *(int *)(in_ECX + 0x10) = *(int *)(in_ECX + 0x10) * 2;
    FUN_1006b150();
  }
  return puVar2 + 4;
}


// ==== 100b7550 FUN_100b7550

void FUN_100b7550(int param_1)

{
  FArray *in_ECX;
  int iVar1;
  int iVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101f2f6c;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  iVar2 = 0;
  if (0 < *(int *)(in_ECX + 4)) {
    iVar1 = 0;
    do {
      local_4 = 0xffffffff;
      FString::~FString((FString *)(*(int *)in_ECX + iVar1 + 4));
      iVar2 = iVar2 + 1;
      iVar1 = iVar1 + 0x14;
    } while (iVar2 < *(int *)(in_ECX + 4));
  }
  FArray::Empty(in_ECX,0x14,param_1);
  ExceptionList = local_c;
  return;
}


// ==== 100b75d0 FUN_100b75d0

undefined4 * FUN_100b75d0(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 *puVar2;
  ushort *puVar3;
  uint uVar4;
  int in_ECX;
  
  iVar1 = FUN_10097bd0(0x14);
  if (iVar1 == 0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puVar2 = (undefined4 *)FUN_100b1df0(param_1,param_2);
  }
  puVar3 = FString::operator*((FString *)(puVar2 + 1));
  uVar4 = FUN_10048c20(puVar3);
  uVar4 = *(int *)(in_ECX + 0x10) - 1U & uVar4;
  *puVar2 = *(undefined4 *)(*(int *)(in_ECX + 0xc) + uVar4 * 4);
  *(int *)(*(int *)(in_ECX + 0xc) + uVar4 * 4) = *(int *)(in_ECX + 4) + -1;
  if (*(int *)(in_ECX + 0x10) * 2 + 8 < *(int *)(in_ECX + 4)) {
    *(int *)(in_ECX + 0x10) = *(int *)(in_ECX + 0x10) * 2;
    FUN_1006b150();
  }
  return puVar2 + 4;
}


// ==== 100b7650 FUN_100b7650

void FUN_100b7650(int param_1)

{
  FArray *in_ECX;
  int iVar1;
  int iVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101f2f9c;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  iVar2 = 0;
  if (0 < *(int *)(in_ECX + 4)) {
    iVar1 = 0;
    do {
      local_4 = 0xffffffff;
      FString::~FString((FString *)(*(int *)in_ECX + iVar1 + 4));
      iVar2 = iVar2 + 1;
      iVar1 = iVar1 + 0x14;
    } while (iVar2 < *(int *)(in_ECX + 4));
  }
  FArray::Empty(in_ECX,0x14,param_1);
  ExceptionList = local_c;
  return;
}


// ==== 100b76d0 FUN_100b76d0

void FUN_100b76d0(void)

{
  int iVar1;
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_101f2fc9;
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
  FArray::Remove(in_ECX,0,iVar1,0xc);
  local_4 = 0xffffffff;
  FArray::~FArray(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 100b7770 FUN_100b7770

void FUN_100b7770(void)

{
  int iVar1;
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_101f2ff9;
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
  FArray::Remove(in_ECX,0,iVar1,0xc);
  local_4 = 0xffffffff;
  FArray::~FArray(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 100b7810 FUN_100b7810

void FUN_100b7810(int param_1,int param_2)

{
  FArray *in_ECX;
  int iVar1;
  int iVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101f302c;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (param_1 < 0) {
    appFailAssert("Index>=0","d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h"
                  ,0x203);
  }
  if (*(int *)(in_ECX + 4) < param_1) {
    appFailAssert("Index<=ArrayNum",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x204);
  }
  iVar2 = param_2 + param_1;
  if (*(int *)(in_ECX + 4) < iVar2) {
    appFailAssert("Index+Count<=ArrayNum",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x205);
  }
  if (param_1 < iVar2) {
    iVar1 = param_1 * 0x14;
    iVar2 = iVar2 - param_1;
    do {
      local_4 = 0xffffffff;
      FString::~FString((FString *)(*(int *)in_ECX + iVar1 + 4));
      iVar1 = iVar1 + 0x14;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  FArray::Remove(in_ECX,param_1,param_2,0x14);
  ExceptionList = local_c;
  return;
}


// ==== 100b78f0 FUN_100b78f0

void FUN_100b78f0(int param_1,int param_2)

{
  FArray *in_ECX;
  int iVar1;
  int iVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101f305c;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (param_1 < 0) {
    appFailAssert("Index>=0","d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h"
                  ,0x203);
  }
  if (*(int *)(in_ECX + 4) < param_1) {
    appFailAssert("Index<=ArrayNum",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x204);
  }
  iVar2 = param_2 + param_1;
  if (*(int *)(in_ECX + 4) < iVar2) {
    appFailAssert("Index+Count<=ArrayNum",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x205);
  }
  if (param_1 < iVar2) {
    iVar1 = param_1 * 0x14;
    iVar2 = iVar2 - param_1;
    do {
      local_4 = 0xffffffff;
      FString::~FString((FString *)(*(int *)in_ECX + iVar1 + 4));
      iVar1 = iVar1 + 0x14;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  FArray::Remove(in_ECX,param_1,param_2,0x14);
  ExceptionList = local_c;
  return;
}


// ==== 100b79d0 FUN_100b79d0

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


// ==== 100b7a80 FUN_100b7a80

void FUN_100b7a80(void)

{
  undefined4 uVar1;
  int in_ECX;
  undefined4 *puVar2;
  int iVar3;
  ushort local_20c [260];
  uint local_4;
  
  local_4 = DAT_103554c4 ^ (uint)local_20c;
  FUN_10061b40();
  iVar3 = 1;
  puVar2 = (undefined4 *)(in_ECX + 0x1e4);
  do {
    appSprintf(local_20c,(ushort *)L"L2UI_CH3.Tooltip.Tooltip%d",iVar3);
    uVar1 = FUN_1003f630(local_20c,1);
    *puVar2 = uVar1;
    iVar3 = iVar3 + 1;
    puVar2 = puVar2 + 1;
  } while (iVar3 < 10);
  uVar1 = FUN_1003f630(L"L2UI_CH3.ListCtrl.TextSelect",1);
  *(undefined4 *)(in_ECX + 0x208) = uVar1;
  uVar1 = FUN_1003f630(L"L2UI_CH3.ListCtrl.TextSelect2",1);
  *(undefined4 *)(in_ECX + 0x20c) = uVar1;
  FUN_100b6880();
  __security_check_cookie(local_4 ^ (uint)local_20c);
  return;
}


// ==== 100b7b30 FUN_100b7b30

bool FUN_100b7b30(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = FUN_100570d0(param_1,param_2,param_3);
  if (iVar1 != 0) {
    return true;
  }
  if (param_1 == 0x501) {
    if (param_2 == 0xa1b) {
      iVar1 = FUN_100b70c0();
      return iVar1 != 0;
    }
    if (param_2 == 0xa1c) {
      iVar1 = FUN_100b70e0();
      return iVar1 != 0;
    }
    if (param_2 == 0xa1d) {
      iVar1 = FUN_100b7100();
      return iVar1 != 0;
    }
    if (param_2 == 0xa17) {
      iVar1 = FUN_100b4440();
      return iVar1 != 0;
    }
    if (param_2 == 0xa18) {
      iVar1 = FUN_1009deb0();
      return iVar1 != 0;
    }
  }
  return false;
}


// ==== 100b7c00 FUN_100b7c00

void FUN_100b7c00(void)

{
  int in_ECX;
  int *piVar1;
  int iVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101f3090;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_1005fe50();
  local_8._0_1_ = 1;
  for (iVar2 = 0; iVar2 < *(int *)(in_ECX + 0x1fc); iVar2 = iVar2 + 1) {
    piVar1 = *(int **)(*(int *)(in_ECX + 0x1f8) + 8 + iVar2 * 0xc);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 0x13c))();
    }
  }
  local_8._0_1_ = 0;
  FUN_100d10a0();
  if (*(int *)(*(int *)(in_ECX + 0x1cc) + 0x4c) == 0) {
    (**(code **)(**(int **)(in_ECX + 600) + 0x13c))();
    (**(code **)(**(int **)(in_ECX + 0x25c) + 0x13c))();
    (**(code **)(**(int **)(in_ECX + 0x260) + 0x13c))();
    if (*(int *)(in_ECX + 0x264) != 0) {
      (**(code **)(**(int **)(in_ECX + 0x264) + 0x13c))();
    }
    (**(code **)(**(int **)(in_ECX + 0x268) + 0x13c))();
    (**(code **)(**(int **)(in_ECX + 0x26c) + 0x13c))();
    (**(code **)(**(int **)(in_ECX + 0x270) + 0x13c))();
    (**(code **)(**(int **)(in_ECX + 0x274) + 0x13c))();
    (**(code **)(**(int **)(in_ECX + 0x278) + 0x13c))();
    (**(code **)(**(int **)(in_ECX + 0x27c) + 0x13c))();
    (**(code **)(**(int **)(in_ECX + 0x280) + 0x13c))();
    (**(code **)(**(int **)(in_ECX + 0x284) + 0x13c))();
    (**(code **)(**(int **)(in_ECX + 0x288) + 0x13c))();
    (**(code **)(**(int **)(in_ECX + 0x28c) + 0x13c))();
    (**(code **)(**(int **)(in_ECX + 0x290) + 0x13c))();
    (**(code **)(**(int **)(in_ECX + 0x294) + 0x13c))();
    (**(code **)(**(int **)(in_ECX + 0x298) + 0x13c))();
    (**(code **)(**(int **)(in_ECX + 0x29c) + 0x13c))();
    (**(code **)(**(int **)(in_ECX + 0x2a0) + 0x13c))();
    (**(code **)(**(int **)(in_ECX + 0x2a4) + 0x13c))();
    (**(code **)(**(int **)(in_ECX + 0x2a8) + 0x13c))();
    (**(code **)(**(int **)(in_ECX + 0x2ac) + 0x13c))();
    piVar1 = *(int **)(in_ECX + 0x254);
  }
  else {
    (**(code **)(**(int **)(in_ECX + 0x254) + 0x13c))();
    (**(code **)(**(int **)(in_ECX + 600) + 0x13c))();
    (**(code **)(**(int **)(in_ECX + 0x25c) + 0x13c))();
    (**(code **)(**(int **)(in_ECX + 0x268) + 0x13c))();
    (**(code **)(**(int **)(in_ECX + 0x26c) + 0x13c))();
    (**(code **)(**(int **)(in_ECX + 0x270) + 0x13c))();
    (**(code **)(**(int **)(in_ECX + 0x274) + 0x13c))();
    (**(code **)(**(int **)(in_ECX + 0x278) + 0x13c))();
    (**(code **)(**(int **)(in_ECX + 0x27c) + 0x13c))();
    (**(code **)(**(int **)(in_ECX + 0x280) + 0x13c))();
    (**(code **)(**(int **)(in_ECX + 0x284) + 0x13c))();
    (**(code **)(**(int **)(in_ECX + 0x288) + 0x13c))();
    (**(code **)(**(int **)(in_ECX + 0x28c) + 0x13c))();
    (**(code **)(**(int **)(in_ECX + 0x290) + 0x13c))();
    (**(code **)(**(int **)(in_ECX + 0x294) + 0x13c))();
    (**(code **)(**(int **)(in_ECX + 0x260) + 0x138))();
    (**(code **)(**(int **)(in_ECX + 0x298) + 0x138))();
    (**(code **)(**(int **)(in_ECX + 0x29c) + 0x138))();
    (**(code **)(**(int **)(in_ECX + 0x2a0) + 0x138))();
    (**(code **)(**(int **)(in_ECX + 0x2a4) + 0x138))();
    (**(code **)(**(int **)(in_ECX + 0x2a8) + 0x138))();
    (**(code **)(**(int **)(in_ECX + 0x2ac) + 0x138))();
    local_8._0_1_ = 2;
    for (iVar2 = 0; iVar2 < *(int *)(in_ECX + 0x1d4); iVar2 = iVar2 + 1) {
      piVar1 = *(int **)(*(int *)(in_ECX + 0x1d0) + 0x10 + iVar2 * 0x14);
      if ((piVar1 != (int *)0x0) && (piVar1[0x280] == 0)) {
        (**(code **)(*piVar1 + 0x138))();
      }
    }
    local_8._0_1_ = 0;
    FUN_100b73f0();
    piVar1 = *(int **)(in_ECX + 0x264);
    if (piVar1 == (int *)0x0) {
      ExceptionList = local_10;
      return;
    }
    if (piVar1[0x74] < 1) {
      ExceptionList = local_10;
      return;
    }
  }
  (**(code **)(*piVar1 + 0x138))();
  ExceptionList = local_10;
  return;
}


// ==== 100b7ffd Catch@100b7ffd

void Catch_100b7ffd(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 100b8011 Catch@100b8011

void Catch_100b8011(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"MsnWnd::ShowWindow");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100b8030 FUN_100b8030

void FUN_100b8030(void)

{
  int *piVar1;
  int in_ECX;
  int iVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101f30b8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_1005ff00(DAT_103554c4 ^ (uint)&stack0xffffffd8);
  if (*(int *)GMsnHideAll_exref != 0) {
    iVar2 = 0;
    local_4 = 0;
    if (0 < *(int *)(in_ECX + 0x1d4)) {
      do {
        piVar1 = *(int **)(*(int *)(in_ECX + 0x1d0) + 0x10 + iVar2 * 0x14);
        if (piVar1 != (int *)0x0) {
          (**(code **)(*piVar1 + 0x13c))();
        }
        iVar2 = iVar2 + 1;
      } while (iVar2 < *(int *)(in_ECX + 0x1d4));
    }
    local_4 = 0xffffffff;
    if (*(int *)(in_ECX + 0x264) != 0) {
      (**(code **)(**(int **)(in_ECX + 0x264) + 0x13c))();
    }
  }
  (**(code **)(**(int **)(in_ECX + 0x268) + 0x13c))();
  (**(code **)(**(int **)(in_ECX + 0x26c) + 0x13c))();
  (**(code **)(**(int **)(in_ECX + 0x274) + 0x13c))();
  (**(code **)(**(int **)(in_ECX + 0x278) + 0x13c))();
  (**(code **)(**(int **)(in_ECX + 0x27c) + 0x13c))();
  (**(code **)(**(int **)(in_ECX + 0x280) + 0x13c))();
  (**(code **)(**(int **)(in_ECX + 0x284) + 0x13c))();
  (**(code **)(**(int **)(in_ECX + 0x288) + 0x13c))();
  (**(code **)(**(int **)(in_ECX + 0x28c) + 0x13c))();
  (**(code **)(**(int **)(in_ECX + 0x290) + 0x13c))();
  (**(code **)(**(int **)(in_ECX + 0x294) + 0x13c))();
  ExceptionList = local_c;
  return;
}


// ==== 100b81a0 FUN_100b81a0

int FUN_100b81a0(void)

{
  int iVar1;
  ushort *puVar2;
  int iVar3;
  int local_24;
  int local_20;
  FString local_18 [12];
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_101f3103;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_4 = 0;
  FArray::FArray((FArray *)&local_24);
  local_4._0_1_ = 2;
  puVar2 = FString::operator*((FString *)&stack0x00000004);
  FString::FString(local_18,puVar2);
  local_4._0_1_ = 3;
  FUN_100b6780(local_18,&local_24);
  local_4._0_1_ = 2;
  FString::~FString(local_18);
  iVar3 = 0;
  if (0 < local_20) {
    do {
      if ((*(int *)(local_24 + iVar3 * 4) != 0) &&
         (iVar1 = *(int *)(local_24 + iVar3 * 4), *(int *)(iVar1 + 0x9f8) == 0)) {
        local_4 = (uint)local_4._1_3_ << 8;
        FUN_100b7430();
        local_4 = 0xffffffff;
        FString::~FString((FString *)&stack0x00000004);
        ExceptionList = local_c;
        return iVar1;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < local_20);
  }
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_100b7430();
  local_4 = 0xffffffff;
  FString::~FString((FString *)&stack0x00000004);
  ExceptionList = local_c;
  return 0;
}


// ==== 100b82c0 FUN_100b82c0

int FUN_100b82c0(void)

{
  int iVar1;
  int in_ECX;
  int iVar2;
  
  iVar2 = 0;
  if (0 < *(int *)(in_ECX + 0x1fc)) {
    do {
      iVar1 = *(int *)(*(int *)(in_ECX + 0x1f8) + 8 + iVar2 * 0xc);
      if ((iVar1 != 0) && (*(int *)(iVar1 + 0x9fc) == 0)) {
        return iVar1;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)(in_ECX + 0x1fc));
  }
  return 0;
}


// ==== 100b8370 FUN_100b8370

void FUN_100b8370(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int in_ECX;
  undefined4 uStack_44;
  ushort *puStack_40;
  int local_14;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_101f3171;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_4 = 0;
  puStack_40 = (ushort *)0x100b83c8;
  puStack_40 = FString::operator*((FString *)&stack0x00000024);
  uStack_44 = 0x100b83d4;
  iVar1 = FUN_100c5000();
  puStack_40 = (ushort *)0x100b83e6;
  iVar2 = FUN_100c4fc0();
  if (iVar2 != 0) {
    puStack_40 = (ushort *)0x100b83fe;
    FUN_100c6240();
  }
  if (iVar1 != 0) {
    puStack_40 = (ushort *)0x100b8411;
    iVar1 = FString::operator==((FString *)&stack0x0000000c,(ushort *)&DAT_10251d0c);
    if (iVar1 == 0) goto LAB_100b8459;
  }
  if (*(int *)GMsnLoginAlarm_exref != 0) {
    FUN_100abb60(&param_1);
    local_4 = local_4 & 0xffffff00;
    FUN_100b11f0();
    (**(code **)(**(int **)(in_ECX + 0x26c) + 0x138))();
  }
LAB_100b8459:
  local_14 = 0;
  local_4._0_1_ = 2;
  if (0 < *(int *)(in_ECX + 0x1d4)) {
    do {
      if (*(int *)(*(int *)(in_ECX + 0x1d0) + 0x10 + local_14 * 0x14) != 0) {
        FString::FString((FString *)&uStack_44,(FString *)&stack0x00000024);
        local_4._0_1_ = 2;
        iVar1 = FUN_100998d0();
        if (iVar1 != 0) {
          FUN_100999a0();
        }
      }
      local_14 = local_14 + 1;
    } while (local_14 < *(int *)(in_ECX + 0x1d4));
  }
  local_4 = 0xffffffff;
  FUN_100abc50();
  ExceptionList = local_c;
  return;
}


// ==== 100b84f0 FUN_100b84f0

void FUN_100b84f0(undefined4 param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int in_ECX;
  int *piVar3;
  FString aFStack_40 [4];
  undefined4 uStack_3c;
  int *piStack_38;
  uint uStack_34;
  int local_24;
  undefined1 *local_20;
  int *local_1c;
  int *local_18;
  int local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_101f31a9;
  local_c = ExceptionList;
  uStack_34 = DAT_103554c4 ^ (uint)&stack0xffffffd0;
  ExceptionList = &local_c;
  local_4 = 0;
  piStack_38 = param_2;
  uStack_3c = 0x100b852e;
  local_24 = FUN_100c4fc0();
  if (local_24 != 0) {
    piStack_38 = &local_24;
    uStack_3c = 0x100b8546;
    FUN_100c6240();
  }
  piVar3 = (int *)(in_ECX + 0x1d0);
  local_14 = 0;
  local_10 = 0;
  local_4._0_1_ = 1;
  local_1c = piVar3;
  local_18 = piVar3;
  if (0 < *(int *)(in_ECX + 0x1d4)) {
    do {
      iVar1 = local_14;
      if (*(int *)(*piVar3 + 0x10 + local_14 * 0x14) != 0) {
        local_20 = aFStack_40;
        FString::FString(aFStack_40,(FString *)&stack0x00000024);
        local_4._0_1_ = 1;
        iVar2 = FUN_100998d0();
        if (iVar2 != 0) {
          piStack_38 = (int *)0x100b85a3;
          FUN_100999a0();
        }
      }
      local_14 = iVar1 + 1;
    } while (local_14 < *(int *)(in_ECX + 0x1d4));
  }
  local_4 = 0xffffffff;
  piStack_38 = (int *)0x100b85c0;
  FUN_100abc50();
  ExceptionList = local_c;
  return;
}


// ==== 100b85e0 FUN_100b85e0

void FUN_100b85e0(void)

{
  int *piVar1;
  int in_ECX;
  int iVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101f31d8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_1005fe50(DAT_103554c4 ^ (uint)&stack0xffffffdc);
  iVar2 = 0;
  local_4 = 0;
  if (0 < *(int *)(in_ECX + 0x1e8)) {
    do {
      piVar1 = *(int **)(*(int *)(in_ECX + 0x1e4) + 8 + iVar2 * 0xc);
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 0x13c))();
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)(in_ECX + 0x1e8));
  }
  ExceptionList = local_c;
  return;
}


// ==== 100b8670 FUN_100b8670

int FUN_100b8670(void)

{
  int iVar1;
  int in_ECX;
  int iVar2;
  
  iVar2 = 0;
  if (0 < *(int *)(in_ECX + 0x1e8)) {
    do {
      iVar1 = *(int *)(*(int *)(in_ECX + 0x1e4) + 8 + iVar2 * 0xc);
      if ((iVar1 != 0) && (*(int *)(iVar1 + 0x1dc) == 0)) {
        return iVar1;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)(in_ECX + 0x1e8));
  }
  return 0;
}


// ==== 100b8720 FUN_100b8720

int FUN_100b8720(ushort *param_1,int *param_2)

{
  int iVar1;
  int *in_ECX;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = 0;
  iVar4 = in_ECX[1] + -1;
  if (-1 < iVar4) {
    iVar2 = iVar4 * 0x14;
    do {
      iVar1 = FString::operator==((FString *)(*in_ECX + iVar2 + 4),param_1);
      if ((iVar1 != 0) && (*(int *)(iVar2 + 0x10 + *in_ECX) == *param_2)) {
        FUN_100b7810(iVar4,1);
        iVar3 = iVar3 + 1;
      }
      iVar4 = iVar4 + -1;
      iVar2 = iVar2 + -0x14;
    } while (-1 < iVar4);
    if (iVar3 != 0) {
      if (in_ECX[1] * 2 + 8 < in_ECX[4]) {
        do {
          iVar4 = in_ECX[4];
          in_ECX[4] = iVar4 / 2;
        } while (in_ECX[1] * 2 + 8 < iVar4 / 2);
      }
      FUN_1006b150();
    }
  }
  return iVar3;
}


// ==== 100b87b0 FUN_100b87b0

int FUN_100b87b0(ushort *param_1,undefined4 *param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int *in_ECX;
  
  uVar1 = FUN_10048c20(param_1);
  iVar3 = *(int *)(in_ECX[3] + (uVar1 & in_ECX[4] - 1U) * 4);
  while( true ) {
    if (iVar3 == -1) {
      iVar3 = FUN_100b74d0(param_1,param_2);
      return iVar3;
    }
    iVar2 = FString::operator==((FString *)(*in_ECX + iVar3 * 0x14 + 4),param_1);
    if (iVar2 != 0) break;
    iVar3 = *(int *)(iVar3 * 0x14 + *in_ECX);
  }
  *(undefined4 *)(iVar3 * 0x14 + 0x10 + *in_ECX) = *param_2;
  return iVar3 * 0x14 + 0x10 + *in_ECX;
}


// ==== 100b8830 FUN_100b8830

int FUN_100b8830(ushort *param_1)

{
  int iVar1;
  int *in_ECX;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = 0;
  iVar4 = in_ECX[1] + -1;
  if (-1 < iVar4) {
    iVar2 = iVar4 * 0x14;
    do {
      iVar1 = FString::operator==((FString *)(*in_ECX + iVar2 + 4),param_1);
      if (iVar1 != 0) {
        FUN_100b7810(iVar4,1);
        iVar3 = iVar3 + 1;
      }
      iVar4 = iVar4 + -1;
      iVar2 = iVar2 + -0x14;
    } while (-1 < iVar4);
    if (iVar3 != 0) {
      if (in_ECX[1] * 2 + 8 < in_ECX[4]) {
        do {
          iVar4 = in_ECX[4];
          in_ECX[4] = iVar4 / 2;
        } while (in_ECX[1] * 2 + 8 < iVar4 / 2);
      }
      FUN_1006b150();
    }
  }
  return iVar3;
}


// ==== 100b88b0 FUN_100b88b0

void FUN_100b88b0(void)

{
  uint uVar1;
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101f3241;
  local_c = ExceptionList;
  uVar1 = DAT_103554c4 ^ (uint)&stack0xffffffec;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX);
  local_4 = 1;
  *(undefined4 *)(in_ECX + 0xc) = 0;
  *(undefined4 *)(in_ECX + 0x10) = 8;
  FUN_1000b930(uVar1);
  ExceptionList = local_c;
  return;
}


// ==== 100b8920 FUN_100b8920

int FUN_100b8920(ushort *param_1,undefined4 *param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int *in_ECX;
  
  uVar1 = FUN_10048c20(param_1);
  iVar3 = *(int *)(in_ECX[3] + (uVar1 & in_ECX[4] - 1U) * 4);
  while( true ) {
    if (iVar3 == -1) {
      iVar3 = FUN_100b75d0(param_1,param_2);
      return iVar3;
    }
    iVar2 = FString::operator==((FString *)(*in_ECX + iVar3 * 0x14 + 4),param_1);
    if (iVar2 != 0) break;
    iVar3 = *(int *)(iVar3 * 0x14 + *in_ECX);
  }
  *(undefined4 *)(iVar3 * 0x14 + 0x10 + *in_ECX) = *param_2;
  return iVar3 * 0x14 + 0x10 + *in_ECX;
}


// ==== 100b89a0 FUN_100b89a0

int FUN_100b89a0(ushort *param_1)

{
  int iVar1;
  int *in_ECX;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = 0;
  iVar4 = in_ECX[1] + -1;
  if (-1 < iVar4) {
    iVar2 = iVar4 * 0x14;
    do {
      iVar1 = FString::operator==((FString *)(*in_ECX + iVar2 + 4),param_1);
      if (iVar1 != 0) {
        FUN_100b78f0(iVar4,1);
        iVar3 = iVar3 + 1;
      }
      iVar4 = iVar4 + -1;
      iVar2 = iVar2 + -0x14;
    } while (-1 < iVar4);
    if (iVar3 != 0) {
      if (in_ECX[1] * 2 + 8 < in_ECX[4]) {
        do {
          iVar4 = in_ECX[4];
          in_ECX[4] = iVar4 / 2;
        } while (in_ECX[1] * 2 + 8 < iVar4 / 2);
      }
      FUN_1006b150();
    }
  }
  return iVar3;
}


// ==== 100b8a20 FUN_100b8a20

void FUN_100b8a20(void)

{
  uint uVar1;
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101f3271;
  local_c = ExceptionList;
  uVar1 = DAT_103554c4 ^ (uint)&stack0xffffffec;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX);
  local_4 = 1;
  *(undefined4 *)(in_ECX + 0xc) = 0;
  *(undefined4 *)(in_ECX + 0x10) = 8;
  FUN_1000b930(uVar1);
  ExceptionList = local_c;
  return;
}


// ==== 100b8a90 FUN_100b8a90

void FUN_100b8a90(void)

{
  int in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_101f3298;
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
  FUN_100b76d0();
  ExceptionList = local_c;
  return;
}


// ==== 100b8b10 FUN_100b8b10

void FUN_100b8b10(void)

{
  int in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_101f32c8;
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
  FUN_100b7770();
  ExceptionList = local_c;
  return;
}


// ==== 100b8b90 FUN_100b8b90

void FUN_100b8b90(void)

{
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_101f32f9;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_4 = 0;
  FUN_100b7810(0,*(undefined4 *)(in_ECX + 4));
  local_4 = 0xffffffff;
  FArray::~FArray(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 100b8bf0 FUN_100b8bf0

void FUN_100b8bf0(void)

{
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_101f3329;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_4 = 0;
  FUN_100b78f0(0,*(undefined4 *)(in_ECX + 4));
  local_4 = 0xffffffff;
  FArray::~FArray(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 100b8c50 FUN_100b8c50

undefined4 FUN_100b8c50(void)

{
  undefined4 uVar1;
  int in_ECX;
  int iVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101f3358;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  iVar2 = *(int *)(in_ECX + 0x1cc);
  if (iVar2 != 0) {
    FUN_100ab660(DAT_103554c4 ^ (uint)&stack0xffffffd4);
    (**(code **)(**(int **)GMalloc_exref + 8))(iVar2);
    *(undefined4 *)(in_ECX + 0x1cc) = 0;
  }
  iVar2 = 0;
  local_4 = 0;
  if (0 < *(int *)(in_ECX + 0x1d4)) {
    do {
      if (*(int *)(*(int *)(in_ECX + 0x1d0) + 0x10 + iVar2 * 0x14) != 0) {
        uVar1 = FUN_10058020();
        FUN_10060e00(uVar1);
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)(in_ECX + 0x1d4));
  }
  local_4 = 0xffffffff;
  FUN_100b7550(0);
  *(undefined4 *)(in_ECX + 0x1e0) = 8;
  FUN_1006b150();
  FUN_100b7550(0);
  *(undefined4 *)(in_ECX + 500) = 8;
  FUN_1006b150();
  FArray::Empty((FArray *)(in_ECX + 0x1f8),0xc,0);
  *(undefined4 *)(in_ECX + 0x208) = 8;
  FUN_1000b930();
  if (*(int *)(in_ECX + 0x250) != 0) {
    FUN_1003f610(*(int *)(in_ECX + 0x250));
    *(undefined4 *)(in_ECX + 0x250) = 0;
  }
  if (*(int *)(in_ECX + 0x254) != 0) {
    *(undefined4 *)(in_ECX + 0x254) = 0;
  }
  if (*(int *)(in_ECX + 600) != 0) {
    *(undefined4 *)(in_ECX + 600) = 0;
  }
  if (*(int *)(in_ECX + 0x25c) != 0) {
    *(undefined4 *)(in_ECX + 0x25c) = 0;
  }
  if (*(int *)(in_ECX + 0x260) != 0) {
    *(undefined4 *)(in_ECX + 0x260) = 0;
  }
  if (*(int *)(in_ECX + 0x264) != 0) {
    *(undefined4 *)(in_ECX + 0x264) = 0;
  }
  uVar1 = FUN_10058020();
  FUN_10060e00(uVar1);
  uVar1 = FUN_10058020();
  FUN_10060e00(uVar1);
  uVar1 = FUN_10058020();
  FUN_10060e00(uVar1);
  uVar1 = FUN_10058020();
  FUN_10060e00(uVar1);
  uVar1 = FUN_10058020();
  FUN_10060e00(uVar1);
  uVar1 = FUN_10058020();
  FUN_10060e00(uVar1);
  uVar1 = FUN_10058020();
  FUN_10060e00(uVar1);
  uVar1 = FUN_10058020();
  FUN_10060e00(uVar1);
  uVar1 = FUN_10058020();
  FUN_10060e00(uVar1);
  uVar1 = FUN_10058020();
  FUN_10060e00(uVar1);
  uVar1 = FUN_10058020();
  FUN_10060e00(uVar1);
  if (*(int *)(in_ECX + 0x270) != 0) {
    *(undefined4 *)(in_ECX + 0x270) = 0;
  }
  if (*(int *)(in_ECX + 0x298) != 0) {
    *(undefined4 *)(in_ECX + 0x298) = 0;
  }
  if (*(int *)(in_ECX + 0x29c) != 0) {
    *(undefined4 *)(in_ECX + 0x29c) = 0;
  }
  if (*(int *)(in_ECX + 0x2a0) != 0) {
    *(undefined4 *)(in_ECX + 0x2a0) = 0;
  }
  if (*(int *)(in_ECX + 0x2a4) != 0) {
    *(undefined4 *)(in_ECX + 0x2a4) = 0;
  }
  if (*(int *)(in_ECX + 0x2a8) != 0) {
    *(undefined4 *)(in_ECX + 0x2a8) = 0;
  }
  if (*(int *)(in_ECX + 0x2ac) != 0) {
    *(undefined4 *)(in_ECX + 0x2ac) = 0;
  }
  FUN_10061e90();
  ExceptionList = local_c;
  return 1;
}


// ==== 100b8f70 FUN_100b8f70

undefined4 FUN_100b8f70(int *param_1)

{
  int *piVar1;
  int *piVar2;
  uint uVar3;
  L2ConsoleState LVar4;
  int iVar5;
  int *in_ECX;
  int *piStack_20;
  int *piStack_1c;
  int *piStack_18;
  int iStack_14;
  undefined4 uStack_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_101f3388;
  local_c = ExceptionList;
  uVar3 = DAT_103554c4 ^ (uint)&stack0xffffffd0;
  ExceptionList = &local_c;
  if (param_1 == (int *)0xa55) {
    if (in_ECX[0x94] != 0) {
      FUN_1003f610(in_ECX[0x94]);
      in_ECX[0x94] = 0;
    }
    (**(code **)(*(int *)in_ECX[0x98] + 0x174))(uVar3);
    piVar1 = in_ECX + 0x74;
    iStack_14 = 0;
    uStack_10 = 0;
    uStack_4 = 0;
    piStack_1c = piVar1;
    piStack_18 = piVar1;
    if (0 < in_ECX[0x75]) {
      do {
        iVar5 = iStack_14;
        piVar2 = *(int **)(*piVar1 + 0x10 + iStack_14 * 0x14);
        param_1 = piVar2;
        if (piVar2 != (int *)0x0) {
          (**(code **)(*piVar2 + 0x174))();
          piStack_20 = piVar2;
          FUN_10087320(&piStack_20,&param_1);
          (**(code **)(*piVar2 + 0x13c))();
        }
        iStack_14 = iVar5 + 1;
      } while (iStack_14 < in_ECX[0x75]);
    }
    uStack_4 = 0xffffffff;
    FUN_100b7550(0);
    in_ECX[0x78] = 8;
    FUN_1006b150();
    FUN_100b7550(0);
    in_ECX[0x7d] = 8;
    FUN_1006b150();
    if ((int *)in_ECX[0x99] != (int *)0x0) {
      (**(code **)(*(int *)in_ECX[0x99] + 0x174))();
    }
    (**(code **)(*(int *)in_ECX[0x97] + 0x13c))();
    LVar4 = UL2ConsoleWnd::GetState(DAT_103663bc);
    if ((LVar4 == 5) && (iVar5 = (**(code **)(*in_ECX + 0xfc))(0), iVar5 != 0)) {
      (**(code **)(*(int *)in_ECX[0x95] + 0x138))();
    }
  }
  ExceptionList = local_c;
  return 1;
}


// ==== 100b90f0 FUN_100b90f0

void FUN_100b90f0(void)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  int in_ECX;
  int *local_24;
  int *piStack_20;
  int *local_1c;
  int *local_18;
  int local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101f33b8;
  local_c = ExceptionList;
  uVar4 = DAT_103554c4 ^ (uint)&stack0xffffffcc;
  ExceptionList = &local_c;
  if (*(int *)(in_ECX + 0x250) != 0) {
    FUN_1003f610(*(int *)(in_ECX + 0x250));
    *(undefined4 *)(in_ECX + 0x250) = 0;
  }
  piVar1 = (int *)(in_ECX + 0x1d0);
  local_14 = 0;
  local_10 = 0;
  local_4 = 0;
  local_1c = piVar1;
  local_18 = piVar1;
  if (0 < *(int *)(in_ECX + 0x1d4)) {
    do {
      iVar3 = local_14;
      piVar2 = *(int **)(*piVar1 + 0x10 + local_14 * 0x14);
      local_24 = piVar2;
      if (piVar2 != (int *)0x0) {
        (**(code **)(*piVar2 + 0x174))(uVar4);
        piStack_20 = piVar2;
        FUN_10087320(&piStack_20,&local_24);
        (**(code **)(*piVar2 + 0x13c))();
      }
      local_14 = iVar3 + 1;
    } while (local_14 < *(int *)(in_ECX + 0x1d4));
  }
  local_4 = 0xffffffff;
  FUN_100b7550(0);
  *(undefined4 *)(in_ECX + 0x1e0) = 8;
  FUN_1006b150();
  FUN_100b7550(0);
  *(undefined4 *)(in_ECX + 500) = 8;
  FUN_1006b150();
  if (*(int **)(in_ECX + 0x264) != (int *)0x0) {
    (**(code **)(**(int **)(in_ECX + 0x264) + 0x174))();
    (**(code **)(**(int **)(in_ECX + 0x264) + 0x13c))();
  }
  FUN_100aa580();
  FUN_100ad280();
  (**(code **)(**(int **)(in_ECX + 0x260) + 0x174))();
  ExceptionList = local_c;
  return;
}


// ==== 100b9240 FUN_100b9240

void FUN_100b9240(void)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int in_ECX;
  int iStack_44;
  int **ppiStack_40;
  int **ppiStack_3c;
  uint local_38;
  int *local_24;
  int *local_20;
  int *local_1c;
  int *local_18;
  int local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101f33f1;
  local_c = ExceptionList;
  local_38 = DAT_103554c4 ^ (uint)&stack0xffffffcc;
  ExceptionList = &local_c;
  local_20 = &iStack_44;
  FString::FString((FString *)&iStack_44,(ushort *)&DAT_10252c20);
  local_4 = 0xffffffff;
  FUN_100a9d20();
  piVar1 = (int *)(in_ECX + 0x1d0);
  local_14 = 0;
  local_10 = 0;
  local_4 = 1;
  local_1c = piVar1;
  local_18 = piVar1;
  if (0 < *(int *)(in_ECX + 0x1d4)) {
    do {
      iVar3 = local_14;
      piVar2 = *(int **)(*piVar1 + 0x10 + local_14 * 0x14);
      local_24 = piVar2;
      if (piVar2 != (int *)0x0) {
        ppiStack_3c = (int **)0x100b92dd;
        (**(code **)(*piVar2 + 0x174))();
        ppiStack_3c = &local_24;
        ppiStack_40 = &local_20;
        iStack_44 = 0x100b92f6;
        local_20 = piVar2;
        FUN_10087320();
        ppiStack_3c = (int **)0x100b9302;
        (**(code **)(*piVar2 + 0x13c))();
      }
      local_14 = iVar3 + 1;
    } while (local_14 < *(int *)(in_ECX + 0x1d4));
  }
  local_4 = 0xffffffff;
  ppiStack_3c = (int **)0x0;
  ppiStack_40 = (int **)0x100b931f;
  FUN_100b7550();
  *(undefined4 *)(in_ECX + 0x1e0) = 8;
  ppiStack_3c = (int **)0x100b932e;
  FUN_1006b150();
  ppiStack_3c = (int **)0x0;
  ppiStack_40 = (int **)0x100b933d;
  FUN_100b7550();
  *(undefined4 *)(in_ECX + 500) = 8;
  ppiStack_3c = (int **)0x100b9347;
  FUN_1006b150();
  if (*(int *)(in_ECX + 0x264) != 0) {
    ppiStack_3c = (int **)0x100b9360;
    (**(code **)(**(int **)(in_ECX + 0x264) + 0x174))();
    ppiStack_3c = (int **)0x100b9370;
    (**(code **)(**(int **)(in_ECX + 0x264) + 0x13c))();
  }
  ExceptionList = local_c;
  return;
}


// ==== 100b9390 FUN_100b9390

void FUN_100b9390(int param_1)

{
  int iVar1;
  ushort *puVar2;
  FString aFStack_20 [8];
  undefined4 uStack_18;
  uint uStack_14;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101f3419;
  local_c = ExceptionList;
  uStack_14 = DAT_103554c4 ^ (uint)&stack0xfffffff0;
  ExceptionList = &local_c;
  if (param_1 != 0) {
    uStack_18 = 0x100b93c0;
    iVar1 = FUN_100adfb0();
    if (iVar1 != 0) {
      uStack_18 = 0x100b93cd;
      puVar2 = FString::operator*((FString *)(iVar1 + 0x20));
      FString::FString(aFStack_20,puVar2);
      local_4 = 0xffffffff;
      FUN_100b81a0();
    }
  }
  ExceptionList = local_c;
  return;
}


// ==== 100b9410 FUN_100b9410

void FUN_100b9410(int param_1)

{
  FString *pFVar1;
  ushort *puVar2;
  int iVar3;
  FString local_18 [12];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101f3449;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (param_1 != 0) {
    pFVar1 = (FString *)FUN_100adf40(DAT_103554c4 ^ (uint)&stack0xffffffdc);
    puVar2 = FString::operator*(pFVar1);
    FString::FString(local_18,puVar2);
    local_4 = 0;
    iVar3 = FUN_100d0a00(local_18);
    local_4 = 0xffffffff;
    FString::~FString(local_18);
    if (iVar3 != 0) {
      *(undefined4 *)(iVar3 + 0x1d4) = 0;
      *(undefined4 *)(*(int *)(iVar3 + 0xae0) + 0x1d0) = 0;
    }
    pFVar1 = (FString *)FUN_100adf40();
    puVar2 = FString::operator*(pFVar1);
    FUN_100b8830(puVar2);
  }
  ExceptionList = local_c;
  return;
}


// ==== 100b94e0 FUN_100b94e0

void FUN_100b94e0(void)

{
  int *piVar1;
  UObject *pUVar2;
  int iVar3;
  int iVar4;
  FString *pFVar5;
  int in_ECX;
  FString aFStack_94 [4];
  undefined4 uStack_90;
  int iStack_8c;
  undefined1 auStack_88 [32];
  undefined4 uStack_68;
  undefined *puStack_64;
  UPackage *pUStack_60;
  int *piStack_5c;
  int iStack_50;
  ushort *puStack_4c;
  int *piStack_30;
  undefined1 *puStack_2c;
  undefined1 *puStack_28;
  FString aFStack_24 [8];
  FString aFStack_1c [12];
  void *pvStack_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_101f34c8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_4 = 0;
  FUN_100b5790();
  puStack_4c = (ushort *)0x100b9525;
  FString::FString(aFStack_24,(FString *)&stack0x00000024);
  local_4._0_1_ = 1;
  piStack_30 = &iStack_50;
  FString::FString((FString *)&iStack_50,aFStack_24);
  local_4._0_1_ = 1;
  piVar1 = (int *)FUN_100b81a0();
  if (piVar1 == (int *)0x0) {
    piVar1 = (int *)FUN_100b82c0();
    piStack_30 = piVar1;
    if (piVar1 == (int *)0x0) {
      puStack_4c = (ushort *)0x100b957c;
      FName::FName((FName *)&piStack_30,0);
      pUStack_60 = UObject::GetTransientPackage();
      iStack_50 = *(int *)GError_exref;
      piStack_5c = piStack_30;
      puStack_64 = &DAT_10376210;
      uStack_68 = 0x100b95a0;
      puStack_4c = (ushort *)piVar1;
      pUVar2 = UObject::StaticAllocateObject();
      if (pUVar2 == (UObject *)0x0) {
        piVar1 = (int *)0x0;
      }
      else {
        puStack_2c = auStack_88;
        iStack_8c = in_ECX + 0x20c;
        uStack_90 = 0x100b95be;
        FUN_100abb60();
        local_4._0_1_ = 3;
        puStack_28 = aFStack_94;
        FString::FString(aFStack_94,aFStack_24);
        local_4._0_1_ = 1;
        piVar1 = (int *)FUN_1009c500(in_ECX,*(undefined4 *)(in_ECX + 0x1cc));
      }
      piStack_30 = piVar1;
      iVar3 = appRand();
      iVar4 = appRand();
      puStack_4c = (ushort *)0x0;
      iStack_50 = 0;
      piStack_5c = (int *)(iVar4 % 0x96 + 0x96);
      puStack_64 = (undefined *)0x100b9646;
      pUStack_60 = (UPackage *)(iVar3 % 200 + 200);
      (**(code **)(*piVar1 + 0xc0))();
      iStack_50 = 0x100b965c;
      puStack_4c = (ushort *)piVar1;
      FUN_10060d40();
      puStack_4c = (ushort *)0x100b9664;
      FUN_1005c1e0();
    }
    puStack_4c = FString::operator*(aFStack_24);
    iStack_50 = 0x100b967f;
    FUN_100b74d0();
    puStack_4c = (ushort *)0x100b968d;
    pFVar5 = (FString *)FUN_100abd40();
    local_4 = CONCAT31(local_4._1_3_,5);
    iVar3 = *piVar1;
    FString::operator*(pFVar5);
    puStack_4c = (ushort *)0x100b96a7;
    (**(code **)(iVar3 + 0x168))();
    puStack_8._0_1_ = 1;
    puStack_4c = (ushort *)0x100b96b5;
    FString::~FString(aFStack_1c);
    puStack_2c = &stack0xffffffac;
    piStack_5c = (int *)0x100b96c9;
    FString::FString((FString *)&stack0xffffffac,(FString *)&puStack_28);
    puStack_8._0_1_ = 1;
    FUN_100b1e90();
    piVar1[0x27f] = 1;
    puStack_4c = (ushort *)0x100b96eb;
    (**(code **)(*piVar1 + 0x138))();
    puStack_4c = (ushort *)0x100b96f4;
    (**(code **)(*piVar1 + 0x78))();
    puStack_2c = &stack0xffffffac;
    piStack_5c = (int *)0x100b9708;
    FString::FString((FString *)&stack0xffffffac,(FString *)&puStack_28);
    puStack_8 = (undefined1 *)CONCAT31(puStack_8._1_3_,1);
    FUN_100a9940();
  }
  else {
    puStack_4c = (ushort *)0x100b972f;
    pFVar5 = (FString *)FUN_100abd40();
    local_4 = CONCAT31(local_4._1_3_,8);
    iVar3 = *piVar1;
    FString::operator*(pFVar5);
    puStack_4c = (ushort *)0x100b9749;
    (**(code **)(iVar3 + 0x168))();
    puStack_8._0_1_ = 1;
    puStack_4c = (ushort *)0x100b9757;
    FString::~FString(aFStack_1c);
    puStack_2c = &stack0xffffffac;
    piStack_5c = (int *)0x100b976b;
    FString::FString((FString *)&stack0xffffffac,(FString *)&puStack_28);
    puStack_8 = (undefined1 *)CONCAT31(puStack_8._1_3_,1);
    FUN_100b1e90();
    piVar1[0x27f] = 1;
    puStack_4c = (ushort *)0x100b978d;
    (**(code **)(*piVar1 + 0x138))();
    puStack_4c = (ushort *)0x100b9796;
    (**(code **)(*piVar1 + 0x78))();
    if (*(int *)(in_ECX + 0x264) != 0) {
      puStack_4c = (ushort *)piVar1[0x75];
      iStack_50 = 0x100b97ae;
      iVar3 = FUN_10099cf0();
      if (iVar3 != 0) {
        *(undefined4 *)(iVar3 + 0x1d4) = 0;
      }
    }
  }
  puStack_8 = (undefined1 *)((uint)puStack_8 & 0xffffff00);
  puStack_4c = (ushort *)0x100b97cb;
  FString::~FString((FString *)&puStack_28);
  puStack_8 = (undefined1 *)0xffffffff;
  puStack_4c = (ushort *)0x100b97dc;
  FUN_100abc50();
  ExceptionList = pvStack_10;
  return;
}


// ==== 100b9800 FUN_100b9800

void FUN_100b9800(int param_1)

{
  FString *pFVar1;
  ushort *puVar2;
  int iVar3;
  int in_ECX;
  int iStack_44;
  ushort *puStack_40;
  FString local_24 [12];
  FString local_18 [12];
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_101f351b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_4 = 0;
  if (param_1 != 0) {
    puStack_40 = (ushort *)0x100b984c;
    FString::FString(local_24,(FString *)&stack0x00000028);
    local_4._0_1_ = 1;
    pFVar1 = (FString *)FUN_100adf40();
    puVar2 = FString::operator*(pFVar1);
    puStack_40 = (ushort *)0x100b986b;
    FString::FString(local_18,puVar2);
    local_4._0_1_ = 2;
    puStack_40 = (ushort *)0x100b9882;
    iVar3 = FUN_100d0a00();
    local_4._0_1_ = 1;
    FString::~FString(local_18);
    if (iVar3 == 0) {
      FString::FString((FString *)&iStack_44,local_24);
      local_4 = CONCAT31(local_4._1_3_,1);
      iVar3 = FUN_100b81a0();
      if (iVar3 != 0) {
        puStack_40 = (ushort *)0x100b98e4;
        pFVar1 = (FString *)FUN_100adf40();
        puStack_40 = (ushort *)0x100b98ec;
        puStack_40 = FString::operator*(pFVar1);
        iStack_44 = 0x100b98f4;
        FUN_100b87b0();
        puStack_40 = (ushort *)0x100b98fc;
        FUN_10099b30();
        FUN_1009a8b0();
        if (*(int *)(in_ECX + 0x264) != 0) {
          puStack_40 = (ushort *)param_1;
          iStack_44 = 0x100b9914;
          FUN_10098d30();
          iStack_44 = param_1;
          puStack_40 = (ushort *)iVar3;
          FUN_1009d9d0();
        }
      }
    }
    else {
      FUN_100abb60(&stack0x00000008);
      local_4 = CONCAT31(local_4._1_3_,1);
      FUN_10098890();
      FUN_1009a8b0();
      if (*(int *)(in_ECX + 0x264) != 0) {
        iStack_44 = param_1;
        puStack_40 = (ushort *)iVar3;
        FUN_1009d9d0();
      }
      FUN_1009b670();
    }
    local_4 = local_4 & 0xffffff00;
    FString::~FString(local_24);
  }
  local_4 = 0xffffffff;
  FUN_100abc50();
  ExceptionList = local_c;
  return;
}


// ==== 100b99b0 FUN_100b99b0

void FUN_100b99b0(int *param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  FString *this;
  ushort *puVar4;
  int in_ECX;
  undefined4 *puVar5;
  int *piStack_4;
  
  piVar3 = param_1;
  iVar1 = param_1[0x75];
  if (iVar1 != 0) {
    this = (FString *)FUN_100adf40();
    puVar4 = FString::operator*(this);
    FUN_100b8830(puVar4);
    FUN_100a9930(iVar1);
  }
  puVar5 = &param_1;
  puVar4 = FString::operator*((FString *)(piVar3 + 0x28f));
  FUN_100b8720(puVar4,puVar5);
  if (*(int *)(in_ECX + 0x264) != 0) {
    FUN_10099cb0(piVar3);
  }
  piVar2 = *(int **)(in_ECX + 0x264);
  if ((piVar2 != (int *)0x0) && (piVar2[0x74] == 0)) {
    (**(code **)(*piVar2 + 0x13c))();
  }
  (**(code **)(*piVar3 + 0x174))();
  piStack_4 = piVar3;
  FUN_10087320(&piStack_4,&param_1);
  return;
}


// ==== 100b9a70 FUN_100b9a70

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

void FUN_100b9a70(void)

{
  void *_Src;
  int iVar1;
  int iVar2;
  undefined1 auStack_28c0 [48];
  undefined4 uStack_2890;
  undefined1 *local_2870;
  undefined1 local_286c [6160];
  ushort local_105c [2076];
  int local_24;
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101f3557;
  local_c = ExceptionList;
  local_10 = DAT_103554c4 ^ (uint)&local_2870;
  ExceptionList = &local_c;
  _Src = (void *)FUN_100556c0();
  if (_Src != (void *)0x0) {
    _memcpy(local_286c,_Src,0x285c);
    if (local_24 == 3) {
      local_2870 = &stack0xffffd778;
      uStack_2890 = 0x100b9b1b;
      FString::FString((FString *)&stack0xffffd778,local_105c);
      local_4 = 0xffffffff;
      iVar1 = FUN_100aa5a0();
      iVar2 = FString::operator!=((FString *)(iVar1 + 0x14),(ushort *)&DAT_10251d0c);
      if (iVar2 != 0) {
        local_2870 = auStack_28c0;
        FUN_100abb60(iVar1);
        local_4 = 0xffffffff;
        FUN_100b94e0();
      }
    }
  }
  ExceptionList = local_c;
  __security_check_cookie(local_10 ^ (uint)&local_2870);
  return;
}


// ==== 100b9bb0 FUN_100b9bb0

void FUN_100b9bb0(void)

{
  ushort *puVar1;
  int *piVar2;
  UPackage *pUVar3;
  UObject *pUVar4;
  int iVar5;
  int iVar6;
  int in_ECX;
  undefined4 uStack_44;
  ushort *puStack_40;
  int *local_20;
  undefined1 *local_1c;
  FString local_18 [8];
  void *pvStack_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_101f35d8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_4 = 0;
  FUN_100b5cc0();
  puVar1 = FString::operator*((FString *)&stack0x00000004);
  puStack_40 = (ushort *)0x100b9bf9;
  FString::FString(local_18,puVar1);
  local_4._0_1_ = 1;
  puStack_40 = (ushort *)0x100b9c0e;
  piVar2 = (int *)FUN_100d0a00();
  local_4._0_1_ = 0;
  FString::~FString(local_18);
  if (piVar2 == (int *)0x0) {
    piVar2 = (int *)FUN_100b8670();
    local_20 = piVar2;
    if (piVar2 == (int *)0x0) {
      puStack_40 = (ushort *)0x100b9c4f;
      FName::FName((FName *)&local_20,0);
      pUVar3 = UObject::GetTransientPackage();
      uStack_44 = *(undefined4 *)GError_exref;
      puStack_40 = (ushort *)0x0;
      pUVar4 = UObject::StaticAllocateObject(&DAT_1037afe0,pUVar3,local_20);
      if (pUVar4 == (UObject *)0x0) {
        piVar2 = (int *)0x0;
      }
      else {
        local_1c = (undefined1 *)&uStack_44;
        FString::FString((FString *)&uStack_44,(FString *)&stack0x00000004);
        local_4._0_1_ = 0;
        piVar2 = (int *)FUN_100a4290();
      }
      local_20 = piVar2;
      iVar5 = appRand();
      iVar6 = appRand();
      puStack_40 = (ushort *)0x0;
      uStack_44 = 0;
      (**(code **)(*piVar2 + 0xc0))(iVar5 % 200 + 200,iVar6 % 0x96 + 0x96);
      uStack_44 = 0x100b9cff;
      puStack_40 = (ushort *)piVar2;
      FUN_10060d40();
      puStack_40 = (ushort *)0x100b9d07;
      FUN_1005c1e0();
      puStack_40 = (ushort *)0x100b9d16;
      FString::FString(local_18,(ushort *)L"GamingState");
      local_4._0_1_ = 3;
      uStack_44 = 0x100b9d2c;
      puStack_40 = (ushort *)piVar2;
      FUN_10141490();
      local_4._0_1_ = 0;
      FString::~FString(local_18);
    }
    puStack_40 = (ushort *)0x100b9d49;
    puStack_40 = FString::operator*((FString *)&stack0x00000004);
    uStack_44 = 0x100b9d55;
    FUN_100b8920();
    puStack_40 = (ushort *)0x100b9d66;
    (**(code **)(*piVar2 + 0x164))();
    local_20 = (int *)&stack0xffffffb8;
    FString::FString((FString *)&stack0xffffffb8,(FString *)&stack0x00000000);
    puStack_8 = (undefined1 *)((uint)puStack_8 & 0xffffff00);
    FUN_100b1f50();
    piVar2[0x77] = 1;
    puStack_40 = (ushort *)0x100b9da0;
    (**(code **)(*piVar2 + 0x138))();
    puStack_40 = (ushort *)0x100b9da9;
    (**(code **)(*piVar2 + 0x78))();
    if (*(int *)(in_ECX + 0x1fc) != 0) {
      puStack_40 = (ushort *)0x0;
      local_20 = (int *)&stack0xffffffb4;
      FString::FString((FString *)&stack0xffffffb4,(FString *)&stack0x00000000);
      puStack_8 = (undefined1 *)((uint)puStack_8 & 0xffffff00);
      FUN_100a4b70(piVar2);
    }
  }
  else {
    puStack_40 = (ushort *)0x100b9df5;
    (**(code **)(*piVar2 + 0x164))();
    local_20 = (int *)&stack0xffffffb8;
    FString::FString((FString *)&stack0xffffffb8,(FString *)&stack0x00000000);
    puStack_8 = (undefined1 *)((uint)puStack_8 & 0xffffff00);
    FUN_100b1f50();
    piVar2[0x77] = 1;
    puStack_40 = (ushort *)0x100b9e2f;
    (**(code **)(*piVar2 + 0x138))();
    puStack_40 = (ushort *)0x100b9e38;
    (**(code **)(*piVar2 + 0x78))();
    if (*(int *)(in_ECX + 0x1fc) != 0) {
      local_20 = (int *)&stack0xffffffb8;
      FString::FString((FString *)&stack0xffffffb8,(FString *)&stack0x00000000);
      puStack_8 = (undefined1 *)((uint)puStack_8 & 0xffffff00);
      iVar5 = FUN_100a3b50();
      if (iVar5 != 0) {
        *(undefined4 *)(iVar5 + 0x1dc) = 0;
      }
    }
  }
  puStack_8 = (undefined1 *)0xffffffff;
  puStack_40 = (ushort *)0x100b9e84;
  FString::~FString((FString *)&stack0x00000000);
  ExceptionList = pvStack_10;
  return;
}


// ==== 100b9ea0 FUN_100b9ea0

void FUN_100b9ea0(void)

{
  ushort *puVar1;
  int *piVar2;
  UObject *pUVar3;
  int iVar4;
  int in_ECX;
  undefined4 unaff_retaddr;
  UPackage *pUStack_54;
  undefined4 uStack_44;
  ushort *puStack_40;
  int *local_20;
  undefined1 *local_1c;
  FString local_18 [8];
  void *pvStack_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_101f3663;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_4 = 1;
  FUN_100b5cc0();
  puVar1 = FString::operator*((FString *)&stack0x00000008);
  puStack_40 = (ushort *)0x100b9eec;
  FString::FString(local_18,puVar1);
  local_4._0_1_ = 2;
  puStack_40 = (ushort *)0x100b9f01;
  piVar2 = (int *)FUN_100d0a00();
  local_4._0_1_ = 1;
  FString::~FString(local_18);
  if (piVar2 == (int *)0x0) {
    piVar2 = (int *)FUN_100b8670();
    local_20 = piVar2;
    if (piVar2 == (int *)0x0) {
      puStack_40 = (ushort *)0x100b9f43;
      FName::FName((FName *)&local_20,0);
      pUStack_54 = UObject::GetTransientPackage();
      uStack_44 = *(undefined4 *)GError_exref;
      puStack_40 = (ushort *)piVar2;
      pUVar3 = UObject::StaticAllocateObject(&DAT_1037afe0);
      if (pUVar3 == (UObject *)0x0) {
        piVar2 = (int *)0x0;
      }
      else {
        local_1c = (undefined1 *)&uStack_44;
        FString::FString((FString *)&uStack_44,(FString *)&stack0x00000008);
        local_4._0_1_ = 1;
        piVar2 = (int *)FUN_100a4290();
      }
      local_20 = piVar2;
      iVar4 = appRand();
      appRand();
      puStack_40 = (ushort *)0x0;
      uStack_44 = 0;
      pUStack_54 = (UPackage *)(iVar4 % 200 + 200);
      (**(code **)(*piVar2 + 0xc0))();
      uStack_44 = 0x100b9ff5;
      puStack_40 = (ushort *)piVar2;
      FUN_10060d40();
      puStack_40 = (ushort *)0x100b9ffd;
      FUN_1005c1e0();
      puStack_40 = (ushort *)0x100ba00c;
      FString::FString(local_18,(ushort *)L"GamingState");
      local_4._0_1_ = 4;
      uStack_44 = 0x100ba022;
      puStack_40 = (ushort *)piVar2;
      FUN_10141490();
      local_4._0_1_ = 1;
      FString::~FString(local_18);
    }
    puStack_40 = (ushort *)0x100ba03f;
    puStack_40 = FString::operator*((FString *)&stack0x00000008);
    uStack_44 = 0x100ba04b;
    FUN_100b8920();
    puStack_40 = (ushort *)0x100ba05c;
    (**(code **)(*piVar2 + 0x164))();
    local_20 = (int *)&stack0xffffffb8;
    FString::FString((FString *)&stack0xffffffb8,(FString *)&stack0x00000004);
    puStack_8._1_3_ = (uint3)((uint)puStack_8 >> 8);
    puStack_8._0_1_ = 1;
    FUN_100b1f50();
    piVar2[0x77] = 1;
    puStack_40 = (ushort *)0x100ba092;
    (**(code **)(*piVar2 + 0x13c))();
    if (*(int *)(in_ECX + 0x1fc) != 0) {
      puStack_40 = (ushort *)0x1;
      local_20 = (int *)&stack0xffffffb4;
      pUStack_54 = (UPackage *)0x100ba0b4;
      FString::FString((FString *)&stack0xffffffb4,(FString *)&stack0x00000004);
      puStack_8._0_1_ = 1;
      pUStack_54 = (UPackage *)0x100ba0c9;
      FUN_100a4b70();
    }
  }
  else {
    puStack_40 = (ushort *)0x100ba0df;
    (**(code **)(*piVar2 + 0x164))();
    local_20 = (int *)&stack0xffffffb8;
    FString::FString((FString *)&stack0xffffffb8,(FString *)&stack0x00000004);
    puStack_8._1_3_ = (uint3)((uint)puStack_8 >> 8);
    puStack_8._0_1_ = 1;
    FUN_100b1f50();
    piVar2[0x77] = 1;
    puStack_40 = (ushort *)0x0;
    uStack_44 = 0x100ba117;
    iVar4 = (**(code **)(*piVar2 + 0xfc))();
    if ((iVar4 == 0) && (*(int *)(in_ECX + 0x1fc) != 0)) {
      local_20 = (int *)&stack0xffffffb8;
      FString::FString((FString *)&stack0xffffffb8,(FString *)&stack0x00000004);
      puStack_8._0_1_ = 1;
      iVar4 = FUN_100a3b50();
      if (iVar4 != 0) {
        *(undefined4 *)(iVar4 + 0x1dc) = 1;
      }
    }
  }
  local_20 = (int *)&stack0xffffffb8;
  FString::FString((FString *)&stack0xffffffb8,(FString *)&stack0x00000010);
  puStack_8._0_1_ = 9;
  FString::FString((FString *)&pUStack_54,(FString *)&stack0x00000004);
  puStack_8._0_1_ = 1;
  FUN_100a3840(unaff_retaddr);
  puStack_8 = (undefined1 *)((uint)puStack_8._1_3_ << 8);
  puStack_40 = (ushort *)0x100ba1a6;
  FString::~FString((FString *)&stack0x00000004);
  puStack_8 = (undefined1 *)0xffffffff;
  puStack_40 = (ushort *)0x100ba1b8;
  FString::~FString((FString *)&stack0x00000010);
  ExceptionList = pvStack_10;
  return;
}


// ==== 100ba1d0 FUN_100ba1d0

void FUN_100ba1d0(undefined4 param_1,ushort *param_2,ushort *param_3)

{
  int *piVar1;
  int iVar2;
  int in_ECX;
  FString aFStack_44 [4];
  undefined4 uStack_40;
  FString aFStack_38 [4];
  undefined4 uStack_34;
  FString local_18 [12];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101f36b6;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  uStack_34 = 0x100ba208;
  FString::FString(local_18,param_2);
  local_4 = 0;
  uStack_34 = 0x100ba220;
  piVar1 = (int *)FUN_100d0a00();
  local_4 = 0xffffffff;
  FString::~FString(local_18);
  uStack_40 = 0x100ba247;
  FString::FString(aFStack_38,param_3);
  if (piVar1 == (int *)0x0) {
    local_4 = 4;
    FString::FString(aFStack_44,param_2);
    local_4 = 0xffffffff;
    FUN_100b9ea0(param_1);
  }
  else {
    local_4 = 1;
    FString::FString(aFStack_44,param_2);
    local_4 = 0xffffffff;
    FUN_100a3840(param_1);
    uStack_34 = 0x100ba286;
    iVar2 = (**(code **)(*piVar1 + 0xfc))();
    if ((iVar2 == 0) && (*(int *)(in_ECX + 0x1fc) != 0)) {
      uStack_40 = 0x100ba2a2;
      FString::FString(aFStack_38,param_2);
      local_4 = 0xffffffff;
      iVar2 = FUN_100a3b50();
      if (iVar2 != 0) {
        *(undefined4 *)(iVar2 + 0x1dc) = 1;
      }
    }
  }
  ExceptionList = local_c;
  return;
}


// ==== 100ba310 FUN_100ba310

void FUN_100ba310(void)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  int in_ECX;
  int *local_24;
  int *piStack_20;
  int *local_1c;
  int *local_18;
  int local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_101f36e8;
  local_c = ExceptionList;
  uVar4 = DAT_103554c4 ^ (uint)&stack0xffffffcc;
  ExceptionList = &local_c;
  piVar1 = (int *)(in_ECX + 0x1d0);
  local_14 = 0;
  local_10 = 0;
  local_4 = 0;
  local_1c = piVar1;
  local_18 = piVar1;
  if (0 < *(int *)(in_ECX + 0x1d4)) {
    do {
      iVar3 = local_14;
      piVar2 = *(int **)(*piVar1 + 0x10 + local_14 * 0x14);
      local_24 = piVar2;
      if (piVar2 != (int *)0x0) {
        (**(code **)(*piVar2 + 0x174))(uVar4);
        piStack_20 = piVar2;
        FUN_10087320(&piStack_20,&local_24);
        (**(code **)(*piVar2 + 0x13c))();
      }
      local_14 = iVar3 + 1;
    } while (local_14 < *(int *)(in_ECX + 0x1d4));
  }
  local_4 = 0xffffffff;
  FUN_100b7650(0);
  *(undefined4 *)(in_ECX + 0x1e0) = 8;
  FUN_1006b150();
  if (*(int *)(in_ECX + 0x1fc) != 0) {
    (**(code **)(**(int **)(in_ECX + 0x1fc) + 0x174))();
    (**(code **)(**(int **)(in_ECX + 0x1fc) + 0x13c))();
  }
  (**(code **)(**(int **)(in_ECX + 0x1f8) + 0x174))();
  FUN_100ad390();
  ExceptionList = local_c;
  return;
}


// ==== 100ba430 FUN_100ba430

void FUN_100ba430(int *param_1)

{
  int *piVar1;
  int *piVar2;
  ushort *puVar3;
  int in_ECX;
  int *piStack_4;
  
  piVar2 = param_1;
  puVar3 = FString::operator*((FString *)(param_1 + 0x74));
  FUN_100b89a0(puVar3);
  if (*(int *)(in_ECX + 0x1fc) != 0) {
    FUN_10099cb0(piVar2);
  }
  piVar1 = *(int **)(in_ECX + 0x1fc);
  if ((piVar1 != (int *)0x0) && (piVar1[0x74] == 0)) {
    (**(code **)(*piVar1 + 0x13c))();
  }
  (**(code **)(*piVar2 + 0x174))();
  piStack_4 = piVar2;
  FUN_10087320(&piStack_4,&param_1);
  return;
}


// ==== 100ba4b0 FUN_100ba4b0

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

void FUN_100ba4b0(void)

{
  void *_Src;
  undefined1 *local_2870;
  undefined1 local_286c [8];
  int local_2864;
  ushort local_285c [5148];
  int local_24;
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101f371c;
  local_c = ExceptionList;
  local_10 = DAT_103554c4 ^ (uint)&local_2870;
  ExceptionList = &local_c;
  _Src = (void *)FUN_100556c0();
  if (_Src != (void *)0x0) {
    _memcpy(local_286c,_Src,0x285c);
    if ((local_24 == 3) && (local_2864 != 0)) {
      local_2870 = &stack0xffffd77c;
      FString::FString((FString *)&stack0xffffd77c,local_285c);
      local_4 = 0xffffffff;
      FUN_100b9bb0();
    }
  }
  ExceptionList = local_c;
  __security_check_cookie(local_10 ^ (uint)&local_2870);
  return;
}


// ==== 100ba5b0 FUN_100ba5b0

void FUN_100ba5b0(void)

{
  FUN_100ba1d0();
  return;
}


// ==== 100ba5c0 FUN_100ba5c0

void FUN_100ba5c0(void)

{
  uint uVar1;
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101f3761;
  local_c = ExceptionList;
  uVar1 = DAT_103554c4 ^ (uint)&stack0xffffffec;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX);
  local_4 = 1;
  *(undefined4 *)(in_ECX + 0xc) = 0;
  *(undefined4 *)(in_ECX + 0x10) = 8;
  FUN_1006b150(uVar1);
  ExceptionList = local_c;
  return;
}


// ==== 100ba630 FUN_100ba630

void FUN_100ba630(void)

{
  uint uVar1;
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101f3791;
  local_c = ExceptionList;
  uVar1 = DAT_103554c4 ^ (uint)&stack0xffffffec;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX);
  local_4 = 1;
  *(undefined4 *)(in_ECX + 0xc) = 0;
  *(undefined4 *)(in_ECX + 0x10) = 8;
  FUN_1006b150(uVar1);
  ExceptionList = local_c;
  return;
}


// ==== 100ba6a0 FUN_100ba6a0

void FUN_100ba6a0(void)

{
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_101f37c0;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_4 = 0;
  FUN_100abb60(&stack0x00000004);
  local_4 = local_4 & 0xffffff00;
  FUN_100b94e0();
  local_4 = 0xffffffff;
  FUN_100abc50();
  ExceptionList = local_c;
  return;
}


// ==== 100ba720 FUN_100ba720

void FUN_100ba720(void)

{
  undefined1 local_10 [4];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_101f37e8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_4 = 0xffffffff;
  FUN_100b8a90(DAT_103554c4 ^ (uint)local_10);
  ExceptionList = local_c;
  return;
}


// ==== 100ba770 FUN_100ba770

void FUN_100ba770(void)

{
  undefined1 local_10 [4];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_101f3818;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_4 = 0xffffffff;
  FUN_100b8b10(DAT_103554c4 ^ (uint)local_10);
  ExceptionList = local_c;
  return;
}


// ==== 100ba7c0 FUN_100ba7c0

void FUN_100ba7c0(void)

{
  int in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_101f3848;
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
  FUN_100b8b90();
  ExceptionList = local_c;
  return;
}


// ==== 100ba840 FUN_100ba840

void FUN_100ba840(void)

{
  int in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_101f3878;
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
  FUN_100b8bf0();
  ExceptionList = local_c;
  return;
}


// ==== 100ba8c0 FUN_100ba8c0

undefined4 FUN_100ba8c0(void)

{
  int in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101f38a8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (*(int *)(in_ECX + 0x1d4) == 0) {
    FUN_100abb60(in_ECX + 0x1d8);
    local_4 = 0xffffffff;
    FUN_100ba6a0();
  }
  else if ((*(int *)(in_ECX + 0x1d4) == 1) && (*(int *)(in_ECX + 0x280) != 0)) {
    (**(code **)(**(int **)(in_ECX + 0x280) + 0x138))();
    (**(code **)(**(int **)(in_ECX + 0x280) + 0x78))();
  }
  ExceptionList = local_c;
  return 1;
}


// ==== 100ba970 FUN_100ba970

undefined4 FUN_100ba970(void)

{
  int *piVar1;
  undefined4 uVar2;
  int in_ECX;
  int iVar3;
  void *pvStack_18;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_101f38d8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  uVar2 = FUN_1003f600(0xa55,5000,0,DAT_103554c4 ^ (uint)&stack0xffffffd4);
  *(undefined4 *)(in_ECX + 0x250) = uVar2;
  (**(code **)(**(int **)(in_ECX + 0x254) + 0x13c))();
  (**(code **)(**(int **)(in_ECX + 600) + 0x13c))();
  (**(code **)(**(int **)(in_ECX + 0x260) + 0x13c))();
  if (*(int **)(in_ECX + 0x264) != (int *)0x0) {
    (**(code **)(**(int **)(in_ECX + 0x264) + 0x13c))();
  }
  (**(code **)(**(int **)(in_ECX + 0x268) + 0x13c))();
  (**(code **)(**(int **)(in_ECX + 0x26c) + 0x13c))();
  (**(code **)(**(int **)(in_ECX + 0x270) + 0x13c))();
  (**(code **)(**(int **)(in_ECX + 0x274) + 0x13c))();
  (**(code **)(**(int **)(in_ECX + 0x278) + 0x13c))();
  (**(code **)(**(int **)(in_ECX + 0x27c) + 0x13c))();
  (**(code **)(**(int **)(in_ECX + 0x280) + 0x13c))();
  (**(code **)(**(int **)(in_ECX + 0x284) + 0x13c))();
  (**(code **)(**(int **)(in_ECX + 0x288) + 0x13c))();
  (**(code **)(**(int **)(in_ECX + 0x28c) + 0x13c))();
  (**(code **)(**(int **)(in_ECX + 0x290) + 0x13c))();
  (**(code **)(**(int **)(in_ECX + 0x294) + 0x13c))();
  (**(code **)(**(int **)(in_ECX + 0x298) + 0x13c))();
  (**(code **)(**(int **)(in_ECX + 0x29c) + 0x13c))();
  (**(code **)(**(int **)(in_ECX + 0x2a0) + 0x13c))();
  (**(code **)(**(int **)(in_ECX + 0x2a4) + 0x13c))();
  (**(code **)(**(int **)(in_ECX + 0x2a8) + 0x13c))();
  (**(code **)(**(int **)(in_ECX + 0x2ac) + 0x13c))();
  FUN_100b0fb0(0);
  iVar3 = *(int *)(in_ECX + 0x1d4) + -1;
  if (-1 < iVar3) {
    do {
      piVar1 = *(int **)(*(int *)(in_ECX + 0x1d0) + 0x10);
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 0x13c))();
        FUN_100b99b0(piVar1);
      }
      iVar3 = iVar3 + -1;
    } while (-1 < iVar3);
  }
  FUN_100b15a0();
  ExceptionList = pvStack_18;
  return 1;
}


// ==== 100baba0 FUN_100baba0

void FUN_100baba0(void)

{
  undefined1 local_10 [4];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_101f3908;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_4 = 0xffffffff;
  FUN_100ba7c0(DAT_103554c4 ^ (uint)local_10);
  ExceptionList = local_c;
  return;
}


// ==== 100babf0 FUN_100babf0

void FUN_100babf0(void)

{
  undefined1 local_10 [4];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_101f3938;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_4 = 0xffffffff;
  FUN_100ba7c0(DAT_103554c4 ^ (uint)local_10);
  ExceptionList = local_c;
  return;
}


// ==== 100bac40 FUN_100bac40

void FUN_100bac40(void)

{
  undefined1 local_10 [4];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_101f3968;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_4 = 0xffffffff;
  FUN_100ba840(DAT_103554c4 ^ (uint)local_10);
  ExceptionList = local_c;
  return;
}


// ==== 100bac90 FUN_100bac90

void FUN_100bac90(undefined4 *param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = *param_1;
  FString::operator=((FString *)(in_ECX + 1),(FString *)(param_1 + 1));
  FString::operator=((FString *)(in_ECX + 4),(FString *)(param_1 + 4));
  FString::operator=((FString *)(in_ECX + 7),(FString *)(param_1 + 7));
  FUN_100a89b0(param_1 + 10);
  in_ECX[0xe] = param_1[0xe];
  FUN_10097c10();
  FString::operator=((FString *)(in_ECX + 0xf),(FString *)(param_1 + 0xf));
  FString::operator=((FString *)(in_ECX + 0x12),(FString *)(param_1 + 0x12));
  in_ECX[0x15] = param_1[0x15];
  return;
}


// ==== 100bad10 FUN_100bad10

bool FUN_100bad10(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int *in_ECX;
  
  iVar1 = FUN_100570d0(param_1,param_2,param_3);
  if (iVar1 != 0) {
    return true;
  }
  if (param_1 == 0x203) {
    iVar1 = (**(code **)(*in_ECX + 0x1bc))(param_2,param_3);
    return iVar1 != 0;
  }
  if (param_1 == 0x501) {
    if (param_2 == 0xa08) {
      iVar1 = FUN_100ba970();
      return iVar1 != 0;
    }
    if (param_2 == 0xa52) {
      iVar1 = FUN_100b15b0();
      return iVar1 != 0;
    }
    if (param_2 == 0xa04) {
      iVar1 = FUN_100b5450();
      return iVar1 != 0;
    }
    if (param_2 == 0xa05) {
      iVar1 = FUN_100b54a0();
      return iVar1 != 0;
    }
    if (param_2 == 0xa06) {
      iVar1 = FUN_100b5520();
      return iVar1 != 0;
    }
    if (param_2 == 0xa07) {
      iVar1 = FUN_100b5670();
      return iVar1 != 0;
    }
  }
  return false;
}


// ==== 100bae20 FUN_100bae20

void FUN_100bae20(int param_1)

{
  FString *pFVar1;
  ushort *puVar2;
  int iVar3;
  ushort *puVar4;
  int in_ECX;
  int iStack_58;
  ushort *puStack_54;
  int *local_30;
  int *local_2c;
  undefined4 local_28;
  undefined4 local_24;
  int local_20;
  int local_1c;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_101f39cb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_4 = 0;
  if (param_1 == 0) goto LAB_100bb060;
  pFVar1 = (FString *)FUN_100adf40();
  puVar2 = FString::operator*(pFVar1);
  puStack_54 = (ushort *)0x100bae77;
  FString::FString((FString *)&local_30,puVar2);
  local_4._0_1_ = 1;
  puStack_54 = (ushort *)0x100bae90;
  puVar2 = (ushort *)FUN_100d0a00();
  local_4._0_1_ = 0;
  FString::~FString((FString *)&local_30);
  if (puVar2 == (ushort *)0x0) goto LAB_100bb060;
  puStack_54 = (ushort *)0x100baec2;
  FUN_1009a6e0();
  local_4._0_1_ = 2;
  puStack_54 = (ushort *)0x100baeda;
  iVar3 = FString::operator==((FString *)(puVar2 + 0x51e),(FString *)&stack0x00000028);
  if (iVar3 == 0) {
LAB_100baf85:
    if (local_1c < 1) goto LAB_100bafde;
    FUN_100abb60(&stack0x00000008);
    local_4 = CONCAT31(local_4._1_3_,2);
    FUN_10098a10();
    FUN_1009a8b0();
    if (*(int *)(in_ECX + 0x264) != 0) {
      iStack_58 = param_1;
      puStack_54 = puVar2;
      FUN_1009d9d0();
    }
  }
  else {
    if (0 < local_1c) {
      puStack_54 = (ushort *)0x100baf00;
      puStack_54 = FString::operator*((FString *)(puVar2 + 0x51e));
      iStack_58 = 0x100baf08;
      FUN_100b8720();
      local_30 = &local_20;
      local_28 = 0;
      local_24 = 0;
      local_4._0_1_ = 3;
      local_2c = local_30;
      puStack_54 = FString::operator*((FString *)(*(int *)(local_20 + 0x10) + 0x20));
      iStack_58 = 0x100baf43;
      FUN_100b74d0();
      puVar4 = FString::operator*((FString *)(*(int *)(local_20 + 0x10) + 0x20));
      FString::FString((FString *)&iStack_58,puVar4);
      local_4._0_1_ = 3;
      FUN_100b1e90();
      local_4._0_1_ = 2;
      FUN_100b73f0();
      goto LAB_100baf85;
    }
LAB_100bafde:
    pFVar1 = (FString *)FUN_100adf40();
    puVar2 = FString::operator*(pFVar1);
    puStack_54 = (ushort *)0x100baff8;
    FString::FString((FString *)&local_30,puVar2);
    local_4._0_1_ = 6;
    puStack_54 = (ushort *)0x100bb00d;
    iVar3 = FUN_100d0a00();
    local_4 = CONCAT31(local_4._1_3_,2);
    FString::~FString((FString *)&local_30);
    if (iVar3 != 0) {
      *(undefined4 *)(iVar3 + 0x1d4) = 0;
      *(undefined4 *)(*(int *)(iVar3 + 0xae0) + 0x1d0) = 0;
    }
    pFVar1 = (FString *)FUN_100adf40();
    FString::operator*(pFVar1);
    puStack_54 = (ushort *)0x100bb052;
    FUN_100b8830();
  }
  local_4 = local_4 & 0xffffff00;
  FUN_1009aec0();
LAB_100bb060:
  local_4 = 0xffffffff;
  FUN_100abc50();
  ExceptionList = local_c;
  return;
}


// ==== 100bb090 FUN_100bb090

void FUN_100bb090(void)

{
  FUN_100ba970();
  return;
}


// ==== 100bb0a0 FUN_100bb0a0

void FUN_100bb0a0(undefined4 param_1)

{
  undefined4 *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101f39f8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_10061fa0(DAT_103554c4 ^ (uint)&stack0xffffffec);
  *in_ECX = LoginWnd::vftable;
  in_ECX[0x73] = 0;
  in_ECX[0x74] = 0;
  in_ECX[0x75] = 0;
  in_ECX[0x76] = 0;
  in_ECX[0x77] = 0;
  in_ECX[0x78] = param_1;
  in_ECX[0x79] = 0;
  in_ECX[0x7a] = 0;
  ExceptionList = local_c;
  return;
}


// ==== 100bb130 FUN_100bb130

void FUN_100bb130(void)

{
  uint uVar1;
  UObject *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_101f3a28;
  local_c = ExceptionList;
  uVar1 = DAT_103554c4 ^ (uint)&stack0xffffffec;
  ExceptionList = &local_c;
  *(undefined ***)in_ECX = LoginWnd::vftable;
  local_4 = 0;
  UObject::ConditionalDestroy(in_ECX);
  local_4 = 0xffffffff;
  FUN_10002910(uVar1);
  ExceptionList = local_c;
  return;
}


// ==== 100bb190 FUN_100bb190

void FUN_100bb190(byte param_1)

{
  void *in_ECX;
  
  FUN_100bb130();
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x1ec);
  }
  return;
}


// ==== 100bb1c0 FUN_100bb1c0

void FUN_100bb1c0(undefined4 param_1)

{
  undefined4 *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101f3a58;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_10061fa0(DAT_103554c4 ^ (uint)&stack0xffffffec);
  *in_ECX = VersionWnd::vftable;
  in_ECX[0x73] = param_1;
  in_ECX[0x74] = 0;
  in_ECX[0x75] = 0;
  ExceptionList = local_c;
  return;
}


// ==== 100bb230 FUN_100bb230

void FUN_100bb230(void)

{
  uint uVar1;
  UObject *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_101f3a88;
  local_c = ExceptionList;
  uVar1 = DAT_103554c4 ^ (uint)&stack0xffffffec;
  ExceptionList = &local_c;
  *(undefined ***)in_ECX = VersionWnd::vftable;
  local_4 = 0;
  UObject::ConditionalDestroy(in_ECX);
  local_4 = 0xffffffff;
  FUN_10002910(uVar1);
  ExceptionList = local_c;
  return;
}


// ==== 100bb290 FUN_100bb290

void FUN_100bb290(byte param_1)

{
  void *in_ECX;
  
  FUN_100bb230();
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x1d8);
  }
  return;
}


// ==== 100bb2c0 FUN_100bb2c0

void FUN_100bb2c0(undefined4 param_1)

{
  undefined4 *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101f3ab8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_10061fa0(DAT_103554c4 ^ (uint)&stack0xffffffec);
  *in_ECX = LoadingWnd::vftable;
  in_ECX[0x73] = param_1;
  in_ECX[0x74] = 1;
  in_ECX[0x75] = 0;
  ExceptionList = local_c;
  return;
}


// ==== 100bb330 FUN_100bb330

void FUN_100bb330(void)

{
  uint uVar1;
  UObject *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_101f3ae8;
  local_c = ExceptionList;
  uVar1 = DAT_103554c4 ^ (uint)&stack0xffffffec;
  ExceptionList = &local_c;
  *(undefined ***)in_ECX = LoadingWnd::vftable;
  local_4 = 0;
  UObject::ConditionalDestroy(in_ECX);
  local_4 = 0xffffffff;
  FUN_10002910(uVar1);
  ExceptionList = local_c;
  return;
}


// ==== 100bb390 FUN_100bb390

void FUN_100bb390(byte param_1)

{
  void *in_ECX;
  
  FUN_100bb330();
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x1d8);
  }
  return;
}


// ==== 100bb3c0 FUN_100bb3c0

void FUN_100bb3c0(undefined4 param_1,undefined4 param_2)

{
  undefined4 *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101f3b43;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_10061fa0(DAT_103554c4 ^ (uint)&stack0xffffffe8);
  local_4 = 0;
  *in_ECX = AlarmWnd::vftable;
  FUN_10096660();
  local_4._0_1_ = 1;
  FString::FString((FString *)(in_ECX + 0x87));
  local_4 = CONCAT31(local_4._1_3_,2);
  FUN_1009ae20();
  in_ECX[0x73] = param_1;
  in_ECX[0xa0] = 0;
  in_ECX[0xa1] = 0;
  in_ECX[0xa2] = 0;
  in_ECX[0xa3] = 0;
  in_ECX[0xa4] = 0;
  in_ECX[0x74] = param_2;
  ExceptionList = local_c;
  return;
}


// ==== 100bb480 FUN_100bb480

void FUN_100bb480(void)

{
  uint uVar1;
  UObject *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_101f3b93;
  local_c = ExceptionList;
  uVar1 = DAT_103554c4 ^ (uint)&stack0xffffffec;
  ExceptionList = &local_c;
  *(undefined ***)in_ECX = AlarmWnd::vftable;
  local_4 = 3;
  UObject::ConditionalDestroy(in_ECX);
  local_4._0_1_ = 2;
  FUN_100a9760(uVar1);
  local_4._0_1_ = 1;
  FString::~FString((FString *)(in_ECX + 0x21c));
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_100abc50();
  local_4 = 0xffffffff;
  FUN_10002910();
  ExceptionList = local_c;
  return;
}


// ==== 100bb510 FUN_100bb510

void FUN_100bb510(byte param_1)

{
  void *in_ECX;
  
  FUN_100bb480();
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x294);
  }
  return;
}


// ==== 100bb540 FUN_100bb540

void FUN_100bb540(void)

{
  int iVar1;
  int *in_ECX;
  void *unaff_ESI;
  int in_stack_0000009c;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_101f3bc0;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_4 = 1;
  iVar1 = (**(code **)(*in_ECX + 0xfc))(0,DAT_103554c4 ^ (uint)&stack0xfffffff0);
  if (iVar1 != 0) {
    (**(code **)(*in_ECX + 0x13c))();
  }
  in_ECX[0x75] = 1;
  FUN_100abce0(&stack0x00000000);
  FUN_100bac90(&stack0x00000044);
  in_ECX[0xa0] = in_stack_0000009c;
  puStack_8 = (undefined1 *)((uint)puStack_8 & 0xffffff00);
  FUN_100abc50();
  puStack_8 = (undefined1 *)0xffffffff;
  FUN_100a9760();
  ExceptionList = unaff_ESI;
  return;
}


// ==== 100bb5f0 FUN_100bb5f0

void FUN_100bb5f0(undefined4 param_1,undefined4 param_2)

{
  undefined4 *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101f3bff;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_10061fa0(DAT_103554c4 ^ (uint)&stack0xffffffe4);
  local_4 = 0;
  *in_ECX = StatusWnd::vftable;
  FArray::FArray((FArray *)(in_ECX + 0x75));
  in_ECX[0x73] = param_1;
  in_ECX[0x74] = param_2;
  in_ECX[0x78] = 0xffffffff;
  in_ECX[0x79] = 0;
  in_ECX[0x7a] = 0;
  in_ECX[0x7b] = 0;
  in_ECX[0x7c] = 0;
  in_ECX[0x7d] = 0;
  in_ECX[0x7e] = 0;
  in_ECX[0x7f] = 0;
  in_ECX[0x80] = 0;
  in_ECX[0x81] = 0;
  in_ECX[0x82] = 0;
  in_ECX[0x83] = 0;
  ExceptionList = local_c;
  return;
}


// ==== 100bb6c0 FUN_100bb6c0

void FUN_100bb6c0(void)

{
  uint uVar1;
  UObject *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_101f3c36;
  local_c = ExceptionList;
  uVar1 = DAT_103554c4 ^ (uint)&stack0xffffffec;
  ExceptionList = &local_c;
  *(undefined ***)in_ECX = StatusWnd::vftable;
  local_4 = 1;
  UObject::ConditionalDestroy(in_ECX);
  local_4 = local_4 & 0xffffff00;
  FUN_10033e60(uVar1);
  local_4 = 0xffffffff;
  FUN_10002910();
  ExceptionList = local_c;
  return;
}


// ==== 100bb730 FUN_100bb730

void FUN_100bb730(byte param_1)

{
  void *in_ECX;
  
  FUN_100bb6c0();
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x210);
  }
  return;
}


// ==== 100bb760 FUN_100bb760

void FUN_100bb760(undefined4 param_1,undefined4 param_2)

{
  undefined4 *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101f3c68;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_10061fa0(DAT_103554c4 ^ (uint)&stack0xffffffec);
  *in_ECX = OptionWnd::vftable;
  in_ECX[0x73] = param_1;
  in_ECX[0x74] = param_2;
  in_ECX[0x75] = 0;
  in_ECX[0x76] = 0;
  in_ECX[0x77] = 0;
  in_ECX[0x78] = 0;
  in_ECX[0x79] = 0;
  in_ECX[0x7a] = 0;
  in_ECX[0x7b] = 0;
  in_ECX[0x7c] = 0;
  in_ECX[0x7d] = 0;
  in_ECX[0x7e] = 0;
  in_ECX[0x7f] = 0;
  in_ECX[0x80] = 0;
  in_ECX[0x81] = 0;
  ExceptionList = local_c;
  return;
}


// ==== 100bb820 FUN_100bb820

void FUN_100bb820(void)

{
  uint uVar1;
  UObject *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_101f3c98;
  local_c = ExceptionList;
  uVar1 = DAT_103554c4 ^ (uint)&stack0xffffffec;
  ExceptionList = &local_c;
  *(undefined ***)in_ECX = OptionWnd::vftable;
  local_4 = 0;
  UObject::ConditionalDestroy(in_ECX);
  local_4 = 0xffffffff;
  FUN_10002910(uVar1);
  ExceptionList = local_c;
  return;
}


// ==== 100bb880 FUN_100bb880

void FUN_100bb880(byte param_1)

{
  void *in_ECX;
  
  FUN_100bb820();
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x208);
  }
  return;
}


// ==== 100bb8b0 FUN_100bb8b0

void FUN_100bb8b0(void)

{
  undefined4 *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101f3d18;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_10061fa0(DAT_103554c4 ^ (uint)&stack0xffffffe4);
  local_4 = 0;
  *in_ECX = MsnWnd::vftable;
  FUN_100ba5c0();
  local_4._0_1_ = 2;
  FUN_100ba5c0();
  local_4._0_1_ = 4;
  FUN_100b88b0();
  local_4 = CONCAT31(local_4._1_3_,6);
  FUN_10096660();
  in_ECX[0x73] = 0;
  in_ECX[0x94] = 0;
  in_ECX[0x95] = 0;
  in_ECX[0x96] = 0;
  in_ECX[0x97] = 0;
  in_ECX[0x98] = 0;
  in_ECX[0x99] = 0;
  in_ECX[0x9a] = 0;
  in_ECX[0x9d] = 0;
  in_ECX[0x9e] = 0;
  in_ECX[0x9f] = 0;
  in_ECX[0xa0] = 0;
  in_ECX[0xa1] = 0;
  in_ECX[0xa2] = 0;
  in_ECX[0xa3] = 0;
  in_ECX[0xa4] = 0;
  in_ECX[0xa5] = 0;
  in_ECX[0x9b] = 0;
  in_ECX[0x9c] = 0;
  in_ECX[0xa6] = 0;
  in_ECX[0xa7] = 0;
  in_ECX[0xa8] = 0;
  in_ECX[0xa9] = 0;
  in_ECX[0xaa] = 0;
  in_ECX[0xab] = 0;
  in_ECX[0xac] = 0;
  ExceptionList = local_c;
  return;
}


// ==== 100bb9f0 FUN_100bb9f0

void FUN_100bb9f0(void)

{
  uint uVar1;
  UObject *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_101f3d98;
  local_c = ExceptionList;
  uVar1 = DAT_103554c4 ^ (uint)&stack0xffffffe8;
  ExceptionList = &local_c;
  *(undefined ***)in_ECX = MsnWnd::vftable;
  local_4 = 4;
  UObject::ConditionalDestroy(in_ECX);
  local_4._0_1_ = 3;
  FUN_100abc50(uVar1);
  local_4._0_1_ = 2;
  FUN_100b8a90();
  local_4._0_1_ = 1;
  FUN_100ba7c0();
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_100ba7c0();
  local_4 = 0xffffffff;
  FUN_10002910();
  ExceptionList = local_c;
  return;
}


// ==== 100bbab0 FUN_100bbab0

void FUN_100bbab0(byte param_1)

{
  void *in_ECX;
  
  FUN_100bb9f0();
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x2b4);
  }
  return;
}


// ==== 100bbae0 FUN_100bbae0

undefined4 FUN_100bbae0(void)

{
  undefined4 uVar1;
  int iVar2;
  UPackage *pUVar3;
  UObject *pUVar4;
  int *piVar5;
  int in_ECX;
  undefined4 unaff_EBP;
  undefined2 in_FPUControlWord;
  UPackage *pUStack_284;
  void *pvStack_280;
  undefined4 uStack_27c;
  undefined4 uStack_278;
  UObject **ppUStack_274;
  UObject *pUStack_270;
  UPackage *pUStack_268;
  undefined4 uStack_264;
  undefined4 uStack_260;
  undefined4 uStack_25c;
  UObject **ppUStack_258;
  UObject *pUStack_254;
  UPackage *pUStack_24c;
  undefined4 uStack_248;
  undefined4 uStack_244;
  undefined4 uStack_240;
  UObject **ppUStack_23c;
  UObject *pUStack_238;
  UPackage *pUStack_230;
  int iStack_22c;
  undefined4 uStack_228;
  undefined4 uStack_224;
  undefined4 *puStack_220;
  UObject *pUStack_21c;
  UPackage *pUStack_214;
  int iStack_210;
  undefined4 uStack_20c;
  undefined4 uStack_208;
  undefined4 uStack_204;
  UObject *pUStack_200;
  uint uVar6;
  UPackage *pUStack_1f8;
  int iStack_1f4;
  undefined4 uStack_1f0;
  undefined4 uStack_1ec;
  undefined4 uStack_1e8;
  undefined4 uStack_1e4;
  UPackage *pUStack_1dc;
  int iStack_1d8;
  undefined4 uStack_1d4;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  undefined4 uStack_1c8;
  UPackage *pUStack_1c0;
  int iStack_1bc;
  undefined4 uStack_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  UPackage *pUStack_1a4;
  int iStack_1a0;
  undefined4 uStack_19c;
  undefined4 uStack_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  UPackage *pUStack_188;
  int iStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined4 uStack_178;
  undefined4 uStack_174;
  UPackage *pUStack_16c;
  int iStack_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  UPackage *pUStack_150;
  int iStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  UPackage *pUStack_134;
  int iStack_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  UPackage *pUStack_118;
  int iStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  UPackage *pUStack_fc;
  int iStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined *puStack_e0;
  UPackage *pUStack_dc;
  int iStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  UPackage *pUStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  UPackage *pUStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined8 uStack_6c;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined8 uStack_50;
  uint uStack_48;
  undefined4 uStack_34;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_101f3f1c;
  local_c = ExceptionList;
  uStack_48 = DAT_103554c4 ^ (uint)&stack0xffffffbc;
  ExceptionList = &local_c;
  uStack_50 = CONCAT44(0x100bbb14,(undefined4)uStack_50);
  FUN_10061b40();
  uStack_50 = 0x110256910;
  uVar1 = FUN_1003f630();
  *(undefined4 *)(in_ECX + 0x2b0) = uVar1;
  uStack_50 = 0x1022f8a000000058;
  iVar2 = (**(code **)**(undefined4 **)GMalloc_exref)();
  local_c = (void *)0x0;
  if (iVar2 == 0) {
    uVar1 = 0;
  }
  else {
    uStack_58 = 0x100bbb50;
    uVar1 = FUN_100ab850();
  }
  local_c = (void *)0xffffffff;
  *(undefined4 *)(in_ECX + 0x1cc) = uVar1;
  uStack_58 = 0x100bbb6d;
  FName::FName((FName *)&stack0xffffffc4,0);
  pUVar3 = UObject::GetTransientPackage();
  uStack_5c = *(undefined4 *)GError_exref;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_64 = 0;
  uStack_6c = CONCAT44(unaff_EBP,pUVar3);
  uStack_74 = 0x100bbb95;
  pUVar4 = UObject::StaticAllocateObject();
  if (pUVar4 == (UObject *)0x0) {
    piVar5 = (int *)0x0;
  }
  else {
    uStack_58 = 0x100bbba4;
    piVar5 = (int *)FUN_100bb0a0();
  }
  uStack_58 = 0;
  uStack_5c = 0;
  *(int **)(in_ECX + 0x254) = piVar5;
  uStack_34 = (undefined4)(longlong)ROUND(*(float *)(in_ECX + 0x8c));
  uStack_60 = uStack_34;
  uStack_34 = (undefined4)(longlong)ROUND(*(float *)(in_ECX + 0x88));
  uStack_64 = uStack_34;
  uStack_6c = 0;
  (**(code **)(*piVar5 + 0xc0))();
  uStack_74 = *(undefined4 *)(in_ECX + 0x254);
  uStack_78 = 0x100bbc22;
  FUN_10060d40();
  uStack_74 = 0x100bbc2e;
  FUN_1005c1e0();
  uStack_74 = 0x100bbc39;
  FName::FName((FName *)&uStack_50,0);
  pUStack_88 = UObject::GetTransientPackage();
  uStack_78 = *(undefined4 *)GError_exref;
  uStack_74 = 0;
  uStack_7c = 0;
  uStack_80 = 0;
  uStack_84 = (undefined4)uStack_50;
  uStack_90 = 0x100bbc55;
  pUVar4 = UObject::StaticAllocateObject();
  if (pUVar4 == (UObject *)0x0) {
    piVar5 = (int *)0x0;
  }
  else {
    uStack_74 = 0x100bbc64;
    piVar5 = (int *)FUN_100bb1c0();
  }
  uStack_74 = 0;
  uStack_78 = 0;
  *(int **)(in_ECX + 600) = piVar5;
  uStack_50._0_4_ = (undefined4)(longlong)ROUND(*(float *)(in_ECX + 0x8c));
  uStack_7c = (undefined4)uStack_50;
  uStack_58 = CONCAT22(uStack_58._2_2_,in_FPUControlWord);
  uStack_50 = (longlong)ROUND(*(float *)(in_ECX + 0x88));
  uStack_80 = (undefined4)uStack_50;
  uStack_84 = 0;
  pUStack_88 = (UPackage *)0x0;
  (**(code **)(*piVar5 + 0xc0))();
  uStack_90 = *(undefined4 *)(in_ECX + 600);
  uStack_94 = 0x100bbce2;
  FUN_10060d40();
  uStack_90 = 0x100bbcee;
  FUN_1005c1e0();
  uStack_90 = 0x100bbcf9;
  FName::FName((FName *)&uStack_6c,0);
  pUStack_a4 = UObject::GetTransientPackage();
  uStack_94 = *(undefined4 *)GError_exref;
  uStack_90 = 0;
  uStack_98 = 0;
  uStack_9c = 0;
  uStack_a0 = (undefined4)uStack_6c;
  pUVar4 = UObject::StaticAllocateObject();
  if (pUVar4 == (UObject *)0x0) {
    piVar5 = (int *)0x0;
  }
  else {
    uStack_90 = 0x100bbd24;
    piVar5 = (int *)FUN_100bb2c0();
  }
  uStack_90 = 0;
  uStack_94 = 0;
  *(int **)(in_ECX + 0x25c) = piVar5;
  uStack_6c._0_4_ = (undefined4)(longlong)ROUND(*(float *)(in_ECX + 0x8c));
  uStack_98 = (undefined4)uStack_6c;
  uStack_74 = CONCAT22(uStack_74._2_2_,in_FPUControlWord);
  uStack_6c = (longlong)ROUND(*(float *)(in_ECX + 0x88));
  uStack_9c = (undefined4)uStack_6c;
  uStack_a0 = 0;
  pUStack_a4 = (UPackage *)0x0;
  (**(code **)(*piVar5 + 0xc0))();
  FUN_10060d40();
  FUN_1005c1e0();
  FName::FName((FName *)&pUStack_88,0);
  UObject::GetTransientPackage();
  uStack_c8 = 0x100bbdd5;
  pUVar4 = UObject::StaticAllocateObject();
  if (pUVar4 == (UObject *)0x0) {
    piVar5 = (int *)0x0;
  }
  else {
    piVar5 = (int *)FUN_100c6820();
  }
  *(int **)(in_ECX + 0x260) = piVar5;
  (**(code **)(*piVar5 + 0xc0))();
  uStack_c8 = *(undefined4 *)(in_ECX + 0x260);
  uStack_cc = 0x100bbe1b;
  FUN_10060d40();
  uStack_c8 = 0x100bbe27;
  FUN_1005c1e0();
  uStack_c8 = 0x100bbe32;
  FName::FName((FName *)&pUStack_a4,0);
  pUStack_dc = UObject::GetTransientPackage();
  uStack_cc = *(undefined4 *)GError_exref;
  uStack_c8 = 0;
  uStack_d0 = 0;
  uStack_d4 = 0;
  iStack_d8 = (int)pUStack_a4;
  puStack_e0 = &DAT_1037e3c8;
  pUVar4 = UObject::StaticAllocateObject();
  if (pUVar4 == (UObject *)0x0) {
    piVar5 = (int *)0x0;
  }
  else {
    uStack_cc = 0x100bbe64;
    piVar5 = (int *)FUN_100bb760();
  }
  *(int **)(in_ECX + 0x268) = piVar5;
  uVar1 = 3;
  uStack_c8 = 0;
  uStack_cc = 0;
  iStack_d8 = *(int *)GSEKScreenY_exref / 2 + -0x96;
  uStack_d0 = 0x13e;
  uStack_d4 = 0x100;
  pUStack_dc = (UPackage *)(*(int *)GSEKScreenX_exref / 2 + -0x80);
  puStack_e0 = (undefined *)0x100bbead;
  (**(code **)(*piVar5 + 0xc0))();
  puStack_e0 = (undefined *)0x4000;
  uStack_e8 = 0x100bbeca;
  puStack_e0 = (undefined *)FUN_10060d40();
  FUN_1005c1e0();
  puStack_e0 = (undefined *)0x3e9;
  (**(code **)(**(int **)(in_ECX + 0x268) + 0x164))();
  uStack_e8 = 0x100bbef7;
  FName::FName((FName *)&stack0xffffff3c,0);
  iStack_f8 = uVar1;
  pUStack_fc = UObject::GetTransientPackage();
  uStack_ec = *(undefined4 *)GError_exref;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_f4 = 0;
  uStack_104 = 0x100bbf17;
  pUVar4 = UObject::StaticAllocateObject();
  if (pUVar4 == (UObject *)0x0) {
    piVar5 = (int *)0x0;
  }
  else {
    uStack_e8 = 0x100bbf2c;
    piVar5 = (int *)FUN_100a1d20();
  }
  *(int **)(in_ECX + 0x274) = piVar5;
  uStack_e8 = 0;
  uStack_ec = 0;
  iStack_f8 = *(int *)GSEKScreenY_exref / 2 + -0x36;
  uStack_f0 = 0x6c;
  uStack_f4 = 0x100;
  pUStack_fc = (UPackage *)(*(int *)GSEKScreenX_exref / 2 + -0x80);
  (**(code **)(*piVar5 + 0xc0))();
  uStack_104 = *(undefined4 *)(in_ECX + 0x274);
  uStack_108 = 0x100bbf8c;
  FUN_10060d40();
  uStack_104 = 0x100bbf98;
  FUN_1005c1e0();
  uStack_104 = 0x100bbfa4;
  FName::FName((FName *)&puStack_e0,0);
  pUStack_118 = UObject::GetTransientPackage();
  uStack_108 = *(undefined4 *)GError_exref;
  uStack_104 = 0;
  uStack_10c = 0;
  uStack_110 = 0;
  iStack_114 = (int)puStack_e0;
  uStack_120 = 0x100bbfc4;
  pUVar4 = UObject::StaticAllocateObject();
  if (pUVar4 == (UObject *)0x0) {
    piVar5 = (int *)0x0;
  }
  else {
    uStack_108 = 0x100bbfda;
    piVar5 = (int *)FUN_100a1e30();
  }
  *(int **)(in_ECX + 0x278) = piVar5;
  uStack_104 = 0;
  uStack_108 = 0;
  iStack_114 = *(int *)GSEKScreenY_exref / 2 + -0x48;
  uStack_10c = 0x91;
  uStack_110 = 0x138;
  pUStack_118 = (UPackage *)(*(int *)GSEKScreenX_exref / 2 + -0x9c);
  (**(code **)(*piVar5 + 0xc0))();
  uStack_120 = *(undefined4 *)(in_ECX + 0x278);
  uStack_124 = 0x100bc03d;
  FUN_10060d40();
  uStack_120 = 0x100bc049;
  FUN_1005c1e0();
  uStack_120 = 0x100bc055;
  FName::FName((FName *)&pUStack_fc,0);
  pUStack_134 = UObject::GetTransientPackage();
  uStack_124 = *(undefined4 *)GError_exref;
  uStack_120 = 0;
  uStack_128 = 0;
  uStack_12c = 0;
  iStack_130 = (int)pUStack_fc;
  uStack_13c = 0x100bc075;
  pUVar4 = UObject::StaticAllocateObject();
  if (pUVar4 == (UObject *)0x0) {
    piVar5 = (int *)0x0;
  }
  else {
    uStack_120 = 0x100bc08a;
    piVar5 = (int *)FUN_100a20b0();
  }
  *(int **)(in_ECX + 0x27c) = piVar5;
  uStack_120 = 0;
  uStack_124 = 0;
  iStack_130 = *(int *)GSEKScreenY_exref / 2 + -0x36;
  uStack_128 = 0x6c;
  uStack_12c = 0x100;
  pUStack_134 = (UPackage *)(*(int *)GSEKScreenX_exref / 2 + -0x80);
  (**(code **)(*piVar5 + 0xc0))();
  uStack_13c = *(undefined4 *)(in_ECX + 0x27c);
  uStack_140 = 0x100bc0ea;
  FUN_10060d40();
  uStack_13c = 0x100bc0f6;
  FUN_1005c1e0();
  uStack_13c = 0x100bc102;
  FName::FName((FName *)&pUStack_118,0);
  pUStack_150 = UObject::GetTransientPackage();
  uStack_140 = *(undefined4 *)GError_exref;
  uStack_13c = 0;
  uStack_144 = 0;
  uStack_148 = 0;
  iStack_14c = (int)pUStack_118;
  uStack_158 = 0x100bc122;
  pUVar4 = UObject::StaticAllocateObject();
  if (pUVar4 == (UObject *)0x0) {
    piVar5 = (int *)0x0;
  }
  else {
    uStack_13c = 0x100bc137;
    piVar5 = (int *)FUN_100a1f70();
  }
  *(int **)(in_ECX + 0x280) = piVar5;
  uStack_13c = 0;
  uStack_140 = 0;
  iStack_14c = *(int *)GSEKScreenY_exref / 2 + -0x54;
  uStack_144 = 0xa8;
  uStack_148 = 0x1a4;
  pUStack_150 = (UPackage *)(*(int *)GSEKScreenX_exref / 2 + -0xd2);
  (**(code **)(*piVar5 + 0xc0))();
  uStack_158 = *(undefined4 *)(in_ECX + 0x280);
  uStack_15c = 0x100bc19a;
  FUN_10060d40();
  uStack_158 = 0x100bc1a6;
  FUN_1005c1e0();
  uStack_158 = 0x100bc1b2;
  FName::FName((FName *)&pUStack_134,0);
  pUStack_16c = UObject::GetTransientPackage();
  uStack_15c = *(undefined4 *)GError_exref;
  uStack_158 = 0;
  uStack_160 = 0;
  uStack_164 = 0;
  iStack_168 = (int)pUStack_134;
  uStack_174 = 0x100bc1d2;
  pUVar4 = UObject::StaticAllocateObject();
  if (pUVar4 == (UObject *)0x0) {
    piVar5 = (int *)0x0;
  }
  else {
    uStack_158 = 0x100bc1e1;
    piVar5 = (int *)FUN_100a1c10();
  }
  *(int **)(in_ECX + 0x284) = piVar5;
  uStack_158 = 0;
  uStack_15c = 0;
  iStack_168 = *(int *)GSEKScreenY_exref / 2 + -0x36;
  uStack_160 = 0x6c;
  uStack_164 = 0x100;
  pUStack_16c = (UPackage *)(*(int *)GSEKScreenX_exref / 2 + -0x80);
  (**(code **)(*piVar5 + 0xc0))();
  uStack_174 = *(undefined4 *)(in_ECX + 0x284);
  uStack_178 = 0x100bc241;
  FUN_10060d40();
  uStack_174 = 0x100bc24d;
  FUN_1005c1e0();
  uStack_174 = 0x100bc259;
  FName::FName((FName *)&pUStack_150,0);
  pUStack_188 = UObject::GetTransientPackage();
  uStack_178 = *(undefined4 *)GError_exref;
  uStack_174 = 0;
  uStack_17c = 0;
  uStack_180 = 0;
  iStack_184 = (int)pUStack_150;
  uStack_190 = 0x100bc279;
  pUVar4 = UObject::StaticAllocateObject();
  if (pUVar4 == (UObject *)0x0) {
    piVar5 = (int *)0x0;
  }
  else {
    uStack_174 = 0x100bc28e;
    piVar5 = (int *)FUN_100a21e0();
  }
  *(int **)(in_ECX + 0x288) = piVar5;
  uStack_174 = 0;
  uStack_178 = 0;
  iStack_184 = *(int *)GSEKScreenY_exref / 2 + -0x36;
  uStack_17c = 0x6c;
  uStack_180 = 0x100;
  pUStack_188 = (UPackage *)(*(int *)GSEKScreenX_exref / 2 + -0x80);
  (**(code **)(*piVar5 + 0xc0))();
  uStack_190 = *(undefined4 *)(in_ECX + 0x288);
  uStack_194 = 0x100bc2ee;
  FUN_10060d40();
  uStack_190 = 0x100bc2fa;
  FUN_1005c1e0();
  uStack_190 = 0x100bc306;
  FName::FName((FName *)&pUStack_16c,0);
  pUStack_1a4 = UObject::GetTransientPackage();
  uStack_194 = *(undefined4 *)GError_exref;
  uStack_190 = 0;
  uStack_198 = 0;
  uStack_19c = 0;
  iStack_1a0 = (int)pUStack_16c;
  uStack_1ac = 0x100bc326;
  pUVar4 = UObject::StaticAllocateObject();
  if (pUVar4 == (UObject *)0x0) {
    piVar5 = (int *)0x0;
  }
  else {
    uStack_190 = 0x100bc33b;
    piVar5 = (int *)FUN_100a22f0();
  }
  *(int **)(in_ECX + 0x28c) = piVar5;
  uStack_190 = 0;
  uStack_194 = 0;
  iStack_1a0 = *(int *)GSEKScreenY_exref / 2 + -0x36;
  uStack_198 = 0x6c;
  uStack_19c = 0x100;
  pUStack_1a4 = (UPackage *)(*(int *)GSEKScreenX_exref / 2 + -0x80);
  (**(code **)(*piVar5 + 0xc0))();
  uStack_1ac = *(undefined4 *)(in_ECX + 0x28c);
  uStack_1b0 = 0x100bc39b;
  FUN_10060d40();
  uStack_1ac = 0x100bc3a7;
  FUN_1005c1e0();
  uStack_1ac = 0x100bc3b3;
  FName::FName((FName *)&pUStack_188,0);
  pUStack_1c0 = UObject::GetTransientPackage();
  uStack_1b0 = *(undefined4 *)GError_exref;
  uStack_1ac = 0;
  uStack_1b4 = 0;
  uStack_1b8 = 0;
  iStack_1bc = (int)pUStack_188;
  uStack_1c8 = 0x100bc3d3;
  pUVar4 = UObject::StaticAllocateObject();
  if (pUVar4 == (UObject *)0x0) {
    piVar5 = (int *)0x0;
  }
  else {
    uStack_1b0 = 0x100bc3e9;
    piVar5 = (int *)FUN_100a2400();
  }
  *(int **)(in_ECX + 0x290) = piVar5;
  uStack_1ac = 0;
  uStack_1b0 = 0;
  iStack_1bc = *(int *)GSEKScreenY_exref / 2 + -0x36;
  uStack_1b4 = 0x6c;
  uStack_1b8 = 0x100;
  pUStack_1c0 = (UPackage *)(*(int *)GSEKScreenX_exref / 2 + -0x80);
  (**(code **)(*piVar5 + 0xc0))();
  uStack_1c8 = *(undefined4 *)(in_ECX + 0x290);
  uStack_1cc = 0x100bc449;
  FUN_10060d40();
  uStack_1c8 = 0x100bc455;
  FUN_1005c1e0();
  uStack_1c8 = 0x100bc461;
  FName::FName((FName *)&pUStack_1a4,0);
  pUStack_1dc = UObject::GetTransientPackage();
  uStack_1cc = *(undefined4 *)GError_exref;
  uStack_1c8 = 0;
  uStack_1d0 = 0;
  uStack_1d4 = 0;
  iStack_1d8 = (int)pUStack_1a4;
  uStack_1e4 = 0x100bc481;
  pUVar4 = UObject::StaticAllocateObject();
  if (pUVar4 == (UObject *)0x0) {
    piVar5 = (int *)0x0;
  }
  else {
    piVar5 = (int *)FUN_100a2520();
  }
  *(int **)(in_ECX + 0x294) = piVar5;
  uStack_1c8 = 0;
  uStack_1cc = 0;
  iStack_1d8 = *(int *)GSEKScreenY_exref / 2 + -0x36;
  uStack_1d0 = 0x6c;
  uStack_1d4 = 0x100;
  pUStack_1dc = (UPackage *)(*(int *)GSEKScreenX_exref / 2 + -0x80);
  (**(code **)(*piVar5 + 0xc0))();
  uStack_1e4 = *(undefined4 *)(in_ECX + 0x294);
  uStack_1e8 = 0x100bc4ef;
  FUN_10060d40();
  uStack_1e4 = 0x100bc4fb;
  FUN_1005c1e0();
  uStack_1e4 = 0x100bc507;
  FName::FName((FName *)&pUStack_1c0,0);
  pUStack_1f8 = UObject::GetTransientPackage();
  uStack_1e8 = *(undefined4 *)GError_exref;
  uStack_1e4 = 0;
  uStack_1ec = 0;
  uStack_1f0 = 0;
  iStack_1f4 = (int)pUStack_1c0;
  pUStack_200 = (UObject *)0x100bc527;
  pUVar4 = UObject::StaticAllocateObject();
  if (pUVar4 == (UObject *)0x0) {
    piVar5 = (int *)0x0;
  }
  else {
    uStack_1e8 = 0x100bc538;
    piVar5 = (int *)FUN_100bb3c0();
  }
  uStack_1e4 = 0;
  *(int **)(in_ECX + 0x26c) = piVar5;
  iStack_1f4 = *(int *)GSEKScreenY_exref;
  uStack_1e8 = 0;
  uStack_1ec = 0x6a;
  uStack_1f0 = 0xac;
  pUStack_1f8 = (UPackage *)(*(int *)GSEKScreenX_exref + -0xac);
  (**(code **)(*piVar5 + 0xc0))();
  pUStack_200 = *(UObject **)(in_ECX + 0x26c);
  uStack_204 = 0x100bc58d;
  FUN_10060d40();
  pUStack_200 = (UObject *)0x100bc599;
  FUN_1005c1e0();
  pUStack_200 = (UObject *)0x100bc5a5;
  FName::FName((FName *)&pUStack_1dc,0);
  pUStack_214 = UObject::GetTransientPackage();
  uStack_204 = *(undefined4 *)GError_exref;
  pUStack_200 = (UObject *)0x0;
  uStack_208 = 0;
  uStack_20c = 0;
  iStack_210 = (int)pUStack_1dc;
  pUStack_21c = (UObject *)0x100bc5c5;
  pUVar4 = UObject::StaticAllocateObject();
  if (pUVar4 == (UObject *)0x0) {
    piVar5 = (int *)0x0;
  }
  else {
    uStack_204 = 0x100bc5db;
    piVar5 = (int *)FUN_100bb5f0();
  }
  uVar6 = 3;
  pUStack_200 = (UObject *)0x0;
  uStack_204 = 0;
  uStack_208 = 0x90;
  uStack_20c = 0x96;
  *(int **)(in_ECX + 0x270) = piVar5;
  iStack_210 = 0x2d;
  pUStack_214 = (UPackage *)0x9;
  (**(code **)(*piVar5 + 0xc0))();
  pUStack_21c = *(UObject **)(in_ECX + 0x270);
  puStack_220 = (undefined4 *)0x100bc615;
  FUN_10060d40();
  pUStack_21c = (UObject *)0x100bc621;
  FUN_1005c1e0();
  pUStack_21c = (UObject *)0x100bc62d;
  FName::FName((FName *)&pUStack_1f8,0);
  pUStack_230 = UObject::GetTransientPackage();
  puStack_220 = *(undefined4 **)GError_exref;
  pUStack_21c = (UObject *)0x0;
  uStack_224 = 0;
  uStack_228 = 0;
  iStack_22c = (int)pUStack_1f8;
  pUStack_238 = (UObject *)0x100bc64d;
  pUStack_200 = UObject::StaticAllocateObject();
  if (pUStack_200 == (UObject *)0x0) {
    uVar1 = 0;
  }
  else {
    pUStack_21c = (UObject *)0x100bc667;
    FString::FString((FString *)&uStack_1e4,(ushort *)L"L2UI_CH3.Msn.msnbutton2");
    uStack_1d0 = 1;
    pUStack_21c = (UObject *)0x100bc683;
    FString::FString((FString *)&uStack_1f0,(ushort *)L"L2UI_CH3.Msn.msnbutton2");
    uStack_1d0 = 2;
    pUStack_21c = (UObject *)&uStack_1e4;
    puStack_220 = &uStack_1f0;
    uVar6 = 3;
    uStack_224 = 0x100bc6a9;
    uVar1 = FUN_10006980();
  }
  *(undefined4 *)(in_ECX + 0x298) = uVar1;
  uStack_1d0 = 1;
  if ((uVar6 & 2) != 0) {
    uVar6 = uVar6 & 0xfffffffd;
    FString::~FString((FString *)&uStack_1f0);
  }
  uStack_1d0 = 0xffffffff;
  if ((uVar6 & 1) != 0) {
    uVar6 = uVar6 & 0xfffffffe;
    FString::~FString((FString *)&uStack_1e4);
  }
  pUStack_21c = (UObject *)0x0;
  puStack_220 = (undefined4 *)0x0;
  uStack_224 = 0xb;
  *(undefined4 *)(*(int *)(in_ECX + 0x298) + 0x1cc) = 0xa52;
  uStack_228 = 0xb;
  iStack_22c = 0x1b;
  pUStack_230 = (UPackage *)0x24;
  (**(code **)(**(int **)(in_ECX + 0x298) + 0xc0))();
  pUStack_238 = *(UObject **)(in_ECX + 0x298);
  ppUStack_23c = (UObject **)0x100bc731;
  FUN_10060d40();
  pUStack_238 = (UObject *)0x100bc73d;
  FUN_1005c1e0();
  pUStack_238 = (UObject *)0x100bc749;
  FName::FName((FName *)&pUStack_214,0);
  pUStack_24c = UObject::GetTransientPackage();
  ppUStack_23c = *(UObject ***)GError_exref;
  pUStack_238 = (UObject *)0x0;
  uStack_240 = 0;
  uStack_244 = 0;
  uStack_248 = pUStack_214;
  pUStack_254 = (UObject *)0x100bc769;
  pUStack_21c = UObject::StaticAllocateObject();
  if (pUStack_21c == (UObject *)0x0) {
    uVar1 = 0;
  }
  else {
    pUStack_238 = (UObject *)0x100bc783;
    FString::FString((FString *)&uStack_20c,(ushort *)L"L2UI_CH3.Button.smallbutton1_down");
    uStack_1ec = 3;
    pUStack_238 = (UObject *)0x100bc7a1;
    FString::FString((FString *)&pUStack_200,(ushort *)L"L2UI_CH3.Button.smallbutton1");
    uStack_1ec = 4;
    pUStack_238 = (UObject *)&uStack_20c;
    uVar6 = uVar6 | 0xc;
    ppUStack_23c = &pUStack_200;
    uStack_240 = 0x100bc7c5;
    uVar1 = FUN_10006980();
  }
  *(undefined4 *)(in_ECX + 0x29c) = uVar1;
  uStack_1ec = 3;
  if ((uVar6 & 8) != 0) {
    uVar6 = uVar6 & 0xfffffff7;
    FString::~FString((FString *)&pUStack_200);
  }
  uStack_1ec = 0xffffffff;
  if ((uVar6 & 4) != 0) {
    uVar6 = uVar6 & 0xfffffffb;
    FString::~FString((FString *)&uStack_20c);
  }
  pUStack_238 = (UObject *)0x0;
  ppUStack_23c = (UObject **)0x0;
  uStack_240 = 0x17;
  *(undefined4 *)(*(int *)(in_ECX + 0x29c) + 0x1cc) = 0xa04;
  uStack_244 = 0x31;
  uStack_248 = 0x144;
  pUStack_24c = (UPackage *)0xb;
  (**(code **)(**(int **)(in_ECX + 0x29c) + 0xc0))();
  pUStack_254 = *(UObject **)(in_ECX + 0x29c);
  ppUStack_258 = (UObject **)0x100bc84c;
  FUN_10060d40();
  pUStack_254 = (UObject *)0x100bc858;
  FUN_1005c1e0();
  pUStack_254 = (UObject *)0x100bc868;
  FUN_10003cf0();
  pUStack_254 = (UObject *)0x100bc874;
  FName::FName((FName *)&pUStack_230,0);
  pUStack_268 = UObject::GetTransientPackage();
  ppUStack_258 = *(UObject ***)GError_exref;
  pUStack_254 = (UObject *)0x0;
  uStack_25c = 0;
  uStack_260 = 0;
  uStack_264 = pUStack_230;
  pUStack_270 = (UObject *)0x100bc894;
  pUStack_238 = UObject::StaticAllocateObject();
  if (pUStack_238 == (UObject *)0x0) {
    uVar1 = 0;
  }
  else {
    pUStack_254 = (UObject *)0x100bc8ae;
    FString::FString((FString *)&uStack_228,(ushort *)L"L2UI_CH3.Button.smallbutton1_down");
    uStack_208 = 5;
    pUStack_254 = (UObject *)0x100bc8cc;
    FString::FString((FString *)&pUStack_21c,(ushort *)L"L2UI_CH3.Button.smallbutton1");
    uStack_208 = 6;
    pUStack_254 = (UObject *)&uStack_228;
    uVar6 = uVar6 | 0x30;
    ppUStack_258 = &pUStack_21c;
    uStack_25c = 0x100bc8f0;
    uVar1 = FUN_10006980();
  }
  *(undefined4 *)(in_ECX + 0x2a0) = uVar1;
  uStack_208 = 5;
  if ((uVar6 & 0x20) != 0) {
    uVar6 = uVar6 & 0xffffffdf;
    FString::~FString((FString *)&pUStack_21c);
  }
  uStack_208 = 0xffffffff;
  if ((uVar6 & 0x10) != 0) {
    uVar6 = uVar6 & 0xffffffef;
    FString::~FString((FString *)&uStack_228);
  }
  pUStack_254 = (UObject *)0x0;
  ppUStack_258 = (UObject **)0x0;
  uStack_25c = 0x17;
  *(undefined4 *)(*(int *)(in_ECX + 0x2a0) + 0x1cc) = 0xa05;
  uStack_260 = 0x31;
  uStack_264 = 0x144;
  pUStack_268 = (UPackage *)0x40;
  (**(code **)(**(int **)(in_ECX + 0x2a0) + 0xc0))();
  pUStack_270 = *(UObject **)(in_ECX + 0x2a0);
  ppUStack_274 = (UObject **)0x100bc977;
  FUN_10060d40();
  pUStack_270 = (UObject *)0x100bc983;
  FUN_1005c1e0();
  pUStack_270 = (UObject *)0x100bc993;
  FUN_10003cf0();
  pUStack_270 = (UObject *)0x100bc99f;
  FName::FName((FName *)&pUStack_24c,0);
  pUStack_284 = UObject::GetTransientPackage();
  ppUStack_274 = *(UObject ***)GError_exref;
  pUStack_270 = (UObject *)0x0;
  uStack_278 = 0;
  uStack_27c = 0;
  pvStack_280 = pUStack_24c;
  pUStack_254 = UObject::StaticAllocateObject(&DAT_10357870);
  if (pUStack_254 == (UObject *)0x0) {
    uVar1 = 0;
  }
  else {
    pUStack_270 = (UObject *)0x100bc9d9;
    FString::FString((FString *)&uStack_244,(ushort *)L"L2UI_CH3.Button.smallbutton1_down");
    uStack_224 = 7;
    pUStack_270 = (UObject *)0x100bc9f7;
    FString::FString((FString *)&pUStack_238,(ushort *)L"L2UI_CH3.Button.smallbutton1");
    uStack_224 = 8;
    pUStack_270 = (UObject *)&uStack_244;
    uVar6 = uVar6 | 0xc0;
    ppUStack_274 = &pUStack_238;
    uStack_278 = 0x100bca1e;
    uVar1 = FUN_10006980();
  }
  *(undefined4 *)(in_ECX + 0x2a4) = uVar1;
  uStack_224 = 7;
  if ((char)uVar6 < '\0') {
    uVar6 = uVar6 & 0xffffff7f;
    FString::~FString((FString *)&pUStack_238);
  }
  uStack_224 = 0xffffffff;
  if ((uVar6 & 0x40) != 0) {
    uVar6 = uVar6 & 0xffffffbf;
    FString::~FString((FString *)&uStack_244);
  }
  pUStack_270 = (UObject *)0x0;
  ppUStack_274 = (UObject **)0x0;
  uStack_278 = 0x17;
  *(undefined4 *)(*(int *)(in_ECX + 0x2a4) + 0x1cc) = 0xa06;
  uStack_27c = 0x31;
  pvStack_280 = (void *)0x144;
  pUStack_284 = (UPackage *)0x75;
  (**(code **)(**(int **)(in_ECX + 0x2a4) + 0xc0))();
  uVar1 = FUN_10060d40(*(undefined4 *)(in_ECX + 0x2a4),2);
  FUN_1005c1e0(uVar1);
  FUN_10003cf0(0x3e1);
  FName::FName((FName *)&pUStack_268,0);
  pUVar3 = UObject::GetTransientPackage();
  pUStack_270 = UObject::StaticAllocateObject
                          (&DAT_10357870,pUVar3,pUStack_268,0,0,*(undefined4 *)GError_exref,0,0);
  if (pUStack_270 == (UObject *)0x0) {
    uVar1 = 0;
  }
  else {
    FString::FString((FString *)&uStack_260,(ushort *)L"L2UI_CH3.BUTTON.Btn1_normalOn");
    uStack_240 = 9;
    FString::FString((FString *)&pUStack_254,(ushort *)L"L2UI_CH3.BUTTON.Btn1_normal");
    uStack_240 = 10;
    uVar6 = uVar6 | 0x300;
    uVar1 = FUN_10006980(&pUStack_254,&uStack_260,0);
  }
  *(undefined4 *)(in_ECX + 0x2a8) = uVar1;
  uStack_240 = 9;
  if ((uVar6 & 0x200) != 0) {
    uVar6 = uVar6 & 0xfffffdff;
    FString::~FString((FString *)&pUStack_254);
  }
  uStack_240 = 0xffffffff;
  if ((uVar6 & 0x100) != 0) {
    uVar6 = uVar6 & 0xfffffeff;
    FString::~FString((FString *)&uStack_260);
  }
  *(undefined4 *)(*(int *)(in_ECX + 0x2a8) + 0x1cc) = 0xa07;
  (**(code **)(**(int **)(in_ECX + 0x2a8) + 0xc0))(0xab,0x144,0x4c,0x17,0,0,3);
  uVar1 = FUN_10060d40(*(undefined4 *)(in_ECX + 0x2a8),2);
  FUN_1005c1e0(uVar1);
  FUN_10003cf0(0x3e2);
  FName::FName((FName *)&pUStack_284,0);
  pUVar3 = UObject::GetTransientPackage();
  pUVar4 = UObject::StaticAllocateObject
                     (&DAT_10357870,pUVar3,pUStack_284,0,0,*(undefined4 *)GError_exref,0,0);
  if (pUVar4 == (UObject *)0x0) {
    uVar1 = 0;
  }
  else {
    FString::FString((FString *)&uStack_27c,(ushort *)L"L2UI_CH3.Button.SmallButton2_down");
    uStack_25c = 0xb;
    FString::FString((FString *)&pUStack_270,(ushort *)L"L2UI_CH3.Button.SmallButton2");
    uStack_25c = 0xc;
    uVar6 = uVar6 | 0xc00;
    uVar1 = FUN_10006980(&pUStack_270,&uStack_27c,0);
  }
  *(undefined4 *)(in_ECX + 0x2ac) = uVar1;
  uStack_25c = 0xb;
  if ((uVar6 & 0x800) != 0) {
    uVar6 = uVar6 & 0xfffff7ff;
    FString::~FString((FString *)&pUStack_270);
  }
  uStack_25c = 0xffffffff;
  if ((uVar6 & 0x400) != 0) {
    FString::~FString((FString *)&uStack_27c);
  }
  *(undefined4 *)(*(int *)(in_ECX + 0x2ac) + 0x1cc) = 0xa08;
  (**(code **)(**(int **)(in_ECX + 0x2ac) + 0xc0))(0xb8,0x14,0x42,0x15,0,0,3);
  uVar1 = FUN_10060d40(*(undefined4 *)(in_ECX + 0x2ac),2);
  FUN_1005c1e0(uVar1);
  FUN_10003cf0(0x3e6);
  ExceptionList = pvStack_280;
  return 1;
}


// ==== 100bcd60 FUN_100bcd60

void FUN_100bcd60(int param_1)

{
  int *piVar1;
  FString *pFVar2;
  int iVar3;
  UObject *pUVar4;
  int iVar5;
  int in_ECX;
  int in_stack_0000004c;
  undefined1 *puStack_e0;
  undefined1 auStack_dc [56];
  undefined4 uStack_a4;
  undefined4 *puStack_a0;
  undefined4 *puStack_9c;
  undefined4 uStack_94;
  undefined4 uStack_8c;
  int iStack_88;
  undefined1 auStack_84 [32];
  undefined4 uStack_64;
  undefined *puStack_60;
  UPackage *pUStack_5c;
  int *piStack_58;
  int iStack_4c;
  ushort *puStack_48;
  int *piStack_2c;
  undefined1 *puStack_28;
  FString aFStack_24 [8];
  FString aFStack_1c [16];
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_101f3fbe;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_4 = 1;
  if (param_1 != 0) {
    FUN_100b5790();
    puStack_48 = (ushort *)0x100bcdb2;
    FString::FString(aFStack_24,(FString *)&stack0x00000028);
    local_4._0_1_ = 2;
    piStack_2c = &iStack_4c;
    FString::FString((FString *)&iStack_4c,aFStack_24);
    local_4._0_1_ = 2;
    piVar1 = (int *)FUN_100b81a0();
    piStack_2c = piVar1;
    if ((piVar1 == (int *)0x0) || (1 < *(int *)(param_1 + 0x84))) {
      piVar1 = (int *)FUN_100b82c0();
      piStack_2c = piVar1;
      if (piVar1 == (int *)0x0) {
        puStack_48 = (ushort *)0x100bced3;
        FName::FName((FName *)&piStack_2c,0);
        pUStack_5c = UObject::GetTransientPackage();
        iStack_4c = *(int *)GError_exref;
        piStack_58 = piStack_2c;
        puStack_60 = &DAT_10376210;
        uStack_64 = 0x100bcef7;
        puStack_48 = (ushort *)piVar1;
        pUVar4 = UObject::StaticAllocateObject();
        if (pUVar4 == (UObject *)0x0) {
          piVar1 = (int *)0x0;
        }
        else {
          puStack_28 = auStack_84;
          iStack_88 = in_ECX + 0x20c;
          uStack_8c = 0x100bcf15;
          FUN_100abb60();
          uStack_8c = *(undefined4 *)(in_ECX + 0x1cc);
          iStack_88 = param_1;
          local_4._0_1_ = 2;
          uStack_94 = 0x100bcf35;
          piVar1 = (int *)FUN_1009c6a0();
        }
        piStack_2c = piVar1;
        iVar3 = appRand();
        iVar5 = appRand();
        puStack_48 = (ushort *)0x0;
        iStack_4c = 0;
        piStack_58 = (int *)(iVar5 % 0x96 + 0x96);
        puStack_60 = (undefined *)0x100bcf81;
        pUStack_5c = (UPackage *)(iVar3 % 200 + 200);
        (**(code **)(*piVar1 + 0xc0))();
        iStack_4c = 0x100bcf97;
        puStack_48 = (ushort *)piVar1;
        FUN_10060d40();
        puStack_48 = (ushort *)0x100bcf9f;
        FUN_1005c1e0();
        FUN_1009b670();
      }
      else {
        puStack_48 = (ushort *)0x100bcfb4;
        FUN_10099b30();
      }
      puStack_48 = FString::operator*(aFStack_24);
      iStack_4c = 0x100bcfcf;
      FUN_100b74d0();
      puStack_48 = (ushort *)0x100bcfdd;
      pFVar2 = (FString *)FUN_100abd40();
      local_4 = CONCAT31(local_4._1_3_,5);
      iVar3 = *piVar1;
      FString::operator*(pFVar2);
      puStack_48 = (ushort *)0x100bcff7;
      (**(code **)(iVar3 + 0x168))();
      puStack_8._0_1_ = 2;
      puStack_48 = (ushort *)0x100bd006;
      FString::~FString(aFStack_1c);
      piStack_58 = (int *)0x100bd01a;
      FString::FString((FString *)&stack0xffffffb0,(FString *)&puStack_28);
      puStack_8 = (undefined1 *)CONCAT31(puStack_8._1_3_,2);
      FUN_100b1e90();
      piVar1[0x27f] = 1;
      puStack_48 = (ushort *)0x100bd03c;
      FUN_1009a8b0();
      puStack_48 = (ushort *)0x100bd048;
      (**(code **)(*piVar1 + 0x13c))();
      if (*(int *)(in_ECX + 0x264) != 0) {
        iStack_4c = param_1;
        puStack_48 = (ushort *)piVar1;
        FUN_1009d9d0();
      }
      if (*(int *)GMsnMessageAlarm_exref != 0) {
        puStack_a0 = &stack0x0000004c;
        uStack_a4 = 0x100bd07f;
        FUN_100a9630();
        local_4._0_1_ = 7;
        puStack_28 = (undefined1 *)&puStack_e0;
        FUN_100abb60(&stack0x00000008);
        local_4 = CONCAT31(local_4._1_3_,2);
        FUN_100bb540();
        (**(code **)(**(int **)(in_ECX + 0x26c) + 0x138))();
      }
    }
    else {
      puStack_48 = (ushort *)0x100bce04;
      pFVar2 = (FString *)FUN_100abd40();
      local_4 = CONCAT31(local_4._1_3_,9);
      iVar3 = *piVar1;
      FString::operator*(pFVar2);
      puStack_48 = (ushort *)0x100bce1e;
      (**(code **)(iVar3 + 0x168))();
      puStack_8._0_1_ = 2;
      puStack_48 = (ushort *)0x100bce2d;
      FString::~FString(aFStack_1c);
      piStack_58 = (int *)0x100bce41;
      FString::FString((FString *)&stack0xffffffb0,(FString *)&puStack_28);
      puStack_8 = (undefined1 *)CONCAT31(puStack_8._1_3_,2);
      FUN_100b1e90();
      puStack_48 = (ushort *)param_1;
      piVar1[0x27f] = 1;
      iStack_4c = 0x100bce65;
      FUN_10099b30();
      if (*(int *)(in_ECX + 0x264) != 0) {
        iStack_4c = param_1;
        puStack_48 = (ushort *)piVar1;
        FUN_10098d30();
      }
      puStack_48 = (ushort *)0x0;
      iStack_4c = 0x100bce84;
      iVar3 = (**(code **)(*piVar1 + 0xfc))();
      if ((iVar3 == 0) && (*(int *)(in_ECX + 0x264) != 0)) {
        puStack_48 = (ushort *)0x100bcea0;
        iVar3 = FUN_10099cf0();
        if (iVar3 != 0) {
          *(undefined4 *)(iVar3 + 0x1d4) = 1;
        }
      }
    }
    puStack_48 = (ushort *)0x100bd0d7;
    pFVar2 = (FString *)FUN_100adf40();
    puStack_48 = (ushort *)0x100bd0df;
    puStack_48 = FString::operator*(pFVar2);
    iStack_4c = 0x100bd0eb;
    FUN_100b87b0();
    if (in_stack_0000004c == 2) {
      puStack_9c = &stack0x0000004c;
      puStack_a0 = (undefined4 *)0x100bd110;
      FUN_100a9630();
      local_4._0_1_ = 0xb;
      puStack_28 = auStack_dc;
      puStack_e0 = &stack0x00000008;
      FUN_100abb60();
      local_4 = CONCAT31(local_4._1_3_,2);
      puStack_e0 = (undefined1 *)0x100bd148;
      FUN_1009ccf0();
    }
    else if (in_stack_0000004c == 3) {
      puStack_9c = &stack0x0000004c;
      puStack_a0 = (undefined4 *)0x100bd168;
      FUN_100a9630();
      local_4._0_1_ = 0xd;
      puStack_28 = auStack_dc;
      puStack_e0 = &stack0x00000008;
      FUN_100abb60();
      local_4 = CONCAT31(local_4._1_3_,2);
      puStack_e0 = (undefined1 *)0x100bd1a0;
      FUN_1009b4b0();
    }
    local_4 = CONCAT31(local_4._1_3_,1);
    FString::~FString(aFStack_24);
  }
  local_4 = local_4 & 0xffffff00;
  FUN_100abc50();
  local_4 = 0xffffffff;
  FUN_100a9760();
  ExceptionList = local_c;
  return;
}


// ==== 100bd1f0 FUN_100bd1f0

void FUN_100bd1f0(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101f401f;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_10061fa0(DAT_103554c4 ^ (uint)&stack0xffffffe4);
  local_4 = 0;
  *in_ECX = L2FriendWnd::vftable;
  FUN_100ba630();
  local_4._0_1_ = 2;
  FUN_100b8a20();
  local_4 = CONCAT31(local_4._1_3_,4);
  iVar1 = (**(code **)**(undefined4 **)GMalloc_exref)(0x20,&DAT_1022f8a0);
  local_c = (void *)CONCAT31(local_c._1_3_,5);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_100ad820();
  }
  in_ECX[0x73] = uVar2;
  in_ECX[0x7e] = 0;
  in_ECX[0x7f] = 0;
  in_ECX[0x80] = 0;
  ExceptionList = in_ECX;
  return;
}


// ==== 100bd2c0 FUN_100bd2c0

void FUN_100bd2c0(void)

{
  uint uVar1;
  UObject *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_101f4074;
  local_c = ExceptionList;
  uVar1 = DAT_103554c4 ^ (uint)&stack0xffffffe8;
  ExceptionList = &local_c;
  *(undefined ***)in_ECX = L2FriendWnd::vftable;
  local_4 = 2;
  UObject::ConditionalDestroy(in_ECX);
  local_4._1_3_ = (uint3)((uint)local_4 >> 8);
  local_4._0_1_ = 1;
  FUN_100b8b10(uVar1);
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_100ba840();
  local_4 = 0xffffffff;
  FUN_10002910();
  ExceptionList = local_c;
  return;
}


// ==== 100bd350 FUN_100bd350

void FUN_100bd350(byte param_1)

{
  void *in_ECX;
  
  FUN_100bd2c0();
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x204);
  }
  return;
}


// ==== 100bd380 FUN_100bd380

void FUN_100bd380(void)

{
  undefined4 *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101f4098;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_10061fa0(DAT_103554c4 ^ (uint)&stack0xffffffec);
  *in_ECX = MessengerWnd::vftable;
  in_ECX[0x73] = 0;
  in_ECX[0x74] = 0;
  in_ECX[0x75] = 0;
  in_ECX[0x76] = 0;
  ExceptionList = local_c;
  return;
}


// ==== 100bd3f0 FUN_100bd3f0

void FUN_100bd3f0(void)

{
  uint uVar1;
  UObject *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_101f40c8;
  local_c = ExceptionList;
  uVar1 = DAT_103554c4 ^ (uint)&stack0xffffffec;
  ExceptionList = &local_c;
  *(undefined ***)in_ECX = MessengerWnd::vftable;
  local_4 = 0;
  UObject::ConditionalDestroy(in_ECX);
  local_4 = 0xffffffff;
  FUN_10002910(uVar1);
  ExceptionList = local_c;
  return;
}


// ==== 100bd450 FUN_100bd450

void FUN_100bd450(byte param_1)

{
  void *in_ECX;
  
  FUN_100bd3f0();
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x1dc);
  }
  return;
}


// ==== 100bd480 FUN_100bd480

undefined4 FUN_100bd480(void)

{
  undefined4 uVar1;
  UObject *pUVar2;
  int iVar3;
  int *piVar4;
  UPackage *pUVar5;
  ushort *puVar6;
  int in_ECX;
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
  FName local_4 [4];
  
  FUN_10061b40();
  pwStack_18 = L"L2UI_CH3.Msn.msn_back";
  uStack_1c = 0x100bd499;
  uVar1 = FUN_1003f630();
  *(undefined4 *)(in_ECX + 0x1d8) = uVar1;
  pwStack_18 = (wchar_t *)0x100bd4ab;
  FName::FName(local_4,0);
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
  *(int *)(in_ECX + 0xc0) = iVar3;
  *(undefined4 *)(in_ECX + 200) = 0xa03;
  uStack_20 = 0x14;
  *(undefined4 *)(iVar3 + 0x1cc) = 0xa03;
  (**(code **)(**(int **)(in_ECX + 0xc0) + 0xc0))();
  uStack_34 = *(undefined4 *)(in_ECX + 0xc0);
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
  *(int **)(in_ECX + 0x1cc) = piVar4;
  (**(code **)(*piVar4 + 0xc0))();
  uStack_50 = *(undefined4 *)(in_ECX + 0x1cc);
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
  *(int **)(in_ECX + 0x1d0) = piVar4;
  (**(code **)(*piVar4 + 0xc0))(0,0x30,0x100);
  uVar1 = FUN_10060d40(*(undefined4 *)(in_ECX + 0x1d0),2);
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
  *(int *)(in_ECX + 0x1d4) = iVar3;
  *(undefined4 *)(iVar3 + 0x1cc) = 0xa02;
  (**(code **)(**(int **)(in_ECX + 0x1d4) + 0xc0))(0xc,0x19,0xe0,0x29,0,0,3);
  uVar1 = FUN_10060d40(*(undefined4 *)(in_ECX + 0x1d4),2);
  FUN_1005c1e0(uVar1);
  uVar1 = *(undefined4 *)(in_ECX + 0x1cc);
  uVar12 = 0xffffffff;
  uVar11 = 1;
  pwVar10 = L"L2UI_CH3.Msn.msn_tab1";
  pwVar9 = L"L2UI_CH3.Msn.msn_tab2";
  uVar8 = 0x17;
  uVar7 = 0x72;
  puVar6 = FString::operator*((FString *)(GL2GameData_exref + 0x6d78c));
  FUN_10050440(puVar6,uVar1,uVar7,uVar8,pwVar9,pwVar10,uVar11,uVar12);
  uVar1 = *(undefined4 *)(in_ECX + 0x1d0);
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


// ==== 100bd810 FUN_100bd810

void FUN_100bd810(int param_1)

{
  int *piVar1;
  int iVar2;
  int in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_101f4120;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_4 = 1;
  if (param_1 != 0) {
    FUN_100adf40();
    piVar1 = (int *)FUN_100d0a00();
    FUN_100a9630();
    if (piVar1 == (int *)0x0) {
      local_4._0_1_ = 4;
      FUN_100abb60(&stack0x00000008);
      local_4 = CONCAT31(local_4._1_3_,1);
      FUN_100bcd60(param_1);
    }
    else {
      local_4._0_1_ = 2;
      FUN_100abb60(&stack0x00000008);
      local_4 = CONCAT31(local_4._1_3_,1);
      FUN_1009ccf0();
      iVar2 = (**(code **)(*piVar1 + 0xfc))();
      if ((iVar2 == 0) && (*(int *)(in_ECX + 0x264) != 0)) {
        iVar2 = FUN_10099cf0();
        if (iVar2 != 0) {
          *(undefined4 *)(iVar2 + 0x1d4) = 1;
        }
      }
    }
  }
  local_4 = local_4 & 0xffffff00;
  FUN_100abc50();
  local_4 = 0xffffffff;
  FUN_100a9760();
  ExceptionList = local_c;
  return;
}


// ==== 100bd950 FUN_100bd950

void FUN_100bd950(int param_1)

{
  int *piVar1;
  int iVar2;
  int in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_101f4170;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_4 = 1;
  if (param_1 != 0) {
    FUN_100adf40();
    piVar1 = (int *)FUN_100d0a00();
    FUN_100a9630();
    if (piVar1 == (int *)0x0) {
      local_4._0_1_ = 4;
      FUN_100abb60(&stack0x00000008);
      local_4 = CONCAT31(local_4._1_3_,1);
      FUN_100bcd60(param_1);
    }
    else {
      local_4._0_1_ = 2;
      FUN_100abb60(&stack0x00000008);
      local_4 = CONCAT31(local_4._1_3_,1);
      FUN_1009b4b0();
      iVar2 = (**(code **)(*piVar1 + 0xfc))();
      if ((iVar2 == 0) && (*(int *)(in_ECX + 0x264) != 0)) {
        iVar2 = FUN_10099cf0();
        if (iVar2 != 0) {
          *(undefined4 *)(iVar2 + 0x1d4) = 1;
        }
      }
    }
  }
  local_4 = local_4 & 0xffffff00;
  FUN_100abc50();
  local_4 = 0xffffffff;
  FUN_100a9760();
  ExceptionList = local_c;
  return;
}


// ==== 100bda90 FUN_100bda90

void FUN_100bda90(void)

{
  return;
}


// ==== 100bdaa0 FUN_100bdaa0

void FUN_100bdaa0(void)

{
  char cVar1;
  int iVar2;
  FString *pFVar3;
  ushort *puVar4;
  char *pcVar5;
  int in_ECX;
  FString local_444 [8];
  FString local_43c [4];
  ushort local_438 [4];
  FString local_430 [4];
  undefined1 local_42c [8];
  char local_424 [1040];
  uint local_14;
  void *local_10;
  void *local_c;
  undefined1 *local_8;
  undefined4 local_4;
  
  local_8 = &LAB_101f41bc;
  local_c = ExceptionList;
  local_10 = (void *)(DAT_103554c4 ^ (uint)local_444);
  ExceptionList = &local_c;
  local_4 = 0;
  iVar2 = FUN_100a6260(DAT_103554c4 ^ (uint)&stack0xfffffbb4);
  if (0 < iVar2) {
    FString::FString(local_444);
    local_4._0_1_ = 1;
    pFVar3 = (FString *)FUN_100a6020(local_42c);
    local_4 = CONCAT31(local_4._1_3_,2);
    pFVar3 = (FString *)FString::operator+(pFVar3,local_438);
    local_8._0_1_ = 3;
    FString::operator=((FString *)&stack0xfffffbb8,pFVar3);
    local_8._0_1_ = 2;
    FString::~FString(local_43c);
    local_8 = (undefined1 *)CONCAT31(local_8._1_3_,1);
    FString::~FString(local_430);
    appMemset(local_424,0,0x410);
    pcVar5 = local_424;
    puVar4 = FString::operator*((FString *)&stack0xfffffbb8);
    FUN_100c7540(puVar4,pcVar5);
    pcVar5 = local_424;
    do {
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    iVar2 = send(*(SOCKET *)(in_ECX + 4),local_424,(int)pcVar5 - (int)(local_424 + 1),0);
    pcVar5 = local_424;
    do {
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    if (iVar2 != (int)pcVar5 - (int)(local_424 + 1)) {
      WSAGetLastError();
    }
    local_8 = (undefined1 *)((uint)local_8 & 0xffffff00);
    FString::~FString((FString *)&stack0xfffffbb8);
  }
  *(int *)(in_ECX + 0x4c) = *(int *)(in_ECX + 0x4c) + 1;
  local_8 = (undefined1 *)0xffffffff;
  FUN_100a9100();
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffbb8);
  return;
}


// ==== 100bdc30 FUN_100bdc30

void FUN_100bdc30(void)

{
  char cVar1;
  int iVar2;
  ushort *puVar3;
  char *pcVar4;
  int in_ECX;
  FString local_42c [12];
  char local_420 [1040];
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_101f4204;
  local_c = ExceptionList;
  local_10 = DAT_103554c4 ^ (uint)local_42c;
  ExceptionList = &local_c;
  local_4 = 0;
  iVar2 = FUN_100a6260(DAT_103554c4 ^ (uint)&stack0xfffffbcc);
  if (0 < iVar2) {
    FUN_100a6020(local_42c);
    local_4 = CONCAT31(local_4._1_3_,1);
    appMemset(local_420,0,0x410);
    pcVar4 = local_420;
    puVar3 = FString::operator*(local_42c);
    FUN_100c74c0(puVar3,pcVar4);
    pcVar4 = local_420;
    do {
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    iVar2 = send(*(SOCKET *)(in_ECX + 4),local_420,(int)pcVar4 - (int)(local_420 + 1),0);
    pcVar4 = local_420;
    do {
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    if (iVar2 != (int)pcVar4 - (int)(local_420 + 1)) {
      WSAGetLastError();
    }
    local_4 = local_4 & 0xffffff00;
    FString::~FString(local_42c);
  }
  *(int *)(in_ECX + 0x4c) = *(int *)(in_ECX + 0x4c) + 1;
  local_4 = 0xffffffff;
  FUN_100a9100();
  ExceptionList = local_c;
  __security_check_cookie(local_10 ^ (uint)local_42c);
  return;
}


// ==== 100bdd70 FUN_100bdd70

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

void FUN_100bdd70(void)

{
  char cVar1;
  uint uVar2;
  ushort *puVar3;
  char *pcVar4;
  FString *pFVar5;
  int iVar6;
  int in_ECX;
  FString local_1074 [12];
  FString local_1068 [12];
  FString local_105c [12];
  char local_1050 [4160];
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_101f4274;
  local_c = ExceptionList;
  local_10 = DAT_103554c4 ^ (uint)local_1074;
  uVar2 = DAT_103554c4 ^ (uint)&stack0xffffef84;
  ExceptionList = &local_c;
  local_4 = 1;
  FUN_100a6630(local_1068);
  local_4._0_1_ = 2;
  FString::FString(local_1074);
  local_4._0_1_ = 3;
  appMemset(local_1050,0,0x1040);
  pcVar4 = local_1050;
  puVar3 = FString::operator*(local_1068);
  FUN_100c7540(puVar3,pcVar4,uVar2);
  pcVar4 = local_1050;
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  FUN_100a85e0((int)pcVar4 - (int)(local_1050 + 1));
  pFVar5 = (FString *)FUN_100a6020(local_105c);
  local_4._0_1_ = 4;
  FString::operator=(local_1074,pFVar5);
  local_4 = CONCAT31(local_4._1_3_,3);
  FString::~FString(local_105c);
  FString::operator+=(local_1074,(ushort *)&DAT_1023d1c8);
  FString::operator+=(local_1074,local_1068);
  appMemset(local_1050,0,0x1040);
  pcVar4 = local_1050;
  puVar3 = FString::operator*(local_1074);
  FUN_100c7540(puVar3,pcVar4);
  pcVar4 = local_1050;
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  iVar6 = send(*(SOCKET *)(in_ECX + 4),local_1050,(int)pcVar4 - (int)(local_1050 + 1),0);
  pcVar4 = local_1050;
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  if (iVar6 != (int)pcVar4 - (int)(local_1050 + 1)) {
    WSAGetLastError();
  }
  *(int *)(in_ECX + 0x4c) = *(int *)(in_ECX + 0x4c) + 1;
  local_4._0_1_ = 2;
  FString::~FString(local_1074);
  local_4._0_1_ = 1;
  FString::~FString(local_1068);
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_100a9100();
  local_4 = 0xffffffff;
  FUN_100a9760();
  ExceptionList = local_c;
  __security_check_cookie(local_10 ^ (uint)local_1074);
  return;
}


// ==== 100bdf80 FUN_100bdf80

void FUN_100bdf80(undefined4 param_1,uint param_2)

{
  int iVar1;
  undefined4 *in_ECX;
  
  if (param_2 >> 0x10 == 0) {
    iVar1 = WSAAsyncSelect(in_ECX[1],DAT_103663b8,0x50c,0x25);
    if (iVar1 != 0) {
      WSAGetLastError();
      return;
    }
    (**(code **)*in_ECX)();
  }
  return;
}


// ==== 100bdfc0 FUN_100bdfc0

void FUN_100bdfc0(void)

{
  FUN_100aac50();
  return;
}


// ==== 100bdfd0 FUN_100bdfd0

void FUN_100bdfd0(void)

{
  FString *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_101f42c5;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_4 = 0;
  FString::~FString(in_ECX + 0xc);
  local_4 = 0xffffffff;
  FString::~FString(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 100be030 FUN_100be030

void FUN_100be030(void)

{
  FString aFStack_24 [12];
  uint uStack_18;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101f42e9;
  local_c = ExceptionList;
  uStack_18 = DAT_103554c4 ^ (uint)&stack0xffffffec;
  ExceptionList = &local_c;
  FString::FString(aFStack_24,(ushort *)&DAT_1022f9f8);
  local_4 = 0xffffffff;
  FUN_100ab7b0();
  ExceptionList = local_c;
  return;
}


// ==== 100be0a0 FUN_100be0a0

void FUN_100be0a0(void)

{
  FString *this;
  int iVar1;
  undefined1 auStack_278 [4];
  undefined4 uStack_274;
  undefined4 uStack_26c;
  undefined1 *local_250;
  FString local_24c [12];
  FString local_240 [12];
  undefined1 local_234 [28];
  ushort local_218 [260];
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_101f4352;
  local_c = ExceptionList;
  local_10 = DAT_103554c4 ^ (uint)&local_250;
  ExceptionList = &local_c;
  local_4 = 0;
  FUN_100a61c0();
  uStack_26c = 0x100be108;
  appMemset(local_218,0,0x208);
  this = (FString *)FUN_100a6140();
  local_4._0_1_ = 1;
  FString::operator*(this);
  FUN_100c75a0();
  local_4._0_1_ = 0;
  FString::~FString(local_240);
  FString::FString(local_24c,local_218);
  local_4._0_1_ = 2;
  FUN_100aa580();
  iVar1 = FUN_100abe40();
  local_250 = (undefined1 *)&uStack_26c;
  uStack_274 = 0x100be18b;
  FString::FString((FString *)&uStack_26c,local_24c);
  local_4._0_1_ = 2;
  FUN_100ad930();
  local_4._0_1_ = 4;
  if (iVar1 != 0) {
    local_250 = auStack_278;
    FUN_100ad9c0(local_234);
    local_4._0_1_ = 4;
    FUN_100ac920();
  }
  local_4._0_1_ = 2;
  FUN_100ada50();
  local_4 = (uint)local_4._1_3_ << 8;
  FString::~FString(local_24c);
  local_4 = 0xffffffff;
  FUN_100a8d50();
  ExceptionList = local_c;
  __security_check_cookie(local_10 ^ (uint)&local_250);
  return;
}


// ==== 100be240 FUN_100be240

FString * FUN_100be240(FString *param_1)

{
  int in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101f439a;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FString::FString(param_1,(FString *)(in_ECX + 0x74));
  ExceptionList = local_c;
  return param_1;
}


// ==== 100be2a0 FUN_100be2a0

void FUN_100be2a0(void)

{
  int iVar1;
  undefined4 uVar2;
  int in_ECX;
  FString local_18 [12];
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_101f43d1;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_4 = 0;
  iVar1 = FUN_100a5ad0(DAT_103554c4 ^ (uint)&stack0xffffffe4);
  if (1 < iVar1) {
    FUN_100a6140(local_18,0);
    local_4._0_1_ = 1;
    uVar2 = FUN_100a61c0(1);
    *(undefined4 *)(in_ECX + 0x80) = uVar2;
    local_4 = (uint)local_4._1_3_ << 8;
    FString::~FString(local_18);
  }
  local_4 = 0xffffffff;
  FUN_100a8d50();
  ExceptionList = local_c;
  return;
}


// ==== 100be340 FUN_100be340

FString * FUN_100be340(FString *param_1)

{
  int in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101f440a;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FString::FString(param_1,(FString *)(in_ECX + 0x30));
  ExceptionList = local_c;
  return param_1;
}


// ==== 100be3a0 FUN_100be3a0

FString * FUN_100be3a0(FString *param_1)

{
  int in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101f444a;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FString::FString(param_1,(FString *)(in_ECX + 0x3c));
  ExceptionList = local_c;
  return param_1;
}


// ==== 100be400 FUN_100be400

void FUN_100be400(void)

{
  ushort *puVar1;
  int in_ECX;
  undefined4 uVar2;
  
  uVar2 = *(undefined4 *)(in_ECX + 0x48);
  puVar1 = FString::operator*((FString *)(in_ECX + 0x3c));
  FUN_100c3dd0(puVar1,uVar2);
  return;
}


// ==== 100be420 FUN_100be420

void FUN_100be420(void)

{
  FString aFStack_24 [8];
  undefined4 uStack_1c;
  uint uStack_18;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_101f4481;
  local_c = ExceptionList;
  uStack_18 = DAT_103554c4 ^ (uint)&stack0xffffffec;
  ExceptionList = &local_c;
  local_4 = 0;
  FString::FString(aFStack_24,(FString *)&stack0x00000004);
  local_4 = local_4 & 0xffffff00;
  FUN_100aa150();
  local_4 = 0xffffffff;
  uStack_1c = 0x100be483;
  FUN_100a8d50();
  ExceptionList = local_c;
  return;
}


// ==== 100be4a0 FUN_100be4a0

void FUN_100be4a0(void)

{
  undefined1 auStack_50 [4];
  undefined4 uStack_4c;
  undefined1 *puStack_48;
  undefined4 uStack_44;
  uint uStack_40;
  undefined1 local_30 [20];
  undefined1 *local_1c;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101f44b8;
  local_10 = ExceptionList;
  uStack_40 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_40;
  ExceptionList = &local_10;
  local_8._0_1_ = 1;
  local_8._1_3_ = 0;
  uStack_44 = 1;
  puStack_48 = local_30;
  uStack_4c = 0x100be4e6;
  FUN_100a6400();
  local_8._0_1_ = 2;
  local_1c = auStack_50;
  FUN_100a5fc0(local_30);
  local_8._0_1_ = 2;
  FUN_100aa720();
  local_8 = CONCAT31(local_8._1_3_,1);
  uStack_44 = 0x100be517;
  FUN_100a5f70();
  local_8 = 0xffffffff;
  uStack_44 = 0x100be526;
  FUN_100a8d50();
  ExceptionList = local_10;
  return;
}


// ==== 100be53a Catch@100be53a

void Catch_100be53a(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 100be54e Catch@100be54e

void Catch_100be54e(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"DispatchProcess::ProcessXFR");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100be570 FUN_100be570

void FUN_100be570(void)

{
  char cVar1;
  int iVar2;
  FString *pFVar3;
  undefined4 uVar4;
  char *pcVar5;
  int in_ECX;
  int in_stack_00000010;
  undefined1 auStack_380 [28];
  undefined4 uStack_364;
  undefined1 *puStack_360;
  undefined4 uStack_35c;
  undefined1 *local_32c;
  FString local_328 [8];
  FString local_320 [4];
  FString local_31c [12];
  undefined1 *local_310;
  u_long local_30c;
  u_long local_308;
  u_long local_304;
  FString local_2fc [8];
  undefined1 local_2f4 [12];
  undefined4 local_2e8;
  ushort local_280 [2];
  undefined1 local_27c [64];
  ushort local_23c [18];
  char local_218 [260];
  ushort local_114 [128];
  uint uStack_14;
  void *local_10;
  void *local_c;
  undefined1 *local_8;
  int local_4;
  
  local_8 = &LAB_101f46e5;
  local_c = ExceptionList;
  local_10 = (void *)(DAT_103554c4 ^ (uint)&local_32c);
  ExceptionList = &local_c;
  local_4 = 0;
  iVar2 = FString::operator==((FString *)&stack0x00000004,(ushort *)&DAT_10257f9c);
  if (iVar2 == 0) {
    iVar2 = FString::operator==((FString *)&stack0x00000004,(ushort *)&DAT_10257f7c);
    if (iVar2 == 0) {
      iVar2 = FString::operator==((FString *)&stack0x00000004,(ushort *)&DAT_10257f74);
      if ((iVar2 == 0) || (in_stack_00000010 != 0)) {
        iVar2 = FString::operator==((FString *)&stack0x00000004,(ushort *)&DAT_10257f6c);
        if (iVar2 == 0) goto LAB_100bef75;
        FUN_100c7920();
        FUN_100a6140();
        local_4 = CONCAT31(local_4._1_3_,0x25);
        iVar2 = FString::InStr(local_328,(ushort *)&DAT_1023d1c8,0);
        if (iVar2 != -1) {
          pFVar3 = (FString *)FString::Left(local_328,(int)local_31c);
          local_8._0_1_ = 0x26;
          FString::operator=((FString *)&local_32c,pFVar3);
          local_8 = (undefined1 *)CONCAT31(local_8._1_3_,0x25);
          FString::~FString(local_320);
        }
        FString::operator+=((FString *)&local_32c,local_23c);
        appMemset(local_218,0,0x104);
        FString::operator*((FString *)&local_32c);
        FUN_100c74c0();
        pcVar5 = local_218;
        do {
          cVar1 = *pcVar5;
          pcVar5 = pcVar5 + 1;
        } while (cVar1 != '\0');
        FUN_100a5240();
        FUN_100a59a0();
        uStack_35c = 0x100bee4c;
        FUN_100a5a40();
        htonl(local_304);
        htonl(local_308);
        htonl(local_30c);
        htonl((u_long)local_310);
        uStack_35c = 0x100bee8e;
        appSprintf(local_114,(ushort *)L"32\r\n%08x%08x%08x%08x");
        FString::FString((FString *)&stack0xfffffcb4,(ushort *)&DAT_10257f38);
        local_8._1_3_ = (uint3)((uint)local_8 >> 8);
        local_8._0_1_ = 0x25;
        FUN_100adfc0();
        local_8._0_1_ = 0x28;
        local_2e8 = *(undefined4 *)(in_ECX + 0x4c);
        FString::FString((FString *)&stack0xfffffcb4,local_280);
        local_8._0_1_ = 0x28;
        FUN_100a8540();
        FString::FString((FString *)&stack0xfffffcb4,local_114);
        local_8._0_1_ = 0x28;
        FUN_100a8540();
        puStack_360 = local_2f4;
        uStack_364 = 0x100bef3c;
        FUN_100adbf0();
        local_8._0_1_ = 0x28;
        puStack_360 = (undefined1 *)0x100bef52;
        FUN_100bdc30();
        local_8._0_1_ = 0x25;
        FUN_100a9100();
        local_8 = (undefined1 *)((uint)local_8._1_3_ << 8);
        pFVar3 = (FString *)&local_32c;
      }
      else {
        FString::FString(local_2fc);
        local_4._0_1_ = 0x1f;
        FString::FString((FString *)&local_30c);
        local_4._0_1_ = 0x20;
        pFVar3 = (FString *)FUN_100a6140();
        local_4._0_1_ = 0x21;
        FString::operator=(local_2fc,pFVar3);
        local_4._0_1_ = 0x20;
        FString::~FString(local_31c);
        iVar2 = FString::operator==(local_2fc,(ushort *)&DAT_10255eb8);
        if (iVar2 != 0) {
          uVar4 = FUN_100a61c0();
          *(undefined4 *)(in_ECX + 0x80) = uVar4;
          pFVar3 = (FString *)FUN_100a6140();
          local_4._0_1_ = 0x22;
          FString::operator=((FString *)&local_30c,pFVar3);
          local_4._0_1_ = 0x20;
          FString::~FString(local_31c);
          FUN_100aa580();
          iVar2 = FUN_100abe30();
          if (iVar2 != 0) {
            local_32c = &stack0xfffffcb8;
            FString::FString((FString *)&stack0xfffffcb8,(FString *)&local_30c);
            local_4._0_1_ = 0x20;
            FUN_100ad090();
          }
          local_32c = &stack0xfffffcb8;
          FString::FString((FString *)&stack0xfffffcb8,(FString *)&local_30c);
          local_4._0_1_ = 0x20;
          FUN_100aa0d0();
        }
        local_4._0_1_ = 0x1f;
        FString::~FString((FString *)&local_30c);
        local_4 = (uint)local_4._1_3_ << 8;
        pFVar3 = local_2fc;
      }
    }
    else {
      FString::FString(local_2fc);
      local_4._0_1_ = 0x11;
      FString::FString(local_328);
      local_4._0_1_ = 0x12;
      FString::FString((FString *)&local_30c);
      local_4._0_1_ = 0x13;
      pFVar3 = (FString *)FUN_100a6140();
      local_4._0_1_ = 0x14;
      FString::operator=(local_2fc,pFVar3);
      local_4._0_1_ = 0x13;
      FString::~FString(local_31c);
      uVar4 = FUN_100a61c0();
      *(undefined4 *)(in_ECX + 0x80) = uVar4;
      pFVar3 = (FString *)FUN_100a6140();
      local_4._0_1_ = 0x15;
      FString::operator=(local_328,pFVar3);
      local_4._0_1_ = 0x13;
      FString::~FString(local_31c);
      pFVar3 = (FString *)FUN_100a6140();
      local_4._0_1_ = 0x16;
      FString::operator=((FString *)&local_30c,pFVar3);
      local_4._0_1_ = 0x13;
      FString::~FString(local_31c);
      iVar2 = FString::operator==(local_2fc,(ushort *)&DAT_10255eb8);
      if ((iVar2 != 0) && (in_stack_00000010 == 0)) {
        local_32c = &stack0xfffffcb8;
        FString::FString((FString *)&stack0xfffffcb8,(FString *)&local_30c);
        local_4._0_1_ = 0x17;
        local_310 = &stack0xfffffcac;
        uStack_35c = 0x100bea22;
        FString::FString((FString *)&stack0xfffffcac,local_328);
        local_4._0_1_ = 0x13;
        FUN_100aba70();
        local_4._0_1_ = 0x19;
        local_32c = &stack0xfffffcb8;
        FString::FString((FString *)&stack0xfffffcb8,local_328);
        local_4._0_1_ = 0x1a;
        FUN_100aa580();
        FUN_100abe10();
        local_4._0_1_ = 0x19;
        iVar2 = FUN_100ac3d0();
        if (iVar2 == 0) {
          local_32c = &stack0xfffffcb8;
          FString::FString((FString *)&stack0xfffffcb8,local_328);
          local_4._0_1_ = 0x1b;
          FUN_100aa580();
          FUN_100abe20();
          local_4._0_1_ = 0x19;
          iVar2 = FUN_100ac3d0();
          if (iVar2 == 0) {
            local_32c = &stack0xfffffcb8;
            FString::FString((FString *)&stack0xfffffcb8,local_328);
            local_4._0_1_ = 0x1c;
            FUN_100aa580();
            FUN_1004f5b0();
            local_4._0_1_ = 0x19;
            iVar2 = FUN_100ac3d0();
            if (iVar2 == 0) {
              local_32c = &stack0xfffffcb8;
              FString::FString((FString *)&stack0xfffffcb8,local_328);
              local_4._0_1_ = 0x1d;
              FUN_100aa580();
              FUN_100abe30();
              local_4._0_1_ = 0x19;
              iVar2 = FUN_100ac3d0();
              if (iVar2 == 0) {
                local_32c = auStack_380;
                FUN_100abb60(local_27c);
                local_4._0_1_ = 0x19;
                FUN_100aa050();
              }
            }
          }
        }
        local_4._0_1_ = 0x13;
        FUN_100abc50();
      }
      local_4._0_1_ = 0x12;
      FString::~FString((FString *)&local_30c);
      local_4._0_1_ = 0x11;
      FString::~FString(local_328);
      local_4 = (uint)local_4._1_3_ << 8;
      pFVar3 = local_2fc;
    }
  }
  else {
    FString::FString((FString *)&local_30c);
    local_4._0_1_ = 1;
    FString::FString(local_328);
    local_4._0_1_ = 2;
    FString::FString(local_2fc);
    local_4._0_1_ = 3;
    pFVar3 = (FString *)FUN_100a6140();
    local_4._0_1_ = 4;
    FString::operator=((FString *)&local_30c,pFVar3);
    local_4._0_1_ = 3;
    FString::~FString(local_31c);
    pFVar3 = (FString *)FUN_100a6140();
    local_4._0_1_ = 5;
    FString::operator=(local_328,pFVar3);
    local_4._0_1_ = 3;
    FString::~FString(local_31c);
    pFVar3 = (FString *)FUN_100a6140();
    local_4._0_1_ = 6;
    FString::operator=(local_2fc,pFVar3);
    local_4._0_1_ = 3;
    FString::~FString(local_31c);
    local_310 = &stack0xfffffcb8;
    FString::FString((FString *)&stack0xfffffcb8,local_328);
    local_4._0_1_ = 7;
    FUN_100aa580();
    FUN_100abe10();
    local_4._0_1_ = 3;
    iVar2 = FUN_100ac3d0();
    if (iVar2 == 0) {
      local_310 = &stack0xfffffcb8;
      FString::FString((FString *)&stack0xfffffcb8,local_2fc);
      local_4._0_1_ = 10;
      local_32c = &stack0xfffffcac;
      uStack_35c = 0x100be76c;
      FString::FString((FString *)&stack0xfffffcac,local_328);
      local_4._0_1_ = 3;
      FUN_100aba70();
      local_4._0_1_ = 0xc;
      local_32c = &stack0xfffffcb8;
      FString::FString((FString *)&stack0xfffffcb8,(FString *)&local_30c);
      local_4._0_1_ = 0xc;
      FUN_100ac140();
      local_32c = auStack_380;
      FUN_100abb60(local_27c);
      local_4._0_1_ = 0xe;
      FUN_100aa580();
      FUN_100abe10();
      local_4._0_1_ = 0xc;
      FUN_100aced0();
      local_32c = &stack0xfffffcb8;
      FString::FString((FString *)&stack0xfffffcb8,local_328);
      local_4._0_1_ = 0xf;
      FUN_100aa580();
      FUN_100abe10();
      local_4 = CONCAT31(local_4._1_3_,0xc);
      iVar2 = FUN_100ac3d0();
      if (iVar2 == 0) {
        appFailAssert("f",".\\MSN\\Process.cpp",0x17e);
      }
      local_4 = CONCAT31(local_4._1_3_,3);
      FUN_100abc50();
    }
    else {
      local_310 = &stack0xfffffcb8;
      FString::FString((FString *)&stack0xfffffcb8,(FString *)&local_30c);
      local_4._0_1_ = 3;
      FUN_100ac140();
      local_310 = &stack0xfffffcb8;
      FString::FString((FString *)&stack0xfffffcb8,local_2fc);
      local_4 = CONCAT31(local_4._1_3_,3);
      FUN_100ac0e0();
    }
    local_32c = auStack_380;
    FUN_100abb60(iVar2);
    local_4._1_3_ = (uint3)((uint)local_4 >> 8);
    local_4._0_1_ = 3;
    FUN_100a9fc0();
    local_4._0_1_ = 2;
    FString::~FString(local_2fc);
    local_4._0_1_ = 1;
    FString::~FString(local_328);
    local_4 = (uint)local_4._1_3_ << 8;
    pFVar3 = (FString *)&local_30c;
  }
  FString::~FString(pFVar3);
LAB_100bef75:
  local_8 = (undefined1 *)0xffffffff;
  FUN_100a8d50();
  ExceptionList = local_10;
  __security_check_cookie(uStack_14 ^ (uint)&stack0xfffffcd0);
  return;
}


// ==== 100befc0 FUN_100befc0

void FUN_100befc0(int *param_1)

{
  int iVar1;
  ushort *puVar2;
  FString *pFVar3;
  undefined4 uStack_40;
  FString local_24 [8];
  FString local_1c [4];
  undefined1 local_18 [8];
  void *pvStack_10;
  void *local_c;
  undefined1 *local_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  local_8 = &LAB_101f4768;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (*param_1 == 4) {
    FString::FString((FString *)&uStack_40,(ushort *)L"Inbox-Unread");
    local_4 = 0xffffffff;
    iVar1 = FUN_100a8740();
    if (iVar1 == 0) {
      FString::FString((FString *)&uStack_40,(ushort *)L"From-Addr");
      local_4 = 0xffffffff;
      iVar1 = FUN_100a8740();
      if (iVar1 == 0) {
        ExceptionList = pvStack_10;
        return;
      }
      FString::FString((FString *)&uStack_40,(ushort *)L"From-Addr");
      local_4 = 0xffffffff;
      FUN_100a86a0();
      local_4 = 5;
      uStack_40 = 0x100bf0e6;
      iVar1 = FString::InStr(local_24,(ushort *)&DAT_1023d1c8,0);
      if (iVar1 != -1) {
        uStack_40 = 0x100bf0fa;
        pFVar3 = (FString *)FString::Left(local_24,(int)local_18);
        local_8._0_1_ = 6;
        uStack_40 = 0x100bf10a;
        FString::operator=((FString *)&stack0xffffffd8,pFVar3);
        local_8 = (undefined1 *)CONCAT31(local_8._1_3_,5);
        FString::~FString(local_1c);
      }
      FString::FString((FString *)&stack0xffffffbc,(FString *)&stack0xffffffd8);
      local_8 = (undefined1 *)CONCAT31((int3)((uint)local_8 >> 8),5);
      FUN_100a9e20();
    }
    else {
      FString::FString((FString *)&uStack_40,(ushort *)L"Inbox-Unread");
      local_4 = 0xffffffff;
      FUN_100a86a0();
      local_4 = 2;
      puVar2 = FString::operator*(local_24);
      appAtoi(puVar2);
      FUN_10143b80();
    }
    local_8 = (undefined1 *)0xffffffff;
    FString::~FString((FString *)&stack0xffffffd8);
  }
  ExceptionList = pvStack_10;
  return;
}


// ==== 100bf170 FUN_100bf170

void FUN_100bf170(void)

{
  uint uVar1;
  int iVar2;
  FString *pFVar3;
  int in_ECX;
  FString local_18 [12];
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_101f47a1;
  local_c = ExceptionList;
  uVar1 = DAT_103554c4 ^ (uint)&stack0xffffffe4;
  ExceptionList = &local_c;
  local_4 = 0;
  iVar2 = FString::operator==((FString *)&stack0x00000004,(ushort *)&DAT_10257fd4);
  if (iVar2 != 0) {
    pFVar3 = (FString *)FUN_100a6140(local_18,0);
    local_4._0_1_ = 1;
    FString::operator=((FString *)(in_ECX + 0x74),pFVar3);
    local_4 = (uint)local_4._1_3_ << 8;
    FString::~FString(local_18);
    FUN_100aa8e0(uVar1);
  }
  local_4 = 0xffffffff;
  FUN_100a8d50();
  ExceptionList = local_c;
  return;
}


// ==== 100bf210 FUN_100bf210

void FUN_100bf210(void)

{
  int iVar1;
  undefined4 in_stack_00000058;
  FString aFStack_2c [8];
  undefined4 uStack_24;
  uint uStack_20;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_101f47eb;
  local_c = ExceptionList;
  uStack_20 = DAT_103554c4 ^ (uint)&stack0xffffffe4;
  ExceptionList = &local_c;
  local_4 = 1;
  FString::FString(aFStack_2c,(FString *)&stack0x00000008);
  local_4._1_3_ = (uint3)((uint)local_4 >> 8);
  local_4._0_1_ = 1;
  iVar1 = FUN_100ac3d0();
  if (iVar1 != 0) {
    FString::FString(aFStack_2c,(FString *)(iVar1 + 0x14));
    local_4._0_1_ = 1;
    FUN_100ac140();
  }
  FUN_100abb60(&stack0x00000014);
  local_4._0_1_ = 1;
  FUN_100aced0();
  if (iVar1 != 0) {
    *(undefined4 *)(iVar1 + 4) = in_stack_00000058;
  }
  local_4 = (uint)local_4._1_3_ << 8;
  uStack_24 = 0x100bf2cd;
  FString::~FString((FString *)&stack0x00000008);
  local_4 = 0xffffffff;
  uStack_24 = 0x100bf2de;
  FUN_100abc50();
  ExceptionList = local_c;
  return;
}


// ==== 100bf300 FUN_100bf300

void FUN_100bf300(void)

{
  int iVar1;
  undefined4 uVar2;
  int in_ECX;
  FString aFStack_94 [4];
  undefined4 uStack_90;
  undefined4 uStack_88;
  FString *pFStack_84;
  FString local_68 [12];
  FString local_5c [80];
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_101f4855;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_4 = 0;
  pFStack_84 = (FString *)0x100bf341;
  iVar1 = FString::operator==((FString *)&stack0x00000004,(ushort *)&DAT_10257fdc);
  if (iVar1 == 0) {
    uStack_90 = 0x100bf449;
    FString::FString((FString *)&uStack_88,(FString *)&stack0x00000004);
    local_4 = local_4 & 0xffffff00;
    FUN_100aa530();
  }
  else {
    pFStack_84 = (FString *)0x100bf357;
    uVar2 = FUN_100a61c0();
    pFStack_84 = local_5c;
    uStack_88 = 0x100bf36c;
    FUN_100a6140();
    local_4._0_1_ = 1;
    pFStack_84 = local_68;
    uStack_88 = 0x100bf384;
    FUN_100a6140();
    local_4._0_1_ = 2;
    *(undefined4 *)(in_ECX + 0x80) = uVar2;
    uStack_90 = 0x100bf3a3;
    FString::FString((FString *)&uStack_88,local_68);
    local_4._0_1_ = 3;
    FString::FString(aFStack_94,local_5c);
    local_4._0_1_ = 2;
    uVar2 = FUN_100aba70();
    local_4._0_1_ = 5;
    FUN_100abb60(uVar2);
    local_4._0_1_ = 5;
    FUN_100aa4a0();
    local_4._0_1_ = 2;
    FUN_100abc50();
    local_4._0_1_ = 1;
    FString::~FString(local_68);
    local_4 = (uint)local_4._1_3_ << 8;
    FString::~FString(local_5c);
  }
  local_4 = 0xffffffff;
  FUN_100a8d50();
  ExceptionList = local_c;
  return;
}


// ==== 100bf490 FUN_100bf490

void FUN_100bf490(void)

{
  FString aFStack_44 [8];
  undefined4 uStack_3c;
  uint uStack_38;
  undefined1 local_28 [28];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101f4891;
  local_c = ExceptionList;
  uStack_38 = DAT_103554c4 ^ (uint)&stack0xffffffcc;
  ExceptionList = &local_c;
  FString::FString(aFStack_44,(ushort *)&DAT_10255970);
  local_4 = 0xffffffff;
  FUN_100adfc0();
  local_4 = 1;
  FUN_100a8a80(local_28);
  local_4 = CONCAT31((int3)((uint)local_4 >> 8),1);
  FUN_100bdaa0();
  local_4 = 0xffffffff;
  uStack_3c = 0x100bf524;
  FUN_100a9100();
  ExceptionList = local_c;
  return;
}


// ==== 100bf540 FUN_100bf540

void FUN_100bf540(void)

{
  int iVar1;
  FString *pFVar2;
  undefined4 uVar3;
  int in_ECX;
  FString aFStack_b0 [4];
  undefined4 uStack_ac;
  undefined4 uStack_a4;
  FString *pFStack_a0;
  FString local_80 [12];
  FString local_74 [12];
  FString local_68 [12];
  FString local_5c [12];
  undefined1 local_50 [68];
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_101f4930;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_4 = 0;
  pFStack_a0 = (FString *)0x100bf588;
  iVar1 = FString::operator==((FString *)&stack0x00000004,(ushort *)&DAT_10257f7c);
  if (iVar1 != 0) {
    FString::FString(local_80);
    local_4._0_1_ = 1;
    FString::FString(local_68);
    local_4._0_1_ = 2;
    FString::FString(local_74);
    local_4._0_1_ = 3;
    pFStack_a0 = local_5c;
    uStack_a4 = 0x100bf5dd;
    pFVar2 = (FString *)FUN_100a6140();
    local_4._0_1_ = 4;
    pFStack_a0 = (FString *)0x100bf5f0;
    FString::operator=(local_80,pFVar2);
    local_4._0_1_ = 3;
    FString::~FString(local_5c);
    pFStack_a0 = (FString *)0x100bf60f;
    uVar3 = FUN_100a61c0();
    pFStack_a0 = local_5c;
    *(undefined4 *)(in_ECX + 0x80) = uVar3;
    uStack_a4 = 0x100bf628;
    pFVar2 = (FString *)FUN_100a6140();
    local_4._0_1_ = 5;
    pFStack_a0 = (FString *)0x100bf63b;
    FString::operator=(local_68,pFVar2);
    local_4._0_1_ = 3;
    FString::~FString(local_5c);
    pFStack_a0 = local_5c;
    uStack_a4 = 0x100bf65e;
    pFVar2 = (FString *)FUN_100a6140();
    local_4._0_1_ = 6;
    pFStack_a0 = (FString *)0x100bf671;
    FString::operator=(local_74,pFVar2);
    local_4._0_1_ = 3;
    FString::~FString(local_5c);
    uStack_ac = 0x100bf696;
    FString::FString((FString *)&uStack_a4,local_80);
    local_4._0_1_ = 7;
    FUN_100aa580();
    local_4._0_1_ = 3;
    iVar1 = FUN_100abed0();
    uStack_ac = 0x100bf6ca;
    FString::FString((FString *)&uStack_a4,local_74);
    local_4._0_1_ = 8;
    FString::FString(aFStack_b0,local_68);
    local_4._0_1_ = 3;
    FUN_100aba70();
    local_4._0_1_ = 10;
    if (iVar1 != 0) {
      FUN_100abb60(local_50);
      local_4._0_1_ = 10;
      FUN_100aced0();
      pFStack_a0 = (FString *)0x100bf746;
      iVar1 = FString::operator==(local_80,(ushort *)&DAT_10255ed0);
      if (iVar1 != 0) {
        FUN_100abb60(local_50);
        local_4._0_1_ = 10;
        FUN_100aa1d0();
      }
    }
    local_4._0_1_ = 3;
    FUN_100abc50();
    local_4._0_1_ = 2;
    FString::~FString(local_74);
    local_4._0_1_ = 1;
    FString::~FString(local_68);
    local_4 = (uint)local_4._1_3_ << 8;
    FString::~FString(local_80);
  }
  local_4 = 0xffffffff;
  FUN_100a8d50();
  ExceptionList = local_c;
  return;
}


// ==== 100bf7f0 FUN_100bf7f0

void FUN_100bf7f0(void)

{
  int iVar1;
  undefined4 uVar2;
  int in_ECX;
  undefined4 uStack_44;
  FString *pFStack_40;
  FString local_24 [12];
  FString local_18 [12];
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_101f4995;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_4 = 0;
  pFStack_40 = (FString *)0x100bf82f;
  iVar1 = FString::operator==((FString *)&stack0x00000004,(ushort *)&DAT_10257f74);
  if (iVar1 != 0) {
    pFStack_40 = local_18;
    uStack_44 = 0x100bf847;
    FUN_100a6140();
    local_4._0_1_ = 1;
    pFStack_40 = (FString *)0x100bf857;
    uVar2 = FUN_100a61c0();
    pFStack_40 = local_24;
    *(undefined4 *)(in_ECX + 0x80) = uVar2;
    uStack_44 = 0x100bf871;
    FUN_100a6140();
    local_4._0_1_ = 2;
    FString::FString((FString *)&uStack_44,local_18);
    local_4._0_1_ = 3;
    FUN_100aa580();
    local_4._0_1_ = 2;
    iVar1 = FUN_100abed0();
    if (iVar1 != 0) {
      FString::FString((FString *)&uStack_44,local_24);
      local_4._0_1_ = 2;
      FUN_100ad090();
    }
    pFStack_40 = (FString *)0x100bf8da;
    iVar1 = FString::operator==(local_18,(ushort *)&DAT_10255ed0);
    if (iVar1 != 0) {
      FString::FString((FString *)&uStack_44,local_24);
      local_4._0_1_ = 2;
      FUN_100aa290();
    }
    local_4._0_1_ = 1;
    FString::~FString(local_24);
    local_4 = (uint)local_4._1_3_ << 8;
    FString::~FString(local_18);
  }
  local_4 = 0xffffffff;
  FUN_100a8d50();
  ExceptionList = local_c;
  return;
}


// ==== 100bf950 FUN_100bf950

void FUN_100bf950(void)

{
  FString *pFVar1;
  ushort *puVar2;
  int iVar3;
  undefined4 uVar4;
  int in_ECX;
  undefined4 uStack_98;
  FString *pFStack_94;
  FString local_78 [12];
  FString local_6c [12];
  FString local_60 [4];
  undefined1 local_5c [8];
  undefined1 local_54 [68];
  void *local_10;
  void *local_c;
  undefined1 *local_8;
  undefined4 local_4;
  
  local_8 = &LAB_101f4a10;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_4 = 0;
  pFStack_94 = (FString *)0x100bf997;
  pFVar1 = (FString *)FString::Left((FString *)&stack0x00000004,(int)local_5c);
  local_8._0_1_ = 1;
  puVar2 = FString::operator*(pFVar1);
  pFStack_94 = (FString *)0x100bf9ae;
  iVar3 = appAtoi(puVar2);
  local_8._0_1_ = 0;
  FString::~FString(local_60);
  FString::FString(local_6c);
  local_8._0_1_ = 2;
  FString::FString(local_78);
  local_8._0_1_ = 3;
  pFStack_94 = (FString *)0x100bf9f0;
  iVar3 = _isdigit(iVar3);
  if (iVar3 == 0) {
    pFStack_94 = local_60;
    uStack_98 = 0x100bfa0d;
    pFVar1 = (FString *)FUN_100a6140();
    local_8._0_1_ = 4;
    pFStack_94 = (FString *)0x100bfa20;
    FString::operator=(local_6c,pFVar1);
    local_8._0_1_ = 3;
    FString::~FString(local_60);
    pFStack_94 = (FString *)0x100bfa3f;
    uVar4 = FUN_100a61c0();
    pFStack_94 = local_60;
    *(undefined4 *)(in_ECX + 0x80) = uVar4;
    uStack_98 = 0x100bfa58;
    pFVar1 = (FString *)FUN_100a6140();
    local_8._0_1_ = 5;
    pFStack_94 = (FString *)0x100bfa6b;
    FString::operator=(local_78,pFVar1);
    local_8._0_1_ = 3;
    FString::~FString(local_60);
    FString::FString((FString *)&uStack_98,local_6c);
    local_8._0_1_ = 6;
    FUN_100aa580();
    local_8._0_1_ = 3;
    iVar3 = FUN_100abed0();
    if (iVar3 != 0) {
      pFStack_94 = (FString *)0x100bfaca;
      iVar3 = FString::operator==((FString *)&stack0x00000000,(ushort *)&DAT_10257f74);
      if (iVar3 == 0) {
        pFStack_94 = (FString *)0x100bfb0f;
        iVar3 = FString::operator==((FString *)&stack0x00000000,(ushort *)&DAT_10257f7c);
        if (iVar3 != 0) {
          FString::FString((FString *)&uStack_98,local_78);
          local_8._0_1_ = 3;
          FUN_100ab9a0();
          local_8._0_1_ = 9;
          FUN_100abb60(local_54);
          local_8._0_1_ = 9;
          FUN_100aced0();
          local_8._0_1_ = 3;
          FUN_100abc50();
        }
      }
      else {
        FString::FString((FString *)&uStack_98,local_78);
        local_8._0_1_ = 3;
        FUN_100ad090();
      }
    }
  }
  local_8._0_1_ = 2;
  FString::~FString(local_78);
  local_8 = (undefined1 *)((uint)local_8._1_3_ << 8);
  FString::~FString(local_6c);
  local_8 = (undefined1 *)0xffffffff;
  FUN_100a8d50();
  ExceptionList = local_10;
  return;
}


// ==== 100bfbe0 FUN_100bfbe0

void FUN_100bfbe0(void)

{
  int iVar1;
  FString *pFVar2;
  undefined4 uVar3;
  int in_ECX;
  undefined4 uStack_60;
  FString *pFStack_5c;
  FString local_3c [12];
  FString local_30 [12];
  FString local_24 [12];
  FString local_18 [12];
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_101f4a91;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_4 = 0;
  iVar1 = FUN_100a5ad0();
  if (4 < iVar1) {
    FString::FString(local_30);
    local_4._0_1_ = 1;
    FString::FString(local_3c);
    local_4._0_1_ = 2;
    FString::FString(local_24);
    local_4._0_1_ = 3;
    pFStack_5c = local_18;
    uStack_60 = 0x100bfc64;
    pFVar2 = (FString *)FUN_100a6140();
    local_4._0_1_ = 4;
    pFStack_5c = (FString *)0x100bfc74;
    FString::operator=(local_30,pFVar2);
    local_4._0_1_ = 3;
    FString::~FString(local_18);
    pFStack_5c = (FString *)0x100bfc8d;
    uVar3 = FUN_100a61c0();
    pFStack_5c = local_18;
    *(undefined4 *)(in_ECX + 0x80) = uVar3;
    uStack_60 = 0x100bfca3;
    pFVar2 = (FString *)FUN_100a6140();
    local_4._0_1_ = 5;
    pFStack_5c = (FString *)0x100bfcb3;
    FString::operator=(local_3c,pFVar2);
    local_4._0_1_ = 3;
    FString::~FString(local_18);
    pFStack_5c = local_18;
    uStack_60 = 0x100bfcd0;
    pFVar2 = (FString *)FUN_100a6140();
    local_4._0_1_ = 6;
    pFStack_5c = (FString *)0x100bfce0;
    FString::operator=(local_24,pFVar2);
    local_4._0_1_ = 3;
    FString::~FString(local_18);
    pFStack_5c = (FString *)0x100bfcf9;
    uVar3 = FUN_100a61c0();
    FString::FString((FString *)&uStack_60,local_30);
    local_4._0_1_ = 7;
    FUN_100aa580();
    local_4._0_1_ = 3;
    iVar1 = FUN_100abed0();
    if (iVar1 != 0) {
      FString::FString((FString *)&uStack_60,local_3c);
      local_4._0_1_ = 3;
      iVar1 = FUN_100ac3d0();
      if (iVar1 != 0) {
        *(undefined4 *)(iVar1 + 4) = uVar3;
        FString::FString((FString *)&uStack_60,local_3c);
        local_4._0_1_ = 3;
        FUN_100aa290();
        FUN_100abb60(iVar1);
        local_4._0_1_ = 3;
        FUN_100aa1d0();
      }
    }
    local_4._0_1_ = 2;
    FString::~FString(local_24);
    local_4._0_1_ = 1;
    FString::~FString(local_3c);
    local_4 = (uint)local_4._1_3_ << 8;
    FString::~FString(local_30);
  }
  local_4 = 0xffffffff;
  FUN_100a8d50();
  ExceptionList = local_c;
  return;
}


// ==== 100bfe00 FUN_100bfe00

void FUN_100bfe00(void)

{
  int iVar1;
  FString *this;
  int in_ECX;
  undefined1 auStack_274 [4];
  undefined4 uStack_270;
  undefined4 uStack_268;
  undefined1 *local_244;
  FString local_240 [12];
  undefined1 local_234 [28];
  ushort local_218 [260];
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_101f4af1;
  local_c = ExceptionList;
  local_10 = DAT_103554c4 ^ (uint)&local_244;
  ExceptionList = &local_c;
  local_4 = 0;
  iVar1 = FString::operator==((FString *)&stack0x00000004,(ushort *)&DAT_10257fe4);
  if (iVar1 != 0) {
    FUN_100a61c0();
    uStack_268 = 0x100bfe7e;
    appMemset(local_218,0,0x208);
    this = (FString *)FUN_100a6140();
    local_4._0_1_ = 1;
    FString::operator*(this);
    FUN_100c75a0();
    local_4._0_1_ = 0;
    FString::~FString(local_240);
    FUN_100a61c0();
    FUN_100aa580();
    iVar1 = FUN_100abe40();
    local_244 = (undefined1 *)&uStack_268;
    uStack_270 = 0x100bfef9;
    FString::FString((FString *)&uStack_268,local_218);
    local_4 = (uint)local_4._1_3_ << 8;
    FUN_100ad930();
    local_4._0_1_ = 3;
    if (iVar1 != 0) {
      local_244 = auStack_274;
      FUN_100ad9c0(local_234);
      local_4._0_1_ = 3;
      FUN_100ac920();
    }
    if (*(int *)(in_ECX + 0x38) != 0) {
      local_244 = auStack_274;
      FUN_100ad9c0(local_234);
      local_4._0_1_ = 3;
      FUN_100aa350();
    }
    local_4 = (uint)local_4._1_3_ << 8;
    FUN_100ada50();
  }
  local_4 = 0xffffffff;
  FUN_100a8d50();
  ExceptionList = local_c;
  __security_check_cookie(local_10 ^ (uint)&local_244);
  return;
}


// ==== 100bffd0 FUN_100bffd0

void FUN_100bffd0(void)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_101f4b28;
  local_c = ExceptionList;
  uVar1 = DAT_103554c4 ^ (uint)&stack0xffffffe8;
  ExceptionList = &local_c;
  local_4 = 0;
  iVar2 = FString::operator==((FString *)&stack0x00000004,(ushort *)&DAT_10257fec);
  if (iVar2 != 0) {
    uVar3 = FUN_100a61c0(0);
    uVar4 = FUN_100a61c0(1);
    *(undefined4 *)(in_ECX + 0x80) = uVar3;
    FUN_100aa580(uVar1);
    iVar2 = FUN_100abe40();
    if (iVar2 != 0) {
      FUN_100aca30(uVar4);
    }
    FUN_100aa120();
  }
  local_4 = 0xffffffff;
  FUN_100a8d50();
  ExceptionList = local_c;
  return;
}


// ==== 100c0080 FUN_100c0080

void FUN_100c0080(void)

{
  int iVar1;
  FString *this;
  undefined1 *local_228;
  FString local_224 [12];
  ushort local_218 [260];
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_101f4b70;
  local_c = ExceptionList;
  local_10 = DAT_103554c4 ^ (uint)&local_228;
  ExceptionList = &local_c;
  local_4 = 0;
  iVar1 = FString::operator==((FString *)&stack0x00000004,(ushort *)&DAT_10257ff4);
  if (iVar1 != 0) {
    FUN_100a61c0();
    FUN_100a61c0();
    appMemset(local_218,0,0x208);
    this = (FString *)FUN_100a6140();
    local_4._0_1_ = 1;
    FString::operator*(this);
    FUN_100c75a0();
    local_4._0_1_ = 0;
    FString::~FString(local_224);
    FUN_100aa580();
    iVar1 = FUN_100abe40();
    if (iVar1 != 0) {
      iVar1 = FUN_100ac450();
      if (iVar1 != 0) {
        local_228 = &stack0xfffffdc0;
        FString::FString((FString *)&stack0xfffffdc0,local_218);
        local_4._0_1_ = 0;
        FUN_100adab0();
      }
    }
    FUN_100aa120();
  }
  local_4 = 0xffffffff;
  FUN_100a8d50();
  ExceptionList = local_c;
  __security_check_cookie(local_10 ^ (uint)&local_228);
  return;
}


// ==== 100c01f0 FUN_100c01f0

void FUN_100c01f0(void)

{
  FString *pFVar1;
  int iVar2;
  undefined4 uStack_80;
  FString *pFStack_7c;
  FString local_5c [12];
  FString local_50 [12];
  FString local_44 [12];
  FString local_38 [12];
  FString local_2c [16];
  FString local_1c [12];
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_101f4c2c;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_4 = 0;
  FString::FString(local_50);
  local_4._0_1_ = 1;
  FString::FString(local_5c);
  local_4._0_1_ = 2;
  FString::FString(local_38);
  local_4._0_1_ = 3;
  FString::FString(local_44);
  local_4._0_1_ = 4;
  FUN_100a5e80();
  local_4._0_1_ = 5;
  pFStack_7c = local_2c;
  uStack_80 = 0x100c0281;
  pFVar1 = (FString *)FUN_100a6140();
  local_4._0_1_ = 6;
  pFStack_7c = (FString *)0x100c0291;
  FString::operator=(local_50,pFVar1);
  local_4._0_1_ = 5;
  FString::~FString(local_2c);
  pFStack_7c = local_2c;
  uStack_80 = 0x100c02b2;
  pFVar1 = (FString *)FUN_100a6400();
  local_4._0_1_ = 7;
  pFStack_7c = (FString *)0x100c02c4;
  FString::operator=(local_1c,pFVar1);
  local_10 = *(undefined4 *)(pFVar1 + 0xc);
  local_4._0_1_ = 5;
  FString::~FString(local_2c);
  pFStack_7c = local_2c;
  uStack_80 = 0x100c02ec;
  pFVar1 = (FString *)FUN_100a6140();
  local_4._0_1_ = 9;
  pFStack_7c = (FString *)0x100c02fc;
  FString::operator=(local_5c,pFVar1);
  local_4._0_1_ = 5;
  FString::~FString(local_2c);
  pFStack_7c = local_2c;
  uStack_80 = 0x100c031d;
  pFVar1 = (FString *)FUN_100a6140();
  local_4._0_1_ = 10;
  pFStack_7c = (FString *)0x100c032d;
  FString::operator=(local_38,pFVar1);
  local_4._0_1_ = 5;
  FString::~FString(local_2c);
  pFStack_7c = local_2c;
  uStack_80 = 0x100c034d;
  pFVar1 = (FString *)FUN_100a6140();
  local_4._0_1_ = 0xb;
  pFStack_7c = (FString *)0x100c035d;
  FString::operator=(local_44,pFVar1);
  local_4._0_1_ = 5;
  FString::~FString(local_2c);
  FString::FString((FString *)&uStack_80,local_50);
  local_4._0_1_ = 0xc;
  FUN_100a5fc0(local_1c);
  local_4._0_1_ = 5;
  iVar2 = FUN_100aa810();
  FString::FString((FString *)&uStack_80,local_5c);
  local_4._0_1_ = 5;
  FUN_100adf50();
  *(undefined4 *)(iVar2 + 0x94) = 1;
  pFStack_7c = (FString *)0x100c03e7;
  FUN_100aae10();
  local_4._0_1_ = 4;
  FString::~FString(local_1c);
  local_4._0_1_ = 3;
  FString::~FString(local_44);
  local_4._0_1_ = 2;
  FString::~FString(local_38);
  local_4._0_1_ = 1;
  FString::~FString(local_5c);
  local_4 = (uint)local_4._1_3_ << 8;
  FString::~FString(local_50);
  local_4 = 0xffffffff;
  FUN_100a8d50();
  ExceptionList = local_c;
  return;
}


// ==== 100c0460 FUN_100c0460

FString * FUN_100c0460(FString *param_1,uint *param_2)

{
  int iVar1;
  int iVar2;
  int *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101f4c6a;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  iVar2 = *(int *)(in_ECX[3] + (in_ECX[4] - 1U & *param_2) * 4);
  if (iVar2 != -1) {
    iVar1 = *in_ECX;
    do {
      if (*(uint *)(iVar1 + 4 + iVar2 * 0x14) == *param_2) {
        FString::FString(param_1,(FString *)(iVar1 + iVar2 * 0x14 + 8));
        ExceptionList = local_c;
        return param_1;
      }
      iVar2 = *(int *)(iVar1 + iVar2 * 0x14);
    } while (iVar2 != -1);
  }
  FString::FString(param_1,0,1);
  ExceptionList = local_c;
  return param_1;
}


// ==== 100c0510 FUN_100c0510

void FUN_100c0510(void)

{
  FString *pFVar1;
  int iVar2;
  ushort *puVar3;
  undefined4 uVar4;
  int iVar5;
  FString aFStack_e4 [4];
  undefined4 uStack_e0;
  undefined1 *puStack_dc;
  undefined1 *puStack_d8;
  undefined4 uStack_b0;
  FString aFStack_a8 [4];
  undefined4 uStack_a4;
  undefined4 uStack_9c;
  FString *pFStack_98;
  FString local_74 [12];
  FString local_68 [12];
  FString local_5c [12];
  undefined1 local_50 [4];
  int local_4c;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_101f4d45;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_4 = 0;
  FString::FString(local_74);
  local_4._0_1_ = 1;
  FString::FString(local_68);
  local_4._0_1_ = 2;
  pFStack_98 = local_5c;
  uStack_9c = 0x100c057e;
  pFVar1 = (FString *)FUN_100a6140();
  local_4._0_1_ = 3;
  pFStack_98 = (FString *)0x100c0591;
  FString::operator=(local_74,pFVar1);
  local_4._0_1_ = 2;
  FString::~FString(local_5c);
  pFStack_98 = local_5c;
  uStack_9c = 0x100c05b6;
  pFVar1 = (FString *)FUN_100a6140();
  local_4._0_1_ = 4;
  pFStack_98 = (FString *)0x100c05c9;
  FString::operator=(local_68,pFVar1);
  local_4._0_1_ = 2;
  FString::~FString(local_5c);
  pFStack_98 = (FString *)0x100c05e9;
  iVar2 = FUN_100a61c0();
  iVar5 = -1;
  if (iVar2 == 8) {
    uStack_a4 = 0x100c060b;
    FString::FString((FString *)&uStack_9c,local_68);
    local_4._0_1_ = 5;
    uStack_b0 = 0x100c0627;
    FString::FString(aFStack_a8,local_74);
    local_4._0_1_ = 2;
    FUN_100aba70();
    local_4._0_1_ = 7;
    puStack_d8 = local_50;
    puStack_dc = (undefined1 *)0x100c065f;
    FUN_100abb60();
    local_4._0_1_ = 7;
    puStack_d8 = (undefined1 *)0x100c0676;
    FUN_100aa050();
  }
  else {
    iVar2 = FUN_100a5ad0();
    if (3 < iVar2) {
      pFStack_98 = local_5c;
      uStack_9c = 0x100c069f;
      pFVar1 = (FString *)FUN_100a6140();
      local_4._0_1_ = 9;
      puVar3 = FString::operator*(pFVar1);
      pFStack_98 = (FString *)0x100c06b6;
      iVar5 = appAtoi(puVar3);
      local_4._0_1_ = 2;
      FString::~FString(local_5c);
    }
    uStack_a4 = 0x100c06e1;
    FString::FString((FString *)&uStack_9c,local_68);
    local_4._0_1_ = 10;
    uStack_b0 = 0x100c06fd;
    FString::FString(aFStack_a8,local_74);
    local_4._0_1_ = 2;
    FUN_100aba70();
    local_4._0_1_ = 0xc;
    local_4c = iVar5;
    FUN_100aa580();
    pFStack_98 = (FString *)0x100c0734;
    iVar2 = FUN_100abe50();
    if (iVar2 != 0) {
      puStack_dc = local_50;
      uStack_e0 = 0x100c074f;
      FUN_100abb60();
      local_4._0_1_ = 0xd;
      FString::FString(aFStack_e4,local_74);
      local_4._0_1_ = 0xe;
      uVar4 = FUN_100abe10();
      local_4._0_1_ = 0xc;
      FUN_100bf210(uVar4);
    }
    pFStack_98 = (FString *)0x100c0792;
    iVar2 = FUN_100abe70();
    if (iVar2 != 0) {
      puStack_dc = local_50;
      uStack_e0 = 0x100c07ad;
      FUN_100abb60();
      local_4._0_1_ = 0xf;
      FString::FString(aFStack_e4,local_74);
      local_4._0_1_ = 0x10;
      uVar4 = FUN_100abe20();
      local_4._0_1_ = 0xc;
      FUN_100bf210(uVar4);
    }
    pFStack_98 = (FString *)0x100c07f0;
    iVar2 = FUN_100abe90();
    if (iVar2 != 0) {
      puStack_dc = local_50;
      uStack_e0 = 0x100c080b;
      FUN_100abb60();
      local_4._0_1_ = 0x11;
      FString::FString(aFStack_e4,local_74);
      local_4._0_1_ = 0x12;
      uVar4 = FUN_1004f5b0();
      local_4._0_1_ = 0xc;
      FUN_100bf210(uVar4);
    }
    pFStack_98 = (FString *)0x100c084e;
    iVar2 = FUN_100abeb0();
    if (iVar2 != 0) {
      puStack_dc = local_50;
      uStack_e0 = 0x100c0869;
      FUN_100abb60();
      local_4._0_1_ = 0x13;
      FString::FString(aFStack_e4,local_74);
      local_4._0_1_ = 0x14;
      uVar4 = FUN_100abe30();
      local_4._0_1_ = 0xc;
      FUN_100bf210(uVar4);
    }
  }
  local_4._0_1_ = 2;
  FUN_100abc50();
  local_4._0_1_ = 1;
  FString::~FString(local_68);
  local_4 = (uint)local_4._1_3_ << 8;
  FString::~FString(local_74);
  local_4 = 0xffffffff;
  FUN_100a8d50();
  ExceptionList = local_c;
  return;
}


// ==== 100c0910 FUN_100c0910

void FUN_100c0910(void)

{
  FString *pFVar1;
  int iVar2;
  int in_ECX;
  undefined4 uStack_68;
  FString *pFStack_64;
  FString local_44 [12];
  FString local_38 [12];
  FString local_2c [16];
  FString local_1c [12];
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_101f4dd8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_4 = 0;
  if (*(int *)(in_ECX + 0x88) != 0) {
    FUN_100a5e80();
    local_4._0_1_ = 1;
    FString::FString(local_38);
    local_4._0_1_ = 2;
    FString::FString(local_44);
    local_4._0_1_ = 3;
    pFStack_64 = local_2c;
    uStack_68 = 0x100c098d;
    pFVar1 = (FString *)FUN_100a6400();
    local_4._0_1_ = 4;
    pFStack_64 = (FString *)0x100c099f;
    FString::operator=(local_1c,pFVar1);
    local_10 = *(undefined4 *)(pFVar1 + 0xc);
    local_4._0_1_ = 3;
    FString::~FString(local_2c);
    pFStack_64 = local_2c;
    uStack_68 = 0x100c09cb;
    pFVar1 = (FString *)FUN_100a6140();
    local_4._0_1_ = 6;
    pFStack_64 = (FString *)0x100c09db;
    FString::operator=(local_38,pFVar1);
    local_4._0_1_ = 3;
    FString::~FString(local_2c);
    pFStack_64 = local_2c;
    uStack_68 = 0x100c09fe;
    pFVar1 = (FString *)FUN_100c0460();
    local_4._0_1_ = 7;
    pFStack_64 = (FString *)0x100c0a0e;
    FString::operator=(local_44,pFVar1);
    local_4._0_1_ = 3;
    FString::~FString(local_2c);
    FString::FString((FString *)&uStack_68,(ushort *)&DAT_1022f9f8);
    local_4._0_1_ = 8;
    FUN_100a5fc0(local_1c);
    local_4._0_1_ = 3;
    iVar2 = FUN_100aa810();
    pFStack_64 = (FString *)0x100c0a6c;
    FString::operator=((FString *)(iVar2 + 0x98),local_44);
    FString::FString((FString *)&uStack_68,local_38);
    local_4._0_1_ = 3;
    FUN_100adf50();
    *(undefined4 *)(iVar2 + 0x94) = 0;
    pFStack_64 = (FString *)0x100c0aa3;
    FUN_100aae10();
    local_4._0_1_ = 2;
    FString::~FString(local_44);
    local_4._0_1_ = 1;
    FString::~FString(local_38);
    local_4 = (uint)local_4._1_3_ << 8;
    FString::~FString(local_1c);
  }
  local_4 = 0xffffffff;
  FUN_100a8d50();
  ExceptionList = local_c;
  return;
}


// ==== 100c0b00 FUN_100c0b00

void FUN_100c0b00(void)

{
  int in_ECX;
  
  FUN_10087320(in_ECX + 0x4c,&stack0x00000004);
  return;
}


// ==== 100c0b20 FUN_100c0b20

void FUN_100c0b20(void)

{
  FUN_100aacf0(&stack0x00000004);
  return;
}


// ==== 100c0b30 FUN_100c0b30

void FUN_100c0b30(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  int *in_ECX;
  undefined1 auStack_94 [40];
  undefined4 uStack_6c;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 *puStack_5c;
  uint uStack_58;
  undefined4 uStack_40;
  undefined1 *puStack_3c;
  void *local_c;
  undefined1 *puStack_8;
  uint uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_101f4e31;
  local_c = ExceptionList;
  uStack_58 = DAT_103554c4 ^ (uint)&stack0xffffffac;
  ExceptionList = &local_c;
  if ((short)((uint)param_2 >> 0x10) == 0) {
    if (((uint)param_2 & 0xffff) == 1) {
      if (*(int *)GRunningOS_exref == 1) {
        puStack_5c = (undefined4 *)0x100c0bbb;
        (**(code **)(**(int **)(*(int *)(DAT_103663bc + 0x50) + 0x60) + 0xe0))();
      }
      puStack_5c = (undefined4 *)0x100c0bc4;
      FUN_100a8c30();
      uStack_4 = 0;
      puStack_5c = (undefined4 *)0x100c0bd0;
      iVar1 = FUN_100c3f70();
      if (0 < iVar1) {
        param_2 = &uStack_64;
        uStack_6c = 0x100c0beb;
        FString::FString((FString *)&uStack_64,(FString *)(in_ECX + 8));
        uStack_4 = uStack_4 & 0xffffff00;
        iVar1 = FUN_100a8e90();
        if (iVar1 != 0) {
          puStack_5c = (undefined4 *)0x100c0c0e;
          FUN_100a6260();
          puStack_5c = (undefined4 *)0x100c0c17;
          iVar1 = FUN_10178820();
          if (iVar1 == 0) {
            puStack_5c = (undefined4 *)0x100c0c28;
            iVar1 = FUN_1002c970();
            if (iVar1 == 0) {
              puStack_5c = &param_2;
              param_2 = (undefined4 *)puStack_3c;
              uStack_60 = 0x100c0c45;
              iVar1 = FUN_10187a60();
              if (iVar1 != 0) {
                uStack_60 = 0x100c0c55;
                puStack_5c = (undefined4 *)iVar1;
                iVar2 = (**(code **)(*in_ECX + 0x1c))();
                if (iVar2 == 0) {
                  uStack_60 = uStack_40;
                  uStack_64 = 0x100c0c65;
                  FUN_100c0b20();
                }
                FUN_100a8cd0(&stack0xffffffb4);
                puStack_8 = (undefined1 *)((uint)puStack_8 & 0xffffff00);
                (**(code **)(*in_ECX + 0x14))(iVar1);
                goto LAB_100c0d1f;
              }
              param_2 = (undefined4 *)auStack_94;
              FUN_100a8cd0();
              uStack_4 = uStack_4 & 0xffffff00;
              pcVar3 = *(code **)(*in_ECX + 8);
            }
            else {
              param_2 = (undefined4 *)auStack_94;
              FUN_100a8cd0();
              uStack_4 = uStack_4 & 0xffffff00;
              pcVar3 = *(code **)(*in_ECX + 0xc);
            }
          }
          else {
            param_2 = (undefined4 *)auStack_94;
            FUN_100a8cd0();
            uStack_4 = uStack_4 & 0xffffff00;
            pcVar3 = *(code **)(*in_ECX + 0x10);
          }
          (*pcVar3)();
        }
      }
LAB_100c0d1f:
      uStack_4 = 0xffffffff;
      puStack_5c = (undefined4 *)0x100c0d30;
      FUN_100a8d50();
      ExceptionList = local_c;
      return;
    }
    if (((uint)param_2 & 0xffff) == 0x20) {
      puStack_5c = (undefined4 *)0x100c0b86;
      (**(code **)(*in_ECX + 4))();
      ExceptionList = local_c;
      return;
    }
  }
  else if ((short)param_2 == 0x20) {
    puStack_5c = (undefined4 *)0x100c0d54;
    (**(code **)(*in_ECX + 4))();
  }
  ExceptionList = local_c;
  return;
}


// ==== 100c0d70 FUN_100c0d70

void FUN_100c0d70(void)

{
  int in_ECX;
  FString aFStack_48 [4];
  undefined4 uStack_44;
  undefined4 uStack_40;
  uint uStack_3c;
  undefined1 local_28 [12];
  undefined4 local_1c;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101f4e83;
  local_c = ExceptionList;
  uStack_3c = DAT_103554c4 ^ (uint)&stack0xffffffc8;
  ExceptionList = &local_c;
  FString::FString(aFStack_48,(ushort *)&DAT_10258014);
  local_4 = 0xffffffff;
  FUN_100adfc0();
  local_4 = 1;
  local_1c = *(undefined4 *)(in_ECX + 0x4c);
  FString::FString(aFStack_48,(ushort *)L"MSNP8");
  local_4._1_3_ = (undefined3)((uint)local_4 >> 8);
  local_4._0_1_ = 1;
  FUN_100a8540();
  FString::FString(aFStack_48,(ushort *)L"CVR0");
  local_4._0_1_ = 1;
  FUN_100a8540();
  uStack_40 = 1;
  uStack_44 = 0x100c0e28;
  FUN_100c0b00();
  FUN_100a8a80(local_28);
  local_4 = CONCAT31(local_4._1_3_,1);
  FUN_100bdaa0();
  local_4 = 0xffffffff;
  uStack_40 = 0x100c0e60;
  FUN_100a9100();
  ExceptionList = local_c;
  return;
}


// ==== 100c0e80 FUN_100c0e80

void FUN_100c0e80(void)

{
  int in_ECX;
  FString aFStack_48 [4];
  undefined4 uStack_44;
  undefined4 uStack_40;
  uint uStack_3c;
  undefined1 local_28 [12];
  undefined4 local_1c;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_101f4f11;
  local_c = ExceptionList;
  uStack_3c = DAT_103554c4 ^ (uint)&stack0xffffffc8;
  ExceptionList = &local_c;
  local_4 = 0;
  FString::FString(aFStack_48,(ushort *)&DAT_10258058);
  local_4 = local_4 & 0xffffff00;
  FUN_100adfc0();
  local_4._0_1_ = 2;
  local_1c = *(undefined4 *)(in_ECX + 0x4c);
  FUN_100c6d40();
  local_4._0_1_ = 2;
  FUN_100a8540();
  FUN_100c6e90();
  local_4._0_1_ = 2;
  FUN_100a8540();
  FUN_100c6f80();
  local_4._0_1_ = 2;
  FUN_100a8540();
  FUN_100c7050();
  local_4._0_1_ = 2;
  FUN_100a8540();
  FString::FString(aFStack_48,(ushort *)L"ncsoft");
  local_4._0_1_ = 2;
  FUN_100a8540();
  FString::FString(aFStack_48,(ushort *)L"1.0.0");
  local_4._0_1_ = 2;
  FUN_100a8540();
  FString::FString(aFStack_48,(ushort *)L"l2chronicle3-kr");
  local_4._0_1_ = 2;
  FUN_100a8540();
  FUN_100ae090();
  local_4._0_1_ = 2;
  FUN_100a8540();
  uStack_40 = 2;
  uStack_44 = 0x100c1014;
  FUN_100c0b00();
  FUN_100a8a80(local_28);
  local_4._0_1_ = 2;
  FUN_100bdaa0();
  local_4 = (uint)local_4._1_3_ << 8;
  uStack_40 = 0x100c1049;
  FUN_100a9100();
  local_4 = 0xffffffff;
  uStack_40 = 0x100c105a;
  FUN_100a8d50();
  ExceptionList = local_c;
  return;
}


// ==== 100c1070 FUN_100c1070

void FUN_100c1070(void)

{
  int in_ECX;
  FString aFStack_48 [4];
  undefined4 uStack_44;
  undefined4 uStack_40;
  uint uStack_3c;
  undefined1 local_28 [12];
  undefined4 local_1c;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_101f4f74;
  local_c = ExceptionList;
  uStack_3c = DAT_103554c4 ^ (uint)&stack0xffffffc8;
  ExceptionList = &local_c;
  local_4 = 0;
  FString::FString(aFStack_48,(ushort *)&DAT_10255f68);
  local_4 = local_4 & 0xffffff00;
  FUN_100adfc0();
  local_4._0_1_ = 2;
  local_1c = *(undefined4 *)(in_ECX + 0x4c);
  FString::FString(aFStack_48,(ushort *)&DAT_10258060);
  local_4._0_1_ = 2;
  FUN_100a8540();
  FString::FString(aFStack_48,(ushort *)&DAT_1024cee0);
  local_4._0_1_ = 2;
  FUN_100a8540();
  FUN_100ae090();
  local_4._0_1_ = 2;
  FUN_100a8540();
  uStack_40 = 3;
  uStack_44 = 0x100c114c;
  FUN_100c0b00();
  FUN_100a8a80(local_28);
  local_4._0_1_ = 2;
  FUN_100bdaa0();
  local_4 = (uint)local_4._1_3_ << 8;
  uStack_40 = 0x100c1181;
  FUN_100a9100();
  local_4 = 0xffffffff;
  uStack_40 = 0x100c1192;
  FUN_100a8d50();
  ExceptionList = local_c;
  return;
}


// ==== 100c11b0 FUN_100c11b0

void FUN_100c11b0(void)

{
  int in_ECX;
  FString aFStack_48 [4];
  undefined4 uStack_44;
  undefined4 uStack_40;
  uint uStack_3c;
  undefined1 local_28 [12];
  undefined4 local_1c;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101f4fc3;
  local_c = ExceptionList;
  uStack_3c = DAT_103554c4 ^ (uint)&stack0xffffffc8;
  ExceptionList = &local_c;
  FString::FString(aFStack_48,(ushort *)&DAT_10258014);
  local_4 = 0xffffffff;
  FUN_100adfc0();
  local_4 = 1;
  local_1c = *(undefined4 *)(in_ECX + 0x4c);
  FString::FString(aFStack_48,(ushort *)L"MSNP8");
  local_4._1_3_ = (undefined3)((uint)local_4 >> 8);
  local_4._0_1_ = 1;
  FUN_100a8540();
  FString::FString(aFStack_48,(ushort *)L"CVR0");
  local_4._0_1_ = 1;
  FUN_100a8540();
  uStack_40 = 1;
  uStack_44 = 0x100c1268;
  FUN_100c0b00();
  FUN_100a8a80(local_28);
  local_4 = CONCAT31(local_4._1_3_,1);
  FUN_100bdaa0();
  local_4 = 0xffffffff;
  uStack_40 = 0x100c12a0;
  FUN_100a9100();
  ExceptionList = local_c;
  return;
}


// ==== 100c12c0 FUN_100c12c0

void FUN_100c12c0(void)

{
  int in_ECX;
  FString aFStack_48 [4];
  undefined4 uStack_44;
  undefined4 uStack_40;
  uint uStack_3c;
  undefined1 local_28 [12];
  undefined4 local_1c;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_101f5051;
  local_c = ExceptionList;
  uStack_3c = DAT_103554c4 ^ (uint)&stack0xffffffc8;
  ExceptionList = &local_c;
  local_4 = 0;
  FString::FString(aFStack_48,(ushort *)&DAT_10258058);
  local_4 = local_4 & 0xffffff00;
  FUN_100adfc0();
  local_4._0_1_ = 2;
  local_1c = *(undefined4 *)(in_ECX + 0x4c);
  FUN_100c6d40();
  local_4._0_1_ = 2;
  FUN_100a8540();
  FUN_100c6e90();
  local_4._0_1_ = 2;
  FUN_100a8540();
  FUN_100c6f80();
  local_4._0_1_ = 2;
  FUN_100a8540();
  FUN_100c7050();
  local_4._0_1_ = 2;
  FUN_100a8540();
  FString::FString(aFStack_48,(ushort *)L"ncsoft");
  local_4._0_1_ = 2;
  FUN_100a8540();
  FString::FString(aFStack_48,(ushort *)L"1.0.0");
  local_4._0_1_ = 2;
  FUN_100a8540();
  FString::FString(aFStack_48,(ushort *)L"l2chronicle3-kr");
  local_4._0_1_ = 2;
  FUN_100a8540();
  FUN_100ae090();
  local_4._0_1_ = 2;
  FUN_100a8540();
  uStack_40 = 2;
  uStack_44 = 0x100c1454;
  FUN_100c0b00();
  FUN_100a8a80(local_28);
  local_4._0_1_ = 2;
  FUN_100bdaa0();
  local_4 = (uint)local_4._1_3_ << 8;
  uStack_40 = 0x100c1489;
  FUN_100a9100();
  local_4 = 0xffffffff;
  uStack_40 = 0x100c149a;
  FUN_100a8d50();
  ExceptionList = local_c;
  return;
}


// ==== 100c14b0 FUN_100c14b0

void FUN_100c14b0(void)

{
  int in_ECX;
  FString aFStack_48 [4];
  undefined4 uStack_44;
  undefined4 uStack_40;
  uint uStack_3c;
  undefined1 local_28 [12];
  undefined4 local_1c;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_101f50b4;
  local_c = ExceptionList;
  uStack_3c = DAT_103554c4 ^ (uint)&stack0xffffffc8;
  ExceptionList = &local_c;
  local_4 = 0;
  FString::FString(aFStack_48,(ushort *)&DAT_10255f68);
  local_4 = local_4 & 0xffffff00;
  FUN_100adfc0();
  local_4._0_1_ = 2;
  local_1c = *(undefined4 *)(in_ECX + 0x4c);
  FString::FString(aFStack_48,(ushort *)&DAT_10258060);
  local_4._0_1_ = 2;
  FUN_100a8540();
  FString::FString(aFStack_48,(ushort *)&DAT_1024cee0);
  local_4._0_1_ = 2;
  FUN_100a8540();
  FUN_100ae090();
  local_4._0_1_ = 2;
  FUN_100a8540();
  uStack_40 = 4;
  uStack_44 = 0x100c158c;
  FUN_100c0b00();
  FUN_100a8a80(local_28);
  local_4._0_1_ = 2;
  FUN_100bdaa0();
  local_4 = (uint)local_4._1_3_ << 8;
  uStack_40 = 0x100c15c1;
  FUN_100a9100();
  local_4 = 0xffffffff;
  uStack_40 = 0x100c15d2;
  FUN_100a8d50();
  ExceptionList = local_c;
  return;
}


// ==== 100c15f0 FUN_100c15f0

void FUN_100c15f0(void)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  FString *pFVar4;
  FString *this;
  ushort *puVar5;
  int *in_ECX;
  undefined4 uStack_68;
  FString *pFStack_64;
  FString local_38 [16];
  undefined1 local_28 [12];
  int local_1c;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_101f5166;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  bVar1 = false;
  local_4 = 0;
  pFStack_64 = (FString *)0x100c1631;
  iVar3 = FString::operator==((FString *)&stack0x00000004,(ushort *)&DAT_102580b8);
  if (iVar3 != 0) {
    pFStack_64 = local_38;
    uStack_68 = 0x100c1644;
    pFVar4 = (FString *)FUN_100a6140();
    local_4 = CONCAT31(local_4._1_3_,1);
    bVar1 = true;
    pFStack_64 = (FString *)0x100c165f;
    iVar3 = FString::operator==(pFVar4,(ushort *)&DAT_102580b0);
    bVar2 = true;
    if (iVar3 != 0) goto LAB_100c166c;
  }
  bVar2 = false;
LAB_100c166c:
  local_4 = 0;
  if (bVar1) {
    FString::~FString(local_38);
  }
  if (bVar2) {
    pFStack_64 = local_38;
    uStack_68 = 0x100c16a1;
    FUN_100a6400();
    local_4._0_1_ = 2;
    (**(code **)(*in_ECX + 0x20))();
    local_4 = (uint)local_4._1_3_ << 8;
    FString::~FString(local_38);
  }
  else {
    FString::FString((FString *)&uStack_68,(ushort *)&DAT_10255f68);
    local_4 = local_4 & 0xffffff00;
    FUN_100adfc0();
    local_4._0_1_ = 5;
    local_1c = in_ECX[0x13];
    FString::FString((FString *)&uStack_68,(ushort *)&DAT_10258060);
    local_4._0_1_ = 5;
    FUN_100a8540();
    FString::FString((FString *)&uStack_68,(ushort *)&DAT_102580ac);
    local_4._0_1_ = 5;
    FUN_100a8540();
    pFStack_64 = (FString *)0x100c174e;
    FUN_100c0b00();
    pFStack_64 = (FString *)0x18;
    uStack_68 = 0x100c1763;
    iVar3 = (**(code **)**(undefined4 **)GMalloc_exref)();
    local_4._0_1_ = 8;
    if (iVar3 == 0) {
      iVar3 = 0;
    }
    else {
      FUN_100be340();
      local_4._0_1_ = 9;
      FUN_100ae090();
      local_4._0_1_ = 8;
      iVar3 = FUN_100c4190();
    }
    local_4._0_1_ = 5;
    in_ECX[0x1c] = iVar3;
    if (iVar3 != 0) {
      pFStack_64 = (FString *)0x100c17cb;
      pFVar4 = (FString *)FUN_100c46b0();
      if (pFVar4 != (FString *)0x0) {
        pFStack_64 = local_38;
        uStack_68 = 0x100c17e5;
        this = (FString *)FUN_100a6140();
        local_4._0_1_ = 0xb;
        FString::operator*(this);
        uStack_68 = 0x100c17fc;
        pFStack_64 = pFVar4;
        puVar5 = (ushort *)FUN_100c4270();
        local_4._0_1_ = 5;
        FString::~FString(local_38);
        if (puVar5 == (ushort *)0x0) {
          FString::FString((FString *)&uStack_68,(ushort *)&DAT_102559f8);
          local_4._0_1_ = 5;
          FUN_100aa150();
        }
        else {
          FString::FString((FString *)&uStack_68,puVar5);
          local_4._0_1_ = 5;
          FUN_100a8540();
          FUN_100adbf0(local_28);
          local_4._0_1_ = 5;
          FUN_100bdaa0();
        }
      }
    }
    local_4 = (uint)local_4._1_3_ << 8;
    FUN_100a9100();
  }
  local_4 = 0xffffffff;
  FUN_100a8d50();
  ExceptionList = local_c;
  return;
}


// ==== 100c18b0 FUN_100c18b0

void FUN_100c18b0(void)

{
  int iVar1;
  undefined4 uVar2;
  int in_ECX;
  undefined1 auStack_108 [32];
  undefined4 uStack_e8;
  undefined1 *puStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined1 *puStack_d8;
  undefined1 *local_b8;
  undefined1 *local_b4;
  undefined1 local_b0 [12];
  undefined4 local_a4;
  ushort local_50 [32];
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_101f5200;
  local_c = ExceptionList;
  local_10 = DAT_103554c4 ^ (uint)&local_b8;
  ExceptionList = &local_c;
  local_4 = 0;
  iVar1 = FString::operator==((FString *)&stack0x00000004,(ushort *)&DAT_10255f68);
  local_b4 = &stack0xffffff30;
  if (iVar1 == 0) {
    puStack_d8 = (undefined1 *)0x100c1a75;
    FString::FString((FString *)&stack0xffffff30,(ushort *)&DAT_102559f8);
    local_4 = local_4 & 0xffffff00;
    FUN_100aa150();
  }
  else {
    puStack_d8 = (undefined1 *)0x100c1924;
    local_b8 = &stack0xffffff30;
    FString::FString((FString *)&stack0xffffff30,(ushort *)&DAT_102580c0);
    local_4 = local_4 & 0xffffff00;
    FUN_100adfc0();
    local_4._0_1_ = 2;
    local_a4 = *(undefined4 *)(in_ECX + 0x4c);
    appSprintf(local_50,(ushort *)&DAT_10233718);
    puStack_d8 = (undefined1 *)0x100c197b;
    local_b8 = &stack0xffffff30;
    FString::FString((FString *)&stack0xffffff30,local_50);
    local_4._0_1_ = 2;
    FUN_100a8540();
    FUN_100c0b00();
    local_b8 = (undefined1 *)&uStack_e0;
    puStack_e4 = local_b0;
    uStack_e8 = 0x100c19af;
    FUN_100adbf0();
    local_4._0_1_ = 2;
    puStack_e4 = (undefined1 *)0x100c19c5;
    FUN_100bdaa0();
    uStack_dc = 0x100c19dc;
    puStack_d8 = &stack0xffffff30;
    local_b8 = &stack0xffffff30;
    FUN_100a6140();
    local_4._0_1_ = 5;
    local_b4 = (undefined1 *)&uStack_dc;
    puStack_e4 = (undefined1 *)&uStack_dc;
    uStack_e0 = 1;
    uStack_e8 = 0x100c19fc;
    FUN_100a6140();
    local_4._0_1_ = 2;
    uStack_e0 = 0x100c1a14;
    uVar2 = FUN_100aba70();
    local_4._0_1_ = 7;
    local_b4 = auStack_108;
    FUN_100abb60(uVar2);
    local_4._0_1_ = 7;
    FUN_100aa410();
    local_4._0_1_ = 2;
    FUN_100abc50();
    local_4 = (uint)local_4._1_3_ << 8;
    FUN_100a9100();
  }
  local_4 = 0xffffffff;
  FUN_100a8d50();
  ExceptionList = local_c;
  __security_check_cookie(local_10 ^ (uint)&local_b8);
  return;
}


// ==== 100c1ad0 FUN_100c1ad0

void FUN_100c1ad0(void)

{
  FString *this;
  int iVar1;
  int in_ECX;
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
  this = (FString *)(in_ECX + 0x74);
  pFStack_6c = (FString *)0x100c1b10;
  FString::operator=(this,(FString *)&stack0x00000004);
  FString::FString((FString *)&uStack_70,(ushort *)&DAT_10257fd4);
  local_4 = local_4 & 0xffffff00;
  FUN_100adfc0();
  local_4._0_1_ = 2;
  local_1c = *(undefined4 *)(in_ECX + 0x4c);
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


// ==== 100c1db0 FUN_100c1db0

void FUN_100c1db0(void)

{
  int iVar1;
  int in_ECX;
  undefined1 auStack_264 [8];
  undefined4 uStack_25c;
  undefined1 *local_23c;
  undefined1 *local_238;
  undefined1 local_234 [12];
  undefined4 local_228;
  ushort local_218 [260];
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_101f52ee;
  local_c = ExceptionList;
  local_10 = DAT_103554c4 ^ (uint)&local_23c;
  ExceptionList = &local_c;
  local_4 = 0;
  local_23c = &stack0xfffffdac;
  uStack_25c = 0x100c1e0a;
  FString::FString((FString *)&stack0xfffffdac,(ushort *)&DAT_10257fdc);
  local_4 = local_4 & 0xffffff00;
  FUN_100adfc0();
  local_4._0_1_ = 2;
  local_228 = *(undefined4 *)(in_ECX + 0x4c);
  iVar1 = FUN_100aa590();
  local_23c = &stack0xfffffdac;
  uStack_25c = 0x100c1e4e;
  FString::FString((FString *)&stack0xfffffdac,(FString *)(iVar1 + 0x20));
  local_4._0_1_ = 2;
  FUN_100a8540();
  appMemset(local_218,0,0x208);
  FString::operator*((FString *)&stack0x00000004);
  FUN_100c7570();
  local_23c = &stack0xfffffdac;
  uStack_25c = 0x100c1ea5;
  FString::FString((FString *)&stack0xfffffdac,local_218);
  local_4._0_1_ = 2;
  FUN_100a8540();
  FUN_100c0b00();
  local_23c = auStack_264;
  local_238 = auStack_264;
  FUN_100a8a80(local_234);
  local_4._0_1_ = 2;
  FUN_100bdaa0();
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_100a9100();
  local_4 = 0xffffffff;
  FString::~FString((FString *)&stack0x00000004);
  ExceptionList = local_c;
  __security_check_cookie(local_10 ^ (uint)&local_23c);
  return;
}


// ==== 100c1f50 FUN_100c1f50

void FUN_100c1f50(void)

{
  int iVar1;
  ushort *puVar2;
  int in_ECX;
  FString *in_stack_00000010;
  undefined1 auStack_74 [8];
  undefined4 uStack_6c;
  FString aFStack_64 [4];
  undefined4 uStack_60;
  undefined4 uStack_5c;
  uint uStack_58;
  undefined1 local_44 [12];
  undefined4 local_38;
  undefined1 local_28 [12];
  undefined4 local_1c;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_101f53a1;
  local_c = ExceptionList;
  uStack_58 = DAT_103554c4 ^ (uint)&stack0xffffffac;
  ExceptionList = &local_c;
  local_4 = 0;
  uStack_6c = 0x100c1f94;
  FString::FString(aFStack_64,(ushort *)&DAT_10257f7c);
  local_4 = local_4 & 0xffffff00;
  FUN_100adfc0();
  iVar1 = (int)in_stack_00000010;
  local_4._0_1_ = 2;
  local_1c = *(undefined4 *)(in_ECX + 0x4c);
  puVar2 = (ushort *)&DAT_10255ed0;
  if (in_stack_00000010 == (FString *)0x0) {
    puVar2 = (ushort *)&DAT_10255ec0;
  }
  in_stack_00000010 = aFStack_64;
  uStack_6c = 0x100c1fd6;
  FString::FString(aFStack_64,puVar2);
  local_4._0_1_ = 2;
  FUN_100a8540();
  in_stack_00000010 = aFStack_64;
  uStack_6c = 0x100c1ffc;
  FString::FString(aFStack_64,(FString *)&stack0x00000004);
  local_4._0_1_ = 2;
  FUN_100a8540();
  in_stack_00000010 = aFStack_64;
  uStack_6c = 0x100c2022;
  FString::FString(aFStack_64,(FString *)&stack0x00000004);
  local_4._0_1_ = 2;
  FUN_100a8540();
  uStack_5c = 10;
  uStack_60 = 0x100c203d;
  FUN_100c0b00();
  in_stack_00000010 = (FString *)auStack_74;
  FUN_100a8a80(local_28);
  local_4._0_1_ = 2;
  FUN_100bdaa0();
  in_stack_00000010 = aFStack_64;
  uStack_6c = 0x100c207b;
  FString::FString(aFStack_64,(ushort *)&DAT_10257f7c);
  local_4._0_1_ = 2;
  FUN_100adfc0();
  local_4._0_1_ = 9;
  local_38 = *(undefined4 *)(in_ECX + 0x4c);
  puVar2 = (ushort *)&DAT_10255ec8;
  if (iVar1 == 0) {
    puVar2 = (ushort *)&DAT_10255eb8;
  }
  in_stack_00000010 = aFStack_64;
  uStack_6c = 0x100c20b7;
  FString::FString(aFStack_64,puVar2);
  local_4._0_1_ = 9;
  FUN_100a8540();
  in_stack_00000010 = aFStack_64;
  uStack_6c = 0x100c20de;
  FString::FString(aFStack_64,(FString *)&stack0x00000004);
  local_4._0_1_ = 9;
  FUN_100a8540();
  in_stack_00000010 = aFStack_64;
  uStack_6c = 0x100c2105;
  FString::FString(aFStack_64,(FString *)&stack0x00000004);
  local_4._0_1_ = 9;
  FUN_100a8540();
  uStack_5c = 10;
  uStack_60 = 0x100c2121;
  FUN_100c0b00();
  in_stack_00000010 = (FString *)auStack_74;
  FUN_100a8a80(local_44);
  local_4._0_1_ = 9;
  FUN_100bdaa0();
  local_4._0_1_ = 2;
  uStack_5c = 0x100c2159;
  FUN_100a9100();
  local_4 = (uint)local_4._1_3_ << 8;
  uStack_5c = 0x100c2167;
  FUN_100a9100();
  local_4 = 0xffffffff;
  uStack_5c = 0x100c2179;
  FString::~FString((FString *)&stack0x00000004);
  ExceptionList = local_c;
  return;
}


// ==== 100c2190 FUN_100c2190

void FUN_100c2190(void)

{
  undefined1 *puVar1;
  int iVar2;
  ushort *puVar3;
  int in_ECX;
  FString *in_stack_00000010;
  undefined1 auStack_78 [8];
  undefined4 uStack_70;
  FString aFStack_68 [4];
  undefined4 uStack_64;
  undefined4 uStack_60;
  uint uStack_5c;
  undefined1 local_44 [12];
  undefined4 local_38;
  undefined1 local_28 [12];
  undefined4 local_1c;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_101f5431;
  local_c = ExceptionList;
  uStack_5c = DAT_103554c4 ^ (uint)&stack0xffffffa8;
  ExceptionList = &local_c;
  local_4 = 0;
  uStack_60 = 0x100c21c9;
  FUN_100aa580();
  uStack_60 = 0x100c21d0;
  iVar2 = FUN_100abe10();
  if (iVar2 != 0) {
    uStack_70 = 0x100c21ee;
    FString::FString(aFStack_68,(FString *)&stack0x00000004);
    local_4 = local_4 & 0xffffff00;
    iVar2 = FUN_100ac3d0();
    if (iVar2 != 0) {
      uStack_70 = 0x100c221d;
      FString::FString(aFStack_68,(ushort *)&DAT_10257f74);
      local_4 = local_4 & 0xffffff00;
      FUN_100adfc0();
      puVar1 = in_stack_00000010;
      local_4._0_1_ = 3;
      local_1c = *(undefined4 *)(in_ECX + 0x4c);
      puVar3 = (ushort *)&DAT_10255ec8;
      if (in_stack_00000010 == (FString *)0x0) {
        puVar3 = (ushort *)&DAT_10255ec0;
      }
      in_stack_00000010 = aFStack_68;
      uStack_70 = 0x100c225f;
      FString::FString(aFStack_68,puVar3);
      local_4._0_1_ = 3;
      FUN_100a8540();
      in_stack_00000010 = aFStack_68;
      uStack_70 = 0x100c2285;
      FString::FString(aFStack_68,(FString *)&stack0x00000004);
      local_4._0_1_ = 3;
      FUN_100a8540();
      uStack_60 = 0xc;
      uStack_64 = 0x100c22a0;
      FUN_100c0b00();
      in_stack_00000010 = (FString *)auStack_78;
      FUN_100adbf0(local_28);
      local_4._0_1_ = 3;
      FUN_100bdaa0();
      in_stack_00000010 = aFStack_68;
      uStack_70 = 0x100c22da;
      FString::FString(aFStack_68,(ushort *)&DAT_10257f7c);
      local_4._0_1_ = 3;
      FUN_100adfc0();
      local_4._0_1_ = 8;
      local_38 = *(undefined4 *)(in_ECX + 0x4c);
      puVar3 = (ushort *)&DAT_10255ec0;
      if (puVar1 == (undefined1 *)0x0) {
        puVar3 = (ushort *)&DAT_10255ec8;
      }
      in_stack_00000010 = aFStack_68;
      uStack_70 = 0x100c2316;
      FString::FString(aFStack_68,puVar3);
      local_4._0_1_ = 8;
      FUN_100a8540();
      in_stack_00000010 = aFStack_68;
      uStack_70 = 0x100c233d;
      FString::FString(aFStack_68,(FString *)&stack0x00000004);
      local_4._0_1_ = 8;
      FUN_100a8540();
      in_stack_00000010 = aFStack_68;
      uStack_70 = 0x100c2363;
      FString::FString(aFStack_68,(FString *)(iVar2 + 0x2c));
      local_4._0_1_ = 8;
      FUN_100a8540();
      uStack_60 = 0xc;
      uStack_64 = 0x100c237f;
      FUN_100c0b00();
      in_stack_00000010 = (FString *)auStack_78;
      FUN_100adbf0(local_44);
      local_4._0_1_ = 8;
      FUN_100bdaa0();
      local_4._0_1_ = 3;
      uStack_60 = 0x100c23b3;
      FUN_100a9100();
      local_4 = (uint)local_4._1_3_ << 8;
      uStack_60 = 0x100c23c1;
      FUN_100a9100();
    }
  }
  local_4 = 0xffffffff;
  uStack_60 = 0x100c23d3;
  FString::~FString((FString *)&stack0x00000004);
  ExceptionList = local_c;
  return;
}


// ==== 100c23f0 FUN_100c23f0

void FUN_100c23f0(void)

{
  int in_ECX;
  undefined1 *in_stack_00000048;
  FString *in_stack_0000004c;
  undefined1 auStack_70 [8];
  undefined4 uStack_68;
  FString aFStack_60 [4];
  undefined4 uStack_5c;
  undefined4 uStack_58;
  uint uStack_54;
  undefined1 local_44 [12];
  undefined4 local_38;
  undefined1 local_28 [12];
  undefined4 local_1c;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_101f54c7;
  local_c = ExceptionList;
  uStack_54 = DAT_103554c4 ^ (uint)&stack0xffffffb0;
  ExceptionList = &local_c;
  local_4 = 0;
  uStack_68 = 0x100c2433;
  FString::FString(aFStack_60,(ushort *)&DAT_10257f7c);
  local_4 = local_4 & 0xffffff00;
  FUN_100adfc0();
  local_4._0_1_ = 2;
  local_38 = *(undefined4 *)(in_ECX + 0x4c);
  uStack_68 = 0x100c2467;
  FString::FString(aFStack_60,(ushort *)&DAT_10255ed0);
  local_4._0_1_ = 2;
  FUN_100a8540();
  uStack_68 = 0x100c2490;
  FString::FString(aFStack_60,(FString *)&stack0x00000024);
  local_4._0_1_ = 2;
  FUN_100a8540();
  uStack_68 = 0x100c24b9;
  FString::FString(aFStack_60,(FString *)&stack0x00000030);
  local_4._0_1_ = 2;
  FUN_100a8540();
  uStack_58 = in_stack_0000004c;
  uStack_5c = 0x100c24dc;
  FUN_100a85e0();
  uStack_58 = 0xd;
  uStack_5c = 0x100c24e5;
  FUN_100c0b00();
  in_stack_0000004c = (FString *)auStack_70;
  FUN_100a8a80(local_44);
  local_4._0_1_ = 2;
  FUN_100bdaa0();
  in_stack_0000004c = aFStack_60;
  uStack_68 = 0x100c2526;
  FString::FString(aFStack_60,(ushort *)&DAT_10257f74);
  local_4._0_1_ = 2;
  FUN_100adfc0();
  local_4._0_1_ = 9;
  local_1c = *(undefined4 *)(in_ECX + 0x4c);
  in_stack_0000004c = aFStack_60;
  uStack_68 = 0x100c255b;
  FString::FString(aFStack_60,(ushort *)&DAT_10255ed0);
  local_4._0_1_ = 9;
  FUN_100a8540();
  in_stack_0000004c = aFStack_60;
  uStack_68 = 0x100c2588;
  FString::FString(aFStack_60,(FString *)&stack0x00000024);
  local_4._0_1_ = 9;
  FUN_100a8540();
  uStack_58 = in_stack_00000048;
  uStack_5c = 0x100c25ac;
  FUN_100a85e0();
  uStack_58 = 0xe;
  uStack_5c = 0x100c25b5;
  FUN_100c0b00();
  in_stack_0000004c = (FString *)auStack_70;
  in_stack_00000048 = auStack_70;
  FUN_100a8a80(local_28);
  local_4._0_1_ = 9;
  FUN_100bdaa0();
  local_4._0_1_ = 2;
  uStack_58 = 0x100c25f0;
  FUN_100a9100();
  local_4 = (uint)local_4._1_3_ << 8;
  uStack_58 = 0x100c25fe;
  FUN_100a9100();
  local_4 = 0xffffffff;
  uStack_58 = 0x100c260f;
  FUN_100abc50();
  ExceptionList = local_c;
  return;
}


// ==== 100c2630 FUN_100c2630

void FUN_100c2630(void)

{
  int in_ECX;
  undefined1 auStack_260 [8];
  undefined4 uStack_258;
  undefined1 *local_23c;
  undefined1 *local_238;
  undefined1 local_234 [12];
  undefined4 local_228;
  ushort local_218 [260];
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_101f5532;
  local_c = ExceptionList;
  local_10 = DAT_103554c4 ^ (uint)&local_23c;
  ExceptionList = &local_c;
  local_4 = 0;
  local_23c = &stack0xfffffdb0;
  uStack_258 = 0x100c2689;
  FString::FString((FString *)&stack0xfffffdb0,(ushort *)&DAT_10257fe4);
  local_4 = local_4 & 0xffffff00;
  FUN_100adfc0();
  local_4._0_1_ = 2;
  local_228 = *(undefined4 *)(in_ECX + 0x4c);
  appMemset(local_218,0,0x208);
  FString::operator*((FString *)&stack0x00000004);
  FUN_100c7570();
  local_23c = &stack0xfffffdb0;
  uStack_258 = 0x100c26f0;
  FString::FString((FString *)&stack0xfffffdb0,local_218);
  local_4._0_1_ = 2;
  FUN_100a8540();
  FUN_100a85e0();
  FUN_100c0b00();
  local_23c = auStack_260;
  local_238 = auStack_260;
  FUN_100a8a80(local_234);
  local_4._0_1_ = 2;
  FUN_100bdaa0();
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_100a9100();
  local_4 = 0xffffffff;
  FString::~FString((FString *)&stack0x00000004);
  ExceptionList = local_c;
  __security_check_cookie(local_10 ^ (uint)&local_23c);
  return;
}


// ==== 100c27a0 FUN_100c27a0

void FUN_100c27a0(undefined4 param_1)

{
  int in_ECX;
  FString aFStack_40 [4];
  undefined4 uStack_3c;
  undefined4 uStack_38;
  uint uStack_34;
  undefined1 local_28 [12];
  undefined4 local_1c;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101f5581;
  local_c = ExceptionList;
  uStack_34 = DAT_103554c4 ^ (uint)&stack0xffffffd0;
  ExceptionList = &local_c;
  FString::FString(aFStack_40,(ushort *)&DAT_10257fec);
  local_4 = 0xffffffff;
  FUN_100adfc0();
  local_4 = 1;
  local_1c = *(undefined4 *)(in_ECX + 0x4c);
  uStack_38 = param_1;
  uStack_3c = 0x100c2810;
  FUN_100a85e0();
  uStack_38 = 0x10;
  uStack_3c = 0x100c2819;
  FUN_100c0b00();
  FUN_100a8a80(local_28);
  local_4 = CONCAT31((int3)((uint)local_4 >> 8),1);
  FUN_100bdaa0();
  local_4 = 0xffffffff;
  uStack_38 = 0x100c2852;
  FUN_100a9100();
  ExceptionList = local_c;
  return;
}


// ==== 100c2870 FUN_100c2870

void FUN_100c2870(void)

{
  int in_ECX;
  undefined1 auStack_260 [8];
  undefined4 uStack_258;
  undefined1 *local_23c;
  undefined1 *local_238;
  undefined1 local_234 [12];
  undefined4 local_228;
  ushort local_218 [260];
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_101f55e2;
  local_c = ExceptionList;
  local_10 = DAT_103554c4 ^ (uint)&local_23c;
  ExceptionList = &local_c;
  local_4 = 0;
  local_23c = &stack0xfffffdb0;
  uStack_258 = 0x100c28c9;
  FString::FString((FString *)&stack0xfffffdb0,(ushort *)&DAT_10257ff4);
  local_4 = local_4 & 0xffffff00;
  FUN_100adfc0();
  local_4._0_1_ = 2;
  local_228 = *(undefined4 *)(in_ECX + 0x4c);
  FUN_100a85e0();
  appMemset(local_218,0,0x208);
  FString::operator*((FString *)&stack0x00000008);
  FUN_100c7570();
  local_23c = &stack0xfffffdb0;
  uStack_258 = 0x100c2941;
  FString::FString((FString *)&stack0xfffffdb0,local_218);
  local_4._0_1_ = 2;
  FUN_100a8540();
  FUN_100a85e0();
  FUN_100c0b00();
  local_23c = auStack_260;
  local_238 = auStack_260;
  FUN_100a8a80(local_234);
  local_4._0_1_ = 2;
  FUN_100bdaa0();
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_100a9100();
  local_4 = 0xffffffff;
  FString::~FString((FString *)&stack0x00000008);
  ExceptionList = local_c;
  __security_check_cookie(local_10 ^ (uint)&local_23c);
  return;
}


// ==== 100c29f0 FUN_100c29f0

void FUN_100c29f0(void)

{
  int in_ECX;
  undefined4 uStack_48;
  int iStack_44;
  ushort *puStack_40;
  uint uStack_3c;
  undefined1 local_28 [12];
  undefined4 local_1c;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_101f5643;
  local_c = ExceptionList;
  uStack_3c = DAT_103554c4 ^ (uint)&stack0xffffffc8;
  ExceptionList = &local_c;
  local_4 = 0;
  FString::FString((FString *)&uStack_48,"XFR");
  local_4 = local_4 & 0xffffff00;
  FUN_100adfc0();
  local_4._0_1_ = 2;
  local_1c = *(undefined4 *)(in_ECX + 0x4c);
  FString::FString((FString *)&uStack_48,"SB");
  local_4._0_1_ = 2;
  FUN_100a8540();
  puStack_40 = (ushort *)0x9;
  iStack_44 = 0x100c2a85;
  FUN_100c0b00();
  puStack_40 = (ushort *)0x100c2a8f;
  puStack_40 = FString::operator*((FString *)&stack0x00000004);
  uStack_48 = 0x100c2a9c;
  iStack_44 = in_ECX + 0x4c;
  FUN_1000bd70();
  FUN_100a8a80(local_28);
  local_4._0_1_ = 2;
  FUN_100bdaa0();
  local_4 = (uint)local_4._1_3_ << 8;
  puStack_40 = (ushort *)0x100c2ad2;
  FUN_100a9100();
  local_4 = 0xffffffff;
  puStack_40 = (ushort *)0x100c2ae4;
  FString::~FString((FString *)&stack0x00000004);
  ExceptionList = local_c;
  return;
}


// ==== 100c2b00 FUN_100c2b00

void FUN_100c2b00(int param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_101f5680;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_4 = 0;
  if (param_1 == 1) {
    FUN_100a8cd0(&stack0x00000008);
    local_4 = local_4 & 0xffffff00;
    FUN_100c0e80();
  }
  else if (param_1 == 2) {
    FUN_100a8cd0(&stack0x00000008);
    local_4 = local_4 & 0xffffff00;
    FUN_100c1070();
  }
  else if (param_1 == 3) {
    FUN_100a8cd0(&stack0x00000008);
    local_4 = local_4 & 0xffffff00;
    FUN_100be4a0();
  }
  local_4 = 0xffffffff;
  FUN_100a8d50();
  ExceptionList = local_c;
  return;
}


// ==== 100c2bd0 FUN_100c2bd0

void FUN_100c2bd0(void)

{
  int iVar1;
  int in_ECX;
  undefined1 auStack_2c [4];
  undefined4 uStack_28;
  undefined4 uStack_24;
  uint uStack_20;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_101f56b1;
  local_c = ExceptionList;
  uStack_20 = DAT_103554c4 ^ (uint)&stack0xffffffe4;
  ExceptionList = &local_c;
  local_4 = 0;
  uStack_24 = 0;
  uStack_28 = 0x100c2c09;
  iVar1 = FUN_100a61c0();
  if (*(int *)(in_ECX + 0x80) != iVar1) {
    uStack_24 = 0x100c2c1b;
    FUN_100aa580();
    uStack_24 = 0x100c2c24;
    FUN_100abe10();
    uStack_24 = 0x100c2c2b;
    FUN_100ad150();
    uStack_24 = 0x100c2c32;
    FUN_100abe20();
    uStack_24 = 0x100c2c39;
    FUN_100ad150();
    uStack_24 = 0x100c2c40;
    FUN_1004f5b0();
    uStack_24 = 0x100c2c47;
    FUN_100ad150();
    uStack_24 = 0x100c2c4e;
    FUN_100abe30();
    uStack_24 = 0x100c2c55;
    FUN_100ad150();
    *(int *)(in_ECX + 0x80) = iVar1;
    FUN_100be3a0(auStack_2c);
    local_4 = local_4 & 0xffffff00;
    FUN_100c1ad0();
  }
  local_4 = 0xffffffff;
  uStack_24 = 0x100c2c8f;
  FUN_100a8d50();
  ExceptionList = local_c;
  return;
}


// ==== 100c2cb0 FUN_100c2cb0

void FUN_100c2cb0(void)

{
  int in_ECX;
  undefined1 *in_stack_00000010;
  FString aFStack_48 [4];
  undefined4 uStack_44;
  undefined4 uStack_40;
  uint uStack_3c;
  undefined1 local_28 [12];
  undefined4 local_1c;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_101f5715;
  local_c = ExceptionList;
  uStack_3c = DAT_103554c4 ^ (uint)&stack0xffffffc8;
  ExceptionList = &local_c;
  local_4 = 0;
  FString::FString(aFStack_48,(ushort *)&DAT_10257f74);
  local_4 = local_4 & 0xffffff00;
  FUN_100adfc0();
  local_4._0_1_ = 2;
  local_1c = *(undefined4 *)(in_ECX + 0x4c);
  FString::FString(aFStack_48,(ushort *)&DAT_10255ed0);
  local_4._0_1_ = 2;
  FUN_100a8540();
  FString::FString(aFStack_48,(FString *)&stack0x00000004);
  local_4._0_1_ = 2;
  FUN_100a8540();
  uStack_40 = 0xb;
  uStack_44 = 0x100c2d68;
  FUN_100c0b00();
  FUN_100a8a80(local_28);
  local_4._0_1_ = 2;
  FUN_100bdaa0();
  if (in_stack_00000010 != (undefined1 *)0x0) {
    uStack_40 = 1;
    in_stack_00000010 = &stack0xffffffb4;
    FString::FString((FString *)&stack0xffffffb4,(FString *)&stack0x00000004);
    local_4._0_1_ = 2;
    FUN_100c2190();
  }
  local_4 = (uint)local_4._1_3_ << 8;
  uStack_40 = 0x100c2dca;
  FUN_100a9100();
  local_4 = 0xffffffff;
  uStack_40 = 0x100c2ddc;
  FString::~FString((FString *)&stack0x00000004);
  ExceptionList = local_c;
  return;
}


// ==== 100c2df0 FUN_100c2df0

void FUN_100c2df0(void)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_101f5738;
  local_c = ExceptionList;
  local_4 = 0xffffffff;
  ExceptionList = &local_c;
  FUN_100a8d50(DAT_103554c4 ^ (uint)&local_c);
  ExceptionList = local_c;
  return;
}


// ==== 100c2e40 FUN_100c2e40

void FUN_100c2e40(undefined4 param_1)

{
  undefined4 *in_ECX;
  undefined4 in_stack_00000014;
  undefined4 in_stack_00000018;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_101f579a;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_4 = 0;
  FUN_100c3d60(DAT_103554c4 ^ (uint)&stack0xffffffe4);
  local_4._0_1_ = 1;
  *in_ECX = Process::vftable;
  FUN_100a5e80();
  local_4._0_1_ = 2;
  FUN_1000c5d0();
  local_4 = CONCAT31(local_4._1_3_,4);
  in_ECX[0xe] = param_1;
  FString::operator=((FString *)(in_ECX + 0xf),(FString *)&stack0x00000008);
  in_ECX[0x12] = in_stack_00000014;
  in_ECX[0x13] = in_stack_00000018;
  local_4 = 0xffffffff;
  FString::~FString((FString *)&stack0x00000008);
  ExceptionList = local_c;
  return;
}


// ==== 100c2ef0 FUN_100c2ef0

void FUN_100c2ef0(void)

{
  uint uVar1;
  undefined4 *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_101f580e;
  local_c = ExceptionList;
  uVar1 = DAT_103554c4 ^ (uint)&stack0xffffffe0;
  ExceptionList = &local_c;
  *in_ECX = Process::vftable;
  local_4 = 2;
  if (in_ECX[0xe] != 0) {
    in_ECX[0xe] = 0;
  }
  FArray::Empty((FArray *)(in_ECX + 0x14),0xc,0);
  in_ECX[0x18] = 8;
  FUN_1000b930(uVar1);
  local_4._1_3_ = (uint3)((uint)local_4 >> 8);
  local_4._0_1_ = 1;
  FUN_1000c640();
  local_4 = (uint)local_4._1_3_ << 8;
  FString::~FString((FString *)(in_ECX + 0xf));
  local_4 = 0xffffffff;
  FUN_100c4640();
  ExceptionList = local_c;
  return;
}


// ==== 100c2fb0 FUN_100c2fb0

void FUN_100c2fb0(undefined4 param_1)

{
  undefined4 *in_ECX;
  undefined1 *in_stack_00000018;
  undefined1 auStack_2c [16];
  undefined4 uStack_1c;
  uint uStack_18;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_101f5851;
  local_c = ExceptionList;
  uStack_18 = DAT_103554c4 ^ (uint)&stack0xffffffec;
  ExceptionList = &local_c;
  local_4 = 0;
  uStack_1c = in_stack_00000018;
  in_stack_00000018 = auStack_2c;
  FUN_100a5fc0(&stack0x00000008);
  local_4 = local_4 & 0xffffff00;
  FUN_100c2e40(param_1);
  *in_ECX = DispatchProcess::vftable;
  local_4 = 0xffffffff;
  uStack_1c = 0x100c302b;
  FString::~FString((FString *)&stack0x00000008);
  ExceptionList = local_c;
  return;
}


// ==== 100c3040 FUN_100c3040

void FUN_100c3040(void)

{
  uint uVar1;
  undefined4 *in_ECX;
  undefined1 local_10 [4];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_101f5878;
  local_c = ExceptionList;
  uVar1 = DAT_103554c4 ^ (uint)local_10;
  ExceptionList = &local_c;
  *in_ECX = DispatchProcess::vftable;
  local_4 = 0xffffffff;
  FUN_100c2ef0(uVar1);
  ExceptionList = local_c;
  return;
}


// ==== 100c3090 FUN_100c3090

void FUN_100c3090(undefined4 param_1)

{
  undefined4 *in_ECX;
  undefined4 *puStack00000018;
  undefined1 auStack_34 [12];
  undefined4 uStack_28;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_101f58ef;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_4 = 0;
  puStack00000018 = (undefined4 *)auStack_34;
  FUN_100a5fc0(&stack0x00000008);
  local_4 = local_4 & 0xffffff00;
  FUN_100c2e40(param_1);
  local_4._0_1_ = 2;
  *in_ECX = NotificationProcess::vftable;
  FString::FString((FString *)(in_ECX + 0x19));
  local_4._0_1_ = 3;
  FString::FString((FString *)(in_ECX + 0x1d));
  local_4._0_1_ = 4;
  puStack00000018 = in_ECX + 0x21;
  FUN_1000c3d0();
  local_4 = CONCAT31(local_4._1_3_,6);
  in_ECX[0x1c] = 0;
  in_ECX[0x20] = 0;
  uStack_28 = 0x100c3140;
  FString::operator=((FString *)(in_ECX + 0x1d),(ushort *)&DAT_1022f9f8);
  local_4 = 0xffffffff;
  FString::~FString((FString *)&stack0x00000008);
  ExceptionList = local_c;
  return;
}


// ==== 100c3170 FUN_100c3170

void FUN_100c3170(void)

{
  int iVar1;
  uint uVar2;
  undefined4 *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_101f5946;
  local_c = ExceptionList;
  uVar2 = DAT_103554c4 ^ (uint)&stack0xffffffe4;
  ExceptionList = &local_c;
  *in_ECX = NotificationProcess::vftable;
  local_4 = 3;
  iVar1 = in_ECX[0x1c];
  if (iVar1 != 0) {
    FUN_100bdfd0(uVar2);
    (**(code **)(**(int **)GMalloc_exref + 8))(iVar1);
    in_ECX[0x1c] = 0;
  }
  FString::operator=((FString *)(in_ECX + 0x1d),(ushort *)&DAT_1022f9f8);
  local_4._1_3_ = (uint3)((uint)local_4 >> 8);
  local_4._0_1_ = 2;
  FUN_1000c440();
  local_4._0_1_ = 1;
  FString::~FString((FString *)(in_ECX + 0x1d));
  local_4 = (uint)local_4._1_3_ << 8;
  FString::~FString((FString *)(in_ECX + 0x19));
  local_4 = 0xffffffff;
  FUN_100c2ef0();
  ExceptionList = local_c;
  return;
}


// ==== 100c3240 FUN_100c3240

void FUN_100c3240(undefined4 param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_101f59f8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_4 = 0;
  switch(param_1) {
  case 1:
    FUN_100a8cd0(&stack0x00000008);
    local_4 = local_4 & 0xffffff00;
    FUN_100c12c0();
    break;
  case 2:
    FUN_100a8cd0(&stack0x00000008);
    local_4 = local_4 & 0xffffff00;
    FUN_100c14b0();
    break;
  case 4:
    FUN_100a8cd0(&stack0x00000008);
    local_4 = local_4 & 0xffffff00;
    FUN_100c15f0();
    break;
  case 5:
    FUN_100a8cd0(&stack0x00000008);
    local_4 = local_4 & 0xffffff00;
    FUN_100c18b0();
    break;
  case 6:
    FUN_100a8cd0(&stack0x00000008);
    local_4 = local_4 & 0xffffff00;
    FUN_100c2bd0();
    break;
  case 7:
    FUN_100a8cd0(&stack0x00000008);
    local_4 = local_4 & 0xffffff00;
    FUN_100bf170();
    break;
  case 8:
    FUN_100a8cd0(&stack0x00000008);
    local_4 = local_4 & 0xffffff00;
    FUN_100bf300();
    break;
  case 9:
    FUN_100a8cd0(&stack0x00000008);
    local_4 = local_4 & 0xffffff00;
    FUN_100c0910();
    break;
  case 10:
    FUN_100a8cd0(&stack0x00000008);
    local_4 = local_4 & 0xffffff00;
    FUN_100bf540();
    break;
  case 0xb:
    FUN_100a8cd0(&stack0x00000008);
    local_4 = local_4 & 0xffffff00;
    FUN_100bf7f0();
    break;
  case 0xc:
    FUN_100a8cd0(&stack0x00000008);
    local_4 = local_4 & 0xffffff00;
    FUN_100bf950();
    break;
  case 0xd:
    FUN_100a8cd0(&stack0x00000008);
    local_4 = local_4 & 0xffffff00;
    FUN_100bfbe0();
    break;
  case 0xe:
    FUN_100a8cd0(&stack0x00000008);
    local_4 = local_4 & 0xffffff00;
    FUN_100be2a0();
    break;
  case 0xf:
    FUN_100a8cd0(&stack0x00000008);
    local_4 = local_4 & 0xffffff00;
    FUN_100bfe00();
    break;
  case 0x10:
    FUN_100a8cd0(&stack0x00000008);
    local_4 = local_4 & 0xffffff00;
    FUN_100bffd0();
    break;
  case 0x11:
    FUN_100a8cd0(&stack0x00000008);
    local_4 = local_4 & 0xffffff00;
    FUN_100c0080();
  }
  local_4 = 0xffffffff;
  FUN_100a8d50();
  ExceptionList = local_c;
  return;
}


// ==== 100c3560 FUN_100c3560

void FUN_100c3560(void)

{
  FString *pFVar1;
  int iVar2;
  undefined4 uVar3;
  FString *pFVar4;
  FString *in_ECX;
  undefined4 uStack_bc;
  int local_9c;
  int aiStack_98 [2];
  FString *pFStack_90;
  FString *local_8c;
  FString aFStack_88 [4];
  undefined1 auStack_84 [8];
  FString local_7c [12];
  FString aFStack_70 [4];
  undefined1 auStack_6c [96];
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_101f5a8e;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_4 = 0;
  local_8c = in_ECX;
  iVar2 = FString::operator==((FString *)&stack0x00000004,(ushort *)&DAT_1024d2e0);
  if (iVar2 != 0) {
    FUN_1009ae20();
    local_4._0_1_ = 1;
    FUN_100a61c0();
    FUN_100a5d40();
    local_4._0_1_ = 2;
    FString::FString(local_7c);
    local_4 = CONCAT31(local_4._1_3_,3);
    FUN_100c4060();
    pFVar1 = in_ECX + 0x20;
    uStack_bc = 0x100c3618;
    iVar2 = FString::InStr(pFVar1,(ushort *)&DAT_1023d1c8,0);
    while (iVar2 != -1) {
      uStack_bc = 0x100c3637;
      local_8c = (FString *)(**(code **)**(undefined4 **)GMalloc_exref)();
      if (iVar2 == 0) {
        if (local_8c == (FString *)0x0) {
          uVar3 = 0;
        }
        else {
          uVar3 = FString::FString(local_8c,(ushort *)&DAT_1023d1c8);
        }
        iVar2 = FArray::Add((FArray *)aiStack_98,1,4);
        *(undefined4 *)(aiStack_98[0] + iVar2 * 4) = uVar3;
        FString::Len(pFVar1);
        pFVar4 = (FString *)FString::Right(pFVar1,(int)auStack_84);
        local_4._0_1_ = 5;
        FString::operator=(pFVar1,pFVar4);
        local_4 = CONCAT31(local_4._1_3_,3);
        FString::~FString(aFStack_88);
      }
      else {
        if (local_8c == (FString *)0x0) {
          uVar3 = 0;
        }
        else {
          uVar3 = FString::Left(pFVar1,(int)local_8c);
        }
        iVar2 = FArray::Add((FArray *)aiStack_98,1,4);
        *(undefined4 *)(aiStack_98[0] + iVar2 * 4) = uVar3;
        FString::Len(pFVar1);
        pFVar4 = (FString *)FString::Right(pFVar1,(int)auStack_6c);
        local_4._0_1_ = 7;
        FString::operator=(pFVar1,pFVar4);
        local_4 = CONCAT31(local_4._1_3_,3);
        FString::~FString(aFStack_70);
        in_ECX = local_8c;
      }
      uStack_bc = 0x100c3749;
      iVar2 = FString::InStr(pFVar1,(ushort *)&DAT_1023d1c8,0);
    }
    iVar2 = FString::Len(pFVar1);
    if (0 < iVar2) {
      uStack_bc = 0x100c3774;
      pFStack_90 = (FString *)(**(code **)**(undefined4 **)GMalloc_exref)();
      local_4._0_1_ = 8;
      if (pFStack_90 == (FString *)0x0) {
        uVar3 = 0;
      }
      else {
        uVar3 = FString::FString(pFStack_90,pFVar1);
      }
      local_4 = CONCAT31(local_4._1_3_,3);
      uStack_bc = 0x100c37a8;
      iVar2 = FArray::Add((FArray *)&local_9c,1,4);
      *(undefined4 *)(local_9c + iVar2 * 4) = uVar3;
    }
    pFStack_90 = (FString *)&uStack_bc;
    FUN_100ae930(&local_9c);
    local_4 = CONCAT31((int3)((uint)local_4 >> 8),3);
    FUN_100a9340();
    iVar2 = 0;
    if (0 < aiStack_98[0]) {
      do {
        pFVar1 = *(FString **)(local_9c + iVar2 * 4);
        if (pFVar1 != (FString *)0x0) {
          FString::~FString(pFVar1);
          (**(code **)(**(int **)GMalloc_exref + 8))();
        }
        iVar2 = iVar2 + 1;
      } while (iVar2 < aiStack_98[0]);
    }
    uStack_bc = 0x100c381c;
    FArray::Empty((FArray *)&local_9c,4,0);
    (**(code **)(*(int *)in_ECX + 0x18))();
    local_4._0_1_ = 2;
    FString::~FString(local_7c);
    local_4._0_1_ = 1;
    FUN_100a8800();
    local_4 = (uint)local_4._1_3_ << 8;
    FUN_100a9760();
  }
  local_4 = 0xffffffff;
  FUN_100a8d50();
  ExceptionList = local_c;
  return;
}


// ==== 100c38a0 FUN_100c38a0

void FUN_100c38a0(void)

{
  int iVar1;
  FString *pFVar2;
  undefined4 uStack_2a0;
  undefined1 *puStack_29c;
  undefined1 auStack_298 [40];
  undefined4 uStack_270;
  undefined1 *local_24c;
  FString local_248 [12];
  FString local_23c [12];
  FString local_230 [12];
  FString local_224 [12];
  ushort local_218 [260];
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_101f5ba2;
  local_c = ExceptionList;
  local_10 = DAT_103554c4 ^ (uint)&local_24c;
  ExceptionList = &local_c;
  local_4 = 0;
  local_24c = auStack_298;
  puStack_29c = &stack0x00000004;
  uStack_2a0 = 0x100c38fd;
  FUN_100a8cd0();
  local_4 = local_4 & 0xffffff00;
  puStack_29c = (undefined1 *)0x100c3914;
  FUN_100c3560();
  iVar1 = FString::operator==((FString *)&stack0x00000004,(ushort *)&DAT_10251d70);
  if (iVar1 == 0) {
    iVar1 = FString::operator==((FString *)&stack0x00000004,(ushort *)&DAT_10251d0c);
    if (iVar1 == 0) {
      iVar1 = FString::operator==((FString *)&stack0x00000004,(ushort *)&DAT_10255950);
      if (iVar1 != 0) {
        local_24c = auStack_298;
        puStack_29c = &stack0x00000004;
        uStack_2a0 = 0x100c3bdf;
        FUN_100a8cd0();
        local_4 = local_4 & 0xffffff00;
        puStack_29c = (undefined1 *)0x100c3bf6;
        FUN_100c01f0();
        goto LAB_100c3d12;
      }
      iVar1 = FString::operator==((FString *)&stack0x00000004,(ushort *)&DAT_10255960);
      if (iVar1 != 0) {
        local_24c = auStack_298;
        puStack_29c = &stack0x00000004;
        uStack_2a0 = 0x100c3c27;
        FUN_100a8cd0();
        local_4 = local_4 & 0xffffff00;
        puStack_29c = (undefined1 *)0x100c3c3e;
        FUN_100be0a0();
        goto LAB_100c3d12;
      }
      iVar1 = FString::operator==((FString *)&stack0x00000004,(ushort *)&DAT_10255958);
      if (iVar1 != 0) {
        local_24c = auStack_298;
        puStack_29c = &stack0x00000004;
        uStack_2a0 = 0x100c3c6f;
        FUN_100a8cd0();
        local_4 = local_4 & 0xffffff00;
        puStack_29c = (undefined1 *)0x100c3c86;
        FUN_100c0510();
        goto LAB_100c3d12;
      }
      iVar1 = FString::operator==((FString *)&stack0x00000004,(ushort *)&DAT_10255970);
      if (iVar1 == 0) goto LAB_100c3d12;
      FUN_100a6140();
      local_4._0_1_ = 0x13;
      FString::operator*(local_248);
      appSprintf(local_218,(ushort *)L"Has disconnected from NS Server %s\r\n");
      uStack_270 = 0x100c3ce9;
      local_24c = &stack0xfffffd98;
      FString::FString((FString *)&stack0xfffffd98,local_248);
      local_4._0_1_ = 0x13;
      FUN_100ab7b0();
    }
    else {
      FUN_100a6140();
      local_4._0_1_ = 0xc;
      local_24c = &stack0xfffffd98;
      uStack_270 = 0x100c3b36;
      FString::FString((FString *)&stack0xfffffd98,local_248);
      local_4._0_1_ = 0xd;
      FUN_100aa580();
      FUN_100abe10();
      local_4._0_1_ = 0xc;
      iVar1 = FUN_100ac3d0();
      if (iVar1 != 0) {
        uStack_270 = 0x100c3b79;
        local_24c = &stack0xfffffd98;
        FString::FString((FString *)&stack0xfffffd98,"FLN");
        local_4._0_1_ = 0xc;
        FUN_100ac140();
        local_24c = (undefined1 *)&uStack_2a0;
        FUN_100abb60(iVar1);
        local_4._0_1_ = 0xc;
        FUN_100a9f30();
      }
    }
  }
  else {
    FString::FString(local_248);
    local_4._0_1_ = 2;
    FString::FString(local_230);
    local_4._0_1_ = 3;
    FString::FString(local_224);
    local_4._0_1_ = 4;
    pFVar2 = (FString *)FUN_100a6140();
    local_4._0_1_ = 5;
    FString::operator=(local_248,pFVar2);
    local_4._0_1_ = 4;
    FString::~FString(local_23c);
    pFVar2 = (FString *)FUN_100a6140();
    local_4._0_1_ = 6;
    FString::operator=(local_230,pFVar2);
    local_4._0_1_ = 4;
    FString::~FString(local_23c);
    pFVar2 = (FString *)FUN_100a6140();
    local_4._0_1_ = 7;
    FString::operator=(local_224,pFVar2);
    local_4._0_1_ = 4;
    FString::~FString(local_23c);
    local_24c = &stack0xfffffd98;
    uStack_270 = 0x100c3a1e;
    FString::FString((FString *)&stack0xfffffd98,local_230);
    local_4._0_1_ = 8;
    FUN_100aa580();
    FUN_100abe10();
    local_4._0_1_ = 4;
    iVar1 = FUN_100ac3d0();
    if (iVar1 != 0) {
      uStack_270 = 0x100c3a5d;
      local_24c = &stack0xfffffd98;
      FString::FString((FString *)&stack0xfffffd98,local_248);
      local_4._0_1_ = 4;
      FUN_100ac140();
      uStack_270 = 0x100c3a87;
      local_24c = &stack0xfffffd98;
      FString::FString((FString *)&stack0xfffffd98,local_224);
      local_4._0_1_ = 4;
      FUN_100ac0e0();
      local_24c = (undefined1 *)&uStack_2a0;
      FUN_100abb60(iVar1);
      local_4._0_1_ = 4;
      FUN_100a9ea0();
    }
    local_4._0_1_ = 3;
    FString::~FString(local_224);
    local_4._0_1_ = 2;
    FString::~FString(local_230);
  }
  local_4 = (uint)local_4._1_3_ << 8;
  FString::~FString(local_248);
LAB_100c3d12:
  local_4 = 0xffffffff;
  FUN_100a8d50();
  ExceptionList = local_c;
  __security_check_cookie(local_10 ^ (uint)&local_24c);
  return;
}


// ==== 100c3d60 FUN_100c3d60

void FUN_100c3d60(void)

{
  undefined4 *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101f5be8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FString::FString((FString *)(in_ECX + 7));
  local_4 = 0;
  FString::FString((FString *)(in_ECX + 10));
  *in_ECX = 0;
  ExceptionList = local_c;
  return;
}


// ==== 100c3dd0 FUN_100c3dd0

void FUN_100c3dd0(undefined4 param_1,undefined4 param_2)

{
  u_short uVar1;
  SOCKET s;
  int iVar2;
  ulong uVar3;
  hostent *phVar4;
  SOCKET *in_ECX;
  FString local_120 [12];
  char local_114 [260];
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101f5c28;
  local_c = ExceptionList;
  local_10 = DAT_103554c4 ^ (uint)local_120;
  ExceptionList = &local_c;
  s = socket(2,1,6);
  *in_ECX = s;
  if (s != 0xffffffff) {
    iVar2 = WSAAsyncSelect(s,DAT_103663b8,0x50b,0x10);
    if (iVar2 == 0) {
      appMemset(local_114,0,0x104);
      FUN_100c74c0(param_1,local_114);
      uVar3 = inet_addr(local_114);
      if (uVar3 == 0xffffffff) {
        phVar4 = gethostbyname(local_114);
        in_ECX[6] = (SOCKET)phVar4;
        if (phVar4 == (hostent *)0x0) goto LAB_100c3e45;
        _memcpy(in_ECX + 3,*phVar4->h_addr_list,(int)phVar4->h_length);
      }
      else {
        in_ECX[3] = uVar3;
      }
      ((sockaddr *)(in_ECX + 2))->sa_family = 2;
      uVar1 = htons((u_short)param_2);
      *(u_short *)((int)in_ECX + 10) = uVar1;
      FString::Printf((ushort *)local_120,L"Connect: Host-%s, PortNo-%d",param_1,param_2);
      local_4 = 0xffffffff;
      FString::~FString(local_120);
      iVar2 = connect(*in_ECX,(sockaddr *)(in_ECX + 2),0x10);
      if ((iVar2 == -1) && (iVar2 = WSAGetLastError(), iVar2 != 0x2733)) {
        closesocket(*in_ECX);
      }
      else {
        FString::Printf((ushort *)local_120,L"Connect: Succeeded hSock-%d",*in_ECX);
        local_4 = 0xffffffff;
        FString::~FString(local_120);
      }
    }
    else {
      WSAGetLastError();
    }
  }
LAB_100c3e45:
  ExceptionList = local_c;
  __security_check_cookie(local_10 ^ (uint)local_120);
  return;
}


// ==== 100c3f70 FUN_100c3f70

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

void FUN_100c3f70(void)

{
  int iVar1;
  int iVar2;
  SOCKET *in_ECX;
  undefined1 auStack_30c8 [3];
  char local_30c5;
  char local_30c4 [4160];
  ushort local_2084 [4160];
  uint local_4;
  
  local_4 = DAT_103554c4 ^ (uint)auStack_30c8;
  appMemset(local_30c4,0,0x1040);
  appMemset(local_2084,0,0x2080);
  iVar2 = recv(*in_ECX,&local_30c5,1,0);
  iVar1 = 0;
  while (iVar2 != -1) {
    if (iVar2 == 0) {
      __security_check_cookie(local_4 ^ (uint)auStack_30c8);
      return;
    }
    local_30c4[iVar1] = local_30c5;
    local_30c4[iVar1 + 1] = '\0';
    if (local_30c5 == '\n') break;
    iVar2 = recv(*in_ECX,&local_30c5,1,0);
    iVar1 = iVar1 + 1;
  }
  FUN_100c7500(local_30c4,local_2084);
  FString::operator=((FString *)(in_ECX + 7),local_2084);
  __security_check_cookie(local_4 ^ (uint)auStack_30c8);
  return;
}


// ==== 100c4060 FUN_100c4060

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

void FUN_100c4060(int param_1)

{
  SOCKET *in_ECX;
  char local_30c4 [4160];
  ushort local_2084 [4160];
  uint local_4;
  
  local_4 = DAT_103554c4 ^ (uint)local_30c4;
  appMemset(local_30c4,0,0x1040);
  appMemset(local_2084,0,0x2080);
  recv(*in_ECX,local_30c4,param_1,0);
  local_30c4[param_1] = '\0';
  FUN_100c7500(local_30c4,local_2084);
  FString::operator=((FString *)(in_ECX + 7),local_2084);
  __security_check_cookie(local_4 ^ (uint)local_30c4);
  return;
}


// ==== 100c4110 FUN_100c4110

void FUN_100c4110(void)

{
  SOCKET *in_ECX;
  FString local_18 [12];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101f5c69;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FString::Printf((ushort *)local_18,L"End: CloseSocket hSock-%d",*in_ECX,
                  DAT_103554c4 ^ (uint)&stack0xffffffe4);
  local_4 = 0xffffffff;
  FString::~FString(local_18);
  if (*in_ECX != 0) {
    closesocket(*in_ECX);
    *in_ECX = 0;
  }
  ExceptionList = local_c;
  return;
}


// ==== 100c4190 FUN_100c4190

void FUN_100c4190(void)

{
  FString *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_101f5cb7;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_4 = 1;
  FString::FString(in_ECX);
  local_4._0_1_ = 2;
  FString::FString(in_ECX + 0xc);
  local_4._0_1_ = 3;
  FString::operator=(in_ECX,(FString *)&stack0x00000004);
  FString::operator=(in_ECX + 0xc,(FString *)&stack0x00000010);
  local_4 = (uint)local_4._1_3_ << 8;
  FString::~FString((FString *)&stack0x00000004);
  local_4 = 0xffffffff;
  FString::~FString((FString *)&stack0x00000010);
  ExceptionList = local_c;
  return;
}


// ==== 100c4230 FUN_100c4230

void FUN_100c4230(int param_1,int param_2)

{
  short *psVar1;
  short sVar2;
  short *psVar3;
  
  sVar2 = *(short *)(param_1 + param_2 * 2);
  psVar1 = (short *)(param_1 + param_2 * 2);
  if (sVar2 != 0) {
    psVar3 = psVar1 + -param_2;
    do {
      psVar1 = psVar1 + 1;
      *psVar3 = sVar2;
      sVar2 = *psVar1;
      psVar3 = psVar3 + 1;
    } while (sVar2 != 0);
  }
  psVar1[-param_2] = 0;
  return;
}


// ==== 100c4270 FUN_100c4270

void FUN_100c4270(ushort *param_1,ushort *param_2)

{
  wchar_t *_Str;
  ushort *puVar1;
  int iVar2;
  ushort *puVar3;
  int iVar4;
  HWND pHVar5;
  wchar_t *pwVar6;
  FString *in_ECX;
  bool bVar7;
  int iVar8;
  undefined4 uVar9;
  ushort *puVar10;
  undefined4 uVar11;
  undefined4 local_32c;
  ushort *local_328;
  ushort *local_324;
  FString *local_320;
  ushort *local_31c;
  int local_318;
  uint local_314;
  int local_310;
  ushort local_30c [128];
  ushort local_20c [260];
  uint local_4;
  
  local_4 = DAT_103554c4 ^ (uint)&local_32c;
  local_31c = param_2;
  local_320 = in_ECX;
  _Str = _malloc(0x4000);
  appMemset(_Str,0,4);
  puVar1 = FString::operator*(in_ECX);
  appStrcpy(local_30c,puVar1);
  puVar1 = appStrchr(local_30c,0x40);
  if (puVar1 != (ushort *)0x0) {
    *puVar1 = 0;
    FUN_101c3b59(_Str,0x2000,L"%s%%40%s",local_30c,puVar1 + 1);
    appStrcpy(local_30c,(ushort *)_Str);
  }
  puVar1 = appStrstr(param_1,(ushort *)&DAT_102583fc);
  if (puVar1 != (ushort *)0x0) {
    param_1 = puVar1 + 3;
  }
  iVar2 = appStrlen(param_1);
  local_328 = _malloc((iVar2 + 1) * 2);
  appStrncpy(local_328,param_1,iVar2 + 1);
  puVar1 = appStrchr(local_328,0x2f);
  local_324 = (ushort *)0x0;
  if (puVar1 == (ushort *)0x0) {
    puVar1 = &DAT_1023d810;
  }
  else {
    iVar2 = appStrlen(puVar1);
    local_324 = _malloc((iVar2 + 1) * 2);
    appStrncpy(local_324,puVar1,iVar2 + 1);
    *puVar1 = 0;
    puVar1 = local_324;
  }
  local_318 = InternetOpenW(L"MSMSGS",1,0,0,0x880300);
  if (((local_318 != 0) &&
      (local_310 = InternetConnectW(local_318,local_328,0x1bb,&DAT_1022f9f8,&DAT_1022f9f8,3,0x280000
                                    ,0), local_310 != 0)) &&
     (iVar2 = HttpOpenRequestW(local_310,&DAT_102583e4,puVar1,&DAT_1022f9f8,&DAT_1022f9f8,0,
                               0x84e8f000,0), puVar1 = local_31c, iVar2 != 0)) {
    if (local_31c == (ushort *)0x0) {
      *_Str = L'\0';
    }
    else {
      FUN_101c3b59(_Str,0x2000,
                   L"Authorization: Passport1.4 OrgVerb=GET,OrgURL=http%%3A%%2F%%2Fmessenger%%2Emsn%%2Ecom,sign-in=%s,pwd="
                   ,local_30c);
      appMemset(local_20c,0,0x208);
      puVar10 = local_20c;
      puVar3 = FString::operator*(local_320 + 0xc);
      FUN_100c7570(puVar3,puVar10);
      appStrcat((ushort *)_Str,local_20c);
      appStrcat((ushort *)_Str,(ushort *)&DAT_10246d48);
      appStrcat((ushort *)_Str,puVar1);
    }
    do {
      uVar11 = 0;
      uVar9 = 0;
      iVar4 = appStrlen((ushort *)_Str);
      iVar4 = HttpSendRequestW(iVar2,_Str,iVar4,uVar9,uVar11);
      if (iVar4 == 0) goto LAB_100c45dc;
      local_32c = 4;
      HttpQueryInfoW(iVar2,0x20000013,&local_314,&local_32c,0);
      if (local_314 < 0x2f08) {
        if (local_314 < 0x2f05) {
          if (local_314 == 200) {
            *_Str = L'\0';
            local_32c = 0x2000;
            goto LAB_100c4548;
          }
          if (local_314 == 0x12e) {
            local_32c = 0x2000;
            HttpQueryInfoW(iVar2,0x21,_Str,&local_32c,0);
            FUN_100c4270(_Str,local_31c);
            goto LAB_100c45dc;
          }
          bVar7 = local_314 == 0x2eee;
LAB_100c4504:
          if (!bVar7) break;
        }
      }
      else if (local_314 != 0x2f0b) {
        bVar7 = local_314 == 0x2f0d;
        goto LAB_100c4504;
      }
      uVar11 = 0;
      uVar9 = 7;
      iVar8 = iVar2;
      pHVar5 = GetDesktopWindow();
      iVar4 = InternetErrorDlg(pHVar5,iVar8,iVar4,uVar9,uVar11);
    } while (iVar4 != 0x4c7);
    local_32c = 0x2000;
    iVar4 = HttpQueryInfoW(iVar2,0x14,_Str,&local_32c,0);
    if (iVar4 != 0) {
LAB_100c4548:
      HttpQueryInfoW(iVar2,0x16,_Str,&local_32c,0);
      pwVar6 = __wcsdup(_Str);
      InternetCloseHandle(iVar2);
      InternetCloseHandle(local_310);
      InternetCloseHandle(local_318);
      _free(_Str);
      _free(local_328);
      if (local_324 != (ushort *)0x0) {
        _free(local_324);
      }
      if ((pwVar6 != (wchar_t *)0x0) &&
         (puVar1 = appStrstr((ushort *)pwVar6,(ushort *)L"from-PP"), puVar1 != (ushort *)0x0)) {
        FUN_100c4230(pwVar6,((int)puVar1 - (int)pwVar6 >> 1) + 9);
        puVar1 = appStrchr((ushort *)pwVar6,0x27);
        if (puVar1 != (ushort *)0x0) {
          *puVar1 = 0;
        }
      }
    }
  }
LAB_100c45dc:
  __security_check_cookie(local_4 ^ (uint)&local_32c);
  return;
}


// ==== 100c4640 FUN_100c4640

void FUN_100c4640(void)

{
  int in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_101f5cf8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_4 = 1;
  FUN_100c4110(DAT_103554c4 ^ (uint)&stack0xffffffec);
  local_4 = local_4 & 0xffffff00;
  FString::~FString((FString *)(in_ECX + 0x28));
  local_4 = 0xffffffff;
  FString::~FString((FString *)(in_ECX + 0x1c));
  ExceptionList = local_c;
  return;
}


// ==== 100c46b0 FUN_100c46b0

wchar_t * FUN_100c46b0(ushort *param_1)

{
  wchar_t *_Str;
  ushort *puVar1;
  int iVar2;
  ushort *puVar3;
  int iVar4;
  int iVar5;
  wchar_t *pwVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 local_14;
  ushort *local_10;
  int local_8;
  int local_4;
  
  _Str = _malloc(0x4000);
  appMemset(_Str,0,4);
  puVar1 = appStrstr(param_1,(ushort *)&DAT_102583fc);
  if (puVar1 != (ushort *)0x0) {
    param_1 = puVar1 + 3;
  }
  iVar2 = appStrlen(param_1);
  puVar1 = _malloc((iVar2 + 1) * 2);
  appStrncpy(puVar1,param_1,iVar2 + 1);
  puVar3 = appStrchr(puVar1,0x2f);
  local_10 = (ushort *)0x0;
  if (puVar3 == (ushort *)0x0) {
    puVar3 = &DAT_1023d810;
  }
  else {
    iVar2 = appStrlen(puVar3);
    local_10 = _malloc((iVar2 + 1) * 2);
    appStrncpy(local_10,puVar3,iVar2 + 1);
    *puVar3 = 0;
    puVar3 = local_10;
  }
  local_4 = InternetOpenW(L"MSMSGS",1,0,0,0x880300);
  if (local_4 == 0) {
    return (wchar_t *)0x0;
  }
  iVar2 = InternetConnectW(local_4,puVar1,0x1bb,&DAT_1022f9f8,&DAT_1022f9f8,3,0x280000,0);
  if (iVar2 == 0) {
    return (wchar_t *)0x0;
  }
  iVar4 = HttpOpenRequestW(iVar2,&DAT_102583e4,puVar3,0,&DAT_1022f9f8,0,0x84e8f000,0);
  if (iVar4 == 0) {
    return (wchar_t *)0x0;
  }
  uVar8 = 0;
  uVar7 = 0;
  iVar5 = appStrlen((ushort *)_Str);
  iVar5 = HttpSendRequestW(iVar4,_Str,iVar5,uVar7,uVar8);
  if (iVar5 == 0) {
    return (wchar_t *)0x0;
  }
  local_14 = 4;
  HttpQueryInfoW(iVar4,0x20000013,&local_8,&local_14,0);
  local_14 = 0x2000;
  if (local_8 != 200) {
    if (local_8 == 0x12e) {
      HttpQueryInfoW(iVar4,0x21,_Str,&local_14,0);
      pwVar6 = (wchar_t *)FUN_100c46b0(_Str);
      goto LAB_100c487a;
    }
    iVar5 = HttpQueryInfoW(iVar4,0x14,_Str,&local_14,0);
    if (iVar5 == 0) {
      return (wchar_t *)0x0;
    }
  }
  HttpQueryInfoW(iVar4,0x16,_Str,&local_14,0);
  pwVar6 = __wcsdup(_Str);
LAB_100c487a:
  InternetCloseHandle(iVar4);
  InternetCloseHandle(iVar2);
  InternetCloseHandle(local_4);
  puVar3 = appStrstr((ushort *)pwVar6,(ushort *)L"DALogin=");
  if (puVar3 == (ushort *)0x0) {
    return (wchar_t *)0x0;
  }
  appStrcpy((ushort *)pwVar6,(ushort *)L"https://");
  FUN_100c4230(pwVar6 + 8,(int)puVar3 - (int)pwVar6 >> 1);
  puVar3 = appStrchr((ushort *)pwVar6,0x2c);
  if (puVar3 != (ushort *)0x0) {
    *puVar3 = 0;
  }
  _free(_Str);
  _free(puVar1);
  if (local_10 != (ushort *)0x0) {
    _free(local_10);
  }
  return pwVar6;
}


// ==== 100c4910 FUN_100c4910

bool FUN_100c4910(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int *in_ECX;
  
  iVar1 = FUN_101824f0(param_1,param_2,param_3);
  if (iVar1 != 0) {
    return true;
  }
  if (param_1 == 0x203) {
    iVar1 = (**(code **)(*in_ECX + 0x1bc))(param_2,param_3);
    return iVar1 != 0;
  }
  return false;
}


// ==== 100c4970 FUN_100c4970

undefined4 FUN_100c4970(void)

{
  int in_ECX;
  
  if (*(int *)(in_ECX + 0x238) != 0) {
    *(undefined4 *)(in_ECX + 0x238) = 0;
  }
  FUN_10043b60();
  return 1;
}


// ==== 100c4990 FUN_100c4990

undefined4 FUN_100c4990(void)

{
  int in_ECX;
  
  if (*(int *)(in_ECX + 0x22c) != 0) {
    *(undefined4 *)(in_ECX + 0x22c) = 0;
  }
  FUN_10043b60();
  return 1;
}


// ==== 100c49b0 FUN_100c49b0

undefined4 FUN_100c49b0(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int in_ECX;
  
  iVar1 = *(int *)(*(int *)(in_ECX + 0xb8) + 0xc);
  if ((iVar1 != 0) && (*(int *)(iVar1 + 4) != 0)) {
    (**(code **)(**(int **)(*(int *)(*(int *)(in_ECX + 0xb8) + 0xc) + 4) + 0x68))
              (0x203,param_1,param_2);
    return 1;
  }
  return 0;
}


// ==== 100c4a00 FUN_100c4a00

void FUN_100c4a00(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  UObject::StaticAllocateObject
            (&DAT_1037fdb8,param_2,param_3,param_4,0,*(undefined4 *)GError_exref,0,0);
  return;
}


// ==== 100c4a30 FUN_100c4a30

undefined4 FUN_100c4a30(void)

{
  UPackage *pUVar1;
  UObject *pUVar2;
  int iVar3;
  undefined4 uVar4;
  int in_ECX;
  undefined2 in_FPUControlWord;
  undefined4 local_c;
  longlong local_8;
  
  FUN_100440c0();
  FName::FName((FName *)&local_c,0);
  pUVar1 = UObject::GetTransientPackage();
  pUVar2 = UObject::StaticAllocateObject
                     (&DAT_1037c4a0,pUVar1,local_c,0,0,*(undefined4 *)GError_exref,0,0);
  if (pUVar2 == (UObject *)0x0) {
    iVar3 = 0;
  }
  else {
    iVar3 = FUN_100b0dd0();
  }
  *(int *)(in_ECX + 0x238) = iVar3;
  *(undefined4 *)(iVar3 + 0x1cc) = 0xa00;
  local_8._0_4_ = (undefined4)(longlong)ROUND(*(float *)(in_ECX + 0x8c));
  uVar4 = (undefined4)local_8;
  local_c = CONCAT22(local_c._2_2_,in_FPUControlWord);
  local_8 = (longlong)ROUND(*(float *)(in_ECX + 0x88) - 16.0);
  (**(code **)(**(int **)(in_ECX + 0x238) + 0xc0))(0,0,(undefined4)local_8,uVar4,0,0,3);
  uVar4 = FUN_10060d40(*(undefined4 *)(in_ECX + 0x238),0x22);
  FUN_1005c1e0(uVar4);
  return 1;
}


// ==== 100c4b30 FUN_100c4b30

undefined4 FUN_100c4b30(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101f5d20;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_10002f40(*(undefined4 *)(in_ECX + 0x80),*(undefined4 *)(in_ECX + 0x84));
  uVar1 = FUN_101c19e0();
  uVar2 = FUN_101c19e0(uVar1);
  FUN_10021df0(*(undefined4 *)(in_ECX + 0x80),*(undefined4 *)(in_ECX + 0x84),uVar2,uVar1);
  FUN_10043dd0(*(int *)(*(int *)(in_ECX + 0x238) + 0x2f0) + 0x15);
  FUN_100212e0();
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  ExceptionList = local_10;
  return 1;
}


// ==== 100c4be4 Catch@100c4be4

void Catch_100c4be4(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 100c4bf8 Catch@100c4bf8

void Catch_100c4bf8(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"MsnTreeCtrl::OnPaint");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100c4c20 FUN_100c4c20

void FUN_100c4c20(void)

{
  int in_ECX;
  int iStack_10;
  int iStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  (**(code **)(**(int **)(in_ECX + 0x238) + 0x1fc))();
  uStack_8 = 0;
  uStack_4 = 0;
  iStack_c = 0;
  iStack_10 = 0;
  FUN_1005d0a0(&iStack_10);
  (**(code **)(**(int **)(in_ECX + 0x238) + 0x148))(-iStack_10,-iStack_c,0);
  *(undefined4 *)(*(int *)(in_ECX + 0x238) + 0x2f4) = 0;
  *(undefined4 *)(in_ECX + 0x1d0) = 0;
  *(undefined4 *)(in_ECX + 0x1cc) = 0;
  *(undefined4 *)(in_ECX + 0x1d8) = 0;
  *(undefined4 *)(in_ECX + 0x1d4) = 0;
  *(undefined4 *)(in_ECX + 0x1e4) = 0;
  *(undefined4 *)(*(int *)(in_ECX + 0x1fc) + 0x2dc) = 0;
  return;
}


// ==== 100c4cc0 FUN_100c4cc0

undefined4 FUN_100c4cc0(void)

{
  int *piVar1;
  int in_ECX;
  
  if (*(int *)(in_ECX + 0x1d0) < 0) {
    *(undefined4 *)(in_ECX + 0x1d4) = *(undefined4 *)(in_ECX + 0x1cc);
    *(undefined4 *)(in_ECX + 0x1d8) = *(undefined4 *)(in_ECX + 0x1d0);
    *(int *)(in_ECX + 0x1d0) = *(int *)(in_ECX + 0x1d0) + *(int *)(in_ECX + 0x1e0);
    if (0 < *(int *)(in_ECX + 0x1d0)) {
      *(undefined4 *)(in_ECX + 0x1d0) = 0;
    }
    thunk_FUN_10049b50(-*(int *)(in_ECX + 0x1d0));
    *(int *)(in_ECX + 0x1d4) = *(int *)(in_ECX + 0x1d4) - *(int *)(in_ECX + 0x1cc);
    *(int *)(in_ECX + 0x1d8) = *(int *)(in_ECX + 0x1d8) - *(int *)(in_ECX + 0x1d0);
    (**(code **)(**(int **)(in_ECX + 0x238) + 0x148))(0,*(undefined4 *)(in_ECX + 0x1e0),0);
    piVar1 = (int *)(*(int *)(in_ECX + 0x238) + 0x2f4);
    *piVar1 = *piVar1 - *(int *)(in_ECX + 0x1e0);
  }
  return 1;
}


// ==== 100c4d70 FUN_100c4d70

undefined4 FUN_100c4d70(void)

{
  int *piVar1;
  int in_ECX;
  
  if (*(int *)(in_ECX + 0x1e4) < *(int *)(in_ECX + 0x1d0)) {
    *(undefined4 *)(in_ECX + 0x1d4) = *(undefined4 *)(in_ECX + 0x1cc);
    *(undefined4 *)(in_ECX + 0x1d8) = *(undefined4 *)(in_ECX + 0x1d0);
    *(int *)(in_ECX + 0x1d0) = *(int *)(in_ECX + 0x1d0) - *(int *)(in_ECX + 0x1e0);
    if (*(int *)(in_ECX + 0x1d0) < *(int *)(in_ECX + 0x1e4)) {
      *(int *)(in_ECX + 0x1d0) = *(int *)(in_ECX + 0x1e4);
    }
    thunk_FUN_10049b50(-*(int *)(in_ECX + 0x1d0));
    *(int *)(in_ECX + 0x1d4) = *(int *)(in_ECX + 0x1d4) - *(int *)(in_ECX + 0x1cc);
    *(int *)(in_ECX + 0x1d8) = *(int *)(in_ECX + 0x1d8) - *(int *)(in_ECX + 0x1d0);
    (**(code **)(**(int **)(in_ECX + 0x238) + 0x148))(0,-*(int *)(in_ECX + 0x1e0),0);
    piVar1 = (int *)(*(int *)(in_ECX + 0x238) + 0x2f4);
    *piVar1 = *piVar1 + *(int *)(in_ECX + 0x1e0);
  }
  return 1;
}


// ==== 100c4e30 FUN_100c4e30

undefined4 FUN_100c4e30(int param_1)

{
  int *piVar1;
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 0x1d4) = *(undefined4 *)(in_ECX + 0x1cc);
  *(undefined4 *)(in_ECX + 0x1d8) = *(undefined4 *)(in_ECX + 0x1d0);
  *(int *)(in_ECX + 0x1d0) = -param_1;
  *(int *)(in_ECX + 0x1d4) = *(int *)(in_ECX + 0x1d4) - *(int *)(in_ECX + 0x1cc);
  *(int *)(in_ECX + 0x1d8) = *(int *)(in_ECX + 0x1d8) - *(int *)(in_ECX + 0x1d0);
  (**(code **)(**(int **)(in_ECX + 0x238) + 0x148))(0,-*(int *)(in_ECX + 0x1d8),0);
  piVar1 = (int *)(*(int *)(in_ECX + 0x238) + 0x2f4);
  *piVar1 = *piVar1 + *(int *)(in_ECX + 0x1d8);
  return 1;
}


// ==== 100c4eb0 FUN_100c4eb0

undefined4 FUN_100c4eb0(undefined4 param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  short sVar4;
  int in_ECX;
  
  sVar4 = (short)((uint)param_1 >> 0x10) / 0x78;
  *(undefined4 *)(in_ECX + 0x1d4) = *(undefined4 *)(in_ECX + 0x1cc);
  *(undefined4 *)(in_ECX + 0x1d8) = *(undefined4 *)(in_ECX + 0x1d0);
  if (sVar4 < 1) {
    iVar2 = *(int *)(in_ECX + 0x1e4);
    if (*(int *)(in_ECX + 0x1d0) <= iVar2) goto LAB_100c4f62;
    iVar3 = *(int *)(in_ECX + 0x1d0) + (int)sVar4 * *(int *)(in_ECX + 0x1e0) * 3;
    *(int *)(in_ECX + 0x1d0) = iVar3;
    if (iVar3 < iVar2) {
      *(int *)(in_ECX + 0x1d0) = iVar2;
    }
  }
  else {
    if (-1 < *(int *)(in_ECX + 0x1d0)) goto LAB_100c4f62;
    iVar2 = *(int *)(in_ECX + 0x1d0) + (int)sVar4 * *(int *)(in_ECX + 0x1e0) * 3;
    *(int *)(in_ECX + 0x1d0) = iVar2;
    if (0 < iVar2) {
      *(undefined4 *)(in_ECX + 0x1d0) = 0;
    }
  }
  thunk_FUN_10049b50(-*(int *)(in_ECX + 0x1d0));
LAB_100c4f62:
  *(int *)(in_ECX + 0x1d4) = *(int *)(in_ECX + 0x1d4) - *(int *)(in_ECX + 0x1cc);
  *(int *)(in_ECX + 0x1d8) = *(int *)(in_ECX + 0x1d8) - *(int *)(in_ECX + 0x1d0);
  (**(code **)(**(int **)(in_ECX + 0x238) + 0x148))(0,-*(int *)(in_ECX + 0x1d8),0);
  piVar1 = (int *)(*(int *)(in_ECX + 0x238) + 0x2f4);
  *piVar1 = *piVar1 + *(int *)(in_ECX + 0x1d8);
  return 1;
}


// ==== 100c4fc0 FUN_100c4fc0

int FUN_100c4fc0(int param_1)

{
  int iVar1;
  int in_ECX;
  
  iVar1 = FUN_10055550(*(undefined4 *)(*(int *)(in_ECX + 0x238) + 0x2d8));
  while( true ) {
    if (iVar1 == 0) {
      return 0;
    }
    if (*(int *)(iVar1 + 4) == param_1) break;
    iVar1 = FUN_100554f0(iVar1);
  }
  return iVar1;
}


// ==== 100c5000 FUN_100c5000

int FUN_100c5000(ushort *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  iVar1 = appStrcmp((ushort *)(param_2 + 0x1810),param_1);
  if (iVar1 != 0) {
    iVar1 = 0;
    if (0 < *(int *)(param_2 + 0x2864)) {
      do {
        iVar2 = FUN_100c5000(param_1,*(undefined4 *)(*(int *)(param_2 + 0x2860) + iVar1 * 4));
        if (iVar2 != 0) {
          return iVar2;
        }
        iVar1 = iVar1 + 1;
      } while (iVar1 < *(int *)(param_2 + 0x2864));
    }
    return 0;
  }
  return param_2;
}


// ==== 100c5080 FUN_100c5080

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

void FUN_100c5080(void)

{
  int in_ECX;
  undefined4 uStack_2868;
  undefined1 local_2860 [10324];
  uint uStack_c;
  uint local_4;
  
  local_4 = DAT_103554c4 ^ (uint)local_2860;
  uStack_2868 = 0x100c50a4;
  FUN_10055240();
  uStack_2868 = 0;
  (**(code **)(**(int **)(in_ECX + 0x238) + 0x1f8))(local_2860);
  __security_check_cookie(uStack_c ^ (uint)&uStack_2868);
  return;
}


// ==== 100c50e0 FUN_100c50e0

undefined4 FUN_100c50e0(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101f5d40;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_10002f40(*(undefined4 *)(in_ECX + 0x80),*(undefined4 *)(in_ECX + 0x84));
  uVar1 = FUN_101c19e0();
  uVar2 = FUN_101c19e0(uVar1);
  FUN_10021df0(*(undefined4 *)(in_ECX + 0x80),*(undefined4 *)(in_ECX + 0x84),uVar2,uVar1);
  FUN_10043dd0(*(int *)(*(int *)(in_ECX + 0x22c) + 0x2f0) + 0x15);
  FUN_100212e0();
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  ExceptionList = local_10;
  return 1;
}


// ==== 100c5194 Catch@100c5194

void Catch_100c5194(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 100c51a8 Catch@100c51a8

void Catch_100c51a8(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"L2FriendTreeCtrl::OnPaint");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100c51d0 FUN_100c51d0

void FUN_100c51d0(void)

{
  int in_ECX;
  int iStack_10;
  int iStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  (**(code **)(**(int **)(in_ECX + 0x22c) + 0x1fc))();
  uStack_8 = 0;
  uStack_4 = 0;
  iStack_c = 0;
  iStack_10 = 0;
  FUN_1005d0a0(&iStack_10);
  (**(code **)(**(int **)(in_ECX + 0x22c) + 0x148))(-iStack_10,-iStack_c,0);
  *(undefined4 *)(*(int *)(in_ECX + 0x22c) + 0x2f4) = 0;
  *(undefined4 *)(in_ECX + 0x1d0) = 0;
  *(undefined4 *)(in_ECX + 0x1cc) = 0;
  *(undefined4 *)(in_ECX + 0x1d8) = 0;
  *(undefined4 *)(in_ECX + 0x1d4) = 0;
  *(undefined4 *)(in_ECX + 0x1e4) = 0;
  *(undefined4 *)(*(int *)(in_ECX + 0x1fc) + 0x2dc) = 0;
  return;
}


// ==== 100c5270 FUN_100c5270

undefined4 FUN_100c5270(void)

{
  int *piVar1;
  int in_ECX;
  
  if (*(int *)(in_ECX + 0x1d0) < 0) {
    *(undefined4 *)(in_ECX + 0x1d4) = *(undefined4 *)(in_ECX + 0x1cc);
    *(undefined4 *)(in_ECX + 0x1d8) = *(undefined4 *)(in_ECX + 0x1d0);
    *(int *)(in_ECX + 0x1d0) = *(int *)(in_ECX + 0x1d0) + *(int *)(in_ECX + 0x1e0);
    if (0 < *(int *)(in_ECX + 0x1d0)) {
      *(undefined4 *)(in_ECX + 0x1d0) = 0;
    }
    thunk_FUN_10049b50(-*(int *)(in_ECX + 0x1d0));
    *(int *)(in_ECX + 0x1d4) = *(int *)(in_ECX + 0x1d4) - *(int *)(in_ECX + 0x1cc);
    *(int *)(in_ECX + 0x1d8) = *(int *)(in_ECX + 0x1d8) - *(int *)(in_ECX + 0x1d0);
    (**(code **)(**(int **)(in_ECX + 0x22c) + 0x148))(0,*(undefined4 *)(in_ECX + 0x1e0),0);
    piVar1 = (int *)(*(int *)(in_ECX + 0x22c) + 0x2f4);
    *piVar1 = *piVar1 - *(int *)(in_ECX + 0x1e0);
  }
  return 1;
}


// ==== 100c5320 FUN_100c5320

undefined4 FUN_100c5320(void)

{
  int *piVar1;
  int in_ECX;
  
  if (*(int *)(in_ECX + 0x1e4) < *(int *)(in_ECX + 0x1d0)) {
    *(undefined4 *)(in_ECX + 0x1d4) = *(undefined4 *)(in_ECX + 0x1cc);
    *(undefined4 *)(in_ECX + 0x1d8) = *(undefined4 *)(in_ECX + 0x1d0);
    *(int *)(in_ECX + 0x1d0) = *(int *)(in_ECX + 0x1d0) - *(int *)(in_ECX + 0x1e0);
    if (*(int *)(in_ECX + 0x1d0) < *(int *)(in_ECX + 0x1e4)) {
      *(int *)(in_ECX + 0x1d0) = *(int *)(in_ECX + 0x1e4);
    }
    thunk_FUN_10049b50(-*(int *)(in_ECX + 0x1d0));
    *(int *)(in_ECX + 0x1d4) = *(int *)(in_ECX + 0x1d4) - *(int *)(in_ECX + 0x1cc);
    *(int *)(in_ECX + 0x1d8) = *(int *)(in_ECX + 0x1d8) - *(int *)(in_ECX + 0x1d0);
    (**(code **)(**(int **)(in_ECX + 0x22c) + 0x148))(0,-*(int *)(in_ECX + 0x1e0),0);
    piVar1 = (int *)(*(int *)(in_ECX + 0x22c) + 0x2f4);
    *piVar1 = *piVar1 + *(int *)(in_ECX + 0x1e0);
  }
  return 1;
}


// ==== 100c53e0 FUN_100c53e0

undefined4 FUN_100c53e0(int param_1)

{
  int *piVar1;
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 0x1d4) = *(undefined4 *)(in_ECX + 0x1cc);
  *(undefined4 *)(in_ECX + 0x1d8) = *(undefined4 *)(in_ECX + 0x1d0);
  *(int *)(in_ECX + 0x1d0) = -param_1;
  *(int *)(in_ECX + 0x1d4) = *(int *)(in_ECX + 0x1d4) - *(int *)(in_ECX + 0x1cc);
  *(int *)(in_ECX + 0x1d8) = *(int *)(in_ECX + 0x1d8) - *(int *)(in_ECX + 0x1d0);
  (**(code **)(**(int **)(in_ECX + 0x22c) + 0x148))(0,-*(int *)(in_ECX + 0x1d8),0);
  piVar1 = (int *)(*(int *)(in_ECX + 0x22c) + 0x2f4);
  *piVar1 = *piVar1 + *(int *)(in_ECX + 0x1d8);
  return 1;
}


// ==== 100c5460 FUN_100c5460

undefined4 FUN_100c5460(undefined4 param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  short sVar4;
  int in_ECX;
  
  sVar4 = (short)((uint)param_1 >> 0x10) / 0x78;
  *(undefined4 *)(in_ECX + 0x1d4) = *(undefined4 *)(in_ECX + 0x1cc);
  *(undefined4 *)(in_ECX + 0x1d8) = *(undefined4 *)(in_ECX + 0x1d0);
  if (sVar4 < 1) {
    iVar2 = *(int *)(in_ECX + 0x1e4);
    if (*(int *)(in_ECX + 0x1d0) <= iVar2) goto LAB_100c5512;
    iVar3 = *(int *)(in_ECX + 0x1d0) + (int)sVar4 * *(int *)(in_ECX + 0x1e0) * 3;
    *(int *)(in_ECX + 0x1d0) = iVar3;
    if (iVar3 < iVar2) {
      *(int *)(in_ECX + 0x1d0) = iVar2;
    }
  }
  else {
    if (-1 < *(int *)(in_ECX + 0x1d0)) goto LAB_100c5512;
    iVar2 = *(int *)(in_ECX + 0x1d0) + (int)sVar4 * *(int *)(in_ECX + 0x1e0) * 3;
    *(int *)(in_ECX + 0x1d0) = iVar2;
    if (0 < iVar2) {
      *(undefined4 *)(in_ECX + 0x1d0) = 0;
    }
  }
  thunk_FUN_10049b50(-*(int *)(in_ECX + 0x1d0));
LAB_100c5512:
  *(int *)(in_ECX + 0x1d4) = *(int *)(in_ECX + 0x1d4) - *(int *)(in_ECX + 0x1cc);
  *(int *)(in_ECX + 0x1d8) = *(int *)(in_ECX + 0x1d8) - *(int *)(in_ECX + 0x1d0);
  (**(code **)(**(int **)(in_ECX + 0x22c) + 0x148))(0,-*(int *)(in_ECX + 0x1d8),0);
  piVar1 = (int *)(*(int *)(in_ECX + 0x22c) + 0x2f4);
  *piVar1 = *piVar1 + *(int *)(in_ECX + 0x1d8);
  return 1;
}


// ==== 100c5570 FUN_100c5570

int FUN_100c5570(int param_1)

{
  int iVar1;
  int in_ECX;
  
  iVar1 = FUN_10055550(*(undefined4 *)(*(int *)(in_ECX + 0x22c) + 0x2d8));
  while( true ) {
    if (iVar1 == 0) {
      return 0;
    }
    if (*(int *)(iVar1 + 4) == param_1) break;
    iVar1 = FUN_100554f0(iVar1);
  }
  return iVar1;
}


// ==== 100c55b0 FUN_100c55b0

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

void FUN_100c55b0(void)

{
  int in_ECX;
  undefined4 uStack_2868;
  undefined1 local_2860 [10324];
  uint uStack_c;
  uint local_4;
  
  local_4 = DAT_103554c4 ^ (uint)local_2860;
  uStack_2868 = 0x100c55d4;
  FUN_10055240();
  uStack_2868 = 0;
  (**(code **)(**(int **)(in_ECX + 0x22c) + 0x1f8))(local_2860);
  __security_check_cookie(uStack_c ^ (uint)&uStack_2868);
  return;
}


// ==== 100c5610 FUN_100c5610

void FUN_100c5610(int *param_1)

{
  undefined4 *puVar1;
  FArray *in_ECX;
  int iVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101f5d69;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX,param_1[1],4);
  local_4 = 0;
  iVar2 = 0;
  *(undefined4 *)(in_ECX + 4) = 0;
  if (0 < param_1[1]) {
    do {
      puVar1 = (undefined4 *)FUN_100c56a0(4);
      if (puVar1 != (undefined4 *)0x0) {
        *puVar1 = *(undefined4 *)(*param_1 + iVar2 * 4);
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < param_1[1]);
  }
  ExceptionList = local_c;
  return;
}


// ==== 100c56a0 FUN_100c56a0

int FUN_100c56a0(undefined4 param_1,FArray *param_2)

{
  int iVar1;
  
  iVar1 = FArray::Add(param_2,1,4);
  return *(int *)param_2 + iVar1 * 4;
}


// ==== 100c56c0 FUN_100c56c0

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

void FUN_100c56c0(void)

{
  undefined4 uVar1;
  FString *this;
  ushort *puVar2;
  int in_ECX;
  undefined1 local_286c [4];
  undefined4 local_2868;
  ushort local_285c [5120];
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
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_101f5d98;
  local_c = ExceptionList;
  local_10 = DAT_103554c4 ^ (uint)local_286c;
  ExceptionList = &local_c;
  local_4 = 0;
  FUN_10055240(DAT_103554c4 ^ (uint)&stack0xffffd788);
  uVar1 = FUN_1003f630(L"L2UI_CH3.QUESTWND.QuestWndPlusBtn",1);
  local_18 = FUN_1003f630(L"L2UI_CH3.QUESTWND.QuestWndMinusBtn",1);
  local_14 = uVar1;
  local_1c = FUN_1003f630(L"Default.BlackTexture",1);
  this = (FString *)FUN_100adb60();
  puVar2 = FString::operator*(this);
  appStrcpy(local_285c,puVar2);
  local_2868 = FUN_100adbe0();
  local_44 = 0;
  local_40 = 0x41700000;
  local_34 = 0x41700000;
  local_24 = 2;
  local_30 = 0x41700000;
  local_20 = 0;
  local_4c = 0;
  local_54 = 0x435c0000;
  local_48 = 0;
  local_3c = 0;
  local_50 = 0x41600000;
  local_38 = 0;
  local_5c = 0;
  local_58 = 0;
  if (*(int *)(in_ECX + 0x238) != 0) {
    FUN_100b0c10(local_286c);
  }
  local_4 = 0xffffffff;
  FUN_100ada50();
  ExceptionList = local_c;
  __security_check_cookie(local_10 ^ (uint)local_286c);
  return;
}


// ==== 100c5860 FUN_100c5860

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

void FUN_100c5860(undefined4 param_1,undefined4 param_2)

{
  FString *this;
  ushort *puVar1;
  int iVar2;
  FString local_2878 [12];
  undefined1 local_286c [4];
  undefined4 local_2868;
  ushort local_285c [3072];
  ushort local_105c [1024];
  ushort local_85c [1024];
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_101f5de4;
  local_c = ExceptionList;
  local_10 = DAT_103554c4 ^ (uint)local_2878;
  ExceptionList = &local_c;
  local_4 = 0;
  FUN_10055240(DAT_103554c4 ^ (uint)&stack0xffffd77c);
  local_1c = FUN_1003f630(L"L2UI_CH3.Msn.msnicon4",1);
  this = (FString *)FUN_100abd40(local_2878);
  local_4._0_1_ = 1;
  puVar1 = FString::operator*(this);
  appStrcpy(local_285c,puVar1);
  local_4 = (uint)local_4._1_3_ << 8;
  FString::~FString(local_2878);
  puVar1 = FString::operator*((FString *)&stack0x00000024);
  appStrcpy(local_105c,puVar1);
  puVar1 = FString::operator*((FString *)&stack0x00000018);
  appStrcpy(local_85c,puVar1);
  local_44 = 0x41600000;
  local_40 = 0x41600000;
  local_54 = 0x435c0000;
  local_2868 = param_2;
  local_50 = 0x41600000;
  local_24 = 3;
  local_20 = 1;
  local_4c = 0;
  local_48 = 0;
  local_5c = 0;
  local_58 = 0;
  iVar2 = FUN_100c4fc0(param_2);
  if (iVar2 != 0) {
    FUN_100b0cf0(local_286c,iVar2);
  }
  local_4 = 0xffffffff;
  FUN_100abc50();
  ExceptionList = local_c;
  __security_check_cookie(local_10 ^ (uint)local_2878);
  return;
}


// ==== 100c5a10 FUN_100c5a10

void FUN_100c5a10(int param_1,int param_2,int param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int *in_ECX;
  ushort *puVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  int local_428;
  int local_424;
  int *local_420;
  undefined4 *local_41c;
  int local_418;
  ushort local_414 [260];
  ushort local_20c [260];
  uint local_4;
  
  local_4 = DAT_103554c4 ^ (uint)&local_428;
  local_428 = param_1;
  if (param_2 == 0) goto LAB_100c5e90;
  local_420 = in_ECX;
  if (*(int *)(param_2 + 0x2870) == 0) {
LAB_100c5aa2:
    if (*(int *)(param_2 + 0x2858) != 0) {
      local_424 = FUN_101c19e0();
      uVar1 = FUN_101c19e0();
      uVar2 = *(undefined4 *)(param_2 + 0x2858);
      iVar5 = *(int *)(param_2 + 0x2844) + param_4;
LAB_100c5ae8:
      FUN_10021a00(param_3,iVar5,uVar1,local_424,0,0,uVar1,local_424,uVar2,0xff,1);
      *(int *)(param_2 + 0x2830) = param_3;
      *(int *)(param_2 + 0x2834) = param_4;
      *(undefined4 *)(param_2 + 0x2838) = *(undefined4 *)(param_2 + 0x2838);
      *(undefined4 *)(param_2 + 0x283c) = *(undefined4 *)(param_2 + 0x283c);
    }
  }
  else {
    if (*(int *)(param_2 + 0x2854) != 0) {
      local_424 = FUN_101c19e0();
      uVar1 = FUN_101c19e0();
      uVar2 = *(undefined4 *)(param_2 + 0x2854);
      iVar5 = param_4;
      goto LAB_100c5ae8;
    }
    if (*(int *)(param_2 + 0x2870) == 0) goto LAB_100c5aa2;
  }
  if (*(int *)(param_2 + 0x287c) != 0) {
    iVar5 = local_420[0xbe];
    uVar16 = 0xff;
    uVar13 = 0xd;
    uVar11 = 0x10;
    uVar9 = 0;
    uVar1 = 0;
    uVar2 = FUN_101c19e0(0,0,0x10,0xd,iVar5,0xff);
    iVar3 = FUN_101c19e0(uVar2);
    iVar3 = iVar3 + -0x31;
    iVar6 = param_4;
    iVar4 = FUN_101c19e0(param_4,iVar3);
    FUN_10021970(iVar4 + *(int *)(param_2 + 0x2840) + param_3,iVar6,iVar3,uVar2,uVar1,uVar9,uVar11,
                 uVar13,iVar5,uVar16);
    iVar5 = local_420[0xbf];
    uVar17 = 0xff;
    uVar16 = 0xd;
    uVar13 = 0x20;
    uVar11 = 0;
    uVar9 = 0;
    uVar2 = FUN_101c19e0(0,0,0x20,0xd,iVar5,0xff);
    uVar1 = 0x20;
    iVar6 = param_4;
    iVar3 = FUN_101c19e0(param_4,0x20,uVar2);
    iVar4 = FUN_101c19e0();
    param_1 = local_428;
    FUN_10021970(param_3 + -0x31 + iVar3 + iVar4 + *(int *)(param_2 + 0x2840),iVar6,uVar1,uVar2,
                 uVar9,uVar11,uVar13,uVar16,iVar5,uVar17);
  }
  iVar5 = FUN_101c19e0();
  *(int *)(param_2 + 0x2820) = iVar5 + *(int *)(param_2 + 0x2840) + param_3;
  *(int *)(param_2 + 0x2824) = param_4;
  *(undefined4 *)(param_2 + 0x2828) = *(undefined4 *)(param_2 + 0x2828);
  *(undefined4 *)(param_2 + 0x282c) = *(undefined4 *)(param_2 + 0x282c);
  iVar5 = FUN_101c19e0();
  *(int *)(param_2 + 0x2810) = iVar5 + *(int *)(param_2 + 0x2840) + param_3;
  *(int *)(param_2 + 0x2814) = param_4;
  *(undefined4 *)(param_2 + 0x2818) = *(undefined4 *)(param_2 + 0x2818);
  *(undefined4 *)(param_2 + 0x281c) = *(undefined4 *)(param_2 + 0x281c);
  if (param_2 != -0x10) {
    FUN_100216e0(&local_41c,0x41,0);
    if (*(int *)(param_2 + 0x284c) == 0) {
      appSprintf(local_414,(ushort *)L"%s (%d)",param_2 + 0x10,*(undefined4 *)(param_2 + 0x2864));
      iVar5 = FUN_101c19e0(0xc);
      iVar6 = FUN_101c19e0();
      FUN_100c72c0(local_414,local_20c,
                   (((0xda - iVar5) - iVar6) - *(int *)(param_2 + 0x2840)) - param_3);
      uVar18 = 0xffffffff;
      uVar15 = 0;
      uVar14 = 0;
      uVar12 = 0;
      uVar10 = 0;
      uVar8 = 0;
      uVar17 = 0;
      uVar16 = 0;
      uVar13 = 0;
      uVar11 = 0;
      uVar9 = 0;
      uVar1 = 0;
      puVar7 = local_20c;
      uVar2 = 0xffdcdcdc;
      iVar5 = FUN_101c19e0(0xffdcdcdc,puVar7,0,0,0,0,0,0,0,0,0,0,0,0xffffffff);
      iVar5 = (iVar5 - local_418) / 2 + 1 + param_4;
      iVar6 = FUN_101c19e0(iVar5);
      iVar3 = FUN_101c19e0();
      iVar6 = param_3 + 3 + iVar6 + iVar3 + *(int *)(param_2 + 0x2840);
    }
    else {
      iVar5 = FUN_101c19e0(0xc);
      iVar6 = FUN_101c19e0();
      FUN_100c72c0(param_2 + 0x10,local_414,
                   (((0xda - iVar5) - iVar6) - *(int *)(param_2 + 0x2840)) - param_3);
      uVar18 = 0xffffffff;
      uVar15 = 0;
      uVar14 = 0;
      uVar12 = 0;
      uVar10 = 0;
      uVar8 = 0;
      uVar17 = 0;
      uVar16 = 0;
      uVar13 = 0;
      uVar11 = 0;
      uVar9 = 0;
      uVar1 = 0;
      puVar7 = local_414;
      uVar2 = 0xffdcdcdc;
      iVar5 = FUN_101c19e0(0xffdcdcdc,puVar7,0,0,0,0,0,0,0,0,0,0,0,0xffffffff);
      iVar5 = (iVar5 - local_418) / 2 + 1 + param_4;
      iVar6 = FUN_101c19e0(iVar5);
      iVar3 = FUN_101c19e0();
      iVar6 = param_3 + 3 + iVar6 + iVar3 + *(int *)(param_2 + 0x2840);
    }
    param_1 = local_428;
    FUN_100217a0(iVar6,iVar5,uVar2,puVar7,uVar1,uVar9,uVar11,uVar13,uVar16,uVar17,uVar8,uVar10,
                 uVar12,uVar14,uVar15,uVar18);
  }
  local_428 = FUN_101c19e0();
  local_428 = local_428 + 4;
  if (*(int *)(param_2 + 0x2870) == 0) {
    iVar5 = 0;
    if (0 < *(int *)(param_2 + 0x2864)) {
      do {
        iVar6 = iVar5 * 4;
        iVar5 = iVar5 + 1;
        *(undefined4 *)(*(int *)(*(int *)(param_2 + 0x2860) + iVar6) + 0x2878) = 0;
      } while (iVar5 < *(int *)(param_2 + 0x2864));
    }
  }
  else {
    local_424 = 0;
    if (0 < *(int *)(param_2 + 0x2864)) {
      do {
        iVar5 = FUN_101c19e0();
        local_41c = (undefined4 *)(*(int *)(param_2 + 0x2860) + local_424 * 4);
        iVar5 = (**(code **)(*local_420 + 0x200))
                          (param_1,*local_41c,param_3 + 3 + iVar5,local_428 + param_4);
        local_428 = local_428 + iVar5;
        local_424 = local_424 + 1;
      } while (local_424 < *(int *)(param_2 + 0x2864));
    }
  }
LAB_100c5e90:
  __security_check_cookie(local_4 ^ (uint)&local_428);
  return;
}


// ==== 100c5eb0 FUN_100c5eb0

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

void FUN_100c5eb0(void)

{
  int *piVar1;
  undefined4 uVar2;
  ushort *puVar3;
  int in_ECX;
  undefined1 local_2860 [4];
  undefined4 local_285c;
  ushort local_2850 [5120];
  undefined4 local_50;
  undefined4 local_4c;
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
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  uint local_4;
  
  local_4 = DAT_103554c4 ^ (uint)local_2860;
  FUN_10055240();
  uVar2 = FUN_1003f630(L"L2UI_CH3.QUESTWND.QuestWndPlusBtn",1);
  local_c = FUN_1003f630(L"L2UI_CH3.QUESTWND.QuestWndMinusBtn",1);
  local_8 = uVar2;
  local_10 = FUN_1003f630(L"Default.BlackTexture",1);
  puVar3 = FString::operator*((FString *)(GL2GameData_exref + 0x6d804));
  appStrcpy(local_2850,puVar3);
  piVar1 = *(int **)(in_ECX + 0x22c);
  local_38 = 0;
  local_34 = 0x41700000;
  local_28 = 0x41700000;
  local_285c = 1;
  local_24 = 0x41700000;
  local_18 = 2;
  local_14 = 0;
  local_48 = 0x435c0000;
  local_40 = 0;
  local_3c = 0;
  local_44 = 0x41600000;
  local_30 = 0;
  local_2c = 0;
  local_50 = 0;
  local_4c = 0;
  if (piVar1[0xb6] != 0) {
    (**(code **)(*piVar1 + 0x1f8))(local_2860,piVar1[0xb6]);
  }
  puVar3 = FString::operator*((FString *)(GL2GameData_exref + 0x6d810));
  appStrcpy(local_2850,puVar3);
  piVar1 = *(int **)(in_ECX + 0x22c);
  local_285c = 0;
  if (piVar1[0xb6] != 0) {
    (**(code **)(*piVar1 + 0x1f8))(local_2860,piVar1[0xb6]);
  }
  __security_check_cookie(local_4 ^ (uint)local_2860);
  return;
}


// ==== 100c6040 FUN_100c6040

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

void FUN_100c6040(void)

{
  FString *this;
  ushort *puVar1;
  undefined4 uVar2;
  int iVar3;
  int in_ECX;
  undefined1 local_286c [4];
  undefined4 local_2868;
  undefined4 local_2864;
  ushort local_285c [5120];
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_24;
  undefined4 local_20;
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_101f5e31;
  local_c = ExceptionList;
  local_10 = DAT_103554c4 ^ (uint)local_286c;
  ExceptionList = &local_c;
  local_4 = 0;
  FUN_10055240(DAT_103554c4 ^ (uint)&stack0xffffd78c);
  this = (FString *)FUN_100a51c0();
  puVar1 = FString::operator*(this);
  appStrcpy(local_285c,puVar1);
  local_2868 = FUN_100a4e90();
  local_2864 = FUN_100a4fa0();
  local_44 = 0;
  local_40 = 0x41700000;
  local_24 = 3;
  local_20 = 1;
  local_54 = 0x435c0000;
  local_4c = 0;
  local_48 = 0;
  local_50 = 0x41600000;
  local_5c = 0;
  local_58 = 0;
  uVar2 = FUN_100a4fa0();
  iVar3 = FUN_100c5570(uVar2);
  if (iVar3 != 0) {
    (**(code **)(**(int **)(in_ECX + 0x22c) + 0x1f8))(local_286c,iVar3);
  }
  local_4 = 0xffffffff;
  FString::~FString((FString *)&stack0x00000004);
  ExceptionList = local_c;
  __security_check_cookie(local_10 ^ (uint)local_286c);
  return;
}


// ==== 100c61b0 FUN_100c61b0

void FUN_100c61b0(int *param_1)

{
  undefined4 *puVar1;
  FArray *in_ECX;
  int iVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101f5e69;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX,param_1[1],4);
  local_4 = 0;
  iVar2 = 0;
  *(undefined4 *)(in_ECX + 4) = 0;
  if (0 < param_1[1]) {
    do {
      puVar1 = (undefined4 *)FUN_100c56a0(4);
      if (puVar1 != (undefined4 *)0x0) {
        *puVar1 = *(undefined4 *)(*param_1 + iVar2 * 4);
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < param_1[1]);
  }
  ExceptionList = local_c;
  return;
}


// ==== 100c6240 FUN_100c6240

void FUN_100c6240(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int local_18;
  int local_14;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101f5ea0;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (*param_1 != 0) {
    FUN_10056480();
    FUN_100c61b0();
    local_4 = 0;
    iVar3 = 0;
    if (0 < local_14) {
      do {
        iVar1 = *(int *)(local_18 + iVar3 * 4);
        if ((iVar1 != 0) && (iVar2 = FUN_100c4fc0(), *param_1 == iVar2)) {
          FUN_100abb60(iVar1);
          local_4 = local_4 & 0xffffff00;
          FUN_100c5860();
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < local_14);
    }
    local_4 = 0xffffffff;
    FUN_100a1820();
  }
  ExceptionList = local_c;
  return;
}


// ==== 100c6310 FUN_100c6310

void FUN_100c6310(void)

{
  int iVar1;
  int *in_ECX;
  int iVar2;
  int iStack_24;
  int iStack_20;
  int iStack_18;
  int iStack_14;
  void *local_c;
  undefined1 *puStack_8;
  uint uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_101f5ee0;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  (**(code **)(*in_ECX + 0x174))();
  FUN_100c5080();
  FUN_100a1220();
  uStack_4 = 0;
  iVar2 = 0;
  if (0 < iStack_14) {
    do {
      if (*(int *)(iStack_18 + iVar2 * 4) != 0) {
        FUN_100ad9c0();
        uStack_4 = uStack_4 & 0xffffff00;
        FUN_100c56c0();
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < iStack_14);
  }
  FUN_100c61b0();
  uStack_4._0_1_ = 2;
  iVar2 = 0;
  if (0 < iStack_20) {
    do {
      iVar1 = *(int *)(iStack_24 + iVar2 * 4);
      if (iVar1 != 0) {
        FUN_100abb60(iVar1);
        uStack_4._0_1_ = 2;
        FUN_100c5860();
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < iStack_20);
  }
  if (*(int *)(in_ECX[0x8e] + 0x2d8) != 0) {
    FUN_10055470();
  }
  *(int *)(in_ECX[0x8e] + 0x300) = in_ECX[0x8b];
  *(int *)(in_ECX[0x8e] + 0x304) = in_ECX[0x8c];
  *(int *)(in_ECX[0x8e] + 0x308) = in_ECX[0x8d];
  uStack_4 = (uint)uStack_4._1_3_ << 8;
  FUN_100a1820();
  uStack_4 = 0xffffffff;
  FUN_100a1780();
  ExceptionList = local_c;
  return;
}


// ==== 100c6480 FUN_100c6480

void FUN_100c6480(void)

{
  uint *puVar1;
  int iVar2;
  int in_ECX;
  int iVar3;
  uint uStack_60;
  int local_50;
  int local_4c;
  FString local_44 [12];
  int local_38;
  int local_34;
  int local_24;
  int local_1c;
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101f5f22;
  local_10 = ExceptionList;
  uStack_60 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_60;
  ExceptionList = &local_10;
  local_8._0_1_ = 1;
  local_8._1_3_ = 0;
  iVar3 = *(int *)(*(int *)(in_ECX + 0x238) + 0x2d8);
  puVar1 = &uStack_60;
  if (iVar3 == 0) {
    appFailAssert("pRootItem",".\\MSN\\TreeCtrl.cpp",0x11c);
    puVar1 = (uint *)local_14;
  }
  local_14 = (undefined1 *)puVar1;
  FUN_100aff90(iVar3 + 0x2860);
  local_8 = CONCAT31(local_8._1_3_,2);
  local_1c = 0;
  do {
    if (local_4c <= local_1c) {
LAB_100c65df:
      local_8 = CONCAT31(local_8._1_3_,1);
      FUN_10056220();
      local_8 = 0xffffffff;
      FString::~FString((FString *)&stack0x00000004);
      ExceptionList = local_10;
      return;
    }
    iVar3 = *(int *)(local_50 + local_1c * 4);
    if (iVar3 == 0) {
      appFailAssert("pGroupItem",".\\MSN\\TreeCtrl.cpp",0x122);
    }
    FUN_100aff90(iVar3 + 0x2860);
    local_8._0_1_ = 3;
    for (iVar3 = 0; local_24 = iVar3, iVar3 < local_34; iVar3 = iVar3 + 1) {
      local_18 = *(int *)(local_38 + iVar3 * 4);
      if (local_18 == 0) {
        appFailAssert("pFriendItem",".\\MSN\\TreeCtrl.cpp",0x12a);
      }
      FString::FString(local_44,(ushort *)(local_18 + 0x1810));
      local_8._0_1_ = 4;
      iVar2 = FString::operator==(local_44,(FString *)&stack0x00000004);
      if (iVar2 != 0) {
        FUN_100566c0(&local_18);
        local_18 = 0;
        local_8._0_1_ = 3;
        FString::~FString(local_44);
        local_8 = CONCAT31(local_8._1_3_,2);
        FUN_10056220();
        goto LAB_100c65df;
      }
      local_8._0_1_ = 3;
      FString::~FString(local_44);
    }
    local_8 = CONCAT31(local_8._1_3_,2);
    FUN_10056220();
    local_1c = local_1c + 1;
  } while( true );
}


// ==== 100c6627 Catch@100c6627

void Catch_100c6627(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x24) = *(undefined4 *)(unaff_EBP + -0x28);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x24,&DAT_102a47f0);
}


// ==== 100c663b Catch@100c663b

void Catch_100c663b(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"MsnTreeCtrl::RemoveFriend");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100c6660 FUN_100c6660

void FUN_100c6660(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int local_18;
  int local_14;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101f5f50;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  iVar2 = FUN_10055550();
  while (iVar2 != 0) {
    FUN_10056480();
    FUN_100c5610();
    local_4 = 0;
    iVar4 = 0;
    if (0 < local_14) {
      do {
        iVar1 = *(int *)(local_18 + iVar4 * 4);
        if (iVar1 != 0) {
          FUN_100a4fa0();
          iVar3 = FUN_100c5570();
          if (iVar2 == iVar3) {
            FUN_100a4d50(iVar1);
            local_4 = local_4 & 0xffffff00;
            FUN_100c6040();
          }
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 < local_14);
    }
    iVar2 = FUN_100554f0();
    local_4 = 0xffffffff;
    FUN_100ac580();
  }
  ExceptionList = local_c;
  return;
}


// ==== 100c6750 FUN_100c6750

void FUN_100c6750(void)

{
  int iVar1;
  int *in_ECX;
  int iVar2;
  int iStack_18;
  int iStack_14;
  void *local_c;
  undefined1 *puStack_8;
  uint uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_101f5f80;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  (**(code **)(*in_ECX + 0x174))();
  FUN_100c55b0();
  FUN_100c5eb0();
  FUN_100c5610();
  uStack_4 = 0;
  iVar2 = 0;
  if (0 < iStack_14) {
    do {
      iVar1 = *(int *)(iStack_18 + iVar2 * 4);
      if (iVar1 != 0) {
        FUN_100a4d50(iVar1);
        uStack_4 = uStack_4 & 0xffffff00;
        FUN_100c6040();
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < iStack_14);
  }
  if (*(int *)(in_ECX[0x8b] + 0x2d8) != 0) {
    FUN_10055470();
  }
  uStack_4 = 0xffffffff;
  FUN_100ac580();
  ExceptionList = local_c;
  return;
}


// ==== 100c6820 FUN_100c6820

void FUN_100c6820(void)

{
  undefined4 *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101f5fa8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_100568c0(DAT_103554c4 ^ (uint)&stack0xffffffec);
  *in_ECX = MsnTreeCtrl::vftable;
  in_ECX[0x81] = 0x10;
  in_ECX[0x8a] = 0;
  in_ECX[0x8b] = 0;
  in_ECX[0x8c] = 0;
  in_ECX[0x8d] = 0;
  ExceptionList = local_c;
  return;
}


// ==== 100c68a0 FUN_100c68a0

void FUN_100c68a0(void)

{
  uint uVar1;
  UObject *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_101f5fd8;
  local_c = ExceptionList;
  uVar1 = DAT_103554c4 ^ (uint)&stack0xffffffec;
  ExceptionList = &local_c;
  *(undefined ***)in_ECX = MsnTreeCtrl::vftable;
  local_4 = 0;
  UObject::ConditionalDestroy(in_ECX);
  local_4 = 0xffffffff;
  FUN_10056920(uVar1);
  ExceptionList = local_c;
  return;
}


// ==== 100c6900 FUN_100c6900

void FUN_100c6900(byte param_1)

{
  void *in_ECX;
  
  FUN_100c68a0();
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x23c);
  }
  return;
}


// ==== 100c6930 FUN_100c6930

void FUN_100c6930(void)

{
  undefined4 *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101f6008;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_10056780(DAT_103554c4 ^ (uint)&stack0xffffffec);
  *in_ECX = L2FriendTree::vftable;
  ExceptionList = local_c;
  return;
}


// ==== 100c6990 FUN_100c6990

void FUN_100c6990(void)

{
  uint uVar1;
  UObject *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_101f6038;
  local_c = ExceptionList;
  uVar1 = DAT_103554c4 ^ (uint)&stack0xffffffec;
  ExceptionList = &local_c;
  *(undefined ***)in_ECX = L2FriendTree::vftable;
  local_4 = 0;
  UObject::ConditionalDestroy(in_ECX);
  local_4 = 0xffffffff;
  FUN_10056830(uVar1);
  ExceptionList = local_c;
  return;
}


// ==== 100c69f0 FUN_100c69f0

void FUN_100c69f0(byte param_1)

{
  void *in_ECX;
  
  FUN_100c6990();
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x300);
  }
  return;
}


// ==== 100c6a20 FUN_100c6a20

void FUN_100c6a20(void)

{
  undefined4 *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101f6068;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_100568c0(DAT_103554c4 ^ (uint)&stack0xffffffec);
  *in_ECX = L2FriendTreeCtrl::vftable;
  in_ECX[0x8a] = 0;
  ExceptionList = local_c;
  return;
}


// ==== 100c6a80 FUN_100c6a80

void FUN_100c6a80(void)

{
  uint uVar1;
  UObject *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_101f6098;
  local_c = ExceptionList;
  uVar1 = DAT_103554c4 ^ (uint)&stack0xffffffec;
  ExceptionList = &local_c;
  *(undefined ***)in_ECX = L2FriendTreeCtrl::vftable;
  local_4 = 0;
  UObject::ConditionalDestroy(in_ECX);
  local_4 = 0xffffffff;
  FUN_10056920(uVar1);
  ExceptionList = local_c;
  return;
}


// ==== 100c6ae0 FUN_100c6ae0

void FUN_100c6ae0(byte param_1)

{
  void *in_ECX;
  
  FUN_100c6a80();
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x230);
  }
  return;
}


// ==== 100c6b10 FUN_100c6b10

undefined4 FUN_100c6b10(void)

{
  UPackage *pUVar1;
  int iVar2;
  undefined4 uVar3;
  int in_ECX;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  uint uStack_38;
  undefined4 local_20;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101f60c0;
  local_10 = ExceptionList;
  uStack_38 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_8 = 0;
  uStack_3c = 0x100c6b4a;
  FUN_100440c0();
  uStack_3c = 0;
  FName::FName((FName *)&uStack_40,0);
  pUVar1 = UObject::GetTransientPackage();
  iVar2 = FUN_100c4a00(0x300,pUVar1);
  if (iVar2 == 0) {
    iVar2 = 0;
  }
  else {
    uStack_3c = 0x100c6b79;
    iVar2 = FUN_100c6930();
  }
  *(int *)(in_ECX + 0x22c) = iVar2;
  *(undefined4 *)(iVar2 + 0x1cc) = 0xa01;
  uStack_3c = 3;
  uStack_40 = 0;
  local_20 = (undefined4)(longlong)ROUND(*(float *)(in_ECX + 0x8c));
  uVar3 = local_20;
  local_20 = (undefined4)(longlong)ROUND(*(float *)(in_ECX + 0x88) - 16.0);
  (**(code **)(**(int **)(in_ECX + 0x22c) + 0xc0))(0,0,local_20,uVar3,0);
  uVar3 = FUN_10060d40(*(undefined4 *)(in_ECX + 0x22c),0x22);
  FUN_1005c1e0(uVar3);
  ExceptionList = local_10;
  return 1;
}


// ==== 100c6c25 Catch@100c6c25

void Catch_100c6c25(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x20) = *(undefined4 *)(unaff_EBP + -0x24);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x20,&DAT_102a47f0);
}


// ==== 100c6c39 Catch@100c6c39

void Catch_100c6c39(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"L2FriendTreeCtrl::OnCreate");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100c6c90 FUN_100c6c90

undefined4 FUN_100c6c90(ushort param_1)

{
  if (((param_1 < 0x41) || (0x5a < param_1)) && (0x19 < (ushort)(param_1 - 0x61))) {
    return 0;
  }
  return 1;
}


// ==== 100c6d05 Catch@100c6d05

void Catch_100c6d05(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 100c6d19 Catch@100c6d19

void Catch_100c6d19(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"Util::IsAlphabet");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100c6d40 FUN_100c6d40

ushort * FUN_100c6d40(ushort *param_1)

{
  LCID LVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101f611a;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 1;
  LVar1 = GetUserDefaultLCID();
  uVar2 = LVar1 & 0xffff;
  if (uVar2 < 0x41a) {
    if (uVar2 == 0x419) goto switchD_100c6daa_caseD_401;
    switch(uVar2) {
    case 0x401:
    case 0x404:
    case 0x405:
    case 0x406:
    case 0x407:
    case 0x408:
    case 0x409:
    case 0x40b:
    case 0x40c:
    case 0x40d:
    case 0x40e:
    case 0x410:
    case 0x411:
    case 0x412:
    case 0x413:
    case 0x414:
    case 0x415:
    case 0x416:
      goto switchD_100c6daa_caseD_401;
    }
  }
  else if (uVar2 < 0x805) {
    if (uVar2 == 0x804) goto switchD_100c6daa_caseD_401;
    switch(uVar2) {
    case 0x41b:
    case 0x41d:
    case 0x41f:
    case 0x424:
      goto switchD_100c6daa_caseD_401;
    }
  }
  else {
    if (uVar2 == 0x816) goto switchD_100c6daa_caseD_401;
    if (uVar2 == 0xc04) {
      uVar2 = 0x404;
      goto switchD_100c6daa_caseD_401;
    }
    if (uVar2 == 0xc0a) goto switchD_100c6daa_caseD_401;
  }
  uVar2 = 0x409;
switchD_100c6daa_caseD_401:
  FString::Printf(param_1,L"0x%04x",uVar2);
  ExceptionList = local_10;
  return param_1;
}


// ==== 100c6e21 Catch@100c6e21

void Catch_100c6e21(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x1c) = *(undefined4 *)(unaff_EBP + -0x20);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x1c,&DAT_102a47f0);
}


// ==== 100c6e35 Catch@100c6e35

void Catch_100c6e35(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"Util::GetLanguageID");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100c6e90 FUN_100c6e90

void FUN_100c6e90(FString *param_1)

{
  wchar_t *pwVar1;
  undefined4 local_ec;
  FString *local_e8;
  _OSVERSIONINFOA local_e4;
  ushort local_50 [32];
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101f6163;
  local_c = ExceptionList;
  local_10 = DAT_103554c4 ^ (uint)&local_ec;
  ExceptionList = &local_c;
  local_ec = 0;
  local_e8 = param_1;
  local_e4.dwOSVersionInfoSize = 0x94;
  GetVersionExA(&local_e4);
  if (local_e4.dwPlatformId == 0) {
    pwVar1 = L"win32";
  }
  else if (local_e4.dwPlatformId == 1) {
    pwVar1 = L"win";
  }
  else {
    if (local_e4.dwPlatformId != 2) goto LAB_100c6f34;
    pwVar1 = L"winnt";
  }
  appStrcpy(local_50,(ushort *)pwVar1);
LAB_100c6f34:
  FString::FString(param_1,local_50);
  local_4 = 0;
  local_ec = 1;
  ExceptionList = local_c;
  __security_check_cookie(local_10 ^ (uint)&local_ec);
  return;
}


// ==== 100c6f80 FUN_100c6f80

void FUN_100c6f80(FString *param_1)

{
  uint uVar1;
  undefined4 local_ec;
  FString *local_e8;
  _OSVERSIONINFOA local_e4;
  ushort local_50 [32];
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101f61c3;
  local_c = ExceptionList;
  local_10 = DAT_103554c4 ^ (uint)&local_ec;
  uVar1 = DAT_103554c4 ^ (uint)&stack0xffffff10;
  ExceptionList = &local_c;
  local_ec = 0;
  local_e8 = param_1;
  local_e4.dwOSVersionInfoSize = 0x94;
  GetVersionExA(&local_e4);
  appSprintf(local_50,(ushort *)L"%d.%d",local_e4.dwMajorVersion,local_e4.dwMinorVersion,uVar1);
  FString::FString(param_1,local_50);
  local_4 = 0;
  local_ec = 1;
  ExceptionList = local_c;
  __security_check_cookie(local_10 ^ (uint)&local_ec);
  return;
}


// ==== 100c7050 FUN_100c7050

void FUN_100c7050(FString *param_1)

{
  wchar_t *pwVar1;
  undefined4 local_7c;
  FString *local_78;
  _union_530 local_74 [9];
  ushort local_50 [32];
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101f621a;
  local_c = ExceptionList;
  local_10 = DAT_103554c4 ^ (uint)&local_7c;
  ExceptionList = &local_c;
  local_78 = param_1;
  local_7c = 0;
  GetSystemInfo((LPSYSTEM_INFO)&local_74[0].s);
  if (local_74[0].s.wProcessorArchitecture == 0) {
    pwVar1 = L"i386";
  }
  else if (local_74[0].s.wProcessorArchitecture == 1) {
    pwVar1 = L"mips";
  }
  else if (local_74[0].s.wProcessorArchitecture == 2) {
    pwVar1 = L"alpha";
  }
  else {
    if (local_74[0].s.wProcessorArchitecture != 3) goto LAB_100c70eb;
    pwVar1 = L"ppc";
  }
  appStrcpy(local_50,(ushort *)pwVar1);
LAB_100c70eb:
  FString::FString(param_1,local_50);
  local_4 = 0;
  local_7c = 1;
  ExceptionList = local_c;
  __security_check_cookie(local_10 ^ (uint)&local_7c);
  return;
}


// ==== 100c7130 FUN_100c7130

void FUN_100c7130(FString *param_1)

{
  int iVar1;
  int iVar2;
  FString *pFVar3;
  int iVar4;
  FString local_30 [8];
  FString local_28 [4];
  undefined1 local_24 [4];
  FString local_20 [4];
  undefined1 local_1c [16];
  void *local_c;
  undefined1 *local_8;
  uint local_4;
  
  local_8 = &LAB_101f627d;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_4 = 1;
  iVar1 = FString::Len(param_1);
  if (iVar1 != 0) {
    FString::FString(local_30);
    local_4 = CONCAT31(local_4._1_3_,2);
    iVar2 = FString::Len((FString *)&stack0x00000008);
    iVar1 = FString::InStr(param_1,(FString *)&stack0x00000008,0);
    while (iVar1 != -1) {
      pFVar3 = (FString *)FString::Left(param_1,(int)local_24);
      local_8._0_1_ = 3;
      FString::operator+=((FString *)&stack0xffffffcc,pFVar3);
      local_8 = (undefined1 *)CONCAT31(local_8._1_3_,2);
      FString::~FString(local_28);
      FString::operator+=((FString *)&stack0xffffffcc,(FString *)&stack0x00000010);
      iVar4 = FString::Len(param_1);
      if (iVar4 <= iVar1 + 1 + iVar2) break;
      FString::Len(param_1);
      pFVar3 = (FString *)FString::Right(param_1,(int)local_1c);
      local_c._0_1_ = 4;
      FString::operator=(param_1,pFVar3);
      local_c = (void *)CONCAT31(local_c._1_3_,2);
      FString::~FString(local_20);
      iVar1 = FString::InStr(param_1,(FString *)&stack0x00000000,0);
    }
    iVar1 = FString::Len(param_1);
    if (0 < iVar1) {
      FString::operator+=(local_30,param_1);
    }
    FString::operator=(param_1,local_30);
    local_4 = CONCAT31(local_4._1_3_,1);
    FString::~FString(local_30);
  }
  local_4 = local_4 & 0xffffff00;
  FString::~FString((FString *)&stack0x00000008);
  local_4 = 0xffffffff;
  FString::~FString((FString *)&stack0x00000014);
  ExceptionList = local_c;
  return;
}


// ==== 100c72c0 FUN_100c72c0

int FUN_100c72c0(ushort *param_1,ushort *param_2,int param_3,int param_4)

{
  ushort uVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int local_10;
  int local_8 [2];
  
  iVar5 = 0;
  FUN_10020bb0(local_8,param_1,0,0,0,0,0,0);
  local_10 = 0;
  if (local_8[0] <= param_3) {
    appStrcpy(param_2,param_1);
    iVar5 = appStrlen(param_2);
    return iVar5;
  }
  piVar2 = *(int **)(DAT_103663c0 + 0x13c);
  iVar4 = 0;
  if (DAT_103663c0 != -0x13c) {
    uVar1 = *param_1;
    while (uVar1 != 0) {
      param_1 = param_1 + 1;
      if (uVar1 == 10) {
        param_2[iVar5] = 10;
        iVar5 = iVar5 + 1;
        break;
      }
      iVar3 = (**(code **)(*piVar2 + 0x74))(uVar1);
      if (iVar3 != 0) {
        iVar4 = iVar4 + *(int *)(iVar3 + 4);
        if (param_3 - param_4 < iVar4) break;
        param_2[iVar5] = uVar1;
        iVar5 = iVar5 + 1;
        local_10 = local_10 + 1;
      }
      uVar1 = *param_1;
    }
  }
  if (0 < param_4) {
    param_2[iVar5] = 0x2e;
    param_2[iVar5 + 1] = 0x2e;
    param_2[iVar5 + 2] = 0x2e;
    iVar5 = iVar5 + 3;
  }
  param_2[iVar5] = 0;
  return local_10;
}


// ==== 100c73d0 FUN_100c73d0

void FUN_100c73d0(int param_1,ushort *param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int local_224;
  ushort *local_220;
  undefined1 local_21c [4];
  int local_218;
  undefined1 local_214 [4];
  int local_210;
  ushort local_20c [260];
  uint local_4;
  
  local_4 = DAT_103554c4 ^ (uint)&local_224;
  local_220 = param_2;
  FUN_10020bb0(local_21c,param_1,param_3,0,0,0,0,0);
  FUN_100216e0(local_214,0x41,0);
  local_224 = local_218 / local_210;
  if (param_4 / local_210 < local_218 / local_210) {
    local_224 = param_4 / local_210;
  }
  iVar2 = 0;
  iVar3 = 0;
  if (0 < local_224) {
    do {
      if (iVar3 == local_224 + -1) {
        uVar4 = 0xc;
      }
      else {
        uVar4 = 0;
      }
      iVar1 = FUN_100c72c0(param_1 + iVar2 * 2,local_20c,param_3,uVar4);
      iVar2 = iVar2 + iVar1;
      appStrcat(local_220,local_20c);
      iVar3 = iVar3 + 1;
    } while (iVar3 < local_224);
  }
  __security_check_cookie(local_4 ^ (uint)&local_224);
  return;
}


// ==== 100c74c0 FUN_100c74c0

void FUN_100c74c0(LPCWSTR param_1,LPSTR param_2)

{
  WideCharToMultiByte(0,0,param_1,-1,param_2,0x1040,(LPCSTR)0x0,(LPBOOL)0x0);
  return;
}


// ==== 100c74e0 FUN_100c74e0

void FUN_100c74e0(LPCSTR param_1,LPWSTR param_2)

{
  MultiByteToWideChar(0,0,param_1,-1,param_2,0x1040);
  return;
}


// ==== 100c7500 FUN_100c7500

void FUN_100c7500(LPCSTR param_1,LPWSTR param_2)

{
  char cVar1;
  LPCSTR pCVar2;
  
  pCVar2 = param_1;
  do {
    cVar1 = *pCVar2;
    pCVar2 = pCVar2 + 1;
  } while (cVar1 != '\0');
  MultiByteToWideChar(0xfde9,0,param_1,(int)pCVar2 - (int)(param_1 + 1),param_2,0x1040);
  return;
}


// ==== 100c7540 FUN_100c7540

void FUN_100c7540(LPCWSTR param_1,LPSTR param_2)

{
  WideCharToMultiByte(0xfde9,0,param_1,-1,param_2,0x1040,(LPCSTR)0x0,(LPBOOL)0x0);
  return;
}


// ==== 100c7570 FUN_100c7570

void FUN_100c7570(LPCWSTR param_1,LPWSTR param_2)

{
  DWORD local_4;
  
  local_4 = 0x104;
  UrlCanonicalizeW(param_1,param_2,&local_4,0x28001000);
  return;
}


// ==== 100c75a0 FUN_100c75a0

void FUN_100c75a0(undefined4 param_1,undefined4 param_2)

{
  undefined4 local_4;
  
  local_4 = 0x104;
  InternetCanonicalizeUrlW(param_1,param_2,&local_4,0x30000000);
  return;
}


// ==== 100c75d0 FUN_100c75d0

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


// ==== 100c76b0 FUN_100c76b0

int FUN_100c76b0(void)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  ushort *puVar5;
  int iVar6;
  uint uStack_54;
  FString local_44 [12];
  FString local_38 [20];
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_101f62c4;
  local_10 = ExceptionList;
  uStack_54 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_54;
  ExceptionList = &local_10;
  local_8._0_1_ = 2;
  local_8._1_3_ = 0;
  FString::Locs((FString *)&stack0x00000004);
  local_8._0_1_ = 3;
  FString::Locs((FString *)&stack0x00000010);
  local_8 = CONCAT31(local_8._1_3_,4);
  iVar4 = FString::Len(local_44);
  local_24 = iVar4;
  local_20 = FString::Len(local_38);
  local_18 = iVar4;
  if (local_20 < iVar4) {
    local_18 = local_20;
  }
  local_1c = 0;
  do {
    iVar3 = local_1c;
    if (local_18 <= local_1c) {
      if (local_20 < iVar4) {
LAB_100c77c4:
        local_8._0_1_ = 3;
        FString::~FString(local_38);
        local_8._0_1_ = 2;
        FString::~FString(local_44);
        local_8 = (uint)local_8._1_3_ << 8;
        FString::~FString((FString *)&stack0x00000004);
        local_8 = 0xffffffff;
        FString::~FString((FString *)&stack0x00000010);
        ExceptionList = local_10;
        return 1;
      }
      local_8._0_1_ = 3;
      if (local_20 <= iVar4) {
        FString::~FString(local_38);
        local_8._0_1_ = 2;
        FString::~FString(local_44);
        local_8 = (uint)local_8._1_3_ << 8;
        FString::~FString((FString *)&stack0x00000004);
        local_8 = 0xffffffff;
        FString::~FString((FString *)&stack0x00000010);
        ExceptionList = local_10;
        return 0;
      }
LAB_100c777b:
      local_8._0_1_ = 3;
      FString::~FString(local_38);
      local_8._0_1_ = 2;
      FString::~FString(local_44);
      local_8 = (uint)local_8._1_3_ << 8;
      FString::~FString((FString *)&stack0x00000004);
      local_8 = 0xffffffff;
      FString::~FString((FString *)&stack0x00000010);
      ExceptionList = local_10;
      return -1;
    }
    puVar5 = FString::operator[](local_44,local_1c);
    iVar4 = FUN_100c6c90(*puVar5);
    puVar5 = FString::operator[](local_38,iVar3);
    iVar6 = FUN_100c6c90(*puVar5);
    if (iVar4 == 0) {
      if (iVar6 != 0) {
        goto LAB_100c777b;
      }
    }
    else if (iVar6 == 0) goto LAB_100c77c4;
    puVar5 = FString::operator[](local_38,iVar3);
    uVar1 = *puVar5;
    puVar5 = FString::operator[](local_44,iVar3);
    uVar2 = *puVar5;
    if ((uint)uVar2 - (uint)uVar1 != 0) {
      local_8._0_1_ = 3;
      FString::~FString(local_38);
      local_8._0_1_ = 2;
      FString::~FString(local_44);
      local_8 = (uint)local_8._1_3_ << 8;
      FString::~FString((FString *)&stack0x00000004);
      local_8 = 0xffffffff;
      FString::~FString((FString *)&stack0x00000010);
      ExceptionList = local_10;
      return (uint)uVar2 - (uint)uVar1;
    }
    local_1c = iVar3 + 1;
    iVar4 = local_24;
  } while( true );
}


// ==== 100c78e5 Catch@100c78e5

void Catch_100c78e5(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x24) = *(undefined4 *)(unaff_EBP + -0x28);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x24,&DAT_102a47f0);
}


// ==== 100c78f9 Catch@100c78f9

void Catch_100c78f9(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"Util::MsnStrcmp");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100c7920 FUN_100c7920

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

void FUN_100c7920(undefined4 param_1,undefined4 param_2)

{
  FBlowFish local_1168 [4168];
  uchar local_120 [24];
  uchar local_108 [260];
  uint local_4;
  
  local_4 = DAT_103554c4 ^ (uint)local_1168;
  FBlowFish::FBlowFish(local_1168);
  builtin_memcpy(local_120,"[;\'.]94-31==-%&@!^+]",0x15);
  appMemset(local_108,0,0x104);
  local_108[0] = '.';
  local_108[1] = 0xdf;
  local_108[2] = 0xa0;
  local_108[3] = 0xc5;
  local_108[4] = 0xfb;
  local_108[5] = 'w';
  local_108[6] = '\x11';
  local_108[7] = 'W';
  local_108[0xc] = '\t';
  local_108[0xd] = '\x02';
  local_108[0xe] = '\x10';
  local_108[0xf] = 0xc5;
  local_108[8] = 0xc5;
  local_108[9] = 0xca;
  local_108[10] = ' ';
  local_108[0xb] = '5';
  FBlowFish::InitializeBlowfish(local_1168,local_120,0x15);
  FBlowFish::BlowfishDecrypt(local_1168,local_108,0x10);
  FUN_100c74e0(local_108,param_1);
  appMemset(local_108,0,0x104);
  local_108[4] = 0xe3;
  local_108[5] = 't';
  local_108[6] = '$';
  local_108[7] = '\x1c';
  local_108[0] = 'k';
  local_108[1] = 'B';
  local_108[2] = 0x85;
  local_108[3] = 'C';
  local_108[8] = '\x1c';
  local_108[9] = 0xb3;
  local_108[10] = 0xb5;
  local_108[0xb] = '.';
  local_108[0xc] = '\f';
  local_108[0xd] = 0xcc;
  local_108[0xe] = 'D';
  local_108[0xf] = '\x10';
  FBlowFish::InitializeBlowfish(local_1168,local_120,0x15);
  FBlowFish::BlowfishDecrypt(local_1168,local_108,0x10);
  FUN_100c74e0(local_108,param_2);
  __security_check_cookie(local_4 ^ (uint)local_1168);
  return;
}


// ==== 100c7ac0 FUN_100c7ac0

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


// ==== 100c7c60 FUN_100c7c60

undefined4 FUN_100c7c60(void)

{
  undefined4 uVar1;
  int in_stack_00000010;
  int in_stack_00000020;
  FString aFStack_4c [4];
  undefined4 uStack_48;
  FString aFStack_40 [8];
  undefined4 uStack_38;
  uint uStack_34;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_101f6304;
  local_10 = ExceptionList;
  uStack_34 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_8._0_1_ = 2;
  local_8._1_3_ = 0;
  if (in_stack_00000010 == 0) {
    if (in_stack_00000020 != 0) {
      local_8 = 0;
      uStack_38 = 0x100c7ce4;
      FString::~FString((FString *)&stack0x00000004);
      local_8 = 0xffffffff;
      uStack_38 = 0x100c7cf4;
      FString::~FString((FString *)&stack0x00000014);
      ExceptionList = local_10;
      return 1;
    }
  }
  else if (in_stack_00000020 == 0) {
    local_8 = 0;
    uStack_38 = 0x100c7cae;
    FString::~FString((FString *)&stack0x00000004);
    local_8 = 0xffffffff;
    uStack_38 = 0x100c7cbe;
    FString::~FString((FString *)&stack0x00000014);
    ExceptionList = local_10;
    return 0xffffffff;
  }
  uStack_48 = 0x100c7d1d;
  FString::FString(aFStack_40,(FString *)&stack0x00000014);
  local_8._0_1_ = 3;
  FString::FString(aFStack_4c,(FString *)&stack0x00000004);
  local_8._0_1_ = 2;
  uVar1 = FUN_100c76b0();
  local_8 = (uint)local_8._1_3_ << 8;
  uStack_38 = 0x100c7d51;
  FString::~FString((FString *)&stack0x00000004);
  local_8 = 0xffffffff;
  uStack_38 = 0x100c7d61;
  FString::~FString((FString *)&stack0x00000014);
  ExceptionList = local_10;
  return uVar1;
}


// ==== 100c7d75 Catch@100c7d75

void Catch_100c7d75(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x20);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 100c7d89 Catch@100c7d89

void Catch_100c7d89(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"Util::MsnCompareFriend");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100c7db0 FUN_100c7db0

void FUN_100c7db0(void)

{
  undefined4 *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101f6328;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_100ef520(DAT_103554c4 ^ (uint)&stack0xffffffec);
  *in_ECX = XMLInvenWeightData::vftable;
  ExceptionList = local_c;
  return;
}


// ==== 100c7e10 FUN_100c7e10

undefined4 FUN_100c7e10(void)

{
  int iVar1;
  FString *this;
  ushort *puVar2;
  undefined4 *puVar3;
  undefined4 *in_ECX;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uStack_38;
  FString local_28 [20];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_101f6359;
  local_10 = ExceptionList;
  uStack_38 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_38;
  ExceptionList = &local_10;
  local_8 = 0;
  this = (FString *)FString::Printf((ushort *)local_28,L"%s.xdat",L"Interface");
  local_8._0_1_ = 1;
  iVar1 = **(int **)GFileManager_exref;
  uVar5 = *(undefined4 *)GNull_exref;
  uVar4 = 4;
  puVar2 = FString::operator*(this);
  puVar3 = (undefined4 *)(**(code **)(iVar1 + 0xc))(puVar2,uVar4,uVar5);
  local_8 = (uint)local_8._1_3_ << 8;
  FString::~FString(local_28);
  if (puVar3 == (undefined4 *)0x0) {
    ExceptionList = local_10;
    return 0;
  }
  (**(code **)*in_ECX)(puVar3);
  (**(code **)*puVar3)(1);
  ExceptionList = local_10;
  return 1;
}


// ==== 100c7eda Catch@100c7eda

void Catch_100c7eda(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 100c7eee Catch@100c7eee

void Catch_100c7eee(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"XMLDataManager::SaveXdat");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100c7f10 FUN_100c7f10

undefined4 FUN_100c7f10(void)

{
  FString *this;
  ushort *puVar1;
  int *piVar2;
  int iVar3;
  undefined4 *in_ECX;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uStack_38;
  FString local_28 [20];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_101f6389;
  local_10 = ExceptionList;
  uStack_38 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_38;
  ExceptionList = &local_10;
  local_8 = 0;
  this = (FString *)FString::Printf((ushort *)local_28,L"%s.xdat",L"Interface");
  local_8._0_1_ = 1;
  iVar3 = **(int **)GFileManager_exref;
  uVar5 = *(undefined4 *)GNull_exref;
  uVar4 = 0;
  puVar1 = FString::operator*(this);
  piVar2 = (int *)(**(code **)(iVar3 + 8))(puVar1,uVar4,uVar5);
  local_8 = (uint)local_8._1_3_ << 8;
  FString::~FString(local_28);
  if (piVar2 != (int *)0x0) {
    iVar3 = (**(code **)(*piVar2 + 0x2c))();
    if (0 < iVar3) {
      (**(code **)*in_ECX)(piVar2);
      (**(code **)*piVar2)(1);
      ExceptionList = local_10;
      return 1;
    }
  }
  ExceptionList = local_10;
  return 0;
}


// ==== 100c7fe7 Catch@100c7fe7

void Catch_100c7fe7(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 100c7ffb Catch@100c7ffb

void Catch_100c7ffb(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"XMLDataManager::LoadXdat");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100c8020 FUN_100c8020

void FUN_100c8020(void)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 0x68) = 0;
  return;
}


// ==== 100c8072 Catch@100c8072

void Catch_100c8072(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 100c8086 Catch@100c8086

void Catch_100c8086(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"XMLDataManager::Init");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100c80b0 FUN_100c80b0

void FUN_100c80b0(void)

{
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101f63d9;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 100c8100 FUN_100c8100

void FUN_100c8100(ushort *param_1,undefined4 *param_2)

{
  int in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101f640c;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FString::FString((FString *)(in_ECX + 4),param_1);
  *(undefined4 *)(in_ECX + 0x10) = *param_2;
  ExceptionList = local_c;
  return;
}


// ==== 100c8170 FUN_100c8170

void FUN_100c8170(undefined4 *param_1,ushort *param_2)

{
  int in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101f643c;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined4 *)(in_ECX + 4) = *param_1;
  FString::FString((FString *)(in_ECX + 8),param_2);
  ExceptionList = local_c;
  return;
}


// ==== 100c81d0 FUN_100c81d0

FString * FUN_100c81d0(FString *param_1)

{
  int in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101f647a;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FString::FString(param_1,(FString *)(in_ECX + 0x158));
  ExceptionList = local_c;
  return param_1;
}


// ==== 100c8240 FUN_100c8240

int * FUN_100c8240(void)

{
  int iVar1;
  int *piVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101f6614;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8._0_1_ = 1;
  local_8._1_3_ = 0;
  piVar2 = (int *)0x0;
  iVar1 = FString::operator==((FString *)&stack0x00000004,(ushort *)L"Window");
  if (iVar1 == 0) {
    iVar1 = FString::operator==((FString *)&stack0x00000004,(ushort *)L"Button");
    if (iVar1 != 0) {
      iVar1 = FUN_10004ed0(200);
      local_8 = CONCAT31(local_8._1_3_,3);
      if (iVar1 == 0) goto LAB_100c89de;
      piVar2 = (int *)FUN_100d3fd0();
      goto LAB_100c89e0;
    }
    iVar1 = FString::operator==((FString *)&stack0x00000004,(ushort *)L"TextBox");
    if (iVar1 != 0) {
      iVar1 = FUN_10004ed0(0xc0);
      local_8 = CONCAT31(local_8._1_3_,4);
      if (iVar1 == 0) goto LAB_100c89de;
      piVar2 = (int *)FUN_100ebf70();
      goto LAB_100c89e0;
    }
    iVar1 = FString::operator==((FString *)&stack0x00000004,(ushort *)L"EditBox");
    if (iVar1 != 0) {
      iVar1 = FUN_10004ed0(0x98);
      local_8 = CONCAT31(local_8._1_3_,5);
      if (iVar1 == 0) goto LAB_100c89de;
      piVar2 = (int *)FUN_100dae70();
      goto LAB_100c89e0;
    }
    iVar1 = FString::operator==((FString *)&stack0x00000004,(ushort *)L"Texture");
    if (iVar1 != 0) {
      iVar1 = FUN_10004ed0(0xb4);
      local_8 = CONCAT31(local_8._1_3_,6);
      if (iVar1 == 0) goto LAB_100c89de;
      piVar2 = (int *)FUN_100ed8a0();
      goto LAB_100c89e0;
    }
    iVar1 = FString::operator==((FString *)&stack0x00000004,(ushort *)L"ChatWindow");
    if (iVar1 != 0) {
      iVar1 = FUN_10004ed0(0x8c);
      local_8 = CONCAT31(local_8._1_3_,7);
      if (iVar1 == 0) goto LAB_100c89de;
      piVar2 = (int *)FUN_100d4b40();
      goto LAB_100c89e0;
    }
    iVar1 = FString::operator==((FString *)&stack0x00000004,(ushort *)&DAT_1025924c);
    if (iVar1 != 0) {
      iVar1 = FUN_10004ed0(0x94);
      local_8 = CONCAT31(local_8._1_3_,8);
      if (iVar1 == 0) goto LAB_100c89de;
      piVar2 = (int *)FUN_100ea4b0();
      goto LAB_100c89e0;
    }
    iVar1 = FString::operator==((FString *)&stack0x00000004,(ushort *)L"ItemWindow");
    if (iVar1 != 0) {
      iVar1 = FUN_10004ed0(0x114);
      local_8 = CONCAT31(local_8._1_3_,9);
      if (iVar1 == 0) goto LAB_100c89de;
      piVar2 = (int *)FUN_100de960();
      goto LAB_100c89e0;
    }
    iVar1 = FString::operator==((FString *)&stack0x00000004,(ushort *)L"CheckBox");
    if (iVar1 != 0) {
      iVar1 = FUN_10004ed0(200);
      local_8 = CONCAT31(local_8._1_3_,10);
      if (iVar1 == 0) goto LAB_100c89de;
      piVar2 = (int *)FUN_100d4fd0();
      goto LAB_100c89e0;
    }
    iVar1 = FString::operator==((FString *)&stack0x00000004,(ushort *)L"ComboBox");
    if (iVar1 != 0) {
      iVar1 = FUN_10004ed0(0x94);
      local_8 = CONCAT31(local_8._1_3_,0xb);
      if (iVar1 == 0) goto LAB_100c89de;
      piVar2 = (int *)FUN_100d66e0();
      goto LAB_100c89e0;
    }
    iVar1 = FString::operator==((FString *)&stack0x00000004,(ushort *)L"Progress");
    if (iVar1 != 0) {
      iVar1 = FUN_10004ed0(0xa4);
      local_8 = CONCAT31(local_8._1_3_,0xc);
      if (iVar1 == 0) goto LAB_100c89de;
      piVar2 = (int *)FUN_100e3710();
      goto LAB_100c89e0;
    }
    iVar1 = FString::operator==((FString *)&stack0x00000004,(ushort *)L"MultiEdit");
    if (iVar1 != 0) {
      iVar1 = FUN_10004ed0(0x90);
      local_8 = CONCAT31(local_8._1_3_,0xd);
      if (iVar1 == 0) goto LAB_100c89de;
      piVar2 = (int *)FUN_100e1560();
      goto LAB_100c89e0;
    }
    iVar1 = FString::operator==((FString *)&stack0x00000004,(ushort *)L"ListCtrl");
    if (iVar1 != 0) {
      iVar1 = FUN_10004ed0(0xa8);
      local_8 = CONCAT31(local_8._1_3_,0xe);
      if (iVar1 == 0) goto LAB_100c89de;
      piVar2 = (int *)FUN_100e06f0();
      goto LAB_100c89e0;
    }
    iVar1 = FString::operator==((FString *)&stack0x00000004,(ushort *)L"ListBox");
    if (iVar1 != 0) {
      iVar1 = FUN_10004ed0(0x94);
      local_8 = CONCAT31(local_8._1_3_,0xf);
      if (iVar1 == 0) goto LAB_100c89de;
      piVar2 = (int *)FUN_100dfe80();
      goto LAB_100c89e0;
    }
    iVar1 = FString::operator==((FString *)&stack0x00000004,(ushort *)L"StatusBar");
    if (iVar1 != 0) {
      iVar1 = FUN_10004ed0(0xcc);
      local_8 = CONCAT31(local_8._1_3_,0x10);
      if (iVar1 == 0) goto LAB_100c89de;
      piVar2 = (int *)FUN_100e8470();
      goto LAB_100c89e0;
    }
    iVar1 = FString::operator==((FString *)&stack0x00000004,(ushort *)L"NameCtrl");
    if (iVar1 != 0) {
      iVar1 = FUN_10004ed0(0x88);
      local_8 = CONCAT31(local_8._1_3_,0x11);
      if (iVar1 == 0) goto LAB_100c89de;
      piVar2 = (int *)FUN_100e2360();
      goto LAB_100c89e0;
    }
    iVar1 = FString::operator==((FString *)&stack0x00000004,(ushort *)L"MinimapCtrl");
    if (iVar1 != 0) {
      iVar1 = FUN_10004ed0(0xa0);
      local_8 = CONCAT31(local_8._1_3_,0x12);
      if (iVar1 == 0) goto LAB_100c89de;
      piVar2 = (int *)FUN_100e0f10();
      goto LAB_100c89e0;
    }
    iVar1 = FString::operator==((FString *)&stack0x00000004,(ushort *)L"ShortcutItemWindow");
    if (iVar1 != 0) {
      iVar1 = FUN_10004ed0(0x8c);
      local_8 = CONCAT31(local_8._1_3_,0x13);
      if (iVar1 == 0) goto LAB_100c89de;
      piVar2 = (int *)FUN_100e6f80();
      goto LAB_100c89e0;
    }
    iVar1 = FString::operator==((FString *)&stack0x00000004,(ushort *)L"TreeCtrl");
    if (iVar1 != 0) {
      iVar1 = FUN_10004ed0(0x90);
      local_8 = CONCAT31(local_8._1_3_,0x14);
      if (iVar1 == 0) goto LAB_100c89de;
      piVar2 = (int *)FUN_100ee420();
      goto LAB_100c89e0;
    }
    iVar1 = FString::operator==((FString *)&stack0x00000004,(ushort *)L"SliderCtrl");
    if (iVar1 != 0) {
      iVar1 = FUN_10004ed0(0x118);
      local_8 = CONCAT31(local_8._1_3_,0x15);
      if (iVar1 == 0) goto LAB_100c89de;
      piVar2 = (int *)FUN_100e7760();
      goto LAB_100c89e0;
    }
    iVar1 = FString::operator==((FString *)&stack0x00000004,(ushort *)L"EffectButton");
    if (iVar1 != 0) {
      iVar1 = FUN_10004ed0(200);
      local_8 = CONCAT31(local_8._1_3_,0x16);
      if (iVar1 == 0) goto LAB_100c89de;
      piVar2 = (int *)FUN_100db640();
      goto LAB_100c89e0;
    }
    iVar1 = FString::operator==((FString *)&stack0x00000004,(ushort *)L"TextListBox");
    if (iVar1 != 0) {
      iVar1 = FUN_10004ed0(0x98);
      local_8 = CONCAT31(local_8._1_3_,0x17);
      if (iVar1 == 0) goto LAB_100c89de;
      piVar2 = (int *)FUN_100ec9e0();
      goto LAB_100c89e0;
    }
    iVar1 = FString::operator==((FString *)&stack0x00000004,(ushort *)L"Radar");
    if (iVar1 != 0) {
      iVar1 = FUN_10004ed0(0x88);
      local_8 = CONCAT31(local_8._1_3_,0x18);
      if (iVar1 == 0) goto LAB_100c89de;
      piVar2 = (int *)FUN_100e3e50();
      goto LAB_100c89e0;
    }
    iVar1 = FString::operator==((FString *)&stack0x00000004,(ushort *)L"HtmlCtrl");
    if (iVar1 != 0) {
      iVar1 = FUN_10004ed0(0x94);
      local_8 = CONCAT31(local_8._1_3_,0x19);
      if (iVar1 == 0) goto LAB_100c89de;
      piVar2 = (int *)FUN_100dcc40();
      goto LAB_100c89e0;
    }
    iVar1 = FString::operator==((FString *)&stack0x00000004,(ushort *)L"RadioButton");
    if (iVar1 != 0) {
      iVar1 = FUN_10004ed0(0x94);
      local_8 = CONCAT31(local_8._1_3_,0x1a);
      if (iVar1 == 0) goto LAB_100c89de;
      piVar2 = (int *)FUN_100e4360();
      goto LAB_100c89e0;
    }
    iVar1 = FString::operator==((FString *)&stack0x00000004,(ushort *)L"InvenWeight");
    if (iVar1 != 0) {
      iVar1 = FUN_10004ed0(0x88);
      local_8 = CONCAT31(local_8._1_3_,0x1b);
      if (iVar1 == 0) goto LAB_100c89de;
      piVar2 = (int *)FUN_100c7db0();
      goto LAB_100c89e0;
    }
    iVar1 = FString::operator==((FString *)&stack0x00000004,(ushort *)L"StatusIconCtrl");
    if (iVar1 != 0) {
      iVar1 = FUN_10004ed0(0x90);
      local_8 = CONCAT31(local_8._1_3_,0x1c);
      if (iVar1 == 0) goto LAB_100c89de;
      piVar2 = (int *)FUN_100e8e30();
      goto LAB_100c89e0;
    }
    iVar1 = FString::operator==((FString *)&stack0x00000004,(ushort *)L"BarCtrl");
    if (iVar1 != 0) {
      iVar1 = FUN_10004ed0(0xa8);
      local_8 = CONCAT31(local_8._1_3_,0x1d);
      if (iVar1 == 0) goto LAB_100c89de;
      piVar2 = (int *)FUN_100d2d30();
      goto LAB_100c89e0;
    }
    iVar1 = FString::operator==((FString *)&stack0x00000004,(ushort *)L"ScrollArea");
    if (iVar1 != 0) {
      iVar1 = FUN_10004ed0(0x90);
      local_8 = CONCAT31(local_8._1_3_,0x1e);
      if (iVar1 == 0) goto LAB_100c89de;
      piVar2 = (int *)FUN_100e4be0();
      goto LAB_100c89e0;
    }
    iVar1 = FString::operator==((FString *)&stack0x00000004,(ushort *)L"FishViewportWindow");
    if (iVar1 != 0) {
      iVar1 = FUN_10004ed0(0xe8);
      local_8 = CONCAT31(local_8._1_3_,0x1f);
      if (iVar1 == 0) goto LAB_100c89de;
      piVar2 = (int *)FUN_100dc030();
      goto LAB_100c89e0;
    }
    iVar1 = FString::operator==((FString *)&stack0x00000004,(ushort *)L"MultiSellItemInfo");
    if (iVar1 != 0) {
      iVar1 = FUN_10004ed0(0x88);
      local_8 = CONCAT31(local_8._1_3_,0x20);
      if (iVar1 == 0) goto LAB_100c89de;
      piVar2 = (int *)FUN_100e1a00();
      goto LAB_100c89e0;
    }
    iVar1 = FString::operator==((FString *)&stack0x00000004,(ushort *)L"MUltiSellNeededItem");
    if (iVar1 != 0) {
      iVar1 = FUN_10004ed0(0x88);
      local_8 = CONCAT31(local_8._1_3_,0x21);
      if (iVar1 == 0) goto LAB_100c89de;
      piVar2 = (int *)FUN_100e1dc0();
      goto LAB_100c89e0;
    }
    iVar1 = FString::operator==((FString *)&stack0x00000004,(ushort *)L"DrawPanel");
    if (iVar1 != 0) {
      iVar1 = FUN_10004ed0(0x8c);
      local_8 = CONCAT31(local_8._1_3_,0x22);
      if (iVar1 == 0) goto LAB_100c89de;
      piVar2 = (int *)FUN_100da780();
      goto LAB_100c89e0;
    }
  }
  else {
    iVar1 = FUN_10004ed0(0x164);
    local_8 = CONCAT31(local_8._1_3_,2);
    if (iVar1 == 0) {
LAB_100c89de:
      piVar2 = (int *)0x0;
    }
    else {
      piVar2 = (int *)FUN_100f3330();
    }
LAB_100c89e0:
    local_8._0_1_ = 1;
    if (piVar2 != (int *)0x0) goto LAB_100c8a01;
  }
  appFailAssert("pUIData",".\\XML\\XMLDataManager.cpp",0x22c);
LAB_100c8a01:
  (**(code **)(*piVar2 + 0x10))(&stack0x00000004);
  local_8 = 0xffffffff;
  FString::~FString((FString *)&stack0x00000004);
  ExceptionList = local_10;
  return piVar2;
}


// ==== 100c8a34 Catch@100c8a34

void Catch_100c8a34(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 100c8a48 Catch@100c8a48

void Catch_100c8a48(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"XMLDataManager::CreateUIData");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100c8a70 FUN_100c8a70

void FUN_100c8a70(byte param_1)

{
  FUN_100dd0a0();
  if ((param_1 & 1) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))();
  }
  return;
}


// ==== 100c8aa0 FUN_100c8aa0

int FUN_100c8aa0(FString *param_1)

{
  int iVar1;
  ushort *puVar2;
  uint uVar3;
  int iVar4;
  int *in_ECX;
  
  puVar2 = FString::operator*(param_1);
  uVar3 = FUN_10048c20(puVar2);
  iVar1 = *(int *)(in_ECX[3] + (in_ECX[4] - 1U & uVar3) * 4);
  while( true ) {
    if (iVar1 == -1) {
      return 0;
    }
    iVar4 = FString::operator==((FString *)(*in_ECX + iVar1 * 0x14 + 4),param_1);
    if (iVar4 != 0) break;
    iVar1 = *(int *)(iVar1 * 0x14 + *in_ECX);
  }
  return *in_ECX + 0x10 + iVar1 * 0x14;
}


// ==== 100c8b10 FUN_100c8b10

void FUN_100c8b10(void)

{
  int iVar1;
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_101f6639;
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


// ==== 100c8bb0 FUN_100c8bb0

undefined4 * FUN_100c8bb0(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 *puVar2;
  ushort *puVar3;
  uint uVar4;
  int in_ECX;
  
  iVar1 = FUN_10097bd0(0x14);
  if (iVar1 == 0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puVar2 = (undefined4 *)FUN_100c8100(param_1,param_2);
  }
  puVar3 = FString::operator*((FString *)(puVar2 + 1));
  uVar4 = FUN_10048c20(puVar3);
  uVar4 = *(int *)(in_ECX + 0x10) - 1U & uVar4;
  *puVar2 = *(undefined4 *)(*(int *)(in_ECX + 0xc) + uVar4 * 4);
  *(int *)(*(int *)(in_ECX + 0xc) + uVar4 * 4) = *(int *)(in_ECX + 4) + -1;
  if (*(int *)(in_ECX + 0x10) * 2 + 8 < *(int *)(in_ECX + 4)) {
    *(int *)(in_ECX + 0x10) = *(int *)(in_ECX + 0x10) * 2;
    FUN_1006b150();
  }
  return puVar2 + 4;
}


// ==== 100c8c30 FUN_100c8c30

void FUN_100c8c30(void)

{
  UObject *this;
  int iVar1;
  int iVar2;
  uint uVar3;
  int *in_ECX;
  int iVar4;
  undefined4 *puVar5;
  
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
  if (0 < in_ECX[1]) {
    iVar2 = 0;
    iVar4 = 0;
    do {
      puVar5 = (undefined4 *)(*in_ECX + iVar2);
      this = (UObject *)puVar5[1];
      if (this == (UObject *)0x0) {
        uVar3 = 0;
      }
      else {
        uVar3 = UObject::GetIndex(this);
      }
      iVar2 = iVar2 + 0x14;
      uVar3 = in_ECX[4] - 1U & uVar3;
      *puVar5 = *(undefined4 *)(iVar1 + uVar3 * 4);
      *(int *)(iVar1 + uVar3 * 4) = iVar4;
      iVar4 = iVar4 + 1;
    } while (iVar4 < in_ECX[1]);
  }
  if (in_ECX[3] != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))(in_ECX[3]);
  }
  in_ECX[3] = iVar1;
  return;
}


// ==== 100c8cf0 FUN_100c8cf0

undefined4 * FUN_100c8cf0(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  int in_ECX;
  
  iVar1 = FUN_10097bd0(0x14);
  if (iVar1 == 0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puVar2 = (undefined4 *)FUN_100c8170(param_1,param_2);
  }
  if ((UObject *)puVar2[1] == (UObject *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = UObject::GetIndex((UObject *)puVar2[1]);
  }
  uVar3 = *(int *)(in_ECX + 0x10) - 1U & uVar3;
  *puVar2 = *(undefined4 *)(*(int *)(in_ECX + 0xc) + uVar3 * 4);
  *(int *)(*(int *)(in_ECX + 0xc) + uVar3 * 4) = *(int *)(in_ECX + 4) + -1;
  if (*(int *)(in_ECX + 0x10) * 2 + 8 < *(int *)(in_ECX + 4)) {
    *(int *)(in_ECX + 0x10) = *(int *)(in_ECX + 0x10) * 2;
    FUN_100c8c30();
  }
  return puVar2 + 2;
}


// ==== 100c8d70 FUN_100c8d70

void FUN_100c8d70(int param_1,int param_2)

{
  FArray *in_ECX;
  int iVar1;
  int iVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101f666c;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (param_1 < 0) {
    appFailAssert("Index>=0","d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h"
                  ,0x203);
  }
  if (*(int *)(in_ECX + 4) < param_1) {
    appFailAssert("Index<=ArrayNum",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x204);
  }
  iVar2 = param_2 + param_1;
  if (*(int *)(in_ECX + 4) < iVar2) {
    appFailAssert("Index+Count<=ArrayNum",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x205);
  }
  if (param_1 < iVar2) {
    iVar1 = param_1 * 0x14;
    iVar2 = iVar2 - param_1;
    do {
      local_4 = 0xffffffff;
      FString::~FString((FString *)(*(int *)in_ECX + iVar1 + 4));
      iVar1 = iVar1 + 0x14;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  FArray::Remove(in_ECX,param_1,param_2,0x14);
  ExceptionList = local_c;
  return;
}


// ==== 100c8e50 FUN_100c8e50

void FUN_100c8e50(int param_1,int param_2)

{
  FArray *in_ECX;
  int iVar1;
  int iVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101f669c;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (param_1 < 0) {
    appFailAssert("Index>=0","d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h"
                  ,0x203);
  }
  if (*(int *)(in_ECX + 4) < param_1) {
    appFailAssert("Index<=ArrayNum",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x204);
  }
  iVar2 = param_2 + param_1;
  if (*(int *)(in_ECX + 4) < iVar2) {
    appFailAssert("Index+Count<=ArrayNum",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x205);
  }
  if (param_1 < iVar2) {
    iVar1 = param_1 * 0x14;
    iVar2 = iVar2 - param_1;
    do {
      local_4 = 0xffffffff;
      FString::~FString((FString *)(*(int *)in_ECX + iVar1 + 8));
      iVar1 = iVar1 + 0x14;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  FArray::Remove(in_ECX,param_1,param_2,0x14);
  ExceptionList = local_c;
  return;
}


// ==== 100c8f30 FUN_100c8f30

undefined4 FUN_100c8f30(void)

{
  int *piVar1;
  undefined4 uVar2;
  FString *pFVar3;
  ushort *puVar4;
  int iVar5;
  int in_ECX;
  int iVar6;
  uint uStack_3c;
  FString local_2c [20];
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_101f66d2;
  local_10 = ExceptionList;
  uStack_3c = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_3c;
  ExceptionList = &local_10;
  iVar6 = 0;
  local_8._0_1_ = 0;
  local_8._1_3_ = 0;
  uVar2 = FUN_10005c30(L"Starting to create Shortcuts...");
  FUN_100d06e0(uVar2);
  while( true ) {
    local_18 = iVar6;
    if (*(int *)(in_ECX + 0x28) <= iVar6) {
      uVar2 = FUN_10005c30(L"Finished creating Shortcuts with no error.");
      FUN_100d06e0(uVar2);
      ExceptionList = local_10;
      return 1;
    }
    piVar1 = *(int **)(*(int *)(in_ECX + 0x24) + iVar6 * 4);
    if (piVar1 == (int *)0x0) break;
    pFVar3 = (FString *)(**(code **)(*piVar1 + 0x10))(local_2c);
    local_8._0_1_ = 1;
    puVar4 = FString::operator*(pFVar3);
    uVar2 = FUN_10005c30(L"Creating %s...",puVar4);
    FUN_100d06e0(uVar2);
    local_8._0_1_ = 0;
    FString::~FString(local_2c);
    iVar5 = (**(code **)(*piVar1 + 8))();
    if (iVar5 == 0) {
      pFVar3 = (FString *)(**(code **)(*piVar1 + 0x10))(local_2c);
      local_8._0_1_ = 2;
      puVar4 = FString::operator*(pFVar3);
      uVar2 = FUN_10005c30(L"XMLDataManager:Shortcut(%s) creation failed!!",puVar4);
      FUN_100d01f0(uVar2);
      local_8 = (uint)local_8._1_3_ << 8;
      FString::~FString(local_2c);
      ExceptionList = local_10;
      return 0;
    }
    iVar6 = iVar6 + 1;
  }
  uVar2 = FUN_10005c30(L"XMLDataManager:contains undefined Shortcut!!");
  FUN_100d01f0(uVar2);
  ExceptionList = local_10;
  return 0;
}


// ==== 100c9079 Catch@100c9079

void Catch_100c9079(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 100c908d Catch@100c908d

void Catch_100c908d(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"XMLDataManager::CreateShortcuts");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100c90b0 FUN_100c90b0

undefined4 FUN_100c90b0(void)

{
  int *piVar1;
  undefined4 uVar2;
  FString *pFVar3;
  ushort *puVar4;
  int iVar5;
  int in_ECX;
  int iVar6;
  uint uStack_3c;
  FString local_2c [20];
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_101f6702;
  local_10 = ExceptionList;
  uStack_3c = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_3c;
  ExceptionList = &local_10;
  iVar6 = 0;
  local_8._0_1_ = 0;
  local_8._1_3_ = 0;
  uVar2 = FUN_10005c30(L"Starting to destroy Shortcuts...");
  FUN_100d06e0(uVar2);
  while( true ) {
    local_18 = iVar6;
    if (*(int *)(in_ECX + 0x28) <= iVar6) {
      uVar2 = FUN_10005c30(L"Finished destroying Shortcuts with no error.");
      FUN_100d06e0(uVar2);
      ExceptionList = local_10;
      return 1;
    }
    piVar1 = *(int **)(*(int *)(in_ECX + 0x24) + iVar6 * 4);
    if (piVar1 == (int *)0x0) break;
    pFVar3 = (FString *)(**(code **)(*piVar1 + 0x10))(local_2c);
    local_8._0_1_ = 1;
    puVar4 = FString::operator*(pFVar3);
    uVar2 = FUN_10005c30(L"Destroying %s...",puVar4);
    FUN_100d06e0(uVar2);
    local_8._0_1_ = 0;
    FString::~FString(local_2c);
    iVar5 = (**(code **)(*piVar1 + 0xc))();
    if (iVar5 == 0) {
      pFVar3 = (FString *)(**(code **)(*piVar1 + 0x10))(local_2c);
      local_8._0_1_ = 2;
      puVar4 = FString::operator*(pFVar3);
      uVar2 = FUN_10005c30(L"XMLDataManager:Shortcut(%s) destruction failed!!",puVar4);
      FUN_100d01f0(uVar2);
      local_8 = (uint)local_8._1_3_ << 8;
      FString::~FString(local_2c);
      ExceptionList = local_10;
      return 0;
    }
    iVar6 = iVar6 + 1;
  }
  uVar2 = FUN_10005c30(L"XMLDataManager:contains undefined Shortcut!!");
  FUN_100d01f0(uVar2);
  ExceptionList = local_10;
  return 0;
}


// ==== 100c91f9 Catch@100c91f9

void Catch_100c91f9(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 100c920d Catch@100c920d

void Catch_100c920d(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"XMLDataManager::DestroyShortcuts");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100c9230 FUN_100c9230

undefined4 FUN_100c9230(void)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  int in_ECX;
  int iVar4;
  wchar_t *pwVar5;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101f6720;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  uVar2 = FUN_10005c30(L"Starting to create DefaultPosition...");
  FUN_100d06e0(uVar2);
  iVar4 = 0;
  while( true ) {
    if (*(int *)(in_ECX + 0x40) <= iVar4) {
      uVar2 = FUN_10005c30(L"Finished creating DefaultPosition with no error.");
      FUN_100d06e0(uVar2);
      ExceptionList = local_10;
      return 1;
    }
    piVar1 = *(int **)(*(int *)(in_ECX + 0x3c) + iVar4 * 4);
    if (piVar1 == (int *)0x0) break;
    iVar3 = (**(code **)(*piVar1 + 8))();
    if (iVar3 == 0) {
      pwVar5 = L"XMLDataManager:DefaultPosition creation failed!!";
      goto LAB_100c9290;
    }
    iVar4 = iVar4 + 1;
  }
  pwVar5 = L"XMLDataManager:contains undefined DefaultPosition!!";
LAB_100c9290:
  uVar2 = FUN_10005c30(pwVar5);
  FUN_100d01f0(uVar2);
  ExceptionList = local_10;
  return 0;
}


// ==== 100c92f3 Catch@100c92f3

void Catch_100c92f3(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 100c9307 Catch@100c9307

void Catch_100c9307(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"XMLDataManager::CreateDefaultPosition");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100c9330 FUN_100c9330

undefined4 FUN_100c9330(void)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  int in_ECX;
  int iVar4;
  wchar_t *pwVar5;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101f6740;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  uVar2 = FUN_10005c30(L"Starting to create Constant...");
  FUN_100d06e0(uVar2);
  iVar4 = 0;
  while( true ) {
    if (*(int *)(in_ECX + 0x4c) <= iVar4) {
      uVar2 = FUN_10005c30(L"Finished creating Constant with no error.");
      FUN_100d06e0(uVar2);
      ExceptionList = local_10;
      return 1;
    }
    piVar1 = *(int **)(*(int *)(in_ECX + 0x48) + iVar4 * 4);
    if (piVar1 == (int *)0x0) break;
    iVar3 = (**(code **)(*piVar1 + 8))();
    if (iVar3 == 0) {
      pwVar5 = L"XMLDataManager:Constant creation failed!!";
      goto LAB_100c9390;
    }
    iVar4 = iVar4 + 1;
  }
  pwVar5 = L"XMLDataManager:contains undefined Constant!!";
LAB_100c9390:
  uVar2 = FUN_10005c30(pwVar5);
  FUN_100d01f0(uVar2);
  ExceptionList = local_10;
  return 0;
}


// ==== 100c93f3 Catch@100c93f3

void Catch_100c93f3(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 100c9407 Catch@100c9407

void Catch_100c9407(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"XMLDataManager::CreateConstant");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100c9430 FUN_100c9430

undefined4 FUN_100c9430(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int in_ECX;
  int iVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101f6760;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  uVar2 = FUN_10005c30(L"Starting to destroy Constant...");
  FUN_100d06e0(uVar2);
  iVar3 = 0;
  while( true ) {
    if (*(int *)(in_ECX + 0x4c) <= iVar3) {
      for (iVar3 = 0; iVar3 < *(int *)(in_ECX + 0x4c); iVar3 = iVar3 + 1) {
      }
      FArray::Empty((FArray *)(in_ECX + 0x48),4,0);
      FUN_1000c760();
      uVar2 = FUN_10005c30(L"Finished destroying Constant with no error.");
      FUN_100d06e0(uVar2);
      ExceptionList = local_10;
      return 1;
    }
    puVar1 = *(undefined4 **)(*(int *)(in_ECX + 0x48) + iVar3 * 4);
    if (puVar1 == (undefined4 *)0x0) break;
    (**(code **)*puVar1)(1);
    iVar3 = iVar3 + 1;
  }
  uVar2 = FUN_10005c30(L"XMLDataManager:contains undefined Constant!!");
  FUN_100d01f0(uVar2);
  ExceptionList = local_10;
  return 0;
}


// ==== 100c9516 Catch@100c9516

void Catch_100c9516(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x1c) = *(undefined4 *)(unaff_EBP + -0x20);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x1c,&DAT_102a47f0);
}


// ==== 100c952a Catch@100c952a

void Catch_100c952a(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"XMLDataManager::DestroyConstant");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100c9550 FUN_100c9550

int * FUN_100c9550(FString *param_1,int *param_2)

{
  int iVar1;
  FString *pFVar2;
  int *piVar3;
  uint uVar4;
  wchar_t *pwVar5;
  uint uStack_68;
  FString local_58 [12];
  FString local_4c [12];
  FString local_40 [12];
  FString local_34 [24];
  int *local_1c;
  uint local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_101f67e9;
  local_10 = ExceptionList;
  uStack_68 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_68;
  ExceptionList = &local_10;
  local_18 = 0;
  local_8 = 0;
  iVar1 = FString::operator_int(param_1);
  if (iVar1 == 0) {
    ExceptionList = local_10;
    return (int *)0x0;
  }
  iVar1 = FString::InStr(param_1,(ushort *)&DAT_10234780,0);
  pFVar2 = param_1;
  if (0 < iVar1) {
    pFVar2 = (FString *)FString::Mid(param_1,(int)local_4c,0);
    local_8 = CONCAT31(local_8._1_3_,1);
    local_18 = 1;
  }
  FString::FString(local_40,pFVar2);
  local_8 = 3;
  if (iVar1 < 1) {
    pFVar2 = (FString *)FString::FString(local_4c,(ushort *)&DAT_1022f9f8);
    local_8 = 5;
    uVar4 = 4;
  }
  else {
    local_18 = 0;
    FString::~FString(local_4c);
    FString::Len(param_1);
    pFVar2 = (FString *)FString::Mid(param_1,(int)local_58,iVar1 + 1);
    local_8 = CONCAT31(local_8._1_3_,4);
    uVar4 = 2;
  }
  local_18 = uVar4;
  FString::FString(local_34,pFVar2);
  local_8 = 7;
  if ((uVar4 & 4) != 0) {
    uVar4 = uVar4 & 0xfffffffb;
    local_18 = uVar4;
    FString::~FString(local_4c);
  }
  local_8._0_1_ = 8;
  if ((uVar4 & 2) != 0) {
    local_18 = uVar4 & 0xfffffffd;
    FString::~FString(local_58);
  }
  local_1c = (int *)0x0;
  if (param_2 == (int *)0x0) {
LAB_100c96b0:
    piVar3 = (int *)FUN_100c8aa0();
    if ((piVar3 == (int *)0x0) || (piVar3 = (int *)*piVar3, local_1c = piVar3, piVar3 == (int *)0x0)
       ) {
      FString::operator*(param_1);
      goto LAB_100c96da;
    }
  }
  else {
    FString::FString((FString *)&stack0xffffff88,local_40);
    local_8._0_1_ = 8;
    piVar3 = (int *)(**(code **)(*param_2 + 0x134))();
    local_1c = piVar3;
    if (piVar3 == (int *)0x0) goto LAB_100c96b0;
  }
  local_1c = piVar3;
  iVar1 = FString::operator_int(local_34);
  if (iVar1 != 0) {
    pwVar5 = L"Window";
    pFVar2 = (FString *)(**(code **)(*piVar3 + 0x40))();
    iVar1 = FString::operator!=(pFVar2,(ushort *)pwVar5);
    if (iVar1 != 0) {
      FString::operator*(param_1);
LAB_100c96da:
      FUN_10005c30();
      FUN_100d01f0();
      local_8._0_1_ = 3;
      FString::~FString(local_34);
      local_8 = (uint)local_8._1_3_ << 8;
      FString::~FString(local_40);
      ExceptionList = local_10;
      return (int *)0x0;
    }
    piVar3 = (int *)FUN_100c9550();
  }
  local_8._0_1_ = 3;
  FString::~FString(local_34);
  local_8 = (uint)local_8._1_3_ << 8;
  FString::~FString(local_40);
  ExceptionList = local_10;
  return piVar3;
}


// ==== 100c978e Catch@100c978e

void Catch_100c978e(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x20) = *(undefined4 *)(unaff_EBP + -0x24);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x20,&DAT_102a47f0);
}


// ==== 100c97a2 Catch@100c97a2

void Catch_100c97a2(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"XMLDataManager::GetData");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100c97c0 FUN_100c97c0

void FUN_100c97c0(void)

{
  int iVar1;
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_101f6819;
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


// ==== 100c9860 FUN_100c9860

int FUN_100c9860(ushort *param_1,undefined4 *param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int *in_ECX;
  
  uVar1 = FUN_10048c20(param_1);
  iVar3 = *(int *)(in_ECX[3] + (uVar1 & in_ECX[4] - 1U) * 4);
  while( true ) {
    if (iVar3 == -1) {
      iVar3 = FUN_100c8bb0(param_1,param_2);
      return iVar3;
    }
    iVar2 = FString::operator==((FString *)(*in_ECX + iVar3 * 0x14 + 4),param_1);
    if (iVar2 != 0) break;
    iVar3 = *(int *)(iVar3 * 0x14 + *in_ECX);
  }
  *(undefined4 *)(iVar3 * 0x14 + 0x10 + *in_ECX) = *param_2;
  return iVar3 * 0x14 + 0x10 + *in_ECX;
}


// ==== 100c98e0 FUN_100c98e0

void FUN_100c98e0(void)

{
  int iVar1;
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_101f6849;
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


// ==== 100c9980 FUN_100c9980

void FUN_100c9980(void)

{
  int iVar1;
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_101f6879;
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


// ==== 100c9a20 FUN_100c9a20

void FUN_100c9a20(void)

{
  int iVar1;
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_101f68a9;
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


// ==== 100c9ac0 FUN_100c9ac0

void FUN_100c9ac0(void)

{
  int iVar1;
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_101f68d9;
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


// ==== 100c9b60 FUN_100c9b60

int FUN_100c9b60(int *param_1,ushort *param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int *in_ECX;
  
  if ((UObject *)*param_1 == (UObject *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = UObject::GetIndex((UObject *)*param_1);
  }
  iVar3 = *(int *)(in_ECX[3] + (in_ECX[4] - 1U & uVar2) * 4);
  if (iVar3 != -1) {
    iVar1 = *in_ECX;
    do {
      if (*(int *)(iVar1 + 4 + iVar3 * 0x14) == *param_1) {
        FString::operator=((FString *)(iVar1 + 8 + iVar3 * 0x14),param_2);
        return iVar3 * 0x14 + 8 + *in_ECX;
      }
      iVar3 = *(int *)(iVar1 + iVar3 * 0x14);
    } while (iVar3 != -1);
  }
  iVar3 = FUN_100c8cf0(param_1,param_2);
  return iVar3;
}


// ==== 100c9be0 FUN_100c9be0

void FUN_100c9be0(void)

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
    FUN_100c8c30();
    return;
  }
  return;
}


// ==== 100c9c20 FUN_100c9c20

void FUN_100c9c20(void)

{
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_101f6909;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_4 = 0;
  FUN_100c8d70(0,*(undefined4 *)(in_ECX + 4));
  local_4 = 0xffffffff;
  FArray::~FArray(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 100c9c80 FUN_100c9c80

void FUN_100c9c80(int param_1)

{
  FArray *in_ECX;
  int iVar1;
  int iVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101f693c;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  iVar2 = 0;
  if (0 < *(int *)(in_ECX + 4)) {
    iVar1 = 0;
    do {
      local_4 = 0xffffffff;
      FString::~FString((FString *)(*(int *)in_ECX + iVar1 + 4));
      iVar2 = iVar2 + 1;
      iVar1 = iVar1 + 0x14;
    } while (iVar2 < *(int *)(in_ECX + 4));
  }
  FArray::Empty(in_ECX,0x14,param_1);
  ExceptionList = local_c;
  return;
}


// ==== 100c9d00 FUN_100c9d00

void FUN_100c9d00(void)

{
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_101f6969;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_4 = 0;
  FUN_100c8e50(0,*(undefined4 *)(in_ECX + 4));
  local_4 = 0xffffffff;
  FArray::~FArray(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 100c9d60 FUN_100c9d60

void FUN_100c9d60(int param_1)

{
  FArray *in_ECX;
  int iVar1;
  int iVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101f699c;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  iVar2 = 0;
  if (0 < *(int *)(in_ECX + 4)) {
    iVar1 = 0;
    do {
      local_4 = 0xffffffff;
      FString::~FString((FString *)(*(int *)in_ECX + iVar1 + 8));
      iVar2 = iVar2 + 1;
      iVar1 = iVar1 + 0x14;
    } while (iVar2 < *(int *)(in_ECX + 4));
  }
  FArray::Empty(in_ECX,0x14,param_1);
  ExceptionList = local_c;
  return;
}


// ==== 100c9de0 FUN_100c9de0

undefined4 FUN_100c9de0(int *param_1)

{
  int iVar1;
  int *piVar2;
  FString *pFVar3;
  int iVar4;
  uint uStack_9c;
  FString local_8c [12];
  int iStack_80;
  int iStack_7c;
  int iStack_74;
  int iStack_70;
  int iStack_68;
  int iStack_64;
  int iStack_5c;
  int iStack_58;
  int local_50;
  int local_4c;
  int iStack_3c;
  int *piStack_38;
  int iStack_34;
  int *piStack_30;
  int iStack_2c;
  int *piStack_28;
  int iStack_24;
  int *local_20;
  int local_1c;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_101f6a62;
  local_10 = ExceptionList;
  uStack_9c = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_9c;
  ExceptionList = &local_10;
  local_8 = 0;
  local_20 = (int *)FUN_100cc070();
  if (local_20 == (int *)0x0) {
    FUN_10005c30();
    FUN_100d01f0();
  }
  else {
    FUN_100c80b0();
    local_8._0_1_ = 1;
    FString::FString(local_8c,(ushort *)L"Window");
    local_8._0_1_ = 2;
    iVar1 = FUN_100cd4b0();
    local_8._0_1_ = 1;
    FString::~FString(local_8c);
    if (iVar1 != 0) {
      for (local_1c = 0; local_1c < local_4c; local_1c = local_1c + 1) {
        iVar1 = *(int *)(local_50 + local_1c * 4);
        if (iVar1 == 0) {
          appFailAssert("pWindowNode",".\\XML\\XMLDataManager.cpp",0x167);
        }
        param_1 = (int *)&stack0xffffff58;
        FString::FString((FString *)&stack0xffffff58,(ushort *)L"Window");
        local_8._0_1_ = 1;
        piVar2 = (int *)FUN_100c8240();
        param_1 = piVar2;
        if (piVar2 == (int *)0x0) {
          FUN_10005c30();
          FUN_100d01f0();
          goto LAB_100c9efc;
        }
        piStack_38 = (int *)&stack0xffffff58;
        FString::FString((FString *)&stack0xffffff58,(ushort *)&DAT_1022f9f8);
        local_8._0_1_ = 1;
        iVar1 = (**(code **)(*piVar2 + 4))(iVar1);
        if (iVar1 == 0) {
          pFVar3 = (FString *)(**(code **)(*piVar2 + 0x44))();
          FString::operator*(pFVar3);
          FUN_10005c30();
          FUN_100d01f0();
          goto LAB_100c9efc;
        }
        FUN_100d9a30(&param_1);
        pFVar3 = (FString *)(**(code **)(*piVar2 + 0x44))(&param_1);
        FString::operator*(pFVar3);
        FUN_100c9860();
      }
      FUN_100c80b0();
      local_8._0_1_ = 5;
      FString::FString(local_8c,(ushort *)L"Shortcut");
      local_8._0_1_ = 6;
      iVar1 = FUN_100cd4b0();
      local_8 = CONCAT31(local_8._1_3_,5);
      FString::~FString(local_8c);
      if (iVar1 == 0) {
LAB_100ca063:
        local_8._0_1_ = 1;
        FUN_100c97c0();
      }
      else {
        for (iVar1 = 0; iStack_24 = iVar1, iVar1 < iStack_58; iVar1 = iVar1 + 1) {
          if (*(int *)(iStack_5c + iVar1 * 4) == 0) {
            appFailAssert("pShortcutNode",".\\XML\\XMLDataManager.cpp",0x181);
          }
          param_1 = (int *)FUN_10004ed0();
          local_8._0_1_ = 7;
          if (param_1 == (int *)0x0) {
            local_20 = (int *)0x0;
          }
          else {
            local_20 = (int *)FUN_100e6870();
          }
          local_8 = CONCAT31(local_8._1_3_,5);
          if ((local_20 == (int *)0x0) || (iVar4 = (**(code **)(*local_20 + 4))(), iVar4 == 0)) {
            FUN_10005c30();
            FUN_100d01f0();
            goto LAB_100ca063;
          }
          FUN_100d9a30();
        }
        FUN_100c80b0();
        local_8._0_1_ = 8;
        FString::FString(local_8c,(ushort *)L"Option");
        local_8._0_1_ = 9;
        iVar1 = FUN_100cd4b0();
        local_8 = CONCAT31(local_8._1_3_,8);
        FString::~FString(local_8c);
        if (iVar1 != 0) {
          for (iVar1 = 0; iStack_2c = iVar1, iVar1 < iStack_64; iVar1 = iVar1 + 1) {
            if (*(int *)(iStack_68 + iVar1 * 4) == 0) {
              appFailAssert("pOptionNode",".\\XML\\XMLDataManager.cpp",0x19a);
            }
            param_1 = (int *)FUN_10004ed0();
            local_8._0_1_ = 10;
            if (param_1 == (int *)0x0) {
              piStack_28 = (int *)0x0;
            }
            else {
              piStack_28 = (int *)FUN_100e3230();
            }
            local_8 = CONCAT31(local_8._1_3_,8);
            if ((piStack_28 == (int *)0x0) || (iVar4 = (**(code **)(*piStack_28 + 4))(), iVar4 == 0)
               ) {
              FUN_10005c30();
              FUN_100d01f0();
              goto LAB_100ca15a;
            }
            FUN_100d9a30();
          }
          FUN_100c80b0();
          local_8._0_1_ = 0xb;
          FString::FString(local_8c,(ushort *)L"DefaultPosition");
          local_8._0_1_ = 0xc;
          iVar1 = FUN_100cd4b0();
          local_8 = CONCAT31(local_8._1_3_,0xb);
          FString::~FString(local_8c);
          if (iVar1 == 0) {
LAB_100ca25d:
            local_8 = CONCAT31(local_8._1_3_,8);
            FUN_100c97c0();
          }
          else {
            for (iVar1 = 0; iStack_34 = iVar1, iVar1 < iStack_70; iVar1 = iVar1 + 1) {
              if (*(int *)(iStack_74 + iVar1 * 4) == 0) {
                appFailAssert("pDefaultPositionNode",".\\XML\\XMLDataManager.cpp",0x1b3);
              }
              param_1 = (int *)FUN_10004ed0();
              local_8._0_1_ = 0xd;
              if (param_1 == (int *)0x0) {
                piStack_30 = (int *)0x0;
              }
              else {
                piStack_30 = (int *)FUN_100da190();
              }
              local_8 = CONCAT31(local_8._1_3_,0xb);
              if ((piStack_30 == (int *)0x0) ||
                 (iVar4 = (**(code **)(*piStack_30 + 4))(), iVar4 == 0)) {
                FUN_10005c30();
                FUN_100d01f0();
                goto LAB_100ca25d;
              }
              FUN_100d9a30();
            }
            FUN_100c80b0();
            local_8._0_1_ = 0xe;
            FString::FString(local_8c,(ushort *)L"Constant");
            local_8._0_1_ = 0xf;
            iVar1 = FUN_100cd4b0();
            local_8 = CONCAT31(local_8._1_3_,0xe);
            FString::~FString(local_8c);
            if (iVar1 != 0) {
              iVar1 = 0;
              while( true ) {
                iStack_3c = iVar1;
                if (iStack_7c <= iVar1) {
                  local_8._0_1_ = 0xb;
                  FUN_100c97c0();
                  local_8._0_1_ = 8;
                  FUN_100c97c0();
                  local_8._0_1_ = 5;
                  FUN_100c97c0();
                  local_8._0_1_ = 1;
                  FUN_100c97c0();
                  local_8 = (uint)local_8._1_3_ << 8;
                  FUN_100c97c0();
                  ExceptionList = local_10;
                  return 1;
                }
                if (*(int *)(iStack_80 + iVar1 * 4) == 0) {
                  appFailAssert("pConstantNode",".\\XML\\XMLDataManager.cpp",0x1cc);
                }
                param_1 = (int *)FUN_10004ed0();
                local_8._0_1_ = 0x10;
                if (param_1 == (int *)0x0) {
                  piStack_38 = (int *)0x0;
                }
                else {
                  piStack_38 = (int *)FUN_100d8c70();
                }
                local_8 = CONCAT31(local_8._1_3_,0xe);
                if ((piStack_38 == (int *)0x0) ||
                   (iVar4 = (**(code **)(*piStack_38 + 4))(), iVar4 == 0)) break;
                FUN_100d9a30();
                iVar1 = iVar1 + 1;
              }
              FUN_10005c30();
              FUN_100d01f0();
            }
            local_8._0_1_ = 0xb;
            FUN_100c97c0();
            local_8 = CONCAT31(local_8._1_3_,8);
            FUN_100c97c0();
          }
        }
LAB_100ca15a:
        local_8._0_1_ = 5;
        FUN_100c97c0();
        local_8._0_1_ = 1;
        FUN_100c97c0();
      }
    }
LAB_100c9efc:
    local_8 = (uint)local_8._1_3_ << 8;
    FUN_100c97c0();
  }
  ExceptionList = local_10;
  return 0;
}


// ==== 100c9f1e FUN_100c9f1e

undefined4 FUN_100c9f1e(void)

{
  int iVar1;
  FString *pFVar2;
  int iVar3;
  int *piVar4;
  int unaff_EBP;
  int *unaff_ESI;
  int unaff_EDI;
  
  do {
    *(undefined1 **)(unaff_EBP + -0x34) = &stack0xfffffff4;
    FString::FString((FString *)&stack0xfffffff4,(ushort *)&DAT_1022f9f8);
    *(undefined1 *)(unaff_EBP + -4) = 4;
    iVar1 = *unaff_ESI;
    *(undefined1 *)(unaff_EBP + -4) = 1;
    iVar1 = (**(code **)(iVar1 + 4))(unaff_EDI);
    if (iVar1 == 0) {
      pFVar2 = (FString *)(**(code **)(*unaff_ESI + 0x44))();
      FString::operator*(pFVar2);
      FUN_10005c30();
      FUN_100d01f0();
      goto LAB_100c9efc;
    }
    FUN_100d9a30(unaff_EBP + 8);
    pFVar2 = (FString *)(**(code **)(*unaff_ESI + 0x44))(unaff_EBP + 8);
    FString::operator*(pFVar2);
    FUN_100c9860();
    *(int *)(unaff_EBP + -0x18) = *(int *)(unaff_EBP + -0x18) + 1;
    if (*(int *)(unaff_EBP + -0x48) <= *(int *)(unaff_EBP + -0x18)) {
      FUN_100c80b0();
      *(undefined1 *)(unaff_EBP + -4) = 5;
      FString::FString((FString *)(unaff_EBP + -0x88),(ushort *)L"Shortcut");
      *(undefined1 *)(unaff_EBP + -4) = 6;
      iVar1 = FUN_100cd4b0();
      *(undefined1 *)(unaff_EBP + -4) = 5;
      FString::~FString((FString *)(unaff_EBP + -0x88));
      if (iVar1 == 0) goto LAB_100ca063;
      iVar1 = 0;
      goto LAB_100c9ff7;
    }
    unaff_EDI = *(int *)(*(int *)(unaff_EBP + -0x4c) + *(int *)(unaff_EBP + -0x18) * 4);
    if (unaff_EDI == 0) {
      appFailAssert("pWindowNode",".\\XML\\XMLDataManager.cpp",0x167);
    }
    *(undefined1 **)(unaff_EBP + 8) = &stack0xfffffff4;
    FString::FString((FString *)&stack0xfffffff4,(ushort *)L"Window");
    *(undefined1 *)(unaff_EBP + -4) = 3;
    *(undefined1 *)(unaff_EBP + -4) = 1;
    unaff_ESI = (int *)FUN_100c8240();
    *(int **)(unaff_EBP + 8) = unaff_ESI;
  } while (unaff_ESI != (int *)0x0);
  FUN_10005c30();
  FUN_100d01f0();
  goto LAB_100c9efc;
LAB_100c9ff7:
  *(int *)(unaff_EBP + -0x20) = iVar1;
  if (*(int *)(unaff_EBP + -0x54) <= iVar1) goto LAB_100ca0a0;
  if (*(int *)(*(int *)(unaff_EBP + -0x58) + iVar1 * 4) == 0) {
    appFailAssert("pShortcutNode",".\\XML\\XMLDataManager.cpp",0x181);
  }
  iVar3 = FUN_10004ed0();
  *(int *)(unaff_EBP + 8) = iVar3;
  *(undefined1 *)(unaff_EBP + -4) = 7;
  if (iVar3 == 0) {
    piVar4 = (int *)0x0;
  }
  else {
    piVar4 = (int *)FUN_100e6870();
  }
  *(undefined1 *)(unaff_EBP + -4) = 5;
  *(int **)(unaff_EBP + -0x1c) = piVar4;
  if ((piVar4 == (int *)0x0) || (iVar3 = (**(code **)(*piVar4 + 4))(), iVar3 == 0)) {
    FUN_10005c30();
    FUN_100d01f0();
LAB_100ca063:
    *(undefined1 *)(unaff_EBP + -4) = 1;
    FUN_100c97c0();
    goto LAB_100c9efc;
  }
  FUN_100d9a30();
  iVar1 = iVar1 + 1;
  goto LAB_100c9ff7;
LAB_100ca0a0:
  FUN_100c80b0();
  *(undefined1 *)(unaff_EBP + -4) = 8;
  FString::FString((FString *)(unaff_EBP + -0x88),(ushort *)L"Option");
  *(undefined1 *)(unaff_EBP + -4) = 9;
  iVar1 = FUN_100cd4b0();
  *(undefined1 *)(unaff_EBP + -4) = 8;
  FString::~FString((FString *)(unaff_EBP + -0x88));
  if (iVar1 != 0) {
    for (iVar1 = 0; *(int *)(unaff_EBP + -0x28) = iVar1, iVar1 < *(int *)(unaff_EBP + -0x60);
        iVar1 = iVar1 + 1) {
      if (*(int *)(*(int *)(unaff_EBP + -100) + iVar1 * 4) == 0) {
        appFailAssert("pOptionNode",".\\XML\\XMLDataManager.cpp",0x19a);
      }
      iVar3 = FUN_10004ed0();
      *(int *)(unaff_EBP + 8) = iVar3;
      *(undefined1 *)(unaff_EBP + -4) = 10;
      if (iVar3 == 0) {
        piVar4 = (int *)0x0;
      }
      else {
        piVar4 = (int *)FUN_100e3230();
      }
      *(undefined1 *)(unaff_EBP + -4) = 8;
      *(int **)(unaff_EBP + -0x24) = piVar4;
      if ((piVar4 == (int *)0x0) || (iVar3 = (**(code **)(*piVar4 + 4))(), iVar3 == 0)) {
        FUN_10005c30();
        FUN_100d01f0();
        goto LAB_100ca15a;
      }
      FUN_100d9a30();
    }
    FUN_100c80b0();
    *(undefined1 *)(unaff_EBP + -4) = 0xb;
    FString::FString((FString *)(unaff_EBP + -0x88),(ushort *)L"DefaultPosition");
    *(undefined1 *)(unaff_EBP + -4) = 0xc;
    iVar1 = FUN_100cd4b0();
    *(undefined1 *)(unaff_EBP + -4) = 0xb;
    FString::~FString((FString *)(unaff_EBP + -0x88));
    if (iVar1 == 0) {
LAB_100ca25d:
      *(undefined1 *)(unaff_EBP + -4) = 8;
      FUN_100c97c0();
    }
    else {
      for (iVar1 = 0; *(int *)(unaff_EBP + -0x30) = iVar1, iVar1 < *(int *)(unaff_EBP + -0x6c);
          iVar1 = iVar1 + 1) {
        if (*(int *)(*(int *)(unaff_EBP + -0x70) + iVar1 * 4) == 0) {
          appFailAssert("pDefaultPositionNode",".\\XML\\XMLDataManager.cpp",0x1b3);
        }
        iVar3 = FUN_10004ed0();
        *(int *)(unaff_EBP + 8) = iVar3;
        *(undefined1 *)(unaff_EBP + -4) = 0xd;
        if (iVar3 == 0) {
          piVar4 = (int *)0x0;
        }
        else {
          piVar4 = (int *)FUN_100da190();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0xb;
        *(int **)(unaff_EBP + -0x2c) = piVar4;
        if ((piVar4 == (int *)0x0) || (iVar3 = (**(code **)(*piVar4 + 4))(), iVar3 == 0)) {
          FUN_10005c30();
          FUN_100d01f0();
          goto LAB_100ca25d;
        }
        FUN_100d9a30();
      }
      FUN_100c80b0();
      *(undefined1 *)(unaff_EBP + -4) = 0xe;
      FString::FString((FString *)(unaff_EBP + -0x88),(ushort *)L"Constant");
      *(undefined1 *)(unaff_EBP + -4) = 0xf;
      iVar1 = FUN_100cd4b0();
      *(undefined1 *)(unaff_EBP + -4) = 0xe;
      FString::~FString((FString *)(unaff_EBP + -0x88));
      if (iVar1 != 0) {
        iVar1 = 0;
        while( true ) {
          *(int *)(unaff_EBP + -0x38) = iVar1;
          if (*(int *)(unaff_EBP + -0x78) <= iVar1) {
            *(undefined1 *)(unaff_EBP + -4) = 0xb;
            FUN_100c97c0();
            *(undefined1 *)(unaff_EBP + -4) = 8;
            FUN_100c97c0();
            *(undefined1 *)(unaff_EBP + -4) = 5;
            FUN_100c97c0();
            *(undefined1 *)(unaff_EBP + -4) = 1;
            FUN_100c97c0();
            *(undefined1 *)(unaff_EBP + -4) = 0;
            FUN_100c97c0();
            ExceptionList = *(void **)(unaff_EBP + -0xc);
            return 1;
          }
          if (*(int *)(*(int *)(unaff_EBP + -0x7c) + iVar1 * 4) == 0) {
            appFailAssert("pConstantNode",".\\XML\\XMLDataManager.cpp",0x1cc);
          }
          iVar3 = FUN_10004ed0();
          *(int *)(unaff_EBP + 8) = iVar3;
          *(undefined1 *)(unaff_EBP + -4) = 0x10;
          if (iVar3 == 0) {
            piVar4 = (int *)0x0;
          }
          else {
            piVar4 = (int *)FUN_100d8c70();
          }
          *(undefined1 *)(unaff_EBP + -4) = 0xe;
          *(int **)(unaff_EBP + -0x34) = piVar4;
          if ((piVar4 == (int *)0x0) || (iVar3 = (**(code **)(*piVar4 + 4))(), iVar3 == 0)) break;
          FUN_100d9a30();
          iVar1 = iVar1 + 1;
        }
        FUN_10005c30();
        FUN_100d01f0();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0xb;
      FUN_100c97c0();
      *(undefined1 *)(unaff_EBP + -4) = 8;
      FUN_100c97c0();
    }
  }
LAB_100ca15a:
  *(undefined1 *)(unaff_EBP + -4) = 5;
  FUN_100c97c0();
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_100c97c0();
LAB_100c9efc:
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_100c97c0();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return 0;
}


// ==== 100ca3f2 Catch@100ca3f2

void Catch_100ca3f2(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x3c) = *(undefined4 *)(unaff_EBP + -0x40);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x3c,&DAT_102a47f0);
}


// ==== 100ca406 Catch@100ca406

void Catch_100ca406(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"XMLDataManager::ProcessDocument");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100ca430 FUN_100ca430

void FUN_100ca430(int param_1)

{
  int iVar1;
  ushort *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101f6a89;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 1;
  if (param_1 != 0) {
    iVar1 = FString::operator_int((FString *)&stack0x00000008);
    if (iVar1 != 0) {
      puVar2 = FString::operator*((FString *)&stack0x00000008);
      FUN_100c9b60(&param_1,puVar2);
    }
  }
  local_8 = 0xffffffff;
  FString::~FString((FString *)&stack0x00000008);
  ExceptionList = local_10;
  return;
}


// ==== 100ca4b5 Catch@100ca4b5

void Catch_100ca4b5(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 100ca4c9 Catch@100ca4c9

void Catch_100ca4c9(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"XMLDataManager::AddParentInfo");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100ca4f0 FUN_100ca4f0

void FUN_100ca4f0(FArchive *param_1)

{
  FArchive *pFVar1;
  int iVar2;
  int *piVar3;
  FString *this;
  ushort *puVar4;
  int in_ECX;
  int iVar5;
  FArchive *pFVar6;
  uint uStack_70;
  FString local_60 [20];
  int *local_4c;
  int *local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int *local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  pFVar1 = param_1;
  puStack_c = &LAB_101f6ada;
  local_10 = ExceptionList;
  uStack_70 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_70;
  ExceptionList = &local_10;
  iVar5 = 0;
  local_8 = 0;
  iVar2 = FArchive::IsSaving(param_1);
  if (iVar2 == 0) {
    local_2c = 0;
    FUN_100052e0(pFVar1,&local_2c);
    for (local_18 = 0; local_18 < local_2c; local_18 = local_18 + 1) {
      param_1 = (FArchive *)FUN_10004ed0(0x164);
      local_8._0_1_ = 1;
      if (param_1 == (FArchive *)0x0) {
        piVar3 = (int *)0x0;
      }
      else {
        piVar3 = (int *)FUN_100f3330();
      }
      local_8._0_1_ = 0;
      local_30 = piVar3;
      if (piVar3 == (int *)0x0) {
        appFailAssert("pWindowData",".\\XML\\XMLDataManager.cpp",0x2dd);
      }
      FUN_100d9a30(&local_30);
      pFVar6 = pFVar1;
      (**(code **)(*piVar3 + 100))(pFVar1);
      FString::FString(local_60,(ushort *)L"Window");
      local_8._0_1_ = 2;
      (**(code **)(*piVar3 + 0x10))(local_60);
      local_8 = (uint)local_8._1_3_ << 8;
      FString::~FString(local_60);
      this = (FString *)(**(code **)(*piVar3 + 0x44))(&local_30);
      puVar4 = FString::operator*(this);
      FUN_100c9860(puVar4,pFVar6);
    }
    local_34 = 0;
    FUN_100052e0(pFVar1,&local_34);
    for (local_1c = 0; local_1c < local_34; local_1c = local_1c + 1) {
      param_1 = (FArchive *)FUN_10004ed0(0x28);
      local_8._0_1_ = 3;
      if (param_1 == (FArchive *)0x0) {
        piVar3 = (int *)0x0;
      }
      else {
        piVar3 = (int *)FUN_100e6870();
      }
      local_8 = (uint)local_8._1_3_ << 8;
      local_48 = piVar3;
      if (piVar3 == (int *)0x0) {
        appFailAssert("pShortcutData",".\\XML\\XMLDataManager.cpp",0x2eb);
      }
      FUN_100d9a30(&local_48);
      (**(code **)(*piVar3 + 0x14))(pFVar1);
    }
    local_38 = 0;
    FUN_100052e0(pFVar1,&local_38);
    for (local_20 = 0; local_20 < local_38; local_20 = local_20 + 1) {
      param_1 = (FArchive *)FUN_10004ed0(0x10);
      local_8._0_1_ = 4;
      if (param_1 == (FArchive *)0x0) {
        piVar3 = (int *)0x0;
      }
      else {
        piVar3 = (int *)FUN_100da190();
      }
      local_8 = (uint)local_8._1_3_ << 8;
      local_4c = piVar3;
      if (piVar3 == (int *)0x0) {
        appFailAssert("pDefaultPositionData",".\\XML\\XMLDataManager.cpp",0x2f7);
      }
      FUN_100d9a30(&local_4c);
      (**(code **)(*piVar3 + 0x10))(pFVar1);
    }
  }
  else {
    param_1 = *(FArchive **)(in_ECX + 0x1c);
    FUN_100052e0(pFVar1,&param_1);
    for (; local_3c = iVar5, iVar5 < (int)param_1; iVar5 = iVar5 + 1) {
      (**(code **)(**(int **)(*(int *)(in_ECX + 0x18) + iVar5 * 4) + 100))(pFVar1);
    }
    local_24 = *(int *)(in_ECX + 0x28);
    FUN_100052e0(pFVar1,&local_24);
    for (iVar2 = 0; local_40 = iVar2, iVar2 < local_24; iVar2 = iVar2 + 1) {
      (**(code **)(**(int **)(*(int *)(in_ECX + 0x24) + iVar2 * 4) + 0x14))(pFVar1);
    }
    local_28 = *(int *)(in_ECX + 0x40);
    FUN_100052e0(pFVar1,&local_28);
    for (iVar2 = 0; iVar2 < local_28; iVar2 = iVar2 + 1) {
      local_44 = iVar2;
      (**(code **)(**(int **)(*(int *)(in_ECX + 0x3c) + iVar2 * 4) + 0x10))(pFVar1);
    }
  }
  ExceptionList = local_10;
  return;
}


// ==== 100ca7b4 Catch@100ca7b4

void Catch_100ca7b4(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x4c) = *(undefined4 *)(unaff_EBP + -0x50);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x4c,&DAT_102a47f0);
}


// ==== 100ca7c8 Catch@100ca7c8

void Catch_100ca7c8(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"XMLDataManager::Serialize");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100ca7f0 FUN_100ca7f0

void FUN_100ca7f0(void)

{
  uint uVar1;
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101f6b11;
  local_c = ExceptionList;
  uVar1 = DAT_103554c4 ^ (uint)&stack0xffffffec;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX);
  local_4 = 1;
  *(undefined4 *)(in_ECX + 0xc) = 0;
  *(undefined4 *)(in_ECX + 0x10) = 8;
  FUN_1006b150(uVar1);
  ExceptionList = local_c;
  return;
}


// ==== 100ca860 FUN_100ca860

void FUN_100ca860(void)

{
  int in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_101f6b38;
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
  FUN_100c9c20();
  ExceptionList = local_c;
  return;
}


// ==== 100ca8e0 FUN_100ca8e0

void FUN_100ca8e0(void)

{
  int in_ECX;
  
  FUN_100c9c80(0);
  *(undefined4 *)(in_ECX + 0x10) = 8;
  FUN_1006b150();
  return;
}


// ==== 100ca900 FUN_100ca900

void FUN_100ca900(void)

{
  uint uVar1;
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101f6b71;
  local_c = ExceptionList;
  uVar1 = DAT_103554c4 ^ (uint)&stack0xffffffec;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX);
  local_4 = 1;
  *(undefined4 *)(in_ECX + 0xc) = 0;
  *(undefined4 *)(in_ECX + 0x10) = 8;
  FUN_100c8c30(uVar1);
  ExceptionList = local_c;
  return;
}


// ==== 100ca970 FUN_100ca970

void FUN_100ca970(void)

{
  int in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_101f6b98;
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
  FUN_100c9d00();
  ExceptionList = local_c;
  return;
}


// ==== 100ca9f0 FUN_100ca9f0

void FUN_100ca9f0(void)

{
  int in_ECX;
  
  FUN_100c9d60(0);
  *(undefined4 *)(in_ECX + 0x10) = 8;
  FUN_100c8c30();
  return;
}


// ==== 100caa10 FUN_100caa10

void FUN_100caa10(void)

{
  undefined1 local_10 [4];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_101f6bc8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_4 = 0xffffffff;
  FUN_100ca860(DAT_103554c4 ^ (uint)local_10);
  ExceptionList = local_c;
  return;
}


// ==== 100caa60 FUN_100caa60

void FUN_100caa60(void)

{
  undefined1 local_10 [4];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_101f6bf8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_4 = 0xffffffff;
  FUN_100ca970(DAT_103554c4 ^ (uint)local_10);
  ExceptionList = local_c;
  return;
}


// ==== 100caab0 FUN_100caab0

undefined4 FUN_100caab0(int *param_1)

{
  int *piVar1;
  bool bVar2;
  undefined4 uVar3;
  FString *pFVar4;
  int iVar5;
  ushort *puVar6;
  UObject *pUVar7;
  int iVar8;
  int in_ECX;
  wchar_t *pwVar9;
  int **ppiVar10;
  UClass *pUVar11;
  uint uStack_70;
  int local_48;
  int *local_3c;
  int local_38;
  undefined4 local_34;
  int local_24;
  int local_20;
  uint local_1c;
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_101f6c5b;
  local_10 = ExceptionList;
  uStack_70 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_70;
  ExceptionList = &local_10;
  local_1c = 0;
  local_8 = 0;
  local_18 = 0;
  FUN_100ca9f0();
  uVar3 = FUN_10005c30(L"Starting to create windows...");
  FUN_100d06e0(uVar3);
  local_20 = 0;
  do {
    while( true ) {
      if (*(int *)(in_ECX + 0x1c) <= local_20) {
        *(undefined4 *)(in_ECX + 0x68) = 0;
        local_8._0_1_ = 2;
        for (local_48 = 0; local_48 < *(int *)(in_ECX + 0x58); local_48 = local_48 + 1) {
          piVar1 = *(int **)(*(int *)(in_ECX + 0x54) + 4 + local_48 * 0x14);
          if (piVar1 != (int *)0x0) {
            local_24 = FUN_10058f70();
            if (local_24 != 0) {
              FString::FString((FString *)&local_3c,
                               (FString *)(*(int *)(in_ECX + 0x54) + 8 + local_48 * 0x14));
              local_8 = CONCAT31(local_8._1_3_,3);
              uVar3 = 0;
              ppiVar10 = &local_3c;
              FUN_10005c30(ppiVar10,0);
              iVar5 = FUN_100d0cb0(ppiVar10,uVar3);
              if (iVar5 != 0) {
                uVar3 = FUN_10058020();
                FUN_10060c20(uVar3);
                FUN_10060a70(uVar3);
                (**(code **)(*piVar1 + 0xbc))(0,0,0);
              }
              local_8._0_1_ = 2;
              FString::~FString((FString *)&local_3c);
            }
          }
        }
        local_8._0_1_ = 0;
        FUN_100c9be0();
        FUN_100ca9f0();
        local_3c = param_1;
        local_34 = 0;
        local_8._0_1_ = 4;
        local_38 = 0;
        while (iVar5 = local_38, local_38 < param_1[1]) {
          piVar1 = *(int **)(*param_1 + 0x10 + local_38 * 0x14);
          if (piVar1 != (int *)0x0) {
            pUVar11 = (UClass *)&DAT_1039dff0;
            pUVar7 = (UObject *)FUN_10058f70();
            iVar8 = UObject::IsA(pUVar7,pUVar11);
            if (iVar8 != 0) {
              (**(code **)(*piVar1 + 0x68))(0x50e,0,0);
            }
          }
          local_38 = iVar5 + 1;
        }
        local_8._0_1_ = 0;
        FUN_100b73f0();
        local_8._0_1_ = 5;
        for (iVar5 = 0; iVar5 < param_1[1]; iVar5 = iVar5 + 1) {
          piVar1 = *(int **)(*param_1 + 0x10 + iVar5 * 0x14);
          if (piVar1 != (int *)0x0) {
            pUVar11 = (UClass *)&DAT_1039dff0;
            pUVar7 = (UObject *)FUN_10058f70();
            iVar8 = UObject::IsA(pUVar7,pUVar11);
            if (iVar8 != 0) {
              (**(code **)(*piVar1 + 0x68))(0x50f,0,0);
            }
          }
        }
        local_8 = (uint)local_8._1_3_ << 8;
        FUN_100b73f0();
        if (local_18 == 0) {
          uVar3 = FUN_10005c30(L"Finished creating windows with no error.");
          FUN_100d06e0(uVar3);
        }
        else {
          uVar3 = FUN_10005c30(L"Finished creating windows with %d errors",local_18);
          FUN_100d06e0(uVar3);
        }
        ExceptionList = local_10;
        return 1;
      }
      piVar1 = *(int **)(*(int *)(in_ECX + 0x18) + local_20 * 4);
      if (piVar1 != (int *)0x0) break;
      uVar3 = FUN_10005c30(L"XMLDataManager:contains undefined window!!");
      FUN_100d01f0(uVar3);
      local_18 = local_18 + 1;
      local_20 = local_20 + 1;
    }
    if (*(int *)GIsL2NetLogin_exref == 0) {
LAB_100cab72:
      bVar2 = false;
    }
    else {
      pFVar4 = (FString *)FUN_100c81d0(&local_3c);
      local_8 = CONCAT31(local_8._1_3_,1);
      local_1c = local_1c | 1;
      iVar5 = FString::operator==(pFVar4,(ushort *)L"PawnViewer");
      if (iVar5 == 0) goto LAB_100cab72;
      bVar2 = true;
    }
    local_8 = 0;
    if ((local_1c & 1) != 0) {
      local_1c = local_1c & 0xfffffffe;
      FString::~FString((FString *)&local_3c);
    }
    if (!bVar2) {
      pFVar4 = (FString *)(**(code **)(*piVar1 + 0x44))();
      puVar6 = FString::operator*(pFVar4);
      uVar3 = FUN_10005c30(L"Creating %s...",puVar6);
      FUN_100d06e0(uVar3);
      *(int **)(in_ECX + 0x68) = piVar1;
      iVar5 = (**(code **)(*piVar1 + 8))();
      if (iVar5 == 0) {
        pFVar4 = (FString *)(**(code **)(*piVar1 + 0x44))();
        puVar6 = FString::operator*(pFVar4);
        pwVar9 = L"XMLDataManager:Window(%s) pre-creation failed!!";
      }
      else {
        iVar5 = (**(code **)(*piVar1 + 0xc))(param_1,0);
        if (iVar5 != 0) goto LAB_100cac1c;
        pFVar4 = (FString *)(**(code **)(*piVar1 + 0x44))();
        puVar6 = FString::operator*(pFVar4);
        pwVar9 = L"XMLDataManager:Window(%s) creation failed!!";
      }
      uVar3 = FUN_10005c30(pwVar9,puVar6);
      FUN_100d01f0(uVar3);
      local_18 = local_18 + 1;
    }
LAB_100cac1c:
    local_20 = local_20 + 1;
  } while( true );
}


// ==== 100cae1a Catch@100cae1a

void Catch_100cae1a(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x28) = *(undefined4 *)(unaff_EBP + -0x2c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x28,&DAT_102a47f0);
}


// ==== 100cae2e Catch@100cae2e

void Catch_100cae2e(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"XMLDataManager::CreateWindows");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100cae50 FUN_100cae50

void FUN_100cae50(void)

{
  undefined4 *puVar1;
  int in_ECX;
  int iVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101f6c80;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  for (iVar2 = 0; iVar2 < *(int *)(in_ECX + 0x1c); iVar2 = iVar2 + 1) {
    puVar1 = *(undefined4 **)(*(int *)(in_ECX + 0x18) + iVar2 * 4);
    if (puVar1 != (undefined4 *)0x0) {
      (**(code **)*puVar1)(1);
    }
    *(undefined4 *)(*(int *)(in_ECX + 0x18) + iVar2 * 4) = 0;
  }
  for (iVar2 = 0; iVar2 < *(int *)(in_ECX + 0x1c); iVar2 = iVar2 + 1) {
  }
  FArray::Empty((FArray *)(in_ECX + 0x18),4,0);
  FUN_100ca8e0();
  for (iVar2 = 0; iVar2 < *(int *)(in_ECX + 0x28); iVar2 = iVar2 + 1) {
    puVar1 = *(undefined4 **)(*(int *)(in_ECX + 0x24) + iVar2 * 4);
    if (puVar1 != (undefined4 *)0x0) {
      (**(code **)*puVar1)(1);
    }
    *(undefined4 *)(*(int *)(in_ECX + 0x24) + iVar2 * 4) = 0;
  }
  for (iVar2 = 0; iVar2 < *(int *)(in_ECX + 0x28); iVar2 = iVar2 + 1) {
  }
  FArray::Empty((FArray *)(in_ECX + 0x24),4,0);
  for (iVar2 = 0; iVar2 < *(int *)(in_ECX + 0x40); iVar2 = iVar2 + 1) {
    puVar1 = *(undefined4 **)(*(int *)(in_ECX + 0x3c) + iVar2 * 4);
    if (puVar1 != (undefined4 *)0x0) {
      (**(code **)*puVar1)(1);
    }
    *(undefined4 *)(*(int *)(in_ECX + 0x3c) + iVar2 * 4) = 0;
  }
  for (iVar2 = 0; iVar2 < *(int *)(in_ECX + 0x40); iVar2 = iVar2 + 1) {
  }
  FArray::Empty((FArray *)(in_ECX + 0x3c),4,0);
  ExceptionList = local_10;
  return;
}


// ==== 100caf7a Catch@100caf7a

void Catch_100caf7a(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x2c) = *(undefined4 *)(unaff_EBP + -0x30);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x2c,&DAT_102a47f0);
}


// ==== 100caf8e Catch@100caf8e

void Catch_100caf8e(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"XMLDataManager::DestroyUIData");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100cafb0 FUN_100cafb0

void FUN_100cafb0(void)

{
  undefined4 *puVar1;
  int in_ECX;
  int iVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101f6ca0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  for (iVar2 = 0; iVar2 < *(int *)(in_ECX + 0x1c); iVar2 = iVar2 + 1) {
    puVar1 = *(undefined4 **)(*(int *)(in_ECX + 0x18) + iVar2 * 4);
    if (puVar1 != (undefined4 *)0x0) {
      (**(code **)*puVar1)(1);
    }
    *(undefined4 *)(*(int *)(in_ECX + 0x18) + iVar2 * 4) = 0;
  }
  for (iVar2 = 0; iVar2 < *(int *)(in_ECX + 0x1c); iVar2 = iVar2 + 1) {
  }
  FArray::Empty((FArray *)(in_ECX + 0x18),4,0);
  FUN_100ca8e0();
  *(undefined4 *)(in_ECX + 0x68) = 0;
  ExceptionList = local_10;
  return;
}


// ==== 100cb053 Catch@100cb053

void Catch_100cb053(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x1c) = *(undefined4 *)(unaff_EBP + -0x20);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x1c,&DAT_102a47f0);
}


// ==== 100cb067 Catch@100cb067

void Catch_100cb067(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"XMLDataManager::Destroy");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100cb090 FUN_100cb090

void FUN_100cb090(void)

{
  undefined4 *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_101f6d4a;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *in_ECX = XMLDataManager::vftable;
  FUN_100ca7f0();
  local_8 = 1;
  FArray::FArray((FArray *)(in_ECX + 6));
  local_8._0_1_ = 3;
  FArray::FArray((FArray *)(in_ECX + 9));
  local_8._0_1_ = 5;
  FArray::FArray((FArray *)(in_ECX + 0xc));
  local_8._0_1_ = 7;
  FArray::FArray((FArray *)(in_ECX + 0xf));
  local_8._0_1_ = 9;
  FArray::FArray((FArray *)(in_ECX + 0x12));
  local_8._0_1_ = 0xb;
  FUN_100ca900();
  local_8 = CONCAT31(local_8._1_3_,0xe);
  FUN_100c8020();
  ExceptionList = local_10;
  return;
}


// ==== 100cb15d Catch@100cb15d

void Catch_100cb15d(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x20);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 100cb171 Catch@100cb171

void Catch_100cb171(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"XMLDataManager::XMLDataManager");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100cb190 FUN_100cb190

void FUN_100cb190(void)

{
  undefined4 *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_101f6dcd;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *in_ECX = XMLDataManager::vftable;
  local_8 = 7;
  FUN_100cafb0();
  local_8._0_1_ = 5;
  local_8._1_3_ = 0;
  FUN_100ca970();
  local_8._0_1_ = 4;
  FUN_100c9ac0();
  local_8._0_1_ = 3;
  FUN_100c9a20();
  local_8._0_1_ = 2;
  FUN_100c9980();
  local_8._0_1_ = 1;
  FUN_100c98e0();
  local_8 = (uint)local_8._1_3_ << 8;
  FUN_100c8b10();
  local_8 = 0xffffffff;
  FUN_100ca860();
  ExceptionList = local_10;
  return;
}


// ==== 100cb24e Catch@100cb24e

void Catch_100cb24e(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x20);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 100cb262 Catch@100cb262

void Catch_100cb262(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"XMLDataManager::~XMLDataManager");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100cb280 FUN_100cb280

void FUN_100cb280(void)

{
  int *piVar1;
  int *in_ECX;
  
  piVar1 = (int *)*in_ECX;
  if (piVar1 == (int *)0x0) {
    _com_issue_error(-0x7fffbffd);
    return;
  }
  (**(code **)(*piVar1 + 8))(piVar1);
  *in_ECX = 0;
  return;
}


// ==== 100cb2b0 FUN_100cb2b0

void FUN_100cb2b0(BSTR param_1,char param_2)

{
  UINT len;
  BSTR pOVar1;
  undefined4 *in_ECX;
  
  in_ECX[1] = 0;
  in_ECX[2] = 1;
  if ((param_2 == '\0') || (param_1 == (BSTR)0x0)) {
    *in_ECX = param_1;
  }
  else {
    len = SysStringByteLen(param_1);
    pOVar1 = SysAllocStringByteLen((LPCSTR)param_1,len);
    *in_ECX = pOVar1;
    if (pOVar1 == (BSTR)0x0) {
      _com_issue_error(-0x7ff8fff2);
      return;
    }
  }
  return;
}


// ==== 100cb300 FUN_100cb300

void FUN_100cb300(OLECHAR *param_1)

{
  BSTR pOVar1;
  undefined2 *in_ECX;
  
  *in_ECX = 8;
  pOVar1 = SysAllocString(param_1);
  *(BSTR *)(in_ECX + 4) = pOVar1;
  if ((pOVar1 == (BSTR)0x0) && (param_1 != (OLECHAR *)0x0)) {
    _com_issue_error(-0x7ff8fff2);
  }
  return;
}


// ==== 100cb330 FUN_100cb330

void FUN_100cb330(int *param_1,char param_2)

{
  undefined2 *in_ECX;
  
  *in_ECX = 9;
  *(int **)(in_ECX + 4) = param_1;
  if ((param_2 != '\0') && (param_1 != (int *)0x0)) {
    (**(code **)(*param_1 + 4))(param_1);
  }
  return;
}


// ==== 100cb360 FUN_100cb360

void FUN_100cb360(void)

{
  VARIANTARG *in_ECX;
  
  VariantClear(in_ECX);
  return;
}


// ==== 100cb370 FUN_100cb370

undefined4 FUN_100cb370(void)

{
  ULONG UVar1;
  IUnknown *in_ECX;
  undefined4 unaff_ESI;
  
  UVar1 = (*in_ECX->lpVtbl[3].Release)(in_ECX);
  if ((int)UVar1 < 0) {
    _com_issue_errorex(UVar1,in_ECX,(_GUID *)&DAT_1025a410);
  }
  return unaff_ESI;
}


// ==== 100cb3a0 FUN_100cb3a0

uint FUN_100cb3a0(int param_1)

{
  uint uVar1;
  ULONG UVar2;
  IUnknown *in_ECX;
  
  uVar1 = *(uint *)(param_1 + 8);
  UVar2 = (*in_ECX->lpVtbl[0x13].AddRef)(in_ECX);
  if ((int)UVar2 < 0) {
    _com_issue_errorex(UVar2,in_ECX,(_GUID *)&DAT_1025a420);
  }
  return uVar1 & 0xffff;
}


// ==== 100cb400 FUN_100cb400

void FUN_100cb400(void)

{
  ULONG UVar1;
  IUnknown *in_ECX;
  
  UVar1 = (*in_ECX->lpVtbl[0x16].Release)(in_ECX);
  if ((int)UVar1 < 0) {
    _com_issue_errorex(UVar1,in_ECX,(_GUID *)&DAT_1025a420);
  }
  return;
}


// ==== 100cb430 FUN_100cb430

void FUN_100cb430(undefined4 *param_1)

{
  HRESULT HVar1;
  IUnknown *in_ECX;
  
  HVar1 = (*in_ECX->lpVtbl[0x1a].QueryInterface)(in_ECX,(IID *)*param_1,(void **)param_1[1]);
  if (HVar1 < 0) {
    _com_issue_errorex(HVar1,in_ECX,(_GUID *)&DAT_1025a400);
  }
  return;
}


// ==== 100cb480 FUN_100cb480

void FUN_100cb480(void)

{
  FString *in_ECX;
  
  FString::operator=(in_ECX,(ushort *)&DAT_1022f9f8);
  FString::operator=(in_ECX + 0xc,(ushort *)&DAT_1022f9f8);
  *(undefined4 *)(in_ECX + 0x18) = 0xffffffff;
  return;
}


// ==== 100cb4b0 FUN_100cb4b0

void FUN_100cb4b0(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 *in_ECX;
  void *unaff_ESI;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_101f6dfb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  puVar1 = (undefined4 *)
           (**(code **)**(undefined4 **)GMalloc_exref)
                     (0xc,&DAT_1022f8a0,DAT_103554c4 ^ (uint)&stack0xffffffe8);
  local_c = (void *)0x0;
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    puVar1[1] = 0;
    puVar1[2] = 1;
    uVar2 = ConvertStringToBSTR(uStack_4);
    *puVar1 = uVar2;
  }
  local_c = (void *)0xffffffff;
  *in_ECX = puVar1;
  if (puVar1 == (undefined4 *)0x0) {
    _com_issue_error(-0x7ff8fff2);
  }
  ExceptionList = unaff_ESI;
  return;
}


// ==== 100cb550 FUN_100cb550

void FUN_100cb550(void)

{
  OLECHAR *pOVar1;
  undefined4 *puVar2;
  BSTR pOVar3;
  undefined4 *in_ECX;
  void *unaff_EBX;
  void *local_c;
  undefined1 *puStack_8;
  OLECHAR *pOStack_4;
  
  pOStack_4 = (OLECHAR *)0xffffffff;
  puStack_8 = &LAB_101f6e2b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  puVar2 = (undefined4 *)
           (**(code **)**(undefined4 **)GMalloc_exref)
                     (0xc,&DAT_1022f8a0,DAT_103554c4 ^ (uint)&stack0xffffffe4);
  pOVar1 = pOStack_4;
  local_c = (void *)0x0;
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puVar2[1] = 0;
    puVar2[2] = 1;
    pOVar3 = SysAllocString(pOStack_4);
    *puVar2 = pOVar3;
    if ((pOVar3 == (BSTR)0x0) && (pOVar1 != (OLECHAR *)0x0)) {
      _com_issue_error(-0x7ff8fff2);
    }
  }
  local_c = (void *)0xffffffff;
  *in_ECX = puVar2;
  if (puVar2 == (undefined4 *)0x0) {
    _com_issue_error(-0x7ff8fff2);
  }
  ExceptionList = unaff_EBX;
  return;
}


// ==== 100cb600 FUN_100cb600

void FUN_100cb600(void)

{
  int iVar1;
  int *in_ECX;
  void *unaff_ESI;
  undefined4 unaff_retaddr;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_101f6e5b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  iVar1 = (**(code **)**(undefined4 **)GMalloc_exref)
                    (0xc,&DAT_1022f8a0,DAT_103554c4 ^ (uint)&stack0xffffffec);
  local_c = (void *)0x0;
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = FUN_100cb2b0(uStack_4,unaff_retaddr);
  }
  local_c = (void *)0xffffffff;
  *in_ECX = iVar1;
  if (iVar1 == 0) {
    _com_issue_error(-0x7ff8fff2);
  }
  ExceptionList = unaff_ESI;
  return;
}


// ==== 100cb690 FUN_100cb690

void FUN_100cb690(void)

{
  int *piVar1;
  int *in_ECX;
  
  piVar1 = (int *)*in_ECX;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  return;
}


// ==== 100cb6a0 FUN_100cb6a0

HRESULT FUN_100cb6a0(IID *param_1,LPUNKNOWN param_2,uint param_3)

{
  int *piVar1;
  HRESULT HVar2;
  void **in_ECX;
  
  piVar1 = *in_ECX;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  if ((param_3 & 0x14) == 0) {
    HVar2 = CoCreateInstance(param_1,param_2,param_3,(IID *)&DAT_1025a400,in_ECX);
  }
  else {
    HVar2 = CoCreateInstance(param_1,param_2,param_3,(IID *)&DAT_1025a430,&param_2);
    if (HVar2 < 0) goto LAB_100cb72a;
    HVar2 = OleRun(param_2);
    if (-1 < HVar2) {
      HVar2 = (*param_2->lpVtbl->QueryInterface)(param_2,(IID *)&DAT_1025a400,in_ECX);
    }
    (*param_2->lpVtbl->Release)(param_2);
  }
  if (-1 < HVar2) {
    return HVar2;
  }
LAB_100cb72a:
  *in_ECX = (void *)0x0;
  return HVar2;
}


// ==== 100cb740 FUN_100cb740

LONG FUN_100cb740(void)

{
  LONG LVar1;
  undefined4 *in_ECX;
  
  LVar1 = InterlockedDecrement(in_ECX + 2);
  if ((LVar1 == 0) && (in_ECX != (undefined4 *)0x0)) {
    if ((BSTR)*in_ECX != (BSTR)0x0) {
      SysFreeString((BSTR)*in_ECX);
    }
    if (in_ECX[1] != 0) {
      (**(code **)(**(int **)GMalloc_exref + 8))(in_ECX[1]);
    }
    (**(code **)(**(int **)GMalloc_exref + 8))();
  }
  return LVar1;
}


// ==== 100cb7a0 FUN_100cb7a0

void FUN_100cb7a0(undefined4 param_1,undefined4 *param_2)

{
  HRESULT HVar1;
  IUnknown *in_ECX;
  undefined1 local_14 [8];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_101f6e99;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_14._4_2_ = 0;
  local_14._6_2_ = 0;
  local_14._0_4_ = 0;
  HVar1 = (*in_ECX->lpVtbl[3].QueryInterface)
                    (in_ECX,(IID *)local_14,(void **)(DAT_103554c4 ^ (uint)&stack0xffffffe8));
  if (HVar1 < 0) {
    _com_issue_errorex(HVar1,in_ECX,(_GUID *)&DAT_1025a450);
  }
  *param_2 = local_14._4_4_;
  ExceptionList = puStack_8;
  return;
}


// ==== 100cb820 FUN_100cb820

void FUN_100cb820(undefined4 param_1,undefined4 *param_2)

{
  HRESULT HVar1;
  IUnknown *in_ECX;
  undefined1 local_14 [8];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_101f6ed9;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_14._4_2_ = 0;
  local_14._6_2_ = 0;
  local_14._0_4_ = 0;
  HVar1 = (*in_ECX->lpVtbl[0x14].QueryInterface)
                    (in_ECX,(IID *)local_14,(void **)(DAT_103554c4 ^ (uint)&stack0xffffffe8));
  if (HVar1 < 0) {
    _com_issue_errorex(HVar1,in_ECX,(_GUID *)&DAT_1025a420);
  }
  *param_2 = local_14._4_4_;
  ExceptionList = puStack_8;
  return;
}


// ==== 100cb8b0 FUN_100cb8b0

void FUN_100cb8b0(void)

{
  int iVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101f6f00;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  iVar1 = FUN_100cb6a0(&DAT_1025a4ac,0,7);
  if (iVar1 < 0) {
    appFailAssert("SUCCEEDED( hr )",".\\XML\\XMLDocument.cpp",0xae);
  }
  ExceptionList = local_10;
  return;
}


// ==== 100cb928 Catch@100cb928

void Catch_100cb928(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 100cb93c Catch@100cb93c

void Catch_100cb93c(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"XMLDocument::Init");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100cb960 FUN_100cb960

void FUN_100cb960(void)

{
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101f6f20;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if (*(int *)(in_ECX + 4) != 0) {
    FUN_100cb280();
    FUN_100cce60(0);
  }
  ExceptionList = local_10;
  return;
}


// ==== 100cb9c3 Catch@100cb9c3

void Catch_100cb9c3(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 100cb9d7 Catch@100cb9d7

void Catch_100cb9d7(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"XMLDocument::Destroy");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100cba00 FUN_100cba00

void FUN_100cba00(undefined4 param_1)

{
  undefined4 *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101f6f4b;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *in_ECX = XMLDocument::vftable;
  in_ECX[1] = 0;
  local_8 = 1;
  in_ECX[2] = param_1;
  FUN_100cb8b0();
  ExceptionList = local_10;
  return;
}


// ==== 100cba70 Catch@100cba70

void Catch_100cba70(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 100cba84 Catch@100cba84

void Catch_100cba84(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"XMLDocument::XMLDocument");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100cbab0 FUN_100cbab0

void FUN_100cbab0(void)

{
  int *piVar1;
  undefined4 *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101f6f7b;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *in_ECX = XMLDocument::vftable;
  local_8 = 1;
  FUN_100cb960();
  local_8 = 0xffffffff;
  piVar1 = (int *)in_ECX[1];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  ExceptionList = local_10;
  return;
}


// ==== 100cbb1e Catch@100cbb1e

void Catch_100cbb1e(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 100cbb32 Catch@100cbb32

void Catch_100cbb32(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"XMLDocument::~XMLDocument");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100cbb50 FUN_100cbb50

void FUN_100cbb50(void)

{
  int *in_ECX;
  
  if (*in_ECX != 0) {
    FUN_100cb740();
    *in_ECX = 0;
  }
  return;
}


// ==== 100cbb70 FUN_100cbb70

undefined4 FUN_100cbb70(void)

{
  ULONG UVar1;
  IUnknown *in_ECX;
  undefined4 unaff_ESI;
  undefined4 unaff_retaddr;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_101f6fb9;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UVar1 = (*in_ECX->lpVtbl[2].Release)(in_ECX);
  if ((int)UVar1 < 0) {
    _com_issue_errorex(UVar1,in_ECX,(_GUID *)&DAT_1025a410);
  }
  FUN_100cb600(unaff_ESI,0);
  ExceptionList = (void *)0x0;
  return unaff_retaddr;
}


// ==== 100cbc00 FUN_100cbc00

undefined4 FUN_100cbc00(undefined4 param_1,undefined4 param_2)

{
  HRESULT HVar1;
  IUnknown *in_ECX;
  undefined1 local_14 [8];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_101f6ff9;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_14._4_2_ = 0;
  local_14._6_2_ = 0;
  local_14._0_4_ = 0;
  HVar1 = (*in_ECX->lpVtbl[3].QueryInterface)
                    (in_ECX,(IID *)local_14,(void **)(DAT_103554c4 ^ (uint)&stack0xffffffe8));
  if (HVar1 < 0) {
    _com_issue_errorex(HVar1,in_ECX,(_GUID *)&DAT_1025a410);
  }
  FUN_100cb600(local_14._4_4_,0);
  ExceptionList = puStack_8;
  return param_2;
}


// ==== 100cbc90 FUN_100cbc90

undefined4 * FUN_100cbc90(undefined4 *param_1,undefined4 *param_2)

{
  uint uVar1;
  IID *riid;
  HRESULT HVar2;
  IUnknown *in_ECX;
  void *local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_101f7041;
  local_c = ExceptionList;
  uVar1 = DAT_103554c4 ^ (uint)&stack0xffffffe0;
  ExceptionList = &local_c;
  local_10 = 0;
  local_4 = 1;
  local_14 = (void *)0x0;
  if (param_2 == (undefined4 *)0x0) {
    riid = (IID *)0x0;
  }
  else {
    riid = (IID *)*param_2;
  }
  HVar2 = (*in_ECX->lpVtbl[0xc].QueryInterface)(in_ECX,riid,&local_14);
  if (HVar2 < 0) {
    _com_issue_errorex(HVar2,in_ECX,(_GUID *)&DAT_1025a440);
  }
  *param_1 = local_14;
  local_10 = 1;
  local_4 = local_4 & 0xffffff00;
  if (param_2 != (undefined4 *)0x0) {
    FUN_100cb740(uVar1);
  }
  ExceptionList = local_c;
  return param_1;
}


// ==== 100cbd40 FUN_100cbd40

ULONG FUN_100cbd40(undefined4 *param_1,undefined4 *param_2)

{
  void *pvVar1;
  ULONG UVar2;
  IUnknown *in_ECX;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_101f7068;
  local_c = ExceptionList;
  pvVar1 = (void *)(DAT_103554c4 ^ (uint)&stack0xffffffe4);
  ExceptionList = &local_c;
  uVar3 = 0;
  local_4 = 0;
  if (param_1 != (undefined4 *)0x0) {
    uVar3 = *param_1;
  }
  uVar4 = *param_2;
  uVar5 = param_2[1];
  uVar6 = param_2[2];
  uVar7 = param_2[3];
  UVar2 = (*in_ECX->lpVtbl[0x1a].Release)(in_ECX);
  if ((int)UVar2 < 0) {
    _com_issue_errorex(UVar2,in_ECX,(_GUID *)&DAT_1025a400);
  }
  if (param_1 != (undefined4 *)0x0) {
    FUN_100cb740(uVar3,uVar4,uVar5,uVar6,uVar7);
  }
  ExceptionList = pvVar1;
  return UVar2;
}


// ==== 100cbdf0 FUN_100cbdf0

undefined4 FUN_100cbdf0(void)

{
  FString *this;
  uint *puVar1;
  undefined3 uVar2;
  short sVar3;
  undefined4 uVar4;
  ushort *puVar5;
  int *piVar6;
  ushort *puVar7;
  FString *in_stack_00000010;
  int *in_stack_00000014;
  undefined4 *puVar8;
  uint uStack_3c;
  VARIANTARG local_2c;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101f70d1;
  local_10 = ExceptionList;
  uStack_3c = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_3c;
  ExceptionList = &local_10;
  local_8._1_3_ = 0;
  uVar2 = local_8._1_3_;
  local_8._0_1_ = 1;
  local_8._1_3_ = 0;
  puVar1 = &uStack_3c;
  if (in_stack_00000014 != (int *)0x0) {
    uVar4 = FUN_100cef40(&local_2c);
    local_8._0_1_ = 2;
    FUN_100cccb0(uVar4);
    FUN_100cb430(uVar4);
    local_8._0_1_ = 1;
    VariantClear(&local_2c);
    puVar1 = (uint *)local_14;
    uVar2 = local_8._1_3_;
  }
  local_8._1_3_ = uVar2;
  local_14 = (undefined1 *)puVar1;
  uVar4 = 0xffffffff;
  FUN_100cccb0(0xffffffff);
  FUN_100cb400(uVar4);
  puVar5 = FString::operator*((FString *)&stack0x00000004);
  uVar4 = FUN_100cb300(puVar5);
  local_8._0_1_ = 3;
  FUN_100cccb0(uVar4);
  sVar3 = FUN_100cb3a0(uVar4);
  local_8._0_1_ = 1;
  VariantClear(&local_2c);
  this = in_stack_00000010;
  if (sVar3 == -1) {
    if (in_stack_00000010 != (FString *)0x0) {
      FUN_100cb480();
    }
    local_8 = 0xffffffff;
    FString::~FString((FString *)&stack0x00000004);
    ExceptionList = local_10;
    return 1;
  }
  if (in_stack_00000010 != (FString *)0x0) {
    puVar8 = &stack0x00000010;
    FUN_100cccb0(puVar8);
    FUN_100cb820(puVar8);
    local_8._0_1_ = 4;
    FUN_100cccb0();
    uVar4 = FUN_100cb370();
    *(undefined4 *)(this + 0x18) = uVar4;
    local_8._0_1_ = 1;
    if (in_stack_00000010 != (FString *)0x0) {
      (**(code **)(*(int *)in_stack_00000010 + 8))(in_stack_00000010);
    }
    puVar8 = &stack0x00000014;
    FUN_100cccb0(puVar8);
    FUN_100cb820(puVar8);
    local_8._0_1_ = 5;
    puVar8 = &stack0x00000010;
    FUN_100cccb0(puVar8);
    piVar6 = (int *)FUN_100cbb70(puVar8);
    local_8._0_1_ = 6;
    if (*piVar6 == 0) {
      puVar5 = (ushort *)0x0;
    }
    else {
      puVar5 = *(ushort **)*piVar6;
    }
    FString::operator=(this,puVar5);
    local_8._0_1_ = 5;
    FUN_100cbb50();
    local_8._0_1_ = 1;
    if (in_stack_00000014 != (int *)0x0) {
      (**(code **)(*in_stack_00000014 + 8))(in_stack_00000014);
    }
    puVar8 = &stack0x00000014;
    FUN_100cccb0(puVar8);
    FUN_100cb820(puVar8);
    local_8._0_1_ = 7;
    puVar8 = &stack0x00000010;
    FUN_100cccb0(puVar8);
    piVar6 = (int *)FUN_100cbc00(puVar8);
    local_8._0_1_ = 8;
    if (*piVar6 == 0) {
      puVar5 = (ushort *)0x0;
    }
    else {
      puVar5 = *(ushort **)*piVar6;
    }
    FString::operator=(this + 0xc,puVar5);
    local_8._0_1_ = 7;
    FUN_100cbb50();
    local_8._0_1_ = 1;
    if (in_stack_00000014 != (int *)0x0) {
      (**(code **)(*in_stack_00000014 + 8))(in_stack_00000014);
    }
  }
  puVar5 = FString::operator*(this + 0xc);
  uVar4 = *(undefined4 *)(this + 0x18);
  puVar7 = FString::operator*(this);
  uVar4 = FUN_10005c30(L"XMLDocument:failed to load document!! File=%s Line=%d Reason=%s!!",puVar7,
                       uVar4,puVar5);
  FUN_100d01f0(uVar4);
  local_8 = 0xffffffff;
  FString::~FString((FString *)&stack0x00000004);
  ExceptionList = local_10;
  return 0;
}


// ==== 100cc036 Catch@100cc036

void Catch_100cc036(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 100cc04a Catch@100cc04a

void Catch_100cc04a(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"XMLDocument::Load");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100cc070 FUN_100cc070

undefined4 FUN_100cc070(void)

{
  undefined4 uVar1;
  int **ppiStack_4c;
  uint uStack_44;
  VARIANTARG local_34;
  undefined1 *local_20;
  int *local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_101f7118;
  local_10 = ExceptionList;
  uStack_44 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_44;
  ExceptionList = &local_10;
  local_8 = 0;
  ppiStack_4c = (int **)0x100cc0af;
  FUN_100cb300();
  local_8._0_1_ = 1;
  local_20 = (undefined1 *)&ppiStack_4c;
  FUN_100cb550(L"SelectionNamespaces");
  local_8._0_1_ = 2;
  FUN_100cccb0();
  local_8._0_1_ = 1;
  FUN_100cbd40();
  local_8._0_1_ = 0;
  ppiStack_4c = (int **)0x100cc0ed;
  VariantClear(&local_34);
  local_20 = &stack0xffffffb8;
  ppiStack_4c = (int **)0x1025a6b4;
  FUN_100cb4b0();
  local_8._0_1_ = 3;
  ppiStack_4c = &local_18;
  FUN_100cccb0();
  local_8._0_1_ = 0;
  FUN_100cbc90();
  local_8._0_1_ = 4;
  local_20 = &stack0xffffffb8;
  ppiStack_4c = (int **)&stack0xffffffb8;
  FUN_100cccb0();
  FUN_100cb7a0();
  local_8._0_1_ = 4;
  ppiStack_4c = (int **)0x100cc140;
  uVar1 = FUN_100cc430();
  local_8 = (uint)local_8._1_3_ << 8;
  if (local_18 != (int *)0x0) {
    ppiStack_4c = (int **)0x100cc154;
    (**(code **)(*local_18 + 8))();
  }
  ExceptionList = local_10;
  return uVar1;
}


// ==== 100cc168 Catch@100cc168

void Catch_100cc168(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x20);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 100cc17c Catch@100cc17c

void Catch_100cc17c(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"XMLDocument::GetRootNode");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100cc1a0 FUN_100cc1a0

void FUN_100cc1a0(void)

{
  FString *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101f7155;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FString::FString(in_ECX);
  local_4 = 0;
  FString::FString(in_ECX + 0xc);
  ExceptionList = local_c;
  return;
}


// ==== 100cc200 FUN_100cc200

void FUN_100cc200(void)

{
  FString *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_101f7185;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_4 = 0;
  FString::~FString(in_ECX + 0xc);
  local_4 = 0xffffffff;
  FString::~FString(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 100cc260 FUN_100cc260

void FUN_100cc260(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = 0;
  return;
}


// ==== 100cc2b1 Catch@100cc2b1

void Catch_100cc2b1(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 100cc2c5 Catch@100cc2c5

void Catch_100cc2c5(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"XMLManager::Init");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100cc2f0 FUN_100cc2f0

void FUN_100cc2f0(byte param_1)

{
  FUN_100cf070();
  if ((param_1 & 1) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))();
  }
  return;
}


// ==== 100cc320 FUN_100cc320

undefined4 FUN_100cc320(void)

{
  int *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101f71c0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if (*in_ECX != 0) {
    FUN_100cc2f0(1);
  }
  *in_ECX = 0;
  ExceptionList = local_10;
  return 1;
}


// ==== 100cc37e Catch@100cc37e

void Catch_100cc37e(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 100cc392 Catch@100cc392

void Catch_100cc392(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"XMLManager::UnloadSchema");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100cc3b0 FUN_100cc3b0

void FUN_100cc3b0(byte param_1)

{
  FUN_100cbab0();
  if ((param_1 & 1) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))();
  }
  return;
}


// ==== 100cc3e0 FUN_100cc3e0

void FUN_100cc3e0(byte param_1)

{
  FUN_100cd1d0();
  if ((param_1 & 1) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))();
  }
  return;
}


// ==== 100cc410 FUN_100cc410

void FUN_100cc410(int *param_1)

{
  int *in_ECX;
  
  param_1 = (int *)*param_1;
  *in_ECX = (int)param_1;
  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 4))(param_1);
  }
  return;
}


// ==== 100cc430 FUN_100cc430

undefined4 FUN_100cc430(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101f71fb;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8._0_1_ = 1;
  local_8._1_3_ = 0;
  iVar1 = FUN_10004ed0();
  local_8._0_1_ = 2;
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    FUN_100cc410(&param_1);
    local_8._0_1_ = 2;
    uVar2 = FUN_100ccff0();
  }
  local_8 = CONCAT31(local_8._1_3_,1);
  FUN_100d9a30();
  local_8 = 0xffffffff;
  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 8))();
  }
  ExceptionList = local_10;
  return uVar2;
}


// ==== 100cc4e3 Catch@100cc4e3

void Catch_100cc4e3(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x20);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 100cc4f7 Catch@100cc4f7

void Catch_100cc4f7(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"XMLManager::CreateNode");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100cc520 FUN_100cc520

undefined4 FUN_100cc520(void)

{
  int in_ECX;
  int iVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101f7220;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  for (iVar1 = 0; iVar1 < *(int *)(in_ECX + 0x14); iVar1 = iVar1 + 1) {
    if (*(int *)(*(int *)(in_ECX + 0x10) + iVar1 * 4) != 0) {
      FUN_100cc3b0(1);
    }
    *(undefined4 *)(*(int *)(in_ECX + 0x10) + iVar1 * 4) = 0;
  }
  for (iVar1 = 0; iVar1 < *(int *)(in_ECX + 0x14); iVar1 = iVar1 + 1) {
  }
  FArray::Empty((FArray *)(in_ECX + 0x10),4,0);
  ExceptionList = local_10;
  return 1;
}


// ==== 100cc5b1 Catch@100cc5b1

void Catch_100cc5b1(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x1c) = *(undefined4 *)(unaff_EBP + -0x20);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x1c,&DAT_102a47f0);
}


// ==== 100cc5c5 Catch@100cc5c5

void Catch_100cc5c5(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"XMLManager::UnloadSchema");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100cc5f0 FUN_100cc5f0

undefined4 FUN_100cc5f0(void)

{
  int in_ECX;
  int iVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101f7240;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  for (iVar1 = 0; iVar1 < *(int *)(in_ECX + 8); iVar1 = iVar1 + 1) {
    if (*(int *)(*(int *)(in_ECX + 4) + iVar1 * 4) != 0) {
      FUN_100cc3e0(1);
    }
    *(undefined4 *)(*(int *)(in_ECX + 4) + iVar1 * 4) = 0;
  }
  for (iVar1 = 0; iVar1 < *(int *)(in_ECX + 8); iVar1 = iVar1 + 1) {
  }
  FArray::Empty((FArray *)(in_ECX + 4),4,0);
  ExceptionList = local_10;
  return 1;
}


// ==== 100cc681 Catch@100cc681

void Catch_100cc681(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x1c) = *(undefined4 *)(unaff_EBP + -0x20);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x1c,&DAT_102a47f0);
}


// ==== 100cc695 Catch@100cc695

void Catch_100cc695(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"XMLManager::DestroyNodes");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100cc6c0 FUN_100cc6c0

void FUN_100cc6c0(void)

{
  int *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101f7260;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if (*in_ECX != 0) {
    FUN_100cc2f0(1);
    *in_ECX = 0;
  }
  FUN_100cc520();
  ExceptionList = local_10;
  return;
}


// ==== 100cc727 Catch@100cc727

void Catch_100cc727(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 100cc73b Catch@100cc73b

void Catch_100cc73b(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"XMLManager::Destroy");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100cc760 FUN_100cc760

void FUN_100cc760(void)

{
  int iVar1;
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_101f7289;
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


// ==== 100cc800 FUN_100cc800

void FUN_100cc800(void)

{
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_101f72d8;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FArray::FArray((FArray *)(in_ECX + 4));
  local_8 = 1;
  FArray::FArray((FArray *)(in_ECX + 0x10));
  local_8 = CONCAT31((int3)((uint)local_8 >> 8),4);
  FUN_100cc260();
  ExceptionList = local_10;
  return;
}


// ==== 100cc879 Catch@100cc879

void Catch_100cc879(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x20);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 100cc88d Catch@100cc88d

void Catch_100cc88d(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"XMLManager::XMLManager");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100cc8b0 FUN_100cc8b0

void FUN_100cc8b0(void)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101f7316;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 2;
  FUN_100cc6c0();
  local_8 = 0;
  FUN_100cc760();
  local_8 = 0xffffffff;
  FUN_100c97c0();
  ExceptionList = local_10;
  return;
}


// ==== 100cc920 Catch@100cc920

void Catch_100cc920(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 100cc934 Catch@100cc934

void Catch_100cc934(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"XMLManager::~XMLManager");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100cc960 FUN_100cc960

undefined4 FUN_100cc960(void)

{
  int iVar1;
  undefined4 *in_ECX;
  int iVar2;
  int *in_stack_00000010;
  FString aFStack_64 [8];
  undefined4 uStack_5c;
  undefined1 *puStack_58;
  wchar_t *pwStack_54;
  uint uStack_50;
  undefined1 local_40 [32];
  undefined1 *local_20;
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101f7365;
  local_10 = ExceptionList;
  uStack_50 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_50;
  ExceptionList = &local_10;
  iVar2 = 0;
  local_8._0_1_ = 1;
  local_8._1_3_ = 0;
  if (in_stack_00000010 == (int *)0x0) {
    pwStack_54 = L"XMLManager:tried to load NULL document!!";
    puStack_58 = (undefined1 *)0x100cc9a5;
    local_14 = (undefined1 *)&uStack_50;
    puStack_58 = (undefined1 *)FUN_10005c30();
    uStack_5c = 0x100cc9ab;
    FUN_100d01f0();
  }
  else {
    pwStack_54 = (wchar_t *)0xc;
    puStack_58 = (undefined1 *)0x100cc9db;
    local_18 = FUN_10004ed0();
    local_8._0_1_ = 2;
    if (local_18 != 0) {
      puStack_58 = (undefined1 *)0x100cc9f1;
      iVar2 = FUN_100cba00();
    }
    local_8._0_1_ = 1;
    pwStack_54 = 
    L"γ嶈诼倇䶍凄\xec83謌觌\xe465喍刈ᗿ쏠ဢ䗆Ӽ嶈诼\xe8ce\xf3c2\xffff삅ᅵ䗆Ǽ䶍\xe8c4\xf7c2\xffff毩\xffff诿ᑅら䶍凬侍\xe810쿜"
    ;
    local_18 = iVar2;
    FUN_100cc1a0();
    local_8._0_1_ = 3;
    pwStack_54 = (wchar_t *)*in_ECX;
    puStack_58 = local_40;
    local_20 = aFStack_64;
    FString::FString(aFStack_64,(FString *)&stack0x00000004);
    local_8._0_1_ = 3;
    iVar1 = FUN_100cbdf0();
    if (iVar1 != 0) {
      *in_stack_00000010 = iVar2;
      pwStack_54 = (wchar_t *)&local_18;
      puStack_58 = (undefined1 *)0x100cca54;
      FUN_100d9a30();
      local_8 = CONCAT31(local_8._1_3_,1);
      pwStack_54 = L"䗇￼\xffff跿ࡍᗿ쏄ဢƸ";
      FUN_100cc200();
      local_8 = 0xffffffff;
      pwStack_54 = L"Ƹ";
      FString::~FString((FString *)&stack0x00000004);
      ExceptionList = local_10;
      return 1;
    }
    local_8 = CONCAT31(local_8._1_3_,1);
    pwStack_54 = L"毩\xffff诿ᑅら䶍凬侍\xe810쿜";
    FUN_100cc200();
  }
  local_8 = 0xffffffff;
  pwStack_54 = L"쀳䶋擴ඉ";
  FString::~FString((FString *)&stack0x00000004);
  ExceptionList = local_10;
  return 0;
}


// ==== 100cca89 Catch@100cca89

void Catch_100cca89(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x20);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 100cca9d Catch@100cca9d

void Catch_100cca9d(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"XMLManager::LoadDocument");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100ccac0 FUN_100ccac0

undefined4 FUN_100ccac0(void)

{
  int iVar1;
  int *in_ECX;
  undefined4 uStack_40;
  wchar_t *pwStack_3c;
  ushort *puStack_38;
  uint uStack_34;
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101f73a6;
  local_10 = ExceptionList;
  uStack_34 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_34;
  ExceptionList = &local_10;
  local_8._0_1_ = 1;
  local_8._1_3_ = 0;
  local_18 = 0;
  puStack_38 = (ushort *)&local_18;
  FString::FString((FString *)&stack0xffffffbc,(FString *)&stack0x00000004);
  local_8 = CONCAT31(local_8._1_3_,1);
  iVar1 = FUN_100cc960();
  if (iVar1 != 0) {
    if (*in_ECX != 0) {
      puStack_38 = (ushort *)0x1;
      pwStack_3c = L"ۇ";
      FUN_100cc2f0();
      *in_ECX = 0;
    }
    puStack_38 = (ushort *)0x8;
    pwStack_3c = 
    L"쒃褄\xe445䗆ϼ삅ॴ좋ߨ\'\xeb00㌂裀ﱝډ\xec83謌觌\xe465䖍倈ᗿ쏠ဢ䗆Ӽ嶈诼\xe80e⠮"
    ;
    iVar1 = FUN_10004ed0();
    local_8._0_1_ = 3;
    if (iVar1 == 0) {
      iVar1 = 0;
    }
    else {
      puStack_38 = (ushort *)0x100ccb59;
      iVar1 = FUN_100cf260();
    }
    local_8._0_1_ = 1;
    *in_ECX = iVar1;
    FString::FString((FString *)&uStack_40,(FString *)&stack0x00000004);
    local_8 = CONCAT31(local_8._1_3_,1);
    iVar1 = FUN_100cf3b0();
    if (iVar1 != 0) {
      local_8 = 0xffffffff;
      puStack_38 = (ushort *)0x100ccbd9;
      FString::~FString((FString *)&stack0x00000004);
      ExceptionList = local_10;
      return 1;
    }
    puStack_38 = (ushort *)0x100ccb8f;
    puStack_38 = FString::operator*((FString *)&stack0x00000004);
    pwStack_3c = L"XMLManager:failed to load schema(%s)!!";
    uStack_40 = 0x100ccb9a;
    uStack_40 = FUN_10005c30();
    FUN_100d01f0();
  }
  local_8 = 0xffffffff;
  puStack_38 = (ushort *)0x100ccbb3;
  FString::~FString((FString *)&stack0x00000004);
  ExceptionList = local_10;
  return 0;
}


// ==== 100ccbef Catch@100ccbef

void Catch_100ccbef(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x20);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 100ccc03 Catch@100ccc03

void Catch_100ccc03(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"XMLManager::LoadSchema");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100ccc20 FUN_100ccc20

void FUN_100ccc20(void)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 0xc) = 0;
  return;
}


// ==== 100ccc72 Catch@100ccc72

void Catch_100ccc72(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 100ccc86 Catch@100ccc86

void Catch_100ccc86(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"XMLNode::Init");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100cccb0 FUN_100cccb0

int FUN_100cccb0(void)

{
  int *in_ECX;
  
  if (*in_ECX == 0) {
    _com_issue_error(-0x7fffbffd);
  }
  return *in_ECX;
}


// ==== 100cccd0 FUN_100cccd0

void * FUN_100cccd0(void)

{
  ULONG UVar1;
  IUnknown *in_ECX;
  void *unaff_retaddr;
  undefined4 local_20;
  VARIANTARG local_1c;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_101f7409;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_20 = 0;
  VariantInit(&local_1c);
  UVar1 = (*in_ECX->lpVtbl[2].Release)(in_ECX);
  if ((int)UVar1 < 0) {
    _com_issue_errorex(UVar1,in_ECX,(_GUID *)&DAT_1025a440);
  }
  _memcpy_s(unaff_retaddr,0x10,&local_20,0x10);
  ExceptionList = (void *)local_1c.n1._12_4_;
  return unaff_retaddr;
}


// ==== 100ccd70 FUN_100ccd70

ULONG FUN_100ccd70(void)

{
  ULONG UVar1;
  IUnknown *in_ECX;
  
  UVar1 = (*in_ECX->lpVtbl[3].AddRef)(in_ECX);
  if ((int)UVar1 < 0) {
    _com_issue_errorex(UVar1,in_ECX,(_GUID *)&DAT_1025a450);
  }
  return UVar1;
}


// ==== 100ccda0 FUN_100ccda0

undefined4 FUN_100ccda0(void)

{
  int *piVar1;
  int *piVar2;
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101f7430;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  piVar1 = (int *)(in_ECX + 0xc);
  if (*piVar1 == 0) {
    piVar2 = (int *)FUN_100cccb0();
    (**(code **)(*piVar2 + 0x30))(piVar2,piVar1);
  }
  if (*piVar1 == 0) {
    ExceptionList = local_10;
    return 0;
  }
  FUN_100ccd70();
  ExceptionList = local_10;
  return 1;
}


// ==== 100cce21 Catch@100cce21

void Catch_100cce21(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 100cce35 Catch@100cce35

void Catch_100cce35(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"XMLNode::GetChildNodes");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100cce60 FUN_100cce60

void FUN_100cce60(int param_1)

{
  int *piVar1;
  int *in_ECX;
  
  if (param_1 != 0) {
    _com_issue_error(-0x7fffbffd);
  }
  piVar1 = (int *)*in_ECX;
  if (piVar1 != (int *)0x0) {
    *in_ECX = 0;
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  return;
}


// ==== 100cce90 FUN_100cce90

void FUN_100cce90(int *param_1)

{
  int *piVar1;
  int *in_ECX;
  
  param_1 = (int *)*param_1;
  piVar1 = (int *)*in_ECX;
  if (piVar1 != param_1) {
    *in_ECX = (int)param_1;
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 4))(param_1);
    }
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))(piVar1);
    }
  }
  return;
}


// ==== 100cced0 FUN_100cced0

void FUN_100cced0(void)

{
  int iVar1;
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_101f7459;
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


// ==== 100ccf70 FUN_100ccf70

void FUN_100ccf70(void)

{
  ULONG UVar1;
  IUnknown *in_ECX;
  undefined4 unaff_ESI;
  undefined4 *unaff_retaddr;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_101f7499;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UVar1 = (*in_ECX->lpVtbl[5].Release)(in_ECX);
  if ((int)UVar1 < 0) {
    _com_issue_errorex(UVar1,in_ECX,(_GUID *)&DAT_1025a440);
  }
  *unaff_retaddr = unaff_ESI;
  ExceptionList = (void *)0x0;
  return;
}


// ==== 100ccff0 FUN_100ccff0

void FUN_100ccff0(int *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 *in_ECX;
  FArray **ppFVar2;
  uint uStack_34;
  FArray *local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101f74fa;
  local_10 = ExceptionList;
  uStack_34 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_34;
  ExceptionList = &local_10;
  *in_ECX = XMLNode::vftable;
  in_ECX[1] = 0;
  in_ECX[2] = 0;
  local_8._1_3_ = 0;
  local_8._0_1_ = 2;
  local_18 = (FArray *)(in_ECX + 5);
  FArray::FArray(local_18);
  local_8._0_1_ = 5;
  FUN_100cce90(&param_1);
  ppFVar2 = &local_18;
  FUN_100cccb0(ppFVar2);
  uVar1 = FUN_100ccf70(ppFVar2);
  local_8._0_1_ = 6;
  FUN_100cce90(uVar1);
  local_8 = CONCAT31(local_8._1_3_,5);
  if (local_18 != (FArray *)0x0) {
    (**(code **)(*(int *)local_18 + 8))(local_18);
  }
  in_ECX[4] = param_2;
  FUN_100ccc20();
  local_8 = 0xffffffff;
  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 8))(param_1);
  }
  ExceptionList = local_10;
  return;
}


// ==== 100cd0d0 Catch@100cd0d0

void Catch_100cd0d0(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x20);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 100cd0e4 Catch@100cd0e4

void Catch_100cd0e4(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"XMLNode::XMLNode");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100cd110 FUN_100cd110

void FUN_100cd110(void)

{
  int *piVar1;
  int iVar2;
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101f7520;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_100cce60(0);
  *(undefined4 *)(in_ECX + 0x10) = 0;
  piVar1 = *(int **)(in_ECX + 0xc);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    *(undefined4 *)(in_ECX + 0xc) = 0;
  }
  for (iVar2 = 0; iVar2 < *(int *)(in_ECX + 0x18); iVar2 = iVar2 + 1) {
  }
  FArray::Empty((FArray *)(in_ECX + 0x14),4,0);
  ExceptionList = local_10;
  return;
}


// ==== 100cd194 Catch@100cd194

void Catch_100cd194(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 100cd1a8 Catch@100cd1a8

void Catch_100cd1a8(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"XMLNode::Destroy");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100cd1d0 FUN_100cd1d0

void FUN_100cd1d0(void)

{
  int *piVar1;
  undefined4 *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  puStack_c = &LAB_101f7561;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *in_ECX = XMLNode::vftable;
  local_8 = 3;
  FUN_100cd110();
  local_8 = 1;
  FUN_100cced0();
  local_8 = local_8 & 0xffffff00;
  piVar1 = (int *)in_ECX[2];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  local_8 = 0xffffffff;
  piVar1 = (int *)in_ECX[1];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  ExceptionList = local_10;
  return;
}


// ==== 100cd260 Catch@100cd260

void Catch_100cd260(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 100cd274 Catch@100cd274

void Catch_100cd274(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"XMLNode::~XMLNode");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100cd2a0 FUN_100cd2a0

undefined4 FUN_100cd2a0(void)

{
  ULONG UVar1;
  IUnknown *in_ECX;
  undefined4 unaff_ESI;
  undefined4 unaff_retaddr;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_101f7599;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UVar1 = (*in_ECX->lpVtbl[2].AddRef)(in_ECX);
  if ((int)UVar1 < 0) {
    _com_issue_errorex(UVar1,in_ECX,(_GUID *)&DAT_1025a440);
  }
  FUN_100cb600(unaff_ESI,0);
  ExceptionList = (void *)0x0;
  return unaff_retaddr;
}


// ==== 100cd330 FUN_100cd330

undefined4 * FUN_100cd330(undefined4 param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined4 uVar3;
  ULONG UVar4;
  IUnknown *in_ECX;
  undefined4 unaff_ESI;
  void **ppvVar5;
  void *local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 *local_4;
  
  puStack_8 = &LAB_101f75e1;
  local_c = ExceptionList;
  uVar2 = DAT_103554c4 ^ (uint)&stack0xffffffe0;
  ExceptionList = &local_c;
  local_10 = 0;
  local_4 = (undefined4 *)0x1;
  local_14 = (void *)0x0;
  if (param_2 == (undefined4 *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *param_2;
  }
  ppvVar5 = &local_14;
  UVar4 = (*in_ECX->lpVtbl[2].AddRef)(in_ECX);
  if ((int)UVar4 < 0) {
    _com_issue_errorex(UVar4,in_ECX,(_GUID *)&DAT_1025aa04);
  }
  puVar1 = local_4;
  *local_4 = unaff_ESI;
  local_c = (void *)((uint)local_c & 0xffffff00);
  if (param_2 != (undefined4 *)0x0) {
    FUN_100cb740(uVar3,ppvVar5,uVar2);
  }
  ExceptionList = local_14;
  return puVar1;
}


// ==== 100cd3e0 FUN_100cd3e0

FString * FUN_100cd3e0(FString *param_1)

{
  int *piVar1;
  ushort *puVar2;
  undefined1 *puVar3;
  uint uStack_34;
  undefined1 local_1c [4];
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101f7622;
  local_10 = ExceptionList;
  uStack_34 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_34;
  ExceptionList = &local_10;
  local_18 = 0;
  local_8 = 1;
  puVar3 = local_1c;
  FUN_100cccb0(puVar3);
  piVar1 = (int *)FUN_100cd2a0(puVar3);
  local_8._0_1_ = 2;
  if (*piVar1 == 0) {
    puVar2 = (ushort *)0x0;
  }
  else {
    puVar2 = *(ushort **)*piVar1;
  }
  FString::FString(param_1,puVar2);
  local_18 = 1;
  local_8 = CONCAT31(local_8._1_3_,1);
  FUN_100cbb50();
  ExceptionList = local_10;
  return param_1;
}


// ==== 100cd475 Catch@100cd475

void Catch_100cd475(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x1c) = *(undefined4 *)(unaff_EBP + -0x20);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x1c,&DAT_102a47f0);
}


// ==== 100cd489 Catch@100cd489

void Catch_100cd489(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"XMLNode::GetName");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100cd4b0 FUN_100cd4b0

undefined4 FUN_100cd4b0(FString *param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  ushort *puVar4;
  uint local_48;
  FString local_38 [20];
  undefined1 *local_24;
  int *local_1c;
  int *local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_101f7669;
  local_10 = ExceptionList;
  local_48 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&local_48;
  ExceptionList = &local_10;
  local_8 = 0;
  if (param_2 == 0) {
    local_14 = (undefined1 *)&local_48;
    FString::operator*(param_1);
    uVar1 = FUN_10005c30(L"XMLNode:GetChildNodeList tried to return child nodes in NULL(%s)!!");
    FUN_100d01f0(uVar1);
  }
  else {
    iVar2 = FUN_100ccda0();
    if (iVar2 != 0) {
      local_18 = (int *)0x0;
      local_8._0_1_ = 1;
      do {
        FUN_100cb7a0();
        local_8._0_1_ = 2;
        piVar3 = (int *)FUN_100cce90();
        iVar2 = *piVar3;
        local_8._0_1_ = 1;
        if (local_1c != (int *)0x0) {
          (**(code **)(*local_1c + 8))();
        }
        if (iVar2 == 0) {
          local_8 = (uint)local_8._1_3_ << 8;
          if (local_18 != (int *)0x0) {
            (**(code **)(*local_18 + 8))();
          }
          ExceptionList = local_10;
          return 1;
        }
        FUN_100cccb0();
        piVar3 = (int *)FUN_100cd2a0();
        local_8._0_1_ = 3;
        if (*piVar3 == 0) {
          puVar4 = (ushort *)0x0;
        }
        else {
          puVar4 = *(ushort **)*piVar3;
        }
        FString::FString(local_38,puVar4);
        local_8 = CONCAT31(local_8._1_3_,5);
        FUN_100cbb50();
        iVar2 = FString::operator==(param_1,(ushort *)&DAT_1022f9f8);
        if (iVar2 == 0) {
          iVar2 = FString::operator==(local_38,param_1);
          if (iVar2 != 0) goto LAB_100cd5c4;
        }
        else {
LAB_100cd5c4:
          local_24 = &stack0xffffffb4;
          FUN_100cc410(&local_18);
          local_8 = CONCAT31((int3)((uint)local_8 >> 8),5);
          local_24 = (undefined1 *)FUN_100cc430();
          FUN_100d9a30();
        }
        local_8._0_1_ = 1;
        FString::~FString(local_38);
      } while( true );
    }
  }
  ExceptionList = local_10;
  return 0;
}


// ==== 100cd630 Catch@100cd630

void Catch_100cd630(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x24) = *(undefined4 *)(unaff_EBP + -0x28);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x24,&DAT_102a47f0);
}


// ==== 100cd644 Catch@100cd644

void Catch_100cd644(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"XMLNode::GetChildNodeList");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100cd670 FUN_100cd670

undefined4 FUN_100cd670(FString *param_1,int *param_2)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  ushort *puVar4;
  int iVar5;
  uint uStack_4c;
  FString local_3c [16];
  undefined1 *local_2c;
  int local_24;
  int *local_1c;
  int *local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_101f76b9;
  local_10 = ExceptionList;
  uStack_4c = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_4c;
  ExceptionList = &local_10;
  iVar5 = 0;
  local_8 = 0;
  if (param_2 == (int *)0x0) {
    local_14 = (undefined1 *)&uStack_4c;
    FString::operator*(param_1);
    uVar1 = FUN_10005c30(L"XMLNode:GetUniqueChildNode tried to return child node in NULL!!(%s)");
    FUN_100d01f0(uVar1);
  }
  else {
    *param_2 = 0;
    local_24 = 0;
    iVar2 = FUN_100ccda0();
    if (iVar2 != 0) {
      local_18 = (int *)0x0;
      local_8._0_1_ = 1;
      while( true ) {
        FUN_100cb7a0();
        local_8._0_1_ = 2;
        piVar3 = (int *)FUN_100cce90();
        iVar2 = *piVar3;
        local_8._0_1_ = 1;
        if (local_1c != (int *)0x0) {
          (**(code **)(*local_1c + 8))();
        }
        if (iVar2 == 0) break;
        FUN_100cccb0();
        piVar3 = (int *)FUN_100cd2a0();
        local_8._0_1_ = 3;
        if (*piVar3 == 0) {
          puVar4 = (ushort *)0x0;
        }
        else {
          puVar4 = *(ushort **)*piVar3;
        }
        FString::FString(local_3c,puVar4);
        local_8._0_1_ = 5;
        FUN_100cbb50();
        iVar2 = FString::operator==(local_3c,param_1);
        if (iVar2 != 0) {
          if (iVar5 != 0) {
            FString::operator*(param_1);
            uVar1 = FUN_10005c30(L"XMLNode:GetUniqueChildNode found duplicated child nodes(%s)!!");
            FUN_100d01f0(uVar1);
            local_8._0_1_ = 1;
            FString::~FString(local_3c);
LAB_100cd7a5:
            local_8 = (uint)local_8._1_3_ << 8;
            if (local_18 == (int *)0x0) {
              ExceptionList = local_10;
              return 0;
            }
            (**(code **)(*local_18 + 8))();
            ExceptionList = local_10;
            return 0;
          }
          local_2c = &stack0xffffffb0;
          FUN_100cc410(&local_18);
          local_8._0_1_ = 5;
          iVar5 = FUN_100cc430();
          local_24 = iVar5;
        }
        local_8._0_1_ = 1;
        FString::~FString(local_3c);
      }
      if (iVar5 != 0) {
        *param_2 = iVar5;
        local_8 = (uint)local_8._1_3_ << 8;
        if (local_18 != (int *)0x0) {
          (**(code **)(*local_18 + 8))();
        }
        ExceptionList = local_10;
        return 1;
      }
      goto LAB_100cd7a5;
    }
  }
  ExceptionList = local_10;
  return 0;
}


// ==== 100cd82c Catch@100cd82c

void Catch_100cd82c(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x24) = *(undefined4 *)(unaff_EBP + -0x2c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x24,&DAT_102a47f0);
}


// ==== 100cd840 Catch@100cd840

void Catch_100cd840(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"XMLNode::GetUniqueChildNode");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100cd860 FUN_100cd860

FString * FUN_100cd860(FString *param_1,FString *param_2)

{
  ushort *puVar1;
  int iVar2;
  int **ppiVar3;
  uint uStack_44;
  VARIANTARG local_34;
  undefined4 local_1c;
  int *local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101f7712;
  local_10 = ExceptionList;
  uStack_44 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_44;
  ExceptionList = &local_10;
  local_1c = 0;
  local_8 = 1;
  FString::FString(param_1,(ushort *)L"undefined");
  local_1c = 1;
  puVar1 = FString::operator*(param_2);
  FUN_100cb550(puVar1);
  local_8._0_1_ = 2;
  ppiVar3 = &local_18;
  FUN_100cccb0(ppiVar3);
  local_8._0_1_ = 1;
  FUN_100cd330(ppiVar3);
  local_8._0_1_ = 3;
  if (local_18 != (int *)0x0) {
    FUN_100cccb0();
    iVar2 = FUN_100cccd0();
    local_8._0_1_ = 4;
    FString::operator=(param_1,*(ushort **)(iVar2 + 8));
    local_8._0_1_ = 3;
    VariantClear(&local_34);
  }
  local_8 = CONCAT31(local_8._1_3_,1);
  if (local_18 != (int *)0x0) {
    (**(code **)(*local_18 + 8))();
  }
  ExceptionList = local_10;
  return param_1;
}


// ==== 100cd942 Catch@100cd942

void Catch_100cd942(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x1c) = *(undefined4 *)(unaff_EBP + -0x20);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x1c,&DAT_102a47f0);
}


// ==== 100cd956 Catch@100cd956

void Catch_100cd956(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"XMLNode::GetAttributeString");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100cd980 FUN_100cd980

int FUN_100cd980(FString *param_1)

{
  ushort *puVar1;
  int iVar2;
  undefined4 *puVar3;
  uint uStack_40;
  VARIANTARG local_30;
  undefined1 *local_1c;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_101f7748;
  local_10 = ExceptionList;
  uStack_40 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_40;
  ExceptionList = &local_10;
  local_8 = 0;
  iVar2 = -9999;
  puVar1 = FString::operator*(param_1);
  local_1c = &stack0xffffffbc;
  FUN_100cb550(puVar1);
  local_8._0_1_ = 1;
  puVar3 = &param_1;
  FUN_100cccb0(puVar3);
  local_8._0_1_ = 0;
  FUN_100cd330(puVar3);
  local_8._0_1_ = 2;
  if (param_1 != (FString *)0x0) {
    FUN_100cccb0();
    iVar2 = FUN_100cccd0();
    local_8._0_1_ = 3;
    iVar2 = appAtoi(*(ushort **)(iVar2 + 8));
    local_8._0_1_ = 2;
    VariantClear(&local_30);
  }
  local_8 = (uint)local_8._1_3_ << 8;
  if (param_1 != (FString *)0x0) {
    (**(code **)(*(int *)param_1 + 8))();
  }
  ExceptionList = local_10;
  return iVar2;
}


// ==== 100cda50 Catch@100cda50

void Catch_100cda50(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 100cda64 Catch@100cda64

void Catch_100cda64(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"XMLNode::GetAttributeInt");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100cda90 FUN_100cda90

undefined4 FUN_100cda90(FString *param_1)

{
  ushort *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  uint uStack_50;
  VARIANTARG local_40;
  FString local_30 [16];
  undefined1 *local_20;
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_101f7791;
  local_10 = ExceptionList;
  uStack_50 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_50;
  ExceptionList = &local_10;
  local_8 = 0;
  uVar3 = 0xffffffff;
  local_18 = 0xffffffff;
  puVar1 = FString::operator*(param_1);
  local_20 = &stack0xffffffac;
  FUN_100cb550(puVar1);
  local_8._0_1_ = 1;
  puVar4 = &param_1;
  FUN_100cccb0(puVar4);
  local_8._0_1_ = 0;
  FUN_100cd330(puVar4);
  local_8._0_1_ = 2;
  if (param_1 != (FString *)0x0) {
    FUN_100cccb0();
    iVar2 = FUN_100cccd0();
    local_8._0_1_ = 3;
    FString::FString(local_30,*(ushort **)(iVar2 + 8));
    local_8 = CONCAT31(local_8._1_3_,5);
    VariantClear(&local_40);
    iVar2 = FString::operator==(local_30,(ushort *)L"true");
    if (iVar2 == 0) {
      iVar2 = FString::operator==(local_30,(ushort *)L"false");
      if (iVar2 != 0) {
        uVar3 = 0;
        local_18 = uVar3;
      }
    }
    else {
      uVar3 = 1;
      local_18 = uVar3;
    }
    local_8._0_1_ = 2;
    FString::~FString(local_30);
  }
  local_8 = (uint)local_8._1_3_ << 8;
  if (param_1 != (FString *)0x0) {
    (**(code **)(*(int *)param_1 + 8))();
  }
  ExceptionList = local_10;
  return uVar3;
}


// ==== 100cdb95 Catch@100cdb95

void Catch_100cdb95(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x20);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 100cdba9 Catch@100cdba9

void Catch_100cdba9(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"XMLNode::GetAttributeBool");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100cdbd0 FUN_100cdbd0

float10 FUN_100cdbd0(FString *param_1)

{
  ushort *puVar1;
  int iVar2;
  undefined4 *puVar3;
  uint uStack_44;
  VARIANTARG local_34;
  undefined1 *local_20;
  float local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_101f77c8;
  local_10 = ExceptionList;
  uStack_44 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_44;
  ExceptionList = &local_10;
  local_8 = 0;
  local_18 = -9999.0;
  puVar1 = FString::operator*(param_1);
  local_20 = &stack0xffffffb8;
  FUN_100cb550(puVar1);
  local_8._0_1_ = 1;
  puVar3 = &param_1;
  FUN_100cccb0(puVar3);
  local_8._0_1_ = 0;
  FUN_100cd330(puVar3);
  local_8._0_1_ = 2;
  if (param_1 != (FString *)0x0) {
    FUN_100cccb0();
    iVar2 = FUN_100cccd0();
    local_8._0_1_ = 3;
    local_18 = appAtof(*(ushort **)(iVar2 + 8));
    local_8._0_1_ = 2;
    VariantClear(&local_34);
  }
  local_8 = (uint)local_8._1_3_ << 8;
  if (param_1 != (FString *)0x0) {
    (**(code **)(*(int *)param_1 + 8))();
  }
  ExceptionList = local_10;
  return (float10)local_18;
}


// ==== 100cdca3 Catch@100cdca3

void Catch_100cdca3(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x20);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 100cdcb7 Catch@100cdcb7

void Catch_100cdcb7(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"XMLNode::GetAttributeFloat");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100cdce0 FUN_100cdce0

undefined4 FUN_100cdce0(FString *param_1)

{
  ushort *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  uint uStack_50;
  VARIANTARG local_40;
  FString local_30 [16];
  undefined1 *local_20;
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_101f7811;
  local_10 = ExceptionList;
  uStack_50 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_50;
  ExceptionList = &local_10;
  local_8 = 0;
  uVar3 = 0;
  local_18 = 0;
  puVar1 = FString::operator*(param_1);
  local_20 = &stack0xffffffac;
  FUN_100cb550(puVar1);
  local_8._0_1_ = 1;
  puVar4 = &param_1;
  FUN_100cccb0(puVar4);
  local_8._0_1_ = 0;
  FUN_100cd330(puVar4);
  local_8._0_1_ = 2;
  if (param_1 != (FString *)0x0) {
    FUN_100cccb0();
    iVar2 = FUN_100cccd0();
    local_8._0_1_ = 3;
    FString::FString(local_30,*(ushort **)(iVar2 + 8));
    local_8 = CONCAT31(local_8._1_3_,5);
    VariantClear(&local_40);
    iVar2 = FString::operator==(local_30,(ushort *)L"TopLeft");
    if (iVar2 == 0) {
      iVar2 = FString::operator==(local_30,(ushort *)L"TopCenter");
      if (iVar2 == 0) {
        iVar2 = FString::operator==(local_30,(ushort *)L"TopRight");
        if (iVar2 == 0) {
          iVar2 = FString::operator==(local_30,(ushort *)L"CenterLeft");
          if (iVar2 == 0) {
            iVar2 = FString::operator==(local_30,(ushort *)L"CenterCenter");
            if (iVar2 == 0) {
              iVar2 = FString::operator==(local_30,(ushort *)L"CenterRight");
              if (iVar2 == 0) {
                iVar2 = FString::operator==(local_30,(ushort *)L"BottomLeft");
                if (iVar2 == 0) {
                  iVar2 = FString::operator==(local_30,(ushort *)L"BottomCenter");
                  if (iVar2 == 0) {
                    iVar2 = FString::operator==(local_30,(ushort *)L"BottomRight");
                    if (iVar2 != 0) {
                      uVar3 = 9;
                      local_18 = uVar3;
                    }
                  }
                  else {
                    uVar3 = 8;
                    local_18 = uVar3;
                  }
                }
                else {
                  uVar3 = 7;
                  local_18 = uVar3;
                }
              }
              else {
                uVar3 = 6;
                local_18 = uVar3;
              }
            }
            else {
              uVar3 = 5;
              local_18 = uVar3;
            }
          }
          else {
            uVar3 = 4;
            local_18 = uVar3;
          }
        }
        else {
          uVar3 = 3;
          local_18 = uVar3;
        }
      }
      else {
        uVar3 = 2;
        local_18 = uVar3;
      }
    }
    else {
      uVar3 = 1;
      local_18 = uVar3;
    }
    local_8._0_1_ = 2;
    FString::~FString(local_30);
  }
  local_8 = (uint)local_8._1_3_ << 8;
  if (param_1 != (FString *)0x0) {
    (**(code **)(*(int *)param_1 + 8))();
  }
  ExceptionList = local_10;
  return uVar3;
}


// ==== 100cdea3 Catch@100cdea3

void Catch_100cdea3(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x20);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 100cdeb7 Catch@100cdeb7

void Catch_100cdeb7(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"XMLNode::GetAttributeAnchorType");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100cdee0 FUN_100cdee0

undefined4 FUN_100cdee0(FString *param_1)

{
  ushort *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  uint uStack_50;
  VARIANTARG local_40;
  FString local_30 [16];
  undefined1 *local_20;
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_101f7851;
  local_10 = ExceptionList;
  uStack_50 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_50;
  ExceptionList = &local_10;
  local_8 = 0;
  uVar3 = 0;
  local_18 = 0;
  puVar1 = FString::operator*(param_1);
  local_20 = &stack0xffffffac;
  FUN_100cb550(puVar1);
  local_8._0_1_ = 1;
  puVar4 = &param_1;
  FUN_100cccb0(puVar4);
  local_8._0_1_ = 0;
  FUN_100cd330(puVar4);
  local_8._0_1_ = 2;
  if (param_1 != (FString *)0x0) {
    FUN_100cccb0();
    iVar2 = FUN_100cccd0();
    local_8._0_1_ = 3;
    FString::FString(local_30,*(ushort **)(iVar2 + 8));
    local_8 = CONCAT31(local_8._1_3_,5);
    VariantClear(&local_40);
    iVar2 = FString::operator==(local_30,(ushort *)L"Default");
    if (iVar2 != 0) {
      local_18 = 0;
    }
    iVar2 = FString::operator==(local_30,(ushort *)L"Chat");
    if (iVar2 == 0) {
      iVar2 = FString::operator==(local_30,(ushort *)L"Password");
      if (iVar2 == 0) {
        iVar2 = FString::operator==(local_30,(ushort *)L"Number");
        if (iVar2 == 0) {
          iVar2 = FString::operator==(local_30,(ushort *)L"Date");
          if (iVar2 == 0) {
            iVar2 = FString::operator==(local_30,(ushort *)L"Time");
            if (iVar2 == 0) {
              iVar2 = FString::operator==(local_30,(ushort *)&DAT_1025ae84);
              if (iVar2 != 0) {
                uVar3 = 6;
                local_18 = uVar3;
              }
            }
            else {
              uVar3 = 5;
              local_18 = uVar3;
            }
          }
          else {
            uVar3 = 4;
            local_18 = uVar3;
          }
        }
        else {
          uVar3 = 3;
          local_18 = uVar3;
        }
      }
      else {
        uVar3 = 2;
        local_18 = uVar3;
      }
    }
    else {
      uVar3 = 1;
      local_18 = uVar3;
    }
    local_8._0_1_ = 2;
    FString::~FString(local_30);
  }
  local_8 = (uint)local_8._1_3_ << 8;
  if (param_1 != (FString *)0x0) {
    (**(code **)(*(int *)param_1 + 8))();
  }
  ExceptionList = local_10;
  return uVar3;
}


// ==== 100ce066 Catch@100ce066

void Catch_100ce066(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x20);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 100ce07a Catch@100ce07a

void Catch_100ce07a(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"XMLNode::GetAttributeEditBoxType");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100ce0a0 FUN_100ce0a0

undefined4 FUN_100ce0a0(FString *param_1)

{
  ushort *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  uint uStack_50;
  VARIANTARG local_40;
  FString local_30 [16];
  undefined1 *local_20;
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_101f7891;
  local_10 = ExceptionList;
  uStack_50 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_50;
  ExceptionList = &local_10;
  local_8 = 0;
  uVar3 = 0;
  local_18 = 0;
  puVar1 = FString::operator*(param_1);
  local_20 = &stack0xffffffac;
  FUN_100cb550(puVar1);
  local_8._0_1_ = 1;
  puVar4 = &param_1;
  FUN_100cccb0(puVar4);
  local_8._0_1_ = 0;
  FUN_100cd330(puVar4);
  local_8._0_1_ = 2;
  if (param_1 != (FString *)0x0) {
    FUN_100cccb0();
    iVar2 = FUN_100cccd0();
    local_8._0_1_ = 3;
    FString::FString(local_30,*(ushort **)(iVar2 + 8));
    local_8 = CONCAT31(local_8._1_3_,5);
    VariantClear(&local_40);
    iVar2 = FString::operator==(local_30,(ushort *)L"Left");
    if (iVar2 == 0) {
      iVar2 = FString::operator==(local_30,(ushort *)L"Center");
      if (iVar2 == 0) {
        iVar2 = FString::operator==(local_30,(ushort *)L"Right");
        if (iVar2 == 0) {
          iVar2 = FString::operator==(local_30,(ushort *)L"MacroIcon");
          if (iVar2 != 0) {
            uVar3 = 4;
            local_18 = uVar3;
          }
        }
        else {
          uVar3 = 3;
          local_18 = uVar3;
        }
      }
      else {
        uVar3 = 2;
        local_18 = uVar3;
      }
    }
    else {
      uVar3 = 1;
      local_18 = uVar3;
    }
    local_8._0_1_ = 2;
    FString::~FString(local_30);
  }
  local_8 = (uint)local_8._1_3_ << 8;
  if (param_1 != (FString *)0x0) {
    (**(code **)(*(int *)param_1 + 8))();
  }
  ExceptionList = local_10;
  return uVar3;
}


// ==== 100ce1dd Catch@100ce1dd

void Catch_100ce1dd(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x20);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 100ce1f1 Catch@100ce1f1

void Catch_100ce1f1(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"XMLNode::GetAttributeTextAlign");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100ce210 FUN_100ce210

undefined4 FUN_100ce210(FString *param_1)

{
  undefined4 uVar1;
  ushort *puVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  uint uStack_50;
  VARIANTARG local_40;
  FString local_30 [16];
  undefined1 *local_20;
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_101f78d1;
  local_10 = ExceptionList;
  uStack_50 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_50;
  ExceptionList = &local_10;
  local_8 = 0;
  uVar4 = 0;
  local_18 = 0;
  puVar2 = FString::operator*(param_1);
  local_20 = &stack0xffffffac;
  FUN_100cb550(puVar2);
  local_8._0_1_ = 1;
  puVar5 = &param_1;
  FUN_100cccb0(puVar5);
  local_8._0_1_ = 0;
  FUN_100cd330(puVar5);
  local_8._0_1_ = 2;
  if (param_1 != (FString *)0x0) {
    FUN_100cccb0();
    iVar3 = FUN_100cccd0();
    local_8._0_1_ = 3;
    FString::FString(local_30,*(ushort **)(iVar3 + 8));
    local_8 = CONCAT31(local_8._1_3_,5);
    VariantClear(&local_40);
    iVar3 = FString::operator==(local_30,(ushort *)L"Normal");
    uVar1 = uVar4;
    if (iVar3 == 0) {
      iVar3 = FString::operator==(local_30,(ushort *)&DAT_1025b050);
      if (iVar3 == 0) {
        iVar3 = FString::operator==(local_30,(ushort *)L"Credit");
        if (iVar3 == 0) {
          iVar3 = FString::operator==(local_30,(ushort *)L"ZoneTitle");
          if (iVar3 == 0) {
            iVar3 = FString::operator==(local_30,(ushort *)L"Broadcast1");
            if (iVar3 == 0) {
              iVar3 = FString::operator==(local_30,(ushort *)L"Broadcast2");
              if (iVar3 == 0) {
                iVar3 = FString::operator==(local_30,(ushort *)L"SpecialDigitSmall");
                if (iVar3 == 0) {
                  iVar3 = FString::operator==(local_30,(ushort *)L"SpecialDigitLarge");
                  if (iVar3 == 0) {
                    iVar3 = FString::operator==(local_30,(ushort *)L"SpecialDigitXLarge");
                    uVar1 = local_18;
                    if (iVar3 != 0) {
                      uVar4 = 0xb;
                      uVar1 = uVar4;
                    }
                  }
                  else {
                    uVar4 = 10;
                    uVar1 = uVar4;
                  }
                }
                else {
                  uVar4 = 9;
                  uVar1 = uVar4;
                }
              }
              else {
                uVar4 = 7;
                uVar1 = uVar4;
              }
            }
            else {
              uVar4 = 6;
              uVar1 = uVar4;
            }
          }
          else {
            uVar4 = 4;
            uVar1 = uVar4;
          }
        }
        else {
          uVar4 = 2;
          uVar1 = uVar4;
        }
      }
      else {
        uVar4 = 1;
        uVar1 = uVar4;
      }
    }
    local_18 = uVar1;
    local_8._0_1_ = 2;
    FString::~FString(local_30);
  }
  local_8 = (uint)local_8._1_3_ << 8;
  if (param_1 != (FString *)0x0) {
    (**(code **)(*(int *)param_1 + 8))();
  }
  ExceptionList = local_10;
  return uVar4;
}


// ==== 100ce3cf Catch@100ce3cf

void Catch_100ce3cf(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x20);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 100ce3e3 Catch@100ce3e3

void Catch_100ce3e3(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"XMLNode::GetAttributeFontType");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100ce400 FUN_100ce400

undefined4 FUN_100ce400(FString *param_1)

{
  undefined4 uVar1;
  ushort *puVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  uint uStack_50;
  VARIANTARG local_40;
  FString local_30 [16];
  undefined1 *local_20;
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_101f7911;
  local_10 = ExceptionList;
  uStack_50 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_50;
  ExceptionList = &local_10;
  local_8 = 0;
  uVar4 = 0;
  local_18 = 0;
  puVar2 = FString::operator*(param_1);
  local_20 = &stack0xffffffac;
  FUN_100cb550(puVar2);
  local_8._0_1_ = 1;
  puVar5 = &param_1;
  FUN_100cccb0(puVar5);
  local_8._0_1_ = 0;
  FUN_100cd330(puVar5);
  local_8._0_1_ = 2;
  if (param_1 != (FString *)0x0) {
    FUN_100cccb0();
    iVar3 = FUN_100cccd0();
    local_8._0_1_ = 3;
    FString::FString(local_30,*(ushort **)(iVar3 + 8));
    local_8 = CONCAT31(local_8._1_3_,5);
    VariantClear(&local_40);
    iVar3 = FString::operator==(local_30,(ushort *)L"Stretch");
    uVar1 = uVar4;
    if (iVar3 == 0) {
      iVar3 = FString::operator==(local_30,(ushort *)L"Normal");
      if (iVar3 == 0) {
        iVar3 = FString::operator==(local_30,(ushort *)L"Tile");
        if (iVar3 == 0) {
          iVar3 = FString::operator==(local_30,(ushort *)L"Draggable");
          if (iVar3 == 0) {
            iVar3 = FString::operator==(local_30,(ushort *)L"Control");
            uVar1 = local_18;
            if (iVar3 != 0) {
              uVar4 = 4;
              uVar1 = uVar4;
            }
          }
          else {
            uVar4 = 3;
            uVar1 = uVar4;
          }
        }
        else {
          uVar4 = 2;
          uVar1 = uVar4;
        }
      }
      else {
        uVar4 = 1;
        uVar1 = uVar4;
      }
    }
    local_18 = uVar1;
    local_8._0_1_ = 2;
    FString::~FString(local_30);
  }
  local_8 = (uint)local_8._1_3_ << 8;
  if (param_1 != (FString *)0x0) {
    (**(code **)(*(int *)param_1 + 8))();
  }
  ExceptionList = local_10;
  return uVar4;
}


// ==== 100ce551 Catch@100ce551

void Catch_100ce551(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x20);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 100ce565 Catch@100ce565

void Catch_100ce565(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"XMLNode::GetAttributeTextureCtrlType");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100ce590 FUN_100ce590

undefined4 FUN_100ce590(FString *param_1)

{
  ushort *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  uint uStack_50;
  VARIANTARG local_40;
  FString local_30 [16];
  undefined1 *local_20;
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_101f7951;
  local_10 = ExceptionList;
  uStack_50 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_50;
  ExceptionList = &local_10;
  local_8 = 0;
  uVar3 = 0;
  local_18 = 0;
  puVar1 = FString::operator*(param_1);
  local_20 = &stack0xffffffac;
  FUN_100cb550(puVar1);
  local_8._0_1_ = 1;
  puVar4 = &param_1;
  FUN_100cccb0(puVar4);
  local_8._0_1_ = 0;
  FUN_100cd330(puVar4);
  local_8._0_1_ = 2;
  if (param_1 != (FString *)0x0) {
    FUN_100cccb0();
    iVar2 = FUN_100cccd0();
    local_8._0_1_ = 3;
    FString::FString(local_30,*(ushort **)(iVar2 + 8));
    local_8 = CONCAT31(local_8._1_3_,5);
    VariantClear(&local_40);
    iVar2 = FString::operator==(local_30,(ushort *)L"Background");
    if (iVar2 == 0) {
      iVar2 = FString::operator==(local_30,(ushort *)L"Normal");
      if (iVar2 != 0) {
        uVar3 = 1;
        local_18 = uVar3;
      }
    }
    else {
      uVar3 = 2;
      local_18 = uVar3;
    }
    local_8._0_1_ = 2;
    FString::~FString(local_30);
  }
  local_8 = (uint)local_8._1_3_ << 8;
  if (param_1 != (FString *)0x0) {
    (**(code **)(*(int *)param_1 + 8))();
  }
  ExceptionList = local_10;
  return uVar3;
}


// ==== 100ce697 Catch@100ce697

void Catch_100ce697(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x20);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 100ce6ab Catch@100ce6ab

void Catch_100ce6ab(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"XMLNode::GetAttributeTextureCtrlType");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100ce6d0 FUN_100ce6d0

FString * FUN_100ce6d0(FString *param_1,FString *param_2)

{
  undefined1 uVar1;
  ushort *puVar2;
  int iVar3;
  undefined4 *puVar4;
  uint uStack_44;
  VARIANTARG local_34;
  undefined1 *local_20;
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101f79a2;
  local_10 = ExceptionList;
  uStack_44 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_44;
  ExceptionList = &local_10;
  local_18 = 0;
  local_8 = 1;
  puVar2 = FString::operator*(param_2);
  local_20 = &stack0xffffffb8;
  FUN_100cb550(puVar2);
  local_8._0_1_ = 2;
  puVar4 = &param_2;
  FUN_100cccb0(puVar4);
  local_8._0_1_ = 1;
  FUN_100cd330(puVar4);
  local_8._0_1_ = 3;
  uVar1 = (undefined1)local_8;
  local_8._0_1_ = 3;
  if (param_2 == (FString *)0x0) {
    local_8._0_1_ = uVar1;
    FString::FString(param_1,(ushort *)&DAT_1022f9f8);
    local_18 = 1;
  }
  else {
    FUN_100cccb0();
    iVar3 = FUN_100cccd0();
    local_8._0_1_ = 4;
    FString::FString(param_1,*(ushort **)(iVar3 + 8));
    local_18 = 1;
    local_8._0_1_ = 3;
    VariantClear(&local_34);
  }
  local_8 = CONCAT31(local_8._1_3_,1);
  if (param_2 != (FString *)0x0) {
    (**(code **)(*(int *)param_2 + 8))();
  }
  ExceptionList = local_10;
  return param_1;
}


// ==== 100ce7b9 Catch@100ce7b9

void Catch_100ce7b9(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x20);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 100ce7cd Catch@100ce7cd

void Catch_100ce7cd(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"XMLNode::GetAttributeTooltipType");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100ce7f0 FUN_100ce7f0

undefined4 FUN_100ce7f0(FString *param_1)

{
  ushort *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  uint uStack_50;
  VARIANTARG local_40;
  FString local_30 [16];
  undefined1 *local_20;
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_101f79e1;
  local_10 = ExceptionList;
  uStack_50 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_50;
  ExceptionList = &local_10;
  local_8 = 0;
  uVar3 = 0;
  local_18 = 0;
  puVar1 = FString::operator*(param_1);
  local_20 = &stack0xffffffac;
  FUN_100cb550(puVar1);
  local_8._0_1_ = 1;
  puVar4 = &param_1;
  FUN_100cccb0(puVar4);
  local_8._0_1_ = 0;
  FUN_100cd330(puVar4);
  local_8._0_1_ = 2;
  if (param_1 != (FString *)0x0) {
    FUN_100cccb0();
    iVar2 = FUN_100cccd0();
    local_8._0_1_ = 3;
    FString::FString(local_30,*(ushort **)(iVar2 + 8));
    local_8 = CONCAT31(local_8._1_3_,5);
    VariantClear(&local_40);
    iVar2 = FString::operator==(local_30,(ushort *)&DAT_1025b1f4);
    if (iVar2 == 0) {
      iVar2 = FString::operator==(local_30,(ushort *)L"Bottom");
      if (iVar2 == 0) {
        iVar2 = FString::operator==(local_30,(ushort *)L"Left");
        if (iVar2 == 0) {
          iVar2 = FString::operator==(local_30,(ushort *)L"Right");
          if (iVar2 != 0) {
            uVar3 = 2;
            local_18 = uVar3;
          }
        }
        else {
          uVar3 = 1;
          local_18 = uVar3;
        }
      }
      else {
        uVar3 = 4;
        local_18 = uVar3;
      }
    }
    else {
      uVar3 = 3;
      local_18 = uVar3;
    }
    local_8._0_1_ = 2;
    FString::~FString(local_30);
  }
  local_8 = (uint)local_8._1_3_ << 8;
  if (param_1 != (FString *)0x0) {
    (**(code **)(*(int *)param_1 + 8))();
  }
  ExceptionList = local_10;
  return uVar3;
}


// ==== 100ce92d Catch@100ce92d

void Catch_100ce92d(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x20);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 100ce941 Catch@100ce941

void Catch_100ce941(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"XMLNode::GetAttributeDirection");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100ce960 FUN_100ce960

int FUN_100ce960(FString *param_1)

{
  UClass *pUVar1;
  int iVar2;
  ushort *puVar3;
  int iVar4;
  FString *pFVar5;
  int iVar6;
  wchar_t *pwVar7;
  int **ppiVar8;
  uint uStack_60;
  undefined1 local_50 [16];
  FString local_40 [12];
  FString local_34 [20];
  int local_20;
  int local_1c;
  int *local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_101f7a33;
  local_10 = ExceptionList;
  uStack_60 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_60;
  ExceptionList = &local_10;
  local_8 = 0;
  local_1c = 0;
  pwVar7 = L"EInputKey";
  pUVar1 = UInteractions::StaticClass();
  iVar2 = FUN_10065410(pUVar1,pwVar7);
  if (iVar2 == 0) {
    appFailAssert("pInputKey",".\\XML\\XMLNode.cpp",0x192);
  }
  puVar3 = FString::operator*(param_1);
  FUN_100cb550(puVar3);
  local_8._0_1_ = 1;
  ppiVar8 = &local_18;
  FUN_100cccb0(ppiVar8);
  local_8._0_1_ = 0;
  FUN_100cd330(ppiVar8);
  local_8._0_1_ = 2;
  if (local_18 != (int *)0x0) {
    FUN_100cccb0();
    iVar4 = FUN_100cccd0();
    local_8._0_1_ = 3;
    FString::FString(local_40,*(ushort **)(iVar4 + 8));
    local_8 = CONCAT31(local_8._1_3_,5);
    VariantClear((VARIANTARG *)local_50);
    for (iVar4 = 0; local_20 = iVar4, iVar4 < 0xff; iVar4 = iVar4 + 1) {
      puVar3 = FName::operator*((FName *)(*(int *)(iVar2 + 0x40) + iVar4 * 4));
      FString::FString(local_34,puVar3);
      local_8._0_1_ = 6;
      FString::Len(local_34);
      pFVar5 = (FString *)FString::Right(local_34,(int)(local_50 + 4));
      local_8._0_1_ = 7;
      FString::operator=(local_34,pFVar5);
      local_8._0_1_ = 6;
      FString::~FString((FString *)(local_50 + 4));
      iVar6 = FString::operator==(local_40,local_34);
      if (iVar6 != 0) {
        local_8 = CONCAT31(local_8._1_3_,5);
        local_1c = iVar4;
        FString::~FString(local_34);
        break;
      }
      local_8 = CONCAT31(local_8._1_3_,5);
      FString::~FString(local_34);
    }
    local_8._0_1_ = 2;
    FString::~FString(local_40);
  }
  local_8 = (uint)local_8._1_3_ << 8;
  if (local_18 != (int *)0x0) {
    (**(code **)(*local_18 + 8))();
  }
  ExceptionList = local_10;
  return local_1c;
}


// ==== 100ceb00 Catch@100ceb00

void Catch_100ceb00(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x20) = *(undefined4 *)(unaff_EBP + -0x24);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x20,&DAT_102a47f0);
}


// ==== 100ceb14 Catch@100ceb14

void Catch_100ceb14(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"XMLNode::GetAttributeInputKey");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100ceb40 FUN_100ceb40

undefined4 FUN_100ceb40(FString *param_1)

{
  ushort *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  uint uStack_50;
  VARIANTARG local_40;
  FString local_30 [16];
  undefined1 *local_20;
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_101f7a71;
  local_10 = ExceptionList;
  uStack_50 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_50;
  ExceptionList = &local_10;
  local_8 = 0;
  uVar3 = 0;
  local_18 = 0;
  puVar1 = FString::operator*(param_1);
  local_20 = &stack0xffffffac;
  FUN_100cb550(puVar1);
  local_8._0_1_ = 1;
  puVar4 = &param_1;
  FUN_100cccb0(puVar4);
  local_8._0_1_ = 0;
  FUN_100cd330(puVar4);
  local_8._0_1_ = 2;
  if (param_1 != (FString *)0x0) {
    FUN_100cccb0();
    iVar2 = FUN_100cccd0();
    local_8._0_1_ = 3;
    FString::FString(local_30,*(ushort **)(iVar2 + 8));
    local_8._0_1_ = 5;
    VariantClear(&local_40);
    iVar2 = FString::operator==(local_30,(ushort *)L"AlphaTransition");
    if (iVar2 != 0) {
      uVar3 = 3;
      local_18 = 3;
    }
    iVar2 = FString::operator==(local_30,(ushort *)L"PositionTransition");
    if (iVar2 != 0) {
      uVar3 = 4;
      local_18 = 4;
    }
    local_8._0_1_ = 2;
    FString::~FString(local_30);
  }
  local_8 = (uint)local_8._1_3_ << 8;
  if (param_1 != (FString *)0x0) {
    (**(code **)(*(int *)param_1 + 8))();
  }
  ExceptionList = local_10;
  return uVar3;
}


// ==== 100cec4a Catch@100cec4a

void Catch_100cec4a(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x20);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 100cec5e Catch@100cec5e

void Catch_100cec5e(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"XMLNode::GetAttributeShowHideAnim");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100cec80 FUN_100cec80

undefined4 FUN_100cec80(FString *param_1)

{
  ushort *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  uint uStack_50;
  VARIANTARG local_40;
  FString local_30 [16];
  undefined1 *local_20;
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_101f7ab1;
  local_10 = ExceptionList;
  uStack_50 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_50;
  ExceptionList = &local_10;
  local_8 = 0;
  uVar3 = 0xffffffff;
  local_18 = 0xffffffff;
  puVar1 = FString::operator*(param_1);
  local_20 = &stack0xffffffac;
  FUN_100cb550(puVar1);
  local_8._0_1_ = 1;
  puVar4 = &param_1;
  FUN_100cccb0(puVar4);
  local_8._0_1_ = 0;
  FUN_100cd330(puVar4);
  local_8._0_1_ = 2;
  if (param_1 != (FString *)0x0) {
    FUN_100cccb0();
    iVar2 = FUN_100cccd0();
    local_8._0_1_ = 3;
    FString::FString(local_30,*(ushort **)(iVar2 + 8));
    local_8._0_1_ = 5;
    VariantClear(&local_40);
    iVar2 = FString::operator==(local_30,(ushort *)L"Small");
    if (iVar2 != 0) {
      uVar3 = 1;
      local_18 = 1;
    }
    iVar2 = FString::operator==(local_30,(ushort *)&DAT_1025b050);
    if (iVar2 != 0) {
      uVar3 = 0;
      local_18 = 0;
    }
    local_8._0_1_ = 2;
    FString::~FString(local_30);
  }
  local_8 = (uint)local_8._1_3_ << 8;
  if (param_1 != (FString *)0x0) {
    (**(code **)(*(int *)param_1 + 8))();
  }
  ExceptionList = local_10;
  return uVar3;
}


// ==== 100ced88 Catch@100ced88

void Catch_100ced88(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x20);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 100ced9c Catch@100ced9c

void Catch_100ced9c(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"XMLNode::GetFrameType");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100cedc0 FUN_100cedc0

undefined4 FUN_100cedc0(FString *param_1)

{
  ushort *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  uint uStack_50;
  VARIANTARG local_40;
  FString local_30 [16];
  undefined1 *local_20;
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_101f7af1;
  local_10 = ExceptionList;
  uStack_50 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_50;
  ExceptionList = &local_10;
  local_8 = 0;
  uVar3 = 0xffffffff;
  local_18 = 0xffffffff;
  puVar1 = FString::operator*(param_1);
  local_20 = &stack0xffffffac;
  FUN_100cb550(puVar1);
  local_8._0_1_ = 1;
  puVar4 = &param_1;
  FUN_100cccb0(puVar4);
  local_8._0_1_ = 0;
  FUN_100cd330(puVar4);
  local_8._0_1_ = 2;
  if (param_1 != (FString *)0x0) {
    FUN_100cccb0();
    iVar2 = FUN_100cccd0();
    local_8._0_1_ = 3;
    FString::FString(local_30,*(ushort **)(iVar2 + 8));
    local_8 = CONCAT31(local_8._1_3_,5);
    VariantClear(&local_40);
    iVar2 = FString::operator==(local_30,(ushort *)L"Tutorial");
    if (iVar2 == 0) {
      iVar2 = FString::operator==(local_30,(ushort *)L"Quest");
      if (iVar2 == 0) {
        iVar2 = FString::operator==(local_30,(ushort *)L"Mail");
        if (iVar2 != 0) {
          uVar3 = 2;
          local_18 = uVar3;
        }
      }
      else {
        uVar3 = 1;
        local_18 = uVar3;
      }
    }
    else {
      uVar3 = 0;
      local_18 = uVar3;
    }
    local_8._0_1_ = 2;
    FString::~FString(local_30);
  }
  local_8 = (uint)local_8._1_3_ << 8;
  if (param_1 != (FString *)0x0) {
    (**(code **)(*(int *)param_1 + 8))();
  }
  ExceptionList = local_10;
  return uVar3;
}


// ==== 100ceee4 Catch@100ceee4

void Catch_100ceee4(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x20);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 100ceef8 Catch@100ceef8

void Catch_100ceef8(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"XMLNode::GetAttributeEffectButtonType");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100cef20 FUN_100cef20

void FUN_100cef20(undefined4 param_1)

{
  undefined4 uVar1;
  undefined2 *in_ECX;
  
  *in_ECX = 8;
  uVar1 = ConvertStringToBSTR(param_1);
  *(undefined4 *)(in_ECX + 4) = uVar1;
  return;
}


// ==== 100cef40 FUN_100cef40

undefined4 FUN_100cef40(undefined4 param_1)

{
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101f7b29;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 1;
  FUN_100cb330(*(undefined4 *)(in_ECX + 4),1);
  ExceptionList = local_10;
  return param_1;
}


// ==== 100cefa2 Catch@100cefa2

void Catch_100cefa2(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 100cefb6 Catch@100cefb6

void Catch_100cefb6(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"XMLSchemaCollection::GetInterfacePtr");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100cefe0 FUN_100cefe0

void FUN_100cefe0(void)

{
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101f7b50;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if (*(int *)(in_ECX + 4) != 0) {
    FUN_100cb280();
  }
  ExceptionList = local_10;
  return;
}


// ==== 100cf038 Catch@100cf038

void Catch_100cf038(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 100cf04c Catch@100cf04c

void Catch_100cf04c(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"XMLSchemaCollection::Destroy");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100cf070 FUN_100cf070

void FUN_100cf070(void)

{
  int *piVar1;
  undefined4 *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101f7b7b;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *in_ECX = XMLSchemaCollection::vftable;
  local_8 = 1;
  FUN_100cefe0();
  local_8 = 0xffffffff;
  piVar1 = (int *)in_ECX[1];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  ExceptionList = local_10;
  return;
}


// ==== 100cf0de Catch@100cf0de

void Catch_100cf0de(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 100cf0f2 Catch@100cf0f2

void Catch_100cf0f2(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"XMLSchemaCollection::~XMLSchemaCollection");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100cf110 FUN_100cf110

HRESULT FUN_100cf110(IID *param_1,LPUNKNOWN param_2,uint param_3)

{
  int *piVar1;
  HRESULT HVar2;
  void **in_ECX;
  
  piVar1 = *in_ECX;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  if ((param_3 & 0x14) == 0) {
    HVar2 = CoCreateInstance(param_1,param_2,param_3,(IID *)&DAT_1025b398,in_ECX);
  }
  else {
    HVar2 = CoCreateInstance(param_1,param_2,param_3,(IID *)&DAT_1025a430,&param_2);
    if (HVar2 < 0) goto LAB_100cf19a;
    HVar2 = OleRun(param_2);
    if (-1 < HVar2) {
      HVar2 = (*param_2->lpVtbl->QueryInterface)(param_2,(IID *)&DAT_1025b398,in_ECX);
    }
    (*param_2->lpVtbl->Release)(param_2);
  }
  if (-1 < HVar2) {
    return HVar2;
  }
LAB_100cf19a:
  *in_ECX = (void *)0x0;
  return HVar2;
}


// ==== 100cf1b0 FUN_100cf1b0

void FUN_100cf1b0(void)

{
  int iVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101f7ba0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  iVar1 = FUN_100cf110(&DAT_1025b4e4,0,7);
  if (iVar1 < 0) {
    appFailAssert("SUCCEEDED( hr )",".\\XML\\XMLSchemaCollection.cpp",0x2f);
  }
  ExceptionList = local_10;
  return;
}


// ==== 100cf225 Catch@100cf225

void Catch_100cf225(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 100cf239 Catch@100cf239

void Catch_100cf239(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"XMLSchemaCollection::Init");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100cf260 FUN_100cf260

void FUN_100cf260(void)

{
  undefined4 *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101f7bcb;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *in_ECX = XMLSchemaCollection::vftable;
  in_ECX[1] = 0;
  local_8 = 1;
  FUN_100cf1b0();
  ExceptionList = local_10;
  return;
}


// ==== 100cf2c8 Catch@100cf2c8

void Catch_100cf2c8(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 100cf2dc Catch@100cf2dc

void Catch_100cf2dc(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"XMLSchemaCollection::XMLSchemaCollection");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100cf300 FUN_100cf300

ULONG FUN_100cf300(undefined4 *param_1,undefined4 *param_2)

{
  void *pvVar1;
  ULONG UVar2;
  IUnknown *in_ECX;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_101f7bf8;
  local_c = ExceptionList;
  pvVar1 = (void *)(DAT_103554c4 ^ (uint)&stack0xffffffe4);
  ExceptionList = &local_c;
  uVar3 = 0;
  local_4 = 0;
  if (param_1 != (undefined4 *)0x0) {
    uVar3 = *param_1;
  }
  uVar4 = *param_2;
  uVar5 = param_2[1];
  uVar6 = param_2[2];
  uVar7 = param_2[3];
  UVar2 = (*in_ECX->lpVtbl[2].AddRef)(in_ECX);
  if ((int)UVar2 < 0) {
    _com_issue_errorex(UVar2,in_ECX,(_GUID *)&DAT_1025b54c);
  }
  if (param_1 != (undefined4 *)0x0) {
    FUN_100cb740(uVar3,uVar4,uVar5,uVar6,uVar7);
  }
  ExceptionList = pvVar1;
  return UVar2;
}


// ==== 100cf3b0 FUN_100cf3b0

undefined4 FUN_100cf3b0(void)

{
  ushort *puVar1;
  int iVar2;
  char *pcVar3;
  uint uStack_40;
  VARIANTARG local_30;
  undefined1 *local_1c;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101f7c39;
  local_10 = ExceptionList;
  uStack_40 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_40;
  ExceptionList = &local_10;
  local_8._0_1_ = 1;
  local_8._1_3_ = 0;
  pcVar3 = (char *)0x0;
  puVar1 = FString::operator*((FString *)&stack0x00000004);
  appToAnsi(puVar1,pcVar3);
  FUN_100cef20();
  local_8._0_1_ = 2;
  local_1c = &stack0xffffffb8;
  FUN_100cb4b0("http://www.lineage2.co.kr/ui");
  local_8._0_1_ = 3;
  FUN_100cccb0();
  local_8._0_1_ = 2;
  iVar2 = FUN_100cf300();
  local_8 = CONCAT31(local_8._1_3_,1);
  VariantClear(&local_30);
  if (iVar2 < 0) {
    appFailAssert("SUCCEEDED( hr )",".\\XML\\XMLSchemaCollection.cpp",0x1a);
  }
  local_8 = 0xffffffff;
  FString::~FString((FString *)&stack0x00000004);
  ExceptionList = local_10;
  return 1;
}


// ==== 100cf487 Catch@100cf487

void Catch_100cf487(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 100cf49b Catch@100cf49b

void Catch_100cf49b(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"XMLSchemaCollection::Load");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100cf4c0 FUN_100cf4c0

FArchive * FUN_100cf4c0(FArchive *param_1,int param_2)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101f7c60;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_1005b9e0(param_1,param_2);
  FUN_1005b9e0(param_1,param_2 + 4);
  operator<<(param_1,(FString *)(param_2 + 8));
  FUN_1003feb0(param_1,param_2 + 0x14);
  ExceptionList = local_10;
  return param_1;
}


// ==== 100cf535 Catch@100cf535

void Catch_100cf535(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 100cf549 Catch@100cf549

void Catch_100cf549(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"operator<<");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100cf570 FUN_100cf570

void FUN_100cf570(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = XMLUISize::vftable;
  in_ECX[2] = 0;
  return;
}


// ==== 100cf5ca Catch@100cf5ca

void Catch_100cf5ca(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 100cf5de Catch@100cf5de

void Catch_100cf5de(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"XMLUISize::XMLUISize");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100cf600 FUN_100cf600

void FUN_100cf600(undefined4 param_1)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 8) = param_1;
  return;
}


// ==== 100cf653 Catch@100cf653

void Catch_100cf653(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 100cf667 Catch@100cf667

void Catch_100cf667(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"XMLUISize::SetParentWnd");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100cf690 FUN_100cf690

void FUN_100cf690(void)

{
  undefined4 *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_101f7cc0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_100cf570();
  *in_ECX = XMLUIAbsoluteSize::vftable;
  in_ECX[3] = 0;
  in_ECX[4] = 0;
  in_ECX[1] = 1;
  ExceptionList = local_10;
  return;
}


// ==== 100cf6f5 Catch@100cf6f5

void Catch_100cf6f5(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 100cf709 Catch@100cf709

void Catch_100cf709(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"XMLUIAbsoluteSize::XMLUIAbsoluteSize");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100cf730 FUN_100cf730

void FUN_100cf730(undefined4 param_1,undefined4 param_2)

{
  undefined4 *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_101f7ce0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_100cf570();
  *in_ECX = XMLUIAbsoluteSize::vftable;
  in_ECX[3] = param_1;
  in_ECX[4] = param_2;
  in_ECX[1] = 1;
  ExceptionList = local_10;
  return;
}


// ==== 100cf79f Catch@100cf79f

void Catch_100cf79f(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 100cf7b3 Catch@100cf7b3

void Catch_100cf7b3(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"XMLUIAbsoluteSize::XMLUIAbsoluteSize");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100cf7d0 FUN_100cf7d0

undefined4 FUN_100cf7d0(void)

{
  int in_ECX;
  
  return *(undefined4 *)(in_ECX + 0xc);
}


// ==== 100cf817 Catch@100cf817

void Catch_100cf817(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 100cf82b Catch@100cf82b

void Catch_100cf82b(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"XMLUIAbsoluteSize::GetWidth");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100cf850 FUN_100cf850

undefined4 FUN_100cf850(void)

{
  int in_ECX;
  
  return *(undefined4 *)(in_ECX + 0x10);
}


// ==== 100cf897 Catch@100cf897

void Catch_100cf897(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 100cf8ab Catch@100cf8ab

void Catch_100cf8ab(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"XMLUIAbsoluteSize::GetHeight");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100cf8d0 FUN_100cf8d0

void FUN_100cf8d0(void)

{
  undefined4 *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_101f7d4c;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_100cf570();
  *in_ECX = XMLUIRelativeSize::vftable;
  FString::FString((FString *)(in_ECX + 3));
  local_8 = 1;
  in_ECX[6] = 0;
  in_ECX[7] = 0;
  FString::operator=((FString *)(in_ECX + 3),(ushort *)&DAT_1022f9f8);
  in_ECX[1] = 0;
  ExceptionList = local_10;
  return;
}


// ==== 100cf95a Catch@100cf95a

void Catch_100cf95a(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 100cf96e Catch@100cf96e

void Catch_100cf96e(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"XMLUIRelativeSize::XMLUIRelativeSize");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100cf990 FUN_100cf990

void FUN_100cf990(undefined4 param_1,undefined4 param_2,uint param_3,uint param_4)

{
  undefined4 *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101f7d85;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_100cf570();
  *in_ECX = XMLUIRelativeSize::vftable;
  FString::FString((FString *)(in_ECX + 3));
  local_8 = CONCAT31((int3)((uint)local_8 >> 8),2);
  FString::operator=((FString *)(in_ECX + 3),(FString *)&stack0x00000014);
  in_ECX[6] = param_1;
  in_ECX[7] = param_2;
  in_ECX[8] = -(uint)(in_ECX[8] != -9999) & param_3;
  in_ECX[9] = -(uint)(in_ECX[9] != -9999) & param_4;
  in_ECX[1] = 0;
  local_8 = 0xffffffff;
  FString::~FString((FString *)&stack0x00000014);
  ExceptionList = local_10;
  return;
}


// ==== 100cfa52 Catch@100cfa52

void Catch_100cfa52(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 100cfa66 Catch@100cfa66

void Catch_100cfa66(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"XMLUIRelativeSize::XMLUIRelativeSize");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100cfa90 FUN_100cfa90

FArchive * FUN_100cfa90(FArchive *param_1,int param_2)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101f7da0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  operator<<(param_1,(FString *)(param_2 + 0xc));
  FUN_100052e0(param_1,param_2 + 0x18);
  FUN_100052e0(param_1,param_2 + 0x1c);
  FUN_100052e0(param_1,param_2 + 0x20);
  FUN_100052e0(param_1,param_2 + 0x24);
  ExceptionList = local_10;
  return param_1;
}


// ==== 100cfb12 Catch@100cfb12

void Catch_100cfb12(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 100cfb26 Catch@100cfb26

void Catch_100cfb26(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"operator<<");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100cfb50 FUN_100cfb50

undefined4 FUN_100cfb50(undefined4 param_1,int param_2)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101f7dc0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_100052e0(param_1,param_2 + 0xc);
  FUN_100052e0(param_1,param_2 + 0x10);
  ExceptionList = local_10;
  return param_1;
}


// ==== 100cfbb3 Catch@100cfbb3

void Catch_100cfbb3(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 100cfbc7 Catch@100cfbc7

void Catch_100cfbc7(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"operator<<");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100cfbf0 FUN_100cfbf0

void FUN_100cfbf0(void)

{
  undefined4 *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_101f7dec;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FString::FString((FString *)(in_ECX + 2));
  in_ECX[6] = 0;
  in_ECX[5] = 0;
  local_8 = 1;
  *in_ECX = 0;
  in_ECX[1] = 0;
  FString::operator=((FString *)(in_ECX + 2),(ushort *)L"undefined");
  in_ECX[5] = 0xffffd8f1;
  in_ECX[6] = 0xffffd8f1;
  ExceptionList = local_10;
  return;
}


// ==== 100cfc7d Catch@100cfc7d

void Catch_100cfc7d(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 100cfc91 Catch@100cfc91

void Catch_100cfc91(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"XMLUIPosition::XMLUIPosition");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100cfcb0 FUN_100cfcb0

void FUN_100cfcb0(undefined4 param_1,undefined4 param_2)

{
  undefined4 *in_ECX;
  undefined4 in_stack_00000018;
  undefined4 in_stack_0000001c;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101f7e25;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  FString::FString((FString *)(in_ECX + 2));
  in_ECX[6] = 0;
  in_ECX[5] = 0;
  local_8 = CONCAT31((int3)((uint)local_8 >> 8),2);
  *in_ECX = param_1;
  in_ECX[1] = param_2;
  FString::operator=((FString *)(in_ECX + 2),(FString *)&stack0x0000000c);
  in_ECX[5] = in_stack_00000018;
  in_ECX[6] = in_stack_0000001c;
  local_8 = 0xffffffff;
  FString::~FString((FString *)&stack0x0000000c);
  ExceptionList = local_10;
  return;
}


// ==== 100cfd47 Catch@100cfd47

void Catch_100cfd47(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 100cfd5b Catch@100cfd5b

void Catch_100cfd5b(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"XMLUIPosition::XMLUIPosition");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100cfd80 FUN_100cfd80

undefined4 FUN_100cfd80(undefined4 param_1,int param_2)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101f7e40;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if (*(int *)(param_2 + 4) == 0) {
    FUN_100cfa90(param_1,param_2);
  }
  else {
    FUN_100cfb50();
  }
  ExceptionList = local_10;
  return param_1;
}


// ==== 100cfde3 Catch@100cfde3

void Catch_100cfde3(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 100cfdf7 Catch@100cfdf7

void Catch_100cfdf7(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"operator<<");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100cfe20 FUN_100cfe20

undefined4 FUN_100cfe20(void)

{
  int iVar1;
  int in_ECX;
  undefined4 uVar2;
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
  
  puStack_c = &LAB_101f7e60;
  local_10 = ExceptionList;
  uStack_3c = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_3c;
  ExceptionList = &local_10;
  uVar2 = 0;
  local_8 = 0;
  this = (FString *)(in_ECX + 0xc);
  iVar1 = FString::operator==(this,(ushort *)&DAT_1022f9f8);
  if (iVar1 == 0) {
    FUN_10005c30(this);
    iVar1 = FUN_100d0c20(this);
  }
  else {
    iVar1 = *(int *)(in_ECX + 8);
  }
  if (iVar1 != 0) {
    local_28 = 0;
    local_2c = 0;
    local_24 = 0;
    local_20 = 0;
    FUN_10058770(&local_2c);
    uVar2 = FUN_101c19e0();
  }
  ExceptionList = local_10;
  return uVar2;
}


// ==== 100cfebd Catch@100cfebd

void Catch_100cfebd(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 100cfed1 Catch@100cfed1

void Catch_100cfed1(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"XMLUIRelativeSize::GetWidth");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100cfef0 FUN_100cfef0

undefined4 FUN_100cfef0(void)

{
  int iVar1;
  int in_ECX;
  undefined4 uVar2;
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
  
  puStack_c = &LAB_101f7e80;
  local_10 = ExceptionList;
  uStack_3c = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_3c;
  ExceptionList = &local_10;
  uVar2 = 0;
  local_8 = 0;
  this = (FString *)(in_ECX + 0xc);
  iVar1 = FString::operator==(this,(ushort *)&DAT_1022f9f8);
  if (iVar1 == 0) {
    FUN_10005c30(this);
    iVar1 = FUN_100d0c20(this);
  }
  else {
    iVar1 = *(int *)(in_ECX + 8);
  }
  if (iVar1 != 0) {
    local_28 = 0;
    local_2c = 0;
    local_24 = 0;
    local_20 = 0;
    FUN_10058770(&local_2c);
    uVar2 = FUN_101c19e0();
  }
  ExceptionList = local_10;
  return uVar2;
}


// ==== 100cff8d Catch@100cff8d

void Catch_100cff8d(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 100cffa1 Catch@100cffa1

void Catch_100cffa1(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"XMLUIRelativeSize::GetHeight");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100cffc0 FUN_100cffc0

void FUN_100cffc0(FString *param_1)

{
  FString *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101f7ea9;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FString::FString(in_ECX,param_1);
  ExceptionList = local_c;
  return;
}


// ==== 100d0010 FUN_100d0010

undefined4 FUN_100d0010(void)

{
  int iVar1;
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101f7ed0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  iVar1 = FUN_100c9330();
  if (iVar1 != 0) {
    iVar1 = FUN_100caab0(in_ECX + 0xc);
    if (iVar1 != 0) {
      iVar1 = FUN_100c8f30();
      if (iVar1 != 0) {
        iVar1 = FUN_100c9230();
        if (iVar1 != 0) {
          ExceptionList = local_10;
          return 1;
        }
      }
    }
  }
  ExceptionList = local_10;
  return 0;
}


// ==== 100d00a3 Catch@100d00a3

void Catch_100d00a3(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 100d00b7 Catch@100d00b7

void Catch_100d00b7(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"XMLUIManager::CreateWindows");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100d00e0 FUN_100d00e0

void FUN_100d00e0(undefined4 param_1)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 0x38) = param_1;
  return;
}


// ==== 100d0133 Catch@100d0133

void Catch_100d0133(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 100d0147 Catch@100d0147

void Catch_100d0147(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"XMLUIManager::SetForceCreateNewData");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100d0170 FUN_100d0170

undefined4 FUN_100d0170(void)

{
  int in_ECX;
  
  return *(undefined4 *)(in_ECX + 0x38);
}


// ==== 100d01b7 Catch@100d01b7

void Catch_100d01b7(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 100d01cb Catch@100d01cb

void Catch_100d01cb(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"XMLUIManager::GetForceCreateNewData");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100d01f0 FUN_100d01f0

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

void FUN_100d01f0(void)

{
  FString *this;
  uint uStack_2040;
  undefined4 local_2030 [3];
  undefined1 *local_2024;
  undefined1 *local_2018;
  void *local_2014;
  undefined1 *puStack_2010;
  int local_200c;
  ushort local_2008 [4096];
  uint local_8;
  
  puStack_2010 = &LAB_101f7f42;
  local_2014 = ExceptionList;
  uStack_2040 = DAT_103554c4 ^ (uint)local_2008;
  local_2018 = (undefined1 *)&uStack_2040;
  ExceptionList = &local_2014;
  local_200c = 0;
  local_8 = uStack_2040;
  appGetVarArgs(local_2008,0x1000,(ushort **)&stack0x00000008);
  this = (FString *)FString::Printf((ushort *)local_2030,L"XMLUI ERROR - %s",local_2008);
  local_200c._0_1_ = 1;
  FString::operator*(this);
  FOutputDevice::Logf((FOutputDevice *)GWarn_exref,*(ushort **)GWarn_exref);
  local_200c._0_1_ = 0;
  uStack_2040 = 0x100d028e;
  FString::~FString((FString *)local_2030);
  if ((((*(int *)GIsOnlyXMLUI_exref == 0) && (DAT_103663bc != 0)) &&
      (*(int *)(DAT_103663bc + 0x50ac) != 0)) &&
     (*(int *)(*(int *)(DAT_103663bc + 0x50ac) + 0x21c) != 0)) {
    local_2024 = &stack0xffffdfb8;
    FString::Printf((ushort *)&stack0xffffdfb8,L"ERROR - %s",local_2008);
    local_200c = (uint)local_200c._1_3_ << 8;
    FUN_10069280();
  }
  local_200c = 0xffffffff;
  ExceptionList = local_2014;
  local_2030[0] = 0x100d030d;
  __security_check_cookie(local_8 ^ (uint)local_2008);
  return;
}


// ==== 100d0317 Catch@100d0317

void Catch_100d0317(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 100d032b Catch@100d032b

void Catch_100d032b(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"XMLUIManager::PrintErrorMsg");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100d0350 FUN_100d0350

void FUN_100d0350(undefined4 param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101f7f70;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if (((DAT_103663bc != 0) && (*(int *)(DAT_103663bc + 0x50ac) != 0)) &&
     (*(int *)(*(int *)(DAT_103663bc + 0x50ac) + 0x21c) != 0)) {
    FUN_100693a0(param_1);
  }
  ExceptionList = local_10;
  return;
}


// ==== 100d03c8 Catch@100d03c8

void Catch_100d03c8(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 100d03dc Catch@100d03dc

void Catch_100d03dc(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"XMLUIManager::PrintMsg");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100d0400 FUN_100d0400

void FUN_100d0400(void)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 0x34) = 1;
  return;
}


// ==== 100d0452 Catch@100d0452

void Catch_100d0452(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 100d0466 Catch@100d0466

void Catch_100d0466(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"XMLUIManager::RegReloadUI");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100d0490 FUN_100d0490

void FUN_100d0490(void)

{
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101f7fb9;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 100d04e0 FUN_100d04e0

void FUN_100d04e0(void)

{
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101f7fe9;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 100d0530 FUN_100d0530

void FUN_100d0530(UStruct *param_1,UPackage *param_2,undefined4 param_3,undefined4 param_4)

{
  UClass *pUVar1;
  int iVar2;
  
  pUVar1 = UCommandlet::StaticClass();
  iVar2 = UStruct::IsChildOf(param_1,(UStruct *)pUVar1);
  if (iVar2 == 0) {
    appFailAssert("Class->IsChildOf(T::StaticClass())",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnObjBas.h",0x4d9);
  }
  if (param_2 == (UPackage *)0xffffffff) {
    param_2 = UObject::GetTransientPackage();
  }
  UObject::StaticConstructObject(param_1,param_2,param_3,param_4,0,*(undefined4 *)GError_exref,0);
  return;
}


// ==== 100d05a0 FUN_100d05a0

void FUN_100d05a0(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = TSingleton<XMLUIManager>::vftable;
  DAT_1035786c = 0;
  return;
}


// ==== 100d05c0 FUN_100d05c0

void FUN_100d05c0(byte param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = TSingleton<XMLUIManager>::vftable;
  DAT_1035786c = 0;
  if ((param_1 & 1) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))();
  }
  return;
}


// ==== 100d05f0 FUN_100d05f0

undefined4 FUN_100d05f0(void)

{
  int iVar1;
  undefined4 uVar2;
  longlong lVar3;
  uint uStack_38;
  FString local_28 [20];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_101f8019;
  local_10 = ExceptionList;
  uStack_38 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_38;
  ExceptionList = &local_10;
  local_8 = 0;
  iVar1 = FUN_100d0170();
  if (iVar1 != 0) {
    lVar3 = (**(code **)(**(int **)GFileManager_exref + 0x20))(L"..\\System\\Interface.u");
    if (lVar3 != 0) {
      (**(code **)(**(int **)GFileManager_exref + 0x14))(L"..\\System\\Interface.u",0,1);
    }
    ExceptionList = local_10;
    return 0;
  }
  FString::FString(local_28,(ushort *)L"Interface");
  local_8._0_1_ = 1;
  uVar2 = FUN_10068f30(local_28);
  local_8 = (uint)local_8._1_3_ << 8;
  FString::~FString(local_28);
  ExceptionList = local_10;
  return uVar2;
}


// ==== 100d06af Catch@100d06af

void Catch_100d06af(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 100d06c3 Catch@100d06c3

void Catch_100d06c3(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"XMLUIManager::CheckDependencyUC");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100d06e0 FUN_100d06e0

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

void FUN_100d06e0(void)

{
  FString *this;
  FString local_2028 [16];
  undefined1 *local_2018;
  void *local_2014;
  undefined1 *puStack_2010;
  int local_200c;
  ushort local_2008 [4096];
  uint local_8;
  
  puStack_2010 = &LAB_101f8052;
  local_2014 = ExceptionList;
  local_8 = DAT_103554c4 ^ (uint)local_2008;
  local_2018 = &stack0xffffdfc4;
  ExceptionList = &local_2014;
  local_200c = 0;
  appGetVarArgs(local_2008,0x1000,(ushort **)&stack0x00000008);
  this = (FString *)FString::Printf((ushort *)local_2028,L"XMLUI - %s",local_2008);
  local_200c._0_1_ = 1;
  FString::operator*(this);
  FOutputDevice::Logf((FOutputDevice *)GWarn_exref,*(ushort **)GWarn_exref);
  local_200c._0_1_ = 0;
  FString::~FString(local_2028);
  FString::FString(local_2028,local_2008);
  local_200c._0_1_ = 2;
  FUN_100d0350();
  local_200c = (uint)local_200c._1_3_ << 8;
  FString::~FString(local_2028);
  local_200c = 0xffffffff;
  ExceptionList = local_2014;
  __security_check_cookie(local_8 ^ (uint)local_2008);
  return;
}


// ==== 100d07d1 Catch@100d07d1

void Catch_100d07d1(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x24);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 100d07e5 Catch@100d07e5

void Catch_100d07e5(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"XMLUIManager::PrintMsg");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100d0810 FUN_100d0810

void FUN_100d0810(void)

{
  HMODULE hModule;
  FARPROC pFVar1;
  int iVar2;
  undefined4 uVar3;
  UClass *pUVar4;
  int in_ECX;
  UObject *pUVar5;
  wchar_t *pwVar6;
  ushort *puVar7;
  ulong uVar8;
  UPackageMap *pUVar9;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_101f8096;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_100d00e0(0);
  CoInitialize((LPVOID)0x0);
  hModule = LoadLibraryA("msxml4.dll");
  if (hModule == (HMODULE)0x0) {
    appFailAssert("hInst",".\\XML\\XMLUIManager.cpp",0x28a);
  }
  pFVar1 = GetProcAddress(hModule,"DllRegisterServer");
  if (pFVar1 == (FARPROC)0x0) {
    appFailAssert("pFunc",".\\XML\\XMLUIManager.cpp",0x28d);
  }
  (*pFVar1)();
  FreeLibrary(hModule);
  iVar2 = FUN_10004ed0(0x1c);
  local_8._0_1_ = 1;
  if (iVar2 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_100cc800();
  }
  local_8._0_1_ = 0;
  *(undefined4 *)(in_ECX + 4) = uVar3;
  iVar2 = FUN_10004ed0(0x6c);
  local_8._0_1_ = 2;
  if (iVar2 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_100cb090();
  }
  local_8 = (uint)local_8._1_3_ << 8;
  *(undefined4 *)(in_ECX + 8) = uVar3;
  pUVar9 = (UPackageMap *)0x0;
  uVar8 = 0x4000000;
  puVar7 = (ushort *)0x0;
  pwVar6 = L"Core.ParamStack";
  pUVar5 = (UObject *)0x0;
  pUVar4 = UParamStack::StaticClass();
  pUVar4 = UObject::StaticLoadClass(pUVar4,pUVar5,(ushort *)pwVar6,puVar7,uVar8,pUVar9);
  if (pUVar4 == (UClass *)0x0) {
    appFailAssert("pParamStackClass",".\\XML\\XMLUIManager.cpp",0x299);
  }
  UObject::AddToRoot((UObject *)pUVar4);
  *(undefined4 *)(in_ECX + 0x34) = 0;
  ExceptionList = local_10;
  return;
}


// ==== 100d0963 Catch@100d0963

void Catch_100d0963(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 100d0977 Catch@100d0977

void Catch_100d0977(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"XMLUIManager::Init");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100d09a0 FUN_100d09a0

void FUN_100d09a0(byte param_1)

{
  FUN_100cc8b0();
  if ((param_1 & 1) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))();
  }
  return;
}


// ==== 100d09d0 FUN_100d09d0

void FUN_100d09d0(byte param_1)

{
  FUN_100cb190();
  if ((param_1 & 1) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))();
  }
  return;
}


// ==== 100d0a00 FUN_100d0a00

undefined4 FUN_100d0a00(FString *param_1)

{
  int iVar1;
  ushort *puVar2;
  uint uVar3;
  int iVar4;
  int *in_ECX;
  
  puVar2 = FString::operator*(param_1);
  uVar3 = FUN_10048c20(puVar2);
  iVar1 = *(int *)(in_ECX[3] + (in_ECX[4] - 1U & uVar3) * 4);
  while( true ) {
    if (iVar1 == -1) {
      return 0;
    }
    iVar4 = FString::operator==((FString *)(*in_ECX + iVar1 * 0x14 + 4),param_1);
    if (iVar4 != 0) break;
    iVar1 = *(int *)(iVar1 * 0x14 + *in_ECX);
  }
  return *(undefined4 *)(*in_ECX + 0x10 + iVar1 * 0x14);
}


// ==== 100d0a70 FUN_100d0a70

void FUN_100d0a70(uint *param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int *in_ECX;
  
  for (iVar1 = *(int *)(in_ECX[3] + (in_ECX[4] - 1U & *param_1) * 4); iVar1 != -1;
      iVar1 = *(int *)(iVar1 + *in_ECX)) {
    iVar1 = iVar1 * 0xc;
    if ((*(uint *)(iVar1 + 4 + *in_ECX) == *param_1) &&
       (puVar2 = (undefined4 *)FUN_100c56a0(4,param_2), puVar2 != (undefined4 *)0x0)) {
      *puVar2 = *(undefined4 *)(iVar1 + 8 + *in_ECX);
    }
  }
  return;
}


// ==== 100d0ad0 FUN_100d0ad0

undefined4 * FUN_100d0ad0(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  int in_ECX;
  
  puVar1 = (undefined4 *)FUN_10083a80(0xc);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    puVar1[1] = *param_1;
    puVar1[2] = *param_2;
  }
  uVar2 = puVar1[1] & *(int *)(in_ECX + 0x10) - 1U;
  *puVar1 = *(undefined4 *)(*(int *)(in_ECX + 0xc) + uVar2 * 4);
  *(int *)(*(int *)(in_ECX + 0xc) + uVar2 * 4) = *(int *)(in_ECX + 4) + -1;
  if (*(int *)(in_ECX + 0x10) * 2 + 8 < *(int *)(in_ECX + 4)) {
    *(int *)(in_ECX + 0x10) = *(int *)(in_ECX + 0x10) * 2;
    FUN_1000b930();
  }
  return puVar1 + 2;
}


// ==== 100d0b40 FUN_100d0b40

void FUN_100d0b40(int param_1,int param_2)

{
  FArray *in_ECX;
  int iVar1;
  int iVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101f80c9;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (param_1 < 0) {
    appFailAssert("Index>=0","d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h"
                  ,0x203);
  }
  if (*(int *)(in_ECX + 4) < param_1) {
    appFailAssert("Index<=ArrayNum",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x204);
  }
  iVar2 = param_2 + param_1;
  if (*(int *)(in_ECX + 4) < iVar2) {
    appFailAssert("Index+Count<=ArrayNum",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x205);
  }
  if (param_1 < iVar2) {
    iVar1 = param_1 * 0xc;
    iVar2 = iVar2 - param_1;
    do {
      local_4 = 0xffffffff;
      FString::~FString((FString *)(*(int *)in_ECX + iVar1));
      iVar1 = iVar1 + 0xc;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  FArray::Remove(in_ECX,param_1,param_2,0xc);
  ExceptionList = local_c;
  return;
}


// ==== 100d0c20 FUN_100d0c20

void FUN_100d0c20(undefined4 param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101f80f0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_100d0a00(param_1);
  ExceptionList = local_10;
  return;
}


// ==== 100d0c72 Catch@100d0c72

void Catch_100d0c72(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 100d0c86 Catch@100d0c86

void Catch_100d0c86(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"XMLUIManager::GetWindow");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100d0cb0 FUN_100d0cb0

int FUN_100d0cb0(FString *param_1,int *param_2)

{
  int iVar1;
  FString *pFVar2;
  ushort *puVar3;
  int iVar4;
  uint uVar5;
  uint uStack_64;
  FString local_54 [12];
  FString local_48 [12];
  FString local_3c [12];
  FString local_30 [20];
  undefined4 local_1c;
  uint local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_101f8170;
  local_10 = ExceptionList;
  uStack_64 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_64;
  ExceptionList = &local_10;
  local_18 = 0;
  local_8 = 0;
  iVar1 = FString::operator_int(param_1);
  if (iVar1 != 0) {
    iVar1 = FString::InStr(param_1,(ushort *)&DAT_10234780,0);
    pFVar2 = param_1;
    if (0 < iVar1) {
      pFVar2 = (FString *)FString::Mid(param_1,(int)local_48,0);
      local_8 = CONCAT31(local_8._1_3_,1);
      local_18 = 1;
    }
    FString::FString(local_30,pFVar2);
    local_8 = 3;
    if (iVar1 < 1) {
      pFVar2 = (FString *)FString::FString(local_48,(ushort *)&DAT_1022f9f8);
      local_8 = 5;
      uVar5 = 4;
    }
    else {
      local_18 = 0;
      FString::~FString(local_48);
      FString::Len(param_1);
      pFVar2 = (FString *)FString::Mid(param_1,(int)local_54,iVar1 + 1);
      local_8 = CONCAT31(local_8._1_3_,4);
      uVar5 = 2;
    }
    local_18 = uVar5;
    FString::FString(local_3c,pFVar2);
    local_8 = 7;
    if ((uVar5 & 4) != 0) {
      uVar5 = uVar5 & 0xfffffffb;
      local_18 = uVar5;
      FString::~FString(local_48);
    }
    local_8 = CONCAT31(local_8._1_3_,8);
    if ((uVar5 & 2) != 0) {
      local_18 = uVar5 & 0xfffffffd;
      FString::~FString(local_54);
    }
    if ((((param_2 != (int *)0x0) &&
         (iVar1 = (**(code **)(*param_2 + 0xf4))(local_30,1), iVar1 != 0)) ||
        (iVar1 = FUN_100d0c20(local_30), iVar1 != 0)) ||
       (iVar1 = (**(code **)(**(int **)(DAT_103663bc + 0x50ac) + 0xf4))(local_30,1), iVar1 != 0)) {
      iVar4 = FString::operator_int(local_3c);
      if ((iVar4 != 0) || (iVar1 == 0)) {
        iVar1 = FUN_100d0cb0(local_3c,iVar1);
      }
      local_8._0_1_ = 3;
      FString::~FString(local_3c);
      local_8 = (uint)local_8._1_3_ << 8;
      FString::~FString(local_30);
      ExceptionList = local_10;
      return iVar1;
    }
    puVar3 = FString::operator*(param_1);
    FUN_100d01f0(local_1c,L"mismatched window name : %s",puVar3);
    local_8._0_1_ = 3;
    FString::~FString(local_3c);
    local_8 = (uint)local_8._1_3_ << 8;
    FString::~FString(local_30);
  }
  ExceptionList = local_10;
  return 0;
}


// ==== 100d0ebf Catch@100d0ebf

void Catch_100d0ebf(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x1c) = *(undefined4 *)(unaff_EBP + -0x20);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x1c,&DAT_102a47f0);
}


// ==== 100d0ed3 Catch@100d0ed3

void Catch_100d0ed3(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"XMLUIManager::FindControl");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100d0ef0 FUN_100d0ef0

void FUN_100d0ef0(void)

{
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101f8190;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if (*(int *)(in_ECX + 4) != 0) {
    FUN_100d09a0(1);
    *(undefined4 *)(in_ECX + 4) = 0;
  }
  if (*(int *)(in_ECX + 8) != 0) {
    FUN_100d09d0(1);
    *(undefined4 *)(in_ECX + 8) = 0;
  }
  CoUninitialize();
  ExceptionList = local_10;
  return;
}


// ==== 100d0f63 Catch@100d0f63

void Catch_100d0f63(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 100d0f77 Catch@100d0f77

void Catch_100d0f77(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"XMLUIManager::Destroy");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100d0fa0 FUN_100d0fa0

void FUN_100d0fa0(void)

{
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_101f81b9;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_4 = 0;
  FUN_100d0b40(0,*(undefined4 *)(in_ECX + 4));
  local_4 = 0xffffffff;
  FArray::~FArray(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 100d1000 FUN_100d1000

void FUN_100d1000(void)

{
  int iVar1;
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_101f81e9;
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


// ==== 100d10a0 FUN_100d10a0

void FUN_100d10a0(void)

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
    FUN_1000b930();
    return;
  }
  return;
}


// ==== 100d10e0 FUN_100d10e0

void FUN_100d10e0(int param_1)

{
  FArray *in_ECX;
  int iVar1;
  int iVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101f821c;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  iVar2 = 0;
  if (0 < *(int *)(in_ECX + 4)) {
    iVar1 = 0;
    do {
      local_4 = 0xffffffff;
      FString::~FString((FString *)(*(int *)in_ECX + iVar1 + 4));
      iVar2 = iVar2 + 1;
      iVar1 = iVar1 + 0x14;
    } while (iVar2 < *(int *)(in_ECX + 4));
  }
  FArray::Empty(in_ECX,0x14,param_1);
  ExceptionList = local_c;
  return;
}


// ==== 100d1160 FUN_100d1160

void FUN_100d1160(void)

{
  int iVar1;
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_101f8249;
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
  FArray::Remove(in_ECX,0,iVar1,0xc);
  local_4 = 0xffffffff;
  FArray::~FArray(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 100d1200 FUN_100d1200

/* WARNING: Removing unreachable block (ram,0x100d13f0) */
/* WARNING: Removing unreachable block (ram,0x100d12fd) */
/* WARNING: Removing unreachable block (ram,0x100d14b4) */

undefined4 FUN_100d1200(void)

{
  int iVar1;
  int iVar2;
  FString *pFVar3;
  undefined4 uVar4;
  longlong lVar5;
  FString aFStack_a8 [12];
  undefined1 *puStack_9c;
  undefined4 uStack_94;
  uint uStack_7c;
  FString local_6c [12];
  FString local_60 [12];
  undefined1 local_54 [4];
  int local_50;
  FString local_48 [12];
  FString local_3c [12];
  undefined4 local_30;
  undefined1 *local_24;
  undefined1 *local_20;
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_101f82bf;
  local_10 = ExceptionList;
  uStack_7c = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_7c;
  ExceptionList = &local_10;
  local_8 = 0;
  iVar2 = (**(code **)(*DAT_103663bc + 0x7b4))();
  if (iVar2 != 0) {
    ExceptionList = local_10;
    return 1;
  }
  FString::FString(local_3c,(ushort *)L"Interface.xdat");
  local_8._0_1_ = 1;
  iVar2 = **(int **)GFileManager_exref;
  FString::operator*(local_3c);
  lVar5 = (**(code **)(iVar2 + 0x20))();
  uVar4 = (undefined4)((ulonglong)lVar5 >> 0x20);
  local_30 = (undefined4)lVar5;
  if (lVar5 != 0) {
    FUN_10062b40();
    local_8._0_1_ = 2;
    FString::operator*(local_48);
    pFVar3 = (FString *)FString::Printf((ushort *)local_60);
    local_8._0_1_ = 3;
    iVar2 = **(int **)GFileManager_exref;
    FString::operator*(pFVar3);
    lVar5 = (**(code **)(iVar2 + 0x20))();
    local_8._0_1_ = 2;
    FString::~FString(local_60);
    if (lVar5 == 0) {
LAB_100d1516:
      local_8._0_1_ = 1;
      FString::~FString(local_48);
      local_8 = (uint)local_8._1_3_ << 8;
      FString::~FString(local_3c);
      ExceptionList = local_10;
      return 1;
    }
    if (lVar5 < CONCAT44(uVar4,local_30)) {
      FUN_100d0490();
      local_8._0_1_ = 4;
      local_20 = (undefined1 *)&uStack_94;
      puStack_9c = (undefined1 *)0x100d1377;
      FString::FString((FString *)&uStack_94,(ushort *)&DAT_1025bd94);
      local_8._0_1_ = 5;
      puStack_9c = local_54;
      local_24 = aFStack_a8;
      FString::FString(aFStack_a8,local_48);
      local_8 = CONCAT31(local_8._1_3_,4);
      FUN_10065ba0();
      for (iVar2 = 0; local_18 = iVar2, iVar2 < local_50; iVar2 = iVar2 + 1) {
        FUN_100cffc0();
        local_8._0_1_ = 7;
        iVar1 = **(int **)GFileManager_exref;
        FString::operator*(local_60);
        lVar5 = (**(code **)(iVar1 + 0x20))();
        if (CONCAT44(uVar4,local_30) <= lVar5) {
          iVar2 = **(int **)GFileManager_exref;
          FString::operator*(local_3c);
          uStack_94 = 0x100d141b;
          (**(code **)(iVar2 + 0x14))();
          local_8._0_1_ = 4;
          FUN_10062d00();
          local_8._0_1_ = 2;
          FUN_100d0fa0();
          goto LAB_100d1328;
        }
        local_8 = CONCAT31(local_8._1_3_,4);
        FUN_10062d00();
      }
      FUN_10062a50();
      local_8._0_1_ = 8;
      FString::operator*(local_6c);
      uStack_94 = 0x100d1475;
      pFVar3 = (FString *)FString::Printf((ushort *)local_60);
      local_8._0_1_ = 9;
      iVar2 = **(int **)GFileManager_exref;
      FString::operator*(pFVar3);
      lVar5 = (**(code **)(iVar2 + 0x20))();
      local_8._0_1_ = 8;
      FString::~FString(local_60);
      if (lVar5 < CONCAT44(uVar4,local_30)) {
        local_8._0_1_ = 4;
        FString::~FString(local_6c);
        local_8._0_1_ = 2;
        FUN_100d0fa0();
        goto LAB_100d1516;
      }
      iVar2 = **(int **)GFileManager_exref;
      FString::operator*(local_3c);
      uStack_94 = 0x100d14df;
      (**(code **)(iVar2 + 0x14))();
      local_8._0_1_ = 4;
      FString::~FString(local_6c);
      local_8._0_1_ = 2;
      FUN_100d0fa0();
    }
    else {
      iVar2 = **(int **)GFileManager_exref;
      FString::operator*(local_3c);
      uStack_94 = 0x100d1328;
      (**(code **)(iVar2 + 0x14))();
    }
LAB_100d1328:
    local_8._0_1_ = 1;
    FString::~FString(local_48);
  }
  local_8 = (uint)local_8._1_3_ << 8;
  FString::~FString(local_3c);
  ExceptionList = local_10;
  return 0;
}


// ==== 100d1547 Catch@100d1547

void Catch_100d1547(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x24);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 100d155b Catch@100d155b

void Catch_100d155b(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"XMLUIManager::CheckDependencyXdat");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100d1580 FUN_100d1580

void FUN_100d1580(undefined4 param_1,int param_2)

{
  int iVar1;
  uint uStack_3c;
  int local_2c;
  int local_28;
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  puStack_c = &LAB_101f82e8;
  local_10 = ExceptionList;
  uStack_3c = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_3c;
  ExceptionList = &local_10;
  local_8 = 0;
  if (param_2 != 0) {
    FUN_100d04e0();
    local_8 = CONCAT31(local_8._1_3_,1);
    FUN_100d0a70(&param_1,&local_2c);
    for (local_18 = 0; local_18 < local_28; local_18 = local_18 + 1) {
      iVar1 = *(int *)(local_2c + local_18 * 4);
      if ((iVar1 != 0) && (iVar1 == param_2)) goto LAB_100d1612;
    }
    FUN_100d0ad0(&param_1,&param_2);
LAB_100d1612:
    local_8 = local_8 & 0xffffff00;
    FUN_100d1000();
  }
  ExceptionList = local_10;
  return;
}


// ==== 100d1639 Catch@100d1639

void Catch_100d1639(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 100d164d Catch@100d164d

void Catch_100d164d(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"XMLUIManager::RegisterUIEvent");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100d1670 FUN_100d1670

void FUN_100d1670(int param_1)

{
  int iVar1;
  int in_ECX;
  int iVar2;
  int iVar3;
  int local_30;
  int local_2c;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  puStack_c = &LAB_101f8320;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_10038f80();
  iVar3 = param_1;
  local_8._1_3_ = (undefined3)(local_8 >> 8);
  local_8._0_1_ = 2;
  for (iVar2 = 0; iVar2 < *(int *)(in_ECX + 0x24); iVar2 = iVar2 + 1) {
    iVar1 = *(int *)(in_ECX + 0x20) + iVar2 * 0xc;
    if (*(int *)(iVar1 + 8) == iVar3) {
      FUN_100d9a30(iVar1 + 4);
    }
  }
  local_8 = CONCAT31(local_8._1_3_,1);
  FUN_100d10a0();
  for (iVar3 = 0; iVar3 < local_2c; iVar3 = iVar3 + 1) {
    param_1 = *(int *)(local_30 + iVar3 * 4);
    FUN_100aacf0(&param_1);
  }
  local_8 = local_8 & 0xffffff00;
  FUN_10039be0();
  ExceptionList = local_10;
  return;
}


// ==== 100d1750 Catch@100d1750

void Catch_100d1750(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x1c) = *(undefined4 *)(unaff_EBP + -0x20);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x1c,&DAT_102a47f0);
}


// ==== 100d1764 Catch@100d1764

void Catch_100d1764(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"XMLUIManager::UnregisterUIEvent");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100d1790 FUN_100d1790

undefined4 FUN_100d1790(int param_1,FString *param_2)

{
  UUIScript *this;
  int iVar1;
  FString *pFVar2;
  int iVar3;
  uint uStack_3c;
  int local_2c;
  int local_28;
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_101f8348;
  local_10 = ExceptionList;
  uStack_3c = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_3c;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_100d04e0();
  local_8._0_1_ = 1;
  FUN_100d0a70(&param_1,&local_2c);
  pFVar2 = param_2;
  iVar1 = param_1;
  if (local_28 != 0) {
    local_18 = 0;
    while (iVar3 = local_18, local_18 < local_28) {
      this = *(UUIScript **)(local_2c + local_18 * 4);
      if (this != (UUIScript *)0x0) {
        UUIScript::eventOnEvent(this,iVar1,pFVar2);
      }
      local_18 = iVar3 + 1;
    }
    local_8 = (uint)local_8._1_3_ << 8;
    FUN_100d1000();
    ExceptionList = local_10;
    return 1;
  }
  FUN_100d01f0();
  local_8 = (uint)local_8._1_3_ << 8;
  FUN_100d1000();
  ExceptionList = local_10;
  return 0;
}


// ==== 100d1868 Catch@100d1868

void Catch_100d1868(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 100d187c Catch@100d187c

void Catch_100d187c(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"XMLUIManager::ExecuteUIEvent");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100d18a0 FUN_100d18a0

void FUN_100d18a0(void)

{
  int *piVar1;
  int in_ECX;
  int iVar2;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_101f8378;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  iVar2 = 0;
  local_8 = 0;
  if (*(int *)(in_ECX + 0x34) != 0) {
    FUN_10150190();
    *(undefined4 *)(in_ECX + 0x34) = 0;
  }
  local_8._0_1_ = 1;
  for (; iVar2 < *(int *)(in_ECX + 0x10); iVar2 = iVar2 + 1) {
    piVar1 = *(int **)(*(int *)(in_ECX + 0xc) + 0x10 + iVar2 * 0x14);
    if (piVar1 == (int *)0x0) {
      appFailAssert("pWnd",".\\XML\\XMLUIManager.cpp",0x270);
    }
    (**(code **)(*piVar1 + 0x68))(0x510,0,0);
  }
  local_8 = (uint)local_8._1_3_ << 8;
  FUN_100b73f0();
  ExceptionList = local_10;
  return;
}


// ==== 100d196b Catch@100d196b

void Catch_100d196b(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 100d197f Catch@100d197f

void Catch_100d197f(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"XMLUIManager::Tick");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100d19a0 FUN_100d19a0

void FUN_100d19a0(void)

{
  int in_ECX;
  
  FUN_100d10e0(0);
  *(undefined4 *)(in_ECX + 0x10) = 8;
  FUN_1006b150();
  return;
}


// ==== 100d19c0 FUN_100d19c0

void FUN_100d19c0(void)

{
  uint uVar1;
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101f83b1;
  local_c = ExceptionList;
  uVar1 = DAT_103554c4 ^ (uint)&stack0xffffffec;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX);
  local_4 = 1;
  *(undefined4 *)(in_ECX + 0xc) = 0;
  *(undefined4 *)(in_ECX + 0x10) = 8;
  FUN_1000b930(uVar1);
  ExceptionList = local_c;
  return;
}


// ==== 100d1a30 FUN_100d1a30

void FUN_100d1a30(void)

{
  int in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_101f83d8;
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
  FUN_100d1160();
  ExceptionList = local_c;
  return;
}


// ==== 100d1ab0 FUN_100d1ab0

void FUN_100d1ab0(void)

{
  undefined1 local_10 [4];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_101f8408;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_4 = 0xffffffff;
  FUN_100d1a30(DAT_103554c4 ^ (uint)local_10);
  ExceptionList = local_c;
  return;
}


// ==== 100d1b00 FUN_100d1b00

void FUN_100d1b00(FString *param_1)

{
  ushort *puVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101f8430;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  puVar1 = FString::operator*(param_1);
  FUN_100609f0(puVar1);
  ExceptionList = local_10;
  return;
}


// ==== 100d1b61 Catch@100d1b61

void Catch_100d1b61(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 100d1b75 Catch@100d1b75

void Catch_100d1b75(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"XMLUIManager::RemoveWindow");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100d1ba0 FUN_100d1ba0

void FUN_100d1ba0(void)

{
  undefined4 *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101f847e;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *in_ECX = TSingleton<XMLUIManager>::vftable;
  local_8 = 0;
  DAT_1035786c = in_ECX;
  *in_ECX = XMLUIManager::vftable;
  FUN_100611b0();
  local_8._0_1_ = 2;
  FUN_100d19c0();
  local_8 = CONCAT31(local_8._1_3_,5);
  FUN_100d0810();
  ExceptionList = local_10;
  return;
}


// ==== 100d1c2d Catch@100d1c2d

void Catch_100d1c2d(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x20);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 100d1c41 Catch@100d1c41

void Catch_100d1c41(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"XMLUIManager::XMLUIManager");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100d1c60 FUN_100d1c60

void FUN_100d1c60(void)

{
  undefined4 *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_101f84ce;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *in_ECX = XMLUIManager::vftable;
  local_8 = 3;
  FUN_100d0ef0();
  local_8._0_1_ = 1;
  local_8._1_3_ = 0;
  FUN_100d1a30();
  local_8 = (uint)local_8._1_3_ << 8;
  FUN_10002840();
  *in_ECX = TSingleton<XMLUIManager>::vftable;
  DAT_1035786c = 0;
  ExceptionList = local_10;
  return;
}


// ==== 100d1cf4 Catch@100d1cf4

void Catch_100d1cf4(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x20);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 100d1d08 Catch@100d1d08

void Catch_100d1d08(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"XMLUIManager::~XMLUIManager");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100d1d30 FUN_100d1d30

void FUN_100d1d30(byte param_1)

{
  FUN_100d1c60();
  if ((param_1 & 1) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))();
  }
  return;
}


// ==== 100d1d60 FUN_100d1d60

undefined4 FUN_100d1d60(void)

{
  int iVar1;
  undefined4 uVar2;
  wchar_t *pwVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101f84f0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  iVar1 = FUN_100cc320();
  if (iVar1 == 0) {
    pwVar3 = L"XMLUIManager:failed to unload schema!!";
  }
  else {
    iVar1 = FUN_100cc520();
    if (iVar1 == 0) {
      pwVar3 = L"XMLUIManager:failed to unload documents!!";
    }
    else {
      iVar1 = FUN_100cc5f0();
      if (iVar1 != 0) {
        FUN_100cae50();
        ExceptionList = local_10;
        return 1;
      }
      pwVar3 = L"XMLUIManager:failed to destroy nodes!!";
    }
  }
  uVar2 = FUN_10005c30(pwVar3);
  FUN_100d01f0(uVar2);
  ExceptionList = local_10;
  return 0;
}


// ==== 100d1e0c Catch@100d1e0c

void Catch_100d1e0c(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 100d1e20 Catch@100d1e20

void Catch_100d1e20(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"XMLUIManager::UnloadXML");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100d1e40 FUN_100d1e40

undefined4 FUN_100d1e40(void)

{
  int *piVar1;
  undefined4 uVar2;
  FString *this;
  int in_ECX;
  FOutputDevice *this_00;
  FOutputDevice *this_01;
  int iVar3;
  int iVar4;
  FString local_30 [20];
  int local_1c;
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_101f8532;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffa0;
  ExceptionList = &local_10;
  iVar3 = 0;
  local_8 = 0;
  local_1c = in_ECX;
  uVar2 = FUN_10005c30(L"Destroying windows...");
  FUN_100d06e0(uVar2);
  if (*(int *)GLog_exref != 0) {
    FOutputDevice::Logf2(this_00,*(ushort **)GLog_exref);
  }
  local_8._0_1_ = 1;
  iVar4 = in_ECX;
  for (; iVar3 < *(int *)(in_ECX + 0x10); iVar3 = iVar3 + 1) {
    if (*(int *)(*(int *)(in_ECX + 0xc) + 0x10 + iVar3 * 0x14) == 0) {
      appFailAssert("pWnd",".\\XML\\XMLUIManager.cpp",0xcf);
    }
    if (*(int *)GLog_exref != 0) {
      this = (FString *)FUN_10057590();
      local_8._0_1_ = 2;
      FString::operator*(this);
      FOutputDevice::Logf2(this_01,*(ushort **)GLog_exref);
      local_8._0_1_ = 1;
      FString::~FString(local_30);
    }
    iVar4 = local_1c;
  }
  local_8 = (uint)local_8._1_3_ << 8;
  FUN_100b73f0();
  if (*(int *)GLog_exref != 0) {
    FOutputDevice::Logf2(*(FOutputDevice **)GLog_exref,(ushort *)*(FOutputDevice **)GLog_exref);
  }
  local_1c = *(int *)(iVar4 + 0x10);
  local_18 = 0;
  while ((local_18 < local_1c && (*(int *)(iVar4 + 0x10) != 0))) {
    local_8._0_1_ = 3;
    piVar1 = *(int **)(*(int *)(iVar4 + 0xc) + 0x10);
    if (piVar1 == (int *)0x0) {
      appFailAssert("pWnd",".\\XML\\XMLUIManager.cpp",0xdd);
    }
    FUN_10057590();
    local_8 = CONCAT31(local_8._1_3_,4);
    FString::operator*(local_30);
    uVar2 = FUN_10005c30(L"\tDestroying %s");
    FUN_100d06e0(uVar2);
    FUN_10058020();
    FUN_10060e00();
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 0xc))();
    }
    FUN_100d1b00();
    local_8._0_1_ = 3;
    FString::~FString(local_30);
    local_8 = (uint)local_8._1_3_ << 8;
    FUN_100b73f0();
    local_18 = local_18 + 1;
  }
  uVar2 = FUN_10005c30();
  FUN_100d06e0(uVar2);
  FUN_100d19a0();
  iVar3 = FUN_100c90b0();
  if (iVar3 != 0) {
    iVar3 = FUN_100c9430();
    if (iVar3 != 0) {
      ExceptionList = local_10;
      return 1;
    }
  }
  ExceptionList = local_10;
  return 0;
}


// ==== 100d208a Catch@100d208a

void Catch_100d208a(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x1c) = *(undefined4 *)(unaff_EBP + -0x20);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x1c,&DAT_102a47f0);
}


// ==== 100d209e Catch@100d209e

void Catch_100d209e(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"XMLUIManager::DestroyWindows");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100d20c0 FUN_100d20c0

void FUN_100d20c0(void)

{
  int iVar1;
  UClass *pUVar2;
  int *piVar3;
  undefined4 uVar4;
  UObject *pUVar5;
  wchar_t *pwVar6;
  ushort *puVar7;
  ulong uVar8;
  UPackageMap *pUVar9;
  int local_81c;
  void *local_814;
  undefined1 *puStack_810;
  undefined4 local_80c;
  ushort local_808 [1024];
  uint local_8;
  
  puStack_810 = &LAB_101f8550;
  local_814 = ExceptionList;
  local_8 = DAT_103554c4 ^ (uint)local_808;
  ExceptionList = &local_814;
  local_80c = 0;
  FUN_10005c30();
  FUN_100d06e0();
  iVar1 = FUN_100d05f0();
  if (iVar1 == 0) {
    *(undefined4 *)GIsDynamicRecompile_exref = 1;
    local_81c = 0;
    local_80c = CONCAT31(local_80c._1_3_,1);
    pUVar9 = (UPackageMap *)0x0;
    uVar8 = 0x2042;
    puVar7 = (ushort *)0x0;
    pwVar6 = L"Editor.MakeCommandlet";
    pUVar5 = (UObject *)0x0;
    pUVar2 = UCommandlet::StaticClass();
    pUVar2 = UObject::StaticLoadClass(pUVar2,pUVar5,(ushort *)pwVar6,puVar7,uVar8,pUVar9);
    FName::FName((FName *)&stack0xfffff7bc,0);
    piVar3 = (int *)FUN_100d0530(pUVar2,0xffffffff);
    (**(code **)(*piVar3 + 0x3c))();
    appStrcpy(local_808,(ushort *)L"-UIScriptCompile");
    iVar1 = (**(code **)(*piVar3 + 0x68))();
    if (iVar1 == 0) {
      local_81c = 1;
    }
    else if (iVar1 == -1) {
      local_81c = 2;
      uVar4 = FUN_10005c30();
      FUN_100d01f0(uVar4);
    }
    (**(code **)(*piVar3 + 0xc))();
    local_80c = 0;
    if ((local_81c == 0) || (local_81c == 1)) {
      FUN_10005c30();
      FUN_100d06e0();
    }
    else if (local_81c == 2) {
      FUN_10005c30();
      FUN_100d01f0();
    }
    UObject::CollectGarbage(0x4000000);
    *(undefined4 *)GIsDynamicRecompile_exref = 0;
    local_80c = 0xffffffff;
  }
  else {
    FUN_10005c30();
    FUN_100d06e0();
  }
  ExceptionList = local_814;
  __security_check_cookie(local_8 ^ (uint)local_808);
  return;
}


// ==== 100d2225 Catch@100d2225

undefined4 Catch_100d2225(void)

{
  ushort *puVar1;
  undefined4 uVar2;
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x24) != 0) {
    *(undefined4 *)(unaff_EBP + -0x14) = 2;
    puVar1 = FString::operator*((FString *)(*(int *)(unaff_EBP + -0x24) + 0x40));
    uVar2 = FUN_10005c30(puVar1);
    FUN_100d01f0(uVar2);
  }
  *(undefined4 *)(unaff_EBP + -4) = 0;
  return 0x100d2201;
}


// ==== 100d2298 Catch@100d2298

void Catch_100d2298(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x20);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 100d22ac Catch@100d22ac

void Catch_100d22ac(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"XMLUIManager::CompileUIScripts");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100d22d0 FUN_100d22d0

void FUN_100d22d0(void)

{
  int iVar1;
  undefined4 uVar2;
  FString *this;
  ushort *puVar3;
  UObject *pUVar4;
  ULinkerLoad *this_00;
  ulong uVar5;
  UPackageMap *pUVar6;
  FGuid *pFVar7;
  uint uStack_50;
  FString local_40 [12];
  FString local_34 [12];
  FString local_28 [20];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  puStack_c = &LAB_101f859b;
  local_10 = ExceptionList;
  uStack_50 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_50;
  ExceptionList = &local_10;
  local_8 = 0;
  iVar1 = FUN_100d05f0();
  if (iVar1 != 0) {
    uVar2 = FUN_10005c30(L"Skipped compiling. No script change detected");
    FUN_100d06e0(uVar2);
    ExceptionList = local_10;
    return;
  }
  FString::FString(local_40,(ushort *)&DAT_1025c3f4);
  local_8._0_1_ = 1;
  this = (FString *)FString::FString(local_34,(ushort *)L"Interface");
  local_8._0_1_ = 2;
  FString::operator+(this,local_28);
  local_8._0_1_ = 4;
  FString::~FString(local_34);
  local_8 = CONCAT31(local_8._1_3_,5);
  FString::~FString(local_40);
  iVar1 = 0;
  uVar5 = 2;
  puVar3 = FString::operator*(local_28);
  pUVar4 = UObject::LoadPackage((UObject *)0x0,puVar3,uVar5,iVar1);
  if (pUVar4 != (UObject *)0x0) {
    UObject::BeginLoad();
    pFVar7 = (FGuid *)0x0;
    pUVar6 = (UPackageMap *)0x0;
    uVar5 = 10;
    puVar3 = FString::operator*(local_28);
    this_00 = UObject::GetPackageLinker((UObject *)0x0,puVar3,uVar5,pUVar6,pFVar7);
    UObject::EndLoad();
    ULinkerLoad::AskDestroy(this_00);
    UObject::CollectGarbage(0x4000000);
  }
  FUN_100d20c0();
  local_8 = local_8 & 0xffffff00;
  FString::~FString(local_28);
  ExceptionList = local_10;
  return;
}


// ==== 100d2408 Catch@100d2408

void Catch_100d2408(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 100d241c Catch@100d241c

void Catch_100d241c(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"XMLUIManager::RecompileUIScripts");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100d2440 FUN_100d2440

undefined4 FUN_100d2440(void)

{
  bool bVar1;
  uint *puVar2;
  int iVar3;
  FString *this;
  int iVar4;
  int in_ECX;
  FString aFStack_84 [8];
  undefined4 uStack_7c;
  ushort *puStack_70;
  uint uStack_60;
  FString local_50 [16];
  int local_40;
  FString local_38 [16];
  undefined1 *local_28;
  int local_20;
  undefined4 local_1c;
  undefined1 *local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  puStack_c = &LAB_101f8606;
  local_10 = ExceptionList;
  uStack_60 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_60;
  ExceptionList = &local_10;
  bVar1 = false;
  local_8 = 0;
  puVar2 = &uStack_60;
  if ((*(int *)(in_ECX + 0x38) == 0) &&
     (iVar3 = FUN_100d1200(), puVar2 = (uint *)local_14, iVar3 != 0)) {
    FUN_10005c30();
    FUN_100d06e0();
    iVar3 = FUN_100c7f10();
    if (iVar3 != 0) {
      FUN_10005c30();
      FUN_100d06e0();
      ExceptionList = local_10;
      return 1;
    }
    FUN_10005c30();
    FUN_100d01f0();
    ExceptionList = local_10;
    return 0;
  }
  local_14 = (undefined1 *)puVar2;
  FUN_10062b40();
  local_8._0_1_ = 1;
  puStack_70 = FString::operator*(local_38);
  local_18 = &stack0xffffff94;
  uStack_7c = 0x100d2520;
  FString::Printf((ushort *)&stack0xffffff94);
  local_8._0_1_ = 1;
  puStack_70 = (ushort *)0x100d2533;
  iVar3 = FUN_100ccac0();
  if (iVar3 == 0) {
    FString::operator*(local_38);
    puStack_70 = (ushort *)0x100d254c;
    this = (FString *)FString::Printf((ushort *)local_50);
    local_8._0_1_ = 3;
    FString::operator*(this);
    FUN_10005c30();
    puStack_70 = (ushort *)0x100d256c;
    FUN_100d01f0();
    local_8 = CONCAT31(local_8._1_3_,1);
    FString::~FString(local_50);
  }
  else {
    FUN_10005c30();
    FUN_100d06e0();
    local_1c = 0;
    FUN_100d0490();
    local_8._0_1_ = 4;
    local_18 = (undefined1 *)&puStack_70;
    FString::FString((FString *)&puStack_70,(ushort *)&DAT_1025bd94);
    local_8._0_1_ = 5;
    local_28 = aFStack_84;
    FString::FString(aFStack_84,local_38);
    local_8 = CONCAT31(local_8._1_3_,4);
    FUN_10065ba0();
    iVar3 = 0;
    while (local_20 = iVar3, iVar3 < local_40) {
      FUN_100cffc0();
      local_8._0_1_ = 7;
      local_18 = (undefined1 *)0x0;
      local_28 = (undefined1 *)&puStack_70;
      FString::FString((FString *)&puStack_70,local_50);
      local_8._0_1_ = 7;
      iVar4 = FUN_100cc960();
      if (iVar4 == 0) {
        bVar1 = true;
        local_1c = 1;
        local_8 = CONCAT31(local_8._1_3_,4);
        FUN_10062d00();
        iVar3 = iVar3 + 1;
      }
      else {
        FString::operator*(local_50);
        FUN_10005c30();
        puStack_70 = (ushort *)0x100d2686;
        FUN_100d06e0();
        iVar4 = FUN_100c9de0();
        if (iVar4 == 0) {
          bVar1 = true;
          local_1c = 1;
          FString::operator*(local_50);
          FUN_10005c30();
          puStack_70 = (ushort *)0x100d26bb;
          FUN_100d01f0();
        }
        local_8 = CONCAT31(local_8._1_3_,4);
        FUN_10062d00();
        iVar3 = iVar3 + 1;
      }
    }
    if (!bVar1) {
      FUN_10005c30();
      FUN_100d06e0();
      FUN_10005c30();
      FUN_100d06e0();
      iVar3 = FUN_100c7e10();
      if (iVar3 != 0) {
        FUN_10005c30();
        FUN_100d06e0();
        FUN_100d1d60();
        FUN_10005c30();
        FUN_100d06e0();
        iVar3 = FUN_100c7f10();
        if (iVar3 != 0) {
          FUN_10005c30();
          FUN_100d06e0();
          local_8._0_1_ = 1;
          FUN_100d0fa0();
          local_8 = (uint)local_8._1_3_ << 8;
          FString::~FString(local_38);
          ExceptionList = local_10;
          return 1;
        }
      }
      FUN_10005c30();
      FUN_100d01f0();
    }
    local_8 = CONCAT31(local_8._1_3_,1);
    FUN_100d0fa0();
  }
  local_8 = local_8 & 0xffffff00;
  FString::~FString(local_38);
  ExceptionList = local_10;
  return 0;
}


// ==== 100d27af Catch@100d27af

void Catch_100d27af(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x20) = *(undefined4 *)(unaff_EBP + -0x28);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x20,&DAT_102a47f0);
}


// ==== 100d27c3 Catch@100d27c3

void Catch_100d27c3(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"XMLUIManager::LoadXML");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100d27e0 FUN_100d27e0

undefined4 FUN_100d27e0(void)

{
  int iVar1;
  undefined4 uVar2;
  wchar_t *pwVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101f8630;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  iVar1 = FUN_100d1e40();
  if (iVar1 == 0) {
    pwVar3 = L"NConsoleWnd:Failed to destroy windows";
  }
  else {
    FUN_100d22d0();
    iVar1 = FUN_100d2440();
    if (iVar1 == 0) {
      pwVar3 = L"NConsoleWnd:Failed to load XML";
    }
    else {
      iVar1 = FUN_100d0010();
      if (iVar1 == 0) {
        pwVar3 = L"NConsoleWnd:Failed to create windows";
      }
      else {
        iVar1 = FUN_100d1d60();
        if (iVar1 != 0) {
          (**(code **)(*DAT_103663bc + 0x2cc))();
          ExceptionList = local_10;
          return 1;
        }
        pwVar3 = L"NConsoleWnd:Failed to unload XML";
      }
    }
  }
  uVar2 = FUN_10005c30(pwVar3);
  FUN_100d01f0(uVar2);
  ExceptionList = local_10;
  return 0;
}


// ==== 100d28a8 Catch@100d28a8

void Catch_100d28a8(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 100d28bc Catch@100d28bc

void Catch_100d28bc(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"XMLUIManager::ReloadUIScripts");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100d28e0 FUN_100d28e0

void FUN_100d28e0(FString *param_1)

{
  int iVar1;
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101f8650;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  iVar1 = FString::operator!=(param_1,(ushort *)L"undefined");
  if (iVar1 == 0) {
    FString::operator=((FString *)(in_ECX + 0x88),(ushort *)&DAT_1022f9f8);
  }
  else {
    FString::operator=((FString *)(in_ECX + 0x88),param_1);
  }
  ExceptionList = local_10;
  return;
}


// ==== 100d295d Catch@100d295d

void Catch_100d295d(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 100d2971 Catch@100d2971

void Catch_100d2971(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"XMLBarCtrlData::SetForeTexture");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100d2990 FUN_100d2990

void FUN_100d2990(FString *param_1)

{
  int iVar1;
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101f8670;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  iVar1 = FString::operator!=(param_1,(ushort *)L"undefined");
  if (iVar1 == 0) {
    FString::operator=((FString *)(in_ECX + 0x94),(ushort *)&DAT_1022f9f8);
  }
  else {
    FString::operator=((FString *)(in_ECX + 0x94),param_1);
  }
  ExceptionList = local_10;
  return;
}


// ==== 100d2a0d Catch@100d2a0d

void Catch_100d2a0d(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 100d2a21 Catch@100d2a21

void Catch_100d2a21(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"XMLBarCtrlData::SetBackTexture");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100d2a40 FUN_100d2a40

void FUN_100d2a40(uint param_1)

{
  int in_ECX;
  
  *(uint *)(in_ECX + 0xa0) = -(uint)(param_1 != 0xffffd8f1) & param_1;
  return;
}


// ==== 100d2aa4 Catch@100d2aa4

void Catch_100d2aa4(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 100d2ab8 Catch@100d2ab8

void Catch_100d2ab8(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"XMLBarCtrlData::SetUSize");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100d2ae0 FUN_100d2ae0

void FUN_100d2ae0(uint param_1)

{
  int in_ECX;
  
  *(uint *)(in_ECX + 0xa4) = -(uint)(param_1 != 0xffffd8f1) & param_1;
  return;
}


// ==== 100d2b44 Catch@100d2b44

void Catch_100d2b44(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 100d2b58 Catch@100d2b58

void Catch_100d2b58(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"XMLBarCtrlData::SetVSize");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100d2b80 FUN_100d2b80

void FUN_100d2b80(void)

{
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101f86d0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_100ef430();
  FString::operator=((FString *)(in_ECX + 0x88),(ushort *)L"undefined");
  FString::operator=((FString *)(in_ECX + 0x94),(ushort *)L"undefined");
  *(undefined4 *)(in_ECX + 0xa0) = 0xffffd8f1;
  *(undefined4 *)(in_ECX + 0xa4) = 0xffffd8f1;
  ExceptionList = local_10;
  return;
}


// ==== 100d2c05 Catch@100d2c05

void Catch_100d2c05(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 100d2c19 Catch@100d2c19

void Catch_100d2c19(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"XMLBarCtrlData::Init");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100d2c40 FUN_100d2c40

void FUN_100d2c40(void)

{
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101f86f0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_100efb90();
  FString::operator=((FString *)(in_ECX + 0x88),(ushort *)L"undefined");
  FString::operator=((FString *)(in_ECX + 0x94),(ushort *)L"undefined");
  *(undefined4 *)(in_ECX + 0xa0) = 0xffffd8f1;
  *(undefined4 *)(in_ECX + 0xa4) = 0xffffd8f1;
  ExceptionList = local_10;
  return;
}


// ==== 100d2cc5 Catch@100d2cc5

void Catch_100d2cc5(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 100d2cd9 Catch@100d2cd9

void Catch_100d2cd9(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"XMLBarCtrlData::Destroy");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100d2d00 FUN_100d2d00

void FUN_100d2d00(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  UObject::StaticAllocateObject
            (&DAT_10357340,param_2,param_3,param_4,0,*(undefined4 *)GError_exref,0,0);
  return;
}


// ==== 100d2d30 FUN_100d2d30

void FUN_100d2d30(void)

{
  undefined4 *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_101f8736;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_100ef520();
  local_8 = 0;
  *in_ECX = XMLBarCtrlData::vftable;
  FString::FString((FString *)(in_ECX + 0x22));
  local_8._0_1_ = 1;
  FString::FString((FString *)(in_ECX + 0x25));
  local_8 = CONCAT31(local_8._1_3_,3);
  FUN_100d2b80();
  ExceptionList = local_10;
  return;
}


// ==== 100d2db8 Catch@100d2db8

void Catch_100d2db8(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 100d2dcc Catch@100d2dcc

void Catch_100d2dcc(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"XMLBarCtrlData::XMLBarCtrlData");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100d2df0 FUN_100d2df0

void FUN_100d2df0(void)

{
  undefined4 *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  puStack_c = &LAB_101f8786;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *in_ECX = XMLBarCtrlData::vftable;
  local_8 = 3;
  FUN_100d2c40();
  local_8 = 1;
  FString::~FString((FString *)(in_ECX + 0x25));
  local_8 = local_8 & 0xffffff00;
  FString::~FString((FString *)(in_ECX + 0x22));
  local_8 = 0xffffffff;
  FUN_100efc70();
  ExceptionList = local_10;
  return;
}


// ==== 100d2e79 Catch@100d2e79

void Catch_100d2e79(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 100d2e8d Catch@100d2e8d

void Catch_100d2e8d(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"XMLBarCtrlData::~XMLBarCtrlData");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100d2eb0 FUN_100d2eb0

void FUN_100d2eb0(FArchive *param_1)

{
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101f87b0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_100ef8c0(param_1);
  operator<<(param_1,(FString *)(in_ECX + 0x88));
  operator<<(param_1,(FString *)(in_ECX + 0x94));
  FUN_100052e0(param_1,in_ECX + 0xa0);
  FUN_100052e0(param_1,in_ECX + 0xa4);
  ExceptionList = local_10;
  return;
}


// ==== 100d2f3f Catch@100d2f3f

void Catch_100d2f3f(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 100d2f53 Catch@100d2f53

void Catch_100d2f53(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"XMLBarCtrlData::Serialize");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100d2f70 FUN_100d2f70

void FUN_100d2f70(byte param_1)

{
  FUN_100d2df0();
  if ((param_1 & 1) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))();
  }
  return;
}


// ==== 100d2fa0 FUN_100d2fa0

undefined4 FUN_100d2fa0(undefined4 param_1)

{
  int iVar1;
  FString *this;
  undefined4 uVar2;
  int *in_ECX;
  uint uStack_54;
  FString local_44 [12];
  FString local_38 [12];
  FString local_2c [16];
  undefined1 *local_1c;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101f8818;
  local_10 = ExceptionList;
  uStack_54 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_54;
  ExceptionList = &local_10;
  local_8._0_1_ = 1;
  local_8._1_3_ = 0;
  local_1c = &stack0xffffffa0;
  FString::FString((FString *)&stack0xffffffa0,(FString *)&stack0x00000008);
  local_8._0_1_ = 1;
  iVar1 = FUN_100efd60(param_1);
  if (iVar1 == 0) {
    this = (FString *)(**(code **)(*in_ECX + 0x44))();
    FString::operator*(this);
    FUN_10005c30();
    FUN_100d01f0();
    local_8 = 0xffffffff;
    FString::~FString((FString *)&stack0x00000008);
    ExceptionList = local_10;
    return 0;
  }
  FString::FString(local_2c,(ushort *)L"ForeTexture");
  local_8._0_1_ = 3;
  FUN_100cd860();
  local_8._0_1_ = 5;
  FString::~FString(local_2c);
  (**(code **)(*in_ECX + 0x78))();
  FString::FString(local_2c,(ushort *)L"BackTexture");
  local_8._0_1_ = 6;
  FUN_100cd860();
  local_8._0_1_ = 8;
  FString::~FString(local_2c);
  (**(code **)(*in_ECX + 0x7c))();
  FString::FString(local_2c,(ushort *)L"USize");
  local_8._0_1_ = 9;
  FUN_100cd980();
  local_8._0_1_ = 8;
  FString::~FString(local_2c);
  (**(code **)(*in_ECX + 0x80))();
  FString::FString(local_2c,(ushort *)L"VSize");
  local_8._0_1_ = 10;
  uVar2 = FUN_100cd980(local_2c);
  local_8._0_1_ = 8;
  FString::~FString(local_2c);
  (**(code **)(*in_ECX + 0x84))(uVar2);
  local_8._0_1_ = 5;
  FString::~FString(local_38);
  local_8 = CONCAT31(local_8._1_3_,1);
  FString::~FString(local_44);
  local_8 = 0xffffffff;
  FString::~FString((FString *)&stack0x00000008);
  ExceptionList = local_10;
  return 1;
}


// ==== 100d3177 Catch@100d3177

void Catch_100d3177(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 100d318b Catch@100d318b

void Catch_100d318b(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"XMLBarCtrlData::Process");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100d31b0 FUN_100d31b0

undefined4 FUN_100d31b0(undefined4 param_1,undefined4 param_2)

{
  UPackage *pUVar1;
  int iVar2;
  FString *pFVar3;
  undefined4 uVar4;
  int *in_ECX;
  wchar_t *pwStack_38;
  ushort *puStack_34;
  uint uStack_30;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101f8840;
  local_10 = ExceptionList;
  uStack_30 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_8 = 0;
  puStack_34 = (ushort *)0x0;
  pwStack_38 = (wchar_t *)in_ECX;
  FName::FName((FName *)&pwStack_38,0);
  pUVar1 = UObject::GetTransientPackage();
  iVar2 = FUN_100d2d00(0x2f0,pUVar1);
  if (iVar2 != 0) {
    puStack_34 = (ushort *)in_ECX[0x29];
    pwStack_38 = (wchar_t *)in_ECX[0x28];
    iVar2 = FUN_100033b0(in_ECX + 0x22,in_ECX + 0x25);
    if (iVar2 != 0) {
      in_ECX[0x1f] = iVar2;
      puStack_34 = (ushort *)param_2;
      pwStack_38 = (wchar_t *)param_1;
      iVar2 = FUN_100f0800();
      if (iVar2 != 0) {
        ExceptionList = local_10;
        return 1;
      }
      puStack_34 = (ushort *)0x100d328d;
      pFVar3 = (FString *)(**(code **)(*in_ECX + 0x44))();
      puStack_34 = (ushort *)0x100d3295;
      puStack_34 = FString::operator*(pFVar3);
      pwStack_38 = L"XMLBarCtrlData(%s):failed to create default property!!";
      goto LAB_100d324a;
    }
  }
  puStack_34 = (ushort *)0x100d323c;
  pFVar3 = (FString *)(**(code **)(*in_ECX + 0x44))();
  puStack_34 = (ushort *)0x100d3244;
  puStack_34 = FString::operator*(pFVar3);
  pwStack_38 = L"XMLBarCtrlData(%s):creation failed!!";
LAB_100d324a:
  uVar4 = FUN_10005c30();
  FUN_100d01f0(uVar4);
  ExceptionList = local_10;
  return 0;
}


// ==== 100d32b6 Catch@100d32b6

void Catch_100d32b6(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 100d32ca Catch@100d32ca

void Catch_100d32ca(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"XMLBarCtrlData::Create");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100d32f0 FUN_100d32f0

void FUN_100d32f0(void)

{
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101f8869;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 1;
  FString::operator=((FString *)(in_ECX + 0x88),(FString *)&stack0x00000004);
  local_8 = 0xffffffff;
  FString::~FString((FString *)&stack0x00000004);
  ExceptionList = local_10;
  return;
}


// ==== 100d335a Catch@100d335a

void Catch_100d335a(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 100d336e Catch@100d336e

void Catch_100d336e(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"XMLButtonData::SetNormalTex");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100d3390 FUN_100d3390

void FUN_100d3390(void)

{
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101f8899;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 1;
  FString::operator=((FString *)(in_ECX + 0x94),(FString *)&stack0x00000004);
  local_8 = 0xffffffff;
  FString::~FString((FString *)&stack0x00000004);
  ExceptionList = local_10;
  return;
}


// ==== 100d33fa Catch@100d33fa

void Catch_100d33fa(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 100d340e Catch@100d340e

void Catch_100d340e(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"XMLButtonData::SetPushedTex");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100d3430 FUN_100d3430

void FUN_100d3430(void)

{
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101f88c9;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 1;
  FString::operator=((FString *)(in_ECX + 0xa0),(FString *)&stack0x00000004);
  local_8 = 0xffffffff;
  FString::~FString((FString *)&stack0x00000004);
  ExceptionList = local_10;
  return;
}


// ==== 100d349a Catch@100d349a

void Catch_100d349a(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 100d34ae Catch@100d34ae

void Catch_100d34ae(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"XMLButtonData::SetHighlightTex");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100d34d0 FUN_100d34d0

void FUN_100d34d0(void)

{
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101f88f9;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 1;
  FString::operator=((FString *)(in_ECX + 0xac),(FString *)&stack0x00000004);
  local_8 = 0xffffffff;
  FString::~FString((FString *)&stack0x00000004);
  ExceptionList = local_10;
  return;
}


// ==== 100d353a Catch@100d353a

void Catch_100d353a(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 100d354e Catch@100d354e

void Catch_100d354e(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"XMLButtonData::SetDropTex");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100d3570 FUN_100d3570

void FUN_100d3570(undefined4 param_1)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 0xc4) = param_1;
  return;
}


// ==== 100d35c6 Catch@100d35c6

void Catch_100d35c6(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 100d35da Catch@100d35da

void Catch_100d35da(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"XMLButtonData::SetDisableTime");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100d3600 FUN_100d3600

void FUN_100d3600(undefined4 param_1)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 0xb8) = param_1;
  return;
}


// ==== 100d3656 Catch@100d3656

void Catch_100d3656(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 100d366a Catch@100d366a

void Catch_100d366a(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"XMLButtonData::SetButtonName");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100d3690 FUN_100d3690

FString * FUN_100d3690(FString *param_1)

{
  int iVar1;
  FString *this;
  int in_ECX;
  wchar_t *pwVar2;
  uint uStack_3c;
  FString local_2c [20];
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101f8983;
  local_10 = ExceptionList;
  uStack_3c = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_3c;
  ExceptionList = &local_10;
  local_18 = 0;
  local_8 = 1;
  iVar1 = FString::operator!=((FString *)(in_ECX + 0x88),(ushort *)L"undefined");
  if (iVar1 == 0) {
    if (*(int *)(in_ECX + 0x80) != 0) {
      pwVar2 = L"Button";
      this = (FString *)(**(code **)(**(int **)(in_ECX + 0x80) + 0x40))();
      iVar1 = FString::operator==(this,(ushort *)pwVar2);
      if (iVar1 != 0) {
        (**(code **)(**(int **)(in_ECX + 0x80) + 0x8c))(local_2c);
        local_8._0_1_ = 2;
        iVar1 = FString::operator!=(local_2c,(ushort *)L"undefined");
        if (iVar1 != 0) {
          FString::FString(param_1,local_2c);
          local_18 = 1;
          local_8 = CONCAT31(local_8._1_3_,1);
          FString::~FString(local_2c);
          ExceptionList = local_10;
          return param_1;
        }
        local_8 = CONCAT31(local_8._1_3_,1);
        FString::~FString(local_2c);
      }
    }
    FString::FString(param_1,(ushort *)L"undefined");
  }
  else {
    FString::FString(param_1,(FString *)(in_ECX + 0x88));
  }
  ExceptionList = local_10;
  return param_1;
}


// ==== 100d379d Catch@100d379d

void Catch_100d379d(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 100d37b1 Catch@100d37b1

void Catch_100d37b1(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"XMLButtonData::GetNormalTex");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100d37d0 FUN_100d37d0

FString * FUN_100d37d0(FString *param_1)

{
  int iVar1;
  FString *this;
  int in_ECX;
  wchar_t *pwVar2;
  uint uStack_3c;
  FString local_2c [20];
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101f89c3;
  local_10 = ExceptionList;
  uStack_3c = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_3c;
  ExceptionList = &local_10;
  local_18 = 0;
  local_8 = 1;
  iVar1 = FString::operator!=((FString *)(in_ECX + 0x94),(ushort *)L"undefined");
  if (iVar1 == 0) {
    if (*(int *)(in_ECX + 0x80) != 0) {
      pwVar2 = L"Button";
      this = (FString *)(**(code **)(**(int **)(in_ECX + 0x80) + 0x40))();
      iVar1 = FString::operator==(this,(ushort *)pwVar2);
      if (iVar1 != 0) {
        (**(code **)(**(int **)(in_ECX + 0x80) + 0x90))(local_2c);
        local_8._0_1_ = 2;
        iVar1 = FString::operator!=(local_2c,(ushort *)L"undefined");
        if (iVar1 != 0) {
          FString::FString(param_1,local_2c);
          local_18 = 1;
          local_8 = CONCAT31(local_8._1_3_,1);
          FString::~FString(local_2c);
          ExceptionList = local_10;
          return param_1;
        }
        local_8 = CONCAT31(local_8._1_3_,1);
        FString::~FString(local_2c);
      }
    }
    FString::FString(param_1,(ushort *)L"undefined");
  }
  else {
    FString::FString(param_1,(FString *)(in_ECX + 0x94));
  }
  ExceptionList = local_10;
  return param_1;
}


// ==== 100d38dd Catch@100d38dd

void Catch_100d38dd(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 100d38f1 Catch@100d38f1

void Catch_100d38f1(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"XMLButtonData::GetPushedTex");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100d3910 FUN_100d3910

FString * FUN_100d3910(FString *param_1)

{
  int iVar1;
  FString *this;
  int in_ECX;
  wchar_t *pwVar2;
  uint uStack_3c;
  FString local_2c [20];
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101f8a03;
  local_10 = ExceptionList;
  uStack_3c = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_3c;
  ExceptionList = &local_10;
  local_18 = 0;
  local_8 = 1;
  iVar1 = FString::operator!=((FString *)(in_ECX + 0xa0),(ushort *)L"undefined");
  if (iVar1 == 0) {
    if (*(int *)(in_ECX + 0x80) != 0) {
      pwVar2 = L"Button";
      this = (FString *)(**(code **)(**(int **)(in_ECX + 0x80) + 0x40))();
      iVar1 = FString::operator==(this,(ushort *)pwVar2);
      if (iVar1 != 0) {
        (**(code **)(**(int **)(in_ECX + 0x80) + 0x94))(local_2c);
        local_8._0_1_ = 2;
        iVar1 = FString::operator!=(local_2c,(ushort *)L"undefined");
        if (iVar1 != 0) {
          FString::FString(param_1,local_2c);
          local_18 = 1;
          local_8 = CONCAT31(local_8._1_3_,1);
          FString::~FString(local_2c);
          ExceptionList = local_10;
          return param_1;
        }
        local_8 = CONCAT31(local_8._1_3_,1);
        FString::~FString(local_2c);
      }
    }
    FString::FString(param_1,(ushort *)L"undefined");
  }
  else {
    FString::FString(param_1,(FString *)(in_ECX + 0xa0));
  }
  ExceptionList = local_10;
  return param_1;
}


// ==== 100d3a1d Catch@100d3a1d

void Catch_100d3a1d(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 100d3a31 Catch@100d3a31

void Catch_100d3a31(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"XMLButtonData::GetHighlightTex");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100d3a50 FUN_100d3a50

FString * FUN_100d3a50(FString *param_1)

{
  int iVar1;
  FString *this;
  int in_ECX;
  wchar_t *pwVar2;
  uint uStack_3c;
  FString local_2c [20];
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101f8a43;
  local_10 = ExceptionList;
  uStack_3c = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_3c;
  ExceptionList = &local_10;
  local_18 = 0;
  local_8 = 1;
  iVar1 = FString::operator!=((FString *)(in_ECX + 0xac),(ushort *)L"undefined");
  if (iVar1 == 0) {
    if (*(int *)(in_ECX + 0x80) != 0) {
      pwVar2 = L"Button";
      this = (FString *)(**(code **)(**(int **)(in_ECX + 0x80) + 0x40))();
      iVar1 = FString::operator==(this,(ushort *)pwVar2);
      if (iVar1 != 0) {
        (**(code **)(**(int **)(in_ECX + 0x80) + 0x98))(local_2c);
        local_8._0_1_ = 2;
        iVar1 = FString::operator!=(local_2c,(ushort *)L"undefined");
        if (iVar1 != 0) {
          FString::FString(param_1,local_2c);
          local_18 = 1;
          local_8 = CONCAT31(local_8._1_3_,1);
          FString::~FString(local_2c);
          ExceptionList = local_10;
          return param_1;
        }
        local_8 = CONCAT31(local_8._1_3_,1);
        FString::~FString(local_2c);
      }
    }
    FString::FString(param_1,(ushort *)L"undefined");
  }
  else {
    FString::FString(param_1,(FString *)(in_ECX + 0xac));
  }
  ExceptionList = local_10;
  return param_1;
}


// ==== 100d3b5d Catch@100d3b5d

void Catch_100d3b5d(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 100d3b71 Catch@100d3b71

void Catch_100d3b71(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"XMLButtonData::GetDropTex");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100d3b90 FUN_100d3b90

void FUN_100d3b90(undefined4 param_1)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 0xbc) = param_1;
  return;
}


// ==== 100d3be6 Catch@100d3be6

void Catch_100d3be6(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 100d3bfa Catch@100d3bfa

void Catch_100d3bfa(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"XMLButtonData::SetNoHighlight");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100d3c20 FUN_100d3c20

undefined4 FUN_100d3c20(void)

{
  int in_ECX;
  
  return *(undefined4 *)(in_ECX + 0xc4);
}


// ==== 100d3c6a Catch@100d3c6a

void Catch_100d3c6a(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 100d3c7e Catch@100d3c7e

void Catch_100d3c7e(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"XMLButtonData::GetDisableTime");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100d3ca0 FUN_100d3ca0

int FUN_100d3ca0(void)

{
  int *piVar1;
  int iVar2;
  int *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101f8aa0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  iVar2 = in_ECX[0x2f];
  if (iVar2 == -1) {
    piVar1 = (int *)(**(code **)(*in_ECX + 0x6c))();
    if ((piVar1 != (int *)0x0) && (iVar2 = (**(code **)(*piVar1 + 0xa0))(), iVar2 != -1)) {
      ExceptionList = local_10;
      return iVar2;
    }
    iVar2 = 0;
  }
  ExceptionList = local_10;
  return iVar2;
}


// ==== 100d3d0d Catch@100d3d0d

void Catch_100d3d0d(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 100d3d21 Catch@100d3d21

void Catch_100d3d21(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"XMLButtonData::GetNoHighlight");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100d3d40 FUN_100d3d40

void FUN_100d3d40(void)

{
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101f8ac0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_100ef430();
  FString::operator=((FString *)(in_ECX + 0x88),(ushort *)L"undefined");
  FString::operator=((FString *)(in_ECX + 0x94),(ushort *)L"undefined");
  FString::operator=((FString *)(in_ECX + 0xa0),(ushort *)L"undefined");
  FString::operator=((FString *)(in_ECX + 0xac),(ushort *)L"undefined");
  *(undefined4 *)(in_ECX + 0xbc) = 0xffffffff;
  *(undefined4 *)(in_ECX + 0xc0) = 0xffffffff;
  *(undefined4 *)(in_ECX + 0xc4) = 0xffffd8f1;
  ExceptionList = local_10;
  return;
}


// ==== 100d3deb Catch@100d3deb

void Catch_100d3deb(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 100d3dff Catch@100d3dff

void Catch_100d3dff(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"XMLButtonData::Init");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100d3e20 FUN_100d3e20

void FUN_100d3e20(void)

{
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101f8ae0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_100efb90();
  *(undefined4 *)(in_ECX + 0xbc) = 0xffffffff;
  *(undefined4 *)(in_ECX + 0xc0) = 0xffffffff;
  ExceptionList = local_10;
  return;
}


// ==== 100d3e7d Catch@100d3e7d

void Catch_100d3e7d(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 100d3e91 Catch@100d3e91

void Catch_100d3e91(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"XMLButtonData::Destroy");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100d3eb0 FUN_100d3eb0

void FUN_100d3eb0(undefined4 param_1)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 0xc0) = param_1;
  return;
}


// ==== 100d3f06 Catch@100d3f06

void Catch_100d3f06(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 100d3f1a Catch@100d3f1a

void Catch_100d3f1a(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"XMLButtonData::SetDefaultSoundOn");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100d3f40 FUN_100d3f40

int FUN_100d3f40(void)

{
  int iVar1;
  int in_ECX;
  
  iVar1 = *(int *)(in_ECX + 0xc0);
  if (iVar1 == -1) {
    iVar1 = 1;
  }
  return iVar1;
}


// ==== 100d3f94 Catch@100d3f94

void Catch_100d3f94(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 100d3fa8 Catch@100d3fa8

void Catch_100d3fa8(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"XMLButtonData::GetDefaultSoundOn");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100d3fd0 FUN_100d3fd0

void FUN_100d3fd0(void)

{
  undefined4 *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_101f8b84;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_100ef520();
  local_8 = 0;
  *in_ECX = XMLButtonData::vftable;
  FString::FString((FString *)(in_ECX + 0x22));
  local_8._0_1_ = 1;
  FString::FString((FString *)(in_ECX + 0x25));
  local_8._0_1_ = 2;
  FString::FString((FString *)(in_ECX + 0x28));
  local_8._0_1_ = 3;
  FString::FString((FString *)(in_ECX + 0x2b));
  local_8 = CONCAT31(local_8._1_3_,5);
  FUN_100d3d40();
  ExceptionList = local_10;
  return;
}


// ==== 100d4078 Catch@100d4078

void Catch_100d4078(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 100d408c Catch@100d408c

void Catch_100d408c(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"XMLButtonData::XMLButtonData");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100d40b0 FUN_100d40b0

void FUN_100d40b0(void)

{
  undefined4 *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_101f8be4;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *in_ECX = XMLButtonData::vftable;
  local_8 = 5;
  FUN_100d3e20();
  local_8 = 3;
  FString::~FString((FString *)(in_ECX + 0x2b));
  local_8._0_1_ = 2;
  FString::~FString((FString *)(in_ECX + 0x28));
  local_8._0_1_ = 1;
  FString::~FString((FString *)(in_ECX + 0x25));
  local_8 = (uint)local_8._1_3_ << 8;
  FString::~FString((FString *)(in_ECX + 0x22));
  local_8 = 0xffffffff;
  FUN_100efc70();
  ExceptionList = local_10;
  return;
}


// ==== 100d4159 Catch@100d4159

void Catch_100d4159(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 100d416d Catch@100d416d

void Catch_100d416d(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"XMLButtonData::~XMLButtonData");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100d4190 FUN_100d4190

void FUN_100d4190(FArchive *param_1)

{
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101f8c00;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_100ef8c0(param_1);
  operator<<(param_1,(FString *)(in_ECX + 0x88));
  operator<<(param_1,(FString *)(in_ECX + 0x94));
  operator<<(param_1,(FString *)(in_ECX + 0xa0));
  operator<<(param_1,(FString *)(in_ECX + 0xac));
  FUN_100052e0(param_1,in_ECX + 0xb8);
  FUN_100052e0(param_1,in_ECX + 0xbc);
  FUN_100052e0(param_1,in_ECX + 0xc0);
  FUN_100052e0(param_1,in_ECX + 0xc4);
  ExceptionList = local_10;
  return;
}


// ==== 100d424d Catch@100d424d

void Catch_100d424d(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 100d4261 Catch@100d4261

void Catch_100d4261(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"XMLButtonData::Serialize");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100d4280 FUN_100d4280

void FUN_100d4280(byte param_1)

{
  FUN_100d40b0();
  if ((param_1 & 1) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))();
  }
  return;
}


// ==== 100d42b0 FUN_100d42b0

undefined4 FUN_100d42b0(undefined4 param_1)

{
  int iVar1;
  FString *pFVar2;
  int *in_ECX;
  uint uStack_48;
  FString local_38 [12];
  FString local_2c [16];
  undefined1 *local_1c;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101f8c9e;
  local_10 = ExceptionList;
  uStack_48 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_48;
  ExceptionList = &local_10;
  local_8._0_1_ = 1;
  local_8._1_3_ = 0;
  local_1c = &stack0xffffffac;
  FString::FString((FString *)&stack0xffffffac,(FString *)&stack0x00000008);
  local_8._0_1_ = 1;
  iVar1 = FUN_100efd60(param_1);
  if (iVar1 == 0) {
    pFVar2 = (FString *)(**(code **)(*in_ECX + 0x44))();
    FString::operator*(pFVar2);
    FUN_10005c30();
    FUN_100d01f0();
    local_8 = 0xffffffff;
    FString::~FString((FString *)&stack0x00000008);
    ExceptionList = local_10;
    return 0;
  }
  FString::FString(local_2c,(ushort *)L"buttonName");
  local_8._0_1_ = 3;
  iVar1 = FUN_100cd980();
  in_ECX[0x2e] = iVar1;
  local_8._0_1_ = 1;
  FString::~FString(local_2c);
  FString::FString(local_2c,(ushort *)L"normalTex");
  local_8._0_1_ = 4;
  pFVar2 = (FString *)FUN_100cd860();
  local_8._0_1_ = 5;
  FString::operator=((FString *)(in_ECX + 0x22),pFVar2);
  local_8._0_1_ = 4;
  FString::~FString(local_38);
  local_8._0_1_ = 1;
  FString::~FString(local_2c);
  FString::FString(local_2c,(ushort *)L"pushedTex");
  local_8._0_1_ = 6;
  pFVar2 = (FString *)FUN_100cd860();
  local_8._0_1_ = 7;
  FString::operator=((FString *)(in_ECX + 0x25),pFVar2);
  local_8._0_1_ = 6;
  FString::~FString(local_38);
  local_8._0_1_ = 1;
  FString::~FString(local_2c);
  FString::FString(local_2c,(ushort *)L"highlightTex");
  local_8._0_1_ = 8;
  pFVar2 = (FString *)FUN_100cd860();
  local_8._0_1_ = 9;
  FString::operator=((FString *)(in_ECX + 0x28),pFVar2);
  local_8._0_1_ = 8;
  FString::~FString(local_38);
  local_8._0_1_ = 1;
  FString::~FString(local_2c);
  FString::FString(local_2c,(ushort *)L"dropTex");
  local_8._0_1_ = 10;
  pFVar2 = (FString *)FUN_100cd860();
  local_8._0_1_ = 0xb;
  FString::operator=((FString *)(in_ECX + 0x2b),pFVar2);
  local_8._0_1_ = 10;
  FString::~FString(local_38);
  local_8._0_1_ = 1;
  FString::~FString(local_2c);
  FString::FString(local_2c,(ushort *)L"noHighlight");
  local_8._0_1_ = 0xc;
  FUN_100cda90();
  local_8._0_1_ = 1;
  FString::~FString(local_2c);
  (**(code **)(*in_ECX + 0x9c))();
  FString::FString(local_2c,(ushort *)L"defaultSoundOn");
  local_8._0_1_ = 0xd;
  FUN_100cda90();
  local_8._0_1_ = 1;
  FString::~FString(local_2c);
  (**(code **)(*in_ECX + 0xa4))();
  FString::FString(local_2c,(ushort *)L"DisableTime");
  local_8._0_1_ = 0xe;
  FUN_100cd980();
  local_8 = CONCAT31(local_8._1_3_,1);
  FString::~FString(local_2c);
  (**(code **)(*in_ECX + 0xac))();
  local_8 = 0xffffffff;
  FString::~FString((FString *)&stack0x00000008);
  ExceptionList = local_10;
  return 1;
}


// ==== 100d4590 Catch@100d4590

void Catch_100d4590(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 100d45a4 Catch@100d45a4

void Catch_100d45a4(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"XMLButtonData::Process");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100d45d0 FUN_100d45d0

undefined4 FUN_100d45d0(FString *param_1)

{
  int iVar1;
  UPackage *pUVar2;
  FString *pFVar3;
  undefined4 uVar4;
  int iVar5;
  int *in_ECX;
  FString *extraout_ECX;
  FString *extraout_ECX_00;
  FString *extraout_ECX_01;
  FString *extraout_ECX_02;
  FString *pFStack_90;
  uint uStack_78;
  FString local_68 [12];
  FString local_5c [12];
  FString local_50 [12];
  FString local_44 [12];
  FString local_38 [16];
  undefined1 *local_28;
  undefined4 local_20;
  int local_1c;
  uint local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_101f8cfe;
  local_10 = ExceptionList;
  uStack_78 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_78;
  ExceptionList = &local_10;
  local_18 = 0;
  local_8 = 0;
  local_20 = 0;
  iVar1 = (**(code **)(*in_ECX + 0xa0))();
  if (iVar1 != 0) {
    local_20 = 2;
  }
  local_1c = 0;
  (**(code **)(*in_ECX + 0x8c))();
  local_8._0_1_ = 1;
  (**(code **)(*in_ECX + 0x90))();
  local_8._0_1_ = 2;
  (**(code **)(*in_ECX + 0x94))();
  local_8._0_1_ = 3;
  (**(code **)(*in_ECX + 0x98))();
  local_8 = CONCAT31(local_8._1_3_,4);
  pFStack_90 = (FString *)0x100d4681;
  iVar1 = FString::operator!=(local_5c,(ushort *)L"undefined");
  if (iVar1 != 0) {
    pFStack_90 = (FString *)0x100d4697;
    iVar1 = FString::operator!=(local_50,(ushort *)L"undefined");
    if (iVar1 != 0) {
      pFStack_90 = (FString *)0x100d46ad;
      iVar1 = FString::operator==(local_44,(ushort *)L"undefined");
      if (iVar1 == 0) {
LAB_100d4702:
        pFStack_90 = (FString *)0x100d4710;
        iVar1 = FString::operator!=(local_44,(ushort *)L"undefined");
        if (iVar1 != 0) {
          pFStack_90 = (FString *)0x100d4722;
          iVar1 = FString::operator==(local_38,(ushort *)L"undefined");
          if (iVar1 != 0) {
            local_28 = (undefined1 *)&pFStack_90;
            pFStack_90 = extraout_ECX_00;
            FName::FName((FName *)&pFStack_90,0);
            pUVar2 = UObject::GetTransientPackage();
            iVar1 = FUN_1000a130(0x33c,pUVar2);
            if (iVar1 == 0) goto LAB_100d4870;
            pFStack_90 = local_44;
            iVar1 = FUN_10006a90(local_5c,local_50);
            local_1c = iVar1;
            goto LAB_100d4877;
          }
        }
        pFStack_90 = (FString *)0x100d4777;
        iVar1 = FString::operator==(local_44,(ushort *)L"undefined");
        if (iVar1 != 0) {
          pFStack_90 = (FString *)0x100d478d;
          iVar1 = FString::operator!=(local_38,(ushort *)L"undefined");
          if (iVar1 != 0) {
            local_28 = (undefined1 *)&pFStack_90;
            pFStack_90 = extraout_ECX_01;
            FName::FName((FName *)&pFStack_90,0);
            pUVar2 = UObject::GetTransientPackage();
            iVar1 = FUN_1000a130(0x33c,pUVar2);
            if (iVar1 == 0) {
              iVar1 = 0;
            }
            else {
              pFStack_90 = (FString *)0x100d47c7;
              uVar4 = FString::FString(local_68,(ushort *)&DAT_1022f9f8);
              local_8 = CONCAT31(local_8._1_3_,5);
              local_18 = 1;
              pFStack_90 = local_38;
              iVar1 = FUN_10006b80(local_5c,local_50,uVar4);
            }
            local_8 = 4;
            local_1c = iVar1;
            if ((local_18 & 1) != 0) {
              local_18 = local_18 & 0xfffffffe;
              FString::~FString(local_68);
            }
            goto LAB_100d4877;
          }
        }
        pFStack_90 = (FString *)0x100d481a;
        iVar1 = FString::operator!=(local_44,(ushort *)L"undefined");
        if (iVar1 != 0) {
          pFStack_90 = (FString *)0x100d482c;
          iVar1 = FString::operator!=(local_38,(ushort *)L"undefined");
          if (iVar1 != 0) {
            local_28 = (undefined1 *)&pFStack_90;
            pFStack_90 = extraout_ECX_02;
            FName::FName((FName *)&pFStack_90,0);
            pUVar2 = UObject::GetTransientPackage();
            iVar1 = FUN_1000a130(0x33c,pUVar2);
            if (iVar1 == 0) goto LAB_100d4870;
            pFStack_90 = local_38;
            iVar1 = FUN_10006b80(local_5c,local_50,local_44);
            local_1c = iVar1;
            goto LAB_100d4877;
          }
        }
      }
      else {
        pFStack_90 = (FString *)0x100d46bf;
        iVar1 = FString::operator==(local_38,(ushort *)L"undefined");
        if (iVar1 == 0) goto LAB_100d4702;
        local_28 = (undefined1 *)&pFStack_90;
        pFStack_90 = extraout_ECX;
        FName::FName((FName *)&pFStack_90,0);
        pUVar2 = UObject::GetTransientPackage();
        iVar1 = FUN_1000a130(0x33c,pUVar2);
        if (iVar1 == 0) {
LAB_100d4870:
          iVar1 = 0;
          local_1c = iVar1;
        }
        else {
          pFStack_90 = local_50;
          iVar1 = FUN_10006980(local_5c);
          local_1c = iVar1;
        }
LAB_100d4877:
        if (iVar1 != 0) {
          if (in_ECX[0x2e] != -9999) {
            pFStack_90 = (FString *)0x100d48ff;
            FUN_10003cf0();
          }
          iVar5 = (**(code **)(*in_ECX + 0xa8))();
          if (iVar5 == 0) {
            *(int *)(iVar1 + 0x324) = in_ECX[0x30];
          }
          iVar5 = (**(code **)(*in_ECX + 0xb0))();
          if (iVar5 != -9999) {
            pFStack_90 = (FString *)0x100d4936;
            FUN_10003720();
          }
          in_ECX[0x1f] = iVar1;
          pFStack_90 = param_1;
          iVar1 = FUN_100f0800();
          if (iVar1 != 0) {
            local_8._0_1_ = 3;
            FString::~FString(local_38);
            local_8._0_1_ = 2;
            FString::~FString(local_44);
            local_8._0_1_ = 1;
            FString::~FString(local_50);
            local_8 = (uint)local_8._1_3_ << 8;
            FString::~FString(local_5c);
            ExceptionList = local_10;
            return 1;
          }
          pFVar3 = (FString *)(**(code **)(*in_ECX + 0x44))();
          FString::operator*(pFVar3);
          pFStack_90 = (FString *)0x1025d408;
          goto LAB_100d4892;
        }
      }
    }
  }
  pFVar3 = (FString *)(**(code **)(*in_ECX + 0x44))();
  FString::operator*(pFVar3);
  pFStack_90 = (FString *)0x1025d478;
LAB_100d4892:
  uVar4 = FUN_10005c30();
  FUN_100d01f0(uVar4);
  local_8._0_1_ = 3;
  FString::~FString(local_38);
  local_8._0_1_ = 2;
  FString::~FString(local_44);
  local_8._0_1_ = 1;
  FString::~FString(local_50);
  local_8 = (uint)local_8._1_3_ << 8;
  FString::~FString(local_5c);
  ExceptionList = local_10;
  return 0;
}


// ==== 100d49b5 Catch@100d49b5

void Catch_100d49b5(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x20) = *(undefined4 *)(unaff_EBP + -0x28);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x20,&DAT_102a47f0);
}


// ==== 100d49c9 Catch@100d49c9

void Catch_100d49c9(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"XMLButtonData::Create");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100d49f0 FUN_100d49f0

void FUN_100d49f0(void)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101f8d20;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_100ef430();
  ExceptionList = local_10;
  return;
}


// ==== 100d4a40 Catch@100d4a40

void Catch_100d4a40(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 100d4a54 Catch@100d4a54

void Catch_100d4a54(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"XMLChatWindowData::Init");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100d4a80 FUN_100d4a80

void FUN_100d4a80(void)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101f8d40;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_100efb90();
  ExceptionList = local_10;
  return;
}


// ==== 100d4ad0 Catch@100d4ad0

void Catch_100d4ad0(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 100d4ae4 Catch@100d4ae4

void Catch_100d4ae4(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"XMLChatWindowData::Destroy");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100d4b10 FUN_100d4b10

void FUN_100d4b10(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  UObject::StaticAllocateObject
            (&DAT_1039d590,param_2,param_3,param_4,0,*(undefined4 *)GError_exref,0,0);
  return;
}


// ==== 100d4b40 FUN_100d4b40

void FUN_100d4b40(void)

{
  undefined4 *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_101f8d68;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_100ef520();
  *in_ECX = XMLChatWindowData::vftable;
  local_8 = 1;
  FUN_100d49f0();
  ExceptionList = local_10;
  return;
}


// ==== 100d4ba8 Catch@100d4ba8

void Catch_100d4ba8(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 100d4bbc Catch@100d4bbc

void Catch_100d4bbc(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"XMLChatWindowData::XMLChatWindowData");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100d4be0 FUN_100d4be0

void FUN_100d4be0(void)

{
  undefined4 *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101f8d98;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *in_ECX = XMLChatWindowData::vftable;
  local_8 = 1;
  FUN_100d4a80();
  local_8 = 0xffffffff;
  FUN_100efc70();
  ExceptionList = local_10;
  return;
}


// ==== 100d4c46 Catch@100d4c46

void Catch_100d4c46(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 100d4c5a Catch@100d4c5a

void Catch_100d4c5a(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"XMLChatWindowData::~XMLChatWindowData");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100d4c80 FUN_100d4c80

void FUN_100d4c80(undefined4 param_1)

{
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101f8dc0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_100ef8c0(param_1);
  FUN_100052e0(param_1,in_ECX + 0x88);
  ExceptionList = local_10;
  return;
}


// ==== 100d4ce8 Catch@100d4ce8

void Catch_100d4ce8(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 100d4cfc Catch@100d4cfc

void Catch_100d4cfc(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"XMLChatWindowData::Serialize");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100d4d20 FUN_100d4d20

void FUN_100d4d20(byte param_1)

{
  FUN_100d4be0();
  if ((param_1 & 1) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))();
  }
  return;
}


// ==== 100d4d50 FUN_100d4d50

undefined4 FUN_100d4d50(undefined4 param_1)

{
  int iVar1;
  FString *this;
  int *in_ECX;
  undefined4 uStack_48;
  wchar_t *pwStack_44;
  uint uStack_3c;
  FString local_2c [16];
  undefined1 *local_1c;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101f8dfb;
  local_10 = ExceptionList;
  uStack_3c = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_3c;
  ExceptionList = &local_10;
  local_8._0_1_ = 1;
  local_8._1_3_ = 0;
  local_1c = (undefined1 *)&uStack_48;
  FString::FString((FString *)&uStack_48,(FString *)&stack0x00000008);
  local_8._0_1_ = 1;
  iVar1 = FUN_100efd60(param_1);
  if (iVar1 == 0) {
    this = (FString *)(**(code **)(*in_ECX + 0x44))();
    FString::operator*(this);
    pwStack_44 = L"XMLChatWindowData(%s):default property processing failed!!";
    uStack_48 = 0x100d4dd0;
    uStack_48 = FUN_10005c30();
    FUN_100d01f0();
    local_8 = 0xffffffff;
    FString::~FString((FString *)&stack0x00000008);
    ExceptionList = local_10;
    return 0;
  }
  pwStack_44 = L"䗆ϼ䶍凘쾋擨ﾋ觿袆";
  FString::FString(local_2c,(ushort *)L"lineGap");
  local_8._0_1_ = 3;
  pwStack_44 = L"蚉\x88";
  iVar1 = FUN_100cd980();
  in_ECX[0x22] = iVar1;
  local_8 = CONCAT31(local_8._1_3_,1);
  FString::~FString(local_2c);
  local_8 = 0xffffffff;
  FString::~FString((FString *)&stack0x00000008);
  ExceptionList = local_10;
  return 1;
}


// ==== 100d4e54 Catch@100d4e54

void Catch_100d4e54(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 100d4e68 Catch@100d4e68

void Catch_100d4e68(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"XMLChatWindowData::Process");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100d4e90 FUN_100d4e90

undefined4 FUN_100d4e90(undefined4 param_1,undefined4 param_2)

{
  UPackage *pUVar1;
  int iVar2;
  FString *pFVar3;
  undefined4 uVar4;
  int *in_ECX;
  wchar_t *pwStack_38;
  ushort *puStack_34;
  uint uStack_30;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101f8e20;
  local_10 = ExceptionList;
  uStack_30 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_8 = 0;
  puStack_34 = (ushort *)0x0;
  pwStack_38 = (wchar_t *)in_ECX;
  FName::FName((FName *)&pwStack_38,0);
  pUVar1 = UObject::GetTransientPackage();
  iVar2 = FUN_100d4b10(0x36c,pUVar1);
  if (iVar2 != 0) {
    puStack_34 = (ushort *)0xf;
    pwStack_38 = (wchar_t *)0x9;
    iVar2 = FUN_1013c600(200);
    if (iVar2 != 0) {
      if (in_ECX[0x22] != -9999) {
        *(int *)(iVar2 + 0x31c) = in_ECX[0x22];
      }
      in_ECX[0x1f] = iVar2;
      puStack_34 = (ushort *)param_2;
      pwStack_38 = (wchar_t *)param_1;
      iVar2 = FUN_100f0800();
      if (iVar2 != 0) {
        ExceptionList = local_10;
        return 1;
      }
      puStack_34 = (ushort *)0x100d4f6e;
      pFVar3 = (FString *)(**(code **)(*in_ECX + 0x44))();
      puStack_34 = (ushort *)0x100d4f76;
      puStack_34 = FString::operator*(pFVar3);
      pwStack_38 = L"XMLChatWindowData(%s):failed to create default property!!";
      goto LAB_100d4f17;
    }
  }
  puStack_34 = (ushort *)0x100d4f09;
  pFVar3 = (FString *)(**(code **)(*in_ECX + 0x44))();
  puStack_34 = (ushort *)0x100d4f11;
  puStack_34 = FString::operator*(pFVar3);
  pwStack_38 = L"XMLChatWindowData(%s):creation failed!!";
LAB_100d4f17:
  uVar4 = FUN_10005c30();
  FUN_100d01f0(uVar4);
  ExceptionList = local_10;
  return 0;
}


// ==== 100d4f97 Catch@100d4f97

void Catch_100d4f97(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 100d4fab Catch@100d4fab

void Catch_100d4fab(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"XMLChatWindowData::Create");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100d4fd0 FUN_100d4fd0

void FUN_100d4fd0(void)

{
  undefined4 *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101f8e84;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_100ef520(DAT_103554c4 ^ (uint)&stack0xffffffec);
  local_4 = 0;
  *in_ECX = XMLCheckBoxData::vftable;
  in_ECX[0x22] = 0xffffd8f1;
  in_ECX[0x23] = 0;
  in_ECX[0x24] = 0;
  in_ECX[0x25] = 0;
  FString::FString((FString *)(in_ECX + 0x26));
  local_4._0_1_ = 1;
  FString::FString((FString *)(in_ECX + 0x29));
  local_4._0_1_ = 2;
  FString::FString((FString *)(in_ECX + 0x2c));
  local_4 = CONCAT31(local_4._1_3_,3);
  FString::FString((FString *)(in_ECX + 0x2f));
  ExceptionList = local_c;
  return;
}


// ==== 100d5080 FUN_100d5080

void FUN_100d5080(void)

{
  uint uVar1;
  undefined4 *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_101f8ee4;
  local_c = ExceptionList;
  uVar1 = DAT_103554c4 ^ (uint)&stack0xffffffec;
  ExceptionList = &local_c;
  *in_ECX = XMLCheckBoxData::vftable;
  local_4 = 3;
  FString::~FString((FString *)(in_ECX + 0x2f));
  local_4._0_1_ = 2;
  FString::~FString((FString *)(in_ECX + 0x2c));
  local_4._0_1_ = 1;
  FString::~FString((FString *)(in_ECX + 0x29));
  local_4 = (uint)local_4._1_3_ << 8;
  FString::~FString((FString *)(in_ECX + 0x26));
  local_4 = 0xffffffff;
  FUN_100efc70(uVar1);
  ExceptionList = local_c;
  return;
}


// ==== 100d5120 FUN_100d5120

int FUN_100d5120(void)

{
  int *piVar1;
  int iVar2;
  int *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101f8f00;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  iVar2 = in_ECX[0x22];
  if (iVar2 == -9999) {
    piVar1 = (int *)(**(code **)(*in_ECX + 0x6c))();
    if ((piVar1 != (int *)0x0) && (iVar2 = (**(code **)(*piVar1 + 0x78))(), iVar2 != -9999)) {
      ExceptionList = local_10;
      return iVar2;
    }
    iVar2 = -9999;
  }
  ExceptionList = local_10;
  return iVar2;
}


// ==== 100d5191 Catch@100d5191

void Catch_100d5191(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 100d51a5 Catch@100d51a5

void Catch_100d51a5(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"XMLCheckBoxData::GetTitleIndex");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100d51d0 FUN_100d51d0

int FUN_100d51d0(void)

{
  int *piVar1;
  int iVar2;
  int *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101f8f20;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  iVar2 = in_ECX[0x23];
  if (iVar2 == -1) {
    piVar1 = (int *)(**(code **)(*in_ECX + 0x6c))();
    if ((piVar1 != (int *)0x0) && (iVar2 = (**(code **)(*piVar1 + 0x7c))(), iVar2 != -1)) {
      ExceptionList = local_10;
      return iVar2;
    }
    iVar2 = 0;
  }
  ExceptionList = local_10;
  return iVar2;
}


// ==== 100d523a Catch@100d523a

void Catch_100d523a(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 100d524e Catch@100d524e

void Catch_100d524e(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"XMLCheckBoxData::GetChecked");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100d5270 FUN_100d5270

int FUN_100d5270(void)

{
  int *piVar1;
  int iVar2;
  int *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101f8f40;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  iVar2 = in_ECX[0x24];
  if (iVar2 == -1) {
    piVar1 = (int *)(**(code **)(*in_ECX + 0x6c))();
    if ((piVar1 != (int *)0x0) && (iVar2 = (**(code **)(*piVar1 + 0x80))(), iVar2 != -1)) {
      ExceptionList = local_10;
      return iVar2;
    }
    iVar2 = 0;
  }
  ExceptionList = local_10;
  return iVar2;
}


// ==== 100d52dd Catch@100d52dd

void Catch_100d52dd(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 100d52f1 Catch@100d52f1

void Catch_100d52f1(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"XMLCheckBoxData::GetLeftAligned");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100d5310 FUN_100d5310

int FUN_100d5310(void)

{
  int *piVar1;
  int iVar2;
  int *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101f8f60;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  iVar2 = in_ECX[0x25];
  if (iVar2 == -9999) {
    piVar1 = (int *)(**(code **)(*in_ECX + 0x6c))();
    if ((piVar1 != (int *)0x0) && (iVar2 = (**(code **)(*piVar1 + 0x84))(), iVar2 != -9999)) {
      ExceptionList = local_10;
      return iVar2;
    }
    iVar2 = 0;
  }
  ExceptionList = local_10;
  return iVar2;
}


// ==== 100d5381 Catch@100d5381

void Catch_100d5381(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 100d5395 Catch@100d5395

void Catch_100d5395(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"XMLCheckBoxData::GetMaxWidth");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100d53c0 FUN_100d53c0

FString * FUN_100d53c0(FString *param_1)

{
  int iVar1;
  int *piVar2;
  int *in_ECX;
  uint uStack_3c;
  FString local_2c [20];
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101f8fa3;
  local_10 = ExceptionList;
  uStack_3c = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_3c;
  ExceptionList = &local_10;
  local_18 = 0;
  local_8 = 1;
  iVar1 = FString::operator!=((FString *)(in_ECX + 0x26),(ushort *)L"undefined");
  if (iVar1 == 0) {
    piVar2 = (int *)(**(code **)(*in_ECX + 0x6c))();
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 0x88))(local_2c);
      local_8._0_1_ = 2;
      iVar1 = FString::operator!=(local_2c,(ushort *)L"undefined");
      if (iVar1 != 0) {
        FString::FString(param_1,local_2c);
        local_18 = 1;
        local_8 = CONCAT31(local_8._1_3_,1);
        FString::~FString(local_2c);
        ExceptionList = local_10;
        return param_1;
      }
      local_8 = CONCAT31(local_8._1_3_,1);
      FString::~FString(local_2c);
    }
    FString::FString(param_1,(ushort *)&DAT_1022f9f8);
  }
  else {
    FString::FString(param_1,(FString *)(in_ECX + 0x26));
  }
  ExceptionList = local_10;
  return param_1;
}


// ==== 100d54ac Catch@100d54ac

void Catch_100d54ac(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 100d54c0 Catch@100d54c0

void Catch_100d54c0(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"XMLCheckBoxData::GetCheckTexture");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100d54e0 FUN_100d54e0

FString * FUN_100d54e0(FString *param_1)

{
  int iVar1;
  int *piVar2;
  int *in_ECX;
  uint uStack_3c;
  FString local_2c [20];
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101f8fe3;
  local_10 = ExceptionList;
  uStack_3c = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_3c;
  ExceptionList = &local_10;
  local_18 = 0;
  local_8 = 1;
  iVar1 = FString::operator!=((FString *)(in_ECX + 0x29),(ushort *)L"undefined");
  if (iVar1 == 0) {
    piVar2 = (int *)(**(code **)(*in_ECX + 0x6c))();
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 0x8c))(local_2c);
      local_8._0_1_ = 2;
      iVar1 = FString::operator!=(local_2c,(ushort *)L"undefined");
      if (iVar1 != 0) {
        FString::FString(param_1,local_2c);
        local_18 = 1;
        local_8 = CONCAT31(local_8._1_3_,1);
        FString::~FString(local_2c);
        ExceptionList = local_10;
        return param_1;
      }
      local_8 = CONCAT31(local_8._1_3_,1);
      FString::~FString(local_2c);
    }
    FString::FString(param_1,(ushort *)&DAT_1022f9f8);
  }
  else {
    FString::FString(param_1,(FString *)(in_ECX + 0x29));
  }
  ExceptionList = local_10;
  return param_1;
}


// ==== 100d55cc Catch@100d55cc

void Catch_100d55cc(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 100d55e0 Catch@100d55e0

void Catch_100d55e0(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"XMLCheckBoxData::GetUnCheckTexture");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100d5600 FUN_100d5600

FString * FUN_100d5600(FString *param_1)

{
  int iVar1;
  int *piVar2;
  int *in_ECX;
  uint uStack_3c;
  FString local_2c [20];
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101f9023;
  local_10 = ExceptionList;
  uStack_3c = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_3c;
  ExceptionList = &local_10;
  local_18 = 0;
  local_8 = 1;
  iVar1 = FString::operator!=((FString *)(in_ECX + 0x2c),(ushort *)L"undefined");
  if (iVar1 == 0) {
    piVar2 = (int *)(**(code **)(*in_ECX + 0x6c))();
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 0x90))(local_2c);
      local_8._0_1_ = 2;
      iVar1 = FString::operator!=(local_2c,(ushort *)L"undefined");
      if (iVar1 != 0) {
        FString::FString(param_1,local_2c);
        local_18 = 1;
        local_8 = CONCAT31(local_8._1_3_,1);
        FString::~FString(local_2c);
        ExceptionList = local_10;
        return param_1;
      }
      local_8 = CONCAT31(local_8._1_3_,1);
      FString::~FString(local_2c);
    }
    FString::FString(param_1,(ushort *)&DAT_1022f9f8);
  }
  else {
    FString::FString(param_1,(FString *)(in_ECX + 0x2c));
  }
  ExceptionList = local_10;
  return param_1;
}


// ==== 100d56ec Catch@100d56ec

void Catch_100d56ec(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 100d5700 Catch@100d5700

void Catch_100d5700(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"XMLCheckBoxData::GetDisableTexture");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100d5720 FUN_100d5720

FString * FUN_100d5720(FString *param_1)

{
  int iVar1;
  int *piVar2;
  int *in_ECX;
  uint uStack_3c;
  FString local_2c [20];
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101f9063;
  local_10 = ExceptionList;
  uStack_3c = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_3c;
  ExceptionList = &local_10;
  local_18 = 0;
  local_8 = 1;
  iVar1 = FString::operator!=((FString *)(in_ECX + 0x2f),(ushort *)L"undefined");
  if (iVar1 == 0) {
    piVar2 = (int *)(**(code **)(*in_ECX + 0x6c))();
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 0x94))(local_2c);
      local_8._0_1_ = 2;
      iVar1 = FString::operator!=(local_2c,(ushort *)L"undefined");
      if (iVar1 != 0) {
        FString::FString(param_1,local_2c);
        local_18 = 1;
        local_8 = CONCAT31(local_8._1_3_,1);
        FString::~FString(local_2c);
        ExceptionList = local_10;
        return param_1;
      }
      local_8 = CONCAT31(local_8._1_3_,1);
      FString::~FString(local_2c);
    }
    FString::FString(param_1,(ushort *)&DAT_1022f9f8);
  }
  else {
    FString::FString(param_1,(FString *)(in_ECX + 0x2f));
  }
  ExceptionList = local_10;
  return param_1;
}


// ==== 100d580c Catch@100d580c

void Catch_100d580c(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 100d5820 Catch@100d5820

void Catch_100d5820(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"XMLCheckBoxData::GetDisableCheckTexture");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100d5840 FUN_100d5840

void FUN_100d5840(byte param_1)

{
  FUN_100d5080();
  if ((param_1 & 1) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))();
  }
  return;
}


// ==== 100d5870 FUN_100d5870

void FUN_100d5870(FArchive *param_1)

{
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101f9080;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_100ef8c0(param_1);
  FUN_100052e0(param_1,in_ECX + 0x88);
  FUN_100052e0(param_1,in_ECX + 0x8c);
  FUN_100052e0(param_1,in_ECX + 0x90);
  FUN_100052e0(param_1,in_ECX + 0x94);
  operator<<(param_1,(FString *)(in_ECX + 0x98));
  operator<<(param_1,(FString *)(in_ECX + 0xa4));
  operator<<(param_1,(FString *)(in_ECX + 0xb0));
  operator<<(param_1,(FString *)(in_ECX + 0xbc));
  ExceptionList = local_10;
  return;
}


// ==== 100d592d Catch@100d592d

void Catch_100d592d(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 100d5941 Catch@100d5941

void Catch_100d5941(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"XMLCheckBoxData::Serialize");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100d5960 FUN_100d5960

undefined4 FUN_100d5960(undefined4 param_1)

{
  int iVar1;
  FString *pFVar2;
  int *in_ECX;
  undefined4 uStack_54;
  FString *pFStack_50;
  uint uStack_48;
  FString local_38 [12];
  FString local_2c [16];
  undefined1 *local_1c;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101f911e;
  local_10 = ExceptionList;
  uStack_48 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_48;
  ExceptionList = &local_10;
  local_8._0_1_ = 1;
  local_8._1_3_ = 0;
  local_1c = (undefined1 *)&uStack_54;
  FString::FString((FString *)&uStack_54,(FString *)&stack0x00000008);
  local_8._0_1_ = 1;
  iVar1 = FUN_100efd60(param_1);
  if (iVar1 == 0) {
    pFVar2 = (FString *)(**(code **)(*in_ECX + 0x44))();
    FString::operator*(pFVar2);
    pFStack_50 = (FString *)0x1025dca8;
  }
  else {
    pFStack_50 = (FString *)0x100d5a1d;
    FString::FString(local_2c,(ushort *)L"string");
    local_8._0_1_ = 3;
    pFStack_50 = (FString *)0x100d5a2c;
    iVar1 = FUN_100cd980();
    in_ECX[0x22] = iVar1;
    local_8._0_1_ = 1;
    FString::~FString(local_2c);
    if (in_ECX[0x22] != -9999) {
      pFStack_50 = (FString *)0x100d5a74;
      FString::FString(local_2c,(ushort *)L"checked");
      local_8._0_1_ = 4;
      pFStack_50 = (FString *)0x100d5a83;
      iVar1 = FUN_100cda90();
      in_ECX[0x23] = iVar1;
      local_8._0_1_ = 1;
      FString::~FString(local_2c);
      pFStack_50 = (FString *)0x100d5aa3;
      FString::FString(local_2c,(ushort *)L"leftAligned");
      local_8._0_1_ = 5;
      pFStack_50 = (FString *)0x100d5ab2;
      iVar1 = FUN_100cda90();
      in_ECX[0x24] = iVar1;
      local_8._0_1_ = 1;
      FString::~FString(local_2c);
      pFStack_50 = (FString *)0x100d5ad2;
      FString::FString(local_2c,(ushort *)L"maxWidth");
      local_8._0_1_ = 6;
      pFStack_50 = (FString *)0x100d5ae1;
      iVar1 = FUN_100cd980();
      in_ECX[0x25] = iVar1;
      local_8._0_1_ = 1;
      FString::~FString(local_2c);
      pFStack_50 = (FString *)0x100d5b01;
      FString::FString(local_2c,(ushort *)L"CheckTexture");
      local_8._0_1_ = 7;
      pFStack_50 = local_38;
      uStack_54 = 0x100d5b14;
      pFVar2 = (FString *)FUN_100cd860();
      local_8._0_1_ = 8;
      pFStack_50 = (FString *)0x100d5b25;
      FString::operator=((FString *)(in_ECX + 0x26),pFVar2);
      local_8._0_1_ = 7;
      FString::~FString(local_38);
      local_8._0_1_ = 1;
      FString::~FString(local_2c);
      pFStack_50 = (FString *)0x100d5b4c;
      FString::FString(local_2c,(ushort *)L"UnCheckTexture");
      local_8._0_1_ = 9;
      pFStack_50 = local_38;
      uStack_54 = 0x100d5b5f;
      pFVar2 = (FString *)FUN_100cd860();
      local_8._0_1_ = 10;
      pFStack_50 = (FString *)0x100d5b70;
      FString::operator=((FString *)(in_ECX + 0x29),pFVar2);
      local_8._0_1_ = 9;
      FString::~FString(local_38);
      local_8._0_1_ = 1;
      FString::~FString(local_2c);
      pFStack_50 = (FString *)0x100d5b97;
      FString::FString(local_2c,(ushort *)L"DisableTexture");
      local_8._0_1_ = 0xb;
      pFStack_50 = local_38;
      uStack_54 = 0x100d5baa;
      pFVar2 = (FString *)FUN_100cd860();
      local_8._0_1_ = 0xc;
      pFStack_50 = (FString *)0x100d5bbb;
      FString::operator=((FString *)(in_ECX + 0x2c),pFVar2);
      local_8._0_1_ = 0xb;
      FString::~FString(local_38);
      local_8._0_1_ = 1;
      FString::~FString(local_2c);
      pFStack_50 = (FString *)0x100d5be2;
      FString::FString(local_2c,(ushort *)L"DisableCheckTexture");
      local_8._0_1_ = 0xd;
      pFStack_50 = local_38;
      uStack_54 = 0x100d5bf5;
      pFVar2 = (FString *)FUN_100cd860();
      local_8._0_1_ = 0xe;
      pFStack_50 = (FString *)0x100d5c06;
      FString::operator=((FString *)(in_ECX + 0x2f),pFVar2);
      local_8._0_1_ = 0xd;
      FString::~FString(local_38);
      local_8 = CONCAT31(local_8._1_3_,1);
      FString::~FString(local_2c);
      local_8 = 0xffffffff;
      FString::~FString((FString *)&stack0x00000008);
      ExceptionList = local_10;
      return 1;
    }
    pFVar2 = (FString *)(**(code **)(*in_ECX + 0x44))();
    FString::operator*(pFVar2);
    pFStack_50 = (FString *)0x1025dc30;
  }
  uStack_54 = 0x100d59e0;
  uStack_54 = FUN_10005c30();
  FUN_100d01f0();
  local_8 = 0xffffffff;
  FString::~FString((FString *)&stack0x00000008);
  ExceptionList = local_10;
  return 0;
}


// ==== 100d5c45 Catch@100d5c45

void Catch_100d5c45(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 100d5c59 Catch@100d5c59

void Catch_100d5c59(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"XMLCheckBoxData::Process");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100d5c80 FUN_100d5c80

undefined4 FUN_100d5c80(undefined4 param_1,undefined4 param_2)

{
  uint *puVar1;
  UPackage *pUVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  FString *pFVar5;
  ushort *puVar6;
  ushort *puVar7;
  ushort *puVar8;
  ushort *puVar9;
  int *in_ECX;
  int iVar10;
  uint uStack_68;
  FString local_58 [12];
  FString local_4c [12];
  FString local_40 [12];
  FString local_34 [20];
  FString *local_20;
  FString *local_1c;
  FString *local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_101f9164;
  local_10 = ExceptionList;
  uStack_68 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_68;
  ExceptionList = &local_10;
  local_8 = 0;
  iVar10 = 0;
  puVar1 = &uStack_68;
  if (in_ECX[0x22] != -9999) {
    local_20 = (FString *)&stack0xffffff90;
    FName::FName((FName *)&stack0xffffff90,0);
    pUVar2 = UObject::GetTransientPackage();
    iVar10 = FUN_1009e150(0x314,pUVar2);
    if (iVar10 == 0) {
      iVar10 = 0;
      puVar1 = (uint *)local_14;
    }
    else {
      (**(code **)(*in_ECX + 0x84))();
      (**(code **)(*in_ECX + 0x80))();
      uVar3 = (**(code **)(*in_ECX + 0x7c))();
      uVar4 = (**(code **)(*in_ECX + 0x78))(uVar3);
      iVar10 = FUN_10009930(uVar4,uVar3);
      puVar1 = (uint *)local_14;
      if (iVar10 != 0) goto LAB_100d5d63;
    }
  }
  local_14 = (undefined1 *)puVar1;
  appFailAssert("pCheckBox",".\\XML\\XMLCheckBoxData.cpp",0x3b);
  pFVar5 = (FString *)(**(code **)(*in_ECX + 0x44))();
  FString::operator*(pFVar5);
  uVar3 = FUN_10005c30();
  FUN_100d01f0(uVar3);
LAB_100d5d63:
  pFVar5 = (FString *)(**(code **)(*in_ECX + 0x94))();
  local_8._0_1_ = 1;
  local_18 = (FString *)(**(code **)(*in_ECX + 0x90))();
  local_8._0_1_ = 2;
  local_1c = (FString *)(**(code **)(*in_ECX + 0x8c))(local_40);
  local_8._0_1_ = 3;
  local_20 = (FString *)(**(code **)(*in_ECX + 0x88))(local_34);
  local_8._0_1_ = 4;
  puVar6 = FString::operator*(pFVar5);
  puVar7 = FString::operator*(local_18);
  puVar8 = FString::operator*(local_1c);
  puVar9 = FString::operator*(local_20);
  FUN_10008e60(puVar9,puVar8,puVar7,puVar6);
  local_8._0_1_ = 3;
  FString::~FString(local_34);
  local_8._0_1_ = 2;
  FString::~FString(local_40);
  local_8._0_1_ = 1;
  FString::~FString(local_4c);
  local_8 = (uint)local_8._1_3_ << 8;
  FString::~FString(local_58);
  in_ECX[0x1f] = iVar10;
  iVar10 = FUN_100f0800(param_1,param_2);
  if (iVar10 == 0) {
    pFVar5 = (FString *)(**(code **)(*in_ECX + 0x44))();
    puVar6 = FString::operator*(pFVar5);
    uVar3 = FUN_10005c30(L"XMLMultiEditData(%s):failed to create default property!!",puVar6);
    FUN_100d01f0(uVar3);
    ExceptionList = local_10;
    return 0;
  }
  ExceptionList = local_10;
  return 1;
}


// ==== 100d5e91 Catch@100d5e91

void Catch_100d5e91(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x20) = *(undefined4 *)(unaff_EBP + -0x24);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x20,&DAT_102a47f0);
}


// ==== 100d5ea5 Catch@100d5ea5

void Catch_100d5ea5(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"XMLCheckBoxData::Create");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100d5ed0 FUN_100d5ed0

void FUN_100d5ed0(void)

{
  undefined4 *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_101f918c;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FString::FString((FString *)(in_ECX + 2));
  local_8 = 1;
  *in_ECX = 0xffffd8f1;
  in_ECX[1] = 0xffffd8f1;
  FString::operator=((FString *)(in_ECX + 2),(ushort *)L"undefined");
  in_ECX[5] = 0xffffd8f1;
  ExceptionList = local_10;
  return;
}


// ==== 100d5f4b Catch@100d5f4b

void Catch_100d5f4b(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 100d5f5f Catch@100d5f5f

void Catch_100d5f5f(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"ComboItem::ComboItem");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100d5f80 FUN_100d5f80

void FUN_100d5f80(undefined4 param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = param_1;
  return;
}


// ==== 100d5fd2 Catch@100d5fd2

void Catch_100d5fd2(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 100d5fe6 Catch@100d5fe6

void Catch_100d5fe6(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"ComboItem::SetSysString");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100d6010 FUN_100d6010

void FUN_100d6010(undefined4 param_1)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 4) = param_1;
  return;
}


// ==== 100d6063 Catch@100d6063

void Catch_100d6063(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 100d6077 Catch@100d6077

void Catch_100d6077(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"ComboItem::SetSystemMsg");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100d60a0 FUN_100d60a0

void FUN_100d60a0(void)

{
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101f91f9;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 1;
  FString::operator=((FString *)(in_ECX + 8),(FString *)&stack0x00000004);
  local_8 = 0xffffffff;
  FString::~FString((FString *)&stack0x00000004);
  ExceptionList = local_10;
  return;
}


// ==== 100d6107 Catch@100d6107

void Catch_100d6107(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 100d611b Catch@100d611b

void Catch_100d611b(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"ComboItem::SetText");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100d6140 FUN_100d6140

void FUN_100d6140(undefined4 param_1)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 0x14) = param_1;
  return;
}


// ==== 100d6193 Catch@100d6193

void Catch_100d6193(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 100d61a7 Catch@100d61a7

void Catch_100d61a7(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"ComboItem::SetReserved");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100d61d0 FUN_100d61d0

undefined4 FUN_100d61d0(void)

{
  undefined4 *in_ECX;
  
  return *in_ECX;
}


// ==== 100d6216 Catch@100d6216

void Catch_100d6216(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 100d622a Catch@100d622a

void Catch_100d622a(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"ComboItem::GetSysString");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100d6250 FUN_100d6250

undefined4 FUN_100d6250(void)

{
  int in_ECX;
  
  return *(undefined4 *)(in_ECX + 4);
}


// ==== 100d6297 Catch@100d6297

void Catch_100d6297(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 100d62ab Catch@100d62ab

void Catch_100d62ab(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"ComboItem::GetSystemMsg");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100d62d0 FUN_100d62d0

FString * FUN_100d62d0(FString *param_1)

{
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101f929a;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 1;
  FString::FString(param_1,(FString *)(in_ECX + 8));
  ExceptionList = local_10;
  return param_1;
}


// ==== 100d6332 Catch@100d6332

void Catch_100d6332(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 100d6346 Catch@100d6346

void Catch_100d6346(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"ComboItem::GetText");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100d6370 FUN_100d6370

undefined4 FUN_100d6370(void)

{
  int in_ECX;
  
  return *(undefined4 *)(in_ECX + 0x14);
}


// ==== 100d63b7 Catch@100d63b7

void Catch_100d63b7(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 100d63cb Catch@100d63cb

void Catch_100d63cb(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"ComboItem::GetReserved");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100d63f0 FUN_100d63f0

FArchive * FUN_100d63f0(FArchive *param_1,int param_2)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101f92e0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_100052e0(param_1,param_2);
  FUN_100052e0(param_1,param_2 + 4);
  operator<<(param_1,(FString *)(param_2 + 8));
  FUN_100052e0(param_1,param_2 + 0x14);
  ExceptionList = local_10;
  return param_1;
}


// ==== 100d6465 Catch@100d6465

void Catch_100d6465(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 100d6479 Catch@100d6479

void Catch_100d6479(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"operator<<");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100d64a0 FUN_100d64a0

void FUN_100d64a0(byte param_1)

{
  int in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_101f930c;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_4 = 0xffffffff;
  FString::~FString((FString *)(in_ECX + 8));
  if ((param_1 & 1) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))();
  }
  ExceptionList = local_c;
  return;
}


// ==== 100d6510 FUN_100d6510

void FUN_100d6510(FArchive *param_1)

{
  FArchive *this;
  int iVar1;
  int in_ECX;
  int iVar2;
  uint uStack_3c;
  undefined4 local_20;
  int local_1c;
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  this = param_1;
  puStack_c = &LAB_101f933b;
  local_10 = ExceptionList;
  uStack_3c = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_3c;
  ExceptionList = &local_10;
  iVar2 = 0;
  local_8 = 0;
  FUN_100ef8c0(param_1);
  iVar1 = FArchive::IsSaving(this);
  if (iVar1 == 0) {
    local_18 = 0;
    FUN_100052e0(this,&local_18);
    for (; iVar2 < local_18; iVar2 = iVar2 + 1) {
      param_1 = (FArchive *)FUN_10004ed0(0x18);
      local_8._0_1_ = 1;
      if (param_1 == (FArchive *)0x0) {
        local_20 = 0;
      }
      else {
        local_20 = FUN_100d5ed0();
      }
      local_8 = (uint)local_8._1_3_ << 8;
      FUN_100d63f0(this,local_20);
      FUN_100d9a30(&local_20);
    }
  }
  else {
    param_1 = *(FArchive **)(in_ECX + 0x8c);
    FUN_100052e0(this,&param_1);
    for (; iVar2 < (int)param_1; iVar2 = iVar2 + 1) {
      local_1c = iVar2;
      FUN_100d63f0(this,*(undefined4 *)(*(int *)(in_ECX + 0x88) + iVar2 * 4));
    }
  }
  ExceptionList = local_10;
  return;
}


// ==== 100d6605 Catch@100d6605

void Catch_100d6605(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x24) = *(undefined4 *)(unaff_EBP + -0x28);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x24,&DAT_102a47f0);
}


// ==== 100d6619 Catch@100d6619

void Catch_100d6619(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"XMLComboBoxData::Serialize");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100d6640 FUN_100d6640

void FUN_100d6640(void)

{
  int iVar1;
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_101f9369;
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


// ==== 100d66e0 FUN_100d66e0

void FUN_100d66e0(void)

{
  undefined4 *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_101f93af;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_100ef520();
  local_8 = 0;
  *in_ECX = XMLComboBoxData::vftable;
  FArray::FArray((FArray *)(in_ECX + 0x22));
  ExceptionList = local_10;
  return;
}


// ==== 100d6754 Catch@100d6754

void Catch_100d6754(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x20);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 100d6768 Catch@100d6768

void Catch_100d6768(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"XMLComboBoxData::XMLComboBoxData");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100d6790 FUN_100d6790

void FUN_100d6790(void)

{
  undefined4 *in_ECX;
  int iVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101f93e6;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *in_ECX = XMLComboBoxData::vftable;
  local_8 = 2;
  for (iVar1 = 0; iVar1 < (int)in_ECX[0x23]; iVar1 = iVar1 + 1) {
    if (*(int *)(in_ECX[0x22] + iVar1 * 4) != 0) {
      FUN_100d64a0(1);
    }
  }
  for (iVar1 = 0; iVar1 < (int)in_ECX[0x23]; iVar1 = iVar1 + 1) {
  }
  FArray::Empty((FArray *)(in_ECX + 0x22),4,0);
  local_8 = 0;
  FUN_100d6640();
  local_8 = 0xffffffff;
  FUN_100efc70();
  ExceptionList = local_10;
  return;
}


// ==== 100d6848 Catch@100d6848

void Catch_100d6848(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x1c) = *(undefined4 *)(unaff_EBP + -0x24);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x1c,&DAT_102a47f0);
}


// ==== 100d685c Catch@100d685c

void Catch_100d685c(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"XMLComboBoxData::~XMLComboBoxData");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100d6880 FUN_100d6880

undefined4 FUN_100d6880(undefined4 param_1)

{
  int iVar1;
  FString *pFVar2;
  int *in_ECX;
  undefined4 uStack_80;
  FString *pFStack_7c;
  uint uStack_74;
  FString local_64 [12];
  FString local_58 [12];
  FString local_4c [12];
  FString local_40 [16];
  int local_30;
  undefined1 *local_24;
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101f946b;
  local_10 = ExceptionList;
  uStack_74 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_74;
  ExceptionList = &local_10;
  local_8._0_1_ = 1;
  local_8._1_3_ = 0;
  local_24 = (undefined1 *)&uStack_80;
  FString::FString((FString *)&uStack_80,(FString *)&stack0x00000008);
  local_8._0_1_ = 1;
  iVar1 = FUN_100efd60(param_1);
  if (iVar1 == 0) {
    pFVar2 = (FString *)(**(code **)(*in_ECX + 0x44))();
    FString::operator*(pFVar2);
    pFStack_7c = (FString *)0x1025e218;
    uStack_80 = 0x100d6900;
    uStack_80 = FUN_10005c30();
    FUN_100d01f0();
  }
  else {
    FUN_100c80b0();
    local_8._0_1_ = 3;
    pFStack_7c = (FString *)0x100d694a;
    FString::FString(local_40,(ushort *)L"ComboItem");
    local_8._0_1_ = 4;
    pFStack_7c = local_40;
    uStack_80 = 0x100d695d;
    iVar1 = FUN_100cd4b0();
    local_8._0_1_ = 3;
    FString::~FString(local_40);
    if (iVar1 != 0) {
      for (local_18 = 0; local_18 < local_30; local_18 = local_18 + 1) {
        pFStack_7c = (FString *)0x100d69c6;
        local_24 = (undefined1 *)FUN_10004ed0();
        local_8._0_1_ = 5;
        if (local_24 != (undefined1 *)0x0) {
          FUN_100d5ed0();
        }
        local_8._0_1_ = 3;
        pFStack_7c = (FString *)0x100d69f5;
        FString::FString(local_40,(ushort *)L"sysstring");
        local_8._0_1_ = 6;
        pFStack_7c = (FString *)0x100d6a04;
        FUN_100cd980();
        pFStack_7c = (FString *)0x100d6a0c;
        FUN_100d5f80();
        local_8._0_1_ = 3;
        FString::~FString(local_40);
        pFStack_7c = (FString *)0x100d6a26;
        FString::FString(local_4c,(ushort *)L"systemMsg");
        local_8._0_1_ = 7;
        pFStack_7c = (FString *)0x100d6a35;
        FUN_100cd980();
        pFStack_7c = (FString *)0x100d6a3d;
        FUN_100d6010();
        local_8._0_1_ = 3;
        FString::~FString(local_4c);
        pFStack_7c = (FString *)0x100d6a57;
        FString::FString(local_58,(ushort *)L"text");
        local_8._0_1_ = 8;
        local_24 = (undefined1 *)&uStack_80;
        FUN_100cd860(&uStack_80,local_58);
        local_8._0_1_ = 8;
        FUN_100d60a0();
        local_8._0_1_ = 3;
        FString::~FString(local_58);
        pFStack_7c = (FString *)0x100d6a98;
        FString::FString(local_64,(ushort *)L"reserved");
        local_8._0_1_ = 10;
        pFStack_7c = (FString *)0x100d6aa7;
        FUN_100cd980();
        pFStack_7c = (FString *)0x100d6aaf;
        FUN_100d6140();
        local_8._0_1_ = 3;
        FString::~FString(local_64);
        pFStack_7c = (FString *)0x100d6acd;
        FUN_100d9a30();
      }
      local_8 = CONCAT31(local_8._1_3_,1);
      FUN_100c97c0();
      local_8 = 0xffffffff;
      FString::~FString((FString *)&stack0x00000008);
      ExceptionList = local_10;
      return 1;
    }
    pFVar2 = (FString *)(**(code **)(*in_ECX + 0x44))();
    FString::operator*(pFVar2);
    pFStack_7c = (FString *)0x1025e1a0;
    uStack_80 = 0x100d6991;
    uStack_80 = FUN_10005c30();
    FUN_100d01f0();
    local_8 = CONCAT31(local_8._1_3_,1);
    FUN_100c97c0();
  }
  local_8 = 0xffffffff;
  FString::~FString((FString *)&stack0x00000008);
  ExceptionList = local_10;
  return 0;
}


// ==== 100d6b0e Catch@100d6b0e

void Catch_100d6b0e(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x1c) = *(undefined4 *)(unaff_EBP + -0x24);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x1c,&DAT_102a47f0);
}


// ==== 100d6b22 Catch@100d6b22

void Catch_100d6b22(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"XMLComboBoxData::Process");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100d6b40 FUN_100d6b40

undefined4 FUN_100d6b40(void)

{
  UPackage *pUVar1;
  int iVar2;
  int iVar3;
  FString *pFVar4;
  undefined4 uVar5;
  int *in_ECX;
  uint uStack_68;
  FString local_58 [12];
  FString local_4c [12];
  FString local_40 [12];
  FString local_34 [16];
  undefined1 *local_24;
  int local_1c;
  int *local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  puStack_c = &LAB_101f94b4;
  local_10 = ExceptionList;
  uStack_68 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_68;
  ExceptionList = &local_10;
  local_8 = 0;
  uStack_7 = 0;
  local_24 = &stack0xffffff90;
  local_18 = in_ECX;
  FName::FName((FName *)&stack0xffffff90,0);
  pUVar1 = UObject::GetTransientPackage();
  iVar2 = FUN_1008b6f0(0x330,pUVar1);
  if (iVar2 == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = FUN_1000b680();
  }
  local_1c = 0;
LAB_100d6bb1:
  do {
    if (in_ECX[0x23] <= local_1c) {
      FUN_10009f70();
      in_ECX[0x1f] = iVar2;
      iVar2 = FUN_100f0800();
      if (iVar2 != 0) {
        ExceptionList = local_10;
        return 1;
      }
      pFVar4 = (FString *)(**(code **)(*in_ECX + 0x44))();
      FString::operator*(pFVar4);
LAB_100d6cb1:
      uVar5 = FUN_10005c30();
      FUN_100d01f0(uVar5);
      ExceptionList = local_10;
      return 0;
    }
    if (*(int *)(in_ECX[0x22] + local_1c * 4) == 0) {
      appFailAssert("pItem",".\\XML\\XMLComboBoxData.cpp",0xaf);
    }
    iVar3 = FUN_100d6370();
    if (iVar3 == -9999) {
      iVar3 = FUN_100d61d0();
      if (iVar3 == -9999) {
        iVar3 = FUN_100d6250();
        if (iVar3 == -9999) {
          pFVar4 = (FString *)FUN_100d62d0();
          local_8 = 1;
          iVar3 = FString::operator!=(pFVar4,(ushort *)L"undefined");
          local_8 = 0;
          FString::~FString(local_34);
          if (iVar3 == 0) {
            pFVar4 = (FString *)(**(code **)(*local_18 + 0x44))();
LAB_100d6ca3:
            FString::operator*(pFVar4);
            goto LAB_100d6cb1;
          }
          pFVar4 = (FString *)FUN_100d62d0();
          local_8 = 2;
          FString::operator*(pFVar4);
          FUN_1000b3d0();
          pFVar4 = local_40;
LAB_100d6d92:
          local_8 = 0;
          FString::~FString(pFVar4);
          local_1c = local_1c + 1;
          in_ECX = local_18;
        }
        else {
          FUN_100d6250();
          FUN_1000b270();
          local_1c = local_1c + 1;
        }
      }
      else {
        FUN_100d61d0();
        FUN_1000b110();
        local_1c = local_1c + 1;
      }
      goto LAB_100d6bb1;
    }
    iVar3 = FUN_100d61d0();
    if (iVar3 == -9999) {
      iVar3 = FUN_100d6250();
      if (iVar3 == -9999) {
        pFVar4 = (FString *)FUN_100d62d0();
        local_8 = 3;
        iVar3 = FString::operator!=(pFVar4,(ushort *)L"undefined");
        local_8 = 0;
        FString::~FString(local_4c);
        if (iVar3 == 0) {
          pFVar4 = (FString *)(**(code **)(*local_18 + 0x44))();
          goto LAB_100d6ca3;
        }
        pFVar4 = (FString *)FUN_100d62d0();
        local_8 = 4;
        FUN_100d6370();
        FString::operator*(pFVar4);
        FUN_1000b480();
        pFVar4 = local_58;
        goto LAB_100d6d92;
      }
      FUN_100d6370();
      FUN_100d6250();
      FUN_1000b320();
      local_1c = local_1c + 1;
    }
    else {
      FUN_100d6370();
      FUN_100d61d0();
      FUN_1000b1c0();
      local_1c = local_1c + 1;
    }
  } while( true );
}


// ==== 100d6e0a Catch@100d6e0a

void Catch_100d6e0a(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x1c) = *(undefined4 *)(unaff_EBP + -0x24);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x1c,&DAT_102a47f0);
}


// ==== 100d6e1e Catch@100d6e1e

void Catch_100d6e1e(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"XMLComboBoxData::Create");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100d6e40 FUN_100d6e40

void FUN_100d6e40(byte param_1)

{
  FUN_100d6790();
  if ((param_1 & 1) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))();
  }
  return;
}


// ==== 100d6e70 FUN_100d6e70

undefined4 FUN_100d6e70(void)

{
  undefined4 *in_ECX;
  
  return *in_ECX;
}


// ==== 100d6eb6 Catch@100d6eb6

void Catch_100d6eb6(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 100d6eca Catch@100d6eca

void Catch_100d6eca(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"XMLConstantItemData::GetID");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100d6ef0 FUN_100d6ef0

undefined4 FUN_100d6ef0(void)

{
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101f94f0;
  local_10 = ExceptionList;
  local_8 = 0;
  if (*(int *)(DAT_103663bc + 0x5068) == 0) {
    return 0;
  }
  ExceptionList = &local_10;
  FUN_1000c170(*(undefined4 *)(in_ECX + 4),*(undefined4 *)(in_ECX + 8));
  ExceptionList = local_10;
  return 1;
}


// ==== 100d6f6e Catch@100d6f6e

void Catch_100d6f6e(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 100d6f82 Catch@100d6f82

void Catch_100d6f82(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"XMLConstantItemData::Create");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100d6fa0 FUN_100d6fa0

void FUN_100d6fa0(void)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 4) = 0xffffd8f1;
  *(undefined4 *)(in_ECX + 8) = 0xffffd8f1;
  return;
}


// ==== 100d6ff6 Catch@100d6ff6

void Catch_100d6ff6(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 100d700a Catch@100d700a

void Catch_100d700a(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"XMLConstantIntData::Init");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100d7030 FUN_100d7030

void FUN_100d7030(void)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 4) = 0xffffd8f1;
  *(undefined4 *)(in_ECX + 8) = 0xffffd8f1;
  return;
}


// ==== 100d7086 Catch@100d7086

void Catch_100d7086(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 100d709a Catch@100d709a

void Catch_100d709a(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"XMLConstantIntData::Destroy");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100d70c0 FUN_100d70c0

undefined4 FUN_100d70c0(void)

{
  int in_ECX;
  FString aFStack_3c [12];
  uint uStack_30;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  puStack_c = &LAB_101f9559;
  local_10 = ExceptionList;
  uStack_30 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_8 = 0;
  if (*(int *)(DAT_103663bc + 0x5068) == 0) {
    return 0;
  }
  ExceptionList = &local_10;
  FString::FString(aFStack_3c,(FString *)(in_ECX + 8));
  local_8 = local_8 & 0xffffff00;
  FUN_1000c200(*(undefined4 *)(in_ECX + 4));
  ExceptionList = local_10;
  return 1;
}


// ==== 100d715c Catch@100d715c

void Catch_100d715c(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 100d7170 Catch@100d7170

void Catch_100d7170(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"XMLConstantStringData::Create");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100d7190 FUN_100d7190

void FUN_100d7190(void)

{
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101f9580;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  *(undefined4 *)(in_ECX + 4) = 0xffffd8f1;
  FString::operator=((FString *)(in_ECX + 8),(ushort *)L"undefined");
  ExceptionList = local_10;
  return;
}


// ==== 100d71f0 Catch@100d71f0

void Catch_100d71f0(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 100d7204 Catch@100d7204

void Catch_100d7204(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"XMLConstantStringData::Init");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100d7230 FUN_100d7230

void FUN_100d7230(void)

{
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101f95a0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  *(undefined4 *)(in_ECX + 4) = 0xffffd8f1;
  FString::operator=((FString *)(in_ECX + 8),(ushort *)L"undefined");
  ExceptionList = local_10;
  return;
}


// ==== 100d7290 Catch@100d7290

void Catch_100d7290(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 100d72a4 Catch@100d72a4

void Catch_100d72a4(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"XMLConstantStringData::Destroy");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100d72d0 FUN_100d72d0

undefined4 FUN_100d72d0(void)

{
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101f95c0;
  local_10 = ExceptionList;
  local_8 = 0;
  if (*(int *)(DAT_103663bc + 0x5068) == 0) {
    return 0;
  }
  ExceptionList = &local_10;
  FUN_1000c2b0(*(undefined4 *)(in_ECX + 4),*(undefined4 *)(in_ECX + 8));
  ExceptionList = local_10;
  return 1;
}


// ==== 100d734e Catch@100d734e

void Catch_100d734e(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 100d7362 Catch@100d7362

void Catch_100d7362(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"XMLConstantBoolData::Create");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100d7380 FUN_100d7380

void FUN_100d7380(void)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 4) = 0xffffd8f1;
  *(undefined4 *)(in_ECX + 8) = 0xffffffff;
  return;
}


// ==== 100d73d4 Catch@100d73d4

void Catch_100d73d4(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 100d73e8 Catch@100d73e8

void Catch_100d73e8(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"XMLConstantBoolData::Init");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100d7410 FUN_100d7410

void FUN_100d7410(void)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 4) = 0xffffd8f1;
  *(undefined4 *)(in_ECX + 8) = 0xffffffff;
  return;
}


// ==== 100d7464 Catch@100d7464

void Catch_100d7464(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 100d7478 Catch@100d7478

void Catch_100d7478(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"XMLConstantBoolData::Destroy");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100d74a0 FUN_100d74a0

undefined4 FUN_100d74a0(void)

{
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101f9620;
  local_10 = ExceptionList;
  local_8 = 0;
  if (*(int *)(DAT_103663bc + 0x5068) == 0) {
    return 0;
  }
  ExceptionList = &local_10;
  FUN_1000c340(*(undefined4 *)(in_ECX + 4),*(undefined4 *)(in_ECX + 8));
  ExceptionList = local_10;
  return 1;
}


// ==== 100d7524 Catch@100d7524

void Catch_100d7524(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 100d7538 Catch@100d7538

void Catch_100d7538(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"XMLConstantFloatData::Create");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100d7560 FUN_100d7560

void FUN_100d7560(void)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 4) = 0xffffd8f1;
  *(undefined4 *)(in_ECX + 8) = 0xc61c3c00;
  return;
}


// ==== 100d75bd Catch@100d75bd

void Catch_100d75bd(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 100d75d1 Catch@100d75d1

void Catch_100d75d1(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"XMLConstantFloatData::Init");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


